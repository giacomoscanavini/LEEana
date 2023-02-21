#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 20:55:42 2023) by ROOT version 6.26/00
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
   pad1->Range(-170,-6.082692,163.3333,672.6177);
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
   hmc__4->SetBinContent(0,4.341506);
   hmc__4->SetBinContent(1,2.183437);
   hmc__4->SetBinContent(2,31.36479);
   hmc__4->SetBinContent(3,84.14722);
   hmc__4->SetBinContent(4,165.6328);
   hmc__4->SetBinContent(5,231.7061);
   hmc__4->SetBinContent(6,253.1458);
   hmc__4->SetBinContent(7,288.1461);
   hmc__4->SetBinContent(8,284.7823);
   hmc__4->SetBinContent(9,280.2749);
   hmc__4->SetBinContent(10,298.0129);
   hmc__4->SetBinContent(11,299.8598);
   hmc__4->SetBinContent(12,287.1455);
   hmc__4->SetBinContent(13,304.1346);
   hmc__4->SetBinContent(14,299.0932);
   hmc__4->SetBinContent(15,285.2885);
   hmc__4->SetBinContent(16,300.9666);
   hmc__4->SetBinContent(17,297.3886);
   hmc__4->SetBinContent(18,286.1758);
   hmc__4->SetBinContent(19,294.2867);
   hmc__4->SetBinContent(20,293.1552);
   hmc__4->SetBinContent(21,288.0914);
   hmc__4->SetBinContent(22,250.6585);
   hmc__4->SetBinContent(23,195.9575);
   hmc__4->SetBinContent(24,124.6427);
   hmc__4->SetBinContent(25,51.96803);
   hmc__4->SetBinContent(26,3.195041);
   hmc__4->SetBinContent(27,3.009751);
   hmc__4->SetBinError(0,1.053254);
   hmc__4->SetBinError(1,9.927461);
   hmc__4->SetBinError(2,18.39299);
   hmc__4->SetBinError(3,26.84449);
   hmc__4->SetBinError(4,50.33452);
   hmc__4->SetBinError(5,60.93894);
   hmc__4->SetBinError(6,71.24413);
   hmc__4->SetBinError(7,84.61881);
   hmc__4->SetBinError(8,80.06541);
   hmc__4->SetBinError(9,77.72855);
   hmc__4->SetBinError(10,79.52598);
   hmc__4->SetBinError(11,83.12327);
   hmc__4->SetBinError(12,80.53408);
   hmc__4->SetBinError(13,80.51785);
   hmc__4->SetBinError(14,86.3031);
   hmc__4->SetBinError(15,76.06332);
   hmc__4->SetBinError(16,77.91519);
   hmc__4->SetBinError(17,75.27524);
   hmc__4->SetBinError(18,73.6993);
   hmc__4->SetBinError(19,73.08786);
   hmc__4->SetBinError(20,75.72337);
   hmc__4->SetBinError(21,65.96309);
   hmc__4->SetBinError(22,59.29124);
   hmc__4->SetBinError(23,45.2217);
   hmc__4->SetBinError(24,31.44289);
   hmc__4->SetBinError(25,17.89041);
   hmc__4->SetBinError(26,4.392906);
   hmc__4->SetBinError(27,4.77168);
   hmc__4->SetMinimum(-6.082692);
   hmc__4->SetMaximum(638.6827);
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
   hs2_stack_2->SetMaximum(319.3413);
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
   hbadmatch_stack_1->SetBinContent(3,1.660551);
   hbadmatch_stack_1->SetBinContent(4,6.131557);
   hbadmatch_stack_1->SetBinContent(5,5.500986);
   hbadmatch_stack_1->SetBinContent(6,3.304741);
   hbadmatch_stack_1->SetBinContent(7,4.553594);
   hbadmatch_stack_1->SetBinContent(8,5.227643);
   hbadmatch_stack_1->SetBinContent(9,4.59986);
   hbadmatch_stack_1->SetBinContent(10,6.791079);
   hbadmatch_stack_1->SetBinContent(11,5.838198);
   hbadmatch_stack_1->SetBinContent(12,6.776849);
   hbadmatch_stack_1->SetBinContent(13,8.70485);
   hbadmatch_stack_1->SetBinContent(14,5.231489);
   hbadmatch_stack_1->SetBinContent(15,6.003515);
   hbadmatch_stack_1->SetBinContent(16,7.912715);
   hbadmatch_stack_1->SetBinContent(17,6.845222);
   hbadmatch_stack_1->SetBinContent(18,3.847062);
   hbadmatch_stack_1->SetBinContent(19,3.935);
   hbadmatch_stack_1->SetBinContent(20,4.623265);
   hbadmatch_stack_1->SetBinContent(21,6.088676);
   hbadmatch_stack_1->SetBinContent(22,2.816731);
   hbadmatch_stack_1->SetBinContent(23,7.01795);
   hbadmatch_stack_1->SetBinContent(24,5.35543);
   hbadmatch_stack_1->SetBinContent(25,2.792137);
   hbadmatch_stack_1->SetBinError(2,0.8372573);
   hbadmatch_stack_1->SetBinError(3,0.650847);
   hbadmatch_stack_1->SetBinError(4,2.640287);
   hbadmatch_stack_1->SetBinError(5,1.962394);
   hbadmatch_stack_1->SetBinError(6,0.9100555);
   hbadmatch_stack_1->SetBinError(7,1.145929);
   hbadmatch_stack_1->SetBinError(8,1.130142);
   hbadmatch_stack_1->SetBinError(9,1.116886);
   hbadmatch_stack_1->SetBinError(10,1.497019);
   hbadmatch_stack_1->SetBinError(11,1.262183);
   hbadmatch_stack_1->SetBinError(12,1.338392);
   hbadmatch_stack_1->SetBinError(13,1.54787);
   hbadmatch_stack_1->SetBinError(14,1.16443);
   hbadmatch_stack_1->SetBinError(15,1.337218);
   hbadmatch_stack_1->SetBinError(16,1.455012);
   hbadmatch_stack_1->SetBinError(17,1.349676);
   hbadmatch_stack_1->SetBinError(18,0.9596395);
   hbadmatch_stack_1->SetBinError(19,1.062142);
   hbadmatch_stack_1->SetBinError(20,1.09456);
   hbadmatch_stack_1->SetBinError(21,1.461671);
   hbadmatch_stack_1->SetBinError(22,0.9776304);
   hbadmatch_stack_1->SetBinError(23,1.761532);
   hbadmatch_stack_1->SetBinError(24,1.195204);
   hbadmatch_stack_1->SetBinError(25,0.8701145);
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
   houtFV_stack_4->SetBinContent(0,1.754141);
   houtFV_stack_4->SetBinContent(1,1.465526);
   houtFV_stack_4->SetBinContent(2,20.6286);
   houtFV_stack_4->SetBinContent(3,22.51917);
   houtFV_stack_4->SetBinContent(4,23.95914);
   houtFV_stack_4->SetBinContent(5,22.25826);
   houtFV_stack_4->SetBinContent(6,16.61319);
   houtFV_stack_4->SetBinContent(7,19.12621);
   houtFV_stack_4->SetBinContent(8,13.87117);
   houtFV_stack_4->SetBinContent(9,15.42854);
   houtFV_stack_4->SetBinContent(10,12.59592);
   houtFV_stack_4->SetBinContent(11,14.57639);
   houtFV_stack_4->SetBinContent(12,11.66611);
   houtFV_stack_4->SetBinContent(13,10.93674);
   houtFV_stack_4->SetBinContent(14,12.63776);
   houtFV_stack_4->SetBinContent(15,9.687151);
   houtFV_stack_4->SetBinContent(16,12.06067);
   houtFV_stack_4->SetBinContent(17,13.94318);
   houtFV_stack_4->SetBinContent(18,14.3609);
   houtFV_stack_4->SetBinContent(19,11.61204);
   houtFV_stack_4->SetBinContent(20,15.08216);
   houtFV_stack_4->SetBinContent(21,17.01584);
   houtFV_stack_4->SetBinContent(22,22.08572);
   houtFV_stack_4->SetBinContent(23,15.39747);
   houtFV_stack_4->SetBinContent(24,19.46733);
   houtFV_stack_4->SetBinContent(25,23.88151);
   houtFV_stack_4->SetBinContent(26,2.00411);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinError(0,0.7350354);
   houtFV_stack_4->SetBinError(1,0.6209405);
   houtFV_stack_4->SetBinError(2,2.281288);
   houtFV_stack_4->SetBinError(3,2.337376);
   houtFV_stack_4->SetBinError(4,2.457376);
   houtFV_stack_4->SetBinError(5,2.382948);
   houtFV_stack_4->SetBinError(6,1.978574);
   houtFV_stack_4->SetBinError(7,2.155647);
   houtFV_stack_4->SetBinError(8,1.851237);
   houtFV_stack_4->SetBinError(9,2.00661);
   houtFV_stack_4->SetBinError(10,1.76177);
   houtFV_stack_4->SetBinError(11,1.846396);
   houtFV_stack_4->SetBinError(12,1.713485);
   houtFV_stack_4->SetBinError(13,1.652611);
   houtFV_stack_4->SetBinError(14,1.798088);
   houtFV_stack_4->SetBinError(15,1.584111);
   houtFV_stack_4->SetBinError(16,1.652958);
   houtFV_stack_4->SetBinError(17,1.862973);
   houtFV_stack_4->SetBinError(18,1.863184);
   houtFV_stack_4->SetBinError(19,1.72095);
   houtFV_stack_4->SetBinError(20,1.924848);
   houtFV_stack_4->SetBinError(21,2.046043);
   houtFV_stack_4->SetBinError(22,2.393087);
   houtFV_stack_4->SetBinError(23,1.978879);
   houtFV_stack_4->SetBinError(24,2.245373);
   houtFV_stack_4->SetBinError(25,2.502878);
   houtFV_stack_4->SetBinError(26,0.7352871);
   houtFV_stack_4->SetBinError(27,0.3397478);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9044259);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.994358);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.140842);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.42001);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.294456);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.793832);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.938324);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.78271);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.17431);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.43446);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.165166);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.876283);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.131296);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.494996);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,6.652691);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.1866);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.298032);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.749906);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.237992);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.32186);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.487188);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8502901);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2693006);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4173393);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6722165);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7017251);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6454851);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.672216);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7558859);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7088987);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7519709);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7202915);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5471458);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5709329);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7428141);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7835287);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9111832);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7743263);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.754941);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6127475);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6546655);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6809413);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6821792);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3309054);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1431726);
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
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.892472);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.218062);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.603926);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.28324);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9336537);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.310308);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.283904);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.38039);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.241722);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.547126);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.00324);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.017522);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.26979);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8652359);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.9060901);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4184998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3223657);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5278978);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4427564);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3841566);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.215211);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3592889);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3661742);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3525453);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3737142);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3774273);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2962551);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2853243);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4161726);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2994136);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3332495);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1080562);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1005948);
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
   hNCpi0inFVres_stack_7->SetBinContent(0,0.711454);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.517992);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.0921);
   hNCpi0inFVres_stack_7->SetBinContent(4,69.99359);
   hNCpi0inFVres_stack_7->SetBinContent(5,106.438);
   hNCpi0inFVres_stack_7->SetBinContent(6,116.4894);
   hNCpi0inFVres_stack_7->SetBinContent(7,140.5724);
   hNCpi0inFVres_stack_7->SetBinContent(8,139.7445);
   hNCpi0inFVres_stack_7->SetBinContent(9,130.1635);
   hNCpi0inFVres_stack_7->SetBinContent(10,133.7995);
   hNCpi0inFVres_stack_7->SetBinContent(11,139.2699);
   hNCpi0inFVres_stack_7->SetBinContent(12,134.0472);
   hNCpi0inFVres_stack_7->SetBinContent(13,132.4433);
   hNCpi0inFVres_stack_7->SetBinContent(14,128.888);
   hNCpi0inFVres_stack_7->SetBinContent(15,129.6421);
   hNCpi0inFVres_stack_7->SetBinContent(16,127.4985);
   hNCpi0inFVres_stack_7->SetBinContent(17,125.3839);
   hNCpi0inFVres_stack_7->SetBinContent(18,115.8472);
   hNCpi0inFVres_stack_7->SetBinContent(19,119.4684);
   hNCpi0inFVres_stack_7->SetBinContent(20,123.0337);
   hNCpi0inFVres_stack_7->SetBinContent(21,106.7342);
   hNCpi0inFVres_stack_7->SetBinContent(22,98.16873);
   hNCpi0inFVres_stack_7->SetBinContent(23,72.32922);
   hNCpi0inFVres_stack_7->SetBinContent(24,37.37355);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.815514);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.519562);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3035023);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6988534);
   hNCpi0inFVres_stack_7->SetBinError(3,1.793862);
   hNCpi0inFVres_stack_7->SetBinError(4,2.776098);
   hNCpi0inFVres_stack_7->SetBinError(5,3.412567);
   hNCpi0inFVres_stack_7->SetBinError(6,3.475064);
   hNCpi0inFVres_stack_7->SetBinError(7,3.938303);
   hNCpi0inFVres_stack_7->SetBinError(8,3.897131);
   hNCpi0inFVres_stack_7->SetBinError(9,3.712454);
   hNCpi0inFVres_stack_7->SetBinError(10,3.739665);
   hNCpi0inFVres_stack_7->SetBinError(11,3.868379);
   hNCpi0inFVres_stack_7->SetBinError(12,3.768832);
   hNCpi0inFVres_stack_7->SetBinError(13,3.73378);
   hNCpi0inFVres_stack_7->SetBinError(14,3.685729);
   hNCpi0inFVres_stack_7->SetBinError(15,3.750107);
   hNCpi0inFVres_stack_7->SetBinError(16,3.709387);
   hNCpi0inFVres_stack_7->SetBinError(17,3.660822);
   hNCpi0inFVres_stack_7->SetBinError(18,3.450939);
   hNCpi0inFVres_stack_7->SetBinError(19,3.569169);
   hNCpi0inFVres_stack_7->SetBinError(20,3.670315);
   hNCpi0inFVres_stack_7->SetBinError(21,3.338775);
   hNCpi0inFVres_stack_7->SetBinError(22,3.309572);
   hNCpi0inFVres_stack_7->SetBinError(23,2.816739);
   hNCpi0inFVres_stack_7->SetBinError(24,2.081952);
   hNCpi0inFVres_stack_7->SetBinError(25,0.793483);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4551821);
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
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.5161542);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6539899);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.185768);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.15275);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.68193);
   hNCpi0inFVdis_stack_8->SetBinContent(6,22.3264);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.94985);
   hNCpi0inFVdis_stack_8->SetBinContent(8,24.95898);
   hNCpi0inFVdis_stack_8->SetBinContent(9,26.11782);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.95123);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.27374);
   hNCpi0inFVdis_stack_8->SetBinContent(12,25.75213);
   hNCpi0inFVdis_stack_8->SetBinContent(13,25.57211);
   hNCpi0inFVdis_stack_8->SetBinContent(14,28.96662);
   hNCpi0inFVdis_stack_8->SetBinContent(15,25.19828);
   hNCpi0inFVdis_stack_8->SetBinContent(16,24.95698);
   hNCpi0inFVdis_stack_8->SetBinContent(17,23.26951);
   hNCpi0inFVdis_stack_8->SetBinContent(18,23.43791);
   hNCpi0inFVdis_stack_8->SetBinContent(19,22.24121);
   hNCpi0inFVdis_stack_8->SetBinContent(20,23.06077);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.43178);
   hNCpi0inFVdis_stack_8->SetBinContent(22,15.4329);
   hNCpi0inFVdis_stack_8->SetBinContent(23,14.12776);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.62495);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.9329897);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2943888);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2280886);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7617841);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.207767);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.339913);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.538862);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.717056);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.655114);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.658755);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.531424);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.523312);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.652211);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.664338);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.747537);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.6328);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.623377);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.524866);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.543344);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.536225);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.577947);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.554485);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.208679);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.274638);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8471759);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2445578);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1974492);
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
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
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
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
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
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1994106);
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
   hNCinFV_stack_11->SetBinContent(2,0.7336084);
   hNCinFV_stack_11->SetBinContent(3,6.353589);
   hNCinFV_stack_11->SetBinContent(4,12.44598);
   hNCinFV_stack_11->SetBinContent(5,15.88989);
   hNCinFV_stack_11->SetBinContent(6,18.85452);
   hNCinFV_stack_11->SetBinContent(7,24.18757);
   hNCinFV_stack_11->SetBinContent(8,19.73774);
   hNCinFV_stack_11->SetBinContent(9,21.58885);
   hNCinFV_stack_11->SetBinContent(10,22.63522);
   hNCinFV_stack_11->SetBinContent(11,23.84462);
   hNCinFV_stack_11->SetBinContent(12,24.70878);
   hNCinFV_stack_11->SetBinContent(13,21.63873);
   hNCinFV_stack_11->SetBinContent(14,22.91937);
   hNCinFV_stack_11->SetBinContent(15,23.01912);
   hNCinFV_stack_11->SetBinContent(16,21.02623);
   hNCinFV_stack_11->SetBinContent(17,26.08072);
   hNCinFV_stack_11->SetBinContent(18,24.31812);
   hNCinFV_stack_11->SetBinContent(19,23.30435);
   hNCinFV_stack_11->SetBinContent(20,20.78472);
   hNCinFV_stack_11->SetBinContent(21,23.54478);
   hNCinFV_stack_11->SetBinContent(22,19.04616);
   hNCinFV_stack_11->SetBinContent(23,13.02611);
   hNCinFV_stack_11->SetBinContent(24,6.740866);
   hNCinFV_stack_11->SetBinContent(25,1.465526);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.4394482);
   hNCinFV_stack_11->SetBinError(3,1.240845);
   hNCinFV_stack_11->SetBinError(4,1.809148);
   hNCinFV_stack_11->SetBinError(5,1.962539);
   hNCinFV_stack_11->SetBinError(6,2.185188);
   hNCinFV_stack_11->SetBinError(7,2.442864);
   hNCinFV_stack_11->SetBinError(8,2.202092);
   hNCinFV_stack_11->SetBinError(9,2.346803);
   hNCinFV_stack_11->SetBinError(10,2.338373);
   hNCinFV_stack_11->SetBinError(11,2.459505);
   hNCinFV_stack_11->SetBinError(12,2.551986);
   hNCinFV_stack_11->SetBinError(13,2.33834);
   hNCinFV_stack_11->SetBinError(14,2.412331);
   hNCinFV_stack_11->SetBinError(15,2.395838);
   hNCinFV_stack_11->SetBinError(16,2.237275);
   hNCinFV_stack_11->SetBinError(17,2.604136);
   hNCinFV_stack_11->SetBinError(18,2.497586);
   hNCinFV_stack_11->SetBinError(19,2.427637);
   hNCinFV_stack_11->SetBinError(20,2.237932);
   hNCinFV_stack_11->SetBinError(21,2.467478);
   hNCinFV_stack_11->SetBinError(22,2.193572);
   hNCinFV_stack_11->SetBinError(23,1.802025);
   hNCinFV_stack_11->SetBinError(24,1.346503);
   hNCinFV_stack_11->SetBinError(25,0.6209405);
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
   hmcerror__5->SetBinContent(0,4.341506);
   hmcerror__5->SetBinContent(1,2.183437);
   hmcerror__5->SetBinContent(2,31.36479);
   hmcerror__5->SetBinContent(3,84.14722);
   hmcerror__5->SetBinContent(4,165.6328);
   hmcerror__5->SetBinContent(5,231.7061);
   hmcerror__5->SetBinContent(6,253.1458);
   hmcerror__5->SetBinContent(7,288.1461);
   hmcerror__5->SetBinContent(8,284.7823);
   hmcerror__5->SetBinContent(9,280.2749);
   hmcerror__5->SetBinContent(10,298.0129);
   hmcerror__5->SetBinContent(11,299.8598);
   hmcerror__5->SetBinContent(12,287.1455);
   hmcerror__5->SetBinContent(13,304.1346);
   hmcerror__5->SetBinContent(14,299.0932);
   hmcerror__5->SetBinContent(15,285.2885);
   hmcerror__5->SetBinContent(16,300.9666);
   hmcerror__5->SetBinContent(17,297.3886);
   hmcerror__5->SetBinContent(18,286.1758);
   hmcerror__5->SetBinContent(19,294.2867);
   hmcerror__5->SetBinContent(20,293.1552);
   hmcerror__5->SetBinContent(21,288.0914);
   hmcerror__5->SetBinContent(22,250.6585);
   hmcerror__5->SetBinContent(23,195.9575);
   hmcerror__5->SetBinContent(24,124.6427);
   hmcerror__5->SetBinContent(25,51.96803);
   hmcerror__5->SetBinContent(26,3.195041);
   hmcerror__5->SetBinContent(27,3.009751);
   hmcerror__5->SetBinError(0,1.053254);
   hmcerror__5->SetBinError(1,9.927461);
   hmcerror__5->SetBinError(2,18.39299);
   hmcerror__5->SetBinError(3,26.84449);
   hmcerror__5->SetBinError(4,50.33452);
   hmcerror__5->SetBinError(5,60.93894);
   hmcerror__5->SetBinError(6,71.24413);
   hmcerror__5->SetBinError(7,84.61881);
   hmcerror__5->SetBinError(8,80.06541);
   hmcerror__5->SetBinError(9,77.72855);
   hmcerror__5->SetBinError(10,79.52598);
   hmcerror__5->SetBinError(11,83.12327);
   hmcerror__5->SetBinError(12,80.53408);
   hmcerror__5->SetBinError(13,80.51785);
   hmcerror__5->SetBinError(14,86.3031);
   hmcerror__5->SetBinError(15,76.06332);
   hmcerror__5->SetBinError(16,77.91519);
   hmcerror__5->SetBinError(17,75.27524);
   hmcerror__5->SetBinError(18,73.6993);
   hmcerror__5->SetBinError(19,73.08786);
   hmcerror__5->SetBinError(20,75.72337);
   hmcerror__5->SetBinError(21,65.96309);
   hmcerror__5->SetBinError(22,59.29124);
   hmcerror__5->SetBinError(23,45.2217);
   hmcerror__5->SetBinError(24,31.44289);
   hmcerror__5->SetBinError(25,17.89041);
   hmcerror__5->SetBinError(26,4.392906);
   hmcerror__5->SetBinError(27,4.77168);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.8/26","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 394.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2468.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  467.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.3","F");

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
   4.546713,
   0.5864217,
   0.3190181,
   0.3038923,
   0.263001,
   0.2814352,
   0.2936663,
   0.281146,
   0.2773297,
   0.2668541,
   0.2772071,
   0.2804644,
   0.2647441,
   0.2885492,
   0.2666189,
   0.2588831,
   0.2531208,
   0.2575315,
   0.248356,
   0.2583047,
   0.2289659,
   0.2365419,
   0.230773,
   0.2522642,
   0.3442579,
   1.374914};
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
   4.546713,
   0.5864217,
   0.3190181,
   0.3038923,
   0.263001,
   0.2814352,
   0.2936663,
   0.281146,
   0.2773297,
   0.2668541,
   0.2772071,
   0.2804644,
   0.2647441,
   0.2885492,
   0.2666189,
   0.2588831,
   0.2531208,
   0.2575315,
   0.248356,
   0.2583047,
   0.2289659,
   0.2365419,
   0.230773,
   0.2522642,
   0.3442579,
   1.374914};
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
   0.4831268,
   0.2429689,
   0.252187,
   0.2607612,
   0.2433936,
   0.2585004,
   0.2744986,
   0.2667922,
   0.2589174,
   0.2512484,
   0.2608822,
   0.2640132,
   0.2527608,
   0.2637299,
   0.2529525,
   0.2457946,
   0.2390001,
   0.2423786,
   0.2350639,
   0.2406326,
   0.2084612,
   0.2223933,
   0.2081152,
   0.2096377,
   0.2260564,
   0.429371};
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
   0.4831268,
   0.2429689,
   0.252187,
   0.2607612,
   0.2433936,
   0.2585004,
   0.2744986,
   0.2667922,
   0.2589174,
   0.2512484,
   0.2608822,
   0.2640132,
   0.2527608,
   0.2637299,
   0.2529525,
   0.2457946,
   0.2390001,
   0.2423786,
   0.2350639,
   0.2406326,
   0.2084612,
   0.2223933,
   0.2081152,
   0.2096377,
   0.2260564,
   0.429371};
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
   1.37398,
   0.6057748,
   0.7843396,
   1.050517,
   0.8545307,
   0.8848656,
   0.8606744,
   0.9305353,
   0.9026853,
   0.8657342,
   0.8537322,
   0.8149179,
   0.7726842,
   0.7923951,
   0.8272327,
   0.8705284,
   0.8675518,
   0.8840718,
   0.801939,
   0.839146,
   0.8295979,
   0.9774255,
   0.938979,
   0.8263624,
   0.6542484,
   0.3129851};
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
   0.9816486,
   0.1439544,
   0.09805315,
   0.07963946,
   0.06072886,
   0.05912257,
   0.05465288,
   0.05716233,
   0.05675134,
   0.05389826,
   0.05335826,
   0.05327285,
   0.05040436,
   0.05147159,
   0.05384827,
   0.05378142,
   0.05401142,
   0.05558112,
   0.05220178,
   0.053502,
   0.05366223,
   0.06244542,
   0.06922245,
   0.0814239,
   0.1148841,
   0.3129851};
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
   0.7896815,
   0.1371315,
   0.09564546,
   0.07963946,
   0.06072886,
   0.05912257,
   0.05465288,
   0.05716233,
   0.05675134,
   0.05389826,
   0.05335826,
   0.05327285,
   0.05040436,
   0.05147159,
   0.05384827,
   0.05378142,
   0.05401142,
   0.05558112,
   0.05220178,
   0.053502,
   0.05366223,
   0.06244542,
   0.06922245,
   0.0814239,
   0.1109047,
   0.4255689};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.380028);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
