#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 19:43:29 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",242,172,1200,900);
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
   pad1->Range(-46.15385,-6.215743,338.4615,687.3304);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__19->SetBinContent(1,201.4716);
   hmc__19->SetBinContent(2,278.7201);
   hmc__19->SetBinContent(3,310.7872);
   hmc__19->SetBinContent(4,309.6718);
   hmc__19->SetBinContent(5,263.1084);
   hmc__19->SetBinContent(6,223.5703);
   hmc__19->SetBinContent(7,174.7135);
   hmc__19->SetBinContent(8,143.5214);
   hmc__19->SetBinContent(9,101.2436);
   hmc__19->SetBinContent(10,80.56818);
   hmc__19->SetBinContent(11,64.25358);
   hmc__19->SetBinContent(12,47.56073);
   hmc__19->SetBinContent(13,42.2058);
   hmc__19->SetBinContent(14,29.73662);
   hmc__19->SetBinContent(15,28.69932);
   hmc__19->SetBinContent(16,18.09702);
   hmc__19->SetBinContent(17,15.48564);
   hmc__19->SetBinContent(18,12.86197);
   hmc__19->SetBinContent(19,11.03826);
   hmc__19->SetBinContent(20,7.352634);
   hmc__19->SetBinContent(21,24.38819);
   hmc__19->SetBinError(1,58.32275);
   hmc__19->SetBinError(2,91.22389);
   hmc__19->SetBinError(3,121.8499);
   hmc__19->SetBinError(4,124.5473);
   hmc__19->SetBinError(5,107.5644);
   hmc__19->SetBinError(6,92.60846);
   hmc__19->SetBinError(7,80.44708);
   hmc__19->SetBinError(8,58.90226);
   hmc__19->SetBinError(9,39.56122);
   hmc__19->SetBinError(10,33.3394);
   hmc__19->SetBinError(11,26.69319);
   hmc__19->SetBinError(12,18.12983);
   hmc__19->SetBinError(13,18.09564);
   hmc__19->SetBinError(14,16.19527);
   hmc__19->SetBinError(15,16.06425);
   hmc__19->SetBinError(16,11.47638);
   hmc__19->SetBinError(17,16.40555);
   hmc__19->SetBinError(18,7.967317);
   hmc__19->SetBinError(19,13.1825);
   hmc__19->SetBinError(20,8.022103);
   hmc__19->SetBinError(21,16.15469);
   hmc__19->SetMinimum(-6.215743);
   hmc__19->SetMaximum(652.6531);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,300);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(326.3265);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,3.52036);
   hbadmatch_stack_1->SetBinContent(2,8.273139);
   hbadmatch_stack_1->SetBinContent(3,5.231036);
   hbadmatch_stack_1->SetBinContent(4,9.167101);
   hbadmatch_stack_1->SetBinContent(5,7.222969);
   hbadmatch_stack_1->SetBinContent(6,6.120577);
   hbadmatch_stack_1->SetBinContent(7,3.537449);
   hbadmatch_stack_1->SetBinContent(8,1.978577);
   hbadmatch_stack_1->SetBinContent(9,2.18144);
   hbadmatch_stack_1->SetBinContent(10,2.273508);
   hbadmatch_stack_1->SetBinContent(11,1.990905);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.6803553);
   hbadmatch_stack_1->SetBinContent(14,0.1019266);
   hbadmatch_stack_1->SetBinContent(15,0.6443849);
   hbadmatch_stack_1->SetBinContent(16,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.3824374);
   hbadmatch_stack_1->SetBinContent(21,0.2552519);
   hbadmatch_stack_1->SetBinError(1,1.018455);
   hbadmatch_stack_1->SetBinError(2,1.456176);
   hbadmatch_stack_1->SetBinError(3,1.121607);
   hbadmatch_stack_1->SetBinError(4,2.481249);
   hbadmatch_stack_1->SetBinError(5,1.341863);
   hbadmatch_stack_1->SetBinError(6,1.689201);
   hbadmatch_stack_1->SetBinError(7,0.8962351);
   hbadmatch_stack_1->SetBinError(8,0.7576392);
   hbadmatch_stack_1->SetBinError(9,0.9238429);
   hbadmatch_stack_1->SetBinError(10,0.7987787);
   hbadmatch_stack_1->SetBinError(11,0.7538377);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.4810838);
   hbadmatch_stack_1->SetBinError(14,0.1019266);
   hbadmatch_stack_1->SetBinError(15,0.6443849);
   hbadmatch_stack_1->SetBinError(16,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.2705358);
   hbadmatch_stack_1->SetBinError(21,0.255252);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,24.5354);
   hext_stack_2->SetBinContent(2,31.64783);
   hext_stack_2->SetBinContent(3,23.65001);
   hext_stack_2->SetBinContent(4,31.49061);
   hext_stack_2->SetBinContent(5,20.38727);
   hext_stack_2->SetBinContent(6,18.22458);
   hext_stack_2->SetBinContent(7,10.91745);
   hext_stack_2->SetBinContent(8,9.220444);
   hext_stack_2->SetBinContent(9,5.88986);
   hext_stack_2->SetBinContent(10,1.950793);
   hext_stack_2->SetBinContent(11,1.461993);
   hext_stack_2->SetBinContent(12,4.188443);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinError(1,3.515832);
   hext_stack_2->SetBinError(2,3.951726);
   hext_stack_2->SetBinError(3,3.178428);
   hext_stack_2->SetBinError(4,3.910852);
   hext_stack_2->SetBinError(5,3.052433);
   hext_stack_2->SetBinError(6,3.08265);
   hext_stack_2->SetBinError(7,2.265045);
   hext_stack_2->SetBinError(8,2.08398);
   hext_stack_2->SetBinError(9,1.759382);
   hext_stack_2->SetBinError(10,0.8755137);
   hext_stack_2->SetBinError(11,0.7356036);
   hext_stack_2->SetBinError(12,1.474057);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,0.3867341);
   hdirt_stack_3->SetBinContent(2,2.657814);
   hdirt_stack_3->SetBinContent(3,3.068151);
   hdirt_stack_3->SetBinContent(4,1.690028);
   hdirt_stack_3->SetBinContent(5,1.648569);
   hdirt_stack_3->SetBinContent(6,0.8086942);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2827498);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2742997);
   hdirt_stack_3->SetBinError(2,0.8157362);
   hdirt_stack_3->SetBinError(3,0.8987981);
   hdirt_stack_3->SetBinError(4,0.6629223);
   hdirt_stack_3->SetBinError(5,0.9988877);
   hdirt_stack_3->SetBinError(6,0.4749675);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.1999888);
   hdirt_stack_3->SetBinError(11,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,10.43869);
   houtFV_stack_4->SetBinContent(2,12.16299);
   houtFV_stack_4->SetBinContent(3,12.11558);
   houtFV_stack_4->SetBinContent(4,11.6102);
   houtFV_stack_4->SetBinContent(5,10.37758);
   houtFV_stack_4->SetBinContent(6,8.110492);
   houtFV_stack_4->SetBinContent(7,5.873704);
   houtFV_stack_4->SetBinContent(8,3.967262);
   houtFV_stack_4->SetBinContent(9,2.878436);
   houtFV_stack_4->SetBinContent(10,1.503494);
   houtFV_stack_4->SetBinContent(11,2.396126);
   houtFV_stack_4->SetBinContent(12,0.8513086);
   houtFV_stack_4->SetBinContent(13,1.518779);
   houtFV_stack_4->SetBinContent(14,0.6648667);
   houtFV_stack_4->SetBinContent(16,0.9287637);
   houtFV_stack_4->SetBinContent(17,0.7336084);
   houtFV_stack_4->SetBinContent(18,0.1211005);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.3726301);
   houtFV_stack_4->SetBinError(1,1.614395);
   houtFV_stack_4->SetBinError(2,1.742306);
   houtFV_stack_4->SetBinError(3,1.646338);
   houtFV_stack_4->SetBinError(4,1.645217);
   houtFV_stack_4->SetBinError(5,1.626711);
   houtFV_stack_4->SetBinError(6,1.44413);
   houtFV_stack_4->SetBinError(7,1.208043);
   houtFV_stack_4->SetBinError(8,0.8998385);
   houtFV_stack_4->SetBinError(9,0.7928541);
   houtFV_stack_4->SetBinError(10,0.5351818);
   houtFV_stack_4->SetBinError(11,0.7763695);
   houtFV_stack_4->SetBinError(12,0.4295582);
   houtFV_stack_4->SetBinError(13,0.5892709);
   houtFV_stack_4->SetBinError(14,0.4132735);
   houtFV_stack_4->SetBinError(16,0.5097151);
   houtFV_stack_4->SetBinError(17,0.4394482);
   houtFV_stack_4->SetBinError(18,0.1211005);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(21,0.3726301);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.408974);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.02229);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2879409);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2101202);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3472988);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3745984);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2467622);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3419155);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2867176);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3814652);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1108319);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1904395);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08757805);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.208067);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3639636);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.09516206);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.08942768);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1886808);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1184477);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1542538);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1911548);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1640517);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2038039);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.0610349);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1649167);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06587777);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03728024);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.541528);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.9412618);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.026142);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.883514);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.559178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.512577);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.057843);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3263319);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4366965);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.07013618);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08808299);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.190892);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1861056);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2294558);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4062957);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4075442);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3631202);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3876811);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2557463);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.13549);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1861415);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03514905);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0402437);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1769124);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,50.59149);
   hNCpi0inFVres_stack_7->SetBinContent(2,94.22885);
   hNCpi0inFVres_stack_7->SetBinContent(3,130.9584);
   hNCpi0inFVres_stack_7->SetBinContent(4,132.8881);
   hNCpi0inFVres_stack_7->SetBinContent(5,111.6089);
   hNCpi0inFVres_stack_7->SetBinContent(6,91.7852);
   hNCpi0inFVres_stack_7->SetBinContent(7,73.80219);
   hNCpi0inFVres_stack_7->SetBinContent(8,58.42265);
   hNCpi0inFVres_stack_7->SetBinContent(9,38.4508);
   hNCpi0inFVres_stack_7->SetBinContent(10,31.61502);
   hNCpi0inFVres_stack_7->SetBinContent(11,23.48021);
   hNCpi0inFVres_stack_7->SetBinContent(12,16.72721);
   hNCpi0inFVres_stack_7->SetBinContent(13,14.35798);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.00095);
   hNCpi0inFVres_stack_7->SetBinContent(15,10.50595);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.895259);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.61446);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.108924);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.193683);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.24319);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.662103);
   hNCpi0inFVres_stack_7->SetBinError(1,2.304145);
   hNCpi0inFVres_stack_7->SetBinError(2,2.83864);
   hNCpi0inFVres_stack_7->SetBinError(3,3.572945);
   hNCpi0inFVres_stack_7->SetBinError(4,3.443035);
   hNCpi0inFVres_stack_7->SetBinError(5,3.019294);
   hNCpi0inFVres_stack_7->SetBinError(6,2.728674);
   hNCpi0inFVres_stack_7->SetBinError(7,2.661158);
   hNCpi0inFVres_stack_7->SetBinError(8,2.395193);
   hNCpi0inFVres_stack_7->SetBinError(9,1.839443);
   hNCpi0inFVres_stack_7->SetBinError(10,1.741746);
   hNCpi0inFVres_stack_7->SetBinError(11,1.570999);
   hNCpi0inFVres_stack_7->SetBinError(12,1.182501);
   hNCpi0inFVres_stack_7->SetBinError(13,1.291188);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9261063);
   hNCpi0inFVres_stack_7->SetBinError(15,1.262131);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9818706);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8075768);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5477927);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7157523);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6085338);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8688248);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.21223);
   hNCpi0inFVdis_stack_8->SetBinContent(2,21.30527);
   hNCpi0inFVdis_stack_8->SetBinContent(3,26.92909);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.74903);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.82423);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.02462);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.3771);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.87744);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.579303);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.309818);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.940009);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.250559);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.405676);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.618716);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.531085);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.343997);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7509832);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.120604);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.133792);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6620551);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.671965);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.216881);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.49566);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.709303);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.496143);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.438993);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.332347);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.151019);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.311224);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7758186);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9712855);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7531251);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7603264);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7876175);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6666477);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9894397);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.691703);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2527367);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3642725);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6122229);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2030796);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.027649);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.0707558);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2914913);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2021899);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.147043);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03545351);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1524116);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1364485);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.113012);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02577893);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,17.6811);
   hCCpi0inFV_stack_10->SetBinContent(2,30.84594);
   hCCpi0inFV_stack_10->SetBinContent(3,46.39531);
   hCCpi0inFV_stack_10->SetBinContent(4,48.08626);
   hCCpi0inFV_stack_10->SetBinContent(5,50.1332);
   hCCpi0inFV_stack_10->SetBinContent(6,41.56074);
   hCCpi0inFV_stack_10->SetBinContent(7,34.63731);
   hCCpi0inFV_stack_10->SetBinContent(8,26.34964);
   hCCpi0inFV_stack_10->SetBinContent(9,20.39174);
   hCCpi0inFV_stack_10->SetBinContent(10,16.2835);
   hCCpi0inFV_stack_10->SetBinContent(11,11.12899);
   hCCpi0inFV_stack_10->SetBinContent(12,9.660927);
   hCCpi0inFV_stack_10->SetBinContent(13,6.527262);
   hCCpi0inFV_stack_10->SetBinContent(14,5.960158);
   hCCpi0inFV_stack_10->SetBinContent(15,3.714533);
   hCCpi0inFV_stack_10->SetBinContent(16,3.479408);
   hCCpi0inFV_stack_10->SetBinContent(17,2.200825);
   hCCpi0inFV_stack_10->SetBinContent(18,2.157107);
   hCCpi0inFV_stack_10->SetBinContent(19,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(20,2.00411);
   hCCpi0inFV_stack_10->SetBinContent(21,3.997967);
   hCCpi0inFV_stack_10->SetBinError(1,2.146469);
   hCCpi0inFV_stack_10->SetBinError(2,2.816531);
   hCCpi0inFV_stack_10->SetBinError(3,3.470135);
   hCCpi0inFV_stack_10->SetBinError(4,3.441226);
   hCCpi0inFV_stack_10->SetBinError(5,3.534933);
   hCCpi0inFV_stack_10->SetBinError(6,3.263709);
   hCCpi0inFV_stack_10->SetBinError(7,2.985464);
   hCCpi0inFV_stack_10->SetBinError(8,2.532448);
   hCCpi0inFV_stack_10->SetBinError(9,2.189352);
   hCCpi0inFV_stack_10->SetBinError(10,2.046834);
   hCCpi0inFV_stack_10->SetBinError(11,1.722341);
   hCCpi0inFV_stack_10->SetBinError(12,1.562598);
   hCCpi0inFV_stack_10->SetBinError(13,1.276486);
   hCCpi0inFV_stack_10->SetBinError(14,1.209257);
   hCCpi0inFV_stack_10->SetBinError(15,0.9615599);
   hCCpi0inFV_stack_10->SetBinError(16,0.9445802);
   hCCpi0inFV_stack_10->SetBinError(17,0.7611465);
   hCCpi0inFV_stack_10->SetBinError(18,0.6503978);
   hCCpi0inFV_stack_10->SetBinError(19,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(20,0.7352871);
   hCCpi0inFV_stack_10->SetBinError(21,0.9692124);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,26.96801);
   hNCinFV_stack_11->SetBinContent(2,22.61806);
   hNCinFV_stack_11->SetBinContent(3,22.50785);
   hNCinFV_stack_11->SetBinContent(4,19.90969);
   hNCinFV_stack_11->SetBinContent(5,18.78538);
   hNCinFV_stack_11->SetBinContent(6,15.15507);
   hNCinFV_stack_11->SetBinContent(7,14.13446);
   hNCinFV_stack_11->SetBinContent(8,15.05034);
   hNCinFV_stack_11->SetBinContent(9,14.2148);
   hNCinFV_stack_11->SetBinContent(10,12.96504);
   hNCinFV_stack_11->SetBinContent(11,11.83292);
   hNCinFV_stack_11->SetBinContent(12,5.493033);
   hNCinFV_stack_11->SetBinContent(13,8.424965);
   hNCinFV_stack_11->SetBinContent(14,6.706188);
   hNCinFV_stack_11->SetBinContent(15,7.180061);
   hNCinFV_stack_11->SetBinContent(16,3.191223);
   hNCinFV_stack_11->SetBinContent(17,5.767188);
   hNCinFV_stack_11->SetBinContent(18,4.495277);
   hNCinFV_stack_11->SetBinContent(19,4.809573);
   hNCinFV_stack_11->SetBinContent(20,1.138687);
   hNCinFV_stack_11->SetBinContent(21,6.284657);
   hNCinFV_stack_11->SetBinError(1,2.676556);
   hNCinFV_stack_11->SetBinError(2,2.371804);
   hNCinFV_stack_11->SetBinError(3,2.364392);
   hNCinFV_stack_11->SetBinError(4,2.496165);
   hNCinFV_stack_11->SetBinError(5,2.196198);
   hNCinFV_stack_11->SetBinError(6,1.984033);
   hNCinFV_stack_11->SetBinError(7,1.918779);
   hNCinFV_stack_11->SetBinError(8,1.893063);
   hNCinFV_stack_11->SetBinError(9,2.140457);
   hNCinFV_stack_11->SetBinError(10,2.211266);
   hNCinFV_stack_11->SetBinError(11,2.085294);
   hNCinFV_stack_11->SetBinError(12,1.176813);
   hNCinFV_stack_11->SetBinError(13,1.923919);
   hNCinFV_stack_11->SetBinError(14,1.59814);
   hNCinFV_stack_11->SetBinError(15,1.821532);
   hNCinFV_stack_11->SetBinError(16,1.295839);
   hNCinFV_stack_11->SetBinError(17,1.617135);
   hNCinFV_stack_11->SetBinError(18,1.282367);
   hNCinFV_stack_11->SetBinError(19,1.458464);
   hNCinFV_stack_11->SetBinError(20,0.5346854);
   hNCinFV_stack_11->SetBinError(21,1.540279);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,52.40505);
   hnumuCCinFV_stack_12->SetBinContent(2,49.46542);
   hnumuCCinFV_stack_12->SetBinContent(3,36.32609);
   hnumuCCinFV_stack_12->SetBinContent(4,26.79335);
   hnumuCCinFV_stack_12->SetBinContent(5,18.81491);
   hnumuCCinFV_stack_12->SetBinContent(6,21.29548);
   hnumuCCinFV_stack_12->SetBinContent(7,14.88336);
   hnumuCCinFV_stack_12->SetBinContent(8,11.53152);
   hnumuCCinFV_stack_12->SetBinContent(9,8.115801);
   hnumuCCinFV_stack_12->SetBinContent(10,4.678501);
   hnumuCCinFV_stack_12->SetBinContent(11,5.288592);
   hnumuCCinFV_stack_12->SetBinContent(12,4.593615);
   hnumuCCinFV_stack_12->SetBinContent(13,3.923569);
   hnumuCCinFV_stack_12->SetBinContent(14,2.615228);
   hnumuCCinFV_stack_12->SetBinContent(15,1.920454);
   hnumuCCinFV_stack_12->SetBinContent(16,1.91052);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(18,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(19,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(20,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(21,2.055672);
   hnumuCCinFV_stack_12->SetBinError(1,4.432637);
   hnumuCCinFV_stack_12->SetBinError(2,4.290663);
   hnumuCCinFV_stack_12->SetBinError(3,4.20922);
   hnumuCCinFV_stack_12->SetBinError(4,2.785992);
   hnumuCCinFV_stack_12->SetBinError(5,2.273282);
   hnumuCCinFV_stack_12->SetBinError(6,2.678016);
   hnumuCCinFV_stack_12->SetBinError(7,2.112808);
   hnumuCCinFV_stack_12->SetBinError(8,1.983744);
   hnumuCCinFV_stack_12->SetBinError(9,1.439015);
   hnumuCCinFV_stack_12->SetBinError(10,1.082138);
   hnumuCCinFV_stack_12->SetBinError(11,1.256934);
   hnumuCCinFV_stack_12->SetBinError(12,1.100381);
   hnumuCCinFV_stack_12->SetBinError(13,1.01467);
   hnumuCCinFV_stack_12->SetBinError(14,0.7858814);
   hnumuCCinFV_stack_12->SetBinError(15,0.7064716);
   hnumuCCinFV_stack_12->SetBinError(16,0.6511312);
   hnumuCCinFV_stack_12->SetBinError(17,0.438694);
   hnumuCCinFV_stack_12->SetBinError(18,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(19,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(20,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(21,0.7082781);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,1.77502);
   hnueCCinFV_stack_13->SetBinContent(2,3.532393);
   hnueCCinFV_stack_13->SetBinContent(3,1.220818);
   hnueCCinFV_stack_13->SetBinContent(4,1.902295);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.4505813);
   hnueCCinFV_stack_13->SetBinContent(7,0.7898474);
   hnueCCinFV_stack_13->SetBinContent(8,1.280777);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.6912508);
   hnueCCinFV_stack_13->SetBinError(2,1.094501);
   hnueCCinFV_stack_13->SetBinError(3,0.5697753);
   hnueCCinFV_stack_13->SetBinError(4,0.7375446);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3211617);
   hnueCCinFV_stack_13->SetBinError(7,0.3949794);
   hnueCCinFV_stack_13->SetBinError(8,0.6537789);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.2486649);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__20->SetBinContent(1,201.4716);
   hmcerror__20->SetBinContent(2,278.7201);
   hmcerror__20->SetBinContent(3,310.7872);
   hmcerror__20->SetBinContent(4,309.6718);
   hmcerror__20->SetBinContent(5,263.1084);
   hmcerror__20->SetBinContent(6,223.5703);
   hmcerror__20->SetBinContent(7,174.7135);
   hmcerror__20->SetBinContent(8,143.5214);
   hmcerror__20->SetBinContent(9,101.2436);
   hmcerror__20->SetBinContent(10,80.56818);
   hmcerror__20->SetBinContent(11,64.25358);
   hmcerror__20->SetBinContent(12,47.56073);
   hmcerror__20->SetBinContent(13,42.2058);
   hmcerror__20->SetBinContent(14,29.73662);
   hmcerror__20->SetBinContent(15,28.69932);
   hmcerror__20->SetBinContent(16,18.09702);
   hmcerror__20->SetBinContent(17,15.48564);
   hmcerror__20->SetBinContent(18,12.86197);
   hmcerror__20->SetBinContent(19,11.03826);
   hmcerror__20->SetBinContent(20,7.352634);
   hmcerror__20->SetBinContent(21,24.38819);
   hmcerror__20->SetBinError(1,58.32275);
   hmcerror__20->SetBinError(2,91.22389);
   hmcerror__20->SetBinError(3,121.8499);
   hmcerror__20->SetBinError(4,124.5473);
   hmcerror__20->SetBinError(5,107.5644);
   hmcerror__20->SetBinError(6,92.60846);
   hmcerror__20->SetBinError(7,80.44708);
   hmcerror__20->SetBinError(8,58.90226);
   hmcerror__20->SetBinError(9,39.56122);
   hmcerror__20->SetBinError(10,33.3394);
   hmcerror__20->SetBinError(11,26.69319);
   hmcerror__20->SetBinError(12,18.12983);
   hmcerror__20->SetBinError(13,18.09564);
   hmcerror__20->SetBinError(14,16.19527);
   hmcerror__20->SetBinError(15,16.06425);
   hmcerror__20->SetBinError(16,11.47638);
   hmcerror__20->SetBinError(17,16.40555);
   hmcerror__20->SetBinError(18,7.967317);
   hmcerror__20->SetBinError(19,13.1825);
   hmcerror__20->SetBinError(20,8.022103);
   hmcerror__20->SetBinError(21,16.15469);
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
   
   Double_t _fx3025[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3025[20] = {
   176,
   226,
   304,
   251,
   260,
   204,
   142,
   124,
   100,
   66,
   52,
   33,
   21,
   18,
   13,
   8,
   10,
   6,
   4,
   5};
   Double_t _felx3025[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3025[20] = {
   13.2665,
   15.0333,
   17.4356,
   15.84298,
   16.12452,
   14.28286,
   11.91638,
   11.13553,
   10.1212,
   8.2509,
   7.3419,
   5.8847,
   4.7354,
   4.4008,
   3.77763,
   3.0307,
   3.34883,
   2.67925,
   2.29683,
   2.48995};
   Double_t _fehx3025[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3025[20] = {
   13.2665,
   15.0333,
   17.4356,
   15.84298,
   16.12452,
   14.28286,
   11.91638,
   11.13553,
   9.92,
   8.0483,
   7.1381,
   5.6776,
   4.5229,
   4.1858,
   3.5552,
   2.7896,
   3.1179,
   2.41858,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,330);
   Graph_Graph3025->SetMinimum(1.532853);
   Graph_Graph3025->SetMaximum(353.4088);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2023.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  908.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  196.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 379.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 241.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 268.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3026[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3026[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3026[20] = {
   0.2894837,
   0.3272957,
   0.3920687,
   0.4021913,
   0.4088215,
   0.4142253,
   0.4604515,
   0.4104075,
   0.3907529,
   0.4138036,
   0.415435,
   0.3811934,
   0.4287476,
   0.5446239,
   0.5597431,
   0.6341589,
   1.059404,
   0.6194477,
   1.194255,
   1.091052};
   Double_t _fehx3026[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3026[20] = {
   0.2894837,
   0.3272957,
   0.3920687,
   0.4021913,
   0.4088215,
   0.4142253,
   0.4604515,
   0.4104075,
   0.3907529,
   0.4138036,
   0.415435,
   0.3811934,
   0.4287476,
   0.5446239,
   0.5597431,
   0.6341589,
   1.059404,
   0.6194477,
   1.194255,
   1.091052};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,330);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3027[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3027[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3027[20] = {
   0.2310291,
   0.3154879,
   0.38278,
   0.3923579,
   0.3908949,
   0.4000814,
   0.4020373,
   0.3682418,
   0.3582269,
   0.3414225,
   0.320014,
   0.3092406,
   0.3028872,
   0.3104484,
   0.3079511,
   0.299038,
   0.3060788,
   0.325283,
   0.3874844,
   0.3361333};
   Double_t _fehx3027[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3027[20] = {
   0.2310291,
   0.3154879,
   0.38278,
   0.3923579,
   0.3908949,
   0.4000814,
   0.4020373,
   0.3682418,
   0.3582269,
   0.3414225,
   0.320014,
   0.3092406,
   0.3028872,
   0.3104484,
   0.3079511,
   0.299038,
   0.3060788,
   0.325283,
   0.3874844,
   0.3361333};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,330);
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
   
   Double_t _fx3028[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3028[20] = {
   0.873572,
   0.8108494,
   0.9781614,
   0.8105356,
   0.9881859,
   0.9124649,
   0.8127592,
   0.8639826,
   0.9877172,
   0.819182,
   0.8092935,
   0.6938498,
   0.4975619,
   0.6053143,
   0.4529724,
   0.4420618,
   0.6457596,
   0.4664916,
   0.3623758,
   0.6800284};
   Double_t _felx3028[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3028[20] = {
   0.06584797,
   0.0539369,
   0.0561014,
   0.05116055,
   0.06128469,
   0.06388532,
   0.06820524,
   0.07758793,
   0.09996883,
   0.1024089,
   0.1142645,
   0.1237302,
   0.1121978,
   0.1479926,
   0.1316279,
   0.1674696,
   0.2162539,
   0.2083079,
   0.2080789,
   0.3386473};
   Double_t _fehx3028[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3028[20] = {
   0.06584797,
   0.0539369,
   0.0561014,
   0.05116055,
   0.06128469,
   0.06388532,
   0.06820524,
   0.07758793,
   0.09798155,
   0.09989428,
   0.1110926,
   0.1193758,
   0.107163,
   0.1407625,
   0.1238775,
   0.154147,
   0.2013414,
   0.1880412,
   0.1795445,
   0.3006596};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,330);
   Graph_Graph3028->SetMinimum(0.06115672);
   Graph_Graph3028->SetMaximum(1.178839);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
