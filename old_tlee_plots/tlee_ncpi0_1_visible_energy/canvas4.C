#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 16:05:15 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",138,161,1200,900);
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
   pad1->Range(-153.8462,-31.38,1128.205,3469.967);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hmc__10->SetBinContent(1,534.7246);
   hmc__10->SetBinContent(2,1408.749);
   hmc__10->SetBinContent(3,789.9093);
   hmc__10->SetBinContent(4,419.1815);
   hmc__10->SetBinContent(5,224.8317);
   hmc__10->SetBinContent(6,123.5849);
   hmc__10->SetBinContent(7,76.89885);
   hmc__10->SetBinContent(8,44.17489);
   hmc__10->SetBinContent(9,25.05462);
   hmc__10->SetBinContent(10,18.89831);
   hmc__10->SetBinContent(11,16.03815);
   hmc__10->SetBinContent(12,9.794618);
   hmc__10->SetBinContent(13,37.62445);
   hmc__10->SetBinError(1,132.3183);
   hmc__10->SetBinError(2,324.2428);
   hmc__10->SetBinError(3,191.5674);
   hmc__10->SetBinError(4,114.9224);
   hmc__10->SetBinError(5,52.10577);
   hmc__10->SetBinError(6,36.21325);
   hmc__10->SetBinError(7,29.12172);
   hmc__10->SetBinError(8,17.90958);
   hmc__10->SetBinError(9,11.65652);
   hmc__10->SetBinError(10,12.42958);
   hmc__10->SetBinError(11,11.27417);
   hmc__10->SetBinError(12,14.6925);
   hmc__10->SetBinError(13,17.68501);
   hmc__10->SetMinimum(-31.38);
   hmc__10->SetMaximum(3294.9);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1000);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(1479.187);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,23.29612);
   hbadmatch_stack_1->SetBinContent(2,33.98551);
   hbadmatch_stack_1->SetBinContent(3,15.83372);
   hbadmatch_stack_1->SetBinContent(4,10.03871);
   hbadmatch_stack_1->SetBinContent(5,3.254233);
   hbadmatch_stack_1->SetBinContent(6,3.420251);
   hbadmatch_stack_1->SetBinContent(7,2.765725);
   hbadmatch_stack_1->SetBinContent(8,1.910468);
   hbadmatch_stack_1->SetBinContent(9,0.6803553);
   hbadmatch_stack_1->SetBinContent(10,0.9658111);
   hbadmatch_stack_1->SetBinContent(11,0.4749889);
   hbadmatch_stack_1->SetBinContent(13,0.9593912);
   hbadmatch_stack_1->SetBinError(1,2.578334);
   hbadmatch_stack_1->SetBinError(2,3.510967);
   hbadmatch_stack_1->SetBinError(3,2.535005);
   hbadmatch_stack_1->SetBinError(4,1.767179);
   hbadmatch_stack_1->SetBinError(5,1.332623);
   hbadmatch_stack_1->SetBinError(6,1.016327);
   hbadmatch_stack_1->SetBinError(7,0.9144338);
   hbadmatch_stack_1->SetBinError(8,0.7633487);
   hbadmatch_stack_1->SetBinError(9,0.4810838);
   hbadmatch_stack_1->SetBinError(10,0.6193495);
   hbadmatch_stack_1->SetBinError(11,0.4749889);
   hbadmatch_stack_1->SetBinError(13,0.4941625);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,91.64893);
   hext_stack_2->SetBinContent(2,177.4064);
   hext_stack_2->SetBinContent(3,87.21942);
   hext_stack_2->SetBinContent(4,48.67857);
   hext_stack_2->SetBinContent(5,26.55246);
   hext_stack_2->SetBinContent(6,13.43484);
   hext_stack_2->SetBinContent(7,13.02824);
   hext_stack_2->SetBinContent(8,2.599588);
   hext_stack_2->SetBinContent(9,4.132192);
   hext_stack_2->SetBinContent(10,2.510206);
   hext_stack_2->SetBinContent(11,2.192989);
   hext_stack_2->SetBinContent(12,1.055394);
   hext_stack_2->SetBinContent(13,6.985565);
   hext_stack_2->SetBinError(1,6.47565);
   hext_stack_2->SetBinError(2,8.961095);
   hext_stack_2->SetBinError(3,6.237651);
   hext_stack_2->SetBinError(4,4.914715);
   hext_stack_2->SetBinError(5,3.433399);
   hext_stack_2->SetBinError(6,2.459133);
   hext_stack_2->SetBinError(7,2.425286);
   hext_stack_2->SetBinError(8,0.9884288);
   hext_stack_2->SetBinError(9,1.282292);
   hext_stack_2->SetBinError(10,1.057404);
   hext_stack_2->SetBinError(11,0.9009267);
   hext_stack_2->SetBinError(12,0.6130171);
   hext_stack_2->SetBinError(13,1.612554);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,16.94071);
   hdirt_stack_3->SetBinContent(2,23.25322);
   hdirt_stack_3->SetBinContent(3,9.141583);
   hdirt_stack_3->SetBinContent(4,2.176519);
   hdirt_stack_3->SetBinContent(5,2.37076);
   hdirt_stack_3->SetBinContent(6,1.219425);
   hdirt_stack_3->SetBinContent(7,1.561283);
   hdirt_stack_3->SetBinContent(10,0.3895662);
   hdirt_stack_3->SetBinError(1,2.178218);
   hdirt_stack_3->SetBinError(2,2.514796);
   hdirt_stack_3->SetBinError(3,1.556198);
   hdirt_stack_3->SetBinError(4,1.171773);
   hdirt_stack_3->SetBinError(5,0.8243883);
   hdirt_stack_3->SetBinError(6,0.5912388);
   hdirt_stack_3->SetBinError(7,1.039681);
   hdirt_stack_3->SetBinError(10,0.3895662);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,109.8763);
   houtFV_stack_4->SetBinContent(2,214.7911);
   houtFV_stack_4->SetBinContent(3,89.58682);
   houtFV_stack_4->SetBinContent(4,29.19244);
   houtFV_stack_4->SetBinContent(5,17.05553);
   houtFV_stack_4->SetBinContent(6,6.193209);
   houtFV_stack_4->SetBinContent(7,4.13332);
   houtFV_stack_4->SetBinContent(8,2.227032);
   houtFV_stack_4->SetBinContent(9,1.227074);
   houtFV_stack_4->SetBinContent(10,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.9123797);
   houtFV_stack_4->SetBinContent(12,0.5669563);
   houtFV_stack_4->SetBinContent(13,0.785171);
   houtFV_stack_4->SetBinError(1,5.3019);
   houtFV_stack_4->SetBinError(2,7.415783);
   houtFV_stack_4->SetBinError(3,4.6957);
   houtFV_stack_4->SetBinError(4,2.820403);
   houtFV_stack_4->SetBinError(5,2.134499);
   houtFV_stack_4->SetBinError(6,1.2887);
   houtFV_stack_4->SetBinError(7,1.038255);
   houtFV_stack_4->SetBinError(8,0.7685322);
   houtFV_stack_4->SetBinError(9,0.5911038);
   houtFV_stack_4->SetBinError(10,0.1950249);
   houtFV_stack_4->SetBinError(11,0.481261);
   houtFV_stack_4->SetBinError(12,0.4088391);
   houtFV_stack_4->SetBinError(13,0.3925882);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,8.060867);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,42.60157);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,28.42438);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.40785);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.908546);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.89008);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.157992);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.012091);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6969104);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6016982);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4373662);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7327198);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.109772);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9362055);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.410495);
   hNCpi0inFVcoh_stack_5->SetBinError(3,2.141138);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.222706);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9162272);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9426721);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5351304);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2665082);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.220364);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.25234);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2140749);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3261272);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5340648);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.487757);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.738167);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.073567);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5781216);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3408638);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03661549);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4515301);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4156418);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4672078);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2767803);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1701585);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2209438);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02589106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2959041);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,189.1782);
   hNCpi0inFVres_stack_7->SetBinContent(2,529.9095);
   hNCpi0inFVres_stack_7->SetBinContent(3,234.3563);
   hNCpi0inFVres_stack_7->SetBinContent(4,95.4707);
   hNCpi0inFVres_stack_7->SetBinContent(5,45.15546);
   hNCpi0inFVres_stack_7->SetBinContent(6,25.26549);
   hNCpi0inFVres_stack_7->SetBinContent(7,13.51686);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.009237);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.509542);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.088115);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.748735);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.342395);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.948947);
   hNCpi0inFVres_stack_7->SetBinError(1,4.830777);
   hNCpi0inFVres_stack_7->SetBinError(2,7.894358);
   hNCpi0inFVres_stack_7->SetBinError(3,5.047721);
   hNCpi0inFVres_stack_7->SetBinError(4,3.241546);
   hNCpi0inFVres_stack_7->SetBinError(5,2.386588);
   hNCpi0inFVres_stack_7->SetBinError(6,1.923668);
   hNCpi0inFVres_stack_7->SetBinError(7,1.373076);
   hNCpi0inFVres_stack_7->SetBinError(8,1.185945);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9169113);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5715239);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4881631);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4916476);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7856941);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,35.45435);
   hNCpi0inFVdis_stack_8->SetBinContent(2,78.81432);
   hNCpi0inFVdis_stack_8->SetBinContent(3,46.39388);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.10642);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.98536);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.15508);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.829619);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.288586);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.26756);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.968645);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.095279);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.169194);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.301368);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.071123);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.01453);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.179134);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.998511);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.537661);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.0776);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9152378);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9845061);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6154414);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.580497);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7902706);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.325644);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7357346);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1761121);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1012118);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.07605086);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.131874);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06892557);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04767072);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,25.58968);
   hCCpi0inFV_stack_10->SetBinContent(2,159.0723);
   hCCpi0inFV_stack_10->SetBinContent(3,144.9303);
   hCCpi0inFV_stack_10->SetBinContent(4,101.0044);
   hCCpi0inFV_stack_10->SetBinContent(5,57.68895);
   hCCpi0inFV_stack_10->SetBinContent(6,32.77766);
   hCCpi0inFV_stack_10->SetBinContent(7,21.27119);
   hCCpi0inFV_stack_10->SetBinContent(8,11.68218);
   hCCpi0inFV_stack_10->SetBinContent(9,5.140224);
   hCCpi0inFV_stack_10->SetBinContent(10,7.657666);
   hCCpi0inFV_stack_10->SetBinContent(11,3.369284);
   hCCpi0inFV_stack_10->SetBinContent(12,2.539312);
   hCCpi0inFV_stack_10->SetBinContent(13,6.401771);
   hCCpi0inFV_stack_10->SetBinError(1,2.512108);
   hCCpi0inFV_stack_10->SetBinError(2,6.257216);
   hCCpi0inFV_stack_10->SetBinError(3,6.034366);
   hCCpi0inFV_stack_10->SetBinError(4,5.069994);
   hCCpi0inFV_stack_10->SetBinError(5,3.824288);
   hCCpi0inFV_stack_10->SetBinError(6,2.930326);
   hCCpi0inFV_stack_10->SetBinError(7,2.36652);
   hCCpi0inFV_stack_10->SetBinError(8,1.711395);
   hCCpi0inFV_stack_10->SetBinError(9,1.102805);
   hCCpi0inFV_stack_10->SetBinError(10,1.42814);
   hCCpi0inFV_stack_10->SetBinError(11,0.8982705);
   hCCpi0inFV_stack_10->SetBinError(12,0.8333082);
   hCCpi0inFV_stack_10->SetBinError(13,1.224493);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,19.36628);
   hNCinFV_stack_11->SetBinContent(2,72.27615);
   hNCinFV_stack_11->SetBinContent(3,61.08881);
   hNCinFV_stack_11->SetBinContent(4,33.7637);
   hNCinFV_stack_11->SetBinContent(5,19.78402);
   hNCinFV_stack_11->SetBinContent(6,8.518414);
   hNCinFV_stack_11->SetBinContent(7,4.816649);
   hNCinFV_stack_11->SetBinContent(8,4.738785);
   hNCinFV_stack_11->SetBinContent(9,2.176565);
   hNCinFV_stack_11->SetBinContent(10,0.3900497);
   hNCinFV_stack_11->SetBinContent(11,1.659303);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,3.050333);
   hNCinFV_stack_11->SetBinError(1,2.212352);
   hNCinFV_stack_11->SetBinError(2,4.272788);
   hNCinFV_stack_11->SetBinError(3,4.061864);
   hNCinFV_stack_11->SetBinError(4,3.110774);
   hNCinFV_stack_11->SetBinError(5,2.640502);
   hNCinFV_stack_11->SetBinError(6,1.726728);
   hNCinFV_stack_11->SetBinError(7,1.300929);
   hNCinFV_stack_11->SetBinError(8,1.345007);
   hNCinFV_stack_11->SetBinError(9,0.9543989);
   hNCinFV_stack_11->SetBinError(10,0.2758068);
   hNCinFV_stack_11->SetBinError(11,0.8325085);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.953044);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,11.46322);
   hnumuCCinFV_stack_12->SetBinContent(2,66.72093);
   hnumuCCinFV_stack_12->SetBinContent(3,66.4497);
   hnumuCCinFV_stack_12->SetBinContent(4,55.02773);
   hnumuCCinFV_stack_12->SetBinContent(5,25.97637);
   hnumuCCinFV_stack_12->SetBinContent(6,16.62656);
   hnumuCCinFV_stack_12->SetBinContent(7,7.295015);
   hnumuCCinFV_stack_12->SetBinContent(8,5.610023);
   hnumuCCinFV_stack_12->SetBinContent(9,2.515907);
   hnumuCCinFV_stack_12->SetBinContent(10,1.718483);
   hnumuCCinFV_stack_12->SetBinContent(11,2.050601);
   hnumuCCinFV_stack_12->SetBinContent(12,1.296751);
   hnumuCCinFV_stack_12->SetBinContent(13,4.304679);
   hnumuCCinFV_stack_12->SetBinError(1,2.403419);
   hnumuCCinFV_stack_12->SetBinError(2,5.058069);
   hnumuCCinFV_stack_12->SetBinError(3,4.897336);
   hnumuCCinFV_stack_12->SetBinError(4,4.026974);
   hnumuCCinFV_stack_12->SetBinError(5,2.644874);
   hnumuCCinFV_stack_12->SetBinError(6,2.323516);
   hnumuCCinFV_stack_12->SetBinError(7,1.562392);
   hnumuCCinFV_stack_12->SetBinError(8,1.294936);
   hnumuCCinFV_stack_12->SetBinError(9,0.7798617);
   hnumuCCinFV_stack_12->SetBinError(10,0.6829145);
   hnumuCCinFV_stack_12->SetBinError(11,0.7068742);
   hnumuCCinFV_stack_12->SetBinError(12,0.5338507);
   hnumuCCinFV_stack_12->SetBinError(13,1.020141);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(1,2.186077);
   hnueCCinFV_stack_13->SetBinContent(2,7.079015);
   hnueCCinFV_stack_13->SetBinContent(3,5.334696);
   hnueCCinFV_stack_13->SetBinContent(4,2.736346);
   hnueCCinFV_stack_13->SetBinContent(5,2.759164);
   hnueCCinFV_stack_13->SetBinContent(6,1.029985);
   hnueCCinFV_stack_13->SetBinContent(7,1.071408);
   hnueCCinFV_stack_13->SetBinContent(8,0.902263);
   hnueCCinFV_stack_13->SetBinContent(9,1.625205);
   hnueCCinFV_stack_13->SetBinContent(10,0.4130405);
   hnueCCinFV_stack_13->SetBinContent(11,1.03679);
   hnueCCinFV_stack_13->SetBinContent(12,0.8951805);
   hnueCCinFV_stack_13->SetBinContent(13,5.760685);
   hnueCCinFV_stack_13->SetBinError(1,1.403542);
   hnueCCinFV_stack_13->SetBinError(2,1.543719);
   hnueCCinFV_stack_13->SetBinError(3,1.55641);
   hnueCCinFV_stack_13->SetBinError(4,0.8553756);
   hnueCCinFV_stack_13->SetBinError(5,0.8816948);
   hnueCCinFV_stack_13->SetBinError(6,0.5442166);
   hnueCCinFV_stack_13->SetBinError(7,0.5626371);
   hnueCCinFV_stack_13->SetBinError(8,0.5698965);
   hnueCCinFV_stack_13->SetBinError(9,0.6281785);
   hnueCCinFV_stack_13->SetBinError(10,0.2925159);
   hnueCCinFV_stack_13->SetBinError(11,0.8625403);
   hnueCCinFV_stack_13->SetBinError(12,0.5317779);
   hnueCCinFV_stack_13->SetBinError(13,1.99782);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__11->SetBinContent(1,534.7246);
   hmcerror__11->SetBinContent(2,1408.749);
   hmcerror__11->SetBinContent(3,789.9093);
   hmcerror__11->SetBinContent(4,419.1815);
   hmcerror__11->SetBinContent(5,224.8317);
   hmcerror__11->SetBinContent(6,123.5849);
   hmcerror__11->SetBinContent(7,76.89885);
   hmcerror__11->SetBinContent(8,44.17489);
   hmcerror__11->SetBinContent(9,25.05462);
   hmcerror__11->SetBinContent(10,18.89831);
   hmcerror__11->SetBinContent(11,16.03815);
   hmcerror__11->SetBinContent(12,9.794618);
   hmcerror__11->SetBinContent(13,37.62445);
   hmcerror__11->SetBinError(1,132.3183);
   hmcerror__11->SetBinError(2,324.2428);
   hmcerror__11->SetBinError(3,191.5674);
   hmcerror__11->SetBinError(4,114.9224);
   hmcerror__11->SetBinError(5,52.10577);
   hmcerror__11->SetBinError(6,36.21325);
   hmcerror__11->SetBinError(7,29.12172);
   hmcerror__11->SetBinError(8,17.90958);
   hmcerror__11->SetBinError(9,11.65652);
   hmcerror__11->SetBinError(10,12.42958);
   hmcerror__11->SetBinError(11,11.27417);
   hmcerror__11->SetBinError(12,14.6925);
   hmcerror__11->SetBinError(13,17.68501);
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
   
   Double_t _fx3013[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3013[12] = {
   591,
   1569,
   781,
   390,
   203,
   97,
   62,
   38,
   23,
   19,
   13,
   8};
   Double_t _felx3013[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3013[12] = {
   24.31049,
   39.6106,
   27.94638,
   19.74842,
   14.24781,
   9.9704,
   8.0018,
   6.3013,
   4.9457,
   4.5151,
   3.77763,
   3.0307};
   Double_t _fehx3013[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3013[12] = {
   24.31049,
   39.6106,
   27.94638,
   19.74842,
   14.24781,
   9.769,
   7.7989,
   6.0955,
   4.7346,
   4.3011,
   3.5552,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1100);
   Graph_Graph3013->SetMinimum(4.47237);
   Graph_Graph3013->SetMaximum(1768.975);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3794.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 96.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 470.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  107.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1151.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  233.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 572.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 228.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 262.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 27.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3014[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3014[12] = {
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
   Double_t _felx3014[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3014[12] = {
   0.2474513,
   0.2301636,
   0.2425182,
   0.274159,
   0.2317545,
   0.2930232,
   0.3787017,
   0.4054243,
   0.4652444,
   0.6577087,
   0.7029598,
   1.500059};
   Double_t _fehx3014[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3014[12] = {
   0.2474513,
   0.2301636,
   0.2425182,
   0.274159,
   0.2317545,
   0.2930232,
   0.3787017,
   0.4054243,
   0.4652444,
   0.6577087,
   0.7029598,
   1.500059};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1100);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3015[12] = {
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
   Double_t _felx3015[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3015[12] = {
   0.1916468,
   0.2101109,
   0.2277553,
   0.228857,
   0.1940547,
   0.1937484,
   0.205556,
   0.262963,
   0.233054,
   0.2368875,
   0.2587279,
   0.3079227};
   Double_t _fehx3015[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3015[12] = {
   0.1916468,
   0.2101109,
   0.2277553,
   0.228857,
   0.1940547,
   0.1937484,
   0.205556,
   0.262963,
   0.233054,
   0.2368875,
   0.2587279,
   0.3079227};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1100);
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
   
   Double_t _fx3016[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3016[12] = {
   1.105242,
   1.113754,
   0.9887211,
   0.9303846,
   0.9028975,
   0.7848853,
   0.8062539,
   0.8602171,
   0.9179943,
   1.005381,
   0.8105676,
   0.8167751};
   Double_t _felx3016[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3016[12] = {
   0.04546357,
   0.02811757,
   0.03537922,
   0.04711186,
   0.06337098,
   0.0806765,
   0.1040562,
   0.1426444,
   0.1973967,
   0.2389156,
   0.2355403,
   0.309425};
   Double_t _fehx3016[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3016[12] = {
   0.04546357,
   0.02811757,
   0.03537922,
   0.04711186,
   0.06337098,
   0.07904685,
   0.1014176,
   0.1379856,
   0.1889711,
   0.2275918,
   0.2216715,
   0.2848095};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1100);
   Graph_Graph3016->SetMinimum(0.4347878);
   Graph_Graph3016->SetMaximum(1.305535);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_visible_energy_all",12,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
