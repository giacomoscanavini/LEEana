#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 17:41:25 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-384.6154,-10.89901,2820.513,1205.201);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__7->SetBinContent(3,1.77103);
   hmc__7->SetBinContent(4,24.61998);
   hmc__7->SetBinContent(5,83.89195);
   hmc__7->SetBinContent(6,200.2316);
   hmc__7->SetBinContent(7,349.1317);
   hmc__7->SetBinContent(8,489.5239);
   hmc__7->SetBinContent(9,544.9503);
   hmc__7->SetBinContent(10,528.6232);
   hmc__7->SetBinContent(11,497.3981);
   hmc__7->SetBinContent(12,425.206);
   hmc__7->SetBinContent(13,344.5854);
   hmc__7->SetBinContent(14,281.1463);
   hmc__7->SetBinContent(15,220.8787);
   hmc__7->SetBinContent(16,167.3733);
   hmc__7->SetBinContent(17,132.1328);
   hmc__7->SetBinContent(18,106.2992);
   hmc__7->SetBinContent(19,82.74406);
   hmc__7->SetBinContent(20,64.25373);
   hmc__7->SetBinContent(21,53.11644);
   hmc__7->SetBinContent(22,38.08268);
   hmc__7->SetBinContent(23,38.03469);
   hmc__7->SetBinContent(24,27.27755);
   hmc__7->SetBinContent(25,22.35629);
   hmc__7->SetBinContent(26,87.39592);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,0.3895343);
   hmc__7->SetBinError(3,0.9820913);
   hmc__7->SetBinError(4,5.61046);
   hmc__7->SetBinError(5,17.06457);
   hmc__7->SetBinError(6,46.29179);
   hmc__7->SetBinError(7,82.34799);
   hmc__7->SetBinError(8,112.9332);
   hmc__7->SetBinError(9,129.3248);
   hmc__7->SetBinError(10,133.5778);
   hmc__7->SetBinError(11,126.7029);
   hmc__7->SetBinError(12,105.7767);
   hmc__7->SetBinError(13,86.69346);
   hmc__7->SetBinError(14,66.7546);
   hmc__7->SetBinError(15,53.45376);
   hmc__7->SetBinError(16,41.9315);
   hmc__7->SetBinError(17,31.98746);
   hmc__7->SetBinError(18,24.83879);
   hmc__7->SetBinError(19,19.2929);
   hmc__7->SetBinError(20,14.65855);
   hmc__7->SetBinError(21,12.04213);
   hmc__7->SetBinError(22,7.952447);
   hmc__7->SetBinError(23,7.921121);
   hmc__7->SetBinError(24,6.724635);
   hmc__7->SetBinError(25,4.725947);
   hmc__7->SetBinError(26,14.60088);
   hmc__7->SetMinimum(-10.89901);
   hmc__7->SetMaximum(1144.396);
   hmc__7->SetEntries(4762.881);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,2500);
   hs3_stack_3->SetMinimum(-1.150846e-08);
   hs3_stack_3->SetMaximum(572.1978);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(5,1.106487);
   hbadmatch_stack_1->SetBinContent(6,0.6608871);
   hbadmatch_stack_1->SetBinContent(7,0.856073);
   hbadmatch_stack_1->SetBinContent(8,1.677187);
   hbadmatch_stack_1->SetBinContent(9,1.388095);
   hbadmatch_stack_1->SetBinContent(10,1.56902);
   hbadmatch_stack_1->SetBinContent(11,2.412135);
   hbadmatch_stack_1->SetBinContent(12,1.251409);
   hbadmatch_stack_1->SetBinContent(13,1.719237);
   hbadmatch_stack_1->SetBinContent(14,0.8425399);
   hbadmatch_stack_1->SetBinContent(15,1.625124);
   hbadmatch_stack_1->SetBinContent(16,1.66828);
   hbadmatch_stack_1->SetBinContent(17,1.037832);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,0.6803553);
   hbadmatch_stack_1->SetBinContent(20,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(5,0.568129);
   hbadmatch_stack_1->SetBinError(6,0.3826621);
   hbadmatch_stack_1->SetBinError(7,0.4068152);
   hbadmatch_stack_1->SetBinError(8,0.7166878);
   hbadmatch_stack_1->SetBinError(9,0.5250111);
   hbadmatch_stack_1->SetBinError(10,0.6068696);
   hbadmatch_stack_1->SetBinError(11,0.8422352);
   hbadmatch_stack_1->SetBinError(12,0.5898442);
   hbadmatch_stack_1->SetBinError(13,0.6823575);
   hbadmatch_stack_1->SetBinError(14,0.4524264);
   hbadmatch_stack_1->SetBinError(15,0.8345567);
   hbadmatch_stack_1->SetBinError(16,0.7121356);
   hbadmatch_stack_1->SetBinError(17,0.551039);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.4810838);
   hbadmatch_stack_1->SetBinError(20,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.2781975);
   hbadmatch_stack_1->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(3,0.6416141);
   hext_stack_2->SetBinContent(4,2.973055);
   hext_stack_2->SetBinContent(5,2.021405);
   hext_stack_2->SetBinContent(6,2.923985);
   hext_stack_2->SetBinContent(7,3.483397);
   hext_stack_2->SetBinContent(8,17.05228);
   hext_stack_2->SetBinContent(9,22.0252);
   hext_stack_2->SetBinContent(10,10.36522);
   hext_stack_2->SetBinContent(11,7.500257);
   hext_stack_2->SetBinContent(12,9.347307);
   hext_stack_2->SetBinContent(13,7.276832);
   hext_stack_2->SetBinContent(14,7.904085);
   hext_stack_2->SetBinContent(15,3.819384);
   hext_stack_2->SetBinContent(16,1.37261);
   hext_stack_2->SetBinContent(17,2.834603);
   hext_stack_2->SetBinContent(18,4.188443);
   hext_stack_2->SetBinContent(19,3.939067);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(23,3.856865);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,7.161499);
   hext_stack_2->SetBinError(3,0.6416141);
   hext_stack_2->SetBinError(4,1.346105);
   hext_stack_2->SetBinError(5,0.9448239);
   hext_stack_2->SetBinError(6,1.040301);
   hext_stack_2->SetBinError(7,1.197416);
   hext_stack_2->SetBinError(8,2.816856);
   hext_stack_2->SetBinError(9,3.353054);
   hext_stack_2->SetBinError(10,2.139544);
   hext_stack_2->SetBinError(11,1.920331);
   hext_stack_2->SetBinError(12,2.235556);
   hext_stack_2->SetBinError(13,1.837184);
   hext_stack_2->SetBinError(14,2.046782);
   hext_stack_2->SetBinError(15,1.213655);
   hext_stack_2->SetBinError(16,0.8259691);
   hext_stack_2->SetBinError(17,1.106046);
   hext_stack_2->SetBinError(18,1.474057);
   hext_stack_2->SetBinError(19,1.526073);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(23,1.506257);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,1.996207);
   hext_stack_2->SetEntries(271);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.1792599);
   hdirt_stack_3->SetBinContent(7,1.132946);
   hdirt_stack_3->SetBinContent(8,0.5875239);
   hdirt_stack_3->SetBinContent(9,0.9613423);
   hdirt_stack_3->SetBinContent(11,0.4045523);
   hdirt_stack_3->SetBinContent(12,0.2665913);
   hdirt_stack_3->SetBinContent(13,0.2926592);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.5479051);
   hdirt_stack_3->SetBinContent(18,2.407774e-08);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.1792599);
   hdirt_stack_3->SetBinError(7,0.526479);
   hdirt_stack_3->SetBinError(8,0.3675399);
   hdirt_stack_3->SetBinError(9,0.5022008);
   hdirt_stack_3->SetBinError(11,0.3001263);
   hdirt_stack_3->SetBinError(12,0.2665913);
   hdirt_stack_3->SetBinError(13,0.2072697);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4164762);
   hdirt_stack_3->SetBinError(18,2.407774e-08);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(27);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,3.147763);
   houtFV_stack_4->SetBinContent(6,4.829369);
   houtFV_stack_4->SetBinContent(7,5.294691);
   houtFV_stack_4->SetBinContent(8,7.608171);
   houtFV_stack_4->SetBinContent(9,7.003493);
   houtFV_stack_4->SetBinContent(10,5.776742);
   houtFV_stack_4->SetBinContent(11,5.935074);
   houtFV_stack_4->SetBinContent(12,3.857891);
   houtFV_stack_4->SetBinContent(13,2.78759);
   houtFV_stack_4->SetBinContent(14,2.392469);
   houtFV_stack_4->SetBinContent(15,2.45246);
   houtFV_stack_4->SetBinContent(16,1.072568);
   houtFV_stack_4->SetBinContent(17,1.84654);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.8135936);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.9238018);
   houtFV_stack_4->SetBinError(6,1.149684);
   houtFV_stack_4->SetBinError(7,1.125503);
   houtFV_stack_4->SetBinError(8,2.071305);
   houtFV_stack_4->SetBinError(9,1.391856);
   houtFV_stack_4->SetBinError(10,1.184308);
   houtFV_stack_4->SetBinError(11,1.269087);
   houtFV_stack_4->SetBinError(12,0.96154);
   houtFV_stack_4->SetBinError(13,0.8331329);
   houtFV_stack_4->SetBinError(14,0.7848912);
   houtFV_stack_4->SetBinError(15,1.062681);
   houtFV_stack_4->SetBinError(16,0.4479875);
   houtFV_stack_4->SetBinError(17,0.9709336);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.4843801);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(26,0.2770047);
   houtFV_stack_4->SetEntries(234);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(5);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.3255332);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.743506);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.380072);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.078886);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.217305);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.933872);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.355309);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.712959);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.955471);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.240079);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.569521);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.295486);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.548274);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.637909);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.371645);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.1153349);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.08074981);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.04467028);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1114991);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3847531);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5103767);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6366941);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5300174);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6772001);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7236444);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9680571);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7730105);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7235861);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9043767);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7139096);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6569764);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8116848);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1542321);
   hNCpi0inFVres_stack_7->SetBinError(19,0.07142288);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05976214);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(25,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.03255229);
   hNCpi0inFVres_stack_7->SetEntries(949);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1943298);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6727571);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.525187);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.841601);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.983945);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.438458);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.950796);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.404606);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.360898);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.839419);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.843848);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.431611);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.359869);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.909541);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.315826);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.020363);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.920372);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6971721);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4035539);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.8817152);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1047973);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1895096);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6381426);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4381078);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5489581);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4874859);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4872576);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9116481);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6633027);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7873731);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.688969);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.138061);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3828514);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6365298);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4405925);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6011291);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3235708);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3138005);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1775557);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3015775);
   hNCpi0inFVdis_stack_8->SetEntries(773);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(3,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(4,7.714299);
   hCCpi0inFV_stack_10->SetBinContent(5,43.49853);
   hCCpi0inFV_stack_10->SetBinContent(6,135.4293);
   hCCpi0inFV_stack_10->SetBinContent(7,247.8892);
   hCCpi0inFV_stack_10->SetBinContent(8,364.0701);
   hCCpi0inFV_stack_10->SetBinContent(9,394.8804);
   hCCpi0inFV_stack_10->SetBinContent(10,416.1193);
   hCCpi0inFV_stack_10->SetBinContent(11,387.2673);
   hCCpi0inFV_stack_10->SetBinContent(12,328.3448);
   hCCpi0inFV_stack_10->SetBinContent(13,266.1111);
   hCCpi0inFV_stack_10->SetBinContent(14,214.7189);
   hCCpi0inFV_stack_10->SetBinContent(15,165.9479);
   hCCpi0inFV_stack_10->SetBinContent(16,131.0342);
   hCCpi0inFV_stack_10->SetBinContent(17,98.12195);
   hCCpi0inFV_stack_10->SetBinContent(18,77.97484);
   hCCpi0inFV_stack_10->SetBinContent(19,61.91634);
   hCCpi0inFV_stack_10->SetBinContent(20,49.49066);
   hCCpi0inFV_stack_10->SetBinContent(21,39.73855);
   hCCpi0inFV_stack_10->SetBinContent(22,27.93456);
   hCCpi0inFV_stack_10->SetBinContent(23,27.06079);
   hCCpi0inFV_stack_10->SetBinContent(24,21.00655);
   hCCpi0inFV_stack_10->SetBinContent(25,18.30978);
   hCCpi0inFV_stack_10->SetBinContent(26,62.28896);
   hCCpi0inFV_stack_10->SetBinError(3,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(4,1.415126);
   hCCpi0inFV_stack_10->SetBinError(5,3.27238);
   hCCpi0inFV_stack_10->SetBinError(6,5.953607);
   hCCpi0inFV_stack_10->SetBinError(7,7.926295);
   hCCpi0inFV_stack_10->SetBinError(8,9.571962);
   hCCpi0inFV_stack_10->SetBinError(9,9.959085);
   hCCpi0inFV_stack_10->SetBinError(10,10.26292);
   hCCpi0inFV_stack_10->SetBinError(11,9.97126);
   hCCpi0inFV_stack_10->SetBinError(12,9.117134);
   hCCpi0inFV_stack_10->SetBinError(13,8.13288);
   hCCpi0inFV_stack_10->SetBinError(14,7.386843);
   hCCpi0inFV_stack_10->SetBinError(15,6.493668);
   hCCpi0inFV_stack_10->SetBinError(16,5.801612);
   hCCpi0inFV_stack_10->SetBinError(17,4.991916);
   hCCpi0inFV_stack_10->SetBinError(18,4.453711);
   hCCpi0inFV_stack_10->SetBinError(19,3.916032);
   hCCpi0inFV_stack_10->SetBinError(20,3.55794);
   hCCpi0inFV_stack_10->SetBinError(21,3.156688);
   hCCpi0inFV_stack_10->SetBinError(22,2.682653);
   hCCpi0inFV_stack_10->SetBinError(23,2.664245);
   hCCpi0inFV_stack_10->SetBinError(24,2.279491);
   hCCpi0inFV_stack_10->SetBinError(25,2.194527);
   hCCpi0inFV_stack_10->SetBinError(26,3.974046);
   hCCpi0inFV_stack_10->SetEntries(15285);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,0.1967154);
   hNCinFV_stack_11->SetBinContent(6,1.127039);
   hNCinFV_stack_11->SetBinContent(7,2.247316);
   hNCinFV_stack_11->SetBinContent(8,3.27123);
   hNCinFV_stack_11->SetBinContent(9,3.517817);
   hNCinFV_stack_11->SetBinContent(10,2.450794);
   hNCinFV_stack_11->SetBinContent(11,2.055672);
   hNCinFV_stack_11->SetBinContent(12,1.804013);
   hNCinFV_stack_11->SetBinContent(13,2.447412);
   hNCinFV_stack_11->SetBinContent(14,0.3934307);
   hNCinFV_stack_11->SetBinContent(15,1.072095);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.7336084);
   hNCinFV_stack_11->SetBinContent(18,1.073786);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.536893);
   hNCinFV_stack_11->SetBinContent(21,0.5884556);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.1967154);
   hNCinFV_stack_11->SetBinError(6,0.5201044);
   hNCinFV_stack_11->SetBinError(7,0.7337357);
   hNCinFV_stack_11->SetBinError(8,0.9417298);
   hNCinFV_stack_11->SetBinError(9,0.9412229);
   hNCinFV_stack_11->SetBinError(10,0.7613895);
   hNCinFV_stack_11->SetBinError(11,0.7082781);
   hNCinFV_stack_11->SetBinError(12,0.7075491);
   hNCinFV_stack_11->SetBinError(13,0.7605193);
   hNCinFV_stack_11->SetBinError(14,0.2781975);
   hNCinFV_stack_11->SetBinError(15,0.5551335);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.4394482);
   hNCinFV_stack_11->SetBinError(18,0.5557297);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.3929602);
   hNCinFV_stack_11->SetBinError(21,0.3397478);
   hNCinFV_stack_11->SetEntries(106);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(3,0.426378);
   hnumuCCinFV_stack_12->SetBinContent(4,12.50767);
   hnumuCCinFV_stack_12->SetBinContent(5,30.72159);
   hnumuCCinFV_stack_12->SetBinContent(6,48.05508);
   hnumuCCinFV_stack_12->SetBinContent(7,79.98186);
   hnumuCCinFV_stack_12->SetBinContent(8,87.64594);
   hnumuCCinFV_stack_12->SetBinContent(9,105.6218);
   hnumuCCinFV_stack_12->SetBinContent(10,84.82168);
   hnumuCCinFV_stack_12->SetBinContent(11,82.02908);
   hnumuCCinFV_stack_12->SetBinContent(12,71.80038);
   hnumuCCinFV_stack_12->SetBinContent(13,55.13914);
   hnumuCCinFV_stack_12->SetBinContent(14,47.53098);
   hnumuCCinFV_stack_12->SetBinContent(15,38.2933);
   hnumuCCinFV_stack_12->SetBinContent(16,28.92577);
   hnumuCCinFV_stack_12->SetBinContent(17,23.6174);
   hnumuCCinFV_stack_12->SetBinContent(18,20.44603);
   hnumuCCinFV_stack_12->SetBinContent(19,13.16956);
   hnumuCCinFV_stack_12->SetBinContent(20,10.26651);
   hnumuCCinFV_stack_12->SetBinContent(21,11.05339);
   hnumuCCinFV_stack_12->SetBinContent(22,8.914059);
   hnumuCCinFV_stack_12->SetBinContent(23,6.246);
   hnumuCCinFV_stack_12->SetBinContent(24,5.373393);
   hnumuCCinFV_stack_12->SetBinContent(25,3.246977);
   hnumuCCinFV_stack_12->SetBinContent(26,15.16012);
   hnumuCCinFV_stack_12->SetBinError(3,0.3025871);
   hnumuCCinFV_stack_12->SetBinError(4,1.875957);
   hnumuCCinFV_stack_12->SetBinError(5,3.63912);
   hnumuCCinFV_stack_12->SetBinError(6,4.369269);
   hnumuCCinFV_stack_12->SetBinError(7,5.080633);
   hnumuCCinFV_stack_12->SetBinError(8,5.14514);
   hnumuCCinFV_stack_12->SetBinError(9,5.437335);
   hnumuCCinFV_stack_12->SetBinError(10,4.788888);
   hnumuCCinFV_stack_12->SetBinError(11,6.185949);
   hnumuCCinFV_stack_12->SetBinError(12,4.475242);
   hnumuCCinFV_stack_12->SetBinError(13,4.345366);
   hnumuCCinFV_stack_12->SetBinError(14,3.730572);
   hnumuCCinFV_stack_12->SetBinError(15,3.156497);
   hnumuCCinFV_stack_12->SetBinError(16,3.132747);
   hnumuCCinFV_stack_12->SetBinError(17,3.333895);
   hnumuCCinFV_stack_12->SetBinError(18,2.281113);
   hnumuCCinFV_stack_12->SetBinError(19,1.820195);
   hnumuCCinFV_stack_12->SetBinError(20,1.578464);
   hnumuCCinFV_stack_12->SetBinError(21,1.630473);
   hnumuCCinFV_stack_12->SetBinError(22,1.500603);
   hnumuCCinFV_stack_12->SetBinError(23,1.346965);
   hnumuCCinFV_stack_12->SetBinError(24,1.160835);
   hnumuCCinFV_stack_12->SetBinError(25,0.9447486);
   hnumuCCinFV_stack_12->SetBinError(26,1.979871);
   hnumuCCinFV_stack_12->SetEntries(3654);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,1.167084);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.6167127);
   hnueCCinFV_stack_13->SetBinContent(12,1.217248);
   hnueCCinFV_stack_13->SetBinContent(13,1.731914);
   hnueCCinFV_stack_13->SetBinContent(14,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(19,1.072095);
   hnueCCinFV_stack_13->SetBinContent(20,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,1.073786);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.5366637);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.4646023);
   hnueCCinFV_stack_13->SetBinError(12,0.6211758);
   hnueCCinFV_stack_13->SetBinError(13,0.6758482);
   hnueCCinFV_stack_13->SetBinError(14,0.2781975);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.2781975);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(19,0.5551335);
   hnueCCinFV_stack_13->SetBinError(20,0.5197486);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.5557297);
   hnueCCinFV_stack_13->SetEntries(47);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__8->SetBinContent(3,1.77103);
   hmcerror__8->SetBinContent(4,24.61998);
   hmcerror__8->SetBinContent(5,83.89195);
   hmcerror__8->SetBinContent(6,200.2316);
   hmcerror__8->SetBinContent(7,349.1317);
   hmcerror__8->SetBinContent(8,489.5239);
   hmcerror__8->SetBinContent(9,544.9503);
   hmcerror__8->SetBinContent(10,528.6232);
   hmcerror__8->SetBinContent(11,497.3981);
   hmcerror__8->SetBinContent(12,425.206);
   hmcerror__8->SetBinContent(13,344.5854);
   hmcerror__8->SetBinContent(14,281.1463);
   hmcerror__8->SetBinContent(15,220.8787);
   hmcerror__8->SetBinContent(16,167.3733);
   hmcerror__8->SetBinContent(17,132.1328);
   hmcerror__8->SetBinContent(18,106.2992);
   hmcerror__8->SetBinContent(19,82.74406);
   hmcerror__8->SetBinContent(20,64.25373);
   hmcerror__8->SetBinContent(21,53.11644);
   hmcerror__8->SetBinContent(22,38.08268);
   hmcerror__8->SetBinContent(23,38.03469);
   hmcerror__8->SetBinContent(24,27.27755);
   hmcerror__8->SetBinContent(25,22.35629);
   hmcerror__8->SetBinContent(26,87.39592);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,0.3895343);
   hmcerror__8->SetBinError(3,0.9820913);
   hmcerror__8->SetBinError(4,5.61046);
   hmcerror__8->SetBinError(5,17.06457);
   hmcerror__8->SetBinError(6,46.29179);
   hmcerror__8->SetBinError(7,82.34799);
   hmcerror__8->SetBinError(8,112.9332);
   hmcerror__8->SetBinError(9,129.3248);
   hmcerror__8->SetBinError(10,133.5778);
   hmcerror__8->SetBinError(11,126.7029);
   hmcerror__8->SetBinError(12,105.7767);
   hmcerror__8->SetBinError(13,86.69346);
   hmcerror__8->SetBinError(14,66.7546);
   hmcerror__8->SetBinError(15,53.45376);
   hmcerror__8->SetBinError(16,41.9315);
   hmcerror__8->SetBinError(17,31.98746);
   hmcerror__8->SetBinError(18,24.83879);
   hmcerror__8->SetBinError(19,19.2929);
   hmcerror__8->SetBinError(20,14.65855);
   hmcerror__8->SetBinError(21,12.04213);
   hmcerror__8->SetBinError(22,7.952447);
   hmcerror__8->SetBinError(23,7.921121);
   hmcerror__8->SetBinError(24,6.724635);
   hmcerror__8->SetBinError(25,4.725947);
   hmcerror__8->SetBinError(26,14.60088);
   hmcerror__8->SetEntries(4762.881);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3009[25] = {
   0,
   0,
   0,
   25,
   110,
   251,
   400,
   495,
   538,
   509,
   493,
   339,
   311,
   203,
   185,
   126,
   117,
   78,
   52,
   48,
   39,
   26,
   19,
   16,
   13};
   Double_t _felx3009[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3009[25] = {
   0,
   0,
   0,
   5.1474,
   10.48809,
   15.84298,
   20,
   22.2486,
   23.19483,
   22.56103,
   22.2036,
   18.41195,
   17.63519,
   14.24781,
   13.60147,
   11.22497,
   10.81665,
   8.9562,
   7.3419,
   7.0604,
   6.3813,
   5.2453,
   4.5151,
   4.1628,
   3.77763};
   Double_t _fehx3009[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3009[25] = {
   1.1478,
   1.1478,
   1.1478,
   4.9374,
   10.48809,
   15.84298,
   20,
   22.2486,
   23.19483,
   22.56103,
   22.2036,
   18.41195,
   17.63519,
   14.24781,
   13.60147,
   11.22497,
   10.81665,
   8.7542,
   7.1381,
   6.8561,
   6.1757,
   5.0358,
   4.3011,
   3.9454,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,2750);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(617.3143);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=25.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4393.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.8","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 115.3","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.5","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.1","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  44.2","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3525.1","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.8","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 875.8","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.7","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   
   Double_t _fx3010[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3010[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3010[25] = {
   0,
   0,
   0.554531,
   0.2278824,
   0.2034113,
   0.2311912,
   0.2358651,
   0.2307002,
   0.2373148,
   0.2526901,
   0.2547313,
   0.2487657,
   0.2515877,
   0.2374372,
   0.2420051,
   0.2505268,
   0.2420857,
   0.2336687,
   0.2331635,
   0.2281353,
   0.2267119,
   0.2088205,
   0.2082604,
   0.2465264,
   0.2113923};
   Double_t _fehx3010[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3010[25] = {
   0,
   0,
   0.554531,
   0.2278824,
   0.2034113,
   0.2311912,
   0.2358651,
   0.2307002,
   0.2373148,
   0.2526901,
   0.2547313,
   0.2487657,
   0.2515877,
   0.2374372,
   0.2420051,
   0.2505268,
   0.2420857,
   0.2336687,
   0.2331635,
   0.2281353,
   0.2267119,
   0.2088205,
   0.2082604,
   0.2465264,
   0.2113923};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,2750);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3011[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3011[25] = {
   0,
   0,
   0.554531,
   0.2278824,
   0.2034113,
   0.2311912,
   0.2358651,
   0.2307002,
   0.2373148,
   0.2526901,
   0.2547313,
   0.2487657,
   0.2515877,
   0.2374372,
   0.2420051,
   0.2505268,
   0.2420857,
   0.2336687,
   0.2331635,
   0.2281353,
   0.2267119,
   0.2088205,
   0.2082604,
   0.2465264,
   0.2113923};
   Double_t _fehx3011[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3011[25] = {
   0,
   0,
   0.554531,
   0.2278824,
   0.2034113,
   0.2311912,
   0.2358651,
   0.2307002,
   0.2373148,
   0.2526901,
   0.2547313,
   0.2487657,
   0.2515877,
   0.2374372,
   0.2420051,
   0.2505268,
   0.2420857,
   0.2336687,
   0.2331635,
   0.2281353,
   0.2267119,
   0.2088205,
   0.2082604,
   0.2465264,
   0.2113923};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,2750);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3012[25] = {
   10,
   10,
   0,
   1.015435,
   1.31121,
   1.253549,
   1.145699,
   1.011187,
   0.987246,
   0.9628787,
   0.9911578,
   0.7972607,
   0.9025338,
   0.7220439,
   0.8375639,
   0.7528082,
   0.8854727,
   0.7337779,
   0.6284439,
   0.7470383,
   0.734236,
   0.682725,
   0.499544,
   0.586563,
   0.5814919};
   Double_t _felx3012[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3012[25] = {
   0,
   0,
   0,
   0.2090741,
   0.125019,
   0.07912329,
   0.05728497,
   0.04544946,
   0.0425632,
   0.04267885,
   0.0446395,
   0.04330126,
   0.051178,
   0.05067755,
   0.06157892,
   0.06706549,
   0.08186198,
   0.08425464,
   0.08873023,
   0.1098831,
   0.120138,
   0.1377345,
   0.11871,
   0.152609,
   0.1689739};
   Double_t _fehx3012[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3012[25] = {
   0,
   0,
   0.6480973,
   0.2005444,
   0.125019,
   0.07912329,
   0.05728497,
   0.04544946,
   0.0425632,
   0.04267885,
   0.0446395,
   0.04330126,
   0.051178,
   0.05067755,
   0.06157892,
   0.06706549,
   0.08186198,
   0.08235434,
   0.08626722,
   0.1067035,
   0.1162672,
   0.1322333,
   0.1130836,
   0.1446391,
   0.1590246};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,2750);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(11);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,2500,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
