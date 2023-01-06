#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 20:33:12 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
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
   pad1->Range(-1.307692,-4.449914,1.25641,492.0668);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__19->SetBinContent(1,42.34082);
   hmc__19->SetBinContent(2,47.45278);
   hmc__19->SetBinContent(3,42.64737);
   hmc__19->SetBinContent(4,45.48559);
   hmc__19->SetBinContent(5,46.09533);
   hmc__19->SetBinContent(6,48.0536);
   hmc__19->SetBinContent(7,54.98617);
   hmc__19->SetBinContent(8,60.49522);
   hmc__19->SetBinContent(9,68.65196);
   hmc__19->SetBinContent(10,65.01797);
   hmc__19->SetBinContent(11,73.40082);
   hmc__19->SetBinContent(12,77.46364);
   hmc__19->SetBinContent(13,83.33395);
   hmc__19->SetBinContent(14,87.67836);
   hmc__19->SetBinContent(15,107.7152);
   hmc__19->SetBinContent(16,110.9978);
   hmc__19->SetBinContent(17,133.8531);
   hmc__19->SetBinContent(18,149.8301);
   hmc__19->SetBinContent(19,192.7139);
   hmc__19->SetBinContent(20,222.4957);
   hmc__19->SetBinError(1,13.41302);
   hmc__19->SetBinError(2,14.06813);
   hmc__19->SetBinError(3,12.55081);
   hmc__19->SetBinError(4,11.54313);
   hmc__19->SetBinError(5,12.97964);
   hmc__19->SetBinError(6,12.8563);
   hmc__19->SetBinError(7,15.41113);
   hmc__19->SetBinError(8,15.83633);
   hmc__19->SetBinError(9,19.61167);
   hmc__19->SetBinError(10,19.27307);
   hmc__19->SetBinError(11,20.42443);
   hmc__19->SetBinError(12,22.59611);
   hmc__19->SetBinError(13,23.33026);
   hmc__19->SetBinError(14,24.50016);
   hmc__19->SetBinError(15,29.39539);
   hmc__19->SetBinError(16,30.12967);
   hmc__19->SetBinError(17,35.26985);
   hmc__19->SetBinError(18,36.12216);
   hmc__19->SetBinError(19,40.96908);
   hmc__19->SetBinError(20,45.92887);
   hmc__19->SetBinError(21,0.3895343);
   hmc__19->SetMinimum(-4.449914);
   hmc__19->SetMaximum(467.2409);
   hmc__19->SetEntries(1759.741);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,-1,1);
   hs7_stack_7->SetMinimum(-1.427841e-08);
   hs7_stack_7->SetMaximum(233.6205);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(2,0.5514106);
   hbadmatch_stack_1->SetBinContent(3,0.4303902);
   hbadmatch_stack_1->SetBinContent(5,0.6803553);
   hbadmatch_stack_1->SetBinContent(6,0.9622263);
   hbadmatch_stack_1->SetBinContent(8,0.6417511);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.4966776);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.5867651);
   hbadmatch_stack_1->SetBinContent(13,0.5884556);
   hbadmatch_stack_1->SetBinContent(14,0.7319179);
   hbadmatch_stack_1->SetBinContent(15,0.7336084);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,1.172266);
   hbadmatch_stack_1->SetBinContent(18,0.3402067);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(20,0.7336084);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.400425);
   hbadmatch_stack_1->SetBinError(3,0.3054519);
   hbadmatch_stack_1->SetBinError(5,0.4810838);
   hbadmatch_stack_1->SetBinError(6,0.4955943);
   hbadmatch_stack_1->SetBinError(8,0.3729033);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.4966776);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.3387718);
   hbadmatch_stack_1->SetBinError(13,0.3397478);
   hbadmatch_stack_1->SetBinError(14,0.438694);
   hbadmatch_stack_1->SetBinError(15,0.4394482);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.5388393);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(20,0.4394482);
   hbadmatch_stack_1->SetEntries(43);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,0.3243973);
   hext_stack_2->SetBinContent(2,0.973192);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,2.890854);
   hext_stack_2->SetBinContent(6,0.3243973);
   hext_stack_2->SetBinContent(7,1.137595);
   hext_stack_2->SetBinContent(8,0.3243973);
   hext_stack_2->SetBinContent(9,2.566457);
   hext_stack_2->SetBinContent(10,0.6416141);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(18,0.973192);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(1,0.3243973);
   hext_stack_2->SetBinError(2,0.5618727);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,1.323597);
   hext_stack_2->SetBinError(6,0.3243973);
   hext_stack_2->SetBinError(7,0.6602113);
   hext_stack_2->SetBinError(8,0.3243973);
   hext_stack_2->SetBinError(9,1.283228);
   hext_stack_2->SetBinError(10,0.6416141);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(18,0.5618727);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetEntries(30);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(2,0.1967154);
   houtFV_stack_4->SetBinContent(11,0.1950248);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(14,0.1950248);
   houtFV_stack_4->SetBinContent(15,0.2552519);
   houtFV_stack_4->SetBinContent(16,0.1950248);
   houtFV_stack_4->SetBinContent(17,0.1950248);
   houtFV_stack_4->SetBinContent(18,0.6803553);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.8753801);
   houtFV_stack_4->SetBinError(2,0.1967154);
   houtFV_stack_4->SetBinError(11,0.1950249);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(14,0.1950249);
   houtFV_stack_4->SetBinError(15,0.255252);
   houtFV_stack_4->SetBinError(16,0.1950249);
   houtFV_stack_4->SetBinError(17,0.1950249);
   houtFV_stack_4->SetBinError(18,0.4810838);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(20,0.5191111);
   houtFV_stack_4->SetEntries(13);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1300583);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1058996);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.7977345);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.9264843);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.9008616);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.5807972);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.5079998);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.16053);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.520901);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.044751);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.8558921);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.7496872);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.9031996);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.754123);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.166547);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.070482);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.821802);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.878328);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.521384);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.577307);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.089522);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.599266);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2786367);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3344631);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2899172);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1956638);
   hNCpi0inFVres_stack_7->SetBinError(5,0.1768228);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3067174);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5385669);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3801022);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2230838);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2359428);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2701479);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5318134);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5523257);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2622455);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4512529);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6108035);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5090656);
   hNCpi0inFVres_stack_7->SetBinError(18,0.764755);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8166479);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9628436);
   hNCpi0inFVres_stack_7->SetEntries(660);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.3301058);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.102094);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.6827356);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5851135);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3280621);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.2666702);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6768324);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5206738);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.7172093);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.019501);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.3953749);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.232314);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.109058);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.062344);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.648948);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.25721);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.204382);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.466558);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.575382);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.956709);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1518226);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4117477);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2598845);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2445871);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1438104);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1122545);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.231595);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2300451);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2322775);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.40135);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1495912);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4753506);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3266422);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3376432);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4902836);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3916113);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4016786);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6311993);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9646311);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.003716);
   hNCpi0inFVdis_stack_8->SetEntries(528);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,37.42233);
   hCCpi0inFV_stack_10->SetBinContent(2,40.06935);
   hCCpi0inFV_stack_10->SetBinContent(3,35.50431);
   hCCpi0inFV_stack_10->SetBinContent(4,36.94315);
   hCCpi0inFV_stack_10->SetBinContent(5,40.10772);
   hCCpi0inFV_stack_10->SetBinContent(6,40.52932);
   hCCpi0inFV_stack_10->SetBinContent(7,46.67815);
   hCCpi0inFV_stack_10->SetBinContent(8,50.35705);
   hCCpi0inFV_stack_10->SetBinContent(9,57.24588);
   hCCpi0inFV_stack_10->SetBinContent(10,52.10173);
   hCCpi0inFV_stack_10->SetBinContent(11,60.05602);
   hCCpi0inFV_stack_10->SetBinContent(12,61.60458);
   hCCpi0inFV_stack_10->SetBinContent(13,71.6123);
   hCCpi0inFV_stack_10->SetBinContent(14,70.97389);
   hCCpi0inFV_stack_10->SetBinContent(15,87.29986);
   hCCpi0inFV_stack_10->SetBinContent(16,93.25256);
   hCCpi0inFV_stack_10->SetBinContent(17,109.7569);
   hCCpi0inFV_stack_10->SetBinContent(18,119.8235);
   hCCpi0inFV_stack_10->SetBinContent(19,153.1734);
   hCCpi0inFV_stack_10->SetBinContent(20,173.7849);
   hCCpi0inFV_stack_10->SetBinError(1,3.075268);
   hCCpi0inFV_stack_10->SetBinError(2,3.18728);
   hCCpi0inFV_stack_10->SetBinError(3,3.010012);
   hCCpi0inFV_stack_10->SetBinError(4,3.098822);
   hCCpi0inFV_stack_10->SetBinError(5,3.167037);
   hCCpi0inFV_stack_10->SetBinError(6,3.131844);
   hCCpi0inFV_stack_10->SetBinError(7,3.390617);
   hCCpi0inFV_stack_10->SetBinError(8,3.548029);
   hCCpi0inFV_stack_10->SetBinError(9,3.797316);
   hCCpi0inFV_stack_10->SetBinError(10,3.567512);
   hCCpi0inFV_stack_10->SetBinError(11,3.819429);
   hCCpi0inFV_stack_10->SetBinError(12,3.936188);
   hCCpi0inFV_stack_10->SetBinError(13,4.25688);
   hCCpi0inFV_stack_10->SetBinError(14,4.194351);
   hCCpi0inFV_stack_10->SetBinError(15,4.725164);
   hCCpi0inFV_stack_10->SetBinError(16,4.808255);
   hCCpi0inFV_stack_10->SetBinError(17,5.309434);
   hCCpi0inFV_stack_10->SetBinError(18,5.518344);
   hCCpi0inFV_stack_10->SetBinError(19,6.273083);
   hCCpi0inFV_stack_10->SetBinError(20,6.635529);
   hCCpi0inFV_stack_10->SetEntries(6147);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3917402);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,1.072095);
   hNCinFV_stack_11->SetBinContent(12,0.536893);
   hNCinFV_stack_11->SetBinContent(13,0.5352025);
   hNCinFV_stack_11->SetBinContent(14,1.072095);
   hNCinFV_stack_11->SetBinContent(15,0.1950248);
   hNCinFV_stack_11->SetBinContent(16,0.5901461);
   hNCinFV_stack_11->SetBinContent(17,1.17353);
   hNCinFV_stack_11->SetBinContent(18,1.805704);
   hNCinFV_stack_11->SetBinContent(19,5.080315);
   hNCinFV_stack_11->SetBinContent(20,2.929362);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2770047);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.5551335);
   hNCinFV_stack_11->SetBinError(12,0.3929602);
   hNCinFV_stack_11->SetBinError(13,0.3921167);
   hNCinFV_stack_11->SetBinError(14,0.5551335);
   hNCinFV_stack_11->SetBinError(15,0.1950249);
   hNCinFV_stack_11->SetBinError(16,0.340721);
   hNCinFV_stack_11->SetBinError(17,0.4790957);
   hNCinFV_stack_11->SetBinError(18,0.7080169);
   hNCinFV_stack_11->SetBinError(19,1.178757);
   hNCinFV_stack_11->SetBinError(20,0.8777653);
   hNCinFV_stack_11->SetEntries(73);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.929362);
   hnumuCCinFV_stack_12->SetBinContent(2,3.111735);
   hnumuCCinFV_stack_12->SetBinContent(3,4.804673);
   hnumuCCinFV_stack_12->SetBinContent(4,3.752069);
   hnumuCCinFV_stack_12->SetBinContent(5,4.079456);
   hnumuCCinFV_stack_12->SetBinContent(6,4.470277);
   hnumuCCinFV_stack_12->SetBinContent(7,4.77766);
   hnumuCCinFV_stack_12->SetBinContent(8,6.874682);
   hnumuCCinFV_stack_12->SetBinContent(9,6.72963);
   hnumuCCinFV_stack_12->SetBinContent(10,9.812054);
   hnumuCCinFV_stack_12->SetBinContent(11,9.917816);
   hnumuCCinFV_stack_12->SetBinContent(12,11.00219);
   hnumuCCinFV_stack_12->SetBinContent(13,6.997984);
   hnumuCCinFV_stack_12->SetBinContent(14,12.23242);
   hnumuCCinFV_stack_12->SetBinContent(15,15.35408);
   hnumuCCinFV_stack_12->SetBinContent(16,11.7009);
   hnumuCCinFV_stack_12->SetBinContent(17,16.8297);
   hnumuCCinFV_stack_12->SetBinContent(18,18.62809);
   hnumuCCinFV_stack_12->SetBinContent(19,24.0054);
   hnumuCCinFV_stack_12->SetBinContent(20,30.15355);
   hnumuCCinFV_stack_12->SetBinError(1,0.8777653);
   hnumuCCinFV_stack_12->SetBinError(2,0.8448572);
   hnumuCCinFV_stack_12->SetBinError(3,1.210999);
   hnumuCCinFV_stack_12->SetBinError(4,1.01298);
   hnumuCCinFV_stack_12->SetBinError(5,1.138226);
   hnumuCCinFV_stack_12->SetBinError(6,1.09559);
   hnumuCCinFV_stack_12->SetBinError(7,1.135994);
   hnumuCCinFV_stack_12->SetBinError(8,1.303316);
   hnumuCCinFV_stack_12->SetBinError(9,1.34296);
   hnumuCCinFV_stack_12->SetBinError(10,1.977389);
   hnumuCCinFV_stack_12->SetBinError(11,1.608468);
   hnumuCCinFV_stack_12->SetBinError(12,1.72375);
   hnumuCCinFV_stack_12->SetBinError(13,1.266467);
   hnumuCCinFV_stack_12->SetBinError(14,1.776426);
   hnumuCCinFV_stack_12->SetBinError(15,2.116621);
   hnumuCCinFV_stack_12->SetBinError(16,1.718179);
   hnumuCCinFV_stack_12->SetBinError(17,2.099863);
   hnumuCCinFV_stack_12->SetBinError(18,2.246907);
   hnumuCCinFV_stack_12->SetBinError(19,2.504224);
   hnumuCCinFV_stack_12->SetBinError(20,2.738673);
   hnumuCCinFV_stack_12->SetEntries(885);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(18,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.7319179);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.4800908);
   hnueCCinFV_stack_13->SetBinError(18,0.3921167);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.438694);
   hnueCCinFV_stack_13->SetEntries(16);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__20->SetBinContent(1,42.34082);
   hmcerror__20->SetBinContent(2,47.45278);
   hmcerror__20->SetBinContent(3,42.64737);
   hmcerror__20->SetBinContent(4,45.48559);
   hmcerror__20->SetBinContent(5,46.09533);
   hmcerror__20->SetBinContent(6,48.0536);
   hmcerror__20->SetBinContent(7,54.98617);
   hmcerror__20->SetBinContent(8,60.49522);
   hmcerror__20->SetBinContent(9,68.65196);
   hmcerror__20->SetBinContent(10,65.01797);
   hmcerror__20->SetBinContent(11,73.40082);
   hmcerror__20->SetBinContent(12,77.46364);
   hmcerror__20->SetBinContent(13,83.33395);
   hmcerror__20->SetBinContent(14,87.67836);
   hmcerror__20->SetBinContent(15,107.7152);
   hmcerror__20->SetBinContent(16,110.9978);
   hmcerror__20->SetBinContent(17,133.8531);
   hmcerror__20->SetBinContent(18,149.8301);
   hmcerror__20->SetBinContent(19,192.7139);
   hmcerror__20->SetBinContent(20,222.4957);
   hmcerror__20->SetBinError(1,13.41302);
   hmcerror__20->SetBinError(2,14.06813);
   hmcerror__20->SetBinError(3,12.55081);
   hmcerror__20->SetBinError(4,11.54313);
   hmcerror__20->SetBinError(5,12.97964);
   hmcerror__20->SetBinError(6,12.8563);
   hmcerror__20->SetBinError(7,15.41113);
   hmcerror__20->SetBinError(8,15.83633);
   hmcerror__20->SetBinError(9,19.61167);
   hmcerror__20->SetBinError(10,19.27307);
   hmcerror__20->SetBinError(11,20.42443);
   hmcerror__20->SetBinError(12,22.59611);
   hmcerror__20->SetBinError(13,23.33026);
   hmcerror__20->SetBinError(14,24.50016);
   hmcerror__20->SetBinError(15,29.39539);
   hmcerror__20->SetBinError(16,30.12967);
   hmcerror__20->SetBinError(17,35.26985);
   hmcerror__20->SetBinError(18,36.12216);
   hmcerror__20->SetBinError(19,40.96908);
   hmcerror__20->SetBinError(20,45.92887);
   hmcerror__20->SetBinError(21,0.3895343);
   hmcerror__20->SetEntries(1759.741);

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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3025[20] = {
   33,
   27,
   29,
   34,
   46,
   36,
   41,
   57,
   44,
   49,
   66,
   65,
   85,
   83,
   83,
   89,
   127,
   144,
   188,
   213};
   Double_t _felx3025[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3025[20] = {
   5.8847,
   5.3414,
   5.5285,
   5.9703,
   6.9153,
   6.1381,
   6.5384,
   7.679,
   6.7671,
   7.1318,
   8.2509,
   8.1893,
   9.3428,
   9.234,
   9.234,
   9.5566,
   11.26943,
   12,
   13.71131,
   14.59452};
   Double_t _fehx3025[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3025[20] = {
   5.6776,
   5.1322,
   5.3201,
   5.7635,
   6.7108,
   5.9318,
   6.3331,
   7.4757,
   6.5623,
   6.9277,
   8.0483,
   7.9866,
   9.1411,
   9.0323,
   9.0323,
   9.3552,
   11.26943,
   12,
   13.71131,
   14.59452};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(1.065008);
   Graph_Graph3025->SetMaximum(248.1881);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1539.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 13.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 3.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  30.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1438.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 17.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.1","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3026[20] = {
   0.3167869,
   0.2964658,
   0.2942928,
   0.2537755,
   0.2815826,
   0.2675409,
   0.2802728,
   0.2617782,
   0.2856681,
   0.2964267,
   0.2782589,
   0.2916996,
   0.2799611,
   0.2794322,
   0.2728993,
   0.2714438,
   0.2634966,
   0.2410874,
   0.2125902,
   0.2064259};
   Double_t _fehx3026[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3026[20] = {
   0.3167869,
   0.2964658,
   0.2942928,
   0.2537755,
   0.2815826,
   0.2675409,
   0.2802728,
   0.2617782,
   0.2856681,
   0.2964267,
   0.2782589,
   0.2916996,
   0.2799611,
   0.2794322,
   0.2728993,
   0.2714438,
   0.2634966,
   0.2410874,
   0.2125902,
   0.2064259};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3027[20] = {
   0.3167869,
   0.2964658,
   0.2942928,
   0.2537755,
   0.2815826,
   0.2675409,
   0.2802728,
   0.2617782,
   0.2856681,
   0.2964267,
   0.2782589,
   0.2916996,
   0.2799611,
   0.2794322,
   0.2728993,
   0.2714438,
   0.2634966,
   0.2410874,
   0.2125902,
   0.2064259};
   Double_t _fehx3027[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3027[20] = {
   0.3167869,
   0.2964658,
   0.2942928,
   0.2537755,
   0.2815826,
   0.2675409,
   0.2802728,
   0.2617782,
   0.2856681,
   0.2964267,
   0.2782589,
   0.2916996,
   0.2799611,
   0.2794322,
   0.2728993,
   0.2714438,
   0.2634966,
   0.2410874,
   0.2125902,
   0.2064259};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3028[20] = {
   0.7793897,
   0.5689867,
   0.6799951,
   0.7474894,
   0.9979318,
   0.7491635,
   0.7456421,
   0.9422232,
   0.6409139,
   0.7536377,
   0.8991725,
   0.8391034,
   1.019992,
   0.9466418,
   0.7705506,
   0.8018175,
   0.948801,
   0.9610883,
   0.9755393,
   0.957322};
   Double_t _felx3028[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3028[20] = {
   0.1389841,
   0.1125624,
   0.1296329,
   0.1312569,
   0.1500217,
   0.1277345,
   0.1189099,
   0.1269356,
   0.09857111,
   0.1096897,
   0.1124088,
   0.105718,
   0.1121128,
   0.1053168,
   0.08572608,
   0.08609718,
   0.08419247,
   0.0800907,
   0.07114852,
   0.06559462};
   Double_t _fehx3028[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3028[20] = {
   0.1340928,
   0.1081538,
   0.1247463,
   0.1267105,
   0.1455852,
   0.1234413,
   0.1151762,
   0.1235751,
   0.09558795,
   0.1065505,
   0.1096486,
   0.1031013,
   0.1096924,
   0.1030163,
   0.08385355,
   0.08428273,
   0.08419247,
   0.0800907,
   0.07114852,
   0.06559462};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0.387715);
   Graph_Graph3028->SetMaximum(1.212226);
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
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
