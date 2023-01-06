#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 09:59:20 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-170,-5.532339,163.3333,611.7603);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__4->SetBinContent(0,3.849403);
   hmc__4->SetBinContent(1,2.020756);
   hmc__4->SetBinContent(2,28.92928);
   hmc__4->SetBinContent(3,74.21159);
   hmc__4->SetBinContent(4,141.8837);
   hmc__4->SetBinContent(5,203.9973);
   hmc__4->SetBinContent(6,224.6647);
   hmc__4->SetBinContent(7,257.5468);
   hmc__4->SetBinContent(8,253.8947);
   hmc__4->SetBinContent(9,249.8517);
   hmc__4->SetBinContent(10,269.5067);
   hmc__4->SetBinContent(11,265.8875);
   hmc__4->SetBinContent(12,251.5613);
   hmc__4->SetBinContent(13,276.617);
   hmc__4->SetBinContent(14,268.7219);
   hmc__4->SetBinContent(15,256.2382);
   hmc__4->SetBinContent(16,270.4607);
   hmc__4->SetBinContent(17,267.9473);
   hmc__4->SetBinContent(18,255.9254);
   hmc__4->SetBinContent(19,263.3741);
   hmc__4->SetBinContent(20,264.3758);
   hmc__4->SetBinContent(21,262.3138);
   hmc__4->SetBinContent(22,226.1122);
   hmc__4->SetBinContent(23,178.4668);
   hmc__4->SetBinContent(24,112.6622);
   hmc__4->SetBinContent(25,48.30946);
   hmc__4->SetBinContent(26,3.100791);
   hmc__4->SetBinContent(27,2.520213);
   hmc__4->SetBinError(0,0.9846937);
   hmc__4->SetBinError(1,16.40412);
   hmc__4->SetBinError(2,15.19505);
   hmc__4->SetBinError(3,26.16627);
   hmc__4->SetBinError(4,50.64627);
   hmc__4->SetBinError(5,59.64618);
   hmc__4->SetBinError(6,67.42509);
   hmc__4->SetBinError(7,78.09557);
   hmc__4->SetBinError(8,75.45404);
   hmc__4->SetBinError(9,72.42362);
   hmc__4->SetBinError(10,72.20266);
   hmc__4->SetBinError(11,76.67276);
   hmc__4->SetBinError(12,72.01407);
   hmc__4->SetBinError(13,71.82176);
   hmc__4->SetBinError(14,81.603);
   hmc__4->SetBinError(15,68.96276);
   hmc__4->SetBinError(16,71.50728);
   hmc__4->SetBinError(17,70.59735);
   hmc__4->SetBinError(18,67.71691);
   hmc__4->SetBinError(19,67.72654);
   hmc__4->SetBinError(20,70.33984);
   hmc__4->SetBinError(21,63.71457);
   hmc__4->SetBinError(22,57.12255);
   hmc__4->SetBinError(23,45.67021);
   hmc__4->SetBinError(24,30.02036);
   hmc__4->SetBinError(25,17.25106);
   hmc__4->SetBinError(26,4.210216);
   hmc__4->SetBinError(27,4.145413);
   hmc__4->SetMinimum(-5.532339);
   hmc__4->SetMaximum(580.8956);
   hmc__4->SetEntries(5727.925);
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
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(290.4479);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,2.515632);
   hbadmatch_stack_1->SetBinContent(3,1.599433);
   hbadmatch_stack_1->SetBinContent(4,5.892614);
   hbadmatch_stack_1->SetBinContent(5,5.303929);
   hbadmatch_stack_1->SetBinContent(6,3.043918);
   hbadmatch_stack_1->SetBinContent(7,4.374499);
   hbadmatch_stack_1->SetBinContent(8,5.143534);
   hbadmatch_stack_1->SetBinContent(9,4.700877);
   hbadmatch_stack_1->SetBinContent(10,6.36898);
   hbadmatch_stack_1->SetBinContent(11,5.024163);
   hbadmatch_stack_1->SetBinContent(12,6.521782);
   hbadmatch_stack_1->SetBinContent(13,8.483528);
   hbadmatch_stack_1->SetBinContent(14,4.860505);
   hbadmatch_stack_1->SetBinContent(15,5.37874);
   hbadmatch_stack_1->SetBinContent(16,7.544741);
   hbadmatch_stack_1->SetBinContent(17,7.105252);
   hbadmatch_stack_1->SetBinContent(18,4.010937);
   hbadmatch_stack_1->SetBinContent(19,3.568755);
   hbadmatch_stack_1->SetBinContent(20,4.793292);
   hbadmatch_stack_1->SetBinContent(21,5.840608);
   hbadmatch_stack_1->SetBinContent(22,2.540522);
   hbadmatch_stack_1->SetBinContent(23,6.878081);
   hbadmatch_stack_1->SetBinContent(24,4.97457);
   hbadmatch_stack_1->SetBinContent(25,2.962033);
   hbadmatch_stack_1->SetBinError(2,0.8372573);
   hbadmatch_stack_1->SetBinError(3,0.6368274);
   hbadmatch_stack_1->SetBinError(4,2.619966);
   hbadmatch_stack_1->SetBinError(5,1.939507);
   hbadmatch_stack_1->SetBinError(6,0.8621501);
   hbadmatch_stack_1->SetBinError(7,1.185305);
   hbadmatch_stack_1->SetBinError(8,1.175193);
   hbadmatch_stack_1->SetBinError(9,1.139027);
   hbadmatch_stack_1->SetBinError(10,1.461722);
   hbadmatch_stack_1->SetBinError(11,1.125739);
   hbadmatch_stack_1->SetBinError(12,1.309596);
   hbadmatch_stack_1->SetBinError(13,1.575654);
   hbadmatch_stack_1->SetBinError(14,1.116453);
   hbadmatch_stack_1->SetBinError(15,1.239005);
   hbadmatch_stack_1->SetBinError(16,1.43213);
   hbadmatch_stack_1->SetBinError(17,1.440173);
   hbadmatch_stack_1->SetBinError(18,1.024433);
   hbadmatch_stack_1->SetBinError(19,0.9971571);
   hbadmatch_stack_1->SetBinError(20,1.179415);
   hbadmatch_stack_1->SetBinError(21,1.449761);
   hbadmatch_stack_1->SetBinError(22,0.8982212);
   hbadmatch_stack_1->SetBinError(23,1.748647);
   hbadmatch_stack_1->SetBinError(24,1.131615);
   hbadmatch_stack_1->SetBinError(25,1.007165);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,1.379791);
   hext_stack_2->SetBinContent(4,2.923985);
   hext_stack_2->SetBinContent(5,7.754043);
   hext_stack_2->SetBinContent(6,7.187449);
   hext_stack_2->SetBinContent(7,4.303776);
   hext_stack_2->SetBinContent(8,7.761223);
   hext_stack_2->SetBinContent(9,12.29006);
   hext_stack_2->SetBinContent(10,20.33537);
   hext_stack_2->SetBinContent(11,18.74652);
   hext_stack_2->SetBinContent(12,10.13738);
   hext_stack_2->SetBinContent(13,24.22977);
   hext_stack_2->SetBinContent(14,18.58929);
   hext_stack_2->SetBinContent(15,19.4891);
   hext_stack_2->SetBinContent(16,22.7662);
   hext_stack_2->SetBinContent(17,28.55944);
   hext_stack_2->SetBinContent(18,29.61925);
   hext_stack_2->SetBinContent(19,39.51003);
   hext_stack_2->SetBinContent(20,38.06522);
   hext_stack_2->SetBinContent(21,46.53748);
   hext_stack_2->SetBinContent(22,39.20005);
   hext_stack_2->SetBinContent(23,33.78457);
   hext_stack_2->SetBinContent(24,24.59726);
   hext_stack_2->SetBinContent(25,8.172231);
   hext_stack_2->SetBinContent(26,0.8131978);
   hext_stack_2->SetBinError(3,0.6935586);
   hext_stack_2->SetBinError(4,1.040301);
   hext_stack_2->SetBinError(5,1.914873);
   hext_stack_2->SetBinError(6,1.875196);
   hext_stack_2->SetBinError(7,1.250299);
   hext_stack_2->SetBinError(8,1.861595);
   hext_stack_2->SetBinError(9,2.410945);
   hext_stack_2->SetBinError(10,3.202235);
   hext_stack_2->SetBinError(11,3.009727);
   hext_stack_2->SetBinError(12,2.032265);
   hext_stack_2->SetBinError(13,3.46245);
   hext_stack_2->SetBinError(14,2.955855);
   hext_stack_2->SetBinError(15,3.043507);
   hext_stack_2->SetBinError(16,3.105735);
   hext_stack_2->SetBinError(17,3.796543);
   hext_stack_2->SetBinError(18,3.863244);
   hext_stack_2->SetBinError(19,4.344478);
   hext_stack_2->SetBinError(20,4.032894);
   hext_stack_2->SetBinError(21,4.733475);
   hext_stack_2->SetBinError(22,4.127522);
   hext_stack_2->SetBinError(23,3.987385);
   hext_stack_2->SetBinError(24,3.299482);
   hext_stack_2->SetBinError(25,1.940613);
   hext_stack_2->SetBinError(26,0.5750177);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,1.021941);
   hdirt_stack_3->SetBinContent(4,1.54821);
   hdirt_stack_3->SetBinContent(5,1.328264);
   hdirt_stack_3->SetBinContent(6,2.80037);
   hdirt_stack_3->SetBinContent(7,2.450408);
   hdirt_stack_3->SetBinContent(8,2.009682);
   hdirt_stack_3->SetBinContent(9,2.31013);
   hdirt_stack_3->SetBinContent(10,2.984614);
   hdirt_stack_3->SetBinContent(11,0.9940419);
   hdirt_stack_3->SetBinContent(12,2.294758);
   hdirt_stack_3->SetBinContent(13,3.065299);
   hdirt_stack_3->SetBinContent(14,0.4950385);
   hdirt_stack_3->SetBinContent(15,2.296399);
   hdirt_stack_3->SetBinContent(16,2.079227);
   hdirt_stack_3->SetBinContent(17,1.704643);
   hdirt_stack_3->SetBinContent(18,1.972646);
   hdirt_stack_3->SetBinContent(19,1.553877);
   hdirt_stack_3->SetBinContent(20,4.008337);
   hdirt_stack_3->SetBinContent(21,3.306505);
   hdirt_stack_3->SetBinContent(22,3.480298);
   hdirt_stack_3->SetBinContent(23,2.677511);
   hdirt_stack_3->SetBinContent(24,1.619711);
   hdirt_stack_3->SetBinContent(25,0.4048706);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.526456);
   hdirt_stack_3->SetBinError(4,0.6315099);
   hdirt_stack_3->SetBinError(5,0.5352159);
   hdirt_stack_3->SetBinError(6,0.7636097);
   hdirt_stack_3->SetBinError(7,0.795133);
   hdirt_stack_3->SetBinError(8,0.8734474);
   hdirt_stack_3->SetBinError(9,0.7571143);
   hdirt_stack_3->SetBinError(10,0.9378134);
   hdirt_stack_3->SetBinError(11,0.4756839);
   hdirt_stack_3->SetBinError(12,0.848291);
   hdirt_stack_3->SetBinError(13,0.9193539);
   hdirt_stack_3->SetBinError(14,0.2933304);
   hdirt_stack_3->SetBinError(15,0.8310636);
   hdirt_stack_3->SetBinError(16,0.8170286);
   hdirt_stack_3->SetBinError(17,0.6958992);
   hdirt_stack_3->SetBinError(18,0.7296234);
   hdirt_stack_3->SetBinError(19,0.6661288);
   hdirt_stack_3->SetBinError(20,1.019573);
   hdirt_stack_3->SetBinError(21,0.9903048);
   hdirt_stack_3->SetBinError(22,1.328312);
   hdirt_stack_3->SetBinError(23,0.767978);
   hdirt_stack_3->SetBinError(24,1.012232);
   hdirt_stack_3->SetBinError(25,0.2872316);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,1.650638);
   houtFV_stack_4->SetBinContent(1,1.283661);
   houtFV_stack_4->SetBinContent(2,19.06728);
   houtFV_stack_4->SetBinContent(3,21.32414);
   houtFV_stack_4->SetBinContent(4,21.5071);
   houtFV_stack_4->SetBinContent(5,21.40422);
   houtFV_stack_4->SetBinContent(6,15.66903);
   houtFV_stack_4->SetBinContent(7,17.78339);
   houtFV_stack_4->SetBinContent(8,13.32483);
   houtFV_stack_4->SetBinContent(9,14.11378);
   houtFV_stack_4->SetBinContent(10,12.22453);
   houtFV_stack_4->SetBinContent(11,12.74204);
   houtFV_stack_4->SetBinContent(12,11.2508);
   houtFV_stack_4->SetBinContent(13,9.804822);
   houtFV_stack_4->SetBinContent(14,12.61697);
   houtFV_stack_4->SetBinContent(15,9.014221);
   houtFV_stack_4->SetBinContent(16,10.97598);
   houtFV_stack_4->SetBinContent(17,12.55494);
   houtFV_stack_4->SetBinContent(18,14.31625);
   houtFV_stack_4->SetBinContent(19,10.79117);
   houtFV_stack_4->SetBinContent(20,13.9049);
   houtFV_stack_4->SetBinContent(21,16.56689);
   houtFV_stack_4->SetBinContent(22,20.80759);
   houtFV_stack_4->SetBinContent(23,14.64072);
   houtFV_stack_4->SetBinContent(24,17.92324);
   houtFV_stack_4->SetBinContent(25,21.28492);
   houtFV_stack_4->SetBinContent(26,1.987204);
   houtFV_stack_4->SetBinContent(27,0.5893137);
   houtFV_stack_4->SetBinError(0,0.6952466);
   houtFV_stack_4->SetBinError(1,0.6012497);
   houtFV_stack_4->SetBinError(2,2.165058);
   houtFV_stack_4->SetBinError(3,2.2673);
   houtFV_stack_4->SetBinError(4,2.307459);
   houtFV_stack_4->SetBinError(5,2.318898);
   houtFV_stack_4->SetBinError(6,1.945944);
   houtFV_stack_4->SetBinError(7,2.084486);
   houtFV_stack_4->SetBinError(8,1.829653);
   houtFV_stack_4->SetBinError(9,1.920273);
   houtFV_stack_4->SetBinError(10,1.745973);
   houtFV_stack_4->SetBinError(11,1.636972);
   houtFV_stack_4->SetBinError(12,1.664852);
   houtFV_stack_4->SetBinError(13,1.54213);
   houtFV_stack_4->SetBinError(14,1.825321);
   houtFV_stack_4->SetBinError(15,1.536465);
   houtFV_stack_4->SetBinError(16,1.560771);
   houtFV_stack_4->SetBinError(17,1.717339);
   houtFV_stack_4->SetBinError(18,1.935815);
   houtFV_stack_4->SetBinError(19,1.675312);
   houtFV_stack_4->SetBinError(20,1.833663);
   houtFV_stack_4->SetBinError(21,2.044098);
   houtFV_stack_4->SetBinError(22,2.301101);
   houtFV_stack_4->SetBinError(23,1.966645);
   houtFV_stack_4->SetBinError(24,2.1157);
   houtFV_stack_4->SetBinError(25,2.334765);
   houtFV_stack_4->SetBinError(26,0.7240659);
   houtFV_stack_4->SetBinError(27,0.3402411);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.073512);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.015851);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.545863);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.977345);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.809812);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.639771);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.016939);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.439022);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.289737);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.248414);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.220341);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.414795);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.831571);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.807955);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.712208);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.444643);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.964759);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.2608);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.963496);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.500303);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.260196);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.867051);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3102602);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3555984);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.46488);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7751131);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9148144);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7623183);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8566381);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7891648);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9289081);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.072952);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.693509);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5701891);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.727822);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7124755);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.862426);
   hNCpi0inFVcoh_stack_5->SetBinError(17,1.002557);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.918156);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8544847);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6929577);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9458634);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.8165501);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8789868);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3442009);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1837497);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2897421);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3719665);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6843238);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9087057);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.315921);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.231917);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8406888);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6882257);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.102999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7548766);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.000442);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.040023);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.069934);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.256536);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.651998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5866722);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8368154);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6155974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4983935);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6924013);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3222194);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2404235);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1313575);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1473914);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2238127);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2337197);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2964699);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3888272);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2645628);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1949843);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3748537);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2355071);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2962072);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.266829);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3681486);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.360885);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2018924);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1482884);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3036289);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2280991);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1906142);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2495257);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.09531947);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.07456803);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.5338451);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.07339665);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.002422);
   hNCpi0inFVres_stack_7->SetBinContent(3,22.49297);
   hNCpi0inFVres_stack_7->SetBinContent(4,53.34834);
   hNCpi0inFVres_stack_7->SetBinContent(5,82.82828);
   hNCpi0inFVres_stack_7->SetBinContent(6,92.36792);
   hNCpi0inFVres_stack_7->SetBinContent(7,112.606);
   hNCpi0inFVres_stack_7->SetBinContent(8,111.4718);
   hNCpi0inFVres_stack_7->SetBinContent(9,103.2661);
   hNCpi0inFVres_stack_7->SetBinContent(10,106.8516);
   hNCpi0inFVres_stack_7->SetBinContent(11,109.8984);
   hNCpi0inFVres_stack_7->SetBinContent(12,105.4954);
   hNCpi0inFVres_stack_7->SetBinContent(13,108.0773);
   hNCpi0inFVres_stack_7->SetBinContent(14,99.92139);
   hNCpi0inFVres_stack_7->SetBinContent(15,105.0032);
   hNCpi0inFVres_stack_7->SetBinContent(16,102.2661);
   hNCpi0inFVres_stack_7->SetBinContent(17,98.87978);
   hNCpi0inFVres_stack_7->SetBinContent(18,89.22591);
   hNCpi0inFVres_stack_7->SetBinContent(19,92.83957);
   hNCpi0inFVres_stack_7->SetBinContent(20,95.69165);
   hNCpi0inFVres_stack_7->SetBinContent(21,84.74483);
   hNCpi0inFVres_stack_7->SetBinContent(22,77.30492);
   hNCpi0inFVres_stack_7->SetBinContent(23,57.65085);
   hNCpi0inFVres_stack_7->SetBinContent(24,29.17618);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.898562);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.08536567);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.9384608);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2300661);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04480907);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7263238);
   hNCpi0inFVres_stack_7->SetBinError(3,1.502671);
   hNCpi0inFVres_stack_7->SetBinError(4,2.317986);
   hNCpi0inFVres_stack_7->SetBinError(5,2.96775);
   hNCpi0inFVres_stack_7->SetBinError(6,3.123682);
   hNCpi0inFVres_stack_7->SetBinError(7,3.522913);
   hNCpi0inFVres_stack_7->SetBinError(8,3.577298);
   hNCpi0inFVres_stack_7->SetBinError(9,3.293958);
   hNCpi0inFVres_stack_7->SetBinError(10,3.453199);
   hNCpi0inFVres_stack_7->SetBinError(11,3.401223);
   hNCpi0inFVres_stack_7->SetBinError(12,3.319646);
   hNCpi0inFVres_stack_7->SetBinError(13,3.475964);
   hNCpi0inFVres_stack_7->SetBinError(14,3.209402);
   hNCpi0inFVres_stack_7->SetBinError(15,3.410348);
   hNCpi0inFVres_stack_7->SetBinError(16,3.329624);
   hNCpi0inFVres_stack_7->SetBinError(17,3.241721);
   hNCpi0inFVres_stack_7->SetBinError(18,2.921644);
   hNCpi0inFVres_stack_7->SetBinError(19,3.014498);
   hNCpi0inFVres_stack_7->SetBinError(20,3.206281);
   hNCpi0inFVres_stack_7->SetBinError(21,3.026986);
   hNCpi0inFVres_stack_7->SetBinError(22,2.945235);
   hNCpi0inFVres_stack_7->SetBinError(23,2.53763);
   hNCpi0inFVres_stack_7->SetBinError(24,1.795336);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7498667);
   hNCpi0inFVres_stack_7->SetBinError(26,0.05645402);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2644362);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2908367);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.357699);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.304361);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.35437);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.17067);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.2216);
   hNCpi0inFVdis_stack_8->SetBinContent(7,23.81472);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.66207);
   hNCpi0inFVdis_stack_8->SetBinContent(9,23.76193);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.34521);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.21035);
   hNCpi0inFVdis_stack_8->SetBinContent(12,21.65792);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.65794);
   hNCpi0inFVdis_stack_8->SetBinContent(14,25.60686);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.11666);
   hNCpi0inFVdis_stack_8->SetBinContent(16,21.49245);
   hNCpi0inFVdis_stack_8->SetBinContent(17,20.68573);
   hNCpi0inFVdis_stack_8->SetBinContent(18,20.09256);
   hNCpi0inFVdis_stack_8->SetBinContent(19,19.09911);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.03415);
   hNCpi0inFVdis_stack_8->SetBinContent(21,18.35845);
   hNCpi0inFVdis_stack_8->SetBinContent(22,13.28696);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.36923);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.362458);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7330785);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.3140733);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2050125);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1267667);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.697867);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.042455);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.34864);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.61247);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.676844);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.578797);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.790765);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.613728);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.507933);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.525743);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.575641);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.736582);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.447784);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.629766);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.537928);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.58103);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.52672);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.652057);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.46348);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.193902);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.14995);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7052618);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.216174);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2964059);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2304141);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1287352);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05791663);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.03399719);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09705318);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1838965);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1469646);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1115193);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04504768);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02411083);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06673559);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.134892);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(2,1.56527);
   hCCpi0inFV_stack_10->SetBinContent(3,10.9931);
   hCCpi0inFV_stack_10->SetBinContent(4,21.64211);
   hCCpi0inFV_stack_10->SetBinContent(5,27.98343);
   hCCpi0inFV_stack_10->SetBinContent(6,35.70892);
   hCCpi0inFV_stack_10->SetBinContent(7,35.79838);
   hCCpi0inFV_stack_10->SetBinContent(8,40.40954);
   hCCpi0inFV_stack_10->SetBinContent(9,36.64078);
   hCCpi0inFV_stack_10->SetBinContent(10,44.61129);
   hCCpi0inFV_stack_10->SetBinContent(11,43.41077);
   hCCpi0inFV_stack_10->SetBinContent(12,42.70569);
   hCCpi0inFV_stack_10->SetBinContent(13,43.82623);
   hCCpi0inFV_stack_10->SetBinContent(14,46.11824);
   hCCpi0inFV_stack_10->SetBinContent(15,38.89286);
   hCCpi0inFV_stack_10->SetBinContent(16,45.88483);
   hCCpi0inFV_stack_10->SetBinContent(17,38.82276);
   hCCpi0inFV_stack_10->SetBinContent(18,43.58908);
   hCCpi0inFV_stack_10->SetBinContent(19,39.96604);
   hCCpi0inFV_stack_10->SetBinContent(20,38.45786);
   hCCpi0inFV_stack_10->SetBinContent(21,34.68709);
   hCCpi0inFV_stack_10->SetBinContent(22,25.66351);
   hCCpi0inFV_stack_10->SetBinContent(23,21.20089);
   hCCpi0inFV_stack_10->SetBinContent(24,13.78627);
   hCCpi0inFV_stack_10->SetBinContent(25,2.679273);
   hCCpi0inFV_stack_10->SetBinError(0,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(2,0.5534115);
   hCCpi0inFV_stack_10->SetBinError(3,1.598612);
   hCCpi0inFV_stack_10->SetBinError(4,2.338623);
   hCCpi0inFV_stack_10->SetBinError(5,2.709956);
   hCCpi0inFV_stack_10->SetBinError(6,2.959801);
   hCCpi0inFV_stack_10->SetBinError(7,2.985214);
   hCCpi0inFV_stack_10->SetBinError(8,3.15827);
   hCCpi0inFV_stack_10->SetBinError(9,3.040163);
   hCCpi0inFV_stack_10->SetBinError(10,3.355528);
   hCCpi0inFV_stack_10->SetBinError(11,3.327115);
   hCCpi0inFV_stack_10->SetBinError(12,3.291284);
   hCCpi0inFV_stack_10->SetBinError(13,3.29883);
   hCCpi0inFV_stack_10->SetBinError(14,3.348081);
   hCCpi0inFV_stack_10->SetBinError(15,3.093708);
   hCCpi0inFV_stack_10->SetBinError(16,3.375636);
   hCCpi0inFV_stack_10->SetBinError(17,3.168285);
   hCCpi0inFV_stack_10->SetBinError(18,3.324312);
   hCCpi0inFV_stack_10->SetBinError(19,3.176127);
   hCCpi0inFV_stack_10->SetBinError(20,3.122366);
   hCCpi0inFV_stack_10->SetBinError(21,2.946606);
   hCCpi0inFV_stack_10->SetBinError(22,2.56058);
   hCCpi0inFV_stack_10->SetBinError(23,2.300949);
   hCCpi0inFV_stack_10->SetBinError(24,1.88438);
   hCCpi0inFV_stack_10->SetBinError(25,0.7950033);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.6705414);
   hNCinFV_stack_11->SetBinContent(3,6.155999);
   hNCinFV_stack_11->SetBinContent(4,10.99157);
   hNCinFV_stack_11->SetBinContent(5,15.16847);
   hNCinFV_stack_11->SetBinContent(6,17.80646);
   hNCinFV_stack_11->SetBinContent(7,26.71674);
   hNCinFV_stack_11->SetBinContent(8,20.58541);
   hNCinFV_stack_11->SetBinContent(9,22.09128);
   hNCinFV_stack_11->SetBinContent(10,24.06332);
   hNCinFV_stack_11->SetBinContent(11,24.0662);
   hNCinFV_stack_11->SetBinContent(12,23.14929);
   hNCinFV_stack_11->SetBinContent(13,22.98289);
   hNCinFV_stack_11->SetBinContent(14,25.15201);
   hNCinFV_stack_11->SetBinContent(15,24.48695);
   hNCinFV_stack_11->SetBinContent(16,20.65665);
   hNCinFV_stack_11->SetBinContent(17,27.22058);
   hNCinFV_stack_11->SetBinContent(18,24.10006);
   hNCinFV_stack_11->SetBinContent(19,23.14507);
   hNCinFV_stack_11->SetBinContent(20,22.12942);
   hNCinFV_stack_11->SetBinContent(21,23.12403);
   hNCinFV_stack_11->SetBinContent(22,19.09917);
   hNCinFV_stack_11->SetBinContent(23,13.19213);
   hNCinFV_stack_11->SetBinContent(24,6.250758);
   hNCinFV_stack_11->SetBinContent(25,1.29069);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.4159069);
   hNCinFV_stack_11->SetBinError(3,1.249043);
   hNCinFV_stack_11->SetBinError(4,1.646248);
   hNCinFV_stack_11->SetBinError(5,2.02935);
   hNCinFV_stack_11->SetBinError(6,2.229223);
   hNCinFV_stack_11->SetBinError(7,3.021074);
   hNCinFV_stack_11->SetBinError(8,2.423835);
   hNCinFV_stack_11->SetBinError(9,2.649854);
   hNCinFV_stack_11->SetBinError(10,2.74688);
   hNCinFV_stack_11->SetBinError(11,2.577538);
   hNCinFV_stack_11->SetBinError(12,2.469328);
   hNCinFV_stack_11->SetBinError(13,2.693471);
   hNCinFV_stack_11->SetBinError(14,2.86875);
   hNCinFV_stack_11->SetBinError(15,2.808627);
   hNCinFV_stack_11->SetBinError(16,2.302091);
   hNCinFV_stack_11->SetBinError(17,2.872405);
   hNCinFV_stack_11->SetBinError(18,2.591395);
   hNCinFV_stack_11->SetBinError(19,2.548081);
   hNCinFV_stack_11->SetBinError(20,2.687095);
   hNCinFV_stack_11->SetBinError(21,2.602458);
   hNCinFV_stack_11->SetBinError(22,2.328909);
   hNCinFV_stack_11->SetBinError(23,2.032558);
   hNCinFV_stack_11->SetBinError(24,1.297023);
   hNCinFV_stack_11->SetBinError(25,0.5489734);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,3.381579);
   hnumuCCinFV_stack_12->SetBinContent(4,10.73243);
   hnumuCCinFV_stack_12->SetBinContent(5,19.33734);
   hnumuCCinFV_stack_12->SetBinContent(6,22.94761);
   hnumuCCinFV_stack_12->SetBinContent(7,20.79419);
   hnumuCCinFV_stack_12->SetBinContent(8,22.1996);
   hnumuCCinFV_stack_12->SetBinContent(9,20.9316);
   hnumuCCinFV_stack_12->SetBinContent(10,22.11341);
   hnumuCCinFV_stack_12->SetBinContent(11,19.90214);
   hnumuCCinFV_stack_12->SetBinContent(12,20.82233);
   hnumuCCinFV_stack_12->SetBinContent(13,26.21086);
   hnumuCCinFV_stack_12->SetBinContent(14,27.042);
   hnumuCCinFV_stack_12->SetBinContent(15,23.46583);
   hnumuCCinFV_stack_12->SetBinContent(16,25.78319);
   hnumuCCinFV_stack_12->SetBinContent(17,24.14171);
   hnumuCCinFV_stack_12->SetBinContent(18,21.76737);
   hnumuCCinFV_stack_12->SetBinContent(19,24.58606);
   hnumuCCinFV_stack_12->SetBinContent(20,18.76748);
   hnumuCCinFV_stack_12->SetBinContent(21,21.86417);
   hnumuCCinFV_stack_12->SetBinContent(22,18.11306);
   hnumuCCinFV_stack_12->SetBinContent(23,10.86732);
   hnumuCCinFV_stack_12->SetBinContent(24,7.66927);
   hnumuCCinFV_stack_12->SetBinContent(25,4.966189);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,0.9383906);
   hnumuCCinFV_stack_12->SetBinError(4,1.734347);
   hnumuCCinFV_stack_12->SetBinError(5,2.9114);
   hnumuCCinFV_stack_12->SetBinError(6,3.010453);
   hnumuCCinFV_stack_12->SetBinError(7,2.477324);
   hnumuCCinFV_stack_12->SetBinError(8,2.676911);
   hnumuCCinFV_stack_12->SetBinError(9,2.371834);
   hnumuCCinFV_stack_12->SetBinError(10,2.559078);
   hnumuCCinFV_stack_12->SetBinError(11,2.549834);
   hnumuCCinFV_stack_12->SetBinError(12,2.716854);
   hnumuCCinFV_stack_12->SetBinError(13,2.695641);
   hnumuCCinFV_stack_12->SetBinError(14,3.083368);
   hnumuCCinFV_stack_12->SetBinError(15,2.65719);
   hnumuCCinFV_stack_12->SetBinError(16,2.774633);
   hnumuCCinFV_stack_12->SetBinError(17,3.254432);
   hnumuCCinFV_stack_12->SetBinError(18,2.571311);
   hnumuCCinFV_stack_12->SetBinError(19,3.427861);
   hnumuCCinFV_stack_12->SetBinError(20,2.614131);
   hnumuCCinFV_stack_12->SetBinError(21,2.648891);
   hnumuCCinFV_stack_12->SetBinError(22,2.491745);
   hnumuCCinFV_stack_12->SetBinError(23,1.983021);
   hnumuCCinFV_stack_12->SetBinError(24,1.484846);
   hnumuCCinFV_stack_12->SetBinError(25,1.409967);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.536893);
   hnueCCinFV_stack_13->SetBinContent(5,1.472796);
   hnueCCinFV_stack_13->SetBinContent(6,1.014671);
   hnueCCinFV_stack_13->SetBinContent(7,2.548632);
   hnueCCinFV_stack_13->SetBinContent(8,2.43655);
   hnueCCinFV_stack_13->SetBinContent(9,3.75881);
   hnueCCinFV_stack_13->SetBinContent(10,2.423193);
   hnueCCinFV_stack_13->SetBinContent(11,2.463104);
   hnueCCinFV_stack_13->SetBinContent(12,2.488625);
   hnueCCinFV_stack_13->SetBinContent(13,3.057607);
   hnueCCinFV_stack_13->SetBinContent(14,2.767687);
   hnueCCinFV_stack_13->SetBinContent(15,1.137455);
   hnueCCinFV_stack_13->SetBinContent(16,3.928026);
   hnueCCinFV_stack_13->SetBinContent(17,0.7582098);
   hnueCCinFV_stack_13->SetBinContent(18,1.184293);
   hnueCCinFV_stack_13->SetBinContent(19,1.45817);
   hnueCCinFV_stack_13->SetBinContent(20,2.628622);
   hnueCCinFV_stack_13->SetBinContent(21,1.637966);
   hnueCCinFV_stack_13->SetBinContent(22,1.423397);
   hnueCCinFV_stack_13->SetBinContent(23,1.623046);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.6073536);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3929602);
   hnueCCinFV_stack_13->SetBinError(5,0.7043026);
   hnueCCinFV_stack_13->SetBinError(6,0.5174985);
   hnueCCinFV_stack_13->SetBinError(7,0.8817429);
   hnueCCinFV_stack_13->SetBinError(8,0.9059983);
   hnueCCinFV_stack_13->SetBinError(9,1.194345);
   hnueCCinFV_stack_13->SetBinError(10,0.8366999);
   hnueCCinFV_stack_13->SetBinError(11,0.8039367);
   hnueCCinFV_stack_13->SetBinError(12,0.9858148);
   hnueCCinFV_stack_13->SetBinError(13,1.609843);
   hnueCCinFV_stack_13->SetBinError(14,0.9965461);
   hnueCCinFV_stack_13->SetBinError(15,0.7683277);
   hnueCCinFV_stack_13->SetBinError(16,1.398272);
   hnueCCinFV_stack_13->SetBinError(17,0.4509977);
   hnueCCinFV_stack_13->SetBinError(18,0.5445209);
   hnueCCinFV_stack_13->SetBinError(19,0.6071593);
   hnueCCinFV_stack_13->SetBinError(20,1.394479);
   hnueCCinFV_stack_13->SetBinError(21,0.6486885);
   hnueCCinFV_stack_13->SetBinError(22,0.6876589);
   hnueCCinFV_stack_13->SetBinError(23,0.7783247);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.4462229);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__5->SetBinContent(0,3.849403);
   hmcerror__5->SetBinContent(1,2.020756);
   hmcerror__5->SetBinContent(2,28.92928);
   hmcerror__5->SetBinContent(3,74.21159);
   hmcerror__5->SetBinContent(4,141.8837);
   hmcerror__5->SetBinContent(5,203.9973);
   hmcerror__5->SetBinContent(6,224.6647);
   hmcerror__5->SetBinContent(7,257.5468);
   hmcerror__5->SetBinContent(8,253.8947);
   hmcerror__5->SetBinContent(9,249.8517);
   hmcerror__5->SetBinContent(10,269.5067);
   hmcerror__5->SetBinContent(11,265.8875);
   hmcerror__5->SetBinContent(12,251.5613);
   hmcerror__5->SetBinContent(13,276.617);
   hmcerror__5->SetBinContent(14,268.7219);
   hmcerror__5->SetBinContent(15,256.2382);
   hmcerror__5->SetBinContent(16,270.4607);
   hmcerror__5->SetBinContent(17,267.9473);
   hmcerror__5->SetBinContent(18,255.9254);
   hmcerror__5->SetBinContent(19,263.3741);
   hmcerror__5->SetBinContent(20,264.3758);
   hmcerror__5->SetBinContent(21,262.3138);
   hmcerror__5->SetBinContent(22,226.1122);
   hmcerror__5->SetBinContent(23,178.4668);
   hmcerror__5->SetBinContent(24,112.6622);
   hmcerror__5->SetBinContent(25,48.30946);
   hmcerror__5->SetBinContent(26,3.100791);
   hmcerror__5->SetBinContent(27,2.520213);
   hmcerror__5->SetBinError(0,0.9846937);
   hmcerror__5->SetBinError(1,16.40412);
   hmcerror__5->SetBinError(2,15.19505);
   hmcerror__5->SetBinError(3,26.16627);
   hmcerror__5->SetBinError(4,50.64627);
   hmcerror__5->SetBinError(5,59.64618);
   hmcerror__5->SetBinError(6,67.42509);
   hmcerror__5->SetBinError(7,78.09557);
   hmcerror__5->SetBinError(8,75.45404);
   hmcerror__5->SetBinError(9,72.42362);
   hmcerror__5->SetBinError(10,72.20266);
   hmcerror__5->SetBinError(11,76.67276);
   hmcerror__5->SetBinError(12,72.01407);
   hmcerror__5->SetBinError(13,71.82176);
   hmcerror__5->SetBinError(14,81.603);
   hmcerror__5->SetBinError(15,68.96276);
   hmcerror__5->SetBinError(16,71.50728);
   hmcerror__5->SetBinError(17,70.59735);
   hmcerror__5->SetBinError(18,67.71691);
   hmcerror__5->SetBinError(19,67.72654);
   hmcerror__5->SetBinError(20,70.33984);
   hmcerror__5->SetBinError(21,63.71457);
   hmcerror__5->SetBinError(22,57.12255);
   hmcerror__5->SetBinError(23,45.67021);
   hmcerror__5->SetBinError(24,30.02036);
   hmcerror__5->SetBinError(25,17.25106);
   hmcerror__5->SetBinError(26,4.210216);
   hmcerror__5->SetBinError(27,4.145413);
   hmcerror__5->SetEntries(5727.925);

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
   3,
   19,
   66,
   174,
   198,
   224,
   248,
   265,
   253,
   258,
   256,
   234,
   235,
   237,
   236,
   262,
   258,
   253,
   236,
   246,
   239,
   245,
   184,
   103,
   34,
   1};
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
   2.143368,
   4.5151,
   8.2509,
   13.19091,
   14.07125,
   14.96663,
   15.74802,
   16.27882,
   15.90597,
   16.06238,
   16,
   15.29706,
   15.32971,
   15.3948,
   15.36229,
   16.18641,
   16.06238,
   15.90597,
   15.36229,
   15.68439,
   15.45962,
   15.65248,
   13.56466,
   10.14889,
   5.9703,
   1};
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
   1.72422,
   4.3011,
   8.0483,
   13.19091,
   14.07125,
   14.96663,
   15.74802,
   16.27882,
   15.90597,
   16.06238,
   16,
   15.29706,
   15.32971,
   15.3948,
   15.36229,
   16.18641,
   16.06238,
   15.90597,
   15.36229,
   15.68439,
   15.45962,
   15.65248,
   13.56466,
   10.14889,
   5.7635,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-156,156);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(309.4067);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.1/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4967.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 48.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 368.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1950.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  405.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 444.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_reco_nuvtxY_all");
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
   8.117814,
   0.5252481,
   0.35259,
   0.3569563,
   0.2923871,
   0.3001143,
   0.3032286,
   0.2971863,
   0.2898664,
   0.2679068,
   0.2883654,
   0.2862685,
   0.2596434,
   0.3036709,
   0.2691354,
   0.2643907,
   0.2634748,
   0.2645963,
   0.2571496,
   0.2660601,
   0.2428945,
   0.2526293,
   0.2559031,
   0.2664634,
   0.3570948,
   1.357788};
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
   8.117814,
   0.5252481,
   0.35259,
   0.3569563,
   0.2923871,
   0.3001143,
   0.3032286,
   0.2971863,
   0.2898664,
   0.2679068,
   0.2883654,
   0.2862685,
   0.2596434,
   0.3036709,
   0.2691354,
   0.2643907,
   0.2634748,
   0.2645963,
   0.2571496,
   0.2660601,
   0.2428945,
   0.2526293,
   0.2559031,
   0.2664634,
   0.3570948,
   1.357788};
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
   0.501817,
   0.2603134,
   0.2925291,
   0.3165752,
   0.2741686,
   0.2786295,
   0.2866714,
   0.2788444,
   0.2727168,
   0.2527779,
   0.2700441,
   0.271161,
   0.2494185,
   0.2709389,
   0.2550068,
   0.2476707,
   0.2503248,
   0.2510951,
   0.245152,
   0.2498899,
   0.2221831,
   0.2411825,
   0.2307093,
   0.2233849,
   0.2488197,
   0.4314634};
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
   0.501817,
   0.2603134,
   0.2925291,
   0.3165752,
   0.2741686,
   0.2786295,
   0.2866714,
   0.2788444,
   0.2727168,
   0.2527779,
   0.2700441,
   0.271161,
   0.2494185,
   0.2709389,
   0.2550068,
   0.2476707,
   0.2503248,
   0.2510951,
   0.245152,
   0.2498899,
   0.2221831,
   0.2411825,
   0.2307093,
   0.2233849,
   0.2488197,
   0.4314634};
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
   1.484593,
   0.6567741,
   0.8893489,
   1.226357,
   0.970601,
   0.9970414,
   0.9629316,
   1.04374,
   1.012601,
   0.9573046,
   0.9628133,
   0.9301909,
   0.8495502,
   0.8819528,
   0.9210182,
   0.9687176,
   0.9628759,
   0.9885694,
   0.8960639,
   0.9304938,
   0.9111225,
   1.083533,
   1.031004,
   0.9142374,
   0.7037959,
   0.3224984};
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
   1.060676,
   0.1560737,
   0.1111807,
   0.09296987,
   0.06897761,
   0.06661763,
   0.06114622,
   0.06411641,
   0.06366167,
   0.05959918,
   0.06017583,
   0.06080848,
   0.05541854,
   0.05728899,
   0.05995318,
   0.05984757,
   0.05994604,
   0.06215083,
   0.05832879,
   0.05932612,
   0.05893562,
   0.06922438,
   0.07600664,
   0.09008248,
   0.1235845,
   0.3224984};
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
   0.8532548,
   0.1486764,
   0.1084507,
   0.09296987,
   0.06897761,
   0.06661763,
   0.06114622,
   0.06411641,
   0.06366167,
   0.05959918,
   0.06017583,
   0.06080848,
   0.05541854,
   0.05728899,
   0.05995318,
   0.05984757,
   0.05994604,
   0.06215083,
   0.05832879,
   0.05932612,
   0.05893562,
   0.06922438,
   0.07600664,
   0.09008248,
   0.1193037,
   0.4385042};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.571632);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
