#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 16:38:21 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
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
   pad1->Range(-13.84615,-4.596069,101.5385,508.2285);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__22->SetBinContent(1,229.8035);
   hmc__22->SetBinContent(2,79.44864);
   hmc__22->SetBinContent(3,80.47518);
   hmc__22->SetBinContent(4,76.2533);
   hmc__22->SetBinContent(5,74.43584);
   hmc__22->SetBinContent(6,67.76091);
   hmc__22->SetBinContent(7,65.05325);
   hmc__22->SetBinContent(8,51.31082);
   hmc__22->SetBinContent(9,46.29526);
   hmc__22->SetBinContent(10,39.11898);
   hmc__22->SetBinContent(11,33.73139);
   hmc__22->SetBinContent(12,33.82732);
   hmc__22->SetBinContent(13,27.91315);
   hmc__22->SetBinContent(14,24.37126);
   hmc__22->SetBinContent(15,18.03839);
   hmc__22->SetBinContent(16,19.49991);
   hmc__22->SetBinContent(17,12.61159);
   hmc__22->SetBinContent(18,12.43691);
   hmc__22->SetBinContent(19,13.89466);
   hmc__22->SetBinContent(20,8.895869);
   hmc__22->SetBinContent(21,11.37881);
   hmc__22->SetBinContent(22,12.50791);
   hmc__22->SetBinContent(23,6.425324);
   hmc__22->SetBinContent(24,7.906765);
   hmc__22->SetBinContent(25,100.8629);
   hmc__22->SetBinError(1,50.08636);
   hmc__22->SetBinError(2,22.90929);
   hmc__22->SetBinError(3,24.76258);
   hmc__22->SetBinError(4,22.87425);
   hmc__22->SetBinError(5,22.23481);
   hmc__22->SetBinError(6,22.74103);
   hmc__22->SetBinError(7,22.35143);
   hmc__22->SetBinError(8,19.66858);
   hmc__22->SetBinError(9,20.04463);
   hmc__22->SetBinError(10,16.30701);
   hmc__22->SetBinError(11,18.93371);
   hmc__22->SetBinError(12,27.25193);
   hmc__22->SetBinError(13,13.93407);
   hmc__22->SetBinError(14,11.23181);
   hmc__22->SetBinError(15,12.19386);
   hmc__22->SetBinError(16,10.17328);
   hmc__22->SetBinError(17,6.297405);
   hmc__22->SetBinError(18,8.917889);
   hmc__22->SetBinError(19,7.90123);
   hmc__22->SetBinError(20,6.70434);
   hmc__22->SetBinError(21,9.539081);
   hmc__22->SetBinError(22,12.58228);
   hmc__22->SetBinError(23,12.05821);
   hmc__22->SetBinError(24,10.44579);
   hmc__22->SetBinError(25,28.11357);
   hmc__22->SetMinimum(-4.596069);
   hmc__22->SetMaximum(482.5873);
   hmc__22->SetEntries(1133.738);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,90);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(241.2936);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,9.947811);
   hbadmatch_stack_1->SetBinContent(2,2.377254);
   hbadmatch_stack_1->SetBinContent(3,1.593674);
   hbadmatch_stack_1->SetBinContent(4,2.154733);
   hbadmatch_stack_1->SetBinContent(5,0.9269427);
   hbadmatch_stack_1->SetBinContent(6,1.355476);
   hbadmatch_stack_1->SetBinContent(7,2.274276);
   hbadmatch_stack_1->SetBinContent(8,0.4238726);
   hbadmatch_stack_1->SetBinContent(9,1.314571);
   hbadmatch_stack_1->SetBinContent(10,1.773449);
   hbadmatch_stack_1->SetBinContent(11,1.215558);
   hbadmatch_stack_1->SetBinContent(12,1.911218);
   hbadmatch_stack_1->SetBinContent(13,1.4798);
   hbadmatch_stack_1->SetBinContent(14,0.3916036);
   hbadmatch_stack_1->SetBinContent(15,1.435705);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3917402);
   hbadmatch_stack_1->SetBinContent(18,0.5987549);
   hbadmatch_stack_1->SetBinContent(19,0.9303237);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.5352025);
   hbadmatch_stack_1->SetBinContent(22,0.7838478);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.8423293);
   hbadmatch_stack_1->SetBinContent(25,3.737206);
   hbadmatch_stack_1->SetBinError(1,1.928445);
   hbadmatch_stack_1->SetBinError(2,0.8252828);
   hbadmatch_stack_1->SetBinError(3,0.7191352);
   hbadmatch_stack_1->SetBinError(4,0.7495653);
   hbadmatch_stack_1->SetBinError(5,0.4800908);
   hbadmatch_stack_1->SetBinError(6,0.5681593);
   hbadmatch_stack_1->SetBinError(7,0.7412457);
   hbadmatch_stack_1->SetBinError(8,0.3004951);
   hbadmatch_stack_1->SetBinError(9,0.6059111);
   hbadmatch_stack_1->SetBinError(10,0.8296713);
   hbadmatch_stack_1->SetBinError(11,0.6206425);
   hbadmatch_stack_1->SetBinError(12,0.7532135);
   hbadmatch_stack_1->SetBinError(13,0.6288738);
   hbadmatch_stack_1->SetBinError(14,0.3916037);
   hbadmatch_stack_1->SetBinError(15,0.5998805);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2770047);
   hbadmatch_stack_1->SetBinError(18,0.4475854);
   hbadmatch_stack_1->SetBinError(19,0.4814682);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.3921167);
   hbadmatch_stack_1->SetBinError(22,0.4641168);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.4936034);
   hbadmatch_stack_1->SetBinError(25,1.037806);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,45.51364);
   hext_stack_2->SetBinContent(2,13.43043);
   hext_stack_2->SetBinContent(3,8.828205);
   hext_stack_2->SetBinContent(4,14.04174);
   hext_stack_2->SetBinContent(5,13.82267);
   hext_stack_2->SetBinContent(6,9.305417);
   hext_stack_2->SetBinContent(7,10.87556);
   hext_stack_2->SetBinContent(8,8.090029);
   hext_stack_2->SetBinContent(9,7.552158);
   hext_stack_2->SetBinContent(10,6.068624);
   hext_stack_2->SetBinContent(11,5.180405);
   hext_stack_2->SetBinContent(12,5.105384);
   hext_stack_2->SetBinContent(13,4.468179);
   hext_stack_2->SetBinContent(14,4.677244);
   hext_stack_2->SetBinContent(15,1.137595);
   hext_stack_2->SetBinContent(16,5.039181);
   hext_stack_2->SetBinContent(17,3.248382);
   hext_stack_2->SetBinContent(18,1.219797);
   hext_stack_2->SetBinContent(19,4.117831);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,3.882816);
   hext_stack_2->SetBinContent(22,3.565599);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,19.77438);
   hext_stack_2->SetBinError(1,4.422494);
   hext_stack_2->SetBinError(2,2.431504);
   hext_stack_2->SetBinError(3,1.942999);
   hext_stack_2->SetBinError(4,2.307992);
   hext_stack_2->SetBinError(5,2.545572);
   hext_stack_2->SetBinError(6,2.016615);
   hext_stack_2->SetBinError(7,2.049258);
   hext_stack_2->SetBinError(8,1.925069);
   hext_stack_2->SetBinError(9,1.658526);
   hext_stack_2->SetBinError(10,1.677259);
   hext_stack_2->SetBinError(11,1.49039);
   hext_stack_2->SetBinError(12,1.39999);
   hext_stack_2->SetBinError(13,1.297469);
   hext_stack_2->SetBinError(14,1.54863);
   hext_stack_2->SetBinError(15,0.6602113);
   hext_stack_2->SetBinError(16,1.403185);
   hext_stack_2->SetBinError(17,1.089706);
   hext_stack_2->SetBinError(18,0.7042499);
   hext_stack_2->SetBinError(19,1.430621);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,1.341763);
   hext_stack_2->SetBinError(22,1.22225);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,2.846203);
   hext_stack_2->SetEntries(503);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,6.235786);
   hdirt_stack_3->SetBinContent(2,0.7952818);
   hdirt_stack_3->SetBinContent(3,2.088669);
   hdirt_stack_3->SetBinContent(4,1.590673);
   hdirt_stack_3->SetBinContent(5,1.432632);
   hdirt_stack_3->SetBinContent(6,1.977847);
   hdirt_stack_3->SetBinContent(7,0.6448251);
   hdirt_stack_3->SetBinContent(8,1.171176);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.1448005);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.3843746);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.7277534);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.1620494);
   hdirt_stack_3->SetBinContent(22,0.4762587);
   hdirt_stack_3->SetBinContent(25,1.290705);
   hdirt_stack_3->SetBinError(1,1.499716);
   hdirt_stack_3->SetBinError(2,0.4680007);
   hdirt_stack_3->SetBinError(3,0.867682);
   hdirt_stack_3->SetBinError(4,0.6392186);
   hdirt_stack_3->SetBinError(5,0.6746507);
   hdirt_stack_3->SetBinError(6,0.7343335);
   hdirt_stack_3->SetBinError(7,0.4309404);
   hdirt_stack_3->SetBinError(8,0.4516191);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.1382353);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.2744059);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.5158802);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.1620494);
   hdirt_stack_3->SetBinError(22,0.3652866);
   hdirt_stack_3->SetBinError(25,0.6174457);
   hdirt_stack_3->SetEntries(90);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,51.00541);
   houtFV_stack_4->SetBinContent(2,17.36476);
   houtFV_stack_4->SetBinContent(3,18.11549);
   houtFV_stack_4->SetBinContent(4,15.66231);
   houtFV_stack_4->SetBinContent(5,13.88207);
   houtFV_stack_4->SetBinContent(6,14.04359);
   houtFV_stack_4->SetBinContent(7,10.93038);
   houtFV_stack_4->SetBinContent(8,12.04667);
   houtFV_stack_4->SetBinContent(9,9.429792);
   houtFV_stack_4->SetBinContent(10,7.896379);
   houtFV_stack_4->SetBinContent(11,7.405525);
   houtFV_stack_4->SetBinContent(12,6.002186);
   houtFV_stack_4->SetBinContent(13,8.566272);
   houtFV_stack_4->SetBinContent(14,5.693038);
   houtFV_stack_4->SetBinContent(15,3.766102);
   houtFV_stack_4->SetBinContent(16,3.56769);
   houtFV_stack_4->SetBinContent(17,1.476323);
   houtFV_stack_4->SetBinContent(18,3.127768);
   houtFV_stack_4->SetBinContent(19,2.253103);
   houtFV_stack_4->SetBinContent(20,1.65548);
   houtFV_stack_4->SetBinContent(21,2.250697);
   houtFV_stack_4->SetBinContent(22,1.69215);
   houtFV_stack_4->SetBinContent(23,1.26712);
   houtFV_stack_4->SetBinContent(24,0.7479978);
   houtFV_stack_4->SetBinContent(25,26.2199);
   houtFV_stack_4->SetBinError(1,3.687155);
   houtFV_stack_4->SetBinError(2,2.428597);
   houtFV_stack_4->SetBinError(3,2.191373);
   houtFV_stack_4->SetBinError(4,2.032469);
   houtFV_stack_4->SetBinError(5,1.83953);
   houtFV_stack_4->SetBinError(6,1.858689);
   houtFV_stack_4->SetBinError(7,1.670179);
   houtFV_stack_4->SetBinError(8,1.708147);
   houtFV_stack_4->SetBinError(9,1.541404);
   houtFV_stack_4->SetBinError(10,1.407686);
   houtFV_stack_4->SetBinError(11,1.378336);
   houtFV_stack_4->SetBinError(12,1.271994);
   houtFV_stack_4->SetBinError(13,1.463308);
   houtFV_stack_4->SetBinError(14,1.183593);
   houtFV_stack_4->SetBinError(15,0.9410676);
   houtFV_stack_4->SetBinError(16,0.919918);
   houtFV_stack_4->SetBinError(17,0.6244789);
   houtFV_stack_4->SetBinError(18,0.8999062);
   houtFV_stack_4->SetBinError(19,0.7867565);
   houtFV_stack_4->SetBinError(20,0.6493189);
   houtFV_stack_4->SetBinError(21,0.7346377);
   houtFV_stack_4->SetBinError(22,0.6683534);
   houtFV_stack_4->SetBinError(23,0.5883944);
   houtFV_stack_4->SetBinError(24,0.4460751);
   houtFV_stack_4->SetBinError(25,2.657467);
   houtFV_stack_4->SetEntries(1038);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.51168);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.323926);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.227608);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.673344);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8365039);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.739354);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7242399);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9889579);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.086772);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5878953);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3690854);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4228219);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4524662);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2638255);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3047819);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2828126);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3067967);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2394648);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,28.39285);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.73099);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.74056);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.18519);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.87399);
   hNCpi0inFVres_stack_7->SetBinContent(6,13.30321);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.22431);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.819497);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.404158);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.113372);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.354328);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.988468);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.403816);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.287144);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.788016);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.620784);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.04983);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.033884);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.672512);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.911162);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.7943219);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.324758);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.7391858);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.8654041);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.423087);
   hNCpi0inFVres_stack_7->SetBinError(1,1.723936);
   hNCpi0inFVres_stack_7->SetBinError(2,1.126452);
   hNCpi0inFVres_stack_7->SetBinError(3,1.337346);
   hNCpi0inFVres_stack_7->SetBinError(4,1.04855);
   hNCpi0inFVres_stack_7->SetBinError(5,1.175844);
   hNCpi0inFVres_stack_7->SetBinError(6,1.234383);
   hNCpi0inFVres_stack_7->SetBinError(7,1.087841);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8644946);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8831651);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9145229);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7247352);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6861603);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6196956);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4710102);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5126865);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5393848);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5047172);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4717671);
   hNCpi0inFVres_stack_7->SetBinError(19,0.43065);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5197245);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2741946);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3943225);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2452205);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3498677);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9369452);
   hNCpi0inFVres_stack_7->SetEntries(3289);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.027008);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.317788);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.240825);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.317451);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.458447);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.719262);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.523298);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.694611);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.109038);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.008312);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6410357);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.505608);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.850954);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9770041);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.585404);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3068998);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.181018);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.815916);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.862241);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5972);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.742902);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5395646);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5484482);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4905735);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4987045);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6871531);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6138585);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4968153);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1771895);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3667934);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3098478);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3542895);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2501964);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.09253378);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1086555);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5134451);
   hNCpi0inFVdis_stack_8->SetEntries(856);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,36.80299);
   hCCpi0inFV_stack_10->SetBinContent(2,15.37486);
   hCCpi0inFV_stack_10->SetBinContent(3,14.93223);
   hCCpi0inFV_stack_10->SetBinContent(4,13.70057);
   hCCpi0inFV_stack_10->SetBinContent(5,17.50118);
   hCCpi0inFV_stack_10->SetBinContent(6,14.6812);
   hCCpi0inFV_stack_10->SetBinContent(7,15.54462);
   hCCpi0inFV_stack_10->SetBinContent(8,11.10664);
   hCCpi0inFV_stack_10->SetBinContent(9,8.913243);
   hCCpi0inFV_stack_10->SetBinContent(10,8.201321);
   hCCpi0inFV_stack_10->SetBinContent(11,6.545233);
   hCCpi0inFV_stack_10->SetBinContent(12,8.176946);
   hCCpi0inFV_stack_10->SetBinContent(13,5.316759);
   hCCpi0inFV_stack_10->SetBinContent(14,4.800979);
   hCCpi0inFV_stack_10->SetBinContent(15,4.780555);
   hCCpi0inFV_stack_10->SetBinContent(16,3.547064);
   hCCpi0inFV_stack_10->SetBinContent(17,3.254319);
   hCCpi0inFV_stack_10->SetBinContent(18,3.490299);
   hCCpi0inFV_stack_10->SetBinContent(19,2.489704);
   hCCpi0inFV_stack_10->SetBinContent(20,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(21,2.44065);
   hCCpi0inFV_stack_10->SetBinContent(22,1.804013);
   hCCpi0inFV_stack_10->SetBinContent(23,1.467217);
   hCCpi0inFV_stack_10->SetBinContent(24,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(25,18.27715);
   hCCpi0inFV_stack_10->SetBinError(1,3.039803);
   hCCpi0inFV_stack_10->SetBinError(2,1.976263);
   hCCpi0inFV_stack_10->SetBinError(3,1.962766);
   hCCpi0inFV_stack_10->SetBinError(4,1.850582);
   hCCpi0inFV_stack_10->SetBinError(5,2.09828);
   hCCpi0inFV_stack_10->SetBinError(6,1.936716);
   hCCpi0inFV_stack_10->SetBinError(7,2.01823);
   hCCpi0inFV_stack_10->SetBinError(8,1.618677);
   hCCpi0inFV_stack_10->SetBinError(9,1.543879);
   hCCpi0inFV_stack_10->SetBinError(10,1.48211);
   hCCpi0inFV_stack_10->SetBinError(11,1.255551);
   hCCpi0inFV_stack_10->SetBinError(12,1.460088);
   hCCpi0inFV_stack_10->SetBinError(13,1.176665);
   hCCpi0inFV_stack_10->SetBinError(14,1.078231);
   hCCpi0inFV_stack_10->SetBinError(15,1.136409);
   hCCpi0inFV_stack_10->SetBinError(16,0.9477148);
   hCCpi0inFV_stack_10->SetBinError(17,0.8612744);
   hCCpi0inFV_stack_10->SetBinError(18,1.010096);
   hCCpi0inFV_stack_10->SetBinError(19,0.7725392);
   hCCpi0inFV_stack_10->SetBinError(20,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(21,0.7587757);
   hCCpi0inFV_stack_10->SetBinError(22,0.7075491);
   hCCpi0inFV_stack_10->SetBinError(23,0.6214735);
   hCCpi0inFV_stack_10->SetBinError(24,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(25,2.127534);
   hCCpi0inFV_stack_10->SetEntries(957);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,7.76294);
   hNCinFV_stack_11->SetBinContent(2,3.030797);
   hNCinFV_stack_11->SetBinContent(3,4.931781);
   hNCinFV_stack_11->SetBinContent(4,4.296227);
   hNCinFV_stack_11->SetBinContent(5,2.00411);
   hNCinFV_stack_11->SetBinContent(6,4.291763);
   hNCinFV_stack_11->SetBinContent(7,3.372665);
   hNCinFV_stack_11->SetBinContent(8,2.535931);
   hNCinFV_stack_11->SetBinContent(9,2.730956);
   hNCinFV_stack_11->SetBinContent(10,0.7319179);
   hNCinFV_stack_11->SetBinContent(11,1.908829);
   hNCinFV_stack_11->SetBinContent(12,1.465526);
   hNCinFV_stack_11->SetBinContent(13,0.9801958);
   hNCinFV_stack_11->SetBinContent(14,1.268811);
   hNCinFV_stack_11->SetBinContent(15,1.517089);
   hNCinFV_stack_11->SetBinContent(16,1.073786);
   hNCinFV_stack_11->SetBinContent(17,0.5901461);
   hNCinFV_stack_11->SetBinContent(19,1.020533);
   hNCinFV_stack_11->SetBinContent(20,0.3917402);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(22,0.5884556);
   hNCinFV_stack_11->SetBinContent(24,0.6803553);
   hNCinFV_stack_11->SetBinContent(25,3.175949);
   hNCinFV_stack_11->SetBinError(1,1.416138);
   hNCinFV_stack_11->SetBinError(2,0.831764);
   hNCinFV_stack_11->SetBinError(3,1.144752);
   hNCinFV_stack_11->SetBinError(4,1.018517);
   hNCinFV_stack_11->SetBinError(5,0.7352871);
   hNCinFV_stack_11->SetBinError(6,1.110863);
   hNCinFV_stack_11->SetBinError(7,0.8990075);
   hNCinFV_stack_11->SetBinError(8,0.8325131);
   hNCinFV_stack_11->SetBinError(9,0.8550514);
   hNCinFV_stack_11->SetBinError(10,0.438694);
   hNCinFV_stack_11->SetBinError(11,0.6506224);
   hNCinFV_stack_11->SetBinError(12,0.6209405);
   hNCinFV_stack_11->SetBinError(13,0.4383608);
   hNCinFV_stack_11->SetBinError(14,0.5889569);
   hNCinFV_stack_11->SetBinError(15,0.5887087);
   hNCinFV_stack_11->SetBinError(16,0.5557297);
   hNCinFV_stack_11->SetBinError(17,0.340721);
   hNCinFV_stack_11->SetBinError(19,0.5892049);
   hNCinFV_stack_11->SetBinError(20,0.2770047);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(22,0.3397478);
   hNCinFV_stack_11->SetBinError(24,0.4810838);
   hNCinFV_stack_11->SetBinError(25,0.8772215);
   hNCinFV_stack_11->SetEntries(213);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,34.02162);
   hnumuCCinFV_stack_12->SetBinContent(2,8.702555);
   hnumuCCinFV_stack_12->SetBinContent(3,7.501913);
   hnumuCCinFV_stack_12->SetBinContent(4,6.927763);
   hnumuCCinFV_stack_12->SetBinContent(5,6.052597);
   hnumuCCinFV_stack_12->SetBinContent(6,5.062566);
   hnumuCCinFV_stack_12->SetBinContent(7,6.840261);
   hnumuCCinFV_stack_12->SetBinContent(8,3.473532);
   hnumuCCinFV_stack_12->SetBinContent(9,4.30299);
   hnumuCCinFV_stack_12->SetBinContent(10,4.442286);
   hnumuCCinFV_stack_12->SetBinContent(11,4.636258);
   hnumuCCinFV_stack_12->SetBinContent(12,3.827621);
   hnumuCCinFV_stack_12->SetBinContent(13,1.906842);
   hnumuCCinFV_stack_12->SetBinContent(14,3.462203);
   hnumuCCinFV_stack_12->SetBinContent(15,0.597128);
   hnumuCCinFV_stack_12->SetBinContent(16,2.614139);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7936751);
   hnumuCCinFV_stack_12->SetBinContent(18,1.217248);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9702673);
   hnumuCCinFV_stack_12->SetBinContent(20,1.515806);
   hnumuCCinFV_stack_12->SetBinContent(21,0.7624196);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9992422);
   hnumuCCinFV_stack_12->SetBinContent(23,2.169682);
   hnumuCCinFV_stack_12->SetBinContent(24,1.123658);
   hnumuCCinFV_stack_12->SetBinContent(25,13.78738);
   hnumuCCinFV_stack_12->SetBinError(1,3.144749);
   hnumuCCinFV_stack_12->SetBinError(2,2.569851);
   hnumuCCinFV_stack_12->SetBinError(3,1.387953);
   hnumuCCinFV_stack_12->SetBinError(4,1.291346);
   hnumuCCinFV_stack_12->SetBinError(5,1.37686);
   hnumuCCinFV_stack_12->SetBinError(6,1.080318);
   hnumuCCinFV_stack_12->SetBinError(7,2.216824);
   hnumuCCinFV_stack_12->SetBinError(8,0.9575439);
   hnumuCCinFV_stack_12->SetBinError(9,1.10645);
   hnumuCCinFV_stack_12->SetBinError(10,1.36813);
   hnumuCCinFV_stack_12->SetBinError(11,1.082346);
   hnumuCCinFV_stack_12->SetBinError(12,0.9897237);
   hnumuCCinFV_stack_12->SetBinError(13,0.6956519);
   hnumuCCinFV_stack_12->SetBinError(14,1.388346);
   hnumuCCinFV_stack_12->SetBinError(15,0.3448925);
   hnumuCCinFV_stack_12->SetBinError(16,0.9180807);
   hnumuCCinFV_stack_12->SetBinError(17,0.4696419);
   hnumuCCinFV_stack_12->SetBinError(18,0.6211758);
   hnumuCCinFV_stack_12->SetBinError(19,0.4992624);
   hnumuCCinFV_stack_12->SetBinError(20,0.6982774);
   hnumuCCinFV_stack_12->SetBinError(21,0.4530784);
   hnumuCCinFV_stack_12->SetBinError(22,0.53308);
   hnumuCCinFV_stack_12->SetBinError(23,0.7586757);
   hnumuCCinFV_stack_12->SetBinError(24,0.5188295);
   hnumuCCinFV_stack_12->SetBinError(25,2.197448);
   hnumuCCinFV_stack_12->SetEntries(501);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(3,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(4,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.7069596);
   hnueCCinFV_stack_13->SetBinContent(22,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(24,1.354146);
   hnueCCinFV_stack_13->SetBinContent(25,1.246598);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(3,0.2463303);
   hnueCCinFV_stack_13->SetBinError(4,0.3585277);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.3397478);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1529246);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.5353745);
   hnueCCinFV_stack_13->SetBinError(22,0.7431478);
   hnueCCinFV_stack_13->SetBinError(24,1.174028);
   hnueCCinFV_stack_13->SetBinError(25,0.6049959);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__23->SetBinContent(1,229.8035);
   hmcerror__23->SetBinContent(2,79.44864);
   hmcerror__23->SetBinContent(3,80.47518);
   hmcerror__23->SetBinContent(4,76.2533);
   hmcerror__23->SetBinContent(5,74.43584);
   hmcerror__23->SetBinContent(6,67.76091);
   hmcerror__23->SetBinContent(7,65.05325);
   hmcerror__23->SetBinContent(8,51.31082);
   hmcerror__23->SetBinContent(9,46.29526);
   hmcerror__23->SetBinContent(10,39.11898);
   hmcerror__23->SetBinContent(11,33.73139);
   hmcerror__23->SetBinContent(12,33.82732);
   hmcerror__23->SetBinContent(13,27.91315);
   hmcerror__23->SetBinContent(14,24.37126);
   hmcerror__23->SetBinContent(15,18.03839);
   hmcerror__23->SetBinContent(16,19.49991);
   hmcerror__23->SetBinContent(17,12.61159);
   hmcerror__23->SetBinContent(18,12.43691);
   hmcerror__23->SetBinContent(19,13.89466);
   hmcerror__23->SetBinContent(20,8.895869);
   hmcerror__23->SetBinContent(21,11.37881);
   hmcerror__23->SetBinContent(22,12.50791);
   hmcerror__23->SetBinContent(23,6.425324);
   hmcerror__23->SetBinContent(24,7.906765);
   hmcerror__23->SetBinContent(25,100.8629);
   hmcerror__23->SetBinError(1,50.08636);
   hmcerror__23->SetBinError(2,22.90929);
   hmcerror__23->SetBinError(3,24.76258);
   hmcerror__23->SetBinError(4,22.87425);
   hmcerror__23->SetBinError(5,22.23481);
   hmcerror__23->SetBinError(6,22.74103);
   hmcerror__23->SetBinError(7,22.35143);
   hmcerror__23->SetBinError(8,19.66858);
   hmcerror__23->SetBinError(9,20.04463);
   hmcerror__23->SetBinError(10,16.30701);
   hmcerror__23->SetBinError(11,18.93371);
   hmcerror__23->SetBinError(12,27.25193);
   hmcerror__23->SetBinError(13,13.93407);
   hmcerror__23->SetBinError(14,11.23181);
   hmcerror__23->SetBinError(15,12.19386);
   hmcerror__23->SetBinError(16,10.17328);
   hmcerror__23->SetBinError(17,6.297405);
   hmcerror__23->SetBinError(18,8.917889);
   hmcerror__23->SetBinError(19,7.90123);
   hmcerror__23->SetBinError(20,6.70434);
   hmcerror__23->SetBinError(21,9.539081);
   hmcerror__23->SetBinError(22,12.58228);
   hmcerror__23->SetBinError(23,12.05821);
   hmcerror__23->SetBinError(24,10.44579);
   hmcerror__23->SetBinError(25,28.11357);
   hmcerror__23->SetEntries(1133.738);

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
   
   Double_t _fx3029[24] = {
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
   Double_t _fy3029[24] = {
   209,
   77,
   88,
   81,
   68,
   56,
   64,
   48,
   29,
   50,
   36,
   33,
   20,
   19,
   22,
   12,
   14,
   13,
   12,
   12,
   9,
   7,
   10,
   8};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   14.45683,
   8.8995,
   9.5036,
   9.1239,
   8.3726,
   7.6127,
   8.1273,
   7.0604,
   5.5285,
   7.2025,
   6.1381,
   5.8847,
   4.6266,
   4.5151,
   4.8417,
   3.64022,
   3.9102,
   3.77763,
   3.64022,
   3.64022,
   3.19354,
   2.85954,
   3.34883,
   3.0307};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   14.45683,
   8.6976,
   9.3021,
   8.9221,
   8.1701,
   7.4094,
   7.9246,
   6.8561,
   5.3201,
   6.9985,
   5.9318,
   5.6776,
   4.4133,
   4.3011,
   4.6299,
   3.4155,
   3.6898,
   3.5552,
   3.4155,
   3.4155,
   2.9582,
   2.61053,
   3.1179,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,99);
   Graph_Graph3029->SetMinimum(3.726414);
   Graph_Graph3029->SetMaximum(245.3885);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 997.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 180.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 20.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 219.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  164.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  43.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 207.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 47.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 113.9","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.8","F");

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
   
   Double_t _fx3030[24] = {
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
   Double_t _fy3030[24] = {
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
   Double_t _felx3030[24] = {
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
   Double_t _fely3030[24] = {
   0.217953,
   0.2883535,
   0.3077046,
   0.2999771,
   0.2987112,
   0.3356069,
   0.3435866,
   0.3833223,
   0.4329737,
   0.4168566,
   0.5613084,
   0.8056189,
   0.4991939,
   0.4608628,
   0.6759948,
   0.5217089,
   0.4993347,
   0.71705,
   0.5686523,
   0.7536464,
   0.8383198,
   1.005946,
   1.87667,
   1.32112};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   0.217953,
   0.2883535,
   0.3077046,
   0.2999771,
   0.2987112,
   0.3356069,
   0.3435866,
   0.3833223,
   0.4329737,
   0.4168566,
   0.5613084,
   0.8056189,
   0.4991939,
   0.4608628,
   0.6759948,
   0.5217089,
   0.4993347,
   0.71705,
   0.5686523,
   0.7536464,
   0.8383198,
   1.005946,
   1.87667,
   1.32112};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,99);
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
   
   Double_t _fx3031[24] = {
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
   Double_t _fy3031[24] = {
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
   Double_t _felx3031[24] = {
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
   Double_t _fely3031[24] = {
   0.1634424,
   0.1871052,
   0.1985748,
   0.1803255,
   0.1876576,
   0.1920467,
   0.2003222,
   0.1991504,
   0.1948033,
   0.2131133,
   0.2108357,
   0.1897587,
   0.2044555,
   0.2172345,
   0.2281734,
   0.1868199,
   0.2304256,
   0.239752,
   0.2223948,
   0.2557736,
   0.2491371,
   0.2360997,
   0.3159814,
   0.6546488};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.1634424,
   0.1871052,
   0.1985748,
   0.1803255,
   0.1876576,
   0.1920467,
   0.2003222,
   0.1991504,
   0.1948033,
   0.2131133,
   0.2108357,
   0.1897587,
   0.2044555,
   0.2172345,
   0.2281734,
   0.1868199,
   0.2304256,
   0.239752,
   0.2223948,
   0.2557736,
   0.2491371,
   0.2360997,
   0.3159814,
   0.6546488};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,99);
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
   
   Double_t _fx3032[24] = {
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
   Double_t _fy3032[24] = {
   0.9094728,
   0.9691796,
   1.093505,
   1.062249,
   0.9135385,
   0.8264352,
   0.9838094,
   0.9354752,
   0.6264141,
   1.278152,
   1.067255,
   0.9755427,
   0.7165082,
   0.7796067,
   1.219621,
   0.6153873,
   1.11009,
   1.045275,
   0.8636412,
   1.348941,
   0.7909439,
   0.5596459,
   1.556342,
   1.011792};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.06290955,
   0.1120158,
   0.1180936,
   0.1196525,
   0.1124808,
   0.1123465,
   0.124933,
   0.1376006,
   0.1194183,
   0.1841178,
   0.18197,
   0.1739629,
   0.1657499,
   0.1852633,
   0.2684109,
   0.1866788,
   0.3100481,
   0.3037434,
   0.261987,
   0.4092034,
   0.2806568,
   0.2286186,
   0.5211924,
   0.3833047};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.06290955,
   0.1094745,
   0.1155897,
   0.1170061,
   0.1097603,
   0.1093462,
   0.1218171,
   0.133619,
   0.1149167,
   0.1789029,
   0.175854,
   0.1678406,
   0.1581083,
   0.1764824,
   0.2566692,
   0.1751546,
   0.2925721,
   0.2858587,
   0.2458139,
   0.3839422,
   0.2599745,
   0.2087103,
   0.4852518,
   0.3528118};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,99);
   Graph_Graph3032->SetMinimum(0.1599708);
   Graph_Graph3032->SetMaximum(2.21265);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
