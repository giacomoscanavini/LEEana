#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Jan 16 03:24:34 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-184.6154,-15.34,1353.846,1696.281);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,409.2316);
   hmc__10->SetBinContent(2,724.5387);
   hmc__10->SetBinContent(3,633.5225);
   hmc__10->SetBinContent(4,477.6872);
   hmc__10->SetBinContent(5,298.3264);
   hmc__10->SetBinContent(6,193.5224);
   hmc__10->SetBinContent(7,112.008);
   hmc__10->SetBinContent(8,71.65643);
   hmc__10->SetBinContent(9,54.73872);
   hmc__10->SetBinContent(10,35.55206);
   hmc__10->SetBinContent(11,27.99135);
   hmc__10->SetBinContent(12,23.21619);
   hmc__10->SetBinContent(13,203.3021);
   hmc__10->SetBinError(1,102.3061);
   hmc__10->SetBinError(2,171.1191);
   hmc__10->SetBinError(3,156.0441);
   hmc__10->SetBinError(4,123.1406);
   hmc__10->SetBinError(5,93.91089);
   hmc__10->SetBinError(6,49.64195);
   hmc__10->SetBinError(7,32.36666);
   hmc__10->SetBinError(8,23.41083);
   hmc__10->SetBinError(9,23.58829);
   hmc__10->SetBinError(10,13.72782);
   hmc__10->SetBinError(11,13.23554);
   hmc__10->SetBinError(12,11.1044);
   hmc__10->SetBinError(13,56.26714);
   hmc__10->SetMinimum(-15.34);
   hmc__10->SetMaximum(1610.7);
   hmc__10->SetEntries(3224.636);
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
   hs4_stack_4->SetMinimum(-1.505544e-08);
   hs4_stack_4->SetMaximum(760.7656);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,15.28253);
   hbadmatch_stack_1->SetBinContent(2,26.94272);
   hbadmatch_stack_1->SetBinContent(3,12.4347);
   hbadmatch_stack_1->SetBinContent(4,12.97351);
   hbadmatch_stack_1->SetBinContent(5,9.183348);
   hbadmatch_stack_1->SetBinContent(6,4.330152);
   hbadmatch_stack_1->SetBinContent(7,2.436959);
   hbadmatch_stack_1->SetBinContent(8,1.924645);
   hbadmatch_stack_1->SetBinContent(9,1.624393);
   hbadmatch_stack_1->SetBinContent(10,0.2333977);
   hbadmatch_stack_1->SetBinContent(11,1.673945);
   hbadmatch_stack_1->SetBinContent(12,1.931635);
   hbadmatch_stack_1->SetBinContent(13,7.956743);
   hbadmatch_stack_1->SetBinError(1,2.389498);
   hbadmatch_stack_1->SetBinError(2,3.723179);
   hbadmatch_stack_1->SetBinError(3,2.067051);
   hbadmatch_stack_1->SetBinError(4,2.803258);
   hbadmatch_stack_1->SetBinError(5,1.814984);
   hbadmatch_stack_1->SetBinError(6,1.218388);
   hbadmatch_stack_1->SetBinError(7,1.033393);
   hbadmatch_stack_1->SetBinError(8,0.7518915);
   hbadmatch_stack_1->SetBinError(9,0.7597771);
   hbadmatch_stack_1->SetBinError(10,0.2333977);
   hbadmatch_stack_1->SetBinError(11,0.8678973);
   hbadmatch_stack_1->SetBinError(12,0.8983045);
   hbadmatch_stack_1->SetBinError(13,1.83551);
   hbadmatch_stack_1->SetEntries(287);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,92.02165);
   houtFV_stack_4->SetBinContent(2,107.8232);
   houtFV_stack_4->SetBinContent(3,76.00835);
   houtFV_stack_4->SetBinContent(4,63.72984);
   houtFV_stack_4->SetBinContent(5,31.76146);
   houtFV_stack_4->SetBinContent(6,26.50223);
   houtFV_stack_4->SetBinContent(7,17.64589);
   houtFV_stack_4->SetBinContent(8,10.97203);
   houtFV_stack_4->SetBinContent(9,6.685971);
   houtFV_stack_4->SetBinContent(10,7.997252);
   houtFV_stack_4->SetBinContent(11,5.296467);
   houtFV_stack_4->SetBinContent(12,6.457405);
   houtFV_stack_4->SetBinContent(13,34.93267);
   houtFV_stack_4->SetBinError(1,5.615807);
   houtFV_stack_4->SetBinError(2,6.220676);
   houtFV_stack_4->SetBinError(3,5.079184);
   houtFV_stack_4->SetBinError(4,4.799538);
   houtFV_stack_4->SetBinError(5,3.268664);
   houtFV_stack_4->SetBinError(6,3.057067);
   houtFV_stack_4->SetBinError(7,2.492601);
   houtFV_stack_4->SetBinError(8,1.846875);
   houtFV_stack_4->SetBinError(9,1.579192);
   houtFV_stack_4->SetBinError(10,1.710513);
   houtFV_stack_4->SetBinError(11,1.476183);
   houtFV_stack_4->SetBinError(12,1.593018);
   houtFV_stack_4->SetBinError(13,3.484532);
   houtFV_stack_4->SetEntries(1578);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.409863);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,12.66074);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,17.79036);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.43355);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.15728);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.352646);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.986944);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.3077);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.340015);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9427841);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6203538);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.8520721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.138514);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.077032);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.441187);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.573373);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.62333);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.446879);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.142605);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6891993);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7528944);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3983681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3815072);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.278756);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2921907);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.178444);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.306913);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.315902);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.984876);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9844825);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6534564);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3555329);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3555329);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3969904);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5525764);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5425706);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2995972);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2807146);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2625617);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2625617);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08758128);
   hNCpi0inFVqe_stack_6->SetEntries(163);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,129.4473);
   hNCpi0inFVres_stack_7->SetBinContent(2,279.2854);
   hNCpi0inFVres_stack_7->SetBinContent(3,271.382);
   hNCpi0inFVres_stack_7->SetBinContent(4,202.0588);
   hNCpi0inFVres_stack_7->SetBinContent(5,120.0246);
   hNCpi0inFVres_stack_7->SetBinContent(6,70.1254);
   hNCpi0inFVres_stack_7->SetBinContent(7,41.48378);
   hNCpi0inFVres_stack_7->SetBinContent(8,24.14222);
   hNCpi0inFVres_stack_7->SetBinContent(9,19.96398);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.44671);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.486338);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.360456);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.02681);
   hNCpi0inFVres_stack_7->SetBinError(1,4.375972);
   hNCpi0inFVres_stack_7->SetBinError(2,6.365283);
   hNCpi0inFVres_stack_7->SetBinError(3,6.246945);
   hNCpi0inFVres_stack_7->SetBinError(4,5.499321);
   hNCpi0inFVres_stack_7->SetBinError(5,4.183733);
   hNCpi0inFVres_stack_7->SetBinError(6,3.186466);
   hNCpi0inFVres_stack_7->SetBinError(7,2.485048);
   hNCpi0inFVres_stack_7->SetBinError(8,1.836246);
   hNCpi0inFVres_stack_7->SetBinError(9,1.749852);
   hNCpi0inFVres_stack_7->SetBinError(10,1.147909);
   hNCpi0inFVres_stack_7->SetBinError(11,1.039853);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9161948);
   hNCpi0inFVres_stack_7->SetBinError(13,3.094441);
   hNCpi0inFVres_stack_7->SetEntries(21056);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,27.51613);
   hNCpi0inFVdis_stack_8->SetBinContent(2,53.04738);
   hNCpi0inFVdis_stack_8->SetBinContent(3,42.32726);
   hNCpi0inFVdis_stack_8->SetBinContent(4,33.0834);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.37305);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.55943);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.71064);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.243956);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.647716);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.54762);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.894164);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.984876);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.92031);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.985156);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.754506);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.513509);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.12728);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.952622);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.696196);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.326545);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9746259);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8517906);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.559474);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.483953);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5425706);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.44729);
   hNCpi0inFVdis_stack_8->SetEntries(4175);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2893277);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2583545);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,65.54293);
   hCCpi0inFV_stack_10->SetBinContent(2,118.8142);
   hCCpi0inFV_stack_10->SetBinContent(3,116.74);
   hCCpi0inFV_stack_10->SetBinContent(4,86.57152);
   hCCpi0inFV_stack_10->SetBinContent(5,53.91245);
   hCCpi0inFV_stack_10->SetBinContent(6,33.41251);
   hCCpi0inFV_stack_10->SetBinContent(7,18.29596);
   hCCpi0inFV_stack_10->SetBinContent(8,11.95909);
   hCCpi0inFV_stack_10->SetBinContent(9,10.27842);
   hCCpi0inFV_stack_10->SetBinContent(10,5.284623);
   hCCpi0inFV_stack_10->SetBinContent(11,4.542668);
   hCCpi0inFV_stack_10->SetBinContent(12,3.438323);
   hCCpi0inFV_stack_10->SetBinContent(13,30.0359);
   hCCpi0inFV_stack_10->SetBinError(1,4.695213);
   hCCpi0inFV_stack_10->SetBinError(2,6.381398);
   hCCpi0inFV_stack_10->SetBinError(3,6.333808);
   hCCpi0inFV_stack_10->SetBinError(4,5.470154);
   hCCpi0inFV_stack_10->SetBinError(5,4.317076);
   hCCpi0inFV_stack_10->SetBinError(6,3.474849);
   hCCpi0inFV_stack_10->SetBinError(7,2.444584);
   hCCpi0inFV_stack_10->SetBinError(8,1.98765);
   hCCpi0inFV_stack_10->SetBinError(9,1.908944);
   hCCpi0inFV_stack_10->SetBinError(10,1.269833);
   hCCpi0inFV_stack_10->SetBinError(11,1.276258);
   hCCpi0inFV_stack_10->SetBinError(12,1.042492);
   hCCpi0inFV_stack_10->SetBinError(13,3.242929);
   hCCpi0inFV_stack_10->SetEntries(1805);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,30.43634);
   hNCinFV_stack_11->SetBinContent(2,54.52942);
   hNCinFV_stack_11->SetBinContent(3,44.76825);
   hNCinFV_stack_11->SetBinContent(4,22.5217);
   hNCinFV_stack_11->SetBinContent(5,22.73422);
   hNCinFV_stack_11->SetBinContent(6,14.77411);
   hNCinFV_stack_11->SetBinContent(7,6.664128);
   hNCinFV_stack_11->SetBinContent(8,6.40985);
   hNCinFV_stack_11->SetBinContent(9,5.180218);
   hNCinFV_stack_11->SetBinContent(10,4.096754);
   hNCinFV_stack_11->SetBinContent(11,2.271334);
   hNCinFV_stack_11->SetBinContent(12,0.4667954);
   hNCinFV_stack_11->SetBinContent(13,11.7817);
   hNCinFV_stack_11->SetBinError(1,3.138779);
   hNCinFV_stack_11->SetBinError(2,4.314393);
   hNCinFV_stack_11->SetBinError(3,3.993135);
   hNCinFV_stack_11->SetBinError(4,2.812457);
   hNCinFV_stack_11->SetBinError(5,2.838006);
   hNCinFV_stack_11->SetBinError(6,2.291018);
   hNCinFV_stack_11->SetBinError(7,1.424505);
   hNCinFV_stack_11->SetBinError(8,1.436882);
   hNCinFV_stack_11->SetBinError(9,1.435942);
   hNCinFV_stack_11->SetBinError(10,1.195824);
   hNCinFV_stack_11->SetBinError(11,0.9024504);
   hNCinFV_stack_11->SetBinError(12,0.3300742);
   hNCinFV_stack_11->SetBinError(13,2.088256);
   hNCinFV_stack_11->SetEntries(725);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,34.61371);
   hnumuCCinFV_stack_12->SetBinContent(2,66.77103);
   hnumuCCinFV_stack_12->SetBinContent(3,46.64687);
   hnumuCCinFV_stack_12->SetBinContent(4,34.34868);
   hnumuCCinFV_stack_12->SetBinContent(5,19.8416);
   hnumuCCinFV_stack_12->SetBinContent(6,14.74252);
   hnumuCCinFV_stack_12->SetBinContent(7,8.659693);
   hnumuCCinFV_stack_12->SetBinContent(8,4.901972);
   hnumuCCinFV_stack_12->SetBinContent(9,4.76178);
   hnumuCCinFV_stack_12->SetBinContent(10,3.689858);
   hnumuCCinFV_stack_12->SetBinContent(11,1.831318);
   hnumuCCinFV_stack_12->SetBinContent(12,1.724626);
   hnumuCCinFV_stack_12->SetBinContent(13,19.92707);
   hnumuCCinFV_stack_12->SetBinError(1,4.303535);
   hnumuCCinFV_stack_12->SetBinError(2,4.993455);
   hnumuCCinFV_stack_12->SetBinError(3,4.941236);
   hnumuCCinFV_stack_12->SetBinError(4,3.723778);
   hnumuCCinFV_stack_12->SetBinError(5,2.983523);
   hnumuCCinFV_stack_12->SetBinError(6,2.376084);
   hnumuCCinFV_stack_12->SetBinError(7,1.83957);
   hnumuCCinFV_stack_12->SetBinError(8,1.229878);
   hnumuCCinFV_stack_12->SetBinError(9,2.135804);
   hnumuCCinFV_stack_12->SetBinError(10,1.681257);
   hnumuCCinFV_stack_12->SetBinError(11,0.7846094);
   hnumuCCinFV_stack_12->SetBinError(12,0.8173415);
   hnumuCCinFV_stack_12->SetBinError(13,2.740934);
   hnumuCCinFV_stack_12->SetEntries(793);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,5.588067);
   hnueCCinFV_stack_13->SetBinContent(2,2.282393);
   hnueCCinFV_stack_13->SetBinContent(3,3.406828);
   hnueCCinFV_stack_13->SetBinContent(4,3.915451);
   hnueCCinFV_stack_13->SetBinContent(5,1.68504);
   hnueCCinFV_stack_13->SetBinContent(6,1.202378);
   hnueCCinFV_stack_13->SetBinContent(7,0.7684534);
   hnueCCinFV_stack_13->SetBinContent(8,1.150101);
   hnueCCinFV_stack_13->SetBinContent(10,0.3130678);
   hnueCCinFV_stack_13->SetBinContent(11,1.341662);
   hnueCCinFV_stack_13->SetBinContent(13,11.35064);
   hnueCCinFV_stack_13->SetBinError(1,1.855316);
   hnueCCinFV_stack_13->SetBinError(2,0.9204583);
   hnueCCinFV_stack_13->SetBinError(3,1.218081);
   hnueCCinFV_stack_13->SetBinError(4,1.863466);
   hnueCCinFV_stack_13->SetBinError(5,0.810284);
   hnueCCinFV_stack_13->SetBinError(6,0.6258537);
   hnueCCinFV_stack_13->SetBinError(7,0.4471538);
   hnueCCinFV_stack_13->SetBinError(8,0.681457);
   hnueCCinFV_stack_13->SetBinError(10,0.3130678);
   hnueCCinFV_stack_13->SetBinError(11,0.8146586);
   hnueCCinFV_stack_13->SetBinError(13,2.538365);
   hnueCCinFV_stack_13->SetEntries(90);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,409.2316);
   hmcerror__11->SetBinContent(2,724.5387);
   hmcerror__11->SetBinContent(3,633.5225);
   hmcerror__11->SetBinContent(4,477.6872);
   hmcerror__11->SetBinContent(5,298.3264);
   hmcerror__11->SetBinContent(6,193.5224);
   hmcerror__11->SetBinContent(7,112.008);
   hmcerror__11->SetBinContent(8,71.65643);
   hmcerror__11->SetBinContent(9,54.73872);
   hmcerror__11->SetBinContent(10,35.55206);
   hmcerror__11->SetBinContent(11,27.99135);
   hmcerror__11->SetBinContent(12,23.21619);
   hmcerror__11->SetBinContent(13,203.3021);
   hmcerror__11->SetBinError(1,102.3061);
   hmcerror__11->SetBinError(2,171.1191);
   hmcerror__11->SetBinError(3,156.0441);
   hmcerror__11->SetBinError(4,123.1406);
   hmcerror__11->SetBinError(5,93.91089);
   hmcerror__11->SetBinError(6,49.64195);
   hmcerror__11->SetBinError(7,32.36666);
   hmcerror__11->SetBinError(8,23.41083);
   hmcerror__11->SetBinError(9,23.58829);
   hmcerror__11->SetBinError(10,13.72782);
   hmcerror__11->SetBinError(11,13.23554);
   hmcerror__11->SetBinError(12,11.1044);
   hmcerror__11->SetBinError(13,56.26714);
   hmcerror__11->SetEntries(3224.636);

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
   437,
   767,
   697,
   505,
   322,
   216,
   135,
   75,
   61,
   41,
   37,
   25};
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
   20.90454,
   27.69476,
   26.40076,
   22.47221,
   17.94436,
   14.69694,
   11.61895,
   8.7852,
   7.9383,
   6.5384,
   6.2203,
   5.1474};
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
   20.90454,
   27.69476,
   26.40076,
   22.47221,
   17.94436,
   14.69694,
   11.61895,
   8.5831,
   7.7354,
   6.3331,
   6.0141,
   4.9374};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(17.86734);
   Graph_Graph3013->SetMaximum(872.179);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.08#pm0.25","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3318.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 91.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 452.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1183.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  229.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 528.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 214.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 242.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_6_pi0_momentum_all");
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
   0.2499957,
   0.2361767,
   0.2463118,
   0.257785,
   0.3147924,
   0.2565178,
   0.2889674,
   0.3267094,
   0.4309251,
   0.3861329,
   0.4728438,
   0.4783041};
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
   0.2499957,
   0.2361767,
   0.2463118,
   0.257785,
   0.3147924,
   0.2565178,
   0.2889674,
   0.3267094,
   0.4309251,
   0.3861329,
   0.4728438,
   0.4783041};
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
   0.2021163,
   0.212363,
   0.2201551,
   0.2215463,
   0.2139691,
   0.2078732,
   0.2093832,
   0.2138694,
   0.2260923,
   0.225757,
   0.2293822,
   0.239184};
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
   0.2021163,
   0.212363,
   0.2201551,
   0.2215463,
   0.2139691,
   0.2078732,
   0.2093832,
   0.2138694,
   0.2260923,
   0.225757,
   0.2293822,
   0.239184};
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
   1.067855,
   1.058605,
   1.100198,
   1.057177,
   1.079355,
   1.11615,
   1.205271,
   1.046661,
   1.114385,
   1.153238,
   1.321837,
   1.076835};
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
   0.05108243,
   0.038224,
   0.04167296,
   0.04704377,
   0.06015008,
   0.07594437,
   0.1037332,
   0.1226017,
   0.1450217,
   0.1839106,
   0.2222222,
   0.221716};
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
   0.05108243,
   0.038224,
   0.04167296,
   0.04704377,
   0.06015008,
   0.07594437,
   0.1037332,
   0.1197813,
   0.141315,
   0.1781359,
   0.2148557,
   0.2126706};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.7869615);
   Graph_Graph3016->SetMaximum(1.60485);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_6_pi0_momentum_all",12,0,1200);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
