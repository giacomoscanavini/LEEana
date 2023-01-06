#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 17:16:32 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
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
   pad1->Range(-230.7692,-8.544858,1692.308,944.8814);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hmc__4->SetBinContent(1,26.74976);
   hmc__4->SetBinContent(2,109.0533);
   hmc__4->SetBinContent(3,278.4182);
   hmc__4->SetBinContent(4,405.7558);
   hmc__4->SetBinContent(5,427.2429);
   hmc__4->SetBinContent(6,350.0965);
   hmc__4->SetBinContent(7,259.9693);
   hmc__4->SetBinContent(8,194.1078);
   hmc__4->SetBinContent(9,161.0809);
   hmc__4->SetBinContent(10,116.5932);
   hmc__4->SetBinContent(11,96.64814);
   hmc__4->SetBinContent(12,64.5434);
   hmc__4->SetBinContent(13,50.91434);
   hmc__4->SetBinContent(14,44.68732);
   hmc__4->SetBinContent(15,35.22483);
   hmc__4->SetBinContent(16,23.61643);
   hmc__4->SetBinContent(17,21.50926);
   hmc__4->SetBinContent(18,13.09869);
   hmc__4->SetBinContent(19,9.394528);
   hmc__4->SetBinContent(20,9.511583);
   hmc__4->SetBinContent(21,6.772423);
   hmc__4->SetBinContent(22,3.035868);
   hmc__4->SetBinContent(23,2.297188);
   hmc__4->SetBinContent(24,2.342597);
   hmc__4->SetBinContent(25,0.7868615);
   hmc__4->SetBinContent(26,3.02837);
   hmc__4->SetBinError(1,6.12595);
   hmc__4->SetBinError(2,22.76401);
   hmc__4->SetBinError(3,61.98312);
   hmc__4->SetBinError(4,92.53322);
   hmc__4->SetBinError(5,95.83169);
   hmc__4->SetBinError(6,84.3541);
   hmc__4->SetBinError(7,58.24159);
   hmc__4->SetBinError(8,45.5322);
   hmc__4->SetBinError(9,38.73636);
   hmc__4->SetBinError(10,27.82405);
   hmc__4->SetBinError(11,25.8164);
   hmc__4->SetBinError(12,15.89609);
   hmc__4->SetBinError(13,13.73859);
   hmc__4->SetBinError(14,11.67825);
   hmc__4->SetBinError(15,10.70933);
   hmc__4->SetBinError(16,7.590506);
   hmc__4->SetBinError(17,6.46323);
   hmc__4->SetBinError(18,4.331931);
   hmc__4->SetBinError(19,3.521762);
   hmc__4->SetBinError(20,5.170969);
   hmc__4->SetBinError(21,3.334942);
   hmc__4->SetBinError(22,1.408957);
   hmc__4->SetBinError(23,1.090961);
   hmc__4->SetBinError(24,1.300146);
   hmc__4->SetBinError(25,0.6999948);
   hmc__4->SetBinError(26,1.354662);
   hmc__4->SetMinimum(-8.544858);
   hmc__4->SetMaximum(897.2101);
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
   hs2_stack_2->SetMaximum(448.6051);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.8364476);
   hbadmatch_stack_1->SetBinContent(3,2.748657);
   hbadmatch_stack_1->SetBinContent(4,4.341354);
   hbadmatch_stack_1->SetBinContent(5,3.234316);
   hbadmatch_stack_1->SetBinContent(6,2.316899);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.8753801);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.4513143);
   hbadmatch_stack_1->SetBinError(3,0.8643691);
   hbadmatch_stack_1->SetBinError(4,1.065099);
   hbadmatch_stack_1->SetBinError(5,0.8917021);
   hbadmatch_stack_1->SetBinError(6,0.8682736);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.5191111);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,0.3243973);
   hext_stack_2->SetBinContent(2,2.834603);
   hext_stack_2->SetBinContent(3,2.759582);
   hext_stack_2->SetBinContent(4,1.78639);
   hext_stack_2->SetBinContent(5,7.504666);
   hext_stack_2->SetBinContent(6,2.517386);
   hext_stack_2->SetBinContent(7,0.6416141);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,2.566457);
   hext_stack_2->SetBinError(1,0.3243973);
   hext_stack_2->SetBinError(2,1.106046);
   hext_stack_2->SetBinError(3,0.98084);
   hext_stack_2->SetBinError(4,0.8039566);
   hext_stack_2->SetBinError(5,1.955197);
   hext_stack_2->SetBinError(6,0.9575503);
   hext_stack_2->SetBinError(7,0.6416141);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,1.283228);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(5,0.2544535);
   hdirt_stack_3->SetBinContent(7,0.2574102);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinError(5,0.2544535);
   hdirt_stack_3->SetBinError(7,0.2574102);
   hdirt_stack_3->SetBinError(9,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.1967154);
   houtFV_stack_4->SetBinContent(2,1.180504);
   houtFV_stack_4->SetBinContent(3,0.8074455);
   houtFV_stack_4->SetBinContent(4,1.176927);
   houtFV_stack_4->SetBinContent(5,1.614057);
   houtFV_stack_4->SetBinContent(6,0.3008363);
   houtFV_stack_4->SetBinContent(7,1.26712);
   houtFV_stack_4->SetBinContent(8,0.3401776);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(1,0.1967154);
   houtFV_stack_4->SetBinError(2,0.5431192);
   houtFV_stack_4->SetBinError(3,0.4451481);
   houtFV_stack_4->SetBinError(4,0.5412757);
   houtFV_stack_4->SetBinError(5,0.6239108);
   houtFV_stack_4->SetBinError(6,0.3008363);
   houtFV_stack_4->SetBinError(7,0.5883944);
   houtFV_stack_4->SetBinError(8,0.3401776);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(21,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1089254);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.271291);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1975909);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01822846);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.042476);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.875659);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.06703);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.4898);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.28286);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.518031);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.171994);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.591516);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.338674);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.118621);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.2492243);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2405887);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2757436);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2523669);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8551478);
   hNCpi0inFVres_stack_7->SetBinError(3,1.224361);
   hNCpi0inFVres_stack_7->SetBinError(4,1.127418);
   hNCpi0inFVres_stack_7->SetBinError(5,1.029644);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8233976);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8067115);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5983047);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5187341);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4252713);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1432546);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1477767);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2494091);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01732447);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.829797);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.769883);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.566536);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.05852);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.591088);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.850142);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.253971);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.521739);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.922319);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7690889);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.241675);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1694578);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5842522);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1136578);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7838998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8021759);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8663668);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.150656);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8398872);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.049942);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5144098);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7222055);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4997683);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.357349);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6067452);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.0803814);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3910064);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.07003108);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.097318);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,16.58919);
   hCCpi0inFV_stack_10->SetBinContent(2,62.78476);
   hCCpi0inFV_stack_10->SetBinContent(3,210.2137);
   hCCpi0inFV_stack_10->SetBinContent(4,308.3076);
   hCCpi0inFV_stack_10->SetBinContent(5,322.6082);
   hCCpi0inFV_stack_10->SetBinContent(6,273.9463);
   hCCpi0inFV_stack_10->SetBinContent(7,211.0424);
   hCCpi0inFV_stack_10->SetBinContent(8,167.4686);
   hCCpi0inFV_stack_10->SetBinContent(9,139.0368);
   hCCpi0inFV_stack_10->SetBinContent(10,100.1892);
   hCCpi0inFV_stack_10->SetBinContent(11,84.17507);
   hCCpi0inFV_stack_10->SetBinContent(12,55.71461);
   hCCpi0inFV_stack_10->SetBinContent(13,44.98197);
   hCCpi0inFV_stack_10->SetBinContent(14,37.39229);
   hCCpi0inFV_stack_10->SetBinContent(15,28.82012);
   hCCpi0inFV_stack_10->SetBinContent(16,20.57001);
   hCCpi0inFV_stack_10->SetBinContent(17,18.51096);
   hCCpi0inFV_stack_10->SetBinContent(18,12.506);
   hCCpi0inFV_stack_10->SetBinContent(19,8.410952);
   hCCpi0inFV_stack_10->SetBinContent(20,5.66708);
   hCCpi0inFV_stack_10->SetBinContent(21,5.615518);
   hCCpi0inFV_stack_10->SetBinContent(22,2.69569);
   hCCpi0inFV_stack_10->SetBinContent(23,2.102163);
   hCCpi0inFV_stack_10->SetBinContent(24,2.145881);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(26,2.734337);
   hCCpi0inFV_stack_10->SetBinError(1,2.071153);
   hCCpi0inFV_stack_10->SetBinError(2,3.913813);
   hCCpi0inFV_stack_10->SetBinError(3,7.306048);
   hCCpi0inFV_stack_10->SetBinError(4,8.777112);
   hCCpi0inFV_stack_10->SetBinError(5,9.110727);
   hCCpi0inFV_stack_10->SetBinError(6,8.290781);
   hCCpi0inFV_stack_10->SetBinError(7,7.282433);
   hCCpi0inFV_stack_10->SetBinError(8,6.451538);
   hCCpi0inFV_stack_10->SetBinError(9,6.01849);
   hCCpi0inFV_stack_10->SetBinError(10,5.012921);
   hCCpi0inFV_stack_10->SetBinError(11,4.583901);
   hCCpi0inFV_stack_10->SetBinError(12,3.723928);
   hCCpi0inFV_stack_10->SetBinError(13,3.324248);
   hCCpi0inFV_stack_10->SetBinError(14,3.095603);
   hCCpi0inFV_stack_10->SetBinError(15,2.741523);
   hCCpi0inFV_stack_10->SetBinError(16,2.27178);
   hCCpi0inFV_stack_10->SetBinError(17,2.158241);
   hCCpi0inFV_stack_10->SetBinError(18,1.79926);
   hCCpi0inFV_stack_10->SetBinError(19,1.428992);
   hCCpi0inFV_stack_10->SetBinError(20,1.226472);
   hCCpi0inFV_stack_10->SetBinError(21,1.242265);
   hCCpi0inFV_stack_10->SetBinError(22,0.7603271);
   hCCpi0inFV_stack_10->SetBinError(23,0.6787356);
   hCCpi0inFV_stack_10->SetBinError(24,0.785499);
   hCCpi0inFV_stack_10->SetBinError(25,0.340721);
   hCCpi0inFV_stack_10->SetBinError(26,0.8558255);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,1.65717);
   hNCinFV_stack_11->SetBinContent(2,2.250697);
   hNCinFV_stack_11->SetBinContent(3,5.568418);
   hNCinFV_stack_11->SetBinContent(4,6.590642);
   hNCinFV_stack_11->SetBinContent(5,5.48159);
   hNCinFV_stack_11->SetBinContent(6,2.78759);
   hNCinFV_stack_11->SetBinContent(7,1.270501);
   hNCinFV_stack_11->SetBinContent(8,1.413964);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.536893);
   hNCinFV_stack_11->SetBinError(1,0.6498287);
   hNCinFV_stack_11->SetBinError(2,0.7346377);
   hNCinFV_stack_11->SetBinError(3,1.177103);
   hNCinFV_stack_11->SetBinError(4,1.316585);
   hNCinFV_stack_11->SetBinError(5,1.127628);
   hNCinFV_stack_11->SetBinError(6,0.8331329);
   hNCinFV_stack_11->SetBinError(7,0.5895188);
   hNCinFV_stack_11->SetBinError(8,0.6515799);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.3929602);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,4.874492);
   hnumuCCinFV_stack_12->SetBinContent(2,26.93397);
   hnumuCCinFV_stack_12->SetBinContent(3,34.16016);
   hnumuCCinFV_stack_12->SetBinContent(4,60.23859);
   hnumuCCinFV_stack_12->SetBinContent(5,68.90618);
   hnumuCCinFV_stack_12->SetBinContent(6,54.98402);
   hnumuCCinFV_stack_12->SetBinContent(7,37.13566);
   hnumuCCinFV_stack_12->SetBinContent(8,18.89651);
   hnumuCCinFV_stack_12->SetBinContent(9,17.392);
   hnumuCCinFV_stack_12->SetBinContent(10,13.24843);
   hnumuCCinFV_stack_12->SetBinContent(11,7.48538);
   hnumuCCinFV_stack_12->SetBinContent(12,8.222027);
   hnumuCCinFV_stack_12->SetBinContent(13,4.850311);
   hnumuCCinFV_stack_12->SetBinContent(14,6.572998);
   hnumuCCinFV_stack_12->SetBinContent(15,6.094334);
   hnumuCCinFV_stack_12->SetBinContent(16,3.018518);
   hnumuCCinFV_stack_12->SetBinContent(17,2.942504);
   hnumuCCinFV_stack_12->SetBinContent(18,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9835768);
   hnumuCCinFV_stack_12->SetBinContent(20,3.827179);
   hnumuCCinFV_stack_12->SetBinContent(21,0.9350244);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(26,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.106448);
   hnumuCCinFV_stack_12->SetBinError(2,3.034882);
   hnumuCCinFV_stack_12->SetBinError(3,2.95753);
   hnumuCCinFV_stack_12->SetBinError(4,3.982319);
   hnumuCCinFV_stack_12->SetBinError(5,4.33469);
   hnumuCCinFV_stack_12->SetBinError(6,3.851088);
   hnumuCCinFV_stack_12->SetBinError(7,3.457543);
   hnumuCCinFV_stack_12->SetBinError(8,2.15461);
   hnumuCCinFV_stack_12->SetBinError(9,2.374427);
   hnumuCCinFV_stack_12->SetBinError(10,2.005659);
   hnumuCCinFV_stack_12->SetBinError(11,1.398007);
   hnumuCCinFV_stack_12->SetBinError(12,1.388889);
   hnumuCCinFV_stack_12->SetBinError(13,1.07196);
   hnumuCCinFV_stack_12->SetBinError(14,1.338979);
   hnumuCCinFV_stack_12->SetBinError(15,2.491852);
   hnumuCCinFV_stack_12->SetBinError(16,0.8642733);
   hnumuCCinFV_stack_12->SetBinError(17,0.836579);
   hnumuCCinFV_stack_12->SetBinError(18,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(19,0.4398689);
   hnumuCCinFV_stack_12->SetBinError(20,2.441852);
   hnumuCCinFV_stack_12->SetBinError(21,0.4834302);
   hnumuCCinFV_stack_12->SetBinError(22,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(23,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(26,0.1967154);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(2,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(3,2.486059);
   hnueCCinFV_stack_13->SetBinContent(4,1.463836);
   hnueCCinFV_stack_13->SetBinContent(5,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(7,0.7319179);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(2,0.3387718);
   hnueCCinFV_stack_13->SetBinError(3,0.8559962);
   hnueCCinFV_stack_13->SetBinError(4,0.620407);
   hnueCCinFV_stack_13->SetBinError(5,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.5191111);
   hnueCCinFV_stack_13->SetBinError(7,0.438694);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__5->SetBinContent(1,26.74976);
   hmcerror__5->SetBinContent(2,109.0533);
   hmcerror__5->SetBinContent(3,278.4182);
   hmcerror__5->SetBinContent(4,405.7558);
   hmcerror__5->SetBinContent(5,427.2429);
   hmcerror__5->SetBinContent(6,350.0965);
   hmcerror__5->SetBinContent(7,259.9693);
   hmcerror__5->SetBinContent(8,194.1078);
   hmcerror__5->SetBinContent(9,161.0809);
   hmcerror__5->SetBinContent(10,116.5932);
   hmcerror__5->SetBinContent(11,96.64814);
   hmcerror__5->SetBinContent(12,64.5434);
   hmcerror__5->SetBinContent(13,50.91434);
   hmcerror__5->SetBinContent(14,44.68732);
   hmcerror__5->SetBinContent(15,35.22483);
   hmcerror__5->SetBinContent(16,23.61643);
   hmcerror__5->SetBinContent(17,21.50926);
   hmcerror__5->SetBinContent(18,13.09869);
   hmcerror__5->SetBinContent(19,9.394528);
   hmcerror__5->SetBinContent(20,9.511583);
   hmcerror__5->SetBinContent(21,6.772423);
   hmcerror__5->SetBinContent(22,3.035868);
   hmcerror__5->SetBinContent(23,2.297188);
   hmcerror__5->SetBinContent(24,2.342597);
   hmcerror__5->SetBinContent(25,0.7868615);
   hmcerror__5->SetBinContent(26,3.02837);
   hmcerror__5->SetBinError(1,6.12595);
   hmcerror__5->SetBinError(2,22.76401);
   hmcerror__5->SetBinError(3,61.98312);
   hmcerror__5->SetBinError(4,92.53322);
   hmcerror__5->SetBinError(5,95.83169);
   hmcerror__5->SetBinError(6,84.3541);
   hmcerror__5->SetBinError(7,58.24159);
   hmcerror__5->SetBinError(8,45.5322);
   hmcerror__5->SetBinError(9,38.73636);
   hmcerror__5->SetBinError(10,27.82405);
   hmcerror__5->SetBinError(11,25.8164);
   hmcerror__5->SetBinError(12,15.89609);
   hmcerror__5->SetBinError(13,13.73859);
   hmcerror__5->SetBinError(14,11.67825);
   hmcerror__5->SetBinError(15,10.70933);
   hmcerror__5->SetBinError(16,7.590506);
   hmcerror__5->SetBinError(17,6.46323);
   hmcerror__5->SetBinError(18,4.331931);
   hmcerror__5->SetBinError(19,3.521762);
   hmcerror__5->SetBinError(20,5.170969);
   hmcerror__5->SetBinError(21,3.334942);
   hmcerror__5->SetBinError(22,1.408957);
   hmcerror__5->SetBinError(23,1.090961);
   hmcerror__5->SetBinError(24,1.300146);
   hmcerror__5->SetBinError(25,0.6999948);
   hmcerror__5->SetBinError(26,1.354662);
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
   36,
   90,
   210,
   380,
   426,
   338,
   246,
   190,
   135,
   99,
   90,
   76,
   51,
   36,
   23,
   15,
   14,
   16,
   5,
   6,
   7,
   5,
   0,
   1,
   2};
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
   6.1381,
   9.6093,
   14.49138,
   19.49359,
   20.63977,
   18.38478,
   15.68439,
   13.78405,
   11.61895,
   10.0712,
   9.6093,
   8.8425,
   7.2725,
   6.1381,
   4.9457,
   4.0385,
   3.9102,
   4.1628,
   2.48995,
   2.67925,
   2.85954,
   2.48995,
   0,
   1,
   2};
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
   5.9318,
   9.4079,
   14.49138,
   19.49359,
   20.63977,
   18.38478,
   15.68439,
   13.78405,
   11.61895,
   9.87,
   9.4079,
   8.6406,
   7.0686,
   5.9318,
   4.7346,
   3.8197,
   3.6898,
   3.9454,
   2.21064,
   2.41858,
   2.61053,
   2.21064,
   1.1478,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(491.3037);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=26.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2497.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2142.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 28.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 383.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_muon_momentum_all");
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
   0.2290095,
   0.2087421,
   0.222626,
   0.2280515,
   0.2243026,
   0.2409453,
   0.2240326,
   0.2345716,
   0.2404776,
   0.2386421,
   0.2671174,
   0.2462852,
   0.2698372,
   0.2613324,
   0.3040279,
   0.3214078,
   0.3004859,
   0.3307148,
   0.3748738,
   0.5436496,
   0.4924297,
   0.4641037,
   0.4749114,
   0.5550021,
   0.8896035};
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
   0.2290095,
   0.2087421,
   0.222626,
   0.2280515,
   0.2243026,
   0.2409453,
   0.2240326,
   0.2345716,
   0.2404776,
   0.2386421,
   0.2671174,
   0.2462852,
   0.2698372,
   0.2613324,
   0.3040279,
   0.3214078,
   0.3004859,
   0.3307148,
   0.3748738,
   0.5436496,
   0.4924297,
   0.4641037,
   0.4749114,
   0.5550021,
   0.8896035};
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
   Graph_Graph3006->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
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
   0.2290095,
   0.2087421,
   0.222626,
   0.2280515,
   0.2243026,
   0.2409453,
   0.2240326,
   0.2345716,
   0.2404776,
   0.2386421,
   0.2671174,
   0.2462852,
   0.2698372,
   0.2613324,
   0.3040279,
   0.3214078,
   0.3004859,
   0.3307148,
   0.3748738,
   0.5436496,
   0.4924297,
   0.4641037,
   0.4749114,
   0.5550021,
   0.8896035};
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
   0.2290095,
   0.2087421,
   0.222626,
   0.2280515,
   0.2243026,
   0.2409453,
   0.2240326,
   0.2345716,
   0.2404776,
   0.2386421,
   0.2671174,
   0.2462852,
   0.2698372,
   0.2613324,
   0.3040279,
   0.3214078,
   0.3004859,
   0.3307148,
   0.3748738,
   0.5436496,
   0.4924297,
   0.4641037,
   0.4749114,
   0.5550021,
   0.8896035};
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
   1.345806,
   0.8252847,
   0.7542611,
   0.936524,
   0.9970909,
   0.965448,
   0.9462657,
   0.9788373,
   0.8380879,
   0.8491061,
   0.931213,
   1.177502,
   1.001682,
   0.8055976,
   0.6529485,
   0.635151,
   0.6508824,
   1.221496,
   0.5322247,
   0.6308098,
   1.033604,
   1.646975,
   0,
   0.4268767,
   2.541743};
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
   0.2294637,
   0.08811565,
   0.05204896,
   0.04804267,
   0.04830921,
   0.05251345,
   0.0603317,
   0.07101232,
   0.07213113,
   0.08637896,
   0.09942561,
   0.1370008,
   0.1428379,
   0.1373566,
   0.1404038,
   0.1710038,
   0.1817915,
   0.3178027,
   0.2650426,
   0.2816829,
   0.4222329,
   0.8201773,
   0,
   0.4268767,
   2.541743};
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
   0.2217515,
   0.08626884,
   0.05204896,
   0.04804267,
   0.04830921,
   0.05251345,
   0.0603317,
   0.07101232,
   0.07213113,
   0.0846533,
   0.09734176,
   0.1338727,
   0.1388332,
   0.1327401,
   0.1344109,
   0.1617391,
   0.1715447,
   0.3012056,
   0.2353114,
   0.2542773,
   0.3854647,
   0.728174,
   0.4996543,
   0.5804285,
   1.93067};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(4.919655);
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
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_muon_momentum_all",25,0,1500);

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
