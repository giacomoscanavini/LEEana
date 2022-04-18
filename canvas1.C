#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Apr 18 16:49:47 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-230.7692,-1.508396,1692.308,127.1022);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hmc__1->SetBinContent(0,21.43321);
   hmc__1->SetBinContent(1,19.71607);
   hmc__1->SetBinContent(2,56.63172);
   hmc__1->SetBinContent(3,75.4198);
   hmc__1->SetBinContent(4,68.86806);
   hmc__1->SetBinContent(5,54.81273);
   hmc__1->SetBinContent(6,43.4897);
   hmc__1->SetBinContent(7,33.49451);
   hmc__1->SetBinContent(8,26.26861);
   hmc__1->SetBinContent(9,21.09561);
   hmc__1->SetBinContent(10,16.04413);
   hmc__1->SetBinContent(11,9.310494);
   hmc__1->SetBinContent(12,7.457527);
   hmc__1->SetBinContent(13,6.029018);
   hmc__1->SetBinContent(14,5.69148);
   hmc__1->SetBinContent(15,4.575036);
   hmc__1->SetBinContent(16,3.147944);
   hmc__1->SetBinContent(17,3.024545);
   hmc__1->SetBinContent(18,2.551003);
   hmc__1->SetBinContent(19,2.724746);
   hmc__1->SetBinContent(20,2.494865);
   hmc__1->SetBinContent(21,1.692268);
   hmc__1->SetBinContent(22,1.757728);
   hmc__1->SetBinContent(23,1.466069);
   hmc__1->SetBinContent(24,0.970704);
   hmc__1->SetBinContent(25,1.064902);
   hmc__1->SetBinContent(26,22.4231);
   hmc__1->SetBinError(0,1.146848);
   hmc__1->SetBinError(1,6.142077);
   hmc__1->SetBinError(2,12.47005);
   hmc__1->SetBinError(3,16.94123);
   hmc__1->SetBinError(4,17.02653);
   hmc__1->SetBinError(5,13.33286);
   hmc__1->SetBinError(6,11.08372);
   hmc__1->SetBinError(7,9.352907);
   hmc__1->SetBinError(8,7.512806);
   hmc__1->SetBinError(9,5.395343);
   hmc__1->SetBinError(10,5.094986);
   hmc__1->SetBinError(11,3.596645);
   hmc__1->SetBinError(12,4.375464);
   hmc__1->SetBinError(13,2.245609);
   hmc__1->SetBinError(14,2.855041);
   hmc__1->SetBinError(15,2.731011);
   hmc__1->SetBinError(16,1.798247);
   hmc__1->SetBinError(17,1.955489);
   hmc__1->SetBinError(18,2.146683);
   hmc__1->SetBinError(19,1.609603);
   hmc__1->SetBinError(20,1.953687);
   hmc__1->SetBinError(21,1.369131);
   hmc__1->SetBinError(22,1.219263);
   hmc__1->SetBinError(23,1.089771);
   hmc__1->SetBinError(24,0.793107);
   hmc__1->SetBinError(25,1.009179);
   hmc__1->SetBinError(26,7.692905);
   hmc__1->SetMinimum(-1.508396);
   hmc__1->SetMaximum(120.6717);
   hmc__1->SetEntries(507.336);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-2.788889e-09);
   hs1_stack_1->SetMaximum(79.19079);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(0,0.2560167);
   hbadmatch_stack_1->SetBinContent(1,0.9482042);
   hbadmatch_stack_1->SetBinContent(2,1.142687);
   hbadmatch_stack_1->SetBinContent(3,1.720182);
   hbadmatch_stack_1->SetBinContent(4,1.13231);
   hbadmatch_stack_1->SetBinContent(5,1.131835);
   hbadmatch_stack_1->SetBinContent(6,0.5456296);
   hbadmatch_stack_1->SetBinContent(7,0.4847405);
   hbadmatch_stack_1->SetBinContent(8,0.3225317);
   hbadmatch_stack_1->SetBinContent(9,0.3679478);
   hbadmatch_stack_1->SetBinContent(10,0.2587566);
   hbadmatch_stack_1->SetBinContent(11,0.1960336);
   hbadmatch_stack_1->SetBinContent(12,0.02550039);
   hbadmatch_stack_1->SetBinContent(13,0.04136238);
   hbadmatch_stack_1->SetBinContent(14,0.07732999);
   hbadmatch_stack_1->SetBinContent(15,0.2313629);
   hbadmatch_stack_1->SetBinContent(16,0.06195629);
   hbadmatch_stack_1->SetBinContent(17,0.1047555);
   hbadmatch_stack_1->SetBinContent(18,0.02550039);
   hbadmatch_stack_1->SetBinContent(19,0.0127502);
   hbadmatch_stack_1->SetBinContent(20,0.09272019);
   hbadmatch_stack_1->SetBinContent(21,0.08745668);
   hbadmatch_stack_1->SetBinContent(23,0.07143724);
   hbadmatch_stack_1->SetBinContent(25,0.0127502);
   hbadmatch_stack_1->SetBinContent(26,0.2988906);
   hbadmatch_stack_1->SetBinError(0,0.1115538);
   hbadmatch_stack_1->SetBinError(1,0.33154);
   hbadmatch_stack_1->SetBinError(2,0.2417066);
   hbadmatch_stack_1->SetBinError(3,0.4475135);
   hbadmatch_stack_1->SetBinError(4,0.2495125);
   hbadmatch_stack_1->SetBinError(5,0.2716972);
   hbadmatch_stack_1->SetBinError(6,0.1643658);
   hbadmatch_stack_1->SetBinError(7,0.170608);
   hbadmatch_stack_1->SetBinError(8,0.139124);
   hbadmatch_stack_1->SetBinError(9,0.1435803);
   hbadmatch_stack_1->SetBinError(10,0.1229523);
   hbadmatch_stack_1->SetBinError(11,0.1039879);
   hbadmatch_stack_1->SetBinError(12,0.0180315);
   hbadmatch_stack_1->SetBinError(13,0.02401536);
   hbadmatch_stack_1->SetBinError(14,0.0638352);
   hbadmatch_stack_1->SetBinError(15,0.1138133);
   hbadmatch_stack_1->SetBinError(16,0.06195629);
   hbadmatch_stack_1->SetBinError(17,0.06673459);
   hbadmatch_stack_1->SetBinError(18,0.0180315);
   hbadmatch_stack_1->SetBinError(19,0.0127502);
   hbadmatch_stack_1->SetBinError(20,0.06566632);
   hbadmatch_stack_1->SetBinError(21,0.06452687);
   hbadmatch_stack_1->SetBinError(23,0.07143724);
   hbadmatch_stack_1->SetBinError(25,0.0127502);
   hbadmatch_stack_1->SetBinError(26,0.1146361);
   hbadmatch_stack_1->SetEntries(259);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(0,1.623739);
   hext_stack_2->SetBinContent(1,1.415152);
   hext_stack_2->SetBinContent(2,4.668094);
   hext_stack_2->SetBinContent(3,4.515393);
   hext_stack_2->SetBinContent(4,3.038892);
   hext_stack_2->SetBinContent(5,2.704874);
   hext_stack_2->SetBinContent(6,1.960488);
   hext_stack_2->SetBinContent(7,1.289722);
   hext_stack_2->SetBinContent(8,0.6312254);
   hext_stack_2->SetBinContent(9,1.83779);
   hext_stack_2->SetBinContent(10,1.117944);
   hext_stack_2->SetBinContent(11,0.5698761);
   hext_stack_2->SetBinContent(12,0.2726682);
   hext_stack_2->SetBinContent(13,0.6462268);
   hext_stack_2->SetBinContent(14,0.6584966);
   hext_stack_2->SetBinContent(15,0.4349078);
   hext_stack_2->SetBinContent(16,0.04907941);
   hext_stack_2->SetBinContent(17,0.04907941);
   hext_stack_2->SetBinContent(18,0.2726682);
   hext_stack_2->SetBinContent(19,0.4349078);
   hext_stack_2->SetBinContent(20,0.01226985);
   hext_stack_2->SetBinContent(21,0.01226985);
   hext_stack_2->SetBinContent(22,0.6094172);
   hext_stack_2->SetBinContent(23,0.211319);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinContent(25,0.01226985);
   hext_stack_2->SetBinContent(26,1.451962);
   hext_stack_2->SetBinError(0,0.4929427);
   hext_stack_2->SetBinError(1,0.4903398);
   hext_stack_2->SetBinError(2,0.8948976);
   hext_stack_2->SetBinError(3,0.8512412);
   hext_stack_2->SetBinError(4,0.6952882);
   hext_stack_2->SetBinError(5,0.6649429);
   hext_stack_2->SetBinError(6,0.5669928);
   hext_stack_2->SetBinError(7,0.449128);
   hext_stack_2->SetBinError(8,0.2865336);
   hext_stack_2->SetBinError(9,0.5656636);
   hext_stack_2->SetBinError(10,0.4467754);
   hext_stack_2->SetBinError(11,0.2852171);
   hext_stack_2->SetBinError(12,0.2013053);
   hext_stack_2->SetBinError(13,0.3456354);
   hext_stack_2->SetBinError(14,0.3458531);
   hext_stack_2->SetBinError(15,0.282299);
   hext_stack_2->SetBinError(16,0.0245397);
   hext_stack_2->SetBinError(17,0.0245397);
   hext_stack_2->SetBinError(18,0.2013053);
   hext_stack_2->SetBinError(19,0.282299);
   hext_stack_2->SetBinError(20,0.01226985);
   hext_stack_2->SetBinError(21,0.01226985);
   hext_stack_2->SetBinError(22,0.3449814);
   hext_stack_2->SetBinError(23,0.1994269);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetBinError(25,0.01226985);
   hext_stack_2->SetBinError(26,0.4908002);
   hext_stack_2->SetEntries(584);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(0,0.262682);
   hdirt_stack_3->SetBinContent(1,0.1996126);
   hdirt_stack_3->SetBinContent(2,0.8931865);
   hdirt_stack_3->SetBinContent(3,1.045149);
   hdirt_stack_3->SetBinContent(4,0.5789667);
   hdirt_stack_3->SetBinContent(5,0.2339119);
   hdirt_stack_3->SetBinContent(6,0.2598794);
   hdirt_stack_3->SetBinContent(7,0.1636269);
   hdirt_stack_3->SetBinContent(8,0.1327779);
   hdirt_stack_3->SetBinContent(9,0.06202679);
   hdirt_stack_3->SetBinContent(10,0.1554562);
   hdirt_stack_3->SetBinContent(11,0.1283835);
   hdirt_stack_3->SetBinContent(12,0.05242869);
   hdirt_stack_3->SetBinContent(13,0.04049498);
   hdirt_stack_3->SetBinContent(14,0.008219617);
   hdirt_stack_3->SetBinContent(15,0.06032325);
   hdirt_stack_3->SetBinContent(16,0.07240807);
   hdirt_stack_3->SetBinContent(17,0.008219617);
   hdirt_stack_3->SetBinContent(19,0.009481426);
   hdirt_stack_3->SetBinContent(20,0.04967419);
   hdirt_stack_3->SetBinContent(26,0.1490664);
   hdirt_stack_3->SetBinError(0,0.09771104);
   hdirt_stack_3->SetBinError(1,0.08015939);
   hdirt_stack_3->SetBinError(2,0.1925591);
   hdirt_stack_3->SetBinError(3,0.3879122);
   hdirt_stack_3->SetBinError(4,0.1588144);
   hdirt_stack_3->SetBinError(5,0.08573336);
   hdirt_stack_3->SetBinError(6,0.1064155);
   hdirt_stack_3->SetBinError(7,0.08146047);
   hdirt_stack_3->SetBinError(8,0.06742201);
   hdirt_stack_3->SetBinError(9,0.04597964);
   hdirt_stack_3->SetBinError(10,0.08126637);
   hdirt_stack_3->SetBinError(11,0.06567698);
   hdirt_stack_3->SetBinError(12,0.0449667);
   hdirt_stack_3->SetBinError(13,0.04049498);
   hdirt_stack_3->SetBinError(14,0.008219618);
   hdirt_stack_3->SetBinError(15,0.05274799);
   hdirt_stack_3->SetBinError(16,0.07240807);
   hdirt_stack_3->SetBinError(17,0.008219618);
   hdirt_stack_3->SetBinError(19,0.009481427);
   hdirt_stack_3->SetBinError(20,0.04967418);
   hdirt_stack_3->SetBinError(26,0.07744966);
   hdirt_stack_3->SetEntries(166);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(0,2.703927);
   houtFV_stack_4->SetBinContent(1,2.761122);
   houtFV_stack_4->SetBinContent(2,5.129922);
   houtFV_stack_4->SetBinContent(3,4.769545);
   houtFV_stack_4->SetBinContent(4,4.05282);
   houtFV_stack_4->SetBinContent(5,3.340386);
   houtFV_stack_4->SetBinContent(6,2.19424);
   houtFV_stack_4->SetBinContent(7,2.270534);
   houtFV_stack_4->SetBinContent(8,1.541541);
   houtFV_stack_4->SetBinContent(9,1.17456);
   houtFV_stack_4->SetBinContent(10,0.7853155);
   houtFV_stack_4->SetBinContent(11,0.6380983);
   houtFV_stack_4->SetBinContent(12,1.104258);
   houtFV_stack_4->SetBinContent(13,0.2241195);
   houtFV_stack_4->SetBinContent(14,0.6255145);
   houtFV_stack_4->SetBinContent(15,0.4002509);
   houtFV_stack_4->SetBinContent(16,0.1621632);
   houtFV_stack_4->SetBinContent(17,0.2988259);
   houtFV_stack_4->SetBinContent(18,0.1749134);
   houtFV_stack_4->SetBinContent(19,0.4482389);
   houtFV_stack_4->SetBinContent(20,0.3910622);
   houtFV_stack_4->SetBinContent(21,0.1239126);
   houtFV_stack_4->SetBinContent(22,0.0127502);
   houtFV_stack_4->SetBinContent(23,0.3352818);
   houtFV_stack_4->SetBinContent(24,0.149413);
   houtFV_stack_4->SetBinContent(25,0.1257073);
   houtFV_stack_4->SetBinContent(26,1.988867);
   houtFV_stack_4->SetBinError(0,0.3829607);
   houtFV_stack_4->SetBinError(1,0.3806799);
   houtFV_stack_4->SetBinError(2,0.542621);
   houtFV_stack_4->SetBinError(3,0.5102256);
   houtFV_stack_4->SetBinError(4,0.4761791);
   houtFV_stack_4->SetBinError(5,0.4319254);
   houtFV_stack_4->SetBinError(6,0.3435179);
   houtFV_stack_4->SetBinError(7,0.3509729);
   houtFV_stack_4->SetBinError(8,0.2944907);
   houtFV_stack_4->SetBinError(9,0.2630175);
   houtFV_stack_4->SetBinError(10,0.2012441);
   houtFV_stack_4->SetBinError(11,0.1804376);
   houtFV_stack_4->SetBinError(12,0.256722);
   houtFV_stack_4->SetBinError(13,0.1095603);
   houtFV_stack_4->SetBinError(14,0.1851291);
   houtFV_stack_4->SetBinError(15,0.1531095);
   houtFV_stack_4->SetBinError(16,0.09035965);
   houtFV_stack_4->SetBinError(17,0.1265093);
   houtFV_stack_4->SetBinError(18,0.09125478);
   houtFV_stack_4->SetBinError(19,0.1549416);
   houtFV_stack_4->SetBinError(20,0.1424886);
   houtFV_stack_4->SetBinError(21,0.08761943);
   houtFV_stack_4->SetBinError(22,0.0127502);
   houtFV_stack_4->SetBinError(23,0.139707);
   houtFV_stack_4->SetBinError(24,0.08945557);
   houtFV_stack_4->SetBinError(25,0.06820132);
   houtFV_stack_4->SetBinError(26,0.3292092);
   houtFV_stack_4->SetEntries(971);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(0,11.37909);
   hNCpi0inFV_stack_5->SetBinContent(1,9.214398);
   hNCpi0inFV_stack_5->SetBinContent(2,30.83173);
   hNCpi0inFV_stack_5->SetBinContent(3,43.88397);
   hNCpi0inFV_stack_5->SetBinContent(4,41.54635);
   hNCpi0inFV_stack_5->SetBinContent(5,33.56531);
   hNCpi0inFV_stack_5->SetBinContent(6,28.61638);
   hNCpi0inFV_stack_5->SetBinContent(7,20.41121);
   hNCpi0inFV_stack_5->SetBinContent(8,16.65615);
   hNCpi0inFV_stack_5->SetBinContent(9,11.73629);
   hNCpi0inFV_stack_5->SetBinContent(10,8.427288);
   hNCpi0inFV_stack_5->SetBinContent(11,5.779695);
   hNCpi0inFV_stack_5->SetBinContent(12,3.722574);
   hNCpi0inFV_stack_5->SetBinContent(13,3.203218);
   hNCpi0inFV_stack_5->SetBinContent(14,2.645799);
   hNCpi0inFV_stack_5->SetBinContent(15,2.48902);
   hNCpi0inFV_stack_5->SetBinContent(16,1.592542);
   hNCpi0inFV_stack_5->SetBinContent(17,1.865867);
   hNCpi0inFV_stack_5->SetBinContent(18,1.23176);
   hNCpi0inFV_stack_5->SetBinContent(19,1.109642);
   hNCpi0inFV_stack_5->SetBinContent(20,0.710609);
   hNCpi0inFV_stack_5->SetBinContent(21,1.00764);
   hNCpi0inFV_stack_5->SetBinContent(22,0.7215645);
   hNCpi0inFV_stack_5->SetBinContent(23,0.6086074);
   hNCpi0inFV_stack_5->SetBinContent(24,0.26237);
   hNCpi0inFV_stack_5->SetBinContent(25,0.4482389);
   hNCpi0inFV_stack_5->SetBinContent(26,10.35134);
   hNCpi0inFV_stack_5->SetBinError(0,0.782001);
   hNCpi0inFV_stack_5->SetBinError(1,0.7017596);
   hNCpi0inFV_stack_5->SetBinError(2,1.285399);
   hNCpi0inFV_stack_5->SetBinError(3,1.54357);
   hNCpi0inFV_stack_5->SetBinError(4,1.496761);
   hNCpi0inFV_stack_5->SetBinError(5,1.350643);
   hNCpi0inFV_stack_5->SetBinError(6,1.243282);
   hNCpi0inFV_stack_5->SetBinError(7,1.042317);
   hNCpi0inFV_stack_5->SetBinError(8,0.9589842);
   hNCpi0inFV_stack_5->SetBinError(9,0.798386);
   hNCpi0inFV_stack_5->SetBinError(10,0.6745317);
   hNCpi0inFV_stack_5->SetBinError(11,0.5526191);
   hNCpi0inFV_stack_5->SetBinError(12,0.4470961);
   hNCpi0inFV_stack_5->SetBinError(13,0.4072289);
   hNCpi0inFV_stack_5->SetBinError(14,0.3906801);
   hNCpi0inFV_stack_5->SetBinError(15,0.3679522);
   hNCpi0inFV_stack_5->SetBinError(16,0.2955927);
   hNCpi0inFV_stack_5->SetBinError(17,0.321021);
   hNCpi0inFV_stack_5->SetBinError(18,0.2598689);
   hNCpi0inFV_stack_5->SetBinError(19,0.2383882);
   hNCpi0inFV_stack_5->SetBinError(20,0.1910446);
   hNCpi0inFV_stack_5->SetBinError(21,0.2356446);
   hNCpi0inFV_stack_5->SetBinError(22,0.1992144);
   hNCpi0inFV_stack_5->SetBinError(23,0.18761);
   hNCpi0inFV_stack_5->SetBinError(24,0.1117638);
   hNCpi0inFV_stack_5->SetBinError(25,0.1549416);
   hNCpi0inFV_stack_5->SetBinError(26,0.7393205);
   hNCpi0inFV_stack_5->SetEntries(7714);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(0,2.519635);
   hCCpi0inFV_stack_6->SetBinContent(1,3.520366);
   hCCpi0inFV_stack_6->SetBinContent(2,8.255022);
   hCCpi0inFV_stack_6->SetBinContent(3,12.40798);
   hCCpi0inFV_stack_6->SetBinContent(4,10.55082);
   hCCpi0inFV_stack_6->SetBinContent(5,7.64715);
   hCCpi0inFV_stack_6->SetBinContent(6,6.303262);
   hCCpi0inFV_stack_6->SetBinContent(7,5.083708);
   hCCpi0inFV_stack_6->SetBinContent(8,3.853853);
   hCCpi0inFV_stack_6->SetBinContent(9,3.583558);
   hCCpi0inFV_stack_6->SetBinContent(10,3.257996);
   hCCpi0inFV_stack_6->SetBinContent(11,0.9054592);
   hCCpi0inFV_stack_6->SetBinContent(12,1.122392);
   hCCpi0inFV_stack_6->SetBinContent(13,0.646858);
   hCCpi0inFV_stack_6->SetBinContent(14,0.7835208);
   hCCpi0inFV_stack_6->SetBinContent(15,0.4846948);
   hCCpi0inFV_stack_6->SetBinContent(16,0.3735324);
   hCCpi0inFV_stack_6->SetBinContent(17,0.3127694);
   hCCpi0inFV_stack_6->SetBinContent(18,0.3990328);
   hCCpi0inFV_stack_6->SetBinContent(19,0.2733256);
   hCCpi0inFV_stack_6->SetBinContent(20,0.5328563);
   hCCpi0inFV_stack_6->SetBinContent(21,0.2368697);
   hCCpi0inFV_stack_6->SetBinContent(22,0.1366628);
   hCCpi0inFV_stack_6->SetBinContent(23,0.1986191);
   hCCpi0inFV_stack_6->SetBinContent(24,0.3480321);
   hCCpi0inFV_stack_6->SetBinContent(25,0.2259284);
   hCCpi0inFV_stack_6->SetBinContent(26,2.997597);
   hCCpi0inFV_stack_6->SetBinError(0,0.3820933);
   hCCpi0inFV_stack_6->SetBinError(1,0.4407585);
   hCCpi0inFV_stack_6->SetBinError(2,0.6655739);
   hCCpi0inFV_stack_6->SetBinError(3,0.8322102);
   hCCpi0inFV_stack_6->SetBinError(4,0.7522806);
   hCCpi0inFV_stack_6->SetBinError(5,0.6428244);
   hCCpi0inFV_stack_6->SetBinError(6,0.5816945);
   hCCpi0inFV_stack_6->SetBinError(7,0.5236595);
   hCCpi0inFV_stack_6->SetBinError(8,0.4656306);
   hCCpi0inFV_stack_6->SetBinError(9,0.4396464);
   hCCpi0inFV_stack_6->SetBinError(10,0.4263531);
   hCCpi0inFV_stack_6->SetBinError(11,0.2052184);
   hCCpi0inFV_stack_6->SetBinError(12,0.2387289);
   hCCpi0inFV_stack_6->SetBinError(13,0.1889053);
   hCCpi0inFV_stack_6->SetBinError(14,0.2086263);
   hCCpi0inFV_stack_6->SetBinError(15,0.1658926);
   hCCpi0inFV_stack_6->SetBinError(16,0.1414417);
   hCCpi0inFV_stack_6->SetBinError(17,0.1338909);
   hCCpi0inFV_stack_6->SetBinError(18,0.1425864);
   hCCpi0inFV_stack_6->SetBinError(19,0.1252177);
   hCCpi0inFV_stack_6->SetBinError(20,0.1806136);
   hCCpi0inFV_stack_6->SetBinError(21,0.1102997);
   hCCpi0inFV_stack_6->SetBinError(22,0.08854226);
   hCCpi0inFV_stack_6->SetBinError(23,0.1080662);
   hCCpi0inFV_stack_6->SetBinError(24,0.1402876);
   hCCpi0inFV_stack_6->SetBinError(25,0.1177154);
   hCCpi0inFV_stack_6->SetBinError(26,0.404224);
   hCCpi0inFV_stack_6->SetEntries(1977);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_7->SetBinContent(0,1.679999);
   hNCinFV_stack_7->SetBinContent(1,0.9839345);
   hNCinFV_stack_7->SetBinContent(2,2.95917);
   hNCinFV_stack_7->SetBinContent(3,3.596867);
   hNCinFV_stack_7->SetBinContent(4,2.991849);
   hNCinFV_stack_7->SetBinContent(5,2.576476);
   hNCinFV_stack_7->SetBinContent(6,1.344717);
   hNCinFV_stack_7->SetBinContent(7,1.319216);
   hNCinFV_stack_7->SetBinContent(8,1.047686);
   hNCinFV_stack_7->SetBinContent(9,0.6486527);
   hNCinFV_stack_7->SetBinContent(10,0.796271);
   hNCinFV_stack_7->SetBinContent(11,0.4864895);
   hNCinFV_stack_7->SetBinContent(12,0.2988259);
   hNCinFV_stack_7->SetBinContent(13,0.2368697);
   hNCinFV_stack_7->SetBinContent(14,0.3115761);
   hNCinFV_stack_7->SetBinContent(15,0.1876636);
   hNCinFV_stack_7->SetBinContent(16,0.4099883);
   hNCinFV_stack_7->SetBinContent(17,0.06375098);
   hNCinFV_stack_7->SetBinContent(18,0.2733256);
   hNCinFV_stack_7->SetBinContent(19,0.07470649);
   hNCinFV_stack_7->SetBinContent(20,0.433694);
   hNCinFV_stack_7->SetBinContent(21,0.2113693);
   hNCinFV_stack_7->SetBinContent(22,0.1366628);
   hNCinFV_stack_7->SetBinContent(23,0.0127502);
   hNCinFV_stack_7->SetBinContent(24,0.07470649);
   hNCinFV_stack_7->SetBinContent(25,0.07470649);
   hNCinFV_stack_7->SetBinContent(26,1.683588);
   hNCinFV_stack_7->SetBinError(0,0.3025537);
   hNCinFV_stack_7->SetBinError(1,0.228424);
   hNCinFV_stack_7->SetBinError(2,0.4071515);
   hNCinFV_stack_7->SetBinError(3,0.4418637);
   hNCinFV_stack_7->SetBinError(4,0.3924213);
   hNCinFV_stack_7->SetBinError(5,0.3735673);
   hNCinFV_stack_7->SetBinError(6,0.2683667);
   hNCinFV_stack_7->SetBinError(7,0.2677603);
   hNCinFV_stack_7->SetBinError(8,0.2301963);
   hNCinFV_stack_7->SetBinError(9,0.1807193);
   hNCinFV_stack_7->SetBinError(10,0.2090156);
   hNCinFV_stack_7->SetBinError(11,0.1565075);
   hNCinFV_stack_7->SetBinError(12,0.1265093);
   hNCinFV_stack_7->SetBinError(13,0.1102997);
   hNCinFV_stack_7->SetBinError(14,0.1271502);
   hNCinFV_stack_7->SetBinError(15,0.0921412);
   hNCinFV_stack_7->SetBinError(16,0.1533597);
   hNCinFV_stack_7->SetBinError(17,0.0285103);
   hNCinFV_stack_7->SetBinError(18,0.1252177);
   hNCinFV_stack_7->SetBinError(19,0.06325464);
   hNCinFV_stack_7->SetBinError(20,0.1639209);
   hNCinFV_stack_7->SetBinError(21,0.1088158);
   hNCinFV_stack_7->SetBinError(22,0.08854226);
   hNCinFV_stack_7->SetBinError(23,0.0127502);
   hNCinFV_stack_7->SetBinError(24,0.06325464);
   hNCinFV_stack_7->SetBinError(25,0.06325464);
   hNCinFV_stack_7->SetBinError(26,0.292382);
   hNCinFV_stack_7->SetEntries(669);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(0,0.8842041);
   hnumuCCinFV_stack_8->SetBinContent(1,0.5053295);
   hnumuCCinFV_stack_8->SetBinContent(2,2.492927);
   hnumuCCinFV_stack_8->SetBinContent(3,3.211308);
   hnumuCCinFV_stack_8->SetBinContent(4,4.818476);
   hnumuCCinFV_stack_8->SetBinContent(5,3.522785);
   hnumuCCinFV_stack_8->SetBinContent(6,2.21737);
   hnumuCCinFV_stack_8->SetBinContent(7,2.322344);
   hnumuCCinFV_stack_8->SetBinContent(8,2.00499);
   hnumuCCinFV_stack_8->SetBinContent(9,1.610083);
   hnumuCCinFV_stack_8->SetBinContent(10,1.245101);
   hnumuCCinFV_stack_8->SetBinContent(11,0.482547);
   hnumuCCinFV_stack_8->SetBinContent(12,0.7661251);
   hnumuCCinFV_stack_8->SetBinContent(13,0.915162);
   hnumuCCinFV_stack_8->SetBinContent(14,0.5682738);
   hnumuCCinFV_stack_8->SetBinContent(15,0.224856);
   hnumuCCinFV_stack_8->SetBinContent(16,0.3023619);
   hnumuCCinFV_stack_8->SetBinContent(17,0.3078483);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1562656);
   hnumuCCinFV_stack_8->SetBinContent(19,0.3616937);
   hnumuCCinFV_stack_8->SetBinContent(20,0.1845222);
   hnumuCCinFV_stack_8->SetBinContent(21,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1406704);
   hnumuCCinFV_stack_8->SetBinContent(23,0.02805466);
   hnumuCCinFV_stack_8->SetBinContent(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(25,0.1033449);
   hnumuCCinFV_stack_8->SetBinContent(26,2.58142);
   hnumuCCinFV_stack_8->SetBinError(0,0.2165192);
   hnumuCCinFV_stack_8->SetBinError(1,0.1625537);
   hnumuCCinFV_stack_8->SetBinError(2,0.4099063);
   hnumuCCinFV_stack_8->SetBinError(3,0.4368171);
   hnumuCCinFV_stack_8->SetBinError(4,0.8203492);
   hnumuCCinFV_stack_8->SetBinError(5,0.5819737);
   hnumuCCinFV_stack_8->SetBinError(6,0.3515784);
   hnumuCCinFV_stack_8->SetBinError(7,0.5205246);
   hnumuCCinFV_stack_8->SetBinError(8,0.3505659);
   hnumuCCinFV_stack_8->SetBinError(9,0.3446789);
   hnumuCCinFV_stack_8->SetBinError(10,0.2862715);
   hnumuCCinFV_stack_8->SetBinError(11,0.1653671);
   hnumuCCinFV_stack_8->SetBinError(12,0.4407391);
   hnumuCCinFV_stack_8->SetBinError(13,0.2884918);
   hnumuCCinFV_stack_8->SetBinError(14,0.1922225);
   hnumuCCinFV_stack_8->SetBinError(15,0.1071692);
   hnumuCCinFV_stack_8->SetBinError(16,0.1557202);
   hnumuCCinFV_stack_8->SetBinError(17,0.1434085);
   hnumuCCinFV_stack_8->SetBinError(18,0.1010577);
   hnumuCCinFV_stack_8->SetBinError(19,0.1553795);
   hnumuCCinFV_stack_8->SetBinError(20,0.1123541);
   hnumuCCinFV_stack_8->SetBinError(21,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(22,0.07626833);
   hnumuCCinFV_stack_8->SetBinError(23,0.01991967);
   hnumuCCinFV_stack_8->SetBinError(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(25,0.06645414);
   hnumuCCinFV_stack_8->SetBinError(26,0.4783566);
   hnumuCCinFV_stack_8->SetEntries(755);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_9->SetBinContent(0,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(1,0.1679476);
   hnueCCinFV_stack_9->SetBinContent(2,0.2589819);
   hnueCCinFV_stack_9->SetBinContent(3,0.2693988);
   hnueCCinFV_stack_9->SetBinContent(4,0.1575884);
   hnueCCinFV_stack_9->SetBinContent(5,0.08999486);
   hnueCCinFV_stack_9->SetBinContent(6,0.04773518);
   hnueCCinFV_stack_9->SetBinContent(7,0.149413);
   hnueCCinFV_stack_9->SetBinContent(8,0.07786438);
   hnueCCinFV_stack_9->SetBinContent(9,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(11,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(12,0.09275431);
   hnueCCinFV_stack_9->SetBinContent(13,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(14,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(17,0.01342897);
   hnueCCinFV_stack_9->SetBinContent(18,0.01753742);
   hnueCCinFV_stack_9->SetBinContent(20,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(24,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(25,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(26,0.9203697);
   hnueCCinFV_stack_9->SetBinError(0,0.08761943);
   hnueCCinFV_stack_9->SetBinError(1,0.09645693);
   hnueCCinFV_stack_9->SetBinError(2,0.1232263);
   hnueCCinFV_stack_9->SetBinError(3,0.137963);
   hnueCCinFV_stack_9->SetBinError(4,0.090838);
   hnueCCinFV_stack_9->SetBinError(5,0.06507599);
   hnueCCinFV_stack_9->SetBinError(6,0.04773518);
   hnueCCinFV_stack_9->SetBinError(7,0.08945557);
   hnueCCinFV_stack_9->SetBinError(8,0.063966);
   hnueCCinFV_stack_9->SetBinError(9,0.06325464);
   hnueCCinFV_stack_9->SetBinError(11,0.08761943);
   hnueCCinFV_stack_9->SetBinError(12,0.08101374);
   hnueCCinFV_stack_9->SetBinError(13,0.06325464);
   hnueCCinFV_stack_9->SetBinError(14,0.0127502);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.08761943);
   hnueCCinFV_stack_9->SetBinError(17,0.01342897);
   hnueCCinFV_stack_9->SetBinError(18,0.01753742);
   hnueCCinFV_stack_9->SetBinError(20,0.06452687);
   hnueCCinFV_stack_9->SetBinError(24,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.06195629);
   hnueCCinFV_stack_9->SetBinError(26,0.4902772);
   hnueCCinFV_stack_9->SetEntries(72);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(0,21.43321);
   hmcerror__2->SetBinContent(1,19.71607);
   hmcerror__2->SetBinContent(2,56.63172);
   hmcerror__2->SetBinContent(3,75.4198);
   hmcerror__2->SetBinContent(4,68.86806);
   hmcerror__2->SetBinContent(5,54.81273);
   hmcerror__2->SetBinContent(6,43.4897);
   hmcerror__2->SetBinContent(7,33.49451);
   hmcerror__2->SetBinContent(8,26.26861);
   hmcerror__2->SetBinContent(9,21.09561);
   hmcerror__2->SetBinContent(10,16.04413);
   hmcerror__2->SetBinContent(11,9.310494);
   hmcerror__2->SetBinContent(12,7.457527);
   hmcerror__2->SetBinContent(13,6.029018);
   hmcerror__2->SetBinContent(14,5.69148);
   hmcerror__2->SetBinContent(15,4.575036);
   hmcerror__2->SetBinContent(16,3.147944);
   hmcerror__2->SetBinContent(17,3.024545);
   hmcerror__2->SetBinContent(18,2.551003);
   hmcerror__2->SetBinContent(19,2.724746);
   hmcerror__2->SetBinContent(20,2.494865);
   hmcerror__2->SetBinContent(21,1.692268);
   hmcerror__2->SetBinContent(22,1.757728);
   hmcerror__2->SetBinContent(23,1.466069);
   hmcerror__2->SetBinContent(24,0.970704);
   hmcerror__2->SetBinContent(25,1.064902);
   hmcerror__2->SetBinContent(26,22.4231);
   hmcerror__2->SetBinError(0,1.146848);
   hmcerror__2->SetBinError(1,6.142077);
   hmcerror__2->SetBinError(2,12.47005);
   hmcerror__2->SetBinError(3,16.94123);
   hmcerror__2->SetBinError(4,17.02653);
   hmcerror__2->SetBinError(5,13.33286);
   hmcerror__2->SetBinError(6,11.08372);
   hmcerror__2->SetBinError(7,9.352907);
   hmcerror__2->SetBinError(8,7.512806);
   hmcerror__2->SetBinError(9,5.395343);
   hmcerror__2->SetBinError(10,5.094986);
   hmcerror__2->SetBinError(11,3.596645);
   hmcerror__2->SetBinError(12,4.375464);
   hmcerror__2->SetBinError(13,2.245609);
   hmcerror__2->SetBinError(14,2.855041);
   hmcerror__2->SetBinError(15,2.731011);
   hmcerror__2->SetBinError(16,1.798247);
   hmcerror__2->SetBinError(17,1.955489);
   hmcerror__2->SetBinError(18,2.146683);
   hmcerror__2->SetBinError(19,1.609603);
   hmcerror__2->SetBinError(20,1.953687);
   hmcerror__2->SetBinError(21,1.369131);
   hmcerror__2->SetBinError(22,1.219263);
   hmcerror__2->SetBinError(23,1.089771);
   hmcerror__2->SetBinError(24,0.793107);
   hmcerror__2->SetBinError(25,1.009179);
   hmcerror__2->SetBinError(26,7.692905);
   hmcerror__2->SetEntries(507.336);

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
   Double_t _fy3001[25] = {
   16,
   41,
   61,
   49,
   40,
   43,
   28,
   16,
   16,
   12,
   13,
   11,
   4,
   6,
   4,
   4,
   2,
   0,
   0,
   2,
   2,
   3,
   1,
   1,
   0};
   Double_t _felx3001[25] = {
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
   Double_t _fely3001[25] = {
   4.1628,
   6.5384,
   7.9383,
   7.1318,
   6.4604,
   6.6917,
   5.4358,
   4.1628,
   4.1628,
   3.64022,
   3.77763,
   3.4975,
   2.29683,
   2.67925,
   2.29683,
   2.29683,
   2,
   0,
   0,
   2,
   2,
   2.143368,
   1,
   1,
   0};
   Double_t _fehx3001[25] = {
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
   Double_t _fehy3001[25] = {
   3.9454,
   6.3331,
   7.7354,
   6.9277,
   6.2549,
   6.4868,
   5.2271,
   3.9454,
   3.9454,
   3.4155,
   3.5552,
   3.27,
   1.98186,
   2.41858,
   1.98186,
   1.98186,
   1.51917,
   1.1478,
   1.1478,
   1.51917,
   1.51917,
   1.72422,
   1.35971,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(75.60894);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.80#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.32/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 375.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 27.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 33.2","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  272.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 71.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 21.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 28.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_10_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
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
   Double_t _fely3002[25] = {
   0.3115265,
   0.2201955,
   0.2246257,
   0.247234,
   0.2432439,
   0.2548586,
   0.279237,
   0.2859993,
   0.2557566,
   0.3175608,
   0.3863001,
   0.5867178,
   0.3724667,
   0.5016341,
   0.5969376,
   0.5712447,
   0.6465398,
   0.8415053,
   0.5907352,
   0.7830833,
   0.8090508,
   0.6936588,
   0.7433284,
   0.8170431,
   0.9476729};
   Double_t _fehx3002[25] = {
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
   Double_t _fehy3002[25] = {
   0.3115265,
   0.2201955,
   0.2246257,
   0.247234,
   0.2432439,
   0.2548586,
   0.279237,
   0.2859993,
   0.2557566,
   0.3175608,
   0.3863001,
   0.5867178,
   0.3724667,
   0.5016341,
   0.5969376,
   0.5712447,
   0.6465398,
   0.8415053,
   0.5907352,
   0.7830833,
   0.8090508,
   0.6936588,
   0.7433284,
   0.8170431,
   0.9476729};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   Double_t _fely3003[25] = {
   0.1848604,
   0.1856773,
   0.2055991,
   0.2254288,
   0.2250649,
   0.2251701,
   0.2276392,
   0.2170416,
   0.1935989,
   0.2073763,
   0.1990112,
   0.2287553,
   0.2091277,
   0.2171908,
   0.2310728,
   0.2657637,
   0.2540683,
   0.3001727,
   0.2319571,
   0.2915341,
   0.3041328,
   0.2919015,
   0.3258608,
   0.3739253,
   0.4083409};
   Double_t _fehx3003[25] = {
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
   Double_t _fehy3003[25] = {
   0.1848604,
   0.1856773,
   0.2055991,
   0.2254288,
   0.2250649,
   0.2251701,
   0.2276392,
   0.2170416,
   0.1935989,
   0.2073763,
   0.1990112,
   0.2287553,
   0.2091277,
   0.2171908,
   0.2310728,
   0.2657637,
   0.2540683,
   0.3001727,
   0.2319571,
   0.2915341,
   0.3041328,
   0.2919015,
   0.3258608,
   0.3739253,
   0.4083409};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3004[25] = {
   0.8115209,
   0.7239759,
   0.8088062,
   0.7115054,
   0.7297576,
   0.9887398,
   0.8359578,
   0.6090919,
   0.7584516,
   0.7479372,
   1.396274,
   1.47502,
   0.663458,
   1.054207,
   0.8743101,
   1.27067,
   0.6612564,
   0,
   0,
   0.8016467,
   1.181846,
   1.706749,
   0.6820959,
   1.03018,
   0};
   Double_t _felx3004[25] = {
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
   Double_t _fely3004[25] = {
   0.2111375,
   0.1154547,
   0.1052549,
   0.1035574,
   0.1178631,
   0.1538686,
   0.1622893,
   0.1584705,
   0.1973301,
   0.226888,
   0.4057389,
   0.4689892,
   0.3809625,
   0.4707475,
   0.5020354,
   0.7296285,
   0.6612564,
   0,
   0,
   0.8016467,
   1.181846,
   1.219397,
   0.6820959,
   1.03018,
   0};
   Double_t _fehx3004[25] = {
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
   Double_t _fehy3004[25] = {
   0.2001109,
   0.1118296,
   0.1025646,
   0.1005938,
   0.114114,
   0.1491571,
   0.1560584,
   0.1501945,
   0.1870247,
   0.2128816,
   0.3818487,
   0.4384831,
   0.3287202,
   0.4249475,
   0.4331901,
   0.6295727,
   0.5022804,
   0.4499406,
   0.4212503,
   0.6089188,
   0.8977122,
   0.980937,
   0.9274526,
   1.400746,
   1.077845};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.956455);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_bnb_10_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
