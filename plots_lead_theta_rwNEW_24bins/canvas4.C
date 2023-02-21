#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 12:48:27 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-8.16,3.553846,902.3242);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__10->SetBinContent(1,102.1556);
   hmc__10->SetBinContent(2,251.8076);
   hmc__10->SetBinContent(3,368.3115);
   hmc__10->SetBinContent(4,393.2137);
   hmc__10->SetBinContent(5,383.414);
   hmc__10->SetBinContent(6,362.7571);
   hmc__10->SetBinContent(7,312.4896);
   hmc__10->SetBinContent(8,282.4212);
   hmc__10->SetBinContent(9,221.442);
   hmc__10->SetBinContent(10,191.7411);
   hmc__10->SetBinContent(11,147.5014);
   hmc__10->SetBinContent(12,126.9947);
   hmc__10->SetBinContent(13,101.3485);
   hmc__10->SetBinContent(14,87.24926);
   hmc__10->SetBinContent(15,87.16139);
   hmc__10->SetBinContent(16,87.9313);
   hmc__10->SetBinContent(17,72.11535);
   hmc__10->SetBinContent(18,72.09782);
   hmc__10->SetBinContent(19,65.7562);
   hmc__10->SetBinContent(20,60.95712);
   hmc__10->SetBinContent(21,49.34975);
   hmc__10->SetBinContent(22,46.37313);
   hmc__10->SetBinContent(23,26.18786);
   hmc__10->SetBinContent(24,9.327639);
   hmc__10->SetBinError(1,37.84744);
   hmc__10->SetBinError(2,67.63507);
   hmc__10->SetBinError(3,90.66116);
   hmc__10->SetBinError(4,97.38695);
   hmc__10->SetBinError(5,86.25595);
   hmc__10->SetBinError(6,90.28032);
   hmc__10->SetBinError(7,76.58682);
   hmc__10->SetBinError(8,72.96378);
   hmc__10->SetBinError(9,58.06364);
   hmc__10->SetBinError(10,48.21825);
   hmc__10->SetBinError(11,39.10111);
   hmc__10->SetBinError(12,40.22099);
   hmc__10->SetBinError(13,32.96082);
   hmc__10->SetBinError(14,24.47037);
   hmc__10->SetBinError(15,25.005);
   hmc__10->SetBinError(16,23.1416);
   hmc__10->SetBinError(17,22.47014);
   hmc__10->SetBinError(18,21.36275);
   hmc__10->SetBinError(19,22.70363);
   hmc__10->SetBinError(20,26.25797);
   hmc__10->SetBinError(21,18.15593);
   hmc__10->SetBinError(22,19.36757);
   hmc__10->SetBinError(23,12.61425);
   hmc__10->SetBinError(24,7.456812);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-8.16);
   hmc__10->SetMaximum(856.8);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,3.15);
   hs4_stack_4->SetMinimum(-8.530416e-09);
   hs4_stack_4->SetMaximum(412.8744);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.044861);
   hbadmatch_stack_1->SetBinContent(2,6.401152);
   hbadmatch_stack_1->SetBinContent(3,6.365573);
   hbadmatch_stack_1->SetBinContent(4,7.608239);
   hbadmatch_stack_1->SetBinContent(5,7.664806);
   hbadmatch_stack_1->SetBinContent(6,6.612877);
   hbadmatch_stack_1->SetBinContent(7,6.55711);
   hbadmatch_stack_1->SetBinContent(8,7.822021);
   hbadmatch_stack_1->SetBinContent(9,6.350454);
   hbadmatch_stack_1->SetBinContent(10,4.363191);
   hbadmatch_stack_1->SetBinContent(11,5.860073);
   hbadmatch_stack_1->SetBinContent(12,2.247316);
   hbadmatch_stack_1->SetBinContent(13,4.369142);
   hbadmatch_stack_1->SetBinContent(14,3.40926);
   hbadmatch_stack_1->SetBinContent(15,3.759362);
   hbadmatch_stack_1->SetBinContent(16,3.330683);
   hbadmatch_stack_1->SetBinContent(17,2.278668);
   hbadmatch_stack_1->SetBinContent(18,1.511054);
   hbadmatch_stack_1->SetBinContent(19,1.807394);
   hbadmatch_stack_1->SetBinContent(20,0.5884556);
   hbadmatch_stack_1->SetBinContent(21,1.91221);
   hbadmatch_stack_1->SetBinContent(22,3.005481);
   hbadmatch_stack_1->SetBinContent(23,2.083977);
   hbadmatch_stack_1->SetBinError(1,1.136548);
   hbadmatch_stack_1->SetBinError(2,1.642648);
   hbadmatch_stack_1->SetBinError(3,1.336103);
   hbadmatch_stack_1->SetBinError(4,1.393587);
   hbadmatch_stack_1->SetBinError(5,1.414941);
   hbadmatch_stack_1->SetBinError(6,1.347251);
   hbadmatch_stack_1->SetBinError(7,1.405504);
   hbadmatch_stack_1->SetBinError(8,1.482272);
   hbadmatch_stack_1->SetBinError(9,1.294343);
   hbadmatch_stack_1->SetBinError(10,1.105371);
   hbadmatch_stack_1->SetBinError(11,1.395323);
   hbadmatch_stack_1->SetBinError(12,0.7337357);
   hbadmatch_stack_1->SetBinError(13,1.87944);
   hbadmatch_stack_1->SetBinError(14,0.9726081);
   hbadmatch_stack_1->SetBinError(15,1.023161);
   hbadmatch_stack_1->SetBinError(16,0.9546464);
   hbadmatch_stack_1->SetBinError(17,0.7938832);
   hbadmatch_stack_1->SetBinError(18,0.6367088);
   hbadmatch_stack_1->SetBinError(19,0.7084844);
   hbadmatch_stack_1->SetBinError(20,0.3397478);
   hbadmatch_stack_1->SetBinError(21,0.6516395);
   hbadmatch_stack_1->SetBinError(22,1.753731);
   hbadmatch_stack_1->SetBinError(23,0.8295815);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,3.793434);
   hext_stack_2->SetBinContent(2,11.11058);
   hext_stack_2->SetBinContent(3,29.30045);
   hext_stack_2->SetBinContent(4,25.56327);
   hext_stack_2->SetBinContent(5,32.60949);
   hext_stack_2->SetBinContent(6,45.73152);
   hext_stack_2->SetBinContent(7,37.20894);
   hext_stack_2->SetBinContent(8,37.08485);
   hext_stack_2->SetBinContent(9,35.66034);
   hext_stack_2->SetBinContent(10,44.30701);
   hext_stack_2->SetBinContent(11,28.2191);
   hext_stack_2->SetBinContent(12,25.88766);
   hext_stack_2->SetBinContent(13,15.32497);
   hext_stack_2->SetBinContent(14,18.0227);
   hext_stack_2->SetBinContent(15,14.41521);
   hext_stack_2->SetBinContent(16,20.55162);
   hext_stack_2->SetBinContent(17,11.93095);
   hext_stack_2->SetBinContent(18,11.7047);
   hext_stack_2->SetBinContent(19,8.313456);
   hext_stack_2->SetBinContent(20,8.489448);
   hext_stack_2->SetBinContent(21,3.248382);
   hext_stack_2->SetBinContent(22,5.393879);
   hext_stack_2->SetBinContent(23,2.841783);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinError(1,1.393356);
   hext_stack_2->SetBinError(2,2.108507);
   hext_stack_2->SetBinError(3,3.579994);
   hext_stack_2->SetBinError(4,3.376905);
   hext_stack_2->SetBinError(5,3.829818);
   hext_stack_2->SetBinError(6,4.532497);
   hext_stack_2->SetBinError(7,4.140145);
   hext_stack_2->SetBinError(8,4.018673);
   hext_stack_2->SetBinError(9,4.050244);
   hext_stack_2->SetBinError(10,4.560512);
   hext_stack_2->SetBinError(11,3.592917);
   hext_stack_2->SetBinError(12,3.392451);
   hext_stack_2->SetBinError(13,2.479952);
   hext_stack_2->SetBinError(14,2.930307);
   hext_stack_2->SetBinError(15,2.482304);
   hext_stack_2->SetBinError(16,3.281453);
   hext_stack_2->SetBinError(17,2.138983);
   hext_stack_2->SetBinError(18,2.435068);
   hext_stack_2->SetBinError(19,2.004574);
   hext_stack_2->SetBinError(20,2.018023);
   hext_stack_2->SetBinError(21,1.089706);
   hext_stack_2->SetBinError(22,1.752488);
   hext_stack_2->SetBinError(23,1.011007);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.4532775);
   hdirt_stack_3->SetBinContent(2,1.850057);
   hdirt_stack_3->SetBinContent(3,3.612496);
   hdirt_stack_3->SetBinContent(4,5.613598);
   hdirt_stack_3->SetBinContent(5,3.502562);
   hdirt_stack_3->SetBinContent(6,5.112639);
   hdirt_stack_3->SetBinContent(7,6.473269);
   hdirt_stack_3->SetBinContent(8,3.385408);
   hdirt_stack_3->SetBinContent(9,4.678835);
   hdirt_stack_3->SetBinContent(10,2.813823);
   hdirt_stack_3->SetBinContent(11,1.503039);
   hdirt_stack_3->SetBinContent(12,1.547598);
   hdirt_stack_3->SetBinContent(13,1.179335);
   hdirt_stack_3->SetBinContent(14,2.166967);
   hdirt_stack_3->SetBinContent(15,1.849339);
   hdirt_stack_3->SetBinContent(16,1.573526);
   hdirt_stack_3->SetBinContent(17,1.809474);
   hdirt_stack_3->SetBinContent(18,2.516591);
   hdirt_stack_3->SetBinContent(19,1.660239);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.8987204);
   hdirt_stack_3->SetBinContent(22,0.9857053);
   hdirt_stack_3->SetBinContent(23,0.8332258);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(1,0.3572343);
   hdirt_stack_3->SetBinError(2,0.6829576);
   hdirt_stack_3->SetBinError(3,1.004336);
   hdirt_stack_3->SetBinError(4,1.376244);
   hdirt_stack_3->SetBinError(5,0.8755631);
   hdirt_stack_3->SetBinError(6,1.192145);
   hdirt_stack_3->SetBinError(7,1.662943);
   hdirt_stack_3->SetBinError(8,0.8785616);
   hdirt_stack_3->SetBinError(9,1.116168);
   hdirt_stack_3->SetBinError(10,0.8100939);
   hdirt_stack_3->SetBinError(11,0.7057435);
   hdirt_stack_3->SetBinError(12,0.6091969);
   hdirt_stack_3->SetBinError(13,0.6106535);
   hdirt_stack_3->SetBinError(14,0.7990344);
   hdirt_stack_3->SetBinError(15,0.6725244);
   hdirt_stack_3->SetBinError(16,0.6633886);
   hdirt_stack_3->SetBinError(17,0.6896495);
   hdirt_stack_3->SetBinError(18,0.8505187);
   hdirt_stack_3->SetBinError(19,1.033983);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.4906494);
   hdirt_stack_3->SetBinError(22,0.4729306);
   hdirt_stack_3->SetBinError(23,0.4476755);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,7.915155);
   houtFV_stack_4->SetBinContent(2,21.98271);
   houtFV_stack_4->SetBinContent(3,38.34548);
   houtFV_stack_4->SetBinContent(4,43.57773);
   houtFV_stack_4->SetBinContent(5,43.44947);
   houtFV_stack_4->SetBinContent(6,50.56119);
   houtFV_stack_4->SetBinContent(7,42.3358);
   houtFV_stack_4->SetBinContent(8,40.77978);
   houtFV_stack_4->SetBinContent(9,28.38338);
   houtFV_stack_4->SetBinContent(10,24.67829);
   houtFV_stack_4->SetBinContent(11,21.61667);
   houtFV_stack_4->SetBinContent(12,19.58112);
   houtFV_stack_4->SetBinContent(13,12.68749);
   houtFV_stack_4->SetBinContent(14,12.05493);
   houtFV_stack_4->SetBinContent(15,13.96819);
   houtFV_stack_4->SetBinContent(16,14.99145);
   houtFV_stack_4->SetBinContent(17,13.55644);
   houtFV_stack_4->SetBinContent(18,10.9932);
   houtFV_stack_4->SetBinContent(19,10.87128);
   houtFV_stack_4->SetBinContent(20,12.41678);
   houtFV_stack_4->SetBinContent(21,10.65913);
   houtFV_stack_4->SetBinContent(22,6.596859);
   houtFV_stack_4->SetBinContent(23,2.250697);
   houtFV_stack_4->SetBinContent(24,1.610679);
   houtFV_stack_4->SetBinError(1,1.384647);
   houtFV_stack_4->SetBinError(2,2.397054);
   houtFV_stack_4->SetBinError(3,3.115435);
   houtFV_stack_4->SetBinError(4,3.333571);
   houtFV_stack_4->SetBinError(5,3.269946);
   houtFV_stack_4->SetBinError(6,3.631127);
   houtFV_stack_4->SetBinError(7,3.273037);
   houtFV_stack_4->SetBinError(8,3.344344);
   houtFV_stack_4->SetBinError(9,2.609361);
   houtFV_stack_4->SetBinError(10,2.509737);
   houtFV_stack_4->SetBinError(11,2.291682);
   houtFV_stack_4->SetBinError(12,2.26642);
   houtFV_stack_4->SetBinError(13,1.771466);
   houtFV_stack_4->SetBinError(14,1.691095);
   houtFV_stack_4->SetBinError(15,1.88893);
   houtFV_stack_4->SetBinError(16,2.248293);
   houtFV_stack_4->SetBinError(17,1.899193);
   houtFV_stack_4->SetBinError(18,1.6181);
   houtFV_stack_4->SetBinError(19,1.557908);
   houtFV_stack_4->SetBinError(20,1.687527);
   houtFV_stack_4->SetBinError(21,1.750829);
   houtFV_stack_4->SetBinError(22,1.263937);
   houtFV_stack_4->SetBinError(23,0.7346377);
   houtFV_stack_4->SetBinError(24,0.6806271);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.326937);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,19.11589);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,21.86406);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,16.33153);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.42982);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.594058);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.504879);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.854194);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.714862);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9746759);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7662537);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.702245);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.906754);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9763091);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.42478);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.570985);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.328611);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.037042);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.83987);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7612735);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4286872);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4611286);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.316988);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2040719);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5074733);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3123499);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.701244);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.17064);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4533256);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3040354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1994106);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,29.69835);
   hNCpi0inFVres_stack_7->SetBinContent(2,77.5628);
   hNCpi0inFVres_stack_7->SetBinContent(3,115.3866);
   hNCpi0inFVres_stack_7->SetBinContent(4,133.269);
   hNCpi0inFVres_stack_7->SetBinContent(5,142.6314);
   hNCpi0inFVres_stack_7->SetBinContent(6,128.65);
   hNCpi0inFVres_stack_7->SetBinContent(7,109.7972);
   hNCpi0inFVres_stack_7->SetBinContent(8,103.3389);
   hNCpi0inFVres_stack_7->SetBinContent(9,72.04704);
   hNCpi0inFVres_stack_7->SetBinContent(10,61.78014);
   hNCpi0inFVres_stack_7->SetBinContent(11,48.73499);
   hNCpi0inFVres_stack_7->SetBinContent(12,41.78673);
   hNCpi0inFVres_stack_7->SetBinContent(13,35.2476);
   hNCpi0inFVres_stack_7->SetBinContent(14,26.93805);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.23139);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.42305);
   hNCpi0inFVres_stack_7->SetBinContent(17,22.05145);
   hNCpi0inFVres_stack_7->SetBinContent(18,21.92335);
   hNCpi0inFVres_stack_7->SetBinContent(19,19.80111);
   hNCpi0inFVres_stack_7->SetBinContent(20,16.60588);
   hNCpi0inFVres_stack_7->SetBinContent(21,13.79129);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.39395);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.792686);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.860762);
   hNCpi0inFVres_stack_7->SetBinError(1,1.818588);
   hNCpi0inFVres_stack_7->SetBinError(2,2.845996);
   hNCpi0inFVres_stack_7->SetBinError(3,3.491193);
   hNCpi0inFVres_stack_7->SetBinError(4,3.758577);
   hNCpi0inFVres_stack_7->SetBinError(5,3.932649);
   hNCpi0inFVres_stack_7->SetBinError(6,3.717894);
   hNCpi0inFVres_stack_7->SetBinError(7,3.402439);
   hNCpi0inFVres_stack_7->SetBinError(8,3.379704);
   hNCpi0inFVres_stack_7->SetBinError(9,2.702558);
   hNCpi0inFVres_stack_7->SetBinError(10,2.550445);
   hNCpi0inFVres_stack_7->SetBinError(11,2.200245);
   hNCpi0inFVres_stack_7->SetBinError(12,2.120266);
   hNCpi0inFVres_stack_7->SetBinError(13,1.975966);
   hNCpi0inFVres_stack_7->SetBinError(14,1.650266);
   hNCpi0inFVres_stack_7->SetBinError(15,1.514364);
   hNCpi0inFVres_stack_7->SetBinError(16,1.563721);
   hNCpi0inFVres_stack_7->SetBinError(17,1.522152);
   hNCpi0inFVres_stack_7->SetBinError(18,1.560399);
   hNCpi0inFVres_stack_7->SetBinError(19,1.469649);
   hNCpi0inFVres_stack_7->SetBinError(20,1.312597);
   hNCpi0inFVres_stack_7->SetBinError(21,1.196787);
   hNCpi0inFVres_stack_7->SetBinError(22,1.10626);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8876346);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5904275);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.743366);
   hNCpi0inFVdis_stack_8->SetBinContent(2,20.80385);
   hNCpi0inFVdis_stack_8->SetBinContent(3,32.26583);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.51981);
   hNCpi0inFVdis_stack_8->SetBinContent(5,27.60632);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.44398);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.23248);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.3174);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.0302);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.04977);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.457957);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.303432);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.309738);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.931419);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.803232);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.192234);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.01072);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.19257);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.933588);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.289552);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.543484);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.829534);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.674176);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.980751);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.466069);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.911659);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.806348);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.664045);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.564758);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.484208);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.17623);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.240569);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.008309);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8230961);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8062157);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6799404);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5839639);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8602457);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5299818);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5615393);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5885564);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6912474);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5388428);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6485936);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5203474);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4732778);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,18.49987);
   hCCpi0inFV_stack_10->SetBinContent(2,45.79539);
   hCCpi0inFV_stack_10->SetBinContent(3,64.91556);
   hCCpi0inFV_stack_10->SetBinContent(4,68.98586);
   hCCpi0inFV_stack_10->SetBinContent(5,59.62545);
   hCCpi0inFV_stack_10->SetBinContent(6,46.51907);
   hCCpi0inFV_stack_10->SetBinContent(7,49.87786);
   hCCpi0inFV_stack_10->SetBinContent(8,40.76334);
   hCCpi0inFV_stack_10->SetBinContent(9,30.12636);
   hCCpi0inFV_stack_10->SetBinContent(10,22.93194);
   hCCpi0inFV_stack_10->SetBinContent(11,16.23319);
   hCCpi0inFV_stack_10->SetBinContent(12,12.59041);
   hCCpi0inFV_stack_10->SetBinContent(13,10.79423);
   hCCpi0inFV_stack_10->SetBinContent(14,10.88988);
   hCCpi0inFV_stack_10->SetBinContent(15,13.36601);
   hCCpi0inFV_stack_10->SetBinContent(16,12.14368);
   hCCpi0inFV_stack_10->SetBinContent(17,7.822496);
   hCCpi0inFV_stack_10->SetBinContent(18,8.849183);
   hCCpi0inFV_stack_10->SetBinContent(19,9.44492);
   hCCpi0inFV_stack_10->SetBinContent(20,7.721517);
   hCCpi0inFV_stack_10->SetBinContent(21,5.578561);
   hCCpi0inFV_stack_10->SetBinContent(22,7.926234);
   hCCpi0inFV_stack_10->SetBinContent(23,5.423265);
   hCCpi0inFV_stack_10->SetBinContent(24,2.300569);
   hCCpi0inFV_stack_10->SetBinError(1,2.124915);
   hCCpi0inFV_stack_10->SetBinError(2,3.359741);
   hCCpi0inFV_stack_10->SetBinError(3,4.061845);
   hCCpi0inFV_stack_10->SetBinError(4,4.21612);
   hCCpi0inFV_stack_10->SetBinError(5,3.852046);
   hCCpi0inFV_stack_10->SetBinError(6,3.434486);
   hCCpi0inFV_stack_10->SetBinError(7,3.555561);
   hCCpi0inFV_stack_10->SetBinError(8,3.242302);
   hCCpi0inFV_stack_10->SetBinError(9,2.771266);
   hCCpi0inFV_stack_10->SetBinError(10,2.357496);
   hCCpi0inFV_stack_10->SetBinError(11,1.957362);
   hCCpi0inFV_stack_10->SetBinError(12,1.792303);
   hCCpi0inFV_stack_10->SetBinError(13,1.586475);
   hCCpi0inFV_stack_10->SetBinError(14,1.765364);
   hCCpi0inFV_stack_10->SetBinError(15,1.833784);
   hCCpi0inFV_stack_10->SetBinError(16,1.748488);
   hCCpi0inFV_stack_10->SetBinError(17,1.388016);
   hCCpi0inFV_stack_10->SetBinError(18,1.441448);
   hCCpi0inFV_stack_10->SetBinError(19,1.508767);
   hCCpi0inFV_stack_10->SetBinError(20,1.389051);
   hCCpi0inFV_stack_10->SetBinError(21,1.17879);
   hCCpi0inFV_stack_10->SetBinError(22,1.404035);
   hCCpi0inFV_stack_10->SetBinError(23,1.143628);
   hCCpi0inFV_stack_10->SetBinError(24,0.7071359);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,8.354318);
   hNCinFV_stack_11->SetBinContent(2,21.80961);
   hNCinFV_stack_11->SetBinContent(3,24.10413);
   hNCinFV_stack_11->SetBinContent(4,29.40966);
   hNCinFV_stack_11->SetBinContent(5,27.97107);
   hNCinFV_stack_11->SetBinContent(6,21.92227);
   hNCinFV_stack_11->SetBinContent(7,12.6142);
   hNCinFV_stack_11->SetBinContent(8,13.13817);
   hNCinFV_stack_11->SetBinContent(9,11.62386);
   hNCinFV_stack_11->SetBinContent(10,7.537262);
   hNCinFV_stack_11->SetBinContent(11,7.175716);
   hNCinFV_stack_11->SetBinContent(12,6.74871);
   hNCinFV_stack_11->SetBinContent(13,8.054478);
   hNCinFV_stack_11->SetBinContent(14,3.57107);
   hNCinFV_stack_11->SetBinContent(15,3.56769);
   hNCinFV_stack_11->SetBinContent(16,2.492213);
   hNCinFV_stack_11->SetBinContent(17,3.124387);
   hNCinFV_stack_11->SetBinContent(18,5.180059);
   hNCinFV_stack_11->SetBinContent(19,3.769477);
   hNCinFV_stack_11->SetBinContent(20,4.933472);
   hNCinFV_stack_11->SetBinContent(21,3.071134);
   hNCinFV_stack_11->SetBinContent(22,1.515398);
   hNCinFV_stack_11->SetBinContent(23,2.160488);
   hNCinFV_stack_11->SetBinContent(24,0.3917402);
   hNCinFV_stack_11->SetBinError(1,1.441881);
   hNCinFV_stack_11->SetBinError(2,2.427589);
   hNCinFV_stack_11->SetBinError(3,2.419686);
   hNCinFV_stack_11->SetBinError(4,2.726429);
   hNCinFV_stack_11->SetBinError(5,2.657012);
   hNCinFV_stack_11->SetBinError(6,2.370772);
   hNCinFV_stack_11->SetBinError(7,1.778018);
   hNCinFV_stack_11->SetBinError(8,1.873257);
   hNCinFV_stack_11->SetBinError(9,1.721979);
   hNCinFV_stack_11->SetBinError(10,1.331617);
   hNCinFV_stack_11->SetBinError(11,1.359228);
   hNCinFV_stack_11->SetBinError(12,1.271909);
   hNCinFV_stack_11->SetBinError(13,1.455439);
   hNCinFV_stack_11->SetBinError(14,0.9206376);
   hNCinFV_stack_11->SetBinError(15,0.919918);
   hNCinFV_stack_11->SetBinError(16,0.7326332);
   hNCinFV_stack_11->SetBinError(17,0.89917);
   hNCinFV_stack_11->SetBinError(18,1.144624);
   hNCinFV_stack_11->SetBinError(19,0.9417711);
   hNCinFV_stack_11->SetBinError(20,1.145041);
   hNCinFV_stack_11->SetBinError(21,0.9202356);
   hNCinFV_stack_11->SetBinError(22,0.588146);
   hNCinFV_stack_11->SetBinError(23,0.6514152);
   hNCinFV_stack_11->SetBinError(24,0.2770047);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,9.068304);
   hnumuCCinFV_stack_12->SetBinContent(2,17.73832);
   hnumuCCinFV_stack_12->SetBinContent(3,27.51979);
   hnumuCCinFV_stack_12->SetBinContent(4,28.65184);
   hnumuCCinFV_stack_12->SetBinContent(5,24.63203);
   hnumuCCinFV_stack_12->SetBinContent(6,23.73246);
   hnumuCCinFV_stack_12->SetBinContent(7,19.61415);
   hnumuCCinFV_stack_12->SetBinContent(8,18.33186);
   hnumuCCinFV_stack_12->SetBinContent(9,15.18511);
   hnumuCCinFV_stack_12->SetBinContent(10,11.69149);
   hnumuCCinFV_stack_12->SetBinContent(11,9.976541);
   hnumuCCinFV_stack_12->SetBinContent(12,9.302549);
   hnumuCCinFV_stack_12->SetBinContent(13,8.886398);
   hnumuCCinFV_stack_12->SetBinContent(14,5.040719);
   hnumuCCinFV_stack_12->SetBinContent(15,5.223449);
   hnumuCCinFV_stack_12->SetBinContent(16,4.981747);
   hnumuCCinFV_stack_12->SetBinContent(17,5.768032);
   hnumuCCinFV_stack_12->SetBinContent(18,4.615903);
   hnumuCCinFV_stack_12->SetBinContent(19,4.172652);
   hnumuCCinFV_stack_12->SetBinContent(20,3.522532);
   hnumuCCinFV_stack_12->SetBinContent(21,4.923608);
   hnumuCCinFV_stack_12->SetBinContent(22,2.860077);
   hnumuCCinFV_stack_12->SetBinContent(23,1.024094);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5923367);
   hnumuCCinFV_stack_12->SetBinError(1,1.86438);
   hnumuCCinFV_stack_12->SetBinError(2,2.171143);
   hnumuCCinFV_stack_12->SetBinError(3,3.352318);
   hnumuCCinFV_stack_12->SetBinError(4,3.276553);
   hnumuCCinFV_stack_12->SetBinError(5,2.849491);
   hnumuCCinFV_stack_12->SetBinError(6,2.49917);
   hnumuCCinFV_stack_12->SetBinError(7,2.609028);
   hnumuCCinFV_stack_12->SetBinError(8,2.630803);
   hnumuCCinFV_stack_12->SetBinError(9,2.124818);
   hnumuCCinFV_stack_12->SetBinError(10,2.128364);
   hnumuCCinFV_stack_12->SetBinError(11,1.733776);
   hnumuCCinFV_stack_12->SetBinError(12,1.690861);
   hnumuCCinFV_stack_12->SetBinError(13,1.825528);
   hnumuCCinFV_stack_12->SetBinError(14,1.769027);
   hnumuCCinFV_stack_12->SetBinError(15,1.171342);
   hnumuCCinFV_stack_12->SetBinError(16,1.331281);
   hnumuCCinFV_stack_12->SetBinError(17,1.261034);
   hnumuCCinFV_stack_12->SetBinError(18,1.429327);
   hnumuCCinFV_stack_12->SetBinError(19,1.042102);
   hnumuCCinFV_stack_12->SetBinError(20,0.9744636);
   hnumuCCinFV_stack_12->SetBinError(21,1.152505);
   hnumuCCinFV_stack_12->SetBinError(22,0.9130275);
   hnumuCCinFV_stack_12->SetBinError(23,0.4597369);
   hnumuCCinFV_stack_12->SetBinError(24,0.3968523);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.229876);
   hnueCCinFV_stack_13->SetBinContent(2,6.827628);
   hnueCCinFV_stack_13->SetBinContent(3,4.240975);
   hnueCCinFV_stack_13->SetBinContent(4,0.9818966);
   hnueCCinFV_stack_13->SetBinContent(5,2.093064);
   hnueCCinFV_stack_13->SetBinContent(6,1.900778);
   hnueCCinFV_stack_13->SetBinContent(7,1.659721);
   hnueCCinFV_stack_13->SetBinContent(8,0.5867978);
   hnueCCinFV_stack_13->SetBinContent(9,2.37692);
   hnueCCinFV_stack_13->SetBinContent(10,1.375251);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,0.8343332);
   hnueCCinFV_stack_13->SetBinContent(15,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(17,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(19,1.075993);
   hnueCCinFV_stack_13->SetBinContent(20,1.635953);
   hnueCCinFV_stack_13->SetBinContent(21,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(22,0.9124936);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.139023);
   hnueCCinFV_stack_13->SetBinError(2,2.10362);
   hnueCCinFV_stack_13->SetBinError(3,1.202594);
   hnueCCinFV_stack_13->SetBinError(4,0.4391155);
   hnueCCinFV_stack_13->SetBinError(5,0.7245944);
   hnueCCinFV_stack_13->SetBinError(6,0.8863533);
   hnueCCinFV_stack_13->SetBinError(7,0.7360034);
   hnueCCinFV_stack_13->SetBinError(8,0.3387718);
   hnueCCinFV_stack_13->SetBinError(9,1.367485);
   hnueCCinFV_stack_13->SetBinError(10,0.7117962);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.4958181);
   hnueCCinFV_stack_13->SetBinError(15,0.3387718);
   hnueCCinFV_stack_13->SetBinError(17,0.3025491);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(19,1.075993);
   hnueCCinFV_stack_13->SetBinError(20,0.6942983);
   hnueCCinFV_stack_13->SetBinError(21,0.4394482);
   hnueCCinFV_stack_13->SetBinError(22,0.5898438);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__11->SetBinContent(1,102.1556);
   hmcerror__11->SetBinContent(2,251.8076);
   hmcerror__11->SetBinContent(3,368.3115);
   hmcerror__11->SetBinContent(4,393.2137);
   hmcerror__11->SetBinContent(5,383.414);
   hmcerror__11->SetBinContent(6,362.7571);
   hmcerror__11->SetBinContent(7,312.4896);
   hmcerror__11->SetBinContent(8,282.4212);
   hmcerror__11->SetBinContent(9,221.442);
   hmcerror__11->SetBinContent(10,191.7411);
   hmcerror__11->SetBinContent(11,147.5014);
   hmcerror__11->SetBinContent(12,126.9947);
   hmcerror__11->SetBinContent(13,101.3485);
   hmcerror__11->SetBinContent(14,87.24926);
   hmcerror__11->SetBinContent(15,87.16139);
   hmcerror__11->SetBinContent(16,87.9313);
   hmcerror__11->SetBinContent(17,72.11535);
   hmcerror__11->SetBinContent(18,72.09782);
   hmcerror__11->SetBinContent(19,65.7562);
   hmcerror__11->SetBinContent(20,60.95712);
   hmcerror__11->SetBinContent(21,49.34975);
   hmcerror__11->SetBinContent(22,46.37313);
   hmcerror__11->SetBinContent(23,26.18786);
   hmcerror__11->SetBinContent(24,9.327639);
   hmcerror__11->SetBinError(1,37.84744);
   hmcerror__11->SetBinError(2,67.63507);
   hmcerror__11->SetBinError(3,90.66116);
   hmcerror__11->SetBinError(4,97.38695);
   hmcerror__11->SetBinError(5,86.25595);
   hmcerror__11->SetBinError(6,90.28032);
   hmcerror__11->SetBinError(7,76.58682);
   hmcerror__11->SetBinError(8,72.96378);
   hmcerror__11->SetBinError(9,58.06364);
   hmcerror__11->SetBinError(10,48.21825);
   hmcerror__11->SetBinError(11,39.10111);
   hmcerror__11->SetBinError(12,40.22099);
   hmcerror__11->SetBinError(13,32.96082);
   hmcerror__11->SetBinError(14,24.47037);
   hmcerror__11->SetBinError(15,25.005);
   hmcerror__11->SetBinError(16,23.1416);
   hmcerror__11->SetBinError(17,22.47014);
   hmcerror__11->SetBinError(18,21.36275);
   hmcerror__11->SetBinError(19,22.70363);
   hmcerror__11->SetBinError(20,26.25797);
   hmcerror__11->SetBinError(21,18.15593);
   hmcerror__11->SetBinError(22,19.36757);
   hmcerror__11->SetBinError(23,12.61425);
   hmcerror__11->SetBinError(24,7.456812);
   hmcerror__11->SetBinError(25,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[24] = {
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
   Double_t _fy3013[24] = {
   92,
   224,
   388,
   397,
   408,
   349,
   299,
   255,
   208,
   167,
   140,
   104,
   121,
   74,
   97,
   91,
   65,
   73,
   74,
   64,
   60,
   37,
   28,
   8};
   Double_t _felx3013[24] = {
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
   Double_t _fely3013[24] = {
   9.7138,
   14.96663,
   19.69772,
   19.92486,
   20.19901,
   18.68154,
   17.29162,
   15.96872,
   14.42221,
   12.92285,
   11.83216,
   10.19804,
   11,
   8.7275,
   9.9704,
   9.6617,
   8.1893,
   8.6693,
   8.7275,
   8.1273,
   7.8743,
   6.2203,
   5.4358,
   3.0307};
   Double_t _fehx3013[24] = {
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
   Double_t _fehy3013[24] = {
   9.513,
   14.96663,
   19.69772,
   19.92486,
   20.19901,
   18.68154,
   17.29162,
   15.96872,
   14.42221,
   12.92285,
   11.83216,
   10.19804,
   11,
   8.5253,
   9.769,
   9.46,
   7.9866,
   8.4672,
   8.5253,
   7.9246,
   7.6713,
   6.0141,
   5.2271,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(4.47237);
   Graph_Graph3013->SetMaximum(470.522);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
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
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
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
   Double_t _fely3014[24] = {
   0.370488,
   0.2685982,
   0.2461535,
   0.2476692,
   0.2249682,
   0.2488727,
   0.245086,
   0.2583509,
   0.2622069,
   0.2514758,
   0.2650898,
   0.3167139,
   0.3252226,
   0.2804651,
   0.2868816,
   0.2631782,
   0.3115861,
   0.2963023,
   0.3452698,
   0.4307613,
   0.3679032,
   0.4176463,
   0.481683,
   0.799432};
   Double_t _fehx3014[24] = {
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
   Double_t _fehy3014[24] = {
   0.370488,
   0.2685982,
   0.2461535,
   0.2476692,
   0.2249682,
   0.2488727,
   0.245086,
   0.2583509,
   0.2622069,
   0.2514758,
   0.2650898,
   0.3167139,
   0.3252226,
   0.2804651,
   0.2868816,
   0.2631782,
   0.3115861,
   0.2963023,
   0.3452698,
   0.4307613,
   0.3679032,
   0.4176463,
   0.481683,
   0.799432};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,3.465);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[24] = {
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
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
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
   Double_t _fely3015[24] = {
   0.2424031,
   0.2218372,
   0.207551,
   0.2003283,
   0.2029897,
   0.2062538,
   0.2154063,
   0.2185183,
   0.227339,
   0.2048367,
   0.208598,
   0.1992258,
   0.1975632,
   0.2036356,
   0.2126508,
   0.1815648,
   0.1908374,
   0.1993311,
   0.1995155,
   0.2009691,
   0.2105096,
   0.2108462,
   0.2137868,
   0.2813042};
   Double_t _fehx3015[24] = {
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
   Double_t _fehy3015[24] = {
   0.2424031,
   0.2218372,
   0.207551,
   0.2003283,
   0.2029897,
   0.2062538,
   0.2154063,
   0.2185183,
   0.227339,
   0.2048367,
   0.208598,
   0.1992258,
   0.1975632,
   0.2036356,
   0.2126508,
   0.1815648,
   0.1908374,
   0.1993311,
   0.1995155,
   0.2009691,
   0.2105096,
   0.2108462,
   0.2137868,
   0.2813042};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,3.465);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[24] = {
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
   Double_t _fy3016[24] = {
   0.9005866,
   0.8895681,
   1.053456,
   1.009629,
   1.064124,
   0.9620763,
   0.9568318,
   0.9029066,
   0.9392977,
   0.8709659,
   0.9491438,
   0.8189318,
   1.1939,
   0.8481447,
   1.112878,
   1.034899,
   0.9013338,
   1.012513,
   1.125369,
   1.049918,
   1.215812,
   0.7978758,
   1.069198,
   0.8576662};
   Double_t _felx3016[24] = {
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
   Double_t _fely3016[24] = {
   0.09508824,
   0.05943677,
   0.05348113,
   0.05067183,
   0.05268198,
   0.05149877,
   0.05533501,
   0.05654221,
   0.06512858,
   0.06739736,
   0.08021729,
   0.08030287,
   0.1085364,
   0.1000295,
   0.1143901,
   0.1098778,
   0.1135583,
   0.1202436,
   0.1327251,
   0.1333282,
   0.1595611,
   0.1341359,
   0.2075694,
   0.3249161};
   Double_t _fehx3016[24] = {
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
   Double_t _fehy3016[24] = {
   0.09312261,
   0.05943677,
   0.05348113,
   0.05067183,
   0.05268198,
   0.05149877,
   0.05533501,
   0.05654221,
   0.06512858,
   0.06739736,
   0.08021729,
   0.08030287,
   0.1085364,
   0.097712,
   0.1120794,
   0.107584,
   0.1107476,
   0.1174404,
   0.1296501,
   0.1300029,
   0.1554476,
   0.1296893,
   0.1996001,
   0.2990682};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.4488991);
   Graph_Graph3016->SetMaximum(1.45511);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
