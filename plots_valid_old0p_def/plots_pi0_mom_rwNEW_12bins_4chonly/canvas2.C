#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue Feb 21 19:44:22 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__4->SetBinContent(1,273.5627);
   hmc__4->SetBinContent(2,757.6996);
   hmc__4->SetBinContent(3,605.4476);
   hmc__4->SetBinContent(4,388.5658);
   hmc__4->SetBinContent(5,254.4325);
   hmc__4->SetBinContent(6,149.5334);
   hmc__4->SetBinContent(7,80.39589);
   hmc__4->SetBinContent(8,50.51437);
   hmc__4->SetBinContent(9,31.24796);
   hmc__4->SetBinContent(10,26.19136);
   hmc__4->SetBinContent(11,23.75752);
   hmc__4->SetBinContent(12,20.81377);
   hmc__4->SetBinContent(13,180.4858);
   hmc__4->SetBinError(1,82.62245);
   hmc__4->SetBinError(2,272.3014);
   hmc__4->SetBinError(3,236.0865);
   hmc__4->SetBinError(4,154.0618);
   hmc__4->SetBinError(5,102.5274);
   hmc__4->SetBinError(6,52.28538);
   hmc__4->SetBinError(7,26.78305);
   hmc__4->SetBinError(8,19.06748);
   hmc__4->SetBinError(9,13.1135);
   hmc__4->SetBinError(10,13.51627);
   hmc__4->SetBinError(11,14.60289);
   hmc__4->SetBinError(12,12.02424);
   hmc__4->SetBinError(13,56.64965);
   hmc__4->SetMinimum(-15.15399);
   hmc__4->SetMaximum(1591.169);
   hmc__4->SetEntries(2811.899);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",12,0,1200);
   hs2_stack_2->SetMinimum(-2.228162e-09);
   hs2_stack_2->SetMaximum(795.5847);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
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
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
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

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
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

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
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

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
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

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
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

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
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

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
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

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
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

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
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

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
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

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
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

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
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

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__5->SetBinContent(1,273.5627);
   hmcerror__5->SetBinContent(2,757.6996);
   hmcerror__5->SetBinContent(3,605.4476);
   hmcerror__5->SetBinContent(4,388.5658);
   hmcerror__5->SetBinContent(5,254.4325);
   hmcerror__5->SetBinContent(6,149.5334);
   hmcerror__5->SetBinContent(7,80.39589);
   hmcerror__5->SetBinContent(8,50.51437);
   hmcerror__5->SetBinContent(9,31.24796);
   hmcerror__5->SetBinContent(10,26.19136);
   hmcerror__5->SetBinContent(11,23.75752);
   hmcerror__5->SetBinContent(12,20.81377);
   hmcerror__5->SetBinContent(13,180.4858);
   hmcerror__5->SetBinError(1,82.62245);
   hmcerror__5->SetBinError(2,272.3014);
   hmcerror__5->SetBinError(3,236.0865);
   hmcerror__5->SetBinError(4,154.0618);
   hmcerror__5->SetBinError(5,102.5274);
   hmcerror__5->SetBinError(6,52.28538);
   hmcerror__5->SetBinError(7,26.78305);
   hmcerror__5->SetBinError(8,19.06748);
   hmcerror__5->SetBinError(9,13.1135);
   hmcerror__5->SetBinError(10,13.51627);
   hmcerror__5->SetBinError(11,14.60289);
   hmcerror__5->SetBinError(12,12.02424);
   hmcerror__5->SetBinError(13,56.64965);
   hmcerror__5->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[12] = {
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
   Double_t _fy3005[12] = {
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
   Double_t _felx3005[12] = {
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
   Double_t _fely3005[12] = {
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
   Double_t _fehx3005[12] = {
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
   Double_t _fehy3005[12] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(6.75225);
   Graph_Graph3005->SetMaximum(648.0196);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
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

   ci = 1447;
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

   ci = 1448;
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

   ci = 1449;
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

   ci = 1450;
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

   ci = 1451;
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

   ci = 1452;
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

   ci = 1453;
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

   ci = 1454;
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

   ci = 1455;
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

   ci = 1456;
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

   ci = 1457;
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

   ci = 1458;
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

   ci = 1459;
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
   canvas2->cd();
  
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
   
   Double_t _fx3006[12] = {
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
   Double_t _fy3006[12] = {
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
   Double_t _felx3006[12] = {
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
   Double_t _fely3006[12] = {
   0.3020238,
   0.359379,
   0.3899372,
   0.3964883,
   0.4029651,
   0.3496568,
   0.3331396,
   0.3774663,
   0.4196592,
   0.5160584,
   0.6146639,
   0.5777061};
   Double_t _fehx3006[12] = {
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
   Double_t _fehy3006[12] = {
   0.3020238,
   0.359379,
   0.3899372,
   0.3964883,
   0.4029651,
   0.3496568,
   0.3331396,
   0.3774663,
   0.4196592,
   0.5160584,
   0.6146639,
   0.5777061};
   grae = new TGraphAsymmErrors(12,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1320);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[12] = {
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
   Double_t _fy3007[12] = {
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
   Double_t _felx3007[12] = {
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
   Double_t _fely3007[12] = {
   0.284003,
   0.3455749,
   0.3769875,
   0.3833999,
   0.3743885,
   0.3181068,
   0.2721379,
   0.2498063,
   0.2970453,
   0.2634097,
   0.2526307,
   0.2396762};
   Double_t _fehx3007[12] = {
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
   Double_t _fehy3007[12] = {
   0.284003,
   0.3455749,
   0.3769875,
   0.3833999,
   0.3743885,
   0.3181068,
   0.2721379,
   0.2498063,
   0.2970453,
   0.2634097,
   0.2526307,
   0.2396762};
   grae = new TGraphAsymmErrors(12,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1320);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[12] = {
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
   Double_t _fy3008[12] = {
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
   Double_t _felx3008[12] = {
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
   Double_t _fely3008[12] = {
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
   Double_t _fehx3008[12] = {
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
   Double_t _fehy3008[12] = {
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
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.2696415);
   Graph_Graph3008->SetMaximum(1.359445);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
