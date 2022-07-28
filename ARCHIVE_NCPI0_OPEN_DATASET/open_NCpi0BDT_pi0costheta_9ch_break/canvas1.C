#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Jun  6 14:11:35 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-1.307692,-2.045578,1.25641,226.1978);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
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
   hmc__1->SetBinContent(23,54.42898);
   hmc__1->SetBinContent(24,72.54636);
   hmc__1->SetBinContent(25,102.2789);
   hmc__1->SetBinError(1,4.331207);
   hmc__1->SetBinError(2,4.068445);
   hmc__1->SetBinError(3,4.025059);
   hmc__1->SetBinError(4,3.413894);
   hmc__1->SetBinError(5,3.54807);
   hmc__1->SetBinError(6,3.56018);
   hmc__1->SetBinError(7,3.56908);
   hmc__1->SetBinError(8,3.334845);
   hmc__1->SetBinError(9,4.397726);
   hmc__1->SetBinError(10,3.879375);
   hmc__1->SetBinError(11,5.058983);
   hmc__1->SetBinError(12,4.301736);
   hmc__1->SetBinError(13,4.23722);
   hmc__1->SetBinError(14,4.688598);
   hmc__1->SetBinError(15,4.913472);
   hmc__1->SetBinError(16,5.51875);
   hmc__1->SetBinError(17,5.157571);
   hmc__1->SetBinError(18,6.715541);
   hmc__1->SetBinError(19,7.418346);
   hmc__1->SetBinError(20,8.49478);
   hmc__1->SetBinError(21,10.85306);
   hmc__1->SetBinError(22,11.92994);
   hmc__1->SetBinError(23,13.61137);
   hmc__1->SetBinError(24,15.07815);
   hmc__1->SetBinError(25,22.84303);
   hmc__1->SetBinError(26,0.1094984);
   hmc__1->SetMinimum(-2.045578);
   hmc__1->SetMaximum(214.7857);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.149413);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1239126);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2113693);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1384575);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6486527);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.607669);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,5.51553);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.08945557);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.08761943);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1088158);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.0693829);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1807193);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2959794);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5439876);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1366628);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2478252);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2478252);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1858689);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5211507);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2113693);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1986191);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3370765);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5721515);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08854226);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1073114);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1761641);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1088158);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1080662);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1284224);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1780002);
   hNCpi0inFVqe_stack_6->SetEntries(77);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.451779);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.163908);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.405888);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.138408);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.808236);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.604507);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.670053);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.260065);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.4788);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.881114);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.327867);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.288095);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.672583);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.26844);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.557644);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.287036);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.944388);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.847947);
   hNCpi0inFVres_stack_7->SetBinContent(19,11.42093);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.06061);
   hNCpi0inFVres_stack_7->SetBinContent(21,16.23501);
   hNCpi0inFVres_stack_7->SetBinContent(22,19.60638);
   hNCpi0inFVres_stack_7->SetBinContent(23,23.28491);
   hNCpi0inFVres_stack_7->SetBinContent(24,28.84393);
   hNCpi0inFVres_stack_7->SetBinContent(25,36.05235);
   hNCpi0inFVres_stack_7->SetBinError(1,0.54324);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5313129);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4889719);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5310068);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4550652);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5007713);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4985569);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4743836);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4961053);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4460151);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5361273);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5798785);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5995441);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6280829);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5802132);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6732049);
   hNCpi0inFVres_stack_7->SetBinError(17,0.651496);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7231286);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7784355);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8085481);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9335954);
   hNCpi0inFVres_stack_7->SetBinError(22,1.040428);
   hNCpi0inFVres_stack_7->SetBinError(23,1.125322);
   hNCpi0inFVres_stack_7->SetBinError(24,1.248933);
   hNCpi0inFVres_stack_7->SetBinError(25,1.393308);
   hNCpi0inFVres_stack_7->SetEntries(6611);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.8600219);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.341127);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.056846);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.9329337);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.4135777);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.561196);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.9566394);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5849017);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6213576);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7980657);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8855224);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.058641);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.845477);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.295511);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.344717);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.972979);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.656293);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.310517);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.427063);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.303151);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.349042);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.057856);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.732009);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.423698);
   hNCpi0inFVdis_stack_8->SetBinContent(25,12.68915);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2109511);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.279414);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2433196);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2269961);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1321654);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1688068);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2342608);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1784562);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1880427);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2016476);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2117203);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2370204);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2176316);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2614281);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2683667);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.221335);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2969644);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3648464);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3626985);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3519561);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4241334);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4684154);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5023918);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6790026);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8228044);
   hNCpi0inFVdis_stack_8->SetEntries(1485);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.06195629);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1443;
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
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,3.198511);
   hCCpi0inFV_stack_11->SetBinContent(2,2.239908);
   hCCpi0inFV_stack_11->SetBinContent(3,2.365581);
   hCCpi0inFV_stack_11->SetBinContent(4,1.23935);
   hCCpi0inFV_stack_11->SetBinContent(5,1.492335);
   hCCpi0inFV_stack_11->SetBinContent(6,2.082695);
   hCCpi0inFV_stack_11->SetBinContent(7,1.842162);
   hCCpi0inFV_stack_11->SetBinContent(8,1.893922);
   hCCpi0inFV_stack_11->SetBinContent(9,1.616445);
   hCCpi0inFV_stack_11->SetBinContent(10,1.763979);
   hCCpi0inFV_stack_11->SetBinContent(11,1.899105);
   hCCpi0inFV_stack_11->SetBinContent(12,1.727302);
   hCCpi0inFV_stack_11->SetBinContent(13,2.536521);
   hCCpi0inFV_stack_11->SetBinContent(14,2.728218);
   hCCpi0inFV_stack_11->SetBinContent(15,1.694543);
   hCCpi0inFV_stack_11->SetBinContent(16,2.54361);
   hCCpi0inFV_stack_11->SetBinContent(17,3.089659);
   hCCpi0inFV_stack_11->SetBinContent(18,3.445091);
   hCCpi0inFV_stack_11->SetBinContent(19,3.88885);
   hCCpi0inFV_stack_11->SetBinContent(20,4.461869);
   hCCpi0inFV_stack_11->SetBinContent(21,6.166936);
   hCCpi0inFV_stack_11->SetBinContent(22,7.594804);
   hCCpi0inFV_stack_11->SetBinContent(23,8.992058);
   hCCpi0inFV_stack_11->SetBinContent(24,13.16616);
   hCCpi0inFV_stack_11->SetBinContent(25,20.68576);
   hCCpi0inFV_stack_11->SetBinError(1,0.4255416);
   hCCpi0inFV_stack_11->SetBinError(2,0.3554067);
   hCCpi0inFV_stack_11->SetBinError(3,0.3616634);
   hCCpi0inFV_stack_11->SetBinError(4,0.2481902);
   hCCpi0inFV_stack_11->SetBinError(5,0.2881818);
   hCCpi0inFV_stack_11->SetBinError(6,0.3517448);
   hCCpi0inFV_stack_11->SetBinError(7,0.3157588);
   hCCpi0inFV_stack_11->SetBinError(8,0.3315208);
   hCCpi0inFV_stack_11->SetBinError(9,0.2984024);
   hCCpi0inFV_stack_11->SetBinError(10,0.307606);
   hCCpi0inFV_stack_11->SetBinError(11,0.333111);
   hCCpi0inFV_stack_11->SetBinError(12,0.3053362);
   hCCpi0inFV_stack_11->SetBinError(13,0.3790566);
   hCCpi0inFV_stack_11->SetBinError(14,0.384213);
   hCCpi0inFV_stack_11->SetBinError(15,0.2977844);
   hCCpi0inFV_stack_11->SetBinError(16,0.3605379);
   hCCpi0inFV_stack_11->SetBinError(17,0.4075928);
   hCCpi0inFV_stack_11->SetBinError(18,0.4341355);
   hCCpi0inFV_stack_11->SetBinError(19,0.4578606);
   hCCpi0inFV_stack_11->SetBinError(20,0.4897788);
   hCCpi0inFV_stack_11->SetBinError(21,0.5653654);
   hCCpi0inFV_stack_11->SetBinError(22,0.645743);
   hCCpi0inFV_stack_11->SetBinError(23,0.6940016);
   hCCpi0inFV_stack_11->SetBinError(24,0.8445868);
   hCCpi0inFV_stack_11->SetBinError(25,1.058621);
   hCCpi0inFV_stack_11->SetEntries(2725);

   ci = 1444;
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
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.8964778);
   hNCinFV_stack_12->SetBinContent(2,0.6596082);
   hNCinFV_stack_12->SetBinContent(3,0.7343147);
   hNCinFV_stack_12->SetBinContent(4,0.5721515);
   hNCinFV_stack_12->SetBinContent(5,0.411783);
   hNCinFV_stack_12->SetBinContent(6,0.4737393);
   hNCinFV_stack_12->SetBinContent(7,0.2496199);
   hNCinFV_stack_12->SetBinContent(8,0.3990328);
   hNCinFV_stack_12->SetBinContent(9,0.661368);
   hNCinFV_stack_12->SetBinContent(10,0.1986191);
   hNCinFV_stack_12->SetBinContent(11,0.7707705);
   hNCinFV_stack_12->SetBinContent(12,0.2641647);
   hNCinFV_stack_12->SetBinContent(13,0.2751203);
   hNCinFV_stack_12->SetBinContent(14,0.5356956);
   hNCinFV_stack_12->SetBinContent(15,0.5594013);
   hNCinFV_stack_12->SetBinContent(16,0.411783);
   hNCinFV_stack_12->SetBinContent(17,0.5484458);
   hNCinFV_stack_12->SetBinContent(18,0.6851086);
   hNCinFV_stack_12->SetBinContent(19,0.9839345);
   hNCinFV_stack_12->SetBinContent(20,1.27001);
   hNCinFV_stack_12->SetBinContent(21,1.379378);
   hNCinFV_stack_12->SetBinContent(22,1.669043);
   hNCinFV_stack_12->SetBinContent(23,2.563726);
   hNCinFV_stack_12->SetBinContent(24,3.77178);
   hNCinFV_stack_12->SetBinContent(25,4.79576);
   hNCinFV_stack_12->SetBinError(1,0.2191205);
   hNCinFV_stack_12->SetBinError(2,0.1893351);
   hNCinFV_stack_12->SetBinError(3,0.199622);
   hNCinFV_stack_12->SetBinError(4,0.1780002);
   hNCinFV_stack_12->SetBinError(5,0.1431553);
   hNCinFV_stack_12->SetBinError(6,0.1559873);
   hNCinFV_stack_12->SetBinError(7,0.1110342);
   hNCinFV_stack_12->SetBinError(8,0.1425864);
   hNCinFV_stack_12->SetBinError(9,0.1893433);
   hNCinFV_stack_12->SetBinError(10,0.1080662);
   hNCinFV_stack_12->SetBinError(11,0.2082363);
   hNCinFV_stack_12->SetBinError(12,0.09729032);
   hNCinFV_stack_12->SetBinError(13,0.1124887);
   hNCinFV_stack_12->SetBinError(14,0.167841);
   hNCinFV_stack_12->SetBinError(15,0.1775429);
   hNCinFV_stack_12->SetBinError(16,0.1431553);
   hNCinFV_stack_12->SetBinError(17,0.1683246);
   hNCinFV_stack_12->SetBinError(18,0.1901918);
   hNCinFV_stack_12->SetBinError(19,0.228424);
   hNCinFV_stack_12->SetBinError(20,0.2608056);
   hNCinFV_stack_12->SetBinError(21,0.2802854);
   hNCinFV_stack_12->SetBinError(22,0.297238);
   hNCinFV_stack_12->SetBinError(23,0.3733497);
   hNCinFV_stack_12->SetBinError(24,0.4511883);
   hNCinFV_stack_12->SetBinError(25,0.5032002);
   hNCinFV_stack_12->SetEntries(696);

   ci = 1445;
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
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,1.059227);
   hnumuCCinFV_stack_13->SetBinContent(2,0.8687379);
   hnumuCCinFV_stack_13->SetBinContent(3,0.6649115);
   hnumuCCinFV_stack_13->SetBinContent(4,0.7638597);
   hnumuCCinFV_stack_13->SetBinContent(5,0.606657);
   hnumuCCinFV_stack_13->SetBinContent(6,1.373608);
   hnumuCCinFV_stack_13->SetBinContent(7,0.7342334);
   hnumuCCinFV_stack_13->SetBinContent(8,1.383799);
   hnumuCCinFV_stack_13->SetBinContent(9,0.7066402);
   hnumuCCinFV_stack_13->SetBinContent(10,1.155795);
   hnumuCCinFV_stack_13->SetBinContent(11,1.099264);
   hnumuCCinFV_stack_13->SetBinContent(12,0.9868923);
   hnumuCCinFV_stack_13->SetBinContent(13,1.251568);
   hnumuCCinFV_stack_13->SetBinContent(14,1.474033);
   hnumuCCinFV_stack_13->SetBinContent(15,1.901078);
   hnumuCCinFV_stack_13->SetBinContent(16,1.80396);
   hnumuCCinFV_stack_13->SetBinContent(17,2.424056);
   hnumuCCinFV_stack_13->SetBinContent(18,2.214921);
   hnumuCCinFV_stack_13->SetBinContent(19,2.151118);
   hnumuCCinFV_stack_13->SetBinContent(20,3.115888);
   hnumuCCinFV_stack_13->SetBinContent(21,3.268894);
   hnumuCCinFV_stack_13->SetBinContent(22,3.038079);
   hnumuCCinFV_stack_13->SetBinContent(23,2.749756);
   hnumuCCinFV_stack_13->SetBinContent(24,3.475215);
   hnumuCCinFV_stack_13->SetBinContent(25,5.774952);
   hnumuCCinFV_stack_13->SetBinError(1,0.2489297);
   hnumuCCinFV_stack_13->SetBinError(2,0.2184719);
   hnumuCCinFV_stack_13->SetBinError(3,0.1935786);
   hnumuCCinFV_stack_13->SetBinError(4,0.2147553);
   hnumuCCinFV_stack_13->SetBinError(5,0.1825601);
   hnumuCCinFV_stack_13->SetBinError(6,0.4695474);
   hnumuCCinFV_stack_13->SetBinError(7,0.215304);
   hnumuCCinFV_stack_13->SetBinError(8,0.3216887);
   hnumuCCinFV_stack_13->SetBinError(9,0.2115641);
   hnumuCCinFV_stack_13->SetBinError(10,0.267456);
   hnumuCCinFV_stack_13->SetBinError(11,0.3227875);
   hnumuCCinFV_stack_13->SetBinError(12,0.2315735);
   hnumuCCinFV_stack_13->SetBinError(13,0.281123);
   hnumuCCinFV_stack_13->SetBinError(14,0.2990367);
   hnumuCCinFV_stack_13->SetBinError(15,0.5132445);
   hnumuCCinFV_stack_13->SetBinError(16,0.3963726);
   hnumuCCinFV_stack_13->SetBinError(17,0.530866);
   hnumuCCinFV_stack_13->SetBinError(18,0.4207769);
   hnumuCCinFV_stack_13->SetBinError(19,0.3563096);
   hnumuCCinFV_stack_13->SetBinError(20,0.7919722);
   hnumuCCinFV_stack_13->SetBinError(21,0.4750397);
   hnumuCCinFV_stack_13->SetBinError(22,0.4505115);
   hnumuCCinFV_stack_13->SetBinError(23,0.3963258);
   hnumuCCinFV_stack_13->SetBinError(24,0.4563037);
   hnumuCCinFV_stack_13->SetBinError(25,0.7567126);
   hnumuCCinFV_stack_13->SetEntries(1072);

   ci = 1446;
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
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,0.03226855);
   hnueCCinFV_stack_14->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(3,0.07036741);
   hnueCCinFV_stack_14->SetBinContent(4,0.07948712);
   hnueCCinFV_stack_14->SetBinContent(5,0.07470649);
   hnueCCinFV_stack_14->SetBinContent(6,0.01276398);
   hnueCCinFV_stack_14->SetBinContent(7,0.02893035);
   hnueCCinFV_stack_14->SetBinContent(11,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.2199484);
   hnueCCinFV_stack_14->SetBinContent(19,0.1239126);
   hnueCCinFV_stack_14->SetBinContent(20,0.155415);
   hnueCCinFV_stack_14->SetBinContent(21,0.2166657);
   hnueCCinFV_stack_14->SetBinContent(22,0.02760471);
   hnueCCinFV_stack_14->SetBinContent(23,0.4166002);
   hnueCCinFV_stack_14->SetBinContent(24,0.08745708);
   hnueCCinFV_stack_14->SetBinContent(25,1.68162);
   hnueCCinFV_stack_14->SetBinError(1,0.02331381);
   hnueCCinFV_stack_14->SetBinError(2,0.06195629);
   hnueCCinFV_stack_14->SetBinError(3,0.06910958);
   hnueCCinFV_stack_14->SetBinError(4,0.07948712);
   hnueCCinFV_stack_14->SetBinError(5,0.06325464);
   hnueCCinFV_stack_14->SetBinError(6,0.0127502);
   hnueCCinFV_stack_14->SetBinError(7,0.02060012);
   hnueCCinFV_stack_14->SetBinError(11,0.08761943);
   hnueCCinFV_stack_14->SetBinError(12,0.06195629);
   hnueCCinFV_stack_14->SetBinError(13,0.06195629);
   hnueCCinFV_stack_14->SetBinError(15,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.109794);
   hnueCCinFV_stack_14->SetBinError(19,0.08761943);
   hnueCCinFV_stack_14->SetBinError(20,0.09040903);
   hnueCCinFV_stack_14->SetBinError(21,0.1095627);
   hnueCCinFV_stack_14->SetBinError(22,0.01957611);
   hnueCCinFV_stack_14->SetBinError(23,0.1649237);
   hnueCCinFV_stack_14->SetBinError(24,0.06452687);
   hnueCCinFV_stack_14->SetBinError(25,0.5337006);
   hnueCCinFV_stack_14->SetEntries(85);

   ci = 1447;
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
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);
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
   hmcerror__2->SetBinContent(23,54.42898);
   hmcerror__2->SetBinContent(24,72.54636);
   hmcerror__2->SetBinContent(25,102.2789);
   hmcerror__2->SetBinError(1,4.331207);
   hmcerror__2->SetBinError(2,4.068445);
   hmcerror__2->SetBinError(3,4.025059);
   hmcerror__2->SetBinError(4,3.413894);
   hmcerror__2->SetBinError(5,3.54807);
   hmcerror__2->SetBinError(6,3.56018);
   hmcerror__2->SetBinError(7,3.56908);
   hmcerror__2->SetBinError(8,3.334845);
   hmcerror__2->SetBinError(9,4.397726);
   hmcerror__2->SetBinError(10,3.879375);
   hmcerror__2->SetBinError(11,5.058983);
   hmcerror__2->SetBinError(12,4.301736);
   hmcerror__2->SetBinError(13,4.23722);
   hmcerror__2->SetBinError(14,4.688598);
   hmcerror__2->SetBinError(15,4.913472);
   hmcerror__2->SetBinError(16,5.51875);
   hmcerror__2->SetBinError(17,5.157571);
   hmcerror__2->SetBinError(18,6.715541);
   hmcerror__2->SetBinError(19,7.418346);
   hmcerror__2->SetBinError(20,8.49478);
   hmcerror__2->SetBinError(21,10.85306);
   hmcerror__2->SetBinError(22,11.92994);
   hmcerror__2->SetBinError(23,13.61137);
   hmcerror__2->SetBinError(24,15.07815);
   hmcerror__2->SetBinError(25,22.84303);
   hmcerror__2->SetBinError(26,0.1094984);
   hmcerror__2->SetEntries(622.1566);

   ci = TColor::GetColor("#999999");
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.7","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.8","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 63.1","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  8.9","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  3.4","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  251.6","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  56.5","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

   ci = 1442;
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

   ci = 1443;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 104.4","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 25.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 46.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 3.6","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_8_pi0_costheta_all");
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
   0.2800252,
   0.3167232,
   0.3419804,
   0.3111852,
   0.3881325,
   0.3005551,
   0.2913933,
   0.2999347,
   0.4279089,
   0.3680499,
   0.3724915,
   0.3174448,
   0.2719643,
   0.2813204,
   0.2788374,
   0.2963531,
   0.2543131,
   0.2746705,
   0.2693306,
   0.2685235,
   0.2662776,
   0.2635307,
   0.2500759,
   0.2078416,
   0.2233406};
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
   0.2800252,
   0.3167232,
   0.3419804,
   0.3111852,
   0.3881325,
   0.3005551,
   0.2913933,
   0.2999347,
   0.4279089,
   0.3680499,
   0.3724915,
   0.3174448,
   0.2719643,
   0.2813204,
   0.2788374,
   0.2963531,
   0.2543131,
   0.2746705,
   0.2693306,
   0.2685235,
   0.2662776,
   0.2635307,
   0.2500759,
   0.2078416,
   0.2233406};
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
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
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
   0.2138569,
   0.2059293,
   0.1941796,
   0.2154965,
   0.2219368,
   0.2012187,
   0.2015803,
   0.1846516,
   0.2217138,
   0.1997475,
   0.2117441,
   0.2282205,
   0.204897,
   0.2078638,
   0.2118858,
   0.2194884,
   0.2064316,
   0.2294338,
   0.2373939,
   0.2281003,
   0.216452,
   0.2273269,
   0.2133675,
   0.18871,
   0.1876634};
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
   0.2138569,
   0.2059293,
   0.1941796,
   0.2154965,
   0.2219368,
   0.2012187,
   0.2015803,
   0.1846516,
   0.2217138,
   0.1997475,
   0.2117441,
   0.2282205,
   0.204897,
   0.2078638,
   0.2118858,
   0.2194884,
   0.2064316,
   0.2294338,
   0.2373939,
   0.2281003,
   0.216452,
   0.2273269,
   0.2133675,
   0.18871,
   0.1876634};
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
   1.274442,
   1.093831,
   0.6563553,
   0.7597919,
   0.7347943,
   0.7195171,
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
   0.6430398,
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
   0.3245325,
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
   Graph_Graph3004->SetMaximum(1.983834);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_8_pi0_costheta_all",25,-1,1);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
