#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 11:38:28 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
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
   pad1->Range(-92.30769,-8.325801,676.9231,920.6583);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__13->SetBinContent(1,13.49288);
   hmc__13->SetBinContent(2,60.47116);
   hmc__13->SetBinContent(3,164.5011);
   hmc__13->SetBinContent(4,300.5109);
   hmc__13->SetBinContent(5,416.29);
   hmc__13->SetBinContent(6,413.6648);
   hmc__13->SetBinContent(7,400.8958);
   hmc__13->SetBinContent(8,312.3292);
   hmc__13->SetBinContent(9,242.8528);
   hmc__13->SetBinContent(10,215.2436);
   hmc__13->SetBinContent(11,173.7428);
   hmc__13->SetBinContent(12,147.1571);
   hmc__13->SetBinContent(13,122.4843);
   hmc__13->SetBinContent(14,99.17338);
   hmc__13->SetBinContent(15,74.62476);
   hmc__13->SetBinContent(16,68.41727);
   hmc__13->SetBinContent(17,53.15858);
   hmc__13->SetBinContent(18,40.82744);
   hmc__13->SetBinContent(19,35.84602);
   hmc__13->SetBinContent(20,26.69275);
   hmc__13->SetBinContent(21,16.21387);
   hmc__13->SetBinContent(22,16.54346);
   hmc__13->SetBinContent(23,14.39038);
   hmc__13->SetBinContent(24,13.15503);
   hmc__13->SetBinContent(25,121.0266);
   hmc__13->SetBinError(1,7.586923);
   hmc__13->SetBinError(2,19.55116);
   hmc__13->SetBinError(3,52.12543);
   hmc__13->SetBinError(4,89.88786);
   hmc__13->SetBinError(5,133.7974);
   hmc__13->SetBinError(6,139.176);
   hmc__13->SetBinError(7,142.3696);
   hmc__13->SetBinError(8,119.0723);
   hmc__13->SetBinError(9,94.76202);
   hmc__13->SetBinError(10,82.82506);
   hmc__13->SetBinError(11,68.72515);
   hmc__13->SetBinError(12,64.18512);
   hmc__13->SetBinError(13,47.42991);
   hmc__13->SetBinError(14,42.00776);
   hmc__13->SetBinError(15,33.48947);
   hmc__13->SetBinError(16,29.18306);
   hmc__13->SetBinError(17,26.73619);
   hmc__13->SetBinError(18,24.94367);
   hmc__13->SetBinError(19,17.88444);
   hmc__13->SetBinError(20,11.75079);
   hmc__13->SetBinError(21,9.455624);
   hmc__13->SetBinError(22,10.6924);
   hmc__13->SetBinError(23,8.79951);
   hmc__13->SetBinError(24,10.5173);
   hmc__13->SetBinError(25,35.35893);
   hmc__13->SetMinimum(-8.325801);
   hmc__13->SetMaximum(874.2091);
   hmc__13->SetEntries(3516.85);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,600);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(437.1046);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,3.222168);
   hbadmatch_stack_1->SetBinContent(3,7.56369);
   hbadmatch_stack_1->SetBinContent(4,10.9764);
   hbadmatch_stack_1->SetBinContent(5,9.575541);
   hbadmatch_stack_1->SetBinContent(6,8.867641);
   hbadmatch_stack_1->SetBinContent(7,9.863913);
   hbadmatch_stack_1->SetBinContent(8,9.963051);
   hbadmatch_stack_1->SetBinContent(9,4.87281);
   hbadmatch_stack_1->SetBinContent(10,4.21561);
   hbadmatch_stack_1->SetBinContent(11,1.073786);
   hbadmatch_stack_1->SetBinContent(12,2.258342);
   hbadmatch_stack_1->SetBinContent(13,0.8997518);
   hbadmatch_stack_1->SetBinContent(14,1.452052);
   hbadmatch_stack_1->SetBinContent(15,1.545967);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.6803553);
   hbadmatch_stack_1->SetBinContent(19,0.9762383);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(25,1.123658);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.9667909);
   hbadmatch_stack_1->SetBinError(3,1.607769);
   hbadmatch_stack_1->SetBinError(4,1.634118);
   hbadmatch_stack_1->SetBinError(5,1.54771);
   hbadmatch_stack_1->SetBinError(6,1.869353);
   hbadmatch_stack_1->SetBinError(7,1.57325);
   hbadmatch_stack_1->SetBinError(8,2.429468);
   hbadmatch_stack_1->SetBinError(9,1.131589);
   hbadmatch_stack_1->SetBinError(10,1.099097);
   hbadmatch_stack_1->SetBinError(11,0.5557297);
   hbadmatch_stack_1->SetBinError(12,0.8235284);
   hbadmatch_stack_1->SetBinError(13,0.5287499);
   hbadmatch_stack_1->SetBinError(14,0.7606228);
   hbadmatch_stack_1->SetBinError(15,0.5988954);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.4810838);
   hbadmatch_stack_1->SetBinError(19,0.5901424);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
   hbadmatch_stack_1->SetBinError(25,0.5188295);
   hbadmatch_stack_1->SetEntries(323);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,4.841647);
   hext_stack_2->SetBinContent(2,12.2294);
   hext_stack_2->SetBinContent(3,22.62492);
   hext_stack_2->SetBinContent(4,26.42554);
   hext_stack_2->SetBinContent(5,33.25546);
   hext_stack_2->SetBinContent(6,32.09474);
   hext_stack_2->SetBinContent(7,35.19189);
   hext_stack_2->SetBinContent(8,29.57894);
   hext_stack_2->SetBinContent(9,10.2902);
   hext_stack_2->SetBinContent(10,17.11294);
   hext_stack_2->SetBinContent(11,7.601229);
   hext_stack_2->SetBinContent(12,8.642262);
   hext_stack_2->SetBinContent(13,9.265105);
   hext_stack_2->SetBinContent(14,3.57278);
   hext_stack_2->SetBinContent(15,1.626396);
   hext_stack_2->SetBinContent(16,6.703058);
   hext_stack_2->SetBinContent(17,1.137595);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(19,1.055394);
   hext_stack_2->SetBinContent(20,3.208071);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,1.137595);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,1.137595);
   hext_stack_2->SetBinContent(25,6.870233);
   hext_stack_2->SetBinError(1,1.586957);
   hext_stack_2->SetBinError(2,2.269132);
   hext_stack_2->SetBinError(3,3.274701);
   hext_stack_2->SetBinError(4,3.530426);
   hext_stack_2->SetBinError(5,4.067519);
   hext_stack_2->SetBinError(6,3.861422);
   hext_stack_2->SetBinError(7,4.208758);
   hext_stack_2->SetBinError(8,3.97436);
   hext_stack_2->SetBinError(9,2.077585);
   hext_stack_2->SetBinError(10,2.932298);
   hext_stack_2->SetBinError(11,1.865604);
   hext_stack_2->SetBinError(12,2.063655);
   hext_stack_2->SetBinError(13,2.222076);
   hext_stack_2->SetBinError(14,1.136966);
   hext_stack_2->SetBinError(15,0.8131978);
   hext_stack_2->SetBinError(16,1.850964);
   hext_stack_2->SetBinError(17,0.6602113);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(19,0.6130171);
   hext_stack_2->SetBinError(20,1.434693);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.6602113);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.6602113);
   hext_stack_2->SetBinError(25,1.791626);
   hext_stack_2->SetEntries(621);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,1.058914);
   hdirt_stack_3->SetBinContent(3,1.402799);
   hdirt_stack_3->SetBinContent(4,1.462021);
   hdirt_stack_3->SetBinContent(5,4.162078);
   hdirt_stack_3->SetBinContent(6,1.747276);
   hdirt_stack_3->SetBinContent(7,1.257105);
   hdirt_stack_3->SetBinContent(8,0.8838965);
   hdirt_stack_3->SetBinContent(9,1.543066);
   hdirt_stack_3->SetBinContent(10,0.8144459);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.9324398);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(2,0.4475448);
   hdirt_stack_3->SetBinError(3,0.6123533);
   hdirt_stack_3->SetBinError(4,0.6319729);
   hdirt_stack_3->SetBinError(5,1.3029);
   hdirt_stack_3->SetBinError(6,0.6554984);
   hdirt_stack_3->SetBinError(7,0.6119204);
   hdirt_stack_3->SetBinError(8,0.4536616);
   hdirt_stack_3->SetBinError(9,0.7131111);
   hdirt_stack_3->SetBinError(10,0.4978001);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.4844392);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetEntries(69);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,1.072095);
   houtFV_stack_4->SetBinContent(2,6.100781);
   houtFV_stack_4->SetBinContent(3,15.17156);
   houtFV_stack_4->SetBinContent(4,19.43766);
   houtFV_stack_4->SetBinContent(5,24.41312);
   houtFV_stack_4->SetBinContent(6,24.35654);
   houtFV_stack_4->SetBinContent(7,23.19674);
   houtFV_stack_4->SetBinContent(8,19.76912);
   houtFV_stack_4->SetBinContent(9,13.9441);
   houtFV_stack_4->SetBinContent(10,13.72959);
   houtFV_stack_4->SetBinContent(11,10.89998);
   houtFV_stack_4->SetBinContent(12,9.148011);
   houtFV_stack_4->SetBinContent(13,5.913488);
   houtFV_stack_4->SetBinContent(14,4.643866);
   houtFV_stack_4->SetBinContent(15,4.072659);
   houtFV_stack_4->SetBinContent(16,3.517817);
   houtFV_stack_4->SetBinContent(17,2.737718);
   houtFV_stack_4->SetBinContent(18,2.817245);
   houtFV_stack_4->SetBinContent(19,2.628164);
   houtFV_stack_4->SetBinContent(20,0.9269427);
   houtFV_stack_4->SetBinContent(21,1.517089);
   houtFV_stack_4->SetBinContent(22,0.3917402);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,1.371936);
   houtFV_stack_4->SetBinContent(25,4.05302);
   houtFV_stack_4->SetBinError(1,0.5551335);
   houtFV_stack_4->SetBinError(2,1.296577);
   houtFV_stack_4->SetBinError(3,1.908333);
   houtFV_stack_4->SetBinError(4,2.215017);
   houtFV_stack_4->SetBinError(5,2.526056);
   houtFV_stack_4->SetBinError(6,2.491969);
   houtFV_stack_4->SetBinError(7,2.402917);
   houtFV_stack_4->SetBinError(8,2.293867);
   houtFV_stack_4->SetBinError(9,1.809578);
   houtFV_stack_4->SetBinError(10,1.802518);
   houtFV_stack_4->SetBinError(11,1.673336);
   houtFV_stack_4->SetBinError(12,1.495615);
   houtFV_stack_4->SetBinError(13,1.194981);
   houtFV_stack_4->SetBinError(14,1.009316);
   houtFV_stack_4->SetBinError(15,1.034935);
   houtFV_stack_4->SetBinError(16,0.9412229);
   houtFV_stack_4->SetBinError(17,0.856599);
   houtFV_stack_4->SetBinError(18,0.9179378);
   houtFV_stack_4->SetBinError(19,0.874263);
   houtFV_stack_4->SetBinError(20,0.4800908);
   houtFV_stack_4->SetBinError(21,0.5887087);
   houtFV_stack_4->SetBinError(22,0.2770047);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.5185478);
   houtFV_stack_4->SetBinError(25,1.019635);
   houtFV_stack_4->SetEntries(931);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6397079);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.8071078);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2416228);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2511016);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3259676);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9902858);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.412194);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.306666);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.937062);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.268622);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.212158);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.38139);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.604758);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2591116);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4464761);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.6382091);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4084627);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2973476);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3167831);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4198967);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4640037);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(347);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.059704);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.97032);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.86259);
   hNCpi0inFVres_stack_7->SetBinContent(4,119.6456);
   hNCpi0inFVres_stack_7->SetBinContent(5,183.0123);
   hNCpi0inFVres_stack_7->SetBinContent(6,186.4681);
   hNCpi0inFVres_stack_7->SetBinContent(7,178.816);
   hNCpi0inFVres_stack_7->SetBinContent(8,132.2504);
   hNCpi0inFVres_stack_7->SetBinContent(9,115.3773);
   hNCpi0inFVres_stack_7->SetBinContent(10,89.92889);
   hNCpi0inFVres_stack_7->SetBinContent(11,76.94787);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.68247);
   hNCpi0inFVres_stack_7->SetBinContent(13,51.14011);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.54111);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.8827);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.28604);
   hNCpi0inFVres_stack_7->SetBinContent(17,19.06059);
   hNCpi0inFVres_stack_7->SetBinContent(18,17.29277);
   hNCpi0inFVres_stack_7->SetBinContent(19,12.10434);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.902052);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.386131);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.835036);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.698177);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.360802);
   hNCpi0inFVres_stack_7->SetBinContent(25,27.12191);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2753746);
   hNCpi0inFVres_stack_7->SetBinError(2,1.218435);
   hNCpi0inFVres_stack_7->SetBinError(3,2.421261);
   hNCpi0inFVres_stack_7->SetBinError(4,3.463715);
   hNCpi0inFVres_stack_7->SetBinError(5,4.47644);
   hNCpi0inFVres_stack_7->SetBinError(6,4.438976);
   hNCpi0inFVres_stack_7->SetBinError(7,4.465384);
   hNCpi0inFVres_stack_7->SetBinError(8,3.718089);
   hNCpi0inFVres_stack_7->SetBinError(9,3.529152);
   hNCpi0inFVres_stack_7->SetBinError(10,3.135904);
   hNCpi0inFVres_stack_7->SetBinError(11,2.917011);
   hNCpi0inFVres_stack_7->SetBinError(12,2.440248);
   hNCpi0inFVres_stack_7->SetBinError(13,2.410467);
   hNCpi0inFVres_stack_7->SetBinError(14,2.134916);
   hNCpi0inFVres_stack_7->SetBinError(15,1.878266);
   hNCpi0inFVres_stack_7->SetBinError(16,1.580863);
   hNCpi0inFVres_stack_7->SetBinError(17,1.416646);
   hNCpi0inFVres_stack_7->SetBinError(18,1.426828);
   hNCpi0inFVres_stack_7->SetBinError(19,1.168318);
   hNCpi0inFVres_stack_7->SetBinError(20,1.041973);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7747864);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9028153);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6934955);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6085517);
   hNCpi0inFVres_stack_7->SetBinError(25,1.774136);
   hNCpi0inFVres_stack_7->SetEntries(26810);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4736358);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.439261);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.81876);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.15815);
   hNCpi0inFVdis_stack_8->SetBinContent(5,33.68822);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.5693);
   hNCpi0inFVdis_stack_8->SetBinContent(7,27.41103);
   hNCpi0inFVdis_stack_8->SetBinContent(8,25.72107);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.08623);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.81456);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.82917);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.95976);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.866583);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.068685);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.418776);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.511854);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.940732);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.077328);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.890574);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.263652);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.119912);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.896712);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.659894);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.185922);
   hNCpi0inFVdis_stack_8->SetBinContent(25,15.86952);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1634799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4252683);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.023632);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.501264);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.896276);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.766826);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.705323);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.638511);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.235485);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.343058);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.364904);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.096365);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9317036);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7997525);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9160465);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8419144);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7999153);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7883573);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6812749);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6273941);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4999391);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4936718);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4799469);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3716255);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.336448);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2231999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.6422043);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2510999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.07891307);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.3408521);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.08369995);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.6384395);
   hCCpi0inFV_stack_10->SetBinContent(2,3.859685);
   hCCpi0inFV_stack_10->SetBinContent(3,17.28774);
   hCCpi0inFV_stack_10->SetBinContent(4,39.88422);
   hCCpi0inFV_stack_10->SetBinContent(5,59.54189);
   hCCpi0inFV_stack_10->SetBinContent(6,60.16695);
   hCCpi0inFV_stack_10->SetBinContent(7,49.65928);
   hCCpi0inFV_stack_10->SetBinContent(8,42.55229);
   hCCpi0inFV_stack_10->SetBinContent(9,35.92126);
   hCCpi0inFV_stack_10->SetBinContent(10,31.40576);
   hCCpi0inFV_stack_10->SetBinContent(11,27.19496);
   hCCpi0inFV_stack_10->SetBinContent(12,23.679);
   hCCpi0inFV_stack_10->SetBinContent(13,21.85291);
   hCCpi0inFV_stack_10->SetBinContent(14,16.81683);
   hCCpi0inFV_stack_10->SetBinContent(15,11.12235);
   hCCpi0inFV_stack_10->SetBinContent(16,11.89852);
   hCCpi0inFV_stack_10->SetBinContent(17,9.818201);
   hCCpi0inFV_stack_10->SetBinContent(18,6.385447);
   hCCpi0inFV_stack_10->SetBinContent(19,7.691121);
   hCCpi0inFV_stack_10->SetBinContent(20,4.345016);
   hCCpi0inFV_stack_10->SetBinContent(21,2.982615);
   hCCpi0inFV_stack_10->SetBinContent(22,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(23,3.753179);
   hCCpi0inFV_stack_10->SetBinContent(24,2.975853);
   hCCpi0inFV_stack_10->SetBinContent(25,21.86961);
   hCCpi0inFV_stack_10->SetBinError(1,0.3709342);
   hCCpi0inFV_stack_10->SetBinError(2,1.001141);
   hCCpi0inFV_stack_10->SetBinError(3,2.095564);
   hCCpi0inFV_stack_10->SetBinError(4,3.158645);
   hCCpi0inFV_stack_10->SetBinError(5,3.843989);
   hCCpi0inFV_stack_10->SetBinError(6,3.87433);
   hCCpi0inFV_stack_10->SetBinError(7,3.524432);
   hCCpi0inFV_stack_10->SetBinError(8,3.290786);
   hCCpi0inFV_stack_10->SetBinError(9,3.036496);
   hCCpi0inFV_stack_10->SetBinError(10,2.828259);
   hCCpi0inFV_stack_10->SetBinError(11,2.673266);
   hCCpi0inFV_stack_10->SetBinError(12,2.466813);
   hCCpi0inFV_stack_10->SetBinError(13,2.318769);
   hCCpi0inFV_stack_10->SetBinError(14,2.020408);
   hCCpi0inFV_stack_10->SetBinError(15,1.577777);
   hCCpi0inFV_stack_10->SetBinError(16,1.749303);
   hCCpi0inFV_stack_10->SetBinError(17,1.564787);
   hCCpi0inFV_stack_10->SetBinError(18,1.281262);
   hCCpi0inFV_stack_10->SetBinError(19,1.433131);
   hCCpi0inFV_stack_10->SetBinError(20,1.093476);
   hCCpi0inFV_stack_10->SetBinError(21,0.8556548);
   hCCpi0inFV_stack_10->SetBinError(22,0.809167);
   hCCpi0inFV_stack_10->SetBinError(23,1.038719);
   hCCpi0inFV_stack_10->SetBinError(24,0.8541054);
   hCCpi0inFV_stack_10->SetBinError(25,2.393611);
   hCCpi0inFV_stack_10->SetEntries(2205);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.144191);
   hNCinFV_stack_11->SetBinContent(2,7.854381);
   hNCinFV_stack_11->SetBinContent(3,14.4584);
   hNCinFV_stack_11->SetBinContent(4,18.75815);
   hNCinFV_stack_11->SetBinContent(5,25.48959);
   hNCinFV_stack_11->SetBinContent(6,27.25594);
   hNCinFV_stack_11->SetBinContent(7,27.69247);
   hNCinFV_stack_11->SetBinContent(8,22.24686);
   hNCinFV_stack_11->SetBinContent(9,15.62531);
   hNCinFV_stack_11->SetBinContent(10,16.62242);
   hNCinFV_stack_11->SetBinContent(11,11.72191);
   hNCinFV_stack_11->SetBinContent(12,12.98903);
   hNCinFV_stack_11->SetBinContent(13,9.766591);
   hNCinFV_stack_11->SetBinContent(14,9.687607);
   hNCinFV_stack_11->SetBinContent(15,10.30179);
   hNCinFV_stack_11->SetBinContent(16,7.129225);
   hNCinFV_stack_11->SetBinContent(17,5.77974);
   hNCinFV_stack_11->SetBinContent(18,4.689657);
   hNCinFV_stack_11->SetBinContent(19,3.372665);
   hNCinFV_stack_11->SetBinContent(20,2.300569);
   hNCinFV_stack_11->SetBinContent(21,1.855576);
   hNCinFV_stack_11->SetBinContent(22,1.662242);
   hNCinFV_stack_11->SetBinContent(23,1.660551);
   hNCinFV_stack_11->SetBinContent(24,1.320373);
   hNCinFV_stack_11->SetBinContent(25,15.46447);
   hNCinFV_stack_11->SetBinError(1,0.7850774);
   hNCinFV_stack_11->SetBinError(2,1.441624);
   hNCinFV_stack_11->SetBinError(3,1.913512);
   hNCinFV_stack_11->SetBinError(4,2.20356);
   hNCinFV_stack_11->SetBinError(5,2.475696);
   hNCinFV_stack_11->SetBinError(6,2.647965);
   hNCinFV_stack_11->SetBinError(7,2.654583);
   hNCinFV_stack_11->SetBinError(8,2.322194);
   hNCinFV_stack_11->SetBinError(9,2.010935);
   hNCinFV_stack_11->SetBinError(10,2.059767);
   hNCinFV_stack_11->SetBinError(11,1.698602);
   hNCinFV_stack_11->SetBinError(12,1.797625);
   hNCinFV_stack_11->SetBinError(13,1.58206);
   hNCinFV_stack_11->SetBinError(14,1.481071);
   hNCinFV_stack_11->SetBinError(15,1.629929);
   hNCinFV_stack_11->SetBinError(16,1.374218);
   hNCinFV_stack_11->SetBinError(17,1.109776);
   hNCinFV_stack_11->SetBinError(18,1.055827);
   hNCinFV_stack_11->SetBinError(19,0.8990075);
   hNCinFV_stack_11->SetBinError(20,0.7071359);
   hNCinFV_stack_11->SetBinError(21,0.6794384);
   hNCinFV_stack_11->SetBinError(22,0.6513556);
   hNCinFV_stack_11->SetBinError(23,0.650847);
   hNCinFV_stack_11->SetBinError(24,0.5548703);
   hNCinFV_stack_11->SetBinError(25,2.087296);
   hNCinFV_stack_11->SetEntries(1184);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,3.066449);
   hnumuCCinFV_stack_12->SetBinContent(2,9.318033);
   hnumuCCinFV_stack_12->SetBinContent(3,20.74423);
   hnumuCCinFV_stack_12->SetBinContent(4,36.14332);
   hnumuCCinFV_stack_12->SetBinContent(5,38.55424);
   hnumuCCinFV_stack_12->SetBinContent(6,39.70222);
   hnumuCCinFV_stack_12->SetBinContent(7,43.82412);
   hnumuCCinFV_stack_12->SetBinContent(8,26.57272);
   hnumuCCinFV_stack_12->SetBinContent(9,26.34112);
   hnumuCCinFV_stack_12->SetBinContent(10,23.85508);
   hnumuCCinFV_stack_12->SetBinContent(11,19.75323);
   hnumuCCinFV_stack_12->SetBinContent(12,19.90305);
   hnumuCCinFV_stack_12->SetBinContent(13,13.96852);
   hnumuCCinFV_stack_12->SetBinContent(14,13.80504);
   hnumuCCinFV_stack_12->SetBinContent(15,6.095763);
   hnumuCCinFV_stack_12->SetBinContent(16,6.813123);
   hnumuCCinFV_stack_12->SetBinContent(17,7.141958);
   hnumuCCinFV_stack_12->SetBinContent(18,2.657062);
   hnumuCCinFV_stack_12->SetBinContent(19,3.904166);
   hnumuCCinFV_stack_12->SetBinContent(20,2.241412);
   hnumuCCinFV_stack_12->SetBinContent(21,0.6600696);
   hnumuCCinFV_stack_12->SetBinContent(22,2.003045);
   hnumuCCinFV_stack_12->SetBinContent(23,1.138389);
   hnumuCCinFV_stack_12->SetBinContent(24,1.77465);
   hnumuCCinFV_stack_12->SetBinContent(25,16.72427);
   hnumuCCinFV_stack_12->SetBinError(1,1.072671);
   hnumuCCinFV_stack_12->SetBinError(2,1.694158);
   hnumuCCinFV_stack_12->SetBinError(3,2.537016);
   hnumuCCinFV_stack_12->SetBinError(4,3.876913);
   hnumuCCinFV_stack_12->SetBinError(5,3.643087);
   hnumuCCinFV_stack_12->SetBinError(6,3.338075);
   hnumuCCinFV_stack_12->SetBinError(7,4.390819);
   hnumuCCinFV_stack_12->SetBinError(8,2.721393);
   hnumuCCinFV_stack_12->SetBinError(9,2.711727);
   hnumuCCinFV_stack_12->SetBinError(10,2.947704);
   hnumuCCinFV_stack_12->SetBinError(11,2.312285);
   hnumuCCinFV_stack_12->SetBinError(12,2.60835);
   hnumuCCinFV_stack_12->SetBinError(13,1.935637);
   hnumuCCinFV_stack_12->SetBinError(14,2.049278);
   hnumuCCinFV_stack_12->SetBinError(15,1.706002);
   hnumuCCinFV_stack_12->SetBinError(16,1.310606);
   hnumuCCinFV_stack_12->SetBinError(17,1.430904);
   hnumuCCinFV_stack_12->SetBinError(18,0.8130322);
   hnumuCCinFV_stack_12->SetBinError(19,1.050798);
   hnumuCCinFV_stack_12->SetBinError(20,0.7967458);
   hnumuCCinFV_stack_12->SetBinError(21,0.3853442);
   hnumuCCinFV_stack_12->SetBinError(22,0.7354616);
   hnumuCCinFV_stack_12->SetBinError(23,0.5974629);
   hnumuCCinFV_stack_12->SetBinError(24,0.6565594);
   hnumuCCinFV_stack_12->SetBinError(25,3.111768);
   hnumuCCinFV_stack_12->SetEntries(1510);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.4402164);
   hnueCCinFV_stack_13->SetBinContent(5,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(6,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(7,1.991224);
   hnueCCinFV_stack_13->SetBinContent(8,0.7715192);
   hnueCCinFV_stack_13->SetBinContent(9,1.386339);
   hnueCCinFV_stack_13->SetBinContent(11,0.9823625);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(15,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.8415501);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,10.53934);
   hnueCCinFV_stack_13->SetBinError(2,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.3132948);
   hnueCCinFV_stack_13->SetBinError(5,0.4394482);
   hnueCCinFV_stack_13->SetBinError(6,0.5410961);
   hnueCCinFV_stack_13->SetBinError(7,0.8265606);
   hnueCCinFV_stack_13->SetBinError(8,0.4576759);
   hnueCCinFV_stack_13->SetBinError(9,0.7176052);
   hnueCCinFV_stack_13->SetBinError(11,0.5051484);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(15,0.1967157);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.4913333);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,2.423815);
   hnueCCinFV_stack_13->SetEntries(72);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__14->SetBinContent(1,13.49288);
   hmcerror__14->SetBinContent(2,60.47116);
   hmcerror__14->SetBinContent(3,164.5011);
   hmcerror__14->SetBinContent(4,300.5109);
   hmcerror__14->SetBinContent(5,416.29);
   hmcerror__14->SetBinContent(6,413.6648);
   hmcerror__14->SetBinContent(7,400.8958);
   hmcerror__14->SetBinContent(8,312.3292);
   hmcerror__14->SetBinContent(9,242.8528);
   hmcerror__14->SetBinContent(10,215.2436);
   hmcerror__14->SetBinContent(11,173.7428);
   hmcerror__14->SetBinContent(12,147.1571);
   hmcerror__14->SetBinContent(13,122.4843);
   hmcerror__14->SetBinContent(14,99.17338);
   hmcerror__14->SetBinContent(15,74.62476);
   hmcerror__14->SetBinContent(16,68.41727);
   hmcerror__14->SetBinContent(17,53.15858);
   hmcerror__14->SetBinContent(18,40.82744);
   hmcerror__14->SetBinContent(19,35.84602);
   hmcerror__14->SetBinContent(20,26.69275);
   hmcerror__14->SetBinContent(21,16.21387);
   hmcerror__14->SetBinContent(22,16.54346);
   hmcerror__14->SetBinContent(23,14.39038);
   hmcerror__14->SetBinContent(24,13.15503);
   hmcerror__14->SetBinContent(25,121.0266);
   hmcerror__14->SetBinError(1,7.586923);
   hmcerror__14->SetBinError(2,19.55116);
   hmcerror__14->SetBinError(3,52.12543);
   hmcerror__14->SetBinError(4,89.88786);
   hmcerror__14->SetBinError(5,133.7974);
   hmcerror__14->SetBinError(6,139.176);
   hmcerror__14->SetBinError(7,142.3696);
   hmcerror__14->SetBinError(8,119.0723);
   hmcerror__14->SetBinError(9,94.76202);
   hmcerror__14->SetBinError(10,82.82506);
   hmcerror__14->SetBinError(11,68.72515);
   hmcerror__14->SetBinError(12,64.18512);
   hmcerror__14->SetBinError(13,47.42991);
   hmcerror__14->SetBinError(14,42.00776);
   hmcerror__14->SetBinError(15,33.48947);
   hmcerror__14->SetBinError(16,29.18306);
   hmcerror__14->SetBinError(17,26.73619);
   hmcerror__14->SetBinError(18,24.94367);
   hmcerror__14->SetBinError(19,17.88444);
   hmcerror__14->SetBinError(20,11.75079);
   hmcerror__14->SetBinError(21,9.455624);
   hmcerror__14->SetBinError(22,10.6924);
   hmcerror__14->SetBinError(23,8.79951);
   hmcerror__14->SetBinError(24,10.5173);
   hmcerror__14->SetBinError(25,35.35893);
   hmcerror__14->SetEntries(3516.85);

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
   
   Double_t _fx3017[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3017[24] = {
   12,
   52,
   135,
   249,
   367,
   324,
   303,
   203,
   181,
   155,
   115,
   91,
   69,
   65,
   50,
   39,
   25,
   33,
   20,
   20,
   15,
   14,
   4,
   10};
   Double_t _felx3017[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3017[24] = {
   3.64022,
   7.3419,
   11.61895,
   15.77973,
   19.15724,
   18,
   17.4069,
   14.24781,
   13.45362,
   12.4499,
   10.72381,
   9.6617,
   8.4327,
   8.1893,
   7.2025,
   6.3813,
   5.1474,
   5.8847,
   4.6266,
   4.6266,
   4.0385,
   3.9102,
   2.29683,
   3.34883};
   Double_t _fehx3017[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3017[24] = {
   3.4155,
   7.1381,
   11.61895,
   15.77973,
   19.15724,
   18,
   17.4069,
   14.24781,
   13.45362,
   12.4499,
   10.72381,
   9.46,
   8.2304,
   7.9866,
   6.9985,
   6.1757,
   4.9374,
   5.6776,
   4.4133,
   4.4133,
   3.8197,
   3.6898,
   1.98186,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,660);
   Graph_Graph3017->SetMinimum(1.532853);
   Graph_Graph3017->SetMaximum(424.6027);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2551.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 80.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 270.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 15.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 212.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1436.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  267.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 494.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 370.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3018[24] = {
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
   Double_t _felx3018[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3018[24] = {
   0.562291,
   0.3233137,
   0.3168698,
   0.2991168,
   0.3214044,
   0.3364464,
   0.3551287,
   0.3812399,
   0.3902035,
   0.3847969,
   0.3955567,
   0.4361674,
   0.3872325,
   0.423579,
   0.4487715,
   0.4265452,
   0.5029516,
   0.6109535,
   0.498924,
   0.4402242,
   0.5831813,
   0.6463221,
   0.6114855,
   0.7994889};
   Double_t _fehx3018[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3018[24] = {
   0.562291,
   0.3233137,
   0.3168698,
   0.2991168,
   0.3214044,
   0.3364464,
   0.3551287,
   0.3812399,
   0.3902035,
   0.3847969,
   0.3955567,
   0.4361674,
   0.3872325,
   0.423579,
   0.4487715,
   0.4265452,
   0.5029516,
   0.6109535,
   0.498924,
   0.4402242,
   0.5831813,
   0.6463221,
   0.6114855,
   0.7994889};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,660);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3019[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3019[24] = {
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
   Double_t _felx3019[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3019[24] = {
   0.2223844,
   0.204242,
   0.2421212,
   0.2866667,
   0.3101028,
   0.3158052,
   0.3317693,
   0.3403329,
   0.367919,
   0.3567769,
   0.3665506,
   0.3325412,
   0.351756,
   0.3484706,
   0.3742771,
   0.3027824,
   0.329707,
   0.3433107,
   0.3178078,
   0.316991,
   0.3639168,
   0.2998742,
   0.3124012,
   0.2753831};
   Double_t _fehx3019[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3019[24] = {
   0.2223844,
   0.204242,
   0.2421212,
   0.2866667,
   0.3101028,
   0.3158052,
   0.3317693,
   0.3403329,
   0.367919,
   0.3567769,
   0.3665506,
   0.3325412,
   0.351756,
   0.3484706,
   0.3742771,
   0.3027824,
   0.329707,
   0.3433107,
   0.3178078,
   0.316991,
   0.3639168,
   0.2998742,
   0.3124012,
   0.2753831};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,660);
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
   
   Double_t _fx3020[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3020[24] = {
   0.8893582,
   0.859914,
   0.8206631,
   0.8285889,
   0.8815969,
   0.7832429,
   0.7558073,
   0.6499553,
   0.7453074,
   0.7201145,
   0.6618978,
   0.6183868,
   0.5633374,
   0.6554178,
   0.6700189,
   0.5700315,
   0.470291,
   0.8082799,
   0.5579419,
   0.7492673,
   0.925134,
   0.8462561,
   0.2779634,
   0.7601654};
   Double_t _felx3020[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3020[24] = {
   0.2697883,
   0.1214116,
   0.07063143,
   0.05250969,
   0.04601898,
   0.0435135,
   0.04341999,
   0.04561792,
   0.05539826,
   0.05784099,
   0.06172228,
   0.06565569,
   0.06884718,
   0.08257559,
   0.09651623,
   0.0932703,
   0.09683103,
   0.1441359,
   0.1290687,
   0.173328,
   0.2490769,
   0.2363593,
   0.1596087,
   0.2545665};
   Double_t _fehx3020[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3020[24] = {
   0.2531336,
   0.1180414,
   0.07063143,
   0.05250969,
   0.04601898,
   0.0435135,
   0.04341999,
   0.04561792,
   0.05539826,
   0.05784099,
   0.06172228,
   0.06428504,
   0.06719554,
   0.08053169,
   0.09378255,
   0.09026522,
   0.09288059,
   0.1390633,
   0.1231183,
   0.1653371,
   0.2355823,
   0.2230368,
   0.1377211,
   0.237012};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,660);
   Graph_Graph3020->SetMinimum(0.01411858);
   Graph_Graph3020->SetMaximum(1.264952);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
