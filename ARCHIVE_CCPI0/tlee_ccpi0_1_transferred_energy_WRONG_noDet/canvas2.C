#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Oct 24 15:37:54 2022) by ROOT version 6.26/00
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
   pad1->Range(-276.9231,-5.672991,2030.769,627.3133);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__4->SetBinContent(0,0.04249);
   hmc__4->SetBinContent(1,0.9286332);
   hmc__4->SetBinContent(2,13.89817);
   hmc__4->SetBinContent(3,49.59912);
   hmc__4->SetBinContent(4,118.5679);
   hmc__4->SetBinContent(5,210.9223);
   hmc__4->SetBinContent(6,266.8745);
   hmc__4->SetBinContent(7,277.5315);
   hmc__4->SetBinContent(8,283.6495);
   hmc__4->SetBinContent(9,264.9276);
   hmc__4->SetBinContent(10,226.3515);
   hmc__4->SetBinContent(11,187.6227);
   hmc__4->SetBinContent(12,158.0556);
   hmc__4->SetBinContent(13,136.8371);
   hmc__4->SetBinContent(14,116.5835);
   hmc__4->SetBinContent(15,87.50055);
   hmc__4->SetBinContent(16,81.68138);
   hmc__4->SetBinContent(17,60.81139);
   hmc__4->SetBinContent(18,41.85472);
   hmc__4->SetBinContent(19,28.99042);
   hmc__4->SetBinContent(20,26.01746);
   hmc__4->SetBinContent(21,20.13122);
   hmc__4->SetBinContent(22,18.0877);
   hmc__4->SetBinContent(23,12.82186);
   hmc__4->SetBinContent(24,9.102996);
   hmc__4->SetBinContent(25,8.235148);
   hmc__4->SetBinContent(26,27.00992);
   hmc__4->SetBinError(0,0.03055227);
   hmc__4->SetBinError(1,0.7024967);
   hmc__4->SetBinError(2,4.021439);
   hmc__4->SetBinError(3,11.52349);
   hmc__4->SetBinError(4,28.89337);
   hmc__4->SetBinError(5,55.72907);
   hmc__4->SetBinError(6,68.95562);
   hmc__4->SetBinError(7,71.11824);
   hmc__4->SetBinError(8,68.69757);
   hmc__4->SetBinError(9,64.63921);
   hmc__4->SetBinError(10,50.72468);
   hmc__4->SetBinError(11,46.18795);
   hmc__4->SetBinError(12,36.28851);
   hmc__4->SetBinError(13,31.7596);
   hmc__4->SetBinError(14,28.94087);
   hmc__4->SetBinError(15,20.9111);
   hmc__4->SetBinError(16,19.08886);
   hmc__4->SetBinError(17,15.14433);
   hmc__4->SetBinError(18,10.72819);
   hmc__4->SetBinError(19,7.206186);
   hmc__4->SetBinError(20,6.81862);
   hmc__4->SetBinError(21,5.576363);
   hmc__4->SetBinError(22,5.548025);
   hmc__4->SetBinError(23,3.96374);
   hmc__4->SetBinError(24,2.811791);
   hmc__4->SetBinError(25,2.425047);
   hmc__4->SetBinError(26,5.074613);
   hmc__4->SetMinimum(-5.672991);
   hmc__4->SetMaximum(595.664);
   hmc__4->SetEntries(2718.074);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1800);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(297.832);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,0.9317297);
   hbadmatch_stack_1->SetBinContent(4,0.3401776);
   hbadmatch_stack_1->SetBinContent(5,0.1028101);
   hbadmatch_stack_1->SetBinContent(6,1.079974);
   hbadmatch_stack_1->SetBinContent(7,2.055672);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,1.408953);
   hbadmatch_stack_1->SetBinContent(10,1.388144);
   hbadmatch_stack_1->SetBinContent(11,0.8753801);
   hbadmatch_stack_1->SetBinContent(12,1.162337);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.7336084);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.4611332);
   hbadmatch_stack_1->SetBinContent(19,0.8368552);
   hbadmatch_stack_1->SetBinContent(20,0.536893);
   hbadmatch_stack_1->SetBinContent(21,1.365601);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.5570582);
   hbadmatch_stack_1->SetBinError(4,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.1028101);
   hbadmatch_stack_1->SetBinError(6,0.5579502);
   hbadmatch_stack_1->SetBinError(7,0.7082781);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.5887579);
   hbadmatch_stack_1->SetBinError(10,0.5248585);
   hbadmatch_stack_1->SetBinError(11,0.5191111);
   hbadmatch_stack_1->SetBinError(12,0.534559);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.4394482);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.3610416);
   hbadmatch_stack_1->SetBinError(19,0.6020045);
   hbadmatch_stack_1->SetBinError(20,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.5724686);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,1.055394);
   hext_stack_2->SetBinContent(5,0.7309963);
   hext_stack_2->SetBinContent(6,1.779209);
   hext_stack_2->SetBinContent(7,3.297453);
   hext_stack_2->SetBinContent(8,0.8131978);
   hext_stack_2->SetBinContent(9,1.290409);
   hext_stack_2->SetBinContent(10,1.868591);
   hext_stack_2->SetBinContent(11,2.428004);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,3.939067);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.6487947);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.6130171);
   hext_stack_2->SetBinError(5,0.5201503);
   hext_stack_2->SetBinError(6,0.9206235);
   hext_stack_2->SetBinError(7,1.384641);
   hext_stack_2->SetBinError(8,0.5750177);
   hext_stack_2->SetBinError(9,0.788756);
   hext_stack_2->SetBinError(10,0.840497);
   hext_stack_2->SetBinError(11,1.028599);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,1.526073);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.4587671);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetEntries(52);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(4,0.2544535);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2574102);
   hdirt_stack_3->SetBinError(4,0.2544535);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2574102);
   hdirt_stack_3->SetEntries(3);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,0.2448018);
   houtFV_stack_4->SetBinContent(4,0.7414583);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.7336084);
   houtFV_stack_4->SetBinContent(7,0.9286332);
   houtFV_stack_4->SetBinContent(8,0.9801958);
   houtFV_stack_4->SetBinContent(9,0.9802117);
   houtFV_stack_4->SetBinContent(10,0.6803553);
   houtFV_stack_4->SetBinContent(11,0.6107302);
   houtFV_stack_4->SetBinContent(12,0.1950248);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.3900497);
   houtFV_stack_4->SetBinContent(16,0.6469922);
   houtFV_stack_4->SetBinError(2,0.2448018);
   houtFV_stack_4->SetBinError(4,0.4343845);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.4394482);
   houtFV_stack_4->SetBinError(7,0.48078);
   houtFV_stack_4->SetBinError(8,0.4383608);
   houtFV_stack_4->SetBinError(9,0.5042642);
   houtFV_stack_4->SetBinError(10,0.4810838);
   houtFV_stack_4->SetBinError(11,0.3993243);
   houtFV_stack_4->SetBinError(12,0.1950249);
   houtFV_stack_4->SetBinError(13,0.1967154);
   houtFV_stack_4->SetBinError(14,0.2758068);
   houtFV_stack_4->SetBinError(16,0.3766765);
   houtFV_stack_4->SetEntries(33);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04659828);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1970327);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1714184);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetEntries(4);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1711181);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.5900718);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.31988);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.975079);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.287377);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.889473);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.276412);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.4749);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.885237);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.884494);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.425771);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.800985);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.48514);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.823406);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.262012);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.910224);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.7096403);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.308227);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.9304708);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2663553);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.4658655);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2735158);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1912477);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.181018);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.07427376);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1669985);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3933885);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3385187);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6068922);
   hNCpi0inFVres_stack_7->SetBinError(7,0.606329);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8094381);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6630965);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8311992);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7612489);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9960256);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6057037);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8472278);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3888914);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5725877);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6123139);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2222362);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5181598);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5680997);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1361057);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2257972);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2104738);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1188261);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1086555);
   hNCpi0inFVres_stack_7->SetEntries(1121);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.06912473);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.6147308);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.960161);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.009853);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.421779);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.983921);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.848886);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.449052);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.212929);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.220623);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.398408);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.970017);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.880493);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.265768);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.90103);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.82854);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.155982);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.149432);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.735863);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.8518547);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3745437);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6658118);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.52841);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4659047);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.04959411);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2208134);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7449242);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4736303);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.697889);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5353956);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5816815);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5127896);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7078016);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7738622);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.645557);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7647985);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5973053);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.719171);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.65618);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4362145);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3549592);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4320819);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2677043);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3172931);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1517094);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5841142);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2909347);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3049041);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2452205);
   hNCpi0inFVdis_stack_8->SetEntries(863);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(2,3.666351);
   hCCpi0inFV_stack_10->SetBinContent(3,29.80708);
   hCCpi0inFV_stack_10->SetBinContent(4,86.9937);
   hCCpi0inFV_stack_10->SetBinContent(5,173.9067);
   hCCpi0inFV_stack_10->SetBinContent(6,217.9737);
   hCCpi0inFV_stack_10->SetBinContent(7,218.2195);
   hCCpi0inFV_stack_10->SetBinContent(8,221.2556);
   hCCpi0inFV_stack_10->SetBinContent(9,202.8497);
   hCCpi0inFV_stack_10->SetBinContent(10,160.9619);
   hCCpi0inFV_stack_10->SetBinContent(11,132.6564);
   hCCpi0inFV_stack_10->SetBinContent(12,105.596);
   hCCpi0inFV_stack_10->SetBinContent(13,93.44434);
   hCCpi0inFV_stack_10->SetBinContent(14,73.13932);
   hCCpi0inFV_stack_10->SetBinContent(15,59.50216);
   hCCpi0inFV_stack_10->SetBinContent(16,46.33856);
   hCCpi0inFV_stack_10->SetBinContent(17,34.28052);
   hCCpi0inFV_stack_10->SetBinContent(18,24.14446);
   hCCpi0inFV_stack_10->SetBinContent(19,16.15227);
   hCCpi0inFV_stack_10->SetBinContent(20,13.08431);
   hCCpi0inFV_stack_10->SetBinContent(21,11.54041);
   hCCpi0inFV_stack_10->SetBinContent(22,8.96816);
   hCCpi0inFV_stack_10->SetBinContent(23,6.987453);
   hCCpi0inFV_stack_10->SetBinContent(24,4.886373);
   hCCpi0inFV_stack_10->SetBinContent(25,5.570109);
   hCCpi0inFV_stack_10->SetBinContent(26,15.53457);
   hCCpi0inFV_stack_10->SetBinError(1,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(2,0.9822989);
   hCCpi0inFV_stack_10->SetBinError(3,2.776825);
   hCCpi0inFV_stack_10->SetBinError(4,4.656288);
   hCCpi0inFV_stack_10->SetBinError(5,6.654709);
   hCCpi0inFV_stack_10->SetBinError(6,7.389694);
   hCCpi0inFV_stack_10->SetBinError(7,7.449566);
   hCCpi0inFV_stack_10->SetBinError(8,7.447448);
   hCCpi0inFV_stack_10->SetBinError(9,7.159375);
   hCCpi0inFV_stack_10->SetBinError(10,6.346705);
   hCCpi0inFV_stack_10->SetBinError(11,5.805093);
   hCCpi0inFV_stack_10->SetBinError(12,5.148882);
   hCCpi0inFV_stack_10->SetBinError(13,4.826844);
   hCCpi0inFV_stack_10->SetBinError(14,4.274891);
   hCCpi0inFV_stack_10->SetBinError(15,3.852074);
   hCCpi0inFV_stack_10->SetBinError(16,3.440846);
   hCCpi0inFV_stack_10->SetBinError(17,3.013852);
   hCCpi0inFV_stack_10->SetBinError(18,2.451506);
   hCCpi0inFV_stack_10->SetBinError(19,2.062891);
   hCCpi0inFV_stack_10->SetBinError(20,1.829971);
   hCCpi0inFV_stack_10->SetBinError(21,1.688938);
   hCCpi0inFV_stack_10->SetBinError(22,1.438466);
   hCCpi0inFV_stack_10->SetBinError(23,1.346148);
   hCCpi0inFV_stack_10->SetBinError(24,1.073996);
   hCCpi0inFV_stack_10->SetBinError(25,1.177384);
   hCCpi0inFV_stack_10->SetBinError(26,1.964032);
   hCCpi0inFV_stack_10->SetEntries(8407);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.3934307);
   hNCinFV_stack_11->SetBinContent(4,1.517089);
   hNCinFV_stack_11->SetBinContent(5,2.340906);
   hNCinFV_stack_11->SetBinContent(6,1.947059);
   hNCinFV_stack_11->SetBinContent(7,2.357398);
   hNCinFV_stack_11->SetBinContent(8,5.051532);
   hNCinFV_stack_11->SetBinContent(9,2.462147);
   hNCinFV_stack_11->SetBinContent(10,3.725128);
   hNCinFV_stack_11->SetBinContent(11,2.039629);
   hNCinFV_stack_11->SetBinContent(12,3.396992);
   hNCinFV_stack_11->SetBinContent(13,3.319914);
   hNCinFV_stack_11->SetBinContent(14,1.784733);
   hNCinFV_stack_11->SetBinContent(15,2.555613);
   hNCinFV_stack_11->SetBinContent(16,3.737369);
   hNCinFV_stack_11->SetBinContent(17,3.336638);
   hNCinFV_stack_11->SetBinContent(18,1.537123);
   hNCinFV_stack_11->SetBinContent(19,1.191013);
   hNCinFV_stack_11->SetBinContent(20,0.8770706);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.3900497);
   hNCinFV_stack_11->SetBinContent(25,0.3934307);
   hNCinFV_stack_11->SetBinContent(26,1.557426);
   hNCinFV_stack_11->SetBinError(3,0.2781975);
   hNCinFV_stack_11->SetBinError(4,0.5887087);
   hNCinFV_stack_11->SetBinError(5,0.8093475);
   hNCinFV_stack_11->SetBinError(6,1.064054);
   hNCinFV_stack_11->SetBinError(7,0.8166027);
   hNCinFV_stack_11->SetBinError(8,1.126127);
   hNCinFV_stack_11->SetBinError(9,0.8043313);
   hNCinFV_stack_11->SetBinError(10,0.9527343);
   hNCinFV_stack_11->SetBinError(11,0.8685078);
   hNCinFV_stack_11->SetBinError(12,1.174766);
   hNCinFV_stack_11->SetBinError(13,1.101546);
   hNCinFV_stack_11->SetBinError(14,0.702433);
   hNCinFV_stack_11->SetBinError(15,0.850266);
   hNCinFV_stack_11->SetBinError(16,1.601559);
   hNCinFV_stack_11->SetBinError(17,1.557328);
   hNCinFV_stack_11->SetBinError(18,0.7307204);
   hNCinFV_stack_11->SetBinError(19,0.5679591);
   hNCinFV_stack_11->SetBinError(20,0.5197486);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.2758068);
   hNCinFV_stack_11->SetBinError(25,0.2781975);
   hNCinFV_stack_11->SetBinError(26,0.7082233);
   hNCinFV_stack_11->SetEntries(168);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(1,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(2,9.550056);
   hnumuCCinFV_stack_12->SetBinContent(3,16.51286);
   hnumuCCinFV_stack_12->SetBinContent(4,23.38561);
   hnumuCCinFV_stack_12->SetBinContent(5,29.51582);
   hnumuCCinFV_stack_12->SetBinContent(6,35.44024);
   hnumuCCinFV_stack_12->SetBinContent(7,43.41879);
   hnumuCCinFV_stack_12->SetBinContent(8,46.79134);
   hnumuCCinFV_stack_12->SetBinContent(9,47.47526);
   hnumuCCinFV_stack_12->SetBinContent(10,45.93695);
   hnumuCCinFV_stack_12->SetBinContent(11,40.81017);
   hnumuCCinFV_stack_12->SetBinContent(12,37.54313);
   hnumuCCinFV_stack_12->SetBinContent(13,31.8213);
   hnumuCCinFV_stack_12->SetBinContent(14,34.17017);
   hnumuCCinFV_stack_12->SetBinContent(15,19.68902);
   hnumuCCinFV_stack_12->SetBinContent(16,20.86702);
   hnumuCCinFV_stack_12->SetBinContent(17,17.91383);
   hnumuCCinFV_stack_12->SetBinContent(18,13.00086);
   hnumuCCinFV_stack_12->SetBinContent(19,7.817425);
   hnumuCCinFV_stack_12->SetBinContent(20,8.926826);
   hnumuCCinFV_stack_12->SetBinContent(21,5.766824);
   hnumuCCinFV_stack_12->SetBinContent(22,7.561302);
   hnumuCCinFV_stack_12->SetBinContent(23,3.951585);
   hnumuCCinFV_stack_12->SetBinContent(24,2.587494);
   hnumuCCinFV_stack_12->SetBinContent(25,1.610679);
   hnumuCCinFV_stack_12->SetBinContent(26,7.730597);
   hnumuCCinFV_stack_12->SetBinError(1,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(2,1.796641);
   hnumuCCinFV_stack_12->SetBinError(3,2.085822);
   hnumuCCinFV_stack_12->SetBinError(4,2.94449);
   hnumuCCinFV_stack_12->SetBinError(5,3.584258);
   hnumuCCinFV_stack_12->SetBinError(6,3.09191);
   hnumuCCinFV_stack_12->SetBinError(7,3.516691);
   hnumuCCinFV_stack_12->SetBinError(8,4.179143);
   hnumuCCinFV_stack_12->SetBinError(9,3.537927);
   hnumuCCinFV_stack_12->SetBinError(10,3.593473);
   hnumuCCinFV_stack_12->SetBinError(11,3.207667);
   hnumuCCinFV_stack_12->SetBinError(12,3.071968);
   hnumuCCinFV_stack_12->SetBinError(13,2.814191);
   hnumuCCinFV_stack_12->SetBinError(14,3.021753);
   hnumuCCinFV_stack_12->SetBinError(15,2.224946);
   hnumuCCinFV_stack_12->SetBinError(16,2.367338);
   hnumuCCinFV_stack_12->SetBinError(17,2.211379);
   hnumuCCinFV_stack_12->SetBinError(18,1.798914);
   hnumuCCinFV_stack_12->SetBinError(19,1.3873);
   hnumuCCinFV_stack_12->SetBinError(20,1.583613);
   hnumuCCinFV_stack_12->SetBinError(21,1.193705);
   hnumuCCinFV_stack_12->SetBinError(22,1.456094);
   hnumuCCinFV_stack_12->SetBinError(23,1.057495);
   hnumuCCinFV_stack_12->SetBinError(24,0.8087577);
   hnumuCCinFV_stack_12->SetBinError(25,0.6806271);
   hnumuCCinFV_stack_12->SetBinError(26,1.345576);
   hnumuCCinFV_stack_12->SetEntries(2339);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(12,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.9269427);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.340721);
   hnueCCinFV_stack_13->SetBinError(12,0.5191111);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.4810838);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3921167);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.4800908);
   hnueCCinFV_stack_13->SetEntries(28);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__5->SetBinContent(0,0.04249);
   hmcerror__5->SetBinContent(1,0.9286332);
   hmcerror__5->SetBinContent(2,13.89817);
   hmcerror__5->SetBinContent(3,49.59912);
   hmcerror__5->SetBinContent(4,118.5679);
   hmcerror__5->SetBinContent(5,210.9223);
   hmcerror__5->SetBinContent(6,266.8745);
   hmcerror__5->SetBinContent(7,277.5315);
   hmcerror__5->SetBinContent(8,283.6495);
   hmcerror__5->SetBinContent(9,264.9276);
   hmcerror__5->SetBinContent(10,226.3515);
   hmcerror__5->SetBinContent(11,187.6227);
   hmcerror__5->SetBinContent(12,158.0556);
   hmcerror__5->SetBinContent(13,136.8371);
   hmcerror__5->SetBinContent(14,116.5835);
   hmcerror__5->SetBinContent(15,87.50055);
   hmcerror__5->SetBinContent(16,81.68138);
   hmcerror__5->SetBinContent(17,60.81139);
   hmcerror__5->SetBinContent(18,41.85472);
   hmcerror__5->SetBinContent(19,28.99042);
   hmcerror__5->SetBinContent(20,26.01746);
   hmcerror__5->SetBinContent(21,20.13122);
   hmcerror__5->SetBinContent(22,18.0877);
   hmcerror__5->SetBinContent(23,12.82186);
   hmcerror__5->SetBinContent(24,9.102996);
   hmcerror__5->SetBinContent(25,8.235148);
   hmcerror__5->SetBinContent(26,27.00992);
   hmcerror__5->SetBinError(0,0.03055227);
   hmcerror__5->SetBinError(1,0.7024967);
   hmcerror__5->SetBinError(2,4.021439);
   hmcerror__5->SetBinError(3,11.52349);
   hmcerror__5->SetBinError(4,28.89337);
   hmcerror__5->SetBinError(5,55.72907);
   hmcerror__5->SetBinError(6,68.95562);
   hmcerror__5->SetBinError(7,71.11824);
   hmcerror__5->SetBinError(8,68.69757);
   hmcerror__5->SetBinError(9,64.63921);
   hmcerror__5->SetBinError(10,50.72468);
   hmcerror__5->SetBinError(11,46.18795);
   hmcerror__5->SetBinError(12,36.28851);
   hmcerror__5->SetBinError(13,31.7596);
   hmcerror__5->SetBinError(14,28.94087);
   hmcerror__5->SetBinError(15,20.9111);
   hmcerror__5->SetBinError(16,19.08886);
   hmcerror__5->SetBinError(17,15.14433);
   hmcerror__5->SetBinError(18,10.72819);
   hmcerror__5->SetBinError(19,7.206186);
   hmcerror__5->SetBinError(20,6.81862);
   hmcerror__5->SetBinError(21,5.576363);
   hmcerror__5->SetBinError(22,5.548025);
   hmcerror__5->SetBinError(23,3.96374);
   hmcerror__5->SetBinError(24,2.811791);
   hmcerror__5->SetBinError(25,2.425047);
   hmcerror__5->SetBinError(26,5.074613);
   hmcerror__5->SetEntries(2718.074);

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
   
   Double_t _fx3005[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3005[25] = {
   1,
   14,
   83,
   177,
   211,
   227,
   277,
   240,
   218,
   195,
   171,
   140,
   119,
   87,
   82,
   56,
   32,
   33,
   29,
   22,
   22,
   10,
   7,
   7,
   2};
   Double_t _felx3005[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3005[25] = {
   1,
   3.9102,
   9.234,
   13.30413,
   14.52584,
   15.06652,
   16.64332,
   15.49193,
   14.76482,
   13.96424,
   13.0767,
   11.83216,
   10.90871,
   9.4503,
   9.1791,
   7.6127,
   5.7977,
   5.8847,
   5.5285,
   4.8417,
   4.8417,
   3.34883,
   2.85954,
   2.85954,
   2};
   Double_t _fehx3005[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3005[25] = {
   1.35971,
   3.6898,
   9.0323,
   13.30413,
   14.52584,
   15.06652,
   16.64332,
   15.49193,
   14.76482,
   13.96424,
   13.0767,
   11.83216,
   10.90871,
   9.2488,
   8.9774,
   7.4094,
   5.5904,
   5.6776,
   5.3201,
   4.6299,
   4.6299,
   3.1179,
   2.61053,
   2.61053,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1980);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(323.0076);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.91#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=49.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2462.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.5","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22.0","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7.7","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.6","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.0","F");

   ci = 1454;
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

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1952.3","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 44.7","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 552.6","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.0","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3006[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3006[25] = {
   0.7564846,
   0.2893503,
   0.2323326,
   0.2436863,
   0.264216,
   0.2583822,
   0.2562529,
   0.2421917,
   0.2439882,
   0.2240969,
   0.2461746,
   0.2295934,
   0.2320979,
   0.2482415,
   0.2389825,
   0.233699,
   0.2490378,
   0.2563198,
   0.2485713,
   0.2620787,
   0.2770007,
   0.3067292,
   0.3091393,
   0.3088863,
   0.2944752};
   Double_t _fehx3006[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3006[25] = {
   0.7564846,
   0.2893503,
   0.2323326,
   0.2436863,
   0.264216,
   0.2583822,
   0.2562529,
   0.2421917,
   0.2439882,
   0.2240969,
   0.2461746,
   0.2295934,
   0.2320979,
   0.2482415,
   0.2389825,
   0.233699,
   0.2490378,
   0.2563198,
   0.2485713,
   0.2620787,
   0.2770007,
   0.3067292,
   0.3091393,
   0.3088863,
   0.2944752};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1980);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3007[25] = {
   0.7564846,
   0.2893503,
   0.2323326,
   0.2436863,
   0.264216,
   0.2583822,
   0.2562529,
   0.2421917,
   0.2439882,
   0.2240969,
   0.2461746,
   0.2295934,
   0.2320979,
   0.2482415,
   0.2389825,
   0.233699,
   0.2490378,
   0.2563198,
   0.2485713,
   0.2620787,
   0.2770007,
   0.3067292,
   0.3091393,
   0.3088863,
   0.2944752};
   Double_t _fehx3007[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3007[25] = {
   0.7564846,
   0.2893503,
   0.2323326,
   0.2436863,
   0.264216,
   0.2583822,
   0.2562529,
   0.2421917,
   0.2439882,
   0.2240969,
   0.2461746,
   0.2295934,
   0.2320979,
   0.2482415,
   0.2389825,
   0.233699,
   0.2490378,
   0.2563198,
   0.2485713,
   0.2620787,
   0.2770007,
   0.3067292,
   0.3091393,
   0.3088863,
   0.2944752};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1980);
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
   
   Double_t _fx3008[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3008[25] = {
   1.076851,
   1.007327,
   1.673417,
   1.492815,
   1.000368,
   0.8505869,
   0.998085,
   0.8461146,
   0.8228665,
   0.8614918,
   0.9114035,
   0.8857645,
   0.8696471,
   0.7462461,
   0.937137,
   0.6855908,
   0.5262172,
   0.7884416,
   1.00033,
   0.8455861,
   1.09283,
   0.5528619,
   0.5459427,
   0.7689776,
   0.2428614};
   Double_t _felx3008[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3008[25] = {
   1.076851,
   0.2813465,
   0.1861727,
   0.1122069,
   0.06886818,
   0.05645544,
   0.05996912,
   0.05461646,
   0.05573155,
   0.06169271,
   0.06969677,
   0.07486076,
   0.07972042,
   0.08106034,
   0.1049033,
   0.09319994,
   0.09533904,
   0.1405982,
   0.1907009,
   0.1860943,
   0.240507,
   0.185144,
   0.2230207,
   0.3141317,
   0.2428614};
   Double_t _fehx3008[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3008[25] = {
   1.464206,
   0.2654883,
   0.182106,
   0.1122069,
   0.06886818,
   0.05645544,
   0.05996912,
   0.05461646,
   0.05573155,
   0.06169271,
   0.06969677,
   0.07486076,
   0.07972042,
   0.07933197,
   0.1025982,
   0.090711,
   0.09193014,
   0.1356502,
   0.1835123,
   0.1779536,
   0.229986,
   0.1723768,
   0.2036,
   0.286777,
   0.1844739};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1980);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.795163);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
