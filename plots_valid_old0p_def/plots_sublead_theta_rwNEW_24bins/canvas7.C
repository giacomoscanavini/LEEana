#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 14:17:36 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
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
   pad1->Range(-0.4846154,-3.801643,3.553846,420.3817);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__19->SetBinContent(1,29.08789);
   hmc__19->SetBinContent(2,81.39944);
   hmc__19->SetBinContent(3,116.6774);
   hmc__19->SetBinContent(4,159.2177);
   hmc__19->SetBinContent(5,167.9784);
   hmc__19->SetBinContent(6,182.2604);
   hmc__19->SetBinContent(7,177.3381);
   hmc__19->SetBinContent(8,190.0822);
   hmc__19->SetBinContent(9,179.2894);
   hmc__19->SetBinContent(10,164.0587);
   hmc__19->SetBinContent(11,169.6228);
   hmc__19->SetBinContent(12,159.3637);
   hmc__19->SetBinContent(13,146.9036);
   hmc__19->SetBinContent(14,136.154);
   hmc__19->SetBinContent(15,137.4634);
   hmc__19->SetBinContent(16,113.2345);
   hmc__19->SetBinContent(17,102.6009);
   hmc__19->SetBinContent(18,100.7301);
   hmc__19->SetBinContent(19,87.22213);
   hmc__19->SetBinContent(20,88.23892);
   hmc__19->SetBinContent(21,61.83754);
   hmc__19->SetBinContent(22,52.27846);
   hmc__19->SetBinContent(23,27.53694);
   hmc__19->SetBinContent(24,12.07177);
   hmc__19->SetBinError(1,14.9248);
   hmc__19->SetBinError(2,31.2354);
   hmc__19->SetBinError(3,44.38418);
   hmc__19->SetBinError(4,55.27094);
   hmc__19->SetBinError(5,61.68044);
   hmc__19->SetBinError(6,71.59159);
   hmc__19->SetBinError(7,71.62406);
   hmc__19->SetBinError(8,70.82886);
   hmc__19->SetBinError(9,69.1729);
   hmc__19->SetBinError(10,66.00837);
   hmc__19->SetBinError(11,64.6158);
   hmc__19->SetBinError(12,64.13429);
   hmc__19->SetBinError(13,56.70767);
   hmc__19->SetBinError(14,47.14958);
   hmc__19->SetBinError(15,49.38994);
   hmc__19->SetBinError(16,42.8583);
   hmc__19->SetBinError(17,37.85026);
   hmc__19->SetBinError(18,37.39357);
   hmc__19->SetBinError(19,32.60887);
   hmc__19->SetBinError(20,30.70365);
   hmc__19->SetBinError(21,24.55748);
   hmc__19->SetBinError(22,17.83101);
   hmc__19->SetBinError(23,16.20275);
   hmc__19->SetBinError(24,5.865487);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-3.801643);
   hmc__19->SetMaximum(399.1726);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,3.15);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(199.5863);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,1.844751);
   hbadmatch_stack_1->SetBinContent(4,2.736028);
   hbadmatch_stack_1->SetBinContent(5,1.557855);
   hbadmatch_stack_1->SetBinContent(6,3.700779);
   hbadmatch_stack_1->SetBinContent(7,2.983936);
   hbadmatch_stack_1->SetBinContent(8,5.023204);
   hbadmatch_stack_1->SetBinContent(9,3.901185);
   hbadmatch_stack_1->SetBinContent(10,4.112477);
   hbadmatch_stack_1->SetBinContent(11,5.970402);
   hbadmatch_stack_1->SetBinContent(12,3.39228);
   hbadmatch_stack_1->SetBinContent(13,2.33295);
   hbadmatch_stack_1->SetBinContent(14,2.215547);
   hbadmatch_stack_1->SetBinContent(15,4.288814);
   hbadmatch_stack_1->SetBinContent(16,2.60182);
   hbadmatch_stack_1->SetBinContent(17,1.760909);
   hbadmatch_stack_1->SetBinContent(18,1.005242);
   hbadmatch_stack_1->SetBinContent(19,2.475068);
   hbadmatch_stack_1->SetBinContent(20,1.7555);
   hbadmatch_stack_1->SetBinContent(21,1.610679);
   hbadmatch_stack_1->SetBinContent(22,1.322064);
   hbadmatch_stack_1->SetBinContent(23,0.785171);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.8873482);
   hbadmatch_stack_1->SetBinError(4,0.8562123);
   hbadmatch_stack_1->SetBinError(5,0.6034406);
   hbadmatch_stack_1->SetBinError(6,0.989638);
   hbadmatch_stack_1->SetBinError(7,0.8912829);
   hbadmatch_stack_1->SetBinError(8,1.161561);
   hbadmatch_stack_1->SetBinError(9,1.049162);
   hbadmatch_stack_1->SetBinError(10,1.463721);
   hbadmatch_stack_1->SetBinError(11,1.261956);
   hbadmatch_stack_1->SetBinError(12,0.9387748);
   hbadmatch_stack_1->SetBinError(13,0.8540338);
   hbadmatch_stack_1->SetBinError(14,0.8595662);
   hbadmatch_stack_1->SetBinError(15,2.12347);
   hbadmatch_stack_1->SetBinError(16,0.8615377);
   hbadmatch_stack_1->SetBinError(17,0.7075872);
   hbadmatch_stack_1->SetBinError(18,0.4499639);
   hbadmatch_stack_1->SetBinError(19,0.7682701);
   hbadmatch_stack_1->SetBinError(20,0.635041);
   hbadmatch_stack_1->SetBinError(21,0.6806271);
   hbadmatch_stack_1->SetBinError(22,0.5554667);
   hbadmatch_stack_1->SetBinError(23,0.3925882);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,3.704052);
   hext_stack_2->SetBinContent(2,5.553873);
   hext_stack_2->SetBinContent(3,4.856008);
   hext_stack_2->SetBinContent(4,8.947888);
   hext_stack_2->SetBinContent(5,6.578966);
   hext_stack_2->SetBinContent(6,9.798627);
   hext_stack_2->SetBinContent(7,8.884457);
   hext_stack_2->SetBinContent(8,11.81285);
   hext_stack_2->SetBinContent(9,16.29974);
   hext_stack_2->SetBinContent(10,7.138379);
   hext_stack_2->SetBinContent(11,7.145559);
   hext_stack_2->SetBinContent(12,8.98102);
   hext_stack_2->SetBinContent(13,13.23289);
   hext_stack_2->SetBinContent(14,12.42411);
   hext_stack_2->SetBinContent(15,11.0559);
   hext_stack_2->SetBinContent(16,8.022189);
   hext_stack_2->SetBinContent(17,7.187449);
   hext_stack_2->SetBinContent(18,9.51889);
   hext_stack_2->SetBinContent(19,3.819384);
   hext_stack_2->SetBinContent(20,7.434054);
   hext_stack_2->SetBinContent(21,3.636211);
   hext_stack_2->SetBinContent(22,7.960336);
   hext_stack_2->SetBinContent(23,1.055394);
   hext_stack_2->SetBinContent(24,3.379654);
   hext_stack_2->SetBinError(1,1.443106);
   hext_stack_2->SetBinError(2,1.748219);
   hext_stack_2->SetBinError(3,1.454658);
   hext_stack_2->SetBinError(4,2.152019);
   hext_stack_2->SetBinError(5,1.560451);
   hext_stack_2->SetBinError(6,2.104108);
   hext_stack_2->SetBinError(7,2.074564);
   hext_stack_2->SetBinError(8,2.349716);
   hext_stack_2->SetBinError(9,2.875365);
   hext_stack_2->SetBinError(10,1.669307);
   hext_stack_2->SetBinError(11,1.607913);
   hext_stack_2->SetBinError(12,1.990353);
   hext_stack_2->SetBinError(13,2.541991);
   hext_stack_2->SetBinError(14,2.503237);
   hext_stack_2->SetBinError(15,2.391462);
   hext_stack_2->SetBinError(16,1.800944);
   hext_stack_2->SetBinError(17,1.875196);
   hext_stack_2->SetBinError(18,2.21736);
   hext_stack_2->SetBinError(19,1.213655);
   hext_stack_2->SetBinError(20,1.922661);
   hext_stack_2->SetBinError(21,1.272817);
   hext_stack_2->SetBinError(22,2.17207);
   hext_stack_2->SetBinError(23,0.6130171);
   hext_stack_2->SetBinError(24,1.406172);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.5758626);
   hdirt_stack_3->SetBinContent(6,1.122146);
   hdirt_stack_3->SetBinContent(7,0.5716082);
   hdirt_stack_3->SetBinContent(8,1.149204);
   hdirt_stack_3->SetBinContent(9,0.3569671);
   hdirt_stack_3->SetBinContent(10,0.4377912);
   hdirt_stack_3->SetBinContent(11,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.3775263);
   hdirt_stack_3->SetBinContent(14,1.060553);
   hdirt_stack_3->SetBinContent(15,0.402661);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.218401);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.9411583);
   hdirt_stack_3->SetBinContent(20,0.7817008);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2188956);
   hdirt_stack_3->SetBinError(4,0.258803);
   hdirt_stack_3->SetBinError(5,0.3389606);
   hdirt_stack_3->SetBinError(6,0.5200476);
   hdirt_stack_3->SetBinError(7,0.3390821);
   hdirt_stack_3->SetBinError(8,0.9557142);
   hdirt_stack_3->SetBinError(9,0.258803);
   hdirt_stack_3->SetBinError(10,0.3095651);
   hdirt_stack_3->SetBinError(11,0.458477);
   hdirt_stack_3->SetBinError(12,0.2703313);
   hdirt_stack_3->SetBinError(14,0.5513393);
   hdirt_stack_3->SetBinError(15,0.2961962);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.6251366);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.4873249);
   hdirt_stack_3->SetBinError(20,0.4973709);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,0.9286332);
   houtFV_stack_4->SetBinContent(2,1.908829);
   houtFV_stack_4->SetBinContent(3,3.174259);
   houtFV_stack_4->SetBinContent(4,6.588534);
   houtFV_stack_4->SetBinContent(5,7.812283);
   houtFV_stack_4->SetBinContent(6,6.93039);
   houtFV_stack_4->SetBinContent(7,5.033216);
   houtFV_stack_4->SetBinContent(8,4.399352);
   houtFV_stack_4->SetBinContent(9,4.152764);
   houtFV_stack_4->SetBinContent(10,4.436457);
   houtFV_stack_4->SetBinContent(11,4.937935);
   houtFV_stack_4->SetBinContent(12,3.508154);
   houtFV_stack_4->SetBinContent(13,5.779466);
   houtFV_stack_4->SetBinContent(14,2.577139);
   houtFV_stack_4->SetBinContent(15,4.106185);
   houtFV_stack_4->SetBinContent(16,4.140003);
   houtFV_stack_4->SetBinContent(17,3.571467);
   houtFV_stack_4->SetBinContent(18,5.621735);
   houtFV_stack_4->SetBinContent(19,4.018686);
   houtFV_stack_4->SetBinContent(20,4.202832);
   houtFV_stack_4->SetBinContent(21,1.934232);
   houtFV_stack_4->SetBinContent(22,1.463836);
   houtFV_stack_4->SetBinContent(23,3.077896);
   houtFV_stack_4->SetBinContent(24,0.767341);
   houtFV_stack_4->SetBinError(1,0.48078);
   houtFV_stack_4->SetBinError(2,0.6506224);
   houtFV_stack_4->SetBinError(3,0.8768439);
   houtFV_stack_4->SetBinError(4,1.280133);
   houtFV_stack_4->SetBinError(5,1.408606);
   houtFV_stack_4->SetBinError(6,1.388414);
   houtFV_stack_4->SetBinError(7,1.109872);
   houtFV_stack_4->SetBinError(8,0.979489);
   houtFV_stack_4->SetBinError(9,0.9799761);
   houtFV_stack_4->SetBinError(10,1.089059);
   houtFV_stack_4->SetBinError(11,1.055689);
   houtFV_stack_4->SetBinError(12,0.9120509);
   houtFV_stack_4->SetBinError(13,1.26154);
   houtFV_stack_4->SetBinError(14,0.7152516);
   houtFV_stack_4->SetBinError(15,1.038472);
   houtFV_stack_4->SetBinError(16,1.007781);
   houtFV_stack_4->SetBinError(17,0.9956663);
   houtFV_stack_4->SetBinError(18,1.21287);
   houtFV_stack_4->SetBinError(19,0.9832638);
   houtFV_stack_4->SetBinError(20,0.9908426);
   houtFV_stack_4->SetBinError(21,0.6586828);
   houtFV_stack_4->SetBinError(22,0.620407);
   houtFV_stack_4->SetBinError(23,0.9216738);
   houtFV_stack_4->SetBinError(24,0.455548);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.8071078);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2511016);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8375041);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9625539);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.297026);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.04559);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8786857);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.228104);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.158022);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.19954);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.626922);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3487535);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3148322);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4329789);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3390387);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2530319);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3640422);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3705767);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.381105);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2655413);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.64199);
   hNCpi0inFVres_stack_7->SetBinContent(2,35.61734);
   hNCpi0inFVres_stack_7->SetBinContent(3,55.04891);
   hNCpi0inFVres_stack_7->SetBinContent(4,71.43792);
   hNCpi0inFVres_stack_7->SetBinContent(5,77.71907);
   hNCpi0inFVres_stack_7->SetBinContent(6,83.98351);
   hNCpi0inFVres_stack_7->SetBinContent(7,88.59864);
   hNCpi0inFVres_stack_7->SetBinContent(8,92.35487);
   hNCpi0inFVres_stack_7->SetBinContent(9,87.85249);
   hNCpi0inFVres_stack_7->SetBinContent(10,81.60101);
   hNCpi0inFVres_stack_7->SetBinContent(11,78.60438);
   hNCpi0inFVres_stack_7->SetBinContent(12,79.473);
   hNCpi0inFVres_stack_7->SetBinContent(13,67.06705);
   hNCpi0inFVres_stack_7->SetBinContent(14,58.11176);
   hNCpi0inFVres_stack_7->SetBinContent(15,60.02131);
   hNCpi0inFVres_stack_7->SetBinContent(16,51.62283);
   hNCpi0inFVres_stack_7->SetBinContent(17,47.61073);
   hNCpi0inFVres_stack_7->SetBinContent(18,44.43842);
   hNCpi0inFVres_stack_7->SetBinContent(19,41.82891);
   hNCpi0inFVres_stack_7->SetBinContent(20,36.52888);
   hNCpi0inFVres_stack_7->SetBinContent(21,29.28646);
   hNCpi0inFVres_stack_7->SetBinContent(22,17.75957);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.66473);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.447443);
   hNCpi0inFVres_stack_7->SetBinError(1,1.149059);
   hNCpi0inFVres_stack_7->SetBinError(2,2.036352);
   hNCpi0inFVres_stack_7->SetBinError(3,2.447398);
   hNCpi0inFVres_stack_7->SetBinError(4,2.787536);
   hNCpi0inFVres_stack_7->SetBinError(5,2.855701);
   hNCpi0inFVres_stack_7->SetBinError(6,3.023897);
   hNCpi0inFVres_stack_7->SetBinError(7,3.099848);
   hNCpi0inFVres_stack_7->SetBinError(8,3.196507);
   hNCpi0inFVres_stack_7->SetBinError(9,3.090533);
   hNCpi0inFVres_stack_7->SetBinError(10,2.929692);
   hNCpi0inFVres_stack_7->SetBinError(11,2.92755);
   hNCpi0inFVres_stack_7->SetBinError(12,2.971355);
   hNCpi0inFVres_stack_7->SetBinError(13,2.669338);
   hNCpi0inFVres_stack_7->SetBinError(14,2.418741);
   hNCpi0inFVres_stack_7->SetBinError(15,2.595686);
   hNCpi0inFVres_stack_7->SetBinError(16,2.291022);
   hNCpi0inFVres_stack_7->SetBinError(17,2.313128);
   hNCpi0inFVres_stack_7->SetBinError(18,2.223357);
   hNCpi0inFVres_stack_7->SetBinError(19,2.11895);
   hNCpi0inFVres_stack_7->SetBinError(20,1.953449);
   hNCpi0inFVres_stack_7->SetBinError(21,1.714219);
   hNCpi0inFVres_stack_7->SetBinError(22,1.315731);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9869485);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7571794);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.069848);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.449579);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.21261);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.31815);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.15948);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.89078);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.46731);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.33809);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.49908);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.78539);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.56867);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.60828);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.45947);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.04154);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.90504);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.294966);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.207689);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.174492);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.787614);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.407238);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.962063);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.541315);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.895544);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.7526357);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6276527);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9285305);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.136229);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.1659);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.307844);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.381673);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.484099);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.285987);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.175513);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.11981);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.252122);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.208707);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.076211);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.069468);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.138396);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9194389);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8305105);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.035948);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7929923);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9897056);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6897905);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5327894);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3986575);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.185768);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,3.608485);
   hCCpi0inFV_stack_10->SetBinContent(2,11.28706);
   hCCpi0inFV_stack_10->SetBinContent(3,15.53689);
   hCCpi0inFV_stack_10->SetBinContent(4,21.41623);
   hCCpi0inFV_stack_10->SetBinContent(5,23.90659);
   hCCpi0inFV_stack_10->SetBinContent(6,29.02327);
   hCCpi0inFV_stack_10->SetBinContent(7,21.22882);
   hCCpi0inFV_stack_10->SetBinContent(8,26.43067);
   hCCpi0inFV_stack_10->SetBinContent(9,27.30285);
   hCCpi0inFV_stack_10->SetBinContent(10,22.35917);
   hCCpi0inFV_stack_10->SetBinContent(11,21.33715);
   hCCpi0inFV_stack_10->SetBinContent(12,15.70769);
   hCCpi0inFV_stack_10->SetBinContent(13,14.84095);
   hCCpi0inFV_stack_10->SetBinContent(14,20.64855);
   hCCpi0inFV_stack_10->SetBinContent(15,18.22091);
   hCCpi0inFV_stack_10->SetBinContent(16,15.03592);
   hCCpi0inFV_stack_10->SetBinContent(17,16.27117);
   hCCpi0inFV_stack_10->SetBinContent(18,15.66842);
   hCCpi0inFV_stack_10->SetBinContent(19,12.84519);
   hCCpi0inFV_stack_10->SetBinContent(20,11.04922);
   hCCpi0inFV_stack_10->SetBinContent(21,7.567456);
   hCCpi0inFV_stack_10->SetBinContent(22,7.182478);
   hCCpi0inFV_stack_10->SetBinContent(23,4.235572);
   hCCpi0inFV_stack_10->SetBinContent(24,1.073786);
   hCCpi0inFV_stack_10->SetBinError(1,0.929283);
   hCCpi0inFV_stack_10->SetBinError(2,1.688436);
   hCCpi0inFV_stack_10->SetBinError(3,1.936197);
   hCCpi0inFV_stack_10->SetBinError(4,2.311295);
   hCCpi0inFV_stack_10->SetBinError(5,2.492777);
   hCCpi0inFV_stack_10->SetBinError(6,2.67799);
   hCCpi0inFV_stack_10->SetBinError(7,2.30374);
   hCCpi0inFV_stack_10->SetBinError(8,2.580805);
   hCCpi0inFV_stack_10->SetBinError(9,2.655539);
   hCCpi0inFV_stack_10->SetBinError(10,2.403859);
   hCCpi0inFV_stack_10->SetBinError(11,2.31696);
   hCCpi0inFV_stack_10->SetBinError(12,1.976246);
   hCCpi0inFV_stack_10->SetBinError(13,1.884995);
   hCCpi0inFV_stack_10->SetBinError(14,2.284533);
   hCCpi0inFV_stack_10->SetBinError(15,2.150463);
   hCCpi0inFV_stack_10->SetBinError(16,1.954831);
   hCCpi0inFV_stack_10->SetBinError(17,1.996395);
   hCCpi0inFV_stack_10->SetBinError(18,2.015572);
   hCCpi0inFV_stack_10->SetBinError(19,1.837459);
   hCCpi0inFV_stack_10->SetBinError(20,1.606288);
   hCCpi0inFV_stack_10->SetBinError(21,1.387167);
   hCCpi0inFV_stack_10->SetBinError(22,1.360202);
   hCCpi0inFV_stack_10->SetBinError(23,1.107411);
   hCCpi0inFV_stack_10->SetBinError(24,0.5557297);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.858957);
   hNCinFV_stack_11->SetBinContent(2,7.722753);
   hNCinFV_stack_11->SetBinContent(3,12.11703);
   hNCinFV_stack_11->SetBinContent(4,15.68195);
   hNCinFV_stack_11->SetBinContent(5,14.40915);
   hNCinFV_stack_11->SetBinContent(6,13.76974);
   hNCinFV_stack_11->SetBinContent(7,14.17439);
   hNCinFV_stack_11->SetBinContent(8,14.90523);
   hNCinFV_stack_11->SetBinContent(9,10.74341);
   hNCinFV_stack_11->SetBinContent(10,13.25421);
   hNCinFV_stack_11->SetBinContent(11,15.33501);
   hNCinFV_stack_11->SetBinContent(12,13.05243);
   hNCinFV_stack_11->SetBinContent(13,12.46735);
   hNCinFV_stack_11->SetBinContent(14,12.84895);
   hNCinFV_stack_11->SetBinContent(15,11.82395);
   hNCinFV_stack_11->SetBinContent(16,11.46917);
   hNCinFV_stack_11->SetBinContent(17,8.971886);
   hNCinFV_stack_11->SetBinContent(18,8.301064);
   hNCinFV_stack_11->SetBinContent(19,7.478938);
   hNCinFV_stack_11->SetBinContent(20,7.18586);
   hNCinFV_stack_11->SetBinContent(21,5.674924);
   hNCinFV_stack_11->SetBinContent(22,4.249735);
   hNCinFV_stack_11->SetBinContent(23,2.389088);
   hNCinFV_stack_11->SetBinContent(24,0.7868615);
   hNCinFV_stack_11->SetBinError(1,0.6804124);
   hNCinFV_stack_11->SetBinError(2,1.416295);
   hNCinFV_stack_11->SetBinError(3,1.721425);
   hNCinFV_stack_11->SetBinError(4,2.001713);
   hNCinFV_stack_11->SetBinError(5,1.860117);
   hNCinFV_stack_11->SetBinError(6,1.892676);
   hNCinFV_stack_11->SetBinError(7,1.861619);
   hNCinFV_stack_11->SetBinError(8,1.963681);
   hNCinFV_stack_11->SetBinError(9,1.641265);
   hNCinFV_stack_11->SetBinError(10,1.799385);
   hNCinFV_stack_11->SetBinError(11,1.971924);
   hNCinFV_stack_11->SetBinError(12,1.788044);
   hNCinFV_stack_11->SetBinError(13,1.755847);
   hNCinFV_stack_11->SetBinError(14,1.776445);
   hNCinFV_stack_11->SetBinError(15,1.733561);
   hNCinFV_stack_11->SetBinError(16,1.755614);
   hNCinFV_stack_11->SetBinError(17,1.594817);
   hNCinFV_stack_11->SetBinError(18,1.455111);
   hNCinFV_stack_11->SetBinError(19,1.345193);
   hNCinFV_stack_11->SetBinError(20,1.360689);
   hNCinFV_stack_11->SetBinError(21,1.144079);
   hNCinFV_stack_11->SetBinError(22,1.038438);
   hNCinFV_stack_11->SetBinError(23,0.784047);
   hNCinFV_stack_11->SetBinError(24,0.3934307);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.747412);
   hnumuCCinFV_stack_12->SetBinContent(2,8.042622);
   hnumuCCinFV_stack_12->SetBinContent(3,9.631842);
   hnumuCCinFV_stack_12->SetBinContent(4,16.16217);
   hnumuCCinFV_stack_12->SetBinContent(5,16.67201);
   hnumuCCinFV_stack_12->SetBinContent(6,14.11148);
   hnumuCCinFV_stack_12->SetBinContent(7,13.93523);
   hnumuCCinFV_stack_12->SetBinContent(8,16.91897);
   hnumuCCinFV_stack_12->SetBinContent(9,12.49205);
   hnumuCCinFV_stack_12->SetBinContent(10,15.18423);
   hnumuCCinFV_stack_12->SetBinContent(11,19.39735);
   hnumuCCinFV_stack_12->SetBinContent(12,19.79566);
   hnumuCCinFV_stack_12->SetBinContent(13,18.07644);
   hnumuCCinFV_stack_12->SetBinContent(14,12.78229);
   hnumuCCinFV_stack_12->SetBinContent(15,14.18699);
   hnumuCCinFV_stack_12->SetBinContent(16,10.81812);
   hnumuCCinFV_stack_12->SetBinContent(17,7.802073);
   hnumuCCinFV_stack_12->SetBinContent(18,5.961316);
   hnumuCCinFV_stack_12->SetBinContent(19,6.979975);
   hnumuCCinFV_stack_12->SetBinContent(20,9.366391);
   hnumuCCinFV_stack_12->SetBinContent(21,6.287326);
   hnumuCCinFV_stack_12->SetBinContent(22,7.93094);
   hnumuCCinFV_stack_12->SetBinContent(23,4.267574);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8361483);
   hnumuCCinFV_stack_12->SetBinError(1,0.8145548);
   hnumuCCinFV_stack_12->SetBinError(2,1.391416);
   hnumuCCinFV_stack_12->SetBinError(3,1.84811);
   hnumuCCinFV_stack_12->SetBinError(4,2.683567);
   hnumuCCinFV_stack_12->SetBinError(5,2.482904);
   hnumuCCinFV_stack_12->SetBinError(6,3.016813);
   hnumuCCinFV_stack_12->SetBinError(7,1.91519);
   hnumuCCinFV_stack_12->SetBinError(8,2.246277);
   hnumuCCinFV_stack_12->SetBinError(9,1.95423);
   hnumuCCinFV_stack_12->SetBinError(10,2.184463);
   hnumuCCinFV_stack_12->SetBinError(11,2.791085);
   hnumuCCinFV_stack_12->SetBinError(12,2.477388);
   hnumuCCinFV_stack_12->SetBinError(13,2.525696);
   hnumuCCinFV_stack_12->SetBinError(14,2.032914);
   hnumuCCinFV_stack_12->SetBinError(15,2.223146);
   hnumuCCinFV_stack_12->SetBinError(16,1.77791);
   hnumuCCinFV_stack_12->SetBinError(17,1.72797);
   hnumuCCinFV_stack_12->SetBinError(18,1.262605);
   hnumuCCinFV_stack_12->SetBinError(19,1.40176);
   hnumuCCinFV_stack_12->SetBinError(20,1.765724);
   hnumuCCinFV_stack_12->SetBinError(21,1.362245);
   hnumuCCinFV_stack_12->SetBinError(22,1.782308);
   hnumuCCinFV_stack_12->SetBinError(23,1.032276);
   hnumuCCinFV_stack_12->SetBinError(24,0.4204524);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.04884);
   hnueCCinFV_stack_13->SetBinContent(2,1.747976);
   hnueCCinFV_stack_13->SetBinContent(3,0.9710591);
   hnueCCinFV_stack_13->SetBinContent(4,0.7743472);
   hnueCCinFV_stack_13->SetBinContent(5,0.8578513);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(8,0.536893);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,1.913882);
   hnueCCinFV_stack_13->SetBinContent(11,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(12,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,0.8304475);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(19,0.5878536);
   hnueCCinFV_stack_13->SetBinContent(20,0.6905718);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.553806);
   hnueCCinFV_stack_13->SetBinError(2,0.6853088);
   hnueCCinFV_stack_13->SetBinError(3,0.5823682);
   hnueCCinFV_stack_13->SetBinError(4,0.4672522);
   hnueCCinFV_stack_13->SetBinError(5,0.431464);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.4800908);
   hnueCCinFV_stack_13->SetBinError(8,0.3929602);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.7414176);
   hnueCCinFV_stack_13->SetBinError(11,0.1967157);
   hnueCCinFV_stack_13->SetBinError(12,0.2538659);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.4859259);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.5946997);
   hnueCCinFV_stack_13->SetBinError(19,0.42079);
   hnueCCinFV_stack_13->SetBinError(20,0.4008118);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__20->SetBinContent(1,29.08789);
   hmcerror__20->SetBinContent(2,81.39944);
   hmcerror__20->SetBinContent(3,116.6774);
   hmcerror__20->SetBinContent(4,159.2177);
   hmcerror__20->SetBinContent(5,167.9784);
   hmcerror__20->SetBinContent(6,182.2604);
   hmcerror__20->SetBinContent(7,177.3381);
   hmcerror__20->SetBinContent(8,190.0822);
   hmcerror__20->SetBinContent(9,179.2894);
   hmcerror__20->SetBinContent(10,164.0587);
   hmcerror__20->SetBinContent(11,169.6228);
   hmcerror__20->SetBinContent(12,159.3637);
   hmcerror__20->SetBinContent(13,146.9036);
   hmcerror__20->SetBinContent(14,136.154);
   hmcerror__20->SetBinContent(15,137.4634);
   hmcerror__20->SetBinContent(16,113.2345);
   hmcerror__20->SetBinContent(17,102.6009);
   hmcerror__20->SetBinContent(18,100.7301);
   hmcerror__20->SetBinContent(19,87.22213);
   hmcerror__20->SetBinContent(20,88.23892);
   hmcerror__20->SetBinContent(21,61.83754);
   hmcerror__20->SetBinContent(22,52.27846);
   hmcerror__20->SetBinContent(23,27.53694);
   hmcerror__20->SetBinContent(24,12.07177);
   hmcerror__20->SetBinError(1,14.9248);
   hmcerror__20->SetBinError(2,31.2354);
   hmcerror__20->SetBinError(3,44.38418);
   hmcerror__20->SetBinError(4,55.27094);
   hmcerror__20->SetBinError(5,61.68044);
   hmcerror__20->SetBinError(6,71.59159);
   hmcerror__20->SetBinError(7,71.62406);
   hmcerror__20->SetBinError(8,70.82886);
   hmcerror__20->SetBinError(9,69.1729);
   hmcerror__20->SetBinError(10,66.00837);
   hmcerror__20->SetBinError(11,64.6158);
   hmcerror__20->SetBinError(12,64.13429);
   hmcerror__20->SetBinError(13,56.70767);
   hmcerror__20->SetBinError(14,47.14958);
   hmcerror__20->SetBinError(15,49.38994);
   hmcerror__20->SetBinError(16,42.8583);
   hmcerror__20->SetBinError(17,37.85026);
   hmcerror__20->SetBinError(18,37.39357);
   hmcerror__20->SetBinError(19,32.60887);
   hmcerror__20->SetBinError(20,30.70365);
   hmcerror__20->SetBinError(21,24.55748);
   hmcerror__20->SetBinError(22,17.83101);
   hmcerror__20->SetBinError(23,16.20275);
   hmcerror__20->SetBinError(24,5.865487);
   hmcerror__20->SetBinError(25,0.3895343);
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
   
   Double_t _fx3025[24] = {
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
   Double_t _fy3025[24] = {
   28,
   64,
   104,
   117,
   124,
   120,
   138,
   108,
   104,
   108,
   107,
   131,
   105,
   99,
   103,
   79,
   65,
   78,
   68,
   64,
   48,
   44,
   25,
   5};
   Double_t _felx3025[24] = {
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
   Double_t _fely3025[24] = {
   5.4358,
   8.1273,
   10.19804,
   10.81665,
   11.13553,
   10.95445,
   11.74734,
   10.3923,
   10.19804,
   10.3923,
   10.34408,
   11.44552,
   10.24695,
   10.0712,
   10.14889,
   9.0124,
   8.1893,
   8.9562,
   8.3726,
   8.1273,
   7.0604,
   6.7671,
   5.1474,
   2.48995};
   Double_t _fehx3025[24] = {
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
   Double_t _fehy3025[24] = {
   5.2271,
   7.9246,
   10.19804,
   10.81665,
   11.13553,
   10.95445,
   11.74734,
   10.3923,
   10.19804,
   10.3923,
   10.34408,
   11.44552,
   10.24695,
   9.87,
   10.14889,
   8.8105,
   7.9866,
   8.7542,
   8.1701,
   7.9246,
   6.8561,
   6.5623,
   4.9374,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(2.259045);
   Graph_Graph3025->SetMaximum(164.4711);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

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
   
   Double_t _fx3026[24] = {
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
   Double_t _fy3026[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[24] = {
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
   Double_t _fely3026[24] = {
   0.5130931,
   0.3837299,
   0.3804007,
   0.3471406,
   0.3671926,
   0.3927984,
   0.4038843,
   0.3726223,
   0.385817,
   0.4023461,
   0.3809381,
   0.4024397,
   0.3860195,
   0.3462959,
   0.3592953,
   0.3784916,
   0.3689078,
   0.3712253,
   0.3738601,
   0.3479603,
   0.397129,
   0.3410776,
   0.5884005,
   0.4858846};
   Double_t _fehx3026[24] = {
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
   Double_t _fehy3026[24] = {
   0.5130931,
   0.3837299,
   0.3804007,
   0.3471406,
   0.3671926,
   0.3927984,
   0.4038843,
   0.3726223,
   0.385817,
   0.4023461,
   0.3809381,
   0.4024397,
   0.3860195,
   0.3462959,
   0.3592953,
   0.3784916,
   0.3689078,
   0.3712253,
   0.3738601,
   0.3479603,
   0.397129,
   0.3410776,
   0.5884005,
   0.4858846};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
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
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3027[24] = {
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
   Double_t _fy3027[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[24] = {
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
   Double_t _fely3027[24] = {
   0.2835001,
   0.3279654,
   0.3352335,
   0.3137194,
   0.3401291,
   0.3449094,
   0.3684022,
   0.3464814,
   0.3420236,
   0.3677805,
   0.3492633,
   0.3679818,
   0.3458135,
   0.3166938,
   0.3247219,
   0.3341805,
   0.3230789,
   0.3087648,
   0.3270329,
   0.2896422,
   0.3278877,
   0.2803305,
   0.3075727,
   0.298746};
   Double_t _fehx3027[24] = {
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
   Double_t _fehy3027[24] = {
   0.2835001,
   0.3279654,
   0.3352335,
   0.3137194,
   0.3401291,
   0.3449094,
   0.3684022,
   0.3464814,
   0.3420236,
   0.3677805,
   0.3492633,
   0.3679818,
   0.3458135,
   0.3166938,
   0.3247219,
   0.3341805,
   0.3230789,
   0.3087648,
   0.3270329,
   0.2896422,
   0.3278877,
   0.2803305,
   0.3075727,
   0.298746};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
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
   
   Double_t _fx3028[24] = {
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
   Double_t _fy3028[24] = {
   0.9625998,
   0.7862462,
   0.8913463,
   0.7348427,
   0.73819,
   0.6583987,
   0.7781748,
   0.5681753,
   0.5800677,
   0.6583011,
   0.6308113,
   0.822019,
   0.7147542,
   0.7271178,
   0.7492906,
   0.6976673,
   0.633523,
   0.7743465,
   0.7796187,
   0.7253035,
   0.7762275,
   0.8416469,
   0.9078713,
   0.4141895};
   Double_t _felx3028[24] = {
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
   Double_t _fely3028[24] = {
   0.186875,
   0.09984466,
   0.08740369,
   0.06793623,
   0.06629142,
   0.06010331,
   0.06624263,
   0.0546727,
   0.05688032,
   0.06334505,
   0.06098283,
   0.07182014,
   0.06975287,
   0.07396918,
   0.07382979,
   0.0795906,
   0.07981707,
   0.08891285,
   0.09599169,
   0.09210561,
   0.1141766,
   0.1294434,
   0.1869271,
   0.2062622};
   Double_t _fehx3028[24] = {
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
   Double_t _fehy3028[24] = {
   0.1797002,
   0.09735447,
   0.08740369,
   0.06793623,
   0.06629142,
   0.06010331,
   0.06624263,
   0.0546727,
   0.05688032,
   0.06334505,
   0.06098283,
   0.07182014,
   0.06975287,
   0.07249144,
   0.07382979,
   0.07780757,
   0.07784145,
   0.08690749,
   0.09367004,
   0.08980844,
   0.1108728,
   0.1255259,
   0.179301,
   0.1831248};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.11449);
   Graph_Graph3028->SetMaximum(1.235737);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
