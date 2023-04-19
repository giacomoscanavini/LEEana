#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 12:32:23 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-184.6154,-21.86,1353.846,2417.256);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,596.5992);
   hmc__10->SetBinContent(2,1091.291);
   hmc__10->SetBinContent(3,937.0533);
   hmc__10->SetBinContent(4,673.2076);
   hmc__10->SetBinContent(5,448.5605);
   hmc__10->SetBinContent(6,294.1058);
   hmc__10->SetBinContent(7,165.3452);
   hmc__10->SetBinContent(8,104.4746);
   hmc__10->SetBinContent(9,83.00626);
   hmc__10->SetBinContent(10,56.86009);
   hmc__10->SetBinContent(11,46.5519);
   hmc__10->SetBinContent(12,39.17454);
   hmc__10->SetBinContent(13,301.0331);
   hmc__10->SetBinError(1,124.3042);
   hmc__10->SetBinError(2,229.8413);
   hmc__10->SetBinError(3,212.1256);
   hmc__10->SetBinError(4,170.357);
   hmc__10->SetBinError(5,129.3481);
   hmc__10->SetBinError(6,74.11602);
   hmc__10->SetBinError(7,45.19465);
   hmc__10->SetBinError(8,29.34329);
   hmc__10->SetBinError(9,29.60484);
   hmc__10->SetBinError(10,17.67675);
   hmc__10->SetBinError(11,18.91801);
   hmc__10->SetBinError(12,15.01874);
   hmc__10->SetBinError(13,72.69192);
   hmc__10->SetMinimum(-21.86);
   hmc__10->SetMaximum(2295.3);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(1145.855);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,20.11737);
   hbadmatch_stack_1->SetBinContent(2,32.36505);
   hbadmatch_stack_1->SetBinContent(3,19.1519);
   hbadmatch_stack_1->SetBinContent(4,14.01894);
   hbadmatch_stack_1->SetBinContent(5,11.12523);
   hbadmatch_stack_1->SetBinContent(6,5.55444);
   hbadmatch_stack_1->SetBinContent(7,2.969716);
   hbadmatch_stack_1->SetBinContent(8,2.708836);
   hbadmatch_stack_1->SetBinContent(9,1.882859);
   hbadmatch_stack_1->SetBinContent(10,0.9286332);
   hbadmatch_stack_1->SetBinContent(11,1.492391);
   hbadmatch_stack_1->SetBinContent(12,2.124861);
   hbadmatch_stack_1->SetBinContent(13,7.9817);
   hbadmatch_stack_1->SetBinError(1,2.445641);
   hbadmatch_stack_1->SetBinError(2,3.853223);
   hbadmatch_stack_1->SetBinError(3,2.262862);
   hbadmatch_stack_1->SetBinError(4,2.446881);
   hbadmatch_stack_1->SetBinError(5,1.974019);
   hbadmatch_stack_1->SetBinError(6,1.200119);
   hbadmatch_stack_1->SetBinError(7,0.9722799);
   hbadmatch_stack_1->SetBinError(8,0.8405561);
   hbadmatch_stack_1->SetBinError(9,0.6878336);
   hbadmatch_stack_1->SetBinError(10,0.48078);
   hbadmatch_stack_1->SetBinError(11,0.695748);
   hbadmatch_stack_1->SetBinError(12,0.7817948);
   hbadmatch_stack_1->SetBinError(13,1.556556);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,60.70892);
   hext_stack_2->SetBinContent(2,122.2902);
   hext_stack_2->SetBinContent(3,83.22694);
   hext_stack_2->SetBinContent(4,49.07483);
   hext_stack_2->SetBinContent(5,43.2644);
   hext_stack_2->SetBinContent(6,33.92144);
   hext_stack_2->SetBinContent(7,19.23097);
   hext_stack_2->SetBinContent(8,8.828205);
   hext_stack_2->SetBinContent(9,11.26062);
   hext_stack_2->SetBinContent(10,6.318);
   hext_stack_2->SetBinContent(11,6.071396);
   hext_stack_2->SetBinContent(12,3.972198);
   hext_stack_2->SetBinContent(13,35.63722);
   hext_stack_2->SetBinError(1,5.169199);
   hext_stack_2->SetBinError(2,7.162633);
   hext_stack_2->SetBinError(3,5.863794);
   hext_stack_2->SetBinError(4,4.573536);
   hext_stack_2->SetBinError(5,4.26828);
   hext_stack_2->SetBinError(6,3.832237);
   hext_stack_2->SetBinError(7,2.796129);
   hext_stack_2->SetBinError(8,1.942999);
   hext_stack_2->SetBinError(9,2.228987);
   hext_stack_2->SetBinError(10,1.630074);
   hext_stack_2->SetBinError(11,1.573809);
   hext_stack_2->SetBinError(12,1.288106);
   hext_stack_2->SetBinError(13,3.899515);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,12.71463);
   hdirt_stack_3->SetBinContent(2,14.9133);
   hdirt_stack_3->SetBinContent(3,8.045734);
   hdirt_stack_3->SetBinContent(4,6.113978);
   hdirt_stack_3->SetBinContent(5,4.607853);
   hdirt_stack_3->SetBinContent(6,4.131733);
   hdirt_stack_3->SetBinContent(7,2.911826);
   hdirt_stack_3->SetBinContent(8,2.022682);
   hdirt_stack_3->SetBinContent(9,1.438663);
   hdirt_stack_3->SetBinContent(10,0.8581587);
   hdirt_stack_3->SetBinContent(11,0.6094658);
   hdirt_stack_3->SetBinContent(12,1.249728);
   hdirt_stack_3->SetBinContent(13,3.87205);
   hdirt_stack_3->SetBinError(1,1.830287);
   hdirt_stack_3->SetBinError(2,2.176819);
   hdirt_stack_3->SetBinError(3,1.387221);
   hdirt_stack_3->SetBinError(4,1.491185);
   hdirt_stack_3->SetBinError(5,1.147912);
   hdirt_stack_3->SetBinError(6,1.122174);
   hdirt_stack_3->SetBinError(7,0.8816244);
   hdirt_stack_3->SetBinError(8,1.194892);
   hdirt_stack_3->SetBinError(9,0.6151616);
   hdirt_stack_3->SetBinError(10,0.5193504);
   hdirt_stack_3->SetBinError(11,0.3615724);
   hdirt_stack_3->SetBinError(12,0.6539975);
   hdirt_stack_3->SetBinError(13,1.092443);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,103.4444);
   houtFV_stack_4->SetBinContent(2,132.0794);
   houtFV_stack_4->SetBinContent(3,95.17433);
   houtFV_stack_4->SetBinContent(4,71.37747);
   houtFV_stack_4->SetBinContent(5,42.15366);
   houtFV_stack_4->SetBinContent(6,30.3573);
   houtFV_stack_4->SetBinContent(7,22.55398);
   houtFV_stack_4->SetBinContent(8,13.54042);
   houtFV_stack_4->SetBinContent(9,9.349197);
   houtFV_stack_4->SetBinContent(10,9.414873);
   houtFV_stack_4->SetBinContent(11,7.012741);
   houtFV_stack_4->SetBinContent(12,8.600941);
   houtFV_stack_4->SetBinContent(13,42.19296);
   houtFV_stack_4->SetBinError(1,5.100595);
   houtFV_stack_4->SetBinError(2,5.87144);
   houtFV_stack_4->SetBinError(3,4.870719);
   houtFV_stack_4->SetBinError(4,4.348604);
   houtFV_stack_4->SetBinError(5,3.227231);
   houtFV_stack_4->SetBinError(6,2.802927);
   houtFV_stack_4->SetBinError(7,2.362902);
   houtFV_stack_4->SetBinError(8,1.806331);
   houtFV_stack_4->SetBinError(9,1.557932);
   houtFV_stack_4->SetBinError(10,1.58272);
   houtFV_stack_4->SetBinError(11,1.383716);
   houtFV_stack_4->SetBinError(12,1.49091);
   houtFV_stack_4->SetBinError(13,3.292519);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.586176);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,13.39987);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.26934);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,18.73974);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,15.14096);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.492929);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.071752);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.291552);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.769662);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.198708);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.016858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.212158);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.91567);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9185922);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.243649);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.40072);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.430211);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.312078);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9702444);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6034667);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6280141);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.402705);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3549294);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3080627);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3167831);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.045391);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.022426);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.375748);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.37442);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.50644);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7949858);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8087721);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4557515);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.592018);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.6143865);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.392178);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2483746);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3187231);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07381642);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,174.7527);
   hNCpi0inFVres_stack_7->SetBinContent(2,379.524);
   hNCpi0inFVres_stack_7->SetBinContent(3,372.1798);
   hNCpi0inFVres_stack_7->SetBinContent(4,271.5286);
   hNCpi0inFVres_stack_7->SetBinContent(5,165.8085);
   hNCpi0inFVres_stack_7->SetBinContent(6,97.46605);
   hNCpi0inFVres_stack_7->SetBinContent(7,54.20644);
   hNCpi0inFVres_stack_7->SetBinContent(8,30.6119);
   hNCpi0inFVres_stack_7->SetBinContent(9,25.8096);
   hNCpi0inFVres_stack_7->SetBinContent(10,16.80914);
   hNCpi0inFVres_stack_7->SetBinContent(11,14.03641);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.713297);
   hNCpi0inFVres_stack_7->SetBinContent(13,82.51128);
   hNCpi0inFVres_stack_7->SetBinError(1,4.325693);
   hNCpi0inFVres_stack_7->SetBinError(2,6.352751);
   hNCpi0inFVres_stack_7->SetBinError(3,6.305114);
   hNCpi0inFVres_stack_7->SetBinError(4,5.419113);
   hNCpi0inFVres_stack_7->SetBinError(5,4.218977);
   hNCpi0inFVres_stack_7->SetBinError(6,3.217432);
   hNCpi0inFVres_stack_7->SetBinError(7,2.409444);
   hNCpi0inFVres_stack_7->SetBinError(8,1.777113);
   hNCpi0inFVres_stack_7->SetBinError(9,1.664299);
   hNCpi0inFVres_stack_7->SetBinError(10,1.278042);
   hNCpi0inFVres_stack_7->SetBinError(11,1.190047);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9079015);
   hNCpi0inFVres_stack_7->SetBinError(13,3.013227);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,37.71463);
   hNCpi0inFVdis_stack_8->SetBinContent(2,75.98228);
   hNCpi0inFVdis_stack_8->SetBinContent(3,59.29156);
   hNCpi0inFVdis_stack_8->SetBinContent(4,47.32323);
   hNCpi0inFVdis_stack_8->SetBinContent(5,34.87531);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.47912);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.75451);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.714634);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.054412);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.98822);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.886166);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.22047);
   hNCpi0inFVdis_stack_8->SetBinContent(13,21.01276);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.980229);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.808401);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.53845);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.19734);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.954163);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.656838);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.232041);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9704782);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8890948);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6281686);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5399856);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5892173);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.470354);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1994106);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,83.99596);
   hCCpi0inFV_stack_10->SetBinContent(2,153.3627);
   hCCpi0inFV_stack_10->SetBinContent(3,149.6471);
   hCCpi0inFV_stack_10->SetBinContent(4,109.7989);
   hCCpi0inFV_stack_10->SetBinContent(5,70.67004);
   hCCpi0inFV_stack_10->SetBinContent(6,47.01265);
   hCCpi0inFV_stack_10->SetBinContent(7,25.64354);
   hCCpi0inFV_stack_10->SetBinContent(8,14.49433);
   hCCpi0inFV_stack_10->SetBinContent(9,13.12898);
   hCCpi0inFV_stack_10->SetBinContent(10,7.00206);
   hCCpi0inFV_stack_10->SetBinContent(11,6.294355);
   hCCpi0inFV_stack_10->SetBinContent(12,4.928291);
   hCCpi0inFV_stack_10->SetBinContent(13,41.98413);
   hCCpi0inFV_stack_10->SetBinError(1,4.531536);
   hCCpi0inFV_stack_10->SetBinError(2,6.206658);
   hCCpi0inFV_stack_10->SetBinError(3,6.148255);
   hCCpi0inFV_stack_10->SetBinError(4,5.292462);
   hCCpi0inFV_stack_10->SetBinError(5,4.198948);
   hCCpi0inFV_stack_10->SetBinError(6,3.46301);
   hCCpi0inFV_stack_10->SetBinError(7,2.549127);
   hCCpi0inFV_stack_10->SetBinError(8,1.870104);
   hCCpi0inFV_stack_10->SetBinError(9,1.835191);
   hCCpi0inFV_stack_10->SetBinError(10,1.272575);
   hCCpi0inFV_stack_10->SetBinError(11,1.279344);
   hCCpi0inFV_stack_10->SetBinError(12,1.082213);
   hCCpi0inFV_stack_10->SetBinError(13,3.243648);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,45.08879);
   hNCinFV_stack_11->SetBinContent(2,76.74425);
   hNCinFV_stack_11->SetBinContent(3,57.63119);
   hNCinFV_stack_11->SetBinContent(4,34.74441);
   hNCinFV_stack_11->SetBinContent(5,29.11766);
   hNCinFV_stack_11->SetBinContent(6,19.34154);
   hNCinFV_stack_11->SetBinContent(7,8.657539);
   hNCinFV_stack_11->SetBinContent(8,9.139489);
   hNCinFV_stack_11->SetBinContent(9,5.362168);
   hNCinFV_stack_11->SetBinContent(10,4.446451);
   hNCinFV_stack_11->SetBinContent(11,3.611408);
   hNCinFV_stack_11->SetBinContent(12,1.370245);
   hNCinFV_stack_11->SetBinContent(13,17.47751);
   hNCinFV_stack_11->SetBinError(1,3.278383);
   hNCinFV_stack_11->SetBinError(2,4.412579);
   hNCinFV_stack_11->SetBinError(3,3.850969);
   hNCinFV_stack_11->SetBinError(4,2.937109);
   hNCinFV_stack_11->SetBinError(5,2.697662);
   hNCinFV_stack_11->SetBinError(6,2.229152);
   hNCinFV_stack_11->SetBinError(7,1.428658);
   hNCinFV_stack_11->SetBinError(8,1.494371);
   hNCinFV_stack_11->SetBinError(9,1.241583);
   hNCinFV_stack_11->SetBinError(10,1.056906);
   hNCinFV_stack_11->SetBinError(11,1.001287);
   hNCinFV_stack_11->SetBinError(12,0.5179089);
   hNCinFV_stack_11->SetBinError(13,2.122303);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,42.77026);
   hnumuCCinFV_stack_12->SetBinContent(2,83.82912);
   hnumuCCinFV_stack_12->SetBinContent(3,66.44165);
   hnumuCCinFV_stack_12->SetBinContent(4,45.20587);
   hnumuCCinFV_stack_12->SetBinContent(5,28.71508);
   hnumuCCinFV_stack_12->SetBinContent(6,20.33743);
   hnumuCCinFV_stack_12->SetBinContent(7,8.788375);
   hnumuCCinFV_stack_12->SetBinContent(8,8.994741);
   hnumuCCinFV_stack_12->SetBinContent(9,5.219439);
   hnumuCCinFV_stack_12->SetBinContent(10,4.99607);
   hnumuCCinFV_stack_12->SetBinContent(11,2.253978);
   hnumuCCinFV_stack_12->SetBinContent(12,3.587324);
   hnumuCCinFV_stack_12->SetBinContent(13,24.61287);
   hnumuCCinFV_stack_12->SetBinError(1,3.966377);
   hnumuCCinFV_stack_12->SetBinError(2,5.144942);
   hnumuCCinFV_stack_12->SetBinError(3,5.107548);
   hnumuCCinFV_stack_12->SetBinError(4,3.657652);
   hnumuCCinFV_stack_12->SetBinError(5,2.94448);
   hnumuCCinFV_stack_12->SetBinError(6,2.350687);
   hnumuCCinFV_stack_12->SetBinError(7,1.57911);
   hnumuCCinFV_stack_12->SetBinError(8,1.547918);
   hnumuCCinFV_stack_12->SetBinError(9,1.73537);
   hnumuCCinFV_stack_12->SetBinError(10,1.526225);
   hnumuCCinFV_stack_12->SetBinError(11,0.7342037);
   hnumuCCinFV_stack_12->SetBinError(12,1.105112);
   hnumuCCinFV_stack_12->SetBinError(13,2.955745);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,5.502014);
   hnueCCinFV_stack_13->SetBinContent(2,3.341174);
   hnueCCinFV_stack_13->SetBinContent(3,3.591512);
   hnueCCinFV_stack_13->SetBinContent(4,3.71939);
   hnueCCinFV_stack_13->SetBinContent(5,2.258876);
   hnueCCinFV_stack_13->SetBinContent(6,1.174466);
   hnueCCinFV_stack_13->SetBinContent(7,1.096408);
   hnueCCinFV_stack_13->SetBinContent(8,1.541611);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.8718764);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,13.63968);
   hnueCCinFV_stack_13->SetBinError(1,1.590268);
   hnueCCinFV_stack_13->SetBinError(2,0.9330672);
   hnueCCinFV_stack_13->SetBinError(3,1.094453);
   hnueCCinFV_stack_13->SetBinError(4,1.482847);
   hnueCCinFV_stack_13->SetBinError(5,0.8011464);
   hnueCCinFV_stack_13->SetBinError(6,0.5398283);
   hnueCCinFV_stack_13->SetBinError(7,0.4944052);
   hnueCCinFV_stack_13->SetBinError(8,0.6472859);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.4395467);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,2.840071);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,596.5992);
   hmcerror__11->SetBinContent(2,1091.291);
   hmcerror__11->SetBinContent(3,937.0533);
   hmcerror__11->SetBinContent(4,673.2076);
   hmcerror__11->SetBinContent(5,448.5605);
   hmcerror__11->SetBinContent(6,294.1058);
   hmcerror__11->SetBinContent(7,165.3452);
   hmcerror__11->SetBinContent(8,104.4746);
   hmcerror__11->SetBinContent(9,83.00626);
   hmcerror__11->SetBinContent(10,56.86009);
   hmcerror__11->SetBinContent(11,46.5519);
   hmcerror__11->SetBinContent(12,39.17454);
   hmcerror__11->SetBinContent(13,301.0331);
   hmcerror__11->SetBinError(1,124.3042);
   hmcerror__11->SetBinError(2,229.8413);
   hmcerror__11->SetBinError(3,212.1256);
   hmcerror__11->SetBinError(4,170.357);
   hmcerror__11->SetBinError(5,129.3481);
   hmcerror__11->SetBinError(6,74.11602);
   hmcerror__11->SetBinError(7,45.19465);
   hmcerror__11->SetBinError(8,29.34329);
   hmcerror__11->SetBinError(9,29.60484);
   hmcerror__11->SetBinError(10,17.67675);
   hmcerror__11->SetBinError(11,18.91801);
   hmcerror__11->SetBinError(12,15.01874);
   hmcerror__11->SetBinError(13,72.69192);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3013[12] = {
   621,
   1093,
   920,
   580,
   370,
   253,
   144,
   122,
   73,
   60,
   26,
   36};
   Double_t _felx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3013[12] = {
   24.91987,
   33.06055,
   30.3315,
   24.08319,
   19.23538,
   15.90597,
   12,
   11.04536,
   8.6693,
   7.8743,
   5.2453,
   6.1381};
   Double_t _fehx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3013[12] = {
   24.91987,
   33.06055,
   30.3315,
   24.08319,
   19.23538,
   15.90597,
   12,
   11.04536,
   8.4672,
   7.6713,
   5.0358,
   5.9318};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(18.67923);
   Graph_Graph3013->SetMaximum(1236.591);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4298.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 114.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 448.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 59.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 545.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1611.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  321.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 686.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 295.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 321.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3014[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3014[12] = {
   1,
   1,
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
   Double_t _felx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3014[12] = {
   0.2083546,
   0.2106142,
   0.2263751,
   0.2530526,
   0.2883627,
   0.2520047,
   0.2733351,
   0.2808652,
   0.3566579,
   0.3108815,
   0.4063853,
   0.3833802};
   Double_t _fehx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3014[12] = {
   0.2083546,
   0.2106142,
   0.2263751,
   0.2530526,
   0.2883627,
   0.2520047,
   0.2733351,
   0.2808652,
   0.3566579,
   0.3108815,
   0.4063853,
   0.3833802};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3015[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3015[12] = {
   1,
   1,
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
   Double_t _felx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3015[12] = {
   0.1884288,
   0.201182,
   0.2152787,
   0.2343366,
   0.2393671,
   0.2262958,
   0.2188325,
   0.2165108,
   0.2140903,
   0.2091012,
   0.2014745,
   0.2115915};
   Double_t _fehx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3015[12] = {
   0.1884288,
   0.201182,
   0.2152787,
   0.2343366,
   0.2393671,
   0.2262958,
   0.2188325,
   0.2165108,
   0.2140903,
   0.2091012,
   0.2014745,
   0.2115915};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
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
   
   Double_t _fx3016[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3016[12] = {
   1.0409,
   1.001566,
   0.9818011,
   0.861547,
   0.8248609,
   0.8602347,
   0.870905,
   1.167748,
   0.8794517,
   1.055222,
   0.5585164,
   0.9189643};
   Double_t _felx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3016[12] = {
   0.04176987,
   0.03029491,
   0.03236902,
   0.03577379,
   0.04288248,
   0.05408249,
   0.07257542,
   0.1057229,
   0.1044415,
   0.1384855,
   0.1126764,
   0.156686};
   Double_t _fehx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3016[12] = {
   0.04176987,
   0.03029491,
   0.03236902,
   0.03577379,
   0.04288248,
   0.05408249,
   0.07257542,
   0.1057229,
   0.1020068,
   0.1349154,
   0.108176,
   0.1514198};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.363077);
   Graph_Graph3016->SetMaximum(1.356233);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
