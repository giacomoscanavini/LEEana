#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 16:05:16 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-15.17282,1128.205,1677.794);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hmc__19->SetBinContent(1,228.7595);
   hmc__19->SetBinContent(2,758.6408);
   hmc__19->SetBinContent(3,540.1004);
   hmc__19->SetBinContent(4,342.2014);
   hmc__19->SetBinContent(5,198.3359);
   hmc__19->SetBinContent(6,121.1231);
   hmc__19->SetBinContent(7,70.36695);
   hmc__19->SetBinContent(8,46.83616);
   hmc__19->SetBinContent(9,30.37312);
   hmc__19->SetBinContent(10,15.42308);
   hmc__19->SetBinContent(11,8.098193);
   hmc__19->SetBinContent(12,5.746796);
   hmc__19->SetBinContent(13,23.04873);
   hmc__19->SetBinError(1,112.4863);
   hmc__19->SetBinError(2,338.7081);
   hmc__19->SetBinError(3,214.0765);
   hmc__19->SetBinError(4,117.4631);
   hmc__19->SetBinError(5,59.65367);
   hmc__19->SetBinError(6,37.25941);
   hmc__19->SetBinError(7,27.04304);
   hmc__19->SetBinError(8,23.3382);
   hmc__19->SetBinError(9,17.60072);
   hmc__19->SetBinError(10,12.826);
   hmc__19->SetBinError(11,10.23818);
   hmc__19->SetBinError(12,5.686666);
   hmc__19->SetBinError(13,15.36658);
   hmc__19->SetMinimum(-15.17282);
   hmc__19->SetMaximum(1593.146);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1000);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(796.5729);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,18.11934);
   hbadmatch_stack_1->SetBinContent(2,20.30282);
   hbadmatch_stack_1->SetBinContent(3,8.304626);
   hbadmatch_stack_1->SetBinContent(4,3.581664);
   hbadmatch_stack_1->SetBinContent(5,0.4672679);
   hbadmatch_stack_1->SetBinContent(6,1.408546);
   hbadmatch_stack_1->SetBinContent(7,0.8837724);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(10,0.1236948);
   hbadmatch_stack_1->SetBinContent(11,0.4812116);
   hbadmatch_stack_1->SetBinContent(12,0.56883);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinError(1,2.419364);
   hbadmatch_stack_1->SetBinError(2,3.088039);
   hbadmatch_stack_1->SetBinError(3,1.532894);
   hbadmatch_stack_1->SetBinError(4,0.9385693);
   hbadmatch_stack_1->SetBinError(5,0.2871168);
   hbadmatch_stack_1->SetBinError(6,0.6499647);
   hbadmatch_stack_1->SetBinError(7,0.5026057);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(10,0.1236948);
   hbadmatch_stack_1->SetBinError(11,0.340808);
   hbadmatch_stack_1->SetBinError(12,0.4257516);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,28.10818);
   hext_stack_2->SetBinContent(2,67.70759);
   hext_stack_2->SetBinContent(3,37.6299);
   hext_stack_2->SetBinContent(4,25.102);
   hext_stack_2->SetBinContent(5,13.87174);
   hext_stack_2->SetBinContent(6,2.834603);
   hext_stack_2->SetBinContent(7,5.89704);
   hext_stack_2->SetBinContent(8,4.110651);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,1.055394);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,1.055394);
   hext_stack_2->SetBinError(1,3.6951);
   hext_stack_2->SetBinError(2,5.69097);
   hext_stack_2->SetBinError(3,4.111413);
   hext_stack_2->SetBinError(4,3.537153);
   hext_stack_2->SetBinError(5,2.68509);
   hext_stack_2->SetBinError(6,1.106046);
   hext_stack_2->SetBinError(7,1.701242);
   hext_stack_2->SetBinError(8,1.499292);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.6130171);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.6130171);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,3.500581);
   hdirt_stack_3->SetBinContent(2,4.363833);
   hdirt_stack_3->SetBinContent(3,1.9785);
   hdirt_stack_3->SetBinContent(4,1.39498);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinError(1,1.200967);
   hdirt_stack_3->SetBinError(2,1.062018);
   hdirt_stack_3->SetBinError(3,0.7187755);
   hdirt_stack_3->SetBinError(4,0.5880834);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,19.54548);
   houtFV_stack_4->SetBinContent(2,45.08555);
   houtFV_stack_4->SetBinContent(3,12.27323);
   houtFV_stack_4->SetBinContent(4,5.241684);
   houtFV_stack_4->SetBinContent(5,1.770797);
   houtFV_stack_4->SetBinContent(6,1.744566);
   houtFV_stack_4->SetBinContent(7,0.7709852);
   houtFV_stack_4->SetBinContent(8,0.3900497);
   houtFV_stack_4->SetBinError(1,2.22518);
   houtFV_stack_4->SetBinError(2,3.320532);
   houtFV_stack_4->SetBinError(3,1.647922);
   houtFV_stack_4->SetBinError(4,1.101532);
   houtFV_stack_4->SetBinError(5,0.6156511);
   houtFV_stack_4->SetBinError(6,0.6385491);
   houtFV_stack_4->SetBinError(7,0.3951089);
   houtFV_stack_4->SetBinError(8,0.2758068);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.13193);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.514388);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4652844);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3763982);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2349827);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2679431);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08757805);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3724541);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4116311);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1257556);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1387158);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1427715);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1715315);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06587777);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1121803);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.149899);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.121449);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.541239);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.766049);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5501648);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3766954);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2547866);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1384964);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2887916);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6206161);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3944759);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3770946);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1980754);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1529921);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2057202);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.121575);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,104.0347);
   hNCpi0inFVres_stack_7->SetBinContent(2,341.7576);
   hNCpi0inFVres_stack_7->SetBinContent(3,215.7099);
   hNCpi0inFVres_stack_7->SetBinContent(4,106.7091);
   hNCpi0inFVres_stack_7->SetBinContent(5,58.29769);
   hNCpi0inFVres_stack_7->SetBinContent(6,34.98229);
   hNCpi0inFVres_stack_7->SetBinContent(7,20.34984);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.99689);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.784725);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.35886);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.801532);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.104152);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.252829);
   hNCpi0inFVres_stack_7->SetBinError(1,2.93167);
   hNCpi0inFVres_stack_7->SetBinError(2,5.239371);
   hNCpi0inFVres_stack_7->SetBinError(3,4.274658);
   hNCpi0inFVres_stack_7->SetBinError(4,3.141203);
   hNCpi0inFVres_stack_7->SetBinError(5,2.616183);
   hNCpi0inFVres_stack_7->SetBinError(6,2.26232);
   hNCpi0inFVres_stack_7->SetBinError(7,1.761475);
   hNCpi0inFVres_stack_7->SetBinError(8,1.383207);
   hNCpi0inFVres_stack_7->SetBinError(9,1.273468);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9775174);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8820054);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3103915);
   hNCpi0inFVres_stack_7->SetBinError(13,0.841093);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.18996);
   hNCpi0inFVdis_stack_8->SetBinContent(2,50.37132);
   hNCpi0inFVdis_stack_8->SetBinContent(3,42.48762);
   hNCpi0inFVdis_stack_8->SetBinContent(4,30.16268);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.39899);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.63472);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.187559);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.32783);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.642042);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.769398);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.940782);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.095678);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.408965);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.284385);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.002952);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.071138);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.825672);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.282665);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.787129);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.172243);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.150924);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8180536);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6740254);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.284147);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3775626);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6932773);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.3390723);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3421639);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.09250491);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1764539);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1552224);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04137371);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,17.30434);
   hCCpi0inFV_stack_10->SetBinContent(2,100.1766);
   hCCpi0inFV_stack_10->SetBinContent(3,90.4365);
   hCCpi0inFV_stack_10->SetBinContent(4,67.60895);
   hCCpi0inFV_stack_10->SetBinContent(5,43.06399);
   hCCpi0inFV_stack_10->SetBinContent(6,24.40184);
   hCCpi0inFV_stack_10->SetBinContent(7,15.65043);
   hCCpi0inFV_stack_10->SetBinContent(8,10.9621);
   hCCpi0inFV_stack_10->SetBinContent(9,5.176678);
   hCCpi0inFV_stack_10->SetBinContent(10,2.654692);
   hCCpi0inFV_stack_10->SetBinContent(11,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(12,1.221573);
   hCCpi0inFV_stack_10->SetBinContent(13,4.003148);
   hCCpi0inFV_stack_10->SetBinError(1,2.082685);
   hCCpi0inFV_stack_10->SetBinError(2,4.99457);
   hCCpi0inFV_stack_10->SetBinError(3,4.783177);
   hCCpi0inFV_stack_10->SetBinError(4,4.164761);
   hCCpi0inFV_stack_10->SetBinError(5,3.292072);
   hCCpi0inFV_stack_10->SetBinError(6,2.436829);
   hCCpi0inFV_stack_10->SetBinError(7,1.994488);
   hCCpi0inFV_stack_10->SetBinError(8,1.681996);
   hCCpi0inFV_stack_10->SetBinError(9,1.144046);
   hCCpi0inFV_stack_10->SetBinError(10,0.8379761);
   hCCpi0inFV_stack_10->SetBinError(11,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(12,0.5876978);
   hCCpi0inFV_stack_10->SetBinError(13,1.038897);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,11.35827);
   hNCinFV_stack_11->SetBinContent(2,66.82081);
   hNCinFV_stack_11->SetBinContent(3,57.36182);
   hNCinFV_stack_11->SetBinContent(4,43.17014);
   hNCinFV_stack_11->SetBinContent(5,26.32282);
   hNCinFV_stack_11->SetBinContent(6,14.33149);
   hNCinFV_stack_11->SetBinContent(7,8.821405);
   hNCinFV_stack_11->SetBinContent(8,5.386969);
   hNCinFV_stack_11->SetBinContent(9,7.873874);
   hNCinFV_stack_11->SetBinContent(10,1.818155);
   hNCinFV_stack_11->SetBinContent(11,1.446416);
   hNCinFV_stack_11->SetBinContent(12,0.536893);
   hNCinFV_stack_11->SetBinContent(13,2.383433);
   hNCinFV_stack_11->SetBinError(1,1.59851);
   hNCinFV_stack_11->SetBinError(2,4.120229);
   hNCinFV_stack_11->SetBinError(3,3.953573);
   hNCinFV_stack_11->SetBinError(4,3.659872);
   hNCinFV_stack_11->SetBinError(5,3.199337);
   hNCinFV_stack_11->SetBinError(6,2.424619);
   hNCinFV_stack_11->SetBinError(7,1.858798);
   hNCinFV_stack_11->SetBinError(8,1.52857);
   hNCinFV_stack_11->SetBinError(9,1.862609);
   hNCinFV_stack_11->SetBinError(10,0.711577);
   hNCinFV_stack_11->SetBinError(11,0.6690954);
   hNCinFV_stack_11->SetBinError(12,0.3929602);
   hNCinFV_stack_11->SetBinError(13,1.04744);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,5.977754);
   hnumuCCinFV_stack_12->SetBinContent(2,54.60232);
   hnumuCCinFV_stack_12->SetBinContent(3,69.60204);
   hnumuCCinFV_stack_12->SetBinContent(4,54.3774);
   hnumuCCinFV_stack_12->SetBinContent(5,36.69836);
   hnumuCCinFV_stack_12->SetBinContent(6,22.03672);
   hnumuCCinFV_stack_12->SetBinContent(7,9.463554);
   hnumuCCinFV_stack_12->SetBinContent(8,5.875044);
   hnumuCCinFV_stack_12->SetBinContent(9,4.926422);
   hnumuCCinFV_stack_12->SetBinContent(10,2.399857);
   hnumuCCinFV_stack_12->SetBinContent(11,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(12,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(13,3.051826);
   hnumuCCinFV_stack_12->SetBinError(1,1.251839);
   hnumuCCinFV_stack_12->SetBinError(2,4.738426);
   hnumuCCinFV_stack_12->SetBinError(3,4.632187);
   hnumuCCinFV_stack_12->SetBinError(4,4.11686);
   hnumuCCinFV_stack_12->SetBinError(5,3.519637);
   hnumuCCinFV_stack_12->SetBinError(6,2.639432);
   hnumuCCinFV_stack_12->SetBinError(7,2.765446);
   hnumuCCinFV_stack_12->SetBinError(8,1.376065);
   hnumuCCinFV_stack_12->SetBinError(9,1.106182);
   hnumuCCinFV_stack_12->SetBinError(10,0.7871608);
   hnumuCCinFV_stack_12->SetBinError(11,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(12,0.340721);
   hnumuCCinFV_stack_12->SetBinError(13,0.9125944);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(2,1.474483);
   hnueCCinFV_stack_13->SetBinContent(3,1.217248);
   hnueCCinFV_stack_13->SetBinContent(4,2.692046);
   hnueCCinFV_stack_13->SetBinContent(5,0.4402164);
   hnueCCinFV_stack_13->SetBinContent(6,2.103736);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.5891806);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,4.292474);
   hnueCCinFV_stack_13->SetBinError(2,0.6134461);
   hnueCCinFV_stack_13->SetBinError(3,0.6211758);
   hnueCCinFV_stack_13->SetBinError(4,0.9726717);
   hnueCCinFV_stack_13->SetBinError(5,0.3132948);
   hnueCCinFV_stack_13->SetBinError(6,0.813147);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.3401681);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,1.082608);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__20->SetBinContent(1,228.7595);
   hmcerror__20->SetBinContent(2,758.6408);
   hmcerror__20->SetBinContent(3,540.1004);
   hmcerror__20->SetBinContent(4,342.2014);
   hmcerror__20->SetBinContent(5,198.3359);
   hmcerror__20->SetBinContent(6,121.1231);
   hmcerror__20->SetBinContent(7,70.36695);
   hmcerror__20->SetBinContent(8,46.83616);
   hmcerror__20->SetBinContent(9,30.37312);
   hmcerror__20->SetBinContent(10,15.42308);
   hmcerror__20->SetBinContent(11,8.098193);
   hmcerror__20->SetBinContent(12,5.746796);
   hmcerror__20->SetBinContent(13,23.04873);
   hmcerror__20->SetBinError(1,112.4863);
   hmcerror__20->SetBinError(2,338.7081);
   hmcerror__20->SetBinError(3,214.0765);
   hmcerror__20->SetBinError(4,117.4631);
   hmcerror__20->SetBinError(5,59.65367);
   hmcerror__20->SetBinError(6,37.25941);
   hmcerror__20->SetBinError(7,27.04304);
   hmcerror__20->SetBinError(8,23.3382);
   hmcerror__20->SetBinError(9,17.60072);
   hmcerror__20->SetBinError(10,12.826);
   hmcerror__20->SetBinError(11,10.23818);
   hmcerror__20->SetBinError(12,5.686666);
   hmcerror__20->SetBinError(13,15.36658);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3025[12] = {
   257,
   681,
   473,
   268,
   151,
   81,
   48,
   20,
   15,
   10,
   10,
   3};
   Double_t _felx3025[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3025[12] = {
   16.03122,
   26.09598,
   21.74856,
   16.37071,
   12.28821,
   9.1239,
   7.0604,
   4.6266,
   4.0385,
   3.34883,
   3.34883,
   2.143368};
   Double_t _fehx3025[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3025[12] = {
   16.03122,
   26.09598,
   21.74856,
   16.37071,
   12.28821,
   8.9221,
   6.8561,
   4.4133,
   3.8197,
   3.1179,
   3.1179,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1100);
   Graph_Graph3025->SetMinimum(0.7709688);
   Graph_Graph3025->SetMaximum(777.7199);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2017.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.4","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.2","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  909.9","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  198.2","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 379.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 245.2","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.3","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.5","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3026[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3026[12] = {
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
   Double_t _felx3026[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3026[12] = {
   0.4917232,
   0.4464671,
   0.3963643,
   0.3432573,
   0.3007709,
   0.307616,
   0.3843145,
   0.4982945,
   0.5794834,
   0.8316104,
   1.264254,
   0.9895367};
   Double_t _fehx3026[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3026[12] = {
   0.4917232,
   0.4464671,
   0.3963643,
   0.3432573,
   0.3007709,
   0.307616,
   0.3843145,
   0.4982945,
   0.5794834,
   0.8316104,
   1.264254,
   0.9895367};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1100);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3027[12] = {
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
   Double_t _felx3027[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3027[12] = {
   0.4784168,
   0.4409637,
   0.3801482,
   0.305376,
   0.252046,
   0.2403016,
   0.2768368,
   0.2860922,
   0.3509899,
   0.3280022,
   0.4026963,
   0.3216814};
   Double_t _fehx3027[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3027[12] = {
   0.4784168,
   0.4409637,
   0.3801482,
   0.305376,
   0.252046,
   0.2403016,
   0.2768368,
   0.2860922,
   0.3509899,
   0.3280022,
   0.4026963,
   0.3216814};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1100);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3028[12] = {
   1.123451,
   0.897658,
   0.8757631,
   0.7831646,
   0.7613347,
   0.6687409,
   0.6821384,
   0.4270205,
   0.4938577,
   0.6483787,
   1.234843,
   0.52203};
   Double_t _felx3028[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3028[12] = {
   0.07007893,
   0.03439833,
   0.04026763,
   0.04783939,
   0.06195654,
   0.07532747,
   0.1003369,
   0.09878264,
   0.132963,
   0.217131,
   0.413528,
   0.3729675};
   Double_t _fehx3028[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3028[12] = {
   0.07007893,
   0.03439833,
   0.04026763,
   0.04783939,
   0.06195654,
   0.0736614,
   0.09743352,
   0.09422847,
   0.1257592,
   0.202158,
   0.3850118,
   0.3000315};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1100);
   Graph_Graph3028->SetMinimum(0.001983272);
   Graph_Graph3028->SetMaximum(1.766934);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_visible_energy_all",12,0,1000);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,1000,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
