#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 17:07:16 2022) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-2.358179,3.957692,260.7649);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmc__19->SetBinContent(1,112.7248);
   hmc__19->SetBinContent(2,117.9089);
   hmc__19->SetBinContent(3,103.6255);
   hmc__19->SetBinContent(4,93.56461);
   hmc__19->SetBinContent(5,90.54725);
   hmc__19->SetBinContent(6,89.88981);
   hmc__19->SetBinContent(7,83.95586);
   hmc__19->SetBinContent(8,83.28609);
   hmc__19->SetBinContent(9,86.23358);
   hmc__19->SetBinContent(10,88.73116);
   hmc__19->SetBinContent(11,96.59653);
   hmc__19->SetBinContent(12,98.53461);
   hmc__19->SetBinContent(13,104.8348);
   hmc__19->SetBinContent(14,106.0926);
   hmc__19->SetBinContent(15,98.0948);
   hmc__19->SetBinContent(16,92.56549);
   hmc__19->SetBinContent(17,94.99889);
   hmc__19->SetBinContent(18,86.36037);
   hmc__19->SetBinContent(19,87.94165);
   hmc__19->SetBinContent(20,78.42599);
   hmc__19->SetBinContent(21,87.55531);
   hmc__19->SetBinContent(22,90.85977);
   hmc__19->SetBinContent(23,102.4479);
   hmc__19->SetBinContent(24,101.5004);
   hmc__19->SetBinContent(25,111.7805);
   hmc__19->SetBinError(1,44.02843);
   hmc__19->SetBinError(2,43.9152);
   hmc__19->SetBinError(3,46.36512);
   hmc__19->SetBinError(4,37.17261);
   hmc__19->SetBinError(5,32.8284);
   hmc__19->SetBinError(6,34.5938);
   hmc__19->SetBinError(7,38.56395);
   hmc__19->SetBinError(8,34.77983);
   hmc__19->SetBinError(9,35.25431);
   hmc__19->SetBinError(10,35.60157);
   hmc__19->SetBinError(11,37.20607);
   hmc__19->SetBinError(12,38.56527);
   hmc__19->SetBinError(13,37.58502);
   hmc__19->SetBinError(14,37.89338);
   hmc__19->SetBinError(15,38.56237);
   hmc__19->SetBinError(16,34.93846);
   hmc__19->SetBinError(17,40.56244);
   hmc__19->SetBinError(18,35.80535);
   hmc__19->SetBinError(19,38.28382);
   hmc__19->SetBinError(20,36.23005);
   hmc__19->SetBinError(21,34.09873);
   hmc__19->SetBinError(22,36.87718);
   hmc__19->SetBinError(23,38.30719);
   hmc__19->SetBinError(24,39.6931);
   hmc__19->SetBinError(25,42.68006);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-2.358179);
   hmc__19->SetMaximum(247.6088);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-3.15,3.15);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(123.8044);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.394067);
   hbadmatch_stack_1->SetBinContent(2,2.353196);
   hbadmatch_stack_1->SetBinContent(3,1.271842);
   hbadmatch_stack_1->SetBinContent(4,2.197224);
   hbadmatch_stack_1->SetBinContent(5,3.081616);
   hbadmatch_stack_1->SetBinContent(6,1.969968);
   hbadmatch_stack_1->SetBinContent(7,1.811698);
   hbadmatch_stack_1->SetBinContent(8,2.884972);
   hbadmatch_stack_1->SetBinContent(9,2.487112);
   hbadmatch_stack_1->SetBinContent(10,2.351595);
   hbadmatch_stack_1->SetBinContent(11,3.095069);
   hbadmatch_stack_1->SetBinContent(12,1.704956);
   hbadmatch_stack_1->SetBinContent(13,1.52884);
   hbadmatch_stack_1->SetBinContent(14,1.390966);
   hbadmatch_stack_1->SetBinContent(15,2.291463);
   hbadmatch_stack_1->SetBinContent(16,1.893551);
   hbadmatch_stack_1->SetBinContent(17,3.57722);
   hbadmatch_stack_1->SetBinContent(18,1.7849);
   hbadmatch_stack_1->SetBinContent(19,2.056196);
   hbadmatch_stack_1->SetBinContent(20,1.533626);
   hbadmatch_stack_1->SetBinContent(21,2.806038);
   hbadmatch_stack_1->SetBinContent(22,0.7877271);
   hbadmatch_stack_1->SetBinContent(23,3.975655);
   hbadmatch_stack_1->SetBinContent(24,0.9436268);
   hbadmatch_stack_1->SetBinContent(25,1.657104);
   hbadmatch_stack_1->SetBinError(1,1.027211);
   hbadmatch_stack_1->SetBinError(2,0.8009181);
   hbadmatch_stack_1->SetBinError(3,0.6141507);
   hbadmatch_stack_1->SetBinError(4,0.7296081);
   hbadmatch_stack_1->SetBinError(5,0.9469742);
   hbadmatch_stack_1->SetBinError(6,0.688037);
   hbadmatch_stack_1->SetBinError(7,0.8366651);
   hbadmatch_stack_1->SetBinError(8,0.8959151);
   hbadmatch_stack_1->SetBinError(9,0.8511605);
   hbadmatch_stack_1->SetBinError(10,1.241379);
   hbadmatch_stack_1->SetBinError(11,0.9500136);
   hbadmatch_stack_1->SetBinError(12,0.6624827);
   hbadmatch_stack_1->SetBinError(13,0.5858178);
   hbadmatch_stack_1->SetBinError(14,0.6209589);
   hbadmatch_stack_1->SetBinError(15,0.7464953);
   hbadmatch_stack_1->SetBinError(16,0.723004);
   hbadmatch_stack_1->SetBinError(17,2.017944);
   hbadmatch_stack_1->SetBinError(18,0.6811685);
   hbadmatch_stack_1->SetBinError(19,0.9191635);
   hbadmatch_stack_1->SetBinError(20,0.6668239);
   hbadmatch_stack_1->SetBinError(21,0.9964628);
   hbadmatch_stack_1->SetBinError(22,0.3938642);
   hbadmatch_stack_1->SetBinError(23,1.150134);
   hbadmatch_stack_1->SetBinError(24,0.42841);
   hbadmatch_stack_1->SetBinError(25,0.6564884);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.186592);
   hext_stack_2->SetBinContent(2,8.802256);
   hext_stack_2->SetBinContent(3,10.5671);
   hext_stack_2->SetBinContent(4,4.93821);
   hext_stack_2->SetBinContent(5,8.649442);
   hext_stack_2->SetBinContent(6,15.00933);
   hext_stack_2->SetBinContent(7,8.809436);
   hext_stack_2->SetBinContent(8,9.361668);
   hext_stack_2->SetBinContent(9,6.303639);
   hext_stack_2->SetBinContent(10,9.105111);
   hext_stack_2->SetBinContent(11,5.751408);
   hext_stack_2->SetBinContent(12,4.296596);
   hext_stack_2->SetBinContent(13,6.78085);
   hext_stack_2->SetBinContent(14,4.949799);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,4.788167);
   hext_stack_2->SetBinContent(17,6.456453);
   hext_stack_2->SetBinContent(18,7.485896);
   hext_stack_2->SetBinContent(19,10.98088);
   hext_stack_2->SetBinContent(20,6.482403);
   hext_stack_2->SetBinContent(21,11.90223);
   hext_stack_2->SetBinContent(22,8.299094);
   hext_stack_2->SetBinContent(23,6.863051);
   hext_stack_2->SetBinContent(24,3.57278);
   hext_stack_2->SetBinContent(25,7.974696);
   hext_stack_2->SetBinError(1,1.834006);
   hext_stack_2->SetBinError(2,2.060031);
   hext_stack_2->SetBinError(3,2.34386);
   hext_stack_2->SetBinError(4,1.475167);
   hext_stack_2->SetBinError(5,2.014317);
   hext_stack_2->SetBinError(6,2.765066);
   hext_stack_2->SetBinError(7,2.010604);
   hext_stack_2->SetBinError(8,2.143667);
   hext_stack_2->SetBinError(9,1.749156);
   hext_stack_2->SetBinError(10,2.225436);
   hext_stack_2->SetBinError(11,1.583276);
   hext_stack_2->SetBinError(12,1.328326);
   hext_stack_2->SetBinError(13,1.830584);
   hext_stack_2->SetBinError(14,1.452598);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,1.2859);
   hext_stack_2->SetBinError(17,1.801611);
   hext_stack_2->SetBinError(18,2.022393);
   hext_stack_2->SetBinError(19,2.336194);
   hext_stack_2->SetBinError(20,1.666529);
   hext_stack_2->SetBinError(21,2.319494);
   hext_stack_2->SetBinError(22,2.102551);
   hext_stack_2->SetBinError(23,1.846923);
   hext_stack_2->SetBinError(24,1.136966);
   hext_stack_2->SetBinError(25,2.077375);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.3942141);
   hdirt_stack_3->SetBinContent(3,0.3381872);
   hdirt_stack_3->SetBinContent(4,0.89527);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.5758626);
   hdirt_stack_3->SetBinContent(7,0.9571885);
   hdirt_stack_3->SetBinContent(8,0.5570828);
   hdirt_stack_3->SetBinContent(9,0.4048706);
   hdirt_stack_3->SetBinContent(10,0.2516114);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,1.149204);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.4950385);
   hdirt_stack_3->SetBinContent(18,0.6029711);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,0.4975938);
   hdirt_stack_3->SetBinContent(21,1.209021);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(23,0.7783238);
   hdirt_stack_3->SetBinContent(24,0.3033547);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2804494);
   hdirt_stack_3->SetBinError(3,0.3381872);
   hdirt_stack_3->SetBinError(4,0.5259814);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.3389606);
   hdirt_stack_3->SetBinError(7,0.5000115);
   hdirt_stack_3->SetBinError(8,0.4028472);
   hdirt_stack_3->SetBinError(9,0.2872316);
   hdirt_stack_3->SetBinError(10,0.2516114);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.9557142);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.2933304);
   hdirt_stack_3->SetBinError(18,0.3508774);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.2933416);
   hdirt_stack_3->SetBinError(21,0.5854732);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(23,0.4834435);
   hdirt_stack_3->SetBinError(24,0.2153654);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,3.13332);
   houtFV_stack_4->SetBinContent(2,3.213629);
   houtFV_stack_4->SetBinContent(3,3.653636);
   houtFV_stack_4->SetBinContent(4,3.462756);
   houtFV_stack_4->SetBinContent(5,4.117743);
   houtFV_stack_4->SetBinContent(6,4.883289);
   houtFV_stack_4->SetBinContent(7,3.519285);
   houtFV_stack_4->SetBinContent(8,3.468889);
   houtFV_stack_4->SetBinContent(9,2.641766);
   houtFV_stack_4->SetBinContent(10,4.060482);
   houtFV_stack_4->SetBinContent(11,3.374499);
   houtFV_stack_4->SetBinContent(12,2.055833);
   houtFV_stack_4->SetBinContent(13,3.002975);
   houtFV_stack_4->SetBinContent(14,2.933201);
   houtFV_stack_4->SetBinContent(15,2.783808);
   houtFV_stack_4->SetBinContent(16,4.657472);
   houtFV_stack_4->SetBinContent(17,3.44383);
   houtFV_stack_4->SetBinContent(18,4.315066);
   houtFV_stack_4->SetBinContent(19,1.89348);
   houtFV_stack_4->SetBinContent(20,3.649209);
   houtFV_stack_4->SetBinContent(21,3.703538);
   houtFV_stack_4->SetBinContent(22,4.123903);
   houtFV_stack_4->SetBinContent(23,3.370348);
   houtFV_stack_4->SetBinContent(24,5.29173);
   houtFV_stack_4->SetBinContent(25,2.068653);
   houtFV_stack_4->SetBinError(1,0.8385842);
   houtFV_stack_4->SetBinError(2,0.9375301);
   houtFV_stack_4->SetBinError(3,0.9308778);
   houtFV_stack_4->SetBinError(4,0.8829795);
   houtFV_stack_4->SetBinError(5,1.00148);
   houtFV_stack_4->SetBinError(6,1.132826);
   houtFV_stack_4->SetBinError(7,0.9648019);
   houtFV_stack_4->SetBinError(8,0.8255033);
   houtFV_stack_4->SetBinError(9,0.8513947);
   houtFV_stack_4->SetBinError(10,0.9488299);
   houtFV_stack_4->SetBinError(11,0.9300174);
   houtFV_stack_4->SetBinError(12,0.7260716);
   houtFV_stack_4->SetBinError(13,0.7832601);
   houtFV_stack_4->SetBinError(14,0.81213);
   houtFV_stack_4->SetBinError(15,0.7673813);
   houtFV_stack_4->SetBinError(16,1.089979);
   houtFV_stack_4->SetBinError(17,0.9193904);
   houtFV_stack_4->SetBinError(18,0.9826285);
   houtFV_stack_4->SetBinError(19,0.6987579);
   houtFV_stack_4->SetBinError(20,0.925141);
   houtFV_stack_4->SetBinError(21,0.9072891);
   houtFV_stack_4->SetBinError(22,0.9845658);
   houtFV_stack_4->SetBinError(23,0.9164971);
   houtFV_stack_4->SetBinError(24,1.222461);
   houtFV_stack_4->SetBinError(25,0.6702572);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.126373);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09591387);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4431924);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06481141);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.06308217);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4820776);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.07171008);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09526134);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2760955);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1753811);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2276062);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4574248);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2524534);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1174438);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3067359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4210082);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3549316);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1869977);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.06358898);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1018519);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05918372);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2100578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04543625);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04383379);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2265396);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04284518);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05603945);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1664818);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.07938053);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1439434);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2489741);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.09582777);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06245938);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2573533);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2217618);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1984717);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.08157538);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.04027971);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5310867);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5307751);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3374231);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5485932);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4553261);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5799224);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5928632);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2265584);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3875775);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5683194);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4693028);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3331628);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2534792);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3836788);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5853072);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2423929);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4355958);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3272287);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3448282);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2791645);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7586173);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4039106);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3975015);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5376443);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4348391);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1746799);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1769156);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1772275);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2003423);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2088103);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2499833);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2498046);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08400861);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1665699);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2504975);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1771288);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1495992);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1452794);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1571023);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2312782);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1175865);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1501756);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1562649);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1005497);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.100606);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2676547);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1783998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1645331);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3082746);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1679235);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,40.98814);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.22714);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.29843);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.24739);
   hNCpi0inFVres_stack_7->SetBinContent(5,33.94851);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.8553);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.86115);
   hNCpi0inFVres_stack_7->SetBinContent(8,33.63982);
   hNCpi0inFVres_stack_7->SetBinContent(9,33.96645);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.62545);
   hNCpi0inFVres_stack_7->SetBinContent(11,38.81932);
   hNCpi0inFVres_stack_7->SetBinContent(12,34.89719);
   hNCpi0inFVres_stack_7->SetBinContent(13,34.0889);
   hNCpi0inFVres_stack_7->SetBinContent(14,38.09689);
   hNCpi0inFVres_stack_7->SetBinContent(15,38.95914);
   hNCpi0inFVres_stack_7->SetBinContent(16,36.9198);
   hNCpi0inFVres_stack_7->SetBinContent(17,36.51557);
   hNCpi0inFVres_stack_7->SetBinContent(18,34.58406);
   hNCpi0inFVres_stack_7->SetBinContent(19,33.50292);
   hNCpi0inFVres_stack_7->SetBinContent(20,30.76898);
   hNCpi0inFVres_stack_7->SetBinContent(21,34.45633);
   hNCpi0inFVres_stack_7->SetBinContent(22,37.8064);
   hNCpi0inFVres_stack_7->SetBinContent(23,38.79565);
   hNCpi0inFVres_stack_7->SetBinContent(24,40.71379);
   hNCpi0inFVres_stack_7->SetBinContent(25,38.56026);
   hNCpi0inFVres_stack_7->SetBinError(1,1.930786);
   hNCpi0inFVres_stack_7->SetBinError(2,2.034184);
   hNCpi0inFVres_stack_7->SetBinError(3,1.8046);
   hNCpi0inFVres_stack_7->SetBinError(4,2.009803);
   hNCpi0inFVres_stack_7->SetBinError(5,1.799088);
   hNCpi0inFVres_stack_7->SetBinError(6,1.722575);
   hNCpi0inFVres_stack_7->SetBinError(7,1.915065);
   hNCpi0inFVres_stack_7->SetBinError(8,1.718381);
   hNCpi0inFVres_stack_7->SetBinError(9,1.692536);
   hNCpi0inFVres_stack_7->SetBinError(10,1.931529);
   hNCpi0inFVres_stack_7->SetBinError(11,1.891917);
   hNCpi0inFVres_stack_7->SetBinError(12,1.814868);
   hNCpi0inFVres_stack_7->SetBinError(13,1.665005);
   hNCpi0inFVres_stack_7->SetBinError(14,1.805623);
   hNCpi0inFVres_stack_7->SetBinError(15,1.935549);
   hNCpi0inFVres_stack_7->SetBinError(16,1.877254);
   hNCpi0inFVres_stack_7->SetBinError(17,1.899003);
   hNCpi0inFVres_stack_7->SetBinError(18,1.727062);
   hNCpi0inFVres_stack_7->SetBinError(19,1.850236);
   hNCpi0inFVres_stack_7->SetBinError(20,1.644538);
   hNCpi0inFVres_stack_7->SetBinError(21,1.796128);
   hNCpi0inFVres_stack_7->SetBinError(22,1.837298);
   hNCpi0inFVres_stack_7->SetBinError(23,1.925446);
   hNCpi0inFVres_stack_7->SetBinError(24,2.05511);
   hNCpi0inFVres_stack_7->SetBinError(25,1.821032);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.623257);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.815169);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.37046);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.301925);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.203974);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.465285);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.089912);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.995977);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.618019);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.227688);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.199694);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.728898);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.010136);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.129807);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.824034);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.128455);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.643431);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.441518);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.015947);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.105145);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.66729);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.326932);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.948706);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.268261);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.467634);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.045614);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.112614);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.142133);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9710523);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8110922);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9724949);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9947045);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8788178);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.128634);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8142998);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.107308);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8868616);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8856786);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.077678);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9714721);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8759822);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9348285);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6543918);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9563377);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9314192);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7336424);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8401604);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9460962);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9551366);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9814378);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1281492);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1460168);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1532392);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06562697);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.07614509);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1114219);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1290147);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1326828);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06562698);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04859599);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.73562);
   hCCpi0inFV_stack_10->SetBinContent(2,17.96167);
   hCCpi0inFV_stack_10->SetBinContent(3,17.21764);
   hCCpi0inFV_stack_10->SetBinContent(4,18.88466);
   hCCpi0inFV_stack_10->SetBinContent(5,16.80957);
   hCCpi0inFV_stack_10->SetBinContent(6,12.07693);
   hCCpi0inFV_stack_10->SetBinContent(7,11.95727);
   hCCpi0inFV_stack_10->SetBinContent(8,12.10761);
   hCCpi0inFV_stack_10->SetBinContent(9,13.70996);
   hCCpi0inFV_stack_10->SetBinContent(10,13.82145);
   hCCpi0inFV_stack_10->SetBinContent(11,15.68577);
   hCCpi0inFV_stack_10->SetBinContent(12,17.13395);
   hCCpi0inFV_stack_10->SetBinContent(13,19.08071);
   hCCpi0inFV_stack_10->SetBinContent(14,15.86691);
   hCCpi0inFV_stack_10->SetBinContent(15,16.22497);
   hCCpi0inFV_stack_10->SetBinContent(16,14.13918);
   hCCpi0inFV_stack_10->SetBinContent(17,14.90462);
   hCCpi0inFV_stack_10->SetBinContent(18,12.52085);
   hCCpi0inFV_stack_10->SetBinContent(19,11.53382);
   hCCpi0inFV_stack_10->SetBinContent(20,11.57439);
   hCCpi0inFV_stack_10->SetBinContent(21,12.69596);
   hCCpi0inFV_stack_10->SetBinContent(22,17.32266);
   hCCpi0inFV_stack_10->SetBinContent(23,18.97297);
   hCCpi0inFV_stack_10->SetBinContent(24,16.72157);
   hCCpi0inFV_stack_10->SetBinContent(25,18.12376);
   hCCpi0inFV_stack_10->SetBinError(1,2.124831);
   hCCpi0inFV_stack_10->SetBinError(2,2.135214);
   hCCpi0inFV_stack_10->SetBinError(3,2.091303);
   hCCpi0inFV_stack_10->SetBinError(4,2.188133);
   hCCpi0inFV_stack_10->SetBinError(5,2.105687);
   hCCpi0inFV_stack_10->SetBinError(6,1.723071);
   hCCpi0inFV_stack_10->SetBinError(7,1.754504);
   hCCpi0inFV_stack_10->SetBinError(8,1.794372);
   hCCpi0inFV_stack_10->SetBinError(9,1.888609);
   hCCpi0inFV_stack_10->SetBinError(10,1.861924);
   hCCpi0inFV_stack_10->SetBinError(11,1.990859);
   hCCpi0inFV_stack_10->SetBinError(12,2.094546);
   hCCpi0inFV_stack_10->SetBinError(13,2.196766);
   hCCpi0inFV_stack_10->SetBinError(14,1.97568);
   hCCpi0inFV_stack_10->SetBinError(15,1.94343);
   hCCpi0inFV_stack_10->SetBinError(16,1.919513);
   hCCpi0inFV_stack_10->SetBinError(17,1.912437);
   hCCpi0inFV_stack_10->SetBinError(18,1.729);
   hCCpi0inFV_stack_10->SetBinError(19,1.646992);
   hCCpi0inFV_stack_10->SetBinError(20,1.693267);
   hCCpi0inFV_stack_10->SetBinError(21,1.80925);
   hCCpi0inFV_stack_10->SetBinError(22,2.117269);
   hCCpi0inFV_stack_10->SetBinError(23,2.210504);
   hCCpi0inFV_stack_10->SetBinError(24,2.026483);
   hCCpi0inFV_stack_10->SetBinError(25,2.075619);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.45377);
   hNCinFV_stack_11->SetBinContent(2,10.35412);
   hNCinFV_stack_11->SetBinContent(3,8.5801);
   hNCinFV_stack_11->SetBinContent(4,9.809057);
   hNCinFV_stack_11->SetBinContent(5,10.19661);
   hNCinFV_stack_11->SetBinContent(6,8.840265);
   hNCinFV_stack_11->SetBinContent(7,9.109411);
   hNCinFV_stack_11->SetBinContent(8,7.462694);
   hNCinFV_stack_11->SetBinContent(9,9.783613);
   hNCinFV_stack_11->SetBinContent(10,6.091118);
   hNCinFV_stack_11->SetBinContent(11,6.015269);
   hNCinFV_stack_11->SetBinContent(12,9.035541);
   hNCinFV_stack_11->SetBinContent(13,10.6693);
   hNCinFV_stack_11->SetBinContent(14,12.35427);
   hNCinFV_stack_11->SetBinContent(15,15.11947);
   hNCinFV_stack_11->SetBinContent(16,11.71649);
   hNCinFV_stack_11->SetBinContent(17,11.85595);
   hNCinFV_stack_11->SetBinContent(18,11.50568);
   hNCinFV_stack_11->SetBinContent(19,11.56904);
   hNCinFV_stack_11->SetBinContent(20,10.00434);
   hNCinFV_stack_11->SetBinContent(21,7.800635);
   hNCinFV_stack_11->SetBinContent(22,8.3159);
   hNCinFV_stack_11->SetBinContent(23,11.89174);
   hNCinFV_stack_11->SetBinContent(24,10.122);
   hNCinFV_stack_11->SetBinContent(25,8.976097);
   hNCinFV_stack_11->SetBinError(1,1.798823);
   hNCinFV_stack_11->SetBinError(2,1.713879);
   hNCinFV_stack_11->SetBinError(3,1.567733);
   hNCinFV_stack_11->SetBinError(4,1.788614);
   hNCinFV_stack_11->SetBinError(5,1.797187);
   hNCinFV_stack_11->SetBinError(6,1.516636);
   hNCinFV_stack_11->SetBinError(7,1.637039);
   hNCinFV_stack_11->SetBinError(8,1.346492);
   hNCinFV_stack_11->SetBinError(9,1.626863);
   hNCinFV_stack_11->SetBinError(10,1.208235);
   hNCinFV_stack_11->SetBinError(11,1.185257);
   hNCinFV_stack_11->SetBinError(12,1.572425);
   hNCinFV_stack_11->SetBinError(13,1.687125);
   hNCinFV_stack_11->SetBinError(14,2.020197);
   hNCinFV_stack_11->SetBinError(15,2.251473);
   hNCinFV_stack_11->SetBinError(16,1.976071);
   hNCinFV_stack_11->SetBinError(17,2.039769);
   hNCinFV_stack_11->SetBinError(18,1.954594);
   hNCinFV_stack_11->SetBinError(19,2.123683);
   hNCinFV_stack_11->SetBinError(20,1.842224);
   hNCinFV_stack_11->SetBinError(21,1.296769);
   hNCinFV_stack_11->SetBinError(22,1.643375);
   hNCinFV_stack_11->SetBinError(23,2.026208);
   hNCinFV_stack_11->SetBinError(24,1.932);
   hNCinFV_stack_11->SetBinError(25,1.514639);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,20.33574);
   hnumuCCinFV_stack_12->SetBinContent(2,23.93368);
   hnumuCCinFV_stack_12->SetBinContent(3,11.98794);
   hnumuCCinFV_stack_12->SetBinContent(4,4.159787);
   hnumuCCinFV_stack_12->SetBinContent(5,4.917526);
   hnumuCCinFV_stack_12->SetBinContent(6,5.30195);
   hnumuCCinFV_stack_12->SetBinContent(7,3.844386);
   hnumuCCinFV_stack_12->SetBinContent(8,5.262177);
   hnumuCCinFV_stack_12->SetBinContent(9,7.435867);
   hnumuCCinFV_stack_12->SetBinContent(10,6.413394);
   hnumuCCinFV_stack_12->SetBinContent(11,13.6586);
   hnumuCCinFV_stack_12->SetBinContent(12,19.07948);
   hnumuCCinFV_stack_12->SetBinContent(13,20.37647);
   hnumuCCinFV_stack_12->SetBinContent(14,19.7583);
   hnumuCCinFV_stack_12->SetBinContent(15,10.48627);
   hnumuCCinFV_stack_12->SetBinContent(16,9.212912);
   hnumuCCinFV_stack_12->SetBinContent(17,8.739441);
   hnumuCCinFV_stack_12->SetBinContent(18,5.994597);
   hnumuCCinFV_stack_12->SetBinContent(19,6.379606);
   hnumuCCinFV_stack_12->SetBinContent(20,6.055296);
   hnumuCCinFV_stack_12->SetBinContent(21,5.230087);
   hnumuCCinFV_stack_12->SetBinContent(22,5.558507);
   hnumuCCinFV_stack_12->SetBinContent(23,8.562157);
   hnumuCCinFV_stack_12->SetBinContent(24,12.9761);
   hnumuCCinFV_stack_12->SetBinContent(25,24.72632);
   hnumuCCinFV_stack_12->SetBinError(1,2.397283);
   hnumuCCinFV_stack_12->SetBinError(2,3.863036);
   hnumuCCinFV_stack_12->SetBinError(3,1.797006);
   hnumuCCinFV_stack_12->SetBinError(4,1.035367);
   hnumuCCinFV_stack_12->SetBinError(5,1.130887);
   hnumuCCinFV_stack_12->SetBinError(6,1.223258);
   hnumuCCinFV_stack_12->SetBinError(7,1.071533);
   hnumuCCinFV_stack_12->SetBinError(8,1.158528);
   hnumuCCinFV_stack_12->SetBinError(9,1.771258);
   hnumuCCinFV_stack_12->SetBinError(10,1.290992);
   hnumuCCinFV_stack_12->SetBinError(11,2.22857);
   hnumuCCinFV_stack_12->SetBinError(12,2.607512);
   hnumuCCinFV_stack_12->SetBinError(13,2.614184);
   hnumuCCinFV_stack_12->SetBinError(14,2.560659);
   hnumuCCinFV_stack_12->SetBinError(15,1.640066);
   hnumuCCinFV_stack_12->SetBinError(16,1.724452);
   hnumuCCinFV_stack_12->SetBinError(17,1.881265);
   hnumuCCinFV_stack_12->SetBinError(18,1.353974);
   hnumuCCinFV_stack_12->SetBinError(19,1.783346);
   hnumuCCinFV_stack_12->SetBinError(20,1.251264);
   hnumuCCinFV_stack_12->SetBinError(21,1.242109);
   hnumuCCinFV_stack_12->SetBinError(22,1.164735);
   hnumuCCinFV_stack_12->SetBinError(23,1.560139);
   hnumuCCinFV_stack_12->SetBinError(24,2.07718);
   hnumuCCinFV_stack_12->SetBinError(25,2.939375);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.8911057);
   hnueCCinFV_stack_13->SetBinContent(4,0.6765332);
   hnueCCinFV_stack_13->SetBinContent(5,0.7793876);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.817753);
   hnueCCinFV_stack_13->SetBinContent(9,0.4047599);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,1.084235);
   hnueCCinFV_stack_13->SetBinContent(13,0.9815189);
   hnueCCinFV_stack_13->SetBinContent(14,0.5148518);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.5508933);
   hnueCCinFV_stack_13->SetBinContent(18,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(19,1.008659);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.2560115);
   hnueCCinFV_stack_13->SetBinContent(23,0.536893);
   hnueCCinFV_stack_13->SetBinContent(24,0.7863669);
   hnueCCinFV_stack_13->SetBinContent(25,1.711908);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.5252213);
   hnueCCinFV_stack_13->SetBinError(4,0.3922567);
   hnueCCinFV_stack_13->SetBinError(5,0.4771304);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.4884076);
   hnueCCinFV_stack_13->SetBinError(9,0.2863205);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.4883754);
   hnueCCinFV_stack_13->SetBinError(13,0.5172119);
   hnueCCinFV_stack_13->SetBinError(14,0.3745984);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.4001523);
   hnueCCinFV_stack_13->SetBinError(18,0.3401776);
   hnueCCinFV_stack_13->SetBinError(19,0.7245898);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.2556439);
   hnueCCinFV_stack_13->SetBinError(23,0.3929602);
   hnueCCinFV_stack_13->SetBinError(24,0.4656598);
   hnueCCinFV_stack_13->SetBinError(25,0.6670957);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);
   hmcerror__20->SetBinContent(1,112.7248);
   hmcerror__20->SetBinContent(2,117.9089);
   hmcerror__20->SetBinContent(3,103.6255);
   hmcerror__20->SetBinContent(4,93.56461);
   hmcerror__20->SetBinContent(5,90.54725);
   hmcerror__20->SetBinContent(6,89.88981);
   hmcerror__20->SetBinContent(7,83.95586);
   hmcerror__20->SetBinContent(8,83.28609);
   hmcerror__20->SetBinContent(9,86.23358);
   hmcerror__20->SetBinContent(10,88.73116);
   hmcerror__20->SetBinContent(11,96.59653);
   hmcerror__20->SetBinContent(12,98.53461);
   hmcerror__20->SetBinContent(13,104.8348);
   hmcerror__20->SetBinContent(14,106.0926);
   hmcerror__20->SetBinContent(15,98.0948);
   hmcerror__20->SetBinContent(16,92.56549);
   hmcerror__20->SetBinContent(17,94.99889);
   hmcerror__20->SetBinContent(18,86.36037);
   hmcerror__20->SetBinContent(19,87.94165);
   hmcerror__20->SetBinContent(20,78.42599);
   hmcerror__20->SetBinContent(21,87.55531);
   hmcerror__20->SetBinContent(22,90.85977);
   hmcerror__20->SetBinContent(23,102.4479);
   hmcerror__20->SetBinContent(24,101.5004);
   hmcerror__20->SetBinContent(25,111.7805);
   hmcerror__20->SetBinError(1,44.02843);
   hmcerror__20->SetBinError(2,43.9152);
   hmcerror__20->SetBinError(3,46.36512);
   hmcerror__20->SetBinError(4,37.17261);
   hmcerror__20->SetBinError(5,32.8284);
   hmcerror__20->SetBinError(6,34.5938);
   hmcerror__20->SetBinError(7,38.56395);
   hmcerror__20->SetBinError(8,34.77983);
   hmcerror__20->SetBinError(9,35.25431);
   hmcerror__20->SetBinError(10,35.60157);
   hmcerror__20->SetBinError(11,37.20607);
   hmcerror__20->SetBinError(12,38.56527);
   hmcerror__20->SetBinError(13,37.58502);
   hmcerror__20->SetBinError(14,37.89338);
   hmcerror__20->SetBinError(15,38.56237);
   hmcerror__20->SetBinError(16,34.93846);
   hmcerror__20->SetBinError(17,40.56244);
   hmcerror__20->SetBinError(18,35.80535);
   hmcerror__20->SetBinError(19,38.28382);
   hmcerror__20->SetBinError(20,36.23005);
   hmcerror__20->SetBinError(21,34.09873);
   hmcerror__20->SetBinError(22,36.87718);
   hmcerror__20->SetBinError(23,38.30719);
   hmcerror__20->SetBinError(24,39.6931);
   hmcerror__20->SetBinError(25,42.68006);
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
   Double_t _fy3025[25] = {
   96,
   111,
   80,
   84,
   99,
   82,
   59,
   74,
   71,
   90,
   87,
   87,
   74,
   90,
   103,
   81,
   74,
   68,
   73,
   67,
   72,
   78,
   71,
   80,
   85};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   9.9196,
   10.53565,
   9.0683,
   9.2886,
   10.0712,
   9.1791,
   7.8097,
   8.7275,
   8.5518,
   9.6093,
   9.4503,
   9.4503,
   8.7275,
   9.6093,
   10.14889,
   9.1239,
   8.7275,
   8.3726,
   8.6693,
   8.3119,
   8.6108,
   8.9562,
   8.5518,
   9.0683,
   9.3428};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   9.718,
   10.53565,
   8.8665,
   9.0869,
   9.87,
   8.9774,
   7.6066,
   8.5253,
   8.3496,
   9.4079,
   9.2488,
   9.2488,
   8.5253,
   9.4079,
   10.14889,
   8.9221,
   8.5253,
   8.1701,
   8.4672,
   8.1094,
   8.4085,
   8.7542,
   8.3496,
   8.8665,
   9.1411};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(44.15576);
   Graph_Graph3025->SetMaximum(128.5702);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.5/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fely3026[25] = {
   0.3905834,
   0.3724501,
   0.4474298,
   0.3972935,
   0.3625555,
   0.3848468,
   0.459336,
   0.4175947,
   0.4088235,
   0.4012297,
   0.3851699,
   0.391388,
   0.3585165,
   0.3571728,
   0.3931133,
   0.3774458,
   0.4269781,
   0.4146039,
   0.4353321,
   0.4619648,
   0.3894535,
   0.4058692,
   0.3739186,
   0.3910637,
   0.3818201};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0.3905834,
   0.3724501,
   0.4474298,
   0.3972935,
   0.3625555,
   0.3848468,
   0.459336,
   0.4175947,
   0.4088235,
   0.4012297,
   0.3851699,
   0.391388,
   0.3585165,
   0.3571728,
   0.3931133,
   0.3774458,
   0.4269781,
   0.4146039,
   0.4353321,
   0.4619648,
   0.3894535,
   0.4058692,
   0.3739186,
   0.3910637,
   0.3818201};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-3.78,3.78);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
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
   Double_t _fely3027[25] = {
   0.3388702,
   0.3268775,
   0.3522316,
   0.3314165,
   0.32848,
   0.3137201,
   0.3748814,
   0.3566101,
   0.3688303,
   0.3711384,
   0.3523195,
   0.3573569,
   0.3136433,
   0.3270289,
   0.3528111,
   0.3484714,
   0.3573949,
   0.3594899,
   0.313865,
   0.3440371,
   0.3241609,
   0.3617164,
   0.3473042,
   0.3586925,
   0.3398994};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0.3388702,
   0.3268775,
   0.3522316,
   0.3314165,
   0.32848,
   0.3137201,
   0.3748814,
   0.3566101,
   0.3688303,
   0.3711384,
   0.3523195,
   0.3573569,
   0.3136433,
   0.3270289,
   0.3528111,
   0.3484714,
   0.3573949,
   0.3594899,
   0.313865,
   0.3440371,
   0.3241609,
   0.3617164,
   0.3473042,
   0.3586925,
   0.3398994};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-3.78,3.78);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3028[25] = {
   0.8516317,
   0.9414044,
   0.772011,
   0.8977753,
   1.093352,
   0.912228,
   0.7027502,
   0.8885037,
   0.8233451,
   1.0143,
   0.9006535,
   0.8829385,
   0.7058723,
   0.8483157,
   1.050005,
   0.8750561,
   0.7789565,
   0.7873982,
   0.8300959,
   0.8543086,
   0.8223373,
   0.8584657,
   0.6930349,
   0.7881745,
   0.7604185};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0.08799839,
   0.08935415,
   0.08751034,
   0.09927471,
   0.1112259,
   0.102115,
   0.0930215,
   0.1047894,
   0.09917018,
   0.1082968,
   0.09783271,
   0.09590843,
   0.08325,
   0.09057466,
   0.10346,
   0.09856697,
   0.0918695,
   0.09694956,
   0.09858014,
   0.105984,
   0.09834697,
   0.09857168,
   0.08347459,
   0.08934253,
   0.08358163};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0.08620997,
   0.08935415,
   0.08556294,
   0.09711898,
   0.1090039,
   0.09987117,
   0.09060237,
   0.1023616,
   0.09682539,
   0.106027,
   0.09574671,
   0.09386346,
   0.08132125,
   0.08867632,
   0.10346,
   0.09638689,
   0.08974105,
   0.09460473,
   0.09628202,
   0.1034019,
   0.09603643,
   0.09634847,
   0.08150091,
   0.08735436,
   0.0817772};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.5502808);
   Graph_Graph3028->SetMaximum(1.261635);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",25,-3.15,3.15);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
