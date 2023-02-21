#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 21:57:10 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-3.448686,56.41026,381.3521);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__22->SetBinContent(1,172.4343);
   hmc__22->SetBinContent(2,41.01234);
   hmc__22->SetBinContent(3,51.30536);
   hmc__22->SetBinContent(4,44.5701);
   hmc__22->SetBinContent(5,39.07046);
   hmc__22->SetBinContent(6,36.72974);
   hmc__22->SetBinContent(7,37.08345);
   hmc__22->SetBinContent(8,40.23207);
   hmc__22->SetBinContent(9,35.58707);
   hmc__22->SetBinContent(10,33.44283);
   hmc__22->SetBinContent(11,28.36493);
   hmc__22->SetBinContent(12,31.21158);
   hmc__22->SetBinContent(13,25.69674);
   hmc__22->SetBinContent(14,23.18773);
   hmc__22->SetBinContent(15,19.64923);
   hmc__22->SetBinContent(16,18.52306);
   hmc__22->SetBinContent(17,18.41394);
   hmc__22->SetBinContent(18,15.46795);
   hmc__22->SetBinContent(19,15.05369);
   hmc__22->SetBinContent(20,11.9939);
   hmc__22->SetBinContent(21,194.5338);
   hmc__22->SetBinError(1,46.82674);
   hmc__22->SetBinError(2,15.82367);
   hmc__22->SetBinError(3,18.82963);
   hmc__22->SetBinError(4,16.4431);
   hmc__22->SetBinError(5,19.84968);
   hmc__22->SetBinError(6,18.58173);
   hmc__22->SetBinError(7,12.36485);
   hmc__22->SetBinError(8,17.0561);
   hmc__22->SetBinError(9,15.62212);
   hmc__22->SetBinError(10,14.99744);
   hmc__22->SetBinError(11,15.10233);
   hmc__22->SetBinError(12,14.40755);
   hmc__22->SetBinError(13,13.86892);
   hmc__22->SetBinError(14,12.00624);
   hmc__22->SetBinError(15,10.16727);
   hmc__22->SetBinError(16,10.26069);
   hmc__22->SetBinError(17,15.76026);
   hmc__22->SetBinError(18,15.49768);
   hmc__22->SetBinError(19,11.62115);
   hmc__22->SetBinError(20,9.660506);
   hmc__22->SetBinError(21,40.52749);
   hmc__22->SetMinimum(-3.448686);
   hmc__22->SetMaximum(362.112);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,50);
   hs8_stack_8->SetMinimum(-9.393126e-09);
   hs8_stack_8->SetMaximum(181.056);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,9.097254);
   hbadmatch_stack_1->SetBinContent(2,0.6803553);
   hbadmatch_stack_1->SetBinContent(3,1.048258);
   hbadmatch_stack_1->SetBinContent(4,1.4071);
   hbadmatch_stack_1->SetBinContent(5,0.8753801);
   hbadmatch_stack_1->SetBinContent(6,0.7227832);
   hbadmatch_stack_1->SetBinContent(7,0.9213626);
   hbadmatch_stack_1->SetBinContent(8,0.4508327);
   hbadmatch_stack_1->SetBinContent(9,0.7341803);
   hbadmatch_stack_1->SetBinContent(10,1.528516);
   hbadmatch_stack_1->SetBinContent(11,0.3252394);
   hbadmatch_stack_1->SetBinContent(12,0.2271572);
   hbadmatch_stack_1->SetBinContent(13,0.9905506);
   hbadmatch_stack_1->SetBinContent(14,1.282317);
   hbadmatch_stack_1->SetBinContent(15,1.02801);
   hbadmatch_stack_1->SetBinContent(16,0.8753801);
   hbadmatch_stack_1->SetBinContent(17,0.7846341);
   hbadmatch_stack_1->SetBinContent(18,0.8391231);
   hbadmatch_stack_1->SetBinContent(19,0.8739958);
   hbadmatch_stack_1->SetBinContent(20,0.6946292);
   hbadmatch_stack_1->SetBinContent(21,7.597527);
   hbadmatch_stack_1->SetBinError(1,1.9215);
   hbadmatch_stack_1->SetBinError(2,0.4810838);
   hbadmatch_stack_1->SetBinError(3,0.5137564);
   hbadmatch_stack_1->SetBinError(4,0.7276908);
   hbadmatch_stack_1->SetBinError(5,0.5191111);
   hbadmatch_stack_1->SetBinError(6,0.4610178);
   hbadmatch_stack_1->SetBinError(7,0.5609317);
   hbadmatch_stack_1->SetBinError(8,0.3213605);
   hbadmatch_stack_1->SetBinError(9,0.3776106);
   hbadmatch_stack_1->SetBinError(10,0.7023016);
   hbadmatch_stack_1->SetBinError(11,0.2349795);
   hbadmatch_stack_1->SetBinError(12,0.2271572);
   hbadmatch_stack_1->SetBinError(13,0.5988353);
   hbadmatch_stack_1->SetBinError(14,0.7444426);
   hbadmatch_stack_1->SetBinError(15,0.5298636);
   hbadmatch_stack_1->SetBinError(16,0.5191111);
   hbadmatch_stack_1->SetBinError(17,0.4922557);
   hbadmatch_stack_1->SetBinError(18,0.509075);
   hbadmatch_stack_1->SetBinError(19,0.4438038);
   hbadmatch_stack_1->SetBinError(20,0.4912807);
   hbadmatch_stack_1->SetBinError(21,1.454631);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,41.99711);
   hext_stack_2->SetBinContent(2,7.761223);
   hext_stack_2->SetBinContent(3,15.15497);
   hext_stack_2->SetBinContent(4,7.918446);
   hext_stack_2->SetBinContent(5,6.653987);
   hext_stack_2->SetBinContent(6,7.712152);
   hext_stack_2->SetBinContent(7,8.250023);
   hext_stack_2->SetBinContent(8,9.283875);
   hext_stack_2->SetBinContent(9,4.773807);
   hext_stack_2->SetBinContent(10,6.628036);
   hext_stack_2->SetBinContent(11,5.758588);
   hext_stack_2->SetBinContent(12,8.153461);
   hext_stack_2->SetBinContent(13,3.57278);
   hext_stack_2->SetBinContent(14,3.565599);
   hext_stack_2->SetBinContent(15,4.054399);
   hext_stack_2->SetBinContent(16,3.159);
   hext_stack_2->SetBinContent(17,2.994597);
   hext_stack_2->SetBinContent(18,3.483397);
   hext_stack_2->SetBinContent(19,2.110787);
   hext_stack_2->SetBinContent(20,2.428004);
   hext_stack_2->SetBinContent(21,43.70571);
   hext_stack_2->SetBinError(1,4.335243);
   hext_stack_2->SetBinError(2,1.861595);
   hext_stack_2->SetBinError(3,2.834263);
   hext_stack_2->SetBinError(4,1.946);
   hext_stack_2->SetBinError(5,1.642041);
   hext_stack_2->SetBinError(6,1.654014);
   hext_stack_2->SetBinError(7,1.921184);
   hext_stack_2->SetBinError(8,2.161097);
   hext_stack_2->SetBinError(9,1.433855);
   hext_stack_2->SetBinError(10,1.778983);
   hext_stack_2->SetBinError(11,1.518408);
   hext_stack_2->SetBinError(12,2.008298);
   hext_stack_2->SetBinError(13,1.136966);
   hext_stack_2->SetBinError(14,1.22225);
   hext_stack_2->SetBinError(15,1.311223);
   hext_stack_2->SetBinError(16,1.152637);
   hext_stack_2->SetBinError(17,1.099269);
   hext_stack_2->SetBinError(18,1.197416);
   hext_stack_2->SetBinError(19,0.8669371);
   hext_stack_2->SetBinError(20,1.028599);
   hext_stack_2->SetBinError(21,4.417659);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,5.015809);
   hdirt_stack_3->SetBinContent(2,0.9140499);
   hdirt_stack_3->SetBinContent(3,0.238199);
   hdirt_stack_3->SetBinContent(4,0.9833936);
   hdirt_stack_3->SetBinContent(5,1.528435);
   hdirt_stack_3->SetBinContent(6,0.5821506);
   hdirt_stack_3->SetBinContent(7,0.399291);
   hdirt_stack_3->SetBinContent(8,1.858555);
   hdirt_stack_3->SetBinContent(9,1.152633);
   hdirt_stack_3->SetBinContent(10,0.6448251);
   hdirt_stack_3->SetBinContent(11,0.3797361);
   hdirt_stack_3->SetBinContent(12,0.6533686);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.2256247);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.165479);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinContent(21,3.013733);
   hdirt_stack_3->SetBinError(1,1.389273);
   hdirt_stack_3->SetBinError(2,0.4788161);
   hdirt_stack_3->SetBinError(3,0.238199);
   hdirt_stack_3->SetBinError(4,0.5832453);
   hdirt_stack_3->SetBinError(5,0.7044084);
   hdirt_stack_3->SetBinError(6,0.3415702);
   hdirt_stack_3->SetBinError(7,0.399291);
   hdirt_stack_3->SetBinError(8,0.6875976);
   hdirt_stack_3->SetBinError(9,0.6018102);
   hdirt_stack_3->SetBinError(10,0.4309404);
   hdirt_stack_3->SetBinError(11,0.2716338);
   hdirt_stack_3->SetBinError(12,0.3333334);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.218999);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(18,0.165479);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetBinError(21,0.9349037);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,35.18937);
   houtFV_stack_4->SetBinContent(2,9.125584);
   houtFV_stack_4->SetBinContent(3,9.397051);
   houtFV_stack_4->SetBinContent(4,10.03301);
   houtFV_stack_4->SetBinContent(5,8.563103);
   houtFV_stack_4->SetBinContent(6,7.363823);
   houtFV_stack_4->SetBinContent(7,6.823887);
   houtFV_stack_4->SetBinContent(8,8.294254);
   houtFV_stack_4->SetBinContent(9,8.358753);
   houtFV_stack_4->SetBinContent(10,5.987408);
   houtFV_stack_4->SetBinContent(11,4.150682);
   houtFV_stack_4->SetBinContent(12,6.335493);
   houtFV_stack_4->SetBinContent(13,4.638333);
   houtFV_stack_4->SetBinContent(14,4.701284);
   houtFV_stack_4->SetBinContent(15,3.155577);
   houtFV_stack_4->SetBinContent(16,2.818147);
   houtFV_stack_4->SetBinContent(17,5.684786);
   houtFV_stack_4->SetBinContent(18,1.541054);
   houtFV_stack_4->SetBinContent(19,6.066576);
   houtFV_stack_4->SetBinContent(20,3.05676);
   houtFV_stack_4->SetBinContent(21,41.15521);
   houtFV_stack_4->SetBinError(1,3.085491);
   houtFV_stack_4->SetBinError(2,1.545055);
   houtFV_stack_4->SetBinError(3,1.921163);
   houtFV_stack_4->SetBinError(4,1.604301);
   houtFV_stack_4->SetBinError(5,1.512463);
   houtFV_stack_4->SetBinError(6,1.34636);
   houtFV_stack_4->SetBinError(7,1.257898);
   houtFV_stack_4->SetBinError(8,1.433986);
   houtFV_stack_4->SetBinError(9,1.465781);
   houtFV_stack_4->SetBinError(10,1.210197);
   houtFV_stack_4->SetBinError(11,0.9934696);
   houtFV_stack_4->SetBinError(12,1.218118);
   houtFV_stack_4->SetBinError(13,1.033319);
   houtFV_stack_4->SetBinError(14,1.100175);
   houtFV_stack_4->SetBinError(15,0.825909);
   houtFV_stack_4->SetBinError(16,0.8174778);
   houtFV_stack_4->SetBinError(17,1.257875);
   houtFV_stack_4->SetBinError(18,0.625517);
   houtFV_stack_4->SetBinError(19,1.271234);
   houtFV_stack_4->SetBinError(20,0.8317228);
   houtFV_stack_4->SetBinError(21,3.260763);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.320266);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7524356);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6534392);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.826382);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.155171);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8896269);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.7043599);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2782724);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4109454);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2632464);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4526986);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7200741);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.7270598);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.5502115);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1055263);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4414746);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2008912);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.148629);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4404438);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2363769);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.382805);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6164069);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3200561);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2401262);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3852733);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4777559);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2714329);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.252434);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1242192);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1749172);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.09690084);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2549383);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3452);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2395697);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2370333);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05487092);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2154655);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1396865);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.09657665);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3050221);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1465707);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5784959);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03555292);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03873478);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06518023);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.075351);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.57848);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02514784);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03000036);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04656421);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04834894);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3216929);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.96029);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.659017);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.437924);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.051781);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.935473);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.488976);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.485081);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.328497);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.474028);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.666728);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.7731);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.50573);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.71683);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.768018);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.999602);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.425707);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.684006);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.05237);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.224463);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8849933);
   hNCpi0inFVres_stack_7->SetBinContent(21,17.17233);
   hNCpi0inFVres_stack_7->SetBinError(1,1.523719);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7729035);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7812276);
   hNCpi0inFVres_stack_7->SetBinError(4,1.032329);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7074835);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7638661);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8676112);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7257855);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8100123);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7242022);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6425938);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5152521);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7341979);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5920546);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7202619);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4405778);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6150788);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4523442);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3205794);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2112663);
   hNCpi0inFVres_stack_7->SetBinError(21,1.331674);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.875376);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8826156);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.042238);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.166593);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.889508);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.213601);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.933018);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.313039);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8468691);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6996031);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.478239);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.034031);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.541038);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.044397);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.953029);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3518386);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.514581);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8696868);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1811906);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7411534);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.495958);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6368849);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.269741);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5815603);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5320994);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5007937);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2890304);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5370533);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4662706);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1962928);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2271691);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4504585);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5463226);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8020989);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3950613);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3386954);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1664846);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1759112);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4369193);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.0634522);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3369341);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9006679);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,28.83097);
   hCCpi0inFV_stack_10->SetBinContent(2,7.671823);
   hCCpi0inFV_stack_10->SetBinContent(3,8.6794);
   hCCpi0inFV_stack_10->SetBinContent(4,7.626323);
   hCCpi0inFV_stack_10->SetBinContent(5,6.676857);
   hCCpi0inFV_stack_10->SetBinContent(6,6.91552);
   hCCpi0inFV_stack_10->SetBinContent(7,8.767102);
   hCCpi0inFV_stack_10->SetBinContent(8,8.17216);
   hCCpi0inFV_stack_10->SetBinContent(9,9.284641);
   hCCpi0inFV_stack_10->SetBinContent(10,9.579102);
   hCCpi0inFV_stack_10->SetBinContent(11,5.621671);
   hCCpi0inFV_stack_10->SetBinContent(12,6.752091);
   hCCpi0inFV_stack_10->SetBinContent(13,4.9284);
   hCCpi0inFV_stack_10->SetBinContent(14,4.944133);
   hCCpi0inFV_stack_10->SetBinContent(15,4.593294);
   hCCpi0inFV_stack_10->SetBinContent(16,3.907867);
   hCCpi0inFV_stack_10->SetBinContent(17,3.975392);
   hCCpi0inFV_stack_10->SetBinContent(18,4.540041);
   hCCpi0inFV_stack_10->SetBinContent(19,2.587494);
   hCCpi0inFV_stack_10->SetBinContent(20,2.340906);
   hCCpi0inFV_stack_10->SetBinContent(21,40.59288);
   hCCpi0inFV_stack_10->SetBinError(1,2.703539);
   hCCpi0inFV_stack_10->SetBinError(2,1.381531);
   hCCpi0inFV_stack_10->SetBinError(3,1.499845);
   hCCpi0inFV_stack_10->SetBinError(4,1.368574);
   hCCpi0inFV_stack_10->SetBinError(5,1.307213);
   hCCpi0inFV_stack_10->SetBinError(6,1.338595);
   hCCpi0inFV_stack_10->SetBinError(7,1.499804);
   hCCpi0inFV_stack_10->SetBinError(8,1.411178);
   hCCpi0inFV_stack_10->SetBinError(9,1.520142);
   hCCpi0inFV_stack_10->SetBinError(10,1.595896);
   hCCpi0inFV_stack_10->SetBinError(11,1.160709);
   hCCpi0inFV_stack_10->SetBinError(12,1.27243);
   hCCpi0inFV_stack_10->SetBinError(13,1.144173);
   hCCpi0inFV_stack_10->SetBinError(14,1.181363);
   hCCpi0inFV_stack_10->SetBinError(15,1.093343);
   hCCpi0inFV_stack_10->SetBinError(16,0.9808007);
   hCCpi0inFV_stack_10->SetBinError(17,1.006573);
   hCCpi0inFV_stack_10->SetBinError(18,1.110732);
   hCCpi0inFV_stack_10->SetBinError(19,0.8087577);
   hCCpi0inFV_stack_10->SetBinError(20,0.8093475);
   hCCpi0inFV_stack_10->SetBinError(21,3.217855);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,4.401304);
   hNCinFV_stack_11->SetBinContent(2,1.898954);
   hNCinFV_stack_11->SetBinContent(3,0.9918756);
   hNCinFV_stack_11->SetBinContent(4,1.969118);
   hNCinFV_stack_11->SetBinContent(5,2.244114);
   hNCinFV_stack_11->SetBinContent(6,1.643965);
   hNCinFV_stack_11->SetBinContent(7,1.049366);
   hNCinFV_stack_11->SetBinContent(8,1.896065);
   hNCinFV_stack_11->SetBinContent(9,1.542626);
   hNCinFV_stack_11->SetBinContent(10,0.622418);
   hNCinFV_stack_11->SetBinContent(11,2.19292);
   hNCinFV_stack_11->SetBinContent(12,1.355681);
   hNCinFV_stack_11->SetBinContent(13,1.84111);
   hNCinFV_stack_11->SetBinContent(14,1.171416);
   hNCinFV_stack_11->SetBinContent(15,0.1950248);
   hNCinFV_stack_11->SetBinContent(16,0.5145313);
   hNCinFV_stack_11->SetBinContent(17,0.6225463);
   hNCinFV_stack_11->SetBinContent(18,0.3937658);
   hNCinFV_stack_11->SetBinContent(19,0.4195172);
   hNCinFV_stack_11->SetBinContent(20,0.3252394);
   hNCinFV_stack_11->SetBinContent(21,7.13739);
   hNCinFV_stack_11->SetBinError(1,1.161742);
   hNCinFV_stack_11->SetBinError(2,0.7316023);
   hNCinFV_stack_11->SetBinError(3,0.4363881);
   hNCinFV_stack_11->SetBinError(4,0.7506244);
   hNCinFV_stack_11->SetBinError(5,0.7341903);
   hNCinFV_stack_11->SetBinError(6,0.7170371);
   hNCinFV_stack_11->SetBinError(7,0.5357627);
   hNCinFV_stack_11->SetBinError(8,0.834397);
   hNCinFV_stack_11->SetBinError(9,0.6218004);
   hNCinFV_stack_11->SetBinError(10,0.322021);
   hNCinFV_stack_11->SetBinError(11,0.7511893);
   hNCinFV_stack_11->SetBinError(12,0.7007728);
   hNCinFV_stack_11->SetBinError(13,0.8728498);
   hNCinFV_stack_11->SetBinError(14,0.5973088);
   hNCinFV_stack_11->SetBinError(15,0.1950249);
   hNCinFV_stack_11->SetBinError(16,0.3034126);
   hNCinFV_stack_11->SetBinError(17,0.2906183);
   hNCinFV_stack_11->SetBinError(18,0.3443726);
   hNCinFV_stack_11->SetBinError(19,0.2647544);
   hNCinFV_stack_11->SetBinError(20,0.2349795);
   hNCinFV_stack_11->SetBinError(21,1.432357);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,23.40845);
   hnumuCCinFV_stack_12->SetBinContent(2,4.591232);
   hnumuCCinFV_stack_12->SetBinContent(3,6.662008);
   hnumuCCinFV_stack_12->SetBinContent(4,3.34163);
   hnumuCCinFV_stack_12->SetBinContent(5,2.885419);
   hnumuCCinFV_stack_12->SetBinContent(6,4.178918);
   hnumuCCinFV_stack_12->SetBinContent(7,1.5357);
   hnumuCCinFV_stack_12->SetBinContent(8,2.957709);
   hnumuCCinFV_stack_12->SetBinContent(9,2.615153);
   hnumuCCinFV_stack_12->SetBinContent(10,2.784209);
   hnumuCCinFV_stack_12->SetBinContent(11,4.166875);
   hnumuCCinFV_stack_12->SetBinContent(12,1.474494);
   hnumuCCinFV_stack_12->SetBinContent(13,2.51103);
   hnumuCCinFV_stack_12->SetBinContent(14,2.859376);
   hnumuCCinFV_stack_12->SetBinContent(15,1.386195);
   hnumuCCinFV_stack_12->SetBinContent(16,3.672142);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(18,1.434403);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(20,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(21,22.97959);
   hnumuCCinFV_stack_12->SetBinError(1,2.621604);
   hnumuCCinFV_stack_12->SetBinError(2,1.10849);
   hnumuCCinFV_stack_12->SetBinError(3,2.464677);
   hnumuCCinFV_stack_12->SetBinError(4,0.9505773);
   hnumuCCinFV_stack_12->SetBinError(5,0.8127358);
   hnumuCCinFV_stack_12->SetBinError(6,1.009339);
   hnumuCCinFV_stack_12->SetBinError(7,0.5861289);
   hnumuCCinFV_stack_12->SetBinError(8,0.8042084);
   hnumuCCinFV_stack_12->SetBinError(9,0.7672656);
   hnumuCCinFV_stack_12->SetBinError(10,0.8323376);
   hnumuCCinFV_stack_12->SetBinError(11,2.055012);
   hnumuCCinFV_stack_12->SetBinError(12,0.6150041);
   hnumuCCinFV_stack_12->SetBinError(13,0.8170133);
   hnumuCCinFV_stack_12->SetBinError(14,1.148007);
   hnumuCCinFV_stack_12->SetBinError(15,0.7177492);
   hnumuCCinFV_stack_12->SetBinError(16,0.9130987);
   hnumuCCinFV_stack_12->SetBinError(17,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(18,0.6153722);
   hnumuCCinFV_stack_12->SetBinError(19,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(20,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(21,2.729149);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(4,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(5,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(21,2.72223);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(4,0.2463303);
   hnueCCinFV_stack_13->SetBinError(5,0.3585277);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(21,1.101955);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__23->SetBinContent(1,172.4343);
   hmcerror__23->SetBinContent(2,41.01234);
   hmcerror__23->SetBinContent(3,51.30536);
   hmcerror__23->SetBinContent(4,44.5701);
   hmcerror__23->SetBinContent(5,39.07046);
   hmcerror__23->SetBinContent(6,36.72974);
   hmcerror__23->SetBinContent(7,37.08345);
   hmcerror__23->SetBinContent(8,40.23207);
   hmcerror__23->SetBinContent(9,35.58707);
   hmcerror__23->SetBinContent(10,33.44283);
   hmcerror__23->SetBinContent(11,28.36493);
   hmcerror__23->SetBinContent(12,31.21158);
   hmcerror__23->SetBinContent(13,25.69674);
   hmcerror__23->SetBinContent(14,23.18773);
   hmcerror__23->SetBinContent(15,19.64923);
   hmcerror__23->SetBinContent(16,18.52306);
   hmcerror__23->SetBinContent(17,18.41394);
   hmcerror__23->SetBinContent(18,15.46795);
   hmcerror__23->SetBinContent(19,15.05369);
   hmcerror__23->SetBinContent(20,11.9939);
   hmcerror__23->SetBinContent(21,194.5338);
   hmcerror__23->SetBinError(1,46.82674);
   hmcerror__23->SetBinError(2,15.82367);
   hmcerror__23->SetBinError(3,18.82963);
   hmcerror__23->SetBinError(4,16.4431);
   hmcerror__23->SetBinError(5,19.84968);
   hmcerror__23->SetBinError(6,18.58173);
   hmcerror__23->SetBinError(7,12.36485);
   hmcerror__23->SetBinError(8,17.0561);
   hmcerror__23->SetBinError(9,15.62212);
   hmcerror__23->SetBinError(10,14.99744);
   hmcerror__23->SetBinError(11,15.10233);
   hmcerror__23->SetBinError(12,14.40755);
   hmcerror__23->SetBinError(13,13.86892);
   hmcerror__23->SetBinError(14,12.00624);
   hmcerror__23->SetBinError(15,10.16727);
   hmcerror__23->SetBinError(16,10.26069);
   hmcerror__23->SetBinError(17,15.76026);
   hmcerror__23->SetBinError(18,15.49768);
   hmcerror__23->SetBinError(19,11.62115);
   hmcerror__23->SetBinError(20,9.660506);
   hmcerror__23->SetBinError(21,40.52749);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3029[20] = {
   158,
   38,
   40,
   49,
   43,
   47,
   39,
   33,
   30,
   35,
   33,
   23,
   15,
   20,
   30,
   23,
   23,
   15,
   11,
   9};
   Double_t _felx3029[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3029[20] = {
   12.56981,
   6.3013,
   6.4604,
   7.1318,
   6.6917,
   6.9882,
   6.3813,
   5.8847,
   5.6197,
   6.0548,
   5.8847,
   4.9457,
   4.0385,
   4.6266,
   5.6197,
   4.9457,
   4.9457,
   4.0385,
   3.4975,
   3.19354};
   Double_t _fehx3029[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3029[20] = {
   12.56981,
   6.0955,
   6.2549,
   6.9277,
   6.4868,
   6.7839,
   6.1757,
   5.6776,
   5.4117,
   5.8483,
   5.6776,
   4.7346,
   3.8197,
   4.4133,
   5.4117,
   4.7346,
   4.7346,
   3.8197,
   3.27,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,55);
   Graph_Graph3029->SetMinimum(5.225814);
   Graph_Graph3029->SetMaximum(187.0461);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 714.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 25.4","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 155.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 151.3","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.3","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  99.5","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  27.6","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 146.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 27.3","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 75.1","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.2","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3030[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3030[20] = {
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
   Double_t _felx3030[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3030[20] = {
   0.2715628,
   0.3858271,
   0.367011,
   0.3689267,
   0.5080483,
   0.5059043,
   0.333433,
   0.4239429,
   0.4389832,
   0.4484503,
   0.5324296,
   0.4616092,
   0.5397154,
   0.5177842,
   0.5174387,
   0.5539416,
   0.8558877,
   1.001922,
   0.7719801,
   0.8054519};
   Double_t _fehx3030[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3030[20] = {
   0.2715628,
   0.3858271,
   0.367011,
   0.3689267,
   0.5080483,
   0.5059043,
   0.333433,
   0.4239429,
   0.4389832,
   0.4484503,
   0.5324296,
   0.4616092,
   0.5397154,
   0.5177842,
   0.5174387,
   0.5539416,
   0.8558877,
   1.001922,
   0.7719801,
   0.8054519};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,55);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3031[20] = {
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
   Double_t _felx3031[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3031[20] = {
   0.1632095,
   0.1952863,
   0.201737,
   0.1963269,
   0.2009102,
   0.2002602,
   0.1956901,
   0.1887455,
   0.197791,
   0.2044683,
   0.2279747,
   0.1983197,
   0.2120718,
   0.2269613,
   0.2369597,
   0.2194386,
   0.2380276,
   0.2131388,
   0.2361936,
   0.2616962};
   Double_t _fehx3031[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3031[20] = {
   0.1632095,
   0.1952863,
   0.201737,
   0.1963269,
   0.2009102,
   0.2002602,
   0.1956901,
   0.1887455,
   0.197791,
   0.2044683,
   0.2279747,
   0.1983197,
   0.2120718,
   0.2269613,
   0.2369597,
   0.2194386,
   0.2380276,
   0.2131388,
   0.2361936,
   0.2616962};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,55);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3032[20] = {
   0.916291,
   0.9265505,
   0.7796457,
   1.099392,
   1.100576,
   1.279617,
   1.051682,
   0.8202411,
   0.8430029,
   1.046562,
   1.163408,
   0.7369059,
   0.5837317,
   0.8625252,
   1.526778,
   1.241696,
   1.249054,
   0.9697472,
   0.7307181,
   0.7503817};
   Double_t _felx3032[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3032[20] = {
   0.0728962,
   0.153644,
   0.1259206,
   0.1600131,
   0.1712726,
   0.19026,
   0.1720795,
   0.1462689,
   0.1579141,
   0.1810493,
   0.2074639,
   0.1584572,
   0.15716,
   0.199528,
   0.2860011,
   0.2670024,
   0.2685846,
   0.2610883,
   0.2323351,
   0.2662638};
   Double_t _fehx3032[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3032[20] = {
   0.0728962,
   0.148626,
   0.1219151,
   0.1554338,
   0.1660282,
   0.1846977,
   0.1665352,
   0.1411212,
   0.1520693,
   0.1748746,
   0.2001627,
   0.1516937,
   0.1486453,
   0.1903291,
   0.2754154,
   0.2556058,
   0.2571205,
   0.2469429,
   0.2172226,
   0.2466421};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,55);
   Graph_Graph3032->SetMinimum(0.2890095);
   Graph_Graph3032->SetMaximum(1.939755);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
