#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Feb 17 20:55:42 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   pad1->Range(-170,-2.990491,163.3333,330.6854);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__7->SetBinContent(0,0.7319179);
   hmc__7->SetBinContent(1,0.5884556);
   hmc__7->SetBinContent(2,30.65427);
   hmc__7->SetBinContent(3,76.88853);
   hmc__7->SetBinContent(4,101.5666);
   hmc__7->SetBinContent(5,85.25201);
   hmc__7->SetBinContent(6,60.49996);
   hmc__7->SetBinContent(7,52.5204);
   hmc__7->SetBinContent(8,59.83648);
   hmc__7->SetBinContent(9,49.92338);
   hmc__7->SetBinContent(10,50.19247);
   hmc__7->SetBinContent(11,41.97792);
   hmc__7->SetBinContent(12,52.47911);
   hmc__7->SetBinContent(13,44.03267);
   hmc__7->SetBinContent(14,42.64691);
   hmc__7->SetBinContent(15,51.47609);
   hmc__7->SetBinContent(16,53.70494);
   hmc__7->SetBinContent(17,55.45094);
   hmc__7->SetBinContent(18,66.23493);
   hmc__7->SetBinContent(19,69.97807);
   hmc__7->SetBinContent(20,72.54);
   hmc__7->SetBinContent(21,84.70322);
   hmc__7->SetBinContent(22,122.8421);
   hmc__7->SetBinContent(23,149.5246);
   hmc__7->SetBinContent(24,135.3076);
   hmc__7->SetBinContent(25,71.30914);
   hmc__7->SetBinContent(26,1.448055);
   hmc__7->SetBinContent(27,0.7447861);
   hmc__7->SetBinError(0,0.438694);
   hmc__7->SetBinError(1,1.264096);
   hmc__7->SetBinError(2,15.97092);
   hmc__7->SetBinError(3,25.49265);
   hmc__7->SetBinError(4,30.67752);
   hmc__7->SetBinError(5,26.43378);
   hmc__7->SetBinError(6,21.3517);
   hmc__7->SetBinError(7,22.62604);
   hmc__7->SetBinError(8,21.67479);
   hmc__7->SetBinError(9,20.98183);
   hmc__7->SetBinError(10,19.10699);
   hmc__7->SetBinError(11,17.33687);
   hmc__7->SetBinError(12,24.31445);
   hmc__7->SetBinError(13,18.13706);
   hmc__7->SetBinError(14,15.42234);
   hmc__7->SetBinError(15,21.42518);
   hmc__7->SetBinError(16,23.36246);
   hmc__7->SetBinError(17,18.25339);
   hmc__7->SetBinError(18,23.16311);
   hmc__7->SetBinError(19,23.50977);
   hmc__7->SetBinError(20,18.58315);
   hmc__7->SetBinError(21,26.2753);
   hmc__7->SetBinError(22,30.49588);
   hmc__7->SetBinError(23,30.51424);
   hmc__7->SetBinError(24,31.00226);
   hmc__7->SetBinError(25,30.88885);
   hmc__7->SetBinError(26,2.93866);
   hmc__7->SetBinError(27,5.656581);
   hmc__7->SetMinimum(-2.990491);
   hmc__7->SetMaximum(314.0016);
   hmc__7->SetEntries(1653.165);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",26,-130,130);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(157.0008);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.072095);
   hbadmatch_stack_1->SetBinContent(3,0.5884556);
   hbadmatch_stack_1->SetBinContent(4,4.08285);
   hbadmatch_stack_1->SetBinContent(5,1.67443);
   hbadmatch_stack_1->SetBinContent(6,2.103854);
   hbadmatch_stack_1->SetBinContent(7,1.518779);
   hbadmatch_stack_1->SetBinContent(8,2.198286);
   hbadmatch_stack_1->SetBinContent(9,2.161244);
   hbadmatch_stack_1->SetBinContent(10,1.865601);
   hbadmatch_stack_1->SetBinContent(11,1.322064);
   hbadmatch_stack_1->SetBinContent(12,2.482866);
   hbadmatch_stack_1->SetBinContent(13,2.417922);
   hbadmatch_stack_1->SetBinContent(14,1.433987);
   hbadmatch_stack_1->SetBinContent(15,2.623262);
   hbadmatch_stack_1->SetBinContent(16,1.517089);
   hbadmatch_stack_1->SetBinContent(17,0.7800994);
   hbadmatch_stack_1->SetBinContent(18,5.271813);
   hbadmatch_stack_1->SetBinContent(19,3.331976);
   hbadmatch_stack_1->SetBinContent(20,4.046337);
   hbadmatch_stack_1->SetBinContent(21,2.708453);
   hbadmatch_stack_1->SetBinContent(22,3.045024);
   hbadmatch_stack_1->SetBinContent(23,3.716318);
   hbadmatch_stack_1->SetBinContent(24,3.157983);
   hbadmatch_stack_1->SetBinContent(25,1.337911);
   hbadmatch_stack_1->SetBinError(2,0.5551335);
   hbadmatch_stack_1->SetBinError(3,0.3397478);
   hbadmatch_stack_1->SetBinError(4,1.091788);
   hbadmatch_stack_1->SetBinError(5,0.7668961);
   hbadmatch_stack_1->SetBinError(6,0.6792233);
   hbadmatch_stack_1->SetBinError(7,0.5892709);
   hbadmatch_stack_1->SetBinError(8,1.190831);
   hbadmatch_stack_1->SetBinError(9,0.6977354);
   hbadmatch_stack_1->SetBinError(10,0.7258867);
   hbadmatch_stack_1->SetBinError(11,0.5554667);
   hbadmatch_stack_1->SetBinError(12,0.9394326);
   hbadmatch_stack_1->SetBinError(13,0.7916541);
   hbadmatch_stack_1->SetBinError(14,0.6004137);
   hbadmatch_stack_1->SetBinError(15,0.9151883);
   hbadmatch_stack_1->SetBinError(16,0.5887087);
   hbadmatch_stack_1->SetBinError(17,0.3900497);
   hbadmatch_stack_1->SetBinError(18,1.262727);
   hbadmatch_stack_1->SetBinError(19,0.997575);
   hbadmatch_stack_1->SetBinError(20,1.120446);
   hbadmatch_stack_1->SetBinError(21,0.8843645);
   hbadmatch_stack_1->SetBinError(22,0.9183036);
   hbadmatch_stack_1->SetBinError(23,0.9539495);
   hbadmatch_stack_1->SetBinError(24,0.9404383);
   hbadmatch_stack_1->SetBinError(25,0.6136518);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.110787);
   hext_stack_2->SetBinContent(5,4.923848);
   hext_stack_2->SetBinContent(6,0.7309963);
   hext_stack_2->SetBinContent(7,2.916804);
   hext_stack_2->SetBinContent(8,6.76649);
   hext_stack_2->SetBinContent(9,5.718277);
   hext_stack_2->SetBinContent(10,2.987417);
   hext_stack_2->SetBinContent(11,1.868591);
   hext_stack_2->SetBinContent(12,5.40824);
   hext_stack_2->SetBinContent(13,2.923985);
   hext_stack_2->SetBinContent(14,3.807795);
   hext_stack_2->SetBinContent(15,8.985429);
   hext_stack_2->SetBinContent(16,5.840789);
   hext_stack_2->SetBinContent(17,17.35513);
   hext_stack_2->SetBinContent(18,16.0316);
   hext_stack_2->SetBinContent(19,15.51967);
   hext_stack_2->SetBinContent(20,20.15503);
   hext_stack_2->SetBinContent(21,20.09878);
   hext_stack_2->SetBinContent(22,36.81507);
   hext_stack_2->SetBinContent(23,48.05132);
   hext_stack_2->SetBinContent(24,37.88369);
   hext_stack_2->SetBinContent(25,18.89933);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.8669371);
   hext_stack_2->SetBinError(5,1.605778);
   hext_stack_2->SetBinError(6,0.5201503);
   hext_stack_2->SetBinError(7,1.132884);
   hext_stack_2->SetBinError(8,1.937379);
   hext_stack_2->SetBinError(9,1.782259);
   hext_stack_2->SetBinError(10,1.187264);
   hext_stack_2->SetBinError(11,0.840497);
   hext_stack_2->SetBinError(12,1.63365);
   hext_stack_2->SetBinError(13,1.040301);
   hext_stack_2->SetBinError(14,1.24058);
   hext_stack_2->SetBinError(15,2.024012);
   hext_stack_2->SetBinError(16,1.538068);
   hext_stack_2->SetBinError(17,2.939985);
   hext_stack_2->SetBinError(18,2.948061);
   hext_stack_2->SetBinError(19,2.695811);
   hext_stack_2->SetBinError(20,2.955448);
   hext_stack_2->SetBinError(21,2.86463);
   hext_stack_2->SetBinError(22,4.012683);
   hext_stack_2->SetBinError(23,4.831185);
   hext_stack_2->SetBinError(24,4.108866);
   hext_stack_2->SetBinError(25,3.040512);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(3,1.334496);
   hdirt_stack_3->SetBinContent(4,1.052121);
   hdirt_stack_3->SetBinContent(5,0.6273471);
   hdirt_stack_3->SetBinContent(6,0.3593186);
   hdirt_stack_3->SetBinContent(7,1.285084);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.327738);
   hdirt_stack_3->SetBinContent(11,0.4004149);
   hdirt_stack_3->SetBinContent(12,1.052121);
   hdirt_stack_3->SetBinContent(13,0.1564614);
   hdirt_stack_3->SetBinContent(14,0.4737118);
   hdirt_stack_3->SetBinContent(16,1.510349);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.4950385);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.9140499);
   hdirt_stack_3->SetBinContent(21,2.252429);
   hdirt_stack_3->SetBinContent(22,3.024554);
   hdirt_stack_3->SetBinContent(23,3.249819);
   hdirt_stack_3->SetBinContent(24,0.7759784);
   hdirt_stack_3->SetBinContent(25,2.408666);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(3,0.6307253);
   hdirt_stack_3->SetBinError(4,0.4983258);
   hdirt_stack_3->SetBinError(5,0.3928349);
   hdirt_stack_3->SetBinError(6,0.2588137);
   hdirt_stack_3->SetBinError(7,0.9635251);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2290571);
   hdirt_stack_3->SetBinError(11,0.2964588);
   hdirt_stack_3->SetBinError(12,0.4983258);
   hdirt_stack_3->SetBinError(13,0.1564614);
   hdirt_stack_3->SetBinError(14,0.3359264);
   hdirt_stack_3->SetBinError(16,0.6480633);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.2933304);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4788161);
   hdirt_stack_3->SetBinError(21,0.7912657);
   hdirt_stack_3->SetBinError(22,1.015435);
   hdirt_stack_3->SetBinError(23,0.953601);
   hdirt_stack_3->SetBinError(24,0.458477);
   hdirt_stack_3->SetBinError(25,0.8537272);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,0.3917402);
   houtFV_stack_4->SetBinContent(2,21.85658);
   houtFV_stack_4->SetBinContent(3,29.75702);
   houtFV_stack_4->SetBinContent(4,18.30514);
   houtFV_stack_4->SetBinContent(5,14.49822);
   houtFV_stack_4->SetBinContent(6,11.26153);
   houtFV_stack_4->SetBinContent(7,8.072992);
   houtFV_stack_4->SetBinContent(8,8.992855);
   houtFV_stack_4->SetBinContent(9,10.21244);
   houtFV_stack_4->SetBinContent(10,10.45376);
   houtFV_stack_4->SetBinContent(11,8.263012);
   houtFV_stack_4->SetBinContent(12,8.82052);
   houtFV_stack_4->SetBinContent(13,7.255789);
   houtFV_stack_4->SetBinContent(14,8.776063);
   houtFV_stack_4->SetBinContent(15,7.461162);
   houtFV_stack_4->SetBinContent(16,7.861474);
   houtFV_stack_4->SetBinContent(17,7.112322);
   houtFV_stack_4->SetBinContent(18,8.093725);
   houtFV_stack_4->SetBinContent(19,9.783955);
   houtFV_stack_4->SetBinContent(20,6.939434);
   houtFV_stack_4->SetBinContent(21,14.17225);
   houtFV_stack_4->SetBinContent(22,14.0244);
   houtFV_stack_4->SetBinContent(23,16.86074);
   houtFV_stack_4->SetBinContent(24,28.28617);
   houtFV_stack_4->SetBinContent(25,36.37144);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,0.2770047);
   houtFV_stack_4->SetBinError(2,2.275851);
   houtFV_stack_4->SetBinError(3,2.785915);
   houtFV_stack_4->SetBinError(4,2.132279);
   houtFV_stack_4->SetBinError(5,1.944174);
   houtFV_stack_4->SetBinError(6,1.699743);
   houtFV_stack_4->SetBinError(7,1.38815);
   houtFV_stack_4->SetBinError(8,1.470741);
   houtFV_stack_4->SetBinError(9,1.691047);
   houtFV_stack_4->SetBinError(10,1.64147);
   houtFV_stack_4->SetBinError(11,1.860422);
   houtFV_stack_4->SetBinError(12,1.479128);
   houtFV_stack_4->SetBinError(13,1.325422);
   houtFV_stack_4->SetBinError(14,1.494176);
   houtFV_stack_4->SetBinError(15,1.368762);
   houtFV_stack_4->SetBinError(16,1.415934);
   houtFV_stack_4->SetBinError(17,1.343342);
   houtFV_stack_4->SetBinError(18,1.391379);
   houtFV_stack_4->SetBinError(19,1.59692);
   houtFV_stack_4->SetBinError(20,1.256113);
   houtFV_stack_4->SetBinError(21,2.093482);
   houtFV_stack_4->SetBinError(22,1.968624);
   houtFV_stack_4->SetBinError(23,2.096677);
   houtFV_stack_4->SetBinError(24,2.717162);
   houtFV_stack_4->SetBinError(25,3.02914);
   houtFV_stack_4->SetBinError(26,0.438694);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.53542);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.948272);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.519226);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.744426);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5000683);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3247714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3763946);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5019466);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.776894);
   hNCpi0inFVres_stack_7->SetBinContent(3,15.36548);
   hNCpi0inFVres_stack_7->SetBinContent(4,25.06558);
   hNCpi0inFVres_stack_7->SetBinContent(5,18.40543);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.35892);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.961733);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.48662);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.341061);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.433802);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.732156);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.940643);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.969375);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.953013);
   hNCpi0inFVres_stack_7->SetBinContent(15,8.171748);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.495098);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.310585);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.188933);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.510284);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.8798);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.51371);
   hNCpi0inFVres_stack_7->SetBinContent(22,19.82568);
   hNCpi0inFVres_stack_7->SetBinContent(23,26.4136);
   hNCpi0inFVres_stack_7->SetBinContent(24,23.25228);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.802298);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5599201);
   hNCpi0inFVres_stack_7->SetBinError(3,1.247503);
   hNCpi0inFVres_stack_7->SetBinError(4,1.575561);
   hNCpi0inFVres_stack_7->SetBinError(5,1.358449);
   hNCpi0inFVres_stack_7->SetBinError(6,1.179589);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8606586);
   hNCpi0inFVres_stack_7->SetBinError(8,1.062562);
   hNCpi0inFVres_stack_7->SetBinError(9,1.028879);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9288448);
   hNCpi0inFVres_stack_7->SetBinError(11,1.011552);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8065772);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8189086);
   hNCpi0inFVres_stack_7->SetBinError(14,0.727638);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9691072);
   hNCpi0inFVres_stack_7->SetBinError(16,1.038356);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9780356);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9772722);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9950001);
   hNCpi0inFVres_stack_7->SetBinError(20,1.11409);
   hNCpi0inFVres_stack_7->SetBinError(21,1.259174);
   hNCpi0inFVres_stack_7->SetBinError(22,1.443461);
   hNCpi0inFVres_stack_7->SetBinError(23,1.676512);
   hNCpi0inFVres_stack_7->SetBinError(24,1.682616);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5064487);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.69053);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.584848);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.381732);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.583506);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.110366);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.498974);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.645276);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.343112);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.64594);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.785608);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.965794);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.244298);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.134194);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.118416);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.132698);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.092844);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.342112);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.332734);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.19897);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.846158);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.173478);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.561744);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4696996);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9331651);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7564861);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6502416);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5914701);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6334135);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4137491);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5061288);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3971091);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4408476);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4323036);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4908382);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4935402);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4941312);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4876561);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5180993);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.45182);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5803429);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6917164);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8743068);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7390494);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4490123);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,2.7859);
   hCCpi0inFV_stack_10->SetBinContent(3,13.12891);
   hCCpi0inFV_stack_10->SetBinContent(4,23.66564);
   hCCpi0inFV_stack_10->SetBinContent(5,21.76931);
   hCCpi0inFV_stack_10->SetBinContent(6,15.18588);
   hCCpi0inFV_stack_10->SetBinContent(7,12.41217);
   hCCpi0inFV_stack_10->SetBinContent(8,14.79146);
   hCCpi0inFV_stack_10->SetBinContent(9,11.81416);
   hCCpi0inFV_stack_10->SetBinContent(10,11.17448);
   hCCpi0inFV_stack_10->SetBinContent(11,7.615585);
   hCCpi0inFV_stack_10->SetBinContent(12,13.52346);
   hCCpi0inFV_stack_10->SetBinContent(13,11.74536);
   hCCpi0inFV_stack_10->SetBinContent(14,8.631292);
   hCCpi0inFV_stack_10->SetBinContent(15,10.66879);
   hCCpi0inFV_stack_10->SetBinContent(16,13.34107);
   hCCpi0inFV_stack_10->SetBinContent(17,10.02072);
   hCCpi0inFV_stack_10->SetBinContent(18,12.11691);
   hCCpi0inFV_stack_10->SetBinContent(19,16.61916);
   hCCpi0inFV_stack_10->SetBinContent(20,12.44937);
   hCCpi0inFV_stack_10->SetBinContent(21,12.57763);
   hCCpi0inFV_stack_10->SetBinContent(22,20.02262);
   hCCpi0inFV_stack_10->SetBinContent(23,22.2479);
   hCCpi0inFV_stack_10->SetBinContent(24,15.97712);
   hCCpi0inFV_stack_10->SetBinContent(25,4.079117);
   hCCpi0inFV_stack_10->SetBinContent(26,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,0.8327353);
   hCCpi0inFV_stack_10->SetBinError(3,1.856848);
   hCCpi0inFV_stack_10->SetBinError(4,2.474144);
   hCCpi0inFV_stack_10->SetBinError(5,2.367366);
   hCCpi0inFV_stack_10->SetBinError(6,1.951021);
   hCCpi0inFV_stack_10->SetBinError(7,1.722678);
   hCCpi0inFV_stack_10->SetBinError(8,1.949201);
   hCCpi0inFV_stack_10->SetBinError(9,1.750014);
   hCCpi0inFV_stack_10->SetBinError(10,1.72804);
   hCCpi0inFV_stack_10->SetBinError(11,1.467062);
   hCCpi0inFV_stack_10->SetBinError(12,1.846357);
   hCCpi0inFV_stack_10->SetBinError(13,1.721977);
   hCCpi0inFV_stack_10->SetBinError(14,1.467133);
   hCCpi0inFV_stack_10->SetBinError(15,1.634164);
   hCCpi0inFV_stack_10->SetBinError(16,1.852365);
   hCCpi0inFV_stack_10->SetBinError(17,1.662714);
   hCCpi0inFV_stack_10->SetBinError(18,1.698956);
   hCCpi0inFV_stack_10->SetBinError(19,2.113061);
   hCCpi0inFV_stack_10->SetBinError(20,1.809514);
   hCCpi0inFV_stack_10->SetBinError(21,1.726116);
   hCCpi0inFV_stack_10->SetBinError(22,2.205492);
   hCCpi0inFV_stack_10->SetBinError(23,2.306038);
   hCCpi0inFV_stack_10->SetBinError(24,2.055558);
   hCCpi0inFV_stack_10->SetBinError(25,0.9555094);
   hCCpi0inFV_stack_10->SetBinError(26,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.6803553);
   hNCinFV_stack_11->SetBinContent(3,4.249735);
   hNCinFV_stack_11->SetBinContent(4,5.173297);
   hNCinFV_stack_11->SetBinContent(5,6.843991);
   hNCinFV_stack_11->SetBinContent(6,3.856305);
   hNCinFV_stack_11->SetBinContent(7,3.66297);
   hNCinFV_stack_11->SetBinContent(8,2.394159);
   hNCinFV_stack_11->SetBinContent(9,2.300569);
   hNCinFV_stack_11->SetBinContent(10,2.342597);
   hNCinFV_stack_11->SetBinContent(11,2.932743);
   hNCinFV_stack_11->SetBinContent(12,3.072824);
   hNCinFV_stack_11->SetBinContent(13,1.857266);
   hNCinFV_stack_11->SetBinContent(14,2.340906);
   hNCinFV_stack_11->SetBinContent(15,2.534241);
   hNCinFV_stack_11->SetBinContent(16,1.805704);
   hNCinFV_stack_11->SetBinContent(17,1.463836);
   hNCinFV_stack_11->SetBinContent(18,1.855576);
   hNCinFV_stack_11->SetBinContent(19,3.322793);
   hNCinFV_stack_11->SetBinContent(20,1.857266);
   hNCinFV_stack_11->SetBinContent(21,3.425918);
   hNCinFV_stack_11->SetBinContent(22,4.104583);
   hNCinFV_stack_11->SetBinContent(23,4.449832);
   hNCinFV_stack_11->SetBinContent(24,5.370012);
   hNCinFV_stack_11->SetBinContent(25,1.367324);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.4810838);
   hNCinFV_stack_11->SetBinError(3,1.038438);
   hNCinFV_stack_11->SetBinError(4,1.143467);
   hNCinFV_stack_11->SetBinError(5,1.317228);
   hNCinFV_stack_11->SetBinError(6,1.000479);
   hNCinFV_stack_11->SetBinError(7,0.9816245);
   hNCinFV_stack_11->SetBinError(8,0.785313);
   hNCinFV_stack_11->SetBinError(9,0.7071359);
   hNCinFV_stack_11->SetBinError(10,0.8097566);
   hNCinFV_stack_11->SetBinError(11,0.8785195);
   hNCinFV_stack_11->SetBinError(12,0.9205954);
   hNCinFV_stack_11->SetBinError(13,0.6799255);
   hNCinFV_stack_11->SetBinError(14,0.8093475);
   hNCinFV_stack_11->SetBinError(15,0.8321153);
   hNCinFV_stack_11->SetBinError(16,0.7080169);
   hNCinFV_stack_11->SetBinError(17,0.620407);
   hNCinFV_stack_11->SetBinError(18,0.6794384);
   hNCinFV_stack_11->SetBinError(19,0.9207963);
   hNCinFV_stack_11->SetBinError(20,0.6799255);
   hNCinFV_stack_11->SetBinError(21,0.8774323);
   hNCinFV_stack_11->SetBinError(22,1.000333);
   hNCinFV_stack_11->SetBinError(23,1.057532);
   hNCinFV_stack_11->SetBinError(24,1.160264);
   hNCinFV_stack_11->SetBinError(25,0.5568531);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.4881116);
   hnumuCCinFV_stack_12->SetBinContent(3,8.024553);
   hnumuCCinFV_stack_12->SetBinContent(4,9.566467);
   hnumuCCinFV_stack_12->SetBinContent(5,9.551149);
   hnumuCCinFV_stack_12->SetBinContent(6,8.341785);
   hnumuCCinFV_stack_12->SetBinContent(7,9.686444);
   hnumuCCinFV_stack_12->SetBinContent(8,9.757461);
   hnumuCCinFV_stack_12->SetBinContent(9,6.386402);
   hnumuCCinFV_stack_12->SetBinContent(10,8.486225);
   hnumuCCinFV_stack_12->SetBinContent(11,6.771844);
   hnumuCCinFV_stack_12->SetBinContent(12,8.826456);
   hnumuCCinFV_stack_12->SetBinContent(13,8.684086);
   hnumuCCinFV_stack_12->SetBinContent(14,8.278248);
   hnumuCCinFV_stack_12->SetBinContent(15,8.257782);
   hnumuCCinFV_stack_12->SetBinContent(16,10.5695);
   hnumuCCinFV_stack_12->SetBinContent(17,6.766564);
   hnumuCCinFV_stack_12->SetBinContent(18,10.05573);
   hnumuCCinFV_stack_12->SetBinContent(19,8.230933);
   hnumuCCinFV_stack_12->SetBinContent(20,11.07679);
   hnumuCCinFV_stack_12->SetBinContent(21,10.54911);
   hnumuCCinFV_stack_12->SetBinContent(22,16.52462);
   hnumuCCinFV_stack_12->SetBinContent(23,15.20536);
   hnumuCCinFV_stack_12->SetBinContent(24,11.94367);
   hnumuCCinFV_stack_12->SetBinContent(25,2.328197);
   hnumuCCinFV_stack_12->SetBinError(2,0.3452379);
   hnumuCCinFV_stack_12->SetBinError(3,1.921528);
   hnumuCCinFV_stack_12->SetBinError(4,1.625773);
   hnumuCCinFV_stack_12->SetBinError(5,1.573144);
   hnumuCCinFV_stack_12->SetBinError(6,1.482779);
   hnumuCCinFV_stack_12->SetBinError(7,1.811895);
   hnumuCCinFV_stack_12->SetBinError(8,1.947037);
   hnumuCCinFV_stack_12->SetBinError(9,1.48647);
   hnumuCCinFV_stack_12->SetBinError(10,1.486315);
   hnumuCCinFV_stack_12->SetBinError(11,1.466127);
   hnumuCCinFV_stack_12->SetBinError(12,1.574993);
   hnumuCCinFV_stack_12->SetBinError(13,1.534562);
   hnumuCCinFV_stack_12->SetBinError(14,1.58785);
   hnumuCCinFV_stack_12->SetBinError(15,1.548443);
   hnumuCCinFV_stack_12->SetBinError(16,1.767762);
   hnumuCCinFV_stack_12->SetBinError(17,1.295781);
   hnumuCCinFV_stack_12->SetBinError(18,1.942335);
   hnumuCCinFV_stack_12->SetBinError(19,1.479344);
   hnumuCCinFV_stack_12->SetBinError(20,2.511139);
   hnumuCCinFV_stack_12->SetBinError(21,2.013822);
   hnumuCCinFV_stack_12->SetBinError(22,3.19998);
   hnumuCCinFV_stack_12->SetBinError(23,2.066259);
   hnumuCCinFV_stack_12->SetBinError(24,1.82656);
   hnumuCCinFV_stack_12->SetBinError(25,0.805473);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,2.089473);
   hnueCCinFV_stack_13->SetBinContent(5,0.7958433);
   hnueCCinFV_stack_13->SetBinContent(6,0.3973506);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,1.72261);
   hnueCCinFV_stack_13->SetBinContent(11,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(14,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.756103);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.5985879);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.7968681);
   hnueCCinFV_stack_13->SetBinContent(24,1.351988);
   hnueCCinFV_stack_13->SetBinError(4,1.29543);
   hnueCCinFV_stack_13->SetBinError(5,0.4899295);
   hnueCCinFV_stack_13->SetBinError(6,0.2836451);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,1.577117);
   hnueCCinFV_stack_13->SetBinError(11,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.2179626);
   hnueCCinFV_stack_13->SetBinError(14,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.2502081);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.4499676);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.4334685);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.569462);
   hnueCCinFV_stack_13->SetBinError(24,0.822273);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__8->SetBinContent(0,0.7319179);
   hmcerror__8->SetBinContent(1,0.5884556);
   hmcerror__8->SetBinContent(2,30.65427);
   hmcerror__8->SetBinContent(3,76.88853);
   hmcerror__8->SetBinContent(4,101.5666);
   hmcerror__8->SetBinContent(5,85.25201);
   hmcerror__8->SetBinContent(6,60.49996);
   hmcerror__8->SetBinContent(7,52.5204);
   hmcerror__8->SetBinContent(8,59.83648);
   hmcerror__8->SetBinContent(9,49.92338);
   hmcerror__8->SetBinContent(10,50.19247);
   hmcerror__8->SetBinContent(11,41.97792);
   hmcerror__8->SetBinContent(12,52.47911);
   hmcerror__8->SetBinContent(13,44.03267);
   hmcerror__8->SetBinContent(14,42.64691);
   hmcerror__8->SetBinContent(15,51.47609);
   hmcerror__8->SetBinContent(16,53.70494);
   hmcerror__8->SetBinContent(17,55.45094);
   hmcerror__8->SetBinContent(18,66.23493);
   hmcerror__8->SetBinContent(19,69.97807);
   hmcerror__8->SetBinContent(20,72.54);
   hmcerror__8->SetBinContent(21,84.70322);
   hmcerror__8->SetBinContent(22,122.8421);
   hmcerror__8->SetBinContent(23,149.5246);
   hmcerror__8->SetBinContent(24,135.3076);
   hmcerror__8->SetBinContent(25,71.30914);
   hmcerror__8->SetBinContent(26,1.448055);
   hmcerror__8->SetBinContent(27,0.7447861);
   hmcerror__8->SetBinError(0,0.438694);
   hmcerror__8->SetBinError(1,1.264096);
   hmcerror__8->SetBinError(2,15.97092);
   hmcerror__8->SetBinError(3,25.49265);
   hmcerror__8->SetBinError(4,30.67752);
   hmcerror__8->SetBinError(5,26.43378);
   hmcerror__8->SetBinError(6,21.3517);
   hmcerror__8->SetBinError(7,22.62604);
   hmcerror__8->SetBinError(8,21.67479);
   hmcerror__8->SetBinError(9,20.98183);
   hmcerror__8->SetBinError(10,19.10699);
   hmcerror__8->SetBinError(11,17.33687);
   hmcerror__8->SetBinError(12,24.31445);
   hmcerror__8->SetBinError(13,18.13706);
   hmcerror__8->SetBinError(14,15.42234);
   hmcerror__8->SetBinError(15,21.42518);
   hmcerror__8->SetBinError(16,23.36246);
   hmcerror__8->SetBinError(17,18.25339);
   hmcerror__8->SetBinError(18,23.16311);
   hmcerror__8->SetBinError(19,23.50977);
   hmcerror__8->SetBinError(20,18.58315);
   hmcerror__8->SetBinError(21,26.2753);
   hmcerror__8->SetBinError(22,30.49588);
   hmcerror__8->SetBinError(23,30.51424);
   hmcerror__8->SetBinError(24,31.00226);
   hmcerror__8->SetBinError(25,30.88885);
   hmcerror__8->SetBinError(26,2.93866);
   hmcerror__8->SetBinError(27,5.656581);
   hmcerror__8->SetEntries(1653.165);

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
   
   Double_t _fx3009[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3009[26] = {
   1,
   27,
   77,
   84,
   82,
   59,
   59,
   52,
   49,
   46,
   49,
   36,
   38,
   35,
   33,
   44,
   38,
   39,
   68,
   55,
   88,
   107,
   118,
   136,
   48,
   1};
   Double_t _felx3009[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3009[26] = {
   1,
   5.3414,
   8.8995,
   9.2886,
   9.1791,
   7.8097,
   7.8097,
   7.3419,
   7.1318,
   6.9153,
   7.1318,
   6.1381,
   6.3013,
   6.0548,
   5.8847,
   6.7671,
   6.3013,
   6.3813,
   8.3726,
   7.546,
   9.5036,
   10.34408,
   10.86278,
   11.6619,
   7.0604,
   1};
   Double_t _fehx3009[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3009[26] = {
   1.35971,
   5.1322,
   8.6976,
   9.0869,
   8.9774,
   7.6066,
   7.6066,
   7.1381,
   6.9277,
   6.7108,
   6.9277,
   5.9318,
   6.0955,
   5.8483,
   5.6776,
   6.5623,
   6.0955,
   6.1757,
   8.1701,
   7.3425,
   9.3021,
   10.34408,
   10.86278,
   11.6619,
   6.8561,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-156,156);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(162.4281);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.2/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1469.0","lp");
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

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.2","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.4","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 324.6","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

   ci = 1464;
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

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

   ci = 1467;
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

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 318.8","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3010[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3010[26] = {
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
   1,
   1};
   Double_t _felx3010[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3010[26] = {
   2.148159,
   0.5210014,
   0.3315533,
   0.3020435,
   0.3100664,
   0.3529208,
   0.4308047,
   0.3622337,
   0.4202807,
   0.3806745,
   0.4129998,
   0.4633167,
   0.4119,
   0.3616285,
   0.4162161,
   0.4350152,
   0.3291808,
   0.3497113,
   0.3359591,
   0.256178,
   0.3102043,
   0.2482527,
   0.2040751,
   0.2291244,
   0.4331681,
   2.029384};
   Double_t _fehx3010[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3010[26] = {
   2.148159,
   0.5210014,
   0.3315533,
   0.3020435,
   0.3100664,
   0.3529208,
   0.4308047,
   0.3622337,
   0.4202807,
   0.3806745,
   0.4129998,
   0.4633167,
   0.4119,
   0.3616285,
   0.4162161,
   0.4350152,
   0.3291808,
   0.3497113,
   0.3359591,
   0.256178,
   0.3102043,
   0.2482527,
   0.2040751,
   0.2291244,
   0.4331681,
   2.029384};
   grae = new TGraphAsymmErrors(26,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-156,156);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3011[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3011[26] = {
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
   1,
   1};
   Double_t _felx3011[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3011[26] = {
   1.002137,
   0.2331967,
   0.2203534,
   0.2310307,
   0.2179323,
   0.231307,
   0.2147879,
   0.224658,
   0.2182833,
   0.2143019,
   0.225451,
   0.2130594,
   0.2145411,
   0.1930313,
   0.193512,
   0.1964483,
   0.1805522,
   0.1753858,
   0.1836696,
   0.1616213,
   0.1742117,
   0.1750604,
   0.148331,
   0.1653576,
   0.1611077,
   0.578024};
   Double_t _fehx3011[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3011[26] = {
   1.002137,
   0.2331967,
   0.2203534,
   0.2310307,
   0.2179323,
   0.231307,
   0.2147879,
   0.224658,
   0.2182833,
   0.2143019,
   0.225451,
   0.2130594,
   0.2145411,
   0.1930313,
   0.193512,
   0.1964483,
   0.1805522,
   0.1753858,
   0.1836696,
   0.1616213,
   0.1742117,
   0.1750604,
   0.148331,
   0.1653576,
   0.1611077,
   0.578024};
   grae = new TGraphAsymmErrors(26,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-156,156);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3012[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3012[26] = {
   1.699364,
   0.8807909,
   1.00145,
   0.8270437,
   0.9618542,
   0.9752072,
   1.123373,
   0.869035,
   0.9815041,
   0.9164721,
   1.16728,
   0.6859872,
   0.8629956,
   0.8206925,
   0.6410743,
   0.8192915,
   0.6852905,
   0.5888132,
   0.971733,
   0.7582024,
   1.038921,
   0.8710368,
   0.7891681,
   1.005118,
   0.6731255,
   0.6905813};
   Double_t _felx3012[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3012[26] = {
   1.699364,
   0.1742465,
   0.1157455,
   0.09145331,
   0.1076702,
   0.129086,
   0.1486984,
   0.1226994,
   0.1428549,
   0.1377756,
   0.1698941,
   0.1169627,
   0.1431051,
   0.1419751,
   0.1143191,
   0.1260052,
   0.1136374,
   0.09634342,
   0.119646,
   0.1040254,
   0.1121988,
   0.0842063,
   0.07264881,
   0.08618812,
   0.09901115,
   0.6905813};
   Double_t _fehx3012[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3012[26] = {
   2.310642,
   0.167422,
   0.1131196,
   0.08946742,
   0.1053043,
   0.125729,
   0.1448313,
   0.1192934,
   0.1387667,
   0.1337013,
   0.165032,
   0.1130316,
   0.1384313,
   0.137133,
   0.1102959,
   0.1221917,
   0.109926,
   0.09323932,
   0.1167523,
   0.10122,
   0.1098199,
   0.0842063,
   0.07264881,
   0.08618812,
   0.09614616,
   0.9389903};
   grae = new TGraphAsymmErrors(26,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-156,156);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(4.411006);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
