#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 16:54:35 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-25.04304,1692.308,2769.233);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hmc__1->SetBinContent(2,93.73682);
   hmc__1->SetBinContent(3,614.8339);
   hmc__1->SetBinContent(4,1034.147);
   hmc__1->SetBinContent(5,1252.152);
   hmc__1->SetBinContent(6,1082.337);
   hmc__1->SetBinContent(7,814.4346);
   hmc__1->SetBinContent(8,623.7165);
   hmc__1->SetBinContent(9,473.8644);
   hmc__1->SetBinContent(10,372.3182);
   hmc__1->SetBinContent(11,295.5186);
   hmc__1->SetBinContent(12,193.8888);
   hmc__1->SetBinContent(13,148.9444);
   hmc__1->SetBinContent(14,115.1951);
   hmc__1->SetBinContent(15,87.4456);
   hmc__1->SetBinContent(16,73.2118);
   hmc__1->SetBinContent(17,62.02886);
   hmc__1->SetBinContent(18,39.61349);
   hmc__1->SetBinContent(19,33.71775);
   hmc__1->SetBinContent(20,30.3164);
   hmc__1->SetBinContent(21,19.8892);
   hmc__1->SetBinContent(22,16.4762);
   hmc__1->SetBinContent(23,10.52966);
   hmc__1->SetBinContent(24,11.43744);
   hmc__1->SetBinContent(25,5.27534);
   hmc__1->SetBinContent(26,22.47469);
   hmc__1->SetBinError(1,0.3895343);
   hmc__1->SetBinError(2,18.9818);
   hmc__1->SetBinError(3,126.2981);
   hmc__1->SetBinError(4,229.3487);
   hmc__1->SetBinError(5,284.1144);
   hmc__1->SetBinError(6,254.1712);
   hmc__1->SetBinError(7,189.6331);
   hmc__1->SetBinError(8,144.2764);
   hmc__1->SetBinError(9,112.7956);
   hmc__1->SetBinError(10,88.5475);
   hmc__1->SetBinError(11,70.82016);
   hmc__1->SetBinError(12,47.65429);
   hmc__1->SetBinError(13,35.21242);
   hmc__1->SetBinError(14,28.42798);
   hmc__1->SetBinError(15,22.37528);
   hmc__1->SetBinError(16,18.64164);
   hmc__1->SetBinError(17,15.36578);
   hmc__1->SetBinError(18,10.11729);
   hmc__1->SetBinError(19,7.739261);
   hmc__1->SetBinError(20,8.229492);
   hmc__1->SetBinError(21,5.923894);
   hmc__1->SetBinError(22,4.531366);
   hmc__1->SetBinError(23,2.927392);
   hmc__1->SetBinError(24,5.462016);
   hmc__1->SetBinError(25,1.911976);
   hmc__1->SetBinError(26,5.428287);
   hmc__1->SetMinimum(-25.04304);
   hmc__1->SetMaximum(2629.52);
   hmc__1->SetEntries(7468.322);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-1.202048e-08);
   hs1_stack_1->SetMaximum(1314.76);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.123658);
   hbadmatch_stack_1->SetBinContent(3,4.781116);
   hbadmatch_stack_1->SetBinContent(4,7.891476);
   hbadmatch_stack_1->SetBinContent(5,8.338388);
   hbadmatch_stack_1->SetBinContent(6,4.555205);
   hbadmatch_stack_1->SetBinContent(7,3.002882);
   hbadmatch_stack_1->SetBinContent(8,0.9876927);
   hbadmatch_stack_1->SetBinContent(9,1.916326);
   hbadmatch_stack_1->SetBinContent(10,1.376319);
   hbadmatch_stack_1->SetBinContent(11,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.5188295);
   hbadmatch_stack_1->SetBinError(3,1.114401);
   hbadmatch_stack_1->SetBinError(4,1.407644);
   hbadmatch_stack_1->SetBinError(5,1.59927);
   hbadmatch_stack_1->SetBinError(6,1.196933);
   hbadmatch_stack_1->SetBinError(7,0.8571529);
   hbadmatch_stack_1->SetBinError(8,0.5313904);
   hbadmatch_stack_1->SetBinError(9,0.7166067);
   hbadmatch_stack_1->SetBinError(10,0.6470723);
   hbadmatch_stack_1->SetBinError(11,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,4.378797);
   hext_stack_2->SetBinContent(3,25.6427);
   hext_stack_2->SetBinContent(4,23.10931);
   hext_stack_2->SetBinContent(5,28.08941);
   hext_stack_2->SetBinContent(6,19.60437);
   hext_stack_2->SetBinContent(7,9.712016);
   hext_stack_2->SetBinContent(8,4.53161);
   hext_stack_2->SetBinContent(9,6.851462);
   hext_stack_2->SetBinContent(10,9.02291);
   hext_stack_2->SetBinContent(11,6.505524);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,2.890854);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(2,1.350755);
   hext_stack_2->SetBinError(3,3.435098);
   hext_stack_2->SetBinError(4,3.288458);
   hext_stack_2->SetBinError(5,3.731092);
   hext_stack_2->SetBinError(6,3.159708);
   hext_stack_2->SetBinError(7,2.057197);
   hext_stack_2->SetBinError(8,1.418025);
   hext_stack_2->SetBinError(9,1.864726);
   hext_stack_2->SetBinError(10,2.211894);
   hext_stack_2->SetBinError(11,1.993884);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,1.323597);
   hext_stack_2->SetBinError(17,0.7595995);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetEntries(323);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2665913);
   hdirt_stack_3->SetBinContent(3,1.402112);
   hdirt_stack_3->SetBinContent(4,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.9099721);
   hdirt_stack_3->SetBinContent(6,0.9390931);
   hdirt_stack_3->SetBinContent(7,1.464118);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.165896);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(2,0.2665913);
   hdirt_stack_3->SetBinError(3,0.55878);
   hdirt_stack_3->SetBinError(4,0.258803);
   hdirt_stack_3->SetBinError(5,0.4799114);
   hdirt_stack_3->SetBinError(6,0.5551728);
   hdirt_stack_3->SetBinError(7,0.5817952);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(11,0.165896);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
   hdirt_stack_3->SetEntries(30);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,2.054373);
   houtFV_stack_4->SetBinContent(3,13.94978);
   houtFV_stack_4->SetBinContent(4,9.273129);
   houtFV_stack_4->SetBinContent(5,9.924021);
   houtFV_stack_4->SetBinContent(6,7.135174);
   houtFV_stack_4->SetBinContent(7,6.018583);
   houtFV_stack_4->SetBinContent(8,4.82133);
   houtFV_stack_4->SetBinContent(9,2.082519);
   houtFV_stack_4->SetBinContent(10,0.8199336);
   houtFV_stack_4->SetBinContent(11,4.198168);
   houtFV_stack_4->SetBinContent(12,0.7817899);
   houtFV_stack_4->SetBinContent(13,1.518779);
   houtFV_stack_4->SetBinContent(14,0.5901461);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(2,0.7273384);
   houtFV_stack_4->SetBinError(3,1.854947);
   houtFV_stack_4->SetBinError(4,1.475279);
   houtFV_stack_4->SetBinError(5,1.679553);
   houtFV_stack_4->SetBinError(6,1.423546);
   houtFV_stack_4->SetBinError(7,1.297518);
   houtFV_stack_4->SetBinError(8,1.873014);
   houtFV_stack_4->SetBinError(9,0.7163376);
   houtFV_stack_4->SetBinError(10,0.410966);
   houtFV_stack_4->SetBinError(11,1.446797);
   houtFV_stack_4->SetBinError(12,0.3908977);
   houtFV_stack_4->SetBinError(13,0.5892709);
   houtFV_stack_4->SetBinError(14,0.340721);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(267);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08770081);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06592986);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1089254);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1668192);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5469028);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1257706);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2616268);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.597936);
   hNCpi0inFVres_stack_7->SetBinContent(3,19.90131);
   hNCpi0inFVres_stack_7->SetBinContent(4,24.87342);
   hNCpi0inFVres_stack_7->SetBinContent(5,21.48939);
   hNCpi0inFVres_stack_7->SetBinContent(6,13.01757);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.35765);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.672071);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.100485);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.9309418);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.486092);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2684887);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.6044402);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.3036436);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4340664);
   hNCpi0inFVres_stack_7->SetBinError(3,1.552794);
   hNCpi0inFVres_stack_7->SetBinError(4,1.744385);
   hNCpi0inFVres_stack_7->SetBinError(5,1.694262);
   hNCpi0inFVres_stack_7->SetBinError(6,1.17985);
   hNCpi0inFVres_stack_7->SetBinError(7,1.424531);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8924568);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5877014);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2802489);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4827806);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1503874);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5035613);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2509647);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01732447);
   hNCpi0inFVres_stack_7->SetEntries(2070);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.524235);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.72562);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.19795);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.2938);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.06592);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.160904);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.580047);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.453385);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.203006);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.25445);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6655096);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6486546);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.3821656);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1136578);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05306552);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8077101);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.485213);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.529113);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.752404);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.464257);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9801804);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8247996);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6900313);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.392088);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7198313);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2654814);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.386588);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2205655);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.07003108);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03757277);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.097318);
   hNCpi0inFVdis_stack_8->SetEntries(1636);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_Emuon_all",25,0,1500);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,50.0269);
   hCCpi0inFV_stack_10->SetBinContent(3,368.6061);
   hCCpi0inFV_stack_10->SetBinContent(4,757.4355);
   hCCpi0inFV_stack_10->SetBinContent(5,927.2129);
   hCCpi0inFV_stack_10->SetBinContent(6,821.2589);
   hCCpi0inFV_stack_10->SetBinContent(7,642.3879);
   hCCpi0inFV_stack_10->SetBinContent(8,519.3167);
   hCCpi0inFV_stack_10->SetBinContent(9,388.9404);
   hCCpi0inFV_stack_10->SetBinContent(10,302.2997);
   hCCpi0inFV_stack_10->SetBinContent(11,244.6592);
   hCCpi0inFV_stack_10->SetBinContent(12,156.5403);
   hCCpi0inFV_stack_10->SetBinContent(13,124.2201);
   hCCpi0inFV_stack_10->SetBinContent(14,95.37505);
   hCCpi0inFV_stack_10->SetBinContent(15,70.93128);
   hCCpi0inFV_stack_10->SetBinContent(16,59.06345);
   hCCpi0inFV_stack_10->SetBinContent(17,51.52357);
   hCCpi0inFV_stack_10->SetBinContent(18,33.58203);
   hCCpi0inFV_stack_10->SetBinContent(19,27.05548);
   hCCpi0inFV_stack_10->SetBinContent(20,23.28518);
   hCCpi0inFV_stack_10->SetBinContent(21,16.79218);
   hCCpi0inFV_stack_10->SetBinContent(22,12.27972);
   hCCpi0inFV_stack_10->SetBinContent(23,7.718763);
   hCCpi0inFV_stack_10->SetBinContent(24,7.756327);
   hCCpi0inFV_stack_10->SetBinContent(25,4.541731);
   hCCpi0inFV_stack_10->SetBinContent(26,19.41502);
   hCCpi0inFV_stack_10->SetBinError(2,3.540477);
   hCCpi0inFV_stack_10->SetBinError(3,9.61596);
   hCCpi0inFV_stack_10->SetBinError(4,13.81412);
   hCCpi0inFV_stack_10->SetBinError(5,15.35016);
   hCCpi0inFV_stack_10->SetBinError(6,14.45708);
   hCCpi0inFV_stack_10->SetBinError(7,12.75271);
   hCCpi0inFV_stack_10->SetBinError(8,11.474);
   hCCpi0inFV_stack_10->SetBinError(9,9.987997);
   hCCpi0inFV_stack_10->SetBinError(10,8.692937);
   hCCpi0inFV_stack_10->SetBinError(11,7.896414);
   hCCpi0inFV_stack_10->SetBinError(12,6.20717);
   hCCpi0inFV_stack_10->SetBinError(13,5.566118);
   hCCpi0inFV_stack_10->SetBinError(14,4.926824);
   hCCpi0inFV_stack_10->SetBinError(15,4.222338);
   hCCpi0inFV_stack_10->SetBinError(16,3.863394);
   hCCpi0inFV_stack_10->SetBinError(17,3.618105);
   hCCpi0inFV_stack_10->SetBinError(18,2.907576);
   hCCpi0inFV_stack_10->SetBinError(19,2.575819);
   hCCpi0inFV_stack_10->SetBinError(20,2.410666);
   hCCpi0inFV_stack_10->SetBinError(21,2.081162);
   hCCpi0inFV_stack_10->SetBinError(22,1.763265);
   hCCpi0inFV_stack_10->SetBinError(23,1.343853);
   hCCpi0inFV_stack_10->SetBinError(24,1.469097);
   hCCpi0inFV_stack_10->SetBinError(25,1.11103);
   hCCpi0inFV_stack_10->SetBinError(26,2.240894);
   hCCpi0inFV_stack_10->SetEntries(24435);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,2.050601);
   hNCinFV_stack_11->SetBinContent(3,11.24057);
   hNCinFV_stack_11->SetBinContent(4,12.80753);
   hNCinFV_stack_11->SetBinContent(5,10.95026);
   hNCinFV_stack_11->SetBinContent(6,6.695457);
   hNCinFV_stack_11->SetBinContent(7,3.66297);
   hNCinFV_stack_11->SetBinContent(8,1.610679);
   hNCinFV_stack_11->SetBinContent(9,0.9269427);
   hNCinFV_stack_11->SetBinContent(10,0.7336084);
   hNCinFV_stack_11->SetBinContent(11,1.662242);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.7068742);
   hNCinFV_stack_11->SetBinError(3,1.700527);
   hNCinFV_stack_11->SetBinError(4,1.788496);
   hNCinFV_stack_11->SetBinError(5,1.654213);
   hNCinFV_stack_11->SetBinError(6,1.286888);
   hNCinFV_stack_11->SetBinError(7,0.9816245);
   hNCinFV_stack_11->SetBinError(8,0.6806271);
   hNCinFV_stack_11->SetBinError(9,0.4800908);
   hNCinFV_stack_11->SetBinError(10,0.4394482);
   hNCinFV_stack_11->SetBinError(11,0.6513556);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetEntries(225);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,27.59014);
   hnumuCCinFV_stack_12->SetBinContent(3,144.7798);
   hnumuCCinFV_stack_12->SetBinContent(4,174.0395);
   hnumuCCinFV_stack_12->SetBinContent(5,224.0613);
   hnumuCCinFV_stack_12->SetBinContent(6,192.7245);
   hnumuCCinFV_stack_12->SetBinContent(7,128.739);
   hnumuCCinFV_stack_12->SetBinContent(8,82.73486);
   hnumuCCinFV_stack_12->SetBinContent(9,67.25817);
   hnumuCCinFV_stack_12->SetBinContent(10,55.73502);
   hnumuCCinFV_stack_12->SetBinContent(11,33.65839);
   hnumuCCinFV_stack_12->SetBinContent(12,34.70503);
   hnumuCCinFV_stack_12->SetBinContent(13,20.39626);
   hnumuCCinFV_stack_12->SetBinContent(14,17.68451);
   hnumuCCinFV_stack_12->SetBinContent(15,15.34596);
   hnumuCCinFV_stack_12->SetBinContent(16,10.53151);
   hnumuCCinFV_stack_12->SetBinContent(17,9.345476);
   hnumuCCinFV_stack_12->SetBinContent(18,5.611813);
   hnumuCCinFV_stack_12->SetBinContent(19,6.634374);
   hnumuCCinFV_stack_12->SetBinContent(20,6.08788);
   hnumuCCinFV_stack_12->SetBinContent(21,2.650519);
   hnumuCCinFV_stack_12->SetBinContent(22,4.196482);
   hnumuCCinFV_stack_12->SetBinContent(23,2.810899);
   hnumuCCinFV_stack_12->SetBinContent(24,3.681114);
   hnumuCCinFV_stack_12->SetBinContent(25,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(26,2.622175);
   hnumuCCinFV_stack_12->SetBinError(2,2.972519);
   hnumuCCinFV_stack_12->SetBinError(3,6.536651);
   hnumuCCinFV_stack_12->SetBinError(4,6.775274);
   hnumuCCinFV_stack_12->SetBinError(5,9.349543);
   hnumuCCinFV_stack_12->SetBinError(6,7.479039);
   hnumuCCinFV_stack_12->SetBinError(7,6.260024);
   hnumuCCinFV_stack_12->SetBinError(8,5.005664);
   hnumuCCinFV_stack_12->SetBinError(9,4.386886);
   hnumuCCinFV_stack_12->SetBinError(10,3.860141);
   hnumuCCinFV_stack_12->SetBinError(11,3.080786);
   hnumuCCinFV_stack_12->SetBinError(12,3.15927);
   hnumuCCinFV_stack_12->SetBinError(13,2.236686);
   hnumuCCinFV_stack_12->SetBinError(14,2.168736);
   hnumuCCinFV_stack_12->SetBinError(15,2.933532);
   hnumuCCinFV_stack_12->SetBinError(16,1.659038);
   hnumuCCinFV_stack_12->SetBinError(17,1.529704);
   hnumuCCinFV_stack_12->SetBinError(18,1.950407);
   hnumuCCinFV_stack_12->SetBinError(19,1.325601);
   hnumuCCinFV_stack_12->SetBinError(20,2.563113);
   hnumuCCinFV_stack_12->SetBinError(21,0.7871733);
   hnumuCCinFV_stack_12->SetBinError(22,1.056731);
   hnumuCCinFV_stack_12->SetBinError(23,0.8390463);
   hnumuCCinFV_stack_12->SetBinError(24,2.300956);
   hnumuCCinFV_stack_12->SetBinError(25,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(26,0.8228593);
   hnumuCCinFV_stack_12->SetEntries(5250);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,1.070405);
   hnueCCinFV_stack_13->SetBinContent(3,6.55018);
   hnueCCinFV_stack_13->SetBinContent(4,5.118669);
   hnueCCinFV_stack_13->SetBinContent(5,1.176911);
   hnueCCinFV_stack_13->SetBinContent(6,2.340906);
   hnueCCinFV_stack_13->SetBinContent(7,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.5545368);
   hnueCCinFV_stack_13->SetBinError(3,1.338392);
   hnueCCinFV_stack_13->SetBinError(4,1.185877);
   hnueCCinFV_stack_13->SetBinError(5,0.4804759);
   hnueCCinFV_stack_13->SetBinError(6,0.8093475);
   hnueCCinFV_stack_13->SetBinError(7,0.48078);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_Emuon_all",25,0,1500);
   hmcerror__2->SetBinContent(2,93.73682);
   hmcerror__2->SetBinContent(3,614.8339);
   hmcerror__2->SetBinContent(4,1034.147);
   hmcerror__2->SetBinContent(5,1252.152);
   hmcerror__2->SetBinContent(6,1082.337);
   hmcerror__2->SetBinContent(7,814.4346);
   hmcerror__2->SetBinContent(8,623.7165);
   hmcerror__2->SetBinContent(9,473.8644);
   hmcerror__2->SetBinContent(10,372.3182);
   hmcerror__2->SetBinContent(11,295.5186);
   hmcerror__2->SetBinContent(12,193.8888);
   hmcerror__2->SetBinContent(13,148.9444);
   hmcerror__2->SetBinContent(14,115.1951);
   hmcerror__2->SetBinContent(15,87.4456);
   hmcerror__2->SetBinContent(16,73.2118);
   hmcerror__2->SetBinContent(17,62.02886);
   hmcerror__2->SetBinContent(18,39.61349);
   hmcerror__2->SetBinContent(19,33.71775);
   hmcerror__2->SetBinContent(20,30.3164);
   hmcerror__2->SetBinContent(21,19.8892);
   hmcerror__2->SetBinContent(22,16.4762);
   hmcerror__2->SetBinContent(23,10.52966);
   hmcerror__2->SetBinContent(24,11.43744);
   hmcerror__2->SetBinContent(25,5.27534);
   hmcerror__2->SetBinContent(26,22.47469);
   hmcerror__2->SetBinError(1,0.3895343);
   hmcerror__2->SetBinError(2,18.9818);
   hmcerror__2->SetBinError(3,126.2981);
   hmcerror__2->SetBinError(4,229.3487);
   hmcerror__2->SetBinError(5,284.1144);
   hmcerror__2->SetBinError(6,254.1712);
   hmcerror__2->SetBinError(7,189.6331);
   hmcerror__2->SetBinError(8,144.2764);
   hmcerror__2->SetBinError(9,112.7956);
   hmcerror__2->SetBinError(10,88.5475);
   hmcerror__2->SetBinError(11,70.82016);
   hmcerror__2->SetBinError(12,47.65429);
   hmcerror__2->SetBinError(13,35.21242);
   hmcerror__2->SetBinError(14,28.42798);
   hmcerror__2->SetBinError(15,22.37528);
   hmcerror__2->SetBinError(16,18.64164);
   hmcerror__2->SetBinError(17,15.36578);
   hmcerror__2->SetBinError(18,10.11729);
   hmcerror__2->SetBinError(19,7.739261);
   hmcerror__2->SetBinError(20,8.229492);
   hmcerror__2->SetBinError(21,5.923894);
   hmcerror__2->SetBinError(22,4.531366);
   hmcerror__2->SetBinError(23,2.927392);
   hmcerror__2->SetBinError(24,5.462016);
   hmcerror__2->SetBinError(25,1.911976);
   hmcerror__2->SetBinError(26,5.428287);
   hmcerror__2->SetEntries(7468.322);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[25] = {
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
   Double_t _fy3001[25] = {
   0,
   101,
   544,
   977,
   1126,
   1089,
   812,
   554,
   402,
   306,
   253,
   219,
   163,
   96,
   73,
   47,
   41,
   35,
   27,
   17,
   21,
   13,
   9,
   7,
   8};
   Double_t _felx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3001[25] = {
   0,
   10.04988,
   23.32381,
   31.257,
   33.55592,
   33,
   28.49561,
   23.5372,
   20.04994,
   17.49286,
   15.90597,
   14.79865,
   12.76715,
   9.9196,
   8.6693,
   6.9882,
   6.5384,
   6.0548,
   5.3414,
   4.2835,
   4.7354,
   3.77763,
   3.19354,
   2.85954,
   3.0307};
   Double_t _fehx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3001[25] = {
   1.1478,
   10.04988,
   23.32381,
   31.257,
   33.55592,
   33,
   28.49561,
   23.5372,
   20.04994,
   17.49286,
   15.90597,
   14.79865,
   12.76715,
   9.718,
   8.4672,
   6.7839,
   6.3331,
   5.8483,
   5.1322,
   4.0673,
   4.5229,
   3.5552,
   2.9582,
   2.61053,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1275.512);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=36.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6940.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.7","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 144.5","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 64.1","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  94.7","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5712.8","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 52.9","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1271.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.7","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_Emuon_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
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
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3002[25] = {
   0,
   0.202501,
   0.2054183,
   0.2217757,
   0.2269008,
   0.2348356,
   0.2328402,
   0.2313174,
   0.2380334,
   0.2378275,
   0.239647,
   0.2457816,
   0.2364131,
   0.2467811,
   0.2558765,
   0.2546262,
   0.2477198,
   0.2554001,
   0.2295308,
   0.2714534,
   0.2978448,
   0.2750249,
   0.2780139,
   0.4775557,
   0.3624366};
   Double_t _fehx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3002[25] = {
   0,
   0.202501,
   0.2054183,
   0.2217757,
   0.2269008,
   0.2348356,
   0.2328402,
   0.2313174,
   0.2380334,
   0.2378275,
   0.239647,
   0.2457816,
   0.2364131,
   0.2467811,
   0.2558765,
   0.2546262,
   0.2477198,
   0.2554001,
   0.2295308,
   0.2714534,
   0.2978448,
   0.2750249,
   0.2780139,
   0.4775557,
   0.3624366};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Muon Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[25] = {
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
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3003[25] = {
   0,
   0.202501,
   0.2054183,
   0.2217757,
   0.2269008,
   0.2348356,
   0.2328402,
   0.2313174,
   0.2380334,
   0.2378275,
   0.239647,
   0.2457816,
   0.2364131,
   0.2467811,
   0.2558765,
   0.2546262,
   0.2477198,
   0.2554001,
   0.2295308,
   0.2714534,
   0.2978448,
   0.2750249,
   0.2780139,
   0.4775557,
   0.3624366};
   Double_t _fehx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3003[25] = {
   0,
   0.202501,
   0.2054183,
   0.2217757,
   0.2269008,
   0.2348356,
   0.2328402,
   0.2313174,
   0.2380334,
   0.2378275,
   0.239647,
   0.2457816,
   0.2364131,
   0.2467811,
   0.2558765,
   0.2546262,
   0.2477198,
   0.2554001,
   0.2295308,
   0.2714534,
   0.2978448,
   0.2750249,
   0.2780139,
   0.4775557,
   0.3624366};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[25] = {
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
   Double_t _fy3004[25] = {
   10,
   1.077485,
   0.8847919,
   0.9447399,
   0.8992517,
   1.006156,
   0.9970107,
   0.8882241,
   0.8483439,
   0.8218777,
   0.856122,
   1.129513,
   1.094368,
   0.8333687,
   0.8348047,
   0.641973,
   0.6609826,
   0.8835375,
   0.8007652,
   0.5607525,
   1.055849,
   0.7890168,
   0.8547284,
   0.612025,
   1.51649};
   Double_t _felx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3004[25] = {
   0,
   0.1072137,
   0.03793514,
   0.03022491,
   0.0267986,
   0.03048958,
   0.03498822,
   0.03773702,
   0.04231155,
   0.04698362,
   0.05382393,
   0.07632544,
   0.0857175,
   0.08611129,
   0.09913935,
   0.09545183,
   0.105409,
   0.1528469,
   0.1584151,
   0.1412931,
   0.238089,
   0.229278,
   0.3032899,
   0.2500157,
   0.5745033};
   Double_t _fehx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3004[25] = {
   0,
   0.1072137,
   0.03793514,
   0.03022491,
   0.0267986,
   0.03048958,
   0.03498822,
   0.03773702,
   0.04231155,
   0.04698362,
   0.05382393,
   0.07632544,
   0.0857175,
   0.08436122,
   0.0968282,
   0.09266129,
   0.1020992,
   0.1476341,
   0.1522106,
   0.1341617,
   0.2274048,
   0.2157779,
   0.2809397,
   0.2282442,
   0.5288001};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.3258083);
   Graph_Graph3004->SetMaximum(10.9638);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_Emuon_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
