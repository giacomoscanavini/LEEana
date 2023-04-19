#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 13:27:17 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
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
   pad1->Range(-13.84615,-11.1,101.5385,1227.426);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__16->SetBinContent(1,536.1187);
   hmc__16->SetBinContent(2,175.284);
   hmc__16->SetBinContent(3,182.8037);
   hmc__16->SetBinContent(4,183.8806);
   hmc__16->SetBinContent(5,179.452);
   hmc__16->SetBinContent(6,173.6022);
   hmc__16->SetBinContent(7,161.8117);
   hmc__16->SetBinContent(8,151.9393);
   hmc__16->SetBinContent(9,130.4337);
   hmc__16->SetBinContent(10,125.3445);
   hmc__16->SetBinContent(11,100.3605);
   hmc__16->SetBinContent(12,96.0949);
   hmc__16->SetBinContent(13,84.36391);
   hmc__16->SetBinContent(14,69.16785);
   hmc__16->SetBinContent(15,58.75983);
   hmc__16->SetBinContent(16,49.05398);
   hmc__16->SetBinContent(17,47.75635);
   hmc__16->SetBinContent(18,40.23738);
   hmc__16->SetBinContent(19,38.02816);
   hmc__16->SetBinContent(20,27.25813);
   hmc__16->SetBinContent(21,23.99291);
   hmc__16->SetBinContent(22,24.18461);
   hmc__16->SetBinContent(23,24.8806);
   hmc__16->SetBinContent(24,20.9421);
   hmc__16->SetBinContent(25,240.3556);
   hmc__16->SetBinError(1,128.6896);
   hmc__16->SetBinError(2,49.66308);
   hmc__16->SetBinError(3,44.07842);
   hmc__16->SetBinError(4,51.89515);
   hmc__16->SetBinError(5,48.44292);
   hmc__16->SetBinError(6,43.28639);
   hmc__16->SetBinError(7,53.80156);
   hmc__16->SetBinError(8,38.10682);
   hmc__16->SetBinError(9,35.74836);
   hmc__16->SetBinError(10,33.25961);
   hmc__16->SetBinError(11,33.51965);
   hmc__16->SetBinError(12,25.71762);
   hmc__16->SetBinError(13,22.69789);
   hmc__16->SetBinError(14,24.57115);
   hmc__16->SetBinError(15,17.83145);
   hmc__16->SetBinError(16,17.59183);
   hmc__16->SetBinError(17,18.22668);
   hmc__16->SetBinError(18,16.37814);
   hmc__16->SetBinError(19,19.68879);
   hmc__16->SetBinError(20,11.50793);
   hmc__16->SetBinError(21,9.540663);
   hmc__16->SetBinError(22,10.5741);
   hmc__16->SetBinError(23,11.67761);
   hmc__16->SetBinError(24,10.36701);
   hmc__16->SetBinError(25,58.93191);
   hmc__16->SetMinimum(-11.1);
   hmc__16->SetMaximum(1165.5);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,90);
   hs6_stack_6->SetMinimum(-2.843452e-08);
   hs6_stack_6->SetMaximum(562.9245);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,11.53423);
   hbadmatch_stack_1->SetBinContent(2,1.027414);
   hbadmatch_stack_1->SetBinContent(3,3.499285);
   hbadmatch_stack_1->SetBinContent(4,4.298033);
   hbadmatch_stack_1->SetBinContent(5,2.567482);
   hbadmatch_stack_1->SetBinContent(6,4.183084);
   hbadmatch_stack_1->SetBinContent(7,3.430799);
   hbadmatch_stack_1->SetBinContent(8,3.571011);
   hbadmatch_stack_1->SetBinContent(9,1.634093);
   hbadmatch_stack_1->SetBinContent(10,4.451054);
   hbadmatch_stack_1->SetBinContent(11,2.229712);
   hbadmatch_stack_1->SetBinContent(12,1.268811);
   hbadmatch_stack_1->SetBinContent(13,1.517089);
   hbadmatch_stack_1->SetBinContent(14,0.3934307);
   hbadmatch_stack_1->SetBinContent(15,2.535636);
   hbadmatch_stack_1->SetBinContent(16,1.322064);
   hbadmatch_stack_1->SetBinContent(17,0.4589791);
   hbadmatch_stack_1->SetBinContent(18,1.6469);
   hbadmatch_stack_1->SetBinContent(19,1.888089);
   hbadmatch_stack_1->SetBinContent(20,1.112471);
   hbadmatch_stack_1->SetBinContent(21,1.027084);
   hbadmatch_stack_1->SetBinContent(22,0.1950248);
   hbadmatch_stack_1->SetBinContent(23,0.3419244);
   hbadmatch_stack_1->SetBinContent(24,0.9718649);
   hbadmatch_stack_1->SetBinContent(25,9.057304);
   hbadmatch_stack_1->SetBinError(1,1.725824);
   hbadmatch_stack_1->SetBinError(2,0.4611437);
   hbadmatch_stack_1->SetBinError(3,0.9738856);
   hbadmatch_stack_1->SetBinError(4,0.9828931);
   hbadmatch_stack_1->SetBinError(5,1.03266);
   hbadmatch_stack_1->SetBinError(6,1.117288);
   hbadmatch_stack_1->SetBinError(7,0.9457346);
   hbadmatch_stack_1->SetBinError(8,1.229115);
   hbadmatch_stack_1->SetBinError(9,0.748578);
   hbadmatch_stack_1->SetBinError(10,1.863135);
   hbadmatch_stack_1->SetBinError(11,0.7693313);
   hbadmatch_stack_1->SetBinError(12,0.5889569);
   hbadmatch_stack_1->SetBinError(13,0.5887087);
   hbadmatch_stack_1->SetBinError(14,0.2781975);
   hbadmatch_stack_1->SetBinError(15,1.677381);
   hbadmatch_stack_1->SetBinError(16,0.5554667);
   hbadmatch_stack_1->SetBinError(17,0.3281867);
   hbadmatch_stack_1->SetBinError(18,0.6519841);
   hbadmatch_stack_1->SetBinError(19,0.6894747);
   hbadmatch_stack_1->SetBinError(20,0.5897476);
   hbadmatch_stack_1->SetBinError(21,0.4611373);
   hbadmatch_stack_1->SetBinError(22,0.1950249);
   hbadmatch_stack_1->SetBinError(23,0.3401821);
   hbadmatch_stack_1->SetBinError(24,0.500027);
   hbadmatch_stack_1->SetBinError(25,1.676233);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,53.7796);
   hext_stack_2->SetBinContent(2,11.16683);
   hext_stack_2->SetBinContent(3,17.25699);
   hext_stack_2->SetBinContent(4,17.2917);
   hext_stack_2->SetBinContent(5,14.75561);
   hext_stack_2->SetBinContent(6,16.87792);
   hext_stack_2->SetBinContent(7,10.46178);
   hext_stack_2->SetBinContent(8,15.55438);
   hext_stack_2->SetBinContent(9,17.44452);
   hext_stack_2->SetBinContent(10,13.10326);
   hext_stack_2->SetBinContent(11,5.434191);
   hext_stack_2->SetBinContent(12,12.44287);
   hext_stack_2->SetBinContent(13,8.668212);
   hext_stack_2->SetBinContent(14,6.649578);
   hext_stack_2->SetBinContent(15,3.889996);
   hext_stack_2->SetBinContent(16,2.435184);
   hext_stack_2->SetBinContent(17,6.938073);
   hext_stack_2->SetBinContent(18,4.04281);
   hext_stack_2->SetBinContent(19,3.490578);
   hext_stack_2->SetBinContent(20,1.704188);
   hext_stack_2->SetBinContent(21,2.110787);
   hext_stack_2->SetBinContent(22,1.868591);
   hext_stack_2->SetBinContent(23,3.565599);
   hext_stack_2->SetBinContent(24,2.973055);
   hext_stack_2->SetBinContent(25,24.41849);
   hext_stack_2->SetBinError(1,4.964762);
   hext_stack_2->SetBinError(2,2.23033);
   hext_stack_2->SetBinError(3,2.680293);
   hext_stack_2->SetBinError(4,2.883773);
   hext_stack_2->SetBinError(5,2.517163);
   hext_stack_2->SetBinError(6,2.889987);
   hext_stack_2->SetBinError(7,2.057993);
   hext_stack_2->SetBinError(8,2.898201);
   hext_stack_2->SetBinError(9,2.915888);
   hext_stack_2->SetBinError(10,2.478568);
   hext_stack_2->SetBinError(11,1.483351);
   hext_stack_2->SetBinError(12,2.449268);
   hext_stack_2->SetBinError(13,1.946841);
   hext_stack_2->SetBinError(14,1.600367);
   hext_stack_2->SetBinError(15,1.264566);
   hext_stack_2->SetBinError(16,0.9256422);
   hext_stack_2->SetBinError(17,1.916355);
   hext_stack_2->SetBinError(18,1.336183);
   hext_stack_2->SetBinError(19,1.110227);
   hext_stack_2->SetBinError(20,0.7656743);
   hext_stack_2->SetBinError(21,0.8669371);
   hext_stack_2->SetBinError(22,0.840497);
   hext_stack_2->SetBinError(23,1.22225);
   hext_stack_2->SetBinError(24,1.346105);
   hext_stack_2->SetBinError(25,3.341977);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,6.73172);
   hdirt_stack_3->SetBinContent(2,2.120821);
   hdirt_stack_3->SetBinContent(3,3.005912);
   hdirt_stack_3->SetBinContent(4,2.24819);
   hdirt_stack_3->SetBinContent(5,3.064026);
   hdirt_stack_3->SetBinContent(6,2.863865);
   hdirt_stack_3->SetBinContent(7,1.085724);
   hdirt_stack_3->SetBinContent(8,1.571167);
   hdirt_stack_3->SetBinContent(9,2.128724);
   hdirt_stack_3->SetBinContent(10,0.7207426);
   hdirt_stack_3->SetBinContent(11,0.9328297);
   hdirt_stack_3->SetBinContent(12,0.9525174);
   hdirt_stack_3->SetBinContent(13,1.099018);
   hdirt_stack_3->SetBinContent(14,1.075938);
   hdirt_stack_3->SetBinContent(15,0.5250287);
   hdirt_stack_3->SetBinContent(16,0.9250898);
   hdirt_stack_3->SetBinContent(17,1.23266);
   hdirt_stack_3->SetBinContent(19,0.3569671);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.7050098);
   hdirt_stack_3->SetBinContent(22,0.4003859);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(25,3.48567);
   hdirt_stack_3->SetBinError(1,1.318836);
   hdirt_stack_3->SetBinError(2,0.7758211);
   hdirt_stack_3->SetBinError(3,0.9001475);
   hdirt_stack_3->SetBinError(4,0.7553337);
   hdirt_stack_3->SetBinError(5,1.060838);
   hdirt_stack_3->SetBinError(6,0.8715006);
   hdirt_stack_3->SetBinError(7,0.5139736);
   hdirt_stack_3->SetBinError(8,0.6889031);
   hdirt_stack_3->SetBinError(9,1.166289);
   hdirt_stack_3->SetBinError(10,0.4348223);
   hdirt_stack_3->SetBinError(11,0.4264661);
   hdirt_stack_3->SetBinError(12,0.5165933);
   hdirt_stack_3->SetBinError(13,0.5183285);
   hdirt_stack_3->SetBinError(14,0.5725314);
   hdirt_stack_3->SetBinError(15,0.3099441);
   hdirt_stack_3->SetBinError(16,0.57346);
   hdirt_stack_3->SetBinError(17,0.65016);
   hdirt_stack_3->SetBinError(19,0.258803);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,0.4310004);
   hdirt_stack_3->SetBinError(22,0.4003858);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(25,0.9910103);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,55.24133);
   houtFV_stack_4->SetBinContent(2,14.57624);
   houtFV_stack_4->SetBinContent(3,18.30728);
   houtFV_stack_4->SetBinContent(4,16.0955);
   houtFV_stack_4->SetBinContent(5,15.81578);
   houtFV_stack_4->SetBinContent(6,16.91198);
   houtFV_stack_4->SetBinContent(7,14.65553);
   houtFV_stack_4->SetBinContent(8,15.84224);
   houtFV_stack_4->SetBinContent(9,11.35507);
   houtFV_stack_4->SetBinContent(10,16.07138);
   houtFV_stack_4->SetBinContent(11,12.95334);
   houtFV_stack_4->SetBinContent(12,12.17659);
   houtFV_stack_4->SetBinContent(13,9.200753);
   houtFV_stack_4->SetBinContent(14,6.158564);
   houtFV_stack_4->SetBinContent(15,6.483623);
   houtFV_stack_4->SetBinContent(16,6.452723);
   houtFV_stack_4->SetBinContent(17,4.389816);
   houtFV_stack_4->SetBinContent(18,4.299607);
   houtFV_stack_4->SetBinContent(19,2.337525);
   houtFV_stack_4->SetBinContent(20,4.499704);
   houtFV_stack_4->SetBinContent(21,3.08574);
   houtFV_stack_4->SetBinContent(22,3.126077);
   houtFV_stack_4->SetBinContent(23,1.807394);
   houtFV_stack_4->SetBinContent(24,1.663932);
   houtFV_stack_4->SetBinContent(25,28.64407);
   houtFV_stack_4->SetBinError(1,3.72692);
   houtFV_stack_4->SetBinError(2,1.814921);
   houtFV_stack_4->SetBinError(3,2.130702);
   houtFV_stack_4->SetBinError(4,2.022964);
   houtFV_stack_4->SetBinError(5,2.001296);
   houtFV_stack_4->SetBinError(6,2.045701);
   houtFV_stack_4->SetBinError(7,1.875954);
   houtFV_stack_4->SetBinError(8,1.988627);
   houtFV_stack_4->SetBinError(9,1.656087);
   houtFV_stack_4->SetBinError(10,2.021436);
   houtFV_stack_4->SetBinError(11,1.828005);
   houtFV_stack_4->SetBinError(12,1.809814);
   houtFV_stack_4->SetBinError(13,1.478093);
   houtFV_stack_4->SetBinError(14,1.225423);
   houtFV_stack_4->SetBinError(15,1.298692);
   houtFV_stack_4->SetBinError(16,1.233501);
   houtFV_stack_4->SetBinError(17,1.074268);
   houtFV_stack_4->SetBinError(18,1.019167);
   houtFV_stack_4->SetBinError(19,0.8085289);
   houtFV_stack_4->SetBinError(20,1.038616);
   houtFV_stack_4->SetBinError(21,0.8088057);
   houtFV_stack_4->SetBinError(22,0.8995382);
   houtFV_stack_4->SetBinError(23,0.7084844);
   houtFV_stack_4->SetBinError(24,0.6518637);
   houtFV_stack_4->SetBinError(25,2.739198);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,11.74313);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.884436);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.831292);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.205618);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.596218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.10406);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.782046);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.234752);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.707387);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.165334);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.098165);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.703484);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.04883);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.550702);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.957584);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.116504);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.464426);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.59114);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.821558);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3068998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.96189);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.642551);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.166457);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.827381);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7931151);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8287126);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8352618);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.733145);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7183523);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5837978);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.561712);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.576305);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7097221);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.491168);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4502381);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5438164);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6358672);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3597403);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4383392);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4562498);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2990883);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.09253378);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3355772);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9179205);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.16143);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5709538);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5077924);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1902537);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07381642);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,201.3084);
   hNCpi0inFVres_stack_7->SetBinContent(2,77.55916);
   hNCpi0inFVres_stack_7->SetBinContent(3,71.34986);
   hNCpi0inFVres_stack_7->SetBinContent(4,79.85361);
   hNCpi0inFVres_stack_7->SetBinContent(5,77.38456);
   hNCpi0inFVres_stack_7->SetBinContent(6,71.19609);
   hNCpi0inFVres_stack_7->SetBinContent(7,68.85466);
   hNCpi0inFVres_stack_7->SetBinContent(8,63.00175);
   hNCpi0inFVres_stack_7->SetBinContent(9,53.92079);
   hNCpi0inFVres_stack_7->SetBinContent(10,45.93919);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.51902);
   hNCpi0inFVres_stack_7->SetBinContent(12,33.83801);
   hNCpi0inFVres_stack_7->SetBinContent(13,31.84581);
   hNCpi0inFVres_stack_7->SetBinContent(14,28.09591);
   hNCpi0inFVres_stack_7->SetBinContent(15,21.60371);
   hNCpi0inFVres_stack_7->SetBinContent(16,18.6881);
   hNCpi0inFVres_stack_7->SetBinContent(17,16.52001);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.95969);
   hNCpi0inFVres_stack_7->SetBinContent(19,13.68385);
   hNCpi0inFVres_stack_7->SetBinContent(20,10.62529);
   hNCpi0inFVres_stack_7->SetBinContent(21,10.2053);
   hNCpi0inFVres_stack_7->SetBinContent(22,9.674522);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.677852);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.08688);
   hNCpi0inFVres_stack_7->SetBinContent(25,81.50904);
   hNCpi0inFVres_stack_7->SetBinError(1,4.649383);
   hNCpi0inFVres_stack_7->SetBinError(2,2.885091);
   hNCpi0inFVres_stack_7->SetBinError(3,2.684278);
   hNCpi0inFVres_stack_7->SetBinError(4,2.934051);
   hNCpi0inFVres_stack_7->SetBinError(5,2.848491);
   hNCpi0inFVres_stack_7->SetBinError(6,2.71152);
   hNCpi0inFVres_stack_7->SetBinError(7,2.724658);
   hNCpi0inFVres_stack_7->SetBinError(8,2.648503);
   hNCpi0inFVres_stack_7->SetBinError(9,2.405834);
   hNCpi0inFVres_stack_7->SetBinError(10,2.202382);
   hNCpi0inFVres_stack_7->SetBinError(11,2.066675);
   hNCpi0inFVres_stack_7->SetBinError(12,1.878783);
   hNCpi0inFVres_stack_7->SetBinError(13,1.829736);
   hNCpi0inFVres_stack_7->SetBinError(14,1.724087);
   hNCpi0inFVres_stack_7->SetBinError(15,1.478834);
   hNCpi0inFVres_stack_7->SetBinError(16,1.41271);
   hNCpi0inFVres_stack_7->SetBinError(17,1.258478);
   hNCpi0inFVres_stack_7->SetBinError(18,1.220244);
   hNCpi0inFVres_stack_7->SetBinError(19,1.235118);
   hNCpi0inFVres_stack_7->SetBinError(20,1.055303);
   hNCpi0inFVres_stack_7->SetBinError(21,1.047003);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9748794);
   hNCpi0inFVres_stack_7->SetBinError(23,1.013634);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9230653);
   hNCpi0inFVres_stack_7->SetBinError(25,3.00729);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,37.78938);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.7169);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.83796);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.1599);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.38507);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.11686);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.72976);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.16111);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.49617);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.10898);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.403157);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.942499);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.51019);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.308906);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.016119);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.463856);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.069928);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.745002);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.272694);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.769662);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.9200356);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.881926);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.226272);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.632658);
   hNCpi0inFVdis_stack_8->SetBinContent(25,15.56394);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.027589);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.314844);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.281692);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.328635);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.144647);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.089152);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.195703);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9988712);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.014466);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.067131);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8532031);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.068954);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8187108);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6656221);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6287879);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7248253);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6613692);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4991593);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.442096);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.402705);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1979399);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3896052);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.247458);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4648418);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.267288);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,68.49487);
   hCCpi0inFV_stack_10->SetBinContent(2,22.89883);
   hCCpi0inFV_stack_10->SetBinContent(3,22.44358);
   hCCpi0inFV_stack_10->SetBinContent(4,24.32657);
   hCCpi0inFV_stack_10->SetBinContent(5,28.23335);
   hCCpi0inFV_stack_10->SetBinContent(6,21.60684);
   hCCpi0inFV_stack_10->SetBinContent(7,25.43671);
   hCCpi0inFV_stack_10->SetBinContent(8,21.82575);
   hCCpi0inFV_stack_10->SetBinContent(9,17.86295);
   hCCpi0inFV_stack_10->SetBinContent(10,17.71261);
   hCCpi0inFV_stack_10->SetBinContent(11,12.31544);
   hCCpi0inFV_stack_10->SetBinContent(12,12.64118);
   hCCpi0inFV_stack_10->SetBinContent(13,10.23125);
   hCCpi0inFV_stack_10->SetBinContent(14,11.29044);
   hCCpi0inFV_stack_10->SetBinContent(15,8.412642);
   hCCpi0inFV_stack_10->SetBinContent(16,8.802692);
   hCCpi0inFV_stack_10->SetBinContent(17,6.511923);
   hCCpi0inFV_stack_10->SetBinContent(18,4.894825);
   hCCpi0inFV_stack_10->SetBinContent(19,4.589913);
   hCCpi0inFV_stack_10->SetBinContent(20,2.736028);
   hCCpi0inFV_stack_10->SetBinContent(21,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(22,2.977543);
   hCCpi0inFV_stack_10->SetBinContent(23,3.034178);
   hCCpi0inFV_stack_10->SetBinContent(24,2.497284);
   hCCpi0inFV_stack_10->SetBinContent(25,28.8423);
   hCCpi0inFV_stack_10->SetBinError(1,4.113868);
   hCCpi0inFV_stack_10->SetBinError(2,2.394574);
   hCCpi0inFV_stack_10->SetBinError(3,2.330511);
   hCCpi0inFV_stack_10->SetBinError(4,2.498249);
   hCCpi0inFV_stack_10->SetBinError(5,2.706499);
   hCCpi0inFV_stack_10->SetBinError(6,2.305676);
   hCCpi0inFV_stack_10->SetBinError(7,2.550516);
   hCCpi0inFV_stack_10->SetBinError(8,2.358892);
   hCCpi0inFV_stack_10->SetBinError(9,2.094521);
   hCCpi0inFV_stack_10->SetBinError(10,2.122315);
   hCCpi0inFV_stack_10->SetBinError(11,1.732819);
   hCCpi0inFV_stack_10->SetBinError(12,1.781392);
   hCCpi0inFV_stack_10->SetBinError(13,1.559305);
   hCCpi0inFV_stack_10->SetBinError(14,1.688828);
   hCCpi0inFV_stack_10->SetBinError(15,1.429223);
   hCCpi0inFV_stack_10->SetBinError(16,1.455592);
   hCCpi0inFV_stack_10->SetBinError(17,1.226531);
   hCCpi0inFV_stack_10->SetBinError(18,1.075537);
   hCCpi0inFV_stack_10->SetBinError(19,1.092737);
   hCCpi0inFV_stack_10->SetBinError(20,0.8562123);
   hCCpi0inFV_stack_10->SetBinError(21,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(22,0.854493);
   hCCpi0inFV_stack_10->SetBinError(23,0.8325598);
   hCCpi0inFV_stack_10->SetBinError(24,0.7339878);
   hCCpi0inFV_stack_10->SetBinError(25,2.729576);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,38.13158);
   hNCinFV_stack_11->SetBinContent(2,12.17367);
   hNCinFV_stack_11->SetBinContent(3,12.17258);
   hNCinFV_stack_11->SetBinContent(4,10.19529);
   hNCinFV_stack_11->SetBinContent(5,10.02163);
   hNCinFV_stack_11->SetBinContent(6,11.9708);
   hNCinFV_stack_11->SetBinContent(7,11.24057);
   hNCinFV_stack_11->SetBinContent(8,8.947845);
   hNCinFV_stack_11->SetBinContent(9,7.520966);
   hNCinFV_stack_11->SetBinContent(10,8.373996);
   hNCinFV_stack_11->SetBinContent(11,6.456715);
   hNCinFV_stack_11->SetBinContent(12,6.405152);
   hNCinFV_stack_11->SetBinContent(13,7.374122);
   hNCinFV_stack_11->SetBinContent(14,4.391507);
   hNCinFV_stack_11->SetBinContent(15,4.8365);
   hNCinFV_stack_11->SetBinContent(16,2.394159);
   hNCinFV_stack_11->SetBinContent(17,3.126077);
   hNCinFV_stack_11->SetBinContent(18,2.730956);
   hNCinFV_stack_11->SetBinContent(19,4.38825);
   hNCinFV_stack_11->SetBinContent(20,1.804013);
   hNCinFV_stack_11->SetBinContent(21,1.662242);
   hNCinFV_stack_11->SetBinContent(22,2.050601);
   hNCinFV_stack_11->SetBinContent(23,0.7834804);
   hNCinFV_stack_11->SetBinContent(24,0.9269427);
   hNCinFV_stack_11->SetBinContent(25,17.87709);
   hNCinFV_stack_11->SetBinError(1,3.158557);
   hNCinFV_stack_11->SetBinError(2,1.710644);
   hNCinFV_stack_11->SetBinError(3,1.767559);
   hNCinFV_stack_11->SetBinError(4,1.653277);
   hNCinFV_stack_11->SetBinError(5,1.582805);
   hNCinFV_stack_11->SetBinError(6,1.756013);
   hNCinFV_stack_11->SetBinError(7,1.700527);
   hNCinFV_stack_11->SetBinError(8,1.482038);
   hNCinFV_stack_11->SetBinError(9,1.401859);
   hNCinFV_stack_11->SetBinError(10,1.374169);
   hNCinFV_stack_11->SetBinError(11,1.209016);
   hNCinFV_stack_11->SetBinError(12,1.225034);
   hNCinFV_stack_11->SetBinError(13,1.37363);
   hNCinFV_stack_11->SetBinError(14,1.074576);
   hNCinFV_stack_11->SetBinError(15,1.0923);
   hNCinFV_stack_11->SetBinError(16,0.785313);
   hNCinFV_stack_11->SetBinError(17,0.8995382);
   hNCinFV_stack_11->SetBinError(18,0.8550514);
   hNCinFV_stack_11->SetBinError(19,1.007745);
   hNCinFV_stack_11->SetBinError(20,0.7075491);
   hNCinFV_stack_11->SetBinError(21,0.6513556);
   hNCinFV_stack_11->SetBinError(22,0.7068742);
   hNCinFV_stack_11->SetBinError(23,0.3917439);
   hNCinFV_stack_11->SetBinError(24,0.4800908);
   hNCinFV_stack_11->SetBinError(25,2.094179);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,45.13576);
   hnumuCCinFV_stack_12->SetBinContent(2,9.321014);
   hnumuCCinFV_stack_12->SetBinContent(3,12.09187);
   hnumuCCinFV_stack_12->SetBinContent(4,7.033251);
   hnumuCCinFV_stack_12->SetBinContent(5,7.092801);
   hnumuCCinFV_stack_12->SetBinContent(6,6.619052);
   hnumuCCinFV_stack_12->SetBinContent(7,7.134782);
   hnumuCCinFV_stack_12->SetBinContent(8,7.665226);
   hnumuCCinFV_stack_12->SetBinContent(9,4.280597);
   hnumuCCinFV_stack_12->SetBinContent(10,4.078694);
   hnumuCCinFV_stack_12->SetBinContent(11,7.112719);
   hnumuCCinFV_stack_12->SetBinContent(12,3.75266);
   hnumuCCinFV_stack_12->SetBinContent(13,5.031339);
   hnumuCCinFV_stack_12->SetBinContent(14,3.07845);
   hnumuCCinFV_stack_12->SetBinContent(15,2.935881);
   hnumuCCinFV_stack_12->SetBinContent(16,1.942156);
   hnumuCCinFV_stack_12->SetBinContent(17,2.752113);
   hnumuCCinFV_stack_12->SetBinContent(18,3.85794);
   hnumuCCinFV_stack_12->SetBinContent(19,3.666197);
   hnumuCCinFV_stack_12->SetBinContent(20,1.898061);
   hnumuCCinFV_stack_12->SetBinContent(21,2.056748);
   hnumuCCinFV_stack_12->SetBinContent(22,0.8234357);
   hnumuCCinFV_stack_12->SetBinContent(23,3.01136);
   hnumuCCinFV_stack_12->SetBinContent(24,1.729465);
   hnumuCCinFV_stack_12->SetBinContent(25,14.91563);
   hnumuCCinFV_stack_12->SetBinError(1,3.861907);
   hnumuCCinFV_stack_12->SetBinError(2,1.516566);
   hnumuCCinFV_stack_12->SetBinError(3,2.653275);
   hnumuCCinFV_stack_12->SetBinError(4,1.373559);
   hnumuCCinFV_stack_12->SetBinError(5,1.363844);
   hnumuCCinFV_stack_12->SetBinError(6,1.298392);
   hnumuCCinFV_stack_12->SetBinError(7,1.435144);
   hnumuCCinFV_stack_12->SetBinError(8,1.617268);
   hnumuCCinFV_stack_12->SetBinError(9,1.0784);
   hnumuCCinFV_stack_12->SetBinError(10,0.9560854);
   hnumuCCinFV_stack_12->SetBinError(11,1.675226);
   hnumuCCinFV_stack_12->SetBinError(12,0.9721742);
   hnumuCCinFV_stack_12->SetBinError(13,1.163941);
   hnumuCCinFV_stack_12->SetBinError(14,0.8853038);
   hnumuCCinFV_stack_12->SetBinError(15,0.8346876);
   hnumuCCinFV_stack_12->SetBinError(16,0.7902081);
   hnumuCCinFV_stack_12->SetBinError(17,0.8150405);
   hnumuCCinFV_stack_12->SetBinError(18,1.050011);
   hnumuCCinFV_stack_12->SetBinError(19,1.278338);
   hnumuCCinFV_stack_12->SetBinError(20,0.7641022);
   hnumuCCinFV_stack_12->SetBinError(21,0.8142971);
   hnumuCCinFV_stack_12->SetBinError(22,0.413091);
   hnumuCCinFV_stack_12->SetBinError(23,1.435788);
   hnumuCCinFV_stack_12->SetBinError(24,1.036195);
   hnumuCCinFV_stack_12->SetBinError(25,1.979591);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,3.914047);
   hnueCCinFV_stack_13->SetBinContent(2,2.267722);
   hnueCCinFV_stack_13->SetBinContent(3,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(4,0.7542815);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,2.649318);
   hnueCCinFV_stack_13->SetBinContent(7,1.469717);
   hnueCCinFV_stack_13->SetBinContent(8,0.3966292);
   hnueCCinFV_stack_13->SetBinContent(9,0.678202);
   hnueCCinFV_stack_13->SetBinContent(10,1.159045);
   hnueCCinFV_stack_13->SetBinContent(11,1.486508);
   hnueCCinFV_stack_13->SetBinContent(12,0.6361428);
   hnueCCinFV_stack_13->SetBinContent(13,0.6699017);
   hnueCCinFV_stack_13->SetBinContent(14,0.9510591);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.4556582);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2451434);
   hnueCCinFV_stack_13->SetBinContent(19,0.4073255);
   hnueCCinFV_stack_13->SetBinContent(20,0.4153488);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,7.00875);
   hnueCCinFV_stack_13->SetBinError(1,1.442979);
   hnueCCinFV_stack_13->SetBinError(2,0.8768042);
   hnueCCinFV_stack_13->SetBinError(3,0.3397478);
   hnueCCinFV_stack_13->SetBinError(4,0.4416112);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,1.431319);
   hnueCCinFV_stack_13->SetBinError(7,0.6615517);
   hnueCCinFV_stack_13->SetBinError(8,0.2770479);
   hnueCCinFV_stack_13->SetBinError(9,0.5201215);
   hnueCCinFV_stack_13->SetBinError(10,0.5936429);
   hnueCCinFV_stack_13->SetBinError(11,0.7750286);
   hnueCCinFV_stack_13->SetBinError(12,0.3692352);
   hnueCCinFV_stack_13->SetBinError(13,0.3925627);
   hnueCCinFV_stack_13->SetBinError(14,0.5953709);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.3255218);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2451269);
   hnueCCinFV_stack_13->SetBinError(19,0.4073256);
   hnueCCinFV_stack_13->SetBinError(20,0.2942402);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,2.126059);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__17->SetBinContent(1,536.1187);
   hmcerror__17->SetBinContent(2,175.284);
   hmcerror__17->SetBinContent(3,182.8037);
   hmcerror__17->SetBinContent(4,183.8806);
   hmcerror__17->SetBinContent(5,179.452);
   hmcerror__17->SetBinContent(6,173.6022);
   hmcerror__17->SetBinContent(7,161.8117);
   hmcerror__17->SetBinContent(8,151.9393);
   hmcerror__17->SetBinContent(9,130.4337);
   hmcerror__17->SetBinContent(10,125.3445);
   hmcerror__17->SetBinContent(11,100.3605);
   hmcerror__17->SetBinContent(12,96.0949);
   hmcerror__17->SetBinContent(13,84.36391);
   hmcerror__17->SetBinContent(14,69.16785);
   hmcerror__17->SetBinContent(15,58.75983);
   hmcerror__17->SetBinContent(16,49.05398);
   hmcerror__17->SetBinContent(17,47.75635);
   hmcerror__17->SetBinContent(18,40.23738);
   hmcerror__17->SetBinContent(19,38.02816);
   hmcerror__17->SetBinContent(20,27.25813);
   hmcerror__17->SetBinContent(21,23.99291);
   hmcerror__17->SetBinContent(22,24.18461);
   hmcerror__17->SetBinContent(23,24.8806);
   hmcerror__17->SetBinContent(24,20.9421);
   hmcerror__17->SetBinContent(25,240.3556);
   hmcerror__17->SetBinError(1,128.6896);
   hmcerror__17->SetBinError(2,49.66308);
   hmcerror__17->SetBinError(3,44.07842);
   hmcerror__17->SetBinError(4,51.89515);
   hmcerror__17->SetBinError(5,48.44292);
   hmcerror__17->SetBinError(6,43.28639);
   hmcerror__17->SetBinError(7,53.80156);
   hmcerror__17->SetBinError(8,38.10682);
   hmcerror__17->SetBinError(9,35.74836);
   hmcerror__17->SetBinError(10,33.25961);
   hmcerror__17->SetBinError(11,33.51965);
   hmcerror__17->SetBinError(12,25.71762);
   hmcerror__17->SetBinError(13,22.69789);
   hmcerror__17->SetBinError(14,24.57115);
   hmcerror__17->SetBinError(15,17.83145);
   hmcerror__17->SetBinError(16,17.59183);
   hmcerror__17->SetBinError(17,18.22668);
   hmcerror__17->SetBinError(18,16.37814);
   hmcerror__17->SetBinError(19,19.68879);
   hmcerror__17->SetBinError(20,11.50793);
   hmcerror__17->SetBinError(21,9.540663);
   hmcerror__17->SetBinError(22,10.5741);
   hmcerror__17->SetBinError(23,11.67761);
   hmcerror__17->SetBinError(24,10.36701);
   hmcerror__17->SetBinError(25,58.93191);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3021[24] = {
   555,
   171,
   185,
   197,
   169,
   157,
   155,
   128,
   112,
   117,
   116,
   81,
   103,
   60,
   76,
   59,
   54,
   36,
   39,
   35,
   23,
   27,
   17,
   18};
   Double_t _felx3021[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3021[24] = {
   23.55844,
   13.0767,
   13.60147,
   14.03567,
   13,
   12.52996,
   12.4499,
   11.31371,
   10.58301,
   10.81665,
   10.77033,
   9.1239,
   10.14889,
   7.8743,
   8.8425,
   7.8097,
   7.4785,
   6.1381,
   6.3813,
   6.0548,
   4.9457,
   5.3414,
   4.2835,
   4.4008};
   Double_t _fehx3021[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3021[24] = {
   23.55844,
   13.0767,
   13.60147,
   14.03567,
   13,
   12.52996,
   12.4499,
   11.31371,
   10.58301,
   10.81665,
   10.77033,
   8.9221,
   10.14889,
   7.6713,
   8.6406,
   7.6066,
   7.275,
   5.9318,
   6.1757,
   5.8483,
   4.7346,
   5.1322,
   4.0673,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,99);
   Graph_Graph3021->SetMinimum(11.44485);
   Graph_Graph3021->SetMaximum(635.1426);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.99#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2690.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 253.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 34.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 273.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  78.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1076.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  205.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 363.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 180.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 154.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3022[24] = {
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
   Double_t _felx3022[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3022[24] = {
   0.2400395,
   0.2833293,
   0.2411243,
   0.2822219,
   0.2699491,
   0.2493423,
   0.3324949,
   0.250803,
   0.2740731,
   0.2653457,
   0.3339925,
   0.2676273,
   0.2690473,
   0.3552394,
   0.3034633,
   0.3586219,
   0.3816597,
   0.4070379,
   0.5177423,
   0.4221836,
   0.3976451,
   0.4372241,
   0.4693462,
   0.4950318};
   Double_t _fehx3022[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3022[24] = {
   0.2400395,
   0.2833293,
   0.2411243,
   0.2822219,
   0.2699491,
   0.2493423,
   0.3324949,
   0.250803,
   0.2740731,
   0.2653457,
   0.3339925,
   0.2676273,
   0.2690473,
   0.3552394,
   0.3034633,
   0.3586219,
   0.3816597,
   0.4070379,
   0.5177423,
   0.4221836,
   0.3976451,
   0.4372241,
   0.4693462,
   0.4950318};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,99);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3023[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3023[24] = {
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
   Double_t _felx3023[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3023[24] = {
   0.2146818,
   0.2136826,
   0.2085838,
   0.2160046,
   0.212375,
   0.2091187,
   0.2198244,
   0.2044324,
   0.1962155,
   0.2014833,
   0.2144903,
   0.1983813,
   0.1996056,
   0.2153475,
   0.2193086,
   0.233745,
   0.2055311,
   0.2105789,
   0.2196614,
   0.2343723,
   0.2277554,
   0.2314996,
   0.248535,
   0.2484996};
   Double_t _fehx3023[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3023[24] = {
   0.2146818,
   0.2136826,
   0.2085838,
   0.2160046,
   0.212375,
   0.2091187,
   0.2198244,
   0.2044324,
   0.1962155,
   0.2014833,
   0.2144903,
   0.1983813,
   0.1996056,
   0.2153475,
   0.2193086,
   0.233745,
   0.2055311,
   0.2105789,
   0.2196614,
   0.2343723,
   0.2277554,
   0.2314996,
   0.248535,
   0.2484996};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,99);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3024[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3024[24] = {
   1.035219,
   0.9755599,
   1.012014,
   1.071347,
   0.9417559,
   0.9043662,
   0.9579037,
   0.8424419,
   0.858674,
   0.9334277,
   1.155834,
   0.8429167,
   1.220901,
   0.8674551,
   1.293401,
   1.202757,
   1.13074,
   0.8946904,
   1.025556,
   1.284021,
   0.9586166,
   1.116412,
   0.6832634,
   0.8595126};
   Double_t _felx3024[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3024[24] = {
   0.04394258,
   0.07460293,
   0.07440478,
   0.07633033,
   0.07244276,
   0.07217628,
   0.07694068,
   0.07446205,
   0.08113707,
   0.08629542,
   0.1073165,
   0.09494676,
   0.120299,
   0.1138434,
   0.1504855,
   0.1592063,
   0.156597,
   0.1525472,
   0.1678046,
   0.2221282,
   0.2061317,
   0.2208594,
   0.1721623,
   0.2101413};
   Double_t _fehx3024[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3024[24] = {
   0.04394258,
   0.07460293,
   0.07440478,
   0.07633033,
   0.07244276,
   0.07217628,
   0.07694068,
   0.07446205,
   0.08113707,
   0.08629542,
   0.1073165,
   0.09284676,
   0.120299,
   0.1109085,
   0.1470494,
   0.1550659,
   0.1523358,
   0.1474201,
   0.1623981,
   0.2145525,
   0.1973333,
   0.2122093,
   0.1634728,
   0.1998749};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,99);
   Graph_Graph3024->SetMinimum(0.4123539);
   Graph_Graph3024->SetMaximum(1.59732);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
