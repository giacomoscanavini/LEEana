#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Oct 21 19:09:16 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-276.9231,-5.648895,2030.769,624.6488);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__19->SetBinContent(3,10.50959);
   hmc__19->SetBinContent(4,75.37781);
   hmc__19->SetBinContent(5,174.7332);
   hmc__19->SetBinContent(6,242.3891);
   hmc__19->SetBinContent(7,282.4447);
   hmc__19->SetBinContent(8,254.6544);
   hmc__19->SetBinContent(9,242.2644);
   hmc__19->SetBinContent(10,213.0839);
   hmc__19->SetBinContent(11,173.0145);
   hmc__19->SetBinContent(12,145.4594);
   hmc__19->SetBinContent(13,108.426);
   hmc__19->SetBinContent(14,92.48334);
   hmc__19->SetBinContent(15,75.86074);
   hmc__19->SetBinContent(16,60.3829);
   hmc__19->SetBinContent(17,52.02142);
   hmc__19->SetBinContent(18,42.34776);
   hmc__19->SetBinContent(19,38.79689);
   hmc__19->SetBinContent(20,23.61313);
   hmc__19->SetBinContent(21,22.16167);
   hmc__19->SetBinContent(22,15.27708);
   hmc__19->SetBinContent(23,9.84099);
   hmc__19->SetBinContent(24,8.066541);
   hmc__19->SetBinContent(25,3.022351);
   hmc__19->SetBinContent(26,22.82356);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.3895343);
   hmc__19->SetBinError(3,6.042778);
   hmc__19->SetBinError(4,47.04821);
   hmc__19->SetBinError(5,94.29116);
   hmc__19->SetBinError(6,121.3586);
   hmc__19->SetBinError(7,134.0614);
   hmc__19->SetBinError(8,120.7615);
   hmc__19->SetBinError(9,110.738);
   hmc__19->SetBinError(10,87.07215);
   hmc__19->SetBinError(11,63.76694);
   hmc__19->SetBinError(12,62.56321);
   hmc__19->SetBinError(13,37.08261);
   hmc__19->SetBinError(14,31.95887);
   hmc__19->SetBinError(15,28.71906);
   hmc__19->SetBinError(16,29.0268);
   hmc__19->SetBinError(17,24.59225);
   hmc__19->SetBinError(18,27.4663);
   hmc__19->SetBinError(19,22.97265);
   hmc__19->SetBinError(20,15.16679);
   hmc__19->SetBinError(21,17.85303);
   hmc__19->SetBinError(22,10.42165);
   hmc__19->SetBinError(23,9.095033);
   hmc__19->SetBinError(24,8.030284);
   hmc__19->SetBinError(25,3.935555);
   hmc__19->SetBinError(26,18.59884);
   hmc__19->SetMinimum(-5.648895);
   hmc__19->SetMaximum(593.1339);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,1800);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(296.567);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(3,0.07487863);
   hbadmatch_stack_1->SetBinContent(4,2.892751);
   hbadmatch_stack_1->SetBinContent(5,4.924637);
   hbadmatch_stack_1->SetBinContent(6,4.235743);
   hbadmatch_stack_1->SetBinContent(7,9.609652);
   hbadmatch_stack_1->SetBinContent(8,4.969301);
   hbadmatch_stack_1->SetBinContent(9,6.406588);
   hbadmatch_stack_1->SetBinContent(10,3.680626);
   hbadmatch_stack_1->SetBinContent(11,3.638326);
   hbadmatch_stack_1->SetBinContent(12,2.530262);
   hbadmatch_stack_1->SetBinContent(13,3.451077);
   hbadmatch_stack_1->SetBinContent(14,1.228966);
   hbadmatch_stack_1->SetBinContent(15,1.994443);
   hbadmatch_stack_1->SetBinContent(16,0.8364185);
   hbadmatch_stack_1->SetBinContent(17,0.7238213);
   hbadmatch_stack_1->SetBinContent(18,0.4502768);
   hbadmatch_stack_1->SetBinContent(19,1.304973);
   hbadmatch_stack_1->SetBinContent(20,0.1172267);
   hbadmatch_stack_1->SetBinContent(21,0.6475976);
   hbadmatch_stack_1->SetBinContent(26,1.112665);
   hbadmatch_stack_1->SetBinError(3,0.07487862);
   hbadmatch_stack_1->SetBinError(4,1.013977);
   hbadmatch_stack_1->SetBinError(5,1.248458);
   hbadmatch_stack_1->SetBinError(6,1.106105);
   hbadmatch_stack_1->SetBinError(7,2.610021);
   hbadmatch_stack_1->SetBinError(8,1.076962);
   hbadmatch_stack_1->SetBinError(9,1.426328);
   hbadmatch_stack_1->SetBinError(10,1.004172);
   hbadmatch_stack_1->SetBinError(11,0.975021);
   hbadmatch_stack_1->SetBinError(12,0.8215218);
   hbadmatch_stack_1->SetBinError(13,0.985339);
   hbadmatch_stack_1->SetBinError(14,0.5299977);
   hbadmatch_stack_1->SetBinError(15,0.7733187);
   hbadmatch_stack_1->SetBinError(16,0.4513143);
   hbadmatch_stack_1->SetBinError(17,0.4324459);
   hbadmatch_stack_1->SetBinError(18,0.3212293);
   hbadmatch_stack_1->SetBinError(19,0.7648202);
   hbadmatch_stack_1->SetBinError(20,0.1172267);
   hbadmatch_stack_1->SetBinError(21,0.3768218);
   hbadmatch_stack_1->SetBinError(26,0.5147619);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(3,1.055394);
   hext_stack_2->SetBinContent(4,8.332225);
   hext_stack_2->SetBinContent(5,25.91519);
   hext_stack_2->SetBinContent(6,18.52145);
   hext_stack_2->SetBinContent(7,27.92224);
   hext_stack_2->SetBinContent(8,20.66418);
   hext_stack_2->SetBinContent(9,16.18006);
   hext_stack_2->SetBinContent(10,15.34091);
   hext_stack_2->SetBinContent(11,14.65898);
   hext_stack_2->SetBinContent(12,8.09721);
   hext_stack_2->SetBinContent(13,9.634223);
   hext_stack_2->SetBinContent(14,4.550381);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,4.677244);
   hext_stack_2->SetBinContent(17,1.379791);
   hext_stack_2->SetBinContent(18,1.137595);
   hext_stack_2->SetBinContent(19,2.192989);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,2.566457);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,1.379791);
   hext_stack_2->SetBinError(3,0.6130171);
   hext_stack_2->SetBinError(4,1.936759);
   hext_stack_2->SetBinError(5,3.583587);
   hext_stack_2->SetBinError(6,2.876558);
   hext_stack_2->SetBinError(7,3.759946);
   hext_stack_2->SetBinError(8,3.239547);
   hext_stack_2->SetBinError(9,2.722459);
   hext_stack_2->SetBinError(10,2.747657);
   hext_stack_2->SetBinError(11,2.829989);
   hext_stack_2->SetBinError(12,1.872082);
   hext_stack_2->SetBinError(13,2.075354);
   hext_stack_2->SetBinError(14,1.320423);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,1.54863);
   hext_stack_2->SetBinError(17,0.6935586);
   hext_stack_2->SetBinError(18,0.6602113);
   hext_stack_2->SetBinError(19,0.9009267);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,1.283228);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,0.6935586);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(3,0.4247338);
   hdirt_stack_3->SetBinContent(4,0.9220302);
   hdirt_stack_3->SetBinContent(5,1.805082);
   hdirt_stack_3->SetBinContent(6,2.45402);
   hdirt_stack_3->SetBinContent(7,2.683282);
   hdirt_stack_3->SetBinContent(8,1.058728);
   hdirt_stack_3->SetBinContent(9,0.8378969);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.6566868);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinError(3,0.4247338);
   hdirt_stack_3->SetBinError(4,0.4185005);
   hdirt_stack_3->SetBinError(5,0.6689178);
   hdirt_stack_3->SetBinError(6,0.8056218);
   hdirt_stack_3->SetBinError(7,1.139555);
   hdirt_stack_3->SetBinError(8,0.5001967);
   hdirt_stack_3->SetBinError(9,0.4284346);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.3791383);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(19,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(3,1.200497);
   houtFV_stack_4->SetBinContent(4,7.48036);
   houtFV_stack_4->SetBinContent(5,10.87517);
   houtFV_stack_4->SetBinContent(6,13.57153);
   houtFV_stack_4->SetBinContent(7,12.43824);
   houtFV_stack_4->SetBinContent(8,12.62517);
   houtFV_stack_4->SetBinContent(9,8.16712);
   houtFV_stack_4->SetBinContent(10,5.045815);
   houtFV_stack_4->SetBinContent(11,2.945516);
   houtFV_stack_4->SetBinContent(12,2.859013);
   houtFV_stack_4->SetBinContent(13,2.18608);
   houtFV_stack_4->SetBinContent(14,2.29439);
   houtFV_stack_4->SetBinContent(15,1.517089);
   houtFV_stack_4->SetBinContent(16,0.7643703);
   houtFV_stack_4->SetBinContent(17,0.3900497);
   houtFV_stack_4->SetBinContent(18,0.3917402);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.6046558);
   houtFV_stack_4->SetBinContent(22,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(3,0.5938402);
   houtFV_stack_4->SetBinError(4,1.346536);
   houtFV_stack_4->SetBinError(5,1.675123);
   houtFV_stack_4->SetBinError(6,1.771283);
   houtFV_stack_4->SetBinError(7,1.702182);
   houtFV_stack_4->SetBinError(8,1.729354);
   houtFV_stack_4->SetBinError(9,1.363915);
   houtFV_stack_4->SetBinError(10,1.139045);
   houtFV_stack_4->SetBinError(11,0.7873578);
   houtFV_stack_4->SetBinError(12,0.8733994);
   houtFV_stack_4->SetBinError(13,0.7003481);
   houtFV_stack_4->SetBinError(14,0.7690106);
   houtFV_stack_4->SetBinError(15,0.5887087);
   houtFV_stack_4->SetBinError(16,0.4643111);
   houtFV_stack_4->SetBinError(17,0.2758068);
   houtFV_stack_4->SetBinError(18,0.2770047);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(21,0.4528933);
   houtFV_stack_4->SetBinError(22,0.3401776);
   houtFV_stack_4->SetBinError(26,0.438694);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3376789);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4584224);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7214006);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.4312573);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.655843);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4942446);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4220263);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.112558);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2448018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08381909);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.07071795);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1857822);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2356026);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3139109);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1983228);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2724254);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1523027);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1620711);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05961464);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1739595);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06437593);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04218251);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1050124);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3078412);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.580401);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.718553);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.413958);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.556717);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.111056);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.835212);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4151374);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6203595);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2221334);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3181322);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3263664);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.08168284);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2185845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1430208);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3987204);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4106001);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3002408);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3253531);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2639206);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2076542);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1589236);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2263673);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1272103);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1792162);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1763406);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04195796);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2025098);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01881452);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.766402);
   hNCpi0inFVres_stack_7->SetBinContent(4,34.69924);
   hNCpi0inFVres_stack_7->SetBinContent(5,82.53368);
   hNCpi0inFVres_stack_7->SetBinContent(6,123.6845);
   hNCpi0inFVres_stack_7->SetBinContent(7,132.6284);
   hNCpi0inFVres_stack_7->SetBinContent(8,118.4868);
   hNCpi0inFVres_stack_7->SetBinContent(9,94.71621);
   hNCpi0inFVres_stack_7->SetBinContent(10,76.83133);
   hNCpi0inFVres_stack_7->SetBinContent(11,58.90439);
   hNCpi0inFVres_stack_7->SetBinContent(12,44.23324);
   hNCpi0inFVres_stack_7->SetBinContent(13,29.2299);
   hNCpi0inFVres_stack_7->SetBinContent(14,24.16148);
   hNCpi0inFVres_stack_7->SetBinContent(15,22.78967);
   hNCpi0inFVres_stack_7->SetBinContent(16,17.73472);
   hNCpi0inFVres_stack_7->SetBinContent(17,12.22188);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.29057);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.050942);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.71916);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.713341);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.667497);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.917391);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.643664);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.3033949);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.213301);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6773382);
   hNCpi0inFVres_stack_7->SetBinError(4,1.799828);
   hNCpi0inFVres_stack_7->SetBinError(5,2.715472);
   hNCpi0inFVres_stack_7->SetBinError(6,3.100855);
   hNCpi0inFVres_stack_7->SetBinError(7,3.126622);
   hNCpi0inFVres_stack_7->SetBinError(8,3.041245);
   hNCpi0inFVres_stack_7->SetBinError(9,2.630441);
   hNCpi0inFVres_stack_7->SetBinError(10,2.613326);
   hNCpi0inFVres_stack_7->SetBinError(11,2.433635);
   hNCpi0inFVres_stack_7->SetBinError(12,2.107294);
   hNCpi0inFVres_stack_7->SetBinError(13,1.577957);
   hNCpi0inFVres_stack_7->SetBinError(14,1.675789);
   hNCpi0inFVres_stack_7->SetBinError(15,1.901706);
   hNCpi0inFVres_stack_7->SetBinError(16,1.886125);
   hNCpi0inFVres_stack_7->SetBinError(17,1.321639);
   hNCpi0inFVres_stack_7->SetBinError(18,1.622369);
   hNCpi0inFVres_stack_7->SetBinError(19,1.156735);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8726277);
   hNCpi0inFVres_stack_7->SetBinError(21,0.953453);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7078341);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6448462);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5462908);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1234817);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6394007);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.192231);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.965866);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.801805);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.42309);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.83893);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.07898);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.01302);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.65418);
   hNCpi0inFVdis_stack_8->SetBinContent(11,16.35476);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.37321);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.111853);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.93811);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.427072);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.5983);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.061563);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.704945);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.293043);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.889565);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.104882);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.291066);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.337274);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.009107);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.8616902);
   hNCpi0inFVdis_stack_8->SetBinContent(26,3.293041);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3589382);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8098928);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8561561);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.127513);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.102522);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.255682);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.218358);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.05134);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.410821);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.088749);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9701152);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.299218);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.123635);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.116907);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.053128);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9131127);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9726568);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.035917);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7063127);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4146852);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6853289);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7517532);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2670326);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6515131);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1770052);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1654532);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1839615);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1107334);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09954487);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1346949);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.113567);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1352255);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04521128);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.06989517);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01830775);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(4,2.484368);
   hCCpi0inFV_stack_10->SetBinContent(5,7.085507);
   hCCpi0inFV_stack_10->SetBinContent(6,17.4151);
   hCCpi0inFV_stack_10->SetBinContent(7,28.8823);
   hCCpi0inFV_stack_10->SetBinContent(8,35.34193);
   hCCpi0inFV_stack_10->SetBinContent(9,42.18134);
   hCCpi0inFV_stack_10->SetBinContent(10,48.95576);
   hCCpi0inFV_stack_10->SetBinContent(11,37.60782);
   hCCpi0inFV_stack_10->SetBinContent(12,33.95139);
   hCCpi0inFV_stack_10->SetBinContent(13,25.06839);
   hCCpi0inFV_stack_10->SetBinContent(14,23.40186);
   hCCpi0inFV_stack_10->SetBinContent(15,19.93681);
   hCCpi0inFV_stack_10->SetBinContent(16,12.30598);
   hCCpi0inFV_stack_10->SetBinContent(17,11.44175);
   hCCpi0inFV_stack_10->SetBinContent(18,11.28209);
   hCCpi0inFV_stack_10->SetBinContent(19,8.260727);
   hCCpi0inFV_stack_10->SetBinContent(20,3.620943);
   hCCpi0inFV_stack_10->SetBinContent(21,2.927671);
   hCCpi0inFV_stack_10->SetBinContent(22,3.21842);
   hCCpi0inFV_stack_10->SetBinContent(23,2.500666);
   hCCpi0inFV_stack_10->SetBinContent(24,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(25,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(26,3.716223);
   hCCpi0inFV_stack_10->SetBinError(3,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(4,0.8556093);
   hCCpi0inFV_stack_10->SetBinError(5,1.316112);
   hCCpi0inFV_stack_10->SetBinError(6,2.158778);
   hCCpi0inFV_stack_10->SetBinError(7,2.661643);
   hCCpi0inFV_stack_10->SetBinError(8,2.944587);
   hCCpi0inFV_stack_10->SetBinError(9,3.217523);
   hCCpi0inFV_stack_10->SetBinError(10,3.556666);
   hCCpi0inFV_stack_10->SetBinError(11,3.063997);
   hCCpi0inFV_stack_10->SetBinError(12,2.911738);
   hCCpi0inFV_stack_10->SetBinError(13,2.522189);
   hCCpi0inFV_stack_10->SetBinError(14,2.453937);
   hCCpi0inFV_stack_10->SetBinError(15,2.289258);
   hCCpi0inFV_stack_10->SetBinError(16,1.749203);
   hCCpi0inFV_stack_10->SetBinError(17,1.653435);
   hCCpi0inFV_stack_10->SetBinError(18,1.779233);
   hCCpi0inFV_stack_10->SetBinError(19,1.400837);
   hCCpi0inFV_stack_10->SetBinError(20,0.8988449);
   hCCpi0inFV_stack_10->SetBinError(21,0.877388);
   hCCpi0inFV_stack_10->SetBinError(22,0.9383613);
   hCCpi0inFV_stack_10->SetBinError(23,0.7348895);
   hCCpi0inFV_stack_10->SetBinError(24,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(25,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(26,0.9619042);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.536893);
   hNCinFV_stack_11->SetBinContent(4,4.130376);
   hNCinFV_stack_11->SetBinContent(5,10.81318);
   hNCinFV_stack_11->SetBinContent(6,14.28851);
   hNCinFV_stack_11->SetBinContent(7,22.08258);
   hNCinFV_stack_11->SetBinContent(8,16.20489);
   hNCinFV_stack_11->SetBinContent(9,23.9007);
   hNCinFV_stack_11->SetBinContent(10,21.50119);
   hNCinFV_stack_11->SetBinContent(11,16.43757);
   hNCinFV_stack_11->SetBinContent(12,18.77018);
   hNCinFV_stack_11->SetBinContent(13,14.05552);
   hNCinFV_stack_11->SetBinContent(14,13.27423);
   hNCinFV_stack_11->SetBinContent(15,8.529857);
   hNCinFV_stack_11->SetBinContent(16,11.47962);
   hNCinFV_stack_11->SetBinContent(17,13.26568);
   hNCinFV_stack_11->SetBinContent(18,6.265823);
   hNCinFV_stack_11->SetBinContent(19,7.224367);
   hNCinFV_stack_11->SetBinContent(20,6.502481);
   hNCinFV_stack_11->SetBinContent(21,7.600737);
   hNCinFV_stack_11->SetBinContent(22,3.654182);
   hNCinFV_stack_11->SetBinContent(23,2.086848);
   hNCinFV_stack_11->SetBinContent(24,1.663932);
   hNCinFV_stack_11->SetBinContent(26,3.36313);
   hNCinFV_stack_11->SetBinError(3,0.3929602);
   hNCinFV_stack_11->SetBinError(4,1.046442);
   hNCinFV_stack_11->SetBinError(5,1.661805);
   hNCinFV_stack_11->SetBinError(6,1.808168);
   hNCinFV_stack_11->SetBinError(7,2.34377);
   hNCinFV_stack_11->SetBinError(8,1.889772);
   hNCinFV_stack_11->SetBinError(9,2.368515);
   hNCinFV_stack_11->SetBinError(10,2.415965);
   hNCinFV_stack_11->SetBinError(11,2.112762);
   hNCinFV_stack_11->SetBinError(12,2.285398);
   hNCinFV_stack_11->SetBinError(13,2.160231);
   hNCinFV_stack_11->SetBinError(14,1.946408);
   hNCinFV_stack_11->SetBinError(15,1.685624);
   hNCinFV_stack_11->SetBinError(16,2.128497);
   hNCinFV_stack_11->SetBinError(17,2.349447);
   hNCinFV_stack_11->SetBinError(18,1.559658);
   hNCinFV_stack_11->SetBinError(19,1.848125);
   hNCinFV_stack_11->SetBinError(20,1.821337);
   hNCinFV_stack_11->SetBinError(21,1.991472);
   hNCinFV_stack_11->SetBinError(22,1.190942);
   hNCinFV_stack_11->SetBinError(23,1.155479);
   hNCinFV_stack_11->SetBinError(24,0.6518637);
   hNCinFV_stack_11->SetBinError(26,1.001433);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(3,0.7603152);
   hnumuCCinFV_stack_12->SetBinContent(4,7.039084);
   hnumuCCinFV_stack_12->SetBinContent(5,18.18059);
   hnumuCCinFV_stack_12->SetBinContent(6,29.72246);
   hnumuCCinFV_stack_12->SetBinContent(7,25.82839);
   hnumuCCinFV_stack_12->SetBinContent(8,23.46511);
   hnumuCCinFV_stack_12->SetBinContent(9,28.77125);
   hnumuCCinFV_stack_12->SetBinContent(10,23.65453);
   hnumuCCinFV_stack_12->SetBinContent(11,20.94224);
   hnumuCCinFV_stack_12->SetBinContent(12,20.56433);
   hnumuCCinFV_stack_12->SetBinContent(13,14.8818);
   hnumuCCinFV_stack_12->SetBinContent(14,11.8918);
   hnumuCCinFV_stack_12->SetBinContent(15,8.182012);
   hnumuCCinFV_stack_12->SetBinContent(16,4.876664);
   hnumuCCinFV_stack_12->SetBinContent(17,6.115607);
   hnumuCCinFV_stack_12->SetBinContent(18,5.807966);
   hnumuCCinFV_stack_12->SetBinContent(19,5.667824);
   hnumuCCinFV_stack_12->SetBinContent(20,3.680459);
   hnumuCCinFV_stack_12->SetBinContent(21,2.642437);
   hnumuCCinFV_stack_12->SetBinContent(22,1.52047);
   hnumuCCinFV_stack_12->SetBinContent(23,1.369286);
   hnumuCCinFV_stack_12->SetBinContent(24,1.180292);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,3.104795);
   hnumuCCinFV_stack_12->SetBinError(3,0.4477641);
   hnumuCCinFV_stack_12->SetBinError(4,1.837473);
   hnumuCCinFV_stack_12->SetBinError(5,3.021597);
   hnumuCCinFV_stack_12->SetBinError(6,3.299505);
   hnumuCCinFV_stack_12->SetBinError(7,3.103369);
   hnumuCCinFV_stack_12->SetBinError(8,2.532094);
   hnumuCCinFV_stack_12->SetBinError(9,3.021438);
   hnumuCCinFV_stack_12->SetBinError(10,2.717442);
   hnumuCCinFV_stack_12->SetBinError(11,2.484423);
   hnumuCCinFV_stack_12->SetBinError(12,3.3261);
   hnumuCCinFV_stack_12->SetBinError(13,2.3536);
   hnumuCCinFV_stack_12->SetBinError(14,1.983876);
   hnumuCCinFV_stack_12->SetBinError(15,1.481049);
   hnumuCCinFV_stack_12->SetBinError(16,1.100122);
   hnumuCCinFV_stack_12->SetBinError(17,1.267246);
   hnumuCCinFV_stack_12->SetBinError(18,1.226488);
   hnumuCCinFV_stack_12->SetBinError(19,1.195481);
   hnumuCCinFV_stack_12->SetBinError(20,0.9135005);
   hnumuCCinFV_stack_12->SetBinError(21,0.7851269);
   hnumuCCinFV_stack_12->SetBinError(22,0.5898325);
   hnumuCCinFV_stack_12->SetBinError(23,0.5738919);
   hnumuCCinFV_stack_12->SetBinError(24,0.4818523);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.9744364);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(5,0.5940435);
   hnueCCinFV_stack_13->SetBinContent(6,0.4487298);
   hnueCCinFV_stack_13->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(8,0.44716);
   hnueCCinFV_stack_13->SetBinContent(9,0.4478798);
   hnueCCinFV_stack_13->SetBinContent(10,2.02425);
   hnueCCinFV_stack_13->SetBinContent(11,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(12,0.441907);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.8378454);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,1.070405);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(26,3.75558);
   hnueCCinFV_stack_13->SetBinError(4,0.4575996);
   hnueCCinFV_stack_13->SetBinError(5,0.4244628);
   hnueCCinFV_stack_13->SetBinError(6,0.3200014);
   hnueCCinFV_stack_13->SetBinError(7,0.4132436);
   hnueCCinFV_stack_13->SetBinError(8,0.3184642);
   hnueCCinFV_stack_13->SetBinError(9,0.3190306);
   hnueCCinFV_stack_13->SetBinError(10,0.8867731);
   hnueCCinFV_stack_13->SetBinError(11,0.3401778);
   hnueCCinFV_stack_13->SetBinError(12,0.3143499);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.4213651);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.5545368);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.4394482);
   hnueCCinFV_stack_13->SetBinError(26,1.008773);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__20->SetBinContent(3,10.50959);
   hmcerror__20->SetBinContent(4,75.37781);
   hmcerror__20->SetBinContent(5,174.7332);
   hmcerror__20->SetBinContent(6,242.3891);
   hmcerror__20->SetBinContent(7,282.4447);
   hmcerror__20->SetBinContent(8,254.6544);
   hmcerror__20->SetBinContent(9,242.2644);
   hmcerror__20->SetBinContent(10,213.0839);
   hmcerror__20->SetBinContent(11,173.0145);
   hmcerror__20->SetBinContent(12,145.4594);
   hmcerror__20->SetBinContent(13,108.426);
   hmcerror__20->SetBinContent(14,92.48334);
   hmcerror__20->SetBinContent(15,75.86074);
   hmcerror__20->SetBinContent(16,60.3829);
   hmcerror__20->SetBinContent(17,52.02142);
   hmcerror__20->SetBinContent(18,42.34776);
   hmcerror__20->SetBinContent(19,38.79689);
   hmcerror__20->SetBinContent(20,23.61313);
   hmcerror__20->SetBinContent(21,22.16167);
   hmcerror__20->SetBinContent(22,15.27708);
   hmcerror__20->SetBinContent(23,9.84099);
   hmcerror__20->SetBinContent(24,8.066541);
   hmcerror__20->SetBinContent(25,3.022351);
   hmcerror__20->SetBinContent(26,22.82356);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.3895343);
   hmcerror__20->SetBinError(3,6.042778);
   hmcerror__20->SetBinError(4,47.04821);
   hmcerror__20->SetBinError(5,94.29116);
   hmcerror__20->SetBinError(6,121.3586);
   hmcerror__20->SetBinError(7,134.0614);
   hmcerror__20->SetBinError(8,120.7615);
   hmcerror__20->SetBinError(9,110.738);
   hmcerror__20->SetBinError(10,87.07215);
   hmcerror__20->SetBinError(11,63.76694);
   hmcerror__20->SetBinError(12,62.56321);
   hmcerror__20->SetBinError(13,37.08261);
   hmcerror__20->SetBinError(14,31.95887);
   hmcerror__20->SetBinError(15,28.71906);
   hmcerror__20->SetBinError(16,29.0268);
   hmcerror__20->SetBinError(17,24.59225);
   hmcerror__20->SetBinError(18,27.4663);
   hmcerror__20->SetBinError(19,22.97265);
   hmcerror__20->SetBinError(20,15.16679);
   hmcerror__20->SetBinError(21,17.85303);
   hmcerror__20->SetBinError(22,10.42165);
   hmcerror__20->SetBinError(23,9.095033);
   hmcerror__20->SetBinError(24,8.030284);
   hmcerror__20->SetBinError(25,3.935555);
   hmcerror__20->SetBinError(26,18.59884);
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
   
   Double_t _fx3025[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3025[25] = {
   0,
   0,
   12,
   93,
   185,
   269,
   268,
   238,
   231,
   162,
   123,
   103,
   84,
   55,
   50,
   34,
   34,
   24,
   17,
   5,
   10,
   5,
   7,
   4,
   3};
   Double_t _felx3025[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3025[25] = {
   0,
   0,
   3.64022,
   9.7658,
   13.60147,
   16.40122,
   16.37071,
   15.42725,
   15.19868,
   12.72792,
   11.09054,
   10.14889,
   9.2886,
   7.546,
   7.2025,
   5.9703,
   5.9703,
   5.0476,
   4.2835,
   2.48995,
   3.34883,
   2.48995,
   2.85954,
   2.29683,
   2.143368};
   Double_t _fehx3025[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3025[25] = {
   1.1478,
   1.1478,
   3.4155,
   9.564,
   13.60147,
   16.40122,
   16.37071,
   15.42725,
   15.19868,
   12.72792,
   11.09054,
   10.14889,
   9.0869,
   7.3425,
   6.9985,
   5.7635,
   5.7635,
   4.837,
   4.0673,
   2.21064,
   3.1179,
   2.21064,
   2.61053,
   1.98186,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1980);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(313.9413);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2016.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 53.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  911.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  198.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 380.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 244.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3026[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3026[25] = {
   0,
   0,
   0.5749776,
   0.6241653,
   0.5396294,
   0.5006769,
   0.4746465,
   0.4742173,
   0.4570955,
   0.4086285,
   0.3685641,
   0.4301077,
   0.3420086,
   0.3455635,
   0.3785761,
   0.4807123,
   0.4727333,
   0.6485891,
   0.5921261,
   0.6423032,
   0.8055813,
   0.6821755,
   0.924199,
   0.9955053,
   1.30215};
   Double_t _fehx3026[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3026[25] = {
   0,
   0,
   0.5749776,
   0.6241653,
   0.5396294,
   0.5006769,
   0.4746465,
   0.4742173,
   0.4570955,
   0.4086285,
   0.3685641,
   0.4301077,
   0.3420086,
   0.3455635,
   0.3785761,
   0.4807123,
   0.4727333,
   0.6485891,
   0.5921261,
   0.6423032,
   0.8055813,
   0.6821755,
   0.924199,
   0.9955053,
   1.30215};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1980);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3027[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3027[25] = {
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
   Double_t _felx3027[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3027[25] = {
   0,
   0,
   0.3723485,
   0.6004559,
   0.5289677,
   0.4796873,
   0.448152,
   0.4556553,
   0.4305404,
   0.3785804,
   0.3369993,
   0.3303883,
   0.2919923,
   0.2382825,
   0.2684829,
   0.315179,
   0.3140843,
   0.355231,
   0.3570563,
   0.4267612,
   0.3857758,
   0.3037258,
   0.445025,
   0.333042,
   0.4795414};
   Double_t _fehx3027[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3027[25] = {
   0,
   0,
   0.3723485,
   0.6004559,
   0.5289677,
   0.4796873,
   0.448152,
   0.4556553,
   0.4305404,
   0.3785804,
   0.3369993,
   0.3303883,
   0.2919923,
   0.2382825,
   0.2684829,
   0.315179,
   0.3140843,
   0.355231,
   0.3570563,
   0.4267612,
   0.3857758,
   0.3037258,
   0.445025,
   0.333042,
   0.4795414};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1980);
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
   
   Double_t _fx3028[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3028[25] = {
   10,
   10,
   1.141814,
   1.233785,
   1.058757,
   1.109786,
   0.9488582,
   0.9346,
   0.9535037,
   0.7602639,
   0.7109229,
   0.7081014,
   0.7747222,
   0.5947017,
   0.6591024,
   0.5630733,
   0.653577,
   0.566736,
   0.4381795,
   0.2117466,
   0.4512295,
   0.3272876,
   0.7113105,
   0.4958755,
   0.9926047};
   Double_t _felx3028[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3028[25] = {
   0,
   0,
   0.3463713,
   0.129558,
   0.07784138,
   0.06766485,
   0.05796074,
   0.06058112,
   0.06273594,
   0.05973197,
   0.06410176,
   0.0697713,
   0.08566767,
   0.08159308,
   0.09494371,
   0.09887402,
   0.1147662,
   0.119194,
   0.1104083,
   0.1054477,
   0.1511091,
   0.162986,
   0.2905744,
   0.2847354,
   0.7091724};
   Double_t _fehx3028[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3028[25] = {
   0,
   0,
   0.3249889,
   0.1268808,
   0.07784138,
   0.06766485,
   0.05796074,
   0.06058112,
   0.06273594,
   0.05973197,
   0.06410176,
   0.0697713,
   0.08380742,
   0.07939268,
   0.09225457,
   0.09544921,
   0.1107909,
   0.1142209,
   0.1048357,
   0.09361911,
   0.1406888,
   0.144703,
   0.2652711,
   0.245689,
   0.5704896};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1980);
   Graph_Graph3028->SetMinimum(0.09566903);
   Graph_Graph3028->SetMaximum(10.98937);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
