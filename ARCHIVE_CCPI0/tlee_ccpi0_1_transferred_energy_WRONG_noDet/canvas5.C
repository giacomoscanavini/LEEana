#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Oct 24 15:37:55 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
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
   pad1->Range(-276.9231,-9.704821,2030.769,1073.149);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__13->SetBinContent(0,0.3653432);
   hmc__13->SetBinContent(2,1.167179);
   hmc__13->SetBinContent(3,20.17128);
   hmc__13->SetBinContent(4,109.3136);
   hmc__13->SetBinContent(5,269.7657);
   hmc__13->SetBinContent(6,408.9929);
   hmc__13->SetBinContent(7,468.0379);
   hmc__13->SetBinContent(8,485.241);
   hmc__13->SetBinContent(9,480.3427);
   hmc__13->SetBinContent(10,425.9149);
   hmc__13->SetBinContent(11,357.3752);
   hmc__13->SetBinContent(12,306.9768);
   hmc__13->SetBinContent(13,269.4647);
   hmc__13->SetBinContent(14,237.2305);
   hmc__13->SetBinContent(15,180.3828);
   hmc__13->SetBinContent(16,155.0899);
   hmc__13->SetBinContent(17,134.5144);
   hmc__13->SetBinContent(18,93.38443);
   hmc__13->SetBinContent(19,72.78246);
   hmc__13->SetBinContent(20,60.55399);
   hmc__13->SetBinContent(21,46.39933);
   hmc__13->SetBinContent(22,50.69623);
   hmc__13->SetBinContent(23,32.30892);
   hmc__13->SetBinContent(24,26.32498);
   hmc__13->SetBinContent(25,18.719);
   hmc__13->SetBinContent(26,118.8307);
   hmc__13->SetBinError(0,0.3411072);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,0.6875791);
   hmc__13->SetBinError(3,5.634188);
   hmc__13->SetBinError(4,27.01824);
   hmc__13->SetBinError(5,71.9976);
   hmc__13->SetBinError(6,106.2857);
   hmc__13->SetBinError(7,129.9605);
   hmc__13->SetBinError(8,132.2852);
   hmc__13->SetBinError(9,125.2381);
   hmc__13->SetBinError(10,108.1021);
   hmc__13->SetBinError(11,91.79806);
   hmc__13->SetBinError(12,74.86846);
   hmc__13->SetBinError(13,67.43052);
   hmc__13->SetBinError(14,57.84824);
   hmc__13->SetBinError(15,43.47669);
   hmc__13->SetBinError(16,37.16691);
   hmc__13->SetBinError(17,32.20123);
   hmc__13->SetBinError(18,23.48309);
   hmc__13->SetBinError(19,18.1487);
   hmc__13->SetBinError(20,15.01359);
   hmc__13->SetBinError(21,11.09641);
   hmc__13->SetBinError(22,12.24453);
   hmc__13->SetBinError(23,7.839913);
   hmc__13->SetBinError(24,6.111569);
   hmc__13->SetBinError(25,4.97559);
   hmc__13->SetBinError(26,19.39399);
   hmc__13->SetMinimum(-9.704821);
   hmc__13->SetMaximum(1019.006);
   hmc__13->SetEntries(4792.21);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,1800);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(509.5031);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(4,0.3900192);
   hbadmatch_stack_1->SetBinContent(5,0.536893);
   hbadmatch_stack_1->SetBinContent(6,1.175673);
   hbadmatch_stack_1->SetBinContent(7,0.536893);
   hbadmatch_stack_1->SetBinContent(8,0.9286332);
   hbadmatch_stack_1->SetBinContent(9,2.335895);
   hbadmatch_stack_1->SetBinContent(10,0.9930229);
   hbadmatch_stack_1->SetBinContent(11,0.8753801);
   hbadmatch_stack_1->SetBinContent(12,1.700921);
   hbadmatch_stack_1->SetBinContent(13,1.29503);
   hbadmatch_stack_1->SetBinContent(14,1.320373);
   hbadmatch_stack_1->SetBinContent(15,1.102773);
   hbadmatch_stack_1->SetBinContent(16,0.810439);
   hbadmatch_stack_1->SetBinContent(17,2.010148);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(19,1.228595);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,1.025423);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.7336084);
   hbadmatch_stack_1->SetBinError(4,0.3438095);
   hbadmatch_stack_1->SetBinError(5,0.3929602);
   hbadmatch_stack_1->SetBinError(6,0.6117799);
   hbadmatch_stack_1->SetBinError(7,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.48078);
   hbadmatch_stack_1->SetBinError(9,0.7596861);
   hbadmatch_stack_1->SetBinError(10,0.4443201);
   hbadmatch_stack_1->SetBinError(11,0.5191111);
   hbadmatch_stack_1->SetBinError(12,0.6639528);
   hbadmatch_stack_1->SetBinError(13,0.5773301);
   hbadmatch_stack_1->SetBinError(14,0.5548703);
   hbadmatch_stack_1->SetBinError(15,0.5666393);
   hbadmatch_stack_1->SetBinError(16,0.5020361);
   hbadmatch_stack_1->SetBinError(17,0.7896329);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(19,0.6626772);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.460434);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.4394482);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(4,0.9660115);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,4.517249);
   hext_stack_2->SetBinContent(7,4.830057);
   hext_stack_2->SetBinContent(8,3.57278);
   hext_stack_2->SetBinContent(9,7.485896);
   hext_stack_2->SetBinContent(10,4.136601);
   hext_stack_2->SetBinContent(11,6.139236);
   hext_stack_2->SetBinContent(12,2.663019);
   hext_stack_2->SetBinContent(13,3.897177);
   hext_stack_2->SetBinContent(14,8.284733);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,7.23652);
   hext_stack_2->SetBinContent(17,2.592407);
   hext_stack_2->SetBinContent(18,2.021405);
   hext_stack_2->SetBinContent(19,1.614806);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,4.270645);
   hext_stack_2->SetBinContent(23,0.8131978);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,7.803113);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(4,0.7189592);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,1.553448);
   hext_stack_2->SetBinError(7,1.607642);
   hext_stack_2->SetBinError(8,1.136966);
   hext_stack_2->SetBinError(9,2.022393);
   hext_stack_2->SetBinError(10,1.33394);
   hext_stack_2->SetBinError(11,1.714458);
   hext_stack_2->SetBinError(12,1.142086);
   hext_stack_2->SetBinError(13,1.182339);
   hext_stack_2->SetBinError(14,2.196161);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,2.060614);
   hext_stack_2->SetBinError(17,1.085446);
   hext_stack_2->SetBinError(18,0.9448239);
   hext_stack_2->SetBinError(19,0.8528597);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,1.4943);
   hext_stack_2->SetBinError(23,0.5750177);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,2.096785);
   hext_stack_2->SetEntries(171);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(9,0.4494525);
   hdirt_stack_3->SetBinContent(10,0.266188);
   hdirt_stack_3->SetBinContent(13,0.165896);
   hdirt_stack_3->SetBinContent(14,1.167841e-06);
   hdirt_stack_3->SetBinContent(15,0.2665913);
   hdirt_stack_3->SetBinContent(23,0.2441834);
   hdirt_stack_3->SetBinError(9,0.3406198);
   hdirt_stack_3->SetBinError(10,0.266188);
   hdirt_stack_3->SetBinError(13,0.165896);
   hdirt_stack_3->SetBinError(14,1.167841e-06);
   hdirt_stack_3->SetBinError(15,0.2665913);
   hdirt_stack_3->SetBinError(23,0.2441834);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(4,1.123658);
   houtFV_stack_4->SetBinContent(5,3.260067);
   houtFV_stack_4->SetBinContent(6,1.557439);
   houtFV_stack_4->SetBinContent(7,2.642437);
   houtFV_stack_4->SetBinContent(8,3.571791);
   houtFV_stack_4->SetBinContent(9,2.890983);
   houtFV_stack_4->SetBinContent(10,2.812353);
   houtFV_stack_4->SetBinContent(11,2.301461);
   houtFV_stack_4->SetBinContent(12,2.423816);
   houtFV_stack_4->SetBinContent(13,0.9346789);
   houtFV_stack_4->SetBinContent(14,1.320373);
   houtFV_stack_4->SetBinContent(15,2.026121);
   houtFV_stack_4->SetBinContent(16,0.9871699);
   houtFV_stack_4->SetBinContent(17,0.7532358);
   houtFV_stack_4->SetBinContent(18,0.785171);
   houtFV_stack_4->SetBinContent(19,0.3900497);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.4519673);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.5352025);
   houtFV_stack_4->SetBinError(4,0.5188295);
   houtFV_stack_4->SetBinError(5,0.9096989);
   houtFV_stack_4->SetBinError(6,0.7082233);
   houtFV_stack_4->SetBinError(7,0.7851269);
   houtFV_stack_4->SetBinError(8,1.015954);
   houtFV_stack_4->SetBinError(9,0.8735777);
   houtFV_stack_4->SetBinError(10,0.8905712);
   houtFV_stack_4->SetBinError(11,0.7669611);
   houtFV_stack_4->SetBinError(12,1.093862);
   houtFV_stack_4->SetBinError(13,0.481064);
   houtFV_stack_4->SetBinError(14,0.5548703);
   houtFV_stack_4->SetBinError(15,1.017413);
   houtFV_stack_4->SetBinError(16,0.507549);
   houtFV_stack_4->SetBinError(17,0.3967958);
   houtFV_stack_4->SetBinError(18,0.3925882);
   houtFV_stack_4->SetBinError(19,0.2758068);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(22,0.3222584);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(26,0.3921167);
   houtFV_stack_4->SetEntries(129);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.1969495);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.6701677);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.151835);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.687234);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.829904);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.63976);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.49426);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.475187);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.681241);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.658161);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.36405);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.248756);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.506048);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.361546);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.585852);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.998579);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.787657);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.691859);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.3856448);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.6275337);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.3888507);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.3443657);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.2399702);
   hNCpi0inFVres_stack_7->SetBinError(3,0.09899233);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1694568);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4611602);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3855043);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5608648);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7107604);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7545843);
   hNCpi0inFVres_stack_7->SetBinError(10,0.691439);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6735492);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8790987);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9998304);
   hNCpi0inFVres_stack_7->SetBinError(14,1.084543);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5603964);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7080124);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6952311);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9390111);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5973501);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8120094);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1635202);
   hNCpi0inFVres_stack_7->SetBinError(22,0.237678);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2222621);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1585789);
   hNCpi0inFVres_stack_7->SetBinError(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinError(26,0.08067537);
   hNCpi0inFVres_stack_7->SetEntries(1196);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.4464489);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.288316);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.153234);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.724209);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.375805);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.230669);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.853135);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.913102);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.179419);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.088842);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.151126);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.085347);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.36257);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.203101);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.006007);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.734017);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.354428);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.093712);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.268693);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.239564);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.55631);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.6353625);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.567677);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1697351);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3037174);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4815094);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.343384);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.503372);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4751626);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6570739);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.032718);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7491087);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8137823);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6210831);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7389001);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7758857);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.705054);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5430219);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5142624);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4032039);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3529811);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3446641);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6369344);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2922694);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3153215);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5007845);
   hNCpi0inFVdis_stack_8->SetEntries(964);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,9.054352);
   hCCpi0inFV_stack_10->SetBinContent(4,82.48946);
   hCCpi0inFV_stack_10->SetBinContent(5,217.6668);
   hCCpi0inFV_stack_10->SetBinContent(6,336.7702);
   hCCpi0inFV_stack_10->SetBinContent(7,378.7846);
   hCCpi0inFV_stack_10->SetBinContent(8,386.8109);
   hCCpi0inFV_stack_10->SetBinContent(9,366.607);
   hCCpi0inFV_stack_10->SetBinContent(10,311.3298);
   hCCpi0inFV_stack_10->SetBinContent(11,258.2218);
   hCCpi0inFV_stack_10->SetBinContent(12,217.1654);
   hCCpi0inFV_stack_10->SetBinContent(13,180.4845);
   hCCpi0inFV_stack_10->SetBinContent(14,148.4693);
   hCCpi0inFV_stack_10->SetBinContent(15,117.3371);
   hCCpi0inFV_stack_10->SetBinContent(16,91.25169);
   hCCpi0inFV_stack_10->SetBinContent(17,71.99738);
   hCCpi0inFV_stack_10->SetBinContent(18,53.61543);
   hCCpi0inFV_stack_10->SetBinContent(19,39.37592);
   hCCpi0inFV_stack_10->SetBinContent(20,35.29247);
   hCCpi0inFV_stack_10->SetBinContent(21,24.68474);
   hCCpi0inFV_stack_10->SetBinContent(22,25.75916);
   hCCpi0inFV_stack_10->SetBinContent(23,15.10357);
   hCCpi0inFV_stack_10->SetBinContent(24,13.96984);
   hCCpi0inFV_stack_10->SetBinContent(25,12.22311);
   hCCpi0inFV_stack_10->SetBinContent(26,59.08315);
   hCCpi0inFV_stack_10->SetBinError(3,1.455947);
   hCCpi0inFV_stack_10->SetBinError(4,4.526419);
   hCCpi0inFV_stack_10->SetBinError(5,7.464874);
   hCCpi0inFV_stack_10->SetBinError(6,9.260097);
   hCCpi0inFV_stack_10->SetBinError(7,9.806448);
   hCCpi0inFV_stack_10->SetBinError(8,9.855447);
   hCCpi0inFV_stack_10->SetBinError(9,9.638807);
   hCCpi0inFV_stack_10->SetBinError(10,8.853542);
   hCCpi0inFV_stack_10->SetBinError(11,8.158293);
   hCCpi0inFV_stack_10->SetBinError(12,7.417423);
   hCCpi0inFV_stack_10->SetBinError(13,6.722969);
   hCCpi0inFV_stack_10->SetBinError(14,6.098578);
   hCCpi0inFV_stack_10->SetBinError(15,5.448706);
   hCCpi0inFV_stack_10->SetBinError(16,4.813335);
   hCCpi0inFV_stack_10->SetBinError(17,4.260789);
   hCCpi0inFV_stack_10->SetBinError(18,3.739026);
   hCCpi0inFV_stack_10->SetBinError(19,3.146483);
   hCCpi0inFV_stack_10->SetBinError(20,3.030426);
   hCCpi0inFV_stack_10->SetBinError(21,2.483068);
   hCCpi0inFV_stack_10->SetBinError(22,2.55693);
   hCCpi0inFV_stack_10->SetBinError(23,1.938762);
   hCCpi0inFV_stack_10->SetBinError(24,1.903219);
   hCCpi0inFV_stack_10->SetBinError(25,1.774048);
   hCCpi0inFV_stack_10->SetBinError(26,3.894144);
   hCCpi0inFV_stack_10->SetEntries(14729);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,1.731139);
   hNCinFV_stack_11->SetBinContent(6,1.487237);
   hNCinFV_stack_11->SetBinContent(7,2.287321);
   hNCinFV_stack_11->SetBinContent(8,4.968747);
   hNCinFV_stack_11->SetBinContent(9,3.21536);
   hNCinFV_stack_11->SetBinContent(10,5.089421);
   hNCinFV_stack_11->SetBinContent(11,1.850813);
   hNCinFV_stack_11->SetBinContent(12,3.211884);
   hNCinFV_stack_11->SetBinContent(13,3.614552);
   hNCinFV_stack_11->SetBinContent(14,2.212535);
   hNCinFV_stack_11->SetBinContent(15,2.915129);
   hNCinFV_stack_11->SetBinContent(16,4.114415);
   hNCinFV_stack_11->SetBinContent(17,6.396472);
   hNCinFV_stack_11->SetBinContent(18,2.471752);
   hNCinFV_stack_11->SetBinContent(19,0.8508351);
   hNCinFV_stack_11->SetBinContent(20,1.427364);
   hNCinFV_stack_11->SetBinContent(21,1.588169);
   hNCinFV_stack_11->SetBinContent(22,0.8770706);
   hNCinFV_stack_11->SetBinContent(23,0.7319179);
   hNCinFV_stack_11->SetBinContent(24,0.5850745);
   hNCinFV_stack_11->SetBinContent(25,0.5901461);
   hNCinFV_stack_11->SetBinContent(26,3.272921);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.6910222);
   hNCinFV_stack_11->SetBinError(6,0.8065086);
   hNCinFV_stack_11->SetBinError(7,0.789798);
   hNCinFV_stack_11->SetBinError(8,1.116674);
   hNCinFV_stack_11->SetBinError(9,0.857266);
   hNCinFV_stack_11->SetBinError(10,1.123257);
   hNCinFV_stack_11->SetBinError(11,0.6768678);
   hNCinFV_stack_11->SetBinError(12,1.176242);
   hNCinFV_stack_11->SetBinError(13,1.016682);
   hNCinFV_stack_11->SetBinError(14,0.852694);
   hNCinFV_stack_11->SetBinError(15,0.871313);
   hNCinFV_stack_11->SetBinError(16,1.683143);
   hNCinFV_stack_11->SetBinError(17,2.075927);
   hNCinFV_stack_11->SetBinError(18,0.8775302);
   hNCinFV_stack_11->SetBinError(19,0.4548151);
   hNCinFV_stack_11->SetBinError(20,0.7569422);
   hNCinFV_stack_11->SetBinError(21,0.8415608);
   hNCinFV_stack_11->SetBinError(22,0.5197486);
   hNCinFV_stack_11->SetBinError(23,0.438694);
   hNCinFV_stack_11->SetBinError(24,0.337793);
   hNCinFV_stack_11->SetBinError(25,0.340721);
   hNCinFV_stack_11->SetBinError(26,0.9420814);
   hNCinFV_stack_11->SetEntries(205);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.842782);
   hnumuCCinFV_stack_12->SetBinContent(3,10.91998);
   hnumuCCinFV_stack_12->SetBinContent(4,22.69094);
   hnumuCCinFV_stack_12->SetBinContent(5,42.46611);
   hnumuCCinFV_stack_12->SetBinContent(6,58.64462);
   hnumuCCinFV_stack_12->SetBinContent(7,72.84717);
   hnumuCCinFV_stack_12->SetBinContent(8,78.1497);
   hnumuCCinFV_stack_12->SetBinContent(9,88.09631);
   hnumuCCinFV_stack_12->SetBinContent(10,91.46368);
   hnumuCCinFV_stack_12->SetBinContent(11,78.39218);
   hnumuCCinFV_stack_12->SetBinContent(12,69.63397);
   hnumuCCinFV_stack_12->SetBinContent(13,67.79066);
   hnumuCCinFV_stack_12->SetBinContent(14,66.88316);
   hnumuCCinFV_stack_12->SetBinContent(15,47.5681);
   hnumuCCinFV_stack_12->SetBinContent(16,42.55324);
   hnumuCCinFV_stack_12->SetBinContent(17,44.29548);
   hnumuCCinFV_stack_12->SetBinContent(18,28.35904);
   hnumuCCinFV_stack_12->SetBinContent(19,25.60386);
   hnumuCCinFV_stack_12->SetBinContent(20,19.19559);
   hnumuCCinFV_stack_12->SetBinContent(21,16.89065);
   hnumuCCinFV_stack_12->SetBinContent(22,17.24445);
   hnumuCCinFV_stack_12->SetBinContent(23,12.17696);
   hnumuCCinFV_stack_12->SetBinContent(24,9.959925);
   hnumuCCinFV_stack_12->SetBinContent(25,4.69811);
   hnumuCCinFV_stack_12->SetBinContent(26,42.93285);
   hnumuCCinFV_stack_12->SetBinError(0,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.4220258);
   hnumuCCinFV_stack_12->SetBinError(3,1.977575);
   hnumuCCinFV_stack_12->SetBinError(4,2.755179);
   hnumuCCinFV_stack_12->SetBinError(5,4.41048);
   hnumuCCinFV_stack_12->SetBinError(6,4.10687);
   hnumuCCinFV_stack_12->SetBinError(7,4.794187);
   hnumuCCinFV_stack_12->SetBinError(8,4.864047);
   hnumuCCinFV_stack_12->SetBinError(9,4.981978);
   hnumuCCinFV_stack_12->SetBinError(10,6.316955);
   hnumuCCinFV_stack_12->SetBinError(11,4.46911);
   hnumuCCinFV_stack_12->SetBinError(12,4.567399);
   hnumuCCinFV_stack_12->SetBinError(13,4.24463);
   hnumuCCinFV_stack_12->SetBinError(14,4.201102);
   hnumuCCinFV_stack_12->SetBinError(15,3.48647);
   hnumuCCinFV_stack_12->SetBinError(16,3.441816);
   hnumuCCinFV_stack_12->SetBinError(17,3.644642);
   hnumuCCinFV_stack_12->SetBinError(18,2.668385);
   hnumuCCinFV_stack_12->SetBinError(19,2.564677);
   hnumuCCinFV_stack_12->SetBinError(20,2.289853);
   hnumuCCinFV_stack_12->SetBinError(21,2.09282);
   hnumuCCinFV_stack_12->SetBinError(22,2.123776);
   hnumuCCinFV_stack_12->SetBinError(23,1.820382);
   hnumuCCinFV_stack_12->SetBinError(24,1.593828);
   hnumuCCinFV_stack_12->SetBinError(25,1.057394);
   hnumuCCinFV_stack_12->SetBinError(26,3.267971);
   hnumuCCinFV_stack_12->SetEntries(4404);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.8117375);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.4647934);
   hnueCCinFV_stack_13->SetBinContent(16,1.412273);
   hnueCCinFV_stack_13->SetBinContent(17,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(18,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.217248);
   hnueCCinFV_stack_13->SetBinContent(24,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,1.662242);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.503875);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.3325098);
   hnueCCinFV_stack_13->SetBinError(16,0.6510715);
   hnueCCinFV_stack_13->SetBinError(17,0.4810838);
   hnueCCinFV_stack_13->SetBinError(18,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.6211758);
   hnueCCinFV_stack_13->SetBinError(24,0.2758068);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.6513556);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__14->SetBinContent(0,0.3653432);
   hmcerror__14->SetBinContent(2,1.167179);
   hmcerror__14->SetBinContent(3,20.17128);
   hmcerror__14->SetBinContent(4,109.3136);
   hmcerror__14->SetBinContent(5,269.7657);
   hmcerror__14->SetBinContent(6,408.9929);
   hmcerror__14->SetBinContent(7,468.0379);
   hmcerror__14->SetBinContent(8,485.241);
   hmcerror__14->SetBinContent(9,480.3427);
   hmcerror__14->SetBinContent(10,425.9149);
   hmcerror__14->SetBinContent(11,357.3752);
   hmcerror__14->SetBinContent(12,306.9768);
   hmcerror__14->SetBinContent(13,269.4647);
   hmcerror__14->SetBinContent(14,237.2305);
   hmcerror__14->SetBinContent(15,180.3828);
   hmcerror__14->SetBinContent(16,155.0899);
   hmcerror__14->SetBinContent(17,134.5144);
   hmcerror__14->SetBinContent(18,93.38443);
   hmcerror__14->SetBinContent(19,72.78246);
   hmcerror__14->SetBinContent(20,60.55399);
   hmcerror__14->SetBinContent(21,46.39933);
   hmcerror__14->SetBinContent(22,50.69623);
   hmcerror__14->SetBinContent(23,32.30892);
   hmcerror__14->SetBinContent(24,26.32498);
   hmcerror__14->SetBinContent(25,18.719);
   hmcerror__14->SetBinContent(26,118.8307);
   hmcerror__14->SetBinError(0,0.3411072);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,0.6875791);
   hmcerror__14->SetBinError(3,5.634188);
   hmcerror__14->SetBinError(4,27.01824);
   hmcerror__14->SetBinError(5,71.9976);
   hmcerror__14->SetBinError(6,106.2857);
   hmcerror__14->SetBinError(7,129.9605);
   hmcerror__14->SetBinError(8,132.2852);
   hmcerror__14->SetBinError(9,125.2381);
   hmcerror__14->SetBinError(10,108.1021);
   hmcerror__14->SetBinError(11,91.79806);
   hmcerror__14->SetBinError(12,74.86846);
   hmcerror__14->SetBinError(13,67.43052);
   hmcerror__14->SetBinError(14,57.84824);
   hmcerror__14->SetBinError(15,43.47669);
   hmcerror__14->SetBinError(16,37.16691);
   hmcerror__14->SetBinError(17,32.20123);
   hmcerror__14->SetBinError(18,23.48309);
   hmcerror__14->SetBinError(19,18.1487);
   hmcerror__14->SetBinError(20,15.01359);
   hmcerror__14->SetBinError(21,11.09641);
   hmcerror__14->SetBinError(22,12.24453);
   hmcerror__14->SetBinError(23,7.839913);
   hmcerror__14->SetBinError(24,6.111569);
   hmcerror__14->SetBinError(25,4.97559);
   hmcerror__14->SetBinError(26,19.39399);
   hmcerror__14->SetEntries(4792.21);

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
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
   0,
   2,
   22,
   115,
   248,
   353,
   473,
   439,
   398,
   366,
   312,
   274,
   229,
   188,
   156,
   112,
   93,
   76,
   81,
   49,
   42,
   26,
   17,
   17,
   15};
   Double_t _felx3017[25] = {
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
   Double_t _fely3017[25] = {
   0,
   2,
   4.8417,
   10.72381,
   15.74802,
   18.78829,
   21.74856,
   20.95233,
   19.94994,
   19.13113,
   17.66352,
   16.55295,
   15.13275,
   13.71131,
   12.49,
   10.58301,
   9.7658,
   8.8425,
   9.1239,
   7.1318,
   6.6155,
   5.2453,
   4.2835,
   4.2835,
   4.0385};
   Double_t _fehx3017[25] = {
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
   Double_t _fehy3017[25] = {
   1.1478,
   1.51917,
   4.6299,
   10.72381,
   15.74802,
   18.78829,
   21.74856,
   20.95233,
   19.94994,
   19.13113,
   17.66352,
   16.55295,
   15.13275,
   13.71131,
   12.49,
   10.58301,
   9.564,
   8.6406,
   8.9221,
   6.9277,
   6.4104,
   5.0358,
   4.0673,
   4.0673,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1980);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(544.2234);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4103.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 70.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 30.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  62.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  52.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3394.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 52.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1017.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.6","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[25] = {
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
   Double_t _fy3018[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[25] = {
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
   Double_t _fely3018[25] = {
   0,
   0.5890947,
   0.2793174,
   0.2471627,
   0.2668894,
   0.2598717,
   0.2776709,
   0.2726175,
   0.2607266,
   0.2538115,
   0.2568674,
   0.2438896,
   0.2502388,
   0.2438482,
   0.2410246,
   0.2396476,
   0.2393886,
   0.2514669,
   0.2493555,
   0.2479372,
   0.2391501,
   0.2415273,
   0.2426548,
   0.2321585,
   0.2658042};
   Double_t _fehx3018[25] = {
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
   Double_t _fehy3018[25] = {
   0,
   0.5890947,
   0.2793174,
   0.2471627,
   0.2668894,
   0.2598717,
   0.2776709,
   0.2726175,
   0.2607266,
   0.2538115,
   0.2568674,
   0.2438896,
   0.2502388,
   0.2438482,
   0.2410246,
   0.2396476,
   0.2393886,
   0.2514669,
   0.2493555,
   0.2479372,
   0.2391501,
   0.2415273,
   0.2426548,
   0.2321585,
   0.2658042};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1980);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3019[25] = {
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
   Double_t _fy3019[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[25] = {
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
   Double_t _fely3019[25] = {
   0,
   0.5890947,
   0.2793174,
   0.2471627,
   0.2668894,
   0.2598717,
   0.2776709,
   0.2726175,
   0.2607266,
   0.2538115,
   0.2568674,
   0.2438896,
   0.2502388,
   0.2438482,
   0.2410246,
   0.2396476,
   0.2393886,
   0.2514669,
   0.2493555,
   0.2479372,
   0.2391501,
   0.2415273,
   0.2426548,
   0.2321585,
   0.2658042};
   Double_t _fehx3019[25] = {
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
   Double_t _fehy3019[25] = {
   0,
   0.5890947,
   0.2793174,
   0.2471627,
   0.2668894,
   0.2598717,
   0.2776709,
   0.2726175,
   0.2607266,
   0.2538115,
   0.2568674,
   0.2438896,
   0.2502388,
   0.2438482,
   0.2410246,
   0.2396476,
   0.2393886,
   0.2514669,
   0.2493555,
   0.2479372,
   0.2391501,
   0.2415273,
   0.2426548,
   0.2321585,
   0.2658042};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1980);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3020[25] = {
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
   Double_t _fy3020[25] = {
   10,
   1.713533,
   1.09066,
   1.052019,
   0.9193162,
   0.8630958,
   1.010602,
   0.904705,
   0.8285751,
   0.8593265,
   0.873032,
   0.8925756,
   0.849833,
   0.7924782,
   0.8648275,
   0.722162,
   0.6913756,
   0.8138402,
   1.112905,
   0.8091952,
   0.9051855,
   0.5128586,
   0.5261705,
   0.6457744,
   0.8013247};
   Double_t _felx3020[25] = {
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
   Double_t _fely3020[25] = {
   0,
   1.713533,
   0.2400294,
   0.09810129,
   0.05837664,
   0.04593795,
   0.04646753,
   0.04317922,
   0.04153272,
   0.04491772,
   0.0494257,
   0.05392246,
   0.05615855,
   0.05779741,
   0.06924161,
   0.06823789,
   0.07260039,
   0.09468923,
   0.1253585,
   0.1177759,
   0.1425775,
   0.1034653,
   0.1325795,
   0.1627162,
   0.2157433};
   Double_t _fehx3020[25] = {
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
   Double_t _fehy3020[25] = {
   0,
   1.301574,
   0.2295293,
   0.09810129,
   0.05837664,
   0.04593795,
   0.04646753,
   0.04317922,
   0.04153272,
   0.04491772,
   0.0494257,
   0.05392246,
   0.05615855,
   0.05779741,
   0.06924161,
   0.06823789,
   0.07110018,
   0.0925272,
   0.1225858,
   0.1144053,
   0.1381572,
   0.09933283,
   0.1258878,
   0.1545034,
   0.2040547};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1980);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(11);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
