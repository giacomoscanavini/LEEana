#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Jan  9 21:29:50 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-4.791543,1.25641,529.8438);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__22->SetBinContent(1,24.36606);
   hmc__22->SetBinContent(2,21.79836);
   hmc__22->SetBinContent(3,18.01119);
   hmc__22->SetBinContent(4,17.18184);
   hmc__22->SetBinContent(5,19.05998);
   hmc__22->SetBinContent(6,19.10437);
   hmc__22->SetBinContent(7,15.95371);
   hmc__22->SetBinContent(8,12.77505);
   hmc__22->SetBinContent(9,20.14622);
   hmc__22->SetBinContent(10,25.52464);
   hmc__22->SetBinContent(11,29.60558);
   hmc__22->SetBinContent(12,25.5306);
   hmc__22->SetBinContent(13,29.40256);
   hmc__22->SetBinContent(14,28.34298);
   hmc__22->SetBinContent(15,38.77382);
   hmc__22->SetBinContent(16,46.46732);
   hmc__22->SetBinContent(17,70.55267);
   hmc__22->SetBinContent(18,96.3671);
   hmc__22->SetBinContent(19,135.0231);
   hmc__22->SetBinContent(20,239.5771);
   hmc__22->SetBinError(1,13.95513);
   hmc__22->SetBinError(2,10.68381);
   hmc__22->SetBinError(3,13.25746);
   hmc__22->SetBinError(4,11.77095);
   hmc__22->SetBinError(5,13.79305);
   hmc__22->SetBinError(6,12.66654);
   hmc__22->SetBinError(7,8.55622);
   hmc__22->SetBinError(8,6.39091);
   hmc__22->SetBinError(9,10.84956);
   hmc__22->SetBinError(10,12.68816);
   hmc__22->SetBinError(11,11.24761);
   hmc__22->SetBinError(12,19.24683);
   hmc__22->SetBinError(13,13.65835);
   hmc__22->SetBinError(14,11.39614);
   hmc__22->SetBinError(15,15.40455);
   hmc__22->SetBinError(16,15.46546);
   hmc__22->SetBinError(17,30.98221);
   hmc__22->SetBinError(18,27.0907);
   hmc__22->SetBinError(19,37.81223);
   hmc__22->SetBinError(20,54.37629);
   hmc__22->SetBinError(21,0.3895343);
   hmc__22->SetMinimum(-4.791543);
   hmc__22->SetMaximum(503.112);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,-1,1);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(251.556);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.279254);
   hbadmatch_stack_1->SetBinContent(2,0.2441665);
   hbadmatch_stack_1->SetBinContent(3,1.412273);
   hbadmatch_stack_1->SetBinContent(4,1.007562);
   hbadmatch_stack_1->SetBinContent(5,0.665417);
   hbadmatch_stack_1->SetBinContent(6,0.7115837);
   hbadmatch_stack_1->SetBinContent(8,0.2221688);
   hbadmatch_stack_1->SetBinContent(9,2.229619);
   hbadmatch_stack_1->SetBinContent(10,0.6673137);
   hbadmatch_stack_1->SetBinContent(11,1.451923);
   hbadmatch_stack_1->SetBinContent(12,2.402603);
   hbadmatch_stack_1->SetBinContent(13,1.269676);
   hbadmatch_stack_1->SetBinContent(14,0.7681663);
   hbadmatch_stack_1->SetBinContent(15,1.301569);
   hbadmatch_stack_1->SetBinContent(16,1.511361);
   hbadmatch_stack_1->SetBinContent(17,2.310251);
   hbadmatch_stack_1->SetBinContent(18,3.466241);
   hbadmatch_stack_1->SetBinContent(19,3.581839);
   hbadmatch_stack_1->SetBinContent(20,6.481599);
   hbadmatch_stack_1->SetBinError(1,0.6022308);
   hbadmatch_stack_1->SetBinError(2,0.2441665);
   hbadmatch_stack_1->SetBinError(3,0.6510715);
   hbadmatch_stack_1->SetBinError(4,0.4511058);
   hbadmatch_stack_1->SetBinError(5,0.4134443);
   hbadmatch_stack_1->SetBinError(6,0.5511656);
   hbadmatch_stack_1->SetBinError(8,0.2221688);
   hbadmatch_stack_1->SetBinError(9,0.9094543);
   hbadmatch_stack_1->SetBinError(10,0.4825926);
   hbadmatch_stack_1->SetBinError(11,0.7028279);
   hbadmatch_stack_1->SetBinError(12,1.001128);
   hbadmatch_stack_1->SetBinError(13,0.5892465);
   hbadmatch_stack_1->SetBinError(14,0.4561005);
   hbadmatch_stack_1->SetBinError(15,0.6957004);
   hbadmatch_stack_1->SetBinError(16,0.587939);
   hbadmatch_stack_1->SetBinError(17,0.8517189);
   hbadmatch_stack_1->SetBinError(18,0.9984929);
   hbadmatch_stack_1->SetBinError(19,0.9910288);
   hbadmatch_stack_1->SetBinError(20,1.630632);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
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

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
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

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,6.935081);
   houtFV_stack_4->SetBinContent(2,7.351384);
   houtFV_stack_4->SetBinContent(3,5.120811);
   houtFV_stack_4->SetBinContent(4,4.279783);
   houtFV_stack_4->SetBinContent(5,5.242311);
   houtFV_stack_4->SetBinContent(6,6.337673);
   houtFV_stack_4->SetBinContent(7,4.720647);
   houtFV_stack_4->SetBinContent(8,3.267672);
   houtFV_stack_4->SetBinContent(9,3.687943);
   houtFV_stack_4->SetBinContent(10,3.823599);
   houtFV_stack_4->SetBinContent(11,6.094069);
   houtFV_stack_4->SetBinContent(12,6.485868);
   houtFV_stack_4->SetBinContent(13,4.847758);
   houtFV_stack_4->SetBinContent(14,6.609672);
   houtFV_stack_4->SetBinContent(15,10.43499);
   houtFV_stack_4->SetBinContent(16,8.405737);
   houtFV_stack_4->SetBinContent(17,14.74114);
   houtFV_stack_4->SetBinContent(18,21.17284);
   houtFV_stack_4->SetBinContent(19,26.97745);
   houtFV_stack_4->SetBinContent(20,35.90371);
   houtFV_stack_4->SetBinError(1,1.280472);
   houtFV_stack_4->SetBinError(2,1.393187);
   houtFV_stack_4->SetBinError(3,1.1537);
   houtFV_stack_4->SetBinError(4,0.9339208);
   houtFV_stack_4->SetBinError(5,1.098565);
   houtFV_stack_4->SetBinError(6,1.73777);
   houtFV_stack_4->SetBinError(7,1.100589);
   houtFV_stack_4->SetBinError(8,0.8998104);
   houtFV_stack_4->SetBinError(9,0.9509483);
   houtFV_stack_4->SetBinError(10,0.9632674);
   houtFV_stack_4->SetBinError(11,1.217837);
   houtFV_stack_4->SetBinError(12,1.327085);
   houtFV_stack_4->SetBinError(13,1.164889);
   houtFV_stack_4->SetBinError(14,1.242835);
   houtFV_stack_4->SetBinError(15,1.675646);
   houtFV_stack_4->SetBinError(16,1.492817);
   houtFV_stack_4->SetBinError(17,1.868495);
   houtFV_stack_4->SetBinError(18,2.488386);
   houtFV_stack_4->SetBinError(19,2.578308);
   houtFV_stack_4->SetBinError(20,3.026621);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3103091);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.202419);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1703501);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7172575);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.144788);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,10.85998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1722183);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2024189);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1308497);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3663344);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4702777);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.21118);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.06192201);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.03577199);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.09619714);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5626001);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1218652);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04323863);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02529926);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.05804445);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3212992);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05562072);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.358153);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.206642);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.7764194);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.227771);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.679397);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.813711);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.76285);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.332597);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.959977);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.200987);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.185513);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.947731);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.755813);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.794743);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.114244);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.221904);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.57147);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.39447);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.72191);
   hNCpi0inFVres_stack_7->SetBinContent(20,30.66866);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5135832);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5494139);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2325649);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3187408);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4143906);
   hNCpi0inFVres_stack_7->SetBinError(6,0.1930262);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4836248);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3886917);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4025697);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5016989);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5786997);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6238354);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5681024);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5934456);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7938991);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9285848);
   hNCpi0inFVres_stack_7->SetBinError(17,1.190196);
   hNCpi0inFVres_stack_7->SetBinError(18,1.26731);
   hNCpi0inFVres_stack_7->SetBinError(19,1.297355);
   hNCpi0inFVres_stack_7->SetBinError(20,1.896706);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5947655);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4742123);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1141563);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5934789);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6824187);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.08091364);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.2732869);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.2883345);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.2015496);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1929991);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4983399);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1643218);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8282529);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.4081216);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.180276);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.497515);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.057271);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.595202);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.284245);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.05794);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.381196);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2075958);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.05899586);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2257005);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3671745);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.04236752);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.14493);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.201096);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.07293701);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.136544);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3048013);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.07901938);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3463625);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1560485);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3259181);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3943319);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7318763);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6006811);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9164303);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.384751);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
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

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.9724091);
   hNCinFV_stack_11->SetBinContent(3,0.4061749);
   hNCinFV_stack_11->SetBinContent(4,0.7692889);
   hNCinFV_stack_11->SetBinContent(5,0.1950248);
   hNCinFV_stack_11->SetBinContent(7,0.7319179);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(9,0.2536664);
   hNCinFV_stack_11->SetBinContent(10,0.1106221);
   hNCinFV_stack_11->SetBinContent(11,0.5272211);
   hNCinFV_stack_11->SetBinContent(12,0.236149);
   hNCinFV_stack_11->SetBinContent(13,1.302954);
   hNCinFV_stack_11->SetBinContent(14,0.2721385);
   hNCinFV_stack_11->SetBinContent(15,1.159724);
   hNCinFV_stack_11->SetBinContent(16,0.8116774);
   hNCinFV_stack_11->SetBinContent(17,1.776956);
   hNCinFV_stack_11->SetBinContent(18,3.147543);
   hNCinFV_stack_11->SetBinContent(19,6.461012);
   hNCinFV_stack_11->SetBinContent(20,14.75927);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.4463022);
   hNCinFV_stack_11->SetBinError(3,0.2630294);
   hNCinFV_stack_11->SetBinError(4,0.6064766);
   hNCinFV_stack_11->SetBinError(5,0.1950249);
   hNCinFV_stack_11->SetBinError(7,0.438694);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(9,0.1794914);
   hNCinFV_stack_11->SetBinError(10,0.1106221);
   hNCinFV_stack_11->SetBinError(11,0.275228);
   hNCinFV_stack_11->SetBinError(12,0.1676639);
   hNCinFV_stack_11->SetBinError(13,0.6088224);
   hNCinFV_stack_11->SetBinError(14,0.1983964);
   hNCinFV_stack_11->SetBinError(15,0.5333257);
   hNCinFV_stack_11->SetBinError(16,0.4065176);
   hNCinFV_stack_11->SetBinError(17,0.6208643);
   hNCinFV_stack_11->SetBinError(18,0.9392989);
   hNCinFV_stack_11->SetBinError(19,1.397949);
   hNCinFV_stack_11->SetBinError(20,2.144567);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
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

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
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

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__23->SetBinContent(1,24.36606);
   hmcerror__23->SetBinContent(2,21.79836);
   hmcerror__23->SetBinContent(3,18.01119);
   hmcerror__23->SetBinContent(4,17.18184);
   hmcerror__23->SetBinContent(5,19.05998);
   hmcerror__23->SetBinContent(6,19.10437);
   hmcerror__23->SetBinContent(7,15.95371);
   hmcerror__23->SetBinContent(8,12.77505);
   hmcerror__23->SetBinContent(9,20.14622);
   hmcerror__23->SetBinContent(10,25.52464);
   hmcerror__23->SetBinContent(11,29.60558);
   hmcerror__23->SetBinContent(12,25.5306);
   hmcerror__23->SetBinContent(13,29.40256);
   hmcerror__23->SetBinContent(14,28.34298);
   hmcerror__23->SetBinContent(15,38.77382);
   hmcerror__23->SetBinContent(16,46.46732);
   hmcerror__23->SetBinContent(17,70.55267);
   hmcerror__23->SetBinContent(18,96.3671);
   hmcerror__23->SetBinContent(19,135.0231);
   hmcerror__23->SetBinContent(20,239.5771);
   hmcerror__23->SetBinError(1,13.95513);
   hmcerror__23->SetBinError(2,10.68381);
   hmcerror__23->SetBinError(3,13.25746);
   hmcerror__23->SetBinError(4,11.77095);
   hmcerror__23->SetBinError(5,13.79305);
   hmcerror__23->SetBinError(6,12.66654);
   hmcerror__23->SetBinError(7,8.55622);
   hmcerror__23->SetBinError(8,6.39091);
   hmcerror__23->SetBinError(9,10.84956);
   hmcerror__23->SetBinError(10,12.68816);
   hmcerror__23->SetBinError(11,11.24761);
   hmcerror__23->SetBinError(12,19.24683);
   hmcerror__23->SetBinError(13,13.65835);
   hmcerror__23->SetBinError(14,11.39614);
   hmcerror__23->SetBinError(15,15.40455);
   hmcerror__23->SetBinError(16,15.46546);
   hmcerror__23->SetBinError(17,30.98221);
   hmcerror__23->SetBinError(18,27.0907);
   hmcerror__23->SetBinError(19,37.81223);
   hmcerror__23->SetBinError(20,54.37629);
   hmcerror__23->SetBinError(21,0.3895343);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
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
   Double_t _fy3029[20] = {
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
   Double_t _felx3029[20] = {
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
   Double_t _fely3029[20] = {
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
   Double_t _fehx3029[20] = {
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
   Double_t _fehy3029[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(6.75225);
   Graph_Graph3029->SetMaximum(264.3864);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/20","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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

   ci = 1526;
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

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

   ci = 1532;
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

   ci = 1533;
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

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

   ci = 1535;
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

   ci = 1536;
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

   ci = 1537;
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
   canvas8->cd();
  
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
   
   Double_t _fx3030[20] = {
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
   Double_t _fy3030[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[20] = {
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
   Double_t _fely3030[20] = {
   0.5727283,
   0.4901199,
   0.7360681,
   0.6850808,
   0.7236655,
   0.6630178,
   0.5363152,
   0.5002649,
   0.5385406,
   0.4970946,
   0.3799154,
   0.7538732,
   0.4645292,
   0.4020797,
   0.3972926,
   0.3328245,
   0.4391359,
   0.2811198,
   0.2800427,
   0.2269678};
   Double_t _fehx3030[20] = {
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
   Double_t _fehy3030[20] = {
   0.5727283,
   0.4901199,
   0.7360681,
   0.6850808,
   0.7236655,
   0.6630178,
   0.5363152,
   0.5002649,
   0.5385406,
   0.4970946,
   0.3799154,
   0.7538732,
   0.4645292,
   0.4020797,
   0.3972926,
   0.3328245,
   0.4391359,
   0.2811198,
   0.2800427,
   0.2269678};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
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
   Double_t _fy3031[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
   0.2270941,
   0.1878459,
   0.205527,
   0.2358812,
   0.2291835,
   0.2077073,
   0.2113834,
   0.2334494,
   0.2088418,
   0.1957883,
   0.1857041,
   0.2033683,
   0.2052084,
   0.2098248,
   0.2390724,
   0.1949374,
   0.1933326,
   0.1781163,
   0.1857686,
   0.1723387};
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
   0.2270941,
   0.1878459,
   0.205527,
   0.2358812,
   0.2291835,
   0.2077073,
   0.2113834,
   0.2334494,
   0.2088418,
   0.1957883,
   0.1857041,
   0.2033683,
   0.2052084,
   0.2098248,
   0.2390724,
   0.1949374,
   0.1933326,
   0.1781163,
   0.1857686,
   0.1723387};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
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
   Double_t _fy3032[20] = {
   1.395384,
   0.5046251,
   0.7772945,
   0.8730147,
   0.6295913,
   0.9421929,
   1.190945,
   1.408996,
   0.7445567,
   0.9402678,
   0.6079935,
   0.7442051,
   0.6802129,
   1.376002,
   0.8252992,
   1.076025,
   0.8787761,
   0.9546826,
   1.088703,
   0.9433287};
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
   0.2450252,
   0.1604478,
   0.2170983,
   0.2350447,
   0.1909876,
   0.2303557,
   0.2830125,
   0.3444839,
   0.2004595,
   0.197754,
   0.1486477,
   0.1768506,
   0.1573536,
   0.2251457,
   0.1495262,
   0.1550014,
   0.113416,
   0.1008,
   0.0897947,
   0.06274929};
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
   0.236538,
   0.1500113,
   0.2048615,
   0.2223103,
   0.1791974,
   0.2191017,
   0.2695987,
   0.3276542,
   0.1895989,
   0.1895031,
   0.1413855,
   0.1684685,
   0.1500992,
   0.2178917,
   0.1441798,
   0.1506112,
   0.1105401,
   0.09871626,
   0.0897947,
   0.06274929};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.2049299);
   Graph_Graph3032->SetMaximum(1.875898);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
