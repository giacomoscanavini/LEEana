#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 13:51:04 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",60,83,1200,900);
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
   pad1->Range(-4.119231,-2.624859,3.957692,290.2542);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__19->SetBinContent(1,129.0254);
   hmc__19->SetBinContent(2,125.2653);
   hmc__19->SetBinContent(3,119.8773);
   hmc__19->SetBinContent(4,119.5997);
   hmc__19->SetBinContent(5,111.3464);
   hmc__19->SetBinContent(6,104.9391);
   hmc__19->SetBinContent(7,119.3416);
   hmc__19->SetBinContent(8,114.2648);
   hmc__19->SetBinContent(9,109.5676);
   hmc__19->SetBinContent(10,118.5513);
   hmc__19->SetBinContent(11,119.4585);
   hmc__19->SetBinContent(12,124.6788);
   hmc__19->SetBinContent(13,128.7673);
   hmc__19->SetBinContent(14,114.0936);
   hmc__19->SetBinContent(15,121.1358);
   hmc__19->SetBinContent(16,117.4781);
   hmc__19->SetBinContent(17,123.1054);
   hmc__19->SetBinContent(18,114.177);
   hmc__19->SetBinContent(19,119.261);
   hmc__19->SetBinContent(20,113.5285);
   hmc__19->SetBinContent(21,116.6234);
   hmc__19->SetBinContent(22,108.0683);
   hmc__19->SetBinContent(23,119.2515);
   hmc__19->SetBinContent(24,131.243);
   hmc__19->SetBinError(1,47.10879);
   hmc__19->SetBinError(2,47.28594);
   hmc__19->SetBinError(3,46.22703);
   hmc__19->SetBinError(4,41.83172);
   hmc__19->SetBinError(5,42.09706);
   hmc__19->SetBinError(6,43.93424);
   hmc__19->SetBinError(7,41.24972);
   hmc__19->SetBinError(8,39.58361);
   hmc__19->SetBinError(9,42.23811);
   hmc__19->SetBinError(10,47.62558);
   hmc__19->SetBinError(11,44.45011);
   hmc__19->SetBinError(12,51.13775);
   hmc__19->SetBinError(13,47.25321);
   hmc__19->SetBinError(14,44.06362);
   hmc__19->SetBinError(15,50.62197);
   hmc__19->SetBinError(16,44.06708);
   hmc__19->SetBinError(17,53.08591);
   hmc__19->SetBinError(18,42.83592);
   hmc__19->SetBinError(19,42.40567);
   hmc__19->SetBinError(20,42.51751);
   hmc__19->SetBinError(21,46.88901);
   hmc__19->SetBinError(22,41.96222);
   hmc__19->SetBinError(23,44.05616);
   hmc__19->SetBinError(24,57.38524);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-2.624859);
   hmc__19->SetMaximum(275.6102);
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
   hs7_stack_7->SetMinimum(-9.660135e-09);
   hs7_stack_7->SetMaximum(137.8051);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.171563);
   hbadmatch_stack_1->SetBinContent(2,2.055672);
   hbadmatch_stack_1->SetBinContent(3,2.025303);
   hbadmatch_stack_1->SetBinContent(4,2.908235);
   hbadmatch_stack_1->SetBinContent(5,1.809484);
   hbadmatch_stack_1->SetBinContent(6,1.662242);
   hbadmatch_stack_1->SetBinContent(7,2.107235);
   hbadmatch_stack_1->SetBinContent(8,3.81212);
   hbadmatch_stack_1->SetBinContent(9,3.239907);
   hbadmatch_stack_1->SetBinContent(10,1.928832);
   hbadmatch_stack_1->SetBinContent(11,2.169828);
   hbadmatch_stack_1->SetBinContent(12,3.072468);
   hbadmatch_stack_1->SetBinContent(13,3.943976);
   hbadmatch_stack_1->SetBinContent(14,2.262254);
   hbadmatch_stack_1->SetBinContent(15,3.156819);
   hbadmatch_stack_1->SetBinContent(16,1.91052);
   hbadmatch_stack_1->SetBinContent(17,2.743492);
   hbadmatch_stack_1->SetBinContent(18,0.9398301);
   hbadmatch_stack_1->SetBinContent(19,2.541344);
   hbadmatch_stack_1->SetBinContent(20,2.790971);
   hbadmatch_stack_1->SetBinContent(21,1.073786);
   hbadmatch_stack_1->SetBinContent(22,1.805704);
   hbadmatch_stack_1->SetBinContent(23,1.278133);
   hbadmatch_stack_1->SetBinContent(24,4.502147);
   hbadmatch_stack_1->SetBinError(1,0.7977544);
   hbadmatch_stack_1->SetBinError(2,0.7082781);
   hbadmatch_stack_1->SetBinError(3,0.688959);
   hbadmatch_stack_1->SetBinError(4,0.8273206);
   hbadmatch_stack_1->SetBinError(5,0.6630861);
   hbadmatch_stack_1->SetBinError(6,0.6513556);
   hbadmatch_stack_1->SetBinError(7,0.6801976);
   hbadmatch_stack_1->SetBinError(8,1.07625);
   hbadmatch_stack_1->SetBinError(9,2.044448);
   hbadmatch_stack_1->SetBinError(10,0.7022455);
   hbadmatch_stack_1->SetBinError(11,0.6995502);
   hbadmatch_stack_1->SetBinError(12,0.9269167);
   hbadmatch_stack_1->SetBinError(13,1.400313);
   hbadmatch_stack_1->SetBinError(14,0.8723572);
   hbadmatch_stack_1->SetBinError(15,0.955234);
   hbadmatch_stack_1->SetBinError(16,0.6511312);
   hbadmatch_stack_1->SetBinError(17,0.892922);
   hbadmatch_stack_1->SetBinError(18,0.5628094);
   hbadmatch_stack_1->SetBinError(19,1.020469);
   hbadmatch_stack_1->SetBinError(20,0.8339274);
   hbadmatch_stack_1->SetBinError(21,0.5557297);
   hbadmatch_stack_1->SetBinError(22,0.7080169);
   hbadmatch_stack_1->SetBinError(23,0.5300251);
   hbadmatch_stack_1->SetBinError(24,1.19029);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,8.325045);
   hext_stack_2->SetBinContent(2,8.649442);
   hext_stack_2->SetBinContent(3,6.855872);
   hext_stack_2->SetBinContent(4,10.11143);
   hext_stack_2->SetBinContent(5,12.26411);
   hext_stack_2->SetBinContent(6,6.73896);
   hext_stack_2->SetBinContent(7,14.34177);
   hext_stack_2->SetBinContent(8,14.11834);
   hext_stack_2->SetBinContent(9,7.7022);
   hext_stack_2->SetBinContent(10,14.07362);
   hext_stack_2->SetBinContent(11,5.091023);
   hext_stack_2->SetBinContent(12,7.720912);
   hext_stack_2->SetBinContent(13,3.807795);
   hext_stack_2->SetBinContent(14,4.125011);
   hext_stack_2->SetBinContent(15,7.359033);
   hext_stack_2->SetBinContent(16,5.680795);
   hext_stack_2->SetBinContent(17,10.15332);
   hext_stack_2->SetBinContent(18,8.898818);
   hext_stack_2->SetBinContent(19,4.517249);
   hext_stack_2->SetBinContent(20,3.979379);
   hext_stack_2->SetBinContent(21,6.24298);
   hext_stack_2->SetBinContent(22,4.46377);
   hext_stack_2->SetBinContent(23,5.587004);
   hext_stack_2->SetBinContent(24,7.619999);
   hext_stack_2->SetBinError(1,1.988024);
   hext_stack_2->SetBinError(2,2.014317);
   hext_stack_2->SetBinError(3,1.900612);
   hext_stack_2->SetBinError(4,2.144431);
   hext_stack_2->SetBinError(5,2.50622);
   hext_stack_2->SetBinError(6,1.555655);
   hext_stack_2->SetBinError(7,2.77532);
   hext_stack_2->SetBinError(8,2.718451);
   hext_stack_2->SetBinError(9,1.809223);
   hext_stack_2->SetBinError(10,2.850568);
   hext_stack_2->SetBinError(11,1.537002);
   hext_stack_2->SetBinError(12,2.082407);
   hext_stack_2->SetBinError(13,1.24058);
   hext_stack_2->SetBinError(14,1.358482);
   hext_stack_2->SetBinError(15,1.853466);
   hext_stack_2->SetBinError(16,1.542918);
   hext_stack_2->SetBinError(17,2.351501);
   hext_stack_2->SetBinError(18,1.9752);
   hext_stack_2->SetBinError(19,1.553448);
   hext_stack_2->SetBinError(20,1.207483);
   hext_stack_2->SetBinError(21,1.547854);
   hext_stack_2->SetBinError(22,1.244309);
   hext_stack_2->SetBinError(23,1.544858);
   hext_stack_2->SetBinError(24,1.79254);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4819721);
   hdirt_stack_3->SetBinContent(2,0.722366);
   hdirt_stack_3->SetBinContent(3,0.9619534);
   hdirt_stack_3->SetBinContent(4,0.298264);
   hdirt_stack_3->SetBinContent(5,0.2761429);
   hdirt_stack_3->SetBinContent(7,1.09526);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.9467657);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.3681);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.1753185);
   hdirt_stack_3->SetBinContent(17,0.5221469);
   hdirt_stack_3->SetBinContent(18,0.7759784);
   hdirt_stack_3->SetBinContent(19,0.8022601);
   hdirt_stack_3->SetBinContent(22,0.8836629);
   hdirt_stack_3->SetBinContent(23,0.8332258);
   hdirt_stack_3->SetBinContent(24,0.4377912);
   hdirt_stack_3->SetBinError(1,0.3402839);
   hdirt_stack_3->SetBinError(2,0.4354359);
   hdirt_stack_3->SetBinError(3,0.4947604);
   hdirt_stack_3->SetBinError(4,0.2114838);
   hdirt_stack_3->SetBinError(5,0.1952625);
   hdirt_stack_3->SetBinError(7,0.5187246);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.494629);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.9804616);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.1753185);
   hdirt_stack_3->SetBinError(17,0.3070235);
   hdirt_stack_3->SetBinError(18,0.458477);
   hdirt_stack_3->SetBinError(19,0.5034657);
   hdirt_stack_3->SetBinError(22,0.5440046);
   hdirt_stack_3->SetBinError(23,0.4476755);
   hdirt_stack_3->SetBinError(24,0.3095651);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,3.86753);
   houtFV_stack_4->SetBinContent(2,3.621121);
   houtFV_stack_4->SetBinContent(3,4.591603);
   houtFV_stack_4->SetBinContent(4,4.448141);
   houtFV_stack_4->SetBinContent(5,1.318683);
   houtFV_stack_4->SetBinContent(6,5.930907);
   houtFV_stack_4->SetBinContent(7,5.679611);
   houtFV_stack_4->SetBinContent(8,4.9284);
   houtFV_stack_4->SetBinContent(9,4.838313);
   houtFV_stack_4->SetBinContent(10,2.297118);
   houtFV_stack_4->SetBinContent(11,3.095416);
   houtFV_stack_4->SetBinContent(12,4.487705);
   houtFV_stack_4->SetBinContent(13,2.937402);
   houtFV_stack_4->SetBinContent(14,2.890715);
   houtFV_stack_4->SetBinContent(15,2.775906);
   houtFV_stack_4->SetBinContent(16,4.576178);
   houtFV_stack_4->SetBinContent(17,4.698306);
   houtFV_stack_4->SetBinContent(18,3.607921);
   houtFV_stack_4->SetBinContent(19,5.631134);
   houtFV_stack_4->SetBinContent(20,4.690526);
   houtFV_stack_4->SetBinContent(21,2.979234);
   houtFV_stack_4->SetBinContent(22,2.838817);
   houtFV_stack_4->SetBinContent(23,4.823119);
   houtFV_stack_4->SetBinContent(24,3.517817);
   houtFV_stack_4->SetBinError(1,0.8983138);
   houtFV_stack_4->SetBinError(2,0.940987);
   houtFV_stack_4->SetBinError(3,1.09304);
   houtFV_stack_4->SetBinError(4,1.057219);
   houtFV_stack_4->SetBinError(5,0.5542732);
   houtFV_stack_4->SetBinError(6,1.25383);
   houtFV_stack_4->SetBinError(7,1.205947);
   houtFV_stack_4->SetBinError(8,1.144173);
   houtFV_stack_4->SetBinError(9,1.093501);
   houtFV_stack_4->SetBinError(10,0.7485141);
   houtFV_stack_4->SetBinError(11,0.8588627);
   houtFV_stack_4->SetBinError(12,1.057222);
   houtFV_stack_4->SetBinError(13,0.7976362);
   houtFV_stack_4->SetBinError(14,0.7849408);
   houtFV_stack_4->SetBinError(15,0.8731821);
   houtFV_stack_4->SetBinError(16,1.024815);
   houtFV_stack_4->SetBinError(17,1.130058);
   houtFV_stack_4->SetBinError(18,0.9292794);
   houtFV_stack_4->SetBinError(19,1.22485);
   houtFV_stack_4->SetBinError(20,1.113213);
   houtFV_stack_4->SetBinError(21,0.8548804);
   houtFV_stack_4->SetBinError(22,0.8469075);
   houtFV_stack_4->SetBinError(23,1.097092);
   houtFV_stack_4->SetBinError(24,0.9412229);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3477539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1731161);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2032767);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.892472);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.08794);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7934898);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5709538);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.130122);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.158022);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.227608);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7521399);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3223657);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3769979);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2364666);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1902537);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3695249);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3705767);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4228219);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2841855);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,55.9799);
   hNCpi0inFVres_stack_7->SetBinContent(2,61.0654);
   hNCpi0inFVres_stack_7->SetBinContent(3,54.15627);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.2887);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.73463);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.64004);
   hNCpi0inFVres_stack_7->SetBinContent(7,49.67997);
   hNCpi0inFVres_stack_7->SetBinContent(8,49.09621);
   hNCpi0inFVres_stack_7->SetBinContent(9,51.22977);
   hNCpi0inFVres_stack_7->SetBinContent(10,52.11012);
   hNCpi0inFVres_stack_7->SetBinContent(11,57.96033);
   hNCpi0inFVres_stack_7->SetBinContent(12,58.72044);
   hNCpi0inFVres_stack_7->SetBinContent(13,56.93014);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.3955);
   hNCpi0inFVres_stack_7->SetBinContent(15,58.90247);
   hNCpi0inFVres_stack_7->SetBinContent(16,53.89421);
   hNCpi0inFVres_stack_7->SetBinContent(17,54.89796);
   hNCpi0inFVres_stack_7->SetBinContent(18,51.79175);
   hNCpi0inFVres_stack_7->SetBinContent(19,47.2827);
   hNCpi0inFVres_stack_7->SetBinContent(20,53.57173);
   hNCpi0inFVres_stack_7->SetBinContent(21,59.05376);
   hNCpi0inFVres_stack_7->SetBinContent(22,56.03788);
   hNCpi0inFVres_stack_7->SetBinContent(23,57.36546);
   hNCpi0inFVres_stack_7->SetBinContent(24,61.53588);
   hNCpi0inFVres_stack_7->SetBinError(1,2.403392);
   hNCpi0inFVres_stack_7->SetBinError(2,2.621346);
   hNCpi0inFVres_stack_7->SetBinError(3,2.384084);
   hNCpi0inFVres_stack_7->SetBinError(4,2.317429);
   hNCpi0inFVres_stack_7->SetBinError(5,2.421315);
   hNCpi0inFVres_stack_7->SetBinError(6,2.356635);
   hNCpi0inFVres_stack_7->SetBinError(7,2.319625);
   hNCpi0inFVres_stack_7->SetBinError(8,2.251119);
   hNCpi0inFVres_stack_7->SetBinError(9,2.369318);
   hNCpi0inFVres_stack_7->SetBinError(10,2.390863);
   hNCpi0inFVres_stack_7->SetBinError(11,2.512249);
   hNCpi0inFVres_stack_7->SetBinError(12,2.524831);
   hNCpi0inFVres_stack_7->SetBinError(13,2.486601);
   hNCpi0inFVres_stack_7->SetBinError(14,2.401191);
   hNCpi0inFVres_stack_7->SetBinError(15,2.565762);
   hNCpi0inFVres_stack_7->SetBinError(16,2.400057);
   hNCpi0inFVres_stack_7->SetBinError(17,2.438507);
   hNCpi0inFVres_stack_7->SetBinError(18,2.355479);
   hNCpi0inFVres_stack_7->SetBinError(19,2.17437);
   hNCpi0inFVres_stack_7->SetBinError(20,2.412245);
   hNCpi0inFVres_stack_7->SetBinError(21,2.553991);
   hNCpi0inFVres_stack_7->SetBinError(22,2.461541);
   hNCpi0inFVres_stack_7->SetBinError(23,2.488667);
   hNCpi0inFVres_stack_7->SetBinError(24,2.640778);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.14899);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.034815);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.45617);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.759312);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.0174);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.242405);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.421423);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.59922);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.21791);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.69862);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.75051);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.052594);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.9822);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.13804);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.55521);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.10723);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.087614);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.5122);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.23278);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.954187);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.44061);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.521901);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.47085);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.394691);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9981892);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9444619);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.283159);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9970195);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.129099);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9651829);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9161517);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.088199);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.025342);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.158085);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.060148);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9977348);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.246697);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.039136);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.057575);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.054011);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8587722);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.051084);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9939892);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9719471);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9794265);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9450453);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.062837);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9609056);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3909362);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2764336);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,21.04722);
   hCCpi0inFV_stack_10->SetBinContent(2,17.11885);
   hCCpi0inFV_stack_10->SetBinContent(3,15.82237);
   hCCpi0inFV_stack_10->SetBinContent(4,16.94356);
   hCCpi0inFV_stack_10->SetBinContent(5,13.92274);
   hCCpi0inFV_stack_10->SetBinContent(6,10.02893);
   hCCpi0inFV_stack_10->SetBinContent(7,14.32293);
   hCCpi0inFV_stack_10->SetBinContent(8,12.78165);
   hCCpi0inFV_stack_10->SetBinContent(9,12.79849);
   hCCpi0inFV_stack_10->SetBinContent(10,19.68913);
   hCCpi0inFV_stack_10->SetBinContent(11,19.2857);
   hCCpi0inFV_stack_10->SetBinContent(12,19.14551);
   hCCpi0inFV_stack_10->SetBinContent(13,18.66118);
   hCCpi0inFV_stack_10->SetBinContent(14,14.52487);
   hCCpi0inFV_stack_10->SetBinContent(15,15.95666);
   hCCpi0inFV_stack_10->SetBinContent(16,14.10026);
   hCCpi0inFV_stack_10->SetBinContent(17,16.96358);
   hCCpi0inFV_stack_10->SetBinContent(18,12.52061);
   hCCpi0inFV_stack_10->SetBinContent(19,19.19346);
   hCCpi0inFV_stack_10->SetBinContent(20,14.64698);
   hCCpi0inFV_stack_10->SetBinContent(21,16.3678);
   hCCpi0inFV_stack_10->SetBinContent(22,12.33261);
   hCCpi0inFV_stack_10->SetBinContent(23,18.50155);
   hCCpi0inFV_stack_10->SetBinContent(24,17.10786);
   hCCpi0inFV_stack_10->SetBinError(1,2.283058);
   hCCpi0inFV_stack_10->SetBinError(2,2.074649);
   hCCpi0inFV_stack_10->SetBinError(3,2.01);
   hCCpi0inFV_stack_10->SetBinError(4,2.100545);
   hCCpi0inFV_stack_10->SetBinError(5,1.861341);
   hCCpi0inFV_stack_10->SetBinError(6,1.678815);
   hCCpi0inFV_stack_10->SetBinError(7,1.88272);
   hCCpi0inFV_stack_10->SetBinError(8,1.787856);
   hCCpi0inFV_stack_10->SetBinError(9,1.690694);
   hCCpi0inFV_stack_10->SetBinError(10,2.272985);
   hCCpi0inFV_stack_10->SetBinError(11,2.30246);
   hCCpi0inFV_stack_10->SetBinError(12,2.143607);
   hCCpi0inFV_stack_10->SetBinError(13,2.17662);
   hCCpi0inFV_stack_10->SetBinError(14,1.896251);
   hCCpi0inFV_stack_10->SetBinError(15,1.990787);
   hCCpi0inFV_stack_10->SetBinError(16,1.848978);
   hCCpi0inFV_stack_10->SetBinError(17,2.108494);
   hCCpi0inFV_stack_10->SetBinError(18,1.744899);
   hCCpi0inFV_stack_10->SetBinError(19,2.180005);
   hCCpi0inFV_stack_10->SetBinError(20,1.927454);
   hCCpi0inFV_stack_10->SetBinError(21,2.078804);
   hCCpi0inFV_stack_10->SetBinError(22,1.791293);
   hCCpi0inFV_stack_10->SetBinError(23,2.092535);
   hCCpi0inFV_stack_10->SetBinError(24,2.073349);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.1273);
   hNCinFV_stack_11->SetBinContent(2,10.02271);
   hNCinFV_stack_11->SetBinContent(3,12.41241);
   hNCinFV_stack_11->SetBinContent(4,9.982985);
   hNCinFV_stack_11->SetBinContent(5,7.570837);
   hNCinFV_stack_11->SetBinContent(6,8.75282);
   hNCinFV_stack_11->SetBinContent(7,11.08081);
   hNCinFV_stack_11->SetBinContent(8,8.409262);
   hNCinFV_stack_11->SetBinContent(9,8.793158);
   hNCinFV_stack_11->SetBinContent(10,9.568185);
   hNCinFV_stack_11->SetBinContent(11,11.08358);
   hNCinFV_stack_11->SetBinContent(12,9.810308);
   hNCinFV_stack_11->SetBinContent(13,10.44526);
   hNCinFV_stack_11->SetBinContent(14,11.44682);
   hNCinFV_stack_11->SetBinContent(15,10.31302);
   hNCinFV_stack_11->SetBinContent(16,10.21327);
   hNCinFV_stack_11->SetBinContent(17,10.70875);
   hNCinFV_stack_11->SetBinContent(18,9.809701);
   hNCinFV_stack_11->SetBinContent(19,11.28537);
   hNCinFV_stack_11->SetBinContent(20,9.429794);
   hNCinFV_stack_11->SetBinContent(21,9.133335);
   hNCinFV_stack_11->SetBinContent(22,10.54669);
   hNCinFV_stack_11->SetBinContent(23,10.16787);
   hNCinFV_stack_11->SetBinContent(24,8.557796);
   hNCinFV_stack_11->SetBinError(1,1.722149);
   hNCinFV_stack_11->SetBinError(2,1.518982);
   hNCinFV_stack_11->SetBinError(3,1.76654);
   hNCinFV_stack_11->SetBinError(4,1.533274);
   hNCinFV_stack_11->SetBinError(5,1.387644);
   hNCinFV_stack_11->SetBinError(6,1.46915);
   hNCinFV_stack_11->SetBinError(7,1.734005);
   hNCinFV_stack_11->SetBinError(8,1.42876);
   hNCinFV_stack_11->SetBinError(9,1.520987);
   hNCinFV_stack_11->SetBinError(10,1.569572);
   hNCinFV_stack_11->SetBinError(11,1.676148);
   hNCinFV_stack_11->SetBinError(12,1.630718);
   hNCinFV_stack_11->SetBinError(13,1.653388);
   hNCinFV_stack_11->SetBinError(14,1.654036);
   hNCinFV_stack_11->SetBinError(15,1.569292);
   hNCinFV_stack_11->SetBinError(16,1.594359);
   hNCinFV_stack_11->SetBinError(17,1.655102);
   hNCinFV_stack_11->SetBinError(18,1.568634);
   hNCinFV_stack_11->SetBinError(19,1.68824);
   hNCinFV_stack_11->SetBinError(20,1.545483);
   hNCinFV_stack_11->SetBinError(21,1.558565);
   hNCinFV_stack_11->SetBinError(22,1.629433);
   hNCinFV_stack_11->SetBinError(23,1.544342);
   hNCinFV_stack_11->SetBinError(24,1.456148);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,13.72465);
   hnumuCCinFV_stack_12->SetBinContent(2,11.07722);
   hnumuCCinFV_stack_12->SetBinContent(3,7.871263);
   hnumuCCinFV_stack_12->SetBinContent(4,12.33889);
   hnumuCCinFV_stack_12->SetBinContent(5,9.744865);
   hnumuCCinFV_stack_12->SetBinContent(6,8.369762);
   hnumuCCinFV_stack_12->SetBinContent(7,10.11265);
   hnumuCCinFV_stack_12->SetBinContent(8,8.517132);
   hnumuCCinFV_stack_12->SetBinContent(9,9.198372);
   hnumuCCinFV_stack_12->SetBinContent(10,6.603881);
   hnumuCCinFV_stack_12->SetBinContent(11,8.701412);
   hnumuCCinFV_stack_12->SetBinContent(12,10.28488);
   hnumuCCinFV_stack_12->SetBinContent(13,16.86041);
   hnumuCCinFV_stack_12->SetBinContent(14,11.4957);
   hnumuCCinFV_stack_12->SetBinContent(15,10.36394);
   hnumuCCinFV_stack_12->SetBinContent(16,14.20511);
   hnumuCCinFV_stack_12->SetBinContent(17,12.32488);
   hnumuCCinFV_stack_12->SetBinContent(18,14.3575);
   hnumuCCinFV_stack_12->SetBinContent(19,17.4718);
   hnumuCCinFV_stack_12->SetBinContent(20,13.35094);
   hnumuCCinFV_stack_12->SetBinContent(21,10.21752);
   hnumuCCinFV_stack_12->SetBinContent(22,7.696895);
   hnumuCCinFV_stack_12->SetBinContent(23,8.574284);
   hnumuCCinFV_stack_12->SetBinContent(24,16.92265);
   hnumuCCinFV_stack_12->SetBinError(1,1.987805);
   hnumuCCinFV_stack_12->SetBinError(2,1.84613);
   hnumuCCinFV_stack_12->SetBinError(3,1.384038);
   hnumuCCinFV_stack_12->SetBinError(4,2.087886);
   hnumuCCinFV_stack_12->SetBinError(5,1.916797);
   hnumuCCinFV_stack_12->SetBinError(6,1.575923);
   hnumuCCinFV_stack_12->SetBinError(7,1.619416);
   hnumuCCinFV_stack_12->SetBinError(8,1.49223);
   hnumuCCinFV_stack_12->SetBinError(9,1.970841);
   hnumuCCinFV_stack_12->SetBinError(10,1.369799);
   hnumuCCinFV_stack_12->SetBinError(11,1.631987);
   hnumuCCinFV_stack_12->SetBinError(12,1.73329);
   hnumuCCinFV_stack_12->SetBinError(13,2.581957);
   hnumuCCinFV_stack_12->SetBinError(14,1.855831);
   hnumuCCinFV_stack_12->SetBinError(15,1.773123);
   hnumuCCinFV_stack_12->SetBinError(16,2.026859);
   hnumuCCinFV_stack_12->SetBinError(17,2.028515);
   hnumuCCinFV_stack_12->SetBinError(18,2.319347);
   hnumuCCinFV_stack_12->SetBinError(19,3.048623);
   hnumuCCinFV_stack_12->SetBinError(20,3.056915);
   hnumuCCinFV_stack_12->SetBinError(21,1.641653);
   hnumuCCinFV_stack_12->SetBinError(22,1.372777);
   hnumuCCinFV_stack_12->SetBinError(23,1.46798);
   hnumuCCinFV_stack_12->SetBinError(24,2.442871);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.524454);
   hnueCCinFV_stack_13->SetBinContent(2,0.6989822);
   hnueCCinFV_stack_13->SetBinContent(3,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(4,1.404358);
   hnueCCinFV_stack_13->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_13->SetBinContent(6,0.443741);
   hnueCCinFV_stack_13->SetBinContent(7,0.9696276);
   hnueCCinFV_stack_13->SetBinContent(8,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(9,0.9218988);
   hnueCCinFV_stack_13->SetBinContent(11,0.44716);
   hnueCCinFV_stack_13->SetBinContent(13,0.7382848);
   hnueCCinFV_stack_13->SetBinContent(16,0.8057001);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.5509281);
   hnueCCinFV_stack_13->SetBinContent(20,0.3198269);
   hnueCCinFV_stack_13->SetBinContent(21,0.4317974);
   hnueCCinFV_stack_13->SetBinContent(22,0.7129139);
   hnueCCinFV_stack_13->SetBinContent(23,1.063963);
   hnueCCinFV_stack_13->SetBinContent(24,0.5871329);
   hnueCCinFV_stack_13->SetBinError(1,0.6420466);
   hnueCCinFV_stack_13->SetBinError(2,0.4059236);
   hnueCCinFV_stack_13->SetBinError(3,0.4394482);
   hnueCCinFV_stack_13->SetBinError(4,0.6484658);
   hnueCCinFV_stack_13->SetBinError(5,0.3731328);
   hnueCCinFV_stack_13->SetBinError(6,0.3157825);
   hnueCCinFV_stack_13->SetBinError(7,0.5064878);
   hnueCCinFV_stack_13->SetBinError(8,0.5946997);
   hnueCCinFV_stack_13->SetBinError(9,0.5507173);
   hnueCCinFV_stack_13->SetBinError(11,0.3184642);
   hnueCCinFV_stack_13->SetBinError(13,0.4415857);
   hnueCCinFV_stack_13->SetBinError(16,0.4980907);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.4001707);
   hnueCCinFV_stack_13->SetBinError(20,0.3198269);
   hnueCCinFV_stack_13->SetBinError(21,0.3067506);
   hnueCCinFV_stack_13->SetBinError(22,0.4131976);
   hnueCCinFV_stack_13->SetBinError(23,0.6153021);
   hnueCCinFV_stack_13->SetBinError(24,0.338772);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__20->SetBinContent(1,129.0254);
   hmcerror__20->SetBinContent(2,125.2653);
   hmcerror__20->SetBinContent(3,119.8773);
   hmcerror__20->SetBinContent(4,119.5997);
   hmcerror__20->SetBinContent(5,111.3464);
   hmcerror__20->SetBinContent(6,104.9391);
   hmcerror__20->SetBinContent(7,119.3416);
   hmcerror__20->SetBinContent(8,114.2648);
   hmcerror__20->SetBinContent(9,109.5676);
   hmcerror__20->SetBinContent(10,118.5513);
   hmcerror__20->SetBinContent(11,119.4585);
   hmcerror__20->SetBinContent(12,124.6788);
   hmcerror__20->SetBinContent(13,128.7673);
   hmcerror__20->SetBinContent(14,114.0936);
   hmcerror__20->SetBinContent(15,121.1358);
   hmcerror__20->SetBinContent(16,117.4781);
   hmcerror__20->SetBinContent(17,123.1054);
   hmcerror__20->SetBinContent(18,114.177);
   hmcerror__20->SetBinContent(19,119.261);
   hmcerror__20->SetBinContent(20,113.5285);
   hmcerror__20->SetBinContent(21,116.6234);
   hmcerror__20->SetBinContent(22,108.0683);
   hmcerror__20->SetBinContent(23,119.2515);
   hmcerror__20->SetBinContent(24,131.243);
   hmcerror__20->SetBinError(1,47.10879);
   hmcerror__20->SetBinError(2,47.28594);
   hmcerror__20->SetBinError(3,46.22703);
   hmcerror__20->SetBinError(4,41.83172);
   hmcerror__20->SetBinError(5,42.09706);
   hmcerror__20->SetBinError(6,43.93424);
   hmcerror__20->SetBinError(7,41.24972);
   hmcerror__20->SetBinError(8,39.58361);
   hmcerror__20->SetBinError(9,42.23811);
   hmcerror__20->SetBinError(10,47.62558);
   hmcerror__20->SetBinError(11,44.45011);
   hmcerror__20->SetBinError(12,51.13775);
   hmcerror__20->SetBinError(13,47.25321);
   hmcerror__20->SetBinError(14,44.06362);
   hmcerror__20->SetBinError(15,50.62197);
   hmcerror__20->SetBinError(16,44.06708);
   hmcerror__20->SetBinError(17,53.08591);
   hmcerror__20->SetBinError(18,42.83592);
   hmcerror__20->SetBinError(19,42.40567);
   hmcerror__20->SetBinError(20,42.51751);
   hmcerror__20->SetBinError(21,46.88901);
   hmcerror__20->SetBinError(22,41.96222);
   hmcerror__20->SetBinError(23,44.05616);
   hmcerror__20->SetBinError(24,57.38524);
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
   93,
   96,
   88,
   90,
   77,
   85,
   85,
   68,
   76,
   97,
   93,
   92,
   97,
   84,
   90,
   71,
   80,
   77,
   77,
   77,
   76,
   102,
   85,
   80};
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
   9.7658,
   9.9196,
   9.5036,
   9.6093,
   8.8995,
   9.3428,
   9.3428,
   8.3726,
   8.8425,
   9.9704,
   9.7658,
   9.7138,
   9.9704,
   9.2886,
   9.6093,
   8.5518,
   9.0683,
   8.8995,
   8.8995,
   8.8995,
   8.8425,
   10.0995,
   9.3428,
   9.0683};
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
   9.564,
   9.718,
   9.3021,
   9.4079,
   8.6976,
   9.1411,
   9.1411,
   8.1701,
   8.6406,
   9.769,
   9.564,
   9.513,
   9.769,
   9.0869,
   9.4079,
   8.3496,
   8.8665,
   8.6976,
   8.6976,
   8.6976,
   8.6406,
   10.0995,
   9.1411,
   8.8665};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(54.38019);
   Graph_Graph3025->SetMaximum(117.3467);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/24","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all");
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
   0.3651126,
   0.3774863,
   0.3856196,
   0.3497644,
   0.3780729,
   0.4186642,
   0.3456443,
   0.3464199,
   0.3854982,
   0.4017298,
   0.3720967,
   0.410156,
   0.366966,
   0.3862059,
   0.4178943,
   0.3751091,
   0.4312233,
   0.3751711,
   0.3555703,
   0.3745096,
   0.402055,
   0.3882936,
   0.369439,
   0.4372443};
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
   0.3651126,
   0.3774863,
   0.3856196,
   0.3497644,
   0.3780729,
   0.4186642,
   0.3456443,
   0.3464199,
   0.3854982,
   0.4017298,
   0.3720967,
   0.410156,
   0.366966,
   0.3862059,
   0.4178943,
   0.3751091,
   0.4312233,
   0.3751711,
   0.3555703,
   0.3745096,
   0.402055,
   0.3882936,
   0.369439,
   0.4372443};
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
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.3346717,
   0.3332769,
   0.3501238,
   0.3084859,
   0.3220793,
   0.3507736,
   0.3154805,
   0.3238885,
   0.3473074,
   0.3318345,
   0.3465844,
   0.3473379,
   0.327789,
   0.3325598,
   0.3385399,
   0.3419141,
   0.317668,
   0.3197511,
   0.3199378,
   0.3387745,
   0.3575309,
   0.3490928,
   0.3341956,
   0.3336162};
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
   0.3346717,
   0.3332769,
   0.3501238,
   0.3084859,
   0.3220793,
   0.3507736,
   0.3154805,
   0.3238885,
   0.3473074,
   0.3318345,
   0.3465844,
   0.3473379,
   0.327789,
   0.3325598,
   0.3385399,
   0.3419141,
   0.317668,
   0.3197511,
   0.3199378,
   0.3387745,
   0.3575309,
   0.3490928,
   0.3341956,
   0.3336162};
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
   0.7207884,
   0.7663735,
   0.734084,
   0.7525101,
   0.6915355,
   0.8099937,
   0.7122414,
   0.5951088,
   0.6936357,
   0.8182113,
   0.7785131,
   0.7378962,
   0.7532971,
   0.7362378,
   0.7429678,
   0.6043682,
   0.6498498,
   0.6743914,
   0.6456427,
   0.6782438,
   0.6516704,
   0.9438478,
   0.7127791,
   0.6095565};
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
   0.07568899,
   0.07918874,
   0.07927774,
   0.0803455,
   0.07992624,
   0.0890307,
   0.07828623,
   0.07327364,
   0.0807036,
   0.084102,
   0.08175057,
   0.07791061,
   0.07742962,
   0.08141212,
   0.07932667,
   0.07279488,
   0.07366291,
   0.07794476,
   0.07462205,
   0.07839001,
   0.07582099,
   0.09345486,
   0.07834533,
   0.06909551};
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
   0.07412495,
   0.07757935,
   0.07759685,
   0.07866155,
   0.07811298,
   0.08710863,
   0.07659612,
   0.07150144,
   0.07886091,
   0.08240316,
   0.08006128,
   0.07630007,
   0.07586556,
   0.07964427,
   0.07766407,
   0.0710737,
   0.07202366,
   0.07617645,
   0.07292912,
   0.0766116,
   0.07408978,
   0.09345486,
   0.07665395,
   0.06755791};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.4702884);
   Graph_Graph3028->SetMaximum(1.088849);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
