#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Jan 13 22:27:18 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-184.6154,-34.8,1353.846,3848.147);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__4->SetBinContent(1,652.5143);
   hmc__4->SetBinContent(2,1513.857);
   hmc__4->SetBinContent(3,1273.452);
   hmc__4->SetBinContent(4,840.3722);
   hmc__4->SetBinContent(5,565.0201);
   hmc__4->SetBinContent(6,338.2609);
   hmc__4->SetBinContent(7,170.4268);
   hmc__4->SetBinContent(8,108.8196);
   hmc__4->SetBinContent(9,92.14095);
   hmc__4->SetBinContent(10,62.0863);
   hmc__4->SetBinContent(11,54.07306);
   hmc__4->SetBinContent(12,56.39419);
   hmc__4->SetBinContent(13,335.7325);
   hmc__4->SetBinError(1,146.206);
   hmc__4->SetBinError(2,350.8155);
   hmc__4->SetBinError(3,320.4719);
   hmc__4->SetBinError(4,212.1473);
   hmc__4->SetBinError(5,143.0015);
   hmc__4->SetBinError(6,85.34129);
   hmc__4->SetBinError(7,43.7186);
   hmc__4->SetBinError(8,31.29883);
   hmc__4->SetBinError(9,30.691);
   hmc__4->SetBinError(10,22.96721);
   hmc__4->SetBinError(11,25.3614);
   hmc__4->SetBinError(12,23.1109);
   hmc__4->SetBinError(13,89.12712);
   hmc__4->SetMinimum(-34.8);
   hmc__4->SetMaximum(3654);
   hmc__4->SetEntries(5979.682);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",12,0,1200);
   hs2_stack_2->SetMinimum(-1.103704e-08);
   hs2_stack_2->SetMaximum(1589.55);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,24.9044);
   hbadmatch_stack_1->SetBinContent(2,28.33254);
   hbadmatch_stack_1->SetBinContent(3,27.01966);
   hbadmatch_stack_1->SetBinContent(4,11.13071);
   hbadmatch_stack_1->SetBinContent(5,9.425904);
   hbadmatch_stack_1->SetBinContent(6,5.49489);
   hbadmatch_stack_1->SetBinContent(7,2.254602);
   hbadmatch_stack_1->SetBinContent(9,4.086314);
   hbadmatch_stack_1->SetBinContent(10,1.985136);
   hbadmatch_stack_1->SetBinContent(12,0.9925678);
   hbadmatch_stack_1->SetBinContent(13,5.114728);
   hbadmatch_stack_1->SetBinError(1,6.309297);
   hbadmatch_stack_1->SetBinError(2,7.471622);
   hbadmatch_stack_1->SetBinError(3,5.496023);
   hbadmatch_stack_1->SetBinError(4,3.362144);
   hbadmatch_stack_1->SetBinError(5,3.157504);
   hbadmatch_stack_1->SetBinError(6,2.465045);
   hbadmatch_stack_1->SetBinError(7,1.605591);
   hbadmatch_stack_1->SetBinError(9,2.045627);
   hbadmatch_stack_1->SetBinError(10,1.403703);
   hbadmatch_stack_1->SetBinError(12,0.9925678);
   hbadmatch_stack_1->SetBinError(13,2.291407);
   hbadmatch_stack_1->SetEntries(109);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,81.51984);
   houtFV_stack_4->SetBinContent(2,108.0216);
   houtFV_stack_4->SetBinContent(3,84.58217);
   houtFV_stack_4->SetBinContent(4,52.1387);
   houtFV_stack_4->SetBinContent(5,34.97866);
   houtFV_stack_4->SetBinContent(6,20.30156);
   houtFV_stack_4->SetBinContent(7,21.83649);
   houtFV_stack_4->SetBinContent(8,6.947975);
   houtFV_stack_4->SetBinContent(9,13.14549);
   houtFV_stack_4->SetBinContent(10,3.970271);
   houtFV_stack_4->SetBinContent(11,5.955407);
   houtFV_stack_4->SetBinContent(12,8.93311);
   houtFV_stack_4->SetBinContent(13,36.18789);
   houtFV_stack_4->SetBinError(1,9.003278);
   houtFV_stack_4->SetBinError(2,10.46283);
   houtFV_stack_4->SetBinError(3,9.243615);
   houtFV_stack_4->SetBinError(4,7.239962);
   houtFV_stack_4->SetBinError(5,5.917155);
   houtFV_stack_4->SetBinError(6,4.55035);
   houtFV_stack_4->SetBinError(7,4.655556);
   houtFV_stack_4->SetBinError(8,2.626088);
   houtFV_stack_4->SetBinError(9,3.653316);
   houtFV_stack_4->SetBinError(10,1.985136);
   houtFV_stack_4->SetBinError(11,2.431285);
   houtFV_stack_4->SetBinError(12,2.977704);
   houtFV_stack_4->SetBinError(13,6.041757);
   houtFV_stack_4->SetEntries(478);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.429416);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,15.84942);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.81178);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,20.30707);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,18.32589);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.448238);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.962355);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.476472);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.485883);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.981178);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.420005);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.918267);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.801808);
   hNCpi0inFVcoh_stack_5->SetBinError(3,3.132517);
   hNCpi0inFVcoh_stack_5->SetBinError(4,3.171431);
   hNCpi0inFVcoh_stack_5->SetBinError(5,3.012758);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.642706);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.400904);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.107512);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.857875);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9905888);
   hNCpi0inFVcoh_stack_5->SetBinError(13,2.042151);
   hNCpi0inFVcoh_stack_5->SetEntries(221);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.981178);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.448238);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.943532);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.962355);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.642706);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.71575);
   hNCpi0inFVqe_stack_6->SetBinError(4,1.400904);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4952944);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4952944);
   hNCpi0inFVqe_stack_6->SetEntries(43);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,255.0766);
   hNCpi0inFVres_stack_7->SetBinContent(2,729.6296);
   hNCpi0inFVres_stack_7->SetBinContent(3,653.2933);
   hNCpi0inFVres_stack_7->SetBinContent(4,447.4802);
   hNCpi0inFVres_stack_7->SetBinContent(5,254.086);
   hNCpi0inFVres_stack_7->SetBinContent(6,146.1118);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.83651);
   hNCpi0inFVres_stack_7->SetBinContent(8,37.14708);
   hNCpi0inFVres_stack_7->SetBinContent(9,32.68943);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.2506);
   hNCpi0inFVres_stack_7->SetBinContent(11,21.79295);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.37295);
   hNCpi0inFVres_stack_7->SetBinContent(13,114.9083);
   hNCpi0inFVres_stack_7->SetBinError(1,11.24002);
   hNCpi0inFVres_stack_7->SetBinError(2,19.01093);
   hNCpi0inFVres_stack_7->SetBinError(3,17.98812);
   hNCpi0inFVres_stack_7->SetBinError(4,14.89297);
   hNCpi0inFVres_stack_7->SetBinError(5,11.21817);
   hNCpi0inFVres_stack_7->SetBinError(6,8.50696);
   hNCpi0inFVres_stack_7->SetBinError(7,5.881295);
   hNCpi0inFVres_stack_7->SetBinError(8,4.289375);
   hNCpi0inFVres_stack_7->SetBinError(9,4.023791);
   hNCpi0inFVres_stack_7->SetBinError(10,3.605798);
   hNCpi0inFVres_stack_7->SetBinError(11,3.285411);
   hNCpi0inFVres_stack_7->SetBinError(12,2.573625);
   hNCpi0inFVres_stack_7->SetBinError(13,7.544099);
   hNCpi0inFVres_stack_7->SetEntries(5656);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,61.4165);
   hNCpi0inFVdis_stack_8->SetBinContent(2,165.9236);
   hNCpi0inFVdis_stack_8->SetBinContent(3,99.55417);
   hNCpi0inFVdis_stack_8->SetBinContent(4,74.78945);
   hNCpi0inFVdis_stack_8->SetBinContent(5,46.55767);
   hNCpi0inFVdis_stack_8->SetBinContent(6,30.70825);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.3353);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.84942);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.89648);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.952944);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.962355);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.952944);
   hNCpi0inFVdis_stack_8->SetBinContent(13,29.22237);
   hNCpi0inFVdis_stack_8->SetBinError(1,5.515365);
   hNCpi0inFVdis_stack_8->SetBinError(2,9.065376);
   hNCpi0inFVdis_stack_8->SetBinError(3,7.02201);
   hNCpi0inFVdis_stack_8->SetBinError(4,6.086279);
   hNCpi0inFVdis_stack_8->SetBinError(5,4.802057);
   hNCpi0inFVdis_stack_8->SetBinError(6,3.899952);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.930201);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.801808);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.323137);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.566258);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.400904);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.566258);
   hNCpi0inFVdis_stack_8->SetBinError(13,3.804428);
   hNCpi0inFVdis_stack_8->SetEntries(1143);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.4952944);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.4952944);
   hNCpi0inFVmec_stack_9->SetEntries(2);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,108.3516);
   hCCpi0inFV_stack_10->SetBinContent(2,248.563);
   hCCpi0inFV_stack_10->SetBinContent(3,184.0302);
   hCCpi0inFV_stack_10->SetBinContent(4,122.3288);
   hCCpi0inFV_stack_10->SetBinContent(5,88.60153);
   hCCpi0inFV_stack_10->SetBinContent(6,66.66861);
   hCCpi0inFV_stack_10->SetBinContent(7,18.85879);
   hCCpi0inFV_stack_10->SetBinContent(8,12.90338);
   hCCpi0inFV_stack_10->SetBinContent(9,15.88109);
   hCCpi0inFV_stack_10->SetBinContent(10,5.955407);
   hCCpi0inFV_stack_10->SetBinContent(11,8.163922);
   hCCpi0inFV_stack_10->SetBinContent(12,12.09834);
   hCCpi0inFV_stack_10->SetBinContent(13,51.84678);
   hCCpi0inFV_stack_10->SetBinError(1,10.37945);
   hCCpi0inFV_stack_10->SetBinError(2,15.76024);
   hCCpi0inFV_stack_10->SetBinError(3,13.53318);
   hCCpi0inFV_stack_10->SetBinError(4,11.03267);
   hCCpi0inFV_stack_10->SetBinError(5,9.395384);
   hCCpi0inFV_stack_10->SetBinError(6,8.146544);
   hCCpi0inFV_stack_10->SetBinError(7,4.326503);
   hCCpi0inFV_stack_10->SetBinError(8,3.578754);
   hCCpi0inFV_stack_10->SetBinError(9,3.970271);
   hCCpi0inFV_stack_10->SetBinError(10,2.431285);
   hCCpi0inFV_stack_10->SetBinError(11,2.893936);
   hCCpi0inFV_stack_10->SetBinError(12,3.497103);
   hCCpi0inFV_stack_10->SetBinError(13,7.193563);
   hCCpi0inFV_stack_10->SetEntries(949);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,72.45745);
   hNCinFV_stack_11->SetBinContent(2,114.1453);
   hNCinFV_stack_11->SetBinContent(3,95.28651);
   hNCinFV_stack_11->SetBinContent(4,53.59866);
   hNCinFV_stack_11->SetBinContent(5,44.66555);
   hNCinFV_stack_11->SetBinContent(6,31.76217);
   hNCinFV_stack_11->SetBinContent(7,17.86622);
   hNCinFV_stack_11->SetBinContent(8,10.91825);
   hNCinFV_stack_11->SetBinContent(9,5.955407);
   hNCinFV_stack_11->SetBinContent(10,6.947975);
   hNCinFV_stack_11->SetBinContent(11,5.955407);
   hNCinFV_stack_11->SetBinContent(12,7.940543);
   hNCinFV_stack_11->SetBinContent(13,32.75474);
   hNCinFV_stack_11->SetBinError(1,8.480503);
   hNCinFV_stack_11->SetBinError(2,10.6441);
   hNCinFV_stack_11->SetBinError(3,9.725139);
   hNCinFV_stack_11->SetBinError(4,7.293854);
   hNCinFV_stack_11->SetBinError(5,6.658348);
   hNCinFV_stack_11->SetBinError(6,5.614812);
   hNCinFV_stack_11->SetBinError(7,4.211109);
   hNCinFV_stack_11->SetBinError(8,3.291975);
   hNCinFV_stack_11->SetBinError(9,2.431285);
   hNCinFV_stack_11->SetBinError(10,2.626088);
   hNCinFV_stack_11->SetBinError(11,2.431285);
   hNCinFV_stack_11->SetBinError(12,2.807406);
   hNCinFV_stack_11->SetBinError(13,5.701868);
   hNCinFV_stack_11->SetEntries(504);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,35.43576);
   hnumuCCinFV_stack_12->SetBinContent(2,90.82299);
   hnumuCCinFV_stack_12->SetBinContent(3,101.9455);
   hnumuCCinFV_stack_12->SetBinContent(4,52.6511);
   hnumuCCinFV_stack_12->SetBinContent(5,65.40316);
   hnumuCCinFV_stack_12->SetBinContent(6,30.77469);
   hnumuCCinFV_stack_12->SetBinContent(7,15.99614);
   hnumuCCinFV_stack_12->SetBinContent(8,20.30278);
   hnumuCCinFV_stack_12->SetBinContent(9,6.512998);
   hnumuCCinFV_stack_12->SetBinContent(10,8.057651);
   hnumuCCinFV_stack_12->SetBinContent(11,6.261832);
   hnumuCCinFV_stack_12->SetBinContent(12,4.634691);
   hnumuCCinFV_stack_12->SetBinContent(13,42.75385);
   hnumuCCinFV_stack_12->SetBinError(1,6.152577);
   hnumuCCinFV_stack_12->SetBinError(2,12.27714);
   hnumuCCinFV_stack_12->SetBinError(3,13.90529);
   hnumuCCinFV_stack_12->SetBinError(4,7.484465);
   hnumuCCinFV_stack_12->SetBinError(5,10.4683);
   hnumuCCinFV_stack_12->SetBinError(6,5.760317);
   hnumuCCinFV_stack_12->SetBinError(7,7.405274);
   hnumuCCinFV_stack_12->SetBinError(8,5.411305);
   hnumuCCinFV_stack_12->SetBinError(9,2.678505);
   hnumuCCinFV_stack_12->SetBinError(10,3.115006);
   hnumuCCinFV_stack_12->SetBinError(11,2.819208);
   hnumuCCinFV_stack_12->SetBinError(12,2.328992);
   hnumuCCinFV_stack_12->SetBinError(13,8.082904);
   hnumuCCinFV_stack_12->SetEntries(427);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,3.446364);
   hnueCCinFV_stack_13->SetBinContent(2,6.625311);
   hnueCCinFV_stack_13->SetBinContent(3,1.985136);
   hnueCCinFV_stack_13->SetBinContent(4,1.985136);
   hnueCCinFV_stack_13->SetBinContent(5,1.985136);
   hnueCCinFV_stack_13->SetBinContent(7,1.985136);
   hnueCCinFV_stack_13->SetBinContent(8,2.27427);
   hnueCCinFV_stack_13->SetBinContent(9,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(10,1.985136);
   hnueCCinFV_stack_13->SetBinContent(12,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,14.0286);
   hnueCCinFV_stack_13->SetBinError(1,1.992625);
   hnueCCinFV_stack_13->SetBinError(2,2.773043);
   hnueCCinFV_stack_13->SetBinError(3,1.403703);
   hnueCCinFV_stack_13->SetBinError(4,1.403703);
   hnueCCinFV_stack_13->SetBinError(5,1.403703);
   hnueCCinFV_stack_13->SetBinError(7,1.403703);
   hnueCCinFV_stack_13->SetBinError(8,1.621096);
   hnueCCinFV_stack_13->SetBinError(9,0.9925678);
   hnueCCinFV_stack_13->SetBinError(10,1.403703);
   hnueCCinFV_stack_13->SetBinError(12,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,7.936313);
   hnueCCinFV_stack_13->SetEntries(32);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__5->SetBinContent(1,652.5143);
   hmcerror__5->SetBinContent(2,1513.857);
   hmcerror__5->SetBinContent(3,1273.452);
   hmcerror__5->SetBinContent(4,840.3722);
   hmcerror__5->SetBinContent(5,565.0201);
   hmcerror__5->SetBinContent(6,338.2609);
   hmcerror__5->SetBinContent(7,170.4268);
   hmcerror__5->SetBinContent(8,108.8196);
   hmcerror__5->SetBinContent(9,92.14095);
   hmcerror__5->SetBinContent(10,62.0863);
   hmcerror__5->SetBinContent(11,54.07306);
   hmcerror__5->SetBinContent(12,56.39419);
   hmcerror__5->SetBinContent(13,335.7325);
   hmcerror__5->SetBinError(1,146.206);
   hmcerror__5->SetBinError(2,350.8155);
   hmcerror__5->SetBinError(3,320.4719);
   hmcerror__5->SetBinError(4,212.1473);
   hmcerror__5->SetBinError(5,143.0015);
   hmcerror__5->SetBinError(6,85.34129);
   hmcerror__5->SetBinError(7,43.7186);
   hmcerror__5->SetBinError(8,31.29883);
   hmcerror__5->SetBinError(9,30.691);
   hmcerror__5->SetBinError(10,22.96721);
   hmcerror__5->SetBinError(11,25.3614);
   hmcerror__5->SetBinError(12,23.1109);
   hmcerror__5->SetBinError(13,89.12712);
   hmcerror__5->SetEntries(5979.682);

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
   
   Double_t _fx3005[12] = {
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
   Double_t _fy3005[12] = {
   876,
   1740,
   1652,
   1203,
   715,
   432,
   259,
   152,
   99,
   76,
   53,
   57};
   Double_t _felx3005[12] = {
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
   Double_t _fely3005[12] = {
   29.5973,
   41.71331,
   40.6448,
   34.68429,
   26.73948,
   20.78461,
   16.09348,
   12.32883,
   10.0712,
   8.8425,
   7.4105,
   7.679};
   Double_t _fehx3005[12] = {
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
   Double_t _fehy3005[12] = {
   29.5973,
   41.71331,
   40.6448,
   34.68429,
   26.73948,
   20.78461,
   16.09348,
   12.32883,
   9.87,
   8.6406,
   7.2068,
   7.4757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(41.03055);
   Graph_Graph3005->SetMaximum(1955.326);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.28#pm0.29","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 7.24e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.6/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 7314.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 115.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 442.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  101.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  20.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2686.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  536.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 892.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 467.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 438.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[12] = {
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
   Double_t _fy3006[12] = {
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
   Double_t _felx3006[12] = {
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
   Double_t _fely3006[12] = {
   0.2240656,
   0.2317362,
   0.251656,
   0.2524445,
   0.253091,
   0.2522943,
   0.2565241,
   0.2876211,
   0.3330875,
   0.369924,
   0.469021,
   0.40981};
   Double_t _fehx3006[12] = {
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
   Double_t _fehy3006[12] = {
   0.2240656,
   0.2317362,
   0.251656,
   0.2524445,
   0.253091,
   0.2522943,
   0.2565241,
   0.2876211,
   0.3330875,
   0.369924,
   0.469021,
   0.40981};
   grae = new TGraphAsymmErrors(12,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1320);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3007[12] = {
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
   Double_t _fy3007[12] = {
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
   Double_t _felx3007[12] = {
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
   Double_t _fely3007[12] = {
   0.2046486,
   0.2277075,
   0.2477843,
   0.2454103,
   0.2340481,
   0.2299439,
   0.2224584,
   0.223669,
   0.240415,
   0.2459957,
   0.2386065,
   0.2365912};
   Double_t _fehx3007[12] = {
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
   Double_t _fehy3007[12] = {
   0.2046486,
   0.2277075,
   0.2477843,
   0.2454103,
   0.2340481,
   0.2299439,
   0.2224584,
   0.223669,
   0.240415,
   0.2459957,
   0.2386065,
   0.2365912};
   grae = new TGraphAsymmErrors(12,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1320);
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
   
   Double_t _fx3008[12] = {
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
   Double_t _fy3008[12] = {
   1.342499,
   1.149382,
   1.297261,
   1.431509,
   1.265442,
   1.277121,
   1.519714,
   1.396807,
   1.074441,
   1.224103,
   0.9801555,
   1.010742};
   Double_t _felx3008[12] = {
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
   Double_t _fely3008[12] = {
   0.04535885,
   0.02755433,
   0.03191703,
   0.04127253,
   0.04732484,
   0.06144551,
   0.09443041,
   0.113296,
   0.1093021,
   0.1424227,
   0.1370461,
   0.1361665};
   Double_t _fehx3008[12] = {
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
   Double_t _fehy3008[12] = {
   0.04535885,
   0.02755433,
   0.03191703,
   0.04127253,
   0.04732484,
   0.06144551,
   0.09443041,
   0.113296,
   0.1071185,
   0.1391708,
   0.1332789,
   0.1325615};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.7660059);
   Graph_Graph3008->SetMaximum(1.691247);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
