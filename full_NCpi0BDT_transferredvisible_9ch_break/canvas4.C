#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Jun  5 00:24:17 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",60,83,1200,900);
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
   pad1->Range(-230.7692,-15.2,1692.308,1680.8);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hmc__10->SetBinContent(2,12.99491);
   hmc__10->SetBinContent(3,328.0982);
   hmc__10->SetBinContent(4,636.9826);
   hmc__10->SetBinContent(5,627.9568);
   hmc__10->SetBinContent(6,538.2173);
   hmc__10->SetBinContent(7,443.2318);
   hmc__10->SetBinContent(8,334.2754);
   hmc__10->SetBinContent(9,250.1434);
   hmc__10->SetBinContent(10,176.9861);
   hmc__10->SetBinContent(11,128.5097);
   hmc__10->SetBinContent(12,84.61244);
   hmc__10->SetBinContent(13,62.23139);
   hmc__10->SetBinContent(14,48.93853);
   hmc__10->SetBinContent(15,34.29594);
   hmc__10->SetBinContent(16,19.64335);
   hmc__10->SetBinContent(17,20.94726);
   hmc__10->SetBinContent(18,13.71321);
   hmc__10->SetBinContent(19,10.77712);
   hmc__10->SetBinContent(20,9.449006);
   hmc__10->SetBinContent(21,38.99682);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,4.977265);
   hmc__10->SetBinError(3,66.34716);
   hmc__10->SetBinError(4,137.5145);
   hmc__10->SetBinError(5,130.8526);
   hmc__10->SetBinError(6,111.8907);
   hmc__10->SetBinError(7,88.15493);
   hmc__10->SetBinError(8,69.97595);
   hmc__10->SetBinError(9,53.03864);
   hmc__10->SetBinError(10,39.05063);
   hmc__10->SetBinError(11,30.52984);
   hmc__10->SetBinError(12,23.40226);
   hmc__10->SetBinError(13,16.44985);
   hmc__10->SetBinError(14,18.31994);
   hmc__10->SetBinError(15,11.36741);
   hmc__10->SetBinError(16,7.174881);
   hmc__10->SetBinError(17,7.6404);
   hmc__10->SetBinError(18,6.504061);
   hmc__10->SetBinError(19,6.687205);
   hmc__10->SetBinError(20,7.023626);
   hmc__10->SetBinError(21,10.6545);
   hmc__10->SetMinimum(-15.2);
   hmc__10->SetMaximum(1596);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,1500);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(668.8317);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,11.02882);
   hbadmatch_stack_1->SetBinContent(4,22.01953);
   hbadmatch_stack_1->SetBinContent(5,12.67155);
   hbadmatch_stack_1->SetBinContent(6,11.42506);
   hbadmatch_stack_1->SetBinContent(7,10.45227);
   hbadmatch_stack_1->SetBinContent(8,9.032578);
   hbadmatch_stack_1->SetBinContent(9,3.803052);
   hbadmatch_stack_1->SetBinContent(10,3.809813);
   hbadmatch_stack_1->SetBinContent(11,5.182089);
   hbadmatch_stack_1->SetBinContent(12,2.166438);
   hbadmatch_stack_1->SetBinContent(13,1.371936);
   hbadmatch_stack_1->SetBinContent(14,1.991511);
   hbadmatch_stack_1->SetBinContent(15,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,1.545923);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.780262);
   hbadmatch_stack_1->SetBinError(4,3.135863);
   hbadmatch_stack_1->SetBinError(5,1.915855);
   hbadmatch_stack_1->SetBinError(6,1.680516);
   hbadmatch_stack_1->SetBinError(7,1.712968);
   hbadmatch_stack_1->SetBinError(8,1.621315);
   hbadmatch_stack_1->SetBinError(9,1.019454);
   hbadmatch_stack_1->SetBinError(10,1.020752);
   hbadmatch_stack_1->SetBinError(11,1.942862);
   hbadmatch_stack_1->SetBinError(12,0.7523105);
   hbadmatch_stack_1->SetBinError(13,0.5185478);
   hbadmatch_stack_1->SetBinError(14,0.7725055);
   hbadmatch_stack_1->SetBinError(15,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.5988025);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(2,2.592407);
   hext_stack_2->SetBinContent(3,85.44942);
   hext_stack_2->SetBinContent(4,102.5935);
   hext_stack_2->SetBinContent(5,88.56886);
   hext_stack_2->SetBinContent(6,60.29514);
   hext_stack_2->SetBinContent(7,41.86584);
   hext_stack_2->SetBinContent(8,24.97954);
   hext_stack_2->SetBinContent(9,19.51782);
   hext_stack_2->SetBinContent(10,12.48319);
   hext_stack_2->SetBinContent(11,10.51803);
   hext_stack_2->SetBinContent(12,2.841783);
   hext_stack_2->SetBinContent(13,5.807659);
   hext_stack_2->SetBinContent(14,3.737183);
   hext_stack_2->SetBinContent(15,2.510206);
   hext_stack_2->SetBinContent(16,2.192989);
   hext_stack_2->SetBinContent(17,4.994461);
   hext_stack_2->SetBinContent(18,1.544194);
   hext_stack_2->SetBinContent(19,0.973192);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,3.57278);
   hext_stack_2->SetBinError(2,1.085446);
   hext_stack_2->SetBinError(3,6.501617);
   hext_stack_2->SetBinError(4,6.7667);
   hext_stack_2->SetBinError(5,6.302592);
   hext_stack_2->SetBinError(6,5.172668);
   hext_stack_2->SetBinError(7,4.243168);
   hext_stack_2->SetBinError(8,3.462923);
   hext_stack_2->SetBinError(9,2.908286);
   hext_stack_2->SetBinError(10,2.264515);
   hext_stack_2->SetBinError(11,2.182638);
   hext_stack_2->SetBinError(12,1.011007);
   hext_stack_2->SetBinError(13,1.742221);
   hext_stack_2->SetBinError(14,1.188642);
   hext_stack_2->SetBinError(15,1.057404);
   hext_stack_2->SetBinError(16,0.9009267);
   hext_stack_2->SetBinError(17,1.644594);
   hext_stack_2->SetBinError(18,0.7753719);
   hext_stack_2->SetBinError(19,0.5618727);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,1.136966);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(2,0.15957);
   hdirt_stack_3->SetBinContent(3,11.99885);
   hdirt_stack_3->SetBinContent(4,15.8927);
   hdirt_stack_3->SetBinContent(5,9.01361);
   hdirt_stack_3->SetBinContent(6,6.285785);
   hdirt_stack_3->SetBinContent(7,4.000139);
   hdirt_stack_3->SetBinContent(8,3.309026);
   hdirt_stack_3->SetBinContent(9,2.085518);
   hdirt_stack_3->SetBinContent(10,2.388492);
   hdirt_stack_3->SetBinContent(11,0.7116182);
   hdirt_stack_3->SetBinContent(12,0.4244012);
   hdirt_stack_3->SetBinContent(14,0.3937887);
   hdirt_stack_3->SetBinContent(15,0.3895662);
   hdirt_stack_3->SetBinError(2,0.15957);
   hdirt_stack_3->SetBinError(3,1.884843);
   hdirt_stack_3->SetBinError(4,1.989635);
   hdirt_stack_3->SetBinError(5,1.59489);
   hdirt_stack_3->SetBinError(6,1.288626);
   hdirt_stack_3->SetBinError(7,1.062735);
   hdirt_stack_3->SetBinError(8,1.205156);
   hdirt_stack_3->SetBinError(9,0.811466);
   hdirt_stack_3->SetBinError(10,1.250739);
   hdirt_stack_3->SetBinError(11,0.4614828);
   hdirt_stack_3->SetBinError(12,0.2451693);
   hdirt_stack_3->SetBinError(14,0.3937887);
   hdirt_stack_3->SetBinError(15,0.3895662);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,4.687967);
   houtFV_stack_4->SetBinContent(3,60.02589);
   houtFV_stack_4->SetBinContent(4,109.8359);
   houtFV_stack_4->SetBinContent(5,99.93967);
   houtFV_stack_4->SetBinContent(6,62.92365);
   houtFV_stack_4->SetBinContent(7,51.7568);
   houtFV_stack_4->SetBinContent(8,36.14);
   houtFV_stack_4->SetBinContent(9,26.24598);
   houtFV_stack_4->SetBinContent(10,15.53665);
   houtFV_stack_4->SetBinContent(11,12.23049);
   houtFV_stack_4->SetBinContent(12,8.34149);
   houtFV_stack_4->SetBinContent(13,4.953223);
   houtFV_stack_4->SetBinContent(14,5.05216);
   houtFV_stack_4->SetBinContent(15,1.422099);
   houtFV_stack_4->SetBinContent(16,1.137665);
   houtFV_stack_4->SetBinContent(17,2.014274);
   houtFV_stack_4->SetBinContent(18,0.9303237);
   houtFV_stack_4->SetBinContent(19,1.367587);
   houtFV_stack_4->SetBinContent(20,0.536893);
   houtFV_stack_4->SetBinContent(21,0.785171);
   houtFV_stack_4->SetBinError(2,1.055513);
   houtFV_stack_4->SetBinError(3,3.834093);
   houtFV_stack_4->SetBinError(4,5.244069);
   houtFV_stack_4->SetBinError(5,5.164999);
   houtFV_stack_4->SetBinError(6,4.076255);
   houtFV_stack_4->SetBinError(7,3.617864);
   houtFV_stack_4->SetBinError(8,3.018849);
   houtFV_stack_4->SetBinError(9,2.584336);
   houtFV_stack_4->SetBinError(10,1.9459);
   houtFV_stack_4->SetBinError(11,1.775236);
   houtFV_stack_4->SetBinError(12,1.481843);
   houtFV_stack_4->SetBinError(13,1.148599);
   houtFV_stack_4->SetBinError(14,1.199329);
   houtFV_stack_4->SetBinError(15,0.6224455);
   houtFV_stack_4->SetBinError(16,0.5242552);
   houtFV_stack_4->SetBinError(17,0.7921859);
   houtFV_stack_4->SetBinError(18,0.4814682);
   houtFV_stack_4->SetBinError(19,0.5734551);
   houtFV_stack_4->SetBinError(20,0.3929602);
   houtFV_stack_4->SetBinError(21,0.3925882);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.98706);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,13.35784);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,16.43748);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,16.27091);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,16.55159);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,10.13821);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.572726);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.018448);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.142842);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.175712);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.616544);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7526357);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.031308);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.003904);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6740476);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.200197);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.29082);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.296461);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.419924);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.054781);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.932435);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6483933);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.745604);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5014937);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3887721);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.185768);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3482878);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2725332);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.939558);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.701076);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.463258);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7949858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.389272);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4739624);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4156262);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3276541);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2483746);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.218558);
   hNCpi0inFVres_stack_7->SetBinContent(3,96.39005);
   hNCpi0inFVres_stack_7->SetBinContent(4,246.4807);
   hNCpi0inFVres_stack_7->SetBinContent(5,263.0453);
   hNCpi0inFVres_stack_7->SetBinContent(6,215.4269);
   hNCpi0inFVres_stack_7->SetBinContent(7,157.0238);
   hNCpi0inFVres_stack_7->SetBinContent(8,111.6902);
   hNCpi0inFVres_stack_7->SetBinContent(9,74.32904);
   hNCpi0inFVres_stack_7->SetBinContent(10,45.46074);
   hNCpi0inFVres_stack_7->SetBinContent(11,27.29079);
   hNCpi0inFVres_stack_7->SetBinContent(12,21.32335);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.089943);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.720604);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.96564);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.46933);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.924276);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.491326);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6697679);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.7385219);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.994862);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4821042);
   hNCpi0inFVres_stack_7->SetBinError(3,3.16762);
   hNCpi0inFVres_stack_7->SetBinError(4,5.09956);
   hNCpi0inFVres_stack_7->SetBinError(5,5.325078);
   hNCpi0inFVres_stack_7->SetBinError(6,4.773396);
   hNCpi0inFVres_stack_7->SetBinError(7,4.100672);
   hNCpi0inFVres_stack_7->SetBinError(8,3.412823);
   hNCpi0inFVres_stack_7->SetBinError(9,2.794798);
   hNCpi0inFVres_stack_7->SetBinError(10,2.19511);
   hNCpi0inFVres_stack_7->SetBinError(11,1.650581);
   hNCpi0inFVres_stack_7->SetBinError(12,1.613116);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8732293);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8298466);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7931557);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5643055);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4230513);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3753592);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2268055);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2713408);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5219663);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8222219);
   hNCpi0inFVdis_stack_8->SetBinContent(3,20.07695);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.39991);
   hNCpi0inFVdis_stack_8->SetBinContent(5,35.06728);
   hNCpi0inFVdis_stack_8->SetBinContent(6,37.2709);
   hNCpi0inFVdis_stack_8->SetBinContent(7,29.57195);
   hNCpi0inFVdis_stack_8->SetBinContent(8,24.10503);
   hNCpi0inFVdis_stack_8->SetBinContent(9,22.01984);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.40683);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.22939);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.591417);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.792583);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.319452);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.746498);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.133194);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6976678);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.534676);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.645612);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4457358);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.774893);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2756104);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.45717);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.813623);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.935752);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.999853);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.709729);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.577125);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.557257);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.237505);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.158644);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.017659);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5688841);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6286336);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5049094);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4376721);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2285151);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4691479);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4865246);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1610816);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4576683);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3206861);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2201295);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinContent(3,8.828913);
   hCCpi0inFV_stack_11->SetBinContent(4,29.7172);
   hCCpi0inFV_stack_11->SetBinContent(5,47.13186);
   hCCpi0inFV_stack_11->SetBinContent(6,71.72421);
   hCCpi0inFV_stack_11->SetBinContent(7,86.52515);
   hCCpi0inFV_stack_11->SetBinContent(8,79.76285);
   hCCpi0inFV_stack_11->SetBinContent(9,66.40561);
   hCCpi0inFV_stack_11->SetBinContent(10,56.96115);
   hCCpi0inFV_stack_11->SetBinContent(11,40.58549);
   hCCpi0inFV_stack_11->SetBinContent(12,29.86278);
   hCCpi0inFV_stack_11->SetBinContent(13,24.61688);
   hCCpi0inFV_stack_11->SetBinContent(14,21.25037);
   hCCpi0inFV_stack_11->SetBinContent(15,13.05591);
   hCCpi0inFV_stack_11->SetBinContent(16,9.11079);
   hCCpi0inFV_stack_11->SetBinContent(17,8.804383);
   hCCpi0inFV_stack_11->SetBinContent(18,6.081305);
   hCCpi0inFV_stack_11->SetBinContent(19,4.638094);
   hCCpi0inFV_stack_11->SetBinContent(20,4.211089);
   hCCpi0inFV_stack_11->SetBinContent(21,17.38284);
   hCCpi0inFV_stack_11->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinError(3,1.507157);
   hCCpi0inFV_stack_11->SetBinError(4,2.669262);
   hCCpi0inFV_stack_11->SetBinError(5,3.417014);
   hCCpi0inFV_stack_11->SetBinError(6,4.168569);
   hCCpi0inFV_stack_11->SetBinError(7,4.674282);
   hCCpi0inFV_stack_11->SetBinError(8,4.468761);
   hCCpi0inFV_stack_11->SetBinError(9,4.102498);
   hCCpi0inFV_stack_11->SetBinError(10,3.814443);
   hCCpi0inFV_stack_11->SetBinError(11,3.228031);
   hCCpi0inFV_stack_11->SetBinError(12,2.785463);
   hCCpi0inFV_stack_11->SetBinError(13,2.529154);
   hCCpi0inFV_stack_11->SetBinError(14,2.32216);
   hCCpi0inFV_stack_11->SetBinError(15,1.822461);
   hCCpi0inFV_stack_11->SetBinError(16,1.464848);
   hCCpi0inFV_stack_11->SetBinError(17,1.45582);
   hCCpi0inFV_stack_11->SetBinError(18,1.261182);
   hCCpi0inFV_stack_11->SetBinError(19,1.074132);
   hCCpi0inFV_stack_11->SetBinError(20,0.961256);
   hCCpi0inFV_stack_11->SetBinError(21,2.141369);
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
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(2,0.5901461);
   hNCinFV_stack_12->SetBinContent(3,12.32389);
   hNCinFV_stack_12->SetBinContent(4,23.95887);
   hNCinFV_stack_12->SetBinContent(5,20.43162);
   hNCinFV_stack_12->SetBinContent(6,20.82275);
   hNCinFV_stack_12->SetBinContent(7,19.39648);
   hNCinFV_stack_12->SetBinContent(8,12.52847);
   hNCinFV_stack_12->SetBinContent(9,8.88783);
   hNCinFV_stack_12->SetBinContent(10,9.436557);
   hNCinFV_stack_12->SetBinContent(11,4.492942);
   hNCinFV_stack_12->SetBinContent(12,2.445722);
   hNCinFV_stack_12->SetBinContent(13,3.072824);
   hNCinFV_stack_12->SetBinContent(14,1.853885);
   hNCinFV_stack_12->SetBinContent(15,0.9818863);
   hNCinFV_stack_12->SetBinContent(16,0.7319179);
   hNCinFV_stack_12->SetBinContent(17,0.5901461);
   hNCinFV_stack_12->SetBinContent(18,0.5901461);
   hNCinFV_stack_12->SetBinContent(19,0.7336084);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.9269427);
   hNCinFV_stack_12->SetBinError(2,0.340721);
   hNCinFV_stack_12->SetBinError(3,1.733775);
   hNCinFV_stack_12->SetBinError(4,2.551769);
   hNCinFV_stack_12->SetBinError(5,2.255205);
   hNCinFV_stack_12->SetBinError(6,2.228015);
   hNCinFV_stack_12->SetBinError(7,2.220688);
   hNCinFV_stack_12->SetBinError(8,1.856298);
   hNCinFV_stack_12->SetBinError(9,1.494026);
   hNCinFV_stack_12->SetBinError(10,1.54634);
   hNCinFV_stack_12->SetBinError(11,1.03734);
   hNCinFV_stack_12->SetBinError(12,0.7600838);
   hNCinFV_stack_12->SetBinError(13,0.9205954);
   hNCinFV_stack_12->SetBinError(14,0.6789509);
   hNCinFV_stack_12->SetBinError(15,0.4391155);
   hNCinFV_stack_12->SetBinError(16,0.438694);
   hNCinFV_stack_12->SetBinError(17,0.340721);
   hNCinFV_stack_12->SetBinError(18,0.340721);
   hNCinFV_stack_12->SetBinError(19,0.4394482);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.4800908);
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
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_13->SetBinContent(3,14.76164);
   hnumuCCinFV_stack_13->SetBinContent(4,37.63947);
   hnumuCCinFV_stack_13->SetBinContent(5,30.08826);
   hnumuCCinFV_stack_13->SetBinContent(6,32.61003);
   hnumuCCinFV_stack_13->SetBinContent(7,23.70387);
   hnumuCCinFV_stack_13->SetBinContent(8,18.58186);
   hnumuCCinFV_stack_13->SetBinContent(9,17.16805);
   hnumuCCinFV_stack_13->SetBinContent(10,9.793718);
   hnumuCCinFV_stack_13->SetBinContent(11,9.016624);
   hnumuCCinFV_stack_13->SetBinContent(12,5.991367);
   hnumuCCinFV_stack_13->SetBinContent(13,5.443343);
   hnumuCCinFV_stack_13->SetBinContent(14,2.64329);
   hnumuCCinFV_stack_13->SetBinContent(15,4.630564);
   hnumuCCinFV_stack_13->SetBinContent(16,0.9286332);
   hnumuCCinFV_stack_13->SetBinContent(17,1.350708);
   hnumuCCinFV_stack_13->SetBinContent(18,0.8432679);
   hnumuCCinFV_stack_13->SetBinContent(20,0.9286332);
   hnumuCCinFV_stack_13->SetBinContent(21,2.760421);
   hnumuCCinFV_stack_13->SetBinError(2,0.300021);
   hnumuCCinFV_stack_13->SetBinError(3,2.542415);
   hnumuCCinFV_stack_13->SetBinError(4,3.884536);
   hnumuCCinFV_stack_13->SetBinError(5,3.52789);
   hnumuCCinFV_stack_13->SetBinError(6,3.171125);
   hnumuCCinFV_stack_13->SetBinError(7,3.455143);
   hnumuCCinFV_stack_13->SetBinError(8,2.178787);
   hnumuCCinFV_stack_13->SetBinError(9,2.176246);
   hnumuCCinFV_stack_13->SetBinError(10,1.543592);
   hnumuCCinFV_stack_13->SetBinError(11,1.589339);
   hnumuCCinFV_stack_13->SetBinError(12,1.435056);
   hnumuCCinFV_stack_13->SetBinError(13,1.297237);
   hnumuCCinFV_stack_13->SetBinError(14,0.8333605);
   hnumuCCinFV_stack_13->SetBinError(15,1.55493);
   hnumuCCinFV_stack_13->SetBinError(16,0.48078);
   hnumuCCinFV_stack_13->SetBinError(17,0.566245);
   hnumuCCinFV_stack_13->SetBinError(18,0.4244543);
   hnumuCCinFV_stack_13->SetBinError(20,0.48078);
   hnumuCCinFV_stack_13->SetBinError(21,0.828635);
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
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(3,2.556965);
   hnueCCinFV_stack_14->SetBinContent(4,2.119546);
   hnueCCinFV_stack_14->SetBinContent(5,3.539517);
   hnueCCinFV_stack_14->SetBinContent(6,1.642957);
   hnueCCinFV_stack_14->SetBinContent(7,1.505175);
   hnueCCinFV_stack_14->SetBinContent(8,3.491614);
   hnueCCinFV_stack_14->SetBinContent(9,1.745037);
   hnueCCinFV_stack_14->SetBinContent(10,1.160035);
   hnueCCinFV_stack_14->SetBinContent(11,1.997767);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,2.077182);
   hnueCCinFV_stack_14->SetBinContent(14,1.195753);
   hnueCCinFV_stack_14->SetBinContent(15,0.9974717);
   hnueCCinFV_stack_14->SetBinContent(16,0.1969809);
   hnueCCinFV_stack_14->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(19,0.6097559);
   hnueCCinFV_stack_14->SetBinContent(20,1.353271);
   hnueCCinFV_stack_14->SetBinContent(21,6.249086);
   hnueCCinFV_stack_14->SetBinError(3,1.439881);
   hnueCCinFV_stack_14->SetBinError(4,0.8602195);
   hnueCCinFV_stack_14->SetBinError(5,1.068197);
   hnueCCinFV_stack_14->SetBinError(6,0.7077585);
   hnueCCinFV_stack_14->SetBinError(7,0.574703);
   hnueCCinFV_stack_14->SetBinError(8,1.005799);
   hnueCCinFV_stack_14->SetBinError(9,0.6891878);
   hnueCCinFV_stack_14->SetBinError(10,0.6866306);
   hnueCCinFV_stack_14->SetBinError(11,1.220846);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.8360356);
   hnueCCinFV_stack_14->SetBinError(14,0.5481236);
   hnueCCinFV_stack_14->SetBinError(15,0.5310414);
   hnueCCinFV_stack_14->SetBinError(16,0.1967155);
   hnueCCinFV_stack_14->SetBinError(18,0.1950249);
   hnueCCinFV_stack_14->SetBinError(19,0.3525088);
   hnueCCinFV_stack_14->SetBinError(20,0.862589);
   hnueCCinFV_stack_14->SetBinError(21,2.054513);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__11->SetBinContent(2,12.99491);
   hmcerror__11->SetBinContent(3,328.0982);
   hmcerror__11->SetBinContent(4,636.9826);
   hmcerror__11->SetBinContent(5,627.9568);
   hmcerror__11->SetBinContent(6,538.2173);
   hmcerror__11->SetBinContent(7,443.2318);
   hmcerror__11->SetBinContent(8,334.2754);
   hmcerror__11->SetBinContent(9,250.1434);
   hmcerror__11->SetBinContent(10,176.9861);
   hmcerror__11->SetBinContent(11,128.5097);
   hmcerror__11->SetBinContent(12,84.61244);
   hmcerror__11->SetBinContent(13,62.23139);
   hmcerror__11->SetBinContent(14,48.93853);
   hmcerror__11->SetBinContent(15,34.29594);
   hmcerror__11->SetBinContent(16,19.64335);
   hmcerror__11->SetBinContent(17,20.94726);
   hmcerror__11->SetBinContent(18,13.71321);
   hmcerror__11->SetBinContent(19,10.77712);
   hmcerror__11->SetBinContent(20,9.449006);
   hmcerror__11->SetBinContent(21,38.99682);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,4.977265);
   hmcerror__11->SetBinError(3,66.34716);
   hmcerror__11->SetBinError(4,137.5145);
   hmcerror__11->SetBinError(5,130.8526);
   hmcerror__11->SetBinError(6,111.8907);
   hmcerror__11->SetBinError(7,88.15493);
   hmcerror__11->SetBinError(8,69.97595);
   hmcerror__11->SetBinError(9,53.03864);
   hmcerror__11->SetBinError(10,39.05063);
   hmcerror__11->SetBinError(11,30.52984);
   hmcerror__11->SetBinError(12,23.40226);
   hmcerror__11->SetBinError(13,16.44985);
   hmcerror__11->SetBinError(14,18.31994);
   hmcerror__11->SetBinError(15,11.36741);
   hmcerror__11->SetBinError(16,7.174881);
   hmcerror__11->SetBinError(17,7.6404);
   hmcerror__11->SetBinError(18,6.504061);
   hmcerror__11->SetBinError(19,6.687205);
   hmcerror__11->SetBinError(20,7.023626);
   hmcerror__11->SetBinError(21,10.6545);
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
   
   Double_t _fx3013[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3013[20] = {
   0,
   14,
   377,
   760,
   672,
   549,
   378,
   265,
   242,
   145,
   119,
   83,
   52,
   34,
   22,
   29,
   21,
   13,
   12,
   8};
   Double_t _felx3013[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3013[20] = {
   0,
   3.9102,
   19.41649,
   27.5681,
   25.92296,
   23.43075,
   19.44222,
   16.27882,
   15.55635,
   12.04159,
   10.90871,
   9.234,
   7.3419,
   5.9703,
   4.8417,
   5.5285,
   4.7354,
   3.77763,
   3.64022,
   3.0307};
   Double_t _fehx3013[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3013[20] = {
   1.1478,
   3.6898,
   19.41649,
   27.5681,
   25.92296,
   23.43075,
   19.44222,
   16.27882,
   15.55635,
   12.04159,
   10.90871,
   9.0323,
   7.1381,
   5.7635,
   4.6299,
   5.3201,
   4.5229,
   3.5552,
   3.4155,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1650);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(866.3249);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3795.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 473.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1289.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  252.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 609.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 216.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 26.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3014[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3014[20] = {
   0,
   0.3830166,
   0.2022174,
   0.2158842,
   0.2083783,
   0.2078914,
   0.1988913,
   0.2093362,
   0.2120329,
   0.2206424,
   0.2375685,
   0.2765818,
   0.2643336,
   0.374346,
   0.3314505,
   0.3652575,
   0.3647446,
   0.4742915,
   0.6205004,
   0.743319};
   Double_t _fehx3014[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3014[20] = {
   0,
   0.3830166,
   0.2022174,
   0.2158842,
   0.2083783,
   0.2078914,
   0.1988913,
   0.2093362,
   0.2120329,
   0.2206424,
   0.2375685,
   0.2765818,
   0.2643336,
   0.374346,
   0.3314505,
   0.3652575,
   0.3647446,
   0.4742915,
   0.6205004,
   0.743319};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1650);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3015[20] = {
   0,
   0.2224984,
   0.150697,
   0.184848,
   0.1939603,
   0.1923646,
   0.1944258,
   0.1975313,
   0.1945345,
   0.1986295,
   0.191372,
   0.2060422,
   0.2026292,
   0.2128902,
   0.212424,
   0.2152184,
   0.2103784,
   0.2470419,
   0.24668,
   0.340552};
   Double_t _fehx3015[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3015[20] = {
   0,
   0.2224984,
   0.150697,
   0.184848,
   0.1939603,
   0.1923646,
   0.1944258,
   0.1975313,
   0.1945345,
   0.1986295,
   0.191372,
   0.2060422,
   0.2026292,
   0.2128902,
   0.212424,
   0.2152184,
   0.2103784,
   0.2470419,
   0.24668,
   0.340552};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1650);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3016[20] = {
   10,
   1.077345,
   1.149046,
   1.193125,
   1.070137,
   1.020034,
   0.8528269,
   0.7927595,
   0.9674451,
   0.8192735,
   0.9260004,
   0.9809432,
   0.8355912,
   0.6947491,
   0.6414753,
   1.476327,
   1.002518,
   0.9479908,
   1.11347,
   0.8466499};
   Double_t _felx3016[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3016[20] = {
   0,
   0.3009025,
   0.05917889,
   0.0432792,
   0.04128144,
   0.043534,
   0.04386468,
   0.04869883,
   0.06218973,
   0.06803696,
   0.08488632,
   0.1091329,
   0.1179774,
   0.1219959,
   0.1411741,
   0.2814439,
   0.226063,
   0.2754737,
   0.3377731,
   0.3207427};
   Double_t _fehx3016[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3016[20] = {
   0,
   0.283942,
   0.05917889,
   0.0432792,
   0.04128144,
   0.043534,
   0.04386468,
   0.04869883,
   0.06218973,
   0.06803696,
   0.08488632,
   0.1067491,
   0.1147026,
   0.1177702,
   0.1349985,
   0.2708347,
   0.2159185,
   0.2592536,
   0.3169215,
   0.2952268};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1650);
   Graph_Graph3016->SetMinimum(0.4502711);
   Graph_Graph3016->SetMaximum(10.94997);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_transferred_visible_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
