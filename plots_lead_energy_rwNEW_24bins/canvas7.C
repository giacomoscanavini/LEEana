#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 11:38:29 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",190,172,1200,900);
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
   pad1->Range(-92.30769,-6.729077,676.9231,744.0942);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__19->SetBinContent(1,10.97008);
   hmc__19->SetBinContent(2,46.1911);
   hmc__19->SetBinContent(3,125.6885);
   hmc__19->SetBinContent(4,235.5194);
   hmc__19->SetBinContent(5,333.2679);
   hmc__19->SetBinContent(6,336.4538);
   hmc__19->SetBinContent(7,326.3394);
   hmc__19->SetBinContent(8,252.7185);
   hmc__19->SetBinContent(9,198.6007);
   hmc__19->SetBinContent(10,174.4559);
   hmc__19->SetBinContent(11,136.9153);
   hmc__19->SetBinContent(12,119.9722);
   hmc__19->SetBinContent(13,98.71515);
   hmc__19->SetBinContent(14,76.72907);
   hmc__19->SetBinContent(15,58.4028);
   hmc__19->SetBinContent(16,57.02228);
   hmc__19->SetBinContent(17,41.12959);
   hmc__19->SetBinContent(18,32.2966);
   hmc__19->SetBinContent(19,27.06703);
   hmc__19->SetBinContent(20,21.66616);
   hmc__19->SetBinContent(21,13.59461);
   hmc__19->SetBinContent(22,13.87761);
   hmc__19->SetBinContent(23,11.31741);
   hmc__19->SetBinContent(24,9.701808);
   hmc__19->SetBinContent(25,84.03551);
   hmc__19->SetBinError(1,6.093605);
   hmc__19->SetBinError(2,16.92502);
   hmc__19->SetBinError(3,41.68195);
   hmc__19->SetBinError(4,77.00123);
   hmc__19->SetBinError(5,112.8378);
   hmc__19->SetBinError(6,118.245);
   hmc__19->SetBinError(7,121.131);
   hmc__19->SetBinError(8,108.1042);
   hmc__19->SetBinError(9,81.48839);
   hmc__19->SetBinError(10,75.20783);
   hmc__19->SetBinError(11,59.06445);
   hmc__19->SetBinError(12,53.61785);
   hmc__19->SetBinError(13,42.36914);
   hmc__19->SetBinError(14,34.39571);
   hmc__19->SetBinError(15,26.98509);
   hmc__19->SetBinError(16,26.02588);
   hmc__19->SetBinError(17,21.23202);
   hmc__19->SetBinError(18,20.63434);
   hmc__19->SetBinError(19,14.28341);
   hmc__19->SetBinError(20,10.36007);
   hmc__19->SetBinError(21,7.592083);
   hmc__19->SetBinError(22,10.89668);
   hmc__19->SetBinError(23,7.326656);
   hmc__19->SetBinError(24,8.507999);
   hmc__19->SetBinError(25,27.25537);
   hmc__19->SetMinimum(-6.729077);
   hmc__19->SetMaximum(706.553);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,600);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(353.2766);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,3.025453);
   hbadmatch_stack_1->SetBinContent(3,5.744367);
   hbadmatch_stack_1->SetBinContent(4,8.383833);
   hbadmatch_stack_1->SetBinContent(5,6.344347);
   hbadmatch_stack_1->SetBinContent(6,6.584758);
   hbadmatch_stack_1->SetBinContent(7,6.444678);
   hbadmatch_stack_1->SetBinContent(8,6.676394);
   hbadmatch_stack_1->SetBinContent(9,3.854151);
   hbadmatch_stack_1->SetBinContent(10,3.482001);
   hbadmatch_stack_1->SetBinContent(11,1.073786);
   hbadmatch_stack_1->SetBinContent(12,1.166219);
   hbadmatch_stack_1->SetBinContent(13,0.6803553);
   hbadmatch_stack_1->SetBinContent(14,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.785171);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.9286332);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.9465663);
   hbadmatch_stack_1->SetBinError(3,1.43726);
   hbadmatch_stack_1->SetBinError(4,1.419248);
   hbadmatch_stack_1->SetBinError(5,1.266052);
   hbadmatch_stack_1->SetBinError(6,1.689362);
   hbadmatch_stack_1->SetBinError(7,1.283061);
   hbadmatch_stack_1->SetBinError(8,2.257367);
   hbadmatch_stack_1->SetBinError(9,1.004904);
   hbadmatch_stack_1->SetBinError(10,1.007422);
   hbadmatch_stack_1->SetBinError(11,0.5557297);
   hbadmatch_stack_1->SetBinError(12,0.6015088);
   hbadmatch_stack_1->SetBinError(13,0.4810838);
   hbadmatch_stack_1->SetBinError(14,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.3925882);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.48078);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,4.435048);
   hext_stack_2->SetBinContent(2,7.056177);
   hext_stack_2->SetBinContent(3,15.93345);
   hext_stack_2->SetBinContent(4,17.40263);
   hext_stack_2->SetBinContent(5,24.22537);
   hext_stack_2->SetBinContent(6,22.32648);
   hext_stack_2->SetBinContent(7,29.0267);
   hext_stack_2->SetBinContent(8,19.42561);
   hext_stack_2->SetBinContent(9,7.772812);
   hext_stack_2->SetBinContent(10,10.68244);
   hext_stack_2->SetBinContent(11,2.435184);
   hext_stack_2->SetBinContent(12,8.317863);
   hext_stack_2->SetBinContent(13,4.352847);
   hext_stack_2->SetBinContent(14,2.110787);
   hext_stack_2->SetBinContent(15,0.8131978);
   hext_stack_2->SetBinContent(16,5.158864);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(20,2.566457);
   hext_stack_2->SetBinContent(22,1.137595);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.6487947);
   hext_stack_2->SetBinError(1,1.533985);
   hext_stack_2->SetBinError(2,1.651211);
   hext_stack_2->SetBinError(3,2.689148);
   hext_stack_2->SetBinError(4,2.751623);
   hext_stack_2->SetBinError(5,3.442882);
   hext_stack_2->SetBinError(6,3.185898);
   hext_stack_2->SetBinError(7,3.904197);
   hext_stack_2->SetBinError(8,3.204057);
   hext_stack_2->SetBinError(9,1.843762);
   hext_stack_2->SetBinError(10,2.209997);
   hext_stack_2->SetBinError(11,0.9256422);
   hext_stack_2->SetBinError(12,2.037999);
   hext_stack_2->SetBinError(13,1.514272);
   hext_stack_2->SetBinError(14,0.8669371);
   hext_stack_2->SetBinError(15,0.5750177);
   hext_stack_2->SetBinError(16,1.680734);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(20,1.283228);
   hext_stack_2->SetBinError(22,0.6602113);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.4587671);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.9208429);
   hdirt_stack_3->SetBinContent(3,1.402799);
   hdirt_stack_3->SetBinContent(4,0.3942141);
   hdirt_stack_3->SetBinContent(5,4.024006);
   hdirt_stack_3->SetBinContent(6,1.271017);
   hdirt_stack_3->SetBinContent(7,0.8398326);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,1.114166);
   hdirt_stack_3->SetBinContent(10,0.4762587);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(2,0.4257142);
   hdirt_stack_3->SetBinError(3,0.6123533);
   hdirt_stack_3->SetBinError(4,0.2804494);
   hdirt_stack_3->SetBinError(5,1.295563);
   hdirt_stack_3->SetBinError(6,0.5442829);
   hdirt_stack_3->SetBinError(7,0.4497571);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.569712);
   hdirt_stack_3->SetBinError(10,0.3652866);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(25,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,3.359748);
   houtFV_stack_4->SetBinContent(3,7.392878);
   houtFV_stack_4->SetBinContent(4,8.157223);
   houtFV_stack_4->SetBinContent(5,9.180086);
   houtFV_stack_4->SetBinContent(6,11.05924);
   houtFV_stack_4->SetBinContent(7,10.40128);
   houtFV_stack_4->SetBinContent(8,9.706869);
   houtFV_stack_4->SetBinContent(9,6.856907);
   houtFV_stack_4->SetBinContent(10,6.900017);
   houtFV_stack_4->SetBinContent(11,5.427523);
   houtFV_stack_4->SetBinContent(12,2.780828);
   houtFV_stack_4->SetBinContent(13,2.697046);
   houtFV_stack_4->SetBinContent(14,1.609689);
   houtFV_stack_4->SetBinContent(15,1.765367);
   houtFV_stack_4->SetBinContent(16,1.463836);
   houtFV_stack_4->SetBinContent(17,1.323754);
   houtFV_stack_4->SetBinContent(18,0.6330907);
   houtFV_stack_4->SetBinContent(19,0.5884556);
   houtFV_stack_4->SetBinContent(20,0.3917402);
   houtFV_stack_4->SetBinContent(21,0.7336084);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.7834804);
   houtFV_stack_4->SetBinContent(25,1.322064);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,1.000772);
   houtFV_stack_4->SetBinError(3,1.348492);
   houtFV_stack_4->SetBinError(4,1.455135);
   houtFV_stack_4->SetBinError(5,1.569231);
   houtFV_stack_4->SetBinError(6,1.656282);
   houtFV_stack_4->SetBinError(7,1.648577);
   houtFV_stack_4->SetBinError(8,1.597359);
   houtFV_stack_4->SetBinError(9,1.241677);
   houtFV_stack_4->SetBinError(10,1.224525);
   houtFV_stack_4->SetBinError(11,1.212667);
   houtFV_stack_4->SetBinError(12,0.8315416);
   houtFV_stack_4->SetBinError(13,0.8005565);
   houtFV_stack_4->SetBinError(14,0.5705809);
   houtFV_stack_4->SetBinError(15,0.5884604);
   houtFV_stack_4->SetBinError(16,0.620407);
   houtFV_stack_4->SetBinError(17,0.5560625);
   houtFV_stack_4->SetBinError(18,0.3426673);
   houtFV_stack_4->SetBinError(19,0.3397478);
   houtFV_stack_4->SetBinError(20,0.2770047);
   houtFV_stack_4->SetBinError(21,0.4394482);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.3917439);
   houtFV_stack_4->SetBinError(25,0.5554667);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6397079);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6818899);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2416228);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2297887);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1313578);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9065858);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.244794);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.083466);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.881262);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.157022);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.156358);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.35349);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.576858);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2545655);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4412148);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.6333116);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4065525);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.292065);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3143162);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4189688);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4631642);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.7111177);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.42302);
   hNCpi0inFVres_stack_7->SetBinContent(3,46.62874);
   hNCpi0inFVres_stack_7->SetBinContent(4,106.6347);
   hNCpi0inFVres_stack_7->SetBinContent(5,164.0228);
   hNCpi0inFVres_stack_7->SetBinContent(6,166.6399);
   hNCpi0inFVres_stack_7->SetBinContent(7,160.9937);
   hNCpi0inFVres_stack_7->SetBinContent(8,120.0383);
   hNCpi0inFVres_stack_7->SetBinContent(9,103.9989);
   hNCpi0inFVres_stack_7->SetBinContent(10,82.92796);
   hNCpi0inFVres_stack_7->SetBinContent(11,70.03113);
   hNCpi0inFVres_stack_7->SetBinContent(12,51.44929);
   hNCpi0inFVres_stack_7->SetBinContent(13,45.68663);
   hNCpi0inFVres_stack_7->SetBinContent(14,36.99422);
   hNCpi0inFVres_stack_7->SetBinContent(15,27.97618);
   hNCpi0inFVres_stack_7->SetBinContent(16,21.39988);
   hNCpi0inFVres_stack_7->SetBinContent(17,16.59459);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.03236);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.59773);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.632261);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.814345);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.388468);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.26606);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.970034);
   hNCpi0inFVres_stack_7->SetBinContent(25,23.46899);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1630822);
   hNCpi0inFVres_stack_7->SetBinError(2,1.144279);
   hNCpi0inFVres_stack_7->SetBinError(3,2.260408);
   hNCpi0inFVres_stack_7->SetBinError(4,3.272931);
   hNCpi0inFVres_stack_7->SetBinError(5,4.237808);
   hNCpi0inFVres_stack_7->SetBinError(6,4.190839);
   hNCpi0inFVres_stack_7->SetBinError(7,4.224071);
   hNCpi0inFVres_stack_7->SetBinError(8,3.554075);
   hNCpi0inFVres_stack_7->SetBinError(9,3.36942);
   hNCpi0inFVres_stack_7->SetBinError(10,3.027284);
   hNCpi0inFVres_stack_7->SetBinError(11,2.792059);
   hNCpi0inFVres_stack_7->SetBinError(12,2.309282);
   hNCpi0inFVres_stack_7->SetBinError(13,2.281304);
   hNCpi0inFVres_stack_7->SetBinError(14,2.004163);
   hNCpi0inFVres_stack_7->SetBinError(15,1.741141);
   hNCpi0inFVres_stack_7->SetBinError(16,1.485781);
   hNCpi0inFVres_stack_7->SetBinError(17,1.328725);
   hNCpi0inFVres_stack_7->SetBinError(18,1.315288);
   hNCpi0inFVres_stack_7->SetBinError(19,1.085543);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9552525);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7381268);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8774178);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6797972);
   hNCpi0inFVres_stack_7->SetBinError(24,0.571558);
   hNCpi0inFVres_stack_7->SetBinError(25,1.648045);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.923275);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.605769);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.25687);
   hNCpi0inFVdis_stack_8->SetBinContent(5,29.88152);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.39226);
   hNCpi0inFVdis_stack_8->SetBinContent(7,24.78958);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.48782);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.13455);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.8857);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.15076);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.745942);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.555444);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.870809);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.799736);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.023936);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.341046);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.602692);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.500638);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.789848);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.715526);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.617544);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.823054);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.906754);
   hNCpi0inFVdis_stack_8->SetBinContent(25,12.52217);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3562967);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9634338);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.396173);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.779557);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.702105);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.621938);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.532864);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.14036);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.191437);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.22441);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.031083);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8483613);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7299968);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7938507);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8297297);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7639525);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7367201);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6631328);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5780474);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4462588);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4507425);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3085891);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3123499);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.17904);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.6422043);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3408521);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.4434146);
   hCCpi0inFV_stack_10->SetBinContent(2,2.877799);
   hCCpi0inFV_stack_10->SetBinContent(3,11.33355);
   hCCpi0inFV_stack_10->SetBinContent(4,30.44006);
   hCCpi0inFV_stack_10->SetBinContent(5,44.07407);
   hCCpi0inFV_stack_10->SetBinContent(6,46.57307);
   hCCpi0inFV_stack_10->SetBinContent(7,37.004);
   hCCpi0inFV_stack_10->SetBinContent(8,33.71357);
   hCCpi0inFV_stack_10->SetBinContent(9,26.36693);
   hCCpi0inFV_stack_10->SetBinContent(10,22.4247);
   hCCpi0inFV_stack_10->SetBinContent(11,19.16316);
   hCCpi0inFV_stack_10->SetBinContent(12,18.45402);
   hCCpi0inFV_stack_10->SetBinContent(13,17.15086);
   hCCpi0inFV_stack_10->SetBinContent(14,12.11872);
   hCCpi0inFV_stack_10->SetBinContent(15,8.430044);
   hCCpi0inFV_stack_10->SetBinContent(16,9.436557);
   hCCpi0inFV_stack_10->SetBinContent(17,6.842349);
   hCCpi0inFV_stack_10->SetBinContent(18,4.866668);
   hCCpi0inFV_stack_10->SetBinContent(19,5.743645);
   hCCpi0inFV_stack_10->SetBinContent(20,3.27123);
   hCCpi0inFV_stack_10->SetBinContent(21,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(22,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(23,3.019571);
   hCCpi0inFV_stack_10->SetBinContent(24,2.245626);
   hCCpi0inFV_stack_10->SetBinContent(25,13.6846);
   hCCpi0inFV_stack_10->SetBinError(1,0.3155273);
   hCCpi0inFV_stack_10->SetBinError(2,0.8997006);
   hCCpi0inFV_stack_10->SetBinError(3,1.676258);
   hCCpi0inFV_stack_10->SetBinError(4,2.781015);
   hCCpi0inFV_stack_10->SetBinError(5,3.342549);
   hCCpi0inFV_stack_10->SetBinError(6,3.375503);
   hCCpi0inFV_stack_10->SetBinError(7,3.040087);
   hCCpi0inFV_stack_10->SetBinError(8,2.915853);
   hCCpi0inFV_stack_10->SetBinError(9,2.541717);
   hCCpi0inFV_stack_10->SetBinError(10,2.405963);
   hCCpi0inFV_stack_10->SetBinError(11,2.257215);
   hCCpi0inFV_stack_10->SetBinError(12,2.180736);
   hCCpi0inFV_stack_10->SetBinError(13,2.096127);
   hCCpi0inFV_stack_10->SetBinError(14,1.721617);
   hCCpi0inFV_stack_10->SetBinError(15,1.382971);
   hCCpi0inFV_stack_10->SetBinError(16,1.54634);
   hCCpi0inFV_stack_10->SetBinError(17,1.31113);
   hCCpi0inFV_stack_10->SetBinError(18,1.137714);
   hCCpi0inFV_stack_10->SetBinError(19,1.214996);
   hCCpi0inFV_stack_10->SetBinError(20,0.9417298);
   hCCpi0inFV_stack_10->SetBinError(21,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(22,0.650338);
   hCCpi0inFV_stack_10->SetBinError(23,0.9411816);
   hCCpi0inFV_stack_10->SetBinError(24,0.7332843);
   hCCpi0inFV_stack_10->SetBinError(25,1.862487);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.144191);
   hNCinFV_stack_11->SetBinContent(2,7.317488);
   hNCinFV_stack_11->SetBinContent(3,13.14095);
   hNCinFV_stack_11->SetBinContent(4,15.68364);
   hNCinFV_stack_11->SetBinContent(5,22.84884);
   hNCinFV_stack_11->SetBinContent(6,23.34299);
   hNCinFV_stack_11->SetBinContent(7,24.22284);
   hNCinFV_stack_11->SetBinContent(8,19.31581);
   hNCinFV_stack_11->SetBinContent(9,13.28272);
   hNCinFV_stack_11->SetBinContent(10,15.49707);
   hNCinFV_stack_11->SetBinContent(11,9.087926);
   hNCinFV_stack_11->SetBinContent(12,11.47532);
   hNCinFV_stack_11->SetBinContent(13,9.229698);
   hNCinFV_stack_11->SetBinContent(14,8.170518);
   hNCinFV_stack_11->SetBinContent(15,7.765862);
   hNCinFV_stack_11->SetBinContent(16,6.395617);
   hNCinFV_stack_11->SetBinContent(17,4.404423);
   hNCinFV_stack_11->SetBinContent(18,3.812587);
   hNCinFV_stack_11->SetBinContent(19,2.7859);
   hNCinFV_stack_11->SetBinContent(20,1.908829);
   hNCinFV_stack_11->SetBinContent(21,1.855576);
   hNCinFV_stack_11->SetBinContent(22,1.465526);
   hNCinFV_stack_11->SetBinContent(23,1.465526);
   hNCinFV_stack_11->SetBinContent(24,0.7834804);
   hNCinFV_stack_11->SetBinContent(25,13.26872);
   hNCinFV_stack_11->SetBinError(1,0.7850774);
   hNCinFV_stack_11->SetBinError(2,1.387034);
   hNCinFV_stack_11->SetBinError(3,1.819833);
   hNCinFV_stack_11->SetBinError(4,2.001879);
   hNCinFV_stack_11->SetBinError(5,2.348044);
   hNCinFV_stack_11->SetBinError(6,2.45922);
   hNCinFV_stack_11->SetBinError(7,2.473984);
   hNCinFV_stack_11->SetBinError(8,2.149755);
   hNCinFV_stack_11->SetBinError(9,1.840693);
   hNCinFV_stack_11->SetBinError(10,1.993187);
   hNCinFV_stack_11->SetBinError(11,1.50736);
   hNCinFV_stack_11->SetBinError(12,1.698883);
   hNCinFV_stack_11->SetBinError(13,1.53248);
   hNCinFV_stack_11->SetBinError(14,1.359041);
   hNCinFV_stack_11->SetBinError(15,1.401282);
   hNCinFV_stack_11->SetBinError(16,1.302061);
   hNCinFV_stack_11->SetBinError(17,0.9805027);
   hNCinFV_stack_11->SetBinError(18,0.9190389);
   hNCinFV_stack_11->SetBinError(19,0.8327353);
   hNCinFV_stack_11->SetBinError(20,0.6506224);
   hNCinFV_stack_11->SetBinError(21,0.6794384);
   hNCinFV_stack_11->SetBinError(22,0.6209405);
   hNCinFV_stack_11->SetBinError(23,0.6209405);
   hNCinFV_stack_11->SetBinError(24,0.3917439);
   hNCinFV_stack_11->SetBinError(25,1.94408);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,2.225779);
   hnumuCCinFV_stack_12->SetBinContent(2,6.869067);
   hnumuCCinFV_stack_12->SetBinContent(3,13.05112);
   hnumuCCinFV_stack_12->SetBinContent(4,23.71385);
   hnumuCCinFV_stack_12->SetBinContent(5,24.37616);
   hnumuCCinFV_stack_12->SetBinContent(6,27.93969);
   hnumuCCinFV_stack_12->SetBinContent(7,28.74516);
   hnumuCCinFV_stack_12->SetBinContent(8,18.72213);
   hnumuCCinFV_stack_12->SetBinContent(9,18.74405);
   hnumuCCinFV_stack_12->SetBinContent(10,17.46339);
   hnumuCCinFV_stack_12->SetBinContent(11,14.61285);
   hnumuCCinFV_stack_12->SetBinContent(12,15.59653);
   hnumuCCinFV_stack_12->SetBinContent(13,10.84504);
   hnumuCCinFV_stack_12->SetBinContent(14,9.053951);
   hnumuCCinFV_stack_12->SetBinContent(15,4.702756);
   hnumuCCinFV_stack_12->SetBinContent(16,5.782672);
   hnumuCCinFV_stack_12->SetBinContent(17,4.221893);
   hnumuCCinFV_stack_12->SetBinContent(18,2.423075);
   hnumuCCinFV_stack_12->SetBinContent(19,2.751589);
   hnumuCCinFV_stack_12->SetBinContent(20,1.628666);
   hnumuCCinFV_stack_12->SetBinContent(21,0.6600696);
   hnumuCCinFV_stack_12->SetBinContent(22,1.609614);
   hnumuCCinFV_stack_12->SetBinContent(23,1.138389);
   hnumuCCinFV_stack_12->SetBinContent(24,1.577935);
   hnumuCCinFV_stack_12->SetBinContent(25,11.93119);
   hnumuCCinFV_stack_12->SetBinError(1,0.9437165);
   hnumuCCinFV_stack_12->SetBinError(2,1.490646);
   hnumuCCinFV_stack_12->SetBinError(3,1.835424);
   hnumuCCinFV_stack_12->SetBinError(4,3.079041);
   hnumuCCinFV_stack_12->SetBinError(5,2.856854);
   hnumuCCinFV_stack_12->SetBinError(6,2.780037);
   hnumuCCinFV_stack_12->SetBinError(7,3.72748);
   hnumuCCinFV_stack_12->SetBinError(8,2.315612);
   hnumuCCinFV_stack_12->SetBinError(9,2.291145);
   hnumuCCinFV_stack_12->SetBinError(10,2.411318);
   hnumuCCinFV_stack_12->SetBinError(11,1.977852);
   hnumuCCinFV_stack_12->SetBinError(12,2.384841);
   hnumuCCinFV_stack_12->SetBinError(13,1.736599);
   hnumuCCinFV_stack_12->SetBinError(14,1.599117);
   hnumuCCinFV_stack_12->SetBinError(15,1.613996);
   hnumuCCinFV_stack_12->SetBinError(16,1.226062);
   hnumuCCinFV_stack_12->SetBinError(17,1.066985);
   hnumuCCinFV_stack_12->SetBinError(18,0.7786343);
   hnumuCCinFV_stack_12->SetBinError(19,0.9070709);
   hnumuCCinFV_stack_12->SetBinError(20,0.7135412);
   hnumuCCinFV_stack_12->SetBinError(21,0.3853442);
   hnumuCCinFV_stack_12->SetBinError(22,0.6808156);
   hnumuCCinFV_stack_12->SetBinError(23,0.5974629);
   hnumuCCinFV_stack_12->SetBinError(24,0.626397);
   hnumuCCinFV_stack_12->SetBinError(25,2.894283);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.4402164);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(7,1.991224);
   hnueCCinFV_stack_13->SetBinContent(8,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(9,1.038389);
   hnueCCinFV_stack_13->SetBinContent(11,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.591342);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,5.665134);
   hnueCCinFV_stack_13->SetBinError(2,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.3132948);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,0.5410961);
   hnueCCinFV_stack_13->SetBinError(7,0.8265606);
   hnueCCinFV_stack_13->SetBinError(8,0.4132436);
   hnueCCinFV_stack_13->SetBinError(9,0.6734513);
   hnueCCinFV_stack_13->SetBinError(11,0.2504446);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.1967157);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.4228527);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,1.200507);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__20->SetBinContent(1,10.97008);
   hmcerror__20->SetBinContent(2,46.1911);
   hmcerror__20->SetBinContent(3,125.6885);
   hmcerror__20->SetBinContent(4,235.5194);
   hmcerror__20->SetBinContent(5,333.2679);
   hmcerror__20->SetBinContent(6,336.4538);
   hmcerror__20->SetBinContent(7,326.3394);
   hmcerror__20->SetBinContent(8,252.7185);
   hmcerror__20->SetBinContent(9,198.6007);
   hmcerror__20->SetBinContent(10,174.4559);
   hmcerror__20->SetBinContent(11,136.9153);
   hmcerror__20->SetBinContent(12,119.9722);
   hmcerror__20->SetBinContent(13,98.71515);
   hmcerror__20->SetBinContent(14,76.72907);
   hmcerror__20->SetBinContent(15,58.4028);
   hmcerror__20->SetBinContent(16,57.02228);
   hmcerror__20->SetBinContent(17,41.12959);
   hmcerror__20->SetBinContent(18,32.2966);
   hmcerror__20->SetBinContent(19,27.06703);
   hmcerror__20->SetBinContent(20,21.66616);
   hmcerror__20->SetBinContent(21,13.59461);
   hmcerror__20->SetBinContent(22,13.87761);
   hmcerror__20->SetBinContent(23,11.31741);
   hmcerror__20->SetBinContent(24,9.701808);
   hmcerror__20->SetBinContent(25,84.03551);
   hmcerror__20->SetBinError(1,6.093605);
   hmcerror__20->SetBinError(2,16.92502);
   hmcerror__20->SetBinError(3,41.68195);
   hmcerror__20->SetBinError(4,77.00123);
   hmcerror__20->SetBinError(5,112.8378);
   hmcerror__20->SetBinError(6,118.245);
   hmcerror__20->SetBinError(7,121.131);
   hmcerror__20->SetBinError(8,108.1042);
   hmcerror__20->SetBinError(9,81.48839);
   hmcerror__20->SetBinError(10,75.20783);
   hmcerror__20->SetBinError(11,59.06445);
   hmcerror__20->SetBinError(12,53.61785);
   hmcerror__20->SetBinError(13,42.36914);
   hmcerror__20->SetBinError(14,34.39571);
   hmcerror__20->SetBinError(15,26.98509);
   hmcerror__20->SetBinError(16,26.02588);
   hmcerror__20->SetBinError(17,21.23202);
   hmcerror__20->SetBinError(18,20.63434);
   hmcerror__20->SetBinError(19,14.28341);
   hmcerror__20->SetBinError(20,10.36007);
   hmcerror__20->SetBinError(21,7.592083);
   hmcerror__20->SetBinError(22,10.89668);
   hmcerror__20->SetBinError(23,7.326656);
   hmcerror__20->SetBinError(24,8.507999);
   hmcerror__20->SetBinError(25,27.25537);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3025[24] = {
   9,
   36,
   88,
   198,
   289,
   259,
   239,
   165,
   142,
   116,
   95,
   64,
   54,
   54,
   41,
   30,
   16,
   25,
   17,
   15,
   13,
   13,
   4,
   6};
   Double_t _felx3025[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3025[24] = {
   3.19354,
   6.1381,
   9.5036,
   14.07125,
   17,
   16.09348,
   15.45962,
   12.84523,
   11.91638,
   10.77033,
   9.8686,
   8.1273,
   7.4785,
   7.4785,
   6.5384,
   5.6197,
   4.1628,
   5.1474,
   4.2835,
   4.0385,
   3.77763,
   3.77763,
   2.29683,
   2.67925};
   Double_t _fehx3025[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3025[24] = {
   2.9582,
   5.9318,
   9.3021,
   14.07125,
   17,
   16.09348,
   15.45962,
   12.84523,
   11.91638,
   10.77033,
   9.667,
   7.9246,
   7.275,
   7.275,
   6.3331,
   5.4117,
   3.9454,
   4.9374,
   4.0673,
   3.8197,
   3.5552,
   3.5552,
   1.98186,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,660);
   Graph_Graph3025->SetMinimum(1.532853);
   Graph_Graph3025->SetMaximum(336.4297);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.25","h");
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
   entry=leg->AddEntry("","BNB Data, 1988.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 93.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1288.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  234.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 370.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 227.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 258.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3026[24] = {
   0.5554751,
   0.3664131,
   0.3316291,
   0.3269422,
   0.3385797,
   0.3514448,
   0.3711811,
   0.4277654,
   0.4103127,
   0.4310994,
   0.4313941,
   0.446919,
   0.4292061,
   0.4482748,
   0.4620513,
   0.456416,
   0.5162226,
   0.6389014,
   0.5277049,
   0.4781684,
   0.5584625,
   0.7851986,
   0.6473791,
   0.8769498};
   Double_t _fehx3026[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3026[24] = {
   0.5554751,
   0.3664131,
   0.3316291,
   0.3269422,
   0.3385797,
   0.3514448,
   0.3711811,
   0.4277654,
   0.4103127,
   0.4310994,
   0.4313941,
   0.446919,
   0.4292061,
   0.4482748,
   0.4620513,
   0.456416,
   0.5162226,
   0.6389014,
   0.5277049,
   0.4781684,
   0.5584625,
   0.7851986,
   0.6473791,
   0.8769498};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,660);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3027[24] = {
   0.2376045,
   0.2236522,
   0.2603303,
   0.3104817,
   0.3262193,
   0.3351234,
   0.3499391,
   0.3672423,
   0.3898072,
   0.3878718,
   0.4010351,
   0.3519159,
   0.3816283,
   0.3804639,
   0.3947714,
   0.3165715,
   0.3556852,
   0.3645898,
   0.347055,
   0.3297,
   0.3801767,
   0.3221079,
   0.3384899,
   0.2935946};
   Double_t _fehx3027[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3027[24] = {
   0.2376045,
   0.2236522,
   0.2603303,
   0.3104817,
   0.3262193,
   0.3351234,
   0.3499391,
   0.3672423,
   0.3898072,
   0.3878718,
   0.4010351,
   0.3519159,
   0.3816283,
   0.3804639,
   0.3947714,
   0.3165715,
   0.3556852,
   0.3645898,
   0.347055,
   0.3297,
   0.3801767,
   0.3221079,
   0.3384899,
   0.2935946};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,660);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
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
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3028[24] = {
   0.8204135,
   0.7793709,
   0.7001438,
   0.840695,
   0.8671702,
   0.7697936,
   0.7323665,
   0.6529004,
   0.7150025,
   0.6649245,
   0.6938596,
   0.533457,
   0.5470285,
   0.703775,
   0.7020212,
   0.5261101,
   0.3890143,
   0.7740752,
   0.6280704,
   0.6923238,
   0.956261,
   0.9367608,
   0.3534377,
   0.6184414};
   Double_t _felx3028[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3028[24] = {
   0.2911137,
   0.1328849,
   0.07561235,
   0.05974559,
   0.05101001,
   0.04783265,
   0.04737285,
   0.05082823,
   0.06000168,
   0.06173669,
   0.07207813,
   0.06774321,
   0.07575838,
   0.09746632,
   0.1119535,
   0.0985527,
   0.1012118,
   0.159379,
   0.1582553,
   0.1863966,
   0.2778769,
   0.2722104,
   0.2029466,
   0.2761599};
   Double_t _fehx3028[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3028[24] = {
   0.2696608,
   0.1284187,
   0.07400918,
   0.05974559,
   0.05101001,
   0.04783265,
   0.04737285,
   0.05082823,
   0.06000168,
   0.06173669,
   0.07060569,
   0.06605365,
   0.0736969,
   0.09481413,
   0.1084383,
   0.09490501,
   0.09592607,
   0.1528768,
   0.1502677,
   0.1762979,
   0.2615153,
   0.2561825,
   0.175116,
   0.2492917};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,660);
   Graph_Graph3028->SetMinimum(0.04376258);
   Graph_Graph3028->SetMaximum(1.324505);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
