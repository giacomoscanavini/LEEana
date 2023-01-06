#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Oct 24 15:37:54 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
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
   pad1->Range(-276.9231,-9.531258,2030.769,1053.956);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__7->SetBinContent(0,0.7336084);
   hmc__7->SetBinContent(1,4.237212);
   hmc__7->SetBinContent(2,28.34436);
   hmc__7->SetBinContent(3,102.6227);
   hmc__7->SetBinContent(4,218.6044);
   hmc__7->SetBinContent(5,342.7215);
   hmc__7->SetBinContent(6,452.3237);
   hmc__7->SetBinContent(7,476.5629);
   hmc__7->SetBinContent(8,456.6729);
   hmc__7->SetBinContent(9,432.2104);
   hmc__7->SetBinContent(10,382.4664);
   hmc__7->SetBinContent(11,314.445);
   hmc__7->SetBinContent(12,268.9666);
   hmc__7->SetBinContent(13,243.4928);
   hmc__7->SetBinContent(14,201.5966);
   hmc__7->SetBinContent(15,159.3535);
   hmc__7->SetBinContent(16,126.3488);
   hmc__7->SetBinContent(17,113.4597);
   hmc__7->SetBinContent(18,88.04405);
   hmc__7->SetBinContent(19,69.08082);
   hmc__7->SetBinContent(20,55.9967);
   hmc__7->SetBinContent(21,39.65776);
   hmc__7->SetBinContent(22,42.61771);
   hmc__7->SetBinContent(23,31.78351);
   hmc__7->SetBinContent(24,25.66376);
   hmc__7->SetBinContent(25,17.58231);
   hmc__7->SetBinContent(26,132.4345);
   hmc__7->SetBinError(0,0.4394482);
   hmc__7->SetBinError(1,3.032774);
   hmc__7->SetBinError(2,6.174173);
   hmc__7->SetBinError(3,20.74545);
   hmc__7->SetBinError(4,50.96757);
   hmc__7->SetBinError(5,81.8199);
   hmc__7->SetBinError(6,107.4212);
   hmc__7->SetBinError(7,121.9377);
   hmc__7->SetBinError(8,121.0466);
   hmc__7->SetBinError(9,104.7372);
   hmc__7->SetBinError(10,95.55299);
   hmc__7->SetBinError(11,79.10122);
   hmc__7->SetBinError(12,65.00724);
   hmc__7->SetBinError(13,59.93977);
   hmc__7->SetBinError(14,48.58291);
   hmc__7->SetBinError(15,39.02065);
   hmc__7->SetBinError(16,30.95003);
   hmc__7->SetBinError(17,26.73327);
   hmc__7->SetBinError(18,20.59531);
   hmc__7->SetBinError(19,17.86167);
   hmc__7->SetBinError(20,14.01651);
   hmc__7->SetBinError(21,9.205655);
   hmc__7->SetBinError(22,10.33435);
   hmc__7->SetBinError(23,7.137042);
   hmc__7->SetBinError(24,5.666807);
   hmc__7->SetBinError(25,5.056045);
   hmc__7->SetBinError(26,21.13038);
   hmc__7->SetMinimum(-9.531258);
   hmc__7->SetMaximum(1000.782);
   hmc__7->SetEntries(4776.799);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,1800);
   hs3_stack_3->SetMinimum(-1.150846e-08);
   hs3_stack_3->SetMaximum(500.391);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(3,0.2337684);
   hbadmatch_stack_1->SetBinContent(4,0.611176);
   hbadmatch_stack_1->SetBinContent(5,1.106487);
   hbadmatch_stack_1->SetBinContent(6,0.835495);
   hbadmatch_stack_1->SetBinContent(7,1.011843);
   hbadmatch_stack_1->SetBinContent(8,1.072095);
   hbadmatch_stack_1->SetBinContent(9,2.463571);
   hbadmatch_stack_1->SetBinContent(10,0.5724455);
   hbadmatch_stack_1->SetBinContent(11,0.7319179);
   hbadmatch_stack_1->SetBinContent(12,1.287404);
   hbadmatch_stack_1->SetBinContent(13,1.705045);
   hbadmatch_stack_1->SetBinContent(14,1.375678);
   hbadmatch_stack_1->SetBinContent(15,0.9593105);
   hbadmatch_stack_1->SetBinContent(16,1.878256);
   hbadmatch_stack_1->SetBinContent(17,1.66828);
   hbadmatch_stack_1->SetBinContent(18,0.9303237);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(3,0.2337684);
   hbadmatch_stack_1->SetBinError(4,0.4087974);
   hbadmatch_stack_1->SetBinError(5,0.568129);
   hbadmatch_stack_1->SetBinError(6,0.5084819);
   hbadmatch_stack_1->SetBinError(7,0.4534453);
   hbadmatch_stack_1->SetBinError(8,0.5551335);
   hbadmatch_stack_1->SetBinError(9,0.7649408);
   hbadmatch_stack_1->SetBinError(10,0.3440931);
   hbadmatch_stack_1->SetBinError(11,0.438694);
   hbadmatch_stack_1->SetBinError(12,0.5953724);
   hbadmatch_stack_1->SetBinError(13,0.7081116);
   hbadmatch_stack_1->SetBinError(14,0.5903952);
   hbadmatch_stack_1->SetBinError(15,0.4940204);
   hbadmatch_stack_1->SetBinError(16,0.9472175);
   hbadmatch_stack_1->SetBinError(17,0.7121356);
   hbadmatch_stack_1->SetBinError(18,0.4814682);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.939204);
   hext_stack_2->SetBinContent(3,7.072117);
   hext_stack_2->SetBinContent(4,3.241202);
   hext_stack_2->SetBinContent(5,5.318858);
   hext_stack_2->SetBinContent(6,9.918309);
   hext_stack_2->SetBinContent(7,8.459088);
   hext_stack_2->SetBinContent(8,7.380575);
   hext_stack_2->SetBinContent(9,11.30087);
   hext_stack_2->SetBinContent(10,7.217809);
   hext_stack_2->SetBinContent(11,7.765632);
   hext_stack_2->SetBinContent(12,4.442228);
   hext_stack_2->SetBinContent(13,3.654981);
   hext_stack_2->SetBinContent(14,10.31332);
   hext_stack_2->SetBinContent(15,2.428004);
   hext_stack_2->SetBinContent(16,4.517249);
   hext_stack_2->SetBinContent(17,3.64062);
   hext_stack_2->SetBinContent(18,3.394015);
   hext_stack_2->SetBinContent(19,1.614806);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,3.946247);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(25,0.9660115);
   hext_stack_2->SetBinContent(26,11.74936);
   hext_stack_2->SetBinError(2,0.912471);
   hext_stack_2->SetBinError(3,2.031244);
   hext_stack_2->SetBinError(4,1.178414);
   hext_stack_2->SetBinError(5,1.676283);
   hext_stack_2->SetBinError(6,2.298524);
   hext_stack_2->SetBinError(7,2.098994);
   hext_stack_2->SetBinError(8,1.682775);
   hext_stack_2->SetBinError(9,2.329788);
   hext_stack_2->SetBinError(10,1.784096);
   hext_stack_2->SetBinError(11,1.89754);
   hext_stack_2->SetBinError(12,1.466939);
   hext_stack_2->SetBinError(13,1.163091);
   hext_stack_2->SetBinError(14,2.348321);
   hext_stack_2->SetBinError(15,1.028599);
   hext_stack_2->SetBinError(16,1.553448);
   hext_stack_2->SetBinError(17,1.324834);
   hext_stack_2->SetBinError(18,1.254957);
   hext_stack_2->SetBinError(19,0.8528597);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,1.458663);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(25,0.7189592);
   hext_stack_2->SetBinError(26,2.554253);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(5,0.7551225);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(9,0.7159333);
   hdirt_stack_3->SetBinContent(10,0.5423309);
   hdirt_stack_3->SetBinContent(12,0.292658);
   hdirt_stack_3->SetBinContent(13,0.165896);
   hdirt_stack_3->SetBinContent(14,0.3381884);
   hdirt_stack_3->SetBinContent(15,0.2665913);
   hdirt_stack_3->SetBinContent(16,0.3820091);
   hdirt_stack_3->SetBinContent(23,0.2441834);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(5,0.3834428);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(9,0.4324742);
   hdirt_stack_3->SetBinError(10,0.3301265);
   hdirt_stack_3->SetBinError(12,0.2072697);
   hdirt_stack_3->SetBinError(13,0.165896);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.2665913);
   hdirt_stack_3->SetBinError(16,0.3820091);
   hdirt_stack_3->SetBinError(23,0.2441834);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,1.156506);
   houtFV_stack_4->SetBinContent(3,0.7336084);
   houtFV_stack_4->SetBinContent(4,3.689005);
   houtFV_stack_4->SetBinContent(5,7.821875);
   houtFV_stack_4->SetBinContent(6,4.269035);
   houtFV_stack_4->SetBinContent(7,3.907364);
   houtFV_stack_4->SetBinContent(8,6.543653);
   houtFV_stack_4->SetBinContent(9,5.500422);
   houtFV_stack_4->SetBinContent(10,4.6746);
   houtFV_stack_4->SetBinContent(11,3.504236);
   houtFV_stack_4->SetBinContent(12,3.207297);
   houtFV_stack_4->SetBinContent(13,1.524825);
   houtFV_stack_4->SetBinContent(14,1.465526);
   houtFV_stack_4->SetBinContent(15,3.491647);
   houtFV_stack_4->SetBinContent(16,0.7302274);
   houtFV_stack_4->SetBinContent(17,0.7532358);
   houtFV_stack_4->SetBinContent(18,1.146797);
   houtFV_stack_4->SetBinContent(19,0.5867651);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.4519673);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(2,0.6105144);
   houtFV_stack_4->SetBinError(3,0.4394482);
   houtFV_stack_4->SetBinError(4,0.949418);
   houtFV_stack_4->SetBinError(5,2.10275);
   houtFV_stack_4->SetBinError(6,1.038223);
   houtFV_stack_4->SetBinError(7,0.9075913);
   houtFV_stack_4->SetBinError(8,1.305732);
   houtFV_stack_4->SetBinError(9,1.171477);
   houtFV_stack_4->SetBinError(10,1.155886);
   houtFV_stack_4->SetBinError(11,0.990013);
   houtFV_stack_4->SetBinError(12,1.161894);
   houtFV_stack_4->SetBinError(13,0.5895027);
   houtFV_stack_4->SetBinError(14,0.6209405);
   houtFV_stack_4->SetBinError(15,1.19193);
   houtFV_stack_4->SetBinError(16,0.4379386);
   houtFV_stack_4->SetBinError(17,0.3967958);
   houtFV_stack_4->SetBinError(18,0.5337594);
   houtFV_stack_4->SetBinError(19,0.3387718);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(22,0.3222584);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(26,0.438694);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05967807);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1771563);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01754354);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1031326);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.576137);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.872638);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.255005);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.636883);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.423093);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.453081);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.552363);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.819065);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.258936);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.062435);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.692341);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.046845);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.216334);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.54857);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.463049);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.485684);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5073301);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.9106729);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2926652);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.1895681);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1153349);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.1841702);
   hNCpi0inFVres_stack_7->SetBinError(2,0.05238498);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2924032);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4256938);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5975176);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4195777);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5087716);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7020791);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5973521);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4443126);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4218808);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6892667);
   hNCpi0inFVres_stack_7->SetBinError(13,1.067072);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8118574);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4379508);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4601062);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5630701);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9187822);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2985231);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5862728);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1624138);
   hNCpi0inFVres_stack_7->SetBinError(22,0.07927706);
   hNCpi0inFVres_stack_7->SetBinError(23,0.07142288);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinError(26,0.0703683);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.007068991);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.387423);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.815187);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.118012);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.268621);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.153133);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.103604);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.284062);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.022022);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.725331);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.239457);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.691671);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.192245);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.042193);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.053417);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.246517);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.556777);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.513427);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.272965);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5525475);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.9220495);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.42938);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.3225758);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.107491);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.007068991);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3567392);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4528757);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4124266);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4381261);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.420228);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3911331);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.459804);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4522058);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8296443);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4852741);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7948468);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5132088);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5680846);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.717245);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7456768);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8465347);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4883332);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4604395);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2412663);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3107346);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6690661);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1322452);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4454617);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(2,10.23681);
   hCCpi0inFV_stack_10->SetBinContent(3,55.83543);
   hCCpi0inFV_stack_10->SetBinContent(4,152.9058);
   hCCpi0inFV_stack_10->SetBinContent(5,247.7545);
   hCCpi0inFV_stack_10->SetBinContent(6,341.3159);
   hCCpi0inFV_stack_10->SetBinContent(7,360.0659);
   hCCpi0inFV_stack_10->SetBinContent(8,338.0336);
   hCCpi0inFV_stack_10->SetBinContent(9,301.0898);
   hCCpi0inFV_stack_10->SetBinContent(10,268.1573);
   hCCpi0inFV_stack_10->SetBinContent(11,212.0654);
   hCCpi0inFV_stack_10->SetBinContent(12,186.0972);
   hCCpi0inFV_stack_10->SetBinContent(13,155.8342);
   hCCpi0inFV_stack_10->SetBinContent(14,123.686);
   hCCpi0inFV_stack_10->SetBinContent(15,99.14227);
   hCCpi0inFV_stack_10->SetBinContent(16,74.23439);
   hCCpi0inFV_stack_10->SetBinContent(17,60.82004);
   hCCpi0inFV_stack_10->SetBinContent(18,47.83197);
   hCCpi0inFV_stack_10->SetBinContent(19,36.15237);
   hCCpi0inFV_stack_10->SetBinContent(20,32.58118);
   hCCpi0inFV_stack_10->SetBinContent(21,19.15436);
   hCCpi0inFV_stack_10->SetBinContent(22,22.08332);
   hCCpi0inFV_stack_10->SetBinContent(23,13.79103);
   hCCpi0inFV_stack_10->SetBinContent(24,12.55418);
   hCCpi0inFV_stack_10->SetBinContent(25,11.24292);
   hCCpi0inFV_stack_10->SetBinContent(26,60.92083);
   hCCpi0inFV_stack_10->SetBinError(1,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(2,1.65857);
   hCCpi0inFV_stack_10->SetBinError(3,3.709925);
   hCCpi0inFV_stack_10->SetBinError(4,6.219921);
   hCCpi0inFV_stack_10->SetBinError(5,7.963284);
   hCCpi0inFV_stack_10->SetBinError(6,9.327012);
   hCCpi0inFV_stack_10->SetBinError(7,9.537213);
   hCCpi0inFV_stack_10->SetBinError(8,9.231811);
   hCCpi0inFV_stack_10->SetBinError(9,8.712675);
   hCCpi0inFV_stack_10->SetBinError(10,8.236285);
   hCCpi0inFV_stack_10->SetBinError(11,7.401495);
   hCCpi0inFV_stack_10->SetBinError(12,6.854263);
   hCCpi0inFV_stack_10->SetBinError(13,6.287913);
   hCCpi0inFV_stack_10->SetBinError(14,5.589493);
   hCCpi0inFV_stack_10->SetBinError(15,5.014363);
   hCCpi0inFV_stack_10->SetBinError(16,4.343087);
   hCCpi0inFV_stack_10->SetBinError(17,3.888752);
   hCCpi0inFV_stack_10->SetBinError(18,3.552459);
   hCCpi0inFV_stack_10->SetBinError(19,3.028412);
   hCCpi0inFV_stack_10->SetBinError(20,2.874316);
   hCCpi0inFV_stack_10->SetBinError(21,2.176182);
   hCCpi0inFV_stack_10->SetBinError(22,2.401509);
   hCCpi0inFV_stack_10->SetBinError(23,1.804328);
   hCCpi0inFV_stack_10->SetBinError(24,1.788022);
   hCCpi0inFV_stack_10->SetBinError(25,1.719036);
   hCCpi0inFV_stack_10->SetBinError(26,3.959664);
   hCCpi0inFV_stack_10->SetEntries(13818);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.536893);
   hNCinFV_stack_11->SetBinContent(4,0.8557585);
   hNCinFV_stack_11->SetBinContent(5,1.955414);
   hNCinFV_stack_11->SetBinContent(6,2.28655);
   hNCinFV_stack_11->SetBinContent(7,2.523538);
   hNCinFV_stack_11->SetBinContent(8,2.070267);
   hNCinFV_stack_11->SetBinContent(9,2.480061);
   hNCinFV_stack_11->SetBinContent(10,4.777157);
   hNCinFV_stack_11->SetBinContent(11,3.120426);
   hNCinFV_stack_11->SetBinContent(12,1.646922);
   hNCinFV_stack_11->SetBinContent(13,1.865931);
   hNCinFV_stack_11->SetBinContent(14,1.318228);
   hNCinFV_stack_11->SetBinContent(15,1.935141);
   hNCinFV_stack_11->SetBinContent(16,1.262788);
   hNCinFV_stack_11->SetBinContent(17,3.254858);
   hNCinFV_stack_11->SetBinContent(18,1.9682);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,1.283902);
   hNCinFV_stack_11->SetBinContent(21,1.444707);
   hNCinFV_stack_11->SetBinContent(22,1.285011);
   hNCinFV_stack_11->SetBinContent(23,0.9286332);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.3917402);
   hNCinFV_stack_11->SetBinContent(26,1.715495);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.3929602);
   hNCinFV_stack_11->SetBinError(4,0.4561089);
   hNCinFV_stack_11->SetBinError(5,0.7323267);
   hNCinFV_stack_11->SetBinError(6,0.9001654);
   hNCinFV_stack_11->SetBinError(7,0.7808909);
   hNCinFV_stack_11->SetBinError(8,0.7700501);
   hNCinFV_stack_11->SetBinError(9,0.7356141);
   hNCinFV_stack_11->SetBinError(10,1.235098);
   hNCinFV_stack_11->SetBinError(11,0.8984671);
   hNCinFV_stack_11->SetBinError(12,0.634399);
   hNCinFV_stack_11->SetBinError(13,0.726916);
   hNCinFV_stack_11->SetBinError(14,0.6712097);
   hNCinFV_stack_11->SetBinError(15,0.6397411);
   hNCinFV_stack_11->SetBinError(16,0.8254338);
   hNCinFV_stack_11->SetBinError(17,1.386448);
   hNCinFV_stack_11->SetBinError(18,0.7982564);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.7042284);
   hNCinFV_stack_11->SetBinError(21,0.7944814);
   hNCinFV_stack_11->SetBinError(22,0.6607223);
   hNCinFV_stack_11->SetBinError(23,0.48078);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.2770047);
   hNCinFV_stack_11->SetBinError(26,0.6212384);
   hNCinFV_stack_11->SetEntries(163);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(1,3.453731);
   hnumuCCinFV_stack_12->SetBinContent(2,14.53879);
   hnumuCCinFV_stack_12->SetBinContent(3,35.13743);
   hnumuCCinFV_stack_12->SetBinContent(4,53.39056);
   hnumuCCinFV_stack_12->SetBinContent(5,72.29605);
   hnumuCCinFV_stack_12->SetBinContent(6,87.62843);
   hnumuCCinFV_stack_12->SetBinContent(7,94.10867);
   hnumuCCinFV_stack_12->SetBinContent(8,94.62433);
   hnumuCCinFV_stack_12->SetBinContent(9,101.853);
   hnumuCCinFV_stack_12->SetBinContent(10,91.27749);
   hnumuCCinFV_stack_12->SetBinContent(11,81.27312);
   hnumuCCinFV_stack_12->SetBinContent(12,66.29924);
   hnumuCCinFV_stack_12->SetBinContent(13,69.32378);
   hnumuCCinFV_stack_12->SetBinContent(14,57.32367);
   hnumuCCinFV_stack_12->SetBinContent(15,46.87032);
   hnumuCCinFV_stack_12->SetBinContent(16,38.47306);
   hnumuCCinFV_stack_12->SetBinContent(17,38.93273);
   hnumuCCinFV_stack_12->SetBinContent(18,27.33685);
   hnumuCCinFV_stack_12->SetBinContent(19,27.43731);
   hnumuCCinFV_stack_12->SetBinContent(20,19.23014);
   hnumuCCinFV_stack_12->SetBinContent(21,17.28577);
   hnumuCCinFV_stack_12->SetBinContent(22,13.73955);
   hnumuCCinFV_stack_12->SetBinContent(23,12.52836);
   hnumuCCinFV_stack_12->SetBinContent(24,11.89425);
   hnumuCCinFV_stack_12->SetBinContent(25,4.60621);
   hnumuCCinFV_stack_12->SetBinContent(26,52.82445);
   hnumuCCinFV_stack_12->SetBinError(0,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(1,1.897945);
   hnumuCCinFV_stack_12->SetBinError(2,1.970983);
   hnumuCCinFV_stack_12->SetBinError(3,3.40249);
   hnumuCCinFV_stack_12->SetBinError(4,4.125551);
   hnumuCCinFV_stack_12->SetBinError(5,5.24635);
   hnumuCCinFV_stack_12->SetBinError(6,5.456605);
   hnumuCCinFV_stack_12->SetBinError(7,5.188671);
   hnumuCCinFV_stack_12->SetBinError(8,5.191867);
   hnumuCCinFV_stack_12->SetBinError(9,5.30883);
   hnumuCCinFV_stack_12->SetBinError(10,6.313239);
   hnumuCCinFV_stack_12->SetBinError(11,4.533193);
   hnumuCCinFV_stack_12->SetBinError(12,4.467404);
   hnumuCCinFV_stack_12->SetBinError(13,4.513137);
   hnumuCCinFV_stack_12->SetBinError(14,3.836683);
   hnumuCCinFV_stack_12->SetBinError(15,3.460929);
   hnumuCCinFV_stack_12->SetBinError(16,3.247994);
   hnumuCCinFV_stack_12->SetBinError(17,3.38392);
   hnumuCCinFV_stack_12->SetBinError(18,2.629114);
   hnumuCCinFV_stack_12->SetBinError(19,2.674896);
   hnumuCCinFV_stack_12->SetBinError(20,2.236121);
   hnumuCCinFV_stack_12->SetBinError(21,2.111387);
   hnumuCCinFV_stack_12->SetBinError(22,1.852348);
   hnumuCCinFV_stack_12->SetBinError(23,1.798755);
   hnumuCCinFV_stack_12->SetBinError(24,1.724584);
   hnumuCCinFV_stack_12->SetBinError(25,1.001034);
   hnumuCCinFV_stack_12->SetBinError(26,3.68841);
   hnumuCCinFV_stack_12->SetEntries(5121);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.970368);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(13,0.9568903);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,1.001686);
   hnueCCinFV_stack_13->SetBinContent(16,1.268811);
   hnueCCinFV_stack_13->SetBinContent(17,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(18,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.217248);
   hnueCCinFV_stack_13->SetBinContent(24,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(26,1.807394);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.4993105);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(13,0.5758265);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.5147626);
   hnueCCinFV_stack_13->SetBinError(16,0.5889569);
   hnueCCinFV_stack_13->SetBinError(17,0.4810838);
   hnueCCinFV_stack_13->SetBinError(18,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.6211758);
   hnueCCinFV_stack_13->SetBinError(24,0.3397478);
   hnueCCinFV_stack_13->SetBinError(26,0.7084844);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__8->SetBinContent(0,0.7336084);
   hmcerror__8->SetBinContent(1,4.237212);
   hmcerror__8->SetBinContent(2,28.34436);
   hmcerror__8->SetBinContent(3,102.6227);
   hmcerror__8->SetBinContent(4,218.6044);
   hmcerror__8->SetBinContent(5,342.7215);
   hmcerror__8->SetBinContent(6,452.3237);
   hmcerror__8->SetBinContent(7,476.5629);
   hmcerror__8->SetBinContent(8,456.6729);
   hmcerror__8->SetBinContent(9,432.2104);
   hmcerror__8->SetBinContent(10,382.4664);
   hmcerror__8->SetBinContent(11,314.445);
   hmcerror__8->SetBinContent(12,268.9666);
   hmcerror__8->SetBinContent(13,243.4928);
   hmcerror__8->SetBinContent(14,201.5966);
   hmcerror__8->SetBinContent(15,159.3535);
   hmcerror__8->SetBinContent(16,126.3488);
   hmcerror__8->SetBinContent(17,113.4597);
   hmcerror__8->SetBinContent(18,88.04405);
   hmcerror__8->SetBinContent(19,69.08082);
   hmcerror__8->SetBinContent(20,55.9967);
   hmcerror__8->SetBinContent(21,39.65776);
   hmcerror__8->SetBinContent(22,42.61771);
   hmcerror__8->SetBinContent(23,31.78351);
   hmcerror__8->SetBinContent(24,25.66376);
   hmcerror__8->SetBinContent(25,17.58231);
   hmcerror__8->SetBinContent(26,132.4345);
   hmcerror__8->SetBinError(0,0.4394482);
   hmcerror__8->SetBinError(1,3.032774);
   hmcerror__8->SetBinError(2,6.174173);
   hmcerror__8->SetBinError(3,20.74545);
   hmcerror__8->SetBinError(4,50.96757);
   hmcerror__8->SetBinError(5,81.8199);
   hmcerror__8->SetBinError(6,107.4212);
   hmcerror__8->SetBinError(7,121.9377);
   hmcerror__8->SetBinError(8,121.0466);
   hmcerror__8->SetBinError(9,104.7372);
   hmcerror__8->SetBinError(10,95.55299);
   hmcerror__8->SetBinError(11,79.10122);
   hmcerror__8->SetBinError(12,65.00724);
   hmcerror__8->SetBinError(13,59.93977);
   hmcerror__8->SetBinError(14,48.58291);
   hmcerror__8->SetBinError(15,39.02065);
   hmcerror__8->SetBinError(16,30.95003);
   hmcerror__8->SetBinError(17,26.73327);
   hmcerror__8->SetBinError(18,20.59531);
   hmcerror__8->SetBinError(19,17.86167);
   hmcerror__8->SetBinError(20,14.01651);
   hmcerror__8->SetBinError(21,9.205655);
   hmcerror__8->SetBinError(22,10.33435);
   hmcerror__8->SetBinError(23,7.137042);
   hmcerror__8->SetBinError(24,5.666807);
   hmcerror__8->SetBinError(25,5.056045);
   hmcerror__8->SetBinError(26,21.13038);
   hmcerror__8->SetEntries(4776.799);

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
   Double_t _fy3009[25] = {
   1,
   42,
   142,
   271,
   374,
   411,
   453,
   442,
   370,
   342,
   265,
   239,
   190,
   168,
   134,
   108,
   87,
   73,
   73,
   44,
   40,
   30,
   16,
   24,
   19};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   1,
   6.6155,
   11.91638,
   16.46208,
   19.33908,
   20.27313,
   21.2838,
   21.0238,
   19.23538,
   18.49324,
   16.27882,
   15.45962,
   13.78405,
   12.96148,
   11.57584,
   10.3923,
   9.4503,
   8.6693,
   8.6693,
   6.7671,
   6.4604,
   5.6197,
   4.1628,
   5.0476,
   4.5151};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   1.35971,
   6.4104,
   11.91638,
   16.46208,
   19.33908,
   20.27313,
   21.2838,
   21.0238,
   19.23538,
   18.49324,
   16.27882,
   15.45962,
   13.78405,
   12.96148,
   11.57584,
   10.3923,
   9.2488,
   8.4672,
   8.4672,
   6.5623,
   6.2549,
   5.4117,
   3.9454,
   4.837,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1980);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(521.7122);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=31.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4358.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 110.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 55.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  43.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3183.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 39.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1180.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.7157477,
   0.2178272,
   0.2021526,
   0.2331498,
   0.2387358,
   0.2374874,
   0.2558692,
   0.2650619,
   0.2423291,
   0.2498337,
   0.2515582,
   0.2416926,
   0.2461665,
   0.2409907,
   0.2448685,
   0.2449571,
   0.2356191,
   0.2339205,
   0.258562,
   0.2503096,
   0.2321275,
   0.2424895,
   0.2245517,
   0.2208098,
   0.2875644};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   0.7157477,
   0.2178272,
   0.2021526,
   0.2331498,
   0.2387358,
   0.2374874,
   0.2558692,
   0.2650619,
   0.2423291,
   0.2498337,
   0.2515582,
   0.2416926,
   0.2461665,
   0.2409907,
   0.2448685,
   0.2449571,
   0.2356191,
   0.2339205,
   0.258562,
   0.2503096,
   0.2321275,
   0.2424895,
   0.2245517,
   0.2208098,
   0.2875644};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1980);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   Double_t _fely3011[25] = {
   0.7157477,
   0.2178272,
   0.2021526,
   0.2331498,
   0.2387358,
   0.2374874,
   0.2558692,
   0.2650619,
   0.2423291,
   0.2498337,
   0.2515582,
   0.2416926,
   0.2461665,
   0.2409907,
   0.2448685,
   0.2449571,
   0.2356191,
   0.2339205,
   0.258562,
   0.2503096,
   0.2321275,
   0.2424895,
   0.2245517,
   0.2208098,
   0.2875644};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   0.7157477,
   0.2178272,
   0.2021526,
   0.2331498,
   0.2387358,
   0.2374874,
   0.2558692,
   0.2650619,
   0.2423291,
   0.2498337,
   0.2515582,
   0.2416926,
   0.2461665,
   0.2409907,
   0.2448685,
   0.2449571,
   0.2356191,
   0.2339205,
   0.258562,
   0.2503096,
   0.2321275,
   0.2424895,
   0.2245517,
   0.2208098,
   0.2875644};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1980);
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
   Double_t _fy3012[25] = {
   0.2360043,
   1.481776,
   1.383709,
   1.239682,
   1.091265,
   0.9086414,
   0.9505566,
   0.9678699,
   0.8560644,
   0.8941962,
   0.8427548,
   0.8885862,
   0.7803105,
   0.8333473,
   0.8408978,
   0.8547767,
   0.7667922,
   0.8291304,
   1.056733,
   0.7857606,
   1.00863,
   0.7039326,
   0.5034057,
   0.935171,
   1.080632};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   0.2360043,
   0.2333974,
   0.1161183,
   0.07530534,
   0.05642797,
   0.04481997,
   0.04466104,
   0.04603688,
   0.04450467,
   0.04835259,
   0.05177001,
   0.05747786,
   0.05660967,
   0.06429414,
   0.0726425,
   0.08225093,
   0.08329214,
   0.09846548,
   0.125495,
   0.1208482,
   0.1629038,
   0.131863,
   0.1309736,
   0.196682,
   0.2567979};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   0.3208973,
   0.2261614,
   0.1161183,
   0.07530534,
   0.05642797,
   0.04481997,
   0.04466104,
   0.04603688,
   0.04450467,
   0.04835259,
   0.05177001,
   0.05747786,
   0.05660967,
   0.06429414,
   0.0726425,
   0.08225093,
   0.08151618,
   0.09617004,
   0.1225695,
   0.1171908,
   0.157722,
   0.1269824,
   0.1241335,
   0.1884759,
   0.2446266};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1980);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.878731);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
