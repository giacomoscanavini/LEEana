#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Jun  8 17:52:19 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-3.467118,1260.256,383.3902);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__19->SetBinContent(0,308.829);
   hmc__19->SetBinContent(2,0.1950248);
   hmc__19->SetBinContent(3,0.3900497);
   hmc__19->SetBinContent(4,5.269118);
   hmc__19->SetBinContent(5,74.08934);
   hmc__19->SetBinContent(6,144.5047);
   hmc__19->SetBinContent(7,173.3559);
   hmc__19->SetBinContent(8,167.0335);
   hmc__19->SetBinContent(9,166.2191);
   hmc__19->SetBinContent(10,152.4115);
   hmc__19->SetBinContent(11,142.4611);
   hmc__19->SetBinContent(12,117.844);
   hmc__19->SetBinContent(13,103.3372);
   hmc__19->SetBinContent(14,102.2239);
   hmc__19->SetBinContent(15,71.76866);
   hmc__19->SetBinContent(16,61.45761);
   hmc__19->SetBinContent(17,49.73728);
   hmc__19->SetBinContent(18,47.94318);
   hmc__19->SetBinContent(19,35.63135);
   hmc__19->SetBinContent(20,25.19501);
   hmc__19->SetBinContent(21,22.6214);
   hmc__19->SetBinContent(22,20.36584);
   hmc__19->SetBinContent(23,10.23014);
   hmc__19->SetBinContent(24,11.79447);
   hmc__19->SetBinContent(25,9.9661);
   hmc__19->SetBinContent(26,43.54011);
   hmc__19->SetBinError(0,10.79113);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,1.091474);
   hmc__19->SetBinError(3,4.074387);
   hmc__19->SetBinError(4,6.477344);
   hmc__19->SetBinError(5,28.67749);
   hmc__19->SetBinError(6,48.5964);
   hmc__19->SetBinError(7,53.47662);
   hmc__19->SetBinError(8,55.24403);
   hmc__19->SetBinError(9,51.20712);
   hmc__19->SetBinError(10,48.93358);
   hmc__19->SetBinError(11,51.71486);
   hmc__19->SetBinError(12,43.8762);
   hmc__19->SetBinError(13,34.55214);
   hmc__19->SetBinError(14,31.4882);
   hmc__19->SetBinError(15,24.61989);
   hmc__19->SetBinError(16,21.80759);
   hmc__19->SetBinError(17,18.43861);
   hmc__19->SetBinError(18,18.22642);
   hmc__19->SetBinError(19,14.13737);
   hmc__19->SetBinError(20,10.98504);
   hmc__19->SetBinError(21,12.52789);
   hmc__19->SetBinError(22,12.36106);
   hmc__19->SetBinError(23,5.992353);
   hmc__19->SetBinError(24,7.694307);
   hmc__19->SetBinError(25,7.385902);
   hmc__19->SetBinError(26,19.27166);
   hmc__19->SetMinimum(-3.467118);
   hmc__19->SetMaximum(364.0473);
   hmc__19->SetEntries(2065.938);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-150,1100);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(182.0237);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,3.114554);
   hbadmatch_stack_1->SetBinContent(5,0.1967154);
   hbadmatch_stack_1->SetBinContent(6,0.7336084);
   hbadmatch_stack_1->SetBinContent(7,0.3401776);
   hbadmatch_stack_1->SetBinContent(8,1.662284);
   hbadmatch_stack_1->SetBinContent(9,1.01717);
   hbadmatch_stack_1->SetBinContent(10,0.1967445);
   hbadmatch_stack_1->SetBinContent(11,0.8770706);
   hbadmatch_stack_1->SetBinContent(12,0.3900497);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,1.073786);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.2336748);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,0.5352025);
   hbadmatch_stack_1->SetBinContent(22,0.536893);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinContent(26,0.9738604);
   hbadmatch_stack_1->SetBinError(0,0.9316243);
   hbadmatch_stack_1->SetBinError(5,0.1967154);
   hbadmatch_stack_1->SetBinError(6,0.4394482);
   hbadmatch_stack_1->SetBinError(7,0.3401776);
   hbadmatch_stack_1->SetBinError(8,0.6972943);
   hbadmatch_stack_1->SetBinError(9,0.4560143);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.5197486);
   hbadmatch_stack_1->SetBinError(12,0.2758068);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.5557297);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.2336748);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.3921167);
   hbadmatch_stack_1->SetBinError(22,0.3929602);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetBinError(26,0.5009877);
   hbadmatch_stack_1->SetEntries(57);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1518;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,4.46377);
   hext_stack_2->SetBinContent(8,2.566457);
   hext_stack_2->SetBinContent(9,0.6487947);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(13,1.461993);
   hext_stack_2->SetBinContent(14,3.215251);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,0.6416141);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,1.055394);
   hext_stack_2->SetBinError(0,1.244309);
   hext_stack_2->SetBinError(8,1.283228);
   hext_stack_2->SetBinError(9,0.4587671);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(13,0.7356036);
   hext_stack_2->SetBinError(14,1.36277);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.6416141);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.6130171);
   hext_stack_2->SetEntries(43);

   ci = 1519;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,0.4377912);
   hdirt_stack_3->SetBinError(0,0.3095651);
   hdirt_stack_3->SetEntries(2);

   ci = 1520;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,1.903757);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.5352025);
   houtFV_stack_4->SetBinContent(7,0.3401776);
   houtFV_stack_4->SetBinContent(8,0.5867651);
   houtFV_stack_4->SetBinContent(10,0.3401776);
   houtFV_stack_4->SetBinContent(11,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.1950248);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1950248);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinError(0,0.6490939);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.3921167);
   houtFV_stack_4->SetBinError(7,0.3401776);
   houtFV_stack_4->SetBinError(8,0.3387718);
   houtFV_stack_4->SetBinError(10,0.3401776);
   houtFV_stack_4->SetBinError(11,0.3401776);
   houtFV_stack_4->SetBinError(15,0.1950249);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1950249);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetEntries(22);

   ci = 1521;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1522;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(12);

   ci = 1523;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,27.58091);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.8908078);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.17912);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.151052);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.929348);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.872548);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.41253);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.179784);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.74517);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.52413);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.164838);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.24513);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.603094);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8507857);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.9481038);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.98979);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.3484178);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2233681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.404386);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.753636);
   hNCpi0inFVres_stack_7->SetBinError(0,1.681091);
   hNCpi0inFVres_stack_7->SetBinError(4,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2557093);
   hNCpi0inFVres_stack_7->SetBinError(6,0.609936);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5817943);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5814042);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5333375);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5146443);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5987731);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5309604);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5176605);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6151253);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5100866);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4204368);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2514891);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2696619);
   hNCpi0inFVres_stack_7->SetBinError(19,0.336735);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1283607);
   hNCpi0inFVres_stack_7->SetBinError(21,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(23,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1974492);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2253713);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2941681);
   hNCpi0inFVres_stack_7->SetEntries(1195);

   ci = 1524;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,12.3506);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.645276);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.841744);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.09118);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.910994);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.244794);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.226272);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.72964);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.174216);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.158934);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.672344);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.409122);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.951016);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5716177);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.4314539);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3068998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.603094);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.069863);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4137491);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5112937);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4794732);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4871906);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4412148);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.247458);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4000385);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.495704);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4472745);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3907692);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3799115);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1480721);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4893825);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1506776);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1797343);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.09253378);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4204368);
   hNCpi0inFVdis_stack_8->SetEntries(778);

   ci = 1525;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(0,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1526;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1527;
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
   hs7->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,166.4391);
   hCCpi0inFV_stack_11->SetBinContent(3,0.3900497);
   hCCpi0inFV_stack_11->SetBinContent(4,3.234029);
   hCCpi0inFV_stack_11->SetBinContent(5,62.71282);
   hCCpi0inFV_stack_11->SetBinContent(6,125.5408);
   hCCpi0inFV_stack_11->SetBinContent(7,149.883);
   hCCpi0inFV_stack_11->SetBinContent(8,140.1604);
   hCCpi0inFV_stack_11->SetBinContent(9,139.9576);
   hCCpi0inFV_stack_11->SetBinContent(10,133.117);
   hCCpi0inFV_stack_11->SetBinContent(11,118.8168);
   hCCpi0inFV_stack_11->SetBinContent(12,95.28571);
   hCCpi0inFV_stack_11->SetBinContent(13,80.95493);
   hCCpi0inFV_stack_11->SetBinContent(14,78.6913);
   hCCpi0inFV_stack_11->SetBinContent(15,54.28602);
   hCCpi0inFV_stack_11->SetBinContent(16,48.71767);
   hCCpi0inFV_stack_11->SetBinContent(17,37.77117);
   hCCpi0inFV_stack_11->SetBinContent(18,37.73596);
   hCCpi0inFV_stack_11->SetBinContent(19,26.81033);
   hCCpi0inFV_stack_11->SetBinContent(20,18.88934);
   hCCpi0inFV_stack_11->SetBinContent(21,17.30385);
   hCCpi0inFV_stack_11->SetBinContent(22,14.46024);
   hCCpi0inFV_stack_11->SetBinContent(23,7.923931);
   hCCpi0inFV_stack_11->SetBinContent(24,8.90811);
   hCCpi0inFV_stack_11->SetBinContent(25,6.647276);
   hCCpi0inFV_stack_11->SetBinContent(26,30.78051);
   hCCpi0inFV_stack_11->SetBinError(0,6.429598);
   hCCpi0inFV_stack_11->SetBinError(3,0.2758068);
   hCCpi0inFV_stack_11->SetBinError(4,0.9017167);
   hCCpi0inFV_stack_11->SetBinError(5,3.97584);
   hCCpi0inFV_stack_11->SetBinError(6,5.622561);
   hCCpi0inFV_stack_11->SetBinError(7,6.146392);
   hCCpi0inFV_stack_11->SetBinError(8,5.88749);
   hCCpi0inFV_stack_11->SetBinError(9,5.920829);
   hCCpi0inFV_stack_11->SetBinError(10,5.868361);
   hCCpi0inFV_stack_11->SetBinError(11,5.447864);
   hCCpi0inFV_stack_11->SetBinError(12,4.894535);
   hCCpi0inFV_stack_11->SetBinError(13,4.485509);
   hCCpi0inFV_stack_11->SetBinError(14,4.499686);
   hCCpi0inFV_stack_11->SetBinError(15,3.673881);
   hCCpi0inFV_stack_11->SetBinError(16,3.50872);
   hCCpi0inFV_stack_11->SetBinError(17,3.049843);
   hCCpi0inFV_stack_11->SetBinError(18,3.143888);
   hCCpi0inFV_stack_11->SetBinError(19,2.602823);
   hCCpi0inFV_stack_11->SetBinError(20,2.247687);
   hCCpi0inFV_stack_11->SetBinError(21,2.067877);
   hCCpi0inFV_stack_11->SetBinError(22,1.953877);
   hCCpi0inFV_stack_11->SetBinError(23,1.359393);
   hCCpi0inFV_stack_11->SetBinError(24,1.496911);
   hCCpi0inFV_stack_11->SetBinError(25,1.302457);
   hCCpi0inFV_stack_11->SetBinError(26,2.810742);
   hCCpi0inFV_stack_11->SetEntries(6872);

   ci = 1528;
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
   hs7->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,15.76878);
   hNCinFV_stack_12->SetBinContent(2,0.1950248);
   hNCinFV_stack_12->SetBinContent(4,0.3917402);
   hNCinFV_stack_12->SetBinContent(5,0.6803553);
   hNCinFV_stack_12->SetBinContent(6,0.9303237);
   hNCinFV_stack_12->SetBinContent(7,1.65886);
   hNCinFV_stack_12->SetBinContent(9,1.123658);
   hNCinFV_stack_12->SetBinContent(10,1.465526);
   hNCinFV_stack_12->SetBinContent(11,0.9801958);
   hNCinFV_stack_12->SetBinContent(12,1.65886);
   hNCinFV_stack_12->SetBinContent(13,1.467217);
   hNCinFV_stack_12->SetBinContent(14,0.9303237);
   hNCinFV_stack_12->SetBinContent(15,0.6803553);
   hNCinFV_stack_12->SetBinContent(16,0.1967154);
   hNCinFV_stack_12->SetBinContent(17,0.9303237);
   hNCinFV_stack_12->SetBinContent(18,0.9303237);
   hNCinFV_stack_12->SetBinContent(19,0.1950248);
   hNCinFV_stack_12->SetBinContent(20,0.536893);
   hNCinFV_stack_12->SetBinContent(21,0.8770706);
   hNCinFV_stack_12->SetBinContent(22,0.1967154);
   hNCinFV_stack_12->SetBinContent(23,0.3401776);
   hNCinFV_stack_12->SetBinContent(24,0.1950248);
   hNCinFV_stack_12->SetBinContent(26,1.26712);
   hNCinFV_stack_12->SetBinError(0,2.029996);
   hNCinFV_stack_12->SetBinError(2,0.1950249);
   hNCinFV_stack_12->SetBinError(4,0.2770047);
   hNCinFV_stack_12->SetBinError(5,0.4810838);
   hNCinFV_stack_12->SetBinError(6,0.4814682);
   hNCinFV_stack_12->SetBinError(7,0.650338);
   hNCinFV_stack_12->SetBinError(9,0.5188295);
   hNCinFV_stack_12->SetBinError(10,0.6209405);
   hNCinFV_stack_12->SetBinError(11,0.4383608);
   hNCinFV_stack_12->SetBinError(12,0.650338);
   hNCinFV_stack_12->SetBinError(13,0.6214735);
   hNCinFV_stack_12->SetBinError(14,0.4814682);
   hNCinFV_stack_12->SetBinError(15,0.4810838);
   hNCinFV_stack_12->SetBinError(16,0.1967154);
   hNCinFV_stack_12->SetBinError(17,0.4814682);
   hNCinFV_stack_12->SetBinError(18,0.4814682);
   hNCinFV_stack_12->SetBinError(19,0.1950249);
   hNCinFV_stack_12->SetBinError(20,0.3929602);
   hNCinFV_stack_12->SetBinError(21,0.5197486);
   hNCinFV_stack_12->SetBinError(22,0.1967154);
   hNCinFV_stack_12->SetBinError(23,0.3401776);
   hNCinFV_stack_12->SetBinError(24,0.1950249);
   hNCinFV_stack_12->SetBinError(26,0.5883944);
   hNCinFV_stack_12->SetEntries(139);

   ci = 1529;
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
   hs7->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,74.66389);
   hnumuCCinFV_stack_13->SetBinContent(4,1.615449);
   hnumuCCinFV_stack_13->SetBinContent(5,9.017365);
   hnumuCCinFV_stack_13->SetBinContent(6,11.9403);
   hnumuCCinFV_stack_13->SetBinContent(7,15.80064);
   hnumuCCinFV_stack_13->SetBinContent(8,17.03705);
   hnumuCCinFV_stack_13->SetBinContent(9,18.34822);
   hnumuCCinFV_stack_13->SetBinContent(10,11.90277);
   hnumuCCinFV_stack_13->SetBinContent(11,15.50282);
   hnumuCCinFV_stack_13->SetBinContent(12,16.03458);
   hnumuCCinFV_stack_13->SetBinContent(13,14.02232);
   hnumuCCinFV_stack_13->SetBinContent(14,13.67148);
   hnumuCCinFV_stack_13->SetBinContent(15,12.68979);
   hnumuCCinFV_stack_13->SetBinContent(16,7.936107);
   hnumuCCinFV_stack_13->SetBinContent(17,8.941056);
   hnumuCCinFV_stack_13->SetBinContent(18,7.030288);
   hnumuCCinFV_stack_13->SetBinContent(19,5.345012);
   hnumuCCinFV_stack_13->SetBinContent(20,3.175949);
   hnumuCCinFV_stack_13->SetBinContent(21,2.982023);
   hnumuCCinFV_stack_13->SetBinContent(22,3.424227);
   hnumuCCinFV_stack_13->SetBinContent(23,1.26712);
   hnumuCCinFV_stack_13->SetBinContent(24,1.713804);
   hnumuCCinFV_stack_13->SetBinContent(25,1.853885);
   hnumuCCinFV_stack_13->SetBinContent(26,6.911466);
   hnumuCCinFV_stack_13->SetBinError(0,4.8842);
   hnumuCCinFV_stack_13->SetBinError(4,0.6232255);
   hnumuCCinFV_stack_13->SetBinError(5,1.547151);
   hnumuCCinFV_stack_13->SetBinError(6,1.758327);
   hnumuCCinFV_stack_13->SetBinError(7,2.230786);
   hnumuCCinFV_stack_13->SetBinError(8,2.13491);
   hnumuCCinFV_stack_13->SetBinError(9,2.220533);
   hnumuCCinFV_stack_13->SetBinError(10,1.680784);
   hnumuCCinFV_stack_13->SetBinError(11,2.017453);
   hnumuCCinFV_stack_13->SetBinError(12,2.182738);
   hnumuCCinFV_stack_13->SetBinError(13,1.988031);
   hnumuCCinFV_stack_13->SetBinError(14,1.897684);
   hnumuCCinFV_stack_13->SetBinError(15,1.803213);
   hnumuCCinFV_stack_13->SetBinError(16,1.406297);
   hnumuCCinFV_stack_13->SetBinError(17,1.521873);
   hnumuCCinFV_stack_13->SetBinError(18,1.375894);
   hnumuCCinFV_stack_13->SetBinError(19,1.216453);
   hnumuCCinFV_stack_13->SetBinError(20,0.8772215);
   hnumuCCinFV_stack_13->SetBinError(21,0.8886675);
   hnumuCCinFV_stack_13->SetBinError(22,0.8770549);
   hnumuCCinFV_stack_13->SetBinError(23,0.5883944);
   hnumuCCinFV_stack_13->SetBinError(24,0.6207051);
   hnumuCCinFV_stack_13->SetBinError(25,0.6789509);
   hnumuCCinFV_stack_13->SetBinError(26,1.471194);
   hnumuCCinFV_stack_13->SetEntries(1197);

   ci = 1530;
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
   hs7->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,1.492548);
   hnueCCinFV_stack_14->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(10,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(11,0.536893);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(22,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,0.6803553);
   hnueCCinFV_stack_14->SetBinContent(26,0.1950248);
   hnueCCinFV_stack_14->SetBinError(0,0.6300226);
   hnueCCinFV_stack_14->SetBinError(7,0.3401776);
   hnueCCinFV_stack_14->SetBinError(9,0.3401776);
   hnueCCinFV_stack_14->SetBinError(10,0.438694);
   hnueCCinFV_stack_14->SetBinError(11,0.3929602);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(22,0.3921167);
   hnueCCinFV_stack_14->SetBinError(23,0.1967154);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.4810838);
   hnueCCinFV_stack_14->SetBinError(26,0.1950249);
   hnueCCinFV_stack_14->SetEntries(22);

   ci = 1531;
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
   hs7->Add(hnueCCinFV_stack_14,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__20->SetBinContent(0,308.829);
   hmcerror__20->SetBinContent(2,0.1950248);
   hmcerror__20->SetBinContent(3,0.3900497);
   hmcerror__20->SetBinContent(4,5.269118);
   hmcerror__20->SetBinContent(5,74.08934);
   hmcerror__20->SetBinContent(6,144.5047);
   hmcerror__20->SetBinContent(7,173.3559);
   hmcerror__20->SetBinContent(8,167.0335);
   hmcerror__20->SetBinContent(9,166.2191);
   hmcerror__20->SetBinContent(10,152.4115);
   hmcerror__20->SetBinContent(11,142.4611);
   hmcerror__20->SetBinContent(12,117.844);
   hmcerror__20->SetBinContent(13,103.3372);
   hmcerror__20->SetBinContent(14,102.2239);
   hmcerror__20->SetBinContent(15,71.76866);
   hmcerror__20->SetBinContent(16,61.45761);
   hmcerror__20->SetBinContent(17,49.73728);
   hmcerror__20->SetBinContent(18,47.94318);
   hmcerror__20->SetBinContent(19,35.63135);
   hmcerror__20->SetBinContent(20,25.19501);
   hmcerror__20->SetBinContent(21,22.6214);
   hmcerror__20->SetBinContent(22,20.36584);
   hmcerror__20->SetBinContent(23,10.23014);
   hmcerror__20->SetBinContent(24,11.79447);
   hmcerror__20->SetBinContent(25,9.9661);
   hmcerror__20->SetBinContent(26,43.54011);
   hmcerror__20->SetBinError(0,10.79113);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,1.091474);
   hmcerror__20->SetBinError(3,4.074387);
   hmcerror__20->SetBinError(4,6.477344);
   hmcerror__20->SetBinError(5,28.67749);
   hmcerror__20->SetBinError(6,48.5964);
   hmcerror__20->SetBinError(7,53.47662);
   hmcerror__20->SetBinError(8,55.24403);
   hmcerror__20->SetBinError(9,51.20712);
   hmcerror__20->SetBinError(10,48.93358);
   hmcerror__20->SetBinError(11,51.71486);
   hmcerror__20->SetBinError(12,43.8762);
   hmcerror__20->SetBinError(13,34.55214);
   hmcerror__20->SetBinError(14,31.4882);
   hmcerror__20->SetBinError(15,24.61989);
   hmcerror__20->SetBinError(16,21.80759);
   hmcerror__20->SetBinError(17,18.43861);
   hmcerror__20->SetBinError(18,18.22642);
   hmcerror__20->SetBinError(19,14.13737);
   hmcerror__20->SetBinError(20,10.98504);
   hmcerror__20->SetBinError(21,12.52789);
   hmcerror__20->SetBinError(22,12.36106);
   hmcerror__20->SetBinError(23,5.992353);
   hmcerror__20->SetBinError(24,7.694307);
   hmcerror__20->SetBinError(25,7.385902);
   hmcerror__20->SetBinError(26,19.27166);
   hmcerror__20->SetEntries(2065.938);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
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
   Double_t _fy3025[25] = {
   0,
   0,
   2,
   2,
   64,
   132,
   153,
   159,
   158,
   134,
   141,
   114,
   81,
   70,
   78,
   57,
   43,
   29,
   24,
   19,
   17,
   9,
   11,
   4,
   7};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   0,
   0,
   2,
   2,
   8.1273,
   11.48913,
   12.36932,
   12.60952,
   12.56981,
   11.57584,
   11.87434,
   10.67708,
   9.1239,
   8.4925,
   8.9562,
   7.679,
   6.6917,
   5.5285,
   5.0476,
   4.5151,
   4.2835,
   3.19354,
   3.4975,
   2.29683,
   2.85954};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   1.1478,
   1.1478,
   1.51917,
   1.51917,
   7.9246,
   11.48913,
   12.36932,
   12.60952,
   12.56981,
   11.57584,
   11.87434,
   10.67708,
   8.9221,
   8.2902,
   8.7542,
   7.4757,
   6.4868,
   5.3201,
   4.837,
   4.3011,
   4.0673,
   2.9582,
   3.27,
   1.98186,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-275,1225);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(188.7705);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1508.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.0","F");

   ci = 1518;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 11.9","F");

   ci = 1519;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

   ci = 1520;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 3.3","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

   ci = 1522;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

   ci = 1523;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.3","F");

   ci = 1524;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.4","F");

   ci = 1525;
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

   ci = 1526;
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

   ci = 1527;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1408.2","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 16.6","F");

   ci = 1529;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 201.3","F");

   ci = 1530;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 3.9","F");

   ci = 1531;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
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
   Double_t _fely3026[25] = {
   0,
   5.59659,
   10.44581,
   1.229303,
   0.3870664,
   0.3362965,
   0.3084788,
   0.3307363,
   0.30807,
   0.3210623,
   0.3630103,
   0.3723244,
   0.3343632,
   0.3080317,
   0.3430451,
   0.3548395,
   0.3707202,
   0.380167,
   0.3967677,
   0.4360006,
   0.5538069,
   0.6069504,
   0.5857545,
   0.6523656,
   0.7411026};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0,
   5.59659,
   10.44581,
   1.229303,
   0.3870664,
   0.3362965,
   0.3084788,
   0.3307363,
   0.30807,
   0.3210623,
   0.3630103,
   0.3723244,
   0.3343632,
   0.3080317,
   0.3430451,
   0.3548395,
   0.3707202,
   0.380167,
   0.3967677,
   0.4360006,
   0.5538069,
   0.6069504,
   0.5857545,
   0.6523656,
   0.7411026};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-275,1225);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
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
   Double_t _fy3027[25] = {
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
   Double_t _felx3027[25] = {
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
   Double_t _fely3027[25] = {
   0,
   2.134963,
   1.263218,
   0.3495982,
   0.2695781,
   0.2789351,
   0.2477506,
   0.275032,
   0.2642721,
   0.2639022,
   0.2343242,
   0.2587749,
   0.2439896,
   0.2379809,
   0.2659401,
   0.2494556,
   0.2615716,
   0.2472863,
   0.2745975,
   0.2515357,
   0.2566506,
   0.2602446,
   0.312411,
   0.2880085,
   0.323786};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0,
   2.134963,
   1.263218,
   0.3495982,
   0.2695781,
   0.2789351,
   0.2477506,
   0.275032,
   0.2642721,
   0.2639022,
   0.2343242,
   0.2587749,
   0.2439896,
   0.2379809,
   0.2659401,
   0.2494556,
   0.2615716,
   0.2472863,
   0.2745975,
   0.2515357,
   0.2566506,
   0.2602446,
   0.312411,
   0.2880085,
   0.323786};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-275,1225);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
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
   Double_t _fy3028[25] = {
   10,
   0,
   5.127552,
   0.3795701,
   0.863822,
   0.9134654,
   0.8825775,
   0.951905,
   0.9505525,
   0.879199,
   0.9897436,
   0.9673805,
   0.783842,
   0.6847716,
   1.086825,
   0.9274685,
   0.8645427,
   0.6048827,
   0.6735641,
   0.7541175,
   0.7515008,
   0.4419164,
   1.075254,
   0.339142,
   0.7023811};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0,
   0,
   5.127552,
   0.3795701,
   0.1096959,
   0.07950696,
   0.07135216,
   0.07549098,
   0.0756219,
   0.07595123,
   0.08335145,
   0.09060349,
   0.08829254,
   0.08307747,
   0.1247926,
   0.1249479,
   0.1345409,
   0.1153136,
   0.1416618,
   0.1792061,
   0.1893561,
   0.1568086,
   0.3418818,
   0.1947379,
   0.2869267};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0,
   5.885404,
   3.894811,
   0.2883158,
   0.1069601,
   0.07950696,
   0.07135216,
   0.07549098,
   0.0756219,
   0.07595123,
   0.08335145,
   0.09060349,
   0.08633971,
   0.08109848,
   0.121978,
   0.1216399,
   0.1304213,
   0.1109668,
   0.1357512,
   0.1707124,
   0.1797988,
   0.145253,
   0.3196436,
   0.168033,
   0.261941};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-275,1225);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
