#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 17:16:34 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",34,57,1200,900);
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
   pad1->Range(-230.7692,-9.188674,1692.308,1016.074);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hmc__25->SetBinContent(1,46.59998);
   hmc__25->SetBinContent(2,190.9981);
   hmc__25->SetBinContent(3,284.9683);
   hmc__25->SetBinContent(4,395.5168);
   hmc__25->SetBinContent(5,459.4337);
   hmc__25->SetBinContent(6,376.3625);
   hmc__25->SetBinContent(7,300.265);
   hmc__25->SetBinContent(8,233.5938);
   hmc__25->SetBinContent(9,186.6875);
   hmc__25->SetBinContent(10,136.8287);
   hmc__25->SetBinContent(11,111.1338);
   hmc__25->SetBinContent(12,69.55808);
   hmc__25->SetBinContent(13,54.6114);
   hmc__25->SetBinContent(14,38.51418);
   hmc__25->SetBinContent(15,31.68541);
   hmc__25->SetBinContent(16,27.63036);
   hmc__25->SetBinContent(17,20.09326);
   hmc__25->SetBinContent(18,18.30675);
   hmc__25->SetBinContent(19,12.67363);
   hmc__25->SetBinContent(20,11.45169);
   hmc__25->SetBinContent(21,8.120646);
   hmc__25->SetBinContent(22,6.957861);
   hmc__25->SetBinContent(23,4.784938);
   hmc__25->SetBinContent(24,6.310636);
   hmc__25->SetBinContent(25,3.559845);
   hmc__25->SetBinContent(26,9.696457);
   hmc__25->SetBinError(1,10.41004);
   hmc__25->SetBinError(2,40.25421);
   hmc__25->SetBinError(3,65.60368);
   hmc__25->SetBinError(4,98.5716);
   hmc__25->SetBinError(5,115.537);
   hmc__25->SetBinError(6,96.67359);
   hmc__25->SetBinError(7,74.33427);
   hmc__25->SetBinError(8,59.69489);
   hmc__25->SetBinError(9,47.68838);
   hmc__25->SetBinError(10,37.13636);
   hmc__25->SetBinError(11,28.80733);
   hmc__25->SetBinError(12,18.95421);
   hmc__25->SetBinError(13,13.54313);
   hmc__25->SetBinError(14,10.13764);
   hmc__25->SetBinError(15,9.084666);
   hmc__25->SetBinError(16,7.101783);
   hmc__25->SetBinError(17,5.502977);
   hmc__25->SetBinError(18,5.653324);
   hmc__25->SetBinError(19,3.491277);
   hmc__25->SetBinError(20,3.121517);
   hmc__25->SetBinError(21,2.583208);
   hmc__25->SetBinError(22,2.320812);
   hmc__25->SetBinError(23,1.790793);
   hmc__25->SetBinError(24,4.446717);
   hmc__25->SetBinError(25,1.628857);
   hmc__25->SetBinError(26,2.896126);
   hmc__25->SetMinimum(-9.188674);
   hmc__25->SetMaximum(964.8107);
   hmc__25->SetEntries(3014.754);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,1500);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(482.4054);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.9286332);
   hbadmatch_stack_1->SetBinContent(2,1.694239);
   hbadmatch_stack_1->SetBinContent(3,1.322064);
   hbadmatch_stack_1->SetBinContent(4,1.608988);
   hbadmatch_stack_1->SetBinContent(5,0.9269427);
   hbadmatch_stack_1->SetBinContent(6,1.489891);
   hbadmatch_stack_1->SetBinContent(7,0.04984158);
   hbadmatch_stack_1->SetBinContent(8,0.4179596);
   hbadmatch_stack_1->SetBinContent(10,1.036141);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.48078);
   hbadmatch_stack_1->SetBinError(2,0.6618086);
   hbadmatch_stack_1->SetBinError(3,0.5554667);
   hbadmatch_stack_1->SetBinError(4,0.6801404);
   hbadmatch_stack_1->SetBinError(5,0.4800908);
   hbadmatch_stack_1->SetBinError(6,0.747758);
   hbadmatch_stack_1->SetBinError(7,0.04984158);
   hbadmatch_stack_1->SetBinError(8,0.2513393);
   hbadmatch_stack_1->SetBinError(10,0.5504378);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetEntries(40);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,2.185808);
   hext_stack_2->SetBinContent(2,11.37589);
   hext_stack_2->SetBinContent(3,11.0559);
   hext_stack_2->SetBinContent(4,8.040958);
   hext_stack_2->SetBinContent(5,14.64021);
   hext_stack_2->SetBinContent(6,4.52443);
   hext_stack_2->SetBinContent(7,2.345802);
   hext_stack_2->SetBinContent(8,2.192989);
   hext_stack_2->SetBinContent(9,4.181263);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(16,2.566457);
   hext_stack_2->SetBinContent(17,0.6416141);
   hext_stack_2->SetBinError(1,1.006415);
   hext_stack_2->SetBinError(2,2.385205);
   hext_stack_2->SetBinError(3,2.391462);
   hext_stack_2->SetBinError(4,1.725143);
   hext_stack_2->SetBinError(5,2.876824);
   hext_stack_2->SetBinError(6,1.487279);
   hext_stack_2->SetBinError(7,0.9989624);
   hext_stack_2->SetBinError(8,0.9009267);
   hext_stack_2->SetBinError(9,1.540793);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(16,1.283228);
   hext_stack_2->SetBinError(17,0.6416141);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.2665913);
   hdirt_stack_3->SetBinContent(2,0.7156404);
   hdirt_stack_3->SetBinContent(3,0.2441834);
   hdirt_stack_3->SetBinContent(6,1.167841e-06);
   hdirt_stack_3->SetBinContent(10,0.165896);
   hdirt_stack_3->SetBinError(1,0.2665913);
   hdirt_stack_3->SetBinError(2,0.4322938);
   hdirt_stack_3->SetBinError(3,0.2441834);
   hdirt_stack_3->SetBinError(6,1.167841e-06);
   hdirt_stack_3->SetBinError(10,0.165896);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,1.12574);
   houtFV_stack_4->SetBinContent(2,4.381664);
   houtFV_stack_4->SetBinContent(3,4.2631);
   houtFV_stack_4->SetBinContent(4,4.134724);
   houtFV_stack_4->SetBinContent(5,2.769359);
   houtFV_stack_4->SetBinContent(6,3.942564);
   houtFV_stack_4->SetBinContent(7,2.059265);
   houtFV_stack_4->SetBinContent(8,0.5867651);
   houtFV_stack_4->SetBinContent(9,0.7336084);
   houtFV_stack_4->SetBinContent(10,1.063059);
   houtFV_stack_4->SetBinContent(11,1.453109);
   houtFV_stack_4->SetBinContent(12,0.3917402);
   houtFV_stack_4->SetBinContent(13,0.9303237);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,0.5457763);
   houtFV_stack_4->SetBinError(2,0.9793355);
   houtFV_stack_4->SetBinError(3,1.081425);
   houtFV_stack_4->SetBinError(4,1.055965);
   houtFV_stack_4->SetBinError(5,0.8647729);
   houtFV_stack_4->SetBinError(6,1.050952);
   houtFV_stack_4->SetBinError(7,0.752183);
   houtFV_stack_4->SetBinError(8,0.3387718);
   houtFV_stack_4->SetBinError(9,0.4394482);
   houtFV_stack_4->SetBinError(10,0.8883967);
   houtFV_stack_4->SetBinError(11,0.9302248);
   houtFV_stack_4->SetBinError(12,0.2770047);
   houtFV_stack_4->SetBinError(13,0.4814682);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetEntries(116);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01841896);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.217172);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.561353);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.924819);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.146813);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.738564);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.606961);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.203353);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.6298586);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.1251465);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.2727388);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1109873);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.07499878);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3236763);
   hNCpi0inFVres_stack_7->SetBinError(2,0.796175);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9625156);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6237885);
   hNCpi0inFVres_stack_7->SetBinError(5,1.017517);
   hNCpi0inFVres_stack_7->SetBinError(6,0.700027);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7685166);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3238244);
   hNCpi0inFVres_stack_7->SetBinError(9,0.09115778);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1295127);
   hNCpi0inFVres_stack_7->SetBinError(11,0.08764647);
   hNCpi0inFVres_stack_7->SetBinError(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(13,0.05474218);
   hNCpi0inFVres_stack_7->SetEntries(536);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.585788);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.026142);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.449029);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.265612);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.645635);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.990184);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.219415);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.310932);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5525657);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3359908);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8223901);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1831576);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9774661);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6985448);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5011728);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9672422);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4482406);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4194274);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.445587);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2506988);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2414715);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3297271);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(436);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,24.0511);
   hCCpi0inFV_stack_10->SetBinContent(2,105.2865);
   hCCpi0inFV_stack_10->SetBinContent(3,194.5676);
   hCCpi0inFV_stack_10->SetBinContent(4,306.835);
   hCCpi0inFV_stack_10->SetBinContent(5,346.8633);
   hCCpi0inFV_stack_10->SetBinContent(6,297.8134);
   hCCpi0inFV_stack_10->SetBinContent(7,251.9009);
   hCCpi0inFV_stack_10->SetBinContent(8,199.7715);
   hCCpi0inFV_stack_10->SetBinContent(9,152.1526);
   hCCpi0inFV_stack_10->SetBinContent(10,115.5614);
   hCCpi0inFV_stack_10->SetBinContent(11,93.53313);
   hCCpi0inFV_stack_10->SetBinContent(12,58.74049);
   hCCpi0inFV_stack_10->SetBinContent(13,45.23589);
   hCCpi0inFV_stack_10->SetBinContent(14,31.83062);
   hCCpi0inFV_stack_10->SetBinContent(15,28.63403);
   hCCpi0inFV_stack_10->SetBinContent(16,21.53929);
   hCCpi0inFV_stack_10->SetBinContent(17,16.16836);
   hCCpi0inFV_stack_10->SetBinContent(18,13.69238);
   hCCpi0inFV_stack_10->SetBinContent(19,10.79497);
   hCCpi0inFV_stack_10->SetBinContent(20,9.987852);
   hCCpi0inFV_stack_10->SetBinContent(21,6.995298);
   hCCpi0inFV_stack_10->SetBinContent(22,5.29731);
   hCCpi0inFV_stack_10->SetBinContent(23,3.516127);
   hCCpi0inFV_stack_10->SetBinContent(24,3.217977);
   hCCpi0inFV_stack_10->SetBinContent(25,3.559845);
   hCCpi0inFV_stack_10->SetBinContent(26,8.004605);
   hCCpi0inFV_stack_10->SetBinError(1,2.440188);
   hCCpi0inFV_stack_10->SetBinError(2,5.140968);
   hCCpi0inFV_stack_10->SetBinError(3,6.982491);
   hCCpi0inFV_stack_10->SetBinError(4,8.915241);
   hCCpi0inFV_stack_10->SetBinError(5,9.40416);
   hCCpi0inFV_stack_10->SetBinError(6,8.686074);
   hCCpi0inFV_stack_10->SetBinError(7,8.0567);
   hCCpi0inFV_stack_10->SetBinError(8,7.117892);
   hCCpi0inFV_stack_10->SetBinError(9,6.28669);
   hCCpi0inFV_stack_10->SetBinError(10,5.364347);
   hCCpi0inFV_stack_10->SetBinError(11,4.86974);
   hCCpi0inFV_stack_10->SetBinError(12,3.816224);
   hCCpi0inFV_stack_10->SetBinError(13,3.393736);
   hCCpi0inFV_stack_10->SetBinError(14,2.83835);
   hCCpi0inFV_stack_10->SetBinError(15,2.661697);
   hCCpi0inFV_stack_10->SetBinError(16,2.325893);
   hCCpi0inFV_stack_10->SetBinError(17,2.000574);
   hCCpi0inFV_stack_10->SetBinError(18,1.877353);
   hCCpi0inFV_stack_10->SetBinError(19,1.629344);
   hCCpi0inFV_stack_10->SetBinError(20,1.617352);
   hCCpi0inFV_stack_10->SetBinError(21,1.271534);
   hCCpi0inFV_stack_10->SetBinError(22,1.198638);
   hCCpi0inFV_stack_10->SetBinError(23,0.940871);
   hCCpi0inFV_stack_10->SetBinError(24,0.9618638);
   hCCpi0inFV_stack_10->SetBinError(25,1.020571);
   hCCpi0inFV_stack_10->SetBinError(26,1.468997);
   hCCpi0inFV_stack_10->SetEntries(10012);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,3.75487);
   hNCinFV_stack_11->SetBinContent(3,1.770438);
   hNCinFV_stack_11->SetBinContent(4,3.859685);
   hNCinFV_stack_11->SetBinContent(5,1.663932);
   hNCinFV_stack_11->SetBinContent(6,1.999038);
   hNCinFV_stack_11->SetBinContent(7,0.3401776);
   hNCinFV_stack_11->SetBinContent(8,0.5352025);
   hNCinFV_stack_11->SetBinContent(9,0.1950248);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinError(2,1.039038);
   hNCinFV_stack_11->SetBinError(3,0.5901461);
   hNCinFV_stack_11->SetBinError(4,1.001141);
   hNCinFV_stack_11->SetBinError(5,0.6518637);
   hNCinFV_stack_11->SetBinError(6,0.7339349);
   hNCinFV_stack_11->SetBinError(7,0.3401776);
   hNCinFV_stack_11->SetBinError(8,0.3921167);
   hNCinFV_stack_11->SetBinError(9,0.1950249);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetEntries(63);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,15.70395);
   hnumuCCinFV_stack_12->SetBinContent(2,50.61665);
   hnumuCCinFV_stack_12->SetBinContent(3,59.17443);
   hnumuCCinFV_stack_12->SetBinContent(4,62.94466);
   hnumuCCinFV_stack_12->SetBinContent(5,82.97055);
   hnumuCCinFV_stack_12->SetBinContent(6,61.60428);
   hnumuCCinFV_stack_12->SetBinContent(7,39.94952);
   hnumuCCinFV_stack_12->SetBinContent(8,28.14858);
   hnumuCCinFV_stack_12->SetBinContent(9,28.55051);
   hnumuCCinFV_stack_12->SetBinContent(10,17.47886);
   hnumuCCinFV_stack_12->SetBinContent(11,14.82072);
   hnumuCCinFV_stack_12->SetBinContent(12,10.39795);
   hnumuCCinFV_stack_12->SetBinContent(13,7.123762);
   hnumuCCinFV_stack_12->SetBinContent(14,6.458951);
   hnumuCCinFV_stack_12->SetBinContent(15,2.683305);
   hnumuCCinFV_stack_12->SetBinContent(16,3.524612);
   hnumuCCinFV_stack_12->SetBinContent(17,3.227482);
   hnumuCCinFV_stack_12->SetBinContent(18,4.614377);
   hnumuCCinFV_stack_12->SetBinContent(19,1.878665);
   hnumuCCinFV_stack_12->SetBinContent(20,1.463836);
   hnumuCCinFV_stack_12->SetBinContent(21,1.125349);
   hnumuCCinFV_stack_12->SetBinContent(22,1.660551);
   hnumuCCinFV_stack_12->SetBinContent(23,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(24,3.092659);
   hnumuCCinFV_stack_12->SetBinContent(26,1.691851);
   hnumuCCinFV_stack_12->SetBinError(1,2.391487);
   hnumuCCinFV_stack_12->SetBinError(2,3.928373);
   hnumuCCinFV_stack_12->SetBinError(3,3.965634);
   hnumuCCinFV_stack_12->SetBinError(4,4.305315);
   hnumuCCinFV_stack_12->SetBinError(5,6.551056);
   hnumuCCinFV_stack_12->SetBinError(6,4.107479);
   hnumuCCinFV_stack_12->SetBinError(7,3.929796);
   hnumuCCinFV_stack_12->SetBinError(8,2.782622);
   hnumuCCinFV_stack_12->SetBinError(9,2.780203);
   hnumuCCinFV_stack_12->SetBinError(10,2.317378);
   hnumuCCinFV_stack_12->SetBinError(11,1.959496);
   hnumuCCinFV_stack_12->SetBinError(12,1.836296);
   hnumuCCinFV_stack_12->SetBinError(13,1.269154);
   hnumuCCinFV_stack_12->SetBinError(14,1.258769);
   hnumuCCinFV_stack_12->SetBinError(15,0.7963496);
   hnumuCCinFV_stack_12->SetBinError(16,0.9842192);
   hnumuCCinFV_stack_12->SetBinError(17,0.8995809);
   hnumuCCinFV_stack_12->SetBinError(18,1.899996);
   hnumuCCinFV_stack_12->SetBinError(19,0.7318257);
   hnumuCCinFV_stack_12->SetBinError(20,0.620407);
   hnumuCCinFV_stack_12->SetBinError(21,0.5194673);
   hnumuCCinFV_stack_12->SetBinError(22,0.650847);
   hnumuCCinFV_stack_12->SetBinError(23,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(24,2.275735);
   hnumuCCinFV_stack_12->SetBinError(26,0.6672974);
   hnumuCCinFV_stack_12->SetEntries(2089);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(2,2.567569);
   hnueCCinFV_stack_13->SetBinContent(3,1.196711);
   hnueCCinFV_stack_13->SetBinContent(4,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.3921167);
   hnueCCinFV_stack_13->SetBinError(2,0.891532);
   hnueCCinFV_stack_13->SetBinError(3,0.5504682);
   hnueCCinFV_stack_13->SetBinError(4,0.4810838);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__26->SetBinContent(1,46.59998);
   hmcerror__26->SetBinContent(2,190.9981);
   hmcerror__26->SetBinContent(3,284.9683);
   hmcerror__26->SetBinContent(4,395.5168);
   hmcerror__26->SetBinContent(5,459.4337);
   hmcerror__26->SetBinContent(6,376.3625);
   hmcerror__26->SetBinContent(7,300.265);
   hmcerror__26->SetBinContent(8,233.5938);
   hmcerror__26->SetBinContent(9,186.6875);
   hmcerror__26->SetBinContent(10,136.8287);
   hmcerror__26->SetBinContent(11,111.1338);
   hmcerror__26->SetBinContent(12,69.55808);
   hmcerror__26->SetBinContent(13,54.6114);
   hmcerror__26->SetBinContent(14,38.51418);
   hmcerror__26->SetBinContent(15,31.68541);
   hmcerror__26->SetBinContent(16,27.63036);
   hmcerror__26->SetBinContent(17,20.09326);
   hmcerror__26->SetBinContent(18,18.30675);
   hmcerror__26->SetBinContent(19,12.67363);
   hmcerror__26->SetBinContent(20,11.45169);
   hmcerror__26->SetBinContent(21,8.120646);
   hmcerror__26->SetBinContent(22,6.957861);
   hmcerror__26->SetBinContent(23,4.784938);
   hmcerror__26->SetBinContent(24,6.310636);
   hmcerror__26->SetBinContent(25,3.559845);
   hmcerror__26->SetBinContent(26,9.696457);
   hmcerror__26->SetBinError(1,10.41004);
   hmcerror__26->SetBinError(2,40.25421);
   hmcerror__26->SetBinError(3,65.60368);
   hmcerror__26->SetBinError(4,98.5716);
   hmcerror__26->SetBinError(5,115.537);
   hmcerror__26->SetBinError(6,96.67359);
   hmcerror__26->SetBinError(7,74.33427);
   hmcerror__26->SetBinError(8,59.69489);
   hmcerror__26->SetBinError(9,47.68838);
   hmcerror__26->SetBinError(10,37.13636);
   hmcerror__26->SetBinError(11,28.80733);
   hmcerror__26->SetBinError(12,18.95421);
   hmcerror__26->SetBinError(13,13.54313);
   hmcerror__26->SetBinError(14,10.13764);
   hmcerror__26->SetBinError(15,9.084666);
   hmcerror__26->SetBinError(16,7.101783);
   hmcerror__26->SetBinError(17,5.502977);
   hmcerror__26->SetBinError(18,5.653324);
   hmcerror__26->SetBinError(19,3.491277);
   hmcerror__26->SetBinError(20,3.121517);
   hmcerror__26->SetBinError(21,2.583208);
   hmcerror__26->SetBinError(22,2.320812);
   hmcerror__26->SetBinError(23,1.790793);
   hmcerror__26->SetBinError(24,4.446717);
   hmcerror__26->SetBinError(25,1.628857);
   hmcerror__26->SetBinError(26,2.896126);
   hmcerror__26->SetEntries(3014.754);

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
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   39,
   182,
   252,
   362,
   410,
   369,
   273,
   183,
   132,
   106,
   86,
   77,
   52,
   29,
   24,
   21,
   12,
   9,
   12,
   5,
   5,
   4,
   2,
   4,
   5};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   6.3813,
   13.49074,
   15.87451,
   19.0263,
   20.24846,
   19.20937,
   16.52271,
   13.52775,
   11.48913,
   10.29563,
   9.3967,
   8.8995,
   7.3419,
   5.5285,
   5.0476,
   4.7354,
   3.64022,
   3.19354,
   3.64022,
   2.48995,
   2.48995,
   2.29683,
   2,
   2.29683,
   2.48995};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   6.1757,
   13.49074,
   15.87451,
   19.0263,
   20.24846,
   19.20937,
   16.52271,
   13.52775,
   11.48913,
   10.29563,
   9.1951,
   8.6976,
   7.1381,
   5.3201,
   4.837,
   4.5229,
   3.4155,
   2.9582,
   3.4155,
   2.21064,
   2.21064,
   1.98186,
   1.51917,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1650);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(473.2733);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2655.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 65.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2347.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 15.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 510.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_muon_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0.2233916,
   0.2107571,
   0.230214,
   0.2492223,
   0.2514771,
   0.2568629,
   0.2475622,
   0.25555,
   0.255445,
   0.2714077,
   0.2592131,
   0.2724948,
   0.2479909,
   0.2632184,
   0.2867145,
   0.2570282,
   0.2738718,
   0.3088109,
   0.2754756,
   0.2725814,
   0.3181037,
   0.3335524,
   0.3742563,
   0.7046385,
   0.457564};
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   0.2233916,
   0.2107571,
   0.230214,
   0.2492223,
   0.2514771,
   0.2568629,
   0.2475622,
   0.25555,
   0.255445,
   0.2714077,
   0.2592131,
   0.2724948,
   0.2479909,
   0.2632184,
   0.2867145,
   0.2570282,
   0.2738718,
   0.3088109,
   0.2754756,
   0.2725814,
   0.3181037,
   0.3335524,
   0.3742563,
   0.7046385,
   0.457564};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1650);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
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
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
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
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0.2233916,
   0.2107571,
   0.230214,
   0.2492223,
   0.2514771,
   0.2568629,
   0.2475622,
   0.25555,
   0.255445,
   0.2714077,
   0.2592131,
   0.2724948,
   0.2479909,
   0.2632184,
   0.2867145,
   0.2570282,
   0.2738718,
   0.3088109,
   0.2754756,
   0.2725814,
   0.3181037,
   0.3335524,
   0.3742563,
   0.7046385,
   0.457564};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0.2233916,
   0.2107571,
   0.230214,
   0.2492223,
   0.2514771,
   0.2568629,
   0.2475622,
   0.25555,
   0.255445,
   0.2714077,
   0.2592131,
   0.2724948,
   0.2479909,
   0.2632184,
   0.2867145,
   0.2570282,
   0.2738718,
   0.3088109,
   0.2754756,
   0.2725814,
   0.3181037,
   0.3335524,
   0.3742563,
   0.7046385,
   0.457564};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1650);
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
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
   0.8369102,
   0.952889,
   0.8843089,
   0.9152582,
   0.892403,
   0.9804376,
   0.9091969,
   0.7834112,
   0.707064,
   0.7746913,
   0.7738422,
   1.106989,
   0.9521821,
   0.7529694,
   0.7574465,
   0.7600335,
   0.5972152,
   0.4916219,
   0.9468476,
   0.4366169,
   0.6157145,
   0.5748893,
   0.4179783,
   0.6338506,
   1.404556};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0.1369378,
   0.07063283,
   0.05570623,
   0.04810491,
   0.04407264,
   0.05103954,
   0.0550271,
   0.05791142,
   0.06154202,
   0.07524467,
   0.08455306,
   0.1279434,
   0.134439,
   0.1435445,
   0.1593036,
   0.1713839,
   0.1811662,
   0.174446,
   0.2872278,
   0.2174308,
   0.3066197,
   0.3301057,
   0.4179783,
   0.3639618,
   0.6994546};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   0.1325258,
   0.07063283,
   0.05570623,
   0.04810491,
   0.04407264,
   0.05103954,
   0.0550271,
   0.05791142,
   0.06154202,
   0.07524467,
   0.08273903,
   0.1250408,
   0.1307071,
   0.1381335,
   0.152657,
   0.1636931,
   0.1699824,
   0.1615907,
   0.2694965,
   0.1930405,
   0.2722246,
   0.2848375,
   0.31749,
   0.3140508,
   0.6209933};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1650);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.228104);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_muon_momentum_all",25,0,1500);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
