#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Tue Feb 21 20:01:39 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-1.307692,-4.874081,1.25641,538.9708);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__7->SetBinContent(1,25.56472);
   hmc__7->SetBinContent(2,22.17287);
   hmc__7->SetBinContent(3,18.62777);
   hmc__7->SetBinContent(4,17.64171);
   hmc__7->SetBinContent(5,19.83464);
   hmc__7->SetBinContent(6,19.44781);
   hmc__7->SetBinContent(7,16.08978);
   hmc__7->SetBinContent(8,13.17588);
   hmc__7->SetBinContent(9,21.56059);
   hmc__7->SetBinContent(10,26.81404);
   hmc__7->SetBinContent(11,30.7977);
   hmc__7->SetBinContent(12,26.29531);
   hmc__7->SetBinContent(13,30.85247);
   hmc__7->SetBinContent(14,30.69544);
   hmc__7->SetBinContent(15,40.09124);
   hmc__7->SetBinContent(16,47.58709);
   hmc__7->SetBinContent(17,73.59926);
   hmc__7->SetBinContent(18,99.32561);
   hmc__7->SetBinContent(19,140.1198);
   hmc__7->SetBinContent(20,243.7041);
   hmc__7->SetBinError(1,15.1779);
   hmc__7->SetBinError(2,12.75864);
   hmc__7->SetBinError(3,13.73403);
   hmc__7->SetBinError(4,12.11507);
   hmc__7->SetBinError(5,13.07607);
   hmc__7->SetBinError(6,14.41244);
   hmc__7->SetBinError(7,8.893483);
   hmc__7->SetBinError(8,6.48549);
   hmc__7->SetBinError(9,11.38794);
   hmc__7->SetBinError(10,13.07129);
   hmc__7->SetBinError(11,12.62124);
   hmc__7->SetBinError(12,18.60662);
   hmc__7->SetBinError(13,14.07525);
   hmc__7->SetBinError(14,12.29381);
   hmc__7->SetBinError(15,16.03808);
   hmc__7->SetBinError(16,17.25672);
   hmc__7->SetBinError(17,31.64834);
   hmc__7->SetBinError(18,28.57188);
   hmc__7->SetBinError(19,38.4624);
   hmc__7->SetBinError(20,55.15427);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-4.874081);
   hmc__7->SetMaximum(511.7785);
   hmc__7->SetEntries(948.2139);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,-1,1);
   hs3_stack_3->SetMinimum(-8.530416e-09);
   hs3_stack_3->SetMaximum(255.8893);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.338681);
   hbadmatch_stack_1->SetBinContent(2,0.2441665);
   hbadmatch_stack_1->SetBinContent(3,1.412273);
   hbadmatch_stack_1->SetBinContent(4,1.007562);
   hbadmatch_stack_1->SetBinContent(5,0.7336084);
   hbadmatch_stack_1->SetBinContent(6,0.5368956);
   hbadmatch_stack_1->SetBinContent(8,0.2221688);
   hbadmatch_stack_1->SetBinContent(9,2.020761);
   hbadmatch_stack_1->SetBinContent(10,0.6673137);
   hbadmatch_stack_1->SetBinContent(11,1.602836);
   hbadmatch_stack_1->SetBinContent(12,2.402603);
   hbadmatch_stack_1->SetBinContent(13,1.268811);
   hbadmatch_stack_1->SetBinContent(14,0.7681663);
   hbadmatch_stack_1->SetBinContent(15,1.1471);
   hbadmatch_stack_1->SetBinContent(16,1.61551);
   hbadmatch_stack_1->SetBinContent(17,2.147572);
   hbadmatch_stack_1->SetBinContent(18,3.255466);
   hbadmatch_stack_1->SetBinContent(19,3.659589);
   hbadmatch_stack_1->SetBinContent(20,6.739407);
   hbadmatch_stack_1->SetBinError(1,0.6137438);
   hbadmatch_stack_1->SetBinError(2,0.2441665);
   hbadmatch_stack_1->SetBinError(3,0.6510715);
   hbadmatch_stack_1->SetBinError(4,0.4511058);
   hbadmatch_stack_1->SetBinError(5,0.4394482);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.2221688);
   hbadmatch_stack_1->SetBinError(9,0.8059932);
   hbadmatch_stack_1->SetBinError(10,0.4825926);
   hbadmatch_stack_1->SetBinError(11,0.7221551);
   hbadmatch_stack_1->SetBinError(12,1.001128);
   hbadmatch_stack_1->SetBinError(13,0.5889569);
   hbadmatch_stack_1->SetBinError(14,0.4561005);
   hbadmatch_stack_1->SetBinError(15,0.5962873);
   hbadmatch_stack_1->SetBinError(16,0.5731963);
   hbadmatch_stack_1->SetBinError(17,0.7859205);
   hbadmatch_stack_1->SetBinError(18,0.9092151);
   hbadmatch_stack_1->SetBinError(19,0.9809496);
   hbadmatch_stack_1->SetBinError(20,1.65249);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,4.143782);
   hext_stack_2->SetBinContent(2,4.670063);
   hext_stack_2->SetBinContent(3,4.435048);
   hext_stack_2->SetBinContent(4,4.856008);
   hext_stack_2->SetBinContent(5,6.381432);
   hext_stack_2->SetBinContent(6,6.933664);
   hext_stack_2->SetBinContent(7,4.53161);
   hext_stack_2->SetBinContent(8,4.919439);
   hext_stack_2->SetBinContent(9,6.075805);
   hext_stack_2->SetBinContent(10,10.51362);
   hext_stack_2->SetBinContent(11,12.19627);
   hext_stack_2->SetBinContent(12,7.276832);
   hext_stack_2->SetBinContent(13,7.704972);
   hext_stack_2->SetBinContent(14,8.407247);
   hext_stack_2->SetBinContent(15,5.523572);
   hext_stack_2->SetBinContent(16,10.53239);
   hext_stack_2->SetBinContent(17,15.22123);
   hext_stack_2->SetBinContent(18,18.71621);
   hext_stack_2->SetBinContent(19,21.21483);
   hext_stack_2->SetBinContent(20,34.86591);
   hext_stack_2->SetBinError(1,1.256262);
   hext_stack_2->SetBinError(2,1.612283);
   hext_stack_2->SetBinError(3,1.533985);
   hext_stack_2->SetBinError(4,1.454658);
   hext_stack_2->SetBinError(5,1.727574);
   hext_stack_2->SetBinError(6,1.880769);
   hext_stack_2->SetBinError(7,1.418025);
   hext_stack_2->SetBinError(8,1.563138);
   hext_stack_2->SetBinError(9,1.616168);
   hext_stack_2->SetBinError(10,2.151461);
   hext_stack_2->SetBinError(11,2.412187);
   hext_stack_2->SetBinError(12,1.837184);
   hext_stack_2->SetBinError(13,1.713757);
   hext_stack_2->SetBinError(14,2.003079);
   hext_stack_2->SetBinError(15,1.434997);
   hext_stack_2->SetBinError(16,2.088421);
   hext_stack_2->SetBinError(17,2.587215);
   hext_stack_2->SetBinError(18,2.839261);
   hext_stack_2->SetBinError(19,3.040656);
   hext_stack_2->SetBinError(20,3.975745);
   hext_stack_2->SetEntries(479);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.5758626);
   hdirt_stack_3->SetBinContent(3,0.6084618);
   hdirt_stack_3->SetBinContent(4,2.09953);
   hdirt_stack_3->SetBinContent(5,0.165479);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.804172);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.260563);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinContent(12,0.5930034);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.2964016);
   hdirt_stack_3->SetBinContent(15,0.30685);
   hdirt_stack_3->SetBinContent(16,1.4492);
   hdirt_stack_3->SetBinContent(17,1.782619);
   hdirt_stack_3->SetBinContent(18,2.488418);
   hdirt_stack_3->SetBinContent(19,2.200987);
   hdirt_stack_3->SetBinContent(20,3.086466);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3389606);
   hdirt_stack_3->SetBinError(3,0.4468525);
   hdirt_stack_3->SetBinError(4,1.084521);
   hdirt_stack_3->SetBinError(5,0.165479);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(8,0.4725875);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.260563);
   hdirt_stack_3->SetBinError(11,0.4028472);
   hdirt_stack_3->SetBinError(12,0.4234405);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetBinError(14,0.2100765);
   hdirt_stack_3->SetBinError(15,0.2130001);
   hdirt_stack_3->SetBinError(16,0.5865551);
   hdirt_stack_3->SetBinError(17,0.7187535);
   hdirt_stack_3->SetBinError(18,0.8263954);
   hdirt_stack_3->SetBinError(19,0.7909911);
   hdirt_stack_3->SetBinError(20,0.969718);
   hdirt_stack_3->SetEntries(82);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,7.815798);
   houtFV_stack_4->SetBinContent(2,7.472576);
   houtFV_stack_4->SetBinContent(3,5.08985);
   houtFV_stack_4->SetBinContent(4,4.467819);
   houtFV_stack_4->SetBinContent(5,5.623362);
   houtFV_stack_4->SetBinContent(6,6.440293);
   houtFV_stack_4->SetBinContent(7,4.781557);
   houtFV_stack_4->SetBinContent(8,3.267672);
   houtFV_stack_4->SetBinContent(9,4.37249);
   houtFV_stack_4->SetBinContent(10,4.394888);
   houtFV_stack_4->SetBinContent(11,6.300024);
   houtFV_stack_4->SetBinContent(12,6.575904);
   houtFV_stack_4->SetBinContent(13,5.413731);
   houtFV_stack_4->SetBinContent(14,7.425685);
   houtFV_stack_4->SetBinContent(15,10.85859);
   houtFV_stack_4->SetBinContent(16,8.628251);
   houtFV_stack_4->SetBinContent(17,16.64032);
   houtFV_stack_4->SetBinContent(18,22.1234);
   houtFV_stack_4->SetBinContent(19,28.76006);
   houtFV_stack_4->SetBinContent(20,37.25986);
   houtFV_stack_4->SetBinError(1,1.408566);
   houtFV_stack_4->SetBinError(2,1.366718);
   houtFV_stack_4->SetBinError(3,1.093075);
   houtFV_stack_4->SetBinError(4,0.962825);
   houtFV_stack_4->SetBinError(5,1.160994);
   houtFV_stack_4->SetBinError(6,1.740979);
   houtFV_stack_4->SetBinError(7,1.109407);
   houtFV_stack_4->SetBinError(8,0.8998104);
   houtFV_stack_4->SetBinError(9,1.073334);
   houtFV_stack_4->SetBinError(10,1.075193);
   houtFV_stack_4->SetBinError(11,1.200213);
   houtFV_stack_4->SetBinError(12,1.337074);
   houtFV_stack_4->SetBinError(13,1.225781);
   houtFV_stack_4->SetBinError(14,1.359364);
   houtFV_stack_4->SetBinError(15,1.667951);
   houtFV_stack_4->SetBinError(16,1.497427);
   houtFV_stack_4->SetBinError(17,2.074447);
   houtFV_stack_4->SetBinError(18,2.54042);
   houtFV_stack_4->SetBinError(19,2.696124);
   houtFV_stack_4->SetBinError(20,3.093529);
   houtFV_stack_4->SetEntries(862);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.175048);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,9.968309);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5147705);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.024741);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4180041);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2406819);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06834073);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.662798);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.371844);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.074154);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.714694);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.034548);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.19854);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.770494);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.617376);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.620784);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.746834);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.805706);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.346184);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.738863);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.991628);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.915071);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.722516);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.22382);
   hNCpi0inFVres_stack_7->SetBinContent(18,16.11613);
   hNCpi0inFVres_stack_7->SetBinContent(19,21.16322);
   hNCpi0inFVres_stack_7->SetBinContent(20,34.0074);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5025915);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5255578);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3197389);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4241235);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4572434);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3053129);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4259548);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4128074);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5393848);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5660842);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6140165);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5578302);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6852618);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7177199);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8214792);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8963247);
   hNCpi0inFVres_stack_7->SetBinError(17,1.108896);
   hNCpi0inFVres_stack_7->SetBinError(18,1.277204);
   hNCpi0inFVres_stack_7->SetBinError(19,1.443056);
   hNCpi0inFVres_stack_7->SetBinError(20,1.86923);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.557504);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6124718);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3205179);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.446568);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9059218);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5860679);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.323926);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.673176);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.95492);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.11211);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.357736);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.83828);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2486359);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2100249);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1252919);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2126346);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2798147);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2215976);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3690854);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4146887);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5601514);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6571381);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8035964);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.110533);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,5.312045);
   hCCpi0inFV_stack_10->SetBinContent(2,3.217191);
   hCCpi0inFV_stack_10->SetBinContent(3,3.581732);
   hCCpi0inFV_stack_10->SetBinContent(4,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(5,1.660101);
   hCCpi0inFV_stack_10->SetBinContent(6,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(7,2.85385);
   hCCpi0inFV_stack_10->SetBinContent(8,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(9,3.544625);
   hCCpi0inFV_stack_10->SetBinContent(10,5.223034);
   hCCpi0inFV_stack_10->SetBinContent(11,3.427608);
   hCCpi0inFV_stack_10->SetBinContent(12,4.540041);
   hCCpi0inFV_stack_10->SetBinContent(13,5.565037);
   hCCpi0inFV_stack_10->SetBinContent(14,3.814277);
   hCCpi0inFV_stack_10->SetBinContent(15,8.00881);
   hCCpi0inFV_stack_10->SetBinContent(16,8.38533);
   hCCpi0inFV_stack_10->SetBinContent(17,11.92331);
   hCCpi0inFV_stack_10->SetBinContent(18,19.9426);
   hCCpi0inFV_stack_10->SetBinContent(19,32.64518);
   hCCpi0inFV_stack_10->SetBinContent(20,59.38216);
   hCCpi0inFV_stack_10->SetBinError(1,1.115392);
   hCCpi0inFV_stack_10->SetBinError(2,0.8871545);
   hCCpi0inFV_stack_10->SetBinError(3,0.9654396);
   hCCpi0inFV_stack_10->SetBinError(4,0.588146);
   hCCpi0inFV_stack_10->SetBinError(5,0.6966439);
   hCCpi0inFV_stack_10->SetBinError(6,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(7,0.8499261);
   hCCpi0inFV_stack_10->SetBinError(8,0.340721);
   hCCpi0inFV_stack_10->SetBinError(9,0.9471884);
   hCCpi0inFV_stack_10->SetBinError(10,1.152664);
   hCCpi0inFV_stack_10->SetBinError(11,0.8778096);
   hCCpi0inFV_stack_10->SetBinError(12,1.110732);
   hCCpi0inFV_stack_10->SetBinError(13,1.17654);
   hCCpi0inFV_stack_10->SetBinError(14,0.9193991);
   hCCpi0inFV_stack_10->SetBinError(15,1.517751);
   hCCpi0inFV_stack_10->SetBinError(16,1.398125);
   hCCpi0inFV_stack_10->SetBinError(17,1.669846);
   hCCpi0inFV_stack_10->SetBinError(18,2.273442);
   hCCpi0inFV_stack_10->SetBinError(19,2.918658);
   hCCpi0inFV_stack_10->SetBinError(20,3.923083);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1469;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_10->SetLineColor(ci);
   hCCpi0inFV_stack_10->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_10->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_10->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_10->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.9801958);
   hNCinFV_stack_11->SetBinContent(3,0.7336084);
   hNCinFV_stack_11->SetBinContent(4,0.5352025);
   hNCinFV_stack_11->SetBinContent(5,0.1950248);
   hNCinFV_stack_11->SetBinContent(7,0.7319179);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(9,0.3917402);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.7834804);
   hNCinFV_stack_11->SetBinContent(12,0.3917402);
   hNCinFV_stack_11->SetBinContent(13,1.127039);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(15,1.270501);
   hNCinFV_stack_11->SetBinContent(16,0.9286332);
   hNCinFV_stack_11->SetBinContent(17,2.534241);
   hNCinFV_stack_11->SetBinContent(18,3.27123);
   hNCinFV_stack_11->SetBinContent(19,6.296955);
   hNCinFV_stack_11->SetBinContent(20,14.98868);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.4383608);
   hNCinFV_stack_11->SetBinError(3,0.4394482);
   hNCinFV_stack_11->SetBinError(4,0.3921167);
   hNCinFV_stack_11->SetBinError(5,0.1950249);
   hNCinFV_stack_11->SetBinError(7,0.438694);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(9,0.2770047);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.3917439);
   hNCinFV_stack_11->SetBinError(12,0.2770047);
   hNCinFV_stack_11->SetBinError(13,0.5201044);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(15,0.5895188);
   hNCinFV_stack_11->SetBinError(16,0.48078);
   hNCinFV_stack_11->SetBinError(17,0.8321153);
   hNCinFV_stack_11->SetBinError(18,0.9417298);
   hNCinFV_stack_11->SetBinError(19,1.255667);
   hNCinFV_stack_11->SetBinError(20,1.99217);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1470;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_11->SetLineColor(ci);
   hNCinFV_stack_11->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_11->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_11->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_11->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.325443);
   hnumuCCinFV_stack_12->SetBinContent(2,1.465417);
   hnumuCCinFV_stack_12->SetBinContent(3,1.525245);
   hnumuCCinFV_stack_12->SetBinContent(4,0.8330207);
   hnumuCCinFV_stack_12->SetBinContent(5,2.054985);
   hnumuCCinFV_stack_12->SetBinContent(6,2.233175);
   hnumuCCinFV_stack_12->SetBinContent(7,0.9322594);
   hnumuCCinFV_stack_12->SetBinContent(8,1.010345);
   hnumuCCinFV_stack_12->SetBinContent(9,1.748172);
   hnumuCCinFV_stack_12->SetBinContent(10,2.5319);
   hnumuCCinFV_stack_12->SetBinContent(11,1.650223);
   hnumuCCinFV_stack_12->SetBinContent(12,0.8763803);
   hnumuCCinFV_stack_12->SetBinContent(13,3.571015);
   hnumuCCinFV_stack_12->SetBinContent(14,3.902623);
   hnumuCCinFV_stack_12->SetBinContent(15,4.344643);
   hnumuCCinFV_stack_12->SetBinContent(16,6.624182);
   hnumuCCinFV_stack_12->SetBinContent(17,8.765591);
   hnumuCCinFV_stack_12->SetBinContent(18,8.435097);
   hnumuCCinFV_stack_12->SetBinContent(19,15.0315);
   hnumuCCinFV_stack_12->SetBinContent(20,28.17757);
   hnumuCCinFV_stack_12->SetBinError(1,0.7562959);
   hnumuCCinFV_stack_12->SetBinError(2,0.6798605);
   hnumuCCinFV_stack_12->SetBinError(3,0.5790086);
   hnumuCCinFV_stack_12->SetBinError(4,0.5024442);
   hnumuCCinFV_stack_12->SetBinError(5,0.7505007);
   hnumuCCinFV_stack_12->SetBinError(6,0.8460255);
   hnumuCCinFV_stack_12->SetBinError(7,0.4688157);
   hnumuCCinFV_stack_12->SetBinError(8,0.5163788);
   hnumuCCinFV_stack_12->SetBinError(9,0.669448);
   hnumuCCinFV_stack_12->SetBinError(10,0.8868977);
   hnumuCCinFV_stack_12->SetBinError(11,0.6966488);
   hnumuCCinFV_stack_12->SetBinError(12,0.4405402);
   hnumuCCinFV_stack_12->SetBinError(13,1.02329);
   hnumuCCinFV_stack_12->SetBinError(14,1.087221);
   hnumuCCinFV_stack_12->SetBinError(15,1.127234);
   hnumuCCinFV_stack_12->SetBinError(16,1.479232);
   hnumuCCinFV_stack_12->SetBinError(17,1.548911);
   hnumuCCinFV_stack_12->SetBinError(18,1.45006);
   hnumuCCinFV_stack_12->SetBinError(19,2.839145);
   hnumuCCinFV_stack_12->SetBinError(20,3.449378);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1471;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_12->SetLineColor(ci);
   hnumuCCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,3.19472);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(5,0.3025491);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,1.151578);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1472;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_13->SetLineColor(ci);
   hnueCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__8->SetBinContent(1,25.56472);
   hmcerror__8->SetBinContent(2,22.17287);
   hmcerror__8->SetBinContent(3,18.62777);
   hmcerror__8->SetBinContent(4,17.64171);
   hmcerror__8->SetBinContent(5,19.83464);
   hmcerror__8->SetBinContent(6,19.44781);
   hmcerror__8->SetBinContent(7,16.08978);
   hmcerror__8->SetBinContent(8,13.17588);
   hmcerror__8->SetBinContent(9,21.56059);
   hmcerror__8->SetBinContent(10,26.81404);
   hmcerror__8->SetBinContent(11,30.7977);
   hmcerror__8->SetBinContent(12,26.29531);
   hmcerror__8->SetBinContent(13,30.85247);
   hmcerror__8->SetBinContent(14,30.69544);
   hmcerror__8->SetBinContent(15,40.09124);
   hmcerror__8->SetBinContent(16,47.58709);
   hmcerror__8->SetBinContent(17,73.59926);
   hmcerror__8->SetBinContent(18,99.32561);
   hmcerror__8->SetBinContent(19,140.1198);
   hmcerror__8->SetBinContent(20,243.7041);
   hmcerror__8->SetBinError(1,15.1779);
   hmcerror__8->SetBinError(2,12.75864);
   hmcerror__8->SetBinError(3,13.73403);
   hmcerror__8->SetBinError(4,12.11507);
   hmcerror__8->SetBinError(5,13.07607);
   hmcerror__8->SetBinError(6,14.41244);
   hmcerror__8->SetBinError(7,8.893483);
   hmcerror__8->SetBinError(8,6.48549);
   hmcerror__8->SetBinError(9,11.38794);
   hmcerror__8->SetBinError(10,13.07129);
   hmcerror__8->SetBinError(11,12.62124);
   hmcerror__8->SetBinError(12,18.60662);
   hmcerror__8->SetBinError(13,14.07525);
   hmcerror__8->SetBinError(14,12.29381);
   hmcerror__8->SetBinError(15,16.03808);
   hmcerror__8->SetBinError(16,17.25672);
   hmcerror__8->SetBinError(17,31.64834);
   hmcerror__8->SetBinError(18,28.57188);
   hmcerror__8->SetBinError(19,38.4624);
   hmcerror__8->SetBinError(20,55.15427);
   hmcerror__8->SetBinError(21,0.3895343);
   hmcerror__8->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
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
   Double_t _fy3009[20] = {
   34,
   11,
   14,
   15,
   12,
   18,
   19,
   18,
   15,
   24,
   18,
   19,
   20,
   39,
   32,
   50,
   62,
   92,
   147,
   226};
   Double_t _felx3009[20] = {
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
   Double_t _fely3009[20] = {
   5.9703,
   3.4975,
   3.9102,
   4.0385,
   3.64022,
   4.4008,
   4.5151,
   4.4008,
   4.0385,
   5.0476,
   4.4008,
   4.5151,
   4.6266,
   6.3813,
   5.7977,
   7.2025,
   8.0018,
   9.7138,
   12.12436,
   15.0333};
   Double_t _fehx3009[20] = {
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
   Double_t _fehy3009[20] = {
   5.7635,
   3.27,
   3.6898,
   3.8197,
   3.4155,
   4.1858,
   4.3011,
   4.1858,
   3.8197,
   4.837,
   4.1858,
   4.3011,
   4.4133,
   6.1757,
   5.5904,
   6.9985,
   7.7989,
   9.513,
   12.12436,
   15.0333};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(6.75225);
   Graph_Graph3009->SetMaximum(264.3864);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.37e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[20] = {
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
   Double_t _fely3010[20] = {
   0.5937049,
   0.5754167,
   0.7372876,
   0.6867287,
   0.6592542,
   0.7410826,
   0.5527413,
   0.4922243,
   0.5281832,
   0.4874793,
   0.409811,
   0.7076025,
   0.4562115,
   0.4005093,
   0.4000395,
   0.3626345,
   0.4300089,
   0.2876587,
   0.2744965,
   0.2263166};
   Double_t _fehx3010[20] = {
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
   Double_t _fehy3010[20] = {
   0.5937049,
   0.5754167,
   0.7372876,
   0.6867287,
   0.6592542,
   0.7410826,
   0.5527413,
   0.4922243,
   0.5281832,
   0.4874793,
   0.409811,
   0.7076025,
   0.4562115,
   0.4005093,
   0.4000395,
   0.3626345,
   0.4300089,
   0.2876587,
   0.2744965,
   0.2263166};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   Double_t _fely3011[20] = {
   0.213472,
   0.1835152,
   0.201717,
   0.2341206,
   0.2146866,
   0.1997564,
   0.2045992,
   0.2134167,
   0.1887206,
   0.1809637,
   0.1755889,
   0.1893188,
   0.1957425,
   0.1997336,
   0.2300592,
   0.1965064,
   0.187883,
   0.1743659,
   0.1792458,
   0.171187};
   Double_t _fehx3011[20] = {
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
   Double_t _fehy3011[20] = {
   0.213472,
   0.1835152,
   0.201717,
   0.2341206,
   0.2146866,
   0.1997564,
   0.2045992,
   0.2134167,
   0.1887206,
   0.1809637,
   0.1755889,
   0.1893188,
   0.1957425,
   0.1997336,
   0.2300592,
   0.1965064,
   0.187883,
   0.1743659,
   0.1792458,
   0.171187};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3012[20] = {
   1.329958,
   0.4961018,
   0.7515659,
   0.8502578,
   0.6050021,
   0.9255539,
   1.180874,
   1.366132,
   0.6957139,
   0.8950534,
   0.5844592,
   0.7225624,
   0.6482463,
   1.270547,
   0.7981793,
   1.050705,
   0.8423998,
   0.9262465,
   1.049102,
   0.9273542};
   Double_t _felx3012[20] = {
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
   Double_t _fely3012[20] = {
   0.2335367,
   0.1577378,
   0.2099124,
   0.2289177,
   0.1835284,
   0.2262876,
   0.2806192,
   0.3340042,
   0.1873094,
   0.1882446,
   0.1428938,
   0.1717074,
   0.1499588,
   0.2078908,
   0.1446126,
   0.1513541,
   0.1087212,
   0.09779753,
   0.08652848,
   0.06168669};
   Double_t _fehx3012[20] = {
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
   Double_t _fehy3012[20] = {
   0.2254474,
   0.1474775,
   0.1980806,
   0.2165153,
   0.1721987,
   0.2152324,
   0.2673188,
   0.3176865,
   0.1771612,
   0.1803906,
   0.1359128,
   0.1635691,
   0.1430453,
   0.2011928,
   0.1394419,
   0.1470672,
   0.1059644,
   0.0957759,
   0.08652848,
   0.06168669};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.2038185);
   Graph_Graph3012->SetMaximum(1.818364);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
