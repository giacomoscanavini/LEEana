#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Jan  9 21:29:48 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-7.251417,1.25641,801.854);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__7->SetBinContent(1,55.85032);
   hmc__7->SetBinContent(2,37.64496);
   hmc__7->SetBinContent(3,34.72086);
   hmc__7->SetBinContent(4,33.68321);
   hmc__7->SetBinContent(5,31.70916);
   hmc__7->SetBinContent(6,37.52708);
   hmc__7->SetBinContent(7,31.40829);
   hmc__7->SetBinContent(8,32.38596);
   hmc__7->SetBinContent(9,36.91099);
   hmc__7->SetBinContent(10,47.67104);
   hmc__7->SetBinContent(11,50.65477);
   hmc__7->SetBinContent(12,47.56153);
   hmc__7->SetBinContent(13,55.2561);
   hmc__7->SetBinContent(14,59.14386);
   hmc__7->SetBinContent(15,73.87786);
   hmc__7->SetBinContent(16,83.53824);
   hmc__7->SetBinContent(17,124.5922);
   hmc__7->SetBinContent(18,152.3631);
   hmc__7->SetBinContent(19,205.083);
   hmc__7->SetBinContent(20,362.5708);
   hmc__7->SetBinError(1,22.31224);
   hmc__7->SetBinError(2,24.8467);
   hmc__7->SetBinError(3,14.90094);
   hmc__7->SetBinError(4,16.9204);
   hmc__7->SetBinError(5,17.07574);
   hmc__7->SetBinError(6,13.64728);
   hmc__7->SetBinError(7,14.91915);
   hmc__7->SetBinError(8,12.7681);
   hmc__7->SetBinError(9,14.83878);
   hmc__7->SetBinError(10,17.8696);
   hmc__7->SetBinError(11,16.2913);
   hmc__7->SetBinError(12,18.0148);
   hmc__7->SetBinError(13,20.64514);
   hmc__7->SetBinError(14,21.20379);
   hmc__7->SetBinError(15,28.49401);
   hmc__7->SetBinError(16,33.33195);
   hmc__7->SetBinError(17,43.8911);
   hmc__7->SetBinError(18,45.05395);
   hmc__7->SetBinError(19,49.49259);
   hmc__7->SetBinError(20,74.55649);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-7.251417);
   hmc__7->SetMaximum(761.3987);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,-1,1);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(380.6993);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.933783);
   hbadmatch_stack_1->SetBinContent(2,0.4680692);
   hbadmatch_stack_1->SetBinContent(3,2.399966);
   hbadmatch_stack_1->SetBinContent(4,1.202587);
   hbadmatch_stack_1->SetBinContent(5,1.329144);
   hbadmatch_stack_1->SetBinContent(6,1.163239);
   hbadmatch_stack_1->SetBinContent(7,0.8345929);
   hbadmatch_stack_1->SetBinContent(8,0.8306523);
   hbadmatch_stack_1->SetBinContent(9,4.489677);
   hbadmatch_stack_1->SetBinContent(10,0.9966853);
   hbadmatch_stack_1->SetBinContent(11,2.670686);
   hbadmatch_stack_1->SetBinContent(12,3.535066);
   hbadmatch_stack_1->SetBinContent(13,1.727564);
   hbadmatch_stack_1->SetBinContent(14,2.050378);
   hbadmatch_stack_1->SetBinContent(15,2.669962);
   hbadmatch_stack_1->SetBinContent(16,2.726223);
   hbadmatch_stack_1->SetBinContent(17,3.991366);
   hbadmatch_stack_1->SetBinContent(18,5.160176);
   hbadmatch_stack_1->SetBinContent(19,4.273211);
   hbadmatch_stack_1->SetBinContent(20,8.576135);
   hbadmatch_stack_1->SetBinError(1,0.8914888);
   hbadmatch_stack_1->SetBinError(2,0.3312849);
   hbadmatch_stack_1->SetBinError(3,0.8403986);
   hbadmatch_stack_1->SetBinError(4,0.4914582);
   hbadmatch_stack_1->SetBinError(5,0.5841319);
   hbadmatch_stack_1->SetBinError(6,0.6370287);
   hbadmatch_stack_1->SetBinError(7,0.3701396);
   hbadmatch_stack_1->SetBinError(8,0.4159333);
   hbadmatch_stack_1->SetBinError(9,1.241377);
   hbadmatch_stack_1->SetBinError(10,0.5377641);
   hbadmatch_stack_1->SetBinError(11,0.86112);
   hbadmatch_stack_1->SetBinError(12,1.097242);
   hbadmatch_stack_1->SetBinError(13,0.6726772);
   hbadmatch_stack_1->SetBinError(14,0.8386317);
   hbadmatch_stack_1->SetBinError(15,0.9482102);
   hbadmatch_stack_1->SetBinError(16,0.8708205);
   hbadmatch_stack_1->SetBinError(17,1.096747);
   hbadmatch_stack_1->SetBinError(18,1.163103);
   hbadmatch_stack_1->SetBinError(19,1.078918);
   hbadmatch_stack_1->SetBinError(20,1.776733);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,9.798627);
   hext_stack_2->SetBinContent(2,6.863051);
   hext_stack_2->SetBinContent(3,5.814838);
   hext_stack_2->SetBinContent(4,8.388476);
   hext_stack_2->SetBinContent(5,6.788031);
   hext_stack_2->SetBinContent(6,12.17032);
   hext_stack_2->SetBinContent(7,6.635217);
   hext_stack_2->SetBinContent(8,10.08548);
   hext_stack_2->SetBinContent(9,7.455595);
   hext_stack_2->SetBinContent(10,16.0675);
   hext_stack_2->SetBinContent(11,15.52245);
   hext_stack_2->SetBinContent(12,9.787037);
   hext_stack_2->SetBinContent(13,15.11308);
   hext_stack_2->SetBinContent(14,14.76714);
   hext_stack_2->SetBinContent(15,7.544977);
   hext_stack_2->SetBinContent(16,16.01566);
   hext_stack_2->SetBinContent(17,25.70613);
   hext_stack_2->SetBinContent(18,24.35947);
   hext_stack_2->SetBinContent(19,26.89122);
   hext_stack_2->SetBinContent(20,41.81116);
   hext_stack_2->SetBinError(1,2.104108);
   hext_stack_2->SetBinError(2,1.846923);
   hext_stack_2->SetBinError(3,1.683489);
   hext_stack_2->SetBinError(4,2.068721);
   hext_stack_2->SetBinError(5,1.774777);
   hext_stack_2->SetBinError(6,2.507414);
   hext_stack_2->SetBinError(7,1.721504);
   hext_stack_2->SetBinError(8,2.251014);
   hext_stack_2->SetBinError(9,1.758699);
   hext_stack_2->SetBinError(10,2.772193);
   hext_stack_2->SetBinError(11,2.632693);
   hext_stack_2->SetBinError(12,2.119752);
   hext_stack_2->SetBinError(13,2.664971);
   hext_stack_2->SetBinError(14,2.75689);
   hext_stack_2->SetBinError(15,1.718112);
   hext_stack_2->SetBinError(16,2.700297);
   hext_stack_2->SetBinError(17,3.482423);
   hext_stack_2->SetBinError(18,3.31309);
   hext_stack_2->SetBinError(19,3.389847);
   hext_stack_2->SetBinError(20,4.390645);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.5758626);
   hdirt_stack_3->SetBinContent(3,1.013374);
   hdirt_stack_3->SetBinContent(4,2.09953);
   hdirt_stack_3->SetBinContent(5,0.6417377);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.804172);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.660638);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinContent(12,0.5930034);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.6345888);
   hdirt_stack_3->SetBinContent(15,0.8361309);
   hdirt_stack_3->SetBinContent(16,1.587271);
   hdirt_stack_3->SetBinContent(17,1.782619);
   hdirt_stack_3->SetBinContent(18,3.108204);
   hdirt_stack_3->SetBinContent(19,2.615909);
   hdirt_stack_3->SetBinContent(20,4.286158);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3389606);
   hdirt_stack_3->SetBinError(3,0.6030184);
   hdirt_stack_3->SetBinError(4,1.084521);
   hdirt_stack_3->SetBinError(5,0.4010207);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4725875);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.394465);
   hdirt_stack_3->SetBinError(11,0.4028472);
   hdirt_stack_3->SetBinError(12,0.4234405);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetBinError(14,0.398124);
   hdirt_stack_3->SetBinError(15,0.4291904);
   hdirt_stack_3->SetBinError(16,0.6025866);
   hdirt_stack_3->SetBinError(17,0.7187535);
   hdirt_stack_3->SetBinError(18,0.9049766);
   hdirt_stack_3->SetBinError(19,0.8932114);
   hdirt_stack_3->SetBinError(20,1.14074);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,15.47166);
   houtFV_stack_4->SetBinContent(2,13.04593);
   houtFV_stack_4->SetBinContent(3,9.915108);
   houtFV_stack_4->SetBinContent(4,8.715879);
   houtFV_stack_4->SetBinContent(5,7.327529);
   houtFV_stack_4->SetBinContent(6,9.202035);
   houtFV_stack_4->SetBinContent(7,8.261977);
   houtFV_stack_4->SetBinContent(8,6.356891);
   houtFV_stack_4->SetBinContent(9,7.779461);
   houtFV_stack_4->SetBinContent(10,6.715248);
   houtFV_stack_4->SetBinContent(11,9.748702);
   houtFV_stack_4->SetBinContent(12,9.600624);
   houtFV_stack_4->SetBinContent(13,6.682504);
   houtFV_stack_4->SetBinContent(14,10.16959);
   houtFV_stack_4->SetBinContent(15,16.56094);
   houtFV_stack_4->SetBinContent(16,13.45152);
   houtFV_stack_4->SetBinContent(17,21.57786);
   houtFV_stack_4->SetBinContent(18,31.1359);
   houtFV_stack_4->SetBinContent(19,39.12882);
   houtFV_stack_4->SetBinContent(20,57.83923);
   houtFV_stack_4->SetBinError(1,1.986063);
   houtFV_stack_4->SetBinError(2,1.8387);
   houtFV_stack_4->SetBinError(3,1.567587);
   houtFV_stack_4->SetBinError(4,1.47483);
   houtFV_stack_4->SetBinError(5,1.292493);
   houtFV_stack_4->SetBinError(6,1.898128);
   houtFV_stack_4->SetBinError(7,1.472564);
   houtFV_stack_4->SetBinError(8,1.245376);
   houtFV_stack_4->SetBinError(9,1.389921);
   houtFV_stack_4->SetBinError(10,1.270307);
   houtFV_stack_4->SetBinError(11,1.551601);
   houtFV_stack_4->SetBinError(12,1.561647);
   houtFV_stack_4->SetBinError(13,1.325374);
   houtFV_stack_4->SetBinError(14,1.538394);
   houtFV_stack_4->SetBinError(15,2.069006);
   houtFV_stack_4->SetBinError(16,1.936494);
   houtFV_stack_4->SetBinError(17,2.286138);
   houtFV_stack_4->SetBinError(18,2.913585);
   houtFV_stack_4->SetBinError(19,3.098168);
   houtFV_stack_4->SetBinError(20,4.027814);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3230013);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2263375);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.202419);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1703501);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7172575);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.326547);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,11.60851);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1726854);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1978906);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2024189);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1308497);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3663344);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4927026);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.242604);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.09327726);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.03712227);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01778102);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05455795);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1081297);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.03450397);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.04683727);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09561049);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1251376);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.669336);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5098587);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07723082);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02625185);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01283426);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03151795);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05461833);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02449786);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03375293);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.0649669);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.06177525);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3246079);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1900095);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.961359);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.994903);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.723281);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.26917);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.334282);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.570171);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.009817);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.485062);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.121537);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.512601);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.788788);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.172492);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.578873);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.005345);
   hNCpi0inFVres_stack_7->SetBinContent(15,12.93506);
   hNCpi0inFVres_stack_7->SetBinContent(16,13.67924);
   hNCpi0inFVres_stack_7->SetBinContent(17,19.58009);
   hNCpi0inFVres_stack_7->SetBinContent(18,25.34943);
   hNCpi0inFVres_stack_7->SetBinContent(19,31.10298);
   hNCpi0inFVres_stack_7->SetBinContent(20,49.05083);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7217584);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6429491);
   hNCpi0inFVres_stack_7->SetBinError(3,0.455192);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5151418);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5225047);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5411655);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6445946);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5795961);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5214405);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7096453);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7006506);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8895498);
   hNCpi0inFVres_stack_7->SetBinError(13,0.791276);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8654597);
   hNCpi0inFVres_stack_7->SetBinError(15,1.07618);
   hNCpi0inFVres_stack_7->SetBinError(16,1.20204);
   hNCpi0inFVres_stack_7->SetBinError(17,1.450203);
   hNCpi0inFVres_stack_7->SetBinError(18,1.720007);
   hNCpi0inFVres_stack_7->SetBinError(19,1.745129);
   hNCpi0inFVres_stack_7->SetBinError(20,2.318228);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.875202);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8368973);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5052478);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.244465);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.027636);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7586961);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6064227);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.198162);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6969432);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.153433);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.615901);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5914466);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.887316);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.105887);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.286125);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.636052);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.581556);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.763717);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.20766);
   hNCpi0inFVdis_stack_8->SetBinContent(20,23.36992);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6248138);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2363344);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1558941);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3847347);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3944442);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.349134);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1892048);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6154348);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2197499);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3234667);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4630402);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1444346);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4863748);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2567916);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4722259);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7694553);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9013443);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9279594);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.195864);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.025187);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05124236);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02964072);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.34261);
   hCCpi0inFV_stack_10->SetBinContent(2,6.421288);
   hCCpi0inFV_stack_10->SetBinContent(3,6.954397);
   hCCpi0inFV_stack_10->SetBinContent(4,3.668578);
   hCCpi0inFV_stack_10->SetBinContent(5,5.587462);
   hCCpi0inFV_stack_10->SetBinContent(6,5.054636);
   hCCpi0inFV_stack_10->SetBinContent(7,5.742325);
   hCCpi0inFV_stack_10->SetBinContent(8,5.479952);
   hCCpi0inFV_stack_10->SetBinContent(9,6.614456);
   hCCpi0inFV_stack_10->SetBinContent(10,8.375338);
   hCCpi0inFV_stack_10->SetBinContent(11,7.664925);
   hCCpi0inFV_stack_10->SetBinContent(12,7.97103);
   hCCpi0inFV_stack_10->SetBinContent(13,9.855442);
   hCCpi0inFV_stack_10->SetBinContent(14,9.68452);
   hCCpi0inFV_stack_10->SetBinContent(15,15.90256);
   hCCpi0inFV_stack_10->SetBinContent(16,15.35207);
   hCCpi0inFV_stack_10->SetBinContent(17,23.49986);
   hCCpi0inFV_stack_10->SetBinContent(18,31.79332);
   hCCpi0inFV_stack_10->SetBinContent(19,45.8678);
   hCCpi0inFV_stack_10->SetBinContent(20,85.26335);
   hCCpi0inFV_stack_10->SetBinError(1,1.736062);
   hCCpi0inFV_stack_10->SetBinError(2,1.252409);
   hCCpi0inFV_stack_10->SetBinError(3,1.3192);
   hCCpi0inFV_stack_10->SetBinError(4,0.9104574);
   hCCpi0inFV_stack_10->SetBinError(5,1.174399);
   hCCpi0inFV_stack_10->SetBinError(6,1.15111);
   hCCpi0inFV_stack_10->SetBinError(7,1.182934);
   hCCpi0inFV_stack_10->SetBinError(8,1.188178);
   hCCpi0inFV_stack_10->SetBinError(9,1.267083);
   hCCpi0inFV_stack_10->SetBinError(10,1.465948);
   hCCpi0inFV_stack_10->SetBinError(11,1.306011);
   hCCpi0inFV_stack_10->SetBinError(12,1.416192);
   hCCpi0inFV_stack_10->SetBinError(13,1.574839);
   hCCpi0inFV_stack_10->SetBinError(14,1.501442);
   hCCpi0inFV_stack_10->SetBinError(15,2.09365);
   hCCpi0inFV_stack_10->SetBinError(16,1.924671);
   hCCpi0inFV_stack_10->SetBinError(17,2.436463);
   hCCpi0inFV_stack_10->SetBinError(18,2.876455);
   hCCpi0inFV_stack_10->SetBinError(19,3.451322);
   hCCpi0inFV_stack_10->SetBinError(20,4.698487);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.363097);
   hNCinFV_stack_11->SetBinContent(2,2.147486);
   hNCinFV_stack_11->SetBinContent(3,0.7463525);
   hNCinFV_stack_11->SetBinContent(4,1.296647);
   hNCinFV_stack_11->SetBinContent(5,0.5138904);
   hNCinFV_stack_11->SetBinContent(6,0.6605878);
   hNCinFV_stack_11->SetBinContent(7,1.840158);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(9,1.13598);
   hNCinFV_stack_11->SetBinContent(10,0.6475151);
   hNCinFV_stack_11->SetBinContent(11,0.9959227);
   hNCinFV_stack_11->SetBinContent(12,0.8782265);
   hNCinFV_stack_11->SetBinContent(13,2.524796);
   hNCinFV_stack_11->SetBinContent(14,1.069508);
   hNCinFV_stack_11->SetBinContent(15,3.558515);
   hNCinFV_stack_11->SetBinContent(16,2.137279);
   hNCinFV_stack_11->SetBinContent(17,3.010053);
   hNCinFV_stack_11->SetBinContent(18,6.707812);
   hNCinFV_stack_11->SetBinContent(19,13.73931);
   hNCinFV_stack_11->SetBinContent(20,24.70158);
   hNCinFV_stack_11->SetBinError(1,0.5427932);
   hNCinFV_stack_11->SetBinError(2,0.806611);
   hNCinFV_stack_11->SetBinError(3,0.4300061);
   hNCinFV_stack_11->SetBinError(4,0.6820068);
   hNCinFV_stack_11->SetBinError(5,0.3027413);
   hNCinFV_stack_11->SetBinError(6,0.4119686);
   hNCinFV_stack_11->SetBinError(7,0.6658858);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(9,0.4996863);
   hNCinFV_stack_11->SetBinError(10,0.408234);
   hNCinFV_stack_11->SetBinError(11,0.4560588);
   hNCinFV_stack_11->SetBinError(12,0.4076063);
   hNCinFV_stack_11->SetBinError(13,0.9807809);
   hNCinFV_stack_11->SetBinError(14,0.4771825);
   hNCinFV_stack_11->SetBinError(15,1.2386);
   hNCinFV_stack_11->SetBinError(16,0.6703636);
   hNCinFV_stack_11->SetBinError(17,0.7821004);
   hNCinFV_stack_11->SetBinError(18,1.30352);
   hNCinFV_stack_11->SetBinError(19,2.057652);
   hNCinFV_stack_11->SetBinError(20,2.74625);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.457118);
   hnumuCCinFV_stack_12->SetBinContent(2,2.633338);
   hnumuCCinFV_stack_12->SetBinContent(3,4.348404);
   hnumuCCinFV_stack_12->SetBinContent(4,3.584625);
   hnumuCCinFV_stack_12->SetBinContent(5,4.63056);
   hnumuCCinFV_stack_12->SetBinContent(6,4.790514);
   hnumuCCinFV_stack_12->SetBinContent(7,3.330492);
   hnumuCCinFV_stack_12->SetBinContent(8,3.589881);
   hnumuCCinFV_stack_12->SetBinContent(9,4.161767);
   hnumuCCinFV_stack_12->SetBinContent(10,7.526392);
   hnumuCCinFV_stack_12->SetBinContent(11,6.035763);
   hnumuCCinFV_stack_12->SetBinContent(12,7.42494);
   hnumuCCinFV_stack_12->SetBinContent(13,9.305054);
   hnumuCCinFV_stack_12->SetBinContent(14,10.52229);
   hnumuCCinFV_stack_12->SetBinContent(15,10.77993);
   hnumuCCinFV_stack_12->SetBinContent(16,14.9061);
   hnumuCCinFV_stack_12->SetBinContent(17,19.39998);
   hnumuCCinFV_stack_12->SetBinContent(18,16.94766);
   hnumuCCinFV_stack_12->SetBinContent(19,27.52834);
   hnumuCCinFV_stack_12->SetBinContent(20,47.45432);
   hnumuCCinFV_stack_12->SetBinError(1,1.164838);
   hnumuCCinFV_stack_12->SetBinError(2,0.8663823);
   hnumuCCinFV_stack_12->SetBinError(3,1.060706);
   hnumuCCinFV_stack_12->SetBinError(4,1.028444);
   hnumuCCinFV_stack_12->SetBinError(5,1.135413);
   hnumuCCinFV_stack_12->SetBinError(6,1.189866);
   hnumuCCinFV_stack_12->SetBinError(7,0.9402645);
   hnumuCCinFV_stack_12->SetBinError(8,1.074038);
   hnumuCCinFV_stack_12->SetBinError(9,1.022302);
   hnumuCCinFV_stack_12->SetBinError(10,1.800925);
   hnumuCCinFV_stack_12->SetBinError(11,1.340406);
   hnumuCCinFV_stack_12->SetBinError(12,1.445829);
   hnumuCCinFV_stack_12->SetBinError(13,1.762886);
   hnumuCCinFV_stack_12->SetBinError(14,1.821006);
   hnumuCCinFV_stack_12->SetBinError(15,1.791484);
   hnumuCCinFV_stack_12->SetBinError(16,2.242512);
   hnumuCCinFV_stack_12->SetBinError(17,2.298522);
   hnumuCCinFV_stack_12->SetBinError(18,2.072763);
   hnumuCCinFV_stack_12->SetBinError(19,3.528806);
   hnumuCCinFV_stack_12->SetBinError(20,4.499216);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.5667402);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(20,8.048536);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.3304775);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.438694);
   hnueCCinFV_stack_13->SetBinError(20,2.398199);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__8->SetBinContent(1,55.85032);
   hmcerror__8->SetBinContent(2,37.64496);
   hmcerror__8->SetBinContent(3,34.72086);
   hmcerror__8->SetBinContent(4,33.68321);
   hmcerror__8->SetBinContent(5,31.70916);
   hmcerror__8->SetBinContent(6,37.52708);
   hmcerror__8->SetBinContent(7,31.40829);
   hmcerror__8->SetBinContent(8,32.38596);
   hmcerror__8->SetBinContent(9,36.91099);
   hmcerror__8->SetBinContent(10,47.67104);
   hmcerror__8->SetBinContent(11,50.65477);
   hmcerror__8->SetBinContent(12,47.56153);
   hmcerror__8->SetBinContent(13,55.2561);
   hmcerror__8->SetBinContent(14,59.14386);
   hmcerror__8->SetBinContent(15,73.87786);
   hmcerror__8->SetBinContent(16,83.53824);
   hmcerror__8->SetBinContent(17,124.5922);
   hmcerror__8->SetBinContent(18,152.3631);
   hmcerror__8->SetBinContent(19,205.083);
   hmcerror__8->SetBinContent(20,362.5708);
   hmcerror__8->SetBinError(1,22.31224);
   hmcerror__8->SetBinError(2,24.8467);
   hmcerror__8->SetBinError(3,14.90094);
   hmcerror__8->SetBinError(4,16.9204);
   hmcerror__8->SetBinError(5,17.07574);
   hmcerror__8->SetBinError(6,13.64728);
   hmcerror__8->SetBinError(7,14.91915);
   hmcerror__8->SetBinError(8,12.7681);
   hmcerror__8->SetBinError(9,14.83878);
   hmcerror__8->SetBinError(10,17.8696);
   hmcerror__8->SetBinError(11,16.2913);
   hmcerror__8->SetBinError(12,18.0148);
   hmcerror__8->SetBinError(13,20.64514);
   hmcerror__8->SetBinError(14,21.20379);
   hmcerror__8->SetBinError(15,28.49401);
   hmcerror__8->SetBinError(16,33.33195);
   hmcerror__8->SetBinError(17,43.8911);
   hmcerror__8->SetBinError(18,45.05395);
   hmcerror__8->SetBinError(19,49.49259);
   hmcerror__8->SetBinError(20,74.55649);
   hmcerror__8->SetBinError(21,0.3895343);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3009[20] = {
   65,
   27,
   29,
   30,
   28,
   32,
   32,
   31,
   32,
   45,
   44,
   40,
   46,
   62,
   55,
   86,
   92,
   145,
   213,
   336};
   Double_t _felx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3009[20] = {
   8.1893,
   5.3414,
   5.5285,
   5.6197,
   5.4358,
   5.7977,
   5.7977,
   5.7094,
   5.7977,
   6.8416,
   6.7671,
   6.4604,
   6.9153,
   8.0018,
   7.546,
   9.3967,
   9.7138,
   12.04159,
   14.59452,
   18.3303};
   Double_t _fehx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3009[20] = {
   7.9866,
   5.1322,
   5.3201,
   5.4117,
   5.2271,
   5.5904,
   5.5904,
   5.5017,
   5.5904,
   6.637,
   6.5623,
   6.2549,
   6.7108,
   7.7989,
   7.3425,
   9.1951,
   9.513,
   12.04159,
   14.59452,
   18.3303};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(19.49274);
   Graph_Graph3009->SetMaximum(387.5975);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  220.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.9","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.2","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3010[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3010[20] = {
   0.3995006,
   0.6600274,
   0.4291638,
   0.5023394,
   0.5385112,
   0.3636648,
   0.4750067,
   0.3942479,
   0.4020153,
   0.3748523,
   0.3216143,
   0.3787683,
   0.3736265,
   0.3585122,
   0.3856908,
   0.3990024,
   0.3522781,
   0.2957012,
   0.2413295,
   0.2056329};
   Double_t _fehx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3010[20] = {
   0.3995006,
   0.6600274,
   0.4291638,
   0.5023394,
   0.5385112,
   0.3636648,
   0.4750067,
   0.3942479,
   0.4020153,
   0.3748523,
   0.3216143,
   0.3787683,
   0.3736265,
   0.3585122,
   0.3856908,
   0.3990024,
   0.3522781,
   0.2957012,
   0.2413295,
   0.2056329};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3011[20] = {
   0.2096178,
   0.2052119,
   0.2041303,
   0.2216214,
   0.2474063,
   0.1824232,
   0.2188703,
   0.2152527,
   0.2252099,
   0.2153367,
   0.2069978,
   0.2359202,
   0.2037722,
   0.239734,
   0.2519449,
   0.2168438,
   0.2107821,
   0.2072888,
   0.2024746,
   0.1754369};
   Double_t _fehx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3011[20] = {
   0.2096178,
   0.2052119,
   0.2041303,
   0.2216214,
   0.2474063,
   0.1824232,
   0.2188703,
   0.2152527,
   0.2252099,
   0.2153367,
   0.2069978,
   0.2359202,
   0.2037722,
   0.239734,
   0.2519449,
   0.2168438,
   0.2107821,
   0.2072888,
   0.2024746,
   0.1754369};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3012[20] = {
   1.163825,
   0.7172275,
   0.8352327,
   0.8906514,
   0.8830256,
   0.8527175,
   1.018839,
   0.9572048,
   0.8669505,
   0.9439694,
   0.8686249,
   0.8410158,
   0.8324873,
   1.048291,
   0.744472,
   1.029469,
   0.738409,
   0.9516739,
   1.038604,
   0.9267155};
   Double_t _felx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3012[20] = {
   0.1466294,
   0.1418889,
   0.159227,
   0.1668398,
   0.1714268,
   0.1544938,
   0.1845914,
   0.1762924,
   0.1570725,
   0.1435169,
   0.1335925,
   0.1358325,
   0.12515,
   0.1352938,
   0.1021416,
   0.1124838,
   0.07796476,
   0.07903222,
   0.07116395,
   0.05055647};
   Double_t _fehx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3012[20] = {
   0.1430001,
   0.1363317,
   0.1532249,
   0.1606646,
   0.1648451,
   0.1489697,
   0.1779912,
   0.1698792,
   0.1514563,
   0.139225,
   0.1295495,
   0.1315117,
   0.121449,
   0.1318632,
   0.09938701,
   0.1100706,
   0.0763531,
   0.07903222,
   0.07116395,
   0.05055647};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.50219);
   Graph_Graph3012->SetMaximum(1.379974);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
