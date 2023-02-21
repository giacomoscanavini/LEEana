#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Feb 17 20:55:44 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
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
   pad1->Range(-170,-1.806368,163.3333,199.7463);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__22->SetBinContent(0,0.7319179);
   hmc__22->SetBinContent(1,0.5884556);
   hmc__22->SetBinContent(2,14.79267);
   hmc__22->SetBinContent(3,42.2339);
   hmc__22->SetBinContent(4,60.64322);
   hmc__22->SetBinContent(5,47.04316);
   hmc__22->SetBinContent(6,37.09803);
   hmc__22->SetBinContent(7,26.47342);
   hmc__22->SetBinContent(8,29.88599);
   hmc__22->SetBinContent(9,24.70956);
   hmc__22->SetBinContent(10,22.44827);
   hmc__22->SetBinContent(11,24.148);
   hmc__22->SetBinContent(12,27.39403);
   hmc__22->SetBinContent(13,25.27877);
   hmc__22->SetBinContent(14,23.67659);
   hmc__22->SetBinContent(15,28.27591);
   hmc__22->SetBinContent(16,27.75918);
   hmc__22->SetBinContent(17,33.3652);
   hmc__22->SetBinContent(18,31.93457);
   hmc__22->SetBinContent(19,38.45049);
   hmc__22->SetBinContent(20,47.05621);
   hmc__22->SetBinContent(21,49.20886);
   hmc__22->SetBinContent(22,80.3678);
   hmc__22->SetBinContent(23,90.31841);
   hmc__22->SetBinContent(24,87.22321);
   hmc__22->SetBinContent(25,40.8959);
   hmc__22->SetBinContent(26,1.25134);
   hmc__22->SetBinContent(27,0.7447861);
   hmc__22->SetBinError(0,0.438694);
   hmc__22->SetBinError(1,1.388287);
   hmc__22->SetBinError(2,11.68618);
   hmc__22->SetBinError(3,16.76642);
   hmc__22->SetBinError(4,25.38226);
   hmc__22->SetBinError(5,19.43501);
   hmc__22->SetBinError(6,16.30093);
   hmc__22->SetBinError(7,13.80279);
   hmc__22->SetBinError(8,13.08602);
   hmc__22->SetBinError(9,11.18758);
   hmc__22->SetBinError(10,12.03568);
   hmc__22->SetBinError(11,12.82186);
   hmc__22->SetBinError(12,12.72537);
   hmc__22->SetBinError(13,13.08983);
   hmc__22->SetBinError(14,10.51471);
   hmc__22->SetBinError(15,21.83513);
   hmc__22->SetBinError(16,13.36139);
   hmc__22->SetBinError(17,11.0029);
   hmc__22->SetBinError(18,12.16041);
   hmc__22->SetBinError(19,15.51869);
   hmc__22->SetBinError(20,14.43788);
   hmc__22->SetBinError(21,19.15268);
   hmc__22->SetBinError(22,25.4603);
   hmc__22->SetBinError(23,20.51017);
   hmc__22->SetBinError(24,21.31852);
   hmc__22->SetBinError(25,24.87633);
   hmc__22->SetBinError(26,4.148393);
   hmc__22->SetBinError(27,0.7095202);
   hmc__22->SetMinimum(-1.806368);
   hmc__22->SetMaximum(189.6687);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",26,-130,130);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(94.83433);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.536893);
   hbadmatch_stack_1->SetBinContent(3,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,3.20578);
   hbadmatch_stack_1->SetBinContent(5,0.9284966);
   hbadmatch_stack_1->SetBinContent(6,1.123658);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,1.267963);
   hbadmatch_stack_1->SetBinContent(9,0.7336084);
   hbadmatch_stack_1->SetBinContent(10,0.5587807);
   hbadmatch_stack_1->SetBinContent(11,0.9818863);
   hbadmatch_stack_1->SetBinContent(12,1.42989);
   hbadmatch_stack_1->SetBinContent(13,1.49098);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.9286332);
   hbadmatch_stack_1->SetBinContent(16,0.7319179);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,2.997161);
   hbadmatch_stack_1->SetBinContent(19,2.694561);
   hbadmatch_stack_1->SetBinContent(20,2.708824);
   hbadmatch_stack_1->SetBinContent(21,1.294489);
   hbadmatch_stack_1->SetBinContent(22,2.222017);
   hbadmatch_stack_1->SetBinContent(23,2.562483);
   hbadmatch_stack_1->SetBinContent(24,2.730226);
   hbadmatch_stack_1->SetBinContent(25,0.8770706);
   hbadmatch_stack_1->SetBinError(2,0.3929602);
   hbadmatch_stack_1->SetBinError(3,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.9601364);
   hbadmatch_stack_1->SetBinError(5,0.5547713);
   hbadmatch_stack_1->SetBinError(6,0.5188295);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,1.089159);
   hbadmatch_stack_1->SetBinError(9,0.4394482);
   hbadmatch_stack_1->SetBinError(10,0.4043614);
   hbadmatch_stack_1->SetBinError(11,0.4391155);
   hbadmatch_stack_1->SetBinError(12,0.7558499);
   hbadmatch_stack_1->SetBinError(13,0.6294674);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.48078);
   hbadmatch_stack_1->SetBinError(16,0.438694);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.9521264);
   hbadmatch_stack_1->SetBinError(19,0.9264091);
   hbadmatch_stack_1->SetBinError(20,0.9072986);
   hbadmatch_stack_1->SetBinError(21,0.59795);
   hbadmatch_stack_1->SetBinError(22,0.8202675);
   hbadmatch_stack_1->SetBinError(23,0.7925619);
   hbadmatch_stack_1->SetBinError(24,0.8901387);
   hbadmatch_stack_1->SetBinError(25,0.5197486);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.110787);
   hext_stack_2->SetBinContent(5,1.137595);
   hext_stack_2->SetBinContent(6,0.3243973);
   hext_stack_2->SetBinContent(7,2.103607);
   hext_stack_2->SetBinContent(8,3.234021);
   hext_stack_2->SetBinContent(9,2.014225);
   hext_stack_2->SetBinContent(10,1.697008);
   hext_stack_2->SetBinContent(11,1.544194);
   hext_stack_2->SetBinContent(12,4.270645);
   hext_stack_2->SetBinContent(13,2.27519);
   hext_stack_2->SetBinContent(14,2.752401);
   hext_stack_2->SetBinContent(15,4.468179);
   hext_stack_2->SetBinContent(16,3.972198);
   hext_stack_2->SetBinContent(17,12.92009);
   hext_stack_2->SetBinContent(18,7.415284);
   hext_stack_2->SetBinContent(19,10.11861);
   hext_stack_2->SetBinContent(20,15.29184);
   hext_stack_2->SetBinContent(21,13.31075);
   hext_stack_2->SetBinContent(22,29.93048);
   hext_stack_2->SetBinContent(23,32.01254);
   hext_stack_2->SetBinContent(24,28.60699);
   hext_stack_2->SetBinContent(25,16.14693);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.8669371);
   hext_stack_2->SetBinError(5,0.6602113);
   hext_stack_2->SetBinError(6,0.3243973);
   hext_stack_2->SetBinError(7,0.9761052);
   hext_stack_2->SetBinError(8,1.260897);
   hext_stack_2->SetBinError(9,1.045894);
   hext_stack_2->SetBinError(10,0.8873887);
   hext_stack_2->SetBinError(11,0.7753719);
   hext_stack_2->SetBinError(12,1.4943);
   hext_stack_2->SetBinError(13,0.9336798);
   hext_stack_2->SetBinError(14,1.07854);
   hext_stack_2->SetBinError(15,1.297469);
   hext_stack_2->SetBinError(16,1.288106);
   hext_stack_2->SetBinError(17,2.508068);
   hext_stack_2->SetBinError(18,1.990956);
   hext_stack_2->SetBinError(19,2.096994);
   hext_stack_2->SetBinError(20,2.611484);
   hext_stack_2->SetBinError(21,2.248615);
   hext_stack_2->SetBinError(22,3.646108);
   hext_stack_2->SetBinError(23,3.853633);
   hext_stack_2->SetBinError(24,3.465724);
   hext_stack_2->SetBinError(25,2.842792);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(3,1.334496);
   hdirt_stack_3->SetBinContent(4,1.052121);
   hdirt_stack_3->SetBinContent(5,0.6273471);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,1.285084);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.327738);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.5758626);
   hdirt_stack_3->SetBinContent(14,0.4737118);
   hdirt_stack_3->SetBinContent(16,0.9673651);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.9140499);
   hdirt_stack_3->SetBinContent(21,0.8364257);
   hdirt_stack_3->SetBinContent(22,2.595653);
   hdirt_stack_3->SetBinContent(23,2.847161);
   hdirt_stack_3->SetBinContent(24,0.7759784);
   hdirt_stack_3->SetBinContent(25,1.713512);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(3,0.6307253);
   hdirt_stack_3->SetBinError(4,0.4983258);
   hdirt_stack_3->SetBinError(5,0.3928349);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.9635251);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2290571);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.3389606);
   hdirt_stack_3->SetBinError(14,0.3359264);
   hdirt_stack_3->SetBinError(16,0.4867938);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4788161);
   hdirt_stack_3->SetBinError(21,0.4275364);
   hdirt_stack_3->SetBinError(22,0.9204087);
   hdirt_stack_3->SetBinError(23,0.9056961);
   hdirt_stack_3->SetBinError(24,0.458477);
   hdirt_stack_3->SetBinError(25,0.7399328);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,0.3917402);
   houtFV_stack_4->SetBinContent(2,10.36796);
   houtFV_stack_4->SetBinContent(3,18.21465);
   houtFV_stack_4->SetBinContent(4,13.46064);
   houtFV_stack_4->SetBinContent(5,12.00948);
   houtFV_stack_4->SetBinContent(6,8.982499);
   houtFV_stack_4->SetBinContent(7,4.89145);
   houtFV_stack_4->SetBinContent(8,6.136454);
   houtFV_stack_4->SetBinContent(9,5.907196);
   houtFV_stack_4->SetBinContent(10,6.105311);
   houtFV_stack_4->SetBinContent(11,5.33703);
   houtFV_stack_4->SetBinContent(12,3.962811);
   houtFV_stack_4->SetBinContent(13,5.933725);
   houtFV_stack_4->SetBinContent(14,4.539428);
   houtFV_stack_4->SetBinContent(15,4.362506);
   houtFV_stack_4->SetBinContent(16,4.164217);
   houtFV_stack_4->SetBinContent(17,4.201554);
   houtFV_stack_4->SetBinContent(18,4.770932);
   houtFV_stack_4->SetBinContent(19,5.986136);
   houtFV_stack_4->SetBinContent(20,4.688736);
   houtFV_stack_4->SetBinContent(21,8.623604);
   houtFV_stack_4->SetBinContent(22,9.920364);
   houtFV_stack_4->SetBinContent(23,13.93138);
   houtFV_stack_4->SetBinContent(24,20.12856);
   houtFV_stack_4->SetBinContent(25,15.5701);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,0.2770047);
   houtFV_stack_4->SetBinError(2,1.557245);
   houtFV_stack_4->SetBinError(3,2.18154);
   houtFV_stack_4->SetBinError(4,1.850844);
   houtFV_stack_4->SetBinError(5,1.780899);
   houtFV_stack_4->SetBinError(6,1.528851);
   houtFV_stack_4->SetBinError(7,1.074921);
   houtFV_stack_4->SetBinError(8,1.198511);
   houtFV_stack_4->SetBinError(9,1.287955);
   houtFV_stack_4->SetBinError(10,1.240963);
   houtFV_stack_4->SetBinError(11,1.640738);
   houtFV_stack_4->SetBinError(12,0.961408);
   houtFV_stack_4->SetBinError(13,1.203411);
   houtFV_stack_4->SetBinError(14,1.024385);
   houtFV_stack_4->SetBinError(15,1.073488);
   houtFV_stack_4->SetBinError(16,1.013279);
   houtFV_stack_4->SetBinError(17,1.05767);
   houtFV_stack_4->SetBinError(18,1.043106);
   houtFV_stack_4->SetBinError(19,1.240085);
   houtFV_stack_4->SetBinError(20,1.018885);
   houtFV_stack_4->SetBinError(21,1.716069);
   houtFV_stack_4->SetBinError(22,1.624826);
   houtFV_stack_4->SetBinError(23,1.904097);
   houtFV_stack_4->SetBinError(24,2.311416);
   houtFV_stack_4->SetBinError(25,2.004036);
   houtFV_stack_4->SetBinError(26,0.438694);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.257084);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6412039);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.920372);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.519226);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.548958);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4783215);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2532885);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3235708);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3763946);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.4623231);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.172304);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.47848);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.47466);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.853629);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.750247);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.846055);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.378324);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.66687);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.261483);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.782878);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.262652);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.316123);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.38263);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.75157);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.750906);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.890574);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.805537);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.11427);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.241896);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.954766);
   hNCpi0inFVres_stack_7->SetBinContent(22,9.216169);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.40807);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.35353);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.728976);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3618977);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9565419);
   hNCpi0inFVres_stack_7->SetBinError(4,1.102089);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9205668);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8783037);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5478561);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6721199);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5996929);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5067684);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7316394);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5844641);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5640172);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4000377);
   hNCpi0inFVres_stack_7->SetBinError(15,0.643422);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6538231);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6812749);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5867345);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6512382);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7091271);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8694706);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9845466);
   hNCpi0inFVres_stack_7->SetBinError(23,1.088437);
   hNCpi0inFVres_stack_7->SetBinError(24,1.183955);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4165616);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.324422);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.22471);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.923275);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.603094);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.19854);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.351826);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.282408);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.878854);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.823054);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8635717);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.03114);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9346539);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9476081);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9331579);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.562576);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.756876);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.897208);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.332902);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.983652);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.299954);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6978318);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3562967);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4204368);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3053129);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3701385);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.358204);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3111014);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3085891);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2260888);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.297566);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3135935);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3449191);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.304249);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4699768);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4174949);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4443649);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6079119);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5777665);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3174996);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(3,5.862105);
   hCCpi0inFV_stack_10->SetBinContent(4,14.64492);
   hCCpi0inFV_stack_10->SetBinContent(5,13.95973);
   hCCpi0inFV_stack_10->SetBinContent(6,9.73043);
   hCCpi0inFV_stack_10->SetBinContent(7,6.469533);
   hCCpi0inFV_stack_10->SetBinContent(8,7.182478);
   hCCpi0inFV_stack_10->SetBinContent(9,8.149498);
   hCCpi0inFV_stack_10->SetBinContent(10,6.102619);
   hCCpi0inFV_stack_10->SetBinContent(11,4.259065);
   hCCpi0inFV_stack_10->SetBinContent(12,7.498725);
   hCCpi0inFV_stack_10->SetBinContent(13,7.015951);
   hCCpi0inFV_stack_10->SetBinContent(14,5.257487);
   hCCpi0inFV_stack_10->SetBinContent(15,7.781454);
   hCCpi0inFV_stack_10->SetBinContent(16,7.570837);
   hCCpi0inFV_stack_10->SetBinContent(17,5.509011);
   hCCpi0inFV_stack_10->SetBinContent(18,7.354913);
   hCCpi0inFV_stack_10->SetBinContent(19,7.877105);
   hCCpi0inFV_stack_10->SetBinContent(20,9.129953);
   hCCpi0inFV_stack_10->SetBinContent(21,8.862707);
   hCCpi0inFV_stack_10->SetBinContent(22,11.69172);
   hCCpi0inFV_stack_10->SetBinContent(23,11.63339);
   hCCpi0inFV_stack_10->SetBinContent(24,8.878294);
   hCCpi0inFV_stack_10->SetBinContent(25,2.368694);
   hCCpi0inFV_stack_10->SetBinContent(26,0.1950248);
   hCCpi0inFV_stack_10->SetBinError(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(3,1.241881);
   hCCpi0inFV_stack_10->SetBinError(4,1.947518);
   hCCpi0inFV_stack_10->SetBinError(5,1.866683);
   hCCpi0inFV_stack_10->SetBinError(6,1.556772);
   hCCpi0inFV_stack_10->SetBinError(7,1.260672);
   hCCpi0inFV_stack_10->SetBinError(8,1.360202);
   hCCpi0inFV_stack_10->SetBinError(9,1.448551);
   hCCpi0inFV_stack_10->SetBinError(10,1.264898);
   hCCpi0inFV_stack_10->SetBinError(11,1.108211);
   hCCpi0inFV_stack_10->SetBinError(12,1.378666);
   hCCpi0inFV_stack_10->SetBinError(13,1.350571);
   hCCpi0inFV_stack_10->SetBinError(14,1.132305);
   hCCpi0inFV_stack_10->SetBinError(15,1.433766);
   hCCpi0inFV_stack_10->SetBinError(16,1.387644);
   hCCpi0inFV_stack_10->SetBinError(17,1.272744);
   hCCpi0inFV_stack_10->SetBinError(18,1.319454);
   hCCpi0inFV_stack_10->SetBinError(19,1.473478);
   hCCpi0inFV_stack_10->SetBinError(20,1.55814);
   hCCpi0inFV_stack_10->SetBinError(21,1.443285);
   hCCpi0inFV_stack_10->SetBinError(22,1.653547);
   hCCpi0inFV_stack_10->SetBinError(23,1.6645);
   hCCpi0inFV_stack_10->SetBinError(24,1.557808);
   hCCpi0inFV_stack_10->SetBinError(25,0.7273567);
   hCCpi0inFV_stack_10->SetBinError(26,0.1950249);
   hCCpi0inFV_stack_10->SetEntries(790);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3401776);
   hNCinFV_stack_11->SetBinContent(3,2.734337);
   hNCinFV_stack_11->SetBinContent(4,2.782519);
   hNCinFV_stack_11->SetBinContent(5,2.929362);
   hNCinFV_stack_11->SetBinContent(6,2.195754);
   hNCinFV_stack_11->SetBinContent(7,0.9269427);
   hNCinFV_stack_11->SetBinContent(8,1.465526);
   hNCinFV_stack_11->SetBinContent(9,0.9252522);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,2.342597);
   hNCinFV_stack_11->SetBinContent(12,1.125349);
   hNCinFV_stack_11->SetBinContent(13,1.125349);
   hNCinFV_stack_11->SetBinContent(14,1.608988);
   hNCinFV_stack_11->SetBinContent(15,1.463836);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.8753801);
   hNCinFV_stack_11->SetBinContent(18,0.7336084);
   hNCinFV_stack_11->SetBinContent(19,1.857266);
   hNCinFV_stack_11->SetBinContent(20,0.7336084);
   hNCinFV_stack_11->SetBinContent(21,1.370245);
   hNCinFV_stack_11->SetBinContent(22,2.103854);
   hNCinFV_stack_11->SetBinContent(23,2.7859);
   hNCinFV_stack_11->SetBinContent(24,2.535931);
   hNCinFV_stack_11->SetBinContent(25,0.536893);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.8558255);
   hNCinFV_stack_11->SetBinError(4,0.8319397);
   hNCinFV_stack_11->SetBinError(5,0.8777653);
   hNCinFV_stack_11->SetBinError(6,0.7598403);
   hNCinFV_stack_11->SetBinError(7,0.4800908);
   hNCinFV_stack_11->SetBinError(8,0.6209405);
   hNCinFV_stack_11->SetBinError(9,0.4794006);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.8097566);
   hNCinFV_stack_11->SetBinError(12,0.5194673);
   hNCinFV_stack_11->SetBinError(13,0.5194673);
   hNCinFV_stack_11->SetBinError(14,0.6801404);
   hNCinFV_stack_11->SetBinError(15,0.620407);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.5191111);
   hNCinFV_stack_11->SetBinError(18,0.4394482);
   hNCinFV_stack_11->SetBinError(19,0.6799255);
   hNCinFV_stack_11->SetBinError(20,0.4394482);
   hNCinFV_stack_11->SetBinError(21,0.5179089);
   hNCinFV_stack_11->SetBinError(22,0.6792233);
   hNCinFV_stack_11->SetBinError(23,0.8327353);
   hNCinFV_stack_11->SetBinError(24,0.8325131);
   hNCinFV_stack_11->SetBinError(25,0.3929602);
   hNCinFV_stack_11->SetEntries(152);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2384555);
   hnumuCCinFV_stack_12->SetBinContent(3,2.646418);
   hnumuCCinFV_stack_12->SetBinContent(4,3.246697);
   hnumuCCinFV_stack_12->SetBinContent(5,4.033032);
   hnumuCCinFV_stack_12->SetBinContent(6,4.484313);
   hnumuCCinFV_stack_12->SetBinContent(7,4.885804);
   hnumuCCinFV_stack_12->SetBinContent(8,3.91923);
   hnumuCCinFV_stack_12->SetBinContent(9,2.229609);
   hnumuCCinFV_stack_12->SetBinContent(10,3.54396);
   hnumuCCinFV_stack_12->SetBinContent(11,2.976092);
   hnumuCCinFV_stack_12->SetBinContent(12,3.711091);
   hnumuCCinFV_stack_12->SetBinContent(13,3.158897);
   hnumuCCinFV_stack_12->SetBinContent(14,4.671348);
   hnumuCCinFV_stack_12->SetBinContent(15,4.209422);
   hnumuCCinFV_stack_12->SetBinContent(16,4.673566);
   hnumuCCinFV_stack_12->SetBinContent(17,3.400013);
   hnumuCCinFV_stack_12->SetBinContent(18,3.358093);
   hnumuCCinFV_stack_12->SetBinContent(19,2.729304);
   hnumuCCinFV_stack_12->SetBinContent(20,6.184789);
   hnumuCCinFV_stack_12->SetBinContent(21,5.809062);
   hnumuCCinFV_stack_12->SetBinContent(22,9.842056);
   hnumuCCinFV_stack_12->SetBinContent(23,6.800764);
   hnumuCCinFV_stack_12->SetBinContent(24,6.267029);
   hnumuCCinFV_stack_12->SetBinContent(25,1.019745);
   hnumuCCinFV_stack_12->SetBinError(2,0.2384555);
   hnumuCCinFV_stack_12->SetBinError(3,0.8441064);
   hnumuCCinFV_stack_12->SetBinError(4,0.8868217);
   hnumuCCinFV_stack_12->SetBinError(5,1.038484);
   hnumuCCinFV_stack_12->SetBinError(6,1.065578);
   hnumuCCinFV_stack_12->SetBinError(7,1.20035);
   hnumuCCinFV_stack_12->SetBinError(8,1.04182);
   hnumuCCinFV_stack_12->SetBinError(9,0.7175669);
   hnumuCCinFV_stack_12->SetBinError(10,0.9387387);
   hnumuCCinFV_stack_12->SetBinError(11,0.9684798);
   hnumuCCinFV_stack_12->SetBinError(12,1.033847);
   hnumuCCinFV_stack_12->SetBinError(13,0.9406251);
   hnumuCCinFV_stack_12->SetBinError(14,1.115633);
   hnumuCCinFV_stack_12->SetBinError(15,1.09886);
   hnumuCCinFV_stack_12->SetBinError(16,1.110483);
   hnumuCCinFV_stack_12->SetBinError(17,0.897813);
   hnumuCCinFV_stack_12->SetBinError(18,1.099384);
   hnumuCCinFV_stack_12->SetBinError(19,0.8086837);
   hnumuCCinFV_stack_12->SetBinError(20,2.199725);
   hnumuCCinFV_stack_12->SetBinError(21,1.203599);
   hnumuCCinFV_stack_12->SetBinError(22,2.935853);
   hnumuCCinFV_stack_12->SetBinError(23,1.314411);
   hnumuCCinFV_stack_12->SetBinError(24,1.262263);
   hnumuCCinFV_stack_12->SetBinError(25,0.5337447);
   hnumuCCinFV_stack_12->SetEntries(389);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,0.9320427);
   hnueCCinFV_stack_13->SetBinContent(6,0.2261597);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(14,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(24,1.134888);
   hnueCCinFV_stack_13->SetBinError(4,0.5818021);
   hnueCCinFV_stack_13->SetBinError(6,0.2261597);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2179626);
   hnueCCinFV_stack_13->SetBinError(14,0.3025491);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.4566905);
   hnueCCinFV_stack_13->SetBinError(24,0.7930954);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__23->SetBinContent(0,0.7319179);
   hmcerror__23->SetBinContent(1,0.5884556);
   hmcerror__23->SetBinContent(2,14.79267);
   hmcerror__23->SetBinContent(3,42.2339);
   hmcerror__23->SetBinContent(4,60.64322);
   hmcerror__23->SetBinContent(5,47.04316);
   hmcerror__23->SetBinContent(6,37.09803);
   hmcerror__23->SetBinContent(7,26.47342);
   hmcerror__23->SetBinContent(8,29.88599);
   hmcerror__23->SetBinContent(9,24.70956);
   hmcerror__23->SetBinContent(10,22.44827);
   hmcerror__23->SetBinContent(11,24.148);
   hmcerror__23->SetBinContent(12,27.39403);
   hmcerror__23->SetBinContent(13,25.27877);
   hmcerror__23->SetBinContent(14,23.67659);
   hmcerror__23->SetBinContent(15,28.27591);
   hmcerror__23->SetBinContent(16,27.75918);
   hmcerror__23->SetBinContent(17,33.3652);
   hmcerror__23->SetBinContent(18,31.93457);
   hmcerror__23->SetBinContent(19,38.45049);
   hmcerror__23->SetBinContent(20,47.05621);
   hmcerror__23->SetBinContent(21,49.20886);
   hmcerror__23->SetBinContent(22,80.3678);
   hmcerror__23->SetBinContent(23,90.31841);
   hmcerror__23->SetBinContent(24,87.22321);
   hmcerror__23->SetBinContent(25,40.8959);
   hmcerror__23->SetBinContent(26,1.25134);
   hmcerror__23->SetBinContent(27,0.7447861);
   hmcerror__23->SetBinError(0,0.438694);
   hmcerror__23->SetBinError(1,1.388287);
   hmcerror__23->SetBinError(2,11.68618);
   hmcerror__23->SetBinError(3,16.76642);
   hmcerror__23->SetBinError(4,25.38226);
   hmcerror__23->SetBinError(5,19.43501);
   hmcerror__23->SetBinError(6,16.30093);
   hmcerror__23->SetBinError(7,13.80279);
   hmcerror__23->SetBinError(8,13.08602);
   hmcerror__23->SetBinError(9,11.18758);
   hmcerror__23->SetBinError(10,12.03568);
   hmcerror__23->SetBinError(11,12.82186);
   hmcerror__23->SetBinError(12,12.72537);
   hmcerror__23->SetBinError(13,13.08983);
   hmcerror__23->SetBinError(14,10.51471);
   hmcerror__23->SetBinError(15,21.83513);
   hmcerror__23->SetBinError(16,13.36139);
   hmcerror__23->SetBinError(17,11.0029);
   hmcerror__23->SetBinError(18,12.16041);
   hmcerror__23->SetBinError(19,15.51869);
   hmcerror__23->SetBinError(20,14.43788);
   hmcerror__23->SetBinError(21,19.15268);
   hmcerror__23->SetBinError(22,25.4603);
   hmcerror__23->SetBinError(23,20.51017);
   hmcerror__23->SetBinError(24,21.31852);
   hmcerror__23->SetBinError(25,24.87633);
   hmcerror__23->SetBinError(26,4.148393);
   hmcerror__23->SetBinError(27,0.7095202);
   hmcerror__23->SetEntries(948.2139);

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
   
   Double_t _fx3029[26] = {
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
   Double_t _fy3029[26] = {
   0,
   10,
   43,
   51,
   55,
   33,
   30,
   34,
   25,
   27,
   36,
   20,
   27,
   22,
   21,
   23,
   24,
   24,
   35,
   35,
   51,
   63,
   82,
   90,
   22,
   1};
   Double_t _felx3029[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3029[26] = {
   0,
   3.34883,
   6.6917,
   7.2725,
   7.546,
   5.8847,
   5.6197,
   5.9703,
   5.1474,
   5.3414,
   6.1381,
   4.6266,
   5.3414,
   4.8417,
   4.7354,
   4.9457,
   5.0476,
   5.0476,
   6.0548,
   6.0548,
   7.2725,
   8.0648,
   9.1791,
   9.6093,
   4.8417,
   1};
   Double_t _fehx3029[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3029[26] = {
   1.1478,
   3.1179,
   6.4868,
   7.0686,
   7.3425,
   5.6776,
   5.4117,
   5.7635,
   4.9374,
   5.1322,
   5.9318,
   4.4133,
   5.1322,
   4.6299,
   4.5229,
   4.7346,
   4.837,
   4.837,
   5.8483,
   5.8483,
   7.0686,
   7.862,
   8.9774,
   9.4079,
   4.6299,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-156,156);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(109.3487);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 884.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 198.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 18.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 186.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[26] = {
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
   Double_t _fy3030[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3030[26] = {
   2.359204,
   0.789998,
   0.3969897,
   0.4185506,
   0.4131316,
   0.4394016,
   0.521383,
   0.4378646,
   0.4527634,
   0.5361517,
   0.5309699,
   0.4645309,
   0.517819,
   0.4440975,
   0.7722169,
   0.4813324,
   0.3297718,
   0.3807913,
   0.4036019,
   0.3068219,
   0.3892119,
   0.3167973,
   0.2270874,
   0.2444134,
   0.6082841,
   3.31516};
   Double_t _fehx3030[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3030[26] = {
   2.359204,
   0.789998,
   0.3969897,
   0.4185506,
   0.4131316,
   0.4394016,
   0.521383,
   0.4378646,
   0.4527634,
   0.5361517,
   0.5309699,
   0.4645309,
   0.517819,
   0.4440975,
   0.7722169,
   0.4813324,
   0.3297718,
   0.3807913,
   0.4036019,
   0.3068219,
   0.3892119,
   0.3167973,
   0.2270874,
   0.2444134,
   0.6082841,
   3.31516};
   grae = new TGraphAsymmErrors(26,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-156,156);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3031[26] = {
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
   Double_t _fy3031[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3031[26] = {
   1.049441,
   0.2497965,
   0.2174416,
   0.2073902,
   0.208135,
   0.2177432,
   0.2135341,
   0.2402203,
   0.2436036,
   0.2233943,
   0.2297366,
   0.2065004,
   0.2170495,
   0.1891509,
   0.2051716,
   0.2096903,
   0.1756829,
   0.1949501,
   0.179238,
   0.157755,
   0.1555526,
   0.1584891,
   0.1373803,
   0.1436698,
   0.1579073,
   0.6343081};
   Double_t _fehx3031[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3031[26] = {
   1.049441,
   0.2497965,
   0.2174416,
   0.2073902,
   0.208135,
   0.2177432,
   0.2135341,
   0.2402203,
   0.2436036,
   0.2233943,
   0.2297366,
   0.2065004,
   0.2170495,
   0.1891509,
   0.2051716,
   0.2096903,
   0.1756829,
   0.1949501,
   0.179238,
   0.157755,
   0.1555526,
   0.1584891,
   0.1373803,
   0.1436698,
   0.1579073,
   0.6343081};
   grae = new TGraphAsymmErrors(26,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-156,156);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3032[26] = {
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
   Double_t _fy3032[26] = {
   0,
   0.6760105,
   1.018139,
   0.8409843,
   1.169139,
   0.889535,
   1.133212,
   1.137657,
   1.011754,
   1.202765,
   1.490806,
   0.7300861,
   1.06809,
   0.929188,
   0.7426817,
   0.8285548,
   0.7193124,
   0.7515366,
   0.9102615,
   0.7437914,
   1.036399,
   0.7838961,
   0.9078991,
   1.031835,
   0.5379512,
   0.7991433};
   Double_t _felx3032[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fely3032[26] = {
   0,
   0.2263844,
   0.1584438,
   0.1199227,
   0.1604059,
   0.1586257,
   0.2122771,
   0.1997692,
   0.2083162,
   0.2379426,
   0.2541866,
   0.1688908,
   0.2112998,
   0.2044932,
   0.1674712,
   0.1781645,
   0.1512834,
   0.1580607,
   0.15747,
   0.1286717,
   0.1477884,
   0.1003486,
   0.1016304,
   0.1101691,
   0.1183908,
   0.7991433};
   Double_t _fehx3032[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
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
   Double_t _fehy3032[26] = {
   1.95053,
   0.2107733,
   0.1535922,
   0.1165604,
   0.1560801,
   0.1530432,
   0.2044201,
   0.1928495,
   0.1998174,
   0.2286234,
   0.2456435,
   0.1611045,
   0.2030241,
   0.1955476,
   0.159956,
   0.1705598,
   0.1449714,
   0.1514659,
   0.1520995,
   0.1242833,
   0.1436449,
   0.09782525,
   0.09939724,
   0.10786,
   0.1132118,
   1.086603};
   grae = new TGraphAsymmErrors(26,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-156,156);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.145583);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
