#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Sep 28 18:06:31 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-230.7692,-6.66,1692.308,736.4558);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__22->SetBinContent(1,40.24178);
   hmc__22->SetBinContent(2,168.4851);
   hmc__22->SetBinContent(3,252.655);
   hmc__22->SetBinContent(4,250.6719);
   hmc__22->SetBinContent(5,232.8977);
   hmc__22->SetBinContent(6,203.5246);
   hmc__22->SetBinContent(7,147.6738);
   hmc__22->SetBinContent(8,112.7558);
   hmc__22->SetBinContent(9,77.40289);
   hmc__22->SetBinContent(10,62.98164);
   hmc__22->SetBinContent(11,39.3864);
   hmc__22->SetBinContent(12,27.89264);
   hmc__22->SetBinContent(13,25.14911);
   hmc__22->SetBinContent(14,20.26748);
   hmc__22->SetBinContent(15,13.30181);
   hmc__22->SetBinContent(16,13.72481);
   hmc__22->SetBinContent(17,11.50406);
   hmc__22->SetBinContent(18,5.365215);
   hmc__22->SetBinContent(19,6.284025);
   hmc__22->SetBinContent(20,5.594877);
   hmc__22->SetBinContent(21,3.787108);
   hmc__22->SetBinContent(22,6.225769);
   hmc__22->SetBinContent(23,2.655129);
   hmc__22->SetBinContent(24,3.531936);
   hmc__22->SetBinContent(25,2.635675);
   hmc__22->SetBinContent(26,28.085);
   hmc__22->SetBinError(1,8.993413);
   hmc__22->SetBinError(2,32.79079);
   hmc__22->SetBinError(3,51.3506);
   hmc__22->SetBinError(4,58.34253);
   hmc__22->SetBinError(5,55.86422);
   hmc__22->SetBinError(6,48.58732);
   hmc__22->SetBinError(7,34.61083);
   hmc__22->SetBinError(8,23.82088);
   hmc__22->SetBinError(9,17.99245);
   hmc__22->SetBinError(10,14.40425);
   hmc__22->SetBinError(11,8.641597);
   hmc__22->SetBinError(12,7.066711);
   hmc__22->SetBinError(13,6.067148);
   hmc__22->SetBinError(14,4.855677);
   hmc__22->SetBinError(15,3.533812);
   hmc__22->SetBinError(16,3.420946);
   hmc__22->SetBinError(17,2.879213);
   hmc__22->SetBinError(18,1.756997);
   hmc__22->SetBinError(19,1.808095);
   hmc__22->SetBinError(20,1.807076);
   hmc__22->SetBinError(21,1.407416);
   hmc__22->SetBinError(22,2.090322);
   hmc__22->SetBinError(23,1.326496);
   hmc__22->SetBinError(24,2.015997);
   hmc__22->SetBinError(25,1.152119);
   hmc__22->SetBinError(26,5.544489);
   hmc__22->SetMinimum(-6.66);
   hmc__22->SetMaximum(699.3);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,1500);
   hs8_stack_8->SetMinimum(-2.264013e-08);
   hs8_stack_8->SetMaximum(265.2878);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.3900497);
   hbadmatch_stack_1->SetBinContent(2,0.4250777);
   hbadmatch_stack_1->SetBinContent(3,0.536893);
   hbadmatch_stack_1->SetBinContent(4,2.029152);
   hbadmatch_stack_1->SetBinContent(5,1.691442);
   hbadmatch_stack_1->SetBinContent(6,0.4129704);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.612897);
   hbadmatch_stack_1->SetBinContent(9,0.8302661);
   hbadmatch_stack_1->SetBinContent(10,0.5884556);
   hbadmatch_stack_1->SetBinContent(11,0.4103338);
   hbadmatch_stack_1->SetBinContent(13,0.5905072);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(17,0.4100147);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.2758068);
   hbadmatch_stack_1->SetBinError(2,0.3014072);
   hbadmatch_stack_1->SetBinError(3,0.3929602);
   hbadmatch_stack_1->SetBinError(4,0.9435386);
   hbadmatch_stack_1->SetBinError(5,0.5682573);
   hbadmatch_stack_1->SetBinError(6,0.2923408);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.3544601);
   hbadmatch_stack_1->SetBinError(9,0.4858688);
   hbadmatch_stack_1->SetBinError(10,0.3397478);
   hbadmatch_stack_1->SetBinError(11,0.2903959);
   hbadmatch_stack_1->SetBinError(13,0.4409546);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(17,0.4100147);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,0.973192);
   hext_stack_2->SetBinContent(2,8.712873);
   hext_stack_2->SetBinContent(3,7.19463);
   hext_stack_2->SetBinContent(4,6.068624);
   hext_stack_2->SetBinContent(5,11.59655);
   hext_stack_2->SetBinContent(6,5.986423);
   hext_stack_2->SetBinContent(7,2.599588);
   hext_stack_2->SetBinContent(8,5.718277);
   hext_stack_2->SetBinContent(9,1.454812);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,1.137595);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,0.9660115);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,1.704188);
   hext_stack_2->SetBinError(1,0.5618727);
   hext_stack_2->SetBinError(2,2.094001);
   hext_stack_2->SetBinError(3,1.820757);
   hext_stack_2->SetBinError(4,1.677259);
   hext_stack_2->SetBinError(5,2.517529);
   hext_stack_2->SetBinError(6,1.65925);
   hext_stack_2->SetBinError(7,0.9884288);
   hext_stack_2->SetBinError(8,1.782259);
   hext_stack_2->SetBinError(9,0.8615765);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.6602113);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,0.7189592);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.7656743);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.3569671);
   hdirt_stack_3->SetBinContent(2,0.3569671);
   hdirt_stack_3->SetBinContent(3,0.4853765);
   hdirt_stack_3->SetBinContent(4,0.5174471);
   hdirt_stack_3->SetBinContent(5,0.9993711);
   hdirt_stack_3->SetBinContent(6,0.5200806);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.1545866);
   hdirt_stack_3->SetBinError(1,0.258803);
   hdirt_stack_3->SetBinError(2,0.258803);
   hdirt_stack_3->SetBinError(3,0.3448585);
   hdirt_stack_3->SetBinError(4,0.3827593);
   hdirt_stack_3->SetBinError(5,0.4775119);
   hdirt_stack_3->SetBinError(6,0.4061954);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.1545866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.3934307);
   houtFV_stack_4->SetBinContent(2,4.69119);
   houtFV_stack_4->SetBinContent(3,4.168746);
   houtFV_stack_4->SetBinContent(4,3.324057);
   houtFV_stack_4->SetBinContent(5,3.115115);
   houtFV_stack_4->SetBinContent(6,2.719156);
   houtFV_stack_4->SetBinContent(7,1.826055);
   houtFV_stack_4->SetBinContent(8,1.517089);
   houtFV_stack_4->SetBinContent(9,1.371936);
   houtFV_stack_4->SetBinContent(10,2.024901);
   houtFV_stack_4->SetBinContent(11,0.3995008);
   houtFV_stack_4->SetBinContent(12,0.6272855);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.3616262);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinError(1,0.2781975);
   houtFV_stack_4->SetBinError(2,1.906516);
   houtFV_stack_4->SetBinError(3,1.014228);
   houtFV_stack_4->SetBinError(4,0.8844471);
   houtFV_stack_4->SetBinError(5,0.8662495);
   houtFV_stack_4->SetBinError(6,0.7669774);
   houtFV_stack_4->SetBinError(7,0.7380672);
   houtFV_stack_4->SetBinError(8,0.5887087);
   houtFV_stack_4->SetBinError(9,0.5185478);
   houtFV_stack_4->SetBinError(10,0.8364805);
   houtFV_stack_4->SetBinError(11,0.2825688);
   houtFV_stack_4->SetBinError(12,0.4733789);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.3616262);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.2770047);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01269218);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.2239795);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.933037);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.827177);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.421205);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.980596);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.035184);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.329321);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.395385);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.8117297);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.7224497);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.7222204);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1613726);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.08545271);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7727262);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.05031924);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.138146);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1876993);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1591127);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.1335202);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01491798);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.01754354);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.05785787);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.0496839);
   hNCpi0inFVres_stack_7->SetBinError(1,0.0842477);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5097836);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6259919);
   hNCpi0inFVres_stack_7->SetBinError(4,0.61443);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4597402);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4997159);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3588684);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3563475);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1944815);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2472143);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4192535);
   hNCpi0inFVres_stack_7->SetBinError(12,0.07356968);
   hNCpi0inFVres_stack_7->SetBinError(13,0.04402303);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4555527);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02911306);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1225288);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1038539);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1281312);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1038335);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01491798);
   hNCpi0inFVres_stack_7->SetBinError(21,0.01754354);
   hNCpi0inFVres_stack_7->SetBinError(24,0.05785787);
   hNCpi0inFVres_stack_7->SetBinError(26,0.03615114);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3132464);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.674126);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.69174);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.615253);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.787303);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7833601);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.868433);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.429953);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.020254);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5570812);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.537862);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.319639);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3407284);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1544605);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1540738);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6586314);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2576721);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.05306552);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.194636);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.079918);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.9691895);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2079866);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4481969);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5056711);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3189397);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5490777);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2747927);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.447947);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5730386);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3174845);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1753799);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5700051);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2031554);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1430684);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.09300743);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.09634349);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.351013);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1377301);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.03757277);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1376284);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7659409);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5768794);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,27.54033);
   hCCpi0inFV_stack_10->SetBinContent(2,110.6471);
   hCCpi0inFV_stack_10->SetBinContent(3,169.5839);
   hCCpi0inFV_stack_10->SetBinContent(4,184.4598);
   hCCpi0inFV_stack_10->SetBinContent(5,165.0335);
   hCCpi0inFV_stack_10->SetBinContent(6,153.8875);
   hCCpi0inFV_stack_10->SetBinContent(7,113.1838);
   hCCpi0inFV_stack_10->SetBinContent(8,78.62277);
   hCCpi0inFV_stack_10->SetBinContent(9,52.65755);
   hCCpi0inFV_stack_10->SetBinContent(10,43.82166);
   hCCpi0inFV_stack_10->SetBinContent(11,24.78423);
   hCCpi0inFV_stack_10->SetBinContent(12,19.28659);
   hCCpi0inFV_stack_10->SetBinContent(13,15.40416);
   hCCpi0inFV_stack_10->SetBinContent(14,11.75727);
   hCCpi0inFV_stack_10->SetBinContent(15,7.572528);
   hCCpi0inFV_stack_10->SetBinContent(16,8.196249);
   hCCpi0inFV_stack_10->SetBinContent(17,6.10193);
   hCCpi0inFV_stack_10->SetBinContent(18,3.030797);
   hCCpi0inFV_stack_10->SetBinContent(19,4.242065);
   hCCpi0inFV_stack_10->SetBinContent(20,4.149991);
   hCCpi0inFV_stack_10->SetBinContent(21,2.734337);
   hCCpi0inFV_stack_10->SetBinContent(22,3.622633);
   hCCpi0inFV_stack_10->SetBinContent(23,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(24,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(25,2.635675);
   hCCpi0inFV_stack_10->SetBinContent(26,16.10961);
   hCCpi0inFV_stack_10->SetBinError(1,2.693637);
   hCCpi0inFV_stack_10->SetBinError(2,5.258);
   hCCpi0inFV_stack_10->SetBinError(3,6.515377);
   hCCpi0inFV_stack_10->SetBinError(4,6.855664);
   hCCpi0inFV_stack_10->SetBinError(5,6.424313);
   hCCpi0inFV_stack_10->SetBinError(6,6.222662);
   hCCpi0inFV_stack_10->SetBinError(7,5.389487);
   hCCpi0inFV_stack_10->SetBinError(8,4.4053);
   hCCpi0inFV_stack_10->SetBinError(9,3.551686);
   hCCpi0inFV_stack_10->SetBinError(10,3.323099);
   hCCpi0inFV_stack_10->SetBinError(11,2.457695);
   hCCpi0inFV_stack_10->SetBinError(12,2.237584);
   hCCpi0inFV_stack_10->SetBinError(13,1.979686);
   hCCpi0inFV_stack_10->SetBinError(14,1.7029);
   hCCpi0inFV_stack_10->SetBinError(15,1.387883);
   hCCpi0inFV_stack_10->SetBinError(16,1.481439);
   hCCpi0inFV_stack_10->SetBinError(17,1.240429);
   hCCpi0inFV_stack_10->SetBinError(18,0.831764);
   hCCpi0inFV_stack_10->SetBinError(19,1.066015);
   hCCpi0inFV_stack_10->SetBinError(20,1.075944);
   hCCpi0inFV_stack_10->SetBinError(21,0.8558255);
   hCCpi0inFV_stack_10->SetBinError(22,0.8992132);
   hCCpi0inFV_stack_10->SetBinError(23,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(24,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(25,0.7834381);
   hCCpi0inFV_stack_10->SetBinError(26,1.93999);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.5352025);
   hNCinFV_stack_11->SetBinContent(2,0.9286332);
   hNCinFV_stack_11->SetBinContent(3,1.463836);
   hNCinFV_stack_11->SetBinContent(4,0.9801958);
   hNCinFV_stack_11->SetBinContent(5,1.860647);
   hNCinFV_stack_11->SetBinContent(6,0.536893);
   hNCinFV_stack_11->SetBinContent(7,0.9303237);
   hNCinFV_stack_11->SetBinContent(8,0.7868615);
   hNCinFV_stack_11->SetBinContent(9,0.1950248);
   hNCinFV_stack_11->SetBinContent(10,0.3917402);
   hNCinFV_stack_11->SetBinContent(11,0.3917402);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.3921167);
   hNCinFV_stack_11->SetBinError(2,0.48078);
   hNCinFV_stack_11->SetBinError(3,0.620407);
   hNCinFV_stack_11->SetBinError(4,0.4383608);
   hNCinFV_stack_11->SetBinError(5,0.6808988);
   hNCinFV_stack_11->SetBinError(6,0.3929602);
   hNCinFV_stack_11->SetBinError(7,0.4814682);
   hNCinFV_stack_11->SetBinError(8,0.3934307);
   hNCinFV_stack_11->SetBinError(9,0.1950249);
   hNCinFV_stack_11->SetBinError(10,0.2770047);
   hNCinFV_stack_11->SetBinError(11,0.2770047);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,9.515379);
   hnumuCCinFV_stack_12->SetBinContent(2,39.11617);
   hnumuCCinFV_stack_12->SetBinContent(3,63.50604);
   hnumuCCinFV_stack_12->SetBinContent(4,48.94954);
   hnumuCCinFV_stack_12->SetBinContent(5,44.29631);
   hnumuCCinFV_stack_12->SetBinContent(6,36.07809);
   hnumuCCinFV_stack_12->SetBinContent(7,24.94997);
   hnumuCCinFV_stack_12->SetBinContent(8,20.97699);
   hnumuCCinFV_stack_12->SetBinContent(9,18.5133);
   hnumuCCinFV_stack_12->SetBinContent(10,14.22656);
   hnumuCCinFV_stack_12->SetBinContent(11,9.372725);
   hnumuCCinFV_stack_12->SetBinContent(12,6.750977);
   hnumuCCinFV_stack_12->SetBinContent(13,7.551441);
   hnumuCCinFV_stack_12->SetBinContent(14,5.543231);
   hnumuCCinFV_stack_12->SetBinContent(15,4.353617);
   hnumuCCinFV_stack_12->SetBinContent(16,4.015651);
   hnumuCCinFV_stack_12->SetBinContent(17,4.54674);
   hnumuCCinFV_stack_12->SetBinContent(18,1.436217);
   hnumuCCinFV_stack_12->SetBinContent(19,1.322064);
   hnumuCCinFV_stack_12->SetBinContent(20,1.374168);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8397597);
   hnumuCCinFV_stack_12->SetBinContent(22,1.741845);
   hnumuCCinFV_stack_12->SetBinContent(23,1.322064);
   hnumuCCinFV_stack_12->SetBinContent(24,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,7.983518);
   hnumuCCinFV_stack_12->SetBinError(1,1.546496);
   hnumuCCinFV_stack_12->SetBinError(2,3.83671);
   hnumuCCinFV_stack_12->SetBinError(3,4.625181);
   hnumuCCinFV_stack_12->SetBinError(4,3.596399);
   hnumuCCinFV_stack_12->SetBinError(5,3.418074);
   hnumuCCinFV_stack_12->SetBinError(6,3.371109);
   hnumuCCinFV_stack_12->SetBinError(7,2.583803);
   hnumuCCinFV_stack_12->SetBinError(8,2.446908);
   hnumuCCinFV_stack_12->SetBinError(9,2.212829);
   hnumuCCinFV_stack_12->SetBinError(10,1.907863);
   hnumuCCinFV_stack_12->SetBinError(11,1.516657);
   hnumuCCinFV_stack_12->SetBinError(12,1.324292);
   hnumuCCinFV_stack_12->SetBinError(13,1.428365);
   hnumuCCinFV_stack_12->SetBinError(14,1.202056);
   hnumuCCinFV_stack_12->SetBinError(15,1.10641);
   hnumuCCinFV_stack_12->SetBinError(16,1.082195);
   hnumuCCinFV_stack_12->SetBinError(17,1.196652);
   hnumuCCinFV_stack_12->SetBinError(18,0.5461811);
   hnumuCCinFV_stack_12->SetBinError(19,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(20,0.5758581);
   hnumuCCinFV_stack_12->SetBinError(21,0.4214177);
   hnumuCCinFV_stack_12->SetBinError(22,0.6778848);
   hnumuCCinFV_stack_12->SetBinError(23,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(24,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,1.419185);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(6,0.536893);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,1.217248);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.6301904);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.536893);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(6,0.3929602);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.6211758);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.3654999);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.3929602);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__23->SetBinContent(1,40.24178);
   hmcerror__23->SetBinContent(2,168.4851);
   hmcerror__23->SetBinContent(3,252.655);
   hmcerror__23->SetBinContent(4,250.6719);
   hmcerror__23->SetBinContent(5,232.8977);
   hmcerror__23->SetBinContent(6,203.5246);
   hmcerror__23->SetBinContent(7,147.6738);
   hmcerror__23->SetBinContent(8,112.7558);
   hmcerror__23->SetBinContent(9,77.40289);
   hmcerror__23->SetBinContent(10,62.98164);
   hmcerror__23->SetBinContent(11,39.3864);
   hmcerror__23->SetBinContent(12,27.89264);
   hmcerror__23->SetBinContent(13,25.14911);
   hmcerror__23->SetBinContent(14,20.26748);
   hmcerror__23->SetBinContent(15,13.30181);
   hmcerror__23->SetBinContent(16,13.72481);
   hmcerror__23->SetBinContent(17,11.50406);
   hmcerror__23->SetBinContent(18,5.365215);
   hmcerror__23->SetBinContent(19,6.284025);
   hmcerror__23->SetBinContent(20,5.594877);
   hmcerror__23->SetBinContent(21,3.787108);
   hmcerror__23->SetBinContent(22,6.225769);
   hmcerror__23->SetBinContent(23,2.655129);
   hmcerror__23->SetBinContent(24,3.531936);
   hmcerror__23->SetBinContent(25,2.635675);
   hmcerror__23->SetBinContent(26,28.085);
   hmcerror__23->SetBinError(1,8.993413);
   hmcerror__23->SetBinError(2,32.79079);
   hmcerror__23->SetBinError(3,51.3506);
   hmcerror__23->SetBinError(4,58.34253);
   hmcerror__23->SetBinError(5,55.86422);
   hmcerror__23->SetBinError(6,48.58732);
   hmcerror__23->SetBinError(7,34.61083);
   hmcerror__23->SetBinError(8,23.82088);
   hmcerror__23->SetBinError(9,17.99245);
   hmcerror__23->SetBinError(10,14.40425);
   hmcerror__23->SetBinError(11,8.641597);
   hmcerror__23->SetBinError(12,7.066711);
   hmcerror__23->SetBinError(13,6.067148);
   hmcerror__23->SetBinError(14,4.855677);
   hmcerror__23->SetBinError(15,3.533812);
   hmcerror__23->SetBinError(16,3.420946);
   hmcerror__23->SetBinError(17,2.879213);
   hmcerror__23->SetBinError(18,1.756997);
   hmcerror__23->SetBinError(19,1.808095);
   hmcerror__23->SetBinError(20,1.807076);
   hmcerror__23->SetBinError(21,1.407416);
   hmcerror__23->SetBinError(22,2.090322);
   hmcerror__23->SetBinError(23,1.326496);
   hmcerror__23->SetBinError(24,2.015997);
   hmcerror__23->SetBinError(25,1.152119);
   hmcerror__23->SetBinError(26,5.544489);
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
   Double_t _fy3029[25] = {
   50,
   221,
   333,
   269,
   208,
   143,
   133,
   94,
   79,
   57,
   39,
   41,
   15,
   11,
   6,
   14,
   8,
   13,
   7,
   2,
   5,
   3,
   3,
   5,
   4};
   Double_t _felx3029[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3029[25] = {
   7.2025,
   14.86607,
   18.24829,
   16.40122,
   14.42221,
   11.95826,
   11.53256,
   9.8173,
   9.0124,
   7.679,
   6.3813,
   6.5384,
   4.0385,
   3.4975,
   2.67925,
   3.9102,
   3.0307,
   3.77763,
   2.85954,
   2,
   2.48995,
   2.143368,
   2.143368,
   2.48995,
   2.29683};
   Double_t _fehx3029[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3029[25] = {
   6.9985,
   14.86607,
   18.24829,
   16.40122,
   14.42221,
   11.95826,
   11.53256,
   9.616,
   8.8105,
   7.4757,
   6.1757,
   6.3331,
   3.8197,
   3.27,
   2.41858,
   3.6898,
   2.7896,
   3.5552,
   2.61053,
   1.51917,
   2.21064,
   1.72422,
   1.72422,
   2.21064,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1650);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(386.3731);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=65.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1763.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 55.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  18.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1215.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 9.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 370.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.0","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3030[25] = {
   0.2234845,
   0.1946212,
   0.2032439,
   0.2327446,
   0.2398659,
   0.2387294,
   0.2343735,
   0.2112608,
   0.2324519,
   0.2287055,
   0.2194056,
   0.2533539,
   0.241247,
   0.2395797,
   0.265664,
   0.2492527,
   0.250278,
   0.3274794,
   0.2877287,
   0.3229875,
   0.3716335,
   0.3357532,
   0.4995976,
   0.5707909,
   0.4371246};
   Double_t _fehx3030[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3030[25] = {
   0.2234845,
   0.1946212,
   0.2032439,
   0.2327446,
   0.2398659,
   0.2387294,
   0.2343735,
   0.2112608,
   0.2324519,
   0.2287055,
   0.2194056,
   0.2533539,
   0.241247,
   0.2395797,
   0.265664,
   0.2492527,
   0.250278,
   0.3274794,
   0.2877287,
   0.3229875,
   0.3716335,
   0.3357532,
   0.4995976,
   0.5707909,
   0.4371246};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1650);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3031[25] = {
   0.2234845,
   0.1946212,
   0.2032439,
   0.2327446,
   0.2398659,
   0.2387294,
   0.2343735,
   0.2112608,
   0.2324519,
   0.2287055,
   0.2194056,
   0.2533539,
   0.241247,
   0.2395797,
   0.265664,
   0.2492527,
   0.250278,
   0.3274794,
   0.2877287,
   0.3229875,
   0.3716335,
   0.3357532,
   0.4995976,
   0.5707909,
   0.4371246};
   Double_t _fehx3031[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3031[25] = {
   0.2234845,
   0.1946212,
   0.2032439,
   0.2327446,
   0.2398659,
   0.2387294,
   0.2343735,
   0.2112608,
   0.2324519,
   0.2287055,
   0.2194056,
   0.2533539,
   0.241247,
   0.2395797,
   0.265664,
   0.2492527,
   0.250278,
   0.3274794,
   0.2877287,
   0.3229875,
   0.3716335,
   0.3357532,
   0.4995976,
   0.5707909,
   0.4371246};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1650);
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
   Double_t _fy3032[25] = {
   1.24249,
   1.311688,
   1.318003,
   1.073116,
   0.8930958,
   0.7026177,
   0.9006338,
   0.8336599,
   1.020634,
   0.9050257,
   0.9901895,
   1.469922,
   0.5964426,
   0.5427413,
   0.4510666,
   1.02005,
   0.6954069,
   2.423016,
   1.113936,
   0.3574699,
   1.320269,
   0.4818682,
   1.129888,
   1.415654,
   1.517638};
   Double_t _felx3032[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3032[25] = {
   0.1789807,
   0.08823371,
   0.0722261,
   0.06542904,
   0.06192506,
   0.05875585,
   0.07809485,
   0.08706691,
   0.1164349,
   0.1219244,
   0.1620179,
   0.2344131,
   0.1605822,
   0.1725671,
   0.20142,
   0.2849,
   0.2634462,
   0.7040966,
   0.4550491,
   0.3574699,
   0.6574805,
   0.3442736,
   0.8072556,
   0.7049817,
   0.8714389};
   Double_t _fehx3032[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3032[25] = {
   0.1739113,
   0.08823371,
   0.0722261,
   0.06542904,
   0.06192506,
   0.05875585,
   0.07809485,
   0.08528163,
   0.1138265,
   0.1186965,
   0.1567978,
   0.2270527,
   0.1518821,
   0.1613422,
   0.1818234,
   0.2688415,
   0.2424884,
   0.6626388,
   0.4154232,
   0.2715287,
   0.5837277,
   0.2769489,
   0.6493921,
   0.6259004,
   0.7519363};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1650);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(3.39422);
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
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
