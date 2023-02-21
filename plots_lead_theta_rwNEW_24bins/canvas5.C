#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 12:48:27 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-5.432188,3.553846,600.6856);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__13->SetBinContent(1,55.23065);
   hmc__13->SetBinContent(2,140.7806);
   hmc__13->SetBinContent(3,203.8395);
   hmc__13->SetBinContent(4,246.0469);
   hmc__13->SetBinContent(5,261.4381);
   hmc__13->SetBinContent(6,241.9589);
   hmc__13->SetBinContent(7,271.6094);
   hmc__13->SetBinContent(8,236.0094);
   hmc__13->SetBinContent(9,220.6338);
   hmc__13->SetBinContent(10,194.8416);
   hmc__13->SetBinContent(11,200.7144);
   hmc__13->SetBinContent(12,188.8605);
   hmc__13->SetBinContent(13,150.1172);
   hmc__13->SetBinContent(14,136.243);
   hmc__13->SetBinContent(15,125.0168);
   hmc__13->SetBinContent(16,134.6099);
   hmc__13->SetBinContent(17,104.2261);
   hmc__13->SetBinContent(18,94.37243);
   hmc__13->SetBinContent(19,90.14989);
   hmc__13->SetBinContent(20,85.4883);
   hmc__13->SetBinContent(21,68.87059);
   hmc__13->SetBinContent(22,60.33173);
   hmc__13->SetBinContent(23,37.36049);
   hmc__13->SetBinContent(24,14.95559);
   hmc__13->SetBinError(1,22.37589);
   hmc__13->SetBinError(2,45.39446);
   hmc__13->SetBinError(3,66.91122);
   hmc__13->SetBinError(4,85.48488);
   hmc__13->SetBinError(5,86.99701);
   hmc__13->SetBinError(6,92.59422);
   hmc__13->SetBinError(7,104.3645);
   hmc__13->SetBinError(8,95.26956);
   hmc__13->SetBinError(9,79.90218);
   hmc__13->SetBinError(10,71.71847);
   hmc__13->SetBinError(11,69.3195);
   hmc__13->SetBinError(12,66.2783);
   hmc__13->SetBinError(13,56.2437);
   hmc__13->SetBinError(14,46.18244);
   hmc__13->SetBinError(15,42.37931);
   hmc__13->SetBinError(16,44.93209);
   hmc__13->SetBinError(17,37.0922);
   hmc__13->SetBinError(18,34.20399);
   hmc__13->SetBinError(19,32.43908);
   hmc__13->SetBinError(20,30.0747);
   hmc__13->SetBinError(21,27.4926);
   hmc__13->SetBinError(22,33.7496);
   hmc__13->SetBinError(23,15.62399);
   hmc__13->SetBinError(24,9.773105);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-5.432188);
   hmc__13->SetMaximum(570.3797);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,3.15);
   hs5_stack_5->SetMinimum(-2.083393e-08);
   hs5_stack_5->SetMaximum(285.1898);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.3934307);
   hbadmatch_stack_1->SetBinContent(2,1.310051);
   hbadmatch_stack_1->SetBinContent(3,3.637451);
   hbadmatch_stack_1->SetBinContent(4,4.086666);
   hbadmatch_stack_1->SetBinContent(5,3.167734);
   hbadmatch_stack_1->SetBinContent(6,5.142456);
   hbadmatch_stack_1->SetBinContent(7,5.949908);
   hbadmatch_stack_1->SetBinContent(8,4.779894);
   hbadmatch_stack_1->SetBinContent(9,3.398763);
   hbadmatch_stack_1->SetBinContent(10,5.450248);
   hbadmatch_stack_1->SetBinContent(11,8.090569);
   hbadmatch_stack_1->SetBinContent(12,7.879074);
   hbadmatch_stack_1->SetBinContent(13,2.224538);
   hbadmatch_stack_1->SetBinContent(14,5.119181);
   hbadmatch_stack_1->SetBinContent(15,3.988906);
   hbadmatch_stack_1->SetBinContent(16,2.415651);
   hbadmatch_stack_1->SetBinContent(17,3.258422);
   hbadmatch_stack_1->SetBinContent(18,1.268811);
   hbadmatch_stack_1->SetBinContent(19,1.907786);
   hbadmatch_stack_1->SetBinContent(20,2.880401);
   hbadmatch_stack_1->SetBinContent(21,2.225205);
   hbadmatch_stack_1->SetBinContent(22,1.266751);
   hbadmatch_stack_1->SetBinContent(23,1.322064);
   hbadmatch_stack_1->SetBinContent(24,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.2781975);
   hbadmatch_stack_1->SetBinError(2,0.614214);
   hbadmatch_stack_1->SetBinError(3,0.9358336);
   hbadmatch_stack_1->SetBinError(4,1.002094);
   hbadmatch_stack_1->SetBinError(5,0.984179);
   hbadmatch_stack_1->SetBinError(6,1.161651);
   hbadmatch_stack_1->SetBinError(7,1.331454);
   hbadmatch_stack_1->SetBinError(8,1.114301);
   hbadmatch_stack_1->SetBinError(9,1.028838);
   hbadmatch_stack_1->SetBinError(10,1.337314);
   hbadmatch_stack_1->SetBinError(11,2.332402);
   hbadmatch_stack_1->SetBinError(12,1.746111);
   hbadmatch_stack_1->SetBinError(13,0.768817);
   hbadmatch_stack_1->SetBinError(14,1.208751);
   hbadmatch_stack_1->SetBinError(15,1.041013);
   hbadmatch_stack_1->SetBinError(16,0.7852335);
   hbadmatch_stack_1->SetBinError(17,0.9470785);
   hbadmatch_stack_1->SetBinError(18,0.5889569);
   hbadmatch_stack_1->SetBinError(19,0.6952549);
   hbadmatch_stack_1->SetBinError(20,0.820397);
   hbadmatch_stack_1->SetBinError(21,0.7865419);
   hbadmatch_stack_1->SetBinError(22,0.6385811);
   hbadmatch_stack_1->SetBinError(23,0.5554667);
   hbadmatch_stack_1->SetBinError(24,0.2946723);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.27519);
   hext_stack_2->SetBinContent(2,4.460999);
   hext_stack_2->SetBinContent(3,5.326038);
   hext_stack_2->SetBinContent(4,15.0281);
   hext_stack_2->SetBinContent(5,28.22509);
   hext_stack_2->SetBinContent(6,7.448415);
   hext_stack_2->SetBinContent(7,27.22595);
   hext_stack_2->SetBinContent(8,12.56098);
   hext_stack_2->SetBinContent(9,20.09317);
   hext_stack_2->SetBinContent(10,15.47338);
   hext_stack_2->SetBinContent(11,19.29157);
   hext_stack_2->SetBinContent(12,17.94327);
   hext_stack_2->SetBinContent(13,14.83057);
   hext_stack_2->SetBinContent(14,11.42779);
   hext_stack_2->SetBinContent(15,9.733557);
   hext_stack_2->SetBinContent(16,22.514);
   hext_stack_2->SetBinContent(17,12.23098);
   hext_stack_2->SetBinContent(18,7.434054);
   hext_stack_2->SetBinContent(19,4.710375);
   hext_stack_2->SetBinContent(20,7.030227);
   hext_stack_2->SetBinContent(21,5.083842);
   hext_stack_2->SetBinContent(22,4.028449);
   hext_stack_2->SetBinContent(23,1.379791);
   hext_stack_2->SetBinContent(24,1.137595);
   hext_stack_2->SetBinError(1,0.9336798);
   hext_stack_2->SetBinError(2,1.372818);
   hext_stack_2->SetBinError(3,1.615154);
   hext_stack_2->SetBinError(4,2.716304);
   hext_stack_2->SetBinError(5,3.853055);
   hext_stack_2->SetBinError(6,1.814999);
   hext_stack_2->SetBinError(7,3.87283);
   hext_stack_2->SetBinError(8,2.247887);
   hext_stack_2->SetBinError(9,3.195178);
   hext_stack_2->SetBinError(10,2.490241);
   hext_stack_2->SetBinError(11,3.132482);
   hext_stack_2->SetBinError(12,2.861868);
   hext_stack_2->SetBinError(13,2.815637);
   hext_stack_2->SetBinError(14,2.179963);
   hext_stack_2->SetBinError(15,1.90485);
   hext_stack_2->SetBinError(16,3.3865);
   hext_stack_2->SetBinError(17,2.636441);
   hext_stack_2->SetBinError(18,1.922661);
   hext_stack_2->SetBinError(19,1.314751);
   hext_stack_2->SetBinError(20,1.78745);
   hext_stack_2->SetBinError(21,1.601118);
   hext_stack_2->SetBinError(22,1.479117);
   hext_stack_2->SetBinError(23,0.6935586);
   hext_stack_2->SetBinError(24,0.6602113);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.375357);
   hdirt_stack_3->SetBinContent(2,0.4762587);
   hdirt_stack_3->SetBinContent(3,1.068617);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,1.503647);
   hdirt_stack_3->SetBinContent(6,1.504074);
   hdirt_stack_3->SetBinContent(7,0.89118);
   hdirt_stack_3->SetBinContent(8,0.5135057);
   hdirt_stack_3->SetBinContent(9,1.044879);
   hdirt_stack_3->SetBinContent(10,0.5033671);
   hdirt_stack_3->SetBinContent(11,1.114166);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.425347);
   hdirt_stack_3->SetBinContent(15,0.9525174);
   hdirt_stack_3->SetBinContent(16,0.9389439);
   hdirt_stack_3->SetBinContent(17,0.5570828);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.5429839);
   hdirt_stack_3->SetBinContent(20,0.3867341);
   hdirt_stack_3->SetBinContent(21,0.470507);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinError(1,0.2690641);
   hdirt_stack_3->SetBinError(2,0.3652866);
   hdirt_stack_3->SetBinError(3,0.5393795);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.6468912);
   hdirt_stack_3->SetBinError(6,0.578223);
   hdirt_stack_3->SetBinError(7,0.5528056);
   hdirt_stack_3->SetBinError(8,0.3809293);
   hdirt_stack_3->SetBinError(9,0.4806018);
   hdirt_stack_3->SetBinError(10,0.3763708);
   hdirt_stack_3->SetBinError(11,0.569712);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.9754574);
   hdirt_stack_3->SetBinError(15,0.5165933);
   hdirt_stack_3->SetBinError(16,0.5171189);
   hdirt_stack_3->SetBinError(17,0.4028472);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4278058);
   hdirt_stack_3->SetBinError(20,0.2742997);
   hdirt_stack_3->SetBinError(21,0.333502);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.246011);
   houtFV_stack_4->SetBinContent(2,7.338856);
   houtFV_stack_4->SetBinContent(3,14.34085);
   houtFV_stack_4->SetBinContent(4,15.96107);
   houtFV_stack_4->SetBinContent(5,20.25275);
   houtFV_stack_4->SetBinContent(6,13.89932);
   houtFV_stack_4->SetBinContent(7,15.47235);
   houtFV_stack_4->SetBinContent(8,13.14506);
   houtFV_stack_4->SetBinContent(9,9.176978);
   houtFV_stack_4->SetBinContent(10,10.74934);
   houtFV_stack_4->SetBinContent(11,7.765862);
   houtFV_stack_4->SetBinContent(12,8.633985);
   houtFV_stack_4->SetBinContent(13,7.215422);
   houtFV_stack_4->SetBinContent(14,7.399768);
   houtFV_stack_4->SetBinContent(15,8.39759);
   houtFV_stack_4->SetBinContent(16,6.37911);
   houtFV_stack_4->SetBinContent(17,6.407923);
   houtFV_stack_4->SetBinContent(18,5.374333);
   houtFV_stack_4->SetBinContent(19,7.386559);
   houtFV_stack_4->SetBinContent(20,6.255536);
   houtFV_stack_4->SetBinContent(21,5.38753);
   houtFV_stack_4->SetBinContent(22,8.31092);
   houtFV_stack_4->SetBinContent(23,6.116705);
   houtFV_stack_4->SetBinContent(24,1.75406);
   houtFV_stack_4->SetBinError(1,1.049845);
   houtFV_stack_4->SetBinError(2,1.316755);
   houtFV_stack_4->SetBinError(3,1.959154);
   houtFV_stack_4->SetBinError(4,2.058761);
   houtFV_stack_4->SetBinError(5,2.235908);
   houtFV_stack_4->SetBinError(6,1.804514);
   houtFV_stack_4->SetBinError(7,1.936356);
   houtFV_stack_4->SetBinError(8,1.788064);
   houtFV_stack_4->SetBinError(9,1.453201);
   houtFV_stack_4->SetBinError(10,1.700126);
   houtFV_stack_4->SetBinError(11,1.401282);
   houtFV_stack_4->SetBinError(12,1.446396);
   houtFV_stack_4->SetBinError(13,1.421683);
   houtFV_stack_4->SetBinError(14,1.377836);
   houtFV_stack_4->SetBinError(15,1.437338);
   houtFV_stack_4->SetBinError(16,1.240378);
   houtFV_stack_4->SetBinError(17,1.25061);
   houtFV_stack_4->SetBinError(18,1.187273);
   houtFV_stack_4->SetBinError(19,1.337403);
   houtFV_stack_4->SetBinError(20,1.27266);
   houtFV_stack_4->SetBinError(21,1.138395);
   houtFV_stack_4->SetBinError(22,1.483413);
   houtFV_stack_4->SetBinError(23,1.267872);
   houtFV_stack_4->SetBinError(24,0.6347245);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.645444);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7655898);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.030308);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5432221);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4516052);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2348149);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2632096);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2611072);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.297522);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.505608);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.840744);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.13353);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6697679);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4463997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.116672);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5430539);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6971721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3757913);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3667934);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4575982);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5070253);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2268055);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4027059);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1881969);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3138005);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.89902);
   hNCpi0inFVres_stack_7->SetBinContent(2,49.58714);
   hNCpi0inFVres_stack_7->SetBinContent(3,75.58787);
   hNCpi0inFVres_stack_7->SetBinContent(4,103.3744);
   hNCpi0inFVres_stack_7->SetBinContent(5,106.369);
   hNCpi0inFVres_stack_7->SetBinContent(6,109.8334);
   hNCpi0inFVres_stack_7->SetBinContent(7,114.7671);
   hNCpi0inFVres_stack_7->SetBinContent(8,109.7956);
   hNCpi0inFVres_stack_7->SetBinContent(9,92.71455);
   hNCpi0inFVres_stack_7->SetBinContent(10,85.52944);
   hNCpi0inFVres_stack_7->SetBinContent(11,81.62411);
   hNCpi0inFVres_stack_7->SetBinContent(12,73.78253);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.97133);
   hNCpi0inFVres_stack_7->SetBinContent(14,56.43925);
   hNCpi0inFVres_stack_7->SetBinContent(15,55.08743);
   hNCpi0inFVres_stack_7->SetBinContent(16,51.49097);
   hNCpi0inFVres_stack_7->SetBinContent(17,45.02067);
   hNCpi0inFVres_stack_7->SetBinContent(18,40.29373);
   hNCpi0inFVres_stack_7->SetBinContent(19,36.77768);
   hNCpi0inFVres_stack_7->SetBinContent(20,33.5225);
   hNCpi0inFVres_stack_7->SetBinContent(21,25.47813);
   hNCpi0inFVres_stack_7->SetBinContent(22,18.54644);
   hNCpi0inFVres_stack_7->SetBinContent(23,11.3771);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.76386);
   hNCpi0inFVres_stack_7->SetBinError(1,1.502302);
   hNCpi0inFVres_stack_7->SetBinError(2,2.321316);
   hNCpi0inFVres_stack_7->SetBinError(3,2.814781);
   hNCpi0inFVres_stack_7->SetBinError(4,3.377457);
   hNCpi0inFVres_stack_7->SetBinError(5,3.404507);
   hNCpi0inFVres_stack_7->SetBinError(6,3.419422);
   hNCpi0inFVres_stack_7->SetBinError(7,3.578048);
   hNCpi0inFVres_stack_7->SetBinError(8,3.439057);
   hNCpi0inFVres_stack_7->SetBinError(9,3.127722);
   hNCpi0inFVres_stack_7->SetBinError(10,2.985391);
   hNCpi0inFVres_stack_7->SetBinError(11,2.964809);
   hNCpi0inFVres_stack_7->SetBinError(12,2.859515);
   hNCpi0inFVres_stack_7->SetBinError(13,2.620794);
   hNCpi0inFVres_stack_7->SetBinError(14,2.410264);
   hNCpi0inFVres_stack_7->SetBinError(15,2.411825);
   hNCpi0inFVres_stack_7->SetBinError(16,2.286685);
   hNCpi0inFVres_stack_7->SetBinError(17,2.244815);
   hNCpi0inFVres_stack_7->SetBinError(18,2.042443);
   hNCpi0inFVres_stack_7->SetBinError(19,2.040728);
   hNCpi0inFVres_stack_7->SetBinError(20,1.942744);
   hNCpi0inFVres_stack_7->SetBinError(21,1.684522);
   hNCpi0inFVres_stack_7->SetBinError(22,1.414064);
   hNCpi0inFVres_stack_7->SetBinError(23,1.128467);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6694123);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.153394);
   hNCpi0inFVdis_stack_8->SetBinContent(2,14.87856);
   hNCpi0inFVdis_stack_8->SetBinContent(3,20.59243);
   hNCpi0inFVdis_stack_8->SetBinContent(4,27.10778);
   hNCpi0inFVdis_stack_8->SetBinContent(5,24.2902);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.06899);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.79307);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.56253);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.87981);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.5469);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.62714);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.4164);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.673027);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.517165);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.080494);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.681742);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.690207);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.202617);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.67859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.824723);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.887844);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.071088);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.998598);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.515986);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9156925);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.260127);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.441865);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.702239);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.611043);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.489401);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.552439);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.282071);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.310025);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.096394);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.288381);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.311708);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9719137);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8941868);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9981248);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9085441);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7937685);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7284842);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.852633);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.681322);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8972654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6145444);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5603252);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2321763);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.4467362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2792353);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.9935);
   hCCpi0inFV_stack_10->SetBinContent(2,25.95408);
   hCCpi0inFV_stack_10->SetBinContent(3,37.40913);
   hCCpi0inFV_stack_10->SetBinContent(4,32.40303);
   hCCpi0inFV_stack_10->SetBinContent(5,27.72088);
   hCCpi0inFV_stack_10->SetBinContent(6,42.50607);
   hCCpi0inFV_stack_10->SetBinContent(7,37.80483);
   hCCpi0inFV_stack_10->SetBinContent(8,34.03336);
   hCCpi0inFV_stack_10->SetBinContent(9,32.31844);
   hCCpi0inFV_stack_10->SetBinContent(10,26.87989);
   hCCpi0inFV_stack_10->SetBinContent(11,28.32026);
   hCCpi0inFV_stack_10->SetBinContent(12,24.94466);
   hCCpi0inFV_stack_10->SetBinContent(13,19.5023);
   hCCpi0inFV_stack_10->SetBinContent(14,15.51479);
   hCCpi0inFV_stack_10->SetBinContent(15,17.40038);
   hCCpi0inFV_stack_10->SetBinContent(16,17.28526);
   hCCpi0inFV_stack_10->SetBinContent(17,13.94941);
   hCCpi0inFV_stack_10->SetBinContent(18,15.77481);
   hCCpi0inFV_stack_10->SetBinContent(19,13.60926);
   hCCpi0inFV_stack_10->SetBinContent(20,15.85971);
   hCCpi0inFV_stack_10->SetBinContent(21,8.410952);
   hCCpi0inFV_stack_10->SetBinContent(22,9.853939);
   hCCpi0inFV_stack_10->SetBinContent(23,5.945994);
   hCCpi0inFV_stack_10->SetBinContent(24,2.497396);
   hCCpi0inFV_stack_10->SetBinError(1,1.659402);
   hCCpi0inFV_stack_10->SetBinError(2,2.565258);
   hCCpi0inFV_stack_10->SetBinError(3,3.127814);
   hCCpi0inFV_stack_10->SetBinError(4,2.836963);
   hCCpi0inFV_stack_10->SetBinError(5,2.577959);
   hCCpi0inFV_stack_10->SetBinError(6,3.349233);
   hCCpi0inFV_stack_10->SetBinError(7,3.097196);
   hCCpi0inFV_stack_10->SetBinError(8,2.984286);
   hCCpi0inFV_stack_10->SetBinError(9,2.936009);
   hCCpi0inFV_stack_10->SetBinError(10,2.555487);
   hCCpi0inFV_stack_10->SetBinError(11,2.665226);
   hCCpi0inFV_stack_10->SetBinError(12,2.46018);
   hCCpi0inFV_stack_10->SetBinError(13,2.199581);
   hCCpi0inFV_stack_10->SetBinError(14,1.924995);
   hCCpi0inFV_stack_10->SetBinError(15,2.098234);
   hCCpi0inFV_stack_10->SetBinError(16,2.066115);
   hCCpi0inFV_stack_10->SetBinError(17,1.811208);
   hCCpi0inFV_stack_10->SetBinError(18,1.945978);
   hCCpi0inFV_stack_10->SetBinError(19,1.876392);
   hCCpi0inFV_stack_10->SetBinError(20,1.974809);
   hCCpi0inFV_stack_10->SetBinError(21,1.428992);
   hCCpi0inFV_stack_10->SetBinError(22,1.574536);
   hCCpi0inFV_stack_10->SetBinError(23,1.26898);
   hCCpi0inFV_stack_10->SetBinError(24,0.7749536);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,4.499704);
   hNCinFV_stack_11->SetBinContent(2,16.65876);
   hNCinFV_stack_11->SetBinContent(3,23.23987);
   hNCinFV_stack_11->SetBinContent(4,25.40144);
   hNCinFV_stack_11->SetBinContent(5,25.55674);
   hNCinFV_stack_11->SetBinContent(6,19.77361);
   hNCinFV_stack_11->SetBinContent(7,20.85863);
   hNCinFV_stack_11->SetBinContent(8,15.2611);
   hNCinFV_stack_11->SetBinContent(9,15.29467);
   hNCinFV_stack_11->SetBinContent(10,9.424723);
   hNCinFV_stack_11->SetBinContent(11,12.22246);
   hNCinFV_stack_11->SetBinContent(12,7.856071);
   hNCinFV_stack_11->SetBinContent(13,10.3472);
   hNCinFV_stack_11->SetBinContent(14,6.113764);
   hNCinFV_stack_11->SetBinContent(15,9.676382);
   hNCinFV_stack_11->SetBinContent(16,9.324978);
   hNCinFV_stack_11->SetBinContent(17,6.65343);
   hNCinFV_stack_11->SetBinContent(18,7.770934);
   hNCinFV_stack_11->SetBinContent(19,7.769243);
   hNCinFV_stack_11->SetBinContent(20,4.159526);
   hNCinFV_stack_11->SetBinContent(21,6.512118);
   hNCinFV_stack_11->SetBinContent(22,6.687005);
   hNCinFV_stack_11->SetBinContent(23,4.248045);
   hNCinFV_stack_11->SetBinContent(24,2.539312);
   hNCinFV_stack_11->SetBinError(1,1.038616);
   hNCinFV_stack_11->SetBinError(2,2.048827);
   hNCinFV_stack_11->SetBinError(3,2.475023);
   hNCinFV_stack_11->SetBinError(4,2.520341);
   hNCinFV_stack_11->SetBinError(5,2.536489);
   hNCinFV_stack_11->SetBinError(6,2.280538);
   hNCinFV_stack_11->SetBinError(7,2.305579);
   hNCinFV_stack_11->SetBinError(8,1.892387);
   hNCinFV_stack_11->SetBinError(9,1.932222);
   hNCinFV_stack_11->SetBinError(10,1.54484);
   hNCinFV_stack_11->SetBinError(11,1.756307);
   hNCinFV_stack_11->SetBinError(12,1.441854);
   hNCinFV_stack_11->SetBinError(13,1.677396);
   hNCinFV_stack_11->SetBinError(14,1.242297);
   hNCinFV_stack_11->SetBinError(15,1.545174);
   hNCinFV_stack_11->SetBinError(16,1.570297);
   hNCinFV_stack_11->SetBinError(17,1.224915);
   hNCinFV_stack_11->SetBinError(18,1.401991);
   hNCinFV_stack_11->SetBinError(19,1.401755);
   hNCinFV_stack_11->SetBinError(20,0.9813267);
   hNCinFV_stack_11->SetBinError(21,1.211295);
   hNCinFV_stack_11->SetBinError(22,1.285601);
   hNCinFV_stack_11->SetBinError(23,1.038119);
   hNCinFV_stack_11->SetBinError(24,0.8333082);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.625572);
   hnumuCCinFV_stack_12->SetBinContent(2,11.9702);
   hnumuCCinFV_stack_12->SetBinContent(3,19.04654);
   hnumuCCinFV_stack_12->SetBinContent(4,18.41083);
   hnumuCCinFV_stack_12->SetBinContent(5,21.74494);
   hnumuCCinFV_stack_12->SetBinContent(6,18.92947);
   hnumuCCinFV_stack_12->SetBinContent(7,24.13698);
   hnumuCCinFV_stack_12->SetBinContent(8,27.86261);
   hnumuCCinFV_stack_12->SetBinContent(9,29.69422);
   hnumuCCinFV_stack_12->SetBinContent(10,26.60649);
   hnumuCCinFV_stack_12->SetBinContent(11,26.29665);
   hnumuCCinFV_stack_12->SetBinContent(12,31.67501);
   hnumuCCinFV_stack_12->SetBinContent(13,20.90174);
   hnumuCCinFV_stack_12->SetBinContent(14,23.09154);
   hnumuCCinFV_stack_12->SetBinContent(15,9.817141);
   hnumuCCinFV_stack_12->SetBinContent(16,14.18086);
   hnumuCCinFV_stack_12->SetBinContent(17,8.972301);
   hnumuCCinFV_stack_12->SetBinContent(18,9.030689);
   hnumuCCinFV_stack_12->SetBinContent(19,10.18495);
   hnumuCCinFV_stack_12->SetBinContent(20,9.306337);
   hnumuCCinFV_stack_12->SetBinContent(21,7.743284);
   hnumuCCinFV_stack_12->SetBinContent(22,6.70007);
   hnumuCCinFV_stack_12->SetBinContent(23,3.473514);
   hnumuCCinFV_stack_12->SetBinContent(24,2.303365);
   hnumuCCinFV_stack_12->SetBinError(1,1.131903);
   hnumuCCinFV_stack_12->SetBinError(2,1.813387);
   hnumuCCinFV_stack_12->SetBinError(3,2.256406);
   hnumuCCinFV_stack_12->SetBinError(4,2.70311);
   hnumuCCinFV_stack_12->SetBinError(5,2.867599);
   hnumuCCinFV_stack_12->SetBinError(6,2.407996);
   hnumuCCinFV_stack_12->SetBinError(7,2.928517);
   hnumuCCinFV_stack_12->SetBinError(8,3.79095);
   hnumuCCinFV_stack_12->SetBinError(9,3.206246);
   hnumuCCinFV_stack_12->SetBinError(10,2.853744);
   hnumuCCinFV_stack_12->SetBinError(11,2.890743);
   hnumuCCinFV_stack_12->SetBinError(12,3.538146);
   hnumuCCinFV_stack_12->SetBinError(13,2.520085);
   hnumuCCinFV_stack_12->SetBinError(14,2.935101);
   hnumuCCinFV_stack_12->SetBinError(15,1.600575);
   hnumuCCinFV_stack_12->SetBinError(16,1.997207);
   hnumuCCinFV_stack_12->SetBinError(17,1.859588);
   hnumuCCinFV_stack_12->SetBinError(18,1.899041);
   hnumuCCinFV_stack_12->SetBinError(19,1.776879);
   hnumuCCinFV_stack_12->SetBinError(20,1.586326);
   hnumuCCinFV_stack_12->SetBinError(21,1.470716);
   hnumuCCinFV_stack_12->SetBinError(22,1.371048);
   hnumuCCinFV_stack_12->SetBinError(23,0.9310823);
   hnumuCCinFV_stack_12->SetBinError(24,0.7503397);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.113986);
   hnueCCinFV_stack_13->SetBinContent(2,5.96996);
   hnueCCinFV_stack_13->SetBinContent(3,1.318696);
   hnueCCinFV_stack_13->SetBinContent(4,1.382717);
   hnueCCinFV_stack_13->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,1.129085);
   hnueCCinFV_stack_13->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(10,1.301544);
   hnueCCinFV_stack_13->SetBinContent(11,0.8594293);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(14,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(15,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(16,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(17,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(18,0.2505759);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.4402164);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.9012873);
   hnueCCinFV_stack_13->SetBinError(2,2.181419);
   hnueCCinFV_stack_13->SetBinError(3,0.6188854);
   hnueCCinFV_stack_13->SetBinError(4,0.5781342);
   hnueCCinFV_stack_13->SetBinError(5,0.2758068);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.5777911);
   hnueCCinFV_stack_13->SetBinError(8,0.2538659);
   hnueCCinFV_stack_13->SetBinError(10,0.6041884);
   hnueCCinFV_stack_13->SetBinError(11,0.5216512);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(14,0.5946997);
   hnueCCinFV_stack_13->SetBinError(15,0.2556436);
   hnueCCinFV_stack_13->SetBinError(16,0.4213728);
   hnueCCinFV_stack_13->SetBinError(17,0.2346262);
   hnueCCinFV_stack_13->SetBinError(18,0.2502083);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.3132948);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__14->SetBinContent(1,55.23065);
   hmcerror__14->SetBinContent(2,140.7806);
   hmcerror__14->SetBinContent(3,203.8395);
   hmcerror__14->SetBinContent(4,246.0469);
   hmcerror__14->SetBinContent(5,261.4381);
   hmcerror__14->SetBinContent(6,241.9589);
   hmcerror__14->SetBinContent(7,271.6094);
   hmcerror__14->SetBinContent(8,236.0094);
   hmcerror__14->SetBinContent(9,220.6338);
   hmcerror__14->SetBinContent(10,194.8416);
   hmcerror__14->SetBinContent(11,200.7144);
   hmcerror__14->SetBinContent(12,188.8605);
   hmcerror__14->SetBinContent(13,150.1172);
   hmcerror__14->SetBinContent(14,136.243);
   hmcerror__14->SetBinContent(15,125.0168);
   hmcerror__14->SetBinContent(16,134.6099);
   hmcerror__14->SetBinContent(17,104.2261);
   hmcerror__14->SetBinContent(18,94.37243);
   hmcerror__14->SetBinContent(19,90.14989);
   hmcerror__14->SetBinContent(20,85.4883);
   hmcerror__14->SetBinContent(21,68.87059);
   hmcerror__14->SetBinContent(22,60.33173);
   hmcerror__14->SetBinContent(23,37.36049);
   hmcerror__14->SetBinContent(24,14.95559);
   hmcerror__14->SetBinError(1,22.37589);
   hmcerror__14->SetBinError(2,45.39446);
   hmcerror__14->SetBinError(3,66.91122);
   hmcerror__14->SetBinError(4,85.48488);
   hmcerror__14->SetBinError(5,86.99701);
   hmcerror__14->SetBinError(6,92.59422);
   hmcerror__14->SetBinError(7,104.3645);
   hmcerror__14->SetBinError(8,95.26956);
   hmcerror__14->SetBinError(9,79.90218);
   hmcerror__14->SetBinError(10,71.71847);
   hmcerror__14->SetBinError(11,69.3195);
   hmcerror__14->SetBinError(12,66.2783);
   hmcerror__14->SetBinError(13,56.2437);
   hmcerror__14->SetBinError(14,46.18244);
   hmcerror__14->SetBinError(15,42.37931);
   hmcerror__14->SetBinError(16,44.93209);
   hmcerror__14->SetBinError(17,37.0922);
   hmcerror__14->SetBinError(18,34.20399);
   hmcerror__14->SetBinError(19,32.43908);
   hmcerror__14->SetBinError(20,30.0747);
   hmcerror__14->SetBinError(21,27.4926);
   hmcerror__14->SetBinError(22,33.7496);
   hmcerror__14->SetBinError(23,15.62399);
   hmcerror__14->SetBinError(24,9.773105);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3017[24] = {
   35,
   100,
   147,
   185,
   188,
   174,
   191,
   165,
   174,
   139,
   166,
   124,
   120,
   97,
   99,
   83,
   86,
   76,
   70,
   67,
   53,
   44,
   30,
   8};
   Double_t _felx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3017[24] = {
   6.0548,
   10.1212,
   12.12436,
   13.60147,
   13.71131,
   13.19091,
   13.82027,
   12.84523,
   13.19091,
   11.78983,
   12.8841,
   11.13553,
   10.95445,
   9.9704,
   10.0712,
   9.234,
   9.3967,
   8.8425,
   8.4925,
   8.3119,
   7.4105,
   6.7671,
   5.6197,
   3.0307};
   Double_t _fehx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3017[24] = {
   5.8483,
   9.92,
   12.12436,
   13.60147,
   13.71131,
   13.19091,
   13.82027,
   12.84523,
   13.19091,
   11.78983,
   12.8841,
   11.13553,
   10.95445,
   9.769,
   9.87,
   9.0323,
   9.1951,
   8.6406,
   8.2902,
   8.1094,
   7.2068,
   6.5623,
   5.4117,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(4.47237);
   Graph_Graph3017->SetMaximum(224.8054);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3018[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3018[24] = {
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
   Double_t _felx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3018[24] = {
   0.4051354,
   0.3224483,
   0.3282544,
   0.3474333,
   0.3327633,
   0.3826857,
   0.384245,
   0.4036686,
   0.3621484,
   0.368086,
   0.3453638,
   0.3509378,
   0.3746652,
   0.3389712,
   0.3389889,
   0.3337947,
   0.355882,
   0.3624363,
   0.3598349,
   0.351799,
   0.3991922,
   0.5594006,
   0.4181956,
   0.6534752};
   Double_t _fehx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3018[24] = {
   0.4051354,
   0.3224483,
   0.3282544,
   0.3474333,
   0.3327633,
   0.3826857,
   0.384245,
   0.4036686,
   0.3621484,
   0.368086,
   0.3453638,
   0.3509378,
   0.3746652,
   0.3389712,
   0.3389889,
   0.3337947,
   0.355882,
   0.3624363,
   0.3598349,
   0.351799,
   0.3991922,
   0.5594006,
   0.4181956,
   0.6534752};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3019[24] = {
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
   Double_t _felx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3019[24] = {
   0.2862188,
   0.2795537,
   0.2946116,
   0.3102552,
   0.3150658,
   0.3454439,
   0.3419306,
   0.3724071,
   0.3464289,
   0.3421001,
   0.3201502,
   0.3248393,
   0.3041236,
   0.3071867,
   0.3062426,
   0.2787591,
   0.3099284,
   0.3140051,
   0.3089968,
   0.2823691,
   0.3033622,
   0.278366,
   0.2874683,
   0.2852782};
   Double_t _fehx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3019[24] = {
   0.2862188,
   0.2795537,
   0.2946116,
   0.3102552,
   0.3150658,
   0.3454439,
   0.3419306,
   0.3724071,
   0.3464289,
   0.3421001,
   0.3201502,
   0.3248393,
   0.3041236,
   0.3071867,
   0.3062426,
   0.2787591,
   0.3099284,
   0.3140051,
   0.3089968,
   0.2823691,
   0.3033622,
   0.278366,
   0.2874683,
   0.2852782};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3020[24] = {
   0.6337061,
   0.7103253,
   0.7211555,
   0.7518892,
   0.7190994,
   0.7191303,
   0.7032158,
   0.6991248,
   0.788637,
   0.7133999,
   0.8270458,
   0.6565691,
   0.7993752,
   0.7119634,
   0.7918936,
   0.6165964,
   0.8251289,
   0.80532,
   0.7764845,
   0.7837329,
   0.7695593,
   0.7293012,
   0.8029873,
   0.5349172};
   Double_t _felx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3020[24] = {
   0.1096275,
   0.07189344,
   0.05947991,
   0.05527999,
   0.05244572,
   0.05451713,
   0.05088291,
   0.05442679,
   0.05978642,
   0.06050979,
   0.0641912,
   0.05896165,
   0.07297264,
   0.07318103,
   0.08055877,
   0.0685982,
   0.09015684,
   0.09369792,
   0.09420421,
   0.0972285,
   0.1076004,
   0.1121649,
   0.1504183,
   0.2026467};
   Double_t _fehx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3020[24] = {
   0.1058887,
   0.07046427,
   0.05947991,
   0.05527999,
   0.05244572,
   0.05451713,
   0.05088291,
   0.05442679,
   0.05978642,
   0.06050979,
   0.0641912,
   0.05896165,
   0.07297264,
   0.07170278,
   0.07894939,
   0.0670998,
   0.08822259,
   0.09155852,
   0.09196017,
   0.09485976,
   0.1046426,
   0.1087703,
   0.1448509,
   0.1865256};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.2707137);
   Graph_Graph3020->SetMaximum(1.009395);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
