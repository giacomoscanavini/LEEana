#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Tue Dec  6 22:18:03 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-2.205927,1353.846,243.9291);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__19->SetBinContent(1,41.29305);
   hmc__19->SetBinContent(2,99.46351);
   hmc__19->SetBinContent(3,110.2964);
   hmc__19->SetBinContent(4,82.30179);
   hmc__19->SetBinContent(5,63.57923);
   hmc__19->SetBinContent(6,38.9253);
   hmc__19->SetBinContent(7,22.39528);
   hmc__19->SetBinContent(8,12.47892);
   hmc__19->SetBinContent(9,8.486441);
   hmc__19->SetBinContent(10,4.739477);
   hmc__19->SetBinContent(11,5.092708);
   hmc__19->SetBinContent(12,5.247314);
   hmc__19->SetBinContent(13,29.51618);
   hmc__19->SetBinError(1,20.73602);
   hmc__19->SetBinError(2,42.12607);
   hmc__19->SetBinError(3,48.82251);
   hmc__19->SetBinError(4,39.1248);
   hmc__19->SetBinError(5,30.33187);
   hmc__19->SetBinError(6,15.67854);
   hmc__19->SetBinError(7,10.53506);
   hmc__19->SetBinError(8,7.53773);
   hmc__19->SetBinError(9,8.291744);
   hmc__19->SetBinError(10,5.716103);
   hmc__19->SetBinError(11,5.454468);
   hmc__19->SetBinError(12,12.86918);
   hmc__19->SetBinError(13,12.67851);
   hmc__19->SetMinimum(-2.205927);
   hmc__19->SetMaximum(231.6224);
   hmc__19->SetEntries(612.758);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1200);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(115.8112);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.287469);
   hbadmatch_stack_1->SetBinContent(2,0.7881042);
   hbadmatch_stack_1->SetBinContent(3,2.796894);
   hbadmatch_stack_1->SetBinContent(4,0.9286332);
   hbadmatch_stack_1->SetBinContent(5,1.557602);
   hbadmatch_stack_1->SetBinContent(6,0.7319179);
   hbadmatch_stack_1->SetBinContent(7,0.5552763);
   hbadmatch_stack_1->SetBinContent(8,0.3401776);
   hbadmatch_stack_1->SetBinContent(9,0.2178256);
   hbadmatch_stack_1->SetBinContent(12,0.4021636);
   hbadmatch_stack_1->SetBinContent(13,0.8770706);
   hbadmatch_stack_1->SetBinError(1,0.8839099);
   hbadmatch_stack_1->SetBinError(2,0.3917712);
   hbadmatch_stack_1->SetBinError(3,1.059303);
   hbadmatch_stack_1->SetBinError(4,0.48078);
   hbadmatch_stack_1->SetBinError(5,0.6531254);
   hbadmatch_stack_1->SetBinError(6,0.438694);
   hbadmatch_stack_1->SetBinError(7,0.3279371);
   hbadmatch_stack_1->SetBinError(8,0.3401776);
   hbadmatch_stack_1->SetBinError(9,0.2178256);
   hbadmatch_stack_1->SetBinError(12,0.2844397);
   hbadmatch_stack_1->SetBinError(13,0.5197486);
   hbadmatch_stack_1->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,3.483397);
   hext_stack_2->SetBinContent(2,5.020411);
   hext_stack_2->SetBinContent(3,7.23217);
   hext_stack_2->SetBinContent(4,2.923985);
   hext_stack_2->SetBinContent(5,2.428004);
   hext_stack_2->SetBinContent(6,4.028449);
   hext_stack_2->SetBinContent(7,4.345666);
   hext_stack_2->SetBinContent(8,0.4065989);
   hext_stack_2->SetBinContent(9,0.4065989);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(13,2.890854);
   hext_stack_2->SetBinError(1,1.197416);
   hext_stack_2->SetBinError(2,1.495396);
   hext_stack_2->SetBinError(3,1.667512);
   hext_stack_2->SetBinError(4,1.040301);
   hext_stack_2->SetBinError(5,1.028599);
   hext_stack_2->SetBinError(6,1.479117);
   hext_stack_2->SetBinError(7,1.579311);
   hext_stack_2->SetBinError(8,0.4065989);
   hext_stack_2->SetBinError(9,0.4065989);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(13,1.323597);
   hext_stack_2->SetEntries(79);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.2605212);
   hdirt_stack_3->SetBinContent(2,0.7947583);
   hdirt_stack_3->SetBinContent(3,0.6998254);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinError(1,0.2605212);
   hdirt_stack_3->SetBinError(2,0.4034967);
   hdirt_stack_3->SetBinError(3,0.4055767);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetEntries(10);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,2.011671);
   houtFV_stack_4->SetBinContent(2,2.59288);
   houtFV_stack_4->SetBinContent(3,5.212972);
   houtFV_stack_4->SetBinContent(4,3.078227);
   houtFV_stack_4->SetBinContent(5,2.106507);
   houtFV_stack_4->SetBinContent(6,0.5191597);
   houtFV_stack_4->SetBinContent(7,0.9785053);
   houtFV_stack_4->SetBinContent(8,0.5352025);
   houtFV_stack_4->SetBinContent(9,0.4277971);
   houtFV_stack_4->SetBinContent(12,0.7172067);
   houtFV_stack_4->SetBinContent(13,2.319252);
   houtFV_stack_4->SetBinError(1,0.6995616);
   houtFV_stack_4->SetBinError(2,0.7643586);
   houtFV_stack_4->SetBinError(3,1.107359);
   houtFV_stack_4->SetBinError(4,0.8506704);
   houtFV_stack_4->SetBinError(5,0.6662842);
   houtFV_stack_4->SetBinError(6,0.3049055);
   houtFV_stack_4->SetBinError(7,0.4376048);
   houtFV_stack_4->SetBinError(8,0.3921167);
   houtFV_stack_4->SetBinError(9,0.2553284);
   houtFV_stack_4->SetBinError(12,0.3633255);
   houtFV_stack_4->SetBinError(13,0.8010585);
   houtFV_stack_4->SetEntries(99);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1911818);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1054784);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3501987);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.09420789);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1348572);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06149119);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2003124);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.06726694);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.01677252);
   hNCpi0inFVcoh_stack_5->SetEntries(16);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2415165);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.021734);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8530271);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9018831);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2408435);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.07749824);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1450349);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0508617);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08826282);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1314631);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2842276);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.256464);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3706327);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1197354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04677266);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1293563);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05086169);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03947959);
   hNCpi0inFVqe_stack_6->SetEntries(93);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.21143);
   hNCpi0inFVres_stack_7->SetBinContent(2,33.68975);
   hNCpi0inFVres_stack_7->SetBinContent(3,47.79345);
   hNCpi0inFVres_stack_7->SetBinContent(4,41.06685);
   hNCpi0inFVres_stack_7->SetBinContent(5,31.35783);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.38483);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.658196);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.923937);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.687839);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.167498);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.683761);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.248512);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.849805);
   hNCpi0inFVres_stack_7->SetBinError(1,1.007218);
   hNCpi0inFVres_stack_7->SetBinError(2,1.664202);
   hNCpi0inFVres_stack_7->SetBinError(3,2.053138);
   hNCpi0inFVres_stack_7->SetBinError(4,1.765904);
   hNCpi0inFVres_stack_7->SetBinError(5,1.756337);
   hNCpi0inFVres_stack_7->SetBinError(6,1.324552);
   hNCpi0inFVres_stack_7->SetBinError(7,1.009136);
   hNCpi0inFVres_stack_7->SetBinError(8,0.715854);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9187361);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9125537);
   hNCpi0inFVres_stack_7->SetBinError(11,0.656451);
   hNCpi0inFVres_stack_7->SetBinError(12,0.448107);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9721821);
   hNCpi0inFVres_stack_7->SetEntries(5461);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.062959);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.831848);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.243864);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.985842);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.679976);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.733306);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.701163);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.300646);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4716747);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.4645349);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.271942);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6105555);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.025339);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4945459);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9396413);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9133152);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7463718);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.710643);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.623388);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3128493);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3613156);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1956856);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1682058);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1178289);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2989068);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6824307);
   hNCpi0inFVdis_stack_8->SetEntries(1014);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(4);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,5.83392);
   hCCpi0inFV_stack_10->SetBinContent(2,20.24265);
   hCCpi0inFV_stack_10->SetBinContent(3,18.23361);
   hCCpi0inFV_stack_10->SetBinContent(4,14.55153);
   hCCpi0inFV_stack_10->SetBinContent(5,9.097462);
   hCCpi0inFV_stack_10->SetBinContent(6,7.569984);
   hCCpi0inFV_stack_10->SetBinContent(7,1.853885);
   hCCpi0inFV_stack_10->SetBinContent(8,1.712114);
   hCCpi0inFV_stack_10->SetBinContent(9,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(10,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(11,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(12,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(13,2.587494);
   hCCpi0inFV_stack_10->SetBinError(1,1.205655);
   hCCpi0inFV_stack_10->SetBinError(2,2.255061);
   hCCpi0inFV_stack_10->SetBinError(3,2.190316);
   hCCpi0inFV_stack_10->SetBinError(4,1.932621);
   hCCpi0inFV_stack_10->SetBinError(5,1.441347);
   hCCpi0inFV_stack_10->SetBinError(6,1.336979);
   hCCpi0inFV_stack_10->SetBinError(7,0.6789509);
   hCCpi0inFV_stack_10->SetBinError(8,0.6201715);
   hCCpi0inFV_stack_10->SetBinError(9,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(10,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(11,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(12,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(13,0.8087577);
   hCCpi0inFV_stack_10->SetEntries(360);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,6.754849);
   hNCinFV_stack_11->SetBinContent(2,13.17151);
   hNCinFV_stack_11->SetBinContent(3,11.47529);
   hNCinFV_stack_11->SetBinContent(4,5.795655);
   hNCinFV_stack_11->SetBinContent(5,6.245988);
   hNCinFV_stack_11->SetBinContent(6,3.318686);
   hNCinFV_stack_11->SetBinContent(7,2.296453);
   hNCinFV_stack_11->SetBinContent(8,0.8471797);
   hNCinFV_stack_11->SetBinContent(10,0.1950248);
   hNCinFV_stack_11->SetBinContent(11,0.1950248);
   hNCinFV_stack_11->SetBinContent(12,1.258084);
   hNCinFV_stack_11->SetBinContent(13,3.941439);
   hNCinFV_stack_11->SetBinError(1,1.548383);
   hNCinFV_stack_11->SetBinError(2,1.896975);
   hNCinFV_stack_11->SetBinError(3,1.890557);
   hNCinFV_stack_11->SetBinError(4,1.279897);
   hNCinFV_stack_11->SetBinError(5,1.351885);
   hNCinFV_stack_11->SetBinError(6,1.04338);
   hNCinFV_stack_11->SetBinError(7,0.9771321);
   hNCinFV_stack_11->SetBinError(8,0.4561538);
   hNCinFV_stack_11->SetBinError(10,0.1950249);
   hNCinFV_stack_11->SetBinError(11,0.1950249);
   hNCinFV_stack_11->SetBinError(12,0.9095512);
   hNCinFV_stack_11->SetBinError(13,1.270343);
   hNCinFV_stack_11->SetEntries(227);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,5.857537);
   hnumuCCinFV_stack_12->SetBinContent(2,12.58177);
   hnumuCCinFV_stack_12->SetBinContent(3,7.291378);
   hnumuCCinFV_stack_12->SetBinContent(4,5.718989);
   hnumuCCinFV_stack_12->SetBinContent(5,5.360264);
   hnumuCCinFV_stack_12->SetBinContent(6,3.613802);
   hnumuCCinFV_stack_12->SetBinContent(7,1.662242);
   hnumuCCinFV_stack_12->SetBinContent(8,2.372567);
   hnumuCCinFV_stack_12->SetBinContent(9,1.541097);
   hnumuCCinFV_stack_12->SetBinContent(10,0.1958276);
   hnumuCCinFV_stack_12->SetBinContent(11,0.4551956);
   hnumuCCinFV_stack_12->SetBinContent(12,0.4247287);
   hnumuCCinFV_stack_12->SetBinContent(13,3.719053);
   hnumuCCinFV_stack_12->SetBinError(1,1.219354);
   hnumuCCinFV_stack_12->SetBinError(2,2.499394);
   hnumuCCinFV_stack_12->SetBinError(3,1.446686);
   hnumuCCinFV_stack_12->SetBinError(4,1.17835);
   hnumuCCinFV_stack_12->SetBinError(5,1.17577);
   hnumuCCinFV_stack_12->SetBinError(6,2.521472);
   hnumuCCinFV_stack_12->SetBinError(7,0.6513556);
   hnumuCCinFV_stack_12->SetBinError(8,1.164689);
   hnumuCCinFV_stack_12->SetBinError(9,0.7077199);
   hnumuCCinFV_stack_12->SetBinError(10,0.1950265);
   hnumuCCinFV_stack_12->SetBinError(11,0.3218747);
   hnumuCCinFV_stack_12->SetBinError(12,0.4247287);
   hnumuCCinFV_stack_12->SetBinError(13,1.605419);
   hnumuCCinFV_stack_12->SetEntries(185);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(2,0.536893);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.2537049);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.2538659);
   hnueCCinFV_stack_13->SetBinError(2,0.3929602);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.2537049);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetEntries(9);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__20->SetBinContent(1,41.29305);
   hmcerror__20->SetBinContent(2,99.46351);
   hmcerror__20->SetBinContent(3,110.2964);
   hmcerror__20->SetBinContent(4,82.30179);
   hmcerror__20->SetBinContent(5,63.57923);
   hmcerror__20->SetBinContent(6,38.9253);
   hmcerror__20->SetBinContent(7,22.39528);
   hmcerror__20->SetBinContent(8,12.47892);
   hmcerror__20->SetBinContent(9,8.486441);
   hmcerror__20->SetBinContent(10,4.739477);
   hmcerror__20->SetBinContent(11,5.092708);
   hmcerror__20->SetBinContent(12,5.247314);
   hmcerror__20->SetBinContent(13,29.51618);
   hmcerror__20->SetBinError(1,20.73602);
   hmcerror__20->SetBinError(2,42.12607);
   hmcerror__20->SetBinError(3,48.82251);
   hmcerror__20->SetBinError(4,39.1248);
   hmcerror__20->SetBinError(5,30.33187);
   hmcerror__20->SetBinError(6,15.67854);
   hmcerror__20->SetBinError(7,10.53506);
   hmcerror__20->SetBinError(8,7.53773);
   hmcerror__20->SetBinError(9,8.291744);
   hmcerror__20->SetBinError(10,5.716103);
   hmcerror__20->SetBinError(11,5.454468);
   hmcerror__20->SetBinError(12,12.86918);
   hmcerror__20->SetBinError(13,12.67851);
   hmcerror__20->SetEntries(612.758);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[12] = {
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
   Double_t _fy3025[12] = {
   37,
   109,
   94,
   90,
   39,
   36,
   15,
   11,
   5,
   8,
   3,
   2};
   Double_t _felx3025[12] = {
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
   Double_t _fely3025[12] = {
   6.2203,
   10.44031,
   9.8173,
   9.6093,
   6.3813,
   6.1381,
   4.0385,
   3.4975,
   2.48995,
   3.0307,
   2.143368,
   2};
   Double_t _fehx3025[12] = {
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
   Double_t _fehy3025[12] = {
   6.0141,
   10.44031,
   9.616,
   9.4079,
   6.1757,
   5.9318,
   3.8197,
   3.27,
   2.21064,
   2.7896,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1320);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(131.3843);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.91#pm0.35","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 449.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.6","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 31.0","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.0","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 18.2","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.8","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  3.6","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  205.9","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  40.4","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 81.1","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 51.6","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 47.1","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.1","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[12] = {
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
   Double_t _fy3026[12] = {
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
   Double_t _felx3026[12] = {
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
   Double_t _fely3026[12] = {
   0.5021674,
   0.4235329,
   0.4426484,
   0.4753821,
   0.4770721,
   0.4027854,
   0.4704142,
   0.6040371,
   0.9770579,
   1.206062,
   1.071035,
   2.452526};
   Double_t _fehx3026[12] = {
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
   Double_t _fehy3026[12] = {
   0.5021674,
   0.4235329,
   0.4426484,
   0.4753821,
   0.4770721,
   0.4027854,
   0.4704142,
   0.6040371,
   0.9770579,
   1.206062,
   1.071035,
   2.452526};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1320);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[12] = {
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
   Double_t _fy3027[12] = {
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
   Double_t _felx3027[12] = {
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
   Double_t _fely3027[12] = {
   0.3135042,
   0.3968667,
   0.4151766,
   0.4270805,
   0.3993591,
   0.3365908,
   0.2696548,
   0.3152675,
   0.3498957,
   0.4287984,
   0.3409545,
   0.3557588};
   Double_t _fehx3027[12] = {
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
   Double_t _fehy3027[12] = {
   0.3135042,
   0.3968667,
   0.4151766,
   0.4270805,
   0.3993591,
   0.3365908,
   0.2696548,
   0.3152675,
   0.3498957,
   0.4287984,
   0.3409545,
   0.3557588};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1320);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[12] = {
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
   Double_t _fy3028[12] = {
   0.8960346,
   1.095879,
   0.8522493,
   1.093536,
   0.6134079,
   0.9248483,
   0.669784,
   0.8814865,
   0.5891752,
   1.68795,
   0.5890776,
   0.3811474};
   Double_t _felx3028[12] = {
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
   Double_t _fely3028[12] = {
   0.1506379,
   0.1049662,
   0.08900837,
   0.1167569,
   0.1003677,
   0.1576892,
   0.1803282,
   0.2802727,
   0.2934033,
   0.6394588,
   0.42087,
   0.3811474};
   Double_t _fehx3028[12] = {
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
   Double_t _fehy3028[12] = {
   0.1456444,
   0.1049662,
   0.08718329,
   0.1143098,
   0.09713392,
   0.1523893,
   0.1705583,
   0.2620419,
   0.2604908,
   0.5885882,
   0.3385665,
   0.2895138};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1320);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(2.504192);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_theta2_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
