#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 23:09:36 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-0.4846154,-3.036097,3.553846,335.7284);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__19->SetBinContent(1,25.93336);
   hmc__19->SetBinContent(2,66.94727);
   hmc__19->SetBinContent(3,95.75613);
   hmc__19->SetBinContent(4,127.6502);
   hmc__19->SetBinContent(5,139.7411);
   hmc__19->SetBinContent(6,151.8049);
   hmc__19->SetBinContent(7,144.359);
   hmc__19->SetBinContent(8,149.2231);
   hmc__19->SetBinContent(9,149.1597);
   hmc__19->SetBinContent(10,133.0375);
   hmc__19->SetBinContent(11,131.6233);
   hmc__19->SetBinContent(12,119.9537);
   hmc__19->SetBinContent(13,132.4224);
   hmc__19->SetBinContent(14,103.3114);
   hmc__19->SetBinContent(15,116.8787);
   hmc__19->SetBinContent(16,99.42107);
   hmc__19->SetBinContent(17,85.17301);
   hmc__19->SetBinContent(18,73.76257);
   hmc__19->SetBinContent(19,80.15191);
   hmc__19->SetBinContent(20,71.576);
   hmc__19->SetBinContent(21,65.18698);
   hmc__19->SetBinContent(22,50.30629);
   hmc__19->SetBinContent(23,42.58144);
   hmc__19->SetBinContent(24,24.92642);
   hmc__19->SetBinContent(25,8.169359);
   hmc__19->SetBinError(1,14.49812);
   hmc__19->SetBinError(2,24.15431);
   hmc__19->SetBinError(3,36.60472);
   hmc__19->SetBinError(4,42.60247);
   hmc__19->SetBinError(5,48.35426);
   hmc__19->SetBinError(6,58.7169);
   hmc__19->SetBinError(7,57.67909);
   hmc__19->SetBinError(8,57.60238);
   hmc__19->SetBinError(9,56.10931);
   hmc__19->SetBinError(10,54.43896);
   hmc__19->SetBinError(11,57.25088);
   hmc__19->SetBinError(12,50.11668);
   hmc__19->SetBinError(13,55.61617);
   hmc__19->SetBinError(14,45.78128);
   hmc__19->SetBinError(15,40.4129);
   hmc__19->SetBinError(16,42.70122);
   hmc__19->SetBinError(17,34.19677);
   hmc__19->SetBinError(18,35.44815);
   hmc__19->SetBinError(19,33.81737);
   hmc__19->SetBinError(20,27.4577);
   hmc__19->SetBinError(21,26.24893);
   hmc__19->SetBinError(22,20.70809);
   hmc__19->SetBinError(23,15.33777);
   hmc__19->SetBinError(24,11.12595);
   hmc__19->SetBinError(25,4.928746);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-3.036097);
   hmc__19->SetMaximum(318.7902);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,3.15);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(159.3951);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.6443849);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,1.916058);
   hbadmatch_stack_1->SetBinContent(4,2.668422);
   hbadmatch_stack_1->SetBinContent(5,1.217677);
   hbadmatch_stack_1->SetBinContent(6,3.155152);
   hbadmatch_stack_1->SetBinContent(7,2.212901);
   hbadmatch_stack_1->SetBinContent(8,3.890569);
   hbadmatch_stack_1->SetBinContent(9,4.35351);
   hbadmatch_stack_1->SetBinContent(10,4.399539);
   hbadmatch_stack_1->SetBinContent(11,4.096414);
   hbadmatch_stack_1->SetBinContent(12,3.759992);
   hbadmatch_stack_1->SetBinContent(13,3.2211);
   hbadmatch_stack_1->SetBinContent(14,0.7156984);
   hbadmatch_stack_1->SetBinContent(15,3.216428);
   hbadmatch_stack_1->SetBinContent(16,4.840174);
   hbadmatch_stack_1->SetBinContent(17,1.684657);
   hbadmatch_stack_1->SetBinContent(18,0.5484381);
   hbadmatch_stack_1->SetBinContent(19,1.008647);
   hbadmatch_stack_1->SetBinContent(20,2.236182);
   hbadmatch_stack_1->SetBinContent(21,1.415393);
   hbadmatch_stack_1->SetBinContent(22,1.651803);
   hbadmatch_stack_1->SetBinContent(23,0.9968908);
   hbadmatch_stack_1->SetBinContent(24,0.785171);
   hbadmatch_stack_1->SetBinError(1,0.6443849);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.9153516);
   hbadmatch_stack_1->SetBinError(4,0.8433864);
   hbadmatch_stack_1->SetBinError(5,0.4984173);
   hbadmatch_stack_1->SetBinError(6,0.9835873);
   hbadmatch_stack_1->SetBinError(7,0.7165919);
   hbadmatch_stack_1->SetBinError(8,0.9981886);
   hbadmatch_stack_1->SetBinError(9,1.072551);
   hbadmatch_stack_1->SetBinError(10,1.555775);
   hbadmatch_stack_1->SetBinError(11,1.100896);
   hbadmatch_stack_1->SetBinError(12,0.9379522);
   hbadmatch_stack_1->SetBinError(13,0.9330986);
   hbadmatch_stack_1->SetBinError(14,0.4933217);
   hbadmatch_stack_1->SetBinError(15,1.080991);
   hbadmatch_stack_1->SetBinError(16,2.150316);
   hbadmatch_stack_1->SetBinError(17,0.6784344);
   hbadmatch_stack_1->SetBinError(18,0.3290715);
   hbadmatch_stack_1->SetBinError(19,0.4688909);
   hbadmatch_stack_1->SetBinError(20,0.7430991);
   hbadmatch_stack_1->SetBinError(21,0.5643394);
   hbadmatch_stack_1->SetBinError(22,0.6732142);
   hbadmatch_stack_1->SetBinError(23,0.4919793);
   hbadmatch_stack_1->SetBinError(24,0.3925882);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,3.704052);
   hext_stack_2->SetBinContent(2,4.587862);
   hext_stack_2->SetBinContent(3,4.773807);
   hext_stack_2->SetBinContent(4,8.858506);
   hext_stack_2->SetBinContent(5,6.254569);
   hext_stack_2->SetBinContent(6,7.930035);
   hext_stack_2->SetBinContent(7,7.862194);
   hext_stack_2->SetBinContent(8,9.779857);
   hext_stack_2->SetBinContent(9,20.2504);
   hext_stack_2->SetBinContent(10,5.84797);
   hext_stack_2->SetBinContent(11,8.11157);
   hext_stack_2->SetBinContent(12,6.395793);
   hext_stack_2->SetBinContent(13,14.53489);
   hext_stack_2->SetBinContent(14,6.795211);
   hext_stack_2->SetBinContent(15,16.75541);
   hext_stack_2->SetBinContent(16,6.489584);
   hext_stack_2->SetBinContent(17,9.45105);
   hext_stack_2->SetBinContent(18,4.296596);
   hext_stack_2->SetBinContent(19,9.194493);
   hext_stack_2->SetBinContent(20,6.468042);
   hext_stack_2->SetBinContent(21,4.378797);
   hext_stack_2->SetBinContent(22,4.04281);
   hext_stack_2->SetBinContent(23,7.553737);
   hext_stack_2->SetBinContent(24,3.297453);
   hext_stack_2->SetBinContent(25,0.8131978);
   hext_stack_2->SetBinError(1,1.443106);
   hext_stack_2->SetBinError(2,1.593539);
   hext_stack_2->SetBinError(3,1.433855);
   hext_stack_2->SetBinError(4,2.184559);
   hext_stack_2->SetBinError(5,1.526359);
   hext_stack_2->SetBinError(6,1.928947);
   hext_stack_2->SetBinError(7,1.805088);
   hext_stack_2->SetBinError(8,2.166691);
   hext_stack_2->SetBinError(9,3.24508);
   hext_stack_2->SetBinError(10,1.471207);
   hext_stack_2->SetBinError(11,1.761331);
   hext_stack_2->SetBinError(12,1.606894);
   hext_stack_2->SetBinError(13,2.649108);
   hext_stack_2->SetBinError(14,1.717158);
   hext_stack_2->SetBinError(15,3.027015);
   hext_stack_2->SetBinError(16,1.605029);
   hext_stack_2->SetBinError(17,2.110497);
   hext_stack_2->SetBinError(18,1.328326);
   hext_stack_2->SetBinError(19,2.193503);
   hext_stack_2->SetBinError(20,1.783178);
   hext_stack_2->SetBinError(21,1.350755);
   hext_stack_2->SetBinError(22,1.336183);
   hext_stack_2->SetBinError(23,2.133674);
   hext_stack_2->SetBinError(24,1.384641);
   hext_stack_2->SetBinError(25,0.5750177);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.4950385);
   hdirt_stack_3->SetBinContent(6,1.180849);
   hdirt_stack_3->SetBinContent(7,0.7318007);
   hdirt_stack_3->SetBinContent(8,1.149204);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.4377912);
   hdirt_stack_3->SetBinContent(11,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.4377912);
   hdirt_stack_3->SetBinContent(13,0.1586307);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.7680599);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.6951543);
   hdirt_stack_3->SetBinContent(18,1.018286);
   hdirt_stack_3->SetBinContent(19,0.1651799);
   hdirt_stack_3->SetBinContent(20,1.338784);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.2933304);
   hdirt_stack_3->SetBinError(6,0.5410205);
   hdirt_stack_3->SetBinError(7,0.3750178);
   hdirt_stack_3->SetBinError(8,0.9557142);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3095651);
   hdirt_stack_3->SetBinError(11,0.458477);
   hdirt_stack_3->SetBinError(12,0.3095651);
   hdirt_stack_3->SetBinError(13,0.1586307);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4586476);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.4258516);
   hdirt_stack_3->SetBinError(18,0.5435889);
   hdirt_stack_3->SetBinError(19,0.1651799);
   hdirt_stack_3->SetBinError(20,0.6400497);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(24,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,0.854068);
   houtFV_stack_4->SetBinContent(2,1.711403);
   houtFV_stack_4->SetBinContent(3,2.354481);
   houtFV_stack_4->SetBinContent(4,4.775191);
   houtFV_stack_4->SetBinContent(5,7.051543);
   houtFV_stack_4->SetBinContent(6,6.904178);
   houtFV_stack_4->SetBinContent(7,4.912362);
   houtFV_stack_4->SetBinContent(8,3.721507);
   houtFV_stack_4->SetBinContent(9,2.859619);
   houtFV_stack_4->SetBinContent(10,5.005902);
   houtFV_stack_4->SetBinContent(11,3.563928);
   houtFV_stack_4->SetBinContent(12,3.36059);
   houtFV_stack_4->SetBinContent(13,4.505217);
   houtFV_stack_4->SetBinContent(14,3.991834);
   houtFV_stack_4->SetBinContent(15,2.889025);
   houtFV_stack_4->SetBinContent(16,3.102438);
   houtFV_stack_4->SetBinContent(17,3.381101);
   houtFV_stack_4->SetBinContent(18,4.424102);
   houtFV_stack_4->SetBinContent(19,4.737614);
   houtFV_stack_4->SetBinContent(20,2.848951);
   houtFV_stack_4->SetBinContent(21,2.915918);
   houtFV_stack_4->SetBinContent(22,1.934232);
   houtFV_stack_4->SetBinContent(23,1.55508);
   houtFV_stack_4->SetBinContent(24,2.758775);
   houtFV_stack_4->SetBinContent(25,0.7032818);
   houtFV_stack_4->SetBinError(1,0.4553824);
   houtFV_stack_4->SetBinError(2,0.6270374);
   houtFV_stack_4->SetBinError(3,0.724124);
   houtFV_stack_4->SetBinError(4,1.011185);
   houtFV_stack_4->SetBinError(5,1.352271);
   houtFV_stack_4->SetBinError(6,1.340789);
   houtFV_stack_4->SetBinError(7,1.110488);
   houtFV_stack_4->SetBinError(8,0.911717);
   houtFV_stack_4->SetBinError(9,0.7678826);
   houtFV_stack_4->SetBinError(10,1.087485);
   houtFV_stack_4->SetBinError(11,0.9478878);
   houtFV_stack_4->SetBinError(12,0.8209526);
   houtFV_stack_4->SetBinError(13,1.095189);
   houtFV_stack_4->SetBinError(14,0.9949419);
   houtFV_stack_4->SetBinError(15,0.7845188);
   houtFV_stack_4->SetBinError(16,0.8385278);
   houtFV_stack_4->SetBinError(17,0.9238739);
   houtFV_stack_4->SetBinError(18,1.069866);
   houtFV_stack_4->SetBinError(19,1.034596);
   houtFV_stack_4->SetBinError(20,0.8286554);
   houtFV_stack_4->SetBinError(21,0.8071282);
   houtFV_stack_4->SetBinError(22,0.6586828);
   houtFV_stack_4->SetBinError(23,0.6229888);
   houtFV_stack_4->SetBinError(24,0.9052189);
   houtFV_stack_4->SetBinError(25,0.4317693);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1039642);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.140136);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4013107);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.7450348);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3761742);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1882369);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5580943);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3678806);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1497466);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.398983);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1961954);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1554321);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.06518023);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02035842);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3101109);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05705851);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1023316);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1451556);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2723693);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1892554);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.08140397);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2548985);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.190021);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086856);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1937685);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1362147);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1299965);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04656421);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.01482777);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2583256);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2294473);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.476476);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7582097);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.59865);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.07887);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9017457);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5167229);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5144038);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5842871);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8037944);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6158954);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3871181);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5672497);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2112919);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7587999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1815644);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3783514);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2118272);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2792808);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3854469);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4085589);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05019341);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.09164184);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2128576);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2674205);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2285949);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3206985);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3727235);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1245396);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1927675);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1798214);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.232769);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.173431);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1848239);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2032346);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05989354);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3050854);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07815319);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1750485);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1058815);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1068692);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1844381);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1758562);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0290913);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01071203);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.2472);
   hNCpi0inFVres_stack_7->SetBinContent(2,24.58585);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.77234);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.37561);
   hNCpi0inFVres_stack_7->SetBinContent(5,53.10808);
   hNCpi0inFVres_stack_7->SetBinContent(6,56.78563);
   hNCpi0inFVres_stack_7->SetBinContent(7,62.43711);
   hNCpi0inFVres_stack_7->SetBinContent(8,61.39599);
   hNCpi0inFVres_stack_7->SetBinContent(9,55.56037);
   hNCpi0inFVres_stack_7->SetBinContent(10,56.83047);
   hNCpi0inFVres_stack_7->SetBinContent(11,54.30007);
   hNCpi0inFVres_stack_7->SetBinContent(12,48.02752);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.98075);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.22503);
   hNCpi0inFVres_stack_7->SetBinContent(15,39.28292);
   hNCpi0inFVres_stack_7->SetBinContent(16,35.8956);
   hNCpi0inFVres_stack_7->SetBinContent(17,29.66352);
   hNCpi0inFVres_stack_7->SetBinContent(18,30.12614);
   hNCpi0inFVres_stack_7->SetBinContent(19,28.03799);
   hNCpi0inFVres_stack_7->SetBinContent(20,26.72553);
   hNCpi0inFVres_stack_7->SetBinContent(21,24.76935);
   hNCpi0inFVres_stack_7->SetBinContent(22,19.30239);
   hNCpi0inFVres_stack_7->SetBinContent(23,10.80132);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.481491);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.424249);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9524834);
   hNCpi0inFVres_stack_7->SetBinError(2,1.586566);
   hNCpi0inFVres_stack_7->SetBinError(3,2.106322);
   hNCpi0inFVres_stack_7->SetBinError(4,2.314959);
   hNCpi0inFVres_stack_7->SetBinError(5,2.13811);
   hNCpi0inFVres_stack_7->SetBinError(6,2.320136);
   hNCpi0inFVres_stack_7->SetBinError(7,2.534478);
   hNCpi0inFVres_stack_7->SetBinError(8,2.44128);
   hNCpi0inFVres_stack_7->SetBinError(9,2.103656);
   hNCpi0inFVres_stack_7->SetBinError(10,2.285669);
   hNCpi0inFVres_stack_7->SetBinError(11,2.22002);
   hNCpi0inFVres_stack_7->SetBinError(12,1.947843);
   hNCpi0inFVres_stack_7->SetBinError(13,2.067169);
   hNCpi0inFVres_stack_7->SetBinError(14,1.899686);
   hNCpi0inFVres_stack_7->SetBinError(15,1.935586);
   hNCpi0inFVres_stack_7->SetBinError(16,1.795038);
   hNCpi0inFVres_stack_7->SetBinError(17,1.473606);
   hNCpi0inFVres_stack_7->SetBinError(18,1.660763);
   hNCpi0inFVres_stack_7->SetBinError(19,1.63606);
   hNCpi0inFVres_stack_7->SetBinError(20,1.609569);
   hNCpi0inFVres_stack_7->SetBinError(21,1.563969);
   hNCpi0inFVres_stack_7->SetBinError(22,1.297494);
   hNCpi0inFVres_stack_7->SetBinError(23,1.044245);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8054926);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6902066);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.801417);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.722966);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.37348);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.64353);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.15535);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.28901);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.03385);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.57759);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.27362);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.43335);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.825675);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.32378);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.902177);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.331369);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.860052);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.56331);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.94614);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.538082);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.189002);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.431536);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.600742);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.085455);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.414002);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.722386);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5796953);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7217154);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9451277);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.354401);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.141121);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.359444);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.579648);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.450297);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.145978);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.249423);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9961078);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7177612);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.045755);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.796757);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9895558);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8747151);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7986031);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4989627);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6316618);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6637472);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7518747);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7300209);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.761009);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4340593);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.430769);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1409338);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03683791);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1352181);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.08444149);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02952655);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1839615);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02604834);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1116459);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.06827068);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02165026);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1352255);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1277091);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,3.608485);
   hCCpi0inFV_stack_10->SetBinContent(2,10.55514);
   hCCpi0inFV_stack_10->SetBinContent(3,12.98974);
   hCCpi0inFV_stack_10->SetBinContent(4,21.03909);
   hCCpi0inFV_stack_10->SetBinContent(5,23.25981);
   hCCpi0inFV_stack_10->SetBinContent(6,26.58509);
   hCCpi0inFV_stack_10->SetBinContent(7,21.19109);
   hCCpi0inFV_stack_10->SetBinContent(8,27.20124);
   hCCpi0inFV_stack_10->SetBinContent(9,25.06168);
   hCCpi0inFV_stack_10->SetBinContent(10,21.33993);
   hCCpi0inFV_stack_10->SetBinContent(11,20.94923);
   hCCpi0inFV_stack_10->SetBinContent(12,17.22073);
   hCCpi0inFV_stack_10->SetBinContent(13,14.69223);
   hCCpi0inFV_stack_10->SetBinContent(14,18.11556);
   hCCpi0inFV_stack_10->SetBinContent(15,19.71506);
   hCCpi0inFV_stack_10->SetBinContent(16,15.45572);
   hCCpi0inFV_stack_10->SetBinContent(17,16.78374);
   hCCpi0inFV_stack_10->SetBinContent(18,12.25342);
   hCCpi0inFV_stack_10->SetBinContent(19,15.57845);
   hCCpi0inFV_stack_10->SetBinContent(20,10.986);
   hCCpi0inFV_stack_10->SetBinContent(21,9.875685);
   hCCpi0inFV_stack_10->SetBinContent(22,7.909325);
   hCCpi0inFV_stack_10->SetBinContent(23,6.498742);
   hCCpi0inFV_stack_10->SetBinContent(24,3.845522);
   hCCpi0inFV_stack_10->SetBinContent(25,1.073786);
   hCCpi0inFV_stack_10->SetBinError(1,0.929283);
   hCCpi0inFV_stack_10->SetBinError(2,1.630449);
   hCCpi0inFV_stack_10->SetBinError(3,1.802712);
   hCCpi0inFV_stack_10->SetBinError(4,2.252263);
   hCCpi0inFV_stack_10->SetBinError(5,2.476863);
   hCCpi0inFV_stack_10->SetBinError(6,2.556535);
   hCCpi0inFV_stack_10->SetBinError(7,2.283467);
   hCCpi0inFV_stack_10->SetBinError(8,2.647139);
   hCCpi0inFV_stack_10->SetBinError(9,2.513472);
   hCCpi0inFV_stack_10->SetBinError(10,2.360032);
   hCCpi0inFV_stack_10->SetBinError(11,2.300724);
   hCCpi0inFV_stack_10->SetBinError(12,2.088779);
   hCCpi0inFV_stack_10->SetBinError(13,1.886895);
   hCCpi0inFV_stack_10->SetBinError(14,2.10746);
   hCCpi0inFV_stack_10->SetBinError(15,2.246592);
   hCCpi0inFV_stack_10->SetBinError(16,1.990098);
   hCCpi0inFV_stack_10->SetBinError(17,2.019481);
   hCCpi0inFV_stack_10->SetBinError(18,1.760385);
   hCCpi0inFV_stack_10->SetBinError(19,2.026784);
   hCCpi0inFV_stack_10->SetBinError(20,1.659103);
   hCCpi0inFV_stack_10->SetBinError(21,1.533176);
   hCCpi0inFV_stack_10->SetBinError(22,1.428501);
   hCCpi0inFV_stack_10->SetBinError(23,1.271764);
   hCCpi0inFV_stack_10->SetBinError(24,1.072516);
   hCCpi0inFV_stack_10->SetBinError(25,0.5557297);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.527379);
   hNCinFV_stack_11->SetBinContent(2,8.118504);
   hNCinFV_stack_11->SetBinContent(3,11.95716);
   hNCinFV_stack_11->SetBinContent(4,14.41629);
   hNCinFV_stack_11->SetBinContent(5,16.28108);
   hNCinFV_stack_11->SetBinContent(6,15.57974);
   hNCinFV_stack_11->SetBinContent(7,14.93984);
   hNCinFV_stack_11->SetBinContent(8,11.23433);
   hNCinFV_stack_11->SetBinContent(9,13.21152);
   hNCinFV_stack_11->SetBinContent(10,13.51115);
   hNCinFV_stack_11->SetBinContent(11,13.63742);
   hNCinFV_stack_11->SetBinContent(12,10.1508);
   hNCinFV_stack_11->SetBinContent(13,15.53966);
   hNCinFV_stack_11->SetBinContent(14,9.20956);
   hNCinFV_stack_11->SetBinContent(15,13.01615);
   hNCinFV_stack_11->SetBinContent(16,11.10693);
   hNCinFV_stack_11->SetBinContent(17,10.87049);
   hNCinFV_stack_11->SetBinContent(18,7.257699);
   hNCinFV_stack_11->SetBinContent(19,8.742689);
   hNCinFV_stack_11->SetBinContent(20,7.521547);
   hNCinFV_stack_11->SetBinContent(21,6.170836);
   hNCinFV_stack_11->SetBinContent(22,5.970703);
   hNCinFV_stack_11->SetBinContent(23,3.595863);
   hNCinFV_stack_11->SetBinContent(24,2.35404);
   hNCinFV_stack_11->SetBinContent(25,0.7111017);
   hNCinFV_stack_11->SetBinError(1,1.024046);
   hNCinFV_stack_11->SetBinError(2,1.729608);
   hNCinFV_stack_11->SetBinError(3,1.983708);
   hNCinFV_stack_11->SetBinError(4,2.086789);
   hNCinFV_stack_11->SetBinError(5,2.247938);
   hNCinFV_stack_11->SetBinError(6,2.308421);
   hNCinFV_stack_11->SetBinError(7,2.368696);
   hNCinFV_stack_11->SetBinError(8,1.785633);
   hNCinFV_stack_11->SetBinError(9,2.058484);
   hNCinFV_stack_11->SetBinError(10,2.035819);
   hNCinFV_stack_11->SetBinError(11,1.90932);
   hNCinFV_stack_11->SetBinError(12,1.609504);
   hNCinFV_stack_11->SetBinError(13,2.044515);
   hNCinFV_stack_11->SetBinError(14,1.561865);
   hNCinFV_stack_11->SetBinError(15,2.058206);
   hNCinFV_stack_11->SetBinError(16,1.789612);
   hNCinFV_stack_11->SetBinError(17,1.753394);
   hNCinFV_stack_11->SetBinError(18,1.637144);
   hNCinFV_stack_11->SetBinError(19,1.709083);
   hNCinFV_stack_11->SetBinError(20,1.461343);
   hNCinFV_stack_11->SetBinError(21,1.354092);
   hNCinFV_stack_11->SetBinError(22,1.227165);
   hNCinFV_stack_11->SetBinError(23,1.015527);
   hNCinFV_stack_11->SetBinError(24,0.798636);
   hNCinFV_stack_11->SetBinError(25,0.3615537);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.357362);
   hnumuCCinFV_stack_12->SetBinContent(2,7.352953);
   hnumuCCinFV_stack_12->SetBinContent(3,9.551329);
   hnumuCCinFV_stack_12->SetBinContent(4,13.5247);
   hnumuCCinFV_stack_12->SetBinContent(5,15.85896);
   hnumuCCinFV_stack_12->SetBinContent(6,15.75895);
   hnumuCCinFV_stack_12->SetBinContent(7,11.97303);
   hnumuCCinFV_stack_12->SetBinContent(8,17.47433);
   hnumuCCinFV_stack_12->SetBinContent(9,13.65152);
   hnumuCCinFV_stack_12->SetBinContent(10,12.45887);
   hnumuCCinFV_stack_12->SetBinContent(11,16.93789);
   hnumuCCinFV_stack_12->SetBinContent(12,18.62408);
   hnumuCCinFV_stack_12->SetBinContent(13,22.21723);
   hnumuCCinFV_stack_12->SetBinContent(14,11.8564);
   hnumuCCinFV_stack_12->SetBinContent(15,11.5029);
   hnumuCCinFV_stack_12->SetBinContent(16,13.31446);
   hnumuCCinFV_stack_12->SetBinContent(17,8.110237);
   hnumuCCinFV_stack_12->SetBinContent(18,7.326757);
   hnumuCCinFV_stack_12->SetBinContent(19,7.001983);
   hnumuCCinFV_stack_12->SetBinContent(20,7.295723);
   hnumuCCinFV_stack_12->SetBinContent(21,8.617277);
   hnumuCCinFV_stack_12->SetBinContent(22,4.978432);
   hnumuCCinFV_stack_12->SetBinContent(23,8.272289);
   hnumuCCinFV_stack_12->SetBinContent(24,3.532794);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8361483);
   hnumuCCinFV_stack_12->SetBinError(1,0.7664399);
   hnumuCCinFV_stack_12->SetBinError(2,1.332635);
   hnumuCCinFV_stack_12->SetBinError(3,1.834915);
   hnumuCCinFV_stack_12->SetBinError(4,2.300455);
   hnumuCCinFV_stack_12->SetBinError(5,2.621358);
   hnumuCCinFV_stack_12->SetBinError(6,3.130081);
   hnumuCCinFV_stack_12->SetBinError(7,1.715909);
   hnumuCCinFV_stack_12->SetBinError(8,2.329586);
   hnumuCCinFV_stack_12->SetBinError(9,2.021961);
   hnumuCCinFV_stack_12->SetBinError(10,1.992116);
   hnumuCCinFV_stack_12->SetBinError(11,2.656839);
   hnumuCCinFV_stack_12->SetBinError(12,2.328017);
   hnumuCCinFV_stack_12->SetBinError(13,2.827187);
   hnumuCCinFV_stack_12->SetBinError(14,1.978955);
   hnumuCCinFV_stack_12->SetBinError(15,1.771476);
   hnumuCCinFV_stack_12->SetBinError(16,2.190919);
   hnumuCCinFV_stack_12->SetBinError(17,1.480823);
   hnumuCCinFV_stack_12->SetBinError(18,1.731477);
   hnumuCCinFV_stack_12->SetBinError(19,1.345808);
   hnumuCCinFV_stack_12->SetBinError(20,1.470284);
   hnumuCCinFV_stack_12->SetBinError(21,1.703835);
   hnumuCCinFV_stack_12->SetBinError(22,1.188956);
   hnumuCCinFV_stack_12->SetBinError(23,1.81226);
   hnumuCCinFV_stack_12->SetBinError(24,0.9383701);
   hnumuCCinFV_stack_12->SetBinError(25,0.4204524);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.04884);
   hnueCCinFV_stack_13->SetBinContent(2,1.747976);
   hnueCCinFV_stack_13->SetBinContent(3,0.9710591);
   hnueCCinFV_stack_13->SetBinContent(4,0.5663027);
   hnueCCinFV_stack_13->SetBinContent(5,1.065896);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(8,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(10,1.77042);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(13,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(14,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(15,0.4902699);
   hnueCCinFV_stack_13->SetBinContent(16,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(17,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(18,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(21,0.6905718);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.553806);
   hnueCCinFV_stack_13->SetBinError(2,0.6853088);
   hnueCCinFV_stack_13->SetBinError(3,0.5823682);
   hnueCCinFV_stack_13->SetBinError(4,0.4183803);
   hnueCCinFV_stack_13->SetBinError(5,0.4790028);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.3387718);
   hnueCCinFV_stack_13->SetBinError(8,0.5197486);
   hnueCCinFV_stack_13->SetBinError(10,0.6875145);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(13,0.2538659);
   hnueCCinFV_stack_13->SetBinError(14,0.438694);
   hnueCCinFV_stack_13->SetBinError(15,0.3469915);
   hnueCCinFV_stack_13->SetBinError(16,0.2770047);
   hnueCCinFV_stack_13->SetBinError(17,0.3401776);
   hnueCCinFV_stack_13->SetBinError(18,0.5946997);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(21,0.4008118);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__20->SetBinContent(1,25.93336);
   hmcerror__20->SetBinContent(2,66.94727);
   hmcerror__20->SetBinContent(3,95.75613);
   hmcerror__20->SetBinContent(4,127.6502);
   hmcerror__20->SetBinContent(5,139.7411);
   hmcerror__20->SetBinContent(6,151.8049);
   hmcerror__20->SetBinContent(7,144.359);
   hmcerror__20->SetBinContent(8,149.2231);
   hmcerror__20->SetBinContent(9,149.1597);
   hmcerror__20->SetBinContent(10,133.0375);
   hmcerror__20->SetBinContent(11,131.6233);
   hmcerror__20->SetBinContent(12,119.9537);
   hmcerror__20->SetBinContent(13,132.4224);
   hmcerror__20->SetBinContent(14,103.3114);
   hmcerror__20->SetBinContent(15,116.8787);
   hmcerror__20->SetBinContent(16,99.42107);
   hmcerror__20->SetBinContent(17,85.17301);
   hmcerror__20->SetBinContent(18,73.76257);
   hmcerror__20->SetBinContent(19,80.15191);
   hmcerror__20->SetBinContent(20,71.576);
   hmcerror__20->SetBinContent(21,65.18698);
   hmcerror__20->SetBinContent(22,50.30629);
   hmcerror__20->SetBinContent(23,42.58144);
   hmcerror__20->SetBinContent(24,24.92642);
   hmcerror__20->SetBinContent(25,8.169359);
   hmcerror__20->SetBinError(1,14.49812);
   hmcerror__20->SetBinError(2,24.15431);
   hmcerror__20->SetBinError(3,36.60472);
   hmcerror__20->SetBinError(4,42.60247);
   hmcerror__20->SetBinError(5,48.35426);
   hmcerror__20->SetBinError(6,58.7169);
   hmcerror__20->SetBinError(7,57.67909);
   hmcerror__20->SetBinError(8,57.60238);
   hmcerror__20->SetBinError(9,56.10931);
   hmcerror__20->SetBinError(10,54.43896);
   hmcerror__20->SetBinError(11,57.25088);
   hmcerror__20->SetBinError(12,50.11668);
   hmcerror__20->SetBinError(13,55.61617);
   hmcerror__20->SetBinError(14,45.78128);
   hmcerror__20->SetBinError(15,40.4129);
   hmcerror__20->SetBinError(16,42.70122);
   hmcerror__20->SetBinError(17,34.19677);
   hmcerror__20->SetBinError(18,35.44815);
   hmcerror__20->SetBinError(19,33.81737);
   hmcerror__20->SetBinError(20,27.4577);
   hmcerror__20->SetBinError(21,26.24893);
   hmcerror__20->SetBinError(22,20.70809);
   hmcerror__20->SetBinError(23,15.33777);
   hmcerror__20->SetBinError(24,11.12595);
   hmcerror__20->SetBinError(25,4.928746);
   hmcerror__20->SetBinError(26,0.3895343);
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
   
   Double_t _fx3025[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3025[25] = {
   26,
   56,
   105,
   107,
   132,
   103,
   125,
   109,
   108,
   99,
   108,
   104,
   126,
   96,
   91,
   94,
   74,
   61,
   74,
   58,
   69,
   47,
   36,
   23,
   5};
   Double_t _felx3025[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3025[25] = {
   5.2453,
   7.6127,
   10.24695,
   10.34408,
   11.48913,
   10.14889,
   11.18034,
   10.44031,
   10.3923,
   10.0712,
   10.3923,
   10.19804,
   11.22497,
   9.9196,
   9.6617,
   9.8173,
   8.7275,
   7.9383,
   8.7275,
   7.7446,
   8.4327,
   6.9882,
   6.1381,
   4.9457,
   2.48995};
   Double_t _fehx3025[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3025[25] = {
   5.0358,
   7.4094,
   10.24695,
   10.34408,
   11.48913,
   10.14889,
   11.18034,
   10.44031,
   10.3923,
   9.87,
   10.3923,
   10.19804,
   11.22497,
   9.718,
   9.46,
   9.616,
   8.5253,
   7.7354,
   8.5253,
   7.5415,
   8.2304,
   6.7839,
   5.9318,
   4.7346,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(2.259045);
   Graph_Graph3025->SetMaximum(157.587);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  914.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3026[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3026[25] = {
   0.5590532,
   0.360796,
   0.3822702,
   0.3337437,
   0.3460276,
   0.386792,
   0.3995531,
   0.3860151,
   0.3761694,
   0.4092002,
   0.43496,
   0.4178002,
   0.4199906,
   0.4431386,
   0.3457679,
   0.4294987,
   0.4014977,
   0.4805709,
   0.421916,
   0.3836161,
   0.4026714,
   0.4116401,
   0.3601984,
   0.4463516,
   0.6033211};
   Double_t _fehx3026[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3026[25] = {
   0.5590532,
   0.360796,
   0.3822702,
   0.3337437,
   0.3460276,
   0.386792,
   0.3995531,
   0.3860151,
   0.3761694,
   0.4092002,
   0.43496,
   0.4178002,
   0.4199906,
   0.4431386,
   0.3457679,
   0.4294987,
   0.4014977,
   0.4805709,
   0.421916,
   0.3836161,
   0.4026714,
   0.4116401,
   0.3601984,
   0.4463516,
   0.6033211};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,3.465);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3027[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3027[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3027[25] = {
   0.2495757,
   0.2892705,
   0.3064851,
   0.292538,
   0.3091511,
   0.3250781,
   0.346849,
   0.3580861,
   0.3448484,
   0.3719279,
   0.3973361,
   0.3860391,
   0.3891603,
   0.3895435,
   0.3250602,
   0.3894733,
   0.3665413,
   0.3992362,
   0.3510018,
   0.3472875,
   0.3356915,
   0.3374103,
   0.2887502,
   0.2869222,
   0.3729817};
   Double_t _fehx3027[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3027[25] = {
   0.2495757,
   0.2892705,
   0.3064851,
   0.292538,
   0.3091511,
   0.3250781,
   0.346849,
   0.3580861,
   0.3448484,
   0.3719279,
   0.3973361,
   0.3860391,
   0.3891603,
   0.3895435,
   0.3250602,
   0.3894733,
   0.3665413,
   0.3992362,
   0.3510018,
   0.3472875,
   0.3356915,
   0.3374103,
   0.2887502,
   0.2869222,
   0.3729817};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,3.465);
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
   
   Double_t _fx3028[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3028[25] = {
   1.00257,
   0.8364792,
   1.096535,
   0.838228,
   0.9446043,
   0.6785027,
   0.8658968,
   0.7304498,
   0.7240562,
   0.7441512,
   0.8205234,
   0.8670012,
   0.9515007,
   0.9292293,
   0.778585,
   0.9454736,
   0.8688198,
   0.8269777,
   0.9232469,
   0.8103275,
   1.058494,
   0.9342767,
   0.8454387,
   0.9227158,
   0.6120431};
   Double_t _felx3028[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3028[25] = {
   0.2022608,
   0.1137119,
   0.1070109,
   0.08103456,
   0.08221725,
   0.06685485,
   0.07744816,
   0.0699644,
   0.06967234,
   0.07570198,
   0.0789549,
   0.08501646,
   0.08476642,
   0.09601649,
   0.08266434,
   0.09874466,
   0.1024679,
   0.1076196,
   0.108887,
   0.1082011,
   0.1293617,
   0.138913,
   0.1441496,
   0.198412,
   0.3047913};
   Double_t _fehx3028[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3028[25] = {
   0.1941824,
   0.1106752,
   0.1070109,
   0.08103456,
   0.08221725,
   0.06685485,
   0.07744816,
   0.0699644,
   0.06967234,
   0.07418962,
   0.0789549,
   0.08501646,
   0.08476642,
   0.09406511,
   0.08093862,
   0.09671994,
   0.1000939,
   0.1048689,
   0.1063643,
   0.1053635,
   0.1262583,
   0.1348519,
   0.1393048,
   0.1899431,
   0.2706014};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.2176223);
   Graph_Graph3028->SetMaximum(1.293176);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",25,0,3.15);

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
