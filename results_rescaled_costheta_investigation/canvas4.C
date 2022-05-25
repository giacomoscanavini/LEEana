#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Tue Apr 19 22:39:49 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-1.12,451.2821,94.37474);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmc__10->SetBinContent(1,30.64765);
   hmc__10->SetBinContent(2,47.38964);
   hmc__10->SetBinContent(3,42.68951);
   hmc__10->SetBinContent(4,32.09805);
   hmc__10->SetBinContent(5,20.67163);
   hmc__10->SetBinContent(6,12.00844);
   hmc__10->SetBinContent(7,8.306467);
   hmc__10->SetBinContent(8,5.45196);
   hmc__10->SetBinContent(9,3.359788);
   hmc__10->SetBinContent(10,1.906429);
   hmc__10->SetBinContent(11,1.294467);
   hmc__10->SetBinContent(12,0.6266157);
   hmc__10->SetBinContent(13,0.5413186);
   hmc__10->SetBinContent(14,0.2205409);
   hmc__10->SetBinContent(15,0.111491);
   hmc__10->SetBinContent(16,0.06781378);
   hmc__10->SetBinContent(17,0.3642713);
   hmc__10->SetBinError(1,6.746107);
   hmc__10->SetBinError(2,10.55159);
   hmc__10->SetBinError(3,10.26363);
   hmc__10->SetBinError(4,8.202069);
   hmc__10->SetBinError(5,6.008402);
   hmc__10->SetBinError(6,3.803797);
   hmc__10->SetBinError(7,3.366065);
   hmc__10->SetBinError(8,2.687034);
   hmc__10->SetBinError(9,2.553554);
   hmc__10->SetBinError(10,0.9621045);
   hmc__10->SetBinError(11,0.9338947);
   hmc__10->SetBinError(12,0.6191793);
   hmc__10->SetBinError(13,0.4966217);
   hmc__10->SetBinError(14,0.6992764);
   hmc__10->SetBinError(15,0.245722);
   hmc__10->SetBinError(16,0.1215478);
   hmc__10->SetBinError(17,0.5145746);
   hmc__10->SetMinimum(-1.12);
   hmc__10->SetMaximum(89.6);
   hmc__10->SetEntries(204.2995);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",16,0,400);
   hs4_stack_4->SetMinimum(-1.1539e-09);
   hs4_stack_4->SetMaximum(49.75912);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,0.5451981);
   hbadmatch_stack_1->SetBinContent(2,0.8391201);
   hbadmatch_stack_1->SetBinContent(3,0.878191);
   hbadmatch_stack_1->SetBinContent(4,0.8114762);
   hbadmatch_stack_1->SetBinContent(5,0.3431522);
   hbadmatch_stack_1->SetBinContent(6,0.258922);
   hbadmatch_stack_1->SetBinContent(7,0.1697408);
   hbadmatch_stack_1->SetBinContent(8,0.01734025);
   hbadmatch_stack_1->SetBinContent(9,0.09293021);
   hbadmatch_stack_1->SetBinContent(10,0.01734025);
   hbadmatch_stack_1->SetBinContent(11,0.01734025);
   hbadmatch_stack_1->SetBinContent(12,0.008670123);
   hbadmatch_stack_1->SetBinError(1,0.144427);
   hbadmatch_stack_1->SetBinError(2,0.1836871);
   hbadmatch_stack_1->SetBinError(3,0.1737189);
   hbadmatch_stack_1->SetBinError(4,0.2793782);
   hbadmatch_stack_1->SetBinError(5,0.1225462);
   hbadmatch_stack_1->SetBinError(6,0.0931397);
   hbadmatch_stack_1->SetBinError(7,0.07550283);
   hbadmatch_stack_1->SetBinError(8,0.01226141);
   hbadmatch_stack_1->SetBinError(9,0.06020841);
   hbadmatch_stack_1->SetBinError(10,0.01226141);
   hbadmatch_stack_1->SetBinError(11,0.01226141);
   hbadmatch_stack_1->SetBinError(12,0.008670123);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1461;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,2.955501);
   hext_stack_2->SetBinContent(2,3.334671);
   hext_stack_2->SetBinContent(3,2.89524);
   hext_stack_2->SetBinContent(4,1.747527);
   hext_stack_2->SetBinContent(5,0.8955508);
   hext_stack_2->SetBinContent(6,0.4811494);
   hext_stack_2->SetBinContent(7,0.1687266);
   hext_stack_2->SetBinContent(8,0.06674792);
   hext_stack_2->SetBinContent(9,0.1436961);
   hext_stack_2->SetBinContent(10,0.1603831);
   hext_stack_2->SetBinContent(11,0.00834349);
   hext_stack_2->SetBinContent(12,0.00834349);
   hext_stack_2->SetBinContent(13,0.01668698);
   hext_stack_2->SetBinContent(16,0.00834349);
   hext_stack_2->SetBinError(1,0.5926961);
   hext_stack_2->SetBinError(2,0.6235658);
   hext_stack_2->SetBinError(3,0.5775767);
   hext_stack_2->SetBinError(4,0.4513112);
   hext_stack_2->SetBinError(5,0.3325931);
   hext_stack_2->SetBinError(6,0.2357701);
   hext_stack_2->SetBinError(7,0.1363774);
   hext_stack_2->SetBinError(8,0.02359895);
   hext_stack_2->SetBinError(9,0.1356096);
   hext_stack_2->SetBinError(10,0.1361219);
   hext_stack_2->SetBinError(11,0.00834349);
   hext_stack_2->SetBinError(12,0.00834349);
   hext_stack_2->SetBinError(13,0.01179948);
   hext_stack_2->SetBinError(16,0.00834349);
   hext_stack_2->SetEntries(312);

   ci = 1462;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,0.3339187);
   hdirt_stack_3->SetBinContent(2,0.2319461);
   hdirt_stack_3->SetBinContent(3,0.3878472);
   hdirt_stack_3->SetBinContent(4,0.01760337);
   hdirt_stack_3->SetBinContent(5,0.06571334);
   hdirt_stack_3->SetBinContent(6,0.0315005);
   hdirt_stack_3->SetBinError(1,0.09778162);
   hdirt_stack_3->SetBinError(2,0.07258972);
   hdirt_stack_3->SetBinError(3,0.2155972);
   hdirt_stack_3->SetBinError(4,0.01018617);
   hdirt_stack_3->SetBinError(5,0.04287993);
   hdirt_stack_3->SetBinError(6,0.03150049);
   hdirt_stack_3->SetEntries(54);

   ci = 1463;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,2.466498);
   houtFV_stack_4->SetBinContent(2,3.263891);
   houtFV_stack_4->SetBinContent(3,2.522688);
   houtFV_stack_4->SetBinContent(4,2.075784);
   houtFV_stack_4->SetBinContent(5,1.261374);
   houtFV_stack_4->SetBinContent(6,0.5501317);
   houtFV_stack_4->SetBinContent(7,0.4557995);
   houtFV_stack_4->SetBinContent(8,0.4311911);
   houtFV_stack_4->SetBinContent(9,0.06175995);
   houtFV_stack_4->SetBinContent(10,0.1858604);
   houtFV_stack_4->SetBinContent(11,0.1016003);
   houtFV_stack_4->SetBinContent(12,0.008670123);
   houtFV_stack_4->SetBinError(1,0.301127);
   houtFV_stack_4->SetBinError(2,0.3522919);
   houtFV_stack_4->SetBinError(3,0.3094291);
   houtFV_stack_4->SetBinError(4,0.2810549);
   houtFV_stack_4->SetBinError(5,0.2230325);
   houtFV_stack_4->SetBinError(6,0.142394);
   houtFV_stack_4->SetBinError(7,0.127726);
   houtFV_stack_4->SetBinError(8,0.128162);
   houtFV_stack_4->SetBinError(9,0.04438726);
   houtFV_stack_4->SetBinError(10,0.08514755);
   houtFV_stack_4->SetBinError(11,0.06082946);
   houtFV_stack_4->SetBinError(12,0.008670123);
   houtFV_stack_4->SetEntries(494);

   ci = 1464;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,12.94049);
   hNCpi0inFV_stack_5->SetBinContent(2,25.55505);
   hNCpi0inFV_stack_5->SetBinContent(3,24.09566);
   hNCpi0inFV_stack_5->SetBinContent(4,18.68335);
   hNCpi0inFV_stack_5->SetBinContent(5,10.98029);
   hNCpi0inFV_stack_5->SetBinContent(6,6.97308);
   hNCpi0inFV_stack_5->SetBinContent(7,5.153166);
   hNCpi0inFV_stack_5->SetBinContent(8,3.150831);
   hNCpi0inFV_stack_5->SetBinContent(9,2.127378);
   hNCpi0inFV_stack_5->SetBinContent(10,1.082923);
   hNCpi0inFV_stack_5->SetBinContent(11,0.5080017);
   hNCpi0inFV_stack_5->SetBinContent(12,0.2874608);
   hNCpi0inFV_stack_5->SetBinContent(13,0.2378812);
   hNCpi0inFV_stack_5->SetBinContent(14,0.1276107);
   hNCpi0inFV_stack_5->SetBinContent(15,0.06814042);
   hNCpi0inFV_stack_5->SetBinContent(16,0.04213005);
   hNCpi0inFV_stack_5->SetBinContent(17,0.2453307);
   hNCpi0inFV_stack_5->SetBinError(1,0.6908688);
   hNCpi0inFV_stack_5->SetBinError(2,0.9683372);
   hNCpi0inFV_stack_5->SetBinError(3,0.9396106);
   hNCpi0inFV_stack_5->SetBinError(4,0.8267794);
   hNCpi0inFV_stack_5->SetBinError(5,0.6333233);
   hNCpi0inFV_stack_5->SetBinError(6,0.5007879);
   hNCpi0inFV_stack_5->SetBinError(7,0.4373603);
   hNCpi0inFV_stack_5->SetBinError(8,0.3366123);
   hNCpi0inFV_stack_5->SetBinError(9,0.2735532);
   hNCpi0inFV_stack_5->SetBinError(10,0.2010019);
   hNCpi0inFV_stack_5->SetBinError(11,0.1360188);
   hNCpi0inFV_stack_5->SetBinError(12,0.1046438);
   hNCpi0inFV_stack_5->SetBinError(13,0.08775609);
   hNCpi0inFV_stack_5->SetBinError(14,0.0626557);
   hNCpi0inFV_stack_5->SetBinError(15,0.04472643);
   hNCpi0inFV_stack_5->SetBinError(16,0.04213005);
   hNCpi0inFV_stack_5->SetBinError(17,0.09578825);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1465;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs4->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,2.740146);
   hCCpi0inFV_stack_6->SetBinContent(2,6.788727);
   hCCpi0inFV_stack_6->SetBinContent(3,7.407646);
   hCCpi0inFV_stack_6->SetBinContent(4,5.858735);
   hCCpi0inFV_stack_6->SetBinContent(5,4.382486);
   hCCpi0inFV_stack_6->SetBinContent(6,2.598301);
   hCCpi0inFV_stack_6->SetBinContent(7,1.584798);
   hCCpi0inFV_stack_6->SetBinContent(8,1.235272);
   hCCpi0inFV_stack_6->SetBinContent(9,0.643062);
   hCCpi0inFV_stack_6->SetBinContent(10,0.3409815);
   hCCpi0inFV_stack_6->SetBinContent(11,0.380391);
   hCCpi0inFV_stack_6->SetBinContent(12,0.1610706);
   hCCpi0inFV_stack_6->SetBinContent(13,0.2272801);
   hCCpi0inFV_stack_6->SetBinContent(14,0.05080017);
   hCCpi0inFV_stack_6->SetBinContent(15,0.02601037);
   hCCpi0inFV_stack_6->SetBinContent(16,0.008670123);
   hCCpi0inFV_stack_6->SetBinContent(17,0.1189406);
   hCCpi0inFV_stack_6->SetBinError(1,0.3176352);
   hCCpi0inFV_stack_6->SetBinError(2,0.5052413);
   hCCpi0inFV_stack_6->SetBinError(3,0.5253966);
   hCCpi0inFV_stack_6->SetBinError(4,0.4630301);
   hCCpi0inFV_stack_6->SetBinError(5,0.4066066);
   hCCpi0inFV_stack_6->SetBinError(6,0.3118551);
   hCCpi0inFV_stack_6->SetBinError(7,0.2379758);
   hCCpi0inFV_stack_6->SetBinError(8,0.2124993);
   hCCpi0inFV_stack_6->SetBinError(9,0.1545998);
   hCCpi0inFV_stack_6->SetBinError(10,0.11338);
   hCCpi0inFV_stack_6->SetBinError(11,0.1207285);
   hCCpi0inFV_stack_6->SetBinError(12,0.07500338);
   hCCpi0inFV_stack_6->SetBinError(13,0.09840693);
   hCCpi0inFV_stack_6->SetBinError(14,0.04301293);
   hCCpi0inFV_stack_6->SetBinError(15,0.01501709);
   hCCpi0inFV_stack_6->SetBinError(16,0.008670123);
   hCCpi0inFV_stack_6->SetBinError(17,0.06205293);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1466;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs4->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_7->SetBinContent(1,2.61059);
   hNCinFV_stack_7->SetBinContent(2,1.701195);
   hNCinFV_stack_7->SetBinContent(3,1.50542);
   hNCinFV_stack_7->SetBinContent(4,0.9069535);
   hNCinFV_stack_7->SetBinContent(5,1.022232);
   hNCinFV_stack_7->SetBinContent(6,0.5080017);
   hNCinFV_stack_7->SetBinContent(7,0.2465513);
   hNCinFV_stack_7->SetBinContent(8,0.2279905);
   hNCinFV_stack_7->SetBinContent(9,0.1697408);
   hNCinFV_stack_7->SetBinContent(10,0.1102705);
   hNCinFV_stack_7->SetBinContent(11,0.1945305);
   hNCinFV_stack_7->SetBinContent(12,0.05947029);
   hNCinFV_stack_7->SetBinContent(13,0.05080017);
   hNCinFV_stack_7->SetBinContent(14,0.04213005);
   hNCinFV_stack_7->SetBinContent(15,0.01734025);
   hNCinFV_stack_7->SetBinError(1,0.3028331);
   hNCinFV_stack_7->SetBinError(2,0.2503563);
   hNCinFV_stack_7->SetBinError(3,0.2411485);
   hNCinFV_stack_7->SetBinError(4,0.1784034);
   hNCinFV_stack_7->SetBinError(5,0.1996887);
   hNCinFV_stack_7->SetBinError(6,0.1360188);
   hNCinFV_stack_7->SetBinError(7,0.08818335);
   hNCinFV_stack_7->SetBinError(8,0.09500024);
   hNCinFV_stack_7->SetBinError(9,0.07550283);
   hNCinFV_stack_7->SetBinError(10,0.06144424);
   hNCinFV_stack_7->SetBinError(11,0.08558783);
   hNCinFV_stack_7->SetBinError(12,0.04387805);
   hNCinFV_stack_7->SetBinError(13,0.04301293);
   hNCinFV_stack_7->SetBinError(14,0.04213005);
   hNCinFV_stack_7->SetBinError(15,0.01226141);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1467;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs4->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,5.911147);
   hnumuCCinFV_stack_8->SetBinContent(2,5.43908);
   hnumuCCinFV_stack_8->SetBinContent(3,2.970812);
   hnumuCCinFV_stack_8->SetBinContent(4,1.912354);
   hnumuCCinFV_stack_8->SetBinContent(5,1.642759);
   hnumuCCinFV_stack_8->SetBinContent(6,0.5478849);
   hnumuCCinFV_stack_8->SetBinContent(7,0.4434258);
   hnumuCCinFV_stack_8->SetBinContent(8,0.2804571);
   hnumuCCinFV_stack_8->SetBinContent(9,0.1212207);
   hnumuCCinFV_stack_8->SetBinContent(10,0.008670123);
   hnumuCCinFV_stack_8->SetBinContent(11,0.08426009);
   hnumuCCinFV_stack_8->SetBinContent(12,0.05080017);
   hnumuCCinFV_stack_8->SetBinContent(16,0.008670123);
   hnumuCCinFV_stack_8->SetBinError(1,0.632273);
   hnumuCCinFV_stack_8->SetBinError(2,0.5969553);
   hnumuCCinFV_stack_8->SetBinError(3,0.38133);
   hnumuCCinFV_stack_8->SetBinError(4,0.3281902);
   hnumuCCinFV_stack_8->SetBinError(5,0.3020973);
   hnumuCCinFV_stack_8->SetBinError(6,0.1456459);
   hnumuCCinFV_stack_8->SetBinError(7,0.1568804);
   hnumuCCinFV_stack_8->SetBinError(8,0.1047979);
   hnumuCCinFV_stack_8->SetBinError(9,0.06663601);
   hnumuCCinFV_stack_8->SetBinError(10,0.008670123);
   hnumuCCinFV_stack_8->SetBinError(11,0.05958088);
   hnumuCCinFV_stack_8->SetBinError(12,0.04301293);
   hnumuCCinFV_stack_8->SetBinError(16,0.008670123);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1468;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs4->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,0.1441612);
   hnueCCinFV_stack_9->SetBinContent(2,0.2359566);
   hnueCCinFV_stack_9->SetBinContent(3,0.02601037);
   hnueCCinFV_stack_9->SetBinContent(4,0.08426009);
   hnueCCinFV_stack_9->SetBinContent(5,0.07807286);
   hnueCCinFV_stack_9->SetBinContent(6,0.05947029);
   hnueCCinFV_stack_9->SetBinContent(7,0.08426009);
   hnueCCinFV_stack_9->SetBinContent(8,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(12,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(13,0.008670123);
   hnueCCinFV_stack_9->SetBinError(1,0.0698769);
   hnueCCinFV_stack_9->SetBinError(2,0.0972522);
   hnueCCinFV_stack_9->SetBinError(3,0.01501709);
   hnueCCinFV_stack_9->SetBinError(4,0.05958088);
   hnueCCinFV_stack_9->SetBinError(5,0.04581399);
   hnueCCinFV_stack_9->SetBinError(6,0.04387805);
   hnueCCinFV_stack_9->SetBinError(7,0.05958088);
   hnueCCinFV_stack_9->SetBinError(8,0.04213005);
   hnueCCinFV_stack_9->SetBinError(12,0.04213005);
   hnueCCinFV_stack_9->SetBinError(13,0.008670123);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1469;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs4->Add(hnueCCinFV_stack_9,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmcerror__11->SetBinContent(1,30.64765);
   hmcerror__11->SetBinContent(2,47.38964);
   hmcerror__11->SetBinContent(3,42.68951);
   hmcerror__11->SetBinContent(4,32.09805);
   hmcerror__11->SetBinContent(5,20.67163);
   hmcerror__11->SetBinContent(6,12.00844);
   hmcerror__11->SetBinContent(7,8.306467);
   hmcerror__11->SetBinContent(8,5.45196);
   hmcerror__11->SetBinContent(9,3.359788);
   hmcerror__11->SetBinContent(10,1.906429);
   hmcerror__11->SetBinContent(11,1.294467);
   hmcerror__11->SetBinContent(12,0.6266157);
   hmcerror__11->SetBinContent(13,0.5413186);
   hmcerror__11->SetBinContent(14,0.2205409);
   hmcerror__11->SetBinContent(15,0.111491);
   hmcerror__11->SetBinContent(16,0.06781378);
   hmcerror__11->SetBinContent(17,0.3642713);
   hmcerror__11->SetBinError(1,6.746107);
   hmcerror__11->SetBinError(2,10.55159);
   hmcerror__11->SetBinError(3,10.26363);
   hmcerror__11->SetBinError(4,8.202069);
   hmcerror__11->SetBinError(5,6.008402);
   hmcerror__11->SetBinError(6,3.803797);
   hmcerror__11->SetBinError(7,3.366065);
   hmcerror__11->SetBinError(8,2.687034);
   hmcerror__11->SetBinError(9,2.553554);
   hmcerror__11->SetBinError(10,0.9621045);
   hmcerror__11->SetBinError(11,0.9338947);
   hmcerror__11->SetBinError(12,0.6191793);
   hmcerror__11->SetBinError(13,0.4966217);
   hmcerror__11->SetBinError(14,0.6992764);
   hmcerror__11->SetBinError(15,0.245722);
   hmcerror__11->SetBinError(16,0.1215478);
   hmcerror__11->SetBinError(17,0.5145746);
   hmcerror__11->SetEntries(204.2995);

   ci = TColor::GetColor("#666666");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[16] = {
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
   387.5};
   Double_t _fy3013[16] = {
   38,
   56,
   34,
   38,
   14,
   11,
   9,
   3,
   3,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3013[16] = {
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
   Double_t _fely3013[16] = {
   6.3013,
   7.6127,
   5.9703,
   6.3013,
   3.9102,
   3.4975,
   3.19354,
   2.143368,
   2.143368,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3013[16] = {
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
   Double_t _fehy3013[16] = {
   6.0955,
   7.4094,
   5.7635,
   6.0955,
   3.6898,
   3.27,
   2.9582,
   1.72422,
   1.72422,
   1.1478,
   1.51917,
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(69.75034);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.00#pm0.07(data err)#pm0.22(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 3.623e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.44/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 208.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.0","F");

   ci = 1461;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 12.9","F");

   ci = 1462;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

   ci = 1463;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 13.4","F");

   ci = 1464;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  112.0","F");

   ci = 1465;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 34.4","F");

   ci = 1466;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 9.4","F");

   ci = 1467;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 19.4","F");

   ci = 1468;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

   ci = 1469;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3014[16] = {
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
   387.5};
   Double_t _fy3014[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[16] = {
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
   Double_t _fely3014[16] = {
   0.2201182,
   0.2226561,
   0.2404252,
   0.2555317,
   0.2906594,
   0.3167602,
   0.4052343,
   0.4928566,
   0.7600342,
   0.5046631,
   0.721451,
   0.9881324,
   0.9174296,
   3.170733,
   2.203962,
   1.792376};
   Double_t _fehx3014[16] = {
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
   Double_t _fehy3014[16] = {
   0.2201182,
   0.2226561,
   0.2404252,
   0.2555317,
   0.2906594,
   0.3167602,
   0.4052343,
   0.4928566,
   0.7600342,
   0.5046631,
   0.721451,
   0.9881324,
   0.9174296,
   3.170733,
   2.203962,
   1.792376};
   grae = new TGraphAsymmErrors(16,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[16] = {
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
   387.5};
   Double_t _fy3015[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[16] = {
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
   Double_t _fely3015[16] = {
   0.182533,
   0.1906893,
   0.2106886,
   0.2180269,
   0.2191411,
   0.2284512,
   0.2384311,
   0.2671864,
   0.2851922,
   0.3049667,
   0.3474226,
   0.4015691,
   0.4333789,
   0.6551138,
   0.9073358,
   1.371492};
   Double_t _fehx3015[16] = {
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
   Double_t _fehy3015[16] = {
   0.182533,
   0.1906893,
   0.2106886,
   0.2180269,
   0.2191411,
   0.2284512,
   0.2384311,
   0.2671864,
   0.2851922,
   0.3049667,
   0.3474226,
   0.4015691,
   0.4333789,
   0.6551138,
   0.9073358,
   1.371492};
   grae = new TGraphAsymmErrors(16,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[16] = {
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
   387.5};
   Double_t _fy3016[16] = {
   1.239899,
   1.181693,
   0.7964485,
   1.183873,
   0.6772567,
   0.9160223,
   1.083493,
   0.5502608,
   0.8929135,
   0,
   1.545037,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3016[16] = {
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
   Double_t _fely3016[16] = {
   0.2056047,
   0.1606406,
   0.139854,
   0.1963141,
   0.1891578,
   0.2912535,
   0.3844643,
   0.3931371,
   0.6379474,
   0,
   1.545037,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3016[16] = {
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
   Double_t _fehy3016[16] = {
   0.1988896,
   0.1563506,
   0.1350097,
   0.1899025,
   0.1784959,
   0.2723085,
   0.3561322,
   0.3162569,
   0.5131931,
   0.602068,
   1.173587,
   1.831745,
   2.120378,
   5.204476,
   10.295,
   16.92576};
   grae = new TGraphAsymmErrors(16,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(18.61834);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT3_Np_bnb_10_kine_pio_energy_low_all",16,0,400);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
