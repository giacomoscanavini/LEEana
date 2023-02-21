#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 23:31:32 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-4.119231,-1.58112,3.957692,174.8385);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__7->SetBinContent(1,79.05598);
   hmc__7->SetBinContent(2,63.58438);
   hmc__7->SetBinContent(3,60.66678);
   hmc__7->SetBinContent(4,68.38208);
   hmc__7->SetBinContent(5,52.30768);
   hmc__7->SetBinContent(6,56.60416);
   hmc__7->SetBinContent(7,75.11983);
   hmc__7->SetBinContent(8,53.57215);
   hmc__7->SetBinContent(9,53.98279);
   hmc__7->SetBinContent(10,59.8665);
   hmc__7->SetBinContent(11,59.96253);
   hmc__7->SetBinContent(12,67.52816);
   hmc__7->SetBinContent(13,60.21188);
   hmc__7->SetBinContent(14,69.23125);
   hmc__7->SetBinContent(15,65.47244);
   hmc__7->SetBinContent(16,70.3243);
   hmc__7->SetBinContent(17,60.27539);
   hmc__7->SetBinContent(18,67.63588);
   hmc__7->SetBinContent(19,66.84753);
   hmc__7->SetBinContent(20,65.03693);
   hmc__7->SetBinContent(21,61.29957);
   hmc__7->SetBinContent(22,70.08289);
   hmc__7->SetBinContent(23,53.27461);
   hmc__7->SetBinContent(24,65.56946);
   hmc__7->SetBinContent(25,68.25832);
   hmc__7->SetBinError(1,22.15709);
   hmc__7->SetBinError(2,21.62482);
   hmc__7->SetBinError(3,20.74501);
   hmc__7->SetBinError(4,31.35015);
   hmc__7->SetBinError(5,18.28118);
   hmc__7->SetBinError(6,22.14214);
   hmc__7->SetBinError(7,19.77851);
   hmc__7->SetBinError(8,21.26434);
   hmc__7->SetBinError(9,18.86904);
   hmc__7->SetBinError(10,23.77963);
   hmc__7->SetBinError(11,25.43262);
   hmc__7->SetBinError(12,29.64553);
   hmc__7->SetBinError(13,23.2739);
   hmc__7->SetBinError(14,28.05672);
   hmc__7->SetBinError(15,23.75518);
   hmc__7->SetBinError(16,30.74469);
   hmc__7->SetBinError(17,16.17601);
   hmc__7->SetBinError(18,20.24039);
   hmc__7->SetBinError(19,24.09981);
   hmc__7->SetBinError(20,18.19648);
   hmc__7->SetBinError(21,18.63393);
   hmc__7->SetBinError(22,25.12905);
   hmc__7->SetBinError(23,18.4412);
   hmc__7->SetBinError(24,20.94175);
   hmc__7->SetBinError(25,23.38248);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-1.58112);
   hmc__7->SetMaximum(166.0176);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-3.15,3.15);
   hs3_stack_3->SetMinimum(-1.337066e-08);
   hs3_stack_3->SetMaximum(83.00878);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.756727);
   hbadmatch_stack_1->SetBinContent(2,1.864729);
   hbadmatch_stack_1->SetBinContent(3,2.394566);
   hbadmatch_stack_1->SetBinContent(4,3.410553);
   hbadmatch_stack_1->SetBinContent(5,1.9416);
   hbadmatch_stack_1->SetBinContent(6,1.062234);
   hbadmatch_stack_1->SetBinContent(7,3.09408);
   hbadmatch_stack_1->SetBinContent(8,1.902292);
   hbadmatch_stack_1->SetBinContent(9,1.751177);
   hbadmatch_stack_1->SetBinContent(10,0.6121981);
   hbadmatch_stack_1->SetBinContent(11,2.085591);
   hbadmatch_stack_1->SetBinContent(12,1.885514);
   hbadmatch_stack_1->SetBinContent(13,1.512892);
   hbadmatch_stack_1->SetBinContent(14,1.155228);
   hbadmatch_stack_1->SetBinContent(15,2.061028);
   hbadmatch_stack_1->SetBinContent(16,4.505921);
   hbadmatch_stack_1->SetBinContent(17,1.586442);
   hbadmatch_stack_1->SetBinContent(18,3.824711);
   hbadmatch_stack_1->SetBinContent(19,1.703347);
   hbadmatch_stack_1->SetBinContent(20,1.159938);
   hbadmatch_stack_1->SetBinContent(21,4.169147);
   hbadmatch_stack_1->SetBinContent(22,2.533449);
   hbadmatch_stack_1->SetBinContent(23,1.437753);
   hbadmatch_stack_1->SetBinContent(24,2.770602);
   hbadmatch_stack_1->SetBinContent(25,0.8474461);
   hbadmatch_stack_1->SetBinError(1,0.9455248);
   hbadmatch_stack_1->SetBinError(2,0.6710294);
   hbadmatch_stack_1->SetBinError(3,0.82588);
   hbadmatch_stack_1->SetBinError(4,0.9574701);
   hbadmatch_stack_1->SetBinError(5,0.7082165);
   hbadmatch_stack_1->SetBinError(6,0.4961072);
   hbadmatch_stack_1->SetBinError(7,1.03106);
   hbadmatch_stack_1->SetBinError(8,0.6678163);
   hbadmatch_stack_1->SetBinError(9,0.6969636);
   hbadmatch_stack_1->SetBinError(10,0.3648639);
   hbadmatch_stack_1->SetBinError(11,0.7248809);
   hbadmatch_stack_1->SetBinError(12,0.6959375);
   hbadmatch_stack_1->SetBinError(13,0.6366367);
   hbadmatch_stack_1->SetBinError(14,0.6522917);
   hbadmatch_stack_1->SetBinError(15,0.8093799);
   hbadmatch_stack_1->SetBinError(16,1.395657);
   hbadmatch_stack_1->SetBinError(17,0.6133824);
   hbadmatch_stack_1->SetBinError(18,1.059434);
   hbadmatch_stack_1->SetBinError(19,0.6725261);
   hbadmatch_stack_1->SetBinError(20,0.563825);
   hbadmatch_stack_1->SetBinError(21,1.164809);
   hbadmatch_stack_1->SetBinError(22,0.9172333);
   hbadmatch_stack_1->SetBinError(23,0.6733993);
   hbadmatch_stack_1->SetBinError(24,0.9636913);
   hbadmatch_stack_1->SetBinError(25,0.5131738);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,12.8307);
   hext_stack_2->SetBinContent(2,4.698785);
   hext_stack_2->SetBinContent(3,6.090166);
   hext_stack_2->SetBinContent(4,13.7261);
   hext_stack_2->SetBinContent(5,9.652993);
   hext_stack_2->SetBinContent(6,13.53575);
   hext_stack_2->SetBinContent(7,24.2226);
   hext_stack_2->SetBinContent(8,10.2902);
   hext_stack_2->SetBinContent(9,6.172367);
   hext_stack_2->SetBinContent(10,9.749497);
   hext_stack_2->SetBinContent(11,7.791582);
   hext_stack_2->SetBinContent(12,5.191995);
   hext_stack_2->SetBinContent(13,3.57278);
   hext_stack_2->SetBinContent(14,8.216892);
   hext_stack_2->SetBinContent(15,8.440376);
   hext_stack_2->SetBinContent(16,10.1302);
   hext_stack_2->SetBinContent(17,16.60537);
   hext_stack_2->SetBinContent(18,16.04879);
   hext_stack_2->SetBinContent(19,24.21819);
   hext_stack_2->SetBinContent(20,22.05115);
   hext_stack_2->SetBinContent(21,13.71017);
   hext_stack_2->SetBinContent(22,15.54122);
   hext_stack_2->SetBinContent(23,7.444006);
   hext_stack_2->SetBinContent(24,8.776305);
   hext_stack_2->SetBinContent(25,8.877276);
   hext_stack_2->SetBinError(1,2.536043);
   hext_stack_2->SetBinError(2,1.339646);
   hext_stack_2->SetBinError(3,1.486471);
   hext_stack_2->SetBinError(4,2.611944);
   hext_stack_2->SetBinError(5,2.009929);
   hext_stack_2->SetBinError(6,2.677789);
   hext_stack_2->SetBinError(7,3.491384);
   hext_stack_2->SetBinError(8,2.077585);
   hext_stack_2->SetBinError(9,1.506547);
   hext_stack_2->SetBinError(10,2.2423);
   hext_stack_2->SetBinError(11,1.769795);
   hext_stack_2->SetBinError(12,1.468055);
   hext_stack_2->SetBinError(13,1.136966);
   hext_stack_2->SetBinError(14,2.088212);
   hext_stack_2->SetBinError(15,1.82829);
   hext_stack_2->SetBinError(16,2.081178);
   hext_stack_2->SetBinError(17,2.939428);
   hext_stack_2->SetBinError(18,2.57331);
   hext_stack_2->SetBinError(19,3.471979);
   hext_stack_2->SetBinError(20,3.282451);
   hext_stack_2->SetBinError(21,2.328689);
   hext_stack_2->SetBinError(22,2.581432);
   hext_stack_2->SetBinError(23,1.777386);
   hext_stack_2->SetBinError(24,2.170763);
   hext_stack_2->SetBinError(25,2.122503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.776099);
   hdirt_stack_3->SetBinContent(2,1.512026);
   hdirt_stack_3->SetBinContent(3,0.4829878);
   hdirt_stack_3->SetBinContent(4,0.3923103);
   hdirt_stack_3->SetBinContent(5,1.014562);
   hdirt_stack_3->SetBinContent(6,0.6632347);
   hdirt_stack_3->SetBinContent(7,0.8650611);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinContent(10,0.8384238);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.4720574);
   hdirt_stack_3->SetBinContent(13,0.61753);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.9713526);
   hdirt_stack_3->SetBinContent(16,1.520569);
   hdirt_stack_3->SetBinContent(17,0.3782986);
   hdirt_stack_3->SetBinContent(18,1.381418);
   hdirt_stack_3->SetBinContent(19,2.096575);
   hdirt_stack_3->SetBinContent(20,0.5309591);
   hdirt_stack_3->SetBinContent(21,0.9654288);
   hdirt_stack_3->SetBinContent(22,1.013654);
   hdirt_stack_3->SetBinContent(23,1.270754);
   hdirt_stack_3->SetBinContent(24,2.412559);
   hdirt_stack_3->SetBinContent(25,2.381548);
   hdirt_stack_3->SetBinError(1,0.458477);
   hdirt_stack_3->SetBinError(2,0.5723725);
   hdirt_stack_3->SetBinError(3,0.3653486);
   hdirt_stack_3->SetBinError(4,0.3923103);
   hdirt_stack_3->SetBinError(5,0.5857574);
   hdirt_stack_3->SetBinError(6,0.3961844);
   hdirt_stack_3->SetBinError(7,0.4630143);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.1952625);
   hdirt_stack_3->SetBinError(10,0.5049764);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.2832398);
   hdirt_stack_3->SetBinError(13,0.3672493);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.5778454);
   hdirt_stack_3->SetBinError(16,0.6358229);
   hdirt_stack_3->SetBinError(17,0.3782986);
   hdirt_stack_3->SetBinError(18,0.6714345);
   hdirt_stack_3->SetBinError(19,1.104886);
   hdirt_stack_3->SetBinError(20,0.3210276);
   hdirt_stack_3->SetBinError(21,0.5163876);
   hdirt_stack_3->SetBinError(22,0.4590478);
   hdirt_stack_3->SetBinError(23,0.5943722);
   hdirt_stack_3->SetBinError(24,0.8437742);
   hdirt_stack_3->SetBinError(25,0.8519841);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,14.20959);
   houtFV_stack_4->SetBinContent(2,9.461456);
   houtFV_stack_4->SetBinContent(3,15.04311);
   houtFV_stack_4->SetBinContent(4,14.3061);
   houtFV_stack_4->SetBinContent(5,11.35153);
   houtFV_stack_4->SetBinContent(6,11.58008);
   houtFV_stack_4->SetBinContent(7,13.96599);
   houtFV_stack_4->SetBinContent(8,10.93388);
   houtFV_stack_4->SetBinContent(9,11.45011);
   houtFV_stack_4->SetBinContent(10,12.40339);
   houtFV_stack_4->SetBinContent(11,9.762795);
   houtFV_stack_4->SetBinContent(12,15.1933);
   houtFV_stack_4->SetBinContent(13,12.63696);
   houtFV_stack_4->SetBinContent(14,14.13987);
   houtFV_stack_4->SetBinContent(15,10.82787);
   houtFV_stack_4->SetBinContent(16,15.61863);
   houtFV_stack_4->SetBinContent(17,10.03364);
   houtFV_stack_4->SetBinContent(18,13.70188);
   houtFV_stack_4->SetBinContent(19,10.84436);
   houtFV_stack_4->SetBinContent(20,9.581738);
   houtFV_stack_4->SetBinContent(21,9.878304);
   houtFV_stack_4->SetBinContent(22,15.2036);
   houtFV_stack_4->SetBinContent(23,8.962212);
   houtFV_stack_4->SetBinContent(24,14.15362);
   houtFV_stack_4->SetBinContent(25,13.44339);
   houtFV_stack_4->SetBinError(1,1.816145);
   houtFV_stack_4->SetBinError(2,1.472156);
   houtFV_stack_4->SetBinError(3,1.957916);
   houtFV_stack_4->SetBinError(4,1.941723);
   houtFV_stack_4->SetBinError(5,1.683988);
   houtFV_stack_4->SetBinError(6,1.74392);
   houtFV_stack_4->SetBinError(7,1.858936);
   houtFV_stack_4->SetBinError(8,1.784007);
   houtFV_stack_4->SetBinError(9,1.704887);
   houtFV_stack_4->SetBinError(10,1.78246);
   houtFV_stack_4->SetBinError(11,1.597373);
   houtFV_stack_4->SetBinError(12,1.941635);
   houtFV_stack_4->SetBinError(13,1.811782);
   houtFV_stack_4->SetBinError(14,1.947222);
   houtFV_stack_4->SetBinError(15,1.60391);
   houtFV_stack_4->SetBinError(16,2.048117);
   houtFV_stack_4->SetBinError(17,1.668303);
   houtFV_stack_4->SetBinError(18,2.241833);
   houtFV_stack_4->SetBinError(19,1.690524);
   houtFV_stack_4->SetBinError(20,1.575738);
   houtFV_stack_4->SetBinError(21,1.512456);
   houtFV_stack_4->SetBinError(22,2.081782);
   houtFV_stack_4->SetBinError(23,1.48436);
   houtFV_stack_4->SetBinError(24,1.861212);
   houtFV_stack_4->SetBinError(25,1.939962);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3958945);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2152515);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.03718);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6235802);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3736524);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.615353);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.003866);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7075897);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6272141);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7955062);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7951539);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.022011);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5470552);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6974301);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3893914);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6638429);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.4216481);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.221977);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9549783);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6850245);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2854171);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7580722);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.683863);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9652764);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.312559);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1628866);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08297362);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3559049);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.243594);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2608419);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2662051);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3802744);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.366138);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2360842);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3188555);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3482715);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4583869);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3190286);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2846121);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1663752);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2862311);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2107612);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.09189308);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3637358);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3299879);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.09801238);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3422889);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2612544);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3855139);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1261379);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.04098689);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.03613899);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.09623813);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.04419126);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3097368);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.04620773);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02913099);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2272408);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07416524);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.07806695);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05120998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02952655);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1014503);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.07363392);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05618739);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.09863038);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02506803);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02557584);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05043584);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02718695);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1725413);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03337039);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02130741);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1432857);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03708669);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06255336);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0418907);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02165026);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07741595);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05207117);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04343089);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04081068);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.135334);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.21092);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.46777);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.43169);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.429235);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.522635);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.891061);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.716036);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.581351);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.643929);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.93816);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.27451);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.477375);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.03444);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.710011);
   hNCpi0inFVres_stack_7->SetBinContent(16,10.11013);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.486306);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.438582);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.606118);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.042559);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.946898);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.988688);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.555101);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.296725);
   hNCpi0inFVres_stack_7->SetBinContent(25,10.28974);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8958427);
   hNCpi0inFVres_stack_7->SetBinError(2,1.123137);
   hNCpi0inFVres_stack_7->SetBinError(3,1.138533);
   hNCpi0inFVres_stack_7->SetBinError(4,1.059816);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7689281);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8709382);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8321107);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8935021);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9012683);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8987657);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9511881);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9194999);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8938784);
   hNCpi0inFVres_stack_7->SetBinError(14,1.004486);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9369719);
   hNCpi0inFVres_stack_7->SetBinError(16,1.006387);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9926796);
   hNCpi0inFVres_stack_7->SetBinError(18,1.004655);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7750793);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9887144);
   hNCpi0inFVres_stack_7->SetBinError(21,1.032318);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9083109);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7560667);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9452089);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9588741);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.304522);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.968232);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.536558);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.439094);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.209852);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.487801);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.089567);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.960678);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.206733);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.792997);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.781279);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.312511);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.606721);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.098585);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.186502);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.406618);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.696553);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.2789);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.981881);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.163688);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.131286);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.575059);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.102756);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.400067);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.230238);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7640387);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9962916);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6234479);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5228033);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6652633);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3255395);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5791812);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3801135);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5811173);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5773716);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8337281);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4667736);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8364475);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4501718);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5209368);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4915768);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6360559);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3421011);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4625638);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4791103);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8773891);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9785979);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5722896);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4646799);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7205088);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01881452);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,21.3875);
   hCCpi0inFV_stack_10->SetBinContent(2,15.89725);
   hCCpi0inFV_stack_10->SetBinContent(3,12.40834);
   hCCpi0inFV_stack_10->SetBinContent(4,13.01406);
   hCCpi0inFV_stack_10->SetBinContent(5,10.33309);
   hCCpi0inFV_stack_10->SetBinContent(6,9.209407);
   hCCpi0inFV_stack_10->SetBinContent(7,12.0647);
   hCCpi0inFV_stack_10->SetBinContent(8,10.76395);
   hCCpi0inFV_stack_10->SetBinContent(9,12.84683);
   hCCpi0inFV_stack_10->SetBinContent(10,12.77275);
   hCCpi0inFV_stack_10->SetBinContent(11,11.6717);
   hCCpi0inFV_stack_10->SetBinContent(12,13.58427);
   hCCpi0inFV_stack_10->SetBinContent(13,13.93829);
   hCCpi0inFV_stack_10->SetBinContent(14,16.24702);
   hCCpi0inFV_stack_10->SetBinContent(15,13.05021);
   hCCpi0inFV_stack_10->SetBinContent(16,12.1349);
   hCCpi0inFV_stack_10->SetBinContent(17,13.56856);
   hCCpi0inFV_stack_10->SetBinContent(18,11.75021);
   hCCpi0inFV_stack_10->SetBinContent(19,8.341402);
   hCCpi0inFV_stack_10->SetBinContent(20,11.52448);
   hCCpi0inFV_stack_10->SetBinContent(21,11.23381);
   hCCpi0inFV_stack_10->SetBinContent(22,13.35936);
   hCCpi0inFV_stack_10->SetBinContent(23,12.36189);
   hCCpi0inFV_stack_10->SetBinContent(24,11.77776);
   hCCpi0inFV_stack_10->SetBinContent(25,13.85418);
   hCCpi0inFV_stack_10->SetBinError(1,2.391358);
   hCCpi0inFV_stack_10->SetBinError(2,2.025009);
   hCCpi0inFV_stack_10->SetBinError(3,1.774318);
   hCCpi0inFV_stack_10->SetBinError(4,1.77905);
   hCCpi0inFV_stack_10->SetBinError(5,1.63397);
   hCCpi0inFV_stack_10->SetBinError(6,1.549374);
   hCCpi0inFV_stack_10->SetBinError(7,1.822917);
   hCCpi0inFV_stack_10->SetBinError(8,1.627375);
   hCCpi0inFV_stack_10->SetBinError(9,1.754677);
   hCCpi0inFV_stack_10->SetBinError(10,1.782414);
   hCCpi0inFV_stack_10->SetBinError(11,1.652525);
   hCCpi0inFV_stack_10->SetBinError(12,1.792073);
   hCCpi0inFV_stack_10->SetBinError(13,1.843357);
   hCCpi0inFV_stack_10->SetBinError(14,1.985912);
   hCCpi0inFV_stack_10->SetBinError(15,1.804977);
   hCCpi0inFV_stack_10->SetBinError(16,1.766001);
   hCCpi0inFV_stack_10->SetBinError(17,1.933951);
   hCCpi0inFV_stack_10->SetBinError(18,1.78223);
   hCCpi0inFV_stack_10->SetBinError(19,1.507431);
   hCCpi0inFV_stack_10->SetBinError(20,1.704506);
   hCCpi0inFV_stack_10->SetBinError(21,1.699748);
   hCCpi0inFV_stack_10->SetBinError(22,1.83861);
   hCCpi0inFV_stack_10->SetBinError(23,1.698923);
   hCCpi0inFV_stack_10->SetBinError(24,1.763034);
   hCCpi0inFV_stack_10->SetBinError(25,1.924377);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.360447);
   hNCinFV_stack_11->SetBinContent(2,3.548664);
   hNCinFV_stack_11->SetBinContent(3,2.781087);
   hNCinFV_stack_11->SetBinContent(4,1.727526);
   hNCinFV_stack_11->SetBinContent(5,3.912912);
   hNCinFV_stack_11->SetBinContent(6,2.632271);
   hNCinFV_stack_11->SetBinContent(7,2.06713);
   hNCinFV_stack_11->SetBinContent(8,2.894473);
   hNCinFV_stack_11->SetBinContent(9,1.859823);
   hNCinFV_stack_11->SetBinContent(10,1.801249);
   hNCinFV_stack_11->SetBinContent(11,2.359547);
   hNCinFV_stack_11->SetBinContent(12,4.527859);
   hNCinFV_stack_11->SetBinContent(13,2.565895);
   hNCinFV_stack_11->SetBinContent(14,2.419834);
   hNCinFV_stack_11->SetBinContent(15,4.45126);
   hNCinFV_stack_11->SetBinContent(16,3.43132);
   hNCinFV_stack_11->SetBinContent(17,1.971584);
   hNCinFV_stack_11->SetBinContent(18,1.597373);
   hNCinFV_stack_11->SetBinContent(19,1.421184);
   hNCinFV_stack_11->SetBinContent(20,1.553509);
   hNCinFV_stack_11->SetBinContent(21,3.73223);
   hNCinFV_stack_11->SetBinContent(22,3.272745);
   hNCinFV_stack_11->SetBinContent(23,4.675359);
   hNCinFV_stack_11->SetBinContent(24,3.838297);
   hNCinFV_stack_11->SetBinContent(25,2.808034);
   hNCinFV_stack_11->SetBinError(1,0.6886179);
   hNCinFV_stack_11->SetBinError(2,0.9169267);
   hNCinFV_stack_11->SetBinError(3,0.8328844);
   hNCinFV_stack_11->SetBinError(4,0.7740036);
   hNCinFV_stack_11->SetBinError(5,1.144823);
   hNCinFV_stack_11->SetBinError(6,0.9743218);
   hNCinFV_stack_11->SetBinError(7,0.6159998);
   hNCinFV_stack_11->SetBinError(8,0.8574504);
   hNCinFV_stack_11->SetBinError(9,0.6495347);
   hNCinFV_stack_11->SetBinError(10,0.5677084);
   hNCinFV_stack_11->SetBinError(11,0.7449085);
   hNCinFV_stack_11->SetBinError(12,1.195972);
   hNCinFV_stack_11->SetBinError(13,0.7731824);
   hNCinFV_stack_11->SetBinError(14,0.8255312);
   hNCinFV_stack_11->SetBinError(15,1.300285);
   hNCinFV_stack_11->SetBinError(16,1.157792);
   hNCinFV_stack_11->SetBinError(17,0.6747954);
   hNCinFV_stack_11->SetBinError(18,0.5452068);
   hNCinFV_stack_11->SetBinError(19,0.6110865);
   hNCinFV_stack_11->SetBinError(20,0.6011073);
   hNCinFV_stack_11->SetBinError(21,1.26227);
   hNCinFV_stack_11->SetBinError(22,0.9968746);
   hNCinFV_stack_11->SetBinError(23,1.165722);
   hNCinFV_stack_11->SetBinError(24,1.190935);
   hNCinFV_stack_11->SetBinError(25,0.7942313);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,12.85816);
   hnumuCCinFV_stack_12->SetBinContent(2,10.80552);
   hnumuCCinFV_stack_12->SetBinContent(3,6.643066);
   hnumuCCinFV_stack_12->SetBinContent(4,8.071833);
   hnumuCCinFV_stack_12->SetBinContent(5,2.67292);
   hnumuCCinFV_stack_12->SetBinContent(6,6.319864);
   hnumuCCinFV_stack_12->SetBinContent(7,8.855776);
   hnumuCCinFV_stack_12->SetBinContent(8,5.046073);
   hnumuCCinFV_stack_12->SetBinContent(9,7.364413);
   hnumuCCinFV_stack_12->SetBinContent(10,9.03673);
   hnumuCCinFV_stack_12->SetBinContent(11,11.80809);
   hnumuCCinFV_stack_12->SetBinContent(12,14.82331);
   hnumuCCinFV_stack_12->SetBinContent(13,12.10643);
   hnumuCCinFV_stack_12->SetBinContent(14,13.14652);
   hnumuCCinFV_stack_12->SetBinContent(15,13.21295);
   hnumuCCinFV_stack_12->SetBinContent(16,9.510041);
   hnumuCCinFV_stack_12->SetBinContent(17,4.448927);
   hnumuCCinFV_stack_12->SetBinContent(18,8.145807);
   hnumuCCinFV_stack_12->SetBinContent(19,8.433165);
   hnumuCCinFV_stack_12->SetBinContent(20,7.714366);
   hnumuCCinFV_stack_12->SetBinContent(21,4.337765);
   hnumuCCinFV_stack_12->SetBinContent(22,4.818234);
   hnumuCCinFV_stack_12->SetBinContent(23,5.467033);
   hnumuCCinFV_stack_12->SetBinContent(24,7.750592);
   hnumuCCinFV_stack_12->SetBinContent(25,10.95989);
   hnumuCCinFV_stack_12->SetBinError(1,1.865859);
   hnumuCCinFV_stack_12->SetBinError(2,1.767295);
   hnumuCCinFV_stack_12->SetBinError(3,1.218651);
   hnumuCCinFV_stack_12->SetBinError(4,1.594305);
   hnumuCCinFV_stack_12->SetBinError(5,0.8484496);
   hnumuCCinFV_stack_12->SetBinError(6,1.299433);
   hnumuCCinFV_stack_12->SetBinError(7,2.3631);
   hnumuCCinFV_stack_12->SetBinError(8,1.139235);
   hnumuCCinFV_stack_12->SetBinError(9,1.755478);
   hnumuCCinFV_stack_12->SetBinError(10,1.777854);
   hnumuCCinFV_stack_12->SetBinError(11,2.243528);
   hnumuCCinFV_stack_12->SetBinError(12,3.073954);
   hnumuCCinFV_stack_12->SetBinError(13,1.839062);
   hnumuCCinFV_stack_12->SetBinError(14,1.931419);
   hnumuCCinFV_stack_12->SetBinError(15,2.313014);
   hnumuCCinFV_stack_12->SetBinError(16,1.575695);
   hnumuCCinFV_stack_12->SetBinError(17,1.229499);
   hnumuCCinFV_stack_12->SetBinError(18,1.607081);
   hnumuCCinFV_stack_12->SetBinError(19,1.798099);
   hnumuCCinFV_stack_12->SetBinError(20,1.355535);
   hnumuCCinFV_stack_12->SetBinError(21,1.087989);
   hnumuCCinFV_stack_12->SetBinError(22,1.267456);
   hnumuCCinFV_stack_12->SetBinError(23,1.226362);
   hnumuCCinFV_stack_12->SetBinError(24,1.388133);
   hnumuCCinFV_stack_12->SetBinError(25,1.779546);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,1.957977);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.5654633);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(14,0.6292924);
   hnueCCinFV_stack_13->SetBinContent(15,1.15267);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(21,0.8076656);
   hnueCCinFV_stack_13->SetBinContent(23,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(24,1.354146);
   hnueCCinFV_stack_13->SetBinContent(25,1.136579);
   hnueCCinFV_stack_13->SetBinError(2,0.3654046);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,1.593848);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.4080128);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.4494399);
   hnueCCinFV_stack_13->SetBinError(14,0.3703218);
   hnueCCinFV_stack_13->SetBinError(15,0.614407);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.2463303);
   hnueCCinFV_stack_13->SetBinError(21,0.4043286);
   hnueCCinFV_stack_13->SetBinError(23,0.2331833);
   hnueCCinFV_stack_13->SetBinError(24,1.174028);
   hnueCCinFV_stack_13->SetBinError(25,0.7935128);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__8->SetBinContent(1,79.05598);
   hmcerror__8->SetBinContent(2,63.58438);
   hmcerror__8->SetBinContent(3,60.66678);
   hmcerror__8->SetBinContent(4,68.38208);
   hmcerror__8->SetBinContent(5,52.30768);
   hmcerror__8->SetBinContent(6,56.60416);
   hmcerror__8->SetBinContent(7,75.11983);
   hmcerror__8->SetBinContent(8,53.57215);
   hmcerror__8->SetBinContent(9,53.98279);
   hmcerror__8->SetBinContent(10,59.8665);
   hmcerror__8->SetBinContent(11,59.96253);
   hmcerror__8->SetBinContent(12,67.52816);
   hmcerror__8->SetBinContent(13,60.21188);
   hmcerror__8->SetBinContent(14,69.23125);
   hmcerror__8->SetBinContent(15,65.47244);
   hmcerror__8->SetBinContent(16,70.3243);
   hmcerror__8->SetBinContent(17,60.27539);
   hmcerror__8->SetBinContent(18,67.63588);
   hmcerror__8->SetBinContent(19,66.84753);
   hmcerror__8->SetBinContent(20,65.03693);
   hmcerror__8->SetBinContent(21,61.29957);
   hmcerror__8->SetBinContent(22,70.08289);
   hmcerror__8->SetBinContent(23,53.27461);
   hmcerror__8->SetBinContent(24,65.56946);
   hmcerror__8->SetBinContent(25,68.25832);
   hmcerror__8->SetBinError(1,22.15709);
   hmcerror__8->SetBinError(2,21.62482);
   hmcerror__8->SetBinError(3,20.74501);
   hmcerror__8->SetBinError(4,31.35015);
   hmcerror__8->SetBinError(5,18.28118);
   hmcerror__8->SetBinError(6,22.14214);
   hmcerror__8->SetBinError(7,19.77851);
   hmcerror__8->SetBinError(8,21.26434);
   hmcerror__8->SetBinError(9,18.86904);
   hmcerror__8->SetBinError(10,23.77963);
   hmcerror__8->SetBinError(11,25.43262);
   hmcerror__8->SetBinError(12,29.64553);
   hmcerror__8->SetBinError(13,23.2739);
   hmcerror__8->SetBinError(14,28.05672);
   hmcerror__8->SetBinError(15,23.75518);
   hmcerror__8->SetBinError(16,30.74469);
   hmcerror__8->SetBinError(17,16.17601);
   hmcerror__8->SetBinError(18,20.24039);
   hmcerror__8->SetBinError(19,24.09981);
   hmcerror__8->SetBinError(20,18.19648);
   hmcerror__8->SetBinError(21,18.63393);
   hmcerror__8->SetBinError(22,25.12905);
   hmcerror__8->SetBinError(23,18.4412);
   hmcerror__8->SetBinError(24,20.94175);
   hmcerror__8->SetBinError(25,23.38248);
   hmcerror__8->SetBinError(26,0.3895343);
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
   
   Double_t _fx3009[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3009[25] = {
   62,
   71,
   49,
   52,
   50,
   56,
   65,
   48,
   48,
   60,
   59,
   72,
   61,
   76,
   60,
   60,
   66,
   46,
   64,
   60,
   55,
   56,
   49,
   62,
   63};
   Double_t _felx3009[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3009[25] = {
   8.0018,
   8.5518,
   7.1318,
   7.3419,
   7.2025,
   7.6127,
   8.1893,
   7.0604,
   7.0604,
   7.8743,
   7.8097,
   8.6108,
   7.9383,
   8.8425,
   7.8743,
   7.8743,
   8.2509,
   6.9153,
   8.1273,
   7.8743,
   7.546,
   7.6127,
   7.1318,
   8.0018,
   8.0648};
   Double_t _fehx3009[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3009[25] = {
   7.7989,
   8.3496,
   6.9277,
   7.1381,
   6.9985,
   7.4094,
   7.9866,
   6.8561,
   6.8561,
   7.6713,
   7.6066,
   8.4085,
   7.7354,
   8.6406,
   7.6713,
   7.6713,
   8.0483,
   6.7108,
   7.9246,
   7.6713,
   7.3425,
   7.4094,
   6.9277,
   7.7989,
   7.862};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-3.78,3.78);
   Graph_Graph3009->SetMinimum(34.52911);
   Graph_Graph3009->SetMaximum(89.19619);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3010[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3010[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3010[25] = {
   0.280271,
   0.3400964,
   0.3419501,
   0.4584556,
   0.3494932,
   0.3911752,
   0.2632928,
   0.3969289,
   0.349538,
   0.3972109,
   0.4241419,
   0.4390099,
   0.3865333,
   0.4052609,
   0.3628271,
   0.4371844,
   0.2683685,
   0.2992552,
   0.3605191,
   0.2797869,
   0.3039814,
   0.3585618,
   0.3461536,
   0.3193827,
   0.3425587};
   Double_t _fehx3010[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3010[25] = {
   0.280271,
   0.3400964,
   0.3419501,
   0.4584556,
   0.3494932,
   0.3911752,
   0.2632928,
   0.3969289,
   0.349538,
   0.3972109,
   0.4241419,
   0.4390099,
   0.3865333,
   0.4052609,
   0.3628271,
   0.4371844,
   0.2683685,
   0.2992552,
   0.3605191,
   0.2797869,
   0.3039814,
   0.3585618,
   0.3461536,
   0.3193827,
   0.3425587};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-3.78,3.78);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3011[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3011[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3011[25] = {
   0.18279,
   0.229542,
   0.2268682,
   0.1991322,
   0.2096131,
   0.1960814,
   0.1683401,
   0.2100699,
   0.2128396,
   0.2161407,
   0.202741,
   0.2224421,
   0.2184482,
   0.196539,
   0.2043777,
   0.2220152,
   0.1917881,
   0.1964903,
   0.1815524,
   0.1728912,
   0.1939905,
   0.1818239,
   0.2238763,
   0.2081668,
   0.2097182};
   Double_t _fehx3011[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3011[25] = {
   0.18279,
   0.229542,
   0.2268682,
   0.1991322,
   0.2096131,
   0.1960814,
   0.1683401,
   0.2100699,
   0.2128396,
   0.2161407,
   0.202741,
   0.2224421,
   0.2184482,
   0.196539,
   0.2043777,
   0.2220152,
   0.1917881,
   0.1964903,
   0.1815524,
   0.1728912,
   0.1939905,
   0.1818239,
   0.2238763,
   0.2081668,
   0.2097182};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-3.78,3.78);
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
   
   Double_t _fx3012[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3012[25] = {
   0.7842544,
   1.116626,
   0.8076908,
   0.7604331,
   0.9558826,
   0.9893266,
   0.8652842,
   0.895988,
   0.8891722,
   1.00223,
   0.9839478,
   1.066222,
   1.013089,
   1.09777,
   0.9164161,
   0.8531901,
   1.094974,
   0.6801124,
   0.9574027,
   0.9225527,
   0.8972331,
   0.7990538,
   0.9197627,
   0.9455622,
   0.9229645};
   Double_t _felx3012[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3012[25] = {
   0.1012169,
   0.1344953,
   0.1175569,
   0.1073658,
   0.1376949,
   0.1344901,
   0.1090165,
   0.1317924,
   0.1307898,
   0.131531,
   0.130243,
   0.1275142,
   0.1318394,
   0.1277241,
   0.1202689,
   0.1119712,
   0.1368867,
   0.1022431,
   0.1215797,
   0.1210743,
   0.1231004,
   0.1086242,
   0.1338687,
   0.1220355,
   0.1181512};
   Double_t _fehx3012[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3012[25] = {
   0.09865035,
   0.1313153,
   0.1141926,
   0.1043855,
   0.1337949,
   0.1308985,
   0.1063181,
   0.1279788,
   0.1270053,
   0.1281401,
   0.1268559,
   0.1245184,
   0.1284697,
   0.1248078,
   0.1171684,
   0.1090846,
   0.1335255,
   0.09921953,
   0.1185474,
   0.117953,
   0.1197806,
   0.1057234,
   0.1300376,
   0.118941,
   0.1151801};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-3.78,3.78);
   Graph_Graph3012->SetMinimum(0.5108621);
   Graph_Graph3012->SetMaximum(1.314949);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
