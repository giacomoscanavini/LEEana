#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 13:51:03 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-4.119231,-1.654526,3.957692,182.9557);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__7->SetBinContent(1,76.17001);
   hmc__7->SetBinContent(2,66.65493);
   hmc__7->SetBinContent(3,70.03821);
   hmc__7->SetBinContent(4,69.3933);
   hmc__7->SetBinContent(5,66.04758);
   hmc__7->SetBinContent(6,74.06107);
   hmc__7->SetBinContent(7,72.7177);
   hmc__7->SetBinContent(8,60.88119);
   hmc__7->SetBinContent(9,65.70506);
   hmc__7->SetBinContent(10,65.28706);
   hmc__7->SetBinContent(11,76.15247);
   hmc__7->SetBinContent(12,67.335);
   hmc__7->SetBinContent(13,76.00847);
   hmc__7->SetBinContent(14,64.29692);
   hmc__7->SetBinContent(15,69.35525);
   hmc__7->SetBinContent(16,62.30911);
   hmc__7->SetBinContent(17,74.16782);
   hmc__7->SetBinContent(18,69.88478);
   hmc__7->SetBinContent(19,73.0509);
   hmc__7->SetBinContent(20,70.67157);
   hmc__7->SetBinContent(21,69.73238);
   hmc__7->SetBinContent(22,63.29234);
   hmc__7->SetBinContent(23,82.7263);
   hmc__7->SetBinContent(24,79.11607);
   hmc__7->SetBinError(1,26.84582);
   hmc__7->SetBinError(2,23.02445);
   hmc__7->SetBinError(3,21.70386);
   hmc__7->SetBinError(4,20.47986);
   hmc__7->SetBinError(5,18.09051);
   hmc__7->SetBinError(6,21.63677);
   hmc__7->SetBinError(7,27.56559);
   hmc__7->SetBinError(8,21.27329);
   hmc__7->SetBinError(9,22.45515);
   hmc__7->SetBinError(10,23.87397);
   hmc__7->SetBinError(11,21.00678);
   hmc__7->SetBinError(12,21.87684);
   hmc__7->SetBinError(13,28.35744);
   hmc__7->SetBinError(14,19.45649);
   hmc__7->SetBinError(15,23.40499);
   hmc__7->SetBinError(16,20.88418);
   hmc__7->SetBinError(17,22.97826);
   hmc__7->SetBinError(18,21.29951);
   hmc__7->SetBinError(19,23.65329);
   hmc__7->SetBinError(20,22.47921);
   hmc__7->SetBinError(21,27.09114);
   hmc__7->SetBinError(22,24.9461);
   hmc__7->SetBinError(23,31.54321);
   hmc__7->SetBinError(24,24.25034);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-1.654526);
   hmc__7->SetMaximum(173.7252);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,-3.15,3.15);
   hs3_stack_3->SetMinimum(-1.337066e-08);
   hs3_stack_3->SetMaximum(86.86262);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.382228);
   hbadmatch_stack_1->SetBinContent(2,3.255692);
   hbadmatch_stack_1->SetBinContent(3,3.572428);
   hbadmatch_stack_1->SetBinContent(4,2.097702);
   hbadmatch_stack_1->SetBinContent(5,2.671626);
   hbadmatch_stack_1->SetBinContent(6,3.705466);
   hbadmatch_stack_1->SetBinContent(7,2.056651);
   hbadmatch_stack_1->SetBinContent(8,1.413964);
   hbadmatch_stack_1->SetBinContent(9,3.038879);
   hbadmatch_stack_1->SetBinContent(10,2.248158);
   hbadmatch_stack_1->SetBinContent(11,1.469317);
   hbadmatch_stack_1->SetBinContent(12,1.825575);
   hbadmatch_stack_1->SetBinContent(13,2.81697);
   hbadmatch_stack_1->SetBinContent(14,3.156551);
   hbadmatch_stack_1->SetBinContent(15,1.651154);
   hbadmatch_stack_1->SetBinContent(16,1.908692);
   hbadmatch_stack_1->SetBinContent(17,1.819719);
   hbadmatch_stack_1->SetBinContent(18,3.286503);
   hbadmatch_stack_1->SetBinContent(19,2.266206);
   hbadmatch_stack_1->SetBinContent(20,2.493984);
   hbadmatch_stack_1->SetBinContent(21,2.001096);
   hbadmatch_stack_1->SetBinContent(22,1.123658);
   hbadmatch_stack_1->SetBinContent(23,1.857266);
   hbadmatch_stack_1->SetBinContent(24,2.339216);
   hbadmatch_stack_1->SetBinError(1,0.7821559);
   hbadmatch_stack_1->SetBinError(2,0.9808777);
   hbadmatch_stack_1->SetBinError(3,1.025094);
   hbadmatch_stack_1->SetBinError(4,0.7212914);
   hbadmatch_stack_1->SetBinError(5,0.8232789);
   hbadmatch_stack_1->SetBinError(6,1.034669);
   hbadmatch_stack_1->SetBinError(7,0.7110629);
   hbadmatch_stack_1->SetBinError(8,0.6515799);
   hbadmatch_stack_1->SetBinError(9,1.016809);
   hbadmatch_stack_1->SetBinError(10,1.174065);
   hbadmatch_stack_1->SetBinError(11,0.6316625);
   hbadmatch_stack_1->SetBinError(12,0.6098395);
   hbadmatch_stack_1->SetBinError(13,0.9071861);
   hbadmatch_stack_1->SetBinError(14,0.9401472);
   hbadmatch_stack_1->SetBinError(15,0.6934086);
   hbadmatch_stack_1->SetBinError(16,0.7070582);
   hbadmatch_stack_1->SetBinError(17,0.7675897);
   hbadmatch_stack_1->SetBinError(18,1.058837);
   hbadmatch_stack_1->SetBinError(19,0.7806033);
   hbadmatch_stack_1->SetBinError(20,0.7739788);
   hbadmatch_stack_1->SetBinError(21,0.775412);
   hbadmatch_stack_1->SetBinError(22,0.5188295);
   hbadmatch_stack_1->SetBinError(23,0.6799255);
   hbadmatch_stack_1->SetBinError(24,0.8089383);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.813981);
   hext_stack_2->SetBinContent(2,12.52067);
   hext_stack_2->SetBinContent(3,8.153461);
   hext_stack_2->SetBinContent(4,13.52699);
   hext_stack_2->SetBinContent(5,17.59733);
   hext_stack_2->SetBinContent(6,19.9316);
   hext_stack_2->SetBinContent(7,21.21483);
   hext_stack_2->SetBinContent(8,12.95322);
   hext_stack_2->SetBinContent(9,10.95776);
   hext_stack_2->SetBinContent(10,6.710238);
   hext_stack_2->SetBinContent(11,13.94676);
   hext_stack_2->SetBinContent(12,7.761223);
   hext_stack_2->SetBinContent(13,8.649442);
   hext_stack_2->SetBinContent(14,7.422464);
   hext_stack_2->SetBinContent(15,13.06572);
   hext_stack_2->SetBinContent(16,8.242843);
   hext_stack_2->SetBinContent(17,14.22208);
   hext_stack_2->SetBinContent(18,15.18369);
   hext_stack_2->SetBinContent(19,18.624);
   hext_stack_2->SetBinContent(20,12.61446);
   hext_stack_2->SetBinContent(21,8.414427);
   hext_stack_2->SetBinContent(22,5.904221);
   hext_stack_2->SetBinContent(23,11.87905);
   hext_stack_2->SetBinContent(24,11.27498);
   hext_stack_2->SetBinError(1,1.637484);
   hext_stack_2->SetBinError(2,2.433902);
   hext_stack_2->SetBinError(3,2.008298);
   hext_stack_2->SetBinError(4,2.360063);
   hext_stack_2->SetBinError(5,2.947653);
   hext_stack_2->SetBinError(6,2.902111);
   hext_stack_2->SetBinError(7,3.040656);
   hext_stack_2->SetBinError(8,2.370806);
   hext_stack_2->SetBinError(9,2.063867);
   hext_stack_2->SetBinError(10,1.795792);
   hext_stack_2->SetBinError(11,2.733313);
   hext_stack_2->SetBinError(12,1.861595);
   hext_stack_2->SetBinError(13,2.014317);
   hext_stack_2->SetBinError(14,1.939769);
   hext_stack_2->SetBinError(15,2.584156);
   hext_stack_2->SetBinError(16,1.972853);
   hext_stack_2->SetBinError(17,2.616574);
   hext_stack_2->SetBinError(18,2.688539);
   hext_stack_2->SetBinError(19,3.141537);
   hext_stack_2->SetBinError(20,2.432671);
   hext_stack_2->SetBinError(21,1.95221);
   hext_stack_2->SetBinError(22,1.641043);
   hext_stack_2->SetBinError(23,2.34781);
   hext_stack_2->SetBinError(24,2.136816);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6669159);
   hdirt_stack_3->SetBinContent(2,0.4950385);
   hdirt_stack_3->SetBinContent(3,0.9485314);
   hdirt_stack_3->SetBinContent(4,2.619106);
   hdirt_stack_3->SetBinContent(5,0.4004149);
   hdirt_stack_3->SetBinContent(6,0.8176458);
   hdirt_stack_3->SetBinContent(7,1.07622);
   hdirt_stack_3->SetBinContent(8,0.881238);
   hdirt_stack_3->SetBinContent(9,1.226169);
   hdirt_stack_3->SetBinContent(10,0.5758626);
   hdirt_stack_3->SetBinContent(11,0.8534844);
   hdirt_stack_3->SetBinContent(12,0.89527);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,1.03727);
   hdirt_stack_3->SetBinContent(15,0.002351481);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,1.291835);
   hdirt_stack_3->SetBinContent(18,1.704718);
   hdirt_stack_3->SetBinContent(19,1.667876);
   hdirt_stack_3->SetBinContent(20,1.934111);
   hdirt_stack_3->SetBinContent(21,1.233073);
   hdirt_stack_3->SetBinContent(22,1.239991);
   hdirt_stack_3->SetBinContent(23,0.8873488);
   hdirt_stack_3->SetBinContent(24,1.035767);
   hdirt_stack_3->SetBinError(1,0.4822861);
   hdirt_stack_3->SetBinError(2,0.2933304);
   hdirt_stack_3->SetBinError(3,0.4941443);
   hdirt_stack_3->SetBinError(4,0.9250057);
   hdirt_stack_3->SetBinError(5,0.2964588);
   hdirt_stack_3->SetBinError(6,0.4797697);
   hdirt_stack_3->SetBinError(7,0.5054947);
   hdirt_stack_3->SetBinError(8,0.4849668);
   hdirt_stack_3->SetBinError(9,0.6315351);
   hdirt_stack_3->SetBinError(10,0.3389606);
   hdirt_stack_3->SetBinError(11,0.4543325);
   hdirt_stack_3->SetBinError(12,0.5259814);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.5438158);
   hdirt_stack_3->SetBinError(15,0.002351481);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.6154639);
   hdirt_stack_3->SetBinError(18,0.6488544);
   hdirt_stack_3->SetBinError(19,0.7154674);
   hdirt_stack_3->SetBinError(20,1.080417);
   hdirt_stack_3->SetBinError(21,0.5611196);
   hdirt_stack_3->SetBinError(22,0.6068685);
   hdirt_stack_3->SetBinError(23,0.489847);
   hdirt_stack_3->SetBinError(24,0.440654);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,16.43911);
   houtFV_stack_4->SetBinContent(2,12.84738);
   houtFV_stack_4->SetBinContent(3,15.49239);
   houtFV_stack_4->SetBinContent(4,11.58619);
   houtFV_stack_4->SetBinContent(5,11.88216);
   houtFV_stack_4->SetBinContent(6,13.60612);
   houtFV_stack_4->SetBinContent(7,12.73404);
   houtFV_stack_4->SetBinContent(8,11.72427);
   houtFV_stack_4->SetBinContent(9,11.08409);
   houtFV_stack_4->SetBinContent(10,12.25172);
   houtFV_stack_4->SetBinContent(11,16.1004);
   houtFV_stack_4->SetBinContent(12,12.38399);
   houtFV_stack_4->SetBinContent(13,13.18469);
   houtFV_stack_4->SetBinContent(14,10.83938);
   houtFV_stack_4->SetBinContent(15,13.95402);
   houtFV_stack_4->SetBinContent(16,13.08129);
   houtFV_stack_4->SetBinContent(17,15.77322);
   houtFV_stack_4->SetBinContent(18,13.58434);
   houtFV_stack_4->SetBinContent(19,10.89163);
   houtFV_stack_4->SetBinContent(20,14.91877);
   houtFV_stack_4->SetBinContent(21,11.18661);
   houtFV_stack_4->SetBinContent(22,13.9248);
   houtFV_stack_4->SetBinContent(23,14.52946);
   houtFV_stack_4->SetBinContent(24,21.00829);
   houtFV_stack_4->SetBinError(1,2.088842);
   houtFV_stack_4->SetBinError(2,1.733843);
   houtFV_stack_4->SetBinError(3,2.089606);
   houtFV_stack_4->SetBinError(4,1.696172);
   houtFV_stack_4->SetBinError(5,1.710617);
   houtFV_stack_4->SetBinError(6,1.886037);
   houtFV_stack_4->SetBinError(7,1.824556);
   houtFV_stack_4->SetBinError(8,1.697876);
   houtFV_stack_4->SetBinError(9,1.639628);
   houtFV_stack_4->SetBinError(10,1.763414);
   houtFV_stack_4->SetBinError(11,2.258681);
   houtFV_stack_4->SetBinError(12,1.783097);
   houtFV_stack_4->SetBinError(13,1.79253);
   houtFV_stack_4->SetBinError(14,1.629723);
   houtFV_stack_4->SetBinError(15,1.881173);
   houtFV_stack_4->SetBinError(16,1.808469);
   houtFV_stack_4->SetBinError(17,2.011594);
   houtFV_stack_4->SetBinError(18,1.912099);
   houtFV_stack_4->SetBinError(19,1.580494);
   houtFV_stack_4->SetBinError(20,1.89822);
   houtFV_stack_4->SetBinError(21,1.666606);
   houtFV_stack_4->SetBinError(22,1.86791);
   houtFV_stack_4->SetBinError(23,1.949282);
   houtFV_stack_4->SetBinError(24,2.609315);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5988538);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8511223);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.9906222);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5996859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6403718);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.255508);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.9052579);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1922885);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3588378);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3642206);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.237152);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2118699);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4237414);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.302967);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2501964);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,12.73242);
   hNCpi0inFVres_stack_7->SetBinContent(2,10.94697);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.3801);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.00485);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.966229);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.05583);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.51161);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.034647);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.95512);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.27464);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.61559);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.99838);
   hNCpi0inFVres_stack_7->SetBinContent(13,14.06763);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.97604);
   hNCpi0inFVres_stack_7->SetBinContent(15,10.83221);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.50415);
   hNCpi0inFVres_stack_7->SetBinContent(17,12.11945);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.552465);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.31856);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.06049);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.02984);
   hNCpi0inFVres_stack_7->SetBinContent(22,13.94225);
   hNCpi0inFVres_stack_7->SetBinContent(23,14.33485);
   hNCpi0inFVres_stack_7->SetBinContent(24,13.94041);
   hNCpi0inFVres_stack_7->SetBinError(1,1.172917);
   hNCpi0inFVres_stack_7->SetBinError(2,1.034224);
   hNCpi0inFVres_stack_7->SetBinError(3,1.133571);
   hNCpi0inFVres_stack_7->SetBinError(4,1.103941);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9500432);
   hNCpi0inFVres_stack_7->SetBinError(6,1.132225);
   hNCpi0inFVres_stack_7->SetBinError(7,1.077837);
   hNCpi0inFVres_stack_7->SetBinError(8,0.926957);
   hNCpi0inFVres_stack_7->SetBinError(9,1.195079);
   hNCpi0inFVres_stack_7->SetBinError(10,1.179782);
   hNCpi0inFVres_stack_7->SetBinError(11,1.151231);
   hNCpi0inFVres_stack_7->SetBinError(12,1.232121);
   hNCpi0inFVres_stack_7->SetBinError(13,1.222315);
   hNCpi0inFVres_stack_7->SetBinError(14,1.074793);
   hNCpi0inFVres_stack_7->SetBinError(15,1.011039);
   hNCpi0inFVres_stack_7->SetBinError(16,1.100204);
   hNCpi0inFVres_stack_7->SetBinError(17,1.17383);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9921927);
   hNCpi0inFVres_stack_7->SetBinError(19,1.066706);
   hNCpi0inFVres_stack_7->SetBinError(20,1.154129);
   hNCpi0inFVres_stack_7->SetBinError(21,1.026006);
   hNCpi0inFVres_stack_7->SetBinError(22,1.204594);
   hNCpi0inFVres_stack_7->SetBinError(23,1.251397);
   hNCpi0inFVres_stack_7->SetBinError(24,1.17463);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.752074);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.820661);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.334566);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.123984);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.873212);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.231344);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.122656);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.291057);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.634234);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.092676);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.166166);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.29993);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.512087);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.549702);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.46733);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.498142);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.49623);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.007976);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.970034);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.46733);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.22687);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.508679);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.416434);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.502134);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7157294);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7083042);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6388186);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5974717);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5205345);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4693547);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6196433);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6638173);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.515085);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4854565);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5927847);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.457952);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5568407);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4936711);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4630232);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6180182);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5169081);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4258024);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.571558);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4630232);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6922788);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4353683);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5823514);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6674718);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.85629);
   hCCpi0inFV_stack_10->SetBinContent(2,12.42718);
   hCCpi0inFV_stack_10->SetBinContent(3,15.72218);
   hCCpi0inFV_stack_10->SetBinContent(4,9.758951);
   hCCpi0inFV_stack_10->SetBinContent(5,11.0802);
   hCCpi0inFV_stack_10->SetBinContent(6,10.41142);
   hCCpi0inFV_stack_10->SetBinContent(7,10.14711);
   hCCpi0inFV_stack_10->SetBinContent(8,11.14389);
   hCCpi0inFV_stack_10->SetBinContent(9,11.04948);
   hCCpi0inFV_stack_10->SetBinContent(10,15.09021);
   hCCpi0inFV_stack_10->SetBinContent(11,15.61593);
   hCCpi0inFV_stack_10->SetBinContent(12,15.9562);
   hCCpi0inFV_stack_10->SetBinContent(13,18.9695);
   hCCpi0inFV_stack_10->SetBinContent(14,12.28394);
   hCCpi0inFV_stack_10->SetBinContent(15,13.0025);
   hCCpi0inFV_stack_10->SetBinContent(16,11.53739);
   hCCpi0inFV_stack_10->SetBinContent(17,13.31604);
   hCCpi0inFV_stack_10->SetBinContent(18,13.28577);
   hCCpi0inFV_stack_10->SetBinContent(19,11.01956);
   hCCpi0inFV_stack_10->SetBinContent(20,10.68353);
   hCCpi0inFV_stack_10->SetBinContent(21,15.19766);
   hCCpi0inFV_stack_10->SetBinContent(22,14.14855);
   hCCpi0inFV_stack_10->SetBinContent(23,16.70092);
   hCCpi0inFV_stack_10->SetBinContent(24,13.69151);
   hCCpi0inFV_stack_10->SetBinError(1,2.08124);
   hCCpi0inFV_stack_10->SetBinError(2,1.71243);
   hCCpi0inFV_stack_10->SetBinError(3,2.005063);
   hCCpi0inFV_stack_10->SetBinError(4,1.536793);
   hCCpi0inFV_stack_10->SetBinError(5,1.675752);
   hCCpi0inFV_stack_10->SetBinError(6,1.56333);
   hCCpi0inFV_stack_10->SetBinError(7,1.665424);
   hCCpi0inFV_stack_10->SetBinError(8,1.665077);
   hCCpi0inFV_stack_10->SetBinError(9,1.648824);
   hCCpi0inFV_stack_10->SetBinError(10,1.990175);
   hCCpi0inFV_stack_10->SetBinError(11,1.951985);
   hCCpi0inFV_stack_10->SetBinError(12,2.04046);
   hCCpi0inFV_stack_10->SetBinError(13,2.245968);
   hCCpi0inFV_stack_10->SetBinError(14,1.786443);
   hCCpi0inFV_stack_10->SetBinError(15,1.876146);
   hCCpi0inFV_stack_10->SetBinError(16,1.673004);
   hCCpi0inFV_stack_10->SetBinError(17,1.851535);
   hCCpi0inFV_stack_10->SetBinError(18,1.857576);
   hCCpi0inFV_stack_10->SetBinError(19,1.628182);
   hCCpi0inFV_stack_10->SetBinError(20,1.62855);
   hCCpi0inFV_stack_10->SetBinError(21,2.005144);
   hCCpi0inFV_stack_10->SetBinError(22,1.943017);
   hCCpi0inFV_stack_10->SetBinError(23,2.035022);
   hCCpi0inFV_stack_10->SetBinError(24,1.838903);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,4.249735);
   hNCinFV_stack_11->SetBinContent(2,2.642437);
   hNCinFV_stack_11->SetBinContent(3,2.927671);
   hNCinFV_stack_11->SetBinContent(4,3.767786);
   hNCinFV_stack_11->SetBinContent(5,3.319412);
   hNCinFV_stack_11->SetBinContent(6,3.021261);
   hNCinFV_stack_11->SetBinContent(7,2.732646);
   hNCinFV_stack_11->SetBinContent(8,3.267849);
   hNCinFV_stack_11->SetBinContent(9,2.537621);
   hNCinFV_stack_11->SetBinContent(10,2.291034);
   hNCinFV_stack_11->SetBinContent(11,3.321102);
   hNCinFV_stack_11->SetBinContent(12,2.00411);
   hNCinFV_stack_11->SetBinContent(13,2.931052);
   hNCinFV_stack_11->SetBinContent(14,2.837462);
   hNCinFV_stack_11->SetBinContent(15,3.608027);
   hNCinFV_stack_11->SetBinContent(16,3.230893);
   hNCinFV_stack_11->SetBinContent(17,3.374355);
   hNCinFV_stack_11->SetBinContent(18,4.104583);
   hNCinFV_stack_11->SetBinContent(19,1.804013);
   hNCinFV_stack_11->SetBinContent(20,2.7859);
   hNCinFV_stack_11->SetBinContent(21,4.299607);
   hNCinFV_stack_11->SetBinContent(22,2.784209);
   hNCinFV_stack_11->SetBinContent(23,3.079438);
   hNCinFV_stack_11->SetBinContent(24,2.539312);
   hNCinFV_stack_11->SetBinError(1,1.038438);
   hNCinFV_stack_11->SetBinError(2,0.7851269);
   hNCinFV_stack_11->SetBinError(3,0.877388);
   hNCinFV_stack_11->SetBinError(4,0.9414194);
   hNCinFV_stack_11->SetBinError(5,0.9200768);
   hNCinFV_stack_11->SetBinError(6,0.9415334);
   hNCinFV_stack_11->SetBinError(7,0.8554385);
   hNCinFV_stack_11->SetBinError(8,0.9410263);
   hNCinFV_stack_11->SetBinError(9,0.8329108);
   hNCinFV_stack_11->SetBinError(10,0.8334836);
   hNCinFV_stack_11->SetBinError(11,0.9204367);
   hNCinFV_stack_11->SetBinError(12,0.7352871);
   hNCinFV_stack_11->SetBinError(13,0.8781425);
   hNCinFV_stack_11->SetBinError(14,0.8089864);
   hNCinFV_stack_11->SetBinError(15,1.000625);
   hNCinFV_stack_11->SetBinError(16,0.855484);
   hNCinFV_stack_11->SetBinError(17,0.8993757);
   hNCinFV_stack_11->SetBinError(18,1.000333);
   hNCinFV_stack_11->SetBinError(19,0.7075491);
   hNCinFV_stack_11->SetBinError(20,0.8327353);
   hNCinFV_stack_11->SetBinError(21,1.019167);
   hNCinFV_stack_11->SetBinError(22,0.8323376);
   hNCinFV_stack_11->SetBinError(23,0.8334855);
   hNCinFV_stack_11->SetBinError(24,0.8333082);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,10.82507);
   hnumuCCinFV_stack_12->SetBinContent(2,6.726587);
   hnumuCCinFV_stack_12->SetBinContent(3,6.910116);
   hnumuCCinFV_stack_12->SetBinContent(4,9.931564);
   hnumuCCinFV_stack_12->SetBinContent(5,6.531909);
   hnumuCCinFV_stack_12->SetBinContent(6,7.441165);
   hnumuCCinFV_stack_12->SetBinContent(7,6.868574);
   hnumuCCinFV_stack_12->SetBinContent(8,6.389106);
   hnumuCCinFV_stack_12->SetBinContent(9,9.495955);
   hnumuCCinFV_stack_12->SetBinContent(10,10.17949);
   hnumuCCinFV_stack_12->SetBinContent(11,8.959665);
   hnumuCCinFV_stack_12->SetBinContent(12,9.014263);
   hnumuCCinFV_stack_12->SetBinContent(13,10.55014);
   hnumuCCinFV_stack_12->SetBinContent(14,12.20349);
   hnumuCCinFV_stack_12->SetBinContent(15,9.555451);
   hnumuCCinFV_stack_12->SetBinContent(16,8.330973);
   hnumuCCinFV_stack_12->SetBinContent(17,8.789665);
   hnumuCCinFV_stack_12->SetBinContent(18,6.311444);
   hnumuCCinFV_stack_12->SetBinContent(19,9.996792);
   hnumuCCinFV_stack_12->SetBinContent(20,8.305592);
   hnumuCCinFV_stack_12->SetBinContent(21,11.10395);
   hnumuCCinFV_stack_12->SetBinContent(22,7.008322);
   hnumuCCinFV_stack_12->SetBinContent(23,14.29632);
   hnumuCCinFV_stack_12->SetBinContent(24,8.631882);
   hnumuCCinFV_stack_12->SetBinError(1,1.810815);
   hnumuCCinFV_stack_12->SetBinError(2,1.638954);
   hnumuCCinFV_stack_12->SetBinError(3,1.319842);
   hnumuCCinFV_stack_12->SetBinError(4,1.798418);
   hnumuCCinFV_stack_12->SetBinError(5,1.678594);
   hnumuCCinFV_stack_12->SetBinError(6,1.779734);
   hnumuCCinFV_stack_12->SetBinError(7,1.372256);
   hnumuCCinFV_stack_12->SetBinError(8,1.294335);
   hnumuCCinFV_stack_12->SetBinError(9,1.641653);
   hnumuCCinFV_stack_12->SetBinError(10,1.944919);
   hnumuCCinFV_stack_12->SetBinError(11,1.668007);
   hnumuCCinFV_stack_12->SetBinError(12,1.522466);
   hnumuCCinFV_stack_12->SetBinError(13,1.679458);
   hnumuCCinFV_stack_12->SetBinError(14,1.806117);
   hnumuCCinFV_stack_12->SetBinError(15,1.629667);
   hnumuCCinFV_stack_12->SetBinError(16,1.584531);
   hnumuCCinFV_stack_12->SetBinError(17,1.651276);
   hnumuCCinFV_stack_12->SetBinError(18,1.347023);
   hnumuCCinFV_stack_12->SetBinError(19,2.433514);
   hnumuCCinFV_stack_12->SetBinError(20,1.508922);
   hnumuCCinFV_stack_12->SetBinError(21,2.797251);
   hnumuCCinFV_stack_12->SetBinError(22,1.443009);
   hnumuCCinFV_stack_12->SetBinError(23,2.331523);
   hnumuCCinFV_stack_12->SetBinError(24,1.658449);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7975339);
   hnueCCinFV_stack_13->SetBinContent(2,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(6,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(7,0.47249);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,2.083601);
   hnueCCinFV_stack_13->SetBinContent(20,1.919326);
   hnueCCinFV_stack_13->SetBinContent(21,0.536893);
   hnueCCinFV_stack_13->SetBinContent(22,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(23,0.8120507);
   hnueCCinFV_stack_13->SetBinContent(24,0.5113685);
   hnueCCinFV_stack_13->SetBinError(1,0.4906049);
   hnueCCinFV_stack_13->SetBinError(2,0.3025491);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(6,0.3654046);
   hnueCCinFV_stack_13->SetBinError(7,0.3344052);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.4566905);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.2781975);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,1.293957);
   hnueCCinFV_stack_13->SetBinError(20,1.589338);
   hnueCCinFV_stack_13->SetBinError(21,0.3929602);
   hnueCCinFV_stack_13->SetBinError(22,0.2331833);
   hnueCCinFV_stack_13->SetBinError(23,0.4068414);
   hnueCCinFV_stack_13->SetBinError(24,0.3808243);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__8->SetBinContent(1,76.17001);
   hmcerror__8->SetBinContent(2,66.65493);
   hmcerror__8->SetBinContent(3,70.03821);
   hmcerror__8->SetBinContent(4,69.3933);
   hmcerror__8->SetBinContent(5,66.04758);
   hmcerror__8->SetBinContent(6,74.06107);
   hmcerror__8->SetBinContent(7,72.7177);
   hmcerror__8->SetBinContent(8,60.88119);
   hmcerror__8->SetBinContent(9,65.70506);
   hmcerror__8->SetBinContent(10,65.28706);
   hmcerror__8->SetBinContent(11,76.15247);
   hmcerror__8->SetBinContent(12,67.335);
   hmcerror__8->SetBinContent(13,76.00847);
   hmcerror__8->SetBinContent(14,64.29692);
   hmcerror__8->SetBinContent(15,69.35525);
   hmcerror__8->SetBinContent(16,62.30911);
   hmcerror__8->SetBinContent(17,74.16782);
   hmcerror__8->SetBinContent(18,69.88478);
   hmcerror__8->SetBinContent(19,73.0509);
   hmcerror__8->SetBinContent(20,70.67157);
   hmcerror__8->SetBinContent(21,69.73238);
   hmcerror__8->SetBinContent(22,63.29234);
   hmcerror__8->SetBinContent(23,82.7263);
   hmcerror__8->SetBinContent(24,79.11607);
   hmcerror__8->SetBinError(1,26.84582);
   hmcerror__8->SetBinError(2,23.02445);
   hmcerror__8->SetBinError(3,21.70386);
   hmcerror__8->SetBinError(4,20.47986);
   hmcerror__8->SetBinError(5,18.09051);
   hmcerror__8->SetBinError(6,21.63677);
   hmcerror__8->SetBinError(7,27.56559);
   hmcerror__8->SetBinError(8,21.27329);
   hmcerror__8->SetBinError(9,22.45515);
   hmcerror__8->SetBinError(10,23.87397);
   hmcerror__8->SetBinError(11,21.00678);
   hmcerror__8->SetBinError(12,21.87684);
   hmcerror__8->SetBinError(13,28.35744);
   hmcerror__8->SetBinError(14,19.45649);
   hmcerror__8->SetBinError(15,23.40499);
   hmcerror__8->SetBinError(16,20.88418);
   hmcerror__8->SetBinError(17,22.97826);
   hmcerror__8->SetBinError(18,21.29951);
   hmcerror__8->SetBinError(19,23.65329);
   hmcerror__8->SetBinError(20,22.47921);
   hmcerror__8->SetBinError(21,27.09114);
   hmcerror__8->SetBinError(22,24.9461);
   hmcerror__8->SetBinError(23,31.54321);
   hmcerror__8->SetBinError(24,24.25034);
   hmcerror__8->SetBinError(25,0.3895343);
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
   79,
   61,
   58,
   41,
   55,
   57,
   79,
   59,
   58,
   57,
   59,
   77,
   79,
   57,
   53,
   59,
   67,
   53,
   62,
   57,
   58,
   51,
   68,
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
   9.0124,
   7.9383,
   7.7446,
   6.5384,
   7.546,
   7.679,
   9.0124,
   7.8097,
   7.7446,
   7.679,
   7.8097,
   8.8995,
   9.0124,
   7.679,
   7.4105,
   7.8097,
   8.3119,
   7.4105,
   8.0018,
   7.679,
   7.7446,
   7.2725,
   8.3726,
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
   8.8105,
   7.7354,
   7.5415,
   6.3331,
   7.3425,
   7.4757,
   8.8105,
   7.6066,
   7.5415,
   7.4757,
   7.6066,
   8.6976,
   8.8105,
   7.4757,
   7.2068,
   7.6066,
   8.1094,
   7.2068,
   7.7989,
   7.4757,
   7.5415,
   7.0686,
   8.1701,
   8.0483};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-3.78,3.78);
   Graph_Graph3009->SetMinimum(29.12671);
   Graph_Graph3009->SetMaximum(93.14539);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.16","h");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all");
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
   0.352446,
   0.3454275,
   0.3098859,
   0.2951274,
   0.2739012,
   0.2921477,
   0.3790768,
   0.349423,
   0.3417568,
   0.3656768,
   0.2758515,
   0.3248956,
   0.3730827,
   0.3026038,
   0.3374653,
   0.3351705,
   0.3098144,
   0.3047803,
   0.3237919,
   0.31808,
   0.3885016,
   0.394141,
   0.3812961,
   0.306516};
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
   0.352446,
   0.3454275,
   0.3098859,
   0.2951274,
   0.2739012,
   0.2921477,
   0.3790768,
   0.349423,
   0.3417568,
   0.3656768,
   0.2758515,
   0.3248956,
   0.3730827,
   0.3026038,
   0.3374653,
   0.3351705,
   0.3098144,
   0.3047803,
   0.3237919,
   0.31808,
   0.3885016,
   0.394141,
   0.3812961,
   0.306516};
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
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.202397,
   0.2046018,
   0.2086335,
   0.1931301,
   0.1655017,
   0.1762955,
   0.1776936,
   0.1901042,
   0.1970144,
   0.2075305,
   0.1787775,
   0.2023893,
   0.1994013,
   0.182725,
   0.1989379,
   0.2115841,
   0.1897949,
   0.1740617,
   0.1759606,
   0.1983378,
   0.1942397,
   0.2130463,
   0.2019952,
   0.1901395};
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
   0.202397,
   0.2046018,
   0.2086335,
   0.1931301,
   0.1655017,
   0.1762955,
   0.1776936,
   0.1901042,
   0.1970144,
   0.2075305,
   0.1787775,
   0.2023893,
   0.1994013,
   0.182725,
   0.1989379,
   0.2115841,
   0.1897949,
   0.1740617,
   0.1759606,
   0.1983378,
   0.1942397,
   0.2130463,
   0.2019952,
   0.1901395};
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
   1.037154,
   0.9151611,
   0.8281194,
   0.5908352,
   0.832733,
   0.7696351,
   1.086393,
   0.9691006,
   0.8827327,
   0.8730673,
   0.7747614,
   1.143536,
   1.039358,
   0.8865121,
   0.7641815,
   0.9468921,
   0.9033568,
   0.7583912,
   0.8487233,
   0.8065478,
   0.8317513,
   0.8057848,
   0.8219877,
   0.8342173};
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
   0.1183195,
   0.1190955,
   0.1105768,
   0.09422236,
   0.114251,
   0.1036847,
   0.1239368,
   0.1282777,
   0.1178692,
   0.117619,
   0.1025535,
   0.1321675,
   0.118571,
   0.1194303,
   0.1068484,
   0.125338,
   0.1120688,
   0.1060388,
   0.1095373,
   0.1086576,
   0.1110617,
   0.1149033,
   0.1012084,
   0.1042885};
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
   0.1156689,
   0.1160514,
   0.1076769,
   0.09126386,
   0.1111699,
   0.1009397,
   0.1211603,
   0.1249417,
   0.1147781,
   0.1145051,
   0.09988645,
   0.1291691,
   0.1159147,
   0.1162684,
   0.1039114,
   0.1220785,
   0.1093385,
   0.103124,
   0.1067598,
   0.1057809,
   0.1081492,
   0.1116818,
   0.09876062,
   0.1017277};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-3.78,3.78);
   Graph_Graph3012->SetMinimum(0.4190036);
   Graph_Graph3012->SetMaximum(1.350314);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
