#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 19:43:29 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",216,172,1200,900);
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
   pad1->Range(-46.15385,-9,338.4615,995.2105);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__16->SetBinContent(1,240.3696);
   hmc__16->SetBinContent(2,360.7772);
   hmc__16->SetBinContent(3,372.6547);
   hmc__16->SetBinContent(4,341.6734);
   hmc__16->SetBinContent(5,311.7442);
   hmc__16->SetBinContent(6,246.1043);
   hmc__16->SetBinContent(7,215.0987);
   hmc__16->SetBinContent(8,172.0372);
   hmc__16->SetBinContent(9,129.5354);
   hmc__16->SetBinContent(10,96.5712);
   hmc__16->SetBinContent(11,71.29181);
   hmc__16->SetBinContent(12,54.42192);
   hmc__16->SetBinContent(13,45.83022);
   hmc__16->SetBinContent(14,33.94028);
   hmc__16->SetBinContent(15,21.98436);
   hmc__16->SetBinContent(16,18.13403);
   hmc__16->SetBinContent(17,10.993);
   hmc__16->SetBinContent(18,8.054989);
   hmc__16->SetBinContent(19,12.44241);
   hmc__16->SetBinContent(20,6.675557);
   hmc__16->SetBinContent(21,25.56085);
   hmc__16->SetBinError(1,69.61278);
   hmc__16->SetBinError(2,82.75781);
   hmc__16->SetBinError(3,86.46929);
   hmc__16->SetBinError(4,81.24795);
   hmc__16->SetBinError(5,71.85735);
   hmc__16->SetBinError(6,67.93465);
   hmc__16->SetBinError(7,57.28594);
   hmc__16->SetBinError(8,48.17529);
   hmc__16->SetBinError(9,37.82438);
   hmc__16->SetBinError(10,30.84034);
   hmc__16->SetBinError(11,23.69618);
   hmc__16->SetBinError(12,20.97917);
   hmc__16->SetBinError(13,18.89853);
   hmc__16->SetBinError(14,16.75316);
   hmc__16->SetBinError(15,12.02614);
   hmc__16->SetBinError(16,9.825295);
   hmc__16->SetBinError(17,6.837815);
   hmc__16->SetBinError(18,5.707183);
   hmc__16->SetBinError(19,13.51046);
   hmc__16->SetBinError(20,6.567259);
   hmc__16->SetBinError(21,14.85864);
   hmc__16->SetMinimum(-9);
   hmc__16->SetMaximum(945);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,0,300);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(391.2874);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,4.891501);
   hbadmatch_stack_1->SetBinContent(2,10.4743);
   hbadmatch_stack_1->SetBinContent(3,9.869577);
   hbadmatch_stack_1->SetBinContent(4,8.041399);
   hbadmatch_stack_1->SetBinContent(5,7.290432);
   hbadmatch_stack_1->SetBinContent(6,8.001832);
   hbadmatch_stack_1->SetBinContent(7,5.528864);
   hbadmatch_stack_1->SetBinContent(8,3.629449);
   hbadmatch_stack_1->SetBinContent(9,2.560623);
   hbadmatch_stack_1->SetBinContent(10,0.8430728);
   hbadmatch_stack_1->SetBinContent(11,0.5901461);
   hbadmatch_stack_1->SetBinContent(12,0.7174687);
   hbadmatch_stack_1->SetBinContent(13,0.6309291);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.2294008);
   hbadmatch_stack_1->SetBinContent(16,0.1226318);
   hbadmatch_stack_1->SetBinContent(17,0.2245778);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.5610657);
   hbadmatch_stack_1->SetBinError(1,1.175335);
   hbadmatch_stack_1->SetBinError(2,1.700532);
   hbadmatch_stack_1->SetBinError(3,2.284797);
   hbadmatch_stack_1->SetBinError(4,1.588403);
   hbadmatch_stack_1->SetBinError(5,1.411469);
   hbadmatch_stack_1->SetBinError(6,1.49217);
   hbadmatch_stack_1->SetBinError(7,1.217952);
   hbadmatch_stack_1->SetBinError(8,0.9952171);
   hbadmatch_stack_1->SetBinError(9,1.71735);
   hbadmatch_stack_1->SetBinError(10,0.5969329);
   hbadmatch_stack_1->SetBinError(11,0.340721);
   hbadmatch_stack_1->SetBinError(12,0.4275871);
   hbadmatch_stack_1->SetBinError(13,0.3659822);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.2294008);
   hbadmatch_stack_1->SetBinError(16,0.1226318);
   hbadmatch_stack_1->SetBinError(17,0.2245778);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.5610657);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,34.35116);
   hext_stack_2->SetBinContent(2,50.76624);
   hext_stack_2->SetBinContent(3,51.19601);
   hext_stack_2->SetBinContent(4,40.84515);
   hext_stack_2->SetBinContent(5,35.69788);
   hext_stack_2->SetBinContent(6,13.39295);
   hext_stack_2->SetBinContent(7,14.6993);
   hext_stack_2->SetBinContent(8,17.36232);
   hext_stack_2->SetBinContent(9,6.000783);
   hext_stack_2->SetBinContent(10,2.420823);
   hext_stack_2->SetBinContent(11,3.469036);
   hext_stack_2->SetBinContent(12,3.412785);
   hext_stack_2->SetBinContent(13,2.517386);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.4065989);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinError(1,4.006197);
   hext_stack_2->SetBinError(2,4.86906);
   hext_stack_2->SetBinError(3,4.872465);
   hext_stack_2->SetBinError(4,4.331381);
   hext_stack_2->SetBinError(5,3.983706);
   hext_stack_2->SetBinError(6,2.261937);
   hext_stack_2->SetBinError(7,2.671694);
   hext_stack_2->SetBinError(8,2.905566);
   hext_stack_2->SetBinError(9,1.533202);
   hext_stack_2->SetBinError(10,1.122148);
   hext_stack_2->SetBinError(11,1.355067);
   hext_stack_2->SetBinError(12,1.14352);
   hext_stack_2->SetBinError(13,0.9575503);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.4065989);
   hext_stack_2->SetBinError(19,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,2.612676);
   hdirt_stack_3->SetBinContent(2,8.319268);
   hdirt_stack_3->SetBinContent(3,7.195449);
   hdirt_stack_3->SetBinContent(4,6.136589);
   hdirt_stack_3->SetBinContent(5,5.053195);
   hdirt_stack_3->SetBinContent(6,2.060779);
   hdirt_stack_3->SetBinContent(7,1.925721);
   hdirt_stack_3->SetBinContent(8,2.557208);
   hdirt_stack_3->SetBinContent(9,1.590018);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinError(1,0.8328942);
   hdirt_stack_3->SetBinError(2,1.528506);
   hdirt_stack_3->SetBinError(3,1.316487);
   hdirt_stack_3->SetBinError(4,1.313062);
   hdirt_stack_3->SetBinError(5,1.212385);
   hdirt_stack_3->SetBinError(6,0.7962167);
   hdirt_stack_3->SetBinError(7,0.7804243);
   hdirt_stack_3->SetBinError(8,1.248369);
   hdirt_stack_3->SetBinError(9,0.687186);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,25.72677);
   houtFV_stack_4->SetBinContent(2,43.4614);
   houtFV_stack_4->SetBinContent(3,50.1214);
   houtFV_stack_4->SetBinContent(4,39.20187);
   houtFV_stack_4->SetBinContent(5,36.31709);
   houtFV_stack_4->SetBinContent(6,30.64904);
   houtFV_stack_4->SetBinContent(7,17.35406);
   houtFV_stack_4->SetBinContent(8,12.45767);
   houtFV_stack_4->SetBinContent(9,7.112318);
   houtFV_stack_4->SetBinContent(10,5.714419);
   houtFV_stack_4->SetBinContent(11,5.298384);
   houtFV_stack_4->SetBinContent(12,2.991738);
   houtFV_stack_4->SetBinContent(13,2.870032);
   houtFV_stack_4->SetBinContent(14,1.48069);
   houtFV_stack_4->SetBinContent(15,0.8721297);
   houtFV_stack_4->SetBinContent(16,0.9964614);
   houtFV_stack_4->SetBinContent(17,0.7481259);
   houtFV_stack_4->SetBinContent(19,0.5352025);
   houtFV_stack_4->SetBinContent(21,0.3934307);
   houtFV_stack_4->SetBinError(1,2.5723);
   houtFV_stack_4->SetBinError(2,3.308339);
   houtFV_stack_4->SetBinError(3,3.534262);
   houtFV_stack_4->SetBinError(4,3.148435);
   houtFV_stack_4->SetBinError(5,3.07958);
   houtFV_stack_4->SetBinError(6,2.709719);
   houtFV_stack_4->SetBinError(7,2.097988);
   houtFV_stack_4->SetBinError(8,1.723666);
   houtFV_stack_4->SetBinError(9,1.328665);
   houtFV_stack_4->SetBinError(10,1.180256);
   houtFV_stack_4->SetBinError(11,1.166202);
   houtFV_stack_4->SetBinError(12,0.8480557);
   houtFV_stack_4->SetBinError(13,0.8685626);
   houtFV_stack_4->SetBinError(14,0.561791);
   houtFV_stack_4->SetBinError(15,0.4820024);
   houtFV_stack_4->SetBinError(16,0.5120609);
   houtFV_stack_4->SetBinError(17,0.4461357);
   houtFV_stack_4->SetBinError(19,0.3921167);
   houtFV_stack_4->SetBinError(21,0.2781975);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.572214);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,10.97706);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,10.15673);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.91568);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.065485);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.402306);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.634465);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.15213);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.329111);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.066901);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.717836);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.68973);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.907008);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.834507);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.005534);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.290872);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1893118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08303507);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7335298);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3706383);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.287412);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.212039);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.218755);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.0866);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.321667);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9354981);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8815072);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.910148);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8909763);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.115085);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7518173);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5445999);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7298857);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5901107);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5265489);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7006026);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.09401197);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07512691);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04259509);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3615077);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1928416);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6099635);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4812168);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6998215);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8051651);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.651925);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.130019);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7708405);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4406221);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3454083);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1925625);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.051659);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2718309);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.09039314);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.06563845);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1825742);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2646719);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2382053);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2778603);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3581213);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2373076);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2323057);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1490078);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1283495);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02990719);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1563995);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04785299);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03300438);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01715503);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,87.2578);
   hNCpi0inFVres_stack_7->SetBinContent(2,136.3395);
   hNCpi0inFVres_stack_7->SetBinContent(3,135.7065);
   hNCpi0inFVres_stack_7->SetBinContent(4,133.7039);
   hNCpi0inFVres_stack_7->SetBinContent(5,113.5067);
   hNCpi0inFVres_stack_7->SetBinContent(6,97.97331);
   hNCpi0inFVres_stack_7->SetBinContent(7,85.81154);
   hNCpi0inFVres_stack_7->SetBinContent(8,62.79354);
   hNCpi0inFVres_stack_7->SetBinContent(9,49.11349);
   hNCpi0inFVres_stack_7->SetBinContent(10,39.62511);
   hNCpi0inFVres_stack_7->SetBinContent(11,26.16121);
   hNCpi0inFVres_stack_7->SetBinContent(12,17.54259);
   hNCpi0inFVres_stack_7->SetBinContent(13,13.65082);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.851659);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.637653);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.44942);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.853987);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.129825);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.978084);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.685102);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.027336);
   hNCpi0inFVres_stack_7->SetBinError(1,3.306985);
   hNCpi0inFVres_stack_7->SetBinError(2,4.054705);
   hNCpi0inFVres_stack_7->SetBinError(3,3.93966);
   hNCpi0inFVres_stack_7->SetBinError(4,4.020718);
   hNCpi0inFVres_stack_7->SetBinError(5,3.700124);
   hNCpi0inFVres_stack_7->SetBinError(6,3.335005);
   hNCpi0inFVres_stack_7->SetBinError(7,3.30015);
   hNCpi0inFVres_stack_7->SetBinError(8,2.719322);
   hNCpi0inFVres_stack_7->SetBinError(9,2.353431);
   hNCpi0inFVres_stack_7->SetBinError(10,2.121523);
   hNCpi0inFVres_stack_7->SetBinError(11,1.717399);
   hNCpi0inFVres_stack_7->SetBinError(12,1.297291);
   hNCpi0inFVres_stack_7->SetBinError(13,1.232041);
   hNCpi0inFVres_stack_7->SetBinError(14,1.080085);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8841372);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7097734);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4931833);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7413448);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6901816);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5060287);
   hNCpi0inFVres_stack_7->SetBinError(21,1.159094);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,14.61312);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.54882);
   hNCpi0inFVdis_stack_8->SetBinContent(3,24.18221);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.35184);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.38574);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.07552);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.41714);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.46418);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.29153);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.802528);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.25182);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.516458);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.041539);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.690592);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.882054);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.536398);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.135903);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7443032);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.842052);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5301466);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.458262);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.422518);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.639416);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.75253);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.642232);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.611294);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.566907);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.4489);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.438541);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.099232);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7975214);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5445244);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8855269);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5672826);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6599843);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4003729);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6102342);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2496145);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2016303);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6544778);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1904115);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5775298);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.09232638);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1303248);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.05040204);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,25.54954);
   hCCpi0inFV_stack_10->SetBinContent(2,34.06278);
   hCCpi0inFV_stack_10->SetBinContent(3,45.63841);
   hCCpi0inFV_stack_10->SetBinContent(4,36.91827);
   hCCpi0inFV_stack_10->SetBinContent(5,41.89583);
   hCCpi0inFV_stack_10->SetBinContent(6,34.53735);
   hCCpi0inFV_stack_10->SetBinContent(7,35.30088);
   hCCpi0inFV_stack_10->SetBinContent(8,28.59291);
   hCCpi0inFV_stack_10->SetBinContent(9,24.98289);
   hCCpi0inFV_stack_10->SetBinContent(10,22.18745);
   hCCpi0inFV_stack_10->SetBinContent(11,13.64596);
   hCCpi0inFV_stack_10->SetBinContent(12,8.15777);
   hCCpi0inFV_stack_10->SetBinContent(13,10.02184);
   hCCpi0inFV_stack_10->SetBinContent(14,7.180788);
   hCCpi0inFV_stack_10->SetBinContent(15,5.178369);
   hCCpi0inFV_stack_10->SetBinContent(16,3.427608);
   hCCpi0inFV_stack_10->SetBinContent(17,3.714533);
   hCCpi0inFV_stack_10->SetBinContent(18,1.804013);
   hCCpi0inFV_stack_10->SetBinContent(19,2.840843);
   hCCpi0inFV_stack_10->SetBinContent(20,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(21,6.105311);
   hCCpi0inFV_stack_10->SetBinError(1,2.508787);
   hCCpi0inFV_stack_10->SetBinError(2,2.873585);
   hCCpi0inFV_stack_10->SetBinError(3,3.386211);
   hCCpi0inFV_stack_10->SetBinError(4,2.990709);
   hCCpi0inFV_stack_10->SetBinError(5,3.23598);
   hCCpi0inFV_stack_10->SetBinError(6,2.940161);
   hCCpi0inFV_stack_10->SetBinError(7,3.053633);
   hCCpi0inFV_stack_10->SetBinError(8,2.655529);
   hCCpi0inFV_stack_10->SetBinError(9,2.475012);
   hCCpi0inFV_stack_10->SetBinError(10,2.384929);
   hCCpi0inFV_stack_10->SetBinError(11,1.820582);
   hCCpi0inFV_stack_10->SetBinError(12,1.379455);
   hCCpi0inFV_stack_10->SetBinError(13,1.669493);
   hCCpi0inFV_stack_10->SetBinError(14,1.359959);
   hCCpi0inFV_stack_10->SetBinError(15,1.144335);
   hCCpi0inFV_stack_10->SetBinError(16,0.8778096);
   hCCpi0inFV_stack_10->SetBinError(17,0.9615599);
   hCCpi0inFV_stack_10->SetBinError(18,0.7075491);
   hCCpi0inFV_stack_10->SetBinError(19,0.8098046);
   hCCpi0inFV_stack_10->SetBinError(20,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(21,1.240963);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,16.79216);
   hNCinFV_stack_11->SetBinContent(2,20.85161);
   hNCinFV_stack_11->SetBinContent(3,16.32914);
   hNCinFV_stack_11->SetBinContent(4,20.03969);
   hNCinFV_stack_11->SetBinContent(5,18.36411);
   hNCinFV_stack_11->SetBinContent(6,14.87291);
   hNCinFV_stack_11->SetBinContent(7,14.94533);
   hNCinFV_stack_11->SetBinContent(8,14.24417);
   hNCinFV_stack_11->SetBinContent(9,11.76208);
   hNCinFV_stack_11->SetBinContent(10,7.342226);
   hNCinFV_stack_11->SetBinContent(11,7.811811);
   hNCinFV_stack_11->SetBinContent(12,5.391681);
   hNCinFV_stack_11->SetBinContent(13,7.121882);
   hNCinFV_stack_11->SetBinContent(14,4.786504);
   hNCinFV_stack_11->SetBinContent(15,1.62582);
   hNCinFV_stack_11->SetBinContent(16,2.579154);
   hNCinFV_stack_11->SetBinContent(17,1.116046);
   hNCinFV_stack_11->SetBinContent(18,0.6200937);
   hNCinFV_stack_11->SetBinContent(19,2.373758);
   hNCinFV_stack_11->SetBinContent(20,2.023375);
   hNCinFV_stack_11->SetBinContent(21,6.40329);
   hNCinFV_stack_11->SetBinError(1,2.067765);
   hNCinFV_stack_11->SetBinError(2,2.405052);
   hNCinFV_stack_11->SetBinError(3,2.026905);
   hNCinFV_stack_11->SetBinError(4,2.299525);
   hNCinFV_stack_11->SetBinError(5,2.138569);
   hNCinFV_stack_11->SetBinError(6,1.869553);
   hNCinFV_stack_11->SetBinError(7,1.991691);
   hNCinFV_stack_11->SetBinError(8,2.089606);
   hNCinFV_stack_11->SetBinError(9,1.94341);
   hNCinFV_stack_11->SetBinError(10,1.285211);
   hNCinFV_stack_11->SetBinError(11,1.357426);
   hNCinFV_stack_11->SetBinError(12,1.204223);
   hNCinFV_stack_11->SetBinError(13,1.663155);
   hNCinFV_stack_11->SetBinError(14,1.454139);
   hNCinFV_stack_11->SetBinError(15,0.7217429);
   hNCinFV_stack_11->SetBinError(16,1.005341);
   hNCinFV_stack_11->SetBinError(17,0.5160468);
   hNCinFV_stack_11->SetBinError(18,0.3207744);
   hNCinFV_stack_11->SetBinError(19,0.9614418);
   hNCinFV_stack_11->SetBinError(20,0.8288107);
   hNCinFV_stack_11->SetBinError(21,1.608532);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,14.87415);
   hnumuCCinFV_stack_12->SetBinContent(2,17.62405);
   hnumuCCinFV_stack_12->SetBinContent(3,18.72969);
   hnumuCCinFV_stack_12->SetBinContent(4,16.35894);
   hnumuCCinFV_stack_12->SetBinContent(5,20.53769);
   hnumuCCinFV_stack_12->SetBinContent(6,14.01681);
   hnumuCCinFV_stack_12->SetBinContent(7,12.3829);
   hnumuCCinFV_stack_12->SetBinContent(8,10.80983);
   hnumuCCinFV_stack_12->SetBinContent(9,8.562229);
   hnumuCCinFV_stack_12->SetBinContent(10,6.898282);
   hnumuCCinFV_stack_12->SetBinContent(11,6.463153);
   hnumuCCinFV_stack_12->SetBinContent(12,5.1777);
   hnumuCCinFV_stack_12->SetBinContent(13,4.003148);
   hnumuCCinFV_stack_12->SetBinContent(14,3.518432);
   hnumuCCinFV_stack_12->SetBinContent(15,2.967541);
   hnumuCCinFV_stack_12->SetBinContent(16,1.65717);
   hnumuCCinFV_stack_12->SetBinContent(17,0.5867651);
   hnumuCCinFV_stack_12->SetBinContent(18,1.070405);
   hnumuCCinFV_stack_12->SetBinContent(19,0.8145407);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(21,1.375317);
   hnumuCCinFV_stack_12->SetBinError(1,2.454019);
   hnumuCCinFV_stack_12->SetBinError(2,2.186332);
   hnumuCCinFV_stack_12->SetBinError(3,2.707533);
   hnumuCCinFV_stack_12->SetBinError(4,2.322461);
   hnumuCCinFV_stack_12->SetBinError(5,2.850729);
   hnumuCCinFV_stack_12->SetBinError(6,2.143844);
   hnumuCCinFV_stack_12->SetBinError(7,1.855868);
   hnumuCCinFV_stack_12->SetBinError(8,1.951578);
   hnumuCCinFV_stack_12->SetBinError(9,1.549171);
   hnumuCCinFV_stack_12->SetBinError(10,1.529792);
   hnumuCCinFV_stack_12->SetBinError(11,1.315372);
   hnumuCCinFV_stack_12->SetBinError(12,1.157572);
   hnumuCCinFV_stack_12->SetBinError(13,1.038897);
   hnumuCCinFV_stack_12->SetBinError(14,0.9730944);
   hnumuCCinFV_stack_12->SetBinError(15,0.8871024);
   hnumuCCinFV_stack_12->SetBinError(16,0.6498287);
   hnumuCCinFV_stack_12->SetBinError(17,0.3387718);
   hnumuCCinFV_stack_12->SetBinError(18,0.5545368);
   hnumuCCinFV_stack_12->SetBinError(19,0.4079752);
   hnumuCCinFV_stack_12->SetBinError(20,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(21,0.5198233);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,4.647348);
   hnueCCinFV_stack_13->SetBinContent(2,4.505016);
   hnueCCinFV_stack_13->SetBinContent(3,2.708795);
   hnueCCinFV_stack_13->SetBinContent(4,3.41583);
   hnueCCinFV_stack_13->SetBinContent(5,1.481266);
   hnueCCinFV_stack_13->SetBinContent(6,1.334992);
   hnueCCinFV_stack_13->SetBinContent(7,2.657884);
   hnueCCinFV_stack_13->SetBinContent(8,0.628405);
   hnueCCinFV_stack_13->SetBinContent(9,1.037776);
   hnueCCinFV_stack_13->SetBinContent(10,0.4170694);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.075993);
   hnueCCinFV_stack_13->SetBinContent(15,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(16,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(20,1.084408);
   hnueCCinFV_stack_13->SetBinContent(21,0.949423);
   hnueCCinFV_stack_13->SetBinError(1,1.812057);
   hnueCCinFV_stack_13->SetBinError(2,1.465455);
   hnueCCinFV_stack_13->SetBinError(3,0.9036601);
   hnueCCinFV_stack_13->SetBinError(4,1.003721);
   hnueCCinFV_stack_13->SetBinError(5,0.7324977);
   hnueCCinFV_stack_13->SetBinError(6,0.5514681);
   hnueCCinFV_stack_13->SetBinError(7,1.42718);
   hnueCCinFV_stack_13->SetBinError(8,0.4743974);
   hnueCCinFV_stack_13->SetBinError(9,0.5344459);
   hnueCCinFV_stack_13->SetBinError(10,0.2925432);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,1.075993);
   hnueCCinFV_stack_13->SetBinError(15,0.2441371);
   hnueCCinFV_stack_13->SetBinError(16,0.3743698);
   hnueCCinFV_stack_13->SetBinError(20,0.6604876);
   hnueCCinFV_stack_13->SetBinError(21,0.4896539);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__17->SetBinContent(1,240.3696);
   hmcerror__17->SetBinContent(2,360.7772);
   hmcerror__17->SetBinContent(3,372.6547);
   hmcerror__17->SetBinContent(4,341.6734);
   hmcerror__17->SetBinContent(5,311.7442);
   hmcerror__17->SetBinContent(6,246.1043);
   hmcerror__17->SetBinContent(7,215.0987);
   hmcerror__17->SetBinContent(8,172.0372);
   hmcerror__17->SetBinContent(9,129.5354);
   hmcerror__17->SetBinContent(10,96.5712);
   hmcerror__17->SetBinContent(11,71.29181);
   hmcerror__17->SetBinContent(12,54.42192);
   hmcerror__17->SetBinContent(13,45.83022);
   hmcerror__17->SetBinContent(14,33.94028);
   hmcerror__17->SetBinContent(15,21.98436);
   hmcerror__17->SetBinContent(16,18.13403);
   hmcerror__17->SetBinContent(17,10.993);
   hmcerror__17->SetBinContent(18,8.054989);
   hmcerror__17->SetBinContent(19,12.44241);
   hmcerror__17->SetBinContent(20,6.675557);
   hmcerror__17->SetBinContent(21,25.56085);
   hmcerror__17->SetBinError(1,69.61278);
   hmcerror__17->SetBinError(2,82.75781);
   hmcerror__17->SetBinError(3,86.46929);
   hmcerror__17->SetBinError(4,81.24795);
   hmcerror__17->SetBinError(5,71.85735);
   hmcerror__17->SetBinError(6,67.93465);
   hmcerror__17->SetBinError(7,57.28594);
   hmcerror__17->SetBinError(8,48.17529);
   hmcerror__17->SetBinError(9,37.82438);
   hmcerror__17->SetBinError(10,30.84034);
   hmcerror__17->SetBinError(11,23.69618);
   hmcerror__17->SetBinError(12,20.97917);
   hmcerror__17->SetBinError(13,18.89853);
   hmcerror__17->SetBinError(14,16.75316);
   hmcerror__17->SetBinError(15,12.02614);
   hmcerror__17->SetBinError(16,9.825295);
   hmcerror__17->SetBinError(17,6.837815);
   hmcerror__17->SetBinError(18,5.707183);
   hmcerror__17->SetBinError(19,13.51046);
   hmcerror__17->SetBinError(20,6.567259);
   hmcerror__17->SetBinError(21,14.85864);
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
   
   Double_t _fx3021[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3021[20] = {
   252,
   382,
   450,
   357,
   334,
   276,
   233,
   170,
   128,
   81,
   63,
   55,
   23,
   35,
   19,
   18,
   9,
   9,
   7,
   13};
   Double_t _felx3021[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3021[20] = {
   15.87451,
   19.54482,
   21.2132,
   18.89444,
   18.27567,
   16.61325,
   15.26434,
   13.0384,
   11.31371,
   9.1239,
   8.0648,
   7.546,
   4.9457,
   6.0548,
   4.5151,
   4.4008,
   3.19354,
   3.19354,
   2.85954,
   3.77763};
   Double_t _fehx3021[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3021[20] = {
   15.87451,
   19.54482,
   21.2132,
   18.89444,
   18.27567,
   16.61325,
   15.26434,
   13.0384,
   11.31371,
   8.9221,
   7.862,
   7.3425,
   4.7346,
   5.8483,
   4.3011,
   4.1858,
   2.9582,
   2.9582,
   2.61053,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,330);
   Graph_Graph3021->SetMinimum(3.726414);
   Graph_Graph3021->SetMaximum(517.9205);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2914.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 283.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  94.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1031.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  202.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 386.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 191.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 167.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 27.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3022[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3022[20] = {
   0.2896072,
   0.2293876,
   0.232036,
   0.2377942,
   0.230501,
   0.2760401,
   0.266324,
   0.2800283,
   0.2920003,
   0.3193534,
   0.332383,
   0.3854911,
   0.4123595,
   0.493607,
   0.5470318,
   0.5418152,
   0.6220152,
   0.7085277,
   1.08584,
   0.983777};
   Double_t _fehx3022[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3022[20] = {
   0.2896072,
   0.2293876,
   0.232036,
   0.2377942,
   0.230501,
   0.2760401,
   0.266324,
   0.2800283,
   0.2920003,
   0.3193534,
   0.332383,
   0.3854911,
   0.4123595,
   0.493607,
   0.5470318,
   0.5418152,
   0.6220152,
   0.7085277,
   1.08584,
   0.983777};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,330);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3023[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3023[20] = {
   0.2011489,
   0.1989053,
   0.1991045,
   0.2066608,
   0.204448,
   0.2292123,
   0.2260465,
   0.2215125,
   0.2383363,
   0.2466292,
   0.2607943,
   0.270525,
   0.2941596,
   0.2720863,
   0.3290411,
   0.2610837,
   0.2985594,
   0.3157647,
   0.2885334,
   0.3657213};
   Double_t _fehx3023[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3023[20] = {
   0.2011489,
   0.1989053,
   0.1991045,
   0.2066608,
   0.204448,
   0.2292123,
   0.2260465,
   0.2215125,
   0.2383363,
   0.2466292,
   0.2607943,
   0.270525,
   0.2941596,
   0.2720863,
   0.3290411,
   0.2610837,
   0.2985594,
   0.3157647,
   0.2885334,
   0.3657213};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,330);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3024[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3024[20] = {
   1.048385,
   1.058825,
   1.207552,
   1.044857,
   1.071391,
   1.121476,
   1.083224,
   0.9881582,
   0.9881468,
   0.8387594,
   0.883692,
   1.010622,
   0.5018523,
   1.031223,
   0.8642508,
   0.9926087,
   0.8187025,
   1.11732,
   0.5625921,
   1.947403};
   Double_t _felx3024[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3024[20] = {
   0.06604207,
   0.05417422,
   0.05692456,
   0.05529972,
   0.05862392,
   0.06750491,
   0.07096434,
   0.07578827,
   0.08734066,
   0.09447848,
   0.1131238,
   0.1386574,
   0.1079135,
   0.1783957,
   0.2053778,
   0.2426818,
   0.2905066,
   0.3964673,
   0.2298221,
   0.5658899};
   Double_t _fehx3024[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3024[20] = {
   0.06604207,
   0.05417422,
   0.05692456,
   0.05529972,
   0.05862392,
   0.06750491,
   0.07096434,
   0.07578827,
   0.08734066,
   0.09238883,
   0.1102791,
   0.1349181,
   0.1033074,
   0.1723115,
   0.1956436,
   0.2308256,
   0.2690984,
   0.3672507,
   0.2098091,
   0.5325698};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,330);
   Graph_Graph3024->SetMinimum(0.1180497);
   Graph_Graph3024->SetMaximum(2.694693);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
