#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr 15 00:03:23 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
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
   pad1->Range(-1.307692,-2.045578,1.25641,172.3668);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hmc__1->SetBinContent(1,15.4672);
   hmc__1->SetBinContent(2,12.84543);
   hmc__1->SetBinContent(3,11.76985);
   hmc__1->SetBinContent(4,10.97062);
   hmc__1->SetBinContent(5,9.14139);
   hmc__1->SetBinContent(6,11.84535);
   hmc__1->SetBinContent(7,12.24833);
   hmc__1->SetBinContent(8,11.11857);
   hmc__1->SetBinContent(9,10.27725);
   hmc__1->SetBinContent(10,10.54035);
   hmc__1->SetBinContent(11,13.58147);
   hmc__1->SetBinContent(12,13.55113);
   hmc__1->SetBinContent(13,15.58006);
   hmc__1->SetBinContent(14,16.6664);
   hmc__1->SetBinContent(15,17.62128);
   hmc__1->SetBinContent(16,18.62221);
   hmc__1->SetBinContent(17,20.2804);
   hmc__1->SetBinContent(18,24.44945);
   hmc__1->SetBinContent(19,27.54364);
   hmc__1->SetBinContent(20,31.63515);
   hmc__1->SetBinContent(21,40.75843);
   hmc__1->SetBinContent(22,45.26965);
   hmc__1->SetBinContent(23,54.42897);
   hmc__1->SetBinContent(24,72.54636);
   hmc__1->SetBinContent(25,102.2789);
   hmc__1->SetBinError(1,4.33431);
   hmc__1->SetBinError(2,4.060936);
   hmc__1->SetBinError(3,4.019491);
   hmc__1->SetBinError(4,3.418001);
   hmc__1->SetBinError(5,3.534475);
   hmc__1->SetBinError(6,3.563448);
   hmc__1->SetBinError(7,3.562534);
   hmc__1->SetBinError(8,3.323356);
   hmc__1->SetBinError(9,4.392303);
   hmc__1->SetBinError(10,3.890663);
   hmc__1->SetBinError(11,5.03964);
   hmc__1->SetBinError(12,4.303301);
   hmc__1->SetBinError(13,4.231831);
   hmc__1->SetBinError(14,4.66256);
   hmc__1->SetBinError(15,4.903884);
   hmc__1->SetBinError(16,5.51602);
   hmc__1->SetBinError(17,5.15002);
   hmc__1->SetBinError(18,6.702588);
   hmc__1->SetBinError(19,7.410541);
   hmc__1->SetBinError(20,8.492887);
   hmc__1->SetBinError(21,10.82659);
   hmc__1->SetBinError(22,11.94097);
   hmc__1->SetBinError(23,13.63494);
   hmc__1->SetBinError(24,15.0625);
   hmc__1->SetBinError(25,22.86376);
   hmc__1->SetBinError(26,0.125509);
   hmc__1->SetMinimum(-2.045578);
   hmc__1->SetMaximum(163.6462);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-1,1);
   hs1_stack_1->SetMinimum(-2.770604e-09);
   hs1_stack_1->SetMaximum(107.3928);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.2353603);
   hbadmatch_stack_1->SetBinContent(2,0.3278943);
   hbadmatch_stack_1->SetBinContent(3,0.1968376);
   hbadmatch_stack_1->SetBinContent(4,0.2368031);
   hbadmatch_stack_1->SetBinContent(5,0.1858689);
   hbadmatch_stack_1->SetBinContent(6,0.1406028);
   hbadmatch_stack_1->SetBinContent(7,0.4737393);
   hbadmatch_stack_1->SetBinContent(8,0.1134489);
   hbadmatch_stack_1->SetBinContent(9,0.2271223);
   hbadmatch_stack_1->SetBinContent(10,0.4115733);
   hbadmatch_stack_1->SetBinContent(11,0.4687363);
   hbadmatch_stack_1->SetBinContent(12,0.3083077);
   hbadmatch_stack_1->SetBinContent(13,0.2329875);
   hbadmatch_stack_1->SetBinContent(14,0.3689364);
   hbadmatch_stack_1->SetBinContent(15,0.5340198);
   hbadmatch_stack_1->SetBinContent(16,0.808672);
   hbadmatch_stack_1->SetBinContent(17,0.2793313);
   hbadmatch_stack_1->SetBinContent(18,0.3009126);
   hbadmatch_stack_1->SetBinContent(19,0.5714304);
   hbadmatch_stack_1->SetBinContent(20,1.019089);
   hbadmatch_stack_1->SetBinContent(21,0.6764952);
   hbadmatch_stack_1->SetBinContent(22,1.114231);
   hbadmatch_stack_1->SetBinContent(23,1.243158);
   hbadmatch_stack_1->SetBinContent(24,1.355405);
   hbadmatch_stack_1->SetBinContent(25,1.902052);
   hbadmatch_stack_1->SetBinError(1,0.09624665);
   hbadmatch_stack_1->SetBinError(2,0.1400661);
   hbadmatch_stack_1->SetBinError(3,0.09854411);
   hbadmatch_stack_1->SetBinError(4,0.1172006);
   hbadmatch_stack_1->SetBinError(5,0.1073114);
   hbadmatch_stack_1->SetBinError(6,0.06980901);
   hbadmatch_stack_1->SetBinError(7,0.1559873);
   hbadmatch_stack_1->SetBinError(8,0.07836619);
   hbadmatch_stack_1->SetBinError(9,0.1099502);
   hbadmatch_stack_1->SetBinError(10,0.1643897);
   hbadmatch_stack_1->SetBinError(11,0.1561851);
   hbadmatch_stack_1->SetBinError(12,0.1337029);
   hbadmatch_stack_1->SetBinError(13,0.1272638);
   hbadmatch_stack_1->SetBinError(14,0.1179768);
   hbadmatch_stack_1->SetBinError(15,0.1704897);
   hbadmatch_stack_1->SetBinError(16,0.3906066);
   hbadmatch_stack_1->SetBinError(17,0.1055243);
   hbadmatch_stack_1->SetBinError(18,0.1267366);
   hbadmatch_stack_1->SetBinError(19,0.1696428);
   hbadmatch_stack_1->SetBinError(20,0.2418961);
   hbadmatch_stack_1->SetBinError(21,0.1890635);
   hbadmatch_stack_1->SetBinError(22,0.2443068);
   hbadmatch_stack_1->SetBinError(23,0.2638643);
   hbadmatch_stack_1->SetBinError(24,0.2886417);
   hbadmatch_stack_1->SetBinError(25,0.5026428);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.9557045);
   hext_stack_2->SetBinContent(2,0.5330666);
   hext_stack_2->SetBinContent(3,0.7566555);
   hext_stack_2->SetBinContent(4,0.4717173);
   hext_stack_2->SetBinContent(5,1.142484);
   hext_stack_2->SetBinContent(6,0.9802442);
   hext_stack_2->SetBinContent(7,1.66328);
   hext_stack_2->SetBinContent(8,1.191563);
   hext_stack_2->SetBinContent(9,0.5576063);
   hext_stack_2->SetBinContent(10,1.252912);
   hext_stack_2->SetBinContent(11,1.537851);
   hext_stack_2->SetBinContent(12,1.451962);
   hext_stack_2->SetBinContent(13,2.085918);
   hext_stack_2->SetBinContent(14,1.014322);
   hext_stack_2->SetBinContent(15,2.621716);
   hext_stack_2->SetBinContent(16,1.935949);
   hext_stack_2->SetBinContent(17,2.009568);
   hext_stack_2->SetBinContent(18,2.383126);
   hext_stack_2->SetBinContent(19,2.980274);
   hext_stack_2->SetBinContent(20,3.252942);
   hext_stack_2->SetBinContent(21,3.115242);
   hext_stack_2->SetBinContent(22,2.879384);
   hext_stack_2->SetBinContent(23,3.063431);
   hext_stack_2->SetBinContent(24,3.348369);
   hext_stack_2->SetBinContent(25,4.567204);
   hext_stack_2->SetBinError(1,0.4005488);
   hext_stack_2->SetBinError(2,0.2844242);
   hext_stack_2->SetBinError(3,0.34759);
   hext_stack_2->SetBinError(4,0.2830978);
   hext_stack_2->SetBinError(5,0.4471122);
   hext_stack_2->SetBinError(6,0.4009245);
   hext_stack_2->SetBinError(7,0.5297697);
   hext_stack_2->SetBinError(8,0.4477851);
   hext_stack_2->SetBinError(9,0.284953);
   hext_stack_2->SetBinError(10,0.4486249);
   hext_stack_2->SetBinError(11,0.4918726);
   hext_stack_2->SetBinError(12,0.4908002);
   hext_stack_2->SetBinError(13,0.6001651);
   hext_stack_2->SetBinError(14,0.3521084);
   hext_stack_2->SetBinError(15,0.6915974);
   hext_stack_2->SetBinError(16,0.5667272);
   hext_stack_2->SetBinError(17,0.5675236);
   hext_stack_2->SetBinError(18,0.6332638);
   hext_stack_2->SetBinError(19,0.7210303);
   hext_stack_2->SetBinError(20,0.7486044);
   hext_stack_2->SetBinError(21,0.7221778);
   hext_stack_2->SetBinError(22,0.6938793);
   hext_stack_2->SetBinError(23,0.6955047);
   hext_stack_2->SetBinError(24,0.7241555);
   hext_stack_2->SetBinError(25,0.8731698);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.2923998);
   hdirt_stack_3->SetBinContent(2,0.2093702);
   hdirt_stack_3->SetBinContent(3,0.1578753);
   hdirt_stack_3->SetBinContent(4,0.1408468);
   hdirt_stack_3->SetBinContent(5,0.1397085);
   hdirt_stack_3->SetBinContent(6,0.1856119);
   hdirt_stack_3->SetBinContent(7,0.08687703);
   hdirt_stack_3->SetBinContent(8,0.09663776);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.1326081);
   hdirt_stack_3->SetBinContent(11,0.08474559);
   hdirt_stack_3->SetBinContent(12,0.1118214);
   hdirt_stack_3->SetBinContent(13,0.03449719);
   hdirt_stack_3->SetBinContent(14,0.1222041);
   hdirt_stack_3->SetBinContent(15,0.4299991);
   hdirt_stack_3->SetBinContent(16,0.2227787);
   hdirt_stack_3->SetBinContent(17,0.111741);
   hdirt_stack_3->SetBinContent(18,0.261718);
   hdirt_stack_3->SetBinContent(19,0.3527407);
   hdirt_stack_3->SetBinContent(20,0.4305176);
   hdirt_stack_3->SetBinContent(21,0.4054504);
   hdirt_stack_3->SetBinContent(22,0.4626151);
   hdirt_stack_3->SetBinContent(23,0.4111562);
   hdirt_stack_3->SetBinContent(24,0.640582);
   hdirt_stack_3->SetBinContent(25,0.5807336);
   hdirt_stack_3->SetBinError(1,0.1093281);
   hdirt_stack_3->SetBinError(2,0.09353432);
   hdirt_stack_3->SetBinError(3,0.08273303);
   hdirt_stack_3->SetBinError(4,0.07701226);
   hdirt_stack_3->SetBinError(5,0.07251629);
   hdirt_stack_3->SetBinError(6,0.0931166);
   hdirt_stack_3->SetBinError(7,0.04817182);
   hdirt_stack_3->SetBinError(8,0.06305907);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.07576143);
   hdirt_stack_3->SetBinError(11,0.05484277);
   hdirt_stack_3->SetBinError(12,0.06766636);
   hdirt_stack_3->SetBinError(13,0.01730547);
   hdirt_stack_3->SetBinError(14,0.06476784);
   hdirt_stack_3->SetBinError(15,0.3049962);
   hdirt_stack_3->SetBinError(16,0.09647829);
   hdirt_stack_3->SetBinError(17,0.06855675);
   hdirt_stack_3->SetBinError(18,0.106154);
   hdirt_stack_3->SetBinError(19,0.1213297);
   hdirt_stack_3->SetBinError(20,0.1300376);
   hdirt_stack_3->SetBinError(21,0.1237146);
   hdirt_stack_3->SetBinError(22,0.1360431);
   hdirt_stack_3->SetBinError(23,0.1271746);
   hdirt_stack_3->SetBinError(24,0.242177);
   hdirt_stack_3->SetBinError(25,0.153772);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,2.323292);
   houtFV_stack_4->SetBinContent(2,1.303187);
   houtFV_stack_4->SetBinContent(3,1.223912);
   houtFV_stack_4->SetBinContent(4,1.320355);
   houtFV_stack_4->SetBinContent(5,0.8660338);
   houtFV_stack_4->SetBinContent(6,1.306466);
   houtFV_stack_4->SetBinContent(7,1.480833);
   houtFV_stack_4->SetBinContent(8,1.195198);
   houtFV_stack_4->SetBinContent(9,1.267556);
   houtFV_stack_4->SetBinContent(10,0.9329337);
   houtFV_stack_4->SetBinContent(11,1.29624);
   houtFV_stack_4->SetBinContent(12,1.217284);
   houtFV_stack_4->SetBinContent(13,1.583428);
   houtFV_stack_4->SetBinContent(14,1.771581);
   houtFV_stack_4->SetBinContent(15,1.730338);
   houtFV_stack_4->SetBinContent(16,1.498782);
   houtFV_stack_4->SetBinContent(17,1.907137);
   houtFV_stack_4->SetBinContent(18,2.457625);
   houtFV_stack_4->SetBinContent(19,2.53043);
   houtFV_stack_4->SetBinContent(20,3.255875);
   houtFV_stack_4->SetBinContent(21,5.150833);
   houtFV_stack_4->SetBinContent(22,4.469824);
   houtFV_stack_4->SetBinContent(23,6.062949);
   houtFV_stack_4->SetBinContent(24,7.489015);
   houtFV_stack_4->SetBinContent(25,7.461623);
   houtFV_stack_4->SetBinError(1,0.3535598);
   houtFV_stack_4->SetBinError(2,0.2723008);
   houtFV_stack_4->SetBinError(3,0.2504286);
   houtFV_stack_4->SetBinError(4,0.2735045);
   houtFV_stack_4->SetBinError(5,0.2161675);
   houtFV_stack_4->SetBinError(6,0.2674565);
   houtFV_stack_4->SetBinError(7,0.2879575);
   houtFV_stack_4->SetBinError(8,0.2564501);
   houtFV_stack_4->SetBinError(9,0.2623898);
   houtFV_stack_4->SetBinError(10,0.2269961);
   houtFV_stack_4->SetBinError(11,0.2744142);
   houtFV_stack_4->SetBinError(12,0.2565667);
   houtFV_stack_4->SetBinError(13,0.2954969);
   houtFV_stack_4->SetBinError(14,0.3150262);
   houtFV_stack_4->SetBinError(15,0.3239454);
   houtFV_stack_4->SetBinError(16,0.2810912);
   houtFV_stack_4->SetBinError(17,0.3219135);
   houtFV_stack_4->SetBinError(18,0.3673892);
   houtFV_stack_4->SetBinError(19,0.3687371);
   houtFV_stack_4->SetBinError(20,0.4134146);
   houtFV_stack_4->SetBinError(21,0.5476231);
   houtFV_stack_4->SetBinError(22,0.4823097);
   houtFV_stack_4->SetBinError(23,0.5771997);
   houtFV_stack_4->SetBinError(24,0.6498362);
   houtFV_stack_4->SetBinError(25,0.6302604);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hNCpi0inFV_stack_5->SetBinContent(1,6.473964);
   hNCpi0inFV_stack_5->SetBinContent(2,6.641699);
   hNCpi0inFV_stack_5->SetBinContent(3,5.599397);
   hNCpi0inFV_stack_5->SetBinContent(4,6.146049);
   hNCpi0inFV_stack_5->SetBinContent(5,4.221814);
   hNCpi0inFV_stack_5->SetBinContent(6,5.289616);
   hNCpi0inFV_stack_5->SetBinContent(7,5.688649);
   hNCpi0inFV_stack_5->SetBinContent(8,4.844966);
   hNCpi0inFV_stack_5->SetBinContent(9,5.22407);
   hNCpi0inFV_stack_5->SetBinContent(10,4.69193);
   hNCpi0inFV_stack_5->SetBinContent(11,6.300845);
   hNCpi0inFV_stack_5->SetBinContent(12,7.421443);
   hNCpi0inFV_stack_5->SetBinContent(13,7.51806);
   hNCpi0inFV_stack_5->SetBinContent(14,8.651407);
   hNCpi0inFV_stack_5->SetBinContent(15,8.088229);
   hNCpi0inFV_stack_5->SetBinContent(16,9.396678);
   hNCpi0inFV_stack_5->SetBinContent(17,9.910462);
   hNCpi0inFV_stack_5->SetBinContent(18,12.481);
   hNCpi0inFV_stack_5->SetBinContent(19,13.96095);
   hNCpi0inFV_stack_5->SetBinContent(20,14.67354);
   hNCpi0inFV_stack_5->SetBinContent(21,20.37853);
   hNCpi0inFV_stack_5->SetBinContent(22,24.01406);
   hNCpi0inFV_stack_5->SetBinContent(23,28.92614);
   hNCpi0inFV_stack_5->SetBinContent(24,39.21238);
   hNCpi0inFV_stack_5->SetBinContent(25,54.82918);
   hNCpi0inFV_stack_5->SetBinError(1,0.5897244);
   hNCpi0inFV_stack_5->SetBinError(2,0.6067992);
   hNCpi0inFV_stack_5->SetBinError(3,0.5532971);
   hNCpi0inFV_stack_5->SetBinError(4,0.5809446);
   hNCpi0inFV_stack_5->SetBinError(5,0.4738693);
   hNCpi0inFV_stack_5->SetBinError(6,0.5356723);
   hNCpi0inFV_stack_5->SetBinError(7,0.5543245);
   hNCpi0inFV_stack_5->SetBinError(8,0.5068396);
   hNCpi0inFV_stack_5->SetBinError(9,0.5377339);
   hNCpi0inFV_stack_5->SetBinError(10,0.4896466);
   hNCpi0inFV_stack_5->SetBinError(11,0.5800187);
   hNCpi0inFV_stack_5->SetBinError(12,0.629634);
   hNCpi0inFV_stack_5->SetBinError(13,0.6378218);
   hNCpi0inFV_stack_5->SetBinError(14,0.6833714);
   hNCpi0inFV_stack_5->SetBinError(15,0.6482158);
   hNCpi0inFV_stack_5->SetBinError(16,0.7141665);
   hNCpi0inFV_stack_5->SetBinError(17,0.7292652);
   hNCpi0inFV_stack_5->SetBinError(18,0.8218171);
   hNCpi0inFV_stack_5->SetBinError(19,0.8613947);
   hNCpi0inFV_stack_5->SetBinError(20,0.8926455);
   hNCpi0inFV_stack_5->SetBinError(21,1.047952);
   hNCpi0inFV_stack_5->SetBinError(22,1.148284);
   hNCpi0inFV_stack_5->SetBinError(23,1.251769);
   hNCpi0inFV_stack_5->SetBinError(24,1.45773);
   hNCpi0inFV_stack_5->SetBinError(25,1.716369);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_6->SetBinContent(1,3.198511);
   hCCpi0inFV_stack_6->SetBinContent(2,2.239908);
   hCCpi0inFV_stack_6->SetBinContent(3,2.365581);
   hCCpi0inFV_stack_6->SetBinContent(4,1.23935);
   hCCpi0inFV_stack_6->SetBinContent(5,1.492335);
   hCCpi0inFV_stack_6->SetBinContent(6,2.082695);
   hCCpi0inFV_stack_6->SetBinContent(7,1.842162);
   hCCpi0inFV_stack_6->SetBinContent(8,1.893922);
   hCCpi0inFV_stack_6->SetBinContent(9,1.616445);
   hCCpi0inFV_stack_6->SetBinContent(10,1.763979);
   hCCpi0inFV_stack_6->SetBinContent(11,1.899105);
   hCCpi0inFV_stack_6->SetBinContent(12,1.727302);
   hCCpi0inFV_stack_6->SetBinContent(13,2.536521);
   hCCpi0inFV_stack_6->SetBinContent(14,2.728218);
   hCCpi0inFV_stack_6->SetBinContent(15,1.694543);
   hCCpi0inFV_stack_6->SetBinContent(16,2.54361);
   hCCpi0inFV_stack_6->SetBinContent(17,3.089659);
   hCCpi0inFV_stack_6->SetBinContent(18,3.445091);
   hCCpi0inFV_stack_6->SetBinContent(19,3.88885);
   hCCpi0inFV_stack_6->SetBinContent(20,4.461869);
   hCCpi0inFV_stack_6->SetBinContent(21,6.166936);
   hCCpi0inFV_stack_6->SetBinContent(22,7.594804);
   hCCpi0inFV_stack_6->SetBinContent(23,8.992058);
   hCCpi0inFV_stack_6->SetBinContent(24,13.16616);
   hCCpi0inFV_stack_6->SetBinContent(25,20.68576);
   hCCpi0inFV_stack_6->SetBinError(1,0.4255416);
   hCCpi0inFV_stack_6->SetBinError(2,0.3554067);
   hCCpi0inFV_stack_6->SetBinError(3,0.3616634);
   hCCpi0inFV_stack_6->SetBinError(4,0.2481902);
   hCCpi0inFV_stack_6->SetBinError(5,0.2881818);
   hCCpi0inFV_stack_6->SetBinError(6,0.3517448);
   hCCpi0inFV_stack_6->SetBinError(7,0.3157588);
   hCCpi0inFV_stack_6->SetBinError(8,0.3315208);
   hCCpi0inFV_stack_6->SetBinError(9,0.2984024);
   hCCpi0inFV_stack_6->SetBinError(10,0.307606);
   hCCpi0inFV_stack_6->SetBinError(11,0.333111);
   hCCpi0inFV_stack_6->SetBinError(12,0.3053362);
   hCCpi0inFV_stack_6->SetBinError(13,0.3790566);
   hCCpi0inFV_stack_6->SetBinError(14,0.384213);
   hCCpi0inFV_stack_6->SetBinError(15,0.2977844);
   hCCpi0inFV_stack_6->SetBinError(16,0.3605379);
   hCCpi0inFV_stack_6->SetBinError(17,0.4075928);
   hCCpi0inFV_stack_6->SetBinError(18,0.4341355);
   hCCpi0inFV_stack_6->SetBinError(19,0.4578606);
   hCCpi0inFV_stack_6->SetBinError(20,0.4897788);
   hCCpi0inFV_stack_6->SetBinError(21,0.5653654);
   hCCpi0inFV_stack_6->SetBinError(22,0.645743);
   hCCpi0inFV_stack_6->SetBinError(23,0.6940016);
   hCCpi0inFV_stack_6->SetBinError(24,0.8445868);
   hCCpi0inFV_stack_6->SetBinError(25,1.058621);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_7->SetBinContent(1,0.8964778);
   hNCinFV_stack_7->SetBinContent(2,0.6596082);
   hNCinFV_stack_7->SetBinContent(3,0.7343147);
   hNCinFV_stack_7->SetBinContent(4,0.5721515);
   hNCinFV_stack_7->SetBinContent(5,0.411783);
   hNCinFV_stack_7->SetBinContent(6,0.4737393);
   hNCinFV_stack_7->SetBinContent(7,0.2496199);
   hNCinFV_stack_7->SetBinContent(8,0.3990328);
   hNCinFV_stack_7->SetBinContent(9,0.661368);
   hNCinFV_stack_7->SetBinContent(10,0.1986191);
   hNCinFV_stack_7->SetBinContent(11,0.7707705);
   hNCinFV_stack_7->SetBinContent(12,0.2641647);
   hNCinFV_stack_7->SetBinContent(13,0.2751203);
   hNCinFV_stack_7->SetBinContent(14,0.5356956);
   hNCinFV_stack_7->SetBinContent(15,0.5594013);
   hNCinFV_stack_7->SetBinContent(16,0.411783);
   hNCinFV_stack_7->SetBinContent(17,0.5484458);
   hNCinFV_stack_7->SetBinContent(18,0.6851086);
   hNCinFV_stack_7->SetBinContent(19,0.9839345);
   hNCinFV_stack_7->SetBinContent(20,1.27001);
   hNCinFV_stack_7->SetBinContent(21,1.379378);
   hNCinFV_stack_7->SetBinContent(22,1.669043);
   hNCinFV_stack_7->SetBinContent(23,2.563726);
   hNCinFV_stack_7->SetBinContent(24,3.77178);
   hNCinFV_stack_7->SetBinContent(25,4.79576);
   hNCinFV_stack_7->SetBinError(1,0.2191205);
   hNCinFV_stack_7->SetBinError(2,0.1893351);
   hNCinFV_stack_7->SetBinError(3,0.199622);
   hNCinFV_stack_7->SetBinError(4,0.1780002);
   hNCinFV_stack_7->SetBinError(5,0.1431553);
   hNCinFV_stack_7->SetBinError(6,0.1559873);
   hNCinFV_stack_7->SetBinError(7,0.1110342);
   hNCinFV_stack_7->SetBinError(8,0.1425864);
   hNCinFV_stack_7->SetBinError(9,0.1893433);
   hNCinFV_stack_7->SetBinError(10,0.1080662);
   hNCinFV_stack_7->SetBinError(11,0.2082363);
   hNCinFV_stack_7->SetBinError(12,0.09729032);
   hNCinFV_stack_7->SetBinError(13,0.1124887);
   hNCinFV_stack_7->SetBinError(14,0.167841);
   hNCinFV_stack_7->SetBinError(15,0.1775429);
   hNCinFV_stack_7->SetBinError(16,0.1431553);
   hNCinFV_stack_7->SetBinError(17,0.1683246);
   hNCinFV_stack_7->SetBinError(18,0.1901918);
   hNCinFV_stack_7->SetBinError(19,0.228424);
   hNCinFV_stack_7->SetBinError(20,0.2608056);
   hNCinFV_stack_7->SetBinError(21,0.2802854);
   hNCinFV_stack_7->SetBinError(22,0.297238);
   hNCinFV_stack_7->SetBinError(23,0.3733497);
   hNCinFV_stack_7->SetBinError(24,0.4511883);
   hNCinFV_stack_7->SetBinError(25,0.5032002);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_8->SetBinContent(1,1.059227);
   hnumuCCinFV_stack_8->SetBinContent(2,0.8687379);
   hnumuCCinFV_stack_8->SetBinContent(3,0.6649115);
   hnumuCCinFV_stack_8->SetBinContent(4,0.7638597);
   hnumuCCinFV_stack_8->SetBinContent(5,0.606657);
   hnumuCCinFV_stack_8->SetBinContent(6,1.373608);
   hnumuCCinFV_stack_8->SetBinContent(7,0.7342334);
   hnumuCCinFV_stack_8->SetBinContent(8,1.383799);
   hnumuCCinFV_stack_8->SetBinContent(9,0.7066402);
   hnumuCCinFV_stack_8->SetBinContent(10,1.155795);
   hnumuCCinFV_stack_8->SetBinContent(11,1.099264);
   hnumuCCinFV_stack_8->SetBinContent(12,0.9868923);
   hnumuCCinFV_stack_8->SetBinContent(13,1.251568);
   hnumuCCinFV_stack_8->SetBinContent(14,1.474033);
   hnumuCCinFV_stack_8->SetBinContent(15,1.901078);
   hnumuCCinFV_stack_8->SetBinContent(16,1.80396);
   hnumuCCinFV_stack_8->SetBinContent(17,2.424056);
   hnumuCCinFV_stack_8->SetBinContent(18,2.214921);
   hnumuCCinFV_stack_8->SetBinContent(19,2.151118);
   hnumuCCinFV_stack_8->SetBinContent(20,3.115888);
   hnumuCCinFV_stack_8->SetBinContent(21,3.268894);
   hnumuCCinFV_stack_8->SetBinContent(22,3.038079);
   hnumuCCinFV_stack_8->SetBinContent(23,2.749756);
   hnumuCCinFV_stack_8->SetBinContent(24,3.475215);
   hnumuCCinFV_stack_8->SetBinContent(25,5.774952);
   hnumuCCinFV_stack_8->SetBinError(1,0.2489297);
   hnumuCCinFV_stack_8->SetBinError(2,0.2184719);
   hnumuCCinFV_stack_8->SetBinError(3,0.1935786);
   hnumuCCinFV_stack_8->SetBinError(4,0.2147553);
   hnumuCCinFV_stack_8->SetBinError(5,0.1825601);
   hnumuCCinFV_stack_8->SetBinError(6,0.4695474);
   hnumuCCinFV_stack_8->SetBinError(7,0.215304);
   hnumuCCinFV_stack_8->SetBinError(8,0.3216887);
   hnumuCCinFV_stack_8->SetBinError(9,0.2115641);
   hnumuCCinFV_stack_8->SetBinError(10,0.267456);
   hnumuCCinFV_stack_8->SetBinError(11,0.3227875);
   hnumuCCinFV_stack_8->SetBinError(12,0.2315735);
   hnumuCCinFV_stack_8->SetBinError(13,0.281123);
   hnumuCCinFV_stack_8->SetBinError(14,0.2990367);
   hnumuCCinFV_stack_8->SetBinError(15,0.5132445);
   hnumuCCinFV_stack_8->SetBinError(16,0.3963726);
   hnumuCCinFV_stack_8->SetBinError(17,0.530866);
   hnumuCCinFV_stack_8->SetBinError(18,0.4207769);
   hnumuCCinFV_stack_8->SetBinError(19,0.3563096);
   hnumuCCinFV_stack_8->SetBinError(20,0.7919722);
   hnumuCCinFV_stack_8->SetBinError(21,0.4750397);
   hnumuCCinFV_stack_8->SetBinError(22,0.4505115);
   hnumuCCinFV_stack_8->SetBinError(23,0.3963258);
   hnumuCCinFV_stack_8->SetBinError(24,0.4563037);
   hnumuCCinFV_stack_8->SetBinError(25,0.7567126);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_9->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_9->SetBinContent(4,0.07948712);
   hnueCCinFV_stack_9->SetBinContent(5,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(6,0.01276398);
   hnueCCinFV_stack_9->SetBinContent(7,0.02893035);
   hnueCCinFV_stack_9->SetBinContent(11,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(18,0.2199484);
   hnueCCinFV_stack_9->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(20,0.155415);
   hnueCCinFV_stack_9->SetBinContent(21,0.2166657);
   hnueCCinFV_stack_9->SetBinContent(22,0.02760471);
   hnueCCinFV_stack_9->SetBinContent(23,0.4166002);
   hnueCCinFV_stack_9->SetBinContent(24,0.08745708);
   hnueCCinFV_stack_9->SetBinContent(25,1.68162);
   hnueCCinFV_stack_9->SetBinError(1,0.02331381);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.06910958);
   hnueCCinFV_stack_9->SetBinError(4,0.07948712);
   hnueCCinFV_stack_9->SetBinError(5,0.06325464);
   hnueCCinFV_stack_9->SetBinError(6,0.0127502);
   hnueCCinFV_stack_9->SetBinError(7,0.02060012);
   hnueCCinFV_stack_9->SetBinError(11,0.08761943);
   hnueCCinFV_stack_9->SetBinError(12,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(18,0.109794);
   hnueCCinFV_stack_9->SetBinError(19,0.08761943);
   hnueCCinFV_stack_9->SetBinError(20,0.09040903);
   hnueCCinFV_stack_9->SetBinError(21,0.1095627);
   hnueCCinFV_stack_9->SetBinError(22,0.01957611);
   hnueCCinFV_stack_9->SetBinError(23,0.1649237);
   hnueCCinFV_stack_9->SetBinError(24,0.06452687);
   hnueCCinFV_stack_9->SetBinError(25,0.5337006);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);
   hmcerror__2->SetBinContent(1,15.4672);
   hmcerror__2->SetBinContent(2,12.84543);
   hmcerror__2->SetBinContent(3,11.76985);
   hmcerror__2->SetBinContent(4,10.97062);
   hmcerror__2->SetBinContent(5,9.14139);
   hmcerror__2->SetBinContent(6,11.84535);
   hmcerror__2->SetBinContent(7,12.24833);
   hmcerror__2->SetBinContent(8,11.11857);
   hmcerror__2->SetBinContent(9,10.27725);
   hmcerror__2->SetBinContent(10,10.54035);
   hmcerror__2->SetBinContent(11,13.58147);
   hmcerror__2->SetBinContent(12,13.55113);
   hmcerror__2->SetBinContent(13,15.58006);
   hmcerror__2->SetBinContent(14,16.6664);
   hmcerror__2->SetBinContent(15,17.62128);
   hmcerror__2->SetBinContent(16,18.62221);
   hmcerror__2->SetBinContent(17,20.2804);
   hmcerror__2->SetBinContent(18,24.44945);
   hmcerror__2->SetBinContent(19,27.54364);
   hmcerror__2->SetBinContent(20,31.63515);
   hmcerror__2->SetBinContent(21,40.75843);
   hmcerror__2->SetBinContent(22,45.26965);
   hmcerror__2->SetBinContent(23,54.42897);
   hmcerror__2->SetBinContent(24,72.54636);
   hmcerror__2->SetBinContent(25,102.2789);
   hmcerror__2->SetBinError(1,4.33431);
   hmcerror__2->SetBinError(2,4.060936);
   hmcerror__2->SetBinError(3,4.019491);
   hmcerror__2->SetBinError(4,3.418001);
   hmcerror__2->SetBinError(5,3.534475);
   hmcerror__2->SetBinError(6,3.563448);
   hmcerror__2->SetBinError(7,3.562534);
   hmcerror__2->SetBinError(8,3.323356);
   hmcerror__2->SetBinError(9,4.392303);
   hmcerror__2->SetBinError(10,3.890663);
   hmcerror__2->SetBinError(11,5.03964);
   hmcerror__2->SetBinError(12,4.303301);
   hmcerror__2->SetBinError(13,4.231831);
   hmcerror__2->SetBinError(14,4.66256);
   hmcerror__2->SetBinError(15,4.903884);
   hmcerror__2->SetBinError(16,5.51602);
   hmcerror__2->SetBinError(17,5.15002);
   hmcerror__2->SetBinError(18,6.702588);
   hmcerror__2->SetBinError(19,7.410541);
   hmcerror__2->SetBinError(20,8.492887);
   hmcerror__2->SetBinError(21,10.82659);
   hmcerror__2->SetBinError(22,11.94097);
   hmcerror__2->SetBinError(23,13.63494);
   hmcerror__2->SetBinError(24,15.0625);
   hmcerror__2->SetBinError(25,22.86376);
   hmcerror__2->SetBinError(26,0.125509);
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
   11,
   13,
   15,
   12,
   6,
   9,
   9,
   8,
   15,
   7,
   7,
   13,
   15,
   12,
   10,
   12,
   16,
   17,
   14,
   25,
   35,
   44,
   35,
   64,
   90};
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
   3.4975,
   3.77763,
   4.0385,
   3.64022,
   2.67925,
   3.19354,
   3.19354,
   3.0307,
   4.0385,
   2.85954,
   2.85954,
   3.77763,
   4.0385,
   3.64022,
   3.34883,
   3.64022,
   4.1628,
   4.2835,
   3.9102,
   5.1474,
   6.0548,
   6.7671,
   6.0548,
   8.1273,
   9.6093};
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
   3.27,
   3.5552,
   3.8197,
   3.4155,
   2.41858,
   2.9582,
   2.9582,
   2.7896,
   3.8197,
   2.61053,
   2.61053,
   3.5552,
   3.8197,
   3.4155,
   3.1179,
   3.4155,
   3.9454,
   4.0673,
   3.6898,
   4.9374,
   5.8483,
   6.5623,
   5.8483,
   7.9246,
   9.4079};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(2.988675);
   Graph_Graph3001->SetMaximum(109.0166);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.85/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 63.1","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  320.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 104.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 25.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 46.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_pi0_costheta_all");
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
   0.2802258,
   0.3161387,
   0.3415074,
   0.3115595,
   0.3866452,
   0.3008311,
   0.2908589,
   0.2989014,
   0.4273813,
   0.3691209,
   0.3710673,
   0.3175602,
   0.2716184,
   0.2797581,
   0.2782932,
   0.2962065,
   0.2539408,
   0.2741407,
   0.2690472,
   0.2684636,
   0.2656282,
   0.2637744,
   0.2505088,
   0.2076258,
   0.2235433};
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
   0.2802258,
   0.3161387,
   0.3415074,
   0.3115595,
   0.3866452,
   0.3008311,
   0.2908589,
   0.2989014,
   0.4273813,
   0.3691209,
   0.3710673,
   0.3175602,
   0.2716184,
   0.2797581,
   0.2782932,
   0.2962065,
   0.2539408,
   0.2741407,
   0.2690472,
   0.2684636,
   0.2656282,
   0.2637744,
   0.2505088,
   0.2076258,
   0.2235433};
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
   0.2138674,
   0.2058699,
   0.1941043,
   0.2154044,
   0.2218041,
   0.2012397,
   0.2016117,
   0.1846516,
   0.2217103,
   0.1997407,
   0.211683,
   0.2281639,
   0.2048735,
   0.2078638,
   0.2118686,
   0.2194884,
   0.2064365,
   0.2294678,
   0.2373786,
   0.2281361,
   0.2164684,
   0.2273283,
   0.2133778,
   0.1887175,
   0.1876692};
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
   0.2138674,
   0.2058699,
   0.1941043,
   0.2154044,
   0.2218041,
   0.2012397,
   0.2016117,
   0.1846516,
   0.2217103,
   0.1997407,
   0.211683,
   0.2281639,
   0.2048735,
   0.2078638,
   0.2118686,
   0.2194884,
   0.2064365,
   0.2294678,
   0.2373786,
   0.2281361,
   0.2164684,
   0.2273283,
   0.2133778,
   0.1887175,
   0.1876692};
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
   0.7111822,
   1.012033,
   1.274443,
   1.093831,
   0.6563553,
   0.759792,
   0.7347943,
   0.7195172,
   1.459535,
   0.6641145,
   0.5154081,
   0.9593294,
   0.9627693,
   0.7200116,
   0.5674956,
   0.6443918,
   0.7889391,
   0.6953122,
   0.5082843,
   0.7902602,
   0.8587181,
   0.9719537,
   0.6430399,
   0.8821945,
   0.879947};
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
   0.2261236,
   0.2940836,
   0.3431224,
   0.3318154,
   0.29309,
   0.2696029,
   0.2607328,
   0.2725801,
   0.3929554,
   0.2712946,
   0.2105472,
   0.2787686,
   0.2592096,
   0.2184167,
   0.1900446,
   0.1954773,
   0.2052622,
   0.1751982,
   0.1419638,
   0.1627114,
   0.1485533,
   0.1494843,
   0.1112422,
   0.1120291,
   0.09395194};
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
   0.2114151,
   0.2767677,
   0.3245326,
   0.3113316,
   0.2645746,
   0.2497352,
   0.2415187,
   0.2508956,
   0.3716657,
   0.2476701,
   0.1922126,
   0.2623544,
   0.245166,
   0.2049333,
   0.1769394,
   0.18341,
   0.1945425,
   0.1663555,
   0.133962,
   0.1560732,
   0.1434869,
   0.1449603,
   0.1074483,
   0.109235,
   0.09198281};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.152227);
   Graph_Graph3004->SetMaximum(1.983835);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_pi0_costheta_all",25,-1,1);

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
