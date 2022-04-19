#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Apr 18 17:24:01 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",242,172,1200,900);
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
   pad1->Range(-46.15385,-0.5316131,338.4615,44.7954);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hmc__4->SetBinContent(0,11.4385);
   hmc__4->SetBinContent(2,6.512232);
   hmc__4->SetBinContent(3,7.91643);
   hmc__4->SetBinContent(4,6.998972);
   hmc__4->SetBinContent(5,6.450711);
   hmc__4->SetBinContent(6,7.032429);
   hmc__4->SetBinContent(7,10.7712);
   hmc__4->SetBinContent(8,9.438726);
   hmc__4->SetBinContent(9,10.7651);
   hmc__4->SetBinContent(10,14.13486);
   hmc__4->SetBinContent(11,19.15099);
   hmc__4->SetBinContent(12,20.97361);
   hmc__4->SetBinContent(13,26.58065);
   hmc__4->SetBinContent(14,25.91074);
   hmc__4->SetBinContent(15,21.45207);
   hmc__4->SetBinContent(16,10.07073);
   hmc__4->SetBinContent(17,5.389242);
   hmc__4->SetBinContent(18,3.656852);
   hmc__4->SetBinContent(19,2.732249);
   hmc__4->SetBinContent(20,1.732075);
   hmc__4->SetBinContent(21,1.348879);
   hmc__4->SetBinContent(22,1.728831);
   hmc__4->SetBinContent(23,1.528718);
   hmc__4->SetBinContent(24,1.568836);
   hmc__4->SetBinContent(25,1.299845);
   hmc__4->SetBinContent(26,0.7957907);
   hmc__4->SetBinContent(27,1.318625);
   hmc__4->SetBinContent(28,0.796271);
   hmc__4->SetBinContent(29,0.6855386);
   hmc__4->SetBinContent(30,8.114818);
   hmc__4->SetBinError(0,0.8598824);
   hmc__4->SetBinError(1,0.125509);
   hmc__4->SetBinError(2,2.643442);
   hmc__4->SetBinError(3,3.573666);
   hmc__4->SetBinError(4,3.095823);
   hmc__4->SetBinError(5,2.463949);
   hmc__4->SetBinError(6,2.688069);
   hmc__4->SetBinError(7,6.414421);
   hmc__4->SetBinError(8,4.490582);
   hmc__4->SetBinError(9,4.834803);
   hmc__4->SetBinError(10,4.216697);
   hmc__4->SetBinError(11,6.525357);
   hmc__4->SetBinError(12,6.703114);
   hmc__4->SetBinError(13,8.423832);
   hmc__4->SetBinError(14,7.543624);
   hmc__4->SetBinError(15,12.89519);
   hmc__4->SetBinError(16,6.927976);
   hmc__4->SetBinError(17,4.064244);
   hmc__4->SetBinError(18,2.5942);
   hmc__4->SetBinError(19,1.569397);
   hmc__4->SetBinError(20,1.085226);
   hmc__4->SetBinError(21,0.9213351);
   hmc__4->SetBinError(22,2.365259);
   hmc__4->SetBinError(23,2.117904);
   hmc__4->SetBinError(24,1.396195);
   hmc__4->SetBinError(25,1.608273);
   hmc__4->SetBinError(26,0.9451562);
   hmc__4->SetBinError(27,1.367742);
   hmc__4->SetBinError(28,0.8748244);
   hmc__4->SetBinError(29,0.5953711);
   hmc__4->SetBinError(30,3.602075);
   hmc__4->SetMinimum(-0.5316131);
   hmc__4->SetMaximum(42.52905);
   hmc__4->SetEntries(244.8988);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",29,0,300);
   hs2_stack_2->SetMinimum(-6.202043e-09);
   hs2_stack_2->SetMaximum(27.90969);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,0.2648409);
   hbadmatch_stack_1->SetBinContent(2,0.1801276);
   hbadmatch_stack_1->SetBinContent(3,0.1749134);
   hbadmatch_stack_1->SetBinContent(4,0.2283721);
   hbadmatch_stack_1->SetBinContent(5,0.2388276);
   hbadmatch_stack_1->SetBinContent(6,0.0127502);
   hbadmatch_stack_1->SetBinContent(7,0.1189334);
   hbadmatch_stack_1->SetBinContent(8,0.322539);
   hbadmatch_stack_1->SetBinContent(9,0.2655816);
   hbadmatch_stack_1->SetBinContent(10,0.3718626);
   hbadmatch_stack_1->SetBinContent(11,0.06195629);
   hbadmatch_stack_1->SetBinContent(12,0.5335001);
   hbadmatch_stack_1->SetBinContent(13,0.2165853);
   hbadmatch_stack_1->SetBinContent(14,0.1621632);
   hbadmatch_stack_1->SetBinContent(15,0.4426755);
   hbadmatch_stack_1->SetBinContent(16,0.1099809);
   hbadmatch_stack_1->SetBinContent(17,0.02550039);
   hbadmatch_stack_1->SetBinContent(18,0.0486765);
   hbadmatch_stack_1->SetBinContent(19,0.0127502);
   hbadmatch_stack_1->SetBinContent(21,0.06212959);
   hbadmatch_stack_1->SetBinContent(23,0.02550039);
   hbadmatch_stack_1->SetBinContent(24,0.06195629);
   hbadmatch_stack_1->SetBinContent(26,0.02550039);
   hbadmatch_stack_1->SetBinContent(27,0.07470649);
   hbadmatch_stack_1->SetBinContent(28,0.06195629);
   hbadmatch_stack_1->SetBinContent(29,0.06195629);
   hbadmatch_stack_1->SetBinContent(30,0.02550039);
   hbadmatch_stack_1->SetBinError(0,0.1162044);
   hbadmatch_stack_1->SetBinError(2,0.1035066);
   hbadmatch_stack_1->SetBinError(3,0.09125478);
   hbadmatch_stack_1->SetBinError(4,0.1249819);
   hbadmatch_stack_1->SetBinError(5,0.1234662);
   hbadmatch_stack_1->SetBinError(6,0.0127502);
   hbadmatch_stack_1->SetBinError(7,0.06828658);
   hbadmatch_stack_1->SetBinError(8,0.139124);
   hbadmatch_stack_1->SetBinError(9,0.1121756);
   hbadmatch_stack_1->SetBinError(10,0.1448913);
   hbadmatch_stack_1->SetBinError(11,0.06195629);
   hbadmatch_stack_1->SetBinError(12,0.1821367);
   hbadmatch_stack_1->SetBinError(13,0.1010075);
   hbadmatch_stack_1->SetBinError(14,0.09035965);
   hbadmatch_stack_1->SetBinError(15,0.361032);
   hbadmatch_stack_1->SetBinError(16,0.07505288);
   hbadmatch_stack_1->SetBinError(17,0.0180315);
   hbadmatch_stack_1->SetBinError(18,0.0286658);
   hbadmatch_stack_1->SetBinError(19,0.0127502);
   hbadmatch_stack_1->SetBinError(21,0.06195653);
   hbadmatch_stack_1->SetBinError(23,0.0180315);
   hbadmatch_stack_1->SetBinError(24,0.06195629);
   hbadmatch_stack_1->SetBinError(26,0.0180315);
   hbadmatch_stack_1->SetBinError(27,0.06325464);
   hbadmatch_stack_1->SetBinError(28,0.06195629);
   hbadmatch_stack_1->SetBinError(29,0.06195629);
   hbadmatch_stack_1->SetBinError(30,0.0180315);
   hbadmatch_stack_1->SetEntries(114);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,0.9679743);
   hext_stack_2->SetBinContent(2,0.7321157);
   hext_stack_2->SetBinContent(3,0.9679743);
   hext_stack_2->SetBinContent(4,0.2972079);
   hext_stack_2->SetBinContent(5,0.2849381);
   hext_stack_2->SetBinContent(6,0.5207967);
   hext_stack_2->SetBinContent(7,0.8698155);
   hext_stack_2->SetBinContent(8,0.2849381);
   hext_stack_2->SetBinContent(9,0.6584966);
   hext_stack_2->SetBinContent(10,0.6953062);
   hext_stack_2->SetBinContent(11,1.191563);
   hext_stack_2->SetBinContent(12,0.496257);
   hext_stack_2->SetBinContent(13,0.8698155);
   hext_stack_2->SetBinContent(14,1.167023);
   hext_stack_2->SetBinContent(15,1.97549);
   hext_stack_2->SetBinContent(16,0.2726682);
   hext_stack_2->SetBinContent(17,0.4349078);
   hext_stack_2->SetBinContent(18,0.03680956);
   hext_stack_2->SetBinContent(20,0.01226985);
   hext_stack_2->SetBinContent(21,0.02453971);
   hext_stack_2->SetBinContent(26,0.01226985);
   hext_stack_2->SetBinContent(29,0.1990491);
   hext_stack_2->SetBinContent(30,0.04907941);
   hext_stack_2->SetBinError(0,0.4007367);
   hext_stack_2->SetBinError(2,0.3471566);
   hext_stack_2->SetBinError(3,0.4007367);
   hext_stack_2->SetBinError(4,0.2020518);
   hext_stack_2->SetBinError(5,0.2016789);
   hext_stack_2->SetBinError(6,0.2841594);
   hext_stack_2->SetBinError(7,0.3992311);
   hext_stack_2->SetBinError(8,0.2016789);
   hext_stack_2->SetBinError(9,0.3458531);
   hext_stack_2->SetBinError(10,0.3465055);
   hext_stack_2->SetBinError(11,0.4477851);
   hext_stack_2->SetBinError(12,0.2836291);
   hext_stack_2->SetBinError(13,0.3992311);
   hext_stack_2->SetBinError(14,0.4474488);
   hext_stack_2->SetBinError(15,0.5990352);
   hext_stack_2->SetBinError(16,0.2013053);
   hext_stack_2->SetBinError(17,0.282299);
   hext_stack_2->SetBinError(18,0.02125201);
   hext_stack_2->SetBinError(20,0.01226985);
   hext_stack_2->SetBinError(21,0.01735219);
   hext_stack_2->SetBinError(26,0.01226985);
   hext_stack_2->SetBinError(29,0.1990491);
   hext_stack_2->SetBinError(30,0.0245397);
   hext_stack_2->SetEntries(224);

   ci = 1444;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,0.1477129);
   hdirt_stack_3->SetBinContent(2,0.04420907);
   hdirt_stack_3->SetBinContent(3,0.05301795);
   hdirt_stack_3->SetBinContent(4,0.09550109);
   hdirt_stack_3->SetBinContent(5,0.07863373);
   hdirt_stack_3->SetBinContent(6,0.1135372);
   hdirt_stack_3->SetBinContent(7,0.06886792);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.04420907);
   hdirt_stack_3->SetBinContent(12,0.4228784);
   hdirt_stack_3->SetBinContent(13,0.02465885);
   hdirt_stack_3->SetBinContent(14,0.07920298);
   hdirt_stack_3->SetBinContent(15,0.05242869);
   hdirt_stack_3->SetBinContent(20,0.009448108);
   hdirt_stack_3->SetBinContent(30,0.04420907);
   hdirt_stack_3->SetBinError(0,0.08114875);
   hdirt_stack_3->SetBinError(2,0.04420907);
   hdirt_stack_3->SetBinError(3,0.05292208);
   hdirt_stack_3->SetBinError(4,0.06771495);
   hdirt_stack_3->SetBinError(5,0.05329071);
   hdirt_stack_3->SetBinError(6,0.06990567);
   hdirt_stack_3->SetBinError(7,0.04644489);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.04420907);
   hdirt_stack_3->SetBinError(12,0.3066562);
   hdirt_stack_3->SetBinError(13,0.0142368);
   hdirt_stack_3->SetBinError(14,0.04915495);
   hdirt_stack_3->SetBinError(15,0.0449667);
   hdirt_stack_3->SetBinError(20,0.009448109);
   hdirt_stack_3->SetBinError(30,0.04420907);
   hdirt_stack_3->SetEntries(43);

   ci = 1445;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,0.5866964);
   houtFV_stack_4->SetBinContent(2,0.4354887);
   houtFV_stack_4->SetBinContent(3,0.6374605);
   houtFV_stack_4->SetBinContent(4,0.3115761);
   houtFV_stack_4->SetBinContent(5,0.2113693);
   houtFV_stack_4->SetBinContent(6,0.5813833);
   houtFV_stack_4->SetBinContent(7,0.646858);
   houtFV_stack_4->SetBinContent(8,0.2658547);
   houtFV_stack_4->SetBinContent(9,0.4974759);
   houtFV_stack_4->SetBinContent(10,0.3455728);
   houtFV_stack_4->SetBinContent(11,0.6390514);
   houtFV_stack_4->SetBinContent(12,0.5101952);
   houtFV_stack_4->SetBinContent(13,0.960512);
   houtFV_stack_4->SetBinContent(14,0.6529478);
   houtFV_stack_4->SetBinContent(15,0.57895);
   houtFV_stack_4->SetBinContent(16,0.3972381);
   houtFV_stack_4->SetBinContent(17,0.2478252);
   houtFV_stack_4->SetBinContent(18,0.06195629);
   houtFV_stack_4->SetBinContent(20,0.0127502);
   houtFV_stack_4->SetBinContent(21,0.1380235);
   houtFV_stack_4->SetBinContent(22,0.06195629);
   houtFV_stack_4->SetBinContent(27,0.1239126);
   houtFV_stack_4->SetBinContent(28,0.06195629);
   houtFV_stack_4->SetBinContent(29,0.0127502);
   houtFV_stack_4->SetBinContent(30,0.08745668);
   houtFV_stack_4->SetBinError(0,0.1697671);
   houtFV_stack_4->SetBinError(2,0.1544161);
   houtFV_stack_4->SetBinError(3,0.1803859);
   houtFV_stack_4->SetBinError(4,0.1271502);
   houtFV_stack_4->SetBinError(5,0.1088158);
   houtFV_stack_4->SetBinError(6,0.1856186);
   houtFV_stack_4->SetBinError(7,0.1889053);
   houtFV_stack_4->SetBinError(8,0.1122148);
   houtFV_stack_4->SetBinError(9,0.1710773);
   houtFV_stack_4->SetBinError(10,0.1436827);
   houtFV_stack_4->SetBinError(11,0.1945909);
   houtFV_stack_4->SetBinError(12,0.1668696);
   houtFV_stack_4->SetBinError(13,0.2345035);
   houtFV_stack_4->SetBinError(14,0.1944723);
   houtFV_stack_4->SetBinError(15,0.1744722);
   houtFV_stack_4->SetBinError(16,0.1528288);
   houtFV_stack_4->SetBinError(17,0.1239126);
   houtFV_stack_4->SetBinError(18,0.06195629);
   houtFV_stack_4->SetBinError(20,0.0127502);
   houtFV_stack_4->SetBinError(21,0.0981061);
   houtFV_stack_4->SetBinError(22,0.06195629);
   houtFV_stack_4->SetBinError(27,0.08761943);
   houtFV_stack_4->SetBinError(28,0.06195629);
   houtFV_stack_4->SetBinError(29,0.0127502);
   houtFV_stack_4->SetBinError(30,0.06452687);
   houtFV_stack_4->SetEntries(224);

   ci = 1446;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hNCpi0inFV_stack_5->SetBinContent(0,5.759766);
   hNCpi0inFV_stack_5->SetBinContent(2,2.266695);
   hNCpi0inFV_stack_5->SetBinContent(3,3.053805);
   hNCpi0inFV_stack_5->SetBinContent(4,3.469365);
   hNCpi0inFV_stack_5->SetBinContent(5,2.694818);
   hNCpi0inFV_stack_5->SetBinContent(6,3.447454);
   hNCpi0inFV_stack_5->SetBinContent(7,5.049157);
   hNCpi0inFV_stack_5->SetBinContent(8,5.205748);
   hNCpi0inFV_stack_5->SetBinContent(9,6.299051);
   hNCpi0inFV_stack_5->SetBinContent(10,8.527877);
   hNCpi0inFV_stack_5->SetBinContent(11,12.05343);
   hNCpi0inFV_stack_5->SetBinContent(12,15.32758);
   hNCpi0inFV_stack_5->SetBinContent(13,19.28343);
   hNCpi0inFV_stack_5->SetBinContent(14,18.62024);
   hNCpi0inFV_stack_5->SetBinContent(15,13.54917);
   hNCpi0inFV_stack_5->SetBinContent(16,6.79829);
   hNCpi0inFV_stack_5->SetBinContent(17,3.274335);
   hNCpi0inFV_stack_5->SetBinContent(18,2.563726);
   hNCpi0inFV_stack_5->SetBinContent(19,1.557881);
   hNCpi0inFV_stack_5->SetBinContent(20,1.096892);
   hNCpi0inFV_stack_5->SetBinContent(21,0.6869032);
   hNCpi0inFV_stack_5->SetBinContent(22,0.7707705);
   hNCpi0inFV_stack_5->SetBinContent(23,0.7523087);
   hNCpi0inFV_stack_5->SetBinContent(24,0.8964778);
   hNCpi0inFV_stack_5->SetBinContent(25,0.6341078);
   hNCpi0inFV_stack_5->SetBinContent(26,0.5958572);
   hNCpi0inFV_stack_5->SetBinContent(27,0.6723584);
   hNCpi0inFV_stack_5->SetBinContent(28,0.3735324);
   hNCpi0inFV_stack_5->SetBinContent(29,0.3607822);
   hNCpi0inFV_stack_5->SetBinContent(30,3.150423);
   hNCpi0inFV_stack_5->SetBinError(0,0.563319);
   hNCpi0inFV_stack_5->SetBinError(2,0.3469288);
   hNCpi0inFV_stack_5->SetBinError(3,0.3972821);
   hNCpi0inFV_stack_5->SetBinError(4,0.4400202);
   hNCpi0inFV_stack_5->SetBinError(5,0.3673747);
   hNCpi0inFV_stack_5->SetBinError(6,0.4327138);
   hNCpi0inFV_stack_5->SetBinError(7,0.5299342);
   hNCpi0inFV_stack_5->SetBinError(8,0.5260509);
   hNCpi0inFV_stack_5->SetBinError(9,0.5826212);
   hNCpi0inFV_stack_5->SetBinError(10,0.6846611);
   hNCpi0inFV_stack_5->SetBinError(11,0.8159982);
   hNCpi0inFV_stack_5->SetBinError(12,0.9057584);
   hNCpi0inFV_stack_5->SetBinError(13,1.019073);
   hNCpi0inFV_stack_5->SetBinError(14,1.004348);
   hNCpi0inFV_stack_5->SetBinError(15,0.8494159);
   hNCpi0inFV_stack_5->SetBinError(16,0.6034108);
   hNCpi0inFV_stack_5->SetBinError(17,0.41939);
   hNCpi0inFV_stack_5->SetBinError(18,0.3733497);
   hNCpi0inFV_stack_5->SetBinError(19,0.2843164);
   hNCpi0inFV_stack_5->SetBinError(20,0.238047);
   hNCpi0inFV_stack_5->SetBinError(21,0.1820636);
   hNCpi0inFV_stack_5->SetBinError(22,0.2082363);
   hNCpi0inFV_stack_5->SetBinError(23,0.1925762);
   hNCpi0inFV_stack_5->SetBinError(24,0.2191205);
   hNCpi0inFV_stack_5->SetBinError(25,0.1884745);
   hNCpi0inFV_stack_5->SetBinError(26,0.1871762);
   hNCpi0inFV_stack_5->SetBinError(27,0.1897639);
   hNCpi0inFV_stack_5->SetBinError(28,0.1414417);
   hNCpi0inFV_stack_5->SetBinError(29,0.1408658);
   hNCpi0inFV_stack_5->SetBinError(30,0.4101352);
   hNCpi0inFV_stack_5->SetEntries(3912);

   ci = 1447;
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
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_6->SetBinContent(0,0.8798991);
   hCCpi0inFV_stack_6->SetBinContent(2,0.6377778);
   hCCpi0inFV_stack_6->SetBinContent(3,0.6034474);
   hCCpi0inFV_stack_6->SetBinContent(4,0.6498459);
   hCCpi0inFV_stack_6->SetBinContent(5,1.121131);
   hCCpi0inFV_stack_6->SetBinContent(6,0.9056386);
   hCCpi0inFV_stack_6->SetBinContent(7,1.579792);
   hCCpi0inFV_stack_6->SetBinContent(8,1.468629);
   hCCpi0inFV_stack_6->SetBinContent(9,1.195732);
   hCCpi0inFV_stack_6->SetBinContent(10,2.325062);
   hCCpi0inFV_stack_6->SetBinContent(11,2.9432);
   hCCpi0inFV_stack_6->SetBinContent(12,2.691228);
   hCCpi0inFV_stack_6->SetBinContent(13,3.719045);
   hCCpi0inFV_stack_6->SetBinContent(14,3.772244);
   hCCpi0inFV_stack_6->SetBinContent(15,3.673119);
   hCCpi0inFV_stack_6->SetBinContent(16,1.670928);
   hCCpi0inFV_stack_6->SetBinContent(17,1.056846);
   hCCpi0inFV_stack_6->SetBinContent(18,0.6596082);
   hCCpi0inFV_stack_6->SetBinContent(19,0.8582273);
   hCCpi0inFV_stack_6->SetBinContent(20,0.3765957);
   hCCpi0inFV_stack_6->SetBinContent(21,0.26237);
   hCCpi0inFV_stack_6->SetBinContent(22,0.5466511);
   hCCpi0inFV_stack_6->SetBinContent(23,0.5101952);
   hCCpi0inFV_stack_6->SetBinContent(24,0.3862826);
   hCCpi0inFV_stack_6->SetBinContent(25,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(26,0.1366628);
   hCCpi0inFV_stack_6->SetBinContent(27,0.3453756);
   hCCpi0inFV_stack_6->SetBinContent(28,0.2241195);
   hCCpi0inFV_stack_6->SetBinContent(29,0.03825059);
   hCCpi0inFV_stack_6->SetBinContent(30,2.390608);
   hCCpi0inFV_stack_6->SetBinError(0,0.2165739);
   hCCpi0inFV_stack_6->SetBinError(2,0.1887583);
   hCCpi0inFV_stack_6->SetBinError(3,0.1705916);
   hCCpi0inFV_stack_6->SetBinError(4,0.1855238);
   hCCpi0inFV_stack_6->SetBinError(5,0.2512126);
   hCCpi0inFV_stack_6->SetBinError(6,0.2328687);
   hCCpi0inFV_stack_6->SetBinError(7,0.2953175);
   hCCpi0inFV_stack_6->SetBinError(8,0.2823081);
   hCCpi0inFV_stack_6->SetBinError(9,0.2529198);
   hCCpi0inFV_stack_6->SetBinError(10,0.3609012);
   hCCpi0inFV_stack_6->SetBinError(11,0.4031166);
   hCCpi0inFV_stack_6->SetBinError(12,0.3755205);
   hCCpi0inFV_stack_6->SetBinError(13,0.457293);
   hCCpi0inFV_stack_6->SetBinError(14,0.4526417);
   hCCpi0inFV_stack_6->SetBinError(15,0.4548604);
   hCCpi0inFV_stack_6->SetBinError(16,0.2948186);
   hCCpi0inFV_stack_6->SetBinError(17,0.2433196);
   hCCpi0inFV_stack_6->SetBinError(18,0.1893351);
   hCCpi0inFV_stack_6->SetBinError(19,0.2180048);
   hCCpi0inFV_stack_6->SetBinError(20,0.1417507);
   hCCpi0inFV_stack_6->SetBinError(21,0.1117638);
   hCCpi0inFV_stack_6->SetBinError(22,0.1770845);
   hCCpi0inFV_stack_6->SetBinError(23,0.1668696);
   hCCpi0inFV_stack_6->SetBinError(24,0.1420152);
   hCCpi0inFV_stack_6->SetBinError(25,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(26,0.08854226);
   hCCpi0inFV_stack_6->SetBinError(27,0.1444669);
   hCCpi0inFV_stack_6->SetBinError(28,0.1095603);
   hCCpi0inFV_stack_6->SetBinError(29,0.02208399);
   hCCpi0inFV_stack_6->SetBinError(30,0.3578223);
   hCCpi0inFV_stack_6->SetEntries(976);

   ci = 1448;
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
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hNCinFV_stack_7->SetBinContent(0,1.284555);
   hNCinFV_stack_7->SetBinContent(2,0.6231523);
   hNCinFV_stack_7->SetBinContent(3,0.8327268);
   hNCinFV_stack_7->SetBinContent(4,0.6359025);
   hNCinFV_stack_7->SetBinContent(5,0.8108159);
   hNCinFV_stack_7->SetBinContent(6,0.4227385);
   hNCinFV_stack_7->SetBinContent(7,0.5849017);
   hNCinFV_stack_7->SetBinContent(8,0.4609891);
   hNCinFV_stack_7->SetBinContent(9,0.497445);
   hNCinFV_stack_7->SetBinContent(10,0.845477);
   hNCinFV_stack_7->SetBinContent(11,0.8072265);
   hNCinFV_stack_7->SetBinContent(12,0.4864895);
   hNCinFV_stack_7->SetBinContent(13,0.6705637);
   hNCinFV_stack_7->SetBinContent(14,0.497445);
   hNCinFV_stack_7->SetBinContent(15,0.5229454);
   hNCinFV_stack_7->SetBinContent(16,0.3990328);
   hNCinFV_stack_7->SetBinContent(17,0.1749134);
   hNCinFV_stack_7->SetBinContent(18,0.1858689);
   hNCinFV_stack_7->SetBinContent(19,0.07470649);
   hNCinFV_stack_7->SetBinContent(20,0.1366628);
   hNCinFV_stack_7->SetBinContent(21,0.07470649);
   hNCinFV_stack_7->SetBinContent(22,0.02550039);
   hNCinFV_stack_7->SetBinContent(23,0.0127502);
   hNCinFV_stack_7->SetBinContent(24,0.1986191);
   hNCinFV_stack_7->SetBinContent(26,0.02550039);
   hNCinFV_stack_7->SetBinContent(27,0.07470649);
   hNCinFV_stack_7->SetBinContent(29,0.0127502);
   hNCinFV_stack_7->SetBinContent(30,1.530586);
   hNCinFV_stack_7->SetBinError(0,0.2552574);
   hNCinFV_stack_7->SetBinError(2,0.1798175);
   hNCinFV_stack_7->SetBinError(3,0.2172578);
   hNCinFV_stack_7->SetBinError(4,0.180269);
   hNCinFV_stack_7->SetBinError(5,0.2020503);
   hNCinFV_stack_7->SetBinError(6,0.1538888);
   hNCinFV_stack_7->SetBinError(7,0.1784562);
   hNCinFV_stack_7->SetBinError(8,0.1554653);
   hNCinFV_stack_7->SetBinError(9,0.1663818);
   hNCinFV_stack_7->SetBinError(10,0.2176316);
   hNCinFV_stack_7->SetBinError(11,0.2165082);
   hNCinFV_stack_7->SetBinError(12,0.1565075);
   hNCinFV_stack_7->SetBinError(13,0.1975755);
   hNCinFV_stack_7->SetBinError(14,0.1663818);
   hNCinFV_stack_7->SetBinError(15,0.167356);
   hNCinFV_stack_7->SetBinError(16,0.1425864);
   hNCinFV_stack_7->SetBinError(17,0.09125478);
   hNCinFV_stack_7->SetBinError(18,0.1073114);
   hNCinFV_stack_7->SetBinError(19,0.06325464);
   hNCinFV_stack_7->SetBinError(20,0.08854226);
   hNCinFV_stack_7->SetBinError(21,0.06325464);
   hNCinFV_stack_7->SetBinError(22,0.0180315);
   hNCinFV_stack_7->SetBinError(23,0.0127502);
   hNCinFV_stack_7->SetBinError(24,0.1080662);
   hNCinFV_stack_7->SetBinError(26,0.0180315);
   hNCinFV_stack_7->SetBinError(27,0.06325464);
   hNCinFV_stack_7->SetBinError(29,0.0127502);
   hNCinFV_stack_7->SetBinError(30,0.2890267);
   hNCinFV_stack_7->SetEntries(341);

   ci = 1449;
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
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_8->SetBinContent(0,1.408549);
   hnumuCCinFV_stack_8->SetBinContent(2,1.579916);
   hnumuCCinFV_stack_8->SetBinContent(3,1.519141);
   hnumuCCinFV_stack_8->SetBinContent(4,1.296823);
   hnumuCCinFV_stack_8->SetBinContent(5,0.9343958);
   hnumuCCinFV_stack_8->SetBinContent(6,1.01538);
   hnumuCCinFV_stack_8->SetBinContent(7,1.852873);
   hnumuCCinFV_stack_8->SetBinContent(8,1.415534);
   hnumuCCinFV_stack_8->SetBinContent(9,1.334881);
   hnumuCCinFV_stack_8->SetBinContent(10,0.9794893);
   hnumuCCinFV_stack_8->SetBinContent(11,1.441804);
   hnumuCCinFV_stack_8->SetBinContent(12,0.4927296);
   hnumuCCinFV_stack_8->SetBinContent(13,0.8360399);
   hnumuCCinFV_stack_8->SetBinContent(14,0.8228152);
   hnumuCCinFV_stack_8->SetBinContent(15,0.5333819);
   hnumuCCinFV_stack_8->SetBinContent(16,0.4098422);
   hnumuCCinFV_stack_8->SetBinContent(17,0.1749134);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1002069);
   hnumuCCinFV_stack_8->SetBinContent(19,0.2286845);
   hnumuCCinFV_stack_8->SetBinContent(20,0.08745668);
   hnumuCCinFV_stack_8->SetBinContent(21,0.03825059);
   hnumuCCinFV_stack_8->SetBinContent(22,0.3239524);
   hnumuCCinFV_stack_8->SetBinContent(23,0.2279632);
   hnumuCCinFV_stack_8->SetBinContent(24,0.02550045);
   hnumuCCinFV_stack_8->SetBinContent(25,0.1792336);
   hnumuCCinFV_stack_8->SetBinContent(27,0.02756554);
   hnumuCCinFV_stack_8->SetBinContent(28,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(30,0.700294);
   hnumuCCinFV_stack_8->SetBinError(0,0.3043342);
   hnumuCCinFV_stack_8->SetBinError(2,0.4479549);
   hnumuCCinFV_stack_8->SetBinError(3,0.4756712);
   hnumuCCinFV_stack_8->SetBinError(4,0.4771051);
   hnumuCCinFV_stack_8->SetBinError(5,0.2387396);
   hnumuCCinFV_stack_8->SetBinError(6,0.2810681);
   hnumuCCinFV_stack_8->SetBinError(7,0.4062169);
   hnumuCCinFV_stack_8->SetBinError(8,0.3049139);
   hnumuCCinFV_stack_8->SetBinError(9,0.2910989);
   hnumuCCinFV_stack_8->SetBinError(10,0.2386611);
   hnumuCCinFV_stack_8->SetBinError(11,0.3370741);
   hnumuCCinFV_stack_8->SetBinError(12,0.1619759);
   hnumuCCinFV_stack_8->SetBinError(13,0.2136203);
   hnumuCCinFV_stack_8->SetBinError(14,0.2080079);
   hnumuCCinFV_stack_8->SetBinError(15,0.1775681);
   hnumuCCinFV_stack_8->SetBinError(16,0.1509295);
   hnumuCCinFV_stack_8->SetBinError(17,0.09125478);
   hnumuCCinFV_stack_8->SetBinError(18,0.0657745);
   hnumuCCinFV_stack_8->SetBinError(19,0.11789);
   hnumuCCinFV_stack_8->SetBinError(20,0.06452687);
   hnumuCCinFV_stack_8->SetBinError(21,0.02208399);
   hnumuCCinFV_stack_8->SetBinError(22,0.1454293);
   hnumuCCinFV_stack_8->SetBinError(23,0.1636505);
   hnumuCCinFV_stack_8->SetBinError(24,0.0180315);
   hnumuCCinFV_stack_8->SetBinError(25,0.1326369);
   hnumuCCinFV_stack_8->SetBinError(27,0.0195464);
   hnumuCCinFV_stack_8->SetBinError(28,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(30,0.1949557);
   hnumuCCinFV_stack_8->SetEntries(471);

   ci = 1450;
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
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_9->SetBinContent(0,0.1385054);
   hnueCCinFV_stack_9->SetBinContent(2,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(3,0.07394372);
   hnueCCinFV_stack_9->SetBinContent(4,0.01437801);
   hnueCCinFV_stack_9->SetBinContent(5,0.07578161);
   hnueCCinFV_stack_9->SetBinContent(6,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(8,0.01449376);
   hnueCCinFV_stack_9->SetBinContent(11,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(12,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(14,0.1366628);
   hnueCCinFV_stack_9->SetBinContent(15,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(21,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(25,0.02551418);
   hnueCCinFV_stack_9->SetBinContent(30,0.1366628);
   hnueCCinFV_stack_9->SetBinError(0,0.08882631);
   hnueCCinFV_stack_9->SetBinError(2,0.0127502);
   hnueCCinFV_stack_9->SetBinError(3,0.06310531);
   hnueCCinFV_stack_9->SetBinError(4,0.01437801);
   hnueCCinFV_stack_9->SetBinError(5,0.06348009);
   hnueCCinFV_stack_9->SetBinError(6,0.0127502);
   hnueCCinFV_stack_9->SetBinError(8,0.01449376);
   hnueCCinFV_stack_9->SetBinError(11,0.0127502);
   hnueCCinFV_stack_9->SetBinError(12,0.0127502);
   hnueCCinFV_stack_9->SetBinError(14,0.08854226);
   hnueCCinFV_stack_9->SetBinError(15,0.08761943);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(21,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.01803151);
   hnueCCinFV_stack_9->SetBinError(30,0.08854226);
   hnueCCinFV_stack_9->SetEntries(26);

   ci = 1451;
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
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);
   hmcerror__5->SetBinContent(0,11.4385);
   hmcerror__5->SetBinContent(2,6.512232);
   hmcerror__5->SetBinContent(3,7.91643);
   hmcerror__5->SetBinContent(4,6.998972);
   hmcerror__5->SetBinContent(5,6.450711);
   hmcerror__5->SetBinContent(6,7.032429);
   hmcerror__5->SetBinContent(7,10.7712);
   hmcerror__5->SetBinContent(8,9.438726);
   hmcerror__5->SetBinContent(9,10.7651);
   hmcerror__5->SetBinContent(10,14.13486);
   hmcerror__5->SetBinContent(11,19.15099);
   hmcerror__5->SetBinContent(12,20.97361);
   hmcerror__5->SetBinContent(13,26.58065);
   hmcerror__5->SetBinContent(14,25.91074);
   hmcerror__5->SetBinContent(15,21.45207);
   hmcerror__5->SetBinContent(16,10.07073);
   hmcerror__5->SetBinContent(17,5.389242);
   hmcerror__5->SetBinContent(18,3.656852);
   hmcerror__5->SetBinContent(19,2.732249);
   hmcerror__5->SetBinContent(20,1.732075);
   hmcerror__5->SetBinContent(21,1.348879);
   hmcerror__5->SetBinContent(22,1.728831);
   hmcerror__5->SetBinContent(23,1.528718);
   hmcerror__5->SetBinContent(24,1.568836);
   hmcerror__5->SetBinContent(25,1.299845);
   hmcerror__5->SetBinContent(26,0.7957907);
   hmcerror__5->SetBinContent(27,1.318625);
   hmcerror__5->SetBinContent(28,0.796271);
   hmcerror__5->SetBinContent(29,0.6855386);
   hmcerror__5->SetBinContent(30,8.114818);
   hmcerror__5->SetBinError(0,0.8598824);
   hmcerror__5->SetBinError(1,0.125509);
   hmcerror__5->SetBinError(2,2.643442);
   hmcerror__5->SetBinError(3,3.573666);
   hmcerror__5->SetBinError(4,3.095823);
   hmcerror__5->SetBinError(5,2.463949);
   hmcerror__5->SetBinError(6,2.688069);
   hmcerror__5->SetBinError(7,6.414421);
   hmcerror__5->SetBinError(8,4.490582);
   hmcerror__5->SetBinError(9,4.834803);
   hmcerror__5->SetBinError(10,4.216697);
   hmcerror__5->SetBinError(11,6.525357);
   hmcerror__5->SetBinError(12,6.703114);
   hmcerror__5->SetBinError(13,8.423832);
   hmcerror__5->SetBinError(14,7.543624);
   hmcerror__5->SetBinError(15,12.89519);
   hmcerror__5->SetBinError(16,6.927976);
   hmcerror__5->SetBinError(17,4.064244);
   hmcerror__5->SetBinError(18,2.5942);
   hmcerror__5->SetBinError(19,1.569397);
   hmcerror__5->SetBinError(20,1.085226);
   hmcerror__5->SetBinError(21,0.9213351);
   hmcerror__5->SetBinError(22,2.365259);
   hmcerror__5->SetBinError(23,2.117904);
   hmcerror__5->SetBinError(24,1.396195);
   hmcerror__5->SetBinError(25,1.608273);
   hmcerror__5->SetBinError(26,0.9451562);
   hmcerror__5->SetBinError(27,1.367742);
   hmcerror__5->SetBinError(28,0.8748244);
   hmcerror__5->SetBinError(29,0.5953711);
   hmcerror__5->SetBinError(30,3.602075);
   hmcerror__5->SetEntries(244.8988);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3005[29] = {
   0,
   4,
   5,
   12,
   8,
   7,
   10,
   5,
   4,
   10,
   6,
   14,
   22,
   19,
   6,
   2,
   1,
   0,
   0,
   1,
   2,
   1,
   2,
   1,
   0,
   0,
   0,
   2,
   0};
   Double_t _felx3005[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3005[29] = {
   0,
   2.29683,
   2.48995,
   3.64022,
   3.0307,
   2.85954,
   3.34883,
   2.48995,
   2.29683,
   3.34883,
   2.67925,
   3.9102,
   4.8417,
   4.5151,
   2.67925,
   2,
   1,
   0,
   0,
   1,
   2,
   1,
   2,
   1,
   0,
   0,
   0,
   2,
   0};
   Double_t _fehx3005[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3005[29] = {
   1.1478,
   1.98186,
   2.21064,
   3.4155,
   2.7896,
   2.61053,
   3.1179,
   2.21064,
   1.98186,
   3.1179,
   2.41858,
   3.6898,
   4.6299,
   4.3011,
   2.41858,
   1.51917,
   1.35971,
   1.1478,
   1.1478,
   1.35971,
   1.51917,
   1.35971,
   1.51917,
   1.35971,
   1.1478,
   1.1478,
   1.1478,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,330);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(29.29289);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.63#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.88/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 144.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 3.9","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.0","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 8.4","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  139.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 34.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 10.1","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 18.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.6","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_10_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3006[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3006[29] = {
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
   1,
   1,
   1,
   1};
   Double_t _felx3006[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3006[29] = {
   0,
   0.4059195,
   0.4514239,
   0.4423254,
   0.3819654,
   0.3822391,
   0.595516,
   0.4757614,
   0.4491181,
   0.2983191,
   0.3407322,
   0.3195976,
   0.3169159,
   0.2911389,
   0.6011161,
   0.6879318,
   0.7541402,
   0.7094078,
   0.5743975,
   0.6265467,
   0.6830374,
   1.368127,
   1.385412,
   0.8899559,
   1.237281,
   1.187694,
   1.037248,
   1.098652,
   0.8684721};
   Double_t _fehx3006[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3006[29] = {
   0,
   0.4059195,
   0.4514239,
   0.4423254,
   0.3819654,
   0.3822391,
   0.595516,
   0.4757614,
   0.4491181,
   0.2983191,
   0.3407322,
   0.3195976,
   0.3169159,
   0.2911389,
   0.6011161,
   0.6879318,
   0.7541402,
   0.7094078,
   0.5743975,
   0.6265467,
   0.6830374,
   1.368127,
   1.385412,
   0.8899559,
   1.237281,
   1.187694,
   1.037248,
   1.098652,
   0.8684721};
   grae = new TGraphAsymmErrors(29,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,330);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} mass [MeV/c^{2}]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3007[29] = {
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
   1,
   1,
   1,
   1};
   Double_t _felx3007[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3007[29] = {
   0,
   0.2299457,
   0.2058759,
   0.2272781,
   0.225826,
   0.2418944,
   0.2151052,
   0.2292608,
   0.2231458,
   0.2270622,
   0.2414482,
   0.2589169,
   0.2420121,
   0.2389538,
   0.2266289,
   0.2441182,
   0.2269545,
   0.2674549,
   0.2906348,
   0.3303751,
   0.3102831,
   0.3512982,
   0.3586439,
   0.3158775,
   0.4268168,
   0.4346771,
   0.3813102,
   0.4301084,
   0.4527027};
   Double_t _fehx3007[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3007[29] = {
   0,
   0.2299457,
   0.2058759,
   0.2272781,
   0.225826,
   0.2418944,
   0.2151052,
   0.2292608,
   0.2231458,
   0.2270622,
   0.2414482,
   0.2589169,
   0.2420121,
   0.2389538,
   0.2266289,
   0.2441182,
   0.2269545,
   0.2674549,
   0.2906348,
   0.3303751,
   0.3102831,
   0.3512982,
   0.3586439,
   0.3158775,
   0.4268168,
   0.4346771,
   0.3813102,
   0.4301084,
   0.4527027};
   grae = new TGraphAsymmErrors(29,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,330);
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
   
   Double_t _fx3008[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3008[29] = {
   10,
   0.6142287,
   0.6315978,
   1.714538,
   1.240173,
   0.9953887,
   0.9284018,
   0.5297325,
   0.371571,
   0.707471,
   0.3132998,
   0.6675056,
   0.8276696,
   0.7332866,
   0.2796933,
   0.1985953,
   0.1855549,
   0,
   0,
   0.5773422,
   1.482712,
   0.5784256,
   1.308286,
   0.6374152,
   0,
   0,
   0,
   2.511708,
   0};
   Double_t _felx3008[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3008[29] = {
   0,
   0.3526948,
   0.3145294,
   0.5201078,
   0.4698242,
   0.406622,
   0.310906,
   0.2638015,
   0.2133589,
   0.23692,
   0.1399014,
   0.1864343,
   0.1821513,
   0.1742559,
   0.1248947,
   0.1985953,
   0.1855549,
   0,
   0,
   0.5773422,
   1.482712,
   0.5784256,
   1.308286,
   0.6374152,
   0,
   0,
   0,
   2.511708,
   0};
   Double_t _fehx3008[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3008[29] = {
   0,
   0.3043288,
   0.2792471,
   0.4880002,
   0.4324485,
   0.3712131,
   0.2894664,
   0.2342096,
   0.1841004,
   0.2205824,
   0.1262901,
   0.1759259,
   0.1741831,
   0.1659968,
   0.1127434,
   0.15085,
   0.2523008,
   0.3138765,
   0.4200935,
   0.785018,
   1.126246,
   0.7864911,
   0.9937545,
   0.8666998,
   0.8830285,
   1.442339,
   0.8704522,
   1.907856,
   1.674304};
   grae = new TGraphAsymmErrors(29,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,330);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_10_pi0_mass_all",29,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
