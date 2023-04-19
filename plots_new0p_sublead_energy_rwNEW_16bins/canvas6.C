#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 20:02:46 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",112,135,1200,900);
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
   pad1->Range(-61.53846,-16.92,451.2821,1870.996);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__16->SetBinContent(1,607.5649);
   hmc__16->SetBinContent(2,802.5447);
   hmc__16->SetBinContent(3,697.7412);
   hmc__16->SetBinContent(4,520.0432);
   hmc__16->SetBinContent(5,382.9147);
   hmc__16->SetBinContent(6,241.071);
   hmc__16->SetBinContent(7,154.0884);
   hmc__16->SetBinContent(8,104.8298);
   hmc__16->SetBinContent(9,62.80598);
   hmc__16->SetBinContent(10,36.47567);
   hmc__16->SetBinContent(11,26.09559);
   hmc__16->SetBinContent(12,17.67039);
   hmc__16->SetBinContent(13,11.5196);
   hmc__16->SetBinContent(14,5.470698);
   hmc__16->SetBinContent(15,4.539328);
   hmc__16->SetBinContent(16,2.914203);
   hmc__16->SetBinContent(17,4.715889);
   hmc__16->SetBinError(1,147.5607);
   hmc__16->SetBinError(2,172.9184);
   hmc__16->SetBinError(3,157.7369);
   hmc__16->SetBinError(4,125.376);
   hmc__16->SetBinError(5,101.5635);
   hmc__16->SetBinError(6,74.24036);
   hmc__16->SetBinError(7,49.85549);
   hmc__16->SetBinError(8,40.20546);
   hmc__16->SetBinError(9,24.23144);
   hmc__16->SetBinError(10,17.75594);
   hmc__16->SetBinError(11,16.39094);
   hmc__16->SetBinError(12,10.33941);
   hmc__16->SetBinError(13,7.680809);
   hmc__16->SetBinError(14,5.653927);
   hmc__16->SetBinError(15,4.636139);
   hmc__16->SetBinError(16,5.065949);
   hmc__16->SetBinError(17,6.223796);
   hmc__16->SetMinimum(-16.92);
   hmc__16->SetMaximum(1776.6);
   hmc__16->SetEntries(3645.257);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",16,0,400);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(842.6719);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,13.08817);
   hbadmatch_stack_1->SetBinContent(2,20.76574);
   hbadmatch_stack_1->SetBinContent(3,20.03265);
   hbadmatch_stack_1->SetBinContent(4,14.62015);
   hbadmatch_stack_1->SetBinContent(5,6.2525);
   hbadmatch_stack_1->SetBinContent(6,4.135034);
   hbadmatch_stack_1->SetBinContent(7,1.371936);
   hbadmatch_stack_1->SetBinContent(8,0.8276445);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(10,0.8753801);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.874853);
   hbadmatch_stack_1->SetBinError(2,2.923091);
   hbadmatch_stack_1->SetBinError(3,3.004839);
   hbadmatch_stack_1->SetBinError(4,1.97923);
   hbadmatch_stack_1->SetBinError(5,1.279042);
   hbadmatch_stack_1->SetBinError(6,1.872135);
   hbadmatch_stack_1->SetBinError(7,0.5185478);
   hbadmatch_stack_1->SetBinError(8,0.4154996);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(10,0.5191111);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(316);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,64.05386);
   hext_stack_2->SetBinContent(2,84.183);
   hext_stack_2->SetBinContent(3,60.95835);
   hext_stack_2->SetBinContent(4,28.03599);
   hext_stack_2->SetBinContent(5,23.00122);
   hext_stack_2->SetBinContent(6,9.145422);
   hext_stack_2->SetBinContent(7,7.116837);
   hext_stack_2->SetBinContent(8,5.034772);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.8131978);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinError(1,5.250311);
   hext_stack_2->SetBinError(2,5.953025);
   hext_stack_2->SetBinError(3,5.02336);
   hext_stack_2->SetBinError(4,3.424287);
   hext_stack_2->SetBinError(5,3.145145);
   hext_stack_2->SetBinError(6,2.020317);
   hext_stack_2->SetBinError(7,1.841247);
   hext_stack_2->SetBinError(8,1.354181);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.5750177);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetEntries(711);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,8.088352);
   hdirt_stack_3->SetBinContent(2,14.80111);
   hdirt_stack_3->SetBinContent(3,10.24467);
   hdirt_stack_3->SetBinContent(4,4.324687);
   hdirt_stack_3->SetBinContent(5,3.504777);
   hdirt_stack_3->SetBinContent(6,0.9185919);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinError(1,1.429247);
   hdirt_stack_3->SetBinError(2,1.961815);
   hdirt_stack_3->SetBinError(3,1.892998);
   hdirt_stack_3->SetBinError(4,1.165072);
   hdirt_stack_3->SetBinError(5,1.34294);
   hdirt_stack_3->SetBinError(6,0.5150623);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetEntries(173);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,66.77116);
   houtFV_stack_4->SetBinContent(2,91.79823);
   houtFV_stack_4->SetBinContent(3,74.88487);
   houtFV_stack_4->SetBinContent(4,50.22201);
   houtFV_stack_4->SetBinContent(5,25.71294);
   houtFV_stack_4->SetBinContent(6,11.32489);
   houtFV_stack_4->SetBinContent(7,8.980471);
   houtFV_stack_4->SetBinContent(8,4.448141);
   houtFV_stack_4->SetBinContent(9,2.931052);
   houtFV_stack_4->SetBinContent(10,2.055672);
   houtFV_stack_4->SetBinContent(11,0.9286332);
   houtFV_stack_4->SetBinContent(12,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinError(1,4.077046);
   houtFV_stack_4->SetBinError(2,4.743783);
   houtFV_stack_4->SetBinError(3,4.379795);
   houtFV_stack_4->SetBinError(4,3.512984);
   houtFV_stack_4->SetBinError(5,2.525697);
   houtFV_stack_4->SetBinError(6,1.69312);
   houtFV_stack_4->SetBinError(7,1.552339);
   houtFV_stack_4->SetBinError(8,1.057219);
   houtFV_stack_4->SetBinError(9,0.8781425);
   houtFV_stack_4->SetBinError(10,0.7082781);
   houtFV_stack_4->SetBinError(11,0.48078);
   houtFV_stack_4->SetBinError(12,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetEntries(1472);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,14.97606);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,15.61475);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,15.37828);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.26599);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.58428);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.26549);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.270964);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.84972);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.262988);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6410357);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6833858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.33217);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.221465);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.299485);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.039011);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.097282);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8918266);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7670878);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6653787);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6380565);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1771895);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2420254);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.199204);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.263652);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.370844);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.650348);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.03114);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.282353);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6273941);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4734827);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.574671);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.297566);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(229);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,247.1529);
   hNCpi0inFVres_stack_7->SetBinContent(2,337.1445);
   hNCpi0inFVres_stack_7->SetBinContent(3,291.457);
   hNCpi0inFVres_stack_7->SetBinContent(4,222.7578);
   hNCpi0inFVres_stack_7->SetBinContent(5,160.3974);
   hNCpi0inFVres_stack_7->SetBinContent(6,106.0976);
   hNCpi0inFVres_stack_7->SetBinContent(7,61.0838);
   hNCpi0inFVres_stack_7->SetBinContent(8,39.35975);
   hNCpi0inFVres_stack_7->SetBinContent(9,22.25398);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.33632);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.20048);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.339718);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.872052);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.67484);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.03214);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3763178);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3763178);
   hNCpi0inFVres_stack_7->SetBinError(1,5.138934);
   hNCpi0inFVres_stack_7->SetBinError(2,6.023423);
   hNCpi0inFVres_stack_7->SetBinError(3,5.623486);
   hNCpi0inFVres_stack_7->SetBinError(4,4.835417);
   hNCpi0inFVres_stack_7->SetBinError(5,4.178848);
   hNCpi0inFVres_stack_7->SetBinError(6,3.407954);
   hNCpi0inFVres_stack_7->SetBinError(7,2.534869);
   hNCpi0inFVres_stack_7->SetBinError(8,2.050431);
   hNCpi0inFVres_stack_7->SetBinError(9,1.492656);
   hNCpi0inFVres_stack_7->SetBinError(10,1.072829);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9793944);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7814146);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5750657);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4588018);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3749275);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1313578);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1313578);
   hNCpi0inFVres_stack_7->SetEntries(27989);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,42.22033);
   hNCpi0inFVdis_stack_8->SetBinContent(2,60.29065);
   hNCpi0inFVdis_stack_8->SetBinContent(3,52.6749);
   hNCpi0inFVdis_stack_8->SetBinContent(4,45.04092);
   hNCpi0inFVdis_stack_8->SetBinContent(5,31.22405);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.23347);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.27264);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.13978);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.082313);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.364537);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.915066);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.60459);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8507857);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.212326);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7944901);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.09179);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.536763);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.356277);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.198594);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.850886);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.452711);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.134829);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.077867);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8895324);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6417559);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5868458);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4272476);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2514891);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.364843);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3285446);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2144572);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(14);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,64.34201);
   hCCpi0inFV_stack_10->SetBinContent(2,89.29121);
   hCCpi0inFV_stack_10->SetBinContent(3,85.75478);
   hCCpi0inFV_stack_10->SetBinContent(4,73.82791);
   hCCpi0inFV_stack_10->SetBinContent(5,66.86239);
   hCCpi0inFV_stack_10->SetBinContent(6,41.29785);
   hCCpi0inFV_stack_10->SetBinContent(7,24.08969);
   hCCpi0inFV_stack_10->SetBinContent(8,20.0547);
   hCCpi0inFV_stack_10->SetBinContent(9,11.96742);
   hCCpi0inFV_stack_10->SetBinContent(10,8.072465);
   hCCpi0inFV_stack_10->SetBinContent(11,6.750401);
   hCCpi0inFV_stack_10->SetBinContent(12,2.252388);
   hCCpi0inFV_stack_10->SetBinContent(13,3.019462);
   hCCpi0inFV_stack_10->SetBinContent(14,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(15,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(16,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(17,1.65886);
   hCCpi0inFV_stack_10->SetBinError(1,4.010061);
   hCCpi0inFV_stack_10->SetBinError(2,4.735444);
   hCCpi0inFV_stack_10->SetBinError(3,4.561255);
   hCCpi0inFV_stack_10->SetBinError(4,4.359157);
   hCCpi0inFV_stack_10->SetBinError(5,4.097112);
   hCCpi0inFV_stack_10->SetBinError(6,3.213707);
   hCCpi0inFV_stack_10->SetBinError(7,2.431074);
   hCCpi0inFV_stack_10->SetBinError(8,2.257983);
   hCCpi0inFV_stack_10->SetBinError(9,1.755636);
   hCCpi0inFV_stack_10->SetBinError(10,1.388149);
   hCCpi0inFV_stack_10->SetBinError(11,1.27217);
   hCCpi0inFV_stack_10->SetBinError(12,0.7350883);
   hCCpi0inFV_stack_10->SetBinError(13,0.8647975);
   hCCpi0inFV_stack_10->SetBinError(14,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(15,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(16,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(17,0.650338);
   hCCpi0inFV_stack_10->SetEntries(2161);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,42.49289);
   hNCinFV_stack_11->SetBinContent(2,38.10247);
   hNCinFV_stack_11->SetBinContent(3,39.43467);
   hNCinFV_stack_11->SetBinContent(4,33.37524);
   hNCinFV_stack_11->SetBinContent(5,31.18118);
   hNCinFV_stack_11->SetBinContent(6,22.97383);
   hNCinFV_stack_11->SetBinContent(7,17.83398);
   hNCinFV_stack_11->SetBinContent(8,12.05424);
   hNCinFV_stack_11->SetBinContent(9,5.773586);
   hNCinFV_stack_11->SetBinContent(10,4.058092);
   hNCinFV_stack_11->SetBinContent(11,4.006529);
   hNCinFV_stack_11->SetBinContent(12,4.161217);
   hNCinFV_stack_11->SetBinContent(13,2.484368);
   hNCinFV_stack_11->SetBinContent(14,0.9269427);
   hNCinFV_stack_11->SetBinContent(15,1.413964);
   hNCinFV_stack_11->SetBinContent(16,0.5901461);
   hNCinFV_stack_11->SetBinContent(17,1.322064);
   hNCinFV_stack_11->SetBinError(1,3.313634);
   hNCinFV_stack_11->SetBinError(2,3.10282);
   hNCinFV_stack_11->SetBinError(3,3.152778);
   hNCinFV_stack_11->SetBinError(4,2.856644);
   hNCinFV_stack_11->SetBinError(5,2.753855);
   hNCinFV_stack_11->SetBinError(6,2.333497);
   hNCinFV_stack_11->SetBinError(7,2.104254);
   hNCinFV_stack_11->SetBinError(8,1.787816);
   hNCinFV_stack_11->SetBinError(9,1.194814);
   hNCinFV_stack_11->SetBinError(10,1.020609);
   hNCinFV_stack_11->SetBinError(11,1.039534);
   hNCinFV_stack_11->SetBinError(12,0.9816641);
   hNCinFV_stack_11->SetBinError(13,0.8556093);
   hNCinFV_stack_11->SetBinError(14,0.4800908);
   hNCinFV_stack_11->SetBinError(15,0.6515799);
   hNCinFV_stack_11->SetBinError(16,0.340721);
   hNCinFV_stack_11->SetBinError(17,0.5554667);
   hNCinFV_stack_11->SetEntries(1123);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,33.56797);
   hnumuCCinFV_stack_12->SetBinContent(2,42.41387);
   hnumuCCinFV_stack_12->SetBinContent(3,39.19656);
   hnumuCCinFV_stack_12->SetBinContent(4,29.95991);
   hnumuCCinFV_stack_12->SetBinContent(5,21.24979);
   hnumuCCinFV_stack_12->SetBinContent(6,15.2728);
   hnumuCCinFV_stack_12->SetBinContent(7,13.40461);
   hnumuCCinFV_stack_12->SetBinContent(8,7.50017);
   hnumuCCinFV_stack_12->SetBinContent(9,7.129862);
   hnumuCCinFV_stack_12->SetBinContent(10,2.587494);
   hnumuCCinFV_stack_12->SetBinContent(11,1.65548);
   hnumuCCinFV_stack_12->SetBinContent(12,1.599712);
   hnumuCCinFV_stack_12->SetBinContent(13,1.323754);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(17,0.3934307);
   hnumuCCinFV_stack_12->SetBinError(1,3.303884);
   hnumuCCinFV_stack_12->SetBinError(2,3.954103);
   hnumuCCinFV_stack_12->SetBinError(3,3.756476);
   hnumuCCinFV_stack_12->SetBinError(4,3.220039);
   hnumuCCinFV_stack_12->SetBinError(5,2.557111);
   hnumuCCinFV_stack_12->SetBinError(6,2.151756);
   hnumuCCinFV_stack_12->SetBinError(7,1.88817);
   hnumuCCinFV_stack_12->SetBinError(8,1.370984);
   hnumuCCinFV_stack_12->SetBinError(9,1.379065);
   hnumuCCinFV_stack_12->SetBinError(10,0.8087577);
   hnumuCCinFV_stack_12->SetBinError(11,0.6493189);
   hnumuCCinFV_stack_12->SetBinError(12,0.5661883);
   hnumuCCinFV_stack_12->SetBinError(13,0.5560625);
   hnumuCCinFV_stack_12->SetBinError(14,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(17,0.2781975);
   hnumuCCinFV_stack_12->SetEntries(859);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,9.584162);
   hnueCCinFV_stack_13->SetBinContent(2,4.56843);
   hnueCCinFV_stack_13->SetBinContent(3,5.214084);
   hnueCCinFV_stack_13->SetBinContent(4,3.906441);
   hnueCCinFV_stack_13->SetBinContent(5,1.91303);
   hnueCCinFV_stack_13->SetBinContent(6,0.9179521);
   hnueCCinFV_stack_13->SetBinContent(7,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(9,1.32013);
   hnueCCinFV_stack_13->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(12,1.084408);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.350576);
   hnueCCinFV_stack_13->SetBinError(2,1.168964);
   hnueCCinFV_stack_13->SetBinError(3,1.283303);
   hnueCCinFV_stack_13->SetBinError(4,1.513171);
   hnueCCinFV_stack_13->SetBinError(5,0.7604535);
   hnueCCinFV_stack_13->SetBinError(6,0.4656138);
   hnueCCinFV_stack_13->SetBinError(7,0.48078);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(9,1.103342);
   hnueCCinFV_stack_13->SetBinError(10,0.3743698);
   hnueCCinFV_stack_13->SetBinError(12,0.6604876);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2921355);
   hnueCCinFV_stack_13->SetEntries(111);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__17->SetBinContent(1,607.5649);
   hmcerror__17->SetBinContent(2,802.5447);
   hmcerror__17->SetBinContent(3,697.7412);
   hmcerror__17->SetBinContent(4,520.0432);
   hmcerror__17->SetBinContent(5,382.9147);
   hmcerror__17->SetBinContent(6,241.071);
   hmcerror__17->SetBinContent(7,154.0884);
   hmcerror__17->SetBinContent(8,104.8298);
   hmcerror__17->SetBinContent(9,62.80598);
   hmcerror__17->SetBinContent(10,36.47567);
   hmcerror__17->SetBinContent(11,26.09559);
   hmcerror__17->SetBinContent(12,17.67039);
   hmcerror__17->SetBinContent(13,11.5196);
   hmcerror__17->SetBinContent(14,5.470698);
   hmcerror__17->SetBinContent(15,4.539328);
   hmcerror__17->SetBinContent(16,2.914203);
   hmcerror__17->SetBinContent(17,4.715889);
   hmcerror__17->SetBinError(1,147.5607);
   hmcerror__17->SetBinError(2,172.9184);
   hmcerror__17->SetBinError(3,157.7369);
   hmcerror__17->SetBinError(4,125.376);
   hmcerror__17->SetBinError(5,101.5635);
   hmcerror__17->SetBinError(6,74.24036);
   hmcerror__17->SetBinError(7,49.85549);
   hmcerror__17->SetBinError(8,40.20546);
   hmcerror__17->SetBinError(9,24.23144);
   hmcerror__17->SetBinError(10,17.75594);
   hmcerror__17->SetBinError(11,16.39094);
   hmcerror__17->SetBinError(12,10.33941);
   hmcerror__17->SetBinError(13,7.680809);
   hmcerror__17->SetBinError(14,5.653927);
   hmcerror__17->SetBinError(15,4.636139);
   hmcerror__17->SetBinError(16,5.065949);
   hmcerror__17->SetBinError(17,6.223796);
   hmcerror__17->SetEntries(3645.257);

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
   
   Double_t _fx3021[16] = {
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
   Double_t _fy3021[16] = {
   606,
   846,
   664,
   529,
   327,
   207,
   134,
   70,
   45,
   30,
   17,
   20,
   10,
   7,
   1,
   3};
   Double_t _felx3021[16] = {
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
   Double_t _fely3021[16] = {
   24.61707,
   29.08608,
   25.7682,
   23,
   18.08314,
   14.38749,
   11.57584,
   8.4925,
   6.8416,
   5.6197,
   4.2835,
   4.6266,
   3.34883,
   2.85954,
   1,
   2.143368};
   Double_t _fehx3021[16] = {
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
   Double_t _fehy3021[16] = {
   24.61707,
   29.08608,
   25.7682,
   23,
   18.08314,
   14.38749,
   11.57584,
   8.2902,
   6.637,
   5.4117,
   4.0673,
   4.4133,
   3.1179,
   2.61053,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,440);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(962.5947);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3516.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 500.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 260.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 217.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[16] = {
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
   Double_t _fy3022[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[16] = {
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
   Double_t _fely3022[16] = {
   0.2428722,
   0.2154626,
   0.2260679,
   0.2410877,
   0.2652378,
   0.3079605,
   0.3235511,
   0.3835311,
   0.3858142,
   0.4867888,
   0.6281117,
   0.5851264,
   0.66676,
   1.033493,
   1.021327,
   1.738365};
   Double_t _fehx3022[16] = {
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
   Double_t _fehy3022[16] = {
   0.2428722,
   0.2154626,
   0.2260679,
   0.2410877,
   0.2652378,
   0.3079605,
   0.3235511,
   0.3835311,
   0.3858142,
   0.4867888,
   0.6281117,
   0.5851264,
   0.66676,
   1.033493,
   1.021327,
   1.738365};
   grae = new TGraphAsymmErrors(16,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,440);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3023[16] = {
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
   Double_t _fy3023[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[16] = {
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
   Double_t _fely3023[16] = {
   0.2041224,
   0.2021379,
   0.2096099,
   0.2270051,
   0.2421568,
   0.2714212,
   0.2882588,
   0.319858,
   0.3238962,
   0.3095181,
   0.2857537,
   0.2914782,
   0.3133874,
   0.3925819,
   0.3367768,
   0.3901961};
   Double_t _fehx3023[16] = {
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
   Double_t _fehy3023[16] = {
   0.2041224,
   0.2021379,
   0.2096099,
   0.2270051,
   0.2421568,
   0.2714212,
   0.2882588,
   0.319858,
   0.3238962,
   0.3095181,
   0.2857537,
   0.2914782,
   0.3133874,
   0.3925819,
   0.3367768,
   0.3901961};
   grae = new TGraphAsymmErrors(16,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,440);
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
   
   Double_t _fx3024[16] = {
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
   Double_t _fy3024[16] = {
   0.9974242,
   1.054147,
   0.9516422,
   1.017223,
   0.853976,
   0.858668,
   0.8696305,
   0.6677494,
   0.7164922,
   0.8224661,
   0.6514511,
   1.131837,
   0.8680856,
   1.279544,
   0.2202969,
   1.029441};
   Double_t _felx3024[16] = {
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
   Double_t _fely3024[16] = {
   0.04051759,
   0.03624232,
   0.03693088,
   0.0442271,
   0.04722498,
   0.05968155,
   0.07512463,
   0.08101231,
   0.1089323,
   0.1540671,
   0.1641465,
   0.2618279,
   0.2907071,
   0.5227011,
   0.2202969,
   0.7354904};
   Double_t _fehx3024[16] = {
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
   Double_t _fehy3024[16] = {
   0.04051759,
   0.03624232,
   0.03693088,
   0.0442271,
   0.04722498,
   0.05968155,
   0.07512463,
   0.07908251,
   0.1056746,
   0.1483647,
   0.1558616,
   0.2497569,
   0.2706604,
   0.4771841,
   0.2995399,
   0.591661};
   grae = new TGraphAsymmErrors(16,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,440);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.932401);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
