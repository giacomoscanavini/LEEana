#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 14:15:40 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-1.34,1.25641,112.9126);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hmc__1->SetBinContent(1,5.419086);
   hmc__1->SetBinContent(2,5.588717);
   hmc__1->SetBinContent(3,4.679761);
   hmc__1->SetBinContent(4,4.088243);
   hmc__1->SetBinContent(5,3.120984);
   hmc__1->SetBinContent(6,4.344554);
   hmc__1->SetBinContent(7,4.919806);
   hmc__1->SetBinContent(8,4.384964);
   hmc__1->SetBinContent(9,3.591882);
   hmc__1->SetBinContent(10,3.915991);
   hmc__1->SetBinContent(11,5.417437);
   hmc__1->SetBinContent(12,5.287009);
   hmc__1->SetBinContent(13,6.001944);
   hmc__1->SetBinContent(14,7.612563);
   hmc__1->SetBinContent(15,6.699697);
   hmc__1->SetBinContent(16,7.943554);
   hmc__1->SetBinContent(17,9.439594);
   hmc__1->SetBinContent(18,11.2005);
   hmc__1->SetBinContent(19,13.39561);
   hmc__1->SetBinContent(20,17.65479);
   hmc__1->SetBinContent(21,22.34728);
   hmc__1->SetBinContent(22,24.65286);
   hmc__1->SetBinContent(23,33.79998);
   hmc__1->SetBinContent(24,44.18205);
   hmc__1->SetBinContent(25,65.82386);
   hmc__1->SetBinError(1,2.857559);
   hmc__1->SetBinError(2,2.349264);
   hmc__1->SetBinError(3,2.170446);
   hmc__1->SetBinError(4,2.895221);
   hmc__1->SetBinError(5,1.351113);
   hmc__1->SetBinError(6,1.840976);
   hmc__1->SetBinError(7,2.288645);
   hmc__1->SetBinError(8,2.12978);
   hmc__1->SetBinError(9,1.770597);
   hmc__1->SetBinError(10,1.81727);
   hmc__1->SetBinError(11,2.312054);
   hmc__1->SetBinError(12,2.195001);
   hmc__1->SetBinError(13,2.353977);
   hmc__1->SetBinError(14,3.129281);
   hmc__1->SetBinError(15,2.494716);
   hmc__1->SetBinError(16,3.334701);
   hmc__1->SetBinError(17,3.066243);
   hmc__1->SetBinError(18,4.322517);
   hmc__1->SetBinError(19,4.105734);
   hmc__1->SetBinError(20,5.564605);
   hmc__1->SetBinError(21,6.719476);
   hmc__1->SetBinError(22,8.609472);
   hmc__1->SetBinError(23,8.289088);
   hmc__1->SetBinError(24,10.536);
   hmc__1->SetBinError(25,16.31878);
   hmc__1->SetBinError(26,0.125509);
   hmc__1->SetMinimum(-1.34);
   hmc__1->SetMaximum(107.2);
   hmc__1->SetEntries(321.7148);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-1,1);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(69.11505);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
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
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
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

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
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

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
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

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hNCpi0inFV_stack_5->SetBinContent(1,2.104532);
   hNCpi0inFV_stack_5->SetBinContent(2,2.547387);
   hNCpi0inFV_stack_5->SetBinContent(3,2.139193);
   hNCpi0inFV_stack_5->SetBinContent(4,2.029825);
   hNCpi0inFV_stack_5->SetBinContent(5,1.220804);
   hNCpi0inFV_stack_5->SetBinContent(6,1.656293);
   hNCpi0inFV_stack_5->SetBinContent(7,1.690954);
   hNCpi0inFV_stack_5->SetBinContent(8,1.929618);
   hNCpi0inFV_stack_5->SetBinContent(9,1.778411);
   hNCpi0inFV_stack_5->SetBinContent(10,1.74016);
   hNCpi0inFV_stack_5->SetBinContent(11,2.013486);
   hNCpi0inFV_stack_5->SetBinContent(12,2.614727);
   hNCpi0inFV_stack_5->SetBinContent(13,2.70955);
   hNCpi0inFV_stack_5->SetBinContent(14,3.842897);
   hNCpi0inFV_stack_5->SetBinContent(15,2.977304);
   hNCpi0inFV_stack_5->SetBinContent(16,3.31438);
   hNCpi0inFV_stack_5->SetBinContent(17,4.815876);
   hNCpi0inFV_stack_5->SetBinContent(18,5.314557);
   hNCpi0inFV_stack_5->SetBinContent(19,5.335045);
   hNCpi0inFV_stack_5->SetBinContent(20,6.969614);
   hNCpi0inFV_stack_5->SetBinContent(21,10.3077);
   hNCpi0inFV_stack_5->SetBinContent(22,12.45964);
   hNCpi0inFV_stack_5->SetBinContent(23,17.07331);
   hNCpi0inFV_stack_5->SetBinContent(24,23.39486);
   hNCpi0inFV_stack_5->SetBinContent(25,33.51771);
   hNCpi0inFV_stack_5->SetBinError(1,0.3349549);
   hNCpi0inFV_stack_5->SetBinError(2,0.3811547);
   hNCpi0inFV_stack_5->SetBinError(3,0.3445779);
   hNCpi0inFV_stack_5->SetBinError(4,0.328928);
   hNCpi0inFV_stack_5->SetBinError(5,0.2536603);
   hNCpi0inFV_stack_5->SetBinError(6,0.2969644);
   hNCpi0inFV_stack_5->SetBinError(7,0.3077776);
   hNCpi0inFV_stack_5->SetBinError(8,0.3222845);
   hNCpi0inFV_stack_5->SetBinError(9,0.314469);
   hNCpi0inFV_stack_5->SetBinError(10,0.3136926);
   hNCpi0inFV_stack_5->SetBinError(11,0.337761);
   hNCpi0inFV_stack_5->SetBinError(12,0.3742195);
   hNCpi0inFV_stack_5->SetBinError(13,0.391719);
   hNCpi0inFV_stack_5->SetBinError(14,0.4621943);
   hNCpi0inFV_stack_5->SetBinError(15,0.3960526);
   hNCpi0inFV_stack_5->SetBinError(16,0.4163532);
   hNCpi0inFV_stack_5->SetBinError(17,0.5124576);
   hNCpi0inFV_stack_5->SetBinError(18,0.531221);
   hNCpi0inFV_stack_5->SetBinError(19,0.5247185);
   hNCpi0inFV_stack_5->SetBinError(20,0.6152102);
   hNCpi0inFV_stack_5->SetBinError(21,0.745107);
   hNCpi0inFV_stack_5->SetBinError(22,0.8210243);
   hNCpi0inFV_stack_5->SetBinError(23,0.964918);
   hNCpi0inFV_stack_5->SetBinError(24,1.131363);
   hNCpi0inFV_stack_5->SetBinError(25,1.340221);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_6->SetBinContent(1,0.9665285);
   hCCpi0inFV_stack_6->SetBinContent(2,0.8851746);
   hCCpi0inFV_stack_6->SetBinContent(3,0.6746272);
   hCCpi0inFV_stack_6->SetBinContent(4,0.4737393);
   hCCpi0inFV_stack_6->SetBinContent(5,0.4354887);
   hCCpi0inFV_stack_6->SetBinContent(6,0.6960641);
   hCCpi0inFV_stack_6->SetBinContent(7,0.7215645);
   hCCpi0inFV_stack_6->SetBinContent(8,0.7689912);
   hCCpi0inFV_stack_6->SetBinContent(9,0.3974356);
   hCCpi0inFV_stack_6->SetBinContent(10,0.3033478);
   hCCpi0inFV_stack_6->SetBinContent(11,0.881933);
   hCCpi0inFV_stack_6->SetBinContent(12,0.7196622);
   hCCpi0inFV_stack_6->SetBinContent(13,0.7343147);
   hCCpi0inFV_stack_6->SetBinContent(14,0.8727722);
   hCCpi0inFV_stack_6->SetBinContent(15,0.7470649);
   hCCpi0inFV_stack_6->SetBinContent(16,1.457674);
   hCCpi0inFV_stack_6->SetBinContent(17,1.443129);
   hCCpi0inFV_stack_6->SetBinContent(18,1.109642);
   hCCpi0inFV_stack_6->SetBinContent(19,2.220793);
   hCCpi0inFV_stack_6->SetBinContent(20,2.739157);
   hCCpi0inFV_stack_6->SetBinContent(21,3.400043);
   hCCpi0inFV_stack_6->SetBinContent(22,3.810031);
   hCCpi0inFV_stack_6->SetBinContent(23,5.585036);
   hCCpi0inFV_stack_6->SetBinContent(24,7.842384);
   hCCpi0inFV_stack_6->SetBinContent(25,13.65484);
   hCCpi0inFV_stack_6->SetBinError(1,0.2300454);
   hCCpi0inFV_stack_6->SetBinError(2,0.2301124);
   hCCpi0inFV_stack_6->SetBinError(3,0.1899299);
   hCCpi0inFV_stack_6->SetBinError(4,0.1559873);
   hCCpi0inFV_stack_6->SetBinError(5,0.1544161);
   hCCpi0inFV_stack_6->SetBinError(6,0.1983966);
   hCCpi0inFV_stack_6->SetBinError(7,0.1992144);
   hCCpi0inFV_stack_6->SetBinError(8,0.2113755);
   hCCpi0inFV_stack_6->SetBinError(9,0.1472233);
   hCCpi0inFV_stack_6->SetBinError(10,0.1142621);
   hCCpi0inFV_stack_6->SetBinError(11,0.2255592);
   hCCpi0inFV_stack_6->SetBinError(12,0.1941695);
   hCCpi0inFV_stack_6->SetBinError(13,0.199622);
   hCCpi0inFV_stack_6->SetBinError(14,0.211336);
   hCCpi0inFV_stack_6->SetBinError(15,0.2000287);
   hCCpi0inFV_stack_6->SetBinError(16,0.2766036);
   hCCpi0inFV_stack_6->SetBinError(17,0.2817316);
   hCCpi0inFV_stack_6->SetBinError(18,0.2383882);
   hCCpi0inFV_stack_6->SetBinError(19,0.346197);
   hCCpi0inFV_stack_6->SetBinError(20,0.3883393);
   hCCpi0inFV_stack_6->SetBinError(21,0.4248993);
   hCCpi0inFV_stack_6->SetBinError(22,0.4517285);
   hCCpi0inFV_stack_6->SetBinError(23,0.5437118);
   hCCpi0inFV_stack_6->SetBinError(24,0.6484458);
   hCCpi0inFV_stack_6->SetBinError(25,0.8652358);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_7->SetBinContent(1,0.2113693);
   hNCinFV_stack_7->SetBinContent(2,0.2368697);
   hNCinFV_stack_7->SetBinContent(3,0.2860757);
   hNCinFV_stack_7->SetBinContent(4,0.02550039);
   hNCinFV_stack_7->SetBinContent(5,0.05100079);
   hNCinFV_stack_7->SetBinContent(6,0.2241195);
   hNCinFV_stack_7->SetBinContent(7,0.07470649);
   hNCinFV_stack_7->SetBinContent(8,0.03825059);
   hNCinFV_stack_7->SetBinContent(9,0.2241195);
   hNCinFV_stack_7->SetBinContent(10,0.07470649);
   hNCinFV_stack_7->SetBinContent(11,0.3352818);
   hNCinFV_stack_7->SetBinContent(12,0.03825059);
   hNCinFV_stack_7->SetBinContent(13,0.08745668);
   hNCinFV_stack_7->SetBinContent(14,0.3115761);
   hNCinFV_stack_7->SetBinContent(15,0.1986191);
   hNCinFV_stack_7->SetBinContent(16,0.2988259);
   hNCinFV_stack_7->SetBinContent(17,0.1749134);
   hNCinFV_stack_7->SetBinContent(18,0.3243263);
   hNCinFV_stack_7->SetBinContent(19,0.4227385);
   hNCinFV_stack_7->SetBinContent(20,0.6851086);
   hNCinFV_stack_7->SetBinContent(21,0.497445);
   hNCinFV_stack_7->SetBinContent(22,0.9347284);
   hNCinFV_stack_7->SetBinContent(23,1.25726);
   hNCinFV_stack_7->SetBinContent(24,2.029825);
   hNCinFV_stack_7->SetBinContent(25,2.913553);
   hNCinFV_stack_7->SetBinError(1,0.1088158);
   hNCinFV_stack_7->SetBinError(2,0.1102997);
   hNCinFV_stack_7->SetBinError(3,0.1258651);
   hNCinFV_stack_7->SetBinError(4,0.0180315);
   hNCinFV_stack_7->SetBinError(5,0.02550039);
   hNCinFV_stack_7->SetBinError(6,0.1095603);
   hNCinFV_stack_7->SetBinError(7,0.06325464);
   hNCinFV_stack_7->SetBinError(8,0.02208399);
   hNCinFV_stack_7->SetBinError(9,0.1095603);
   hNCinFV_stack_7->SetBinError(10,0.06325464);
   hNCinFV_stack_7->SetBinError(11,0.139707);
   hNCinFV_stack_7->SetBinError(12,0.02208399);
   hNCinFV_stack_7->SetBinError(13,0.06452687);
   hNCinFV_stack_7->SetBinError(14,0.1271502);
   hNCinFV_stack_7->SetBinError(15,0.1080662);
   hNCinFV_stack_7->SetBinError(16,0.1265093);
   hNCinFV_stack_7->SetBinError(17,0.09125478);
   hNCinFV_stack_7->SetBinError(18,0.1277878);
   hNCinFV_stack_7->SetBinError(19,0.1538888);
   hNCinFV_stack_7->SetBinError(20,0.1901918);
   hNCinFV_stack_7->SetBinError(21,0.1663818);
   hNCinFV_stack_7->SetBinError(22,0.2202306);
   hNCinFV_stack_7->SetBinError(23,0.2604937);
   hNCinFV_stack_7->SetBinError(24,0.328928);
   hNCinFV_stack_7->SetBinError(25,0.3950251);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_8->SetBinContent(1,0.272333);
   hnumuCCinFV_stack_8->SetBinContent(2,0.1897585);
   hnumuCCinFV_stack_8->SetBinContent(3,0.1021354);
   hnumuCCinFV_stack_8->SetBinContent(4,0.4357112);
   hnumuCCinFV_stack_8->SetBinContent(5,0.1386559);
   hnumuCCinFV_stack_8->SetBinContent(6,0.2628993);
   hnumuCCinFV_stack_8->SetBinContent(7,0.2561437);
   hnumuCCinFV_stack_8->SetBinContent(8,0.2722208);
   hnumuCCinFV_stack_8->SetBinContent(10,0.116723);
   hnumuCCinFV_stack_8->SetBinContent(11,0.238589);
   hnumuCCinFV_stack_8->SetBinContent(12,0.2375182);
   hnumuCCinFV_stack_8->SetBinContent(13,0.2700734);
   hnumuCCinFV_stack_8->SetBinContent(14,0.1653979);
   hnumuCCinFV_stack_8->SetBinContent(15,0.1609219);
   hnumuCCinFV_stack_8->SetBinContent(16,0.4475235);
   hnumuCCinFV_stack_8->SetBinContent(17,0.5273093);
   hnumuCCinFV_stack_8->SetBinContent(18,0.8095098);
   hnumuCCinFV_stack_8->SetBinContent(19,0.8106949);
   hnumuCCinFV_stack_8->SetBinContent(20,2.001282);
   hnumuCCinFV_stack_8->SetBinContent(21,1.298989);
   hnumuCCinFV_stack_8->SetBinContent(22,1.588967);
   hnumuCCinFV_stack_8->SetBinContent(23,1.621341);
   hnumuCCinFV_stack_8->SetBinContent(24,1.814145);
   hnumuCCinFV_stack_8->SetBinContent(25,3.447075);
   hnumuCCinFV_stack_8->SetBinError(1,0.1308131);
   hnumuCCinFV_stack_8->SetBinError(2,0.09265823);
   hnumuCCinFV_stack_8->SetBinError(3,0.06617539);
   hnumuCCinFV_stack_8->SetBinError(4,0.1747006);
   hnumuCCinFV_stack_8->SetBinError(5,0.08885117);
   hnumuCCinFV_stack_8->SetBinError(6,0.1255282);
   hnumuCCinFV_stack_8->SetBinError(7,0.1099095);
   hnumuCCinFV_stack_8->SetBinError(8,0.1300076);
   hnumuCCinFV_stack_8->SetBinError(10,0.06687934);
   hnumuCCinFV_stack_8->SetBinError(11,0.1248379);
   hnumuCCinFV_stack_8->SetBinError(12,0.09291905);
   hnumuCCinFV_stack_8->SetBinError(13,0.1421087);
   hnumuCCinFV_stack_8->SetBinError(14,0.09067828);
   hnumuCCinFV_stack_8->SetBinError(15,0.09905155);
   hnumuCCinFV_stack_8->SetBinError(16,0.2188295);
   hnumuCCinFV_stack_8->SetBinError(17,0.2192086);
   hnumuCCinFV_stack_8->SetBinError(18,0.2258533);
   hnumuCCinFV_stack_8->SetBinError(19,0.2260198);
   hnumuCCinFV_stack_8->SetBinError(20,0.7268924);
   hnumuCCinFV_stack_8->SetBinError(21,0.2829756);
   hnumuCCinFV_stack_8->SetBinError(22,0.3033288);
   hnumuCCinFV_stack_8->SetBinError(23,0.3062322);
   hnumuCCinFV_stack_8->SetBinError(24,0.3289738);
   hnumuCCinFV_stack_8->SetBinError(25,0.4842283);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_9->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_9->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(7,0.01618016);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(18,0.1458663);
   hnueCCinFV_stack_9->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(20,0.09345868);
   hnueCCinFV_stack_9->SetBinContent(21,0.1419592);
   hnueCCinFV_stack_9->SetBinContent(22,0.01485452);
   hnueCCinFV_stack_9->SetBinContent(23,0.2799374);
   hnueCCinFV_stack_9->SetBinContent(24,0.06195668);
   hnueCCinFV_stack_9->SetBinContent(25,1.17414);
   hnueCCinFV_stack_9->SetBinError(1,0.02331381);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.06910958);
   hnueCCinFV_stack_9->SetBinError(5,0.0127502);
   hnueCCinFV_stack_9->SetBinError(7,0.01618016);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(18,0.09679568);
   hnueCCinFV_stack_9->SetBinError(19,0.08761943);
   hnueCCinFV_stack_9->SetBinError(20,0.06584232);
   hnueCCinFV_stack_9->SetBinError(21,0.08945862);
   hnueCCinFV_stack_9->SetBinError(22,0.01485452);
   hnueCCinFV_stack_9->SetBinError(23,0.1391406);
   hnueCCinFV_stack_9->SetBinError(24,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.5083788);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);
   hmcerror__2->SetBinContent(1,5.419086);
   hmcerror__2->SetBinContent(2,5.588717);
   hmcerror__2->SetBinContent(3,4.679761);
   hmcerror__2->SetBinContent(4,4.088243);
   hmcerror__2->SetBinContent(5,3.120984);
   hmcerror__2->SetBinContent(6,4.344554);
   hmcerror__2->SetBinContent(7,4.919806);
   hmcerror__2->SetBinContent(8,4.384964);
   hmcerror__2->SetBinContent(9,3.591882);
   hmcerror__2->SetBinContent(10,3.915991);
   hmcerror__2->SetBinContent(11,5.417437);
   hmcerror__2->SetBinContent(12,5.287009);
   hmcerror__2->SetBinContent(13,6.001944);
   hmcerror__2->SetBinContent(14,7.612563);
   hmcerror__2->SetBinContent(15,6.699697);
   hmcerror__2->SetBinContent(16,7.943554);
   hmcerror__2->SetBinContent(17,9.439594);
   hmcerror__2->SetBinContent(18,11.2005);
   hmcerror__2->SetBinContent(19,13.39561);
   hmcerror__2->SetBinContent(20,17.65479);
   hmcerror__2->SetBinContent(21,22.34728);
   hmcerror__2->SetBinContent(22,24.65286);
   hmcerror__2->SetBinContent(23,33.79998);
   hmcerror__2->SetBinContent(24,44.18205);
   hmcerror__2->SetBinContent(25,65.82386);
   hmcerror__2->SetBinError(1,2.857559);
   hmcerror__2->SetBinError(2,2.349264);
   hmcerror__2->SetBinError(3,2.170446);
   hmcerror__2->SetBinError(4,2.895221);
   hmcerror__2->SetBinError(5,1.351113);
   hmcerror__2->SetBinError(6,1.840976);
   hmcerror__2->SetBinError(7,2.288645);
   hmcerror__2->SetBinError(8,2.12978);
   hmcerror__2->SetBinError(9,1.770597);
   hmcerror__2->SetBinError(10,1.81727);
   hmcerror__2->SetBinError(11,2.312054);
   hmcerror__2->SetBinError(12,2.195001);
   hmcerror__2->SetBinError(13,2.353977);
   hmcerror__2->SetBinError(14,3.129281);
   hmcerror__2->SetBinError(15,2.494716);
   hmcerror__2->SetBinError(16,3.334701);
   hmcerror__2->SetBinError(17,3.066243);
   hmcerror__2->SetBinError(18,4.322517);
   hmcerror__2->SetBinError(19,4.105734);
   hmcerror__2->SetBinError(20,5.564605);
   hmcerror__2->SetBinError(21,6.719476);
   hmcerror__2->SetBinError(22,8.609472);
   hmcerror__2->SetBinError(23,8.289088);
   hmcerror__2->SetBinError(24,10.536);
   hmcerror__2->SetBinError(25,16.31878);
   hmcerror__2->SetBinError(26,0.125509);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[25] = {
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
   Double_t _fy3001[25] = {
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
   Double_t _felx3001[25] = {
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
   Double_t _fely3001[25] = {
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
   Double_t _fehx3001[25] = {
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
   Double_t _fehy3001[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(82.62034);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.94#pm0.05(data err)#pm0.19(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.30/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 306.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.9","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 28.8","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 43.4","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  155.5","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 53.5","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.0","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 17.5","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.4","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
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
   Double_t _fy3002[25] = {
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
   Double_t _felx3002[25] = {
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
   Double_t _fely3002[25] = {
   0.5273139,
   0.4203583,
   0.4637941,
   0.7081821,
   0.4329125,
   0.4237434,
   0.4651902,
   0.4857007,
   0.492944,
   0.4640639,
   0.42678,
   0.4151687,
   0.3922025,
   0.411068,
   0.3723626,
   0.4197996,
   0.3248278,
   0.3859216,
   0.3064985,
   0.3151896,
   0.3006843,
   0.3492282,
   0.2452395,
   0.2384678,
   0.2479159};
   Double_t _fehx3002[25] = {
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
   Double_t _fehy3002[25] = {
   0.5273139,
   0.4203583,
   0.4637941,
   0.7081821,
   0.4329125,
   0.4237434,
   0.4651902,
   0.4857007,
   0.492944,
   0.4640639,
   0.42678,
   0.4151687,
   0.3922025,
   0.411068,
   0.3723626,
   0.4197996,
   0.3248278,
   0.3859216,
   0.3064985,
   0.3151896,
   0.3006843,
   0.3492282,
   0.2452395,
   0.2384678,
   0.2479159};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[25] = {
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
   Double_t _fy3003[25] = {
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
   Double_t _felx3003[25] = {
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
   Double_t _fely3003[25] = {
   0.2207838,
   0.2244134,
   0.2117859,
   0.2479338,
   0.2484819,
   0.2242346,
   0.2382111,
   0.237808,
   0.2390726,
   0.2494439,
   0.2204735,
   0.2316621,
   0.2118385,
   0.2276011,
   0.2191664,
   0.2134581,
   0.2158783,
   0.2343685,
   0.2230409,
   0.2244285,
   0.2090636,
   0.2191365,
   0.2072762,
   0.1859054,
   0.1915804};
   Double_t _fehx3003[25] = {
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
   Double_t _fehy3003[25] = {
   0.2207838,
   0.2244134,
   0.2117859,
   0.2479338,
   0.2484819,
   0.2242346,
   0.2382111,
   0.237808,
   0.2390726,
   0.2494439,
   0.2204735,
   0.2316621,
   0.2118385,
   0.2276011,
   0.2191664,
   0.2134581,
   0.2158783,
   0.2343685,
   0.2230409,
   0.2244285,
   0.2090636,
   0.2191365,
   0.2072762,
   0.1859054,
   0.1915804};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[25] = {
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
   Double_t _fy3004[25] = {
   1.107198,
   0.8946597,
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
   0.5972106,
   0.9629117,
   0.8949636,
   1.176334,
   0.650888,
   0.9958795,
   1.017868};
   Double_t _felx3004[25] = {
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
   Double_t _fely3004[25] = {
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
   Double_t _fehx3004[25] = {
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
   Double_t _fehy3004[25] = {
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
   0.2082473,
   0.2303795,
   0.1974872,
   0.2158005,
   0.1369794,
   0.1485286,
   0.1231985};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.354231);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
