#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Feb 17 19:21:11 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",60,83,1200,900);
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
   pad1->Range(-184.6154,-15.15399,1353.846,1675.713);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__19->SetBinContent(1,273.5627);
   hmc__19->SetBinContent(2,757.6996);
   hmc__19->SetBinContent(3,605.4476);
   hmc__19->SetBinContent(4,388.5658);
   hmc__19->SetBinContent(5,254.4325);
   hmc__19->SetBinContent(6,149.5334);
   hmc__19->SetBinContent(7,80.39589);
   hmc__19->SetBinContent(8,50.51437);
   hmc__19->SetBinContent(9,31.24796);
   hmc__19->SetBinContent(10,26.19136);
   hmc__19->SetBinContent(11,23.75752);
   hmc__19->SetBinContent(12,20.81377);
   hmc__19->SetBinContent(13,180.4858);
   hmc__19->SetBinError(1,82.67644);
   hmc__19->SetBinError(2,272.3427);
   hmc__19->SetBinError(3,236.1648);
   hmc__19->SetBinError(4,154.0105);
   hmc__19->SetBinError(5,102.5322);
   hmc__19->SetBinError(6,52.32033);
   hmc__19->SetBinError(7,26.77153);
   hmc__19->SetBinError(8,19.0614);
   hmc__19->SetBinError(9,13.15943);
   hmc__19->SetBinError(10,13.60023);
   hmc__19->SetBinError(11,14.65284);
   hmc__19->SetBinError(12,12.05672);
   hmc__19->SetBinError(13,56.62864);
   hmc__19->SetMinimum(-15.15399);
   hmc__19->SetMaximum(1591.169);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1200);
   hs7_stack_7->SetMinimum(-2.228162e-09);
   hs7_stack_7->SetMaximum(795.5847);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.59687);
   hbadmatch_stack_1->SetBinContent(2,14.42425);
   hbadmatch_stack_1->SetBinContent(3,10.60175);
   hbadmatch_stack_1->SetBinContent(4,6.463694);
   hbadmatch_stack_1->SetBinContent(5,3.467801);
   hbadmatch_stack_1->SetBinContent(6,2.256762);
   hbadmatch_stack_1->SetBinContent(7,1.743827);
   hbadmatch_stack_1->SetBinContent(8,1.513729);
   hbadmatch_stack_1->SetBinContent(9,0.9497471);
   hbadmatch_stack_1->SetBinContent(10,0.9269427);
   hbadmatch_stack_1->SetBinContent(11,0.5798234);
   hbadmatch_stack_1->SetBinContent(12,1.247732);
   hbadmatch_stack_1->SetBinContent(13,3.138938);
   hbadmatch_stack_1->SetBinError(1,1.742937);
   hbadmatch_stack_1->SetBinError(2,2.799196);
   hbadmatch_stack_1->SetBinError(3,1.795371);
   hbadmatch_stack_1->SetBinError(4,1.289529);
   hbadmatch_stack_1->SetBinError(5,0.9220301);
   hbadmatch_stack_1->SetBinError(6,0.8227272);
   hbadmatch_stack_1->SetBinError(7,0.678166);
   hbadmatch_stack_1->SetBinError(8,0.7607775);
   hbadmatch_stack_1->SetBinError(9,0.4897963);
   hbadmatch_stack_1->SetBinError(10,0.4800908);
   hbadmatch_stack_1->SetBinError(11,0.4306607);
   hbadmatch_stack_1->SetBinError(12,0.5865443);
   hbadmatch_stack_1->SetBinError(13,0.9462749);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,26.48179);
   hext_stack_2->SetBinContent(2,45.58583);
   hext_stack_2->SetBinContent(3,35.26974);
   hext_stack_2->SetBinContent(4,22.77056);
   hext_stack_2->SetBinContent(5,13.07731);
   hext_stack_2->SetBinContent(6,14.83775);
   hext_stack_2->SetBinContent(7,7.187449);
   hext_stack_2->SetBinContent(8,3.558419);
   hext_stack_2->SetBinContent(9,1.379791);
   hext_stack_2->SetBinContent(10,2.192989);
   hext_stack_2->SetBinContent(11,2.435184);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,13.24448);
   hext_stack_2->SetBinError(1,3.604508);
   hext_stack_2->SetBinError(2,4.635352);
   hext_stack_2->SetBinError(3,4.038341);
   hext_stack_2->SetBinError(4,3.333335);
   hext_stack_2->SetBinError(5,2.571339);
   hext_stack_2->SetBinError(6,2.779678);
   hext_stack_2->SetBinError(7,1.875196);
   hext_stack_2->SetBinError(8,1.301958);
   hext_stack_2->SetBinError(9,0.6935586);
   hext_stack_2->SetBinError(10,0.9009267);
   hext_stack_2->SetBinError(11,0.9256422);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,2.52896);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,2.040513);
   hdirt_stack_3->SetBinContent(2,4.314867);
   hdirt_stack_3->SetBinContent(3,2.866426);
   hdirt_stack_3->SetBinContent(4,0.3058066);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(7,0.4950385);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.5388689);
   hdirt_stack_3->SetBinError(1,0.7162001);
   hdirt_stack_3->SetBinError(2,1.32501);
   hdirt_stack_3->SetBinError(3,0.7894621);
   hdirt_stack_3->SetBinError(4,0.2153013);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(7,0.2933304);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(13,0.4239131);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,10.32708);
   houtFV_stack_4->SetBinContent(2,14.78308);
   houtFV_stack_4->SetBinContent(3,21.32654);
   houtFV_stack_4->SetBinContent(4,12.08374);
   houtFV_stack_4->SetBinContent(5,8.707607);
   houtFV_stack_4->SetBinContent(6,5.427399);
   houtFV_stack_4->SetBinContent(7,3.817658);
   houtFV_stack_4->SetBinContent(8,1.168293);
   houtFV_stack_4->SetBinContent(9,1.855576);
   houtFV_stack_4->SetBinContent(10,1.715495);
   houtFV_stack_4->SetBinContent(11,0.9286332);
   houtFV_stack_4->SetBinContent(12,2.09217);
   houtFV_stack_4->SetBinContent(13,10.83835);
   houtFV_stack_4->SetBinError(1,1.590492);
   houtFV_stack_4->SetBinError(2,1.935179);
   houtFV_stack_4->SetBinError(3,2.286231);
   houtFV_stack_4->SetBinError(4,1.763182);
   houtFV_stack_4->SetBinError(5,1.469816);
   houtFV_stack_4->SetBinError(6,1.171196);
   houtFV_stack_4->SetBinError(7,0.9201191);
   houtFV_stack_4->SetBinError(8,0.520746);
   houtFV_stack_4->SetBinError(9,0.6794384);
   houtFV_stack_4->SetBinError(10,0.6212384);
   houtFV_stack_4->SetBinError(11,0.48078);
   houtFV_stack_4->SetBinError(12,0.7277918);
   houtFV_stack_4->SetBinError(13,1.695057);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.5981899);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9889579);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8223901);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5158178);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2246499);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3067967);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3297271);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1454198);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.203939);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.718533);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.220798);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.733384);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.711454);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4162497);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.8280473);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5178479);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5882811);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3035023);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,101.3407);
   hNCpi0inFVres_stack_7->SetBinContent(2,374.8485);
   hNCpi0inFVres_stack_7->SetBinContent(3,312.8086);
   hNCpi0inFVres_stack_7->SetBinContent(4,198.1205);
   hNCpi0inFVres_stack_7->SetBinContent(5,126.0958);
   hNCpi0inFVres_stack_7->SetBinContent(6,60.90229);
   hNCpi0inFVres_stack_7->SetBinContent(7,28.44681);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.98452);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.62803);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.699183);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.286509);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.977346);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.18245);
   hNCpi0inFVres_stack_7->SetBinError(1,3.305807);
   hNCpi0inFVres_stack_7->SetBinError(2,6.348871);
   hNCpi0inFVres_stack_7->SetBinError(3,5.846771);
   hNCpi0inFVres_stack_7->SetBinError(4,4.59904);
   hNCpi0inFVres_stack_7->SetBinError(5,3.759975);
   hNCpi0inFVres_stack_7->SetBinError(6,2.541655);
   hNCpi0inFVres_stack_7->SetBinError(7,1.703591);
   hNCpi0inFVres_stack_7->SetBinError(8,1.32861);
   hNCpi0inFVres_stack_7->SetBinError(9,1.050312);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9291938);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9932715);
   hNCpi0inFVres_stack_7->SetBinError(12,0.722135);
   hNCpi0inFVres_stack_7->SetBinError(13,2.520691);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,24.07679);
   hNCpi0inFVdis_stack_8->SetBinContent(2,66.92637);
   hNCpi0inFVdis_stack_8->SetBinContent(3,48.09944);
   hNCpi0inFVdis_stack_8->SetBinContent(4,33.21358);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.64826);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.34996);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.511349);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.08645);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.667038);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.23068);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.255172);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.42698);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.3048);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.555965);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.638012);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.208852);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.875397);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.581561);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.256544);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7813726);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6832232);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6264108);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4835148);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3376966);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5396856);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.359857);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.390768);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.739354);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2089417);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3047819);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,39.60807);
   hCCpi0inFV_stack_10->SetBinContent(2,110.1333);
   hCCpi0inFV_stack_10->SetBinContent(3,79.91934);
   hCCpi0inFV_stack_10->SetBinContent(4,52.28391);
   hCCpi0inFV_stack_10->SetBinContent(5,28.74748);
   hCCpi0inFV_stack_10->SetBinContent(6,22.53983);
   hCCpi0inFV_stack_10->SetBinContent(7,12.10005);
   hCCpi0inFV_stack_10->SetBinContent(8,5.873331);
   hCCpi0inFV_stack_10->SetBinContent(9,4.496323);
   hCCpi0inFV_stack_10->SetBinContent(10,3.324483);
   hCCpi0inFV_stack_10->SetBinContent(11,3.168278);
   hCCpi0inFV_stack_10->SetBinContent(12,3.062572);
   hCCpi0inFV_stack_10->SetBinContent(13,18.52749);
   hCCpi0inFV_stack_10->SetBinError(1,3.146966);
   hCCpi0inFV_stack_10->SetBinError(2,5.259969);
   hCCpi0inFV_stack_10->SetBinError(3,4.509041);
   hCCpi0inFV_stack_10->SetBinError(4,3.627308);
   hCCpi0inFV_stack_10->SetBinError(5,2.595502);
   hCCpi0inFV_stack_10->SetBinError(6,2.410204);
   hCCpi0inFV_stack_10->SetBinError(7,1.839745);
   hCCpi0inFV_stack_10->SetBinError(8,1.161153);
   hCCpi0inFV_stack_10->SetBinError(9,1.037978);
   hCCpi0inFV_stack_10->SetBinError(10,0.9211559);
   hCCpi0inFV_stack_10->SetBinError(11,0.9096992);
   hCCpi0inFV_stack_10->SetBinError(12,0.8399848);
   hCCpi0inFV_stack_10->SetBinError(13,2.235628);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,31.9748);
   hNCinFV_stack_11->SetBinContent(2,65.03006);
   hNCinFV_stack_11->SetBinContent(3,43.9124);
   hNCinFV_stack_11->SetBinContent(4,24.5996);
   hNCinFV_stack_11->SetBinContent(5,18.90777);
   hNCinFV_stack_11->SetBinContent(6,13.81961);
   hNCinFV_stack_11->SetBinContent(7,8.886139);
   hNCinFV_stack_11->SetBinContent(8,5.218705);
   hNCinFV_stack_11->SetBinContent(9,1.320373);
   hNCinFV_stack_11->SetBinContent(10,3.124387);
   hNCinFV_stack_11->SetBinContent(11,2.782519);
   hNCinFV_stack_11->SetBinContent(12,2.389088);
   hNCinFV_stack_11->SetBinContent(13,18.70659);
   hNCinFV_stack_11->SetBinError(1,2.782293);
   hNCinFV_stack_11->SetBinError(2,4.06548);
   hNCinFV_stack_11->SetBinError(3,3.31815);
   hNCinFV_stack_11->SetBinError(4,2.460135);
   hNCinFV_stack_11->SetBinError(5,2.176401);
   hNCinFV_stack_11->SetBinError(6,1.882172);
   hNCinFV_stack_11->SetBinError(7,1.493804);
   hNCinFV_stack_11->SetBinError(8,1.210167);
   hNCinFV_stack_11->SetBinError(9,0.5548703);
   hNCinFV_stack_11->SetBinError(10,0.89917);
   hNCinFV_stack_11->SetBinError(11,0.8319397);
   hNCinFV_stack_11->SetBinError(12,0.784047);
   hNCinFV_stack_11->SetBinError(13,2.212389);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,23.25305);
   hnumuCCinFV_stack_12->SetBinContent(2,53.32677);
   hnumuCCinFV_stack_12->SetBinContent(3,44.21409);
   hnumuCCinFV_stack_12->SetBinContent(4,34.38142);
   hnumuCCinFV_stack_12->SetBinContent(5,29.70541);
   hnumuCCinFV_stack_12->SetBinContent(6,14.5183);
   hnumuCCinFV_stack_12->SetBinContent(7,10.47983);
   hnumuCCinFV_stack_12->SetBinContent(8,10.51218);
   hnumuCCinFV_stack_12->SetBinContent(9,5.583011);
   hnumuCCinFV_stack_12->SetBinContent(10,3.517015);
   hnumuCCinFV_stack_12->SetBinContent(11,4.074613);
   hnumuCCinFV_stack_12->SetBinContent(12,3.130134);
   hnumuCCinFV_stack_12->SetBinContent(13,33.69078);
   hnumuCCinFV_stack_12->SetBinError(1,2.591033);
   hnumuCCinFV_stack_12->SetBinError(2,4.285512);
   hnumuCCinFV_stack_12->SetBinError(3,3.491379);
   hnumuCCinFV_stack_12->SetBinError(4,3.319502);
   hnumuCCinFV_stack_12->SetBinError(5,3.299885);
   hnumuCCinFV_stack_12->SetBinError(6,3.094055);
   hnumuCCinFV_stack_12->SetBinError(7,2.104496);
   hnumuCCinFV_stack_12->SetBinError(8,1.94056);
   hnumuCCinFV_stack_12->SetBinError(9,1.301723);
   hnumuCCinFV_stack_12->SetBinError(10,0.89164);
   hnumuCCinFV_stack_12->SetBinError(11,1.044824);
   hnumuCCinFV_stack_12->SetBinError(12,1.03235);
   hnumuCCinFV_stack_12->SetBinError(13,3.560278);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.9342211);
   hnueCCinFV_stack_13->SetBinContent(2,1.270501);
   hnueCCinFV_stack_13->SetBinContent(3,2.191614);
   hnueCCinFV_stack_13->SetBinContent(4,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(5,0.8371204);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,0.4487298);
   hnueCCinFV_stack_13->SetBinContent(8,0.4313416);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(13,5.085778);
   hnueCCinFV_stack_13->SetBinError(1,0.5439573);
   hnueCCinFV_stack_13->SetBinError(2,0.5895188);
   hnueCCinFV_stack_13->SetBinError(3,0.9060195);
   hnueCCinFV_stack_13->SetBinError(4,0.4800908);
   hnueCCinFV_stack_13->SetBinError(5,0.4210259);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.3200014);
   hnueCCinFV_stack_13->SetBinError(8,0.3061804);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.5410961);
   hnueCCinFV_stack_13->SetBinError(13,1.180165);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__20->SetBinContent(1,273.5627);
   hmcerror__20->SetBinContent(2,757.6996);
   hmcerror__20->SetBinContent(3,605.4476);
   hmcerror__20->SetBinContent(4,388.5658);
   hmcerror__20->SetBinContent(5,254.4325);
   hmcerror__20->SetBinContent(6,149.5334);
   hmcerror__20->SetBinContent(7,80.39589);
   hmcerror__20->SetBinContent(8,50.51437);
   hmcerror__20->SetBinContent(9,31.24796);
   hmcerror__20->SetBinContent(10,26.19136);
   hmcerror__20->SetBinContent(11,23.75752);
   hmcerror__20->SetBinContent(12,20.81377);
   hmcerror__20->SetBinContent(13,180.4858);
   hmcerror__20->SetBinError(1,82.67644);
   hmcerror__20->SetBinError(2,272.3427);
   hmcerror__20->SetBinError(3,236.1648);
   hmcerror__20->SetBinError(4,154.0105);
   hmcerror__20->SetBinError(5,102.5322);
   hmcerror__20->SetBinError(6,52.32033);
   hmcerror__20->SetBinError(7,26.77153);
   hmcerror__20->SetBinError(8,19.0614);
   hmcerror__20->SetBinError(9,13.15943);
   hmcerror__20->SetBinError(10,13.60023);
   hmcerror__20->SetBinError(11,14.65284);
   hmcerror__20->SetBinError(12,12.05672);
   hmcerror__20->SetBinError(13,56.62864);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3025[12] = {
   203,
   566,
   453,
   263,
   142,
   90,
   64,
   51,
   26,
   28,
   16,
   11};
   Double_t _felx3025[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3025[12] = {
   14.24781,
   23.79075,
   21.2838,
   16.21727,
   11.91638,
   9.6093,
   8.1273,
   7.2725,
   5.2453,
   5.4358,
   4.1628,
   3.4975};
   Double_t _fehx3025[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3025[12] = {
   14.24781,
   23.79075,
   21.2838,
   16.21727,
   11.91638,
   9.4079,
   7.9246,
   7.0686,
   5.0358,
   5.2271,
   3.9454,
   3.27};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1320);
   Graph_Graph3025->SetMinimum(6.75225);
   Graph_Graph3025->SetMaximum(648.0196);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1913.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 175.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 10.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 84.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  15.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1253.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  230.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 365.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 222.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 236.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
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
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3026[12] = {
   0.3022211,
   0.3594336,
   0.3900665,
   0.3963563,
   0.402984,
   0.3498905,
   0.3329963,
   0.377346,
   0.4211292,
   0.5192639,
   0.6167662,
   0.5792665};
   Double_t _fehx3026[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3026[12] = {
   0.3022211,
   0.3594336,
   0.3900665,
   0.3963563,
   0.402984,
   0.3498905,
   0.3329963,
   0.377346,
   0.4211292,
   0.5192639,
   0.6167662,
   0.5792665};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1320);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
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
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3027[12] = {
   0.2840032,
   0.3455749,
   0.3769874,
   0.3834,
   0.3743883,
   0.3181065,
   0.272138,
   0.2498063,
   0.297045,
   0.2634097,
   0.2526324,
   0.2396734};
   Double_t _fehx3027[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3027[12] = {
   0.2840032,
   0.3455749,
   0.3769874,
   0.3834,
   0.3743883,
   0.3181065,
   0.272138,
   0.2498063,
   0.297045,
   0.2634097,
   0.2526324,
   0.2396734};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1320);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3028[12] = {
   0.7420602,
   0.7469978,
   0.7482067,
   0.676848,
   0.5581048,
   0.6018722,
   0.7960606,
   1.009614,
   0.8320542,
   1.069055,
   0.6734708,
   0.5284963};
   Double_t _felx3028[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3028[12] = {
   0.05208242,
   0.03139866,
   0.03515382,
   0.04173624,
   0.04683511,
   0.06426189,
   0.101091,
   0.1439689,
   0.1678605,
   0.2075417,
   0.1752203,
   0.1680378};
   Double_t _fehx3028[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3028[12] = {
   0.05208242,
   0.03139866,
   0.03515382,
   0.04173624,
   0.04683511,
   0.06291503,
   0.09856972,
   0.1399324,
   0.1611561,
   0.1995734,
   0.1660695,
   0.1571075};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1320);
   Graph_Graph3028->SetMinimum(0.2696415);
   Graph_Graph3028->SetMaximum(1.359445);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

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
