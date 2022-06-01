#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue May 31 16:56:48 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-27.69231,-5.98,203.0769,629.7884);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hmc__1->SetBinContent(1,45.53082);
   hmc__1->SetBinContent(2,150.8154);
   hmc__1->SetBinContent(3,219.0597);
   hmc__1->SetBinContent(4,270.2716);
   hmc__1->SetBinContent(5,280.389);
   hmc__1->SetBinContent(6,282.5389);
   hmc__1->SetBinContent(7,262.7814);
   hmc__1->SetBinContent(8,252.0369);
   hmc__1->SetBinContent(9,236.9092);
   hmc__1->SetBinContent(10,215.6487);
   hmc__1->SetBinContent(11,185.3158);
   hmc__1->SetBinContent(12,182.787);
   hmc__1->SetBinContent(13,158.0933);
   hmc__1->SetBinContent(14,136.5018);
   hmc__1->SetBinContent(15,145.7502);
   hmc__1->SetBinContent(16,131.5174);
   hmc__1->SetBinContent(17,115.3301);
   hmc__1->SetBinContent(18,111.9734);
   hmc__1->SetBinContent(19,103.8321);
   hmc__1->SetBinContent(20,108.2888);
   hmc__1->SetBinContent(21,90.26162);
   hmc__1->SetBinContent(22,73.63631);
   hmc__1->SetBinContent(23,44.92445);
   hmc__1->SetBinContent(24,16.80724);
   hmc__1->SetBinError(1,11.23268);
   hmc__1->SetBinError(2,29.85204);
   hmc__1->SetBinError(3,45.62291);
   hmc__1->SetBinError(4,53.46103);
   hmc__1->SetBinError(5,58.02291);
   hmc__1->SetBinError(6,57.19701);
   hmc__1->SetBinError(7,55.71012);
   hmc__1->SetBinError(8,52.13928);
   hmc__1->SetBinError(9,50.06289);
   hmc__1->SetBinError(10,45.2347);
   hmc__1->SetBinError(11,41.68811);
   hmc__1->SetBinError(12,36.96372);
   hmc__1->SetBinError(13,30.80224);
   hmc__1->SetBinError(14,28.56867);
   hmc__1->SetBinError(15,31.89241);
   hmc__1->SetBinError(16,27.0294);
   hmc__1->SetBinError(17,25.50836);
   hmc__1->SetBinError(18,25.36391);
   hmc__1->SetBinError(19,21.89163);
   hmc__1->SetBinError(20,22.53546);
   hmc__1->SetBinError(21,17.66722);
   hmc__1->SetBinError(22,15.20261);
   hmc__1->SetBinError(23,10.45494);
   hmc__1->SetBinError(24,5.666683);
   hmc__1->SetBinError(25,0.4212968);
   hmc__1->SetMinimum(-5.98);
   hmc__1->SetMaximum(598);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,180);
   hs1_stack_1->SetMinimum(-1.479728e-08);
   hs1_stack_1->SetMaximum(296.6658);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,3.22718);
   hbadmatch_stack_1->SetBinContent(3,6.228226);
   hbadmatch_stack_1->SetBinContent(4,5.775495);
   hbadmatch_stack_1->SetBinContent(5,8.926287);
   hbadmatch_stack_1->SetBinContent(6,6.868219);
   hbadmatch_stack_1->SetBinContent(7,4.931951);
   hbadmatch_stack_1->SetBinContent(8,6.807167);
   hbadmatch_stack_1->SetBinContent(9,8.096498);
   hbadmatch_stack_1->SetBinContent(10,4.614903);
   hbadmatch_stack_1->SetBinContent(11,6.062312);
   hbadmatch_stack_1->SetBinContent(12,3.564706);
   hbadmatch_stack_1->SetBinContent(13,4.219186);
   hbadmatch_stack_1->SetBinContent(14,2.105975);
   hbadmatch_stack_1->SetBinContent(15,3.328119);
   hbadmatch_stack_1->SetBinContent(16,5.806737);
   hbadmatch_stack_1->SetBinContent(17,2.437185);
   hbadmatch_stack_1->SetBinContent(18,3.223149);
   hbadmatch_stack_1->SetBinContent(19,3.887036);
   hbadmatch_stack_1->SetBinContent(20,2.92582);
   hbadmatch_stack_1->SetBinContent(21,1.291036);
   hbadmatch_stack_1->SetBinContent(22,1.968354);
   hbadmatch_stack_1->SetBinContent(23,2.461105);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.8901112);
   hbadmatch_stack_1->SetBinError(3,1.320343);
   hbadmatch_stack_1->SetBinError(4,1.231847);
   hbadmatch_stack_1->SetBinError(5,1.753702);
   hbadmatch_stack_1->SetBinError(6,1.401088);
   hbadmatch_stack_1->SetBinError(7,1.152523);
   hbadmatch_stack_1->SetBinError(8,1.374469);
   hbadmatch_stack_1->SetBinError(9,2.092116);
   hbadmatch_stack_1->SetBinError(10,1.18517);
   hbadmatch_stack_1->SetBinError(11,1.284206);
   hbadmatch_stack_1->SetBinError(12,0.9520441);
   hbadmatch_stack_1->SetBinError(13,1.094152);
   hbadmatch_stack_1->SetBinError(14,0.7239852);
   hbadmatch_stack_1->SetBinError(15,1.055424);
   hbadmatch_stack_1->SetBinError(16,2.000895);
   hbadmatch_stack_1->SetBinError(17,0.7992952);
   hbadmatch_stack_1->SetBinError(18,0.9722815);
   hbadmatch_stack_1->SetBinError(19,1.080962);
   hbadmatch_stack_1->SetBinError(20,0.8807393);
   hbadmatch_stack_1->SetBinError(21,0.5317264);
   hbadmatch_stack_1->SetBinError(22,0.8800236);
   hbadmatch_stack_1->SetBinError(23,1.121656);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,4.296596);
   hext_stack_2->SetBinContent(2,17.55985);
   hext_stack_2->SetBinContent(3,19.4428);
   hext_stack_2->SetBinContent(4,28.56668);
   hext_stack_2->SetBinContent(5,28.96169);
   hext_stack_2->SetBinContent(6,29.25415);
   hext_stack_2->SetBinContent(7,26.90117);
   hext_stack_2->SetBinContent(8,29.5989);
   hext_stack_2->SetBinContent(9,30.1699);
   hext_stack_2->SetBinContent(10,29.83555);
   hext_stack_2->SetBinContent(11,20.20693);
   hext_stack_2->SetBinContent(12,34.15086);
   hext_stack_2->SetBinContent(13,35.1803);
   hext_stack_2->SetBinContent(14,21.2942);
   hext_stack_2->SetBinContent(15,24.15753);
   hext_stack_2->SetBinContent(16,21.89676);
   hext_stack_2->SetBinContent(17,14.7512);
   hext_stack_2->SetBinContent(18,12.07382);
   hext_stack_2->SetBinContent(19,10.55116);
   hext_stack_2->SetBinContent(20,13.46955);
   hext_stack_2->SetBinContent(21,13.55893);
   hext_stack_2->SetBinContent(22,6.952434);
   hext_stack_2->SetBinContent(23,2.103607);
   hext_stack_2->SetBinContent(24,2.510206);
   hext_stack_2->SetBinError(1,1.328326);
   hext_stack_2->SetBinError(2,2.809414);
   hext_stack_2->SetBinError(3,2.863012);
   hext_stack_2->SetBinError(4,3.589168);
   hext_stack_2->SetBinError(5,3.62126);
   hext_stack_2->SetBinError(6,3.427865);
   hext_stack_2->SetBinError(7,3.309613);
   hext_stack_2->SetBinError(8,3.659245);
   hext_stack_2->SetBinError(9,3.69805);
   hext_stack_2->SetBinError(10,3.756044);
   hext_stack_2->SetBinError(11,2.792438);
   hext_stack_2->SetBinError(12,4.11527);
   hext_stack_2->SetBinError(13,4.2166);
   hext_stack_2->SetBinError(14,3.312463);
   hext_stack_2->SetBinError(15,3.375047);
   hext_stack_2->SetBinError(16,2.964182);
   hext_stack_2->SetBinError(17,2.490178);
   hext_stack_2->SetBinError(18,2.301962);
   hext_stack_2->SetBinError(19,2.023419);
   hext_stack_2->SetBinError(20,2.67946);
   hext_stack_2->SetBinError(21,2.652998);
   hext_stack_2->SetBinError(22,1.808318);
   hext_stack_2->SetBinError(23,0.9761052);
   hext_stack_2->SetBinError(24,1.057404);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.42892);
   hdirt_stack_3->SetBinContent(3,1.866567);
   hdirt_stack_3->SetBinContent(4,3.817883);
   hdirt_stack_3->SetBinContent(5,2.180258);
   hdirt_stack_3->SetBinContent(6,3.922311);
   hdirt_stack_3->SetBinContent(7,4.871798);
   hdirt_stack_3->SetBinContent(8,3.026192);
   hdirt_stack_3->SetBinContent(9,5.073561);
   hdirt_stack_3->SetBinContent(10,4.303503);
   hdirt_stack_3->SetBinContent(11,2.76743);
   hdirt_stack_3->SetBinContent(12,2.317136);
   hdirt_stack_3->SetBinContent(13,2.377454);
   hdirt_stack_3->SetBinContent(14,1.309016);
   hdirt_stack_3->SetBinContent(15,2.115194);
   hdirt_stack_3->SetBinContent(16,2.956047);
   hdirt_stack_3->SetBinContent(17,1.109369);
   hdirt_stack_3->SetBinContent(18,1.984951);
   hdirt_stack_3->SetBinContent(19,3.765049);
   hdirt_stack_3->SetBinContent(20,0.6182591);
   hdirt_stack_3->SetBinContent(21,1.733876);
   hdirt_stack_3->SetBinContent(22,0.9968856);
   hdirt_stack_3->SetBinContent(23,1.114166);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.8515129);
   hdirt_stack_3->SetBinError(3,0.7043675);
   hdirt_stack_3->SetBinError(4,1.077486);
   hdirt_stack_3->SetBinError(5,0.7016884);
   hdirt_stack_3->SetBinError(6,1.063966);
   hdirt_stack_3->SetBinError(7,1.201583);
   hdirt_stack_3->SetBinError(8,0.9109443);
   hdirt_stack_3->SetBinError(9,1.163484);
   hdirt_stack_3->SetBinError(10,1.609019);
   hdirt_stack_3->SetBinError(11,0.8655057);
   hdirt_stack_3->SetBinError(12,0.791098);
   hdirt_stack_3->SetBinError(13,0.7817256);
   hdirt_stack_3->SetBinError(14,0.5734455);
   hdirt_stack_3->SetBinError(15,0.7508688);
   hdirt_stack_3->SetBinError(16,0.9298715);
   hdirt_stack_3->SetBinError(17,0.4884064);
   hdirt_stack_3->SetBinError(18,0.6558978);
   hdirt_stack_3->SetBinError(19,1.163456);
   hdirt_stack_3->SetBinError(20,0.3905297);
   hdirt_stack_3->SetBinError(21,0.5886075);
   hdirt_stack_3->SetBinError(22,0.4766528);
   hdirt_stack_3->SetBinError(23,0.569712);
   hdirt_stack_3->SetBinError(24,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,5.554626);
   houtFV_stack_4->SetBinContent(2,15.75568);
   houtFV_stack_4->SetBinContent(3,27.86568);
   houtFV_stack_4->SetBinContent(4,34.56915);
   houtFV_stack_4->SetBinContent(5,31.75206);
   houtFV_stack_4->SetBinContent(6,36.47761);
   houtFV_stack_4->SetBinContent(7,33.04257);
   houtFV_stack_4->SetBinContent(8,32.31491);
   houtFV_stack_4->SetBinContent(9,27.79879);
   houtFV_stack_4->SetBinContent(10,22.91495);
   houtFV_stack_4->SetBinContent(11,22.30368);
   houtFV_stack_4->SetBinContent(12,24.92926);
   houtFV_stack_4->SetBinContent(13,16.24174);
   houtFV_stack_4->SetBinContent(14,16.86211);
   houtFV_stack_4->SetBinContent(15,20.52094);
   houtFV_stack_4->SetBinContent(16,20.41468);
   houtFV_stack_4->SetBinContent(17,18.3474);
   houtFV_stack_4->SetBinContent(18,18.80113);
   houtFV_stack_4->SetBinContent(19,18.38548);
   houtFV_stack_4->SetBinContent(20,24.52612);
   houtFV_stack_4->SetBinContent(21,15.80368);
   houtFV_stack_4->SetBinContent(22,9.669854);
   houtFV_stack_4->SetBinContent(23,9.01274);
   houtFV_stack_4->SetBinContent(24,1.999038);
   houtFV_stack_4->SetBinError(1,1.237231);
   houtFV_stack_4->SetBinError(2,1.981277);
   houtFV_stack_4->SetBinError(3,2.672008);
   houtFV_stack_4->SetBinError(4,3.107139);
   houtFV_stack_4->SetBinError(5,2.795383);
   houtFV_stack_4->SetBinError(6,2.98596);
   houtFV_stack_4->SetBinError(7,2.861031);
   houtFV_stack_4->SetBinError(8,2.887171);
   houtFV_stack_4->SetBinError(9,2.62309);
   houtFV_stack_4->SetBinError(10,2.47551);
   houtFV_stack_4->SetBinError(11,2.446283);
   houtFV_stack_4->SetBinError(12,2.741051);
   houtFV_stack_4->SetBinError(13,2.016942);
   houtFV_stack_4->SetBinError(14,2.031385);
   houtFV_stack_4->SetBinError(15,2.282312);
   houtFV_stack_4->SetBinError(16,2.277275);
   houtFV_stack_4->SetBinError(17,2.042536);
   houtFV_stack_4->SetBinError(18,2.162193);
   houtFV_stack_4->SetBinError(19,2.095146);
   houtFV_stack_4->SetBinError(20,2.573045);
   houtFV_stack_4->SetBinError(21,1.980652);
   houtFV_stack_4->SetBinError(22,1.520478);
   houtFV_stack_4->SetBinError(23,1.520291);
   houtFV_stack_4->SetBinError(24,0.7339349);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.026666);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.308008);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,10.65253);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.80705);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.66681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.605362);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.359975);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.58144);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.449486);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.586577);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.915562);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.110534);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.232344);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.23168);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.244466);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.018354);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.423076);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.729144);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.646276);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.784944);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.379726);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.296026);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5894927);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.924821);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.062043);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.074914);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.059046);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9817097);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8255356);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8661819);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7364993);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6912469);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5460186);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6185432);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5218419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5346136);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5231453);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.317295);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4658177);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4541833);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4724547);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4558939);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3711885);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3680294);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3174996);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,18.5471);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,55.51191);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,91.80947);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,111.2035);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,121.3463);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,119.8652);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,111.9518);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,106.3766);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,98.49489);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,90.47448);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,77.09447);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,73.53754);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,63.41246);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,59.07784);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,54.41336);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,50.04099);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,46.22883);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,47.6622);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,39.51151);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,39.15571);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,32.31927);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,26.13012);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,16.49461);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,6.065286);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.409285);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.388963);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.118271);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.41534);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.647684);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.547338);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.412851);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.359413);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.261516);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.079513);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.847728);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.777499);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.579792);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.576308);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.42043);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.250153);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.220686);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.285395);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.951588);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.041467);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.78812);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.711759);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.336157);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.8146204);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hCCpi0inFV_stack_7->SetBinContent(1,9.181533);
   hCCpi0inFV_stack_7->SetBinContent(2,31.28058);
   hCCpi0inFV_stack_7->SetBinContent(3,38.16711);
   hCCpi0inFV_stack_7->SetBinContent(4,45.98401);
   hCCpi0inFV_stack_7->SetBinContent(5,49.37584);
   hCCpi0inFV_stack_7->SetBinContent(6,44.74263);
   hCCpi0inFV_stack_7->SetBinContent(7,45.26407);
   hCCpi0inFV_stack_7->SetBinContent(8,43.78626);
   hCCpi0inFV_stack_7->SetBinContent(9,36.92339);
   hCCpi0inFV_stack_7->SetBinContent(10,36.15569);
   hCCpi0inFV_stack_7->SetBinContent(11,35.33419);
   hCCpi0inFV_stack_7->SetBinContent(12,24.32995);
   hCCpi0inFV_stack_7->SetBinContent(13,21.48296);
   hCCpi0inFV_stack_7->SetBinContent(14,17.86641);
   hCCpi0inFV_stack_7->SetBinContent(15,21.49871);
   hCCpi0inFV_stack_7->SetBinContent(16,18.75369);
   hCCpi0inFV_stack_7->SetBinContent(17,18.22126);
   hCCpi0inFV_stack_7->SetBinContent(18,15.75024);
   hCCpi0inFV_stack_7->SetBinContent(19,18.15315);
   hCCpi0inFV_stack_7->SetBinContent(20,14.11938);
   hCCpi0inFV_stack_7->SetBinContent(21,15.19831);
   hCCpi0inFV_stack_7->SetBinContent(22,14.44165);
   hCCpi0inFV_stack_7->SetBinContent(23,7.610006);
   hCCpi0inFV_stack_7->SetBinContent(24,3.376046);
   hCCpi0inFV_stack_7->SetBinError(1,1.500267);
   hCCpi0inFV_stack_7->SetBinError(2,2.862145);
   hCCpi0inFV_stack_7->SetBinError(3,3.045636);
   hCCpi0inFV_stack_7->SetBinError(4,3.452066);
   hCCpi0inFV_stack_7->SetBinError(5,3.497129);
   hCCpi0inFV_stack_7->SetBinError(6,3.338751);
   hCCpi0inFV_stack_7->SetBinError(7,3.384239);
   hCCpi0inFV_stack_7->SetBinError(8,3.284549);
   hCCpi0inFV_stack_7->SetBinError(9,3.042714);
   hCCpi0inFV_stack_7->SetBinError(10,3.028525);
   hCCpi0inFV_stack_7->SetBinError(11,2.998063);
   hCCpi0inFV_stack_7->SetBinError(12,2.498514);
   hCCpi0inFV_stack_7->SetBinError(13,2.404738);
   hCCpi0inFV_stack_7->SetBinError(14,2.080308);
   hCCpi0inFV_stack_7->SetBinError(15,2.323188);
   hCCpi0inFV_stack_7->SetBinError(16,2.17267);
   hCCpi0inFV_stack_7->SetBinError(17,2.168238);
   hCCpi0inFV_stack_7->SetBinError(18,1.974469);
   hCCpi0inFV_stack_7->SetBinError(19,2.143635);
   hCCpi0inFV_stack_7->SetBinError(20,1.802028);
   hCCpi0inFV_stack_7->SetBinError(21,1.952975);
   hCCpi0inFV_stack_7->SetBinError(22,1.886465);
   hCCpi0inFV_stack_7->SetBinError(23,1.343537);
   hCCpi0inFV_stack_7->SetBinError(24,0.8997438);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hNCinFV_stack_8->SetBinContent(1,2.094319);
   hNCinFV_stack_8->SetBinContent(2,5.084778);
   hNCinFV_stack_8->SetBinContent(3,8.696186);
   hNCinFV_stack_8->SetBinContent(4,11.34369);
   hNCinFV_stack_8->SetBinContent(5,9.389458);
   hNCinFV_stack_8->SetBinContent(6,13.22174);
   hNCinFV_stack_8->SetBinContent(7,9.229698);
   hNCinFV_stack_8->SetBinContent(8,7.374122);
   hNCinFV_stack_8->SetBinContent(9,9.766591);
   hNCinFV_stack_8->SetBinContent(10,6.798583);
   hNCinFV_stack_8->SetBinContent(11,8.241658);
   hNCinFV_stack_8->SetBinContent(12,6.107002);
   hNCinFV_stack_8->SetBinContent(13,4.751363);
   hNCinFV_stack_8->SetBinContent(14,6.590642);
   hNCinFV_stack_8->SetBinContent(15,6.503813);
   hNCinFV_stack_8->SetBinContent(16,3.672505);
   hNCinFV_stack_8->SetBinContent(17,4.981653);
   hNCinFV_stack_8->SetBinContent(18,4.643166);
   hNCinFV_stack_8->SetBinContent(19,2.535931);
   hNCinFV_stack_8->SetBinContent(20,4.394888);
   hNCinFV_stack_8->SetBinContent(21,2.826237);
   hNCinFV_stack_8->SetBinContent(22,3.56938);
   hNCinFV_stack_8->SetBinContent(23,2.000729);
   hNCinFV_stack_8->SetBinContent(24,1.318683);
   hNCinFV_stack_8->SetBinError(1,0.809937);
   hNCinFV_stack_8->SetBinError(2,1.092166);
   hNCinFV_stack_8->SetBinError(3,1.481689);
   hNCinFV_stack_8->SetBinError(4,1.677443);
   hNCinFV_stack_8->SetBinError(5,1.494495);
   hNCinFV_stack_8->SetBinError(6,1.866536);
   hNCinFV_stack_8->SetBinError(7,1.53248);
   hNCinFV_stack_8->SetBinError(8,1.37363);
   hNCinFV_stack_8->SetBinError(9,1.58206);
   hNCinFV_stack_8->SetBinError(10,1.256225);
   hNCinFV_stack_8->SetBinError(11,1.53351);
   hNCinFV_stack_8->SetBinError(12,1.24123);
   hNCinFV_stack_8->SetBinError(13,1.039113);
   hNCinFV_stack_8->SetBinError(14,1.316585);
   hNCinFV_stack_8->SetBinError(15,1.272545);
   hNCinFV_stack_8->SetBinError(16,0.8768883);
   hNCinFV_stack_8->SetBinError(17,1.1273);
   hNCinFV_stack_8->SetBinError(18,1.075057);
   hNCinFV_stack_8->SetBinError(19,0.8325131);
   hNCinFV_stack_8->SetBinError(20,1.075193);
   hNCinFV_stack_8->SetBinError(21,0.9211137);
   hNCinFV_stack_8->SetBinError(22,0.9202779);
   hNCinFV_stack_8->SetBinError(23,0.7343859);
   hNCinFV_stack_8->SetBinError(24,0.5542732);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hnumuCCinFV_stack_9->SetBinContent(1,1.882579);
   hnumuCCinFV_stack_9->SetBinContent(2,9.367506);
   hnumuCCinFV_stack_9->SetBinContent(3,10.75491);
   hnumuCCinFV_stack_9->SetBinContent(4,14.45889);
   hnumuCCinFV_stack_9->SetBinContent(5,16.53155);
   hnumuCCinFV_stack_9->SetBinContent(6,15.77857);
   hnumuCCinFV_stack_9->SetBinContent(7,16.37884);
   hnumuCCinFV_stack_9->SetBinContent(8,14.3912);
   hnumuCCinFV_stack_9->SetBinContent(9,13.94529);
   hnumuCCinFV_stack_9->SetBinContent(10,14.05399);
   hnumuCCinFV_stack_9->SetBinContent(11,9.852636);
   hnumuCCinFV_stack_9->SetBinContent(12,9.487707);
   hnumuCCinFV_stack_9->SetBinContent(13,8.000484);
   hnumuCCinFV_stack_9->SetBinContent(14,8.967245);
   hnumuCCinFV_stack_9->SetBinContent(15,9.768211);
   hnumuCCinFV_stack_9->SetBinContent(16,5.783011);
   hnumuCCinFV_stack_9->SetBinContent(17,7.633446);
   hnumuCCinFV_stack_9->SetBinContent(18,5.765465);
   hnumuCCinFV_stack_9->SetBinContent(19,4.793921);
   hnumuCCinFV_stack_9->SetBinContent(20,5.944355);
   hnumuCCinFV_stack_9->SetBinContent(21,5.745327);
   hnumuCCinFV_stack_9->SetBinContent(22,7.110545);
   hnumuCCinFV_stack_9->SetBinContent(23,2.169064);
   hnumuCCinFV_stack_9->SetBinContent(24,0.6190352);
   hnumuCCinFV_stack_9->SetBinError(1,0.7508061);
   hnumuCCinFV_stack_9->SetBinError(2,1.569085);
   hnumuCCinFV_stack_9->SetBinError(3,1.767334);
   hnumuCCinFV_stack_9->SetBinError(4,1.945652);
   hnumuCCinFV_stack_9->SetBinError(5,2.519911);
   hnumuCCinFV_stack_9->SetBinError(6,2.688203);
   hnumuCCinFV_stack_9->SetBinError(7,2.487346);
   hnumuCCinFV_stack_9->SetBinError(8,1.943432);
   hnumuCCinFV_stack_9->SetBinError(9,2.208821);
   hnumuCCinFV_stack_9->SetBinError(10,2.400262);
   hnumuCCinFV_stack_9->SetBinError(11,1.612178);
   hnumuCCinFV_stack_9->SetBinError(12,1.898497);
   hnumuCCinFV_stack_9->SetBinError(13,1.528569);
   hnumuCCinFV_stack_9->SetBinError(14,1.769817);
   hnumuCCinFV_stack_9->SetBinError(15,2.052787);
   hnumuCCinFV_stack_9->SetBinError(16,1.24372);
   hnumuCCinFV_stack_9->SetBinError(17,1.971245);
   hnumuCCinFV_stack_9->SetBinError(18,1.462145);
   hnumuCCinFV_stack_9->SetBinError(19,1.09955);
   hnumuCCinFV_stack_9->SetBinError(20,1.309825);
   hnumuCCinFV_stack_9->SetBinError(21,1.253515);
   hnumuCCinFV_stack_9->SetBinError(22,2.478654);
   hnumuCCinFV_stack_9->SetBinError(23,0.7998038);
   hnumuCCinFV_stack_9->SetBinError(24,0.3584742);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hnueCCinFV_stack_10->SetBinContent(1,0.4915121);
   hnueCCinFV_stack_10->SetBinContent(2,3.291008);
   hnueCCinFV_stack_10->SetBinContent(3,3.576221);
   hnueCCinFV_stack_10->SetBinContent(4,2.745194);
   hnueCCinFV_stack_10->SetBinContent(5,1.2588);
   hnueCCinFV_stack_10->SetBinContent(6,3.803108);
   hnueCCinFV_stack_10->SetBinContent(7,2.849455);
   hnueCCinFV_stack_10->SetBinContent(8,1.780079);
   hnueCCinFV_stack_10->SetBinContent(9,1.190851);
   hnueCCinFV_stack_10->SetBinContent(10,1.910451);
   hnueCCinFV_stack_10->SetBinContent(11,0.536893);
   hnueCCinFV_stack_10->SetBinContent(12,1.25229);
   hnueCCinFV_stack_10->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(15,1.199815);
   hnueCCinFV_stack_10->SetBinContent(16,1.174613);
   hnueCCinFV_stack_10->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(18,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(19,1.272715);
   hnueCCinFV_stack_10->SetBinContent(20,1.488456);
   hnueCCinFV_stack_10->SetBinContent(22,1.417366);
   hnueCCinFV_stack_10->SetBinContent(23,0.6623923);
   hnueCCinFV_stack_10->SetBinError(1,0.4915121);
   hnueCCinFV_stack_10->SetBinError(2,1.288593);
   hnueCCinFV_stack_10->SetBinError(3,1.676374);
   hnueCCinFV_stack_10->SetBinError(4,0.9574489);
   hnueCCinFV_stack_10->SetBinError(5,0.5149863);
   hnueCCinFV_stack_10->SetBinError(6,1.49328);
   hnueCCinFV_stack_10->SetBinError(7,0.9634635);
   hnueCCinFV_stack_10->SetBinError(8,0.698278);
   hnueCCinFV_stack_10->SetBinError(9,0.565802);
   hnueCCinFV_stack_10->SetBinError(10,1.32621);
   hnueCCinFV_stack_10->SetBinError(11,0.3929602);
   hnueCCinFV_stack_10->SetBinError(12,0.5891623);
   hnueCCinFV_stack_10->SetBinError(13,0.1950249);
   hnueCCinFV_stack_10->SetBinError(14,0.1967154);
   hnueCCinFV_stack_10->SetBinError(15,0.7040641);
   hnueCCinFV_stack_10->SetBinError(16,0.5910469);
   hnueCCinFV_stack_10->SetBinError(17,0.1967154);
   hnueCCinFV_stack_10->SetBinError(18,0.3401776);
   hnueCCinFV_stack_10->SetBinError(19,0.6996415);
   hnueCCinFV_stack_10->SetBinError(20,0.639842);
   hnueCCinFV_stack_10->SetBinError(22,0.6889761);
   hnueCCinFV_stack_10->SetBinError(23,0.3872778);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);
   hmcerror__2->SetBinContent(1,45.53082);
   hmcerror__2->SetBinContent(2,150.8154);
   hmcerror__2->SetBinContent(3,219.0597);
   hmcerror__2->SetBinContent(4,270.2716);
   hmcerror__2->SetBinContent(5,280.389);
   hmcerror__2->SetBinContent(6,282.5389);
   hmcerror__2->SetBinContent(7,262.7814);
   hmcerror__2->SetBinContent(8,252.0369);
   hmcerror__2->SetBinContent(9,236.9092);
   hmcerror__2->SetBinContent(10,215.6487);
   hmcerror__2->SetBinContent(11,185.3158);
   hmcerror__2->SetBinContent(12,182.787);
   hmcerror__2->SetBinContent(13,158.0933);
   hmcerror__2->SetBinContent(14,136.5018);
   hmcerror__2->SetBinContent(15,145.7502);
   hmcerror__2->SetBinContent(16,131.5174);
   hmcerror__2->SetBinContent(17,115.3301);
   hmcerror__2->SetBinContent(18,111.9734);
   hmcerror__2->SetBinContent(19,103.8321);
   hmcerror__2->SetBinContent(20,108.2888);
   hmcerror__2->SetBinContent(21,90.26162);
   hmcerror__2->SetBinContent(22,73.63631);
   hmcerror__2->SetBinContent(23,44.92445);
   hmcerror__2->SetBinContent(24,16.80724);
   hmcerror__2->SetBinError(1,11.23268);
   hmcerror__2->SetBinError(2,29.85204);
   hmcerror__2->SetBinError(3,45.62291);
   hmcerror__2->SetBinError(4,53.46103);
   hmcerror__2->SetBinError(5,58.02291);
   hmcerror__2->SetBinError(6,57.19701);
   hmcerror__2->SetBinError(7,55.71012);
   hmcerror__2->SetBinError(8,52.13928);
   hmcerror__2->SetBinError(9,50.06289);
   hmcerror__2->SetBinError(10,45.2347);
   hmcerror__2->SetBinError(11,41.68811);
   hmcerror__2->SetBinError(12,36.96372);
   hmcerror__2->SetBinError(13,30.80224);
   hmcerror__2->SetBinError(14,28.56867);
   hmcerror__2->SetBinError(15,31.89241);
   hmcerror__2->SetBinError(16,27.0294);
   hmcerror__2->SetBinError(17,25.50836);
   hmcerror__2->SetBinError(18,25.36391);
   hmcerror__2->SetBinError(19,21.89163);
   hmcerror__2->SetBinError(20,22.53546);
   hmcerror__2->SetBinError(21,17.66722);
   hmcerror__2->SetBinError(22,15.20261);
   hmcerror__2->SetBinError(23,10.45494);
   hmcerror__2->SetBinError(24,5.666683);
   hmcerror__2->SetBinError(25,0.4212968);
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
   
   Double_t _fx3001[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3001[24] = {
   49,
   151,
   228,
   299,
   285,
   279,
   256,
   256,
   214,
   211,
   183,
   169,
   152,
   146,
   130,
   136,
   131,
   91,
   110,
   104,
   94,
   78,
   45,
   26};
   Double_t _felx3001[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3001[24] = {
   7.1318,
   12.28821,
   15.09967,
   17.29162,
   16.88194,
   16.70329,
   16,
   16,
   14.62874,
   14.52584,
   13.52775,
   13,
   12.32883,
   12.08305,
   11.40175,
   11.6619,
   11.44552,
   9.6617,
   10.48809,
   10.19804,
   9.8173,
   8.9562,
   6.8416,
   5.2453};
   Double_t _fehx3001[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3001[24] = {
   6.9277,
   12.28821,
   15.09967,
   17.29162,
   16.88194,
   16.70329,
   16,
   16,
   14.62874,
   14.52584,
   13.52775,
   13,
   12.32883,
   12.08305,
   11.40175,
   11.6619,
   11.44552,
   9.46,
   10.48809,
   10.19804,
   9.616,
   8.7542,
   6.637,
   5.0358};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,198);
   Graph_Graph3001->SetMinimum(18.67923);
   Graph_Graph3001->SetMaximum(345.8453);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.5/24","");
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   
   Double_t _fx3002[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3002[24] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3002[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3002[24] = {
   0.246705,
   0.1979376,
   0.2082671,
   0.1978049,
   0.2069372,
   0.2024394,
   0.2120018,
   0.2068716,
   0.2113168,
   0.2097611,
   0.2249572,
   0.2022229,
   0.1948358,
   0.2092914,
   0.2188156,
   0.2055196,
   0.2211769,
   0.2265172,
   0.2108368,
   0.2081051,
   0.1957334,
   0.2064553,
   0.2327227,
   0.3371574};
   Double_t _fehx3002[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3002[24] = {
   0.246705,
   0.1979376,
   0.2082671,
   0.1978049,
   0.2069372,
   0.2024394,
   0.2120018,
   0.2068716,
   0.2113168,
   0.2097611,
   0.2249572,
   0.2022229,
   0.1948358,
   0.2092914,
   0.2188156,
   0.2055196,
   0.2211769,
   0.2265172,
   0.2108368,
   0.2081051,
   0.1957334,
   0.2064553,
   0.2327227,
   0.3371574};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,198);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [degree]");
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
   
   Double_t _fx3003[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3003[24] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3003[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3003[24] = {
   0.2060699,
   0.1802826,
   0.1870205,
   0.1843457,
   0.1886908,
   0.188244,
   0.1968081,
   0.1882886,
   0.1963628,
   0.1924204,
   0.1896075,
   0.1886925,
   0.1723384,
   0.1919469,
   0.1891783,
   0.1817338,
   0.1928934,
   0.2014306,
   0.1964096,
   0.1859912,
   0.1770673,
   0.1915959,
   0.1988697,
   0.224505};
   Double_t _fehx3003[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3003[24] = {
   0.2060699,
   0.1802826,
   0.1870205,
   0.1843457,
   0.1886908,
   0.188244,
   0.1968081,
   0.1882886,
   0.1963628,
   0.1924204,
   0.1896075,
   0.1886925,
   0.1723384,
   0.1919469,
   0.1891783,
   0.1817338,
   0.1928934,
   0.2014306,
   0.1964096,
   0.1859912,
   0.1770673,
   0.1915959,
   0.1988697,
   0.224505};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,198);
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
   
   Double_t _fx3004[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3004[24] = {
   1.076194,
   1.001224,
   1.040812,
   1.106295,
   1.016445,
   0.9874747,
   0.9741939,
   1.015724,
   0.9032996,
   0.9784434,
   0.9875037,
   0.9245735,
   0.9614574,
   1.069583,
   0.8919373,
   1.034084,
   1.13587,
   0.8126927,
   1.059402,
   0.9603946,
   1.041417,
   1.05926,
   1.001682,
   1.546953};
   Double_t _felx3004[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3004[24] = {
   0.1566368,
   0.08147844,
   0.06892948,
   0.06397867,
   0.060209,
   0.05911856,
   0.06088712,
   0.06348277,
   0.06174829,
   0.06735882,
   0.07299837,
   0.07112104,
   0.0779845,
   0.08851929,
   0.07822808,
   0.08867195,
   0.09924139,
   0.08628564,
   0.10101,
   0.09417444,
   0.1087649,
   0.1216275,
   0.1522912,
   0.3120858};
   Double_t _fehx3004[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3004[24] = {
   0.1521541,
   0.08147844,
   0.06892948,
   0.06397867,
   0.060209,
   0.05911856,
   0.06088712,
   0.06348277,
   0.06174829,
   0.06735882,
   0.07299837,
   0.07112104,
   0.0779845,
   0.08851929,
   0.07822808,
   0.08867195,
   0.09924139,
   0.08448432,
   0.10101,
   0.09417444,
   0.1065348,
   0.1188843,
   0.1477369,
   0.299621};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,198);
   Graph_Graph3004->SetMinimum(0.6143904);
   Graph_Graph3004->SetMaximum(1.95859);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,180);

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
   TLine *line = new TLine(0,1,180,1);
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
