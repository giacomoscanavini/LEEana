#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 18:05:59 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-6.869872,3.957692,759.6632);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__1->SetBinContent(1,340.5524);
   hmc__1->SetBinContent(2,343.4936);
   hmc__1->SetBinContent(3,332.4152);
   hmc__1->SetBinContent(4,335.6451);
   hmc__1->SetBinContent(5,266.2893);
   hmc__1->SetBinContent(6,276.027);
   hmc__1->SetBinContent(7,281.9611);
   hmc__1->SetBinContent(8,274.7571);
   hmc__1->SetBinContent(9,301.2166);
   hmc__1->SetBinContent(10,295.4931);
   hmc__1->SetBinContent(11,323.4842);
   hmc__1->SetBinContent(12,298.5204);
   hmc__1->SetBinContent(13,308.6859);
   hmc__1->SetBinContent(14,321.2114);
   hmc__1->SetBinContent(15,330.1924);
   hmc__1->SetBinContent(16,299.6415);
   hmc__1->SetBinContent(17,294.8589);
   hmc__1->SetBinContent(18,275.558);
   hmc__1->SetBinContent(19,278.6797);
   hmc__1->SetBinContent(20,283.8603);
   hmc__1->SetBinContent(21,317.7626);
   hmc__1->SetBinContent(22,315.3208);
   hmc__1->SetBinContent(23,324.088);
   hmc__1->SetBinContent(24,314.5908);
   hmc__1->SetBinError(1,89.66883);
   hmc__1->SetBinError(2,92.09079);
   hmc__1->SetBinError(3,84.09546);
   hmc__1->SetBinError(4,84.62944);
   hmc__1->SetBinError(5,67.87959);
   hmc__1->SetBinError(6,65.54345);
   hmc__1->SetBinError(7,71.42736);
   hmc__1->SetBinError(8,71.63407);
   hmc__1->SetBinError(9,82.57017);
   hmc__1->SetBinError(10,80.3801);
   hmc__1->SetBinError(11,87.40362);
   hmc__1->SetBinError(12,78.74114);
   hmc__1->SetBinError(13,81.21801);
   hmc__1->SetBinError(14,81.1587);
   hmc__1->SetBinError(15,84.4457);
   hmc__1->SetBinError(16,75.85517);
   hmc__1->SetBinError(17,73.26116);
   hmc__1->SetBinError(18,77.97841);
   hmc__1->SetBinError(19,68.8166);
   hmc__1->SetBinError(20,69.68878);
   hmc__1->SetBinError(21,79.77393);
   hmc__1->SetBinError(22,80.85873);
   hmc__1->SetBinError(23,86.47237);
   hmc__1->SetBinError(24,79.40891);
   hmc__1->SetBinError(25,0.3895343);
   hmc__1->SetMinimum(-6.869872);
   hmc__1->SetMaximum(721.3365);
   hmc__1->SetEntries(7241.585);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-3.15,3.15);
   hs1_stack_1->SetMinimum(-3.571482e-09);
   hs1_stack_1->SetMaximum(360.6682);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,7.522078);
   hbadmatch_stack_1->SetBinContent(2,8.29543);
   hbadmatch_stack_1->SetBinContent(3,9.082354);
   hbadmatch_stack_1->SetBinContent(4,9.755182);
   hbadmatch_stack_1->SetBinContent(5,10.13866);
   hbadmatch_stack_1->SetBinContent(6,7.894497);
   hbadmatch_stack_1->SetBinContent(7,9.343106);
   hbadmatch_stack_1->SetBinContent(8,5.585049);
   hbadmatch_stack_1->SetBinContent(9,8.711514);
   hbadmatch_stack_1->SetBinContent(10,3.387765);
   hbadmatch_stack_1->SetBinContent(11,7.736612);
   hbadmatch_stack_1->SetBinContent(12,6.453063);
   hbadmatch_stack_1->SetBinContent(13,5.0597);
   hbadmatch_stack_1->SetBinContent(14,6.447912);
   hbadmatch_stack_1->SetBinContent(15,10.46708);
   hbadmatch_stack_1->SetBinContent(16,8.90196);
   hbadmatch_stack_1->SetBinContent(17,11.49667);
   hbadmatch_stack_1->SetBinContent(18,6.09793);
   hbadmatch_stack_1->SetBinContent(19,6.228631);
   hbadmatch_stack_1->SetBinContent(20,8.973623);
   hbadmatch_stack_1->SetBinContent(21,6.398819);
   hbadmatch_stack_1->SetBinContent(22,6.89857);
   hbadmatch_stack_1->SetBinContent(23,6.339061);
   hbadmatch_stack_1->SetBinContent(24,3.318166);
   hbadmatch_stack_1->SetBinError(1,1.488365);
   hbadmatch_stack_1->SetBinError(2,1.432261);
   hbadmatch_stack_1->SetBinError(3,1.626705);
   hbadmatch_stack_1->SetBinError(4,1.644069);
   hbadmatch_stack_1->SetBinError(5,1.70529);
   hbadmatch_stack_1->SetBinError(6,1.506719);
   hbadmatch_stack_1->SetBinError(7,2.052367);
   hbadmatch_stack_1->SetBinError(8,1.183025);
   hbadmatch_stack_1->SetBinError(9,1.625901);
   hbadmatch_stack_1->SetBinError(10,0.860888);
   hbadmatch_stack_1->SetBinError(11,1.416233);
   hbadmatch_stack_1->SetBinError(12,1.284988);
   hbadmatch_stack_1->SetBinError(13,1.15838);
   hbadmatch_stack_1->SetBinError(14,1.978112);
   hbadmatch_stack_1->SetBinError(15,2.432227);
   hbadmatch_stack_1->SetBinError(16,1.630805);
   hbadmatch_stack_1->SetBinError(17,2.566396);
   hbadmatch_stack_1->SetBinError(18,1.345054);
   hbadmatch_stack_1->SetBinError(19,1.233624);
   hbadmatch_stack_1->SetBinError(20,1.563381);
   hbadmatch_stack_1->SetBinError(21,1.357289);
   hbadmatch_stack_1->SetBinError(22,1.328261);
   hbadmatch_stack_1->SetBinError(23,1.336508);
   hbadmatch_stack_1->SetBinError(24,0.9556617);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,18.78683);
   hext_stack_2->SetBinContent(2,18.1408);
   hext_stack_2->SetBinContent(3,23.01999);
   hext_stack_2->SetBinContent(4,30.10647);
   hext_stack_2->SetBinContent(5,24.23538);
   hext_stack_2->SetBinContent(6,35.28687);
   hext_stack_2->SetBinContent(7,37.28239);
   hext_stack_2->SetBinContent(8,29.09138);
   hext_stack_2->SetBinContent(9,22.74744);
   hext_stack_2->SetBinContent(10,21.1514);
   hext_stack_2->SetBinContent(11,20.1898);
   hext_stack_2->SetBinContent(12,13.13198);
   hext_stack_2->SetBinContent(13,14.65741);
   hext_stack_2->SetBinContent(14,16.36877);
   hext_stack_2->SetBinContent(15,23.4972);
   hext_stack_2->SetBinContent(16,29.58459);
   hext_stack_2->SetBinContent(17,31.56405);
   hext_stack_2->SetBinContent(18,38.479);
   hext_stack_2->SetBinContent(19,42.69063);
   hext_stack_2->SetBinContent(20,35.67035);
   hext_stack_2->SetBinContent(21,27.14336);
   hext_stack_2->SetBinContent(22,25.9208);
   hext_stack_2->SetBinContent(23,16.42943);
   hext_stack_2->SetBinContent(24,19.65627);
   hext_stack_2->SetBinError(1,2.861394);
   hext_stack_2->SetBinError(2,2.764196);
   hext_stack_2->SetBinError(3,3.102363);
   hext_stack_2->SetBinError(4,3.653519);
   hext_stack_2->SetBinError(5,3.159984);
   hext_stack_2->SetBinError(6,3.945816);
   hext_stack_2->SetBinError(7,3.949713);
   hext_stack_2->SetBinError(8,3.478725);
   hext_stack_2->SetBinError(9,3.148471);
   hext_stack_2->SetBinError(10,2.986339);
   hext_stack_2->SetBinError(11,2.921718);
   hext_stack_2->SetBinError(12,2.310518);
   hext_stack_2->SetBinError(13,2.491381);
   hext_stack_2->SetBinError(14,2.567495);
   hext_stack_2->SetBinError(15,3.148991);
   hext_stack_2->SetBinError(16,3.530165);
   hext_stack_2->SetBinError(17,3.708665);
   hext_stack_2->SetBinError(18,4.028443);
   hext_stack_2->SetBinError(19,4.27423);
   hext_stack_2->SetBinError(20,3.812681);
   hext_stack_2->SetBinError(21,3.316426);
   hext_stack_2->SetBinError(22,3.292269);
   hext_stack_2->SetBinError(23,2.693646);
   hext_stack_2->SetBinError(24,3.007788);
   hext_stack_2->SetEntries(1541);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.165782);
   hdirt_stack_3->SetBinContent(2,3.085031);
   hdirt_stack_3->SetBinContent(3,3.145933);
   hdirt_stack_3->SetBinContent(4,3.447895);
   hdirt_stack_3->SetBinContent(5,3.05676);
   hdirt_stack_3->SetBinContent(6,2.889837);
   hdirt_stack_3->SetBinContent(7,3.220822);
   hdirt_stack_3->SetBinContent(8,1.971726);
   hdirt_stack_3->SetBinContent(9,2.216944);
   hdirt_stack_3->SetBinContent(10,2.401442);
   hdirt_stack_3->SetBinContent(11,3.673876);
   hdirt_stack_3->SetBinContent(12,1.655917);
   hdirt_stack_3->SetBinContent(13,2.326338);
   hdirt_stack_3->SetBinContent(14,2.362334);
   hdirt_stack_3->SetBinContent(15,3.933435);
   hdirt_stack_3->SetBinContent(16,4.133663);
   hdirt_stack_3->SetBinContent(17,4.664395);
   hdirt_stack_3->SetBinContent(18,3.041574);
   hdirt_stack_3->SetBinContent(19,5.296074);
   hdirt_stack_3->SetBinContent(20,2.212869);
   hdirt_stack_3->SetBinContent(21,3.012759);
   hdirt_stack_3->SetBinContent(22,3.844801);
   hdirt_stack_3->SetBinContent(23,3.454516);
   hdirt_stack_3->SetBinContent(24,2.816322);
   hdirt_stack_3->SetBinError(1,0.5409003);
   hdirt_stack_3->SetBinError(2,0.8770267);
   hdirt_stack_3->SetBinError(3,0.8887919);
   hdirt_stack_3->SetBinError(4,1.033072);
   hdirt_stack_3->SetBinError(5,0.8737997);
   hdirt_stack_3->SetBinError(6,0.9012683);
   hdirt_stack_3->SetBinError(7,0.8379974);
   hdirt_stack_3->SetBinError(8,0.9035982);
   hdirt_stack_3->SetBinError(9,0.7094058);
   hdirt_stack_3->SetBinError(10,1.121171);
   hdirt_stack_3->SetBinError(11,1.35162);
   hdirt_stack_3->SetBinError(12,0.6096856);
   hdirt_stack_3->SetBinError(13,0.7259108);
   hdirt_stack_3->SetBinError(14,0.8758153);
   hdirt_stack_3->SetBinError(15,1.025388);
   hdirt_stack_3->SetBinError(16,1.099735);
   hdirt_stack_3->SetBinError(17,1.182233);
   hdirt_stack_3->SetBinError(18,0.9558297);
   hdirt_stack_3->SetBinError(19,1.400389);
   hdirt_stack_3->SetBinError(20,0.7240585);
   hdirt_stack_3->SetBinError(21,0.856592);
   hdirt_stack_3->SetBinError(22,1.054336);
   hdirt_stack_3->SetBinError(23,0.9870484);
   hdirt_stack_3->SetBinError(24,0.8883514);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,29.61312);
   houtFV_stack_4->SetBinContent(2,31.55316);
   houtFV_stack_4->SetBinContent(3,35.02354);
   houtFV_stack_4->SetBinContent(4,37.67963);
   houtFV_stack_4->SetBinContent(5,25.82877);
   houtFV_stack_4->SetBinContent(6,28.87062);
   houtFV_stack_4->SetBinContent(7,27.58505);
   houtFV_stack_4->SetBinContent(8,31.2707);
   houtFV_stack_4->SetBinContent(9,30.35022);
   houtFV_stack_4->SetBinContent(10,30.21745);
   houtFV_stack_4->SetBinContent(11,29.90585);
   houtFV_stack_4->SetBinContent(12,30.15556);
   houtFV_stack_4->SetBinContent(13,30.6963);
   houtFV_stack_4->SetBinContent(14,31.0986);
   houtFV_stack_4->SetBinContent(15,33.45589);
   houtFV_stack_4->SetBinContent(16,27.84632);
   houtFV_stack_4->SetBinContent(17,28.76942);
   houtFV_stack_4->SetBinContent(18,28.48705);
   houtFV_stack_4->SetBinContent(19,22.7614);
   houtFV_stack_4->SetBinContent(20,24.05476);
   houtFV_stack_4->SetBinContent(21,34.77409);
   houtFV_stack_4->SetBinContent(22,27.7626);
   houtFV_stack_4->SetBinContent(23,32.90351);
   houtFV_stack_4->SetBinContent(24,31.56818);
   houtFV_stack_4->SetBinError(1,2.733079);
   houtFV_stack_4->SetBinError(2,2.811228);
   houtFV_stack_4->SetBinError(3,2.940318);
   houtFV_stack_4->SetBinError(4,3.141818);
   houtFV_stack_4->SetBinError(5,2.554139);
   houtFV_stack_4->SetBinError(6,2.688792);
   houtFV_stack_4->SetBinError(7,2.578508);
   houtFV_stack_4->SetBinError(8,2.93536);
   houtFV_stack_4->SetBinError(9,2.749725);
   houtFV_stack_4->SetBinError(10,2.808926);
   houtFV_stack_4->SetBinError(11,2.716007);
   houtFV_stack_4->SetBinError(12,2.752851);
   houtFV_stack_4->SetBinError(13,2.726024);
   houtFV_stack_4->SetBinError(14,2.797296);
   houtFV_stack_4->SetBinError(15,2.909664);
   houtFV_stack_4->SetBinError(16,2.636555);
   houtFV_stack_4->SetBinError(17,2.907128);
   houtFV_stack_4->SetBinError(18,2.706913);
   houtFV_stack_4->SetBinError(19,2.366202);
   houtFV_stack_4->SetBinError(20,2.425077);
   houtFV_stack_4->SetBinError(21,3.055338);
   houtFV_stack_4->SetBinError(22,2.673657);
   houtFV_stack_4->SetBinError(23,2.869944);
   houtFV_stack_4->SetBinError(24,2.85646);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.558678);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.170238);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.82506);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.142338);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.359633);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.224374);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.174814);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.207516);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.515168);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.08945);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.64321);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.11427);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.488259);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.155124);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.396014);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.82606);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.874292);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.305914);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,6.471177);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.63897);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.456783);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.1856);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.463024);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.198306);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6906836);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6770723);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.727817);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6764972);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5343699);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6491928);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8147005);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5714444);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7138684);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7892207);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7061482);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6512382);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6452336);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6674713);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7522726);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7627206);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6053449);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.656891);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9298927);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5990435);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5121163);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7399703);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7114109);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7014016);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7805356);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.198708);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.269622);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8084357);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.26879);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.603926);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.36694);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8228858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.976172);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.976172);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.07349);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.254508);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.9617218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.465258);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.228104);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8507857);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.24089);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9625539);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.381222);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1878515);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3549294);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3747542);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.189912);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3481013);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4427564);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3871841);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2499367);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3259676);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3259676);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3401847);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3571158);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2825829);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4597906);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3640422);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2514891);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3469814);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3148322);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3788857);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,121.0932);
   hNCpi0inFVres_stack_7->SetBinContent(2,128.1818);
   hNCpi0inFVres_stack_7->SetBinContent(3,123.9743);
   hNCpi0inFVres_stack_7->SetBinContent(4,129.7294);
   hNCpi0inFVres_stack_7->SetBinContent(5,105.7206);
   hNCpi0inFVres_stack_7->SetBinContent(6,100.8777);
   hNCpi0inFVres_stack_7->SetBinContent(7,102.1813);
   hNCpi0inFVres_stack_7->SetBinContent(8,107.5986);
   hNCpi0inFVres_stack_7->SetBinContent(9,118.4987);
   hNCpi0inFVres_stack_7->SetBinContent(10,115.7454);
   hNCpi0inFVres_stack_7->SetBinContent(11,119.0837);
   hNCpi0inFVres_stack_7->SetBinContent(12,105.5048);
   hNCpi0inFVres_stack_7->SetBinContent(13,111.1117);
   hNCpi0inFVres_stack_7->SetBinContent(14,119.3601);
   hNCpi0inFVres_stack_7->SetBinContent(15,125.191);
   hNCpi0inFVres_stack_7->SetBinContent(16,116.0665);
   hNCpi0inFVres_stack_7->SetBinContent(17,107.9817);
   hNCpi0inFVres_stack_7->SetBinContent(18,102.62);
   hNCpi0inFVres_stack_7->SetBinContent(19,101.8874);
   hNCpi0inFVres_stack_7->SetBinContent(20,106.3229);
   hNCpi0inFVres_stack_7->SetBinContent(21,126.8467);
   hNCpi0inFVres_stack_7->SetBinContent(22,124.245);
   hNCpi0inFVres_stack_7->SetBinContent(23,120.8237);
   hNCpi0inFVres_stack_7->SetBinContent(24,114.7311);
   hNCpi0inFVres_stack_7->SetBinError(1,3.63243);
   hNCpi0inFVres_stack_7->SetBinError(2,3.721869);
   hNCpi0inFVres_stack_7->SetBinError(3,3.596797);
   hNCpi0inFVres_stack_7->SetBinError(4,3.802589);
   hNCpi0inFVres_stack_7->SetBinError(5,3.31437);
   hNCpi0inFVres_stack_7->SetBinError(6,3.234754);
   hNCpi0inFVres_stack_7->SetBinError(7,3.309043);
   hNCpi0inFVres_stack_7->SetBinError(8,3.399129);
   hNCpi0inFVres_stack_7->SetBinError(9,3.571963);
   hNCpi0inFVres_stack_7->SetBinError(10,3.540385);
   hNCpi0inFVres_stack_7->SetBinError(11,3.575661);
   hNCpi0inFVres_stack_7->SetBinError(12,3.334585);
   hNCpi0inFVres_stack_7->SetBinError(13,3.360184);
   hNCpi0inFVres_stack_7->SetBinError(14,3.587108);
   hNCpi0inFVres_stack_7->SetBinError(15,3.672629);
   hNCpi0inFVres_stack_7->SetBinError(16,3.504527);
   hNCpi0inFVres_stack_7->SetBinError(17,3.400951);
   hNCpi0inFVres_stack_7->SetBinError(18,3.351787);
   hNCpi0inFVres_stack_7->SetBinError(19,3.365779);
   hNCpi0inFVres_stack_7->SetBinError(20,3.336609);
   hNCpi0inFVres_stack_7->SetBinError(21,3.729783);
   hNCpi0inFVres_stack_7->SetBinError(22,3.641873);
   hNCpi0inFVres_stack_7->SetBinError(23,3.563248);
   hNCpi0inFVres_stack_7->SetBinError(24,3.503592);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.22586);
   hNCpi0inFVdis_stack_8->SetBinContent(2,23.20275);
   hNCpi0inFVdis_stack_8->SetBinContent(3,24.20417);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.51573);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.0777);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.8197);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.78883);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.85349);
   hNCpi0inFVdis_stack_8->SetBinContent(9,22.99169);
   hNCpi0inFVdis_stack_8->SetBinContent(10,25.87569);
   hNCpi0inFVdis_stack_8->SetBinContent(11,25.65832);
   hNCpi0inFVdis_stack_8->SetBinContent(12,22.72963);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.43384);
   hNCpi0inFVdis_stack_8->SetBinContent(14,24.96877);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.76424);
   hNCpi0inFVdis_stack_8->SetBinContent(16,22.2392);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.23256);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.97413);
   hNCpi0inFVdis_stack_8->SetBinContent(19,19.95124);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.82387);
   hNCpi0inFVdis_stack_8->SetBinContent(21,24.14887);
   hNCpi0inFVdis_stack_8->SetBinContent(22,23.10677);
   hNCpi0inFVdis_stack_8->SetBinContent(23,27.5316);
   hNCpi0inFVdis_stack_8->SetBinContent(24,23.27268);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.657053);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.504178);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.556778);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.620718);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.398078);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.364476);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.506743);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.377087);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.595852);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.64363);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.724727);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.574367);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.50827);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.603495);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.502064);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.501977);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.498778);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.252821);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.469472);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.559838);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.587538);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.539683);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.735749);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.585575);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.222536);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1404279);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1994106);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,60.37917);
   hCCpi0inFV_stack_10->SetBinContent(2,54.08408);
   hCCpi0inFV_stack_10->SetBinContent(3,49.8521);
   hCCpi0inFV_stack_10->SetBinContent(4,55.88479);
   hCCpi0inFV_stack_10->SetBinContent(5,39.08097);
   hCCpi0inFV_stack_10->SetBinContent(6,36.14339);
   hCCpi0inFV_stack_10->SetBinContent(7,38.10889);
   hCCpi0inFV_stack_10->SetBinContent(8,36.72836);
   hCCpi0inFV_stack_10->SetBinContent(9,47.99313);
   hCCpi0inFV_stack_10->SetBinContent(10,39.18905);
   hCCpi0inFV_stack_10->SetBinContent(11,46.34302);
   hCCpi0inFV_stack_10->SetBinContent(12,49.63422);
   hCCpi0inFV_stack_10->SetBinContent(13,49.95181);
   hCCpi0inFV_stack_10->SetBinContent(14,48.09842);
   hCCpi0inFV_stack_10->SetBinContent(15,48.84624);
   hCCpi0inFV_stack_10->SetBinContent(16,42.9424);
   hCCpi0inFV_stack_10->SetBinContent(17,43.01532);
   hCCpi0inFV_stack_10->SetBinContent(18,34.04401);
   hCCpi0inFV_stack_10->SetBinContent(19,36.99036);
   hCCpi0inFV_stack_10->SetBinContent(20,42.99889);
   hCCpi0inFV_stack_10->SetBinContent(21,47.53049);
   hCCpi0inFV_stack_10->SetBinContent(22,45.82125);
   hCCpi0inFV_stack_10->SetBinContent(23,52.53388);
   hCCpi0inFV_stack_10->SetBinContent(24,48.82292);
   hCCpi0inFV_stack_10->SetBinError(1,3.898019);
   hCCpi0inFV_stack_10->SetBinError(2,3.730275);
   hCCpi0inFV_stack_10->SetBinError(3,3.49583);
   hCCpi0inFV_stack_10->SetBinError(4,3.737237);
   hCCpi0inFV_stack_10->SetBinError(5,3.136405);
   hCCpi0inFV_stack_10->SetBinError(6,3.043992);
   hCCpi0inFV_stack_10->SetBinError(7,3.132871);
   hCCpi0inFV_stack_10->SetBinError(8,3.070212);
   hCCpi0inFV_stack_10->SetBinError(9,3.470876);
   hCCpi0inFV_stack_10->SetBinError(10,3.133284);
   hCCpi0inFV_stack_10->SetBinError(11,3.434503);
   hCCpi0inFV_stack_10->SetBinError(12,3.464322);
   hCCpi0inFV_stack_10->SetBinError(13,3.539914);
   hCCpi0inFV_stack_10->SetBinError(14,3.404409);
   hCCpi0inFV_stack_10->SetBinError(15,3.479421);
   hCCpi0inFV_stack_10->SetBinError(16,3.321301);
   hCCpi0inFV_stack_10->SetBinError(17,3.276929);
   hCCpi0inFV_stack_10->SetBinError(18,2.936369);
   hCCpi0inFV_stack_10->SetBinError(19,3.079661);
   hCCpi0inFV_stack_10->SetBinError(20,3.335357);
   hCCpi0inFV_stack_10->SetBinError(21,3.462362);
   hCCpi0inFV_stack_10->SetBinError(22,3.369993);
   hCCpi0inFV_stack_10->SetBinError(23,3.713692);
   hCCpi0inFV_stack_10->SetBinError(24,3.490231);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,21.26268);
   hNCinFV_stack_11->SetBinContent(2,24.18818);
   hNCinFV_stack_11->SetBinContent(3,29.54175);
   hNCinFV_stack_11->SetBinContent(4,20.65745);
   hNCinFV_stack_11->SetBinContent(5,19.74112);
   hNCinFV_stack_11->SetBinContent(6,18.95933);
   hNCinFV_stack_11->SetBinContent(7,16.88469);
   hNCinFV_stack_11->SetBinContent(8,19.80621);
   hNCinFV_stack_11->SetBinContent(9,21.26727);
   hNCinFV_stack_11->SetBinContent(10,20.99026);
   hNCinFV_stack_11->SetBinContent(11,20.24444);
   hNCinFV_stack_11->SetBinContent(12,23.00958);
   hNCinFV_stack_11->SetBinContent(13,22.32415);
   hNCinFV_stack_11->SetBinContent(14,22.5158);
   hNCinFV_stack_11->SetBinContent(15,27.23795);
   hNCinFV_stack_11->SetBinContent(16,19.72205);
   hNCinFV_stack_11->SetBinContent(17,19.25809);
   hNCinFV_stack_11->SetBinContent(18,16.6991);
   hNCinFV_stack_11->SetBinContent(19,17.36944);
   hNCinFV_stack_11->SetBinContent(20,18.87251);
   hNCinFV_stack_11->SetBinContent(21,23.00113);
   hNCinFV_stack_11->SetBinContent(22,25.52861);
   hNCinFV_stack_11->SetBinContent(23,25.9003);
   hNCinFV_stack_11->SetBinContent(24,17.10822);
   hNCinFV_stack_11->SetBinError(1,2.236173);
   hNCinFV_stack_11->SetBinError(2,2.483186);
   hNCinFV_stack_11->SetBinError(3,2.747541);
   hNCinFV_stack_11->SetBinError(4,2.339581);
   hNCinFV_stack_11->SetBinError(5,2.202393);
   hNCinFV_stack_11->SetBinError(6,2.167425);
   hNCinFV_stack_11->SetBinError(7,1.96241);
   hNCinFV_stack_11->SetBinError(8,2.194731);
   hNCinFV_stack_11->SetBinError(9,2.323586);
   hNCinFV_stack_11->SetBinError(10,2.321225);
   hNCinFV_stack_11->SetBinError(11,2.202861);
   hNCinFV_stack_11->SetBinError(12,2.436122);
   hNCinFV_stack_11->SetBinError(13,2.387732);
   hNCinFV_stack_11->SetBinError(14,2.395407);
   hNCinFV_stack_11->SetBinError(15,2.683852);
   hNCinFV_stack_11->SetBinError(16,2.28907);
   hNCinFV_stack_11->SetBinError(17,2.203728);
   hNCinFV_stack_11->SetBinError(18,2.086311);
   hNCinFV_stack_11->SetBinError(19,2.107682);
   hNCinFV_stack_11->SetBinError(20,2.140959);
   hNCinFV_stack_11->SetBinError(21,2.435442);
   hNCinFV_stack_11->SetBinError(22,2.573159);
   hNCinFV_stack_11->SetBinError(23,2.559458);
   hNCinFV_stack_11->SetBinError(24,2.00984);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,47.9029);
   hnumuCCinFV_stack_12->SetBinContent(2,44.18103);
   hnumuCCinFV_stack_12->SetBinContent(3,26.00793);
   hnumuCCinFV_stack_12->SetBinContent(4,16.99962);
   hnumuCCinFV_stack_12->SetBinContent(5,13.06641);
   hnumuCCinFV_stack_12->SetBinContent(6,19.51508);
   hnumuCCinFV_stack_12->SetBinContent(7,19.52422);
   hnumuCCinFV_stack_12->SetBinContent(8,18.84343);
   hnumuCCinFV_stack_12->SetBinContent(9,18.4272);
   hnumuCCinFV_stack_12->SetBinContent(10,26.43931);
   hnumuCCinFV_stack_12->SetBinContent(11,43.00508);
   hnumuCCinFV_stack_12->SetBinContent(12,38.84259);
   hnumuCCinFV_stack_12->SetBinContent(13,42.58053);
   hnumuCCinFV_stack_12->SetBinContent(14,41.8732);
   hnumuCCinFV_stack_12->SetBinContent(15,27.29674);
   hnumuCCinFV_stack_12->SetBinContent(16,20.23079);
   hnumuCCinFV_stack_12->SetBinContent(17,20.01308);
   hnumuCCinFV_stack_12->SetBinContent(18,20.01901);
   hnumuCCinFV_stack_12->SetBinContent(19,16.30797);
   hnumuCCinFV_stack_12->SetBinContent(20,15.14662);
   hnumuCCinFV_stack_12->SetBinContent(21,18.9298);
   hnumuCCinFV_stack_12->SetBinContent(22,24.767);
   hnumuCCinFV_stack_12->SetBinContent(23,29.17141);
   hnumuCCinFV_stack_12->SetBinContent(24,44.67033);
   hnumuCCinFV_stack_12->SetBinError(1,3.762272);
   hnumuCCinFV_stack_12->SetBinError(2,4.45606);
   hnumuCCinFV_stack_12->SetBinError(3,2.696983);
   hnumuCCinFV_stack_12->SetBinError(4,2.298805);
   hnumuCCinFV_stack_12->SetBinError(5,1.902338);
   hnumuCCinFV_stack_12->SetBinError(6,2.317846);
   hnumuCCinFV_stack_12->SetBinError(7,2.896945);
   hnumuCCinFV_stack_12->SetBinError(8,2.608455);
   hnumuCCinFV_stack_12->SetBinError(9,2.571969);
   hnumuCCinFV_stack_12->SetBinError(10,2.920063);
   hnumuCCinFV_stack_12->SetBinError(11,4.305187);
   hnumuCCinFV_stack_12->SetBinError(12,3.963831);
   hnumuCCinFV_stack_12->SetBinError(13,3.514061);
   hnumuCCinFV_stack_12->SetBinError(14,4.000261);
   hnumuCCinFV_stack_12->SetBinError(15,2.694539);
   hnumuCCinFV_stack_12->SetBinError(16,2.302136);
   hnumuCCinFV_stack_12->SetBinError(17,2.654324);
   hnumuCCinFV_stack_12->SetBinError(18,2.871315);
   hnumuCCinFV_stack_12->SetBinError(19,1.985011);
   hnumuCCinFV_stack_12->SetBinError(20,2.091205);
   hnumuCCinFV_stack_12->SetBinError(21,2.532221);
   hnumuCCinFV_stack_12->SetBinError(22,2.96773);
   hnumuCCinFV_stack_12->SetBinError(23,2.916106);
   hnumuCCinFV_stack_12->SetBinError(24,3.943671);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.23372);
   hnueCCinFV_stack_13->SetBinContent(2,3.184523);
   hnueCCinFV_stack_13->SetBinContent(3,2.440518);
   hnueCCinFV_stack_13->SetBinContent(4,1.91814);
   hnueCCinFV_stack_13->SetBinContent(5,1.658687);
   hnueCCinFV_stack_13->SetBinContent(6,2.206642);
   hnueCCinFV_stack_13->SetBinContent(7,1.960175);
   hnueCCinFV_stack_13->SetBinContent(8,1.047007);
   hnueCCinFV_stack_13->SetBinContent(9,1.865569);
   hnueCCinFV_stack_13->SetBinContent(10,3.527328);
   hnueCCinFV_stack_13->SetBinContent(11,2.121582);
   hnueCCinFV_stack_13->SetBinContent(12,2.256884);
   hnueCCinFV_stack_13->SetBinContent(13,2.051766);
   hnueCCinFV_stack_13->SetBinContent(14,2.693382);
   hnueCCinFV_stack_13->SetBinContent(15,1.629594);
   hnueCCinFV_stack_13->SetBinContent(16,1.809);
   hnueCCinFV_stack_13->SetBinContent(17,1.027618);
   hnueCCinFV_stack_13->SetBinContent(18,4.325067);
   hnueCCinFV_stack_13->SetBinContent(19,1.469349);
   hnueCCinFV_stack_13->SetBinContent(20,3.210487);
   hnueCCinFV_stack_13->SetBinContent(21,1.027643);
   hnueCCinFV_stack_13->SetBinContent(22,1.179926);
   hnueCCinFV_stack_13->SetBinContent(23,3.575008);
   hnueCCinFV_stack_13->SetBinContent(24,2.795835);
   hnueCCinFV_stack_13->SetBinError(1,0.8491834);
   hnueCCinFV_stack_13->SetBinError(2,1.672349);
   hnueCCinFV_stack_13->SetBinError(3,0.8165792);
   hnueCCinFV_stack_13->SetBinError(4,0.7586341);
   hnueCCinFV_stack_13->SetBinError(5,0.699663);
   hnueCCinFV_stack_13->SetBinError(6,1.613129);
   hnueCCinFV_stack_13->SetBinError(7,0.9206903);
   hnueCCinFV_stack_13->SetBinError(8,0.4691143);
   hnueCCinFV_stack_13->SetBinError(9,0.6809164);
   hnueCCinFV_stack_13->SetBinError(10,1.297343);
   hnueCCinFV_stack_13->SetBinError(11,0.6755899);
   hnueCCinFV_stack_13->SetBinError(12,0.7898244);
   hnueCCinFV_stack_13->SetBinError(13,0.6601708);
   hnueCCinFV_stack_13->SetBinError(14,1.073428);
   hnueCCinFV_stack_13->SetBinError(15,0.6804805);
   hnueCCinFV_stack_13->SetBinError(16,0.7001345);
   hnueCCinFV_stack_13->SetBinError(17,0.4615909);
   hnueCCinFV_stack_13->SetBinError(18,1.53377);
   hnueCCinFV_stack_13->SetBinError(19,0.6702839);
   hnueCCinFV_stack_13->SetBinError(20,1.469494);
   hnueCCinFV_stack_13->SetBinError(21,0.4941397);
   hnueCCinFV_stack_13->SetBinError(22,0.5460521);
   hnueCCinFV_stack_13->SetBinError(23,1.427844);
   hnueCCinFV_stack_13->SetBinError(24,1.025364);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__2->SetBinContent(1,340.5524);
   hmcerror__2->SetBinContent(2,343.4936);
   hmcerror__2->SetBinContent(3,332.4152);
   hmcerror__2->SetBinContent(4,335.6451);
   hmcerror__2->SetBinContent(5,266.2893);
   hmcerror__2->SetBinContent(6,276.027);
   hmcerror__2->SetBinContent(7,281.9611);
   hmcerror__2->SetBinContent(8,274.7571);
   hmcerror__2->SetBinContent(9,301.2166);
   hmcerror__2->SetBinContent(10,295.4931);
   hmcerror__2->SetBinContent(11,323.4842);
   hmcerror__2->SetBinContent(12,298.5204);
   hmcerror__2->SetBinContent(13,308.6859);
   hmcerror__2->SetBinContent(14,321.2114);
   hmcerror__2->SetBinContent(15,330.1924);
   hmcerror__2->SetBinContent(16,299.6415);
   hmcerror__2->SetBinContent(17,294.8589);
   hmcerror__2->SetBinContent(18,275.558);
   hmcerror__2->SetBinContent(19,278.6797);
   hmcerror__2->SetBinContent(20,283.8603);
   hmcerror__2->SetBinContent(21,317.7626);
   hmcerror__2->SetBinContent(22,315.3208);
   hmcerror__2->SetBinContent(23,324.088);
   hmcerror__2->SetBinContent(24,314.5908);
   hmcerror__2->SetBinError(1,89.66883);
   hmcerror__2->SetBinError(2,92.09079);
   hmcerror__2->SetBinError(3,84.09546);
   hmcerror__2->SetBinError(4,84.62944);
   hmcerror__2->SetBinError(5,67.87959);
   hmcerror__2->SetBinError(6,65.54345);
   hmcerror__2->SetBinError(7,71.42736);
   hmcerror__2->SetBinError(8,71.63407);
   hmcerror__2->SetBinError(9,82.57017);
   hmcerror__2->SetBinError(10,80.3801);
   hmcerror__2->SetBinError(11,87.40362);
   hmcerror__2->SetBinError(12,78.74114);
   hmcerror__2->SetBinError(13,81.21801);
   hmcerror__2->SetBinError(14,81.1587);
   hmcerror__2->SetBinError(15,84.4457);
   hmcerror__2->SetBinError(16,75.85517);
   hmcerror__2->SetBinError(17,73.26116);
   hmcerror__2->SetBinError(18,77.97841);
   hmcerror__2->SetBinError(19,68.8166);
   hmcerror__2->SetBinError(20,69.68878);
   hmcerror__2->SetBinError(21,79.77393);
   hmcerror__2->SetBinError(22,80.85873);
   hmcerror__2->SetBinError(23,86.47237);
   hmcerror__2->SetBinError(24,79.40891);
   hmcerror__2->SetBinError(25,0.3895343);
   hmcerror__2->SetEntries(7241.585);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[24] = {
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
   Double_t _fy3001[24] = {
   324,
   298,
   285,
   269,
   295,
   258,
   251,
   233,
   250,
   254,
   249,
   275,
   292,
   272,
   319,
   268,
   237,
   256,
   246,
   241,
   270,
   271,
   260,
   271};
   Double_t _felx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3001[24] = {
   18,
   17.26268,
   16.88194,
   16.40122,
   17.17556,
   16.06238,
   15.84298,
   15.26434,
   15.81139,
   15.93738,
   15.77973,
   16.58312,
   17.08801,
   16.49242,
   17.86057,
   16.37071,
   15.3948,
   16,
   15.68439,
   15.52417,
   16.43168,
   16.46208,
   16.12452,
   16.46208};
   Double_t _fehx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3001[24] = {
   18,
   17.26268,
   16.88194,
   16.40122,
   17.17556,
   16.06238,
   15.84298,
   15.26434,
   15.81139,
   15.93738,
   15.77973,
   16.58312,
   17.08801,
   16.49242,
   17.86057,
   16.37071,
   15.3948,
   16,
   15.68439,
   15.52417,
   16.43168,
   16.46208,
   16.12452,
   16.46208};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(205.3092);
   Graph_Graph3001->SetMaximum(354.4264);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 614.8","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.4","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3002[24] = {
   0.263304,
   0.2681005,
   0.2529832,
   0.2521396,
   0.2549092,
   0.237453,
   0.2533235,
   0.2607178,
   0.2741222,
   0.2720202,
   0.2701944,
   0.2637714,
   0.2631089,
   0.2526645,
   0.2557469,
   0.2531531,
   0.2484617,
   0.2829837,
   0.246938,
   0.2455038,
   0.2510488,
   0.2564332,
   0.2668175,
   0.2524197};
   Double_t _fehx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3002[24] = {
   0.263304,
   0.2681005,
   0.2529832,
   0.2521396,
   0.2549092,
   0.237453,
   0.2533235,
   0.2607178,
   0.2741222,
   0.2720202,
   0.2701944,
   0.2637714,
   0.2631089,
   0.2526645,
   0.2557469,
   0.2531531,
   0.2484617,
   0.2829837,
   0.246938,
   0.2455038,
   0.2510488,
   0.2564332,
   0.2668175,
   0.2524197};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[24] = {
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
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3003[24] = {
   0.2361149,
   0.2394855,
   0.2394997,
   0.2333798,
   0.2372227,
   0.2219024,
   0.2293688,
   0.2408972,
   0.2400561,
   0.2400804,
   0.2399707,
   0.2417758,
   0.2339977,
   0.2333805,
   0.2389994,
   0.2327891,
   0.2313942,
   0.2197996,
   0.215505,
   0.2265549,
   0.2360297,
   0.2410915,
   0.2410284,
   0.2359411};
   Double_t _fehx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3003[24] = {
   0.2361149,
   0.2394855,
   0.2394997,
   0.2333798,
   0.2372227,
   0.2219024,
   0.2293688,
   0.2408972,
   0.2400561,
   0.2400804,
   0.2399707,
   0.2417758,
   0.2339977,
   0.2333805,
   0.2389994,
   0.2327891,
   0.2313942,
   0.2197996,
   0.215505,
   0.2265549,
   0.2360297,
   0.2410915,
   0.2410284,
   0.2359411};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[24] = {
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
   Double_t _fy3004[24] = {
   0.9513954,
   0.8675562,
   0.8573615,
   0.8014417,
   1.107818,
   0.9346911,
   0.8901937,
   0.8480218,
   0.8299674,
   0.8595802,
   0.769744,
   0.9212099,
   0.9459455,
   0.8467944,
   0.9661034,
   0.894402,
   0.8037741,
   0.929024,
   0.8827339,
   0.8490093,
   0.8496908,
   0.8594421,
   0.8022511,
   0.8614365};
   Double_t _felx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3004[24] = {
   0.0528553,
   0.05025618,
   0.05078571,
   0.04886476,
   0.06449963,
   0.05819133,
   0.05618853,
   0.05555576,
   0.05249175,
   0.05393486,
   0.04878055,
   0.05555105,
   0.05535727,
   0.05134446,
   0.0540914,
   0.0546343,
   0.05221074,
   0.058064,
   0.05628106,
   0.0546895,
   0.05171054,
   0.05220739,
   0.0497535,
   0.05232854};
   Double_t _fehx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3004[24] = {
   0.0528553,
   0.05025618,
   0.05078571,
   0.04886476,
   0.06449963,
   0.05819133,
   0.05618853,
   0.05555576,
   0.05249175,
   0.05393486,
   0.04878055,
   0.05555105,
   0.05535727,
   0.05134446,
   0.0540914,
   0.0546343,
   0.05221074,
   0.058064,
   0.05628106,
   0.0546895,
   0.05171054,
   0.05220739,
   0.0497535,
   0.05232854};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.6758281);
   Graph_Graph3004->SetMaximum(1.217453);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
