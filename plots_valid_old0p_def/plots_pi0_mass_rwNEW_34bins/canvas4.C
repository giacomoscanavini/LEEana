#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 18:13:02 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-61.53846,-7.4,451.2821,818.2842);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__10->SetBinContent(1,81.61568);
   hmc__10->SetBinContent(2,124.3754);
   hmc__10->SetBinContent(3,157.0651);
   hmc__10->SetBinContent(4,165.9673);
   hmc__10->SetBinContent(5,169.4333);
   hmc__10->SetBinContent(6,190.4464);
   hmc__10->SetBinContent(7,205.5491);
   hmc__10->SetBinContent(8,205.0755);
   hmc__10->SetBinContent(9,239.7919);
   hmc__10->SetBinContent(10,294.5472);
   hmc__10->SetBinContent(11,328.4003);
   hmc__10->SetBinContent(12,347.9372);
   hmc__10->SetBinContent(13,328.6719);
   hmc__10->SetBinContent(14,227.6913);
   hmc__10->SetBinContent(15,143.4384);
   hmc__10->SetBinContent(16,97.74949);
   hmc__10->SetBinContent(17,72.26294);
   hmc__10->SetBinContent(18,56.78638);
   hmc__10->SetBinContent(19,48.67536);
   hmc__10->SetBinContent(20,46.65138);
   hmc__10->SetBinContent(21,41.26563);
   hmc__10->SetBinContent(22,30.66771);
   hmc__10->SetBinContent(23,34.61544);
   hmc__10->SetBinContent(24,27.93565);
   hmc__10->SetBinContent(25,20.82938);
   hmc__10->SetBinContent(26,20.01863);
   hmc__10->SetBinContent(27,22.02607);
   hmc__10->SetBinContent(28,14.24199);
   hmc__10->SetBinContent(29,15.71698);
   hmc__10->SetBinContent(30,17.18457);
   hmc__10->SetBinContent(31,12.74463);
   hmc__10->SetBinContent(32,11.15925);
   hmc__10->SetBinContent(33,8.438105);
   hmc__10->SetBinContent(34,9.666276);
   hmc__10->SetBinContent(35,91.46301);
   hmc__10->SetBinError(1,30.00851);
   hmc__10->SetBinError(2,42.40743);
   hmc__10->SetBinError(3,39.62804);
   hmc__10->SetBinError(4,50.39395);
   hmc__10->SetBinError(5,48.77402);
   hmc__10->SetBinError(6,44.79814);
   hmc__10->SetBinError(7,77.43618);
   hmc__10->SetBinError(8,48.3054);
   hmc__10->SetBinError(9,65.19901);
   hmc__10->SetBinError(10,80.43341);
   hmc__10->SetBinError(11,83.77116);
   hmc__10->SetBinError(12,90.68008);
   hmc__10->SetBinError(13,79.46809);
   hmc__10->SetBinError(14,55.60711);
   hmc__10->SetBinError(15,39.71582);
   hmc__10->SetBinError(16,28.72469);
   hmc__10->SetBinError(17,22.23855);
   hmc__10->SetBinError(18,20.00046);
   hmc__10->SetBinError(19,16.59024);
   hmc__10->SetBinError(20,18.82136);
   hmc__10->SetBinError(21,18.63087);
   hmc__10->SetBinError(22,13.0912);
   hmc__10->SetBinError(23,15.68798);
   hmc__10->SetBinError(24,12.87254);
   hmc__10->SetBinError(25,14.39742);
   hmc__10->SetBinError(26,13.97078);
   hmc__10->SetBinError(27,11.30389);
   hmc__10->SetBinError(28,10.14609);
   hmc__10->SetBinError(29,9.59514);
   hmc__10->SetBinError(30,11.29747);
   hmc__10->SetBinError(31,9.075352);
   hmc__10->SetBinError(32,7.755141);
   hmc__10->SetBinError(33,7.225733);
   hmc__10->SetBinError(34,9.658101);
   hmc__10->SetBinError(35,33.07409);
   hmc__10->SetMinimum(-7.4);
   hmc__10->SetMaximum(777);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",34,0,400);
   hs4_stack_4->SetMinimum(-1.429819e-08);
   hs4_stack_4->SetMaximum(365.3341);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.211565);
   hbadmatch_stack_1->SetBinContent(2,5.893626);
   hbadmatch_stack_1->SetBinContent(3,6.404158);
   hbadmatch_stack_1->SetBinContent(4,4.19976);
   hbadmatch_stack_1->SetBinContent(5,5.364592);
   hbadmatch_stack_1->SetBinContent(6,7.819921);
   hbadmatch_stack_1->SetBinContent(7,9.28178);
   hbadmatch_stack_1->SetBinContent(8,6.858636);
   hbadmatch_stack_1->SetBinContent(9,5.797686);
   hbadmatch_stack_1->SetBinContent(10,5.365291);
   hbadmatch_stack_1->SetBinContent(11,3.811388);
   hbadmatch_stack_1->SetBinContent(12,8.024178);
   hbadmatch_stack_1->SetBinContent(13,5.645232);
   hbadmatch_stack_1->SetBinContent(14,5.90379);
   hbadmatch_stack_1->SetBinContent(15,3.886189);
   hbadmatch_stack_1->SetBinContent(16,2.342597);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,1.465526);
   hbadmatch_stack_1->SetBinContent(19,0.9286332);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,1.369165);
   hbadmatch_stack_1->SetBinContent(22,0.7317812);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.3998213);
   hbadmatch_stack_1->SetBinContent(27,0.3934307);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(33,0.3917402);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.3934307);
   hbadmatch_stack_1->SetBinError(1,1.028201);
   hbadmatch_stack_1->SetBinError(2,1.575975);
   hbadmatch_stack_1->SetBinError(3,1.335169);
   hbadmatch_stack_1->SetBinError(4,1.022582);
   hbadmatch_stack_1->SetBinError(5,1.152964);
   hbadmatch_stack_1->SetBinError(6,1.503275);
   hbadmatch_stack_1->SetBinError(7,1.586384);
   hbadmatch_stack_1->SetBinError(8,1.611619);
   hbadmatch_stack_1->SetBinError(9,1.273593);
   hbadmatch_stack_1->SetBinError(10,1.181206);
   hbadmatch_stack_1->SetBinError(11,1.063082);
   hbadmatch_stack_1->SetBinError(12,2.130069);
   hbadmatch_stack_1->SetBinError(13,1.325165);
   hbadmatch_stack_1->SetBinError(14,1.865944);
   hbadmatch_stack_1->SetBinError(15,1.12447);
   hbadmatch_stack_1->SetBinError(16,0.8097566);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.6209405);
   hbadmatch_stack_1->SetBinError(19,0.48078);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.5737014);
   hbadmatch_stack_1->SetBinError(22,0.5187237);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.3998213);
   hbadmatch_stack_1->SetBinError(27,0.2781975);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(33,0.2770047);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.2781975);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,19.42403);
   hext_stack_2->SetBinContent(2,21.35328);
   hext_stack_2->SetBinContent(3,42.01028);
   hext_stack_2->SetBinContent(4,37.97742);
   hext_stack_2->SetBinContent(5,26.4096);
   hext_stack_2->SetBinContent(6,35.9329);
   hext_stack_2->SetBinContent(7,32.00101);
   hext_stack_2->SetBinContent(8,34.43336);
   hext_stack_2->SetBinContent(9,29.06984);
   hext_stack_2->SetBinContent(10,33.90708);
   hext_stack_2->SetBinContent(11,27.95814);
   hext_stack_2->SetBinContent(12,27.45617);
   hext_stack_2->SetBinContent(13,31.25282);
   hext_stack_2->SetBinContent(14,15.29625);
   hext_stack_2->SetBinContent(15,11.31964);
   hext_stack_2->SetBinContent(16,9.477);
   hext_stack_2->SetBinContent(17,7.295601);
   hext_stack_2->SetBinContent(18,3.972198);
   hext_stack_2->SetBinContent(19,3.401196);
   hext_stack_2->SetBinContent(20,4.460999);
   hext_stack_2->SetBinContent(21,5.248246);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,4.110651);
   hext_stack_2->SetBinContent(24,3.946247);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,1.868591);
   hext_stack_2->SetBinContent(27,1.290409);
   hext_stack_2->SetBinContent(29,1.137595);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,2.032995);
   hext_stack_2->SetBinError(1,2.909316);
   hext_stack_2->SetBinError(2,3.13596);
   hext_stack_2->SetBinError(3,4.531017);
   hext_stack_2->SetBinError(4,4.26699);
   hext_stack_2->SetBinError(5,3.326327);
   hext_stack_2->SetBinError(6,4.014506);
   hext_stack_2->SetBinError(7,3.685941);
   hext_stack_2->SetBinError(8,4.01369);
   hext_stack_2->SetBinError(9,3.564426);
   hext_stack_2->SetBinError(10,3.884385);
   hext_stack_2->SetBinError(11,3.623698);
   hext_stack_2->SetBinError(12,3.342154);
   hext_stack_2->SetBinError(13,3.922339);
   hext_stack_2->SetBinError(14,2.637228);
   hext_stack_2->SetBinError(15,2.271702);
   hext_stack_2->SetBinError(16,1.996425);
   hext_stack_2->SetBinError(17,1.762942);
   hext_stack_2->SetBinError(18,1.288106);
   hext_stack_2->SetBinError(19,1.172056);
   hext_stack_2->SetBinError(20,1.372818);
   hext_stack_2->SetBinError(21,1.638217);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,1.499292);
   hext_stack_2->SetBinError(24,1.458663);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.840497);
   hext_stack_2->SetBinError(27,0.788756);
   hext_stack_2->SetBinError(29,0.6602113);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.9091828);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,2.334814);
   hdirt_stack_3->SetBinContent(2,3.98527);
   hdirt_stack_3->SetBinContent(3,2.692162);
   hdirt_stack_3->SetBinContent(4,3.498134);
   hdirt_stack_3->SetBinContent(5,3.773705);
   hdirt_stack_3->SetBinContent(6,2.691962);
   hdirt_stack_3->SetBinContent(7,4.413614);
   hdirt_stack_3->SetBinContent(8,4.733984);
   hdirt_stack_3->SetBinContent(9,3.956858);
   hdirt_stack_3->SetBinContent(10,3.74448);
   hdirt_stack_3->SetBinContent(11,5.119441);
   hdirt_stack_3->SetBinContent(12,2.73035);
   hdirt_stack_3->SetBinContent(13,4.022917);
   hdirt_stack_3->SetBinContent(14,1.171114);
   hdirt_stack_3->SetBinContent(15,2.685964);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,1.142423);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.7786044);
   hdirt_stack_3->SetBinError(2,1.183304);
   hdirt_stack_3->SetBinError(3,0.8290161);
   hdirt_stack_3->SetBinError(4,0.9774514);
   hdirt_stack_3->SetBinError(5,0.9571685);
   hdirt_stack_3->SetBinError(6,0.7986967);
   hdirt_stack_3->SetBinError(7,1.052999);
   hdirt_stack_3->SetBinError(8,1.177755);
   hdirt_stack_3->SetBinError(9,1.357626);
   hdirt_stack_3->SetBinError(10,1.021055);
   hdirt_stack_3->SetBinError(11,1.269725);
   hdirt_stack_3->SetBinError(12,0.9212356);
   hdirt_stack_3->SetBinError(13,1.26702);
   hdirt_stack_3->SetBinError(14,0.532892);
   hdirt_stack_3->SetBinError(15,0.8942396);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.530726);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetBinError(29,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,16.14925);
   houtFV_stack_4->SetBinContent(2,19.77661);
   houtFV_stack_4->SetBinContent(3,26.41051);
   houtFV_stack_4->SetBinContent(4,25.47415);
   houtFV_stack_4->SetBinContent(5,26.20108);
   houtFV_stack_4->SetBinContent(6,28.97349);
   houtFV_stack_4->SetBinContent(7,33.78431);
   houtFV_stack_4->SetBinContent(8,29.22944);
   houtFV_stack_4->SetBinContent(9,33.93772);
   houtFV_stack_4->SetBinContent(10,38.20174);
   houtFV_stack_4->SetBinContent(11,31.57938);
   houtFV_stack_4->SetBinContent(12,38.75074);
   houtFV_stack_4->SetBinContent(13,37.59535);
   houtFV_stack_4->SetBinContent(14,27.75257);
   houtFV_stack_4->SetBinContent(15,15.19054);
   houtFV_stack_4->SetBinContent(16,10.25466);
   houtFV_stack_4->SetBinContent(17,8.39055);
   houtFV_stack_4->SetBinContent(18,7.228794);
   houtFV_stack_4->SetBinContent(19,7.234741);
   houtFV_stack_4->SetBinContent(20,5.926873);
   houtFV_stack_4->SetBinContent(21,4.693329);
   houtFV_stack_4->SetBinContent(22,4.297917);
   houtFV_stack_4->SetBinContent(23,4.200398);
   houtFV_stack_4->SetBinContent(24,2.04891);
   houtFV_stack_4->SetBinContent(25,2.685843);
   houtFV_stack_4->SetBinContent(26,1.573723);
   houtFV_stack_4->SetBinContent(27,3.172215);
   houtFV_stack_4->SetBinContent(28,0.6803553);
   houtFV_stack_4->SetBinContent(29,1.558661);
   houtFV_stack_4->SetBinContent(30,1.17353);
   houtFV_stack_4->SetBinContent(31,1.123658);
   houtFV_stack_4->SetBinContent(32,0.9818863);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,9.434266);
   houtFV_stack_4->SetBinError(1,2.064991);
   houtFV_stack_4->SetBinError(2,2.192758);
   houtFV_stack_4->SetBinError(3,2.597969);
   houtFV_stack_4->SetBinError(4,2.733022);
   houtFV_stack_4->SetBinError(5,2.593289);
   houtFV_stack_4->SetBinError(6,2.643338);
   houtFV_stack_4->SetBinError(7,2.903457);
   houtFV_stack_4->SetBinError(8,2.73425);
   houtFV_stack_4->SetBinError(9,2.866379);
   houtFV_stack_4->SetBinError(10,3.077454);
   houtFV_stack_4->SetBinError(11,2.795067);
   houtFV_stack_4->SetBinError(12,3.15726);
   houtFV_stack_4->SetBinError(13,3.321254);
   houtFV_stack_4->SetBinError(14,2.686645);
   houtFV_stack_4->SetBinError(15,1.934419);
   houtFV_stack_4->SetBinError(16,1.55647);
   houtFV_stack_4->SetBinError(17,1.408092);
   houtFV_stack_4->SetBinError(18,1.367789);
   houtFV_stack_4->SetBinError(19,1.297891);
   houtFV_stack_4->SetBinError(20,1.236698);
   houtFV_stack_4->SetBinError(21,1.128846);
   houtFV_stack_4->SetBinError(22,1.018842);
   houtFV_stack_4->SetBinError(23,1.086372);
   houtFV_stack_4->SetBinError(24,0.7064057);
   houtFV_stack_4->SetBinError(25,0.7970186);
   houtFV_stack_4->SetBinError(26,0.5563951);
   houtFV_stack_4->SetBinError(27,0.9110337);
   houtFV_stack_4->SetBinError(28,0.4810838);
   houtFV_stack_4->SetBinError(29,0.6036445);
   houtFV_stack_4->SetBinError(30,0.4790957);
   houtFV_stack_4->SetBinError(31,0.5188295);
   houtFV_stack_4->SetBinError(32,0.4391155);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.608984);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.449976);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.761116);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.854858);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.081802);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.275438);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.09342);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.847224);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.547724);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.282581);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,8.489433);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,9.13247);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,12.06499);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,11.3223);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,8.448252);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.217829);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.998598);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.603094);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.172472);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.102222);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.380558);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.296858);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,2.077562);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4071111);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.560441);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.41265);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6021222);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5739927);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5153993);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6204275);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7486427);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7010771);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9118939);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.98336);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.222236);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.085991);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.9429498);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.823058);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5603252);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4204368);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4046342);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3684702);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3962917);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3933343);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.4719735);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9339901);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.018354);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.10239);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8652359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7242399);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3344153);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.317295);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4105231);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2994136);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2828126);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.1994106);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,16.27507);
   hNCpi0inFVres_stack_7->SetBinContent(2,33.6321);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.56029);
   hNCpi0inFVres_stack_7->SetBinContent(4,46.37696);
   hNCpi0inFVres_stack_7->SetBinContent(5,52.29385);
   hNCpi0inFVres_stack_7->SetBinContent(6,53.53864);
   hNCpi0inFVres_stack_7->SetBinContent(7,59.51509);
   hNCpi0inFVres_stack_7->SetBinContent(8,64.12839);
   hNCpi0inFVres_stack_7->SetBinContent(9,83.61779);
   hNCpi0inFVres_stack_7->SetBinContent(10,107.5943);
   hNCpi0inFVres_stack_7->SetBinContent(11,134.672);
   hNCpi0inFVres_stack_7->SetBinContent(12,136.4938);
   hNCpi0inFVres_stack_7->SetBinContent(13,128.3023);
   hNCpi0inFVres_stack_7->SetBinContent(14,91.38019);
   hNCpi0inFVres_stack_7->SetBinContent(15,51.11816);
   hNCpi0inFVres_stack_7->SetBinContent(16,32.92279);
   hNCpi0inFVres_stack_7->SetBinContent(17,23.04932);
   hNCpi0inFVres_stack_7->SetBinContent(18,17.31816);
   hNCpi0inFVres_stack_7->SetBinContent(19,14.09453);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.62506);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.8225);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.560507);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.793757);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.590248);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.954845);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.626927);
   hNCpi0inFVres_stack_7->SetBinContent(27,6.388141);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.430716);
   hNCpi0inFVres_stack_7->SetBinContent(29,3.413938);
   hNCpi0inFVres_stack_7->SetBinContent(30,4.295624);
   hNCpi0inFVres_stack_7->SetBinContent(31,3.653588);
   hNCpi0inFVres_stack_7->SetBinContent(32,2.788016);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.986148);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.914402);
   hNCpi0inFVres_stack_7->SetBinContent(35,16.01565);
   hNCpi0inFVres_stack_7->SetBinError(1,1.333095);
   hNCpi0inFVres_stack_7->SetBinError(2,1.91659);
   hNCpi0inFVres_stack_7->SetBinError(3,2.050083);
   hNCpi0inFVres_stack_7->SetBinError(4,2.229664);
   hNCpi0inFVres_stack_7->SetBinError(5,2.389907);
   hNCpi0inFVres_stack_7->SetBinError(6,2.343371);
   hNCpi0inFVres_stack_7->SetBinError(7,2.524073);
   hNCpi0inFVres_stack_7->SetBinError(8,2.572981);
   hNCpi0inFVres_stack_7->SetBinError(9,2.972075);
   hNCpi0inFVres_stack_7->SetBinError(10,3.329971);
   hNCpi0inFVres_stack_7->SetBinError(11,3.795673);
   hNCpi0inFVres_stack_7->SetBinError(12,3.773132);
   hNCpi0inFVres_stack_7->SetBinError(13,3.695325);
   hNCpi0inFVres_stack_7->SetBinError(14,3.15795);
   hNCpi0inFVres_stack_7->SetBinError(15,2.368661);
   hNCpi0inFVres_stack_7->SetBinError(16,1.851744);
   hNCpi0inFVres_stack_7->SetBinError(17,1.618515);
   hNCpi0inFVres_stack_7->SetBinError(18,1.299909);
   hNCpi0inFVres_stack_7->SetBinError(19,1.201169);
   hNCpi0inFVres_stack_7->SetBinError(20,1.229802);
   hNCpi0inFVres_stack_7->SetBinError(21,1.110795);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8568821);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8595657);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9751128);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7750796);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6332079);
   hNCpi0inFVres_stack_7->SetBinError(27,0.9213428);
   hNCpi0inFVres_stack_7->SetBinError(28,0.5768674);
   hNCpi0inFVres_stack_7->SetBinError(29,0.5304098);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7081208);
   hNCpi0inFVres_stack_7->SetBinError(31,0.6465399);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5126865);
   hNCpi0inFVres_stack_7->SetBinError(33,0.6257897);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5982313);
   hNCpi0inFVres_stack_7->SetBinError(35,1.255975);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.467498);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.332668);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.36048);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.262657);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.308415);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.822906);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.80648);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.04446);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.46887);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.90517);
   hNCpi0inFVdis_stack_8->SetBinContent(11,27.45487);
   hNCpi0inFVdis_stack_8->SetBinContent(12,29.21657);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.97989);
   hNCpi0inFVdis_stack_8->SetBinContent(14,18.37887);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.397852);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.249871);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.532442);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.684391);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.665542);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.485356);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.937062);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.713693);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.519058);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.47854);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.351658);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.741762);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.799394);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.087772);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.574362);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.031308);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.086276);
   hNCpi0inFVdis_stack_8->SetBinContent(35,5.967968);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4971412);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8765302);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8830548);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8197794);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9053974);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9315991);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.076211);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.054442);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.332973);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.538483);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.714958);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.788357);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.523759);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.400767);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9836897);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.827145);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7174942);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6641095);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6217853);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6277556);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4084627);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.357569);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3300212);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3911843);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3228677);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4017374);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.4839846);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3307091);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3958819);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3482878);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.3218618);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.8087865);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,6.053749);
   hCCpi0inFV_stack_10->SetBinContent(2,12.98155);
   hCCpi0inFV_stack_10->SetBinContent(3,14.59633);
   hCCpi0inFV_stack_10->SetBinContent(4,15.8126);
   hCCpi0inFV_stack_10->SetBinContent(5,19.34769);
   hCCpi0inFV_stack_10->SetBinContent(6,20.13286);
   hCCpi0inFV_stack_10->SetBinContent(7,25.66247);
   hCCpi0inFV_stack_10->SetBinContent(8,25.92164);
   hCCpi0inFV_stack_10->SetBinContent(9,32.57248);
   hCCpi0inFV_stack_10->SetBinContent(10,46.64622);
   hCCpi0inFV_stack_10->SetBinContent(11,52.45833);
   hCCpi0inFV_stack_10->SetBinContent(12,57.87326);
   hCCpi0inFV_stack_10->SetBinContent(13,55.07696);
   hCCpi0inFV_stack_10->SetBinContent(14,33.02795);
   hCCpi0inFV_stack_10->SetBinContent(15,24.46418);
   hCCpi0inFV_stack_10->SetBinContent(16,15.74136);
   hCCpi0inFV_stack_10->SetBinContent(17,11.88023);
   hCCpi0inFV_stack_10->SetBinContent(18,10.70983);
   hCCpi0inFV_stack_10->SetBinContent(19,8.353383);
   hCCpi0inFV_stack_10->SetBinContent(20,7.662737);
   hCCpi0inFV_stack_10->SetBinContent(21,6.801963);
   hCCpi0inFV_stack_10->SetBinContent(22,5.428337);
   hCCpi0inFV_stack_10->SetBinContent(23,6.77275);
   hCCpi0inFV_stack_10->SetBinContent(24,5.576871);
   hCCpi0inFV_stack_10->SetBinContent(25,4.14661);
   hCCpi0inFV_stack_10->SetBinContent(26,4.938283);
   hCCpi0inFV_stack_10->SetBinContent(27,4.933472);
   hCCpi0inFV_stack_10->SetBinContent(28,4.254807);
   hCCpi0inFV_stack_10->SetBinContent(29,3.709461);
   hCCpi0inFV_stack_10->SetBinContent(30,4.312732);
   hCCpi0inFV_stack_10->SetBinContent(31,1.965463);
   hCCpi0inFV_stack_10->SetBinContent(32,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(33,1.607298);
   hCCpi0inFV_stack_10->SetBinContent(34,3.032487);
   hCCpi0inFV_stack_10->SetBinContent(35,22.95299);
   hCCpi0inFV_stack_10->SetBinError(1,1.256574);
   hCCpi0inFV_stack_10->SetBinError(2,1.792541);
   hCCpi0inFV_stack_10->SetBinError(3,1.921818);
   hCCpi0inFV_stack_10->SetBinError(4,1.985199);
   hCCpi0inFV_stack_10->SetBinError(5,2.184752);
   hCCpi0inFV_stack_10->SetBinError(6,2.219744);
   hCCpi0inFV_stack_10->SetBinError(7,2.549945);
   hCCpi0inFV_stack_10->SetBinError(8,2.626534);
   hCCpi0inFV_stack_10->SetBinError(9,2.851373);
   hCCpi0inFV_stack_10->SetBinError(10,3.415448);
   hCCpi0inFV_stack_10->SetBinError(11,3.662542);
   hCCpi0inFV_stack_10->SetBinError(12,3.789709);
   hCCpi0inFV_stack_10->SetBinError(13,3.752912);
   hCCpi0inFV_stack_10->SetBinError(14,2.823439);
   hCCpi0inFV_stack_10->SetBinError(15,2.485588);
   hCCpi0inFV_stack_10->SetBinError(16,1.942305);
   hCCpi0inFV_stack_10->SetBinError(17,1.740362);
   hCCpi0inFV_stack_10->SetBinError(18,1.594176);
   hCCpi0inFV_stack_10->SetBinError(19,1.490354);
   hCCpi0inFV_stack_10->SetBinError(20,1.428835);
   hCCpi0inFV_stack_10->SetBinError(21,1.256752);
   hCCpi0inFV_stack_10->SetBinError(22,1.144497);
   hCCpi0inFV_stack_10->SetBinError(23,1.401699);
   hCCpi0inFV_stack_10->SetBinError(24,1.178509);
   hCCpi0inFV_stack_10->SetBinError(25,1.075328);
   hCCpi0inFV_stack_10->SetBinError(26,1.084327);
   hCCpi0inFV_stack_10->SetBinError(27,1.145041);
   hCCpi0inFV_stack_10->SetBinError(28,1.039394);
   hCCpi0inFV_stack_10->SetBinError(29,0.9605263);
   hCCpi0inFV_stack_10->SetBinError(30,1.061749);
   hCCpi0inFV_stack_10->SetBinError(31,0.6215361);
   hCCpi0inFV_stack_10->SetBinError(32,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(33,0.6796534);
   hCCpi0inFV_stack_10->SetBinError(34,0.832162);
   hCCpi0inFV_stack_10->SetBinError(35,2.386848);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,4.733375);
   hNCinFV_stack_11->SetBinContent(2,5.176678);
   hNCinFV_stack_11->SetBinContent(3,6.205056);
   hNCinFV_stack_11->SetBinContent(4,10.35336);
   hNCinFV_stack_11->SetBinContent(5,11.91078);
   hNCinFV_stack_11->SetBinContent(6,12.15737);
   hNCinFV_stack_11->SetBinContent(7,11.87383);
   hNCinFV_stack_11->SetBinContent(8,9.666846);
   hNCinFV_stack_11->SetBinContent(9,12.07054);
   hNCinFV_stack_11->SetBinContent(10,12.1384);
   hNCinFV_stack_11->SetBinContent(11,15.58667);
   hNCinFV_stack_11->SetBinContent(12,16.65031);
   hNCinFV_stack_11->SetBinContent(13,14.45855);
   hNCinFV_stack_11->SetBinContent(14,8.649694);
   hNCinFV_stack_11->SetBinContent(15,7.71599);
   hNCinFV_stack_11->SetBinContent(16,7.132606);
   hNCinFV_stack_11->SetBinContent(17,6.289235);
   hNCinFV_stack_11->SetBinContent(18,3.96112);
   hNCinFV_stack_11->SetBinContent(19,5.180059);
   hNCinFV_stack_11->SetBinContent(20,3.174259);
   hNCinFV_stack_11->SetBinContent(21,4.242973);
   hNCinFV_stack_11->SetBinContent(22,2.249007);
   hNCinFV_stack_11->SetBinContent(23,3.766095);
   hNCinFV_stack_11->SetBinContent(24,2.980925);
   hNCinFV_stack_11->SetBinContent(25,1.855576);
   hNCinFV_stack_11->SetBinContent(26,2.04891);
   hNCinFV_stack_11->SetBinContent(27,1.465526);
   hNCinFV_stack_11->SetBinContent(28,1.710423);
   hNCinFV_stack_11->SetBinContent(29,2.250697);
   hNCinFV_stack_11->SetBinContent(30,2.876109);
   hNCinFV_stack_11->SetBinContent(31,1.860647);
   hNCinFV_stack_11->SetBinContent(32,2.737718);
   hNCinFV_stack_11->SetBinContent(33,0.7336084);
   hNCinFV_stack_11->SetBinContent(34,1.467217);
   hNCinFV_stack_11->SetBinContent(35,16.91042);
   hNCinFV_stack_11->SetBinError(1,1.12743);
   hNCinFV_stack_11->SetBinError(2,1.144046);
   hNCinFV_stack_11->SetBinError(3,1.208589);
   hNCinFV_stack_11->SetBinError(4,1.617925);
   hNCinFV_stack_11->SetBinError(5,1.766143);
   hNCinFV_stack_11->SetBinError(6,1.765873);
   hNCinFV_stack_11->SetBinError(7,1.722087);
   hNCinFV_stack_11->SetBinError(8,1.606928);
   hNCinFV_stack_11->SetBinError(9,1.733286);
   hNCinFV_stack_11->SetBinError(10,1.665319);
   hNCinFV_stack_11->SetBinError(11,1.972186);
   hNCinFV_stack_11->SetBinError(12,2.048019);
   hNCinFV_stack_11->SetBinError(13,1.953708);
   hNCinFV_stack_11->SetBinError(14,1.495453);
   hNCinFV_stack_11->SetBinError(15,1.41536);
   hNCinFV_stack_11->SetBinError(16,1.3747);
   hNCinFV_stack_11->SetBinError(17,1.278349);
   hNCinFV_stack_11->SetBinError(18,0.9610635);
   hNCinFV_stack_11->SetBinError(19,1.144624);
   hNCinFV_stack_11->SetBinError(20,0.8768439);
   hNCinFV_stack_11->SetBinError(21,1.037162);
   hNCinFV_stack_11->SetBinError(22,0.7341869);
   hNCinFV_stack_11->SetBinError(23,0.9410676);
   hNCinFV_stack_11->SetBinError(24,0.8552677);
   hNCinFV_stack_11->SetBinError(25,0.6794384);
   hNCinFV_stack_11->SetBinError(26,0.7064057);
   hNCinFV_stack_11->SetBinError(27,0.6209405);
   hNCinFV_stack_11->SetBinError(28,0.6196373);
   hNCinFV_stack_11->SetBinError(29,0.7346377);
   hNCinFV_stack_11->SetBinError(30,0.8993325);
   hNCinFV_stack_11->SetBinError(31,0.6808988);
   hNCinFV_stack_11->SetBinError(32,0.856599);
   hNCinFV_stack_11->SetBinError(33,0.4394482);
   hNCinFV_stack_11->SetBinError(34,0.6214735);
   hNCinFV_stack_11->SetBinError(35,2.049079);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,7.07626);
   hnumuCCinFV_stack_12->SetBinContent(2,8.809849);
   hnumuCCinFV_stack_12->SetBinContent(3,8.457179);
   hnumuCCinFV_stack_12->SetBinContent(4,10.22005);
   hnumuCCinFV_stack_12->SetBinContent(5,11.12128);
   hnumuCCinFV_stack_12->SetBinContent(6,13.83493);
   hnumuCCinFV_stack_12->SetBinContent(7,13.84772);
   hnumuCCinFV_stack_12->SetBinContent(8,12.38309);
   hnumuCCinFV_stack_12->SetBinContent(9,15.98358);
   hnumuCCinFV_stack_12->SetBinContent(10,15.74529);
   hnumuCCinFV_stack_12->SetBinContent(11,17.64429);
   hnumuCCinFV_stack_12->SetBinContent(12,16.86776);
   hnumuCCinFV_stack_12->SetBinContent(13,15.49558);
   hnumuCCinFV_stack_12->SetBinContent(14,16.44926);
   hnumuCCinFV_stack_12->SetBinContent(15,10.30735);
   hnumuCCinFV_stack_12->SetBinContent(16,8.4793);
   hnumuCCinFV_stack_12->SetBinContent(17,6.015422);
   hnumuCCinFV_stack_12->SetBinContent(18,5.636513);
   hnumuCCinFV_stack_12->SetBinContent(19,4.384552);
   hnumuCCinFV_stack_12->SetBinContent(20,4.874421);
   hnumuCCinFV_stack_12->SetBinContent(21,3.045626);
   hnumuCCinFV_stack_12->SetBinContent(22,4.663233);
   hnumuCCinFV_stack_12->SetBinContent(23,3.794151);
   hnumuCCinFV_stack_12->SetBinContent(24,2.681114);
   hnumuCCinFV_stack_12->SetBinContent(25,3.179713);
   hnumuCCinFV_stack_12->SetBinContent(26,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(27,1.663932);
   hnumuCCinFV_stack_12->SetBinContent(28,1.852124);
   hnumuCCinFV_stack_12->SetBinContent(29,1.375317);
   hnumuCCinFV_stack_12->SetBinContent(30,1.758112);
   hnumuCCinFV_stack_12->SetBinContent(31,1.576761);
   hnumuCCinFV_stack_12->SetBinContent(32,1.757318);
   hnumuCCinFV_stack_12->SetBinContent(33,1.26712);
   hnumuCCinFV_stack_12->SetBinContent(34,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(35,12.21862);
   hnumuCCinFV_stack_12->SetBinError(1,1.777009);
   hnumuCCinFV_stack_12->SetBinError(2,2.001983);
   hnumuCCinFV_stack_12->SetBinError(3,1.667986);
   hnumuCCinFV_stack_12->SetBinError(4,1.698945);
   hnumuCCinFV_stack_12->SetBinError(5,1.906021);
   hnumuCCinFV_stack_12->SetBinError(6,2.109876);
   hnumuCCinFV_stack_12->SetBinError(7,2.373829);
   hnumuCCinFV_stack_12->SetBinError(8,1.797514);
   hnumuCCinFV_stack_12->SetBinError(9,2.623151);
   hnumuCCinFV_stack_12->SetBinError(10,2.090079);
   hnumuCCinFV_stack_12->SetBinError(11,2.456771);
   hnumuCCinFV_stack_12->SetBinError(12,2.326169);
   hnumuCCinFV_stack_12->SetBinError(13,2.089891);
   hnumuCCinFV_stack_12->SetBinError(14,2.769623);
   hnumuCCinFV_stack_12->SetBinError(15,1.734883);
   hnumuCCinFV_stack_12->SetBinError(16,1.521745);
   hnumuCCinFV_stack_12->SetBinError(17,1.245131);
   hnumuCCinFV_stack_12->SetBinError(18,1.240198);
   hnumuCCinFV_stack_12->SetBinError(19,1.102075);
   hnumuCCinFV_stack_12->SetBinError(20,1.094356);
   hnumuCCinFV_stack_12->SetBinError(21,0.9109887);
   hnumuCCinFV_stack_12->SetBinError(22,1.182099);
   hnumuCCinFV_stack_12->SetBinError(23,2.307799);
   hnumuCCinFV_stack_12->SetBinError(24,0.8671317);
   hnumuCCinFV_stack_12->SetBinError(25,0.94571);
   hnumuCCinFV_stack_12->SetBinError(26,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(27,0.6518637);
   hnumuCCinFV_stack_12->SetBinError(28,0.6797418);
   hnumuCCinFV_stack_12->SetBinError(29,0.5198233);
   hnumuCCinFV_stack_12->SetBinError(30,0.6952699);
   hnumuCCinFV_stack_12->SetBinError(31,0.611241);
   hnumuCCinFV_stack_12->SetBinError(32,0.6360812);
   hnumuCCinFV_stack_12->SetBinError(33,0.5883944);
   hnumuCCinFV_stack_12->SetBinError(34,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(35,1.734338);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.356388);
   hnueCCinFV_stack_13->SetBinContent(2,3.36562);
   hnueCCinFV_stack_13->SetBinContent(3,2.430127);
   hnueCCinFV_stack_13->SetBinContent(4,1.487184);
   hnueCCinFV_stack_13->SetBinContent(5,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(6,2.667124);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,1.974841);
   hnueCCinFV_stack_13->SetBinContent(9,0.7549087);
   hnueCCinFV_stack_13->SetBinContent(10,0.8479808);
   hnueCCinFV_stack_13->SetBinContent(11,1.909141);
   hnueCCinFV_stack_13->SetBinContent(12,1.209602);
   hnueCCinFV_stack_13->SetBinContent(13,1.361864);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,1.410471);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(23,1.393971);
   hnueCCinFV_stack_13->SetBinContent(25,0.196839);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5008826);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(35,3.207831);
   hnueCCinFV_stack_13->SetBinError(1,1.121856);
   hnueCCinFV_stack_13->SetBinError(2,1.690818);
   hnueCCinFV_stack_13->SetBinError(3,0.8933854);
   hnueCCinFV_stack_13->SetBinError(4,0.845849);
   hnueCCinFV_stack_13->SetBinError(5,0.4383608);
   hnueCCinFV_stack_13->SetBinError(6,1.430043);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.7951725);
   hnueCCinFV_stack_13->SetBinError(9,0.4493869);
   hnueCCinFV_stack_13->SetBinError(10,0.4909786);
   hnueCCinFV_stack_13->SetBinError(11,0.7705845);
   hnueCCinFV_stack_13->SetBinError(12,0.5781583);
   hnueCCinFV_stack_13->SetBinError(13,0.8248735);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.6663699);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.4715374);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(23,0.7125256);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3622357);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(35,1.275576);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__11->SetBinContent(1,81.61568);
   hmcerror__11->SetBinContent(2,124.3754);
   hmcerror__11->SetBinContent(3,157.0651);
   hmcerror__11->SetBinContent(4,165.9673);
   hmcerror__11->SetBinContent(5,169.4333);
   hmcerror__11->SetBinContent(6,190.4464);
   hmcerror__11->SetBinContent(7,205.5491);
   hmcerror__11->SetBinContent(8,205.0755);
   hmcerror__11->SetBinContent(9,239.7919);
   hmcerror__11->SetBinContent(10,294.5472);
   hmcerror__11->SetBinContent(11,328.4003);
   hmcerror__11->SetBinContent(12,347.9372);
   hmcerror__11->SetBinContent(13,328.6719);
   hmcerror__11->SetBinContent(14,227.6913);
   hmcerror__11->SetBinContent(15,143.4384);
   hmcerror__11->SetBinContent(16,97.74949);
   hmcerror__11->SetBinContent(17,72.26294);
   hmcerror__11->SetBinContent(18,56.78638);
   hmcerror__11->SetBinContent(19,48.67536);
   hmcerror__11->SetBinContent(20,46.65138);
   hmcerror__11->SetBinContent(21,41.26563);
   hmcerror__11->SetBinContent(22,30.66771);
   hmcerror__11->SetBinContent(23,34.61544);
   hmcerror__11->SetBinContent(24,27.93565);
   hmcerror__11->SetBinContent(25,20.82938);
   hmcerror__11->SetBinContent(26,20.01863);
   hmcerror__11->SetBinContent(27,22.02607);
   hmcerror__11->SetBinContent(28,14.24199);
   hmcerror__11->SetBinContent(29,15.71698);
   hmcerror__11->SetBinContent(30,17.18457);
   hmcerror__11->SetBinContent(31,12.74463);
   hmcerror__11->SetBinContent(32,11.15925);
   hmcerror__11->SetBinContent(33,8.438105);
   hmcerror__11->SetBinContent(34,9.666276);
   hmcerror__11->SetBinContent(35,91.46301);
   hmcerror__11->SetBinError(1,30.00851);
   hmcerror__11->SetBinError(2,42.40743);
   hmcerror__11->SetBinError(3,39.62804);
   hmcerror__11->SetBinError(4,50.39395);
   hmcerror__11->SetBinError(5,48.77402);
   hmcerror__11->SetBinError(6,44.79814);
   hmcerror__11->SetBinError(7,77.43618);
   hmcerror__11->SetBinError(8,48.3054);
   hmcerror__11->SetBinError(9,65.19901);
   hmcerror__11->SetBinError(10,80.43341);
   hmcerror__11->SetBinError(11,83.77116);
   hmcerror__11->SetBinError(12,90.68008);
   hmcerror__11->SetBinError(13,79.46809);
   hmcerror__11->SetBinError(14,55.60711);
   hmcerror__11->SetBinError(15,39.71582);
   hmcerror__11->SetBinError(16,28.72469);
   hmcerror__11->SetBinError(17,22.23855);
   hmcerror__11->SetBinError(18,20.00046);
   hmcerror__11->SetBinError(19,16.59024);
   hmcerror__11->SetBinError(20,18.82136);
   hmcerror__11->SetBinError(21,18.63087);
   hmcerror__11->SetBinError(22,13.0912);
   hmcerror__11->SetBinError(23,15.68798);
   hmcerror__11->SetBinError(24,12.87254);
   hmcerror__11->SetBinError(25,14.39742);
   hmcerror__11->SetBinError(26,13.97078);
   hmcerror__11->SetBinError(27,11.30389);
   hmcerror__11->SetBinError(28,10.14609);
   hmcerror__11->SetBinError(29,9.59514);
   hmcerror__11->SetBinError(30,11.29747);
   hmcerror__11->SetBinError(31,9.075352);
   hmcerror__11->SetBinError(32,7.755141);
   hmcerror__11->SetBinError(33,7.225733);
   hmcerror__11->SetBinError(34,9.658101);
   hmcerror__11->SetBinError(35,33.07409);
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
   
   Double_t _fx3013[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3013[34] = {
   93,
   127,
   145,
   140,
   182,
   184,
   200,
   227,
   237,
   313,
   305,
   370,
   338,
   182,
   148,
   90,
   66,
   52,
   48,
   36,
   30,
   40,
   38,
   22,
   15,
   21,
   18,
   10,
   16,
   13,
   14,
   13,
   10,
   3};
   Double_t _felx3013[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3013[34] = {
   9.7658,
   11.26943,
   12.04159,
   11.83216,
   13.49074,
   13.56466,
   14.14214,
   15.06652,
   15.3948,
   17.69181,
   17.46425,
   19.23538,
   18.38478,
   13.49074,
   12.16553,
   9.6093,
   8.2509,
   7.3419,
   7.0604,
   6.1381,
   5.6197,
   6.4604,
   6.3013,
   4.8417,
   4.0385,
   4.7354,
   4.4008,
   3.34883,
   4.1628,
   3.77763,
   3.9102,
   3.77763,
   3.34883,
   2.143368};
   Double_t _fehx3013[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3013[34] = {
   9.564,
   11.26943,
   12.04159,
   11.83216,
   13.49074,
   13.56466,
   14.14214,
   15.06652,
   15.3948,
   17.69181,
   17.46425,
   19.23538,
   18.38478,
   13.49074,
   12.16553,
   9.4079,
   8.0483,
   7.1381,
   6.8561,
   5.9318,
   5.4117,
   6.2549,
   6.0955,
   4.6299,
   3.8197,
   4.5229,
   4.1858,
   3.1179,
   3.9454,
   3.5552,
   3.6898,
   3.5552,
   3.1179,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(0.7709688);
   Graph_Graph3013->SetMaximum(428.0733);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3746.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 475.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 496.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1275.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  249.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 556.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 217.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 254.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3014[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3014[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3014[34] = {
   0.3676807,
   0.3409631,
   0.2523032,
   0.3036379,
   0.2878655,
   0.2352271,
   0.3767285,
   0.2355493,
   0.2718983,
   0.2730748,
   0.2550886,
   0.260622,
   0.2417855,
   0.2442215,
   0.2768841,
   0.2938603,
   0.3077448,
   0.3522052,
   0.3408345,
   0.403447,
   0.4514863,
   0.4268723,
   0.4532075,
   0.4607925,
   0.6912072,
   0.6978889,
   0.5132048,
   0.7124065,
   0.6104951,
   0.6574194,
   0.7120923,
   0.6949516,
   0.8563218,
   0.9991543};
   Double_t _fehx3014[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3014[34] = {
   0.3676807,
   0.3409631,
   0.2523032,
   0.3036379,
   0.2878655,
   0.2352271,
   0.3767285,
   0.2355493,
   0.2718983,
   0.2730748,
   0.2550886,
   0.260622,
   0.2417855,
   0.2442215,
   0.2768841,
   0.2938603,
   0.3077448,
   0.3522052,
   0.3408345,
   0.403447,
   0.4514863,
   0.4268723,
   0.4532075,
   0.4607925,
   0.6912072,
   0.6978889,
   0.5132048,
   0.7124065,
   0.6104951,
   0.6574194,
   0.7120923,
   0.6949516,
   0.8563218,
   0.9991543};
   grae = new TGraphAsymmErrors(34,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3015[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3015[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3015[34] = {
   0.1611917,
   0.1863121,
   0.1624596,
   0.1677706,
   0.1780721,
   0.1718816,
   0.183276,
   0.1812588,
   0.1958706,
   0.2003298,
   0.2083576,
   0.2076583,
   0.2032103,
   0.2097185,
   0.2058871,
   0.2177594,
   0.2289362,
   0.236909,
   0.2239637,
   0.2296752,
   0.2441529,
   0.2393847,
   0.2558626,
   0.2560126,
   0.2717578,
   0.2739821,
   0.2541406,
   0.2886039,
   0.2709893,
   0.2729476,
   0.312663,
   0.3095256,
   0.3737081,
   0.3747761};
   Double_t _fehx3015[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3015[34] = {
   0.1611917,
   0.1863121,
   0.1624596,
   0.1677706,
   0.1780721,
   0.1718816,
   0.183276,
   0.1812588,
   0.1958706,
   0.2003298,
   0.2083576,
   0.2076583,
   0.2032103,
   0.2097185,
   0.2058871,
   0.2177594,
   0.2289362,
   0.236909,
   0.2239637,
   0.2296752,
   0.2441529,
   0.2393847,
   0.2558626,
   0.2560126,
   0.2717578,
   0.2739821,
   0.2541406,
   0.2886039,
   0.2709893,
   0.2729476,
   0.312663,
   0.3095256,
   0.3737081,
   0.3747761};
   grae = new TGraphAsymmErrors(34,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
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
   
   Double_t _fx3016[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3016[34] = {
   1.139487,
   1.021102,
   0.9231839,
   0.8435398,
   1.074169,
   0.9661512,
   0.9730037,
   1.106909,
   0.9883571,
   1.062648,
   0.9287447,
   1.06341,
   1.028381,
   0.799328,
   1.031802,
   0.9207209,
   0.9133312,
   0.9157125,
   0.9861252,
   0.7716813,
   0.7269972,
   1.304304,
   1.097776,
   0.7875241,
   0.7201365,
   1.049023,
   0.8172134,
   0.7021488,
   1.018007,
   0.7564926,
   1.098502,
   1.164953,
   1.1851,
   0.3103574};
   Double_t _felx3016[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3016[34] = {
   0.1196559,
   0.09060815,
   0.07666625,
   0.07129213,
   0.07962268,
   0.07122561,
   0.06880175,
   0.07346815,
   0.06420069,
   0.06006441,
   0.05317977,
   0.05528406,
   0.05593656,
   0.05925014,
   0.08481358,
   0.09830537,
   0.1141789,
   0.1292898,
   0.1450508,
   0.1315738,
   0.1361835,
   0.2106581,
   0.1820372,
   0.1733162,
   0.1938848,
   0.2365497,
   0.1997996,
   0.2351377,
   0.26486,
   0.2198269,
   0.3068116,
   0.33852,
   0.3968699,
   0.2217367};
   Double_t _fehx3016[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3016[34] = {
   0.1171834,
   0.09060815,
   0.07666625,
   0.07129213,
   0.07962268,
   0.07122561,
   0.06880175,
   0.07346815,
   0.06420069,
   0.06006441,
   0.05317977,
   0.05528406,
   0.05593656,
   0.05925014,
   0.08481358,
   0.096245,
   0.1113752,
   0.1257009,
   0.1408536,
   0.1271516,
   0.131143,
   0.2039572,
   0.1760919,
   0.1657345,
   0.1833804,
   0.2259346,
   0.1900384,
   0.218923,
   0.2510279,
   0.2068833,
   0.2895181,
   0.3185876,
   0.3695024,
   0.1783748};
   grae = new TGraphAsymmErrors(34,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0.07975862);
   Graph_Graph3016->SetMaximum(1.701201);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
