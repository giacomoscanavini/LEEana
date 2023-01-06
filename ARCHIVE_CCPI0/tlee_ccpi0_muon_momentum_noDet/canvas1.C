#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 17:16:32 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-230.7692,-23.10923,1692.308,2555.394);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hmc__1->SetBinContent(1,95.42709);
   hmc__1->SetBinContent(2,369.1645);
   hmc__1->SetBinContent(3,713.5064);
   hmc__1->SetBinContent(4,1026.989);
   hmc__1->SetBinContent(5,1155.461);
   hmc__1->SetBinContent(6,951.5239);
   hmc__1->SetBinContent(7,738.0272);
   hmc__1->SetBinContent(8,561.1242);
   hmc__1->SetBinContent(9,452.795);
   hmc__1->SetBinContent(10,344.9383);
   hmc__1->SetBinContent(11,282.0541);
   hmc__1->SetBinContent(12,180.7099);
   hmc__1->SetBinContent(13,144.6502);
   hmc__1->SetBinContent(14,107.4003);
   hmc__1->SetBinContent(15,88.73619);
   hmc__1->SetBinContent(16,68.80733);
   hmc__1->SetBinContent(17,60.02306);
   hmc__1->SetBinContent(18,39.98268);
   hmc__1->SetBinContent(19,31.69139);
   hmc__1->SetBinContent(20,29.87648);
   hmc__1->SetBinContent(21,20.56617);
   hmc__1->SetBinContent(22,14.33201);
   hmc__1->SetBinContent(23,10.72638);
   hmc__1->SetBinContent(24,11.43575);
   hmc__1->SetBinContent(25,5.473745);
   hmc__1->SetBinContent(26,22.08125);
   hmc__1->SetBinError(1,19.47662);
   hmc__1->SetBinError(2,74.62484);
   hmc__1->SetBinError(3,153.8191);
   hmc__1->SetBinError(4,232.5236);
   hmc__1->SetBinError(5,263.3141);
   hmc__1->SetBinError(6,225.8729);
   hmc__1->SetBinError(7,170.4606);
   hmc__1->SetBinError(8,129.5343);
   hmc__1->SetBinError(9,108.4947);
   hmc__1->SetBinError(10,81.51988);
   hmc__1->SetBinError(11,68.3608);
   hmc__1->SetBinError(12,44.70299);
   hmc__1->SetBinError(13,34.35653);
   hmc__1->SetBinError(14,26.27538);
   hmc__1->SetBinError(15,23.50821);
   hmc__1->SetBinError(16,17.14513);
   hmc__1->SetBinError(17,14.3316);
   hmc__1->SetBinError(18,10.5748);
   hmc__1->SetBinError(19,7.128117);
   hmc__1->SetBinError(20,8.292775);
   hmc__1->SetBinError(21,6.013722);
   hmc__1->SetBinError(22,3.952495);
   hmc__1->SetBinError(23,2.995193);
   hmc__1->SetBinError(24,5.486792);
   hmc__1->SetBinError(25,1.98816);
   hmc__1->SetBinError(26,5.303927);
   hmc__1->SetMinimum(-23.10923);
   hmc__1->SetMaximum(2426.469);
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
   hs1_stack_1->SetMaximum(1213.234);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,1.123658);
   hbadmatch_stack_1->SetBinContent(2,3.477913);
   hbadmatch_stack_1->SetBinContent(3,4.890284);
   hbadmatch_stack_1->SetBinContent(4,7.877807);
   hbadmatch_stack_1->SetBinContent(5,5.892015);
   hbadmatch_stack_1->SetBinContent(6,4.553399);
   hbadmatch_stack_1->SetBinContent(7,1.877648);
   hbadmatch_stack_1->SetBinContent(8,2.026948);
   hbadmatch_stack_1->SetBinContent(9,0.8770706);
   hbadmatch_stack_1->SetBinContent(10,1.376319);
   hbadmatch_stack_1->SetBinContent(11,0.3917402);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.5188295);
   hbadmatch_stack_1->SetBinError(2,0.9383084);
   hbadmatch_stack_1->SetBinError(3,1.106526);
   hbadmatch_stack_1->SetBinError(4,1.479887);
   hbadmatch_stack_1->SetBinError(5,1.325381);
   hbadmatch_stack_1->SetBinError(6,1.207926);
   hbadmatch_stack_1->SetBinError(7,0.6616386);
   hbadmatch_stack_1->SetBinError(8,0.7250948);
   hbadmatch_stack_1->SetBinError(9,0.5197486);
   hbadmatch_stack_1->SetBinError(10,0.6470723);
   hbadmatch_stack_1->SetBinError(11,0.2770047);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,4.378797);
   hext_stack_2->SetBinContent(2,18.50709);
   hext_stack_2->SetBinContent(3,21.48456);
   hext_stack_2->SetBinContent(4,15.49932);
   hext_stack_2->SetBinContent(5,32.71917);
   hext_stack_2->SetBinContent(6,12.84947);
   hext_stack_2->SetBinContent(7,6.470814);
   hext_stack_2->SetBinContent(8,4.132192);
   hext_stack_2->SetBinContent(9,6.844282);
   hext_stack_2->SetBinContent(10,8.056898);
   hext_stack_2->SetBinContent(11,6.829921);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,2.890854);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(1,1.350755);
   hext_stack_2->SetBinError(2,2.945673);
   hext_stack_2->SetBinError(3,3.259465);
   hext_stack_2->SetBinError(4,2.39433);
   hext_stack_2->SetBinError(5,4.170298);
   hext_stack_2->SetBinError(6,2.482788);
   hext_stack_2->SetBinError(7,1.686238);
   hext_stack_2->SetBinError(8,1.282292);
   hext_stack_2->SetBinError(9,1.917917);
   hext_stack_2->SetBinError(10,2.091787);
   hext_stack_2->SetBinError(11,2.020101);
   hext_stack_2->SetBinError(12,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.2665913);
   hdirt_stack_3->SetBinContent(2,0.853712);
   hdirt_stack_3->SetBinContent(3,0.5484001);
   hdirt_stack_3->SetBinContent(4,0.536227);
   hdirt_stack_3->SetBinContent(5,1.112721);
   hdirt_stack_3->SetBinContent(6,0.7759796);
   hdirt_stack_3->SetBinContent(7,1.245223);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.165896);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(1,0.2665913);
   hdirt_stack_3->SetBinError(2,0.4538079);
   hdirt_stack_3->SetBinError(3,0.3260268);
   hdirt_stack_3->SetBinError(4,0.3148224);
   hdirt_stack_3->SetBinError(5,0.5866105);
   hdirt_stack_3->SetBinError(6,0.458477);
   hdirt_stack_3->SetBinError(7,0.5390458);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.165896);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,2.251088);
   houtFV_stack_4->SetBinContent(2,7.961452);
   houtFV_stack_4->SetBinContent(3,10.59098);
   houtFV_stack_4->SetBinContent(4,8.301129);
   houtFV_stack_4->SetBinContent(5,7.294258);
   houtFV_stack_4->SetBinContent(6,8.148026);
   houtFV_stack_4->SetBinContent(7,5.038499);
   houtFV_stack_4->SetBinContent(8,4.126156);
   houtFV_stack_4->SetBinContent(9,1.547316);
   houtFV_stack_4->SetBinContent(10,1.881302);
   houtFV_stack_4->SetBinContent(11,3.331824);
   houtFV_stack_4->SetBinContent(12,0.9801958);
   houtFV_stack_4->SetBinContent(13,1.322064);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(1,0.7534707);
   houtFV_stack_4->SetBinError(2,1.368516);
   houtFV_stack_4->SetBinError(3,1.635841);
   houtFV_stack_4->SetBinError(4,1.475074);
   houtFV_stack_4->SetBinError(5,1.458176);
   houtFV_stack_4->SetBinError(6,1.489063);
   houtFV_stack_4->SetBinError(7,1.138683);
   houtFV_stack_4->SetBinError(8,1.8457);
   houtFV_stack_4->SetBinError(9,0.5994864);
   houtFV_stack_4->SetBinError(10,0.9785089);
   houtFV_stack_4->SetBinError(11,1.158736);
   houtFV_stack_4->SetBinError(12,0.4383608);
   houtFV_stack_4->SetBinError(13,0.5554667);
   houtFV_stack_4->SetBinError(14,0.2781975);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.08121286);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.07237024);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05085714);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06101281);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03086938);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1492757);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.271291);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2756118);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1245411);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1975909);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1714829);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.597936);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.55571);
   hNCpi0inFVres_stack_7->SetBinContent(3,22.05824);
   hNCpi0inFVres_stack_7->SetBinContent(4,20.2017);
   hNCpi0inFVres_stack_7->SetBinContent(5,18.14427);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.89442);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.044535);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.96926);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.712775);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.776821);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4711988);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2684887);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.6323402);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2757436);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4340664);
   hNCpi0inFVres_stack_7->SetBinError(2,1.203269);
   hNCpi0inFVres_stack_7->SetBinError(3,1.663904);
   hNCpi0inFVres_stack_7->SetBinError(4,1.536565);
   hNCpi0inFVres_stack_7->SetBinError(5,1.529505);
   hNCpi0inFVres_stack_7->SetBinError(6,1.242401);
   hNCpi0inFVres_stack_7->SetBinError(7,1.27404);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7190881);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5449362);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5156326);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1894352);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1503874);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5043336);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2494091);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.524235);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.80394);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.04245);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.999);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.84084);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.19919);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.46456);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.221228);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.1131);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.407729);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.199441);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3649259);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7237521);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3370259);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05306552);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8077101);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.290621);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.204709);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.615676);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.570224);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.363047);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8502716);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8617024);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6079921);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4523567);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6962391);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2113503);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3959521);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2095007);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,50.95554);
   hCCpi0inFV_stack_10->SetBinContent(2,205.9164);
   hCCpi0inFV_stack_10->SetBinContent(3,497.3845);
   hCCpi0inFV_stack_10->SetBinContent(4,766.4888);
   hCCpi0inFV_stack_10->SetBinContent(5,850.4728);
   hCCpi0inFV_stack_10->SetBinContent(6,731.1941);
   hCCpi0inFV_stack_10->SetBinContent(7,596.3292);
   hCCpi0inFV_stack_10->SetBinContent(8,466.0719);
   hCCpi0inFV_stack_10->SetBinContent(9,372.3796);
   hCCpi0inFV_stack_10->SetBinContent(10,278.5884);
   hCCpi0inFV_stack_10->SetBinContent(11,233.6051);
   hCCpi0inFV_stack_10->SetBinContent(12,147.3213);
   hCCpi0inFV_stack_10->SetBinContent(13,119.7277);
   hCCpi0inFV_stack_10->SetBinContent(14,88.72357);
   hCCpi0inFV_stack_10->SetBinContent(15,73.0419);
   hCCpi0inFV_stack_10->SetBinContent(16,55.05523);
   hCCpi0inFV_stack_10->SetBinContent(17,49.7128);
   hCCpi0inFV_stack_10->SetBinContent(18,33.00034);
   hCCpi0inFV_stack_10->SetBinContent(19,26.17672);
   hCCpi0inFV_stack_10->SetBinContent(20,22.45182);
   hCCpi0inFV_stack_10->SetBinContent(21,17.13236);
   hCCpi0inFV_stack_10->SetBinContent(22,11.06247);
   hCCpi0inFV_stack_10->SetBinContent(23,7.915478);
   hCCpi0inFV_stack_10->SetBinContent(24,7.754637);
   hCCpi0inFV_stack_10->SetBinContent(25,4.740137);
   hCCpi0inFV_stack_10->SetBinContent(26,19.02158);
   hCCpi0inFV_stack_10->SetBinError(1,3.572972);
   hCCpi0inFV_stack_10->SetBinError(2,7.155311);
   hCCpi0inFV_stack_10->SetBinError(3,11.22345);
   hCCpi0inFV_stack_10->SetBinError(4,13.9396);
   hCCpi0inFV_stack_10->SetBinError(5,14.71009);
   hCCpi0inFV_stack_10->SetBinError(6,13.59801);
   hCCpi0inFV_stack_10->SetBinError(7,12.30087);
   hCCpi0inFV_stack_10->SetBinError(8,10.83595);
   hCCpi0inFV_stack_10->SetBinError(9,9.812705);
   hCCpi0inFV_stack_10->SetBinError(10,8.329817);
   hCCpi0inFV_stack_10->SetBinError(11,7.69078);
   hCCpi0inFV_stack_10->SetBinError(12,6.016413);
   hCCpi0inFV_stack_10->SetBinError(13,5.468647);
   hCCpi0inFV_stack_10->SetBinError(14,4.786657);
   hCCpi0inFV_stack_10->SetBinError(15,4.276931);
   hCCpi0inFV_stack_10->SetBinError(16,3.720823);
   hCCpi0inFV_stack_10->SetBinError(17,3.547873);
   hCCpi0inFV_stack_10->SetBinError(18,2.888117);
   hCCpi0inFV_stack_10->SetBinError(19,2.522705);
   hCCpi0inFV_stack_10->SetBinError(20,2.386944);
   hCCpi0inFV_stack_10->SetBinError(21,2.108781);
   hCCpi0inFV_stack_10->SetBinError(22,1.650225);
   hCCpi0inFV_stack_10->SetBinError(23,1.358174);
   hCCpi0inFV_stack_10->SetBinError(24,1.468871);
   hCCpi0inFV_stack_10->SetBinError(25,1.128604);
   hCCpi0inFV_stack_10->SetBinError(26,2.223559);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,2.050601);
   hNCinFV_stack_11->SetBinContent(2,7.32594);
   hNCinFV_stack_11->SetBinContent(3,9.002789);
   hNCinFV_stack_11->SetBinContent(4,12.89943);
   hNCinFV_stack_11->SetBinContent(5,8.609358);
   hNCinFV_stack_11->SetBinContent(6,5.908596);
   hNCinFV_stack_11->SetBinContent(7,1.610679);
   hNCinFV_stack_11->SetBinContent(8,2.145881);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,0.9303237);
   hNCinFV_stack_11->SetBinContent(11,1.465526);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.7068742);
   hNCinFV_stack_11->SetBinError(2,1.388227);
   hNCinFV_stack_11->SetBinError(3,1.469275);
   hNCinFV_stack_11->SetBinError(4,1.820641);
   hNCinFV_stack_11->SetBinError(5,1.442698);
   hNCinFV_stack_11->SetBinError(6,1.225272);
   hNCinFV_stack_11->SetBinError(7,0.6806271);
   hNCinFV_stack_11->SetBinError(8,0.785499);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.4814682);
   hNCinFV_stack_11->SetBinError(11,0.6209405);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,28.12703);
   hnumuCCinFV_stack_12->SetBinContent(2,97.00028);
   hnumuCCinFV_stack_12->SetBinContent(3,128.0375);
   hnumuCCinFV_stack_12->SetBinContent(4,173.4208);
   hnumuCCinFV_stack_12->SetBinContent(5,213.6193);
   hnumuCCinFV_stack_12->SetBinContent(6,163.3934);
   hnumuCCinFV_stack_12->SetBinContent(7,110.0173);
   hnumuCCinFV_stack_12->SetBinContent(8,74.16418);
   hnumuCCinFV_stack_12->SetBinContent(9,65.39757);
   hnumuCCinFV_stack_12->SetBinContent(10,50.55779);
   hnumuCCinFV_stack_12->SetBinContent(11,33.22243);
   hnumuCCinFV_stack_12->SetBinContent(12,31.17173);
   hnumuCCinFV_stack_12->SetBinContent(13,20.54479);
   hnumuCCinFV_stack_12->SetBinContent(14,17.20897);
   hnumuCCinFV_stack_12->SetBinContent(15,14.27136);
   hnumuCCinFV_stack_12->SetBinContent(16,10.41773);
   hnumuCCinFV_stack_12->SetBinContent(17,8.953737);
   hnumuCCinFV_stack_12->SetBinContent(18,6.731511);
   hnumuCCinFV_stack_12->SetBinContent(19,5.514675);
   hnumuCCinFV_stack_12->SetBinContent(20,6.284595);
   hnumuCCinFV_stack_12->SetBinContent(21,3.184031);
   hnumuCCinFV_stack_12->SetBinContent(22,3.269539);
   hnumuCCinFV_stack_12->SetBinContent(23,2.810899);
   hnumuCCinFV_stack_12->SetBinContent(24,3.681114);
   hnumuCCinFV_stack_12->SetBinContent(25,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(26,2.622175);
   hnumuCCinFV_stack_12->SetBinError(1,2.998381);
   hnumuCCinFV_stack_12->SetBinError(2,5.459231);
   hnumuCCinFV_stack_12->SetBinError(3,5.834033);
   hnumuCCinFV_stack_12->SetBinError(4,7.102517);
   hnumuCCinFV_stack_12->SetBinError(5,9.018679);
   hnumuCCinFV_stack_12->SetBinError(6,6.846013);
   hnumuCCinFV_stack_12->SetBinError(7,5.976553);
   hnumuCCinFV_stack_12->SetBinError(8,4.651373);
   hnumuCCinFV_stack_12->SetBinError(9,4.293773);
   hnumuCCinFV_stack_12->SetBinError(10,3.805107);
   hnumuCCinFV_stack_12->SetBinError(11,2.908744);
   hnumuCCinFV_stack_12->SetBinError(12,2.988542);
   hnumuCCinFV_stack_12->SetBinError(13,2.25428);
   hnumuCCinFV_stack_12->SetBinError(14,2.138984);
   hnumuCCinFV_stack_12->SetBinError(15,2.89645);
   hnumuCCinFV_stack_12->SetBinError(16,1.634575);
   hnumuCCinFV_stack_12->SetBinError(17,1.504415);
   hnumuCCinFV_stack_12->SetBinError(18,2.032748);
   hnumuCCinFV_stack_12->SetBinError(19,1.195508);
   hnumuCCinFV_stack_12->SetBinError(20,2.570651);
   hnumuCCinFV_stack_12->SetBinError(21,0.8790535);
   hnumuCCinFV_stack_12->SetBinError(22,0.9413781);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,1.070405);
   hnueCCinFV_stack_13->SetBinContent(2,3.74448);
   hnueCCinFV_stack_13->SetBinContent(3,5.244975);
   hnueCCinFV_stack_13->SetBinContent(4,3.462874);
   hnueCCinFV_stack_13->SetBinContent(5,1.322064);
   hnueCCinFV_stack_13->SetBinContent(6,1.607298);
   hnueCCinFV_stack_13->SetBinContent(7,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,0.5545368);
   hnueCCinFV_stack_13->SetBinError(2,1.012762);
   hnueCCinFV_stack_13->SetBinError(3,1.18398);
   hnueCCinFV_stack_13->SetBinError(4,0.961023);
   hnueCCinFV_stack_13->SetBinError(5,0.5554667);
   hnueCCinFV_stack_13->SetBinError(6,0.6796534);
   hnueCCinFV_stack_13->SetBinError(7,0.48078);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(1,95.42709);
   hmcerror__2->SetBinContent(2,369.1645);
   hmcerror__2->SetBinContent(3,713.5064);
   hmcerror__2->SetBinContent(4,1026.989);
   hmcerror__2->SetBinContent(5,1155.461);
   hmcerror__2->SetBinContent(6,951.5239);
   hmcerror__2->SetBinContent(7,738.0272);
   hmcerror__2->SetBinContent(8,561.1242);
   hmcerror__2->SetBinContent(9,452.795);
   hmcerror__2->SetBinContent(10,344.9383);
   hmcerror__2->SetBinContent(11,282.0541);
   hmcerror__2->SetBinContent(12,180.7099);
   hmcerror__2->SetBinContent(13,144.6502);
   hmcerror__2->SetBinContent(14,107.4003);
   hmcerror__2->SetBinContent(15,88.73619);
   hmcerror__2->SetBinContent(16,68.80733);
   hmcerror__2->SetBinContent(17,60.02306);
   hmcerror__2->SetBinContent(18,39.98268);
   hmcerror__2->SetBinContent(19,31.69139);
   hmcerror__2->SetBinContent(20,29.87648);
   hmcerror__2->SetBinContent(21,20.56617);
   hmcerror__2->SetBinContent(22,14.33201);
   hmcerror__2->SetBinContent(23,10.72638);
   hmcerror__2->SetBinContent(24,11.43575);
   hmcerror__2->SetBinContent(25,5.473745);
   hmcerror__2->SetBinContent(26,22.08125);
   hmcerror__2->SetBinError(1,19.47662);
   hmcerror__2->SetBinError(2,74.62484);
   hmcerror__2->SetBinError(3,153.8191);
   hmcerror__2->SetBinError(4,232.5236);
   hmcerror__2->SetBinError(5,263.3141);
   hmcerror__2->SetBinError(6,225.8729);
   hmcerror__2->SetBinError(7,170.4606);
   hmcerror__2->SetBinError(8,129.5343);
   hmcerror__2->SetBinError(9,108.4947);
   hmcerror__2->SetBinError(10,81.51988);
   hmcerror__2->SetBinError(11,68.3608);
   hmcerror__2->SetBinError(12,44.70299);
   hmcerror__2->SetBinError(13,34.35653);
   hmcerror__2->SetBinError(14,26.27538);
   hmcerror__2->SetBinError(15,23.50821);
   hmcerror__2->SetBinError(16,17.14513);
   hmcerror__2->SetBinError(17,14.3316);
   hmcerror__2->SetBinError(18,10.5748);
   hmcerror__2->SetBinError(19,7.128117);
   hmcerror__2->SetBinError(20,8.292775);
   hmcerror__2->SetBinError(21,6.013722);
   hmcerror__2->SetBinError(22,3.952495);
   hmcerror__2->SetBinError(23,2.995193);
   hmcerror__2->SetBinError(24,5.486792);
   hmcerror__2->SetBinError(25,1.98816);
   hmcerror__2->SetBinError(26,5.303927);
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
   104,
   336,
   603,
   968,
   1100,
   958,
   718,
   503,
   381,
   281,
   243,
   213,
   153,
   88,
   73,
   48,
   39,
   32,
   25,
   18,
   19,
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
   10.19804,
   18.3303,
   24.55606,
   31.1127,
   33.16625,
   30.95158,
   26.79552,
   22.42766,
   19.51922,
   16.76305,
   15.58846,
   14.59452,
   12.36932,
   9.5036,
   8.6693,
   7.0604,
   6.3813,
   5.7977,
   5.1474,
   4.4008,
   4.5151,
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
   10.19804,
   18.3303,
   24.55606,
   31.1127,
   33.16625,
   30.95158,
   26.79552,
   22.42766,
   19.51922,
   16.76305,
   15.58846,
   14.59452,
   12.36932,
   9.3021,
   8.4672,
   6.8561,
   6.1757,
   5.5904,
   4.9374,
   4.1858,
   4.3011,
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
   Graph_Graph3001->SetMinimum(3.726414);
   Graph_Graph3001->SetMaximum(1246.069);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=37.0/25","");
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5713.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_muon_momentum_all");
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
   0.2040995,
   0.2021452,
   0.215582,
   0.2264129,
   0.2278865,
   0.2373802,
   0.230968,
   0.2308478,
   0.2396112,
   0.2363318,
   0.2423677,
   0.2473743,
   0.2375145,
   0.244649,
   0.2649225,
   0.249176,
   0.2387682,
   0.2644845,
   0.2249228,
   0.2775687,
   0.2924084,
   0.2757809,
   0.2792362,
   0.4797929,
   0.3632175};
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
   0.2040995,
   0.2021452,
   0.215582,
   0.2264129,
   0.2278865,
   0.2373802,
   0.230968,
   0.2308478,
   0.2396112,
   0.2363318,
   0.2423677,
   0.2473743,
   0.2375145,
   0.244649,
   0.2649225,
   0.249176,
   0.2387682,
   0.2644845,
   0.2249228,
   0.2775687,
   0.2924084,
   0.2757809,
   0.2792362,
   0.4797929,
   0.3632175};
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
   Graph_Graph3002->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
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
   0.2040995,
   0.2021452,
   0.215582,
   0.2264129,
   0.2278865,
   0.2373802,
   0.230968,
   0.2308478,
   0.2396112,
   0.2363318,
   0.2423677,
   0.2473743,
   0.2375145,
   0.244649,
   0.2649225,
   0.249176,
   0.2387682,
   0.2644845,
   0.2249228,
   0.2775687,
   0.2924084,
   0.2757809,
   0.2792362,
   0.4797929,
   0.3632175};
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
   0.2040995,
   0.2021452,
   0.215582,
   0.2264129,
   0.2278865,
   0.2373802,
   0.230968,
   0.2308478,
   0.2396112,
   0.2363318,
   0.2423677,
   0.2473743,
   0.2375145,
   0.244649,
   0.2649225,
   0.249176,
   0.2387682,
   0.2644845,
   0.2249228,
   0.2775687,
   0.2924084,
   0.2757809,
   0.2792362,
   0.4797929,
   0.3632175};
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
   1.089837,
   0.9101634,
   0.8451221,
   0.942561,
   0.9520006,
   1.006806,
   0.9728639,
   0.8964147,
   0.8414404,
   0.8146385,
   0.8615369,
   1.178685,
   1.057724,
   0.8193646,
   0.8226632,
   0.6976001,
   0.6497502,
   0.8003466,
   0.7888578,
   0.6024806,
   0.9238471,
   0.9070604,
   0.8390531,
   0.6121155,
   1.461522};
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
   0.1068673,
   0.04965348,
   0.03441603,
   0.03029506,
   0.0287039,
   0.03252843,
   0.03630696,
   0.03996916,
   0.0431083,
   0.04859726,
   0.05526762,
   0.08076214,
   0.08551191,
   0.08848765,
   0.09769745,
   0.1026112,
   0.1063141,
   0.1450053,
   0.1624227,
   0.1472998,
   0.2195401,
   0.2635799,
   0.2977278,
   0.2500527,
   0.5536794};
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
   0.1068673,
   0.04965348,
   0.03441603,
   0.03029506,
   0.0287039,
   0.03252843,
   0.03630696,
   0.03996916,
   0.0431083,
   0.04859726,
   0.05526762,
   0.08076214,
   0.08551191,
   0.08661149,
   0.09541992,
   0.099642,
   0.1028888,
   0.1398206,
   0.1557963,
   0.1401035,
   0.2091347,
   0.2480601,
   0.2757874,
   0.228278,
   0.5096328};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.2011536);
   Graph_Graph3004->SetMaximum(2.132064);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_muon_momentum_all",25,0,1500);

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
