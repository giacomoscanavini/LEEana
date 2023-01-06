#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 16:54:37 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-16.20468,1692.308,1791.896);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hmc__13->SetBinContent(2,63.02934);
   hmc__13->SetBinContent(3,443.4291);
   hmc__13->SetBinContent(4,698.079);
   hmc__13->SetBinContent(5,810.234);
   hmc__13->SetBinContent(6,677.4047);
   hmc__13->SetBinContent(7,505.2866);
   hmc__13->SetBinContent(8,397);
   hmc__13->SetBinContent(9,300.8866);
   hmc__13->SetBinContent(10,222.516);
   hmc__13->SetBinContent(11,180.03);
   hmc__13->SetBinContent(12,116.6684);
   hmc__13->SetBinContent(13,87.60728);
   hmc__13->SetBinContent(14,68.222);
   hmc__13->SetBinContent(15,50.3815);
   hmc__13->SetBinContent(16,45.77518);
   hmc__13->SetBinContent(17,32.69841);
   hmc__13->SetBinContent(18,24.33072);
   hmc__13->SetBinContent(19,16.98274);
   hmc__13->SetBinContent(20,17.70215);
   hmc__13->SetBinContent(21,10.29338);
   hmc__13->SetBinContent(22,9.552117);
   hmc__13->SetBinContent(23,5.763443);
   hmc__13->SetBinContent(24,7.527884);
   hmc__13->SetBinContent(25,3.951585);
   hmc__13->SetBinContent(26,11.70057);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,13.26686);
   hmc__13->SetBinError(3,94.58478);
   hmc__13->SetBinError(4,164.3942);
   hmc__13->SetBinError(5,197.9681);
   hmc__13->SetBinError(6,171.322);
   hmc__13->SetBinError(7,126.3647);
   hmc__13->SetBinError(8,96.96292);
   hmc__13->SetBinError(9,74.84258);
   hmc__13->SetBinError(10,59.4067);
   hmc__13->SetBinError(11,46.19978);
   hmc__13->SetBinError(12,29.89173);
   hmc__13->SetBinError(13,21.72841);
   hmc__13->SetBinError(14,17.41379);
   hmc__13->SetBinError(15,14.10326);
   hmc__13->SetBinError(16,12.57898);
   hmc__13->SetBinError(17,8.995074);
   hmc__13->SetBinError(18,7.08776);
   hmc__13->SetBinError(19,4.58918);
   hmc__13->SetBinError(20,4.696011);
   hmc__13->SetBinError(21,3.037005);
   hmc__13->SetBinError(22,3.091618);
   hmc__13->SetBinError(23,2.072893);
   hmc__13->SetBinError(24,4.774123);
   hmc__13->SetBinError(25,1.698191);
   hmc__13->SetBinError(26,3.305235);
   hmc__13->SetMinimum(-16.20468);
   hmc__13->SetMaximum(1701.491);
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
   hs5_stack_5->SetMinimum(-9.474605e-09);
   hs5_stack_5->SetMaximum(850.7457);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.9286332);
   hbadmatch_stack_1->SetBinContent(3,2.624592);
   hbadmatch_stack_1->SetBinContent(4,5.26226);
   hbadmatch_stack_1->SetBinContent(5,4.194838);
   hbadmatch_stack_1->SetBinContent(6,2.997682);
   hbadmatch_stack_1->SetBinContent(7,0.8589497);
   hbadmatch_stack_1->SetBinContent(8,0.9876927);
   hbadmatch_stack_1->SetBinContent(9,0.6475151);
   hbadmatch_stack_1->SetBinContent(10,1.036141);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.48078);
   hbadmatch_stack_1->SetBinError(3,0.8184144);
   hbadmatch_stack_1->SetBinError(4,1.160083);
   hbadmatch_stack_1->SetBinError(5,1.019903);
   hbadmatch_stack_1->SetBinError(6,1.033826);
   hbadmatch_stack_1->SetBinError(7,0.4967189);
   hbadmatch_stack_1->SetBinError(8,0.5313904);
   hbadmatch_stack_1->SetBinError(9,0.408234);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,2.185808);
   hext_stack_2->SetBinContent(3,15.75469);
   hext_stack_2->SetBinContent(4,15.43747);
   hext_stack_2->SetBinContent(5,17.81799);
   hext_stack_2->SetBinContent(6,8.071259);
   hext_stack_2->SetBinContent(7,3.636211);
   hext_stack_2->SetBinContent(8,2.916804);
   hext_stack_2->SetBinContent(9,4.830057);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,2.566457);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(16,2.566457);
   hext_stack_2->SetBinContent(17,0.6416141);
   hext_stack_2->SetBinError(2,1.006415);
   hext_stack_2->SetBinError(3,2.74112);
   hext_stack_2->SetBinError(4,2.684643);
   hext_stack_2->SetBinError(5,3.055717);
   hext_stack_2->SetBinError(6,1.993282);
   hext_stack_2->SetBinError(7,1.272817);
   hext_stack_2->SetBinError(8,1.132884);
   hext_stack_2->SetBinError(9,1.607642);
   hext_stack_2->SetBinError(10,0.4587671);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2665913);
   hdirt_stack_3->SetBinContent(3,0.9598238);
   hdirt_stack_3->SetBinContent(6,1.167841e-06);
   hdirt_stack_3->SetBinContent(11,0.165896);
   hdirt_stack_3->SetBinError(2,0.2665913);
   hdirt_stack_3->SetBinError(3,0.4964911);
   hdirt_stack_3->SetBinError(6,1.167841e-06);
   hdirt_stack_3->SetBinError(11,0.165896);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,1.12574);
   houtFV_stack_4->SetBinContent(3,8.067106);
   houtFV_stack_4->SetBinContent(4,4.354951);
   houtFV_stack_4->SetBinContent(5,4.647471);
   houtFV_stack_4->SetBinContent(6,2.81473);
   houtFV_stack_4->SetBinContent(7,3.613893);
   houtFV_stack_4->SetBinContent(8,1.232067);
   houtFV_stack_4->SetBinContent(9,1.268811);
   houtFV_stack_4->SetBinContent(10,0.3934307);
   houtFV_stack_4->SetBinContent(11,2.124428);
   houtFV_stack_4->SetBinContent(12,0.5867651);
   houtFV_stack_4->SetBinContent(13,0.7336084);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinError(2,0.5457763);
   houtFV_stack_4->SetBinError(3,1.412277);
   houtFV_stack_4->SetBinError(4,1.060679);
   houtFV_stack_4->SetBinError(5,1.132522);
   houtFV_stack_4->SetBinError(6,0.839955);
   houtFV_stack_4->SetBinError(7,1.063816);
   houtFV_stack_4->SetBinError(8,0.5059538);
   houtFV_stack_4->SetBinError(9,0.5889569);
   houtFV_stack_4->SetBinError(10,0.2781975);
   houtFV_stack_4->SetBinError(11,1.256119);
   houtFV_stack_4->SetBinError(12,0.3387718);
   houtFV_stack_4->SetBinError(13,0.4394482);
   houtFV_stack_4->SetBinError(14,0.2781975);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.04544352);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1205772);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03295732);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1038054);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.741637);
   hNCpi0inFVres_stack_7->SetBinContent(3,15.4074);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.66806);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.47526);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.074171);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.587909);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.853414);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.9963248);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.3560398);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1580861);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1492757);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.5449052);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3628449);
   hNCpi0inFVres_stack_7->SetBinError(3,1.377377);
   hNCpi0inFVres_stack_7->SetBinError(4,1.37057);
   hNCpi0inFVres_stack_7->SetBinError(5,1.400513);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9441741);
   hNCpi0inFVres_stack_7->SetBinError(7,1.072783);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7744577);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4742924);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1424866);
   hNCpi0inFVres_stack_7->SetBinError(11,0.09949975);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1245411);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5000295);
   hNCpi0inFVres_stack_7->SetBinError(14,0.03945654);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.162084);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.08453);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.86723);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.59886);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.684041);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.207108);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.193183);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.231551);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.68936);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.876496);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2196055);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2225872);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7972679);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.348765);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.054686);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.247643);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9922424);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5650276);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4668277);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4097549);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.359934);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7053752);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.108509);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1039016);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,34.27656);
   hCCpi0inFV_stack_10->SetBinContent(3,271.2434);
   hCCpi0inFV_stack_10->SetBinContent(4,530.2787);
   hCCpi0inFV_stack_10->SetBinContent(5,626.1866);
   hCCpi0inFV_stack_10->SetBinContent(6,540.8293);
   hCCpi0inFV_stack_10->SetBinContent(7,418.3274);
   hCCpi0inFV_stack_10->SetBinContent(8,340.2628);
   hCCpi0inFV_stack_10->SetBinContent(9,252.9397);
   hCCpi0inFV_stack_10->SetBinContent(10,193.1187);
   hCCpi0inFV_stack_10->SetBinContent(11,153.273);
   hCCpi0inFV_stack_10->SetBinContent(12,99.3908);
   hCCpi0inFV_stack_10->SetBinContent(13,76.05939);
   hCCpi0inFV_stack_10->SetBinContent(14,57.72186);
   hCCpi0inFV_stack_10->SetBinContent(15,44.39834);
   hCCpi0inFV_stack_10->SetBinContent(16,38.50297);
   hCCpi0inFV_stack_10->SetBinContent(17,27.54902);
   hCCpi0inFV_stack_10->SetBinContent(18,20.47635);
   hCCpi0inFV_stack_10->SetBinContent(19,14.11945);
   hCCpi0inFV_stack_10->SetBinContent(20,15.70311);
   hCCpi0inFV_stack_10->SetBinContent(21,9.14287);
   hCCpi0inFV_stack_10->SetBinContent(22,7.354673);
   hCCpi0inFV_stack_10->SetBinContent(23,4.494632);
   hCCpi0inFV_stack_10->SetBinContent(24,4.435225);
   hCCpi0inFV_stack_10->SetBinContent(25,3.75487);
   hCCpi0inFV_stack_10->SetBinContent(26,10.00871);
   hCCpi0inFV_stack_10->SetBinError(2,2.949665);
   hCCpi0inFV_stack_10->SetBinError(3,8.249007);
   hCCpi0inFV_stack_10->SetBinError(4,11.53903);
   hCCpi0inFV_stack_10->SetBinError(5,12.63913);
   hCCpi0inFV_stack_10->SetBinError(6,11.7565);
   hCCpi0inFV_stack_10->SetBinError(7,10.2912);
   hCCpi0inFV_stack_10->SetBinError(8,9.298756);
   hCCpi0inFV_stack_10->SetBinError(9,8.073113);
   hCCpi0inFV_stack_10->SetBinError(10,6.952127);
   hCCpi0inFV_stack_10->SetBinError(11,6.242611);
   hCCpi0inFV_stack_10->SetBinError(12,4.967676);
   hCCpi0inFV_stack_10->SetBinError(13,4.387203);
   hCCpi0inFV_stack_10->SetBinError(14,3.795407);
   hCCpi0inFV_stack_10->SetBinError(15,3.376708);
   hCCpi0inFV_stack_10->SetBinError(16,3.09357);
   hCCpi0inFV_stack_10->SetBinError(17,2.640036);
   hCCpi0inFV_stack_10->SetBinError(18,2.301135);
   hCCpi0inFV_stack_10->SetBinError(19,1.871707);
   hCCpi0inFV_stack_10->SetBinError(20,2.019838);
   hCCpi0inFV_stack_10->SetBinError(21,1.494814);
   hCCpi0inFV_stack_10->SetBinError(22,1.392499);
   hCCpi0inFV_stack_10->SetBinError(23,1.037659);
   hCCpi0inFV_stack_10->SetBinError(24,1.145007);
   hCCpi0inFV_stack_10->SetBinError(25,1.039038);
   hCCpi0inFV_stack_10->SetBinError(26,1.642742);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,1.462145);
   hNCinFV_stack_11->SetBinContent(3,8.741594);
   hNCinFV_stack_11->SetBinContent(4,8.359389);
   hNCinFV_stack_11->SetBinContent(5,5.325212);
   hNCinFV_stack_11->SetBinContent(6,3.376046);
   hNCinFV_stack_11->SetBinContent(7,2.537621);
   hNCinFV_stack_11->SetBinContent(8,0.8770706);
   hNCinFV_stack_11->SetBinContent(9,0.3900497);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.9303237);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.6198731);
   hNCinFV_stack_11->SetBinError(3,1.533751);
   hNCinFV_stack_11->SetBinError(4,1.442569);
   hNCinFV_stack_11->SetBinError(5,1.178071);
   hNCinFV_stack_11->SetBinError(6,0.8997438);
   hNCinFV_stack_11->SetBinError(7,0.8329108);
   hNCinFV_stack_11->SetBinError(8,0.5197486);
   hNCinFV_stack_11->SetBinError(9,0.2758068);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.4814682);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,18.34494);
   hnumuCCinFV_stack_12->SetBinContent(3,101.8625);
   hnumuCCinFV_stack_12->SetBinContent(4,104.5599);
   hnumuCCinFV_stack_12->SetBinContent(5,128.2787);
   hnumuCCinFV_stack_12->SetBinContent(6,104.6288);
   hnumuCCinFV_stack_12->SetBinContent(7,66.78387);
   hnumuCCinFV_stack_12->SetBinContent(8,45.4819);
   hnumuCCinFV_stack_12->SetBinContent(9,38.38593);
   hnumuCCinFV_stack_12->SetBinContent(10,25.73668);
   hnumuCCinFV_stack_12->SetBinContent(11,18.54185);
   hnumuCCinFV_stack_12->SetBinContent(12,16.32196);
   hnumuCCinFV_stack_12->SetBinContent(13,8.884057);
   hnumuCCinFV_stack_12->SetBinContent(14,9.604616);
   hnumuCCinFV_stack_12->SetBinContent(15,5.587186);
   hnumuCCinFV_stack_12->SetBinContent(16,4.649961);
   hnumuCCinFV_stack_12->SetBinContent(17,4.424077);
   hnumuCCinFV_stack_12->SetBinContent(18,3.854366);
   hnumuCCinFV_stack_12->SetBinContent(19,2.835392);
   hnumuCCinFV_stack_12->SetBinContent(20,1.999038);
   hnumuCCinFV_stack_12->SetBinContent(21,1.125349);
   hnumuCCinFV_stack_12->SetBinContent(22,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(23,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(24,3.092659);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(26,1.691851);
   hnumuCCinFV_stack_12->SetBinError(2,2.518357);
   hnumuCCinFV_stack_12->SetBinError(3,5.544672);
   hnumuCCinFV_stack_12->SetBinError(4,5.257085);
   hnumuCCinFV_stack_12->SetBinError(5,7.456007);
   hnumuCCinFV_stack_12->SetBinError(6,5.45939);
   hnumuCCinFV_stack_12->SetBinError(7,4.574935);
   hnumuCCinFV_stack_12->SetBinError(8,3.704827);
   hnumuCCinFV_stack_12->SetBinError(9,3.188228);
   hnumuCCinFV_stack_12->SetBinError(10,2.554516);
   hnumuCCinFV_stack_12->SetBinError(11,2.400348);
   hnumuCCinFV_stack_12->SetBinError(12,2.195066);
   hnumuCCinFV_stack_12->SetBinError(13,1.398231);
   hnumuCCinFV_stack_12->SetBinError(14,1.552375);
   hnumuCCinFV_stack_12->SetBinError(15,1.14755);
   hnumuCCinFV_stack_12->SetBinError(16,1.112894);
   hnumuCCinFV_stack_12->SetBinError(17,1.053537);
   hnumuCCinFV_stack_12->SetBinError(18,1.845477);
   hnumuCCinFV_stack_12->SetBinError(19,0.8823068);
   hnumuCCinFV_stack_12->SetBinError(20,0.7339349);
   hnumuCCinFV_stack_12->SetBinError(21,0.5194673);
   hnumuCCinFV_stack_12->SetBinError(22,0.760276);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(3,4.63797);
   hnueCCinFV_stack_13->SetBinContent(4,2.291034);
   hnueCCinFV_stack_13->SetBinContent(5,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.3921167);
   hnueCCinFV_stack_13->SetBinError(3,1.169042);
   hnueCCinFV_stack_13->SetBinError(4,0.8334836);
   hnueCCinFV_stack_13->SetBinError(5,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.4394482);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);
   hmcerror__14->SetBinContent(2,63.02934);
   hmcerror__14->SetBinContent(3,443.4291);
   hmcerror__14->SetBinContent(4,698.079);
   hmcerror__14->SetBinContent(5,810.234);
   hmcerror__14->SetBinContent(6,677.4047);
   hmcerror__14->SetBinContent(7,505.2866);
   hmcerror__14->SetBinContent(8,397);
   hmcerror__14->SetBinContent(9,300.8866);
   hmcerror__14->SetBinContent(10,222.516);
   hmcerror__14->SetBinContent(11,180.03);
   hmcerror__14->SetBinContent(12,116.6684);
   hmcerror__14->SetBinContent(13,87.60728);
   hmcerror__14->SetBinContent(14,68.222);
   hmcerror__14->SetBinContent(15,50.3815);
   hmcerror__14->SetBinContent(16,45.77518);
   hmcerror__14->SetBinContent(17,32.69841);
   hmcerror__14->SetBinContent(18,24.33072);
   hmcerror__14->SetBinContent(19,16.98274);
   hmcerror__14->SetBinContent(20,17.70215);
   hmcerror__14->SetBinContent(21,10.29338);
   hmcerror__14->SetBinContent(22,9.552117);
   hmcerror__14->SetBinContent(23,5.763443);
   hmcerror__14->SetBinContent(24,7.527884);
   hmcerror__14->SetBinContent(25,3.951585);
   hmcerror__14->SetBinContent(26,11.70057);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,13.26686);
   hmcerror__14->SetBinError(3,94.58478);
   hmcerror__14->SetBinError(4,164.3942);
   hmcerror__14->SetBinError(5,197.9681);
   hmcerror__14->SetBinError(6,171.322);
   hmcerror__14->SetBinError(7,126.3647);
   hmcerror__14->SetBinError(8,96.96292);
   hmcerror__14->SetBinError(9,74.84258);
   hmcerror__14->SetBinError(10,59.4067);
   hmcerror__14->SetBinError(11,46.19978);
   hmcerror__14->SetBinError(12,29.89173);
   hmcerror__14->SetBinError(13,21.72841);
   hmcerror__14->SetBinError(14,17.41379);
   hmcerror__14->SetBinError(15,14.10326);
   hmcerror__14->SetBinError(16,12.57898);
   hmcerror__14->SetBinError(17,8.995074);
   hmcerror__14->SetBinError(18,7.08776);
   hmcerror__14->SetBinError(19,4.58918);
   hmcerror__14->SetBinError(20,4.696011);
   hmcerror__14->SetBinError(21,3.037005);
   hmcerror__14->SetBinError(22,3.091618);
   hmcerror__14->SetBinError(23,2.072893);
   hmcerror__14->SetBinError(24,4.774123);
   hmcerror__14->SetBinError(25,1.698191);
   hmcerror__14->SetBinError(26,3.305235);
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
   0,
   61,
   390,
   640,
   693,
   676,
   487,
   312,
   217,
   174,
   150,
   116,
   79,
   51,
   33,
   26,
   20,
   20,
   15,
   7,
   9,
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
   0,
   7.9383,
   19.74842,
   25.29822,
   26.32489,
   26,
   22.06808,
   17.66352,
   14.73092,
   13.19091,
   12.24745,
   10.77033,
   9.0124,
   7.2725,
   5.8847,
   5.2453,
   4.6266,
   4.6266,
   4.0385,
   2.85954,
   3.19354,
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
   1.1478,
   7.7354,
   19.74842,
   25.29822,
   26.32489,
   26,
   22.06808,
   17.66352,
   14.73092,
   13.19091,
   12.24745,
   10.77033,
   8.8105,
   7.0686,
   5.6776,
   5.0358,
   4.4133,
   4.4133,
   3.8197,
   2.61053,
   2.9582,
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
   Graph_Graph3017->SetMaximum(791.2574);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=27.2/25","");
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3783.8","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_Emuon_all");
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
   0,
   0.2104871,
   0.213303,
   0.2354951,
   0.2443345,
   0.2529094,
   0.2500852,
   0.2442391,
   0.2487401,
   0.2669772,
   0.2566227,
   0.256211,
   0.2480206,
   0.2552518,
   0.2799294,
   0.2747991,
   0.2750921,
   0.2913091,
   0.2702261,
   0.2652791,
   0.2950444,
   0.3236579,
   0.3596623,
   0.634192,
   0.4297492};
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
   0,
   0.2104871,
   0.213303,
   0.2354951,
   0.2443345,
   0.2529094,
   0.2500852,
   0.2442391,
   0.2487401,
   0.2669772,
   0.2566227,
   0.256211,
   0.2480206,
   0.2552518,
   0.2799294,
   0.2747991,
   0.2750921,
   0.2913091,
   0.2702261,
   0.2652791,
   0.2950444,
   0.3236579,
   0.3596623,
   0.634192,
   0.4297492};
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
   Graph_Graph3018->GetXaxis()->SetTitle("Muon Energy [MeV]");
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
   0,
   0.2104871,
   0.213303,
   0.2354951,
   0.2443345,
   0.2529094,
   0.2500852,
   0.2442391,
   0.2487401,
   0.2669772,
   0.2566227,
   0.256211,
   0.2480206,
   0.2552518,
   0.2799294,
   0.2747991,
   0.2750921,
   0.2913091,
   0.2702261,
   0.2652791,
   0.2950444,
   0.3236579,
   0.3596623,
   0.634192,
   0.4297492};
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
   0,
   0.2104871,
   0.213303,
   0.2354951,
   0.2443345,
   0.2529094,
   0.2500852,
   0.2442391,
   0.2487401,
   0.2669772,
   0.2566227,
   0.256211,
   0.2480206,
   0.2552518,
   0.2799294,
   0.2747991,
   0.2750921,
   0.2913091,
   0.2702261,
   0.2652791,
   0.2950444,
   0.3236579,
   0.3596623,
   0.634192,
   0.4297492};
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
   10,
   0.9678033,
   0.8795092,
   0.9168016,
   0.8553085,
   0.9979263,
   0.9638095,
   0.7858941,
   0.7212019,
   0.7819662,
   0.8331944,
   0.9942709,
   0.9017515,
   0.7475594,
   0.6550023,
   0.5679933,
   0.6116506,
   0.8220061,
   0.8832496,
   0.3954321,
   0.874348,
   0.628133,
   0.3470148,
   0.6641973,
   1.265315};
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
   0,
   0.1259461,
   0.04453568,
   0.03623977,
   0.03249048,
   0.03838178,
   0.04367438,
   0.04449249,
   0.04895837,
   0.0592807,
   0.06803004,
   0.09231574,
   0.1028727,
   0.1066005,
   0.1168028,
   0.1145883,
   0.1414931,
   0.1901547,
   0.2378002,
   0.1615363,
   0.3102517,
   0.2804876,
   0.3470148,
   0.3307636,
   0.6301142};
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
   0,
   0.122727,
   0.04453568,
   0.03623977,
   0.03249048,
   0.03838178,
   0.04367438,
   0.04449249,
   0.04895837,
   0.0592807,
   0.06803004,
   0.09231574,
   0.1005681,
   0.1036117,
   0.1126921,
   0.1100116,
   0.1349699,
   0.181388,
   0.2249166,
   0.1474696,
   0.2873885,
   0.2531983,
   0.2635872,
   0.2936602,
   0.5594312};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_Emuon_all",25,0,1500);

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
