#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Apr 14 23:57:34 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-46.15385,-1.153986,338.4615,97.2385);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hmc__1->SetBinContent(0,14.20521);
   hmc__1->SetBinContent(2,15.14764);
   hmc__1->SetBinContent(3,19.39899);
   hmc__1->SetBinContent(4,19.19876);
   hmc__1->SetBinContent(5,20.9175);
   hmc__1->SetBinContent(6,23.21285);
   hmc__1->SetBinContent(7,30.03793);
   hmc__1->SetBinContent(8,30.12348);
   hmc__1->SetBinContent(9,28.67269);
   hmc__1->SetBinContent(10,34.4072);
   hmc__1->SetBinContent(11,46.14182);
   hmc__1->SetBinContent(12,48.36393);
   hmc__1->SetBinContent(13,57.6993);
   hmc__1->SetBinContent(14,57.01919);
   hmc__1->SetBinContent(15,46.88092);
   hmc__1->SetBinContent(16,28.93917);
   hmc__1->SetBinContent(17,16.45716);
   hmc__1->SetBinContent(18,12.05118);
   hmc__1->SetBinContent(19,9.447111);
   hmc__1->SetBinContent(20,7.37943);
   hmc__1->SetBinContent(21,5.076755);
   hmc__1->SetBinContent(22,5.456212);
   hmc__1->SetBinContent(23,4.883469);
   hmc__1->SetBinContent(24,5.038425);
   hmc__1->SetBinContent(25,4.555479);
   hmc__1->SetBinContent(26,3.866976);
   hmc__1->SetBinContent(27,3.44216);
   hmc__1->SetBinContent(28,2.249842);
   hmc__1->SetBinContent(29,2.271158);
   hmc__1->SetBinContent(30,28.49587);
   hmc__1->SetBinError(0,1.001684);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,5.500036);
   hmc__1->SetBinError(3,5.994809);
   hmc__1->SetBinError(4,5.367302);
   hmc__1->SetBinError(5,5.313859);
   hmc__1->SetBinError(6,7.108503);
   hmc__1->SetBinError(7,6.938219);
   hmc__1->SetBinError(8,10.87887);
   hmc__1->SetBinError(9,8.466989);
   hmc__1->SetBinError(10,8.154383);
   hmc__1->SetBinError(11,13.27482);
   hmc__1->SetBinError(12,12.78347);
   hmc__1->SetBinError(13,13.71203);
   hmc__1->SetBinError(14,13.46753);
   hmc__1->SetBinError(15,17.05927);
   hmc__1->SetBinError(16,11.02808);
   hmc__1->SetBinError(17,6.241141);
   hmc__1->SetBinError(18,4.647738);
   hmc__1->SetBinError(19,3.342155);
   hmc__1->SetBinError(20,2.450495);
   hmc__1->SetBinError(21,1.97986);
   hmc__1->SetBinError(22,4.946657);
   hmc__1->SetBinError(23,2.452425);
   hmc__1->SetBinError(24,2.596571);
   hmc__1->SetBinError(25,2.406556);
   hmc__1->SetBinError(26,2.401962);
   hmc__1->SetBinError(27,2.133126);
   hmc__1->SetBinError(28,1.447727);
   hmc__1->SetBinError(29,1.610015);
   hmc__1->SetBinError(30,8.037392);
   hmc__1->SetMinimum(-1.153986);
   hmc__1->SetMaximum(92.31888);
   hmc__1->SetEntries(622.1566);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",29,0,300);
   hs1_stack_1->SetMinimum(-2.770604e-09);
   hs1_stack_1->SetMaximum(60.58426);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,0.6925898);
   hbadmatch_stack_1->SetBinContent(2,0.432687);
   hbadmatch_stack_1->SetBinContent(3,0.6871535);
   hbadmatch_stack_1->SetBinContent(4,0.6548578);
   hbadmatch_stack_1->SetBinContent(5,0.3650698);
   hbadmatch_stack_1->SetBinContent(6,0.4242666);
   hbadmatch_stack_1->SetBinContent(7,0.7699444);
   hbadmatch_stack_1->SetBinContent(8,1.273798);
   hbadmatch_stack_1->SetBinContent(9,1.025438);
   hbadmatch_stack_1->SetBinContent(10,0.8970855);
   hbadmatch_stack_1->SetBinContent(11,0.6349623);
   hbadmatch_stack_1->SetBinContent(12,0.8986523);
   hbadmatch_stack_1->SetBinContent(13,1.036637);
   hbadmatch_stack_1->SetBinContent(14,0.8186877);
   hbadmatch_stack_1->SetBinContent(15,0.7059877);
   hbadmatch_stack_1->SetBinContent(16,0.4580129);
   hbadmatch_stack_1->SetBinContent(17,0.2153095);
   hbadmatch_stack_1->SetBinContent(18,0.1616336);
   hbadmatch_stack_1->SetBinContent(19,0.08745668);
   hbadmatch_stack_1->SetBinContent(20,0.1621632);
   hbadmatch_stack_1->SetBinContent(21,0.1240859);
   hbadmatch_stack_1->SetBinContent(22,0.1366628);
   hbadmatch_stack_1->SetBinContent(23,0.1129571);
   hbadmatch_stack_1->SetBinContent(24,0.1388757);
   hbadmatch_stack_1->SetBinContent(25,0.01467769);
   hbadmatch_stack_1->SetBinContent(26,0.1002069);
   hbadmatch_stack_1->SetBinContent(27,0.1621632);
   hbadmatch_stack_1->SetBinContent(28,0.07848676);
   hbadmatch_stack_1->SetBinContent(29,0.09215011);
   hbadmatch_stack_1->SetBinContent(30,0.3703552);
   hbadmatch_stack_1->SetBinError(0,0.3614108);
   hbadmatch_stack_1->SetBinError(2,0.1520717);
   hbadmatch_stack_1->SetBinError(3,0.1885522);
   hbadmatch_stack_1->SetBinError(4,0.2036076);
   hbadmatch_stack_1->SetBinError(5,0.1411001);
   hbadmatch_stack_1->SetBinError(6,0.1481203);
   hbadmatch_stack_1->SetBinError(7,0.1933603);
   hbadmatch_stack_1->SetBinError(8,0.2697076);
   hbadmatch_stack_1->SetBinError(9,0.33836);
   hbadmatch_stack_1->SetBinError(10,0.2254355);
   hbadmatch_stack_1->SetBinError(11,0.1852806);
   hbadmatch_stack_1->SetBinError(12,0.2237488);
   hbadmatch_stack_1->SetBinError(13,0.2465434);
   hbadmatch_stack_1->SetBinError(14,0.2103616);
   hbadmatch_stack_1->SetBinError(15,0.3783123);
   hbadmatch_stack_1->SetBinError(16,0.1591023);
   hbadmatch_stack_1->SetBinError(17,0.1035385);
   hbadmatch_stack_1->SetBinError(18,0.07287373);
   hbadmatch_stack_1->SetBinError(19,0.06452687);
   hbadmatch_stack_1->SetBinError(20,0.09035965);
   hbadmatch_stack_1->SetBinError(21,0.0876196);
   hbadmatch_stack_1->SetBinError(22,0.08854226);
   hbadmatch_stack_1->SetBinError(23,0.0669989);
   hbadmatch_stack_1->SetBinError(24,0.09876831);
   hbadmatch_stack_1->SetBinError(25,0.0146777);
   hbadmatch_stack_1->SetBinError(26,0.0657745);
   hbadmatch_stack_1->SetBinError(27,0.09035965);
   hbadmatch_stack_1->SetBinError(28,0.06412362);
   hbadmatch_stack_1->SetBinError(29,0.06553198);
   hbadmatch_stack_1->SetBinError(30,0.1506778);
   hbadmatch_stack_1->SetEntries(370);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,1.363341);
   hext_stack_2->SetBinContent(2,1.5992);
   hext_stack_2->SetBinContent(3,2.744415);
   hext_stack_2->SetBinContent(4,2.655795);
   hext_stack_2->SetBinContent(5,3.289751);
   hext_stack_2->SetBinContent(6,2.331316);
   hext_stack_2->SetBinContent(7,3.63877);
   hext_stack_2->SetBinContent(8,2.505825);
   hext_stack_2->SetBinContent(9,2.444476);
   hext_stack_2->SetBinContent(10,2.631255);
   hext_stack_2->SetBinContent(11,4.294535);
   hext_stack_2->SetBinContent(12,1.835058);
   hext_stack_2->SetBinContent(13,3.314291);
   hext_stack_2->SetBinContent(14,3.859627);
   hext_stack_2->SetBinContent(15,3.415181);
   hext_stack_2->SetBinContent(16,0.8793539);
   hext_stack_2->SetBinContent(17,0.7811952);
   hext_stack_2->SetBinContent(18,0.7443856);
   hext_stack_2->SetBinContent(19,0.4349078);
   hext_stack_2->SetBinContent(20,0.6462268);
   hext_stack_2->SetBinContent(21,0.1104287);
   hext_stack_2->SetBinContent(22,0.2603984);
   hext_stack_2->SetBinContent(23,0.211319);
   hext_stack_2->SetBinContent(24,0.2235888);
   hext_stack_2->SetBinContent(25,0.2358586);
   hext_stack_2->SetBinContent(26,0.01226985);
   hext_stack_2->SetBinContent(27,0.2235888);
   hext_stack_2->SetBinContent(28,0.06134926);
   hext_stack_2->SetBinContent(29,0.211319);
   hext_stack_2->SetBinContent(30,0.793465);
   hext_stack_2->SetBinError(0,0.4501324);
   hext_stack_2->SetBinError(2,0.4926372);
   hext_stack_2->SetBinError(3,0.692685);
   hext_stack_2->SetBinError(4,0.6644899);
   hext_stack_2->SetBinError(5,0.748906);
   hext_stack_2->SetBinError(6,0.6026683);
   hext_stack_2->SetBinError(7,0.7996869);
   hext_stack_2->SetBinError(8,0.6344514);
   hext_stack_2->SetBinError(9,0.6338579);
   hext_stack_2->SetBinError(10,0.6642633);
   hext_stack_2->SetBinError(11,0.849648);
   hext_stack_2->SetBinError(12,0.5317552);
   hext_stack_2->SetBinError(13,0.749107);
   hext_stack_2->SetBinError(14,0.8013794);
   hext_stack_2->SetBinError(15,0.7743239);
   hext_stack_2->SetBinError(16,0.3497489);
   hext_stack_2->SetBinError(17,0.3480228);
   hext_stack_2->SetBinError(18,0.3473733);
   hext_stack_2->SetBinError(19,0.282299);
   hext_stack_2->SetBinError(20,0.3456354);
   hext_stack_2->SetBinError(21,0.03680956);
   hext_stack_2->SetBinError(22,0.2009311);
   hext_stack_2->SetBinError(23,0.1994269);
   hext_stack_2->SetBinError(24,0.199804);
   hext_stack_2->SetBinError(25,0.2001804);
   hext_stack_2->SetBinError(26,0.01226985);
   hext_stack_2->SetBinError(27,0.199804);
   hext_stack_2->SetBinError(28,0.02743622);
   hext_stack_2->SetBinError(29,0.1994269);
   hext_stack_2->SetBinError(30,0.348239);
   hext_stack_2->SetEntries(893);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,0.1673741);
   hdirt_stack_3->SetBinContent(2,0.1021029);
   hdirt_stack_3->SetBinContent(3,0.2187552);
   hdirt_stack_3->SetBinContent(4,0.3826136);
   hdirt_stack_3->SetBinContent(5,0.463365);
   hdirt_stack_3->SetBinContent(6,0.462052);
   hdirt_stack_3->SetBinContent(7,0.6896508);
   hdirt_stack_3->SetBinContent(8,0.2442167);
   hdirt_stack_3->SetBinContent(9,0.2067558);
   hdirt_stack_3->SetBinContent(10,0.2841263);
   hdirt_stack_3->SetBinContent(11,0.3333231);
   hdirt_stack_3->SetBinContent(12,0.6981784);
   hdirt_stack_3->SetBinContent(13,0.4660569);
   hdirt_stack_3->SetBinContent(14,0.3435924);
   hdirt_stack_3->SetBinContent(15,0.4172608);
   hdirt_stack_3->SetBinContent(16,0.1490731);
   hdirt_stack_3->SetBinContent(17,0.06064831);
   hdirt_stack_3->SetBinContent(18,0.08841814);
   hdirt_stack_3->SetBinContent(19,0.02600769);
   hdirt_stack_3->SetBinContent(20,0.01766773);
   hdirt_stack_3->SetBinContent(22,0.01875223);
   hdirt_stack_3->SetBinContent(23,0.06251712);
   hdirt_stack_3->SetBinContent(24,0.0701001);
   hdirt_stack_3->SetBinContent(26,0.008219617);
   hdirt_stack_3->SetBinContent(29,0.04420907);
   hdirt_stack_3->SetBinContent(30,0.09663776);
   hdirt_stack_3->SetBinError(0,0.07852467);
   hdirt_stack_3->SetBinError(2,0.06700394);
   hdirt_stack_3->SetBinError(3,0.08957824);
   hdirt_stack_3->SetBinError(4,0.1265074);
   hdirt_stack_3->SetBinError(5,0.1439127);
   hdirt_stack_3->SetBinError(6,0.1371278);
   hdirt_stack_3->SetBinError(7,0.1724827);
   hdirt_stack_3->SetBinError(8,0.09158327);
   hdirt_stack_3->SetBinError(9,0.08839908);
   hdirt_stack_3->SetBinError(10,0.09981123);
   hdirt_stack_3->SetBinError(11,0.1205285);
   hdirt_stack_3->SetBinError(12,0.3241765);
   hdirt_stack_3->SetBinError(13,0.2230234);
   hdirt_stack_3->SetBinError(14,0.112108);
   hdirt_stack_3->SetBinError(15,0.1321874);
   hdirt_stack_3->SetBinError(16,0.07744966);
   hdirt_stack_3->SetBinError(17,0.04571177);
   hdirt_stack_3->SetBinError(18,0.06252107);
   hdirt_stack_3->SetBinError(19,0.01505588);
   hdirt_stack_3->SetBinError(20,0.01252313);
   hdirt_stack_3->SetBinError(22,0.01336031);
   hdirt_stack_3->SetBinError(23,0.05383534);
   hdirt_stack_3->SetBinError(24,0.05388312);
   hdirt_stack_3->SetBinError(26,0.008219618);
   hdirt_stack_3->SetBinError(29,0.04420907);
   hdirt_stack_3->SetBinError(30,0.06305907);
   hdirt_stack_3->SetEntries(224);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,2.379719);
   houtFV_stack_4->SetBinContent(2,2.056184);
   houtFV_stack_4->SetBinContent(3,2.85539);
   houtFV_stack_4->SetBinContent(4,3.062136);
   houtFV_stack_4->SetBinContent(5,2.157728);
   houtFV_stack_4->SetBinContent(6,2.963493);
   houtFV_stack_4->SetBinContent(7,3.900831);
   houtFV_stack_4->SetBinContent(8,3.898991);
   houtFV_stack_4->SetBinContent(9,3.267758);
   houtFV_stack_4->SetBinContent(10,3.616953);
   houtFV_stack_4->SetBinContent(11,3.772371);
   houtFV_stack_4->SetBinContent(12,4.193127);
   houtFV_stack_4->SetBinContent(13,4.460056);
   houtFV_stack_4->SetBinContent(14,3.992952);
   houtFV_stack_4->SetBinContent(15,3.982438);
   houtFV_stack_4->SetBinContent(16,2.644596);
   houtFV_stack_4->SetBinContent(17,1.110047);
   houtFV_stack_4->SetBinContent(18,1.056141);
   houtFV_stack_4->SetBinContent(19,1.067802);
   houtFV_stack_4->SetBinContent(20,0.7610029);
   houtFV_stack_4->SetBinContent(21,0.8370208);
   houtFV_stack_4->SetBinContent(22,0.5764052);
   houtFV_stack_4->SetBinContent(23,0.6124202);
   houtFV_stack_4->SetBinContent(24,0.4099883);
   houtFV_stack_4->SetBinContent(25,0.6086074);
   houtFV_stack_4->SetBinContent(26,0.2131639);
   houtFV_stack_4->SetBinContent(27,0.4227385);
   houtFV_stack_4->SetBinContent(28,0.2860757);
   houtFV_stack_4->SetBinContent(29,0.2113693);
   houtFV_stack_4->SetBinContent(30,1.725225);
   houtFV_stack_4->SetBinError(0,0.3617733);
   houtFV_stack_4->SetBinError(2,0.3437849);
   houtFV_stack_4->SetBinError(3,0.3852498);
   houtFV_stack_4->SetBinError(4,0.4075503);
   houtFV_stack_4->SetBinError(5,0.3360146);
   houtFV_stack_4->SetBinError(6,0.4110807);
   houtFV_stack_4->SetBinError(7,0.4725047);
   houtFV_stack_4->SetBinError(8,0.4631318);
   houtFV_stack_4->SetBinError(9,0.4247337);
   houtFV_stack_4->SetBinError(10,0.4434555);
   houtFV_stack_4->SetBinError(11,0.4540482);
   houtFV_stack_4->SetBinError(12,0.4816803);
   houtFV_stack_4->SetBinError(13,0.4938085);
   houtFV_stack_4->SetBinError(14,0.4611883);
   houtFV_stack_4->SetBinError(15,0.4655759);
   houtFV_stack_4->SetBinError(16,0.3789031);
   houtFV_stack_4->SetBinError(17,0.2447767);
   houtFV_stack_4->SetBinError(18,0.2533692);
   houtFV_stack_4->SetBinError(19,0.2497853);
   houtFV_stack_4->SetBinError(20,0.2043492);
   houtFV_stack_4->SetBinError(21,0.2215162);
   houtFV_stack_4->SetBinError(22,0.1783314);
   houtFV_stack_4->SetBinError(23,0.1879076);
   houtFV_stack_4->SetBinError(24,0.1533597);
   houtFV_stack_4->SetBinError(25,0.18761);
   houtFV_stack_4->SetBinError(26,0.09388896);
   houtFV_stack_4->SetBinError(27,0.1538888);
   houtFV_stack_4->SetBinError(28,0.1258651);
   houtFV_stack_4->SetBinError(29,0.1088158);
   houtFV_stack_4->SetBinError(30,0.296045);
   houtFV_stack_4->SetEntries(1630);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hNCpi0inFV_stack_5->SetBinContent(0,4.53339);
   hNCpi0inFV_stack_5->SetBinContent(2,5.52828);
   hNCpi0inFV_stack_5->SetBinContent(3,7.135367);
   hNCpi0inFV_stack_5->SetBinContent(4,6.95507);
   hNCpi0inFV_stack_5->SetBinContent(5,7.927861);
   hNCpi0inFV_stack_5->SetBinContent(6,10.17661);
   hNCpi0inFV_stack_5->SetBinContent(7,11.90761);
   hNCpi0inFV_stack_5->SetBinContent(8,14.1761);
   hNCpi0inFV_stack_5->SetBinContent(9,13.81154);
   hNCpi0inFV_stack_5->SetBinContent(10,18.16322);
   hNCpi0inFV_stack_5->SetBinContent(11,24.39059);
   hNCpi0inFV_stack_5->SetBinContent(12,30.42745);
   hNCpi0inFV_stack_5->SetBinContent(13,34.33967);
   hNCpi0inFV_stack_5->SetBinContent(14,35.37461);
   hNCpi0inFV_stack_5->SetBinContent(15,26.76184);
   hNCpi0inFV_stack_5->SetBinContent(16,17.25002);
   hNCpi0inFV_stack_5->SetBinContent(17,9.190693);
   hNCpi0inFV_stack_5->SetBinContent(18,6.546876);
   hNCpi0inFV_stack_5->SetBinContent(19,4.555301);
   hNCpi0inFV_stack_5->SetBinContent(20,3.367176);
   hNCpi0inFV_stack_5->SetBinContent(21,2.255739);
   hNCpi0inFV_stack_5->SetBinContent(22,2.563726);
   hNCpi0inFV_stack_5->SetBinContent(23,2.149821);
   hNCpi0inFV_stack_5->SetBinContent(24,2.425269);
   hNCpi0inFV_stack_5->SetBinContent(25,2.188399);
   hNCpi0inFV_stack_5->SetBinContent(26,2.301356);
   hNCpi0inFV_stack_5->SetBinContent(27,1.605292);
   hNCpi0inFV_stack_5->SetBinContent(28,1.058641);
   hNCpi0inFV_stack_5->SetBinContent(29,0.9584341);
   hNCpi0inFV_stack_5->SetBinContent(30,10.55912);
   hNCpi0inFV_stack_5->SetBinError(0,0.4906315);
   hNCpi0inFV_stack_5->SetBinError(2,0.544137);
   hNCpi0inFV_stack_5->SetBinError(3,0.6169254);
   hNCpi0inFV_stack_5->SetBinError(4,0.6175328);
   hNCpi0inFV_stack_5->SetBinError(5,0.6395257);
   hNCpi0inFV_stack_5->SetBinError(6,0.748071);
   hNCpi0inFV_stack_5->SetBinError(7,0.8073408);
   hNCpi0inFV_stack_5->SetBinError(8,0.8770023);
   hNCpi0inFV_stack_5->SetBinError(9,0.8567372);
   hNCpi0inFV_stack_5->SetBinError(10,0.9939491);
   hNCpi0inFV_stack_5->SetBinError(11,1.159957);
   hNCpi0inFV_stack_5->SetBinError(12,1.27861);
   hNCpi0inFV_stack_5->SetBinError(13,1.364385);
   hNCpi0inFV_stack_5->SetBinError(14,1.383609);
   hNCpi0inFV_stack_5->SetBinError(15,1.195665);
   hNCpi0inFV_stack_5->SetBinError(16,0.9676614);
   hNCpi0inFV_stack_5->SetBinError(17,0.699368);
   hNCpi0inFV_stack_5->SetBinError(18,0.5956524);
   hNCpi0inFV_stack_5->SetBinError(19,0.4970874);
   hNCpi0inFV_stack_5->SetBinError(20,0.4134906);
   hNCpi0inFV_stack_5->SetBinError(21,0.3423029);
   hNCpi0inFV_stack_5->SetBinError(22,0.3733497);
   hNCpi0inFV_stack_5->SetBinError(23,0.3266968);
   hNCpi0inFV_stack_5->SetBinError(24,0.366846);
   hNCpi0inFV_stack_5->SetBinError(25,0.3498713);
   hNCpi0inFV_stack_5->SetBinError(26,0.3562286);
   hNCpi0inFV_stack_5->SetBinError(27,0.2958675);
   hNCpi0inFV_stack_5->SetBinError(28,0.2370204);
   hNCpi0inFV_stack_5->SetBinError(29,0.2277112);
   hNCpi0inFV_stack_5->SetBinError(30,0.7513236);
   hNCpi0inFV_stack_5->SetEntries(8416);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_6->SetBinContent(0,1.413232);
   hCCpi0inFV_stack_6->SetBinContent(2,1.789079);
   hCCpi0inFV_stack_6->SetBinContent(3,2.134033);
   hCCpi0inFV_stack_6->SetBinContent(4,2.242388);
   hCCpi0inFV_stack_6->SetBinContent(5,2.925042);
   hCCpi0inFV_stack_6->SetBinContent(6,3.493071);
   hCCpi0inFV_stack_6->SetBinContent(7,3.99231);
   hCCpi0inFV_stack_6->SetBinContent(8,3.990994);
   hCCpi0inFV_stack_6->SetBinContent(9,3.978814);
   hCCpi0inFV_stack_6->SetBinContent(10,5.069648);
   hCCpi0inFV_stack_6->SetBinContent(11,7.736133);
   hCCpi0inFV_stack_6->SetBinContent(12,7.07995);
   hCCpi0inFV_stack_6->SetBinContent(13,8.677558);
   hCCpi0inFV_stack_6->SetBinContent(14,9.025478);
   hCCpi0inFV_stack_6->SetBinContent(15,8.570593);
   hCCpi0inFV_stack_6->SetBinContent(16,5.496356);
   hCCpi0inFV_stack_6->SetBinContent(17,3.856365);
   hCCpi0inFV_stack_6->SetBinContent(18,2.170786);
   hCCpi0inFV_stack_6->SetBinContent(19,2.339451);
   hCCpi0inFV_stack_6->SetBinContent(20,1.36053);
   hCCpi0inFV_stack_6->SetBinContent(21,0.9365231);
   hCCpi0inFV_stack_6->SetBinContent(22,1.308371);
   hCCpi0inFV_stack_6->SetBinContent(23,1.071391);
   hCCpi0inFV_stack_6->SetBinContent(24,1.115914);
   hCCpi0inFV_stack_6->SetBinContent(25,1.022185);
   hCCpi0inFV_stack_6->SetBinContent(26,0.8709775);
   hCCpi0inFV_stack_6->SetBinContent(27,0.7807887);
   hCCpi0inFV_stack_6->SetBinContent(28,0.6486527);
   hCCpi0inFV_stack_6->SetBinContent(29,0.3753271);
   hCCpi0inFV_stack_6->SetBinContent(30,8.88344);
   hCCpi0inFV_stack_6->SetBinError(0,0.2762378);
   hCCpi0inFV_stack_6->SetBinError(2,0.3156621);
   hCCpi0inFV_stack_6->SetBinError(3,0.3356157);
   hCCpi0inFV_stack_6->SetBinError(4,0.3489901);
   hCCpi0inFV_stack_6->SetBinError(5,0.4028941);
   hCCpi0inFV_stack_6->SetBinError(6,0.4438116);
   hCCpi0inFV_stack_6->SetBinError(7,0.4707716);
   hCCpi0inFV_stack_6->SetBinError(8,0.4632139);
   hCCpi0inFV_stack_6->SetBinError(9,0.4596275);
   hCCpi0inFV_stack_6->SetBinError(10,0.5242455);
   hCCpi0inFV_stack_6->SetBinError(11,0.6505341);
   hCCpi0inFV_stack_6->SetBinError(12,0.607521);
   hCCpi0inFV_stack_6->SetBinError(13,0.6913138);
   hCCpi0inFV_stack_6->SetBinError(14,0.6932834);
   hCCpi0inFV_stack_6->SetBinError(15,0.6932121);
   hCCpi0inFV_stack_6->SetBinError(16,0.5516544);
   hCCpi0inFV_stack_6->SetBinError(17,0.4623421);
   hCCpi0inFV_stack_6->SetBinError(18,0.3362703);
   hCCpi0inFV_stack_6->SetBinError(19,0.3658119);
   hCCpi0inFV_stack_6->SetBinError(20,0.2688322);
   hCCpi0inFV_stack_6->SetBinError(21,0.2132504);
   hCCpi0inFV_stack_6->SetBinError(22,0.2675584);
   hCCpi0inFV_stack_6->SetBinError(23,0.2373631);
   hCCpi0inFV_stack_6->SetBinError(24,0.2533766);
   hCCpi0inFV_stack_6->SetBinError(25,0.229489);
   hCCpi0inFV_stack_6->SetBinError(26,0.2183773);
   hCCpi0inFV_stack_6->SetBinError(27,0.207348);
   hCCpi0inFV_stack_6->SetBinError(28,0.1807193);
   hCCpi0inFV_stack_6->SetBinError(29,0.1303073);
   hCCpi0inFV_stack_6->SetBinError(30,0.6922591);
   hCCpi0inFV_stack_6->SetEntries(2725);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hNCinFV_stack_7->SetBinContent(0,1.297305);
   hNCinFV_stack_7->SetBinContent(2,0.8600219);
   hNCinFV_stack_7->SetBinContent(3,1.279171);
   hNCinFV_stack_7->SetBinContent(4,1.259055);
   hNCinFV_stack_7->SetBinContent(5,1.54513);
   hNCinFV_stack_7->SetBinContent(6,0.8745669);
   hNCinFV_stack_7->SetBinContent(7,1.541541);
   hNCinFV_stack_7->SetBinContent(8,1.022185);
   hNCinFV_stack_7->SetBinContent(9,0.6978588);
   hNCinFV_stack_7->SetBinContent(10,1.554291);
   hNCinFV_stack_7->SetBinContent(11,1.395683);
   hNCinFV_stack_7->SetBinContent(12,1.085936);
   hNCinFV_stack_7->SetBinContent(13,2.100942);
   hNCinFV_stack_7->SetBinContent(14,1.158848);
   hNCinFV_stack_7->SetBinContent(15,1.246305);
   hNCinFV_stack_7->SetBinContent(16,0.7616098);
   hNCinFV_stack_7->SetBinContent(17,0.4482389);
   hNCinFV_stack_7->SetBinContent(18,0.6213576);
   hNCinFV_stack_7->SetBinContent(19,0.2733256);
   hNCinFV_stack_7->SetBinContent(20,0.3607822);
   hNCinFV_stack_7->SetBinContent(21,0.2368697);
   hNCinFV_stack_7->SetBinContent(22,0.06375098);
   hNCinFV_stack_7->SetBinContent(23,0.2241195);
   hNCinFV_stack_7->SetBinContent(24,0.5211507);
   hNCinFV_stack_7->SetBinContent(25,0.0127502);
   hNCinFV_stack_7->SetBinContent(26,0.2988259);
   hNCinFV_stack_7->SetBinContent(27,0.1621632);
   hNCinFV_stack_7->SetBinContent(29,0.07470649);
   hNCinFV_stack_7->SetBinContent(30,2.762345);
   hNCinFV_stack_7->SetBinError(0,0.2555757);
   hNCinFV_stack_7->SetBinError(2,0.2109511);
   hNCinFV_stack_7->SetBinError(3,0.2724584);
   hNCinFV_stack_7->SetBinError(4,0.2546198);
   hNCinFV_stack_7->SetBinError(5,0.2840304);
   hNCinFV_stack_7->SetBinError(6,0.2040519);
   hNCinFV_stack_7->SetBinError(7,0.2944907);
   hNCinFV_stack_7->SetBinError(8,0.229489);
   hNCinFV_stack_7->SetBinError(9,0.1906187);
   hNCinFV_stack_7->SetBinError(10,0.2947665);
   hNCinFV_stack_7->SetBinError(11,0.275136);
   hNCinFV_stack_7->SetBinError(12,0.2312532);
   hNCinFV_stack_7->SetBinError(13,0.3438695);
   hNCinFV_stack_7->SetBinError(14,0.2459775);
   hNCinFV_stack_7->SetBinError(15,0.2543003);
   hNCinFV_stack_7->SetBinError(16,0.192739);
   hNCinFV_stack_7->SetBinError(17,0.1549416);
   hNCinFV_stack_7->SetBinError(18,0.1880427);
   hNCinFV_stack_7->SetBinError(19,0.1252177);
   hNCinFV_stack_7->SetBinError(20,0.1408658);
   hNCinFV_stack_7->SetBinError(21,0.1102997);
   hNCinFV_stack_7->SetBinError(22,0.0285103);
   hNCinFV_stack_7->SetBinError(23,0.1095603);
   hNCinFV_stack_7->SetBinError(24,0.1761641);
   hNCinFV_stack_7->SetBinError(25,0.0127502);
   hNCinFV_stack_7->SetBinError(26,0.1265093);
   hNCinFV_stack_7->SetBinError(27,0.09035965);
   hNCinFV_stack_7->SetBinError(29,0.06325464);
   hNCinFV_stack_7->SetBinError(30,0.388675);
   hNCinFV_stack_7->SetEntries(696);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_8->SetBinContent(0,2.122945);
   hnumuCCinFV_stack_8->SetBinContent(2,2.28054);
   hnumuCCinFV_stack_8->SetBinContent(3,2.178007);
   hnumuCCinFV_stack_8->SetBinContent(4,1.892976);
   hnumuCCinFV_stack_8->SetBinContent(5,2.16777);
   hnumuCCinFV_stack_8->SetBinContent(6,2.297528);
   hnumuCCinFV_stack_8->SetBinContent(7,3.406361);
   hnumuCCinFV_stack_8->SetBinContent(8,2.92657);
   hnumuCCinFV_stack_8->SetBinContent(9,3.116661);
   hnumuCCinFV_stack_8->SetBinContent(10,2.177866);
   hnumuCCinFV_stack_8->SetBinContent(11,3.514901);
   hnumuCCinFV_stack_8->SetBinContent(12,2.132826);
   hnumuCCinFV_stack_8->SetBinContent(13,2.979727);
   hnumuCCinFV_stack_8->SetBinContent(14,2.293585);
   hnumuCCinFV_stack_8->SetBinContent(15,1.629548);
   hnumuCCinFV_stack_8->SetBinContent(16,1.274649);
   hnumuCCinFV_stack_8->SetBinContent(17,0.6984508);
   hnumuCCinFV_stack_8->SetBinContent(18,0.6274429);
   hnumuCCinFV_stack_8->SetBinContent(19,0.5673119);
   hnumuCCinFV_stack_8->SetBinContent(20,0.6243937);
   hnumuCCinFV_stack_8->SetBinContent(21,0.5141308);
   hnumuCCinFV_stack_8->SetBinContent(22,0.5281457);
   hnumuCCinFV_stack_8->SetBinContent(23,0.3642175);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1335382);
   hnumuCCinFV_stack_8->SetBinContent(25,0.4313062);
   hnumuCCinFV_stack_8->SetBinContent(26,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(27,0.07013725);
   hnumuCCinFV_stack_8->SetBinContent(28,0.116637);
   hnumuCCinFV_stack_8->SetBinContent(29,0.3036424);
   hnumuCCinFV_stack_8->SetBinContent(30,2.613372);
   hnumuCCinFV_stack_8->SetBinError(0,0.3720186);
   hnumuCCinFV_stack_8->SetBinError(2,0.4913678);
   hnumuCCinFV_stack_8->SetBinError(3,0.5128489);
   hnumuCCinFV_stack_8->SetBinError(4,0.5097601);
   hnumuCCinFV_stack_8->SetBinError(5,0.3669628);
   hnumuCCinFV_stack_8->SetBinError(6,0.5806205);
   hnumuCCinFV_stack_8->SetBinError(7,0.5153532);
   hnumuCCinFV_stack_8->SetBinError(8,0.5713515);
   hnumuCCinFV_stack_8->SetBinError(9,0.6283315);
   hnumuCCinFV_stack_8->SetBinError(10,0.3635606);
   hnumuCCinFV_stack_8->SetBinError(11,0.5244064);
   hnumuCCinFV_stack_8->SetBinError(12,0.448043);
   hnumuCCinFV_stack_8->SetBinError(13,0.5439796);
   hnumuCCinFV_stack_8->SetBinError(14,0.3861918);
   hnumuCCinFV_stack_8->SetBinError(15,0.3109389);
   hnumuCCinFV_stack_8->SetBinError(16,0.2738088);
   hnumuCCinFV_stack_8->SetBinError(17,0.1969786);
   hnumuCCinFV_stack_8->SetBinError(18,0.1826711);
   hnumuCCinFV_stack_8->SetBinError(19,0.1830307);
   hnumuCCinFV_stack_8->SetBinError(20,0.1975671);
   hnumuCCinFV_stack_8->SetBinError(21,0.1619106);
   hnumuCCinFV_stack_8->SetBinError(22,0.183193);
   hnumuCCinFV_stack_8->SetBinError(23,0.1781601);
   hnumuCCinFV_stack_8->SetBinError(24,0.06936607);
   hnumuCCinFV_stack_8->SetBinError(25,0.1811304);
   hnumuCCinFV_stack_8->SetBinError(26,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(27,0.03160106);
   hnumuCCinFV_stack_8->SetBinError(28,0.0677457);
   hnumuCCinFV_stack_8->SetBinError(29,0.1410728);
   hnumuCCinFV_stack_8->SetBinError(30,0.387912);
   hnumuCCinFV_stack_8->SetEntries(1072);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_9->SetBinContent(0,0.235312);
   hnueCCinFV_stack_9->SetBinContent(2,0.4995489);
   hnueCCinFV_stack_9->SetBinContent(3,0.1666968);
   hnueCCinFV_stack_9->SetBinContent(4,0.09387171);
   hnueCCinFV_stack_9->SetBinContent(5,0.07578161);
   hnueCCinFV_stack_9->SetBinContent(6,0.1899484);
   hnueCCinFV_stack_9->SetBinContent(7,0.1909167);
   hnueCCinFV_stack_9->SetBinContent(8,0.08480261);
   hnueCCinFV_stack_9->SetBinContent(9,0.1233872);
   hnueCCinFV_stack_9->SetBinContent(10,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(11,0.06932888);
   hnueCCinFV_stack_9->SetBinContent(12,0.01275058);
   hnueCCinFV_stack_9->SetBinContent(13,0.3243563);
   hnueCCinFV_stack_9->SetBinContent(14,0.151809);
   hnueCCinFV_stack_9->SetBinContent(15,0.1517665);
   hnueCCinFV_stack_9->SetBinContent(16,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(17,0.09621814);
   hnueCCinFV_stack_9->SetBinContent(18,0.03414221);
   hnueCCinFV_stack_9->SetBinContent(19,0.09554926);
   hnueCCinFV_stack_9->SetBinContent(20,0.07948712);
   hnueCCinFV_stack_9->SetBinContent(21,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(23,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(25,0.04169434);
   hnueCCinFV_stack_9->SetBinContent(27,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(30,0.6919149);
   hnueCCinFV_stack_9->SetBinError(0,0.1111068);
   hnueCCinFV_stack_9->SetBinError(2,0.4701663);
   hnueCCinFV_stack_9->SetBinError(3,0.09115432);
   hnueCCinFV_stack_9->SetBinError(4,0.06597629);
   hnueCCinFV_stack_9->SetBinError(5,0.06348009);
   hnueCCinFV_stack_9->SetBinError(6,0.1019436);
   hnueCCinFV_stack_9->SetBinError(7,0.1018662);
   hnueCCinFV_stack_9->SetBinError(8,0.07178721);
   hnueCCinFV_stack_9->SetBinError(9,0.07940278);
   hnueCCinFV_stack_9->SetBinError(10,0.0127502);
   hnueCCinFV_stack_9->SetBinError(11,0.03140365);
   hnueCCinFV_stack_9->SetBinError(12,0.0127502);
   hnueCCinFV_stack_9->SetBinError(13,0.1512981);
   hnueCCinFV_stack_9->SetBinError(14,0.08982838);
   hnueCCinFV_stack_9->SetBinError(15,0.09194023);
   hnueCCinFV_stack_9->SetBinError(16,0.0180315);
   hnueCCinFV_stack_9->SetBinError(17,0.08163059);
   hnueCCinFV_stack_9->SetBinError(18,0.02468554);
   hnueCCinFV_stack_9->SetBinError(19,0.08377501);
   hnueCCinFV_stack_9->SetBinError(20,0.07948712);
   hnueCCinFV_stack_9->SetBinError(21,0.06195629);
   hnueCCinFV_stack_9->SetBinError(23,0.06325464);
   hnueCCinFV_stack_9->SetBinError(25,0.02422669);
   hnueCCinFV_stack_9->SetBinError(27,0.01528837);
   hnueCCinFV_stack_9->SetBinError(30,0.2076307);
   hnueCCinFV_stack_9->SetEntries(85);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);
   hmcerror__2->SetBinContent(0,14.20521);
   hmcerror__2->SetBinContent(2,15.14764);
   hmcerror__2->SetBinContent(3,19.39899);
   hmcerror__2->SetBinContent(4,19.19876);
   hmcerror__2->SetBinContent(5,20.9175);
   hmcerror__2->SetBinContent(6,23.21285);
   hmcerror__2->SetBinContent(7,30.03793);
   hmcerror__2->SetBinContent(8,30.12348);
   hmcerror__2->SetBinContent(9,28.67269);
   hmcerror__2->SetBinContent(10,34.4072);
   hmcerror__2->SetBinContent(11,46.14182);
   hmcerror__2->SetBinContent(12,48.36393);
   hmcerror__2->SetBinContent(13,57.6993);
   hmcerror__2->SetBinContent(14,57.01919);
   hmcerror__2->SetBinContent(15,46.88092);
   hmcerror__2->SetBinContent(16,28.93917);
   hmcerror__2->SetBinContent(17,16.45716);
   hmcerror__2->SetBinContent(18,12.05118);
   hmcerror__2->SetBinContent(19,9.447111);
   hmcerror__2->SetBinContent(20,7.37943);
   hmcerror__2->SetBinContent(21,5.076755);
   hmcerror__2->SetBinContent(22,5.456212);
   hmcerror__2->SetBinContent(23,4.883469);
   hmcerror__2->SetBinContent(24,5.038425);
   hmcerror__2->SetBinContent(25,4.555479);
   hmcerror__2->SetBinContent(26,3.866976);
   hmcerror__2->SetBinContent(27,3.44216);
   hmcerror__2->SetBinContent(28,2.249842);
   hmcerror__2->SetBinContent(29,2.271158);
   hmcerror__2->SetBinContent(30,28.49587);
   hmcerror__2->SetBinError(0,1.001684);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,5.500036);
   hmcerror__2->SetBinError(3,5.994809);
   hmcerror__2->SetBinError(4,5.367302);
   hmcerror__2->SetBinError(5,5.313859);
   hmcerror__2->SetBinError(6,7.108503);
   hmcerror__2->SetBinError(7,6.938219);
   hmcerror__2->SetBinError(8,10.87887);
   hmcerror__2->SetBinError(9,8.466989);
   hmcerror__2->SetBinError(10,8.154383);
   hmcerror__2->SetBinError(11,13.27482);
   hmcerror__2->SetBinError(12,12.78347);
   hmcerror__2->SetBinError(13,13.71203);
   hmcerror__2->SetBinError(14,13.46753);
   hmcerror__2->SetBinError(15,17.05927);
   hmcerror__2->SetBinError(16,11.02808);
   hmcerror__2->SetBinError(17,6.241141);
   hmcerror__2->SetBinError(18,4.647738);
   hmcerror__2->SetBinError(19,3.342155);
   hmcerror__2->SetBinError(20,2.450495);
   hmcerror__2->SetBinError(21,1.97986);
   hmcerror__2->SetBinError(22,4.946657);
   hmcerror__2->SetBinError(23,2.452425);
   hmcerror__2->SetBinError(24,2.596571);
   hmcerror__2->SetBinError(25,2.406556);
   hmcerror__2->SetBinError(26,2.401962);
   hmcerror__2->SetBinError(27,2.133126);
   hmcerror__2->SetBinError(28,1.447727);
   hmcerror__2->SetBinError(29,1.610015);
   hmcerror__2->SetBinError(30,8.037392);
   hmcerror__2->SetEntries(622.1566);

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
   
   Double_t _fx3001[29] = {
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
   Double_t _fy3001[29] = {
   0,
   12,
   16,
   22,
   26,
   27,
   28,
   16,
   21,
   33,
   29,
   45,
   53,
   52,
   26,
   15,
   9,
   8,
   3,
   3,
   8,
   9,
   4,
   4,
   2,
   2,
   0,
   4,
   2};
   Double_t _felx3001[29] = {
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
   Double_t _fely3001[29] = {
   0,
   3.64022,
   4.1628,
   4.8417,
   5.2453,
   5.3414,
   5.4358,
   4.1628,
   4.7354,
   5.8847,
   5.5285,
   6.8416,
   7.4105,
   7.3419,
   5.2453,
   4.0385,
   3.19354,
   3.0307,
   2.143368,
   2.143368,
   3.0307,
   3.19354,
   2.29683,
   2.29683,
   2,
   2,
   0,
   2.29683,
   2};
   Double_t _fehx3001[29] = {
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
   Double_t _fehy3001[29] = {
   1.1478,
   3.4155,
   3.9454,
   4.6299,
   5.0358,
   5.1322,
   5.2271,
   3.9454,
   4.5229,
   5.6776,
   5.3201,
   6.637,
   7.2068,
   7.1381,
   5.0358,
   3.8197,
   2.9582,
   2.7896,
   1.72422,
   1.72422,
   2.7896,
   2.9582,
   1.98186,
   1.98186,
   1.51917,
   1.51917,
   1.1478,
   1.98186,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,330);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(66.22748);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.90/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 479.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 12.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 45.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 59.0","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  305.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 94.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 21.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 41.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[29] = {
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
   Double_t _fy3002[29] = {
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
   Double_t _felx3002[29] = {
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
   Double_t _fely3002[29] = {
   0,
   0.3630951,
   0.3090269,
   0.279565,
   0.2540389,
   0.3062313,
   0.2309819,
   0.3611425,
   0.2952981,
   0.2369964,
   0.287696,
   0.2643183,
   0.2376465,
   0.236193,
   0.363885,
   0.3810778,
   0.3792355,
   0.3856665,
   0.3537753,
   0.332071,
   0.3899854,
   0.9066101,
   0.5021892,
   0.5153538,
   0.5282773,
   0.6211474,
   0.6197057,
   0.6434793,
   0.7088965};
   Double_t _fehx3002[29] = {
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
   Double_t _fehy3002[29] = {
   0,
   0.3630951,
   0.3090269,
   0.279565,
   0.2540389,
   0.3062313,
   0.2309819,
   0.3611425,
   0.2952981,
   0.2369964,
   0.287696,
   0.2643183,
   0.2376465,
   0.236193,
   0.363885,
   0.3810778,
   0.3792355,
   0.3856665,
   0.3537753,
   0.332071,
   0.3899854,
   0.9066101,
   0.5021892,
   0.5153538,
   0.5282773,
   0.6211474,
   0.6197057,
   0.6434793,
   0.7088965};
   grae = new TGraphAsymmErrors(29,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,330);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} mass [MeV/c^{2}]");
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
   
   Double_t _fx3003[29] = {
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
   Double_t _fy3003[29] = {
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
   Double_t _felx3003[29] = {
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
   Double_t _fely3003[29] = {
   0,
   0.1902159,
   0.1804595,
   0.1820612,
   0.1784286,
   0.1909517,
   0.1805902,
   0.1933555,
   0.1870864,
   0.1920973,
   0.2003829,
   0.2150464,
   0.2134736,
   0.2056319,
   0.2039446,
   0.2155351,
   0.2047821,
   0.2152691,
   0.2262976,
   0.212657,
   0.2286654,
   0.249197,
   0.2462573,
   0.2197524,
   0.2569603,
   0.2900966,
   0.2518081,
   0.2791485,
   0.2618335};
   Double_t _fehx3003[29] = {
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
   Double_t _fehy3003[29] = {
   0,
   0.1902159,
   0.1804595,
   0.1820612,
   0.1784286,
   0.1909517,
   0.1805902,
   0.1933555,
   0.1870864,
   0.1920973,
   0.2003829,
   0.2150464,
   0.2134736,
   0.2056319,
   0.2039446,
   0.2155351,
   0.2047821,
   0.2152691,
   0.2262976,
   0.212657,
   0.2286654,
   0.249197,
   0.2462573,
   0.2197524,
   0.2569603,
   0.2900966,
   0.2518081,
   0.2791485,
   0.2618335};
   grae = new TGraphAsymmErrors(29,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,330);
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
   
   Double_t _fx3004[29] = {
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
   Double_t _fy3004[29] = {
   10,
   0.7922024,
   0.8247853,
   1.145907,
   1.242978,
   1.163149,
   0.9321547,
   0.5311471,
   0.7324043,
   0.9591017,
   0.6284971,
   0.9304456,
   0.9185554,
   0.9119737,
   0.5545966,
   0.5183286,
   0.5468743,
   0.6638352,
   0.3175574,
   0.4065354,
   1.57581,
   1.649496,
   0.8190899,
   0.7938989,
   0.4390318,
   0.5172,
   0,
   1.777902,
   0.8806082};
   Double_t _felx3004[29] = {
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
   Double_t _fely3004[29] = {
   0,
   0.2403159,
   0.2145885,
   0.2521881,
   0.2507613,
   0.2301053,
   0.1809645,
   0.1381912,
   0.1651537,
   0.1710311,
   0.1198154,
   0.1414608,
   0.1284331,
   0.1287619,
   0.1118856,
   0.1395513,
   0.1940517,
   0.2514857,
   0.2268808,
   0.2904517,
   0.5969759,
   0.5853035,
   0.4703276,
   0.4558627,
   0.4390318,
   0.5172,
   0,
   1.020885,
   0.8806082};
   Double_t _fehx3004[29] = {
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
   Double_t _fehy3004[29] = {
   0,
   0.2254806,
   0.2033817,
   0.2411562,
   0.2407458,
   0.221093,
   0.1740166,
   0.1309742,
   0.1577425,
   0.165012,
   0.1152989,
   0.1372304,
   0.1249027,
   0.1251877,
   0.1074168,
   0.1319907,
   0.1797515,
   0.2314793,
   0.1825129,
   0.2336522,
   0.5494849,
   0.542171,
   0.4058304,
   0.3933491,
   0.333482,
   0.3928573,
   0.3334534,
   0.8808884,
   0.6688968};
   grae = new TGraphAsymmErrors(29,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,330);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_pi0_mass_all",29,0,300);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
