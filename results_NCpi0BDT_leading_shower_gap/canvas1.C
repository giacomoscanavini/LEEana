#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 12:54:07 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-13.84615,-4.526787,101.5385,381.4414);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmc__1->SetBinContent(1,226.3394);
   hmc__1->SetBinContent(2,75.84914);
   hmc__1->SetBinContent(3,63.64155);
   hmc__1->SetBinContent(4,51.98521);
   hmc__1->SetBinContent(5,44.12684);
   hmc__1->SetBinContent(6,33.39202);
   hmc__1->SetBinContent(7,24.04401);
   hmc__1->SetBinContent(8,21.56959);
   hmc__1->SetBinContent(9,18.50262);
   hmc__1->SetBinContent(10,13.98031);
   hmc__1->SetBinContent(11,10.33091);
   hmc__1->SetBinContent(12,6.2171);
   hmc__1->SetBinContent(13,6.333327);
   hmc__1->SetBinContent(14,5.664079);
   hmc__1->SetBinContent(15,4.25655);
   hmc__1->SetBinContent(16,3.643113);
   hmc__1->SetBinContent(17,2.723901);
   hmc__1->SetBinContent(18,1.766861);
   hmc__1->SetBinContent(19,16.6713);
   hmc__1->SetBinError(1,45.12957);
   hmc__1->SetBinError(2,16.63674);
   hmc__1->SetBinError(3,13.89868);
   hmc__1->SetBinError(4,12.32207);
   hmc__1->SetBinError(5,10.69932);
   hmc__1->SetBinError(6,8.169123);
   hmc__1->SetBinError(7,6.747207);
   hmc__1->SetBinError(8,6.046537);
   hmc__1->SetBinError(9,4.653935);
   hmc__1->SetBinError(10,4.480576);
   hmc__1->SetBinError(11,3.060113);
   hmc__1->SetBinError(12,2.172091);
   hmc__1->SetBinError(13,2.634371);
   hmc__1->SetBinError(14,2.079488);
   hmc__1->SetBinError(15,1.72425);
   hmc__1->SetBinError(16,1.991834);
   hmc__1->SetBinError(17,1.45124);
   hmc__1->SetBinError(18,1.277017);
   hmc__1->SetBinError(19,5.062814);
   hmc__1->SetMinimum(-4.526787);
   hmc__1->SetMaximum(362.143);
   hmc__1->SetEntries(622.1566);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",18,0,90);
   hs1_stack_1->SetMinimum(-1.105156e-09);
   hs1_stack_1->SetMaximum(237.6564);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(1,4.207519);
   hbadmatch_stack_1->SetBinContent(2,0.7619665);
   hbadmatch_stack_1->SetBinContent(3,1.235788);
   hbadmatch_stack_1->SetBinContent(4,1.301773);
   hbadmatch_stack_1->SetBinContent(5,0.4887098);
   hbadmatch_stack_1->SetBinContent(6,0.4850344);
   hbadmatch_stack_1->SetBinContent(7,0.7723334);
   hbadmatch_stack_1->SetBinContent(8,0.5500523);
   hbadmatch_stack_1->SetBinContent(9,0.5595686);
   hbadmatch_stack_1->SetBinContent(10,0.4255622);
   hbadmatch_stack_1->SetBinContent(11,0.2777054);
   hbadmatch_stack_1->SetBinContent(12,0.1696337);
   hbadmatch_stack_1->SetBinContent(13,0.4238613);
   hbadmatch_stack_1->SetBinContent(14,0.4440441);
   hbadmatch_stack_1->SetBinContent(15,0.1382737);
   hbadmatch_stack_1->SetBinContent(16,0.209944);
   hbadmatch_stack_1->SetBinContent(17,0.2089112);
   hbadmatch_stack_1->SetBinContent(18,0.1239126);
   hbadmatch_stack_1->SetBinContent(19,0.9484221);
   hbadmatch_stack_1->SetBinError(1,0.5394239);
   hbadmatch_stack_1->SetBinError(2,0.188979);
   hbadmatch_stack_1->SetBinError(3,0.4024284);
   hbadmatch_stack_1->SetBinError(4,0.2803506);
   hbadmatch_stack_1->SetBinError(5,0.1625117);
   hbadmatch_stack_1->SetBinError(6,0.1621853);
   hbadmatch_stack_1->SetBinError(7,0.3814799);
   hbadmatch_stack_1->SetBinError(8,0.1677691);
   hbadmatch_stack_1->SetBinError(9,0.1696712);
   hbadmatch_stack_1->SetBinError(10,0.1602094);
   hbadmatch_stack_1->SetBinError(11,0.112811);
   hbadmatch_stack_1->SetBinError(12,0.1023119);
   hbadmatch_stack_1->SetBinError(13,0.168369);
   hbadmatch_stack_1->SetBinError(14,0.1693393);
   hbadmatch_stack_1->SetBinError(15,0.0707722);
   hbadmatch_stack_1->SetBinError(16,0.1149342);
   hbadmatch_stack_1->SetBinError(17,0.09441468);
   hbadmatch_stack_1->SetBinError(18,0.08761943);
   hbadmatch_stack_1->SetBinError(19,0.2114975);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hext_stack_2->SetBinContent(1,19.76305);
   hext_stack_2->SetBinContent(2,3.222939);
   hext_stack_2->SetBinContent(3,3.746468);
   hext_stack_2->SetBinContent(4,2.913461);
   hext_stack_2->SetBinContent(5,3.601961);
   hext_stack_2->SetBinContent(6,2.557636);
   hext_stack_2->SetBinContent(7,1.923679);
   hext_stack_2->SetBinContent(8,1.378343);
   hext_stack_2->SetBinContent(9,2.049109);
   hext_stack_2->SetBinContent(10,1.761439);
   hext_stack_2->SetBinContent(11,0.5453364);
   hext_stack_2->SetBinContent(12,0.4594475);
   hext_stack_2->SetBinContent(13,0.2849381);
   hext_stack_2->SetBinContent(14,0.9188949);
   hext_stack_2->SetBinContent(15,0.4349078);
   hext_stack_2->SetBinContent(16,0.07361911);
   hext_stack_2->SetBinContent(17,0.4594475);
   hext_stack_2->SetBinContent(18,0.2235888);
   hext_stack_2->SetBinContent(19,1.434229);
   hext_stack_2->SetBinError(1,1.83452);
   hext_stack_2->SetBinError(2,0.6969103);
   hext_stack_2->SetBinError(3,0.7769442);
   hext_stack_2->SetBinError(4,0.6668646);
   hext_stack_2->SetBinError(5,0.7994044);
   hext_stack_2->SetBinError(6,0.6635831);
   hext_stack_2->SetBinError(7,0.5665944);
   hext_stack_2->SetBinError(8,0.4898791);
   hext_stack_2->SetBinError(9,0.5997887);
   hext_stack_2->SetBinError(10,0.5309052);
   hext_stack_2->SetBinError(11,0.2846888);
   hext_stack_2->SetBinError(12,0.2828318);
   hext_stack_2->SetBinError(13,0.2016789);
   hext_stack_2->SetBinError(14,0.3999846);
   hext_stack_2->SetBinError(15,0.282299);
   hext_stack_2->SetBinError(16,0.03005488);
   hext_stack_2->SetBinError(17,0.2828318);
   hext_stack_2->SetBinError(18,0.199804);
   hext_stack_2->SetBinError(19,0.4078121);
   hext_stack_2->SetEntries(893);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hdirt_stack_3->SetBinContent(1,2.907951);
   hdirt_stack_3->SetBinContent(2,0.6979038);
   hdirt_stack_3->SetBinContent(3,0.4092931);
   hdirt_stack_3->SetBinContent(4,0.5415565);
   hdirt_stack_3->SetBinContent(5,0.2332121);
   hdirt_stack_3->SetBinContent(6,0.2442015);
   hdirt_stack_3->SetBinContent(7,0.1247822);
   hdirt_stack_3->SetBinContent(8,0.02868415);
   hdirt_stack_3->SetBinContent(9,0.2276204);
   hdirt_stack_3->SetBinContent(10,0.01769789);
   hdirt_stack_3->SetBinContent(11,0.1790633);
   hdirt_stack_3->SetBinContent(12,0.09438892);
   hdirt_stack_3->SetBinContent(13,0.06428034);
   hdirt_stack_3->SetBinContent(14,0.01781772);
   hdirt_stack_3->SetBinContent(17,0.05298468);
   hdirt_stack_3->SetBinContent(18,0.008219617);
   hdirt_stack_3->SetBinContent(19,0.2720179);
   hdirt_stack_3->SetBinError(1,0.4774979);
   hdirt_stack_3->SetBinError(2,0.1745912);
   hdirt_stack_3->SetBinError(3,0.1254921);
   hdirt_stack_3->SetBinError(4,0.1462143);
   hdirt_stack_3->SetBinError(5,0.0907204);
   hdirt_stack_3->SetBinError(6,0.09157195);
   hdirt_stack_3->SetBinError(7,0.06505451);
   hdirt_stack_3->SetBinError(8,0.01656451);
   hdirt_stack_3->SetBinError(9,0.09473286);
   hdirt_stack_3->SetBinError(10,0.01254591);
   hdirt_stack_3->SetBinError(11,0.08578912);
   hdirt_stack_3->SetBinError(12,0.06687644);
   hdirt_stack_3->SetBinError(13,0.04796732);
   hdirt_stack_3->SetBinError(14,0.01263668);
   hdirt_stack_3->SetBinError(17,0.05298468);
   hdirt_stack_3->SetBinError(18,0.008219618);
   hdirt_stack_3->SetBinError(19,0.1040975);
   hdirt_stack_3->SetEntries(224);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   houtFV_stack_4->SetBinContent(1,22.32195);
   houtFV_stack_4->SetBinContent(2,6.080568);
   houtFV_stack_4->SetBinContent(3,5.326348);
   houtFV_stack_4->SetBinContent(4,5.024928);
   houtFV_stack_4->SetBinContent(5,5.262811);
   houtFV_stack_4->SetBinContent(6,3.530587);
   houtFV_stack_4->SetBinContent(7,2.188345);
   houtFV_stack_4->SetBinContent(8,2.215694);
   houtFV_stack_4->SetBinContent(9,2.033664);
   houtFV_stack_4->SetBinContent(10,1.631118);
   houtFV_stack_4->SetBinContent(11,1.019166);
   houtFV_stack_4->SetBinContent(12,0.7868059);
   houtFV_stack_4->SetBinContent(13,1.021474);
   houtFV_stack_4->SetBinContent(14,0.3660615);
   houtFV_stack_4->SetBinContent(15,0.5825594);
   houtFV_stack_4->SetBinContent(16,0.7088143);
   houtFV_stack_4->SetBinContent(17,0.3272596);
   houtFV_stack_4->SetBinContent(18,0.1876636);
   houtFV_stack_4->SetBinContent(19,2.486915);
   houtFV_stack_4->SetBinError(1,1.110484);
   houtFV_stack_4->SetBinError(2,0.5803134);
   houtFV_stack_4->SetBinError(3,0.5496852);
   houtFV_stack_4->SetBinError(4,0.5225948);
   houtFV_stack_4->SetBinError(5,0.5380749);
   houtFV_stack_4->SetBinError(6,0.436305);
   houtFV_stack_4->SetBinError(7,0.3512945);
   houtFV_stack_4->SetBinError(8,0.3459904);
   houtFV_stack_4->SetBinError(9,0.3290991);
   houtFV_stack_4->SetBinError(10,0.3022042);
   houtFV_stack_4->SetBinError(11,0.2273765);
   houtFV_stack_4->SetBinError(12,0.2008584);
   houtFV_stack_4->SetBinError(13,0.2436527);
   houtFV_stack_4->SetBinError(14,0.1300709);
   houtFV_stack_4->SetBinError(15,0.1818847);
   houtFV_stack_4->SetBinError(16,0.1988059);
   houtFV_stack_4->SetBinError(17,0.1281138);
   houtFV_stack_4->SetBinError(18,0.0921412);
   houtFV_stack_4->SetBinError(19,0.3641891);
   houtFV_stack_4->SetEntries(1630);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(1,114.2882);
   hNCpi0inFV_stack_5->SetBinContent(2,42.08782);
   hNCpi0inFV_stack_5->SetBinContent(3,34.19426);
   hNCpi0inFV_stack_5->SetBinContent(4,28.66213);
   hNCpi0inFV_stack_5->SetBinContent(5,21.4241);
   hNCpi0inFV_stack_5->SetBinContent(6,16.48463);
   hNCpi0inFV_stack_5->SetBinContent(7,12.92404);
   hNCpi0inFV_stack_5->SetBinContent(8,11.78549);
   hNCpi0inFV_stack_5->SetBinContent(9,8.762569);
   hNCpi0inFV_stack_5->SetBinContent(10,6.512215);
   hNCpi0inFV_stack_5->SetBinContent(11,4.830421);
   hNCpi0inFV_stack_5->SetBinContent(12,2.880687);
   hNCpi0inFV_stack_5->SetBinContent(13,2.762345);
   hNCpi0inFV_stack_5->SetBinContent(14,2.439814);
   hNCpi0inFV_stack_5->SetBinContent(15,1.867662);
   hNCpi0inFV_stack_5->SetBinContent(16,1.381173);
   hNCpi0inFV_stack_5->SetBinContent(17,1.082347);
   hNCpi0inFV_stack_5->SetBinContent(18,0.6341078);
   hNCpi0inFV_stack_5->SetBinContent(19,5.581075);
   hNCpi0inFV_stack_5->SetBinError(1,2.486071);
   hNCpi0inFV_stack_5->SetBinError(2,1.508105);
   hNCpi0inFV_stack_5->SetBinError(3,1.368253);
   hNCpi0inFV_stack_5->SetBinError(4,1.250448);
   hNCpi0inFV_stack_5->SetBinError(5,1.067252);
   hNCpi0inFV_stack_5->SetBinError(6,0.9401749);
   hNCpi0inFV_stack_5->SetBinError(7,0.819058);
   hNCpi0inFV_stack_5->SetBinError(8,0.8006849);
   hNCpi0inFV_stack_5->SetBinError(9,0.6888477);
   hNCpi0inFV_stack_5->SetBinError(10,0.5901378);
   hNCpi0inFV_stack_5->SetBinError(11,0.5096563);
   hNCpi0inFV_stack_5->SetBinError(12,0.3827269);
   hNCpi0inFV_stack_5->SetBinError(13,0.388675);
   hNCpi0inFV_stack_5->SetBinError(14,0.3629226);
   hNCpi0inFV_stack_5->SetBinError(15,0.3162732);
   hNCpi0inFV_stack_5->SetBinError(16,0.2748347);
   hNCpi0inFV_stack_5->SetBinError(17,0.2439868);
   hNCpi0inFV_stack_5->SetBinError(18,0.1884745);
   hNCpi0inFV_stack_5->SetBinError(19,0.5419498);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(1,36.58108);
   hCCpi0inFV_stack_6->SetBinContent(2,12.35081);
   hCCpi0inFV_stack_6->SetBinContent(3,10.15456);
   hCCpi0inFV_stack_6->SetBinContent(4,8.380803);
   hCCpi0inFV_stack_6->SetBinContent(5,8.283459);
   hCCpi0inFV_stack_6->SetBinContent(6,6.377947);
   hCCpi0inFV_stack_6->SetBinContent(7,3.95481);
   hCCpi0inFV_stack_6->SetBinContent(8,3.578041);
   hCCpi0inFV_stack_6->SetBinContent(9,3.434051);
   hCCpi0inFV_stack_6->SetBinContent(10,1.964767);
   hCCpi0inFV_stack_6->SetBinContent(11,2.06709);
   hCCpi0inFV_stack_6->SetBinContent(12,1.156169);
   hCCpi0inFV_stack_6->SetBinContent(13,1.030778);
   hCCpi0inFV_stack_6->SetBinContent(14,0.8512726);
   hCCpi0inFV_stack_6->SetBinContent(15,0.5926785);
   hCCpi0inFV_stack_6->SetBinContent(16,0.5138612);
   hCCpi0inFV_stack_6->SetBinContent(17,0.3225317);
   hCCpi0inFV_stack_6->SetBinContent(18,0.2496199);
   hCCpi0inFV_stack_6->SetBinContent(19,2.511051);
   hCCpi0inFV_stack_6->SetBinError(1,1.412505);
   hCCpi0inFV_stack_6->SetBinError(2,0.8197084);
   hCCpi0inFV_stack_6->SetBinError(3,0.7432872);
   hCCpi0inFV_stack_6->SetBinError(4,0.6741615);
   hCCpi0inFV_stack_6->SetBinError(5,0.6686918);
   hCCpi0inFV_stack_6->SetBinError(6,0.5874026);
   hCCpi0inFV_stack_6->SetBinError(7,0.4685481);
   hCCpi0inFV_stack_6->SetBinError(8,0.4403502);
   hCCpi0inFV_stack_6->SetBinError(9,0.439822);
   hCCpi0inFV_stack_6->SetBinError(10,0.3166946);
   hCCpi0inFV_stack_6->SetBinError(11,0.3318355);
   hCCpi0inFV_stack_6->SetBinError(12,0.2549102);
   hCCpi0inFV_stack_6->SetBinError(13,0.2389267);
   hCCpi0inFV_stack_6->SetBinError(14,0.2108455);
   hCCpi0inFV_stack_6->SetBinError(15,0.1702711);
   hCCpi0inFV_stack_6->SetBinError(16,0.1731663);
   hCCpi0inFV_stack_6->SetBinError(17,0.139124);
   hCCpi0inFV_stack_6->SetBinError(18,0.1110342);
   hCCpi0inFV_stack_6->SetBinError(19,0.3600861);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(1,9.374767);
   hNCinFV_stack_7->SetBinContent(2,2.689434);
   hNCinFV_stack_7->SetBinContent(3,2.549181);
   hNCinFV_stack_7->SetBinContent(4,1.730999);
   hNCinFV_stack_7->SetBinContent(5,1.483174);
   hNCinFV_stack_7->SetBinContent(6,1.395718);
   hNCinFV_stack_7->SetBinContent(7,1.082347);
   hNCinFV_stack_7->SetBinContent(8,0.7124037);
   hNCinFV_stack_7->SetBinContent(9,0.6741531);
   hNCinFV_stack_7->SetBinContent(10,0.6341078);
   hNCinFV_stack_7->SetBinContent(11,0.4609891);
   hNCinFV_stack_7->SetBinContent(12,0.2368697);
   hNCinFV_stack_7->SetBinContent(13,0.2368697);
   hNCinFV_stack_7->SetBinContent(14,0.3480321);
   hNCinFV_stack_7->SetBinContent(15,0.3735324);
   hNCinFV_stack_7->SetBinContent(16,0.213129);
   hNCinFV_stack_7->SetBinContent(17,0.06195629);
   hNCinFV_stack_7->SetBinContent(18,0.03825059);
   hNCinFV_stack_7->SetBinContent(19,1.444924);
   hNCinFV_stack_7->SetBinError(1,0.7096881);
   hNCinFV_stack_7->SetBinError(2,0.3795278);
   hNCinFV_stack_7->SetBinError(3,0.3771646);
   hNCinFV_stack_7->SetBinError(4,0.3036264);
   hNCinFV_stack_7->SetBinError(5,0.2771907);
   hNCinFV_stack_7->SetBinError(6,0.2695755);
   hNCinFV_stack_7->SetBinError(7,0.2439868);
   hNCinFV_stack_7->SetBinError(8,0.1829544);
   hNCinFV_stack_7->SetBinError(9,0.1816166);
   hNCinFV_stack_7->SetBinError(10,0.1884745);
   hNCinFV_stack_7->SetBinError(11,0.1554653);
   hNCinFV_stack_7->SetBinError(12,0.1102997);
   hNCinFV_stack_7->SetBinError(13,0.1102997);
   hNCinFV_stack_7->SetBinError(14,0.1402876);
   hNCinFV_stack_7->SetBinError(15,0.1414417);
   hNCinFV_stack_7->SetBinError(16,0.10883);
   hNCinFV_stack_7->SetBinError(17,0.06195629);
   hNCinFV_stack_7->SetBinError(18,0.02208399);
   hNCinFV_stack_7->SetBinError(19,0.2763096);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(1,14.44387);
   hnumuCCinFV_stack_8->SetBinContent(2,7.778007);
   hnumuCCinFV_stack_8->SetBinContent(3,5.779777);
   hnumuCCinFV_stack_8->SetBinContent(4,3.342101);
   hnumuCCinFV_stack_8->SetBinContent(5,3.249082);
   hnumuCCinFV_stack_8->SetBinContent(6,2.254311);
   hnumuCCinFV_stack_8->SetBinContent(7,0.9105583);
   hnumuCCinFV_stack_8->SetBinContent(8,1.258925);
   hnumuCCinFV_stack_8->SetBinContent(9,0.6871835);
   hnumuCCinFV_stack_8->SetBinContent(10,0.9714467);
   hnumuCCinFV_stack_8->SetBinContent(11,0.9316197);
   hnumuCCinFV_stack_8->SetBinContent(12,0.4330985);
   hnumuCCinFV_stack_8->SetBinContent(13,0.5087804);
   hnumuCCinFV_stack_8->SetBinContent(14,0.2781422);
   hnumuCCinFV_stack_8->SetBinContent(15,0.2669358);
   hnumuCCinFV_stack_8->SetBinContent(16,0.4806159);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2084636);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3014986);
   hnumuCCinFV_stack_8->SetBinContent(19,1.962731);
   hnumuCCinFV_stack_8->SetBinError(1,1.184394);
   hnumuCCinFV_stack_8->SetBinError(2,0.8233937);
   hnumuCCinFV_stack_8->SetBinError(3,0.7068293);
   hnumuCCinFV_stack_8->SetBinError(4,0.5346232);
   hnumuCCinFV_stack_8->SetBinError(5,0.6240652);
   hnumuCCinFV_stack_8->SetBinError(6,0.4559923);
   hnumuCCinFV_stack_8->SetBinError(7,0.2194484);
   hnumuCCinFV_stack_8->SetBinError(8,0.2851654);
   hnumuCCinFV_stack_8->SetBinError(9,0.2000819);
   hnumuCCinFV_stack_8->SetBinError(10,0.2465418);
   hnumuCCinFV_stack_8->SetBinError(11,0.2632622);
   hnumuCCinFV_stack_8->SetBinError(12,0.1509299);
   hnumuCCinFV_stack_8->SetBinError(13,0.1587775);
   hnumuCCinFV_stack_8->SetBinError(14,0.1186435);
   hnumuCCinFV_stack_8->SetBinError(15,0.123876);
   hnumuCCinFV_stack_8->SetBinError(16,0.1867942);
   hnumuCCinFV_stack_8->SetBinError(17,0.08063571);
   hnumuCCinFV_stack_8->SetBinError(18,0.1903721);
   hnumuCCinFV_stack_8->SetBinError(19,0.3483796);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(1,2.451021);
   hnueCCinFV_stack_9->SetBinContent(2,0.179694);
   hnueCCinFV_stack_9->SetBinContent(3,0.2458678);
   hnueCCinFV_stack_9->SetBinContent(4,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(5,0.1003365);
   hnueCCinFV_stack_9->SetBinContent(6,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(7,0.1631205);
   hnueCCinFV_stack_9->SetBinContent(8,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(9,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(10,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(11,0.01951835);
   hnueCCinFV_stack_9->SetBinContent(16,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(19,0.02993857);
   hnueCCinFV_stack_9->SetBinError(1,0.5762531);
   hnueCCinFV_stack_9->SetBinError(2,0.1031721);
   hnueCCinFV_stack_9->SetBinError(3,0.1114615);
   hnueCCinFV_stack_9->SetBinError(4,0.06452687);
   hnueCCinFV_stack_9->SetBinError(5,0.08463596);
   hnueCCinFV_stack_9->SetBinError(6,0.06195629);
   hnueCCinFV_stack_9->SetBinError(7,0.09540945);
   hnueCCinFV_stack_9->SetBinError(8,0.06195629);
   hnueCCinFV_stack_9->SetBinError(9,0.06325464);
   hnueCCinFV_stack_9->SetBinError(10,0.06195629);
   hnueCCinFV_stack_9->SetBinError(11,0.01951836);
   hnueCCinFV_stack_9->SetBinError(16,0.06195629);
   hnueCCinFV_stack_9->SetBinError(19,0.02116648);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmcerror__2->SetBinContent(1,226.3394);
   hmcerror__2->SetBinContent(2,75.84914);
   hmcerror__2->SetBinContent(3,63.64155);
   hmcerror__2->SetBinContent(4,51.98521);
   hmcerror__2->SetBinContent(5,44.12684);
   hmcerror__2->SetBinContent(6,33.39202);
   hmcerror__2->SetBinContent(7,24.04401);
   hmcerror__2->SetBinContent(8,21.56959);
   hmcerror__2->SetBinContent(9,18.50262);
   hmcerror__2->SetBinContent(10,13.98031);
   hmcerror__2->SetBinContent(11,10.33091);
   hmcerror__2->SetBinContent(12,6.2171);
   hmcerror__2->SetBinContent(13,6.333327);
   hmcerror__2->SetBinContent(14,5.664079);
   hmcerror__2->SetBinContent(15,4.25655);
   hmcerror__2->SetBinContent(16,3.643113);
   hmcerror__2->SetBinContent(17,2.723901);
   hmcerror__2->SetBinContent(18,1.766861);
   hmcerror__2->SetBinContent(19,16.6713);
   hmcerror__2->SetBinError(1,45.12957);
   hmcerror__2->SetBinError(2,16.63674);
   hmcerror__2->SetBinError(3,13.89868);
   hmcerror__2->SetBinError(4,12.32207);
   hmcerror__2->SetBinError(5,10.69932);
   hmcerror__2->SetBinError(6,8.169123);
   hmcerror__2->SetBinError(7,6.747207);
   hmcerror__2->SetBinError(8,6.046537);
   hmcerror__2->SetBinError(9,4.653935);
   hmcerror__2->SetBinError(10,4.480576);
   hmcerror__2->SetBinError(11,3.060113);
   hmcerror__2->SetBinError(12,2.172091);
   hmcerror__2->SetBinError(13,2.634371);
   hmcerror__2->SetBinError(14,2.079488);
   hmcerror__2->SetBinError(15,1.72425);
   hmcerror__2->SetBinError(16,1.991834);
   hmcerror__2->SetBinError(17,1.45124);
   hmcerror__2->SetBinError(18,1.277017);
   hmcerror__2->SetBinError(19,5.062814);
   hmcerror__2->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3001[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3001[18] = {
   191,
   55,
   52,
   34,
   43,
   28,
   18,
   13,
   15,
   11,
   7,
   8,
   7,
   5,
   5,
   5,
   0,
   1};
   Double_t _felx3001[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3001[18] = {
   13.82027,
   7.546,
   7.3419,
   5.9703,
   6.6917,
   5.4358,
   4.4008,
   3.77763,
   4.0385,
   3.4975,
   2.85954,
   3.0307,
   2.85954,
   2.48995,
   2.48995,
   2.48995,
   0,
   1};
   Double_t _fehx3001[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3001[18] = {
   13.82027,
   7.3425,
   7.1381,
   5.7635,
   6.4868,
   5.2271,
   4.1858,
   3.5552,
   3.8197,
   3.27,
   2.61053,
   2.7896,
   2.61053,
   2.21064,
   2.21064,
   2.21064,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(225.3023);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.16(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.12/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 498.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 12.8","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 46.3","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.8","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 60.6","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  315.0","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 101.8","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 24.3","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 44.1","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.6","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3002[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3002[18] = {
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
   Double_t _felx3002[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3002[18] = {
   0.1993889,
   0.2193399,
   0.21839,
   0.2370302,
   0.2424673,
   0.2446429,
   0.2806191,
   0.2803269,
   0.2515284,
   0.3204919,
   0.2962095,
   0.3493738,
   0.4159536,
   0.3671361,
   0.4050817,
   0.5467396,
   0.53278,
   0.7227599};
   Double_t _fehx3002[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3002[18] = {
   0.1993889,
   0.2193399,
   0.21839,
   0.2370302,
   0.2424673,
   0.2446429,
   0.2806191,
   0.2803269,
   0.2515284,
   0.3204919,
   0.2962095,
   0.3493738,
   0.4159536,
   0.3671361,
   0.4050817,
   0.5467396,
   0.53278,
   0.7227599};
   grae = new TGraphAsymmErrors(18,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,99);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3003[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3003[18] = {
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
   Double_t _felx3003[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3003[18] = {
   0.1845468,
   0.2025655,
   0.1926666,
   0.202718,
   0.1945404,
   0.2068286,
   0.2027877,
   0.2047931,
   0.1893555,
   0.199867,
   0.2103355,
   0.2608347,
   0.2348048,
   0.2239843,
   0.2365926,
   0.2401037,
   0.259179,
   0.2848695};
   Double_t _fehx3003[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3003[18] = {
   0.1845468,
   0.2025655,
   0.1926666,
   0.202718,
   0.1945404,
   0.2068286,
   0.2027877,
   0.2047931,
   0.1893555,
   0.199867,
   0.2103355,
   0.2608347,
   0.2348048,
   0.2239843,
   0.2365926,
   0.2401037,
   0.259179,
   0.2848695};
   grae = new TGraphAsymmErrors(18,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,99);
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
   
   Double_t _fx3004[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3004[18] = {
   0.8438656,
   0.7251235,
   0.8170763,
   0.6540322,
   0.9744636,
   0.8385236,
   0.7486272,
   0.6027004,
   0.8106958,
   0.7868209,
   0.6775784,
   1.286774,
   1.105264,
   0.882756,
   1.17466,
   1.372453,
   0,
   0.5659753};
   Double_t _felx3004[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3004[18] = {
   0.06105997,
   0.09948695,
   0.1153633,
   0.1148461,
   0.1516469,
   0.1627874,
   0.183031,
   0.1751369,
   0.2182663,
   0.2501733,
   0.2767946,
   0.4874781,
   0.4515067,
   0.4396037,
   0.5849691,
   0.6834677,
   0,
   0.5659753};
   Double_t _fehx3004[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3004[18] = {
   0.06105997,
   0.09680399,
   0.112161,
   0.1108681,
   0.1470035,
   0.1565374,
   0.1740891,
   0.1648246,
   0.206441,
   0.2339004,
   0.2526912,
   0.448698,
   0.4121893,
   0.3902912,
   0.5193502,
   0.6067998,
   0.4213809,
   0.7695623};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.177178);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_kine_pio_gap_high_all",18,0,90);

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
   TLine *line = new TLine(0,1,90,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
