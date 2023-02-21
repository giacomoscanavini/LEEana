#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 10:30:53 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-11.36,1.25641,1256.177);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__16->SetBinContent(1,46.58035);
   hmc__16->SetBinContent(2,37.20445);
   hmc__16->SetBinContent(3,37.64833);
   hmc__16->SetBinContent(4,35.61051);
   hmc__16->SetBinContent(5,33.33068);
   hmc__16->SetBinContent(6,35.1279);
   hmc__16->SetBinContent(7,36.54934);
   hmc__16->SetBinContent(8,29.77679);
   hmc__16->SetBinContent(9,32.13605);
   hmc__16->SetBinContent(10,36.74522);
   hmc__16->SetBinContent(11,46.03345);
   hmc__16->SetBinContent(12,44.40888);
   hmc__16->SetBinContent(13,43.78499);
   hmc__16->SetBinContent(14,61.2307);
   hmc__16->SetBinContent(15,64.26524);
   hmc__16->SetBinContent(16,78.92146);
   hmc__16->SetBinContent(17,94.85912);
   hmc__16->SetBinContent(18,105.1798);
   hmc__16->SetBinContent(19,128.5878);
   hmc__16->SetBinContent(20,166.0932);
   hmc__16->SetBinContent(21,187.107);
   hmc__16->SetBinContent(22,216.3908);
   hmc__16->SetBinContent(23,282.7341);
   hmc__16->SetBinContent(24,377.0134);
   hmc__16->SetBinContent(25,538.576);
   hmc__16->SetBinError(1,21.30959);
   hmc__16->SetBinError(2,12.93686);
   hmc__16->SetBinError(3,15.73232);
   hmc__16->SetBinError(4,26.9375);
   hmc__16->SetBinError(5,13.60303);
   hmc__16->SetBinError(6,13.44428);
   hmc__16->SetBinError(7,17.89742);
   hmc__16->SetBinError(8,13.23192);
   hmc__16->SetBinError(9,12.18458);
   hmc__16->SetBinError(10,14.65995);
   hmc__16->SetBinError(11,14.58147);
   hmc__16->SetBinError(12,16.30635);
   hmc__16->SetBinError(13,16.02866);
   hmc__16->SetBinError(14,18.5417);
   hmc__16->SetBinError(15,21.19392);
   hmc__16->SetBinError(16,27.81789);
   hmc__16->SetBinError(17,29.1368);
   hmc__16->SetBinError(18,34.76849);
   hmc__16->SetBinError(19,35.42606);
   hmc__16->SetBinError(20,50.30416);
   hmc__16->SetBinError(21,60.2003);
   hmc__16->SetBinError(22,70.05794);
   hmc__16->SetBinError(23,69.13295);
   hmc__16->SetBinError(24,93.30229);
   hmc__16->SetBinError(25,139.3133);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-11.36);
   hmc__16->SetMaximum(1192.8);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-1,1);
   hs6_stack_6->SetMinimum(-1.293891e-08);
   hs6_stack_6->SetMaximum(565.5048);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.750881);
   hbadmatch_stack_1->SetBinContent(2,1.024199);
   hbadmatch_stack_1->SetBinContent(3,2.330972);
   hbadmatch_stack_1->SetBinContent(4,1.027414);
   hbadmatch_stack_1->SetBinContent(5,0.3917402);
   hbadmatch_stack_1->SetBinContent(6,1.077772);
   hbadmatch_stack_1->SetBinContent(7,1.412273);
   hbadmatch_stack_1->SetBinContent(8,1.608201);
   hbadmatch_stack_1->SetBinContent(9,1.18954);
   hbadmatch_stack_1->SetBinContent(10,0.627315);
   hbadmatch_stack_1->SetBinContent(11,1.113771);
   hbadmatch_stack_1->SetBinContent(12,1.07891);
   hbadmatch_stack_1->SetBinContent(13,0.3482197);
   hbadmatch_stack_1->SetBinContent(14,3.945302);
   hbadmatch_stack_1->SetBinContent(15,1.982249);
   hbadmatch_stack_1->SetBinContent(16,1.331721);
   hbadmatch_stack_1->SetBinContent(17,2.305868);
   hbadmatch_stack_1->SetBinContent(18,1.828678);
   hbadmatch_stack_1->SetBinContent(19,2.396505);
   hbadmatch_stack_1->SetBinContent(20,5.064237);
   hbadmatch_stack_1->SetBinContent(21,1.832263);
   hbadmatch_stack_1->SetBinContent(22,6.413333);
   hbadmatch_stack_1->SetBinContent(23,4.496086);
   hbadmatch_stack_1->SetBinContent(24,7.262973);
   hbadmatch_stack_1->SetBinContent(25,10.76028);
   hbadmatch_stack_1->SetBinError(1,0.7110849);
   hbadmatch_stack_1->SetBinError(2,0.4597921);
   hbadmatch_stack_1->SetBinError(3,1.716103);
   hbadmatch_stack_1->SetBinError(4,0.4611437);
   hbadmatch_stack_1->SetBinError(5,0.2770047);
   hbadmatch_stack_1->SetBinError(6,0.6240045);
   hbadmatch_stack_1->SetBinError(7,0.6510715);
   hbadmatch_stack_1->SetBinError(8,0.6734231);
   hbadmatch_stack_1->SetBinError(9,0.4974416);
   hbadmatch_stack_1->SetBinError(10,0.3655643);
   hbadmatch_stack_1->SetBinError(11,0.510251);
   hbadmatch_stack_1->SetBinError(12,0.5575642);
   hbadmatch_stack_1->SetBinError(13,0.2829583);
   hbadmatch_stack_1->SetBinError(14,1.805165);
   hbadmatch_stack_1->SetBinError(15,0.7462842);
   hbadmatch_stack_1->SetBinError(16,0.5597718);
   hbadmatch_stack_1->SetBinError(17,0.8494046);
   hbadmatch_stack_1->SetBinError(18,0.7033404);
   hbadmatch_stack_1->SetBinError(19,0.859291);
   hbadmatch_stack_1->SetBinError(20,1.191302);
   hbadmatch_stack_1->SetBinError(21,0.6228045);
   hbadmatch_stack_1->SetBinError(22,1.357434);
   hbadmatch_stack_1->SetBinError(23,1.054765);
   hbadmatch_stack_1->SetBinError(24,1.484772);
   hbadmatch_stack_1->SetBinError(25,1.912364);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,7.732501);
   hext_stack_2->SetBinContent(2,4.517249);
   hext_stack_2->SetBinContent(3,4.214394);
   hext_stack_2->SetBinContent(4,4.110651);
   hext_stack_2->SetBinContent(5,3.241202);
   hext_stack_2->SetBinContent(6,3.076798);
   hext_stack_2->SetBinContent(7,4.863188);
   hext_stack_2->SetBinContent(8,2.192989);
   hext_stack_2->SetBinContent(9,3.17059);
   hext_stack_2->SetBinContent(10,5.561054);
   hext_stack_2->SetBinContent(11,10.35086);
   hext_stack_2->SetBinContent(12,3.819384);
   hext_stack_2->SetBinContent(13,6.082985);
   hext_stack_2->SetBinContent(14,11.49123);
   hext_stack_2->SetBinContent(15,12.34631);
   hext_stack_2->SetBinContent(16,12.21504);
   hext_stack_2->SetBinContent(17,15.90032);
   hext_stack_2->SetBinContent(18,16.98167);
   hext_stack_2->SetBinContent(19,23.68472);
   hext_stack_2->SetBinContent(20,15.21405);
   hext_stack_2->SetBinContent(21,18.76805);
   hext_stack_2->SetBinContent(22,12.40817);
   hext_stack_2->SetBinContent(23,23.23624);
   hext_stack_2->SetBinContent(24,26.77148);
   hext_stack_2->SetBinContent(25,26.3737);
   hext_stack_2->SetBinError(1,2.06648);
   hext_stack_2->SetBinError(2,1.553448);
   hext_stack_2->SetBinError(3,1.305512);
   hext_stack_2->SetBinError(4,1.499292);
   hext_stack_2->SetBinError(5,1.178414);
   hext_stack_2->SetBinError(6,1.126269);
   hext_stack_2->SetBinError(7,1.383773);
   hext_stack_2->SetBinError(8,0.9009267);
   hext_stack_2->SetBinError(9,1.123607);
   hext_stack_2->SetBinError(10,1.689695);
   hext_stack_2->SetBinError(11,2.231603);
   hext_stack_2->SetBinError(12,1.213655);
   hext_stack_2->SetBinError(13,1.552674);
   hext_stack_2->SetBinError(14,2.253798);
   hext_stack_2->SetBinError(15,2.518179);
   hext_stack_2->SetBinError(16,2.356134);
   hext_stack_2->SetBinError(17,2.810907);
   hext_stack_2->SetBinError(18,2.794371);
   hext_stack_2->SetBinError(19,3.351802);
   hext_stack_2->SetBinError(20,2.625811);
   hext_stack_2->SetBinError(21,2.907723);
   hext_stack_2->SetBinError(22,2.206068);
   hext_stack_2->SetBinError(23,3.184067);
   hext_stack_2->SetBinError(24,3.459123);
   hext_stack_2->SetBinError(25,3.474256);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.63311);
   hdirt_stack_3->SetBinContent(2,0.5768807);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,1.49082);
   hdirt_stack_3->SetBinContent(5,0.9574687);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,1.063747);
   hdirt_stack_3->SetBinContent(8,0.5940499);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,1.330383);
   hdirt_stack_3->SetBinContent(11,0.5872014);
   hdirt_stack_3->SetBinContent(12,0.1549346);
   hdirt_stack_3->SetBinContent(13,0.8509132);
   hdirt_stack_3->SetBinContent(14,0.9569958);
   hdirt_stack_3->SetBinContent(15,1.579876);
   hdirt_stack_3->SetBinContent(16,2.173024);
   hdirt_stack_3->SetBinContent(17,1.273736);
   hdirt_stack_3->SetBinContent(18,1.618943);
   hdirt_stack_3->SetBinContent(19,2.204876);
   hdirt_stack_3->SetBinContent(20,1.561708);
   hdirt_stack_3->SetBinContent(21,4.04951);
   hdirt_stack_3->SetBinContent(22,3.905673);
   hdirt_stack_3->SetBinContent(23,1.917984);
   hdirt_stack_3->SetBinContent(24,3.587456);
   hdirt_stack_3->SetBinContent(25,3.943822);
   hdirt_stack_3->SetBinError(1,0.3242013);
   hdirt_stack_3->SetBinError(2,0.2887178);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.6903232);
   hdirt_stack_3->SetBinError(5,0.5679742);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.5451665);
   hdirt_stack_3->SetBinError(8,0.4343456);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.6284736);
   hdirt_stack_3->SetBinError(11,0.3414378);
   hdirt_stack_3->SetBinError(12,0.1549346);
   hdirt_stack_3->SetBinError(13,0.5162367);
   hdirt_stack_3->SetBinError(14,0.4393598);
   hdirt_stack_3->SetBinError(15,0.7045013);
   hdirt_stack_3->SetBinError(16,0.7748584);
   hdirt_stack_3->SetBinError(17,0.591637);
   hdirt_stack_3->SetBinError(18,0.6625633);
   hdirt_stack_3->SetBinError(19,0.7616908);
   hdirt_stack_3->SetBinError(20,0.5749592);
   hdirt_stack_3->SetBinError(21,1.39701);
   hdirt_stack_3->SetBinError(22,1.063638);
   hdirt_stack_3->SetBinError(23,0.6160919);
   hdirt_stack_3->SetBinError(24,1.135713);
   hdirt_stack_3->SetBinError(25,1.05716);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,3.445472);
   houtFV_stack_4->SetBinContent(2,3.402717);
   houtFV_stack_4->SetBinContent(3,4.743437);
   houtFV_stack_4->SetBinContent(4,5.905733);
   houtFV_stack_4->SetBinContent(5,4.264069);
   houtFV_stack_4->SetBinContent(6,5.017306);
   houtFV_stack_4->SetBinContent(7,5.494608);
   houtFV_stack_4->SetBinContent(8,2.669716);
   houtFV_stack_4->SetBinContent(9,6.236416);
   houtFV_stack_4->SetBinContent(10,4.015572);
   houtFV_stack_4->SetBinContent(11,4.505047);
   houtFV_stack_4->SetBinContent(12,6.296583);
   houtFV_stack_4->SetBinContent(13,6.494613);
   houtFV_stack_4->SetBinContent(14,6.628801);
   houtFV_stack_4->SetBinContent(15,7.607533);
   houtFV_stack_4->SetBinContent(16,8.242658);
   houtFV_stack_4->SetBinContent(17,10.40576);
   houtFV_stack_4->SetBinContent(18,12.73417);
   houtFV_stack_4->SetBinContent(19,14.78323);
   houtFV_stack_4->SetBinContent(20,21.21901);
   houtFV_stack_4->SetBinContent(21,22.79507);
   houtFV_stack_4->SetBinContent(22,24.91484);
   houtFV_stack_4->SetBinContent(23,29.4311);
   houtFV_stack_4->SetBinContent(24,29.52667);
   houtFV_stack_4->SetBinContent(25,33.52212);
   houtFV_stack_4->SetBinError(1,1.002743);
   houtFV_stack_4->SetBinError(2,0.8353023);
   houtFV_stack_4->SetBinError(3,1.140288);
   houtFV_stack_4->SetBinError(4,1.226836);
   houtFV_stack_4->SetBinError(5,1.085014);
   houtFV_stack_4->SetBinError(6,1.1374);
   houtFV_stack_4->SetBinError(7,1.140847);
   houtFV_stack_4->SetBinError(8,0.7704761);
   houtFV_stack_4->SetBinError(9,1.23125);
   houtFV_stack_4->SetBinError(10,0.9976703);
   houtFV_stack_4->SetBinError(11,0.9705032);
   houtFV_stack_4->SetBinError(12,1.262822);
   houtFV_stack_4->SetBinError(13,1.293019);
   houtFV_stack_4->SetBinError(14,1.305421);
   houtFV_stack_4->SetBinError(15,1.413512);
   houtFV_stack_4->SetBinError(16,1.454393);
   houtFV_stack_4->SetBinError(17,1.629695);
   houtFV_stack_4->SetBinError(18,1.736925);
   houtFV_stack_4->SetBinError(19,1.916829);
   houtFV_stack_4->SetBinError(20,2.388537);
   houtFV_stack_4->SetBinError(21,2.285547);
   houtFV_stack_4->SetBinError(22,2.630869);
   houtFV_stack_4->SetBinError(23,2.682386);
   houtFV_stack_4->SetBinError(24,2.699948);
   houtFV_stack_4->SetBinError(25,2.881419);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.23386);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.753624);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4862101);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3991064);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4735402);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1565652);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2141979);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4332463);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1769878);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.432802);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2487242);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3731599);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.06912473);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1959304);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.8421998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5477326);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5980548);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.936981);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.643946);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.442674);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,7.841671);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,18.05468);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,51.3581);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.612777);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5863101);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1978219);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.143969);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1822118);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1072945);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.08847444);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2936122);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.0889609);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2160395);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2047515);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2313363);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04959411);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.08778657);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3946496);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2049982);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3223671);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5701366);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6603118);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5459431);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.056895);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.615534);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.692766);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2174293);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1502678);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.06689942);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.0341084);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05458213);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.07270736);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4238165);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.007666246);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05367815);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1085062);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1506017);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4269459);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1207924);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.122069);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.923178);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.862198);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.175147);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1232877);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1247671);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04473242);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02419538);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04066776);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05141187);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1874302);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.007666246);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04027067);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.07185118);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05473476);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1569389);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.05926301);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3885563);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3436606);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2442329);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3219598);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,15.08704);
   hNCpi0inFVres_stack_7->SetBinContent(2,10.58159);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.31944);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.76445);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.36956);
   hNCpi0inFVres_stack_7->SetBinContent(6,13.35044);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.54193);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.19625);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.45868);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.0772);
   hNCpi0inFVres_stack_7->SetBinContent(11,14.52506);
   hNCpi0inFVres_stack_7->SetBinContent(12,18.74611);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.37288);
   hNCpi0inFVres_stack_7->SetBinContent(14,21.67874);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.2543);
   hNCpi0inFVres_stack_7->SetBinContent(16,29.22569);
   hNCpi0inFVres_stack_7->SetBinContent(17,37.34008);
   hNCpi0inFVres_stack_7->SetBinContent(18,41.33087);
   hNCpi0inFVres_stack_7->SetBinContent(19,47.48368);
   hNCpi0inFVres_stack_7->SetBinContent(20,63.88692);
   hNCpi0inFVres_stack_7->SetBinContent(21,78.38538);
   hNCpi0inFVres_stack_7->SetBinContent(22,88.36543);
   hNCpi0inFVres_stack_7->SetBinContent(23,109.8397);
   hNCpi0inFVres_stack_7->SetBinContent(24,144.6635);
   hNCpi0inFVres_stack_7->SetBinContent(25,177.9543);
   hNCpi0inFVres_stack_7->SetBinError(1,1.32288);
   hNCpi0inFVres_stack_7->SetBinError(2,1.105502);
   hNCpi0inFVres_stack_7->SetBinError(3,1.19719);
   hNCpi0inFVres_stack_7->SetBinError(4,1.207616);
   hNCpi0inFVres_stack_7->SetBinError(5,1.250276);
   hNCpi0inFVres_stack_7->SetBinError(6,1.354101);
   hNCpi0inFVres_stack_7->SetBinError(7,1.124889);
   hNCpi0inFVres_stack_7->SetBinError(8,1.107319);
   hNCpi0inFVres_stack_7->SetBinError(9,1.230805);
   hNCpi0inFVres_stack_7->SetBinError(10,1.15942);
   hNCpi0inFVres_stack_7->SetBinError(11,1.265127);
   hNCpi0inFVres_stack_7->SetBinError(12,1.504299);
   hNCpi0inFVres_stack_7->SetBinError(13,1.359449);
   hNCpi0inFVres_stack_7->SetBinError(14,1.59905);
   hNCpi0inFVres_stack_7->SetBinError(15,1.638542);
   hNCpi0inFVres_stack_7->SetBinError(16,1.883385);
   hNCpi0inFVres_stack_7->SetBinError(17,2.248485);
   hNCpi0inFVres_stack_7->SetBinError(18,2.174888);
   hNCpi0inFVres_stack_7->SetBinError(19,2.453686);
   hNCpi0inFVres_stack_7->SetBinError(20,2.819004);
   hNCpi0inFVres_stack_7->SetBinError(21,3.037332);
   hNCpi0inFVres_stack_7->SetBinError(22,3.178082);
   hNCpi0inFVres_stack_7->SetBinError(23,3.597639);
   hNCpi0inFVres_stack_7->SetBinError(24,4.135091);
   hNCpi0inFVres_stack_7->SetBinError(25,4.63044);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.325797);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.194985);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.41255);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.109876);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.128711);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.700014);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.017717);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.082732);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.355862);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.407748);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.525484);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.386638);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.825735);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.5622);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.050553);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.021536);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.157904);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.810288);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.186002);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.22121);
   hNCpi0inFVdis_stack_8->SetBinContent(21,12.93919);
   hNCpi0inFVdis_stack_8->SetBinContent(22,18.08749);
   hNCpi0inFVdis_stack_8->SetBinContent(23,22.23718);
   hNCpi0inFVdis_stack_8->SetBinContent(24,32.63991);
   hNCpi0inFVdis_stack_8->SetBinContent(25,50.37484);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6536007);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8086298);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4886567);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4648302);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8180227);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3899438);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.205428);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4658922);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.610298);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5531677);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5293285);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4699993);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4261934);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.664682);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5619073);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7221599);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6155831);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.70868);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.005929);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.152755);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.215761);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.522022);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.550415);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.9707);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.501053);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05931247);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04465501);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1290437);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,5.961849);
   hCCpi0inFV_stack_10->SetBinContent(2,4.938402);
   hCCpi0inFV_stack_10->SetBinContent(3,5.904631);
   hCCpi0inFV_stack_10->SetBinContent(4,3.66128);
   hCCpi0inFV_stack_10->SetBinContent(5,3.374355);
   hCCpi0inFV_stack_10->SetBinContent(6,5.478209);
   hCCpi0inFV_stack_10->SetBinContent(7,5.621671);
   hCCpi0inFV_stack_10->SetBinContent(8,5.071053);
   hCCpi0inFV_stack_10->SetBinContent(9,2.784209);
   hCCpi0inFV_stack_10->SetBinContent(10,4.756265);
   hCCpi0inFV_stack_10->SetBinContent(11,4.547885);
   hCCpi0inFV_stack_10->SetBinContent(12,5.233312);
   hCCpi0inFV_stack_10->SetBinContent(13,6.943735);
   hCCpi0inFV_stack_10->SetBinContent(14,7.090579);
   hCCpi0inFV_stack_10->SetBinContent(15,7.037326);
   hCCpi0inFV_stack_10->SetBinContent(16,10.20543);
   hCCpi0inFV_stack_10->SetBinContent(17,12.60913);
   hCCpi0inFV_stack_10->SetBinContent(18,10.75186);
   hCCpi0inFV_stack_10->SetBinContent(19,14.96931);
   hCCpi0inFV_stack_10->SetBinContent(20,21.60897);
   hCCpi0inFV_stack_10->SetBinContent(21,26.65751);
   hCCpi0inFV_stack_10->SetBinContent(22,30.73782);
   hCCpi0inFV_stack_10->SetBinContent(23,43.96024);
   hCCpi0inFV_stack_10->SetBinContent(24,59.41116);
   hCCpi0inFV_stack_10->SetBinContent(25,82.82059);
   hCCpi0inFV_stack_10->SetBinError(1,1.209531);
   hCCpi0inFV_stack_10->SetBinError(2,1.084573);
   hCCpi0inFV_stack_10->SetBinError(3,1.166864);
   hCCpi0inFV_stack_10->SetBinError(4,0.9812871);
   hCCpi0inFV_stack_10->SetBinError(5,0.8993757);
   hCCpi0inFV_stack_10->SetBinError(6,1.127041);
   hCCpi0inFV_stack_10->SetBinError(7,1.160709);
   hCCpi0inFV_stack_10->SetBinError(8,1.117199);
   hCCpi0inFV_stack_10->SetBinError(9,0.8323376);
   hCCpi0inFV_stack_10->SetBinError(10,1.168566);
   hCCpi0inFV_stack_10->SetBinError(11,1.019024);
   hCCpi0inFV_stack_10->SetBinError(12,1.127758);
   hCCpi0inFV_stack_10->SetBinError(13,1.286774);
   hCCpi0inFV_stack_10->SetBinError(14,1.316866);
   hCCpi0inFV_stack_10->SetBinError(15,1.331339);
   hCCpi0inFV_stack_10->SetBinError(16,1.654478);
   hCCpi0inFV_stack_10->SetBinError(17,1.777459);
   hCCpi0inFV_stack_10->SetBinError(18,1.642273);
   hCCpi0inFV_stack_10->SetBinError(19,1.925366);
   hCCpi0inFV_stack_10->SetBinError(20,2.336538);
   hCCpi0inFV_stack_10->SetBinError(21,2.637011);
   hCCpi0inFV_stack_10->SetBinError(22,2.769429);
   hCCpi0inFV_stack_10->SetBinError(23,3.330428);
   hCCpi0inFV_stack_10->SetBinError(24,3.870863);
   hCCpi0inFV_stack_10->SetBinError(25,4.502527);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.075291);
   hNCinFV_stack_11->SetBinContent(2,2.94837);
   hNCinFV_stack_11->SetBinContent(3,3.204158);
   hNCinFV_stack_11->SetBinContent(4,2.373314);
   hNCinFV_stack_11->SetBinContent(5,1.984371);
   hNCinFV_stack_11->SetBinContent(6,2.933803);
   hNCinFV_stack_11->SetBinContent(7,2.093331);
   hNCinFV_stack_11->SetBinContent(8,1.440713);
   hNCinFV_stack_11->SetBinContent(9,2.462357);
   hNCinFV_stack_11->SetBinContent(10,0.7223312);
   hNCinFV_stack_11->SetBinContent(11,3.37361);
   hNCinFV_stack_11->SetBinContent(12,1.924435);
   hNCinFV_stack_11->SetBinContent(13,2.714715);
   hNCinFV_stack_11->SetBinContent(14,4.119131);
   hNCinFV_stack_11->SetBinContent(15,3.377252);
   hNCinFV_stack_11->SetBinContent(16,3.669268);
   hNCinFV_stack_11->SetBinContent(17,4.041821);
   hNCinFV_stack_11->SetBinContent(18,5.927592);
   hNCinFV_stack_11->SetBinContent(19,6.476596);
   hNCinFV_stack_11->SetBinContent(20,11.74417);
   hNCinFV_stack_11->SetBinContent(21,8.573445);
   hNCinFV_stack_11->SetBinContent(22,13.52902);
   hNCinFV_stack_11->SetBinContent(23,19.94449);
   hNCinFV_stack_11->SetBinContent(24,31.41385);
   hNCinFV_stack_11->SetBinContent(25,53.3294);
   hNCinFV_stack_11->SetBinError(1,0.8445026);
   hNCinFV_stack_11->SetBinError(2,0.8539586);
   hNCinFV_stack_11->SetBinError(3,0.9835023);
   hNCinFV_stack_11->SetBinError(4,0.8312028);
   hNCinFV_stack_11->SetBinError(5,0.753049);
   hNCinFV_stack_11->SetBinError(6,0.8571008);
   hNCinFV_stack_11->SetBinError(7,0.6505502);
   hNCinFV_stack_11->SetBinError(8,0.6135996);
   hNCinFV_stack_11->SetBinError(9,1.003805);
   hNCinFV_stack_11->SetBinError(10,0.3661254);
   hNCinFV_stack_11->SetBinError(11,0.9633056);
   hNCinFV_stack_11->SetBinError(12,0.7280003);
   hNCinFV_stack_11->SetBinError(13,0.8191437);
   hNCinFV_stack_11->SetBinError(14,1.106832);
   hNCinFV_stack_11->SetBinError(15,0.8413406);
   hNCinFV_stack_11->SetBinError(16,0.9799776);
   hNCinFV_stack_11->SetBinError(17,0.9526537);
   hNCinFV_stack_11->SetBinError(18,1.192239);
   hNCinFV_stack_11->SetBinError(19,1.371196);
   hNCinFV_stack_11->SetBinError(20,1.746984);
   hNCinFV_stack_11->SetBinError(21,1.41779);
   hNCinFV_stack_11->SetBinError(22,1.956872);
   hNCinFV_stack_11->SetBinError(23,2.339783);
   hNCinFV_stack_11->SetBinError(24,3.062703);
   hNCinFV_stack_11->SetBinError(25,4.029675);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.258085);
   hnumuCCinFV_stack_12->SetBinContent(2,3.24253);
   hnumuCCinFV_stack_12->SetBinContent(3,1.873849);
   hnumuCCinFV_stack_12->SetBinContent(4,1.736489);
   hnumuCCinFV_stack_12->SetBinContent(5,1.713804);
   hnumuCCinFV_stack_12->SetBinContent(6,2.181761);
   hnumuCCinFV_stack_12->SetBinContent(7,2.794991);
   hnumuCCinFV_stack_12->SetBinContent(8,2.487839);
   hnumuCCinFV_stack_12->SetBinContent(9,0.7810287);
   hnumuCCinFV_stack_12->SetBinContent(10,3.780436);
   hnumuCCinFV_stack_12->SetBinContent(11,3.214045);
   hnumuCCinFV_stack_12->SetBinContent(12,4.145809);
   hnumuCCinFV_stack_12->SetBinContent(13,1.75665);
   hnumuCCinFV_stack_12->SetBinContent(14,2.004481);
   hnumuCCinFV_stack_12->SetBinContent(15,2.581118);
   hnumuCCinFV_stack_12->SetBinContent(16,6.142039);
   hnumuCCinFV_stack_12->SetBinContent(17,5.702756);
   hnumuCCinFV_stack_12->SetBinContent(18,5.865824);
   hnumuCCinFV_stack_12->SetBinContent(19,7.051826);
   hnumuCCinFV_stack_12->SetBinContent(20,12.17344);
   hnumuCCinFV_stack_12->SetBinContent(21,9.160385);
   hnumuCCinFV_stack_12->SetBinContent(22,12.59099);
   hnumuCCinFV_stack_12->SetBinContent(23,16.24934);
   hnumuCCinFV_stack_12->SetBinContent(24,21.1407);
   hnumuCCinFV_stack_12->SetBinContent(25,36.38699);
   hnumuCCinFV_stack_12->SetBinError(1,0.7118393);
   hnumuCCinFV_stack_12->SetBinError(2,0.9512961);
   hnumuCCinFV_stack_12->SetBinError(3,0.7236882);
   hnumuCCinFV_stack_12->SetBinError(4,0.677676);
   hnumuCCinFV_stack_12->SetBinError(5,0.6207051);
   hnumuCCinFV_stack_12->SetBinError(6,0.7424359);
   hnumuCCinFV_stack_12->SetBinError(7,1.176181);
   hnumuCCinFV_stack_12->SetBinError(8,1.221675);
   hnumuCCinFV_stack_12->SetBinError(9,0.462623);
   hnumuCCinFV_stack_12->SetBinError(10,1.8264);
   hnumuCCinFV_stack_12->SetBinError(11,0.8804558);
   hnumuCCinFV_stack_12->SetBinError(12,1.226991);
   hnumuCCinFV_stack_12->SetBinError(13,0.7017004);
   hnumuCCinFV_stack_12->SetBinError(14,0.7343955);
   hnumuCCinFV_stack_12->SetBinError(15,0.8588887);
   hnumuCCinFV_stack_12->SetBinError(16,1.357988);
   hnumuCCinFV_stack_12->SetBinError(17,1.44128);
   hnumuCCinFV_stack_12->SetBinError(18,1.284641);
   hnumuCCinFV_stack_12->SetBinError(19,1.377756);
   hnumuCCinFV_stack_12->SetBinError(20,2.966787);
   hnumuCCinFV_stack_12->SetBinError(21,1.605012);
   hnumuCCinFV_stack_12->SetBinError(22,1.865978);
   hnumuCCinFV_stack_12->SetBinError(23,2.056027);
   hnumuCCinFV_stack_12->SetBinError(24,2.352466);
   hnumuCCinFV_stack_12->SetBinError(25,3.102367);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.057646);
   hnueCCinFV_stack_13->SetBinContent(2,0.8064713);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(5,1.416171);
   hnueCCinFV_stack_13->SetBinContent(7,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(11,1.031049);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(17,0.2542474);
   hnueCCinFV_stack_13->SetBinContent(18,2.673714);
   hnueCCinFV_stack_13->SetBinContent(19,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(20,1.035547);
   hnueCCinFV_stack_13->SetBinContent(21,1.181475);
   hnueCCinFV_stack_13->SetBinContent(22,0.8733139);
   hnueCCinFV_stack_13->SetBinContent(23,2.620772);
   hnueCCinFV_stack_13->SetBinContent(24,1.619465);
   hnueCCinFV_stack_13->SetBinContent(25,10.44772);
   hnueCCinFV_stack_13->SetBinError(1,0.6523817);
   hnueCCinFV_stack_13->SetBinError(2,0.4036823);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(5,1.128487);
   hnueCCinFV_stack_13->SetBinError(7,0.4316896);
   hnueCCinFV_stack_13->SetBinError(11,0.5334159);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.2451269);
   hnueCCinFV_stack_13->SetBinError(16,0.2998007);
   hnueCCinFV_stack_13->SetBinError(17,0.2542474);
   hnueCCinFV_stack_13->SetBinError(18,1.431139);
   hnueCCinFV_stack_13->SetBinError(19,0.3387718);
   hnueCCinFV_stack_13->SetBinError(20,0.6257405);
   hnueCCinFV_stack_13->SetBinError(21,0.6355789);
   hnueCCinFV_stack_13->SetBinError(22,0.5237584);
   hnueCCinFV_stack_13->SetBinError(23,0.9808651);
   hnueCCinFV_stack_13->SetBinError(24,0.5742989);
   hnueCCinFV_stack_13->SetBinError(25,2.373998);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__17->SetBinContent(1,46.58035);
   hmcerror__17->SetBinContent(2,37.20445);
   hmcerror__17->SetBinContent(3,37.64833);
   hmcerror__17->SetBinContent(4,35.61051);
   hmcerror__17->SetBinContent(5,33.33068);
   hmcerror__17->SetBinContent(6,35.1279);
   hmcerror__17->SetBinContent(7,36.54934);
   hmcerror__17->SetBinContent(8,29.77679);
   hmcerror__17->SetBinContent(9,32.13605);
   hmcerror__17->SetBinContent(10,36.74522);
   hmcerror__17->SetBinContent(11,46.03345);
   hmcerror__17->SetBinContent(12,44.40888);
   hmcerror__17->SetBinContent(13,43.78499);
   hmcerror__17->SetBinContent(14,61.2307);
   hmcerror__17->SetBinContent(15,64.26524);
   hmcerror__17->SetBinContent(16,78.92146);
   hmcerror__17->SetBinContent(17,94.85912);
   hmcerror__17->SetBinContent(18,105.1798);
   hmcerror__17->SetBinContent(19,128.5878);
   hmcerror__17->SetBinContent(20,166.0932);
   hmcerror__17->SetBinContent(21,187.107);
   hmcerror__17->SetBinContent(22,216.3908);
   hmcerror__17->SetBinContent(23,282.7341);
   hmcerror__17->SetBinContent(24,377.0134);
   hmcerror__17->SetBinContent(25,538.576);
   hmcerror__17->SetBinError(1,21.30959);
   hmcerror__17->SetBinError(2,12.93686);
   hmcerror__17->SetBinError(3,15.73232);
   hmcerror__17->SetBinError(4,26.9375);
   hmcerror__17->SetBinError(5,13.60303);
   hmcerror__17->SetBinError(6,13.44428);
   hmcerror__17->SetBinError(7,17.89742);
   hmcerror__17->SetBinError(8,13.23192);
   hmcerror__17->SetBinError(9,12.18458);
   hmcerror__17->SetBinError(10,14.65995);
   hmcerror__17->SetBinError(11,14.58147);
   hmcerror__17->SetBinError(12,16.30635);
   hmcerror__17->SetBinError(13,16.02866);
   hmcerror__17->SetBinError(14,18.5417);
   hmcerror__17->SetBinError(15,21.19392);
   hmcerror__17->SetBinError(16,27.81789);
   hmcerror__17->SetBinError(17,29.1368);
   hmcerror__17->SetBinError(18,34.76849);
   hmcerror__17->SetBinError(19,35.42606);
   hmcerror__17->SetBinError(20,50.30416);
   hmcerror__17->SetBinError(21,60.2003);
   hmcerror__17->SetBinError(22,70.05794);
   hmcerror__17->SetBinError(23,69.13295);
   hmcerror__17->SetBinError(24,93.30229);
   hmcerror__17->SetBinError(25,139.3133);
   hmcerror__17->SetBinError(26,0.3895343);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   48,
   45,
   40,
   39,
   33,
   37,
   37,
   43,
   45,
   56,
   47,
   44,
   51,
   48,
   64,
   78,
   112,
   102,
   119,
   173,
   188,
   237,
   275,
   409,
   568};
   Double_t _felx3021[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fely3021[25] = {
   7.0604,
   6.8416,
   6.4604,
   6.3813,
   5.8847,
   6.2203,
   6.2203,
   6.6917,
   6.8416,
   7.6127,
   6.9882,
   6.7671,
   7.2725,
   7.0604,
   8.1273,
   8.9562,
   10.58301,
   10.0995,
   10.90871,
   13.15295,
   13.71131,
   15.3948,
   16.58312,
   20.22375,
   23.83275};
   Double_t _fehx3021[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fehy3021[25] = {
   6.8561,
   6.637,
   6.2549,
   6.1757,
   5.6776,
   6.0141,
   6.0141,
   6.4868,
   6.637,
   7.4094,
   6.7839,
   6.5623,
   7.0686,
   6.8561,
   7.9246,
   8.7542,
   10.58301,
   10.0995,
   10.90871,
   13.15295,
   13.71131,
   15.3948,
   16.58312,
   20.22375,
   23.83275};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(24.40377);
   Graph_Graph3021->SetMaximum(648.3045);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
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
   Double_t _felx3022[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fely3022[25] = {
   0.4574803,
   0.3477234,
   0.4178758,
   0.7564481,
   0.4081234,
   0.3827237,
   0.4896784,
   0.4443703,
   0.3791561,
   0.3989621,
   0.3167581,
   0.3671867,
   0.3660767,
   0.3028171,
   0.3297882,
   0.3524756,
   0.3071587,
   0.3305623,
   0.2755009,
   0.3028671,
   0.3217427,
   0.3237566,
   0.2445158,
   0.2474774,
   0.2586698};
   Double_t _fehx3022[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fehy3022[25] = {
   0.4574803,
   0.3477234,
   0.4178758,
   0.7564481,
   0.4081234,
   0.3827237,
   0.4896784,
   0.4443703,
   0.3791561,
   0.3989621,
   0.3167581,
   0.3671867,
   0.3660767,
   0.3028171,
   0.3297882,
   0.3524756,
   0.3071587,
   0.3305623,
   0.2755009,
   0.3028671,
   0.3217427,
   0.3237566,
   0.2445158,
   0.2474774,
   0.2586698};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[25] = {
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
   Double_t _fy3023[25] = {
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
   Double_t _felx3023[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fely3023[25] = {
   0.2278199,
   0.219329,
   0.2316037,
   0.2232419,
   0.2421262,
   0.2326495,
   0.2521345,
   0.2542718,
   0.2396643,
   0.2387195,
   0.2052147,
   0.2441295,
   0.2445575,
   0.2155542,
   0.2361231,
   0.237212,
   0.2384286,
   0.2554286,
   0.2413484,
   0.2424927,
   0.2478882,
   0.2425754,
   0.2223679,
   0.2221069,
   0.2301849};
   Double_t _fehx3023[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fehy3023[25] = {
   0.2278199,
   0.219329,
   0.2316037,
   0.2232419,
   0.2421262,
   0.2326495,
   0.2521345,
   0.2542718,
   0.2396643,
   0.2387195,
   0.2052147,
   0.2441295,
   0.2445575,
   0.2155542,
   0.2361231,
   0.237212,
   0.2384286,
   0.2554286,
   0.2413484,
   0.2424927,
   0.2478882,
   0.2425754,
   0.2223679,
   0.2221069,
   0.2301849};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[25] = {
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
   Double_t _fy3024[25] = {
   1.030477,
   1.209533,
   1.062464,
   1.095182,
   0.9900787,
   1.053294,
   1.01233,
   1.444078,
   1.400297,
   1.524008,
   1.020997,
   0.9907928,
   1.164783,
   0.7839205,
   0.9958727,
   0.9883244,
   1.180698,
   0.9697676,
   0.9254374,
   1.041584,
   1.004773,
   1.095241,
   0.9726452,
   1.084842,
   1.054633};
   Double_t _felx3024[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fely3024[25] = {
   0.1515746,
   0.183892,
   0.1715986,
   0.1791971,
   0.176555,
   0.1770758,
   0.1701891,
   0.2247287,
   0.2128949,
   0.2071752,
   0.151807,
   0.1523817,
   0.1660957,
   0.1153082,
   0.1264649,
   0.1134824,
   0.1115655,
   0.0960213,
   0.08483471,
   0.07919016,
   0.07328058,
   0.07114352,
   0.05865271,
   0.05364199,
   0.04425142};
   Double_t _fehx3024[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
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
   Double_t _fehy3024[25] = {
   0.1471887,
   0.1783926,
   0.1661402,
   0.1734235,
   0.1703415,
   0.1712058,
   0.1645474,
   0.2178475,
   0.2065282,
   0.2016426,
   0.1473689,
   0.14777,
   0.1614389,
   0.1119716,
   0.1233108,
   0.1109229,
   0.1115655,
   0.0960213,
   0.08483471,
   0.07919016,
   0.07328058,
   0.07114352,
   0.05865271,
   0.05364199,
   0.04425142};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.5629085);
   Graph_Graph3024->SetMaximum(1.831354);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
