#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 01:05:08 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-15.2,1692.308,1280.8);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hmc__1->SetBinContent(0,255.3153);
   hmc__1->SetBinContent(2,12.99491);
   hmc__1->SetBinContent(3,328.0982);
   hmc__1->SetBinContent(4,636.9827);
   hmc__1->SetBinContent(5,627.9568);
   hmc__1->SetBinContent(6,538.2173);
   hmc__1->SetBinContent(7,443.2318);
   hmc__1->SetBinContent(8,334.2754);
   hmc__1->SetBinContent(9,250.1434);
   hmc__1->SetBinContent(10,176.9861);
   hmc__1->SetBinContent(11,128.5097);
   hmc__1->SetBinContent(12,84.61244);
   hmc__1->SetBinContent(13,62.23139);
   hmc__1->SetBinContent(14,48.93853);
   hmc__1->SetBinContent(15,34.29594);
   hmc__1->SetBinContent(16,19.64335);
   hmc__1->SetBinContent(17,20.94726);
   hmc__1->SetBinContent(18,13.71321);
   hmc__1->SetBinContent(19,10.77712);
   hmc__1->SetBinContent(20,9.449006);
   hmc__1->SetBinContent(21,38.99682);
   hmc__1->SetBinError(0,7.385883);
   hmc__1->SetBinError(1,0.4212968);
   hmc__1->SetBinError(2,4.970876);
   hmc__1->SetBinError(3,66.33627);
   hmc__1->SetBinError(4,137.5632);
   hmc__1->SetBinError(5,130.8158);
   hmc__1->SetBinError(6,111.8633);
   hmc__1->SetBinError(7,88.14308);
   hmc__1->SetBinError(8,69.98004);
   hmc__1->SetBinError(9,53.01059);
   hmc__1->SetBinError(10,39.04883);
   hmc__1->SetBinError(11,30.51205);
   hmc__1->SetBinError(12,23.38207);
   hmc__1->SetBinError(13,16.42368);
   hmc__1->SetBinError(14,18.37895);
   hmc__1->SetBinError(15,11.367);
   hmc__1->SetBinError(16,7.140023);
   hmc__1->SetBinError(17,7.601386);
   hmc__1->SetBinError(18,6.488856);
   hmc__1->SetBinError(19,6.668495);
   hmc__1->SetBinError(20,7.016952);
   hmc__1->SetBinError(21,10.64341);
   hmc__1->SetMinimum(-15.2);
   hmc__1->SetMaximum(1216);
   hmc__1->SetEntries(4029.808);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1500);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(668.8318);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(0,3.842136);
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
   hbadmatch_stack_1->SetBinError(0,1.047336);
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
   hbadmatch_stack_1->SetEntries(394);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hext_stack_2->SetBinContent(0,34.69433);
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
   hext_stack_2->SetBinError(0,3.985922);
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
   hext_stack_2->SetEntries(1218);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hdirt_stack_3->SetBinContent(0,3.848742);
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
   hdirt_stack_3->SetBinError(0,1.040478);
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
   hdirt_stack_3->SetEntries(253);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   houtFV_stack_4->SetBinContent(0,37.04512);
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
   houtFV_stack_4->SetBinError(0,3.063635);
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
   houtFV_stack_4->SetEntries(2321);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,11.26467);
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
   hNCpi0inFVcoh_stack_5->SetBinError(0,1.118507);
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
   hNCpi0inFVcoh_stack_5->SetEntries(2012);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,103.382);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,3.09658);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,117.1368);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,279.8481);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,300.1343);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,254.2169);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,187.4745);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,136.3112);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,96.71175);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,61.39801);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,39.63177);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,30.16603);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,13.2718);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,10.06796);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,8.740037);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,4.602524);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,2.621943);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,3.026002);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,2.31538);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,1.184258);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,4.769755);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,3.256021);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,0.5567247);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.494081);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,5.433246);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,5.68549);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.185907);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.450024);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.766774);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.206061);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.535791);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.017421);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.917691);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.060208);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.041443);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.9406422);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.7141411);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.4808238);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.600828);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.5367932);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.3155521);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.6941967);
   hNCpi0inFVnoncoh_stack_6->SetEntries(31034);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(0,33.70218);
   hCCpi0inFV_stack_7->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_7->SetBinContent(3,8.828913);
   hCCpi0inFV_stack_7->SetBinContent(4,29.7172);
   hCCpi0inFV_stack_7->SetBinContent(5,47.13186);
   hCCpi0inFV_stack_7->SetBinContent(6,71.72421);
   hCCpi0inFV_stack_7->SetBinContent(7,86.52515);
   hCCpi0inFV_stack_7->SetBinContent(8,79.76285);
   hCCpi0inFV_stack_7->SetBinContent(9,66.40561);
   hCCpi0inFV_stack_7->SetBinContent(10,56.96115);
   hCCpi0inFV_stack_7->SetBinContent(11,40.58549);
   hCCpi0inFV_stack_7->SetBinContent(12,29.86278);
   hCCpi0inFV_stack_7->SetBinContent(13,24.61688);
   hCCpi0inFV_stack_7->SetBinContent(14,21.25037);
   hCCpi0inFV_stack_7->SetBinContent(15,13.05591);
   hCCpi0inFV_stack_7->SetBinContent(16,9.11079);
   hCCpi0inFV_stack_7->SetBinContent(17,8.804383);
   hCCpi0inFV_stack_7->SetBinContent(18,6.081305);
   hCCpi0inFV_stack_7->SetBinContent(19,4.638094);
   hCCpi0inFV_stack_7->SetBinContent(20,4.211089);
   hCCpi0inFV_stack_7->SetBinContent(21,17.38284);
   hCCpi0inFV_stack_7->SetBinError(0,2.827434);
   hCCpi0inFV_stack_7->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_7->SetBinError(3,1.507157);
   hCCpi0inFV_stack_7->SetBinError(4,2.669262);
   hCCpi0inFV_stack_7->SetBinError(5,3.417014);
   hCCpi0inFV_stack_7->SetBinError(6,4.168569);
   hCCpi0inFV_stack_7->SetBinError(7,4.674282);
   hCCpi0inFV_stack_7->SetBinError(8,4.468761);
   hCCpi0inFV_stack_7->SetBinError(9,4.102498);
   hCCpi0inFV_stack_7->SetBinError(10,3.814443);
   hCCpi0inFV_stack_7->SetBinError(11,3.228031);
   hCCpi0inFV_stack_7->SetBinError(12,2.785463);
   hCCpi0inFV_stack_7->SetBinError(13,2.529154);
   hCCpi0inFV_stack_7->SetBinError(14,2.32216);
   hCCpi0inFV_stack_7->SetBinError(15,1.822461);
   hCCpi0inFV_stack_7->SetBinError(16,1.464848);
   hCCpi0inFV_stack_7->SetBinError(17,1.45582);
   hCCpi0inFV_stack_7->SetBinError(18,1.261182);
   hCCpi0inFV_stack_7->SetBinError(19,1.074132);
   hCCpi0inFV_stack_7->SetBinError(20,0.961256);
   hCCpi0inFV_stack_7->SetBinError(21,2.141369);
   hCCpi0inFV_stack_7->SetEntries(2832);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(0,14.65804);
   hNCinFV_stack_8->SetBinContent(2,0.5901461);
   hNCinFV_stack_8->SetBinContent(3,12.32389);
   hNCinFV_stack_8->SetBinContent(4,23.95887);
   hNCinFV_stack_8->SetBinContent(5,20.43162);
   hNCinFV_stack_8->SetBinContent(6,20.82275);
   hNCinFV_stack_8->SetBinContent(7,19.39648);
   hNCinFV_stack_8->SetBinContent(8,12.52847);
   hNCinFV_stack_8->SetBinContent(9,8.88783);
   hNCinFV_stack_8->SetBinContent(10,9.436557);
   hNCinFV_stack_8->SetBinContent(11,4.492942);
   hNCinFV_stack_8->SetBinContent(12,2.445722);
   hNCinFV_stack_8->SetBinContent(13,3.072824);
   hNCinFV_stack_8->SetBinContent(14,1.853885);
   hNCinFV_stack_8->SetBinContent(15,0.9818863);
   hNCinFV_stack_8->SetBinContent(16,0.7319179);
   hNCinFV_stack_8->SetBinContent(17,0.5901461);
   hNCinFV_stack_8->SetBinContent(18,0.5901461);
   hNCinFV_stack_8->SetBinContent(19,0.7336084);
   hNCinFV_stack_8->SetBinContent(20,0.3401776);
   hNCinFV_stack_8->SetBinContent(21,0.9269427);
   hNCinFV_stack_8->SetBinError(0,1.912686);
   hNCinFV_stack_8->SetBinError(2,0.340721);
   hNCinFV_stack_8->SetBinError(3,1.733775);
   hNCinFV_stack_8->SetBinError(4,2.551769);
   hNCinFV_stack_8->SetBinError(5,2.255205);
   hNCinFV_stack_8->SetBinError(6,2.228015);
   hNCinFV_stack_8->SetBinError(7,2.220688);
   hNCinFV_stack_8->SetBinError(8,1.856298);
   hNCinFV_stack_8->SetBinError(9,1.494026);
   hNCinFV_stack_8->SetBinError(10,1.54634);
   hNCinFV_stack_8->SetBinError(11,1.03734);
   hNCinFV_stack_8->SetBinError(12,0.7600838);
   hNCinFV_stack_8->SetBinError(13,0.9205954);
   hNCinFV_stack_8->SetBinError(14,0.6789509);
   hNCinFV_stack_8->SetBinError(15,0.4391155);
   hNCinFV_stack_8->SetBinError(16,0.438694);
   hNCinFV_stack_8->SetBinError(17,0.340721);
   hNCinFV_stack_8->SetBinError(18,0.340721);
   hNCinFV_stack_8->SetBinError(19,0.4394482);
   hNCinFV_stack_8->SetBinError(20,0.3401776);
   hNCinFV_stack_8->SetBinError(21,0.4800908);
   hNCinFV_stack_8->SetEntries(678);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(0,11.41965);
   hnumuCCinFV_stack_9->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_9->SetBinContent(3,14.76164);
   hnumuCCinFV_stack_9->SetBinContent(4,37.63947);
   hnumuCCinFV_stack_9->SetBinContent(5,30.08826);
   hnumuCCinFV_stack_9->SetBinContent(6,32.61003);
   hnumuCCinFV_stack_9->SetBinContent(7,23.70387);
   hnumuCCinFV_stack_9->SetBinContent(8,18.58186);
   hnumuCCinFV_stack_9->SetBinContent(9,17.16805);
   hnumuCCinFV_stack_9->SetBinContent(10,9.793718);
   hnumuCCinFV_stack_9->SetBinContent(11,9.016624);
   hnumuCCinFV_stack_9->SetBinContent(12,5.991367);
   hnumuCCinFV_stack_9->SetBinContent(13,5.443343);
   hnumuCCinFV_stack_9->SetBinContent(14,2.64329);
   hnumuCCinFV_stack_9->SetBinContent(15,4.630564);
   hnumuCCinFV_stack_9->SetBinContent(16,0.9286332);
   hnumuCCinFV_stack_9->SetBinContent(17,1.350708);
   hnumuCCinFV_stack_9->SetBinContent(18,0.8432679);
   hnumuCCinFV_stack_9->SetBinContent(20,0.9286332);
   hnumuCCinFV_stack_9->SetBinContent(21,2.760421);
   hnumuCCinFV_stack_9->SetBinError(0,1.794202);
   hnumuCCinFV_stack_9->SetBinError(2,0.300021);
   hnumuCCinFV_stack_9->SetBinError(3,2.542415);
   hnumuCCinFV_stack_9->SetBinError(4,3.884536);
   hnumuCCinFV_stack_9->SetBinError(5,3.52789);
   hnumuCCinFV_stack_9->SetBinError(6,3.171125);
   hnumuCCinFV_stack_9->SetBinError(7,3.455143);
   hnumuCCinFV_stack_9->SetBinError(8,2.178787);
   hnumuCCinFV_stack_9->SetBinError(9,2.176246);
   hnumuCCinFV_stack_9->SetBinError(10,1.543592);
   hnumuCCinFV_stack_9->SetBinError(11,1.589339);
   hnumuCCinFV_stack_9->SetBinError(12,1.435056);
   hnumuCCinFV_stack_9->SetBinError(13,1.297237);
   hnumuCCinFV_stack_9->SetBinError(14,0.8333605);
   hnumuCCinFV_stack_9->SetBinError(15,1.55493);
   hnumuCCinFV_stack_9->SetBinError(16,0.48078);
   hnumuCCinFV_stack_9->SetBinError(17,0.566245);
   hnumuCCinFV_stack_9->SetBinError(18,0.4244543);
   hnumuCCinFV_stack_9->SetBinError(20,0.48078);
   hnumuCCinFV_stack_9->SetBinError(21,0.828635);
   hnumuCCinFV_stack_9->SetEntries(891);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(0,1.45845);
   hnueCCinFV_stack_10->SetBinContent(3,2.556965);
   hnueCCinFV_stack_10->SetBinContent(4,2.119546);
   hnueCCinFV_stack_10->SetBinContent(5,3.539517);
   hnueCCinFV_stack_10->SetBinContent(6,1.642957);
   hnueCCinFV_stack_10->SetBinContent(7,1.505175);
   hnueCCinFV_stack_10->SetBinContent(8,3.491614);
   hnueCCinFV_stack_10->SetBinContent(9,1.745037);
   hnueCCinFV_stack_10->SetBinContent(10,1.160035);
   hnueCCinFV_stack_10->SetBinContent(11,1.997767);
   hnueCCinFV_stack_10->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(13,2.077182);
   hnueCCinFV_stack_10->SetBinContent(14,1.195753);
   hnueCCinFV_stack_10->SetBinContent(15,0.9974717);
   hnueCCinFV_stack_10->SetBinContent(16,0.1969809);
   hnueCCinFV_stack_10->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(19,0.6097559);
   hnueCCinFV_stack_10->SetBinContent(20,1.353271);
   hnueCCinFV_stack_10->SetBinContent(21,6.249086);
   hnueCCinFV_stack_10->SetBinError(0,0.6112922);
   hnueCCinFV_stack_10->SetBinError(3,1.439881);
   hnueCCinFV_stack_10->SetBinError(4,0.8602195);
   hnueCCinFV_stack_10->SetBinError(5,1.068197);
   hnueCCinFV_stack_10->SetBinError(6,0.7077585);
   hnueCCinFV_stack_10->SetBinError(7,0.574703);
   hnueCCinFV_stack_10->SetBinError(8,1.005799);
   hnueCCinFV_stack_10->SetBinError(9,0.6891878);
   hnueCCinFV_stack_10->SetBinError(10,0.6866306);
   hnueCCinFV_stack_10->SetBinError(11,1.220846);
   hnueCCinFV_stack_10->SetBinError(12,0.1967154);
   hnueCCinFV_stack_10->SetBinError(13,0.8360356);
   hnueCCinFV_stack_10->SetBinError(14,0.5481236);
   hnueCCinFV_stack_10->SetBinError(15,0.5310414);
   hnueCCinFV_stack_10->SetBinError(16,0.1967155);
   hnueCCinFV_stack_10->SetBinError(18,0.1950249);
   hnueCCinFV_stack_10->SetBinError(19,0.3525088);
   hnueCCinFV_stack_10->SetBinError(20,0.862589);
   hnueCCinFV_stack_10->SetBinError(21,2.054513);
   hnueCCinFV_stack_10->SetEntries(122);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);
   hmcerror__2->SetBinContent(0,255.3153);
   hmcerror__2->SetBinContent(2,12.99491);
   hmcerror__2->SetBinContent(3,328.0982);
   hmcerror__2->SetBinContent(4,636.9827);
   hmcerror__2->SetBinContent(5,627.9568);
   hmcerror__2->SetBinContent(6,538.2173);
   hmcerror__2->SetBinContent(7,443.2318);
   hmcerror__2->SetBinContent(8,334.2754);
   hmcerror__2->SetBinContent(9,250.1434);
   hmcerror__2->SetBinContent(10,176.9861);
   hmcerror__2->SetBinContent(11,128.5097);
   hmcerror__2->SetBinContent(12,84.61244);
   hmcerror__2->SetBinContent(13,62.23139);
   hmcerror__2->SetBinContent(14,48.93853);
   hmcerror__2->SetBinContent(15,34.29594);
   hmcerror__2->SetBinContent(16,19.64335);
   hmcerror__2->SetBinContent(17,20.94726);
   hmcerror__2->SetBinContent(18,13.71321);
   hmcerror__2->SetBinContent(19,10.77712);
   hmcerror__2->SetBinContent(20,9.449006);
   hmcerror__2->SetBinContent(21,38.99682);
   hmcerror__2->SetBinError(0,7.385883);
   hmcerror__2->SetBinError(1,0.4212968);
   hmcerror__2->SetBinError(2,4.970876);
   hmcerror__2->SetBinError(3,66.33627);
   hmcerror__2->SetBinError(4,137.5632);
   hmcerror__2->SetBinError(5,130.8158);
   hmcerror__2->SetBinError(6,111.8633);
   hmcerror__2->SetBinError(7,88.14308);
   hmcerror__2->SetBinError(8,69.98004);
   hmcerror__2->SetBinError(9,53.01059);
   hmcerror__2->SetBinError(10,39.04883);
   hmcerror__2->SetBinError(11,30.51205);
   hmcerror__2->SetBinError(12,23.38207);
   hmcerror__2->SetBinError(13,16.42368);
   hmcerror__2->SetBinError(14,18.37895);
   hmcerror__2->SetBinError(15,11.367);
   hmcerror__2->SetBinError(16,7.140023);
   hmcerror__2->SetBinError(17,7.601386);
   hmcerror__2->SetBinError(18,6.488856);
   hmcerror__2->SetBinError(19,6.668495);
   hmcerror__2->SetBinError(20,7.016952);
   hmcerror__2->SetBinError(21,10.64341);
   hmcerror__2->SetEntries(4029.808);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[20] = {
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
   Double_t _fy3001[20] = {
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
   Double_t _felx3001[20] = {
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
   Double_t _fely3001[20] = {
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
   Double_t _fehx3001[20] = {
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
   Double_t _fehy3001[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(866.3249);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.6,0.9,0.93,NULL,"brNDC");
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

   ci = 1434;
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

   ci = 1435;
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

   ci = 1436;
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

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1552.0","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 609.6","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 144.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 216.4","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 26.6","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_reco_Enu_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
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
   Double_t _fy3002[20] = {
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
   Double_t _felx3002[20] = {
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
   Double_t _fely3002[20] = {
   0,
   0.382525,
   0.2021842,
   0.2159607,
   0.2083198,
   0.2078404,
   0.1988645,
   0.2093485,
   0.2119208,
   0.2206322,
   0.23743,
   0.2763431,
   0.2639131,
   0.3755517,
   0.3314386,
   0.363483,
   0.3628821,
   0.4731828,
   0.6187643,
   0.7426127};
   Double_t _fehx3002[20] = {
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
   Double_t _fehy3002[20] = {
   0,
   0.382525,
   0.2021842,
   0.2159607,
   0.2083198,
   0.2078404,
   0.1988645,
   0.2093485,
   0.2119208,
   0.2206322,
   0.23743,
   0.2763431,
   0.2639131,
   0.3755517,
   0.3314386,
   0.363483,
   0.3628821,
   0.4731828,
   0.6187643,
   0.7426127};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[20] = {
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
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
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
   Double_t _fely3003[20] = {
   0,
   0.2227971,
   0.1507087,
   0.1848512,
   0.1939632,
   0.1923678,
   0.1944273,
   0.1975392,
   0.1945344,
   0.1986316,
   0.191378,
   0.2060834,
   0.2026669,
   0.2130637,
   0.2124902,
   0.2156555,
   0.2105605,
   0.2475582,
   0.2474912,
   0.3414267};
   Double_t _fehx3003[20] = {
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
   Double_t _fehy3003[20] = {
   0,
   0.2227971,
   0.1507087,
   0.1848512,
   0.1939632,
   0.1923678,
   0.1944273,
   0.1975392,
   0.1945344,
   0.1986316,
   0.191378,
   0.2060834,
   0.2026669,
   0.2130637,
   0.2124902,
   0.2156555,
   0.2105605,
   0.2475582,
   0.2474912,
   0.3414267};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[20] = {
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
   Double_t _fy3004[20] = {
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
   Double_t _felx3004[20] = {
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
   Double_t _fely3004[20] = {
   0,
   0.3009025,
   0.05917889,
   0.0432792,
   0.04128144,
   0.04353399,
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
   Double_t _fehx3004[20] = {
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
   Double_t _fehy3004[20] = {
   0,
   0.283942,
   0.05917889,
   0.0432792,
   0.04128144,
   0.04353399,
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
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.4502711);
   Graph_Graph3004->SetMaximum(10.94997);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_reco_Enu_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
