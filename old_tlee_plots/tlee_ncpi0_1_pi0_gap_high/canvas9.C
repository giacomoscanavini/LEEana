#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 21:27:24 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-2.300215,56.41026,254.3554);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__25->SetBinContent(1,115.0108);
   hmc__25->SetBinContent(2,61.59656);
   hmc__25->SetBinContent(3,45.37252);
   hmc__25->SetBinContent(4,50.06764);
   hmc__25->SetBinContent(5,41.92932);
   hmc__25->SetBinContent(6,34.45888);
   hmc__25->SetBinContent(7,41.71384);
   hmc__25->SetBinContent(8,23.9586);
   hmc__25->SetBinContent(9,26.20898);
   hmc__25->SetBinContent(10,22.50939);
   hmc__25->SetBinContent(11,22.82498);
   hmc__25->SetBinContent(12,15.6356);
   hmc__25->SetBinContent(13,11.9607);
   hmc__25->SetBinContent(14,11.8267);
   hmc__25->SetBinContent(15,13.46295);
   hmc__25->SetBinContent(16,11.50715);
   hmc__25->SetBinContent(17,13.31636);
   hmc__25->SetBinContent(18,9.8636);
   hmc__25->SetBinContent(19,10.42165);
   hmc__25->SetBinContent(20,8.265221);
   hmc__25->SetBinContent(21,68.67773);
   hmc__25->SetBinError(1,36.21536);
   hmc__25->SetBinError(2,22.07739);
   hmc__25->SetBinError(3,24.20951);
   hmc__25->SetBinError(4,23.1203);
   hmc__25->SetBinError(5,18.88693);
   hmc__25->SetBinError(6,23.57553);
   hmc__25->SetBinError(7,17.62951);
   hmc__25->SetBinError(8,11.20493);
   hmc__25->SetBinError(9,13.97248);
   hmc__25->SetBinError(10,11.35562);
   hmc__25->SetBinError(11,15.11563);
   hmc__25->SetBinError(12,9.007333);
   hmc__25->SetBinError(13,8.898332);
   hmc__25->SetBinError(14,9.196643);
   hmc__25->SetBinError(15,7.160725);
   hmc__25->SetBinError(16,5.599226);
   hmc__25->SetBinError(17,8.887846);
   hmc__25->SetBinError(18,8.799864);
   hmc__25->SetBinError(19,7.643707);
   hmc__25->SetBinError(20,7.743871);
   hmc__25->SetBinError(21,25.11841);
   hmc__25->SetMinimum(-2.300215);
   hmc__25->SetMaximum(241.5226);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",20,0,50);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(120.7613);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,2.739478);
   hbadmatch_stack_1->SetBinContent(2,0.5569951);
   hbadmatch_stack_1->SetBinContent(3,1.601486);
   hbadmatch_stack_1->SetBinContent(4,1.361022);
   hbadmatch_stack_1->SetBinContent(5,1.18862);
   hbadmatch_stack_1->SetBinContent(6,0.2812153);
   hbadmatch_stack_1->SetBinContent(7,0.925043);
   hbadmatch_stack_1->SetBinContent(8,0.9747192);
   hbadmatch_stack_1->SetBinContent(9,0.5502167);
   hbadmatch_stack_1->SetBinContent(10,0.3293715);
   hbadmatch_stack_1->SetBinContent(11,0.4578955);
   hbadmatch_stack_1->SetBinContent(12,0.2507246);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.6349471);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,0.4498491);
   hbadmatch_stack_1->SetBinContent(17,1.907213);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.5884556);
   hbadmatch_stack_1->SetBinContent(20,0.2239027);
   hbadmatch_stack_1->SetBinContent(21,4.951329);
   hbadmatch_stack_1->SetBinError(1,0.8064876);
   hbadmatch_stack_1->SetBinError(2,0.330582);
   hbadmatch_stack_1->SetBinError(3,0.6912276);
   hbadmatch_stack_1->SetBinError(4,0.5698493);
   hbadmatch_stack_1->SetBinError(5,0.5041163);
   hbadmatch_stack_1->SetBinError(6,0.2132217);
   hbadmatch_stack_1->SetBinError(7,0.42842);
   hbadmatch_stack_1->SetBinError(8,0.6272818);
   hbadmatch_stack_1->SetBinError(9,0.3252483);
   hbadmatch_stack_1->SetBinError(10,0.2372648);
   hbadmatch_stack_1->SetBinError(11,0.2698389);
   hbadmatch_stack_1->SetBinError(12,0.2507246);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.4608474);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.3574194);
   hbadmatch_stack_1->SetBinError(17,0.7819076);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.3397478);
   hbadmatch_stack_1->SetBinError(20,0.2239027);
   hbadmatch_stack_1->SetBinError(21,1.155188);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,14.53212);
   hext_stack_2->SetBinContent(2,5.083842);
   hext_stack_2->SetBinContent(3,5.083842);
   hext_stack_2->SetBinContent(4,5.796069);
   hext_stack_2->SetBinContent(5,4.912259);
   hext_stack_2->SetBinContent(6,1.868591);
   hext_stack_2->SetBinContent(7,7.2437);
   hext_stack_2->SetBinContent(8,2.110787);
   hext_stack_2->SetBinContent(9,3.15182);
   hext_stack_2->SetBinContent(10,3.483397);
   hext_stack_2->SetBinContent(11,2.503025);
   hext_stack_2->SetBinContent(12,0.8131978);
   hext_stack_2->SetBinContent(13,1.290409);
   hext_stack_2->SetBinContent(14,0.8131978);
   hext_stack_2->SetBinContent(15,3.379654);
   hext_stack_2->SetBinContent(16,3.704052);
   hext_stack_2->SetBinContent(17,3.856865);
   hext_stack_2->SetBinContent(18,0.8131978);
   hext_stack_2->SetBinContent(19,4.352847);
   hext_stack_2->SetBinContent(20,1.697008);
   hext_stack_2->SetBinContent(21,11.97562);
   hext_stack_2->SetBinError(1,2.711844);
   hext_stack_2->SetBinError(2,1.601118);
   hext_stack_2->SetBinError(3,1.601118);
   hext_stack_2->SetBinError(4,1.761083);
   hext_stack_2->SetBinError(5,1.626223);
   hext_stack_2->SetBinError(6,0.840497);
   hext_stack_2->SetBinError(7,2.011201);
   hext_stack_2->SetBinError(8,0.8669371);
   hext_stack_2->SetBinError(9,1.23684);
   hext_stack_2->SetBinError(10,1.197416);
   hext_stack_2->SetBinError(11,1.14861);
   hext_stack_2->SetBinError(12,0.5750177);
   hext_stack_2->SetBinError(13,0.788756);
   hext_stack_2->SetBinError(14,0.5750177);
   hext_stack_2->SetBinError(15,1.406172);
   hext_stack_2->SetBinError(16,1.443106);
   hext_stack_2->SetBinError(17,1.506257);
   hext_stack_2->SetBinError(18,0.5750177);
   hext_stack_2->SetBinError(19,1.514272);
   hext_stack_2->SetBinError(20,0.8873887);
   hext_stack_2->SetBinError(21,2.273741);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,1.262126);
   hdirt_stack_3->SetBinContent(2,0.9423271);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.2945329);
   hdirt_stack_3->SetBinContent(9,0.7430996);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.002351481);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.5243469);
   hdirt_stack_3->SetBinError(1,0.619975);
   hdirt_stack_3->SetBinError(2,0.5578886);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(4,0.2086718);
   hdirt_stack_3->SetBinError(9,0.5275648);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(14,0.002351481);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(21,0.3707694);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,16.37161);
   houtFV_stack_4->SetBinContent(2,9.412669);
   houtFV_stack_4->SetBinContent(3,7.29172);
   houtFV_stack_4->SetBinContent(4,6.551448);
   houtFV_stack_4->SetBinContent(5,7.625091);
   houtFV_stack_4->SetBinContent(6,5.074731);
   houtFV_stack_4->SetBinContent(7,7.677364);
   houtFV_stack_4->SetBinContent(8,5.604681);
   houtFV_stack_4->SetBinContent(9,4.512805);
   houtFV_stack_4->SetBinContent(10,4.824083);
   houtFV_stack_4->SetBinContent(11,4.506252);
   houtFV_stack_4->SetBinContent(12,4.433211);
   houtFV_stack_4->SetBinContent(13,2.59397);
   houtFV_stack_4->SetBinContent(14,2.007867);
   houtFV_stack_4->SetBinContent(15,3.018979);
   houtFV_stack_4->SetBinContent(16,1.946586);
   houtFV_stack_4->SetBinContent(17,2.635675);
   houtFV_stack_4->SetBinContent(18,3.140123);
   houtFV_stack_4->SetBinContent(19,2.017739);
   houtFV_stack_4->SetBinContent(20,1.011632);
   houtFV_stack_4->SetBinContent(21,13.98903);
   houtFV_stack_4->SetBinError(1,2.039351);
   houtFV_stack_4->SetBinError(2,1.496289);
   houtFV_stack_4->SetBinError(3,1.288529);
   houtFV_stack_4->SetBinError(4,1.247235);
   houtFV_stack_4->SetBinError(5,1.332079);
   houtFV_stack_4->SetBinError(6,1.071385);
   houtFV_stack_4->SetBinError(7,1.383806);
   houtFV_stack_4->SetBinError(8,1.262598);
   houtFV_stack_4->SetBinError(9,1.010417);
   houtFV_stack_4->SetBinError(10,1.264889);
   houtFV_stack_4->SetBinError(11,1.116814);
   houtFV_stack_4->SetBinError(12,1.121171);
   houtFV_stack_4->SetBinError(13,1.048149);
   houtFV_stack_4->SetBinError(14,0.6985797);
   houtFV_stack_4->SetBinError(15,0.9135097);
   houtFV_stack_4->SetBinError(16,0.6627398);
   houtFV_stack_4->SetBinError(17,0.7834381);
   houtFV_stack_4->SetBinError(18,1.14195);
   houtFV_stack_4->SetBinError(19,0.7338179);
   houtFV_stack_4->SetBinError(20,0.4646777);
   houtFV_stack_4->SetBinError(21,1.947714);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3689941);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2081603);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1691609);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1611165);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1958797);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1439898);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08546725);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.0706446);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06878591);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03704298);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.07166435);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05495351);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1546661);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1613784);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08521524);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04522086);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03539586);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03444341);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02619662);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05609893);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03175074);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1296639);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1142159);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06297452);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.64479);
   hNCpi0inFVres_stack_7->SetBinContent(2,10.27713);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.691269);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.540285);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.0356);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.595346);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.559566);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.795921);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.140579);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.232278);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.599066);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.168487);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.440468);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.999271);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.456431);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.371575);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.739205);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.000077);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.096974);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.164396);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.981657);
   hNCpi0inFVres_stack_7->SetBinError(1,1.378495);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8608948);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8534758);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7932916);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7695837);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8070974);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8490845);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6036548);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5942095);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5414501);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3729624);
   hNCpi0inFVres_stack_7->SetBinError(12,0.376714);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4495367);
   hNCpi0inFVres_stack_7->SetBinError(14,0.684361);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4449816);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5228576);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2107044);
   hNCpi0inFVres_stack_7->SetBinError(18,0.256388);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2816089);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3789443);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7662934);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.208367);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.461834);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.084003);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.421041);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.495593);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.018543);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.445003);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.815122);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.732163);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7812539);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.529041);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9823281);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.110621);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5348855);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5228819);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2146059);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6095331);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1854078);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3948056);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.0470988);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.286945);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.190823);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7311712);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3846595);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5695403);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5145397);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4082609);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3535877);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6603978);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4636921);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3649009);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5187165);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5391686);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6130512);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2256305);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.266085);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1361031);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2332611);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1045678);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1496252);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.0470988);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6826054);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,21.7587);
   hCCpi0inFV_stack_10->SetBinContent(2,13.76884);
   hCCpi0inFV_stack_10->SetBinContent(3,7.597873);
   hCCpi0inFV_stack_10->SetBinContent(4,10.76964);
   hCCpi0inFV_stack_10->SetBinContent(5,9.094227);
   hCCpi0inFV_stack_10->SetBinContent(6,7.856029);
   hCCpi0inFV_stack_10->SetBinContent(7,8.104704);
   hCCpi0inFV_stack_10->SetBinContent(8,4.129384);
   hCCpi0inFV_stack_10->SetBinContent(9,6.263673);
   hCCpi0inFV_stack_10->SetBinContent(10,5.13588);
   hCCpi0inFV_stack_10->SetBinContent(11,6.688723);
   hCCpi0inFV_stack_10->SetBinContent(12,4.446451);
   hCCpi0inFV_stack_10->SetBinContent(13,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(14,2.390778);
   hCCpi0inFV_stack_10->SetBinContent(15,1.999715);
   hCCpi0inFV_stack_10->SetBinContent(16,1.659151);
   hCCpi0inFV_stack_10->SetBinContent(17,1.747767);
   hCCpi0inFV_stack_10->SetBinContent(18,1.754706);
   hCCpi0inFV_stack_10->SetBinContent(19,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(20,1.610679);
   hCCpi0inFV_stack_10->SetBinContent(21,13.27694);
   hCCpi0inFV_stack_10->SetBinError(1,2.339428);
   hCCpi0inFV_stack_10->SetBinError(2,1.894685);
   hCCpi0inFV_stack_10->SetBinError(3,1.386916);
   hCCpi0inFV_stack_10->SetBinError(4,1.621107);
   hCCpi0inFV_stack_10->SetBinError(5,1.488835);
   hCCpi0inFV_stack_10->SetBinError(6,1.415484);
   hCCpi0inFV_stack_10->SetBinError(7,1.463074);
   hCCpi0inFV_stack_10->SetBinError(8,1.046532);
   hCCpi0inFV_stack_10->SetBinError(9,1.219191);
   hCCpi0inFV_stack_10->SetBinError(10,1.161281);
   hCCpi0inFV_stack_10->SetBinError(11,1.340329);
   hCCpi0inFV_stack_10->SetBinError(12,1.056906);
   hCCpi0inFV_stack_10->SetBinError(13,0.650847);
   hCCpi0inFV_stack_10->SetBinError(14,0.7844693);
   hCCpi0inFV_stack_10->SetBinError(15,0.6333068);
   hCCpi0inFV_stack_10->SetBinError(16,0.6493293);
   hCCpi0inFV_stack_10->SetBinError(17,0.6322899);
   hCCpi0inFV_stack_10->SetBinError(18,0.6819665);
   hCCpi0inFV_stack_10->SetBinError(19,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(20,0.6806271);
   hCCpi0inFV_stack_10->SetBinError(21,1.840679);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,8.661352);
   hNCinFV_stack_11->SetBinContent(2,2.250494);
   hNCinFV_stack_11->SetBinContent(3,2.014022);
   hNCinFV_stack_11->SetBinContent(4,2.604554);
   hNCinFV_stack_11->SetBinContent(5,1.830291);
   hNCinFV_stack_11->SetBinContent(6,2.006904);
   hNCinFV_stack_11->SetBinContent(7,2.761155);
   hNCinFV_stack_11->SetBinContent(8,1.784281);
   hNCinFV_stack_11->SetBinContent(9,1.117933);
   hNCinFV_stack_11->SetBinContent(10,1.53889);
   hNCinFV_stack_11->SetBinContent(11,2.471612);
   hNCinFV_stack_11->SetBinContent(12,1.072095);
   hNCinFV_stack_11->SetBinContent(13,0.1172267);
   hNCinFV_stack_11->SetBinContent(14,0.5352025);
   hNCinFV_stack_11->SetBinContent(15,0.9356072);
   hNCinFV_stack_11->SetBinContent(16,0.2263911);
   hNCinFV_stack_11->SetBinContent(17,0.8267814);
   hNCinFV_stack_11->SetBinContent(18,0.6876966);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.3320811);
   hNCinFV_stack_11->SetBinContent(21,1.667917);
   hNCinFV_stack_11->SetBinError(1,1.629827);
   hNCinFV_stack_11->SetBinError(2,0.6900752);
   hNCinFV_stack_11->SetBinError(3,0.6992654);
   hNCinFV_stack_11->SetBinError(4,1.100635);
   hNCinFV_stack_11->SetBinError(5,0.7010195);
   hNCinFV_stack_11->SetBinError(6,0.8804341);
   hNCinFV_stack_11->SetBinError(7,0.9866958);
   hNCinFV_stack_11->SetBinError(8,0.5756424);
   hNCinFV_stack_11->SetBinError(9,0.4923312);
   hNCinFV_stack_11->SetBinError(10,0.7404542);
   hNCinFV_stack_11->SetBinError(11,0.7850039);
   hNCinFV_stack_11->SetBinError(12,0.5551335);
   hNCinFV_stack_11->SetBinError(13,0.1172267);
   hNCinFV_stack_11->SetBinError(14,0.3921167);
   hNCinFV_stack_11->SetBinError(15,0.5446055);
   hNCinFV_stack_11->SetBinError(16,0.1603646);
   hNCinFV_stack_11->SetBinError(17,0.5534828);
   hNCinFV_stack_11->SetBinError(18,0.4242153);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.3320811);
   hNCinFV_stack_11->SetBinError(21,0.5775051);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,19.73236);
   hnumuCCinFV_stack_12->SetBinContent(2,15.61886);
   hnumuCCinFV_stack_12->SetBinContent(3,10.55124);
   hnumuCCinFV_stack_12->SetBinContent(4,11.63684);
   hnumuCCinFV_stack_12->SetBinContent(5,7.285485);
   hnumuCCinFV_stack_12->SetBinContent(6,8.667596);
   hnumuCCinFV_stack_12->SetBinContent(7,6.789147);
   hnumuCCinFV_stack_12->SetBinContent(8,2.589041);
   hnumuCCinFV_stack_12->SetBinContent(9,3.977874);
   hnumuCCinFV_stack_12->SetBinContent(10,2.150315);
   hnumuCCinFV_stack_12->SetBinContent(11,1.889168);
   hnumuCCinFV_stack_12->SetBinContent(12,1.320326);
   hnumuCCinFV_stack_12->SetBinContent(13,2.191747);
   hnumuCCinFV_stack_12->SetBinContent(14,1.880301);
   hnumuCCinFV_stack_12->SetBinContent(15,1.954659);
   hnumuCCinFV_stack_12->SetBinContent(16,0.5785271);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(18,1.942214);
   hnumuCCinFV_stack_12->SetBinContent(19,1.237223);
   hnumuCCinFV_stack_12->SetBinContent(20,1.020993);
   hnumuCCinFV_stack_12->SetBinContent(21,12.57286);
   hnumuCCinFV_stack_12->SetBinError(1,2.442303);
   hnumuCCinFV_stack_12->SetBinError(2,2.598743);
   hnumuCCinFV_stack_12->SetBinError(3,1.75849);
   hnumuCCinFV_stack_12->SetBinError(4,2.22881);
   hnumuCCinFV_stack_12->SetBinError(5,1.623706);
   hnumuCCinFV_stack_12->SetBinError(6,1.731416);
   hnumuCCinFV_stack_12->SetBinError(7,1.458429);
   hnumuCCinFV_stack_12->SetBinError(8,0.901562);
   hnumuCCinFV_stack_12->SetBinError(9,0.9745837);
   hnumuCCinFV_stack_12->SetBinError(10,0.7269259);
   hnumuCCinFV_stack_12->SetBinError(11,0.6898315);
   hnumuCCinFV_stack_12->SetBinError(12,0.556449);
   hnumuCCinFV_stack_12->SetBinError(13,0.7590668);
   hnumuCCinFV_stack_12->SetBinError(14,0.9343471);
   hnumuCCinFV_stack_12->SetBinError(15,0.7220469);
   hnumuCCinFV_stack_12->SetBinError(16,0.4153689);
   hnumuCCinFV_stack_12->SetBinError(17,0.438694);
   hnumuCCinFV_stack_12->SetBinError(18,0.7065551);
   hnumuCCinFV_stack_12->SetBinError(19,0.6289521);
   hnumuCCinFV_stack_12->SetBinError(20,0.5213002);
   hnumuCCinFV_stack_12->SetBinError(21,1.891353);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,4.645404);
   hnueCCinFV_stack_13->SetBinContent(2,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,1.157431);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.823504);
   hnueCCinFV_stack_13->SetBinError(2,0.1529246);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,1.157431);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__26->SetBinContent(1,115.0108);
   hmcerror__26->SetBinContent(2,61.59656);
   hmcerror__26->SetBinContent(3,45.37252);
   hmcerror__26->SetBinContent(4,50.06764);
   hmcerror__26->SetBinContent(5,41.92932);
   hmcerror__26->SetBinContent(6,34.45888);
   hmcerror__26->SetBinContent(7,41.71384);
   hmcerror__26->SetBinContent(8,23.9586);
   hmcerror__26->SetBinContent(9,26.20898);
   hmcerror__26->SetBinContent(10,22.50939);
   hmcerror__26->SetBinContent(11,22.82498);
   hmcerror__26->SetBinContent(12,15.6356);
   hmcerror__26->SetBinContent(13,11.9607);
   hmcerror__26->SetBinContent(14,11.8267);
   hmcerror__26->SetBinContent(15,13.46295);
   hmcerror__26->SetBinContent(16,11.50715);
   hmcerror__26->SetBinContent(17,13.31636);
   hmcerror__26->SetBinContent(18,9.8636);
   hmcerror__26->SetBinContent(19,10.42165);
   hmcerror__26->SetBinContent(20,8.265221);
   hmcerror__26->SetBinContent(21,68.67773);
   hmcerror__26->SetBinError(1,36.21536);
   hmcerror__26->SetBinError(2,22.07739);
   hmcerror__26->SetBinError(3,24.20951);
   hmcerror__26->SetBinError(4,23.1203);
   hmcerror__26->SetBinError(5,18.88693);
   hmcerror__26->SetBinError(6,23.57553);
   hmcerror__26->SetBinError(7,17.62951);
   hmcerror__26->SetBinError(8,11.20493);
   hmcerror__26->SetBinError(9,13.97248);
   hmcerror__26->SetBinError(10,11.35562);
   hmcerror__26->SetBinError(11,15.11563);
   hmcerror__26->SetBinError(12,9.007333);
   hmcerror__26->SetBinError(13,8.898332);
   hmcerror__26->SetBinError(14,9.196643);
   hmcerror__26->SetBinError(15,7.160725);
   hmcerror__26->SetBinError(16,5.599226);
   hmcerror__26->SetBinError(17,8.887846);
   hmcerror__26->SetBinError(18,8.799864);
   hmcerror__26->SetBinError(19,7.643707);
   hmcerror__26->SetBinError(20,7.743871);
   hmcerror__26->SetBinError(21,25.11841);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3033[20] = {
   98,
   52,
   48,
   35,
   39,
   36,
   35,
   33,
   28,
   21,
   17,
   17,
   15,
   12,
   12,
   10,
   3,
   2,
   7,
   4};
   Double_t _felx3033[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3033[20] = {
   10.0209,
   7.3419,
   7.0604,
   6.0548,
   6.3813,
   6.1381,
   6.0548,
   5.8847,
   5.4358,
   4.7354,
   4.2835,
   4.2835,
   4.0385,
   3.64022,
   3.64022,
   3.34883,
   2.143368,
   2,
   2.85954,
   2.29683};
   Double_t _fehx3033[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3033[20] = {
   9.82,
   7.1381,
   6.8561,
   5.8483,
   6.1757,
   5.9318,
   5.8483,
   5.6776,
   5.2271,
   4.5229,
   4.0673,
   4.0673,
   3.8197,
   3.4155,
   3.4155,
   3.1179,
   1.72422,
   1.51917,
   2.61053,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,55);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(118.602);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 524.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 16.1","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 76.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.0","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 102.3","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.0","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.8","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  96.5","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  31.6","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 118.8","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.1","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 103.7","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3034[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3034[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3034[20] = {
   0.3148867,
   0.3584192,
   0.533572,
   0.4617812,
   0.4504468,
   0.6841641,
   0.4226298,
   0.4676788,
   0.5331181,
   0.5044837,
   0.662241,
   0.5760783,
   0.7439641,
   0.7776169,
   0.5318837,
   0.4865866,
   0.6674381,
   0.8921554,
   0.7334449,
   0.9369225};
   Double_t _fehx3034[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3034[20] = {
   0.3148867,
   0.3584192,
   0.533572,
   0.4617812,
   0.4504468,
   0.6841641,
   0.4226298,
   0.4676788,
   0.5331181,
   0.5044837,
   0.662241,
   0.5760783,
   0.7439641,
   0.7776169,
   0.5318837,
   0.4865866,
   0.6674381,
   0.8921554,
   0.7334449,
   0.9369225};
   grae = new TGraphAsymmErrors(20,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,55);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3035[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3035[20] = {
   0.2106493,
   0.2862875,
   0.3276083,
   0.2976833,
   0.2820171,
   0.2731833,
   0.23546,
   0.2859744,
   0.2818078,
   0.2824731,
   0.2424079,
   0.2783527,
   0.2672357,
   0.3382886,
   0.2387941,
   0.2572455,
   0.2523876,
   0.2647822,
   0.2795847,
   0.5910812};
   Double_t _fehx3035[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3035[20] = {
   0.2106493,
   0.2862875,
   0.3276083,
   0.2976833,
   0.2820171,
   0.2731833,
   0.23546,
   0.2859744,
   0.2818078,
   0.2824731,
   0.2424079,
   0.2783527,
   0.2672357,
   0.3382886,
   0.2387941,
   0.2572455,
   0.2523876,
   0.2647822,
   0.2795847,
   0.5910812};
   grae = new TGraphAsymmErrors(20,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,55);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3036[20] = {
   0.8520941,
   0.844203,
   1.057909,
   0.6990543,
   0.9301367,
   1.044724,
   0.83905,
   1.377376,
   1.068336,
   0.9329441,
   0.7447982,
   1.087262,
   1.254107,
   1.014653,
   0.8913349,
   0.8690247,
   0.2252868,
   0.2027657,
   0.6716786,
   0.4839556};
   Double_t _felx3036[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3036[20] = {
   0.0871301,
   0.1191933,
   0.1556096,
   0.1209324,
   0.1521918,
   0.1781283,
   0.1451509,
   0.2456195,
   0.2074022,
   0.2103745,
   0.1876672,
   0.2739581,
   0.3376474,
   0.3077967,
   0.2703879,
   0.2910216,
   0.1609575,
   0.2027657,
   0.2743845,
   0.2778909};
   Double_t _fehx3036[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3036[20] = {
   0.08538331,
   0.1158847,
   0.1511069,
   0.116808,
   0.1472883,
   0.1721414,
   0.1402005,
   0.2369754,
   0.1994393,
   0.200934,
   0.1781951,
   0.2601307,
   0.3193542,
   0.2887956,
   0.2536962,
   0.2709532,
   0.1294813,
   0.1540178,
   0.250491,
   0.2397831};
   grae = new TGraphAsymmErrors(20,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,55);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(1.775786);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
