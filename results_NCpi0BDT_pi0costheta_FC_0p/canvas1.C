#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Apr 18 19:44:41 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-1.307692,-1.180092,1.25641,99.43832);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hmc__1->SetBinContent(0,16.95182);
   hmc__1->SetBinContent(1,5.22041);
   hmc__1->SetBinContent(2,4.654045);
   hmc__1->SetBinContent(3,4.06687);
   hmc__1->SetBinContent(4,2.854239);
   hmc__1->SetBinContent(5,4.189597);
   hmc__1->SetBinContent(6,3.608181);
   hmc__1->SetBinContent(7,3.212479);
   hmc__1->SetBinContent(8,3.934149);
   hmc__1->SetBinContent(9,5.02764);
   hmc__1->SetBinContent(10,4.504622);
   hmc__1->SetBinContent(11,6.396542);
   hmc__1->SetBinContent(12,7.083937);
   hmc__1->SetBinContent(13,7.798074);
   hmc__1->SetBinContent(14,10.0825);
   hmc__1->SetBinContent(15,13.04607);
   hmc__1->SetBinContent(16,16.69198);
   hmc__1->SetBinContent(17,23.01001);
   hmc__1->SetBinContent(18,25.09833);
   hmc__1->SetBinContent(19,38.92494);
   hmc__1->SetBinContent(20,59.00462);
   hmc__1->SetBinError(0,1.007999);
   hmc__1->SetBinError(1,2.557448);
   hmc__1->SetBinError(2,2.269752);
   hmc__1->SetBinError(3,2.693554);
   hmc__1->SetBinError(4,1.39448);
   hmc__1->SetBinError(5,1.940965);
   hmc__1->SetBinError(6,2.280344);
   hmc__1->SetBinError(7,1.690811);
   hmc__1->SetBinError(8,2.048238);
   hmc__1->SetBinError(9,2.42519);
   hmc__1->SetBinError(10,2.679411);
   hmc__1->SetBinError(11,2.568144);
   hmc__1->SetBinError(12,3.099491);
   hmc__1->SetBinError(13,3.203706);
   hmc__1->SetBinError(14,3.716389);
   hmc__1->SetBinError(15,4.202937);
   hmc__1->SetBinError(16,6.041156);
   hmc__1->SetBinError(17,7.791951);
   hmc__1->SetBinError(18,8.926573);
   hmc__1->SetBinError(19,9.279917);
   hmc__1->SetBinError(20,14.65401);
   hmc__1->SetBinError(21,0.125509);
   hmc__1->SetMinimum(-1.180092);
   hmc__1->SetMaximum(94.4074);
   hmc__1->SetEntries(262.4373);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,-1,1);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(61.95485);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(0,0.1940604);
   hbadmatch_stack_1->SetBinContent(1,0.09250955);
   hbadmatch_stack_1->SetBinContent(2,0.151179);
   hbadmatch_stack_1->SetBinContent(4,0.06195629);
   hbadmatch_stack_1->SetBinContent(5,0.04039596);
   hbadmatch_stack_1->SetBinContent(6,0.2008974);
   hbadmatch_stack_1->SetBinContent(7,0.06195629);
   hbadmatch_stack_1->SetBinContent(8,0.07470649);
   hbadmatch_stack_1->SetBinContent(9,0.08676054);
   hbadmatch_stack_1->SetBinContent(10,0.0127502);
   hbadmatch_stack_1->SetBinContent(11,0.1047717);
   hbadmatch_stack_1->SetBinContent(12,0.2241195);
   hbadmatch_stack_1->SetBinContent(13,0.2496199);
   hbadmatch_stack_1->SetBinContent(14,0.1314099);
   hbadmatch_stack_1->SetBinContent(15,0.2140593);
   hbadmatch_stack_1->SetBinContent(16,0.5414402);
   hbadmatch_stack_1->SetBinContent(17,0.3269929);
   hbadmatch_stack_1->SetBinContent(18,0.8707008);
   hbadmatch_stack_1->SetBinContent(19,0.7688963);
   hbadmatch_stack_1->SetBinContent(20,1.049722);
   hbadmatch_stack_1->SetBinError(0,0.0927667);
   hbadmatch_stack_1->SetBinError(1,0.06571224);
   hbadmatch_stack_1->SetBinError(2,0.09924309);
   hbadmatch_stack_1->SetBinError(4,0.06195629);
   hbadmatch_stack_1->SetBinError(5,0.02338831);
   hbadmatch_stack_1->SetBinError(6,0.1015134);
   hbadmatch_stack_1->SetBinError(7,0.06195629);
   hbadmatch_stack_1->SetBinError(8,0.06325464);
   hbadmatch_stack_1->SetBinError(9,0.06439293);
   hbadmatch_stack_1->SetBinError(10,0.0127502);
   hbadmatch_stack_1->SetBinError(11,0.06673164);
   hbadmatch_stack_1->SetBinError(12,0.1095603);
   hbadmatch_stack_1->SetBinError(13,0.1110342);
   hbadmatch_stack_1->SetBinError(14,0.06938492);
   hbadmatch_stack_1->SetBinError(15,0.1091637);
   hbadmatch_stack_1->SetBinError(16,0.1762938);
   hbadmatch_stack_1->SetBinError(17,0.1343353);
   hbadmatch_stack_1->SetBinError(18,0.2247508);
   hbadmatch_stack_1->SetBinError(19,0.2306738);
   hbadmatch_stack_1->SetBinError(20,0.3325746);
   hbadmatch_stack_1->SetEntries(145);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(0,1.139752);
   hext_stack_2->SetBinContent(1,0.4349078);
   hext_stack_2->SetBinContent(2,0.2481285);
   hext_stack_2->SetBinContent(3,0.2481285);
   hext_stack_2->SetBinContent(4,0.4349078);
   hext_stack_2->SetBinContent(5,0.2849381);
   hext_stack_2->SetBinContent(6,0.3094778);
   hext_stack_2->SetBinContent(8,0.4839872);
   hext_stack_2->SetBinContent(9,0.6830363);
   hext_stack_2->SetBinContent(10,0.07361911);
   hext_stack_2->SetBinContent(11,0.7321157);
   hext_stack_2->SetBinContent(12,0.9311647);
   hext_stack_2->SetBinContent(13,0.793465);
   hext_stack_2->SetBinContent(14,1.179293);
   hext_stack_2->SetBinContent(15,2.110458);
   hext_stack_2->SetBinContent(16,1.004784);
   hext_stack_2->SetBinContent(17,1.513311);
   hext_stack_2->SetBinContent(18,0.6434953);
   hext_stack_2->SetBinContent(19,1.957757);
   hext_stack_2->SetBinContent(20,2.284967);
   hext_stack_2->SetBinError(0,0.4033579);
   hext_stack_2->SetBinError(1,0.282299);
   hext_stack_2->SetBinError(2,0.2005561);
   hext_stack_2->SetBinError(3,0.2005561);
   hext_stack_2->SetBinError(4,0.282299);
   hext_stack_2->SetBinError(5,0.2016789);
   hext_stack_2->SetBinError(6,0.202424);
   hext_stack_2->SetBinError(8,0.2833636);
   hext_stack_2->SetBinError(9,0.3462882);
   hext_stack_2->SetBinError(10,0.03005488);
   hext_stack_2->SetBinError(11,0.3471566);
   hext_stack_2->SetBinError(12,0.4001727);
   hext_stack_2->SetBinError(13,0.348239);
   hext_stack_2->SetBinError(14,0.447617);
   hext_stack_2->SetBinError(15,0.6004159);
   hext_stack_2->SetBinError(16,0.4012998);
   hext_stack_2->SetBinError(17,0.4915664);
   hext_stack_2->SetBinError(18,0.2867962);
   hext_stack_2->SetBinError(19,0.5331689);
   hext_stack_2->SetBinError(20,0.6323121);
   hext_stack_2->SetEntries(360);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(0,0.1591781);
   hdirt_stack_3->SetBinContent(1,0.2780873);
   hdirt_stack_3->SetBinContent(2,0.05569039);
   hdirt_stack_3->SetBinContent(4,0.05242869);
   hdirt_stack_3->SetBinContent(5,0.04420907);
   hdirt_stack_3->SetBinContent(6,0.03444835);
   hdirt_stack_3->SetBinContent(7,0.01643923);
   hdirt_stack_3->SetBinContent(8,0.1151102);
   hdirt_stack_3->SetBinContent(9,0.1179148);
   hdirt_stack_3->SetBinContent(10,0.008219617);
   hdirt_stack_3->SetBinContent(11,0.0255663);
   hdirt_stack_3->SetBinContent(12,0.2027538);
   hdirt_stack_3->SetBinContent(13,0.1616702);
   hdirt_stack_3->SetBinContent(14,0.1654825);
   hdirt_stack_3->SetBinContent(15,0.1408468);
   hdirt_stack_3->SetBinContent(16,0.3698693);
   hdirt_stack_3->SetBinContent(17,0.487626);
   hdirt_stack_3->SetBinContent(18,0.2404784);
   hdirt_stack_3->SetBinContent(19,0.3496769);
   hdirt_stack_3->SetBinContent(20,0.2453259);
   hdirt_stack_3->SetBinError(0,0.07011969);
   hdirt_stack_3->SetBinError(1,0.1105595);
   hdirt_stack_3->SetBinError(2,0.04817714);
   hdirt_stack_3->SetBinError(4,0.0449667);
   hdirt_stack_3->SetBinError(5,0.04420907);
   hdirt_stack_3->SetBinError(6,0.01727775);
   hdirt_stack_3->SetBinError(7,0.01162429);
   hdirt_stack_3->SetBinError(8,0.07474051);
   hdirt_stack_3->SetBinError(9,0.07303154);
   hdirt_stack_3->SetBinError(10,0.008219618);
   hdirt_stack_3->SetBinError(11,0.0147793);
   hdirt_stack_3->SetBinError(12,0.08968126);
   hdirt_stack_3->SetBinError(13,0.08026993);
   hdirt_stack_3->SetBinError(14,0.08213);
   hdirt_stack_3->SetBinError(15,0.07701226);
   hdirt_stack_3->SetBinError(16,0.1217383);
   hdirt_stack_3->SetBinError(17,0.1490111);
   hdirt_stack_3->SetBinError(18,0.09796953);
   hdirt_stack_3->SetBinError(19,0.2147597);
   hdirt_stack_3->SetBinError(20,0.09170962);
   hdirt_stack_3->SetEntries(123);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(0,2.529013);
   houtFV_stack_4->SetBinContent(1,0.6341078);
   houtFV_stack_4->SetBinContent(2,0.3370765);
   houtFV_stack_4->SetBinContent(3,0.438422);
   houtFV_stack_4->SetBinContent(4,0.448239);
   houtFV_stack_4->SetBinContent(5,0.6851086);
   houtFV_stack_4->SetBinContent(6,0.5339009);
   houtFV_stack_4->SetBinContent(7,0.4227385);
   houtFV_stack_4->SetBinContent(8,0.7028759);
   houtFV_stack_4->SetBinContent(9,0.5466511);
   houtFV_stack_4->SetBinContent(10,0.5563829);
   houtFV_stack_4->SetBinContent(11,0.811134);
   houtFV_stack_4->SetBinContent(12,0.8447683);
   houtFV_stack_4->SetBinContent(13,0.7389666);
   houtFV_stack_4->SetBinContent(14,1.30651);
   houtFV_stack_4->SetBinContent(15,1.778411);
   houtFV_stack_4->SetBinContent(16,1.88166);
   houtFV_stack_4->SetBinContent(17,3.136806);
   houtFV_stack_4->SetBinContent(18,2.639221);
   houtFV_stack_4->SetBinContent(19,3.834083);
   houtFV_stack_4->SetBinContent(20,4.053997);
   houtFV_stack_4->SetBinError(0,0.3719294);
   houtFV_stack_4->SetBinError(1,0.1884745);
   houtFV_stack_4->SetBinError(2,0.1284224);
   houtFV_stack_4->SetBinError(3,0.1546859);
   houtFV_stack_4->SetBinError(4,0.1549416);
   houtFV_stack_4->SetBinError(5,0.1901918);
   houtFV_stack_4->SetBinError(6,0.1766249);
   houtFV_stack_4->SetBinError(7,0.1538888);
   houtFV_stack_4->SetBinError(8,0.2006282);
   houtFV_stack_4->SetBinError(9,0.1770845);
   houtFV_stack_4->SetBinError(10,0.1685117);
   houtFV_stack_4->SetBinError(11,0.2138928);
   houtFV_stack_4->SetBinError(12,0.2203849);
   houtFV_stack_4->SetBinError(13,0.197074);
   houtFV_stack_4->SetBinError(14,0.270406);
   houtFV_stack_4->SetBinError(15,0.314469);
   houtFV_stack_4->SetBinError(16,0.3088288);
   houtFV_stack_4->SetBinError(17,0.4254063);
   houtFV_stack_4->SetBinError(18,0.3696103);
   houtFV_stack_4->SetBinError(19,0.4564119);
   houtFV_stack_4->SetBinError(20,0.4774993);
   houtFV_stack_4->SetEntries(747);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hNCpi0inFV_stack_5->SetBinContent(0,8.605791);
   hNCpi0inFV_stack_5->SetBinContent(1,2.142782);
   hNCpi0inFV_stack_5->SetBinContent(2,2.933669);
   hNCpi0inFV_stack_5->SetBinContent(3,2.48902);
   hNCpi0inFV_stack_5->SetBinContent(4,1.27001);
   hNCpi0inFV_stack_5->SetBinContent(5,1.929618);
   hNCpi0inFV_stack_5->SetBinContent(6,1.730999);
   hNCpi0inFV_stack_5->SetBinContent(7,2.026236);
   hNCpi0inFV_stack_5->SetBinContent(8,1.938779);
   hNCpi0inFV_stack_5->SetBinContent(9,2.325062);
   hNCpi0inFV_stack_5->SetBinContent(10,3.108583);
   hNCpi0inFV_stack_5->SetBinContent(11,3.385498);
   hNCpi0inFV_stack_5->SetBinContent(12,3.686118);
   hNCpi0inFV_stack_5->SetBinContent(13,4.05965);
   hNCpi0inFV_stack_5->SetBinContent(14,5.611588);
   hNCpi0inFV_stack_5->SetBinContent(15,6.031109);
   hNCpi0inFV_stack_5->SetBinContent(16,7.332191);
   hNCpi0inFV_stack_5->SetBinContent(17,12.24648);
   hNCpi0inFV_stack_5->SetBinContent(18,15.00325);
   hNCpi0inFV_stack_5->SetBinContent(19,22.6715);
   hNCpi0inFV_stack_5->SetBinContent(20,34.69847);
   hNCpi0inFV_stack_5->SetBinError(0,0.6762167);
   hNCpi0inFV_stack_5->SetBinError(1,0.3356821);
   hNCpi0inFV_stack_5->SetBinError(2,0.406752);
   hNCpi0inFV_stack_5->SetBinError(3,0.3679522);
   hNCpi0inFV_stack_5->SetBinError(4,0.2608056);
   hNCpi0inFV_stack_5->SetBinError(5,0.3222845);
   hNCpi0inFV_stack_5->SetBinError(6,0.3036264);
   hNCpi0inFV_stack_5->SetBinError(7,0.3380016);
   hNCpi0inFV_stack_5->SetBinError(8,0.3317851);
   hNCpi0inFV_stack_5->SetBinError(9,0.3609012);
   hNCpi0inFV_stack_5->SetBinError(10,0.4168628);
   hNCpi0inFV_stack_5->SetBinError(11,0.4282553);
   hNCpi0inFV_stack_5->SetBinError(12,0.4431495);
   hNCpi0inFV_stack_5->SetBinError(13,0.4651744);
   hNCpi0inFV_stack_5->SetBinError(14,0.5488407);
   hNCpi0inFV_stack_5->SetBinError(15,0.560973);
   hNCpi0inFV_stack_5->SetBinError(16,0.6287296);
   hNCpi0inFV_stack_5->SetBinError(17,0.8156383);
   hNCpi0inFV_stack_5->SetBinError(18,0.8966987);
   hNCpi0inFV_stack_5->SetBinError(19,1.115044);
   hNCpi0inFV_stack_5->SetBinError(20,1.364944);
   hNCpi0inFV_stack_5->SetEntries(3802);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_6->SetBinContent(0,2.171603);
   hCCpi0inFV_stack_6->SetBinContent(1,1.047338);
   hCCpi0inFV_stack_6->SetBinContent(2,0.5721515);
   hCCpi0inFV_stack_6->SetBinContent(3,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(4,0.3735324);
   hCCpi0inFV_stack_6->SetBinContent(5,0.8691828);
   hCCpi0inFV_stack_6->SetBinContent(6,0.4482389);
   hCCpi0inFV_stack_6->SetBinContent(7,0.497445);
   hCCpi0inFV_stack_6->SetBinContent(8,0.4400106);
   hCCpi0inFV_stack_6->SetBinContent(9,0.73252);
   hCCpi0inFV_stack_6->SetBinContent(10,0.411783);
   hCCpi0inFV_stack_6->SetBinContent(11,0.8582273);
   hCCpi0inFV_stack_6->SetBinContent(12,0.7343147);
   hCCpi0inFV_stack_6->SetBinContent(13,0.9857292);
   hCCpi0inFV_stack_6->SetBinContent(14,1.071391);
   hCCpi0inFV_stack_6->SetBinContent(15,1.596888);
   hCCpi0inFV_stack_6->SetBinContent(16,2.63895);
   hCCpi0inFV_stack_6->SetBinContent(17,3.31438);
   hCCpi0inFV_stack_6->SetBinContent(18,3.534911);
   hCCpi0inFV_stack_6->SetBinContent(19,6.053035);
   hCCpi0inFV_stack_6->SetBinContent(20,10.05937);
   hCCpi0inFV_stack_6->SetBinError(0,0.3554078);
   hCCpi0inFV_stack_6->SetBinError(1,0.2472177);
   hCCpi0inFV_stack_6->SetBinError(2,0.1780002);
   hCCpi0inFV_stack_6->SetBinError(3,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(4,0.1414417);
   hCCpi0inFV_stack_6->SetBinError(5,0.2251986);
   hCCpi0inFV_stack_6->SetBinError(6,0.1549416);
   hCCpi0inFV_stack_6->SetBinError(7,0.1663818);
   hCCpi0inFV_stack_6->SetBinError(8,0.144553);
   hCCpi0inFV_stack_6->SetBinError(9,0.207062);
   hCCpi0inFV_stack_6->SetBinError(10,0.1431553);
   hCCpi0inFV_stack_6->SetBinError(11,0.2180048);
   hCCpi0inFV_stack_6->SetBinError(12,0.199622);
   hCCpi0inFV_stack_6->SetBinError(13,0.221702);
   hCCpi0inFV_stack_6->SetBinError(14,0.2373631);
   hCCpi0inFV_stack_6->SetBinError(15,0.2905526);
   hCCpi0inFV_stack_6->SetBinError(16,0.3827286);
   hCCpi0inFV_stack_6->SetBinError(17,0.4163532);
   hCCpi0inFV_stack_6->SetBinError(18,0.4374985);
   hCCpi0inFV_stack_6->SetBinError(19,0.5709173);
   hCCpi0inFV_stack_6->SetBinError(20,0.7431233);
   hCCpi0inFV_stack_6->SetEntries(1001);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_7->SetBinContent(0,1.293716);
   hNCinFV_stack_7->SetBinContent(1,0.2241195);
   hNCinFV_stack_7->SetBinContent(2,0.2496199);
   hNCinFV_stack_7->SetBinContent(3,0.149413);
   hNCinFV_stack_7->SetBinContent(4,0.06375098);
   hNCinFV_stack_7->SetBinContent(5,0.1749134);
   hNCinFV_stack_7->SetBinContent(6,0.07470649);
   hNCinFV_stack_7->SetBinContent(7,0.1749134);
   hNCinFV_stack_7->SetBinContent(8,0.06195629);
   hNCinFV_stack_7->SetBinContent(9,0.3607822);
   hNCinFV_stack_7->SetBinContent(10,0.08745668);
   hNCinFV_stack_7->SetBinContent(11,0.2113693);
   hNCinFV_stack_7->SetBinContent(12,0.3115761);
   hNCinFV_stack_7->SetBinContent(13,0.3607822);
   hNCinFV_stack_7->SetBinContent(14,0.1257073);
   hNCinFV_stack_7->SetBinContent(15,0.5594013);
   hNCinFV_stack_7->SetBinContent(16,0.7725652);
   hNCinFV_stack_7->SetBinContent(17,0.7215645);
   hNCinFV_stack_7->SetBinContent(18,1.098686);
   hNCinFV_stack_7->SetBinContent(19,1.729205);
   hNCinFV_stack_7->SetBinContent(20,3.199629);
   hNCinFV_stack_7->SetBinError(0,0.2671524);
   hNCinFV_stack_7->SetBinError(1,0.1095603);
   hNCinFV_stack_7->SetBinError(2,0.1110342);
   hNCinFV_stack_7->SetBinError(3,0.08945557);
   hNCinFV_stack_7->SetBinError(4,0.0285103);
   hNCinFV_stack_7->SetBinError(5,0.09125478);
   hNCinFV_stack_7->SetBinError(6,0.06325464);
   hNCinFV_stack_7->SetBinError(7,0.09125478);
   hNCinFV_stack_7->SetBinError(8,0.06195629);
   hNCinFV_stack_7->SetBinError(9,0.1408658);
   hNCinFV_stack_7->SetBinError(10,0.06452687);
   hNCinFV_stack_7->SetBinError(11,0.1088158);
   hNCinFV_stack_7->SetBinError(12,0.1271502);
   hNCinFV_stack_7->SetBinError(13,0.1408658);
   hNCinFV_stack_7->SetBinError(14,0.06820132);
   hNCinFV_stack_7->SetBinError(15,0.1775429);
   hNCinFV_stack_7->SetBinError(16,0.2008398);
   hNCinFV_stack_7->SetBinError(17,0.1992144);
   hNCinFV_stack_7->SetBinError(18,0.2316044);
   hNCinFV_stack_7->SetBinError(19,0.3085689);
   hNCinFV_stack_7->SetBinError(20,0.4145924);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_8->SetBinContent(0,0.7967474);
   hnumuCCinFV_stack_8->SetBinContent(1,0.3342893);
   hnumuCCinFV_stack_8->SetBinContent(2,0.04457339);
   hnumuCCinFV_stack_8->SetBinContent(3,0.2105302);
   hnumuCCinFV_stack_8->SetBinContent(4,0.1366628);
   hnumuCCinFV_stack_8->SetBinContent(5,0.161231);
   hnumuCCinFV_stack_8->SetBinContent(6,0.2593309);
   hnumuCCinFV_stack_8->SetBinContent(7,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(8,0.116723);
   hnumuCCinFV_stack_8->SetBinContent(9,0.1129571);
   hnumuCCinFV_stack_8->SetBinContent(10,0.1838709);
   hnumuCCinFV_stack_8->SetBinContent(11,0.2059036);
   hnumuCCinFV_stack_8->SetBinContent(12,0.1491212);
   hnumuCCinFV_stack_8->SetBinContent(13,0.4481906);
   hnumuCCinFV_stack_8->SetBinContent(14,0.4757879);
   hnumuCCinFV_stack_8->SetBinContent(15,0.422403);
   hnumuCCinFV_stack_8->SetBinContent(16,1.995104);
   hnumuCCinFV_stack_8->SetBinContent(17,1.120892);
   hnumuCCinFV_stack_8->SetBinContent(18,1.000474);
   hnumuCCinFV_stack_8->SetBinContent(19,1.333106);
   hnumuCCinFV_stack_8->SetBinContent(20,2.449796);
   hnumuCCinFV_stack_8->SetBinError(0,0.2066805);
   hnumuCCinFV_stack_8->SetBinError(1,0.1447434);
   hnumuCCinFV_stack_8->SetBinError(2,0.0259458);
   hnumuCCinFV_stack_8->SetBinError(3,0.1232062);
   hnumuCCinFV_stack_8->SetBinError(4,0.08854226);
   hnumuCCinFV_stack_8->SetBinError(5,0.09651489);
   hnumuCCinFV_stack_8->SetBinError(6,0.1224253);
   hnumuCCinFV_stack_8->SetBinError(7,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(8,0.06687934);
   hnumuCCinFV_stack_8->SetBinError(9,0.0669989);
   hnumuCCinFV_stack_8->SetBinError(10,0.08893363);
   hnumuCCinFV_stack_8->SetBinError(11,0.1217075);
   hnumuCCinFV_stack_8->SetBinError(12,0.0896319);
   hnumuCCinFV_stack_8->SetBinError(13,0.2151066);
   hnumuCCinFV_stack_8->SetBinError(14,0.2224773);
   hnumuCCinFV_stack_8->SetBinError(15,0.1567283);
   hnumuCCinFV_stack_8->SetBinError(16,0.7300605);
   hnumuCCinFV_stack_8->SetBinError(17,0.2627274);
   hnumuCCinFV_stack_8->SetBinError(18,0.2284726);
   hnumuCCinFV_stack_8->SetBinError(19,0.2786051);
   hnumuCCinFV_stack_8->SetBinError(20,0.3760923);
   hnumuCCinFV_stack_8->SetEntries(284);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_9->SetBinContent(0,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_9->SetBinContent(4,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(6,0.01618016);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(10,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.01533201);
   hnueCCinFV_stack_9->SetBinContent(15,0.1924905);
   hnueCCinFV_stack_9->SetBinContent(16,0.155415);
   hnueCCinFV_stack_9->SetBinContent(17,0.1419592);
   hnueCCinFV_stack_9->SetBinContent(18,0.06710751);
   hnueCCinFV_stack_9->SetBinContent(19,0.2276848);
   hnueCCinFV_stack_9->SetBinContent(20,0.9633422);
   hnueCCinFV_stack_9->SetBinError(0,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.02331381);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.06910958);
   hnueCCinFV_stack_9->SetBinError(4,0.0127502);
   hnueCCinFV_stack_9->SetBinError(6,0.01618016);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(10,0.06195629);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.01533201);
   hnueCCinFV_stack_9->SetBinError(15,0.1138987);
   hnueCCinFV_stack_9->SetBinError(16,0.09040903);
   hnueCCinFV_stack_9->SetBinError(17,0.08945862);
   hnueCCinFV_stack_9->SetBinError(18,0.03368985);
   hnueCCinFV_stack_9->SetBinError(19,0.1358152);
   hnueCCinFV_stack_9->SetBinError(20,0.4961107);
   hnueCCinFV_stack_9->SetEntries(46);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);
   hmcerror__2->SetBinContent(0,16.95182);
   hmcerror__2->SetBinContent(1,5.22041);
   hmcerror__2->SetBinContent(2,4.654045);
   hmcerror__2->SetBinContent(3,4.06687);
   hmcerror__2->SetBinContent(4,2.854239);
   hmcerror__2->SetBinContent(5,4.189597);
   hmcerror__2->SetBinContent(6,3.608181);
   hmcerror__2->SetBinContent(7,3.212479);
   hmcerror__2->SetBinContent(8,3.934149);
   hmcerror__2->SetBinContent(9,5.02764);
   hmcerror__2->SetBinContent(10,4.504622);
   hmcerror__2->SetBinContent(11,6.396542);
   hmcerror__2->SetBinContent(12,7.083937);
   hmcerror__2->SetBinContent(13,7.798074);
   hmcerror__2->SetBinContent(14,10.0825);
   hmcerror__2->SetBinContent(15,13.04607);
   hmcerror__2->SetBinContent(16,16.69198);
   hmcerror__2->SetBinContent(17,23.01001);
   hmcerror__2->SetBinContent(18,25.09833);
   hmcerror__2->SetBinContent(19,38.92494);
   hmcerror__2->SetBinContent(20,59.00462);
   hmcerror__2->SetBinError(0,1.007999);
   hmcerror__2->SetBinError(1,2.557448);
   hmcerror__2->SetBinError(2,2.269752);
   hmcerror__2->SetBinError(3,2.693554);
   hmcerror__2->SetBinError(4,1.39448);
   hmcerror__2->SetBinError(5,1.940965);
   hmcerror__2->SetBinError(6,2.280344);
   hmcerror__2->SetBinError(7,1.690811);
   hmcerror__2->SetBinError(8,2.048238);
   hmcerror__2->SetBinError(9,2.42519);
   hmcerror__2->SetBinError(10,2.679411);
   hmcerror__2->SetBinError(11,2.568144);
   hmcerror__2->SetBinError(12,3.099491);
   hmcerror__2->SetBinError(13,3.203706);
   hmcerror__2->SetBinError(14,3.716389);
   hmcerror__2->SetBinError(15,4.202937);
   hmcerror__2->SetBinError(16,6.041156);
   hmcerror__2->SetBinError(17,7.791951);
   hmcerror__2->SetBinError(18,8.926573);
   hmcerror__2->SetBinError(19,9.279917);
   hmcerror__2->SetBinError(20,14.65401);
   hmcerror__2->SetBinError(21,0.125509);
   hmcerror__2->SetEntries(262.4373);

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
   
   Double_t _fx3001[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3001[20] = {
   4,
   8,
   5,
   3,
   2,
   8,
   6,
   4,
   3,
   8,
   5,
   4,
   6,
   11,
   7,
   17,
   21,
   27,
   37,
   53};
   Double_t _felx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3001[20] = {
   2.29683,
   3.0307,
   2.48995,
   2.143368,
   2,
   3.0307,
   2.67925,
   2.29683,
   2.143368,
   3.0307,
   2.48995,
   2.29683,
   2.67925,
   3.4975,
   2.85954,
   4.2835,
   4.7354,
   5.3414,
   6.2203,
   7.4105};
   Double_t _fehx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3001[20] = {
   1.98186,
   2.7896,
   2.21064,
   1.72422,
   1.51917,
   2.7896,
   2.41858,
   1.98186,
   1.72422,
   2.7896,
   2.21064,
   1.98186,
   2.41858,
   3.27,
   2.61053,
   4.0673,
   4.5229,
   5.1322,
   6.0141,
   7.2068};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.96#pm0.06(data err)#pm0.20(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.46/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 239.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 16.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 26.3","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  136.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 36.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 10.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 11.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all");
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
   
   Double_t _fx3002[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3002[20] = {
   0.489894,
   0.4876945,
   0.6623162,
   0.4885647,
   0.4632821,
   0.6319928,
   0.5263261,
   0.5206306,
   0.4823714,
   0.5948139,
   0.4014894,
   0.4375379,
   0.410833,
   0.3685979,
   0.3221613,
   0.3619197,
   0.3386331,
   0.3556641,
   0.2384054,
   0.2483536};
   Double_t _fehx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3002[20] = {
   0.489894,
   0.4876945,
   0.6623162,
   0.4885647,
   0.4632821,
   0.6319928,
   0.5263261,
   0.5206306,
   0.4823714,
   0.5948139,
   0.4014894,
   0.4375379,
   0.410833,
   0.3685979,
   0.3221613,
   0.3619197,
   0.3386331,
   0.3556641,
   0.2384054,
   0.2483536};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
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
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos#theta");
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
   
   Double_t _fx3003[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3003[20] = {
   0.2172767,
   0.2337044,
   0.2474109,
   0.2567379,
   0.2456925,
   0.2357731,
   0.2968457,
   0.2611345,
   0.2386272,
   0.25967,
   0.2238026,
   0.2357393,
   0.2365115,
   0.2102341,
   0.2310951,
   0.2387423,
   0.2220556,
   0.2250157,
   0.1931729,
   0.2030865};
   Double_t _fehx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3003[20] = {
   0.2172767,
   0.2337044,
   0.2474109,
   0.2567379,
   0.2456925,
   0.2357731,
   0.2968457,
   0.2611345,
   0.2386272,
   0.25967,
   0.2238026,
   0.2357393,
   0.2365115,
   0.2102341,
   0.2310951,
   0.2387423,
   0.2220556,
   0.2250157,
   0.1931729,
   0.2030865};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
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
   
   Double_t _fx3004[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3004[20] = {
   0.7662233,
   1.718935,
   1.229447,
   1.051068,
   0.4773729,
   2.217184,
   1.867717,
   1.016738,
   0.5967014,
   1.775954,
   0.7816724,
   0.5646578,
   0.7694207,
   1.090999,
   0.5365602,
   1.018453,
   0.9126463,
   1.075769,
   0.9505473,
   0.8982347};
   Double_t _felx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3004[20] = {
   0.4399712,
   0.651197,
   0.6122522,
   0.7509421,
   0.4773729,
   0.8399524,
   0.8340133,
   0.5838188,
   0.4263169,
   0.6727979,
   0.389265,
   0.3242307,
   0.3435784,
   0.3468881,
   0.2191879,
   0.2566203,
   0.2057974,
   0.212819,
   0.1598024,
   0.1255919};
   Double_t _fehx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3004[20] = {
   0.3796368,
   0.5993926,
   0.5435729,
   0.6040911,
   0.3626053,
   0.773132,
   0.7528704,
   0.5037582,
   0.3429482,
   0.6192751,
   0.3455993,
   0.2797682,
   0.3101509,
   0.3243242,
   0.2001009,
   0.2436679,
   0.1965623,
   0.2044837,
   0.154505,
   0.1221396};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.289348);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_10_pi0_costheta_all",20,-1,1);

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
