#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 12:26:07 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.5496,3.957692,392.511);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__13->SetBinContent(1,177.48);
   hmc__13->SetBinContent(2,172.0712);
   hmc__13->SetBinContent(3,162.2525);
   hmc__13->SetBinContent(4,159.7146);
   hmc__13->SetBinContent(5,124.6875);
   hmc__13->SetBinContent(6,135.3224);
   hmc__13->SetBinContent(7,128.8331);
   hmc__13->SetBinContent(8,132.4822);
   hmc__13->SetBinContent(9,142.8993);
   hmc__13->SetBinContent(10,145.3704);
   hmc__13->SetBinContent(11,162.9916);
   hmc__13->SetBinContent(12,146.5138);
   hmc__13->SetBinContent(13,164.5996);
   hmc__13->SetBinContent(14,160.7828);
   hmc__13->SetBinContent(15,158.2677);
   hmc__13->SetBinContent(16,136.5261);
   hmc__13->SetBinContent(17,143.8371);
   hmc__13->SetBinContent(18,130.2884);
   hmc__13->SetBinContent(19,124.0505);
   hmc__13->SetBinContent(20,136.3587);
   hmc__13->SetBinContent(21,147.4043);
   hmc__13->SetBinContent(22,144.7344);
   hmc__13->SetBinContent(23,157.9975);
   hmc__13->SetBinContent(24,168.2403);
   hmc__13->SetBinError(1,56.49454);
   hmc__13->SetBinError(2,57.1468);
   hmc__13->SetBinError(3,56.9878);
   hmc__13->SetBinError(4,56.19721);
   hmc__13->SetBinError(5,45.35507);
   hmc__13->SetBinError(6,45.3019);
   hmc__13->SetBinError(7,43.42869);
   hmc__13->SetBinError(8,48.98054);
   hmc__13->SetBinError(9,50.74004);
   hmc__13->SetBinError(10,49.23868);
   hmc__13->SetBinError(11,63.22048);
   hmc__13->SetBinError(12,51.06838);
   hmc__13->SetBinError(13,51.4101);
   hmc__13->SetBinError(14,56.49439);
   hmc__13->SetBinError(15,59.53307);
   hmc__13->SetBinError(16,49.69606);
   hmc__13->SetBinError(17,52.97164);
   hmc__13->SetBinError(18,73.00673);
   hmc__13->SetBinError(19,40.64847);
   hmc__13->SetBinError(20,48.58181);
   hmc__13->SetBinError(21,53.57588);
   hmc__13->SetBinError(22,51.7803);
   hmc__13->SetBinError(23,54.2427);
   hmc__13->SetBinError(24,52.63894);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-3.5496);
   hmc__13->SetMaximum(372.708);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,-3.15,3.15);
   hs5_stack_5->SetMinimum(-1.244044e-08);
   hs5_stack_5->SetMaximum(186.354);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.144186);
   hbadmatch_stack_1->SetBinContent(2,4.106837);
   hbadmatch_stack_1->SetBinContent(3,3.642143);
   hbadmatch_stack_1->SetBinContent(4,4.783346);
   hbadmatch_stack_1->SetBinContent(5,4.629838);
   hbadmatch_stack_1->SetBinContent(6,2.663237);
   hbadmatch_stack_1->SetBinContent(7,4.11347);
   hbadmatch_stack_1->SetBinContent(8,2.828998);
   hbadmatch_stack_1->SetBinContent(9,4.999903);
   hbadmatch_stack_1->SetBinContent(10,1.123658);
   hbadmatch_stack_1->SetBinContent(11,3.035745);
   hbadmatch_stack_1->SetBinContent(12,3.099711);
   hbadmatch_stack_1->SetBinContent(13,2.714368);
   hbadmatch_stack_1->SetBinContent(14,2.891298);
   hbadmatch_stack_1->SetBinContent(15,1.715495);
   hbadmatch_stack_1->SetBinContent(16,3.893661);
   hbadmatch_stack_1->SetBinContent(17,5.932314);
   hbadmatch_stack_1->SetBinContent(18,2.629946);
   hbadmatch_stack_1->SetBinContent(19,3.58619);
   hbadmatch_stack_1->SetBinContent(20,4.779619);
   hbadmatch_stack_1->SetBinContent(21,2.052291);
   hbadmatch_stack_1->SetBinContent(22,3.233967);
   hbadmatch_stack_1->SetBinContent(23,2.590322);
   hbadmatch_stack_1->SetBinContent(24,2.389532);
   hbadmatch_stack_1->SetBinError(1,1.150695);
   hbadmatch_stack_1->SetBinError(2,1.037297);
   hbadmatch_stack_1->SetBinError(3,1.007776);
   hbadmatch_stack_1->SetBinError(4,1.172665);
   hbadmatch_stack_1->SetBinError(5,1.100564);
   hbadmatch_stack_1->SetBinError(6,0.8347499);
   hbadmatch_stack_1->SetBinError(7,1.438297);
   hbadmatch_stack_1->SetBinError(8,0.7977212);
   hbadmatch_stack_1->SetBinError(9,1.220366);
   hbadmatch_stack_1->SetBinError(10,0.5188295);
   hbadmatch_stack_1->SetBinError(11,0.8685682);
   hbadmatch_stack_1->SetBinError(12,0.9308091);
   hbadmatch_stack_1->SetBinError(13,0.8748699);
   hbadmatch_stack_1->SetBinError(14,0.9430299);
   hbadmatch_stack_1->SetBinError(15,0.6212384);
   hbadmatch_stack_1->SetBinError(16,1.074086);
   hbadmatch_stack_1->SetBinError(17,2.180286);
   hbadmatch_stack_1->SetBinError(18,0.9703156);
   hbadmatch_stack_1->SetBinError(19,0.9515274);
   hbadmatch_stack_1->SetBinError(20,1.15723);
   hbadmatch_stack_1->SetBinError(21,0.7073425);
   hbadmatch_stack_1->SetBinError(22,0.8916048);
   hbadmatch_stack_1->SetBinError(23,0.8263392);
   hbadmatch_stack_1->SetBinError(24,0.8259176);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,14.39802);
   hext_stack_2->SetBinContent(2,8.015008);
   hext_stack_2->SetBinContent(3,13.08449);
   hext_stack_2->SetBinContent(4,14.22208);
   hext_stack_2->SetBinContent(5,7.291193);
   hext_stack_2->SetBinContent(6,21.50327);
   hext_stack_2->SetBinContent(7,17.76173);
   hext_stack_2->SetBinContent(8,12.78163);
   hext_stack_2->SetBinContent(9,9.533251);
   hext_stack_2->SetBinContent(10,10.58587);
   hext_stack_2->SetBinContent(11,7.772812);
   hext_stack_2->SetBinContent(12,4.06158);
   hext_stack_2->SetBinContent(13,8.642262);
   hext_stack_2->SetBinContent(14,6.153597);
   hext_stack_2->SetBinContent(15,7.056177);
   hext_stack_2->SetBinContent(16,6.799621);
   hext_stack_2->SetBinContent(17,14.42397);
   hext_stack_2->SetBinContent(18,12.68507);
   hext_stack_2->SetBinContent(19,20.40321);
   hext_stack_2->SetBinContent(20,16.75106);
   hext_stack_2->SetBinContent(21,13.00229);
   hext_stack_2->SetBinContent(22,8.175003);
   hext_stack_2->SetBinContent(23,5.511983);
   hext_stack_2->SetBinContent(24,16.2782);
   hext_stack_2->SetBinError(1,2.868967);
   hext_stack_2->SetBinError(2,1.855964);
   hext_stack_2->SetBinError(3,2.531913);
   hext_stack_2->SetBinError(4,2.616574);
   hext_stack_2->SetBinError(5,1.724194);
   hext_stack_2->SetBinError(6,3.418661);
   hext_stack_2->SetBinError(7,2.967968);
   hext_stack_2->SetBinError(8,2.387832);
   hext_stack_2->SetBinError(9,2.124685);
   hext_stack_2->SetBinError(10,2.286132);
   hext_stack_2->SetBinError(11,1.843762);
   hext_stack_2->SetBinError(12,1.232114);
   hext_stack_2->SetBinError(13,2.063655);
   hext_stack_2->SetBinError(14,1.592785);
   hext_stack_2->SetBinError(15,1.651211);
   hext_stack_2->SetBinError(16,1.756063);
   hext_stack_2->SetBinError(17,2.786124);
   hext_stack_2->SetBinError(18,2.458466);
   hext_stack_2->SetBinError(19,3.273653);
   hext_stack_2->SetBinError(20,2.774398);
   hext_stack_2->SetBinError(21,2.520018);
   hext_stack_2->SetBinError(22,1.851933);
   hext_stack_2->SetBinError(23,1.457839);
   hext_stack_2->SetBinError(24,2.978477);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2516114);
   hdirt_stack_3->SetBinContent(2,0.7408447);
   hdirt_stack_3->SetBinContent(3,0.7896487);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,0.5570828);
   hdirt_stack_3->SetBinContent(6,1.224989);
   hdirt_stack_3->SetBinContent(7,0.7139341);
   hdirt_stack_3->SetBinContent(8,0.6763744);
   hdirt_stack_3->SetBinContent(9,0.3569671);
   hdirt_stack_3->SetBinContent(10,1.706287);
   hdirt_stack_3->SetBinContent(11,0.185975);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,0.4828655);
   hdirt_stack_3->SetBinContent(15,0.8999509);
   hdirt_stack_3->SetBinContent(17,0.8546016);
   hdirt_stack_3->SetBinContent(18,0.7808852);
   hdirt_stack_3->SetBinContent(19,1.488457);
   hdirt_stack_3->SetBinContent(20,0.3569671);
   hdirt_stack_3->SetBinContent(21,0.8089126);
   hdirt_stack_3->SetBinContent(22,0.4007975);
   hdirt_stack_3->SetBinContent(23,0.7382622);
   hdirt_stack_3->SetBinContent(24,0.8680849);
   hdirt_stack_3->SetBinError(1,0.2516114);
   hdirt_stack_3->SetBinError(2,0.4510433);
   hdirt_stack_3->SetBinError(3,0.4280591);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.4028472);
   hdirt_stack_3->SetBinError(6,0.5499007);
   hdirt_stack_3->SetBinError(7,0.3660028);
   hdirt_stack_3->SetBinError(8,0.4782689);
   hdirt_stack_3->SetBinError(9,0.258803);
   hdirt_stack_3->SetBinError(10,1.037148);
   hdirt_stack_3->SetBinError(11,0.185975);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.3678347);
   hdirt_stack_3->SetBinError(15,0.4999968);
   hdirt_stack_3->SetBinError(17,0.5283099);
   hdirt_stack_3->SetBinError(18,0.4584901);
   hdirt_stack_3->SetBinError(19,0.558675);
   hdirt_stack_3->SetBinError(20,0.258803);
   hdirt_stack_3->SetBinError(21,0.5056012);
   hdirt_stack_3->SetBinError(22,0.4007975);
   hdirt_stack_3->SetBinError(23,0.4495333);
   hdirt_stack_3->SetBinError(24,0.4907823);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,7.457726);
   houtFV_stack_4->SetBinContent(2,8.866321);
   houtFV_stack_4->SetBinContent(3,9.817598);
   houtFV_stack_4->SetBinContent(4,12.092);
   houtFV_stack_4->SetBinContent(5,7.339788);
   houtFV_stack_4->SetBinContent(6,10.91471);
   houtFV_stack_4->SetBinContent(7,7.282222);
   houtFV_stack_4->SetBinContent(8,8.699567);
   houtFV_stack_4->SetBinContent(9,8.053572);
   houtFV_stack_4->SetBinContent(10,8.683218);
   houtFV_stack_4->SetBinContent(11,7.661247);
   houtFV_stack_4->SetBinContent(12,8.157286);
   houtFV_stack_4->SetBinContent(13,7.700283);
   houtFV_stack_4->SetBinContent(14,10.88045);
   houtFV_stack_4->SetBinContent(15,12.22838);
   houtFV_stack_4->SetBinContent(16,9.03259);
   houtFV_stack_4->SetBinContent(17,9.356913);
   houtFV_stack_4->SetBinContent(18,8.59306);
   houtFV_stack_4->SetBinContent(19,6.892172);
   houtFV_stack_4->SetBinContent(20,7.185413);
   houtFV_stack_4->SetBinContent(21,12.48037);
   houtFV_stack_4->SetBinContent(22,7.693934);
   houtFV_stack_4->SetBinContent(23,8.888367);
   houtFV_stack_4->SetBinContent(24,10.4107);
   houtFV_stack_4->SetBinError(1,1.364411);
   houtFV_stack_4->SetBinError(2,1.525536);
   houtFV_stack_4->SetBinError(3,1.614654);
   houtFV_stack_4->SetBinError(4,1.743038);
   houtFV_stack_4->SetBinError(5,1.346852);
   houtFV_stack_4->SetBinError(6,1.631747);
   houtFV_stack_4->SetBinError(7,1.330732);
   houtFV_stack_4->SetBinError(8,1.482136);
   houtFV_stack_4->SetBinError(9,1.407208);
   houtFV_stack_4->SetBinError(10,1.510841);
   houtFV_stack_4->SetBinError(11,1.364615);
   houtFV_stack_4->SetBinError(12,1.401517);
   houtFV_stack_4->SetBinError(13,1.305296);
   houtFV_stack_4->SetBinError(14,1.650293);
   houtFV_stack_4->SetBinError(15,1.783597);
   houtFV_stack_4->SetBinError(16,1.4518);
   houtFV_stack_4->SetBinError(17,1.530286);
   houtFV_stack_4->SetBinError(18,1.507774);
   houtFV_stack_4->SetBinError(19,1.301836);
   houtFV_stack_4->SetBinError(20,1.332684);
   houtFV_stack_4->SetBinError(21,1.858105);
   houtFV_stack_4->SetBinError(22,1.433456);
   houtFV_stack_4->SetBinError(23,1.498704);
   houtFV_stack_4->SetBinError(24,1.631704);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5025361);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2820092);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04832419);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6410357);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.975508);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.268958);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8501219);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8373359);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.8931359);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1771895);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3460456);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3923435);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2770189);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2981109);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3007107);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,63.48208);
   hNCpi0inFVres_stack_7->SetBinContent(2,67.59933);
   hNCpi0inFVres_stack_7->SetBinContent(3,66.44244);
   hNCpi0inFVres_stack_7->SetBinContent(4,70.42158);
   hNCpi0inFVres_stack_7->SetBinContent(5,55.76036);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.57941);
   hNCpi0inFVres_stack_7->SetBinContent(7,54.95393);
   hNCpi0inFVres_stack_7->SetBinContent(8,57.76502);
   hNCpi0inFVres_stack_7->SetBinContent(9,63.92348);
   hNCpi0inFVres_stack_7->SetBinContent(10,61.60041);
   hNCpi0inFVres_stack_7->SetBinContent(11,66.18571);
   hNCpi0inFVres_stack_7->SetBinContent(12,55.77797);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.64709);
   hNCpi0inFVres_stack_7->SetBinContent(14,63.89094);
   hNCpi0inFVres_stack_7->SetBinContent(15,68.50809);
   hNCpi0inFVres_stack_7->SetBinContent(16,61.95469);
   hNCpi0inFVres_stack_7->SetBinContent(17,57.77863);
   hNCpi0inFVres_stack_7->SetBinContent(18,53.63267);
   hNCpi0inFVres_stack_7->SetBinContent(19,48.77141);
   hNCpi0inFVres_stack_7->SetBinContent(20,56.43247);
   hNCpi0inFVres_stack_7->SetBinContent(21,63.62005);
   hNCpi0inFVres_stack_7->SetBinContent(22,65.78797);
   hNCpi0inFVres_stack_7->SetBinContent(23,64.58993);
   hNCpi0inFVres_stack_7->SetBinContent(24,62.52766);
   hNCpi0inFVres_stack_7->SetBinError(1,2.65771);
   hNCpi0inFVres_stack_7->SetBinError(2,2.75064);
   hNCpi0inFVres_stack_7->SetBinError(3,2.633508);
   hNCpi0inFVres_stack_7->SetBinError(4,2.839505);
   hNCpi0inFVres_stack_7->SetBinError(5,2.431594);
   hNCpi0inFVres_stack_7->SetBinError(6,2.338661);
   hNCpi0inFVres_stack_7->SetBinError(7,2.445533);
   hNCpi0inFVres_stack_7->SetBinError(8,2.48222);
   hNCpi0inFVres_stack_7->SetBinError(9,2.638234);
   hNCpi0inFVres_stack_7->SetBinError(10,2.586124);
   hNCpi0inFVres_stack_7->SetBinError(11,2.694409);
   hNCpi0inFVres_stack_7->SetBinError(12,2.416366);
   hNCpi0inFVres_stack_7->SetBinError(13,2.46108);
   hNCpi0inFVres_stack_7->SetBinError(14,2.655927);
   hNCpi0inFVres_stack_7->SetBinError(15,2.760997);
   hNCpi0inFVres_stack_7->SetBinError(16,2.572414);
   hNCpi0inFVres_stack_7->SetBinError(17,2.454389);
   hNCpi0inFVres_stack_7->SetBinError(18,2.436178);
   hNCpi0inFVres_stack_7->SetBinError(19,2.331077);
   hNCpi0inFVres_stack_7->SetBinError(20,2.394565);
   hNCpi0inFVres_stack_7->SetBinError(21,2.58745);
   hNCpi0inFVres_stack_7->SetBinError(22,2.659722);
   hNCpi0inFVres_stack_7->SetBinError(23,2.633373);
   hNCpi0inFVres_stack_7->SetBinError(24,2.627183);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,13.72387);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.63293);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.72892);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.70502);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.20695);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.383738);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.623388);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.3061);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.96317);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.37063);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.90307);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.76679);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.94822);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.0599);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.40791);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.0447);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.7187);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.806543);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.668955);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.56369);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.72926);
   hNCpi0inFVdis_stack_8->SetBinContent(22,12.42618);
   hNCpi0inFVdis_stack_8->SetBinContent(23,14.41756);
   hNCpi0inFVdis_stack_8->SetBinContent(24,12.63311);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.235984);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.108808);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.125127);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.213768);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9950976);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.003375);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.069318);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.034882);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.150018);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.195133);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.269921);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.105263);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.09447);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.115544);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.138624);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.089986);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.05025);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8524802);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9151956);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.182391);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.153876);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.163477);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.288733);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.186062);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,29.32908);
   hCCpi0inFV_stack_10->SetBinContent(2,25.66039);
   hCCpi0inFV_stack_10->SetBinContent(3,21.37165);
   hCCpi0inFV_stack_10->SetBinContent(4,26.08862);
   hCCpi0inFV_stack_10->SetBinContent(5,20.94883);
   hCCpi0inFV_stack_10->SetBinContent(6,13.92466);
   hCCpi0inFV_stack_10->SetBinContent(7,15.95598);
   hCCpi0inFV_stack_10->SetBinContent(8,16.59211);
   hCCpi0inFV_stack_10->SetBinContent(9,21.97465);
   hCCpi0inFV_stack_10->SetBinContent(10,19.6986);
   hCCpi0inFV_stack_10->SetBinContent(11,22.27485);
   hCCpi0inFV_stack_10->SetBinContent(12,24.30422);
   hCCpi0inFV_stack_10->SetBinContent(13,29.0021);
   hCCpi0inFV_stack_10->SetBinContent(14,23.05782);
   hCCpi0inFV_stack_10->SetBinContent(15,23.50606);
   hCCpi0inFV_stack_10->SetBinContent(16,18.64218);
   hCCpi0inFV_stack_10->SetBinContent(17,19.36969);
   hCCpi0inFV_stack_10->SetBinContent(18,19.1825);
   hCCpi0inFV_stack_10->SetBinContent(19,14.84052);
   hCCpi0inFV_stack_10->SetBinContent(20,17.0224);
   hCCpi0inFV_stack_10->SetBinContent(21,20.49854);
   hCCpi0inFV_stack_10->SetBinContent(22,20.36994);
   hCCpi0inFV_stack_10->SetBinContent(23,26.80357);
   hCCpi0inFV_stack_10->SetBinContent(24,25.47338);
   hCCpi0inFV_stack_10->SetBinError(1,2.724411);
   hCCpi0inFV_stack_10->SetBinError(2,2.574659);
   hCCpi0inFV_stack_10->SetBinError(3,2.264752);
   hCCpi0inFV_stack_10->SetBinError(4,2.568438);
   hCCpi0inFV_stack_10->SetBinError(5,2.33433);
   hCCpi0inFV_stack_10->SetBinError(6,1.904186);
   hCCpi0inFV_stack_10->SetBinError(7,2.035124);
   hCCpi0inFV_stack_10->SetBinError(8,2.071654);
   hCCpi0inFV_stack_10->SetBinError(9,2.346448);
   hCCpi0inFV_stack_10->SetBinError(10,2.212971);
   hCCpi0inFV_stack_10->SetBinError(11,2.386683);
   hCCpi0inFV_stack_10->SetBinError(12,2.427942);
   hCCpi0inFV_stack_10->SetBinError(13,2.714995);
   hCCpi0inFV_stack_10->SetBinError(14,2.387317);
   hCCpi0inFV_stack_10->SetBinError(15,2.378695);
   hCCpi0inFV_stack_10->SetBinError(16,2.188784);
   hCCpi0inFV_stack_10->SetBinError(17,2.206094);
   hCCpi0inFV_stack_10->SetBinError(18,2.218681);
   hCCpi0inFV_stack_10->SetBinError(19,1.936636);
   hCCpi0inFV_stack_10->SetBinError(20,1.996583);
   hCCpi0inFV_stack_10->SetBinError(21,2.32242);
   hCCpi0inFV_stack_10->SetBinError(22,2.245972);
   hCCpi0inFV_stack_10->SetBinError(23,2.642987);
   hCCpi0inFV_stack_10->SetBinError(24,2.553478);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,12.13164);
   hNCinFV_stack_11->SetBinContent(2,11.82395);
   hNCinFV_stack_11->SetBinContent(3,16.4927);
   hNCinFV_stack_11->SetBinContent(4,9.771662);
   hNCinFV_stack_11->SetBinContent(5,9.768282);
   hNCinFV_stack_11->SetBinContent(6,9.961616);
   hNCinFV_stack_11->SetBinContent(7,9.391149);
   hNCinFV_stack_11->SetBinContent(8,10.66672);
   hNCinFV_stack_11->SetBinContent(9,10.95365);
   hNCinFV_stack_11->SetBinContent(10,10.34659);
   hNCinFV_stack_11->SetBinContent(11,11.35492);
   hNCinFV_stack_11->SetBinContent(12,12.89436);
   hNCinFV_stack_11->SetBinContent(13,13.09107);
   hNCinFV_stack_11->SetBinContent(14,11.48824);
   hNCinFV_stack_11->SetBinContent(15,14.74209);
   hNCinFV_stack_11->SetBinContent(16,10.54054);
   hNCinFV_stack_11->SetBinContent(17,12.02743);
   hNCinFV_stack_11->SetBinContent(18,9.378231);
   hNCinFV_stack_11->SetBinContent(19,10.10846);
   hNCinFV_stack_11->SetBinContent(20,10.41784);
   hNCinFV_stack_11->SetBinContent(21,12.06885);
   hNCinFV_stack_11->SetBinContent(22,13.27149);
   hNCinFV_stack_11->SetBinContent(23,15.23865);
   hNCinFV_stack_11->SetBinContent(24,9.919588);
   hNCinFV_stack_11->SetBinError(1,1.664523);
   hNCinFV_stack_11->SetBinError(2,1.733561);
   hNCinFV_stack_11->SetBinError(3,2.086433);
   hNCinFV_stack_11->SetBinError(4,1.582688);
   hNCinFV_stack_11->SetBinError(5,1.582269);
   hNCinFV_stack_11->SetBinError(6,1.594035);
   hNCinFV_stack_11->SetBinError(7,1.494717);
   hNCinFV_stack_11->SetBinError(8,1.607388);
   hNCinFV_stack_11->SetBinError(9,1.654613);
   hNCinFV_stack_11->SetBinError(10,1.617106);
   hNCinFV_stack_11->SetBinError(11,1.618587);
   hNCinFV_stack_11->SetBinError(12,1.820095);
   hNCinFV_stack_11->SetBinError(13,1.830694);
   hNCinFV_stack_11->SetBinError(14,1.640998);
   hNCinFV_stack_11->SetBinError(15,1.99241);
   hNCinFV_stack_11->SetBinError(16,1.6885);
   hNCinFV_stack_11->SetBinError(17,1.745446);
   hNCinFV_stack_11->SetBinError(18,1.558046);
   hNCinFV_stack_11->SetBinError(19,1.618424);
   hNCinFV_stack_11->SetBinError(20,1.544462);
   hNCinFV_stack_11->SetBinError(21,1.733095);
   hNCinFV_stack_11->SetBinError(22,1.892655);
   hNCinFV_stack_11->SetBinError(23,1.992263);
   hNCinFV_stack_11->SetBinError(24,1.544437);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,31.57018);
   hnumuCCinFV_stack_12->SetBinContent(2,30.86077);
   hnumuCCinFV_stack_12->SetBinContent(3,15.99361);
   hnumuCCinFV_stack_12->SetBinContent(4,7.742517);
   hnumuCCinFV_stack_12->SetBinContent(5,6.520248);
   hnumuCCinFV_stack_12->SetBinContent(6,9.731898);
   hnumuCCinFV_stack_12->SetBinContent(7,7.957152);
   hnumuCCinFV_stack_12->SetBinContent(8,10.67471);
   hnumuCCinFV_stack_12->SetBinContent(9,8.494207);
   hnumuCCinFV_stack_12->SetBinContent(10,16.10927);
   hnumuCCinFV_stack_12->SetBinContent(11,28.51381);
   hnumuCCinFV_stack_12->SetBinContent(12,25.68856);
   hnumuCCinFV_stack_12->SetBinContent(13,29.55492);
   hnumuCCinFV_stack_12->SetBinContent(14,27.44224);
   hnumuCCinFV_stack_12->SetBinContent(15,15.3314);
   hnumuCCinFV_stack_12->SetBinContent(16,11.28982);
   hnumuCCinFV_stack_12->SetBinContent(17,11.31397);
   hnumuCCinFV_stack_12->SetBinContent(18,13.47546);
   hnumuCCinFV_stack_12->SetBinContent(19,7.466393);
   hnumuCCinFV_stack_12->SetBinContent(20,9.131848);
   hnumuCCinFV_stack_12->SetBinContent(21,9.181186);
   hnumuCCinFV_stack_12->SetBinContent(22,11.59173);
   hnumuCCinFV_stack_12->SetBinContent(23,15.79706);
   hnumuCCinFV_stack_12->SetBinContent(24,25.27231);
   hnumuCCinFV_stack_12->SetBinError(1,3.125295);
   hnumuCCinFV_stack_12->SetBinError(2,4.029333);
   hnumuCCinFV_stack_12->SetBinError(3,2.211857);
   hnumuCCinFV_stack_12->SetBinError(4,1.510011);
   hnumuCCinFV_stack_12->SetBinError(5,1.368074);
   hnumuCCinFV_stack_12->SetBinError(6,1.638294);
   hnumuCCinFV_stack_12->SetBinError(7,1.494121);
   hnumuCCinFV_stack_12->SetBinError(8,1.689632);
   hnumuCCinFV_stack_12->SetBinError(9,1.967968);
   hnumuCCinFV_stack_12->SetBinError(10,2.4109);
   hnumuCCinFV_stack_12->SetBinError(11,3.537889);
   hnumuCCinFV_stack_12->SetBinError(12,2.745178);
   hnumuCCinFV_stack_12->SetBinError(13,2.940718);
   hnumuCCinFV_stack_12->SetBinError(14,3.177843);
   hnumuCCinFV_stack_12->SetBinError(15,2.043368);
   hnumuCCinFV_stack_12->SetBinError(16,1.804167);
   hnumuCCinFV_stack_12->SetBinError(17,2.101548);
   hnumuCCinFV_stack_12->SetBinError(18,2.462486);
   hnumuCCinFV_stack_12->SetBinError(19,1.319783);
   hnumuCCinFV_stack_12->SetBinError(20,1.673445);
   hnumuCCinFV_stack_12->SetBinError(21,1.657868);
   hnumuCCinFV_stack_12->SetBinError(22,1.788606);
   hnumuCCinFV_stack_12->SetBinError(23,2.093719);
   hnumuCCinFV_stack_12->SetBinError(24,2.979207);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.7055822);
   hnueCCinFV_stack_13->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_13->SetBinContent(4,0.7810781);
   hnueCCinFV_stack_13->SetBinContent(5,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(6,2.206642);
   hnueCCinFV_stack_13->SetBinContent(7,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(8,0.4030693);
   hnueCCinFV_stack_13->SetBinContent(9,1.127039);
   hnueCCinFV_stack_13->SetBinContent(10,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(11,1.336411);
   hnueCCinFV_stack_13->SetBinContent(12,0.7907994);
   hnueCCinFV_stack_13->SetBinContent(13,1.262599);
   hnueCCinFV_stack_13->SetBinContent(14,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.8910709);
   hnueCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(18,1.203684);
   hnueCCinFV_stack_13->SetBinContent(19,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(20,0.6719368);
   hnueCCinFV_stack_13->SetBinContent(22,0.8216388);
   hnueCCinFV_stack_13->SetBinContent(23,2.389879);
   hnueCCinFV_stack_13->SetBinContent(24,1.267516);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.4992408);
   hnueCCinFV_stack_13->SetBinError(3,0.3994798);
   hnueCCinFV_stack_13->SetBinError(4,0.4778238);
   hnueCCinFV_stack_13->SetBinError(5,0.4379386);
   hnueCCinFV_stack_13->SetBinError(6,1.613129);
   hnueCCinFV_stack_13->SetBinError(7,0.3688623);
   hnueCCinFV_stack_13->SetBinError(8,0.2851617);
   hnueCCinFV_stack_13->SetBinError(9,0.5201044);
   hnueCCinFV_stack_13->SetBinError(10,0.5197486);
   hnueCCinFV_stack_13->SetBinError(11,0.5498147);
   hnueCCinFV_stack_13->SetBinError(12,0.5593151);
   hnueCCinFV_stack_13->SetBinError(13,0.5307391);
   hnueCCinFV_stack_13->SetBinError(14,0.2502081);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.5252073);
   hnueCCinFV_stack_13->SetBinError(17,0.2770047);
   hnueCCinFV_stack_13->SetBinError(18,0.7503767);
   hnueCCinFV_stack_13->SetBinError(19,0.4810838);
   hnueCCinFV_stack_13->SetBinError(20,0.3900048);
   hnueCCinFV_stack_13->SetBinError(22,0.4120716);
   hnueCCinFV_stack_13->SetBinError(23,1.287318);
   hnueCCinFV_stack_13->SetBinError(24,0.5873469);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__14->SetBinContent(1,177.48);
   hmcerror__14->SetBinContent(2,172.0712);
   hmcerror__14->SetBinContent(3,162.2525);
   hmcerror__14->SetBinContent(4,159.7146);
   hmcerror__14->SetBinContent(5,124.6875);
   hmcerror__14->SetBinContent(6,135.3224);
   hmcerror__14->SetBinContent(7,128.8331);
   hmcerror__14->SetBinContent(8,132.4822);
   hmcerror__14->SetBinContent(9,142.8993);
   hmcerror__14->SetBinContent(10,145.3704);
   hmcerror__14->SetBinContent(11,162.9916);
   hmcerror__14->SetBinContent(12,146.5138);
   hmcerror__14->SetBinContent(13,164.5996);
   hmcerror__14->SetBinContent(14,160.7828);
   hmcerror__14->SetBinContent(15,158.2677);
   hmcerror__14->SetBinContent(16,136.5261);
   hmcerror__14->SetBinContent(17,143.8371);
   hmcerror__14->SetBinContent(18,130.2884);
   hmcerror__14->SetBinContent(19,124.0505);
   hmcerror__14->SetBinContent(20,136.3587);
   hmcerror__14->SetBinContent(21,147.4043);
   hmcerror__14->SetBinContent(22,144.7344);
   hmcerror__14->SetBinContent(23,157.9975);
   hmcerror__14->SetBinContent(24,168.2403);
   hmcerror__14->SetBinError(1,56.49454);
   hmcerror__14->SetBinError(2,57.1468);
   hmcerror__14->SetBinError(3,56.9878);
   hmcerror__14->SetBinError(4,56.19721);
   hmcerror__14->SetBinError(5,45.35507);
   hmcerror__14->SetBinError(6,45.3019);
   hmcerror__14->SetBinError(7,43.42869);
   hmcerror__14->SetBinError(8,48.98054);
   hmcerror__14->SetBinError(9,50.74004);
   hmcerror__14->SetBinError(10,49.23868);
   hmcerror__14->SetBinError(11,63.22048);
   hmcerror__14->SetBinError(12,51.06838);
   hmcerror__14->SetBinError(13,51.4101);
   hmcerror__14->SetBinError(14,56.49439);
   hmcerror__14->SetBinError(15,59.53307);
   hmcerror__14->SetBinError(16,49.69606);
   hmcerror__14->SetBinError(17,52.97164);
   hmcerror__14->SetBinError(18,73.00673);
   hmcerror__14->SetBinError(19,40.64847);
   hmcerror__14->SetBinError(20,48.58181);
   hmcerror__14->SetBinError(21,53.57588);
   hmcerror__14->SetBinError(22,51.7803);
   hmcerror__14->SetBinError(23,54.2427);
   hmcerror__14->SetBinError(24,52.63894);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
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
   Double_t _fy3017[24] = {
   162,
   115,
   110,
   98,
   121,
   89,
   113,
   88,
   111,
   110,
   100,
   130,
   140,
   115,
   127,
   100,
   92,
   101,
   99,
   88,
   98,
   94,
   109,
   111};
   Double_t _felx3017[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3017[24] = {
   12.72792,
   10.72381,
   10.48809,
   10.0209,
   11,
   9.5566,
   10.63015,
   9.5036,
   10.53565,
   10.48809,
   10.1212,
   11.40175,
   11.83216,
   10.72381,
   11.26943,
   10.1212,
   9.7138,
   10.04988,
   10.0712,
   9.5036,
   10.0209,
   9.8173,
   10.44031,
   10.53565};
   Double_t _fehx3017[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3017[24] = {
   12.72792,
   10.72381,
   10.48809,
   9.82,
   11,
   9.3552,
   10.63015,
   9.3021,
   10.53565,
   10.48809,
   9.92,
   11.40175,
   11.83216,
   10.72381,
   11.26943,
   9.92,
   9.513,
   10.04988,
   9.87,
   9.3021,
   9.82,
   9.616,
   10.44031,
   10.53565};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(68.87325);
   Graph_Graph3017->SetMaximum(184.3511);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[24] = {
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
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3018[24] = {
   0.318315,
   0.3321114,
   0.3512291,
   0.3518601,
   0.36375,
   0.3347701,
   0.3370926,
   0.369714,
   0.3550755,
   0.3387119,
   0.3878756,
   0.3485568,
   0.3123343,
   0.3513709,
   0.3761542,
   0.3640042,
   0.3682753,
   0.5603471,
   0.3276767,
   0.3562796,
   0.3634622,
   0.3577609,
   0.3433136,
   0.3128795};
   Double_t _fehx3018[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3018[24] = {
   0.318315,
   0.3321114,
   0.3512291,
   0.3518601,
   0.36375,
   0.3347701,
   0.3370926,
   0.369714,
   0.3550755,
   0.3387119,
   0.3878756,
   0.3485568,
   0.3123343,
   0.3513709,
   0.3761542,
   0.3640042,
   0.3682753,
   0.5603471,
   0.3276767,
   0.3562796,
   0.3634622,
   0.3577609,
   0.3433136,
   0.3128795};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-3.78,3.78);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
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
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3019[24] = {
   0.2909626,
   0.3027759,
   0.3133889,
   0.3086904,
   0.3382528,
   0.2876615,
   0.3112144,
   0.3288155,
   0.3273939,
   0.3123391,
   0.317365,
   0.3122227,
   0.2906515,
   0.3113684,
   0.3307755,
   0.3275383,
   0.3090416,
   0.3103095,
   0.2870472,
   0.3099956,
   0.3284711,
   0.326497,
   0.3151512,
   0.2891973};
   Double_t _fehx3019[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3019[24] = {
   0.2909626,
   0.3027759,
   0.3133889,
   0.3086904,
   0.3382528,
   0.2876615,
   0.3112144,
   0.3288155,
   0.3273939,
   0.3123391,
   0.317365,
   0.3122227,
   0.2906515,
   0.3113684,
   0.3307755,
   0.3275383,
   0.3090416,
   0.3103095,
   0.2870472,
   0.3099956,
   0.3284711,
   0.326497,
   0.3151512,
   0.2891973};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-3.78,3.78);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
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
   Double_t _fy3020[24] = {
   0.912779,
   0.6683281,
   0.6779556,
   0.6135943,
   0.9704264,
   0.6576884,
   0.8771037,
   0.66424,
   0.7767709,
   0.7566878,
   0.6135284,
   0.8872884,
   0.850549,
   0.7152506,
   0.8024377,
   0.7324609,
   0.6396126,
   0.7752033,
   0.7980619,
   0.6453569,
   0.6648381,
   0.6494655,
   0.6898842,
   0.6597707};
   Double_t _felx3020[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3020[24] = {
   0.07171469,
   0.06232191,
   0.06464053,
   0.06274252,
   0.08822058,
   0.07062095,
   0.08251097,
   0.0717349,
   0.07372783,
   0.07214735,
   0.06209644,
   0.07782034,
   0.07188451,
   0.06669746,
   0.07120483,
   0.07413383,
   0.06753336,
   0.07713561,
   0.08118627,
   0.06969561,
   0.06798241,
   0.06782977,
   0.06607892,
   0.06262267};
   Double_t _fehx3020[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3020[24] = {
   0.07171469,
   0.06232191,
   0.06464053,
   0.06148466,
   0.08822058,
   0.06913265,
   0.08251097,
   0.07021394,
   0.07372783,
   0.07214735,
   0.06086202,
   0.07782034,
   0.07188451,
   0.06669746,
   0.07120483,
   0.07266012,
   0.06613733,
   0.07713561,
   0.07956435,
   0.06821789,
   0.0666195,
   0.06643894,
   0.06607892,
   0.06262267};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.5000723);
   Graph_Graph3020->SetMaximum(1.109426);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
