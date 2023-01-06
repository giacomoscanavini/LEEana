#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 18:06:29 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-9.5,1692.308,1050.5);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__4->SetBinContent(1,56.48629);
   hmc__4->SetBinContent(2,324.3397);
   hmc__4->SetBinContent(3,469.4183);
   hmc__4->SetBinContent(4,414.0347);
   hmc__4->SetBinContent(5,334.2959);
   hmc__4->SetBinContent(6,288.0071);
   hmc__4->SetBinContent(7,219.824);
   hmc__4->SetBinContent(8,157.7241);
   hmc__4->SetBinContent(9,120.5629);
   hmc__4->SetBinContent(10,80.87296);
   hmc__4->SetBinContent(11,55.68612);
   hmc__4->SetBinContent(12,42.14343);
   hmc__4->SetBinContent(13,24.65588);
   hmc__4->SetBinContent(14,20.17606);
   hmc__4->SetBinContent(15,16.98641);
   hmc__4->SetBinContent(16,13.07128);
   hmc__4->SetBinContent(17,10.83116);
   hmc__4->SetBinContent(18,9.509333);
   hmc__4->SetBinContent(19,4.710246);
   hmc__4->SetBinContent(20,7.079803);
   hmc__4->SetBinContent(21,4.52504);
   hmc__4->SetBinContent(22,5.121373);
   hmc__4->SetBinContent(23,4.373096);
   hmc__4->SetBinContent(24,2.795959);
   hmc__4->SetBinContent(25,2.940924);
   hmc__4->SetBinContent(26,26.30733);
   hmc__4->SetBinError(1,13.07829);
   hmc__4->SetBinError(2,65.98942);
   hmc__4->SetBinError(3,110.0772);
   hmc__4->SetBinError(4,109.5285);
   hmc__4->SetBinError(5,91.60972);
   hmc__4->SetBinError(6,74.93534);
   hmc__4->SetBinError(7,54.73889);
   hmc__4->SetBinError(8,36.18466);
   hmc__4->SetBinError(9,24.38069);
   hmc__4->SetBinError(10,17.69459);
   hmc__4->SetBinError(11,12.37162);
   hmc__4->SetBinError(12,9.812024);
   hmc__4->SetBinError(13,6.559454);
   hmc__4->SetBinError(14,5.084223);
   hmc__4->SetBinError(15,4.708197);
   hmc__4->SetBinError(16,3.45595);
   hmc__4->SetBinError(17,3.062693);
   hmc__4->SetBinError(18,3.076972);
   hmc__4->SetBinError(19,1.766016);
   hmc__4->SetBinError(20,2.104968);
   hmc__4->SetBinError(21,1.65562);
   hmc__4->SetBinError(22,2.04267);
   hmc__4->SetBinError(23,1.522107);
   hmc__4->SetBinError(24,1.213266);
   hmc__4->SetBinError(25,1.422127);
   hmc__4->SetBinError(26,5.840193);
   hmc__4->SetMinimum(-9.5);
   hmc__4->SetMaximum(997.5);
   hmc__4->SetEntries(2705.441);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1500);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(492.8892);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.3917402);
   hbadmatch_stack_1->SetBinContent(2,1.775171);
   hbadmatch_stack_1->SetBinContent(3,1.70708);
   hbadmatch_stack_1->SetBinContent(4,2.695375);
   hbadmatch_stack_1->SetBinContent(5,2.303708);
   hbadmatch_stack_1->SetBinContent(6,1.125349);
   hbadmatch_stack_1->SetBinContent(7,1.230315);
   hbadmatch_stack_1->SetBinContent(8,1.660551);
   hbadmatch_stack_1->SetBinContent(9,1.270501);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.4287143);
   hbadmatch_stack_1->SetBinContent(13,0.2112329);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.2770047);
   hbadmatch_stack_1->SetBinError(2,0.7050252);
   hbadmatch_stack_1->SetBinError(3,0.6658124);
   hbadmatch_stack_1->SetBinError(4,0.8164837);
   hbadmatch_stack_1->SetBinError(5,0.8007252);
   hbadmatch_stack_1->SetBinError(6,0.5194673);
   hbadmatch_stack_1->SetBinError(7,0.6631767);
   hbadmatch_stack_1->SetBinError(8,0.650847);
   hbadmatch_stack_1->SetBinError(9,0.5895188);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.3041718);
   hbadmatch_stack_1->SetBinError(13,0.211233);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetEntries(67);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,2.759582);
   hext_stack_2->SetBinContent(3,6.124875);
   hext_stack_2->SetBinContent(4,1.78639);
   hext_stack_2->SetBinContent(5,4.263464);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,1.055394);
   hext_stack_2->SetBinContent(8,0.3243973);
   hext_stack_2->SetBinContent(9,1.697008);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,0.98084);
   hext_stack_2->SetBinError(3,1.828051);
   hext_stack_2->SetBinError(4,0.8039566);
   hext_stack_2->SetBinError(5,1.560171);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.6130171);
   hext_stack_2->SetBinError(8,0.3243973);
   hext_stack_2->SetBinError(9,0.8873887);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetEntries(52);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2544535);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(5,0.2574102);
   hdirt_stack_3->SetBinError(2,0.2544535);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(5,0.2574102);
   hdirt_stack_3->SetEntries(3);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.5153543);
   houtFV_stack_4->SetBinContent(2,0.6417246);
   houtFV_stack_4->SetBinContent(3,0.3934307);
   houtFV_stack_4->SetBinContent(4,1.123658);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.4502768);
   houtFV_stack_4->SetBinContent(7,1.176216);
   houtFV_stack_4->SetBinContent(8,1.65886);
   houtFV_stack_4->SetBinContent(9,0.8323622);
   houtFV_stack_4->SetBinContent(10,0.536893);
   houtFV_stack_4->SetBinError(1,0.3219737);
   houtFV_stack_4->SetBinError(2,0.3731271);
   houtFV_stack_4->SetBinError(3,0.2781975);
   houtFV_stack_4->SetBinError(4,0.5188295);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.3212293);
   houtFV_stack_4->SetBinError(7,0.5999823);
   houtFV_stack_4->SetBinError(8,0.650338);
   houtFV_stack_4->SetBinError(9,0.4182332);
   houtFV_stack_4->SetBinError(10,0.3929602);
   houtFV_stack_4->SetEntries(33);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.04659828);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1203867);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1037718);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.962345);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.440428);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.812253);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.136075);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.106039);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.143209);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.834297);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.270139);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.848496);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.250147);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.310891);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.5947962);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.824329);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7058663);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.6857979);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.2350439);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.08167386);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1772988);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.08905201);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1229105);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1792336);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.1404279);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1841348);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.6145594);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6350486);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6276949);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8827366);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5896249);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9027657);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8629342);
   hNCpi0inFVres_stack_7->SetBinError(7,1.018651);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8973512);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5237271);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7346216);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6446147);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1726792);
   hNCpi0inFVres_stack_7->SetBinError(13,0.347732);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2600007);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4241322);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1185803);
   hNCpi0inFVres_stack_7->SetBinError(17,0.08167386);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1075761);
   hNCpi0inFVres_stack_7->SetBinError(19,0.06406014);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1229105);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1344604);
   hNCpi0inFVres_stack_7->SetBinError(22,0.084457);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1389007);
   hNCpi0inFVres_stack_7->SetBinError(24,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2518103);
   hNCpi0inFVres_stack_7->SetEntries(1121);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6301997);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.034334);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.656157);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.865522);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.784675);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.83216);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.002276);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.139247);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.761399);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.721448);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.776226);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.330269);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.034331);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.593854);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3765368);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1816325);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4097567);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1088655);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1095738);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6472082);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.114473);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.3031152);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.8962062);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1909356);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9397193);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7039382);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7297752);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8826997);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6324221);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7724252);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.808022);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7805736);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7927471);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5101271);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3374165);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.385434);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2439523);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2084506);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.09359173);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2243288);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05448423);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.08630775);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2183542);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.574822);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.09881846);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2854693);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3172944);
   hNCpi0inFVdis_stack_8->SetEntries(863);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,42.51763);
   hCCpi0inFV_stack_10->SetBinContent(2,246.5798);
   hCCpi0inFV_stack_10->SetBinContent(3,376.1826);
   hCCpi0inFV_stack_10->SetBinContent(4,336.1993);
   hCCpi0inFV_stack_10->SetBinContent(5,271.2539);
   hCCpi0inFV_stack_10->SetBinContent(6,237.3434);
   hCCpi0inFV_stack_10->SetBinContent(7,182.5342);
   hCCpi0inFV_stack_10->SetBinContent(8,124.2013);
   hCCpi0inFV_stack_10->SetBinContent(9,91.61781);
   hCCpi0inFV_stack_10->SetBinContent(10,59.92876);
   hCCpi0inFV_stack_10->SetBinContent(11,41.57437);
   hCCpi0inFV_stack_10->SetBinContent(12,32.04501);
   hCCpi0inFV_stack_10->SetBinContent(13,17.39913);
   hCCpi0inFV_stack_10->SetBinContent(14,14.70453);
   hCCpi0inFV_stack_10->SetBinContent(15,13.67507);
   hCCpi0inFV_stack_10->SetBinContent(16,10.02271);
   hCCpi0inFV_stack_10->SetBinContent(17,7.230659);
   hCCpi0inFV_stack_10->SetBinContent(18,6.732413);
   hCCpi0inFV_stack_10->SetBinContent(19,3.127768);
   hCCpi0inFV_stack_10->SetBinContent(20,4.235813);
   hCCpi0inFV_stack_10->SetBinContent(21,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(22,3.516127);
   hCCpi0inFV_stack_10->SetBinContent(23,2.889025);
   hCCpi0inFV_stack_10->SetBinContent(24,1.663932);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(26,14.1279);
   hCCpi0inFV_stack_10->SetBinError(1,3.239583);
   hCCpi0inFV_stack_10->SetBinError(2,7.910362);
   hCCpi0inFV_stack_10->SetBinError(3,9.726938);
   hCCpi0inFV_stack_10->SetBinError(4,9.249721);
   hCCpi0inFV_stack_10->SetBinError(5,8.284826);
   hCCpi0inFV_stack_10->SetBinError(6,7.746124);
   hCCpi0inFV_stack_10->SetBinError(7,6.781075);
   hCCpi0inFV_stack_10->SetBinError(8,5.552743);
   hCCpi0inFV_stack_10->SetBinError(9,4.827155);
   hCCpi0inFV_stack_10->SetBinError(10,3.887977);
   hCCpi0inFV_stack_10->SetBinError(11,3.206348);
   hCCpi0inFV_stack_10->SetBinError(12,2.882436);
   hCCpi0inFV_stack_10->SetBinError(13,2.096057);
   hCCpi0inFV_stack_10->SetBinError(14,1.901944);
   hCCpi0inFV_stack_10->SetBinError(15,1.91403);
   hCCpi0inFV_stack_10->SetBinError(16,1.518982);
   hCCpi0inFV_stack_10->SetBinError(17,1.345301);
   hCCpi0inFV_stack_10->SetBinError(18,1.345272);
   hCCpi0inFV_stack_10->SetBinError(19,0.8999062);
   hCCpi0inFV_stack_10->SetBinError(20,1.010679);
   hCCpi0inFV_stack_10->SetBinError(21,0.809167);
   hCCpi0inFV_stack_10->SetBinError(22,0.940871);
   hCCpi0inFV_stack_10->SetBinError(23,0.7845188);
   hCCpi0inFV_stack_10->SetBinError(24,0.6518637);
   hCCpi0inFV_stack_10->SetBinError(25,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(26,1.872592);
   hCCpi0inFV_stack_10->SetEntries(9150);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.5884556);
   hNCinFV_stack_11->SetBinContent(2,3.074514);
   hNCinFV_stack_11->SetBinContent(3,5.521927);
   hNCinFV_stack_11->SetBinContent(4,4.102892);
   hNCinFV_stack_11->SetBinContent(5,2.931052);
   hNCinFV_stack_11->SetBinContent(6,2.144191);
   hNCinFV_stack_11->SetBinContent(7,2.247316);
   hNCinFV_stack_11->SetBinContent(8,1.465526);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,1.125349);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,1.123658);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.3934307);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,1.320373);
   hNCinFV_stack_11->SetBinError(1,0.3397478);
   hNCinFV_stack_11->SetBinError(2,0.920955);
   hNCinFV_stack_11->SetBinError(3,1.194382);
   hNCinFV_stack_11->SetBinError(4,1.000002);
   hNCinFV_stack_11->SetBinError(5,0.8781425);
   hNCinFV_stack_11->SetBinError(6,0.7850774);
   hNCinFV_stack_11->SetBinError(7,0.7337357);
   hNCinFV_stack_11->SetBinError(8,0.6209405);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.5194673);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.5188295);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.2781975);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.5548703);
   hNCinFV_stack_11->SetEntries(119);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,9.433466);
   hnumuCCinFV_stack_12->SetBinContent(2,57.65928);
   hnumuCCinFV_stack_12->SetBinContent(3,64.80271);
   hnumuCCinFV_stack_12->SetBinContent(4,57.09543);
   hnumuCCinFV_stack_12->SetBinContent(5,40.63586);
   hnumuCCinFV_stack_12->SetBinContent(6,35.76365);
   hnumuCCinFV_stack_12->SetBinContent(7,20.35221);
   hnumuCCinFV_stack_12->SetBinContent(8,18.2871);
   hnumuCCinFV_stack_12->SetBinContent(9,17.84954);
   hnumuCCinFV_stack_12->SetBinContent(10,13.70704);
   hnumuCCinFV_stack_12->SetBinContent(11,8.514544);
   hnumuCCinFV_stack_12->SetBinContent(12,6.425959);
   hnumuCCinFV_stack_12->SetBinContent(13,4.990136);
   hnumuCCinFV_stack_12->SetBinContent(14,3.439896);
   hnumuCCinFV_stack_12->SetBinContent(15,1.857266);
   hnumuCCinFV_stack_12->SetBinContent(16,2.435174);
   hnumuCCinFV_stack_12->SetBinContent(17,2.378072);
   hnumuCCinFV_stack_12->SetBinContent(18,1.902299);
   hnumuCCinFV_stack_12->SetBinContent(19,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(20,1.931151);
   hnumuCCinFV_stack_12->SetBinContent(21,1.123658);
   hnumuCCinFV_stack_12->SetBinContent(22,0.4623427);
   hnumuCCinFV_stack_12->SetBinContent(23,1.185463);
   hnumuCCinFV_stack_12->SetBinContent(24,0.9789087);
   hnumuCCinFV_stack_12->SetBinContent(25,1.370688);
   hnumuCCinFV_stack_12->SetBinContent(26,7.513456);
   hnumuCCinFV_stack_12->SetBinError(1,1.568514);
   hnumuCCinFV_stack_12->SetBinError(2,4.683211);
   hnumuCCinFV_stack_12->SetBinError(3,4.862617);
   hnumuCCinFV_stack_12->SetBinError(4,3.883292);
   hnumuCCinFV_stack_12->SetBinError(5,3.247967);
   hnumuCCinFV_stack_12->SetBinError(6,3.35236);
   hnumuCCinFV_stack_12->SetBinError(7,2.283746);
   hnumuCCinFV_stack_12->SetBinError(8,2.157529);
   hnumuCCinFV_stack_12->SetBinError(9,2.193659);
   hnumuCCinFV_stack_12->SetBinError(10,2.106526);
   hnumuCCinFV_stack_12->SetBinError(11,1.459971);
   hnumuCCinFV_stack_12->SetBinError(12,1.277564);
   hnumuCCinFV_stack_12->SetBinError(13,1.066388);
   hnumuCCinFV_stack_12->SetBinError(14,0.9158255);
   hnumuCCinFV_stack_12->SetBinError(15,0.6799255);
   hnumuCCinFV_stack_12->SetBinError(16,0.7964901);
   hnumuCCinFV_stack_12->SetBinError(17,0.7305946);
   hnumuCCinFV_stack_12->SetBinError(18,0.7591689);
   hnumuCCinFV_stack_12->SetBinError(19,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(20,0.7031355);
   hnumuCCinFV_stack_12->SetBinError(21,0.5188295);
   hnumuCCinFV_stack_12->SetBinError(22,0.3305372);
   hnumuCCinFV_stack_12->SetBinError(23,0.551086);
   hnumuCCinFV_stack_12->SetBinError(24,0.5032746);
   hnumuCCinFV_stack_12->SetBinError(25,0.6431699);
   hnumuCCinFV_stack_12->SetBinError(26,1.432506);
   hnumuCCinFV_stack_12->SetEntries(1596);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,1.217248);
   hnueCCinFV_stack_13->SetBinContent(4,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(26,1.463836);
   hnueCCinFV_stack_13->SetBinError(3,0.6211758);
   hnueCCinFV_stack_13->SetBinError(4,0.5197486);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.4810838);
   hnueCCinFV_stack_13->SetBinError(26,0.620407);
   hnueCCinFV_stack_13->SetEntries(28);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__5->SetBinContent(1,56.48629);
   hmcerror__5->SetBinContent(2,324.3397);
   hmcerror__5->SetBinContent(3,469.4183);
   hmcerror__5->SetBinContent(4,414.0347);
   hmcerror__5->SetBinContent(5,334.2959);
   hmcerror__5->SetBinContent(6,288.0071);
   hmcerror__5->SetBinContent(7,219.824);
   hmcerror__5->SetBinContent(8,157.7241);
   hmcerror__5->SetBinContent(9,120.5629);
   hmcerror__5->SetBinContent(10,80.87296);
   hmcerror__5->SetBinContent(11,55.68612);
   hmcerror__5->SetBinContent(12,42.14343);
   hmcerror__5->SetBinContent(13,24.65588);
   hmcerror__5->SetBinContent(14,20.17606);
   hmcerror__5->SetBinContent(15,16.98641);
   hmcerror__5->SetBinContent(16,13.07128);
   hmcerror__5->SetBinContent(17,10.83116);
   hmcerror__5->SetBinContent(18,9.509333);
   hmcerror__5->SetBinContent(19,4.710246);
   hmcerror__5->SetBinContent(20,7.079803);
   hmcerror__5->SetBinContent(21,4.52504);
   hmcerror__5->SetBinContent(22,5.121373);
   hmcerror__5->SetBinContent(23,4.373096);
   hmcerror__5->SetBinContent(24,2.795959);
   hmcerror__5->SetBinContent(25,2.940924);
   hmcerror__5->SetBinContent(26,26.30733);
   hmcerror__5->SetBinError(1,13.07829);
   hmcerror__5->SetBinError(2,65.98942);
   hmcerror__5->SetBinError(3,110.0772);
   hmcerror__5->SetBinError(4,109.5285);
   hmcerror__5->SetBinError(5,91.60972);
   hmcerror__5->SetBinError(6,74.93534);
   hmcerror__5->SetBinError(7,54.73889);
   hmcerror__5->SetBinError(8,36.18466);
   hmcerror__5->SetBinError(9,24.38069);
   hmcerror__5->SetBinError(10,17.69459);
   hmcerror__5->SetBinError(11,12.37162);
   hmcerror__5->SetBinError(12,9.812024);
   hmcerror__5->SetBinError(13,6.559454);
   hmcerror__5->SetBinError(14,5.084223);
   hmcerror__5->SetBinError(15,4.708197);
   hmcerror__5->SetBinError(16,3.45595);
   hmcerror__5->SetBinError(17,3.062693);
   hmcerror__5->SetBinError(18,3.076972);
   hmcerror__5->SetBinError(19,1.766016);
   hmcerror__5->SetBinError(20,2.104968);
   hmcerror__5->SetBinError(21,1.65562);
   hmcerror__5->SetBinError(22,2.04267);
   hmcerror__5->SetBinError(23,1.522107);
   hmcerror__5->SetBinError(24,1.213266);
   hmcerror__5->SetBinError(25,1.422127);
   hmcerror__5->SetBinError(26,5.840193);
   hmcerror__5->SetEntries(2705.441);

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
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
   60,
   367,
   475,
   377,
   294,
   224,
   174,
   126,
   97,
   74,
   51,
   33,
   22,
   24,
   21,
   15,
   11,
   6,
   9,
   7,
   3,
   9,
   5,
   1,
   0};
   Double_t _felx3005[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3005[25] = {
   7.8743,
   19.15724,
   21.79449,
   19.41649,
   17.14643,
   14.96663,
   13.19091,
   11.22497,
   9.9704,
   8.7275,
   7.2725,
   5.8847,
   4.8417,
   5.0476,
   4.7354,
   4.0385,
   3.4975,
   2.67925,
   3.19354,
   2.85954,
   2.143368,
   3.19354,
   2.48995,
   1,
   0};
   Double_t _fehx3005[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3005[25] = {
   7.6713,
   19.15724,
   21.79449,
   19.41649,
   17.14643,
   14.96663,
   13.19091,
   11.22497,
   9.769,
   8.5253,
   7.0686,
   5.6776,
   4.6299,
   4.837,
   4.5229,
   3.8197,
   3.27,
   2.41858,
   2.9582,
   2.61053,
   1.72422,
   2.9582,
   2.21064,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(546.4739);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=28.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2485.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 21.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  48.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2130.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 26.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 375.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.5","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3006[25] = {
   0.2315304,
   0.2034577,
   0.234497,
   0.2645395,
   0.2740378,
   0.2601857,
   0.2490124,
   0.2294174,
   0.2022238,
   0.2187949,
   0.222167,
   0.2328245,
   0.2660402,
   0.2519928,
   0.2771744,
   0.2643927,
   0.2827668,
   0.3235739,
   0.3749307,
   0.2973202,
   0.3658797,
   0.398852,
   0.3480616,
   0.4339355,
   0.4835646};
   Double_t _fehx3006[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3006[25] = {
   0.2315304,
   0.2034577,
   0.234497,
   0.2645395,
   0.2740378,
   0.2601857,
   0.2490124,
   0.2294174,
   0.2022238,
   0.2187949,
   0.222167,
   0.2328245,
   0.2660402,
   0.2519928,
   0.2771744,
   0.2643927,
   0.2827668,
   0.3235739,
   0.3749307,
   0.2973202,
   0.3658797,
   0.398852,
   0.3480616,
   0.4339355,
   0.4835646};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
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
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3007[25] = {
   0.2315304,
   0.2034577,
   0.234497,
   0.2645395,
   0.2740378,
   0.2601857,
   0.2490124,
   0.2294174,
   0.2022238,
   0.2187949,
   0.222167,
   0.2328245,
   0.2660402,
   0.2519928,
   0.2771744,
   0.2643927,
   0.2827668,
   0.3235739,
   0.3749307,
   0.2973202,
   0.3658797,
   0.398852,
   0.3480616,
   0.4339355,
   0.4835646};
   Double_t _fehx3007[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3007[25] = {
   0.2315304,
   0.2034577,
   0.234497,
   0.2645395,
   0.2740378,
   0.2601857,
   0.2490124,
   0.2294174,
   0.2022238,
   0.2187949,
   0.222167,
   0.2328245,
   0.2660402,
   0.2519928,
   0.2771744,
   0.2643927,
   0.2827668,
   0.3235739,
   0.3749307,
   0.2973202,
   0.3658797,
   0.398852,
   0.3480616,
   0.4339355,
   0.4835646};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   1.062205,
   1.13153,
   1.011891,
   0.9105516,
   0.8794603,
   0.7777585,
   0.7915425,
   0.7988631,
   0.8045594,
   0.9150153,
   0.9158476,
   0.7830402,
   0.8922821,
   1.189528,
   1.236283,
   1.147554,
   1.015588,
   0.6309591,
   1.910728,
   0.988728,
   0.6629776,
   1.757341,
   1.143355,
   0.3576591,
   0};
   Double_t _felx3008[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3008[25] = {
   0.139402,
   0.05906537,
   0.04642872,
   0.0468958,
   0.05129117,
   0.05196618,
   0.06000668,
   0.07116839,
   0.08269875,
   0.1079162,
   0.1305981,
   0.139635,
   0.196371,
   0.2501777,
   0.2787758,
   0.3089598,
   0.3229109,
   0.2817495,
   0.6779985,
   0.403901,
   0.4736683,
   0.6235711,
   0.5693792,
   0.3576591,
   0};
   Double_t _fehx3008[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3008[25] = {
   0.1358082,
   0.05906537,
   0.04642872,
   0.0468958,
   0.05129117,
   0.05196618,
   0.06000668,
   0.07116839,
   0.08102825,
   0.1054159,
   0.1269365,
   0.1347209,
   0.1877808,
   0.2397396,
   0.2662658,
   0.2922208,
   0.3019067,
   0.2543375,
   0.6280351,
   0.3687292,
   0.3810398,
   0.5776186,
   0.5055091,
   0.4863127,
   0.3902855};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.79264);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
