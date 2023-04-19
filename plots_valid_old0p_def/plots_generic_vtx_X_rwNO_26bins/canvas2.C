#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Feb 20 22:44:30 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-40,-82.26,293.3333,9096.224);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__4->SetBinContent(0,244.2231);
   hmc__4->SetBinContent(1,1045.807);
   hmc__4->SetBinContent(2,2153.714);
   hmc__4->SetBinContent(3,2735.76);
   hmc__4->SetBinContent(4,2979.941);
   hmc__4->SetBinContent(5,3240.171);
   hmc__4->SetBinContent(6,3389.132);
   hmc__4->SetBinContent(7,3538.291);
   hmc__4->SetBinContent(8,3671.934);
   hmc__4->SetBinContent(9,3729.174);
   hmc__4->SetBinContent(10,3941.251);
   hmc__4->SetBinContent(11,3984.281);
   hmc__4->SetBinContent(12,3942.864);
   hmc__4->SetBinContent(13,4005.831);
   hmc__4->SetBinContent(14,3841.78);
   hmc__4->SetBinContent(15,3922.867);
   hmc__4->SetBinContent(16,3875.136);
   hmc__4->SetBinContent(17,3868.785);
   hmc__4->SetBinContent(18,3667.111);
   hmc__4->SetBinContent(19,3782.794);
   hmc__4->SetBinContent(20,3577.604);
   hmc__4->SetBinContent(21,3467.96);
   hmc__4->SetBinContent(22,3337.495);
   hmc__4->SetBinContent(23,3095.217);
   hmc__4->SetBinContent(24,2737.862);
   hmc__4->SetBinContent(25,2161.622);
   hmc__4->SetBinContent(26,612.7193);
   hmc__4->SetBinContent(27,41.92289);
   hmc__4->SetBinError(0,9.742555);
   hmc__4->SetBinError(1,153.709);
   hmc__4->SetBinError(2,300.755);
   hmc__4->SetBinError(3,394.6755);
   hmc__4->SetBinError(4,422.8985);
   hmc__4->SetBinError(5,459.1751);
   hmc__4->SetBinError(6,475.1935);
   hmc__4->SetBinError(7,495.2491);
   hmc__4->SetBinError(8,518.166);
   hmc__4->SetBinError(9,528.9046);
   hmc__4->SetBinError(10,548.0089);
   hmc__4->SetBinError(11,542.6092);
   hmc__4->SetBinError(12,547.9984);
   hmc__4->SetBinError(13,556.6146);
   hmc__4->SetBinError(14,525.2104);
   hmc__4->SetBinError(15,544.3416);
   hmc__4->SetBinError(16,519.4956);
   hmc__4->SetBinError(17,516.1503);
   hmc__4->SetBinError(18,496.3965);
   hmc__4->SetBinError(19,549.6858);
   hmc__4->SetBinError(20,491.0369);
   hmc__4->SetBinError(21,476.2207);
   hmc__4->SetBinError(22,465.1616);
   hmc__4->SetBinError(23,434.6864);
   hmc__4->SetBinError(24,375.4976);
   hmc__4->SetBinError(25,326.524);
   hmc__4->SetBinError(26,112.5924);
   hmc__4->SetBinError(27,20.4299);
   hmc__4->SetMinimum(-82.26);
   hmc__4->SetMaximum(8637.3);
   hmc__4->SetEntries(76141.51);
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
   hs2_stack_2->SetMinimum(-3.571482e-09);
   hs2_stack_2->SetMaximum(4206.123);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,32.76916);
   hbadmatch_stack_1->SetBinContent(1,57.36119);
   hbadmatch_stack_1->SetBinContent(2,54.48988);
   hbadmatch_stack_1->SetBinContent(3,68.21638);
   hbadmatch_stack_1->SetBinContent(4,66.75632);
   hbadmatch_stack_1->SetBinContent(5,83.75076);
   hbadmatch_stack_1->SetBinContent(6,91.2076);
   hbadmatch_stack_1->SetBinContent(7,91.42706);
   hbadmatch_stack_1->SetBinContent(8,125.1793);
   hbadmatch_stack_1->SetBinContent(9,126.8332);
   hbadmatch_stack_1->SetBinContent(10,137.1603);
   hbadmatch_stack_1->SetBinContent(11,142.6739);
   hbadmatch_stack_1->SetBinContent(12,145.9931);
   hbadmatch_stack_1->SetBinContent(13,145.4235);
   hbadmatch_stack_1->SetBinContent(14,148.9584);
   hbadmatch_stack_1->SetBinContent(15,148.0292);
   hbadmatch_stack_1->SetBinContent(16,144.8175);
   hbadmatch_stack_1->SetBinContent(17,130.2758);
   hbadmatch_stack_1->SetBinContent(18,125.6699);
   hbadmatch_stack_1->SetBinContent(19,127.6948);
   hbadmatch_stack_1->SetBinContent(20,116.0466);
   hbadmatch_stack_1->SetBinContent(21,91.23451);
   hbadmatch_stack_1->SetBinContent(22,96.46569);
   hbadmatch_stack_1->SetBinContent(23,87.46566);
   hbadmatch_stack_1->SetBinContent(24,86.21474);
   hbadmatch_stack_1->SetBinContent(25,83.57537);
   hbadmatch_stack_1->SetBinContent(26,54.49419);
   hbadmatch_stack_1->SetBinContent(27,4.524344);
   hbadmatch_stack_1->SetBinError(0,3.523291);
   hbadmatch_stack_1->SetBinError(1,6.727571);
   hbadmatch_stack_1->SetBinError(2,5.255671);
   hbadmatch_stack_1->SetBinError(3,5.148671);
   hbadmatch_stack_1->SetBinError(4,5.192697);
   hbadmatch_stack_1->SetBinError(5,6.538638);
   hbadmatch_stack_1->SetBinError(6,6.565895);
   hbadmatch_stack_1->SetBinError(7,5.527445);
   hbadmatch_stack_1->SetBinError(8,8.54339);
   hbadmatch_stack_1->SetBinError(9,7.288451);
   hbadmatch_stack_1->SetBinError(10,7.155988);
   hbadmatch_stack_1->SetBinError(11,9.016819);
   hbadmatch_stack_1->SetBinError(12,8.064007);
   hbadmatch_stack_1->SetBinError(13,6.969685);
   hbadmatch_stack_1->SetBinError(14,7.891047);
   hbadmatch_stack_1->SetBinError(15,8.008565);
   hbadmatch_stack_1->SetBinError(16,11.11307);
   hbadmatch_stack_1->SetBinError(17,7.235968);
   hbadmatch_stack_1->SetBinError(18,7.467089);
   hbadmatch_stack_1->SetBinError(19,9.194202);
   hbadmatch_stack_1->SetBinError(20,6.498048);
   hbadmatch_stack_1->SetBinError(21,5.991019);
   hbadmatch_stack_1->SetBinError(22,5.517671);
   hbadmatch_stack_1->SetBinError(23,5.707544);
   hbadmatch_stack_1->SetBinError(24,5.216181);
   hbadmatch_stack_1->SetBinError(25,5.661679);
   hbadmatch_stack_1->SetBinError(26,4.618881);
   hbadmatch_stack_1->SetBinError(27,1.271644);
   hbadmatch_stack_1->SetEntries(10625);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,84.26137);
   hext_stack_2->SetBinContent(1,184.8567);
   hext_stack_2->SetBinContent(2,270.5921);
   hext_stack_2->SetBinContent(3,286.5746);
   hext_stack_2->SetBinContent(4,319.8318);
   hext_stack_2->SetBinContent(5,361.5228);
   hext_stack_2->SetBinContent(6,353.6519);
   hext_stack_2->SetBinContent(7,398.4489);
   hext_stack_2->SetBinContent(8,368.9929);
   hext_stack_2->SetBinContent(9,389.5139);
   hext_stack_2->SetBinContent(10,449.342);
   hext_stack_2->SetBinContent(11,498.0608);
   hext_stack_2->SetBinContent(12,445.7617);
   hext_stack_2->SetBinContent(13,464.8959);
   hext_stack_2->SetBinContent(14,449.8464);
   hext_stack_2->SetBinContent(15,454.1302);
   hext_stack_2->SetBinContent(16,483.0344);
   hext_stack_2->SetBinContent(17,490.1755);
   hext_stack_2->SetBinContent(18,415.498);
   hext_stack_2->SetBinContent(19,411.5217);
   hext_stack_2->SetBinContent(20,405.2121);
   hext_stack_2->SetBinContent(21,396.4151);
   hext_stack_2->SetBinContent(22,399.9403);
   hext_stack_2->SetBinContent(23,366.9083);
   hext_stack_2->SetBinContent(24,332.0139);
   hext_stack_2->SetBinContent(25,281.6006);
   hext_stack_2->SetBinContent(26,94.3219);
   hext_stack_2->SetBinContent(27,13.95394);
   hext_stack_2->SetBinError(0,5.882763);
   hext_stack_2->SetBinError(1,9.521962);
   hext_stack_2->SetBinError(2,11.27071);
   hext_stack_2->SetBinError(3,11.61853);
   hext_stack_2->SetBinError(4,12.2207);
   hext_stack_2->SetBinError(5,12.95448);
   hext_stack_2->SetBinError(6,12.76556);
   hext_stack_2->SetBinError(7,13.48499);
   hext_stack_2->SetBinError(8,12.90418);
   hext_stack_2->SetBinError(9,13.0774);
   hext_stack_2->SetBinError(10,14.31353);
   hext_stack_2->SetBinError(11,15.19281);
   hext_stack_2->SetBinError(12,14.13668);
   hext_stack_2->SetBinError(13,14.56013);
   hext_stack_2->SetBinError(14,14.23243);
   hext_stack_2->SetBinError(15,14.37117);
   hext_stack_2->SetBinError(16,14.8746);
   hext_stack_2->SetBinError(17,15.00115);
   hext_stack_2->SetBinError(18,13.59579);
   hext_stack_2->SetBinError(19,13.77142);
   hext_stack_2->SetBinError(20,13.5888);
   hext_stack_2->SetBinError(21,13.62961);
   hext_stack_2->SetBinError(22,13.7645);
   hext_stack_2->SetBinError(23,13.16165);
   hext_stack_2->SetBinError(24,12.36551);
   hext_stack_2->SetBinError(25,11.56806);
   hext_stack_2->SetBinError(26,6.534591);
   hext_stack_2->SetBinError(27,2.696256);
   hext_stack_2->SetEntries(23297);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,7.49244);
   hdirt_stack_3->SetBinContent(1,56.49812);
   hdirt_stack_3->SetBinContent(2,65.4901);
   hdirt_stack_3->SetBinContent(3,64.32646);
   hdirt_stack_3->SetBinContent(4,70.18719);
   hdirt_stack_3->SetBinContent(5,72.5347);
   hdirt_stack_3->SetBinContent(6,76.36082);
   hdirt_stack_3->SetBinContent(7,68.43018);
   hdirt_stack_3->SetBinContent(8,82.04823);
   hdirt_stack_3->SetBinContent(9,73.65842);
   hdirt_stack_3->SetBinContent(10,84.70585);
   hdirt_stack_3->SetBinContent(11,81.84453);
   hdirt_stack_3->SetBinContent(12,86.20572);
   hdirt_stack_3->SetBinContent(13,84.1257);
   hdirt_stack_3->SetBinContent(14,81.60477);
   hdirt_stack_3->SetBinContent(15,88.41323);
   hdirt_stack_3->SetBinContent(16,88.17456);
   hdirt_stack_3->SetBinContent(17,75.35406);
   hdirt_stack_3->SetBinContent(18,92.24231);
   hdirt_stack_3->SetBinContent(19,82.47549);
   hdirt_stack_3->SetBinContent(20,81.84265);
   hdirt_stack_3->SetBinContent(21,95.18006);
   hdirt_stack_3->SetBinContent(22,76.42393);
   hdirt_stack_3->SetBinContent(23,97.5726);
   hdirt_stack_3->SetBinContent(24,82.5472);
   hdirt_stack_3->SetBinContent(25,91.26059);
   hdirt_stack_3->SetBinContent(26,48.68301);
   hdirt_stack_3->SetBinContent(27,2.993944);
   hdirt_stack_3->SetBinError(0,1.314003);
   hdirt_stack_3->SetBinError(1,4.837953);
   hdirt_stack_3->SetBinError(2,4.697737);
   hdirt_stack_3->SetBinError(3,4.753121);
   hdirt_stack_3->SetBinError(4,5.552594);
   hdirt_stack_3->SetBinError(5,5.750051);
   hdirt_stack_3->SetBinError(6,5.153864);
   hdirt_stack_3->SetBinError(7,5.849548);
   hdirt_stack_3->SetBinError(8,6.505726);
   hdirt_stack_3->SetBinError(9,5.237775);
   hdirt_stack_3->SetBinError(10,6.200222);
   hdirt_stack_3->SetBinError(11,5.870783);
   hdirt_stack_3->SetBinError(12,5.119984);
   hdirt_stack_3->SetBinError(13,5.147121);
   hdirt_stack_3->SetBinError(14,5.404281);
   hdirt_stack_3->SetBinError(15,5.464831);
   hdirt_stack_3->SetBinError(16,6.613005);
   hdirt_stack_3->SetBinError(17,5.49446);
   hdirt_stack_3->SetBinError(18,7.73471);
   hdirt_stack_3->SetBinError(19,5.490296);
   hdirt_stack_3->SetBinError(20,5.397519);
   hdirt_stack_3->SetBinError(21,6.169297);
   hdirt_stack_3->SetBinError(22,4.994199);
   hdirt_stack_3->SetBinError(23,6.171389);
   hdirt_stack_3->SetBinError(24,5.370403);
   hdirt_stack_3->SetBinError(25,6.308126);
   hdirt_stack_3->SetBinError(26,3.888626);
   hdirt_stack_3->SetBinError(27,0.9490196);
   hdirt_stack_3->SetEntries(8365);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,18.65589);
   houtFV_stack_4->SetBinContent(1,171.0077);
   houtFV_stack_4->SetBinContent(2,111.8347);
   houtFV_stack_4->SetBinContent(3,107.2309);
   houtFV_stack_4->SetBinContent(4,93.47247);
   houtFV_stack_4->SetBinContent(5,91.91352);
   houtFV_stack_4->SetBinContent(6,94.79031);
   houtFV_stack_4->SetBinContent(7,89.74721);
   houtFV_stack_4->SetBinContent(8,86.6424);
   houtFV_stack_4->SetBinContent(9,86.31033);
   houtFV_stack_4->SetBinContent(10,81.79018);
   houtFV_stack_4->SetBinContent(11,84.62316);
   houtFV_stack_4->SetBinContent(12,90.72249);
   houtFV_stack_4->SetBinContent(13,73.84402);
   houtFV_stack_4->SetBinContent(14,87.13651);
   houtFV_stack_4->SetBinContent(15,88.01776);
   houtFV_stack_4->SetBinContent(16,82.81574);
   houtFV_stack_4->SetBinContent(17,87.78528);
   houtFV_stack_4->SetBinContent(18,91.0213);
   houtFV_stack_4->SetBinContent(19,93.25079);
   houtFV_stack_4->SetBinContent(20,100.3627);
   houtFV_stack_4->SetBinContent(21,95.39338);
   houtFV_stack_4->SetBinContent(22,115.9061);
   houtFV_stack_4->SetBinContent(23,135.2995);
   houtFV_stack_4->SetBinContent(24,155.5153);
   houtFV_stack_4->SetBinContent(25,194.6632);
   houtFV_stack_4->SetBinContent(26,141.3696);
   houtFV_stack_4->SetBinContent(27,9.056866);
   houtFV_stack_4->SetBinError(0,2.490731);
   houtFV_stack_4->SetBinError(1,6.701059);
   houtFV_stack_4->SetBinError(2,5.445158);
   houtFV_stack_4->SetBinError(3,5.265103);
   houtFV_stack_4->SetBinError(4,5.101494);
   houtFV_stack_4->SetBinError(5,5.611631);
   houtFV_stack_4->SetBinError(6,5.436162);
   houtFV_stack_4->SetBinError(7,4.751803);
   houtFV_stack_4->SetBinError(8,5.062982);
   houtFV_stack_4->SetBinError(9,4.679205);
   houtFV_stack_4->SetBinError(10,5.668755);
   houtFV_stack_4->SetBinError(11,4.751788);
   houtFV_stack_4->SetBinError(12,5.661806);
   houtFV_stack_4->SetBinError(13,4.409176);
   houtFV_stack_4->SetBinError(14,5.125692);
   houtFV_stack_4->SetBinError(15,5.03304);
   houtFV_stack_4->SetBinError(16,5.051715);
   houtFV_stack_4->SetBinError(17,4.866517);
   houtFV_stack_4->SetBinError(18,5.367166);
   houtFV_stack_4->SetBinError(19,4.968226);
   houtFV_stack_4->SetBinError(20,5.307933);
   houtFV_stack_4->SetBinError(21,5.089857);
   houtFV_stack_4->SetBinError(22,5.503462);
   houtFV_stack_4->SetBinError(23,6.613906);
   houtFV_stack_4->SetBinError(24,6.38933);
   houtFV_stack_4->SetBinError(25,7.887522);
   houtFV_stack_4->SetBinError(26,6.565198);
   houtFV_stack_4->SetBinError(27,1.460564);
   houtFV_stack_4->SetEntries(11501);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.7670858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.8350078);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.131464);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.688968);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.633664);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.549131);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.913912);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.368442);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.8283);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.968968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.741192);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.873394);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,5.633327);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,7.097594);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.425826);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.00915);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,6.555037);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,7.23759);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.490355);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.563246);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,7.204865);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.281605);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.729981);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.062374);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,6.665804);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.627016);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.6980042);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2468026);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2526469);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7645467);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8039599);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7736556);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7595667);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.857072);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6972267);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7858019);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8403337);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7032947);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8824305);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7300858);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.914842);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8254968);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7723547);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8690605);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.8913901);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9165775);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7333659);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.8431842);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9275176);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7456465);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7048608);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8597172);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6246999);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3431282);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(2722);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8644038);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.521058);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.07773);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.40829);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.66039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.924276);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.344112);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.18933);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.008976);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.588644);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.255836);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.620784);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.546294);
   hNCpi0inFVqe_stack_6->SetBinContent(15,2.37118);
   hNCpi0inFVqe_stack_6->SetBinContent(16,2.355898);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.728976);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.812676);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.799058);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.826294);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.589308);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.371012);
   hNCpi0inFVqe_stack_6->SetBinContent(23,2.190162);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5021997);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.153118);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2652967);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4614805);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5054877);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3536475);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4290657);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4230513);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.55515);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5085583);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4830453);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3877697);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3170903);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5393848);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3509774);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.5382413);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4939998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4165616);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4193552);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4107593);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4277784);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.369963);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.5068972);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.52716);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1183696);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1050124);
   hNCpi0inFVqe_stack_6->SetEntries(825);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,18.0838);
   hNCpi0inFVres_stack_7->SetBinContent(1,47.42505);
   hNCpi0inFVres_stack_7->SetBinContent(2,118.7944);
   hNCpi0inFVres_stack_7->SetBinContent(3,150.3846);
   hNCpi0inFVres_stack_7->SetBinContent(4,166.8892);
   hNCpi0inFVres_stack_7->SetBinContent(5,183.4753);
   hNCpi0inFVres_stack_7->SetBinContent(6,190.1193);
   hNCpi0inFVres_stack_7->SetBinContent(7,185.3558);
   hNCpi0inFVres_stack_7->SetBinContent(8,204.0285);
   hNCpi0inFVres_stack_7->SetBinContent(9,201.7549);
   hNCpi0inFVres_stack_7->SetBinContent(10,192.4861);
   hNCpi0inFVres_stack_7->SetBinContent(11,204.3416);
   hNCpi0inFVres_stack_7->SetBinContent(12,199.8914);
   hNCpi0inFVres_stack_7->SetBinContent(13,193.3411);
   hNCpi0inFVres_stack_7->SetBinContent(14,201.1484);
   hNCpi0inFVres_stack_7->SetBinContent(15,196.9847);
   hNCpi0inFVres_stack_7->SetBinContent(16,206.8573);
   hNCpi0inFVres_stack_7->SetBinContent(17,205.5951);
   hNCpi0inFVres_stack_7->SetBinContent(18,193.142);
   hNCpi0inFVres_stack_7->SetBinContent(19,197.4025);
   hNCpi0inFVres_stack_7->SetBinContent(20,188.0947);
   hNCpi0inFVres_stack_7->SetBinContent(21,202.4695);
   hNCpi0inFVres_stack_7->SetBinContent(22,188.7281);
   hNCpi0inFVres_stack_7->SetBinContent(23,171.6109);
   hNCpi0inFVres_stack_7->SetBinContent(24,155.4922);
   hNCpi0inFVres_stack_7->SetBinContent(25,111.3708);
   hNCpi0inFVres_stack_7->SetBinContent(26,33.19947);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.756708);
   hNCpi0inFVres_stack_7->SetBinError(0,1.094505);
   hNCpi0inFVres_stack_7->SetBinError(1,2.268072);
   hNCpi0inFVres_stack_7->SetBinError(2,3.549089);
   hNCpi0inFVres_stack_7->SetBinError(3,4.012999);
   hNCpi0inFVres_stack_7->SetBinError(4,4.22275);
   hNCpi0inFVres_stack_7->SetBinError(5,4.43126);
   hNCpi0inFVres_stack_7->SetBinError(6,4.503968);
   hNCpi0inFVres_stack_7->SetBinError(7,4.441009);
   hNCpi0inFVres_stack_7->SetBinError(8,4.673902);
   hNCpi0inFVres_stack_7->SetBinError(9,4.648202);
   hNCpi0inFVres_stack_7->SetBinError(10,4.491977);
   hNCpi0inFVres_stack_7->SetBinError(11,4.699536);
   hNCpi0inFVres_stack_7->SetBinError(12,4.597469);
   hNCpi0inFVres_stack_7->SetBinError(13,4.498808);
   hNCpi0inFVres_stack_7->SetBinError(14,4.679451);
   hNCpi0inFVres_stack_7->SetBinError(15,4.597242);
   hNCpi0inFVres_stack_7->SetBinError(16,4.745474);
   hNCpi0inFVres_stack_7->SetBinError(17,4.683912);
   hNCpi0inFVres_stack_7->SetBinError(18,4.519417);
   hNCpi0inFVres_stack_7->SetBinError(19,4.630426);
   hNCpi0inFVres_stack_7->SetBinError(20,4.407952);
   hNCpi0inFVres_stack_7->SetBinError(21,4.719531);
   hNCpi0inFVres_stack_7->SetBinError(22,4.523993);
   hNCpi0inFVres_stack_7->SetBinError(23,4.281211);
   hNCpi0inFVres_stack_7->SetBinError(24,4.092858);
   hNCpi0inFVres_stack_7->SetBinError(25,3.485345);
   hNCpi0inFVres_stack_7->SetBinError(26,1.885797);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3762221);
   hNCpi0inFVres_stack_7->SetEntries(83560);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,3.529689);
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.38889);
   hNCpi0inFVdis_stack_8->SetBinContent(2,28.34736);
   hNCpi0inFVdis_stack_8->SetBinContent(3,33.46103);
   hNCpi0inFVdis_stack_8->SetBinContent(4,42.58253);
   hNCpi0inFVdis_stack_8->SetBinContent(5,40.18195);
   hNCpi0inFVdis_stack_8->SetBinContent(6,47.05056);
   hNCpi0inFVdis_stack_8->SetBinContent(7,45.02479);
   hNCpi0inFVdis_stack_8->SetBinContent(8,48.57078);
   hNCpi0inFVdis_stack_8->SetBinContent(9,46.71025);
   hNCpi0inFVdis_stack_8->SetBinContent(10,45.88804);
   hNCpi0inFVdis_stack_8->SetBinContent(11,47.47285);
   hNCpi0inFVdis_stack_8->SetBinContent(12,46.49634);
   hNCpi0inFVdis_stack_8->SetBinContent(13,51.51073);
   hNCpi0inFVdis_stack_8->SetBinContent(14,50.23082);
   hNCpi0inFVdis_stack_8->SetBinContent(15,46.76473);
   hNCpi0inFVdis_stack_8->SetBinContent(16,49.76499);
   hNCpi0inFVdis_stack_8->SetBinContent(17,44.69845);
   hNCpi0inFVdis_stack_8->SetBinContent(18,48.85643);
   hNCpi0inFVdis_stack_8->SetBinContent(19,46.35014);
   hNCpi0inFVdis_stack_8->SetBinContent(20,46.90008);
   hNCpi0inFVdis_stack_8->SetBinContent(21,48.52544);
   hNCpi0inFVdis_stack_8->SetBinContent(22,44.69299);
   hNCpi0inFVdis_stack_8->SetBinContent(23,42.39207);
   hNCpi0inFVdis_stack_8->SetBinContent(24,34.76087);
   hNCpi0inFVdis_stack_8->SetBinContent(25,22.59842);
   hNCpi0inFVdis_stack_8->SetBinContent(26,6.079231);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.4860564);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.099673);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.82594);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.877782);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.105221);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.997792);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.279953);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.150431);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.290711);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.164697);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.180477);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.207721);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.134885);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.351455);
   hNCpi0inFVdis_stack_8->SetBinError(14,2.299641);
   hNCpi0inFVdis_stack_8->SetBinError(15,2.204311);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.282867);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.115134);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.309044);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.254077);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.216094);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.282242);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.184282);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.157284);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.883559);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.516826);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.7692408);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1313578);
   hNCpi0inFVdis_stack_8->SetEntries(20062);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(55);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,8.172949);
   hCCpi0inFV_stack_10->SetBinContent(1,56.3591);
   hCCpi0inFV_stack_10->SetBinContent(2,144.6917);
   hCCpi0inFV_stack_10->SetBinContent(3,186.1649);
   hCCpi0inFV_stack_10->SetBinContent(4,209.899);
   hCCpi0inFV_stack_10->SetBinContent(5,228.6028);
   hCCpi0inFV_stack_10->SetBinContent(6,237.7818);
   hCCpi0inFV_stack_10->SetBinContent(7,257.7177);
   hCCpi0inFV_stack_10->SetBinContent(8,273.4918);
   hCCpi0inFV_stack_10->SetBinContent(9,280.3484);
   hCCpi0inFV_stack_10->SetBinContent(10,287.6917);
   hCCpi0inFV_stack_10->SetBinContent(11,280.7177);
   hCCpi0inFV_stack_10->SetBinContent(12,280.7962);
   hCCpi0inFV_stack_10->SetBinContent(13,280.2825);
   hCCpi0inFV_stack_10->SetBinContent(14,271.702);
   hCCpi0inFV_stack_10->SetBinContent(15,270.4011);
   hCCpi0inFV_stack_10->SetBinContent(16,274.3448);
   hCCpi0inFV_stack_10->SetBinContent(17,289.1878);
   hCCpi0inFV_stack_10->SetBinContent(18,271.7572);
   hCCpi0inFV_stack_10->SetBinContent(19,264.1982);
   hCCpi0inFV_stack_10->SetBinContent(20,266.7612);
   hCCpi0inFV_stack_10->SetBinContent(21,239.7915);
   hCCpi0inFV_stack_10->SetBinContent(22,215.9775);
   hCCpi0inFV_stack_10->SetBinContent(23,210.8482);
   hCCpi0inFV_stack_10->SetBinContent(24,179.9415);
   hCCpi0inFV_stack_10->SetBinContent(25,133.4586);
   hCCpi0inFV_stack_10->SetBinContent(26,31.99817);
   hCCpi0inFV_stack_10->SetBinContent(27,1.412273);
   hCCpi0inFV_stack_10->SetBinError(0,1.478707);
   hCCpi0inFV_stack_10->SetBinError(1,3.74253);
   hCCpi0inFV_stack_10->SetBinError(2,5.972472);
   hCCpi0inFV_stack_10->SetBinError(3,6.882515);
   hCCpi0inFV_stack_10->SetBinError(4,7.332143);
   hCCpi0inFV_stack_10->SetBinError(5,7.647165);
   hCCpi0inFV_stack_10->SetBinError(6,7.662761);
   hCCpi0inFV_stack_10->SetBinError(7,8.082894);
   hCCpi0inFV_stack_10->SetBinError(8,8.33121);
   hCCpi0inFV_stack_10->SetBinError(9,8.414927);
   hCCpi0inFV_stack_10->SetBinError(10,8.486059);
   hCCpi0inFV_stack_10->SetBinError(11,8.423094);
   hCCpi0inFV_stack_10->SetBinError(12,8.393006);
   hCCpi0inFV_stack_10->SetBinError(13,8.383706);
   hCCpi0inFV_stack_10->SetBinError(14,8.435296);
   hCCpi0inFV_stack_10->SetBinError(15,8.221303);
   hCCpi0inFV_stack_10->SetBinError(16,8.27395);
   hCCpi0inFV_stack_10->SetBinError(17,8.518872);
   hCCpi0inFV_stack_10->SetBinError(18,8.255317);
   hCCpi0inFV_stack_10->SetBinError(19,8.1592);
   hCCpi0inFV_stack_10->SetBinError(20,8.214559);
   hCCpi0inFV_stack_10->SetBinError(21,7.743578);
   hCCpi0inFV_stack_10->SetBinError(22,7.341945);
   hCCpi0inFV_stack_10->SetBinError(23,7.252903);
   hCCpi0inFV_stack_10->SetBinError(24,6.721036);
   hCCpi0inFV_stack_10->SetBinError(25,5.801369);
   hCCpi0inFV_stack_10->SetBinError(26,2.817202);
   hCCpi0inFV_stack_10->SetBinError(27,0.6510715);
   hCCpi0inFV_stack_10->SetEntries(25433);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,16.54881);
   hNCinFV_stack_11->SetBinContent(1,112.0136);
   hNCinFV_stack_11->SetBinContent(2,311.2701);
   hNCinFV_stack_11->SetBinContent(3,407.8889);
   hNCinFV_stack_11->SetBinContent(4,431.7377);
   hNCinFV_stack_11->SetBinContent(5,457.7054);
   hNCinFV_stack_11->SetBinContent(6,472.0857);
   hNCinFV_stack_11->SetBinContent(7,477.6503);
   hNCinFV_stack_11->SetBinContent(8,505.3519);
   hNCinFV_stack_11->SetBinContent(9,501.6932);
   hNCinFV_stack_11->SetBinContent(10,500.9905);
   hNCinFV_stack_11->SetBinContent(11,518.6051);
   hNCinFV_stack_11->SetBinContent(12,485.0517);
   hNCinFV_stack_11->SetBinContent(13,519.5165);
   hNCinFV_stack_11->SetBinContent(14,478.0428);
   hNCinFV_stack_11->SetBinContent(15,481.9928);
   hNCinFV_stack_11->SetBinContent(16,476.8686);
   hNCinFV_stack_11->SetBinContent(17,490.6585);
   hNCinFV_stack_11->SetBinContent(18,499.3931);
   hNCinFV_stack_11->SetBinContent(19,495.102);
   hNCinFV_stack_11->SetBinContent(20,477.8435);
   hNCinFV_stack_11->SetBinContent(21,458.1452);
   hNCinFV_stack_11->SetBinContent(22,428.3214);
   hNCinFV_stack_11->SetBinContent(23,428.7864);
   hNCinFV_stack_11->SetBinContent(24,375.0768);
   hNCinFV_stack_11->SetBinContent(25,241.5669);
   hNCinFV_stack_11->SetBinContent(26,43.21429);
   hNCinFV_stack_11->SetBinContent(27,1.857266);
   hNCinFV_stack_11->SetBinError(0,2.061803);
   hNCinFV_stack_11->SetBinError(1,5.327765);
   hNCinFV_stack_11->SetBinError(2,8.801465);
   hNCinFV_stack_11->SetBinError(3,10.08973);
   hNCinFV_stack_11->SetBinError(4,10.40718);
   hNCinFV_stack_11->SetBinError(5,10.73799);
   hNCinFV_stack_11->SetBinError(6,10.88459);
   hNCinFV_stack_11->SetBinError(7,10.94774);
   hNCinFV_stack_11->SetBinError(8,11.22122);
   hNCinFV_stack_11->SetBinError(9,11.33088);
   hNCinFV_stack_11->SetBinError(10,11.23305);
   hNCinFV_stack_11->SetBinError(11,11.47205);
   hNCinFV_stack_11->SetBinError(12,10.97667);
   hNCinFV_stack_11->SetBinError(13,11.44485);
   hNCinFV_stack_11->SetBinError(14,11.05633);
   hNCinFV_stack_11->SetBinError(15,11.03696);
   hNCinFV_stack_11->SetBinError(16,10.88666);
   hNCinFV_stack_11->SetBinError(17,11.1501);
   hNCinFV_stack_11->SetBinError(18,11.20392);
   hNCinFV_stack_11->SetBinError(19,11.23806);
   hNCinFV_stack_11->SetBinError(20,10.94684);
   hNCinFV_stack_11->SetBinError(21,10.80773);
   hNCinFV_stack_11->SetBinError(22,10.30599);
   hNCinFV_stack_11->SetBinError(23,10.35055);
   hNCinFV_stack_11->SetBinError(24,9.665738);
   hNCinFV_stack_11->SetBinError(25,7.777416);
   hNCinFV_stack_11->SetBinError(26,3.291035);
   hNCinFV_stack_11->SetBinError(27,0.6799255);
   hNCinFV_stack_11->SetEntries(47406);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(0,53.38895);
   hnumuCCinFV_stack_12->SetBinContent(1,344.0816);
   hnumuCCinFV_stack_12->SetBinContent(2,1030.813);
   hnumuCCinFV_stack_12->SetBinContent(3,1404.85);
   hnumuCCinFV_stack_12->SetBinContent(4,1545.793);
   hnumuCCinFV_stack_12->SetBinContent(5,1692.504);
   hnumuCCinFV_stack_12->SetBinContent(6,1785.724);
   hnumuCCinFV_stack_12->SetBinContent(7,1891.323);
   hnumuCCinFV_stack_12->SetBinContent(8,1935.214);
   hnumuCCinFV_stack_12->SetBinContent(9,1982.441);
   hnumuCCinFV_stack_12->SetBinContent(10,2122.295);
   hnumuCCinFV_stack_12->SetBinContent(11,2086.136);
   hnumuCCinFV_stack_12->SetBinContent(12,2127.708);
   hnumuCCinFV_stack_12->SetBinContent(13,2148.783);
   hnumuCCinFV_stack_12->SetBinContent(14,2042.148);
   hnumuCCinFV_stack_12->SetBinContent(15,2108.285);
   hnumuCCinFV_stack_12->SetBinContent(16,2036.981);
   hnumuCCinFV_stack_12->SetBinContent(17,2016.686);
   hnumuCCinFV_stack_12->SetBinContent(18,1894.794);
   hnumuCCinFV_stack_12->SetBinContent(19,2028.289);
   hnumuCCinFV_stack_12->SetBinContent(20,1856.172);
   hnumuCCinFV_stack_12->SetBinContent(21,1810.838);
   hnumuCCinFV_stack_12->SetBinContent(22,1741.337);
   hnumuCCinFV_stack_12->SetBinContent(23,1526.018);
   hnumuCCinFV_stack_12->SetBinContent(24,1313.41);
   hnumuCCinFV_stack_12->SetBinContent(25,983.6908);
   hnumuCCinFV_stack_12->SetBinContent(26,157.4456);
   hnumuCCinFV_stack_12->SetBinContent(27,5.963332);
   hnumuCCinFV_stack_12->SetBinError(0,5.644378);
   hnumuCCinFV_stack_12->SetBinError(1,13.37662);
   hnumuCCinFV_stack_12->SetBinError(2,22.60525);
   hnumuCCinFV_stack_12->SetBinError(3,27.84826);
   hnumuCCinFV_stack_12->SetBinError(4,27.49725);
   hnumuCCinFV_stack_12->SetBinError(5,29.50875);
   hnumuCCinFV_stack_12->SetBinError(6,29.62879);
   hnumuCCinFV_stack_12->SetBinError(7,31.03158);
   hnumuCCinFV_stack_12->SetBinError(8,31.5897);
   hnumuCCinFV_stack_12->SetBinError(9,30.53034);
   hnumuCCinFV_stack_12->SetBinError(10,32.45007);
   hnumuCCinFV_stack_12->SetBinError(11,32.16709);
   hnumuCCinFV_stack_12->SetBinError(12,32.03288);
   hnumuCCinFV_stack_12->SetBinError(13,34.41135);
   hnumuCCinFV_stack_12->SetBinError(14,31.75233);
   hnumuCCinFV_stack_12->SetBinError(15,32.87199);
   hnumuCCinFV_stack_12->SetBinError(16,31.39214);
   hnumuCCinFV_stack_12->SetBinError(17,31.08392);
   hnumuCCinFV_stack_12->SetBinError(18,30.04309);
   hnumuCCinFV_stack_12->SetBinError(19,32.11668);
   hnumuCCinFV_stack_12->SetBinError(20,29.79898);
   hnumuCCinFV_stack_12->SetBinError(21,29.05906);
   hnumuCCinFV_stack_12->SetBinError(22,29.50103);
   hnumuCCinFV_stack_12->SetBinError(23,26.97461);
   hnumuCCinFV_stack_12->SetBinError(24,24.84918);
   hnumuCCinFV_stack_12->SetBinError(25,23.02027);
   hnumuCCinFV_stack_12->SetBinError(26,8.214516);
   hnumuCCinFV_stack_12->SetBinError(27,1.714047);
   hnumuCCinFV_stack_12->SetEntries(153670);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(0,0.413476);
   hnueCCinFV_stack_13->SetBinContent(1,3.757262);
   hnueCCinFV_stack_13->SetBinContent(2,11.31057);
   hnueCCinFV_stack_13->SetBinContent(3,19.39614);
   hnueCCinFV_stack_13->SetBinContent(4,24.95538);
   hnueCCinFV_stack_13->SetBinContent(5,20.93927);
   hnueCCinFV_stack_13->SetBinContent(6,31.75785);
   hnueCCinFV_stack_13->SetBinContent(7,25.84593);
   hnueCCinFV_stack_13->SetBinContent(8,34.18623);
   hnueCCinFV_stack_13->SetBinContent(9,31.69617);
   hnueCCinFV_stack_13->SetBinContent(10,31.9701);
   hnueCCinFV_stack_13->SetBinContent(11,31.09215);
   hnueCCinFV_stack_13->SetBinContent(12,27.29292);
   hnueCCinFV_stack_13->SetBinContent(13,34.33391);
   hnueCCinFV_stack_13->SetBinContent(14,22.93434);
   hnueCCinFV_stack_13->SetBinContent(15,31.38349);
   hnueCCinFV_stack_13->SetBinContent(16,22.56645);
   hnueCCinFV_stack_13->SetBinContent(17,29.17865);
   hnueCCinFV_stack_13->SetBinContent(18,25.34966);
   hnueCCinFV_stack_13->SetBinContent(19,28.99356);
   hnueCCinFV_stack_13->SetBinContent(20,29.25374);
   hnueCCinFV_stack_13->SetBinContent(21,21.06875);
   hnueCCinFV_stack_13->SetBinContent(22,21.54464);
   hnueCCinFV_stack_13->SetBinContent(23,20.78313);
   hnueCCinFV_stack_13->SetBinContent(24,14.94051);
   hnueCCinFV_stack_13->SetBinContent(25,13.48413);
   hnueCCinFV_stack_13->SetBinContent(26,0.867162);
   hnueCCinFV_stack_13->SetBinError(0,0.413476);
   hnueCCinFV_stack_13->SetBinError(1,1.144645);
   hnueCCinFV_stack_13->SetBinError(2,2.179695);
   hnueCCinFV_stack_13->SetBinError(3,2.576248);
   hnueCCinFV_stack_13->SetBinError(4,3.254137);
   hnueCCinFV_stack_13->SetBinError(5,2.626858);
   hnueCCinFV_stack_13->SetBinError(6,5.289182);
   hnueCCinFV_stack_13->SetBinError(7,2.95875);
   hnueCCinFV_stack_13->SetBinError(8,4.352036);
   hnueCCinFV_stack_13->SetBinError(9,3.328564);
   hnueCCinFV_stack_13->SetBinError(10,3.762995);
   hnueCCinFV_stack_13->SetBinError(11,3.047006);
   hnueCCinFV_stack_13->SetBinError(12,3.27973);
   hnueCCinFV_stack_13->SetBinError(13,3.772127);
   hnueCCinFV_stack_13->SetBinError(14,2.465551);
   hnueCCinFV_stack_13->SetBinError(15,4.024136);
   hnueCCinFV_stack_13->SetBinError(16,2.514684);
   hnueCCinFV_stack_13->SetBinError(17,3.245327);
   hnueCCinFV_stack_13->SetBinError(18,3.107072);
   hnueCCinFV_stack_13->SetBinError(19,3.832211);
   hnueCCinFV_stack_13->SetBinError(20,3.224854);
   hnueCCinFV_stack_13->SetBinError(21,2.589778);
   hnueCCinFV_stack_13->SetBinError(22,2.69686);
   hnueCCinFV_stack_13->SetBinError(23,2.629242);
   hnueCCinFV_stack_13->SetBinError(24,2.129327);
   hnueCCinFV_stack_13->SetBinError(25,3.8823);
   hnueCCinFV_stack_13->SetBinError(26,0.5082203);
   hnueCCinFV_stack_13->SetEntries(2305);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__5->SetBinContent(0,244.2231);
   hmcerror__5->SetBinContent(1,1045.807);
   hmcerror__5->SetBinContent(2,2153.714);
   hmcerror__5->SetBinContent(3,2735.76);
   hmcerror__5->SetBinContent(4,2979.941);
   hmcerror__5->SetBinContent(5,3240.171);
   hmcerror__5->SetBinContent(6,3389.132);
   hmcerror__5->SetBinContent(7,3538.291);
   hmcerror__5->SetBinContent(8,3671.934);
   hmcerror__5->SetBinContent(9,3729.174);
   hmcerror__5->SetBinContent(10,3941.251);
   hmcerror__5->SetBinContent(11,3984.281);
   hmcerror__5->SetBinContent(12,3942.864);
   hmcerror__5->SetBinContent(13,4005.831);
   hmcerror__5->SetBinContent(14,3841.78);
   hmcerror__5->SetBinContent(15,3922.867);
   hmcerror__5->SetBinContent(16,3875.136);
   hmcerror__5->SetBinContent(17,3868.785);
   hmcerror__5->SetBinContent(18,3667.111);
   hmcerror__5->SetBinContent(19,3782.794);
   hmcerror__5->SetBinContent(20,3577.604);
   hmcerror__5->SetBinContent(21,3467.96);
   hmcerror__5->SetBinContent(22,3337.495);
   hmcerror__5->SetBinContent(23,3095.217);
   hmcerror__5->SetBinContent(24,2737.862);
   hmcerror__5->SetBinContent(25,2161.622);
   hmcerror__5->SetBinContent(26,612.7193);
   hmcerror__5->SetBinContent(27,41.92289);
   hmcerror__5->SetBinError(0,9.742555);
   hmcerror__5->SetBinError(1,153.709);
   hmcerror__5->SetBinError(2,300.755);
   hmcerror__5->SetBinError(3,394.6755);
   hmcerror__5->SetBinError(4,422.8985);
   hmcerror__5->SetBinError(5,459.1751);
   hmcerror__5->SetBinError(6,475.1935);
   hmcerror__5->SetBinError(7,495.2491);
   hmcerror__5->SetBinError(8,518.166);
   hmcerror__5->SetBinError(9,528.9046);
   hmcerror__5->SetBinError(10,548.0089);
   hmcerror__5->SetBinError(11,542.6092);
   hmcerror__5->SetBinError(12,547.9984);
   hmcerror__5->SetBinError(13,556.6146);
   hmcerror__5->SetBinError(14,525.2104);
   hmcerror__5->SetBinError(15,544.3416);
   hmcerror__5->SetBinError(16,519.4956);
   hmcerror__5->SetBinError(17,516.1503);
   hmcerror__5->SetBinError(18,496.3965);
   hmcerror__5->SetBinError(19,549.6858);
   hmcerror__5->SetBinError(20,491.0369);
   hmcerror__5->SetBinError(21,476.2207);
   hmcerror__5->SetBinError(22,465.1616);
   hmcerror__5->SetBinError(23,434.6864);
   hmcerror__5->SetBinError(24,375.4976);
   hmcerror__5->SetBinError(25,326.524);
   hmcerror__5->SetBinError(26,112.5924);
   hmcerror__5->SetBinError(27,20.4299);
   hmcerror__5->SetEntries(76141.51);

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
   1000,
   2145,
   2724,
   3037,
   3212,
   3417,
   3554,
   3647,
   3822,
   3871,
   4068,
   3987,
   4113,
   4067,
   3983,
   3982,
   3981,
   3993,
   3721,
   3765,
   3613,
   3373,
   3256,
   2709,
   2026,
   521};
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
   31.62278,
   46.31414,
   52.19195,
   55.10898,
   56.67451,
   58.45511,
   59.61543,
   60.3904,
   61.82233,
   62.21736,
   63.78087,
   63.1427,
   64.13267,
   63.77304,
   63.11101,
   63.10309,
   63.09517,
   63.19019,
   61,
   61.3596,
   60.10824,
   58.07753,
   57.06137,
   52.04805,
   45.01111,
   22.82542};
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
   31.62278,
   46.31414,
   52.19195,
   55.10898,
   56.67451,
   58.45511,
   59.61543,
   60.3904,
   61.82233,
   62.21736,
   63.78087,
   63.1427,
   64.13267,
   63.77304,
   63.11101,
   63.10309,
   63.09517,
   63.19019,
   61,
   61.3596,
   60.10824,
   58.07753,
   57.06137,
   52.04805,
   45.01111,
   22.82542};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(130.2788);
   Graph_Graph3005->SetMaximum(4545.028);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.14","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=23.5/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 85587.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 2777.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 9772.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2048.2","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 2732.5","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  146.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  43.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  4490.4","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  1067.3","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.7","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5924.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 11076.6","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 43613.8","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 610.9","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("generic_FC_bnb_12_reco_nuvtxX_all");
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
   0.1469763,
   0.1396448,
   0.1442654,
   0.1419151,
   0.1417132,
   0.140211,
   0.1399685,
   0.1411153,
   0.1418289,
   0.1390444,
   0.1361875,
   0.1389849,
   0.1389511,
   0.1367102,
   0.1387612,
   0.1340586,
   0.1334141,
   0.1353645,
   0.1453121,
   0.137253,
   0.1373201,
   0.1393745,
   0.1404381,
   0.1371499,
   0.1510551,
   0.1837586};
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
   0.1469763,
   0.1396448,
   0.1442654,
   0.1419151,
   0.1417132,
   0.140211,
   0.1399685,
   0.1411153,
   0.1418289,
   0.1390444,
   0.1361875,
   0.1389849,
   0.1389511,
   0.1367102,
   0.1387612,
   0.1340586,
   0.1334141,
   0.1353645,
   0.1453121,
   0.137253,
   0.1373201,
   0.1393745,
   0.1404381,
   0.1371499,
   0.1510551,
   0.1837586};
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
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   0.1274494,
   0.1315403,
   0.1394175,
   0.1334641,
   0.1355642,
   0.1362098,
   0.134081,
   0.1386211,
   0.1372378,
   0.1355287,
   0.1342012,
   0.1369819,
   0.1353356,
   0.1341165,
   0.1342863,
   0.1317289,
   0.1308677,
   0.1324884,
   0.1406603,
   0.134222,
   0.1329436,
   0.1339102,
   0.1347358,
   0.1281595,
   0.1360674,
   0.1365519};
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
   0.1274494,
   0.1315403,
   0.1394175,
   0.1334641,
   0.1355642,
   0.1362098,
   0.134081,
   0.1386211,
   0.1372378,
   0.1355287,
   0.1342012,
   0.1369819,
   0.1353356,
   0.1341165,
   0.1342863,
   0.1317289,
   0.1308677,
   0.1324884,
   0.1406603,
   0.134222,
   0.1329436,
   0.1339102,
   0.1347358,
   0.1281595,
   0.1360674,
   0.1365519};
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
   0.956199,
   0.9959541,
   0.9957015,
   1.019148,
   0.9913056,
   1.008223,
   1.00444,
   0.9932095,
   1.024892,
   0.9821753,
   1.021012,
   1.011194,
   1.026753,
   1.058624,
   1.015329,
   1.027577,
   1.029005,
   1.088868,
   0.9836645,
   1.05238,
   1.041823,
   1.010638,
   1.051946,
   0.9894582,
   0.9372592,
   0.8503078};
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
   0.03023767,
   0.02150432,
   0.01907768,
   0.01849331,
   0.01749121,
   0.01724781,
   0.01684865,
   0.01644648,
   0.01657802,
   0.01578619,
   0.01600813,
   0.01601442,
   0.01600983,
   0.01659987,
   0.01608798,
   0.01628409,
   0.01630878,
   0.0172316,
   0.01612565,
   0.01715103,
   0.01733245,
   0.01740154,
   0.01843534,
   0.01901047,
   0.02082284,
   0.03725266};
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
   0.03023767,
   0.02150432,
   0.01907768,
   0.01849331,
   0.01749121,
   0.01724781,
   0.01684865,
   0.01644648,
   0.01657802,
   0.01578619,
   0.01600813,
   0.01601442,
   0.01600983,
   0.01659987,
   0.01608798,
   0.01628409,
   0.01630878,
   0.0172316,
   0.01612565,
   0.01715103,
   0.01733245,
   0.01740154,
   0.01843534,
   0.01901047,
   0.02082284,
   0.03725266};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.7837507);
   Graph_Graph3008->SetMaximum(1.135404);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
