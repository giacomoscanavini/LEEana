#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Apr 18 15:37:27 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-1.506289,1128.205,126.9246);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hmc__7->SetBinContent(0,6.762001);
   hmc__7->SetBinContent(1,75.31444);
   hmc__7->SetBinContent(2,60.96513);
   hmc__7->SetBinContent(3,54.07304);
   hmc__7->SetBinContent(4,49.85469);
   hmc__7->SetBinContent(5,45.23482);
   hmc__7->SetBinContent(6,43.59573);
   hmc__7->SetBinContent(7,35.80752);
   hmc__7->SetBinContent(8,30.65056);
   hmc__7->SetBinContent(9,25.25688);
   hmc__7->SetBinContent(10,19.34118);
   hmc__7->SetBinContent(11,13.15495);
   hmc__7->SetBinContent(12,10.58012);
   hmc__7->SetBinContent(13,10.05042);
   hmc__7->SetBinContent(14,8.253407);
   hmc__7->SetBinContent(15,5.393044);
   hmc__7->SetBinContent(16,4.165554);
   hmc__7->SetBinContent(17,2.600311);
   hmc__7->SetBinContent(18,3.104234);
   hmc__7->SetBinContent(19,1.80606);
   hmc__7->SetBinContent(20,1.250808);
   hmc__7->SetBinContent(21,6.440695);
   hmc__7->SetBinError(0,0.7760988);
   hmc__7->SetBinError(1,18.92285);
   hmc__7->SetBinError(2,14.15255);
   hmc__7->SetBinError(3,12.88934);
   hmc__7->SetBinError(4,12.51413);
   hmc__7->SetBinError(5,11.27908);
   hmc__7->SetBinError(6,11.24347);
   hmc__7->SetBinError(7,10.60806);
   hmc__7->SetBinError(8,8.344731);
   hmc__7->SetBinError(9,7.869425);
   hmc__7->SetBinError(10,5.373323);
   hmc__7->SetBinError(11,4.259128);
   hmc__7->SetBinError(12,4.143806);
   hmc__7->SetBinError(13,4.047646);
   hmc__7->SetBinError(14,3.673268);
   hmc__7->SetBinError(15,3.095183);
   hmc__7->SetBinError(16,2.108374);
   hmc__7->SetBinError(17,1.65773);
   hmc__7->SetBinError(18,2.182106);
   hmc__7->SetBinError(19,1.391455);
   hmc__7->SetBinError(20,0.9975338);
   hmc__7->SetBinError(21,3.065612);
   hmc__7->SetMinimum(-1.506289);
   hmc__7->SetMaximum(120.5031);
   hmc__7->SetEntries(507.336);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,1000);
   hs3_stack_3->SetMinimum(-1.595087e-09);
   hs3_stack_3->SetMaximum(79.08016);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hbadmatch_stack_1->SetBinContent(0,0.1461437);
   hbadmatch_stack_1->SetBinContent(1,1.017768);
   hbadmatch_stack_1->SetBinContent(2,0.5498059);
   hbadmatch_stack_1->SetBinContent(3,1.007853);
   hbadmatch_stack_1->SetBinContent(4,0.8232499);
   hbadmatch_stack_1->SetBinContent(5,1.053442);
   hbadmatch_stack_1->SetBinContent(6,1.027703);
   hbadmatch_stack_1->SetBinContent(7,0.7466407);
   hbadmatch_stack_1->SetBinContent(8,0.8090478);
   hbadmatch_stack_1->SetBinContent(9,0.4744641);
   hbadmatch_stack_1->SetBinContent(10,0.3573492);
   hbadmatch_stack_1->SetBinContent(11,0.2751203);
   hbadmatch_stack_1->SetBinContent(12,0.1002069);
   hbadmatch_stack_1->SetBinContent(13,0.2860757);
   hbadmatch_stack_1->SetBinContent(14,0.1628261);
   hbadmatch_stack_1->SetBinContent(15,0.1898089);
   hbadmatch_stack_1->SetBinContent(16,0.1100738);
   hbadmatch_stack_1->SetBinContent(17,0.1018403);
   hbadmatch_stack_1->SetBinContent(18,0.137902);
   hbadmatch_stack_1->SetBinContent(19,0.06195629);
   hbadmatch_stack_1->SetBinContent(21,0.2113693);
   hbadmatch_stack_1->SetBinError(0,0.09541713);
   hbadmatch_stack_1->SetBinError(1,0.2282009);
   hbadmatch_stack_1->SetBinError(2,0.1654575);
   hbadmatch_stack_1->SetBinError(3,0.3272481);
   hbadmatch_stack_1->SetBinError(4,0.2404922);
   hbadmatch_stack_1->SetBinError(5,0.4060624);
   hbadmatch_stack_1->SetBinError(6,0.2444324);
   hbadmatch_stack_1->SetBinError(7,0.206697);
   hbadmatch_stack_1->SetBinError(8,0.2123199);
   hbadmatch_stack_1->SetBinError(9,0.1493764);
   hbadmatch_stack_1->SetBinError(10,0.1299166);
   hbadmatch_stack_1->SetBinError(11,0.1124887);
   hbadmatch_stack_1->SetBinError(12,0.0657745);
   hbadmatch_stack_1->SetBinError(13,0.1258651);
   hbadmatch_stack_1->SetBinError(14,0.09733404);
   hbadmatch_stack_1->SetBinError(15,0.09246249);
   hbadmatch_stack_1->SetBinError(16,0.07314429);
   hbadmatch_stack_1->SetBinError(17,0.07844055);
   hbadmatch_stack_1->SetBinError(18,0.0980119);
   hbadmatch_stack_1->SetBinError(19,0.06195629);
   hbadmatch_stack_1->SetBinError(21,0.1088158);
   hbadmatch_stack_1->SetEntries(259);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1452;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hext_stack_2->SetBinContent(0,1.525581);
   hext_stack_2->SetBinContent(1,4.916223);
   hext_stack_2->SetBinContent(2,4.193645);
   hext_stack_2->SetBinContent(3,3.41245);
   hext_stack_2->SetBinContent(4,2.940733);
   hext_stack_2->SetBinContent(5,1.621008);
   hext_stack_2->SetBinContent(6,2.098188);
   hext_stack_2->SetBinContent(7,2.061379);
   hext_stack_2->SetBinContent(8,1.265182);
   hext_stack_2->SetBinContent(9,2.248158);
   hext_stack_2->SetBinContent(10,1.191563);
   hext_stack_2->SetBinContent(11,0.07361911);
   hext_stack_2->SetBinContent(12,0.2603984);
   hext_stack_2->SetBinContent(13,0.8820854);
   hext_stack_2->SetBinContent(14,0.6830363);
   hext_stack_2->SetBinContent(15,0.07361911);
   hext_stack_2->SetBinContent(16,0.2358586);
   hext_stack_2->SetBinContent(17,0.07361911);
   hext_stack_2->SetBinContent(18,0.2235888);
   hext_stack_2->SetBinContent(19,0.03680956);
   hext_stack_2->SetBinContent(20,0.02453971);
   hext_stack_2->SetBinContent(21,0.4717173);
   hext_stack_2->SetBinError(0,0.4917195);
   hext_stack_2->SetBinError(1,0.9170957);
   hext_stack_2->SetBinError(2,0.8267318);
   hext_stack_2->SetBinError(3,0.7499104);
   hext_stack_2->SetBinError(4,0.6944215);
   hext_stack_2->SetBinError(5,0.4536306);
   hext_stack_2->SetBinError(6,0.6002905);
   hext_stack_2->SetBinError(7,0.5999142);
   hext_stack_2->SetBinError(8,0.4487926);
   hext_stack_2->SetBinError(9,0.6319549);
   hext_stack_2->SetBinError(10,0.4477851);
   hext_stack_2->SetBinError(11,0.03005488);
   hext_stack_2->SetBinError(12,0.2009311);
   hext_stack_2->SetBinError(13,0.3994196);
   hext_stack_2->SetBinError(14,0.3462882);
   hext_stack_2->SetBinError(15,0.03005488);
   hext_stack_2->SetBinError(16,0.2001804);
   hext_stack_2->SetBinError(17,0.03005488);
   hext_stack_2->SetBinError(18,0.199804);
   hext_stack_2->SetBinError(19,0.02125201);
   hext_stack_2->SetBinError(20,0.01735219);
   hext_stack_2->SetBinError(21,0.2830978);
   hext_stack_2->SetEntries(584);

   ci = 1453;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hdirt_stack_3->SetBinContent(0,0.1048574);
   hdirt_stack_3->SetBinContent(1,1.074911);
   hdirt_stack_3->SetBinContent(2,0.6591768);
   hdirt_stack_3->SetBinContent(3,0.4556518);
   hdirt_stack_3->SetBinContent(4,0.5123969);
   hdirt_stack_3->SetBinContent(5,0.7261528);
   hdirt_stack_3->SetBinContent(6,0.2241988);
   hdirt_stack_3->SetBinContent(7,0.3139777);
   hdirt_stack_3->SetBinContent(8,0.1737253);
   hdirt_stack_3->SetBinContent(9,0.1145514);
   hdirt_stack_3->SetBinContent(10,0.009839491);
   hdirt_stack_3->SetBinContent(12,0.1081191);
   hdirt_stack_3->SetBinContent(14,0.04420907);
   hdirt_stack_3->SetBinContent(15,0.04420907);
   hdirt_stack_3->SetBinError(0,0.06359251);
   hdirt_stack_3->SetBinError(1,0.2740903);
   hdirt_stack_3->SetBinError(2,0.1597161);
   hdirt_stack_3->SetBinError(3,0.1396167);
   hdirt_stack_3->SetBinError(4,0.1435693);
   hdirt_stack_3->SetBinError(5,0.327229);
   hdirt_stack_3->SetBinError(6,0.09679734);
   hdirt_stack_3->SetBinError(7,0.1099886);
   hdirt_stack_3->SetBinError(8,0.07874729);
   hdirt_stack_3->SetBinError(9,0.06431283);
   hdirt_stack_3->SetBinError(10,0.00983949);
   hdirt_stack_3->SetBinError(12,0.06590175);
   hdirt_stack_3->SetBinError(14,0.04420907);
   hdirt_stack_3->SetBinError(15,0.04420907);
   hdirt_stack_3->SetEntries(166);

   ci = 1454;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   houtFV_stack_4->SetBinContent(0,0.4227385);
   houtFV_stack_4->SetBinContent(1,8.983664);
   houtFV_stack_4->SetBinContent(2,5.919036);
   houtFV_stack_4->SetBinContent(3,5.326035);
   houtFV_stack_4->SetBinContent(4,4.523042);
   houtFV_stack_4->SetBinContent(5,2.962759);
   houtFV_stack_4->SetBinContent(6,2.526463);
   houtFV_stack_4->SetBinContent(7,1.898106);
   houtFV_stack_4->SetBinContent(8,1.414454);
   houtFV_stack_4->SetBinContent(9,0.8727722);
   houtFV_stack_4->SetBinContent(10,0.6774347);
   houtFV_stack_4->SetBinContent(11,0.5789632);
   houtFV_stack_4->SetBinContent(12,0.5445625);
   houtFV_stack_4->SetBinContent(13,0.3735324);
   houtFV_stack_4->SetBinContent(14,0.2860757);
   houtFV_stack_4->SetBinContent(15,0.1749134);
   houtFV_stack_4->SetBinContent(16,0.08195658);
   houtFV_stack_4->SetBinContent(17,0.06195629);
   houtFV_stack_4->SetBinContent(18,0.07470649);
   houtFV_stack_4->SetBinContent(20,0.06195629);
   houtFV_stack_4->SetBinContent(21,0.1621632);
   houtFV_stack_4->SetBinError(0,0.1538888);
   houtFV_stack_4->SetBinError(1,0.7044846);
   houtFV_stack_4->SetBinError(2,0.5671586);
   houtFV_stack_4->SetBinError(3,0.5475412);
   houtFV_stack_4->SetBinError(4,0.506393);
   houtFV_stack_4->SetBinError(5,0.3996509);
   houtFV_stack_4->SetBinError(6,0.3699903);
   houtFV_stack_4->SetBinError(7,0.3204635);
   houtFV_stack_4->SetBinError(8,0.2795422);
   houtFV_stack_4->SetBinError(9,0.211336);
   houtFV_stack_4->SetBinError(10,0.1901391);
   houtFV_stack_4->SetBinError(11,0.1804841);
   houtFV_stack_4->SetBinError(12,0.1765049);
   houtFV_stack_4->SetBinError(13,0.1414417);
   houtFV_stack_4->SetBinError(14,0.1258651);
   houtFV_stack_4->SetBinError(15,0.09125478);
   houtFV_stack_4->SetBinError(16,0.08195658);
   houtFV_stack_4->SetBinError(17,0.06195629);
   houtFV_stack_4->SetBinError(18,0.06325464);
   houtFV_stack_4->SetBinError(20,0.06195629);
   houtFV_stack_4->SetBinError(21,0.09035965);
   houtFV_stack_4->SetEntries(971);

   ci = 1455;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hNCpi0inFV_stack_5->SetBinContent(0,2.585637);
   hNCpi0inFV_stack_5->SetBinContent(1,47.77448);
   hNCpi0inFV_stack_5->SetBinContent(2,40.08131);
   hNCpi0inFV_stack_5->SetBinContent(3,35.17778);
   hNCpi0inFV_stack_5->SetBinContent(4,30.64996);
   hNCpi0inFV_stack_5->SetBinContent(5,27.8693);
   hNCpi0inFV_stack_5->SetBinContent(6,24.74258);
   hNCpi0inFV_stack_5->SetBinContent(7,19.59993);
   hNCpi0inFV_stack_5->SetBinContent(8,16.67787);
   hNCpi0inFV_stack_5->SetBinContent(9,11.88929);
   hNCpi0inFV_stack_5->SetBinContent(10,8.941072);
   hNCpi0inFV_stack_5->SetBinContent(11,6.032904);
   hNCpi0inFV_stack_5->SetBinContent(12,5.107336);
   hNCpi0inFV_stack_5->SetBinContent(13,4.593552);
   hNCpi0inFV_stack_5->SetBinContent(14,3.396453);
   hNCpi0inFV_stack_5->SetBinContent(15,2.352357);
   hNCpi0inFV_stack_5->SetBinContent(16,1.916868);
   hNCpi0inFV_stack_5->SetBinContent(17,0.9257213);
   hNCpi0inFV_stack_5->SetBinContent(18,0.9347284);
   hNCpi0inFV_stack_5->SetBinContent(19,0.4482389);
   hNCpi0inFV_stack_5->SetBinContent(20,0.2769149);
   hNCpi0inFV_stack_5->SetBinContent(21,2.04437);
   hNCpi0inFV_stack_5->SetBinError(0,0.3817939);
   hNCpi0inFV_stack_5->SetBinError(1,1.601043);
   hNCpi0inFV_stack_5->SetBinError(2,1.479118);
   hNCpi0inFV_stack_5->SetBinError(3,1.378285);
   hNCpi0inFV_stack_5->SetBinError(4,1.292755);
   hNCpi0inFV_stack_5->SetBinError(5,1.227893);
   hNCpi0inFV_stack_5->SetBinError(6,1.158818);
   hNCpi0inFV_stack_5->SetBinError(7,1.024675);
   hNCpi0inFV_stack_5->SetBinError(8,0.951149);
   hNCpi0inFV_stack_5->SetBinError(9,0.7996068);
   hNCpi0inFV_stack_5->SetBinError(10,0.6904977);
   hNCpi0inFV_stack_5->SetBinError(11,0.5582696);
   hNCpi0inFV_stack_5->SetBinError(12,0.519016);
   hNCpi0inFV_stack_5->SetBinError(13,0.4975777);
   hNCpi0inFV_stack_5->SetBinError(14,0.4319617);
   hNCpi0inFV_stack_5->SetBinError(15,0.3571401);
   hNCpi0inFV_stack_5->SetBinError(16,0.3220322);
   hNCpi0inFV_stack_5->SetBinError(17,0.2201099);
   hNCpi0inFV_stack_5->SetBinError(18,0.2202306);
   hNCpi0inFV_stack_5->SetBinError(19,0.1549416);
   hNCpi0inFV_stack_5->SetBinError(20,0.09812224);
   hNCpi0inFV_stack_5->SetBinError(21,0.3245465);
   hNCpi0inFV_stack_5->SetEntries(7714);

   ci = 1456;
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
   hs3->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hCCpi0inFV_stack_6->SetBinContent(0,0.4719446);
   hCCpi0inFV_stack_6->SetBinContent(1,5.208323);
   hCCpi0inFV_stack_6->SetBinContent(2,5.051358);
   hCCpi0inFV_stack_6->SetBinContent(3,3.851871);
   hCCpi0inFV_stack_6->SetBinContent(4,5.754712);
   hCCpi0inFV_stack_6->SetBinContent(5,5.830696);
   hCCpi0inFV_stack_6->SetBinContent(6,7.408167);
   hCCpi0inFV_stack_6->SetBinContent(7,6.589669);
   hCCpi0inFV_stack_6->SetBinContent(8,5.675551);
   hCCpi0inFV_stack_6->SetBinContent(9,5.48603);
   hCCpi0inFV_stack_6->SetBinContent(10,5.103188);
   hCCpi0inFV_stack_6->SetBinContent(11,3.642746);
   hCCpi0inFV_stack_6->SetBinContent(12,2.581937);
   hCCpi0inFV_stack_6->SetBinContent(13,2.131054);
   hCCpi0inFV_stack_6->SetBinContent(14,2.548317);
   hCCpi0inFV_stack_6->SetBinContent(15,1.980631);
   hCCpi0inFV_stack_6->SetBinContent(16,1.21026);
   hCCpi0inFV_stack_6->SetBinContent(17,0.9371467);
   hCCpi0inFV_stack_6->SetBinContent(18,1.257993);
   hCCpi0inFV_stack_6->SetBinContent(19,0.9347284);
   hCCpi0inFV_stack_6->SetBinContent(20,0.7999409);
   hCCpi0inFV_stack_6->SetBinContent(21,2.505231);
   hCCpi0inFV_stack_6->SetBinError(0,0.1654019);
   hCCpi0inFV_stack_6->SetBinError(1,0.546021);
   hCCpi0inFV_stack_6->SetBinError(2,0.5282822);
   hCCpi0inFV_stack_6->SetBinError(3,0.4455276);
   hCCpi0inFV_stack_6->SetBinError(4,0.5551151);
   hCCpi0inFV_stack_6->SetBinError(5,0.5532072);
   hCCpi0inFV_stack_6->SetBinError(6,0.6379654);
   hCCpi0inFV_stack_6->SetBinError(7,0.6100487);
   hCCpi0inFV_stack_6->SetBinError(8,0.5614618);
   hCCpi0inFV_stack_6->SetBinError(9,0.5482849);
   hCCpi0inFV_stack_6->SetBinError(10,0.5231033);
   hCCpi0inFV_stack_6->SetBinError(11,0.4373537);
   hCCpi0inFV_stack_6->SetBinError(12,0.3723814);
   hCCpi0inFV_stack_6->SetBinError(13,0.3400373);
   hCCpi0inFV_stack_6->SetBinError(14,0.379084);
   hCCpi0inFV_stack_6->SetBinError(15,0.3276447);
   hCCpi0inFV_stack_6->SetBinError(16,0.2594701);
   hCCpi0inFV_stack_6->SetBinError(17,0.2239634);
   hCCpi0inFV_stack_6->SetBinError(18,0.2692286);
   hCCpi0inFV_stack_6->SetBinError(19,0.2202306);
   hCCpi0inFV_stack_6->SetBinError(20,0.2092715);
   hCCpi0inFV_stack_6->SetBinError(21,0.3683091);
   hCCpi0inFV_stack_6->SetEntries(1977);

   ci = 1457;
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
   hs3->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hNCinFV_stack_7->SetBinContent(0,0.3735324);
   hNCinFV_stack_7->SetBinContent(1,3.412793);
   hNCinFV_stack_7->SetBinContent(2,2.130032);
   hNCinFV_stack_7->SetBinContent(3,2.2649);
   hNCinFV_stack_7->SetBinContent(4,1.632587);
   hNCinFV_stack_7->SetBinContent(5,1.791161);
   hNCinFV_stack_7->SetBinContent(6,2.574682);
   hNCinFV_stack_7->SetBinContent(7,2.042576);
   hNCinFV_stack_7->SetBinContent(8,2.064487);
   hNCinFV_stack_7->SetBinContent(9,1.370217);
   hNCinFV_stack_7->SetBinContent(10,0.8982725);
   hNCinFV_stack_7->SetBinContent(11,1.169803);
   hNCinFV_stack_7->SetBinContent(12,1.033141);
   hNCinFV_stack_7->SetBinContent(13,0.5101952);
   hNCinFV_stack_7->SetBinContent(14,0.2751203);
   hNCinFV_stack_7->SetBinContent(15,0.07470649);
   hNCinFV_stack_7->SetBinContent(16,0.3607822);
   hNCinFV_stack_7->SetBinContent(17,0.1986191);
   hNCinFV_stack_7->SetBinContent(18,0.1749134);
   hNCinFV_stack_7->SetBinContent(19,0.2496199);
   hNCinFV_stack_7->SetBinContent(20,0.07470649);
   hNCinFV_stack_7->SetBinContent(21,0.2386643);
   hNCinFV_stack_7->SetBinError(0,0.1414417);
   hNCinFV_stack_7->SetBinError(1,0.4250906);
   hNCinFV_stack_7->SetBinError(2,0.3354398);
   hNCinFV_stack_7->SetBinError(3,0.3512625);
   hNCinFV_stack_7->SetBinError(4,0.2912679);
   hNCinFV_stack_7->SetBinError(5,0.3147274);
   hNCinFV_stack_7->SetBinError(6,0.3775954);
   hNCinFV_stack_7->SetBinError(7,0.329175);
   hNCinFV_stack_7->SetBinError(8,0.3387223);
   hNCinFV_stack_7->SetBinError(9,0.2689718);
   hNCinFV_stack_7->SetBinError(10,0.2121039);
   hNCinFV_stack_7->SetBinError(11,0.2523752);
   hNCinFV_stack_7->SetBinError(12,0.2363335);
   hNCinFV_stack_7->SetBinError(13,0.1668696);
   hNCinFV_stack_7->SetBinError(14,0.1124887);
   hNCinFV_stack_7->SetBinError(15,0.06325464);
   hNCinFV_stack_7->SetBinError(16,0.1408658);
   hNCinFV_stack_7->SetBinError(17,0.1080662);
   hNCinFV_stack_7->SetBinError(18,0.09125478);
   hNCinFV_stack_7->SetBinError(19,0.1110342);
   hNCinFV_stack_7->SetBinError(20,0.06325464);
   hNCinFV_stack_7->SetBinError(21,0.09560477);
   hNCinFV_stack_7->SetEntries(669);

   ci = 1458;
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
   hs3->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hnumuCCinFV_stack_8->SetBinContent(0,1.118816);
   hnumuCCinFV_stack_8->SetBinContent(1,2.55705);
   hnumuCCinFV_stack_8->SetBinContent(2,1.963661);
   hnumuCCinFV_stack_8->SetBinContent(3,2.413089);
   hnumuCCinFV_stack_8->SetBinContent(4,2.797599);
   hnumuCCinFV_stack_8->SetBinContent(5,3.173591);
   hnumuCCinFV_stack_8->SetBinContent(6,2.511307);
   hnumuCCinFV_stack_8->SetBinContent(7,2.356623);
   hnumuCCinFV_stack_8->SetBinContent(8,2.384375);
   hnumuCCinFV_stack_8->SetBinContent(9,2.649883);
   hnumuCCinFV_stack_8->SetBinContent(10,2.087751);
   hnumuCCinFV_stack_8->SetBinContent(11,1.294341);
   hnumuCCinFV_stack_8->SetBinContent(12,0.8316688);
   hnumuCCinFV_stack_8->SetBinContent(13,1.15001);
   hnumuCCinFV_stack_8->SetBinContent(14,0.8573695);
   hnumuCCinFV_stack_8->SetBinContent(15,0.428093);
   hnumuCCinFV_stack_8->SetBinContent(16,0.2497548);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2241195);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3004016);
   hnumuCCinFV_stack_8->SetBinContent(19,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(20,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(21,0.5958111);
   hnumuCCinFV_stack_8->SetBinError(0,0.3611348);
   hnumuCCinFV_stack_8->SetBinError(1,0.6107393);
   hnumuCCinFV_stack_8->SetBinError(2,0.3563508);
   hnumuCCinFV_stack_8->SetBinError(3,0.3958303);
   hnumuCCinFV_stack_8->SetBinError(4,0.5707359);
   hnumuCCinFV_stack_8->SetBinError(5,0.5753147);
   hnumuCCinFV_stack_8->SetBinError(6,0.365615);
   hnumuCCinFV_stack_8->SetBinError(7,0.5480866);
   hnumuCCinFV_stack_8->SetBinError(8,0.3757043);
   hnumuCCinFV_stack_8->SetBinError(9,0.4789624);
   hnumuCCinFV_stack_8->SetBinError(10,0.4421317);
   hnumuCCinFV_stack_8->SetBinError(11,0.304559);
   hnumuCCinFV_stack_8->SetBinError(12,0.2072389);
   hnumuCCinFV_stack_8->SetBinError(13,0.2901565);
   hnumuCCinFV_stack_8->SetBinError(14,0.2903652);
   hnumuCCinFV_stack_8->SetBinError(15,0.1543784);
   hnumuCCinFV_stack_8->SetBinError(16,0.0999529);
   hnumuCCinFV_stack_8->SetBinError(17,0.1095603);
   hnumuCCinFV_stack_8->SetBinError(18,0.1392906);
   hnumuCCinFV_stack_8->SetBinError(19,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(20,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(21,0.1816322);
   hnumuCCinFV_stack_8->SetEntries(755);

   ci = 1459;
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
   hs3->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hnueCCinFV_stack_9->SetBinContent(0,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(1,0.3692207);
   hnueCCinFV_stack_9->SetBinContent(2,0.4171106);
   hnueCCinFV_stack_9->SetBinContent(3,0.1634087);
   hnueCCinFV_stack_9->SetBinContent(4,0.2204006);
   hnueCCinFV_stack_9->SetBinContent(5,0.206712);
   hnueCCinFV_stack_9->SetBinContent(6,0.4824455);
   hnueCCinFV_stack_9->SetBinContent(7,0.1986191);
   hnueCCinFV_stack_9->SetBinContent(8,0.1858689);
   hnueCCinFV_stack_9->SetBinContent(9,0.1515147);
   hnueCCinFV_stack_9->SetBinContent(10,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(11,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(12,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(13,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(15,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(17,0.07728831);
   hnueCCinFV_stack_9->SetBinContent(21,0.2113693);
   hnueCCinFV_stack_9->SetBinError(0,0.0127502);
   hnueCCinFV_stack_9->SetBinError(1,0.1297959);
   hnueCCinFV_stack_9->SetBinError(2,0.1716227);
   hnueCCinFV_stack_9->SetBinError(3,0.07509586);
   hnueCCinFV_stack_9->SetBinError(4,0.1138569);
   hnueCCinFV_stack_9->SetBinError(5,0.1205523);
   hnueCCinFV_stack_9->SetBinError(6,0.4698546);
   hnueCCinFV_stack_9->SetBinError(7,0.1080662);
   hnueCCinFV_stack_9->SetBinError(8,0.1073114);
   hnueCCinFV_stack_9->SetBinError(9,0.07213183);
   hnueCCinFV_stack_9->SetBinError(10,0.06325464);
   hnueCCinFV_stack_9->SetBinError(11,0.06452687);
   hnueCCinFV_stack_9->SetBinError(12,0.0127502);
   hnueCCinFV_stack_9->SetBinError(13,0.08761943);
   hnueCCinFV_stack_9->SetBinError(15,0.06325464);
   hnueCCinFV_stack_9->SetBinError(17,0.06382517);
   hnueCCinFV_stack_9->SetBinError(21,0.1088158);
   hnueCCinFV_stack_9->SetEntries(72);

   ci = 1460;
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
   hs3->Add(hnueCCinFV_stack_9,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);
   hmcerror__8->SetBinContent(0,6.762001);
   hmcerror__8->SetBinContent(1,75.31444);
   hmcerror__8->SetBinContent(2,60.96513);
   hmcerror__8->SetBinContent(3,54.07304);
   hmcerror__8->SetBinContent(4,49.85469);
   hmcerror__8->SetBinContent(5,45.23482);
   hmcerror__8->SetBinContent(6,43.59573);
   hmcerror__8->SetBinContent(7,35.80752);
   hmcerror__8->SetBinContent(8,30.65056);
   hmcerror__8->SetBinContent(9,25.25688);
   hmcerror__8->SetBinContent(10,19.34118);
   hmcerror__8->SetBinContent(11,13.15495);
   hmcerror__8->SetBinContent(12,10.58012);
   hmcerror__8->SetBinContent(13,10.05042);
   hmcerror__8->SetBinContent(14,8.253407);
   hmcerror__8->SetBinContent(15,5.393044);
   hmcerror__8->SetBinContent(16,4.165554);
   hmcerror__8->SetBinContent(17,2.600311);
   hmcerror__8->SetBinContent(18,3.104234);
   hmcerror__8->SetBinContent(19,1.80606);
   hmcerror__8->SetBinContent(20,1.250808);
   hmcerror__8->SetBinContent(21,6.440695);
   hmcerror__8->SetBinError(0,0.7760988);
   hmcerror__8->SetBinError(1,18.92285);
   hmcerror__8->SetBinError(2,14.15255);
   hmcerror__8->SetBinError(3,12.88934);
   hmcerror__8->SetBinError(4,12.51413);
   hmcerror__8->SetBinError(5,11.27908);
   hmcerror__8->SetBinError(6,11.24347);
   hmcerror__8->SetBinError(7,10.60806);
   hmcerror__8->SetBinError(8,8.344731);
   hmcerror__8->SetBinError(9,7.869425);
   hmcerror__8->SetBinError(10,5.373323);
   hmcerror__8->SetBinError(11,4.259128);
   hmcerror__8->SetBinError(12,4.143806);
   hmcerror__8->SetBinError(13,4.047646);
   hmcerror__8->SetBinError(14,3.673268);
   hmcerror__8->SetBinError(15,3.095183);
   hmcerror__8->SetBinError(16,2.108374);
   hmcerror__8->SetBinError(17,1.65773);
   hmcerror__8->SetBinError(18,2.182106);
   hmcerror__8->SetBinError(19,1.391455);
   hmcerror__8->SetBinError(20,0.9975338);
   hmcerror__8->SetBinError(21,3.065612);
   hmcerror__8->SetEntries(507.336);

   ci = TColor::GetColor("#666666");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t _fy3009[20] = {
   56,
   52,
   44,
   32,
   31,
   29,
   39,
   21,
   14,
   15,
   15,
   8,
   4,
   2,
   4,
   3,
   1,
   0,
   1,
   1};
   Double_t _felx3009[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3009[20] = {
   7.6127,
   7.3419,
   6.7671,
   5.7977,
   5.7094,
   5.5285,
   6.3813,
   4.7354,
   3.9102,
   4.0385,
   4.0385,
   3.0307,
   2.29683,
   2,
   2.29683,
   2.143368,
   1,
   0,
   1,
   1};
   Double_t _fehx3009[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3009[20] = {
   7.4094,
   7.1381,
   6.5623,
   5.5904,
   5.5017,
   5.3201,
   6.1757,
   4.5229,
   3.6898,
   3.8197,
   3.8197,
   2.7896,
   1.98186,
   1.51917,
   1.98186,
   1.72422,
   1.35971,
   1.1478,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1100);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(69.75034);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.74#pm0.04(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.78/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 372.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.3","F");

   ci = 1452;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.5","F");

   ci = 1453;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1454;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 37.3","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  289.4","F");

   ci = 1456;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 74.0","F");

   ci = 1457;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 24.3","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 30.3","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.8","F");

   ci = 1460;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT2_FC_bnb_10_pi0_total_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3010[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3010[20] = {
   0.2512512,
   0.2321417,
   0.238369,
   0.251012,
   0.249345,
   0.2579031,
   0.2962524,
   0.2722538,
   0.3115755,
   0.2778178,
   0.3237661,
   0.3916596,
   0.4027341,
   0.4450608,
   0.5739214,
   0.5061449,
   0.6375121,
   0.702945,
   0.7704372,
   0.7975112};
   Double_t _fehx3010[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3010[20] = {
   0.2512512,
   0.2321417,
   0.238369,
   0.251012,
   0.249345,
   0.2579031,
   0.2962524,
   0.2722538,
   0.3115755,
   0.2778178,
   0.3237661,
   0.3916596,
   0.4027341,
   0.4450608,
   0.5739214,
   0.5061449,
   0.6375121,
   0.702945,
   0.7704372,
   0.7975112};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1100);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Non-#pi^{0} Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3011[20] = {
   0.2012119,
   0.2061336,
   0.2047122,
   0.2105796,
   0.2128074,
   0.2078769,
   0.2156214,
   0.2086306,
   0.2027543,
   0.2126652,
   0.2369798,
   0.2243123,
   0.2240038,
   0.2066683,
   0.2736167,
   0.2314137,
   0.2733626,
   0.2675943,
   0.3230808,
   0.3727521};
   Double_t _fehx3011[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3011[20] = {
   0.2012119,
   0.2061336,
   0.2047122,
   0.2105796,
   0.2128074,
   0.2078769,
   0.2156214,
   0.2086306,
   0.2027543,
   0.2126652,
   0.2369798,
   0.2243123,
   0.2240038,
   0.2066683,
   0.2736167,
   0.2314137,
   0.2733626,
   0.2675943,
   0.3230808,
   0.3727521};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1100);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975};
   Double_t _fy3012[20] = {
   0.7435493,
   0.8529465,
   0.8137142,
   0.6418654,
   0.6853128,
   0.6652028,
   1.089157,
   0.6851425,
   0.5543045,
   0.7755473,
   1.140255,
   0.7561351,
   0.3979934,
   0.2423242,
   0.7416962,
   0.7201923,
   0.3845694,
   0,
   0.5536916,
   0.7994829};
   Double_t _felx3012[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3012[20] = {
   0.1010789,
   0.1204279,
   0.1251474,
   0.116292,
   0.1262169,
   0.1268129,
   0.1782112,
   0.1544964,
   0.1548172,
   0.2088032,
   0.3069946,
   0.2864523,
   0.2285308,
   0.2423242,
   0.4258875,
   0.5145457,
   0.3845694,
   0,
   0.5536916,
   0.7994829};
   Double_t _fehx3012[20] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3012[20] = {
   0.09837954,
   0.117085,
   0.1213599,
   0.1121339,
   0.1216253,
   0.1220326,
   0.1724694,
   0.1475634,
   0.1460909,
   0.1974905,
   0.2903621,
   0.2636643,
   0.1971918,
   0.1840658,
   0.3674845,
   0.4139233,
   0.5229029,
   0.3697531,
   0.75286,
   1.087065};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1100);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(2.075203);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT2_FC_bnb_10_pi0_total_energy_all",20,0,1000);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,1000,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
