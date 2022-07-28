#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Jun  8 11:41:05 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-342.3077,-19.98,1260.256,2209.367);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__16->SetBinContent(0,1.242356);
   hmc__16->SetBinContent(1,1.857063);
   hmc__16->SetBinContent(2,5.198032);
   hmc__16->SetBinContent(3,38.41261);
   hmc__16->SetBinContent(4,898.4574);
   hmc__16->SetBinContent(5,508.4896);
   hmc__16->SetBinContent(6,326.4657);
   hmc__16->SetBinContent(7,261.689);
   hmc__16->SetBinContent(8,208.9385);
   hmc__16->SetBinContent(9,164.0663);
   hmc__16->SetBinContent(10,113.2276);
   hmc__16->SetBinContent(11,91.03667);
   hmc__16->SetBinContent(12,67.63644);
   hmc__16->SetBinContent(13,50.96668);
   hmc__16->SetBinContent(14,30.21598);
   hmc__16->SetBinContent(15,25.16357);
   hmc__16->SetBinContent(16,17.39473);
   hmc__16->SetBinContent(17,14.61944);
   hmc__16->SetBinContent(18,11.11033);
   hmc__16->SetBinContent(19,7.897144);
   hmc__16->SetBinContent(20,4.053343);
   hmc__16->SetBinContent(21,4.651529);
   hmc__16->SetBinContent(22,5.124819);
   hmc__16->SetBinContent(23,3.262748);
   hmc__16->SetBinContent(24,2.372864);
   hmc__16->SetBinContent(25,5.264298);
   hmc__16->SetBinContent(26,9.56301);
   hmc__16->SetBinError(0,0.4781381);
   hmc__16->SetBinError(1,1.858001);
   hmc__16->SetBinError(2,2.45749);
   hmc__16->SetBinError(3,9.679238);
   hmc__16->SetBinError(4,196.8684);
   hmc__16->SetBinError(5,107.9263);
   hmc__16->SetBinError(6,69.99765);
   hmc__16->SetBinError(7,57.17485);
   hmc__16->SetBinError(8,46.73218);
   hmc__16->SetBinError(9,39.73749);
   hmc__16->SetBinError(10,26.00807);
   hmc__16->SetBinError(11,22.13334);
   hmc__16->SetBinError(12,18.76349);
   hmc__16->SetBinError(13,14.21426);
   hmc__16->SetBinError(14,9.479663);
   hmc__16->SetBinError(15,7.773345);
   hmc__16->SetBinError(16,9.441234);
   hmc__16->SetBinError(17,6.351465);
   hmc__16->SetBinError(18,6.076751);
   hmc__16->SetBinError(19,3.370108);
   hmc__16->SetBinError(20,3.254022);
   hmc__16->SetBinError(21,3.349568);
   hmc__16->SetBinError(22,4.927871);
   hmc__16->SetBinError(23,2.540937);
   hmc__16->SetBinError(24,2.564387);
   hmc__16->SetBinError(25,3.032018);
   hmc__16->SetBinError(26,5.414344);
   hmc__16->SetMinimum(-19.98);
   hmc__16->SetMaximum(2097.9);
   hmc__16->SetEntries(2848.296);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-150,1100);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(943.3802);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(3,1.150919);
   hbadmatch_stack_1->SetBinContent(4,17.18345);
   hbadmatch_stack_1->SetBinContent(5,8.986009);
   hbadmatch_stack_1->SetBinContent(6,7.745647);
   hbadmatch_stack_1->SetBinContent(7,4.705885);
   hbadmatch_stack_1->SetBinContent(8,5.126431);
   hbadmatch_stack_1->SetBinContent(9,4.880229);
   hbadmatch_stack_1->SetBinContent(10,4.977573);
   hbadmatch_stack_1->SetBinContent(11,2.874535);
   hbadmatch_stack_1->SetBinContent(12,4.04637);
   hbadmatch_stack_1->SetBinContent(13,1.545394);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinContent(18,0.932619);
   hbadmatch_stack_1->SetBinContent(21,0.4357758);
   hbadmatch_stack_1->SetBinContent(24,0.3934307);
   hbadmatch_stack_1->SetBinContent(26,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.5975644);
   hbadmatch_stack_1->SetBinError(4,2.677155);
   hbadmatch_stack_1->SetBinError(5,1.530883);
   hbadmatch_stack_1->SetBinError(6,1.664814);
   hbadmatch_stack_1->SetBinError(7,1.0907);
   hbadmatch_stack_1->SetBinError(8,1.189411);
   hbadmatch_stack_1->SetBinError(9,1.077293);
   hbadmatch_stack_1->SetBinError(10,1.881887);
   hbadmatch_stack_1->SetBinError(11,0.8580071);
   hbadmatch_stack_1->SetBinError(12,1.092053);
   hbadmatch_stack_1->SetBinError(13,0.7301544);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
   hbadmatch_stack_1->SetBinError(18,0.5582969);
   hbadmatch_stack_1->SetBinError(21,0.3095914);
   hbadmatch_stack_1->SetBinError(24,0.2781975);
   hbadmatch_stack_1->SetBinError(26,0.1967154);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1504;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(3,7.19463);
   hext_stack_2->SetBinContent(4,82.66231);
   hext_stack_2->SetBinContent(5,58.14681);
   hext_stack_2->SetBinContent(6,33.10548);
   hext_stack_2->SetBinContent(7,32.46386);
   hext_stack_2->SetBinContent(8,19.17743);
   hext_stack_2->SetBinContent(9,7.951576);
   hext_stack_2->SetBinContent(10,7.145559);
   hext_stack_2->SetBinContent(11,9.309826);
   hext_stack_2->SetBinContent(12,3.330584);
   hext_stack_2->SetBinContent(13,2.357392);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,4.352847);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,2.973055);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.6416141);
   hext_stack_2->SetBinContent(23,1.137595);
   hext_stack_2->SetBinContent(25,2.973055);
   hext_stack_2->SetBinError(3,1.820757);
   hext_stack_2->SetBinError(4,6.322626);
   hext_stack_2->SetBinError(5,5.151648);
   hext_stack_2->SetBinError(6,3.832978);
   hext_stack_2->SetBinError(7,3.778895);
   hext_stack_2->SetBinError(8,2.878168);
   hext_stack_2->SetBinError(9,1.765568);
   hext_stack_2->SetBinError(10,1.607913);
   hext_stack_2->SetBinError(11,2.049844);
   hext_stack_2->SetBinError(12,1.116937);
   hext_stack_2->SetBinError(13,0.9653222);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,1.514272);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,0.7595995);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,1.346105);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.6416141);
   hext_stack_2->SetBinError(23,0.6602113);
   hext_stack_2->SetBinError(25,1.346105);
   hext_stack_2->SetEntries(657);

   ci = 1505;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(3,0.5758626);
   hdirt_stack_3->SetBinContent(4,13.32946);
   hdirt_stack_3->SetBinContent(5,6.628022);
   hdirt_stack_3->SetBinContent(6,4.997092);
   hdirt_stack_3->SetBinContent(7,3.508242);
   hdirt_stack_3->SetBinContent(8,2.164793);
   hdirt_stack_3->SetBinContent(9,2.556905);
   hdirt_stack_3->SetBinContent(10,0.5758626);
   hdirt_stack_3->SetBinContent(11,1.218133);
   hdirt_stack_3->SetBinContent(12,0.8970021);
   hdirt_stack_3->SetBinContent(13,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.1482583);
   hdirt_stack_3->SetBinContent(16,0.7319759);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinError(3,0.3389606);
   hdirt_stack_3->SetBinError(4,1.973237);
   hdirt_stack_3->SetBinError(5,1.325799);
   hdirt_stack_3->SetBinError(6,1.178318);
   hdirt_stack_3->SetBinError(7,1.30143);
   hdirt_stack_3->SetBinError(8,0.7217384);
   hdirt_stack_3->SetBinError(9,0.8998926);
   hdirt_stack_3->SetBinError(10,0.3389606);
   hdirt_stack_3->SetBinError(11,0.5848556);
   hdirt_stack_3->SetBinError(12,0.4866948);
   hdirt_stack_3->SetBinError(13,0.3381872);
   hdirt_stack_3->SetBinError(15,0.1482583);
   hdirt_stack_3->SetBinError(16,0.5190762);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1506;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(3,3.620943);
   houtFV_stack_4->SetBinContent(4,94.85782);
   houtFV_stack_4->SetBinContent(5,67.1918);
   houtFV_stack_4->SetBinContent(6,39.55289);
   houtFV_stack_4->SetBinContent(7,27.04841);
   houtFV_stack_4->SetBinContent(8,18.8244);
   houtFV_stack_4->SetBinContent(9,13.93546);
   houtFV_stack_4->SetBinContent(10,9.568185);
   houtFV_stack_4->SetBinContent(11,9.076428);
   houtFV_stack_4->SetBinContent(12,4.486788);
   houtFV_stack_4->SetBinContent(13,3.648942);
   houtFV_stack_4->SetBinContent(14,2.754088);
   houtFV_stack_4->SetBinContent(15,1.581754);
   houtFV_stack_4->SetBinContent(16,1.857266);
   houtFV_stack_4->SetBinContent(17,1.805704);
   houtFV_stack_4->SetBinContent(18,0.8753801);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.3934307);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(24,0.3401776);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(3,0.8988449);
   houtFV_stack_4->SetBinError(4,4.852212);
   houtFV_stack_4->SetBinError(5,4.089717);
   houtFV_stack_4->SetBinError(6,3.15456);
   houtFV_stack_4->SetBinError(7,2.626779);
   houtFV_stack_4->SetBinError(8,2.132762);
   houtFV_stack_4->SetBinError(9,1.879355);
   houtFV_stack_4->SetBinError(10,1.569572);
   houtFV_stack_4->SetBinError(11,1.500807);
   houtFV_stack_4->SetBinError(12,1.127853);
   houtFV_stack_4->SetBinError(13,0.9517717);
   houtFV_stack_4->SetBinError(14,0.8605801);
   houtFV_stack_4->SetBinError(15,0.6135348);
   houtFV_stack_4->SetBinError(16,0.6799255);
   houtFV_stack_4->SetBinError(17,0.7080169);
   houtFV_stack_4->SetBinError(18,0.5191111);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(22,0.2781975);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(24,0.3401776);
   houtFV_stack_4->SetEntries(1301);

   ci = 1507;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,49.94769);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.09213);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.418608);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.683727);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.281342);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.329662);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.297354);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.603094);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7112858);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(4,2.35603);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.172308);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8979879);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6741915);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7125954);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5308387);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.329333);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4204368);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2436282);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1508;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.26498);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.15619);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.781536);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.682722);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3899359);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6055063);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2569743);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2954882);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2684567);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1561744);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1509;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.733552);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.95893);
   hNCpi0inFVres_stack_7->SetBinContent(4,434.5303);
   hNCpi0inFVres_stack_7->SetBinContent(5,224.3232);
   hNCpi0inFVres_stack_7->SetBinContent(6,135.1209);
   hNCpi0inFVres_stack_7->SetBinContent(7,105.6144);
   hNCpi0inFVres_stack_7->SetBinContent(8,76.51897);
   hNCpi0inFVres_stack_7->SetBinContent(9,53.61438);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.54699);
   hNCpi0inFVres_stack_7->SetBinContent(11,21.67007);
   hNCpi0inFVres_stack_7->SetBinContent(12,18.28255);
   hNCpi0inFVres_stack_7->SetBinContent(13,11.39421);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.991226);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.796656);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.192402);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.844984);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.98058);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.379726);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.06004);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.697004);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.613304);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4042178);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.362868);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.7817042);
   hNCpi0inFVres_stack_7->SetBinError(0,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6154946);
   hNCpi0inFVres_stack_7->SetBinError(3,1.087543);
   hNCpi0inFVres_stack_7->SetBinError(4,6.799251);
   hNCpi0inFVres_stack_7->SetBinError(5,4.825116);
   hNCpi0inFVres_stack_7->SetBinError(6,3.788479);
   hNCpi0inFVres_stack_7->SetBinError(7,3.362674);
   hNCpi0inFVres_stack_7->SetBinError(8,2.927805);
   hNCpi0inFVres_stack_7->SetBinError(9,2.394415);
   hNCpi0inFVres_stack_7->SetBinError(10,1.996233);
   hNCpi0inFVres_stack_7->SetBinError(11,1.465095);
   hNCpi0inFVres_stack_7->SetBinError(12,1.415875);
   hNCpi0inFVres_stack_7->SetBinError(13,1.116184);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9386752);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6562487);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5600354);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5909216);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5280208);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3711885);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3759641);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2563433);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2517472);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1342881);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2070706);
   hNCpi0inFVres_stack_7->SetBinError(25,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.3465144);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1510;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.114008);
   hNCpi0inFVdis_stack_8->SetBinContent(4,72.9063);
   hNCpi0inFVdis_stack_8->SetBinContent(5,38.54368);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.03876);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.76009);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.16305);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.64365);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.161201);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.80364);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.73015);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.128888);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.133362);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.678248);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.28324);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.725736);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.501704);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3477539);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.334968);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2676089);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.767567);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.045522);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.542209);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.451103);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.365189);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.101971);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9934996);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8393291);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7672989);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6951776);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4736198);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5753478);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3841566);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2928421);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2454852);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1731161);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2051824);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1511;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1512;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1513;
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
   hs6->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.1950248);
   hCCpi0inFV_stack_11->SetBinContent(1,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(2,0.3934307);
   hCCpi0inFV_stack_11->SetBinContent(3,4.556338);
   hCCpi0inFV_stack_11->SetBinContent(4,44.95618);
   hCCpi0inFV_stack_11->SetBinContent(5,48.18504);
   hCCpi0inFV_stack_11->SetBinContent(6,41.53009);
   hCCpi0inFV_stack_11->SetBinContent(7,44.07516);
   hCCpi0inFV_stack_11->SetBinContent(8,44.97554);
   hCCpi0inFV_stack_11->SetBinContent(9,41.37407);
   hCCpi0inFV_stack_11->SetBinContent(10,30.50185);
   hCCpi0inFV_stack_11->SetBinContent(11,26.26677);
   hCCpi0inFV_stack_11->SetBinContent(12,20.54668);
   hCCpi0inFV_stack_11->SetBinContent(13,20.25556);
   hCCpi0inFV_stack_11->SetBinContent(14,11.85584);
   hCCpi0inFV_stack_11->SetBinContent(15,6.945426);
   hCCpi0inFV_stack_11->SetBinContent(16,7.210413);
   hCCpi0inFV_stack_11->SetBinContent(17,6.110383);
   hCCpi0inFV_stack_11->SetBinContent(18,5.033216);
   hCCpi0inFV_stack_11->SetBinContent(19,1.517089);
   hCCpi0inFV_stack_11->SetBinContent(20,1.421979);
   hCCpi0inFV_stack_11->SetBinContent(21,2.284442);
   hCCpi0inFV_stack_11->SetBinContent(22,3.657898);
   hCCpi0inFV_stack_11->SetBinContent(23,1.316992);
   hCCpi0inFV_stack_11->SetBinContent(24,0.9286332);
   hCCpi0inFV_stack_11->SetBinContent(25,1.662242);
   hCCpi0inFV_stack_11->SetBinContent(26,6.044213);
   hCCpi0inFV_stack_11->SetBinError(0,0.1950249);
   hCCpi0inFV_stack_11->SetBinError(1,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(2,0.2781975);
   hCCpi0inFV_stack_11->SetBinError(3,1.020647);
   hCCpi0inFV_stack_11->SetBinError(4,3.27333);
   hCCpi0inFV_stack_11->SetBinError(5,3.42951);
   hCCpi0inFV_stack_11->SetBinError(6,3.212523);
   hCCpi0inFV_stack_11->SetBinError(7,3.301557);
   hCCpi0inFV_stack_11->SetBinError(8,3.411088);
   hCCpi0inFV_stack_11->SetBinError(9,3.264791);
   hCCpi0inFV_stack_11->SetBinError(10,2.722846);
   hCCpi0inFV_stack_11->SetBinError(11,2.518274);
   hCCpi0inFV_stack_11->SetBinError(12,2.318779);
   hCCpi0inFV_stack_11->SetBinError(13,2.322269);
   hCCpi0inFV_stack_11->SetBinError(14,1.776774);
   hCCpi0inFV_stack_11->SetBinError(15,1.287032);
   hCCpi0inFV_stack_11->SetBinError(16,1.313689);
   hCCpi0inFV_stack_11->SetBinError(17,1.241763);
   hCCpi0inFV_stack_11->SetBinError(18,1.109872);
   hCCpi0inFV_stack_11->SetBinError(19,0.5887087);
   hCCpi0inFV_stack_11->SetBinError(20,0.5392144);
   hCCpi0inFV_stack_11->SetBinError(21,0.7445488);
   hCCpi0inFV_stack_11->SetBinError(22,0.980612);
   hCCpi0inFV_stack_11->SetBinError(23,0.5536755);
   hCCpi0inFV_stack_11->SetBinError(24,0.48078);
   hCCpi0inFV_stack_11->SetBinError(25,0.6513556);
   hCCpi0inFV_stack_11->SetBinError(26,1.331778);
   hCCpi0inFV_stack_11->SetEntries(1821);

   ci = 1514;
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
   hs6->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(1,0.3934307);
   hNCinFV_stack_12->SetBinContent(2,0.5901461);
   hNCinFV_stack_12->SetBinContent(3,2.925981);
   hNCinFV_stack_12->SetBinContent(4,40.50508);
   hNCinFV_stack_12->SetBinContent(5,20.80875);
   hNCinFV_stack_12->SetBinContent(6,12.89098);
   hNCinFV_stack_12->SetBinContent(7,9.624819);
   hNCinFV_stack_12->SetBinContent(8,8.057983);
   hNCinFV_stack_12->SetBinContent(9,10.99506);
   hNCinFV_stack_12->SetBinContent(10,5.858724);
   hNCinFV_stack_12->SetBinContent(11,4.498013);
   hNCinFV_stack_12->SetBinContent(12,3.467945);
   hNCinFV_stack_12->SetBinContent(13,2.486059);
   hNCinFV_stack_12->SetBinContent(14,2.342597);
   hNCinFV_stack_12->SetBinContent(15,1.26543);
   hNCinFV_stack_12->SetBinContent(16,0.9269427);
   hNCinFV_stack_12->SetBinContent(17,0.536893);
   hNCinFV_stack_12->SetBinContent(18,0.1967154);
   hNCinFV_stack_12->SetBinContent(19,0.1950248);
   hNCinFV_stack_12->SetBinContent(20,0.1950248);
   hNCinFV_stack_12->SetBinContent(21,0.536893);
   hNCinFV_stack_12->SetBinContent(26,0.9286332);
   hNCinFV_stack_12->SetBinError(1,0.2781975);
   hNCinFV_stack_12->SetBinError(2,0.340721);
   hNCinFV_stack_12->SetBinError(3,0.8770106);
   hNCinFV_stack_12->SetBinError(4,3.201175);
   hNCinFV_stack_12->SetBinError(5,2.314162);
   hNCinFV_stack_12->SetBinError(6,1.819731);
   hNCinFV_stack_12->SetBinError(7,1.557739);
   hNCinFV_stack_12->SetBinError(8,1.407759);
   hNCinFV_stack_12->SetBinError(9,1.641579);
   hNCinFV_stack_12->SetBinError(10,1.241348);
   hNCinFV_stack_12->SetBinError(11,1.038297);
   hNCinFV_stack_12->SetBinError(12,0.9620561);
   hNCinFV_stack_12->SetBinError(13,0.8559962);
   hNCinFV_stack_12->SetBinError(14,0.8097566);
   hNCinFV_stack_12->SetBinError(15,0.5878314);
   hNCinFV_stack_12->SetBinError(16,0.4800908);
   hNCinFV_stack_12->SetBinError(17,0.3929602);
   hNCinFV_stack_12->SetBinError(18,0.1967154);
   hNCinFV_stack_12->SetBinError(19,0.1950249);
   hNCinFV_stack_12->SetBinError(20,0.1950249);
   hNCinFV_stack_12->SetBinError(21,0.3929602);
   hNCinFV_stack_12->SetBinError(26,0.48078);
   hNCinFV_stack_12->SetEntries(550);

   ci = 1515;
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
   hs6->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,0.8520313);
   hnumuCCinFV_stack_13->SetBinContent(1,0.4531029);
   hnumuCCinFV_stack_13->SetBinContent(2,0.8344898);
   hnumuCCinFV_stack_13->SetBinContent(3,6.119692);
   hnumuCCinFV_stack_13->SetBinContent(4,35.60917);
   hnumuCCinFV_stack_13->SetBinContent(5,16.94969);
   hnumuCCinFV_stack_13->SetBinContent(6,16.89901);
   hnumuCCinFV_stack_13->SetBinContent(7,6.995343);
   hnumuCCinFV_stack_13->SetBinContent(8,10.95632);
   hnumuCCinFV_stack_13->SetBinContent(9,10.83125);
   hnumuCCinFV_stack_13->SetBinContent(10,6.514216);
   hnumuCCinFV_stack_13->SetBinContent(11,6.993728);
   hnumuCCinFV_stack_13->SetBinContent(12,5.164931);
   hnumuCCinFV_stack_13->SetBinContent(13,3.905294);
   hnumuCCinFV_stack_13->SetBinContent(14,1.415517);
   hnumuCCinFV_stack_13->SetBinContent(15,2.869872);
   hnumuCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(17,0.9311764);
   hnumuCCinFV_stack_13->SetBinContent(18,0.3966454);
   hnumuCCinFV_stack_13->SetBinContent(19,1.288363);
   hnumuCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(26,0.7834804);
   hnumuCCinFV_stack_13->SetBinError(0,0.4302702);
   hnumuCCinFV_stack_13->SetBinError(1,0.3231587);
   hnumuCCinFV_stack_13->SetBinError(2,0.4194775);
   hnumuCCinFV_stack_13->SetBinError(3,1.547226);
   hnumuCCinFV_stack_13->SetBinError(4,3.708978);
   hnumuCCinFV_stack_13->SetBinError(5,2.159322);
   hnumuCCinFV_stack_13->SetBinError(6,2.786419);
   hnumuCCinFV_stack_13->SetBinError(7,1.344242);
   hnumuCCinFV_stack_13->SetBinError(8,1.746568);
   hnumuCCinFV_stack_13->SetBinError(9,1.863944);
   hnumuCCinFV_stack_13->SetBinError(10,1.792338);
   hnumuCCinFV_stack_13->SetBinError(11,1.318711);
   hnumuCCinFV_stack_13->SetBinError(12,1.168309);
   hnumuCCinFV_stack_13->SetBinError(13,1.011253);
   hnumuCCinFV_stack_13->SetBinError(14,0.652042);
   hnumuCCinFV_stack_13->SetBinError(15,0.9350549);
   hnumuCCinFV_stack_13->SetBinError(16,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(17,0.5566661);
   hnumuCCinFV_stack_13->SetBinError(18,0.2782161);
   hnumuCCinFV_stack_13->SetBinError(19,0.9371751);
   hnumuCCinFV_stack_13->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(26,0.3917439);
   hnumuCCinFV_stack_13->SetEntries(526);

   ci = 1516;
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
   hs6->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(4,8.397515);
   hnueCCinFV_stack_14->SetBinContent(5,4.38089);
   hnueCCinFV_stack_14->SetBinContent(6,2.356795);
   hnueCCinFV_stack_14->SetBinContent(7,2.470533);
   hnueCCinFV_stack_14->SetBinContent(8,1.092552);
   hnueCCinFV_stack_14->SetBinContent(9,3.53616);
   hnueCCinFV_stack_14->SetBinContent(10,0.9269427);
   hnueCCinFV_stack_14->SetBinContent(11,0.4153488);
   hnueCCinFV_stack_14->SetBinContent(12,0.9442491);
   hnueCCinFV_stack_14->SetBinContent(14,1.034834);
   hnueCCinFV_stack_14->SetBinContent(15,0.2180157);
   hnueCCinFV_stack_14->SetBinContent(16,0.8989917);
   hnueCCinFV_stack_14->SetBinContent(20,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(26,0.3401776);
   hnueCCinFV_stack_14->SetBinError(2,0.3401776);
   hnueCCinFV_stack_14->SetBinError(4,2.003427);
   hnueCCinFV_stack_14->SetBinError(5,1.126252);
   hnueCCinFV_stack_14->SetBinError(6,0.9083292);
   hnueCCinFV_stack_14->SetBinError(7,0.7997968);
   hnueCCinFV_stack_14->SetBinError(8,0.4927304);
   hnueCCinFV_stack_14->SetBinError(9,1.898157);
   hnueCCinFV_stack_14->SetBinError(10,0.4800908);
   hnueCCinFV_stack_14->SetBinError(11,0.2942402);
   hnueCCinFV_stack_14->SetBinError(12,0.601091);
   hnueCCinFV_stack_14->SetBinError(14,0.8621563);
   hnueCCinFV_stack_14->SetBinError(15,0.2180157);
   hnueCCinFV_stack_14->SetBinError(16,0.7304821);
   hnueCCinFV_stack_14->SetBinError(20,0.4531728);
   hnueCCinFV_stack_14->SetBinError(26,0.3401776);
   hnueCCinFV_stack_14->SetEntries(97);

   ci = 1517;
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
   hs6->Add(hnueCCinFV_stack_14,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__17->SetBinContent(0,1.242356);
   hmcerror__17->SetBinContent(1,1.857063);
   hmcerror__17->SetBinContent(2,5.198032);
   hmcerror__17->SetBinContent(3,38.41261);
   hmcerror__17->SetBinContent(4,898.4574);
   hmcerror__17->SetBinContent(5,508.4896);
   hmcerror__17->SetBinContent(6,326.4657);
   hmcerror__17->SetBinContent(7,261.689);
   hmcerror__17->SetBinContent(8,208.9385);
   hmcerror__17->SetBinContent(9,164.0663);
   hmcerror__17->SetBinContent(10,113.2276);
   hmcerror__17->SetBinContent(11,91.03667);
   hmcerror__17->SetBinContent(12,67.63644);
   hmcerror__17->SetBinContent(13,50.96668);
   hmcerror__17->SetBinContent(14,30.21598);
   hmcerror__17->SetBinContent(15,25.16357);
   hmcerror__17->SetBinContent(16,17.39473);
   hmcerror__17->SetBinContent(17,14.61944);
   hmcerror__17->SetBinContent(18,11.11033);
   hmcerror__17->SetBinContent(19,7.897144);
   hmcerror__17->SetBinContent(20,4.053343);
   hmcerror__17->SetBinContent(21,4.651529);
   hmcerror__17->SetBinContent(22,5.124819);
   hmcerror__17->SetBinContent(23,3.262748);
   hmcerror__17->SetBinContent(24,2.372864);
   hmcerror__17->SetBinContent(25,5.264298);
   hmcerror__17->SetBinContent(26,9.56301);
   hmcerror__17->SetBinError(0,0.4781381);
   hmcerror__17->SetBinError(1,1.858001);
   hmcerror__17->SetBinError(2,2.45749);
   hmcerror__17->SetBinError(3,9.679238);
   hmcerror__17->SetBinError(4,196.8684);
   hmcerror__17->SetBinError(5,107.9263);
   hmcerror__17->SetBinError(6,69.99765);
   hmcerror__17->SetBinError(7,57.17485);
   hmcerror__17->SetBinError(8,46.73218);
   hmcerror__17->SetBinError(9,39.73749);
   hmcerror__17->SetBinError(10,26.00807);
   hmcerror__17->SetBinError(11,22.13334);
   hmcerror__17->SetBinError(12,18.76349);
   hmcerror__17->SetBinError(13,14.21426);
   hmcerror__17->SetBinError(14,9.479663);
   hmcerror__17->SetBinError(15,7.773345);
   hmcerror__17->SetBinError(16,9.441234);
   hmcerror__17->SetBinError(17,6.351465);
   hmcerror__17->SetBinError(18,6.076751);
   hmcerror__17->SetBinError(19,3.370108);
   hmcerror__17->SetBinError(20,3.254022);
   hmcerror__17->SetBinError(21,3.349568);
   hmcerror__17->SetBinError(22,4.927871);
   hmcerror__17->SetBinError(23,2.540937);
   hmcerror__17->SetBinError(24,2.564387);
   hmcerror__17->SetBinError(25,3.032018);
   hmcerror__17->SetBinError(26,5.414344);
   hmcerror__17->SetEntries(2848.296);

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
   -125,
   -75,
   -25,
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
   975,
   1025,
   1075};
   Double_t _fy3021[25] = {
   2,
   6,
   54,
   999,
   541,
   338,
   232,
   215,
   134,
   108,
   74,
   63,
   34,
   32,
   31,
   19,
   11,
   8,
   10,
   7,
   3,
   1,
   3,
   2,
   0};
   Double_t _felx3021[25] = {
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3021[25] = {
   2,
   2.67925,
   7.4785,
   31.60696,
   23.25941,
   18.38478,
   15.23155,
   14.66288,
   11.57584,
   10.3923,
   8.7275,
   8.0648,
   5.9703,
   5.7977,
   5.7094,
   4.5151,
   3.4975,
   3.0307,
   3.34883,
   2.85954,
   2.143368,
   1,
   2.143368,
   2,
   0};
   Double_t _fehx3021[25] = {
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3021[25] = {
   1.51917,
   2.41858,
   7.275,
   31.60696,
   23.25941,
   18.38478,
   15.23155,
   14.66288,
   11.57584,
   10.3923,
   8.5253,
   7.862,
   5.7635,
   5.5904,
   5.5017,
   4.3011,
   3.27,
   2.7896,
   3.1179,
   2.61053,
   1.72422,
   1.35971,
   1.72422,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-275,1225);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(1133.668);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2927.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.0","F");

   ci = 1504;
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

   ci = 1505;
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

   ci = 1506;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1507;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1509;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  220.9","F");

   ci = 1511;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1512;
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

   ci = 1513;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 417.8","F");

   ci = 1514;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 129.3","F");

   ci = 1515;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 135.5","F");

   ci = 1516;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 27.6","F");

   ci = 1517;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
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
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3022[25] = {
   1.000505,
   0.4727732,
   0.2519808,
   0.2191182,
   0.2122488,
   0.2144104,
   0.218484,
   0.2236648,
   0.2422039,
   0.2296973,
   0.2431256,
   0.2774169,
   0.2788932,
   0.3137302,
   0.3089126,
   0.5427641,
   0.4344532,
   0.5469462,
   0.4267503,
   0.8027996,
   0.7201006,
   0.9615699,
   0.7787722,
   1.080714,
   0.5759586};
   Double_t _fehx3022[25] = {
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3022[25] = {
   1.000505,
   0.4727732,
   0.2519808,
   0.2191182,
   0.2122488,
   0.2144104,
   0.218484,
   0.2236648,
   0.2422039,
   0.2296973,
   0.2431256,
   0.2774169,
   0.2788932,
   0.3137302,
   0.3089126,
   0.5427641,
   0.4344532,
   0.5469462,
   0.4267503,
   0.8027996,
   0.7201006,
   0.9615699,
   0.7787722,
   1.080714,
   0.5759586};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-275,1225);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Pred");
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
   -125,
   -75,
   -25,
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
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3023[25] = {
   0.4827223,
   0.3270603,
   0.1847929,
   0.1975961,
   0.1984859,
   0.1956796,
   0.1905156,
   0.2019404,
   0.2038491,
   0.209861,
   0.1878765,
   0.2113774,
   0.2084429,
   0.2298909,
   0.1955696,
   0.2585602,
   0.2401106,
   0.2567852,
   0.2883886,
   0.3170922,
   0.3765885,
   0.3390324,
   0.3661316,
   0.4211008,
   0.3465239};
   Double_t _fehx3023[25] = {
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3023[25] = {
   0.4827223,
   0.3270603,
   0.1847929,
   0.1975961,
   0.1984859,
   0.1956796,
   0.1905156,
   0.2019404,
   0.2038491,
   0.209861,
   0.1878765,
   0.2113774,
   0.2084429,
   0.2298909,
   0.1955696,
   0.2585602,
   0.2401106,
   0.2567852,
   0.2883886,
   0.3170922,
   0.3765885,
   0.3390324,
   0.3661316,
   0.4211008,
   0.3465239};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-275,1225);
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
   -125,
   -75,
   -25,
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
   975,
   1025,
   1075};
   Double_t _fy3024[25] = {
   1.07697,
   1.154283,
   1.405789,
   1.111906,
   1.063935,
   1.035331,
   0.8865486,
   1.029011,
   0.8167432,
   0.9538312,
   0.8128593,
   0.9314506,
   0.6671025,
   1.059042,
   1.231939,
   1.092285,
   0.7524226,
   0.7200509,
   1.266281,
   1.72697,
   0.6449492,
   0.1951289,
   0.9194703,
   0.8428635,
   0};
   Double_t _felx3024[25] = {
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3024[25] = {
   1.07697,
   0.5154354,
   0.1946887,
   0.03517914,
   0.04574215,
   0.05631458,
   0.05820476,
   0.07017796,
   0.07055587,
   0.09178245,
   0.09586797,
   0.1192375,
   0.1171412,
   0.1918753,
   0.2268915,
   0.2595672,
   0.2392362,
   0.2727823,
   0.4240558,
   0.705477,
   0.4607879,
   0.1951289,
   0.656921,
   0.8428635,
   0};
   Double_t _fehx3024[25] = {
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
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3024[25] = {
   0.81805,
   0.4652876,
   0.189391,
   0.03517914,
   0.04574215,
   0.05631458,
   0.05820476,
   0.07017796,
   0.07055587,
   0.09178245,
   0.09364688,
   0.1162391,
   0.1130837,
   0.1850147,
   0.2186375,
   0.2472646,
   0.2236747,
   0.2510817,
   0.3948136,
   0.6440437,
   0.3706781,
   0.2653186,
   0.5284563,
   0.6402265,
   0.2180348};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-275,1225);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.608115);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
