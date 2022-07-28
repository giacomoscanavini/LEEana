#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Jun  5 00:36:31 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",190,172,1200,900);
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
   pad1->Range(-184.6154,-15.03816,1353.846,1662.904);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmc__13->SetBinContent(1,38.41245);
   hmc__13->SetBinContent(2,233.1612);
   hmc__13->SetBinContent(3,618.7866);
   hmc__13->SetBinContent(4,751.9082);
   hmc__13->SetBinContent(5,549.2668);
   hmc__13->SetBinContent(6,371.7373);
   hmc__13->SetBinContent(7,282.671);
   hmc__13->SetBinContent(8,188.7135);
   hmc__13->SetBinContent(9,124.8172);
   hmc__13->SetBinContent(10,78.23722);
   hmc__13->SetBinContent(11,55.23323);
   hmc__13->SetBinContent(12,37.97787);
   hmc__13->SetBinContent(13,23.77844);
   hmc__13->SetBinContent(14,18.21839);
   hmc__13->SetBinContent(15,14.33695);
   hmc__13->SetBinContent(16,10.75031);
   hmc__13->SetBinContent(17,7.508343);
   hmc__13->SetBinContent(18,5.683492);
   hmc__13->SetBinContent(19,2.764099);
   hmc__13->SetBinContent(20,2.955442);
   hmc__13->SetBinContent(21,26.67913);
   hmc__13->SetBinError(1,9.043975);
   hmc__13->SetBinError(2,45.63438);
   hmc__13->SetBinError(3,122.467);
   hmc__13->SetBinError(4,173.3811);
   hmc__13->SetBinError(5,140.7365);
   hmc__13->SetBinError(6,99.01885);
   hmc__13->SetBinError(7,75.13603);
   hmc__13->SetBinError(8,54.9985);
   hmc__13->SetBinError(9,36.00318);
   hmc__13->SetBinError(10,22.50738);
   hmc__13->SetBinError(11,19.16035);
   hmc__13->SetBinError(12,11.2108);
   hmc__13->SetBinError(13,9.552096);
   hmc__13->SetBinError(14,7.124761);
   hmc__13->SetBinError(15,5.977353);
   hmc__13->SetBinError(16,6.301055);
   hmc__13->SetBinError(17,5.752058);
   hmc__13->SetBinError(18,4.140018);
   hmc__13->SetBinError(19,2.042683);
   hmc__13->SetBinError(20,2.044378);
   hmc__13->SetBinError(21,11.64511);
   hmc__13->SetMinimum(-15.03816);
   hmc__13->SetMaximum(1579.007);
   hmc__13->SetEntries(3396.741);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,0,1200);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(789.5037);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.75277);
   hbadmatch_stack_1->SetBinContent(2,8.345544);
   hbadmatch_stack_1->SetBinContent(3,18.88646);
   hbadmatch_stack_1->SetBinContent(4,17.02204);
   hbadmatch_stack_1->SetBinContent(5,13.81458);
   hbadmatch_stack_1->SetBinContent(6,6.957611);
   hbadmatch_stack_1->SetBinContent(7,4.974042);
   hbadmatch_stack_1->SetBinContent(8,2.185394);
   hbadmatch_stack_1->SetBinContent(9,1.804013);
   hbadmatch_stack_1->SetBinContent(10,1.908252);
   hbadmatch_stack_1->SetBinContent(11,1.217248);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.9077157);
   hbadmatch_stack_1->SetBinError(2,1.628283);
   hbadmatch_stack_1->SetBinError(3,2.18156);
   hbadmatch_stack_1->SetBinError(4,2.371772);
   hbadmatch_stack_1->SetBinError(5,2.603021);
   hbadmatch_stack_1->SetBinError(6,1.3585);
   hbadmatch_stack_1->SetBinError(7,1.236536);
   hbadmatch_stack_1->SetBinError(8,0.8459834);
   hbadmatch_stack_1->SetBinError(9,0.7075491);
   hbadmatch_stack_1->SetBinError(10,0.7620643);
   hbadmatch_stack_1->SetBinError(11,0.6211758);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetEntries(323);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,8.407247);
   hext_stack_2->SetBinContent(2,31.12432);
   hext_stack_2->SetBinContent(3,62.55749);
   hext_stack_2->SetBinContent(4,52.99393);
   hext_stack_2->SetBinContent(5,45.69115);
   hext_stack_2->SetBinContent(6,23.91256);
   hext_stack_2->SetBinContent(7,16.16847);
   hext_stack_2->SetBinContent(8,7.963166);
   hext_stack_2->SetBinContent(9,13.34262);
   hext_stack_2->SetBinContent(10,4.856008);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,1.868591);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,6.545835);
   hext_stack_2->SetBinError(1,2.003079);
   hext_stack_2->SetBinError(2,3.77605);
   hext_stack_2->SetBinError(3,5.582377);
   hext_stack_2->SetBinError(4,5.06474);
   hext_stack_2->SetBinError(5,4.769154);
   hext_stack_2->SetBinError(6,3.417912);
   hext_stack_2->SetBinError(7,2.734568);
   hext_stack_2->SetBinError(8,1.746755);
   hext_stack_2->SetBinError(9,2.80271);
   hext_stack_2->SetBinError(10,1.454658);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,0.840497);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,1.762013);
   hext_stack_2->SetEntries(621);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,0.7827715);
   hdirt_stack_3->SetBinContent(2,2.56557);
   hdirt_stack_3->SetBinContent(3,3.336656);
   hdirt_stack_3->SetBinContent(4,4.820207);
   hdirt_stack_3->SetBinContent(5,2.569035);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.7707915);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinError(1,0.4027019);
   hdirt_stack_3->SetBinError(2,0.8330952);
   hdirt_stack_3->SetBinError(3,0.916131);
   hdirt_stack_3->SetBinError(4,1.364963);
   hdirt_stack_3->SetBinError(5,0.8912461);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.4206878);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetEntries(69);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,3.429128);
   houtFV_stack_4->SetBinContent(2,21.65502);
   houtFV_stack_4->SetBinContent(3,38.68944);
   houtFV_stack_4->SetBinContent(4,47.90199);
   houtFV_stack_4->SetBinContent(5,32.95029);
   houtFV_stack_4->SetBinContent(6,20.59604);
   houtFV_stack_4->SetBinContent(7,20.02276);
   houtFV_stack_4->SetBinContent(8,9.334348);
   houtFV_stack_4->SetBinContent(9,7.718583);
   houtFV_stack_4->SetBinContent(10,4.106273);
   houtFV_stack_4->SetBinContent(11,3.657526);
   houtFV_stack_4->SetBinContent(12,1.949166);
   houtFV_stack_4->SetBinContent(13,1.231246);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.8770706);
   houtFV_stack_4->SetBinContent(16,0.7834804);
   houtFV_stack_4->SetBinContent(17,0.3934307);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinError(1,1.025732);
   houtFV_stack_4->SetBinError(2,2.320736);
   houtFV_stack_4->SetBinError(3,3.100443);
   houtFV_stack_4->SetBinError(4,3.580618);
   houtFV_stack_4->SetBinError(5,2.841232);
   houtFV_stack_4->SetBinError(6,2.167969);
   houtFV_stack_4->SetBinError(7,2.224416);
   houtFV_stack_4->SetBinError(8,1.52145);
   houtFV_stack_4->SetBinError(9,1.455772);
   houtFV_stack_4->SetBinError(10,1.000664);
   houtFV_stack_4->SetBinError(11,0.9567863);
   houtFV_stack_4->SetBinError(12,0.7604681);
   houtFV_stack_4->SetBinError(13,0.5051595);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.5197486);
   houtFV_stack_4->SetBinError(16,0.3917439);
   houtFV_stack_4->SetBinError(17,0.2781975);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetEntries(931);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6818899);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.211494);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2297887);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3374081);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3022172);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.324422);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.993124);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.457783);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.304834);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.771326);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9212041);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.299954);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.7217307);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5606141);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5796719);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4479997);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3520856);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(347);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.269459);
   hNCpi0inFVres_stack_7->SetBinContent(2,71.99425);
   hNCpi0inFVres_stack_7->SetBinContent(3,258.5989);
   hNCpi0inFVres_stack_7->SetBinContent(4,351.8517);
   hNCpi0inFVres_stack_7->SetBinContent(5,250.9366);
   hNCpi0inFVres_stack_7->SetBinContent(6,170.344);
   hNCpi0inFVres_stack_7->SetBinContent(7,128.8207);
   hNCpi0inFVres_stack_7->SetBinContent(8,86.23146);
   hNCpi0inFVres_stack_7->SetBinContent(9,52.95027);
   hNCpi0inFVres_stack_7->SetBinContent(10,29.0289);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.71617);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.86189);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.399254);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.382564);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.543732);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.023426);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.756212);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.562576);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6275859);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.6275859);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.203444);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6619077);
   hNCpi0inFVres_stack_7->SetBinError(2,2.783414);
   hNCpi0inFVres_stack_7->SetBinError(3,5.189602);
   hNCpi0inFVres_stack_7->SetBinError(4,6.186175);
   hNCpi0inFVres_stack_7->SetBinError(5,5.180476);
   hNCpi0inFVres_stack_7->SetBinError(6,4.32416);
   hNCpi0inFVres_stack_7->SetBinError(7,3.775986);
   hNCpi0inFVres_stack_7->SetBinError(8,3.063156);
   hNCpi0inFVres_stack_7->SetBinError(9,2.404971);
   hNCpi0inFVres_stack_7->SetBinError(10,1.741346);
   hNCpi0inFVres_stack_7->SetBinError(11,1.482737);
   hNCpi0inFVres_stack_7->SetBinError(12,1.292403);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8085055);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7691147);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7049069);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5096416);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4333528);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4699768);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2387875);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2387875);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4685247);
   hNCpi0inFVres_stack_7->SetEntries(26811);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.770326);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.69031);
   hNCpi0inFVdis_stack_8->SetBinContent(3,49.7824);
   hNCpi0inFVdis_stack_8->SetBinContent(4,57.65192);
   hNCpi0inFVdis_stack_8->SetBinContent(5,38.25802);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.64453);
   hNCpi0inFVdis_stack_8->SetBinContent(7,23.8717);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.20334);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.84286);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.548899);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.276205);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.849383);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.496894);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.290888);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.13353);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.785112);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.14374);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.7242399);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8934723);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.584666);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3855887);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.13148);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.209703);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.48043);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.005553);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.76655);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.607415);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.489422);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.199413);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9877702);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8833125);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6141751);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5036877);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6386662);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5070253);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4905081);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.379057);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2828126);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3948984);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6025527);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.8096042);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2926179);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.3476357);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.122146);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);

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
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,1.51551);
   hCCpi0inFV_stack_11->SetBinContent(2,23.41641);
   hCCpi0inFV_stack_11->SetBinContent(3,79.337);
   hCCpi0inFV_stack_11->SetBinContent(4,111.003);
   hCCpi0inFV_stack_11->SetBinContent(5,89.65592);
   hCCpi0inFV_stack_11->SetBinContent(6,68.68193);
   hCCpi0inFV_stack_11->SetBinContent(7,54.16054);
   hCCpi0inFV_stack_11->SetBinContent(8,38.54049);
   hCCpi0inFV_stack_11->SetBinContent(9,25.91442);
   hCCpi0inFV_stack_11->SetBinContent(10,19.80994);
   hCCpi0inFV_stack_11->SetBinContent(11,14.1161);
   hCCpi0inFV_stack_11->SetBinContent(12,9.718615);
   hCCpi0inFV_stack_11->SetBinContent(13,8.215927);
   hCCpi0inFV_stack_11->SetBinContent(14,5.771895);
   hCCpi0inFV_stack_11->SetBinContent(15,3.17764);
   hCCpi0inFV_stack_11->SetBinContent(16,3.591375);
   hCCpi0inFV_stack_11->SetBinContent(17,1.463836);
   hCCpi0inFV_stack_11->SetBinContent(18,1.857266);
   hCCpi0inFV_stack_11->SetBinContent(19,0.8770706);
   hCCpi0inFV_stack_11->SetBinContent(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(21,5.954004);
   hCCpi0inFV_stack_11->SetBinError(1,0.638538);
   hCCpi0inFV_stack_11->SetBinError(2,2.421777);
   hCCpi0inFV_stack_11->SetBinError(3,4.462083);
   hCCpi0inFV_stack_11->SetBinError(4,5.287391);
   hCCpi0inFV_stack_11->SetBinError(5,4.739768);
   hCCpi0inFV_stack_11->SetBinError(6,4.163926);
   hCCpi0inFV_stack_11->SetBinError(7,3.73006);
   hCCpi0inFV_stack_11->SetBinError(8,3.067662);
   hCCpi0inFV_stack_11->SetBinError(9,2.573906);
   hCCpi0inFV_stack_11->SetBinError(10,2.259679);
   hCCpi0inFV_stack_11->SetBinError(11,1.887699);
   hCCpi0inFV_stack_11->SetBinError(12,1.571093);
   hCCpi0inFV_stack_11->SetBinError(13,1.415621);
   hCCpi0inFV_stack_11->SetBinError(14,1.194537);
   hCCpi0inFV_stack_11->SetBinError(15,0.8775989);
   hCCpi0inFV_stack_11->SetBinError(16,0.9698573);
   hCCpi0inFV_stack_11->SetBinError(17,0.620407);
   hCCpi0inFV_stack_11->SetBinError(18,0.6799255);
   hCCpi0inFV_stack_11->SetBinError(19,0.5197486);
   hCCpi0inFV_stack_11->SetBinError(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(21,1.287743);
   hCCpi0inFV_stack_11->SetEntries(2425);

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
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,6.480754);
   hNCinFV_stack_12->SetBinContent(2,19.98156);
   hNCinFV_stack_12->SetBinContent(3,30.80234);
   hNCinFV_stack_12->SetBinContent(4,29.75599);
   hNCinFV_stack_12->SetBinContent(5,18.85452);
   hNCinFV_stack_12->SetBinContent(6,13.22947);
   hNCinFV_stack_12->SetBinContent(7,8.755592);
   hNCinFV_stack_12->SetBinContent(8,6.929129);
   hNCinFV_stack_12->SetBinContent(9,3.762714);
   hNCinFV_stack_12->SetBinContent(10,5.268578);
   hNCinFV_stack_12->SetBinContent(11,5.229931);
   hNCinFV_stack_12->SetBinContent(12,2.002419);
   hNCinFV_stack_12->SetBinContent(13,1.855576);
   hNCinFV_stack_12->SetBinContent(14,0.5352025);
   hNCinFV_stack_12->SetBinContent(15,1.857266);
   hNCinFV_stack_12->SetBinContent(16,1.270501);
   hNCinFV_stack_12->SetBinContent(17,0.5352025);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.1967154);
   hNCinFV_stack_12->SetBinError(1,1.344889);
   hNCinFV_stack_12->SetBinError(2,2.246232);
   hNCinFV_stack_12->SetBinError(3,2.784498);
   hNCinFV_stack_12->SetBinError(4,2.71167);
   hNCinFV_stack_12->SetBinError(5,2.185188);
   hNCinFV_stack_12->SetBinError(6,1.851075);
   hNCinFV_stack_12->SetBinError(7,1.400392);
   hNCinFV_stack_12->SetBinError(8,1.359579);
   hNCinFV_stack_12->SetBinError(9,0.9403637);
   hNCinFV_stack_12->SetBinError(10,1.193672);
   hNCinFV_stack_12->SetBinError(11,1.12717);
   hNCinFV_stack_12->SetBinError(12,0.7348366);
   hNCinFV_stack_12->SetBinError(13,0.6794384);
   hNCinFV_stack_12->SetBinError(14,0.3921167);
   hNCinFV_stack_12->SetBinError(15,0.6799255);
   hNCinFV_stack_12->SetBinError(16,0.5895188);
   hNCinFV_stack_12->SetBinError(17,0.3921167);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.1967154);
   hNCinFV_stack_12->SetEntries(671);

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
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,7.781566);
   hnumuCCinFV_stack_13->SetBinContent(2,37.95012);
   hnumuCCinFV_stack_13->SetBinContent(3,69.5267);
   hnumuCCinFV_stack_13->SetBinContent(4,71.64743);
   hnumuCCinFV_stack_13->SetBinContent(5,50.64099);
   hnumuCCinFV_stack_13->SetBinContent(6,34.06268);
   hnumuCCinFV_stack_13->SetBinContent(7,22.94983);
   hnumuCCinFV_stack_13->SetBinContent(8,14.71661);
   hnumuCCinFV_stack_13->SetBinContent(9,5.485883);
   hnumuCCinFV_stack_13->SetBinContent(10,4.375852);
   hnumuCCinFV_stack_13->SetBinContent(11,4.902771);
   hnumuCCinFV_stack_13->SetBinContent(12,2.375453);
   hnumuCCinFV_stack_13->SetBinContent(13,2.81804);
   hnumuCCinFV_stack_13->SetBinContent(14,2.210648);
   hnumuCCinFV_stack_13->SetBinContent(15,0.9602511);
   hnumuCCinFV_stack_13->SetBinContent(16,0.8767787);
   hnumuCCinFV_stack_13->SetBinContent(17,0.5884556);
   hnumuCCinFV_stack_13->SetBinContent(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinContent(21,1.499105);
   hnumuCCinFV_stack_13->SetBinError(1,1.614162);
   hnumuCCinFV_stack_13->SetBinError(2,3.950618);
   hnumuCCinFV_stack_13->SetBinError(3,5.051947);
   hnumuCCinFV_stack_13->SetBinError(4,5.008092);
   hnumuCCinFV_stack_13->SetBinError(5,4.023345);
   hnumuCCinFV_stack_13->SetBinError(6,3.109801);
   hnumuCCinFV_stack_13->SetBinError(7,2.77117);
   hnumuCCinFV_stack_13->SetBinError(8,2.352238);
   hnumuCCinFV_stack_13->SetBinError(9,1.258285);
   hnumuCCinFV_stack_13->SetBinError(10,1.038567);
   hnumuCCinFV_stack_13->SetBinError(11,2.572144);
   hnumuCCinFV_stack_13->SetBinError(12,0.8275369);
   hnumuCCinFV_stack_13->SetBinError(13,0.8406064);
   hnumuCCinFV_stack_13->SetBinError(14,0.8165127);
   hnumuCCinFV_stack_13->SetBinError(15,0.4944508);
   hnumuCCinFV_stack_13->SetBinError(16,0.4361593);
   hnumuCCinFV_stack_13->SetBinError(17,0.3397478);
   hnumuCCinFV_stack_13->SetBinError(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinError(21,0.6399531);
   hnumuCCinFV_stack_13->SetEntries(1290);

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
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(2,0.69586);
   hnueCCinFV_stack_14->SetBinContent(3,0.784569);
   hnueCCinFV_stack_14->SetBinContent(4,3.063879);
   hnueCCinFV_stack_14->SetBinContent(5,1.323559);
   hnueCCinFV_stack_14->SetBinContent(6,1.177387);
   hnueCCinFV_stack_14->SetBinContent(7,0.6420956);
   hnueCCinFV_stack_14->SetBinContent(8,1.088506);
   hnueCCinFV_stack_14->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(12,1.766401);
   hnueCCinFV_stack_14->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(15,0.7595603);
   hnueCCinFV_stack_14->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,1.571666);
   hnueCCinFV_stack_14->SetBinContent(18,0.2331833);
   hnueCCinFV_stack_14->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(21,5.476608);
   hnueCCinFV_stack_14->SetBinError(1,0.1950249);
   hnueCCinFV_stack_14->SetBinError(2,0.4043603);
   hnueCCinFV_stack_14->SetBinError(3,0.4645009);
   hnueCCinFV_stack_14->SetBinError(4,1.045174);
   hnueCCinFV_stack_14->SetBinError(5,0.6689346);
   hnueCCinFV_stack_14->SetBinError(6,0.5414884);
   hnueCCinFV_stack_14->SetBinError(7,0.3731328);
   hnueCCinFV_stack_14->SetBinError(8,0.4903612);
   hnueCCinFV_stack_14->SetBinError(9,0.3401776);
   hnueCCinFV_stack_14->SetBinError(10,0.1950249);
   hnueCCinFV_stack_14->SetBinError(12,1.581964);
   hnueCCinFV_stack_14->SetBinError(13,0.3401776);
   hnueCCinFV_stack_14->SetBinError(15,0.4595652);
   hnueCCinFV_stack_14->SetBinError(16,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,1.194041);
   hnueCCinFV_stack_14->SetBinError(18,0.2331833);
   hnueCCinFV_stack_14->SetBinError(19,0.3921167);
   hnueCCinFV_stack_14->SetBinError(21,1.220045);
   hnueCCinFV_stack_14->SetEntries(72);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__14->SetBinContent(1,38.41245);
   hmcerror__14->SetBinContent(2,233.1612);
   hmcerror__14->SetBinContent(3,618.7866);
   hmcerror__14->SetBinContent(4,751.9082);
   hmcerror__14->SetBinContent(5,549.2668);
   hmcerror__14->SetBinContent(6,371.7373);
   hmcerror__14->SetBinContent(7,282.671);
   hmcerror__14->SetBinContent(8,188.7135);
   hmcerror__14->SetBinContent(9,124.8172);
   hmcerror__14->SetBinContent(10,78.23722);
   hmcerror__14->SetBinContent(11,55.23323);
   hmcerror__14->SetBinContent(12,37.97787);
   hmcerror__14->SetBinContent(13,23.77844);
   hmcerror__14->SetBinContent(14,18.21839);
   hmcerror__14->SetBinContent(15,14.33695);
   hmcerror__14->SetBinContent(16,10.75031);
   hmcerror__14->SetBinContent(17,7.508343);
   hmcerror__14->SetBinContent(18,5.683492);
   hmcerror__14->SetBinContent(19,2.764099);
   hmcerror__14->SetBinContent(20,2.955442);
   hmcerror__14->SetBinContent(21,26.67913);
   hmcerror__14->SetBinError(1,9.043975);
   hmcerror__14->SetBinError(2,45.63438);
   hmcerror__14->SetBinError(3,122.467);
   hmcerror__14->SetBinError(4,173.3811);
   hmcerror__14->SetBinError(5,140.7365);
   hmcerror__14->SetBinError(6,99.01885);
   hmcerror__14->SetBinError(7,75.13603);
   hmcerror__14->SetBinError(8,54.9985);
   hmcerror__14->SetBinError(9,36.00318);
   hmcerror__14->SetBinError(10,22.50738);
   hmcerror__14->SetBinError(11,19.16035);
   hmcerror__14->SetBinError(12,11.2108);
   hmcerror__14->SetBinError(13,9.552096);
   hmcerror__14->SetBinError(14,7.124761);
   hmcerror__14->SetBinError(15,5.977353);
   hmcerror__14->SetBinError(16,6.301055);
   hmcerror__14->SetBinError(17,5.752058);
   hmcerror__14->SetBinError(18,4.140018);
   hmcerror__14->SetBinError(19,2.042683);
   hmcerror__14->SetBinError(20,2.044378);
   hmcerror__14->SetBinError(21,11.64511);
   hmcerror__14->SetEntries(3396.741);

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
   
   Double_t _fx3017[20] = {
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
   1170};
   Double_t _fy3017[20] = {
   33,
   175,
   451,
   600,
   443,
   273,
   197,
   121,
   98,
   70,
   39,
   29,
   17,
   17,
   10,
   4,
   6,
   8,
   5,
   5};
   Double_t _felx3017[20] = {
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
   Double_t _fely3017[20] = {
   5.8847,
   13.22876,
   21.23676,
   24.4949,
   21.04757,
   16.52271,
   14.03567,
   11,
   10.0209,
   8.4925,
   6.3813,
   5.5285,
   4.2835,
   4.2835,
   3.34883,
   2.29683,
   2.67925,
   3.0307,
   2.48995,
   2.48995};
   Double_t _fehx3017[20] = {
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
   Double_t _fehy3017[20] = {
   5.6776,
   13.22876,
   21.23676,
   24.4949,
   21.04757,
   16.52271,
   14.03567,
   11,
   9.82,
   8.2902,
   6.1757,
   5.3201,
   4.0673,
   4.0673,
   3.1179,
   1.98186,
   2.41858,
   2.7896,
   2.21064,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(1.532853);
   Graph_Graph3017->SetMaximum(686.7741);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2601.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 270.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1461.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  280.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 561.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 157.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 334.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 14.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_energy_all");
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
   
   Double_t _fx3018[20] = {
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
   1170};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
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
   Double_t _fely3018[20] = {
   0.2354438,
   0.1957203,
   0.1979148,
   0.2305881,
   0.2562261,
   0.2663678,
   0.2658073,
   0.2914392,
   0.2884472,
   0.2876812,
   0.346899,
   0.295193,
   0.4017124,
   0.3910752,
   0.4169194,
   0.5861275,
   0.7660889,
   0.7284285,
   0.7390049,
   0.6917334};
   Double_t _fehx3018[20] = {
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
   Double_t _fehy3018[20] = {
   0.2354438,
   0.1957203,
   0.1979148,
   0.2305881,
   0.2562261,
   0.2663678,
   0.2658073,
   0.2914392,
   0.2884472,
   0.2876812,
   0.346899,
   0.295193,
   0.4017124,
   0.3910752,
   0.4169194,
   0.5861275,
   0.7660889,
   0.7284285,
   0.7390049,
   0.6917334};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
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
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3019[20] = {
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
   1170};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
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
   Double_t _fely3019[20] = {
   0.1703891,
   0.1814283,
   0.195755,
   0.218809,
   0.2419553,
   0.2499858,
   0.246171,
   0.2425463,
   0.2266258,
   0.2311078,
   0.236037,
   0.2454415,
   0.2522541,
   0.2356972,
   0.3100842,
   0.2745536,
   0.5492466,
   0.3255669,
   0.4026622,
   0.3909627};
   Double_t _fehx3019[20] = {
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
   Double_t _fehy3019[20] = {
   0.1703891,
   0.1814283,
   0.195755,
   0.218809,
   0.2419553,
   0.2499858,
   0.246171,
   0.2425463,
   0.2266258,
   0.2311078,
   0.236037,
   0.2454415,
   0.2522541,
   0.2356972,
   0.3100842,
   0.2745536,
   0.5492466,
   0.3255669,
   0.4026622,
   0.3909627};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
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
   
   Double_t _fx3020[20] = {
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
   1170};
   Double_t _fy3020[20] = {
   0.8590964,
   0.7505537,
   0.7288458,
   0.7979697,
   0.8065297,
   0.7343896,
   0.6969232,
   0.6411836,
   0.7851481,
   0.8947148,
   0.7060966,
   0.7636025,
   0.7149332,
   0.9331231,
   0.6974984,
   0.3720821,
   0.7991111,
   1.407585,
   1.808908,
   1.691794};
   Double_t _felx3020[20] = {
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
   Double_t _fely3020[20] = {
   0.1531977,
   0.05673652,
   0.03432001,
   0.03257698,
   0.03831938,
   0.04444728,
   0.04965372,
   0.05828942,
   0.0802846,
   0.1085481,
   0.1155337,
   0.1455716,
   0.1801421,
   0.2351196,
   0.2335804,
   0.2136523,
   0.3568364,
   0.5332461,
   0.900818,
   0.8424967};
   Double_t _fehx3020[20] = {
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
   Double_t _fehy3020[20] = {
   0.1478062,
   0.05673652,
   0.03432001,
   0.03257698,
   0.03831938,
   0.04444728,
   0.04965372,
   0.05828942,
   0.07867504,
   0.1059624,
   0.1118113,
   0.1400842,
   0.1710499,
   0.2232524,
   0.217473,
   0.1843537,
   0.322119,
   0.490825,
   0.7997688,
   0.7479897};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0.1425868);
   Graph_Graph3020->SetMaximum(2.853701);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_energy_all",20,0,1200);

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
