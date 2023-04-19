#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Feb 17 23:12:07 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-0.1538462,-2.150928,1.128205,237.8474);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__22->SetBinContent(1,41.10859);
   hmc__22->SetBinContent(2,39.46718);
   hmc__22->SetBinContent(3,39.69873);
   hmc__22->SetBinContent(4,34.98376);
   hmc__22->SetBinContent(5,40.46703);
   hmc__22->SetBinContent(6,38.15009);
   hmc__22->SetBinContent(7,38.11607);
   hmc__22->SetBinContent(8,36.72665);
   hmc__22->SetBinContent(9,41.53398);
   hmc__22->SetBinContent(10,44.52924);
   hmc__22->SetBinContent(11,44.55797);
   hmc__22->SetBinContent(12,40.28214);
   hmc__22->SetBinContent(13,48.5868);
   hmc__22->SetBinContent(14,49.43008);
   hmc__22->SetBinContent(15,47.65741);
   hmc__22->SetBinContent(16,48.90091);
   hmc__22->SetBinContent(17,52.85799);
   hmc__22->SetBinContent(18,58.38589);
   hmc__22->SetBinContent(19,71.01094);
   hmc__22->SetBinContent(20,107.5464);
   hmc__22->SetBinError(1,15.59005);
   hmc__22->SetBinError(2,16.09923);
   hmc__22->SetBinError(3,15.22188);
   hmc__22->SetBinError(4,16.61123);
   hmc__22->SetBinError(5,17.61456);
   hmc__22->SetBinError(6,15.36503);
   hmc__22->SetBinError(7,17.92772);
   hmc__22->SetBinError(8,14.92295);
   hmc__22->SetBinError(9,21.52057);
   hmc__22->SetBinError(10,17.6017);
   hmc__22->SetBinError(11,19.13981);
   hmc__22->SetBinError(12,16.57614);
   hmc__22->SetBinError(13,24.02487);
   hmc__22->SetBinError(14,18.40854);
   hmc__22->SetBinError(15,20.2508);
   hmc__22->SetBinError(16,45.4708);
   hmc__22->SetBinError(17,16.37473);
   hmc__22->SetBinError(18,21.72978);
   hmc__22->SetBinError(19,34.77734);
   hmc__22->SetBinError(20,34.81662);
   hmc__22->SetBinError(21,0.3895343);
   hmc__22->SetMinimum(-2.150928);
   hmc__22->SetMaximum(225.8475);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,1);
   hs8_stack_8->SetMinimum(-6.289654e-09);
   hs8_stack_8->SetMaximum(112.9237);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,3.277303);
   hbadmatch_stack_1->SetBinContent(2,1.073786);
   hbadmatch_stack_1->SetBinContent(3,3.163033);
   hbadmatch_stack_1->SetBinContent(4,0.3917402);
   hbadmatch_stack_1->SetBinContent(5,1.360711);
   hbadmatch_stack_1->SetBinContent(6,1.399231);
   hbadmatch_stack_1->SetBinContent(7,1.170999);
   hbadmatch_stack_1->SetBinContent(8,2.437404);
   hbadmatch_stack_1->SetBinContent(9,2.048508);
   hbadmatch_stack_1->SetBinContent(10,1.073786);
   hbadmatch_stack_1->SetBinContent(11,1.611612);
   hbadmatch_stack_1->SetBinContent(12,1.469268);
   hbadmatch_stack_1->SetBinContent(13,0.9303237);
   hbadmatch_stack_1->SetBinContent(14,2.334013);
   hbadmatch_stack_1->SetBinContent(15,1.762946);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,1.533907);
   hbadmatch_stack_1->SetBinContent(18,1.463836);
   hbadmatch_stack_1->SetBinContent(19,1.217248);
   hbadmatch_stack_1->SetBinContent(20,2.874119);
   hbadmatch_stack_1->SetBinError(1,1.3453);
   hbadmatch_stack_1->SetBinError(2,0.5557297);
   hbadmatch_stack_1->SetBinError(3,0.9812475);
   hbadmatch_stack_1->SetBinError(4,0.2770047);
   hbadmatch_stack_1->SetBinError(5,0.6803552);
   hbadmatch_stack_1->SetBinError(6,0.6521872);
   hbadmatch_stack_1->SetBinError(7,0.5375281);
   hbadmatch_stack_1->SetBinError(8,0.8449023);
   hbadmatch_stack_1->SetBinError(9,0.7750872);
   hbadmatch_stack_1->SetBinError(10,0.5557297);
   hbadmatch_stack_1->SetBinError(11,0.8174716);
   hbadmatch_stack_1->SetBinError(12,0.6560209);
   hbadmatch_stack_1->SetBinError(13,0.4814682);
   hbadmatch_stack_1->SetBinError(14,0.7590833);
   hbadmatch_stack_1->SetBinError(15,0.6378538);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.6439783);
   hbadmatch_stack_1->SetBinError(18,0.620407);
   hbadmatch_stack_1->SetBinError(19,0.6211758);
   hbadmatch_stack_1->SetBinError(20,0.8640989);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,9.44387);
   hext_stack_2->SetBinContent(2,8.414427);
   hext_stack_2->SetBinContent(3,5.84797);
   hext_stack_2->SetBinContent(4,7.124018);
   hext_stack_2->SetBinContent(5,10.07112);
   hext_stack_2->SetBinContent(6,7.149968);
   hext_stack_2->SetBinContent(7,4.863188);
   hext_stack_2->SetBinContent(8,4.214394);
   hext_stack_2->SetBinContent(9,7.392164);
   hext_stack_2->SetBinContent(10,11.06308);
   hext_stack_2->SetBinContent(11,9.436689);
   hext_stack_2->SetBinContent(12,8.414427);
   hext_stack_2->SetBinContent(13,9.566383);
   hext_stack_2->SetBinContent(14,11.08463);
   hext_stack_2->SetBinContent(15,7.683431);
   hext_stack_2->SetBinContent(16,12.9604);
   hext_stack_2->SetBinContent(17,14.13988);
   hext_stack_2->SetBinContent(18,16.27939);
   hext_stack_2->SetBinContent(19,14.57243);
   hext_stack_2->SetBinContent(20,19.39808);
   hext_stack_2->SetBinError(1,2.157637);
   hext_stack_2->SetBinError(2,1.95221);
   hext_stack_2->SetBinError(3,1.471207);
   hext_stack_2->SetBinError(4,1.785774);
   hext_stack_2->SetBinError(5,2.33869);
   hext_stack_2->SetBinError(6,1.649396);
   hext_stack_2->SetBinError(7,1.383773);
   hext_stack_2->SetBinError(8,1.305512);
   hext_stack_2->SetBinError(9,1.663025);
   hext_stack_2->SetBinError(10,2.349019);
   hext_stack_2->SetBinError(11,2.203769);
   hext_stack_2->SetBinError(12,1.95221);
   hext_stack_2->SetBinError(13,1.960765);
   hext_stack_2->SetBinError(14,2.216819);
   hext_stack_2->SetBinError(15,1.88164);
   hext_stack_2->SetBinError(16,2.327986);
   hext_stack_2->SetBinError(17,2.605066);
   hext_stack_2->SetBinError(18,2.594831);
   hext_stack_2->SetBinError(19,2.546215);
   hext_stack_2->SetBinError(20,2.988746);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(1,0.9559124);
   hdirt_stack_3->SetBinContent(3,0.6345888);
   hdirt_stack_3->SetBinContent(4,0.9140499);
   hdirt_stack_3->SetBinContent(5,0.63311);
   hdirt_stack_3->SetBinContent(6,1.070957);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,0.89527);
   hdirt_stack_3->SetBinContent(10,0.7431665);
   hdirt_stack_3->SetBinContent(11,1.439834);
   hdirt_stack_3->SetBinContent(12,1.8018);
   hdirt_stack_3->SetBinContent(13,0.2548162);
   hdirt_stack_3->SetBinContent(14,0.4683198);
   hdirt_stack_3->SetBinContent(15,0.4377912);
   hdirt_stack_3->SetBinContent(16,1.768306);
   hdirt_stack_3->SetBinContent(17,1.876863);
   hdirt_stack_3->SetBinContent(18,0.8364257);
   hdirt_stack_3->SetBinContent(19,0.9563739);
   hdirt_stack_3->SetBinContent(20,2.305375);
   hdirt_stack_3->SetBinError(1,0.5668782);
   hdirt_stack_3->SetBinError(3,0.398124);
   hdirt_stack_3->SetBinError(4,0.4788161);
   hdirt_stack_3->SetBinError(5,0.3242013);
   hdirt_stack_3->SetBinError(6,0.561574);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.5259814);
   hdirt_stack_3->SetBinError(10,0.4648968);
   hdirt_stack_3->SetBinError(11,0.6722855);
   hdirt_stack_3->SetBinError(12,0.6616433);
   hdirt_stack_3->SetBinError(13,0.2548162);
   hdirt_stack_3->SetBinError(14,0.2689463);
   hdirt_stack_3->SetBinError(15,0.3095651);
   hdirt_stack_3->SetBinError(16,0.7029392);
   hdirt_stack_3->SetBinError(17,1.084937);
   hdirt_stack_3->SetBinError(18,0.4275364);
   hdirt_stack_3->SetBinError(19,0.567203);
   hdirt_stack_3->SetBinError(20,0.7504066);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,7.069733);
   houtFV_stack_4->SetBinContent(2,7.548987);
   houtFV_stack_4->SetBinContent(3,6.8423);
   houtFV_stack_4->SetBinContent(4,7.412553);
   houtFV_stack_4->SetBinContent(5,7.144311);
   houtFV_stack_4->SetBinContent(6,7.610184);
   houtFV_stack_4->SetBinContent(7,9.398275);
   houtFV_stack_4->SetBinContent(8,6.623431);
   houtFV_stack_4->SetBinContent(9,6.981957);
   houtFV_stack_4->SetBinContent(10,8.742891);
   houtFV_stack_4->SetBinContent(11,10.19992);
   houtFV_stack_4->SetBinContent(12,8.928722);
   houtFV_stack_4->SetBinContent(13,12.51641);
   houtFV_stack_4->SetBinContent(14,10.17339);
   houtFV_stack_4->SetBinContent(15,14.10866);
   houtFV_stack_4->SetBinContent(16,7.611719);
   houtFV_stack_4->SetBinContent(17,11.72165);
   houtFV_stack_4->SetBinContent(18,11.76517);
   houtFV_stack_4->SetBinContent(19,17.40606);
   houtFV_stack_4->SetBinContent(20,23.90579);
   houtFV_stack_4->SetBinError(1,1.363403);
   houtFV_stack_4->SetBinError(2,1.405999);
   houtFV_stack_4->SetBinError(3,1.316977);
   houtFV_stack_4->SetBinError(4,1.363992);
   houtFV_stack_4->SetBinError(5,1.325526);
   houtFV_stack_4->SetBinError(6,1.39759);
   houtFV_stack_4->SetBinError(7,1.776624);
   houtFV_stack_4->SetBinError(8,1.303545);
   houtFV_stack_4->SetBinError(9,1.320899);
   houtFV_stack_4->SetBinError(10,1.554293);
   houtFV_stack_4->SetBinError(11,1.578035);
   houtFV_stack_4->SetBinError(12,1.49763);
   houtFV_stack_4->SetBinError(13,2.16453);
   houtFV_stack_4->SetBinError(14,1.565808);
   houtFV_stack_4->SetBinError(15,1.924832);
   houtFV_stack_4->SetBinError(16,1.424659);
   houtFV_stack_4->SetBinError(17,1.712377);
   houtFV_stack_4->SetBinError(18,1.705919);
   houtFV_stack_4->SetBinError(19,2.068922);
   houtFV_stack_4->SetBinError(20,2.452707);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.07449);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.8790222);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.9907903);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7800399);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.753636);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.239226);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.272198);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4095739);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3599208);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4067131);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2855518);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2941681);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2861184);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4916305);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.461855);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.798568);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.464431);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.706322);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.203042);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.896885);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.418448);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.293623);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.53809);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.60834);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.03589);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.703082);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.93882);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.17979);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.175717);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.784389);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.860104);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.607667);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.706);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.46154);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6490928);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7385221);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7228978);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8336681);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7651829);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7790448);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9582024);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6303847);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8191861);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8360768);
   hNCpi0inFVres_stack_7->SetBinError(11,0.810589);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7792531);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7246461);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8300417);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7628473);
   hNCpi0inFVres_stack_7->SetBinError(16,1.007987);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8321883);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7536503);
   hNCpi0inFVres_stack_7->SetBinError(19,1.05093);
   hNCpi0inFVres_stack_7->SetBinError(20,1.077596);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.39484);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.106462);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.992366);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7949858);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.658894);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.269454);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.143404);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.087772);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.31114);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.323926);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.076066);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.212822);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.524298);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.784776);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.867812);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.700412);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.96513);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.67384);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.20278);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.331902);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.388188);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5249404);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4633036);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2483746);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4222841);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3281491);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2795826);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3307091);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3851684);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3690854);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.465817);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2947182);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5483898);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4184261);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4369306);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4315529);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4476373);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3980879);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4827092);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5634995);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,7.904269);
   hCCpi0inFV_stack_10->SetBinContent(2,7.907634);
   hCCpi0inFV_stack_10->SetBinContent(3,8.677585);
   hCCpi0inFV_stack_10->SetBinContent(4,6.509888);
   hCCpi0inFV_stack_10->SetBinContent(5,8.913295);
   hCCpi0inFV_stack_10->SetBinContent(6,8.179586);
   hCCpi0inFV_stack_10->SetBinContent(7,8.160983);
   hCCpi0inFV_stack_10->SetBinContent(8,8.094431);
   hCCpi0inFV_stack_10->SetBinContent(9,9.425682);
   hCCpi0inFV_stack_10->SetBinContent(10,7.957582);
   hCCpi0inFV_stack_10->SetBinContent(11,7.282222);
   hCCpi0inFV_stack_10->SetBinContent(12,7.425685);
   hCCpi0inFV_stack_10->SetBinContent(13,9.196875);
   hCCpi0inFV_stack_10->SetBinContent(14,9.218314);
   hCCpi0inFV_stack_10->SetBinContent(15,9.628309);
   hCCpi0inFV_stack_10->SetBinContent(16,8.551033);
   hCCpi0inFV_stack_10->SetBinContent(17,7.280532);
   hCCpi0inFV_stack_10->SetBinContent(18,10.13056);
   hCCpi0inFV_stack_10->SetBinContent(19,11.33153);
   hCCpi0inFV_stack_10->SetBinContent(20,25.21207);
   hCCpi0inFV_stack_10->SetBinError(1,1.37863);
   hCCpi0inFV_stack_10->SetBinError(2,1.428269);
   hCCpi0inFV_stack_10->SetBinError(3,1.499376);
   hCCpi0inFV_stack_10->SetBinError(4,1.330491);
   hCCpi0inFV_stack_10->SetBinError(5,1.517894);
   hCCpi0inFV_stack_10->SetBinError(6,1.453673);
   hCCpi0inFV_stack_10->SetBinError(7,1.428862);
   hCCpi0inFV_stack_10->SetBinError(8,1.461423);
   hCCpi0inFV_stack_10->SetBinError(9,1.499613);
   hCCpi0inFV_stack_10->SetBinError(10,1.423235);
   hCCpi0inFV_stack_10->SetBinError(11,1.330732);
   hCCpi0inFV_stack_10->SetBinError(12,1.359364);
   hCCpi0inFV_stack_10->SetBinError(13,1.456243);
   hCCpi0inFV_stack_10->SetBinError(14,1.550612);
   hCCpi0inFV_stack_10->SetBinError(15,1.646127);
   hCCpi0inFV_stack_10->SetBinError(16,1.455238);
   hCCpi0inFV_stack_10->SetBinError(17,1.330483);
   hCCpi0inFV_stack_10->SetBinError(18,1.621283);
   hCCpi0inFV_stack_10->SetBinError(19,1.696081);
   hCCpi0inFV_stack_10->SetBinError(20,2.569823);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,2.195754);
   hNCinFV_stack_11->SetBinContent(2,2.535931);
   hNCinFV_stack_11->SetBinContent(3,2.247316);
   hNCinFV_stack_11->SetBinContent(4,2.052291);
   hNCinFV_stack_11->SetBinContent(5,1.660551);
   hNCinFV_stack_11->SetBinContent(6,0.536893);
   hNCinFV_stack_11->SetBinContent(7,1.217248);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(9,2.927671);
   hNCinFV_stack_11->SetBinContent(10,1.857266);
   hNCinFV_stack_11->SetBinContent(11,1.377008);
   hNCinFV_stack_11->SetBinContent(12,0.5901461);
   hNCinFV_stack_11->SetBinContent(13,2.055672);
   hNCinFV_stack_11->SetBinContent(14,2.245626);
   hNCinFV_stack_11->SetBinContent(15,0.7302274);
   hNCinFV_stack_11->SetBinContent(16,1.316992);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(18,2.342597);
   hNCinFV_stack_11->SetBinContent(19,2.535931);
   hNCinFV_stack_11->SetBinContent(20,4.733375);
   hNCinFV_stack_11->SetBinError(1,0.7598403);
   hNCinFV_stack_11->SetBinError(2,0.8325131);
   hNCinFV_stack_11->SetBinError(3,0.7337357);
   hNCinFV_stack_11->SetBinError(4,0.7073425);
   hNCinFV_stack_11->SetBinError(5,0.650847);
   hNCinFV_stack_11->SetBinError(6,0.3929602);
   hNCinFV_stack_11->SetBinError(7,0.6211758);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(9,0.877388);
   hNCinFV_stack_11->SetBinError(10,0.6799255);
   hNCinFV_stack_11->SetBinError(11,0.5204599);
   hNCinFV_stack_11->SetBinError(12,0.340721);
   hNCinFV_stack_11->SetBinError(13,0.7082781);
   hNCinFV_stack_11->SetBinError(14,0.7332843);
   hNCinFV_stack_11->SetBinError(15,0.4379386);
   hNCinFV_stack_11->SetBinError(16,0.5536755);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(18,0.8097566);
   hNCinFV_stack_11->SetBinError(19,0.8325131);
   hNCinFV_stack_11->SetBinError(20,1.12743);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,3.820088);
   hnumuCCinFV_stack_12->SetBinContent(2,3.593298);
   hnumuCCinFV_stack_12->SetBinContent(3,4.49417);
   hnumuCCinFV_stack_12->SetBinContent(4,2.673529);
   hnumuCCinFV_stack_12->SetBinContent(5,3.459124);
   hnumuCCinFV_stack_12->SetBinContent(6,3.962439);
   hnumuCCinFV_stack_12->SetBinContent(7,3.617704);
   hnumuCCinFV_stack_12->SetBinContent(8,7.917716);
   hnumuCCinFV_stack_12->SetBinContent(9,3.413815);
   hnumuCCinFV_stack_12->SetBinContent(10,4.515911);
   hnumuCCinFV_stack_12->SetBinContent(11,4.469893);
   hnumuCCinFV_stack_12->SetBinContent(12,4.276005);
   hnumuCCinFV_stack_12->SetBinContent(13,5.320208);
   hnumuCCinFV_stack_12->SetBinContent(14,3.480739);
   hnumuCCinFV_stack_12->SetBinContent(15,4.816786);
   hnumuCCinFV_stack_12->SetBinContent(16,5.397635);
   hnumuCCinFV_stack_12->SetBinContent(17,6.081827);
   hnumuCCinFV_stack_12->SetBinContent(18,6.336048);
   hnumuCCinFV_stack_12->SetBinContent(19,7.742958);
   hnumuCCinFV_stack_12->SetBinContent(20,8.648901);
   hnumuCCinFV_stack_12->SetBinError(1,0.9458058);
   hnumuCCinFV_stack_12->SetBinError(2,0.9442815);
   hnumuCCinFV_stack_12->SetBinError(3,1.124445);
   hnumuCCinFV_stack_12->SetBinError(4,0.7936313);
   hnumuCCinFV_stack_12->SetBinError(5,0.9637411);
   hnumuCCinFV_stack_12->SetBinError(6,0.9543054);
   hnumuCCinFV_stack_12->SetBinError(7,0.9638584);
   hnumuCCinFV_stack_12->SetBinError(8,2.281633);
   hnumuCCinFV_stack_12->SetBinError(9,0.9512452);
   hnumuCCinFV_stack_12->SetBinError(10,1.104008);
   hnumuCCinFV_stack_12->SetBinError(11,1.277734);
   hnumuCCinFV_stack_12->SetBinError(12,1.150928);
   hnumuCCinFV_stack_12->SetBinError(13,1.303496);
   hnumuCCinFV_stack_12->SetBinError(14,0.9335776);
   hnumuCCinFV_stack_12->SetBinError(15,1.225031);
   hnumuCCinFV_stack_12->SetBinError(16,1.184869);
   hnumuCCinFV_stack_12->SetBinError(17,1.31557);
   hnumuCCinFV_stack_12->SetBinError(18,1.674846);
   hnumuCCinFV_stack_12->SetBinError(19,2.538976);
   hnumuCCinFV_stack_12->SetBinError(20,1.502307);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,1.10039);
   hnueCCinFV_stack_13->SetBinContent(20,2.347263);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.2463303);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.6033404);
   hnueCCinFV_stack_13->SetBinError(20,1.01571);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__23->SetBinContent(1,41.10859);
   hmcerror__23->SetBinContent(2,39.46718);
   hmcerror__23->SetBinContent(3,39.69873);
   hmcerror__23->SetBinContent(4,34.98376);
   hmcerror__23->SetBinContent(5,40.46703);
   hmcerror__23->SetBinContent(6,38.15009);
   hmcerror__23->SetBinContent(7,38.11607);
   hmcerror__23->SetBinContent(8,36.72665);
   hmcerror__23->SetBinContent(9,41.53398);
   hmcerror__23->SetBinContent(10,44.52924);
   hmcerror__23->SetBinContent(11,44.55797);
   hmcerror__23->SetBinContent(12,40.28214);
   hmcerror__23->SetBinContent(13,48.5868);
   hmcerror__23->SetBinContent(14,49.43008);
   hmcerror__23->SetBinContent(15,47.65741);
   hmcerror__23->SetBinContent(16,48.90091);
   hmcerror__23->SetBinContent(17,52.85799);
   hmcerror__23->SetBinContent(18,58.38589);
   hmcerror__23->SetBinContent(19,71.01094);
   hmcerror__23->SetBinContent(20,107.5464);
   hmcerror__23->SetBinError(1,15.59005);
   hmcerror__23->SetBinError(2,16.09923);
   hmcerror__23->SetBinError(3,15.22188);
   hmcerror__23->SetBinError(4,16.61123);
   hmcerror__23->SetBinError(5,17.61456);
   hmcerror__23->SetBinError(6,15.36503);
   hmcerror__23->SetBinError(7,17.92772);
   hmcerror__23->SetBinError(8,14.92295);
   hmcerror__23->SetBinError(9,21.52057);
   hmcerror__23->SetBinError(10,17.6017);
   hmcerror__23->SetBinError(11,19.13981);
   hmcerror__23->SetBinError(12,16.57614);
   hmcerror__23->SetBinError(13,24.02487);
   hmcerror__23->SetBinError(14,18.40854);
   hmcerror__23->SetBinError(15,20.2508);
   hmcerror__23->SetBinError(16,45.4708);
   hmcerror__23->SetBinError(17,16.37473);
   hmcerror__23->SetBinError(18,21.72978);
   hmcerror__23->SetBinError(19,34.77734);
   hmcerror__23->SetBinError(20,34.81662);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3029[20] = {
   43,
   42,
   35,
   35,
   37,
   32,
   56,
   34,
   43,
   28,
   40,
   31,
   39,
   33,
   41,
   47,
   56,
   44,
   71,
   98};
   Double_t _felx3029[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3029[20] = {
   6.6917,
   6.6155,
   6.0548,
   6.0548,
   6.2203,
   5.7977,
   7.6127,
   5.9703,
   6.6917,
   5.4358,
   6.4604,
   5.7094,
   6.3813,
   5.8847,
   6.5384,
   6.9882,
   7.6127,
   6.7671,
   8.5518,
   10.0209};
   Double_t _fehx3029[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3029[20] = {
   6.4868,
   6.4104,
   5.8483,
   5.8483,
   6.0141,
   5.5904,
   7.4094,
   5.7635,
   6.4868,
   5.2271,
   6.2549,
   5.5017,
   6.1757,
   5.6776,
   6.3331,
   6.7839,
   7.4094,
   6.5623,
   8.3496,
   9.82};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1.1);
   Graph_Graph3029->SetMinimum(14.03862);
   Graph_Graph3029->SetMaximum(116.3456);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/20","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3030[20] = {
   0.3792408,
   0.4079143,
   0.3834349,
   0.474827,
   0.4352817,
   0.4027521,
   0.4703455,
   0.4063248,
   0.5181436,
   0.3952842,
   0.4295486,
   0.4115009,
   0.4944732,
   0.3724157,
   0.4249245,
   0.9298559,
   0.3097872,
   0.3721752,
   0.4897463,
   0.3237358};
   Double_t _fehx3030[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3030[20] = {
   0.3792408,
   0.4079143,
   0.3834349,
   0.474827,
   0.4352817,
   0.4027521,
   0.4703455,
   0.4063248,
   0.5181436,
   0.3952842,
   0.4295486,
   0.4115009,
   0.4944732,
   0.3724157,
   0.4249245,
   0.9298559,
   0.3097872,
   0.3721752,
   0.4897463,
   0.3237358};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1.1);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
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
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3031[20] = {
   0.1777459,
   0.197006,
   0.1927439,
   0.1978039,
   0.1830306,
   0.1885908,
   0.2125319,
   0.2154439,
   0.1744116,
   0.1669758,
   0.1875525,
   0.1919953,
   0.1763714,
   0.1674798,
   0.1784072,
   0.1748534,
   0.1725528,
   0.1685988,
   0.1704824,
   0.1657775};
   Double_t _fehx3031[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3031[20] = {
   0.1777459,
   0.197006,
   0.1927439,
   0.1978039,
   0.1830306,
   0.1885908,
   0.2125319,
   0.2154439,
   0.1744116,
   0.1669758,
   0.1875525,
   0.1919953,
   0.1763714,
   0.1674798,
   0.1784072,
   0.1748534,
   0.1725528,
   0.1685988,
   0.1704824,
   0.1657775};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1.1);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3032[20] = {
   1.04601,
   1.064175,
   0.8816404,
   1.000464,
   0.9143247,
   0.8387923,
   1.469197,
   0.9257583,
   1.035297,
   0.6288004,
   0.897707,
   0.7695718,
   0.8026872,
   0.6676096,
   0.8603069,
   0.9611273,
   1.059443,
   0.7536068,
   0.9998459,
   0.9112345};
   Double_t _felx3032[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3032[20] = {
   0.1627811,
   0.1676203,
   0.1525187,
   0.1730746,
   0.1537128,
   0.1519708,
   0.1997242,
   0.1625604,
   0.1611139,
   0.1220726,
   0.1449887,
   0.1417353,
   0.1313381,
   0.119051,
   0.1371959,
   0.1429053,
   0.1440218,
   0.115903,
   0.1204293,
   0.09317745};
   Double_t _fehx3032[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3032[20] = {
   0.1577967,
   0.1624236,
   0.1473171,
   0.1671718,
   0.1486173,
   0.146537,
   0.1943905,
   0.1569296,
   0.1561805,
   0.1173858,
   0.1403767,
   0.1365791,
   0.1271065,
   0.1148612,
   0.132888,
   0.1387275,
   0.1401756,
   0.1123953,
   0.1175819,
   0.09130942};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1.1);
   Graph_Graph3032->SetMinimum(0.3910418);
   Graph_Graph3032->SetMaximum(1.779273);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_CM_all",20,0,1);

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
   TLine *line = new TLine(0,1,1,1);
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
