#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  1 16:02:13 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-40,-82.26,293.3333,8663.277);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__1->SetBinContent(0,244.5151);
   hmc__1->SetBinContent(1,1040.539);
   hmc__1->SetBinContent(2,2142.418);
   hmc__1->SetBinContent(3,2724.333);
   hmc__1->SetBinContent(4,2963.292);
   hmc__1->SetBinContent(5,3221.475);
   hmc__1->SetBinContent(6,3372.372);
   hmc__1->SetBinContent(7,3520.875);
   hmc__1->SetBinContent(8,3653.094);
   hmc__1->SetBinContent(9,3709.829);
   hmc__1->SetBinContent(10,3922.886);
   hmc__1->SetBinContent(11,3963.434);
   hmc__1->SetBinContent(12,3923.319);
   hmc__1->SetBinContent(13,3986.888);
   hmc__1->SetBinContent(14,3824.907);
   hmc__1->SetBinContent(15,3907.143);
   hmc__1->SetBinContent(16,3854.479);
   hmc__1->SetBinContent(17,3850.312);
   hmc__1->SetBinContent(18,3652.735);
   hmc__1->SetBinContent(19,3767.723);
   hmc__1->SetBinContent(20,3558.945);
   hmc__1->SetBinContent(21,3452.715);
   hmc__1->SetBinContent(22,3327.037);
   hmc__1->SetBinContent(23,3077.955);
   hmc__1->SetBinContent(24,2728.226);
   hmc__1->SetBinContent(25,2152.284);
   hmc__1->SetBinContent(26,610.3251);
   hmc__1->SetBinContent(27,41.92289);
   hmc__1->SetBinError(0,9.744986);
   hmc__1->SetBinError(1,151.3614);
   hmc__1->SetBinError(2,309.4289);
   hmc__1->SetBinError(3,395.0428);
   hmc__1->SetBinError(4,409.114);
   hmc__1->SetBinError(5,456.0582);
   hmc__1->SetBinError(6,475.6549);
   hmc__1->SetBinError(7,481.3239);
   hmc__1->SetBinError(8,520.3788);
   hmc__1->SetBinError(9,522.9404);
   hmc__1->SetBinError(10,541.6063);
   hmc__1->SetBinError(11,537.8851);
   hmc__1->SetBinError(12,543.7781);
   hmc__1->SetBinError(13,547.2224);
   hmc__1->SetBinError(14,518.981);
   hmc__1->SetBinError(15,535.2406);
   hmc__1->SetBinError(16,513.9031);
   hmc__1->SetBinError(17,511.364);
   hmc__1->SetBinError(18,494.1628);
   hmc__1->SetBinError(19,542.0678);
   hmc__1->SetBinError(20,486.9974);
   hmc__1->SetBinError(21,472.8688);
   hmc__1->SetBinError(22,459.868);
   hmc__1->SetBinError(23,429.9869);
   hmc__1->SetBinError(24,369.3078);
   hmc__1->SetBinError(25,319.8845);
   hmc__1->SetBinError(26,104.7154);
   hmc__1->SetBinError(27,15.51967);
   hmc__1->SetMinimum(-82.26);
   hmc__1->SetMaximum(8226);
   hmc__1->SetEntries(75744.3);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,0,260);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(4186.233);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,22.43671);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,59.03714);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,148.0899);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,185.4225);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,211.6747);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,225.1492);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,239.151);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,232.3327);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,254.9992);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,250.7103);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,240.5641);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,253.6544);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,247.6994);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,247.5284);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,252.9813);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,246.2043);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,258.9782);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,252.2459);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,243.8948);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,245.7048);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,236.9048);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,252.6121);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,235.8479);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,216.4723);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,191.5363);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,134.7921);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,39.62729);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,2.133026);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.249871);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.521836);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.000351);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,4.454744);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.746508);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.873873);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.07114);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.95244);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,5.234736);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,5.152852);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,5.017716);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,5.210547);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,5.079032);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,5.105008);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,5.225931);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,5.126954);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,5.289144);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,5.159974);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,5.092642);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,5.167345);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,4.952418);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,5.255498);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,5.049367);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,4.827119);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,4.52182);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,3.809312);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.048706);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.3984946);
   hNCpi0inFVnoncoh_stack_6->SetEntries(104509);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,8.56638);
   hCCpi0inFV_stack_7->SetBinContent(1,59.68359);
   hCCpi0inFV_stack_7->SetBinContent(2,153.3492);
   hCCpi0inFV_stack_7->SetBinContent(3,204.5056);
   hCCpi0inFV_stack_7->SetBinContent(4,229.385);
   hCCpi0inFV_stack_7->SetBinContent(5,251.7476);
   hCCpi0inFV_stack_7->SetBinContent(6,265.1924);
   hCCpi0inFV_stack_7->SetBinContent(7,278.8795);
   hCCpi0inFV_stack_7->SetBinContent(8,298.2633);
   hCCpi0inFV_stack_7->SetBinContent(9,306.427);
   hCCpi0inFV_stack_7->SetBinContent(10,314.8609);
   hCCpi0inFV_stack_7->SetBinContent(11,309.5389);
   hCCpi0inFV_stack_7->SetBinContent(12,306.7402);
   hCCpi0inFV_stack_7->SetBinContent(13,303.6849);
   hCCpi0inFV_stack_7->SetBinContent(14,298.3051);
   hCCpi0inFV_stack_7->SetBinContent(15,295.5162);
   hCCpi0inFV_stack_7->SetBinContent(16,305.1085);
   hCCpi0inFV_stack_7->SetBinContent(17,316.8321);
   hCCpi0inFV_stack_7->SetBinContent(18,296.9574);
   hCCpi0inFV_stack_7->SetBinContent(19,287.1703);
   hCCpi0inFV_stack_7->SetBinContent(20,290.477);
   hCCpi0inFV_stack_7->SetBinContent(21,261.5839);
   hCCpi0inFV_stack_7->SetBinContent(22,237.3764);
   hCCpi0inFV_stack_7->SetBinContent(23,229.3144);
   hCCpi0inFV_stack_7->SetBinContent(24,193.2696);
   hCCpi0inFV_stack_7->SetBinContent(25,141.5148);
   hCCpi0inFV_stack_7->SetBinContent(26,34.9774);
   hCCpi0inFV_stack_7->SetBinContent(27,1.412273);
   hCCpi0inFV_stack_7->SetBinError(0,1.504648);
   hCCpi0inFV_stack_7->SetBinError(1,3.854226);
   hCCpi0inFV_stack_7->SetBinError(2,6.140968);
   hCCpi0inFV_stack_7->SetBinError(3,7.197241);
   hCCpi0inFV_stack_7->SetBinError(4,7.655618);
   hCCpi0inFV_stack_7->SetBinError(5,8.021846);
   hCCpi0inFV_stack_7->SetBinError(6,8.100164);
   hCCpi0inFV_stack_7->SetBinError(7,8.40303);
   hCCpi0inFV_stack_7->SetBinError(8,8.699926);
   hCCpi0inFV_stack_7->SetBinError(9,8.800806);
   hCCpi0inFV_stack_7->SetBinError(10,8.88318);
   hCCpi0inFV_stack_7->SetBinError(11,8.846835);
   hCCpi0inFV_stack_7->SetBinError(12,8.78349);
   hCCpi0inFV_stack_7->SetBinError(13,8.72353);
   hCCpi0inFV_stack_7->SetBinError(14,8.806163);
   hCCpi0inFV_stack_7->SetBinError(15,8.601542);
   hCCpi0inFV_stack_7->SetBinError(16,8.737958);
   hCCpi0inFV_stack_7->SetBinError(17,8.92515);
   hCCpi0inFV_stack_7->SetBinError(18,8.64062);
   hCCpi0inFV_stack_7->SetBinError(19,8.494405);
   hCCpi0inFV_stack_7->SetBinError(20,8.559115);
   hCCpi0inFV_stack_7->SetBinError(21,8.093938);
   hCCpi0inFV_stack_7->SetBinError(22,7.705556);
   hCCpi0inFV_stack_7->SetBinError(23,7.569956);
   hCCpi0inFV_stack_7->SetBinError(24,6.97979);
   hCCpi0inFV_stack_7->SetBinError(25,5.981208);
   hCCpi0inFV_stack_7->SetBinError(26,2.944053);
   hCCpi0inFV_stack_7->SetBinError(27,0.6510715);
   hCCpi0inFV_stack_7->SetEntries(27759);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(0,16.15707);
   hNCinFV_stack_8->SetBinContent(1,106.745);
   hNCinFV_stack_8->SetBinContent(2,299.9746);
   hNCinFV_stack_8->SetBinContent(3,396.4617);
   hNCinFV_stack_8->SetBinContent(4,415.0885);
   hNCinFV_stack_8->SetBinContent(5,439.009);
   hNCinFV_stack_8->SetBinContent(6,455.0335);
   hNCinFV_stack_8->SetBinContent(7,460.2348);
   hNCinFV_stack_8->SetBinContent(8,486.512);
   hNCinFV_stack_8->SetBinContent(9,482.3483);
   hNCinFV_stack_8->SetBinContent(10,482.6247);
   hNCinFV_stack_8->SetBinContent(11,497.7577);
   hNCinFV_stack_8->SetBinContent(12,465.5067);
   hNCinFV_stack_8->SetBinContent(13,500.5734);
   hNCinFV_stack_8->SetBinContent(14,461.1699);
   hNCinFV_stack_8->SetBinContent(15,466.2688);
   hNCinFV_stack_8->SetBinContent(16,456.2118);
   hNCinFV_stack_8->SetBinContent(17,472.1862);
   hNCinFV_stack_8->SetBinContent(18,485.0169);
   hNCinFV_stack_8->SetBinContent(19,480.0308);
   hNCinFV_stack_8->SetBinContent(20,459.1841);
   hNCinFV_stack_8->SetBinContent(21,442.9004);
   hNCinFV_stack_8->SetBinContent(22,417.8632);
   hNCinFV_stack_8->SetBinContent(23,411.5245);
   hNCinFV_stack_8->SetBinContent(24,365.4407);
   hNCinFV_stack_8->SetBinContent(25,232.1316);
   hNCinFV_stack_8->SetBinContent(26,40.82013);
   hNCinFV_stack_8->SetBinContent(27,1.857266);
   hNCinFV_stack_8->SetBinError(0,2.04311);
   hNCinFV_stack_8->SetBinError(1,5.192324);
   hNCinFV_stack_8->SetBinError(2,8.637804);
   hNCinFV_stack_8->SetBinError(3,9.943649);
   hNCinFV_stack_8->SetBinError(4,10.19397);
   hNCinFV_stack_8->SetBinError(5,10.50779);
   hNCinFV_stack_8->SetBinError(6,10.6864);
   hNCinFV_stack_8->SetBinError(7,10.75414);
   hNCinFV_stack_8->SetBinError(8,10.99764);
   hNCinFV_stack_8->SetBinError(9,11.10938);
   hNCinFV_stack_8->SetBinError(10,11.02729);
   hNCinFV_stack_8->SetBinError(11,11.22934);
   hNCinFV_stack_8->SetBinError(12,10.74601);
   hNCinFV_stack_8->SetBinError(13,11.22919);
   hNCinFV_stack_8->SetBinError(14,10.88099);
   hNCinFV_stack_8->SetBinError(15,10.84675);
   hNCinFV_stack_8->SetBinError(16,10.64163);
   hNCinFV_stack_8->SetBinError(17,10.94629);
   hNCinFV_stack_8->SetBinError(18,11.04633);
   hNCinFV_stack_8->SetBinError(19,11.07921);
   hNCinFV_stack_8->SetBinError(20,10.7283);
   hNCinFV_stack_8->SetBinError(21,10.63174);
   hNCinFV_stack_8->SetBinError(22,10.182);
   hNCinFV_stack_8->SetBinError(23,10.14955);
   hNCinFV_stack_8->SetBinError(24,9.549552);
   hNCinFV_stack_8->SetBinError(25,7.618081);
   hNCinFV_stack_8->SetBinError(26,3.195966);
   hNCinFV_stack_8->SetBinError(27,0.6799255);
   hNCinFV_stack_8->SetEntries(45707);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(0,52.99552);
   hnumuCCinFV_stack_9->SetBinContent(1,340.7571);
   hnumuCCinFV_stack_9->SetBinContent(2,1022.156);
   hnumuCCinFV_stack_9->SetBinContent(3,1386.509);
   hnumuCCinFV_stack_9->SetBinContent(4,1526.307);
   hnumuCCinFV_stack_9->SetBinContent(5,1669.359);
   hnumuCCinFV_stack_9->SetBinContent(6,1758.313);
   hnumuCCinFV_stack_9->SetBinContent(7,1870.161);
   hnumuCCinFV_stack_9->SetBinContent(8,1910.443);
   hnumuCCinFV_stack_9->SetBinContent(9,1956.363);
   hnumuCCinFV_stack_9->SetBinContent(10,2095.127);
   hnumuCCinFV_stack_9->SetBinContent(11,2057.315);
   hnumuCCinFV_stack_9->SetBinContent(12,2101.763);
   hnumuCCinFV_stack_9->SetBinContent(13,2125.381);
   hnumuCCinFV_stack_9->SetBinContent(14,2015.545);
   hnumuCCinFV_stack_9->SetBinContent(15,2083.17);
   hnumuCCinFV_stack_9->SetBinContent(16,2006.218);
   hnumuCCinFV_stack_9->SetBinContent(17,1989.041);
   hnumuCCinFV_stack_9->SetBinContent(18,1869.594);
   hnumuCCinFV_stack_9->SetBinContent(19,2005.318);
   hnumuCCinFV_stack_9->SetBinContent(20,1832.456);
   hnumuCCinFV_stack_9->SetBinContent(21,1789.045);
   hnumuCCinFV_stack_9->SetBinContent(22,1719.938);
   hnumuCCinFV_stack_9->SetBinContent(23,1507.552);
   hnumuCCinFV_stack_9->SetBinContent(24,1300.082);
   hnumuCCinFV_stack_9->SetBinContent(25,975.6346);
   hnumuCCinFV_stack_9->SetBinContent(26,154.4664);
   hnumuCCinFV_stack_9->SetBinContent(27,5.963332);
   hnumuCCinFV_stack_9->SetBinError(0,5.637518);
   hnumuCCinFV_stack_9->SetBinError(1,13.34487);
   hnumuCCinFV_stack_9->SetBinError(2,22.56006);
   hnumuCCinFV_stack_9->SetBinError(3,27.76858);
   hnumuCCinFV_stack_9->SetBinError(4,27.40895);
   hnumuCCinFV_stack_9->SetBinError(5,29.4091);
   hnumuCCinFV_stack_9->SetBinError(6,29.51221);
   hnumuCCinFV_stack_9->SetBinError(7,30.94643);
   hnumuCCinFV_stack_9->SetBinError(8,31.49015);
   hnumuCCinFV_stack_9->SetBinError(9,30.42135);
   hnumuCCinFV_stack_9->SetBinError(10,32.34362);
   hnumuCCinFV_stack_9->SetBinError(11,32.05314);
   hnumuCCinFV_stack_9->SetBinError(12,31.92802);
   hnumuCCinFV_stack_9->SetBinError(13,34.32678);
   hnumuCCinFV_stack_9->SetBinError(14,31.65148);
   hnumuCCinFV_stack_9->SetBinError(15,32.77455);
   hnumuCCinFV_stack_9->SetBinError(16,31.26616);
   hnumuCCinFV_stack_9->SetBinError(17,30.96971);
   hnumuCCinFV_stack_9->SetBinError(18,29.93455);
   hnumuCCinFV_stack_9->SetBinError(19,32.02965);
   hnumuCCinFV_stack_9->SetBinError(20,29.70185);
   hnumuCCinFV_stack_9->SetBinError(21,28.96342);
   hnumuCCinFV_stack_9->SetBinError(22,29.40815);
   hnumuCCinFV_stack_9->SetBinError(23,26.88735);
   hnumuCCinFV_stack_9->SetBinError(24,24.77775);
   hnumuCCinFV_stack_9->SetBinError(25,22.9742);
   hnumuCCinFV_stack_9->SetBinError(26,8.169911);
   hnumuCCinFV_stack_9->SetBinError(27,1.714047);
   hnumuCCinFV_stack_9->SetEntries(151344);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(0,0.413476);
   hnueCCinFV_stack_10->SetBinContent(1,3.757262);
   hnueCCinFV_stack_10->SetBinContent(2,11.31057);
   hnueCCinFV_stack_10->SetBinContent(3,19.39614);
   hnueCCinFV_stack_10->SetBinContent(4,24.95538);
   hnueCCinFV_stack_10->SetBinContent(5,20.93927);
   hnueCCinFV_stack_10->SetBinContent(6,31.75785);
   hnueCCinFV_stack_10->SetBinContent(7,25.84593);
   hnueCCinFV_stack_10->SetBinContent(8,34.18623);
   hnueCCinFV_stack_10->SetBinContent(9,31.69617);
   hnueCCinFV_stack_10->SetBinContent(10,31.9701);
   hnueCCinFV_stack_10->SetBinContent(11,31.09215);
   hnueCCinFV_stack_10->SetBinContent(12,27.29292);
   hnueCCinFV_stack_10->SetBinContent(13,34.33391);
   hnueCCinFV_stack_10->SetBinContent(14,22.93434);
   hnueCCinFV_stack_10->SetBinContent(15,31.38349);
   hnueCCinFV_stack_10->SetBinContent(16,22.56645);
   hnueCCinFV_stack_10->SetBinContent(17,29.17865);
   hnueCCinFV_stack_10->SetBinContent(18,25.34966);
   hnueCCinFV_stack_10->SetBinContent(19,28.99356);
   hnueCCinFV_stack_10->SetBinContent(20,29.25374);
   hnueCCinFV_stack_10->SetBinContent(21,21.06875);
   hnueCCinFV_stack_10->SetBinContent(22,21.54464);
   hnueCCinFV_stack_10->SetBinContent(23,20.78313);
   hnueCCinFV_stack_10->SetBinContent(24,14.94051);
   hnueCCinFV_stack_10->SetBinContent(25,13.48413);
   hnueCCinFV_stack_10->SetBinContent(26,0.867162);
   hnueCCinFV_stack_10->SetBinError(0,0.413476);
   hnueCCinFV_stack_10->SetBinError(1,1.144645);
   hnueCCinFV_stack_10->SetBinError(2,2.179695);
   hnueCCinFV_stack_10->SetBinError(3,2.576248);
   hnueCCinFV_stack_10->SetBinError(4,3.254137);
   hnueCCinFV_stack_10->SetBinError(5,2.626858);
   hnueCCinFV_stack_10->SetBinError(6,5.289182);
   hnueCCinFV_stack_10->SetBinError(7,2.95875);
   hnueCCinFV_stack_10->SetBinError(8,4.352036);
   hnueCCinFV_stack_10->SetBinError(9,3.328564);
   hnueCCinFV_stack_10->SetBinError(10,3.762995);
   hnueCCinFV_stack_10->SetBinError(11,3.047006);
   hnueCCinFV_stack_10->SetBinError(12,3.27973);
   hnueCCinFV_stack_10->SetBinError(13,3.772127);
   hnueCCinFV_stack_10->SetBinError(14,2.465551);
   hnueCCinFV_stack_10->SetBinError(15,4.024136);
   hnueCCinFV_stack_10->SetBinError(16,2.514684);
   hnueCCinFV_stack_10->SetBinError(17,3.245327);
   hnueCCinFV_stack_10->SetBinError(18,3.107072);
   hnueCCinFV_stack_10->SetBinError(19,3.832211);
   hnueCCinFV_stack_10->SetBinError(20,3.224854);
   hnueCCinFV_stack_10->SetBinError(21,2.589778);
   hnueCCinFV_stack_10->SetBinError(22,2.69686);
   hnueCCinFV_stack_10->SetBinError(23,2.629242);
   hnueCCinFV_stack_10->SetBinError(24,2.129327);
   hnueCCinFV_stack_10->SetBinError(25,3.8823);
   hnueCCinFV_stack_10->SetBinError(26,0.5082203);
   hnueCCinFV_stack_10->SetEntries(2305);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__2->SetBinContent(0,244.5151);
   hmcerror__2->SetBinContent(1,1040.539);
   hmcerror__2->SetBinContent(2,2142.418);
   hmcerror__2->SetBinContent(3,2724.333);
   hmcerror__2->SetBinContent(4,2963.292);
   hmcerror__2->SetBinContent(5,3221.475);
   hmcerror__2->SetBinContent(6,3372.372);
   hmcerror__2->SetBinContent(7,3520.875);
   hmcerror__2->SetBinContent(8,3653.094);
   hmcerror__2->SetBinContent(9,3709.829);
   hmcerror__2->SetBinContent(10,3922.886);
   hmcerror__2->SetBinContent(11,3963.434);
   hmcerror__2->SetBinContent(12,3923.319);
   hmcerror__2->SetBinContent(13,3986.888);
   hmcerror__2->SetBinContent(14,3824.907);
   hmcerror__2->SetBinContent(15,3907.143);
   hmcerror__2->SetBinContent(16,3854.479);
   hmcerror__2->SetBinContent(17,3850.312);
   hmcerror__2->SetBinContent(18,3652.735);
   hmcerror__2->SetBinContent(19,3767.723);
   hmcerror__2->SetBinContent(20,3558.945);
   hmcerror__2->SetBinContent(21,3452.715);
   hmcerror__2->SetBinContent(22,3327.037);
   hmcerror__2->SetBinContent(23,3077.955);
   hmcerror__2->SetBinContent(24,2728.226);
   hmcerror__2->SetBinContent(25,2152.284);
   hmcerror__2->SetBinContent(26,610.3251);
   hmcerror__2->SetBinContent(27,41.92289);
   hmcerror__2->SetBinError(0,9.744986);
   hmcerror__2->SetBinError(1,151.3614);
   hmcerror__2->SetBinError(2,309.4289);
   hmcerror__2->SetBinError(3,395.0428);
   hmcerror__2->SetBinError(4,409.114);
   hmcerror__2->SetBinError(5,456.0582);
   hmcerror__2->SetBinError(6,475.6549);
   hmcerror__2->SetBinError(7,481.3239);
   hmcerror__2->SetBinError(8,520.3788);
   hmcerror__2->SetBinError(9,522.9404);
   hmcerror__2->SetBinError(10,541.6063);
   hmcerror__2->SetBinError(11,537.8851);
   hmcerror__2->SetBinError(12,543.7781);
   hmcerror__2->SetBinError(13,547.2224);
   hmcerror__2->SetBinError(14,518.981);
   hmcerror__2->SetBinError(15,535.2406);
   hmcerror__2->SetBinError(16,513.9031);
   hmcerror__2->SetBinError(17,511.364);
   hmcerror__2->SetBinError(18,494.1628);
   hmcerror__2->SetBinError(19,542.0678);
   hmcerror__2->SetBinError(20,486.9974);
   hmcerror__2->SetBinError(21,472.8688);
   hmcerror__2->SetBinError(22,459.868);
   hmcerror__2->SetBinError(23,429.9869);
   hmcerror__2->SetBinError(24,369.3078);
   hmcerror__2->SetBinError(25,319.8845);
   hmcerror__2->SetBinError(26,104.7154);
   hmcerror__2->SetBinError(27,15.51967);
   hmcerror__2->SetEntries(75744.3);

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
   Double_t _fy3001[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(130.2788);
   Graph_Graph3001->SetMaximum(4545.028);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=28.7/26","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 9772.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2048.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 2732.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  146.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  5603.8","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6470.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 10678.6","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 43068.0","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 610.9","F");

   ci = 1443;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[26] = {
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
   0.1454644,
   0.1444298,
   0.1450053,
   0.1380606,
   0.1415681,
   0.1410446,
   0.1367058,
   0.1424488,
   0.1409608,
   0.1380632,
   0.1357119,
   0.1386016,
   0.1372555,
   0.1356846,
   0.1369903,
   0.1333262,
   0.1328111,
   0.1352857,
   0.1438715,
   0.1368376,
   0.1369556,
   0.1382215,
   0.1396989,
   0.1353656,
   0.1486256,
   0.1715732};
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
   0.1454644,
   0.1444298,
   0.1450053,
   0.1380606,
   0.1415681,
   0.1410446,
   0.1367058,
   0.1424488,
   0.1409608,
   0.1380632,
   0.1357119,
   0.1386016,
   0.1372555,
   0.1356846,
   0.1369903,
   0.1333262,
   0.1328111,
   0.1352857,
   0.1438715,
   0.1368376,
   0.1369556,
   0.1382215,
   0.1396989,
   0.1353656,
   0.1486256,
   0.1715732};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,286);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   0.1283292,
   0.1317634,
   0.1395313,
   0.1335592,
   0.1356278,
   0.1363022,
   0.1341242,
   0.1387091,
   0.1372856,
   0.1356153,
   0.1342433,
   0.1370518,
   0.1353981,
   0.1341934,
   0.1343884,
   0.1318035,
   0.1309092,
   0.1326407,
   0.1407443,
   0.1343066,
   0.1331315,
   0.1340293,
   0.1349686,
   0.1284049,
   0.1365425,
   0.1384674};
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
   0.1283292,
   0.1317634,
   0.1395313,
   0.1335592,
   0.1356278,
   0.1363022,
   0.1341242,
   0.1387091,
   0.1372856,
   0.1356153,
   0.1342433,
   0.1370518,
   0.1353981,
   0.1341934,
   0.1343884,
   0.1318035,
   0.1309092,
   0.1326407,
   0.1407443,
   0.1343066,
   0.1331315,
   0.1340293,
   0.1349686,
   0.1284049,
   0.1365425,
   0.1384674};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,286);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3004[26] = {
   0.9610406,
   1.001205,
   0.9998779,
   1.024874,
   0.9970588,
   1.013233,
   1.009408,
   0.9983317,
   1.030236,
   0.9867735,
   1.026383,
   1.016232,
   1.031632,
   1.063294,
   1.019415,
   1.033084,
   1.033942,
   1.093154,
   0.9875992,
   1.057898,
   1.046423,
   1.013815,
   1.057845,
   0.992953,
   0.9413256,
   0.8536434};
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
   0.03039077,
   0.0216177,
   0.0191577,
   0.01859722,
   0.01759272,
   0.01733353,
   0.01693199,
   0.0165313,
   0.01666447,
   0.0158601,
   0.01609233,
   0.01609421,
   0.0160859,
   0.01667309,
   0.01615273,
   0.01637136,
   0.01638703,
   0.01729942,
   0.01619015,
   0.01724095,
   0.01740898,
   0.01745623,
   0.01853873,
   0.01907762,
   0.02091318,
   0.03739879};
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
   0.03039077,
   0.0216177,
   0.0191577,
   0.01859722,
   0.01759272,
   0.01733353,
   0.01693199,
   0.0165313,
   0.01666447,
   0.0158601,
   0.01609233,
   0.01609421,
   0.0160859,
   0.01667309,
   0.01615273,
   0.01637136,
   0.01638703,
   0.01729942,
   0.01619015,
   0.01724095,
   0.01740898,
   0.01745623,
   0.01853873,
   0.01907762,
   0.02091318,
   0.03739879};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.7868237);
   Graph_Graph3004->SetMaximum(1.139874);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_FC_bnb_12_reco_nuvtxX_all",26,0,260);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
