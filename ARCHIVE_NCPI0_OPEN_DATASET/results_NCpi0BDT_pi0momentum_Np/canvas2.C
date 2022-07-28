#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 14:04:54 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-230.7692,-1.026034,1692.308,86.45687);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hmc__4->SetBinContent(1,7.979357);
   hmc__4->SetBinContent(2,33.15311);
   hmc__4->SetBinContent(3,51.3017);
   hmc__4->SetBinContent(4,47.05762);
   hmc__4->SetBinContent(5,34.01781);
   hmc__4->SetBinContent(6,26.76904);
   hmc__4->SetBinContent(7,20.66679);
   hmc__4->SetBinContent(8,16.70475);
   hmc__4->SetBinContent(9,12.50489);
   hmc__4->SetBinContent(10,8.860702);
   hmc__4->SetBinContent(11,6.633275);
   hmc__4->SetBinContent(12,4.618);
   hmc__4->SetBinContent(13,3.644469);
   hmc__4->SetBinContent(14,2.856451);
   hmc__4->SetBinContent(15,2.694178);
   hmc__4->SetBinContent(16,1.811157);
   hmc__4->SetBinContent(17,1.923356);
   hmc__4->SetBinContent(18,2.020579);
   hmc__4->SetBinContent(19,1.495706);
   hmc__4->SetBinContent(20,1.569243);
   hmc__4->SetBinContent(21,1.207574);
   hmc__4->SetBinContent(22,0.922181);
   hmc__4->SetBinContent(23,0.8357112);
   hmc__4->SetBinContent(24,0.4860092);
   hmc__4->SetBinContent(25,0.6650062);
   hmc__4->SetBinContent(26,13.12644);
   hmc__4->SetBinError(1,2.859717);
   hmc__4->SetBinError(2,10.8925);
   hmc__4->SetBinError(3,11.76086);
   hmc__4->SetBinError(4,12.77051);
   hmc__4->SetBinError(5,9.861055);
   hmc__4->SetBinError(6,7.810289);
   hmc__4->SetBinError(7,6.249218);
   hmc__4->SetBinError(8,5.275212);
   hmc__4->SetBinError(9,3.940585);
   hmc__4->SetBinError(10,3.329837);
   hmc__4->SetBinError(11,3.148167);
   hmc__4->SetBinError(12,2.487623);
   hmc__4->SetBinError(13,1.929965);
   hmc__4->SetBinError(14,1.931416);
   hmc__4->SetBinError(15,1.821746);
   hmc__4->SetBinError(16,1.289739);
   hmc__4->SetBinError(17,1.752949);
   hmc__4->SetBinError(18,1.679824);
   hmc__4->SetBinError(19,1.223559);
   hmc__4->SetBinError(20,2.154685);
   hmc__4->SetBinError(21,1.045347);
   hmc__4->SetBinError(22,0.906289);
   hmc__4->SetBinError(23,0.6973095);
   hmc__4->SetBinError(24,0.5469662);
   hmc__4->SetBinError(25,1.136222);
   hmc__4->SetBinError(26,5.307603);
   hmc__4->SetMinimum(-1.026034);
   hmc__4->SetMaximum(82.08273);
   hmc__4->SetEntries(300.4418);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1500);
   hs2_stack_2->SetMinimum(-6.202043e-09);
   hs2_stack_2->SetMaximum(53.86679);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.3047746);
   hbadmatch_stack_1->SetBinContent(2,0.8051908);
   hbadmatch_stack_1->SetBinContent(3,1.074486);
   hbadmatch_stack_1->SetBinContent(4,0.7346441);
   hbadmatch_stack_1->SetBinContent(5,0.7067286);
   hbadmatch_stack_1->SetBinContent(6,0.3147877);
   hbadmatch_stack_1->SetBinContent(7,0.432371);
   hbadmatch_stack_1->SetBinContent(8,0.2988259);
   hbadmatch_stack_1->SetBinContent(9,0.2804911);
   hbadmatch_stack_1->SetBinContent(10,0.1053574);
   hbadmatch_stack_1->SetBinContent(11,0.1662331);
   hbadmatch_stack_1->SetBinContent(12,0.03825059);
   hbadmatch_stack_1->SetBinContent(13,0.02861218);
   hbadmatch_stack_1->SetBinContent(14,0.0281239);
   hbadmatch_stack_1->SetBinContent(15,0.2058625);
   hbadmatch_stack_1->SetBinContent(16,0.06195629);
   hbadmatch_stack_1->SetBinContent(17,0.151022);
   hbadmatch_stack_1->SetBinContent(20,0.01575306);
   hbadmatch_stack_1->SetBinContent(21,0.0127502);
   hbadmatch_stack_1->SetBinContent(25,0.0127502);
   hbadmatch_stack_1->SetBinContent(26,0.1025582);
   hbadmatch_stack_1->SetBinError(1,0.1334218);
   hbadmatch_stack_1->SetBinError(2,0.1999975);
   hbadmatch_stack_1->SetBinError(3,0.4058389);
   hbadmatch_stack_1->SetBinError(4,0.1923073);
   hbadmatch_stack_1->SetBinError(5,0.2070289);
   hbadmatch_stack_1->SetBinError(6,0.1275123);
   hbadmatch_stack_1->SetBinError(7,0.1629366);
   hbadmatch_stack_1->SetBinError(8,0.1265093);
   hbadmatch_stack_1->SetBinError(9,0.1282637);
   hbadmatch_stack_1->SetBinError(10,0.07700893);
   hbadmatch_stack_1->SetBinError(11,0.1018305);
   hbadmatch_stack_1->SetBinError(12,0.02208399);
   hbadmatch_stack_1->SetBinError(13,0.02035117);
   hbadmatch_stack_1->SetBinError(14,0.01997294);
   hbadmatch_stack_1->SetBinError(15,0.1123759);
   hbadmatch_stack_1->SetBinError(16,0.06195629);
   hbadmatch_stack_1->SetBinError(17,0.08969905);
   hbadmatch_stack_1->SetBinError(20,0.01575306);
   hbadmatch_stack_1->SetBinError(21,0.0127502);
   hbadmatch_stack_1->SetBinError(25,0.0127502);
   hbadmatch_stack_1->SetBinError(26,0.06627044);
   hbadmatch_stack_1->SetEntries(162);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,0.496257);
   hext_stack_2->SetBinContent(2,2.569906);
   hext_stack_2->SetBinContent(3,3.874629);
   hext_stack_2->SetBinContent(4,2.098188);
   hext_stack_2->SetBinContent(5,1.899139);
   hext_stack_2->SetBinContent(6,1.78871);
   hext_stack_2->SetBinContent(7,1.167023);
   hext_stack_2->SetBinContent(8,0.6707665);
   hext_stack_2->SetBinContent(9,0.9679743);
   hext_stack_2->SetBinContent(10,0.4717173);
   hext_stack_2->SetBinContent(11,0.6584966);
   hext_stack_2->SetBinContent(12,0.4471776);
   hext_stack_2->SetBinContent(13,0.2235888);
   hext_stack_2->SetBinContent(14,0.2358586);
   hext_stack_2->SetBinContent(15,0.03680956);
   hext_stack_2->SetBinContent(16,0.03680956);
   hext_stack_2->SetBinContent(17,0.02453971);
   hext_stack_2->SetBinContent(18,0.2358586);
   hext_stack_2->SetBinContent(19,0.02453971);
   hext_stack_2->SetBinContent(20,0.02453971);
   hext_stack_2->SetBinContent(21,0.01226985);
   hext_stack_2->SetBinContent(23,0.1990491);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinContent(25,0.01226985);
   hext_stack_2->SetBinContent(26,0.7689253);
   hext_stack_2->SetBinError(1,0.2836291);
   hext_stack_2->SetBinError(2,0.6636965);
   hext_stack_2->SetBinError(3,0.8243611);
   hext_stack_2->SetBinError(4,0.6002905);
   hext_stack_2->SetBinError(5,0.5663286);
   hext_stack_2->SetBinError(6,0.5651311);
   hext_stack_2->SetBinError(7,0.4474488);
   hext_stack_2->SetBinError(8,0.3460707);
   hext_stack_2->SetBinError(9,0.4007367);
   hext_stack_2->SetBinError(10,0.2830978);
   hext_stack_2->SetBinError(11,0.3458531);
   hext_stack_2->SetBinError(12,0.2825656);
   hext_stack_2->SetBinError(13,0.199804);
   hext_stack_2->SetBinError(14,0.2001804);
   hext_stack_2->SetBinError(15,0.02125201);
   hext_stack_2->SetBinError(16,0.02125201);
   hext_stack_2->SetBinError(17,0.01735219);
   hext_stack_2->SetBinError(18,0.2001804);
   hext_stack_2->SetBinError(19,0.01735219);
   hext_stack_2->SetBinError(20,0.01735219);
   hext_stack_2->SetBinError(21,0.01226985);
   hext_stack_2->SetBinError(23,0.1990491);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetBinError(25,0.01226985);
   hext_stack_2->SetBinError(26,0.3478065);
   hext_stack_2->SetEntries(312);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.0618768);
   hdirt_stack_3->SetBinContent(2,0.1970835);
   hdirt_stack_3->SetBinContent(3,0.419172);
   hdirt_stack_3->SetBinContent(4,0.333602);
   hdirt_stack_3->SetBinContent(5,0.09400999);
   hdirt_stack_3->SetBinContent(6,0.05298486);
   hdirt_stack_3->SetBinContent(7,0.08841814);
   hdirt_stack_3->SetBinContent(8,0.01610539);
   hdirt_stack_3->SetBinContent(9,0.0007529201);
   hdirt_stack_3->SetBinContent(10,0.05414438);
   hdirt_stack_3->SetBinContent(11,0.1326272);
   hdirt_stack_3->SetBinContent(12,0.05831697);
   hdirt_stack_3->SetBinContent(17,0.01807072);
   hdirt_stack_3->SetBinContent(26,0.04420907);
   hdirt_stack_3->SetBinError(1,0.04594857);
   hdirt_stack_3->SetBinError(2,0.08673747);
   hdirt_stack_3->SetBinError(3,0.3048095);
   hdirt_stack_3->SetBinError(4,0.1175774);
   hdirt_stack_3->SetBinError(5,0.05475341);
   hdirt_stack_3->SetBinError(6,0.05288899);
   hdirt_stack_3->SetBinError(7,0.06252107);
   hdirt_stack_3->SetBinError(8,0.01610539);
   hdirt_stack_3->SetBinError(9,0.0007529201);
   hdirt_stack_3->SetBinError(10,0.04531172);
   hdirt_stack_3->SetBinError(11,0.07657235);
   hdirt_stack_3->SetBinError(12,0.05076718);
   hdirt_stack_3->SetBinError(17,0.0128299);
   hdirt_stack_3->SetBinError(26,0.04420907);
   hdirt_stack_3->SetEntries(54);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,0.9715649);
   houtFV_stack_4->SetBinContent(2,1.73339);
   houtFV_stack_4->SetBinContent(3,2.2553);
   houtFV_stack_4->SetBinContent(4,2.438825);
   houtFV_stack_4->SetBinContent(5,1.658817);
   houtFV_stack_4->SetBinContent(6,1.531043);
   houtFV_stack_4->SetBinContent(7,1.815857);
   houtFV_stack_4->SetBinContent(8,1.087353);
   houtFV_stack_4->SetBinContent(9,0.8012146);
   houtFV_stack_4->SetBinContent(10,0.6833139);
   houtFV_stack_4->SetBinContent(11,0.3990328);
   houtFV_stack_4->SetBinContent(12,0.4719446);
   houtFV_stack_4->SetBinContent(13,0.1642555);
   houtFV_stack_4->SetBinContent(14,0.3243263);
   houtFV_stack_4->SetBinContent(15,0.2860757);
   houtFV_stack_4->SetBinContent(16,0.2113693);
   houtFV_stack_4->SetBinContent(17,0.2113693);
   houtFV_stack_4->SetBinContent(18,0.2445443);
   houtFV_stack_4->SetBinContent(19,0.3097815);
   houtFV_stack_4->SetBinContent(20,0.2876338);
   houtFV_stack_4->SetBinContent(21,0.1239126);
   houtFV_stack_4->SetBinContent(23,0.1366628);
   houtFV_stack_4->SetBinContent(24,0.149413);
   houtFV_stack_4->SetBinContent(25,0.1002069);
   houtFV_stack_4->SetBinContent(26,1.287079);
   houtFV_stack_4->SetBinError(1,0.2347358);
   houtFV_stack_4->SetBinError(2,0.3104346);
   houtFV_stack_4->SetBinError(3,0.3563959);
   houtFV_stack_4->SetBinError(4,0.3613225);
   houtFV_stack_4->SetBinError(5,0.299835);
   houtFV_stack_4->SetBinError(6,0.2969988);
   houtFV_stack_4->SetBinError(7,0.3179706);
   houtFV_stack_4->SetBinError(8,0.2442776);
   houtFV_stack_4->SetBinError(9,0.2145472);
   houtFV_stack_4->SetBinError(10,0.1979865);
   houtFV_stack_4->SetBinError(11,0.1425864);
   houtFV_stack_4->SetBinError(12,0.1654019);
   houtFV_stack_4->SetBinError(13,0.09791322);
   houtFV_stack_4->SetBinError(14,0.1277878);
   houtFV_stack_4->SetBinError(15,0.1258651);
   houtFV_stack_4->SetBinError(16,0.1088158);
   houtFV_stack_4->SetBinError(17,0.1088158);
   houtFV_stack_4->SetBinError(18,0.1201934);
   houtFV_stack_4->SetBinError(19,0.1385385);
   houtFV_stack_4->SetBinError(20,0.1260325);
   houtFV_stack_4->SetBinError(21,0.08761943);
   houtFV_stack_4->SetBinError(23,0.08854226);
   houtFV_stack_4->SetBinError(24,0.08945557);
   houtFV_stack_4->SetBinError(25,0.0657745);
   houtFV_stack_4->SetBinError(26,0.2628481);
   houtFV_stack_4->SetEntries(494);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(1,3.485704);
   hNCpi0inFV_stack_5->SetBinContent(2,16.64647);
   hNCpi0inFV_stack_5->SetBinContent(3,28.94985);
   hNCpi0inFV_stack_5->SetBinContent(4,27.18995);
   hNCpi0inFV_stack_5->SetBinContent(5,19.64422);
   hNCpi0inFV_stack_5->SetBinContent(6,16.24417);
   hNCpi0inFV_stack_5->SetBinContent(7,10.68284);
   hNCpi0inFV_stack_5->SetBinContent(8,9.861444);
   hNCpi0inFV_stack_5->SetBinContent(9,6.78554);
   hNCpi0inFV_stack_5->SetBinContent(10,4.717464);
   hNCpi0inFV_stack_5->SetBinContent(11,3.412793);
   hNCpi0inFV_stack_5->SetBinContent(12,2.079031);
   hNCpi0inFV_stack_5->SetBinContent(13,1.882207);
   hNCpi0inFV_stack_5->SetBinContent(14,1.280966);
   hNCpi0inFV_stack_5->SetBinContent(15,1.517835);
   hNCpi0inFV_stack_5->SetBinContent(16,0.8345215);
   hNCpi0inFV_stack_5->SetBinContent(17,1.033141);
   hNCpi0inFV_stack_5->SetBinContent(18,0.6960641);
   hNCpi0inFV_stack_5->SetBinContent(19,0.5356956);
   hNCpi0inFV_stack_5->SetBinContent(20,0.3498267);
   hNCpi0inFV_stack_5->SetBinContent(21,0.845477);
   hNCpi0inFV_stack_5->SetBinContent(22,0.5958572);
   hNCpi0inFV_stack_5->SetBinContent(23,0.2860757);
   hNCpi0inFV_stack_5->SetBinContent(24,0.1257073);
   hNCpi0inFV_stack_5->SetBinContent(25,0.2733256);
   hNCpi0inFV_stack_5->SetBinContent(26,5.131042);
   hNCpi0inFV_stack_5->SetBinError(1,0.4332769);
   hNCpi0inFV_stack_5->SetBinError(2,0.9364306);
   hNCpi0inFV_stack_5->SetBinError(3,1.253106);
   hNCpi0inFV_stack_5->SetBinError(4,1.213224);
   hNCpi0inFV_stack_5->SetBinError(5,1.028763);
   hNCpi0inFV_stack_5->SetBinError(6,0.9369175);
   hNCpi0inFV_stack_5->SetBinError(7,0.7421736);
   hNCpi0inFV_stack_5->SetBinError(8,0.741279);
   hNCpi0inFV_stack_5->SetBinError(9,0.6032761);
   hNCpi0inFV_stack_5->SetBinError(10,0.5052333);
   hNCpi0inFV_stack_5->SetBinError(11,0.4250906);
   hNCpi0inFV_stack_5->SetBinError(12,0.3344692);
   hNCpi0inFV_stack_5->SetBinError(13,0.3117139);
   hNCpi0inFV_stack_5->SetBinError(14,0.266848);
   hNCpi0inFV_stack_5->SetBinError(15,0.2887453);
   hNCpi0inFV_stack_5->SetBinError(16,0.210179);
   hNCpi0inFV_stack_5->SetBinError(17,0.2363335);
   hNCpi0inFV_stack_5->SetBinError(18,0.1983966);
   hNCpi0inFV_stack_5->SetBinError(19,0.167841);
   hNCpi0inFV_stack_5->SetBinError(20,0.1290537);
   hNCpi0inFV_stack_5->SetBinError(21,0.2176316);
   hNCpi0inFV_stack_5->SetBinError(22,0.1871762);
   hNCpi0inFV_stack_5->SetBinError(23,0.1258651);
   hNCpi0inFV_stack_5->SetBinError(24,0.06820132);
   hNCpi0inFV_stack_5->SetBinError(25,0.1252177);
   hNCpi0inFV_stack_5->SetBinError(26,0.5222341);
   hNCpi0inFV_stack_5->SetEntries(4368);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(1,1.675316);
   hCCpi0inFV_stack_6->SetBinContent(2,6.858671);
   hCCpi0inFV_stack_6->SetBinContent(3,9.115868);
   hCCpi0inFV_stack_6->SetBinContent(4,8.029823);
   hCCpi0inFV_stack_6->SetBinContent(5,4.989851);
   hCCpi0inFV_stack_6->SetBinContent(6,4.362725);
   hCCpi0inFV_stack_6->SetBinContent(7,3.429209);
   hCCpi0inFV_stack_6->SetBinContent(8,2.6968);
   hCCpi0inFV_stack_6->SetBinContent(9,1.705711);
   hCCpi0inFV_stack_6->SetBinContent(10,1.543336);
   hCCpi0inFV_stack_6->SetBinContent(11,0.6540446);
   hCCpi0inFV_stack_6->SetBinContent(12,0.6376972);
   hCCpi0inFV_stack_6->SetBinContent(13,0.6086074);
   hCCpi0inFV_stack_6->SetBinContent(14,0.3115761);
   hCCpi0inFV_stack_6->SetBinContent(15,0.4591944);
   hCCpi0inFV_stack_6->SetBinContent(16,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(17,0.1633564);
   hCCpi0inFV_stack_6->SetBinContent(18,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(19,0.3225317);
   hCCpi0inFV_stack_6->SetBinContent(20,0.4581499);
   hCCpi0inFV_stack_6->SetBinContent(21,0.1129571);
   hCCpi0inFV_stack_6->SetBinContent(22,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(23,0.1986191);
   hCCpi0inFV_stack_6->SetBinContent(24,0.06195629);
   hCCpi0inFV_stack_6->SetBinContent(25,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(26,1.645381);
   hCCpi0inFV_stack_6->SetBinError(1,0.3093884);
   hCCpi0inFV_stack_6->SetBinError(2,0.6204834);
   hCCpi0inFV_stack_6->SetBinError(3,0.709352);
   hCCpi0inFV_stack_6->SetBinError(4,0.6595458);
   hCCpi0inFV_stack_6->SetBinError(5,0.5187421);
   hCCpi0inFV_stack_6->SetBinError(6,0.4800458);
   hCCpi0inFV_stack_6->SetBinError(7,0.4277916);
   hCCpi0inFV_stack_6->SetBinError(8,0.3915114);
   hCCpi0inFV_stack_6->SetBinError(9,0.3083301);
   hCCpi0inFV_stack_6->SetBinError(10,0.2893078);
   hCCpi0inFV_stack_6->SetBinError(11,0.1811402);
   hCCpi0inFV_stack_6->SetBinError(12,0.1716716);
   hCCpi0inFV_stack_6->SetBinError(13,0.18761);
   hCCpi0inFV_stack_6->SetBinError(14,0.1271502);
   hCCpi0inFV_stack_6->SetBinError(15,0.1649097);
   hCCpi0inFV_stack_6->SetBinError(16,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(17,0.0996217);
   hCCpi0inFV_stack_6->SetBinError(18,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(19,0.139124);
   hCCpi0inFV_stack_6->SetBinError(20,0.1691749);
   hCCpi0inFV_stack_6->SetBinError(21,0.0669989);
   hCCpi0inFV_stack_6->SetBinError(22,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(23,0.1080662);
   hCCpi0inFV_stack_6->SetBinError(24,0.06195629);
   hCCpi0inFV_stack_6->SetBinError(25,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(26,0.288844);
   hCCpi0inFV_stack_6->SetEntries(1314);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_7->SetBinContent(1,0.4372834);
   hNCinFV_stack_7->SetBinContent(2,1.940539);
   hNCinFV_stack_7->SetBinContent(3,2.328651);
   hNCinFV_stack_7->SetBinContent(4,1.882207);
   hNCinFV_stack_7->SetBinContent(5,1.603498);
   hNCinFV_stack_7->SetBinContent(6,0.6978588);
   hNCinFV_stack_7->SetBinContent(7,0.6596082);
   hNCinFV_stack_7->SetBinContent(8,0.4609891);
   hNCinFV_stack_7->SetBinContent(9,0.4227385);
   hNCinFV_stack_7->SetBinContent(10,0.3370765);
   hNCinFV_stack_7->SetBinContent(11,0.3735324);
   hNCinFV_stack_7->SetBinContent(12,0.149413);
   hNCinFV_stack_7->SetBinContent(13,0.1621632);
   hNCinFV_stack_7->SetBinContent(14,0.149413);
   hNCinFV_stack_7->SetBinContent(15,0.02550039);
   hNCinFV_stack_7->SetBinContent(16,0.2478252);
   hNCinFV_stack_7->SetBinContent(17,0.08745668);
   hNCinFV_stack_7->SetBinContent(18,0.2733256);
   hNCinFV_stack_7->SetBinContent(20,0.3097815);
   hNCinFV_stack_7->SetBinContent(21,0.08745668);
   hNCinFV_stack_7->SetBinContent(22,0.1239126);
   hNCinFV_stack_7->SetBinContent(24,0.0127502);
   hNCinFV_stack_7->SetBinContent(25,0.07470649);
   hNCinFV_stack_7->SetBinContent(26,0.9365231);
   hNCinFV_stack_7->SetBinError(1,0.1442865);
   hNCinFV_stack_7->SetBinError(2,0.3317898);
   hNCinFV_stack_7->SetBinError(3,0.3524177);
   hNCinFV_stack_7->SetBinError(4,0.3117139);
   hNCinFV_stack_7->SetBinError(5,0.3009374);
   hNCinFV_stack_7->SetBinError(6,0.1906187);
   hNCinFV_stack_7->SetBinError(7,0.1893351);
   hNCinFV_stack_7->SetBinError(8,0.1554653);
   hNCinFV_stack_7->SetBinError(9,0.1538888);
   hNCinFV_stack_7->SetBinError(10,0.1284224);
   hNCinFV_stack_7->SetBinError(11,0.1414417);
   hNCinFV_stack_7->SetBinError(12,0.08945557);
   hNCinFV_stack_7->SetBinError(13,0.09035965);
   hNCinFV_stack_7->SetBinError(14,0.08945557);
   hNCinFV_stack_7->SetBinError(15,0.0180315);
   hNCinFV_stack_7->SetBinError(16,0.1239126);
   hNCinFV_stack_7->SetBinError(17,0.06452687);
   hNCinFV_stack_7->SetBinError(18,0.1252177);
   hNCinFV_stack_7->SetBinError(20,0.1385385);
   hNCinFV_stack_7->SetBinError(21,0.06452687);
   hNCinFV_stack_7->SetBinError(22,0.08761943);
   hNCinFV_stack_7->SetBinError(24,0.0127502);
   hNCinFV_stack_7->SetBinError(25,0.06325464);
   hNCinFV_stack_7->SetBinError(26,0.2132504);
   hNCinFV_stack_7->SetEntries(368);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(1,0.5465804);
   hnumuCCinFV_stack_8->SetBinContent(2,2.376362);
   hnumuCCinFV_stack_8->SetBinContent(3,3.25825);
   hnumuCCinFV_stack_8->SetBinContent(4,4.288406);
   hnumuCCinFV_stack_8->SetBinContent(5,3.26736);
   hnumuCCinFV_stack_8->SetBinContent(6,1.652846);
   hnumuCCinFV_stack_8->SetBinContent(7,2.242046);
   hnumuCCinFV_stack_8->SetBinContent(8,1.563886);
   hnumuCCinFV_stack_8->SetBinContent(9,1.478514);
   hnumuCCinFV_stack_8->SetBinContent(10,0.9482909);
   hnumuCCinFV_stack_8->SetBinContent(11,0.761809);
   hnumuCCinFV_stack_8->SetBinContent(12,0.7361675);
   hnumuCCinFV_stack_8->SetBinContent(13,0.5750346);
   hnumuCCinFV_stack_8->SetBinContent(14,0.5134369);
   hnumuCCinFV_stack_8->SetBinContent(15,0.1628998);
   hnumuCCinFV_stack_8->SetBinContent(16,0.2565122);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2344004);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1097974);
   hnumuCCinFV_stack_8->SetBinContent(19,0.3031573);
   hnumuCCinFV_stack_8->SetBinContent(20,0.09805803);
   hnumuCCinFV_stack_8->SetBinContent(21,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1277047);
   hnumuCCinFV_stack_8->SetBinContent(23,0.01530444);
   hnumuCCinFV_stack_8->SetBinContent(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(25,0.1033449);
   hnumuCCinFV_stack_8->SetBinContent(26,2.866351);
   hnumuCCinFV_stack_8->SetBinError(1,0.1877514);
   hnumuCCinFV_stack_8->SetBinError(2,0.4550652);
   hnumuCCinFV_stack_8->SetBinError(3,0.4445341);
   hnumuCCinFV_stack_8->SetBinError(4,0.6052741);
   hnumuCCinFV_stack_8->SetBinError(5,0.6595668);
   hnumuCCinFV_stack_8->SetBinError(6,0.3111021);
   hnumuCCinFV_stack_8->SetBinError(7,0.519433);
   hnumuCCinFV_stack_8->SetBinError(8,0.2981679);
   hnumuCCinFV_stack_8->SetBinError(9,0.3342849);
   hnumuCCinFV_stack_8->SetBinError(10,0.2460723);
   hnumuCCinFV_stack_8->SetBinError(11,0.2128808);
   hnumuCCinFV_stack_8->SetBinError(12,0.4400585);
   hnumuCCinFV_stack_8->SetBinError(13,0.1886312);
   hnumuCCinFV_stack_8->SetBinError(14,0.1878713);
   hnumuCCinFV_stack_8->SetBinError(15,0.0874452);
   hnumuCCinFV_stack_8->SetBinError(16,0.1437693);
   hnumuCCinFV_stack_8->SetBinError(17,0.1288353);
   hnumuCCinFV_stack_8->SetBinError(18,0.08132624);
   hnumuCCinFV_stack_8->SetBinError(19,0.1386491);
   hnumuCCinFV_stack_8->SetBinError(20,0.083828);
   hnumuCCinFV_stack_8->SetBinError(21,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(22,0.07514775);
   hnumuCCinFV_stack_8->SetBinError(23,0.01530444);
   hnumuCCinFV_stack_8->SetBinError(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(25,0.06645414);
   hnumuCCinFV_stack_8->SetBinError(26,0.5034139);
   hnumuCCinFV_stack_8->SetEntries(659);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_9->SetBinContent(2,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(3,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(4,0.06197008);
   hnueCCinFV_stack_9->SetBinContent(5,0.1541936);
   hnueCCinFV_stack_9->SetBinContent(6,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(7,0.149413);
   hnueCCinFV_stack_9->SetBinContent(8,0.04858173);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(11,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(14,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(20,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(24,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(25,0.01369573);
   hnueCCinFV_stack_9->SetBinContent(26,0.344371);
   hnueCCinFV_stack_9->SetBinError(2,0.0180315);
   hnueCCinFV_stack_9->SetBinError(3,0.0180315);
   hnueCCinFV_stack_9->SetBinError(4,0.06195629);
   hnueCCinFV_stack_9->SetBinError(5,0.1015842);
   hnueCCinFV_stack_9->SetBinError(6,0.08761943);
   hnueCCinFV_stack_9->SetBinError(7,0.08945557);
   hnueCCinFV_stack_9->SetBinError(8,0.04858173);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(11,0.06325464);
   hnueCCinFV_stack_9->SetBinError(14,0.0127502);
   hnueCCinFV_stack_9->SetBinError(20,0.0180315);
   hnueCCinFV_stack_9->SetBinError(24,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.01369573);
   hnueCCinFV_stack_9->SetBinError(26,0.1348977);
   hnueCCinFV_stack_9->SetEntries(34);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);
   hmcerror__5->SetBinContent(1,7.979357);
   hmcerror__5->SetBinContent(2,33.15311);
   hmcerror__5->SetBinContent(3,51.3017);
   hmcerror__5->SetBinContent(4,47.05762);
   hmcerror__5->SetBinContent(5,34.01781);
   hmcerror__5->SetBinContent(6,26.76904);
   hmcerror__5->SetBinContent(7,20.66679);
   hmcerror__5->SetBinContent(8,16.70475);
   hmcerror__5->SetBinContent(9,12.50489);
   hmcerror__5->SetBinContent(10,8.860702);
   hmcerror__5->SetBinContent(11,6.633275);
   hmcerror__5->SetBinContent(12,4.618);
   hmcerror__5->SetBinContent(13,3.644469);
   hmcerror__5->SetBinContent(14,2.856451);
   hmcerror__5->SetBinContent(15,2.694178);
   hmcerror__5->SetBinContent(16,1.811157);
   hmcerror__5->SetBinContent(17,1.923356);
   hmcerror__5->SetBinContent(18,2.020579);
   hmcerror__5->SetBinContent(19,1.495706);
   hmcerror__5->SetBinContent(20,1.569243);
   hmcerror__5->SetBinContent(21,1.207574);
   hmcerror__5->SetBinContent(22,0.922181);
   hmcerror__5->SetBinContent(23,0.8357112);
   hmcerror__5->SetBinContent(24,0.4860092);
   hmcerror__5->SetBinContent(25,0.6650062);
   hmcerror__5->SetBinContent(26,13.12644);
   hmcerror__5->SetBinError(1,2.859717);
   hmcerror__5->SetBinError(2,10.8925);
   hmcerror__5->SetBinError(3,11.76086);
   hmcerror__5->SetBinError(4,12.77051);
   hmcerror__5->SetBinError(5,9.861055);
   hmcerror__5->SetBinError(6,7.810289);
   hmcerror__5->SetBinError(7,6.249218);
   hmcerror__5->SetBinError(8,5.275212);
   hmcerror__5->SetBinError(9,3.940585);
   hmcerror__5->SetBinError(10,3.329837);
   hmcerror__5->SetBinError(11,3.148167);
   hmcerror__5->SetBinError(12,2.487623);
   hmcerror__5->SetBinError(13,1.929965);
   hmcerror__5->SetBinError(14,1.931416);
   hmcerror__5->SetBinError(15,1.821746);
   hmcerror__5->SetBinError(16,1.289739);
   hmcerror__5->SetBinError(17,1.752949);
   hmcerror__5->SetBinError(18,1.679824);
   hmcerror__5->SetBinError(19,1.223559);
   hmcerror__5->SetBinError(20,2.154685);
   hmcerror__5->SetBinError(21,1.045347);
   hmcerror__5->SetBinError(22,0.906289);
   hmcerror__5->SetBinError(23,0.6973095);
   hmcerror__5->SetBinError(24,0.5469662);
   hmcerror__5->SetBinError(25,1.136222);
   hmcerror__5->SetBinError(26,5.307603);
   hmcerror__5->SetEntries(300.4418);

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
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
   5,
   21,
   30,
   29,
   28,
   17,
   17,
   5,
   9,
   5,
   7,
   2,
   4,
   4,
   2,
   2,
   1,
   0,
   1,
   2,
   2,
   2,
   0,
   0,
   0};
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
   2.48995,
   4.7354,
   5.6197,
   5.5285,
   5.4358,
   4.2835,
   4.2835,
   2.48995,
   3.19354,
   2.48995,
   2.85954,
   2,
   2.29683,
   2.29683,
   2,
   2,
   1,
   0,
   1,
   2,
   2,
   2,
   0,
   0,
   0};
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
   2.21064,
   4.5229,
   5.4117,
   5.3201,
   5.2271,
   4.0673,
   4.0673,
   2.21064,
   2.9582,
   2.21064,
   2.61053,
   1.51917,
   1.98186,
   1.98186,
   1.51917,
   1.51917,
   1.35971,
   1.1478,
   1.35971,
   1.51917,
   1.51917,
   1.51917,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(38.95287);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.67#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.29/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 195.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 18.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 18.4","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  160.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 49.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 25.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
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
   Double_t _fely3006[25] = {
   0.3583894,
   0.3285515,
   0.229249,
   0.2713804,
   0.2898792,
   0.2917657,
   0.3023798,
   0.3157911,
   0.3151235,
   0.3757984,
   0.4746023,
   0.5386799,
   0.52956,
   0.6761593,
   0.6761787,
   0.7121079,
   0.9114015,
   0.8313576,
   0.818048,
   1.373073,
   0.8656595,
   0.9827669,
   0.8343905,
   1.125424,
   1.708589};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0.3583894,
   0.3285515,
   0.229249,
   0.2713804,
   0.2898792,
   0.2917657,
   0.3023798,
   0.3157911,
   0.3151235,
   0.3757984,
   0.4746023,
   0.5386799,
   0.52956,
   0.6761593,
   0.6761787,
   0.7121079,
   0.9114015,
   0.8313576,
   0.818048,
   1.373073,
   0.8656595,
   0.9827669,
   0.8343905,
   1.125424,
   1.708589};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
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
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
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
   Double_t _fely3007[25] = {
   0.1946813,
   0.204154,
   0.2108091,
   0.2283657,
   0.2374189,
   0.2406469,
   0.2362155,
   0.228585,
   0.2163503,
   0.2377992,
   0.216212,
   0.2660366,
   0.2299346,
   0.2716298,
   0.2905195,
   0.3225389,
   0.3036158,
   0.2859411,
   0.3049039,
   0.3217545,
   0.3208712,
   0.3985829,
   0.4388918,
   0.5123075,
   0.4821832};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0.1946813,
   0.204154,
   0.2108091,
   0.2283657,
   0.2374189,
   0.2406469,
   0.2362155,
   0.228585,
   0.2163503,
   0.2377992,
   0.216212,
   0.2660366,
   0.2299346,
   0.2716298,
   0.2905195,
   0.3225389,
   0.3036158,
   0.2859411,
   0.3049039,
   0.3217545,
   0.3208712,
   0.3985829,
   0.4388918,
   0.5123075,
   0.4821832};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   0.6266169,
   0.6334247,
   0.5847759,
   0.6162657,
   0.8230982,
   0.635062,
   0.8225759,
   0.2993161,
   0.7197183,
   0.5642894,
   1.055286,
   0.433088,
   1.097554,
   1.400339,
   0.7423414,
   1.104266,
   0.5199246,
   0,
   0.6685807,
   1.2745,
   1.656214,
   2.168772,
   0,
   0,
   0};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0.3120489,
   0.1428342,
   0.1095422,
   0.1174836,
   0.1597928,
   0.1600169,
   0.2072649,
   0.1490564,
   0.2553832,
   0.2810105,
   0.4310902,
   0.433088,
   0.6302236,
   0.8040853,
   0.7423414,
   1.104266,
   0.5199246,
   0,
   0.6685807,
   1.2745,
   1.656214,
   2.168772,
   0,
   0,
   0};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.2770449,
   0.1364246,
   0.1054877,
   0.113055,
   0.1536577,
   0.1519404,
   0.1968037,
   0.132336,
   0.2365634,
   0.2494881,
   0.3935507,
   0.3289671,
   0.5437995,
   0.6938191,
   0.5638714,
   0.8387842,
   0.7069467,
   0.568055,
   0.9090759,
   0.968091,
   1.258035,
   1.647366,
   1.373441,
   2.361684,
   1.725999};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(4.197752);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_pi0_momentum_all",25,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
