#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 16:54:36 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-9.299673,1692.308,1028.348);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hmc__4->SetBinContent(2,25.82113);
   hmc__4->SetBinContent(3,200.2442);
   hmc__4->SetBinContent(4,419.7805);
   hmc__4->SetBinContent(5,464.9837);
   hmc__4->SetBinContent(6,401.0541);
   hmc__4->SetBinContent(7,289.2924);
   hmc__4->SetBinContent(8,215.0762);
   hmc__4->SetBinContent(9,171.2984);
   hmc__4->SetBinContent(10,127.4534);
   hmc__4->SetBinContent(11,101.3721);
   hmc__4->SetBinContent(12,67.86376);
   hmc__4->SetBinContent(13,52.35971);
   hmc__4->SetBinContent(14,45.54082);
   hmc__4->SetBinContent(15,35.23205);
   hmc__4->SetBinContent(16,25.47073);
   hmc__4->SetBinContent(17,22.24456);
   hmc__4->SetBinContent(18,12.63702);
   hmc__4->SetBinContent(19,10.19468);
   hmc__4->SetBinContent(20,10.10004);
   hmc__4->SetBinContent(21,6.432245);
   hmc__4->SetBinContent(22,3.572761);
   hmc__4->SetBinContent(23,2.297188);
   hmc__4->SetBinContent(24,2.147572);
   hmc__4->SetBinContent(25,0.7851709);
   hmc__4->SetBinContent(26,3.225086);
   hmc__4->SetBinError(1,0.3895343);
   hmc__4->SetBinError(2,5.915557);
   hmc__4->SetBinError(3,42.5727);
   hmc__4->SetBinError(4,93.60773);
   hmc__4->SetBinError(5,105.9651);
   hmc__4->SetBinError(6,95.55366);
   hmc__4->SetBinError(7,64.86262);
   hmc__4->SetBinError(8,49.69048);
   hmc__4->SetBinError(9,41.09227);
   hmc__4->SetBinError(10,30.22198);
   hmc__4->SetBinError(11,26.33367);
   hmc__4->SetBinError(12,17.29026);
   hmc__4->SetBinError(13,13.71304);
   hmc__4->SetBinError(14,12.28601);
   hmc__4->SetBinError(15,10.25449);
   hmc__4->SetBinError(16,8.195041);
   hmc__4->SetBinError(17,6.904252);
   hmc__4->SetBinError(18,4.066927);
   hmc__4->SetBinError(19,4.045569);
   hmc__4->SetBinError(20,5.144559);
   hmc__4->SetBinError(21,3.286875);
   hmc__4->SetBinError(22,1.544242);
   hmc__4->SetBinError(23,1.090961);
   hmc__4->SetBinError(24,1.253628);
   hmc__4->SetBinError(25,0.6542827);
   hmc__4->SetBinError(26,1.412237);
   hmc__4->SetMinimum(-9.299673);
   hmc__4->SetMaximum(976.4657);
   hmc__4->SetEntries(2705.441);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1500);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(488.2328);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(3,1.713518);
   hbadmatch_stack_1->SetBinContent(4,3.980227);
   hbadmatch_stack_1->SetBinContent(5,5.270314);
   hbadmatch_stack_1->SetBinContent(6,2.105666);
   hbadmatch_stack_1->SetBinContent(7,0.6046637);
   hbadmatch_stack_1->SetBinContent(8,0.6803553);
   hbadmatch_stack_1->SetBinContent(9,0.7319179);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.6883481);
   hbadmatch_stack_1->SetBinError(4,1.009042);
   hbadmatch_stack_1->SetBinError(5,1.161766);
   hbadmatch_stack_1->SetBinError(6,0.8421874);
   hbadmatch_stack_1->SetBinError(7,0.3493039);
   hbadmatch_stack_1->SetBinError(8,0.4810838);
   hbadmatch_stack_1->SetBinError(9,0.438694);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,3.889996);
   hext_stack_2->SetBinContent(4,3.166181);
   hext_stack_2->SetBinContent(5,3.241202);
   hext_stack_2->SetBinContent(6,5.236656);
   hext_stack_2->SetBinContent(7,2.510206);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,2.566457);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,1.264566);
   hext_stack_2->SetBinError(4,1.061777);
   hext_stack_2->SetBinError(5,1.178414);
   hext_stack_2->SetBinError(6,1.658262);
   hext_stack_2->SetBinError(7,1.057404);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,1.283228);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(5,0.2544535);
   hdirt_stack_3->SetBinContent(7,0.2574102);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinError(5,0.2544535);
   hdirt_stack_3->SetBinError(7,0.2574102);
   hdirt_stack_3->SetBinError(9,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(3,1.912422);
   houtFV_stack_4->SetBinContent(4,1.108993);
   houtFV_stack_4->SetBinContent(5,1.709433);
   houtFV_stack_4->SetBinContent(6,0.2448018);
   houtFV_stack_4->SetBinContent(7,1.177907);
   houtFV_stack_4->SetBinContent(8,0.3900497);
   houtFV_stack_4->SetBinContent(9,0.5352025);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(3,0.6981625);
   houtFV_stack_4->SetBinError(4,0.4708077);
   houtFV_stack_4->SetBinError(5,0.6671264);
   houtFV_stack_4->SetBinError(6,0.2448018);
   houtFV_stack_4->SetBinError(7,0.600534);
   houtFV_stack_4->SetBinError(8,0.2758068);
   houtFV_stack_4->SetBinError(9,0.3921167);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(21,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1089254);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2895194);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.19843);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.042476);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.64703);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.08875);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.57079);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.630726);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.051109);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.594171);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.631074);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.594334);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.8954268);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2405887);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2757436);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2523669);
   hNCpi0inFVres_stack_7->SetBinError(3,1.15279);
   hNCpi0inFVres_stack_7->SetBinError(4,1.264844);
   hNCpi0inFVres_stack_7->SetBinError(5,1.113688);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9610926);
   hNCpi0inFVres_stack_7->SetBinError(7,0.878838);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5749947);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5603858);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2434469);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3869712);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1477767);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2494091);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01732447);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.829797);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.813284);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.72982);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.514095);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.429999);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.122231);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.740381);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.057658);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8083828);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.000626);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4421415);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5091547);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.3542656);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.08575786);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7838998);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.881118);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.134524);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.084617);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.072849);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6118137);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7152863);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5265324);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3621034);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5881095);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.177466);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.381521);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2187938);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.0642335);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.097318);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,15.85727);
   hCCpi0inFV_stack_10->SetBinContent(3,130.2157);
   hCCpi0inFV_stack_10->SetBinContent(4,318.2785);
   hCCpi0inFV_stack_10->SetBinContent(5,357.5936);
   hCCpi0inFV_stack_10->SetBinContent(6,306.8145);
   hCCpi0inFV_stack_10->SetBinContent(7,228.7644);
   hCCpi0inFV_stack_10->SetBinContent(8,185.23);
   hCCpi0inFV_stack_10->SetBinContent(9,147.3701);
   hCCpi0inFV_stack_10->SetBinContent(10,110.6914);
   hCCpi0inFV_stack_10->SetBinContent(11,88.06218);
   hCCpi0inFV_stack_10->SetBinContent(12,58.36212);
   hCCpi0inFV_stack_10->SetBinContent(13,45.76714);
   hCCpi0inFV_stack_10->SetBinContent(14,38.70928);
   hCCpi0inFV_stack_10->SetBinContent(15,28.22829);
   hCCpi0inFV_stack_10->SetBinContent(16,22.23394);
   hCCpi0inFV_stack_10->SetBinContent(17,19.04954);
   hCCpi0inFV_stack_10->SetBinContent(18,12.41241);
   hCCpi0inFV_stack_10->SetBinContent(19,9.039744);
   hCCpi0inFV_stack_10->SetBinContent(20,6.255536);
   hCCpi0inFV_stack_10->SetBinContent(21,5.078625);
   hCCpi0inFV_stack_10->SetBinContent(22,3.232584);
   hCCpi0inFV_stack_10->SetBinContent(23,2.102163);
   hCCpi0inFV_stack_10->SetBinContent(24,1.950857);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(26,2.931052);
   hCCpi0inFV_stack_10->SetBinError(2,2.024159);
   hCCpi0inFV_stack_10->SetBinError(3,5.698695);
   hCCpi0inFV_stack_10->SetBinError(4,8.926945);
   hCCpi0inFV_stack_10->SetBinError(5,9.543877);
   hCCpi0inFV_stack_10->SetBinError(6,8.832934);
   hCCpi0inFV_stack_10->SetBinError(7,7.56846);
   hCCpi0inFV_stack_10->SetBinError(8,6.805626);
   hCCpi0inFV_stack_10->SetBinError(9,6.186046);
   hCCpi0inFV_stack_10->SetBinError(10,5.23234);
   hCCpi0inFV_stack_10->SetBinError(11,4.728928);
   hCCpi0inFV_stack_10->SetBinError(12,3.806054);
   hCCpi0inFV_stack_10->SetBinError(13,3.34735);
   hCCpi0inFV_stack_10->SetBinError(14,3.144728);
   hCCpi0inFV_stack_10->SetBinError(15,2.720146);
   hCCpi0inFV_stack_10->SetBinError(16,2.363453);
   hCCpi0inFV_stack_10->SetBinError(17,2.193874);
   hCCpi0inFV_stack_10->SetBinError(18,1.76654);
   hCCpi0inFV_stack_10->SetBinError(19,1.520674);
   hCCpi0inFV_stack_10->SetBinError(20,1.27266);
   hCCpi0inFV_stack_10->SetBinError(21,1.178476);
   hCCpi0inFV_stack_10->SetBinError(22,0.8558709);
   hCCpi0inFV_stack_10->SetBinError(23,0.6787356);
   hCCpi0inFV_stack_10->SetBinError(24,0.7609034);
   hCCpi0inFV_stack_10->SetBinError(25,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(26,0.8781425);
   hCCpi0inFV_stack_10->SetEntries(9150);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,1.65717);
   hNCinFV_stack_11->SetBinContent(3,4.985034);
   hNCinFV_stack_11->SetBinContent(4,7.032254);
   hNCinFV_stack_11->SetBinContent(5,5.625052);
   hNCinFV_stack_11->SetBinContent(6,4.446451);
   hNCinFV_stack_11->SetBinContent(7,1.860647);
   hNCinFV_stack_11->SetBinContent(8,1.073786);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.6498287);
   hNCinFV_stack_11->SetBinError(3,1.127887);
   hNCinFV_stack_11->SetBinError(4,1.330593);
   hNCinFV_stack_11->SetBinError(5,1.161279);
   hNCinFV_stack_11->SetBinError(6,1.056906);
   hNCinFV_stack_11->SetBinError(7,0.6808988);
   hNCinFV_stack_11->SetBinError(8,0.5557297);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetEntries(119);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,4.874492);
   hnumuCCinFV_stack_12->SetBinContent(3,37.18377);
   hnumuCCinFV_stack_12->SetBinContent(4,58.8661);
   hnumuCCinFV_stack_12->SetBinContent(5,69.36455);
   hnumuCCinFV_stack_12->SetBinContent(6,66.07331);
   hnumuCCinFV_stack_12->SetBinContent(7,44.212);
   hnumuCCinFV_stack_12->SetBinContent(8,22.17244);
   hnumuCCinFV_stack_12->SetBinContent(9,18.16983);
   hnumuCCinFV_stack_12->SetBinContent(10,13.89465);
   hnumuCCinFV_stack_12->SetBinContent(11,8.113768);
   hnumuCCinFV_stack_12->SetBinContent(12,8.622193);
   hnumuCCinFV_stack_12->SetBinContent(13,5.388894);
   hnumuCCinFV_stack_12->SetBinContent(14,6.006504);
   hnumuCCinFV_stack_12->SetBinContent(15,6.920061);
   hnumuCCinFV_stack_12->SetBinContent(16,2.95431);
   hnumuCCinFV_stack_12->SetBinContent(17,3.13922);
   hnumuCCinFV_stack_12->SetBinContent(18,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(19,1.127039);
   hnumuCCinFV_stack_12->SetBinContent(20,3.827179);
   hnumuCCinFV_stack_12->SetBinContent(21,1.13174);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(26,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(2,1.106448);
   hnumuCCinFV_stack_12->SetBinError(3,3.439508);
   hnumuCCinFV_stack_12->SetBinError(4,3.942136);
   hnumuCCinFV_stack_12->SetBinError(5,4.377526);
   hnumuCCinFV_stack_12->SetBinError(6,4.122792);
   hnumuCCinFV_stack_12->SetBinError(7,3.750435);
   hnumuCCinFV_stack_12->SetBinError(8,2.358669);
   hnumuCCinFV_stack_12->SetBinError(9,2.401717);
   hnumuCCinFV_stack_12->SetBinError(10,2.078617);
   hnumuCCinFV_stack_12->SetBinError(11,1.416789);
   hnumuCCinFV_stack_12->SetBinError(12,1.445628);
   hnumuCCinFV_stack_12->SetBinError(13,1.142006);
   hnumuCCinFV_stack_12->SetBinError(14,1.275117);
   hnumuCCinFV_stack_12->SetBinError(15,2.536817);
   hnumuCCinFV_stack_12->SetBinError(16,0.8519563);
   hnumuCCinFV_stack_12->SetBinError(17,0.859396);
   hnumuCCinFV_stack_12->SetBinError(18,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(19,0.5201044);
   hnumuCCinFV_stack_12->SetBinError(20,2.441852);
   hnumuCCinFV_stack_12->SetBinError(21,0.5219211);
   hnumuCCinFV_stack_12->SetBinError(22,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(23,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(26,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(1596);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,1.855576);
   hnueCCinFV_stack_13->SetBinContent(4,2.486059);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,1.072095);
   hnueCCinFV_stack_13->SetBinContent(7,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinError(2,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.6794384);
   hnueCCinFV_stack_13->SetBinError(4,0.8559962);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.5551335);
   hnueCCinFV_stack_13->SetBinError(7,0.438694);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);
   hmcerror__5->SetBinContent(2,25.82113);
   hmcerror__5->SetBinContent(3,200.2442);
   hmcerror__5->SetBinContent(4,419.7805);
   hmcerror__5->SetBinContent(5,464.9837);
   hmcerror__5->SetBinContent(6,401.0541);
   hmcerror__5->SetBinContent(7,289.2924);
   hmcerror__5->SetBinContent(8,215.0762);
   hmcerror__5->SetBinContent(9,171.2984);
   hmcerror__5->SetBinContent(10,127.4534);
   hmcerror__5->SetBinContent(11,101.3721);
   hmcerror__5->SetBinContent(12,67.86376);
   hmcerror__5->SetBinContent(13,52.35971);
   hmcerror__5->SetBinContent(14,45.54082);
   hmcerror__5->SetBinContent(15,35.23205);
   hmcerror__5->SetBinContent(16,25.47073);
   hmcerror__5->SetBinContent(17,22.24456);
   hmcerror__5->SetBinContent(18,12.63702);
   hmcerror__5->SetBinContent(19,10.19468);
   hmcerror__5->SetBinContent(20,10.10004);
   hmcerror__5->SetBinContent(21,6.432245);
   hmcerror__5->SetBinContent(22,3.572761);
   hmcerror__5->SetBinContent(23,2.297188);
   hmcerror__5->SetBinContent(24,2.147572);
   hmcerror__5->SetBinContent(25,0.7851709);
   hmcerror__5->SetBinContent(26,3.225086);
   hmcerror__5->SetBinError(1,0.3895343);
   hmcerror__5->SetBinError(2,5.915557);
   hmcerror__5->SetBinError(3,42.5727);
   hmcerror__5->SetBinError(4,93.60773);
   hmcerror__5->SetBinError(5,105.9651);
   hmcerror__5->SetBinError(6,95.55366);
   hmcerror__5->SetBinError(7,64.86262);
   hmcerror__5->SetBinError(8,49.69048);
   hmcerror__5->SetBinError(9,41.09227);
   hmcerror__5->SetBinError(10,30.22198);
   hmcerror__5->SetBinError(11,26.33367);
   hmcerror__5->SetBinError(12,17.29026);
   hmcerror__5->SetBinError(13,13.71304);
   hmcerror__5->SetBinError(14,12.28601);
   hmcerror__5->SetBinError(15,10.25449);
   hmcerror__5->SetBinError(16,8.195041);
   hmcerror__5->SetBinError(17,6.904252);
   hmcerror__5->SetBinError(18,4.066927);
   hmcerror__5->SetBinError(19,4.045569);
   hmcerror__5->SetBinError(20,5.144559);
   hmcerror__5->SetBinError(21,3.286875);
   hmcerror__5->SetBinError(22,1.544242);
   hmcerror__5->SetBinError(23,1.090961);
   hmcerror__5->SetBinError(24,1.253628);
   hmcerror__5->SetBinError(25,0.6542827);
   hmcerror__5->SetBinError(26,1.412237);
   hmcerror__5->SetEntries(2705.441);

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
   Double_t _fy3005[25] = {
   0,
   34,
   159,
   379,
   418,
   409,
   278,
   212,
   143,
   107,
   89,
   77,
   57,
   39,
   22,
   17,
   15,
   14,
   7,
   5,
   8,
   5,
   0,
   1,
   2};
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
   0,
   5.9703,
   12.60952,
   19.46792,
   20.44505,
   20.22375,
   16.67333,
   14.56022,
   11.95826,
   10.34408,
   9.5566,
   8.8995,
   7.679,
   6.3813,
   4.8417,
   4.2835,
   4.0385,
   3.9102,
   2.85954,
   2.48995,
   3.0307,
   2.48995,
   0,
   1,
   2};
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
   1.1478,
   5.7635,
   12.60952,
   19.46792,
   20.44505,
   20.22375,
   16.67333,
   14.56022,
   11.95826,
   10.34408,
   9.3552,
   8.6976,
   7.4757,
   6.1757,
   4.6299,
   4.0673,
   3.8197,
   3.6898,
   2.61053,
   2.21064,
   2.7896,
   2.21064,
   1.1478,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(482.2896);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2497.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2141.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 28.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 383.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_Emuon_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fely3006[25] = {
   0,
   0.2290975,
   0.2126039,
   0.2229921,
   0.2278899,
   0.2382563,
   0.2242113,
   0.2310366,
   0.239887,
   0.2371218,
   0.2597724,
   0.254779,
   0.2619006,
   0.2697802,
   0.2910556,
   0.3217435,
   0.3103793,
   0.3218263,
   0.3968313,
   0.5093603,
   0.5109997,
   0.4322265,
   0.4749114,
   0.5837422,
   0.8332998};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0,
   0.2290975,
   0.2126039,
   0.2229921,
   0.2278899,
   0.2382563,
   0.2242113,
   0.2310366,
   0.239887,
   0.2371218,
   0.2597724,
   0.254779,
   0.2619006,
   0.2697802,
   0.2910556,
   0.3217435,
   0.3103793,
   0.3218263,
   0.3968313,
   0.5093603,
   0.5109997,
   0.4322265,
   0.4749114,
   0.5837422,
   0.8332998};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Muon Energy [MeV]");
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
   Double_t _fely3007[25] = {
   0,
   0.2290975,
   0.2126039,
   0.2229921,
   0.2278899,
   0.2382563,
   0.2242113,
   0.2310366,
   0.239887,
   0.2371218,
   0.2597724,
   0.254779,
   0.2619006,
   0.2697802,
   0.2910556,
   0.3217435,
   0.3103793,
   0.3218263,
   0.3968313,
   0.5093603,
   0.5109997,
   0.4322265,
   0.4749114,
   0.5837422,
   0.8332998};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0,
   0.2290975,
   0.2126039,
   0.2229921,
   0.2278899,
   0.2382563,
   0.2242113,
   0.2310366,
   0.239887,
   0.2371218,
   0.2597724,
   0.254779,
   0.2619006,
   0.2697802,
   0.2910556,
   0.3217435,
   0.3103793,
   0.3218263,
   0.3968313,
   0.5093603,
   0.5109997,
   0.4322265,
   0.4749114,
   0.5837422,
   0.8332998};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   Double_t _fy3008[25] = {
   10,
   1.316751,
   0.7940305,
   0.9028529,
   0.8989563,
   1.019812,
   0.9609653,
   0.9856972,
   0.8348005,
   0.8395226,
   0.8779539,
   1.134626,
   1.088623,
   0.8563745,
   0.6244315,
   0.6674328,
   0.6743222,
   1.107856,
   0.6866324,
   0.4950476,
   1.243734,
   1.399478,
   0,
   0.4656421,
   2.547216};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0,
   0.2312176,
   0.06297071,
   0.04637644,
   0.04396939,
   0.05042648,
   0.05763487,
   0.06769796,
   0.06980952,
   0.08115971,
   0.09427251,
   0.1311377,
   0.1466586,
   0.1401226,
   0.1374232,
   0.1681734,
   0.18155,
   0.3094241,
   0.2804933,
   0.2465287,
   0.471173,
   0.696926,
   0,
   0.4656421,
   2.547216};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0,
   0.2232087,
   0.06297071,
   0.04637644,
   0.04396939,
   0.05042648,
   0.05763487,
   0.06769796,
   0.06980952,
   0.08115971,
   0.09228577,
   0.1281627,
   0.1427758,
   0.135608,
   0.1314116,
   0.1596853,
   0.1717139,
   0.2919833,
   0.2560678,
   0.2188744,
   0.4336899,
   0.6187483,
   0.4996543,
   0.6331382,
   1.934827};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_Emuon_all",25,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
