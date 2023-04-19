#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 16:15:26 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",138,161,1200,900);
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
   pad1->Range(-246.1538,-6.595351,1805.128,729.307);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmc__19->SetBinContent(3,4.398755);
   hmc__19->SetBinContent(4,61.0776);
   hmc__19->SetBinContent(5,184.0387);
   hmc__19->SetBinContent(6,271.1163);
   hmc__19->SetBinContent(7,329.7675);
   hmc__19->SetBinContent(8,328.1158);
   hmc__19->SetBinContent(9,295.1497);
   hmc__19->SetBinContent(10,275.8197);
   hmc__19->SetBinContent(11,220.1614);
   hmc__19->SetBinContent(12,187.0398);
   hmc__19->SetBinContent(13,152.5655);
   hmc__19->SetBinContent(14,111.8077);
   hmc__19->SetBinContent(15,87.90142);
   hmc__19->SetBinContent(16,71.39425);
   hmc__19->SetBinContent(17,51.23658);
   hmc__19->SetBinContent(18,42.3955);
   hmc__19->SetBinContent(19,34.01284);
   hmc__19->SetBinContent(20,30.43753);
   hmc__19->SetBinContent(21,22.58971);
   hmc__19->SetBinContent(22,18.02335);
   hmc__19->SetBinContent(23,13.399);
   hmc__19->SetBinContent(24,11.20159);
   hmc__19->SetBinContent(25,38.99806);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.3895343);
   hmc__19->SetBinError(3,4.902846);
   hmc__19->SetBinError(4,22.13933);
   hmc__19->SetBinError(5,61.69188);
   hmc__19->SetBinError(6,98.37085);
   hmc__19->SetBinError(7,132.2371);
   hmc__19->SetBinError(8,135.4811);
   hmc__19->SetBinError(9,131.3381);
   hmc__19->SetBinError(10,113.4933);
   hmc__19->SetBinError(11,91.34196);
   hmc__19->SetBinError(12,75.94969);
   hmc__19->SetBinError(13,73.84056);
   hmc__19->SetBinError(14,43.91629);
   hmc__19->SetBinError(15,33.69844);
   hmc__19->SetBinError(16,36.62739);
   hmc__19->SetBinError(17,22.78913);
   hmc__19->SetBinError(18,19.82737);
   hmc__19->SetBinError(19,16.49734);
   hmc__19->SetBinError(20,15.70522);
   hmc__19->SetBinError(21,12.91679);
   hmc__19->SetBinError(22,12.35579);
   hmc__19->SetBinError(23,10.90508);
   hmc__19->SetBinError(24,7.667224);
   hmc__19->SetBinError(25,19.21983);
   hmc__19->SetMinimum(-6.595351);
   hmc__19->SetMaximum(692.5118);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,1600);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(346.2559);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hbadmatch_stack_1->SetBinContent(4,1.898005);
   hbadmatch_stack_1->SetBinContent(5,3.624552);
   hbadmatch_stack_1->SetBinContent(6,6.376895);
   hbadmatch_stack_1->SetBinContent(7,8.077556);
   hbadmatch_stack_1->SetBinContent(8,4.107543);
   hbadmatch_stack_1->SetBinContent(9,5.430781);
   hbadmatch_stack_1->SetBinContent(10,6.647338);
   hbadmatch_stack_1->SetBinContent(11,3.031983);
   hbadmatch_stack_1->SetBinContent(12,3.788026);
   hbadmatch_stack_1->SetBinContent(13,2.659463);
   hbadmatch_stack_1->SetBinContent(14,3.859165);
   hbadmatch_stack_1->SetBinContent(15,1.322064);
   hbadmatch_stack_1->SetBinContent(16,1.994443);
   hbadmatch_stack_1->SetBinContent(17,0.9303237);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.3900497);
   hbadmatch_stack_1->SetBinContent(20,0.8770706);
   hbadmatch_stack_1->SetBinContent(21,0.3934307);
   hbadmatch_stack_1->SetBinContent(22,0.3917402);
   hbadmatch_stack_1->SetBinContent(23,0.4508822);
   hbadmatch_stack_1->SetBinContent(25,1.26712);
   hbadmatch_stack_1->SetBinError(4,0.8654825);
   hbadmatch_stack_1->SetBinError(5,1.053015);
   hbadmatch_stack_1->SetBinError(6,1.330722);
   hbadmatch_stack_1->SetBinError(7,2.530491);
   hbadmatch_stack_1->SetBinError(8,1.043297);
   hbadmatch_stack_1->SetBinError(9,1.149721);
   hbadmatch_stack_1->SetBinError(10,1.385932);
   hbadmatch_stack_1->SetBinError(11,0.8684342);
   hbadmatch_stack_1->SetBinError(12,0.9777506);
   hbadmatch_stack_1->SetBinError(13,0.8763845);
   hbadmatch_stack_1->SetBinError(14,1.101607);
   hbadmatch_stack_1->SetBinError(15,0.5554667);
   hbadmatch_stack_1->SetBinError(16,0.7733187);
   hbadmatch_stack_1->SetBinError(17,0.4814682);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.2758068);
   hbadmatch_stack_1->SetBinError(20,0.5197486);
   hbadmatch_stack_1->SetBinError(21,0.2781975);
   hbadmatch_stack_1->SetBinError(22,0.2770047);
   hbadmatch_stack_1->SetBinError(23,0.3213996);
   hbadmatch_stack_1->SetBinError(25,0.5883944);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hext_stack_2->SetBinContent(3,0.4065989);
   hext_stack_2->SetBinContent(4,4.545971);
   hext_stack_2->SetBinContent(5,21.79018);
   hext_stack_2->SetBinContent(6,20.6107);
   hext_stack_2->SetBinContent(7,17.85112);
   hext_stack_2->SetBinContent(8,27.17965);
   hext_stack_2->SetBinContent(9,14.88247);
   hext_stack_2->SetBinContent(10,16.80731);
   hext_stack_2->SetBinContent(11,11.23026);
   hext_stack_2->SetBinContent(12,14.01737);
   hext_stack_2->SetBinContent(13,7.772812);
   hext_stack_2->SetBinContent(14,9.227624);
   hext_stack_2->SetBinContent(15,4.143782);
   hext_stack_2->SetBinContent(16,2.192989);
   hext_stack_2->SetBinContent(17,4.677244);
   hext_stack_2->SetBinContent(18,1.379791);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,1.868591);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(24,2.566457);
   hext_stack_2->SetBinContent(25,2.110787);
   hext_stack_2->SetBinError(3,0.4065989);
   hext_stack_2->SetBinError(4,1.268224);
   hext_stack_2->SetBinError(5,3.316116);
   hext_stack_2->SetBinError(6,3.103187);
   hext_stack_2->SetBinError(7,2.9441);
   hext_stack_2->SetBinError(8,3.732655);
   hext_stack_2->SetBinError(9,2.644021);
   hext_stack_2->SetBinError(10,2.868075);
   hext_stack_2->SetBinError(11,2.302551);
   hext_stack_2->SetBinError(12,2.756296);
   hext_stack_2->SetBinError(13,1.843762);
   hext_stack_2->SetBinError(14,2.035134);
   hext_stack_2->SetBinError(15,1.256262);
   hext_stack_2->SetBinError(16,0.9009267);
   hext_stack_2->SetBinError(17,1.54863);
   hext_stack_2->SetBinError(18,0.6935586);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,0.840497);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(24,1.283228);
   hext_stack_2->SetBinError(25,0.8669371);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hdirt_stack_3->SetBinContent(4,0.7817008);
   hdirt_stack_3->SetBinContent(5,1.813062);
   hdirt_stack_3->SetBinContent(6,1.758866);
   hdirt_stack_3->SetBinContent(7,2.791124);
   hdirt_stack_3->SetBinContent(8,1.289074);
   hdirt_stack_3->SetBinContent(9,1.39498);
   hdirt_stack_3->SetBinContent(10,0.4950385);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.4377912);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.3381872);
   hdirt_stack_3->SetBinError(4,0.4973709);
   hdirt_stack_3->SetBinError(5,0.6271593);
   hdirt_stack_3->SetBinError(6,0.683869);
   hdirt_stack_3->SetBinError(7,1.157323);
   hdirt_stack_3->SetBinError(8,0.5689953);
   hdirt_stack_3->SetBinError(9,0.5880834);
   hdirt_stack_3->SetBinError(10,0.2933304);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.3095651);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(21,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   houtFV_stack_4->SetBinContent(4,5.032836);
   houtFV_stack_4->SetBinContent(5,12.47052);
   houtFV_stack_4->SetBinContent(6,12.50235);
   houtFV_stack_4->SetBinContent(7,15.35342);
   houtFV_stack_4->SetBinContent(8,13.01894);
   houtFV_stack_4->SetBinContent(9,10.65658);
   houtFV_stack_4->SetBinContent(10,6.403947);
   houtFV_stack_4->SetBinContent(11,4.111503);
   houtFV_stack_4->SetBinContent(12,3.088183);
   houtFV_stack_4->SetBinContent(13,3.074514);
   houtFV_stack_4->SetBinContent(14,2.108925);
   houtFV_stack_4->SetBinContent(15,1.968405);
   houtFV_stack_4->SetBinContent(16,1.857266);
   houtFV_stack_4->SetBinContent(17,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.5850745);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.3934307);
   houtFV_stack_4->SetBinContent(23,0.3401776);
   houtFV_stack_4->SetBinContent(25,0.7319179);
   houtFV_stack_4->SetBinError(4,1.144077);
   houtFV_stack_4->SetBinError(5,1.804506);
   houtFV_stack_4->SetBinError(6,1.798253);
   houtFV_stack_4->SetBinError(7,1.954324);
   houtFV_stack_4->SetBinError(8,1.784338);
   houtFV_stack_4->SetBinError(9,1.606152);
   houtFV_stack_4->SetBinError(10,1.311703);
   houtFV_stack_4->SetBinError(11,0.9635799);
   houtFV_stack_4->SetBinError(12,0.8469474);
   houtFV_stack_4->SetBinError(13,0.920955);
   houtFV_stack_4->SetBinError(14,0.6806842);
   houtFV_stack_4->SetBinError(15,0.6711965);
   houtFV_stack_4->SetBinError(16,0.6799255);
   houtFV_stack_4->SetBinError(17,0.3397478);
   houtFV_stack_4->SetBinError(18,0.337793);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.2781975);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(25,0.438694);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1086555);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.15719);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.067688);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.812339);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.315212);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.687289);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.674008);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9906222);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5025361);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3435999);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.6337722);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3321761);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5053593);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3644869);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4373019);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3642206);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2820092);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.787352);
   hNCpi0inFVres_stack_7->SetBinContent(4,33.94678);
   hNCpi0inFVres_stack_7->SetBinContent(5,103.43);
   hNCpi0inFVres_stack_7->SetBinContent(6,161.9877);
   hNCpi0inFVres_stack_7->SetBinContent(7,188.487);
   hNCpi0inFVres_stack_7->SetBinContent(8,179.9903);
   hNCpi0inFVres_stack_7->SetBinContent(9,156.9059);
   hNCpi0inFVres_stack_7->SetBinContent(10,124.8137);
   hNCpi0inFVres_stack_7->SetBinContent(11,97.15684);
   hNCpi0inFVres_stack_7->SetBinContent(12,72.3661);
   hNCpi0inFVres_stack_7->SetBinContent(13,55.76836);
   hNCpi0inFVres_stack_7->SetBinContent(14,36.5063);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.48217);
   hNCpi0inFVres_stack_7->SetBinContent(16,20.75205);
   hNCpi0inFVres_stack_7->SetBinContent(17,13.40219);
   hNCpi0inFVres_stack_7->SetBinContent(18,11.79993);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.462451);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.037218);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.529866);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.621616);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.659062);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.727508);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.700842);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5256807);
   hNCpi0inFVres_stack_7->SetBinError(4,1.846517);
   hNCpi0inFVres_stack_7->SetBinError(5,3.286016);
   hNCpi0inFVres_stack_7->SetBinError(6,4.166847);
   hNCpi0inFVres_stack_7->SetBinError(7,4.494676);
   hNCpi0inFVres_stack_7->SetBinError(8,4.394031);
   hNCpi0inFVres_stack_7->SetBinError(9,4.131063);
   hNCpi0inFVres_stack_7->SetBinError(10,3.682859);
   hNCpi0inFVres_stack_7->SetBinError(11,3.256889);
   hNCpi0inFVres_stack_7->SetBinError(12,2.82302);
   hNCpi0inFVres_stack_7->SetBinError(13,2.486829);
   hNCpi0inFVres_stack_7->SetBinError(14,1.962593);
   hNCpi0inFVres_stack_7->SetBinError(15,1.588661);
   hNCpi0inFVres_stack_7->SetBinError(16,1.534894);
   hNCpi0inFVres_stack_7->SetBinError(17,1.253676);
   hNCpi0inFVres_stack_7->SetBinError(18,1.189203);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9295329);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7937689);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6430693);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5569579);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4594375);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4490241);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7559719);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.975681);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.29109);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.81537);
   hNCpi0inFVdis_stack_8->SetBinContent(7,25.04847);
   hNCpi0inFVdis_stack_8->SetBinContent(8,25.31934);
   hNCpi0inFVdis_stack_8->SetBinContent(9,25.40039);
   hNCpi0inFVdis_stack_8->SetBinContent(10,24.74706);
   hNCpi0inFVdis_stack_8->SetBinContent(11,19.15974);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.44662);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.73035);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.664065);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.523902);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.380171);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.246304);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.624688);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.45812);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.634066);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.579266);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.978748);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.74409);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.031308);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.454142);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6949436);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.233831);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.316322);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.584286);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.606224);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.623657);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.603354);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.436298);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.390074);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.305064);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9937606);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9985794);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.999002);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8218348);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6043263);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.616284);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4822382);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5319981);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4555378);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4317784);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3482878);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.769747);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.5025361);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2820092);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hCCpi0inFV_stack_10->SetBinContent(4,1.608988);
   hCCpi0inFV_stack_10->SetBinContent(5,4.979962);
   hCCpi0inFV_stack_10->SetBinContent(6,10.09482);
   hCCpi0inFV_stack_10->SetBinContent(7,24.17068);
   hCCpi0inFV_stack_10->SetBinContent(8,28.89273);
   hCCpi0inFV_stack_10->SetBinContent(9,34.16941);
   hCCpi0inFV_stack_10->SetBinContent(10,43.39117);
   hCCpi0inFV_stack_10->SetBinContent(11,40.61372);
   hCCpi0inFV_stack_10->SetBinContent(12,38.28147);
   hCCpi0inFV_stack_10->SetBinContent(13,28.52599);
   hCCpi0inFV_stack_10->SetBinContent(14,22.88425);
   hCCpi0inFV_stack_10->SetBinContent(15,22.81509);
   hCCpi0inFV_stack_10->SetBinContent(16,19.83095);
   hCCpi0inFV_stack_10->SetBinContent(17,12.69877);
   hCCpi0inFV_stack_10->SetBinContent(18,9.587864);
   hCCpi0inFV_stack_10->SetBinContent(19,9.584719);
   hCCpi0inFV_stack_10->SetBinContent(20,9.513103);
   hCCpi0inFV_stack_10->SetBinContent(21,5.671544);
   hCCpi0inFV_stack_10->SetBinContent(22,3.230893);
   hCCpi0inFV_stack_10->SetBinContent(23,2.876109);
   hCCpi0inFV_stack_10->SetBinContent(24,3.12652);
   hCCpi0inFV_stack_10->SetBinContent(25,7.235731);
   hCCpi0inFV_stack_10->SetBinError(4,0.6801404);
   hCCpi0inFV_stack_10->SetBinError(5,1.127006);
   hCCpi0inFV_stack_10->SetBinError(6,1.573439);
   hCCpi0inFV_stack_10->SetBinError(7,2.533577);
   hCCpi0inFV_stack_10->SetBinError(8,2.610359);
   hCCpi0inFV_stack_10->SetBinError(9,2.928935);
   hCCpi0inFV_stack_10->SetBinError(10,3.276531);
   hCCpi0inFV_stack_10->SetBinError(11,3.242573);
   hCCpi0inFV_stack_10->SetBinError(12,3.078819);
   hCCpi0inFV_stack_10->SetBinError(13,2.677585);
   hCCpi0inFV_stack_10->SetBinError(14,2.393333);
   hCCpi0inFV_stack_10->SetBinError(15,2.430441);
   hCCpi0inFV_stack_10->SetBinError(16,2.292462);
   hCCpi0inFV_stack_10->SetBinError(17,1.788598);
   hCCpi0inFV_stack_10->SetBinError(18,1.507606);
   hCCpi0inFV_stack_10->SetBinError(19,1.559558);
   hCCpi0inFV_stack_10->SetBinError(20,1.63015);
   hCCpi0inFV_stack_10->SetBinError(21,1.143501);
   hCCpi0inFV_stack_10->SetBinError(22,0.855484);
   hCCpi0inFV_stack_10->SetBinError(23,0.8993325);
   hCCpi0inFV_stack_10->SetBinError(24,0.874362);
   hCCpi0inFV_stack_10->SetBinError(25,1.34604);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hNCinFV_stack_11->SetBinContent(4,3.122696);
   hNCinFV_stack_11->SetBinContent(5,8.401417);
   hNCinFV_stack_11->SetBinContent(6,11.87721);
   hNCinFV_stack_11->SetBinContent(7,17.97853);
   hNCinFV_stack_11->SetBinContent(8,20.30544);
   hNCinFV_stack_11->SetBinContent(9,20.10267);
   hNCinFV_stack_11->SetBinContent(10,23.88773);
   hNCinFV_stack_11->SetBinContent(11,20.52352);
   hNCinFV_stack_11->SetBinContent(12,17.01355);
   hNCinFV_stack_11->SetBinContent(13,17.53076);
   hNCinFV_stack_11->SetBinContent(14,13.63135);
   hNCinFV_stack_11->SetBinContent(15,12.31544);
   hNCinFV_stack_11->SetBinContent(16,6.438726);
   hNCinFV_stack_11->SetBinContent(17,7.964268);
   hNCinFV_stack_11->SetBinContent(18,9.202886);
   hNCinFV_stack_11->SetBinContent(19,5.663699);
   hNCinFV_stack_11->SetBinContent(20,4.644856);
   hNCinFV_stack_11->SetBinContent(21,3.611408);
   hNCinFV_stack_11->SetBinContent(22,5.180059);
   hNCinFV_stack_11->SetBinContent(23,3.124387);
   hNCinFV_stack_11->SetBinContent(24,1.710423);
   hNCinFV_stack_11->SetBinContent(25,6.441025);
   hNCinFV_stack_11->SetBinError(4,0.8988017);
   hNCinFV_stack_11->SetBinError(5,1.49555);
   hNCinFV_stack_11->SetBinError(6,1.722471);
   hNCinFV_stack_11->SetBinError(7,2.075318);
   hNCinFV_stack_11->SetBinError(8,2.313716);
   hNCinFV_stack_11->SetBinError(9,2.18546);
   hNCinFV_stack_11->SetBinError(10,2.450891);
   hNCinFV_stack_11->SetBinError(11,2.280781);
   hNCinFV_stack_11->SetBinError(12,2.029962);
   hNCinFV_stack_11->SetBinError(13,2.113254);
   hNCinFV_stack_11->SetBinError(14,1.872748);
   hNCinFV_stack_11->SetBinError(15,1.732819);
   hNCinFV_stack_11->SetBinError(16,1.285714);
   hNCinFV_stack_11->SetBinError(17,1.415256);
   hNCinFV_stack_11->SetBinError(18,1.482832);
   hNCinFV_stack_11->SetBinError(19,1.225932);
   hNCinFV_stack_11->SetBinError(20,1.075365);
   hNCinFV_stack_11->SetBinError(21,1.001287);
   hNCinFV_stack_11->SetBinError(22,1.144624);
   hNCinFV_stack_11->SetBinError(23,0.89917);
   hNCinFV_stack_11->SetBinError(24,0.6196373);
   hNCinFV_stack_11->SetBinError(25,1.361011);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnumuCCinFV_stack_12->SetBinContent(3,0.5635999);
   hnumuCCinFV_stack_12->SetBinContent(4,4.221549);
   hnumuCCinFV_stack_12->SetBinContent(5,12.26892);
   hnumuCCinFV_stack_12->SetBinContent(6,23.30133);
   hnumuCCinFV_stack_12->SetBinContent(7,27.43049);
   hnumuCCinFV_stack_12->SetBinContent(8,24.70495);
   hnumuCCinFV_stack_12->SetBinContent(9,22.88651);
   hnumuCCinFV_stack_12->SetBinContent(10,25.22707);
   hnumuCCinFV_stack_12->SetBinContent(11,21.32074);
   hnumuCCinFV_stack_12->SetBinContent(12,18.77226);
   hnumuCCinFV_stack_12->SetBinContent(13,20.04281);
   hnumuCCinFV_stack_12->SetBinContent(14,13.06988);
   hnumuCCinFV_stack_12->SetBinContent(15,10.43204);
   hnumuCCinFV_stack_12->SetBinContent(16,8.608422);
   hnumuCCinFV_stack_12->SetBinContent(17,4.394497);
   hnumuCCinFV_stack_12->SetBinContent(18,5.473685);
   hnumuCCinFV_stack_12->SetBinContent(19,6.303161);
   hnumuCCinFV_stack_12->SetBinContent(20,4.396579);
   hnumuCCinFV_stack_12->SetBinContent(21,4.060526);
   hnumuCCinFV_stack_12->SetBinContent(22,3.143566);
   hnumuCCinFV_stack_12->SetBinContent(23,2.589184);
   hnumuCCinFV_stack_12->SetBinContent(24,0.9835768);
   hnumuCCinFV_stack_12->SetBinContent(25,6.191266);
   hnumuCCinFV_stack_12->SetBinError(3,0.4022385);
   hnumuCCinFV_stack_12->SetBinError(4,1.152647);
   hnumuCCinFV_stack_12->SetBinError(5,2.440481);
   hnumuCCinFV_stack_12->SetBinError(6,3.231904);
   hnumuCCinFV_stack_12->SetBinError(7,3.101671);
   hnumuCCinFV_stack_12->SetBinError(8,2.938531);
   hnumuCCinFV_stack_12->SetBinError(9,2.609896);
   hnumuCCinFV_stack_12->SetBinError(10,2.726917);
   hnumuCCinFV_stack_12->SetBinError(11,2.64334);
   hnumuCCinFV_stack_12->SetBinError(12,2.365676);
   hnumuCCinFV_stack_12->SetBinError(13,3.322115);
   hnumuCCinFV_stack_12->SetBinError(14,2.215777);
   hnumuCCinFV_stack_12->SetBinError(15,1.868447);
   hnumuCCinFV_stack_12->SetBinError(16,1.556425);
   hnumuCCinFV_stack_12->SetBinError(17,1.008998);
   hnumuCCinFV_stack_12->SetBinError(18,1.179903);
   hnumuCCinFV_stack_12->SetBinError(19,1.304476);
   hnumuCCinFV_stack_12->SetBinError(20,1.075501);
   hnumuCCinFV_stack_12->SetBinError(21,0.9834867);
   hnumuCCinFV_stack_12->SetBinError(22,0.8246607);
   hnumuCCinFV_stack_12->SetBinError(23,0.809167);
   hnumuCCinFV_stack_12->SetBinError(24,0.4398689);
   hnumuCCinFV_stack_12->SetBinError(25,1.290534);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hnueCCinFV_stack_13->SetBinContent(4,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(5,0.4488907);
   hnueCCinFV_stack_13->SetBinContent(6,0.5938826);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(9,0.8950397);
   hnueCCinFV_stack_13->SetBinContent(10,0.791415);
   hnueCCinFV_stack_13->SetBinContent(11,1.232835);
   hnueCCinFV_stack_13->SetBinContent(12,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(13,0.441907);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.6428206);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(23,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(25,4.684214);
   hnueCCinFV_stack_13->SetBinError(4,0.4139598);
   hnueCCinFV_stack_13->SetBinError(5,0.320129);
   hnueCCinFV_stack_13->SetBinError(6,0.4243666);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.4132436);
   hnueCCinFV_stack_13->SetBinError(9,0.450777);
   hnueCCinFV_stack_13->SetBinError(10,0.6263902);
   hnueCCinFV_stack_13->SetBinError(11,0.6276957);
   hnueCCinFV_stack_13->SetBinError(12,0.3401778);
   hnueCCinFV_stack_13->SetBinError(13,0.3143499);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.3735155);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.4379386);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(23,0.2770047);
   hnueCCinFV_stack_13->SetBinError(25,1.117485);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);
   hmcerror__20->SetBinContent(3,4.398755);
   hmcerror__20->SetBinContent(4,61.0776);
   hmcerror__20->SetBinContent(5,184.0387);
   hmcerror__20->SetBinContent(6,271.1163);
   hmcerror__20->SetBinContent(7,329.7675);
   hmcerror__20->SetBinContent(8,328.1158);
   hmcerror__20->SetBinContent(9,295.1497);
   hmcerror__20->SetBinContent(10,275.8197);
   hmcerror__20->SetBinContent(11,220.1614);
   hmcerror__20->SetBinContent(12,187.0398);
   hmcerror__20->SetBinContent(13,152.5655);
   hmcerror__20->SetBinContent(14,111.8077);
   hmcerror__20->SetBinContent(15,87.90142);
   hmcerror__20->SetBinContent(16,71.39425);
   hmcerror__20->SetBinContent(17,51.23658);
   hmcerror__20->SetBinContent(18,42.3955);
   hmcerror__20->SetBinContent(19,34.01284);
   hmcerror__20->SetBinContent(20,30.43753);
   hmcerror__20->SetBinContent(21,22.58971);
   hmcerror__20->SetBinContent(22,18.02335);
   hmcerror__20->SetBinContent(23,13.399);
   hmcerror__20->SetBinContent(24,11.20159);
   hmcerror__20->SetBinContent(25,38.99806);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.3895343);
   hmcerror__20->SetBinError(3,4.902846);
   hmcerror__20->SetBinError(4,22.13933);
   hmcerror__20->SetBinError(5,61.69188);
   hmcerror__20->SetBinError(6,98.37085);
   hmcerror__20->SetBinError(7,132.2371);
   hmcerror__20->SetBinError(8,135.4811);
   hmcerror__20->SetBinError(9,131.3381);
   hmcerror__20->SetBinError(10,113.4933);
   hmcerror__20->SetBinError(11,91.34196);
   hmcerror__20->SetBinError(12,75.94969);
   hmcerror__20->SetBinError(13,73.84056);
   hmcerror__20->SetBinError(14,43.91629);
   hmcerror__20->SetBinError(15,33.69844);
   hmcerror__20->SetBinError(16,36.62739);
   hmcerror__20->SetBinError(17,22.78913);
   hmcerror__20->SetBinError(18,19.82737);
   hmcerror__20->SetBinError(19,16.49734);
   hmcerror__20->SetBinError(20,15.70522);
   hmcerror__20->SetBinError(21,12.91679);
   hmcerror__20->SetBinError(22,12.35579);
   hmcerror__20->SetBinError(23,10.90508);
   hmcerror__20->SetBinError(24,7.667224);
   hmcerror__20->SetBinError(25,19.21983);
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
   
   Double_t _fx3025[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3025[24] = {
   0,
   0,
   8,
   58,
   144,
   233,
   256,
   224,
   223,
   194,
   141,
   114,
   94,
   73,
   55,
   46,
   33,
   34,
   26,
   21,
   6,
   7,
   10,
   4};
   Double_t _felx3025[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3025[24] = {
   0,
   0,
   3.0307,
   7.7446,
   12,
   15.26434,
   16,
   14.96663,
   14.93318,
   13.92839,
   11.87434,
   10.67708,
   9.8173,
   8.6693,
   7.546,
   6.9153,
   5.8847,
   5.9703,
   5.2453,
   4.7354,
   2.67925,
   2.85954,
   3.34883,
   2.29683};
   Double_t _fehx3025[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3025[24] = {
   1.1478,
   1.1478,
   2.7896,
   7.5415,
   12,
   15.26434,
   16,
   14.96663,
   14.93318,
   13.92839,
   11.87434,
   10.67708,
   9.616,
   8.4672,
   7.3425,
   6.7108,
   5.6776,
   5.7635,
   5.0358,
   4.5229,
   2.41858,
   2.61053,
   3.1179,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1760);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(299.2);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.71#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2004.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 186.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 94.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1307.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  241.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 376.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 264.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.1","F");

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
   pad2->Range(-246.4,-0.5333333,1806.933,2.133333);
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
   
   Double_t _fx3026[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3026[24] = {
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
   Double_t _felx3026[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3026[24] = {
   0,
   0,
   1.114599,
   0.3624787,
   0.3352115,
   0.3628363,
   0.4010009,
   0.4129064,
   0.4449881,
   0.4114763,
   0.4148863,
   0.4060616,
   0.4839926,
   0.3927841,
   0.3833663,
   0.51303,
   0.4447824,
   0.4676762,
   0.4850329,
   0.5159821,
   0.5717995,
   0.6855434,
   0.8138729,
   0.6844762};
   Double_t _fehx3026[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3026[24] = {
   0,
   0,
   1.114599,
   0.3624787,
   0.3352115,
   0.3628363,
   0.4010009,
   0.4129064,
   0.4449881,
   0.4114763,
   0.4148863,
   0.4060616,
   0.4839926,
   0.3927841,
   0.3833663,
   0.51303,
   0.4447824,
   0.4676762,
   0.4850329,
   0.5159821,
   0.5717995,
   0.6855434,
   0.8138729,
   0.6844762};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1760);
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
   
   Double_t _fx3027[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3027[24] = {
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
   Double_t _felx3027[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3027[24] = {
   0,
   0,
   0.3270647,
   0.2708013,
   0.2977861,
   0.3446581,
   0.3826945,
   0.4001338,
   0.4208022,
   0.3933953,
   0.3901501,
   0.357531,
   0.3556306,
   0.3373837,
   0.2914874,
   0.2908445,
   0.2700553,
   0.2621972,
   0.2653141,
   0.2600837,
   0.237306,
   0.2744807,
   0.2577025,
   0.2600089};
   Double_t _fehx3027[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3027[24] = {
   0,
   0,
   0.3270647,
   0.2708013,
   0.2977861,
   0.3446581,
   0.3826945,
   0.4001338,
   0.4208022,
   0.3933953,
   0.3901501,
   0.357531,
   0.3556306,
   0.3373837,
   0.2914874,
   0.2908445,
   0.2700553,
   0.2621972,
   0.2653141,
   0.2600837,
   0.237306,
   0.2744807,
   0.2577025,
   0.2600089};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1760);
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
   
   Double_t _fx3028[24] = {
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667,
   1033.333,
   1100,
   1166.667,
   1233.333,
   1300,
   1366.667,
   1433.333,
   1500,
   1566.667};
   Double_t _fy3028[24] = {
   10,
   10,
   1.818697,
   0.9496116,
   0.7824442,
   0.8594098,
   0.7763044,
   0.6826858,
   0.7555488,
   0.7033579,
   0.6404391,
   0.6094958,
   0.6161289,
   0.6529067,
   0.6257009,
   0.6443096,
   0.6440711,
   0.8019719,
   0.7644173,
   0.6899378,
   0.2656076,
   0.3883852,
   0.7463243,
   0.3570921};
   Double_t _felx3028[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3028[24] = {
   0,
   0,
   0.6889905,
   0.1267993,
   0.06520368,
   0.05630181,
   0.04851903,
   0.04561386,
   0.05059529,
   0.05049816,
   0.0539347,
   0.05708451,
   0.06434811,
   0.07753759,
   0.08584617,
   0.09686074,
   0.1148535,
   0.1408239,
   0.1542153,
   0.1555777,
   0.1186049,
   0.1586576,
   0.2499313,
   0.2050449};
   Double_t _fehx3028[24] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3028[24] = {
   0,
   0,
   0.6341795,
   0.1234741,
   0.06520368,
   0.05630181,
   0.04851903,
   0.04561386,
   0.05059529,
   0.05049816,
   0.0539347,
   0.05708451,
   0.06302868,
   0.07573002,
   0.08353107,
   0.09399637,
   0.1108115,
   0.135946,
   0.1480559,
   0.1485962,
   0.1070656,
   0.1448416,
   0.2326965,
   0.1769266};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1760);
   Graph_Graph3028->SetMinimum(0.1323025);
   Graph_Graph3028->SetMaximum(10.9853);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_nc_transferred_energy_all",24,0,1600);

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
   TLine *line = new TLine(0,1,1600,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
