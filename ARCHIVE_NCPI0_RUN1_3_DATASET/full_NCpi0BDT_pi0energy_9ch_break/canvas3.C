#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Jun  5 00:36:31 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-6.72616,1353.846,743.7717);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hmc__7->SetBinContent(1,15.50792);
   hmc__7->SetBinContent(2,112.2557);
   hmc__7->SetBinContent(3,269.6877);
   hmc__7->SetBinContent(4,336.308);
   hmc__7->SetBinContent(5,255.6025);
   hmc__7->SetBinContent(6,198.3515);
   hmc__7->SetBinContent(7,145.0742);
   hmc__7->SetBinContent(8,91.42782);
   hmc__7->SetBinContent(9,62.97449);
   hmc__7->SetBinContent(10,40.33392);
   hmc__7->SetBinContent(11,30.31161);
   hmc__7->SetBinContent(12,20.43281);
   hmc__7->SetBinContent(13,10.58526);
   hmc__7->SetBinContent(14,9.896055);
   hmc__7->SetBinContent(15,6.857535);
   hmc__7->SetBinContent(16,5.881527);
   hmc__7->SetBinContent(17,4.646857);
   hmc__7->SetBinContent(18,4.12443);
   hmc__7->SetBinContent(19,2.275871);
   hmc__7->SetBinContent(20,1.048642);
   hmc__7->SetBinContent(21,19.52536);
   hmc__7->SetBinError(1,8.210693);
   hmc__7->SetBinError(2,29.97134);
   hmc__7->SetBinError(3,45.15701);
   hmc__7->SetBinError(4,56.68633);
   hmc__7->SetBinError(5,47.41285);
   hmc__7->SetBinError(6,37.18904);
   hmc__7->SetBinError(7,28.55612);
   hmc__7->SetBinError(8,21.00362);
   hmc__7->SetBinError(9,16.09454);
   hmc__7->SetBinError(10,10.38792);
   hmc__7->SetBinError(11,9.743235);
   hmc__7->SetBinError(12,8.583326);
   hmc__7->SetBinError(13,4.914989);
   hmc__7->SetBinError(14,3.931993);
   hmc__7->SetBinError(15,3.716288);
   hmc__7->SetBinError(16,4.42858);
   hmc__7->SetBinError(17,6.186971);
   hmc__7->SetBinError(18,3.271054);
   hmc__7->SetBinError(19,1.576632);
   hmc__7->SetBinError(20,1.800748);
   hmc__7->SetBinError(21,5.46193);
   hmc__7->SetMinimum(-6.72616);
   hmc__7->SetMaximum(706.2468);
   hmc__7->SetEntries(1611.219);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,1200);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(353.1234);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,1.622414);
   hbadmatch_stack_1->SetBinContent(2,5.975903);
   hbadmatch_stack_1->SetBinContent(3,9.080362);
   hbadmatch_stack_1->SetBinContent(4,15.3647);
   hbadmatch_stack_1->SetBinContent(5,8.158138);
   hbadmatch_stack_1->SetBinContent(6,3.95149);
   hbadmatch_stack_1->SetBinContent(7,5.120154);
   hbadmatch_stack_1->SetBinContent(8,1.218114);
   hbadmatch_stack_1->SetBinContent(9,2.39585);
   hbadmatch_stack_1->SetBinContent(10,1.318106);
   hbadmatch_stack_1->SetBinContent(11,0.6803553);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.592916);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.145384);
   hbadmatch_stack_1->SetBinError(2,1.298189);
   hbadmatch_stack_1->SetBinError(3,1.546595);
   hbadmatch_stack_1->SetBinError(4,2.016355);
   hbadmatch_stack_1->SetBinError(5,1.570417);
   hbadmatch_stack_1->SetBinError(6,1.023313);
   hbadmatch_stack_1->SetBinError(7,1.265078);
   hbadmatch_stack_1->SetBinError(8,0.5746291);
   hbadmatch_stack_1->SetBinError(9,0.7857345);
   hbadmatch_stack_1->SetBinError(10,0.6816532);
   hbadmatch_stack_1->SetBinError(11,0.4810838);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.4423482);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1462;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,2.517386);
   hext_stack_2->SetBinContent(2,32.08038);
   hext_stack_2->SetBinContent(3,57.18798);
   hext_stack_2->SetBinContent(4,59.03944);
   hext_stack_2->SetBinContent(5,50.31769);
   hext_stack_2->SetBinContent(6,36.19103);
   hext_stack_2->SetBinContent(7,16.92542);
   hext_stack_2->SetBinContent(8,7.847833);
   hext_stack_2->SetBinContent(9,5.732637);
   hext_stack_2->SetBinContent(10,7.124018);
   hext_stack_2->SetBinContent(11,2.663019);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,0.8131978);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(21,6.221437);
   hext_stack_2->SetBinError(1,0.9575503);
   hext_stack_2->SetBinError(2,3.913181);
   hext_stack_2->SetBinError(3,5.081474);
   hext_stack_2->SetBinError(4,5.221737);
   hext_stack_2->SetBinError(5,4.893042);
   hext_stack_2->SetBinError(6,4.190568);
   hext_stack_2->SetBinError(7,2.698136);
   hext_stack_2->SetBinError(8,1.913308);
   hext_stack_2->SetBinError(9,1.665546);
   hext_stack_2->SetBinError(10,1.785774);
   hext_stack_2->SetBinError(11,1.142086);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,0.5750177);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(21,1.731894);
   hext_stack_2->SetEntries(672);

   ci = 1463;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,0.63311);
   hdirt_stack_3->SetBinContent(2,2.216371);
   hdirt_stack_3->SetBinContent(3,6.204713);
   hdirt_stack_3->SetBinContent(4,6.366244);
   hdirt_stack_3->SetBinContent(5,2.82986);
   hdirt_stack_3->SetBinContent(6,1.843261);
   hdirt_stack_3->SetBinContent(7,2.217524);
   hdirt_stack_3->SetBinContent(8,0.56477);
   hdirt_stack_3->SetBinContent(9,0.8905285);
   hdirt_stack_3->SetBinError(1,0.3242013);
   hdirt_stack_3->SetBinError(2,0.787906);
   hdirt_stack_3->SetBinError(3,1.290076);
   hdirt_stack_3->SetBinError(4,1.271375);
   hdirt_stack_3->SetBinError(5,0.9650707);
   hdirt_stack_3->SetBinError(6,0.7492002);
   hdirt_stack_3->SetBinError(7,1.078454);
   hdirt_stack_3->SetBinError(8,0.4322229);
   hdirt_stack_3->SetBinError(9,0.5523168);
   hdirt_stack_3->SetEntries(101);

   ci = 1464;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,4.343756);
   houtFV_stack_4->SetBinContent(2,28.33423);
   houtFV_stack_4->SetBinContent(3,62.3649);
   houtFV_stack_4->SetBinContent(4,79.62228);
   houtFV_stack_4->SetBinContent(5,46.15303);
   houtFV_stack_4->SetBinContent(6,30.24275);
   houtFV_stack_4->SetBinContent(7,26.86104);
   houtFV_stack_4->SetBinContent(8,15.66671);
   houtFV_stack_4->SetBinContent(9,10.38745);
   houtFV_stack_4->SetBinContent(10,6.076933);
   houtFV_stack_4->SetBinContent(11,5.951629);
   houtFV_stack_4->SetBinContent(12,3.267849);
   houtFV_stack_4->SetBinContent(13,1.374708);
   houtFV_stack_4->SetBinContent(14,1.072095);
   houtFV_stack_4->SetBinContent(15,1.122258);
   houtFV_stack_4->SetBinContent(16,0.9925119);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.5857972);
   houtFV_stack_4->SetBinError(1,1.067351);
   houtFV_stack_4->SetBinError(2,2.637461);
   houtFV_stack_4->SetBinError(3,4.046216);
   houtFV_stack_4->SetBinError(4,4.679097);
   houtFV_stack_4->SetBinError(5,3.420547);
   houtFV_stack_4->SetBinError(6,2.718161);
   houtFV_stack_4->SetBinError(7,2.624362);
   houtFV_stack_4->SetBinError(8,1.965311);
   houtFV_stack_4->SetBinError(9,1.719513);
   houtFV_stack_4->SetBinError(10,1.293422);
   houtFV_stack_4->SetBinError(11,1.214062);
   houtFV_stack_4->SetBinError(12,0.9410263);
   houtFV_stack_4->SetBinError(13,0.5763766);
   houtFV_stack_4->SetBinError(14,0.5551335);
   houtFV_stack_4->SetBinError(15,0.653238);
   houtFV_stack_4->SetBinError(16,0.4440241);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.4195828);
   houtFV_stack_4->SetEntries(1382);

   ci = 1465;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8511223);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.006984);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.426148);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.645108);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.965298);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6139679);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9904539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.739354);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.9346539);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3588378);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5232694);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5215308);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.372061);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4828437);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2233471);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.316066);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3047819);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3135935);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.016858);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.26634);
   hNCpi0inFVres_stack_7->SetBinContent(3,48.31453);
   hNCpi0inFVres_stack_7->SetBinContent(4,59.60825);
   hNCpi0inFVres_stack_7->SetBinContent(5,48.6161);
   hNCpi0inFVres_stack_7->SetBinContent(6,36.26664);
   hNCpi0inFVres_stack_7->SetBinContent(7,24.97458);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.47793);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.45783);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.599458);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.630256);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.05307);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.481948);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.310308);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.920372);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.4742997);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3756539);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.8222219);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3080627);
   hNCpi0inFVres_stack_7->SetBinError(2,1.135601);
   hNCpi0inFVres_stack_7->SetBinError(3,2.288345);
   hNCpi0inFVres_stack_7->SetBinError(4,2.506808);
   hNCpi0inFVres_stack_7->SetBinError(5,2.250327);
   hNCpi0inFVres_stack_7->SetBinError(6,1.889593);
   hNCpi0inFVres_stack_7->SetBinError(7,1.600479);
   hNCpi0inFVres_stack_7->SetBinError(8,1.433043);
   hNCpi0inFVres_stack_7->SetBinError(9,1.241169);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8862446);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6913878);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5852406);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5230212);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3592889);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3235708);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1150346);
   hNCpi0inFVres_stack_7->SetBinError(17,0.17535);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2756104);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.82887);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.852717);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.36232);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.398188);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.56002);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.015718);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.311314);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.949119);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.941966);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.593884);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.046254);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.046422);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9627222);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.087276);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6835541);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8232222);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.75754);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5331549);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8858419);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.086976);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.016446);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9617832);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8725615);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7152298);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7744102);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5414252);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5849638);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3185193);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3663515);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3631504);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3944872);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3022172);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3577516);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4010103);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1469;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1470;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1471;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,1.121968);
   hCCpi0inFV_stack_11->SetBinContent(2,12.10958);
   hCCpi0inFV_stack_11->SetBinContent(3,40.31781);
   hCCpi0inFV_stack_11->SetBinContent(4,56.92873);
   hCCpi0inFV_stack_11->SetBinContent(5,51.98463);
   hCCpi0inFV_stack_11->SetBinContent(6,55.69112);
   hCCpi0inFV_stack_11->SetBinContent(7,41.85521);
   hCCpi0inFV_stack_11->SetBinContent(8,28.34496);
   hCCpi0inFV_stack_11->SetBinContent(9,17.59424);
   hCCpi0inFV_stack_11->SetBinContent(10,11.18706);
   hCCpi0inFV_stack_11->SetBinContent(11,9.326089);
   hCCpi0inFV_stack_11->SetBinContent(12,7.824501);
   hCCpi0inFV_stack_11->SetBinContent(13,3.374355);
   hCCpi0inFV_stack_11->SetBinContent(14,3.911248);
   hCCpi0inFV_stack_11->SetBinContent(15,2.145881);
   hCCpi0inFV_stack_11->SetBinContent(16,2.710924);
   hCCpi0inFV_stack_11->SetBinContent(17,1.802323);
   hCCpi0inFV_stack_11->SetBinContent(18,1.412273);
   hCCpi0inFV_stack_11->SetBinContent(19,0.7868615);
   hCCpi0inFV_stack_11->SetBinContent(20,0.3934307);
   hCCpi0inFV_stack_11->SetBinContent(21,4.449832);
   hCCpi0inFV_stack_11->SetBinError(1,0.5181909);
   hCCpi0inFV_stack_11->SetBinError(2,1.733694);
   hCCpi0inFV_stack_11->SetBinError(3,3.200029);
   hCCpi0inFV_stack_11->SetBinError(4,3.828776);
   hCCpi0inFV_stack_11->SetBinError(5,3.658641);
   hCCpi0inFV_stack_11->SetBinError(6,3.784276);
   hCCpi0inFV_stack_11->SetBinError(7,3.273429);
   hCCpi0inFV_stack_11->SetBinError(8,2.64417);
   hCCpi0inFV_stack_11->SetBinError(9,2.09235);
   hCCpi0inFV_stack_11->SetBinError(10,1.671161);
   hCCpi0inFV_stack_11->SetBinError(11,1.526208);
   hCCpi0inFV_stack_11->SetBinError(12,1.410781);
   hCCpi0inFV_stack_11->SetBinError(13,0.8993757);
   hCCpi0inFV_stack_11->SetBinError(14,0.9814756);
   hCCpi0inFV_stack_11->SetBinError(15,0.785499);
   hCCpi0inFV_stack_11->SetBinError(16,0.8180221);
   hCCpi0inFV_stack_11->SetBinError(17,0.7070809);
   hCCpi0inFV_stack_11->SetBinError(18,0.6510715);
   hCCpi0inFV_stack_11->SetBinError(19,0.3934307);
   hCCpi0inFV_stack_11->SetBinError(20,0.2781975);
   hCCpi0inFV_stack_11->SetBinError(21,1.057532);
   hCCpi0inFV_stack_11->SetEntries(1506);

   ci = 1472;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,0.536893);
   hNCinFV_stack_12->SetBinContent(2,2.057363);
   hNCinFV_stack_12->SetBinContent(3,4.598217);
   hNCinFV_stack_12->SetBinContent(4,4.878528);
   hNCinFV_stack_12->SetBinContent(5,3.907867);
   hNCinFV_stack_12->SetBinContent(6,3.466255);
   hNCinFV_stack_12->SetBinContent(7,3.279074);
   hNCinFV_stack_12->SetBinContent(8,2.145881);
   hNCinFV_stack_12->SetBinContent(9,2.145881);
   hNCinFV_stack_12->SetBinContent(10,1.26712);
   hNCinFV_stack_12->SetBinContent(11,1.52047);
   hNCinFV_stack_12->SetBinContent(12,0.9286332);
   hNCinFV_stack_12->SetBinContent(13,0.1950248);
   hNCinFV_stack_12->SetBinContent(14,0.1967154);
   hNCinFV_stack_12->SetBinContent(15,0.3917402);
   hNCinFV_stack_12->SetBinError(1,0.3929602);
   hNCinFV_stack_12->SetBinError(2,0.7087455);
   hNCinFV_stack_12->SetBinError(3,1.020754);
   hNCinFV_stack_12->SetBinError(4,1.161372);
   hNCinFV_stack_12->SetBinError(5,0.9808007);
   hNCinFV_stack_12->SetBinError(6,0.9617119);
   hNCinFV_stack_12->SetBinError(7,0.8315883);
   hNCinFV_stack_12->SetBinError(8,0.785499);
   hNCinFV_stack_12->SetBinError(9,0.785499);
   hNCinFV_stack_12->SetBinError(10,0.5883944);
   hNCinFV_stack_12->SetBinError(11,0.5898325);
   hNCinFV_stack_12->SetBinError(12,0.48078);
   hNCinFV_stack_12->SetBinError(13,0.1950249);
   hNCinFV_stack_12->SetBinError(14,0.1967154);
   hNCinFV_stack_12->SetBinError(15,0.2770047);
   hNCinFV_stack_12->SetEntries(135);

   ci = 1473;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,3.296869);
   hnumuCCinFV_stack_13->SetBinContent(2,15.06616);
   hnumuCCinFV_stack_13->SetBinContent(3,31.85379);
   hnumuCCinFV_stack_13->SetBinContent(4,40.47398);
   hnumuCCinFV_stack_13->SetBinContent(5,31.28511);
   hnumuCCinFV_stack_13->SetBinContent(6,19.58211);
   hnumuCCinFV_stack_13->SetBinContent(7,14.24335);
   hnumuCCinFV_stack_13->SetBinContent(8,9.117265);
   hnumuCCinFV_stack_13->SetBinContent(9,4.009171);
   hnumuCCinFV_stack_13->SetBinContent(10,2.052005);
   hnumuCCinFV_stack_13->SetBinContent(11,2.191685);
   hnumuCCinFV_stack_13->SetBinContent(12,0.8113035);
   hnumuCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnumuCCinFV_stack_13->SetBinContent(14,0.9252522);
   hnumuCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(18,0.4498371);
   hnumuCCinFV_stack_13->SetBinContent(21,1.698809);
   hnumuCCinFV_stack_13->SetBinError(1,1.420751);
   hnumuCCinFV_stack_13->SetBinError(2,2.597579);
   hnumuCCinFV_stack_13->SetBinError(3,3.247148);
   hnumuCCinFV_stack_13->SetBinError(4,3.570421);
   hnumuCCinFV_stack_13->SetBinError(5,3.81286);
   hnumuCCinFV_stack_13->SetBinError(6,2.868092);
   hnumuCCinFV_stack_13->SetBinError(7,2.061592);
   hnumuCCinFV_stack_13->SetBinError(8,1.58161);
   hnumuCCinFV_stack_13->SetBinError(9,0.9640967);
   hnumuCCinFV_stack_13->SetBinError(10,0.710887);
   hnumuCCinFV_stack_13->SetBinError(11,0.7641369);
   hnumuCCinFV_stack_13->SetBinError(12,0.4065509);
   hnumuCCinFV_stack_13->SetBinError(13,0.3921167);
   hnumuCCinFV_stack_13->SetBinError(14,0.4794006);
   hnumuCCinFV_stack_13->SetBinError(16,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(17,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(18,0.3205738);
   hnumuCCinFV_stack_13->SetBinError(21,0.7270984);
   hnumuCCinFV_stack_13->SetEntries(681);

   ci = 1474;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(3,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(4,0.34964);
   hnueCCinFV_stack_14->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(8,1.035379);
   hnueCCinFV_stack_14->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(12,1.569686);
   hnueCCinFV_stack_14->SetBinContent(13,0.2463303);
   hnueCCinFV_stack_14->SetBinContent(15,0.3654046);
   hnueCCinFV_stack_14->SetBinContent(16,0.488997);
   hnueCCinFV_stack_14->SetBinContent(17,1.573356);
   hnueCCinFV_stack_14->SetBinContent(18,0.2331833);
   hnueCCinFV_stack_14->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(21,3.055071);
   hnueCCinFV_stack_14->SetBinError(3,0.2770047);
   hnueCCinFV_stack_14->SetBinError(4,0.2491644);
   hnueCCinFV_stack_14->SetBinError(5,0.3025491);
   hnueCCinFV_stack_14->SetBinError(6,0.3921167);
   hnueCCinFV_stack_14->SetBinError(7,0.2781975);
   hnueCCinFV_stack_14->SetBinError(8,0.4655422);
   hnueCCinFV_stack_14->SetBinError(9,0.2781975);
   hnueCCinFV_stack_14->SetBinError(11,0.1967154);
   hnueCCinFV_stack_14->SetBinError(12,1.569686);
   hnueCCinFV_stack_14->SetBinError(13,0.2463303);
   hnueCCinFV_stack_14->SetBinError(15,0.3654046);
   hnueCCinFV_stack_14->SetBinError(16,0.488997);
   hnueCCinFV_stack_14->SetBinError(17,1.194318);
   hnueCCinFV_stack_14->SetBinError(18,0.2331833);
   hnueCCinFV_stack_14->SetBinError(19,0.3401776);
   hnueCCinFV_stack_14->SetBinError(21,1.10787);
   hnueCCinFV_stack_14->SetEntries(36);

   ci = 1475;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_14,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__8->SetBinContent(1,15.50792);
   hmcerror__8->SetBinContent(2,112.2557);
   hmcerror__8->SetBinContent(3,269.6877);
   hmcerror__8->SetBinContent(4,336.308);
   hmcerror__8->SetBinContent(5,255.6025);
   hmcerror__8->SetBinContent(6,198.3515);
   hmcerror__8->SetBinContent(7,145.0742);
   hmcerror__8->SetBinContent(8,91.42782);
   hmcerror__8->SetBinContent(9,62.97449);
   hmcerror__8->SetBinContent(10,40.33392);
   hmcerror__8->SetBinContent(11,30.31161);
   hmcerror__8->SetBinContent(12,20.43281);
   hmcerror__8->SetBinContent(13,10.58526);
   hmcerror__8->SetBinContent(14,9.896055);
   hmcerror__8->SetBinContent(15,6.857535);
   hmcerror__8->SetBinContent(16,5.881527);
   hmcerror__8->SetBinContent(17,4.646857);
   hmcerror__8->SetBinContent(18,4.12443);
   hmcerror__8->SetBinContent(19,2.275871);
   hmcerror__8->SetBinContent(20,1.048642);
   hmcerror__8->SetBinContent(21,19.52536);
   hmcerror__8->SetBinError(1,8.210693);
   hmcerror__8->SetBinError(2,29.97134);
   hmcerror__8->SetBinError(3,45.15701);
   hmcerror__8->SetBinError(4,56.68633);
   hmcerror__8->SetBinError(5,47.41285);
   hmcerror__8->SetBinError(6,37.18904);
   hmcerror__8->SetBinError(7,28.55612);
   hmcerror__8->SetBinError(8,21.00362);
   hmcerror__8->SetBinError(9,16.09454);
   hmcerror__8->SetBinError(10,10.38792);
   hmcerror__8->SetBinError(11,9.743235);
   hmcerror__8->SetBinError(12,8.583326);
   hmcerror__8->SetBinError(13,4.914989);
   hmcerror__8->SetBinError(14,3.931993);
   hmcerror__8->SetBinError(15,3.716288);
   hmcerror__8->SetBinError(16,4.42858);
   hmcerror__8->SetBinError(17,6.186971);
   hmcerror__8->SetBinError(18,3.271054);
   hmcerror__8->SetBinError(19,1.576632);
   hmcerror__8->SetBinError(20,1.800748);
   hmcerror__8->SetBinError(21,5.46193);
   hmcerror__8->SetEntries(1611.219);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
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
   1170};
   Double_t _fy3009[20] = {
   11,
   98,
   255,
   311,
   243,
   170,
   98,
   96,
   51,
   36,
   28,
   17,
   8,
   11,
   7,
   4,
   5,
   3,
   2,
   3};
   Double_t _felx3009[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3009[20] = {
   3.4975,
   10.0209,
   15.96872,
   17.63519,
   15.58846,
   13.0384,
   10.0209,
   9.9196,
   7.2725,
   6.1381,
   5.4358,
   4.2835,
   3.0307,
   3.4975,
   2.85954,
   2.29683,
   2.48995,
   2.143368,
   2,
   2.143368};
   Double_t _fehx3009[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3009[20] = {
   3.27,
   9.82,
   15.96872,
   17.63519,
   15.58846,
   13.0384,
   9.82,
   9.718,
   7.0686,
   5.9318,
   5.2271,
   4.0673,
   2.7896,
   3.27,
   2.61053,
   1.98186,
   2.21064,
   1.72422,
   1.51917,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(361.4987);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.15","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1457.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

   ci = 1462;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 281.4","F");

   ci = 1463;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 324.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  284.3","F");

   ci = 1468;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  69.6","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1470;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1471;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 350.8","F");

   ci = 1472;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 31.5","F");

   ci = 1473;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 176.5","F");

   ci = 1474;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 8.4","F");

   ci = 1475;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3010[20] = {
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
   1170};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3010[20] = {
   0.5294516,
   0.2669916,
   0.1674419,
   0.1685548,
   0.1854945,
   0.1874906,
   0.1968381,
   0.229729,
   0.2555724,
   0.2575479,
   0.3214358,
   0.4200757,
   0.4643241,
   0.3973294,
   0.5419276,
   0.7529643,
   1.331431,
   0.7930924,
   0.6927597,
   1.717219};
   Double_t _fehx3010[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3010[20] = {
   0.5294516,
   0.2669916,
   0.1674419,
   0.1685548,
   0.1854945,
   0.1874906,
   0.1968381,
   0.229729,
   0.2555724,
   0.2575479,
   0.3214358,
   0.4200757,
   0.4643241,
   0.3973294,
   0.5419276,
   0.7529643,
   1.331431,
   0.7930924,
   0.6927597,
   1.717219};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1320);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
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
   1170};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3011[20] = {
   0.257887,
   0.157067,
   0.156995,
   0.1621341,
   0.1772557,
   0.1794797,
   0.1797423,
   0.1955463,
   0.2019111,
   0.2005179,
   0.2092123,
   0.2723935,
   0.2481836,
   0.251942,
   0.3045127,
   0.3153456,
   1.074174,
   0.3475817,
   0.4171911,
   0.6680778};
   Double_t _fehx3011[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3011[20] = {
   0.257887,
   0.157067,
   0.156995,
   0.1621341,
   0.1772557,
   0.1794797,
   0.1797423,
   0.1955463,
   0.2019111,
   0.2005179,
   0.2092123,
   0.2723935,
   0.2481836,
   0.251942,
   0.3045127,
   0.3153456,
   1.074174,
   0.3475817,
   0.4171911,
   0.6680778};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1320);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
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
   1170};
   Double_t _fy3012[20] = {
   0.7093149,
   0.8730068,
   0.9455383,
   0.9247476,
   0.9506949,
   0.8570645,
   0.6755165,
   1.050009,
   0.8098517,
   0.892549,
   0.9237385,
   0.8319954,
   0.7557682,
   1.111554,
   1.020775,
   0.6800955,
   1.075996,
   0.7273733,
   0.8787844,
   2.860844};
   Double_t _felx3012[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3012[20] = {
   0.2255299,
   0.08926851,
   0.0592119,
   0.05243763,
   0.06098711,
   0.06573384,
   0.06907432,
   0.1084965,
   0.1154833,
   0.1521821,
   0.1793306,
   0.2096384,
   0.2863133,
   0.3534237,
   0.4169924,
   0.3905159,
   0.5358353,
   0.5196762,
   0.8787844,
   2.043947};
   Double_t _fehx3012[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3012[20] = {
   0.21086,
   0.08747885,
   0.0592119,
   0.05243763,
   0.06098711,
   0.06573384,
   0.06768951,
   0.1062915,
   0.1122454,
   0.1470673,
   0.1724455,
   0.1990573,
   0.2635364,
   0.3304347,
   0.3806805,
   0.3369635,
   0.475728,
   0.4180505,
   0.6675115,
   1.644242};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(4.955594);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_energy_all",20,0,1200);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
