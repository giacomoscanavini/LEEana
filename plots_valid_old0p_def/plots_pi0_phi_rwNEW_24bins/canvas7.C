#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Feb 17 21:59:22 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
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
   pad1->Range(-4.119231,-2.860422,3.957692,316.3025);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__19->SetBinContent(1,138.2484);
   hmc__19->SetBinContent(2,143.0211);
   hmc__19->SetBinContent(3,127.0256);
   hmc__19->SetBinContent(4,115.2224);
   hmc__19->SetBinContent(5,117.7696);
   hmc__19->SetBinContent(6,102.3642);
   hmc__19->SetBinContent(7,104.386);
   hmc__19->SetBinContent(8,103.7036);
   hmc__19->SetBinContent(9,116.239);
   hmc__19->SetBinContent(10,115.7829);
   hmc__19->SetBinContent(11,120.6515);
   hmc__19->SetBinContent(12,117.98);
   hmc__19->SetBinContent(13,134.0266);
   hmc__19->SetBinContent(14,123.7541);
   hmc__19->SetBinContent(15,119.0652);
   hmc__19->SetBinContent(16,119.8336);
   hmc__19->SetBinContent(17,108.8058);
   hmc__19->SetBinContent(18,105.5031);
   hmc__19->SetBinContent(19,98.35748);
   hmc__19->SetBinContent(20,109.3579);
   hmc__19->SetBinContent(21,111.9589);
   hmc__19->SetBinContent(22,129.5376);
   hmc__19->SetBinContent(23,122.0116);
   hmc__19->SetBinContent(24,138.042);
   hmc__19->SetBinError(1,49.75658);
   hmc__19->SetBinError(2,51.06551);
   hmc__19->SetBinError(3,56.91366);
   hmc__19->SetBinError(4,47.14313);
   hmc__19->SetBinError(5,40.42443);
   hmc__19->SetBinError(6,38.77474);
   hmc__19->SetBinError(7,40.68848);
   hmc__19->SetBinError(8,41.89095);
   hmc__19->SetBinError(9,44.49208);
   hmc__19->SetBinError(10,43.83565);
   hmc__19->SetBinError(11,46.46179);
   hmc__19->SetBinError(12,45.13551);
   hmc__19->SetBinError(13,47.78942);
   hmc__19->SetBinError(14,44.937);
   hmc__19->SetBinError(15,45.81329);
   hmc__19->SetBinError(16,44.31196);
   hmc__19->SetBinError(17,43.54236);
   hmc__19->SetBinError(18,47.11737);
   hmc__19->SetBinError(19,42.25716);
   hmc__19->SetBinError(20,42.49345);
   hmc__19->SetBinError(21,42.54031);
   hmc__19->SetBinError(22,47.11089);
   hmc__19->SetBinError(23,46.70919);
   hmc__19->SetBinError(24,47.55299);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-2.860422);
   hmc__19->SetMaximum(300.3443);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,-3.15,3.15);
   hs7_stack_7->SetMinimum(-3.571482e-09);
   hs7_stack_7->SetMaximum(150.1722);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.503299);
   hbadmatch_stack_1->SetBinContent(2,3.071625);
   hbadmatch_stack_1->SetBinContent(3,1.270501);
   hbadmatch_stack_1->SetBinContent(4,3.081557);
   hbadmatch_stack_1->SetBinContent(5,3.244982);
   hbadmatch_stack_1->SetBinContent(6,2.197444);
   hbadmatch_stack_1->SetBinContent(7,2.535947);
   hbadmatch_stack_1->SetBinContent(8,2.661188);
   hbadmatch_stack_1->SetBinContent(9,2.86051);
   hbadmatch_stack_1->SetBinContent(10,3.089826);
   hbadmatch_stack_1->SetBinContent(11,2.539189);
   hbadmatch_stack_1->SetBinContent(12,1.617072);
   hbadmatch_stack_1->SetBinContent(13,1.946178);
   hbadmatch_stack_1->SetBinContent(14,2.377142);
   hbadmatch_stack_1->SetBinContent(15,1.26712);
   hbadmatch_stack_1->SetBinContent(16,4.218694);
   hbadmatch_stack_1->SetBinContent(17,2.514769);
   hbadmatch_stack_1->SetBinContent(18,0.9269658);
   hbadmatch_stack_1->SetBinContent(19,2.666332);
   hbadmatch_stack_1->SetBinContent(20,2.82494);
   hbadmatch_stack_1->SetBinContent(21,0.5901461);
   hbadmatch_stack_1->SetBinContent(22,4.236341);
   hbadmatch_stack_1->SetBinContent(23,1.011232);
   hbadmatch_stack_1->SetBinContent(24,1.65886);
   hbadmatch_stack_1->SetBinError(1,0.9718478);
   hbadmatch_stack_1->SetBinError(2,0.968637);
   hbadmatch_stack_1->SetBinError(3,0.5895188);
   hbadmatch_stack_1->SetBinError(4,0.9225009);
   hbadmatch_stack_1->SetBinError(5,0.9504303);
   hbadmatch_stack_1->SetBinError(6,0.760276);
   hbadmatch_stack_1->SetBinError(7,0.8422419);
   hbadmatch_stack_1->SetBinError(8,0.8279062);
   hbadmatch_stack_1->SetBinError(9,1.317366);
   hbadmatch_stack_1->SetBinError(10,0.9306429);
   hbadmatch_stack_1->SetBinError(11,0.8689046);
   hbadmatch_stack_1->SetBinError(12,0.6212419);
   hbadmatch_stack_1->SetBinError(13,0.7684854);
   hbadmatch_stack_1->SetBinError(14,0.7298134);
   hbadmatch_stack_1->SetBinError(15,0.5883944);
   hbadmatch_stack_1->SetBinError(16,2.088217);
   hbadmatch_stack_1->SetBinError(17,0.7905864);
   hbadmatch_stack_1->SetBinError(18,0.4800908);
   hbadmatch_stack_1->SetBinError(19,1.023134);
   hbadmatch_stack_1->SetBinError(20,0.9179869);
   hbadmatch_stack_1->SetBinError(21,0.340721);
   hbadmatch_stack_1->SetBinError(22,1.096023);
   hbadmatch_stack_1->SetBinError(23,0.453138);
   hbadmatch_stack_1->SetBinError(24,0.650338);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.917588);
   hext_stack_2->SetBinContent(2,9.526072);
   hext_stack_2->SetBinContent(3,9.753906);
   hext_stack_2->SetBinContent(4,5.434191);
   hext_stack_2->SetBinContent(5,17.07981);
   hext_stack_2->SetBinContent(6,8.656622);
   hext_stack_2->SetBinContent(7,9.86483);
   hext_stack_2->SetBinContent(8,5.415421);
   hext_stack_2->SetBinContent(9,11.4625);
   hext_stack_2->SetBinContent(10,6.855872);
   hext_stack_2->SetBinContent(11,5.109793);
   hext_stack_2->SetBinContent(12,4.780987);
   hext_stack_2->SetBinContent(13,6.703058);
   hext_stack_2->SetBinContent(14,2.681789);
   hext_stack_2->SetBinContent(15,4.381568);
   hext_stack_2->SetBinContent(16,6.78085);
   hext_stack_2->SetBinContent(17,5.732637);
   hext_stack_2->SetBinContent(18,13.14074);
   hext_stack_2->SetBinContent(19,6.165187);
   hext_stack_2->SetBinContent(20,11.64845);
   hext_stack_2->SetBinContent(21,9.276695);
   hext_stack_2->SetBinContent(22,7.511847);
   hext_stack_2->SetBinContent(23,3.57278);
   hext_stack_2->SetBinContent(24,7.974696);
   hext_stack_2->SetBinError(1,1.90634);
   hext_stack_2->SetBinError(2,2.171517);
   hext_stack_2->SetBinError(3,2.272231);
   hext_stack_2->SetBinError(4,1.483351);
   hext_stack_2->SetBinError(5,3.044348);
   hext_stack_2->SetBinError(6,1.963739);
   hext_stack_2->SetBinError(7,2.101979);
   hext_stack_2->SetBinError(8,1.570863);
   hext_stack_2->SetBinError(9,2.425781);
   hext_stack_2->SetBinError(10,1.900612);
   hext_stack_2->SetBinError(11,1.447444);
   hext_stack_2->SetBinError(12,1.361888);
   hext_stack_2->SetBinError(13,1.850964);
   hext_stack_2->SetBinError(14,1.018372);
   hext_stack_2->SetBinError(15,1.219924);
   hext_stack_2->SetBinError(16,1.830584);
   hext_stack_2->SetBinError(17,1.665546);
   hext_stack_2->SetBinError(18,2.634227);
   hext_stack_2->SetBinError(19,1.571905);
   hext_stack_2->SetBinError(20,2.324002);
   hext_stack_2->SetBinError(21,2.207157);
   hext_stack_2->SetBinError(22,1.903048);
   hext_stack_2->SetBinError(23,1.136966);
   hext_stack_2->SetBinError(24,2.077375);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.3942141);
   hdirt_stack_3->SetBinContent(3,0.6763744);
   hdirt_stack_3->SetBinContent(4,0.5570828);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.6998254);
   hdirt_stack_3->SetBinContent(7,0.9140499);
   hdirt_stack_3->SetBinContent(8,0.7430578);
   hdirt_stack_3->SetBinContent(9,0.2516114);
   hdirt_stack_3->SetBinContent(11,1.149204);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.7410426);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.6977096);
   hdirt_stack_3->SetBinContent(20,1.347093);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(22,0.7783238);
   hdirt_stack_3->SetBinContent(23,0.3033547);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2804494);
   hdirt_stack_3->SetBinError(3,0.4782689);
   hdirt_stack_3->SetBinError(4,0.4028472);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.4055767);
   hdirt_stack_3->SetBinError(7,0.4788161);
   hdirt_stack_3->SetBinError(8,0.4437032);
   hdirt_stack_3->SetBinError(9,0.2516114);
   hdirt_stack_3->SetBinError(11,0.9557142);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.3770659);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4258593);
   hdirt_stack_3->SetBinError(20,0.6015335);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(22,0.4834435);
   hdirt_stack_3->SetBinError(23,0.2153654);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,3.839545);
   houtFV_stack_4->SetBinContent(2,3.517817);
   houtFV_stack_4->SetBinContent(3,4.298095);
   houtFV_stack_4->SetBinContent(4,4.304124);
   houtFV_stack_4->SetBinContent(5,4.693038);
   houtFV_stack_4->SetBinContent(6,5.41365);
   houtFV_stack_4->SetBinContent(7,3.383739);
   houtFV_stack_4->SetBinContent(8,5.128496);
   houtFV_stack_4->SetBinContent(9,3.813898);
   houtFV_stack_4->SetBinContent(10,4.846406);
   houtFV_stack_4->SetBinContent(11,2.05053);
   houtFV_stack_4->SetBinContent(12,3.109452);
   houtFV_stack_4->SetBinContent(13,2.685382);
   houtFV_stack_4->SetBinContent(14,3.374355);
   houtFV_stack_4->SetBinContent(15,3.849331);
   houtFV_stack_4->SetBinContent(16,5.081424);
   houtFV_stack_4->SetBinContent(17,4.393092);
   houtFV_stack_4->SetBinContent(18,3.298198);
   houtFV_stack_4->SetBinContent(19,2.445722);
   houtFV_stack_4->SetBinContent(20,5.054296);
   houtFV_stack_4->SetBinContent(21,4.34948);
   houtFV_stack_4->SetBinContent(22,3.517817);
   houtFV_stack_4->SetBinContent(23,5.977916);
   houtFV_stack_4->SetBinContent(24,2.645818);
   houtFV_stack_4->SetBinError(1,1.005107);
   houtFV_stack_4->SetBinError(2,0.9412229);
   houtFV_stack_4->SetBinError(3,1.056207);
   houtFV_stack_4->SetBinError(4,1.088058);
   houtFV_stack_4->SetBinError(5,1.056454);
   houtFV_stack_4->SetBinError(6,1.168391);
   houtFV_stack_4->SetBinError(7,0.9446454);
   houtFV_stack_4->SetBinError(8,1.161531);
   houtFV_stack_4->SetBinError(9,0.9604114);
   houtFV_stack_4->SetBinError(10,1.059195);
   houtFV_stack_4->SetBinError(11,0.7491514);
   houtFV_stack_4->SetBinError(12,0.8148975);
   houtFV_stack_4->SetBinError(13,0.7859735);
   houtFV_stack_4->SetBinError(14,0.8993757);
   houtFV_stack_4->SetBinError(15,0.9272429);
   houtFV_stack_4->SetBinError(16,1.134181);
   houtFV_stack_4->SetBinError(17,1.008804);
   houtFV_stack_4->SetBinError(18,0.9478925);
   houtFV_stack_4->SetBinError(19,0.7600838);
   houtFV_stack_4->SetBinError(20,1.108093);
   houtFV_stack_4->SetBinError(21,0.999525);
   houtFV_stack_4->SetBinError(22,0.9412229);
   houtFV_stack_4->SetBinError(23,1.325357);
   houtFV_stack_4->SetBinError(24,0.7859699);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3477539);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4450719);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1731161);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.198595);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04832419);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9753399);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.102222);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7528039);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.00424);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.976172);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2949384);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3684702);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2593621);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3738879);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3259676);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3199419);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,61.01293);
   hNCpi0inFVres_stack_7->SetBinContent(2,60.50275);
   hNCpi0inFVres_stack_7->SetBinContent(3,57.97609);
   hNCpi0inFVres_stack_7->SetBinContent(4,55.22013);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.02483);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.84959);
   hNCpi0inFVres_stack_7->SetBinContent(7,52.47832);
   hNCpi0inFVres_stack_7->SetBinContent(8,48.85342);
   hNCpi0inFVres_stack_7->SetBinContent(9,56.86192);
   hNCpi0inFVres_stack_7->SetBinContent(10,58.15214);
   hNCpi0inFVres_stack_7->SetBinContent(11,54.77337);
   hNCpi0inFVres_stack_7->SetBinContent(12,49.80834);
   hNCpi0inFVres_stack_7->SetBinContent(13,53.98354);
   hNCpi0inFVres_stack_7->SetBinContent(14,57.28458);
   hNCpi0inFVres_stack_7->SetBinContent(15,57.16451);
   hNCpi0inFVres_stack_7->SetBinContent(16,57.0619);
   hNCpi0inFVres_stack_7->SetBinContent(17,52.08899);
   hNCpi0inFVres_stack_7->SetBinContent(18,48.66227);
   hNCpi0inFVres_stack_7->SetBinContent(19,47.20517);
   hNCpi0inFVres_stack_7->SetBinContent(20,51.42758);
   hNCpi0inFVres_stack_7->SetBinContent(21,56.932);
   hNCpi0inFVres_stack_7->SetBinContent(22,58.4715);
   hNCpi0inFVres_stack_7->SetBinContent(23,58.8563);
   hNCpi0inFVres_stack_7->SetBinContent(24,59.66905);
   hNCpi0inFVres_stack_7->SetBinError(1,2.63102);
   hNCpi0inFVres_stack_7->SetBinError(2,2.604057);
   hNCpi0inFVres_stack_7->SetBinError(3,2.453927);
   hNCpi0inFVres_stack_7->SetBinError(4,2.419921);
   hNCpi0inFVres_stack_7->SetBinError(5,2.349495);
   hNCpi0inFVres_stack_7->SetBinError(6,2.223984);
   hNCpi0inFVres_stack_7->SetBinError(7,2.466728);
   hNCpi0inFVres_stack_7->SetBinError(8,2.243007);
   hNCpi0inFVres_stack_7->SetBinError(9,2.467105);
   hNCpi0inFVres_stack_7->SetBinError(10,2.491389);
   hNCpi0inFVres_stack_7->SetBinError(11,2.473851);
   hNCpi0inFVres_stack_7->SetBinError(12,2.300149);
   hNCpi0inFVres_stack_7->SetBinError(13,2.344796);
   hNCpi0inFVres_stack_7->SetBinError(14,2.483932);
   hNCpi0inFVres_stack_7->SetBinError(15,2.496085);
   hNCpi0inFVres_stack_7->SetBinError(16,2.531106);
   hNCpi0inFVres_stack_7->SetBinError(17,2.290554);
   hNCpi0inFVres_stack_7->SetBinError(18,2.263175);
   hNCpi0inFVres_stack_7->SetBinError(19,2.251768);
   hNCpi0inFVres_stack_7->SetBinError(20,2.359292);
   hNCpi0inFVres_stack_7->SetBinError(21,2.46112);
   hNCpi0inFVres_stack_7->SetBinError(22,2.521914);
   hNCpi0inFVres_stack_7->SetBinError(23,2.554435);
   hNCpi0inFVres_stack_7->SetBinError(24,2.55847);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.613);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.91949);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.18671);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.9581);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.828226);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.56933);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.16137);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.801406);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.41821);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.16561);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.66482);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.844252);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.91012);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.84849);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.34196);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.117019);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.47947);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.056148);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.451155);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.783884);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.43066);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.20729);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.73947);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.300702);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.039011);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.085274);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.180799);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.078649);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9510328);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.10629);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.009852);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9995856);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.082761);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.076844);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.077987);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.99);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.206236);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.05825);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9883273);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9426399);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.010525);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8532027);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9546746);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9579987);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.04629);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.027491);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.103648);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9954564);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,17.85759);
   hCCpi0inFV_stack_10->SetBinContent(2,19.01581);
   hCCpi0inFV_stack_10->SetBinContent(3,17.43232);
   hCCpi0inFV_stack_10->SetBinContent(4,19.86303);
   hCCpi0inFV_stack_10->SetBinContent(5,15.39913);
   hCCpi0inFV_stack_10->SetBinContent(6,13.19106);
   hCCpi0inFV_stack_10->SetBinContent(7,11.67046);
   hCCpi0inFV_stack_10->SetBinContent(8,12.97297);
   hCCpi0inFV_stack_10->SetBinContent(9,14.12083);
   hCCpi0inFV_stack_10->SetBinContent(10,15.96764);
   hCCpi0inFV_stack_10->SetBinContent(11,17.29138);
   hCCpi0inFV_stack_10->SetBinContent(12,16.20363);
   hCCpi0inFV_stack_10->SetBinContent(13,20.60456);
   hCCpi0inFV_stack_10->SetBinContent(14,16.78156);
   hCCpi0inFV_stack_10->SetBinContent(15,15.62712);
   hCCpi0inFV_stack_10->SetBinContent(16,15.62471);
   hCCpi0inFV_stack_10->SetBinContent(17,13.2029);
   hCCpi0inFV_stack_10->SetBinContent(18,12.4255);
   hCCpi0inFV_stack_10->SetBinContent(19,12.89436);
   hCCpi0inFV_stack_10->SetBinContent(20,12.64311);
   hCCpi0inFV_stack_10->SetBinContent(21,15.17678);
   hCCpi0inFV_stack_10->SetBinContent(22,22.18757);
   hCCpi0inFV_stack_10->SetBinContent(23,16.33321);
   hCCpi0inFV_stack_10->SetBinContent(24,19.29729);
   hCCpi0inFV_stack_10->SetBinError(1,2.187105);
   hCCpi0inFV_stack_10->SetBinError(2,2.207069);
   hCCpi0inFV_stack_10->SetBinError(3,2.09962);
   hCCpi0inFV_stack_10->SetBinError(4,2.266185);
   hCCpi0inFV_stack_10->SetBinError(5,1.963292);
   hCCpi0inFV_stack_10->SetBinError(6,1.852785);
   hCCpi0inFV_stack_10->SetBinError(7,1.72802);
   hCCpi0inFV_stack_10->SetBinError(8,1.836411);
   hCCpi0inFV_stack_10->SetBinError(9,1.888164);
   hCCpi0inFV_stack_10->SetBinError(10,2.005631);
   hCCpi0inFV_stack_10->SetBinError(11,2.103518);
   hCCpi0inFV_stack_10->SetBinError(12,2.038459);
   hCCpi0inFV_stack_10->SetBinError(13,2.274864);
   hCCpi0inFV_stack_10->SetBinError(14,2.019103);
   hCCpi0inFV_stack_10->SetBinError(15,1.985628);
   hCCpi0inFV_stack_10->SetBinError(16,1.960926);
   hCCpi0inFV_stack_10->SetBinError(17,1.794866);
   hCCpi0inFV_stack_10->SetBinError(18,1.670345);
   hCCpi0inFV_stack_10->SetBinError(19,1.820095);
   hCCpi0inFV_stack_10->SetBinError(20,1.781573);
   hCCpi0inFV_stack_10->SetBinError(21,1.966168);
   hCCpi0inFV_stack_10->SetBinError(22,2.410432);
   hCCpi0inFV_stack_10->SetBinError(23,2.007792);
   hCCpi0inFV_stack_10->SetBinError(24,2.130194);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.15833);
   hNCinFV_stack_11->SetBinContent(2,9.871407);
   hNCinFV_stack_11->SetBinContent(3,9.382695);
   hNCinFV_stack_11->SetBinContent(4,9.920197);
   hNCinFV_stack_11->SetBinContent(5,10.93566);
   hNCinFV_stack_11->SetBinContent(6,8.611049);
   hNCinFV_stack_11->SetBinContent(7,7.927312);
   hNCinFV_stack_11->SetBinContent(8,9.874788);
   hNCinFV_stack_11->SetBinContent(9,8.68158);
   hNCinFV_stack_11->SetBinContent(10,7.234041);
   hNCinFV_stack_11->SetBinContent(11,8.257347);
   hNCinFV_stack_11->SetBinContent(12,11.14529);
   hNCinFV_stack_11->SetBinContent(13,11.23888);
   hNCinFV_stack_11->SetBinContent(14,13.32644);
   hNCinFV_stack_11->SetBinContent(15,13.56795);
   hNCinFV_stack_11->SetBinContent(16,11.22705);
   hNCinFV_stack_11->SetBinContent(17,10.80342);
   hNCinFV_stack_11->SetBinContent(18,10.1634);
   hNCinFV_stack_11->SetBinContent(19,10.26037);
   hNCinFV_stack_11->SetBinContent(20,8.705721);
   hNCinFV_stack_11->SetBinContent(21,8.26918);
   hNCinFV_stack_11->SetBinContent(22,12.15399);
   hNCinFV_stack_11->SetBinContent(23,9.332823);
   hNCinFV_stack_11->SetBinContent(24,9.623129);
   hNCinFV_stack_11->SetBinError(1,1.606128);
   hNCinFV_stack_11->SetBinError(2,1.557433);
   hNCinFV_stack_11->SetBinError(3,1.493609);
   hNCinFV_stack_11->SetBinError(4,1.607455);
   hNCinFV_stack_11->SetBinError(5,1.711458);
   hNCinFV_stack_11->SetBinError(6,1.442927);
   hNCinFV_stack_11->SetBinError(7,1.35988);
   hNCinFV_stack_11->SetBinError(8,1.557858);
   hNCinFV_stack_11->SetBinError(9,1.545338);
   hNCinFV_stack_11->SetBinError(10,1.345794);
   hNCinFV_stack_11->SetBinError(11,1.400364);
   hNCinFV_stack_11->SetBinError(12,1.665669);
   hNCinFV_stack_11->SetBinError(13,1.700332);
   hNCinFV_stack_11->SetBinError(14,1.882679);
   hNCinFV_stack_11->SetBinError(15,1.881897);
   hNCinFV_stack_11->SetBinError(16,1.698969);
   hNCinFV_stack_11->SetBinError(17,1.630359);
   hNCinFV_stack_11->SetBinError(18,1.606746);
   hNCinFV_stack_11->SetBinError(19,1.643056);
   hNCinFV_stack_11->SetBinError(20,1.414478);
   hNCinFV_stack_11->SetBinError(21,1.402018);
   hNCinFV_stack_11->SetBinError(22,1.765498);
   hNCinFV_stack_11->SetBinError(23,1.506824);
   hNCinFV_stack_11->SetBinError(24,1.557527);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,21.0074);
   hnumuCCinFV_stack_12->SetBinContent(2,24.15509);
   hnumuCCinFV_stack_12->SetBinContent(3,12.05781);
   hnumuCCinFV_stack_12->SetBinContent(4,3.867702);
   hnumuCCinFV_stack_12->SetBinContent(5,4.927031);
   hnumuCCinFV_stack_12->SetBinContent(6,4.961772);
   hnumuCCinFV_stack_12->SetBinContent(7,4.778383);
   hnumuCCinFV_stack_12->SetBinContent(8,6.773692);
   hnumuCCinFV_stack_12->SetBinContent(9,6.999439);
   hnumuCCinFV_stack_12->SetBinContent(10,8.340844);
   hnumuCCinFV_stack_12->SetBinContent(11,17.35652);
   hnumuCCinFV_stack_12->SetBinContent(12,19.94342);
   hnumuCCinFV_stack_12->SetBinContent(13,21.92936);
   hnumuCCinFV_stack_12->SetBinContent(14,15.21015);
   hnumuCCinFV_stack_12->SetBinContent(15,11.38297);
   hnumuCCinFV_stack_12->SetBinContent(16,8.863029);
   hnumuCCinFV_stack_12->SetBinContent(17,7.616878);
   hnumuCCinFV_stack_12->SetBinContent(18,6.333515);
   hnumuCCinFV_stack_12->SetBinContent(19,5.646059);
   hnumuCCinFV_stack_12->SetBinContent(20,5.611649);
   hnumuCCinFV_stack_12->SetBinContent(21,5.413488);
   hnumuCCinFV_stack_12->SetBinContent(22,8.890409);
   hnumuCCinFV_stack_12->SetBinContent(23,13.10775);
   hnumuCCinFV_stack_12->SetBinContent(24,25.21225);
   hnumuCCinFV_stack_12->SetBinError(1,2.451781);
   hnumuCCinFV_stack_12->SetBinError(2,3.857113);
   hnumuCCinFV_stack_12->SetBinError(3,1.80457);
   hnumuCCinFV_stack_12->SetBinError(4,0.9903703);
   hnumuCCinFV_stack_12->SetBinError(5,1.164351);
   hnumuCCinFV_stack_12->SetBinError(6,1.175006);
   hnumuCCinFV_stack_12->SetBinError(7,1.173919);
   hnumuCCinFV_stack_12->SetBinError(8,1.355347);
   hnumuCCinFV_stack_12->SetBinError(9,1.703934);
   hnumuCCinFV_stack_12->SetBinError(10,1.473033);
   hnumuCCinFV_stack_12->SetBinError(11,2.586219);
   hnumuCCinFV_stack_12->SetBinError(12,2.530321);
   hnumuCCinFV_stack_12->SetBinError(13,2.733638);
   hnumuCCinFV_stack_12->SetBinError(14,2.212022);
   hnumuCCinFV_stack_12->SetBinError(15,1.869866);
   hnumuCCinFV_stack_12->SetBinError(16,1.529228);
   hnumuCCinFV_stack_12->SetBinError(17,1.897507);
   hnumuCCinFV_stack_12->SetBinError(18,1.792759);
   hnumuCCinFV_stack_12->SetBinError(19,1.194669);
   hnumuCCinFV_stack_12->SetBinError(20,1.262863);
   hnumuCCinFV_stack_12->SetBinError(21,1.139476);
   hnumuCCinFV_stack_12->SetBinError(22,1.587378);
   hnumuCCinFV_stack_12->SetBinError(23,2.072286);
   hnumuCCinFV_stack_12->SetBinError(24,2.979271);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,1.125732);
   hnueCCinFV_stack_13->SetBinContent(4,0.8312448);
   hnueCCinFV_stack_13->SetBinContent(5,0.6387146);
   hnueCCinFV_stack_13->SetBinContent(7,0.7090399);
   hnueCCinFV_stack_13->SetBinContent(8,0.6569352);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.88752);
   hnueCCinFV_stack_13->SetBinContent(12,0.7784365);
   hnueCCinFV_stack_13->SetBinContent(13,1.109674);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.5508933);
   hnueCCinFV_stack_13->SetBinContent(17,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(18,1.008659);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(21,0.2560115);
   hnueCCinFV_stack_13->SetBinContent(22,0.536893);
   hnueCCinFV_stack_13->SetBinContent(23,0.7863669);
   hnueCCinFV_stack_13->SetBinContent(24,1.711908);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.575245);
   hnueCCinFV_stack_13->SetBinError(4,0.5003997);
   hnueCCinFV_stack_13->SetBinError(5,0.3713537);
   hnueCCinFV_stack_13->SetBinError(7,0.501777);
   hnueCCinFV_stack_13->SetBinError(8,0.3817919);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.4470051);
   hnueCCinFV_stack_13->SetBinError(12,0.4756739);
   hnueCCinFV_stack_13->SetBinError(13,0.5082303);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.4001523);
   hnueCCinFV_stack_13->SetBinError(17,0.3401776);
   hnueCCinFV_stack_13->SetBinError(18,0.7245898);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(21,0.2556439);
   hnueCCinFV_stack_13->SetBinError(22,0.3929602);
   hnueCCinFV_stack_13->SetBinError(23,0.4656598);
   hnueCCinFV_stack_13->SetBinError(24,0.6670957);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__20->SetBinContent(1,138.2484);
   hmcerror__20->SetBinContent(2,143.0211);
   hmcerror__20->SetBinContent(3,127.0256);
   hmcerror__20->SetBinContent(4,115.2224);
   hmcerror__20->SetBinContent(5,117.7696);
   hmcerror__20->SetBinContent(6,102.3642);
   hmcerror__20->SetBinContent(7,104.386);
   hmcerror__20->SetBinContent(8,103.7036);
   hmcerror__20->SetBinContent(9,116.239);
   hmcerror__20->SetBinContent(10,115.7829);
   hmcerror__20->SetBinContent(11,120.6515);
   hmcerror__20->SetBinContent(12,117.98);
   hmcerror__20->SetBinContent(13,134.0266);
   hmcerror__20->SetBinContent(14,123.7541);
   hmcerror__20->SetBinContent(15,119.0652);
   hmcerror__20->SetBinContent(16,119.8336);
   hmcerror__20->SetBinContent(17,108.8058);
   hmcerror__20->SetBinContent(18,105.5031);
   hmcerror__20->SetBinContent(19,98.35748);
   hmcerror__20->SetBinContent(20,109.3579);
   hmcerror__20->SetBinContent(21,111.9589);
   hmcerror__20->SetBinContent(22,129.5376);
   hmcerror__20->SetBinContent(23,122.0116);
   hmcerror__20->SetBinContent(24,138.042);
   hmcerror__20->SetBinError(1,49.75658);
   hmcerror__20->SetBinError(2,51.06551);
   hmcerror__20->SetBinError(3,56.91366);
   hmcerror__20->SetBinError(4,47.14313);
   hmcerror__20->SetBinError(5,40.42443);
   hmcerror__20->SetBinError(6,38.77474);
   hmcerror__20->SetBinError(7,40.68848);
   hmcerror__20->SetBinError(8,41.89095);
   hmcerror__20->SetBinError(9,44.49208);
   hmcerror__20->SetBinError(10,43.83565);
   hmcerror__20->SetBinError(11,46.46179);
   hmcerror__20->SetBinError(12,45.13551);
   hmcerror__20->SetBinError(13,47.78942);
   hmcerror__20->SetBinError(14,44.937);
   hmcerror__20->SetBinError(15,45.81329);
   hmcerror__20->SetBinError(16,44.31196);
   hmcerror__20->SetBinError(17,43.54236);
   hmcerror__20->SetBinError(18,47.11737);
   hmcerror__20->SetBinError(19,42.25716);
   hmcerror__20->SetBinError(20,42.49345);
   hmcerror__20->SetBinError(21,42.54031);
   hmcerror__20->SetBinError(22,47.11089);
   hmcerror__20->SetBinError(23,46.70919);
   hmcerror__20->SetBinError(24,47.55299);
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
   Double_t _fy3025[24] = {
   103,
   111,
   82,
   93,
   97,
   84,
   72,
   69,
   71,
   107,
   80,
   85,
   80,
   123,
   72,
   89,
   81,
   63,
   73,
   74,
   81,
   75,
   82,
   89};
   Double_t _felx3025[24] = {
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
   Double_t _fely3025[24] = {
   10.14889,
   10.53565,
   9.1791,
   9.7658,
   9.9704,
   9.2886,
   8.6108,
   8.4327,
   8.5518,
   10.34408,
   9.0683,
   9.3428,
   9.0683,
   11.09054,
   8.6108,
   9.5566,
   9.1239,
   8.0648,
   8.6693,
   8.7275,
   9.1239,
   8.7852,
   9.1791,
   9.5566};
   Double_t _fehx3025[24] = {
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
   Double_t _fehy3025[24] = {
   10.14889,
   10.53565,
   8.9774,
   9.564,
   9.769,
   9.0869,
   8.4085,
   8.2304,
   8.3496,
   10.34408,
   8.8665,
   9.1411,
   8.8665,
   11.09054,
   8.4085,
   9.3552,
   8.9221,
   7.862,
   8.4672,
   8.5253,
   8.9221,
   8.5831,
   8.9774,
   9.3552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(47.01967);
   Graph_Graph3025->SetMaximum(142.0061);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.2/24","");
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
   
   Double_t _fx3026[24] = {
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
   Double_t _fely3026[24] = {
   0.359907,
   0.3570488,
   0.4480486,
   0.4091488,
   0.3432502,
   0.3787922,
   0.3897886,
   0.403949,
   0.3827637,
   0.3786021,
   0.3850911,
   0.382569,
   0.3565665,
   0.3631151,
   0.3847747,
   0.3697791,
   0.400184,
   0.4465971,
   0.4296283,
   0.3885724,
   0.3799635,
   0.3636851,
   0.3828257,
   0.3444821};
   Double_t _fehx3026[24] = {
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
   Double_t _fehy3026[24] = {
   0.359907,
   0.3570488,
   0.4480486,
   0.4091488,
   0.3432502,
   0.3787922,
   0.3897886,
   0.403949,
   0.3827637,
   0.3786021,
   0.3850911,
   0.382569,
   0.3565665,
   0.3631151,
   0.3847747,
   0.3697791,
   0.400184,
   0.4465971,
   0.4296283,
   0.3885724,
   0.3799635,
   0.3636851,
   0.3828257,
   0.3444821};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
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
   
   Double_t _fx3027[24] = {
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
   Double_t _fely3027[24] = {
   0.3199792,
   0.319912,
   0.3257233,
   0.336578,
   0.3163138,
   0.3327519,
   0.3560749,
   0.3465688,
   0.3387411,
   0.3482617,
   0.339652,
   0.33727,
   0.3188849,
   0.3307101,
   0.3494948,
   0.3397103,
   0.3613875,
   0.3167697,
   0.3404138,
   0.3273658,
   0.3391001,
   0.3313005,
   0.3530499,
   0.3162603};
   Double_t _fehx3027[24] = {
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
   Double_t _fehy3027[24] = {
   0.3199792,
   0.319912,
   0.3257233,
   0.336578,
   0.3163138,
   0.3327519,
   0.3560749,
   0.3465688,
   0.3387411,
   0.3482617,
   0.339652,
   0.33727,
   0.3188849,
   0.3307101,
   0.3494948,
   0.3397103,
   0.3613875,
   0.3167697,
   0.3404138,
   0.3273658,
   0.3391001,
   0.3313005,
   0.3530499,
   0.3162603};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
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
   
   Double_t _fx3028[24] = {
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
   Double_t _fy3028[24] = {
   0.7450356,
   0.7761092,
   0.645539,
   0.8071344,
   0.8236423,
   0.8205997,
   0.6897476,
   0.6653579,
   0.6108105,
   0.9241433,
   0.663067,
   0.7204608,
   0.5968963,
   0.9939061,
   0.6047105,
   0.7426965,
   0.7444453,
   0.597139,
   0.7421907,
   0.6766774,
   0.7234796,
   0.5789826,
   0.672067,
   0.6447314};
   Double_t _felx3028[24] = {
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
   Double_t _fely3028[24] = {
   0.07341054,
   0.07366502,
   0.0722618,
   0.08475606,
   0.08466023,
   0.09074074,
   0.08248998,
   0.08131542,
   0.07357083,
   0.0893403,
   0.07516113,
   0.07918967,
   0.06766043,
   0.0896175,
   0.07232002,
   0.07974892,
   0.08385487,
   0.07644137,
   0.08814073,
   0.07980679,
   0.08149328,
   0.0678197,
   0.07523135,
   0.06922967};
   Double_t _fehx3028[24] = {
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
   Double_t _fehy3028[24] = {
   0.07341054,
   0.07366502,
   0.07067393,
   0.08300466,
   0.08295012,
   0.08877033,
   0.08055198,
   0.07936466,
   0.07183131,
   0.0893403,
   0.07348855,
   0.07748005,
   0.06615476,
   0.0896175,
   0.07062095,
   0.07806825,
   0.08200019,
   0.07451916,
   0.08608598,
   0.07795781,
   0.07969083,
   0.06625954,
   0.07357822,
   0.06777069};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.4539268);
   Graph_Graph3028->SetMaximum(1.14076);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
