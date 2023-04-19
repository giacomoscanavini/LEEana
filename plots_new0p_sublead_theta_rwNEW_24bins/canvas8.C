#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 17:15:01 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
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
   pad1->Range(-0.4846154,-1.94,3.553846,214.5232);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__22->SetBinContent(1,15.63536);
   hmc__22->SetBinContent(2,50.33659);
   hmc__22->SetBinContent(3,72.46783);
   hmc__22->SetBinContent(4,96.16513);
   hmc__22->SetBinContent(5,93.65639);
   hmc__22->SetBinContent(6,89.74758);
   hmc__22->SetBinContent(7,88.84644);
   hmc__22->SetBinContent(8,79.39704);
   hmc__22->SetBinContent(9,67.19774);
   hmc__22->SetBinContent(10,63.3482);
   hmc__22->SetBinContent(11,51.07314);
   hmc__22->SetBinContent(12,49.05373);
   hmc__22->SetBinContent(13,36.34711);
   hmc__22->SetBinContent(14,36.39191);
   hmc__22->SetBinContent(15,37.24685);
   hmc__22->SetBinContent(16,37.59842);
   hmc__22->SetBinContent(17,32.30964);
   hmc__22->SetBinContent(18,26.11893);
   hmc__22->SetBinContent(19,27.70675);
   hmc__22->SetBinContent(20,28.71131);
   hmc__22->SetBinContent(21,28.83095);
   hmc__22->SetBinContent(22,24.26021);
   hmc__22->SetBinContent(23,15.18275);
   hmc__22->SetBinContent(24,6.627857);
   hmc__22->SetBinError(1,9.234166);
   hmc__22->SetBinError(2,19.52126);
   hmc__22->SetBinError(3,21.37326);
   hmc__22->SetBinError(4,28.51656);
   hmc__22->SetBinError(5,24.84746);
   hmc__22->SetBinError(6,28.19384);
   hmc__22->SetBinError(7,27.34643);
   hmc__22->SetBinError(8,24.68509);
   hmc__22->SetBinError(9,22.17823);
   hmc__22->SetBinError(10,22.15915);
   hmc__22->SetBinError(11,20.06053);
   hmc__22->SetBinError(12,20.11441);
   hmc__22->SetBinError(13,14.74845);
   hmc__22->SetBinError(14,16.43598);
   hmc__22->SetBinError(15,16.12408);
   hmc__22->SetBinError(16,22.497);
   hmc__22->SetBinError(17,13.87709);
   hmc__22->SetBinError(18,11.92833);
   hmc__22->SetBinError(19,15.78677);
   hmc__22->SetBinError(20,14.94097);
   hmc__22->SetBinError(21,14.94675);
   hmc__22->SetBinError(22,15.79804);
   hmc__22->SetBinError(23,14.00329);
   hmc__22->SetBinError(24,9.159827);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.94);
   hmc__22->SetMaximum(203.7);
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
   hs8_stack_8->SetMinimum(-3.571482e-09);
   hs8_stack_8->SetMaximum(100.9734);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,1.855576);
   hbadmatch_stack_1->SetBinContent(3,4.092344);
   hbadmatch_stack_1->SetBinContent(4,1.999038);
   hbadmatch_stack_1->SetBinContent(5,4.844105);
   hbadmatch_stack_1->SetBinContent(6,1.999038);
   hbadmatch_stack_1->SetBinContent(7,2.637975);
   hbadmatch_stack_1->SetBinContent(8,3.01847);
   hbadmatch_stack_1->SetBinContent(9,1.607977);
   hbadmatch_stack_1->SetBinContent(10,1.024925);
   hbadmatch_stack_1->SetBinContent(11,1.820104);
   hbadmatch_stack_1->SetBinContent(12,1.268811);
   hbadmatch_stack_1->SetBinContent(13,1.889466);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,1.667568);
   hbadmatch_stack_1->SetBinContent(16,1.412273);
   hbadmatch_stack_1->SetBinContent(17,1.116811);
   hbadmatch_stack_1->SetBinContent(18,1.660417);
   hbadmatch_stack_1->SetBinContent(19,1.974842);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,1.144898);
   hbadmatch_stack_1->SetBinContent(23,1.217248);
   hbadmatch_stack_1->SetBinError(2,0.6794384);
   hbadmatch_stack_1->SetBinError(3,1.095476);
   hbadmatch_stack_1->SetBinError(4,0.7339349);
   hbadmatch_stack_1->SetBinError(5,1.426824);
   hbadmatch_stack_1->SetBinError(6,0.7339349);
   hbadmatch_stack_1->SetBinError(7,0.8221943);
   hbadmatch_stack_1->SetBinError(8,0.9662678);
   hbadmatch_stack_1->SetBinError(9,0.7090672);
   hbadmatch_stack_1->SetBinError(10,0.4601722);
   hbadmatch_stack_1->SetBinError(11,0.7160495);
   hbadmatch_stack_1->SetBinError(12,0.5889569);
   hbadmatch_stack_1->SetBinError(13,0.6940633);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.8308532);
   hbadmatch_stack_1->SetBinError(16,0.6510715);
   hbadmatch_stack_1->SetBinError(17,0.5753189);
   hbadmatch_stack_1->SetBinError(18,0.7072649);
   hbadmatch_stack_1->SetBinError(19,0.7674541);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.5914145);
   hbadmatch_stack_1->SetBinError(23,0.6211758);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.185808);
   hext_stack_2->SetBinContent(2,7.060586);
   hext_stack_2->SetBinContent(3,11.42061);
   hext_stack_2->SetBinContent(4,15.31061);
   hext_stack_2->SetBinContent(5,15.87002);
   hext_stack_2->SetBinContent(6,14.19456);
   hext_stack_2->SetBinContent(7,16.76542);
   hext_stack_2->SetBinContent(8,12.065);
   hext_stack_2->SetBinContent(9,12.31878);
   hext_stack_2->SetBinContent(10,13.18546);
   hext_stack_2->SetBinContent(11,6.973976);
   hext_stack_2->SetBinContent(12,8.428787);
   hext_stack_2->SetBinContent(13,8.581601);
   hext_stack_2->SetBinContent(14,8.738824);
   hext_stack_2->SetBinContent(15,7.850605);
   hext_stack_2->SetBinContent(16,10.84961);
   hext_stack_2->SetBinContent(17,4.95257);
   hext_stack_2->SetBinContent(18,3.405605);
   hext_stack_2->SetBinContent(19,5.034772);
   hext_stack_2->SetBinContent(20,3.241202);
   hext_stack_2->SetBinContent(21,6.710238);
   hext_stack_2->SetBinContent(22,2.110787);
   hext_stack_2->SetBinContent(23,1.932023);
   hext_stack_2->SetBinContent(24,1.219797);
   hext_stack_2->SetBinError(1,1.006415);
   hext_stack_2->SetBinError(2,1.691632);
   hext_stack_2->SetBinError(3,2.225632);
   hext_stack_2->SetBinError(4,2.559798);
   hext_stack_2->SetBinError(5,2.627574);
   hext_stack_2->SetBinError(6,2.347996);
   hext_stack_2->SetBinError(7,2.700904);
   hext_stack_2->SetBinError(8,2.242495);
   hext_stack_2->SetBinError(9,2.237823);
   hext_stack_2->SetBinError(10,2.490661);
   hext_stack_2->SetBinError(11,1.632914);
   hext_stack_2->SetBinError(12,1.846273);
   hext_stack_2->SetBinError(13,1.896043);
   hext_stack_2->SetBinError(14,1.978979);
   hext_stack_2->SetBinError(15,1.8233);
   hext_stack_2->SetBinError(16,2.160541);
   hext_stack_2->SetBinError(17,1.331809);
   hext_stack_2->SetBinError(18,1.228348);
   hext_stack_2->SetBinError(19,1.354181);
   hext_stack_2->SetBinError(20,1.178414);
   hext_stack_2->SetBinError(21,1.795792);
   hext_stack_2->SetBinError(22,0.8669371);
   hext_stack_2->SetBinError(23,1.016762);
   hext_stack_2->SetBinError(24,0.7042499);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(3,0.5570828);
   hdirt_stack_3->SetBinContent(4,1.802574);
   hdirt_stack_3->SetBinContent(5,0.414335);
   hdirt_stack_3->SetBinContent(6,2.15951);
   hdirt_stack_3->SetBinContent(7,2.967604);
   hdirt_stack_3->SetBinContent(8,1.687783);
   hdirt_stack_3->SetBinContent(9,0.8520056);
   hdirt_stack_3->SetBinContent(10,2.089256);
   hdirt_stack_3->SetBinContent(11,1.384904);
   hdirt_stack_3->SetBinContent(12,0.6773466);
   hdirt_stack_3->SetBinContent(13,0.8361835);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinContent(15,0.9068468);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.4950385);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.7430074);
   hdirt_stack_3->SetBinContent(21,0.8010461);
   hdirt_stack_3->SetBinContent(22,0.4289006);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(3,0.4028472);
   hdirt_stack_3->SetBinError(4,0.7460335);
   hdirt_stack_3->SetBinError(5,0.2391468);
   hdirt_stack_3->SetBinError(6,0.8095689);
   hdirt_stack_3->SetBinError(7,0.9348925);
   hdirt_stack_3->SetBinError(8,0.6906211);
   hdirt_stack_3->SetBinError(9,0.3911799);
   hdirt_stack_3->SetBinError(10,1.073182);
   hdirt_stack_3->SetBinError(11,0.6139598);
   hdirt_stack_3->SetBinError(12,0.3439585);
   hdirt_stack_3->SetBinError(13,0.4992755);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetBinError(15,0.5334985);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.2933304);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4500267);
   hdirt_stack_3->SetBinError(21,0.4056913);
   hdirt_stack_3->SetBinError(22,0.4289006);
   hdirt_stack_3->SetBinError(23,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.27123);
   houtFV_stack_4->SetBinContent(2,10.08803);
   houtFV_stack_4->SetBinContent(3,16.80383);
   houtFV_stack_4->SetBinContent(4,19.95588);
   houtFV_stack_4->SetBinContent(5,20.02479);
   houtFV_stack_4->SetBinContent(6,18.40216);
   houtFV_stack_4->SetBinContent(7,15.55104);
   houtFV_stack_4->SetBinContent(8,17.89009);
   houtFV_stack_4->SetBinContent(9,14.19944);
   houtFV_stack_4->SetBinContent(10,11.53311);
   houtFV_stack_4->SetBinContent(11,9.145648);
   houtFV_stack_4->SetBinContent(12,11.08302);
   houtFV_stack_4->SetBinContent(13,5.494951);
   houtFV_stack_4->SetBinContent(14,8.197576);
   houtFV_stack_4->SetBinContent(15,7.32425);
   houtFV_stack_4->SetBinContent(16,7.797141);
   houtFV_stack_4->SetBinContent(17,7.288761);
   houtFV_stack_4->SetBinContent(18,7.476104);
   houtFV_stack_4->SetBinContent(19,6.351899);
   houtFV_stack_4->SetBinContent(20,12.17481);
   houtFV_stack_4->SetBinContent(21,5.290589);
   houtFV_stack_4->SetBinContent(22,4.391741);
   houtFV_stack_4->SetBinContent(23,5.011738);
   houtFV_stack_4->SetBinContent(24,1.320373);
   houtFV_stack_4->SetBinError(1,0.9417298);
   houtFV_stack_4->SetBinError(2,1.634506);
   houtFV_stack_4->SetBinError(3,2.08635);
   houtFV_stack_4->SetBinError(4,2.410485);
   houtFV_stack_4->SetBinError(5,2.237438);
   houtFV_stack_4->SetBinError(6,2.138355);
   houtFV_stack_4->SetBinError(7,2.002834);
   houtFV_stack_4->SetBinError(8,2.115058);
   houtFV_stack_4->SetBinError(9,1.897305);
   houtFV_stack_4->SetBinError(10,1.777602);
   houtFV_stack_4->SetBinError(11,1.542607);
   houtFV_stack_4->SetBinError(12,2.056764);
   houtFV_stack_4->SetBinError(13,1.166649);
   houtFV_stack_4->SetBinError(14,1.468576);
   houtFV_stack_4->SetBinError(15,1.387988);
   houtFV_stack_4->SetBinError(16,1.406014);
   houtFV_stack_4->SetBinError(17,1.283999);
   houtFV_stack_4->SetBinError(18,1.367098);
   houtFV_stack_4->SetBinError(19,1.240579);
   houtFV_stack_4->SetBinError(20,1.807278);
   houtFV_stack_4->SetBinError(21,1.138684);
   houtFV_stack_4->SetBinError(22,1.040027);
   houtFV_stack_4->SetBinError(23,1.170681);
   houtFV_stack_4->SetBinError(24,0.5548703);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.93823);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.492158);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.713862);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.728976);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9770041);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9329897);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5016232);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4002008);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4007674);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4165616);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3542895);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2445578);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.17535);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1994106);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.398248);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.389044);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.30968);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.87616);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.68035);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.37403);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.47468);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.69024);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.65285);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.912004);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.254944);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.849974);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.23759);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.710795);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.714787);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.210172);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.195642);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.722838);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.75157);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.968697);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.606997);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.915898);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.087604);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.06004);
   hNCpi0inFVres_stack_7->SetBinError(1,0.520784);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8758262);
   hNCpi0inFVres_stack_7->SetBinError(3,1.106466);
   hNCpi0inFVres_stack_7->SetBinError(4,1.310767);
   hNCpi0inFVres_stack_7->SetBinError(5,1.189829);
   hNCpi0inFVres_stack_7->SetBinError(6,1.185049);
   hNCpi0inFVres_stack_7->SetBinError(7,1.278829);
   hNCpi0inFVres_stack_7->SetBinError(8,1.175293);
   hNCpi0inFVres_stack_7->SetBinError(9,1.024171);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9748128);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9182741);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9216231);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8913901);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6603381);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7068369);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6864909);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6335667);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6276522);
   hNCpi0inFVres_stack_7->SetBinError(19,0.643422);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4573135);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5010404);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6030374);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2767844);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3759641);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.004736);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.74833);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.388702);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.609237);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.528202);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.778638);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.489428);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.361634);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.937726);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.13353);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.095252);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.715526);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.295858);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.560912);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.603758);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.268958);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.255508);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5015358);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.100558);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.850954);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.181018);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.305844);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5711609);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.609191);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5355216);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6123771);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6288912);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7078915);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6241806);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3915981);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5070253);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5804548);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4462588);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3204477);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4270197);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4040722);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3923435);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2548204);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4237414);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1658436);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3118299);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3098478);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1086555);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.04832419);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.20157);
   hCCpi0inFV_stack_10->SetBinContent(2,9.397666);
   hCCpi0inFV_stack_10->SetBinContent(3,12.56618);
   hCCpi0inFV_stack_10->SetBinContent(4,18.0829);
   hCCpi0inFV_stack_10->SetBinContent(5,17.85795);
   hCCpi0inFV_stack_10->SetBinContent(6,19.35137);
   hCCpi0inFV_stack_10->SetBinContent(7,17.53539);
   hCCpi0inFV_stack_10->SetBinContent(8,16.51222);
   hCCpi0inFV_stack_10->SetBinContent(9,13.90881);
   hCCpi0inFV_stack_10->SetBinContent(10,13.41826);
   hCCpi0inFV_stack_10->SetBinContent(11,11.34139);
   hCCpi0inFV_stack_10->SetBinContent(12,8.84472);
   hCCpi0inFV_stack_10->SetBinContent(13,5.915358);
   hCCpi0inFV_stack_10->SetBinContent(14,5.800473);
   hCCpi0inFV_stack_10->SetBinContent(15,7.327247);
   hCCpi0inFV_stack_10->SetBinContent(16,6.88203);
   hCCpi0inFV_stack_10->SetBinContent(17,7.462641);
   hCCpi0inFV_stack_10->SetBinContent(18,4.713955);
   hCCpi0inFV_stack_10->SetBinContent(19,4.572524);
   hCCpi0inFV_stack_10->SetBinContent(20,4.012683);
   hCCpi0inFV_stack_10->SetBinContent(21,5.968611);
   hCCpi0inFV_stack_10->SetBinContent(22,5.485957);
   hCCpi0inFV_stack_10->SetBinContent(23,3.115202);
   hCCpi0inFV_stack_10->SetBinContent(24,1.608988);
   hCCpi0inFV_stack_10->SetBinError(1,0.9902816);
   hCCpi0inFV_stack_10->SetBinError(2,1.543755);
   hCCpi0inFV_stack_10->SetBinError(3,1.755673);
   hCCpi0inFV_stack_10->SetBinError(4,2.185245);
   hCCpi0inFV_stack_10->SetBinError(5,2.140822);
   hCCpi0inFV_stack_10->SetBinError(6,2.24942);
   hCCpi0inFV_stack_10->SetBinError(7,2.161045);
   hCCpi0inFV_stack_10->SetBinError(8,2.041455);
   hCCpi0inFV_stack_10->SetBinError(9,1.87608);
   hCCpi0inFV_stack_10->SetBinError(10,1.839779);
   hCCpi0inFV_stack_10->SetBinError(11,1.713122);
   hCCpi0inFV_stack_10->SetBinError(12,1.508116);
   hCCpi0inFV_stack_10->SetBinError(13,1.226353);
   hCCpi0inFV_stack_10->SetBinError(14,1.199759);
   hCCpi0inFV_stack_10->SetBinError(15,1.338017);
   hCCpi0inFV_stack_10->SetBinError(16,1.300309);
   hCCpi0inFV_stack_10->SetBinError(17,1.414761);
   hCCpi0inFV_stack_10->SetBinError(18,1.089083);
   hCCpi0inFV_stack_10->SetBinError(19,0.9541373);
   hCCpi0inFV_stack_10->SetBinError(20,0.9405604);
   hCCpi0inFV_stack_10->SetBinError(21,1.210626);
   hCCpi0inFV_stack_10->SetBinError(22,1.248051);
   hCCpi0inFV_stack_10->SetBinError(23,0.8166042);
   hCCpi0inFV_stack_10->SetBinError(24,0.6801404);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,2.194063);
   hNCinFV_stack_11->SetBinContent(3,2.734337);
   hNCinFV_stack_11->SetBinContent(4,4.786628);
   hNCinFV_stack_11->SetBinContent(5,2.447412);
   hNCinFV_stack_11->SetBinContent(6,3.071134);
   hNCinFV_stack_11->SetBinContent(7,3.763174);
   hNCinFV_stack_11->SetBinContent(8,2.88118);
   hNCinFV_stack_11->SetBinContent(9,3.121006);
   hNCinFV_stack_11->SetBinContent(10,1.65717);
   hNCinFV_stack_11->SetBinContent(11,3.613098);
   hNCinFV_stack_11->SetBinContent(12,1.713804);
   hNCinFV_stack_11->SetBinContent(13,1.320373);
   hNCinFV_stack_11->SetBinContent(14,1.463836);
   hNCinFV_stack_11->SetBinContent(15,1.65717);
   hNCinFV_stack_11->SetBinContent(16,1.907138);
   hNCinFV_stack_11->SetBinContent(17,2.39585);
   hNCinFV_stack_11->SetBinContent(18,1.320373);
   hNCinFV_stack_11->SetBinContent(19,1.268811);
   hNCinFV_stack_11->SetBinContent(20,2.050601);
   hNCinFV_stack_11->SetBinContent(21,2.197444);
   hNCinFV_stack_11->SetBinContent(22,1.855576);
   hNCinFV_stack_11->SetBinContent(23,0.7336084);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.7594044);
   hNCinFV_stack_11->SetBinError(3,0.8558255);
   hNCinFV_stack_11->SetBinError(4,1.110302);
   hNCinFV_stack_11->SetBinError(5,0.7605193);
   hNCinFV_stack_11->SetBinError(6,0.9202356);
   hNCinFV_stack_11->SetBinError(7,0.9630494);
   hNCinFV_stack_11->SetBinError(8,0.9004364);
   hNCinFV_stack_11->SetBinError(9,0.8984332);
   hNCinFV_stack_11->SetBinError(10,0.6498287);
   hNCinFV_stack_11->SetBinError(11,1.001618);
   hNCinFV_stack_11->SetBinError(12,0.6207051);
   hNCinFV_stack_11->SetBinError(13,0.5548703);
   hNCinFV_stack_11->SetBinError(14,0.620407);
   hNCinFV_stack_11->SetBinError(15,0.6498287);
   hNCinFV_stack_11->SetBinError(16,0.6501133);
   hNCinFV_stack_11->SetBinError(17,0.7857345);
   hNCinFV_stack_11->SetBinError(18,0.5548703);
   hNCinFV_stack_11->SetBinError(19,0.5889569);
   hNCinFV_stack_11->SetBinError(20,0.7068742);
   hNCinFV_stack_11->SetBinError(21,0.760276);
   hNCinFV_stack_11->SetBinError(22,0.6794384);
   hNCinFV_stack_11->SetBinError(23,0.4394482);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.421492);
   hnumuCCinFV_stack_12->SetBinContent(2,6.124642);
   hnumuCCinFV_stack_12->SetBinContent(3,7.04174);
   hnumuCCinFV_stack_12->SetBinContent(4,12.91664);
   hnumuCCinFV_stack_12->SetBinContent(5,11.19976);
   hnumuCCinFV_stack_12->SetBinContent(6,10.697);
   hnumuCCinFV_stack_12->SetBinContent(7,8.64765);
   hnumuCCinFV_stack_12->SetBinContent(8,8.025599);
   hnumuCCinFV_stack_12->SetBinContent(9,7.888518);
   hnumuCCinFV_stack_12->SetBinContent(10,7.766725);
   hnumuCCinFV_stack_12->SetBinContent(11,4.969191);
   hnumuCCinFV_stack_12->SetBinContent(12,5.71877);
   hnumuCCinFV_stack_12->SetBinContent(13,3.59471);
   hnumuCCinFV_stack_12->SetBinContent(14,4.335217);
   hnumuCCinFV_stack_12->SetBinContent(15,4.013599);
   hnumuCCinFV_stack_12->SetBinContent(16,1.717223);
   hnumuCCinFV_stack_12->SetBinContent(17,3.370353);
   hnumuCCinFV_stack_12->SetBinContent(18,2.164217);
   hnumuCCinFV_stack_12->SetBinContent(19,3.07511);
   hnumuCCinFV_stack_12->SetBinContent(20,2.218879);
   hnumuCCinFV_stack_12->SetBinContent(21,2.885349);
   hnumuCCinFV_stack_12->SetBinContent(22,5.870558);
   hnumuCCinFV_stack_12->SetBinContent(23,1.189637);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8590752);
   hnumuCCinFV_stack_12->SetBinError(1,0.6207945);
   hnumuCCinFV_stack_12->SetBinError(2,1.276972);
   hnumuCCinFV_stack_12->SetBinError(3,1.370466);
   hnumuCCinFV_stack_12->SetBinError(4,1.965325);
   hnumuCCinFV_stack_12->SetBinError(5,2.168821);
   hnumuCCinFV_stack_12->SetBinError(6,2.628127);
   hnumuCCinFV_stack_12->SetBinError(7,1.55558);
   hnumuCCinFV_stack_12->SetBinError(8,1.44156);
   hnumuCCinFV_stack_12->SetBinError(9,1.491425);
   hnumuCCinFV_stack_12->SetBinError(10,1.438878);
   hnumuCCinFV_stack_12->SetBinError(11,1.138131);
   hnumuCCinFV_stack_12->SetBinError(12,1.311568);
   hnumuCCinFV_stack_12->SetBinError(13,1.053003);
   hnumuCCinFV_stack_12->SetBinError(14,1.139204);
   hnumuCCinFV_stack_12->SetBinError(15,1.116762);
   hnumuCCinFV_stack_12->SetBinError(16,0.6112767);
   hnumuCCinFV_stack_12->SetBinError(17,0.9238938);
   hnumuCCinFV_stack_12->SetBinError(18,0.6821177);
   hnumuCCinFV_stack_12->SetBinError(19,0.9136665);
   hnumuCCinFV_stack_12->SetBinError(20,0.7706155);
   hnumuCCinFV_stack_12->SetBinError(21,0.8690261);
   hnumuCCinFV_stack_12->SetBinError(22,2.412834);
   hnumuCCinFV_stack_12->SetBinError(23,0.6281322);
   hnumuCCinFV_stack_12->SetBinError(24,0.4312499);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.536893);
   hnueCCinFV_stack_13->SetBinContent(2,1.046837);
   hnueCCinFV_stack_13->SetBinContent(3,0.838637);
   hnueCCinFV_stack_13->SetBinContent(5,1.976782);
   hnueCCinFV_stack_13->SetBinContent(6,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(7,0.8577237);
   hnueCCinFV_stack_13->SetBinContent(8,0.4975739);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.3929602);
   hnueCCinFV_stack_13->SetBinError(2,0.5697868);
   hnueCCinFV_stack_13->SetBinError(3,0.5488178);
   hnueCCinFV_stack_13->SetBinError(5,1.228638);
   hnueCCinFV_stack_13->SetBinError(6,0.7431478);
   hnueCCinFV_stack_13->SetBinError(7,0.4307902);
   hnueCCinFV_stack_13->SetBinError(8,0.3599592);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__23->SetBinContent(1,15.63536);
   hmcerror__23->SetBinContent(2,50.33659);
   hmcerror__23->SetBinContent(3,72.46783);
   hmcerror__23->SetBinContent(4,96.16513);
   hmcerror__23->SetBinContent(5,93.65639);
   hmcerror__23->SetBinContent(6,89.74758);
   hmcerror__23->SetBinContent(7,88.84644);
   hmcerror__23->SetBinContent(8,79.39704);
   hmcerror__23->SetBinContent(9,67.19774);
   hmcerror__23->SetBinContent(10,63.3482);
   hmcerror__23->SetBinContent(11,51.07314);
   hmcerror__23->SetBinContent(12,49.05373);
   hmcerror__23->SetBinContent(13,36.34711);
   hmcerror__23->SetBinContent(14,36.39191);
   hmcerror__23->SetBinContent(15,37.24685);
   hmcerror__23->SetBinContent(16,37.59842);
   hmcerror__23->SetBinContent(17,32.30964);
   hmcerror__23->SetBinContent(18,26.11893);
   hmcerror__23->SetBinContent(19,27.70675);
   hmcerror__23->SetBinContent(20,28.71131);
   hmcerror__23->SetBinContent(21,28.83095);
   hmcerror__23->SetBinContent(22,24.26021);
   hmcerror__23->SetBinContent(23,15.18275);
   hmcerror__23->SetBinContent(24,6.627857);
   hmcerror__23->SetBinError(1,9.234166);
   hmcerror__23->SetBinError(2,19.52126);
   hmcerror__23->SetBinError(3,21.37326);
   hmcerror__23->SetBinError(4,28.51656);
   hmcerror__23->SetBinError(5,24.84746);
   hmcerror__23->SetBinError(6,28.19384);
   hmcerror__23->SetBinError(7,27.34643);
   hmcerror__23->SetBinError(8,24.68509);
   hmcerror__23->SetBinError(9,22.17823);
   hmcerror__23->SetBinError(10,22.15915);
   hmcerror__23->SetBinError(11,20.06053);
   hmcerror__23->SetBinError(12,20.11441);
   hmcerror__23->SetBinError(13,14.74845);
   hmcerror__23->SetBinError(14,16.43598);
   hmcerror__23->SetBinError(15,16.12408);
   hmcerror__23->SetBinError(16,22.497);
   hmcerror__23->SetBinError(17,13.87709);
   hmcerror__23->SetBinError(18,11.92833);
   hmcerror__23->SetBinError(19,15.78677);
   hmcerror__23->SetBinError(20,14.94097);
   hmcerror__23->SetBinError(21,14.94675);
   hmcerror__23->SetBinError(22,15.79804);
   hmcerror__23->SetBinError(23,14.00329);
   hmcerror__23->SetBinError(24,9.159827);
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
   22,
   59,
   73,
   97,
   87,
   72,
   70,
   85,
   62,
   55,
   39,
   39,
   43,
   33,
   40,
   34,
   21,
   29,
   26,
   22,
   20,
   24,
   17,
   4};
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
   4.8417,
   7.8097,
   8.6693,
   9.9704,
   9.4503,
   8.6108,
   8.4925,
   9.3428,
   8.0018,
   7.546,
   6.3813,
   6.3813,
   6.6917,
   5.8847,
   6.4604,
   5.9703,
   4.7354,
   5.5285,
   5.2453,
   4.8417,
   4.6266,
   5.0476,
   4.2835,
   2.29683};
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
   4.6299,
   7.6066,
   8.4672,
   9.769,
   9.2488,
   8.4085,
   8.2902,
   9.1411,
   7.7989,
   7.3425,
   6.1757,
   6.1757,
   6.4868,
   5.6776,
   6.2549,
   5.7635,
   4.5229,
   5.3201,
   5.0358,
   4.6299,
   4.4133,
   4.837,
   4.0673,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(1.532853);
   Graph_Graph3029->SetMaximum(117.2756);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.0/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all");
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
   0.5905951,
   0.3878144,
   0.2949344,
   0.2965375,
   0.2653045,
   0.314146,
   0.3077943,
   0.3109069,
   0.3300444,
   0.3497992,
   0.3927804,
   0.4100487,
   0.4057668,
   0.4516384,
   0.4328979,
   0.5983497,
   0.4295032,
   0.4566929,
   0.5697807,
   0.5203861,
   0.5184274,
   0.6511916,
   0.9223157,
   1.382019};
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
   0.5905951,
   0.3878144,
   0.2949344,
   0.2965375,
   0.2653045,
   0.314146,
   0.3077943,
   0.3109069,
   0.3300444,
   0.3497992,
   0.3927804,
   0.4100487,
   0.4057668,
   0.4516384,
   0.4328979,
   0.5983497,
   0.4295032,
   0.4566929,
   0.5697807,
   0.5203861,
   0.5184274,
   0.6511916,
   0.9223157,
   1.382019};
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
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   0.2134828,
   0.1918963,
   0.1801766,
   0.1762246,
   0.1816976,
   0.1816908,
   0.1825856,
   0.1845713,
   0.1885371,
   0.1730629,
   0.1943984,
   0.1957377,
   0.1952721,
   0.1887579,
   0.1833792,
   0.183029,
   0.2118066,
   0.2233386,
   0.1908191,
   0.2150617,
   0.1911697,
   0.2742836,
   0.2266119,
   0.2986277};
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
   0.2134828,
   0.1918963,
   0.1801766,
   0.1762246,
   0.1816976,
   0.1816908,
   0.1825856,
   0.1845713,
   0.1885371,
   0.1730629,
   0.1943984,
   0.1957377,
   0.1952721,
   0.1887579,
   0.1833792,
   0.183029,
   0.2118066,
   0.2233386,
   0.1908191,
   0.2150617,
   0.1911697,
   0.2742836,
   0.2266119,
   0.2986277};
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
   1.407067,
   1.17211,
   1.007343,
   1.008682,
   0.9289276,
   0.80225,
   0.7878762,
   1.070569,
   0.9226501,
   0.8682172,
   0.7636107,
   0.7950466,
   1.183038,
   0.906795,
   1.073916,
   0.9042934,
   0.6499608,
   1.110306,
   0.9383995,
   0.7662486,
   0.693699,
   0.9892744,
   1.119692,
   0.6035133};
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
   0.3096635,
   0.1551496,
   0.1196296,
   0.10368,
   0.100904,
   0.09594465,
   0.09558627,
   0.1176719,
   0.1190784,
   0.1191194,
   0.1249443,
   0.130088,
   0.1841054,
   0.1617035,
   0.1734482,
   0.1587913,
   0.1465631,
   0.2116664,
   0.1893149,
   0.1686339,
   0.1604734,
   0.2080609,
   0.2821294,
   0.3465419};
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
   0.2961173,
   0.1511147,
   0.1168408,
   0.1015857,
   0.09875247,
   0.09369055,
   0.09330931,
   0.1151315,
   0.116059,
   0.115907,
   0.1209187,
   0.1258967,
   0.1784681,
   0.1560127,
   0.167931,
   0.153291,
   0.1399861,
   0.2036875,
   0.1817536,
   0.161257,
   0.1530751,
   0.19938,
   0.2678895,
   0.2990197};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0.1123501);
   Graph_Graph3032->SetMaximum(1.847806);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
