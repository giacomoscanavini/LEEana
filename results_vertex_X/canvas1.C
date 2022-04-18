#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr 15 12:58:56 2022) by ROOT version 6.26/00
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
   pad1->Range(-40,-16.54,293.3333,1393.713);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hmc__1->SetBinContent(0,12.77312);
   hmc__1->SetBinContent(1,619.7533);
   hmc__1->SetBinContent(2,707.7662);
   hmc__1->SetBinContent(3,726.5438);
   hmc__1->SetBinContent(4,733.28);
   hmc__1->SetBinContent(5,746.7295);
   hmc__1->SetBinContent(6,746.6611);
   hmc__1->SetBinContent(7,771.138);
   hmc__1->SetBinContent(8,770.4536);
   hmc__1->SetBinContent(9,772.7064);
   hmc__1->SetBinContent(10,767.3831);
   hmc__1->SetBinContent(11,781.8185);
   hmc__1->SetBinContent(12,779.4426);
   hmc__1->SetBinContent(13,769.5089);
   hmc__1->SetBinContent(14,779.1832);
   hmc__1->SetBinContent(15,764.7097);
   hmc__1->SetBinContent(16,790.7985);
   hmc__1->SetBinContent(17,777.1705);
   hmc__1->SetBinContent(18,782.0686);
   hmc__1->SetBinContent(19,761.7604);
   hmc__1->SetBinContent(20,763.5833);
   hmc__1->SetBinContent(21,770.3768);
   hmc__1->SetBinContent(22,775.1823);
   hmc__1->SetBinContent(23,753.2524);
   hmc__1->SetBinContent(24,697.0143);
   hmc__1->SetBinContent(25,378.2972);
   hmc__1->SetBinContent(26,9.933422);
   hmc__1->SetBinError(0,1.174988);
   hmc__1->SetBinError(1,82.93827);
   hmc__1->SetBinError(2,95.11862);
   hmc__1->SetBinError(3,94.86106);
   hmc__1->SetBinError(4,102.1383);
   hmc__1->SetBinError(5,103.9938);
   hmc__1->SetBinError(6,99.76637);
   hmc__1->SetBinError(7,105.9714);
   hmc__1->SetBinError(8,106.9969);
   hmc__1->SetBinError(9,106.7337);
   hmc__1->SetBinError(10,102.2995);
   hmc__1->SetBinError(11,106.4284);
   hmc__1->SetBinError(12,102.7549);
   hmc__1->SetBinError(13,104.1345);
   hmc__1->SetBinError(14,105.4308);
   hmc__1->SetBinError(15,103.6644);
   hmc__1->SetBinError(16,102.1524);
   hmc__1->SetBinError(17,100.1228);
   hmc__1->SetBinError(18,106.9062);
   hmc__1->SetBinError(19,99.31066);
   hmc__1->SetBinError(20,100.9845);
   hmc__1->SetBinError(21,102.7631);
   hmc__1->SetBinError(22,108.1892);
   hmc__1->SetBinError(23,104.997);
   hmc__1->SetBinError(24,105.5686);
   hmc__1->SetBinError(25,65.36042);
   hmc__1->SetBinError(26,3.344586);
   hmc__1->SetMinimum(-16.54);
   hmc__1->SetMaximum(1323.2);
   hmc__1->SetEntries(16480.37);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,260);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(830.3384);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.8352721);
   hbadmatch_stack_1->SetBinContent(1,12.23605);
   hbadmatch_stack_1->SetBinContent(2,9.955694);
   hbadmatch_stack_1->SetBinContent(3,12.21132);
   hbadmatch_stack_1->SetBinContent(4,12.09674);
   hbadmatch_stack_1->SetBinContent(5,14.53207);
   hbadmatch_stack_1->SetBinContent(6,14.2211);
   hbadmatch_stack_1->SetBinContent(7,14.47959);
   hbadmatch_stack_1->SetBinContent(8,18.39697);
   hbadmatch_stack_1->SetBinContent(9,19.56441);
   hbadmatch_stack_1->SetBinContent(10,18.577);
   hbadmatch_stack_1->SetBinContent(11,22.20894);
   hbadmatch_stack_1->SetBinContent(12,19.90925);
   hbadmatch_stack_1->SetBinContent(13,23.19892);
   hbadmatch_stack_1->SetBinContent(14,24.98125);
   hbadmatch_stack_1->SetBinContent(15,25.47005);
   hbadmatch_stack_1->SetBinContent(16,27.04313);
   hbadmatch_stack_1->SetBinContent(17,23.38054);
   hbadmatch_stack_1->SetBinContent(18,26.08126);
   hbadmatch_stack_1->SetBinContent(19,27.6901);
   hbadmatch_stack_1->SetBinContent(20,24.49012);
   hbadmatch_stack_1->SetBinContent(21,25.81549);
   hbadmatch_stack_1->SetBinContent(22,23.53441);
   hbadmatch_stack_1->SetBinContent(23,22.98744);
   hbadmatch_stack_1->SetBinContent(24,20.59244);
   hbadmatch_stack_1->SetBinContent(25,15.2668);
   hbadmatch_stack_1->SetBinContent(26,0.8999497);
   hbadmatch_stack_1->SetBinError(0,0.2111219);
   hbadmatch_stack_1->SetBinError(1,1.447909);
   hbadmatch_stack_1->SetBinError(2,0.8220397);
   hbadmatch_stack_1->SetBinError(3,0.927547);
   hbadmatch_stack_1->SetBinError(4,1.098055);
   hbadmatch_stack_1->SetBinError(5,1.38424);
   hbadmatch_stack_1->SetBinError(6,0.9737154);
   hbadmatch_stack_1->SetBinError(7,0.9930864);
   hbadmatch_stack_1->SetBinError(8,1.177298);
   hbadmatch_stack_1->SetBinError(9,1.633085);
   hbadmatch_stack_1->SetBinError(10,1.095626);
   hbadmatch_stack_1->SetBinError(11,1.329421);
   hbadmatch_stack_1->SetBinError(12,1.101471);
   hbadmatch_stack_1->SetBinError(13,1.410327);
   hbadmatch_stack_1->SetBinError(14,1.490173);
   hbadmatch_stack_1->SetBinError(15,1.568396);
   hbadmatch_stack_1->SetBinError(16,1.514355);
   hbadmatch_stack_1->SetBinError(17,1.19034);
   hbadmatch_stack_1->SetBinError(18,1.442866);
   hbadmatch_stack_1->SetBinError(19,1.554554);
   hbadmatch_stack_1->SetBinError(20,1.257768);
   hbadmatch_stack_1->SetBinError(21,1.507686);
   hbadmatch_stack_1->SetBinError(22,1.269932);
   hbadmatch_stack_1->SetBinError(23,1.31575);
   hbadmatch_stack_1->SetBinError(24,1.37116);
   hbadmatch_stack_1->SetBinError(25,1.121134);
   hbadmatch_stack_1->SetBinError(26,0.2282587);
   hbadmatch_stack_1->SetEntries(12616);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hext_stack_2->SetBinContent(0,6.166403);
   hext_stack_2->SetBinContent(1,99.18472);
   hext_stack_2->SetBinContent(2,77.5593);
   hext_stack_2->SetBinContent(3,80.37872);
   hext_stack_2->SetBinContent(4,79.17624);
   hext_stack_2->SetBinContent(5,77.5443);
   hext_stack_2->SetBinContent(6,81.57298);
   hext_stack_2->SetBinContent(7,84.00111);
   hext_stack_2->SetBinContent(8,78.47408);
   hext_stack_2->SetBinContent(9,76.30635);
   hext_stack_2->SetBinContent(10,90.78647);
   hext_stack_2->SetBinContent(11,86.3215);
   hext_stack_2->SetBinContent(12,88.80278);
   hext_stack_2->SetBinContent(13,84.80133);
   hext_stack_2->SetBinContent(14,89.90572);
   hext_stack_2->SetBinContent(15,84.75225);
   hext_stack_2->SetBinContent(16,97.22007);
   hext_stack_2->SetBinContent(17,95.07008);
   hext_stack_2->SetBinContent(18,85.27579);
   hext_stack_2->SetBinContent(19,90.57649);
   hext_stack_2->SetBinContent(20,91.67674);
   hext_stack_2->SetBinContent(21,95.46275);
   hext_stack_2->SetBinContent(22,95.31144);
   hext_stack_2->SetBinContent(23,89.15865);
   hext_stack_2->SetBinContent(24,82.68958);
   hext_stack_2->SetBinContent(25,65.67094);
   hext_stack_2->SetBinContent(26,4.122757);
   hext_stack_2->SetBinError(0,1.002555);
   hext_stack_2->SetBinError(1,4.125256);
   hext_stack_2->SetBinError(2,3.60519);
   hext_stack_2->SetBinError(3,3.696487);
   hext_stack_2->SetBinError(4,3.648926);
   hext_stack_2->SetBinError(5,3.600004);
   hext_stack_2->SetBinError(6,3.683359);
   hext_stack_2->SetBinError(7,3.752365);
   hext_stack_2->SetBinError(8,3.596423);
   hext_stack_2->SetBinError(9,3.530088);
   hext_stack_2->SetBinError(10,3.894523);
   hext_stack_2->SetBinError(11,3.780821);
   hext_stack_2->SetBinError(12,3.833645);
   hext_stack_2->SetBinError(13,3.713844);
   hext_stack_2->SetBinError(14,3.854748);
   hext_stack_2->SetBinError(15,3.713763);
   hext_stack_2->SetBinError(16,4.017279);
   hext_stack_2->SetBinError(17,3.967413);
   hext_stack_2->SetBinError(18,3.72961);
   hext_stack_2->SetBinError(19,3.870251);
   hext_stack_2->SetBinError(20,3.929184);
   hext_stack_2->SetBinError(21,4.009961);
   hext_stack_2->SetBinError(22,4.023614);
   hext_stack_2->SetBinError(23,3.877603);
   hext_stack_2->SetBinError(24,3.73034);
   hext_stack_2->SetBinError(25,3.321113);
   hext_stack_2->SetBinError(26,0.8484067);
   hext_stack_2->SetEntries(39405);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hdirt_stack_3->SetBinContent(0,0.6142425);
   hdirt_stack_3->SetBinContent(1,44.59016);
   hdirt_stack_3->SetBinContent(2,20.47148);
   hdirt_stack_3->SetBinContent(3,17.63435);
   hdirt_stack_3->SetBinContent(4,20.35898);
   hdirt_stack_3->SetBinContent(5,20.44386);
   hdirt_stack_3->SetBinContent(6,20.45975);
   hdirt_stack_3->SetBinContent(7,20.54523);
   hdirt_stack_3->SetBinContent(8,21.82237);
   hdirt_stack_3->SetBinContent(9,19.85891);
   hdirt_stack_3->SetBinContent(10,22.46811);
   hdirt_stack_3->SetBinContent(11,22.0692);
   hdirt_stack_3->SetBinContent(12,22.92365);
   hdirt_stack_3->SetBinContent(13,23.21589);
   hdirt_stack_3->SetBinContent(14,23.66948);
   hdirt_stack_3->SetBinContent(15,24.11878);
   hdirt_stack_3->SetBinContent(16,25.72204);
   hdirt_stack_3->SetBinContent(17,24.10392);
   hdirt_stack_3->SetBinContent(18,25.03523);
   hdirt_stack_3->SetBinContent(19,24.26806);
   hdirt_stack_3->SetBinContent(20,26.44061);
   hdirt_stack_3->SetBinContent(21,24.52227);
   hdirt_stack_3->SetBinContent(22,27.8383);
   hdirt_stack_3->SetBinContent(23,26.25643);
   hdirt_stack_3->SetBinContent(24,25.77998);
   hdirt_stack_3->SetBinContent(25,36.90001);
   hdirt_stack_3->SetBinContent(26,0.6620743);
   hdirt_stack_3->SetBinError(0,0.1579711);
   hdirt_stack_3->SetBinError(1,1.693238);
   hdirt_stack_3->SetBinError(2,1.118963);
   hdirt_stack_3->SetBinError(3,1.054494);
   hdirt_stack_3->SetBinError(4,1.286617);
   hdirt_stack_3->SetBinError(5,1.203158);
   hdirt_stack_3->SetBinError(6,1.112799);
   hdirt_stack_3->SetBinError(7,1.190224);
   hdirt_stack_3->SetBinError(8,1.329996);
   hdirt_stack_3->SetBinError(9,1.093528);
   hdirt_stack_3->SetBinError(10,1.324625);
   hdirt_stack_3->SetBinError(11,1.084227);
   hdirt_stack_3->SetBinError(12,1.196232);
   hdirt_stack_3->SetBinError(13,1.235293);
   hdirt_stack_3->SetBinError(14,1.23557);
   hdirt_stack_3->SetBinError(15,1.244407);
   hdirt_stack_3->SetBinError(16,1.690819);
   hdirt_stack_3->SetBinError(17,1.066452);
   hdirt_stack_3->SetBinError(18,1.336814);
   hdirt_stack_3->SetBinError(19,1.11113);
   hdirt_stack_3->SetBinError(20,1.387207);
   hdirt_stack_3->SetBinError(21,1.261086);
   hdirt_stack_3->SetBinError(22,1.474529);
   hdirt_stack_3->SetBinError(23,1.220995);
   hdirt_stack_3->SetBinError(24,1.274212);
   hdirt_stack_3->SetBinError(25,1.574994);
   hdirt_stack_3->SetBinError(26,0.1614539);
   hdirt_stack_3->SetEntries(20994);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   houtFV_stack_4->SetBinContent(0,3.29308);
   houtFV_stack_4->SetBinContent(1,164.1524);
   houtFV_stack_4->SetBinContent(2,38.8971);
   houtFV_stack_4->SetBinContent(3,37.09571);
   houtFV_stack_4->SetBinContent(4,32.43682);
   houtFV_stack_4->SetBinContent(5,35.00551);
   houtFV_stack_4->SetBinContent(6,34.4343);
   houtFV_stack_4->SetBinContent(7,37.63286);
   houtFV_stack_4->SetBinContent(8,33.84071);
   houtFV_stack_4->SetBinContent(9,30.20433);
   houtFV_stack_4->SetBinContent(10,32.58763);
   houtFV_stack_4->SetBinContent(11,33.15845);
   houtFV_stack_4->SetBinContent(12,32.16689);
   houtFV_stack_4->SetBinContent(13,31.9731);
   houtFV_stack_4->SetBinContent(14,33.73344);
   houtFV_stack_4->SetBinContent(15,31.57908);
   houtFV_stack_4->SetBinContent(16,31.62344);
   houtFV_stack_4->SetBinContent(17,33.40067);
   houtFV_stack_4->SetBinContent(18,31.30996);
   houtFV_stack_4->SetBinContent(19,33.27732);
   houtFV_stack_4->SetBinContent(20,31.96937);
   houtFV_stack_4->SetBinContent(21,33.52605);
   houtFV_stack_4->SetBinContent(22,35.16223);
   houtFV_stack_4->SetBinContent(23,36.80387);
   houtFV_stack_4->SetBinContent(24,44.29279);
   houtFV_stack_4->SetBinContent(25,93.74755);
   houtFV_stack_4->SetBinContent(26,2.551188);
   houtFV_stack_4->SetBinError(0,0.4221428);
   houtFV_stack_4->SetBinError(1,3.587928);
   houtFV_stack_4->SetBinError(2,1.652113);
   houtFV_stack_4->SetBinError(3,1.547421);
   houtFV_stack_4->SetBinError(4,1.503343);
   houtFV_stack_4->SetBinError(5,1.605598);
   houtFV_stack_4->SetBinError(6,1.775994);
   houtFV_stack_4->SetBinError(7,1.748521);
   houtFV_stack_4->SetBinError(8,1.67986);
   houtFV_stack_4->SetBinError(9,1.44659);
   houtFV_stack_4->SetBinError(10,1.56714);
   houtFV_stack_4->SetBinError(11,1.689023);
   houtFV_stack_4->SetBinError(12,1.78708);
   houtFV_stack_4->SetBinError(13,1.697145);
   houtFV_stack_4->SetBinError(14,1.772715);
   houtFV_stack_4->SetBinError(15,1.713459);
   houtFV_stack_4->SetBinError(16,1.581468);
   houtFV_stack_4->SetBinError(17,1.498764);
   houtFV_stack_4->SetBinError(18,1.424067);
   houtFV_stack_4->SetBinError(19,1.708178);
   houtFV_stack_4->SetBinError(20,1.548354);
   houtFV_stack_4->SetBinError(21,1.754473);
   houtFV_stack_4->SetBinError(22,1.763727);
   houtFV_stack_4->SetBinError(23,1.463837);
   houtFV_stack_4->SetBinError(24,1.839391);
   houtFV_stack_4->SetBinError(25,2.699251);
   houtFV_stack_4->SetBinError(26,0.3784037);
   houtFV_stack_4->SetEntries(25917);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hNCpi0inFV_stack_5->SetBinContent(0,0.3115761);
   hNCpi0inFV_stack_5->SetBinContent(1,12.64174);
   hNCpi0inFV_stack_5->SetBinContent(2,24.22229);
   hNCpi0inFV_stack_5->SetBinContent(3,26.09089);
   hNCpi0inFV_stack_5->SetBinContent(4,26.03611);
   hNCpi0inFV_stack_5->SetBinContent(5,27.54676);
   hNCpi0inFV_stack_5->SetBinContent(6,28.50142);
   hNCpi0inFV_stack_5->SetBinContent(7,29.05559);
   hNCpi0inFV_stack_5->SetBinContent(8,30.96692);
   hNCpi0inFV_stack_5->SetBinContent(9,29.64437);
   hNCpi0inFV_stack_5->SetBinContent(10,28.8193);
   hNCpi0inFV_stack_5->SetBinContent(11,30.38218);
   hNCpi0inFV_stack_5->SetBinContent(12,29.21203);
   hNCpi0inFV_stack_5->SetBinContent(13,30.10671);
   hNCpi0inFV_stack_5->SetBinContent(14,27.35572);
   hNCpi0inFV_stack_5->SetBinContent(15,28.19721);
   hNCpi0inFV_stack_5->SetBinContent(16,29.47657);
   hNCpi0inFV_stack_5->SetBinContent(17,29.01671);
   hNCpi0inFV_stack_5->SetBinContent(18,28.69769);
   hNCpi0inFV_stack_5->SetBinContent(19,27.30492);
   hNCpi0inFV_stack_5->SetBinContent(20,29.78635);
   hNCpi0inFV_stack_5->SetBinContent(21,27.53024);
   hNCpi0inFV_stack_5->SetBinContent(22,28.31017);
   hNCpi0inFV_stack_5->SetBinContent(23,27.47808);
   hNCpi0inFV_stack_5->SetBinContent(24,25.89923);
   hNCpi0inFV_stack_5->SetBinContent(25,8.392627);
   hNCpi0inFV_stack_5->SetBinContent(26,0.2386643);
   hNCpi0inFV_stack_5->SetBinError(0,0.1271502);
   hNCpi0inFV_stack_5->SetBinError(1,0.8187218);
   hNCpi0inFV_stack_5->SetBinError(2,1.14536);
   hNCpi0inFV_stack_5->SetBinError(3,1.186941);
   hNCpi0inFV_stack_5->SetBinError(4,1.180207);
   hNCpi0inFV_stack_5->SetBinError(5,1.219985);
   hNCpi0inFV_stack_5->SetBinError(6,1.234879);
   hNCpi0inFV_stack_5->SetBinError(7,1.253669);
   hNCpi0inFV_stack_5->SetBinError(8,1.295495);
   hNCpi0inFV_stack_5->SetBinError(9,1.267455);
   hNCpi0inFV_stack_5->SetBinError(10,1.248815);
   hNCpi0inFV_stack_5->SetBinError(11,1.285983);
   hNCpi0inFV_stack_5->SetBinError(12,1.260921);
   hNCpi0inFV_stack_5->SetBinError(13,1.269828);
   hNCpi0inFV_stack_5->SetBinError(14,1.202636);
   hNCpi0inFV_stack_5->SetBinError(15,1.232071);
   hNCpi0inFV_stack_5->SetBinError(16,1.270266);
   hNCpi0inFV_stack_5->SetBinError(17,1.256814);
   hNCpi0inFV_stack_5->SetBinError(18,1.243509);
   hNCpi0inFV_stack_5->SetBinError(19,1.203158);
   hNCpi0inFV_stack_5->SetBinError(20,1.277798);
   hNCpi0inFV_stack_5->SetBinError(21,1.213635);
   hNCpi0inFV_stack_5->SetBinError(22,1.233891);
   hNCpi0inFV_stack_5->SetBinError(23,1.218415);
   hNCpi0inFV_stack_5->SetBinError(24,1.186428);
   hNCpi0inFV_stack_5->SetBinError(25,0.669667);
   hNCpi0inFV_stack_5->SetBinError(26,0.09560477);
   hNCpi0inFV_stack_5->SetEntries(17673);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hCCpi0inFV_stack_6->SetBinContent(0,0.1129571);
   hCCpi0inFV_stack_6->SetBinContent(1,30.60561);
   hCCpi0inFV_stack_6->SetBinContent(2,53.55949);
   hCCpi0inFV_stack_6->SetBinContent(3,58.6651);
   hCCpi0inFV_stack_6->SetBinContent(4,61.91992);
   hCCpi0inFV_stack_6->SetBinContent(5,56.52695);
   hCCpi0inFV_stack_6->SetBinContent(6,55.49078);
   hCCpi0inFV_stack_6->SetBinContent(7,59.0808);
   hCCpi0inFV_stack_6->SetBinContent(8,60.86591);
   hCCpi0inFV_stack_6->SetBinContent(9,63.39991);
   hCCpi0inFV_stack_6->SetBinContent(10,57.17993);
   hCCpi0inFV_stack_6->SetBinContent(11,56.01554);
   hCCpi0inFV_stack_6->SetBinContent(12,60.29203);
   hCCpi0inFV_stack_6->SetBinContent(13,57.21113);
   hCCpi0inFV_stack_6->SetBinContent(14,58.04002);
   hCCpi0inFV_stack_6->SetBinContent(15,58.41486);
   hCCpi0inFV_stack_6->SetBinContent(16,58.3016);
   hCCpi0inFV_stack_6->SetBinContent(17,60.42551);
   hCCpi0inFV_stack_6->SetBinContent(18,59.60105);
   hCCpi0inFV_stack_6->SetBinContent(19,55.38675);
   hCCpi0inFV_stack_6->SetBinContent(20,57.83083);
   hCCpi0inFV_stack_6->SetBinContent(21,58.80315);
   hCCpi0inFV_stack_6->SetBinContent(22,58.31621);
   hCCpi0inFV_stack_6->SetBinContent(23,59.19561);
   hCCpi0inFV_stack_6->SetBinContent(24,51.43842);
   hCCpi0inFV_stack_6->SetBinContent(25,19.54904);
   hCCpi0inFV_stack_6->SetBinContent(26,0.1257073);
   hCCpi0inFV_stack_6->SetBinError(0,0.0669989);
   hCCpi0inFV_stack_6->SetBinError(1,1.291717);
   hCCpi0inFV_stack_6->SetBinError(2,1.704454);
   hCCpi0inFV_stack_6->SetBinError(3,1.78104);
   hCCpi0inFV_stack_6->SetBinError(4,1.833823);
   hCCpi0inFV_stack_6->SetBinError(5,1.751554);
   hCCpi0inFV_stack_6->SetBinError(6,1.728459);
   hCCpi0inFV_stack_6->SetBinError(7,1.790484);
   hCCpi0inFV_stack_6->SetBinError(8,1.811861);
   hCCpi0inFV_stack_6->SetBinError(9,1.858626);
   hCCpi0inFV_stack_6->SetBinError(10,1.747917);
   hCCpi0inFV_stack_6->SetBinError(11,1.735987);
   hCCpi0inFV_stack_6->SetBinError(12,1.808933);
   hCCpi0inFV_stack_6->SetBinError(13,1.758871);
   hCCpi0inFV_stack_6->SetBinError(14,1.765357);
   hCCpi0inFV_stack_6->SetBinError(15,1.769821);
   hCCpi0inFV_stack_6->SetBinError(16,1.779351);
   hCCpi0inFV_stack_6->SetBinError(17,1.808256);
   hCCpi0inFV_stack_6->SetBinError(18,1.805214);
   hCCpi0inFV_stack_6->SetBinError(19,1.732345);
   hCCpi0inFV_stack_6->SetBinError(20,1.767199);
   hCCpi0inFV_stack_6->SetBinError(21,1.784517);
   hCCpi0inFV_stack_6->SetBinError(22,1.776288);
   hCCpi0inFV_stack_6->SetBinError(23,1.800977);
   hCCpi0inFV_stack_6->SetBinError(24,1.664367);
   hCCpi0inFV_stack_6->SetBinError(25,1.029405);
   hCCpi0inFV_stack_6->SetBinError(26,0.06820132);
   hCCpi0inFV_stack_6->SetEntries(36603);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hNCinFV_stack_7->SetBinContent(0,0.1257073);
   hNCinFV_stack_7->SetBinContent(1,22.88915);
   hNCinFV_stack_7->SetBinContent(2,45.31044);
   hNCinFV_stack_7->SetBinContent(3,49.20292);
   hNCinFV_stack_7->SetBinContent(4,48.4003);
   hNCinFV_stack_7->SetBinContent(5,47.05413);
   hNCinFV_stack_7->SetBinContent(6,47.72271);
   hNCinFV_stack_7->SetBinContent(7,49.00032);
   hNCinFV_stack_7->SetBinContent(8,47.79978);
   hNCinFV_stack_7->SetBinContent(9,48.96543);
   hNCinFV_stack_7->SetBinContent(10,47.47878);
   hNCinFV_stack_7->SetBinContent(11,50.93411);
   hNCinFV_stack_7->SetBinContent(12,48.47798);
   hNCinFV_stack_7->SetBinContent(13,51.84363);
   hNCinFV_stack_7->SetBinContent(14,49.59345);
   hNCinFV_stack_7->SetBinContent(15,48.15086);
   hNCinFV_stack_7->SetBinContent(16,49.4085);
   hNCinFV_stack_7->SetBinContent(17,50.95737);
   hNCinFV_stack_7->SetBinContent(18,51.42348);
   hNCinFV_stack_7->SetBinContent(19,46.23595);
   hNCinFV_stack_7->SetBinContent(20,47.13063);
   hNCinFV_stack_7->SetBinContent(21,45.15738);
   hNCinFV_stack_7->SetBinContent(22,48.6851);
   hNCinFV_stack_7->SetBinContent(23,45.94288);
   hNCinFV_stack_7->SetBinContent(24,37.99849);
   hNCinFV_stack_7->SetBinContent(25,11.30439);
   hNCinFV_stack_7->SetBinContent(26,0.2241195);
   hNCinFV_stack_7->SetBinError(0,0.06820132);
   hNCinFV_stack_7->SetBinError(1,1.107405);
   hNCinFV_stack_7->SetBinError(2,1.5573);
   hNCinFV_stack_7->SetBinError(3,1.633067);
   hNCinFV_stack_7->SetBinError(4,1.620926);
   hNCinFV_stack_7->SetBinError(5,1.586674);
   hNCinFV_stack_7->SetBinError(6,1.599331);
   hNCinFV_stack_7->SetBinError(7,1.620318);
   hNCinFV_stack_7->SetBinError(8,1.605959);
   hNCinFV_stack_7->SetBinError(9,1.615232);
   hNCinFV_stack_7->SetBinError(10,1.586795);
   hNCinFV_stack_7->SetBinError(11,1.662521);
   hNCinFV_stack_7->SetBinError(12,1.615712);
   hNCinFV_stack_7->SetBinError(13,1.666107);
   hNCinFV_stack_7->SetBinError(14,1.636864);
   hNCinFV_stack_7->SetBinError(15,1.607304);
   hNCinFV_stack_7->SetBinError(16,1.626389);
   hNCinFV_stack_7->SetBinError(17,1.661134);
   hNCinFV_stack_7->SetBinError(18,1.654654);
   hNCinFV_stack_7->SetBinError(19,1.570819);
   hNCinFV_stack_7->SetBinError(20,1.586982);
   hNCinFV_stack_7->SetBinError(21,1.556674);
   hNCinFV_stack_7->SetBinError(22,1.623244);
   hNCinFV_stack_7->SetBinError(23,1.576412);
   hNCinFV_stack_7->SetBinError(24,1.430191);
   hNCinFV_stack_7->SetBinError(25,0.7794386);
   hNCinFV_stack_7->SetBinError(26,0.1095603);
   hNCinFV_stack_7->SetEntries(30232);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hnumuCCinFV_stack_8->SetBinContent(0,1.313746);
   hnumuCCinFV_stack_8->SetBinContent(1,232.1534);
   hnumuCCinFV_stack_8->SetBinContent(2,434.0191);
   hnumuCCinFV_stack_8->SetBinContent(3,441.3983);
   hnumuCCinFV_stack_8->SetBinContent(4,448.9229);
   hnumuCCinFV_stack_8->SetBinContent(5,463.8833);
   hnumuCCinFV_stack_8->SetBinContent(6,460.4229);
   hnumuCCinFV_stack_8->SetBinContent(7,474.6056);
   hnumuCCinFV_stack_8->SetBinContent(8,473.8096);
   hnumuCCinFV_stack_8->SetBinContent(9,481.9595);
   hnumuCCinFV_stack_8->SetBinContent(10,465.8361);
   hnumuCCinFV_stack_8->SetBinContent(11,477.107);
   hnumuCCinFV_stack_8->SetBinContent(12,473.4611);
   hnumuCCinFV_stack_8->SetBinContent(13,464.044);
   hnumuCCinFV_stack_8->SetBinContent(14,469.0789);
   hnumuCCinFV_stack_8->SetBinContent(15,461.0382);
   hnumuCCinFV_stack_8->SetBinContent(16,468.7806);
   hnumuCCinFV_stack_8->SetBinContent(17,458.2296);
   hnumuCCinFV_stack_8->SetBinContent(18,469.2813);
   hnumuCCinFV_stack_8->SetBinContent(19,453.7827);
   hnumuCCinFV_stack_8->SetBinContent(20,450.3426);
   hnumuCCinFV_stack_8->SetBinContent(21,456.8375);
   hnumuCCinFV_stack_8->SetBinContent(22,455.1719);
   hnumuCCinFV_stack_8->SetBinContent(23,442.2006);
   hnumuCCinFV_stack_8->SetBinContent(24,404.5878);
   hnumuCCinFV_stack_8->SetBinContent(25,126.4626);
   hnumuCCinFV_stack_8->SetBinContent(26,1.108962);
   hnumuCCinFV_stack_8->SetBinError(0,0.3200624);
   hnumuCCinFV_stack_8->SetBinError(1,4.870667);
   hnumuCCinFV_stack_8->SetBinError(2,6.74645);
   hnumuCCinFV_stack_8->SetBinError(3,6.62346);
   hnumuCCinFV_stack_8->SetBinError(4,6.820047);
   hnumuCCinFV_stack_8->SetBinError(5,7.265857);
   hnumuCCinFV_stack_8->SetBinError(6,6.950917);
   hnumuCCinFV_stack_8->SetBinError(7,7.186557);
   hnumuCCinFV_stack_8->SetBinError(8,7.293971);
   hnumuCCinFV_stack_8->SetBinError(9,7.254694);
   hnumuCCinFV_stack_8->SetBinError(10,7.097129);
   hnumuCCinFV_stack_8->SetBinError(11,7.17142);
   hnumuCCinFV_stack_8->SetBinError(12,6.920671);
   hnumuCCinFV_stack_8->SetBinError(13,7.061412);
   hnumuCCinFV_stack_8->SetBinError(14,7.224507);
   hnumuCCinFV_stack_8->SetBinError(15,7.154831);
   hnumuCCinFV_stack_8->SetBinError(16,7.112716);
   hnumuCCinFV_stack_8->SetBinError(17,6.896972);
   hnumuCCinFV_stack_8->SetBinError(18,7.21736);
   hnumuCCinFV_stack_8->SetBinError(19,6.891325);
   hnumuCCinFV_stack_8->SetBinError(20,6.86913);
   hnumuCCinFV_stack_8->SetBinError(21,6.904275);
   hnumuCCinFV_stack_8->SetBinError(22,6.918699);
   hnumuCCinFV_stack_8->SetBinError(23,6.676324);
   hnumuCCinFV_stack_8->SetBinError(24,6.52257);
   hnumuCCinFV_stack_8->SetBinError(25,3.705231);
   hnumuCCinFV_stack_8->SetBinError(26,0.3071527);
   hnumuCCinFV_stack_8->SetEntries(241660);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hnueCCinFV_stack_9->SetBinContent(0,0.0001377527);
   hnueCCinFV_stack_9->SetBinContent(1,1.30008);
   hnueCCinFV_stack_9->SetBinContent(2,3.77136);
   hnueCCinFV_stack_9->SetBinContent(3,3.866533);
   hnueCCinFV_stack_9->SetBinContent(4,3.932075);
   hnueCCinFV_stack_9->SetBinContent(5,4.192643);
   hnueCCinFV_stack_9->SetBinContent(6,3.835133);
   hnueCCinFV_stack_9->SetBinContent(7,2.736945);
   hnueCCinFV_stack_9->SetBinContent(8,4.477234);
   hnueCCinFV_stack_9->SetBinContent(9,2.803252);
   hnueCCinFV_stack_9->SetBinContent(10,3.649733);
   hnueCCinFV_stack_9->SetBinContent(11,3.621512);
   hnueCCinFV_stack_9->SetBinContent(12,4.196864);
   hnueCCinFV_stack_9->SetBinContent(13,3.114192);
   hnueCCinFV_stack_9->SetBinContent(14,2.825082);
   hnueCCinFV_stack_9->SetBinContent(15,2.98828);
   hnueCCinFV_stack_9->SetBinContent(16,3.222536);
   hnueCCinFV_stack_9->SetBinContent(17,2.586003);
   hnueCCinFV_stack_9->SetBinContent(18,5.362835);
   hnueCCinFV_stack_9->SetBinContent(19,3.23807);
   hnueCCinFV_stack_9->SetBinContent(20,3.916009);
   hnueCCinFV_stack_9->SetBinContent(21,2.721925);
   hnueCCinFV_stack_9->SetBinContent(22,2.85249);
   hnueCCinFV_stack_9->SetBinContent(23,3.228817);
   hnueCCinFV_stack_9->SetBinContent(24,3.735547);
   hnueCCinFV_stack_9->SetBinContent(25,1.003334);
   hnueCCinFV_stack_9->SetBinError(0,0.0001377527);
   hnueCCinFV_stack_9->SetBinError(1,0.2769324);
   hnueCCinFV_stack_9->SetBinError(2,0.7967524);
   hnueCCinFV_stack_9->SetBinError(3,0.4914054);
   hnueCCinFV_stack_9->SetBinError(4,0.4943949);
   hnueCCinFV_stack_9->SetBinError(5,0.6126686);
   hnueCCinFV_stack_9->SetBinError(6,0.7707888);
   hnueCCinFV_stack_9->SetBinError(7,0.4053692);
   hnueCCinFV_stack_9->SetBinError(8,0.8189236);
   hnueCCinFV_stack_9->SetBinError(9,0.4219686);
   hnueCCinFV_stack_9->SetBinError(10,0.4725744);
   hnueCCinFV_stack_9->SetBinError(11,0.4578317);
   hnueCCinFV_stack_9->SetBinError(12,0.6405215);
   hnueCCinFV_stack_9->SetBinError(13,0.4340642);
   hnueCCinFV_stack_9->SetBinError(14,0.4092951);
   hnueCCinFV_stack_9->SetBinError(15,0.4085783);
   hnueCCinFV_stack_9->SetBinError(16,0.7019933);
   hnueCCinFV_stack_9->SetBinError(17,0.3923395);
   hnueCCinFV_stack_9->SetBinError(18,0.867939);
   hnueCCinFV_stack_9->SetBinError(19,0.4439124);
   hnueCCinFV_stack_9->SetBinError(20,0.5793435);
   hnueCCinFV_stack_9->SetBinError(21,0.4092599);
   hnueCCinFV_stack_9->SetBinError(22,0.3994828);
   hnueCCinFV_stack_9->SetBinError(23,0.4470772);
   hnueCCinFV_stack_9->SetBinError(24,0.6440093);
   hnueCCinFV_stack_9->SetBinError(25,0.3367731);
   hnueCCinFV_stack_9->SetEntries(2003);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_reco_nuvtxX_all",25,0,260);
   hmcerror__2->SetBinContent(0,12.77312);
   hmcerror__2->SetBinContent(1,619.7533);
   hmcerror__2->SetBinContent(2,707.7662);
   hmcerror__2->SetBinContent(3,726.5438);
   hmcerror__2->SetBinContent(4,733.28);
   hmcerror__2->SetBinContent(5,746.7295);
   hmcerror__2->SetBinContent(6,746.6611);
   hmcerror__2->SetBinContent(7,771.138);
   hmcerror__2->SetBinContent(8,770.4536);
   hmcerror__2->SetBinContent(9,772.7064);
   hmcerror__2->SetBinContent(10,767.3831);
   hmcerror__2->SetBinContent(11,781.8185);
   hmcerror__2->SetBinContent(12,779.4426);
   hmcerror__2->SetBinContent(13,769.5089);
   hmcerror__2->SetBinContent(14,779.1832);
   hmcerror__2->SetBinContent(15,764.7097);
   hmcerror__2->SetBinContent(16,790.7985);
   hmcerror__2->SetBinContent(17,777.1705);
   hmcerror__2->SetBinContent(18,782.0686);
   hmcerror__2->SetBinContent(19,761.7604);
   hmcerror__2->SetBinContent(20,763.5833);
   hmcerror__2->SetBinContent(21,770.3768);
   hmcerror__2->SetBinContent(22,775.1823);
   hmcerror__2->SetBinContent(23,753.2524);
   hmcerror__2->SetBinContent(24,697.0143);
   hmcerror__2->SetBinContent(25,378.2972);
   hmcerror__2->SetBinContent(26,9.933422);
   hmcerror__2->SetBinError(0,1.174988);
   hmcerror__2->SetBinError(1,82.93827);
   hmcerror__2->SetBinError(2,95.11862);
   hmcerror__2->SetBinError(3,94.86106);
   hmcerror__2->SetBinError(4,102.1383);
   hmcerror__2->SetBinError(5,103.9938);
   hmcerror__2->SetBinError(6,99.76637);
   hmcerror__2->SetBinError(7,105.9714);
   hmcerror__2->SetBinError(8,106.9969);
   hmcerror__2->SetBinError(9,106.7337);
   hmcerror__2->SetBinError(10,102.2995);
   hmcerror__2->SetBinError(11,106.4284);
   hmcerror__2->SetBinError(12,102.7549);
   hmcerror__2->SetBinError(13,104.1345);
   hmcerror__2->SetBinError(14,105.4308);
   hmcerror__2->SetBinError(15,103.6644);
   hmcerror__2->SetBinError(16,102.1524);
   hmcerror__2->SetBinError(17,100.1228);
   hmcerror__2->SetBinError(18,106.9062);
   hmcerror__2->SetBinError(19,99.31066);
   hmcerror__2->SetBinError(20,100.9845);
   hmcerror__2->SetBinError(21,102.7631);
   hmcerror__2->SetBinError(22,108.1892);
   hmcerror__2->SetBinError(23,104.997);
   hmcerror__2->SetBinError(24,105.5686);
   hmcerror__2->SetBinError(25,65.36042);
   hmcerror__2->SetBinError(26,3.344586);
   hmcerror__2->SetEntries(16480.37);

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
   
   Double_t _fx3001[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3001[25] = {
   637,
   707,
   756,
   760,
   757,
   783,
   731,
   760,
   818,
   822,
   817,
   827,
   786,
   810,
   805,
   814,
   783,
   767,
   811,
   766,
   794,
   771,
   777,
   720,
   342};
   Double_t _felx3001[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3001[25] = {
   25.23886,
   26.58947,
   27.49545,
   27.5681,
   27.51363,
   27.98214,
   27.03701,
   27.5681,
   28.6007,
   28.67054,
   28.58321,
   28.75761,
   28.03569,
   28.4605,
   28.37252,
   28.53069,
   27.98214,
   27.69476,
   28.47806,
   27.67671,
   28.17801,
   27.76689,
   27.87472,
   26.83282,
   18.49324};
   Double_t _fehx3001[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3001[25] = {
   25.23886,
   26.58947,
   27.49545,
   27.5681,
   27.51363,
   27.98214,
   27.03701,
   27.5681,
   28.6007,
   28.67054,
   28.58321,
   28.75761,
   28.03569,
   28.4605,
   28.37252,
   28.53069,
   27.98214,
   27.69476,
   28.47806,
   27.67671,
   28.17801,
   27.76689,
   27.87472,
   26.83282,
   18.49324};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,286);
   Graph_Graph3001->SetMinimum(270.2817);
   Graph_Graph3001->SetMaximum(908.9827);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.02#pm0.01(data err)#pm0.13(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.43/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18921.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 498.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 2147.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 611.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 1044.0","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  670.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1386.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1137.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10907.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 83.2","F");

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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3002[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3002[25] = {
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
   Double_t _felx3002[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3002[25] = {
   0.1338247,
   0.1343927,
   0.1305648,
   0.1392896,
   0.1392657,
   0.1336167,
   0.1374221,
   0.1388752,
   0.1381296,
   0.1333095,
   0.1361293,
   0.1318313,
   0.1353259,
   0.1353094,
   0.1355605,
   0.1291763,
   0.1288299,
   0.1366967,
   0.1303699,
   0.1322508,
   0.1333933,
   0.1395662,
   0.1393915,
   0.1514583,
   0.1727753};
   Double_t _fehx3002[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3002[25] = {
   0.1338247,
   0.1343927,
   0.1305648,
   0.1392896,
   0.1392657,
   0.1336167,
   0.1374221,
   0.1388752,
   0.1381296,
   0.1333095,
   0.1361293,
   0.1318313,
   0.1353259,
   0.1353094,
   0.1355605,
   0.1291763,
   0.1288299,
   0.1366967,
   0.1303699,
   0.1322508,
   0.1333933,
   0.1395662,
   0.1393915,
   0.1514583,
   0.1727753};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,286);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Vertex X [cm]");
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
   
   Double_t _fx3003[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3003[25] = {
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
   Double_t _felx3003[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3003[25] = {
   0.129181,
   0.1320272,
   0.1283125,
   0.1336868,
   0.1377327,
   0.1323486,
   0.1361523,
   0.137835,
   0.1364102,
   0.1315626,
   0.1347502,
   0.1308594,
   0.1341615,
   0.1331683,
   0.1340555,
   0.1282161,
   0.1277998,
   0.1348381,
   0.1284068,
   0.1292568,
   0.1312379,
   0.13316,
   0.1295609,
   0.1317309,
   0.1316289};
   Double_t _fehx3003[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3003[25] = {
   0.129181,
   0.1320272,
   0.1283125,
   0.1336868,
   0.1377327,
   0.1323486,
   0.1361523,
   0.137835,
   0.1364102,
   0.1315626,
   0.1347502,
   0.1308594,
   0.1341615,
   0.1331683,
   0.1340555,
   0.1282161,
   0.1277998,
   0.1348381,
   0.1284068,
   0.1292568,
   0.1312379,
   0.13316,
   0.1295609,
   0.1317309,
   0.1316289};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,286);
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
   
   Double_t _fx3004[25] = {
   5.2,
   15.6,
   26,
   36.4,
   46.8,
   57.2,
   67.6,
   78,
   88.4,
   98.8,
   109.2,
   119.6,
   130,
   140.4,
   150.8,
   161.2,
   171.6,
   182,
   192.4,
   202.8,
   213.2,
   223.6,
   234,
   244.4,
   254.8};
   Double_t _fy3004[25] = {
   1.027828,
   0.9989174,
   1.040543,
   1.036439,
   1.013754,
   1.048668,
   0.9479497,
   0.9864319,
   1.058617,
   1.071173,
   1.045,
   1.061015,
   1.021431,
   1.03955,
   1.052687,
   1.029339,
   1.007501,
   0.9807324,
   1.064639,
   1.003165,
   1.030665,
   0.9946048,
   1.031527,
   1.032977,
   0.904051};
   Double_t _felx3004[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3004[25] = {
   0.04072404,
   0.03756815,
   0.03784418,
   0.03759559,
   0.03684552,
   0.03747635,
   0.03506118,
   0.03578164,
   0.03701367,
   0.03736145,
   0.03655991,
   0.0368951,
   0.03643323,
   0.03652607,
   0.03710235,
   0.03607833,
   0.03600515,
   0.03541219,
   0.03738454,
   0.03624583,
   0.03657691,
   0.03581982,
   0.03700581,
   0.03849679,
   0.04888548};
   Double_t _fehx3004[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3004[25] = {
   0.04072404,
   0.03756815,
   0.03784418,
   0.03759559,
   0.03684552,
   0.03747635,
   0.03506118,
   0.03578164,
   0.03701367,
   0.03736145,
   0.03655991,
   0.0368951,
   0.03643323,
   0.03652607,
   0.03710235,
   0.03607833,
   0.03600515,
   0.03541219,
   0.03738454,
   0.03624583,
   0.03657691,
   0.03581982,
   0.03700581,
   0.03849679,
   0.04888548};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,286);
   Graph_Graph3004->SetMinimum(0.8298286);
   Graph_Graph3004->SetMaximum(1.133871);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_reco_nuvtxX_all",25,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
