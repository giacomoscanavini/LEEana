#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Jun  6 14:11:36 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-1.34,1.25641,148.1758);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__10->SetBinContent(1,5.419086);
   hmc__10->SetBinContent(2,5.588717);
   hmc__10->SetBinContent(3,4.679761);
   hmc__10->SetBinContent(4,4.088243);
   hmc__10->SetBinContent(5,3.120984);
   hmc__10->SetBinContent(6,4.344554);
   hmc__10->SetBinContent(7,4.919806);
   hmc__10->SetBinContent(8,4.384964);
   hmc__10->SetBinContent(9,3.591882);
   hmc__10->SetBinContent(10,3.915991);
   hmc__10->SetBinContent(11,5.417437);
   hmc__10->SetBinContent(12,5.287009);
   hmc__10->SetBinContent(13,6.001944);
   hmc__10->SetBinContent(14,7.612563);
   hmc__10->SetBinContent(15,6.699697);
   hmc__10->SetBinContent(16,7.943554);
   hmc__10->SetBinContent(17,9.439594);
   hmc__10->SetBinContent(18,11.20051);
   hmc__10->SetBinContent(19,13.39561);
   hmc__10->SetBinContent(20,17.65479);
   hmc__10->SetBinContent(21,22.34728);
   hmc__10->SetBinContent(22,24.65286);
   hmc__10->SetBinContent(23,33.79998);
   hmc__10->SetBinContent(24,44.18205);
   hmc__10->SetBinContent(25,65.82386);
   hmc__10->SetBinError(1,2.842126);
   hmc__10->SetBinError(2,2.347598);
   hmc__10->SetBinError(3,2.1717);
   hmc__10->SetBinError(4,2.886377);
   hmc__10->SetBinError(5,1.344899);
   hmc__10->SetBinError(6,1.838008);
   hmc__10->SetBinError(7,2.289154);
   hmc__10->SetBinError(8,2.130111);
   hmc__10->SetBinError(9,1.771117);
   hmc__10->SetBinError(10,1.812344);
   hmc__10->SetBinError(11,2.312367);
   hmc__10->SetBinError(12,2.1998);
   hmc__10->SetBinError(13,2.354269);
   hmc__10->SetBinError(14,3.108343);
   hmc__10->SetBinError(15,2.480243);
   hmc__10->SetBinError(16,3.326658);
   hmc__10->SetBinError(17,3.062597);
   hmc__10->SetBinError(18,4.332773);
   hmc__10->SetBinError(19,4.116054);
   hmc__10->SetBinError(20,5.563152);
   hmc__10->SetBinError(21,6.689588);
   hmc__10->SetBinError(22,8.532548);
   hmc__10->SetBinError(23,8.290559);
   hmc__10->SetBinError(24,10.55048);
   hmc__10->SetBinError(25,16.22179);
   hmc__10->SetBinError(26,0.1094984);
   hmc__10->SetMinimum(-1.34);
   hmc__10->SetMaximum(140.7);
   hmc__10->SetEntries(321.7148);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-1,1);
   hs4_stack_4->SetMinimum(-1.084988e-09);
   hs4_stack_4->SetMaximum(69.11505);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.05605365);
   hbadmatch_stack_1->SetBinContent(2,0.2734929);
   hbadmatch_stack_1->SetBinContent(3,0.03825059);
   hbadmatch_stack_1->SetBinContent(4,0.07470649);
   hbadmatch_stack_1->SetBinContent(5,0.06195629);
   hbadmatch_stack_1->SetBinContent(6,0.05314616);
   hbadmatch_stack_1->SetBinContent(7,0.1129571);
   hbadmatch_stack_1->SetBinContent(8,0.1006914);
   hbadmatch_stack_1->SetBinContent(9,0.1239126);
   hbadmatch_stack_1->SetBinContent(10,0.08332969);
   hbadmatch_stack_1->SetBinContent(11,0.09951074);
   hbadmatch_stack_1->SetBinContent(12,0.1420415);
   hbadmatch_stack_1->SetBinContent(13,0.07691942);
   hbadmatch_stack_1->SetBinContent(14,0.279685);
   hbadmatch_stack_1->SetBinContent(15,0.1876636);
   hbadmatch_stack_1->SetBinContent(16,0.2988259);
   hbadmatch_stack_1->SetBinContent(17,0.09286734);
   hbadmatch_stack_1->SetBinContent(18,0.2134559);
   hbadmatch_stack_1->SetBinContent(19,0.3781499);
   hbadmatch_stack_1->SetBinContent(20,0.7310563);
   hbadmatch_stack_1->SetBinContent(21,0.2756321);
   hbadmatch_stack_1->SetBinContent(22,0.6990327);
   hbadmatch_stack_1->SetBinContent(23,0.8362847);
   hbadmatch_stack_1->SetBinContent(24,1.133734);
   hbadmatch_stack_1->SetBinContent(25,1.42813);
   hbadmatch_stack_1->SetBinError(1,0.02836638);
   hbadmatch_stack_1->SetBinError(2,0.137368);
   hbadmatch_stack_1->SetBinError(3,0.02208399);
   hbadmatch_stack_1->SetBinError(4,0.06325464);
   hbadmatch_stack_1->SetBinError(5,0.06195629);
   hbadmatch_stack_1->SetBinError(6,0.02663795);
   hbadmatch_stack_1->SetBinError(7,0.0669989);
   hbadmatch_stack_1->SetBinError(8,0.077322);
   hbadmatch_stack_1->SetBinError(9,0.08761943);
   hbadmatch_stack_1->SetBinError(10,0.07172191);
   hbadmatch_stack_1->SetBinError(11,0.06564311);
   hbadmatch_stack_1->SetBinError(12,0.08840757);
   hbadmatch_stack_1->SetBinError(13,0.07691942);
   hbadmatch_stack_1->SetBinError(14,0.1130511);
   hbadmatch_stack_1->SetBinError(15,0.0921412);
   hbadmatch_stack_1->SetBinError(16,0.1265093);
   hbadmatch_stack_1->SetBinError(17,0.03525984);
   hbadmatch_stack_1->SetBinError(18,0.10908);
   hbadmatch_stack_1->SetBinError(19,0.1418959);
   hbadmatch_stack_1->SetBinError(20,0.2115397);
   hbadmatch_stack_1->SetBinError(21,0.119626);
   hbadmatch_stack_1->SetBinError(22,0.1935631);
   hbadmatch_stack_1->SetBinError(23,0.2214318);
   hbadmatch_stack_1->SetBinError(24,0.2647463);
   hbadmatch_stack_1->SetBinError(25,0.4763457);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1476;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.4839872);
   hext_stack_2->SetBinContent(2,0.4349078);
   hext_stack_2->SetBinContent(3,0.6707665);
   hext_stack_2->SetBinContent(4,0.2481285);
   hext_stack_2->SetBinContent(5,0.6953062);
   hext_stack_2->SetBinContent(6,0.5330666);
   hext_stack_2->SetBinContent(7,0.9679743);
   hext_stack_2->SetBinContent(8,0.2849381);
   hext_stack_2->SetBinContent(9,0.2849381);
   hext_stack_2->SetBinContent(10,0.7198459);
   hext_stack_2->SetBinContent(11,0.9311647);
   hext_stack_2->SetBinContent(12,0.7443856);
   hext_stack_2->SetBinContent(13,0.8180047);
   hext_stack_2->SetBinContent(14,0.8670841);
   hext_stack_2->SetBinContent(15,1.540582);
   hext_stack_2->SetBinContent(16,1.017054);
   hext_stack_2->SetBinContent(17,0.8670841);
   hext_stack_2->SetBinContent(18,1.289722);
   hext_stack_2->SetBinContent(19,1.886869);
   hext_stack_2->SetBinContent(20,1.70009);
   hext_stack_2->SetBinContent(21,2.159538);
   hext_stack_2->SetBinContent(22,1.72463);
   hext_stack_2->SetBinContent(23,2.132266);
   hext_stack_2->SetBinContent(24,2.205885);
   hext_stack_2->SetBinContent(25,3.586959);
   hext_stack_2->SetBinError(1,0.2833636);
   hext_stack_2->SetBinError(2,0.282299);
   hext_stack_2->SetBinError(3,0.3460707);
   hext_stack_2->SetBinError(4,0.2005561);
   hext_stack_2->SetBinError(5,0.3465055);
   hext_stack_2->SetBinError(6,0.2844242);
   hext_stack_2->SetBinError(7,0.4007367);
   hext_stack_2->SetBinError(8,0.2016789);
   hext_stack_2->SetBinError(9,0.2016789);
   hext_stack_2->SetBinError(10,0.3469397);
   hext_stack_2->SetBinError(11,0.4001727);
   hext_stack_2->SetBinError(12,0.3473733);
   hext_stack_2->SetBinError(13,0.3486711);
   hext_stack_2->SetBinError(14,0.3495336);
   hext_stack_2->SetBinError(15,0.5283469);
   hext_stack_2->SetBinError(16,0.4014873);
   hext_stack_2->SetBinError(17,0.3495336);
   hext_stack_2->SetBinError(18,0.449128);
   hext_stack_2->SetBinError(19,0.5661957);
   hext_stack_2->SetBinError(20,0.5301958);
   hext_stack_2->SetBinError(21,0.6009171);
   hext_stack_2->SetBinError(22,0.5304796);
   hext_stack_2->SetBinError(23,0.5688484);
   hext_stack_2->SetBinError(24,0.5696419);
   hext_stack_2->SetBinError(25,0.7756836);
   hext_stack_2->SetEntries(581);

   ci = 1477;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.2387426);
   hdirt_stack_3->SetBinContent(2,0.2011505);
   hdirt_stack_3->SetBinContent(3,0.06064831);
   hdirt_stack_3->SetBinContent(4,0.05242869);
   hdirt_stack_3->SetBinContent(5,0.1314889);
   hdirt_stack_3->SetBinContent(6,0.09719376);
   hdirt_stack_3->SetBinContent(7,0.0704378);
   hdirt_stack_3->SetBinContent(8,0.008219617);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.1326081);
   hdirt_stack_3->SetBinContent(11,0.08474559);
   hdirt_stack_3->SetBinContent(12,0.05939272);
   hdirt_stack_3->SetBinContent(13,0.02465885);
   hdirt_stack_3->SetBinContent(14,0.1139844);
   hdirt_stack_3->SetBinContent(15,0.1156845);
   hdirt_stack_3->SetBinContent(16,0.1698898);
   hdirt_stack_3->SetBinContent(17,0.111741);
   hdirt_stack_3->SetBinContent(18,0.2010749);
   hdirt_stack_3->SetBinContent(19,0.3338329);
   hdirt_stack_3->SetBinContent(20,0.3780889);
   hdirt_stack_3->SetBinContent(21,0.3874481);
   hdirt_stack_3->SetBinContent(22,0.32161);
   hdirt_stack_3->SetBinContent(23,0.394717);
   hdirt_stack_3->SetBinContent(24,0.5728507);
   hdirt_stack_3->SetBinContent(25,0.2712243);
   hdirt_stack_3->SetBinError(1,0.09954354);
   hdirt_stack_3->SetBinError(2,0.09317246);
   hdirt_stack_3->SetBinError(3,0.04571177);
   hdirt_stack_3->SetBinError(4,0.0449667);
   hdirt_stack_3->SetBinError(5,0.07204894);
   hdirt_stack_3->SetBinError(6,0.06900593);
   hdirt_stack_3->SetBinError(7,0.04674826);
   hdirt_stack_3->SetBinError(8,0.008219618);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.07576143);
   hdirt_stack_3->SetBinError(11,0.05484277);
   hdirt_stack_3->SetBinError(12,0.05056414);
   hdirt_stack_3->SetBinError(13,0.0142368);
   hdirt_stack_3->SetBinError(14,0.06424415);
   hdirt_stack_3->SetBinError(15,0.06448131);
   hdirt_stack_3->SetBinError(16,0.08068967);
   hdirt_stack_3->SetBinError(17,0.06855675);
   hdirt_stack_3->SetBinError(18,0.092692);
   hdirt_stack_3->SetBinError(19,0.1206402);
   hdirt_stack_3->SetBinError(20,0.1220155);
   hdirt_stack_3->SetBinError(21,0.123053);
   hdirt_stack_3->SetBinError(22,0.1188881);
   hdirt_stack_3->SetBinError(23,0.1266422);
   hdirt_stack_3->SetBinError(24,0.2363974);
   hdirt_stack_3->SetBinError(25,0.09822769);
   hdirt_stack_3->SetEntries(170);

   ci = 1478;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.053271);
   houtFV_stack_4->SetBinContent(2,0.7580204);
   houtFV_stack_4->SetBinContent(3,0.6376972);
   houtFV_stack_4->SetBinContent(4,0.7482034);
   houtFV_stack_4->SetBinContent(5,0.3735325);
   houtFV_stack_4->SetBinContent(6,0.8217714);
   houtFV_stack_4->SetBinContent(7,1.008888);
   houtFV_stack_4->SetBinContent(8,0.9820342);
   houtFV_stack_4->SetBinContent(9,0.7666268);
   houtFV_stack_4->SetBinContent(10,0.7452702);
   houtFV_stack_4->SetBinContent(11,0.7707705);
   houtFV_stack_4->SetBinContent(12,0.6690748);
   houtFV_stack_4->SetBinContent(13,1.21901);
   houtFV_stack_4->SetBinContent(14,1.159166);
   houtFV_stack_4->SetBinContent(15,0.7718565);
   houtFV_stack_4->SetBinContent(16,0.9393805);
   houtFV_stack_4->SetBinContent(17,1.406673);
   houtFV_stack_4->SetBinContent(18,1.792349);
   houtFV_stack_4->SetBinContent(19,1.883572);
   houtFV_stack_4->SetBinContent(20,2.356928);
   houtFV_stack_4->SetBinContent(21,3.878523);
   houtFV_stack_4->SetBinContent(22,3.099361);
   houtFV_stack_4->SetBinContent(23,4.61982);
   houtFV_stack_4->SetBinContent(24,5.126417);
   houtFV_stack_4->SetBinContent(25,5.830228);
   houtFV_stack_4->SetBinError(1,0.2387153);
   houtFV_stack_4->SetBinError(2,0.2078456);
   houtFV_stack_4->SetBinError(3,0.1716716);
   houtFV_stack_4->SetBinError(4,0.2076551);
   houtFV_stack_4->SetBinError(5,0.1414417);
   houtFV_stack_4->SetBinError(6,0.2097919);
   houtFV_stack_4->SetBinError(7,0.2357154);
   houtFV_stack_4->SetBinError(8,0.2386452);
   houtFV_stack_4->SetBinError(9,0.2026438);
   houtFV_stack_4->SetBinError(10,0.2074542);
   houtFV_stack_4->SetBinError(11,0.2082363);
   houtFV_stack_4->SetBinError(12,0.1855408);
   houtFV_stack_4->SetBinError(13,0.2595559);
   houtFV_stack_4->SetBinError(14,0.2557944);
   houtFV_stack_4->SetBinError(15,0.20382);
   houtFV_stack_4->SetBinError(16,0.2179237);
   houtFV_stack_4->SetBinError(17,0.2754256);
   houtFV_stack_4->SetBinError(18,0.3194355);
   houtFV_stack_4->SetBinError(19,0.3166731);
   houtFV_stack_4->SetBinError(20,0.3504694);
   houtFV_stack_4->SetBinError(21,0.4781336);
   houtFV_stack_4->SetBinError(22,0.3903474);
   houtFV_stack_4->SetBinError(23,0.5037726);
   houtFV_stack_4->SetBinError(24,0.5351388);
   houtFV_stack_4->SetBinError(25,0.5642508);
   houtFV_stack_4->SetEntries(1136);

   ci = 1479;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.149413);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1239126);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.149413);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1384575);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6359025);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.532962);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.26591);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.08945557);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.08761943);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.08945557);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.0693829);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.180269);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2891413);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5325354);
   hNCpi0inFVcoh_stack_5->SetEntries(225);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2605754);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1366628);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1749134);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3352818);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1245668);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.08854226);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.09125478);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.139707);
   hNCpi0inFVqe_stack_6->SetEntries(31);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.730999);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.088192);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.654498);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.867662);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.169803);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.321011);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.417629);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.594337);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.567042);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.441334);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.74016);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.179238);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.263106);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.208789);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.31949);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.915348);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.708029);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.45633);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.436772);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.537441);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.376287);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.31686);
   hNCpi0inFVres_stack_7->SetBinContent(23,13.5129);
   hNCpi0inFVres_stack_7->SetBinContent(24,17.02231);
   hNCpi0inFVres_stack_7->SetBinContent(25,20.7174);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3036264);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3436331);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3020159);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3162732);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2523752);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2620493);
   hNCpi0inFVres_stack_7->SetBinError(7,0.281154);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2904295);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2950422);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2870513);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3136926);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3408752);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3555434);
   hNCpi0inFVres_stack_7->SetBinError(14,0.42202);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3434882);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3911765);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4502867);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4844272);
   hNCpi0inFVres_stack_7->SetBinError(19,0.479939);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5498174);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6740496);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7492653);
   hNCpi0inFVres_stack_7->SetBinError(23,0.859847);
   hNCpi0inFVres_stack_7->SetBinError(24,0.964581);
   hNCpi0inFVres_stack_7->SetBinError(25,1.054357);
   hNCpi0inFVres_stack_7->SetEntries(3081);

   ci = 1482;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.2113693);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3225317);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.4099883);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1002069);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.05100079);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.2113693);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.2733256);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3352818);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.2113693);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2988259);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2733256);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3735324);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4464442);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6341078);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5958572);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3370765);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.045891);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7835208);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8855224);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.184348);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.459469);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.916868);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.725889);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.664669);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.199118);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1088158);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.139124);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1533597);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.0657745);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.02550039);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1088158);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1252177);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.139707);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1088158);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1265093);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1252177);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1414417);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1644161);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1884745);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1871762);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1284224);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2366772);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2086263);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2117203);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2466375);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.271079);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3220322);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3841287);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5075788);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6175838);
   hNCpi0inFVdis_stack_8->SetEntries(709);

   ci = 1483;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetEntries(2);

   ci = 1484;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1485;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs4->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,0.9665285);
   hCCpi0inFV_stack_11->SetBinContent(2,0.8851746);
   hCCpi0inFV_stack_11->SetBinContent(3,0.6746272);
   hCCpi0inFV_stack_11->SetBinContent(4,0.4737393);
   hCCpi0inFV_stack_11->SetBinContent(5,0.4354887);
   hCCpi0inFV_stack_11->SetBinContent(6,0.6960641);
   hCCpi0inFV_stack_11->SetBinContent(7,0.7215645);
   hCCpi0inFV_stack_11->SetBinContent(8,0.7689912);
   hCCpi0inFV_stack_11->SetBinContent(9,0.3974356);
   hCCpi0inFV_stack_11->SetBinContent(10,0.3033478);
   hCCpi0inFV_stack_11->SetBinContent(11,0.881933);
   hCCpi0inFV_stack_11->SetBinContent(12,0.7196622);
   hCCpi0inFV_stack_11->SetBinContent(13,0.7343147);
   hCCpi0inFV_stack_11->SetBinContent(14,0.8727722);
   hCCpi0inFV_stack_11->SetBinContent(15,0.7470649);
   hCCpi0inFV_stack_11->SetBinContent(16,1.457674);
   hCCpi0inFV_stack_11->SetBinContent(17,1.443129);
   hCCpi0inFV_stack_11->SetBinContent(18,1.109642);
   hCCpi0inFV_stack_11->SetBinContent(19,2.220793);
   hCCpi0inFV_stack_11->SetBinContent(20,2.739157);
   hCCpi0inFV_stack_11->SetBinContent(21,3.400043);
   hCCpi0inFV_stack_11->SetBinContent(22,3.810031);
   hCCpi0inFV_stack_11->SetBinContent(23,5.585036);
   hCCpi0inFV_stack_11->SetBinContent(24,7.842384);
   hCCpi0inFV_stack_11->SetBinContent(25,13.65484);
   hCCpi0inFV_stack_11->SetBinError(1,0.2300454);
   hCCpi0inFV_stack_11->SetBinError(2,0.2301124);
   hCCpi0inFV_stack_11->SetBinError(3,0.1899299);
   hCCpi0inFV_stack_11->SetBinError(4,0.1559873);
   hCCpi0inFV_stack_11->SetBinError(5,0.1544161);
   hCCpi0inFV_stack_11->SetBinError(6,0.1983966);
   hCCpi0inFV_stack_11->SetBinError(7,0.1992144);
   hCCpi0inFV_stack_11->SetBinError(8,0.2113755);
   hCCpi0inFV_stack_11->SetBinError(9,0.1472233);
   hCCpi0inFV_stack_11->SetBinError(10,0.1142621);
   hCCpi0inFV_stack_11->SetBinError(11,0.2255592);
   hCCpi0inFV_stack_11->SetBinError(12,0.1941695);
   hCCpi0inFV_stack_11->SetBinError(13,0.199622);
   hCCpi0inFV_stack_11->SetBinError(14,0.211336);
   hCCpi0inFV_stack_11->SetBinError(15,0.2000287);
   hCCpi0inFV_stack_11->SetBinError(16,0.2766036);
   hCCpi0inFV_stack_11->SetBinError(17,0.2817316);
   hCCpi0inFV_stack_11->SetBinError(18,0.2383882);
   hCCpi0inFV_stack_11->SetBinError(19,0.346197);
   hCCpi0inFV_stack_11->SetBinError(20,0.3883393);
   hCCpi0inFV_stack_11->SetBinError(21,0.4248993);
   hCCpi0inFV_stack_11->SetBinError(22,0.4517285);
   hCCpi0inFV_stack_11->SetBinError(23,0.5437118);
   hCCpi0inFV_stack_11->SetBinError(24,0.6484458);
   hCCpi0inFV_stack_11->SetBinError(25,0.8652358);
   hCCpi0inFV_stack_11->SetEntries(1411);

   ci = 1486;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs4->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.2113693);
   hNCinFV_stack_12->SetBinContent(2,0.2368697);
   hNCinFV_stack_12->SetBinContent(3,0.2860757);
   hNCinFV_stack_12->SetBinContent(4,0.02550039);
   hNCinFV_stack_12->SetBinContent(5,0.05100079);
   hNCinFV_stack_12->SetBinContent(6,0.2241195);
   hNCinFV_stack_12->SetBinContent(7,0.07470649);
   hNCinFV_stack_12->SetBinContent(8,0.03825059);
   hNCinFV_stack_12->SetBinContent(9,0.2241195);
   hNCinFV_stack_12->SetBinContent(10,0.07470649);
   hNCinFV_stack_12->SetBinContent(11,0.3352818);
   hNCinFV_stack_12->SetBinContent(12,0.03825059);
   hNCinFV_stack_12->SetBinContent(13,0.08745668);
   hNCinFV_stack_12->SetBinContent(14,0.3115761);
   hNCinFV_stack_12->SetBinContent(15,0.1986191);
   hNCinFV_stack_12->SetBinContent(16,0.2988259);
   hNCinFV_stack_12->SetBinContent(17,0.1749134);
   hNCinFV_stack_12->SetBinContent(18,0.3243263);
   hNCinFV_stack_12->SetBinContent(19,0.4227385);
   hNCinFV_stack_12->SetBinContent(20,0.6851086);
   hNCinFV_stack_12->SetBinContent(21,0.497445);
   hNCinFV_stack_12->SetBinContent(22,0.9347284);
   hNCinFV_stack_12->SetBinContent(23,1.25726);
   hNCinFV_stack_12->SetBinContent(24,2.029825);
   hNCinFV_stack_12->SetBinContent(25,2.913553);
   hNCinFV_stack_12->SetBinError(1,0.1088158);
   hNCinFV_stack_12->SetBinError(2,0.1102997);
   hNCinFV_stack_12->SetBinError(3,0.1258651);
   hNCinFV_stack_12->SetBinError(4,0.0180315);
   hNCinFV_stack_12->SetBinError(5,0.02550039);
   hNCinFV_stack_12->SetBinError(6,0.1095603);
   hNCinFV_stack_12->SetBinError(7,0.06325464);
   hNCinFV_stack_12->SetBinError(8,0.02208399);
   hNCinFV_stack_12->SetBinError(9,0.1095603);
   hNCinFV_stack_12->SetBinError(10,0.06325464);
   hNCinFV_stack_12->SetBinError(11,0.139707);
   hNCinFV_stack_12->SetBinError(12,0.02208399);
   hNCinFV_stack_12->SetBinError(13,0.06452687);
   hNCinFV_stack_12->SetBinError(14,0.1271502);
   hNCinFV_stack_12->SetBinError(15,0.1080662);
   hNCinFV_stack_12->SetBinError(16,0.1265093);
   hNCinFV_stack_12->SetBinError(17,0.09125478);
   hNCinFV_stack_12->SetBinError(18,0.1277878);
   hNCinFV_stack_12->SetBinError(19,0.1538888);
   hNCinFV_stack_12->SetBinError(20,0.1901918);
   hNCinFV_stack_12->SetBinError(21,0.1663818);
   hNCinFV_stack_12->SetBinError(22,0.2202306);
   hNCinFV_stack_12->SetBinError(23,0.2604937);
   hNCinFV_stack_12->SetBinError(24,0.328928);
   hNCinFV_stack_12->SetBinError(25,0.3950251);
   hNCinFV_stack_12->SetEntries(328);

   ci = 1487;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs4->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.272333);
   hnumuCCinFV_stack_13->SetBinContent(2,0.1897585);
   hnumuCCinFV_stack_13->SetBinContent(3,0.1021354);
   hnumuCCinFV_stack_13->SetBinContent(4,0.4357112);
   hnumuCCinFV_stack_13->SetBinContent(5,0.1386559);
   hnumuCCinFV_stack_13->SetBinContent(6,0.2628993);
   hnumuCCinFV_stack_13->SetBinContent(7,0.2561437);
   hnumuCCinFV_stack_13->SetBinContent(8,0.2722208);
   hnumuCCinFV_stack_13->SetBinContent(10,0.116723);
   hnumuCCinFV_stack_13->SetBinContent(11,0.238589);
   hnumuCCinFV_stack_13->SetBinContent(12,0.2375182);
   hnumuCCinFV_stack_13->SetBinContent(13,0.2700734);
   hnumuCCinFV_stack_13->SetBinContent(14,0.1653979);
   hnumuCCinFV_stack_13->SetBinContent(15,0.1609219);
   hnumuCCinFV_stack_13->SetBinContent(16,0.4475235);
   hnumuCCinFV_stack_13->SetBinContent(17,0.5273093);
   hnumuCCinFV_stack_13->SetBinContent(18,0.8095098);
   hnumuCCinFV_stack_13->SetBinContent(19,0.8106949);
   hnumuCCinFV_stack_13->SetBinContent(20,2.001282);
   hnumuCCinFV_stack_13->SetBinContent(21,1.298989);
   hnumuCCinFV_stack_13->SetBinContent(22,1.588967);
   hnumuCCinFV_stack_13->SetBinContent(23,1.621341);
   hnumuCCinFV_stack_13->SetBinContent(24,1.814145);
   hnumuCCinFV_stack_13->SetBinContent(25,3.447075);
   hnumuCCinFV_stack_13->SetBinError(1,0.1308131);
   hnumuCCinFV_stack_13->SetBinError(2,0.09265823);
   hnumuCCinFV_stack_13->SetBinError(3,0.06617539);
   hnumuCCinFV_stack_13->SetBinError(4,0.1747006);
   hnumuCCinFV_stack_13->SetBinError(5,0.08885117);
   hnumuCCinFV_stack_13->SetBinError(6,0.1255282);
   hnumuCCinFV_stack_13->SetBinError(7,0.1099095);
   hnumuCCinFV_stack_13->SetBinError(8,0.1300076);
   hnumuCCinFV_stack_13->SetBinError(10,0.06687934);
   hnumuCCinFV_stack_13->SetBinError(11,0.1248379);
   hnumuCCinFV_stack_13->SetBinError(12,0.09291905);
   hnumuCCinFV_stack_13->SetBinError(13,0.1421087);
   hnumuCCinFV_stack_13->SetBinError(14,0.09067828);
   hnumuCCinFV_stack_13->SetBinError(15,0.09905155);
   hnumuCCinFV_stack_13->SetBinError(16,0.2188295);
   hnumuCCinFV_stack_13->SetBinError(17,0.2192086);
   hnumuCCinFV_stack_13->SetBinError(18,0.2258533);
   hnumuCCinFV_stack_13->SetBinError(19,0.2260198);
   hnumuCCinFV_stack_13->SetBinError(20,0.7268924);
   hnumuCCinFV_stack_13->SetBinError(21,0.2829756);
   hnumuCCinFV_stack_13->SetBinError(22,0.3033288);
   hnumuCCinFV_stack_13->SetBinError(23,0.3062322);
   hnumuCCinFV_stack_13->SetBinError(24,0.3289738);
   hnumuCCinFV_stack_13->SetBinError(25,0.4842283);
   hnumuCCinFV_stack_13->SetEntries(413);

   ci = 1488;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs4->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_14->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_14->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(7,0.01618016);
   hnueCCinFV_stack_14->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.1458663);
   hnueCCinFV_stack_14->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(20,0.09345868);
   hnueCCinFV_stack_14->SetBinContent(21,0.1419592);
   hnueCCinFV_stack_14->SetBinContent(22,0.01485452);
   hnueCCinFV_stack_14->SetBinContent(23,0.2799374);
   hnueCCinFV_stack_14->SetBinContent(24,0.06195668);
   hnueCCinFV_stack_14->SetBinContent(25,1.17414);
   hnueCCinFV_stack_14->SetBinError(1,0.02331381);
   hnueCCinFV_stack_14->SetBinError(2,0.06195629);
   hnueCCinFV_stack_14->SetBinError(3,0.06910958);
   hnueCCinFV_stack_14->SetBinError(5,0.0127502);
   hnueCCinFV_stack_14->SetBinError(7,0.01618016);
   hnueCCinFV_stack_14->SetBinError(11,0.06195629);
   hnueCCinFV_stack_14->SetBinError(12,0.06195629);
   hnueCCinFV_stack_14->SetBinError(13,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.09679568);
   hnueCCinFV_stack_14->SetBinError(19,0.08761943);
   hnueCCinFV_stack_14->SetBinError(20,0.06584232);
   hnueCCinFV_stack_14->SetBinError(21,0.08945862);
   hnueCCinFV_stack_14->SetBinError(22,0.01485452);
   hnueCCinFV_stack_14->SetBinError(23,0.1391406);
   hnueCCinFV_stack_14->SetBinError(24,0.06195629);
   hnueCCinFV_stack_14->SetBinError(25,0.5083788);
   hnueCCinFV_stack_14->SetEntries(51);

   ci = 1489;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs4->Add(hnueCCinFV_stack_14,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__11->SetBinContent(1,5.419086);
   hmcerror__11->SetBinContent(2,5.588717);
   hmcerror__11->SetBinContent(3,4.679761);
   hmcerror__11->SetBinContent(4,4.088243);
   hmcerror__11->SetBinContent(5,3.120984);
   hmcerror__11->SetBinContent(6,4.344554);
   hmcerror__11->SetBinContent(7,4.919806);
   hmcerror__11->SetBinContent(8,4.384964);
   hmcerror__11->SetBinContent(9,3.591882);
   hmcerror__11->SetBinContent(10,3.915991);
   hmcerror__11->SetBinContent(11,5.417437);
   hmcerror__11->SetBinContent(12,5.287009);
   hmcerror__11->SetBinContent(13,6.001944);
   hmcerror__11->SetBinContent(14,7.612563);
   hmcerror__11->SetBinContent(15,6.699697);
   hmcerror__11->SetBinContent(16,7.943554);
   hmcerror__11->SetBinContent(17,9.439594);
   hmcerror__11->SetBinContent(18,11.20051);
   hmcerror__11->SetBinContent(19,13.39561);
   hmcerror__11->SetBinContent(20,17.65479);
   hmcerror__11->SetBinContent(21,22.34728);
   hmcerror__11->SetBinContent(22,24.65286);
   hmcerror__11->SetBinContent(23,33.79998);
   hmcerror__11->SetBinContent(24,44.18205);
   hmcerror__11->SetBinContent(25,65.82386);
   hmcerror__11->SetBinError(1,2.842126);
   hmcerror__11->SetBinError(2,2.347598);
   hmcerror__11->SetBinError(3,2.1717);
   hmcerror__11->SetBinError(4,2.886377);
   hmcerror__11->SetBinError(5,1.344899);
   hmcerror__11->SetBinError(6,1.838008);
   hmcerror__11->SetBinError(7,2.289154);
   hmcerror__11->SetBinError(8,2.130111);
   hmcerror__11->SetBinError(9,1.771117);
   hmcerror__11->SetBinError(10,1.812344);
   hmcerror__11->SetBinError(11,2.312367);
   hmcerror__11->SetBinError(12,2.1998);
   hmcerror__11->SetBinError(13,2.354269);
   hmcerror__11->SetBinError(14,3.108343);
   hmcerror__11->SetBinError(15,2.480243);
   hmcerror__11->SetBinError(16,3.326658);
   hmcerror__11->SetBinError(17,3.062597);
   hmcerror__11->SetBinError(18,4.332773);
   hmcerror__11->SetBinError(19,4.116054);
   hmcerror__11->SetBinError(20,5.563152);
   hmcerror__11->SetBinError(21,6.689588);
   hmcerror__11->SetBinError(22,8.532548);
   hmcerror__11->SetBinError(23,8.290559);
   hmcerror__11->SetBinError(24,10.55048);
   hmcerror__11->SetBinError(25,16.22179);
   hmcerror__11->SetBinError(26,0.1094984);
   hmcerror__11->SetEntries(321.7148);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3013[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3013[25] = {
   6,
   5,
   11,
   2,
   3,
   4,
   5,
   4,
   8,
   3,
   3,
   5,
   9,
   3,
   4,
   5,
   7,
   12,
   8,
   17,
   20,
   29,
   22,
   44,
   67};
   Double_t _felx3013[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3013[25] = {
   2.67925,
   2.48995,
   3.4975,
   2,
   2.143368,
   2.29683,
   2.48995,
   2.29683,
   3.0307,
   2.143368,
   2.143368,
   2.48995,
   3.19354,
   2.143368,
   2.29683,
   2.48995,
   2.85954,
   3.64022,
   3.0307,
   4.2835,
   4.6266,
   5.5285,
   4.8417,
   6.7671,
   8.3119};
   Double_t _fehx3013[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3013[25] = {
   2.41858,
   2.21064,
   3.27,
   1.51917,
   1.72422,
   1.98186,
   2.21064,
   1.98186,
   2.7896,
   1.72422,
   1.72422,
   2.21064,
   2.9582,
   1.72422,
   1.98186,
   2.21064,
   2.61053,
   3.4155,
   2.7896,
   4.0673,
   4.4133,
   5.3201,
   4.6299,
   6.5623,
   8.1094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(82.62034);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.20","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 5.33e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 306.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.9","F");

   ci = 1476;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.8","F");

   ci = 1477;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

   ci = 1478;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 43.4","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  8.5","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.4","F");

   ci = 1481;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  118.6","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  27.0","F");

   ci = 1483;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1485;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 53.5","F");

   ci = 1486;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 12.0","F");

   ci = 1487;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 17.5","F");

   ci = 1488;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 2.4","F");

   ci = 1489;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3014[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3014[25] = {
   0.524466,
   0.4200602,
   0.4640621,
   0.7060187,
   0.4309214,
   0.4230603,
   0.4652936,
   0.4857761,
   0.4930887,
   0.4628059,
   0.4268379,
   0.4160765,
   0.392251,
   0.4083175,
   0.3702023,
   0.4187871,
   0.3244416,
   0.3868373,
   0.307269,
   0.3151073,
   0.2993469,
   0.3461079,
   0.245283,
   0.2387956,
   0.2464423};
   Double_t _fehx3014[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3014[25] = {
   0.524466,
   0.4200602,
   0.4640621,
   0.7060187,
   0.4309214,
   0.4230603,
   0.4652936,
   0.4857761,
   0.4930887,
   0.4628059,
   0.4268379,
   0.4160765,
   0.392251,
   0.4083175,
   0.3702023,
   0.4187871,
   0.3244416,
   0.3868373,
   0.307269,
   0.3151073,
   0.2993469,
   0.3461079,
   0.245283,
   0.2387956,
   0.2464423};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
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
   
   Double_t _fx3015[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3015[25] = {
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
   Double_t _felx3015[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3015[25] = {
   0.220716,
   0.2246769,
   0.2117859,
   0.2478341,
   0.248403,
   0.2241416,
   0.2380724,
   0.2377992,
   0.2391582,
   0.2493688,
   0.2208584,
   0.2316355,
   0.2120177,
   0.2276011,
   0.2191488,
   0.2134452,
   0.2158568,
   0.2342765,
   0.2231061,
   0.2243142,
   0.2090216,
   0.2191315,
   0.2072565,
   0.1858917,
   0.1915704};
   Double_t _fehx3015[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3015[25] = {
   0.220716,
   0.2246769,
   0.2117859,
   0.2478341,
   0.248403,
   0.2241416,
   0.2380724,
   0.2377992,
   0.2391582,
   0.2493688,
   0.2208584,
   0.2316355,
   0.2120177,
   0.2276011,
   0.2191488,
   0.2134452,
   0.2158568,
   0.2342765,
   0.2231061,
   0.2243142,
   0.2090216,
   0.2191315,
   0.2072565,
   0.1858917,
   0.1915704};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3016[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3016[25] = {
   1.107198,
   0.8946596,
   2.350547,
   0.4892077,
   0.9612354,
   0.9206929,
   1.0163,
   0.9122082,
   2.227244,
   0.7660895,
   0.5537674,
   0.9457143,
   1.499514,
   0.3940854,
   0.597042,
   0.6294412,
   0.7415573,
   1.07138,
   0.5972107,
   0.9629117,
   0.8949636,
   1.176334,
   0.650888,
   0.9958795,
   1.017868};
   Double_t _felx3016[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3016[25] = {
   0.49441,
   0.4455316,
   0.7473672,
   0.4892077,
   0.6867604,
   0.5286688,
   0.5061074,
   0.5237968,
   0.8437637,
   0.5473373,
   0.3956424,
   0.4709562,
   0.5320843,
   0.2815567,
   0.342826,
   0.3134554,
   0.3029304,
   0.325005,
   0.2262458,
   0.2426254,
   0.2070319,
   0.2242539,
   0.1432457,
   0.153164,
   0.1262749};
   Double_t _fehx3016[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3016[25] = {
   0.4463078,
   0.3955541,
   0.6987536,
   0.3715948,
   0.5524604,
   0.4561711,
   0.4493348,
   0.4519672,
   0.7766401,
   0.4403023,
   0.3182723,
   0.4181268,
   0.4928737,
   0.2264966,
   0.2958134,
   0.2782936,
   0.2765511,
   0.3049416,
   0.2082474,
   0.2303795,
   0.1974872,
   0.2158005,
   0.1369794,
   0.1485286,
   0.1231985};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(3.354231);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_8_pi0_costheta_all",25,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
