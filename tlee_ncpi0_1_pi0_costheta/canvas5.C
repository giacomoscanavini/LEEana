#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 10:30:53 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
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
   pad1->Range(-1.307692,-8.099172,1.25641,895.598);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__13->SetBinContent(1,103.7512);
   hmc__13->SetBinContent(2,73.31461);
   hmc__13->SetBinContent(3,68.74016);
   hmc__13->SetBinContent(4,64.78423);
   hmc__13->SetBinContent(5,62.35702);
   hmc__13->SetBinContent(6,62.02036);
   hmc__13->SetBinContent(7,70.65924);
   hmc__13->SetBinContent(8,66.95018);
   hmc__13->SetBinContent(9,63.05676);
   hmc__13->SetBinContent(10,73.34647);
   hmc__13->SetBinContent(11,75.27711);
   hmc__13->SetBinContent(12,77.60033);
   hmc__13->SetBinContent(13,89.97917);
   hmc__13->SetBinContent(14,94.18647);
   hmc__13->SetBinContent(15,103.3905);
   hmc__13->SetBinContent(16,97.83397);
   hmc__13->SetBinContent(17,108.1004);
   hmc__13->SetBinContent(18,120.1191);
   hmc__13->SetBinContent(19,133.7802);
   hmc__13->SetBinContent(20,149.3075);
   hmc__13->SetBinContent(21,191.2596);
   hmc__13->SetBinContent(22,191.8722);
   hmc__13->SetBinContent(23,217.3554);
   hmc__13->SetBinContent(24,285.6451);
   hmc__13->SetBinContent(25,404.9586);
   hmc__13->SetBinError(1,36.50787);
   hmc__13->SetBinError(2,28.38335);
   hmc__13->SetBinError(3,32.3665);
   hmc__13->SetBinError(4,27.53947);
   hmc__13->SetBinError(5,29.55771);
   hmc__13->SetBinError(6,25.60546);
   hmc__13->SetBinError(7,26.45346);
   hmc__13->SetBinError(8,28.05134);
   hmc__13->SetBinError(9,29.46121);
   hmc__13->SetBinError(10,30.23868);
   hmc__13->SetBinError(11,31.45359);
   hmc__13->SetBinError(12,33.23997);
   hmc__13->SetBinError(13,35.90017);
   hmc__13->SetBinError(14,37.98073);
   hmc__13->SetBinError(15,41.51247);
   hmc__13->SetBinError(16,41.48467);
   hmc__13->SetBinError(17,42.59374);
   hmc__13->SetBinError(18,48.97291);
   hmc__13->SetBinError(19,53.618);
   hmc__13->SetBinError(20,64.40743);
   hmc__13->SetBinError(21,71.75929);
   hmc__13->SetBinError(22,71.58971);
   hmc__13->SetBinError(23,83.45413);
   hmc__13->SetBinError(24,96.87488);
   hmc__13->SetBinError(25,107.6749);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-8.099172);
   hmc__13->SetMaximum(850.4131);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-1,1);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(425.2065);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.575745);
   hbadmatch_stack_1->SetBinContent(2,1.485766);
   hbadmatch_stack_1->SetBinContent(3,1.549971);
   hbadmatch_stack_1->SetBinContent(4,2.115549);
   hbadmatch_stack_1->SetBinContent(5,1.526916);
   hbadmatch_stack_1->SetBinContent(6,1.287463);
   hbadmatch_stack_1->SetBinContent(7,2.591672);
   hbadmatch_stack_1->SetBinContent(8,0.878037);
   hbadmatch_stack_1->SetBinContent(9,2.037407);
   hbadmatch_stack_1->SetBinContent(10,2.38409);
   hbadmatch_stack_1->SetBinContent(11,2.741342);
   hbadmatch_stack_1->SetBinContent(12,3.066691);
   hbadmatch_stack_1->SetBinContent(13,1.411066);
   hbadmatch_stack_1->SetBinContent(14,4.718892);
   hbadmatch_stack_1->SetBinContent(15,6.060323);
   hbadmatch_stack_1->SetBinContent(16,3.181336);
   hbadmatch_stack_1->SetBinContent(17,3.442102);
   hbadmatch_stack_1->SetBinContent(18,1.914126);
   hbadmatch_stack_1->SetBinContent(19,2.778732);
   hbadmatch_stack_1->SetBinContent(20,3.556402);
   hbadmatch_stack_1->SetBinContent(21,5.516098);
   hbadmatch_stack_1->SetBinContent(22,4.16035);
   hbadmatch_stack_1->SetBinContent(23,4.910658);
   hbadmatch_stack_1->SetBinContent(24,2.626338);
   hbadmatch_stack_1->SetBinContent(25,6.357736);
   hbadmatch_stack_1->SetBinError(1,0.982074);
   hbadmatch_stack_1->SetBinError(2,0.6981603);
   hbadmatch_stack_1->SetBinError(3,0.5820526);
   hbadmatch_stack_1->SetBinError(4,0.7260478);
   hbadmatch_stack_1->SetBinError(5,0.5548058);
   hbadmatch_stack_1->SetBinError(6,0.5527485);
   hbadmatch_stack_1->SetBinError(7,0.8171929);
   hbadmatch_stack_1->SetBinError(8,0.395075);
   hbadmatch_stack_1->SetBinError(9,0.7223091);
   hbadmatch_stack_1->SetBinError(10,0.8580516);
   hbadmatch_stack_1->SetBinError(11,0.919935);
   hbadmatch_stack_1->SetBinError(12,0.8833523);
   hbadmatch_stack_1->SetBinError(13,0.5913356);
   hbadmatch_stack_1->SetBinError(14,1.188477);
   hbadmatch_stack_1->SetBinError(15,2.208163);
   hbadmatch_stack_1->SetBinError(16,1.306796);
   hbadmatch_stack_1->SetBinError(17,1.108194);
   hbadmatch_stack_1->SetBinError(18,0.8335805);
   hbadmatch_stack_1->SetBinError(19,0.8690054);
   hbadmatch_stack_1->SetBinError(20,1.025873);
   hbadmatch_stack_1->SetBinError(21,1.343145);
   hbadmatch_stack_1->SetBinError(22,1.077661);
   hbadmatch_stack_1->SetBinError(23,1.177952);
   hbadmatch_stack_1->SetBinError(24,0.7020638);
   hbadmatch_stack_1->SetBinError(25,1.319114);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,9.51889);
   hext_stack_2->SetBinContent(2,5.441371);
   hext_stack_2->SetBinContent(3,4.303776);
   hext_stack_2->SetBinContent(4,4.841647);
   hext_stack_2->SetBinContent(5,4.53161);
   hext_stack_2->SetBinContent(6,6.132056);
   hext_stack_2->SetBinContent(7,11.92094);
   hext_stack_2->SetBinContent(8,10.98806);
   hext_stack_2->SetBinContent(9,3.807795);
   hext_stack_2->SetBinContent(10,11.54748);
   hext_stack_2->SetBinContent(11,11.56902);
   hext_stack_2->SetBinContent(12,9.615453);
   hext_stack_2->SetBinContent(13,14.41679);
   hext_stack_2->SetBinContent(14,7.063358);
   hext_stack_2->SetBinContent(15,12.98793);
   hext_stack_2->SetBinContent(16,10.98806);
   hext_stack_2->SetBinContent(17,12.60287);
   hext_stack_2->SetBinContent(18,10.16768);
   hext_stack_2->SetBinContent(19,12.49913);
   hext_stack_2->SetBinContent(20,17.84394);
   hext_stack_2->SetBinContent(21,17.84394);
   hext_stack_2->SetBinContent(22,14.63586);
   hext_stack_2->SetBinContent(23,15.6769);
   hext_stack_2->SetBinContent(24,20.08599);
   hext_stack_2->SetBinContent(25,15.86284);
   hext_stack_2->SetBinError(1,2.21736);
   hext_stack_2->SetBinError(2,1.413905);
   hext_stack_2->SetBinError(3,1.250299);
   hext_stack_2->SetBinError(4,1.586957);
   hext_stack_2->SetBinError(5,1.418025);
   hext_stack_2->SetBinError(6,1.772165);
   hext_stack_2->SetBinError(7,2.538343);
   hext_stack_2->SetBinError(8,2.292727);
   hext_stack_2->SetBinError(9,1.24058);
   hext_stack_2->SetBinError(10,2.368159);
   hext_stack_2->SetBinError(11,2.237091);
   hext_stack_2->SetBinError(12,2.138779);
   hext_stack_2->SetBinError(13,2.822001);
   hext_stack_2->SetBinError(14,1.589118);
   hext_stack_2->SetBinError(15,2.598633);
   hext_stack_2->SetBinError(16,2.292727);
   hext_stack_2->SetBinError(17,2.446215);
   hext_stack_2->SetBinError(18,2.264322);
   hext_stack_2->SetBinError(19,2.554894);
   hext_stack_2->SetBinError(20,2.978074);
   hext_stack_2->SetBinError(21,2.978074);
   hext_stack_2->SetBinError(22,2.609709);
   hext_stack_2->SetBinError(23,2.754773);
   hext_stack_2->SetBinError(24,3.22651);
   hext_stack_2->SetBinError(25,2.665586);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.7108223);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.6143302);
   hdirt_stack_3->SetBinContent(7,0.8385887);
   hdirt_stack_3->SetBinContent(8,0.6143302);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.2620035);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,2.044474);
   hdirt_stack_3->SetBinContent(16,0.1651799);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.8457079);
   hdirt_stack_3->SetBinContent(19,1.162207);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.4794168);
   hdirt_stack_3->SetBinContent(22,1.676579);
   hdirt_stack_3->SetBinContent(23,0.8527125);
   hdirt_stack_3->SetBinContent(24,0.7839588);
   hdirt_stack_3->SetBinContent(25,1.876656);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.4586315);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.39051);
   hdirt_stack_3->SetBinError(7,0.5064279);
   hdirt_stack_3->SetBinError(8,0.39051);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.2620035);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,1.090892);
   hdirt_stack_3->SetBinError(16,0.1651799);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.5238192);
   hdirt_stack_3->SetBinError(19,0.588785);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.3402743);
   hdirt_stack_3->SetBinError(22,0.6062382);
   hdirt_stack_3->SetBinError(23,0.5176777);
   hdirt_stack_3->SetBinError(24,0.3950683);
   hdirt_stack_3->SetBinError(25,0.6925181);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,14.04389);
   houtFV_stack_4->SetBinContent(2,6.187795);
   houtFV_stack_4->SetBinContent(3,5.000464);
   houtFV_stack_4->SetBinContent(4,5.6858);
   houtFV_stack_4->SetBinContent(5,5.973511);
   houtFV_stack_4->SetBinContent(6,3.965083);
   houtFV_stack_4->SetBinContent(7,3.974681);
   houtFV_stack_4->SetBinContent(8,4.002886);
   houtFV_stack_4->SetBinContent(9,4.23647);
   houtFV_stack_4->SetBinContent(10,4.147719);
   houtFV_stack_4->SetBinContent(11,5.540624);
   houtFV_stack_4->SetBinContent(12,5.032728);
   houtFV_stack_4->SetBinContent(13,4.402976);
   houtFV_stack_4->SetBinContent(14,5.457862);
   houtFV_stack_4->SetBinContent(15,5.341198);
   houtFV_stack_4->SetBinContent(16,4.825091);
   houtFV_stack_4->SetBinContent(17,4.820935);
   houtFV_stack_4->SetBinContent(18,9.347804);
   houtFV_stack_4->SetBinContent(19,8.07326);
   houtFV_stack_4->SetBinContent(20,8.750206);
   houtFV_stack_4->SetBinContent(21,12.77163);
   houtFV_stack_4->SetBinContent(22,12.24347);
   houtFV_stack_4->SetBinContent(23,14.48125);
   houtFV_stack_4->SetBinContent(24,20.46228);
   houtFV_stack_4->SetBinContent(25,24.29999);
   houtFV_stack_4->SetBinError(1,1.941916);
   houtFV_stack_4->SetBinError(2,1.293692);
   houtFV_stack_4->SetBinError(3,1.087903);
   houtFV_stack_4->SetBinError(4,1.147002);
   houtFV_stack_4->SetBinError(5,1.30808);
   houtFV_stack_4->SetBinError(6,0.9549535);
   houtFV_stack_4->SetBinError(7,0.9306961);
   houtFV_stack_4->SetBinError(8,1.04219);
   houtFV_stack_4->SetBinError(9,1.034279);
   houtFV_stack_4->SetBinError(10,0.9946441);
   houtFV_stack_4->SetBinError(11,1.149838);
   houtFV_stack_4->SetBinError(12,1.050465);
   houtFV_stack_4->SetBinError(13,1.05894);
   houtFV_stack_4->SetBinError(14,1.153585);
   houtFV_stack_4->SetBinError(15,1.067352);
   houtFV_stack_4->SetBinError(16,1.05603);
   houtFV_stack_4->SetBinError(17,1.061241);
   houtFV_stack_4->SetBinError(18,1.555579);
   houtFV_stack_4->SetBinError(19,1.37233);
   houtFV_stack_4->SetBinError(20,1.551468);
   houtFV_stack_4->SetBinError(21,1.785583);
   houtFV_stack_4->SetBinError(22,1.672772);
   houtFV_stack_4->SetBinError(23,1.819023);
   houtFV_stack_4->SetBinError(24,2.278903);
   houtFV_stack_4->SetBinError(25,2.717772);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3230199);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2526288);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.08233672);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7213498);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5295826);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.170127);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2038367);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.146251);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06086255);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2617006);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2006885);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5689014);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6409965);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3392353);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2599213);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.163839);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1102785);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3802231);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2613867);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1865496);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.09839175);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.216388);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1473104);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5050069);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05478407);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3880353);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.186406);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2508092);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1199255);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2450371);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6637887);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4379882);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5532196);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.153562);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.81749);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7728113);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.866918);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2871032);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1237524);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1498496);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05659658);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05220368);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1500609);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1373904);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1271066);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04131505);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1182274);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05007114);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2427168);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03165861);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1668147);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.08002999);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1407638);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.0481814);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1326625);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2263036);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1790759);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.167344);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2785354);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4616937);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1763632);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.403748);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,25.91985);
   hNCpi0inFVres_stack_7->SetBinContent(2,24.46562);
   hNCpi0inFVres_stack_7->SetBinContent(3,21.84439);
   hNCpi0inFVres_stack_7->SetBinContent(4,20.28231);
   hNCpi0inFVres_stack_7->SetBinContent(5,21.81874);
   hNCpi0inFVres_stack_7->SetBinContent(6,20.28731);
   hNCpi0inFVres_stack_7->SetBinContent(7,22.1427);
   hNCpi0inFVres_stack_7->SetBinContent(8,21.0055);
   hNCpi0inFVres_stack_7->SetBinContent(9,22.25856);
   hNCpi0inFVres_stack_7->SetBinContent(10,22.03363);
   hNCpi0inFVres_stack_7->SetBinContent(11,22.71265);
   hNCpi0inFVres_stack_7->SetBinContent(12,27.30821);
   hNCpi0inFVres_stack_7->SetBinContent(13,28.37744);
   hNCpi0inFVres_stack_7->SetBinContent(14,31.97244);
   hNCpi0inFVres_stack_7->SetBinContent(15,34.90876);
   hNCpi0inFVres_stack_7->SetBinContent(16,34.92597);
   hNCpi0inFVres_stack_7->SetBinContent(17,37.39024);
   hNCpi0inFVres_stack_7->SetBinContent(18,40.84922);
   hNCpi0inFVres_stack_7->SetBinContent(19,49.11927);
   hNCpi0inFVres_stack_7->SetBinContent(20,55.52338);
   hNCpi0inFVres_stack_7->SetBinContent(21,65.98357);
   hNCpi0inFVres_stack_7->SetBinContent(22,69.24635);
   hNCpi0inFVres_stack_7->SetBinContent(23,81.08214);
   hNCpi0inFVres_stack_7->SetBinContent(24,96.15685);
   hNCpi0inFVres_stack_7->SetBinContent(25,120.0577);
   hNCpi0inFVres_stack_7->SetBinError(1,1.672445);
   hNCpi0inFVres_stack_7->SetBinError(2,1.51684);
   hNCpi0inFVres_stack_7->SetBinError(3,1.352301);
   hNCpi0inFVres_stack_7->SetBinError(4,1.337754);
   hNCpi0inFVres_stack_7->SetBinError(5,1.381834);
   hNCpi0inFVres_stack_7->SetBinError(6,1.293758);
   hNCpi0inFVres_stack_7->SetBinError(7,1.463413);
   hNCpi0inFVres_stack_7->SetBinError(8,1.279932);
   hNCpi0inFVres_stack_7->SetBinError(9,1.421029);
   hNCpi0inFVres_stack_7->SetBinError(10,1.306445);
   hNCpi0inFVres_stack_7->SetBinError(11,1.301766);
   hNCpi0inFVres_stack_7->SetBinError(12,1.576012);
   hNCpi0inFVres_stack_7->SetBinError(13,1.573403);
   hNCpi0inFVres_stack_7->SetBinError(14,1.646756);
   hNCpi0inFVres_stack_7->SetBinError(15,1.785129);
   hNCpi0inFVres_stack_7->SetBinError(16,1.77007);
   hNCpi0inFVres_stack_7->SetBinError(17,1.740982);
   hNCpi0inFVres_stack_7->SetBinError(18,1.823786);
   hNCpi0inFVres_stack_7->SetBinError(19,2.06575);
   hNCpi0inFVres_stack_7->SetBinError(20,2.179947);
   hNCpi0inFVres_stack_7->SetBinError(21,2.541419);
   hNCpi0inFVres_stack_7->SetBinError(22,2.531747);
   hNCpi0inFVres_stack_7->SetBinError(23,2.851061);
   hNCpi0inFVres_stack_7->SetBinError(24,3.020006);
   hNCpi0inFVres_stack_7->SetBinError(25,3.695305);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.42041);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.246876);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.158395);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.819824);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.491472);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.953871);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.9309);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.729521);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.048066);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.50314);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.991827);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.292221);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.00788);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.09567);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.393225);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.477428);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.811686);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.003068);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.81015);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.989636);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.98439);
   hNCpi0inFVdis_stack_8->SetBinContent(22,15.14968);
   hNCpi0inFVdis_stack_8->SetBinContent(23,20.12321);
   hNCpi0inFVdis_stack_8->SetBinContent(24,29.54651);
   hNCpi0inFVdis_stack_8->SetBinContent(25,48.51956);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8943262);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.523158);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6902623);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.589028);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6303526);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5751328);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6035782);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6496031);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5900945);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.875632);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6999223);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5757948);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.747845);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7273965);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6896862);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6333514);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8622789);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8330072);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.029003);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.266195);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.019973);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.312996);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.414537);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.185835);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.662971);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1530065);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1281492);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1865925);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.129197);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1114219);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.08584075);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,18.10508);
   hCCpi0inFV_stack_10->SetBinContent(2,13.20943);
   hCCpi0inFV_stack_10->SetBinContent(3,14.70116);
   hCCpi0inFV_stack_10->SetBinContent(4,12.27595);
   hCCpi0inFV_stack_10->SetBinContent(5,10.34424);
   hCCpi0inFV_stack_10->SetBinContent(6,11.07735);
   hCCpi0inFV_stack_10->SetBinContent(7,12.55249);
   hCCpi0inFV_stack_10->SetBinContent(8,9.559944);
   hCCpi0inFV_stack_10->SetBinContent(9,12.70718);
   hCCpi0inFV_stack_10->SetBinContent(10,12.36705);
   hCCpi0inFV_stack_10->SetBinContent(11,10.75016);
   hCCpi0inFV_stack_10->SetBinContent(12,11.02636);
   hCCpi0inFV_stack_10->SetBinContent(13,12.55197);
   hCCpi0inFV_stack_10->SetBinContent(14,18.08945);
   hCCpi0inFV_stack_10->SetBinContent(15,12.61082);
   hCCpi0inFV_stack_10->SetBinContent(16,15.37291);
   hCCpi0inFV_stack_10->SetBinContent(17,17.38668);
   hCCpi0inFV_stack_10->SetBinContent(18,20.9452);
   hCCpi0inFV_stack_10->SetBinContent(19,19.44467);
   hCCpi0inFV_stack_10->SetBinContent(20,20.88747);
   hCCpi0inFV_stack_10->SetBinContent(21,35.71945);
   hCCpi0inFV_stack_10->SetBinContent(22,33.8153);
   hCCpi0inFV_stack_10->SetBinContent(23,35.22398);
   hCCpi0inFV_stack_10->SetBinContent(24,49.72976);
   hCCpi0inFV_stack_10->SetBinContent(25,75.43829);
   hCCpi0inFV_stack_10->SetBinError(1,2.110614);
   hCCpi0inFV_stack_10->SetBinError(2,1.865144);
   hCCpi0inFV_stack_10->SetBinError(3,1.901596);
   hCCpi0inFV_stack_10->SetBinError(4,1.790798);
   hCCpi0inFV_stack_10->SetBinError(5,1.592991);
   hCCpi0inFV_stack_10->SetBinError(6,1.547169);
   hCCpi0inFV_stack_10->SetBinError(7,1.787837);
   hCCpi0inFV_stack_10->SetBinError(8,1.506416);
   hCCpi0inFV_stack_10->SetBinError(9,1.75482);
   hCCpi0inFV_stack_10->SetBinError(10,1.761976);
   hCCpi0inFV_stack_10->SetBinError(11,1.556007);
   hCCpi0inFV_stack_10->SetBinError(12,1.645591);
   hCCpi0inFV_stack_10->SetBinError(13,1.766334);
   hCCpi0inFV_stack_10->SetBinError(14,2.124003);
   hCCpi0inFV_stack_10->SetBinError(15,1.777645);
   hCCpi0inFV_stack_10->SetBinError(16,2.025662);
   hCCpi0inFV_stack_10->SetBinError(17,2.124049);
   hCCpi0inFV_stack_10->SetBinError(18,2.284174);
   hCCpi0inFV_stack_10->SetBinError(19,2.22493);
   hCCpi0inFV_stack_10->SetBinError(20,2.296695);
   hCCpi0inFV_stack_10->SetBinError(21,3.078405);
   hCCpi0inFV_stack_10->SetBinError(22,2.91257);
   hCCpi0inFV_stack_10->SetBinError(23,2.978266);
   hCCpi0inFV_stack_10->SetBinError(24,3.535423);
   hCCpi0inFV_stack_10->SetBinError(25,4.430022);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,12.06999);
   hNCinFV_stack_11->SetBinContent(2,7.577631);
   hNCinFV_stack_11->SetBinContent(3,7.572759);
   hNCinFV_stack_11->SetBinContent(4,5.709405);
   hNCinFV_stack_11->SetBinContent(5,4.753879);
   hNCinFV_stack_11->SetBinContent(6,6.098258);
   hNCinFV_stack_11->SetBinContent(7,6.042603);
   hNCinFV_stack_11->SetBinContent(8,4.944141);
   hNCinFV_stack_11->SetBinContent(9,5.558677);
   hNCinFV_stack_11->SetBinContent(10,2.327221);
   hNCinFV_stack_11->SetBinContent(11,5.125801);
   hNCinFV_stack_11->SetBinContent(12,5.528049);
   hNCinFV_stack_11->SetBinContent(13,5.81432);
   hNCinFV_stack_11->SetBinContent(14,5.014052);
   hNCinFV_stack_11->SetBinContent(15,6.276704);
   hNCinFV_stack_11->SetBinContent(16,6.742055);
   hNCinFV_stack_11->SetBinContent(17,6.473506);
   hNCinFV_stack_11->SetBinContent(18,8.487326);
   hNCinFV_stack_11->SetBinContent(19,11.8271);
   hNCinFV_stack_11->SetBinContent(20,12.02872);
   hNCinFV_stack_11->SetBinContent(21,14.8162);
   hNCinFV_stack_11->SetBinContent(22,15.81885);
   hNCinFV_stack_11->SetBinContent(23,24.23323);
   hNCinFV_stack_11->SetBinContent(24,36.35726);
   hNCinFV_stack_11->SetBinContent(25,56.21742);
   hNCinFV_stack_11->SetBinError(1,1.830772);
   hNCinFV_stack_11->SetBinError(2,1.399763);
   hNCinFV_stack_11->SetBinError(3,1.441167);
   hNCinFV_stack_11->SetBinError(4,1.15243);
   hNCinFV_stack_11->SetBinError(5,1.069066);
   hNCinFV_stack_11->SetBinError(6,1.249865);
   hNCinFV_stack_11->SetBinError(7,1.499317);
   hNCinFV_stack_11->SetBinError(8,1.037097);
   hNCinFV_stack_11->SetBinError(9,1.148002);
   hNCinFV_stack_11->SetBinError(10,0.6580737);
   hNCinFV_stack_11->SetBinError(11,1.176069);
   hNCinFV_stack_11->SetBinError(12,1.192959);
   hNCinFV_stack_11->SetBinError(13,1.378341);
   hNCinFV_stack_11->SetBinError(14,1.183009);
   hNCinFV_stack_11->SetBinError(15,1.229257);
   hNCinFV_stack_11->SetBinError(16,1.398393);
   hNCinFV_stack_11->SetBinError(17,1.446924);
   hNCinFV_stack_11->SetBinError(18,1.793401);
   hNCinFV_stack_11->SetBinError(19,1.909919);
   hNCinFV_stack_11->SetBinError(20,1.918573);
   hNCinFV_stack_11->SetBinError(21,2.300056);
   hNCinFV_stack_11->SetBinError(22,2.004456);
   hNCinFV_stack_11->SetBinError(23,2.796589);
   hNCinFV_stack_11->SetBinError(24,3.296814);
   hNCinFV_stack_11->SetBinError(25,4.482039);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,12.60929);
   hnumuCCinFV_stack_12->SetBinContent(2,9.796131);
   hnumuCCinFV_stack_12->SetBinContent(3,8.07844);
   hnumuCCinFV_stack_12->SetBinContent(4,8.108222);
   hnumuCCinFV_stack_12->SetBinContent(5,8.128864);
   hnumuCCinFV_stack_12->SetBinContent(6,7.688396);
   hnumuCCinFV_stack_12->SetBinContent(7,5.487226);
   hnumuCCinFV_stack_12->SetBinContent(8,10.75767);
   hnumuCCinFV_stack_12->SetBinContent(9,7.693832);
   hnumuCCinFV_stack_12->SetBinContent(10,12.7399);
   hnumuCCinFV_stack_12->SetBinContent(11,11.50335);
   hnumuCCinFV_stack_12->SetBinContent(12,10.86864);
   hnumuCCinFV_stack_12->SetBinContent(13,17.67995);
   hnumuCCinFV_stack_12->SetBinContent(14,16.16781);
   hnumuCCinFV_stack_12->SetBinContent(15,17.12248);
   hnumuCCinFV_stack_12->SetBinContent(16,15.87965);
   hnumuCCinFV_stack_12->SetBinContent(17,17.31015);
   hnumuCCinFV_stack_12->SetBinContent(18,19.00048);
   hnumuCCinFV_stack_12->SetBinContent(19,17.16654);
   hnumuCCinFV_stack_12->SetBinContent(20,18.99686);
   hnumuCCinFV_stack_12->SetBinContent(21,25.84149);
   hnumuCCinFV_stack_12->SetBinContent(22,22.79268);
   hnumuCCinFV_stack_12->SetBinContent(23,17.50226);
   hnumuCCinFV_stack_12->SetBinContent(24,27.17256);
   hnumuCCinFV_stack_12->SetBinContent(25,40.61244);
   hnumuCCinFV_stack_12->SetBinError(1,1.83501);
   hnumuCCinFV_stack_12->SetBinError(2,1.696438);
   hnumuCCinFV_stack_12->SetBinError(3,1.470831);
   hnumuCCinFV_stack_12->SetBinError(4,1.83382);
   hnumuCCinFV_stack_12->SetBinError(5,1.50182);
   hnumuCCinFV_stack_12->SetBinError(6,1.823083);
   hnumuCCinFV_stack_12->SetBinError(7,1.150385);
   hnumuCCinFV_stack_12->SetBinError(8,1.787739);
   hnumuCCinFV_stack_12->SetBinError(9,1.466917);
   hnumuCCinFV_stack_12->SetBinError(10,2.015762);
   hnumuCCinFV_stack_12->SetBinError(11,1.954677);
   hnumuCCinFV_stack_12->SetBinError(12,2.129417);
   hnumuCCinFV_stack_12->SetBinError(13,2.492302);
   hnumuCCinFV_stack_12->SetBinError(14,2.153602);
   hnumuCCinFV_stack_12->SetBinError(15,2.58589);
   hnumuCCinFV_stack_12->SetBinError(16,2.411555);
   hnumuCCinFV_stack_12->SetBinError(17,2.349062);
   hnumuCCinFV_stack_12->SetBinError(18,2.709285);
   hnumuCCinFV_stack_12->SetBinError(19,2.161426);
   hnumuCCinFV_stack_12->SetBinError(20,3.357245);
   hnumuCCinFV_stack_12->SetBinError(21,3.047115);
   hnumuCCinFV_stack_12->SetBinError(22,2.748979);
   hnumuCCinFV_stack_12->SetBinError(23,2.429256);
   hnumuCCinFV_stack_12->SetBinError(24,2.996471);
   hnumuCCinFV_stack_12->SetBinError(25,3.556324);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.441907);
   hnueCCinFV_stack_13->SetBinContent(4,0.497884);
   hnueCCinFV_stack_13->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(6,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(17,0.2511644);
   hnueCCinFV_stack_13->SetBinContent(18,1.24724);
   hnueCCinFV_stack_13->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(22,1.044464);
   hnueCCinFV_stack_13->SetBinContent(23,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(24,1.292996);
   hnueCCinFV_stack_13->SetBinContent(25,10.49236);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.3143499);
   hnueCCinFV_stack_13->SetBinError(4,0.3520617);
   hnueCCinFV_stack_13->SetBinError(5,0.3160204);
   hnueCCinFV_stack_13->SetBinError(6,0.3401778);
   hnueCCinFV_stack_13->SetBinError(7,0.4132436);
   hnueCCinFV_stack_13->SetBinError(8,0.2556436);
   hnueCCinFV_stack_13->SetBinError(9,0.5946997);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.3174228);
   hnueCCinFV_stack_13->SetBinError(17,0.2511644);
   hnueCCinFV_stack_13->SetBinError(18,0.6528325);
   hnueCCinFV_stack_13->SetBinError(19,0.2171002);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.438694);
   hnueCCinFV_stack_13->SetBinError(22,0.5321953);
   hnueCCinFV_stack_13->SetBinError(23,0.4379386);
   hnueCCinFV_stack_13->SetBinError(24,0.5974015);
   hnueCCinFV_stack_13->SetBinError(25,2.435422);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__14->SetBinContent(1,103.7512);
   hmcerror__14->SetBinContent(2,73.31461);
   hmcerror__14->SetBinContent(3,68.74016);
   hmcerror__14->SetBinContent(4,64.78423);
   hmcerror__14->SetBinContent(5,62.35702);
   hmcerror__14->SetBinContent(6,62.02036);
   hmcerror__14->SetBinContent(7,70.65924);
   hmcerror__14->SetBinContent(8,66.95018);
   hmcerror__14->SetBinContent(9,63.05676);
   hmcerror__14->SetBinContent(10,73.34647);
   hmcerror__14->SetBinContent(11,75.27711);
   hmcerror__14->SetBinContent(12,77.60033);
   hmcerror__14->SetBinContent(13,89.97917);
   hmcerror__14->SetBinContent(14,94.18647);
   hmcerror__14->SetBinContent(15,103.3905);
   hmcerror__14->SetBinContent(16,97.83397);
   hmcerror__14->SetBinContent(17,108.1004);
   hmcerror__14->SetBinContent(18,120.1191);
   hmcerror__14->SetBinContent(19,133.7802);
   hmcerror__14->SetBinContent(20,149.3075);
   hmcerror__14->SetBinContent(21,191.2596);
   hmcerror__14->SetBinContent(22,191.8722);
   hmcerror__14->SetBinContent(23,217.3554);
   hmcerror__14->SetBinContent(24,285.6451);
   hmcerror__14->SetBinContent(25,404.9586);
   hmcerror__14->SetBinError(1,36.50787);
   hmcerror__14->SetBinError(2,28.38335);
   hmcerror__14->SetBinError(3,32.3665);
   hmcerror__14->SetBinError(4,27.53947);
   hmcerror__14->SetBinError(5,29.55771);
   hmcerror__14->SetBinError(6,25.60546);
   hmcerror__14->SetBinError(7,26.45346);
   hmcerror__14->SetBinError(8,28.05134);
   hmcerror__14->SetBinError(9,29.46121);
   hmcerror__14->SetBinError(10,30.23868);
   hmcerror__14->SetBinError(11,31.45359);
   hmcerror__14->SetBinError(12,33.23997);
   hmcerror__14->SetBinError(13,35.90017);
   hmcerror__14->SetBinError(14,37.98073);
   hmcerror__14->SetBinError(15,41.51247);
   hmcerror__14->SetBinError(16,41.48467);
   hmcerror__14->SetBinError(17,42.59374);
   hmcerror__14->SetBinError(18,48.97291);
   hmcerror__14->SetBinError(19,53.618);
   hmcerror__14->SetBinError(20,64.40743);
   hmcerror__14->SetBinError(21,71.75929);
   hmcerror__14->SetBinError(22,71.58971);
   hmcerror__14->SetBinError(23,83.45413);
   hmcerror__14->SetBinError(24,96.87488);
   hmcerror__14->SetBinError(25,107.6749);
   hmcerror__14->SetBinError(26,0.3895343);
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
   
   Double_t _fx3017[25] = {
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
   Double_t _fy3017[25] = {
   81,
   67,
   52,
   70,
   52,
   72,
   64,
   68,
   62,
   73,
   69,
   66,
   69,
   87,
   90,
   79,
   86,
   113,
   97,
   123,
   142,
   167,
   220,
   238,
   314};
   Double_t _felx3017[25] = {
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
   Double_t _fely3017[25] = {
   9.1239,
   8.3119,
   7.3419,
   8.4925,
   7.3419,
   8.6108,
   8.1273,
   8.3726,
   8.0018,
   8.6693,
   8.4327,
   8.2509,
   8.4327,
   9.4503,
   9.6093,
   9.0124,
   9.3967,
   10.63015,
   9.9704,
   11.09054,
   11.91638,
   12.92285,
   14.8324,
   15.42725,
   17.72005};
   Double_t _fehx3017[25] = {
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
   Double_t _fehy3017[25] = {
   8.9221,
   8.1094,
   7.1381,
   8.2902,
   7.1381,
   8.4085,
   7.9246,
   8.1701,
   7.7989,
   8.4672,
   8.2304,
   8.0483,
   8.2304,
   9.2488,
   9.4079,
   8.8105,
   9.1951,
   10.63015,
   9.769,
   11.09054,
   11.91638,
   12.92285,
   14.8324,
   15.42725,
   17.72005};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(15.95191);
   Graph_Graph3017->SetMaximum(360.4262);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[25] = {
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
   Double_t _fely3018[25] = {
   0.3518792,
   0.3871446,
   0.4708529,
   0.4250953,
   0.4740077,
   0.4128557,
   0.3743808,
   0.4189882,
   0.4672174,
   0.4122719,
   0.4178373,
   0.4283483,
   0.3989831,
   0.4032504,
   0.4015115,
   0.4240313,
   0.3940201,
   0.4077028,
   0.4007918,
   0.4313745,
   0.3751933,
   0.3731114,
   0.3839524,
   0.3391443,
   0.2658911};
   Double_t _fehx3018[25] = {
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
   Double_t _fehy3018[25] = {
   0.3518792,
   0.3871446,
   0.4708529,
   0.4250953,
   0.4740077,
   0.4128557,
   0.3743808,
   0.4189882,
   0.4672174,
   0.4122719,
   0.4178373,
   0.4283483,
   0.3989831,
   0.4032504,
   0.4015115,
   0.4240313,
   0.3940201,
   0.4077028,
   0.4007918,
   0.4313745,
   0.3751933,
   0.3731114,
   0.3839524,
   0.3391443,
   0.2658911};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
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
   Double_t _fely3019[25] = {
   0.2797175,
   0.3313338,
   0.334305,
   0.3622013,
   0.387044,
   0.3694888,
   0.3022522,
   0.3423041,
   0.3746061,
   0.3442118,
   0.361656,
   0.3921598,
   0.3562592,
   0.3697998,
   0.3736579,
   0.3894663,
   0.3661119,
   0.373875,
   0.3810528,
   0.375439,
   0.3275688,
   0.3463396,
   0.3276698,
   0.2859632,
   0.2436094};
   Double_t _fehx3019[25] = {
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
   Double_t _fehy3019[25] = {
   0.2797175,
   0.3313338,
   0.334305,
   0.3622013,
   0.387044,
   0.3694888,
   0.3022522,
   0.3423041,
   0.3746061,
   0.3442118,
   0.361656,
   0.3921598,
   0.3562592,
   0.3697998,
   0.3736579,
   0.3894663,
   0.3661119,
   0.373875,
   0.3810528,
   0.375439,
   0.3275688,
   0.3463396,
   0.3276698,
   0.2859632,
   0.2436094};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3020[25] = {
   0.7807141,
   0.9138697,
   0.7564719,
   1.08051,
   0.8339077,
   1.160909,
   0.9057556,
   1.015681,
   0.9832411,
   0.9952763,
   0.9166132,
   0.8505118,
   0.7668441,
   0.9236996,
   0.8704863,
   0.8074905,
   0.7955564,
   0.9407326,
   0.7250701,
   0.8238034,
   0.7424466,
   0.870371,
   1.012167,
   0.8332019,
   0.7753879};
   Double_t _felx3020[25] = {
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
   Double_t _fely3020[25] = {
   0.08794022,
   0.113373,
   0.1068066,
   0.131089,
   0.1177398,
   0.1388383,
   0.115021,
   0.1250572,
   0.1268984,
   0.1181966,
   0.1120221,
   0.1063256,
   0.09371836,
   0.1003361,
   0.09294182,
   0.09211933,
   0.08692563,
   0.08849668,
   0.07452824,
   0.07427985,
   0.06230473,
   0.06735133,
   0.06824029,
   0.05400846,
   0.04375767};
   Double_t _fehx3020[25] = {
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
   Double_t _fehy3020[25] = {
   0.08599518,
   0.110611,
   0.1038418,
   0.1279663,
   0.1144715,
   0.1355764,
   0.1121524,
   0.1220325,
   0.1236806,
   0.1154411,
   0.1093347,
   0.1037148,
   0.09147006,
   0.09819669,
   0.09099386,
   0.09005563,
   0.0850607,
   0.08849668,
   0.07302278,
   0.07427985,
   0.06230473,
   0.06735133,
   0.06824029,
   0.05400846,
   0.04375767};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.5849833);
   Graph_Graph3020->SetMaximum(1.361168);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_costheta_all",25,-1,1);

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
