#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Sep 28 18:06:30 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
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
   pad1->Range(-230.7692,-17.93645,1692.308,1983.394);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__13->SetBinContent(1,135.0775);
   hmc__13->SetBinContent(2,602.3339);
   hmc__13->SetBinContent(3,896.8227);
   hmc__13->SetBinContent(4,771.8743);
   hmc__13->SetBinContent(5,563.027);
   hmc__13->SetBinContent(6,474.0271);
   hmc__13->SetBinContent(7,379.5479);
   hmc__13->SetBinContent(8,265.33);
   hmc__13->SetBinContent(9,175.8694);
   hmc__13->SetBinContent(10,131.0908);
   hmc__13->SetBinContent(11,80.83891);
   hmc__13->SetBinContent(12,69.47822);
   hmc__13->SetBinContent(13,48.12461);
   hmc__13->SetBinContent(14,34.59369);
   hmc__13->SetBinContent(15,25.21177);
   hmc__13->SetBinContent(16,18.53085);
   hmc__13->SetBinContent(17,17.03683);
   hmc__13->SetBinContent(18,17.41739);
   hmc__13->SetBinContent(19,13.14211);
   hmc__13->SetBinContent(20,9.639924);
   hmc__13->SetBinContent(21,9.978252);
   hmc__13->SetBinContent(22,7.897119);
   hmc__13->SetBinContent(23,7.098052);
   hmc__13->SetBinContent(24,4.799705);
   hmc__13->SetBinContent(25,5.071365);
   hmc__13->SetBinContent(26,43.19324);
   hmc__13->SetBinError(1,41.08007);
   hmc__13->SetBinError(2,138.2426);
   hmc__13->SetBinError(3,217.2386);
   hmc__13->SetBinError(4,207.0197);
   hmc__13->SetBinError(5,158.3857);
   hmc__13->SetBinError(6,128.77);
   hmc__13->SetBinError(7,97.30907);
   hmc__13->SetBinError(8,63.46552);
   hmc__13->SetBinError(9,39.86976);
   hmc__13->SetBinError(10,29.33363);
   hmc__13->SetBinError(11,18.78707);
   hmc__13->SetBinError(12,16.07569);
   hmc__13->SetBinError(13,12.28907);
   hmc__13->SetBinError(14,8.809559);
   hmc__13->SetBinError(15,6.027889);
   hmc__13->SetBinError(16,4.451317);
   hmc__13->SetBinError(17,4.248807);
   hmc__13->SetBinError(18,4.889773);
   hmc__13->SetBinError(19,3.988665);
   hmc__13->SetBinError(20,2.71419);
   hmc__13->SetBinError(21,2.870798);
   hmc__13->SetBinError(22,2.596674);
   hmc__13->SetBinError(23,2.12487);
   hmc__13->SetBinError(24,1.809577);
   hmc__13->SetBinError(25,1.875169);
   hmc__13->SetBinError(26,8.782062);
   hmc__13->SetMinimum(-17.93645);
   hmc__13->SetMaximum(1883.328);
   hmc__13->SetEntries(4774.494);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,1500);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(941.6638);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.5867651);
   hbadmatch_stack_1->SetBinContent(2,0.8303981);
   hbadmatch_stack_1->SetBinContent(3,3.193714);
   hbadmatch_stack_1->SetBinContent(4,2.539312);
   hbadmatch_stack_1->SetBinContent(5,1.908871);
   hbadmatch_stack_1->SetBinContent(6,2.427847);
   hbadmatch_stack_1->SetBinContent(7,1.475181);
   hbadmatch_stack_1->SetBinContent(8,1.780593);
   hbadmatch_stack_1->SetBinContent(9,1.900861);
   hbadmatch_stack_1->SetBinContent(10,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.5352025);
   hbadmatch_stack_1->SetBinContent(12,1.10907);
   hbadmatch_stack_1->SetBinContent(13,0.2112329);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.305647);
   hbadmatch_stack_1->SetBinError(1,0.3387718);
   hbadmatch_stack_1->SetBinError(2,0.4170908);
   hbadmatch_stack_1->SetBinError(3,0.915414);
   hbadmatch_stack_1->SetBinError(4,0.8333082);
   hbadmatch_stack_1->SetBinError(5,0.6966095);
   hbadmatch_stack_1->SetBinError(6,0.7944213);
   hbadmatch_stack_1->SetBinError(7,0.6930528);
   hbadmatch_stack_1->SetBinError(8,0.7211356);
   hbadmatch_stack_1->SetBinError(9,0.8067933);
   hbadmatch_stack_1->SetBinError(10,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.3921167);
   hbadmatch_stack_1->SetBinError(12,0.5691767);
   hbadmatch_stack_1->SetBinError(13,0.211233);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.2242141);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,4.270645);
   hext_stack_2->SetBinContent(2,7.265242);
   hext_stack_2->SetBinContent(3,14.2149);
   hext_stack_2->SetBinContent(4,10.76023);
   hext_stack_2->SetBinContent(5,5.650435);
   hext_stack_2->SetBinContent(6,8.691332);
   hext_stack_2->SetBinContent(7,13.36139);
   hext_stack_2->SetBinContent(8,5.076662);
   hext_stack_2->SetBinContent(9,3.394015);
   hext_stack_2->SetBinContent(10,2.110787);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(12,0.973192);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinError(1,1.4943);
   hext_stack_2->SetBinError(2,1.855081);
   hext_stack_2->SetBinError(3,2.654743);
   hext_stack_2->SetBinError(4,2.192955);
   hext_stack_2->SetBinError(5,1.647409);
   hext_stack_2->SetBinError(6,2.233483);
   hext_stack_2->SetBinError(7,2.754615);
   hext_stack_2->SetBinError(8,1.662762);
   hext_stack_2->SetBinError(9,1.254957);
   hext_stack_2->SetBinError(10,0.8669371);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(12,0.5618727);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetEntries(171);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.165896);
   hdirt_stack_3->SetBinContent(3,0.311381);
   hdirt_stack_3->SetBinContent(4,0.6708508);
   hdirt_stack_3->SetBinContent(5,1.167841e-06);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(2,0.165896);
   hdirt_stack_3->SetBinError(3,0.311381);
   hdirt_stack_3->SetBinError(4,0.4012365);
   hdirt_stack_3->SetBinError(5,1.167841e-06);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.7834939);
   houtFV_stack_4->SetBinContent(2,2.835772);
   houtFV_stack_4->SetBinContent(3,4.116803);
   houtFV_stack_4->SetBinContent(4,5.241343);
   houtFV_stack_4->SetBinContent(5,4.456141);
   houtFV_stack_4->SetBinContent(6,2.787802);
   houtFV_stack_4->SetBinContent(7,1.793287);
   houtFV_stack_4->SetBinContent(8,4.172451);
   houtFV_stack_4->SetBinContent(9,0.7302274);
   houtFV_stack_4->SetBinContent(10,1.94013);
   houtFV_stack_4->SetBinContent(11,0.209167);
   houtFV_stack_4->SetBinContent(12,0.629265);
   houtFV_stack_4->SetBinContent(16,0.1950248);
   houtFV_stack_4->SetBinContent(18,0.3401776);
   houtFV_stack_4->SetBinContent(19,0.3401776);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.5884556);
   houtFV_stack_4->SetBinError(1,0.3917439);
   houtFV_stack_4->SetBinError(2,0.808577);
   houtFV_stack_4->SetBinError(3,0.9769176);
   houtFV_stack_4->SetBinError(4,1.157118);
   houtFV_stack_4->SetBinError(5,1.131135);
   houtFV_stack_4->SetBinError(6,0.8700041);
   houtFV_stack_4->SetBinError(7,0.9904741);
   houtFV_stack_4->SetBinError(8,1.086827);
   houtFV_stack_4->SetBinError(9,0.4379386);
   houtFV_stack_4->SetBinError(10,1.029265);
   houtFV_stack_4->SetBinError(11,0.2091671);
   houtFV_stack_4->SetBinError(12,0.4036711);
   houtFV_stack_4->SetBinError(16,0.1950249);
   houtFV_stack_4->SetBinError(18,0.3401776);
   houtFV_stack_4->SetBinError(19,0.3401776);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(26,0.3397478);
   houtFV_stack_4->SetEntries(129);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.477741);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.074797);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.226764);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.430727);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.629899);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.131589);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.007658);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.348989);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.5829);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.108549);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.138263);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.7992013);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.070389);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.5471962);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.6906182);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.2093111);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.09844416);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1451041);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5043799);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.08302341);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.6804041);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1841348);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.1491065);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6591526);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7265979);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9155513);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7062836);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9930462);
   hNCpi0inFVres_stack_7->SetBinError(6,1.054229);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9262333);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6899881);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8300282);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7221555);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6022773);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4048518);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7822368);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1829271);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4249979);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1059913);
   hNCpi0inFVres_stack_7->SetBinError(17,0.08337782);
   hNCpi0inFVres_stack_7->SetBinError(18,0.09666612);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3005867);
   hNCpi0inFVres_stack_7->SetBinError(21,0.06309388);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5525936);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1389007);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(26,0.06991923);
   hNCpi0inFVres_stack_7->SetEntries(1196);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.9137782);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.345543);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.551778);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.923681);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.169721);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.270473);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.327008);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.925159);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.814529);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.5275);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.510821);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.813339);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.133499);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9633254);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1407629);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1537325);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4628223);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3073621);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5446407);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3735359);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6934159);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1501678);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2848868);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.053761);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2420936);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9955373);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7079269);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7580537);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.082794);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7104832);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.707212);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7907313);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5629567);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7566816);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6920579);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4879358);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3617603);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3405362);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.05948845);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.08933646);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2274535);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1397723);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2101822);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2263848);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5757898);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1107425);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2848868);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3365052);
   hNCpi0inFVdis_stack_8->SetEntries(964);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,103.5675);
   hCCpi0inFV_stack_10->SetBinContent(2,468.5114);
   hCCpi0inFV_stack_10->SetBinContent(3,727.7428);
   hCCpi0inFV_stack_10->SetBinContent(4,616.3881);
   hCCpi0inFV_stack_10->SetBinContent(5,453.1453);
   hCCpi0inFV_stack_10->SetBinContent(6,392.0636);
   hCCpi0inFV_stack_10->SetBinContent(7,310.2409);
   hCCpi0inFV_stack_10->SetBinContent(8,204.6754);
   hCCpi0inFV_stack_10->SetBinContent(9,133.653);
   hCCpi0inFV_stack_10->SetBinContent(10,96.76488);
   hCCpi0inFV_stack_10->SetBinContent(11,60.71179);
   hCCpi0inFV_stack_10->SetBinContent(12,46.87112);
   hCCpi0inFV_stack_10->SetBinContent(13,35.41189);
   hCCpi0inFV_stack_10->SetBinContent(14,26.48645);
   hCCpi0inFV_stack_10->SetBinContent(15,18.07273);
   hCCpi0inFV_stack_10->SetBinContent(16,13.69245);
   hCCpi0inFV_stack_10->SetBinContent(17,11.06725);
   hCCpi0inFV_stack_10->SetBinContent(18,11.71407);
   hCCpi0inFV_stack_10->SetBinContent(19,8.426582);
   hCCpi0inFV_stack_10->SetBinContent(20,6.483778);
   hCCpi0inFV_stack_10->SetBinContent(21,7.32594);
   hCCpi0inFV_stack_10->SetBinContent(22,5.0203);
   hCCpi0inFV_stack_10->SetBinContent(23,5.663699);
   hCCpi0inFV_stack_10->SetBinContent(24,2.397541);
   hCCpi0inFV_stack_10->SetBinContent(25,2.782519);
   hCCpi0inFV_stack_10->SetBinContent(26,24.96767);
   hCCpi0inFV_stack_10->SetBinError(1,5.182011);
   hCCpi0inFV_stack_10->SetBinError(2,10.86442);
   hCCpi0inFV_stack_10->SetBinError(3,13.62222);
   hCCpi0inFV_stack_10->SetBinError(4,12.45238);
   hCCpi0inFV_stack_10->SetBinError(5,10.72773);
   hCCpi0inFV_stack_10->SetBinError(6,9.945118);
   hCCpi0inFV_stack_10->SetBinError(7,8.888786);
   hCCpi0inFV_stack_10->SetBinError(8,7.173577);
   hCCpi0inFV_stack_10->SetBinError(9,5.824168);
   hCCpi0inFV_stack_10->SetBinError(10,4.986899);
   hCCpi0inFV_stack_10->SetBinError(11,3.885789);
   hCCpi0inFV_stack_10->SetBinError(12,3.556929);
   hCCpi0inFV_stack_10->SetBinError(13,3.020137);
   hCCpi0inFV_stack_10->SetBinError(14,2.543022);
   hCCpi0inFV_stack_10->SetBinError(15,2.149941);
   hCCpi0inFV_stack_10->SetBinError(16,1.809293);
   hCCpi0inFV_stack_10->SetBinError(17,1.719187);
   hCCpi0inFV_stack_10->SetBinError(18,1.755153);
   hCCpi0inFV_stack_10->SetBinError(19,1.523077);
   hCCpi0inFV_stack_10->SetBinError(20,1.248936);
   hCCpi0inFV_stack_10->SetBinError(21,1.388227);
   hCCpi0inFV_stack_10->SetBinError(22,1.193795);
   hCCpi0inFV_stack_10->SetBinError(23,1.225932);
   hCCpi0inFV_stack_10->SetBinError(24,0.7861558);
   hCCpi0inFV_stack_10->SetBinError(25,0.8319397);
   hCCpi0inFV_stack_10->SetBinError(26,2.473807);
   hCCpi0inFV_stack_10->SetEntries(16159);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.5352025);
   hNCinFV_stack_11->SetBinContent(2,4.196482);
   hNCinFV_stack_11->SetBinContent(3,5.911977);
   hNCinFV_stack_11->SetBinContent(4,3.319412);
   hNCinFV_stack_11->SetBinContent(5,3.861376);
   hNCinFV_stack_11->SetBinContent(6,2.537621);
   hNCinFV_stack_11->SetBinContent(7,2.681084);
   hNCinFV_stack_11->SetBinContent(8,1.125349);
   hNCinFV_stack_11->SetBinContent(9,0.9818863);
   hNCinFV_stack_11->SetBinContent(10,2.057363);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.7336084);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,1.268811);
   hNCinFV_stack_11->SetBinError(1,0.3921167);
   hNCinFV_stack_11->SetBinError(2,1.056731);
   hNCinFV_stack_11->SetBinError(3,1.225813);
   hNCinFV_stack_11->SetBinError(4,0.9200768);
   hNCinFV_stack_11->SetBinError(5,1.001472);
   hNCinFV_stack_11->SetBinError(6,0.8329108);
   hNCinFV_stack_11->SetBinError(7,0.8779318);
   hNCinFV_stack_11->SetBinError(8,0.5194673);
   hNCinFV_stack_11->SetBinError(9,0.4391155);
   hNCinFV_stack_11->SetBinError(10,0.7087455);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.4394482);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.5889569);
   hNCinFV_stack_11->SetEntries(136);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,21.924);
   hnumuCCinFV_stack_12->SetBinContent(2,104.8096);
   hnumuCCinFV_stack_12->SetBinContent(3,124.7186);
   hnumuCCinFV_stack_12->SetBinContent(4,119.3675);
   hnumuCCinFV_stack_12->SetBinContent(5,78.78564);
   hnumuCCinFV_stack_12->SetBinContent(6,53.92177);
   hnumuCCinFV_stack_12->SetBinContent(7,39.98095);
   hnumuCCinFV_stack_12->SetBinContent(8,40.02874);
   hnumuCCinFV_stack_12->SetBinContent(9,28.07847);
   hnumuCCinFV_stack_12->SetBinContent(10,21.84634);
   hnumuCCinFV_stack_12->SetBinContent(11,13.88816);
   hnumuCCinFV_stack_12->SetBinContent(12,16.55111);
   hnumuCCinFV_stack_12->SetBinContent(13,9.100889);
   hnumuCCinFV_stack_12->SetBinContent(14,5.66808);
   hnumuCCinFV_stack_12->SetBinContent(15,5.054632);
   hnumuCCinFV_stack_12->SetBinContent(16,4.280333);
   hnumuCCinFV_stack_12->SetBinContent(17,4.690492);
   hnumuCCinFV_stack_12->SetBinContent(18,3.445152);
   hnumuCCinFV_stack_12->SetBinContent(19,3.266159);
   hnumuCCinFV_stack_12->SetBinContent(20,2.074613);
   hnumuCCinFV_stack_12->SetBinContent(21,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(22,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(23,0.7611597);
   hnumuCCinFV_stack_12->SetBinContent(24,2.000729);
   hnumuCCinFV_stack_12->SetBinContent(25,1.309438);
   hnumuCCinFV_stack_12->SetBinContent(26,12.4855);
   hnumuCCinFV_stack_12->SetBinError(1,2.39504);
   hnumuCCinFV_stack_12->SetBinError(2,5.964039);
   hnumuCCinFV_stack_12->SetBinError(3,6.287739);
   hnumuCCinFV_stack_12->SetBinError(4,7.124234);
   hnumuCCinFV_stack_12->SetBinError(5,4.966145);
   hnumuCCinFV_stack_12->SetBinError(6,3.75142);
   hnumuCCinFV_stack_12->SetBinError(7,3.199);
   hnumuCCinFV_stack_12->SetBinError(8,3.320223);
   hnumuCCinFV_stack_12->SetBinError(9,2.85771);
   hnumuCCinFV_stack_12->SetBinError(10,2.30564);
   hnumuCCinFV_stack_12->SetBinError(11,1.825634);
   hnumuCCinFV_stack_12->SetBinError(12,2.941313);
   hnumuCCinFV_stack_12->SetBinError(13,1.441806);
   hnumuCCinFV_stack_12->SetBinError(14,1.257779);
   hnumuCCinFV_stack_12->SetBinError(15,1.168096);
   hnumuCCinFV_stack_12->SetBinError(16,1.074096);
   hnumuCCinFV_stack_12->SetBinError(17,1.084357);
   hnumuCCinFV_stack_12->SetBinError(18,0.9662446);
   hnumuCCinFV_stack_12->SetBinError(19,0.9406744);
   hnumuCCinFV_stack_12->SetBinError(20,0.7559255);
   hnumuCCinFV_stack_12->SetBinError(21,0.588146);
   hnumuCCinFV_stack_12->SetBinError(22,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(23,0.4617384);
   hnumuCCinFV_stack_12->SetBinError(24,0.7343859);
   hnumuCCinFV_stack_12->SetBinError(25,0.6061584);
   hnumuCCinFV_stack_12->SetBinError(26,1.798716);
   hnumuCCinFV_stack_12->SetEntries(2974);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,1.833961);
   hnueCCinFV_stack_13->SetBinContent(4,1.215558);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,1.198402);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,1.805704);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.7757027);
   hnueCCinFV_stack_13->SetBinError(4,0.6206425);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.4810838);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.5510694);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.7080169);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__14->SetBinContent(1,135.0775);
   hmcerror__14->SetBinContent(2,602.3339);
   hmcerror__14->SetBinContent(3,896.8227);
   hmcerror__14->SetBinContent(4,771.8743);
   hmcerror__14->SetBinContent(5,563.027);
   hmcerror__14->SetBinContent(6,474.0271);
   hmcerror__14->SetBinContent(7,379.5479);
   hmcerror__14->SetBinContent(8,265.33);
   hmcerror__14->SetBinContent(9,175.8694);
   hmcerror__14->SetBinContent(10,131.0908);
   hmcerror__14->SetBinContent(11,80.83891);
   hmcerror__14->SetBinContent(12,69.47822);
   hmcerror__14->SetBinContent(13,48.12461);
   hmcerror__14->SetBinContent(14,34.59369);
   hmcerror__14->SetBinContent(15,25.21177);
   hmcerror__14->SetBinContent(16,18.53085);
   hmcerror__14->SetBinContent(17,17.03683);
   hmcerror__14->SetBinContent(18,17.41739);
   hmcerror__14->SetBinContent(19,13.14211);
   hmcerror__14->SetBinContent(20,9.639924);
   hmcerror__14->SetBinContent(21,9.978252);
   hmcerror__14->SetBinContent(22,7.897119);
   hmcerror__14->SetBinContent(23,7.098052);
   hmcerror__14->SetBinContent(24,4.799705);
   hmcerror__14->SetBinContent(25,5.071365);
   hmcerror__14->SetBinContent(26,43.19324);
   hmcerror__14->SetBinError(1,41.08007);
   hmcerror__14->SetBinError(2,138.2426);
   hmcerror__14->SetBinError(3,217.2386);
   hmcerror__14->SetBinError(4,207.0197);
   hmcerror__14->SetBinError(5,158.3857);
   hmcerror__14->SetBinError(6,128.77);
   hmcerror__14->SetBinError(7,97.30907);
   hmcerror__14->SetBinError(8,63.46552);
   hmcerror__14->SetBinError(9,39.86976);
   hmcerror__14->SetBinError(10,29.33363);
   hmcerror__14->SetBinError(11,18.78707);
   hmcerror__14->SetBinError(12,16.07569);
   hmcerror__14->SetBinError(13,12.28907);
   hmcerror__14->SetBinError(14,8.809559);
   hmcerror__14->SetBinError(15,6.027889);
   hmcerror__14->SetBinError(16,4.451317);
   hmcerror__14->SetBinError(17,4.248807);
   hmcerror__14->SetBinError(18,4.889773);
   hmcerror__14->SetBinError(19,3.988665);
   hmcerror__14->SetBinError(20,2.71419);
   hmcerror__14->SetBinError(21,2.870798);
   hmcerror__14->SetBinError(22,2.596674);
   hmcerror__14->SetBinError(23,2.12487);
   hmcerror__14->SetBinError(24,1.809577);
   hmcerror__14->SetBinError(25,1.875169);
   hmcerror__14->SetBinError(26,8.782062);
   hmcerror__14->SetEntries(4774.494);

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
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
   110,
   612,
   827,
   657,
   491,
   376,
   260,
   199,
   167,
   117,
   83,
   67,
   42,
   37,
   24,
   17,
   14,
   10,
   13,
   13,
   7,
   9,
   6,
   3,
   4};
   Double_t _felx3017[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3017[25] = {
   10.48809,
   24.73863,
   28.75761,
   25.63201,
   22.15852,
   19.39072,
   16.12452,
   14.10674,
   12.92285,
   10.81665,
   9.234,
   8.3119,
   6.6155,
   6.2203,
   5.0476,
   4.2835,
   3.9102,
   3.34883,
   3.77763,
   3.77763,
   2.85954,
   3.19354,
   2.67925,
   2.143368,
   2.29683};
   Double_t _fehx3017[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3017[25] = {
   10.48809,
   24.73863,
   28.75761,
   25.63201,
   22.15852,
   19.39072,
   16.12452,
   14.10674,
   12.92285,
   10.81665,
   9.0323,
   8.1094,
   6.4104,
   6.0141,
   4.837,
   4.0673,
   3.6898,
   3.1179,
   3.5552,
   3.5552,
   2.61053,
   2.9582,
   2.41858,
   1.72422,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(0.7709688);
   Graph_Graph3017->SetMaximum(941.2477);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=24.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4165.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 77.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 30.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  62.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  54.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3768.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 707.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.5","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[25] = {
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
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3018[25] = {
   0.3041221,
   0.2295115,
   0.2422314,
   0.2682038,
   0.2813111,
   0.2716512,
   0.2563815,
   0.2391946,
   0.2267009,
   0.2237657,
   0.2324013,
   0.2313775,
   0.2553593,
   0.254658,
   0.2390902,
   0.2402112,
   0.2493894,
   0.2807409,
   0.3035026,
   0.2815572,
   0.2877055,
   0.3288128,
   0.2993596,
   0.3770184,
   0.3697562};
   Double_t _fehx3018[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3018[25] = {
   0.3041221,
   0.2295115,
   0.2422314,
   0.2682038,
   0.2813111,
   0.2716512,
   0.2563815,
   0.2391946,
   0.2267009,
   0.2237657,
   0.2324013,
   0.2313775,
   0.2553593,
   0.254658,
   0.2390902,
   0.2402112,
   0.2493894,
   0.2807409,
   0.3035026,
   0.2815572,
   0.2877055,
   0.3288128,
   0.2993596,
   0.3770184,
   0.3697562};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
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
   
   Double_t _fx3019[25] = {
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
   Double_t _fy3019[25] = {
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
   Double_t _felx3019[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3019[25] = {
   0.3041221,
   0.2295115,
   0.2422314,
   0.2682038,
   0.2813111,
   0.2716512,
   0.2563815,
   0.2391946,
   0.2267009,
   0.2237657,
   0.2324013,
   0.2313775,
   0.2553593,
   0.254658,
   0.2390902,
   0.2402112,
   0.2493894,
   0.2807409,
   0.3035026,
   0.2815572,
   0.2877055,
   0.3288128,
   0.2993596,
   0.3770184,
   0.3697562};
   Double_t _fehx3019[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3019[25] = {
   0.3041221,
   0.2295115,
   0.2422314,
   0.2682038,
   0.2813111,
   0.2716512,
   0.2563815,
   0.2391946,
   0.2267009,
   0.2237657,
   0.2324013,
   0.2313775,
   0.2553593,
   0.254658,
   0.2390902,
   0.2402112,
   0.2493894,
   0.2807409,
   0.3035026,
   0.2815572,
   0.2877055,
   0.3288128,
   0.2993596,
   0.3770184,
   0.3697562};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
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
   
   Double_t _fx3020[25] = {
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
   Double_t _fy3020[25] = {
   0.814347,
   1.016048,
   0.9221444,
   0.8511748,
   0.8720718,
   0.7932036,
   0.6850256,
   0.7500093,
   0.949568,
   0.8925109,
   1.026733,
   0.964331,
   0.8727343,
   1.069559,
   0.9519362,
   0.9173892,
   0.8217489,
   0.5741389,
   0.9891866,
   1.348558,
   0.7015256,
   1.139656,
   0.8453023,
   0.6250384,
   0.7887423};
   Double_t _felx3020[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3020[25] = {
   0.07764494,
   0.04107129,
   0.0320661,
   0.03320749,
   0.03935605,
   0.04090635,
   0.04248348,
   0.05316675,
   0.07347978,
   0.08251266,
   0.1142272,
   0.1196332,
   0.137466,
   0.1798103,
   0.2002081,
   0.2311551,
   0.2295145,
   0.1922694,
   0.2874447,
   0.3918734,
   0.2865772,
   0.404393,
   0.3774627,
   0.4465624,
   0.4529017};
   Double_t _fehx3020[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3020[25] = {
   0.07764494,
   0.04107129,
   0.0320661,
   0.03320749,
   0.03935605,
   0.04090635,
   0.04248348,
   0.05316675,
   0.07347978,
   0.08251266,
   0.1117321,
   0.1167186,
   0.1332042,
   0.1738496,
   0.1918548,
   0.2194881,
   0.2165778,
   0.1790108,
   0.2705197,
   0.3687996,
   0.261622,
   0.3745923,
   0.3407386,
   0.3592346,
   0.3907942};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0.02458777);
   Graph_Graph3020->SetMaximum(1.871246);
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
   
   TH1F *hist__15 = new TH1F("hist__15","CCpi0_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
