#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 15:55:16 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
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
   pad1->Range(0.2307692,-12.94107,6.641026,1431.01);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmc__10->SetBinContent(4,554.576);
   hmc__10->SetBinContent(5,647.0534);
   hmc__10->SetBinContent(6,569.0858);
   hmc__10->SetBinContent(7,478.2746);
   hmc__10->SetBinContent(8,387.7495);
   hmc__10->SetBinContent(9,332.8158);
   hmc__10->SetBinContent(10,262.2491);
   hmc__10->SetBinContent(11,211.2652);
   hmc__10->SetBinContent(12,166.4034);
   hmc__10->SetBinContent(13,120.8557);
   hmc__10->SetBinContent(14,82.78048);
   hmc__10->SetBinContent(15,46.41323);
   hmc__10->SetBinContent(16,30.24627);
   hmc__10->SetBinContent(17,13.84577);
   hmc__10->SetBinContent(18,4.525281);
   hmc__10->SetBinContent(19,1.407794);
   hmc__10->SetBinContent(20,0.1394999);
   hmc__10->SetBinContent(21,0.4180041);
   hmc__10->SetBinError(1,0.3895343);
   hmc__10->SetBinError(2,0.3895343);
   hmc__10->SetBinError(3,0.3895343);
   hmc__10->SetBinError(4,106.295);
   hmc__10->SetBinError(5,137.6363);
   hmc__10->SetBinError(6,120.0967);
   hmc__10->SetBinError(7,111.8782);
   hmc__10->SetBinError(8,89.35581);
   hmc__10->SetBinError(9,85.30593);
   hmc__10->SetBinError(10,78.58211);
   hmc__10->SetBinError(11,59.82418);
   hmc__10->SetBinError(12,49.71373);
   hmc__10->SetBinError(13,38.30589);
   hmc__10->SetBinError(14,27.72688);
   hmc__10->SetBinError(15,17.06901);
   hmc__10->SetBinError(16,14.22435);
   hmc__10->SetBinError(17,9.048684);
   hmc__10->SetBinError(18,3.668729);
   hmc__10->SetBinError(19,2.66803);
   hmc__10->SetBinError(20,0.4405589);
   hmc__10->SetBinError(21,2.172001);
   hmc__10->SetMinimum(-12.94107);
   hmc__10->SetMaximum(1358.812);
   hmc__10->SetEntries(3864.24);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,1,6);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(679.4061);
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
   ci = 1473;
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

   ci = 1474;
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

   ci = 1475;
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

   ci = 1476;
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

   ci = 1477;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.781536);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6689357);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4742997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.896712);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9210359);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9746759);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2954882);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1793726);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1150346);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4936718);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3020022);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.316988);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.097318);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,100.6717);
   hNCpi0inFVres_stack_7->SetBinContent(5,143.3867);
   hNCpi0inFVres_stack_7->SetBinContent(6,144.0102);
   hNCpi0inFVres_stack_7->SetBinContent(7,141.0589);
   hNCpi0inFVres_stack_7->SetBinContent(8,129.032);
   hNCpi0inFVres_stack_7->SetBinContent(9,135.3568);
   hNCpi0inFVres_stack_7->SetBinContent(10,120.99);
   hNCpi0inFVres_stack_7->SetBinContent(11,107.8368);
   hNCpi0inFVres_stack_7->SetBinContent(12,87.44772);
   hNCpi0inFVres_stack_7->SetBinContent(13,68.74039);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.73986);
   hNCpi0inFVres_stack_7->SetBinContent(15,27.95522);
   hNCpi0inFVres_stack_7->SetBinContent(16,18.40362);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.526239);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.025834);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.03214);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.4180041);
   hNCpi0inFVres_stack_7->SetBinError(4,3.278972);
   hNCpi0inFVres_stack_7->SetBinError(5,3.911743);
   hNCpi0inFVres_stack_7->SetBinError(6,3.910906);
   hNCpi0inFVres_stack_7->SetBinError(7,3.860922);
   hNCpi0inFVres_stack_7->SetBinError(8,3.618652);
   hNCpi0inFVres_stack_7->SetBinError(9,3.859086);
   hNCpi0inFVres_stack_7->SetBinError(10,3.592448);
   hNCpi0inFVres_stack_7->SetBinError(11,3.422769);
   hNCpi0inFVres_stack_7->SetBinError(12,2.963002);
   hNCpi0inFVres_stack_7->SetBinError(13,2.68059);
   hNCpi0inFVres_stack_7->SetBinError(14,2.401151);
   hNCpi0inFVres_stack_7->SetBinError(15,1.610821);
   hNCpi0inFVres_stack_7->SetBinError(16,1.436366);
   hNCpi0inFVres_stack_7->SetBinError(17,1.080152);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5729183);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3749275);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2406819);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.74174);
   hNCpi0inFVdis_stack_8->SetBinContent(5,29.64969);
   hNCpi0inFVdis_stack_8->SetBinContent(6,29.11393);
   hNCpi0inFVdis_stack_8->SetBinContent(7,32.02039);
   hNCpi0inFVdis_stack_8->SetBinContent(8,28.06568);
   hNCpi0inFVdis_stack_8->SetBinContent(9,25.83566);
   hNCpi0inFVdis_stack_8->SetBinContent(10,22.55706);
   hNCpi0inFVdis_stack_8->SetBinContent(11,19.66077);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.23835);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.21735);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.588247);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.016288);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.27203);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.032804);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.6141361);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.528223);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.808053);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.734253);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.936373);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.716583);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.59839);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.476847);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.411446);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.276696);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.236562);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9202145);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6543188);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4571013);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3564798);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2874767);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,81.74698);
   hCCpi0inFV_stack_10->SetBinContent(5,101.5135);
   hCCpi0inFV_stack_10->SetBinContent(6,87.21601);
   hCCpi0inFV_stack_10->SetBinContent(7,80.41486);
   hCCpi0inFV_stack_10->SetBinContent(8,60.24432);
   hCCpi0inFV_stack_10->SetBinContent(9,49.6547);
   hCCpi0inFV_stack_10->SetBinContent(10,37.6894);
   hCCpi0inFV_stack_10->SetBinContent(11,30.98077);
   hCCpi0inFV_stack_10->SetBinContent(12,22.32457);
   hCCpi0inFV_stack_10->SetBinContent(13,13.81987);
   hCCpi0inFV_stack_10->SetBinContent(14,7.021045);
   hCCpi0inFV_stack_10->SetBinContent(15,3.909558);
   hCCpi0inFV_stack_10->SetBinContent(16,1.463836);
   hCCpi0inFV_stack_10->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(18,0.536893);
   hCCpi0inFV_stack_10->SetBinError(4,4.528132);
   hCCpi0inFV_stack_10->SetBinError(5,5.10138);
   hCCpi0inFV_stack_10->SetBinError(6,4.649744);
   hCCpi0inFV_stack_10->SetBinError(7,4.509191);
   hCCpi0inFV_stack_10->SetBinError(8,3.871162);
   hCCpi0inFV_stack_10->SetBinError(9,3.526078);
   hCCpi0inFV_stack_10->SetBinError(10,3.044015);
   hCCpi0inFV_stack_10->SetBinError(11,2.822835);
   hCCpi0inFV_stack_10->SetBinError(12,2.365559);
   hCCpi0inFV_stack_10->SetBinError(13,1.845354);
   hCCpi0inFV_stack_10->SetBinError(14,1.351465);
   hCCpi0inFV_stack_10->SetBinError(15,0.9811382);
   hCCpi0inFV_stack_10->SetBinError(16,0.620407);
   hCCpi0inFV_stack_10->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(18,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,32.25727);
   hNCinFV_stack_11->SetBinContent(5,34.99945);
   hNCinFV_stack_11->SetBinContent(6,36.56509);
   hNCinFV_stack_11->SetBinContent(7,28.82627);
   hNCinFV_stack_11->SetBinContent(8,23.46411);
   hNCinFV_stack_11->SetBinContent(9,24.43139);
   hNCinFV_stack_11->SetBinContent(10,19.66204);
   hNCinFV_stack_11->SetBinContent(11,12.6119);
   hNCinFV_stack_11->SetBinContent(12,6.987453);
   hNCinFV_stack_11->SetBinContent(13,6.982382);
   hNCinFV_stack_11->SetBinContent(14,3.69667);
   hNCinFV_stack_11->SetBinContent(15,2.684465);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.5352025);
   hNCinFV_stack_11->SetBinError(4,2.844617);
   hNCinFV_stack_11->SetBinError(5,2.93751);
   hNCinFV_stack_11->SetBinError(6,3.045155);
   hNCinFV_stack_11->SetBinError(7,2.705544);
   hNCinFV_stack_11->SetBinError(8,2.403839);
   hNCinFV_stack_11->SetBinError(9,2.482727);
   hNCinFV_stack_11->SetBinError(10,2.29685);
   hNCinFV_stack_11->SetBinError(11,1.721063);
   hNCinFV_stack_11->SetBinError(12,1.346148);
   hNCinFV_stack_11->SetBinError(13,1.34541);
   hNCinFV_stack_11->SetBinError(14,0.9889896);
   hNCinFV_stack_11->SetBinError(15,0.8786858);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.3921167);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,54.62369);
   hnumuCCinFV_stack_12->SetBinContent(5,65.00285);
   hnumuCCinFV_stack_12->SetBinContent(6,47.89898);
   hnumuCCinFV_stack_12->SetBinContent(7,34.53159);
   hnumuCCinFV_stack_12->SetBinContent(8,20.86006);
   hnumuCCinFV_stack_12->SetBinContent(9,16.66084);
   hnumuCCinFV_stack_12->SetBinContent(10,9.315016);
   hnumuCCinFV_stack_12->SetBinContent(11,6.402639);
   hnumuCCinFV_stack_12->SetBinContent(12,6.333827);
   hnumuCCinFV_stack_12->SetBinContent(13,2.685929);
   hnumuCCinFV_stack_12->SetBinContent(14,0.9269427);
   hnumuCCinFV_stack_12->SetBinContent(15,1.035716);
   hnumuCCinFV_stack_12->SetBinContent(16,0.7779026);
   hnumuCCinFV_stack_12->SetBinError(4,4.129159);
   hnumuCCinFV_stack_12->SetBinError(5,4.751256);
   hnumuCCinFV_stack_12->SetBinError(6,4.055871);
   hnumuCCinFV_stack_12->SetBinError(7,3.774202);
   hnumuCCinFV_stack_12->SetBinError(8,2.40012);
   hnumuCCinFV_stack_12->SetBinError(9,2.727712);
   hnumuCCinFV_stack_12->SetBinError(10,1.67282);
   hnumuCCinFV_stack_12->SetBinError(11,1.243289);
   hnumuCCinFV_stack_12->SetBinError(12,1.323361);
   hnumuCCinFV_stack_12->SetBinError(13,0.8351612);
   hnumuCCinFV_stack_12->SetBinError(14,0.4800908);
   hnumuCCinFV_stack_12->SetBinError(15,0.4657236);
   hnumuCCinFV_stack_12->SetBinError(16,0.4609809);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,6.670259);
   hnueCCinFV_stack_13->SetBinContent(5,7.069749);
   hnueCCinFV_stack_13->SetBinContent(6,6.748624);
   hnueCCinFV_stack_13->SetBinContent(7,2.191886);
   hnueCCinFV_stack_13->SetBinContent(8,5.595495);
   hnueCCinFV_stack_13->SetBinContent(9,1.125428);
   hnueCCinFV_stack_13->SetBinContent(10,1.165331);
   hnueCCinFV_stack_13->SetBinContent(11,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(12,0.7708256);
   hnueCCinFV_stack_13->SetBinContent(13,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(16,0.2577654);
   hnueCCinFV_stack_13->SetBinError(4,1.889559);
   hnueCCinFV_stack_13->SetBinError(5,1.555724);
   hnueCCinFV_stack_13->SetBinError(6,1.468378);
   hnueCCinFV_stack_13->SetBinError(7,1.029967);
   hnueCCinFV_stack_13->SetBinError(8,2.068968);
   hnueCCinFV_stack_13->SetBinError(9,0.5072366);
   hnueCCinFV_stack_13->SetBinError(10,0.6160119);
   hnueCCinFV_stack_13->SetBinError(11,0.4814682);
   hnueCCinFV_stack_13->SetBinError(12,0.4520646);
   hnueCCinFV_stack_13->SetBinError(13,0.3041673);
   hnueCCinFV_stack_13->SetBinError(16,0.2577654);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__11->SetBinContent(4,554.576);
   hmcerror__11->SetBinContent(5,647.0534);
   hmcerror__11->SetBinContent(6,569.0858);
   hmcerror__11->SetBinContent(7,478.2746);
   hmcerror__11->SetBinContent(8,387.7495);
   hmcerror__11->SetBinContent(9,332.8158);
   hmcerror__11->SetBinContent(10,262.2491);
   hmcerror__11->SetBinContent(11,211.2652);
   hmcerror__11->SetBinContent(12,166.4034);
   hmcerror__11->SetBinContent(13,120.8557);
   hmcerror__11->SetBinContent(14,82.78048);
   hmcerror__11->SetBinContent(15,46.41323);
   hmcerror__11->SetBinContent(16,30.24627);
   hmcerror__11->SetBinContent(17,13.84577);
   hmcerror__11->SetBinContent(18,4.525281);
   hmcerror__11->SetBinContent(19,1.407794);
   hmcerror__11->SetBinContent(20,0.1394999);
   hmcerror__11->SetBinContent(21,0.4180041);
   hmcerror__11->SetBinError(1,0.3895343);
   hmcerror__11->SetBinError(2,0.3895343);
   hmcerror__11->SetBinError(3,0.3895343);
   hmcerror__11->SetBinError(4,106.295);
   hmcerror__11->SetBinError(5,137.6363);
   hmcerror__11->SetBinError(6,120.0967);
   hmcerror__11->SetBinError(7,111.8782);
   hmcerror__11->SetBinError(8,89.35581);
   hmcerror__11->SetBinError(9,85.30593);
   hmcerror__11->SetBinError(10,78.58211);
   hmcerror__11->SetBinError(11,59.82418);
   hmcerror__11->SetBinError(12,49.71373);
   hmcerror__11->SetBinError(13,38.30589);
   hmcerror__11->SetBinError(14,27.72688);
   hmcerror__11->SetBinError(15,17.06901);
   hmcerror__11->SetBinError(16,14.22435);
   hmcerror__11->SetBinError(17,9.048684);
   hmcerror__11->SetBinError(18,3.668729);
   hmcerror__11->SetBinError(19,2.66803);
   hmcerror__11->SetBinError(20,0.4405589);
   hmcerror__11->SetBinError(21,2.172001);
   hmcerror__11->SetEntries(3864.24);

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
   Double_t _fy3013[20] = {
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
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
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
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0.5,6.5);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(692.5564);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.6/20","");
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

   ci = 1473;
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

   ci = 1474;
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

   ci = 1475;
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

   ci = 1476;
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

   ci = 1477;
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

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.3","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fely3014[20] = {
   0,
   0,
   0,
   0.1916689,
   0.2127125,
   0.2110344,
   0.2339205,
   0.2304472,
   0.2563158,
   0.2996468,
   0.2831711,
   0.2987543,
   0.3169557,
   0.3349446,
   0.3677617,
   0.4702844,
   0.6535343,
   0.8107185,
   1.895185,
   3.15813};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0,
   0,
   0,
   0.1916689,
   0.2127125,
   0.2110344,
   0.2339205,
   0.2304472,
   0.2563158,
   0.2996468,
   0.2831711,
   0.2987543,
   0.3169557,
   0.3349446,
   0.3677617,
   0.4702844,
   0.6535343,
   0.8107185,
   1.895185,
   3.15813};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0.5,6.5);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
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
   Double_t _fely3015[20] = {
   0,
   0,
   0,
   0.1619651,
   0.1747302,
   0.1816129,
   0.1836866,
   0.1951723,
   0.2166897,
   0.2229376,
   0.2295157,
   0.2363859,
   0.2391515,
   0.2460942,
   0.2678794,
   0.2895255,
   0.2776057,
   0.3513451,
   0.5669206,
   2.004153};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0,
   0,
   0,
   0.1619651,
   0.1747302,
   0.1816129,
   0.1836866,
   0.1951723,
   0.2166897,
   0.2229376,
   0.2295157,
   0.2363859,
   0.2391515,
   0.2460942,
   0.2678794,
   0.2895255,
   0.2776057,
   0.3513451,
   0.5669206,
   2.004153};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0.5,6.5);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   10,
   10,
   10,
   0.9719136,
   0.9210986,
   1.063109,
   0.9680631,
   0.9439083,
   0.9464695,
   0.9571051,
   0.9987449,
   0.8833954,
   1.026017,
   1.111373,
   1.271189,
   0.9257339,
   1.227812,
   0.883923,
   2.841325,
   14.33693};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0,
   0,
   0,
   0.04186328,
   0.03772967,
   0.04322151,
   0.04498971,
   0.04933888,
   0.05332752,
   0.06041194,
   0.06875644,
   0.07286123,
   0.09213908,
   0.1173441,
   0.1682645,
   0.179718,
   0.3093725,
   0.5075552,
   1.63151,
   14.33693};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0,
   0,
   0,
   0.04186328,
   0.03772967,
   0.04322151,
   0.04498971,
   0.04933888,
   0.05332752,
   0.06041194,
   0.06875644,
   0.07286123,
   0.09213908,
   0.1149184,
   0.1638886,
   0.172818,
   0.2937577,
   0.4379529,
   1.407777,
   10.89011};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0.5,6.5);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(27.74974);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_nc_pio_score_all",20,1,6);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
