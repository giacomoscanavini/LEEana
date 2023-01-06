#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas10()
{
//=========Macro generated from canvas: canvas10/channel10
//=========  (Tue Dec  6 22:18:04 2022) by ROOT version 6.26/00
   TCanvas *canvas10 = new TCanvas("canvas10", "channel10",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas10->SetHighLightColor(2);
   canvas10->Range(0,0,1,1);
   canvas10->SetFillColor(0);
   canvas10->SetBorderMode(0);
   canvas10->SetBorderSize(2);
   canvas10->SetLeftMargin(0.12);
   canvas10->SetRightMargin(0.12);
   canvas10->SetTopMargin(0.05);
   canvas10->SetBottomMargin(0.12);
   canvas10->SetFrameLineWidth(2);
   canvas10->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-0.9076947,1353.846,100.3719);
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
   
   TH1F *hmc__28 = new TH1F("hmc__28","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__28->SetBinContent(1,24.65585);
   hmc__28->SetBinContent(2,45.38474);
   hmc__28->SetBinContent(3,41.06491);
   hmc__28->SetBinContent(4,26.77587);
   hmc__28->SetBinContent(5,18.10089);
   hmc__28->SetBinContent(6,9.264684);
   hmc__28->SetBinContent(7,3.587588);
   hmc__28->SetBinContent(8,4.243169);
   hmc__28->SetBinContent(9,1.442664);
   hmc__28->SetBinContent(10,1.82014);
   hmc__28->SetBinContent(11,1.185372);
   hmc__28->SetBinContent(12,0.8332376);
   hmc__28->SetBinContent(13,10.33068);
   hmc__28->SetBinError(1,18.40204);
   hmc__28->SetBinError(2,15.62529);
   hmc__28->SetBinError(3,14.49437);
   hmc__28->SetBinError(4,12.33238);
   hmc__28->SetBinError(5,9.067047);
   hmc__28->SetBinError(6,5.822703);
   hmc__28->SetBinError(7,2.932385);
   hmc__28->SetBinError(8,6.290164);
   hmc__28->SetBinError(9,1.600468);
   hmc__28->SetBinError(10,6.65052);
   hmc__28->SetBinError(11,1.106524);
   hmc__28->SetBinError(12,15.39838);
   hmc__28->SetBinError(13,7.693968);
   hmc__28->SetMinimum(-0.9076947);
   hmc__28->SetMaximum(95.30794);
   hmc__28->SetEntries(194.7283);
   hmc__28->SetLineWidth(5);
   hmc__28->GetXaxis()->SetLabelFont(42);
   hmc__28->GetXaxis()->SetTitleOffset(1);
   hmc__28->GetXaxis()->SetTitleFont(42);
   hmc__28->GetYaxis()->SetTitle("Event counts");
   hmc__28->GetYaxis()->SetLabelFont(132);
   hmc__28->GetYaxis()->SetLabelSize(0.04);
   hmc__28->GetYaxis()->SetTitleSize(0.05);
   hmc__28->GetYaxis()->SetTitleOffset(0.73);
   hmc__28->GetYaxis()->SetTitleFont(132);
   hmc__28->GetZaxis()->SetLabelFont(42);
   hmc__28->GetZaxis()->SetTitleOffset(1);
   hmc__28->GetZaxis()->SetTitleFont(42);
   hmc__28->Draw("hist");
   
   THStack *hs10 = new THStack();
   hs10->SetName("hs10");
   hs10->SetTitle("");
   
   TH1F *hs10_stack_10 = new TH1F("hs10_stack_10","",12,0,1200);
   hs10_stack_10->SetMinimum(-6.289654e-09);
   hs10_stack_10->SetMaximum(47.65397);
   hs10_stack_10->SetDirectory(0);
   hs10_stack_10->SetStats(0);
   hs10_stack_10->SetLineWidth(2);
   hs10_stack_10->SetMarkerStyle(20);
   hs10_stack_10->GetXaxis()->SetNdivisions(509);
   hs10_stack_10->GetXaxis()->SetLabelFont(132);
   hs10_stack_10->GetXaxis()->SetLabelOffset(0.01);
   hs10_stack_10->GetXaxis()->SetLabelSize(0.08);
   hs10_stack_10->GetXaxis()->SetTitleSize(0.08);
   hs10_stack_10->GetXaxis()->SetTitleOffset(0.95);
   hs10_stack_10->GetXaxis()->SetTitleFont(132);
   hs10_stack_10->GetYaxis()->SetNdivisions(509);
   hs10_stack_10->GetYaxis()->SetLabelFont(132);
   hs10_stack_10->GetYaxis()->SetLabelOffset(0.01);
   hs10_stack_10->GetYaxis()->SetLabelSize(0.08);
   hs10_stack_10->GetYaxis()->SetTitleSize(0.08);
   hs10_stack_10->GetYaxis()->SetTitleOffset(0.95);
   hs10_stack_10->GetYaxis()->SetTitleFont(132);
   hs10_stack_10->GetZaxis()->SetLabelFont(132);
   hs10_stack_10->GetZaxis()->SetLabelSize(0.08);
   hs10_stack_10->GetZaxis()->SetTitleSize(0.08);
   hs10_stack_10->GetZaxis()->SetTitleOffset(1.2);
   hs10_stack_10->GetZaxis()->SetTitleFont(132);
   hs10->SetHistogram(hs10_stack_10);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.456465);
   hbadmatch_stack_1->SetBinContent(2,1.803877);
   hbadmatch_stack_1->SetBinContent(3,1.192006);
   hbadmatch_stack_1->SetBinContent(4,0.9631912);
   hbadmatch_stack_1->SetBinContent(5,1.133792);
   hbadmatch_stack_1->SetBinContent(6,0.04941325);
   hbadmatch_stack_1->SetBinContent(8,0.7663768);
   hbadmatch_stack_1->SetBinContent(13,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.8313047);
   hbadmatch_stack_1->SetBinError(2,0.759768);
   hbadmatch_stack_1->SetBinError(3,0.613539);
   hbadmatch_stack_1->SetBinError(4,0.4960467);
   hbadmatch_stack_1->SetBinError(5,0.8095597);
   hbadmatch_stack_1->SetBinError(6,0.04941325);
   hbadmatch_stack_1->SetBinError(8,0.4655939);
   hbadmatch_stack_1->SetBinError(13,0.3401776);
   hbadmatch_stack_1->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1551;
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
   hs10->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,9.812987);
   hext_stack_2->SetBinContent(3,11.56902);
   hext_stack_2->SetBinContent(4,6.139236);
   hext_stack_2->SetBinContent(5,6.456453);
   hext_stack_2->SetBinContent(6,3.979379);
   hext_stack_2->SetBinContent(7,1.461993);
   hext_stack_2->SetBinContent(8,1.37261);
   hext_stack_2->SetBinContent(9,0.7309963);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(13,4.696014);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,2.006207);
   hext_stack_2->SetBinError(3,2.237091);
   hext_stack_2->SetBinError(4,1.714458);
   hext_stack_2->SetBinError(5,1.801611);
   hext_stack_2->SetBinError(6,1.207483);
   hext_stack_2->SetBinError(7,0.7356036);
   hext_stack_2->SetBinError(8,0.8259691);
   hext_stack_2->SetBinError(9,0.5201503);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(13,1.459786);
   hext_stack_2->SetEntries(123);

   ci = 1552;
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
   hs10->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,1.547165);
   hdirt_stack_3->SetBinContent(2,0.3569671);
   hdirt_stack_3->SetBinContent(3,0.5032464);
   hdirt_stack_3->SetBinContent(4,0.3381872);
   hdirt_stack_3->SetBinContent(5,0.1620494);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinError(1,0.6612911);
   hdirt_stack_3->SetBinError(2,0.258803);
   hdirt_stack_3->SetBinError(3,0.373476);
   hdirt_stack_3->SetBinError(4,0.3381872);
   hdirt_stack_3->SetBinError(5,0.1620494);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetEntries(17);

   ci = 1553;
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
   hs10->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,7.320771);
   houtFV_stack_4->SetBinContent(2,8.940837);
   houtFV_stack_4->SetBinContent(3,8.203197);
   houtFV_stack_4->SetBinContent(4,5.754353);
   houtFV_stack_4->SetBinContent(5,2.992146);
   houtFV_stack_4->SetBinContent(6,2.9737);
   houtFV_stack_4->SetBinContent(7,0.8917523);
   houtFV_stack_4->SetBinContent(8,0.4448577);
   houtFV_stack_4->SetBinContent(9,0.2586183);
   houtFV_stack_4->SetBinContent(10,0.4336503);
   houtFV_stack_4->SetBinContent(12,0.7910104);
   houtFV_stack_4->SetBinContent(13,1.066386);
   houtFV_stack_4->SetBinError(1,1.336751);
   houtFV_stack_4->SetBinError(2,1.492783);
   houtFV_stack_4->SetBinError(3,1.407303);
   houtFV_stack_4->SetBinError(4,1.304475);
   houtFV_stack_4->SetBinError(5,0.9550744);
   houtFV_stack_4->SetBinError(6,0.8997152);
   houtFV_stack_4->SetBinError(7,0.5124624);
   houtFV_stack_4->SetBinError(8,0.3166568);
   houtFV_stack_4->SetBinError(9,0.1828724);
   houtFV_stack_4->SetBinError(10,0.352786);
   houtFV_stack_4->SetBinError(12,0.4679673);
   houtFV_stack_4->SetBinError(13,0.4467538);
   houtFV_stack_4->SetEntries(181);

   ci = 1554;
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
   hs10->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01533249);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.202419);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01084171);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2024189);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1555;
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
   hs10->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08994476);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05152526);
   hNCpi0inFVqe_stack_6->SetEntries(5);

   ci = 1556;
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
   hs10->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.31018);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.422411);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.623308);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.554588);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.665928);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.735356);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.2108438);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.1255024);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.1746188);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.08977876);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.01715503);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.04222719);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4853391);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4903895);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9269515);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9311843);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6916353);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3999177);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2786559);
   hNCpi0inFVres_stack_7->SetBinError(7,0.07544171);
   hNCpi0inFVres_stack_7->SetBinError(8,0.05534829);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1341291);
   hNCpi0inFVres_stack_7->SetBinError(10,0.05911408);
   hNCpi0inFVres_stack_7->SetBinError(11,0.01715503);
   hNCpi0inFVres_stack_7->SetBinError(12,0.04222718);
   hNCpi0inFVres_stack_7->SetBinError(13,0.141323);
   hNCpi0inFVres_stack_7->SetEntries(571);

   ci = 1557;
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
   hs10->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.7250246);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.9979508);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.267211);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8792925);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.2566051);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1349756);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.007666246);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.05953494);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.03728024);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1380836);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2812386);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3257053);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4447664);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2838824);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1446917);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.08919755);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.007666246);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.05953494);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.03728024);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.07984004);
   hNCpi0inFVdis_stack_8->SetEntries(102);

   ci = 1558;
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
   hs10->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = 1559;
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
   hs10->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,5.034906);
   hCCpi0inFV_stack_10->SetBinContent(2,8.784704);
   hCCpi0inFV_stack_10->SetBinContent(3,6.257545);
   hCCpi0inFV_stack_10->SetBinContent(4,5.520237);
   hCCpi0inFV_stack_10->SetBinContent(5,3.516127);
   hCCpi0inFV_stack_10->SetBinContent(6,0.4294104);
   hCCpi0inFV_stack_10->SetBinContent(7,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(8,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(13,1.215558);
   hCCpi0inFV_stack_10->SetBinError(1,1.11017);
   hCCpi0inFV_stack_10->SetBinError(2,1.519899);
   hCCpi0inFV_stack_10->SetBinError(3,1.195099);
   hCCpi0inFV_stack_10->SetBinError(4,1.194104);
   hCCpi0inFV_stack_10->SetBinError(5,0.940871);
   hCCpi0inFV_stack_10->SetBinError(6,0.304703);
   hCCpi0inFV_stack_10->SetBinError(7,0.438694);
   hCCpi0inFV_stack_10->SetBinError(8,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(13,0.6206425);
   hCCpi0inFV_stack_10->SetEntries(137);

   ci = 1560;
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
   hs10->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,0.5901461);
   hNCinFV_stack_11->SetBinContent(2,1.523106);
   hNCinFV_stack_11->SetBinContent(3,0.4612781);
   hNCinFV_stack_11->SetBinContent(4,0.7302295);
   hNCinFV_stack_11->SetBinContent(5,0.3254665);
   hNCinFV_stack_11->SetBinContent(8,0.1702119);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.08948917);
   hNCinFV_stack_11->SetBinError(1,0.340721);
   hNCinFV_stack_11->SetBinError(2,0.6283084);
   hNCinFV_stack_11->SetBinError(3,0.3610902);
   hNCinFV_stack_11->SetBinError(4,0.3762352);
   hNCinFV_stack_11->SetBinError(5,0.2351038);
   hNCinFV_stack_11->SetBinError(8,0.1702119);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.08948916);
   hNCinFV_stack_11->SetEntries(21);

   ci = 1561;
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
   hs10->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,2.852149);
   hnumuCCinFV_stack_12->SetBinContent(2,5.252812);
   hnumuCCinFV_stack_12->SetBinContent(3,3.988095);
   hnumuCCinFV_stack_12->SetBinContent(4,1.896557);
   hnumuCCinFV_stack_12->SetBinContent(5,1.592321);
   hnumuCCinFV_stack_12->SetBinContent(6,0.8243783);
   hnumuCCinFV_stack_12->SetBinContent(7,0.283415);
   hnumuCCinFV_stack_12->SetBinContent(8,0.6300015);
   hnumuCCinFV_stack_12->SetBinContent(10,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(11,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(13,2.161561);
   hnumuCCinFV_stack_12->SetBinError(1,0.8851656);
   hnumuCCinFV_stack_12->SetBinError(2,1.224957);
   hnumuCCinFV_stack_12->SetBinError(3,1.101544);
   hnumuCCinFV_stack_12->SetBinError(4,0.9947693);
   hnumuCCinFV_stack_12->SetBinError(5,0.6824794);
   hnumuCCinFV_stack_12->SetBinError(6,0.4136279);
   hnumuCCinFV_stack_12->SetBinError(7,0.2834138);
   hnumuCCinFV_stack_12->SetBinError(8,0.3653767);
   hnumuCCinFV_stack_12->SetBinError(10,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(11,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(13,0.7905084);
   hnumuCCinFV_stack_12->SetEntries(81);

   ci = 1562;
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
   hs10->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetEntries(1);

   ci = 1563;
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
   hs10->Add(hnueCCinFV_stack_13,"");
   hs10->Draw("hist same");
   
   TH1F *hmcerror__29 = new TH1F("hmcerror__29","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__29->SetBinContent(1,24.65585);
   hmcerror__29->SetBinContent(2,45.38474);
   hmcerror__29->SetBinContent(3,41.06491);
   hmcerror__29->SetBinContent(4,26.77587);
   hmcerror__29->SetBinContent(5,18.10089);
   hmcerror__29->SetBinContent(6,9.264684);
   hmcerror__29->SetBinContent(7,3.587588);
   hmcerror__29->SetBinContent(8,4.243169);
   hmcerror__29->SetBinContent(9,1.442664);
   hmcerror__29->SetBinContent(10,1.82014);
   hmcerror__29->SetBinContent(11,1.185372);
   hmcerror__29->SetBinContent(12,0.8332376);
   hmcerror__29->SetBinContent(13,10.33068);
   hmcerror__29->SetBinError(1,18.40204);
   hmcerror__29->SetBinError(2,15.62529);
   hmcerror__29->SetBinError(3,14.49437);
   hmcerror__29->SetBinError(4,12.33238);
   hmcerror__29->SetBinError(5,9.067047);
   hmcerror__29->SetBinError(6,5.822703);
   hmcerror__29->SetBinError(7,2.932385);
   hmcerror__29->SetBinError(8,6.290164);
   hmcerror__29->SetBinError(9,1.600468);
   hmcerror__29->SetBinError(10,6.65052);
   hmcerror__29->SetBinError(11,1.106524);
   hmcerror__29->SetBinError(12,15.39838);
   hmcerror__29->SetBinError(13,7.693968);
   hmcerror__29->SetEntries(194.7283);

   ci = TColor::GetColor("#999999");
   hmcerror__29->SetFillColor(ci);
   hmcerror__29->SetFillStyle(3002);
   hmcerror__29->SetLineColor(12);
   hmcerror__29->SetLineWidth(0);
   hmcerror__29->SetMarkerColor(0);
   hmcerror__29->SetMarkerSize(0);
   hmcerror__29->GetXaxis()->SetLabelFont(42);
   hmcerror__29->GetXaxis()->SetTitleOffset(1);
   hmcerror__29->GetXaxis()->SetTitleFont(42);
   hmcerror__29->GetYaxis()->SetLabelFont(42);
   hmcerror__29->GetYaxis()->SetTitleFont(42);
   hmcerror__29->GetZaxis()->SetLabelFont(42);
   hmcerror__29->GetZaxis()->SetTitleOffset(1);
   hmcerror__29->GetZaxis()->SetTitleFont(42);
   hmcerror__29->Draw("same E2");
   
   Double_t _fx3037[12] = {
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
   Double_t _fy3037[12] = {
   28,
   44,
   36,
   20,
   13,
   5,
   7,
   4,
   0,
   1,
   2,
   0};
   Double_t _felx3037[12] = {
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
   Double_t _fely3037[12] = {
   5.4358,
   6.7671,
   6.1381,
   4.6266,
   3.77763,
   2.48995,
   2.85954,
   2.29683,
   0,
   1,
   2,
   0};
   Double_t _fehx3037[12] = {
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
   Double_t _fehy3037[12] = {
   5.2271,
   6.5623,
   5.9318,
   4.4133,
   3.5552,
   2.21064,
   2.61053,
   1.98186,
   1.1478,
   1.35971,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3037,_fy3037,_felx3037,_fehx3037,_fely3037,_fehy3037);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3037 = new TH1F("Graph_Graph3037","",100,0,1320);
   Graph_Graph3037->SetMinimum(0);
   Graph_Graph3037->SetMaximum(55.61853);
   Graph_Graph3037->SetDirectory(0);
   Graph_Graph3037->SetStats(0);
   Graph_Graph3037->SetLineWidth(2);
   Graph_Graph3037->SetMarkerStyle(20);
   Graph_Graph3037->GetXaxis()->SetNdivisions(509);
   Graph_Graph3037->GetXaxis()->SetLabelFont(132);
   Graph_Graph3037->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3037->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3037->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3037->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3037->GetXaxis()->SetTitleFont(132);
   Graph_Graph3037->GetYaxis()->SetNdivisions(509);
   Graph_Graph3037->GetYaxis()->SetLabelFont(132);
   Graph_Graph3037->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3037->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3037->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3037->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3037->GetYaxis()->SetTitleFont(132);
   Graph_Graph3037->GetZaxis()->SetLabelFont(132);
   Graph_Graph3037->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3037->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3037->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3037->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3037);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.0/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 160.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 8.4","F");

   ci = 1551;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 44.9","F");

   ci = 1552;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 3.5","F");

   ci = 1553;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 39.0","F");

   ci = 1554;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1555;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  25.0","F");

   ci = 1557;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  4.4","F");

   ci = 1558;
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

   ci = 1559;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 31.0","F");

   ci = 1560;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 4.0","F");

   ci = 1561;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 17.7","F");

   ci = 1562;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 0.2","F");

   ci = 1563;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas10->cd();
  
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
   
   Double_t _fx3038[12] = {
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
   Double_t _fy3038[12] = {
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
   Double_t _felx3038[12] = {
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
   Double_t _fely3038[12] = {
   0.746356,
   0.3442852,
   0.3529626,
   0.460578,
   0.5009173,
   0.6284838,
   0.8173696,
   1.482421,
   1.109384,
   3.653851,
   0.9334829,
   18.48018};
   Double_t _fehx3038[12] = {
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
   Double_t _fehy3038[12] = {
   0.746356,
   0.3442852,
   0.3529626,
   0.460578,
   0.5009173,
   0.6284838,
   0.8173696,
   1.482421,
   1.109384,
   3.653851,
   0.9334829,
   18.48018};
   grae = new TGraphAsymmErrors(12,_fx3038,_fy3038,_felx3038,_fehx3038,_fely3038,_fehy3038);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3038 = new TH1F("Graph_Graph3038","",100,0,1320);
   Graph_Graph3038->SetMinimum(0);
   Graph_Graph3038->SetMaximum(2);
   Graph_Graph3038->SetDirectory(0);
   Graph_Graph3038->SetStats(0);
   Graph_Graph3038->SetLineWidth(2);
   Graph_Graph3038->SetMarkerStyle(20);
   Graph_Graph3038->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3038->GetXaxis()->SetRange(1,91);
   Graph_Graph3038->GetXaxis()->SetNdivisions(509);
   Graph_Graph3038->GetXaxis()->SetLabelFont(132);
   Graph_Graph3038->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3038->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3038->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3038->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3038->GetXaxis()->SetTitleFont(132);
   Graph_Graph3038->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3038->GetYaxis()->SetNdivisions(210);
   Graph_Graph3038->GetYaxis()->SetLabelFont(132);
   Graph_Graph3038->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3038->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3038->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3038->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3038->GetYaxis()->SetTitleFont(132);
   Graph_Graph3038->GetZaxis()->SetLabelFont(132);
   Graph_Graph3038->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3038->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3038->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3038->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3038);
   
   grae->Draw("a2");
   
   Double_t _fx3039[12] = {
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
   Double_t _fy3039[12] = {
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
   Double_t _felx3039[12] = {
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
   Double_t _fely3039[12] = {
   0.2057513,
   0.2095327,
   0.2365282,
   0.2407686,
   0.2184817,
   0.2360816,
   0.3756672,
   0.351006,
   0.5416553,
   0.537076,
   0.6100377,
   0.8035893};
   Double_t _fehx3039[12] = {
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
   Double_t _fehy3039[12] = {
   0.2057513,
   0.2095327,
   0.2365282,
   0.2407686,
   0.2184817,
   0.2360816,
   0.3756672,
   0.351006,
   0.5416553,
   0.537076,
   0.6100377,
   0.8035893};
   grae = new TGraphAsymmErrors(12,_fx3039,_fy3039,_felx3039,_fehx3039,_fely3039,_fehy3039);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3039 = new TH1F("Graph_Graph3039","",100,0,1320);
   Graph_Graph3039->SetMinimum(0);
   Graph_Graph3039->SetMaximum(2);
   Graph_Graph3039->SetDirectory(0);
   Graph_Graph3039->SetStats(0);
   Graph_Graph3039->SetLineWidth(2);
   Graph_Graph3039->SetMarkerStyle(20);
   Graph_Graph3039->GetXaxis()->SetRange(1,91);
   Graph_Graph3039->GetXaxis()->SetNdivisions(509);
   Graph_Graph3039->GetXaxis()->SetLabelFont(132);
   Graph_Graph3039->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3039->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3039->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3039->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3039->GetXaxis()->SetTitleFont(132);
   Graph_Graph3039->GetYaxis()->SetNdivisions(509);
   Graph_Graph3039->GetYaxis()->SetLabelFont(132);
   Graph_Graph3039->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3039->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3039->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3039->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3039->GetYaxis()->SetTitleFont(132);
   Graph_Graph3039->GetZaxis()->SetLabelFont(132);
   Graph_Graph3039->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3039->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3039->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3039->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3039);
   
   grae->Draw("2 ");
   
   Double_t _fx3040[12] = {
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
   Double_t _fy3040[12] = {
   1.135633,
   0.969489,
   0.8766609,
   0.7469411,
   0.7181968,
   0.5396838,
   1.951172,
   0.9426917,
   0,
   0.5494084,
   1.687234,
   0};
   Double_t _felx3040[12] = {
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
   Double_t _fely3040[12] = {
   0.2204669,
   0.1491052,
   0.1494731,
   0.1727899,
   0.2086986,
   0.2687572,
   0.7970649,
   0.5413006,
   0,
   0.5494084,
   1.687234,
   0};
   Double_t _fehx3040[12] = {
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
   Double_t _fehy3040[12] = {
   0.2120024,
   0.1445927,
   0.1444494,
   0.1648238,
   0.1964103,
   0.2386093,
   0.7276561,
   0.4670707,
   0.7956115,
   0.747036,
   1.281598,
   1.377518};
   grae = new TGraphAsymmErrors(12,_fx3040,_fy3040,_felx3040,_fehx3040,_fely3040,_fehy3040);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3040 = new TH1F("Graph_Graph3040","",100,0,1320);
   Graph_Graph3040->SetMinimum(0);
   Graph_Graph3040->SetMaximum(3.265715);
   Graph_Graph3040->SetDirectory(0);
   Graph_Graph3040->SetStats(0);
   Graph_Graph3040->SetLineWidth(2);
   Graph_Graph3040->SetMarkerStyle(20);
   Graph_Graph3040->GetXaxis()->SetNdivisions(509);
   Graph_Graph3040->GetXaxis()->SetLabelFont(132);
   Graph_Graph3040->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3040->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3040->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3040->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3040->GetXaxis()->SetTitleFont(132);
   Graph_Graph3040->GetYaxis()->SetNdivisions(509);
   Graph_Graph3040->GetYaxis()->SetLabelFont(132);
   Graph_Graph3040->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3040->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3040->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3040->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3040->GetYaxis()->SetTitleFont(132);
   Graph_Graph3040->GetZaxis()->SetLabelFont(132);
   Graph_Graph3040->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3040->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3040->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3040->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3040);
   
   grae->Draw("p ");
   
   TH1F *hist__30 = new TH1F("hist__30","NCpi0BDT_theta1_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__30->SetLineColor(ci);
   hist__30->GetXaxis()->SetLabelFont(42);
   hist__30->GetXaxis()->SetTitleOffset(1);
   hist__30->GetXaxis()->SetTitleFont(42);
   hist__30->GetYaxis()->SetNdivisions(405);
   hist__30->GetYaxis()->SetLabelFont(42);
   hist__30->GetYaxis()->SetTitleFont(42);
   hist__30->GetZaxis()->SetLabelFont(42);
   hist__30->GetZaxis()->SetTitleOffset(1);
   hist__30->GetZaxis()->SetTitleFont(42);
   hist__30->Draw("axis same");
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
   canvas10->cd();
   canvas10->Modified();
   canvas10->cd();
   canvas10->SetSelected(canvas10);
}
