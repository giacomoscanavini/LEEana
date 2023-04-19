#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 24 17:46:32 2023) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-24.93257,1353.846,2757.017);
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
   hmc__4->SetBinContent(1,551.3235);
   hmc__4->SetBinContent(2,1246.628);
   hmc__4->SetBinContent(3,1048.243);
   hmc__4->SetBinContent(4,726.7719);
   hmc__4->SetBinContent(5,464.3009);
   hmc__4->SetBinContent(6,274.8115);
   hmc__4->SetBinContent(7,160.4314);
   hmc__4->SetBinContent(8,98.4138);
   hmc__4->SetBinContent(9,70.91356);
   hmc__4->SetBinContent(10,48.48093);
   hmc__4->SetBinContent(11,43.7038);
   hmc__4->SetBinContent(12,36.28399);
   hmc__4->SetBinContent(13,318.0515);
   hmc__4->SetBinError(1,111.8448);
   hmc__4->SetBinError(2,283.0318);
   hmc__4->SetBinError(3,258.9238);
   hmc__4->SetBinError(4,177.6454);
   hmc__4->SetBinError(5,107.7725);
   hmc__4->SetBinError(6,62.48028);
   hmc__4->SetBinError(7,34.18333);
   hmc__4->SetBinError(8,20.86734);
   hmc__4->SetBinError(9,16.43343);
   hmc__4->SetBinError(10,11.18246);
   hmc__4->SetBinError(11,9.614943);
   hmc__4->SetBinError(12,8.039097);
   hmc__4->SetBinError(13,65.55389);
   hmc__4->SetMinimum(-24.93257);
   hmc__4->SetMaximum(2617.919);
   hmc__4->SetEntries(5038.244);
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
   hs2_stack_2->SetMinimum(-1.505544e-08);
   hs2_stack_2->SetMaximum(1308.96);
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
   hbadmatch_stack_1->SetBinContent(1,20.38901);
   hbadmatch_stack_1->SetBinContent(2,32.99397);
   hbadmatch_stack_1->SetBinContent(3,19.45584);
   hbadmatch_stack_1->SetBinContent(4,16.77525);
   hbadmatch_stack_1->SetBinContent(5,8.976664);
   hbadmatch_stack_1->SetBinContent(6,4.556268);
   hbadmatch_stack_1->SetBinContent(7,3.349535);
   hbadmatch_stack_1->SetBinContent(8,3.208691);
   hbadmatch_stack_1->SetBinContent(9,2.30371);
   hbadmatch_stack_1->SetBinContent(10,0.9127098);
   hbadmatch_stack_1->SetBinContent(11,2.176134);
   hbadmatch_stack_1->SetBinContent(12,2.736968);
   hbadmatch_stack_1->SetBinContent(13,7.393118);
   hbadmatch_stack_1->SetBinError(1,2.811749);
   hbadmatch_stack_1->SetBinError(2,4.430802);
   hbadmatch_stack_1->SetBinError(3,2.712036);
   hbadmatch_stack_1->SetBinError(4,2.997824);
   hbadmatch_stack_1->SetBinError(5,1.621679);
   hbadmatch_stack_1->SetBinError(6,1.364204);
   hbadmatch_stack_1->SetBinError(7,1.172867);
   hbadmatch_stack_1->SetBinError(8,1.181703);
   hbadmatch_stack_1->SetBinError(9,0.9113591);
   hbadmatch_stack_1->SetBinError(10,0.554787);
   hbadmatch_stack_1->SetBinError(11,1.002716);
   hbadmatch_stack_1->SetBinError(12,1.033478);
   hbadmatch_stack_1->SetBinError(13,1.753628);
   hbadmatch_stack_1->SetEntries(371);

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
   houtFV_stack_4->SetBinContent(1,68.07417);
   houtFV_stack_4->SetBinContent(2,79.69199);
   houtFV_stack_4->SetBinContent(3,67.31136);
   houtFV_stack_4->SetBinContent(4,46.29622);
   houtFV_stack_4->SetBinContent(5,26.34813);
   houtFV_stack_4->SetBinContent(6,17.81416);
   houtFV_stack_4->SetBinContent(7,14.06709);
   houtFV_stack_4->SetBinContent(8,4.403992);
   houtFV_stack_4->SetBinContent(9,6.431692);
   houtFV_stack_4->SetBinContent(10,5.922173);
   houtFV_stack_4->SetBinContent(11,4.075872);
   houtFV_stack_4->SetBinContent(12,6.72688);
   houtFV_stack_4->SetBinContent(13,30.34076);
   houtFV_stack_4->SetBinError(1,4.808248);
   houtFV_stack_4->SetBinError(2,5.180542);
   houtFV_stack_4->SetBinError(3,4.745292);
   houtFV_stack_4->SetBinError(4,3.973947);
   houtFV_stack_4->SetBinError(5,2.960233);
   houtFV_stack_4->SetBinError(6,2.502655);
   houtFV_stack_4->SetBinError(7,2.18655);
   houtFV_stack_4->SetBinError(8,1.182109);
   houtFV_stack_4->SetBinError(9,1.590366);
   houtFV_stack_4->SetBinError(10,1.430235);
   houtFV_stack_4->SetBinError(11,1.232836);
   houtFV_stack_4->SetBinError(12,1.625855);
   houtFV_stack_4->SetBinError(13,3.280621);
   houtFV_stack_4->SetEntries(1234);

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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.798104);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,10.59375);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.68207);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,16.39146);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.66035);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.096028);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.465898);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.018372);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9182773);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9758867);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.5541486);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7527642);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.741282);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.012625);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.290574);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.524623);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.576821);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.368355);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.017483);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6329124);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7071796);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2959171);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3829406);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2747969);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2865101);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.172852);
   hNCpi0inFVcoh_stack_5->SetEntries(1448);

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
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.441391);
   hNCpi0inFVqe_stack_6->SetBinContent(2,8.120928);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.962831);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.638726);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.240708);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8103737);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5872512);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4217381);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3224303);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.008989);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5853181);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.139244);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.788441);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.7601367);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3942205);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3757188);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2767835);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2667025);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2604666);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3843687);
   hNCpi0inFVqe_stack_6->SetEntries(428);

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
   hNCpi0inFVres_stack_7->SetBinContent(1,213.4238);
   hNCpi0inFVres_stack_7->SetBinContent(2,617.6055);
   hNCpi0inFVres_stack_7->SetBinContent(3,548.8064);
   hNCpi0inFVres_stack_7->SetBinContent(4,373.2792);
   hNCpi0inFVres_stack_7->SetBinContent(5,231.528);
   hNCpi0inFVres_stack_7->SetBinContent(6,118.3755);
   hNCpi0inFVres_stack_7->SetBinContent(7,64.82423);
   hNCpi0inFVres_stack_7->SetBinContent(8,37.87944);
   hNCpi0inFVres_stack_7->SetBinContent(9,28.24439);
   hNCpi0inFVres_stack_7->SetBinContent(10,17.50963);
   hNCpi0inFVres_stack_7->SetBinContent(11,17.17733);
   hNCpi0inFVres_stack_7->SetBinContent(12,10.46262);
   hNCpi0inFVres_stack_7->SetBinContent(13,115.683);
   hNCpi0inFVres_stack_7->SetBinError(1,5.625638);
   hNCpi0inFVres_stack_7->SetBinError(2,9.541948);
   hNCpi0inFVres_stack_7->SetBinError(3,9.030891);
   hNCpi0inFVres_stack_7->SetBinError(4,7.468253);
   hNCpi0inFVres_stack_7->SetBinError(5,5.913759);
   hNCpi0inFVres_stack_7->SetBinError(6,4.138201);
   hNCpi0inFVres_stack_7->SetBinError(7,3.057649);
   hNCpi0inFVres_stack_7->SetBinError(8,2.317351);
   hNCpi0inFVres_stack_7->SetBinError(9,1.991218);
   hNCpi0inFVres_stack_7->SetBinError(10,1.533581);
   hNCpi0inFVres_stack_7->SetBinError(11,1.602981);
   hNCpi0inFVres_stack_7->SetBinError(12,1.196897);
   hNCpi0inFVres_stack_7->SetBinError(13,4.189284);
   hNCpi0inFVres_stack_7->SetEntries(39877);

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
   hNCpi0inFVdis_stack_8->SetBinContent(1,47.10135);
   hNCpi0inFVdis_stack_8->SetBinContent(2,106.2431);
   hNCpi0inFVdis_stack_8->SetBinContent(3,81.63011);
   hNCpi0inFVdis_stack_8->SetBinContent(4,59.94608);
   hNCpi0inFVdis_stack_8->SetBinContent(5,44.81599);
   hNCpi0inFVdis_stack_8->SetBinContent(6,31.15357);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.57416);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.131198);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.864309);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.466291);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.068666);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.126669);
   hNCpi0inFVdis_stack_8->SetBinContent(13,29.2766);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.57823);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.910736);
   hNCpi0inFVdis_stack_8->SetBinError(3,3.425633);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.896094);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.607738);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.178827);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.542101);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.103168);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.013706);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7779476);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6224377);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.806926);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.097452);
   hNCpi0inFVdis_stack_8->SetEntries(7581);

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
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.5541486);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.8765788);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3224303);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2747969);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3786241);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2604666);
   hNCpi0inFVmec_stack_9->SetEntries(32);

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
   hCCpi0inFV_stack_10->SetBinContent(1,84.57399);
   hCCpi0inFV_stack_10->SetBinContent(2,179.8933);
   hCCpi0inFV_stack_10->SetBinContent(3,158.141);
   hCCpi0inFV_stack_10->SetBinContent(4,106.4633);
   hCCpi0inFV_stack_10->SetBinContent(5,57.90079);
   hCCpi0inFV_stack_10->SetBinContent(6,44.11289);
   hCCpi0inFV_stack_10->SetBinContent(7,27.27382);
   hCCpi0inFV_stack_10->SetBinContent(8,14.7181);
   hCCpi0inFV_stack_10->SetBinContent(9,9.593893);
   hCCpi0inFV_stack_10->SetBinContent(10,7.343441);
   hCCpi0inFV_stack_10->SetBinContent(11,5.434497);
   hCCpi0inFV_stack_10->SetBinContent(12,4.117635);
   hCCpi0inFV_stack_10->SetBinContent(13,36.89433);
   hCCpi0inFV_stack_10->SetBinError(1,5.381028);
   hCCpi0inFV_stack_10->SetBinError(2,7.891278);
   hCCpi0inFV_stack_10->SetBinError(3,7.376245);
   hCCpi0inFV_stack_10->SetBinError(4,6.050967);
   hCCpi0inFV_stack_10->SetBinError(5,4.385142);
   hCCpi0inFV_stack_10->SetBinError(6,3.975506);
   hCCpi0inFV_stack_10->SetBinError(7,3.104052);
   hCCpi0inFV_stack_10->SetBinError(8,2.187288);
   hCCpi0inFV_stack_10->SetBinError(9,1.785171);
   hCCpi0inFV_stack_10->SetBinError(10,1.510804);
   hCCpi0inFV_stack_10->SetBinError(11,1.423556);
   hCCpi0inFV_stack_10->SetBinError(12,1.157628);
   hCCpi0inFV_stack_10->SetBinError(13,3.620724);
   hCCpi0inFV_stack_10->SetEntries(2377);

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
   hNCinFV_stack_11->SetBinContent(1,56.28826);
   hNCinFV_stack_11->SetBinContent(2,110.1421);
   hNCinFV_stack_11->SetBinContent(3,77.81744);
   hNCinFV_stack_11->SetBinContent(4,42.47233);
   hNCinFV_stack_11->SetBinContent(5,37.97513);
   hNCinFV_stack_11->SetBinContent(6,25.68487);
   hNCinFV_stack_11->SetBinContent(7,13.92404);
   hNCinFV_stack_11->SetBinContent(8,11.14415);
   hNCinFV_stack_11->SetBinContent(9,6.326325);
   hNCinFV_stack_11->SetBinContent(10,6.580604);
   hNCinFV_stack_11->SetBinContent(11,4.542668);
   hNCinFV_stack_11->SetBinContent(12,2.037936);
   hNCinFV_stack_11->SetBinContent(13,29.97326);
   hNCinFV_stack_11->SetBinError(1,4.272566);
   hNCinFV_stack_11->SetBinError(2,6.136674);
   hNCinFV_stack_11->SetBinError(3,5.22109);
   hNCinFV_stack_11->SetBinError(4,3.76528);
   hNCinFV_stack_11->SetBinError(5,3.662238);
   hNCinFV_stack_11->SetBinError(6,3.020266);
   hNCinFV_stack_11->SetBinError(7,2.16132);
   hNCinFV_stack_11->SetBinError(8,1.981847);
   hNCinFV_stack_11->SetBinError(9,1.556982);
   hNCinFV_stack_11->SetBinError(10,1.545567);
   hNCinFV_stack_11->SetBinError(11,1.276258);
   hNCinFV_stack_11->SetBinError(12,0.8717467);
   hNCinFV_stack_11->SetBinError(13,3.284244);
   hNCinFV_stack_11->SetEntries(1366);

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
   hnumuCCinFV_stack_12->SetBinContent(1,44.49044);
   hnumuCCinFV_stack_12->SetBinContent(2,97.05944);
   hnumuCCinFV_stack_12->SetBinContent(3,67.78316);
   hnumuCCinFV_stack_12->SetBinContent(4,57.54861);
   hnumuCCinFV_stack_12->SetBinContent(5,41.34213);
   hnumuCCinFV_stack_12->SetBinContent(6,23.77204);
   hnumuCCinFV_stack_12->SetBinContent(7,15.29593);
   hnumuCCinFV_stack_12->SetBinContent(8,12.50381);
   hnumuCCinFV_stack_12->SetBinContent(9,9.751948);
   hnumuCCinFV_stack_12->SetBinContent(10,4.134694);
   hnumuCCinFV_stack_12->SetBinContent(11,5.299716);
   hnumuCCinFV_stack_12->SetBinContent(12,4.103724);
   hnumuCCinFV_stack_12->SetBinContent(13,45.26735);
   hnumuCCinFV_stack_12->SetBinError(1,4.10464);
   hnumuCCinFV_stack_12->SetBinError(2,6.427513);
   hnumuCCinFV_stack_12->SetBinError(3,5.133435);
   hnumuCCinFV_stack_12->SetBinError(4,4.908408);
   hnumuCCinFV_stack_12->SetBinError(5,4.379948);
   hnumuCCinFV_stack_12->SetBinError(6,4.305435);
   hnumuCCinFV_stack_12->SetBinError(7,2.463814);
   hnumuCCinFV_stack_12->SetBinError(8,2.379427);
   hnumuCCinFV_stack_12->SetBinError(9,2.585971);
   hnumuCCinFV_stack_12->SetBinError(10,1.055801);
   hnumuCCinFV_stack_12->SetBinError(11,1.346412);
   hnumuCCinFV_stack_12->SetBinError(12,1.362733);
   hnumuCCinFV_stack_12->SetBinError(13,4.535603);
   hnumuCCinFV_stack_12->SetEntries(1301);

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
   hnueCCinFV_stack_13->SetBinContent(1,6.188736);
   hnueCCinFV_stack_13->SetBinContent(2,3.407619);
   hnueCCinFV_stack_13->SetBinContent(3,5.586685);
   hnueCCinFV_stack_13->SetBinContent(4,3.89457);
   hnueCCinFV_stack_13->SetBinContent(5,2.44687);
   hnueCCinFV_stack_13->SetBinContent(6,1.435776);
   hnueCCinFV_stack_13->SetBinContent(7,1.069468);
   hnueCCinFV_stack_13->SetBinContent(8,1.661876);
   hnueCCinFV_stack_13->SetBinContent(9,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(10,0.3130678);
   hnueCCinFV_stack_13->SetBinContent(11,1.341662);
   hnueCCinFV_stack_13->SetBinContent(12,1.18569);
   hnueCCinFV_stack_13->SetBinContent(13,13.47287);
   hnueCCinFV_stack_13->SetBinError(1,1.935787);
   hnueCCinFV_stack_13->SetBinError(2,1.139911);
   hnueCCinFV_stack_13->SetBinError(3,1.602539);
   hnueCCinFV_stack_13->SetBinError(4,1.887432);
   hnueCCinFV_stack_13->SetBinError(5,0.9233388);
   hnueCCinFV_stack_13->SetBinError(6,0.6679576);
   hnueCCinFV_stack_13->SetBinError(7,0.5390327);
   hnueCCinFV_stack_13->SetBinError(8,0.7722386);
   hnueCCinFV_stack_13->SetBinError(9,0.4459143);
   hnueCCinFV_stack_13->SetBinError(10,0.3130678);
   hnueCCinFV_stack_13->SetBinError(11,0.8146586);
   hnueCCinFV_stack_13->SetBinError(12,0.6957252);
   hnueCCinFV_stack_13->SetBinError(13,2.536223);
   hnueCCinFV_stack_13->SetEntries(119);

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
   hmcerror__5->SetBinContent(1,551.3235);
   hmcerror__5->SetBinContent(2,1246.628);
   hmcerror__5->SetBinContent(3,1048.243);
   hmcerror__5->SetBinContent(4,726.7719);
   hmcerror__5->SetBinContent(5,464.3009);
   hmcerror__5->SetBinContent(6,274.8115);
   hmcerror__5->SetBinContent(7,160.4314);
   hmcerror__5->SetBinContent(8,98.4138);
   hmcerror__5->SetBinContent(9,70.91356);
   hmcerror__5->SetBinContent(10,48.48093);
   hmcerror__5->SetBinContent(11,43.7038);
   hmcerror__5->SetBinContent(12,36.28399);
   hmcerror__5->SetBinContent(13,318.0515);
   hmcerror__5->SetBinError(1,111.8448);
   hmcerror__5->SetBinError(2,283.0318);
   hmcerror__5->SetBinError(3,258.9238);
   hmcerror__5->SetBinError(4,177.6454);
   hmcerror__5->SetBinError(5,107.7725);
   hmcerror__5->SetBinError(6,62.48028);
   hmcerror__5->SetBinError(7,34.18333);
   hmcerror__5->SetBinError(8,20.86734);
   hmcerror__5->SetBinError(9,16.43343);
   hmcerror__5->SetBinError(10,11.18246);
   hmcerror__5->SetBinError(11,9.614943);
   hmcerror__5->SetBinError(12,8.039097);
   hmcerror__5->SetBinError(13,65.55389);
   hmcerror__5->SetEntries(5038.244);

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
   541,
   1142,
   954,
   655,
   457,
   266,
   143,
   100,
   81,
   60,
   44,
   37};
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
   23.25941,
   33.79349,
   30.88689,
   25.59297,
   21.37756,
   16.30951,
   11.95826,
   10.1212,
   9.1239,
   7.8743,
   6.7671,
   6.2203};
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
   23.25941,
   33.79349,
   30.88689,
   25.59297,
   21.37756,
   16.30951,
   11.95826,
   9.92,
   8.9221,
   7.6713,
   6.5623,
   6.0141};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(27.70173);
   Graph_Graph3005->SetMaximum(1290.295);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4480.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 117.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 347.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  78.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  23.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2279.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  415.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 699.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 394.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 383.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.0","F");

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
   0.2028661,
   0.2270379,
   0.2470074,
   0.2444307,
   0.2321177,
   0.2273569,
   0.2130713,
   0.2120367,
   0.2317389,
   0.2306569,
   0.2200025,
   0.2215604};
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
   0.2028661,
   0.2270379,
   0.2470074,
   0.2444307,
   0.2321177,
   0.2273569,
   0.2130713,
   0.2120367,
   0.2317389,
   0.2306569,
   0.2200025,
   0.2215604};
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
   0.2028661,
   0.2270379,
   0.2470074,
   0.2444307,
   0.2321177,
   0.2273569,
   0.2130713,
   0.2120367,
   0.2317389,
   0.2306569,
   0.2200025,
   0.2215604};
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
   0.2028661,
   0.2270379,
   0.2470074,
   0.2444307,
   0.2321177,
   0.2273569,
   0.2130713,
   0.2120367,
   0.2317389,
   0.2306569,
   0.2200025,
   0.2215604};
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
   0.9812751,
   0.916071,
   0.9100943,
   0.9012456,
   0.9842754,
   0.9679363,
   0.8913466,
   1.016118,
   1.142236,
   1.2376,
   1.006778,
   1.019734};
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
   0.04218831,
   0.02710791,
   0.02946539,
   0.03521458,
   0.04604246,
   0.05934798,
   0.07453814,
   0.1028433,
   0.1286623,
   0.1624206,
   0.1548401,
   0.1714337};
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
   0.04218831,
   0.02710791,
   0.02946539,
   0.03521458,
   0.04604246,
   0.05934798,
   0.07453814,
   0.1007989,
   0.1258166,
   0.1582334,
   0.150154,
   0.1657508};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.7589059);
   Graph_Graph3008->SetMaximum(1.453736);
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
   entry=leg->AddEntry("","Stat. + XS","F");

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
