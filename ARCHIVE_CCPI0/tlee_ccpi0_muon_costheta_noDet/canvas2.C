#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 22:15:16 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-1.307692,-7.950753,1.25641,879.1859);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hmc__4->SetBinContent(1,16.3508);
   hmc__4->SetBinContent(2,18.41721);
   hmc__4->SetBinContent(3,21.78519);
   hmc__4->SetBinContent(4,21.72252);
   hmc__4->SetBinContent(5,28.33048);
   hmc__4->SetBinContent(6,29.8595);
   hmc__4->SetBinContent(7,33.56676);
   hmc__4->SetBinContent(8,35.52343);
   hmc__4->SetBinContent(9,35.70402);
   hmc__4->SetBinContent(10,45.58338);
   hmc__4->SetBinContent(11,46.4128);
   hmc__4->SetBinContent(12,54.76321);
   hmc__4->SetBinContent(13,73.3656);
   hmc__4->SetBinContent(14,77.73938);
   hmc__4->SetBinContent(15,78.91702);
   hmc__4->SetBinContent(16,93.77337);
   hmc__4->SetBinContent(17,108.9625);
   hmc__4->SetBinContent(18,119.3915);
   hmc__4->SetBinContent(19,132.0065);
   hmc__4->SetBinContent(20,159.769);
   hmc__4->SetBinContent(21,184.1788);
   hmc__4->SetBinContent(22,219.2593);
   hmc__4->SetBinContent(23,303.6038);
   hmc__4->SetBinContent(24,379.9557);
   hmc__4->SetBinContent(25,397.5376);
   hmc__4->SetBinError(1,4.797854);
   hmc__4->SetBinError(2,5.860775);
   hmc__4->SetBinError(3,7.072063);
   hmc__4->SetBinError(4,6.86295);
   hmc__4->SetBinError(5,9.065931);
   hmc__4->SetBinError(6,8.575617);
   hmc__4->SetBinError(7,8.653546);
   hmc__4->SetBinError(8,9.474184);
   hmc__4->SetBinError(9,10.22732);
   hmc__4->SetBinError(10,13.92915);
   hmc__4->SetBinError(11,12.60189);
   hmc__4->SetBinError(12,15.73313);
   hmc__4->SetBinError(13,20.06425);
   hmc__4->SetBinError(14,22.633);
   hmc__4->SetBinError(15,19.55116);
   hmc__4->SetBinError(16,24.50704);
   hmc__4->SetBinError(17,27.30604);
   hmc__4->SetBinError(18,27.77352);
   hmc__4->SetBinError(19,30.23126);
   hmc__4->SetBinError(20,37.55417);
   hmc__4->SetBinError(21,45.70253);
   hmc__4->SetBinError(22,48.53989);
   hmc__4->SetBinError(23,68.75376);
   hmc__4->SetBinError(24,83.36966);
   hmc__4->SetBinError(25,88.95767);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-7.950753);
   hmc__4->SetMaximum(834.829);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-1,1);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(417.4145);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(10,0.6353733);
   hbadmatch_stack_1->SetBinContent(11,0.2112621);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.3948367);
   hbadmatch_stack_1->SetBinContent(15,0.5901461);
   hbadmatch_stack_1->SetBinContent(16,0.1028101);
   hbadmatch_stack_1->SetBinContent(17,0.8350855);
   hbadmatch_stack_1->SetBinContent(18,0.9303237);
   hbadmatch_stack_1->SetBinContent(19,1.268811);
   hbadmatch_stack_1->SetBinContent(20,0.5738525);
   hbadmatch_stack_1->SetBinContent(21,2.41199);
   hbadmatch_stack_1->SetBinContent(22,1.645962);
   hbadmatch_stack_1->SetBinContent(23,2.355635);
   hbadmatch_stack_1->SetBinContent(24,2.103854);
   hbadmatch_stack_1->SetBinContent(25,1.420152);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(10,0.368687);
   hbadmatch_stack_1->SetBinError(11,0.211233);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.3948367);
   hbadmatch_stack_1->SetBinError(15,0.340721);
   hbadmatch_stack_1->SetBinError(16,0.1028101);
   hbadmatch_stack_1->SetBinError(17,0.4200349);
   hbadmatch_stack_1->SetBinError(18,0.4814682);
   hbadmatch_stack_1->SetBinError(19,0.5889569);
   hbadmatch_stack_1->SetBinError(20,0.4127042);
   hbadmatch_stack_1->SetBinError(21,0.8422144);
   hbadmatch_stack_1->SetBinError(22,0.6916501);
   hbadmatch_stack_1->SetBinError(23,0.842407);
   hbadmatch_stack_1->SetBinError(24,0.6792233);
   hbadmatch_stack_1->SetBinError(25,0.6534747);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(2,0.9660115);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(8,2.566457);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(12,0.8131978);
   hext_stack_2->SetBinContent(13,1.461993);
   hext_stack_2->SetBinContent(14,0.973192);
   hext_stack_2->SetBinContent(15,1.379791);
   hext_stack_2->SetBinContent(16,1.219797);
   hext_stack_2->SetBinContent(17,3.856865);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,1.544194);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(2,0.7189592);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(8,1.283228);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(12,0.5750177);
   hext_stack_2->SetBinError(13,0.7356036);
   hext_stack_2->SetBinError(14,0.5618727);
   hext_stack_2->SetBinError(15,0.6935586);
   hext_stack_2->SetBinError(16,0.7042499);
   hext_stack_2->SetBinError(17,1.506257);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.7753719);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(22,0.2574102);
   hdirt_stack_3->SetBinContent(23,0.2544535);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(22,0.2574102);
   hdirt_stack_3->SetBinError(23,0.2544535);
   hdirt_stack_3->SetBinError(25,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(5,0.4466998);
   houtFV_stack_4->SetBinContent(6,0.5954295);
   houtFV_stack_4->SetBinContent(7,0.2439067);
   houtFV_stack_4->SetBinContent(10,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.07552768);
   houtFV_stack_4->SetBinContent(13,0.4398267);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.3008363);
   houtFV_stack_4->SetBinContent(19,0.5352025);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.1950248);
   houtFV_stack_4->SetBinContent(23,0.785171);
   houtFV_stack_4->SetBinContent(24,1.463836);
   houtFV_stack_4->SetBinContent(25,1.072095);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(5,0.3181024);
   houtFV_stack_4->SetBinError(6,0.4252933);
   houtFV_stack_4->SetBinError(7,0.2439067);
   houtFV_stack_4->SetBinError(10,0.1950249);
   houtFV_stack_4->SetBinError(11,0.07552768);
   houtFV_stack_4->SetBinError(13,0.3129898);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(18,0.3008363);
   houtFV_stack_4->SetBinError(19,0.3921167);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetBinError(22,0.1950249);
   houtFV_stack_4->SetBinError(23,0.3925882);
   houtFV_stack_4->SetBinError(24,0.620407);
   houtFV_stack_4->SetBinError(25,0.5551335);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03337679);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1691327);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.2193984);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.326783);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.3243275);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.2527035);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.632176);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.118052);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.6054606);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.144265);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.9115242);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.255984);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5356367);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.18417);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.239086);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.365223);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.430143);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.498369);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8465757);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.386397);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.802921);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.216264);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.224325);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.263129);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.408184);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.06195);
   hNCpi0inFVres_stack_7->SetBinContent(25,10.5522);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1272879);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1587838);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1521932);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1012755);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2117121);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3491538);
   hNCpi0inFVres_stack_7->SetBinError(7,0.2845461);
   hNCpi0inFVres_stack_7->SetBinError(8,0.386722);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3070412);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4479111);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1496168);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3860459);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3081916);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4650893);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4309068);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3491867);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2062228);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2552737);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3473033);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5884374);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5771318);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6351792);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8489156);
   hNCpi0inFVres_stack_7->SetBinError(24,1.307725);
   hNCpi0inFVres_stack_7->SetBinError(25,1.34766);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3421585);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5996506);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5016682);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8150762);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.8927832);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.4897275);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.7058012);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.06438965);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.254677);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.514825);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.892558);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8117323);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.29328);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8104803);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.694267);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8044854);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.086894);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.542768);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.374675);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.265474);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.495415);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.024888);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.68097);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.026367);
   hNCpi0inFVdis_stack_8->SetBinContent(25,11.74246);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1330328);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3508283);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2236254);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3372546);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3385744);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1710457);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2835489);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.03224245);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1115332);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.194556);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3181695);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3336836);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4055096);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2946813);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.883511);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2281238);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.344762);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5011115);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3831474);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5494912);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6091725);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8028698);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.732368);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9160458);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.342711);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,9.102277);
   hCCpi0inFV_stack_10->SetBinContent(2,11.47761);
   hCCpi0inFV_stack_10->SetBinContent(3,16.41553);
   hCCpi0inFV_stack_10->SetBinContent(4,16.85297);
   hCCpi0inFV_stack_10->SetBinContent(5,19.7178);
   hCCpi0inFV_stack_10->SetBinContent(6,22.87049);
   hCCpi0inFV_stack_10->SetBinContent(7,23.31184);
   hCCpi0inFV_stack_10->SetBinContent(8,25.58115);
   hCCpi0inFV_stack_10->SetBinContent(9,28.64456);
   hCCpi0inFV_stack_10->SetBinContent(10,32.13503);
   hCCpi0inFV_stack_10->SetBinContent(11,34.98799);
   hCCpi0inFV_stack_10->SetBinContent(12,43.4381);
   hCCpi0inFV_stack_10->SetBinContent(13,54.89735);
   hCCpi0inFV_stack_10->SetBinContent(14,60.07766);
   hCCpi0inFV_stack_10->SetBinContent(15,62.01773);
   hCCpi0inFV_stack_10->SetBinContent(16,76.09563);
   hCCpi0inFV_stack_10->SetBinContent(17,87.28945);
   hCCpi0inFV_stack_10->SetBinContent(18,93.11522);
   hCCpi0inFV_stack_10->SetBinContent(19,105.2034);
   hCCpi0inFV_stack_10->SetBinContent(20,129.2079);
   hCCpi0inFV_stack_10->SetBinContent(21,151.4699);
   hCCpi0inFV_stack_10->SetBinContent(22,176.1465);
   hCCpi0inFV_stack_10->SetBinContent(23,244.8898);
   hCCpi0inFV_stack_10->SetBinContent(24,307.9771);
   hCCpi0inFV_stack_10->SetBinContent(25,311.8965);
   hCCpi0inFV_stack_10->SetBinError(1,1.556552);
   hCCpi0inFV_stack_10->SetBinError(2,1.715993);
   hCCpi0inFV_stack_10->SetBinError(3,2.067869);
   hCCpi0inFV_stack_10->SetBinError(4,2.039462);
   hCCpi0inFV_stack_10->SetBinError(5,2.285678);
   hCCpi0inFV_stack_10->SetBinError(6,2.415634);
   hCCpi0inFV_stack_10->SetBinError(7,2.487779);
   hCCpi0inFV_stack_10->SetBinError(8,2.565288);
   hCCpi0inFV_stack_10->SetBinError(9,2.706514);
   hCCpi0inFV_stack_10->SetBinError(10,2.79482);
   hCCpi0inFV_stack_10->SetBinError(11,2.971671);
   hCCpi0inFV_stack_10->SetBinError(12,3.30201);
   hCCpi0inFV_stack_10->SetBinError(13,3.707028);
   hCCpi0inFV_stack_10->SetBinError(14,3.907678);
   hCCpi0inFV_stack_10->SetBinError(15,3.998421);
   hCCpi0inFV_stack_10->SetBinError(16,4.396592);
   hCCpi0inFV_stack_10->SetBinError(17,4.705531);
   hCCpi0inFV_stack_10->SetBinError(18,4.814295);
   hCCpi0inFV_stack_10->SetBinError(19,5.163645);
   hCCpi0inFV_stack_10->SetBinError(20,5.709486);
   hCCpi0inFV_stack_10->SetBinError(21,6.143165);
   hCCpi0inFV_stack_10->SetBinError(22,6.601926);
   hCCpi0inFV_stack_10->SetBinError(23,7.892136);
   hCCpi0inFV_stack_10->SetBinError(24,8.846086);
   hCCpi0inFV_stack_10->SetBinError(25,8.841782);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.3917402);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,0.3934307);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(7,0.5884556);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(11,1.412273);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(13,1.463836);
   hNCinFV_stack_11->SetBinContent(14,1.125349);
   hNCinFV_stack_11->SetBinContent(16,0.8770706);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinContent(18,1.268811);
   hNCinFV_stack_11->SetBinContent(19,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,1.465526);
   hNCinFV_stack_11->SetBinContent(21,1.413964);
   hNCinFV_stack_11->SetBinContent(22,3.17764);
   hNCinFV_stack_11->SetBinContent(23,3.034178);
   hNCinFV_stack_11->SetBinContent(24,5.958468);
   hNCinFV_stack_11->SetBinContent(25,2.394159);
   hNCinFV_stack_11->SetBinError(1,0.2770047);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.2781975);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(7,0.3397478);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(11,0.6510715);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(13,0.620407);
   hNCinFV_stack_11->SetBinError(14,0.5194673);
   hNCinFV_stack_11->SetBinError(16,0.5197486);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetBinError(18,0.5889569);
   hNCinFV_stack_11->SetBinError(19,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.6209405);
   hNCinFV_stack_11->SetBinError(21,0.6515799);
   hNCinFV_stack_11->SetBinError(22,0.8775989);
   hNCinFV_stack_11->SetBinError(23,0.8325598);
   hNCinFV_stack_11->SetBinError(24,1.208984);
   hNCinFV_stack_11->SetBinError(25,0.785313);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.295221);
   hnumuCCinFV_stack_12->SetBinContent(2,4.85044);
   hnumuCCinFV_stack_12->SetBinContent(3,4.006768);
   hnumuCCinFV_stack_12->SetBinContent(4,3.408341);
   hnumuCCinFV_stack_12->SetBinContent(5,5.92489);
   hnumuCCinFV_stack_12->SetBinContent(6,4.039022);
   hnumuCCinFV_stack_12->SetBinContent(7,7.717866);
   hnumuCCinFV_stack_12->SetBinContent(8,5.826983);
   hnumuCCinFV_stack_12->SetBinContent(9,5.228682);
   hnumuCCinFV_stack_12->SetBinContent(10,9.290479);
   hnumuCCinFV_stack_12->SetBinContent(11,7.648761);
   hnumuCCinFV_stack_12->SetBinContent(12,7.485214);
   hnumuCCinFV_stack_12->SetBinContent(13,12.17539);
   hnumuCCinFV_stack_12->SetBinContent(14,12.65555);
   hnumuCCinFV_stack_12->SetBinContent(15,10.80495);
   hnumuCCinFV_stack_12->SetBinContent(16,12.18179);
   hnumuCCinFV_stack_12->SetBinContent(17,14.51073);
   hnumuCCinFV_stack_12->SetBinContent(18,19.81215);
   hnumuCCinFV_stack_12->SetBinContent(19,20.03818);
   hnumuCCinFV_stack_12->SetBinContent(20,21.97873);
   hnumuCCinFV_stack_12->SetBinContent(21,20.20681);
   hnumuCCinFV_stack_12->SetBinContent(22,27.82876);
   hnumuCCinFV_stack_12->SetBinContent(23,39.96056);
   hnumuCCinFV_stack_12->SetBinContent(24,42.38956);
   hnumuCCinFV_stack_12->SetBinContent(25,57.09827);
   hnumuCCinFV_stack_12->SetBinError(1,1.340369);
   hnumuCCinFV_stack_12->SetBinError(2,1.07643);
   hnumuCCinFV_stack_12->SetBinError(3,1.128538);
   hnumuCCinFV_stack_12->SetBinError(4,0.9516379);
   hnumuCCinFV_stack_12->SetBinError(5,1.267522);
   hnumuCCinFV_stack_12->SetBinError(6,0.9784314);
   hnumuCCinFV_stack_12->SetBinError(7,1.434439);
   hnumuCCinFV_stack_12->SetBinError(8,1.236902);
   hnumuCCinFV_stack_12->SetBinError(9,1.130033);
   hnumuCCinFV_stack_12->SetBinError(10,1.627663);
   hnumuCCinFV_stack_12->SetBinError(11,1.378778);
   hnumuCCinFV_stack_12->SetBinError(12,1.414019);
   hnumuCCinFV_stack_12->SetBinError(13,2.051138);
   hnumuCCinFV_stack_12->SetBinError(14,1.910466);
   hnumuCCinFV_stack_12->SetBinError(15,1.808338);
   hnumuCCinFV_stack_12->SetBinError(16,1.790989);
   hnumuCCinFV_stack_12->SetBinError(17,2.001825);
   hnumuCCinFV_stack_12->SetBinError(18,2.555765);
   hnumuCCinFV_stack_12->SetBinError(19,2.287423);
   hnumuCCinFV_stack_12->SetBinError(20,2.381108);
   hnumuCCinFV_stack_12->SetBinError(21,2.332071);
   hnumuCCinFV_stack_12->SetBinError(22,2.679386);
   hnumuCCinFV_stack_12->SetBinError(23,3.634511);
   hnumuCCinFV_stack_12->SetBinError(24,3.313514);
   hnumuCCinFV_stack_12->SetBinError(25,4.951641);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(18,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(25,0.7302274);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.3387718);
   hnueCCinFV_stack_13->SetBinError(18,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.438694);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.5197486);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.3397478);
   hnueCCinFV_stack_13->SetBinError(25,0.4379386);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(1,16.3508);
   hmcerror__5->SetBinContent(2,18.41721);
   hmcerror__5->SetBinContent(3,21.78519);
   hmcerror__5->SetBinContent(4,21.72252);
   hmcerror__5->SetBinContent(5,28.33048);
   hmcerror__5->SetBinContent(6,29.8595);
   hmcerror__5->SetBinContent(7,33.56676);
   hmcerror__5->SetBinContent(8,35.52343);
   hmcerror__5->SetBinContent(9,35.70402);
   hmcerror__5->SetBinContent(10,45.58338);
   hmcerror__5->SetBinContent(11,46.4128);
   hmcerror__5->SetBinContent(12,54.76321);
   hmcerror__5->SetBinContent(13,73.3656);
   hmcerror__5->SetBinContent(14,77.73938);
   hmcerror__5->SetBinContent(15,78.91702);
   hmcerror__5->SetBinContent(16,93.77337);
   hmcerror__5->SetBinContent(17,108.9625);
   hmcerror__5->SetBinContent(18,119.3915);
   hmcerror__5->SetBinContent(19,132.0065);
   hmcerror__5->SetBinContent(20,159.769);
   hmcerror__5->SetBinContent(21,184.1788);
   hmcerror__5->SetBinContent(22,219.2593);
   hmcerror__5->SetBinContent(23,303.6038);
   hmcerror__5->SetBinContent(24,379.9557);
   hmcerror__5->SetBinContent(25,397.5376);
   hmcerror__5->SetBinError(1,4.797854);
   hmcerror__5->SetBinError(2,5.860775);
   hmcerror__5->SetBinError(3,7.072063);
   hmcerror__5->SetBinError(4,6.86295);
   hmcerror__5->SetBinError(5,9.065931);
   hmcerror__5->SetBinError(6,8.575617);
   hmcerror__5->SetBinError(7,8.653546);
   hmcerror__5->SetBinError(8,9.474184);
   hmcerror__5->SetBinError(9,10.22732);
   hmcerror__5->SetBinError(10,13.92915);
   hmcerror__5->SetBinError(11,12.60189);
   hmcerror__5->SetBinError(12,15.73313);
   hmcerror__5->SetBinError(13,20.06425);
   hmcerror__5->SetBinError(14,22.633);
   hmcerror__5->SetBinError(15,19.55116);
   hmcerror__5->SetBinError(16,24.50704);
   hmcerror__5->SetBinError(17,27.30604);
   hmcerror__5->SetBinError(18,27.77352);
   hmcerror__5->SetBinError(19,30.23126);
   hmcerror__5->SetBinError(20,37.55417);
   hmcerror__5->SetBinError(21,45.70253);
   hmcerror__5->SetBinError(22,48.53989);
   hmcerror__5->SetBinError(23,68.75376);
   hmcerror__5->SetBinError(24,83.36966);
   hmcerror__5->SetBinError(25,88.95767);
   hmcerror__5->SetBinError(26,0.3895343);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3005[25] = {
   18,
   11,
   27,
   29,
   20,
   19,
   38,
   42,
   48,
   42,
   67,
   53,
   82,
   58,
   87,
   109,
   92,
   101,
   128,
   164,
   170,
   190,
   244,
   341,
   318};
   Double_t _felx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3005[25] = {
   4.4008,
   3.4975,
   5.3414,
   5.5285,
   4.6266,
   4.5151,
   6.3013,
   6.6155,
   7.0604,
   6.6155,
   8.3119,
   7.4105,
   9.1791,
   7.7446,
   9.4503,
   10.44031,
   9.7138,
   10.04988,
   11.31371,
   12.80625,
   13.0384,
   13.78405,
   15.6205,
   18.46619,
   17.83255};
   Double_t _fehx3005[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3005[25] = {
   4.1858,
   3.27,
   5.1322,
   5.3201,
   4.4133,
   4.3011,
   6.0955,
   6.4104,
   6.8561,
   6.4104,
   8.1094,
   7.2068,
   8.9774,
   7.5415,
   9.2488,
   10.44031,
   9.513,
   10.04988,
   11.31371,
   12.80625,
   13.0384,
   13.78405,
   15.6205,
   18.46619,
   17.83255};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(6.75225);
   Graph_Graph3005->SetMaximum(394.6626);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=34.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2498.0","lp");
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2144.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 383.4","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_muon_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3006[25] = {
   0.2934324,
   0.3182228,
   0.3246271,
   0.315937,
   0.3200062,
   0.287199,
   0.2578011,
   0.2667024,
   0.2864473,
   0.3055753,
   0.2715174,
   0.2872938,
   0.2734831,
   0.2911394,
   0.2477432,
   0.2613433,
   0.2506004,
   0.2326255,
   0.2290135,
   0.235053,
   0.2481421,
   0.2213812,
   0.2264588,
   0.2194194,
   0.2237717};
   Double_t _fehx3006[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3006[25] = {
   0.2934324,
   0.3182228,
   0.3246271,
   0.315937,
   0.3200062,
   0.287199,
   0.2578011,
   0.2667024,
   0.2864473,
   0.3055753,
   0.2715174,
   0.2872938,
   0.2734831,
   0.2911394,
   0.2477432,
   0.2613433,
   0.2506004,
   0.2326255,
   0.2290135,
   0.235053,
   0.2481421,
   0.2213812,
   0.2264588,
   0.2194194,
   0.2237717};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Muon cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3007[25] = {
   0.2934324,
   0.3182228,
   0.3246271,
   0.315937,
   0.3200062,
   0.287199,
   0.2578011,
   0.2667024,
   0.2864473,
   0.3055753,
   0.2715174,
   0.2872938,
   0.2734831,
   0.2911394,
   0.2477432,
   0.2613433,
   0.2506004,
   0.2326255,
   0.2290135,
   0.235053,
   0.2481421,
   0.2213812,
   0.2264588,
   0.2194194,
   0.2237717};
   Double_t _fehx3007[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3007[25] = {
   0.2934324,
   0.3182228,
   0.3246271,
   0.315937,
   0.3200062,
   0.287199,
   0.2578011,
   0.2667024,
   0.2864473,
   0.3055753,
   0.2715174,
   0.2872938,
   0.2734831,
   0.2911394,
   0.2477432,
   0.2613433,
   0.2506004,
   0.2326255,
   0.2290135,
   0.235053,
   0.2481421,
   0.2213812,
   0.2264588,
   0.2194194,
   0.2237717};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3008[25] = {
   1.100864,
   0.5972675,
   1.239374,
   1.33502,
   0.7059533,
   0.6363134,
   1.132072,
   1.182318,
   1.344387,
   0.9213885,
   1.443567,
   0.967803,
   1.11769,
   0.7460826,
   1.102424,
   1.162377,
   0.8443272,
   0.845956,
   0.9696494,
   1.026482,
   0.9230159,
   0.8665538,
   0.803679,
   0.897473,
   0.7999243};
   Double_t _felx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3008[25] = {
   0.269149,
   0.1899039,
   0.2451849,
   0.2545054,
   0.1633082,
   0.1512115,
   0.1877244,
   0.1862292,
   0.1977481,
   0.1451297,
   0.1790864,
   0.1353189,
   0.1251145,
   0.09962261,
   0.1197498,
   0.1113355,
   0.08914811,
   0.08417577,
   0.08570571,
   0.08015479,
   0.07079209,
   0.06286642,
   0.05145027,
   0.04860089,
   0.04485753};
   Double_t _fehx3008[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3008[25] = {
   0.2559998,
   0.1775513,
   0.2355821,
   0.2449117,
   0.1557792,
   0.1440446,
   0.1815933,
   0.1804556,
   0.192026,
   0.1406302,
   0.1747233,
   0.1315993,
   0.1223652,
   0.09701004,
   0.1171965,
   0.1113355,
   0.08730527,
   0.08417577,
   0.08570571,
   0.08015479,
   0.07079209,
   0.06286642,
   0.05145027,
   0.04860089,
   0.04485753};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.2862709);
   Graph_Graph3008->SetMaximum(1.739383);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_muon_costheta_all",25,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
