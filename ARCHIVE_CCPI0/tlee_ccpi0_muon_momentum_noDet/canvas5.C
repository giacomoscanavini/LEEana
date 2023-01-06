#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 17:16:33 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",164,172,1200,900);
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
   pad1->Range(-230.7692,-14.77299,1692.308,1633.581);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hmc__13->SetBinContent(1,63.76126);
   hmc__13->SetBinContent(2,266.0674);
   hmc__13->SetBinContent(3,501.2052);
   hmc__13->SetBinContent(4,669.6677);
   hmc__13->SetBinContent(5,738.6494);
   hmc__13->SetBinContent(6,596.5857);
   hmc__13->SetBinContent(7,464.5233);
   hmc__13->SetBinContent(8,355.8538);
   hmc__13->SetBinContent(9,288.8206);
   hmc__13->SetBinContent(10,201.7845);
   hmc__13->SetBinContent(11,171.2639);
   hmc__13->SetBinContent(12,108.901);
   hmc__13->SetBinContent(13,83.83126);
   hmc__13->SetBinContent(14,63.82397);
   hmc__13->SetBinContent(15,53.10267);
   hmc__13->SetBinContent(16,42.51302);
   hmc__13->SetBinContent(17,30.79573);
   hmc__13->SetBinContent(18,24.68209);
   hmc__13->SetBinContent(19,16.04799);
   hmc__13->SetBinContent(20,16.58018);
   hmc__13->SetBinContent(21,11.17045);
   hmc__13->SetBinContent(22,8.478332);
   hmc__13->SetBinContent(23,5.763443);
   hmc__13->SetBinContent(24,7.722909);
   hmc__13->SetBinContent(25,4.149991);
   hmc__13->SetBinContent(26,11.30714);
   hmc__13->SetBinError(1,13.51541);
   hmc__13->SetBinError(2,55.22508);
   hmc__13->SetBinError(3,114.5322);
   hmc__13->SetBinError(4,162.0084);
   hmc__13->SetBinError(5,180.9565);
   hmc__13->SetBinError(6,153.4959);
   hmc__13->SetBinError(7,112.8227);
   hmc__13->SetBinError(8,88.11336);
   hmc__13->SetBinError(9,71.96131);
   hmc__13->SetBinError(10,53.71393);
   hmc__13->SetBinError(11,44.18363);
   hmc__13->SetBinError(12,28.20662);
   hmc__13->SetBinError(13,21.09057);
   hmc__13->SetBinError(14,16.29796);
   hmc__13->SetBinError(15,15.19795);
   hmc__13->SetBinError(16,11.51897);
   hmc__13->SetBinError(17,8.138277);
   hmc__13->SetBinError(18,7.356151);
   hmc__13->SetBinError(19,4.247224);
   hmc__13->SetBinError(20,4.47334);
   hmc__13->SetBinError(21,3.258082);
   hmc__13->SetBinError(22,2.824775);
   hmc__13->SetBinError(23,2.072893);
   hmc__13->SetBinError(24,4.797176);
   hmc__13->SetBinError(25,1.785157);
   hmc__13->SetBinError(26,3.163815);
   hmc__13->SetMinimum(-14.77299);
   hmc__13->SetMaximum(1551.164);
   hmc__13->SetEntries(4774.494);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,1500);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(775.5818);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.9286332);
   hbadmatch_stack_1->SetBinContent(2,1.890984);
   hbadmatch_stack_1->SetBinContent(3,3.406684);
   hbadmatch_stack_1->SetBinContent(4,4.285004);
   hbadmatch_stack_1->SetBinContent(5,3.03591);
   hbadmatch_stack_1->SetBinContent(6,3.073182);
   hbadmatch_stack_1->SetBinContent(7,0.2465569);
   hbadmatch_stack_1->SetBinContent(8,1.098315);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(10,1.036141);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.48078);
   hbadmatch_stack_1->SetBinError(2,0.6904256);
   hbadmatch_stack_1->SetBinError(3,0.9402958);
   hbadmatch_stack_1->SetBinError(4,1.045752);
   hbadmatch_stack_1->SetBinError(5,0.8693523);
   hbadmatch_stack_1->SetBinError(6,1.058266);
   hbadmatch_stack_1->SetBinError(7,0.2029313);
   hbadmatch_stack_1->SetBinError(8,0.5427827);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(10,0.5504378);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,2.185808);
   hext_stack_2->SetBinContent(2,13.4795);
   hext_stack_2->SetBinContent(3,13.08449);
   hext_stack_2->SetBinContent(4,8.365356);
   hext_stack_2->SetBinContent(5,19.31746);
   hext_stack_2->SetBinContent(6,5.497622);
   hext_stack_2->SetBinContent(7,2.345802);
   hext_stack_2->SetBinContent(8,2.192989);
   hext_stack_2->SetBinContent(9,4.50566);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(11,2.566457);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(16,2.566457);
   hext_stack_2->SetBinContent(17,0.6416141);
   hext_stack_2->SetBinError(1,1.006415);
   hext_stack_2->SetBinError(2,2.577204);
   hext_stack_2->SetBinError(3,2.531913);
   hext_stack_2->SetBinError(4,1.755378);
   hext_stack_2->SetBinError(5,3.267166);
   hext_stack_2->SetBinError(6,1.589874);
   hext_stack_2->SetBinError(7,0.9989624);
   hext_stack_2->SetBinError(8,0.9009267);
   hext_stack_2->SetBinError(9,1.574572);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(11,1.283228);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(16,1.283228);
   hext_stack_2->SetBinError(17,0.6416141);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.2665913);
   hdirt_stack_3->SetBinContent(2,0.7156404);
   hdirt_stack_3->SetBinContent(3,0.2441834);
   hdirt_stack_3->SetBinContent(6,1.167841e-06);
   hdirt_stack_3->SetBinContent(10,0.165896);
   hdirt_stack_3->SetBinError(1,0.2665913);
   hdirt_stack_3->SetBinError(2,0.4322938);
   hdirt_stack_3->SetBinError(3,0.2441834);
   hdirt_stack_3->SetBinError(6,1.167841e-06);
   hdirt_stack_3->SetBinError(10,0.165896);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,1.12574);
   houtFV_stack_4->SetBinContent(2,5.367144);
   houtFV_stack_4->SetBinContent(3,4.798303);
   houtFV_stack_4->SetBinContent(4,4.329749);
   houtFV_stack_4->SetBinContent(5,2.966074);
   houtFV_stack_4->SetBinContent(6,3.942564);
   houtFV_stack_4->SetBinContent(7,2.934645);
   houtFV_stack_4->SetBinContent(8,0.9269427);
   houtFV_stack_4->SetBinContent(9,0.7336084);
   houtFV_stack_4->SetBinContent(10,1.259775);
   houtFV_stack_4->SetBinContent(11,1.453109);
   houtFV_stack_4->SetBinContent(12,0.3917402);
   houtFV_stack_4->SetBinContent(13,0.9303237);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,0.5457763);
   houtFV_stack_4->SetBinError(2,1.102743);
   houtFV_stack_4->SetBinError(3,1.15032);
   houtFV_stack_4->SetBinError(4,1.073823);
   houtFV_stack_4->SetBinError(5,0.8868648);
   houtFV_stack_4->SetBinError(6,1.050952);
   houtFV_stack_4->SetBinError(7,0.9139232);
   houtFV_stack_4->SetBinError(8,0.4800908);
   houtFV_stack_4->SetBinError(9,0.4394482);
   houtFV_stack_4->SetBinError(10,0.9099152);
   houtFV_stack_4->SetBinError(11,0.9302248);
   houtFV_stack_4->SetBinError(12,0.2770047);
   houtFV_stack_4->SetBinError(13,0.4814682);
   houtFV_stack_4->SetBinError(14,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01841896);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.741637);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.957026);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.03911);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.0275);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.73328);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.49901);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.913383);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.216004);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.7243184);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.308941);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1580861);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1492757);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.5728052);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3628449);
   hNCpi0inFVres_stack_7->SetBinError(2,1.081821);
   hNCpi0inFVres_stack_7->SetBinError(3,1.436869);
   hNCpi0inFVres_stack_7->SetBinError(4,1.057401);
   hNCpi0inFVres_stack_7->SetBinError(5,1.335004);
   hNCpi0inFVres_stack_7->SetBinError(6,0.949038);
   hNCpi0inFVres_stack_7->SetBinError(7,1.030762);
   hNCpi0inFVres_stack_7->SetBinError(8,0.569747);
   hNCpi0inFVres_stack_7->SetBinError(9,0.428171);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1344772);
   hNCpi0inFVres_stack_7->SetBinError(11,0.09949975);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1245411);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5008073);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.162084);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.66807);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.846044);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.65728);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.61059);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.447337);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.556858);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.133658);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.056238);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8922247);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.725805);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1136578);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1667872);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7972679);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.206655);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9558055);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.021028);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.168679);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8799406);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5134291);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5246325);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3069001);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4207765);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6715887);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.07003108);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.09611827);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02516554);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,35.00848);
   hCCpi0inFV_stack_10->SetBinContent(2,147.2564);
   hCCpi0inFV_stack_10->SetBinContent(3,361.9988);
   hCCpi0inFV_stack_10->SetBinContent(4,525.0556);
   hCCpi0inFV_stack_10->SetBinContent(5,566.6844);
   hCCpi0inFV_stack_10->SetBinContent(6,478.5237);
   hCCpi0inFV_stack_10->SetBinContent(7,393.0502);
   hCCpi0inFV_stack_10->SetBinContent(8,306.045);
   hCCpi0inFV_stack_10->SetBinContent(9,242.7215);
   hCCpi0inFV_stack_10->SetBinContent(10,175.3934);
   hCCpi0inFV_stack_10->SetBinContent(11,145.5014);
   hCCpi0inFV_stack_10->SetBinContent(12,94.22865);
   hCCpi0inFV_stack_10->SetBinContent(13,71.91447);
   hCCpi0inFV_stack_10->SetBinContent(14,53.9944);
   hCCpi0inFV_stack_10->SetBinContent(15,47.96941);
   hCCpi0inFV_stack_10->SetBinContent(16,35.2687);
   hCCpi0inFV_stack_10->SetBinContent(17,25.64634);
   hCCpi0inFV_stack_10->SetBinContent(18,20.03981);
   hCCpi0inFV_stack_10->SetBinContent(19,13.97261);
   hCCpi0inFV_stack_10->SetBinContent(20,14.38443);
   hCCpi0inFV_stack_10->SetBinContent(21,9.679763);
   hCCpi0inFV_stack_10->SetBinContent(22,6.81778);
   hCCpi0inFV_stack_10->SetBinContent(23,4.494632);
   hCCpi0inFV_stack_10->SetBinContent(24,4.63025);
   hCCpi0inFV_stack_10->SetBinContent(25,3.953276);
   hCCpi0inFV_stack_10->SetBinContent(26,9.615284);
   hCCpi0inFV_stack_10->SetBinError(1,2.982109);
   hCCpi0inFV_stack_10->SetBinError(2,6.048811);
   hCCpi0inFV_stack_10->SetBinError(3,9.532183);
   hCCpi0inFV_stack_10->SetBinError(4,11.56597);
   hCCpi0inFV_stack_10->SetBinError(5,12.03932);
   hCCpi0inFV_stack_10->SetBinError(6,10.98195);
   hCCpi0inFV_stack_10->SetBinError(7,10.02053);
   hCCpi0inFV_stack_10->SetBinError(8,8.779901);
   hCCpi0inFV_stack_10->SetBinError(9,7.946594);
   hCCpi0inFV_stack_10->SetBinError(10,6.611455);
   hCCpi0inFV_stack_10->SetBinError(11,6.065777);
   hCCpi0inFV_stack_10->SetBinError(12,4.836038);
   hCCpi0inFV_stack_10->SetBinError(13,4.253455);
   hCCpi0inFV_stack_10->SetBinError(14,3.697816);
   hCCpi0inFV_stack_10->SetBinError(15,3.499961);
   hCCpi0inFV_stack_10->SetBinError(16,2.972709);
   hCCpi0inFV_stack_10->SetBinError(17,2.52002);
   hCCpi0inFV_stack_10->SetBinError(18,2.293497);
   hCCpi0inFV_stack_10->SetBinError(19,1.850659);
   hCCpi0inFV_stack_10->SetBinError(20,1.9423);
   hCCpi0inFV_stack_10->SetBinError(21,1.545603);
   hCCpi0inFV_stack_10->SetBinError(22,1.335903);
   hCCpi0inFV_stack_10->SetBinError(23,1.037659);
   hCCpi0inFV_stack_10->SetBinError(24,1.161497);
   hCCpi0inFV_stack_10->SetBinError(25,1.057809);
   hCCpi0inFV_stack_10->SetBinError(26,1.619014);
   hCCpi0inFV_stack_10->SetEntries(16159);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,1.462145);
   hNCinFV_stack_11->SetBinContent(2,5.417111);
   hNCinFV_stack_11->SetBinContent(3,6.018483);
   hNCinFV_stack_11->SetBinContent(4,8.59306);
   hNCinFV_stack_11->SetBinContent(5,3.719604);
   hNCinFV_stack_11->SetBinContent(6,3.714533);
   hNCinFV_stack_11->SetBinContent(7,0.8770706);
   hNCinFV_stack_11->SetBinContent(8,1.072095);
   hNCinFV_stack_11->SetBinContent(9,0.1950248);
   hNCinFV_stack_11->SetBinContent(10,0.9303237);
   hNCinFV_stack_11->SetBinContent(11,0.536893);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.6198731);
   hNCinFV_stack_11->SetBinError(2,1.226321);
   hNCinFV_stack_11->SetBinError(3,1.194137);
   hNCinFV_stack_11->SetBinError(4,1.507774);
   hNCinFV_stack_11->SetBinError(5,0.9625925);
   hNCinFV_stack_11->SetBinError(6,0.9615599);
   hNCinFV_stack_11->SetBinError(7,0.5197486);
   hNCinFV_stack_11->SetBinError(8,0.5551335);
   hNCinFV_stack_11->SetBinError(9,0.1950249);
   hNCinFV_stack_11->SetBinError(10,0.4814682);
   hNCinFV_stack_11->SetBinError(11,0.3929602);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetEntries(136);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,18.34494);
   hnumuCCinFV_stack_12->SetBinContent(2,69.33865);
   hnumuCCinFV_stack_12->SetBinContent(3,83.13228);
   hnumuCCinFV_stack_12->SetBinContent(4,96.6962);
   hnumuCCinFV_stack_12->SetBinContent(5,122.9735);
   hnumuCCinFV_stack_12->SetBinContent(6,90.15585);
   hnumuCCinFV_stack_12->SetBinContent(7,56.67012);
   hnumuCCinFV_stack_12->SetBinContent(8,40.16881);
   hnumuCCinFV_stack_12->SetBinContent(9,38.15063);
   hnumuCCinFV_stack_12->SetBinContent(10,21.4734);
   hnumuCCinFV_stack_12->SetBinContent(11,18.92868);
   hnumuCCinFV_stack_12->SetBinContent(12,14.01772);
   hnumuCCinFV_stack_12->SetBinContent(13,9.084153);
   hnumuCCinFV_stack_12->SetBinContent(14,9.130761);
   hnumuCCinFV_stack_12->SetBinContent(15,4.737287);
   hnumuCCinFV_stack_12->SetBinContent(16,4.649961);
   hnumuCCinFV_stack_12->SetBinContent(17,4.424077);
   hnumuCCinFV_stack_12->SetBinContent(18,4.614377);
   hnumuCCinFV_stack_12->SetBinContent(19,2.07538);
   hnumuCCinFV_stack_12->SetBinContent(20,2.195754);
   hnumuCCinFV_stack_12->SetBinContent(21,1.465526);
   hnumuCCinFV_stack_12->SetBinContent(22,1.660551);
   hnumuCCinFV_stack_12->SetBinContent(23,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(24,3.092659);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(26,1.691851);
   hnumuCCinFV_stack_12->SetBinError(1,2.518357);
   hnumuCCinFV_stack_12->SetBinError(2,4.738381);
   hnumuCCinFV_stack_12->SetBinError(3,4.677048);
   hnumuCCinFV_stack_12->SetBinError(4,5.22259);
   hnumuCCinFV_stack_12->SetBinError(5,7.318668);
   hnumuCCinFV_stack_12->SetBinError(6,4.955046);
   hnumuCCinFV_stack_12->SetBinError(7,4.466328);
   hnumuCCinFV_stack_12->SetBinError(8,3.265877);
   hnumuCCinFV_stack_12->SetBinError(9,3.201744);
   hnumuCCinFV_stack_12->SetBinError(10,2.511558);
   hnumuCCinFV_stack_12->SetBinError(11,2.200367);
   hnumuCCinFV_stack_12->SetBinError(12,2.059123);
   hnumuCCinFV_stack_12->SetBinError(13,1.41247);
   hnumuCCinFV_stack_12->SetBinError(14,1.510749);
   hnumuCCinFV_stack_12->SetBinError(15,1.065443);
   hnumuCCinFV_stack_12->SetBinError(16,1.112894);
   hnumuCCinFV_stack_12->SetBinError(17,1.053537);
   hnumuCCinFV_stack_12->SetBinError(18,1.899996);
   hnumuCCinFV_stack_12->SetBinError(19,0.7578033);
   hnumuCCinFV_stack_12->SetBinError(20,0.7598403);
   hnumuCCinFV_stack_12->SetBinError(21,0.6209405);
   hnumuCCinFV_stack_12->SetBinError(22,0.650847);
   hnumuCCinFV_stack_12->SetBinError(23,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(24,2.275735);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(26,0.6672974);
   hnumuCCinFV_stack_12->SetEntries(2974);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(2,2.959309);
   hnueCCinFV_stack_13->SetBinContent(3,2.608984);
   hnueCCinFV_stack_13->SetBinContent(4,1.555735);
   hnueCCinFV_stack_13->SetBinContent(5,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(6,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(7,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.3921167);
   hnueCCinFV_stack_13->SetBinError(2,0.9335743);
   hnueCCinFV_stack_13->SetBinError(3,0.8525898);
   hnueCCinFV_stack_13->SetBinError(4,0.7077556);
   hnueCCinFV_stack_13->SetBinError(5,0.340721);
   hnueCCinFV_stack_13->SetBinError(6,0.438694);
   hnueCCinFV_stack_13->SetBinError(7,0.48078);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__14->SetBinContent(1,63.76126);
   hmcerror__14->SetBinContent(2,266.0674);
   hmcerror__14->SetBinContent(3,501.2052);
   hmcerror__14->SetBinContent(4,669.6677);
   hmcerror__14->SetBinContent(5,738.6494);
   hmcerror__14->SetBinContent(6,596.5857);
   hmcerror__14->SetBinContent(7,464.5233);
   hmcerror__14->SetBinContent(8,355.8538);
   hmcerror__14->SetBinContent(9,288.8206);
   hmcerror__14->SetBinContent(10,201.7845);
   hmcerror__14->SetBinContent(11,171.2639);
   hmcerror__14->SetBinContent(12,108.901);
   hmcerror__14->SetBinContent(13,83.83126);
   hmcerror__14->SetBinContent(14,63.82397);
   hmcerror__14->SetBinContent(15,53.10267);
   hmcerror__14->SetBinContent(16,42.51302);
   hmcerror__14->SetBinContent(17,30.79573);
   hmcerror__14->SetBinContent(18,24.68209);
   hmcerror__14->SetBinContent(19,16.04799);
   hmcerror__14->SetBinContent(20,16.58018);
   hmcerror__14->SetBinContent(21,11.17045);
   hmcerror__14->SetBinContent(22,8.478332);
   hmcerror__14->SetBinContent(23,5.763443);
   hmcerror__14->SetBinContent(24,7.722909);
   hmcerror__14->SetBinContent(25,4.149991);
   hmcerror__14->SetBinContent(26,11.30714);
   hmcerror__14->SetBinError(1,13.51541);
   hmcerror__14->SetBinError(2,55.22508);
   hmcerror__14->SetBinError(3,114.5322);
   hmcerror__14->SetBinError(4,162.0084);
   hmcerror__14->SetBinError(5,180.9565);
   hmcerror__14->SetBinError(6,153.4959);
   hmcerror__14->SetBinError(7,112.8227);
   hmcerror__14->SetBinError(8,88.11336);
   hmcerror__14->SetBinError(9,71.96131);
   hmcerror__14->SetBinError(10,53.71393);
   hmcerror__14->SetBinError(11,44.18363);
   hmcerror__14->SetBinError(12,28.20662);
   hmcerror__14->SetBinError(13,21.09057);
   hmcerror__14->SetBinError(14,16.29796);
   hmcerror__14->SetBinError(15,15.19795);
   hmcerror__14->SetBinError(16,11.51897);
   hmcerror__14->SetBinError(17,8.138277);
   hmcerror__14->SetBinError(18,7.356151);
   hmcerror__14->SetBinError(19,4.247224);
   hmcerror__14->SetBinError(20,4.47334);
   hmcerror__14->SetBinError(21,3.258082);
   hmcerror__14->SetBinError(22,2.824775);
   hmcerror__14->SetBinError(23,2.072893);
   hmcerror__14->SetBinError(24,4.797176);
   hmcerror__14->SetBinError(25,1.785157);
   hmcerror__14->SetBinError(26,3.163815);
   hmcerror__14->SetEntries(4774.494);

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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3017[25] = {
   62,
   248,
   401,
   612,
   686,
   587,
   432,
   282,
   207,
   157,
   138,
   119,
   73,
   46,
   32,
   29,
   18,
   17,
   14,
   9,
   7,
   6,
   2,
   5,
   5};
   Double_t _felx3017[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3017[25] = {
   8.0018,
   15.74802,
   20.02498,
   24.73863,
   26.1916,
   24.22808,
   20.78461,
   16.79286,
   14.38749,
   12.52996,
   11.74734,
   10.90871,
   8.6693,
   6.9153,
   5.7977,
   5.5285,
   4.4008,
   4.2835,
   3.9102,
   3.19354,
   2.85954,
   2.67925,
   2,
   2.48995,
   2.48995};
   Double_t _fehx3017[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3017[25] = {
   7.7989,
   15.74802,
   20.02498,
   24.73863,
   26.1916,
   24.22808,
   20.78461,
   16.79286,
   14.38749,
   12.52996,
   11.74734,
   10.90871,
   8.4672,
   6.7108,
   5.5904,
   5.3201,
   4.1858,
   4.0673,
   3.6898,
   2.9582,
   2.61053,
   2.41858,
   1.51917,
   2.21064,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(783.4108);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=30.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4194.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 78.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 31.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  63.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  55.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3784.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 32.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 718.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_muon_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3018[25] = {
   0.211969,
   0.2075605,
   0.2285137,
   0.2419236,
   0.2449829,
   0.2572907,
   0.2428785,
   0.2476111,
   0.2491558,
   0.2661945,
   0.2579857,
   0.2590115,
   0.2515836,
   0.255358,
   0.2861993,
   0.2709516,
   0.2642664,
   0.298036,
   0.2646577,
   0.2698004,
   0.2916696,
   0.3331758,
   0.3596623,
   0.6211618,
   0.4301593};
   Double_t _fehx3018[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3018[25] = {
   0.211969,
   0.2075605,
   0.2285137,
   0.2419236,
   0.2449829,
   0.2572907,
   0.2428785,
   0.2476111,
   0.2491558,
   0.2661945,
   0.2579857,
   0.2590115,
   0.2515836,
   0.255358,
   0.2861993,
   0.2709516,
   0.2642664,
   0.298036,
   0.2646577,
   0.2698004,
   0.2916696,
   0.3331758,
   0.3596623,
   0.6211618,
   0.4301593};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3019[25] = {
   0.211969,
   0.2075605,
   0.2285137,
   0.2419236,
   0.2449829,
   0.2572907,
   0.2428785,
   0.2476111,
   0.2491558,
   0.2661945,
   0.2579857,
   0.2590115,
   0.2515836,
   0.255358,
   0.2861993,
   0.2709516,
   0.2642664,
   0.298036,
   0.2646577,
   0.2698004,
   0.2916696,
   0.3331758,
   0.3596623,
   0.6211618,
   0.4301593};
   Double_t _fehx3019[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3019[25] = {
   0.211969,
   0.2075605,
   0.2285137,
   0.2419236,
   0.2449829,
   0.2572907,
   0.2428785,
   0.2476111,
   0.2491558,
   0.2661945,
   0.2579857,
   0.2590115,
   0.2515836,
   0.255358,
   0.2861993,
   0.2709516,
   0.2642664,
   0.298036,
   0.2646577,
   0.2698004,
   0.2916696,
   0.3331758,
   0.3596623,
   0.6211618,
   0.4301593};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3020[25] = {
   0.9723773,
   0.9320948,
   0.8000715,
   0.9138861,
   0.9287221,
   0.9839324,
   0.9299857,
   0.7924602,
   0.716708,
   0.7780578,
   0.8057741,
   1.092735,
   0.8707969,
   0.7207323,
   0.6026062,
   0.682144,
   0.5844967,
   0.6887586,
   0.8723835,
   0.5428167,
   0.6266531,
   0.7076864,
   0.3470148,
   0.6474244,
   1.204822};
   Double_t _felx3020[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3020[25] = {
   0.1254963,
   0.05918808,
   0.03995366,
   0.03694166,
   0.03545878,
   0.04061124,
   0.04474396,
   0.04719032,
   0.04981465,
   0.06209578,
   0.06859204,
   0.1001709,
   0.1034137,
   0.1083496,
   0.1091791,
   0.1300425,
   0.1429029,
   0.1735469,
   0.2436567,
   0.1926119,
   0.2559914,
   0.3160115,
   0.3470148,
   0.3224109,
   0.5999892};
   Double_t _fehx3020[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3020[25] = {
   0.1223141,
   0.05918808,
   0.03995366,
   0.03694166,
   0.03545878,
   0.04061124,
   0.04474396,
   0.04719032,
   0.04981465,
   0.06209578,
   0.06859204,
   0.1001709,
   0.1010029,
   0.1051454,
   0.1052753,
   0.1251405,
   0.1359215,
   0.1647875,
   0.2299229,
   0.1784178,
   0.2336995,
   0.285266,
   0.2635872,
   0.2862445,
   0.5326855};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.911258);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_muon_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
