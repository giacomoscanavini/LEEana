#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Jan 16 04:37:11 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-14.32,1.25641,1583.491);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__16->SetBinContent(1,51.10818);
   hmc__16->SetBinContent(2,42.22878);
   hmc__16->SetBinContent(3,40.90629);
   hmc__16->SetBinContent(4,36.82388);
   hmc__16->SetBinContent(5,42.79602);
   hmc__16->SetBinContent(6,36.88448);
   hmc__16->SetBinContent(7,34.65755);
   hmc__16->SetBinContent(8,42.11666);
   hmc__16->SetBinContent(9,44.52581);
   hmc__16->SetBinContent(10,54.34486);
   hmc__16->SetBinContent(11,53.46642);
   hmc__16->SetBinContent(12,65.53957);
   hmc__16->SetBinContent(13,87.9217);
   hmc__16->SetBinContent(14,99.12875);
   hmc__16->SetBinContent(15,121.2038);
   hmc__16->SetBinContent(16,177.7827);
   hmc__16->SetBinContent(17,221.3594);
   hmc__16->SetBinContent(18,283.3798);
   hmc__16->SetBinContent(19,393.5923);
   hmc__16->SetBinContent(20,613.949);
   hmc__16->SetBinError(1,21.36745);
   hmc__16->SetBinError(2,16.57522);
   hmc__16->SetBinError(3,20.40439);
   hmc__16->SetBinError(4,15.28803);
   hmc__16->SetBinError(5,16.28409);
   hmc__16->SetBinError(6,19.19801);
   hmc__16->SetBinError(7,14.33048);
   hmc__16->SetBinError(8,17.95207);
   hmc__16->SetBinError(9,17.15207);
   hmc__16->SetBinError(10,23.2569);
   hmc__16->SetBinError(11,19.21747);
   hmc__16->SetBinError(12,25.65929);
   hmc__16->SetBinError(13,32.68286);
   hmc__16->SetBinError(14,35.36176);
   hmc__16->SetBinError(15,40.67153);
   hmc__16->SetBinError(16,57.51157);
   hmc__16->SetBinError(17,68.60935);
   hmc__16->SetBinError(18,85.99594);
   hmc__16->SetBinError(19,93.15866);
   hmc__16->SetBinError(20,151.8644);
   hmc__16->SetBinError(21,0.4673072);
   hmc__16->SetMinimum(-14.32);
   hmc__16->SetMaximum(1503.6);
   hmc__16->SetEntries(2519.262);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,-1,1);
   hs6_stack_6->SetMinimum(-1.166102e-08);
   hs6_stack_6->SetMaximum(644.6465);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.702327);
   hbadmatch_stack_1->SetBinContent(2,2.422052);
   hbadmatch_stack_1->SetBinContent(3,1.685796);
   hbadmatch_stack_1->SetBinContent(4,0.2333977);
   hbadmatch_stack_1->SetBinContent(5,1.412773);
   hbadmatch_stack_1->SetBinContent(6,2.696367);
   hbadmatch_stack_1->SetBinContent(7,0.7001932);
   hbadmatch_stack_1->SetBinContent(8,1.767168);
   hbadmatch_stack_1->SetBinContent(9,1.567676);
   hbadmatch_stack_1->SetBinContent(10,1.236252);
   hbadmatch_stack_1->SetBinContent(11,4.337646);
   hbadmatch_stack_1->SetBinContent(12,2.271334);
   hbadmatch_stack_1->SetBinContent(13,2.229572);
   hbadmatch_stack_1->SetBinContent(14,3.675776);
   hbadmatch_stack_1->SetBinContent(15,2.154967);
   hbadmatch_stack_1->SetBinContent(16,5.387237);
   hbadmatch_stack_1->SetBinContent(17,4.495488);
   hbadmatch_stack_1->SetBinContent(18,5.956277);
   hbadmatch_stack_1->SetBinContent(19,4.750196);
   hbadmatch_stack_1->SetBinContent(20,14.03162);
   hbadmatch_stack_1->SetBinError(1,0.9837823);
   hbadmatch_stack_1->SetBinError(2,2.025824);
   hbadmatch_stack_1->SetBinError(3,0.6389881);
   hbadmatch_stack_1->SetBinError(4,0.2333977);
   hbadmatch_stack_1->SetBinError(5,0.8179625);
   hbadmatch_stack_1->SetBinError(6,1.050308);
   hbadmatch_stack_1->SetBinError(7,0.4042567);
   hbadmatch_stack_1->SetBinError(8,0.7453844);
   hbadmatch_stack_1->SetBinError(9,0.7348353);
   hbadmatch_stack_1->SetBinError(10,0.6422368);
   hbadmatch_stack_1->SetBinError(11,2.145908);
   hbadmatch_stack_1->SetBinError(12,0.9024504);
   hbadmatch_stack_1->SetBinError(13,0.9970948);
   hbadmatch_stack_1->SetBinError(14,1.228559);
   hbadmatch_stack_1->SetBinError(15,0.8733886);
   hbadmatch_stack_1->SetBinError(16,1.464821);
   hbadmatch_stack_1->SetBinError(17,1.266343);
   hbadmatch_stack_1->SetBinError(18,1.509113);
   hbadmatch_stack_1->SetBinError(19,1.35347);
   hbadmatch_stack_1->SetBinError(20,2.289945);
   hbadmatch_stack_1->SetEntries(191);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,4.30927);
   houtFV_stack_4->SetBinContent(2,5.922173);
   houtFV_stack_4->SetBinContent(3,6.299917);
   houtFV_stack_4->SetBinContent(4,6.22975);
   houtFV_stack_4->SetBinContent(5,7.259916);
   houtFV_stack_4->SetBinContent(6,4.657396);
   houtFV_stack_4->SetBinContent(7,5.284623);
   houtFV_stack_4->SetBinContent(8,5.242861);
   houtFV_stack_4->SetBinContent(9,5.592672);
   houtFV_stack_4->SetBinContent(10,9.004332);
   houtFV_stack_4->SetBinContent(11,7.41556);
   houtFV_stack_4->SetBinContent(12,9.505859);
   houtFV_stack_4->SetBinContent(13,11.63183);
   houtFV_stack_4->SetBinContent(14,14.69854);
   houtFV_stack_4->SetBinContent(15,16.76939);
   houtFV_stack_4->SetBinContent(16,27.08719);
   houtFV_stack_4->SetBinContent(17,27.36288);
   houtFV_stack_4->SetBinContent(18,35.80916);
   houtFV_stack_4->SetBinContent(19,39.32497);
   houtFV_stack_4->SetBinContent(20,39.81884);
   houtFV_stack_4->SetBinError(1,1.254735);
   houtFV_stack_4->SetBinError(2,1.430235);
   houtFV_stack_4->SetBinError(3,1.422067);
   houtFV_stack_4->SetBinError(4,1.427541);
   houtFV_stack_4->SetBinError(5,1.625451);
   houtFV_stack_4->SetBinError(6,1.177365);
   houtFV_stack_4->SetBinError(7,1.269833);
   houtFV_stack_4->SetBinError(8,1.338752);
   houtFV_stack_4->SetBinError(9,1.305609);
   houtFV_stack_4->SetBinError(10,1.726107);
   houtFV_stack_4->SetBinError(11,1.619935);
   houtFV_stack_4->SetBinError(12,1.803217);
   houtFV_stack_4->SetBinError(13,1.98665);
   houtFV_stack_4->SetBinError(14,2.184635);
   houtFV_stack_4->SetBinError(15,2.37707);
   houtFV_stack_4->SetBinError(16,3.106597);
   houtFV_stack_4->SetBinError(17,2.964418);
   houtFV_stack_4->SetBinError(18,3.564077);
   houtFV_stack_4->SetBinError(19,3.750913);
   houtFV_stack_4->SetBinError(20,3.672094);
   houtFV_stack_4->SetEntries(945);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.232899);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.8103737);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3641287);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2317183);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2317183);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3886355);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4879434);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3224303);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1986157);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4548407);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6779631);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.6534564);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.934582);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.283193);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.731505);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,12.69512);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,52.21854);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7883803);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3757188);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.109789);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.08758128);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.08758128);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2646402);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2707799);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2604666);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.08108451);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2687489);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3698398);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2807146);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6380103);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7133507);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9047613);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.359956);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.790796);
   hNCpi0inFVcoh_stack_5->SetEntries(1381);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4217381);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2893277);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1324105);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9427841);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3641287);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.620747);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.298317);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.993472);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2667025);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2583545);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3815072);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.109789);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5313466);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4631267);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4873375);
   hNCpi0inFVqe_stack_6->SetEntries(143);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.68403);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.68167);
   hNCpi0inFVres_stack_7->SetBinContent(3,17.58315);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.93662);
   hNCpi0inFVres_stack_7->SetBinContent(5,18.78088);
   hNCpi0inFVres_stack_7->SetBinContent(6,16.47486);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.76418);
   hNCpi0inFVres_stack_7->SetBinContent(8,17.68374);
   hNCpi0inFVres_stack_7->SetBinContent(9,19.37069);
   hNCpi0inFVres_stack_7->SetBinContent(10,24.05919);
   hNCpi0inFVres_stack_7->SetBinContent(11,24.91949);
   hNCpi0inFVres_stack_7->SetBinContent(12,31.24685);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.53329);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.21489);
   hNCpi0inFVres_stack_7->SetBinContent(15,58.86228);
   hNCpi0inFVres_stack_7->SetBinContent(16,80.31204);
   hNCpi0inFVres_stack_7->SetBinContent(17,105.6498);
   hNCpi0inFVres_stack_7->SetBinContent(18,129.1274);
   hNCpi0inFVres_stack_7->SetBinContent(19,182.134);
   hNCpi0inFVres_stack_7->SetBinContent(20,240.2117);
   hNCpi0inFVres_stack_7->SetBinError(1,1.829644);
   hNCpi0inFVres_stack_7->SetBinError(2,1.455971);
   hNCpi0inFVres_stack_7->SetBinError(3,1.589281);
   hNCpi0inFVres_stack_7->SetBinError(4,1.55375);
   hNCpi0inFVres_stack_7->SetBinError(5,1.722106);
   hNCpi0inFVres_stack_7->SetBinError(6,1.541034);
   hNCpi0inFVres_stack_7->SetBinError(7,1.562541);
   hNCpi0inFVres_stack_7->SetBinError(8,1.516728);
   hNCpi0inFVres_stack_7->SetBinError(9,1.607789);
   hNCpi0inFVres_stack_7->SetBinError(10,1.903834);
   hNCpi0inFVres_stack_7->SetBinError(11,1.873998);
   hNCpi0inFVres_stack_7->SetBinError(12,2.08571);
   hNCpi0inFVres_stack_7->SetBinError(13,2.377718);
   hNCpi0inFVres_stack_7->SetBinError(14,2.605654);
   hNCpi0inFVres_stack_7->SetBinError(15,2.879986);
   hNCpi0inFVres_stack_7->SetBinError(16,3.477286);
   hNCpi0inFVres_stack_7->SetBinError(17,3.942254);
   hNCpi0inFVres_stack_7->SetBinError(18,4.315555);
   hNCpi0inFVres_stack_7->SetBinError(19,5.25186);
   hNCpi0inFVres_stack_7->SetBinError(20,5.963601);
   hNCpi0inFVres_stack_7->SetEntries(18867);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.482202);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.605623);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.836948);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.530822);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.861061);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.869657);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.993865);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.605623);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.225584);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.870444);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.779339);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.656311);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.153244);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.682492);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.204719);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.4303);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.32771);
   hNCpi0inFVdis_stack_8->SetBinContent(18,25.62196);
   hNCpi0inFVdis_stack_8->SetBinContent(19,34.51413);
   hNCpi0inFVdis_stack_8->SetBinContent(20,60.57978);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8485683);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7594156);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6162453);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7946103);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4828195);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4197972);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6649227);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7594156);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6706658);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7651656);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5662876);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8177176);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9432514);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8382311);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.179374);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.356729);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.693934);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.925262);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.178116);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.006194);
   hNCpi0inFVdis_stack_8->SetEntries(3612);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1324105);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.256225);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2562251);
   hNCpi0inFVmec_stack_9->SetEntries(9);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,6.388968);
   hCCpi0inFV_stack_10->SetBinContent(2,6.213589);
   hCCpi0inFV_stack_10->SetBinContent(3,5.49714);
   hCCpi0inFV_stack_10->SetBinContent(4,3.884237);
   hCCpi0inFV_stack_10->SetBinContent(5,6.430731);
   hCCpi0inFV_stack_10->SetBinContent(6,5.943054);
   hCCpi0inFV_stack_10->SetBinContent(7,3.441453);
   hCCpi0inFV_stack_10->SetBinContent(8,6.442585);
   hCCpi0inFV_stack_10->SetBinContent(9,4.58443);
   hCCpi0inFV_stack_10->SetBinContent(10,8.001871);
   hCCpi0inFV_stack_10->SetBinContent(11,8.23527);
   hCCpi0inFV_stack_10->SetBinContent(12,8.681183);
   hCCpi0inFV_stack_10->SetBinContent(13,14.79499);
   hCCpi0inFV_stack_10->SetBinContent(14,12.99045);
   hCCpi0inFV_stack_10->SetBinContent(15,16.92215);
   hCCpi0inFV_stack_10->SetBinContent(16,23.86902);
   hCCpi0inFV_stack_10->SetBinContent(17,35.71739);
   hCCpi0inFV_stack_10->SetBinContent(18,38.9664);
   hCCpi0inFV_stack_10->SetBinContent(19,64.01868);
   hCCpi0inFV_stack_10->SetBinContent(20,94.78407);
   hCCpi0inFV_stack_10->SetBinError(1,1.467828);
   hCCpi0inFV_stack_10->SetBinError(2,1.424384);
   hCCpi0inFV_stack_10->SetBinError(3,1.325459);
   hCCpi0inFV_stack_10->SetBinError(4,1.133856);
   hCCpi0inFV_stack_10->SetBinError(5,1.405254);
   hCCpi0inFV_stack_10->SetBinError(6,1.398456);
   hCCpi0inFV_stack_10->SetBinError(7,1.13558);
   hCCpi0inFV_stack_10->SetBinError(8,1.558352);
   hCCpi0inFV_stack_10->SetBinError(9,1.203766);
   hCCpi0inFV_stack_10->SetBinError(10,1.620411);
   hCCpi0inFV_stack_10->SetBinError(11,1.637134);
   hCCpi0inFV_stack_10->SetBinError(12,1.696775);
   hCCpi0inFV_stack_10->SetBinError(13,2.271315);
   hCCpi0inFV_stack_10->SetBinError(14,2.110309);
   hCCpi0inFV_stack_10->SetBinError(15,2.450786);
   hCCpi0inFV_stack_10->SetBinError(16,2.848056);
   hCCpi0inFV_stack_10->SetBinError(17,3.578584);
   hCCpi0inFV_stack_10->SetBinError(18,3.622582);
   hCCpi0inFV_stack_10->SetBinError(19,4.69565);
   hCCpi0inFV_stack_10->SetBinError(20,5.651815);
   hCCpi0inFV_stack_10->SetEntries(1222);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.67172);
   hNCinFV_stack_11->SetBinContent(2,3.863356);
   hNCinFV_stack_11->SetBinContent(3,3.438323);
   hNCinFV_stack_11->SetBinContent(4,2.929765);
   hNCinFV_stack_11->SetBinContent(5,4.117635);
   hNCinFV_stack_11->SetBinContent(6,2.079698);
   hNCinFV_stack_11->SetBinContent(7,2.48385);
   hNCinFV_stack_11->SetBinContent(8,1.146108);
   hNCinFV_stack_11->SetBinContent(9,3.863356);
   hNCinFV_stack_11->SetBinContent(10,3.204925);
   hNCinFV_stack_11->SetBinContent(11,2.950646);
   hNCinFV_stack_11->SetBinContent(12,5.476259);
   hNCinFV_stack_11->SetBinContent(13,4.096754);
   hNCinFV_stack_11->SetBinContent(14,6.368088);
   hNCinFV_stack_11->SetBinContent(15,8.001871);
   hNCinFV_stack_11->SetBinContent(16,14.11568);
   hNCinFV_stack_11->SetBinContent(17,12.75706);
   hNCinFV_stack_11->SetBinContent(18,19.93345);
   hNCinFV_stack_11->SetBinContent(19,30.18207);
   hNCinFV_stack_11->SetBinContent(20,56.95062);
   hNCinFV_stack_11->SetBinError(1,1.068299);
   hNCinFV_stack_11->SetBinError(2,1.172825);
   hNCinFV_stack_11->SetBinError(3,1.042492);
   hNCinFV_stack_11->SetBinError(4,1.075928);
   hNCinFV_stack_11->SetBinError(5,1.157628);
   hNCinFV_stack_11->SetBinError(6,0.7616831);
   hNCinFV_stack_11->SetBinError(7,0.9791741);
   hNCinFV_stack_11->SetBinError(8,0.601883);
   hNCinFV_stack_11->SetBinError(9,1.172825);
   hNCinFV_stack_11->SetBinError(10,1.016029);
   hNCinFV_stack_11->SetBinError(11,1.033311);
   hNCinFV_stack_11->SetBinError(12,1.358945);
   hNCinFV_stack_11->SetBinError(13,1.195824);
   hNCinFV_stack_11->SetBinError(14,1.498136);
   hNCinFV_stack_11->SetBinError(15,1.620411);
   hNCinFV_stack_11->SetBinError(16,2.21485);
   hNCinFV_stack_11->SetBinError(17,2.097363);
   hNCinFV_stack_11->SetBinError(18,2.720401);
   hNCinFV_stack_11->SetBinError(19,3.144416);
   hNCinFV_stack_11->SetBinError(20,4.454485);
   hNCinFV_stack_11->SetEntries(616);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,3.008327);
   hnumuCCinFV_stack_12->SetBinContent(2,2.796134);
   hnumuCCinFV_stack_12->SetBinContent(3,2.237604);
   hnumuCCinFV_stack_12->SetBinContent(4,2.058817);
   hnumuCCinFV_stack_12->SetBinContent(5,2.6682);
   hnumuCCinFV_stack_12->SetBinContent(6,2.208946);
   hnumuCCinFV_stack_12->SetBinContent(7,2.757666);
   hnumuCCinFV_stack_12->SetBinContent(8,5.608227);
   hnumuCCinFV_stack_12->SetBinContent(9,4.841537);
   hnumuCCinFV_stack_12->SetBinContent(10,4.579202);
   hnumuCCinFV_stack_12->SetBinContent(11,2.396445);
   hnumuCCinFV_stack_12->SetBinContent(12,3.146123);
   hnumuCCinFV_stack_12->SetBinContent(13,8.572172);
   hnumuCCinFV_stack_12->SetBinContent(14,7.283373);
   hnumuCCinFV_stack_12->SetBinContent(15,6.566421);
   hnumuCCinFV_stack_12->SetBinContent(16,10.3356);
   hnumuCCinFV_stack_12->SetBinContent(17,11.40289);
   hnumuCCinFV_stack_12->SetBinContent(18,17.39419);
   hnumuCCinFV_stack_12->SetBinContent(19,22.78851);
   hnumuCCinFV_stack_12->SetBinContent(20,42.9113);
   hnumuCCinFV_stack_12->SetBinError(1,0.9661489);
   hnumuCCinFV_stack_12->SetBinError(2,1.06466);
   hnumuCCinFV_stack_12->SetBinError(3,0.8782881);
   hnumuCCinFV_stack_12->SetBinError(4,0.8185668);
   hnumuCCinFV_stack_12->SetBinError(5,0.9861027);
   hnumuCCinFV_stack_12->SetBinError(6,1.270294);
   hnumuCCinFV_stack_12->SetBinError(7,1.443392);
   hnumuCCinFV_stack_12->SetBinError(8,2.442805);
   hnumuCCinFV_stack_12->SetBinError(9,1.259855);
   hnumuCCinFV_stack_12->SetBinError(10,1.461569);
   hnumuCCinFV_stack_12->SetBinError(11,1.020993);
   hnumuCCinFV_stack_12->SetBinError(12,1.057765);
   hnumuCCinFV_stack_12->SetBinError(13,1.817802);
   hnumuCCinFV_stack_12->SetBinError(14,1.742373);
   hnumuCCinFV_stack_12->SetBinError(15,1.554007);
   hnumuCCinFV_stack_12->SetBinError(16,2.50127);
   hnumuCCinFV_stack_12->SetBinError(17,2.054211);
   hnumuCCinFV_stack_12->SetBinError(18,2.580031);
   hnumuCCinFV_stack_12->SetBinError(19,2.801044);
   hnumuCCinFV_stack_12->SetBinError(20,3.923538);
   hnumuCCinFV_stack_12->SetEntries(499);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.595328);
   hnueCCinFV_stack_13->SetBinContent(2,0.4920677);
   hnueCCinFV_stack_13->SetBinContent(3,0.6739545);
   hnueCCinFV_stack_13->SetBinContent(4,1.722552);
   hnueCCinFV_stack_13->SetBinContent(6,0.5658709);
   hnueCCinFV_stack_13->SetBinContent(9,0.9919206);
   hnueCCinFV_stack_13->SetBinContent(11,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(12,0.2908368);
   hnueCCinFV_stack_13->SetBinContent(13,0.3557058);
   hnueCCinFV_stack_13->SetBinContent(14,1.470966);
   hnueCCinFV_stack_13->SetBinContent(15,1.902993);
   hnueCCinFV_stack_13->SetBinContent(16,1.335174);
   hnueCCinFV_stack_13->SetBinContent(17,0.9988798);
   hnueCCinFV_stack_13->SetBinContent(18,3.218737);
   hnueCCinFV_stack_13->SetBinContent(19,1.753865);
   hnueCCinFV_stack_13->SetBinContent(20,10.19288);
   hnueCCinFV_stack_13->SetBinError(1,0.8796341);
   hnueCCinFV_stack_13->SetBinError(2,0.348403);
   hnueCCinFV_stack_13->SetBinError(3,0.4777558);
   hnueCCinFV_stack_13->SetBinError(4,1.352274);
   hnueCCinFV_stack_13->SetBinError(6,0.5658708);
   hnueCCinFV_stack_13->SetBinError(9,0.5890672);
   hnueCCinFV_stack_13->SetBinError(11,0.2333977);
   hnueCCinFV_stack_13->SetBinError(12,0.2908368);
   hnueCCinFV_stack_13->SetBinError(13,0.3557058);
   hnueCCinFV_stack_13->SetBinError(14,0.7699044);
   hnueCCinFV_stack_13->SetBinError(15,1.685685);
   hnueCCinFV_stack_13->SetBinError(16,0.8135793);
   hnueCCinFV_stack_13->SetBinError(17,0.7304612);
   hnueCCinFV_stack_13->SetBinError(18,1.283293);
   hnueCCinFV_stack_13->SetBinError(19,0.6653199);
   hnueCCinFV_stack_13->SetBinError(20,2.253524);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__17->SetBinContent(1,51.10818);
   hmcerror__17->SetBinContent(2,42.22878);
   hmcerror__17->SetBinContent(3,40.90629);
   hmcerror__17->SetBinContent(4,36.82388);
   hmcerror__17->SetBinContent(5,42.79602);
   hmcerror__17->SetBinContent(6,36.88448);
   hmcerror__17->SetBinContent(7,34.65755);
   hmcerror__17->SetBinContent(8,42.11666);
   hmcerror__17->SetBinContent(9,44.52581);
   hmcerror__17->SetBinContent(10,54.34486);
   hmcerror__17->SetBinContent(11,53.46642);
   hmcerror__17->SetBinContent(12,65.53957);
   hmcerror__17->SetBinContent(13,87.9217);
   hmcerror__17->SetBinContent(14,99.12875);
   hmcerror__17->SetBinContent(15,121.2038);
   hmcerror__17->SetBinContent(16,177.7827);
   hmcerror__17->SetBinContent(17,221.3594);
   hmcerror__17->SetBinContent(18,283.3798);
   hmcerror__17->SetBinContent(19,393.5923);
   hmcerror__17->SetBinContent(20,613.949);
   hmcerror__17->SetBinError(1,21.36745);
   hmcerror__17->SetBinError(2,16.57522);
   hmcerror__17->SetBinError(3,20.40439);
   hmcerror__17->SetBinError(4,15.28803);
   hmcerror__17->SetBinError(5,16.28409);
   hmcerror__17->SetBinError(6,19.19801);
   hmcerror__17->SetBinError(7,14.33048);
   hmcerror__17->SetBinError(8,17.95207);
   hmcerror__17->SetBinError(9,17.15207);
   hmcerror__17->SetBinError(10,23.2569);
   hmcerror__17->SetBinError(11,19.21747);
   hmcerror__17->SetBinError(12,25.65929);
   hmcerror__17->SetBinError(13,32.68286);
   hmcerror__17->SetBinError(14,35.36176);
   hmcerror__17->SetBinError(15,40.67153);
   hmcerror__17->SetBinError(16,57.51157);
   hmcerror__17->SetBinError(17,68.60935);
   hmcerror__17->SetBinError(18,85.99594);
   hmcerror__17->SetBinError(19,93.15866);
   hmcerror__17->SetBinError(20,151.8644);
   hmcerror__17->SetBinError(21,0.4673072);
   hmcerror__17->SetEntries(2519.262);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
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
   Double_t _fy3021[20] = {
   40,
   60,
   35,
   32,
   40,
   46,
   33,
   42,
   43,
   52,
   66,
   77,
   93,
   118,
   139,
   171,
   221,
   305,
   439,
   716};
   Double_t _felx3021[20] = {
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
   Double_t _fely3021[20] = {
   6.4604,
   7.8743,
   6.0548,
   5.7977,
   6.4604,
   6.9153,
   5.8847,
   6.6155,
   6.6917,
   7.3419,
   8.2509,
   8.8995,
   9.7658,
   10.86278,
   11.78983,
   13.0767,
   14.86607,
   17.46425,
   20.95233,
   26.75818};
   Double_t _fehx3021[20] = {
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
   Double_t _fehy3021[20] = {
   6.2549,
   7.6713,
   5.8483,
   5.5904,
   6.2549,
   6.7108,
   5.6776,
   6.4104,
   6.4868,
   7.1381,
   8.0483,
   8.6976,
   9.564,
   10.86278,
   11.78983,
   13.0767,
   14.86607,
   17.46425,
   20.95233,
   26.75818};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(23.58207);
   Graph_Graph3021->SetMaximum(814.4138);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.09#pm0.25","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2768.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 65.7","F");

   ci = 1499;
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

   ci = 1500;
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

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 289.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  84.5","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1122.2","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  212.8","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 375.8","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 191.6","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 165.6","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 27.8","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[20] = {
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
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
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
   Double_t _fely3022[20] = {
   0.4180828,
   0.3925099,
   0.4988082,
   0.4151661,
   0.3805047,
   0.52049,
   0.4134878,
   0.4262462,
   0.3852163,
   0.4279503,
   0.3594308,
   0.3915083,
   0.3717268,
   0.3567256,
   0.3355632,
   0.3234936,
   0.3099455,
   0.3034653,
   0.2366882,
   0.2473567};
   Double_t _fehx3022[20] = {
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
   Double_t _fehy3022[20] = {
   0.4180828,
   0.3925099,
   0.4988082,
   0.4151661,
   0.3805047,
   0.52049,
   0.4134878,
   0.4262462,
   0.3852163,
   0.4279503,
   0.3594308,
   0.3915083,
   0.3717268,
   0.3567256,
   0.3355632,
   0.3234936,
   0.3099455,
   0.3034653,
   0.2366882,
   0.2473567};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
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
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
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
   Double_t _fely3023[20] = {
   0.2295017,
   0.2271156,
   0.2268598,
   0.2544917,
   0.2319866,
   0.2377302,
   0.2613313,
   0.24296,
   0.2425219,
   0.2377126,
   0.250859,
   0.2634836,
   0.2711375,
   0.2631912,
   0.2798599,
   0.2566448,
   0.2589435,
   0.2287131,
   0.2108633,
   0.2222839};
   Double_t _fehx3023[20] = {
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
   Double_t _fehy3023[20] = {
   0.2295017,
   0.2271156,
   0.2268598,
   0.2544917,
   0.2319866,
   0.2377302,
   0.2613313,
   0.24296,
   0.2425219,
   0.2377126,
   0.250859,
   0.2634836,
   0.2711375,
   0.2631912,
   0.2798599,
   0.2566448,
   0.2589435,
   0.2287131,
   0.2108633,
   0.2222839};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
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
   Double_t _fy3024[20] = {
   0.7826536,
   1.420832,
   0.8556142,
   0.8690012,
   0.9346663,
   1.247137,
   0.9521734,
   0.99723,
   0.965732,
   0.9568523,
   1.23442,
   1.174863,
   1.057759,
   1.190371,
   1.146829,
   0.9618483,
   0.9983764,
   1.076294,
   1.115367,
   1.166221};
   Double_t _felx3024[20] = {
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
   Double_t _fely3024[20] = {
   0.1264064,
   0.1864676,
   0.1480164,
   0.157444,
   0.150958,
   0.1874853,
   0.1697956,
   0.1570756,
   0.1502881,
   0.1350983,
   0.1543193,
   0.1357882,
   0.1110738,
   0.1095825,
   0.09727278,
   0.07355438,
   0.06715806,
   0.06162841,
   0.05323358,
   0.04358371};
   Double_t _fehx3024[20] = {
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
   Double_t _fehy3024[20] = {
   0.1223855,
   0.1816605,
   0.1429682,
   0.1518145,
   0.1461561,
   0.181941,
   0.16382,
   0.1522058,
   0.1456863,
   0.1313482,
   0.15053,
   0.1327076,
   0.1087786,
   0.1095825,
   0.09727278,
   0.07355438,
   0.06715806,
   0.06162841,
   0.05323358,
   0.04358371};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.5616227);
   Graph_Graph3024->SetMaximum(1.697117);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_6_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
