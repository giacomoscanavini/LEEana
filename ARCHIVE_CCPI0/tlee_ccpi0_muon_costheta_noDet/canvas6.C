#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Sep 28 22:15:17 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-3.6,1.25641,398.0842);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hmc__16->SetBinContent(1,5.21404);
   hmc__16->SetBinContent(2,4.81153);
   hmc__16->SetBinContent(3,4.321915);
   hmc__16->SetBinContent(4,3.994195);
   hmc__16->SetBinContent(5,7.109523);
   hmc__16->SetBinContent(6,7.924164);
   hmc__16->SetBinContent(7,8.170581);
   hmc__16->SetBinContent(8,8.3082);
   hmc__16->SetBinContent(9,9.630068);
   hmc__16->SetBinContent(10,12.71536);
   hmc__16->SetBinContent(11,12.55268);
   hmc__16->SetBinContent(12,16.86061);
   hmc__16->SetBinContent(13,20.4555);
   hmc__16->SetBinContent(14,22.17127);
   hmc__16->SetBinContent(15,25.47878);
   hmc__16->SetBinContent(16,29.10333);
   hmc__16->SetBinContent(17,32.83905);
   hmc__16->SetBinContent(18,42.20856);
   hmc__16->SetBinContent(19,42.34365);
   hmc__16->SetBinContent(20,56.22382);
   hmc__16->SetBinContent(21,61.60972);
   hmc__16->SetBinContent(22,79.56593);
   hmc__16->SetBinContent(23,124.2802);
   hmc__16->SetBinContent(24,148.3224);
   hmc__16->SetBinContent(25,169.555);
   hmc__16->SetBinError(1,1.746045);
   hmc__16->SetBinError(2,1.643021);
   hmc__16->SetBinError(3,1.711564);
   hmc__16->SetBinError(4,1.684124);
   hmc__16->SetBinError(5,2.528565);
   hmc__16->SetBinError(6,2.752611);
   hmc__16->SetBinError(7,2.391603);
   hmc__16->SetBinError(8,2.868466);
   hmc__16->SetBinError(9,3.092681);
   hmc__16->SetBinError(10,4.218527);
   hmc__16->SetBinError(11,4.228698);
   hmc__16->SetBinError(12,4.90717);
   hmc__16->SetBinError(13,5.704984);
   hmc__16->SetBinError(14,6.624397);
   hmc__16->SetBinError(15,7.145671);
   hmc__16->SetBinError(16,7.176537);
   hmc__16->SetBinError(17,7.66182);
   hmc__16->SetBinError(18,10.38814);
   hmc__16->SetBinError(19,9.608505);
   hmc__16->SetBinError(20,13.23284);
   hmc__16->SetBinError(21,15.42548);
   hmc__16->SetBinError(22,17.4422);
   hmc__16->SetBinError(23,27.31038);
   hmc__16->SetBinError(24,30.38627);
   hmc__16->SetBinError(25,32.99415);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-3.6);
   hmc__16->SetMaximum(378);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-1,1);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(178.0328);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.3948367);
   hbadmatch_stack_1->SetBinContent(15,0.5901461);
   hbadmatch_stack_1->SetBinContent(16,0.1028101);
   hbadmatch_stack_1->SetBinContent(17,0.3917402);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,0.8013108);
   hbadmatch_stack_1->SetBinContent(22,0.7336084);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.5430812);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.3948367);
   hbadmatch_stack_1->SetBinError(15,0.340721);
   hbadmatch_stack_1->SetBinError(16,0.1028101);
   hbadmatch_stack_1->SetBinError(17,0.2770047);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.4960563);
   hbadmatch_stack_1->SetBinError(22,0.4394482);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3960943);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(2,0.6416141);
   hext_stack_2->SetBinContent(5,0.3243973);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(12,0.8131978);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,0.8131978);
   hext_stack_2->SetBinContent(17,0.9660115);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinError(2,0.6416141);
   hext_stack_2->SetBinError(5,0.3243973);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(12,0.5750177);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.5750177);
   hext_stack_2->SetBinError(17,0.7189592);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(22,0.2574102);
   hdirt_stack_3->SetBinContent(23,0.2544535);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(22,0.2574102);
   hdirt_stack_3->SetBinError(23,0.2544535);
   hdirt_stack_3->SetBinError(25,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(5,0.4466998);
   houtFV_stack_4->SetBinContent(6,0.3401776);
   houtFV_stack_4->SetBinContent(7,0.2439067);
   houtFV_stack_4->SetBinContent(11,0.07552768);
   houtFV_stack_4->SetBinContent(13,0.4398267);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.3008363);
   houtFV_stack_4->SetBinContent(19,0.5352025);
   houtFV_stack_4->SetBinContent(23,0.5884556);
   houtFV_stack_4->SetBinContent(24,0.5884556);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(5,0.3181024);
   houtFV_stack_4->SetBinError(6,0.3401776);
   houtFV_stack_4->SetBinError(7,0.2439067);
   houtFV_stack_4->SetBinError(11,0.07552768);
   houtFV_stack_4->SetBinError(13,0.3129898);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(18,0.3008363);
   houtFV_stack_4->SetBinError(19,0.3921167);
   houtFV_stack_4->SetBinError(23,0.3397478);
   houtFV_stack_4->SetBinError(24,0.3397478);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03337679);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1691327);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.06844463);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2123335);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.1480761);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.1357626);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.4951999);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.1159597);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.2531211);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.2784585);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.09932525);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1242261);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.2503916);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.2566052);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.4558401);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1833205);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.4375422);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3474119);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.3319981);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6940714);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.418183);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.376121);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.00501);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.280667);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.304658);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.104918);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04281684);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1341711);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1254604);
   hNCpi0inFVres_stack_7->SetBinError(5,0.06673321);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2488485);
   hNCpi0inFVres_stack_7->SetBinError(7,0.06889943);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2003551);
   hNCpi0inFVres_stack_7->SetBinError(9,0.178745);
   hNCpi0inFVres_stack_7->SetBinError(10,0.04533113);
   hNCpi0inFVres_stack_7->SetBinError(11,0.07558742);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1509368);
   hNCpi0inFVres_stack_7->SetBinError(13,0.09262285);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3043324);
   hNCpi0inFVres_stack_7->SetBinError(15,0.08686746);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1859594);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1492872);
   hNCpi0inFVres_stack_7->SetBinError(18,0.09288893);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1957788);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3937198);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4541339);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3948221);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4526804);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6883987);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8809393);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.04505502);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3661778);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1461976);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.01491798);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5391476);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.139728);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.05335721);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.01523216);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1168557);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1827547);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2909138);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.04889436);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2102047);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.05438075);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.781656);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.4384644);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5255984);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.73327);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5126787);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4887865);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.5553552);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.726168);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.06725);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.914892);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.622258);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.03275216);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3319555);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.0850076);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.01491798);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3027311);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.09231663);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.04006112);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.01523216);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.08787535);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.09367589);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2563587);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.0383626);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1210797);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.03451328);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3822048);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1907563);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2984399);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4233835);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2307688);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2327037);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2196901);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6283691);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4918378);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6343109);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9424868);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,2.778419);
   hCCpi0inFV_stack_10->SetBinContent(2,2.050601);
   hCCpi0inFV_stack_10->SetBinContent(3,2.69569);
   hCCpi0inFV_stack_10->SetBinContent(4,2.249007);
   hCCpi0inFV_stack_10->SetBinContent(5,3.167601);
   hCCpi0inFV_stack_10->SetBinContent(6,5.417111);
   hCCpi0inFV_stack_10->SetBinContent(7,3.950523);
   hCCpi0inFV_stack_10->SetBinContent(8,5.89734);
   hCCpi0inFV_stack_10->SetBinContent(9,6.619645);
   hCCpi0inFV_stack_10->SetBinContent(10,7.447639);
   hCCpi0inFV_stack_10->SetBinContent(11,8.45298);
   hCCpi0inFV_stack_10->SetBinContent(12,13.10202);
   hCCpi0inFV_stack_10->SetBinContent(13,14.66028);
   hCCpi0inFV_stack_10->SetBinContent(14,13.63243);
   hCCpi0inFV_stack_10->SetBinContent(15,19.02455);
   hCCpi0inFV_stack_10->SetBinContent(16,21.05654);
   hCCpi0inFV_stack_10->SetBinContent(17,24.77326);
   hCCpi0inFV_stack_10->SetBinContent(18,30.41435);
   hCCpi0inFV_stack_10->SetBinContent(19,30.2609);
   hCCpi0inFV_stack_10->SetBinContent(20,42.56244);
   hCCpi0inFV_stack_10->SetBinContent(21,48.34015);
   hCCpi0inFV_stack_10->SetBinContent(22,59.87552);
   hCCpi0inFV_stack_10->SetBinContent(23,97.3965);
   hCCpi0inFV_stack_10->SetBinContent(24,117.3092);
   hCCpi0inFV_stack_10->SetBinContent(25,123.3878);
   hCCpi0inFV_stack_10->SetBinError(1,0.8672019);
   hCCpi0inFV_stack_10->SetBinError(2,0.7068742);
   hCCpi0inFV_stack_10->SetBinError(3,0.7603271);
   hCCpi0inFV_stack_10->SetBinError(4,0.7341869);
   hCCpi0inFV_stack_10->SetBinError(5,0.9429888);
   hCCpi0inFV_stack_10->SetBinError(6,1.226321);
   hCCpi0inFV_stack_10->SetBinError(7,0.9900954);
   hCCpi0inFV_stack_10->SetBinError(8,1.2479);
   hCCpi0inFV_stack_10->SetBinError(9,1.300463);
   hCCpi0inFV_stack_10->SetBinError(10,1.385142);
   hCCpi0inFV_stack_10->SetBinError(11,1.482458);
   hCCpi0inFV_stack_10->SetBinError(12,1.79926);
   hCCpi0inFV_stack_10->SetBinError(13,1.928878);
   hCCpi0inFV_stack_10->SetBinError(14,1.819126);
   hCCpi0inFV_stack_10->SetBinError(15,2.238435);
   hCCpi0inFV_stack_10->SetBinError(16,2.284145);
   hCCpi0inFV_stack_10->SetBinError(17,2.506056);
   hCCpi0inFV_stack_10->SetBinError(18,2.761141);
   hCCpi0inFV_stack_10->SetBinError(19,2.844329);
   hCCpi0inFV_stack_10->SetBinError(20,3.278695);
   hCCpi0inFV_stack_10->SetBinError(21,3.489896);
   hCCpi0inFV_stack_10->SetBinError(22,3.8335);
   hCCpi0inFV_stack_10->SetBinError(23,5.008028);
   hCCpi0inFV_stack_10->SetBinError(24,5.456548);
   hCCpi0inFV_stack_10->SetBinError(25,5.54641);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,0.1967154);
   hNCinFV_stack_11->SetBinContent(7,0.1967154);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(13,0.1950248);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.3401776);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.7336084);
   hNCinFV_stack_11->SetBinContent(21,0.536893);
   hNCinFV_stack_11->SetBinContent(22,1.515398);
   hNCinFV_stack_11->SetBinContent(23,0.9801958);
   hNCinFV_stack_11->SetBinContent(24,2.445722);
   hNCinFV_stack_11->SetBinContent(25,1.072095);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.1967154);
   hNCinFV_stack_11->SetBinError(7,0.1967154);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(13,0.1950249);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.3401776);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.4394482);
   hNCinFV_stack_11->SetBinError(21,0.3929602);
   hNCinFV_stack_11->SetBinError(22,0.588146);
   hNCinFV_stack_11->SetBinError(23,0.4383608);
   hNCinFV_stack_11->SetBinError(24,0.7600838);
   hNCinFV_stack_11->SetBinError(25,0.5551335);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.127096);
   hnumuCCinFV_stack_12->SetBinContent(2,1.344088);
   hnumuCCinFV_stack_12->SetBinContent(3,0.7950577);
   hnumuCCinFV_stack_12->SetBinContent(4,1.533554);
   hnumuCCinFV_stack_12->SetBinContent(5,2.495916);
   hnumuCCinFV_stack_12->SetBinContent(6,1.125349);
   hnumuCCinFV_stack_12->SetBinContent(7,3.610119);
   hnumuCCinFV_stack_12->SetBinContent(8,2.142507);
   hnumuCCinFV_stack_12->SetBinContent(9,1.950534);
   hnumuCCinFV_stack_12->SetBinContent(10,3.95009);
   hnumuCCinFV_stack_12->SetBinContent(11,3.268857);
   hnumuCCinFV_stack_12->SetBinContent(12,2.646106);
   hnumuCCinFV_stack_12->SetBinContent(13,4.298719);
   hnumuCCinFV_stack_12->SetBinContent(14,6.399628);
   hnumuCCinFV_stack_12->SetBinContent(15,4.168117);
   hnumuCCinFV_stack_12->SetBinContent(16,5.1162);
   hnumuCCinFV_stack_12->SetBinContent(17,5.494859);
   hnumuCCinFV_stack_12->SetBinContent(18,9.444525);
   hnumuCCinFV_stack_12->SetBinContent(19,9.237888);
   hnumuCCinFV_stack_12->SetBinContent(20,10.37918);
   hnumuCCinFV_stack_12->SetBinContent(21,8.649797);
   hnumuCCinFV_stack_12->SetBinContent(22,12.72182);
   hnumuCCinFV_stack_12->SetBinContent(23,19.81529);
   hnumuCCinFV_stack_12->SetBinContent(24,19.35749);
   hnumuCCinFV_stack_12->SetBinContent(25,33.12758);
   hnumuCCinFV_stack_12->SetBinError(1,0.7827156);
   hnumuCCinFV_stack_12->SetBinError(2,0.5533249);
   hnumuCCinFV_stack_12->SetBinError(3,0.4892817);
   hnumuCCinFV_stack_12->SetBinError(4,0.6585161);
   hnumuCCinFV_stack_12->SetBinError(5,0.7745931);
   hnumuCCinFV_stack_12->SetBinError(6,0.5194673);
   hnumuCCinFV_stack_12->SetBinError(7,0.955604);
   hnumuCCinFV_stack_12->SetBinError(8,0.7251737);
   hnumuCCinFV_stack_12->SetBinError(9,0.6644221);
   hnumuCCinFV_stack_12->SetBinError(10,1.101796);
   hnumuCCinFV_stack_12->SetBinError(11,0.8569286);
   hnumuCCinFV_stack_12->SetBinError(12,0.8743235);
   hnumuCCinFV_stack_12->SetBinError(13,1.012157);
   hnumuCCinFV_stack_12->SetBinError(14,1.374018);
   hnumuCCinFV_stack_12->SetBinError(15,1.079166);
   hnumuCCinFV_stack_12->SetBinError(16,1.193005);
   hnumuCCinFV_stack_12->SetBinError(17,1.264242);
   hnumuCCinFV_stack_12->SetBinError(18,1.930456);
   hnumuCCinFV_stack_12->SetBinError(19,1.556041);
   hnumuCCinFV_stack_12->SetBinError(20,1.673814);
   hnumuCCinFV_stack_12->SetBinError(21,1.51257);
   hnumuCCinFV_stack_12->SetBinError(22,1.836891);
   hnumuCCinFV_stack_12->SetBinError(23,2.84);
   hnumuCCinFV_stack_12->SetBinError(24,2.285519);
   hnumuCCinFV_stack_12->SetBinError(25,4.243178);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.536893);
   hnueCCinFV_stack_13->SetBinContent(25,0.3900497);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.3929602);
   hnueCCinFV_stack_13->SetBinError(25,0.2758068);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__17->SetBinContent(1,5.21404);
   hmcerror__17->SetBinContent(2,4.81153);
   hmcerror__17->SetBinContent(3,4.321915);
   hmcerror__17->SetBinContent(4,3.994195);
   hmcerror__17->SetBinContent(5,7.109523);
   hmcerror__17->SetBinContent(6,7.924164);
   hmcerror__17->SetBinContent(7,8.170581);
   hmcerror__17->SetBinContent(8,8.3082);
   hmcerror__17->SetBinContent(9,9.630068);
   hmcerror__17->SetBinContent(10,12.71536);
   hmcerror__17->SetBinContent(11,12.55268);
   hmcerror__17->SetBinContent(12,16.86061);
   hmcerror__17->SetBinContent(13,20.4555);
   hmcerror__17->SetBinContent(14,22.17127);
   hmcerror__17->SetBinContent(15,25.47878);
   hmcerror__17->SetBinContent(16,29.10333);
   hmcerror__17->SetBinContent(17,32.83905);
   hmcerror__17->SetBinContent(18,42.20856);
   hmcerror__17->SetBinContent(19,42.34365);
   hmcerror__17->SetBinContent(20,56.22382);
   hmcerror__17->SetBinContent(21,61.60972);
   hmcerror__17->SetBinContent(22,79.56593);
   hmcerror__17->SetBinContent(23,124.2802);
   hmcerror__17->SetBinContent(24,148.3224);
   hmcerror__17->SetBinContent(25,169.555);
   hmcerror__17->SetBinError(1,1.746045);
   hmcerror__17->SetBinError(2,1.643021);
   hmcerror__17->SetBinError(3,1.711564);
   hmcerror__17->SetBinError(4,1.684124);
   hmcerror__17->SetBinError(5,2.528565);
   hmcerror__17->SetBinError(6,2.752611);
   hmcerror__17->SetBinError(7,2.391603);
   hmcerror__17->SetBinError(8,2.868466);
   hmcerror__17->SetBinError(9,3.092681);
   hmcerror__17->SetBinError(10,4.218527);
   hmcerror__17->SetBinError(11,4.228698);
   hmcerror__17->SetBinError(12,4.90717);
   hmcerror__17->SetBinError(13,5.704984);
   hmcerror__17->SetBinError(14,6.624397);
   hmcerror__17->SetBinError(15,7.145671);
   hmcerror__17->SetBinError(16,7.176537);
   hmcerror__17->SetBinError(17,7.66182);
   hmcerror__17->SetBinError(18,10.38814);
   hmcerror__17->SetBinError(19,9.608505);
   hmcerror__17->SetBinError(20,13.23284);
   hmcerror__17->SetBinError(21,15.42548);
   hmcerror__17->SetBinError(22,17.4422);
   hmcerror__17->SetBinError(23,27.31038);
   hmcerror__17->SetBinError(24,30.38627);
   hmcerror__17->SetBinError(25,32.99415);
   hmcerror__17->SetBinError(26,0.3895343);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3021[25] = {
   6,
   4,
   5,
   7,
   4,
   4,
   8,
   15,
   8,
   17,
   22,
   15,
   23,
   21,
   20,
   33,
   29,
   34,
   56,
   57,
   55,
   65,
   106,
   165,
   180};
   Double_t _felx3021[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3021[25] = {
   2.67925,
   2.29683,
   2.48995,
   2.85954,
   2.29683,
   2.29683,
   3.0307,
   4.0385,
   3.0307,
   4.2835,
   4.8417,
   4.0385,
   4.9457,
   4.7354,
   4.6266,
   5.8847,
   5.5285,
   5.9703,
   7.6127,
   7.679,
   7.546,
   8.1893,
   10.29563,
   12.84523,
   13.41641};
   Double_t _fehx3021[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3021[25] = {
   2.41858,
   1.98186,
   2.21064,
   2.61053,
   1.98186,
   1.98186,
   2.7896,
   3.8197,
   2.7896,
   4.0673,
   4.6299,
   3.8197,
   4.7346,
   4.5229,
   4.4133,
   5.6776,
   5.3201,
   5.7635,
   7.4094,
   7.4757,
   7.3425,
   7.9866,
   10.29563,
   12.84523,
   13.41641};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(1.532853);
   Graph_Graph3021->SetMaximum(212.5877);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=25.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 959.0","lp");
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  21.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 706.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 10.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 175.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.8","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_muon_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3022[25] = {
   0.3348738,
   0.3414759,
   0.3960197,
   0.4216429,
   0.3556589,
   0.3473692,
   0.2927091,
   0.3452572,
   0.3211484,
   0.3317662,
   0.3368761,
   0.2910435,
   0.2788973,
   0.2987829,
   0.2804557,
   0.2465882,
   0.2333143,
   0.2461145,
   0.2269172,
   0.2353601,
   0.2503742,
   0.2192169,
   0.2197485,
   0.2048663,
   0.1945926};
   Double_t _fehx3022[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3022[25] = {
   0.3348738,
   0.3414759,
   0.3960197,
   0.4216429,
   0.3556589,
   0.3473692,
   0.2927091,
   0.3452572,
   0.3211484,
   0.3317662,
   0.3368761,
   0.2910435,
   0.2788973,
   0.2987829,
   0.2804557,
   0.2465882,
   0.2333143,
   0.2461145,
   0.2269172,
   0.2353601,
   0.2503742,
   0.2192169,
   0.2197485,
   0.2048663,
   0.1945926};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Muon cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3023[25] = {
   0.3348738,
   0.3414759,
   0.3960197,
   0.4216429,
   0.3556589,
   0.3473692,
   0.2927091,
   0.3452572,
   0.3211484,
   0.3317662,
   0.3368761,
   0.2910435,
   0.2788973,
   0.2987829,
   0.2804557,
   0.2465882,
   0.2333143,
   0.2461145,
   0.2269172,
   0.2353601,
   0.2503742,
   0.2192169,
   0.2197485,
   0.2048663,
   0.1945926};
   Double_t _fehx3023[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3023[25] = {
   0.3348738,
   0.3414759,
   0.3960197,
   0.4216429,
   0.3556589,
   0.3473692,
   0.2927091,
   0.3452572,
   0.3211484,
   0.3317662,
   0.3368761,
   0.2910435,
   0.2788973,
   0.2987829,
   0.2804557,
   0.2465882,
   0.2333143,
   0.2461145,
   0.2269172,
   0.2353601,
   0.2503742,
   0.2192169,
   0.2197485,
   0.2048663,
   0.1945926};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3024[25] = {
   1.150739,
   0.8313365,
   1.156895,
   1.752544,
   0.5626256,
   0.5047851,
   0.9791226,
   1.805445,
   0.8307314,
   1.336966,
   1.752613,
   0.8896475,
   1.124392,
   0.9471718,
   0.7849669,
   1.133891,
   0.8830949,
   0.8055239,
   1.322512,
   1.013805,
   0.8927163,
   0.8169325,
   0.8529117,
   1.112441,
   1.061602};
   Double_t _felx3024[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3024[25] = {
   0.513853,
   0.4773596,
   0.576122,
   0.7159241,
   0.3230639,
   0.2898514,
   0.3709283,
   0.486086,
   0.3147122,
   0.336876,
   0.3857104,
   0.2395228,
   0.2417785,
   0.2135827,
   0.1815864,
   0.2022002,
   0.1683514,
   0.1414476,
   0.1797837,
   0.1365791,
   0.1224807,
   0.1029247,
   0.08284211,
   0.08660344,
   0.07912717};
   Double_t _fehx3024[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3024[25] = {
   0.4638591,
   0.4118981,
   0.5114955,
   0.6535811,
   0.2787613,
   0.2501033,
   0.34142,
   0.4597506,
   0.289676,
   0.3198729,
   0.3688375,
   0.2265458,
   0.2314585,
   0.2039983,
   0.1732147,
   0.1950842,
   0.1620053,
   0.1365481,
   0.1749825,
   0.1329632,
   0.1191776,
   0.1003771,
   0.08284211,
   0.08660344,
   0.07912717};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.1934403);
   Graph_Graph3024->SetMaximum(2.625244);
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
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_muon_costheta_all",25,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
