#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 18:31:52 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",242,172,1200,900);
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
   pad1->Range(-92.30769,-15.62,676.9231,1727.243);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__4->SetBinContent(1,23.39321);
   hmc__4->SetBinContent(2,112.1238);
   hmc__4->SetBinContent(3,325.4072);
   hmc__4->SetBinContent(4,606.2158);
   hmc__4->SetBinContent(5,699.7377);
   hmc__4->SetBinContent(6,678.954);
   hmc__4->SetBinContent(7,537.0449);
   hmc__4->SetBinContent(8,437.9239);
   hmc__4->SetBinContent(9,349.8331);
   hmc__4->SetBinContent(10,278.5715);
   hmc__4->SetBinContent(11,219.7729);
   hmc__4->SetBinContent(12,171.449);
   hmc__4->SetBinContent(13,122.041);
   hmc__4->SetBinContent(14,109.9939);
   hmc__4->SetBinContent(15,83.76044);
   hmc__4->SetBinContent(16,69.38808);
   hmc__4->SetBinContent(17,53.23914);
   hmc__4->SetBinContent(18,38.74782);
   hmc__4->SetBinContent(19,34.72212);
   hmc__4->SetBinContent(20,31.95483);
   hmc__4->SetBinContent(21,200.6752);
   hmc__4->SetBinError(1,10.29433);
   hmc__4->SetBinError(2,34.61477);
   hmc__4->SetBinError(3,94.97442);
   hmc__4->SetBinError(4,176.4619);
   hmc__4->SetBinError(5,204.4844);
   hmc__4->SetBinError(6,190.5);
   hmc__4->SetBinError(7,153.9371);
   hmc__4->SetBinError(8,126.2402);
   hmc__4->SetBinError(9,105.7052);
   hmc__4->SetBinError(10,86.27111);
   hmc__4->SetBinError(11,67.5796);
   hmc__4->SetBinError(12,55.97848);
   hmc__4->SetBinError(13,43.52467);
   hmc__4->SetBinError(14,37.94094);
   hmc__4->SetBinError(15,28.2462);
   hmc__4->SetBinError(16,25.17193);
   hmc__4->SetBinError(17,17.52574);
   hmc__4->SetBinError(18,15.12021);
   hmc__4->SetBinError(19,16.11424);
   hmc__4->SetBinError(20,17.5115);
   hmc__4->SetBinError(21,70.92625);
   hmc__4->SetMinimum(-15.62);
   hmc__4->SetMaximum(1640.1);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,600);
   hs2_stack_2->SetMinimum(-8.758691e-09);
   hs2_stack_2->SetMaximum(734.7245);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,2.171741);
   hbadmatch_stack_1->SetBinContent(2,7.550815);
   hbadmatch_stack_1->SetBinContent(3,14.82617);
   hbadmatch_stack_1->SetBinContent(4,17.94606);
   hbadmatch_stack_1->SetBinContent(5,19.61629);
   hbadmatch_stack_1->SetBinContent(6,16.81224);
   hbadmatch_stack_1->SetBinContent(7,15.50015);
   hbadmatch_stack_1->SetBinContent(8,8.341505);
   hbadmatch_stack_1->SetBinContent(9,2.732957);
   hbadmatch_stack_1->SetBinContent(10,4.899032);
   hbadmatch_stack_1->SetBinContent(11,1.610524);
   hbadmatch_stack_1->SetBinContent(12,1.159966);
   hbadmatch_stack_1->SetBinContent(13,1.040423);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.6625813);
   hbadmatch_stack_1->SetBinContent(16,1.055672);
   hbadmatch_stack_1->SetBinContent(17,0.9610817);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,1.416678);
   hbadmatch_stack_1->SetBinError(1,0.801119);
   hbadmatch_stack_1->SetBinError(2,1.592622);
   hbadmatch_stack_1->SetBinError(3,2.0362);
   hbadmatch_stack_1->SetBinError(4,2.111152);
   hbadmatch_stack_1->SetBinError(5,2.51892);
   hbadmatch_stack_1->SetBinError(6,2.202206);
   hbadmatch_stack_1->SetBinError(7,3.204041);
   hbadmatch_stack_1->SetBinError(8,1.485122);
   hbadmatch_stack_1->SetBinError(9,0.9507832);
   hbadmatch_stack_1->SetBinError(10,1.939247);
   hbadmatch_stack_1->SetBinError(11,0.6421794);
   hbadmatch_stack_1->SetBinError(12,0.7124229);
   hbadmatch_stack_1->SetBinError(13,0.4682724);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.3431829);
   hbadmatch_stack_1->SetBinError(16,0.5971549);
   hbadmatch_stack_1->SetBinError(17,0.4948321);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.7228745);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,8.1391);
   hext_stack_2->SetBinContent(2,22.37838);
   hext_stack_2->SetBinContent(3,50.24714);
   hext_stack_2->SetBinContent(4,73.04805);
   hext_stack_2->SetBinContent(5,82.34622);
   hext_stack_2->SetBinContent(6,80.1824);
   hext_stack_2->SetBinContent(7,46.29087);
   hext_stack_2->SetBinContent(8,23.26219);
   hext_stack_2->SetBinContent(9,22.58303);
   hext_stack_2->SetBinContent(10,22.22273);
   hext_stack_2->SetBinContent(11,8.816616);
   hext_stack_2->SetBinContent(12,6.482403);
   hext_stack_2->SetBinContent(13,5.800478);
   hext_stack_2->SetBinContent(14,3.006186);
   hext_stack_2->SetBinContent(15,4.345666);
   hext_stack_2->SetBinContent(16,1.461993);
   hext_stack_2->SetBinContent(17,3.297453);
   hext_stack_2->SetBinContent(18,1.137595);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.973192);
   hext_stack_2->SetBinError(1,2.106102);
   hext_stack_2->SetBinError(2,3.03529);
   hext_stack_2->SetBinError(3,4.741865);
   hext_stack_2->SetBinError(4,5.767412);
   hext_stack_2->SetBinError(5,6.233891);
   hext_stack_2->SetBinError(6,6.313046);
   hext_stack_2->SetBinError(7,4.714395);
   hext_stack_2->SetBinError(8,3.10963);
   hext_stack_2->SetBinError(9,3.129328);
   hext_stack_2->SetBinError(10,3.270086);
   hext_stack_2->SetBinError(11,1.95993);
   hext_stack_2->SetBinError(12,1.666529);
   hext_stack_2->SetBinError(13,1.799038);
   hext_stack_2->SetBinError(14,1.068791);
   hext_stack_2->SetBinError(15,1.579311);
   hext_stack_2->SetBinError(16,0.7356036);
   hext_stack_2->SetBinError(17,1.384641);
   hext_stack_2->SetBinError(18,0.6602113);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.5618727);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(1,0.3652534);
   hdirt_stack_3->SetBinContent(2,2.887014);
   hdirt_stack_3->SetBinContent(3,8.094124);
   hdirt_stack_3->SetBinContent(4,7.20507);
   hdirt_stack_3->SetBinContent(5,10.4084);
   hdirt_stack_3->SetBinContent(6,7.030943);
   hdirt_stack_3->SetBinContent(7,2.929562);
   hdirt_stack_3->SetBinContent(8,2.609349);
   hdirt_stack_3->SetBinContent(9,1.997854);
   hdirt_stack_3->SetBinContent(10,2.18401);
   hdirt_stack_3->SetBinContent(11,0.3888685);
   hdirt_stack_3->SetBinContent(12,1.04839);
   hdirt_stack_3->SetBinContent(13,0.1580268);
   hdirt_stack_3->SetBinContent(15,1.330832);
   hdirt_stack_3->SetBinContent(16,0.4080678);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinError(1,0.3652534);
   hdirt_stack_3->SetBinError(2,0.811681);
   hdirt_stack_3->SetBinError(3,1.484181);
   hdirt_stack_3->SetBinError(4,1.557368);
   hdirt_stack_3->SetBinError(5,1.692765);
   hdirt_stack_3->SetBinError(6,1.448907);
   hdirt_stack_3->SetBinError(7,0.777713);
   hdirt_stack_3->SetBinError(8,0.9149547);
   hdirt_stack_3->SetBinError(9,0.7396999);
   hdirt_stack_3->SetBinError(10,0.7406213);
   hdirt_stack_3->SetBinError(11,0.2786036);
   hdirt_stack_3->SetBinError(12,0.5584383);
   hdirt_stack_3->SetBinError(13,0.1580268);
   hdirt_stack_3->SetBinError(15,1.107563);
   hdirt_stack_3->SetBinError(16,0.4080678);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,1.51494);
   houtFV_stack_4->SetBinContent(2,11.71838);
   houtFV_stack_4->SetBinContent(3,30.51693);
   houtFV_stack_4->SetBinContent(4,56.31348);
   houtFV_stack_4->SetBinContent(5,57.4451);
   houtFV_stack_4->SetBinContent(6,53.29105);
   houtFV_stack_4->SetBinContent(7,40.6946);
   houtFV_stack_4->SetBinContent(8,29.1472);
   houtFV_stack_4->SetBinContent(9,24.43658);
   houtFV_stack_4->SetBinContent(10,18.37876);
   houtFV_stack_4->SetBinContent(11,11.75991);
   houtFV_stack_4->SetBinContent(12,8.072307);
   houtFV_stack_4->SetBinContent(13,4.526233);
   houtFV_stack_4->SetBinContent(14,5.286909);
   houtFV_stack_4->SetBinContent(15,3.623984);
   houtFV_stack_4->SetBinContent(16,4.138583);
   houtFV_stack_4->SetBinContent(17,1.710423);
   houtFV_stack_4->SetBinContent(18,0.1777884);
   houtFV_stack_4->SetBinContent(19,2.874457);
   houtFV_stack_4->SetBinContent(20,1.368555);
   houtFV_stack_4->SetBinContent(21,4.128413);
   houtFV_stack_4->SetBinError(1,0.6229035);
   houtFV_stack_4->SetBinError(2,1.736209);
   houtFV_stack_4->SetBinError(3,2.743508);
   houtFV_stack_4->SetBinError(4,3.804001);
   houtFV_stack_4->SetBinError(5,3.77489);
   houtFV_stack_4->SetBinError(6,3.636411);
   houtFV_stack_4->SetBinError(7,3.220616);
   houtFV_stack_4->SetBinError(8,2.640212);
   houtFV_stack_4->SetBinError(9,2.476643);
   houtFV_stack_4->SetBinError(10,2.144092);
   houtFV_stack_4->SetBinError(11,1.674167);
   houtFV_stack_4->SetBinError(12,1.376792);
   houtFV_stack_4->SetBinError(13,1.010326);
   houtFV_stack_4->SetBinError(14,1.093253);
   houtFV_stack_4->SetBinError(15,0.9471762);
   houtFV_stack_4->SetBinError(16,0.9484784);
   houtFV_stack_4->SetBinError(17,0.6196373);
   houtFV_stack_4->SetBinError(18,0.1777884);
   houtFV_stack_4->SetBinError(19,0.9021071);
   houtFV_stack_4->SetBinError(20,0.5172691);
   houtFV_stack_4->SetBinError(21,1.080333);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4074285);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.594795);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.54311);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,7.698966);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,10.34473);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,10.34803);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,9.003933);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.660618);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,8.424284);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.090322);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.394172);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.996919);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.579689);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.436887);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.963573);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.532272);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.9040803);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.215986);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.186434);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,10.44384);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2241206);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.443771);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.835948);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9948959);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.207801);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.129957);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.063157);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.067641);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.164398);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8945212);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6807176);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8998452);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.768145);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.315786);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5145766);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3580462);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3109375);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5114216);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4123259);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.378145);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0339179);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3183827);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.286359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.258987);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.150329);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.008209);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.822883);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.08677);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9354773);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8042103);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3584656);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.429197);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2289294);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2573417);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3314272);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05405053);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2408437);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3523315);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02405068);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08938846);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2595826);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5474327);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4148144);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3952476);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3843874);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4760819);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2269758);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3070188);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1553146);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1858667);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1281278);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1379679);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1884661);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04087859);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1416163);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2350932);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.23837);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.42349);
   hNCpi0inFVres_stack_7->SetBinContent(3,103.7232);
   hNCpi0inFVres_stack_7->SetBinContent(4,230.8712);
   hNCpi0inFVres_stack_7->SetBinContent(5,276.3826);
   hNCpi0inFVres_stack_7->SetBinContent(6,264.4888);
   hNCpi0inFVres_stack_7->SetBinContent(7,216.6398);
   hNCpi0inFVres_stack_7->SetBinContent(8,189.4419);
   hNCpi0inFVres_stack_7->SetBinContent(9,143.2458);
   hNCpi0inFVres_stack_7->SetBinContent(10,101.8177);
   hNCpi0inFVres_stack_7->SetBinContent(11,86.58472);
   hNCpi0inFVres_stack_7->SetBinContent(12,62.81115);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.23618);
   hNCpi0inFVres_stack_7->SetBinContent(14,35.99636);
   hNCpi0inFVres_stack_7->SetBinContent(15,28.44698);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.55624);
   hNCpi0inFVres_stack_7->SetBinContent(17,18.57617);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.28799);
   hNCpi0inFVres_stack_7->SetBinContent(19,13.00303);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.67808);
   hNCpi0inFVres_stack_7->SetBinContent(21,57.48933);
   hNCpi0inFVres_stack_7->SetBinError(1,0.407365);
   hNCpi0inFVres_stack_7->SetBinError(2,1.638522);
   hNCpi0inFVres_stack_7->SetBinError(3,3.196221);
   hNCpi0inFVres_stack_7->SetBinError(4,4.903451);
   hNCpi0inFVres_stack_7->SetBinError(5,5.260341);
   hNCpi0inFVres_stack_7->SetBinError(6,5.175049);
   hNCpi0inFVres_stack_7->SetBinError(7,4.694697);
   hNCpi0inFVres_stack_7->SetBinError(8,4.606429);
   hNCpi0inFVres_stack_7->SetBinError(9,3.855822);
   hNCpi0inFVres_stack_7->SetBinError(10,3.17328);
   hNCpi0inFVres_stack_7->SetBinError(11,3.010406);
   hNCpi0inFVres_stack_7->SetBinError(12,2.598695);
   hNCpi0inFVres_stack_7->SetBinError(13,1.989078);
   hNCpi0inFVres_stack_7->SetBinError(14,1.898857);
   hNCpi0inFVres_stack_7->SetBinError(15,1.907494);
   hNCpi0inFVres_stack_7->SetBinError(16,1.802181);
   hNCpi0inFVres_stack_7->SetBinError(17,1.600945);
   hNCpi0inFVres_stack_7->SetBinError(18,1.425787);
   hNCpi0inFVres_stack_7->SetBinError(19,1.431398);
   hNCpi0inFVres_stack_7->SetBinError(20,1.367773);
   hNCpi0inFVres_stack_7->SetBinError(21,3.233813);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.234828);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.170901);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.86428);
   hNCpi0inFVdis_stack_8->SetBinContent(4,47.05369);
   hNCpi0inFVdis_stack_8->SetBinContent(5,46.70149);
   hNCpi0inFVdis_stack_8->SetBinContent(6,43.63689);
   hNCpi0inFVdis_stack_8->SetBinContent(7,36.74397);
   hNCpi0inFVdis_stack_8->SetBinContent(8,29.00035);
   hNCpi0inFVdis_stack_8->SetBinContent(9,24.27287);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.74551);
   hNCpi0inFVdis_stack_8->SetBinContent(11,16.67715);
   hNCpi0inFVdis_stack_8->SetBinContent(12,17.10164);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.691921);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.55655);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.444403);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.741962);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.936909);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.776422);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.27147);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.216996);
   hNCpi0inFVdis_stack_8->SetBinContent(21,34.53953);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4207526);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4999545);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.510996);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.248293);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.097455);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.153222);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.996435);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.827543);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.663287);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.508531);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.30716);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.476662);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.083451);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.350396);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.072424);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.13872);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.072536);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8122227);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6049972);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.791722);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.482052);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.07673115);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2100126);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3372378);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1416358);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2146235);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04881885);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1174788);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1870499);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.07411073);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.0878631);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.9786171);
   hCCpi0inFV_stack_10->SetBinContent(2,8.502851);
   hCCpi0inFV_stack_10->SetBinContent(3,38.94096);
   hCCpi0inFV_stack_10->SetBinContent(4,75.43213);
   hCCpi0inFV_stack_10->SetBinContent(5,92.30658);
   hCCpi0inFV_stack_10->SetBinContent(6,92.88187);
   hCCpi0inFV_stack_10->SetBinContent(7,81.32479);
   hCCpi0inFV_stack_10->SetBinContent(8,66.62016);
   hCCpi0inFV_stack_10->SetBinContent(9,61.89904);
   hCCpi0inFV_stack_10->SetBinContent(10,46.28283);
   hCCpi0inFV_stack_10->SetBinContent(11,43.97978);
   hCCpi0inFV_stack_10->SetBinContent(12,32.5075);
   hCCpi0inFV_stack_10->SetBinContent(13,26.33937);
   hCCpi0inFV_stack_10->SetBinContent(14,20.22462);
   hCCpi0inFV_stack_10->SetBinContent(15,16.29849);
   hCCpi0inFV_stack_10->SetBinContent(16,13.07574);
   hCCpi0inFV_stack_10->SetBinContent(17,8.899468);
   hCCpi0inFV_stack_10->SetBinContent(18,7.471093);
   hCCpi0inFV_stack_10->SetBinContent(19,7.712609);
   hCCpi0inFV_stack_10->SetBinContent(20,4.546195);
   hCCpi0inFV_stack_10->SetBinContent(21,29.69659);
   hCCpi0inFV_stack_10->SetBinError(1,0.5033021);
   hCCpi0inFV_stack_10->SetBinError(2,1.469024);
   hCCpi0inFV_stack_10->SetBinError(3,3.141085);
   hCCpi0inFV_stack_10->SetBinError(4,4.367195);
   hCCpi0inFV_stack_10->SetBinError(5,4.735274);
   hCCpi0inFV_stack_10->SetBinError(6,4.832721);
   hCCpi0inFV_stack_10->SetBinError(7,4.490117);
   hCCpi0inFV_stack_10->SetBinError(8,4.076966);
   hCCpi0inFV_stack_10->SetBinError(9,4.009764);
   hCCpi0inFV_stack_10->SetBinError(10,3.396919);
   hCCpi0inFV_stack_10->SetBinError(11,3.343011);
   hCCpi0inFV_stack_10->SetBinError(12,2.879584);
   hCCpi0inFV_stack_10->SetBinError(13,2.539434);
   hCCpi0inFV_stack_10->SetBinError(14,2.242202);
   hCCpi0inFV_stack_10->SetBinError(15,2.021124);
   hCCpi0inFV_stack_10->SetBinError(16,1.790924);
   hCCpi0inFV_stack_10->SetBinError(17,1.516492);
   hCCpi0inFV_stack_10->SetBinError(18,1.415931);
   hCCpi0inFV_stack_10->SetBinError(19,1.414892);
   hCCpi0inFV_stack_10->SetBinError(20,1.018699);
   hCCpi0inFV_stack_10->SetBinError(21,2.754534);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(1,3.292665);
   hNCinFV_stack_11->SetBinContent(2,13.11735);
   hNCinFV_stack_11->SetBinContent(3,23.84808);
   hNCinFV_stack_11->SetBinContent(4,39.30825);
   hNCinFV_stack_11->SetBinContent(5,48.17581);
   hNCinFV_stack_11->SetBinContent(6,50.56255);
   hNCinFV_stack_11->SetBinContent(7,39.34399);
   hNCinFV_stack_11->SetBinContent(8,40.2938);
   hNCinFV_stack_11->SetBinContent(9,28.50505);
   hNCinFV_stack_11->SetBinContent(10,23.37243);
   hNCinFV_stack_11->SetBinContent(11,21.49417);
   hNCinFV_stack_11->SetBinContent(12,18.1615);
   hNCinFV_stack_11->SetBinContent(13,15.79147);
   hNCinFV_stack_11->SetBinContent(14,16.30181);
   hNCinFV_stack_11->SetBinContent(15,10.51867);
   hNCinFV_stack_11->SetBinContent(16,7.533336);
   hNCinFV_stack_11->SetBinContent(17,6.148742);
   hNCinFV_stack_11->SetBinContent(18,5.683764);
   hNCinFV_stack_11->SetBinContent(19,3.125607);
   hNCinFV_stack_11->SetBinContent(20,3.630514);
   hNCinFV_stack_11->SetBinContent(21,26.81975);
   hNCinFV_stack_11->SetBinError(1,0.9465724);
   hNCinFV_stack_11->SetBinError(2,1.861689);
   hNCinFV_stack_11->SetBinError(3,2.445339);
   hNCinFV_stack_11->SetBinError(4,3.11661);
   hNCinFV_stack_11->SetBinError(5,3.636423);
   hNCinFV_stack_11->SetBinError(6,3.592911);
   hNCinFV_stack_11->SetBinError(7,3.131275);
   hNCinFV_stack_11->SetBinError(8,3.556936);
   hNCinFV_stack_11->SetBinError(9,3.162578);
   hNCinFV_stack_11->SetBinError(10,2.588666);
   hNCinFV_stack_11->SetBinError(11,2.63141);
   hNCinFV_stack_11->SetBinError(12,2.399406);
   hNCinFV_stack_11->SetBinError(13,2.347173);
   hNCinFV_stack_11->SetBinError(14,2.542965);
   hNCinFV_stack_11->SetBinError(15,1.711791);
   hNCinFV_stack_11->SetBinError(16,1.361693);
   hNCinFV_stack_11->SetBinError(17,1.374616);
   hNCinFV_stack_11->SetBinError(18,1.722454);
   hNCinFV_stack_11->SetBinError(19,0.9586159);
   hNCinFV_stack_11->SetBinError(20,1.097623);
   hNCinFV_stack_11->SetBinError(21,3.15094);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,3.186527);
   hnumuCCinFV_stack_12->SetBinContent(2,14.18207);
   hnumuCCinFV_stack_12->SetBinContent(3,27.78941);
   hnumuCCinFV_stack_12->SetBinContent(4,47.20293);
   hnumuCCinFV_stack_12->SetBinContent(5,53.19106);
   hnumuCCinFV_stack_12->SetBinContent(6,52.31722);
   hnumuCCinFV_stack_12->SetBinContent(7,42.06657);
   hnumuCCinFV_stack_12->SetBinContent(8,36.66638);
   hnumuCCinFV_stack_12->SetBinContent(9,29.77977);
   hnumuCCinFV_stack_12->SetBinContent(10,27.2312);
   hnumuCCinFV_stack_12->SetBinContent(11,21.0143);
   hnumuCCinFV_stack_12->SetBinContent(12,18.88692);
   hnumuCCinFV_stack_12->SetBinContent(13,10.69188);
   hnumuCCinFV_stack_12->SetBinContent(14,10.79967);
   hnumuCCinFV_stack_12->SetBinContent(15,6.572969);
   hnumuCCinFV_stack_12->SetBinContent(16,5.815915);
   hnumuCCinFV_stack_12->SetBinContent(17,3.537495);
   hnumuCCinFV_stack_12->SetBinContent(18,2.714051);
   hnumuCCinFV_stack_12->SetBinContent(19,2.685091);
   hnumuCCinFV_stack_12->SetBinContent(20,4.231722);
   hnumuCCinFV_stack_12->SetBinContent(21,18.84065);
   hnumuCCinFV_stack_12->SetBinError(1,1.065526);
   hnumuCCinFV_stack_12->SetBinError(2,2.192605);
   hnumuCCinFV_stack_12->SetBinError(3,3.09618);
   hnumuCCinFV_stack_12->SetBinError(4,4.303994);
   hnumuCCinFV_stack_12->SetBinError(5,4.456759);
   hnumuCCinFV_stack_12->SetBinError(6,4.556805);
   hnumuCCinFV_stack_12->SetBinError(7,3.396553);
   hnumuCCinFV_stack_12->SetBinError(8,3.280631);
   hnumuCCinFV_stack_12->SetBinError(9,2.912396);
   hnumuCCinFV_stack_12->SetBinError(10,3.040474);
   hnumuCCinFV_stack_12->SetBinError(11,2.4283);
   hnumuCCinFV_stack_12->SetBinError(12,2.590678);
   hnumuCCinFV_stack_12->SetBinError(13,1.601709);
   hnumuCCinFV_stack_12->SetBinError(14,1.688952);
   hnumuCCinFV_stack_12->SetBinError(15,1.327881);
   hnumuCCinFV_stack_12->SetBinError(16,1.236408);
   hnumuCCinFV_stack_12->SetBinError(17,0.9656348);
   hnumuCCinFV_stack_12->SetBinError(18,0.8059068);
   hnumuCCinFV_stack_12->SetBinError(19,0.8792085);
   hnumuCCinFV_stack_12->SetBinError(20,1.046542);
   hnumuCCinFV_stack_12->SetBinError(21,3.21174);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,1.465735);
   hnueCCinFV_stack_13->SetBinContent(4,2.695686);
   hnueCCinFV_stack_13->SetBinContent(5,3.173257);
   hnueCCinFV_stack_13->SetBinContent(6,5.182482);
   hnueCCinFV_stack_13->SetBinContent(7,3.339716);
   hnueCCinFV_stack_13->SetBinContent(8,1.431546);
   hnueCCinFV_stack_13->SetBinContent(9,0.7840414);
   hnueCCinFV_stack_13->SetBinContent(10,2.079783);
   hnueCCinFV_stack_13->SetBinContent(11,0.9980428);
   hnueCCinFV_stack_13->SetBinContent(12,0.3937986);
   hnueCCinFV_stack_13->SetBinContent(13,0.5391986);
   hnueCCinFV_stack_13->SetBinContent(14,0.7880902);
   hnueCCinFV_stack_13->SetBinContent(15,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(16,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(17,0.5850745);
   hnueCCinFV_stack_13->SetBinContent(18,0.2016043);
   hnueCCinFV_stack_13->SetBinContent(19,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(21,15.75602);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.7631671);
   hnueCCinFV_stack_13->SetBinError(4,1.383109);
   hnueCCinFV_stack_13->SetBinError(5,1.099393);
   hnueCCinFV_stack_13->SetBinError(6,1.2673);
   hnueCCinFV_stack_13->SetBinError(7,1.127126);
   hnueCCinFV_stack_13->SetBinError(8,0.5980178);
   hnueCCinFV_stack_13->SetBinError(9,0.4635823);
   hnueCCinFV_stack_13->SetBinError(10,1.235543);
   hnueCCinFV_stack_13->SetBinError(11,0.5314795);
   hnueCCinFV_stack_13->SetBinError(12,0.2781978);
   hnueCCinFV_stack_13->SetBinError(13,0.3921371);
   hnueCCinFV_stack_13->SetBinError(14,0.4663704);
   hnueCCinFV_stack_13->SetBinError(15,0.4379386);
   hnueCCinFV_stack_13->SetBinError(16,0.4670934);
   hnueCCinFV_stack_13->SetBinError(17,0.337793);
   hnueCCinFV_stack_13->SetBinError(18,0.1967761);
   hnueCCinFV_stack_13->SetBinError(19,0.3963213);
   hnueCCinFV_stack_13->SetBinError(21,2.595081);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__5->SetBinContent(1,23.39321);
   hmcerror__5->SetBinContent(2,112.1238);
   hmcerror__5->SetBinContent(3,325.4072);
   hmcerror__5->SetBinContent(4,606.2158);
   hmcerror__5->SetBinContent(5,699.7377);
   hmcerror__5->SetBinContent(6,678.954);
   hmcerror__5->SetBinContent(7,537.0449);
   hmcerror__5->SetBinContent(8,437.9239);
   hmcerror__5->SetBinContent(9,349.8331);
   hmcerror__5->SetBinContent(10,278.5715);
   hmcerror__5->SetBinContent(11,219.7729);
   hmcerror__5->SetBinContent(12,171.449);
   hmcerror__5->SetBinContent(13,122.041);
   hmcerror__5->SetBinContent(14,109.9939);
   hmcerror__5->SetBinContent(15,83.76044);
   hmcerror__5->SetBinContent(16,69.38808);
   hmcerror__5->SetBinContent(17,53.23914);
   hmcerror__5->SetBinContent(18,38.74782);
   hmcerror__5->SetBinContent(19,34.72212);
   hmcerror__5->SetBinContent(20,31.95483);
   hmcerror__5->SetBinContent(21,200.6752);
   hmcerror__5->SetBinError(1,10.29433);
   hmcerror__5->SetBinError(2,34.61477);
   hmcerror__5->SetBinError(3,94.97442);
   hmcerror__5->SetBinError(4,176.4619);
   hmcerror__5->SetBinError(5,204.4844);
   hmcerror__5->SetBinError(6,190.5);
   hmcerror__5->SetBinError(7,153.9371);
   hmcerror__5->SetBinError(8,126.2402);
   hmcerror__5->SetBinError(9,105.7052);
   hmcerror__5->SetBinError(10,86.27111);
   hmcerror__5->SetBinError(11,67.5796);
   hmcerror__5->SetBinError(12,55.97848);
   hmcerror__5->SetBinError(13,43.52467);
   hmcerror__5->SetBinError(14,37.94094);
   hmcerror__5->SetBinError(15,28.2462);
   hmcerror__5->SetBinError(16,25.17193);
   hmcerror__5->SetBinError(17,17.52574);
   hmcerror__5->SetBinError(18,15.12021);
   hmcerror__5->SetBinError(19,16.11424);
   hmcerror__5->SetBinError(20,17.5115);
   hmcerror__5->SetBinError(21,70.92625);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3005[20] = {
   18,
   97,
   344,
   684,
   781,
   669,
   519,
   434,
   315,
   257,
   172,
   119,
   114,
   85,
   78,
   57,
   33,
   39,
   18,
   24};
   Double_t _felx3005[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3005[20] = {
   4.4008,
   9.9704,
   18.54724,
   26.15339,
   27.94638,
   25.86503,
   22.78157,
   20.83267,
   17.74824,
   16.03122,
   13.11488,
   10.90871,
   10.67708,
   9.3428,
   8.9562,
   7.679,
   5.8847,
   6.3813,
   4.4008,
   5.0476};
   Double_t _fehx3005[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3005[20] = {
   4.1858,
   9.769,
   18.54724,
   26.15339,
   27.94638,
   25.86503,
   22.78157,
   20.83267,
   17.74824,
   16.03122,
   13.11488,
   10.90871,
   10.67708,
   9.1411,
   8.7542,
   7.4757,
   5.6776,
   6.1757,
   4.1858,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,660);
   Graph_Graph3005->SetMinimum(12.23928);
   Graph_Graph3005->SetMaximum(888.4811);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4857.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 465.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 367.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  89.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1894.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  371.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 746.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 418.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 420.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 26.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3006[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3006[20] = {
   0.4400561,
   0.3087191,
   0.2918633,
   0.2910876,
   0.2922301,
   0.2805786,
   0.2866373,
   0.2882698,
   0.302159,
   0.3096911,
   0.3074975,
   0.3265023,
   0.3566397,
   0.3449367,
   0.337226,
   0.3627702,
   0.329189,
   0.3902208,
   0.4640914,
   0.548008};
   Double_t _fehx3006[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3006[20] = {
   0.4400561,
   0.3087191,
   0.2918633,
   0.2910876,
   0.2922301,
   0.2805786,
   0.2866373,
   0.2882698,
   0.302159,
   0.3096911,
   0.3074975,
   0.3265023,
   0.3566397,
   0.3449367,
   0.337226,
   0.3627702,
   0.329189,
   0.3902208,
   0.4640914,
   0.548008};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,660);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3007[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3007[20] = {
   0.18996,
   0.2232996,
   0.2559121,
   0.2821475,
   0.2865369,
   0.2758616,
   0.2779766,
   0.279687,
   0.2902586,
   0.2716871,
   0.2912782,
   0.2923964,
   0.3238279,
   0.2814129,
   0.2739403,
   0.2602524,
   0.2577064,
   0.2656323,
   0.2895288,
   0.3158186};
   Double_t _fehx3007[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3007[20] = {
   0.18996,
   0.2232996,
   0.2559121,
   0.2821475,
   0.2865369,
   0.2758616,
   0.2779766,
   0.279687,
   0.2902586,
   0.2716871,
   0.2912782,
   0.2923964,
   0.3238279,
   0.2814129,
   0.2739403,
   0.2602524,
   0.2577064,
   0.2656323,
   0.2895288,
   0.3158186};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,660);
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
   
   Double_t _fx3008[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3008[20] = {
   0.769454,
   0.8651148,
   1.057137,
   1.128311,
   1.116133,
   0.9853392,
   0.9663996,
   0.9910399,
   0.9004294,
   0.9225638,
   0.7826262,
   0.6940841,
   0.9341122,
   0.7727699,
   0.9312271,
   0.8214667,
   0.6198448,
   1.006508,
   0.5184015,
   0.7510602};
   Double_t _felx3008[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3008[20] = {
   0.188123,
   0.0889231,
   0.05699701,
   0.04314205,
   0.03993836,
   0.03809542,
   0.04242023,
   0.04757144,
   0.05073345,
   0.05754795,
   0.05967469,
   0.06362659,
   0.08748762,
   0.08493923,
   0.1069264,
   0.1106674,
   0.1105333,
   0.164688,
   0.1267434,
   0.1579605};
   Double_t _fehx3008[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3008[20] = {
   0.1789323,
   0.08712687,
   0.05699701,
   0.04314205,
   0.03993836,
   0.03809542,
   0.04242023,
   0.04757144,
   0.05073345,
   0.05754795,
   0.05967469,
   0.06362659,
   0.08748762,
   0.08310549,
   0.1045147,
   0.1077375,
   0.1066434,
   0.1593819,
   0.1205514,
   0.1513699};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,660);
   Graph_Graph3008->SetMinimum(0.3136786);
   Graph_Graph3008->SetMaximum(1.249433);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
