#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Oct 21 20:21:53 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-7.390038,1692.308,817.1827);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__19->SetBinContent(1,65.01398);
   hmc__19->SetBinContent(2,263.539);
   hmc__19->SetBinContent(3,369.5019);
   hmc__19->SetBinContent(4,337.9945);
   hmc__19->SetBinContent(5,278.3673);
   hmc__19->SetBinContent(6,204.2508);
   hmc__19->SetBinContent(7,169.9704);
   hmc__19->SetBinContent(8,124.7815);
   hmc__19->SetBinContent(9,99.03953);
   hmc__19->SetBinContent(10,74.2123);
   hmc__19->SetBinContent(11,49.60424);
   hmc__19->SetBinContent(12,38.51915);
   hmc__19->SetBinContent(13,29.76951);
   hmc__19->SetBinContent(14,24.41437);
   hmc__19->SetBinContent(15,19.4749);
   hmc__19->SetBinContent(16,18.02028);
   hmc__19->SetBinContent(17,13.30448);
   hmc__19->SetBinContent(18,14.33712);
   hmc__19->SetBinContent(19,11.51918);
   hmc__19->SetBinContent(20,13.14056);
   hmc__19->SetBinContent(21,8.997049);
   hmc__19->SetBinContent(22,6.599021);
   hmc__19->SetBinContent(23,8.127066);
   hmc__19->SetBinContent(24,5.78818);
   hmc__19->SetBinContent(25,6.337657);
   hmc__19->SetBinContent(26,134.4315);
   hmc__19->SetBinError(1,24.49044);
   hmc__19->SetBinError(2,108.2366);
   hmc__19->SetBinError(3,167.4929);
   hmc__19->SetBinError(4,148.0596);
   hmc__19->SetBinError(5,116.0652);
   hmc__19->SetBinError(6,80.34456);
   hmc__19->SetBinError(7,69.84812);
   hmc__19->SetBinError(8,47.20231);
   hmc__19->SetBinError(9,33.5545);
   hmc__19->SetBinError(10,25.98345);
   hmc__19->SetBinError(11,16.56445);
   hmc__19->SetBinError(12,17.27514);
   hmc__19->SetBinError(13,11.77391);
   hmc__19->SetBinError(14,11.34459);
   hmc__19->SetBinError(15,9.639223);
   hmc__19->SetBinError(16,12.24749);
   hmc__19->SetBinError(17,8.871405);
   hmc__19->SetBinError(18,9.561378);
   hmc__19->SetBinError(19,7.726394);
   hmc__19->SetBinError(20,12.75857);
   hmc__19->SetBinError(21,6.292447);
   hmc__19->SetBinError(22,4.972275);
   hmc__19->SetBinError(23,6.129811);
   hmc__19->SetBinError(24,4.317492);
   hmc__19->SetBinError(25,7.300982);
   hmc__19->SetBinError(26,47.46237);
   hmc__19->SetMinimum(-7.390038);
   hmc__19->SetMaximum(775.954);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,1500);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(387.9771);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,2.578442);
   hbadmatch_stack_1->SetBinContent(2,9.025265);
   hbadmatch_stack_1->SetBinContent(3,10.2117);
   hbadmatch_stack_1->SetBinContent(4,5.941488);
   hbadmatch_stack_1->SetBinContent(5,5.540216);
   hbadmatch_stack_1->SetBinContent(6,3.732603);
   hbadmatch_stack_1->SetBinContent(7,3.3846);
   hbadmatch_stack_1->SetBinContent(8,0.7988079);
   hbadmatch_stack_1->SetBinContent(9,2.617105);
   hbadmatch_stack_1->SetBinContent(10,0.5715845);
   hbadmatch_stack_1->SetBinContent(11,0.9163802);
   hbadmatch_stack_1->SetBinContent(12,1.19294);
   hbadmatch_stack_1->SetBinContent(13,0.7633783);
   hbadmatch_stack_1->SetBinContent(14,0.5428331);
   hbadmatch_stack_1->SetBinContent(15,1.057235);
   hbadmatch_stack_1->SetBinContent(16,0.6138735);
   hbadmatch_stack_1->SetBinContent(17,0.832957);
   hbadmatch_stack_1->SetBinContent(18,0.1221502);
   hbadmatch_stack_1->SetBinContent(19,0.0102018);
   hbadmatch_stack_1->SetBinContent(20,1.237531);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,2.458583);
   hbadmatch_stack_1->SetBinError(1,0.8381305);
   hbadmatch_stack_1->SetBinError(2,1.615057);
   hbadmatch_stack_1->SetBinError(3,2.625287);
   hbadmatch_stack_1->SetBinError(4,1.327091);
   hbadmatch_stack_1->SetBinError(5,1.318422);
   hbadmatch_stack_1->SetBinError(6,1.007435);
   hbadmatch_stack_1->SetBinError(7,0.8208466);
   hbadmatch_stack_1->SetBinError(8,0.3495189);
   hbadmatch_stack_1->SetBinError(9,0.8957407);
   hbadmatch_stack_1->SetBinError(10,0.4114113);
   hbadmatch_stack_1->SetBinError(11,0.4829119);
   hbadmatch_stack_1->SetBinError(12,0.6037584);
   hbadmatch_stack_1->SetBinError(13,0.5429729);
   hbadmatch_stack_1->SetBinError(14,0.4310913);
   hbadmatch_stack_1->SetBinError(15,0.7076118);
   hbadmatch_stack_1->SetBinError(16,0.4612135);
   hbadmatch_stack_1->SetBinError(17,0.5239469);
   hbadmatch_stack_1->SetBinError(18,0.1221502);
   hbadmatch_stack_1->SetBinError(19,0.0102018);
   hbadmatch_stack_1->SetBinError(20,0.5864556);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.8148586);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,4.703194);
   hext_stack_2->SetBinContent(2,28.3432);
   hext_stack_2->SetBinContent(3,30.20738);
   hext_stack_2->SetBinContent(4,22.03962);
   hext_stack_2->SetBinContent(5,22.04397);
   hext_stack_2->SetBinContent(6,18.22458);
   hext_stack_2->SetBinContent(7,8.574421);
   hext_stack_2->SetBinContent(8,6.945253);
   hext_stack_2->SetBinContent(9,12.15596);
   hext_stack_2->SetBinContent(10,4.785396);
   hext_stack_2->SetBinContent(11,5.490441);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,1.37261);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,1.78639);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,2.110787);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,10.40988);
   hext_stack_2->SetBinError(1,1.389163);
   hext_stack_2->SetBinError(2,3.728285);
   hext_stack_2->SetBinError(3,3.804133);
   hext_stack_2->SetBinError(4,3.083854);
   hext_stack_2->SetBinError(5,3.312958);
   hext_stack_2->SetBinError(6,3.08265);
   hext_stack_2->SetBinError(7,1.948379);
   hext_stack_2->SetBinError(8,1.863119);
   hext_stack_2->SetBinError(9,2.586413);
   hext_stack_2->SetBinError(10,1.410625);
   hext_stack_2->SetBinError(11,1.651938);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,0.8259691);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,0.8039566);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.8669371);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,2.274269);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.6085784);
   hdirt_stack_3->SetBinContent(2,3.02686);
   hdirt_stack_3->SetBinContent(3,1.943963);
   hdirt_stack_3->SetBinContent(4,2.225304);
   hdirt_stack_3->SetBinContent(5,1.417101);
   hdirt_stack_3->SetBinContent(6,0.1677351);
   hdirt_stack_3->SetBinContent(7,0.4762587);
   hdirt_stack_3->SetBinContent(8,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.2761429);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.5388689);
   hdirt_stack_3->SetBinError(1,0.3609533);
   hdirt_stack_3->SetBinError(2,0.9229881);
   hdirt_stack_3->SetBinError(3,1.0374);
   hdirt_stack_3->SetBinError(4,0.6935499);
   hdirt_stack_3->SetBinError(5,0.5936666);
   hdirt_stack_3->SetBinError(6,0.1651996);
   hdirt_stack_3->SetBinError(7,0.3652866);
   hdirt_stack_3->SetBinError(8,0.3381872);
   hdirt_stack_3->SetBinError(11,0.1952625);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(26,0.4239131);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,4.472159);
   houtFV_stack_4->SetBinContent(2,9.146211);
   houtFV_stack_4->SetBinContent(3,6.650099);
   houtFV_stack_4->SetBinContent(4,11.05654);
   houtFV_stack_4->SetBinContent(5,11.00245);
   houtFV_stack_4->SetBinContent(6,6.113913);
   houtFV_stack_4->SetBinContent(7,8.511256);
   houtFV_stack_4->SetBinContent(8,3.68679);
   houtFV_stack_4->SetBinContent(9,2.939854);
   houtFV_stack_4->SetBinContent(10,2.401732);
   houtFV_stack_4->SetBinContent(11,2.398258);
   houtFV_stack_4->SetBinContent(12,1.102346);
   houtFV_stack_4->SetBinContent(13,0.4363754);
   houtFV_stack_4->SetBinContent(14,2.102923);
   houtFV_stack_4->SetBinContent(15,0.3229986);
   houtFV_stack_4->SetBinContent(16,0.9713207);
   houtFV_stack_4->SetBinContent(17,0.536893);
   houtFV_stack_4->SetBinContent(18,0.7336084);
   houtFV_stack_4->SetBinContent(19,0.9785053);
   houtFV_stack_4->SetBinContent(20,1.122269);
   houtFV_stack_4->SetBinContent(21,0.3917402);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.7319179);
   houtFV_stack_4->SetBinContent(24,0.7302274);
   houtFV_stack_4->SetBinContent(25,1.072095);
   houtFV_stack_4->SetBinContent(26,7.013136);
   houtFV_stack_4->SetBinError(1,1.078175);
   houtFV_stack_4->SetBinError(2,1.500963);
   houtFV_stack_4->SetBinError(3,1.214481);
   houtFV_stack_4->SetBinError(4,1.638569);
   houtFV_stack_4->SetBinError(5,1.599254);
   houtFV_stack_4->SetBinError(6,1.209771);
   houtFV_stack_4->SetBinError(7,1.476104);
   houtFV_stack_4->SetBinError(8,0.9390499);
   houtFV_stack_4->SetBinError(9,0.8044077);
   houtFV_stack_4->SetBinError(10,0.7587013);
   houtFV_stack_4->SetBinError(11,0.7111198);
   houtFV_stack_4->SetBinError(12,0.4550614);
   houtFV_stack_4->SetBinError(13,0.2805778);
   houtFV_stack_4->SetBinError(14,0.7471134);
   houtFV_stack_4->SetBinError(15,0.2332637);
   houtFV_stack_4->SetBinError(16,0.4148098);
   houtFV_stack_4->SetBinError(17,0.3929602);
   houtFV_stack_4->SetBinError(18,0.4394482);
   houtFV_stack_4->SetBinError(19,0.4376048);
   houtFV_stack_4->SetBinError(20,0.5677428);
   houtFV_stack_4->SetBinError(21,0.2770047);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.438694);
   houtFV_stack_4->SetBinError(24,0.4379386);
   houtFV_stack_4->SetBinError(25,0.5551335);
   houtFV_stack_4->SetBinError(26,1.341711);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1693682);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.242647);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.015712);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.744349);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4445688);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2989918);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3804975);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2294985);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06861491);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03629303);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1064809);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4179016);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.07969822);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1447381);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3420699);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3368334);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2117464);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1259796);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1783326);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1673405);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04153041);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02963552);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.0623148);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.138383);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5695541);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.456679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.108597);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.940253);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.180685);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.538728);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7541524);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1835707);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1049522);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.09549345);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1369873);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1521039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0508617);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.06562697);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.342375);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1681784);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2987225);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4091906);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4063242);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2824773);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4405733);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2768064);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.07813619);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0540043);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05017866);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06523346);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1295493);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05086169);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06562698);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1592117);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.5239);
   hNCpi0inFVres_stack_7->SetBinContent(2,84.28181);
   hNCpi0inFVres_stack_7->SetBinContent(3,147.1607);
   hNCpi0inFVres_stack_7->SetBinContent(4,143.5592);
   hNCpi0inFVres_stack_7->SetBinContent(5,121.3672);
   hNCpi0inFVres_stack_7->SetBinContent(6,89.74922);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.54589);
   hNCpi0inFVres_stack_7->SetBinContent(8,54.04118);
   hNCpi0inFVres_stack_7->SetBinContent(9,38.14885);
   hNCpi0inFVres_stack_7->SetBinContent(10,25.01146);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.71574);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.42836);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.206977);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.299714);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.901402);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.404236);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.036649);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.126814);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.258687);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.236479);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.596145);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.777421);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.521578);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.400627);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.877635);
   hNCpi0inFVres_stack_7->SetBinContent(26,37.96347);
   hNCpi0inFVres_stack_7->SetBinError(1,1.342956);
   hNCpi0inFVres_stack_7->SetBinError(2,2.633032);
   hNCpi0inFVres_stack_7->SetBinError(3,3.408016);
   hNCpi0inFVres_stack_7->SetBinError(4,3.435393);
   hNCpi0inFVres_stack_7->SetBinError(5,3.333597);
   hNCpi0inFVres_stack_7->SetBinError(6,2.771516);
   hNCpi0inFVres_stack_7->SetBinError(7,2.512612);
   hNCpi0inFVres_stack_7->SetBinError(8,2.3421);
   hNCpi0inFVres_stack_7->SetBinError(9,2.041552);
   hNCpi0inFVres_stack_7->SetBinError(10,1.661079);
   hNCpi0inFVres_stack_7->SetBinError(11,1.434065);
   hNCpi0inFVres_stack_7->SetBinError(12,1.336436);
   hNCpi0inFVres_stack_7->SetBinError(13,1.017203);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8532251);
   hNCpi0inFVres_stack_7->SetBinError(15,1.111287);
   hNCpi0inFVres_stack_7->SetBinError(16,1.098709);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6180023);
   hNCpi0inFVres_stack_7->SetBinError(18,0.779311);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6397207);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7731737);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3330896);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3427989);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5991732);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5221386);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4486878);
   hNCpi0inFVres_stack_7->SetBinError(26,2.131934);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.211644);
   hNCpi0inFVdis_stack_8->SetBinContent(2,20.59265);
   hNCpi0inFVdis_stack_8->SetBinContent(3,27.22555);
   hNCpi0inFVdis_stack_8->SetBinContent(4,26.10212);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.77288);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.0429);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.01673);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.43952);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.73696);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.897202);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.878737);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.347011);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.069052);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.944748);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.216475);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.21511);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.437583);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.776454);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.570322);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.554708);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.080366);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.9116367);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.598075);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3756199);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4894622);
   hNCpi0inFVdis_stack_8->SetBinContent(26,13.11408);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8436071);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.422294);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.428728);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.524539);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.365924);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.31388);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.215444);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.417737);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.122006);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9414635);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7689567);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7439085);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.58061);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8362596);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5042634);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3754274);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4530866);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2016707);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6754454);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4454419);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7840233);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2608162);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.244031);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2063464);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2898375);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.406763);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06344445);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1880285);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4060343);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03235999);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1313353);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1883956);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.04222718);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,10.45479);
   hCCpi0inFV_stack_10->SetBinContent(2,47.8335);
   hCCpi0inFV_stack_10->SetBinContent(3,69.03819);
   hCCpi0inFV_stack_10->SetBinContent(4,58.43314);
   hCCpi0inFV_stack_10->SetBinContent(5,43.90114);
   hCCpi0inFV_stack_10->SetBinContent(6,32.50076);
   hCCpi0inFV_stack_10->SetBinContent(7,26.5269);
   hCCpi0inFV_stack_10->SetBinContent(8,16.42957);
   hCCpi0inFV_stack_10->SetBinContent(9,14.63118);
   hCCpi0inFV_stack_10->SetBinContent(10,13.48281);
   hCCpi0inFV_stack_10->SetBinContent(11,6.541164);
   hCCpi0inFV_stack_10->SetBinContent(12,7.0261);
   hCCpi0inFV_stack_10->SetBinContent(13,3.47579);
   hCCpi0inFV_stack_10->SetBinContent(14,3.324483);
   hCCpi0inFV_stack_10->SetBinContent(15,2.102163);
   hCCpi0inFV_stack_10->SetBinContent(16,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(17,1.902848);
   hCCpi0inFV_stack_10->SetBinContent(18,2.195754);
   hCCpi0inFV_stack_10->SetBinContent(19,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(20,2.135629);
   hCCpi0inFV_stack_10->SetBinContent(21,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(22,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(25,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(26,15.01136);
   hCCpi0inFV_stack_10->SetBinError(1,1.593436);
   hCCpi0inFV_stack_10->SetBinError(2,3.479923);
   hCCpi0inFV_stack_10->SetBinError(3,4.152245);
   hCCpi0inFV_stack_10->SetBinError(4,3.88387);
   hCCpi0inFV_stack_10->SetBinError(5,3.305696);
   hCCpi0inFV_stack_10->SetBinError(6,2.855024);
   hCCpi0inFV_stack_10->SetBinError(7,2.585301);
   hCCpi0inFV_stack_10->SetBinError(8,1.951583);
   hCCpi0inFV_stack_10->SetBinError(9,1.905592);
   hCCpi0inFV_stack_10->SetBinError(10,1.851533);
   hCCpi0inFV_stack_10->SetBinError(11,1.343293);
   hCCpi0inFV_stack_10->SetBinError(12,1.402303);
   hCCpi0inFV_stack_10->SetBinError(13,0.8545385);
   hCCpi0inFV_stack_10->SetBinError(14,0.9211559);
   hCCpi0inFV_stack_10->SetBinError(15,0.6787356);
   hCCpi0inFV_stack_10->SetBinError(16,0.785313);
   hCCpi0inFV_stack_10->SetBinError(17,0.6942672);
   hCCpi0inFV_stack_10->SetBinError(18,0.7598403);
   hCCpi0inFV_stack_10->SetBinError(19,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(20,0.6892657);
   hCCpi0inFV_stack_10->SetBinError(21,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(22,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(23,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(24,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(25,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(26,2.028002);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,9.788473);
   hNCinFV_stack_11->SetBinContent(2,32.37921);
   hNCinFV_stack_11->SetBinContent(3,41.8723);
   hNCinFV_stack_11->SetBinContent(4,32.44395);
   hNCinFV_stack_11->SetBinContent(5,25.905);
   hNCinFV_stack_11->SetBinContent(6,14.80028);
   hNCinFV_stack_11->SetBinContent(7,15.4772);
   hNCinFV_stack_11->SetBinContent(8,12.19284);
   hNCinFV_stack_11->SetBinContent(9,8.70461);
   hNCinFV_stack_11->SetBinContent(10,9.527563);
   hNCinFV_stack_11->SetBinContent(11,6.649715);
   hNCinFV_stack_11->SetBinContent(12,3.387664);
   hNCinFV_stack_11->SetBinContent(13,4.066569);
   hNCinFV_stack_11->SetBinContent(14,1.24784);
   hNCinFV_stack_11->SetBinContent(15,1.232901);
   hNCinFV_stack_11->SetBinContent(16,1.947832);
   hNCinFV_stack_11->SetBinContent(17,1.846462);
   hNCinFV_stack_11->SetBinContent(18,1.803485);
   hNCinFV_stack_11->SetBinContent(19,1.248781);
   hNCinFV_stack_11->SetBinContent(20,1.746104);
   hNCinFV_stack_11->SetBinContent(21,1.201109);
   hNCinFV_stack_11->SetBinContent(22,0.7642006);
   hNCinFV_stack_11->SetBinContent(23,0.9516163);
   hNCinFV_stack_11->SetBinContent(24,0.536893);
   hNCinFV_stack_11->SetBinContent(25,0.5352025);
   hNCinFV_stack_11->SetBinContent(26,15.37467);
   hNCinFV_stack_11->SetBinError(1,1.825788);
   hNCinFV_stack_11->SetBinError(2,3.02836);
   hNCinFV_stack_11->SetBinError(3,3.494394);
   hNCinFV_stack_11->SetBinError(4,3.138661);
   hNCinFV_stack_11->SetBinError(5,2.862492);
   hNCinFV_stack_11->SetBinError(6,1.944164);
   hNCinFV_stack_11->SetBinError(7,2.329749);
   hNCinFV_stack_11->SetBinError(8,1.949423);
   hNCinFV_stack_11->SetBinError(9,1.529448);
   hNCinFV_stack_11->SetBinError(10,1.942143);
   hNCinFV_stack_11->SetBinError(11,1.459705);
   hNCinFV_stack_11->SetBinError(12,0.9672345);
   hNCinFV_stack_11->SetBinError(13,1.294051);
   hNCinFV_stack_11->SetBinError(14,0.5822322);
   hNCinFV_stack_11->SetBinError(15,0.6659101);
   hNCinFV_stack_11->SetBinError(16,0.8510057);
   hNCinFV_stack_11->SetBinError(17,0.6808155);
   hNCinFV_stack_11->SetBinError(18,0.6243223);
   hNCinFV_stack_11->SetBinError(19,0.907602);
   hNCinFV_stack_11->SetBinError(20,0.7474287);
   hNCinFV_stack_11->SetBinError(21,0.6128421);
   hNCinFV_stack_11->SetBinError(22,0.382426);
   hNCinFV_stack_11->SetBinError(23,0.9516163);
   hNCinFV_stack_11->SetBinError(24,0.3929602);
   hNCinFV_stack_11->SetBinError(25,0.3921167);
   hNCinFV_stack_11->SetBinError(26,2.009991);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,6.984394);
   hnumuCCinFV_stack_12->SetBinContent(2,26.16201);
   hnumuCCinFV_stack_12->SetBinContent(3,31.36096);
   hnumuCCinFV_stack_12->SetBinContent(4,31.94005);
   hnumuCCinFV_stack_12->SetBinContent(5,24.34648);
   hnumuCCinFV_stack_12->SetBinContent(6,20.73881);
   hnumuCCinFV_stack_12->SetBinContent(7,21.67379);
   hnumuCCinFV_stack_12->SetBinContent(8,15.86229);
   hnumuCCinFV_stack_12->SetBinContent(9,9.566086);
   hnumuCCinFV_stack_12->SetBinContent(10,10.76416);
   hnumuCCinFV_stack_12->SetBinContent(11,5.124819);
   hnumuCCinFV_stack_12->SetBinContent(12,6.378531);
   hnumuCCinFV_stack_12->SetBinContent(13,7.065609);
   hnumuCCinFV_stack_12->SetBinContent(14,4.448362);
   hnumuCCinFV_stack_12->SetBinContent(15,3.557702);
   hnumuCCinFV_stack_12->SetBinContent(16,2.428772);
   hnumuCCinFV_stack_12->SetBinContent(17,2.025892);
   hnumuCCinFV_stack_12->SetBinContent(18,2.408384);
   hnumuCCinFV_stack_12->SetBinContent(19,2.510712);
   hnumuCCinFV_stack_12->SetBinContent(20,1.348);
   hnumuCCinFV_stack_12->SetBinContent(21,1.925392);
   hnumuCCinFV_stack_12->SetBinContent(22,1.80884);
   hnumuCCinFV_stack_12->SetBinContent(23,1.123089);
   hnumuCCinFV_stack_12->SetBinContent(24,0.4270507);
   hnumuCCinFV_stack_12->SetBinContent(25,1.299281);
   hnumuCCinFV_stack_12->SetBinContent(26,27.10713);
   hnumuCCinFV_stack_12->SetBinError(1,1.317091);
   hnumuCCinFV_stack_12->SetBinError(2,2.828537);
   hnumuCCinFV_stack_12->SetBinError(3,3.384218);
   hnumuCCinFV_stack_12->SetBinError(4,2.995891);
   hnumuCCinFV_stack_12->SetBinError(5,2.665548);
   hnumuCCinFV_stack_12->SetBinError(6,2.471068);
   hnumuCCinFV_stack_12->SetBinError(7,2.931379);
   hnumuCCinFV_stack_12->SetBinError(8,2.322743);
   hnumuCCinFV_stack_12->SetBinError(9,1.684112);
   hnumuCCinFV_stack_12->SetBinError(10,2.924206);
   hnumuCCinFV_stack_12->SetBinError(11,1.172512);
   hnumuCCinFV_stack_12->SetBinError(12,1.83249);
   hnumuCCinFV_stack_12->SetBinError(13,1.417026);
   hnumuCCinFV_stack_12->SetBinError(14,1.42207);
   hnumuCCinFV_stack_12->SetBinError(15,1.061182);
   hnumuCCinFV_stack_12->SetBinError(16,0.7448248);
   hnumuCCinFV_stack_12->SetBinError(17,0.6800451);
   hnumuCCinFV_stack_12->SetBinError(18,0.8299116);
   hnumuCCinFV_stack_12->SetBinError(19,0.9235682);
   hnumuCCinFV_stack_12->SetBinError(20,0.6272705);
   hnumuCCinFV_stack_12->SetBinError(21,0.6985037);
   hnumuCCinFV_stack_12->SetBinError(22,0.7048781);
   hnumuCCinFV_stack_12->SetBinError(23,0.5831803);
   hnumuCCinFV_stack_12->SetBinError(24,0.3031018);
   hnumuCCinFV_stack_12->SetBinError(25,0.6702002);
   hnumuCCinFV_stack_12->SetBinError(26,3.287808);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.9342211);
   hnueCCinFV_stack_13->SetBinContent(3,1.073786);
   hnueCCinFV_stack_13->SetBinContent(4,1.242451);
   hnueCCinFV_stack_13->SetBinContent(5,1.145878);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(8,0.4453802);
   hnueCCinFV_stack_13->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.4487298);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(23,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,4.680037);
   hnueCCinFV_stack_13->SetBinError(2,0.5439573);
   hnueCCinFV_stack_13->SetBinError(3,0.5557297);
   hnueCCinFV_stack_13->SetBinError(4,0.7040974);
   hnueCCinFV_stack_13->SetBinError(5,0.6031709);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.4379386);
   hnueCCinFV_stack_13->SetBinError(8,0.3170665);
   hnueCCinFV_stack_13->SetBinError(9,0.2770047);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.3200014);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.2346262);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.4810838);
   hnueCCinFV_stack_13->SetBinError(23,0.2107157);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,1.144707);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__20->SetBinContent(1,65.01398);
   hmcerror__20->SetBinContent(2,263.539);
   hmcerror__20->SetBinContent(3,369.5019);
   hmcerror__20->SetBinContent(4,337.9945);
   hmcerror__20->SetBinContent(5,278.3673);
   hmcerror__20->SetBinContent(6,204.2508);
   hmcerror__20->SetBinContent(7,169.9704);
   hmcerror__20->SetBinContent(8,124.7815);
   hmcerror__20->SetBinContent(9,99.03953);
   hmcerror__20->SetBinContent(10,74.2123);
   hmcerror__20->SetBinContent(11,49.60424);
   hmcerror__20->SetBinContent(12,38.51915);
   hmcerror__20->SetBinContent(13,29.76951);
   hmcerror__20->SetBinContent(14,24.41437);
   hmcerror__20->SetBinContent(15,19.4749);
   hmcerror__20->SetBinContent(16,18.02028);
   hmcerror__20->SetBinContent(17,13.30448);
   hmcerror__20->SetBinContent(18,14.33712);
   hmcerror__20->SetBinContent(19,11.51918);
   hmcerror__20->SetBinContent(20,13.14056);
   hmcerror__20->SetBinContent(21,8.997049);
   hmcerror__20->SetBinContent(22,6.599021);
   hmcerror__20->SetBinContent(23,8.127066);
   hmcerror__20->SetBinContent(24,5.78818);
   hmcerror__20->SetBinContent(25,6.337657);
   hmcerror__20->SetBinContent(26,134.4315);
   hmcerror__20->SetBinError(1,24.49044);
   hmcerror__20->SetBinError(2,108.2366);
   hmcerror__20->SetBinError(3,167.4929);
   hmcerror__20->SetBinError(4,148.0596);
   hmcerror__20->SetBinError(5,116.0652);
   hmcerror__20->SetBinError(6,80.34456);
   hmcerror__20->SetBinError(7,69.84812);
   hmcerror__20->SetBinError(8,47.20231);
   hmcerror__20->SetBinError(9,33.5545);
   hmcerror__20->SetBinError(10,25.98345);
   hmcerror__20->SetBinError(11,16.56445);
   hmcerror__20->SetBinError(12,17.27514);
   hmcerror__20->SetBinError(13,11.77391);
   hmcerror__20->SetBinError(14,11.34459);
   hmcerror__20->SetBinError(15,9.639223);
   hmcerror__20->SetBinError(16,12.24749);
   hmcerror__20->SetBinError(17,8.871405);
   hmcerror__20->SetBinError(18,9.561378);
   hmcerror__20->SetBinError(19,7.726394);
   hmcerror__20->SetBinError(20,12.75857);
   hmcerror__20->SetBinError(21,6.292447);
   hmcerror__20->SetBinError(22,4.972275);
   hmcerror__20->SetBinError(23,6.129811);
   hmcerror__20->SetBinError(24,4.317492);
   hmcerror__20->SetBinError(25,7.300982);
   hmcerror__20->SetBinError(26,47.46237);
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
   Double_t _fy3025[25] = {
   47,
   250,
   358,
   333,
   234,
   178,
   122,
   76,
   74,
   45,
   48,
   24,
   38,
   17,
   14,
   13,
   18,
   10,
   8,
   6,
   6,
   6,
   2,
   6,
   4};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   6.9882,
   15.81139,
   18.92089,
   18.24829,
   15.29706,
   13.34166,
   11.04536,
   8.8425,
   8.7275,
   6.8416,
   7.0604,
   5.0476,
   6.3013,
   4.2835,
   3.9102,
   3.77763,
   4.4008,
   3.34883,
   3.0307,
   2.67925,
   2.67925,
   2.67925,
   2,
   2.67925,
   2.29683};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   6.7839,
   15.81139,
   18.92089,
   18.24829,
   15.29706,
   13.34166,
   11.04536,
   8.6406,
   8.5253,
   6.637,
   6.8561,
   4.837,
   6.0955,
   4.0673,
   3.6898,
   3.5552,
   4.1858,
   3.1179,
   2.7896,
   2.41858,
   2.41858,
   2.41858,
   1.51917,
   2.41858,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1650);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(414.613);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.31","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1937.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 52.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 178.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 79.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  876.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  188.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 368.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 232.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 243.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fely3026[25] = {
   0.3766949,
   0.4107041,
   0.4532936,
   0.4380531,
   0.41695,
   0.3933622,
   0.4109428,
   0.3782797,
   0.338799,
   0.3501232,
   0.3339322,
   0.4484819,
   0.3955024,
   0.4646685,
   0.4949564,
   0.6796502,
   0.6667983,
   0.6668969,
   0.6707419,
   0.9709299,
   0.6993901,
   0.7534868,
   0.7542465,
   0.7459153,
   1.152};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0.3766949,
   0.4107041,
   0.4532936,
   0.4380531,
   0.41695,
   0.3933622,
   0.4109428,
   0.3782797,
   0.338799,
   0.3501232,
   0.3339322,
   0.4484819,
   0.3955024,
   0.4646685,
   0.4949564,
   0.6796502,
   0.6667983,
   0.6668969,
   0.6707419,
   0.9709299,
   0.6993901,
   0.7534868,
   0.7542465,
   0.7459153,
   1.152};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1650);
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
   
   Double_t _fx3027[25] = {
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
   Double_t _fely3027[25] = {
   0.3006183,
   0.3813943,
   0.4462133,
   0.4199916,
   0.3936199,
   0.3777047,
   0.3664442,
   0.3374379,
   0.3050038,
   0.2712184,
   0.2307959,
   0.2489106,
   0.2291176,
   0.2461493,
   0.2866799,
   0.2856896,
   0.2668957,
   0.2564269,
   0.2745823,
   0.2882841,
   0.2703719,
   0.2859525,
   0.3447,
   0.3242587,
   0.3323974};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0.3006183,
   0.3813943,
   0.4462133,
   0.4199916,
   0.3936199,
   0.3777047,
   0.3664442,
   0.3374379,
   0.3050038,
   0.2712184,
   0.2307959,
   0.2489106,
   0.2291176,
   0.2461493,
   0.2866799,
   0.2856896,
   0.2668957,
   0.2564269,
   0.2745823,
   0.2882841,
   0.2703719,
   0.2859525,
   0.3447,
   0.3242587,
   0.3323974};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1650);
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
   Double_t _fy3028[25] = {
   0.7229214,
   0.9486261,
   0.9688718,
   0.985223,
   0.8406159,
   0.8714776,
   0.717772,
   0.6090646,
   0.7471764,
   0.6063685,
   0.9676593,
   0.6230667,
   1.276474,
   0.6963113,
   0.7188742,
   0.7214095,
   1.352928,
   0.6974904,
   0.694494,
   0.4566014,
   0.6668853,
   0.9092258,
   0.2460913,
   1.036595,
   0.631148};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0.1074876,
   0.05999638,
   0.05120647,
   0.05398989,
   0.05495278,
   0.06532001,
   0.06498402,
   0.07086387,
   0.08812138,
   0.09218957,
   0.1423346,
   0.1310413,
   0.2116696,
   0.17545,
   0.2007816,
   0.2096322,
   0.3307758,
   0.2335777,
   0.2631004,
   0.2038915,
   0.2977921,
   0.4060072,
   0.2460913,
   0.462883,
   0.3624099};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0.1043452,
   0.05999638,
   0.05120647,
   0.05398989,
   0.05495278,
   0.06532001,
   0.06498402,
   0.06924584,
   0.08607977,
   0.08943261,
   0.138216,
   0.1255739,
   0.2047565,
   0.1665945,
   0.1894644,
   0.1972888,
   0.3146158,
   0.2174705,
   0.2421701,
   0.1840545,
   0.2688192,
   0.3665059,
   0.1869272,
   0.4178481,
   0.3127118};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1650);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.834298);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
