#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Jun  8 17:52:18 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
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
   pad1->Range(-342.3077,-8.82341,1260.256,975.6834);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__13->SetBinContent(0,947.5141);
   hmc__13->SetBinContent(1,0.9818863);
   hmc__13->SetBinContent(2,1.660551);
   hmc__13->SetBinContent(3,4.09513);
   hmc__13->SetBinContent(4,21.84851);
   hmc__13->SetBinContent(5,191.1619);
   hmc__13->SetBinContent(6,362.6023);
   hmc__13->SetBinContent(7,433.7008);
   hmc__13->SetBinContent(8,425.8227);
   hmc__13->SetBinContent(9,441.1705);
   hmc__13->SetBinContent(10,406.2188);
   hmc__13->SetBinContent(11,382.0582);
   hmc__13->SetBinContent(12,330.4288);
   hmc__13->SetBinContent(13,283.3626);
   hmc__13->SetBinContent(14,261.5252);
   hmc__13->SetBinContent(15,208.0158);
   hmc__13->SetBinContent(16,165.6382);
   hmc__13->SetBinContent(17,141.9346);
   hmc__13->SetBinContent(18,122.5459);
   hmc__13->SetBinContent(19,103.8201);
   hmc__13->SetBinContent(20,79.35081);
   hmc__13->SetBinContent(21,71.06737);
   hmc__13->SetBinContent(22,64.67298);
   hmc__13->SetBinContent(23,45.11056);
   hmc__13->SetBinContent(24,35.27941);
   hmc__13->SetBinContent(25,32.06507);
   hmc__13->SetBinContent(26,188.5616);
   hmc__13->SetBinError(0,16.26444);
   hmc__13->SetBinError(1,9.035385);
   hmc__13->SetBinError(2,3.674983);
   hmc__13->SetBinError(3,6.613876);
   hmc__13->SetBinError(4,12.21061);
   hmc__13->SetBinError(5,59.74859);
   hmc__13->SetBinError(6,115.8774);
   hmc__13->SetBinError(7,132.5374);
   hmc__13->SetBinError(8,125.9512);
   hmc__13->SetBinError(9,129.1094);
   hmc__13->SetBinError(10,115.7338);
   hmc__13->SetBinError(11,111.6046);
   hmc__13->SetBinError(12,100.7039);
   hmc__13->SetBinError(13,97.37675);
   hmc__13->SetBinError(14,73.50297);
   hmc__13->SetBinError(15,61.29529);
   hmc__13->SetBinError(16,49.82344);
   hmc__13->SetBinError(17,44.82434);
   hmc__13->SetBinError(18,39.52063);
   hmc__13->SetBinError(19,38.46934);
   hmc__13->SetBinError(20,29.47386);
   hmc__13->SetBinError(21,29.07599);
   hmc__13->SetBinError(22,27.75127);
   hmc__13->SetBinError(23,18.45546);
   hmc__13->SetBinError(24,17.83595);
   hmc__13->SetBinError(25,15.80955);
   hmc__13->SetBinError(26,58.30504);
   hmc__13->SetMinimum(-8.82341);
   hmc__13->SetMaximum(926.4581);
   hmc__13->SetEntries(5702.791);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-150,1100);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(463.229);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,10.95136);
   hbadmatch_stack_1->SetBinContent(4,0.3401776);
   hbadmatch_stack_1->SetBinContent(5,1.141985);
   hbadmatch_stack_1->SetBinContent(6,0.9303237);
   hbadmatch_stack_1->SetBinContent(7,1.072095);
   hbadmatch_stack_1->SetBinContent(8,1.662284);
   hbadmatch_stack_1->SetBinContent(9,1.212195);
   hbadmatch_stack_1->SetBinContent(10,0.6238632);
   hbadmatch_stack_1->SetBinContent(11,1.413964);
   hbadmatch_stack_1->SetBinContent(12,1.397204);
   hbadmatch_stack_1->SetBinContent(13,1.463836);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,2.682774);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.4286997);
   hbadmatch_stack_1->SetBinContent(19,0.8770706);
   hbadmatch_stack_1->SetBinContent(20,0.7609047);
   hbadmatch_stack_1->SetBinContent(21,0.8753801);
   hbadmatch_stack_1->SetBinContent(22,0.8770706);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,0.5867651);
   hbadmatch_stack_1->SetBinContent(25,0.4011598);
   hbadmatch_stack_1->SetBinContent(26,1.367291);
   hbadmatch_stack_1->SetBinError(0,1.716446);
   hbadmatch_stack_1->SetBinError(4,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.5999049);
   hbadmatch_stack_1->SetBinError(6,0.4814682);
   hbadmatch_stack_1->SetBinError(7,0.5551335);
   hbadmatch_stack_1->SetBinError(8,0.6972943);
   hbadmatch_stack_1->SetBinError(9,0.4959675);
   hbadmatch_stack_1->SetBinError(10,0.3612196);
   hbadmatch_stack_1->SetBinError(11,0.6515799);
   hbadmatch_stack_1->SetBinError(12,0.6056456);
   hbadmatch_stack_1->SetBinError(13,0.620407);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.8783089);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.3043659);
   hbadmatch_stack_1->SetBinError(19,0.5197486);
   hbadmatch_stack_1->SetBinError(20,0.4524345);
   hbadmatch_stack_1->SetBinError(21,0.5191111);
   hbadmatch_stack_1->SetBinError(22,0.5197486);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.3387718);
   hbadmatch_stack_1->SetBinError(25,0.4011598);
   hbadmatch_stack_1->SetBinError(26,0.5730467);
   hbadmatch_stack_1->SetEntries(129);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,22.82082);
   hext_stack_2->SetBinContent(4,0.7309963);
   hext_stack_2->SetBinContent(5,1.290409);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,1.704188);
   hext_stack_2->SetBinContent(8,4.263464);
   hext_stack_2->SetBinContent(9,4.919439);
   hext_stack_2->SetBinContent(10,4.435048);
   hext_stack_2->SetBinContent(11,6.788031);
   hext_stack_2->SetBinContent(12,5.166044);
   hext_stack_2->SetBinContent(13,4.378797);
   hext_stack_2->SetBinContent(14,9.735136);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,1.939204);
   hext_stack_2->SetBinContent(17,1.544194);
   hext_stack_2->SetBinContent(18,0.6487947);
   hext_stack_2->SetBinContent(19,4.263464);
   hext_stack_2->SetBinContent(20,2.681789);
   hext_stack_2->SetBinContent(21,3.62185);
   hext_stack_2->SetBinContent(22,0.9660115);
   hext_stack_2->SetBinContent(23,2.510206);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,1.290409);
   hext_stack_2->SetBinContent(26,12.96916);
   hext_stack_2->SetBinError(0,3.114918);
   hext_stack_2->SetBinError(4,0.5201503);
   hext_stack_2->SetBinError(5,0.788756);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.7656743);
   hext_stack_2->SetBinError(8,1.560171);
   hext_stack_2->SetBinError(9,1.563138);
   hext_stack_2->SetBinError(10,1.533985);
   hext_stack_2->SetBinError(11,1.774777);
   hext_stack_2->SetBinError(12,1.619774);
   hext_stack_2->SetBinError(13,1.350755);
   hext_stack_2->SetBinError(14,2.330303);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,0.912471);
   hext_stack_2->SetBinError(17,0.7753719);
   hext_stack_2->SetBinError(18,0.4587671);
   hext_stack_2->SetBinError(19,1.560171);
   hext_stack_2->SetBinError(20,1.018372);
   hext_stack_2->SetBinError(21,1.422134);
   hext_stack_2->SetBinError(22,0.7189592);
   hext_stack_2->SetBinError(23,1.057404);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.788756);
   hext_stack_2->SetBinError(26,2.649561);
   hext_stack_2->SetEntries(229);

   ci = 1491;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,2.025088);
   hdirt_stack_3->SetBinContent(12,0.4042594);
   hdirt_stack_3->SetBinContent(13,0.311381);
   hdirt_stack_3->SetBinContent(18,0.165896);
   hdirt_stack_3->SetBinContent(19,1.167841e-06);
   hdirt_stack_3->SetBinContent(20,0.2665913);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(0,0.7932438);
   hdirt_stack_3->SetBinError(12,0.2998663);
   hdirt_stack_3->SetBinError(13,0.311381);
   hdirt_stack_3->SetBinError(18,0.165896);
   hdirt_stack_3->SetBinError(19,1.167841e-06);
   hdirt_stack_3->SetBinError(20,0.2665913);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(14);

   ci = 1492;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,16.67812);
   houtFV_stack_4->SetBinContent(1,0.1967154);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(3,0.3401776);
   houtFV_stack_4->SetBinContent(4,0.3917402);
   houtFV_stack_4->SetBinContent(5,1.413964);
   houtFV_stack_4->SetBinContent(6,4.829128);
   houtFV_stack_4->SetBinContent(7,2.030563);
   houtFV_stack_4->SetBinContent(8,2.44065);
   houtFV_stack_4->SetBinContent(9,2.87949);
   houtFV_stack_4->SetBinContent(10,2.910394);
   houtFV_stack_4->SetBinContent(11,2.627831);
   houtFV_stack_4->SetBinContent(12,1.463836);
   houtFV_stack_4->SetBinContent(13,0.3917402);
   houtFV_stack_4->SetBinContent(14,1.5941);
   houtFV_stack_4->SetBinContent(15,1.335308);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(17,1.050913);
   houtFV_stack_4->SetBinContent(18,1.127039);
   houtFV_stack_4->SetBinContent(19,0.6245749);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9801958);
   houtFV_stack_4->SetBinError(0,2.06207);
   houtFV_stack_4->SetBinError(1,0.1967154);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(3,0.3401776);
   houtFV_stack_4->SetBinError(4,0.2770047);
   houtFV_stack_4->SetBinError(5,0.6515799);
   houtFV_stack_4->SetBinError(6,1.131793);
   houtFV_stack_4->SetBinError(7,0.8001976);
   houtFV_stack_4->SetBinError(8,0.7587757);
   houtFV_stack_4->SetBinError(9,0.9000686);
   houtFV_stack_4->SetBinError(10,0.8809884);
   houtFV_stack_4->SetBinError(11,0.899495);
   houtFV_stack_4->SetBinError(12,0.620407);
   houtFV_stack_4->SetBinError(13,0.2770047);
   houtFV_stack_4->SetBinError(14,0.5642168);
   houtFV_stack_4->SetBinError(15,0.6297093);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(17,0.4743244);
   houtFV_stack_4->SetBinError(18,0.5201044);
   houtFV_stack_4->SetBinError(19,0.3616925);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4383608);
   houtFV_stack_4->SetEntries(199);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1);

   ci = 1494;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(17);

   ci = 1495;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,50.83981);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.3485861);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.420244);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.644042);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.564414);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.023104);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.199714);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.509278);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.17855);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.557014);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.462024);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.58841);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.668702);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.760284);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.74409);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.938726);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.952512);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8644038);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2510999);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.515986);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4178359);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.307068);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.613304);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.185754);
   hNCpi0inFVres_stack_7->SetBinError(0,2.302221);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2218905);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3060551);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7196607);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7890561);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8180374);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7130498);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7794614);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8397931);
   hNCpi0inFVres_stack_7->SetBinError(12,0.662202);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6738549);
   hNCpi0inFVres_stack_7->SetBinError(14,0.741022);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6564471);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5429806);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4317784);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4531823);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4952461);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2652967);
   hNCpi0inFVres_stack_7->SetBinError(21,0.08369995);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2321763);
   hNCpi0inFVres_stack_7->SetBinError(23,0.158647);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2032767);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2517472);
   hNCpi0inFVres_stack_7->SetBinError(26,0.3245714);
   hNCpi0inFVres_stack_7->SetEntries(2164);

   ci = 1496;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,26.19587);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.291954);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.269622);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.635066);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.668375);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.303338);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.250866);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.709052);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.787679);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.887662);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.276102);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.511424);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.344024);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.15122);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.71619);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9479356);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.955088);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.268622);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8780218);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.04559);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3068998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(26,3.944849);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.628404);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1685597);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3747542);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5334592);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7140962);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5746704);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6369882);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5950234);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.444218);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5453053);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5621164);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5688271);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5647068);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6092976);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4308761);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1998966);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5886667);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2973476);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2741946);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2784203);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3390387);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.09253378);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6580478);
   hNCpi0inFVdis_stack_8->SetEntries(1461);

   ci = 1497;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1498;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1499;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,509.6556);
   hCCpi0inFV_stack_11->SetBinContent(1,0.5884556);
   hCCpi0inFV_stack_11->SetBinContent(2,0.5352025);
   hCCpi0inFV_stack_11->SetBinContent(3,2.194063);
   hCCpi0inFV_stack_11->SetBinContent(4,10.30042);
   hCCpi0inFV_stack_11->SetBinContent(5,152.8872);
   hCCpi0inFV_stack_11->SetBinContent(6,306.8723);
   hCCpi0inFV_stack_11->SetBinContent(7,363.5972);
   hCCpi0inFV_stack_11->SetBinContent(8,349.0798);
   hCCpi0inFV_stack_11->SetBinContent(9,359.4331);
   hCCpi0inFV_stack_11->SetBinContent(10,335.0182);
   hCCpi0inFV_stack_11->SetBinContent(11,302.7707);
   hCCpi0inFV_stack_11->SetBinContent(12,259.4938);
   hCCpi0inFV_stack_11->SetBinContent(13,219.3498);
   hCCpi0inFV_stack_11->SetBinContent(14,196.7628);
   hCCpi0inFV_stack_11->SetBinContent(15,157.4571);
   hCCpi0inFV_stack_11->SetBinContent(16,127.1398);
   hCCpi0inFV_stack_11->SetBinContent(17,110.1251);
   hCCpi0inFV_stack_11->SetBinContent(18,96.35492);
   hCCpi0inFV_stack_11->SetBinContent(19,75.64732);
   hCCpi0inFV_stack_11->SetBinContent(20,59.75658);
   hCCpi0inFV_stack_11->SetBinContent(21,52.284);
   hCCpi0inFV_stack_11->SetBinContent(22,46.84285);
   hCCpi0inFV_stack_11->SetBinContent(23,30.94093);
   hCCpi0inFV_stack_11->SetBinContent(24,27.37177);
   hCCpi0inFV_stack_11->SetBinContent(25,21.08276);
   hCCpi0inFV_stack_11->SetBinContent(26,130.4991);
   hCCpi0inFV_stack_11->SetBinError(0,11.35875);
   hCCpi0inFV_stack_11->SetBinError(1,0.3397478);
   hCCpi0inFV_stack_11->SetBinError(2,0.3921167);
   hCCpi0inFV_stack_11->SetBinError(3,0.7594044);
   hCCpi0inFV_stack_11->SetBinError(4,1.611883);
   hCCpi0inFV_stack_11->SetBinError(5,6.181619);
   hCCpi0inFV_stack_11->SetBinError(6,8.899199);
   hCCpi0inFV_stack_11->SetBinError(7,9.620889);
   hCCpi0inFV_stack_11->SetBinError(8,9.354129);
   hCCpi0inFV_stack_11->SetBinError(9,9.508815);
   hCCpi0inFV_stack_11->SetBinError(10,9.33555);
   hCCpi0inFV_stack_11->SetBinError(11,8.691869);
   hCCpi0inFV_stack_11->SetBinError(12,8.035018);
   hCCpi0inFV_stack_11->SetBinError(13,7.404297);
   hCCpi0inFV_stack_11->SetBinError(14,7.140437);
   hCCpi0inFV_stack_11->SetBinError(15,6.284586);
   hCCpi0inFV_stack_11->SetBinError(16,5.643311);
   hCCpi0inFV_stack_11->SetBinError(17,5.256478);
   hCCpi0inFV_stack_11->SetBinError(18,4.998136);
   hCCpi0inFV_stack_11->SetBinError(19,4.361563);
   hCCpi0inFV_stack_11->SetBinError(20,3.962747);
   hCCpi0inFV_stack_11->SetBinError(21,3.62225);
   hCCpi0inFV_stack_11->SetBinError(22,3.511906);
   hCCpi0inFV_stack_11->SetBinError(23,2.801414);
   hCCpi0inFV_stack_11->SetBinError(24,2.586587);
   hCCpi0inFV_stack_11->SetBinError(25,2.388038);
   hCCpi0inFV_stack_11->SetBinError(26,5.794525);
   hCCpi0inFV_stack_11->SetEntries(18333);

   ci = 1500;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,29.30653);
   hNCinFV_stack_12->SetBinContent(2,0.1950248);
   hNCinFV_stack_12->SetBinContent(4,0.3917402);
   hNCinFV_stack_12->SetBinContent(5,0.8770706);
   hNCinFV_stack_12->SetBinContent(6,1.467217);
   hNCinFV_stack_12->SetBinContent(7,1.853885);
   hNCinFV_stack_12->SetBinContent(8,1.073786);
   hNCinFV_stack_12->SetBinContent(9,1.855576);
   hNCinFV_stack_12->SetBinContent(10,2.537621);
   hNCinFV_stack_12->SetBinContent(11,2.644128);
   hNCinFV_stack_12->SetBinContent(12,3.466255);
   hNCinFV_stack_12->SetBinContent(13,3.182711);
   hNCinFV_stack_12->SetBinContent(14,2.057363);
   hNCinFV_stack_12->SetBinContent(15,1.557426);
   hNCinFV_stack_12->SetBinContent(16,0.5884556);
   hNCinFV_stack_12->SetBinContent(17,0.9303237);
   hNCinFV_stack_12->SetBinContent(18,1.662242);
   hNCinFV_stack_12->SetBinContent(19,0.9252522);
   hNCinFV_stack_12->SetBinContent(20,1.073786);
   hNCinFV_stack_12->SetBinContent(21,1.217248);
   hNCinFV_stack_12->SetBinContent(22,0.3934307);
   hNCinFV_stack_12->SetBinContent(23,0.3401776);
   hNCinFV_stack_12->SetBinContent(24,0.1950248);
   hNCinFV_stack_12->SetBinContent(25,0.3934307);
   hNCinFV_stack_12->SetBinContent(26,2.050601);
   hNCinFV_stack_12->SetBinError(0,2.740692);
   hNCinFV_stack_12->SetBinError(2,0.1950249);
   hNCinFV_stack_12->SetBinError(4,0.2770047);
   hNCinFV_stack_12->SetBinError(5,0.5197486);
   hNCinFV_stack_12->SetBinError(6,0.6214735);
   hNCinFV_stack_12->SetBinError(7,0.6789509);
   hNCinFV_stack_12->SetBinError(8,0.5557297);
   hNCinFV_stack_12->SetBinError(9,0.6794384);
   hNCinFV_stack_12->SetBinError(10,0.8329108);
   hNCinFV_stack_12->SetBinError(11,0.7855485);
   hNCinFV_stack_12->SetBinError(12,0.9617119);
   hNCinFV_stack_12->SetBinError(13,0.87873);
   hNCinFV_stack_12->SetBinError(14,0.7087455);
   hNCinFV_stack_12->SetBinError(15,0.7082233);
   hNCinFV_stack_12->SetBinError(16,0.3397478);
   hNCinFV_stack_12->SetBinError(17,0.4814682);
   hNCinFV_stack_12->SetBinError(18,0.6513556);
   hNCinFV_stack_12->SetBinError(19,0.4794006);
   hNCinFV_stack_12->SetBinError(20,0.5557297);
   hNCinFV_stack_12->SetBinError(21,0.6211758);
   hNCinFV_stack_12->SetBinError(22,0.2781975);
   hNCinFV_stack_12->SetBinError(23,0.3401776);
   hNCinFV_stack_12->SetBinError(24,0.1950249);
   hNCinFV_stack_12->SetBinError(25,0.2781975);
   hNCinFV_stack_12->SetBinError(26,0.7068742);
   hNCinFV_stack_12->SetEntries(260);

   ci = 1501;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,273.5);
   hnumuCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(2,0.7336084);
   hnumuCCinFV_stack_13->SetBinContent(3,1.532989);
   hnumuCCinFV_stack_13->SetBinContent(4,8.784811);
   hnumuCCinFV_stack_13->SetBinContent(5,30.8614);
   hnumuCCinFV_stack_13->SetBinContent(6,40.41096);
   hnumuCCinFV_stack_13->SetBinContent(7,52.99286);
   hnumuCCinFV_stack_13->SetBinContent(8,57.97628);
   hnumuCCinFV_stack_13->SetBinContent(9,61.34632);
   hnumuCCinFV_stack_13->SetBinContent(10,50.74335);
   hnumuCCinFV_stack_13->SetBinContent(11,56.05791);
   hnumuCCinFV_stack_13->SetBinContent(12,51.59274);
   hnumuCCinFV_stack_13->SetBinContent(13,45.76403);
   hnumuCCinFV_stack_13->SetBinContent(14,42.88424);
   hnumuCCinFV_stack_13->SetBinContent(15,39.06096);
   hnumuCCinFV_stack_13->SetBinContent(16,26.1949);
   hnumuCCinFV_stack_13->SetBinContent(17,24.23356);
   hnumuCCinFV_stack_13->SetBinContent(18,19.0766);
   hnumuCCinFV_stack_13->SetBinContent(19,16.23464);
   hnumuCCinFV_stack_13->SetBinContent(20,12.28471);
   hnumuCCinFV_stack_13->SetBinContent(21,11.3431);
   hnumuCCinFV_stack_13->SetBinContent(22,13.27266);
   hnumuCCinFV_stack_13->SetBinContent(23,8.873923);
   hnumuCCinFV_stack_13->SetBinContent(24,5.992461);
   hnumuCCinFV_stack_13->SetBinContent(25,6.677236);
   hnumuCCinFV_stack_13->SetBinContent(26,34.34025);
   hnumuCCinFV_stack_13->SetBinError(0,10.06188);
   hnumuCCinFV_stack_13->SetBinError(1,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(2,0.4394482);
   hnumuCCinFV_stack_13->SetBinError(3,0.7088412);
   hnumuCCinFV_stack_13->SetBinError(4,1.518465);
   hnumuCCinFV_stack_13->SetBinError(5,3.245369);
   hnumuCCinFV_stack_13->SetBinError(6,3.836472);
   hnumuCCinFV_stack_13->SetBinError(7,4.097107);
   hnumuCCinFV_stack_13->SetBinError(8,4.607781);
   hnumuCCinFV_stack_13->SetBinError(9,4.218075);
   hnumuCCinFV_stack_13->SetBinError(10,3.811245);
   hnumuCCinFV_stack_13->SetBinError(11,4.267183);
   hnumuCCinFV_stack_13->SetBinError(12,3.848333);
   hnumuCCinFV_stack_13->SetBinError(13,5.302216);
   hnumuCCinFV_stack_13->SetBinError(14,3.302514);
   hnumuCCinFV_stack_13->SetBinError(15,3.63316);
   hnumuCCinFV_stack_13->SetBinError(16,2.565783);
   hnumuCCinFV_stack_13->SetBinError(17,2.474916);
   hnumuCCinFV_stack_13->SetBinError(18,2.419274);
   hnumuCCinFV_stack_13->SetBinError(19,2.118496);
   hnumuCCinFV_stack_13->SetBinError(20,1.781584);
   hnumuCCinFV_stack_13->SetBinError(21,1.69452);
   hnumuCCinFV_stack_13->SetBinError(22,1.780442);
   hnumuCCinFV_stack_13->SetBinError(23,1.807372);
   hnumuCCinFV_stack_13->SetBinError(24,1.194794);
   hnumuCCinFV_stack_13->SetBinError(25,1.253924);
   hnumuCCinFV_stack_13->SetBinError(26,2.998434);
   hnumuCCinFV_stack_13->SetEntries(4060);

   ci = 1502;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,4.746562);
   hnueCCinFV_stack_14->SetBinContent(4,0.2680781);
   hnueCCinFV_stack_14->SetBinContent(7,1.217248);
   hnueCCinFV_stack_14->SetBinContent(9,1.073786);
   hnueCCinFV_stack_14->SetBinContent(10,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(11,0.7336084);
   hnueCCinFV_stack_14->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(16,0.7618654);
   hnueCCinFV_stack_14->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(22,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(23,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,1.020533);
   hnueCCinFV_stack_14->SetBinContent(26,0.9801958);
   hnueCCinFV_stack_14->SetBinError(0,1.095817);
   hnueCCinFV_stack_14->SetBinError(4,0.2680781);
   hnueCCinFV_stack_14->SetBinError(7,0.6211758);
   hnueCCinFV_stack_14->SetBinError(9,0.5557297);
   hnueCCinFV_stack_14->SetBinError(10,0.438694);
   hnueCCinFV_stack_14->SetBinError(11,0.4394482);
   hnueCCinFV_stack_14->SetBinError(13,0.3387718);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.3401776);
   hnueCCinFV_stack_14->SetBinError(16,0.5417947);
   hnueCCinFV_stack_14->SetBinError(17,0.2781975);
   hnueCCinFV_stack_14->SetBinError(18,0.1950249);
   hnueCCinFV_stack_14->SetBinError(19,0.3401776);
   hnueCCinFV_stack_14->SetBinError(21,0.3401776);
   hnueCCinFV_stack_14->SetBinError(22,0.3921167);
   hnueCCinFV_stack_14->SetBinError(23,0.2781975);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.5892049);
   hnueCCinFV_stack_14->SetBinError(26,0.4383608);
   hnueCCinFV_stack_14->SetEntries(60);

   ci = 1503;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__14->SetBinContent(0,947.5141);
   hmcerror__14->SetBinContent(1,0.9818863);
   hmcerror__14->SetBinContent(2,1.660551);
   hmcerror__14->SetBinContent(3,4.09513);
   hmcerror__14->SetBinContent(4,21.84851);
   hmcerror__14->SetBinContent(5,191.1619);
   hmcerror__14->SetBinContent(6,362.6023);
   hmcerror__14->SetBinContent(7,433.7008);
   hmcerror__14->SetBinContent(8,425.8227);
   hmcerror__14->SetBinContent(9,441.1705);
   hmcerror__14->SetBinContent(10,406.2188);
   hmcerror__14->SetBinContent(11,382.0582);
   hmcerror__14->SetBinContent(12,330.4288);
   hmcerror__14->SetBinContent(13,283.3626);
   hmcerror__14->SetBinContent(14,261.5252);
   hmcerror__14->SetBinContent(15,208.0158);
   hmcerror__14->SetBinContent(16,165.6382);
   hmcerror__14->SetBinContent(17,141.9346);
   hmcerror__14->SetBinContent(18,122.5459);
   hmcerror__14->SetBinContent(19,103.8201);
   hmcerror__14->SetBinContent(20,79.35081);
   hmcerror__14->SetBinContent(21,71.06737);
   hmcerror__14->SetBinContent(22,64.67298);
   hmcerror__14->SetBinContent(23,45.11056);
   hmcerror__14->SetBinContent(24,35.27941);
   hmcerror__14->SetBinContent(25,32.06507);
   hmcerror__14->SetBinContent(26,188.5616);
   hmcerror__14->SetBinError(0,16.26444);
   hmcerror__14->SetBinError(1,9.035385);
   hmcerror__14->SetBinError(2,3.674983);
   hmcerror__14->SetBinError(3,6.613876);
   hmcerror__14->SetBinError(4,12.21061);
   hmcerror__14->SetBinError(5,59.74859);
   hmcerror__14->SetBinError(6,115.8774);
   hmcerror__14->SetBinError(7,132.5374);
   hmcerror__14->SetBinError(8,125.9512);
   hmcerror__14->SetBinError(9,129.1094);
   hmcerror__14->SetBinError(10,115.7338);
   hmcerror__14->SetBinError(11,111.6046);
   hmcerror__14->SetBinError(12,100.7039);
   hmcerror__14->SetBinError(13,97.37675);
   hmcerror__14->SetBinError(14,73.50297);
   hmcerror__14->SetBinError(15,61.29529);
   hmcerror__14->SetBinError(16,49.82344);
   hmcerror__14->SetBinError(17,44.82434);
   hmcerror__14->SetBinError(18,39.52063);
   hmcerror__14->SetBinError(19,38.46934);
   hmcerror__14->SetBinError(20,29.47386);
   hmcerror__14->SetBinError(21,29.07599);
   hmcerror__14->SetBinError(22,27.75127);
   hmcerror__14->SetBinError(23,18.45546);
   hmcerror__14->SetBinError(24,17.83595);
   hmcerror__14->SetBinError(25,15.80955);
   hmcerror__14->SetBinError(26,58.30504);
   hmcerror__14->SetEntries(5702.791);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3017[25] = {
   0,
   6,
   9,
   19,
   159,
   345,
   384,
   415,
   417,
   393,
   338,
   291,
   236,
   191,
   203,
   142,
   125,
   80,
   84,
   67,
   48,
   37,
   36,
   21,
   22};
   Double_t _felx3017[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3017[25] = {
   0,
   2.67925,
   3.19354,
   4.5151,
   12.60952,
   18.57418,
   19.59592,
   20.37155,
   20.42058,
   19.82423,
   18.38478,
   17.05872,
   15.36229,
   13.82027,
   14.24781,
   11.91638,
   11.18034,
   9.0683,
   9.2886,
   8.3119,
   7.0604,
   6.2203,
   6.1381,
   4.7354,
   4.8417};
   Double_t _fehx3017[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3017[25] = {
   1.1478,
   2.41858,
   2.9582,
   4.3011,
   12.60952,
   18.57418,
   19.59592,
   20.37155,
   20.42058,
   19.82423,
   18.38478,
   17.05872,
   15.36229,
   13.82027,
   14.24781,
   11.91638,
   11.18034,
   8.8665,
   9.0869,
   8.1094,
   6.8561,
   6.0141,
   5.9318,
   4.5229,
   4.6299};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-275,1225);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(481.1626);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4068.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.7","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 65.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 29.6","F");

   ci = 1493;
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

   ci = 1494;
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

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  63.5","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  47.6","F");

   ci = 1497;
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

   ci = 1498;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1499;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 3663.9","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 30.9","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 685.1","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 9.3","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3018[25] = {
   9.202069,
   2.213111,
   1.615059,
   0.5588762,
   0.3125549,
   0.3195717,
   0.3055963,
   0.2957832,
   0.292652,
   0.284905,
   0.2921141,
   0.3047674,
   0.3436471,
   0.281055,
   0.2946665,
   0.3007968,
   0.3158099,
   0.3224966,
   0.3705384,
   0.3714375,
   0.4091328,
   0.4291015,
   0.4091163,
   0.5055625,
   0.493046};
   Double_t _fehx3018[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3018[25] = {
   9.202069,
   2.213111,
   1.615059,
   0.5588762,
   0.3125549,
   0.3195717,
   0.3055963,
   0.2957832,
   0.292652,
   0.284905,
   0.2921141,
   0.3047674,
   0.3436471,
   0.281055,
   0.2946665,
   0.3007968,
   0.3158099,
   0.3224966,
   0.3705384,
   0.3714375,
   0.4091328,
   0.4291015,
   0.4091163,
   0.5055625,
   0.493046};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-275,1225);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3019[25] = {
   0.7312851,
   0.6892549,
   0.3977733,
   0.2401837,
   0.2628309,
   0.2642493,
   0.2562727,
   0.2555149,
   0.26635,
   0.2550194,
   0.2388992,
   0.2592383,
   0.2397999,
   0.2419486,
   0.2498516,
   0.2454335,
   0.2602357,
   0.243905,
   0.2425177,
   0.2536174,
   0.2451497,
   0.2554665,
   0.2554544,
   0.2398952,
   0.2410078};
   Double_t _fehx3019[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3019[25] = {
   0.7312851,
   0.6892549,
   0.3977733,
   0.2401837,
   0.2628309,
   0.2642493,
   0.2562727,
   0.2555149,
   0.26635,
   0.2550194,
   0.2388992,
   0.2592383,
   0.2397999,
   0.2419486,
   0.2498516,
   0.2454335,
   0.2602357,
   0.243905,
   0.2425177,
   0.2536174,
   0.2451497,
   0.2554665,
   0.2554544,
   0.2398952,
   0.2410078};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-275,1225);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3020[25] = {
   0,
   3.613258,
   2.197732,
   0.8696247,
   0.8317557,
   0.9514556,
   0.885403,
   0.974584,
   0.9452128,
   0.967459,
   0.884682,
   0.8806738,
   0.832855,
   0.730331,
   0.9758874,
   0.8572903,
   0.8806875,
   0.6528167,
   0.8090918,
   0.8443518,
   0.6754155,
   0.5721091,
   0.7980393,
   0.595248,
   0.6861048};
   Double_t _felx3020[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3020[25] = {
   0,
   1.61347,
   0.7798385,
   0.2066549,
   0.06596252,
   0.05122465,
   0.04518303,
   0.04784045,
   0.04628727,
   0.04880185,
   0.04812036,
   0.05162601,
   0.05421424,
   0.0528449,
   0.06849387,
   0.07194221,
   0.07877108,
   0.07399923,
   0.08946822,
   0.1047488,
   0.09934799,
   0.09618081,
   0.1360679,
   0.1342256,
   0.1509961};
   Double_t _fehx3020[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3020[25] = {
   1.168974,
   1.456492,
   0.7223702,
   0.1968602,
   0.06596252,
   0.05122465,
   0.04518303,
   0.04784045,
   0.04628727,
   0.04880185,
   0.04812036,
   0.05162601,
   0.05421424,
   0.0528449,
   0.06849387,
   0.07194221,
   0.07877108,
   0.0723525,
   0.08752544,
   0.1021968,
   0.09647325,
   0.09299247,
   0.1314947,
   0.1282023,
   0.1443908};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-275,1225);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(5.576726);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
