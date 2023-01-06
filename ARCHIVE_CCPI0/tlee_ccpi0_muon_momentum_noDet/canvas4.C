#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 17:16:33 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-8.336238,1692.308,921.8125);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hmc__10->SetBinContent(1,31.66583);
   hmc__10->SetBinContent(2,103.0971);
   hmc__10->SetBinContent(3,212.3011);
   hmc__10->SetBinContent(4,357.3217);
   hmc__10->SetBinContent(5,416.8119);
   hmc__10->SetBinContent(6,354.9382);
   hmc__10->SetBinContent(7,273.5039);
   hmc__10->SetBinContent(8,205.2704);
   hmc__10->SetBinContent(9,163.9745);
   hmc__10->SetBinContent(10,143.1537);
   hmc__10->SetBinContent(11,110.7902);
   hmc__10->SetBinContent(12,71.80888);
   hmc__10->SetBinContent(13,60.81895);
   hmc__10->SetBinContent(14,43.57633);
   hmc__10->SetBinContent(15,35.63351);
   hmc__10->SetBinContent(16,26.29431);
   hmc__10->SetBinContent(17,29.22734);
   hmc__10->SetBinContent(18,15.30059);
   hmc__10->SetBinContent(19,15.6434);
   hmc__10->SetBinContent(20,13.2963);
   hmc__10->SetBinContent(21,9.395718);
   hmc__10->SetBinContent(22,5.853681);
   hmc__10->SetBinContent(23,4.962934);
   hmc__10->SetBinContent(24,3.712842);
   hmc__10->SetBinContent(25,1.323755);
   hmc__10->SetBinContent(26,10.77412);
   hmc__10->SetBinError(1,7.12659);
   hmc__10->SetBinError(2,20.9921);
   hmc__10->SetBinError(3,42.12449);
   hmc__10->SetBinError(4,73.33996);
   hmc__10->SetBinError(5,86.4281);
   hmc__10->SetBinError(6,75.43429);
   hmc__10->SetBinError(7,59.59606);
   hmc__10->SetBinError(8,43.3768);
   hmc__10->SetBinError(9,38.15621);
   hmc__10->SetBinError(10,29.7888);
   hmc__10->SetBinError(11,25.3788);
   hmc__10->SetBinError(12,17.70266);
   hmc__10->SetBinError(13,14.92438);
   hmc__10->SetBinError(14,10.8493);
   hmc__10->SetBinError(15,9.393301);
   hmc__10->SetBinError(16,6.59721);
   hmc__10->SetBinError(17,7.150946);
   hmc__10->SetBinError(18,4.149058);
   hmc__10->SetBinError(19,3.955545);
   hmc__10->SetBinError(20,5.301075);
   hmc__10->SetBinError(21,3.816487);
   hmc__10->SetBinError(22,2.017085);
   hmc__10->SetBinError(23,1.701122);
   hmc__10->SetBinError(24,1.451627);
   hmc__10->SetBinError(25,0.8063886);
   hmc__10->SetBinError(26,2.91766);
   hmc__10->SetMinimum(-8.336238);
   hmc__10->SetMaximum(875.305);
   hmc__10->SetEntries(2693.828);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,1500);
   hs4_stack_4->SetMinimum(-1.202048e-08);
   hs4_stack_4->SetMaximum(437.6525);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,1.58693);
   hbadmatch_stack_1->SetBinContent(3,1.4836);
   hbadmatch_stack_1->SetBinContent(4,3.592803);
   hbadmatch_stack_1->SetBinContent(5,2.856105);
   hbadmatch_stack_1->SetBinContent(6,1.480217);
   hbadmatch_stack_1->SetBinContent(7,1.631091);
   hbadmatch_stack_1->SetBinContent(8,0.9286332);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.6354016);
   hbadmatch_stack_1->SetBinError(3,0.5833042);
   hbadmatch_stack_1->SetBinError(4,1.047124);
   hbadmatch_stack_1->SetBinError(5,1.00043);
   hbadmatch_stack_1->SetBinError(6,0.5823739);
   hbadmatch_stack_1->SetBinError(7,0.6297496);
   hbadmatch_stack_1->SetBinError(8,0.48078);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,2.192989);
   hext_stack_2->SetBinContent(2,5.027592);
   hext_stack_2->SetBinContent(3,8.400065);
   hext_stack_2->SetBinContent(4,7.13397);
   hext_stack_2->SetBinContent(5,13.40171);
   hext_stack_2->SetBinContent(6,7.351852);
   hext_stack_2->SetBinContent(7,4.125011);
   hext_stack_2->SetBinContent(8,1.939204);
   hext_stack_2->SetBinContent(9,2.338622);
   hext_stack_2->SetBinContent(10,7.732501);
   hext_stack_2->SetBinContent(11,4.263464);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(1,0.9009267);
   hext_stack_2->SetBinError(2,1.426537);
   hext_stack_2->SetBinError(3,2.052688);
   hext_stack_2->SetBinError(4,1.628332);
   hext_stack_2->SetBinError(5,2.591721);
   hext_stack_2->SetBinError(6,1.906971);
   hext_stack_2->SetBinError(7,1.358482);
   hext_stack_2->SetBinError(8,0.912471);
   hext_stack_2->SetBinError(9,1.095047);
   hext_stack_2->SetBinError(10,2.06648);
   hext_stack_2->SetBinError(11,1.560171);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetEntries(152);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.3042167);
   hdirt_stack_3->SetBinContent(4,0.536227);
   hdirt_stack_3->SetBinContent(5,1.112721);
   hdirt_stack_3->SetBinContent(6,0.7759784);
   hdirt_stack_3->SetBinContent(7,1.245223);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.2160277);
   hdirt_stack_3->SetBinError(4,0.3148224);
   hdirt_stack_3->SetBinError(5,0.5866105);
   hdirt_stack_3->SetBinError(6,0.458477);
   hdirt_stack_3->SetBinError(7,0.5390458);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
   hdirt_stack_3->SetEntries(23);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,1.125349);
   houtFV_stack_4->SetBinContent(2,2.594309);
   houtFV_stack_4->SetBinContent(3,5.792678);
   houtFV_stack_4->SetBinContent(4,3.971381);
   houtFV_stack_4->SetBinContent(5,4.328184);
   houtFV_stack_4->SetBinContent(6,4.205463);
   houtFV_stack_4->SetBinContent(7,2.103854);
   houtFV_stack_4->SetBinContent(8,3.199213);
   houtFV_stack_4->SetBinContent(9,0.8137078);
   houtFV_stack_4->SetBinContent(10,0.6215277);
   houtFV_stack_4->SetBinContent(11,1.878715);
   houtFV_stack_4->SetBinContent(12,0.5884556);
   houtFV_stack_4->SetBinContent(13,0.3917402);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(1,0.5194673);
   houtFV_stack_4->SetBinError(2,0.810428);
   houtFV_stack_4->SetBinError(3,1.163073);
   houtFV_stack_4->SetBinError(4,1.01131);
   houtFV_stack_4->SetBinError(5,1.157475);
   houtFV_stack_4->SetBinError(6,1.054897);
   houtFV_stack_4->SetBinError(7,0.6792233);
   houtFV_stack_4->SetBinError(8,1.782168);
   houtFV_stack_4->SetBinError(9,0.4077613);
   houtFV_stack_4->SetBinError(10,0.3599082);
   houtFV_stack_4->SetBinError(11,0.6909063);
   houtFV_stack_4->SetBinError(12,0.3397478);
   houtFV_stack_4->SetBinError(13,0.2770047);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(138);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.08121286);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.07237024);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05085714);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06101281);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1089254);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2571929);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1704908);
   hNCpi0inFVqe_stack_6->SetEntries(5);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8562999);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.598681);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.019125);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.174198);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.410996);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.395412);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.131149);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.753255);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.9884566);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.46788);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.3131128);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.119213);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2478436);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2382377);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5268015);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8390377);
   hNCpi0inFVres_stack_7->SetBinError(4,1.11487);
   hNCpi0inFVres_stack_7->SetBinError(5,0.746424);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8018019);
   hNCpi0inFVres_stack_7->SetBinError(7,0.748803);
   hNCpi0inFVres_stack_7->SetBinError(8,0.438721);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3370831);
   hNCpi0inFVres_stack_7->SetBinError(10,0.497788);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1612001);
   hNCpi0inFVres_stack_7->SetBinError(12,0.08429639);
   hNCpi0inFVres_stack_7->SetBinError(13,0.05953494);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2478436);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01732447);
   hNCpi0inFVres_stack_7->SetEntries(874);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3621513);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.13587);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.196408);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.341716);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.230244);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.751848);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.907701);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.087571);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.056862);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.515504);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4736357);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5569649);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2812259);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1294583);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4579168);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7333214);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.252163);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.04871);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.040962);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6777553);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6835874);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5248492);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1660533);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.183623);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3841085);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2057516);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.097318);
   hNCpi0inFVdis_stack_8->SetEntries(672);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,15.94706);
   hCCpi0inFV_stack_10->SetBinContent(2,58.66005);
   hCCpi0inFV_stack_10->SetBinContent(3,135.3857);
   hCCpi0inFV_stack_10->SetBinContent(4,241.4333);
   hCCpi0inFV_stack_10->SetBinContent(5,283.7885);
   hCCpi0inFV_stack_10->SetBinContent(6,252.6704);
   hCCpi0inFV_stack_10->SetBinContent(7,203.279);
   hCCpi0inFV_stack_10->SetBinContent(8,160.0269);
   hCCpi0inFV_stack_10->SetBinContent(9,129.6582);
   hCCpi0inFV_stack_10->SetBinContent(10,103.195);
   hCCpi0inFV_stack_10->SetBinContent(11,88.10369);
   hCCpi0inFV_stack_10->SetBinContent(12,53.09262);
   hCCpi0inFV_stack_10->SetBinContent(13,47.81318);
   hCCpi0inFV_stack_10->SetBinContent(14,34.72917);
   hCCpi0inFV_stack_10->SetBinContent(15,25.07249);
   hCCpi0inFV_stack_10->SetBinContent(16,19.78653);
   hCCpi0inFV_stack_10->SetBinContent(17,24.06646);
   hCCpi0inFV_stack_10->SetBinContent(18,12.96053);
   hCCpi0inFV_stack_10->SetBinContent(19,12.20411);
   hCCpi0inFV_stack_10->SetBinContent(20,8.067393);
   hCCpi0inFV_stack_10->SetBinContent(21,7.452597);
   hCCpi0inFV_stack_10->SetBinContent(22,4.244692);
   hCCpi0inFV_stack_10->SetBinContent(23,3.420846);
   hCCpi0inFV_stack_10->SetBinContent(24,3.124387);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(26,9.406301);
   hCCpi0inFV_stack_10->SetBinError(1,1.968033);
   hCCpi0inFV_stack_10->SetBinError(2,3.82235);
   hCCpi0inFV_stack_10->SetBinError(3,5.924815);
   hCCpi0inFV_stack_10->SetBinError(4,7.7808);
   hCCpi0inFV_stack_10->SetBinError(5,8.452316);
   hCCpi0inFV_stack_10->SetBinError(6,8.0189);
   hCCpi0inFV_stack_10->SetBinError(7,7.134451);
   hCCpi0inFV_stack_10->SetBinError(8,6.350677);
   hCCpi0inFV_stack_10->SetBinError(9,5.756806);
   hCCpi0inFV_stack_10->SetBinError(10,5.067003);
   hCCpi0inFV_stack_10->SetBinError(11,4.728049);
   hCCpi0inFV_stack_10->SetBinError(12,3.579101);
   hCCpi0inFV_stack_10->SetBinError(13,3.437182);
   hCCpi0inFV_stack_10->SetBinError(14,3.039448);
   hCCpi0inFV_stack_10->SetBinError(15,2.458131);
   hCCpi0inFV_stack_10->SetBinError(16,2.237749);
   hCCpi0inFV_stack_10->SetBinError(17,2.497379);
   hCCpi0inFV_stack_10->SetBinError(18,1.755303);
   hCCpi0inFV_stack_10->SetBinError(19,1.714381);
   hCCpi0inFV_stack_10->SetBinError(20,1.387434);
   hCCpi0inFV_stack_10->SetBinError(21,1.434597);
   hCCpi0inFV_stack_10->SetBinError(22,0.9688174);
   hCCpi0inFV_stack_10->SetBinError(23,0.8762995);
   hCCpi0inFV_stack_10->SetBinError(24,0.89917);
   hCCpi0inFV_stack_10->SetBinError(25,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(26,1.524142);
   hCCpi0inFV_stack_10->SetEntries(8276);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.5884556);
   hNCinFV_stack_11->SetBinContent(2,1.908829);
   hNCinFV_stack_11->SetBinContent(3,2.984305);
   hNCinFV_stack_11->SetBinContent(4,4.30637);
   hNCinFV_stack_11->SetBinContent(5,4.889754);
   hNCinFV_stack_11->SetBinContent(6,2.194063);
   hNCinFV_stack_11->SetBinContent(7,0.7336084);
   hNCinFV_stack_11->SetBinContent(8,1.073786);
   hNCinFV_stack_11->SetBinContent(9,0.3934307);
   hNCinFV_stack_11->SetBinContent(11,0.9286332);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.3397478);
   hNCinFV_stack_11->SetBinError(2,0.6506224);
   hNCinFV_stack_11->SetBinError(3,0.8560416);
   hNCinFV_stack_11->SetBinError(4,1.020466);
   hNCinFV_stack_11->SetBinError(5,1.074613);
   hNCinFV_stack_11->SetBinError(6,0.7594044);
   hNCinFV_stack_11->SetBinError(7,0.4394482);
   hNCinFV_stack_11->SetBinError(8,0.5557297);
   hNCinFV_stack_11->SetBinError(9,0.2781975);
   hNCinFV_stack_11->SetBinError(11,0.48078);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetEntries(89);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,9.782091);
   hnumuCCinFV_stack_12->SetBinContent(2,27.66162);
   hnumuCCinFV_stack_12->SetBinContent(3,44.90527);
   hnumuCCinFV_stack_12->SetBinContent(4,76.72463);
   hnumuCCinFV_stack_12->SetBinContent(5,90.64585);
   hnumuCCinFV_stack_12->SetBinContent(6,73.23759);
   hnumuCCinFV_stack_12->SetBinContent(7,53.34724);
   hnumuCCinFV_stack_12->SetBinContent(8,33.99537);
   hnumuCCinFV_stack_12->SetBinContent(9,27.24695);
   hnumuCCinFV_stack_12->SetBinContent(10,29.08438);
   hnumuCCinFV_stack_12->SetBinContent(11,14.29375);
   hnumuCCinFV_stack_12->SetBinContent(12,17.15401);
   hnumuCCinFV_stack_12->SetBinContent(13,11.46064);
   hnumuCCinFV_stack_12->SetBinContent(14,8.078203);
   hnumuCCinFV_stack_12->SetBinContent(15,9.534069);
   hnumuCCinFV_stack_12->SetBinContent(16,5.767768);
   hnumuCCinFV_stack_12->SetBinContent(17,4.52966);
   hnumuCCinFV_stack_12->SetBinContent(18,2.117135);
   hnumuCCinFV_stack_12->SetBinContent(19,3.439294);
   hnumuCCinFV_stack_12->SetBinContent(20,4.088842);
   hnumuCCinFV_stack_12->SetBinContent(21,1.718505);
   hnumuCCinFV_stack_12->SetBinContent(22,1.608988);
   hnumuCCinFV_stack_12->SetBinContent(23,1.542088);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,0.9303237);
   hnumuCCinFV_stack_12->SetBinError(1,1.627319);
   hnumuCCinFV_stack_12->SetBinError(2,2.711265);
   hnumuCCinFV_stack_12->SetBinError(3,3.487286);
   hnumuCCinFV_stack_12->SetBinError(4,4.813553);
   hnumuCCinFV_stack_12->SetBinError(5,5.270072);
   hnumuCCinFV_stack_12->SetBinError(6,4.72392);
   hnumuCCinFV_stack_12->SetBinError(7,3.971284);
   hnumuCCinFV_stack_12->SetBinError(8,3.311997);
   hnumuCCinFV_stack_12->SetBinError(9,2.861001);
   hnumuCCinFV_stack_12->SetBinError(10,2.85848);
   hnumuCCinFV_stack_12->SetBinError(11,1.902414);
   hnumuCCinFV_stack_12->SetBinError(12,2.165963);
   hnumuCCinFV_stack_12->SetBinError(13,1.756902);
   hnumuCCinFV_stack_12->SetBinError(14,1.514228);
   hnumuCCinFV_stack_12->SetBinError(15,2.693372);
   hnumuCCinFV_stack_12->SetBinError(16,1.197206);
   hnumuCCinFV_stack_12->SetBinError(17,1.073929);
   hnumuCCinFV_stack_12->SetBinError(18,0.7225516);
   hnumuCCinFV_stack_12->SetBinError(19,0.9246483);
   hnumuCCinFV_stack_12->SetBinError(20,2.455787);
   hnumuCCinFV_stack_12->SetBinError(21,0.6222282);
   hnumuCCinFV_stack_12->SetBinError(22,0.6801404);
   hnumuCCinFV_stack_12->SetBinError(23,0.5976023);
   hnumuCCinFV_stack_12->SetBinError(24,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.4814682);
   hnumuCCinFV_stack_12->SetEntries(2276);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(2,0.785171);
   hnueCCinFV_stack_13->SetBinContent(3,2.635991);
   hnueCCinFV_stack_13->SetBinContent(4,1.907138);
   hnueCCinFV_stack_13->SetBinContent(5,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(6,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.3921167);
   hnueCCinFV_stack_13->SetBinError(2,0.3925882);
   hnueCCinFV_stack_13->SetBinError(3,0.8215227);
   hnueCCinFV_stack_13->SetBinError(4,0.6501133);
   hnueCCinFV_stack_13->SetBinError(5,0.438694);
   hnueCCinFV_stack_13->SetBinError(6,0.5191111);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetEntries(35);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__11->SetBinContent(1,31.66583);
   hmcerror__11->SetBinContent(2,103.0971);
   hmcerror__11->SetBinContent(3,212.3011);
   hmcerror__11->SetBinContent(4,357.3217);
   hmcerror__11->SetBinContent(5,416.8119);
   hmcerror__11->SetBinContent(6,354.9382);
   hmcerror__11->SetBinContent(7,273.5039);
   hmcerror__11->SetBinContent(8,205.2704);
   hmcerror__11->SetBinContent(9,163.9745);
   hmcerror__11->SetBinContent(10,143.1537);
   hmcerror__11->SetBinContent(11,110.7902);
   hmcerror__11->SetBinContent(12,71.80888);
   hmcerror__11->SetBinContent(13,60.81895);
   hmcerror__11->SetBinContent(14,43.57633);
   hmcerror__11->SetBinContent(15,35.63351);
   hmcerror__11->SetBinContent(16,26.29431);
   hmcerror__11->SetBinContent(17,29.22734);
   hmcerror__11->SetBinContent(18,15.30059);
   hmcerror__11->SetBinContent(19,15.6434);
   hmcerror__11->SetBinContent(20,13.2963);
   hmcerror__11->SetBinContent(21,9.395718);
   hmcerror__11->SetBinContent(22,5.853681);
   hmcerror__11->SetBinContent(23,4.962934);
   hmcerror__11->SetBinContent(24,3.712842);
   hmcerror__11->SetBinContent(25,1.323755);
   hmcerror__11->SetBinContent(26,10.77412);
   hmcerror__11->SetBinError(1,7.12659);
   hmcerror__11->SetBinError(2,20.9921);
   hmcerror__11->SetBinError(3,42.12449);
   hmcerror__11->SetBinError(4,73.33996);
   hmcerror__11->SetBinError(5,86.4281);
   hmcerror__11->SetBinError(6,75.43429);
   hmcerror__11->SetBinError(7,59.59606);
   hmcerror__11->SetBinError(8,43.3768);
   hmcerror__11->SetBinError(9,38.15621);
   hmcerror__11->SetBinError(10,29.7888);
   hmcerror__11->SetBinError(11,25.3788);
   hmcerror__11->SetBinError(12,17.70266);
   hmcerror__11->SetBinError(13,14.92438);
   hmcerror__11->SetBinError(14,10.8493);
   hmcerror__11->SetBinError(15,9.393301);
   hmcerror__11->SetBinError(16,6.59721);
   hmcerror__11->SetBinError(17,7.150946);
   hmcerror__11->SetBinError(18,4.149058);
   hmcerror__11->SetBinError(19,3.955545);
   hmcerror__11->SetBinError(20,5.301075);
   hmcerror__11->SetBinError(21,3.816487);
   hmcerror__11->SetBinError(22,2.017085);
   hmcerror__11->SetBinError(23,1.701122);
   hmcerror__11->SetBinError(24,1.451627);
   hmcerror__11->SetBinError(25,0.8063886);
   hmcerror__11->SetBinError(26,2.91766);
   hmcerror__11->SetEntries(2693.828);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
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
   Double_t _fy3013[25] = {
   42,
   88,
   202,
   356,
   414,
   371,
   286,
   221,
   174,
   124,
   105,
   94,
   80,
   42,
   41,
   19,
   21,
   15,
   11,
   9,
   12,
   7,
   7,
   2,
   3};
   Double_t _felx3013[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3013[25] = {
   6.6155,
   9.5036,
   14.21267,
   18.86796,
   20.34699,
   19.26136,
   16.91153,
   14.86607,
   13.19091,
   11.13553,
   10.24695,
   9.8173,
   9.0683,
   6.6155,
   6.5384,
   4.5151,
   4.7354,
   4.0385,
   3.4975,
   3.19354,
   3.64022,
   2.85954,
   2.85954,
   2,
   2.143368};
   Double_t _fehx3013[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3013[25] = {
   6.4104,
   9.3021,
   14.21267,
   18.86796,
   20.34699,
   19.26136,
   16.91153,
   14.86607,
   13.19091,
   11.13553,
   10.24695,
   9.616,
   8.8665,
   6.4104,
   6.3331,
   4.3011,
   4.5229,
   3.8197,
   3.27,
   2.9582,
   3.4155,
   2.61053,
   2.61053,
   1.51917,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1650);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(477.7817);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=25.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2746.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.4","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 66.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.7","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.8","F");

   ci = 1476;
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

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.5","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.6","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.2","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1929.0","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 20.2","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 553.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.3","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_muon_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[25] = {
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
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3014[25] = {
   0.2250561,
   0.2036147,
   0.1984186,
   0.2052491,
   0.2073552,
   0.2125279,
   0.2178984,
   0.2113154,
   0.2326961,
   0.2080897,
   0.2290708,
   0.2465247,
   0.2453903,
   0.2489724,
   0.2636086,
   0.2508988,
   0.2446664,
   0.2711698,
   0.2528571,
   0.3986881,
   0.4061943,
   0.3445841,
   0.3427654,
   0.3909746,
   0.6091677};
   Double_t _fehx3014[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3014[25] = {
   0.2250561,
   0.2036147,
   0.1984186,
   0.2052491,
   0.2073552,
   0.2125279,
   0.2178984,
   0.2113154,
   0.2326961,
   0.2080897,
   0.2290708,
   0.2465247,
   0.2453903,
   0.2489724,
   0.2636086,
   0.2508988,
   0.2446664,
   0.2711698,
   0.2528571,
   0.3986881,
   0.4061943,
   0.3445841,
   0.3427654,
   0.3909746,
   0.6091677};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1650);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3015[25] = {
   0.2250561,
   0.2036147,
   0.1984186,
   0.2052491,
   0.2073552,
   0.2125279,
   0.2178984,
   0.2113154,
   0.2326961,
   0.2080897,
   0.2290708,
   0.2465247,
   0.2453903,
   0.2489724,
   0.2636086,
   0.2508988,
   0.2446664,
   0.2711698,
   0.2528571,
   0.3986881,
   0.4061943,
   0.3445841,
   0.3427654,
   0.3909746,
   0.6091677};
   Double_t _fehx3015[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3015[25] = {
   0.2250561,
   0.2036147,
   0.1984186,
   0.2052491,
   0.2073552,
   0.2125279,
   0.2178984,
   0.2113154,
   0.2326961,
   0.2080897,
   0.2290708,
   0.2465247,
   0.2453903,
   0.2489724,
   0.2636086,
   0.2508988,
   0.2446664,
   0.2711698,
   0.2528571,
   0.3986881,
   0.4061943,
   0.3445841,
   0.3427654,
   0.3909746,
   0.6091677};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1650);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
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
   Double_t _fy3016[25] = {
   1.326351,
   0.853564,
   0.9514787,
   0.996301,
   0.9932537,
   1.045252,
   1.045689,
   1.076629,
   1.061141,
   0.8662018,
   0.9477373,
   1.30903,
   1.315379,
   0.963826,
   1.150602,
   0.7225898,
   0.7185054,
   0.9803545,
   0.7031719,
   0.6768802,
   1.277178,
   1.195829,
   1.410456,
   0.5386708,
   2.266281};
   Double_t _felx3016[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3016[25] = {
   0.208916,
   0.09218103,
   0.06694581,
   0.05280385,
   0.04881576,
   0.05426679,
   0.06183289,
   0.07242187,
   0.08044488,
   0.07778722,
   0.09248969,
   0.1367143,
   0.1491032,
   0.1518141,
   0.1834902,
   0.171714,
   0.1620196,
   0.2639441,
   0.2235767,
   0.2401827,
   0.387434,
   0.4885029,
   0.5761793,
   0.5386708,
   1.619158};
   Double_t _fehx3016[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3016[25] = {
   0.202439,
   0.09022657,
   0.06694581,
   0.05280385,
   0.04881576,
   0.05426679,
   0.06183289,
   0.07242187,
   0.08044488,
   0.07778722,
   0.09248969,
   0.133911,
   0.1457851,
   0.1471074,
   0.1777288,
   0.1635753,
   0.154749,
   0.249644,
   0.2090338,
   0.222483,
   0.3635167,
   0.4459639,
   0.5260054,
   0.4091663,
   1.302522};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1650);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(3.925684);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_muon_momentum_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
