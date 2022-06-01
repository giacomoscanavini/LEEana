#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu May 26 18:31:56 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.432302,3.957692,361.4756);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__4->SetBinContent(1,171.6151);
   hmc__4->SetBinContent(2,167.2347);
   hmc__4->SetBinContent(3,155.2298);
   hmc__4->SetBinContent(4,155.5148);
   hmc__4->SetBinContent(5,121.7032);
   hmc__4->SetBinContent(6,130.1407);
   hmc__4->SetBinContent(7,124.5817);
   hmc__4->SetBinContent(8,129.5881);
   hmc__4->SetBinContent(9,138.3026);
   hmc__4->SetBinContent(10,141.124);
   hmc__4->SetBinContent(11,156.8246);
   hmc__4->SetBinContent(12,140.7548);
   hmc__4->SetBinContent(13,158.2992);
   hmc__4->SetBinContent(14,154.7677);
   hmc__4->SetBinContent(15,151.6238);
   hmc__4->SetBinContent(16,131.6916);
   hmc__4->SetBinContent(17,138.4053);
   hmc__4->SetBinContent(18,128.4328);
   hmc__4->SetBinContent(19,120.1393);
   hmc__4->SetBinContent(20,131.8125);
   hmc__4->SetBinContent(21,142.5129);
   hmc__4->SetBinContent(22,138.5904);
   hmc__4->SetBinContent(23,150.8683);
   hmc__4->SetBinContent(24,163.8392);
   hmc__4->SetBinError(1,42.20274);
   hmc__4->SetBinError(2,37.01853);
   hmc__4->SetBinError(3,38.7759);
   hmc__4->SetBinError(4,36.65498);
   hmc__4->SetBinError(5,30.11024);
   hmc__4->SetBinError(6,27.92214);
   hmc__4->SetBinError(7,28.74564);
   hmc__4->SetBinError(8,31.53687);
   hmc__4->SetBinError(9,33.7802);
   hmc__4->SetBinError(10,32.15075);
   hmc__4->SetBinError(11,39.05458);
   hmc__4->SetBinError(12,35.97954);
   hmc__4->SetBinError(13,36.66062);
   hmc__4->SetBinError(14,42.6823);
   hmc__4->SetBinError(15,39.43372);
   hmc__4->SetBinError(16,32.57148);
   hmc__4->SetBinError(17,31.59662);
   hmc__4->SetBinError(18,32.81422);
   hmc__4->SetBinError(19,26.18224);
   hmc__4->SetBinError(20,29.70402);
   hmc__4->SetBinError(21,34.15405);
   hmc__4->SetBinError(22,32.58017);
   hmc__4->SetBinError(23,36.489);
   hmc__4->SetBinError(24,35.55334);
   hmc__4->SetBinError(25,0.4212968);
   hmc__4->SetMinimum(-3.432302);
   hmc__4->SetMaximum(343.2302);
   hmc__4->SetEntries(3396.741);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,-3.15,3.15);
   hs2_stack_2->SetMinimum(-1.244044e-08);
   hs2_stack_2->SetMaximum(180.1959);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
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
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
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

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
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

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
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

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
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

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,77.87489);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,81.23567);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,80.05022);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,83.71184);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,66.84617);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,62.68888);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,64.92574);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,68.68526);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,77.18352);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,75.9894);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,80.77217);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,67.24259);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,71.94373);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,77.92718);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,81.89133);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,75.25473);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,70.13853);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,62.05334);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,58.3056);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,69.65164);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,77.08849);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,78.96695);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,79.77473);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,76.27727);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.936537);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.985968);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.880635);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.092873);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.645685);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.561611);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.67218);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.704634);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.904743);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.866541);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.988498);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.67309);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.696526);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.90472);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.001093);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.819961);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.681642);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.596985);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.522132);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.681379);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.84367);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.91463);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.947738);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.904866);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_7->SetBinContent(1,31.68459);
   hCCpi0inFV_stack_7->SetBinContent(2,27.22904);
   hCCpi0inFV_stack_7->SetBinContent(3,23.62066);
   hCCpi0inFV_stack_7->SetBinContent(4,27.6993);
   hCCpi0inFV_stack_7->SetBinContent(5,21.87577);
   hCCpi0inFV_stack_7->SetBinContent(6,15.72868);
   hCCpi0inFV_stack_7->SetBinContent(7,17.61653);
   hCCpi0inFV_stack_7->SetBinContent(8,18.30422);
   hCCpi0inFV_stack_7->SetBinContent(9,23.29502);
   hCCpi0inFV_stack_7->SetBinContent(10,21.4124);
   hCCpi0inFV_stack_7->SetBinContent(11,24.43196);
   hCCpi0inFV_stack_7->SetBinContent(12,27.43537);
   hCCpi0inFV_stack_7->SetBinContent(13,31.59129);
   hCCpi0inFV_stack_7->SetBinContent(14,26.18559);
   hCCpi0inFV_stack_7->SetBinContent(15,26.97569);
   hCCpi0inFV_stack_7->SetBinContent(16,20.69616);
   hCCpi0inFV_stack_7->SetBinContent(17,22.38926);
   hCCpi0inFV_stack_7->SetBinContent(18,21.77506);
   hCCpi0inFV_stack_7->SetBinContent(19,17.48296);
   hCCpi0inFV_stack_7->SetBinContent(20,18.34447);
   hCCpi0inFV_stack_7->SetBinContent(21,23.4262);
   hCCpi0inFV_stack_7->SetBinContent(22,23.10258);
   hCCpi0inFV_stack_7->SetBinContent(23,27.14374);
   hCCpi0inFV_stack_7->SetBinContent(24,27.52906);
   hCCpi0inFV_stack_7->SetBinError(1,2.807987);
   hCCpi0inFV_stack_7->SetBinError(2,2.633716);
   hCCpi0inFV_stack_7->SetBinError(3,2.380784);
   hCCpi0inFV_stack_7->SetBinError(4,2.65709);
   hCCpi0inFV_stack_7->SetBinError(5,2.383187);
   hCCpi0inFV_stack_7->SetBinError(6,2.031391);
   hCCpi0inFV_stack_7->SetBinError(7,2.136664);
   hCCpi0inFV_stack_7->SetBinError(8,2.16249);
   hCCpi0inFV_stack_7->SetBinError(9,2.411162);
   hCCpi0inFV_stack_7->SetBinError(10,2.298373);
   hCCpi0inFV_stack_7->SetBinError(11,2.473716);
   hCCpi0inFV_stack_7->SetBinError(12,2.589606);
   hCCpi0inFV_stack_7->SetBinError(13,2.83301);
   hCCpi0inFV_stack_7->SetBinError(14,2.551297);
   hCCpi0inFV_stack_7->SetBinError(15,2.56601);
   hCCpi0inFV_stack_7->SetBinError(16,2.300385);
   hCCpi0inFV_stack_7->SetBinError(17,2.398473);
   hCCpi0inFV_stack_7->SetBinError(18,2.361911);
   hCCpi0inFV_stack_7->SetBinError(19,2.089733);
   hCCpi0inFV_stack_7->SetBinError(20,2.072411);
   hCCpi0inFV_stack_7->SetBinError(21,2.482628);
   hCCpi0inFV_stack_7->SetBinError(22,2.403365);
   hCCpi0inFV_stack_7->SetBinError(23,2.664789);
   hCCpi0inFV_stack_7->SetBinError(24,2.649889);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_8->SetBinContent(1,6.266761);
   hNCinFV_stack_8->SetBinContent(2,6.987453);
   hNCinFV_stack_8->SetBinContent(3,9.469983);
   hNCinFV_stack_8->SetBinContent(4,5.571799);
   hNCinFV_stack_8->SetBinContent(5,6.783976);
   hNCinFV_stack_8->SetBinContent(6,4.779866);
   hNCinFV_stack_8->SetBinContent(7,5.139722);
   hNCinFV_stack_8->SetBinContent(8,7.772624);
   hNCinFV_stack_8->SetBinContent(9,6.35697);
   hNCinFV_stack_8->SetBinContent(10,6.10024);
   hNCinFV_stack_8->SetBinContent(11,5.187903);
   hNCinFV_stack_8->SetBinContent(12,7.135379);
   hNCinFV_stack_8->SetBinContent(13,6.790738);
   hNCinFV_stack_8->SetBinContent(14,5.473138);
   hNCinFV_stack_8->SetBinContent(15,8.098195);
   hNCinFV_stack_8->SetBinContent(16,5.608755);
   hNCinFV_stack_8->SetBinContent(17,6.595713);
   hNCinFV_stack_8->SetBinContent(18,7.522655);
   hNCinFV_stack_8->SetBinContent(19,6.197211);
   hNCinFV_stack_8->SetBinContent(20,5.87164);
   hNCinFV_stack_8->SetBinContent(21,7.177406);
   hNCinFV_stack_8->SetBinContent(22,7.127535);
   hNCinFV_stack_8->SetBinContent(23,8.109421);
   hNCinFV_stack_8->SetBinContent(24,5.518546);
   hNCinFV_stack_8->SetBinError(1,1.194015);
   hNCinFV_stack_8->SetBinError(2,1.346148);
   hNCinFV_stack_8->SetBinError(3,1.545339);
   hNCinFV_stack_8->SetBinError(4,1.177666);
   hNCinFV_stack_8->SetBinError(5,1.330702);
   hNCinFV_stack_8->SetBinError(6,1.109109);
   hNCinFV_stack_8->SetBinError(7,1.074785);
   hNCinFV_stack_8->SetBinError(8,1.402227);
   hNCinFV_stack_8->SetBinError(9,1.241379);
   hNCinFV_stack_8->SetBinError(10,1.240162);
   hNCinFV_stack_8->SetBinError(11,1.055864);
   hNCinFV_stack_8->SetBinError(12,1.300961);
   hNCinFV_stack_8->SetBinError(13,1.331697);
   hNCinFV_stack_8->SetBinError(14,1.126159);
   hNCinFV_stack_8->SetBinError(15,1.508187);
   hNCinFV_stack_8->SetBinError(16,1.241199);
   hNCinFV_stack_8->SetBinError(17,1.317339);
   hNCinFV_stack_8->SetBinError(18,1.402095);
   hNCinFV_stack_8->SetBinError(19,1.286858);
   hNCinFV_stack_8->SetBinError(20,1.160868);
   hNCinFV_stack_8->SetBinError(21,1.359472);
   hNCinFV_stack_8->SetBinError(22,1.373978);
   hNCinFV_stack_8->SetBinError(23,1.442441);
   hNCinFV_stack_8->SetBinError(24,1.193827);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_9->SetBinContent(1,29.21467);
   hnumuCCinFV_stack_9->SetBinContent(2,29.29212);
   hnumuCCinFV_stack_9->SetBinContent(3,13.7446);
   hnumuCCinFV_stack_9->SetBinContent(4,6.131839);
   hnumuCCinFV_stack_9->SetBinContent(5,5.593306);
   hnumuCCinFV_stack_9->SetBinContent(6,7.927885);
   hnumuCCinFV_stack_9->SetBinContent(7,6.296601);
   hnumuCCinFV_stack_9->SetBinContent(8,8.962596);
   hnumuCCinFV_stack_9->SetBinContent(9,7.173834);
   hnumuCCinFV_stack_9->SetBinContent(10,14.39547);
   hnumuCCinFV_stack_9->SetBinContent(11,26.35671);
   hnumuCCinFV_stack_9->SetBinContent(12,22.55741);
   hnumuCCinFV_stack_9->SetBinContent(13,26.96574);
   hnumuCCinFV_stack_9->SetBinContent(14,24.31447);
   hnumuCCinFV_stack_9->SetBinContent(15,11.86176);
   hnumuCCinFV_stack_9->SetBinContent(16,9.235835);
   hnumuCCinFV_stack_9->SetBinContent(17,8.294403);
   hnumuCCinFV_stack_9->SetBinContent(18,10.88289);
   hnumuCCinFV_stack_9->SetBinContent(19,4.823956);
   hnumuCCinFV_stack_9->SetBinContent(20,7.809784);
   hnumuCCinFV_stack_9->SetBinContent(21,6.253515);
   hnumuCCinFV_stack_9->SetBinContent(22,8.859088);
   hnumuCCinFV_stack_9->SetBinContent(23,15.45688);
   hnumuCCinFV_stack_9->SetBinContent(24,23.21664);
   hnumuCCinFV_stack_9->SetBinError(1,3.050424);
   hnumuCCinFV_stack_9->SetBinError(2,3.990982);
   hnumuCCinFV_stack_9->SetBinError(3,2.086452);
   hnumuCCinFV_stack_9->SetBinError(4,1.347917);
   hnumuCCinFV_stack_9->SetBinError(5,1.28107);
   hnumuCCinFV_stack_9->SetBinError(6,1.477626);
   hnumuCCinFV_stack_9->SetBinError(7,1.344914);
   hnumuCCinFV_stack_9->SetBinError(8,1.571701);
   hnumuCCinFV_stack_9->SetBinError(9,1.888125);
   hnumuCCinFV_stack_9->SetBinError(10,2.329627);
   hnumuCCinFV_stack_9->SetBinError(11,3.477591);
   hnumuCCinFV_stack_9->SetBinError(12,2.593231);
   hnumuCCinFV_stack_9->SetBinError(13,2.827202);
   hnumuCCinFV_stack_9->SetBinError(14,3.047762);
   hnumuCCinFV_stack_9->SetBinError(15,1.802537);
   hnumuCCinFV_stack_9->SetBinError(16,1.659525);
   hnumuCCinFV_stack_9->SetBinError(17,1.879011);
   hnumuCCinFV_stack_9->SetBinError(18,2.32546);
   hnumuCCinFV_stack_9->SetBinError(19,1.06085);
   hnumuCCinFV_stack_9->SetBinError(20,1.578567);
   hnumuCCinFV_stack_9->SetBinError(21,1.406669);
   hnumuCCinFV_stack_9->SetBinError(22,1.570775);
   hnumuCCinFV_stack_9->SetBinError(23,2.065899);
   hnumuCCinFV_stack_9->SetBinError(24,2.893789);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_10->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_10->SetBinContent(2,0.7055822);
   hnueCCinFV_stack_10->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_10->SetBinContent(4,0.7810781);
   hnueCCinFV_stack_10->SetBinContent(5,0.7302274);
   hnueCCinFV_stack_10->SetBinContent(6,2.206642);
   hnueCCinFV_stack_10->SetBinContent(7,0.3688623);
   hnueCCinFV_stack_10->SetBinContent(8,0.4030693);
   hnueCCinFV_stack_10->SetBinContent(9,1.127039);
   hnueCCinFV_stack_10->SetBinContent(10,0.8770706);
   hnueCCinFV_stack_10->SetBinContent(11,1.336411);
   hnueCCinFV_stack_10->SetBinContent(12,0.7907994);
   hnueCCinFV_stack_10->SetBinContent(13,1.262599);
   hnueCCinFV_stack_10->SetBinContent(14,0.2502081);
   hnueCCinFV_stack_10->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(16,0.8910709);
   hnueCCinFV_stack_10->SetBinContent(17,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(18,1.203684);
   hnueCCinFV_stack_10->SetBinContent(19,0.6803553);
   hnueCCinFV_stack_10->SetBinContent(20,0.6719368);
   hnueCCinFV_stack_10->SetBinContent(22,0.8216388);
   hnueCCinFV_stack_10->SetBinContent(23,2.389879);
   hnueCCinFV_stack_10->SetBinContent(24,1.267516);
   hnueCCinFV_stack_10->SetBinError(1,0.1974404);
   hnueCCinFV_stack_10->SetBinError(2,0.4992408);
   hnueCCinFV_stack_10->SetBinError(3,0.3994798);
   hnueCCinFV_stack_10->SetBinError(4,0.4778238);
   hnueCCinFV_stack_10->SetBinError(5,0.4379386);
   hnueCCinFV_stack_10->SetBinError(6,1.613129);
   hnueCCinFV_stack_10->SetBinError(7,0.3688623);
   hnueCCinFV_stack_10->SetBinError(8,0.2851617);
   hnueCCinFV_stack_10->SetBinError(9,0.5201044);
   hnueCCinFV_stack_10->SetBinError(10,0.5197486);
   hnueCCinFV_stack_10->SetBinError(11,0.5498147);
   hnueCCinFV_stack_10->SetBinError(12,0.5593151);
   hnueCCinFV_stack_10->SetBinError(13,0.5307391);
   hnueCCinFV_stack_10->SetBinError(14,0.2502081);
   hnueCCinFV_stack_10->SetBinError(15,0.3401776);
   hnueCCinFV_stack_10->SetBinError(16,0.5252073);
   hnueCCinFV_stack_10->SetBinError(17,0.2770047);
   hnueCCinFV_stack_10->SetBinError(18,0.7503767);
   hnueCCinFV_stack_10->SetBinError(19,0.4810838);
   hnueCCinFV_stack_10->SetBinError(20,0.3900048);
   hnueCCinFV_stack_10->SetBinError(22,0.4120716);
   hnueCCinFV_stack_10->SetBinError(23,1.287318);
   hnueCCinFV_stack_10->SetBinError(24,0.5873469);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__5->SetBinContent(1,171.6151);
   hmcerror__5->SetBinContent(2,167.2347);
   hmcerror__5->SetBinContent(3,155.2298);
   hmcerror__5->SetBinContent(4,155.5148);
   hmcerror__5->SetBinContent(5,121.7032);
   hmcerror__5->SetBinContent(6,130.1407);
   hmcerror__5->SetBinContent(7,124.5817);
   hmcerror__5->SetBinContent(8,129.5881);
   hmcerror__5->SetBinContent(9,138.3026);
   hmcerror__5->SetBinContent(10,141.124);
   hmcerror__5->SetBinContent(11,156.8246);
   hmcerror__5->SetBinContent(12,140.7548);
   hmcerror__5->SetBinContent(13,158.2992);
   hmcerror__5->SetBinContent(14,154.7677);
   hmcerror__5->SetBinContent(15,151.6238);
   hmcerror__5->SetBinContent(16,131.6916);
   hmcerror__5->SetBinContent(17,138.4053);
   hmcerror__5->SetBinContent(18,128.4328);
   hmcerror__5->SetBinContent(19,120.1393);
   hmcerror__5->SetBinContent(20,131.8125);
   hmcerror__5->SetBinContent(21,142.5129);
   hmcerror__5->SetBinContent(22,138.5904);
   hmcerror__5->SetBinContent(23,150.8683);
   hmcerror__5->SetBinContent(24,163.8392);
   hmcerror__5->SetBinError(1,42.20274);
   hmcerror__5->SetBinError(2,37.01853);
   hmcerror__5->SetBinError(3,38.7759);
   hmcerror__5->SetBinError(4,36.65498);
   hmcerror__5->SetBinError(5,30.11024);
   hmcerror__5->SetBinError(6,27.92214);
   hmcerror__5->SetBinError(7,28.74564);
   hmcerror__5->SetBinError(8,31.53687);
   hmcerror__5->SetBinError(9,33.7802);
   hmcerror__5->SetBinError(10,32.15075);
   hmcerror__5->SetBinError(11,39.05458);
   hmcerror__5->SetBinError(12,35.97954);
   hmcerror__5->SetBinError(13,36.66062);
   hmcerror__5->SetBinError(14,42.6823);
   hmcerror__5->SetBinError(15,39.43372);
   hmcerror__5->SetBinError(16,32.57148);
   hmcerror__5->SetBinError(17,31.59662);
   hmcerror__5->SetBinError(18,32.81422);
   hmcerror__5->SetBinError(19,26.18224);
   hmcerror__5->SetBinError(20,29.70402);
   hmcerror__5->SetBinError(21,34.15405);
   hmcerror__5->SetBinError(22,32.58017);
   hmcerror__5->SetBinError(23,36.489);
   hmcerror__5->SetBinError(24,35.55334);
   hmcerror__5->SetBinError(25,0.4212968);
   hmcerror__5->SetEntries(3396.741);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
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
   Double_t _felx3005[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3005[24] = {
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
   Double_t _fehx3005[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3005[24] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(68.87325);
   Graph_Graph3005->SetMaximum(184.3511);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=25.1/24","");
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

   ci = 1444;
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

   ci = 1445;
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

   ci = 1446;
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

   ci = 1447;
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

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.5","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3006[24] = {
   0.2459151,
   0.2213568,
   0.2497968,
   0.235701,
   0.2474073,
   0.2145535,
   0.2307373,
   0.2433624,
   0.2442484,
   0.2278191,
   0.2490335,
   0.2556185,
   0.2315906,
   0.275783,
   0.260076,
   0.2473315,
   0.2282904,
   0.2554971,
   0.2179323,
   0.2253506,
   0.2396559,
   0.2350824,
   0.24186,
   0.2170014};
   Double_t _fehx3006[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3006[24] = {
   0.2459151,
   0.2213568,
   0.2497968,
   0.235701,
   0.2474073,
   0.2145535,
   0.2307373,
   0.2433624,
   0.2442484,
   0.2278191,
   0.2490335,
   0.2556185,
   0.2315906,
   0.275783,
   0.260076,
   0.2473315,
   0.2282904,
   0.2554971,
   0.2179323,
   0.2253506,
   0.2396559,
   0.2350824,
   0.24186,
   0.2170014};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3007[24] = {
   0.2142134,
   0.2144792,
   0.2222593,
   0.2219755,
   0.2346959,
   0.195771,
   0.2181882,
   0.2273573,
   0.2287506,
   0.2224548,
   0.2223867,
   0.2295763,
   0.2112715,
   0.2217556,
   0.2284871,
   0.2251652,
   0.2172427,
   0.215762,
   0.2008534,
   0.2071056,
   0.2212548,
   0.2276039,
   0.2273544,
   0.2051086};
   Double_t _fehx3007[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3007[24] = {
   0.2142134,
   0.2144792,
   0.2222593,
   0.2219755,
   0.2346959,
   0.195771,
   0.2181882,
   0.2273573,
   0.2287506,
   0.2224548,
   0.2223867,
   0.2295763,
   0.2112715,
   0.2217556,
   0.2284871,
   0.2251652,
   0.2172427,
   0.215762,
   0.2008534,
   0.2071056,
   0.2212548,
   0.2276039,
   0.2273544,
   0.2051086};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   0.9439728,
   0.6876565,
   0.708627,
   0.6301653,
   0.9942224,
   0.6838752,
   0.9070354,
   0.6790745,
   0.8025879,
   0.7794562,
   0.6376549,
   0.9235918,
   0.884401,
   0.743049,
   0.8375992,
   0.7593499,
   0.6647142,
   0.7864032,
   0.8240435,
   0.6676151,
   0.6876572,
   0.6782575,
   0.7224844,
   0.6774933};
   Double_t _felx3008[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3008[24] = {
   0.07416551,
   0.0641243,
   0.06756493,
   0.06443697,
   0.09038385,
   0.07343283,
   0.08532672,
   0.07333696,
   0.07617827,
   0.07431823,
   0.06453833,
   0.08100436,
   0.07474552,
   0.06928968,
   0.07432491,
   0.07685533,
   0.0701837,
   0.07825004,
   0.08382936,
   0.0720994,
   0.07031576,
   0.07083678,
   0.06920145,
   0.06430482};
   Double_t _fehx3008[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3008[24] = {
   0.07416551,
   0.0641243,
   0.06756493,
   0.06314513,
   0.09038385,
   0.07188527,
   0.08532672,
   0.07178203,
   0.07617827,
   0.07431823,
   0.06325537,
   0.08100436,
   0.07474552,
   0.06928968,
   0.07432491,
   0.07532751,
   0.06873289,
   0.07825004,
   0.08215464,
   0.07057071,
   0.06890606,
   0.0693843,
   0.06920145,
   0.06430482};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.5138405);
   Graph_Graph3008->SetMaximum(1.136494);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
