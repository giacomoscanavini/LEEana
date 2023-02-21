#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Jan 13 22:53:51 2023) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-22.02,1353.846,2434.948);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,438.4125);
   hmc__10->SetBinContent(2,787.2244);
   hmc__10->SetBinContent(3,737.4049);
   hmc__10->SetBinContent(4,522.2665);
   hmc__10->SetBinContent(5,336.382);
   hmc__10->SetBinContent(6,217.8053);
   hmc__10->SetBinContent(7,116.0946);
   hmc__10->SetBinContent(8,82.35027);
   hmc__10->SetBinContent(9,68.64713);
   hmc__10->SetBinContent(10,42.94358);
   hmc__10->SetBinContent(11,40.67768);
   hmc__10->SetBinContent(12,30.84799);
   hmc__10->SetBinContent(13,229.6162);
   hmc__10->SetBinError(1,119.479);
   hmc__10->SetBinError(2,201.7733);
   hmc__10->SetBinError(3,186.534);
   hmc__10->SetBinError(4,147.2286);
   hmc__10->SetBinError(5,121.212);
   hmc__10->SetBinError(6,65.15059);
   hmc__10->SetBinError(7,36.25157);
   hmc__10->SetBinError(8,27.76606);
   hmc__10->SetBinError(9,27.8611);
   hmc__10->SetBinError(10,18.55435);
   hmc__10->SetBinError(11,21.22728);
   hmc__10->SetBinError(12,15.29408);
   hmc__10->SetBinError(13,67.10308);
   hmc__10->SetMinimum(-22.02);
   hmc__10->SetMaximum(2312.1);
   hmc__10->SetEntries(3797.715);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-3.210632e-08);
   hs4_stack_4->SetMaximum(826.5856);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,21.54855);
   hbadmatch_stack_1->SetBinContent(2,17.78947);
   hbadmatch_stack_1->SetBinContent(3,21.57025);
   hbadmatch_stack_1->SetBinContent(4,12.64758);
   hbadmatch_stack_1->SetBinContent(5,9.709119);
   hbadmatch_stack_1->SetBinContent(6,3.842848);
   hbadmatch_stack_1->SetBinContent(7,0.9925678);
   hbadmatch_stack_1->SetBinContent(8,2.894854);
   hbadmatch_stack_1->SetBinContent(9,1.616696);
   hbadmatch_stack_1->SetBinContent(12,0.9925678);
   hbadmatch_stack_1->SetBinContent(13,4.78737);
   hbadmatch_stack_1->SetBinError(1,6.030807);
   hbadmatch_stack_1->SetBinError(2,4.350921);
   hbadmatch_stack_1->SetBinError(3,4.903988);
   hbadmatch_stack_1->SetBinError(4,3.565612);
   hbadmatch_stack_1->SetBinError(5,5.813793);
   hbadmatch_stack_1->SetBinError(6,2.113117);
   hbadmatch_stack_1->SetBinError(7,0.9925678);
   hbadmatch_stack_1->SetBinError(8,2.145666);
   hbadmatch_stack_1->SetBinError(9,1.172487);
   hbadmatch_stack_1->SetBinError(12,0.9925678);
   hbadmatch_stack_1->SetBinError(13,2.455278);
   hbadmatch_stack_1->SetEntries(91);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,97.92502);
   houtFV_stack_4->SetBinContent(2,129.6144);
   houtFV_stack_4->SetBinContent(3,89.11944);
   houtFV_stack_4->SetBinContent(4,64.13088);
   houtFV_stack_4->SetBinContent(5,39.55214);
   houtFV_stack_4->SetBinContent(6,22.04046);
   houtFV_stack_4->SetBinContent(7,27.8745);
   houtFV_stack_4->SetBinContent(8,13.71289);
   houtFV_stack_4->SetBinContent(9,16.77317);
   houtFV_stack_4->SetBinContent(10,5.220721);
   houtFV_stack_4->SetBinContent(11,9.06658);
   houtFV_stack_4->SetBinContent(12,6.282012);
   houtFV_stack_4->SetBinContent(13,36.72034);
   houtFV_stack_4->SetBinError(1,10.06309);
   houtFV_stack_4->SetBinError(2,11.45673);
   houtFV_stack_4->SetBinError(3,9.455475);
   houtFV_stack_4->SetBinError(4,8.112623);
   houtFV_stack_4->SetBinError(5,6.284);
   houtFV_stack_4->SetBinError(6,4.65026);
   houtFV_stack_4->SetBinError(7,5.258182);
   houtFV_stack_4->SetBinError(8,3.778571);
   houtFV_stack_4->SetBinError(9,4.459509);
   houtFV_stack_4->SetBinError(10,2.229592);
   houtFV_stack_4->SetBinError(11,3.087559);
   houtFV_stack_4->SetBinError(12,2.578879);
   houtFV_stack_4->SetBinError(13,6.068331);
   houtFV_stack_4->SetEntries(585);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.841515);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,17.16296);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,25.17371);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,26.2277);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,17.22508);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.522923);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.52105);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.775478);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.502523);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.06507);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.275681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.981718);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,11.73056);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.064633);
   hNCpi0inFVcoh_stack_5->SetBinError(2,3.323231);
   hNCpi0inFVcoh_stack_5->SetBinError(3,4.118634);
   hNCpi0inFVcoh_stack_5->SetBinError(4,4.135933);
   hNCpi0inFVcoh_stack_5->SetBinError(5,3.090859);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.829265);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.719777);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.652142);
   hNCpi0inFVcoh_stack_5->SetBinError(9,2.193792);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.710045);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7352715);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.022033);
   hNCpi0inFVcoh_stack_5->SetBinError(13,3.002225);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.028165);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5081968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.751736);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9091049);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3075525);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2253178);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.113788);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.7997089);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5081968);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.8020523);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.7436646);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3075526);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2253178);
   hNCpi0inFVqe_stack_6->SetBinError(11,1.494674);
   hNCpi0inFVqe_stack_6->SetEntries(16);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,131.3791);
   hNCpi0inFVres_stack_7->SetBinContent(2,294.7027);
   hNCpi0inFVres_stack_7->SetBinContent(3,311.5993);
   hNCpi0inFVres_stack_7->SetBinContent(4,222.3651);
   hNCpi0inFVres_stack_7->SetBinContent(5,114.7186);
   hNCpi0inFVres_stack_7->SetBinContent(6,65.64017);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.38528);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.22231);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.37851);
   hNCpi0inFVres_stack_7->SetBinContent(10,16.79099);
   hNCpi0inFVres_stack_7->SetBinContent(11,18.3926);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.361366);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.18245);
   hNCpi0inFVres_stack_7->SetBinError(1,8.378979);
   hNCpi0inFVres_stack_7->SetBinError(2,12.57475);
   hNCpi0inFVres_stack_7->SetBinError(3,13.27066);
   hNCpi0inFVres_stack_7->SetBinError(4,10.95131);
   hNCpi0inFVres_stack_7->SetBinError(5,7.589805);
   hNCpi0inFVres_stack_7->SetBinError(6,5.800779);
   hNCpi0inFVres_stack_7->SetBinError(7,5.104558);
   hNCpi0inFVres_stack_7->SetBinError(8,3.7255);
   hNCpi0inFVres_stack_7->SetBinError(9,3.257816);
   hNCpi0inFVres_stack_7->SetBinError(10,3.255197);
   hNCpi0inFVres_stack_7->SetBinError(11,3.282498);
   hNCpi0inFVres_stack_7->SetBinError(12,1.720425);
   hNCpi0inFVres_stack_7->SetBinError(13,6.328202);
   hNCpi0inFVres_stack_7->SetEntries(2998);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,31.83941);
   hNCpi0inFVdis_stack_8->SetBinContent(2,65.61369);
   hNCpi0inFVdis_stack_8->SetBinContent(3,41.16201);
   hNCpi0inFVdis_stack_8->SetBinContent(4,44.1826);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.46704);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.15863);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.04982);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.835476);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.825798);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.714485);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.88106);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.311536);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.78973);
   hNCpi0inFVdis_stack_8->SetBinError(1,4.184591);
   hNCpi0inFVdis_stack_8->SetBinError(2,5.953709);
   hNCpi0inFVdis_stack_8->SetBinError(3,4.799946);
   hNCpi0inFVdis_stack_8->SetBinError(4,5.278814);
   hNCpi0inFVdis_stack_8->SetBinError(5,3.749987);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.998796);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.49056);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.115155);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.600577);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9657667);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.222598);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.981083);
   hNCpi0inFVdis_stack_8->SetBinError(13,3.202004);
   hNCpi0inFVdis_stack_8->SetEntries(607);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.3236006);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.3236006);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,79.77113);
   hCCpi0inFV_stack_10->SetBinContent(2,132.0299);
   hCCpi0inFV_stack_10->SetBinContent(3,137.3342);
   hCCpi0inFV_stack_10->SetBinContent(4,87.49482);
   hCCpi0inFV_stack_10->SetBinContent(5,70.47232);
   hCCpi0inFV_stack_10->SetBinContent(6,56.70605);
   hCCpi0inFV_stack_10->SetBinContent(7,17.86622);
   hCCpi0inFV_stack_10->SetBinContent(8,10.91825);
   hCCpi0inFV_stack_10->SetBinContent(9,9.925678);
   hCCpi0inFV_stack_10->SetBinContent(10,4.962839);
   hCCpi0inFV_stack_10->SetBinContent(11,3.970271);
   hCCpi0inFV_stack_10->SetBinContent(12,2.977704);
   hCCpi0inFV_stack_10->SetBinContent(13,52.06968);
   hCCpi0inFV_stack_10->SetBinError(1,8.926085);
   hCCpi0inFV_stack_10->SetBinError(2,11.50047);
   hCCpi0inFV_stack_10->SetBinError(3,11.69349);
   hCCpi0inFV_stack_10->SetBinError(4,9.328153);
   hCCpi0inFV_stack_10->SetBinError(5,8.363525);
   hCCpi0inFV_stack_10->SetBinError(6,7.511999);
   hCCpi0inFV_stack_10->SetBinError(7,4.211109);
   hCCpi0inFV_stack_10->SetBinError(8,3.291975);
   hCCpi0inFV_stack_10->SetBinError(9,3.138775);
   hCCpi0inFV_stack_10->SetBinError(10,2.219449);
   hCCpi0inFV_stack_10->SetBinError(11,1.985136);
   hCCpi0inFV_stack_10->SetBinError(12,1.719178);
   hCCpi0inFV_stack_10->SetBinError(13,7.227694);
   hCCpi0inFV_stack_10->SetEntries(670);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,35.77066);
   hNCinFV_stack_11->SetBinContent(2,61.46246);
   hNCinFV_stack_11->SetBinContent(3,45.34826);
   hNCinFV_stack_11->SetBinContent(4,32.53467);
   hNCinFV_stack_11->SetBinContent(5,28.81593);
   hNCinFV_stack_11->SetBinContent(6,17.21362);
   hNCinFV_stack_11->SetBinContent(7,7.217029);
   hNCinFV_stack_11->SetBinContent(8,9.763984);
   hNCinFV_stack_11->SetBinContent(9,3.647048);
   hNCinFV_stack_11->SetBinContent(10,3.132191);
   hNCinFV_stack_11->SetBinContent(11,0.9925678);
   hNCinFV_stack_11->SetBinContent(12,2.640407);
   hNCinFV_stack_11->SetBinContent(13,19.59582);
   hNCinFV_stack_11->SetBinError(1,5.965036);
   hNCinFV_stack_11->SetBinError(2,8.761273);
   hNCinFV_stack_11->SetBinError(3,7.343891);
   hNCinFV_stack_11->SetBinError(4,5.944108);
   hNCinFV_stack_11->SetBinError(5,5.673822);
   hNCinFV_stack_11->SetBinError(6,4.433489);
   hNCinFV_stack_11->SetBinError(7,2.589948);
   hNCinFV_stack_11->SetBinError(8,3.212177);
   hNCinFV_stack_11->SetBinError(9,1.844883);
   hNCinFV_stack_11->SetBinError(10,1.622318);
   hNCinFV_stack_11->SetBinError(11,0.9925678);
   hNCinFV_stack_11->SetBinError(12,1.549117);
   hNCinFV_stack_11->SetBinError(13,4.466856);
   hNCinFV_stack_11->SetEntries(271);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,27.53901);
   hnumuCCinFV_stack_12->SetBinContent(2,61.71526);
   hnumuCCinFV_stack_12->SetBinContent(3,63.09243);
   hnumuCCinFV_stack_12->SetBinContent(4,30.78153);
   hnumuCCinFV_stack_12->SetBinContent(5,29.1217);
   hnumuCCinFV_stack_12->SetBinContent(6,28.68999);
   hnumuCCinFV_stack_12->SetBinContent(7,3.970271);
   hnumuCCinFV_stack_12->SetBinContent(8,11.95276);
   hnumuCCinFV_stack_12->SetBinContent(9,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(10,4.962839);
   hnumuCCinFV_stack_12->SetBinContent(11,1.985136);
   hnumuCCinFV_stack_12->SetBinContent(12,4.30811);
   hnumuCCinFV_stack_12->SetBinContent(13,13.68197);
   hnumuCCinFV_stack_12->SetBinError(1,5.427096);
   hnumuCCinFV_stack_12->SetBinError(2,10.40863);
   hnumuCCinFV_stack_12->SetBinError(3,12.00038);
   hnumuCCinFV_stack_12->SetBinError(4,5.620728);
   hnumuCCinFV_stack_12->SetBinError(5,5.527884);
   hnumuCCinFV_stack_12->SetBinError(6,5.565213);
   hnumuCCinFV_stack_12->SetBinError(7,1.985136);
   hnumuCCinFV_stack_12->SetBinError(8,4.350136);
   hnumuCCinFV_stack_12->SetBinError(9,1.403703);
   hnumuCCinFV_stack_12->SetBinError(10,2.219449);
   hnumuCCinFV_stack_12->SetBinError(11,1.403703);
   hnumuCCinFV_stack_12->SetBinError(12,2.160843);
   hnumuCCinFV_stack_12->SetBinError(13,3.815557);
   hnumuCCinFV_stack_12->SetEntries(258);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,3.446364);
   hnueCCinFV_stack_13->SetBinContent(2,6.625311);
   hnueCCinFV_stack_13->SetBinContent(3,1.253684);
   hnueCCinFV_stack_13->SetBinContent(4,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(5,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(7,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(8,2.27427);
   hnueCCinFV_stack_13->SetBinContent(9,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(10,3.094444);
   hnueCCinFV_stack_13->SetBinContent(12,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,10.05833);
   hnueCCinFV_stack_13->SetBinError(1,1.992625);
   hnueCCinFV_stack_13->SetBinError(2,2.773043);
   hnueCCinFV_stack_13->SetBinError(3,1.253684);
   hnueCCinFV_stack_13->SetBinError(4,0.9925678);
   hnueCCinFV_stack_13->SetBinError(5,0.9925678);
   hnueCCinFV_stack_13->SetBinError(7,0.9925678);
   hnueCCinFV_stack_13->SetBinError(8,1.621096);
   hnueCCinFV_stack_13->SetBinError(9,0.9925678);
   hnueCCinFV_stack_13->SetBinError(10,1.789119);
   hnueCCinFV_stack_13->SetBinError(12,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,7.684029);
   hnueCCinFV_stack_13->SetEntries(25);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,438.4125);
   hmcerror__11->SetBinContent(2,787.2244);
   hmcerror__11->SetBinContent(3,737.4049);
   hmcerror__11->SetBinContent(4,522.2665);
   hmcerror__11->SetBinContent(5,336.382);
   hmcerror__11->SetBinContent(6,217.8053);
   hmcerror__11->SetBinContent(7,116.0946);
   hmcerror__11->SetBinContent(8,82.35027);
   hmcerror__11->SetBinContent(9,68.64713);
   hmcerror__11->SetBinContent(10,42.94358);
   hmcerror__11->SetBinContent(11,40.67768);
   hmcerror__11->SetBinContent(12,30.84799);
   hmcerror__11->SetBinContent(13,229.6162);
   hmcerror__11->SetBinError(1,119.479);
   hmcerror__11->SetBinError(2,201.7733);
   hmcerror__11->SetBinError(3,186.534);
   hmcerror__11->SetBinError(4,147.2286);
   hmcerror__11->SetBinError(5,121.212);
   hmcerror__11->SetBinError(6,65.15059);
   hmcerror__11->SetBinError(7,36.25157);
   hmcerror__11->SetBinError(8,27.76606);
   hmcerror__11->SetBinError(9,27.8611);
   hmcerror__11->SetBinError(10,18.55435);
   hmcerror__11->SetBinError(11,21.22728);
   hmcerror__11->SetBinError(12,15.29408);
   hmcerror__11->SetBinError(13,67.10308);
   hmcerror__11->SetEntries(3797.715);

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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3013[12] = {
   651,
   1101,
   1080,
   789,
   482,
   310,
   176,
   104,
   77,
   64,
   34,
   45};
   Double_t _felx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3013[12] = {
   25.5147,
   33.18132,
   32.86335,
   28.08914,
   21.9545,
   17.60682,
   13.2665,
   10.19804,
   8.8995,
   8.1273,
   5.9703,
   6.8416};
   Double_t _fehx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3013[12] = {
   25.5147,
   33.18132,
   32.86335,
   28.08914,
   21.9545,
   17.60682,
   13.2665,
   10.19804,
   8.6976,
   7.9246,
   5.7635,
   6.637};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(25.22673);
   Graph_Graph3013->SetMaximum(1244.796);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.44#pm0.36","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 7.24e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4913.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 93.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 521.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  120.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1264.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  258.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 614.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 248.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
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
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3014[12] = {
   0.2725264,
   0.2563098,
   0.2529601,
   0.2819032,
   0.3603404,
   0.2991231,
   0.3122588,
   0.3371702,
   0.4058596,
   0.4320634,
   0.521841,
   0.4957886};
   Double_t _fehx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3014[12] = {
   0.2725264,
   0.2563098,
   0.2529601,
   0.2819032,
   0.3603404,
   0.2991231,
   0.3122588,
   0.3371702,
   0.4058596,
   0.4320634,
   0.521841,
   0.4957886};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
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
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3015[12] = {
   0.225266,
   0.234529,
   0.2333206,
   0.2498543,
   0.272706,
   0.256496,
   0.2405348,
   0.242124,
   0.2489986,
   0.2617467,
   0.2526218,
   0.2776436};
   Double_t _fehx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3015[12] = {
   0.225266,
   0.234529,
   0.2333206,
   0.2498543,
   0.272706,
   0.256496,
   0.2405348,
   0.242124,
   0.2489986,
   0.2617467,
   0.2526218,
   0.2776436};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
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
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3016[12] = {
   1.484903,
   1.398585,
   1.464596,
   1.510723,
   1.432895,
   1.42329,
   1.516005,
   1.262898,
   1.121678,
   1.490328,
   0.8358391,
   1.458766};
   Double_t _felx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3016[12] = {
   0.05819793,
   0.04214976,
   0.04456623,
   0.05378316,
   0.06526656,
   0.08083742,
   0.1142731,
   0.1238374,
   0.1296412,
   0.1892553,
   0.1467709,
   0.2217843};
   Double_t _fehx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3016[12] = {
   0.05819793,
   0.04214976,
   0.04456623,
   0.05378316,
   0.06526656,
   0.08083742,
   0.1142731,
   0.1238374,
   0.1267001,
   0.1845352,
   0.141687,
   0.2151518};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.5904888);
   Graph_Graph3016->SetMaximum(1.773442);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
