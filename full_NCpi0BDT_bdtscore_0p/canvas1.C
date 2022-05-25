#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 12:18:08 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",112,135,1200,900);
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
   pad1->Range(0.2307692,-12.733,6.641026,1072.923);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__1->SetBinContent(4,544.3594);
   hmc__1->SetBinContent(5,636.6501);
   hmc__1->SetBinContent(6,555.4713);
   hmc__1->SetBinContent(7,465.9525);
   hmc__1->SetBinContent(8,378.605);
   hmc__1->SetBinContent(9,321.5305);
   hmc__1->SetBinContent(10,254.4463);
   hmc__1->SetBinContent(11,205.5017);
   hmc__1->SetBinContent(12,163.9044);
   hmc__1->SetBinContent(13,118.0714);
   hmc__1->SetBinContent(14,80.97815);
   hmc__1->SetBinContent(15,45.33945);
   hmc__1->SetBinContent(16,30.04955);
   hmc__1->SetBinContent(17,13.65074);
   hmc__1->SetBinContent(18,4.525281);
   hmc__1->SetBinContent(19,1.407794);
   hmc__1->SetBinContent(20,0.1394999);
   hmc__1->SetBinContent(21,0.4180041);
   hmc__1->SetBinError(1,0.4212968);
   hmc__1->SetBinError(2,0.4212968);
   hmc__1->SetBinError(3,0.4212968);
   hmc__1->SetBinError(4,90.51742);
   hmc__1->SetBinError(5,115.5539);
   hmc__1->SetBinError(6,104.4044);
   hmc__1->SetBinError(7,85.71294);
   hmc__1->SetBinError(8,76.18217);
   hmc__1->SetBinError(9,73.10285);
   hmc__1->SetBinError(10,56.30432);
   hmc__1->SetBinError(11,50.97074);
   hmc__1->SetBinError(12,40.41695);
   hmc__1->SetBinError(13,29.4743);
   hmc__1->SetBinError(14,22.0997);
   hmc__1->SetBinError(15,13.49127);
   hmc__1->SetBinError(16,10.07504);
   hmc__1->SetBinError(17,5.180665);
   hmc__1->SetBinError(18,2.170773);
   hmc__1->SetBinError(19,1.175217);
   hmc__1->SetBinError(20,0.3215895);
   hmc__1->SetBinError(21,1.559173);
   hmc__1->SetMinimum(-12.733);
   hmc__1->SetMaximum(1018.64);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,1,6);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(668.4827);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,23.04668);
   hbadmatch_stack_1->SetBinContent(5,23.99927);
   hbadmatch_stack_1->SetBinContent(6,16.53353);
   hbadmatch_stack_1->SetBinContent(7,12.94552);
   hbadmatch_stack_1->SetBinContent(8,8.598806);
   hbadmatch_stack_1->SetBinContent(9,7.524483);
   hbadmatch_stack_1->SetBinContent(10,2.645489);
   hbadmatch_stack_1->SetBinContent(11,2.144191);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.3917402);
   hbadmatch_stack_1->SetBinError(4,2.646372);
   hbadmatch_stack_1->SetBinError(5,3.150337);
   hbadmatch_stack_1->SetBinError(6,2.219325);
   hbadmatch_stack_1->SetBinError(7,2.334829);
   hbadmatch_stack_1->SetBinError(8,1.530875);
   hbadmatch_stack_1->SetBinError(9,1.441278);
   hbadmatch_stack_1->SetBinError(10,0.824329);
   hbadmatch_stack_1->SetBinError(11,0.7850774);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.2770047);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,117.8223);
   hext_stack_2->SetBinContent(5,108.0668);
   hext_stack_2->SetBinContent(6,82.96913);
   hext_stack_2->SetBinContent(7,62.61618);
   hext_stack_2->SetBinContent(8,48.71176);
   hext_stack_2->SetBinContent(9,25.32548);
   hext_stack_2->SetBinContent(10,13.95954);
   hext_stack_2->SetBinContent(11,9.779857);
   hext_stack_2->SetBinContent(12,4.221574);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinError(4,7.498049);
   hext_stack_2->SetBinError(5,7.018251);
   hext_stack_2->SetBinError(6,6.181418);
   hext_stack_2->SetBinError(7,5.10732);
   hext_stack_2->SetBinError(8,4.706838);
   hext_stack_2->SetBinError(9,3.390201);
   hext_stack_2->SetBinError(10,2.294937);
   hext_stack_2->SetBinError(11,2.166691);
   hext_stack_2->SetBinError(12,1.226034);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,10.53658);
   hdirt_stack_3->SetBinContent(5,15.16783);
   hdirt_stack_3->SetBinContent(6,11.13163);
   hdirt_stack_3->SetBinContent(7,5.89571);
   hdirt_stack_3->SetBinContent(8,5.548778);
   hdirt_stack_3->SetBinContent(9,4.914771);
   hdirt_stack_3->SetBinContent(10,1.160249);
   hdirt_stack_3->SetBinContent(11,0.4950385);
   hdirt_stack_3->SetBinContent(12,1.415767);
   hdirt_stack_3->SetBinContent(13,0.6486359);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinError(4,1.703006);
   hdirt_stack_3->SetBinError(5,2.174343);
   hdirt_stack_3->SetBinError(6,1.716091);
   hdirt_stack_3->SetBinError(7,1.262574);
   hdirt_stack_3->SetBinError(8,1.238391);
   hdirt_stack_3->SetBinError(9,1.516679);
   hdirt_stack_3->SetBinError(10,0.5038258);
   hdirt_stack_3->SetBinError(11,0.2933304);
   hdirt_stack_3->SetBinError(12,0.7832858);
   hdirt_stack_3->SetBinError(13,0.3899356);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,98.75648);
   houtFV_stack_4->SetBinContent(5,109.4273);
   houtFV_stack_4->SetBinContent(6,98.33661);
   houtFV_stack_4->SetBinContent(7,67.08029);
   houtFV_stack_4->SetBinContent(8,49.65244);
   houtFV_stack_4->SetBinContent(9,33.56221);
   houtFV_stack_4->SetBinContent(10,24.9341);
   houtFV_stack_4->SetBinContent(11,10.10283);
   houtFV_stack_4->SetBinContent(12,8.535051);
   houtFV_stack_4->SetBinContent(13,3.027454);
   houtFV_stack_4->SetBinContent(14,1.465526);
   houtFV_stack_4->SetBinContent(15,0.5901461);
   houtFV_stack_4->SetBinContent(16,0.3934307);
   houtFV_stack_4->SetBinError(4,5.012323);
   houtFV_stack_4->SetBinError(5,5.35746);
   houtFV_stack_4->SetBinError(6,5.0489);
   houtFV_stack_4->SetBinError(7,4.066214);
   houtFV_stack_4->SetBinError(8,3.542707);
   houtFV_stack_4->SetBinError(9,2.942186);
   houtFV_stack_4->SetBinError(10,2.53222);
   houtFV_stack_4->SetBinError(11,1.574425);
   houtFV_stack_4->SetBinError(12,1.503161);
   houtFV_stack_4->SetBinError(13,0.8668904);
   houtFV_stack_4->SetBinError(14,0.6209405);
   houtFV_stack_4->SetBinError(15,0.340721);
   houtFV_stack_4->SetBinError(16,0.2781975);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.892982);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.04553);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.031912);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.572973);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.125158);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.600954);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.459621);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,9.37112);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,10.61668);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.796838);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.954925);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.592314);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.4098);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.715526);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7298195);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9364265);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9326087);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.972448);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8787471);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8894959);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8461794);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.0255);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.16904);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9687052);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8026267);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7895492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.778337);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4462588);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,124.2229);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,173.7611);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,173.6543);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,175.1993);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,157.9486);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,162.0155);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,144.2583);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,128.4465);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,104.6607);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,82.50162);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,61.4397);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,31.99941);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,20.67565);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,10.61484);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,3.63997);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,1.157358);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,0.1115999);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,0.4180041);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.629767);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.313296);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.279907);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.351891);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.017126);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.188391);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.891801);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.714769);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.241885);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.961306);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.572049);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.738866);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.507345);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.13814);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.6409978);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.3883553);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.2406819);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_7->SetBinContent(4,88.05069);
   hCCpi0inFV_stack_7->SetBinContent(5,111.8204);
   hCCpi0inFV_stack_7->SetBinContent(6,96.50234);
   hCCpi0inFV_stack_7->SetBinContent(7,87.00889);
   hCCpi0inFV_stack_7->SetBinContent(8,65.94585);
   hCCpi0inFV_stack_7->SetBinContent(9,54.35281);
   hCCpi0inFV_stack_7->SetBinContent(10,39.15493);
   hCCpi0inFV_stack_7->SetBinContent(11,32.44291);
   hCCpi0inFV_stack_7->SetBinContent(12,23.44992);
   hCCpi0inFV_stack_7->SetBinContent(13,13.81987);
   hCCpi0inFV_stack_7->SetBinContent(14,7.21776);
   hCCpi0inFV_stack_7->SetBinContent(15,4.301298);
   hCCpi0inFV_stack_7->SetBinContent(16,1.804013);
   hCCpi0inFV_stack_7->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_7->SetBinContent(18,0.536893);
   hCCpi0inFV_stack_7->SetBinError(4,4.69929);
   hCCpi0inFV_stack_7->SetBinError(5,5.355626);
   hCCpi0inFV_stack_7->SetBinError(6,4.891995);
   hCCpi0inFV_stack_7->SetBinError(7,4.697608);
   hCCpi0inFV_stack_7->SetBinError(8,4.038067);
   hCCpi0inFV_stack_7->SetBinError(9,3.68121);
   hCCpi0inFV_stack_7->SetBinError(10,3.106702);
   hCCpi0inFV_stack_7->SetBinError(11,2.890094);
   hCCpi0inFV_stack_7->SetBinError(12,2.421924);
   hCCpi0inFV_stack_7->SetBinError(13,1.845354);
   hCCpi0inFV_stack_7->SetBinError(14,1.365707);
   hCCpi0inFV_stack_7->SetBinError(15,1.019492);
   hCCpi0inFV_stack_7->SetBinError(16,0.7075491);
   hCCpi0inFV_stack_7->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_7->SetBinError(18,0.3929602);
   hCCpi0inFV_stack_7->SetEntries(2680);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_8->SetBinContent(4,22.04061);
   hNCinFV_stack_8->SetBinContent(5,24.59622);
   hNCinFV_stack_8->SetBinContent(6,22.95065);
   hNCinFV_stack_8->SetBinContent(7,16.50408);
   hNCinFV_stack_8->SetBinContent(8,14.31955);
   hNCinFV_stack_8->SetBinContent(9,13.14602);
   hNCinFV_stack_8->SetBinContent(10,11.85922);
   hNCinFV_stack_8->SetBinContent(11,6.848455);
   hNCinFV_stack_8->SetBinContent(12,4.488478);
   hNCinFV_stack_8->SetBinContent(13,4.198173);
   hNCinFV_stack_8->SetBinContent(14,1.894347);
   hNCinFV_stack_8->SetBinContent(15,1.610679);
   hNCinFV_stack_8->SetBinContent(16,0.3401776);
   hNCinFV_stack_8->SetBinContent(17,0.3401776);
   hNCinFV_stack_8->SetBinError(4,2.355534);
   hNCinFV_stack_8->SetBinError(5,2.459865);
   hNCinFV_stack_8->SetBinError(6,2.402583);
   hNCinFV_stack_8->SetBinError(7,2.077176);
   hNCinFV_stack_8->SetBinError(8,1.882368);
   hNCinFV_stack_8->SetBinError(9,1.820378);
   hNCinFV_stack_8->SetBinError(10,1.777146);
   hNCinFV_stack_8->SetBinError(11,1.240343);
   hNCinFV_stack_8->SetBinError(12,1.128146);
   hNCinFV_stack_8->SetBinError(13,1.057044);
   hNCinFV_stack_8->SetBinError(14,0.6914745);
   hNCinFV_stack_8->SetBinError(15,0.6806271);
   hNCinFV_stack_8->SetBinError(16,0.3401776);
   hNCinFV_stack_8->SetBinError(17,0.3401776);
   hNCinFV_stack_8->SetEntries(615);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_9->SetBinContent(4,48.31998);
   hnumuCCinFV_stack_9->SetBinContent(5,54.69598);
   hnumuCCinFV_stack_9->SetBinContent(6,38.61265);
   hnumuCCinFV_stack_9->SetBinContent(7,27.93757);
   hnumuCCinFV_stack_9->SetBinContent(8,15.15854);
   hnumuCCinFV_stack_9->SetBinContent(9,11.96273);
   hnumuCCinFV_stack_9->SetBinContent(10,7.84949);
   hnumuCCinFV_stack_9->SetBinContent(11,4.940495);
   hnumuCCinFV_stack_9->SetBinContent(12,5.208478);
   hnumuCCinFV_stack_9->SetBinContent(13,2.685929);
   hnumuCCinFV_stack_9->SetBinContent(14,0.7302274);
   hnumuCCinFV_stack_9->SetBinContent(15,0.6439761);
   hnumuCCinFV_stack_9->SetBinContent(16,0.437725);
   hnumuCCinFV_stack_9->SetBinError(4,3.933269);
   hnumuCCinFV_stack_9->SetBinError(5,4.46271);
   hnumuCCinFV_stack_9->SetBinError(6,3.760133);
   hnumuCCinFV_stack_9->SetBinError(7,3.53693);
   hnumuCCinFV_stack_9->SetBinError(8,2.107246);
   hnumuCCinFV_stack_9->SetBinError(9,2.514424);
   hnumuCCinFV_stack_9->SetBinError(10,1.553306);
   hnumuCCinFV_stack_9->SetBinError(11,1.077741);
   hnumuCCinFV_stack_9->SetBinError(12,1.217143);
   hnumuCCinFV_stack_9->SetBinError(13,0.8351612);
   hnumuCCinFV_stack_9->SetBinError(14,0.4379386);
   hnumuCCinFV_stack_9->SetBinError(15,0.3743886);
   hnumuCCinFV_stack_9->SetBinError(16,0.311099);
   hnumuCCinFV_stack_9->SetEntries(846);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_10->SetBinContent(4,6.670259);
   hnueCCinFV_stack_10->SetBinContent(5,7.069749);
   hnueCCinFV_stack_10->SetBinContent(6,6.748624);
   hnueCCinFV_stack_10->SetBinContent(7,2.191886);
   hnueCCinFV_stack_10->SetBinContent(8,5.595495);
   hnueCCinFV_stack_10->SetBinContent(9,1.125428);
   hnueCCinFV_stack_10->SetBinContent(10,1.165331);
   hnueCCinFV_stack_10->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_10->SetBinContent(12,0.7708256);
   hnueCCinFV_stack_10->SetBinContent(13,0.3041673);
   hnueCCinFV_stack_10->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_10->SetBinError(4,1.889559);
   hnueCCinFV_stack_10->SetBinError(5,1.555724);
   hnueCCinFV_stack_10->SetBinError(6,1.468378);
   hnueCCinFV_stack_10->SetBinError(7,1.029967);
   hnueCCinFV_stack_10->SetBinError(8,2.068968);
   hnueCCinFV_stack_10->SetBinError(9,0.5072366);
   hnueCCinFV_stack_10->SetBinError(10,0.6160119);
   hnueCCinFV_stack_10->SetBinError(11,0.4814682);
   hnueCCinFV_stack_10->SetBinError(12,0.4520646);
   hnueCCinFV_stack_10->SetBinError(13,0.3041673);
   hnueCCinFV_stack_10->SetBinError(16,0.2577654);
   hnueCCinFV_stack_10->SetEntries(115);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__2->SetBinContent(4,544.3594);
   hmcerror__2->SetBinContent(5,636.6501);
   hmcerror__2->SetBinContent(6,555.4713);
   hmcerror__2->SetBinContent(7,465.9525);
   hmcerror__2->SetBinContent(8,378.605);
   hmcerror__2->SetBinContent(9,321.5305);
   hmcerror__2->SetBinContent(10,254.4463);
   hmcerror__2->SetBinContent(11,205.5017);
   hmcerror__2->SetBinContent(12,163.9044);
   hmcerror__2->SetBinContent(13,118.0714);
   hmcerror__2->SetBinContent(14,80.97815);
   hmcerror__2->SetBinContent(15,45.33945);
   hmcerror__2->SetBinContent(16,30.04955);
   hmcerror__2->SetBinContent(17,13.65074);
   hmcerror__2->SetBinContent(18,4.525281);
   hmcerror__2->SetBinContent(19,1.407794);
   hmcerror__2->SetBinContent(20,0.1394999);
   hmcerror__2->SetBinContent(21,0.4180041);
   hmcerror__2->SetBinError(1,0.4212968);
   hmcerror__2->SetBinError(2,0.4212968);
   hmcerror__2->SetBinError(3,0.4212968);
   hmcerror__2->SetBinError(4,90.51742);
   hmcerror__2->SetBinError(5,115.5539);
   hmcerror__2->SetBinError(6,104.4044);
   hmcerror__2->SetBinError(7,85.71294);
   hmcerror__2->SetBinError(8,76.18217);
   hmcerror__2->SetBinError(9,73.10285);
   hmcerror__2->SetBinError(10,56.30432);
   hmcerror__2->SetBinError(11,50.97074);
   hmcerror__2->SetBinError(12,40.41695);
   hmcerror__2->SetBinError(13,29.4743);
   hmcerror__2->SetBinError(14,22.0997);
   hmcerror__2->SetBinError(15,13.49127);
   hmcerror__2->SetBinError(16,10.07504);
   hmcerror__2->SetBinError(17,5.180665);
   hmcerror__2->SetBinError(18,2.170773);
   hmcerror__2->SetBinError(19,1.175217);
   hmcerror__2->SetBinError(20,0.3215895);
   hmcerror__2->SetBinError(21,1.559173);
   hmcerror__2->SetEntries(3775.136);

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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3001[20] = {
   0,
   0,
   0,
   539,
   596,
   605,
   463,
   366,
   315,
   251,
   211,
   147,
   124,
   92,
   59,
   28,
   17,
   4,
   4,
   2};
   Double_t _felx3001[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3001[20] = {
   0,
   0,
   0,
   23.21637,
   24.41311,
   24.59675,
   21.51743,
   19.13113,
   17.74824,
   15.84298,
   14.52584,
   12.12436,
   11.13553,
   9.7138,
   7.8097,
   5.4358,
   4.2835,
   2.29683,
   2.29683,
   2};
   Double_t _fehx3001[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3001[20] = {
   1.1478,
   1.1478,
   1.1478,
   23.21637,
   24.41311,
   24.59675,
   21.51743,
   19.13113,
   17.74824,
   15.84298,
   14.52584,
   12.12436,
   11.13553,
   9.513,
   7.6066,
   5.2271,
   4.0673,
   1.98186,
   1.98186,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0.5,6.5);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(692.5564);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 627.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 145.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
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
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3002[20] = {
   0,
   0,
   0,
   0.1662824,
   0.181503,
   0.1879564,
   0.1839521,
   0.2012181,
   0.227359,
   0.2212817,
   0.2480308,
   0.2465885,
   0.2496311,
   0.2729094,
   0.2975613,
   0.3352809,
   0.3795153,
   0.4796991,
   0.8347932,
   2.305302};
   Double_t _fehx3002[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3002[20] = {
   0,
   0,
   0,
   0.1662824,
   0.181503,
   0.1879564,
   0.1839521,
   0.2012181,
   0.227359,
   0.2212817,
   0.2480308,
   0.2465885,
   0.2496311,
   0.2729094,
   0.2975613,
   0.3352809,
   0.3795153,
   0.4796991,
   0.8347932,
   2.305302};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0.5,6.5);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
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
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3003[20] = {
   0,
   0,
   0,
   0.1576344,
   0.169446,
   0.1754889,
   0.1756529,
   0.184392,
   0.2004217,
   0.2076884,
   0.2143149,
   0.2219778,
   0.2220397,
   0.2286302,
   0.2501241,
   0.2754393,
   0.2566406,
   0.3345286,
   0.5406875,
   2.111611};
   Double_t _fehx3003[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3003[20] = {
   0,
   0,
   0,
   0.1576344,
   0.169446,
   0.1754889,
   0.1756529,
   0.184392,
   0.2004217,
   0.2076884,
   0.2143149,
   0.2219778,
   0.2220397,
   0.2286302,
   0.2501241,
   0.2754393,
   0.2566406,
   0.3345286,
   0.5406875,
   2.111611};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0.5,6.5);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3004[20] = {
   10,
   10,
   10,
   0.9901546,
   0.9361499,
   1.089165,
   0.9936636,
   0.9667067,
   0.9796895,
   0.9864556,
   1.026756,
   0.8968642,
   1.050212,
   1.136109,
   1.301295,
   0.9317943,
   1.245354,
   0.883923,
   2.841325,
   14.33693};
   Double_t _felx3004[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3004[20] = {
   0,
   0,
   0,
   0.04264898,
   0.0383462,
   0.04428086,
   0.04617946,
   0.05053057,
   0.05519925,
   0.06226453,
   0.07068477,
   0.07397211,
   0.09431179,
   0.1199558,
   0.1722496,
   0.1808945,
   0.3137925,
   0.5075552,
   1.63151,
   14.33693};
   Double_t _fehx3004[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3004[20] = {
   0,
   0,
   0,
   0.04264898,
   0.0383462,
   0.04428086,
   0.04617946,
   0.05053057,
   0.05519925,
   0.06226453,
   0.07068477,
   0.07397211,
   0.09431179,
   0.1174761,
   0.16777,
   0.1739494,
   0.2979545,
   0.4379529,
   1.407777,
   10.89011};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0.5,6.5);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(27.74974);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
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
