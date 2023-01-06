#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 17:41:26 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-384.6154,-4.5,2820.513,497.6053);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__22->SetBinContent(3,1.77103);
   hmc__22->SetBinContent(4,20.86494);
   hmc__22->SetBinContent(5,58.47006);
   hmc__22->SetBinContent(6,108.7323);
   hmc__22->SetBinContent(7,169.4808);
   hmc__22->SetBinContent(8,206.2733);
   hmc__22->SetBinContent(9,206.8256);
   hmc__22->SetBinContent(10,191.5417);
   hmc__22->SetBinContent(11,172.0975);
   hmc__22->SetBinContent(12,138.4706);
   hmc__22->SetBinContent(13,108.716);
   hmc__22->SetBinContent(14,87.44096);
   hmc__22->SetBinContent(15,68.56836);
   hmc__22->SetBinContent(16,49.21716);
   hmc__22->SetBinContent(17,31.16489);
   hmc__22->SetBinContent(18,27.79648);
   hmc__22->SetBinContent(19,22.17885);
   hmc__22->SetBinContent(20,21.64736);
   hmc__22->SetBinContent(21,14.70098);
   hmc__22->SetBinContent(22,11.78772);
   hmc__22->SetBinContent(23,7.790472);
   hmc__22->SetBinContent(24,6.32087);
   hmc__22->SetBinContent(25,6.858384);
   hmc__22->SetBinContent(26,25.96491);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,0.3895343);
   hmc__22->SetBinError(3,0.9820913);
   hmc__22->SetBinError(4,4.602455);
   hmc__22->SetBinError(5,11.98844);
   hmc__22->SetBinError(6,23.93264);
   hmc__22->SetBinError(7,38.01659);
   hmc__22->SetBinError(8,45.30505);
   hmc__22->SetBinError(9,43.86966);
   hmc__22->SetBinError(10,45.65348);
   hmc__22->SetBinError(11,39.32551);
   hmc__22->SetBinError(12,32.54383);
   hmc__22->SetBinError(13,26.39333);
   hmc__22->SetBinError(14,20.12115);
   hmc__22->SetBinError(15,15.81844);
   hmc__22->SetBinError(16,12.22108);
   hmc__22->SetBinError(17,7.585089);
   hmc__22->SetBinError(18,6.255562);
   hmc__22->SetBinError(19,7.631153);
   hmc__22->SetBinError(20,5.138567);
   hmc__22->SetBinError(21,3.767799);
   hmc__22->SetBinError(22,3.20316);
   hmc__22->SetBinError(23,2.880896);
   hmc__22->SetBinError(24,1.929401);
   hmc__22->SetBinError(25,2.075875);
   hmc__22->SetBinError(26,4.635442);
   hmc__22->SetMinimum(-4.5);
   hmc__22->SetMaximum(472.5);
   hmc__22->SetEntries(1748.127);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,2500);
   hs8_stack_8->SetMinimum(-1.131173e-08);
   hs8_stack_8->SetMaximum(217.1669);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(5,0.2294167);
   hbadmatch_stack_1->SetBinContent(6,0.4304838);
   hbadmatch_stack_1->SetBinContent(7,0.6112065);
   hbadmatch_stack_1->SetBinContent(8,0.3917402);
   hbadmatch_stack_1->SetBinContent(9,0.8030201);
   hbadmatch_stack_1->SetBinContent(10,1.372304);
   hbadmatch_stack_1->SetBinContent(11,0.9981711);
   hbadmatch_stack_1->SetBinContent(12,0.8613597);
   hbadmatch_stack_1->SetBinContent(13,0.9856285);
   hbadmatch_stack_1->SetBinContent(14,0.5352025);
   hbadmatch_stack_1->SetBinContent(15,1.121071);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.2294167);
   hbadmatch_stack_1->SetBinError(6,0.3055235);
   hbadmatch_stack_1->SetBinError(7,0.3535247);
   hbadmatch_stack_1->SetBinError(8,0.2770047);
   hbadmatch_stack_1->SetBinError(9,0.4019111);
   hbadmatch_stack_1->SetBinError(10,0.5741026);
   hbadmatch_stack_1->SetBinError(11,0.5336702);
   hbadmatch_stack_1->SetBinError(12,0.5213893);
   hbadmatch_stack_1->SetBinError(13,0.5220126);
   hbadmatch_stack_1->SetBinError(14,0.3921167);
   hbadmatch_stack_1->SetBinError(15,0.7790082);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(3,0.6416141);
   hext_stack_2->SetBinContent(4,2.973055);
   hext_stack_2->SetBinContent(5,1.697008);
   hext_stack_2->SetBinContent(6,1.78639);
   hext_stack_2->SetBinContent(7,2.834603);
   hext_stack_2->SetBinContent(8,8.809436);
   hext_stack_2->SetBinContent(9,13.3195);
   hext_stack_2->SetBinContent(10,3.979379);
   hext_stack_2->SetBinContent(11,5.147274);
   hext_stack_2->SetBinContent(12,2.898035);
   hext_stack_2->SetBinContent(13,2.923985);
   hext_stack_2->SetBinContent(14,1.697008);
   hext_stack_2->SetBinContent(15,1.950793);
   hext_stack_2->SetBinContent(16,1.048213);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(19,0.9660115);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(26,3.946247);
   hext_stack_2->SetBinError(3,0.6416141);
   hext_stack_2->SetBinError(4,1.346105);
   hext_stack_2->SetBinError(5,0.8873887);
   hext_stack_2->SetBinError(6,0.8039566);
   hext_stack_2->SetBinError(7,1.106046);
   hext_stack_2->SetBinError(8,2.010604);
   hext_stack_2->SetBinError(9,2.580102);
   hext_stack_2->SetBinError(10,1.207483);
   hext_stack_2->SetBinError(11,1.700278);
   hext_stack_2->SetBinError(12,1.245274);
   hext_stack_2->SetBinError(13,1.040301);
   hext_stack_2->SetBinError(14,0.8873887);
   hext_stack_2->SetBinError(15,0.8755137);
   hext_stack_2->SetBinError(16,0.7595995);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(19,0.7189592);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(26,1.458663);
   hext_stack_2->SetEntries(130);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.1792599);
   hdirt_stack_3->SetBinContent(7,1.132946);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.6951543);
   hdirt_stack_3->SetBinContent(11,0.4045523);
   hdirt_stack_3->SetBinContent(13,0.292658);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.3820091);
   hdirt_stack_3->SetBinContent(18,2.407774e-08);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.1792599);
   hdirt_stack_3->SetBinError(7,0.526479);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.4258516);
   hdirt_stack_3->SetBinError(11,0.3001263);
   hdirt_stack_3->SetBinError(13,0.2072697);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.3820091);
   hdirt_stack_3->SetBinError(18,2.407774e-08);
   hdirt_stack_3->SetEntries(20);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,2.08683);
   houtFV_stack_4->SetBinContent(6,3.22038);
   houtFV_stack_4->SetBinContent(7,2.241634);
   houtFV_stack_4->SetBinContent(8,4.860763);
   houtFV_stack_4->SetBinContent(9,3.591984);
   houtFV_stack_4->SetBinContent(10,3.123793);
   houtFV_stack_4->SetBinContent(11,3.06004);
   houtFV_stack_4->SetBinContent(12,1.744032);
   houtFV_stack_4->SetBinContent(13,0.9818863);
   houtFV_stack_4->SetBinContent(14,1.515398);
   houtFV_stack_4->SetBinContent(15,0.5352025);
   houtFV_stack_4->SetBinContent(17,0.5867651);
   houtFV_stack_4->SetBinContent(20,0.3616262);
   houtFV_stack_4->SetBinContent(26,0.1967154);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.7775213);
   houtFV_stack_4->SetBinError(6,0.9269214);
   houtFV_stack_4->SetBinError(7,0.6935303);
   houtFV_stack_4->SetBinError(8,1.897416);
   houtFV_stack_4->SetBinError(9,0.9697748);
   houtFV_stack_4->SetBinError(10,0.8654061);
   houtFV_stack_4->SetBinError(11,0.9242267);
   houtFV_stack_4->SetBinError(12,0.6309366);
   houtFV_stack_4->SetBinError(13,0.4391155);
   houtFV_stack_4->SetBinError(14,0.588146);
   houtFV_stack_4->SetBinError(15,0.3921167);
   houtFV_stack_4->SetBinError(17,0.3387718);
   houtFV_stack_4->SetBinError(20,0.3616262);
   houtFV_stack_4->SetBinError(26,0.1967154);
   houtFV_stack_4->SetEntries(118);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetEntries(3);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.2653329);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.459461);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.047809);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.703508);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.796493);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.664692);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.728743);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.045038);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.292078);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.264828);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.4450084);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.226703);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.05306552);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1820769);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(4,0.09777087);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3553115);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3797786);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4511976);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3553128);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5512217);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5735397);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7000777);
   hNCpi0inFVres_stack_7->SetBinError(12,0.484635);
   hNCpi0inFVres_stack_7->SetBinError(13,0.523423);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1593056);
   hNCpi0inFVres_stack_7->SetBinError(15,0.119904);
   hNCpi0inFVres_stack_7->SetBinError(16,0.03757277);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1322977);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(413);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.06886437);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5524924);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.675269);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.887922);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.588549);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.818738);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.9293743);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.871112);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.246719);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.005111);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9149656);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.077465);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3406385);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6229016);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4811797);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6399697);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.05563199);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1719497);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.584089);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3497928);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4463601);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3624052);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2102263);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4953421);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4302078);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3316742);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4280955);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8872569);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2168259);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4174869);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2956747);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5849801);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.06238626);
   hNCpi0inFVdis_stack_8->SetEntries(337);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(3,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(4,6.590642);
   hCCpi0inFV_stack_10->SetBinContent(5,28.83472);
   hCCpi0inFV_stack_10->SetBinContent(6,68.95086);
   hCCpi0inFV_stack_10->SetBinContent(7,111.8481);
   hCCpi0inFV_stack_10->SetBinContent(8,145.806);
   hCCpi0inFV_stack_10->SetBinContent(9,137.2088);
   hCCpi0inFV_stack_10->SetBinContent(10,145.3572);
   hCCpi0inFV_stack_10->SetBinContent(11,127.3476);
   hCCpi0inFV_stack_10->SetBinContent(12,99.02696);
   hCCpi0inFV_stack_10->SetBinContent(13,84.01817);
   hCCpi0inFV_stack_10->SetBinContent(14,64.54025);
   hCCpi0inFV_stack_10->SetBinContent(15,50.3058);
   hCCpi0inFV_stack_10->SetBinContent(16,36.12365);
   hCCpi0inFV_stack_10->SetBinContent(17,22.37291);
   hCCpi0inFV_stack_10->SetBinContent(18,21.36713);
   hCCpi0inFV_stack_10->SetBinContent(19,14.83309);
   hCCpi0inFV_stack_10->SetBinContent(20,15.2784);
   hCCpi0inFV_stack_10->SetBinContent(21,10.85837);
   hCCpi0inFV_stack_10->SetBinContent(22,8.251192);
   hCCpi0inFV_stack_10->SetBinContent(23,5.221569);
   hCCpi0inFV_stack_10->SetBinContent(24,5.388);
   hCCpi0inFV_stack_10->SetBinContent(25,5.468674);
   hCCpi0inFV_stack_10->SetBinContent(26,16.31859);
   hCCpi0inFV_stack_10->SetBinError(3,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(4,1.316585);
   hCCpi0inFV_stack_10->SetBinError(5,2.717423);
   hCCpi0inFV_stack_10->SetBinError(6,4.183145);
   hCCpi0inFV_stack_10->SetBinError(7,5.303604);
   hCCpi0inFV_stack_10->SetBinError(8,6.034356);
   hCCpi0inFV_stack_10->SetBinError(9,5.82548);
   hCCpi0inFV_stack_10->SetBinError(10,6.053156);
   hCCpi0inFV_stack_10->SetBinError(11,5.639132);
   hCCpi0inFV_stack_10->SetBinError(12,5.009753);
   hCCpi0inFV_stack_10->SetBinError(13,4.622747);
   hCCpi0inFV_stack_10->SetBinError(14,4.001459);
   hCCpi0inFV_stack_10->SetBinError(15,3.63784);
   hCCpi0inFV_stack_10->SetBinError(16,3.095222);
   hCCpi0inFV_stack_10->SetBinError(17,2.350124);
   hCCpi0inFV_stack_10->SetBinError(18,2.294632);
   hCCpi0inFV_stack_10->SetBinError(19,1.847636);
   hCCpi0inFV_stack_10->SetBinError(20,1.946209);
   hCCpi0inFV_stack_10->SetBinError(21,1.618767);
   hCCpi0inFV_stack_10->SetBinError(22,1.468672);
   hCCpi0inFV_stack_10->SetBinError(23,1.062453);
   hCCpi0inFV_stack_10->SetBinError(24,1.074649);
   hCCpi0inFV_stack_10->SetBinError(25,1.21032);
   hCCpi0inFV_stack_10->SetBinError(26,2.020389);
   hCCpi0inFV_stack_10->SetEntries(5273);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,0.1967154);
   hNCinFV_stack_11->SetBinContent(6,0.9303237);
   hNCinFV_stack_11->SetBinContent(7,1.515398);
   hNCinFV_stack_11->SetBinContent(8,1.660551);
   hNCinFV_stack_11->SetBinContent(9,1.855576);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(11,0.5901461);
   hNCinFV_stack_11->SetBinContent(13,0.785171);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.1967154);
   hNCinFV_stack_11->SetBinError(6,0.4814682);
   hNCinFV_stack_11->SetBinError(7,0.588146);
   hNCinFV_stack_11->SetBinError(8,0.650847);
   hNCinFV_stack_11->SetBinError(9,0.6794384);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(11,0.340721);
   hNCinFV_stack_11->SetBinError(13,0.3925882);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetEntries(43);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(3,0.426378);
   hnumuCCinFV_stack_12->SetBinContent(4,10.06195);
   hnumuCCinFV_stack_12->SetBinContent(5,22.9704);
   hnumuCCinFV_stack_12->SetBinContent(6,28.3902);
   hnumuCCinFV_stack_12->SetBinContent(7,44.57645);
   hnumuCCinFV_stack_12->SetBinContent(8,41.02496);
   hnumuCCinFV_stack_12->SetBinContent(9,43.88511);
   hnumuCCinFV_stack_12->SetBinContent(10,34.26405);
   hnumuCCinFV_stack_12->SetBinContent(11,30.37892);
   hnumuCCinFV_stack_12->SetBinContent(12,30.52433);
   hnumuCCinFV_stack_12->SetBinContent(13,16.06517);
   hnumuCCinFV_stack_12->SetBinContent(14,17.03933);
   hnumuCCinFV_stack_12->SetBinContent(15,11.43242);
   hnumuCCinFV_stack_12->SetBinContent(16,11.45657);
   hnumuCCinFV_stack_12->SetBinContent(17,6.048676);
   hnumuCCinFV_stack_12->SetBinContent(18,5.569384);
   hnumuCCinFV_stack_12->SetBinContent(19,4.83481);
   hnumuCCinFV_stack_12->SetBinContent(20,3.74003);
   hnumuCCinFV_stack_12->SetBinContent(21,3.424227);
   hnumuCCinFV_stack_12->SetBinContent(22,3.071134);
   hnumuCCinFV_stack_12->SetBinContent(23,2.344287);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(25,1.38971);
   hnumuCCinFV_stack_12->SetBinContent(26,5.023681);
   hnumuCCinFV_stack_12->SetBinError(3,0.3025871);
   hnumuCCinFV_stack_12->SetBinError(4,1.715077);
   hnumuCCinFV_stack_12->SetBinError(5,3.209334);
   hnumuCCinFV_stack_12->SetBinError(6,2.936917);
   hnumuCCinFV_stack_12->SetBinError(7,3.965977);
   hnumuCCinFV_stack_12->SetBinError(8,3.317749);
   hnumuCCinFV_stack_12->SetBinError(9,3.441023);
   hnumuCCinFV_stack_12->SetBinError(10,2.93219);
   hnumuCCinFV_stack_12->SetBinError(11,2.85981);
   hnumuCCinFV_stack_12->SetBinError(12,2.892307);
   hnumuCCinFV_stack_12->SetBinError(13,2.058122);
   hnumuCCinFV_stack_12->SetBinError(14,2.500346);
   hnumuCCinFV_stack_12->SetBinError(15,1.684208);
   hnumuCCinFV_stack_12->SetBinError(16,1.678301);
   hnumuCCinFV_stack_12->SetBinError(17,1.204133);
   hnumuCCinFV_stack_12->SetBinError(18,1.144621);
   hnumuCCinFV_stack_12->SetBinError(19,1.091997);
   hnumuCCinFV_stack_12->SetBinError(20,0.9670536);
   hnumuCCinFV_stack_12->SetBinError(21,0.8770549);
   hnumuCCinFV_stack_12->SetBinError(22,0.9202356);
   hnumuCCinFV_stack_12->SetBinError(23,0.8101654);
   hnumuCCinFV_stack_12->SetBinError(24,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(25,0.6559354);
   hnumuCCinFV_stack_12->SetBinError(26,1.194349);
   hnumuCCinFV_stack_12->SetEntries(1565);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.970368);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(26,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.4993105);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.5197486);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.5197486);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.3401776);
   hnueCCinFV_stack_13->SetEntries(23);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__23->SetBinContent(3,1.77103);
   hmcerror__23->SetBinContent(4,20.86494);
   hmcerror__23->SetBinContent(5,58.47006);
   hmcerror__23->SetBinContent(6,108.7323);
   hmcerror__23->SetBinContent(7,169.4808);
   hmcerror__23->SetBinContent(8,206.2733);
   hmcerror__23->SetBinContent(9,206.8256);
   hmcerror__23->SetBinContent(10,191.5417);
   hmcerror__23->SetBinContent(11,172.0975);
   hmcerror__23->SetBinContent(12,138.4706);
   hmcerror__23->SetBinContent(13,108.716);
   hmcerror__23->SetBinContent(14,87.44096);
   hmcerror__23->SetBinContent(15,68.56836);
   hmcerror__23->SetBinContent(16,49.21716);
   hmcerror__23->SetBinContent(17,31.16489);
   hmcerror__23->SetBinContent(18,27.79648);
   hmcerror__23->SetBinContent(19,22.17885);
   hmcerror__23->SetBinContent(20,21.64736);
   hmcerror__23->SetBinContent(21,14.70098);
   hmcerror__23->SetBinContent(22,11.78772);
   hmcerror__23->SetBinContent(23,7.790472);
   hmcerror__23->SetBinContent(24,6.32087);
   hmcerror__23->SetBinContent(25,6.858384);
   hmcerror__23->SetBinContent(26,25.96491);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,0.3895343);
   hmcerror__23->SetBinError(3,0.9820913);
   hmcerror__23->SetBinError(4,4.602455);
   hmcerror__23->SetBinError(5,11.98844);
   hmcerror__23->SetBinError(6,23.93264);
   hmcerror__23->SetBinError(7,38.01659);
   hmcerror__23->SetBinError(8,45.30505);
   hmcerror__23->SetBinError(9,43.86966);
   hmcerror__23->SetBinError(10,45.65348);
   hmcerror__23->SetBinError(11,39.32551);
   hmcerror__23->SetBinError(12,32.54383);
   hmcerror__23->SetBinError(13,26.39333);
   hmcerror__23->SetBinError(14,20.12115);
   hmcerror__23->SetBinError(15,15.81844);
   hmcerror__23->SetBinError(16,12.22108);
   hmcerror__23->SetBinError(17,7.585089);
   hmcerror__23->SetBinError(18,6.255562);
   hmcerror__23->SetBinError(19,7.631153);
   hmcerror__23->SetBinError(20,5.138567);
   hmcerror__23->SetBinError(21,3.767799);
   hmcerror__23->SetBinError(22,3.20316);
   hmcerror__23->SetBinError(23,2.880896);
   hmcerror__23->SetBinError(24,1.929401);
   hmcerror__23->SetBinError(25,2.075875);
   hmcerror__23->SetBinError(26,4.635442);
   hmcerror__23->SetEntries(1748.127);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3029[25] = {
   0,
   0,
   0,
   22,
   80,
   152,
   225,
   222,
   195,
   183,
   186,
   100,
   104,
   69,
   58,
   46,
   46,
   18,
   17,
   18,
   15,
   6,
   6,
   8,
   3};
   Double_t _felx3029[25] = {
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
   50,
   50,
   50};
   Double_t _fely3029[25] = {
   0,
   0,
   0,
   4.8417,
   9.0683,
   12.32883,
   15,
   14.89966,
   13.96424,
   13.52775,
   13.63818,
   10.1212,
   10.19804,
   8.4327,
   7.7446,
   6.9153,
   6.9153,
   4.4008,
   4.2835,
   4.4008,
   4.0385,
   2.67925,
   2.67925,
   3.0307,
   2.143368};
   Double_t _fehx3029[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3029[25] = {
   1.1478,
   1.1478,
   1.1478,
   4.6299,
   8.8665,
   12.32883,
   15,
   14.89966,
   13.96424,
   13.52775,
   13.63818,
   9.92,
   10.19804,
   8.2304,
   7.5415,
   6.7108,
   6.7108,
   4.1858,
   4.0673,
   4.1858,
   3.8197,
   2.41858,
   2.41858,
   2.7896,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,2750);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(264);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=38.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1779.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.3","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.5","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.3","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  18.2","F");

   ci = 1531;
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

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1215.5","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.7","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 373.8","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.2","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   
   Double_t _fx3030[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
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
   50,
   50,
   50};
   Double_t _fely3030[25] = {
   0,
   0,
   0.554531,
   0.2205832,
   0.2050356,
   0.220106,
   0.2243121,
   0.2196361,
   0.2121094,
   0.2383475,
   0.2285071,
   0.2350235,
   0.2427731,
   0.2301112,
   0.230696,
   0.2483093,
   0.2433857,
   0.2250487,
   0.3440734,
   0.2373762,
   0.2562957,
   0.271737,
   0.3697974,
   0.305243,
   0.3026769};
   Double_t _fehx3030[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3030[25] = {
   0,
   0,
   0.554531,
   0.2205832,
   0.2050356,
   0.220106,
   0.2243121,
   0.2196361,
   0.2121094,
   0.2383475,
   0.2285071,
   0.2350235,
   0.2427731,
   0.2301112,
   0.230696,
   0.2483093,
   0.2433857,
   0.2250487,
   0.3440734,
   0.2373762,
   0.2562957,
   0.271737,
   0.3697974,
   0.305243,
   0.3026769};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,2750);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
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
   50,
   50,
   50};
   Double_t _fely3031[25] = {
   0,
   0,
   0.554531,
   0.2205832,
   0.2050356,
   0.220106,
   0.2243121,
   0.2196361,
   0.2121094,
   0.2383475,
   0.2285071,
   0.2350235,
   0.2427731,
   0.2301112,
   0.230696,
   0.2483093,
   0.2433857,
   0.2250487,
   0.3440734,
   0.2373762,
   0.2562957,
   0.271737,
   0.3697974,
   0.305243,
   0.3026769};
   Double_t _fehx3031[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3031[25] = {
   0,
   0,
   0.554531,
   0.2205832,
   0.2050356,
   0.220106,
   0.2243121,
   0.2196361,
   0.2121094,
   0.2383475,
   0.2285071,
   0.2350235,
   0.2427731,
   0.2301112,
   0.230696,
   0.2483093,
   0.2433857,
   0.2250487,
   0.3440734,
   0.2373762,
   0.2562957,
   0.271737,
   0.3697974,
   0.305243,
   0.3026769};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,2750);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3032[25] = {
   10,
   10,
   0,
   1.0544,
   1.368222,
   1.397928,
   1.327584,
   1.076242,
   0.9428234,
   0.9554056,
   1.080782,
   0.7221751,
   0.9566206,
   0.7891038,
   0.8458712,
   0.9346333,
   1.47602,
   0.6475639,
   0.766496,
   0.8315102,
   1.02034,
   0.5090042,
   0.7701716,
   1.265649,
   0.4374208};
   Double_t _felx3032[25] = {
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
   50,
   50,
   50};
   Double_t _fely3032[25] = {
   0,
   0,
   0,
   0.2320496,
   0.155093,
   0.1133869,
   0.0885056,
   0.07223265,
   0.06751698,
   0.07062561,
   0.07924681,
   0.07309278,
   0.09380436,
   0.09643878,
   0.1129471,
   0.1405059,
   0.2218939,
   0.1583222,
   0.1931344,
   0.203295,
   0.2747095,
   0.2272916,
   0.3439137,
   0.4794751,
   0.3125179};
   Double_t _fehx3032[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3032[25] = {
   0,
   0,
   0.6480973,
   0.2218986,
   0.1516417,
   0.1133869,
   0.0885056,
   0.07223265,
   0.06751698,
   0.07062561,
   0.07924681,
   0.07163977,
   0.09380436,
   0.09412522,
   0.1099851,
   0.1363508,
   0.215332,
   0.1505874,
   0.1833864,
   0.1933631,
   0.2598261,
   0.2051779,
   0.3104536,
   0.4413317,
   0.2514032};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,2750);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,2500,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
