#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Jun  8 11:41:04 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-24.34,1260.256,2691.492);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__10->SetBinContent(0,1.298156);
   hmc__10->SetBinContent(1,3.065722);
   hmc__10->SetBinContent(2,14.05628);
   hmc__10->SetBinContent(3,53.94353);
   hmc__10->SetBinContent(4,1108.217);
   hmc__10->SetBinContent(5,642.6862);
   hmc__10->SetBinContent(6,422.1467);
   hmc__10->SetBinContent(7,354.3029);
   hmc__10->SetBinContent(8,288.5599);
   hmc__10->SetBinContent(9,229.843);
   hmc__10->SetBinContent(10,162.2385);
   hmc__10->SetBinContent(11,133.9084);
   hmc__10->SetBinContent(12,98.96603);
   hmc__10->SetBinContent(13,75.20432);
   hmc__10->SetBinContent(14,47.70436);
   hmc__10->SetBinContent(15,36.53171);
   hmc__10->SetBinContent(16,27.35889);
   hmc__10->SetBinContent(17,25.10014);
   hmc__10->SetBinContent(18,21.24591);
   hmc__10->SetBinContent(19,11.7873);
   hmc__10->SetBinContent(20,6.845832);
   hmc__10->SetBinContent(21,7.895546);
   hmc__10->SetBinContent(22,8.717533);
   hmc__10->SetBinContent(23,7.061994);
   hmc__10->SetBinContent(24,3.847128);
   hmc__10->SetBinContent(25,7.196033);
   hmc__10->SetBinContent(26,21.27185);
   hmc__10->SetBinError(0,0.4797633);
   hmc__10->SetBinError(1,2.351979);
   hmc__10->SetBinError(2,3.675263);
   hmc__10->SetBinError(3,10.6802);
   hmc__10->SetBinError(4,231.5019);
   hmc__10->SetBinError(5,129.6628);
   hmc__10->SetBinError(6,83.85839);
   hmc__10->SetBinError(7,74.1233);
   hmc__10->SetBinError(8,62.70902);
   hmc__10->SetBinError(9,52.85184);
   hmc__10->SetBinError(10,35.16198);
   hmc__10->SetBinError(11,29.19602);
   hmc__10->SetBinError(12,24.59053);
   hmc__10->SetBinError(13,19.10445);
   hmc__10->SetBinError(14,13.42931);
   hmc__10->SetBinError(15,10.67158);
   hmc__10->SetBinError(16,13.41139);
   hmc__10->SetBinError(17,9.219475);
   hmc__10->SetBinError(18,11.27576);
   hmc__10->SetBinError(19,5.450063);
   hmc__10->SetBinError(20,4.390509);
   hmc__10->SetBinError(21,6.418948);
   hmc__10->SetBinError(22,7.56455);
   hmc__10->SetBinError(23,4.754167);
   hmc__10->SetBinError(24,3.342108);
   hmc__10->SetBinError(25,5.16231);
   hmc__10->SetBinError(26,7.887722);
   hmc__10->SetMinimum(-24.34);
   hmc__10->SetMaximum(2555.7);
   hmc__10->SetEntries(3775.136);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-150,1100);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(1163.628);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(3,2.365465);
   hbadmatch_stack_1->SetBinContent(4,21.45507);
   hbadmatch_stack_1->SetBinContent(5,12.55539);
   hbadmatch_stack_1->SetBinContent(6,9.867462);
   hbadmatch_stack_1->SetBinContent(7,8.099216);
   hbadmatch_stack_1->SetBinContent(8,9.739273);
   hbadmatch_stack_1->SetBinContent(9,8.016745);
   hbadmatch_stack_1->SetBinContent(10,7.371733);
   hbadmatch_stack_1->SetBinContent(11,4.943854);
   hbadmatch_stack_1->SetBinContent(12,5.16063);
   hbadmatch_stack_1->SetBinContent(13,1.885571);
   hbadmatch_stack_1->SetBinContent(14,0.9801958);
   hbadmatch_stack_1->SetBinContent(15,1.097771);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,1.178602);
   hbadmatch_stack_1->SetBinContent(18,1.664537);
   hbadmatch_stack_1->SetBinContent(21,0.4357758);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3934307);
   hbadmatch_stack_1->SetBinContent(26,1.152493);
   hbadmatch_stack_1->SetBinError(3,0.8845709);
   hbadmatch_stack_1->SetBinError(4,2.901939);
   hbadmatch_stack_1->SetBinError(5,1.824921);
   hbadmatch_stack_1->SetBinError(6,1.838042);
   hbadmatch_stack_1->SetBinError(7,1.532698);
   hbadmatch_stack_1->SetBinError(8,1.902773);
   hbadmatch_stack_1->SetBinError(9,1.427372);
   hbadmatch_stack_1->SetBinError(10,2.03917);
   hbadmatch_stack_1->SetBinError(11,1.142197);
   hbadmatch_stack_1->SetBinError(12,1.232468);
   hbadmatch_stack_1->SetBinError(13,0.80551);
   hbadmatch_stack_1->SetBinError(14,0.4383608);
   hbadmatch_stack_1->SetBinError(15,0.5646656);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.4811646);
   hbadmatch_stack_1->SetBinError(18,0.7100337);
   hbadmatch_stack_1->SetBinError(21,0.3095914);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2781975);
   hbadmatch_stack_1->SetBinError(26,0.5302552);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1476;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(2,5.86391);
   hext_stack_2->SetBinContent(3,13.90046);
   hext_stack_2->SetBinContent(4,124.7835);
   hext_stack_2->SetBinContent(5,86.8663);
   hext_stack_2->SetBinContent(6,56.31853);
   hext_stack_2->SetBinContent(7,51.18285);
   hext_stack_2->SetBinContent(8,33.73386);
   hext_stack_2->SetBinContent(9,18.46961);
   hext_stack_2->SetBinContent(10,14.76556);
   hext_stack_2->SetBinContent(11,20.47665);
   hext_stack_2->SetBinContent(12,9.089171);
   hext_stack_2->SetBinContent(13,8.743233);
   hext_stack_2->SetBinContent(14,3.241202);
   hext_stack_2->SetBinContent(15,5.979242);
   hext_stack_2->SetBinContent(16,1.704188);
   hext_stack_2->SetBinContent(17,3.241202);
   hext_stack_2->SetBinContent(18,3.159);
   hext_stack_2->SetBinContent(19,3.704052);
   hext_stack_2->SetBinContent(20,0.6487947);
   hext_stack_2->SetBinContent(21,0.9660115);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(23,1.950793);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,2.973055);
   hext_stack_2->SetBinContent(26,4.95257);
   hext_stack_2->SetBinError(2,1.887831);
   hext_stack_2->SetBinError(3,2.530791);
   hext_stack_2->SetBinError(4,7.730524);
   hext_stack_2->SetBinError(5,6.293478);
   hext_stack_2->SetBinError(6,4.996214);
   hext_stack_2->SetBinError(7,4.690963);
   hext_stack_2->SetBinError(8,3.8338);
   hext_stack_2->SetBinError(9,2.807336);
   hext_stack_2->SetBinError(10,2.408025);
   hext_stack_2->SetBinError(11,3.02923);
   hext_stack_2->SetBinError(12,1.88497);
   hext_stack_2->SetBinError(13,2.012829);
   hext_stack_2->SetBinError(14,1.178414);
   hext_stack_2->SetBinError(15,1.718811);
   hext_stack_2->SetBinError(16,0.7656743);
   hext_stack_2->SetBinError(17,1.178414);
   hext_stack_2->SetBinError(18,1.152637);
   hext_stack_2->SetBinError(19,1.443106);
   hext_stack_2->SetBinError(20,0.4587671);
   hext_stack_2->SetBinError(21,0.7189592);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(23,0.8755137);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,1.346105);
   hext_stack_2->SetBinError(26,1.331809);
   hext_stack_2->SetEntries(1136);

   ci = 1477;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(3,0.5758626);
   hdirt_stack_3->SetBinContent(4,18.63013);
   hdirt_stack_3->SetBinContent(5,10.04359);
   hdirt_stack_3->SetBinContent(6,9.062849);
   hdirt_stack_3->SetBinContent(7,5.140142);
   hdirt_stack_3->SetBinContent(8,3.144008);
   hdirt_stack_3->SetBinContent(9,3.515326);
   hdirt_stack_3->SetBinContent(10,0.856432);
   hdirt_stack_3->SetBinContent(11,1.713172);
   hdirt_stack_3->SetBinContent(12,1.454085);
   hdirt_stack_3->SetBinContent(13,1.014562);
   hdirt_stack_3->SetBinContent(14,0.4950385);
   hdirt_stack_3->SetBinContent(15,0.1482583);
   hdirt_stack_3->SetBinContent(16,0.7319759);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.3895662);
   hdirt_stack_3->SetBinError(3,0.3389606);
   hdirt_stack_3->SetBinError(4,2.326664);
   hdirt_stack_3->SetBinError(5,1.615389);
   hdirt_stack_3->SetBinError(6,1.776693);
   hdirt_stack_3->SetBinError(7,1.469721);
   hdirt_stack_3->SetBinError(8,0.8914013);
   hdirt_stack_3->SetBinError(9,1.001139);
   hdirt_stack_3->SetBinError(10,0.3943645);
   hdirt_stack_3->SetBinError(11,0.6542926);
   hdirt_stack_3->SetBinError(12,0.6317893);
   hdirt_stack_3->SetBinError(13,0.5857574);
   hdirt_stack_3->SetBinError(14,0.2933304);
   hdirt_stack_3->SetBinError(15,0.1482583);
   hdirt_stack_3->SetBinError(16,0.5190762);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(21,0.3895662);
   hdirt_stack_3->SetEntries(238);

   ci = 1478;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,0.8770706);
   houtFV_stack_4->SetBinContent(3,5.48159);
   houtFV_stack_4->SetBinContent(4,138.9601);
   houtFV_stack_4->SetBinContent(5,104.8716);
   houtFV_stack_4->SetBinContent(6,62.88619);
   houtFV_stack_4->SetBinContent(7,47.85967);
   houtFV_stack_4->SetBinContent(8,36.99895);
   houtFV_stack_4->SetBinContent(9,29.5632);
   houtFV_stack_4->SetBinContent(10,20.29006);
   houtFV_stack_4->SetBinContent(11,17.16367);
   houtFV_stack_4->SetBinContent(12,11.1051);
   houtFV_stack_4->SetBinContent(13,7.683688);
   houtFV_stack_4->SetBinContent(14,5.286033);
   houtFV_stack_4->SetBinContent(15,2.747231);
   houtFV_stack_4->SetBinContent(16,3.966059);
   houtFV_stack_4->SetBinContent(17,2.931052);
   houtFV_stack_4->SetBinContent(18,2.681084);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.4069764);
   houtFV_stack_4->SetBinContent(22,0.7336084);
   houtFV_stack_4->SetBinContent(23,0.7319179);
   houtFV_stack_4->SetBinContent(24,0.3401776);
   houtFV_stack_4->SetBinContent(26,1.17353);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,0.5197486);
   houtFV_stack_4->SetBinError(3,1.127628);
   houtFV_stack_4->SetBinError(4,5.890096);
   houtFV_stack_4->SetBinError(5,5.115915);
   houtFV_stack_4->SetBinError(6,4.11017);
   houtFV_stack_4->SetBinError(7,3.535211);
   houtFV_stack_4->SetBinError(8,3.03119);
   houtFV_stack_4->SetBinError(9,2.903892);
   houtFV_stack_4->SetBinError(10,2.282282);
   houtFV_stack_4->SetBinError(11,2.045891);
   houtFV_stack_4->SetBinError(12,1.755454);
   houtFV_stack_4->SetBinError(13,1.411364);
   houtFV_stack_4->SetBinError(14,1.137517);
   houtFV_stack_4->SetBinError(15,0.8146592);
   houtFV_stack_4->SetBinError(16,0.9930649);
   houtFV_stack_4->SetBinError(17,0.8781425);
   houtFV_stack_4->SetBinError(18,0.8779318);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetBinError(21,0.4069764);
   houtFV_stack_4->SetBinError(22,0.4394482);
   houtFV_stack_4->SetBinError(23,0.438694);
   houtFV_stack_4->SetBinError(24,0.3401776);
   houtFV_stack_4->SetBinError(26,0.4790957);
   houtFV_stack_4->SetEntries(2163);

   ci = 1479;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,57.89441);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,15.60114);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.28318);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.673518);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.420842);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.51068);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.520722);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.812012);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.906754);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4467362);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(4,2.532297);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.276468);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9536894);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7536077);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7153211);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5418448);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3839875);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4351454);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3123499);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2792353);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1050124);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.627016);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.26779);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.781536);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7664219);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.6246999);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2629628);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2954882);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2727714);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5988538);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.402657);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.42385);
   hNCpi0inFVres_stack_7->SetBinContent(4,484.3187);
   hNCpi0inFVres_stack_7->SetBinContent(5,245.0799);
   hNCpi0inFVres_stack_7->SetBinContent(6,146.8188);
   hNCpi0inFVres_stack_7->SetBinContent(7,119.1517);
   hNCpi0inFVres_stack_7->SetBinContent(8,87.25587);
   hNCpi0inFVres_stack_7->SetBinContent(9,61.22796);
   hNCpi0inFVres_stack_7->SetBinContent(10,40.85539);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.99144);
   hNCpi0inFVres_stack_7->SetBinContent(12,20.43003);
   hNCpi0inFVres_stack_7->SetBinContent(13,13.72054);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.315984);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.437027);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.113605);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.192738);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.06428);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.407626);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.310476);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.7249039);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.697004);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.4600178);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.390768);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.10239);
   hNCpi0inFVres_stack_7->SetBinError(0,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1922885);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6661584);
   hNCpi0inFVres_stack_7->SetBinError(3,1.152666);
   hNCpi0inFVres_stack_7->SetBinError(4,7.171105);
   hNCpi0inFVres_stack_7->SetBinError(5,5.032005);
   hNCpi0inFVres_stack_7->SetBinError(6,3.944959);
   hNCpi0inFVres_stack_7->SetBinError(7,3.571286);
   hNCpi0inFVres_stack_7->SetBinError(8,3.112687);
   hNCpi0inFVres_stack_7->SetBinError(9,2.545493);
   hNCpi0inFVres_stack_7->SetBinError(10,2.080799);
   hNCpi0inFVres_stack_7->SetBinError(11,1.629857);
   hNCpi0inFVres_stack_7->SetBinError(12,1.479831);
   hNCpi0inFVres_stack_7->SetBinError(13,1.204406);
   hNCpi0inFVres_stack_7->SetBinError(14,1.018136);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6896022);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6615164);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6157577);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5302275);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3722355);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4023026);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2578571);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2563433);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1399647);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2089417);
   hNCpi0inFVres_stack_7->SetBinError(25,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.4105231);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1482;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4593539);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.476044);
   hNCpi0inFVdis_stack_8->SetBinContent(4,83.56995);
   hNCpi0inFVdis_stack_8->SetBinContent(5,44.1345);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.80395);
   hNCpi0inFVdis_stack_8->SetBinContent(7,23.4831);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.01791);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.56775);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.73706);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.002179);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.524472);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.630424);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.42598);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.180784);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.701908);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.102222);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.557504);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.3905998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3477539);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.362868);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1818869);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.308588);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.955791);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.191295);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.673181);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.591354);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.426191);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.166428);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.072165);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8931345);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8148192);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7146859);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.489117);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6407451);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.438191);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3684702);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2486359);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1043922);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1731161);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2070706);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1483;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1484;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1485;
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
   hs4->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.1950248);
   hCCpi0inFV_stack_11->SetBinContent(1,0.5901461);
   hCCpi0inFV_stack_11->SetBinContent(2,1.320373);
   hCCpi0inFV_stack_11->SetBinContent(3,5.875021);
   hCCpi0inFV_stack_11->SetBinContent(4,64.952);
   hCCpi0inFV_stack_11->SetBinContent(5,66.25195);
   hCCpi0inFV_stack_11->SetBinContent(6,59.89288);
   hCCpi0inFV_stack_11->SetBinContent(7,62.39482);
   hCCpi0inFV_stack_11->SetBinContent(8,67.50166);
   hCCpi0inFV_stack_11->SetBinContent(9,59.30085);
   hCCpi0inFV_stack_11->SetBinContent(10,47.27073);
   hCCpi0inFV_stack_11->SetBinContent(11,36.8102);
   hCCpi0inFV_stack_11->SetBinContent(12,30.85523);
   hCCpi0inFV_stack_11->SetBinContent(13,27.34107);
   hCCpi0inFV_stack_11->SetBinContent(14,19.55649);
   hCCpi0inFV_stack_11->SetBinContent(15,12.39481);
   hCCpi0inFV_stack_11->SetBinContent(16,11.85527);
   hCCpi0inFV_stack_11->SetBinContent(17,10.78144);
   hCCpi0inFV_stack_11->SetBinContent(18,9.229698);
   hCCpi0inFV_stack_11->SetBinContent(19,3.376046);
   hCCpi0inFV_stack_11->SetBinContent(20,2.766527);
   hCCpi0inFV_stack_11->SetBinContent(21,3.946683);
   hCCpi0inFV_stack_11->SetBinContent(22,6.19552);
   hCCpi0inFV_stack_11->SetBinContent(23,2.245626);
   hCCpi0inFV_stack_11->SetBinContent(24,2.050601);
   hCCpi0inFV_stack_11->SetBinContent(25,2.342597);
   hCCpi0inFV_stack_11->SetBinContent(26,9.703803);
   hCCpi0inFV_stack_11->SetBinError(0,0.1950249);
   hCCpi0inFV_stack_11->SetBinError(1,0.340721);
   hCCpi0inFV_stack_11->SetBinError(2,0.5548703);
   hCCpi0inFV_stack_11->SetBinError(3,1.161438);
   hCCpi0inFV_stack_11->SetBinError(4,3.982058);
   hCCpi0inFV_stack_11->SetBinError(5,4.030378);
   hCCpi0inFV_stack_11->SetBinError(6,3.866177);
   hCCpi0inFV_stack_11->SetBinError(7,3.947513);
   hCCpi0inFV_stack_11->SetBinError(8,4.160273);
   hCCpi0inFV_stack_11->SetBinError(9,3.916997);
   hCCpi0inFV_stack_11->SetBinError(10,3.405486);
   hCCpi0inFV_stack_11->SetBinError(11,3.004278);
   hCCpi0inFV_stack_11->SetBinError(12,2.834793);
   hCCpi0inFV_stack_11->SetBinError(13,2.669285);
   hCCpi0inFV_stack_11->SetBinError(14,2.283524);
   hCCpi0inFV_stack_11->SetBinError(15,1.74928);
   hCCpi0inFV_stack_11->SetBinError(16,1.697701);
   hCCpi0inFV_stack_11->SetBinError(17,1.646048);
   hCCpi0inFV_stack_11->SetBinError(18,1.53248);
   hCCpi0inFV_stack_11->SetBinError(19,0.8997438);
   hCCpi0inFV_stack_11->SetBinError(20,0.7803264);
   hCCpi0inFV_stack_11->SetBinError(21,0.9892507);
   hCCpi0inFV_stack_11->SetBinError(22,1.2866);
   hCCpi0inFV_stack_11->SetBinError(23,0.7332843);
   hCCpi0inFV_stack_11->SetBinError(24,0.7068742);
   hCCpi0inFV_stack_11->SetBinError(25,0.8097566);
   hCCpi0inFV_stack_11->SetBinError(26,1.654054);
   hCCpi0inFV_stack_11->SetEntries(2680);

   ci = 1486;
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
   hs4->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(1,0.5901461);
   hNCinFV_stack_12->SetBinContent(2,0.5901461);
   hNCinFV_stack_12->SetBinContent(3,3.317721);
   hNCinFV_stack_12->SetBinContent(4,44.36476);
   hNCinFV_stack_12->SetBinContent(5,23.88327);
   hNCinFV_stack_12->SetBinContent(6,14.26122);
   hNCinFV_stack_12->SetBinContent(7,10.75017);
   hNCinFV_stack_12->SetBinContent(8,8.933363);
   hNCinFV_stack_12->SetBinContent(9,12.71225);
   hNCinFV_stack_12->SetBinContent(10,6.248774);
   hNCinFV_stack_12->SetBinContent(11,4.838191);
   hNCinFV_stack_12->SetBinContent(12,4.056401);
   hNCinFV_stack_12->SetBinContent(13,2.877799);
   hNCinFV_stack_12->SetBinContent(14,2.342597);
   hNCinFV_stack_12->SetBinContent(15,1.462145);
   hNCinFV_stack_12->SetBinContent(16,0.9269427);
   hNCinFV_stack_12->SetBinContent(17,0.9286332);
   hNCinFV_stack_12->SetBinContent(18,0.1967154);
   hNCinFV_stack_12->SetBinContent(19,0.1950248);
   hNCinFV_stack_12->SetBinContent(20,0.1950248);
   hNCinFV_stack_12->SetBinContent(21,0.536893);
   hNCinFV_stack_12->SetBinContent(26,0.9286332);
   hNCinFV_stack_12->SetBinError(1,0.340721);
   hNCinFV_stack_12->SetBinError(2,0.340721);
   hNCinFV_stack_12->SetBinError(3,0.9197169);
   hNCinFV_stack_12->SetBinError(4,3.354072);
   hNCinFV_stack_12->SetBinError(5,2.490684);
   hNCinFV_stack_12->SetBinError(6,1.891996);
   hNCinFV_stack_12->SetBinError(7,1.642071);
   hNCinFV_stack_12->SetBinError(8,1.500421);
   hNCinFV_stack_12->SetBinError(9,1.755386);
   hNCinFV_stack_12->SetBinError(10,1.271618);
   hNCinFV_stack_12->SetBinError(11,1.092603);
   hNCinFV_stack_12->SetBinError(12,1.020285);
   hNCinFV_stack_12->SetBinError(13,0.8997006);
   hNCinFV_stack_12->SetBinError(14,0.8097566);
   hNCinFV_stack_12->SetBinError(15,0.6198731);
   hNCinFV_stack_12->SetBinError(16,0.4800908);
   hNCinFV_stack_12->SetBinError(17,0.48078);
   hNCinFV_stack_12->SetBinError(18,0.1967154);
   hNCinFV_stack_12->SetBinError(19,0.1950249);
   hNCinFV_stack_12->SetBinError(20,0.1950249);
   hNCinFV_stack_12->SetBinError(21,0.3929602);
   hNCinFV_stack_12->SetBinError(26,0.48078);
   hNCinFV_stack_12->SetEntries(615);

   ci = 1487;
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
   hs4->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,0.8520313);
   hnumuCCinFV_stack_13->SetBinContent(1,0.7932806);
   hnumuCCinFV_stack_13->SetBinContent(2,1.174689);
   hnumuCCinFV_stack_13->SetBinContent(3,8.276411);
   hnumuCCinFV_stack_13->SetBinContent(4,55.85175);
   hnumuCCinFV_stack_13->SetBinContent(5,25.30521);
   hnumuCCinFV_stack_13->SetBinContent(6,23.17393);
   hnumuCCinFV_stack_13->SetBinContent(7,17.07823);
   hnumuCCinFV_stack_13->SetBinContent(8,15.92645);
   hnumuCCinFV_stack_13->SetBinContent(9,16.50702);
   hnumuCCinFV_stack_13->SetBinContent(10,11.24203);
   hnumuCCinFV_stack_13->SetBinContent(11,11.40675);
   hnumuCCinFV_stack_13->SetBinContent(12,8.354967);
   hnumuCCinFV_stack_13->SetBinContent(13,6.205206);
   hnumuCCinFV_stack_13->SetBinContent(14,2.858608);
   hnumuCCinFV_stack_13->SetBinContent(15,3.531461);
   hnumuCCinFV_stack_13->SetBinContent(16,0.6197851);
   hnumuCCinFV_stack_13->SetBinContent(17,1.716347);
   hnumuCCinFV_stack_13->SetBinContent(18,1.555017);
   hnumuCCinFV_stack_13->SetBinContent(19,2.113122);
   hnumuCCinFV_stack_13->SetBinContent(20,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(21,0.4329366);
   hnumuCCinFV_stack_13->SetBinContent(23,0.8770706);
   hnumuCCinFV_stack_13->SetBinContent(25,1.392294);
   hnumuCCinFV_stack_13->SetBinContent(26,1.402271);
   hnumuCCinFV_stack_13->SetBinError(0,0.4302702);
   hnumuCCinFV_stack_13->SetBinError(1,0.4692039);
   hnumuCCinFV_stack_13->SetBinError(2,0.5400761);
   hnumuCCinFV_stack_13->SetBinError(3,1.832848);
   hnumuCCinFV_stack_13->SetBinError(4,4.752739);
   hnumuCCinFV_stack_13->SetBinError(5,2.608486);
   hnumuCCinFV_stack_13->SetBinError(6,3.153037);
   hnumuCCinFV_stack_13->SetBinError(7,2.99306);
   hnumuCCinFV_stack_13->SetBinError(8,2.070897);
   hnumuCCinFV_stack_13->SetBinError(9,2.236257);
   hnumuCCinFV_stack_13->SetBinError(10,2.11739);
   hnumuCCinFV_stack_13->SetBinError(11,1.6938);
   hnumuCCinFV_stack_13->SetBinError(12,1.459783);
   hnumuCCinFV_stack_13->SetBinError(13,1.258156);
   hnumuCCinFV_stack_13->SetBinError(14,0.9009509);
   hnumuCCinFV_stack_13->SetBinError(15,1.010533);
   hnumuCCinFV_stack_13->SetBinError(16,0.3587981);
   hnumuCCinFV_stack_13->SetBinError(17,0.6811774);
   hnumuCCinFV_stack_13->SetBinError(18,0.6623464);
   hnumuCCinFV_stack_13->SetBinError(19,1.06852);
   hnumuCCinFV_stack_13->SetBinError(20,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(21,0.3074043);
   hnumuCCinFV_stack_13->SetBinError(23,0.5197486);
   hnumuCCinFV_stack_13->SetBinError(25,1.211654);
   hnumuCCinFV_stack_13->SetBinError(26,0.5307016);
   hnumuCCinFV_stack_13->SetEntries(846);

   ci = 1488;
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
   hs4->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(4,9.474968);
   hnueCCinFV_stack_14->SetBinContent(5,6.728154);
   hnueCCinFV_stack_14->SetBinContent(6,2.968188);
   hnueCCinFV_stack_14->SetBinContent(7,2.667248);
   hnueCCinFV_stack_14->SetBinContent(8,1.092552);
   hnueCCinFV_stack_14->SetBinContent(9,3.782491);
   hnueCCinFV_stack_14->SetBinContent(10,0.9269427);
   hnueCCinFV_stack_14->SetBinContent(11,0.4153488);
   hnueCCinFV_stack_14->SetBinContent(12,1.140965);
   hnueCCinFV_stack_14->SetBinContent(14,1.034834);
   hnueCCinFV_stack_14->SetBinContent(15,0.2180157);
   hnueCCinFV_stack_14->SetBinContent(16,0.8989917);
   hnueCCinFV_stack_14->SetBinContent(20,0.6040859);
   hnueCCinFV_stack_14->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(26,0.3401776);
   hnueCCinFV_stack_14->SetBinError(2,0.3401776);
   hnueCCinFV_stack_14->SetBinError(4,2.09004);
   hnueCCinFV_stack_14->SetBinError(5,1.516611);
   hnueCCinFV_stack_14->SetBinError(6,0.9746607);
   hnueCCinFV_stack_14->SetBinError(7,0.8236333);
   hnueCCinFV_stack_14->SetBinError(8,0.4927304);
   hnueCCinFV_stack_14->SetBinError(9,1.914074);
   hnueCCinFV_stack_14->SetBinError(10,0.4800908);
   hnueCCinFV_stack_14->SetBinError(11,0.2942402);
   hnueCCinFV_stack_14->SetBinError(12,0.6324613);
   hnueCCinFV_stack_14->SetBinError(14,0.8621563);
   hnueCCinFV_stack_14->SetBinError(15,0.2180157);
   hnueCCinFV_stack_14->SetBinError(16,0.7304821);
   hnueCCinFV_stack_14->SetBinError(20,0.4531728);
   hnueCCinFV_stack_14->SetBinError(22,0.1967154);
   hnueCCinFV_stack_14->SetBinError(26,0.3401776);
   hnueCCinFV_stack_14->SetEntries(115);

   ci = 1489;
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
   hs4->Add(hnueCCinFV_stack_14,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__11->SetBinContent(0,1.298156);
   hmcerror__11->SetBinContent(1,3.065722);
   hmcerror__11->SetBinContent(2,14.05628);
   hmcerror__11->SetBinContent(3,53.94353);
   hmcerror__11->SetBinContent(4,1108.217);
   hmcerror__11->SetBinContent(5,642.6862);
   hmcerror__11->SetBinContent(6,422.1467);
   hmcerror__11->SetBinContent(7,354.3029);
   hmcerror__11->SetBinContent(8,288.5599);
   hmcerror__11->SetBinContent(9,229.843);
   hmcerror__11->SetBinContent(10,162.2385);
   hmcerror__11->SetBinContent(11,133.9084);
   hmcerror__11->SetBinContent(12,98.96603);
   hmcerror__11->SetBinContent(13,75.20432);
   hmcerror__11->SetBinContent(14,47.70436);
   hmcerror__11->SetBinContent(15,36.53171);
   hmcerror__11->SetBinContent(16,27.35889);
   hmcerror__11->SetBinContent(17,25.10014);
   hmcerror__11->SetBinContent(18,21.24591);
   hmcerror__11->SetBinContent(19,11.7873);
   hmcerror__11->SetBinContent(20,6.845832);
   hmcerror__11->SetBinContent(21,7.895546);
   hmcerror__11->SetBinContent(22,8.717533);
   hmcerror__11->SetBinContent(23,7.061994);
   hmcerror__11->SetBinContent(24,3.847128);
   hmcerror__11->SetBinContent(25,7.196033);
   hmcerror__11->SetBinContent(26,21.27185);
   hmcerror__11->SetBinError(0,0.4797633);
   hmcerror__11->SetBinError(1,2.351979);
   hmcerror__11->SetBinError(2,3.675263);
   hmcerror__11->SetBinError(3,10.6802);
   hmcerror__11->SetBinError(4,231.5019);
   hmcerror__11->SetBinError(5,129.6628);
   hmcerror__11->SetBinError(6,83.85839);
   hmcerror__11->SetBinError(7,74.1233);
   hmcerror__11->SetBinError(8,62.70902);
   hmcerror__11->SetBinError(9,52.85184);
   hmcerror__11->SetBinError(10,35.16198);
   hmcerror__11->SetBinError(11,29.19602);
   hmcerror__11->SetBinError(12,24.59053);
   hmcerror__11->SetBinError(13,19.10445);
   hmcerror__11->SetBinError(14,13.42931);
   hmcerror__11->SetBinError(15,10.67158);
   hmcerror__11->SetBinError(16,13.41139);
   hmcerror__11->SetBinError(17,9.219475);
   hmcerror__11->SetBinError(18,11.27576);
   hmcerror__11->SetBinError(19,5.450063);
   hmcerror__11->SetBinError(20,4.390509);
   hmcerror__11->SetBinError(21,6.418948);
   hmcerror__11->SetBinError(22,7.56455);
   hmcerror__11->SetBinError(23,4.754167);
   hmcerror__11->SetBinError(24,3.342108);
   hmcerror__11->SetBinError(25,5.16231);
   hmcerror__11->SetBinError(26,7.887722);
   hmcerror__11->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
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
   Double_t _fy3013[25] = {
   4,
   7,
   69,
   1217,
   659,
   428,
   322,
   280,
   188,
   153,
   120,
   91,
   62,
   50,
   43,
   27,
   17,
   13,
   18,
   11,
   8,
   2,
   7,
   4,
   1};
   Double_t _felx3013[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fely3013[25] = {
   2.29683,
   2.85954,
   8.4327,
   34.88553,
   25.671,
   20.68816,
   17.94436,
   16.7332,
   13.71131,
   12.36932,
   10.95445,
   9.6617,
   8.0018,
   7.2025,
   6.6917,
   5.3414,
   4.2835,
   3.77763,
   4.4008,
   3.4975,
   3.0307,
   2,
   2.85954,
   2.29683,
   1};
   Double_t _fehx3013[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fehy3013[25] = {
   1.98186,
   2.61053,
   8.2304,
   34.88553,
   25.671,
   20.68816,
   17.94436,
   16.7332,
   13.71131,
   12.36932,
   10.95445,
   9.46,
   7.7989,
   6.9985,
   6.4868,
   5.1322,
   4.0673,
   3.5552,
   4.1858,
   3.27,
   2.7896,
   1.51917,
   2.61053,
   1.98186,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-275,1225);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1377.074);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3801.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.8","F");

   ci = 1476;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 472.5","F");

   ci = 1477;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 504.7","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.6","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

   ci = 1481;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1290.4","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.3","F");

   ci = 1483;
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

   ci = 1484;
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

   ci = 1485;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 617.1","F");

   ci = 1486;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 144.2","F");

   ci = 1487;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 216.9","F");

   ci = 1488;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 32.5","F");

   ci = 1489;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[25] = {
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
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fely3014[25] = {
   0.767186,
   0.2614677,
   0.1979886,
   0.2088958,
   0.2017514,
   0.1986475,
   0.2092088,
   0.2173172,
   0.2299476,
   0.2167301,
   0.2180297,
   0.2484745,
   0.2540339,
   0.2815111,
   0.2921183,
   0.4902023,
   0.3673078,
   0.5307264,
   0.4623676,
   0.6413404,
   0.8129834,
   0.8677397,
   0.6732046,
   0.8687279,
   0.7173828};
   Double_t _fehx3014[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fehy3014[25] = {
   0.767186,
   0.2614677,
   0.1979886,
   0.2088958,
   0.2017514,
   0.1986475,
   0.2092088,
   0.2173172,
   0.2299476,
   0.2167301,
   0.2180297,
   0.2484745,
   0.2540339,
   0.2815111,
   0.2921183,
   0.4902023,
   0.3673078,
   0.5307264,
   0.4623676,
   0.6413404,
   0.8129834,
   0.8677397,
   0.6732046,
   0.8687279,
   0.7173828};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-275,1225);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
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
   Double_t _felx3015[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fely3015[25] = {
   0.438356,
   0.2121658,
   0.1631845,
   0.1886804,
   0.1901795,
   0.1819566,
   0.1829653,
   0.1905159,
   0.1940569,
   0.1949088,
   0.1743031,
   0.1945044,
   0.1889474,
   0.2098808,
   0.1795895,
   0.223731,
   0.2222877,
   0.2106254,
   0.2422846,
   0.2822118,
   0.2968015,
   0.3127467,
   0.292059,
   0.3377518,
   0.3929412};
   Double_t _fehx3015[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fehy3015[25] = {
   0.438356,
   0.2121658,
   0.1631845,
   0.1886804,
   0.1901795,
   0.1819566,
   0.1829653,
   0.1905159,
   0.1940569,
   0.1949088,
   0.1743031,
   0.1945044,
   0.1889474,
   0.2098808,
   0.1795895,
   0.223731,
   0.2222877,
   0.2106254,
   0.2422846,
   0.2822118,
   0.2968015,
   0.3127467,
   0.292059,
   0.3377518,
   0.3929412};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-275,1225);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
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
   Double_t _fy3016[25] = {
   1.30475,
   0.4979981,
   1.279115,
   1.09816,
   1.025384,
   1.013866,
   0.9088268,
   0.9703359,
   0.8179497,
   0.9430558,
   0.8961347,
   0.9195075,
   0.8244208,
   1.048122,
   1.17706,
   0.986882,
   0.6772872,
   0.6118826,
   1.527068,
   1.606817,
   1.013229,
   0.2294227,
   0.9912214,
   1.039737,
   0.1389655};
   Double_t _felx3016[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fely3016[25] = {
   0.749197,
   0.2034351,
   0.1563246,
   0.03147896,
   0.03994328,
   0.04900705,
   0.05064694,
   0.05798866,
   0.05965512,
   0.07624154,
   0.08180553,
   0.09762643,
   0.1064008,
   0.150982,
   0.1831751,
   0.1952345,
   0.1706564,
   0.1778051,
   0.3733511,
   0.5108948,
   0.3838493,
   0.2294227,
   0.4049196,
   0.5970245,
   0.1389655};
   Double_t _fehx3016[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
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
   Double_t _fehy3016[25] = {
   0.6464578,
   0.1857199,
   0.1525744,
   0.03147896,
   0.03994328,
   0.04900705,
   0.05064694,
   0.05798866,
   0.05965512,
   0.07624154,
   0.08180553,
   0.09558836,
   0.1037028,
   0.1467057,
   0.1775663,
   0.187588,
   0.1620429,
   0.1673358,
   0.3551111,
   0.4776629,
   0.3533131,
   0.174266,
   0.369659,
   0.5151531,
   0.1889527};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-275,1225);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.292928);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
