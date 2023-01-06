#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 22:48:02 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",242,172,1200,900);
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
   pad1->Range(-0.4846154,-6.1,3.553846,674.5316);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__16->SetBinContent(1,66.3961);
   hmc__16->SetBinContent(2,162.0977);
   hmc__16->SetBinContent(3,236.9254);
   hmc__16->SetBinContent(4,274.7037);
   hmc__16->SetBinContent(5,267.6388);
   hmc__16->SetBinContent(6,252.5822);
   hmc__16->SetBinContent(7,236.5638);
   hmc__16->SetBinContent(8,210.5673);
   hmc__16->SetBinContent(9,173.7144);
   hmc__16->SetBinContent(10,144.3281);
   hmc__16->SetBinContent(11,113.5246);
   hmc__16->SetBinContent(12,96.22181);
   hmc__16->SetBinContent(13,82.07526);
   hmc__16->SetBinContent(14,59.07585);
   hmc__16->SetBinContent(15,61.80423);
   hmc__16->SetBinContent(16,51.23514);
   hmc__16->SetBinContent(17,48.89026);
   hmc__16->SetBinContent(18,46.93508);
   hmc__16->SetBinContent(19,47.58095);
   hmc__16->SetBinContent(20,44.99953);
   hmc__16->SetBinContent(21,38.02798);
   hmc__16->SetBinContent(22,36.00742);
   hmc__16->SetBinContent(23,23.25077);
   hmc__16->SetBinContent(24,15.46438);
   hmc__16->SetBinContent(25,5.285103);
   hmc__16->SetBinError(1,28.05726);
   hmc__16->SetBinError(2,46.26241);
   hmc__16->SetBinError(3,62.16746);
   hmc__16->SetBinError(4,74.23927);
   hmc__16->SetBinError(5,68.6062);
   hmc__16->SetBinError(6,70.21906);
   hmc__16->SetBinError(7,62.23825);
   hmc__16->SetBinError(8,61.86659);
   hmc__16->SetBinError(9,50.86242);
   hmc__16->SetBinError(10,39.30577);
   hmc__16->SetBinError(11,30.17843);
   hmc__16->SetBinError(12,25.45316);
   hmc__16->SetBinError(13,29.47417);
   hmc__16->SetBinError(14,20.39126);
   hmc__16->SetBinError(15,19.49404);
   hmc__16->SetBinError(16,20.57037);
   hmc__16->SetBinError(17,15.504);
   hmc__16->SetBinError(18,17.9229);
   hmc__16->SetBinError(19,23.27497);
   hmc__16->SetBinError(20,15.25909);
   hmc__16->SetBinError(21,15.12073);
   hmc__16->SetBinError(22,15.44813);
   hmc__16->SetBinError(23,13.21658);
   hmc__16->SetBinError(24,10.80687);
   hmc__16->SetBinError(25,4.884793);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-6.1);
   hmc__16->SetMaximum(640.5);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,3.15);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(288.4389);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.368111);
   hbadmatch_stack_1->SetBinContent(2,3.097394);
   hbadmatch_stack_1->SetBinContent(3,4.181875);
   hbadmatch_stack_1->SetBinContent(4,4.417009);
   hbadmatch_stack_1->SetBinContent(5,5.070259);
   hbadmatch_stack_1->SetBinContent(6,5.334084);
   hbadmatch_stack_1->SetBinContent(7,4.680149);
   hbadmatch_stack_1->SetBinContent(8,4.922172);
   hbadmatch_stack_1->SetBinContent(9,4.209001);
   hbadmatch_stack_1->SetBinContent(10,2.869585);
   hbadmatch_stack_1->SetBinContent(11,2.926641);
   hbadmatch_stack_1->SetBinContent(12,2.398999);
   hbadmatch_stack_1->SetBinContent(13,2.886622);
   hbadmatch_stack_1->SetBinContent(14,0.4778508);
   hbadmatch_stack_1->SetBinContent(15,2.566145);
   hbadmatch_stack_1->SetBinContent(16,2.873474);
   hbadmatch_stack_1->SetBinContent(17,2.169022);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,0.7092546);
   hbadmatch_stack_1->SetBinContent(20,1.663932);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,2.989309);
   hbadmatch_stack_1->SetBinContent(23,0.5384513);
   hbadmatch_stack_1->SetBinContent(24,0.8613113);
   hbadmatch_stack_1->SetBinError(1,1.128242);
   hbadmatch_stack_1->SetBinError(2,0.9123585);
   hbadmatch_stack_1->SetBinError(3,1.11694);
   hbadmatch_stack_1->SetBinError(4,1.116117);
   hbadmatch_stack_1->SetBinError(5,1.199781);
   hbadmatch_stack_1->SetBinError(6,1.229316);
   hbadmatch_stack_1->SetBinError(7,1.204628);
   hbadmatch_stack_1->SetBinError(8,1.118953);
   hbadmatch_stack_1->SetBinError(9,1.050232);
   hbadmatch_stack_1->SetBinError(10,0.9111957);
   hbadmatch_stack_1->SetBinError(11,0.926287);
   hbadmatch_stack_1->SetBinError(12,0.8008483);
   hbadmatch_stack_1->SetBinError(13,1.692314);
   hbadmatch_stack_1->SetBinError(14,0.4093511);
   hbadmatch_stack_1->SetBinError(15,0.8406984);
   hbadmatch_stack_1->SetBinError(16,0.8522423);
   hbadmatch_stack_1->SetBinError(17,0.766218);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.4360103);
   hbadmatch_stack_1->SetBinError(20,0.6518637);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,1.755927);
   hbadmatch_stack_1->SetBinError(23,0.382871);
   hbadmatch_stack_1->SetBinError(24,0.5479452);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,2.096426);
   hext_stack_2->SetBinContent(2,3.248382);
   hext_stack_2->SetBinContent(3,11.43497);
   hext_stack_2->SetBinContent(4,15.74751);
   hext_stack_2->SetBinContent(5,16.0372);
   hext_stack_2->SetBinContent(6,19.68941);
   hext_stack_2->SetBinContent(7,22.58026);
   hext_stack_2->SetBinContent(8,31.61476);
   hext_stack_2->SetBinContent(9,19.50623);
   hext_stack_2->SetBinContent(10,26.15298);
   hext_stack_2->SetBinContent(11,23.27095);
   hext_stack_2->SetBinContent(12,19.13434);
   hext_stack_2->SetBinContent(13,10.39835);
   hext_stack_2->SetBinContent(14,6.407382);
   hext_stack_2->SetBinContent(15,12.75291);
   hext_stack_2->SetBinContent(16,2.759582);
   hext_stack_2->SetBinContent(17,5.676386);
   hext_stack_2->SetBinContent(18,7.638769);
   hext_stack_2->SetBinContent(19,3.946247);
   hext_stack_2->SetBinContent(20,5.967652);
   hext_stack_2->SetBinContent(21,6.456453);
   hext_stack_2->SetBinContent(22,2.973055);
   hext_stack_2->SetBinContent(23,1.454812);
   hext_stack_2->SetBinContent(24,1.055394);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(1,1.074236);
   hext_stack_2->SetBinError(2,1.089706);
   hext_stack_2->SetBinError(3,2.133316);
   hext_stack_2->SetBinError(4,2.777579);
   hext_stack_2->SetBinError(5,2.586117);
   hext_stack_2->SetBinError(6,2.894323);
   hext_stack_2->SetBinError(7,3.182611);
   hext_stack_2->SetBinError(8,3.867223);
   hext_stack_2->SetBinError(9,2.919625);
   hext_stack_2->SetBinError(10,3.571011);
   hext_stack_2->SetBinError(11,3.35715);
   hext_stack_2->SetBinError(12,3.080757);
   hext_stack_2->SetBinError(13,1.976858);
   hext_stack_2->SetBinError(14,1.5862);
   hext_stack_2->SetBinError(15,2.550794);
   hext_stack_2->SetBinError(16,0.98084);
   hext_stack_2->SetBinError(17,1.49849);
   hext_stack_2->SetBinError(18,1.716368);
   hext_stack_2->SetBinError(19,1.458663);
   hext_stack_2->SetBinError(20,1.737927);
   hext_stack_2->SetBinError(21,1.801611);
   hext_stack_2->SetBinError(22,1.346105);
   hext_stack_2->SetBinError(23,0.8615765);
   hext_stack_2->SetBinError(24,0.6130171);
   hext_stack_2->SetBinError(25,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(2,1.373798);
   hdirt_stack_3->SetBinContent(3,1.609204);
   hdirt_stack_3->SetBinContent(4,3.409109);
   hdirt_stack_3->SetBinContent(5,2.048982);
   hdirt_stack_3->SetBinContent(6,3.438283);
   hdirt_stack_3->SetBinContent(7,5.641155);
   hdirt_stack_3->SetBinContent(8,1.442946);
   hdirt_stack_3->SetBinContent(9,2.802237);
   hdirt_stack_3->SetBinContent(10,2.886183);
   hdirt_stack_3->SetBinContent(11,0.9350516);
   hdirt_stack_3->SetBinContent(12,2.198194);
   hdirt_stack_3->SetBinContent(13,1.375092);
   hdirt_stack_3->SetBinContent(15,1.408814);
   hdirt_stack_3->SetBinContent(16,1.079247);
   hdirt_stack_3->SetBinContent(17,1.185026);
   hdirt_stack_3->SetBinContent(18,1.195144);
   hdirt_stack_3->SetBinContent(19,1.655958);
   hdirt_stack_3->SetBinContent(20,0.5132258);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(22,0.2863297);
   hdirt_stack_3->SetBinContent(23,0.6287382);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(2,0.5770587);
   hdirt_stack_3->SetBinError(3,0.6407921);
   hdirt_stack_3->SetBinError(4,1.118716);
   hdirt_stack_3->SetBinError(5,0.6986382);
   hdirt_stack_3->SetBinError(6,0.9538944);
   hdirt_stack_3->SetBinError(7,1.595794);
   hdirt_stack_3->SetBinError(8,0.5291925);
   hdirt_stack_3->SetBinError(9,0.8375357);
   hdirt_stack_3->SetBinError(10,0.8531248);
   hdirt_stack_3->SetBinError(11,0.4360798);
   hdirt_stack_3->SetBinError(12,0.8242715);
   hdirt_stack_3->SetBinError(13,0.6472427);
   hdirt_stack_3->SetBinError(15,0.6008309);
   hdirt_stack_3->SetBinError(16,0.4950985);
   hdirt_stack_3->SetBinError(17,0.6144272);
   hdirt_stack_3->SetBinError(18,0.568435);
   hdirt_stack_3->SetBinError(19,0.7173906);
   hdirt_stack_3->SetBinError(20,0.3997556);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(22,0.2025938);
   hdirt_stack_3->SetBinError(23,0.3958337);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetBinError(25,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.072584);
   houtFV_stack_4->SetBinContent(2,9.652059);
   houtFV_stack_4->SetBinContent(3,16.77943);
   houtFV_stack_4->SetBinContent(4,22.65795);
   houtFV_stack_4->SetBinContent(5,21.59885);
   houtFV_stack_4->SetBinContent(6,28.65302);
   houtFV_stack_4->SetBinContent(7,27.53185);
   houtFV_stack_4->SetBinContent(8,25.8323);
   houtFV_stack_4->SetBinContent(9,19.77258);
   houtFV_stack_4->SetBinContent(10,15.22621);
   houtFV_stack_4->SetBinContent(11,13.7364);
   houtFV_stack_4->SetBinContent(12,12.89663);
   houtFV_stack_4->SetBinContent(13,9.134848);
   houtFV_stack_4->SetBinContent(14,8.156098);
   houtFV_stack_4->SetBinContent(15,7.370934);
   houtFV_stack_4->SetBinContent(16,6.739181);
   houtFV_stack_4->SetBinContent(17,4.778684);
   houtFV_stack_4->SetBinContent(18,7.846294);
   houtFV_stack_4->SetBinContent(19,5.253034);
   houtFV_stack_4->SetBinContent(20,4.907917);
   houtFV_stack_4->SetBinContent(21,5.189898);
   houtFV_stack_4->SetBinContent(22,4.754329);
   houtFV_stack_4->SetBinContent(23,1.404292);
   houtFV_stack_4->SetBinContent(24,0.6765171);
   houtFV_stack_4->SetBinContent(25,0.6803553);
   houtFV_stack_4->SetBinError(1,0.8917918);
   houtFV_stack_4->SetBinError(2,1.552126);
   houtFV_stack_4->SetBinError(3,2.043309);
   houtFV_stack_4->SetBinError(4,2.388424);
   houtFV_stack_4->SetBinError(5,2.293667);
   houtFV_stack_4->SetBinError(6,2.71005);
   houtFV_stack_4->SetBinError(7,2.610926);
   houtFV_stack_4->SetBinError(8,2.599763);
   houtFV_stack_4->SetBinError(9,2.234803);
   houtFV_stack_4->SetBinError(10,1.87252);
   houtFV_stack_4->SetBinError(11,1.860695);
   houtFV_stack_4->SetBinError(12,1.780194);
   houtFV_stack_4->SetBinError(13,1.568397);
   houtFV_stack_4->SetBinError(14,1.450828);
   houtFV_stack_4->SetBinError(15,1.307984);
   houtFV_stack_4->SetBinError(16,1.302079);
   houtFV_stack_4->SetBinError(17,1.038593);
   houtFV_stack_4->SetBinError(18,1.471471);
   houtFV_stack_4->SetBinError(19,1.119503);
   houtFV_stack_4->SetBinError(20,0.9824469);
   houtFV_stack_4->SetBinError(21,1.169851);
   houtFV_stack_4->SetBinError(22,1.163402);
   houtFV_stack_4->SetBinError(23,0.6747841);
   houtFV_stack_4->SetBinError(24,0.3969027);
   houtFV_stack_4->SetBinError(25,0.4810838);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.333199);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,16.86123);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.59014);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.42134);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.56984);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.631183);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.652744);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.417448);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.326479);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.539485);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7097455);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5528694);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2262865);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3012902);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1494983);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.541642);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.110645);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.7843217);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7952745);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.211252);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.161346);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9705523);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4555764);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.086962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.505273);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.658251);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.453129);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.214669);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9191357);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9216448);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5771399);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3766476);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4933052);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3360649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2330651);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.09310761);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2089325);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.07184377);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2445897);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3826694);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3600104);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2776075);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4353218);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4527909);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3863899);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2943632);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5067778);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2893458);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7843691);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8593358);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9522646);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2030095);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7102362);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2270149);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.09672254);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.214101);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2616994);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05832467);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2824675);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06853444);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07339665);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02889211);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.06086722);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1366079);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1741744);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2801204);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1095292);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2294958);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2949481);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3734929);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07081574);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2687939);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.09784979);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0673052);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.08190198);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1597689);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03366467);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1136635);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04533176);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04480907);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02889211);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03641055);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1223278);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1190906);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.02291);
   hNCpi0inFVres_stack_7->SetBinContent(2,53.71644);
   hNCpi0inFVres_stack_7->SetBinContent(3,83.84476);
   hNCpi0inFVres_stack_7->SetBinContent(4,103.0554);
   hNCpi0inFVres_stack_7->SetBinContent(5,104.278);
   hNCpi0inFVres_stack_7->SetBinContent(6,103.6581);
   hNCpi0inFVres_stack_7->SetBinContent(7,90.14423);
   hNCpi0inFVres_stack_7->SetBinContent(8,83.72639);
   hNCpi0inFVres_stack_7->SetBinContent(9,70.70034);
   hNCpi0inFVres_stack_7->SetBinContent(10,52.08047);
   hNCpi0inFVres_stack_7->SetBinContent(11,40.16108);
   hNCpi0inFVres_stack_7->SetBinContent(12,35.59875);
   hNCpi0inFVres_stack_7->SetBinContent(13,29.96469);
   hNCpi0inFVres_stack_7->SetBinContent(14,24.13622);
   hNCpi0inFVres_stack_7->SetBinContent(15,18.13909);
   hNCpi0inFVres_stack_7->SetBinContent(16,18.5163);
   hNCpi0inFVres_stack_7->SetBinContent(17,20.20884);
   hNCpi0inFVres_stack_7->SetBinContent(18,16.51594);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.86057);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.47921);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.60484);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.66986);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.69705);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.327662);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.692375);
   hNCpi0inFVres_stack_7->SetBinError(1,1.668045);
   hNCpi0inFVres_stack_7->SetBinError(2,2.424385);
   hNCpi0inFVres_stack_7->SetBinError(3,3.122891);
   hNCpi0inFVres_stack_7->SetBinError(4,3.528671);
   hNCpi0inFVres_stack_7->SetBinError(5,3.575842);
   hNCpi0inFVres_stack_7->SetBinError(6,3.527683);
   hNCpi0inFVres_stack_7->SetBinError(7,3.204682);
   hNCpi0inFVres_stack_7->SetBinError(8,3.206485);
   hNCpi0inFVres_stack_7->SetBinError(9,3.017543);
   hNCpi0inFVres_stack_7->SetBinError(10,2.53409);
   hNCpi0inFVres_stack_7->SetBinError(11,2.054316);
   hNCpi0inFVres_stack_7->SetBinError(12,2.043376);
   hNCpi0inFVres_stack_7->SetBinError(13,1.923806);
   hNCpi0inFVres_stack_7->SetBinError(14,1.715722);
   hNCpi0inFVres_stack_7->SetBinError(15,1.390107);
   hNCpi0inFVres_stack_7->SetBinError(16,1.406359);
   hNCpi0inFVres_stack_7->SetBinError(17,1.568949);
   hNCpi0inFVres_stack_7->SetBinError(18,1.352364);
   hNCpi0inFVres_stack_7->SetBinError(19,1.575681);
   hNCpi0inFVres_stack_7->SetBinError(20,1.244642);
   hNCpi0inFVres_stack_7->SetBinError(21,1.055134);
   hNCpi0inFVres_stack_7->SetBinError(22,1.24222);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9741937);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7043582);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3534955);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.309971);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.27245);
   hNCpi0inFVdis_stack_8->SetBinContent(3,24.6561);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.33858);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.14774);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.093);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.87861);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.72789);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.07539);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.379554);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.8901);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.762024);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.527226);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.705612);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.528056);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.29819);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.888306);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.777019);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.717939);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.27756);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.8961);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.463913);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.73304);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.301824);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1159715);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9487019);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.303397);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.813342);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.723976);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.514425);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.447737);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.22791);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.282255);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.173112);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9234931);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8662596);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.676397);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.050103);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5054237);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5960571);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6410498);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5616067);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4153864);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7752293);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6179223);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5911235);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8422945);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3578214);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4380994);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.06622012);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1447332);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.129994);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.726254);
   hCCpi0inFV_stack_10->SetBinContent(2,26.78363);
   hCCpi0inFV_stack_10->SetBinContent(3,37.2985);
   hCCpi0inFV_stack_10->SetBinContent(4,46.69913);
   hCCpi0inFV_stack_10->SetBinContent(5,40.95925);
   hCCpi0inFV_stack_10->SetBinContent(6,31.75134);
   hCCpi0inFV_stack_10->SetBinContent(7,35.3996);
   hCCpi0inFV_stack_10->SetBinContent(8,26.02854);
   hCCpi0inFV_stack_10->SetBinContent(9,23.06606);
   hCCpi0inFV_stack_10->SetBinContent(10,18.07902);
   hCCpi0inFV_stack_10->SetBinContent(11,13.98106);
   hCCpi0inFV_stack_10->SetBinContent(12,6.410223);
   hCCpi0inFV_stack_10->SetBinContent(13,10.4083);
   hCCpi0inFV_stack_10->SetBinContent(14,6.676661);
   hCCpi0inFV_stack_10->SetBinContent(15,8.415854);
   hCCpi0inFV_stack_10->SetBinContent(16,9.871407);
   hCCpi0inFV_stack_10->SetBinContent(17,5.985116);
   hCCpi0inFV_stack_10->SetBinContent(18,5.531462);
   hCCpi0inFV_stack_10->SetBinContent(19,6.00834);
   hCCpi0inFV_stack_10->SetBinContent(20,6.745329);
   hCCpi0inFV_stack_10->SetBinContent(21,4.30806);
   hCCpi0inFV_stack_10->SetBinContent(22,4.109654);
   hCCpi0inFV_stack_10->SetBinContent(23,3.989507);
   hCCpi0inFV_stack_10->SetBinContent(24,2.780828);
   hCCpi0inFV_stack_10->SetBinContent(25,1.123658);
   hCCpi0inFV_stack_10->SetBinError(1,1.53229);
   hCCpi0inFV_stack_10->SetBinError(2,2.562758);
   hCCpi0inFV_stack_10->SetBinError(3,2.998442);
   hCCpi0inFV_stack_10->SetBinError(4,3.470534);
   hCCpi0inFV_stack_10->SetBinError(5,3.195932);
   hCCpi0inFV_stack_10->SetBinError(6,2.85476);
   hCCpi0inFV_stack_10->SetBinError(7,2.985685);
   hCCpi0inFV_stack_10->SetBinError(8,2.573303);
   hCCpi0inFV_stack_10->SetBinError(9,2.400182);
   hCCpi0inFV_stack_10->SetBinError(10,2.118262);
   hCCpi0inFV_stack_10->SetBinError(11,1.851554);
   hCCpi0inFV_stack_10->SetBinError(12,1.225845);
   hCCpi0inFV_stack_10->SetBinError(13,1.606243);
   hCCpi0inFV_stack_10->SetBinError(14,1.307441);
   hCCpi0inFV_stack_10->SetBinError(15,1.525716);
   hCCpi0inFV_stack_10->SetBinError(16,1.557433);
   hCCpi0inFV_stack_10->SetBinError(17,1.247216);
   hCCpi0inFV_stack_10->SetBinError(18,1.109907);
   hCCpi0inFV_stack_10->SetBinError(19,1.192472);
   hCCpi0inFV_stack_10->SetBinError(20,1.271389);
   hCCpi0inFV_stack_10->SetBinError(21,1.02079);
   hCCpi0inFV_stack_10->SetBinError(22,1.001326);
   hCCpi0inFV_stack_10->SetBinError(23,0.9987156);
   hCCpi0inFV_stack_10->SetBinError(24,0.8315416);
   hCCpi0inFV_stack_10->SetBinError(25,0.5188295);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,6.105598);
   hNCinFV_stack_11->SetBinContent(2,16.00533);
   hNCinFV_stack_11->SetBinContent(3,19.37037);
   hNCinFV_stack_11->SetBinContent(4,22.91209);
   hNCinFV_stack_11->SetBinContent(5,27.86219);
   hNCinFV_stack_11->SetBinContent(6,16.79281);
   hNCinFV_stack_11->SetBinContent(7,12.60862);
   hNCinFV_stack_11->SetBinContent(8,9.013729);
   hNCinFV_stack_11->SetBinContent(9,9.655291);
   hNCinFV_stack_11->SetBinContent(10,7.723942);
   hNCinFV_stack_11->SetBinContent(11,4.086002);
   hNCinFV_stack_11->SetBinContent(12,7.014047);
   hNCinFV_stack_11->SetBinContent(13,5.477333);
   hNCinFV_stack_11->SetBinContent(14,5.520527);
   hNCinFV_stack_11->SetBinContent(15,2.618243);
   hNCinFV_stack_11->SetBinContent(16,2.662417);
   hNCinFV_stack_11->SetBinContent(17,2.469329);
   hNCinFV_stack_11->SetBinContent(18,2.065313);
   hNCinFV_stack_11->SetBinContent(19,4.763109);
   hNCinFV_stack_11->SetBinContent(20,3.401347);
   hNCinFV_stack_11->SetBinContent(21,3.631656);
   hNCinFV_stack_11->SetBinContent(22,1.452175);
   hNCinFV_stack_11->SetBinContent(23,1.554821);
   hNCinFV_stack_11->SetBinContent(24,2.328123);
   hNCinFV_stack_11->SetBinContent(25,0.3024228);
   hNCinFV_stack_11->SetBinError(1,1.291758);
   hNCinFV_stack_11->SetBinError(2,2.098075);
   hNCinFV_stack_11->SetBinError(3,2.42497);
   hNCinFV_stack_11->SetBinError(4,2.478144);
   hNCinFV_stack_11->SetBinError(5,3.107881);
   hNCinFV_stack_11->SetBinError(6,2.114234);
   hNCinFV_stack_11->SetBinError(7,1.796626);
   hNCinFV_stack_11->SetBinError(8,1.544079);
   hNCinFV_stack_11->SetBinError(9,1.74186);
   hNCinFV_stack_11->SetBinError(10,1.359182);
   hNCinFV_stack_11->SetBinError(11,0.9320567);
   hNCinFV_stack_11->SetBinError(12,1.378179);
   hNCinFV_stack_11->SetBinError(13,1.190032);
   hNCinFV_stack_11->SetBinError(14,1.178992);
   hNCinFV_stack_11->SetBinError(15,0.7448319);
   hNCinFV_stack_11->SetBinError(16,0.8003395);
   hNCinFV_stack_11->SetBinError(17,0.7498221);
   hNCinFV_stack_11->SetBinError(18,0.6831699);
   hNCinFV_stack_11->SetBinError(19,1.233701);
   hNCinFV_stack_11->SetBinError(20,1.009957);
   hNCinFV_stack_11->SetBinError(21,1.018179);
   hNCinFV_stack_11->SetBinError(22,0.6253056);
   hNCinFV_stack_11->SetBinError(23,0.6043858);
   hNCinFV_stack_11->SetBinError(24,0.8134756);
   hNCinFV_stack_11->SetBinError(25,0.222641);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.713686);
   hnumuCCinFV_stack_12->SetBinContent(2,10.86102);
   hnumuCCinFV_stack_12->SetBinContent(3,14.08251);
   hnumuCCinFV_stack_12->SetBinContent(4,16.32566);
   hnumuCCinFV_stack_12->SetBinContent(5,15.46705);
   hnumuCCinFV_stack_12->SetBinContent(6,13.78383);
   hnumuCCinFV_stack_12->SetBinContent(7,15.84817);
   hnumuCCinFV_stack_12->SetBinContent(8,10.34449);
   hnumuCCinFV_stack_12->SetBinContent(9,9.191928);
   hnumuCCinFV_stack_12->SetBinContent(10,9.15624);
   hnumuCCinFV_stack_12->SetBinContent(11,6.162621);
   hnumuCCinFV_stack_12->SetBinContent(12,4.552186);
   hnumuCCinFV_stack_12->SetBinContent(13,6.618184);
   hnumuCCinFV_stack_12->SetBinContent(14,4.037165);
   hnumuCCinFV_stack_12->SetBinContent(15,3.769425);
   hnumuCCinFV_stack_12->SetBinContent(16,3.00173);
   hnumuCCinFV_stack_12->SetBinContent(17,3.44498);
   hnumuCCinFV_stack_12->SetBinContent(18,3.612784);
   hnumuCCinFV_stack_12->SetBinContent(19,2.92649);
   hnumuCCinFV_stack_12->SetBinContent(20,3.183038);
   hnumuCCinFV_stack_12->SetBinContent(21,1.231679);
   hnumuCCinFV_stack_12->SetBinContent(22,3.229013);
   hnumuCCinFV_stack_12->SetBinContent(23,1.393784);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8273783);
   hnumuCCinFV_stack_12->SetBinContent(25,0.252159);
   hnumuCCinFV_stack_12->SetBinError(1,1.21657);
   hnumuCCinFV_stack_12->SetBinError(2,1.698744);
   hnumuCCinFV_stack_12->SetBinError(3,1.912766);
   hnumuCCinFV_stack_12->SetBinError(4,2.036473);
   hnumuCCinFV_stack_12->SetBinError(5,2.317903);
   hnumuCCinFV_stack_12->SetBinError(6,1.91608);
   hnumuCCinFV_stack_12->SetBinError(7,2.380194);
   hnumuCCinFV_stack_12->SetBinError(8,2.173273);
   hnumuCCinFV_stack_12->SetBinError(9,1.65562);
   hnumuCCinFV_stack_12->SetBinError(10,1.923664);
   hnumuCCinFV_stack_12->SetBinError(11,1.451539);
   hnumuCCinFV_stack_12->SetBinError(12,1.1924);
   hnumuCCinFV_stack_12->SetBinError(13,1.633407);
   hnumuCCinFV_stack_12->SetBinError(14,1.084336);
   hnumuCCinFV_stack_12->SetBinError(15,1.64742);
   hnumuCCinFV_stack_12->SetBinError(16,0.886143);
   hnumuCCinFV_stack_12->SetBinError(17,1.169019);
   hnumuCCinFV_stack_12->SetBinError(18,0.9603243);
   hnumuCCinFV_stack_12->SetBinError(19,1.267098);
   hnumuCCinFV_stack_12->SetBinError(20,0.9105373);
   hnumuCCinFV_stack_12->SetBinError(21,0.5746973);
   hnumuCCinFV_stack_12->SetBinError(22,0.9435776);
   hnumuCCinFV_stack_12->SetBinError(23,0.6682866);
   hnumuCCinFV_stack_12->SetBinError(24,0.415525);
   hnumuCCinFV_stack_12->SetBinError(25,0.2043794);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.611159);
   hnueCCinFV_stack_13->SetBinContent(2,4.719206);
   hnueCCinFV_stack_13->SetBinContent(3,3.643458);
   hnueCCinFV_stack_13->SetBinContent(4,0.9168075);
   hnueCCinFV_stack_13->SetBinContent(5,1.699633);
   hnueCCinFV_stack_13->SetBinContent(6,1.78755);
   hnueCCinFV_stack_13->SetBinContent(7,1.376628);
   hnueCCinFV_stack_13->SetBinContent(8,0.7864038);
   hnueCCinFV_stack_13->SetBinContent(9,2.181895);
   hnueCCinFV_stack_13->SetBinContent(10,1.137683);
   hnueCCinFV_stack_13->SetBinContent(11,0.4325931);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(14,0.6609475);
   hnueCCinFV_stack_13->SetBinContent(15,0.8649266);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,1.075993);
   hnueCCinFV_stack_13->SetBinContent(21,1.439238);
   hnueCCinFV_stack_13->SetBinContent(22,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(23,0.5207534);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.081307);
   hnueCCinFV_stack_13->SetBinError(2,1.859457);
   hnueCCinFV_stack_13->SetBinError(3,1.071392);
   hnueCCinFV_stack_13->SetBinError(4,0.4720082);
   hnueCCinFV_stack_13->SetBinError(5,0.6690614);
   hnueCCinFV_stack_13->SetBinError(6,0.85338);
   hnueCCinFV_stack_13->SetBinError(7,0.6648272);
   hnueCCinFV_stack_13->SetBinError(8,0.4828457);
   hnueCCinFV_stack_13->SetBinError(9,1.353507);
   hnueCCinFV_stack_13->SetBinError(10,0.5979562);
   hnueCCinFV_stack_13->SetBinError(11,0.4325931);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(14,0.4693692);
   hnueCCinFV_stack_13->SetBinError(15,0.4383379);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,1.075993);
   hnueCCinFV_stack_13->SetBinError(21,0.6658477);
   hnueCCinFV_stack_13->SetBinError(22,0.438694);
   hnueCCinFV_stack_13->SetBinError(23,0.5207534);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__17->SetBinContent(1,66.3961);
   hmcerror__17->SetBinContent(2,162.0977);
   hmcerror__17->SetBinContent(3,236.9254);
   hmcerror__17->SetBinContent(4,274.7037);
   hmcerror__17->SetBinContent(5,267.6388);
   hmcerror__17->SetBinContent(6,252.5822);
   hmcerror__17->SetBinContent(7,236.5638);
   hmcerror__17->SetBinContent(8,210.5673);
   hmcerror__17->SetBinContent(9,173.7144);
   hmcerror__17->SetBinContent(10,144.3281);
   hmcerror__17->SetBinContent(11,113.5246);
   hmcerror__17->SetBinContent(12,96.22181);
   hmcerror__17->SetBinContent(13,82.07526);
   hmcerror__17->SetBinContent(14,59.07585);
   hmcerror__17->SetBinContent(15,61.80423);
   hmcerror__17->SetBinContent(16,51.23514);
   hmcerror__17->SetBinContent(17,48.89026);
   hmcerror__17->SetBinContent(18,46.93508);
   hmcerror__17->SetBinContent(19,47.58095);
   hmcerror__17->SetBinContent(20,44.99953);
   hmcerror__17->SetBinContent(21,38.02798);
   hmcerror__17->SetBinContent(22,36.00742);
   hmcerror__17->SetBinContent(23,23.25077);
   hmcerror__17->SetBinContent(24,15.46438);
   hmcerror__17->SetBinContent(25,5.285103);
   hmcerror__17->SetBinError(1,28.05726);
   hmcerror__17->SetBinError(2,46.26241);
   hmcerror__17->SetBinError(3,62.16746);
   hmcerror__17->SetBinError(4,74.23927);
   hmcerror__17->SetBinError(5,68.6062);
   hmcerror__17->SetBinError(6,70.21906);
   hmcerror__17->SetBinError(7,62.23825);
   hmcerror__17->SetBinError(8,61.86659);
   hmcerror__17->SetBinError(9,50.86242);
   hmcerror__17->SetBinError(10,39.30577);
   hmcerror__17->SetBinError(11,30.17843);
   hmcerror__17->SetBinError(12,25.45316);
   hmcerror__17->SetBinError(13,29.47417);
   hmcerror__17->SetBinError(14,20.39126);
   hmcerror__17->SetBinError(15,19.49404);
   hmcerror__17->SetBinError(16,20.57037);
   hmcerror__17->SetBinError(17,15.504);
   hmcerror__17->SetBinError(18,17.9229);
   hmcerror__17->SetBinError(19,23.27497);
   hmcerror__17->SetBinError(20,15.25909);
   hmcerror__17->SetBinError(21,15.12073);
   hmcerror__17->SetBinError(22,15.44813);
   hmcerror__17->SetBinError(23,13.21658);
   hmcerror__17->SetBinError(24,10.80687);
   hmcerror__17->SetBinError(25,4.884793);
   hmcerror__17->SetBinError(26,0.3895343);
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
   
   Double_t _fx3021[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3021[25] = {
   58,
   155,
   283,
   294,
   305,
   253,
   241,
   199,
   177,
   137,
   108,
   94,
   80,
   84,
   68,
   55,
   69,
   46,
   48,
   59,
   39,
   40,
   23,
   18,
   5};
   Double_t _felx3021[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3021[25] = {
   7.7446,
   12.4499,
   16.8226,
   17.14643,
   17.46425,
   15.90597,
   15.52417,
   14.10674,
   13.30413,
   11.7047,
   10.3923,
   9.8173,
   9.0683,
   9.2886,
   8.3726,
   7.546,
   8.4327,
   6.9153,
   7.0604,
   7.8097,
   6.3813,
   6.4604,
   4.9457,
   4.4008,
   2.48995};
   Double_t _fehx3021[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3021[25] = {
   7.5415,
   12.4499,
   16.8226,
   17.14643,
   17.46425,
   15.90597,
   15.52417,
   14.10674,
   13.30413,
   11.7047,
   10.3923,
   9.616,
   8.8665,
   9.0869,
   8.1701,
   7.3425,
   8.2304,
   6.7108,
   6.8561,
   7.6066,
   6.1757,
   6.2549,
   4.7346,
   4.1858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(2.259045);
   Graph_Graph3021->SetMaximum(354.4597);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 197.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3022[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3022[25] = {
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
   1,
   1};
   Double_t _felx3022[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3022[25] = {
   0.4225738,
   0.2853983,
   0.2623926,
   0.2702521,
   0.2563388,
   0.2780048,
   0.2630928,
   0.2938091,
   0.2927933,
   0.2723363,
   0.2658317,
   0.2645259,
   0.3591115,
   0.3451708,
   0.3154159,
   0.4014894,
   0.3171183,
   0.3818657,
   0.4891657,
   0.3390944,
   0.3976212,
   0.4290263,
   0.568436,
   0.6988236,
   0.9242569};
   Double_t _fehx3022[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3022[25] = {
   0.4225738,
   0.2853983,
   0.2623926,
   0.2702521,
   0.2563388,
   0.2780048,
   0.2630928,
   0.2938091,
   0.2927933,
   0.2723363,
   0.2658317,
   0.2645259,
   0.3591115,
   0.3451708,
   0.3154159,
   0.4014894,
   0.3171183,
   0.3818657,
   0.4891657,
   0.3390944,
   0.3976212,
   0.4290263,
   0.568436,
   0.6988236,
   0.9242569};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3023[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3023[25] = {
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
   1,
   1};
   Double_t _felx3023[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3023[25] = {
   0.2579414,
   0.2436418,
   0.2313854,
   0.2163939,
   0.2201647,
   0.2285763,
   0.2324788,
   0.2341908,
   0.2445501,
   0.2329616,
   0.2276944,
   0.215998,
   0.2279875,
   0.2321048,
   0.2377676,
   0.2550182,
   0.2277773,
   0.2048821,
   0.2374832,
   0.2139434,
   0.2255741,
   0.2305554,
   0.2721137,
   0.2607839,
   0.342683};
   Double_t _fehx3023[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3023[25] = {
   0.2579414,
   0.2436418,
   0.2313854,
   0.2163939,
   0.2201647,
   0.2285763,
   0.2324788,
   0.2341908,
   0.2445501,
   0.2329616,
   0.2276944,
   0.215998,
   0.2279875,
   0.2321048,
   0.2377676,
   0.2550182,
   0.2277773,
   0.2048821,
   0.2374832,
   0.2139434,
   0.2255741,
   0.2305554,
   0.2721137,
   0.2607839,
   0.342683};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
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
   
   Double_t _fx3024[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3024[25] = {
   0.8735452,
   0.9562134,
   1.194469,
   1.070244,
   1.139596,
   1.001654,
   1.018752,
   0.9450659,
   1.018914,
   0.9492263,
   0.9513359,
   0.9769095,
   0.9747151,
   1.421901,
   1.100248,
   1.073482,
   1.411324,
   0.9800771,
   1.008807,
   1.311125,
   1.025561,
   1.110882,
   0.9892145,
   1.163965,
   0.9460553};
   Double_t _felx3024[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3024[25] = {
   0.1166424,
   0.07680491,
   0.07100381,
   0.06241789,
   0.06525306,
   0.06297345,
   0.06562362,
   0.06699395,
   0.07658623,
   0.08109788,
   0.09154234,
   0.1020278,
   0.1104876,
   0.1572318,
   0.1354697,
   0.1472817,
   0.1724822,
   0.1473376,
   0.1483871,
   0.1735507,
   0.1678054,
   0.1794186,
   0.2127112,
   0.2845766,
   0.4711261};
   Double_t _fehx3024[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3024[25] = {
   0.1135835,
   0.07680491,
   0.07100381,
   0.06241789,
   0.06525306,
   0.06297345,
   0.06562362,
   0.06699395,
   0.07658623,
   0.08109788,
   0.09154234,
   0.09993576,
   0.1080289,
   0.1538175,
   0.1321932,
   0.1433099,
   0.1683444,
   0.1429805,
   0.1440934,
   0.1690373,
   0.1623989,
   0.1737114,
   0.203632,
   0.2706737,
   0.4182775};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.3644553);
   Graph_Graph3024->SetMaximum(1.690142);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_theta_high_all",25,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
