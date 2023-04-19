#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 18:06:00 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
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
   pad1->Range(-4.119231,-1.615272,3.957692,178.6151);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__7->SetBinContent(1,80.7636);
   hmc__7->SetBinContent(2,71.42683);
   hmc__7->SetBinContent(3,66.64981);
   hmc__7->SetBinContent(4,72.56898);
   hmc__7->SetBinContent(5,52.27649);
   hmc__7->SetBinContent(6,63.97507);
   hmc__7->SetBinContent(7,67.38715);
   hmc__7->SetBinContent(8,61.19928);
   hmc__7->SetBinContent(9,64.01665);
   hmc__7->SetBinContent(10,61.04067);
   hmc__7->SetBinContent(11,69.98507);
   hmc__7->SetBinContent(12,70.4543);
   hmc__7->SetBinContent(13,71.37763);
   hmc__7->SetBinContent(14,75.13573);
   hmc__7->SetBinContent(15,74.09094);
   hmc__7->SetBinContent(16,61.75465);
   hmc__7->SetBinContent(17,75.58153);
   hmc__7->SetBinContent(18,66.15115);
   hmc__7->SetBinContent(19,68.36921);
   hmc__7->SetBinContent(20,64.61414);
   hmc__7->SetBinContent(21,72.84236);
   hmc__7->SetBinContent(22,60.25664);
   hmc__7->SetBinContent(23,68.42712);
   hmc__7->SetBinContent(24,74.4483);
   hmc__7->SetBinError(1,24.71317);
   hmc__7->SetBinError(2,23.05764);
   hmc__7->SetBinError(3,22.79307);
   hmc__7->SetBinError(4,31.02585);
   hmc__7->SetBinError(5,19.43879);
   hmc__7->SetBinError(6,20.72777);
   hmc__7->SetBinError(7,20.00974);
   hmc__7->SetBinError(8,20.50089);
   hmc__7->SetBinError(9,19.98705);
   hmc__7->SetBinError(10,26.04612);
   hmc__7->SetBinError(11,29.28809);
   hmc__7->SetBinError(12,30.10518);
   hmc__7->SetBinError(13,30.2109);
   hmc__7->SetBinError(14,34.99558);
   hmc__7->SetBinError(15,25.01769);
   hmc__7->SetBinError(16,24.57921);
   hmc__7->SetBinError(17,21.53281);
   hmc__7->SetBinError(18,24.11982);
   hmc__7->SetBinError(19,20.67954);
   hmc__7->SetBinError(20,19.38154);
   hmc__7->SetBinError(21,22.24644);
   hmc__7->SetBinError(22,19.3829);
   hmc__7->SetBinError(23,20.8208);
   hmc__7->SetBinError(24,26.00818);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-1.615272);
   hmc__7->SetMaximum(169.6036);
   hmc__7->SetEntries(1602.903);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,-3.15,3.15);
   hs3_stack_3->SetMinimum(-1.337066e-08);
   hs3_stack_3->SetMaximum(84.80178);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.826813);
   hbadmatch_stack_1->SetBinContent(2,2.076663);
   hbadmatch_stack_1->SetBinContent(3,2.65781);
   hbadmatch_stack_1->SetBinContent(4,4.115494);
   hbadmatch_stack_1->SetBinContent(5,2.053982);
   hbadmatch_stack_1->SetBinContent(6,1.537888);
   hbadmatch_stack_1->SetBinContent(7,3.449803);
   hbadmatch_stack_1->SetBinContent(8,1.684429);
   hbadmatch_stack_1->SetBinContent(9,2.39585);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,3.026335);
   hbadmatch_stack_1->SetBinContent(12,1.83419);
   hbadmatch_stack_1->SetBinContent(13,1.046296);
   hbadmatch_stack_1->SetBinContent(14,1.70528);
   hbadmatch_stack_1->SetBinContent(15,4.609063);
   hbadmatch_stack_1->SetBinContent(16,2.192676);
   hbadmatch_stack_1->SetBinContent(17,3.90494);
   hbadmatch_stack_1->SetBinContent(18,1.908829);
   hbadmatch_stack_1->SetBinContent(19,1.505055);
   hbadmatch_stack_1->SetBinContent(20,3.586094);
   hbadmatch_stack_1->SetBinContent(21,2.912357);
   hbadmatch_stack_1->SetBinContent(22,1.515398);
   hbadmatch_stack_1->SetBinContent(23,2.530808);
   hbadmatch_stack_1->SetBinContent(24,1.187624);
   hbadmatch_stack_1->SetBinError(1,0.9380852);
   hbadmatch_stack_1->SetBinError(2,0.7144463);
   hbadmatch_stack_1->SetBinError(3,0.8733241);
   hbadmatch_stack_1->SetBinError(4,1.097205);
   hbadmatch_stack_1->SetBinError(5,0.7078105);
   hbadmatch_stack_1->SetBinError(6,0.6534225);
   hbadmatch_stack_1->SetBinError(7,1.06041);
   hbadmatch_stack_1->SetBinError(8,0.6502527);
   hbadmatch_stack_1->SetBinError(9,0.7857345);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.8668395);
   hbadmatch_stack_1->SetBinError(12,0.7164544);
   hbadmatch_stack_1->SetBinError(13,0.643358);
   hbadmatch_stack_1->SetBinError(14,0.6657327);
   hbadmatch_stack_1->SetBinError(15,1.45015);
   hbadmatch_stack_1->SetBinError(16,0.7488822);
   hbadmatch_stack_1->SetBinError(17,1.070684);
   hbadmatch_stack_1->SetBinError(18,0.6506224);
   hbadmatch_stack_1->SetBinError(19,0.6344655);
   hbadmatch_stack_1->SetBinError(20,1.006056);
   hbadmatch_stack_1->SetBinError(21,0.9079505);
   hbadmatch_stack_1->SetBinError(22,0.588146);
   hbadmatch_stack_1->SetBinError(23,0.8906026);
   hbadmatch_stack_1->SetBinError(24,0.6156851);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.98102);
   hext_stack_2->SetBinContent(2,5.105384);
   hext_stack_2->SetBinContent(3,7.145559);
   hext_stack_2->SetBinContent(4,10.68962);
   hext_stack_2->SetBinContent(5,8.108799);
   hext_stack_2->SetBinContent(6,11.15524);
   hext_stack_2->SetBinContent(7,16.37759);
   hext_stack_2->SetBinContent(8,8.828205);
   hext_stack_2->SetBinContent(9,8.10439);
   hext_stack_2->SetBinContent(10,4.863188);
   hext_stack_2->SetBinContent(11,7.549386);
   hext_stack_2->SetBinContent(12,4.703194);
   hext_stack_2->SetBinContent(13,7.112428);
   hext_stack_2->SetBinContent(14,5.187586);
   hext_stack_2->SetBinContent(15,11.34282);
   hext_stack_2->SetBinContent(16,10.45019);
   hext_stack_2->SetBinContent(17,16.27662);
   hext_stack_2->SetBinContent(18,16.01566);
   hext_stack_2->SetBinContent(19,19.75284);
   hext_stack_2->SetBinContent(20,14.76556);
   hext_stack_2->SetBinContent(21,12.47878);
   hext_stack_2->SetBinContent(22,9.077581);
   hext_stack_2->SetBinContent(23,6.299231);
   hext_stack_2->SetBinContent(24,6.952434);
   hext_stack_2->SetBinError(1,1.990353);
   hext_stack_2->SetBinError(2,1.39999);
   hext_stack_2->SetBinError(3,1.607913);
   hext_stack_2->SetBinError(4,2.163997);
   hext_stack_2->SetBinError(5,1.854349);
   hext_stack_2->SetBinError(6,2.245095);
   hext_stack_2->SetBinError(7,2.619595);
   hext_stack_2->SetBinError(8,1.942999);
   hext_stack_2->SetBinError(9,1.81755);
   hext_stack_2->SetBinError(10,1.383773);
   hext_stack_2->SetBinError(11,1.756995);
   hext_stack_2->SetBinError(12,1.389163);
   hext_stack_2->SetBinError(13,1.804181);
   hext_stack_2->SetBinError(14,1.421289);
   hext_stack_2->SetBinError(15,2.242426);
   hext_stack_2->SetBinError(16,2.073985);
   hext_stack_2->SetBinError(17,2.658847);
   hext_stack_2->SetBinError(18,2.700297);
   hext_stack_2->SetBinError(19,2.950335);
   hext_stack_2->SetBinError(20,2.408025);
   hext_stack_2->SetBinError(21,2.234481);
   hext_stack_2->SetBinError(22,1.902417);
   hext_stack_2->SetBinError(23,1.710094);
   hext_stack_2->SetBinError(24,1.808318);
   hext_stack_2->SetEntries(595);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.776099);
   hdirt_stack_3->SetBinContent(2,1.512026);
   hdirt_stack_3->SetBinContent(3,0.4829878);
   hdirt_stack_3->SetBinContent(4,0.7304975);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(6,1.012999);
   hdirt_stack_3->SetBinContent(7,0.7341927);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.7763796);
   hdirt_stack_3->SetBinContent(10,0.5570828);
   hdirt_stack_3->SetBinContent(11,0.4720574);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.3986344);
   hdirt_stack_3->SetBinContent(14,0.6331654);
   hdirt_stack_3->SetBinContent(15,1.93958);
   hdirt_stack_3->SetBinContent(16,0.51637);
   hdirt_stack_3->SetBinContent(17,1.043231);
   hdirt_stack_3->SetBinContent(18,1.283821);
   hdirt_stack_3->SetBinContent(19,1.681901);
   hdirt_stack_3->SetBinContent(20,0.9654288);
   hdirt_stack_3->SetBinContent(21,1.013654);
   hdirt_stack_3->SetBinContent(22,1.270754);
   hdirt_stack_3->SetBinContent(23,2.412559);
   hdirt_stack_3->SetBinContent(24,2.381548);
   hdirt_stack_3->SetBinError(1,0.458477);
   hdirt_stack_3->SetBinError(2,0.5723725);
   hdirt_stack_3->SetBinError(3,0.3653486);
   hdirt_stack_3->SetBinError(4,0.5179555);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(6,0.5284854);
   hdirt_stack_3->SetBinError(7,0.3741159);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.4227979);
   hdirt_stack_3->SetBinError(10,0.4028472);
   hdirt_stack_3->SetBinError(11,0.2832398);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.2948844);
   hdirt_stack_3->SetBinError(14,0.4685454);
   hdirt_stack_3->SetBinError(15,0.7399276);
   hdirt_stack_3->SetBinError(16,0.4027077);
   hdirt_stack_3->SetBinError(17,0.5800463);
   hdirt_stack_3->SetBinError(18,0.6525427);
   hdirt_stack_3->SetBinError(19,1.006176);
   hdirt_stack_3->SetBinError(20,0.5163876);
   hdirt_stack_3->SetBinError(21,0.4590478);
   hdirt_stack_3->SetBinError(22,0.5943722);
   hdirt_stack_3->SetBinError(23,0.8437742);
   hdirt_stack_3->SetBinError(24,0.8519841);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,15.75687);
   houtFV_stack_4->SetBinContent(2,11.1569);
   houtFV_stack_4->SetBinContent(3,15.86329);
   houtFV_stack_4->SetBinContent(4,15.96771);
   houtFV_stack_4->SetBinContent(5,12.44815);
   houtFV_stack_4->SetBinContent(6,13.65681);
   houtFV_stack_4->SetBinContent(7,11.61228);
   houtFV_stack_4->SetBinContent(8,14.23857);
   houtFV_stack_4->SetBinContent(9,13.75795);
   houtFV_stack_4->SetBinContent(10,11.81714);
   houtFV_stack_4->SetBinContent(11,12.59573);
   houtFV_stack_4->SetBinContent(12,16.89357);
   houtFV_stack_4->SetBinContent(13,14.08063);
   houtFV_stack_4->SetBinContent(14,14.97888);
   houtFV_stack_4->SetBinContent(15,15.11173);
   houtFV_stack_4->SetBinContent(16,12.38116);
   houtFV_stack_4->SetBinContent(17,13.17289);
   houtFV_stack_4->SetBinContent(18,12.29743);
   houtFV_stack_4->SetBinContent(19,9.818855);
   houtFV_stack_4->SetBinContent(20,10.64862);
   houtFV_stack_4->SetBinContent(21,15.88631);
   houtFV_stack_4->SetBinContent(22,10.4626);
   houtFV_stack_4->SetBinContent(23,15.05498);
   houtFV_stack_4->SetBinContent(24,15.34934);
   houtFV_stack_4->SetBinError(1,1.959673);
   houtFV_stack_4->SetBinError(2,1.650665);
   houtFV_stack_4->SetBinError(3,1.975116);
   houtFV_stack_4->SetBinError(4,2.064062);
   houtFV_stack_4->SetBinError(5,1.713857);
   houtFV_stack_4->SetBinError(6,1.882926);
   houtFV_stack_4->SetBinError(7,1.679904);
   houtFV_stack_4->SetBinError(8,2.071012);
   houtFV_stack_4->SetBinError(9,1.893479);
   houtFV_stack_4->SetBinError(10,1.737441);
   houtFV_stack_4->SetBinError(11,1.746399);
   houtFV_stack_4->SetBinError(12,2.14745);
   houtFV_stack_4->SetBinError(13,1.902701);
   houtFV_stack_4->SetBinError(14,1.979927);
   houtFV_stack_4->SetBinError(15,1.972143);
   houtFV_stack_4->SetBinError(16,1.758409);
   houtFV_stack_4->SetBinError(17,2.169823);
   houtFV_stack_4->SetBinError(18,1.748016);
   houtFV_stack_4->SetBinError(19,1.525281);
   houtFV_stack_4->SetBinError(20,1.624033);
   houtFV_stack_4->SetBinError(21,2.102718);
   houtFV_stack_4->SetBinError(22,1.658837);
   houtFV_stack_4->SetBinError(23,1.933396);
   houtFV_stack_4->SetBinError(24,1.999523);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.697004);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.14374);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.157358);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7944901);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6141361);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5845718);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7242399);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7513078);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2563433);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.379057);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3883553);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3285446);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2874767);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2081635);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2828126);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2479823);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2126346);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06834073);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,10.51468);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.84046);
   hNCpi0inFVres_stack_7->SetBinContent(3,13.11886);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.34473);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.53893);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.937745);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.32935);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.73074);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.98866);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.0761);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.58718);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.53254);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.05999);
   hNCpi0inFVres_stack_7->SetBinContent(14,12.77411);
   hNCpi0inFVres_stack_7->SetBinContent(15,12.49294);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.08989);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.70029);
   hNCpi0inFVres_stack_7->SetBinContent(18,11.02968);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.47875);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.887097);
   hNCpi0inFVres_stack_7->SetBinContent(21,12.91027);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.14077);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.62065);
   hNCpi0inFVres_stack_7->SetBinContent(24,14.43033);
   hNCpi0inFVres_stack_7->SetBinError(1,1.008984);
   hNCpi0inFVres_stack_7->SetBinError(2,1.35833);
   hNCpi0inFVres_stack_7->SetBinError(3,1.135914);
   hNCpi0inFVres_stack_7->SetBinError(4,1.237584);
   hNCpi0inFVres_stack_7->SetBinError(5,1.010333);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9791617);
   hNCpi0inFVres_stack_7->SetBinError(7,1.010782);
   hNCpi0inFVres_stack_7->SetBinError(8,1.030012);
   hNCpi0inFVres_stack_7->SetBinError(9,1.053704);
   hNCpi0inFVres_stack_7->SetBinError(10,1.139592);
   hNCpi0inFVres_stack_7->SetBinError(11,1.107374);
   hNCpi0inFVres_stack_7->SetBinError(12,1.07934);
   hNCpi0inFVres_stack_7->SetBinError(13,1.110737);
   hNCpi0inFVres_stack_7->SetBinError(14,1.190129);
   hNCpi0inFVres_stack_7->SetBinError(15,1.127747);
   hNCpi0inFVres_stack_7->SetBinError(16,1.156964);
   hNCpi0inFVres_stack_7->SetBinError(17,1.174603);
   hNCpi0inFVres_stack_7->SetBinError(18,1.0791);
   hNCpi0inFVres_stack_7->SetBinError(19,1.188275);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9803206);
   hNCpi0inFVres_stack_7->SetBinError(21,1.15898);
   hNCpi0inFVres_stack_7->SetBinError(22,1.034067);
   hNCpi0inFVres_stack_7->SetBinError(23,1.157524);
   hNCpi0inFVres_stack_7->SetBinError(24,1.226448);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.053902);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.278598);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.398744);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.10787);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.277438);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.659389);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.398912);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.43943);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.789848);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.292632);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.66787);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.486852);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.32783);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.816916);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.550366);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.844984);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.024338);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.85353);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.025834);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.56548);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.409057);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.63997);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.941798);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.51392);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6014755);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6113702);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.474304);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5404056);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6584207);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3634175);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5076645);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4621819);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5780474);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6999201);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6416047);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6323374);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4588011);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5618282);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4798108);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5909216);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5678573);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4441458);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5729183);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4930796);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7588412);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6409978);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5102767);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6175458);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,22.51285);
   hCCpi0inFV_stack_10->SetBinContent(2,15.69716);
   hCCpi0inFV_stack_10->SetBinContent(3,12.60674);
   hCCpi0inFV_stack_10->SetBinContent(4,14.4762);
   hCCpi0inFV_stack_10->SetBinContent(5,8.677611);
   hCCpi0inFV_stack_10->SetBinContent(6,12.28054);
   hCCpi0inFV_stack_10->SetBinContent(7,10.94889);
   hCCpi0inFV_stack_10->SetBinContent(8,11.39444);
   hCCpi0inFV_stack_10->SetBinContent(9,14.89154);
   hCCpi0inFV_stack_10->SetBinContent(10,12.08672);
   hCCpi0inFV_stack_10->SetBinContent(11,12.30085);
   hCCpi0inFV_stack_10->SetBinContent(12,14.43728);
   hCCpi0inFV_stack_10->SetBinContent(13,17.0235);
   hCCpi0inFV_stack_10->SetBinContent(14,14.53321);
   hCCpi0inFV_stack_10->SetBinContent(15,12.3059);
   hCCpi0inFV_stack_10->SetBinContent(16,12.03347);
   hCCpi0inFV_stack_10->SetBinContent(17,15.25111);
   hCCpi0inFV_stack_10->SetBinContent(18,9.722412);
   hCCpi0inFV_stack_10->SetBinContent(19,11.75815);
   hCCpi0inFV_stack_10->SetBinContent(20,11.82395);
   hCCpi0inFV_stack_10->SetBinContent(21,13.07244);
   hCCpi0inFV_stack_10->SetBinContent(22,12.29818);
   hCCpi0inFV_stack_10->SetBinContent(23,12.52013);
   hCCpi0inFV_stack_10->SetBinContent(24,14.44264);
   hCCpi0inFV_stack_10->SetBinError(1,2.447128);
   hCCpi0inFV_stack_10->SetBinError(2,2.015103);
   hCCpi0inFV_stack_10->SetBinError(3,1.785375);
   hCCpi0inFV_stack_10->SetBinError(4,1.883949);
   hCCpi0inFV_stack_10->SetBinError(5,1.499414);
   hCCpi0inFV_stack_10->SetBinError(6,1.802053);
   hCCpi0inFV_stack_10->SetBinError(7,1.690718);
   hCCpi0inFV_stack_10->SetBinError(8,1.708638);
   hCCpi0inFV_stack_10->SetBinError(9,1.907171);
   hCCpi0inFV_stack_10->SetBinError(10,1.699044);
   hCCpi0inFV_stack_10->SetBinError(11,1.74852);
   hCCpi0inFV_stack_10->SetBinError(12,1.809051);
   hCCpi0inFV_stack_10->SetBinError(13,2.034782);
   hCCpi0inFV_stack_10->SetBinError(14,1.879326);
   hCCpi0inFV_stack_10->SetBinError(15,1.788104);
   hCCpi0inFV_stack_10->SetBinError(16,1.788127);
   hCCpi0inFV_stack_10->SetBinError(17,2.063366);
   hCCpi0inFV_stack_10->SetBinError(18,1.594153);
   hCCpi0inFV_stack_10->SetBinError(19,1.760033);
   hCCpi0inFV_stack_10->SetBinError(20,1.733561);
   hCCpi0inFV_stack_10->SetBinError(21,1.796229);
   hCCpi0inFV_stack_10->SetBinError(22,1.690456);
   hCCpi0inFV_stack_10->SetBinError(23,1.835148);
   hCCpi0inFV_stack_10->SetBinError(24,1.954138);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.882263);
   hNCinFV_stack_11->SetBinContent(2,4.198173);
   hNCinFV_stack_11->SetBinContent(3,2.976313);
   hNCinFV_stack_11->SetBinContent(4,3.076205);
   hNCinFV_stack_11->SetBinContent(5,2.782519);
   hNCinFV_stack_11->SetBinContent(6,3.564308);
   hNCinFV_stack_11->SetBinContent(7,1.377008);
   hNCinFV_stack_11->SetBinContent(8,3.376046);
   hNCinFV_stack_11->SetBinContent(9,1.91221);
   hNCinFV_stack_11->SetBinContent(10,2.933825);
   hNCinFV_stack_11->SetBinContent(11,3.951585);
   hNCinFV_stack_11->SetBinContent(12,3.181021);
   hNCinFV_stack_11->SetBinContent(13,2.684465);
   hNCinFV_stack_11->SetBinContent(14,3.464564);
   hNCinFV_stack_11->SetBinContent(15,4.492942);
   hNCinFV_stack_11->SetBinContent(16,1.610679);
   hNCinFV_stack_11->SetBinContent(17,2.110616);
   hNCinFV_stack_11->SetBinContent(18,2.340906);
   hNCinFV_stack_11->SetBinContent(19,1.268811);
   hNCinFV_stack_11->SetBinContent(20,3.75656);
   hNCinFV_stack_11->SetBinContent(21,4.093357);
   hNCinFV_stack_11->SetBinContent(22,4.533278);
   hNCinFV_stack_11->SetBinContent(23,3.666351);
   hNCinFV_stack_11->SetBinContent(24,3.227512);
   hNCinFV_stack_11->SetBinError(1,0.7828287);
   hNCinFV_stack_11->SetBinError(2,1.057044);
   hNCinFV_stack_11->SetBinError(3,0.8790201);
   hNCinFV_stack_11->SetBinError(4,0.9213145);
   hNCinFV_stack_11->SetBinError(5,0.8319397);
   hNCinFV_stack_11->SetBinError(6,0.9191978);
   hNCinFV_stack_11->SetBinError(7,0.5204599);
   hNCinFV_stack_11->SetBinError(8,0.8997438);
   hNCinFV_stack_11->SetBinError(9,0.6516395);
   hNCinFV_stack_11->SetBinError(10,0.7575167);
   hNCinFV_stack_11->SetBinError(11,1.057495);
   hNCinFV_stack_11->SetBinError(12,0.8783531);
   hNCinFV_stack_11->SetBinError(13,0.8786858);
   hNCinFV_stack_11->SetBinError(14,0.9613675);
   hNCinFV_stack_11->SetBinError(15,1.03734);
   hNCinFV_stack_11->SetBinError(16,0.6806271);
   hNCinFV_stack_11->SetBinError(17,0.6811705);
   hNCinFV_stack_11->SetBinError(18,0.8093475);
   hNCinFV_stack_11->SetBinError(19,0.5889569);
   hNCinFV_stack_11->SetBinError(20,1.039357);
   hNCinFV_stack_11->SetBinError(21,1.093004);
   hNCinFV_stack_11->SetBinError(22,1.109539);
   hNCinFV_stack_11->SetBinError(23,0.9822989);
   hNCinFV_stack_11->SetBinError(24,0.8547095);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,13.05488);
   hnumuCCinFV_stack_12->SetBinContent(2,11.66579);
   hnumuCCinFV_stack_12->SetBinContent(3,7.709727);
   hnumuCCinFV_stack_12->SetBinContent(4,6.238042);
   hnumuCCinFV_stack_12->SetBinContent(5,3.155187);
   hnumuCCinFV_stack_12->SetBinContent(6,6.515168);
   hnumuCCinFV_stack_12->SetBinContent(7,9.015383);
   hnumuCCinFV_stack_12->SetBinContent(8,7.741599);
   hnumuCCinFV_stack_12->SetBinContent(9,6.032983);
   hnumuCCinFV_stack_12->SetBinContent(10,11.20693);
   hnumuCCinFV_stack_12->SetBinContent(11,13.75918);
   hnumuCCinFV_stack_12->SetBinContent(12,12.75793);
   hnumuCCinFV_stack_12->SetBinContent(13,13.30568);
   hnumuCCinFV_stack_12->SetBinContent(14,17.26896);
   hnumuCCinFV_stack_12->SetBinContent(15,8.302684);
   hnumuCCinFV_stack_12->SetBinContent(16,6.747329);
   hnumuCCinFV_stack_12->SetBinContent(17,8.30279);
   hnumuCCinFV_stack_12->SetBinContent(18,8.728318);
   hnumuCCinFV_stack_12->SetBinContent(19,7.507898);
   hnumuCCinFV_stack_12->SetBinContent(20,5.221615);
   hnumuCCinFV_stack_12->SetBinContent(21,5.550152);
   hnumuCCinFV_stack_12->SetBinContent(22,5.249917);
   hnumuCCinFV_stack_12->SetBinContent(23,8.162733);
   hnumuCCinFV_stack_12->SetBinContent(24,11.1566);
   hnumuCCinFV_stack_12->SetBinError(1,1.8762);
   hnumuCCinFV_stack_12->SetBinError(2,1.828734);
   hnumuCCinFV_stack_12->SetBinError(3,1.362106);
   hnumuCCinFV_stack_12->SetBinError(4,1.399635);
   hnumuCCinFV_stack_12->SetBinError(5,0.9395358);
   hnumuCCinFV_stack_12->SetBinError(6,1.313935);
   hnumuCCinFV_stack_12->SetBinError(7,2.367902);
   hnumuCCinFV_stack_12->SetBinError(8,1.767811);
   hnumuCCinFV_stack_12->SetBinError(9,1.461451);
   hnumuCCinFV_stack_12->SetBinError(10,2.082338);
   hnumuCCinFV_stack_12->SetBinError(11,2.346384);
   hnumuCCinFV_stack_12->SetBinError(12,2.821026);
   hnumuCCinFV_stack_12->SetBinError(13,1.922805);
   hnumuCCinFV_stack_12->SetBinError(14,2.550167);
   hnumuCCinFV_stack_12->SetBinError(15,1.503732);
   hnumuCCinFV_stack_12->SetBinError(16,1.323854);
   hnumuCCinFV_stack_12->SetBinError(17,1.580647);
   hnumuCCinFV_stack_12->SetBinError(18,1.932705);
   hnumuCCinFV_stack_12->SetBinError(19,1.350539);
   hnumuCCinFV_stack_12->SetBinError(20,1.201849);
   hnumuCCinFV_stack_12->SetBinError(21,1.34123);
   hnumuCCinFV_stack_12->SetBinError(22,1.17107);
   hnumuCCinFV_stack_12->SetBinError(23,1.448278);
   hnumuCCinFV_stack_12->SetBinError(24,1.790386);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,1.957977);
   hnueCCinFV_stack_13->SetBinContent(9,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(10,0.5654633);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(13,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(14,1.326489);
   hnueCCinFV_stack_13->SetBinContent(15,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(20,0.8076656);
   hnueCCinFV_stack_13->SetBinContent(22,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(23,1.354146);
   hnueCCinFV_stack_13->SetBinContent(24,1.136579);
   hnueCCinFV_stack_13->SetBinError(2,0.3654046);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,1.593848);
   hnueCCinFV_stack_13->SetBinError(9,0.4814682);
   hnueCCinFV_stack_13->SetBinError(10,0.4080128);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4494399);
   hnueCCinFV_stack_13->SetBinError(13,0.1529246);
   hnueCCinFV_stack_13->SetBinError(14,0.6322281);
   hnueCCinFV_stack_13->SetBinError(15,0.3025491);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2463303);
   hnueCCinFV_stack_13->SetBinError(20,0.4043286);
   hnueCCinFV_stack_13->SetBinError(22,0.2331833);
   hnueCCinFV_stack_13->SetBinError(23,1.174028);
   hnueCCinFV_stack_13->SetBinError(24,0.7935128);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__8->SetBinContent(1,80.7636);
   hmcerror__8->SetBinContent(2,71.42683);
   hmcerror__8->SetBinContent(3,66.64981);
   hmcerror__8->SetBinContent(4,72.56898);
   hmcerror__8->SetBinContent(5,52.27649);
   hmcerror__8->SetBinContent(6,63.97507);
   hmcerror__8->SetBinContent(7,67.38715);
   hmcerror__8->SetBinContent(8,61.19928);
   hmcerror__8->SetBinContent(9,64.01665);
   hmcerror__8->SetBinContent(10,61.04067);
   hmcerror__8->SetBinContent(11,69.98507);
   hmcerror__8->SetBinContent(12,70.4543);
   hmcerror__8->SetBinContent(13,71.37763);
   hmcerror__8->SetBinContent(14,75.13573);
   hmcerror__8->SetBinContent(15,74.09094);
   hmcerror__8->SetBinContent(16,61.75465);
   hmcerror__8->SetBinContent(17,75.58153);
   hmcerror__8->SetBinContent(18,66.15115);
   hmcerror__8->SetBinContent(19,68.36921);
   hmcerror__8->SetBinContent(20,64.61414);
   hmcerror__8->SetBinContent(21,72.84236);
   hmcerror__8->SetBinContent(22,60.25664);
   hmcerror__8->SetBinContent(23,68.42712);
   hmcerror__8->SetBinContent(24,74.4483);
   hmcerror__8->SetBinError(1,24.71317);
   hmcerror__8->SetBinError(2,23.05764);
   hmcerror__8->SetBinError(3,22.79307);
   hmcerror__8->SetBinError(4,31.02585);
   hmcerror__8->SetBinError(5,19.43879);
   hmcerror__8->SetBinError(6,20.72777);
   hmcerror__8->SetBinError(7,20.00974);
   hmcerror__8->SetBinError(8,20.50089);
   hmcerror__8->SetBinError(9,19.98705);
   hmcerror__8->SetBinError(10,26.04612);
   hmcerror__8->SetBinError(11,29.28809);
   hmcerror__8->SetBinError(12,30.10518);
   hmcerror__8->SetBinError(13,30.2109);
   hmcerror__8->SetBinError(14,34.99558);
   hmcerror__8->SetBinError(15,25.01769);
   hmcerror__8->SetBinError(16,24.57921);
   hmcerror__8->SetBinError(17,21.53281);
   hmcerror__8->SetBinError(18,24.11982);
   hmcerror__8->SetBinError(19,20.67954);
   hmcerror__8->SetBinError(20,19.38154);
   hmcerror__8->SetBinError(21,22.24644);
   hmcerror__8->SetBinError(22,19.3829);
   hmcerror__8->SetBinError(23,20.8208);
   hmcerror__8->SetBinError(24,26.00818);
   hmcerror__8->SetBinError(25,0.3895343);
   hmcerror__8->SetEntries(1602.903);

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
   
   Double_t _fx3009[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3009[24] = {
   68,
   68,
   53,
   50,
   58,
   62,
   61,
   53,
   51,
   62,
   67,
   67,
   80,
   58,
   70,
   63,
   60,
   61,
   57,
   58,
   65,
   51,
   61,
   66};
   Double_t _felx3009[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3009[24] = {
   8.3726,
   8.3726,
   7.4105,
   7.2025,
   7.7446,
   8.0018,
   7.9383,
   7.4105,
   7.2725,
   8.0018,
   8.3119,
   8.3119,
   9.0683,
   7.7446,
   8.4925,
   8.0648,
   7.8743,
   7.9383,
   7.679,
   7.7446,
   8.1893,
   7.2725,
   7.9383,
   8.2509};
   Double_t _fehx3009[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3009[24] = {
   8.1701,
   8.1701,
   7.2068,
   6.9985,
   7.5415,
   7.7989,
   7.7354,
   7.2068,
   7.0686,
   7.7989,
   8.1094,
   8.1094,
   8.8665,
   7.5415,
   8.2902,
   7.862,
   7.6713,
   7.7354,
   7.4757,
   7.5415,
   7.9866,
   7.0686,
   7.7354,
   8.0483};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-3.78,3.78);
   Graph_Graph3009->SetMinimum(38.1906);
   Graph_Graph3009->SetMaximum(93.4734);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 237.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 325.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

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
   
   Double_t _fx3010[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3010[24] = {
   0.3059939,
   0.3228148,
   0.3419825,
   0.4275359,
   0.3718457,
   0.3239976,
   0.2969371,
   0.3349859,
   0.3122163,
   0.4267011,
   0.4184905,
   0.4273008,
   0.4232545,
   0.4657648,
   0.3376619,
   0.398014,
   0.2848952,
   0.3646168,
   0.3024687,
   0.2999582,
   0.3054052,
   0.3216724,
   0.3042771,
   0.3493455};
   Double_t _fehx3010[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3010[24] = {
   0.3059939,
   0.3228148,
   0.3419825,
   0.4275359,
   0.3718457,
   0.3239976,
   0.2969371,
   0.3349859,
   0.3122163,
   0.4267011,
   0.4184905,
   0.4273008,
   0.4232545,
   0.4657648,
   0.3376619,
   0.398014,
   0.2848952,
   0.3646168,
   0.3024687,
   0.2999582,
   0.3054052,
   0.3216724,
   0.3042771,
   0.3493455};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
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
   
   Double_t _fx3011[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3011[24] = {
   0.1906703,
   0.21187,
   0.221085,
   0.1959542,
   0.2169013,
   0.1909092,
   0.1782913,
   0.2001279,
   0.1970242,
   0.2033854,
   0.1952906,
   0.211452,
   0.1963543,
   0.2061048,
   0.1993598,
   0.2070909,
   0.1880906,
   0.1907391,
   0.1755036,
   0.177514,
   0.1889904,
   0.211212,
   0.2073643,
   0.2026985};
   Double_t _fehx3011[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3011[24] = {
   0.1906703,
   0.21187,
   0.221085,
   0.1959542,
   0.2169013,
   0.1909092,
   0.1782913,
   0.2001279,
   0.1970242,
   0.2033854,
   0.1952906,
   0.211452,
   0.1963543,
   0.2061048,
   0.1993598,
   0.2070909,
   0.1880906,
   0.1907391,
   0.1755036,
   0.177514,
   0.1889904,
   0.211212,
   0.2073643,
   0.2026985};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   Double_t _fx3012[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3012[24] = {
   0.8419635,
   0.9520232,
   0.7952011,
   0.6889997,
   1.109485,
   0.9691275,
   0.9052171,
   0.8660233,
   0.7966677,
   1.015716,
   0.9573471,
   0.9509711,
   1.120799,
   0.7719364,
   0.9447849,
   1.020166,
   0.7938448,
   0.9221307,
   0.8337086,
   0.8976363,
   0.8923379,
   0.8463797,
   0.8914594,
   0.8865213};
   Double_t _felx3012[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3012[24] = {
   0.103668,
   0.1172193,
   0.1111856,
   0.0992504,
   0.1481469,
   0.1250769,
   0.1178014,
   0.121088,
   0.1136032,
   0.1310896,
   0.1187668,
   0.1179758,
   0.1270468,
   0.1030748,
   0.1146226,
   0.1305942,
   0.1041829,
   0.1200025,
   0.1123166,
   0.1198592,
   0.112425,
   0.1206921,
   0.116011,
   0.1108273};
   Double_t _fehx3012[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3012[24] = {
   0.1011607,
   0.1143842,
   0.1081293,
   0.09643928,
   0.1442618,
   0.1219053,
   0.1147904,
   0.1177596,
   0.1104181,
   0.1277656,
   0.1158733,
   0.1151016,
   0.1242196,
   0.1003717,
   0.1118922,
   0.1273103,
   0.101497,
   0.1169352,
   0.1093431,
   0.1167159,
   0.1096422,
   0.1173082,
   0.1130458,
   0.1081059};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-3.78,3.78);
   Graph_Graph3012->SetMinimum(0.5233495);
   Graph_Graph3012->SetMaximum(1.320147);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
