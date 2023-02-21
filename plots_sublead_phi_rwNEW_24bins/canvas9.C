#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 13:51:05 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-0.7489993,3.957692,82.82355);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__25->SetBinContent(1,37.32101);
   hmc__25->SetBinContent(2,29.69651);
   hmc__25->SetBinContent(3,29.25225);
   hmc__25->SetBinContent(4,27.70217);
   hmc__25->SetBinContent(5,29.05115);
   hmc__25->SetBinContent(6,29.36783);
   hmc__25->SetBinContent(7,29.9304);
   hmc__25->SetBinContent(8,22.40338);
   hmc__25->SetBinContent(9,26.59755);
   hmc__25->SetBinContent(10,28.31704);
   hmc__25->SetBinContent(11,37.44996);
   hmc__25->SetBinContent(12,31.61682);
   hmc__25->SetBinContent(13,34.15485);
   hmc__25->SetBinContent(14,24.9009);
   hmc__25->SetBinContent(15,32.2114);
   hmc__25->SetBinContent(16,25.23697);
   hmc__25->SetBinContent(17,28.77886);
   hmc__25->SetBinContent(18,29.98638);
   hmc__25->SetBinContent(19,37.35175);
   hmc__25->SetBinContent(20,26.73578);
   hmc__25->SetBinContent(21,26.36421);
   hmc__25->SetBinContent(22,26.04435);
   hmc__25->SetBinContent(23,36.97972);
   hmc__25->SetBinContent(24,33.60639);
   hmc__25->SetBinError(1,17.15345);
   hmc__25->SetBinError(2,13.55095);
   hmc__25->SetBinError(3,13.92071);
   hmc__25->SetBinError(4,12.82793);
   hmc__25->SetBinError(5,12.86326);
   hmc__25->SetBinError(6,12.59048);
   hmc__25->SetBinError(7,15.83041);
   hmc__25->SetBinError(8,11.26663);
   hmc__25->SetBinError(9,15.78615);
   hmc__25->SetBinError(10,14.42307);
   hmc__25->SetBinError(11,15.09955);
   hmc__25->SetBinError(12,13.56957);
   hmc__25->SetBinError(13,14.86029);
   hmc__25->SetBinError(14,11.15971);
   hmc__25->SetBinError(15,14.14769);
   hmc__25->SetBinError(16,11.90001);
   hmc__25->SetBinError(17,16.24119);
   hmc__25->SetBinError(18,23.52951);
   hmc__25->SetBinError(19,15.04209);
   hmc__25->SetBinError(20,14.7644);
   hmc__25->SetBinError(21,14.46329);
   hmc__25->SetBinError(22,18.22646);
   hmc__25->SetBinError(23,15.43963);
   hmc__25->SetBinError(24,15.27253);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-0.7489993);
   hmc__25->SetMaximum(78.64492);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,-3.15,3.15);
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(39.32246);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.255189);
   hbadmatch_stack_1->SetBinContent(2,1.706466);
   hbadmatch_stack_1->SetBinContent(3,0.8770706);
   hbadmatch_stack_1->SetBinContent(4,0.5884556);
   hbadmatch_stack_1->SetBinContent(5,1.49185);
   hbadmatch_stack_1->SetBinContent(6,1.645333);
   hbadmatch_stack_1->SetBinContent(7,0.8492429);
   hbadmatch_stack_1->SetBinContent(8,0.3934307);
   hbadmatch_stack_1->SetBinContent(9,0.7302274);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,1.272602);
   hbadmatch_stack_1->SetBinContent(12,1.203707);
   hbadmatch_stack_1->SetBinContent(13,2.20137);
   hbadmatch_stack_1->SetBinContent(14,1.119364);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.5884556);
   hbadmatch_stack_1->SetBinContent(17,1.139364);
   hbadmatch_stack_1->SetBinContent(18,1.324511);
   hbadmatch_stack_1->SetBinContent(19,1.270501);
   hbadmatch_stack_1->SetBinContent(20,1.421886);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.9269427);
   hbadmatch_stack_1->SetBinContent(24,0.536893);
   hbadmatch_stack_1->SetBinError(1,0.584174);
   hbadmatch_stack_1->SetBinError(2,0.7348866);
   hbadmatch_stack_1->SetBinError(3,0.5197486);
   hbadmatch_stack_1->SetBinError(4,0.3397478);
   hbadmatch_stack_1->SetBinError(5,0.6205052);
   hbadmatch_stack_1->SetBinError(6,0.6990273);
   hbadmatch_stack_1->SetBinError(7,0.4259355);
   hbadmatch_stack_1->SetBinError(8,0.2781975);
   hbadmatch_stack_1->SetBinError(9,0.4379386);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.6002504);
   hbadmatch_stack_1->SetBinError(12,0.4921523);
   hbadmatch_stack_1->SetBinError(13,0.8344062);
   hbadmatch_stack_1->SetBinError(14,0.5735892);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.3397478);
   hbadmatch_stack_1->SetBinError(17,0.598124);
   hbadmatch_stack_1->SetBinError(18,0.6096707);
   hbadmatch_stack_1->SetBinError(19,0.5895188);
   hbadmatch_stack_1->SetBinError(20,0.5393236);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.4800908);
   hbadmatch_stack_1->SetBinError(24,0.3929602);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,2.345802);
   hext_stack_2->SetBinContent(2,4.919439);
   hext_stack_2->SetBinContent(3,1.779209);
   hext_stack_2->SetBinContent(4,2.110787);
   hext_stack_2->SetBinContent(5,5.725457);
   hext_stack_2->SetBinContent(6,6.400202);
   hext_stack_2->SetBinContent(7,5.40824);
   hext_stack_2->SetBinContent(8,1.461993);
   hext_stack_2->SetBinContent(9,2.681789);
   hext_stack_2->SetBinContent(10,2.096426);
   hext_stack_2->SetBinContent(11,7.325902);
   hext_stack_2->SetBinContent(12,4.035629);
   hext_stack_2->SetBinContent(13,1.461993);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,6.919303);
   hext_stack_2->SetBinContent(16,1.461993);
   hext_stack_2->SetBinContent(17,1.704188);
   hext_stack_2->SetBinContent(18,3.946247);
   hext_stack_2->SetBinContent(19,11.66439);
   hext_stack_2->SetBinContent(20,2.103607);
   hext_stack_2->SetBinContent(21,3.539649);
   hext_stack_2->SetBinContent(22,1.697008);
   hext_stack_2->SetBinContent(23,3.297453);
   hext_stack_2->SetBinContent(24,3.972198);
   hext_stack_2->SetBinError(1,0.9989624);
   hext_stack_2->SetBinError(2,1.563138);
   hext_stack_2->SetBinError(3,0.9206235);
   hext_stack_2->SetBinError(4,0.8669371);
   hext_stack_2->SetBinError(5,1.72489);
   hext_stack_2->SetBinError(6,1.648403);
   hext_stack_2->SetBinError(7,1.63365);
   hext_stack_2->SetBinError(8,0.7356036);
   hext_stack_2->SetBinError(9,1.018372);
   hext_stack_2->SetBinError(10,1.074236);
   hext_stack_2->SetBinError(11,2.026085);
   hext_stack_2->SetBinError(12,1.409463);
   hext_stack_2->SetBinError(13,0.7356036);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,1.984867);
   hext_stack_2->SetBinError(16,0.7356036);
   hext_stack_2->SetBinError(17,0.7656743);
   hext_stack_2->SetBinError(18,1.458663);
   hext_stack_2->SetBinError(19,2.607766);
   hext_stack_2->SetBinError(20,0.9761052);
   hext_stack_2->SetBinError(21,1.400848);
   hext_stack_2->SetBinError(22,0.8873887);
   hext_stack_2->SetBinError(23,1.384641);
   hext_stack_2->SetBinError(24,1.288106);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6669159);
   hdirt_stack_3->SetBinContent(4,0.9051592);
   hdirt_stack_3->SetBinContent(5,0.2623434);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.002351481);
   hdirt_stack_3->SetBinContent(17,0.4192812);
   hdirt_stack_3->SetBinContent(18,0.5529928);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.4026575);
   hdirt_stack_3->SetBinError(1,0.4822861);
   hdirt_stack_3->SetBinError(4,0.5633738);
   hdirt_stack_3->SetBinError(5,0.2623434);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(15,0.002351481);
   hdirt_stack_3->SetBinError(17,0.3058667);
   hdirt_stack_3->SetBinError(18,0.437291);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.2984452);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,8.134668);
   houtFV_stack_4->SetBinContent(2,4.910383);
   houtFV_stack_4->SetBinContent(3,6.735071);
   houtFV_stack_4->SetBinContent(4,3.861144);
   houtFV_stack_4->SetBinContent(5,4.585988);
   houtFV_stack_4->SetBinContent(6,5.273649);
   houtFV_stack_4->SetBinContent(7,7.122415);
   houtFV_stack_4->SetBinContent(8,3.99758);
   houtFV_stack_4->SetBinContent(9,3.51815);
   houtFV_stack_4->SetBinContent(10,3.174259);
   houtFV_stack_4->SetBinContent(11,6.30898);
   houtFV_stack_4->SetBinContent(12,4.83481);
   houtFV_stack_4->SetBinContent(13,5.37813);
   houtFV_stack_4->SetBinContent(14,4.644856);
   houtFV_stack_4->SetBinContent(15,5.270045);
   houtFV_stack_4->SetBinContent(16,3.663755);
   houtFV_stack_4->SetBinContent(17,6.799594);
   houtFV_stack_4->SetBinContent(18,5.370012);
   houtFV_stack_4->SetBinContent(19,3.957739);
   houtFV_stack_4->SetBinContent(20,3.838014);
   houtFV_stack_4->SetBinContent(21,2.292881);
   houtFV_stack_4->SetBinContent(22,5.070172);
   houtFV_stack_4->SetBinContent(23,5.448762);
   houtFV_stack_4->SetBinContent(24,7.105201);
   houtFV_stack_4->SetBinError(1,1.498195);
   houtFV_stack_4->SetBinError(2,1.107992);
   houtFV_stack_4->SetBinError(3,1.403288);
   houtFV_stack_4->SetBinError(4,0.9305536);
   houtFV_stack_4->SetBinError(5,1.069624);
   houtFV_stack_4->SetBinError(6,1.194504);
   houtFV_stack_4->SetBinError(7,1.384208);
   houtFV_stack_4->SetBinError(8,0.9690017);
   houtFV_stack_4->SetBinError(9,0.9171397);
   houtFV_stack_4->SetBinError(10,0.8768439);
   houtFV_stack_4->SetBinError(11,1.313361);
   houtFV_stack_4->SetBinError(12,1.091997);
   houtFV_stack_4->SetBinError(13,1.109846);
   houtFV_stack_4->SetBinError(14,1.075365);
   houtFV_stack_4->SetBinError(15,1.134691);
   houtFV_stack_4->SetBinError(16,0.9089453);
   houtFV_stack_4->SetBinError(17,1.280634);
   houtFV_stack_4->SetBinError(18,1.160264);
   houtFV_stack_4->SetBinError(19,0.9603742);
   houtFV_stack_4->SetBinError(20,0.9246477);
   houtFV_stack_4->SetBinError(21,0.7469444);
   houtFV_stack_4->SetBinError(22,1.17707);
   houtFV_stack_4->SetBinError(23,1.231939);
   houtFV_stack_4->SetBinError(24,1.362661);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.991394);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.899046);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.984746);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.330668);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.782541);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.329508);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.172894);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.196305);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.985658);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.346782);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.332668);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.501812);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.371185);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.617966);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.052332);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.89755);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.903959);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.759714);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.967304);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.135368);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.176382);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.612411);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.588673);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.375257);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9559655);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7740746);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8399863);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8150183);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6854039);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8508815);
   hNCpi0inFVres_stack_7->SetBinError(7,0.776626);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6228274);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8765298);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8539257);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8765302);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9246454);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7874921);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6662552);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8018591);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7703363);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9327483);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7925014);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8170852);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8116687);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7539518);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8978072);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9495316);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8527468);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.450808);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.785944);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.423572);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.03638);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.47854);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.380558);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.408626);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.855362);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.463594);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9210359);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.269622);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.394176);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.672176);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.574362);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.157022);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.422076);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.673344);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.21299);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.021098);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.673176);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.148644);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.087604);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.784776);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.64694);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4301228);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.509769);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4132003);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.529493);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3911843);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3962917);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4365597);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5182246);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4157824);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3020022);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3747542);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4051946);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3463259);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3958819);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.292065);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.406154);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4524662);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3458579);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4844531);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4146887);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5195996);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2767844);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4184261);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4579527);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.70103);
   hCCpi0inFV_stack_10->SetBinContent(2,5.094341);
   hCCpi0inFV_stack_10->SetBinContent(3,6.262919);
   hCCpi0inFV_stack_10->SetBinContent(4,3.743849);
   hCCpi0inFV_stack_10->SetBinContent(5,5.318449);
   hCCpi0inFV_stack_10->SetBinContent(6,3.815968);
   hCCpi0inFV_stack_10->SetBinContent(7,4.23851);
   hCCpi0inFV_stack_10->SetBinContent(8,3.574742);
   hCCpi0inFV_stack_10->SetBinContent(9,4.639261);
   hCCpi0inFV_stack_10->SetBinContent(10,6.343781);
   hCCpi0inFV_stack_10->SetBinContent(11,8.093278);
   hCCpi0inFV_stack_10->SetBinContent(12,7.242354);
   hCCpi0inFV_stack_10->SetBinContent(13,9.50877);
   hCCpi0inFV_stack_10->SetBinContent(14,4.416037);
   hCCpi0inFV_stack_10->SetBinContent(15,4.462696);
   hCCpi0inFV_stack_10->SetBinContent(16,5.222125);
   hCCpi0inFV_stack_10->SetBinContent(17,4.455655);
   hCCpi0inFV_stack_10->SetBinContent(18,5.958138);
   hCCpi0inFV_stack_10->SetBinContent(19,3.17933);
   hCCpi0inFV_stack_10->SetBinContent(20,4.839881);
   hCCpi0inFV_stack_10->SetBinContent(21,5.247424);
   hCCpi0inFV_stack_10->SetBinContent(22,4.281664);
   hCCpi0inFV_stack_10->SetBinContent(23,8.099408);
   hCCpi0inFV_stack_10->SetBinContent(24,6.368236);
   hCCpi0inFV_stack_10->SetBinError(1,1.394015);
   hCCpi0inFV_stack_10->SetBinError(2,1.029376);
   hCCpi0inFV_stack_10->SetBinError(3,1.272432);
   hCCpi0inFV_stack_10->SetBinError(4,0.9680369);
   hCCpi0inFV_stack_10->SetBinError(5,1.176946);
   hCCpi0inFV_stack_10->SetBinError(6,0.9197592);
   hCCpi0inFV_stack_10->SetBinError(7,1.127982);
   hCCpi0inFV_stack_10->SetBinError(8,0.9206449);
   hCCpi0inFV_stack_10->SetBinError(9,1.10269);
   hCCpi0inFV_stack_10->SetBinError(10,1.287983);
   hCCpi0inFV_stack_10->SetBinError(11,1.358078);
   hCCpi0inFV_stack_10->SetBinError(12,1.369577);
   hCCpi0inFV_stack_10->SetBinError(13,1.625709);
   hCCpi0inFV_stack_10->SetBinError(14,1.052522);
   hCCpi0inFV_stack_10->SetBinError(15,1.099189);
   hCCpi0inFV_stack_10->SetBinError(16,1.128059);
   hCCpi0inFV_stack_10->SetBinError(17,1.096253);
   hCCpi0inFV_stack_10->SetBinError(18,1.233999);
   hCCpi0inFV_stack_10->SetBinError(19,0.8779761);
   hCCpi0inFV_stack_10->SetBinError(20,1.092906);
   hCCpi0inFV_stack_10->SetBinError(21,1.19321);
   hCCpi0inFV_stack_10->SetBinError(22,1.044956);
   hCCpi0inFV_stack_10->SetBinError(23,1.392417);
   hCCpi0inFV_stack_10->SetBinError(24,1.262252);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.662242);
   hNCinFV_stack_11->SetBinContent(2,1.176911);
   hNCinFV_stack_11->SetBinContent(3,1.804013);
   hNCinFV_stack_11->SetBinContent(4,1.908829);
   hNCinFV_stack_11->SetBinContent(5,2.052291);
   hNCinFV_stack_11->SetBinContent(6,0.8753801);
   hNCinFV_stack_11->SetBinContent(7,1.660551);
   hNCinFV_stack_11->SetBinContent(8,1.947476);
   hNCinFV_stack_11->SetBinContent(9,1.073786);
   hNCinFV_stack_11->SetBinContent(10,1.073786);
   hNCinFV_stack_11->SetBinContent(11,1.804013);
   hNCinFV_stack_11->SetBinContent(12,0.9303237);
   hNCinFV_stack_11->SetBinContent(13,2.00411);
   hNCinFV_stack_11->SetBinContent(14,1.125349);
   hNCinFV_stack_11->SetBinContent(15,2.289344);
   hNCinFV_stack_11->SetBinContent(16,2.694);
   hNCinFV_stack_11->SetBinContent(17,1.517089);
   hNCinFV_stack_11->SetBinContent(18,1.463836);
   hNCinFV_stack_11->SetBinContent(19,1.804013);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,1.517089);
   hNCinFV_stack_11->SetBinContent(22,1.465526);
   hNCinFV_stack_11->SetBinContent(23,1.759065);
   hNCinFV_stack_11->SetBinContent(24,0.9818863);
   hNCinFV_stack_11->SetBinError(1,0.6513556);
   hNCinFV_stack_11->SetBinError(2,0.4804759);
   hNCinFV_stack_11->SetBinError(3,0.7075491);
   hNCinFV_stack_11->SetBinError(4,0.6506224);
   hNCinFV_stack_11->SetBinError(5,0.7073425);
   hNCinFV_stack_11->SetBinError(6,0.5191111);
   hNCinFV_stack_11->SetBinError(7,0.650847);
   hNCinFV_stack_11->SetBinError(8,0.7600326);
   hNCinFV_stack_11->SetBinError(9,0.5557297);
   hNCinFV_stack_11->SetBinError(10,0.5557297);
   hNCinFV_stack_11->SetBinError(11,0.7075491);
   hNCinFV_stack_11->SetBinError(12,0.4814682);
   hNCinFV_stack_11->SetBinError(13,0.7352871);
   hNCinFV_stack_11->SetBinError(14,0.5194673);
   hNCinFV_stack_11->SetBinError(15,0.8330862);
   hNCinFV_stack_11->SetBinError(16,0.7598915);
   hNCinFV_stack_11->SetBinError(17,0.5887087);
   hNCinFV_stack_11->SetBinError(18,0.620407);
   hNCinFV_stack_11->SetBinError(19,0.7075491);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.5887087);
   hNCinFV_stack_11->SetBinError(22,0.6209405);
   hNCinFV_stack_11->SetBinError(23,0.6219462);
   hNCinFV_stack_11->SetBinError(24,0.4391155);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.456337);
   hnumuCCinFV_stack_12->SetBinContent(2,4.036579);
   hnumuCCinFV_stack_12->SetBinContent(3,3.890441);
   hnumuCCinFV_stack_12->SetBinContent(4,6.188995);
   hnumuCCinFV_stack_12->SetBinContent(5,3.297885);
   hnumuCCinFV_stack_12->SetBinContent(6,3.281834);
   hnumuCCinFV_stack_12->SetBinContent(7,2.888907);
   hnumuCCinFV_stack_12->SetBinContent(8,4.782619);
   hnumuCCinFV_stack_12->SetBinContent(9,5.170121);
   hnumuCCinFV_stack_12->SetBinContent(10,7.694537);
   hnumuCCinFV_stack_12->SetBinContent(11,4.790383);
   hnumuCCinFV_stack_12->SetBinContent(12,4.22274);
   hnumuCCinFV_stack_12->SetBinContent(13,5.529216);
   hnumuCCinFV_stack_12->SetBinContent(14,6.912666);
   hnumuCCinFV_stack_12->SetBinContent(15,5.442753);
   hnumuCCinFV_stack_12->SetBinContent(16,4.133898);
   hnumuCCinFV_stack_12->SetBinContent(17,4.082688);
   hnumuCCinFV_stack_12->SetBinContent(18,4.202913);
   hnumuCCinFV_stack_12->SetBinContent(19,5.396054);
   hnumuCCinFV_stack_12->SetBinContent(20,3.982366);
   hnumuCCinFV_stack_12->SetBinContent(21,4.76179);
   hnumuCCinFV_stack_12->SetBinContent(22,3.978178);
   hnumuCCinFV_stack_12->SetBinContent(23,7.516935);
   hnumuCCinFV_stack_12->SetBinContent(24,4.677849);
   hnumuCCinFV_stack_12->SetBinError(1,1.301037);
   hnumuCCinFV_stack_12->SetBinError(2,1.45806);
   hnumuCCinFV_stack_12->SetBinError(3,1.003573);
   hnumuCCinFV_stack_12->SetBinError(4,1.515881);
   hnumuCCinFV_stack_12->SetBinError(5,0.9062202);
   hnumuCCinFV_stack_12->SetBinError(6,1.400905);
   hnumuCCinFV_stack_12->SetBinError(7,0.8606324);
   hnumuCCinFV_stack_12->SetBinError(8,1.139648);
   hnumuCCinFV_stack_12->SetBinError(9,1.113514);
   hnumuCCinFV_stack_12->SetBinError(10,1.789227);
   hnumuCCinFV_stack_12->SetBinError(11,1.31504);
   hnumuCCinFV_stack_12->SetBinError(12,1.048644);
   hnumuCCinFV_stack_12->SetBinError(13,1.20323);
   hnumuCCinFV_stack_12->SetBinError(14,1.38183);
   hnumuCCinFV_stack_12->SetBinError(15,1.253181);
   hnumuCCinFV_stack_12->SetBinError(16,1.213693);
   hnumuCCinFV_stack_12->SetBinError(17,1.09298);
   hnumuCCinFV_stack_12->SetBinError(18,1.108339);
   hnumuCCinFV_stack_12->SetBinError(19,1.241788);
   hnumuCCinFV_stack_12->SetBinError(20,1.09351);
   hnumuCCinFV_stack_12->SetBinError(21,1.17385);
   hnumuCCinFV_stack_12->SetBinError(22,1.152887);
   hnumuCCinFV_stack_12->SetBinError(23,1.888252);
   hnumuCCinFV_stack_12->SetBinError(24,1.282176);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(6,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,1.376641);
   hnueCCinFV_stack_13->SetBinContent(20,1.919326);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(24,0.5113685);
   hnueCCinFV_stack_13->SetBinError(1,0.4494399);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(6,0.3654046);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,1.178006);
   hnueCCinFV_stack_13->SetBinError(20,1.589338);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.2331833);
   hnueCCinFV_stack_13->SetBinError(23,0.2770047);
   hnueCCinFV_stack_13->SetBinError(24,0.3808243);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__26->SetBinContent(1,37.32101);
   hmcerror__26->SetBinContent(2,29.69651);
   hmcerror__26->SetBinContent(3,29.25225);
   hmcerror__26->SetBinContent(4,27.70217);
   hmcerror__26->SetBinContent(5,29.05115);
   hmcerror__26->SetBinContent(6,29.36783);
   hmcerror__26->SetBinContent(7,29.9304);
   hmcerror__26->SetBinContent(8,22.40338);
   hmcerror__26->SetBinContent(9,26.59755);
   hmcerror__26->SetBinContent(10,28.31704);
   hmcerror__26->SetBinContent(11,37.44996);
   hmcerror__26->SetBinContent(12,31.61682);
   hmcerror__26->SetBinContent(13,34.15485);
   hmcerror__26->SetBinContent(14,24.9009);
   hmcerror__26->SetBinContent(15,32.2114);
   hmcerror__26->SetBinContent(16,25.23697);
   hmcerror__26->SetBinContent(17,28.77886);
   hmcerror__26->SetBinContent(18,29.98638);
   hmcerror__26->SetBinContent(19,37.35175);
   hmcerror__26->SetBinContent(20,26.73578);
   hmcerror__26->SetBinContent(21,26.36421);
   hmcerror__26->SetBinContent(22,26.04435);
   hmcerror__26->SetBinContent(23,36.97972);
   hmcerror__26->SetBinContent(24,33.60639);
   hmcerror__26->SetBinError(1,17.15345);
   hmcerror__26->SetBinError(2,13.55095);
   hmcerror__26->SetBinError(3,13.92071);
   hmcerror__26->SetBinError(4,12.82793);
   hmcerror__26->SetBinError(5,12.86326);
   hmcerror__26->SetBinError(6,12.59048);
   hmcerror__26->SetBinError(7,15.83041);
   hmcerror__26->SetBinError(8,11.26663);
   hmcerror__26->SetBinError(9,15.78615);
   hmcerror__26->SetBinError(10,14.42307);
   hmcerror__26->SetBinError(11,15.09955);
   hmcerror__26->SetBinError(12,13.56957);
   hmcerror__26->SetBinError(13,14.86029);
   hmcerror__26->SetBinError(14,11.15971);
   hmcerror__26->SetBinError(15,14.14769);
   hmcerror__26->SetBinError(16,11.90001);
   hmcerror__26->SetBinError(17,16.24119);
   hmcerror__26->SetBinError(18,23.52951);
   hmcerror__26->SetBinError(19,15.04209);
   hmcerror__26->SetBinError(20,14.7644);
   hmcerror__26->SetBinError(21,14.46329);
   hmcerror__26->SetBinError(22,18.22646);
   hmcerror__26->SetBinError(23,15.43963);
   hmcerror__26->SetBinError(24,15.27253);
   hmcerror__26->SetBinError(25,0.3895343);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[24] = {
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
   Double_t _fy3033[24] = {
   35,
   30,
   29,
   18,
   23,
   18,
   34,
   22,
   21,
   21,
   29,
   23,
   32,
   17,
   23,
   15,
   29,
   22,
   22,
   25,
   28,
   20,
   22,
   27};
   Double_t _felx3033[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3033[24] = {
   6.0548,
   5.6197,
   5.5285,
   4.4008,
   4.9457,
   4.4008,
   5.9703,
   4.8417,
   4.7354,
   4.7354,
   5.5285,
   4.9457,
   5.7977,
   4.2835,
   4.9457,
   4.0385,
   5.5285,
   4.8417,
   4.8417,
   5.1474,
   5.4358,
   4.6266,
   4.8417,
   5.3414};
   Double_t _fehx3033[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3033[24] = {
   5.8483,
   5.4117,
   5.3201,
   4.1858,
   4.7346,
   4.1858,
   5.7635,
   4.6299,
   4.5229,
   4.5229,
   5.3201,
   4.7346,
   5.5904,
   4.0673,
   4.7346,
   3.8197,
   5.3201,
   4.6299,
   4.6299,
   4.9374,
   5.2271,
   4.4133,
   4.6299,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-3.78,3.78);
   Graph_Graph3033->SetMinimum(7.97282);
   Graph_Graph3033->SetMaximum(43.83698);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[24] = {
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
   Double_t _fy3034[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3034[24] = {
   0.4596193,
   0.4563146,
   0.4758852,
   0.4630659,
   0.4427798,
   0.4287168,
   0.5289072,
   0.5028987,
   0.593519,
   0.5093423,
   0.4031926,
   0.4291884,
   0.4350858,
   0.4481649,
   0.4392139,
   0.4715311,
   0.5643446,
   0.7846732,
   0.4027145,
   0.5522336,
   0.5485954,
   0.6998241,
   0.4175161,
   0.4544532};
   Double_t _fehx3034[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3034[24] = {
   0.4596193,
   0.4563146,
   0.4758852,
   0.4630659,
   0.4427798,
   0.4287168,
   0.5289072,
   0.5028987,
   0.593519,
   0.5093423,
   0.4031926,
   0.4291884,
   0.4350858,
   0.4481649,
   0.4392139,
   0.4715311,
   0.5643446,
   0.7846732,
   0.4027145,
   0.5522336,
   0.5485954,
   0.6998241,
   0.4175161,
   0.4544532};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-3.78,3.78);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[24] = {
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
   Double_t _fy3035[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3035[24] = {
   0.2464619,
   0.2617297,
   0.2698482,
   0.2651204,
   0.2220294,
   0.2404127,
   0.2446044,
   0.2672959,
   0.2759254,
   0.2629772,
   0.213645,
   0.2596915,
   0.2462069,
   0.2444425,
   0.2232747,
   0.2924438,
   0.2517492,
   0.2416114,
   0.2314364,
   0.2663174,
   0.2528072,
   0.2916108,
   0.2692145,
   0.2493715};
   Double_t _fehx3035[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3035[24] = {
   0.2464619,
   0.2617297,
   0.2698482,
   0.2651204,
   0.2220294,
   0.2404127,
   0.2446044,
   0.2672959,
   0.2759254,
   0.2629772,
   0.213645,
   0.2596915,
   0.2462069,
   0.2444425,
   0.2232747,
   0.2924438,
   0.2517492,
   0.2416114,
   0.2314364,
   0.2663174,
   0.2528072,
   0.2916108,
   0.2692145,
   0.2493715};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-3.78,3.78);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[24] = {
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
   Double_t _fy3036[24] = {
   0.9378096,
   1.01022,
   0.9913766,
   0.6497687,
   0.7917071,
   0.6129155,
   1.135969,
   0.9819947,
   0.7895463,
   0.7416028,
   0.7743666,
   0.7274609,
   0.9369095,
   0.6827063,
   0.714033,
   0.5943661,
   1.007684,
   0.7336665,
   0.5889952,
   0.9350766,
   1.062046,
   0.7679209,
   0.5949206,
   0.8034187};
   Double_t _felx3036[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fely3036[24] = {
   0.1622357,
   0.1892377,
   0.188994,
   0.1588612,
   0.1702411,
   0.149851,
   0.1994727,
   0.2161147,
   0.1780389,
   0.1672279,
   0.1476236,
   0.1564262,
   0.1697475,
   0.1720219,
   0.1535388,
   0.1600232,
   0.1921028,
   0.1614633,
   0.1296245,
   0.1925285,
   0.206181,
   0.1776432,
   0.1309285,
   0.15894};
   Double_t _fehx3036[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
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
   Double_t _fehy3036[24] = {
   0.1567026,
   0.1822335,
   0.1818698,
   0.1511001,
   0.1629746,
   0.1425301,
   0.1925634,
   0.2066608,
   0.1700495,
   0.1597236,
   0.1420589,
   0.1497494,
   0.1636781,
   0.1633395,
   0.1469853,
   0.1513534,
   0.1848614,
   0.1544001,
   0.123954,
   0.1846739,
   0.198265,
   0.1694533,
   0.125201,
   0.152715};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-3.78,3.78);
   Graph_Graph3036->SetMinimum(0.3449241);
   Graph_Graph3036->SetMaximum(1.417951);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
