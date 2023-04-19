#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 16:16:05 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-2.807408,3.553846,310.4402);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__19->SetBinContent(1,16.04377);
   hmc__19->SetBinContent(2,54.50544);
   hmc__19->SetBinContent(3,78.86593);
   hmc__19->SetBinContent(4,110.0271);
   hmc__19->SetBinContent(5,108.4605);
   hmc__19->SetBinContent(6,123.1188);
   hmc__19->SetBinContent(7,135.818);
   hmc__19->SetBinContent(8,140.3704);
   hmc__19->SetBinContent(9,128.1695);
   hmc__19->SetBinContent(10,123.7873);
   hmc__19->SetBinContent(11,130.686);
   hmc__19->SetBinContent(12,131.1191);
   hmc__19->SetBinContent(13,100.3338);
   hmc__19->SetBinContent(14,91.50352);
   hmc__19->SetBinContent(15,86.44216);
   hmc__19->SetBinContent(16,90.78322);
   hmc__19->SetBinContent(17,69.58463);
   hmc__19->SetBinContent(18,63.19375);
   hmc__19->SetBinContent(19,62.5759);
   hmc__19->SetBinContent(20,54.13676);
   hmc__19->SetBinContent(21,44.88274);
   hmc__19->SetBinContent(22,39.40877);
   hmc__19->SetBinContent(23,24.05851);
   hmc__19->SetBinContent(24,8.631129);
   hmc__19->SetBinError(1,8.306581);
   hmc__19->SetBinError(2,21.50543);
   hmc__19->SetBinError(3,31.70037);
   hmc__19->SetBinError(4,42.99524);
   hmc__19->SetBinError(5,44.93226);
   hmc__19->SetBinError(6,50.26933);
   hmc__19->SetBinError(7,61.70254);
   hmc__19->SetBinError(8,62.59345);
   hmc__19->SetBinError(9,56.73309);
   hmc__19->SetBinError(10,52.276);
   hmc__19->SetBinError(11,52.62732);
   hmc__19->SetBinError(12,51.91871);
   hmc__19->SetBinError(13,41.13637);
   hmc__19->SetBinError(14,36.21017);
   hmc__19->SetBinError(15,31.35772);
   hmc__19->SetBinError(16,31.98064);
   hmc__19->SetBinError(17,27.62148);
   hmc__19->SetBinError(18,24.89265);
   hmc__19->SetBinError(19,24.43919);
   hmc__19->SetBinError(20,23.09087);
   hmc__19->SetBinError(21,24.65661);
   hmc__19->SetBinError(22,24.69052);
   hmc__19->SetBinError(23,11.40084);
   hmc__19->SetBinError(24,8.593964);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-2.807408);
   hmc__19->SetMaximum(294.7778);
   hmc__19->SetEntries(1993.425);
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
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(147.3889);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,0.9183104);
   hbadmatch_stack_1->SetBinContent(3,1.920266);
   hbadmatch_stack_1->SetBinContent(4,1.795963);
   hbadmatch_stack_1->SetBinContent(5,2.023629);
   hbadmatch_stack_1->SetBinContent(6,2.429348);
   hbadmatch_stack_1->SetBinContent(7,2.02353);
   hbadmatch_stack_1->SetBinContent(8,2.826337);
   hbadmatch_stack_1->SetBinContent(9,1.671721);
   hbadmatch_stack_1->SetBinContent(10,2.506605);
   hbadmatch_stack_1->SetBinContent(11,3.100276);
   hbadmatch_stack_1->SetBinContent(12,4.67208);
   hbadmatch_stack_1->SetBinContent(13,1.311045);
   hbadmatch_stack_1->SetBinContent(14,2.441362);
   hbadmatch_stack_1->SetBinContent(15,1.597206);
   hbadmatch_stack_1->SetBinContent(16,1.345246);
   hbadmatch_stack_1->SetBinContent(17,1.702167);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.7336084);
   hbadmatch_stack_1->SetBinContent(20,2.105544);
   hbadmatch_stack_1->SetBinContent(21,0.3900497);
   hbadmatch_stack_1->SetBinContent(22,1.266751);
   hbadmatch_stack_1->SetBinContent(23,1.125349);
   hbadmatch_stack_1->SetBinError(2,0.5482036);
   hbadmatch_stack_1->SetBinError(3,0.6994178);
   hbadmatch_stack_1->SetBinError(4,0.6686995);
   hbadmatch_stack_1->SetBinError(5,0.8311961);
   hbadmatch_stack_1->SetBinError(6,0.8320323);
   hbadmatch_stack_1->SetBinError(7,0.7407671);
   hbadmatch_stack_1->SetBinError(8,0.8937334);
   hbadmatch_stack_1->SetBinError(9,0.7135873);
   hbadmatch_stack_1->SetBinError(10,0.825525);
   hbadmatch_stack_1->SetBinError(11,0.889869);
   hbadmatch_stack_1->SetBinError(12,1.484889);
   hbadmatch_stack_1->SetBinError(13,0.6143195);
   hbadmatch_stack_1->SetBinError(14,0.8994964);
   hbadmatch_stack_1->SetBinError(15,0.6383609);
   hbadmatch_stack_1->SetBinError(16,0.5559502);
   hbadmatch_stack_1->SetBinError(17,0.6644027);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.4394482);
   hbadmatch_stack_1->SetBinError(20,0.6797106);
   hbadmatch_stack_1->SetBinError(21,0.2758068);
   hbadmatch_stack_1->SetBinError(22,0.6385811);
   hbadmatch_stack_1->SetBinError(23,0.5194673);
   hbadmatch_stack_1->SetEntries(164);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(2,1.454812);
   hext_stack_2->SetBinContent(3,1.37261);
   hext_stack_2->SetBinContent(4,3.330584);
   hext_stack_2->SetBinContent(5,4.371616);
   hext_stack_2->SetBinContent(6,3.793434);
   hext_stack_2->SetBinContent(7,4.856008);
   hext_stack_2->SetBinContent(8,6.146417);
   hext_stack_2->SetBinContent(9,5.027592);
   hext_stack_2->SetBinContent(10,6.645169);
   hext_stack_2->SetBinContent(11,8.57165);
   hext_stack_2->SetBinContent(12,7.862194);
   hext_stack_2->SetBinContent(13,4.378797);
   hext_stack_2->SetBinContent(14,5.262607);
   hext_stack_2->SetBinContent(15,6.567377);
   hext_stack_2->SetBinContent(16,9.95862);
   hext_stack_2->SetBinContent(17,3.800614);
   hext_stack_2->SetBinContent(18,1.461993);
   hext_stack_2->SetBinContent(19,3.330584);
   hext_stack_2->SetBinContent(20,2.517386);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,1.290409);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinError(2,0.8615765);
   hext_stack_2->SetBinError(3,0.8259691);
   hext_stack_2->SetBinError(4,1.116937);
   hext_stack_2->SetBinError(5,1.423285);
   hext_stack_2->SetBinError(6,1.393356);
   hext_stack_2->SetBinError(7,1.454658);
   hext_stack_2->SetBinError(8,1.65474);
   hext_stack_2->SetBinError(9,1.426537);
   hext_stack_2->SetBinError(10,1.557579);
   hext_stack_2->SetBinError(11,2.032856);
   hext_stack_2->SetBinError(12,1.805088);
   hext_stack_2->SetBinError(13,1.350755);
   hext_stack_2->SetBinError(14,1.510415);
   hext_stack_2->SetBinError(15,1.581482);
   hext_stack_2->SetBinError(16,2.100554);
   hext_stack_2->SetBinError(17,1.319182);
   hext_stack_2->SetBinError(18,0.7356036);
   hext_stack_2->SetBinError(19,1.116937);
   hext_stack_2->SetBinError(20,0.9575503);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,0.788756);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetEntries(235);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.3635739);
   hdirt_stack_3->SetBinContent(5,1.284752);
   hdirt_stack_3->SetBinContent(6,0.4794168);
   hdirt_stack_3->SetBinContent(7,4.167396e-09);
   hdirt_stack_3->SetBinContent(8,0.5135057);
   hdirt_stack_3->SetBinContent(10,0.5033671);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.6143302);
   hdirt_stack_3->SetBinContent(16,0.5388689);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.3867341);
   hdirt_stack_3->SetBinContent(21,0.470507);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(3,0.2623873);
   hdirt_stack_3->SetBinError(5,0.6087306);
   hdirt_stack_3->SetBinError(6,0.3402743);
   hdirt_stack_3->SetBinError(7,4.167396e-09);
   hdirt_stack_3->SetBinError(8,0.3809293);
   hdirt_stack_3->SetBinError(10,0.3763708);
   hdirt_stack_3->SetBinError(11,0.4028472);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.39051);
   hdirt_stack_3->SetBinError(16,0.4239131);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(20,0.2742997);
   hdirt_stack_3->SetBinError(21,0.333502);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetEntries(33);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(2,0.785171);
   houtFV_stack_4->SetBinContent(3,2.145881);
   houtFV_stack_4->SetBinContent(4,2.055672);
   houtFV_stack_4->SetBinContent(5,3.806432);
   houtFV_stack_4->SetBinContent(6,3.126077);
   houtFV_stack_4->SetBinContent(7,4.286364);
   houtFV_stack_4->SetBinContent(8,4.353057);
   houtFV_stack_4->SetBinContent(9,2.298879);
   houtFV_stack_4->SetBinContent(10,2.726367);
   houtFV_stack_4->SetBinContent(11,2.835772);
   houtFV_stack_4->SetBinContent(12,2.252388);
   houtFV_stack_4->SetBinContent(13,2.337525);
   houtFV_stack_4->SetBinContent(14,2.469461);
   houtFV_stack_4->SetBinContent(15,4.279464);
   houtFV_stack_4->SetBinContent(16,2.350371);
   houtFV_stack_4->SetBinContent(17,2.053982);
   houtFV_stack_4->SetBinContent(18,1.557717);
   houtFV_stack_4->SetBinContent(19,2.534241);
   houtFV_stack_4->SetBinContent(20,1.518779);
   houtFV_stack_4->SetBinContent(21,1.42472);
   houtFV_stack_4->SetBinContent(22,3.219667);
   houtFV_stack_4->SetBinContent(23,1.38333);
   houtFV_stack_4->SetBinContent(24,0.2386619);
   houtFV_stack_4->SetBinError(2,0.3925882);
   houtFV_stack_4->SetBinError(3,0.785499);
   houtFV_stack_4->SetBinError(4,0.7082781);
   houtFV_stack_4->SetBinError(5,1.020103);
   houtFV_stack_4->SetBinError(6,0.8995382);
   houtFV_stack_4->SetBinError(7,0.9459995);
   houtFV_stack_4->SetBinError(8,1.076719);
   houtFV_stack_4->SetBinError(9,0.7066675);
   houtFV_stack_4->SetBinError(10,0.8351984);
   houtFV_stack_4->SetBinError(11,0.808577);
   houtFV_stack_4->SetBinError(12,0.7350883);
   houtFV_stack_4->SetBinError(13,0.8085289);
   houtFV_stack_4->SetBinError(14,0.8131024);
   houtFV_stack_4->SetBinError(15,1.023007);
   houtFV_stack_4->SetBinError(16,0.7224586);
   houtFV_stack_4->SetBinError(17,0.7078105);
   houtFV_stack_4->SetBinError(18,0.7082233);
   houtFV_stack_4->SetBinError(19,0.8321153);
   houtFV_stack_4->SetBinError(20,0.5892709);
   houtFV_stack_4->SetBinError(21,0.6096219);
   houtFV_stack_4->SetBinError(22,0.962208);
   houtFV_stack_4->SetBinError(23,0.5800006);
   houtFV_stack_4->SetBinError(24,0.2386619);
   houtFV_stack_4->SetEntries(240);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8923038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.01769);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.352658);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.060872);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4872539);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6413721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2667597);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3378888);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3953083);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4007683);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1840142);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3113101);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(242);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.418112);
   hNCpi0inFVres_stack_7->SetBinContent(2,19.63737);
   hNCpi0inFVres_stack_7->SetBinContent(3,31.47198);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.70821);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.74873);
   hNCpi0inFVres_stack_7->SetBinContent(6,59.5556);
   hNCpi0inFVres_stack_7->SetBinContent(7,67.98509);
   hNCpi0inFVres_stack_7->SetBinContent(8,70.0258);
   hNCpi0inFVres_stack_7->SetBinContent(9,64.06131);
   hNCpi0inFVres_stack_7->SetBinContent(10,64.89133);
   hNCpi0inFVres_stack_7->SetBinContent(11,60.55604);
   hNCpi0inFVres_stack_7->SetBinContent(12,56.94946);
   hNCpi0inFVres_stack_7->SetBinContent(13,49.53816);
   hNCpi0inFVres_stack_7->SetBinContent(14,45.69041);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.73416);
   hNCpi0inFVres_stack_7->SetBinContent(16,39.47182);
   hNCpi0inFVres_stack_7->SetBinContent(17,36.44338);
   hNCpi0inFVres_stack_7->SetBinContent(18,31.70481);
   hNCpi0inFVres_stack_7->SetBinContent(19,28.48055);
   hNCpi0inFVres_stack_7->SetBinContent(20,23.9544);
   hNCpi0inFVres_stack_7->SetBinContent(21,20.54213);
   hNCpi0inFVres_stack_7->SetBinContent(22,14.26443);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.492266);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.98382);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9233818);
   hNCpi0inFVres_stack_7->SetBinError(2,1.467396);
   hNCpi0inFVres_stack_7->SetBinError(3,1.801097);
   hNCpi0inFVres_stack_7->SetBinError(4,2.376057);
   hNCpi0inFVres_stack_7->SetBinError(5,2.352572);
   hNCpi0inFVres_stack_7->SetBinError(6,2.486424);
   hNCpi0inFVres_stack_7->SetBinError(7,2.787298);
   hNCpi0inFVres_stack_7->SetBinError(8,2.759434);
   hNCpi0inFVres_stack_7->SetBinError(9,2.604056);
   hNCpi0inFVres_stack_7->SetBinError(10,2.621807);
   hNCpi0inFVres_stack_7->SetBinError(11,2.565218);
   hNCpi0inFVres_stack_7->SetBinError(12,2.497917);
   hNCpi0inFVres_stack_7->SetBinError(13,2.289339);
   hNCpi0inFVres_stack_7->SetBinError(14,2.173475);
   hNCpi0inFVres_stack_7->SetBinError(15,2.106468);
   hNCpi0inFVres_stack_7->SetBinError(16,1.967758);
   hNCpi0inFVres_stack_7->SetBinError(17,2.027061);
   hNCpi0inFVres_stack_7->SetBinError(18,1.787104);
   hNCpi0inFVres_stack_7->SetBinError(19,1.783926);
   hNCpi0inFVres_stack_7->SetBinError(20,1.591884);
   hNCpi0inFVres_stack_7->SetBinError(21,1.513701);
   hNCpi0inFVres_stack_7->SetBinError(22,1.226897);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9771729);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6054528);
   hNCpi0inFVres_stack_7->SetEntries(17544);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.580266);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.414536);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.13671);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.99547);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.04994);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.832466);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.43506);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.60935);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.844091);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.601865);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.494843);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.72095);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.09393);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.816089);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.331996);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.829212);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.919713);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.780709);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.976514);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.639802);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.920882);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.941798);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.064608);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.488086);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5788325);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8362709);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.05204);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.162473);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.174685);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.021888);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.125733);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.039947);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.044926);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9240835);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.02768);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.108662);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8332786);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7917227);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7982916);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8247497);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6697991);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6312584);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7086697);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6149141);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7303526);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5102767);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4495894);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2304939);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.4188362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.277838);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(20);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(2,9.959517);
   hCCpi0inFV_stack_10->SetBinContent(3,14.29641);
   hCCpi0inFV_stack_10->SetBinContent(4,13.93734);
   hCCpi0inFV_stack_10->SetBinContent(5,11.23528);
   hCCpi0inFV_stack_10->SetBinContent(6,21.91105);
   hCCpi0inFV_stack_10->SetBinContent(7,20.06344);
   hCCpi0inFV_stack_10->SetBinContent(8,18.03594);
   hCCpi0inFV_stack_10->SetBinContent(9,18.49128);
   hCCpi0inFV_stack_10->SetBinContent(10,13.47774);
   hCCpi0inFV_stack_10->SetBinContent(11,17.18111);
   hCCpi0inFV_stack_10->SetBinContent(12,17.90734);
   hCCpi0inFV_stack_10->SetBinContent(13,11.18185);
   hCCpi0inFV_stack_10->SetBinContent(14,7.964268);
   hCCpi0inFV_stack_10->SetBinContent(15,12.00107);
   hCCpi0inFV_stack_10->SetBinContent(16,13.18406);
   hCCpi0inFV_stack_10->SetBinContent(17,7.592206);
   hCCpi0inFV_stack_10->SetBinContent(18,9.813082);
   hCCpi0inFV_stack_10->SetBinContent(19,8.206021);
   hCCpi0inFV_stack_10->SetBinContent(20,9.387767);
   hCCpi0inFV_stack_10->SetBinContent(21,5.141413);
   hCCpi0inFV_stack_10->SetBinContent(22,6.531147);
   hCCpi0inFV_stack_10->SetBinContent(23,3.70206);
   hCCpi0inFV_stack_10->SetBinContent(24,1.175333);
   hCCpi0inFV_stack_10->SetBinError(1,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(2,1.612782);
   hCCpi0inFV_stack_10->SetBinError(3,1.956583);
   hCCpi0inFV_stack_10->SetBinError(4,1.808846);
   hCCpi0inFV_stack_10->SetBinError(5,1.597956);
   hCCpi0inFV_stack_10->SetBinError(6,2.411338);
   hCCpi0inFV_stack_10->SetBinError(7,2.271034);
   hCCpi0inFV_stack_10->SetBinError(8,2.188587);
   hCCpi0inFV_stack_10->SetBinError(9,2.201973);
   hCCpi0inFV_stack_10->SetBinError(10,1.850996);
   hCCpi0inFV_stack_10->SetBinError(11,2.099293);
   hCCpi0inFV_stack_10->SetBinError(12,2.068822);
   hCCpi0inFV_stack_10->SetBinError(13,1.670547);
   hCCpi0inFV_stack_10->SetBinError(14,1.415256);
   hCCpi0inFV_stack_10->SetBinError(15,1.759832);
   hCCpi0inFV_stack_10->SetBinError(16,1.808173);
   hCCpi0inFV_stack_10->SetBinError(17,1.317398);
   hCCpi0inFV_stack_10->SetBinError(18,1.569056);
   hCCpi0inFV_stack_10->SetBinError(19,1.469925);
   hCCpi0inFV_stack_10->SetBinError(20,1.494273);
   hCCpi0inFV_stack_10->SetBinError(21,1.075093);
   hCCpi0inFV_stack_10->SetBinError(22,1.277223);
   hCCpi0inFV_stack_10->SetBinError(23,1.035986);
   hCCpi0inFV_stack_10->SetBinError(24,0.5403794);
   hCCpi0inFV_stack_10->SetEntries(1165);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.127039);
   hNCinFV_stack_11->SetBinContent(2,6.74702);
   hNCinFV_stack_11->SetBinContent(3,9.520003);
   hNCinFV_stack_11->SetBinContent(4,14.4013);
   hNCinFV_stack_11->SetBinContent(5,13.03613);
   hNCinFV_stack_11->SetBinContent(6,12.21569);
   hNCinFV_stack_11->SetBinContent(7,12.84618);
   hNCinFV_stack_11->SetBinContent(8,11.39019);
   hNCinFV_stack_11->SetBinContent(9,10.6532);
   hNCinFV_stack_11->SetBinContent(10,6.443798);
   hNCinFV_stack_11->SetBinContent(11,8.903045);
   hNCinFV_stack_11->SetBinContent(12,5.80209);
   hNCinFV_stack_11->SetBinContent(13,9.41857);
   hNCinFV_stack_11->SetBinContent(14,4.253116);
   hNCinFV_stack_11->SetBinContent(15,6.206746);
   hNCinFV_stack_11->SetBinContent(16,7.075972);
   hNCinFV_stack_11->SetBinContent(17,5.136341);
   hNCinFV_stack_11->SetBinContent(18,6.44718);
   hNCinFV_stack_11->SetBinContent(19,6.698838);
   hNCinFV_stack_11->SetBinContent(20,3.372665);
   hNCinFV_stack_11->SetBinContent(21,4.357932);
   hNCinFV_stack_11->SetBinContent(22,4.729994);
   hNCinFV_stack_11->SetBinContent(23,3.854614);
   hNCinFV_stack_11->SetBinContent(24,1.805704);
   hNCinFV_stack_11->SetBinError(1,0.5201044);
   hNCinFV_stack_11->SetBinError(2,1.271649);
   hNCinFV_stack_11->SetBinError(3,1.582362);
   hNCinFV_stack_11->SetBinError(4,1.911897);
   hNCinFV_stack_11->SetBinError(5,1.840953);
   hNCinFV_stack_11->SetBinError(6,1.755553);
   hNCinFV_stack_11->SetBinError(7,1.831136);
   hNCinFV_stack_11->SetBinError(8,1.665184);
   hNCinFV_stack_11->SetBinError(9,1.605739);
   hNCinFV_stack_11->SetBinError(10,1.286487);
   hNCinFV_stack_11->SetBinError(11,1.496019);
   hNCinFV_stack_11->SetBinError(12,1.256163);
   hNCinFV_stack_11->SetBinError(13,1.607019);
   hNCinFV_stack_11->SetBinError(14,1.039075);
   hNCinFV_stack_11->SetBinError(15,1.208863);
   hNCinFV_stack_11->SetBinError(16,1.388093);
   hNCinFV_stack_11->SetBinError(17,1.074168);
   hNCinFV_stack_11->SetBinError(18,1.287001);
   hNCinFV_stack_11->SetBinError(19,1.287402);
   hNCinFV_stack_11->SetBinError(20,0.8990075);
   hNCinFV_stack_11->SetBinError(21,1.00118);
   hNCinFV_stack_11->SetBinError(22,1.126842);
   hNCinFV_stack_11->SetBinError(23,1.000148);
   hNCinFV_stack_11->SetBinError(24,0.7080169);
   hNCinFV_stack_11->SetEntries(747);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.608988);
   hnumuCCinFV_stack_12->SetBinContent(2,6.057816);
   hnumuCCinFV_stack_12->SetBinContent(3,5.388062);
   hnumuCCinFV_stack_12->SetBinContent(4,7.954494);
   hnumuCCinFV_stack_12->SetBinContent(5,6.369959);
   hnumuCCinFV_stack_12->SetBinContent(6,8.336728);
   hnumuCCinFV_stack_12->SetBinContent(7,10.06594);
   hnumuCCinFV_stack_12->SetBinContent(8,15.71699);
   hnumuCCinFV_stack_12->SetBinContent(9,15.35435);
   hnumuCCinFV_stack_12->SetBinContent(10,16.86425);
   hnumuCCinFV_stack_12->SetBinContent(11,18.70592);
   hnumuCCinFV_stack_12->SetBinContent(12,23.64493);
   hnumuCCinFV_stack_12->SetBinContent(13,13.9993);
   hnumuCCinFV_stack_12->SetBinContent(14,15.4442);
   hnumuCCinFV_stack_12->SetBinContent(15,5.311105);
   hnumuCCinFV_stack_12->SetBinContent(16,9.249946);
   hnumuCCinFV_stack_12->SetBinContent(17,7.259498);
   hnumuCCinFV_stack_12->SetBinContent(18,5.973293);
   hnumuCCinFV_stack_12->SetBinContent(19,7.172574);
   hnumuCCinFV_stack_12->SetBinContent(20,6.269796);
   hnumuCCinFV_stack_12->SetBinContent(21,5.557732);
   hnumuCCinFV_stack_12->SetBinContent(22,4.69094);
   hnumuCCinFV_stack_12->SetBinContent(23,2.454786);
   hnumuCCinFV_stack_12->SetBinContent(24,1.911625);
   hnumuCCinFV_stack_12->SetBinError(1,0.6801404);
   hnumuCCinFV_stack_12->SetBinError(2,1.226921);
   hnumuCCinFV_stack_12->SetBinError(3,1.130699);
   hnumuCCinFV_stack_12->SetBinError(4,1.432291);
   hnumuCCinFV_stack_12->SetBinError(5,1.208378);
   hnumuCCinFV_stack_12->SetBinError(6,1.729692);
   hnumuCCinFV_stack_12->SetBinError(7,2.050742);
   hnumuCCinFV_stack_12->SetBinError(8,3.115655);
   hnumuCCinFV_stack_12->SetBinError(9,2.438968);
   hnumuCCinFV_stack_12->SetBinError(10,2.256734);
   hnumuCCinFV_stack_12->SetBinError(11,2.512159);
   hnumuCCinFV_stack_12->SetBinError(12,3.193193);
   hnumuCCinFV_stack_12->SetBinError(13,2.094538);
   hnumuCCinFV_stack_12->SetBinError(14,2.271089);
   hnumuCCinFV_stack_12->SetBinError(15,1.17589);
   hnumuCCinFV_stack_12->SetBinError(16,1.612025);
   hnumuCCinFV_stack_12->SetBinError(17,1.735275);
   hnumuCCinFV_stack_12->SetBinError(18,1.644564);
   hnumuCCinFV_stack_12->SetBinError(19,1.471489);
   hnumuCCinFV_stack_12->SetBinError(20,1.309183);
   hnumuCCinFV_stack_12->SetBinError(21,1.27205);
   hnumuCCinFV_stack_12->SetBinError(22,1.128745);
   hnumuCCinFV_stack_12->SetBinError(23,0.7719923);
   hnumuCCinFV_stack_12->SetBinError(24,0.6973363);
   hnumuCCinFV_stack_12->SetEntries(869);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.569141);
   hnueCCinFV_stack_13->SetBinContent(2,1.888855);
   hnueCCinFV_stack_13->SetBinContent(3,1.121981);
   hnueCCinFV_stack_13->SetBinContent(4,0.536893);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(10,0.9315196);
   hnueCCinFV_stack_13->SetBinContent(11,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(14,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(15,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(16,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(17,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(18,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.6036536);
   hnueCCinFV_stack_13->SetBinError(2,0.7474629);
   hnueCCinFV_stack_13->SetBinError(3,0.5867897);
   hnueCCinFV_stack_13->SetBinError(4,0.3929602);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.4810838);
   hnueCCinFV_stack_13->SetBinError(10,0.5427017);
   hnueCCinFV_stack_13->SetBinError(11,0.3174228);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(14,0.5946997);
   hnueCCinFV_stack_13->SetBinError(15,0.2556436);
   hnueCCinFV_stack_13->SetBinError(16,0.2486649);
   hnueCCinFV_stack_13->SetBinError(17,0.2346262);
   hnueCCinFV_stack_13->SetBinError(18,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.2451916);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__20->SetBinContent(1,16.04377);
   hmcerror__20->SetBinContent(2,54.50544);
   hmcerror__20->SetBinContent(3,78.86593);
   hmcerror__20->SetBinContent(4,110.0271);
   hmcerror__20->SetBinContent(5,108.4605);
   hmcerror__20->SetBinContent(6,123.1188);
   hmcerror__20->SetBinContent(7,135.818);
   hmcerror__20->SetBinContent(8,140.3704);
   hmcerror__20->SetBinContent(9,128.1695);
   hmcerror__20->SetBinContent(10,123.7873);
   hmcerror__20->SetBinContent(11,130.686);
   hmcerror__20->SetBinContent(12,131.1191);
   hmcerror__20->SetBinContent(13,100.3338);
   hmcerror__20->SetBinContent(14,91.50352);
   hmcerror__20->SetBinContent(15,86.44216);
   hmcerror__20->SetBinContent(16,90.78322);
   hmcerror__20->SetBinContent(17,69.58463);
   hmcerror__20->SetBinContent(18,63.19375);
   hmcerror__20->SetBinContent(19,62.5759);
   hmcerror__20->SetBinContent(20,54.13676);
   hmcerror__20->SetBinContent(21,44.88274);
   hmcerror__20->SetBinContent(22,39.40877);
   hmcerror__20->SetBinContent(23,24.05851);
   hmcerror__20->SetBinContent(24,8.631129);
   hmcerror__20->SetBinError(1,8.306581);
   hmcerror__20->SetBinError(2,21.50543);
   hmcerror__20->SetBinError(3,31.70037);
   hmcerror__20->SetBinError(4,42.99524);
   hmcerror__20->SetBinError(5,44.93226);
   hmcerror__20->SetBinError(6,50.26933);
   hmcerror__20->SetBinError(7,61.70254);
   hmcerror__20->SetBinError(8,62.59345);
   hmcerror__20->SetBinError(9,56.73309);
   hmcerror__20->SetBinError(10,52.276);
   hmcerror__20->SetBinError(11,52.62732);
   hmcerror__20->SetBinError(12,51.91871);
   hmcerror__20->SetBinError(13,41.13637);
   hmcerror__20->SetBinError(14,36.21017);
   hmcerror__20->SetBinError(15,31.35772);
   hmcerror__20->SetBinError(16,31.98064);
   hmcerror__20->SetBinError(17,27.62148);
   hmcerror__20->SetBinError(18,24.89265);
   hmcerror__20->SetBinError(19,24.43919);
   hmcerror__20->SetBinError(20,23.09087);
   hmcerror__20->SetBinError(21,24.65661);
   hmcerror__20->SetBinError(22,24.69052);
   hmcerror__20->SetBinError(23,11.40084);
   hmcerror__20->SetBinError(24,8.593964);
   hmcerror__20->SetBinError(25,0.3895343);
   hmcerror__20->SetEntries(1993.425);

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
   12,
   34,
   49,
   81,
   78,
   78,
   106,
   93,
   102,
   91,
   111,
   76,
   73,
   64,
   70,
   53,
   63,
   53,
   41,
   39,
   37,
   24,
   20,
   4};
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
   3.64022,
   5.9703,
   7.1318,
   9.1239,
   8.9562,
   8.9562,
   10.29563,
   9.7658,
   10.0995,
   9.6617,
   10.53565,
   8.8425,
   8.6693,
   8.1273,
   8.4925,
   7.4105,
   8.0648,
   7.4105,
   6.5384,
   6.3813,
   6.2203,
   5.0476,
   4.6266,
   2.29683};
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
   3.4155,
   5.7635,
   6.9277,
   8.9221,
   8.7542,
   8.7542,
   10.29563,
   9.564,
   10.0995,
   9.46,
   10.53565,
   8.6406,
   8.4672,
   7.9246,
   8.2902,
   7.2068,
   7.862,
   7.2068,
   6.3331,
   6.1757,
   6.0141,
   4.837,
   4.4133,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(1.532853);
   Graph_Graph3025->SetMaximum(133.5189);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all");
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
   0.517745,
   0.3945557,
   0.4019527,
   0.3907697,
   0.4142729,
   0.4082992,
   0.4543032,
   0.4459163,
   0.4426411,
   0.422305,
   0.4027005,
   0.3959661,
   0.4099952,
   0.3957244,
   0.3627596,
   0.3522748,
   0.396948,
   0.39391,
   0.3905527,
   0.4265284,
   0.5493562,
   0.6265236,
   0.4738795,
   0.9956941};
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
   0.517745,
   0.3945557,
   0.4019527,
   0.3907697,
   0.4142729,
   0.4082992,
   0.4543032,
   0.4459163,
   0.4426411,
   0.422305,
   0.4027005,
   0.3959661,
   0.4099952,
   0.3957244,
   0.3627596,
   0.3522748,
   0.396948,
   0.39391,
   0.3905527,
   0.4265284,
   0.5493562,
   0.6265236,
   0.4738795,
   0.9956941};
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
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   0.3623403,
   0.2962188,
   0.3393643,
   0.3546624,
   0.390819,
   0.3852019,
   0.4051783,
   0.4117245,
   0.4170223,
   0.3878595,
   0.3582513,
   0.3564747,
   0.3451553,
   0.354659,
   0.3326562,
   0.3093089,
   0.3590674,
   0.3579332,
   0.3313808,
   0.3262631,
   0.3382037,
   0.3044785,
   0.3074079,
   0.3363333};
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
   0.3623403,
   0.2962188,
   0.3393643,
   0.3546624,
   0.390819,
   0.3852019,
   0.4051783,
   0.4117245,
   0.4170223,
   0.3878595,
   0.3582513,
   0.3564747,
   0.3451553,
   0.354659,
   0.3326562,
   0.3093089,
   0.3590674,
   0.3579332,
   0.3313808,
   0.3262631,
   0.3382037,
   0.3044785,
   0.3074079,
   0.3363333};
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
   0.747954,
   0.6237909,
   0.6213076,
   0.7361825,
   0.7191556,
   0.6335343,
   0.7804562,
   0.6625329,
   0.7958211,
   0.7351319,
   0.8493641,
   0.5796258,
   0.7275714,
   0.6994267,
   0.80979,
   0.5838083,
   0.9053724,
   0.8386905,
   0.6552043,
   0.7203977,
   0.8243703,
   0.6090015,
   0.8313066,
   0.4634388};
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
   0.2268931,
   0.1095358,
   0.09042942,
   0.08292415,
   0.08257565,
   0.07274435,
   0.07580461,
   0.06957165,
   0.07879803,
   0.07805081,
   0.08061807,
   0.0674387,
   0.08640458,
   0.08881954,
   0.09824488,
   0.08162852,
   0.1158992,
   0.1172663,
   0.1044875,
   0.1178737,
   0.13859,
   0.1280832,
   0.1923061,
   0.26611};
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
   0.2128864,
   0.1057417,
   0.08784148,
   0.08109005,
   0.08071322,
   0.07110366,
   0.07580461,
   0.06813403,
   0.07879803,
   0.0764214,
   0.08061807,
   0.06589888,
   0.0843903,
   0.08660432,
   0.09590459,
   0.07938472,
   0.1129847,
   0.1140429,
   0.1012067,
   0.1140759,
   0.1339958,
   0.1227392,
   0.1834403,
   0.2296177};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.1152259);
   Graph_Graph3028->SetMaximum(1.10046);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
