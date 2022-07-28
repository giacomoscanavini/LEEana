#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 15:14:49 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-61.53846,-1.39382,451.2821,117.4476);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmc__4->SetBinContent(1,45.07029);
   hmc__4->SetBinContent(2,69.69098);
   hmc__4->SetBinContent(3,62.779);
   hmc__4->SetBinContent(4,47.20323);
   hmc__4->SetBinContent(5,30.3996);
   hmc__4->SetBinContent(6,17.65956);
   hmc__4->SetBinContent(7,12.21545);
   hmc__4->SetBinContent(8,8.017627);
   hmc__4->SetBinContent(9,4.940887);
   hmc__4->SetBinContent(10,2.803586);
   hmc__4->SetBinContent(11,1.903638);
   hmc__4->SetBinContent(12,0.9214979);
   hmc__4->SetBinContent(13,0.7960604);
   hmc__4->SetBinContent(14,0.3243263);
   hmc__4->SetBinContent(15,0.1639579);
   hmc__4->SetBinContent(16,0.09972653);
   hmc__4->SetBinContent(17,0.5356956);
   hmc__4->SetBinError(1,9.912136);
   hmc__4->SetBinError(2,15.53287);
   hmc__4->SetBinError(3,15.07097);
   hmc__4->SetBinError(4,12.05966);
   hmc__4->SetBinError(5,8.816944);
   hmc__4->SetBinError(6,5.570573);
   hmc__4->SetBinError(7,4.928028);
   hmc__4->SetBinError(8,3.929334);
   hmc__4->SetBinError(9,3.723891);
   hmc__4->SetBinError(10,1.406339);
   hmc__4->SetBinError(11,1.364671);
   hmc__4->SetBinError(12,0.9062662);
   hmc__4->SetBinError(13,0.7290153);
   hmc__4->SetBinError(14,1.023425);
   hmc__4->SetBinError(15,0.3606187);
   hmc__4->SetBinError(16,0.1789446);
   hmc__4->SetBinError(17,0.7603218);
   hmc__4->SetMinimum(-1.39382);
   hmc__4->SetMaximum(111.5056);
   hmc__4->SetEntries(300.4418);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",16,0,400);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(73.17554);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,0.8017657);
   hbadmatch_stack_1->SetBinContent(2,1.234006);
   hbadmatch_stack_1->SetBinContent(3,1.291463);
   hbadmatch_stack_1->SetBinContent(4,1.193353);
   hbadmatch_stack_1->SetBinContent(5,0.5046381);
   hbadmatch_stack_1->SetBinContent(6,0.3807693);
   hbadmatch_stack_1->SetBinContent(7,0.2496199);
   hbadmatch_stack_1->SetBinContent(8,0.02550039);
   hbadmatch_stack_1->SetBinContent(9,0.1366628);
   hbadmatch_stack_1->SetBinContent(10,0.02550039);
   hbadmatch_stack_1->SetBinContent(11,0.02550039);
   hbadmatch_stack_1->SetBinContent(12,0.0127502);
   hbadmatch_stack_1->SetBinError(1,0.2123937);
   hbadmatch_stack_1->SetBinError(2,0.2701296);
   hbadmatch_stack_1->SetBinError(3,0.2554703);
   hbadmatch_stack_1->SetBinError(4,0.4108525);
   hbadmatch_stack_1->SetBinError(5,0.1802159);
   hbadmatch_stack_1->SetBinError(6,0.1369709);
   hbadmatch_stack_1->SetBinError(7,0.1110342);
   hbadmatch_stack_1->SetBinError(8,0.0180315);
   hbadmatch_stack_1->SetBinError(9,0.08854226);
   hbadmatch_stack_1->SetBinError(10,0.0180315);
   hbadmatch_stack_1->SetBinError(11,0.0180315);
   hbadmatch_stack_1->SetBinError(12,0.0127502);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,4.346346);
   hext_stack_2->SetBinContent(2,4.903953);
   hext_stack_2->SetBinContent(3,4.257726);
   hext_stack_2->SetBinContent(4,2.569906);
   hext_stack_2->SetBinContent(5,1.316993);
   hext_stack_2->SetBinContent(6,0.707576);
   hext_stack_2->SetBinContent(7,0.2481285);
   hext_stack_2->SetBinContent(8,0.09815882);
   hext_stack_2->SetBinContent(9,0.211319);
   hext_stack_2->SetBinContent(10,0.2358586);
   hext_stack_2->SetBinContent(11,0.01226985);
   hext_stack_2->SetBinContent(12,0.01226985);
   hext_stack_2->SetBinContent(13,0.02453971);
   hext_stack_2->SetBinContent(16,0.01226985);
   hext_stack_2->SetBinError(1,0.8716167);
   hext_stack_2->SetBinError(2,0.9170136);
   hext_stack_2->SetBinError(3,0.8493822);
   hext_stack_2->SetBinError(4,0.6636965);
   hext_stack_2->SetBinError(5,0.4891102);
   hext_stack_2->SetBinError(6,0.3467226);
   hext_stack_2->SetBinError(7,0.2005561);
   hext_stack_2->SetBinError(8,0.03470438);
   hext_stack_2->SetBinError(9,0.1994269);
   hext_stack_2->SetBinError(10,0.2001804);
   hext_stack_2->SetBinError(11,0.01226985);
   hext_stack_2->SetBinError(12,0.01226985);
   hext_stack_2->SetBinError(13,0.01735219);
   hext_stack_2->SetBinError(16,0.01226985);
   hext_stack_2->SetEntries(312);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,0.4910593);
   hdirt_stack_3->SetBinContent(2,0.3410985);
   hdirt_stack_3->SetBinContent(3,0.5703664);
   hdirt_stack_3->SetBinContent(4,0.02588734);
   hdirt_stack_3->SetBinContent(5,0.09663776);
   hdirt_stack_3->SetBinContent(6,0.04632451);
   hdirt_stack_3->SetBinError(1,0.1437973);
   hdirt_stack_3->SetBinError(2,0.1067501);
   hdirt_stack_3->SetBinError(3,0.3170564);
   hdirt_stack_3->SetBinError(4,0.01497969);
   hdirt_stack_3->SetBinError(5,0.06305907);
   hdirt_stack_3->SetBinError(6,0.04632451);
   hdirt_stack_3->SetEntries(54);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,3.627221);
   houtFV_stack_4->SetBinContent(2,4.799863);
   houtFV_stack_4->SetBinContent(3,3.709853);
   houtFV_stack_4->SetBinContent(4,3.052638);
   houtFV_stack_4->SetBinContent(5,1.854972);
   houtFV_stack_4->SetBinContent(6,0.8090212);
   houtFV_stack_4->SetBinContent(7,0.6702965);
   houtFV_stack_4->SetBinContent(8,0.6341078);
   houtFV_stack_4->SetBinContent(9,0.09082383);
   houtFV_stack_4->SetBinContent(10,0.2733256);
   houtFV_stack_4->SetBinContent(11,0.149413);
   houtFV_stack_4->SetBinContent(12,0.0127502);
   houtFV_stack_4->SetBinError(1,0.4428362);
   houtFV_stack_4->SetBinError(2,0.5180791);
   houtFV_stack_4->SetBinError(3,0.4550452);
   houtFV_stack_4->SetBinError(4,0.4133182);
   houtFV_stack_4->SetBinError(5,0.3279908);
   houtFV_stack_4->SetBinError(6,0.2094041);
   houtFV_stack_4->SetBinError(7,0.1878333);
   houtFV_stack_4->SetBinError(8,0.1884745);
   houtFV_stack_4->SetBinError(9,0.06527571);
   houtFV_stack_4->SetBinError(10,0.1252177);
   houtFV_stack_4->SetBinError(11,0.08945557);
   houtFV_stack_4->SetBinError(12,0.0127502);
   houtFV_stack_4->SetEntries(494);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,19.03022);
   hNCpi0inFV_stack_5->SetBinContent(2,37.58114);
   hNCpi0inFV_stack_5->SetBinContent(3,35.43496);
   hNCpi0inFV_stack_5->SetBinContent(4,27.47565);
   hNCpi0inFV_stack_5->SetBinContent(5,16.14756);
   hNCpi0inFV_stack_5->SetBinContent(6,10.25458);
   hNCpi0inFV_stack_5->SetBinContent(7,7.578222);
   hNCpi0inFV_stack_5->SetBinContent(8,4.633597);
   hNCpi0inFV_stack_5->SetBinContent(9,3.128512);
   hNCpi0inFV_stack_5->SetBinContent(10,1.592542);
   hNCpi0inFV_stack_5->SetBinContent(11,0.7470649);
   hNCpi0inFV_stack_5->SetBinContent(12,0.4227385);
   hNCpi0inFV_stack_5->SetBinContent(13,0.3498267);
   hNCpi0inFV_stack_5->SetBinContent(14,0.1876636);
   hNCpi0inFV_stack_5->SetBinContent(15,0.1002069);
   hNCpi0inFV_stack_5->SetBinContent(16,0.06195629);
   hNCpi0inFV_stack_5->SetBinContent(17,0.3607822);
   hNCpi0inFV_stack_5->SetBinError(1,1.015989);
   hNCpi0inFV_stack_5->SetBinError(2,1.424033);
   hNCpi0inFV_stack_5->SetBinError(3,1.381788);
   hNCpi0inFV_stack_5->SetBinError(4,1.215859);
   hNCpi0inFV_stack_5->SetBinError(5,0.9313628);
   hNCpi0inFV_stack_5->SetBinError(6,0.7364567);
   hNCpi0inFV_stack_5->SetBinError(7,0.6431804);
   hNCpi0inFV_stack_5->SetBinError(8,0.4950207);
   hNCpi0inFV_stack_5->SetBinError(9,0.4022862);
   hNCpi0inFV_stack_5->SetBinError(10,0.2955927);
   hNCpi0inFV_stack_5->SetBinError(11,0.2000287);
   hNCpi0inFV_stack_5->SetBinError(12,0.1538888);
   hNCpi0inFV_stack_5->SetBinError(13,0.1290537);
   hNCpi0inFV_stack_5->SetBinError(14,0.0921412);
   hNCpi0inFV_stack_5->SetBinError(15,0.0657745);
   hNCpi0inFV_stack_5->SetBinError(16,0.06195629);
   hNCpi0inFV_stack_5->SetBinError(17,0.1408658);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,4.029646);
   hCCpi0inFV_stack_6->SetBinContent(2,9.983469);
   hCCpi0inFV_stack_6->SetBinContent(3,10.89365);
   hCCpi0inFV_stack_6->SetBinContent(4,8.615828);
   hCCpi0inFV_stack_6->SetBinContent(5,6.444863);
   hCCpi0inFV_stack_6->SetBinContent(6,3.821049);
   hCCpi0inFV_stack_6->SetBinContent(7,2.330595);
   hCCpi0inFV_stack_6->SetBinContent(8,1.816586);
   hCCpi0inFV_stack_6->SetBinContent(9,0.945684);
   hCCpi0inFV_stack_6->SetBinContent(10,0.5014458);
   hCCpi0inFV_stack_6->SetBinContent(11,0.5594013);
   hCCpi0inFV_stack_6->SetBinContent(12,0.2368697);
   hCCpi0inFV_stack_6->SetBinContent(13,0.3342373);
   hCCpi0inFV_stack_6->SetBinContent(14,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(15,0.03825059);
   hCCpi0inFV_stack_6->SetBinContent(16,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(17,0.1749134);
   hCCpi0inFV_stack_6->SetBinError(1,0.4671131);
   hCCpi0inFV_stack_6->SetBinError(2,0.7430059);
   hCCpi0inFV_stack_6->SetBinError(3,0.7726461);
   hCCpi0inFV_stack_6->SetBinError(4,0.6809302);
   hCCpi0inFV_stack_6->SetBinError(5,0.5979541);
   hCCpi0inFV_stack_6->SetBinError(6,0.4586129);
   hCCpi0inFV_stack_6->SetBinError(7,0.3499662);
   hCCpi0inFV_stack_6->SetBinError(8,0.3125007);
   hCCpi0inFV_stack_6->SetBinError(9,0.2273539);
   hCCpi0inFV_stack_6->SetBinError(10,0.1667361);
   hCCpi0inFV_stack_6->SetBinError(11,0.1775429);
   hCCpi0inFV_stack_6->SetBinError(12,0.1102997);
   hCCpi0inFV_stack_6->SetBinError(13,0.1447169);
   hCCpi0inFV_stack_6->SetBinError(14,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(15,0.02208399);
   hCCpi0inFV_stack_6->SetBinError(16,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(17,0.09125478);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_7->SetBinContent(1,3.83912);
   hNCinFV_stack_7->SetBinContent(2,2.50177);
   hNCinFV_stack_7->SetBinContent(3,2.213865);
   hNCinFV_stack_7->SetBinContent(4,1.333761);
   hNCinFV_stack_7->SetBinContent(5,1.503291);
   hNCinFV_stack_7->SetBinContent(6,0.7470649);
   hNCinFV_stack_7->SetBinContent(7,0.3625769);
   hNCinFV_stack_7->SetBinContent(8,0.3352818);
   hNCinFV_stack_7->SetBinContent(9,0.2496199);
   hNCinFV_stack_7->SetBinContent(10,0.1621632);
   hNCinFV_stack_7->SetBinContent(11,0.2860757);
   hNCinFV_stack_7->SetBinContent(12,0.08745668);
   hNCinFV_stack_7->SetBinContent(13,0.07470649);
   hNCinFV_stack_7->SetBinContent(14,0.06195629);
   hNCinFV_stack_7->SetBinContent(15,0.02550039);
   hNCinFV_stack_7->SetBinError(1,0.4453451);
   hNCinFV_stack_7->SetBinError(2,0.368173);
   hNCinFV_stack_7->SetBinError(3,0.3546321);
   hNCinFV_stack_7->SetBinError(4,0.2623593);
   hNCinFV_stack_7->SetBinError(5,0.2936614);
   hNCinFV_stack_7->SetBinError(6,0.2000287);
   hNCinFV_stack_7->SetBinError(7,0.1296821);
   hNCinFV_stack_7->SetBinError(8,0.139707);
   hNCinFV_stack_7->SetBinError(9,0.1110342);
   hNCinFV_stack_7->SetBinError(10,0.09035965);
   hNCinFV_stack_7->SetBinError(11,0.1258651);
   hNCinFV_stack_7->SetBinError(12,0.06452687);
   hNCinFV_stack_7->SetBinError(13,0.06325464);
   hNCinFV_stack_7->SetBinError(14,0.06195629);
   hNCinFV_stack_7->SetBinError(15,0.0180315);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,8.692905);
   hnumuCCinFV_stack_8->SetBinContent(2,7.998685);
   hnumuCCinFV_stack_8->SetBinContent(3,4.368863);
   hnumuCCinFV_stack_8->SetBinContent(4,2.812299);
   hnumuCCinFV_stack_8->SetBinContent(5,2.415834);
   hnumuCCinFV_stack_8->SetBinContent(6,0.8057169);
   hnumuCCinFV_stack_8->SetBinContent(7,0.6520999);
   hnumuCCinFV_stack_8->SetBinContent(8,0.4124389);
   hnumuCCinFV_stack_8->SetBinContent(9,0.1782665);
   hnumuCCinFV_stack_8->SetBinContent(10,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(11,0.1239126);
   hnumuCCinFV_stack_8->SetBinContent(12,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(16,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(1,0.9298183);
   hnumuCCinFV_stack_8->SetBinError(2,0.87788);
   hnumuCCinFV_stack_8->SetBinError(3,0.5607825);
   hnumuCCinFV_stack_8->SetBinError(4,0.4826353);
   hnumuCCinFV_stack_8->SetBinError(5,0.4442632);
   hnumuCCinFV_stack_8->SetBinError(6,0.2141863);
   hnumuCCinFV_stack_8->SetBinError(7,0.2307077);
   hnumuCCinFV_stack_8->SetBinError(8,0.1541153);
   hnumuCCinFV_stack_8->SetBinError(9,0.09799464);
   hnumuCCinFV_stack_8->SetBinError(10,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(11,0.08761943);
   hnumuCCinFV_stack_8->SetBinError(12,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(16,0.0127502);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,0.2120028);
   hnueCCinFV_stack_9->SetBinContent(2,0.3469967);
   hnueCCinFV_stack_9->SetBinContent(3,0.03825059);
   hnueCCinFV_stack_9->SetBinContent(4,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(5,0.1148134);
   hnueCCinFV_stack_9->SetBinContent(6,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(7,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(8,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.0127502);
   hnueCCinFV_stack_9->SetBinError(1,0.1027607);
   hnueCCinFV_stack_9->SetBinError(2,0.1430187);
   hnueCCinFV_stack_9->SetBinError(3,0.02208399);
   hnueCCinFV_stack_9->SetBinError(4,0.08761943);
   hnueCCinFV_stack_9->SetBinError(5,0.06737384);
   hnueCCinFV_stack_9->SetBinError(6,0.06452687);
   hnueCCinFV_stack_9->SetBinError(7,0.08761943);
   hnueCCinFV_stack_9->SetBinError(8,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.0127502);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmcerror__5->SetBinContent(1,45.07029);
   hmcerror__5->SetBinContent(2,69.69098);
   hmcerror__5->SetBinContent(3,62.779);
   hmcerror__5->SetBinContent(4,47.20323);
   hmcerror__5->SetBinContent(5,30.3996);
   hmcerror__5->SetBinContent(6,17.65956);
   hmcerror__5->SetBinContent(7,12.21545);
   hmcerror__5->SetBinContent(8,8.017627);
   hmcerror__5->SetBinContent(9,4.940887);
   hmcerror__5->SetBinContent(10,2.803586);
   hmcerror__5->SetBinContent(11,1.903638);
   hmcerror__5->SetBinContent(12,0.9214979);
   hmcerror__5->SetBinContent(13,0.7960604);
   hmcerror__5->SetBinContent(14,0.3243263);
   hmcerror__5->SetBinContent(15,0.1639579);
   hmcerror__5->SetBinContent(16,0.09972653);
   hmcerror__5->SetBinContent(17,0.5356956);
   hmcerror__5->SetBinError(1,9.912136);
   hmcerror__5->SetBinError(2,15.53287);
   hmcerror__5->SetBinError(3,15.07097);
   hmcerror__5->SetBinError(4,12.05966);
   hmcerror__5->SetBinError(5,8.816944);
   hmcerror__5->SetBinError(6,5.570573);
   hmcerror__5->SetBinError(7,4.928028);
   hmcerror__5->SetBinError(8,3.929334);
   hmcerror__5->SetBinError(9,3.723891);
   hmcerror__5->SetBinError(10,1.406339);
   hmcerror__5->SetBinError(11,1.364671);
   hmcerror__5->SetBinError(12,0.9062662);
   hmcerror__5->SetBinError(13,0.7290153);
   hmcerror__5->SetBinError(14,1.023425);
   hmcerror__5->SetBinError(15,0.3606187);
   hmcerror__5->SetBinError(16,0.1789446);
   hmcerror__5->SetBinError(17,0.7603218);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[16] = {
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
   387.5};
   Double_t _fy3005[16] = {
   38,
   56,
   34,
   38,
   14,
   11,
   9,
   3,
   3,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3005[16] = {
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
   Double_t _fely3005[16] = {
   6.3013,
   7.6127,
   5.9703,
   6.3013,
   3.9102,
   3.4975,
   3.19354,
   2.143368,
   2.143368,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3005[16] = {
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
   Double_t _fehy3005[16] = {
   6.0955,
   7.4094,
   5.7635,
   6.0955,
   3.6898,
   3.27,
   2.9582,
   1.72422,
   1.72422,
   1.1478,
   1.51917,
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(69.75034);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.68#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.86/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 208.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.9","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 19.0","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 19.7","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  164.7","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 50.6","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 13.8","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 28.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.2","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[16] = {
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
   387.5};
   Double_t _fy3006[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[16] = {
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
   Double_t _fely3006[16] = {
   0.2199262,
   0.2228821,
   0.240064,
   0.2554838,
   0.2900349,
   0.3154424,
   0.4034258,
   0.4900869,
   0.7536887,
   0.5016216,
   0.7168755,
   0.9834707,
   0.9157789,
   3.155542,
   2.19946,
   1.794353};
   Double_t _fehx3006[16] = {
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
   Double_t _fehy3006[16] = {
   0.2199262,
   0.2228821,
   0.240064,
   0.2554838,
   0.2900349,
   0.3154424,
   0.4034258,
   0.4900869,
   0.7536887,
   0.5016216,
   0.7168755,
   0.9834707,
   0.9157789,
   3.155542,
   2.19946,
   1.794353};
   grae = new TGraphAsymmErrors(16,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,440);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[16] = {
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
   387.5};
   Double_t _fy3007[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[16] = {
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
   Double_t _fely3007[16] = {
   0.182533,
   0.1906893,
   0.2106887,
   0.2180268,
   0.219141,
   0.2284509,
   0.2384312,
   0.2671884,
   0.2851933,
   0.3049716,
   0.3474473,
   0.4016674,
   0.4334813,
   0.6555204,
   0.9084234,
   1.373981};
   Double_t _fehx3007[16] = {
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
   Double_t _fehy3007[16] = {
   0.182533,
   0.1906893,
   0.2106887,
   0.2180268,
   0.219141,
   0.2284509,
   0.2384312,
   0.2671884,
   0.2851933,
   0.3049716,
   0.3474473,
   0.4016674,
   0.4334813,
   0.6555204,
   0.9084234,
   1.373981};
   grae = new TGraphAsymmErrors(16,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,440);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[16] = {
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
   387.5};
   Double_t _fy3008[16] = {
   0.8431275,
   0.8035473,
   0.5415824,
   0.8050297,
   0.4605324,
   0.6228922,
   0.7367718,
   0.3741756,
   0.6071784,
   0,
   1.05062,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3008[16] = {
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
   Double_t _fely3008[16] = {
   0.1398105,
   0.1092351,
   0.09510028,
   0.133493,
   0.1286267,
   0.1980514,
   0.2614345,
   0.267332,
   0.4338022,
   0,
   1.05062,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3008[16] = {
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
   Double_t _fehy3008[16] = {
   0.1352443,
   0.1063179,
   0.09180618,
   0.1291331,
   0.1213766,
   0.1851689,
   0.2421687,
   0.2150537,
   0.3489697,
   0.4094043,
   0.7980353,
   1.245581,
   1.44185,
   3.539028,
   7.000579,
   11.50948};
   grae = new TGraphAsymmErrors(16,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(12.66042);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
