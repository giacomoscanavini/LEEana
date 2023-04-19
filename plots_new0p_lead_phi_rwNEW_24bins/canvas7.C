#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 18:06:01 2023) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-1.969117,3.957692,217.7429);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__19->SetBinContent(1,97.90618);
   hmc__19->SetBinContent(2,98.45586);
   hmc__19->SetBinContent(3,89.67651);
   hmc__19->SetBinContent(4,86.39175);
   hmc__19->SetBinContent(5,74.37245);
   hmc__19->SetBinContent(6,70.55449);
   hmc__19->SetBinContent(7,66.73072);
   hmc__19->SetBinContent(8,78.52432);
   hmc__19->SetBinContent(9,85.00426);
   hmc__19->SetBinContent(10,80.11969);
   hmc__19->SetBinContent(11,97.23745);
   hmc__19->SetBinContent(12,89.77721);
   hmc__19->SetBinContent(13,98.08137);
   hmc__19->SetBinContent(14,90.93775);
   hmc__19->SetBinContent(15,94.53478);
   hmc__19->SetBinContent(16,79.59219);
   hmc__19->SetBinContent(17,77.89141);
   hmc__19->SetBinContent(18,65.19413);
   hmc__19->SetBinContent(19,63.88412);
   hmc__19->SetBinContent(20,80.07214);
   hmc__19->SetBinContent(21,76.95883);
   hmc__19->SetBinContent(22,84.66051);
   hmc__19->SetBinContent(23,92.28605);
   hmc__19->SetBinContent(24,97.66262);
   hmc__19->SetBinError(1,36.29398);
   hmc__19->SetBinError(2,36.11144);
   hmc__19->SetBinError(3,36.93762);
   hmc__19->SetBinError(4,34.21447);
   hmc__19->SetBinError(5,30.61427);
   hmc__19->SetBinError(6,27.45804);
   hmc__19->SetBinError(7,30.35416);
   hmc__19->SetBinError(8,32.92212);
   hmc__19->SetBinError(9,36.72056);
   hmc__19->SetBinError(10,33.62978);
   hmc__19->SetBinError(11,41.39208);
   hmc__19->SetBinError(12,34.6307);
   hmc__19->SetBinError(13,34.81557);
   hmc__19->SetBinError(14,35.98691);
   hmc__19->SetBinError(15,37.95898);
   hmc__19->SetBinError(16,31.33231);
   hmc__19->SetBinError(17,31.58407);
   hmc__19->SetBinError(18,41.16733);
   hmc__19->SetBinError(19,24.74697);
   hmc__19->SetBinError(20,33.34029);
   hmc__19->SetBinError(21,33.75303);
   hmc__19->SetBinError(22,35.86058);
   hmc__19->SetBinError(23,36.78647);
   hmc__19->SetBinError(24,35.21523);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-1.969117);
   hmc__19->SetMaximum(206.7573);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,-3.15,3.15);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(103.3787);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.45133);
   hbadmatch_stack_1->SetBinContent(2,2.225199);
   hbadmatch_stack_1->SetBinContent(3,2.371642);
   hbadmatch_stack_1->SetBinContent(4,2.471865);
   hbadmatch_stack_1->SetBinContent(5,2.774262);
   hbadmatch_stack_1->SetBinContent(6,1.270501);
   hbadmatch_stack_1->SetBinContent(7,2.277454);
   hbadmatch_stack_1->SetBinContent(8,1.409985);
   hbadmatch_stack_1->SetBinContent(9,3.089887);
   hbadmatch_stack_1->SetBinContent(10,0.7319179);
   hbadmatch_stack_1->SetBinContent(11,2.053859);
   hbadmatch_stack_1->SetBinContent(12,1.945876);
   hbadmatch_stack_1->SetBinContent(13,1.669762);
   hbadmatch_stack_1->SetBinContent(14,1.732778);
   hbadmatch_stack_1->SetBinContent(15,0.5884556);
   hbadmatch_stack_1->SetBinContent(16,1.745271);
   hbadmatch_stack_1->SetBinContent(17,1.383106);
   hbadmatch_stack_1->SetBinContent(18,0.980219);
   hbadmatch_stack_1->SetBinContent(19,1.490399);
   hbadmatch_stack_1->SetBinContent(20,2.172398);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinContent(22,1.321757);
   hbadmatch_stack_1->SetBinContent(23,0.9801958);
   hbadmatch_stack_1->SetBinContent(24,0.9632978);
   hbadmatch_stack_1->SetBinError(1,0.8934105);
   hbadmatch_stack_1->SetBinError(2,0.7769082);
   hbadmatch_stack_1->SetBinError(3,0.8173619);
   hbadmatch_stack_1->SetBinError(4,0.8197022);
   hbadmatch_stack_1->SetBinError(5,0.8657968);
   hbadmatch_stack_1->SetBinError(6,0.5895188);
   hbadmatch_stack_1->SetBinError(7,1.238798);
   hbadmatch_stack_1->SetBinError(8,0.533908);
   hbadmatch_stack_1->SetBinError(9,1.001817);
   hbadmatch_stack_1->SetBinError(10,0.438694);
   hbadmatch_stack_1->SetBinError(11,0.749392);
   hbadmatch_stack_1->SetBinError(12,0.7645524);
   hbadmatch_stack_1->SetBinError(13,0.5934224);
   hbadmatch_stack_1->SetBinError(14,0.737246);
   hbadmatch_stack_1->SetBinError(15,0.3397478);
   hbadmatch_stack_1->SetBinError(16,0.7823536);
   hbadmatch_stack_1->SetBinError(17,0.5953964);
   hbadmatch_stack_1->SetBinError(18,0.4383608);
   hbadmatch_stack_1->SetBinError(19,0.6219058);
   hbadmatch_stack_1->SetBinError(20,0.761886);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetBinError(22,0.6085434);
   hbadmatch_stack_1->SetBinError(23,0.4383608);
   hbadmatch_stack_1->SetBinError(24,0.4959729);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,2.428004);
   hext_stack_2->SetBinContent(3,4.785396);
   hext_stack_2->SetBinContent(4,6.31082);
   hext_stack_2->SetBinContent(5,4.214394);
   hext_stack_2->SetBinContent(6,5.751408);
   hext_stack_2->SetBinContent(7,3.229612);
   hext_stack_2->SetBinContent(8,7.683431);
   hext_stack_2->SetBinContent(9,3.483397);
   hext_stack_2->SetBinContent(10,4.688833);
   hext_stack_2->SetBinContent(11,3.401196);
   hext_stack_2->SetBinContent(12,2.517386);
   hext_stack_2->SetBinContent(13,2.428004);
   hext_stack_2->SetBinContent(14,2.994597);
   hext_stack_2->SetBinContent(15,3.490578);
   hext_stack_2->SetBinContent(16,3.316223);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,3.979379);
   hext_stack_2->SetBinContent(19,4.93821);
   hext_stack_2->SetBinContent(20,7.619999);
   hext_stack_2->SetBinContent(21,2.517386);
   hext_stack_2->SetBinContent(22,3.304633);
   hext_stack_2->SetBinContent(23,3.248382);
   hext_stack_2->SetBinContent(24,4.53161);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,1.028599);
   hext_stack_2->SetBinError(3,1.410625);
   hext_stack_2->SetBinError(4,1.690664);
   hext_stack_2->SetBinError(5,1.305512);
   hext_stack_2->SetBinError(6,1.583276);
   hext_stack_2->SetBinError(7,1.206126);
   hext_stack_2->SetBinError(8,1.88164);
   hext_stack_2->SetBinError(9,1.197416);
   hext_stack_2->SetBinError(10,1.527146);
   hext_stack_2->SetBinError(11,1.172056);
   hext_stack_2->SetBinError(12,0.9575503);
   hext_stack_2->SetBinError(13,1.028599);
   hext_stack_2->SetBinError(14,1.099269);
   hext_stack_2->SetBinError(15,1.110227);
   hext_stack_2->SetBinError(16,1.284504);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,1.207483);
   hext_stack_2->SetBinError(19,1.475167);
   hext_stack_2->SetBinError(20,1.79254);
   hext_stack_2->SetBinError(21,0.9575503);
   hext_stack_2->SetBinError(22,1.309973);
   hext_stack_2->SetBinError(23,1.089706);
   hext_stack_2->SetBinError(24,1.418025);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2516114);
   hdirt_stack_3->SetBinContent(2,0.3381872);
   hdirt_stack_3->SetBinContent(3,0.5135057);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.5570828);
   hdirt_stack_3->SetBinContent(6,0.6998254);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(8,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.4377912);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.1446783);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.4257011);
   hdirt_stack_3->SetBinContent(18,0.2214509);
   hdirt_stack_3->SetBinContent(19,0.3790882);
   hdirt_stack_3->SetBinContent(20,0.3569671);
   hdirt_stack_3->SetBinContent(21,0.590017);
   hdirt_stack_3->SetBinContent(22,0.4007975);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2516114);
   hdirt_stack_3->SetBinError(2,0.3381872);
   hdirt_stack_3->SetBinError(3,0.3809293);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.4028472);
   hdirt_stack_3->SetBinError(6,0.4055767);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(8,0.3381872);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.3095651);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1446783);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(17,0.3084732);
   hdirt_stack_3->SetBinError(18,0.2189105);
   hdirt_stack_3->SetBinError(19,0.2712507);
   hdirt_stack_3->SetBinError(20,0.258803);
   hdirt_stack_3->SetBinError(21,0.4557601);
   hdirt_stack_3->SetBinError(22,0.4007975);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,1.497568);
   houtFV_stack_4->SetBinContent(2,2.093699);
   houtFV_stack_4->SetBinContent(3,2.339216);
   houtFV_stack_4->SetBinContent(4,3.219586);
   houtFV_stack_4->SetBinContent(5,2.453416);
   houtFV_stack_4->SetBinContent(6,2.782519);
   houtFV_stack_4->SetBinContent(7,2.640747);
   houtFV_stack_4->SetBinContent(8,2.736028);
   houtFV_stack_4->SetBinContent(9,1.513708);
   houtFV_stack_4->SetBinContent(10,1.712114);
   houtFV_stack_4->SetBinContent(11,1.819302);
   houtFV_stack_4->SetBinContent(12,1.178602);
   houtFV_stack_4->SetBinContent(13,1.973795);
   houtFV_stack_4->SetBinContent(14,2.7859);
   houtFV_stack_4->SetBinContent(15,3.032683);
   houtFV_stack_4->SetBinContent(16,4.351001);
   houtFV_stack_4->SetBinContent(17,2.661456);
   houtFV_stack_4->SetBinContent(18,1.073786);
   houtFV_stack_4->SetBinContent(19,2.199135);
   houtFV_stack_4->SetBinContent(20,2.445722);
   houtFV_stack_4->SetBinContent(21,2.64876);
   houtFV_stack_4->SetBinContent(22,3.018172);
   houtFV_stack_4->SetBinContent(23,1.127039);
   houtFV_stack_4->SetBinContent(24,2.736028);
   houtFV_stack_4->SetBinError(1,0.6319131);
   houtFV_stack_4->SetBinError(2,0.7818046);
   houtFV_stack_4->SetBinError(3,0.8089383);
   houtFV_stack_4->SetBinError(4,0.8879427);
   houtFV_stack_4->SetBinError(5,0.8127382);
   houtFV_stack_4->SetBinError(6,0.8319397);
   houtFV_stack_4->SetBinError(7,0.784705);
   houtFV_stack_4->SetBinError(8,0.8562123);
   houtFV_stack_4->SetBinError(9,0.5875827);
   houtFV_stack_4->SetBinError(10,0.6201715);
   houtFV_stack_4->SetBinError(11,0.6572719);
   houtFV_stack_4->SetBinError(12,0.4811646);
   houtFV_stack_4->SetBinError(13,0.6586871);
   houtFV_stack_4->SetBinError(14,0.8327353);
   houtFV_stack_4->SetBinError(15,0.9227365);
   houtFV_stack_4->SetBinError(16,0.967278);
   houtFV_stack_4->SetBinError(17,0.8280665);
   houtFV_stack_4->SetBinError(18,0.5557297);
   houtFV_stack_4->SetBinError(19,0.7607114);
   houtFV_stack_4->SetBinError(20,0.7600838);
   houtFV_stack_4->SetBinError(21,0.8258005);
   houtFV_stack_4->SetBinError(22,0.9408298);
   houtFV_stack_4->SetBinError(23,0.5201044);
   houtFV_stack_4->SetBinError(24,0.8562123);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.69634);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6277541);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.753636);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2814331);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2996304);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2941681);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,40.76274);
   hNCpi0inFVres_stack_7->SetBinContent(2,42.05261);
   hNCpi0inFVres_stack_7->SetBinContent(3,40.64613);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.96263);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.0579);
   hNCpi0inFVres_stack_7->SetBinContent(6,33.42017);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.30909);
   hNCpi0inFVres_stack_7->SetBinContent(8,40.18563);
   hNCpi0inFVres_stack_7->SetBinContent(9,43.38269);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.74506);
   hNCpi0inFVres_stack_7->SetBinContent(11,45.31278);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.89822);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.09818);
   hNCpi0inFVres_stack_7->SetBinContent(14,42.64335);
   hNCpi0inFVres_stack_7->SetBinContent(15,44.49287);
   hNCpi0inFVres_stack_7->SetBinContent(16,38.75209);
   hNCpi0inFVres_stack_7->SetBinContent(17,38.34039);
   hNCpi0inFVres_stack_7->SetBinContent(18,33.66365);
   hNCpi0inFVres_stack_7->SetBinContent(19,32.15903);
   hNCpi0inFVres_stack_7->SetBinContent(20,38.03934);
   hNCpi0inFVres_stack_7->SetBinContent(21,40.36665);
   hNCpi0inFVres_stack_7->SetBinContent(22,42.26652);
   hNCpi0inFVres_stack_7->SetBinContent(23,42.6274);
   hNCpi0inFVres_stack_7->SetBinContent(24,39.12426);
   hNCpi0inFVres_stack_7->SetBinError(1,2.12482);
   hNCpi0inFVres_stack_7->SetBinError(2,2.143467);
   hNCpi0inFVres_stack_7->SetBinError(3,2.026596);
   hNCpi0inFVres_stack_7->SetBinError(4,2.28048);
   hNCpi0inFVres_stack_7->SetBinError(5,1.932684);
   hNCpi0inFVres_stack_7->SetBinError(6,1.833066);
   hNCpi0inFVres_stack_7->SetBinError(7,1.931727);
   hNCpi0inFVres_stack_7->SetBinError(8,2.103048);
   hNCpi0inFVres_stack_7->SetBinError(9,2.187814);
   hNCpi0inFVres_stack_7->SetBinError(10,2.018956);
   hNCpi0inFVres_stack_7->SetBinError(11,2.241156);
   hNCpi0inFVres_stack_7->SetBinError(12,1.95849);
   hNCpi0inFVres_stack_7->SetBinError(13,1.986297);
   hNCpi0inFVres_stack_7->SetBinError(14,2.199583);
   hNCpi0inFVres_stack_7->SetBinError(15,2.197119);
   hNCpi0inFVres_stack_7->SetBinError(16,2.024467);
   hNCpi0inFVres_stack_7->SetBinError(17,1.976623);
   hNCpi0inFVres_stack_7->SetBinError(18,1.916286);
   hNCpi0inFVres_stack_7->SetBinError(19,1.856101);
   hNCpi0inFVres_stack_7->SetBinError(20,2.016733);
   hNCpi0inFVres_stack_7->SetBinError(21,2.071253);
   hNCpi0inFVres_stack_7->SetBinError(22,2.139651);
   hNCpi0inFVres_stack_7->SetBinError(23,2.159042);
   hNCpi0inFVres_stack_7->SetBinError(24,2.040568);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.130558);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.124653);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.458125);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.374019);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.284405);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.742936);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.800904);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.455886);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.875802);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.13844);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.351934);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.65285);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.546234);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.613987);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.644552);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.429562);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.786862);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.864409);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.11535);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.712395);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.570893);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.185862);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.366385);
   hNCpi0inFVdis_stack_8->SetBinContent(24,7.291894);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9231708);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8209261);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.842761);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8622414);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6467395);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.759353);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8455666);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.821282);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9204262);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8448753);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9652506);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8476352);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9408148);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9248202);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9729483);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8502708);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8081039);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6331053);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7208311);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9518855);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8933889);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9487111);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9788312);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8890217);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,13.58571);
   hCCpi0inFV_stack_10->SetBinContent(2,12.93691);
   hCCpi0inFV_stack_10->SetBinContent(3,9.829594);
   hCCpi0inFV_stack_10->SetBinContent(4,12.04095);
   hCCpi0inFV_stack_10->SetBinContent(5,12.31677);
   hCCpi0inFV_stack_10->SetBinContent(6,7.962814);
   hCCpi0inFV_stack_10->SetBinContent(7,6.638824);
   hCCpi0inFV_stack_10->SetBinContent(8,8.49609);
   hCCpi0inFV_stack_10->SetBinContent(9,13.37339);
   hCCpi0inFV_stack_10->SetBinContent(10,10.26146);
   hCCpi0inFV_stack_10->SetBinContent(11,12.39669);
   hCCpi0inFV_stack_10->SetBinContent(12,15.43198);
   hCCpi0inFV_stack_10->SetBinContent(13,13.8661);
   hCCpi0inFV_stack_10->SetBinContent(14,13.32246);
   hCCpi0inFV_stack_10->SetBinContent(15,14.11953);
   hCCpi0inFV_stack_10->SetBinContent(16,10.89194);
   hCCpi0inFV_stack_10->SetBinContent(17,10.65151);
   hCCpi0inFV_stack_10->SetBinContent(18,8.204094);
   hCCpi0inFV_stack_10->SetBinContent(19,7.030563);
   hCCpi0inFV_stack_10->SetBinContent(20,9.446092);
   hCCpi0inFV_stack_10->SetBinContent(21,9.702786);
   hCCpi0inFV_stack_10->SetBinContent(22,11.22536);
   hCCpi0inFV_stack_10->SetBinContent(23,14.97066);
   hCCpi0inFV_stack_10->SetBinContent(24,15.13998);
   hCCpi0inFV_stack_10->SetBinError(1,1.843107);
   hCCpi0inFV_stack_10->SetBinError(2,1.825002);
   hCCpi0inFV_stack_10->SetBinError(3,1.526812);
   hCCpi0inFV_stack_10->SetBinError(4,1.771985);
   hCCpi0inFV_stack_10->SetBinError(5,1.789322);
   hCCpi0inFV_stack_10->SetBinError(6,1.4707);
   hCCpi0inFV_stack_10->SetBinError(7,1.301185);
   hCCpi0inFV_stack_10->SetBinError(8,1.468122);
   hCCpi0inFV_stack_10->SetBinError(9,1.834617);
   hCCpi0inFV_stack_10->SetBinError(10,1.581666);
   hCCpi0inFV_stack_10->SetBinError(11,1.807763);
   hCCpi0inFV_stack_10->SetBinError(12,2.001621);
   hCCpi0inFV_stack_10->SetBinError(13,1.871255);
   hCCpi0inFV_stack_10->SetBinError(14,1.790585);
   hCCpi0inFV_stack_10->SetBinError(15,1.83458);
   hCCpi0inFV_stack_10->SetBinError(16,1.665161);
   hCCpi0inFV_stack_10->SetBinError(17,1.605533);
   hCCpi0inFV_stack_10->SetBinError(18,1.413983);
   hCCpi0inFV_stack_10->SetBinError(19,1.330344);
   hCCpi0inFV_stack_10->SetBinError(20,1.482064);
   hCCpi0inFV_stack_10->SetBinError(21,1.611846);
   hCCpi0inFV_stack_10->SetBinError(22,1.698774);
   hCCpi0inFV_stack_10->SetBinError(23,1.997496);
   hCCpi0inFV_stack_10->SetBinError(24,1.962257);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,8.562259);
   hNCinFV_stack_11->SetBinContent(2,7.327631);
   hNCinFV_stack_11->SetBinContent(3,10.7288);
   hNCinFV_stack_11->SetBinContent(4,5.862105);
   hNCinFV_stack_11->SetBinContent(5,5.612136);
   hNCinFV_stack_11->SetBinContent(6,5.908596);
   hNCinFV_stack_11->SetBinContent(7,6.745329);
   hNCinFV_stack_11->SetBinContent(8,5.771895);
   hNCinFV_stack_11->SetBinContent(9,7.377503);
   hNCinFV_stack_11->SetBinContent(10,7.075972);
   hNCinFV_stack_11->SetBinContent(11,6.463477);
   hNCinFV_stack_11->SetBinContent(12,8.109421);
   hNCinFV_stack_11->SetBinContent(13,8.696186);
   hNCinFV_stack_11->SetBinContent(14,6.206746);
   hNCinFV_stack_11->SetBinContent(15,9.416878);
   hNCinFV_stack_11->SetBinContent(16,7.021029);
   hNCinFV_stack_11->SetBinContent(17,9.094688);
   hNCinFV_stack_11->SetBinContent(18,6.345745);
   hNCinFV_stack_11->SetBinContent(19,6.19552);
   hNCinFV_stack_11->SetBinContent(20,6.258309);
   hNCinFV_stack_11->SetBinContent(21,7.583754);
   hNCinFV_stack_11->SetBinContent(22,6.000495);
   hNCinFV_stack_11->SetBinContent(23,9.819844);
   hNCinFV_stack_11->SetBinContent(24,8.259037);
   hNCinFV_stack_11->SetBinError(1,1.386984);
   hNCinFV_stack_11->SetBinError(2,1.388465);
   hNCinFV_stack_11->SetBinError(3,1.698946);
   hNCinFV_stack_11->SetBinError(4,1.241881);
   hNCinFV_stack_11->SetBinError(5,1.241732);
   hNCinFV_stack_11->SetBinError(6,1.225272);
   hNCinFV_stack_11->SetBinError(7,1.271389);
   hNCinFV_stack_11->SetBinError(8,1.194537);
   hNCinFV_stack_11->SetBinError(9,1.374112);
   hNCinFV_stack_11->SetBinError(10,1.388093);
   hNCinFV_stack_11->SetBinError(11,1.210111);
   hNCinFV_stack_11->SetBinError(12,1.442441);
   hNCinFV_stack_11->SetBinError(13,1.481689);
   hNCinFV_stack_11->SetBinError(14,1.208863);
   hNCinFV_stack_11->SetBinError(15,1.606813);
   hNCinFV_stack_11->SetBinError(16,1.401595);
   hNCinFV_stack_11->SetBinError(17,1.508239);
   hNCinFV_stack_11->SetBinError(18,1.317199);
   hNCinFV_stack_11->SetBinError(19,1.2866);
   hNCinFV_stack_11->SetBinError(20,1.192627);
   hNCinFV_stack_11->SetBinError(21,1.316141);
   hNCinFV_stack_11->SetBinError(22,1.271733);
   hNCinFV_stack_11->SetBinError(23,1.5699);
   hNCinFV_stack_11->SetBinError(24,1.400601);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,20.15114);
   hnumuCCinFV_stack_12->SetBinContent(2,20.89245);
   hnumuCCinFV_stack_12->SetBinContent(3,9.769643);
   hnumuCCinFV_stack_12->SetBinContent(4,3.193126);
   hnumuCCinFV_stack_12->SetBinContent(5,3.939298);
   hnumuCCinFV_stack_12->SetBinContent(6,6.097125);
   hnumuCCinFV_stack_12->SetBinContent(7,3.208381);
   hnumuCCinFV_stack_12->SetBinContent(8,4.848816);
   hnumuCCinFV_stack_12->SetBinContent(9,3.894665);
   hnumuCCinFV_stack_12->SetBinContent(10,8.163624);
   hnumuCCinFV_stack_12->SetBinContent(11,15.92311);
   hnumuCCinFV_stack_12->SetBinContent(12,16.06993);
   hnumuCCinFV_stack_12->SetBinContent(13,20.2119);
   hnumuCCinFV_stack_12->SetBinContent(14,11.67003);
   hnumuCCinFV_stack_12->SetBinContent(15,9.091026);
   hnumuCCinFV_stack_12->SetBinContent(16,4.595113);
   hnumuCCinFV_stack_12->SetBinContent(17,6.581932);
   hnumuCCinFV_stack_12->SetBinContent(18,4.736698);
   hnumuCCinFV_stack_12->SetBinContent(19,3.36687);
   hnumuCCinFV_stack_12->SetBinContent(20,5.263377);
   hnumuCCinFV_stack_12->SetBinContent(21,4.366126);
   hnumuCCinFV_stack_12->SetBinContent(22,7.721717);
   hnumuCCinFV_stack_12->SetBinContent(23,9.471212);
   hnumuCCinFV_stack_12->SetBinContent(24,18.1359);
   hnumuCCinFV_stack_12->SetBinError(1,2.55142);
   hnumuCCinFV_stack_12->SetBinError(2,3.646107);
   hnumuCCinFV_stack_12->SetBinError(3,1.767216);
   hnumuCCinFV_stack_12->SetBinError(4,0.8678993);
   hnumuCCinFV_stack_12->SetBinError(5,1.07693);
   hnumuCCinFV_stack_12->SetBinError(6,1.30685);
   hnumuCCinFV_stack_12->SetBinError(7,0.9332373);
   hnumuCCinFV_stack_12->SetBinError(8,1.149328);
   hnumuCCinFV_stack_12->SetBinError(9,1.446955);
   hnumuCCinFV_stack_12->SetBinError(10,1.57852);
   hnumuCCinFV_stack_12->SetBinError(11,2.500624);
   hnumuCCinFV_stack_12->SetBinError(12,2.169324);
   hnumuCCinFV_stack_12->SetBinError(13,2.489027);
   hnumuCCinFV_stack_12->SetBinError(14,2.020752);
   hnumuCCinFV_stack_12->SetBinError(15,1.581259);
   hnumuCCinFV_stack_12->SetBinError(16,1.28981);
   hnumuCCinFV_stack_12->SetBinError(17,1.754467);
   hnumuCCinFV_stack_12->SetBinError(18,1.141822);
   hnumuCCinFV_stack_12->SetBinError(19,0.905491);
   hnumuCCinFV_stack_12->SetBinError(20,1.319527);
   hnumuCCinFV_stack_12->SetBinError(21,1.063357);
   hnumuCCinFV_stack_12->SetBinError(22,1.486037);
   hnumuCCinFV_stack_12->SetBinError(23,1.627875);
   hnumuCCinFV_stack_12->SetBinError(24,2.578458);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_13->SetBinContent(4,0.3893379);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(8,0.4030693);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,0.88752);
   hnueCCinFV_stack_13->SetBinContent(12,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(13,0.912959);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.7897245);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.2560115);
   hnueCCinFV_stack_13->SetBinContent(22,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(23,0.839018);
   hnueCCinFV_stack_13->SetBinContent(24,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.3994798);
   hnueCCinFV_stack_13->SetBinError(4,0.3893379);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.3688623);
   hnueCCinFV_stack_13->SetBinError(8,0.2851617);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.4470051);
   hnueCCinFV_stack_13->SetBinError(12,0.3866963);
   hnueCCinFV_stack_13->SetBinError(13,0.4686161);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.4810838);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.6258613);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.2556439);
   hnueCCinFV_stack_13->SetBinError(22,0.3397478);
   hnueCCinFV_stack_13->SetBinError(23,0.4900487);
   hnueCCinFV_stack_13->SetBinError(24,0.2781975);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__20->SetBinContent(1,97.90618);
   hmcerror__20->SetBinContent(2,98.45586);
   hmcerror__20->SetBinContent(3,89.67651);
   hmcerror__20->SetBinContent(4,86.39175);
   hmcerror__20->SetBinContent(5,74.37245);
   hmcerror__20->SetBinContent(6,70.55449);
   hmcerror__20->SetBinContent(7,66.73072);
   hmcerror__20->SetBinContent(8,78.52432);
   hmcerror__20->SetBinContent(9,85.00426);
   hmcerror__20->SetBinContent(10,80.11969);
   hmcerror__20->SetBinContent(11,97.23745);
   hmcerror__20->SetBinContent(12,89.77721);
   hmcerror__20->SetBinContent(13,98.08137);
   hmcerror__20->SetBinContent(14,90.93775);
   hmcerror__20->SetBinContent(15,94.53478);
   hmcerror__20->SetBinContent(16,79.59219);
   hmcerror__20->SetBinContent(17,77.89141);
   hmcerror__20->SetBinContent(18,65.19413);
   hmcerror__20->SetBinContent(19,63.88412);
   hmcerror__20->SetBinContent(20,80.07214);
   hmcerror__20->SetBinContent(21,76.95883);
   hmcerror__20->SetBinContent(22,84.66051);
   hmcerror__20->SetBinContent(23,92.28605);
   hmcerror__20->SetBinContent(24,97.66262);
   hmcerror__20->SetBinError(1,36.29398);
   hmcerror__20->SetBinError(2,36.11144);
   hmcerror__20->SetBinError(3,36.93762);
   hmcerror__20->SetBinError(4,34.21447);
   hmcerror__20->SetBinError(5,30.61427);
   hmcerror__20->SetBinError(6,27.45804);
   hmcerror__20->SetBinError(7,30.35416);
   hmcerror__20->SetBinError(8,32.92212);
   hmcerror__20->SetBinError(9,36.72056);
   hmcerror__20->SetBinError(10,33.62978);
   hmcerror__20->SetBinError(11,41.39208);
   hmcerror__20->SetBinError(12,34.6307);
   hmcerror__20->SetBinError(13,34.81557);
   hmcerror__20->SetBinError(14,35.98691);
   hmcerror__20->SetBinError(15,37.95898);
   hmcerror__20->SetBinError(16,31.33231);
   hmcerror__20->SetBinError(17,31.58407);
   hmcerror__20->SetBinError(18,41.16733);
   hmcerror__20->SetBinError(19,24.74697);
   hmcerror__20->SetBinError(20,33.34029);
   hmcerror__20->SetBinError(21,33.75303);
   hmcerror__20->SetBinError(22,35.86058);
   hmcerror__20->SetBinError(23,36.78647);
   hmcerror__20->SetBinError(24,35.21523);
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
   97,
   63,
   62,
   58,
   61,
   39,
   69,
   50,
   62,
   55,
   54,
   71,
   75,
   68,
   75,
   56,
   43,
   49,
   55,
   45,
   53,
   68,
   59,
   65};
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
   9.9704,
   8.0648,
   8.0018,
   7.7446,
   7.9383,
   6.3813,
   8.4327,
   7.2025,
   8.0018,
   7.546,
   7.4785,
   8.5518,
   8.7852,
   8.3726,
   8.7852,
   7.6127,
   6.6917,
   7.1318,
   7.546,
   6.8416,
   7.4105,
   8.3726,
   7.8097,
   8.1893};
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
   9.769,
   7.862,
   7.7989,
   7.5415,
   7.7354,
   6.1757,
   8.2304,
   6.9985,
   7.7989,
   7.3425,
   7.275,
   8.3496,
   8.5831,
   8.1701,
   8.5831,
   7.4094,
   6.4868,
   6.9277,
   7.3425,
   6.637,
   7.2068,
   8.1701,
   7.6066,
   7.9866};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(25.20367);
   Graph_Graph3025->SetMaximum(114.184);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.5/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all");
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
   0.3707016,
   0.366778,
   0.4118985,
   0.3960386,
   0.4116345,
   0.389175,
   0.4548754,
   0.4192601,
   0.4319849,
   0.4197443,
   0.4256805,
   0.3857405,
   0.3549662,
   0.3957313,
   0.4015345,
   0.3936607,
   0.4054885,
   0.6314577,
   0.3873728,
   0.4163782,
   0.4385855,
   0.4235809,
   0.3986135,
   0.3605804};
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
   0.3707016,
   0.366778,
   0.4118985,
   0.3960386,
   0.4116345,
   0.389175,
   0.4548754,
   0.4192601,
   0.4319849,
   0.4197443,
   0.4256805,
   0.3857405,
   0.3549662,
   0.3957313,
   0.4015345,
   0.3936607,
   0.4054885,
   0.6314577,
   0.3873728,
   0.4163782,
   0.4385855,
   0.4235809,
   0.3986135,
   0.3605804};
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
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
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
   0.335072,
   0.3330397,
   0.3484392,
   0.3537736,
   0.3669821,
   0.3459499,
   0.3874149,
   0.370987,
   0.375938,
   0.3601304,
   0.3604144,
   0.3373698,
   0.3206939,
   0.3589222,
   0.3647895,
   0.3536963,
   0.3549635,
   0.3772639,
   0.3475725,
   0.3555972,
   0.4008126,
   0.3692992,
   0.3573621,
   0.320305};
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
   0.335072,
   0.3330397,
   0.3484392,
   0.3537736,
   0.3669821,
   0.3459499,
   0.3874149,
   0.370987,
   0.375938,
   0.3601304,
   0.3604144,
   0.3373698,
   0.3206939,
   0.3589222,
   0.3647895,
   0.3536963,
   0.3549635,
   0.3772639,
   0.3475725,
   0.3555972,
   0.4008126,
   0.3692992,
   0.3573621,
   0.320305};
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
   0.9907444,
   0.6398806,
   0.6913739,
   0.6713604,
   0.8201962,
   0.5527643,
   1.034007,
   0.6367454,
   0.7293752,
   0.686473,
   0.5553416,
   0.7908466,
   0.7646712,
   0.7477643,
   0.7933588,
   0.7035867,
   0.5520506,
   0.7516014,
   0.8609339,
   0.5619933,
   0.6886799,
   0.803208,
   0.6393166,
   0.6655566};
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
   0.1018363,
   0.08191285,
   0.08922961,
   0.08964513,
   0.1067371,
   0.09044499,
   0.1263691,
   0.09172317,
   0.0941341,
   0.09418409,
   0.07690967,
   0.0952558,
   0.08957053,
   0.09206957,
   0.09293087,
   0.09564632,
   0.08591063,
   0.1093933,
   0.1181201,
   0.08544296,
   0.09629174,
   0.09889616,
   0.08462493,
   0.08385296};
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
   0.0997792,
   0.07985304,
   0.08696703,
   0.08729421,
   0.1040089,
   0.08753093,
   0.1233375,
   0.08912525,
   0.09174716,
   0.09164414,
   0.07481685,
   0.09300356,
   0.08751,
   0.08984278,
   0.09079304,
   0.09309205,
   0.08328004,
   0.1062626,
   0.1149347,
   0.08288776,
   0.09364487,
   0.09650426,
   0.08242416,
   0.08177745};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.3928168);
   Graph_Graph3028->SetMaximum(1.226846);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
