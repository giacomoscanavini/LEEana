#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 17:36:58 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-4.119231,-2.462591,3.957692,272.3107);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__13->SetBinContent(1,118.8302);
   hmc__13->SetBinContent(2,107.1268);
   hmc__13->SetBinContent(3,106.6321);
   hmc__13->SetBinContent(4,104.4661);
   hmc__13->SetBinContent(5,94.15861);
   hmc__13->SetBinContent(6,94.54672);
   hmc__13->SetBinContent(7,95.2715);
   hmc__13->SetBinContent(8,92.14542);
   hmc__13->SetBinContent(9,95.48135);
   hmc__13->SetBinContent(10,99.05428);
   hmc__13->SetBinContent(11,111.1486);
   hmc__13->SetBinContent(12,113.1439);
   hmc__13->SetBinContent(13,123.1295);
   hmc__13->SetBinContent(14,102.0802);
   hmc__13->SetBinContent(15,101.4706);
   hmc__13->SetBinContent(16,102.3762);
   hmc__13->SetBinContent(17,103.6778);
   hmc__13->SetBinContent(18,101.3262);
   hmc__13->SetBinContent(19,107.3781);
   hmc__13->SetBinContent(20,103.3674);
   hmc__13->SetBinContent(21,99.78962);
   hmc__13->SetBinContent(22,95.6628);
   hmc__13->SetBinContent(23,105.2912);
   hmc__13->SetBinContent(24,119.4869);
   hmc__13->SetBinError(1,42.54104);
   hmc__13->SetBinError(2,39.95609);
   hmc__13->SetBinError(3,42.20079);
   hmc__13->SetBinError(4,36.7343);
   hmc__13->SetBinError(5,37.86676);
   hmc__13->SetBinError(6,35.68165);
   hmc__13->SetBinError(7,38.05155);
   hmc__13->SetBinError(8,33.22159);
   hmc__13->SetBinError(9,38.47579);
   hmc__13->SetBinError(10,39.84662);
   hmc__13->SetBinError(11,39.09001);
   hmc__13->SetBinError(12,43.31928);
   hmc__13->SetBinError(13,44.54002);
   hmc__13->SetBinError(14,38.09977);
   hmc__13->SetBinError(15,38.15701);
   hmc__13->SetBinError(16,38.90737);
   hmc__13->SetBinError(17,49.53111);
   hmc__13->SetBinError(18,37.94362);
   hmc__13->SetBinError(19,39.31362);
   hmc__13->SetBinError(20,38.53415);
   hmc__13->SetBinError(21,41.86255);
   hmc__13->SetBinError(22,37.78457);
   hmc__13->SetBinError(23,40.5579);
   hmc__13->SetBinError(24,56.63921);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-2.462591);
   hmc__13->SetMaximum(258.572);
   hmc__13->SetEntries(2462.59);
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
   hs5_stack_5->SetMinimum(-9.660135e-09);
   hs5_stack_5->SetMaximum(129.286);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.948586);
   hbadmatch_stack_1->SetBinContent(2,2.491637);
   hbadmatch_stack_1->SetBinContent(3,2.170456);
   hbadmatch_stack_1->SetBinContent(4,2.119683);
   hbadmatch_stack_1->SetBinContent(5,2.235216);
   hbadmatch_stack_1->SetBinContent(6,2.340906);
   hbadmatch_stack_1->SetBinContent(7,1.976282);
   hbadmatch_stack_1->SetBinContent(8,3.407981);
   hbadmatch_stack_1->SetBinContent(9,1.84312);
   hbadmatch_stack_1->SetBinContent(10,1.588655);
   hbadmatch_stack_1->SetBinContent(11,3.05069);
   hbadmatch_stack_1->SetBinContent(12,3.008462);
   hbadmatch_stack_1->SetBinContent(13,5.268276);
   hbadmatch_stack_1->SetBinContent(14,2.960802);
   hbadmatch_stack_1->SetBinContent(15,1.941261);
   hbadmatch_stack_1->SetBinContent(16,1.712114);
   hbadmatch_stack_1->SetBinContent(17,2.72185);
   hbadmatch_stack_1->SetBinContent(18,1.924163);
   hbadmatch_stack_1->SetBinContent(19,1.687626);
   hbadmatch_stack_1->SetBinContent(20,2.644128);
   hbadmatch_stack_1->SetBinContent(21,1.073786);
   hbadmatch_stack_1->SetBinContent(22,1.268811);
   hbadmatch_stack_1->SetBinContent(23,1.61831);
   hbadmatch_stack_1->SetBinContent(24,4.108716);
   hbadmatch_stack_1->SetBinError(1,0.9291605);
   hbadmatch_stack_1->SetBinError(2,0.8331769);
   hbadmatch_stack_1->SetBinError(3,0.743203);
   hbadmatch_stack_1->SetBinError(4,0.7273303);
   hbadmatch_stack_1->SetBinError(5,0.7277948);
   hbadmatch_stack_1->SetBinError(6,0.8093475);
   hbadmatch_stack_1->SetBinError(7,0.6722571);
   hbadmatch_stack_1->SetBinError(8,0.9543476);
   hbadmatch_stack_1->SetBinError(9,0.7752037);
   hbadmatch_stack_1->SetBinError(10,0.6143516);
   hbadmatch_stack_1->SetBinError(11,0.8791697);
   hbadmatch_stack_1->SetBinError(12,0.869011);
   hbadmatch_stack_1->SetBinError(13,1.544983);
   hbadmatch_stack_1->SetBinError(14,1.000498);
   hbadmatch_stack_1->SetBinError(15,0.726137);
   hbadmatch_stack_1->SetBinError(16,0.6201715);
   hbadmatch_stack_1->SetBinError(17,0.8878777);
   hbadmatch_stack_1->SetBinError(18,0.7567905);
   hbadmatch_stack_1->SetBinError(19,0.6594011);
   hbadmatch_stack_1->SetBinError(20,0.7855485);
   hbadmatch_stack_1->SetBinError(21,0.5557297);
   hbadmatch_stack_1->SetBinError(22,0.5889569);
   hbadmatch_stack_1->SetBinError(23,0.6297995);
   hbadmatch_stack_1->SetBinError(24,1.157323);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,5.504803);
   hext_stack_2->SetBinContent(2,5.023183);
   hext_stack_2->SetBinContent(3,4.931029);
   hext_stack_2->SetBinContent(4,6.489584);
   hext_stack_2->SetBinContent(5,5.274196);
   hext_stack_2->SetBinContent(6,9.48418);
   hext_stack_2->SetBinContent(7,6.635217);
   hext_stack_2->SetBinContent(8,8.731644);
   hext_stack_2->SetBinContent(9,6.729009);
   hext_stack_2->SetBinContent(10,5.40824);
   hext_stack_2->SetBinContent(11,5.008821);
   hext_stack_2->SetBinContent(12,5.974833);
   hext_stack_2->SetBinContent(13,3.490578);
   hext_stack_2->SetBinContent(14,2.916804);
   hext_stack_2->SetBinContent(15,6.400202);
   hext_stack_2->SetBinContent(16,5.191995);
   hext_stack_2->SetBinContent(17,3.483397);
   hext_stack_2->SetBinContent(18,6.414563);
   hext_stack_2->SetBinContent(19,6.296459);
   hext_stack_2->SetBinContent(20,4.710375);
   hext_stack_2->SetBinContent(21,4.449409);
   hext_stack_2->SetBinContent(22,5.105384);
   hext_stack_2->SetBinContent(23,2.028585);
   hext_stack_2->SetBinContent(24,5.344809);
   hext_stack_2->SetBinError(1,1.525286);
   hext_stack_2->SetBinError(2,1.378363);
   hext_stack_2->SetBinError(3,1.541856);
   hext_stack_2->SetBinError(4,1.605029);
   hext_stack_2->SetBinError(5,1.48838);
   hext_stack_2->SetBinError(6,1.945382);
   hext_stack_2->SetBinError(7,1.721504);
   hext_stack_2->SetBinError(8,2.029177);
   hext_stack_2->SetBinError(9,1.719764);
   hext_stack_2->SetBinError(10,1.63365);
   hext_stack_2->SetBinError(11,1.517329);
   hext_stack_2->SetBinError(12,1.679044);
   hext_stack_2->SetBinError(13,1.110227);
   hext_stack_2->SetBinError(14,1.132884);
   hext_stack_2->SetBinError(15,1.648403);
   hext_stack_2->SetBinError(16,1.468055);
   hext_stack_2->SetBinError(17,1.197416);
   hext_stack_2->SetBinError(18,1.521456);
   hext_stack_2->SetBinError(19,1.805754);
   hext_stack_2->SetBinError(20,1.314751);
   hext_stack_2->SetBinError(21,1.396677);
   hext_stack_2->SetBinError(22,1.39999);
   hext_stack_2->SetBinError(23,0.8315593);
   hext_stack_2->SetBinError(24,1.530177);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.8868845);
   hdirt_stack_3->SetBinContent(2,0.1652832);
   hdirt_stack_3->SetBinContent(3,0.5570828);
   hdirt_stack_3->SetBinContent(4,0.7745227);
   hdirt_stack_3->SetBinContent(5,0.2623434);
   hdirt_stack_3->SetBinContent(7,0.4809298);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.9467657);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(15,0.2212471);
   hdirt_stack_3->SetBinContent(16,0.1753185);
   hdirt_stack_3->SetBinContent(17,0.5221469);
   hdirt_stack_3->SetBinContent(18,0.7718884);
   hdirt_stack_3->SetBinContent(19,0.6436294);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(22,0.8836629);
   hdirt_stack_3->SetBinContent(23,0.8332258);
   hdirt_stack_3->SetBinContent(24,0.4834816);
   hdirt_stack_3->SetBinError(1,0.5289113);
   hdirt_stack_3->SetBinError(2,0.1652832);
   hdirt_stack_3->SetBinError(3,0.4028472);
   hdirt_stack_3->SetBinError(4,0.4220897);
   hdirt_stack_3->SetBinError(5,0.2623434);
   hdirt_stack_3->SetBinError(7,0.341434);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.494629);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(15,0.2189082);
   hdirt_stack_3->SetBinError(16,0.1753185);
   hdirt_stack_3->SetBinError(17,0.3070235);
   hdirt_stack_3->SetBinError(18,0.4890181);
   hdirt_stack_3->SetBinError(19,0.4778222);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(22,0.5440046);
   hdirt_stack_3->SetBinError(23,0.4476755);
   hdirt_stack_3->SetBinError(24,0.3433964);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,7.899306);
   houtFV_stack_4->SetBinContent(2,5.550402);
   houtFV_stack_4->SetBinContent(3,7.516861);
   houtFV_stack_4->SetBinContent(4,5.818387);
   houtFV_stack_4->SetBinContent(5,3.512202);
   houtFV_stack_4->SetBinContent(6,7.98827);
   houtFV_stack_4->SetBinContent(7,7.766436);
   houtFV_stack_4->SetBinContent(8,4.693038);
   houtFV_stack_4->SetBinContent(9,4.50248);
   houtFV_stack_4->SetBinContent(10,2.151965);
   houtFV_stack_4->SetBinContent(11,4.957945);
   houtFV_stack_4->SetBinContent(12,5.217932);
   houtFV_stack_4->SetBinContent(13,5.47571);
   houtFV_stack_4->SetBinContent(14,4.251426);
   houtFV_stack_4->SetBinContent(15,5.113208);
   houtFV_stack_4->SetBinContent(16,4.729088);
   houtFV_stack_4->SetBinContent(17,7.248164);
   houtFV_stack_4->SetBinContent(18,7.314002);
   houtFV_stack_4->SetBinContent(19,5.944019);
   houtFV_stack_4->SetBinContent(20,5.877963);
   houtFV_stack_4->SetBinContent(21,3.032487);
   houtFV_stack_4->SetBinContent(22,3.854614);
   houtFV_stack_4->SetBinContent(23,7.200982);
   houtFV_stack_4->SetBinContent(24,7.363265);
   houtFV_stack_4->SetBinError(1,1.432324);
   houtFV_stack_4->SetBinError(2,1.141966);
   houtFV_stack_4->SetBinError(3,1.456715);
   houtFV_stack_4->SetBinError(4,1.17726);
   houtFV_stack_4->SetBinError(5,0.9139253);
   houtFV_stack_4->SetBinError(6,1.440282);
   houtFV_stack_4->SetBinError(7,1.407919);
   houtFV_stack_4->SetBinError(8,1.056454);
   houtFV_stack_4->SetBinError(9,1.047435);
   houtFV_stack_4->SetBinError(10,0.694685);
   houtFV_stack_4->SetBinError(11,1.159962);
   houtFV_stack_4->SetBinError(12,1.144337);
   houtFV_stack_4->SetBinError(13,1.134797);
   houtFV_stack_4->SetBinError(14,1.038757);
   houtFV_stack_4->SetBinError(15,1.130564);
   houtFV_stack_4->SetBinError(16,1.063817);
   houtFV_stack_4->SetBinError(17,1.355987);
   houtFV_stack_4->SetBinError(18,1.335981);
   houtFV_stack_4->SetBinError(19,1.231407);
   houtFV_stack_4->SetBinError(20,1.188754);
   houtFV_stack_4->SetBinError(21,0.832162);
   houtFV_stack_4->SetBinError(22,1.000148);
   houtFV_stack_4->SetBinError(23,1.418567);
   houtFV_stack_4->SetBinError(24,1.35353);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8366721);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7240718);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5430539);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5151539);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.488086);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3199419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.217311);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1881969);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1861173);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2304939);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,46.70959);
   hNCpi0inFVres_stack_7->SetBinContent(2,47.46723);
   hNCpi0inFVres_stack_7->SetBinContent(3,43.03011);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.76198);
   hNCpi0inFVres_stack_7->SetBinContent(5,40.25854);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.31965);
   hNCpi0inFVres_stack_7->SetBinContent(7,39.07726);
   hNCpi0inFVres_stack_7->SetBinContent(8,35.82157);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.88895);
   hNCpi0inFVres_stack_7->SetBinContent(10,43.86862);
   hNCpi0inFVres_stack_7->SetBinContent(11,46.82188);
   hNCpi0inFVres_stack_7->SetBinContent(12,48.90376);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.73631);
   hNCpi0inFVres_stack_7->SetBinContent(14,43.39497);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.4948);
   hNCpi0inFVres_stack_7->SetBinContent(16,44.38293);
   hNCpi0inFVres_stack_7->SetBinContent(17,45.04025);
   hNCpi0inFVres_stack_7->SetBinContent(18,40.99755);
   hNCpi0inFVres_stack_7->SetBinContent(19,37.85446);
   hNCpi0inFVres_stack_7->SetBinContent(20,43.44898);
   hNCpi0inFVres_stack_7->SetBinContent(21,48.99742);
   hNCpi0inFVres_stack_7->SetBinContent(22,44.39272);
   hNCpi0inFVres_stack_7->SetBinContent(23,47.62335);
   hNCpi0inFVres_stack_7->SetBinContent(24,52.1264);
   hNCpi0inFVres_stack_7->SetBinError(1,2.200894);
   hNCpi0inFVres_stack_7->SetBinError(2,2.266842);
   hNCpi0inFVres_stack_7->SetBinError(3,2.12819);
   hNCpi0inFVres_stack_7->SetBinError(4,2.048374);
   hNCpi0inFVres_stack_7->SetBinError(5,2.096854);
   hNCpi0inFVres_stack_7->SetBinError(6,2.118751);
   hNCpi0inFVres_stack_7->SetBinError(7,2.021549);
   hNCpi0inFVres_stack_7->SetBinError(8,1.879128);
   hNCpi0inFVres_stack_7->SetBinError(9,2.152045);
   hNCpi0inFVres_stack_7->SetBinError(10,2.201676);
   hNCpi0inFVres_stack_7->SetBinError(11,2.263319);
   hNCpi0inFVres_stack_7->SetBinError(12,2.308665);
   hNCpi0inFVres_stack_7->SetBinError(13,2.319073);
   hNCpi0inFVres_stack_7->SetBinError(14,2.128754);
   hNCpi0inFVres_stack_7->SetBinError(15,2.284373);
   hNCpi0inFVres_stack_7->SetBinError(16,2.172147);
   hNCpi0inFVres_stack_7->SetBinError(17,2.201661);
   hNCpi0inFVres_stack_7->SetBinError(18,2.06873);
   hNCpi0inFVres_stack_7->SetBinError(19,1.961171);
   hNCpi0inFVres_stack_7->SetBinError(20,2.187416);
   hNCpi0inFVres_stack_7->SetBinError(21,2.311136);
   hNCpi0inFVres_stack_7->SetBinError(22,2.133076);
   hNCpi0inFVres_stack_7->SetBinError(23,2.303405);
   hNCpi0inFVres_stack_7->SetBinError(24,2.440993);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,8.60137);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.249207);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.37944);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.880795);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.283844);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.677421);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.758625);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.187527);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.889084);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.548234);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.94954);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.684822);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.7633);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.77077);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.751575);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.498316);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.041033);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.284924);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.173908);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.128229);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.821657);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.681989);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.099497);
   hNCpi0inFVdis_stack_8->SetBinContent(24,7.988898);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9487792);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8352614);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.201251);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9812143);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9465891);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8013732);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7659867);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.968806);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8881453);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9945766);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9167542);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9090088);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.120853);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.004441);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8628047);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8632181);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8456038);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9957496);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9651164);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9095079);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8600184);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8384394);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8984209);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9252413);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3909362);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2764336);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,19.61966);
   hCCpi0inFV_stack_10->SetBinContent(2,17.16703);
   hCCpi0inFV_stack_10->SetBinContent(3,14.84597);
   hCCpi0inFV_stack_10->SetBinContent(4,14.78432);
   hCCpi0inFV_stack_10->SetBinContent(5,14.05944);
   hCCpi0inFV_stack_10->SetBinContent(6,8.512624);
   hCCpi0inFV_stack_10->SetBinContent(7,13.08938);
   hCCpi0inFV_stack_10->SetBinContent(8,11.72574);
   hCCpi0inFV_stack_10->SetBinContent(9,11.08078);
   hCCpi0inFV_stack_10->SetBinContent(10,20.10224);
   hCCpi0inFV_stack_10->SetBinContent(11,21.28244);
   hCCpi0inFV_stack_10->SetBinContent(12,20.23599);
   hCCpi0inFV_stack_10->SetBinContent(13,20.41405);
   hCCpi0inFV_stack_10->SetBinContent(14,14.38765);
   hCCpi0inFV_stack_10->SetBinContent(15,12.33506);
   hCCpi0inFV_stack_10->SetBinContent(16,13.07727);
   hCCpi0inFV_stack_10->SetBinContent(17,15.82616);
   hCCpi0inFV_stack_10->SetBinContent(18,12.66036);
   hCCpi0inFV_stack_10->SetBinContent(19,16.69787);
   hCCpi0inFV_stack_10->SetBinContent(20,14.75778);
   hCCpi0inFV_stack_10->SetBinContent(21,14.14582);
   hCCpi0inFV_stack_10->SetBinContent(22,12.67125);
   hCCpi0inFV_stack_10->SetBinContent(23,17.147);
   hCCpi0inFV_stack_10->SetBinContent(24,16.42818);
   hCCpi0inFV_stack_10->SetBinError(1,2.206178);
   hCCpi0inFV_stack_10->SetBinError(2,2.06491);
   hCCpi0inFV_stack_10->SetBinError(3,1.971926);
   hCCpi0inFV_stack_10->SetBinError(4,1.946501);
   hCCpi0inFV_stack_10->SetBinError(5,1.881214);
   hCCpi0inFV_stack_10->SetBinError(6,1.457411);
   hCCpi0inFV_stack_10->SetBinError(7,1.830514);
   hCCpi0inFV_stack_10->SetBinError(8,1.683048);
   hCCpi0inFV_stack_10->SetBinError(9,1.59165);
   hCCpi0inFV_stack_10->SetBinError(10,2.292082);
   hCCpi0inFV_stack_10->SetBinError(11,2.361108);
   hCCpi0inFV_stack_10->SetBinError(12,2.260452);
   hCCpi0inFV_stack_10->SetBinError(13,2.340804);
   hCCpi0inFV_stack_10->SetBinError(14,1.897655);
   hCCpi0inFV_stack_10->SetBinError(15,1.759305);
   hCCpi0inFV_stack_10->SetBinError(16,1.792794);
   hCCpi0inFV_stack_10->SetBinError(17,2.040904);
   hCCpi0inFV_stack_10->SetBinError(18,1.783671);
   hCCpi0inFV_stack_10->SetBinError(19,2.052887);
   hCCpi0inFV_stack_10->SetBinError(20,1.891842);
   hCCpi0inFV_stack_10->SetBinError(21,1.934162);
   hCCpi0inFV_stack_10->SetBinError(22,1.823176);
   hCCpi0inFV_stack_10->SetBinError(23,2.013941);
   hCCpi0inFV_stack_10->SetBinError(24,2.065844);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,8.734833);
   hNCinFV_stack_11->SetBinContent(2,8.167137);
   hNCinFV_stack_11->SetBinContent(3,11.13068);
   hNCinFV_stack_11->SetBinContent(4,8.462515);
   hNCinFV_stack_11->SetBinContent(5,8.160983);
   hNCinFV_stack_11->SetBinContent(6,7.234041);
   hNCinFV_stack_11->SetBinContent(7,9.613594);
   hNCinFV_stack_11->SetBinContent(8,7.088888);
   hNCinFV_stack_11->SetBinContent(9,6.647276);
   hNCinFV_stack_11->SetBinContent(10,7.177406);
   hNCinFV_stack_11->SetBinContent(11,9.323288);
   hNCinFV_stack_11->SetBinContent(12,9.275106);
   hNCinFV_stack_11->SetBinContent(13,9.128263);
   hNCinFV_stack_11->SetBinContent(14,9.196123);
   hNCinFV_stack_11->SetBinContent(15,8.742677);
   hNCinFV_stack_11->SetBinContent(16,9.483047);
   hNCinFV_stack_11->SetBinContent(17,6.70391);
   hNCinFV_stack_11->SetBinContent(18,6.828776);
   hNCinFV_stack_11->SetBinContent(19,9.910053);
   hNCinFV_stack_11->SetBinContent(20,6.055439);
   hNCinFV_stack_11->SetBinContent(21,8.398036);
   hNCinFV_stack_11->SetBinContent(22,9.228007);
   hNCinFV_stack_11->SetBinContent(23,7.770326);
   hNCinFV_stack_11->SetBinContent(24,6.897244);
   hNCinFV_stack_11->SetBinError(1,1.532887);
   hNCinFV_stack_11->SetBinError(2,1.358554);
   hNCinFV_stack_11->SetBinError(3,1.722534);
   hNCinFV_stack_11->SetBinError(4,1.415284);
   hNCinFV_stack_11->SetBinError(5,1.428862);
   hNCinFV_stack_11->SetBinError(6,1.345794);
   hNCinFV_stack_11->SetBinError(7,1.618809);
   hNCinFV_stack_11->SetBinError(8,1.316615);
   hNCinFV_stack_11->SetBinError(9,1.302457);
   hNCinFV_stack_11->SetBinError(10,1.359472);
   hNCinFV_stack_11->SetBinError(11,1.570086);
   hNCinFV_stack_11->SetBinError(12,1.582872);
   hNCinFV_stack_11->SetBinError(13,1.557927);
   hNCinFV_stack_11->SetBinError(14,1.481939);
   hNCinFV_stack_11->SetBinError(15,1.467797);
   hNCinFV_stack_11->SetBinError(16,1.533033);
   hNCinFV_stack_11->SetBinError(17,1.288174);
   hNCinFV_stack_11->SetBinError(18,1.314964);
   hNCinFV_stack_11->SetBinError(19,1.606218);
   hNCinFV_stack_11->SetBinError(20,1.256838);
   hNCinFV_stack_11->SetBinError(21,1.495108);
   hNCinFV_stack_11->SetBinError(22,1.532264);
   hNCinFV_stack_11->SetBinError(23,1.329267);
   hNCinFV_stack_11->SetBinError(24,1.302599);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,15.62234);
   hnumuCCinFV_stack_12->SetBinContent(2,12.20184);
   hnumuCCinFV_stack_12->SetBinContent(3,9.409571);
   hnumuCCinFV_stack_12->SetBinContent(4,16.30036);
   hnumuCCinFV_stack_12->SetBinContent(5,10.95394);
   hnumuCCinFV_stack_12->SetBinContent(6,8.76306);
   hnumuCCinFV_stack_12->SetBinContent(7,9.086692);
   hnumuCCinFV_stack_12->SetBinContent(8,10.64126);
   hnumuCCinFV_stack_12->SetBinContent(9,12.25302);
   hnumuCCinFV_stack_12->SetBinContent(10,10.06943);
   hnumuCCinFV_stack_12->SetBinContent(11,11.29239);
   hnumuCCinFV_stack_12->SetBinContent(12,10.65434);
   hnumuCCinFV_stack_12->SetBinContent(13,18.13778);
   hnumuCCinFV_stack_12->SetBinContent(14,15.56856);
   hnumuCCinFV_stack_12->SetBinContent(15,10.67543);
   hnumuCCinFV_stack_12->SetBinContent(16,15.31712);
   hnumuCCinFV_stack_12->SetBinContent(17,13.39387);
   hnumuCCinFV_stack_12->SetBinContent(18,14.05598);
   hnumuCCinFV_stack_12->SetBinContent(19,19.19707);
   hnumuCCinFV_stack_12->SetBinContent(20,15.01871);
   hnumuCCinFV_stack_12->SetBinContent(21,11.17445);
   hnumuCCinFV_stack_12->SetBinContent(22,9.046637);
   hnumuCCinFV_stack_12->SetBinContent(23,11.64798);
   hnumuCCinFV_stack_12->SetBinContent(24,17.52722);
   hnumuCCinFV_stack_12->SetBinError(1,2.163017);
   hnumuCCinFV_stack_12->SetBinError(2,2.187664);
   hnumuCCinFV_stack_12->SetBinError(3,1.56897);
   hnumuCCinFV_stack_12->SetBinError(4,2.477928);
   hnumuCCinFV_stack_12->SetBinError(5,1.994788);
   hnumuCCinFV_stack_12->SetBinError(6,1.643914);
   hnumuCCinFV_stack_12->SetBinError(7,1.524358);
   hnumuCCinFV_stack_12->SetBinError(8,1.707867);
   hnumuCCinFV_stack_12->SetBinError(9,2.146862);
   hnumuCCinFV_stack_12->SetBinError(10,1.902771);
   hnumuCCinFV_stack_12->SetBinError(11,1.944732);
   hnumuCCinFV_stack_12->SetBinError(12,1.727629);
   hnumuCCinFV_stack_12->SetBinError(13,2.637496);
   hnumuCCinFV_stack_12->SetBinError(14,2.131151);
   hnumuCCinFV_stack_12->SetBinError(15,1.719263);
   hnumuCCinFV_stack_12->SetBinError(16,2.163064);
   hnumuCCinFV_stack_12->SetBinError(17,2.099829);
   hnumuCCinFV_stack_12->SetBinError(18,1.955195);
   hnumuCCinFV_stack_12->SetBinError(19,2.944144);
   hnumuCCinFV_stack_12->SetBinError(20,3.129922);
   hnumuCCinFV_stack_12->SetBinError(21,1.74074);
   hnumuCCinFV_stack_12->SetBinError(22,1.570167);
   hnumuCCinFV_stack_12->SetBinError(23,2.117455);
   hnumuCCinFV_stack_12->SetBinError(24,2.559556);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.731842);
   hnueCCinFV_stack_13->SetBinContent(2,0.4451163);
   hnueCCinFV_stack_13->SetBinContent(3,1.200917);
   hnueCCinFV_stack_13->SetBinContent(4,1.209333);
   hnueCCinFV_stack_13->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_13->SetBinContent(6,0.6124303);
   hnueCCinFV_stack_13->SetBinContent(7,0.5638871);
   hnueCCinFV_stack_13->SetBinContent(8,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(9,0.9218988);
   hnueCCinFV_stack_13->SetBinContent(11,0.6438754);
   hnueCCinFV_stack_13->SetBinContent(13,0.7382848);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.4299605);
   hnueCCinFV_stack_13->SetBinContent(20,2.086228);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.6923922);
   hnueCCinFV_stack_13->SetBinContent(23,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(24,0.7305952);
   hnueCCinFV_stack_13->SetBinError(1,0.7326843);
   hnueCCinFV_stack_13->SetBinError(2,0.3167429);
   hnueCCinFV_stack_13->SetBinError(3,0.5503192);
   hnueCCinFV_stack_13->SetBinError(4,0.6184442);
   hnueCCinFV_stack_13->SetBinError(5,0.3731328);
   hnueCCinFV_stack_13->SetBinError(6,0.4410694);
   hnueCCinFV_stack_13->SetBinError(7,0.4172458);
   hnueCCinFV_stack_13->SetBinError(8,0.5946997);
   hnueCCinFV_stack_13->SetBinError(9,0.5507173);
   hnueCCinFV_stack_13->SetBinError(11,0.3743212);
   hnueCCinFV_stack_13->SetBinError(13,0.4415857);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.3040869);
   hnueCCinFV_stack_13->SetBinError(20,1.61397);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.4009246);
   hnueCCinFV_stack_13->SetBinError(23,0.5191111);
   hnueCCinFV_stack_13->SetBinError(24,0.4379387);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__14->SetBinContent(1,118.8302);
   hmcerror__14->SetBinContent(2,107.1268);
   hmcerror__14->SetBinContent(3,106.6321);
   hmcerror__14->SetBinContent(4,104.4661);
   hmcerror__14->SetBinContent(5,94.15861);
   hmcerror__14->SetBinContent(6,94.54672);
   hmcerror__14->SetBinContent(7,95.2715);
   hmcerror__14->SetBinContent(8,92.14542);
   hmcerror__14->SetBinContent(9,95.48135);
   hmcerror__14->SetBinContent(10,99.05428);
   hmcerror__14->SetBinContent(11,111.1486);
   hmcerror__14->SetBinContent(12,113.1439);
   hmcerror__14->SetBinContent(13,123.1295);
   hmcerror__14->SetBinContent(14,102.0802);
   hmcerror__14->SetBinContent(15,101.4706);
   hmcerror__14->SetBinContent(16,102.3762);
   hmcerror__14->SetBinContent(17,103.6778);
   hmcerror__14->SetBinContent(18,101.3262);
   hmcerror__14->SetBinContent(19,107.3781);
   hmcerror__14->SetBinContent(20,103.3674);
   hmcerror__14->SetBinContent(21,99.78962);
   hmcerror__14->SetBinContent(22,95.6628);
   hmcerror__14->SetBinContent(23,105.2912);
   hmcerror__14->SetBinContent(24,119.4869);
   hmcerror__14->SetBinError(1,42.54104);
   hmcerror__14->SetBinError(2,39.95609);
   hmcerror__14->SetBinError(3,42.20079);
   hmcerror__14->SetBinError(4,36.7343);
   hmcerror__14->SetBinError(5,37.86676);
   hmcerror__14->SetBinError(6,35.68165);
   hmcerror__14->SetBinError(7,38.05155);
   hmcerror__14->SetBinError(8,33.22159);
   hmcerror__14->SetBinError(9,38.47579);
   hmcerror__14->SetBinError(10,39.84662);
   hmcerror__14->SetBinError(11,39.09001);
   hmcerror__14->SetBinError(12,43.31928);
   hmcerror__14->SetBinError(13,44.54002);
   hmcerror__14->SetBinError(14,38.09977);
   hmcerror__14->SetBinError(15,38.15701);
   hmcerror__14->SetBinError(16,38.90737);
   hmcerror__14->SetBinError(17,49.53111);
   hmcerror__14->SetBinError(18,37.94362);
   hmcerror__14->SetBinError(19,39.31362);
   hmcerror__14->SetBinError(20,38.53415);
   hmcerror__14->SetBinError(21,41.86255);
   hmcerror__14->SetBinError(22,37.78457);
   hmcerror__14->SetBinError(23,40.5579);
   hmcerror__14->SetBinError(24,56.63921);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(2462.59);

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
   98,
   90,
   91,
   75,
   67,
   71,
   83,
   62,
   73,
   80,
   89,
   76,
   91,
   74,
   84,
   66,
   83,
   61,
   64,
   73,
   74,
   79,
   71,
   74};
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
   10.0209,
   9.6093,
   9.6617,
   8.7852,
   8.3119,
   8.5518,
   9.234,
   8.0018,
   8.6693,
   9.0683,
   9.5566,
   8.8425,
   9.6617,
   8.7275,
   9.2886,
   8.2509,
   9.234,
   7.9383,
   8.1273,
   8.6693,
   8.7275,
   9.0124,
   8.5518,
   8.7275};
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
   9.82,
   9.4079,
   9.46,
   8.5831,
   8.1094,
   8.3496,
   9.0323,
   7.7989,
   8.4672,
   8.8665,
   9.3552,
   8.6406,
   9.46,
   8.5253,
   9.0869,
   8.0483,
   9.0323,
   7.7354,
   7.9246,
   8.4672,
   8.5253,
   8.8105,
   8.3496,
   8.5253};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(47.58587);
   Graph_Graph3017->SetMaximum(113.2958);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all");
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
   0.3579987,
   0.3729795,
   0.3957606,
   0.3516386,
   0.4021593,
   0.377397,
   0.3994012,
   0.3605343,
   0.4029666,
   0.4022706,
   0.3516914,
   0.3828689,
   0.361733,
   0.3732337,
   0.37604,
   0.3800431,
   0.4777408,
   0.3744699,
   0.3661232,
   0.372788,
   0.4195081,
   0.3949767,
   0.3851974,
   0.4740203};
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
   0.3579987,
   0.3729795,
   0.3957606,
   0.3516386,
   0.4021593,
   0.377397,
   0.3994012,
   0.3605343,
   0.4029666,
   0.4022706,
   0.3516914,
   0.3828689,
   0.361733,
   0.3732337,
   0.37604,
   0.3800431,
   0.4777408,
   0.3744699,
   0.3661232,
   0.372788,
   0.4195081,
   0.3949767,
   0.3851974,
   0.4740203};
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
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.3215219,
   0.3346225,
   0.3537461,
   0.3079119,
   0.3301836,
   0.330774,
   0.3281045,
   0.3304613,
   0.3515637,
   0.3498558,
   0.3271654,
   0.3468396,
   0.3166376,
   0.3198189,
   0.3461662,
   0.3480231,
   0.3206021,
   0.3120368,
   0.3120233,
   0.3271838,
   0.3618202,
   0.3498645,
   0.3419676,
   0.3370017};
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
   0.3215219,
   0.3346225,
   0.3537461,
   0.3079119,
   0.3301836,
   0.330774,
   0.3281045,
   0.3304613,
   0.3515637,
   0.3498558,
   0.3271654,
   0.3468396,
   0.3166376,
   0.3198189,
   0.3461662,
   0.3480231,
   0.3206021,
   0.3120368,
   0.3120233,
   0.3271838,
   0.3618202,
   0.3498645,
   0.3419676,
   0.3370017};
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
   0.8247063,
   0.8401261,
   0.8534013,
   0.7179365,
   0.7115653,
   0.7509515,
   0.8711944,
   0.6728495,
   0.7645472,
   0.807638,
   0.8007297,
   0.6717109,
   0.739059,
   0.7249203,
   0.8278258,
   0.6446811,
   0.8005572,
   0.6020158,
   0.5960246,
   0.7062185,
   0.7415601,
   0.8258174,
   0.6743204,
   0.6193147};
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
   0.08432959,
   0.08970026,
   0.09060777,
   0.08409621,
   0.08827552,
   0.09045052,
   0.096923,
   0.08683882,
   0.09079574,
   0.09154879,
   0.08598037,
   0.07815268,
   0.07846776,
   0.08549651,
   0.0915398,
   0.08059393,
   0.0890644,
   0.07834397,
   0.07568861,
   0.08386876,
   0.087459,
   0.09421008,
   0.08122046,
   0.07304147};
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
   0.08263894,
   0.08782025,
   0.08871622,
   0.08216161,
   0.08612489,
   0.08831189,
   0.0948059,
   0.08463687,
   0.08867909,
   0.08951153,
   0.08416839,
   0.07636823,
   0.07682965,
   0.08351571,
   0.08955203,
   0.07861495,
   0.08711895,
   0.07634153,
   0.07380089,
   0.0819136,
   0.08543273,
   0.09209955,
   0.07930008,
   0.07134924};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.4757696);
   Graph_Graph3020->SetMaximum(1.010567);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
