#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Jan 16 03:24:34 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-184.6154,-16.45623,1353.846,1819.713);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__13->SetBinContent(1,279.4108);
   hmc__13->SetBinContent(2,822.8117);
   hmc__13->SetBinContent(3,664.7694);
   hmc__13->SetBinContent(4,450.8289);
   hmc__13->SetBinContent(5,292.4186);
   hmc__13->SetBinContent(6,161.084);
   hmc__13->SetBinContent(7,94.46576);
   hmc__13->SetBinContent(8,58.19651);
   hmc__13->SetBinContent(9,37.78375);
   hmc__13->SetBinContent(10,29.52835);
   hmc__13->SetBinContent(11,27.97233);
   hmc__13->SetBinContent(12,24.00326);
   hmc__13->SetBinContent(13,211.9051);
   hmc__13->SetBinError(1,67.99674);
   hmc__13->SetBinError(2,211.6643);
   hmc__13->SetBinError(3,190.4864);
   hmc__13->SetBinError(4,127.1452);
   hmc__13->SetBinError(5,82.96816);
   hmc__13->SetBinError(6,45.4085);
   hmc__13->SetBinError(7,32.35755);
   hmc__13->SetBinError(8,21.33469);
   hmc__13->SetBinError(9,14.28924);
   hmc__13->SetBinError(10,14.19887);
   hmc__13->SetBinError(11,16.38954);
   hmc__13->SetBinError(12,11.45933);
   hmc__13->SetBinError(13,62.08578);
   hmc__13->SetMinimum(-16.45623);
   hmc__13->SetMaximum(1727.905);
   hmc__13->SetEntries(3116.394);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",12,0,1200);
   hs5_stack_5->SetMinimum(-1.00941e-09);
   hs5_stack_5->SetMaximum(863.9523);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,14.77763);
   hbadmatch_stack_1->SetBinContent(2,20.95135);
   hbadmatch_stack_1->SetBinContent(3,16.80587);
   hbadmatch_stack_1->SetBinContent(4,7.834904);
   hbadmatch_stack_1->SetBinContent(5,5.667894);
   hbadmatch_stack_1->SetBinContent(6,3.907146);
   hbadmatch_stack_1->SetBinContent(7,2.809317);
   hbadmatch_stack_1->SetBinContent(8,2.258364);
   hbadmatch_stack_1->SetBinContent(9,1.125231);
   hbadmatch_stack_1->SetBinContent(10,0.9127098);
   hbadmatch_stack_1->SetBinContent(11,0.7355864);
   hbadmatch_stack_1->SetBinContent(12,1.532668);
   hbadmatch_stack_1->SetBinContent(13,4.205896);
   hbadmatch_stack_1->SetBinError(1,2.424436);
   hbadmatch_stack_1->SetBinError(2,3.384562);
   hbadmatch_stack_1->SetBinError(3,2.555468);
   hbadmatch_stack_1->SetBinError(4,1.61125);
   hbadmatch_stack_1->SetBinError(5,1.442563);
   hbadmatch_stack_1->SetBinError(6,1.272997);
   hbadmatch_stack_1->SetBinError(7,1.02989);
   hbadmatch_stack_1->SetBinError(8,1.034239);
   hbadmatch_stack_1->SetBinError(9,0.6724238);
   hbadmatch_stack_1->SetBinError(10,0.554787);
   hbadmatch_stack_1->SetBinError(11,0.5537761);
   hbadmatch_stack_1->SetBinError(12,0.7342765);
   hbadmatch_stack_1->SetBinError(13,1.234252);
   hbadmatch_stack_1->SetEntries(255);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1487;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1488;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,16.90506);
   houtFV_stack_4->SetBinContent(2,40.84821);
   houtFV_stack_4->SetBinContent(3,44.57864);
   houtFV_stack_4->SetBinContent(4,23.9235);
   houtFV_stack_4->SetBinContent(5,20.24213);
   houtFV_stack_4->SetBinContent(6,10.48963);
   houtFV_stack_4->SetBinContent(7,7.98099);
   houtFV_stack_4->SetBinContent(8,4.266973);
   houtFV_stack_4->SetBinContent(9,4.30927);
   houtFV_stack_4->SetBinContent(10,4.117635);
   houtFV_stack_4->SetBinContent(11,2.638963);
   houtFV_stack_4->SetBinContent(12,3.492812);
   houtFV_stack_4->SetBinContent(13,20.08829);
   houtFV_stack_4->SetBinError(1,2.377804);
   houtFV_stack_4->SetBinError(2,3.725534);
   houtFV_stack_4->SetBinError(3,3.921499);
   houtFV_stack_4->SetBinError(4,2.862428);
   houtFV_stack_4->SetBinError(5,2.70907);
   houtFV_stack_4->SetBinError(6,1.847372);
   houtFV_stack_4->SetBinError(7,1.647915);
   houtFV_stack_4->SetBinError(8,1.290338);
   houtFV_stack_4->SetBinError(9,1.254735);
   houtFV_stack_4->SetBinError(10,1.157628);
   houtFV_stack_4->SetBinError(11,1.003305);
   houtFV_stack_4->SetBinError(12,1.066937);
   houtFV_stack_4->SetBinError(13,2.698169);
   houtFV_stack_4->SetEntries(664);

   ci = 1489;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8765788);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4879434);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7110658);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1986157);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.075195);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3786241);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2707799);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3713183);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.08108451);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3872091);
   hNCpi0inFVcoh_stack_5->SetEntries(81);

   ci = 1490;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.754832);
   hNCpi0inFVqe_stack_6->SetBinContent(2,6.301565);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.788328);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.753551);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7527642);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3555329);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2648209);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3224303);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.8765788);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5125435);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.004476);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.6844128);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.7009541);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2865101);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2625617);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.09362833);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2604666);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3786241);
   hNCpi0inFVqe_stack_6->SetEntries(317);

   ci = 1491;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,105.2719);
   hNCpi0inFVres_stack_7->SetBinContent(2,396.6111);
   hNCpi0inFVres_stack_7->SetBinContent(3,335.1711);
   hNCpi0inFVres_stack_7->SetBinContent(4,220.3212);
   hNCpi0inFVres_stack_7->SetBinContent(5,142.2207);
   hNCpi0inFVres_stack_7->SetBinContent(6,67.39507);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.35593);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.44382);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.94403);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.643255);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.774778);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.243563);
   hNCpi0inFVres_stack_7->SetBinContent(13,64.79716);
   hNCpi0inFVres_stack_7->SetBinError(1,3.971931);
   hNCpi0inFVres_stack_7->SetBinError(2,7.672321);
   hNCpi0inFVres_stack_7->SetBinError(3,7.106632);
   hNCpi0inFVres_stack_7->SetBinError(4,5.72865);
   hNCpi0inFVres_stack_7->SetBinError(5,4.669216);
   hNCpi0inFVres_stack_7->SetBinError(6,3.154179);
   hNCpi0inFVres_stack_7->SetBinError(7,2.215956);
   hNCpi0inFVres_stack_7->SetBinError(8,1.598219);
   hNCpi0inFVres_stack_7->SetBinError(9,1.320372);
   hNCpi0inFVres_stack_7->SetBinError(10,1.069419);
   hNCpi0inFVres_stack_7->SetBinError(11,1.257498);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8632909);
   hNCpi0inFVres_stack_7->SetBinError(13,3.12226);
   hNCpi0inFVres_stack_7->SetEntries(23471);

   ci = 1492;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,24.92809);
   hNCpi0inFVdis_stack_8->SetBinContent(2,65.51079);
   hNCpi0inFVdis_stack_8->SetBinContent(3,51.74047);
   hNCpi0inFVdis_stack_8->SetBinContent(4,38.73755);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.54756);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.53246);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.601557);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.474887);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.06906);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.505922);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.084184);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.175289);
   hNCpi0inFVdis_stack_8->SetBinContent(13,19.82297);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.858759);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.070686);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.725748);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.419892);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.991469);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.560084);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.095193);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7404846);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7694498);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6072894);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5455916);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7499779);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.76479);
   hNCpi0inFVdis_stack_8->SetEntries(4539);

   ci = 1493;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.5541486);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.8434762);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.09930784);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2747969);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3771742);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.05733541);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetEntries(28);

   ci = 1494;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,47.41679);
   hCCpi0inFV_stack_10->SetBinContent(2,129.7981);
   hCCpi0inFV_stack_10->SetBinContent(3,103.8171);
   hCCpi0inFV_stack_10->SetBinContent(4,73.18925);
   hCCpi0inFV_stack_10->SetBinContent(5,37.57418);
   hCCpi0inFV_stack_10->SetBinContent(6,27.43277);
   hCCpi0inFV_stack_10->SetBinContent(7,16.93797);
   hCCpi0inFV_stack_10->SetBinContent(8,8.277031);
   hCCpi0inFV_stack_10->SetBinContent(9,5.242861);
   hCCpi0inFV_stack_10->SetBinContent(10,5.284623);
   hCCpi0inFV_stack_10->SetBinContent(11,4.288389);
   hCCpi0inFV_stack_10->SetBinContent(12,2.525613);
   hCCpi0inFV_stack_10->SetBinContent(13,26.01981);
   hCCpi0inFV_stack_10->SetBinError(1,3.969979);
   hCCpi0inFV_stack_10->SetBinError(2,6.770534);
   hCCpi0inFV_stack_10->SetBinError(3,6.007848);
   hCCpi0inFV_stack_10->SetBinError(4,5.073423);
   hCCpi0inFV_stack_10->SetBinError(5,3.492128);
   hCCpi0inFV_stack_10->SetBinError(6,3.092477);
   hCCpi0inFV_stack_10->SetBinError(7,2.54257);
   hCCpi0inFV_stack_10->SetBinError(8,1.581273);
   hCCpi0inFV_stack_10->SetBinError(9,1.338752);
   hCCpi0inFV_stack_10->SetBinError(10,1.269833);
   hCCpi0inFV_stack_10->SetBinError(11,1.290058);
   hCCpi0inFV_stack_10->SetBinError(12,0.8826101);
   hCCpi0inFV_stack_10->SetBinError(13,3.08088);
   hCCpi0inFV_stack_10->SetEntries(1566);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,35.69899);
   hNCinFV_stack_11->SetBinContent(2,75.5461);
   hNCinFV_stack_11->SetBinContent(3,45.06429);
   hNCinFV_stack_11->SetBinContent(4,30.18207);
   hNCinFV_stack_11->SetBinContent(5,20.97144);
   hNCinFV_stack_11->SetBinContent(6,15.26179);
   hNCinFV_stack_11->SetBinContent(7,9.106216);
   hNCinFV_stack_11->SetBinContent(8,6.793121);
   hNCinFV_stack_11->SetBinContent(9,1.82542);
   hNCinFV_stack_11->SetBinContent(10,2.950646);
   hNCinFV_stack_11->SetBinContent(11,3.417441);
   hNCinFV_stack_11->SetBinContent(12,1.804538);
   hNCinFV_stack_11->SetBinContent(13,21.60899);
   hNCinFV_stack_11->SetBinError(1,3.439151);
   hNCinFV_stack_11->SetBinError(2,5.142505);
   hNCinFV_stack_11->SetBinError(3,3.966098);
   hNCinFV_stack_11->SetBinError(4,3.144416);
   hNCinFV_stack_11->SetBinError(5,2.677504);
   hNCinFV_stack_11->SetBinError(6,2.295174);
   hNCinFV_stack_11->SetBinError(7,1.779825);
   hNCinFV_stack_11->SetBinError(8,1.591584);
   hNCinFV_stack_11->SetBinError(9,0.7845873);
   hNCinFV_stack_11->SetBinError(10,1.033311);
   hNCinFV_stack_11->SetBinError(11,1.084749);
   hNCinFV_stack_11->SetBinError(12,0.8399213);
   hNCinFV_stack_11->SetBinError(13,2.757195);
   hNCinFV_stack_11->SetEntries(869);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,29.74479);
   hnumuCCinFV_stack_12->SetBinContent(2,84.64345);
   hnumuCCinFV_stack_12->SetBinContent(3,60.39027);
   hnumuCCinFV_stack_12->SetBinContent(4,50.39048);
   hnumuCCinFV_stack_12->SetBinContent(5,36.45696);
   hnumuCCinFV_stack_12->SetBinContent(6,19.04417);
   hnumuCCinFV_stack_12->SetBinContent(7,13.52962);
   hnumuCCinFV_stack_12->SetBinContent(8,12.93883);
   hnumuCCinFV_stack_12->SetBinContent(9,7.555461);
   hnumuCCinFV_stack_12->SetBinContent(10,4.625618);
   hnumuCCinFV_stack_12->SetBinContent(11,4.966787);
   hnumuCCinFV_stack_12->SetBinContent(12,4.943781);
   hnumuCCinFV_stack_12->SetBinContent(13,44.99317);
   hnumuCCinFV_stack_12->SetBinError(1,3.35713);
   hnumuCCinFV_stack_12->SetBinError(2,6.196376);
   hnumuCCinFV_stack_12->SetBinError(3,4.811971);
   hnumuCCinFV_stack_12->SetBinError(4,4.586547);
   hnumuCCinFV_stack_12->SetBinError(5,4.13151);
   hnumuCCinFV_stack_12->SetBinError(6,4.075762);
   hnumuCCinFV_stack_12->SetBinError(7,2.255742);
   hnumuCCinFV_stack_12->SetBinError(8,2.425473);
   hnumuCCinFV_stack_12->SetBinError(9,1.699707);
   hnumuCCinFV_stack_12->SetBinError(10,1.166154);
   hnumuCCinFV_stack_12->SetBinError(11,1.356316);
   hnumuCCinFV_stack_12->SetBinError(12,1.512971);
   hnumuCCinFV_stack_12->SetBinError(13,4.654283);
   hnumuCCinFV_stack_12->SetEntries(1129);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,1.193034);
   hnueCCinFV_stack_13->SetBinContent(2,1.592022);
   hnueCCinFV_stack_13->SetBinContent(3,2.437441);
   hnueCCinFV_stack_13->SetBinContent(4,3.008499);
   hnueCCinFV_stack_13->SetBinContent(5,1.207744);
   hnueCCinFV_stack_13->SetBinContent(6,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(7,0.7469288);
   hnueCCinFV_stack_13->SetBinContent(8,0.5117757);
   hnueCCinFV_stack_13->SetBinContent(9,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(12,1.18569);
   hnueCCinFV_stack_13->SetBinContent(13,8.416977);
   hnueCCinFV_stack_13->SetBinError(1,0.698859);
   hnueCCinFV_stack_13->SetBinError(2,0.7490679);
   hnueCCinFV_stack_13->SetBinError(3,1.072735);
   hnueCCinFV_stack_13->SetBinError(4,1.957234);
   hnueCCinFV_stack_13->SetBinError(5,0.6283581);
   hnueCCinFV_stack_13->SetBinError(6,0.3300742);
   hnueCCinFV_stack_13->SetBinError(7,0.5380049);
   hnueCCinFV_stack_13->SetBinError(8,0.3632751);
   hnueCCinFV_stack_13->SetBinError(9,0.5033032);
   hnueCCinFV_stack_13->SetBinError(12,0.6957252);
   hnueCCinFV_stack_13->SetBinError(13,2.125785);
   hnueCCinFV_stack_13->SetEntries(57);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__14->SetBinContent(1,279.4108);
   hmcerror__14->SetBinContent(2,822.8117);
   hmcerror__14->SetBinContent(3,664.7694);
   hmcerror__14->SetBinContent(4,450.8289);
   hmcerror__14->SetBinContent(5,292.4186);
   hmcerror__14->SetBinContent(6,161.084);
   hmcerror__14->SetBinContent(7,94.46576);
   hmcerror__14->SetBinContent(8,58.19651);
   hmcerror__14->SetBinContent(9,37.78375);
   hmcerror__14->SetBinContent(10,29.52835);
   hmcerror__14->SetBinContent(11,27.97233);
   hmcerror__14->SetBinContent(12,24.00326);
   hmcerror__14->SetBinContent(13,211.9051);
   hmcerror__14->SetBinError(1,67.99674);
   hmcerror__14->SetBinError(2,211.6643);
   hmcerror__14->SetBinError(3,190.4864);
   hmcerror__14->SetBinError(4,127.1452);
   hmcerror__14->SetBinError(5,82.96816);
   hmcerror__14->SetBinError(6,45.4085);
   hmcerror__14->SetBinError(7,32.35755);
   hmcerror__14->SetBinError(8,21.33469);
   hmcerror__14->SetBinError(9,14.28924);
   hmcerror__14->SetBinError(10,14.19887);
   hmcerror__14->SetBinError(11,16.38954);
   hmcerror__14->SetBinError(12,11.45933);
   hmcerror__14->SetBinError(13,62.08578);
   hmcerror__14->SetEntries(3116.394);

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
   
   Double_t _fx3017[12] = {
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
   Double_t _fy3017[12] = {
   220,
   661,
   481,
   322,
   246,
   136,
   58,
   50,
   35,
   34,
   22,
   21};
   Double_t _felx3017[12] = {
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
   Double_t _fely3017[12] = {
   14.8324,
   25.70992,
   21.93171,
   17.94436,
   15.68439,
   11.6619,
   7.7446,
   7.2025,
   6.0548,
   5.9703,
   4.8417,
   4.7354};
   Double_t _fehx3017[12] = {
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
   Double_t _fehy3017[12] = {
   14.8324,
   25.70992,
   21.93171,
   17.94436,
   15.68439,
   11.6619,
   7.5415,
   6.9985,
   5.8483,
   5.7635,
   4.6299,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(14.63814);
   Graph_Graph3017->SetMaximum(753.7545);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.78#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2286.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 79.3","F");

   ci = 1486;
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

   ci = 1487;
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

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 183.8","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  3.2","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.4","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1356.4","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  248.9","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.6","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 461.8","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 248.6","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 329.2","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.0","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[12] = {
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
   Double_t _fy3018[12] = {
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
   Double_t _felx3018[12] = {
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
   Double_t _fely3018[12] = {
   0.2433576,
   0.2572452,
   0.2865451,
   0.2820254,
   0.2837308,
   0.2818933,
   0.3425321,
   0.3665973,
   0.3781849,
   0.4808553,
   0.5859196,
   0.4774073};
   Double_t _fehx3018[12] = {
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
   Double_t _fehy3018[12] = {
   0.2433576,
   0.2572452,
   0.2865451,
   0.2820254,
   0.2837308,
   0.2818933,
   0.3425321,
   0.3665973,
   0.3781849,
   0.4808553,
   0.5859196,
   0.4774073};
   grae = new TGraphAsymmErrors(12,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1320);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3019[12] = {
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
   Double_t _fy3019[12] = {
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
   Double_t _felx3019[12] = {
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
   Double_t _fely3019[12] = {
   0.2090067,
   0.2310892,
   0.2661357,
   0.2617043,
   0.2484591,
   0.2499082,
   0.2206556,
   0.215108,
   0.2515252,
   0.2384606,
   0.2157739,
   0.2186988};
   Double_t _fehx3019[12] = {
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
   Double_t _fehy3019[12] = {
   0.2090067,
   0.2310892,
   0.2661357,
   0.2617043,
   0.2484591,
   0.2499082,
   0.2206556,
   0.215108,
   0.2515252,
   0.2384606,
   0.2157739,
   0.2186988};
   grae = new TGraphAsymmErrors(12,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1320);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3020[12] = {
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
   Double_t _fy3020[12] = {
   0.7873711,
   0.803343,
   0.7235592,
   0.71424,
   0.8412597,
   0.8442801,
   0.6139791,
   0.859158,
   0.9263242,
   1.151436,
   0.7864914,
   0.8748811};
   Double_t _felx3020[12] = {
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
   Double_t _fely3020[12] = {
   0.05308455,
   0.03124642,
   0.03299146,
   0.03980304,
   0.05363676,
   0.07239642,
   0.08198314,
   0.1237617,
   0.1602488,
   0.2021887,
   0.1730889,
   0.1972815};
   Double_t _fehx3020[12] = {
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
   Double_t _fehy3020[12] = {
   0.05308455,
   0.03124642,
   0.03299146,
   0.03980304,
   0.05363676,
   0.07239642,
   0.07983316,
   0.1202563,
   0.1547835,
   0.1951853,
   0.1655171,
   0.1884286};
   grae = new TGraphAsymmErrors(12,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0.4505334);
   Graph_Graph3020->SetMaximum(1.428083);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_6_pi0_momentum_all",12,0,1200);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
