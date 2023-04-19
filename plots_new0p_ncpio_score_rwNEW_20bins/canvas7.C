#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Mar 13 17:22:32 2023) by ROOT version 6.26/00
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
   pad1->Range(0.2307692,-4.636546,6.641026,512.7044);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmc__19->SetBinContent(4,187.9955);
   hmc__19->SetBinContent(5,228.9382);
   hmc__19->SetBinContent(6,231.8273);
   hmc__19->SetBinContent(7,202.6078);
   hmc__19->SetBinContent(8,190.9697);
   hmc__19->SetBinContent(9,192.1137);
   hmc__19->SetBinContent(10,184.2662);
   hmc__19->SetBinContent(11,199.3892);
   hmc__19->SetBinContent(12,176.3585);
   hmc__19->SetBinContent(13,132.7434);
   hmc__19->SetBinContent(14,63.27586);
   hmc__19->SetBinContent(15,20.62468);
   hmc__19->SetBinContent(16,4.53261);
   hmc__19->SetBinContent(17,0.4042178);
   hmc__19->SetBinContent(18,0.1673999);
   hmc__19->SetBinContent(19,0.2089179);
   hmc__19->SetBinContent(20,0.05579997);
   hmc__19->SetBinContent(21,0.02789998);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.3895343);
   hmc__19->SetBinError(3,0.3895343);
   hmc__19->SetBinError(4,47.18904);
   hmc__19->SetBinError(5,56.43612);
   hmc__19->SetBinError(6,65.90993);
   hmc__19->SetBinError(7,59.26293);
   hmc__19->SetBinError(8,49.43431);
   hmc__19->SetBinError(9,56.89493);
   hmc__19->SetBinError(10,59.53809);
   hmc__19->SetBinError(11,60.52886);
   hmc__19->SetBinError(12,52.90055);
   hmc__19->SetBinError(13,41.40213);
   hmc__19->SetBinError(14,21.43829);
   hmc__19->SetBinError(15,9.611965);
   hmc__19->SetBinError(16,4.024482);
   hmc__19->SetBinError(17,1.690268);
   hmc__19->SetBinError(18,0.4094709);
   hmc__19->SetBinError(19,0.8071915);
   hmc__19->SetBinError(20,0.301503);
   hmc__19->SetBinError(21,0.2404565);
   hmc__19->SetMinimum(-4.636546);
   hmc__19->SetMaximum(486.8373);
   hmc__19->SetEntries(1993.425);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,1,6);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(243.4187);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,5.054894);
   hbadmatch_stack_1->SetBinContent(5,7.206994);
   hbadmatch_stack_1->SetBinContent(6,3.67513);
   hbadmatch_stack_1->SetBinContent(7,6.286154);
   hbadmatch_stack_1->SetBinContent(8,5.146735);
   hbadmatch_stack_1->SetBinContent(9,3.754292);
   hbadmatch_stack_1->SetBinContent(10,2.790044);
   hbadmatch_stack_1->SetBinContent(11,1.91221);
   hbadmatch_stack_1->SetBinContent(12,3.009535);
   hbadmatch_stack_1->SetBinContent(13,1.999038);
   hbadmatch_stack_1->SetBinError(4,1.170756);
   hbadmatch_stack_1->SetBinError(5,1.421039);
   hbadmatch_stack_1->SetBinError(6,0.9868313);
   hbadmatch_stack_1->SetBinError(7,1.437793);
   hbadmatch_stack_1->SetBinError(8,1.179958);
   hbadmatch_stack_1->SetBinError(9,0.9702701);
   hbadmatch_stack_1->SetBinError(10,0.8272924);
   hbadmatch_stack_1->SetBinError(11,0.6516395);
   hbadmatch_stack_1->SetBinError(12,1.314124);
   hbadmatch_stack_1->SetBinError(13,0.7339349);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,17.47324);
   hext_stack_2->SetBinContent(5,17.09259);
   hext_stack_2->SetBinContent(6,10.54398);
   hext_stack_2->SetBinContent(7,10.94617);
   hext_stack_2->SetBinContent(8,9.965801);
   hext_stack_2->SetBinContent(9,7.784402);
   hext_stack_2->SetBinContent(10,7.843424);
   hext_stack_2->SetBinContent(11,7.434054);
   hext_stack_2->SetBinContent(12,2.599588);
   hext_stack_2->SetBinContent(13,1.779209);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinError(4,2.774454);
   hext_stack_2->SetBinError(5,2.657779);
   hext_stack_2->SetBinError(6,2.072541);
   hext_stack_2->SetBinError(7,2.079814);
   hext_stack_2->SetBinError(8,2.052103);
   hext_stack_2->SetBinError(9,1.825754);
   hext_stack_2->SetBinError(10,1.877665);
   hext_stack_2->SetBinError(11,1.922661);
   hext_stack_2->SetBinError(12,0.9884288);
   hext_stack_2->SetBinError(13,0.9206235);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetEntries(235);

   ci = 1513;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,0.7555597);
   hdirt_stack_3->SetBinContent(5,0.9082982);
   hdirt_stack_3->SetBinContent(6,0.663663);
   hdirt_stack_3->SetBinContent(7,1.698728);
   hdirt_stack_3->SetBinContent(8,0.4247338);
   hdirt_stack_3->SetBinContent(9,0.3840755);
   hdirt_stack_3->SetBinContent(10,0.6131097);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.1446783);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3923188);
   hdirt_stack_3->SetBinError(5,0.455032);
   hdirt_stack_3->SetBinError(6,0.4090853);
   hdirt_stack_3->SetBinError(7,0.7245876);
   hdirt_stack_3->SetBinError(8,0.4247338);
   hdirt_stack_3->SetBinError(9,0.2742256);
   hdirt_stack_3->SetBinError(10,0.3557628);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.1446783);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetEntries(33);

   ci = 1514;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,6.052058);
   houtFV_stack_4->SetBinContent(5,10.41092);
   houtFV_stack_4->SetBinContent(6,7.997597);
   houtFV_stack_4->SetBinContent(7,6.054819);
   houtFV_stack_4->SetBinContent(8,6.461786);
   houtFV_stack_4->SetBinContent(9,4.701079);
   houtFV_stack_4->SetBinContent(10,5.520237);
   houtFV_stack_4->SetBinContent(11,4.507921);
   houtFV_stack_4->SetBinContent(12,2.440871);
   houtFV_stack_4->SetBinContent(13,1.695974);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinError(4,1.256311);
   houtFV_stack_4->SetBinError(5,1.690639);
   houtFV_stack_4->SetBinError(6,1.435804);
   houtFV_stack_4->SetBinError(7,1.238895);
   houtFV_stack_4->SetBinError(8,1.209837);
   houtFV_stack_4->SetBinError(9,1.0391);
   houtFV_stack_4->SetBinError(10,1.194104);
   houtFV_stack_4->SetBinError(11,1.033131);
   houtFV_stack_4->SetBinError(12,0.798309);
   houtFV_stack_4->SetBinError(13,0.6623242);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetEntries(240);

   ci = 1515;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3901041);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2390593);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1516;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.422244);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8786857);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.449976);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.087772);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8371677);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.785776);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.645276);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.35249);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4446571);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2530319);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4071111);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3307091);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.236878);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4765559);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4137491);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3514395);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1517;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.3131);
   hNCpi0inFVres_stack_7->SetBinContent(5,53.88691);
   hNCpi0inFVres_stack_7->SetBinContent(6,67.98012);
   hNCpi0inFVres_stack_7->SetBinContent(7,73.17867);
   hNCpi0inFVres_stack_7->SetBinContent(8,77.68104);
   hNCpi0inFVres_stack_7->SetBinContent(9,100.8483);
   hNCpi0inFVres_stack_7->SetBinContent(10,107.1644);
   hNCpi0inFVres_stack_7->SetBinContent(11,131.2982);
   hNCpi0inFVres_stack_7->SetBinContent(12,127.7403);
   hNCpi0inFVres_stack_7->SetBinContent(13,100.8348);
   hNCpi0inFVres_stack_7->SetBinContent(14,48.53751);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.25771);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.835607);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3484178);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(4,2.066424);
   hNCpi0inFVres_stack_7->SetBinError(5,2.386885);
   hNCpi0inFVres_stack_7->SetBinError(6,2.677128);
   hNCpi0inFVres_stack_7->SetBinError(7,2.781222);
   hNCpi0inFVres_stack_7->SetBinError(8,2.848229);
   hNCpi0inFVres_stack_7->SetBinError(9,3.321927);
   hNCpi0inFVres_stack_7->SetBinError(10,3.38566);
   hNCpi0inFVres_stack_7->SetBinError(11,3.74645);
   hNCpi0inFVres_stack_7->SetBinError(12,3.716305);
   hNCpi0inFVres_stack_7->SetBinError(13,3.315701);
   hNCpi0inFVres_stack_7->SetBinError(14,2.294085);
   hNCpi0inFVres_stack_7->SetBinError(15,1.335161);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6941505);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1283607);
   hNCpi0inFVres_stack_7->SetBinError(18,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(20,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1518;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.08048);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.88447);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.32613);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.47966);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.82925);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.49161);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.57625);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.27773);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.53399);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.75865);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.672853);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.924444);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.024898);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.329001);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.318834);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.288657);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.327365);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.276417);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.454341);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.386313);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.441258);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.156711);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7625073);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4601427);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1519;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.4467362);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2792353);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1520;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,33.95247);
   hCCpi0inFV_stack_10->SetBinContent(5,49.19392);
   hCCpi0inFV_stack_10->SetBinContent(6,43.04108);
   hCCpi0inFV_stack_10->SetBinContent(7,35.56448);
   hCCpi0inFV_stack_10->SetBinContent(8,31.07251);
   hCCpi0inFV_stack_10->SetBinContent(9,24.32163);
   hCCpi0inFV_stack_10->SetBinContent(10,18.01786);
   hCCpi0inFV_stack_10->SetBinContent(11,18.92615);
   hCCpi0inFV_stack_10->SetBinContent(12,10.7254);
   hCCpi0inFV_stack_10->SetBinContent(13,5.413651);
   hCCpi0inFV_stack_10->SetBinContent(14,3.076205);
   hCCpi0inFV_stack_10->SetBinContent(15,0.536893);
   hCCpi0inFV_stack_10->SetBinError(4,2.910298);
   hCCpi0inFV_stack_10->SetBinError(5,3.556524);
   hCCpi0inFV_stack_10->SetBinError(6,3.295145);
   hCCpi0inFV_stack_10->SetBinError(7,3.021936);
   hCCpi0inFV_stack_10->SetBinError(8,2.731499);
   hCCpi0inFV_stack_10->SetBinError(9,2.528265);
   hCCpi0inFV_stack_10->SetBinError(10,2.126572);
   hCCpi0inFV_stack_10->SetBinError(11,2.178252);
   hCCpi0inFV_stack_10->SetBinError(12,1.675756);
   hCCpi0inFV_stack_10->SetBinError(13,1.107851);
   hCCpi0inFV_stack_10->SetBinError(14,0.9213145);
   hCCpi0inFV_stack_10->SetBinError(15,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,23.83002);
   hNCinFV_stack_11->SetBinContent(5,26.52003);
   hNCinFV_stack_11->SetBinContent(6,29.94824);
   hNCinFV_stack_11->SetBinContent(7,20.36714);
   hNCinFV_stack_11->SetBinContent(8,20.79523);
   hNCinFV_stack_11->SetBinContent(9,18.87758);
   hNCinFV_stack_11->SetBinContent(10,10.9435);
   hNCinFV_stack_11->SetBinContent(11,8.49778);
   hNCinFV_stack_11->SetBinContent(12,7.519275);
   hNCinFV_stack_11->SetBinContent(13,5.178369);
   hNCinFV_stack_11->SetBinContent(14,3.769477);
   hNCinFV_stack_11->SetBinContent(15,0.1967154);
   hNCinFV_stack_11->SetBinError(4,2.498366);
   hNCinFV_stack_11->SetBinError(5,2.572803);
   hNCinFV_stack_11->SetBinError(6,2.754722);
   hNCinFV_stack_11->SetBinError(7,2.306137);
   hNCinFV_stack_11->SetBinError(8,2.313017);
   hNCinFV_stack_11->SetBinError(9,2.141423);
   hNCinFV_stack_11->SetBinError(10,1.653412);
   hNCinFV_stack_11->SetBinError(11,1.468347);
   hNCinFV_stack_11->SetBinError(12,1.401623);
   hNCinFV_stack_11->SetBinError(13,1.144335);
   hNCinFV_stack_11->SetBinError(14,0.9417711);
   hNCinFV_stack_11->SetBinError(15,0.1967154);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,47.98457);
   hnumuCCinFV_stack_12->SetBinContent(5,45.08081);
   hnumuCCinFV_stack_12->SetBinContent(6,46.20742);
   hnumuCCinFV_stack_12->SetBinContent(7,29.91361);
   hnumuCCinFV_stack_12->SetBinContent(8,20.09933);
   hnumuCCinFV_stack_12->SetBinContent(9,13.43906);
   hnumuCCinFV_stack_12->SetBinContent(10,10.00531);
   hnumuCCinFV_stack_12->SetBinContent(11,5.614321);
   hnumuCCinFV_stack_12->SetBinContent(12,1.191155);
   hnumuCCinFV_stack_12->SetBinContent(13,0.6238208);
   hnumuCCinFV_stack_12->SetBinContent(14,1.203136);
   hnumuCCinFV_stack_12->SetBinContent(15,0.0006863147);
   hnumuCCinFV_stack_12->SetBinError(4,3.949922);
   hnumuCCinFV_stack_12->SetBinError(5,3.791637);
   hnumuCCinFV_stack_12->SetBinError(6,4.142117);
   hnumuCCinFV_stack_12->SetBinError(7,3.147952);
   hnumuCCinFV_stack_12->SetBinError(8,3.509216);
   hnumuCCinFV_stack_12->SetBinError(9,1.987322);
   hnumuCCinFV_stack_12->SetBinError(10,1.602659);
   hnumuCCinFV_stack_12->SetBinError(11,1.26797);
   hnumuCCinFV_stack_12->SetBinError(12,0.5441485);
   hnumuCCinFV_stack_12->SetBinError(13,0.3559308);
   hnumuCCinFV_stack_12->SetBinError(14,0.6317086);
   hnumuCCinFV_stack_12->SetBinError(15,0.0006863147);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,1.829157);
   hnueCCinFV_stack_13->SetBinContent(5,2.04213);
   hnueCCinFV_stack_13->SetBinContent(6,2.91012);
   hnueCCinFV_stack_13->SetBinContent(7,1.086576);
   hnueCCinFV_stack_13->SetBinContent(8,0.9875615);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.2486649);
   hnueCCinFV_stack_13->SetBinError(4,0.8280249);
   hnueCCinFV_stack_13->SetBinError(5,0.751535);
   hnueCCinFV_stack_13->SetBinError(6,0.9046473);
   hnueCCinFV_stack_13->SetBinError(7,0.4893817);
   hnueCCinFV_stack_13->SetBinError(8,0.5077461);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.2486649);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__20->SetBinContent(4,187.9955);
   hmcerror__20->SetBinContent(5,228.9382);
   hmcerror__20->SetBinContent(6,231.8273);
   hmcerror__20->SetBinContent(7,202.6078);
   hmcerror__20->SetBinContent(8,190.9697);
   hmcerror__20->SetBinContent(9,192.1137);
   hmcerror__20->SetBinContent(10,184.2662);
   hmcerror__20->SetBinContent(11,199.3892);
   hmcerror__20->SetBinContent(12,176.3585);
   hmcerror__20->SetBinContent(13,132.7434);
   hmcerror__20->SetBinContent(14,63.27586);
   hmcerror__20->SetBinContent(15,20.62468);
   hmcerror__20->SetBinContent(16,4.53261);
   hmcerror__20->SetBinContent(17,0.4042178);
   hmcerror__20->SetBinContent(18,0.1673999);
   hmcerror__20->SetBinContent(19,0.2089179);
   hmcerror__20->SetBinContent(20,0.05579997);
   hmcerror__20->SetBinContent(21,0.02789998);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.3895343);
   hmcerror__20->SetBinError(3,0.3895343);
   hmcerror__20->SetBinError(4,47.18904);
   hmcerror__20->SetBinError(5,56.43612);
   hmcerror__20->SetBinError(6,65.90993);
   hmcerror__20->SetBinError(7,59.26293);
   hmcerror__20->SetBinError(8,49.43431);
   hmcerror__20->SetBinError(9,56.89493);
   hmcerror__20->SetBinError(10,59.53809);
   hmcerror__20->SetBinError(11,60.52886);
   hmcerror__20->SetBinError(12,52.90055);
   hmcerror__20->SetBinError(13,41.40213);
   hmcerror__20->SetBinError(14,21.43829);
   hmcerror__20->SetBinError(15,9.611965);
   hmcerror__20->SetBinError(16,4.024482);
   hmcerror__20->SetBinError(17,1.690268);
   hmcerror__20->SetBinError(18,0.4094709);
   hmcerror__20->SetBinError(19,0.8071915);
   hmcerror__20->SetBinError(20,0.301503);
   hmcerror__20->SetBinError(21,0.2404565);
   hmcerror__20->SetEntries(1993.425);

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
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   0,
   0,
   0,
   125,
   187,
   161,
   165,
   128,
   149,
   130,
   135,
   125,
   92,
   41,
   7,
   3,
   1,
   3,
   0,
   0};
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
   0,
   0,
   0,
   11.18034,
   13.67479,
   12.68858,
   12.84523,
   11.31371,
   12.20656,
   11.40175,
   11.61895,
   11.18034,
   9.7138,
   6.5384,
   2.85954,
   2.143368,
   1,
   2.143368,
   0,
   0};
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
   1.1478,
   1.1478,
   1.1478,
   11.18034,
   13.67479,
   12.68858,
   12.84523,
   11.31371,
   12.20656,
   11.40175,
   11.61895,
   11.18034,
   9.513,
   6.3331,
   2.61053,
   1.72422,
   1.35971,
   1.72422,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0.5,6.5);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(220.7423);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
   0,
   0,
   0,
   0.2510115,
   0.2465125,
   0.2843061,
   0.2925007,
   0.2588594,
   0.2961525,
   0.3231092,
   0.3035715,
   0.2999603,
   0.311896,
   0.3388068,
   0.4660419,
   0.887895,
   4.181576,
   2.446064,
   3.863677,
   5.403282};
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
   0,
   0,
   0,
   0.2510115,
   0.2465125,
   0.2843061,
   0.2925007,
   0.2588594,
   0.2961525,
   0.3231092,
   0.3035715,
   0.2999603,
   0.311896,
   0.3388068,
   0.4660419,
   0.887895,
   4.181576,
   2.446064,
   3.863677,
   5.403282};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0.5,6.5);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
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
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0,
   0,
   0,
   0.1824918,
   0.1935789,
   0.2061276,
   0.225547,
   0.2208624,
   0.2428694,
   0.2524188,
   0.2622838,
   0.2679143,
   0.282592,
   0.2803736,
   0.2872443,
   0.3446874,
   0.937956,
   1.70909,
   1.610544,
   4.192097};
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   0,
   0,
   0,
   0.1824918,
   0.1935789,
   0.2061276,
   0.225547,
   0.2208624,
   0.2428694,
   0.2524188,
   0.2622838,
   0.2679143,
   0.282592,
   0.2803736,
   0.2872443,
   0.3446874,
   0.937956,
   1.70909,
   1.610544,
   4.192097};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0.5,6.5);
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
   
   Double_t _fx3028[20] = {
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
   Double_t _fy3028[20] = {
   10,
   10,
   10,
   0.6649096,
   0.8168144,
   0.6944825,
   0.8143813,
   0.6702633,
   0.7755825,
   0.7055012,
   0.6770679,
   0.7087835,
   0.6930666,
   0.6479564,
   0.3393992,
   0.6618703,
   2.473914,
   17.92116,
   0,
   0};
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
   0,
   0,
   0,
   0.05947132,
   0.05973138,
   0.05473289,
   0.0633995,
   0.05924347,
   0.0635382,
   0.06187655,
   0.05827273,
   0.06339552,
   0.07317729,
   0.1033317,
   0.1386465,
   0.4728772,
   2.473914,
   12.80388,
   0,
   0};
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
   0,
   0,
   0,
   0.05947132,
   0.05973138,
   0.05473289,
   0.0633995,
   0.05924347,
   0.0635382,
   0.06187655,
   0.05827273,
   0.06339552,
   0.07166459,
   0.1000871,
   0.1265731,
   0.3804033,
   3.363805,
   10.30001,
   5.494023,
   20.5699};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0.5,6.5);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(31.04328);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
