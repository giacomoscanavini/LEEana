#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 13:18:47 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-0.8128597,1692.308,68.49413);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hmc__4->SetBinContent(2,0.06195629);
   hmc__4->SetBinContent(3,1.226984);
   hmc__4->SetBinContent(4,13.23733);
   hmc__4->SetBinContent(5,28.7291);
   hmc__4->SetBinContent(6,37.98638);
   hmc__4->SetBinContent(7,40.64299);
   hmc__4->SetBinContent(8,35.69875);
   hmc__4->SetBinContent(9,31.76353);
   hmc__4->SetBinContent(10,26.34848);
   hmc__4->SetBinContent(11,20.46355);
   hmc__4->SetBinContent(12,16.9165);
   hmc__4->SetBinContent(13,12.72502);
   hmc__4->SetBinContent(14,9.259774);
   hmc__4->SetBinContent(15,7.336893);
   hmc__4->SetBinContent(16,4.607283);
   hmc__4->SetBinContent(17,4.105564);
   hmc__4->SetBinContent(18,2.879232);
   hmc__4->SetBinContent(19,2.388169);
   hmc__4->SetBinContent(20,2.486745);
   hmc__4->SetBinContent(21,6.660887);
   hmc__4->SetBinError(1,0.125509);
   hmc__4->SetBinError(2,0.1312078);
   hmc__4->SetBinError(3,0.8780411);
   hmc__4->SetBinError(4,4.288556);
   hmc__4->SetBinError(5,7.458458);
   hmc__4->SetBinError(6,10.11859);
   hmc__4->SetBinError(7,10.58335);
   hmc__4->SetBinError(8,9.216397);
   hmc__4->SetBinError(9,8.516979);
   hmc__4->SetBinError(10,7.13069);
   hmc__4->SetBinError(11,6.716444);
   hmc__4->SetBinError(12,5.77358);
   hmc__4->SetBinError(13,4.69714);
   hmc__4->SetBinError(14,3.902366);
   hmc__4->SetBinError(15,3.246987);
   hmc__4->SetBinError(16,2.354882);
   hmc__4->SetBinError(17,2.676454);
   hmc__4->SetBinError(18,1.80955);
   hmc__4->SetBinError(19,1.319004);
   hmc__4->SetBinError(20,2.233062);
   hmc__4->SetBinError(21,2.562278);
   hmc__4->SetMinimum(-0.8128597);
   hmc__4->SetMaximum(65.02878);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(-2.770604e-09);
   hs2_stack_2->SetMaximum(42.67514);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(3,0.1239126);
   hbadmatch_stack_1->SetBinContent(4,0.08985363);
   hbadmatch_stack_1->SetBinContent(5,0.5131365);
   hbadmatch_stack_1->SetBinContent(6,0.3985332);
   hbadmatch_stack_1->SetBinContent(7,0.8130499);
   hbadmatch_stack_1->SetBinContent(8,0.7236038);
   hbadmatch_stack_1->SetBinContent(9,0.889892);
   hbadmatch_stack_1->SetBinContent(10,0.3949279);
   hbadmatch_stack_1->SetBinContent(11,0.2981718);
   hbadmatch_stack_1->SetBinContent(12,0.2594868);
   hbadmatch_stack_1->SetBinContent(13,0.278232);
   hbadmatch_stack_1->SetBinContent(14,0.189297);
   hbadmatch_stack_1->SetBinContent(15,0.2241195);
   hbadmatch_stack_1->SetBinContent(17,0.2023993);
   hbadmatch_stack_1->SetBinContent(18,0.1002069);
   hbadmatch_stack_1->SetBinContent(19,0.158587);
   hbadmatch_stack_1->SetBinContent(21,0.2241195);
   hbadmatch_stack_1->SetBinError(3,0.08761943);
   hbadmatch_stack_1->SetBinError(4,0.07626231);
   hbadmatch_stack_1->SetBinError(5,0.167692);
   hbadmatch_stack_1->SetBinError(6,0.1530945);
   hbadmatch_stack_1->SetBinError(7,0.383904);
   hbadmatch_stack_1->SetBinError(8,0.2103918);
   hbadmatch_stack_1->SetBinError(9,0.2144161);
   hbadmatch_stack_1->SetBinError(10,0.1485333);
   hbadmatch_stack_1->SetBinError(11,0.119159);
   hbadmatch_stack_1->SetBinError(12,0.1155525);
   hbadmatch_stack_1->SetBinError(13,0.1128838);
   hbadmatch_stack_1->SetBinError(14,0.1015708);
   hbadmatch_stack_1->SetBinError(15,0.1095603);
   hbadmatch_stack_1->SetBinError(17,0.1085772);
   hbadmatch_stack_1->SetBinError(18,0.0657745);
   hbadmatch_stack_1->SetBinError(19,0.09603769);
   hbadmatch_stack_1->SetBinError(21,0.1095603);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hext_stack_2->SetBinContent(3,0.03680956);
   hext_stack_2->SetBinContent(4,1.353803);
   hext_stack_2->SetBinContent(5,2.110458);
   hext_stack_2->SetBinContent(6,1.985028);
   hext_stack_2->SetBinContent(7,2.707606);
   hext_stack_2->SetBinContent(8,1.82552);
   hext_stack_2->SetBinContent(9,1.626471);
   hext_stack_2->SetBinContent(10,1.540582);
   hext_stack_2->SetBinContent(11,1.601931);
   hext_stack_2->SetBinContent(12,1.715091);
   hext_stack_2->SetBinContent(13,0.3462873);
   hext_stack_2->SetBinContent(14,0.2481285);
   hext_stack_2->SetBinContent(15,0.07361911);
   hext_stack_2->SetBinContent(16,0.4349078);
   hext_stack_2->SetBinContent(17,0.08588897);
   hext_stack_2->SetBinContent(18,0.04907941);
   hext_stack_2->SetBinContent(19,0.2726682);
   hext_stack_2->SetBinContent(20,0.01226985);
   hext_stack_2->SetBinContent(21,0.9311647);
   hext_stack_2->SetBinError(3,0.02125201);
   hext_stack_2->SetBinError(4,0.4895717);
   hext_stack_2->SetBinError(5,0.6004159);
   hext_stack_2->SetBinError(6,0.5672583);
   hext_stack_2->SetBinError(7,0.6923589);
   hext_stack_2->SetBinError(8,0.5655306);
   hext_stack_2->SetBinError(9,0.5293432);
   hext_stack_2->SetBinError(10,0.5283469);
   hext_stack_2->SetBinError(11,0.5290588);
   hext_stack_2->SetBinError(12,0.5643313);
   hext_stack_2->SetBinError(13,0.2035366);
   hext_stack_2->SetBinError(14,0.2005561);
   hext_stack_2->SetBinError(15,0.03005488);
   hext_stack_2->SetBinError(16,0.282299);
   hext_stack_2->SetBinError(17,0.03246298);
   hext_stack_2->SetBinError(18,0.0245397);
   hext_stack_2->SetBinError(19,0.2013053);
   hext_stack_2->SetBinError(20,0.01226985);
   hext_stack_2->SetBinError(21,0.4001727);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hdirt_stack_3->SetBinContent(4,0.1217914);
   hdirt_stack_3->SetBinContent(5,0.3154061);
   hdirt_stack_3->SetBinContent(6,0.4223537);
   hdirt_stack_3->SetBinContent(7,0.3243605);
   hdirt_stack_3->SetBinContent(8,0.1335384);
   hdirt_stack_3->SetBinContent(9,0.09663776);
   hdirt_stack_3->SetBinContent(10,0.01643923);
   hdirt_stack_3->SetBinContent(11,0.008219617);
   hdirt_stack_3->SetBinContent(14,0.08841814);
   hdirt_stack_3->SetBinContent(18,0.04420907);
   hdirt_stack_3->SetBinError(4,0.06940808);
   hdirt_stack_3->SetBinError(5,0.1146146);
   hdirt_stack_3->SetBinError(6,0.3049036);
   hdirt_stack_3->SetBinError(7,0.1169435);
   hdirt_stack_3->SetBinError(8,0.06562278);
   hdirt_stack_3->SetBinError(9,0.06305907);
   hdirt_stack_3->SetBinError(10,0.01162429);
   hdirt_stack_3->SetBinError(11,0.008219618);
   hdirt_stack_3->SetBinError(14,0.06252107);
   hdirt_stack_3->SetBinError(18,0.04420907);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   houtFV_stack_4->SetBinContent(3,0.2261012);
   houtFV_stack_4->SetBinContent(4,1.443064);
   houtFV_stack_4->SetBinContent(5,2.127942);
   houtFV_stack_4->SetBinContent(6,2.531751);
   houtFV_stack_4->SetBinContent(7,3.033964);
   houtFV_stack_4->SetBinContent(8,2.47859);
   houtFV_stack_4->SetBinContent(9,1.747399);
   houtFV_stack_4->SetBinContent(10,1.813426);
   houtFV_stack_4->SetBinContent(11,0.8376705);
   houtFV_stack_4->SetBinContent(12,0.5272138);
   houtFV_stack_4->SetBinContent(13,0.7178591);
   houtFV_stack_4->SetBinContent(14,0.5778961);
   houtFV_stack_4->SetBinContent(15,0.4024);
   houtFV_stack_4->SetBinContent(16,0.3717377);
   houtFV_stack_4->SetBinContent(17,0.2113693);
   houtFV_stack_4->SetBinContent(18,0.1257073);
   houtFV_stack_4->SetBinContent(19,0.06195629);
   houtFV_stack_4->SetBinContent(20,0.02550039);
   houtFV_stack_4->SetBinContent(21,0.4227385);
   houtFV_stack_4->SetBinError(3,0.1098085);
   houtFV_stack_4->SetBinError(4,0.2834712);
   houtFV_stack_4->SetBinError(5,0.3442528);
   houtFV_stack_4->SetBinError(6,0.3781443);
   houtFV_stack_4->SetBinError(7,0.4198123);
   houtFV_stack_4->SetBinError(8,0.3696584);
   houtFV_stack_4->SetBinError(9,0.3066136);
   houtFV_stack_4->SetBinError(10,0.3186619);
   houtFV_stack_4->SetBinError(11,0.2225847);
   houtFV_stack_4->SetBinError(12,0.1582767);
   houtFV_stack_4->SetBinError(13,0.1980247);
   houtFV_stack_4->SetBinError(14,0.1696309);
   houtFV_stack_4->SetBinError(15,0.1429268);
   houtFV_stack_4->SetBinError(16,0.1517613);
   houtFV_stack_4->SetBinError(17,0.1088158);
   houtFV_stack_4->SetBinError(18,0.06820132);
   houtFV_stack_4->SetBinError(19,0.06195629);
   houtFV_stack_4->SetBinError(20,0.0180315);
   houtFV_stack_4->SetBinError(21,0.1538888);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(2,0.06195629);
   hNCpi0inFV_stack_5->SetBinContent(3,0.5356956);
   hNCpi0inFV_stack_5->SetBinContent(4,7.71309);
   hNCpi0inFV_stack_5->SetBinContent(5,18.52003);
   hNCpi0inFV_stack_5->SetBinContent(6,23.75487);
   hNCpi0inFV_stack_5->SetBinContent(7,24.6681);
   hNCpi0inFV_stack_5->SetBinContent(8,21.02718);
   hNCpi0inFV_stack_5->SetBinContent(9,17.1714);
   hNCpi0inFV_stack_5->SetBinContent(10,13.88445);
   hNCpi0inFV_stack_5->SetBinContent(11,9.689932);
   hNCpi0inFV_stack_5->SetBinContent(12,7.456104);
   hNCpi0inFV_stack_5->SetBinContent(13,5.910974);
   hNCpi0inFV_stack_5->SetBinContent(14,4.050643);
   hNCpi0inFV_stack_5->SetBinContent(15,3.064761);
   hNCpi0inFV_stack_5->SetBinContent(16,1.792956);
   hNCpi0inFV_stack_5->SetBinContent(17,1.284555);
   hNCpi0inFV_stack_5->SetBinContent(18,0.7871101);
   hNCpi0inFV_stack_5->SetBinContent(19,0.6869032);
   hNCpi0inFV_stack_5->SetBinContent(20,1.23176);
   hNCpi0inFV_stack_5->SetBinContent(21,1.79475);
   hNCpi0inFV_stack_5->SetBinError(2,0.06195629);
   hNCpi0inFV_stack_5->SetBinError(3,0.167841);
   hNCpi0inFV_stack_5->SetBinError(4,0.6515723);
   hNCpi0inFV_stack_5->SetBinError(5,1.002192);
   hNCpi0inFV_stack_5->SetBinError(6,1.129332);
   hNCpi0inFV_stack_5->SetBinError(7,1.158507);
   hNCpi0inFV_stack_5->SetBinError(8,1.06342);
   hNCpi0inFV_stack_5->SetBinError(9,0.9608472);
   hNCpi0inFV_stack_5->SetBinError(10,0.8608284);
   hNCpi0inFV_stack_5->SetBinError(11,0.7167795);
   hNCpi0inFV_stack_5->SetBinError(12,0.6348056);
   hNCpi0inFV_stack_5->SetBinError(13,0.567719);
   hNCpi0inFV_stack_5->SetBinError(14,0.4651173);
   hNCpi0inFV_stack_5->SetBinError(15,0.4012747);
   hNCpi0inFV_stack_5->SetBinError(16,0.3098832);
   hNCpi0inFV_stack_5->SetBinError(17,0.2552574);
   hNCpi0inFV_stack_5->SetBinError(18,0.1935806);
   hNCpi0inFV_stack_5->SetBinError(19,0.1820636);
   hNCpi0inFV_stack_5->SetBinError(20,0.2598689);
   hNCpi0inFV_stack_5->SetBinError(21,0.304962);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(3,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(4,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(5,1.302015);
   hCCpi0inFV_stack_6->SetBinContent(6,2.850725);
   hCCpi0inFV_stack_6->SetBinContent(7,4.122746);
   hCCpi0inFV_stack_6->SetBinContent(8,4.853649);
   hCCpi0inFV_stack_6->SetBinContent(9,5.874932);
   hCCpi0inFV_stack_6->SetBinContent(10,5.190713);
   hCCpi0inFV_stack_6->SetBinContent(11,4.460032);
   hCCpi0inFV_stack_6->SetBinContent(12,4.195541);
   hCCpi0inFV_stack_6->SetBinContent(13,3.792774);
   hCCpi0inFV_stack_6->SetBinContent(14,2.74081);
   hCCpi0inFV_stack_6->SetBinContent(15,2.735686);
   hCCpi0inFV_stack_6->SetBinContent(16,1.319216);
   hCCpi0inFV_stack_6->SetBinContent(17,1.512676);
   hCCpi0inFV_stack_6->SetBinContent(18,1.311931);
   hCCpi0inFV_stack_6->SetBinContent(19,0.99489);
   hCCpi0inFV_stack_6->SetBinContent(20,0.73252);
   hCCpi0inFV_stack_6->SetBinContent(21,2.349351);
   hCCpi0inFV_stack_6->SetBinError(3,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(4,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(5,0.275225);
   hCCpi0inFV_stack_6->SetBinError(6,0.3931704);
   hCCpi0inFV_stack_6->SetBinError(7,0.4847666);
   hCCpi0inFV_stack_6->SetBinError(8,0.5127996);
   hCCpi0inFV_stack_6->SetBinError(9,0.5653106);
   hCCpi0inFV_stack_6->SetBinError(10,0.5311049);
   hCCpi0inFV_stack_6->SetBinError(11,0.4960679);
   hCCpi0inFV_stack_6->SetBinError(12,0.4799565);
   hCCpi0inFV_stack_6->SetBinError(13,0.4536844);
   hCCpi0inFV_stack_6->SetBinError(14,0.3790388);
   hCCpi0inFV_stack_6->SetBinError(15,0.3980617);
   hCCpi0inFV_stack_6->SetBinError(16,0.2677603);
   hCCpi0inFV_stack_6->SetBinError(17,0.2779889);
   hCCpi0inFV_stack_6->SetBinError(18,0.2619433);
   hCCpi0inFV_stack_6->SetBinError(19,0.2352994);
   hCCpi0inFV_stack_6->SetBinError(20,0.207062);
   hCCpi0inFV_stack_6->SetBinError(21,0.3485846);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hNCinFV_stack_7->SetBinContent(3,0.1366628);
   hNCinFV_stack_7->SetBinContent(4,0.4245332);
   hNCinFV_stack_7->SetBinContent(5,0.7488596);
   hNCinFV_stack_7->SetBinContent(6,1.803911);
   hNCinFV_stack_7->SetBinContent(7,2.201149);
   hNCinFV_stack_7->SetBinContent(8,1.293716);
   hNCinFV_stack_7->SetBinContent(9,1.703704);
   hNCinFV_stack_7->SetBinContent(10,1.058641);
   hNCinFV_stack_7->SetBinContent(11,1.033141);
   hNCinFV_stack_7->SetBinContent(12,0.5739462);
   hNCinFV_stack_7->SetBinContent(13,0.8946831);
   hNCinFV_stack_7->SetBinContent(14,0.4135428);
   hNCinFV_stack_7->SetBinContent(15,0.5721515);
   hNCinFV_stack_7->SetBinContent(16,0.06375098);
   hNCinFV_stack_7->SetBinContent(17,0.3243263);
   hNCinFV_stack_7->SetBinContent(18,0.1002069);
   hNCinFV_stack_7->SetBinContent(19,0.1621632);
   hNCinFV_stack_7->SetBinContent(20,0.1366628);
   hNCinFV_stack_7->SetBinContent(21,0.1384575);
   hNCinFV_stack_7->SetBinError(3,0.08854226);
   hNCinFV_stack_7->SetBinError(4,0.143722);
   hNCinFV_stack_7->SetBinError(5,0.1923168);
   hNCinFV_stack_7->SetBinError(6,0.3149856);
   hNCinFV_stack_7->SetBinError(7,0.3501036);
   hNCinFV_stack_7->SetBinError(8,0.2671524);
   hNCinFV_stack_7->SetBinError(9,0.3080416);
   hNCinFV_stack_7->SetBinError(10,0.2370204);
   hNCinFV_stack_7->SetBinError(11,0.2363335);
   hNCinFV_stack_7->SetBinError(12,0.1692877);
   hNCinFV_stack_7->SetBinError(13,0.2259193);
   hNCinFV_stack_7->SetBinError(14,0.1431662);
   hNCinFV_stack_7->SetBinError(15,0.1780002);
   hNCinFV_stack_7->SetBinError(16,0.0285103);
   hNCinFV_stack_7->SetBinError(17,0.1277878);
   hNCinFV_stack_7->SetBinError(18,0.0657745);
   hNCinFV_stack_7->SetBinError(19,0.09035965);
   hNCinFV_stack_7->SetBinError(20,0.08854226);
   hNCinFV_stack_7->SetBinError(21,0.0693829);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(3,0.1550521);
   hnumuCCinFV_stack_8->SetBinContent(4,1.568246);
   hnumuCCinFV_stack_8->SetBinContent(5,3.078506);
   hnumuCCinFV_stack_8->SetBinContent(6,4.177254);
   hnumuCCinFV_stack_8->SetBinContent(7,2.759263);
   hnumuCCinFV_stack_8->SetBinContent(8,3.36295);
   hnumuCCinFV_stack_8->SetBinContent(9,2.640343);
   hnumuCCinFV_stack_8->SetBinContent(10,2.359987);
   hnumuCCinFV_stack_8->SetBinContent(11,2.521699);
   hnumuCCinFV_stack_8->SetBinContent(12,2.189117);
   hnumuCCinFV_stack_8->SetBinContent(13,0.7101316);
   hnumuCCinFV_stack_8->SetBinContent(14,0.9510381);
   hnumuCCinFV_stack_8->SetBinContent(15,0.2021994);
   hnumuCCinFV_stack_8->SetBinContent(16,0.4749835);
   hnumuCCinFV_stack_8->SetBinContent(17,0.4048623);
   hnumuCCinFV_stack_8->SetBinContent(18,0.2241195);
   hnumuCCinFV_stack_8->SetBinContent(19,0.03825059);
   hnumuCCinFV_stack_8->SetBinContent(20,0.2733256);
   hnumuCCinFV_stack_8->SetBinContent(21,0.4698985);
   hnumuCCinFV_stack_8->SetBinError(3,0.1096675);
   hnumuCCinFV_stack_8->SetBinError(4,0.5086217);
   hnumuCCinFV_stack_8->SetBinError(5,0.6913854);
   hnumuCCinFV_stack_8->SetBinError(6,0.5670284);
   hnumuCCinFV_stack_8->SetBinError(7,0.4031373);
   hnumuCCinFV_stack_8->SetBinError(8,0.5950489);
   hnumuCCinFV_stack_8->SetBinError(9,0.4026791);
   hnumuCCinFV_stack_8->SetBinError(10,0.4831158);
   hnumuCCinFV_stack_8->SetBinError(11,0.42352);
   hnumuCCinFV_stack_8->SetBinError(12,0.3824182);
   hnumuCCinFV_stack_8->SetBinError(13,0.1984004);
   hnumuCCinFV_stack_8->SetBinError(14,0.25289);
   hnumuCCinFV_stack_8->SetBinError(15,0.09328071);
   hnumuCCinFV_stack_8->SetBinError(16,0.165159);
   hnumuCCinFV_stack_8->SetBinError(17,0.160371);
   hnumuCCinFV_stack_8->SetBinError(18,0.1095603);
   hnumuCCinFV_stack_8->SetBinError(19,0.02208399);
   hnumuCCinFV_stack_8->SetBinError(20,0.1252177);
   hnumuCCinFV_stack_8->SetBinError(21,0.152543);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hnueCCinFV_stack_9->SetBinContent(4,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(6,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(7,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(9,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(10,0.08931305);
   hnueCCinFV_stack_9->SetBinContent(11,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(13,0.07408212);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.1497306);
   hnueCCinFV_stack_9->SetBinContent(17,0.07948712);
   hnueCCinFV_stack_9->SetBinContent(18,0.1366628);
   hnueCCinFV_stack_9->SetBinContent(19,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(20,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(21,0.3304061);
   hnueCCinFV_stack_9->SetBinError(4,0.06195629);
   hnueCCinFV_stack_9->SetBinError(5,0.0127502);
   hnueCCinFV_stack_9->SetBinError(6,0.06195629);
   hnueCCinFV_stack_9->SetBinError(7,0.0127502);
   hnueCCinFV_stack_9->SetBinError(9,0.0127502);
   hnueCCinFV_stack_9->SetBinError(10,0.06491609);
   hnueCCinFV_stack_9->SetBinError(11,0.0127502);
   hnueCCinFV_stack_9->SetBinError(13,0.05182006);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.09753869);
   hnueCCinFV_stack_9->SetBinError(17,0.07948712);
   hnueCCinFV_stack_9->SetBinError(18,0.08854226);
   hnueCCinFV_stack_9->SetBinError(19,0.0127502);
   hnueCCinFV_stack_9->SetBinError(20,0.06325464);
   hnueCCinFV_stack_9->SetBinError(21,0.1284443);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);
   hmcerror__5->SetBinContent(2,0.06195629);
   hmcerror__5->SetBinContent(3,1.226984);
   hmcerror__5->SetBinContent(4,13.23733);
   hmcerror__5->SetBinContent(5,28.7291);
   hmcerror__5->SetBinContent(6,37.98638);
   hmcerror__5->SetBinContent(7,40.64299);
   hmcerror__5->SetBinContent(8,35.69875);
   hmcerror__5->SetBinContent(9,31.76353);
   hmcerror__5->SetBinContent(10,26.34848);
   hmcerror__5->SetBinContent(11,20.46355);
   hmcerror__5->SetBinContent(12,16.9165);
   hmcerror__5->SetBinContent(13,12.72502);
   hmcerror__5->SetBinContent(14,9.259774);
   hmcerror__5->SetBinContent(15,7.336893);
   hmcerror__5->SetBinContent(16,4.607283);
   hmcerror__5->SetBinContent(17,4.105564);
   hmcerror__5->SetBinContent(18,2.879232);
   hmcerror__5->SetBinContent(19,2.388169);
   hmcerror__5->SetBinContent(20,2.486745);
   hmcerror__5->SetBinContent(21,6.660887);
   hmcerror__5->SetBinError(1,0.125509);
   hmcerror__5->SetBinError(2,0.1312078);
   hmcerror__5->SetBinError(3,0.8780411);
   hmcerror__5->SetBinError(4,4.288556);
   hmcerror__5->SetBinError(5,7.458458);
   hmcerror__5->SetBinError(6,10.11859);
   hmcerror__5->SetBinError(7,10.58335);
   hmcerror__5->SetBinError(8,9.216397);
   hmcerror__5->SetBinError(9,8.516979);
   hmcerror__5->SetBinError(10,7.13069);
   hmcerror__5->SetBinError(11,6.716444);
   hmcerror__5->SetBinError(12,5.77358);
   hmcerror__5->SetBinError(13,4.69714);
   hmcerror__5->SetBinError(14,3.902366);
   hmcerror__5->SetBinError(15,3.246987);
   hmcerror__5->SetBinError(16,2.354882);
   hmcerror__5->SetBinError(17,2.676454);
   hmcerror__5->SetBinError(18,1.80955);
   hmcerror__5->SetBinError(19,1.319004);
   hmcerror__5->SetBinError(20,2.233062);
   hmcerror__5->SetBinError(21,2.562278);
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
   
   Double_t _fx3005[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3005[20] = {
   0,
   0,
   3,
   9,
   22,
   30,
   29,
   23,
   22,
   24,
   10,
   11,
   6,
   1,
   9,
   5,
   1,
   0,
   0,
   2};
   Double_t _felx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3005[20] = {
   0,
   0,
   2.143368,
   3.19354,
   4.8417,
   5.6197,
   5.5285,
   4.9457,
   4.8417,
   5.0476,
   3.34883,
   3.4975,
   2.67925,
   1,
   3.19354,
   2.48995,
   1,
   0,
   0,
   2};
   Double_t _fehx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3005[20] = {
   1.1478,
   1.1478,
   1.72422,
   2.9582,
   4.6299,
   5.4117,
   5.3201,
   4.7346,
   4.6299,
   4.837,
   3.1179,
   3.27,
   2.41858,
   1.35971,
   2.9582,
   2.21064,
   1.35971,
   1.1478,
   1.1478,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.69#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.84/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 207.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 18.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 19.3","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  163.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 48.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 13.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 28.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_reco_Enu_all");
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
   
   Double_t _fx3006[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3006[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3006[20] = {
   0,
   2.117748,
   0.7156092,
   0.3239745,
   0.2596133,
   0.266374,
   0.260398,
   0.2581714,
   0.2681371,
   0.27063,
   0.328215,
   0.3412987,
   0.3691262,
   0.421432,
   0.4425562,
   0.5111217,
   0.651909,
   0.6284835,
   0.5523078,
   0.8979858};
   Double_t _fehx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3006[20] = {
   0,
   2.117748,
   0.7156092,
   0.3239745,
   0.2596133,
   0.266374,
   0.260398,
   0.2581714,
   0.2681371,
   0.27063,
   0.328215,
   0.3412987,
   0.3691262,
   0.421432,
   0.4425562,
   0.5111217,
   0.651909,
   0.6284835,
   0.5523078,
   0.8979858};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   
   Double_t _fx3007[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3007[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3007[20] = {
   0,
   2.117748,
   0.3300088,
   0.2256493,
   0.2016527,
   0.2262773,
   0.2097465,
   0.2112642,
   0.2243645,
   0.2131886,
   0.2073547,
   0.2146797,
   0.2368319,
   0.2235407,
   0.2555474,
   0.25779,
   0.266631,
   0.3037629,
   0.2856059,
   0.3126642};
   Double_t _fehx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3007[20] = {
   0,
   2.117748,
   0.3300088,
   0.2256493,
   0.2016527,
   0.2262773,
   0.2097465,
   0.2112642,
   0.2243645,
   0.2131886,
   0.2073547,
   0.2146797,
   0.2368319,
   0.2235407,
   0.2555474,
   0.25779,
   0.266631,
   0.3037629,
   0.2856059,
   0.3126642};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3008[20] = {
   10,
   0,
   2.44502,
   0.6798956,
   0.7657739,
   0.7897567,
   0.7135302,
   0.6442802,
   0.6926183,
   0.9108685,
   0.4886738,
   0.6502527,
   0.4715119,
   0.107994,
   1.226677,
   1.085238,
   0.2435719,
   0,
   0,
   0.8042642};
   Double_t _felx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3008[20] = {
   0,
   0,
   1.746859,
   0.2412527,
   0.1685294,
   0.1479399,
   0.1360259,
   0.1385399,
   0.1524296,
   0.1915708,
   0.1636485,
   0.2067508,
   0.2105497,
   0.107994,
   0.4352714,
   0.5404378,
   0.2435719,
   0,
   0,
   0.8042642};
   Double_t _fehx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3008[20] = {
   0,
   18.52596,
   1.405251,
   0.2234741,
   0.1611571,
   0.1424642,
   0.1308984,
   0.1326265,
   0.1457615,
   0.183578,
   0.1523636,
   0.1933024,
   0.1900649,
   0.1468405,
   0.4031952,
   0.4798142,
   0.3311872,
   0.3986479,
   0.4806193,
   0.6109071};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(20.37856);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_reco_Enu_all",20,0,1500);

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
