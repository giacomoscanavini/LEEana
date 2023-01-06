#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 22:15:16 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
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
   pad1->Range(-1.307692,-19.17062,1.25641,2119.867);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hmc__7->SetBinContent(1,21.66922);
   hmc__7->SetBinContent(2,16.64816);
   hmc__7->SetBinContent(3,15.20032);
   hmc__7->SetBinContent(4,28.11669);
   hmc__7->SetBinContent(5,20.97651);
   hmc__7->SetBinContent(6,24.62361);
   hmc__7->SetBinContent(7,27.7444);
   hmc__7->SetBinContent(8,37.71172);
   hmc__7->SetBinContent(9,37.79489);
   hmc__7->SetBinContent(10,47.67072);
   hmc__7->SetBinContent(11,47.76871);
   hmc__7->SetBinContent(12,60.74782);
   hmc__7->SetBinContent(13,72.4597);
   hmc__7->SetBinContent(14,84.34326);
   hmc__7->SetBinContent(15,91.25871);
   hmc__7->SetBinContent(16,116.4757);
   hmc__7->SetBinContent(17,153.2482);
   hmc__7->SetBinContent(18,157.2837);
   hmc__7->SetBinContent(19,209.8137);
   hmc__7->SetBinContent(20,272.7663);
   hmc__7->SetBinContent(21,351.2466);
   hmc__7->SetBinContent(22,440.7464);
   hmc__7->SetBinContent(23,612.7597);
   hmc__7->SetBinContent(24,903.4192);
   hmc__7->SetBinContent(25,958.5308);
   hmc__7->SetBinError(1,5.001884);
   hmc__7->SetBinError(2,3.9469);
   hmc__7->SetBinError(3,3.923098);
   hmc__7->SetBinError(4,6.208692);
   hmc__7->SetBinError(5,5.855994);
   hmc__7->SetBinError(6,6.325354);
   hmc__7->SetBinError(7,7.498805);
   hmc__7->SetBinError(8,10.73076);
   hmc__7->SetBinError(9,9.951006);
   hmc__7->SetBinError(10,13.2296);
   hmc__7->SetBinError(11,11.96478);
   hmc__7->SetBinError(12,14.89736);
   hmc__7->SetBinError(13,18.38771);
   hmc__7->SetBinError(14,22.19857);
   hmc__7->SetBinError(15,24.83);
   hmc__7->SetBinError(16,30.71034);
   hmc__7->SetBinError(17,39.33616);
   hmc__7->SetBinError(18,44.00897);
   hmc__7->SetBinError(19,52.9831);
   hmc__7->SetBinError(20,67.26271);
   hmc__7->SetBinError(21,84.99753);
   hmc__7->SetBinError(22,105.103);
   hmc__7->SetBinError(23,145.5807);
   hmc__7->SetBinError(24,211.53);
   hmc__7->SetBinError(25,207.9614);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-19.17062);
   hmc__7->SetMaximum(2012.915);
   hmc__7->SetEntries(4762.881);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-1,1);
   hs3_stack_3->SetMinimum(-1.408876e-08);
   hs3_stack_3->SetMaximum(1006.457);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.5613344);
   hbadmatch_stack_1->SetBinContent(5,0.1967154);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.3917402);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.6050395);
   hbadmatch_stack_1->SetBinContent(14,0.7319179);
   hbadmatch_stack_1->SetBinContent(15,0.4507997);
   hbadmatch_stack_1->SetBinContent(16,0.3954824);
   hbadmatch_stack_1->SetBinContent(17,0.4129704);
   hbadmatch_stack_1->SetBinContent(18,0.9835768);
   hbadmatch_stack_1->SetBinContent(19,1.312212);
   hbadmatch_stack_1->SetBinContent(20,2.560275);
   hbadmatch_stack_1->SetBinContent(21,1.689538);
   hbadmatch_stack_1->SetBinContent(22,2.581495);
   hbadmatch_stack_1->SetBinContent(23,0.8185084);
   hbadmatch_stack_1->SetBinContent(24,2.335448);
   hbadmatch_stack_1->SetBinContent(25,3.004502);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.4057476);
   hbadmatch_stack_1->SetBinError(5,0.1967154);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.2770047);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.4540339);
   hbadmatch_stack_1->SetBinError(14,0.438694);
   hbadmatch_stack_1->SetBinError(15,0.3577123);
   hbadmatch_stack_1->SetBinError(16,0.3954824);
   hbadmatch_stack_1->SetBinError(17,0.2923408);
   hbadmatch_stack_1->SetBinError(18,0.4398689);
   hbadmatch_stack_1->SetBinError(19,0.6317644);
   hbadmatch_stack_1->SetBinError(20,0.8407507);
   hbadmatch_stack_1->SetBinError(21,0.6601866);
   hbadmatch_stack_1->SetBinError(22,1.016154);
   hbadmatch_stack_1->SetBinError(23,0.4101709);
   hbadmatch_stack_1->SetBinError(24,0.7743519);
   hbadmatch_stack_1->SetBinError(25,0.910349);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,1.697008);
   hext_stack_2->SetBinContent(2,1.379791);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,5.86391);
   hext_stack_2->SetBinContent(5,1.137595);
   hext_stack_2->SetBinContent(6,2.032995);
   hext_stack_2->SetBinContent(7,2.6702);
   hext_stack_2->SetBinContent(8,2.599588);
   hext_stack_2->SetBinContent(9,2.428004);
   hext_stack_2->SetBinContent(10,6.381432);
   hext_stack_2->SetBinContent(11,4.670063);
   hext_stack_2->SetBinContent(12,7.824655);
   hext_stack_2->SetBinContent(13,9.138242);
   hext_stack_2->SetBinContent(14,6.090166);
   hext_stack_2->SetBinContent(15,4.759445);
   hext_stack_2->SetBinContent(16,3.330584);
   hext_stack_2->SetBinContent(17,7.981877);
   hext_stack_2->SetBinContent(18,2.420823);
   hext_stack_2->SetBinContent(19,9.265105);
   hext_stack_2->SetBinContent(20,10.45177);
   hext_stack_2->SetBinContent(21,8.966659);
   hext_stack_2->SetBinContent(22,6.132056);
   hext_stack_2->SetBinContent(23,5.478852);
   hext_stack_2->SetBinContent(24,6.124875);
   hext_stack_2->SetBinContent(25,3.323403);
   hext_stack_2->SetBinError(1,0.8873887);
   hext_stack_2->SetBinError(2,0.6935586);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,1.887831);
   hext_stack_2->SetBinError(5,0.6602113);
   hext_stack_2->SetBinError(6,0.9091828);
   hext_stack_2->SetBinError(7,1.050314);
   hext_stack_2->SetBinError(8,0.9884288);
   hext_stack_2->SetBinError(9,1.028599);
   hext_stack_2->SetBinError(10,1.727574);
   hext_stack_2->SetBinError(11,1.612283);
   hext_stack_2->SetBinError(12,1.947538);
   hext_stack_2->SetBinError(13,2.069513);
   hext_stack_2->SetBinError(14,1.486471);
   hext_stack_2->SetBinError(15,1.567911);
   hext_stack_2->SetBinError(16,1.116937);
   hext_stack_2->SetBinError(17,2.02837);
   hext_stack_2->SetBinError(18,1.122148);
   hext_stack_2->SetBinError(19,2.222076);
   hext_stack_2->SetBinError(20,2.47048);
   hext_stack_2->SetBinError(21,2.088996);
   hext_stack_2->SetBinError(22,1.772165);
   hext_stack_2->SetBinError(23,1.671819);
   hext_stack_2->SetBinError(24,1.828051);
   hext_stack_2->SetBinError(25,1.20364);
   hext_stack_2->SetEntries(271);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.311381);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.5823706);
   hdirt_stack_3->SetBinContent(9,0.3820091);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,1.167841e-06);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2665913);
   hdirt_stack_3->SetBinContent(17,0.3042167);
   hdirt_stack_3->SetBinContent(20,0.165896);
   hdirt_stack_3->SetBinContent(21,0.3981555);
   hdirt_stack_3->SetBinContent(22,0.6951543);
   hdirt_stack_3->SetBinContent(23,0.6308452);
   hdirt_stack_3->SetBinContent(24,0.6707404);
   hdirt_stack_3->SetBinContent(25,0.5758626);
   hdirt_stack_3->SetBinError(1,0.311381);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(6,0.4171284);
   hdirt_stack_3->SetBinError(9,0.3820091);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,1.167841e-06);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2665913);
   hdirt_stack_3->SetBinError(17,0.2160277);
   hdirt_stack_3->SetBinError(20,0.165896);
   hdirt_stack_3->SetBinError(21,0.28293);
   hdirt_stack_3->SetBinError(22,0.4258516);
   hdirt_stack_3->SetBinError(23,0.3966501);
   hdirt_stack_3->SetBinError(24,0.4011631);
   hdirt_stack_3->SetBinError(25,0.3389606);
   hdirt_stack_3->SetEntries(27);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.310595);
   houtFV_stack_4->SetBinContent(2,1.015426);
   houtFV_stack_4->SetBinContent(3,1.517089);
   houtFV_stack_4->SetBinContent(4,0.4641484);
   houtFV_stack_4->SetBinContent(5,0.1967154);
   houtFV_stack_4->SetBinContent(6,1.203364);
   houtFV_stack_4->SetBinContent(7,0.536893);
   houtFV_stack_4->SetBinContent(8,1.349204);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(10,0.9252522);
   houtFV_stack_4->SetBinContent(11,0.6426004);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.536893);
   houtFV_stack_4->SetBinContent(14,1.37706);
   houtFV_stack_4->SetBinContent(15,1.45303);
   houtFV_stack_4->SetBinContent(16,1.835578);
   houtFV_stack_4->SetBinContent(17,1.805704);
   houtFV_stack_4->SetBinContent(18,1.227583);
   houtFV_stack_4->SetBinContent(19,0.8032208);
   houtFV_stack_4->SetBinContent(20,3.642548);
   houtFV_stack_4->SetBinContent(21,3.954297);
   houtFV_stack_4->SetBinContent(22,5.341875);
   houtFV_stack_4->SetBinContent(23,7.280749);
   houtFV_stack_4->SetBinContent(24,9.507095);
   houtFV_stack_4->SetBinContent(25,8.01684);
   houtFV_stack_4->SetBinError(1,0.6040812);
   houtFV_stack_4->SetBinError(2,0.5995099);
   houtFV_stack_4->SetBinError(3,0.5887087);
   houtFV_stack_4->SetBinError(4,0.33199);
   houtFV_stack_4->SetBinError(5,0.1967154);
   houtFV_stack_4->SetBinError(6,0.574914);
   houtFV_stack_4->SetBinError(7,0.3929602);
   houtFV_stack_4->SetBinError(8,0.5656477);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(10,0.4794006);
   houtFV_stack_4->SetBinError(11,0.4065585);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.3929602);
   houtFV_stack_4->SetBinError(14,0.5205134);
   houtFV_stack_4->SetBinError(15,0.5705074);
   houtFV_stack_4->SetBinError(16,0.6843887);
   houtFV_stack_4->SetBinError(17,0.7080169);
   houtFV_stack_4->SetBinError(18,0.4821352);
   houtFV_stack_4->SetBinError(19,0.4749625);
   houtFV_stack_4->SetBinError(20,0.9888847);
   houtFV_stack_4->SetBinError(21,0.975618);
   houtFV_stack_4->SetBinError(22,1.149044);
   houtFV_stack_4->SetBinError(23,2.042806);
   houtFV_stack_4->SetBinError(24,1.771466);
   houtFV_stack_4->SetBinError(25,1.592171);
   houtFV_stack_4->SetEntries(234);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03076306);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1099207);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.4357806);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.5228381);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.09516715);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.1497501);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.2437506);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.1496651);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.1238522);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.4362207);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.3325094);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.6312542);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1921093);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.5152799);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.319544);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.8197397);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.9279045);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.7859858);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.027165);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.036514);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.08998);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.211923);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.451091);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.84074);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.540678);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.6918);
   hNCpi0inFVres_stack_7->SetBinContent(25,10.30006);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1733838);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3046021);
   hNCpi0inFVres_stack_7->SetBinError(3,0.06465075);
   hNCpi0inFVres_stack_7->SetBinError(4,0.07005213);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1459023);
   hNCpi0inFVres_stack_7->SetBinError(6,0.05965239);
   hNCpi0inFVres_stack_7->SetBinError(7,0.04737076);
   hNCpi0inFVres_stack_7->SetBinError(8,0.1929869);
   hNCpi0inFVres_stack_7->SetBinError(9,0.151173);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2564597);
   hNCpi0inFVres_stack_7->SetBinError(11,0.0840672);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1427154);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6142144);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2337622);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2957959);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1876085);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2784333);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6859885);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5786309);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4593927);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7221569);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6077921);
   hNCpi0inFVres_stack_7->SetBinError(23,0.895519);
   hNCpi0inFVres_stack_7->SetBinError(24,1.129081);
   hNCpi0inFVres_stack_7->SetBinError(25,1.298022);
   hNCpi0inFVres_stack_7->SetEntries(949);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.307851);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09545394);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.07051601);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6624138);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.4757532);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.4361904);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3753867);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.4254661);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4332698);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.365115);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1645838);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4937343);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2804261);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.4464577);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.033861);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8718727);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4924633);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6992141);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.262262);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.010262);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.070662);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.691048);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.317815);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.004163);
   hNCpi0inFVdis_stack_8->SetBinContent(25,13.62464);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1548862);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.05082194);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.04358459);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4252911);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2427193);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2667022);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2137523);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.221514);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3026985);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2667864);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1228925);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.183083);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.09554677);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.189792);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3519147);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.343793);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1477245);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2002944);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5862014);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2526919);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4416137);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7060664);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9857933);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.128255);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.516374);
   hNCpi0inFVdis_stack_8->SetEntries(773);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,8.482449);
   hCCpi0inFV_stack_10->SetBinContent(2,7.627472);
   hCCpi0inFV_stack_10->SetBinContent(3,8.579944);
   hCCpi0inFV_stack_10->SetBinContent(4,13.53478);
   hCCpi0inFV_stack_10->SetBinContent(5,10.73585);
   hCCpi0inFV_stack_10->SetBinContent(6,15.08581);
   hCCpi0inFV_stack_10->SetBinContent(7,16.9038);
   hCCpi0inFV_stack_10->SetBinContent(8,23.59225);
   hCCpi0inFV_stack_10->SetBinContent(9,21.46532);
   hCCpi0inFV_stack_10->SetBinContent(10,30.77282);
   hCCpi0inFV_stack_10->SetBinContent(11,31.57392);
   hCCpi0inFV_stack_10->SetBinContent(12,39.55963);
   hCCpi0inFV_stack_10->SetBinContent(13,44.59883);
   hCCpi0inFV_stack_10->SetBinContent(14,59.66015);
   hCCpi0inFV_stack_10->SetBinContent(15,62.72083);
   hCCpi0inFV_stack_10->SetBinContent(16,84.74303);
   hCCpi0inFV_stack_10->SetBinContent(17,108.3338);
   hCCpi0inFV_stack_10->SetBinContent(18,116.6539);
   hCCpi0inFV_stack_10->SetBinContent(19,156.9548);
   hCCpi0inFV_stack_10->SetBinContent(20,199.2687);
   hCCpi0inFV_stack_10->SetBinContent(21,254.7871);
   hCCpi0inFV_stack_10->SetBinContent(22,330.439);
   hCCpi0inFV_stack_10->SetBinContent(23,475.0284);
   hCCpi0inFV_stack_10->SetBinContent(24,701.1557);
   hCCpi0inFV_stack_10->SetBinContent(25,765.147);
   hCCpi0inFV_stack_10->SetBinError(1,1.471308);
   hCCpi0inFV_stack_10->SetBinError(2,1.374247);
   hCCpi0inFV_stack_10->SetBinError(3,1.511017);
   hCCpi0inFV_stack_10->SetBinError(4,1.883069);
   hCCpi0inFV_stack_10->SetBinError(5,1.683072);
   hCCpi0inFV_stack_10->SetBinError(6,2.008179);
   hCCpi0inFV_stack_10->SetBinError(7,2.010026);
   hCCpi0inFV_stack_10->SetBinError(8,2.48804);
   hCCpi0inFV_stack_10->SetBinError(9,2.287957);
   hCCpi0inFV_stack_10->SetBinError(10,2.848259);
   hCCpi0inFV_stack_10->SetBinError(11,2.822744);
   hCCpi0inFV_stack_10->SetBinError(12,3.174472);
   hCCpi0inFV_stack_10->SetBinError(13,3.39707);
   hCCpi0inFV_stack_10->SetBinError(14,3.849742);
   hCCpi0inFV_stack_10->SetBinError(15,3.948062);
   hCCpi0inFV_stack_10->SetBinError(16,4.602347);
   hCCpi0inFV_stack_10->SetBinError(17,5.409681);
   hCCpi0inFV_stack_10->SetBinError(18,5.452761);
   hCCpi0inFV_stack_10->SetBinError(19,6.267895);
   hCCpi0inFV_stack_10->SetBinError(20,7.100374);
   hCCpi0inFV_stack_10->SetBinError(21,8.052592);
   hCCpi0inFV_stack_10->SetBinError(22,9.176358);
   hCCpi0inFV_stack_10->SetBinError(23,10.96559);
   hCCpi0inFV_stack_10->SetBinError(24,13.28244);
   hCCpi0inFV_stack_10->SetBinError(25,13.90148);
   hCCpi0inFV_stack_10->SetEntries(15285);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(7,0.3917402);
   hNCinFV_stack_11->SetBinContent(8,0.785171);
   hNCinFV_stack_11->SetBinContent(9,0.536893);
   hNCinFV_stack_11->SetBinContent(10,0.536893);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(13,0.536893);
   hNCinFV_stack_11->SetBinContent(14,0.3934307);
   hNCinFV_stack_11->SetBinContent(15,0.6803553);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(18,0.785171);
   hNCinFV_stack_11->SetBinContent(19,1.127039);
   hNCinFV_stack_11->SetBinContent(20,0.7319179);
   hNCinFV_stack_11->SetBinContent(21,1.175221);
   hNCinFV_stack_11->SetBinContent(22,1.858957);
   hNCinFV_stack_11->SetBinContent(23,3.076205);
   hNCinFV_stack_11->SetBinContent(24,4.304679);
   hNCinFV_stack_11->SetBinContent(25,6.055439);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(7,0.2770047);
   hNCinFV_stack_11->SetBinError(8,0.3925882);
   hNCinFV_stack_11->SetBinError(9,0.3929602);
   hNCinFV_stack_11->SetBinError(10,0.3929602);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(13,0.3929602);
   hNCinFV_stack_11->SetBinError(14,0.2781975);
   hNCinFV_stack_11->SetBinError(15,0.4810838);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(18,0.3925882);
   hNCinFV_stack_11->SetBinError(19,0.5201044);
   hNCinFV_stack_11->SetBinError(20,0.438694);
   hNCinFV_stack_11->SetBinError(21,0.4797863);
   hNCinFV_stack_11->SetBinError(22,0.6804124);
   hNCinFV_stack_11->SetBinError(23,0.9213145);
   hNCinFV_stack_11->SetBinError(24,1.020141);
   hNCinFV_stack_11->SetBinError(25,1.256838);
   hNCinFV_stack_11->SetEntries(106);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,8.730722);
   hnumuCCinFV_stack_12->SetBinContent(2,6.007182);
   hnumuCCinFV_stack_12->SetBinContent(3,4.416491);
   hnumuCCinFV_stack_12->SetBinContent(4,6.661452);
   hnumuCCinFV_stack_12->SetBinContent(5,7.990125);
   hnumuCCinFV_stack_12->SetBinContent(6,4.936497);
   hnumuCCinFV_stack_12->SetBinContent(7,6.545805);
   hnumuCCinFV_stack_12->SetBinContent(8,8.132073);
   hnumuCCinFV_stack_12->SetBinContent(9,11.82683);
   hnumuCCinFV_stack_12->SetBinContent(10,7.717775);
   hnumuCCinFV_stack_12->SetBinContent(11,9.689466);
   hnumuCCinFV_stack_12->SetBinContent(12,10.88899);
   hnumuCCinFV_stack_12->SetBinContent(13,15.2488);
   hnumuCCinFV_stack_12->SetBinContent(14,14.48954);
   hnumuCCinFV_stack_12->SetBinContent(15,18.69559);
   hnumuCCinFV_stack_12->SetBinContent(16,23.90642);
   hnumuCCinFV_stack_12->SetBinContent(17,32.49656);
   hnumuCCinFV_stack_12->SetBinContent(18,31.85847);
   hnumuCCinFV_stack_12->SetBinContent(19,35.0623);
   hnumuCCinFV_stack_12->SetBinContent(20,52.18786);
   hnumuCCinFV_stack_12->SetBinContent(21,73.03329);
   hnumuCCinFV_stack_12->SetBinContent(22,85.039);
   hnumuCCinFV_stack_12->SetBinContent(23,109.85);
   hnumuCCinFV_stack_12->SetBinContent(24,158.8027);
   hnumuCCinFV_stack_12->SetBinContent(25,146.7802);
   hnumuCCinFV_stack_12->SetBinError(1,2.045004);
   hnumuCCinFV_stack_12->SetBinError(2,1.254039);
   hnumuCCinFV_stack_12->SetBinError(3,1.125676);
   hnumuCCinFV_stack_12->SetBinError(4,1.375653);
   hnumuCCinFV_stack_12->SetBinError(5,1.768322);
   hnumuCCinFV_stack_12->SetBinError(6,1.190148);
   hnumuCCinFV_stack_12->SetBinError(7,1.302004);
   hnumuCCinFV_stack_12->SetBinError(8,1.560085);
   hnumuCCinFV_stack_12->SetBinError(9,1.834986);
   hnumuCCinFV_stack_12->SetBinError(10,1.390189);
   hnumuCCinFV_stack_12->SetBinError(11,1.604956);
   hnumuCCinFV_stack_12->SetBinError(12,1.81467);
   hnumuCCinFV_stack_12->SetBinError(13,2.046274);
   hnumuCCinFV_stack_12->SetBinError(14,2.098496);
   hnumuCCinFV_stack_12->SetBinError(15,2.24105);
   hnumuCCinFV_stack_12->SetBinError(16,2.564461);
   hnumuCCinFV_stack_12->SetBinError(17,3.136319);
   hnumuCCinFV_stack_12->SetBinError(18,2.889878);
   hnumuCCinFV_stack_12->SetBinError(19,3.058408);
   hnumuCCinFV_stack_12->SetBinError(20,3.699753);
   hnumuCCinFV_stack_12->SetBinError(21,6.371987);
   hnumuCCinFV_stack_12->SetBinError(22,4.762131);
   hnumuCCinFV_stack_12->SetBinError(23,5.889609);
   hnumuCCinFV_stack_12->SetBinError(24,7.358195);
   hnumuCCinFV_stack_12->SetBinError(25,6.657357);
   hnumuCCinFV_stack_12->SetEntries(3654);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.536893);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.536893);
   hnueCCinFV_stack_13->SetBinContent(18,0.6184032);
   hnueCCinFV_stack_13->SetBinContent(19,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(20,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(21,1.599161);
   hnueCCinFV_stack_13->SetBinContent(22,1.127039);
   hnueCCinFV_stack_13->SetBinContent(23,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(24,2.71211);
   hnueCCinFV_stack_13->SetBinContent(25,1.662242);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.3929602);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.4653145);
   hnueCCinFV_stack_13->SetBinError(19,0.5197486);
   hnueCCinFV_stack_13->SetBinError(20,0.3921167);
   hnueCCinFV_stack_13->SetBinError(21,0.7209312);
   hnueCCinFV_stack_13->SetBinError(22,0.5201044);
   hnueCCinFV_stack_13->SetBinError(23,0.340721);
   hnueCCinFV_stack_13->SetBinError(24,0.8055625);
   hnueCCinFV_stack_13->SetBinError(25,0.6513556);
   hnueCCinFV_stack_13->SetEntries(47);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__8->SetBinContent(1,21.66922);
   hmcerror__8->SetBinContent(2,16.64816);
   hmcerror__8->SetBinContent(3,15.20032);
   hmcerror__8->SetBinContent(4,28.11669);
   hmcerror__8->SetBinContent(5,20.97651);
   hmcerror__8->SetBinContent(6,24.62361);
   hmcerror__8->SetBinContent(7,27.7444);
   hmcerror__8->SetBinContent(8,37.71172);
   hmcerror__8->SetBinContent(9,37.79489);
   hmcerror__8->SetBinContent(10,47.67072);
   hmcerror__8->SetBinContent(11,47.76871);
   hmcerror__8->SetBinContent(12,60.74782);
   hmcerror__8->SetBinContent(13,72.4597);
   hmcerror__8->SetBinContent(14,84.34326);
   hmcerror__8->SetBinContent(15,91.25871);
   hmcerror__8->SetBinContent(16,116.4757);
   hmcerror__8->SetBinContent(17,153.2482);
   hmcerror__8->SetBinContent(18,157.2837);
   hmcerror__8->SetBinContent(19,209.8137);
   hmcerror__8->SetBinContent(20,272.7663);
   hmcerror__8->SetBinContent(21,351.2466);
   hmcerror__8->SetBinContent(22,440.7464);
   hmcerror__8->SetBinContent(23,612.7597);
   hmcerror__8->SetBinContent(24,903.4192);
   hmcerror__8->SetBinContent(25,958.5308);
   hmcerror__8->SetBinError(1,5.001884);
   hmcerror__8->SetBinError(2,3.9469);
   hmcerror__8->SetBinError(3,3.923098);
   hmcerror__8->SetBinError(4,6.208692);
   hmcerror__8->SetBinError(5,5.855994);
   hmcerror__8->SetBinError(6,6.325354);
   hmcerror__8->SetBinError(7,7.498805);
   hmcerror__8->SetBinError(8,10.73076);
   hmcerror__8->SetBinError(9,9.951006);
   hmcerror__8->SetBinError(10,13.2296);
   hmcerror__8->SetBinError(11,11.96478);
   hmcerror__8->SetBinError(12,14.89736);
   hmcerror__8->SetBinError(13,18.38771);
   hmcerror__8->SetBinError(14,22.19857);
   hmcerror__8->SetBinError(15,24.83);
   hmcerror__8->SetBinError(16,30.71034);
   hmcerror__8->SetBinError(17,39.33616);
   hmcerror__8->SetBinError(18,44.00897);
   hmcerror__8->SetBinError(19,52.9831);
   hmcerror__8->SetBinError(20,67.26271);
   hmcerror__8->SetBinError(21,84.99753);
   hmcerror__8->SetBinError(22,105.103);
   hmcerror__8->SetBinError(23,145.5807);
   hmcerror__8->SetBinError(24,211.53);
   hmcerror__8->SetBinError(25,207.9614);
   hmcerror__8->SetBinError(26,0.3895343);
   hmcerror__8->SetEntries(4762.881);

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
   
   Double_t _fx3009[25] = {
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
   Double_t _fy3009[25] = {
   10,
   18,
   10,
   19,
   29,
   25,
   28,
   34,
   38,
   53,
   64,
   55,
   67,
   98,
   113,
   119,
   144,
   174,
   219,
   278,
   324,
   420,
   542,
   786,
   785};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   3.34883,
   4.4008,
   3.34883,
   4.5151,
   5.5285,
   5.1474,
   5.4358,
   5.9703,
   6.3013,
   7.4105,
   8.1273,
   7.546,
   8.3119,
   10.0209,
   10.63015,
   10.90871,
   12,
   13.19091,
   14.79865,
   16.67333,
   18,
   20.4939,
   23.28089,
   28.03569,
   28.01785};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   3.1179,
   4.1858,
   3.1179,
   4.3011,
   5.3201,
   4.9374,
   5.2271,
   5.7635,
   6.0955,
   7.2068,
   7.9246,
   7.3425,
   8.1094,
   9.82,
   10.63015,
   10.90871,
   12,
   13.19091,
   14.79865,
   16.67333,
   18,
   20.4939,
   23.28089,
   28.03569,
   28.01785};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(5.986053);
   Graph_Graph3009->SetMaximum(894.7741);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=24.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 122.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3587.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 891.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.7","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_muon_costheta_all");
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
   
   Double_t _fx3010[25] = {
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
   Double_t _fy3010[25] = {
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
   Double_t _felx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.230829,
   0.2370772,
   0.2580931,
   0.2208188,
   0.2791692,
   0.2568817,
   0.2702818,
   0.284547,
   0.2632897,
   0.2775206,
   0.2504731,
   0.2452329,
   0.2537647,
   0.2631932,
   0.2720836,
   0.2636631,
   0.2566827,
   0.2798064,
   0.2525245,
   0.2465946,
   0.2419882,
   0.2384659,
   0.237582,
   0.2341438,
   0.2169585};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   0.230829,
   0.2370772,
   0.2580931,
   0.2208188,
   0.2791692,
   0.2568817,
   0.2702818,
   0.284547,
   0.2632897,
   0.2775206,
   0.2504731,
   0.2452329,
   0.2537647,
   0.2631932,
   0.2720836,
   0.2636631,
   0.2566827,
   0.2798064,
   0.2525245,
   0.2465946,
   0.2419882,
   0.2384659,
   0.237582,
   0.2341438,
   0.2169585};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
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
   Graph_Graph3010->GetXaxis()->SetTitle("Muon cos #theta");
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
   
   Double_t _fx3011[25] = {
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
   Double_t _fy3011[25] = {
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
   Double_t _felx3011[25] = {
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
   Double_t _fely3011[25] = {
   0.230829,
   0.2370772,
   0.2580931,
   0.2208188,
   0.2791692,
   0.2568817,
   0.2702818,
   0.284547,
   0.2632897,
   0.2775206,
   0.2504731,
   0.2452329,
   0.2537647,
   0.2631932,
   0.2720836,
   0.2636631,
   0.2566827,
   0.2798064,
   0.2525245,
   0.2465946,
   0.2419882,
   0.2384659,
   0.237582,
   0.2341438,
   0.2169585};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   0.230829,
   0.2370772,
   0.2580931,
   0.2208188,
   0.2791692,
   0.2568817,
   0.2702818,
   0.284547,
   0.2632897,
   0.2775206,
   0.2504731,
   0.2452329,
   0.2537647,
   0.2631932,
   0.2720836,
   0.2636631,
   0.2566827,
   0.2798064,
   0.2525245,
   0.2465946,
   0.2419882,
   0.2384659,
   0.237582,
   0.2341438,
   0.2169585};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
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
   
   Double_t _fx3012[25] = {
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
   Double_t _fy3012[25] = {
   0.4614842,
   1.0812,
   0.6578809,
   0.6757553,
   1.382499,
   1.015286,
   1.009213,
   0.9015765,
   1.005427,
   1.111794,
   1.339789,
   0.9053823,
   0.9246519,
   1.161919,
   1.238238,
   1.021672,
   0.9396521,
   1.106281,
   1.043783,
   1.019187,
   0.9224289,
   0.952929,
   0.8845229,
   0.870028,
   0.8189617};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   0.1545432,
   0.2643415,
   0.2203131,
   0.1605843,
   0.2635568,
   0.2090433,
   0.1959242,
   0.1583142,
   0.1667236,
   0.1554518,
   0.1701386,
   0.1242184,
   0.1147107,
   0.1188109,
   0.1164836,
   0.09365653,
   0.07830435,
   0.08386698,
   0.07053234,
   0.0611268,
   0.05124605,
   0.04649817,
   0.03799351,
   0.03103287,
   0.02923};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   0.1438861,
   0.2514271,
   0.2051207,
   0.1529732,
   0.2536218,
   0.2005149,
   0.188402,
   0.1528305,
   0.1612784,
   0.1511788,
   0.1658952,
   0.1208685,
   0.111916,
   0.116429,
   0.1164836,
   0.09365653,
   0.07830435,
   0.08386698,
   0.07053234,
   0.0611268,
   0.05124605,
   0.04649817,
   0.03799351,
   0.03103287,
   0.02923};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.174023);
   Graph_Graph3012->SetMaximum(1.769039);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_muon_costheta_all",25,-1,1);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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
