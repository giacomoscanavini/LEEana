#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 14:17:35 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-4.42,3.553846,488.7589);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__16->SetBinContent(1,33.94177);
   hmc__16->SetBinContent(2,114.2014);
   hmc__16->SetBinContent(3,167.8309);
   hmc__16->SetBinContent(4,200.887);
   hmc__16->SetBinContent(5,212.1669);
   hmc__16->SetBinContent(6,219.5652);
   hmc__16->SetBinContent(7,200.0269);
   hmc__16->SetBinContent(8,191.8617);
   hmc__16->SetBinContent(9,187.6971);
   hmc__16->SetBinContent(10,166.5188);
   hmc__16->SetBinContent(11,147.7121);
   hmc__16->SetBinContent(12,147.5497);
   hmc__16->SetBinContent(13,127.3512);
   hmc__16->SetBinContent(14,105.4331);
   hmc__16->SetBinContent(15,110.3423);
   hmc__16->SetBinContent(16,103.289);
   hmc__16->SetBinContent(17,89.36469);
   hmc__16->SetBinContent(18,89.63508);
   hmc__16->SetBinContent(19,84.96114);
   hmc__16->SetBinContent(20,85.11258);
   hmc__16->SetBinContent(21,64.4418);
   hmc__16->SetBinContent(22,54.88266);
   hmc__16->SetBinContent(23,31.39021);
   hmc__16->SetBinContent(24,9.943954);
   hmc__16->SetBinError(1,13.45803);
   hmc__16->SetBinError(2,29.62025);
   hmc__16->SetBinError(3,46.18585);
   hmc__16->SetBinError(4,51.59046);
   hmc__16->SetBinError(5,57.4668);
   hmc__16->SetBinError(6,60.91795);
   hmc__16->SetBinError(7,55.20772);
   hmc__16->SetBinError(8,53.00742);
   hmc__16->SetBinError(9,47.36665);
   hmc__16->SetBinError(10,45.84018);
   hmc__16->SetBinError(11,42.19623);
   hmc__16->SetBinError(12,36.4372);
   hmc__16->SetBinError(13,32.08951);
   hmc__16->SetBinError(14,34.147);
   hmc__16->SetBinError(15,35.07481);
   hmc__16->SetBinError(16,33.21113);
   hmc__16->SetBinError(17,26.89197);
   hmc__16->SetBinError(18,29.40959);
   hmc__16->SetBinError(19,28.52678);
   hmc__16->SetBinError(20,25.83189);
   hmc__16->SetBinError(21,22.59775);
   hmc__16->SetBinError(22,16.25756);
   hmc__16->SetBinError(23,15.65004);
   hmc__16->SetBinError(24,8.438154);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-4.42);
   hmc__16->SetMaximum(464.1);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,3.15);
   hs6_stack_6->SetMinimum(-1.479728e-08);
   hs6_stack_6->SetMaximum(230.5434);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,1.56832);
   hbadmatch_stack_1->SetBinContent(3,2.417332);
   hbadmatch_stack_1->SetBinContent(4,4.116633);
   hbadmatch_stack_1->SetBinContent(5,4.475612);
   hbadmatch_stack_1->SetBinContent(6,5.601099);
   hbadmatch_stack_1->SetBinContent(7,2.882431);
   hbadmatch_stack_1->SetBinContent(8,4.389477);
   hbadmatch_stack_1->SetBinContent(9,6.828699);
   hbadmatch_stack_1->SetBinContent(10,3.687961);
   hbadmatch_stack_1->SetBinContent(11,4.437233);
   hbadmatch_stack_1->SetBinContent(12,3.36799);
   hbadmatch_stack_1->SetBinContent(13,2.7731);
   hbadmatch_stack_1->SetBinContent(14,1.569082);
   hbadmatch_stack_1->SetBinContent(15,2.197444);
   hbadmatch_stack_1->SetBinContent(16,4.446026);
   hbadmatch_stack_1->SetBinContent(17,1.125349);
   hbadmatch_stack_1->SetBinContent(18,1.90291);
   hbadmatch_stack_1->SetBinContent(19,2.561634);
   hbadmatch_stack_1->SetBinContent(20,2.079665);
   hbadmatch_stack_1->SetBinContent(21,0.8628381);
   hbadmatch_stack_1->SetBinContent(22,1.431461);
   hbadmatch_stack_1->SetBinContent(23,1.243857);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.6077486);
   hbadmatch_stack_1->SetBinError(3,0.7889556);
   hbadmatch_stack_1->SetBinError(4,1.046187);
   hbadmatch_stack_1->SetBinError(5,1.0569);
   hbadmatch_stack_1->SetBinError(6,1.27155);
   hbadmatch_stack_1->SetBinError(7,0.876204);
   hbadmatch_stack_1->SetBinError(8,1.07618);
   hbadmatch_stack_1->SetBinError(9,1.997472);
   hbadmatch_stack_1->SetBinError(10,1.083578);
   hbadmatch_stack_1->SetBinError(11,1.08374);
   hbadmatch_stack_1->SetBinError(12,0.9314993);
   hbadmatch_stack_1->SetBinError(13,0.902672);
   hbadmatch_stack_1->SetBinError(14,0.6080599);
   hbadmatch_stack_1->SetBinError(15,0.760276);
   hbadmatch_stack_1->SetBinError(16,1.881674);
   hbadmatch_stack_1->SetBinError(17,0.5194673);
   hbadmatch_stack_1->SetBinError(18,0.7488849);
   hbadmatch_stack_1->SetBinError(19,0.8969657);
   hbadmatch_stack_1->SetBinError(20,0.7155072);
   hbadmatch_stack_1->SetBinError(21,0.4364078);
   hbadmatch_stack_1->SetBinError(22,0.7874159);
   hbadmatch_stack_1->SetBinError(23,0.9339452);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.110787);
   hext_stack_2->SetBinContent(2,9.305417);
   hext_stack_2->SetBinContent(3,10.84961);
   hext_stack_2->SetBinContent(4,13.43484);
   hext_stack_2->SetBinContent(5,15.11308);
   hext_stack_2->SetBinContent(6,17.812);
   hext_stack_2->SetBinContent(7,12.96317);
   hext_stack_2->SetBinContent(8,19.00307);
   hext_stack_2->SetBinContent(9,17.93332);
   hext_stack_2->SetBinContent(10,15.04964);
   hext_stack_2->SetBinContent(11,14.60556);
   hext_stack_2->SetBinContent(12,25.74802);
   hext_stack_2->SetBinContent(13,25.08046);
   hext_stack_2->SetBinContent(14,10.31332);
   hext_stack_2->SetBinContent(15,13.27043);
   hext_stack_2->SetBinContent(16,12.33755);
   hext_stack_2->SetBinContent(17,9.798627);
   hext_stack_2->SetBinContent(18,7.149968);
   hext_stack_2->SetBinContent(19,7.467185);
   hext_stack_2->SetBinContent(20,8.710101);
   hext_stack_2->SetBinContent(21,3.323403);
   hext_stack_2->SetBinContent(22,5.248246);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,1.290409);
   hext_stack_2->SetBinError(1,0.8669371);
   hext_stack_2->SetBinError(2,2.016615);
   hext_stack_2->SetBinError(3,2.160541);
   hext_stack_2->SetBinError(4,2.459133);
   hext_stack_2->SetBinError(5,2.664971);
   hext_stack_2->SetBinError(6,2.720372);
   hext_stack_2->SetBinError(7,2.254594);
   hext_stack_2->SetBinError(8,2.94978);
   hext_stack_2->SetBinError(9,2.954287);
   hext_stack_2->SetBinError(10,2.602826);
   hext_stack_2->SetBinError(11,2.411126);
   hext_stack_2->SetBinError(12,3.613619);
   hext_stack_2->SetBinError(13,3.621472);
   hext_stack_2->SetBinError(14,2.348321);
   hext_stack_2->SetBinError(15,2.434575);
   hext_stack_2->SetBinError(16,2.177285);
   hext_stack_2->SetBinError(17,2.104108);
   hext_stack_2->SetBinError(18,1.649396);
   hext_stack_2->SetBinError(19,1.739811);
   hext_stack_2->SetBinError(20,2.172824);
   hext_stack_2->SetBinError(21,1.20364);
   hext_stack_2->SetBinError(22,1.638217);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.788756);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.1292);
   hdirt_stack_3->SetBinContent(3,1.171413);
   hdirt_stack_3->SetBinContent(4,2.171771);
   hdirt_stack_3->SetBinContent(5,1.765923);
   hdirt_stack_3->SetBinContent(6,1.762802);
   hdirt_stack_3->SetBinContent(7,2.304269);
   hdirt_stack_3->SetBinContent(8,1.538525);
   hdirt_stack_3->SetBinContent(9,4.359627);
   hdirt_stack_3->SetBinContent(10,2.552434);
   hdirt_stack_3->SetBinContent(11,1.382526);
   hdirt_stack_3->SetBinContent(12,1.639789);
   hdirt_stack_3->SetBinContent(13,1.54127);
   hdirt_stack_3->SetBinContent(14,0.8327577);
   hdirt_stack_3->SetBinContent(15,1.208347);
   hdirt_stack_3->SetBinContent(16,2.737151);
   hdirt_stack_3->SetBinContent(17,0.9712972);
   hdirt_stack_3->SetBinContent(18,1.627984);
   hdirt_stack_3->SetBinContent(19,2.869779);
   hdirt_stack_3->SetBinContent(20,0.3569671);
   hdirt_stack_3->SetBinContent(21,0.7139341);
   hdirt_stack_3->SetBinContent(22,0.9968856);
   hdirt_stack_3->SetBinContent(23,0.7759784);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.8051754);
   hdirt_stack_3->SetBinError(3,0.5610561);
   hdirt_stack_3->SetBinError(4,0.7930258);
   hdirt_stack_3->SetBinError(5,0.6596782);
   hdirt_stack_3->SetBinError(6,0.6903778);
   hdirt_stack_3->SetBinError(7,0.8108561);
   hdirt_stack_3->SetBinError(8,0.6694542);
   hdirt_stack_3->SetBinError(9,1.104417);
   hdirt_stack_3->SetBinError(10,1.24563);
   hdirt_stack_3->SetBinError(11,0.6100439);
   hdirt_stack_3->SetBinError(12,0.7124104);
   hdirt_stack_3->SetBinError(13,0.6015139);
   hdirt_stack_3->SetBinError(14,0.4420469);
   hdirt_stack_3->SetBinError(15,0.528378);
   hdirt_stack_3->SetBinError(16,0.9037398);
   hdirt_stack_3->SetBinError(17,0.4684838);
   hdirt_stack_3->SetBinError(18,0.6026798);
   hdirt_stack_3->SetBinError(19,1.037773);
   hdirt_stack_3->SetBinError(20,0.258803);
   hdirt_stack_3->SetBinError(21,0.3660028);
   hdirt_stack_3->SetBinError(22,0.4766528);
   hdirt_stack_3->SetBinError(23,0.458477);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,2.873541);
   houtFV_stack_4->SetBinContent(2,7.758596);
   houtFV_stack_4->SetBinContent(3,13.11414);
   houtFV_stack_4->SetBinContent(4,18.46789);
   houtFV_stack_4->SetBinContent(5,16.61843);
   houtFV_stack_4->SetBinContent(6,21.90863);
   houtFV_stack_4->SetBinContent(7,20.03422);
   houtFV_stack_4->SetBinContent(8,18.97379);
   houtFV_stack_4->SetBinContent(9,15.24505);
   houtFV_stack_4->SetBinContent(10,14.20522);
   houtFV_stack_4->SetBinContent(11,14.51149);
   houtFV_stack_4->SetBinContent(12,16.33061);
   houtFV_stack_4->SetBinContent(13,11.08866);
   houtFV_stack_4->SetBinContent(14,9.882439);
   houtFV_stack_4->SetBinContent(15,12.96236);
   houtFV_stack_4->SetBinContent(16,14.71801);
   houtFV_stack_4->SetBinContent(17,11.59723);
   houtFV_stack_4->SetBinContent(18,12.27233);
   houtFV_stack_4->SetBinContent(19,13.01378);
   houtFV_stack_4->SetBinContent(20,15.31932);
   houtFV_stack_4->SetBinContent(21,10.22279);
   houtFV_stack_4->SetBinContent(22,5.476519);
   houtFV_stack_4->SetBinContent(23,4.679667);
   houtFV_stack_4->SetBinContent(24,0.8770706);
   houtFV_stack_4->SetBinError(1,0.8717657);
   houtFV_stack_4->SetBinError(2,1.381493);
   houtFV_stack_4->SetBinError(3,1.813037);
   houtFV_stack_4->SetBinError(4,2.200948);
   houtFV_stack_4->SetBinError(5,2.010644);
   houtFV_stack_4->SetBinError(6,2.314553);
   houtFV_stack_4->SetBinError(7,2.206781);
   houtFV_stack_4->SetBinError(8,2.227858);
   houtFV_stack_4->SetBinError(9,1.938872);
   houtFV_stack_4->SetBinError(10,1.933801);
   houtFV_stack_4->SetBinError(11,1.98155);
   houtFV_stack_4->SetBinError(12,2.003784);
   houtFV_stack_4->SetBinError(13,1.680289);
   houtFV_stack_4->SetBinError(14,1.489364);
   houtFV_stack_4->SetBinError(15,1.796533);
   houtFV_stack_4->SetBinError(16,1.915496);
   houtFV_stack_4->SetBinError(17,1.636576);
   houtFV_stack_4->SetBinError(18,1.744982);
   houtFV_stack_4->SetBinError(19,1.744351);
   houtFV_stack_4->SetBinError(20,2.068603);
   houtFV_stack_4->SetBinError(21,1.571945);
   houtFV_stack_4->SetBinError(22,1.126747);
   houtFV_stack_4->SetBinError(23,1.08239);
   houtFV_stack_4->SetBinError(24,0.5197486);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.607998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.06695);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,9.18827);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.12109);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,9.133302);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.656258);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.649521);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.800568);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.669446);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.958824);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.413026);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.747666);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.009808);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.828126);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.091348);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7391858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.339376);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.436358);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.618376);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.659726);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.449976);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8629078);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5505148);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8379372);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9841512);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9977992);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9931078);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9159756);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8008874);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.805894);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6788898);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6229317);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4675544);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5828529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5025922);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5042674);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5124972);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2452205);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4633044);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.398251);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4716302);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4445111);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4071111);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2541827);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5430539);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.00424);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4467362);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1881969);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3738879);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2792353);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,12.81529);
   hNCpi0inFVres_stack_7->SetBinContent(2,37.67443);
   hNCpi0inFVres_stack_7->SetBinContent(3,65.71688);
   hNCpi0inFVres_stack_7->SetBinContent(4,79.64502);
   hNCpi0inFVres_stack_7->SetBinContent(5,89.35412);
   hNCpi0inFVres_stack_7->SetBinContent(6,86.94853);
   hNCpi0inFVres_stack_7->SetBinContent(7,82.54729);
   hNCpi0inFVres_stack_7->SetBinContent(8,74.29201);
   hNCpi0inFVres_stack_7->SetBinContent(9,75.51899);
   hNCpi0inFVres_stack_7->SetBinContent(10,68.70808);
   hNCpi0inFVres_stack_7->SetBinContent(11,57.5423);
   hNCpi0inFVres_stack_7->SetBinContent(12,56.16891);
   hNCpi0inFVres_stack_7->SetBinContent(13,47.76647);
   hNCpi0inFVres_stack_7->SetBinContent(14,47.36777);
   hNCpi0inFVres_stack_7->SetBinContent(15,41.55722);
   hNCpi0inFVres_stack_7->SetBinContent(16,38.80572);
   hNCpi0inFVres_stack_7->SetBinContent(17,36.20322);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.79893);
   hNCpi0inFVres_stack_7->SetBinContent(19,31.37034);
   hNCpi0inFVres_stack_7->SetBinContent(20,30.96239);
   hNCpi0inFVres_stack_7->SetBinContent(21,24.41242);
   hNCpi0inFVres_stack_7->SetBinContent(22,19.07821);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.60288);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.043693);
   hNCpi0inFVres_stack_7->SetBinError(1,1.165677);
   hNCpi0inFVres_stack_7->SetBinError(2,1.934394);
   hNCpi0inFVres_stack_7->SetBinError(3,2.623427);
   hNCpi0inFVres_stack_7->SetBinError(4,2.9184);
   hNCpi0inFVres_stack_7->SetBinError(5,3.14824);
   hNCpi0inFVres_stack_7->SetBinError(6,3.034881);
   hNCpi0inFVres_stack_7->SetBinError(7,2.929935);
   hNCpi0inFVres_stack_7->SetBinError(8,2.770519);
   hNCpi0inFVres_stack_7->SetBinError(9,2.894688);
   hNCpi0inFVres_stack_7->SetBinError(10,2.689782);
   hNCpi0inFVres_stack_7->SetBinError(11,2.442214);
   hNCpi0inFVres_stack_7->SetBinError(12,2.46166);
   hNCpi0inFVres_stack_7->SetBinError(13,2.222831);
   hNCpi0inFVres_stack_7->SetBinError(14,2.329351);
   hNCpi0inFVres_stack_7->SetBinError(15,2.116193);
   hNCpi0inFVres_stack_7->SetBinError(16,1.990782);
   hNCpi0inFVres_stack_7->SetBinError(17,1.968253);
   hNCpi0inFVres_stack_7->SetBinError(18,2.002803);
   hNCpi0inFVres_stack_7->SetBinError(19,1.762212);
   hNCpi0inFVres_stack_7->SetBinError(20,1.860317);
   hNCpi0inFVres_stack_7->SetBinError(21,1.56513);
   hNCpi0inFVres_stack_7->SetBinError(22,1.482372);
   hNCpi0inFVres_stack_7->SetBinError(23,1.175127);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6893208);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.52837);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.46139);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.39214);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.12924);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.74887);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.15841);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.54076);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.41824);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.7604);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.35593);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.20174);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.476311);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.701352);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.386468);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.625862);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.692208);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.620709);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.95435);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.752809);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.392854);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.643042);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.624024);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.78544);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.8780218);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6385645);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.104001);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.254322);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.241012);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.300807);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.445662);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.192687);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.456815);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.191627);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.151399);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.167791);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8821356);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.000105);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8159729);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.883422);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8568072);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.760207);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8043631);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6306415);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7222244);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6825587);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6153885);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4019797);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2784203);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.783247);
   hCCpi0inFV_stack_10->SetBinContent(2,18.66325);
   hCCpi0inFV_stack_10->SetBinContent(3,22.82517);
   hCCpi0inFV_stack_10->SetBinContent(4,28.35653);
   hCCpi0inFV_stack_10->SetBinContent(5,29.63728);
   hCCpi0inFV_stack_10->SetBinContent(6,27.27331);
   hCCpi0inFV_stack_10->SetBinContent(7,29.102);
   hCCpi0inFV_stack_10->SetBinContent(8,25.6406);
   hCCpi0inFV_stack_10->SetBinContent(9,23.92591);
   hCCpi0inFV_stack_10->SetBinContent(10,23.01404);
   hCCpi0inFV_stack_10->SetBinContent(11,20.97323);
   hCCpi0inFV_stack_10->SetBinContent(12,17.3425);
   hCCpi0inFV_stack_10->SetBinContent(13,15.28067);
   hCCpi0inFV_stack_10->SetBinContent(14,13.22831);
   hCCpi0inFV_stack_10->SetBinContent(15,13.19803);
   hCCpi0inFV_stack_10->SetBinContent(16,11.97647);
   hCCpi0inFV_stack_10->SetBinContent(17,9.381613);
   hCCpi0inFV_stack_10->SetBinContent(18,11.81807);
   hCCpi0inFV_stack_10->SetBinContent(19,12.79123);
   hCCpi0inFV_stack_10->SetBinContent(20,9.904913);
   hCCpi0inFV_stack_10->SetBinContent(21,9.766591);
   hCCpi0inFV_stack_10->SetBinContent(22,8.460824);
   hCCpi0inFV_stack_10->SetBinContent(23,3.811067);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9818863);
   hCCpi0inFV_stack_10->SetBinError(1,1.109705);
   hCCpi0inFV_stack_10->SetBinError(2,2.209717);
   hCCpi0inFV_stack_10->SetBinError(3,2.346069);
   hCCpi0inFV_stack_10->SetBinError(4,2.733178);
   hCCpi0inFV_stack_10->SetBinError(5,2.662224);
   hCCpi0inFV_stack_10->SetBinError(6,2.573276);
   hCCpi0inFV_stack_10->SetBinError(7,2.682169);
   hCCpi0inFV_stack_10->SetBinError(8,2.504152);
   hCCpi0inFV_stack_10->SetBinError(9,2.454249);
   hCCpi0inFV_stack_10->SetBinError(10,2.395423);
   hCCpi0inFV_stack_10->SetBinError(11,2.273274);
   hCCpi0inFV_stack_10->SetBinError(12,2.104865);
   hCCpi0inFV_stack_10->SetBinError(13,2.030955);
   hCCpi0inFV_stack_10->SetBinError(14,1.78155);
   hCCpi0inFV_stack_10->SetBinError(15,1.848621);
   hCCpi0inFV_stack_10->SetBinError(16,1.718247);
   hCCpi0inFV_stack_10->SetBinError(17,1.558471);
   hCCpi0inFV_stack_10->SetBinError(18,1.692698);
   hCCpi0inFV_stack_10->SetBinError(19,1.841392);
   hCCpi0inFV_stack_10->SetBinError(20,1.5238);
   hCCpi0inFV_stack_10->SetBinError(21,1.58206);
   hCCpi0inFV_stack_10->SetBinError(22,1.41505);
   hCCpi0inFV_stack_10->SetBinError(23,0.9515681);
   hCCpi0inFV_stack_10->SetBinError(24,0.4391155);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.971389);
   hNCinFV_stack_11->SetBinContent(2,9.715029);
   hNCinFV_stack_11->SetBinContent(3,13.67953);
   hNCinFV_stack_11->SetBinContent(4,15.54018);
   hNCinFV_stack_11->SetBinContent(5,14.46132);
   hNCinFV_stack_11->SetBinContent(6,17.56784);
   hNCinFV_stack_11->SetBinContent(7,13.68568);
   hNCinFV_stack_11->SetBinContent(8,9.92466);
   hNCinFV_stack_11->SetBinContent(9,12.9941);
   hNCinFV_stack_11->SetBinContent(10,10.26315);
   hNCinFV_stack_11->SetBinContent(11,11.04047);
   hNCinFV_stack_11->SetBinContent(12,7.574219);
   hNCinFV_stack_11->SetBinContent(13,6.805345);
   hNCinFV_stack_11->SetBinContent(14,7.522655);
   hNCinFV_stack_11->SetBinContent(15,7.18755);
   hNCinFV_stack_11->SetBinContent(16,3.869221);
   hNCinFV_stack_11->SetBinContent(17,6.537388);
   hNCinFV_stack_11->SetBinContent(18,5.423265);
   hNCinFV_stack_11->SetBinContent(19,4.389816);
   hNCinFV_stack_11->SetBinContent(20,4.004838);
   hNCinFV_stack_11->SetBinContent(21,4.490169);
   hNCinFV_stack_11->SetBinContent(22,4.009302);
   hNCinFV_stack_11->SetBinContent(23,3.319412);
   hNCinFV_stack_11->SetBinContent(24,0.9801958);
   hNCinFV_stack_11->SetBinError(1,0.9623598);
   hNCinFV_stack_11->SetBinError(2,1.594335);
   hNCinFV_stack_11->SetBinError(3,1.861953);
   hNCinFV_stack_11->SetBinError(4,1.982547);
   hNCinFV_stack_11->SetBinError(5,1.902543);
   hNCinFV_stack_11->SetBinError(6,2.116998);
   hNCinFV_stack_11->SetBinError(7,1.808561);
   hNCinFV_stack_11->SetBinError(8,1.54508);
   hNCinFV_stack_11->SetBinError(9,1.798177);
   hNCinFV_stack_11->SetBinError(10,1.581875);
   hNCinFV_stack_11->SetBinError(11,1.688719);
   hNCinFV_stack_11->SetBinError(12,1.388121);
   hNCinFV_stack_11->SetBinError(13,1.257279);
   hNCinFV_stack_11->SetBinError(14,1.402095);
   hNCinFV_stack_11->SetBinError(15,1.360932);
   hNCinFV_stack_11->SetBinError(16,0.8986823);
   hNCinFV_stack_11->SetBinError(17,1.331061);
   hNCinFV_stack_11->SetBinError(18,1.143628);
   hNCinFV_stack_11->SetBinError(19,1.074268);
   hNCinFV_stack_11->SetBinError(20,1.039216);
   hNCinFV_stack_11->SetBinError(21,1.12844);
   hNCinFV_stack_11->SetBinError(22,0.939856);
   hNCinFV_stack_11->SetBinError(23,0.9200768);
   hNCinFV_stack_11->SetBinError(24,0.4383608);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.247949);
   hnumuCCinFV_stack_12->SetBinContent(2,8.530945);
   hnumuCCinFV_stack_12->SetBinContent(3,10.72136);
   hnumuCCinFV_stack_12->SetBinContent(4,9.405845);
   hnumuCCinFV_stack_12->SetBinContent(5,13.77258);
   hnumuCCinFV_stack_12->SetBinContent(6,10.27325);
   hnumuCCinFV_stack_12->SetBinContent(7,12.80081);
   hnumuCCinFV_stack_12->SetBinContent(8,11.78407);
   hnumuCCinFV_stack_12->SetBinContent(9,10.60077);
   hnumuCCinFV_stack_12->SetBinContent(10,10.56191);
   hnumuCCinFV_stack_12->SetBinContent(11,8.607471);
   hnumuCCinFV_stack_12->SetBinContent(12,6.106667);
   hnumuCCinFV_stack_12->SetBinContent(13,5.969058);
   hnumuCCinFV_stack_12->SetBinContent(14,6.055043);
   hnumuCCinFV_stack_12->SetBinContent(15,7.704354);
   hnumuCCinFV_stack_12->SetBinContent(16,5.457881);
   hnumuCCinFV_stack_12->SetBinContent(17,6.537351);
   hnumuCCinFV_stack_12->SetBinContent(18,4.137355);
   hnumuCCinFV_stack_12->SetBinContent(19,3.669219);
   hnumuCCinFV_stack_12->SetBinContent(20,5.584434);
   hnumuCCinFV_stack_12->SetBinContent(21,4.03858);
   hnumuCCinFV_stack_12->SetBinContent(22,3.930161);
   hnumuCCinFV_stack_12->SetBinContent(23,1.128407);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,0.5771583);
   hnumuCCinFV_stack_12->SetBinError(2,1.532281);
   hnumuCCinFV_stack_12->SetBinError(3,1.737813);
   hnumuCCinFV_stack_12->SetBinError(4,1.53269);
   hnumuCCinFV_stack_12->SetBinError(5,1.995147);
   hnumuCCinFV_stack_12->SetBinError(6,1.772812);
   hnumuCCinFV_stack_12->SetBinError(7,2.104701);
   hnumuCCinFV_stack_12->SetBinError(8,1.730335);
   hnumuCCinFV_stack_12->SetBinError(9,1.998426);
   hnumuCCinFV_stack_12->SetBinError(10,2.186264);
   hnumuCCinFV_stack_12->SetBinError(11,1.534608);
   hnumuCCinFV_stack_12->SetBinError(12,1.622076);
   hnumuCCinFV_stack_12->SetBinError(13,1.262772);
   hnumuCCinFV_stack_12->SetBinError(14,1.530888);
   hnumuCCinFV_stack_12->SetBinError(15,1.84973);
   hnumuCCinFV_stack_12->SetBinError(16,1.272448);
   hnumuCCinFV_stack_12->SetBinError(17,1.884462);
   hnumuCCinFV_stack_12->SetBinError(18,1.323283);
   hnumuCCinFV_stack_12->SetBinError(19,0.9763009);
   hnumuCCinFV_stack_12->SetBinError(20,1.25887);
   hnumuCCinFV_stack_12->SetBinError(21,1.023529);
   hnumuCCinFV_stack_12->SetBinError(22,0.9794281);
   hnumuCCinFV_stack_12->SetBinError(23,0.512772);
   hnumuCCinFV_stack_12->SetBinError(24,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.4915121);
   hnueCCinFV_stack_13->SetBinContent(2,2.244172);
   hnueCCinFV_stack_13->SetBinContent(3,2.890509);
   hnueCCinFV_stack_13->SetBinContent(4,2.745194);
   hnueCCinFV_stack_13->SetBinContent(5,0.8073545);
   hnueCCinFV_stack_13->SetBinContent(6,3.05996);
   hnueCCinFV_stack_13->SetBinContent(7,2.209694);
   hnueCCinFV_stack_13->SetBinContent(8,1.064543);
   hnueCCinFV_stack_13->SetBinContent(9,1.190851);
   hnueCCinFV_stack_13->SetBinContent(10,1.910451);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,1.447315);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,1.199815);
   hnueCCinFV_stack_13->SetBinContent(16,1.174613);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.6668286);
   hnueCCinFV_stack_13->SetBinContent(19,0.946064);
   hnueCCinFV_stack_13->SetBinContent(20,1.095025);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.023935);
   hnueCCinFV_stack_13->SetBinContent(23,0.6623923);
   hnueCCinFV_stack_13->SetBinError(1,0.4915121);
   hnueCCinFV_stack_13->SetBinError(2,1.155775);
   hnueCCinFV_stack_13->SetBinError(3,1.591356);
   hnueCCinFV_stack_13->SetBinError(4,0.9574489);
   hnueCCinFV_stack_13->SetBinError(5,0.4041151);
   hnueCCinFV_stack_13->SetBinError(6,1.295228);
   hnueCCinFV_stack_13->SetBinError(7,0.888926);
   hnueCCinFV_stack_13->SetBinError(8,0.5572376);
   hnueCCinFV_stack_13->SetBinError(9,0.565802);
   hnueCCinFV_stack_13->SetBinError(10,1.32621);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.6206021);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.7040641);
   hnueCCinFV_stack_13->SetBinError(16,0.5910469);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.471616);
   hnueCCinFV_stack_13->SetBinError(19,0.6187062);
   hnueCCinFV_stack_13->SetBinError(20,0.5761979);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.6303128);
   hnueCCinFV_stack_13->SetBinError(23,0.3872778);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__17->SetBinContent(1,33.94177);
   hmcerror__17->SetBinContent(2,114.2014);
   hmcerror__17->SetBinContent(3,167.8309);
   hmcerror__17->SetBinContent(4,200.887);
   hmcerror__17->SetBinContent(5,212.1669);
   hmcerror__17->SetBinContent(6,219.5652);
   hmcerror__17->SetBinContent(7,200.0269);
   hmcerror__17->SetBinContent(8,191.8617);
   hmcerror__17->SetBinContent(9,187.6971);
   hmcerror__17->SetBinContent(10,166.5188);
   hmcerror__17->SetBinContent(11,147.7121);
   hmcerror__17->SetBinContent(12,147.5497);
   hmcerror__17->SetBinContent(13,127.3512);
   hmcerror__17->SetBinContent(14,105.4331);
   hmcerror__17->SetBinContent(15,110.3423);
   hmcerror__17->SetBinContent(16,103.289);
   hmcerror__17->SetBinContent(17,89.36469);
   hmcerror__17->SetBinContent(18,89.63508);
   hmcerror__17->SetBinContent(19,84.96114);
   hmcerror__17->SetBinContent(20,85.11258);
   hmcerror__17->SetBinContent(21,64.4418);
   hmcerror__17->SetBinContent(22,54.88266);
   hmcerror__17->SetBinContent(23,31.39021);
   hmcerror__17->SetBinContent(24,9.943954);
   hmcerror__17->SetBinError(1,13.45803);
   hmcerror__17->SetBinError(2,29.62025);
   hmcerror__17->SetBinError(3,46.18585);
   hmcerror__17->SetBinError(4,51.59046);
   hmcerror__17->SetBinError(5,57.4668);
   hmcerror__17->SetBinError(6,60.91795);
   hmcerror__17->SetBinError(7,55.20772);
   hmcerror__17->SetBinError(8,53.00742);
   hmcerror__17->SetBinError(9,47.36665);
   hmcerror__17->SetBinError(10,45.84018);
   hmcerror__17->SetBinError(11,42.19623);
   hmcerror__17->SetBinError(12,36.4372);
   hmcerror__17->SetBinError(13,32.08951);
   hmcerror__17->SetBinError(14,34.147);
   hmcerror__17->SetBinError(15,35.07481);
   hmcerror__17->SetBinError(16,33.21113);
   hmcerror__17->SetBinError(17,26.89197);
   hmcerror__17->SetBinError(18,29.40959);
   hmcerror__17->SetBinError(19,28.52678);
   hmcerror__17->SetBinError(20,25.83189);
   hmcerror__17->SetBinError(21,22.59775);
   hmcerror__17->SetBinError(22,16.25756);
   hmcerror__17->SetBinError(23,15.65004);
   hmcerror__17->SetBinError(24,8.438154);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
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
   Double_t _fy3021[24] = {
   32,
   105,
   168,
   220,
   213,
   221,
   208,
   180,
   166,
   162,
   149,
   136,
   117,
   115,
   98,
   107,
   112,
   76,
   83,
   85,
   77,
   60,
   28,
   20};
   Double_t _felx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3021[24] = {
   5.7977,
   10.24695,
   12.96148,
   14.8324,
   14.59452,
   14.86607,
   14.42221,
   13.41641,
   12.8841,
   12.72792,
   12.20656,
   11.6619,
   10.81665,
   10.72381,
   10.0209,
   10.34408,
   10.58301,
   8.8425,
   9.234,
   9.3428,
   8.8995,
   7.8743,
   5.4358,
   4.6266};
   Double_t _fehx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3021[24] = {
   5.5904,
   10.24695,
   12.96148,
   14.8324,
   14.59452,
   14.86607,
   14.42221,
   13.41641,
   12.8841,
   12.72792,
   12.20656,
   11.6619,
   10.81665,
   10.72381,
   9.82,
   10.34408,
   10.58301,
   8.6406,
   9.0323,
   9.1411,
   8.6976,
   7.6713,
   5.2271,
   4.4133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(13.83606);
   Graph_Graph3021->SetMaximum(257.9153);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
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
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3022[24] = {
   0.3965035,
   0.2593685,
   0.2751927,
   0.2568133,
   0.2708566,
   0.2774482,
   0.2760014,
   0.2762793,
   0.2523568,
   0.2752854,
   0.2856653,
   0.2469487,
   0.2519766,
   0.3238736,
   0.3178729,
   0.3215359,
   0.3009239,
   0.3281036,
   0.3357627,
   0.3035026,
   0.3506692,
   0.2962239,
   0.4985643,
   0.8485713};
   Double_t _fehx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3022[24] = {
   0.3965035,
   0.2593685,
   0.2751927,
   0.2568133,
   0.2708566,
   0.2774482,
   0.2760014,
   0.2762793,
   0.2523568,
   0.2752854,
   0.2856653,
   0.2469487,
   0.2519766,
   0.3238736,
   0.3178729,
   0.3215359,
   0.3009239,
   0.3281036,
   0.3357627,
   0.3035026,
   0.3506692,
   0.2962239,
   0.4985643,
   0.8485713};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
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
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3023[24] = {
   0.2445507,
   0.2044333,
   0.2167035,
   0.2151235,
   0.2158261,
   0.2123191,
   0.2235398,
   0.210956,
   0.2210025,
   0.2203528,
   0.2067762,
   0.2109833,
   0.1910088,
   0.2145829,
   0.2158911,
   0.2052595,
   0.2142249,
   0.2224748,
   0.2187177,
   0.2016261,
   0.2125126,
   0.2051345,
   0.2399083,
   0.2826211};
   Double_t _fehx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3023[24] = {
   0.2445507,
   0.2044333,
   0.2167035,
   0.2151235,
   0.2158261,
   0.2123191,
   0.2235398,
   0.210956,
   0.2210025,
   0.2203528,
   0.2067762,
   0.2109833,
   0.1910088,
   0.2145829,
   0.2158911,
   0.2052595,
   0.2142249,
   0.2224748,
   0.2187177,
   0.2016261,
   0.2125126,
   0.2051345,
   0.2399083,
   0.2826211};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
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
   Double_t _fy3024[24] = {
   0.9427912,
   0.9194283,
   1.001007,
   1.095143,
   1.003927,
   1.006535,
   1.03986,
   0.9381758,
   0.8844036,
   0.9728634,
   1.008719,
   0.9217234,
   0.9187196,
   1.090739,
   0.8881456,
   1.035928,
   1.253291,
   0.8478823,
   0.9769173,
   0.9986773,
   1.194877,
   1.093241,
   0.891998,
   2.011272};
   Double_t _felx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3024[24] = {
   0.1708131,
   0.08972701,
   0.0772294,
   0.07383451,
   0.06878793,
   0.06770687,
   0.07210132,
   0.0699275,
   0.06864303,
   0.07643537,
   0.08263746,
   0.07903713,
   0.08493566,
   0.1017119,
   0.09081652,
   0.100147,
   0.1184249,
   0.09864999,
   0.108685,
   0.1097699,
   0.1381014,
   0.1434752,
   0.1731687,
   0.4652676};
   Double_t _fehx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3024[24] = {
   0.1647056,
   0.08972701,
   0.0772294,
   0.07383451,
   0.06878793,
   0.06770687,
   0.07210132,
   0.0699275,
   0.06864303,
   0.07643537,
   0.08263746,
   0.07903713,
   0.08493566,
   0.1017119,
   0.08899582,
   0.100147,
   0.1184249,
   0.09639753,
   0.106311,
   0.1074001,
   0.1349683,
   0.1397764,
   0.1665201,
   0.4438174};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.5452033);
   Graph_Graph3024->SetMaximum(2.628716);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
