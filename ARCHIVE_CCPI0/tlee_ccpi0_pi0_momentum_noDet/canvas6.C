#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Sep 28 18:06:30 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-3.64,1692.308,402.5074);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__16->SetBinContent(1,16.00761);
   hmc__16->SetBinContent(2,99.37029);
   hmc__16->SetBinContent(3,131.2931);
   hmc__16->SetBinContent(4,139.9017);
   hmc__16->SetBinContent(5,125.2988);
   hmc__16->SetBinContent(6,114.4754);
   hmc__16->SetBinContent(7,79.24095);
   hmc__16->SetBinContent(8,60.92036);
   hmc__16->SetBinContent(9,52.16773);
   hmc__16->SetBinContent(10,34.96897);
   hmc__16->SetBinContent(11,21.91209);
   hmc__16->SetBinContent(12,16.70686);
   hmc__16->SetBinContent(13,8.946701);
   hmc__16->SetBinContent(14,9.291177);
   hmc__16->SetBinContent(15,6.483016);
   hmc__16->SetBinContent(16,6.49091);
   hmc__16->SetBinContent(17,4.250519);
   hmc__16->SetBinContent(18,3.387226);
   hmc__16->SetBinContent(19,1.52047);
   hmc__16->SetBinContent(20,2.679897);
   hmc__16->SetBinContent(21,1.781927);
   hmc__16->SetBinContent(22,2.460029);
   hmc__16->SetBinContent(23,2.304143);
   hmc__16->SetBinContent(24,1.175624);
   hmc__16->SetBinContent(25,1.504409);
   hmc__16->SetBinContent(26,11.2301);
   hmc__16->SetBinError(1,3.85493);
   hmc__16->SetBinError(2,18.79474);
   hmc__16->SetBinError(3,28.32648);
   hmc__16->SetBinError(4,33.52012);
   hmc__16->SetBinError(5,31.31847);
   hmc__16->SetBinError(6,28.86697);
   hmc__16->SetBinError(7,18.31414);
   hmc__16->SetBinError(8,14.20168);
   hmc__16->SetBinError(9,10.7372);
   hmc__16->SetBinError(10,8.897855);
   hmc__16->SetBinError(11,5.319329);
   hmc__16->SetBinError(12,4.237925);
   hmc__16->SetBinError(13,2.615728);
   hmc__16->SetBinError(14,2.735694);
   hmc__16->SetBinError(15,2.245725);
   hmc__16->SetBinError(16,2.13559);
   hmc__16->SetBinError(17,1.641272);
   hmc__16->SetBinError(18,1.615094);
   hmc__16->SetBinError(19,0.8779593);
   hmc__16->SetBinError(20,1.208847);
   hmc__16->SetBinError(21,0.9599203);
   hmc__16->SetBinError(22,1.233021);
   hmc__16->SetBinError(23,1.157513);
   hmc__16->SetBinError(24,0.7697043);
   hmc__16->SetBinError(25,0.9062821);
   hmc__16->SetBinError(26,3.165015);
   hmc__16->SetMinimum(-3.64);
   hmc__16->SetMaximum(382.2);
   hmc__16->SetEntries(945.7007);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,1500);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(146.8968);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.141488);
   hbadmatch_stack_1->SetBinContent(3,0.2029036);
   hbadmatch_stack_1->SetBinContent(4,1.426565);
   hbadmatch_stack_1->SetBinContent(5,1.126755);
   hbadmatch_stack_1->SetBinContent(6,2.336188e-18);
   hbadmatch_stack_1->SetBinContent(7,0.3934307);
   hbadmatch_stack_1->SetBinContent(8,0.9286332);
   hbadmatch_stack_1->SetBinContent(9,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.601492);
   hbadmatch_stack_1->SetBinError(3,0.2029036);
   hbadmatch_stack_1->SetBinError(4,0.5654869);
   hbadmatch_stack_1->SetBinError(5,0.5902105);
   hbadmatch_stack_1->SetBinError(6,2.336188e-18);
   hbadmatch_stack_1->SetBinError(7,0.2781975);
   hbadmatch_stack_1->SetBinError(8,0.48078);
   hbadmatch_stack_1->SetBinError(9,0.1967154);
   hbadmatch_stack_1->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,1.78639);
   hext_stack_2->SetBinContent(3,1.454812);
   hext_stack_2->SetBinContent(4,0.8131978);
   hext_stack_2->SetBinContent(5,1.37261);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,0.3243973);
   hext_stack_2->SetBinContent(8,0.3243973);
   hext_stack_2->SetBinContent(9,1.37261);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,0.8039566);
   hext_stack_2->SetBinError(3,0.8615765);
   hext_stack_2->SetBinError(4,0.5750177);
   hext_stack_2->SetBinError(5,0.8259691);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,0.3243973);
   hext_stack_2->SetBinError(8,0.3243973);
   hext_stack_2->SetBinError(9,0.8259691);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetEntries(22);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2544535);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(5,0.2574102);
   hdirt_stack_3->SetBinError(2,0.2544535);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(5,0.2574102);
   hdirt_stack_3->SetEntries(3);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.5153543);
   houtFV_stack_4->SetBinContent(2,0.6417246);
   houtFV_stack_4->SetBinContent(3,0.1967154);
   houtFV_stack_4->SetBinContent(4,0.5884556);
   houtFV_stack_4->SetBinContent(6,0.1950248);
   houtFV_stack_4->SetBinContent(7,0.9811915);
   houtFV_stack_4->SetBinContent(8,0.3917402);
   houtFV_stack_4->SetBinContent(9,0.6373374);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinError(1,0.3219737);
   houtFV_stack_4->SetBinError(2,0.3731271);
   houtFV_stack_4->SetBinError(3,0.1967154);
   houtFV_stack_4->SetBinError(4,0.3397478);
   houtFV_stack_4->SetBinError(6,0.1950249);
   houtFV_stack_4->SetBinError(7,0.5674012);
   houtFV_stack_4->SetBinError(8,0.2770047);
   houtFV_stack_4->SetBinError(9,0.3699788);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetEntries(20);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
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

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3119068);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.594709);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.95283);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.826861);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.98586);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.727596);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.685762);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.525306);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.108976);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.8172804);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.587614);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.4650312);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.0768331);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.3810197);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.2777745);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.05785787);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.09421156);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1229105);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1213757);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.05967807);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.5962517);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1439591);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3322856);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5253516);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3237215);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4554857);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3261917);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5873737);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7027888);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3330548);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2342373);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5660561);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1520949);
   hNCpi0inFVres_stack_7->SetBinError(13,0.06209482);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2158606);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2547798);
   hNCpi0inFVres_stack_7->SetBinError(16,0.05785787);
   hNCpi0inFVres_stack_7->SetBinError(18,0.06833098);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1229105);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1213757);
   hNCpi0inFVres_stack_7->SetBinError(22,0.05967807);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2511439);
   hNCpi0inFVres_stack_7->SetEntries(461);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.07455449);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.035958);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.181582);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.038313);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.803858);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.715263);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.156262);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.747409);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.137549);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.02172);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4851873);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5239878);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3636528);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.362505);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2915739);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1095738);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.114473);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.01822845);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.327581);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.0388313);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6763367);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4874285);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5425922);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4059148);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4259445);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6326817);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5326974);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6449276);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3645554);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1685447);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2452164);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.214714);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2154996);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2036408);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.08630775);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.09881846);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.01822846);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2044595);
   hNCpi0inFVdis_stack_8->SetEntries(335);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,9.621438);
   hCCpi0inFV_stack_10->SetBinContent(2,66.99609);
   hCCpi0inFV_stack_10->SetBinContent(3,94.12928);
   hCCpi0inFV_stack_10->SetBinContent(4,105.9878);
   hCCpi0inFV_stack_10->SetBinContent(5,98.74388);
   hCCpi0inFV_stack_10->SetBinContent(6,91.39671);
   hCCpi0inFV_stack_10->SetBinContent(7,62.64118);
   hCCpi0inFV_stack_10->SetBinContent(8,45.93626);
   hCCpi0inFV_stack_10->SetBinContent(9,38.25283);
   hCCpi0inFV_stack_10->SetBinContent(10,25.42004);
   hCCpi0inFV_stack_10->SetBinContent(11,14.70875);
   hCCpi0inFV_stack_10->SetBinContent(12,12.3059);
   hCCpi0inFV_stack_10->SetBinContent(13,6.158564);
   hCCpi0inFV_stack_10->SetBinContent(14,5.905215);
   hCCpi0inFV_stack_10->SetBinContent(15,5.521927);
   hCCpi0inFV_stack_10->SetBinContent(16,4.74122);
   hCCpi0inFV_stack_10->SetBinContent(17,2.840843);
   hCCpi0inFV_stack_10->SetBinContent(18,2.339216);
   hCCpi0inFV_stack_10->SetBinContent(19,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(20,1.518779);
   hCCpi0inFV_stack_10->SetBinContent(21,1.268811);
   hCCpi0inFV_stack_10->SetBinContent(22,1.907138);
   hCCpi0inFV_stack_10->SetBinContent(23,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(24,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(26,5.286565);
   hCCpi0inFV_stack_10->SetBinError(1,1.557314);
   hCCpi0inFV_stack_10->SetBinError(2,4.127699);
   hCCpi0inFV_stack_10->SetBinError(3,4.863816);
   hCCpi0inFV_stack_10->SetBinError(4,5.231114);
   hCCpi0inFV_stack_10->SetBinError(5,4.992698);
   hCCpi0inFV_stack_10->SetBinError(6,4.832859);
   hCCpi0inFV_stack_10->SetBinError(7,3.971883);
   hCCpi0inFV_stack_10->SetBinError(8,3.389341);
   hCCpi0inFV_stack_10->SetBinError(9,3.128426);
   hCCpi0inFV_stack_10->SetBinError(10,2.521786);
   hCCpi0inFV_stack_10->SetBinError(11,1.91866);
   hCCpi0inFV_stack_10->SetBinError(12,1.788104);
   hCCpi0inFV_stack_10->SetBinError(13,1.225423);
   hCCpi0inFV_stack_10->SetBinError(14,1.224732);
   hCCpi0inFV_stack_10->SetBinError(15,1.194382);
   hCCpi0inFV_stack_10->SetBinError(16,1.037199);
   hCCpi0inFV_stack_10->SetBinError(17,0.8098046);
   hCCpi0inFV_stack_10->SetBinError(18,0.8089383);
   hCCpi0inFV_stack_10->SetBinError(19,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(20,0.5892709);
   hCCpi0inFV_stack_10->SetBinError(21,0.5889569);
   hCCpi0inFV_stack_10->SetBinError(22,0.6501133);
   hCCpi0inFV_stack_10->SetBinError(23,0.519186);
   hCCpi0inFV_stack_10->SetBinError(24,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(26,1.110635);
   hCCpi0inFV_stack_10->SetEntries(3003);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,0.7336084);
   hNCinFV_stack_11->SetBinContent(3,1.858957);
   hNCinFV_stack_11->SetBinContent(4,1.908829);
   hNCinFV_stack_11->SetBinContent(5,1.465526);
   hNCinFV_stack_11->SetBinContent(6,0.5352025);
   hNCinFV_stack_11->SetBinContent(7,0.9785053);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.5352025);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.3917402);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.3917402);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.4394482);
   hNCinFV_stack_11->SetBinError(3,0.6804124);
   hNCinFV_stack_11->SetBinError(4,0.6506224);
   hNCinFV_stack_11->SetBinError(5,0.6209405);
   hNCinFV_stack_11->SetBinError(6,0.3921167);
   hNCinFV_stack_11->SetBinError(7,0.4376048);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.3921167);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.2770047);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.2770047);
   hNCinFV_stack_11->SetEntries(46);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,4.643826);
   hnumuCCinFV_stack_12->SetBinContent(2,24.16765);
   hnumuCCinFV_stack_12->SetBinContent(3,28.316);
   hnumuCCinFV_stack_12->SetBinContent(4,24.96203);
   hnumuCCinFV_stack_12->SetBinContent(5,18.54293);
   hnumuCCinFV_stack_12->SetBinContent(6,18.10725);
   hnumuCCinFV_stack_12->SetBinContent(7,8.688478);
   hnumuCCinFV_stack_12->SetBinContent(8,8.009417);
   hnumuCCinFV_stack_12->SetBinContent(9,8.364397);
   hnumuCCinFV_stack_12->SetBinContent(10,6.978013);
   hnumuCCinFV_stack_12->SetBinContent(11,4.609419);
   hnumuCCinFV_stack_12->SetBinContent(12,2.825171);
   hnumuCCinFV_stack_12->SetBinContent(13,2.150936);
   hnumuCCinFV_stack_12->SetBinContent(14,2.642437);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(16,1.467217);
   hnumuCCinFV_stack_12->SetBinContent(17,0.9751767);
   hnumuCCinFV_stack_12->SetBinContent(18,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(19,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(21,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(22,0.4623427);
   hnumuCCinFV_stack_12->SetBinContent(23,0.816044);
   hnumuCCinFV_stack_12->SetBinContent(24,0.6387311);
   hnumuCCinFV_stack_12->SetBinContent(25,0.9492873);
   hnumuCCinFV_stack_12->SetBinContent(26,4.046157);
   hnumuCCinFV_stack_12->SetBinError(1,1.111298);
   hnumuCCinFV_stack_12->SetBinError(2,3.42733);
   hnumuCCinFV_stack_12->SetBinError(3,3.676221);
   hnumuCCinFV_stack_12->SetBinError(4,2.615416);
   hnumuCCinFV_stack_12->SetBinError(5,2.223317);
   hnumuCCinFV_stack_12->SetBinError(6,2.546679);
   hnumuCCinFV_stack_12->SetBinError(7,1.507364);
   hnumuCCinFV_stack_12->SetBinError(8,1.395534);
   hnumuCCinFV_stack_12->SetBinError(9,1.50366);
   hnumuCCinFV_stack_12->SetBinError(10,1.657908);
   hnumuCCinFV_stack_12->SetBinError(11,1.06192);
   hnumuCCinFV_stack_12->SetBinError(12,0.8428765);
   hnumuCCinFV_stack_12->SetBinError(13,0.6943074);
   hnumuCCinFV_stack_12->SetBinError(14,0.7851269);
   hnumuCCinFV_stack_12->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(16,0.6214735);
   hnumuCCinFV_stack_12->SetBinError(17,0.5016246);
   hnumuCCinFV_stack_12->SetBinError(18,0.438694);
   hnumuCCinFV_stack_12->SetBinError(19,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(20,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(21,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(22,0.3305372);
   hnumuCCinFV_stack_12->SetBinError(23,0.4089316);
   hnumuCCinFV_stack_12->SetBinError(24,0.370897);
   hnumuCCinFV_stack_12->SetBinError(25,0.5696375);
   hnumuCCinFV_stack_12->SetBinError(26,1.047282);
   hnumuCCinFV_stack_12->SetEntries(711);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.5352025);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.3921167);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.3921167);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__17->SetBinContent(1,16.00761);
   hmcerror__17->SetBinContent(2,99.37029);
   hmcerror__17->SetBinContent(3,131.2931);
   hmcerror__17->SetBinContent(4,139.9017);
   hmcerror__17->SetBinContent(5,125.2988);
   hmcerror__17->SetBinContent(6,114.4754);
   hmcerror__17->SetBinContent(7,79.24095);
   hmcerror__17->SetBinContent(8,60.92036);
   hmcerror__17->SetBinContent(9,52.16773);
   hmcerror__17->SetBinContent(10,34.96897);
   hmcerror__17->SetBinContent(11,21.91209);
   hmcerror__17->SetBinContent(12,16.70686);
   hmcerror__17->SetBinContent(13,8.946701);
   hmcerror__17->SetBinContent(14,9.291177);
   hmcerror__17->SetBinContent(15,6.483016);
   hmcerror__17->SetBinContent(16,6.49091);
   hmcerror__17->SetBinContent(17,4.250519);
   hmcerror__17->SetBinContent(18,3.387226);
   hmcerror__17->SetBinContent(19,1.52047);
   hmcerror__17->SetBinContent(20,2.679897);
   hmcerror__17->SetBinContent(21,1.781927);
   hmcerror__17->SetBinContent(22,2.460029);
   hmcerror__17->SetBinContent(23,2.304143);
   hmcerror__17->SetBinContent(24,1.175624);
   hmcerror__17->SetBinContent(25,1.504409);
   hmcerror__17->SetBinContent(26,11.2301);
   hmcerror__17->SetBinError(1,3.85493);
   hmcerror__17->SetBinError(2,18.79474);
   hmcerror__17->SetBinError(3,28.32648);
   hmcerror__17->SetBinError(4,33.52012);
   hmcerror__17->SetBinError(5,31.31847);
   hmcerror__17->SetBinError(6,28.86697);
   hmcerror__17->SetBinError(7,18.31414);
   hmcerror__17->SetBinError(8,14.20168);
   hmcerror__17->SetBinError(9,10.7372);
   hmcerror__17->SetBinError(10,8.897855);
   hmcerror__17->SetBinError(11,5.319329);
   hmcerror__17->SetBinError(12,4.237925);
   hmcerror__17->SetBinError(13,2.615728);
   hmcerror__17->SetBinError(14,2.735694);
   hmcerror__17->SetBinError(15,2.245725);
   hmcerror__17->SetBinError(16,2.13559);
   hmcerror__17->SetBinError(17,1.641272);
   hmcerror__17->SetBinError(18,1.615094);
   hmcerror__17->SetBinError(19,0.8779593);
   hmcerror__17->SetBinError(20,1.208847);
   hmcerror__17->SetBinError(21,0.9599203);
   hmcerror__17->SetBinError(22,1.233021);
   hmcerror__17->SetBinError(23,1.157513);
   hmcerror__17->SetBinError(24,0.7697043);
   hmcerror__17->SetBinError(25,0.9062821);
   hmcerror__17->SetBinError(26,3.165015);
   hmcerror__17->SetEntries(945.7007);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   19,
   137,
   182,
   143,
   108,
   90,
   70,
   52,
   37,
   30,
   19,
   10,
   10,
   5,
   8,
   9,
   5,
   4,
   4,
   2,
   1,
   5,
   3,
   0,
   0};
   Double_t _felx3021[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3021[25] = {
   4.5151,
   11.7047,
   13.49074,
   11.95826,
   10.3923,
   9.6093,
   8.4925,
   7.3419,
   6.2203,
   5.6197,
   4.5151,
   3.34883,
   3.34883,
   2.48995,
   3.0307,
   3.19354,
   2.48995,
   2.29683,
   2.29683,
   2,
   1,
   2.48995,
   2.143368,
   0,
   0};
   Double_t _fehx3021[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3021[25] = {
   4.3011,
   11.7047,
   13.49074,
   11.95826,
   10.3923,
   9.4079,
   8.2902,
   7.1381,
   6.0141,
   5.4117,
   4.3011,
   3.1179,
   3.1179,
   2.21064,
   2.7896,
   2.9582,
   2.21064,
   1.98186,
   1.98186,
   1.51917,
   1.35971,
   2.21064,
   1.72422,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1650);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(215.0398);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=37.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 953.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.4","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 9.0","F");

   ci = 1500;
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

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4.3","F");

   ci = 1502;
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

   ci = 1503;
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

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  20.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.3","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 701.2","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 10.1","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 171.2","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.2","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
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
   Double_t _felx3022[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3022[25] = {
   0.2408186,
   0.1891384,
   0.21575,
   0.2395976,
   0.2499502,
   0.2521675,
   0.2311197,
   0.2331187,
   0.2058208,
   0.25445,
   0.2427578,
   0.2536638,
   0.2923679,
   0.29444,
   0.3464013,
   0.3290125,
   0.3861344,
   0.4768191,
   0.5774263,
   0.4510797,
   0.538698,
   0.5012222,
   0.5023617,
   0.6547197,
   0.6024175};
   Double_t _fehx3022[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3022[25] = {
   0.2408186,
   0.1891384,
   0.21575,
   0.2395976,
   0.2499502,
   0.2521675,
   0.2311197,
   0.2331187,
   0.2058208,
   0.25445,
   0.2427578,
   0.2536638,
   0.2923679,
   0.29444,
   0.3464013,
   0.3290125,
   0.3861344,
   0.4768191,
   0.5774263,
   0.4510797,
   0.538698,
   0.5012222,
   0.5023617,
   0.6547197,
   0.6024175};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1650);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[25] = {
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
   Double_t _fy3023[25] = {
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
   Double_t _felx3023[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3023[25] = {
   0.2408186,
   0.1891384,
   0.21575,
   0.2395976,
   0.2499502,
   0.2521675,
   0.2311197,
   0.2331187,
   0.2058208,
   0.25445,
   0.2427578,
   0.2536638,
   0.2923679,
   0.29444,
   0.3464013,
   0.3290125,
   0.3861344,
   0.4768191,
   0.5774263,
   0.4510797,
   0.538698,
   0.5012222,
   0.5023617,
   0.6547197,
   0.6024175};
   Double_t _fehx3023[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3023[25] = {
   0.2408186,
   0.1891384,
   0.21575,
   0.2395976,
   0.2499502,
   0.2521675,
   0.2311197,
   0.2331187,
   0.2058208,
   0.25445,
   0.2427578,
   0.2536638,
   0.2923679,
   0.29444,
   0.3464013,
   0.3290125,
   0.3861344,
   0.4768191,
   0.5774263,
   0.4510797,
   0.538698,
   0.5012222,
   0.5023617,
   0.6547197,
   0.6024175};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1650);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[25] = {
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
   Double_t _fy3024[25] = {
   1.186936,
   1.378682,
   1.386212,
   1.022146,
   0.8619394,
   0.7861953,
   0.8833816,
   0.8535734,
   0.7092507,
   0.8579035,
   0.8671014,
   0.5985566,
   1.11773,
   0.538145,
   1.233994,
   1.386555,
   1.176327,
   1.180907,
   2.630766,
   0.7462974,
   0.5611903,
   2.032497,
   1.302002,
   0,
   0};
   Double_t _felx3024[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3024[25] = {
   0.2820596,
   0.1177887,
   0.1027528,
   0.08547613,
   0.08294016,
   0.08394207,
   0.1071731,
   0.1205164,
   0.1192365,
   0.1607053,
   0.2060552,
   0.2004464,
   0.3743089,
   0.2679908,
   0.4674831,
   0.4920019,
   0.5857991,
   0.6780858,
   1.510605,
   0.7462974,
   0.5611903,
   1.012163,
   0.9302233,
   0,
   0};
   Double_t _fehx3024[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3024[25] = {
   0.268691,
   0.1177887,
   0.1027528,
   0.08547613,
   0.08294016,
   0.08218274,
   0.1046201,
   0.117171,
   0.1152839,
   0.1547572,
   0.1962889,
   0.186624,
   0.3484972,
   0.237929,
   0.4302936,
   0.4557451,
   0.5200871,
   0.5850982,
   1.303452,
   0.5668763,
   0.7630561,
   0.8986237,
   0.7483128,
   0.9763325,
   0.7629576};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1650);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(4.32764);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_pi0_momentum_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
