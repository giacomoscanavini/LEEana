#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Apr  7 23:53:12 2022) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-57.72386,101.5385,4863.995);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmc__1->SetBinContent(0,12593.05);
   hmc__1->SetBinContent(1,2886.193);
   hmc__1->SetBinContent(2,340.9326);
   hmc__1->SetBinContent(3,280.2861);
   hmc__1->SetBinContent(4,228.0172);
   hmc__1->SetBinContent(5,199.5181);
   hmc__1->SetBinContent(6,161.6252);
   hmc__1->SetBinContent(7,139.0876);
   hmc__1->SetBinContent(8,120.8324);
   hmc__1->SetBinContent(9,103.237);
   hmc__1->SetBinContent(10,90.79179);
   hmc__1->SetBinContent(11,80.92154);
   hmc__1->SetBinContent(12,76.01511);
   hmc__1->SetBinContent(13,66.53573);
   hmc__1->SetBinContent(14,61.53835);
   hmc__1->SetBinContent(15,54.51505);
   hmc__1->SetBinContent(16,51.83381);
   hmc__1->SetBinContent(17,44.71913);
   hmc__1->SetBinContent(18,43.18479);
   hmc__1->SetBinContent(19,886.413);
   hmc__1->SetBinError(0,36.71901);
   hmc__1->SetBinError(1,421.2735);
   hmc__1->SetBinError(2,60.83097);
   hmc__1->SetBinError(3,49.14104);
   hmc__1->SetBinError(4,40.35842);
   hmc__1->SetBinError(5,36.5928);
   hmc__1->SetBinError(6,29.22277);
   hmc__1->SetBinError(7,24.70757);
   hmc__1->SetBinError(8,22.57323);
   hmc__1->SetBinError(9,18.46283);
   hmc__1->SetBinError(10,15.50446);
   hmc__1->SetBinError(11,14.66553);
   hmc__1->SetBinError(12,16.34241);
   hmc__1->SetBinError(13,14.06056);
   hmc__1->SetBinError(14,12.58386);
   hmc__1->SetBinError(15,13.39845);
   hmc__1->SetBinError(16,10.76065);
   hmc__1->SetBinError(17,9.877225);
   hmc__1->SetBinError(18,9.393933);
   hmc__1->SetBinError(19,237.1606);
   hmc__1->SetMinimum(-57.72386);
   hmc__1->SetMaximum(4617.909);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",18,0,90);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(3030.503);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(0,363.7249);
   hbadmatch_stack_1->SetBinContent(1,53.54473);
   hbadmatch_stack_1->SetBinContent(2,3.851484);
   hbadmatch_stack_1->SetBinContent(3,4.329673);
   hbadmatch_stack_1->SetBinContent(4,4.136073);
   hbadmatch_stack_1->SetBinContent(5,3.440758);
   hbadmatch_stack_1->SetBinContent(6,3.214367);
   hbadmatch_stack_1->SetBinContent(7,3.77402);
   hbadmatch_stack_1->SetBinContent(8,3.537216);
   hbadmatch_stack_1->SetBinContent(9,3.457791);
   hbadmatch_stack_1->SetBinContent(10,4.387216);
   hbadmatch_stack_1->SetBinContent(11,2.589505);
   hbadmatch_stack_1->SetBinContent(12,2.626241);
   hbadmatch_stack_1->SetBinContent(13,2.976333);
   hbadmatch_stack_1->SetBinContent(14,3.867175);
   hbadmatch_stack_1->SetBinContent(15,2.147355);
   hbadmatch_stack_1->SetBinContent(16,2.532124);
   hbadmatch_stack_1->SetBinContent(17,1.874753);
   hbadmatch_stack_1->SetBinContent(18,1.553766);
   hbadmatch_stack_1->SetBinContent(19,29.0907);
   hbadmatch_stack_1->SetBinError(0,5.422098);
   hbadmatch_stack_1->SetBinError(1,1.835398);
   hbadmatch_stack_1->SetBinError(2,0.5862613);
   hbadmatch_stack_1->SetBinError(3,0.5768612);
   hbadmatch_stack_1->SetBinError(4,0.5263262);
   hbadmatch_stack_1->SetBinError(5,0.4434466);
   hbadmatch_stack_1->SetBinError(6,0.4251543);
   hbadmatch_stack_1->SetBinError(7,0.5668486);
   hbadmatch_stack_1->SetBinError(8,0.7222126);
   hbadmatch_stack_1->SetBinError(9,0.5955422);
   hbadmatch_stack_1->SetBinError(10,0.8079371);
   hbadmatch_stack_1->SetBinError(11,0.368514);
   hbadmatch_stack_1->SetBinError(12,0.4370619);
   hbadmatch_stack_1->SetBinError(13,0.4495865);
   hbadmatch_stack_1->SetBinError(14,1.327904);
   hbadmatch_stack_1->SetBinError(15,0.3640777);
   hbadmatch_stack_1->SetBinError(16,0.5558323);
   hbadmatch_stack_1->SetBinError(17,0.493066);
   hbadmatch_stack_1->SetBinError(18,0.3072089);
   hbadmatch_stack_1->SetBinError(19,1.792558);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hext_stack_2->SetBinContent(0,1387.332);
   hext_stack_2->SetBinContent(1,391.4039);
   hext_stack_2->SetBinContent(2,32.70254);
   hext_stack_2->SetBinContent(3,30.74752);
   hext_stack_2->SetBinContent(4,22.98733);
   hext_stack_2->SetBinContent(5,27.22464);
   hext_stack_2->SetBinContent(6,20.10387);
   hext_stack_2->SetBinContent(7,19.97437);
   hext_stack_2->SetBinContent(8,16.53191);
   hext_stack_2->SetBinContent(9,15.14677);
   hext_stack_2->SetBinContent(10,13.35532);
   hext_stack_2->SetBinContent(11,13.36352);
   hext_stack_2->SetBinContent(12,11.29668);
   hext_stack_2->SetBinContent(13,7.345696);
   hext_stack_2->SetBinContent(14,7.131646);
   hext_stack_2->SetBinContent(15,8.178702);
   hext_stack_2->SetBinContent(16,6.76355);
   hext_stack_2->SetBinContent(17,5.097538);
   hext_stack_2->SetBinContent(18,6.515422);
   hext_stack_2->SetBinContent(19,114.7663);
   hext_stack_2->SetBinError(0,15.19935);
   hext_stack_2->SetBinError(1,8.084914);
   hext_stack_2->SetBinError(2,2.336129);
   hext_stack_2->SetBinError(3,2.282639);
   hext_stack_2->SetBinError(4,1.924175);
   hext_stack_2->SetBinError(5,2.155625);
   hext_stack_2->SetBinError(6,1.825504);
   hext_stack_2->SetBinError(7,1.845327);
   hext_stack_2->SetBinError(8,1.663774);
   hext_stack_2->SetBinError(9,1.613206);
   hext_stack_2->SetBinError(10,1.498616);
   hext_stack_2->SetBinError(11,1.53541);
   hext_stack_2->SetBinError(12,1.386782);
   hext_stack_2->SetBinError(13,1.097943);
   hext_stack_2->SetBinError(14,1.062306);
   hext_stack_2->SetBinError(15,1.16808);
   hext_stack_2->SetBinError(16,1.060179);
   hext_stack_2->SetBinError(17,0.8978368);
   hext_stack_2->SetBinError(18,1.041036);
   hext_stack_2->SetBinError(19,4.362414);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hdirt_stack_3->SetBinContent(0,486.1107);
   hdirt_stack_3->SetBinContent(1,60.0645);
   hdirt_stack_3->SetBinContent(2,4.675832);
   hdirt_stack_3->SetBinContent(3,3.565148);
   hdirt_stack_3->SetBinContent(4,3.65268);
   hdirt_stack_3->SetBinContent(5,2.555863);
   hdirt_stack_3->SetBinContent(6,2.253999);
   hdirt_stack_3->SetBinContent(7,2.518628);
   hdirt_stack_3->SetBinContent(8,1.766688);
   hdirt_stack_3->SetBinContent(9,1.876015);
   hdirt_stack_3->SetBinContent(10,1.780406);
   hdirt_stack_3->SetBinContent(11,1.846778);
   hdirt_stack_3->SetBinContent(12,2.136608);
   hdirt_stack_3->SetBinContent(13,1.67269);
   hdirt_stack_3->SetBinContent(14,1.907378);
   hdirt_stack_3->SetBinContent(15,1.150797);
   hdirt_stack_3->SetBinContent(16,1.284831);
   hdirt_stack_3->SetBinContent(17,0.9261888);
   hdirt_stack_3->SetBinContent(18,1.415214);
   hdirt_stack_3->SetBinContent(19,29.6321);
   hdirt_stack_3->SetBinError(0,5.644722);
   hdirt_stack_3->SetBinError(1,2.066544);
   hdirt_stack_3->SetBinError(2,0.6350117);
   hdirt_stack_3->SetBinError(3,0.3812466);
   hdirt_stack_3->SetBinError(4,0.5383209);
   hdirt_stack_3->SetBinError(5,0.3302195);
   hdirt_stack_3->SetBinError(6,0.2996405);
   hdirt_stack_3->SetBinError(7,0.4808728);
   hdirt_stack_3->SetBinError(8,0.2798917);
   hdirt_stack_3->SetBinError(9,0.2891397);
   hdirt_stack_3->SetBinError(10,0.2740497);
   hdirt_stack_3->SetBinError(11,0.2825016);
   hdirt_stack_3->SetBinError(12,0.6273029);
   hdirt_stack_3->SetBinError(13,0.2846491);
   hdirt_stack_3->SetBinError(14,0.6425303);
   hdirt_stack_3->SetBinError(15,0.2090415);
   hdirt_stack_3->SetBinError(16,0.2349053);
   hdirt_stack_3->SetBinError(17,0.1902719);
   hdirt_stack_3->SetBinError(18,0.2591285);
   hdirt_stack_3->SetBinError(19,1.568586);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   houtFV_stack_4->SetBinContent(0,619.6235);
   houtFV_stack_4->SetBinContent(1,205.0255);
   houtFV_stack_4->SetBinContent(2,26.63072);
   houtFV_stack_4->SetBinContent(3,19.53691);
   houtFV_stack_4->SetBinContent(4,17.27665);
   houtFV_stack_4->SetBinContent(5,17.38965);
   houtFV_stack_4->SetBinContent(6,12.94952);
   houtFV_stack_4->SetBinContent(7,10.51595);
   houtFV_stack_4->SetBinContent(8,9.097752);
   houtFV_stack_4->SetBinContent(9,8.206355);
   houtFV_stack_4->SetBinContent(10,7.238321);
   houtFV_stack_4->SetBinContent(11,6.763304);
   houtFV_stack_4->SetBinContent(12,5.779048);
   houtFV_stack_4->SetBinContent(13,6.037468);
   houtFV_stack_4->SetBinContent(14,4.316668);
   houtFV_stack_4->SetBinContent(15,3.457817);
   houtFV_stack_4->SetBinContent(16,4.43033);
   houtFV_stack_4->SetBinContent(17,4.285581);
   houtFV_stack_4->SetBinContent(18,2.715114);
   houtFV_stack_4->SetBinContent(19,58.57996);
   houtFV_stack_4->SetBinError(0,7.303409);
   houtFV_stack_4->SetBinError(1,3.68358);
   houtFV_stack_4->SetBinError(2,1.286852);
   houtFV_stack_4->SetBinError(3,1.202824);
   houtFV_stack_4->SetBinError(4,0.9563588);
   houtFV_stack_4->SetBinError(5,0.9833174);
   houtFV_stack_4->SetBinError(6,0.8638467);
   houtFV_stack_4->SetBinError(7,0.8118323);
   houtFV_stack_4->SetBinError(8,0.7021167);
   houtFV_stack_4->SetBinError(9,0.6719999);
   houtFV_stack_4->SetBinError(10,0.636431);
   houtFV_stack_4->SetBinError(11,0.8707112);
   houtFV_stack_4->SetBinError(12,0.5655607);
   houtFV_stack_4->SetBinError(13,0.6997405);
   houtFV_stack_4->SetBinError(14,0.4900103);
   houtFV_stack_4->SetBinError(15,0.4567187);
   houtFV_stack_4->SetBinError(16,0.4998354);
   houtFV_stack_4->SetBinError(17,0.5521344);
   houtFV_stack_4->SetBinError(18,0.3853445);
   houtFV_stack_4->SetBinError(19,2.3384);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(0,106.31);
   hNCpi0inFV_stack_5->SetBinContent(1,249.4948);
   hNCpi0inFV_stack_5->SetBinContent(2,58.82674);
   hNCpi0inFV_stack_5->SetBinContent(3,46.55172);
   hNCpi0inFV_stack_5->SetBinContent(4,38.22456);
   hNCpi0inFV_stack_5->SetBinContent(5,30.44185);
   hNCpi0inFV_stack_5->SetBinContent(6,24.74976);
   hNCpi0inFV_stack_5->SetBinContent(7,19.29241);
   hNCpi0inFV_stack_5->SetBinContent(8,18.20666);
   hNCpi0inFV_stack_5->SetBinContent(9,13.29416);
   hNCpi0inFV_stack_5->SetBinContent(10,10.73223);
   hNCpi0inFV_stack_5->SetBinContent(11,8.104756);
   hNCpi0inFV_stack_5->SetBinContent(12,6.610627);
   hNCpi0inFV_stack_5->SetBinContent(13,5.497396);
   hNCpi0inFV_stack_5->SetBinContent(14,4.655508);
   hNCpi0inFV_stack_5->SetBinContent(15,3.363587);
   hNCpi0inFV_stack_5->SetBinContent(16,2.538226);
   hNCpi0inFV_stack_5->SetBinContent(17,2.2649);
   hNCpi0inFV_stack_5->SetBinContent(18,1.782);
   hNCpi0inFV_stack_5->SetBinContent(19,20.2802);
   hNCpi0inFV_stack_5->SetBinError(0,2.398533);
   hNCpi0inFV_stack_5->SetBinError(1,3.67007);
   hNCpi0inFV_stack_5->SetBinError(2,1.782634);
   hNCpi0inFV_stack_5->SetBinError(3,1.58857);
   hNCpi0inFV_stack_5->SetBinError(4,1.440752);
   hNCpi0inFV_stack_5->SetBinError(5,1.279896);
   hNCpi0inFV_stack_5->SetBinError(6,1.153584);
   hNCpi0inFV_stack_5->SetBinError(7,1.011623);
   hNCpi0inFV_stack_5->SetBinError(8,0.9956137);
   hNCpi0inFV_stack_5->SetBinError(9,0.8474999);
   hNCpi0inFV_stack_5->SetBinError(10,0.7588415);
   hNCpi0inFV_stack_5->SetBinError(11,0.6600285);
   hNCpi0inFV_stack_5->SetBinError(12,0.5963343);
   hNCpi0inFV_stack_5->SetBinError(13,0.5521206);
   hNCpi0inFV_stack_5->SetBinError(14,0.5014201);
   hNCpi0inFV_stack_5->SetBinError(15,0.4207446);
   hNCpi0inFV_stack_5->SetBinError(16,0.372914);
   hNCpi0inFV_stack_5->SetBinError(17,0.3512625);
   hNCpi0inFV_stack_5->SetBinError(18,0.3046954);
   hNCpi0inFV_stack_5->SetBinError(19,1.028499);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(0,173.4352);
   hCCpi0inFV_stack_6->SetBinContent(1,526.0688);
   hCCpi0inFV_stack_6->SetBinContent(2,127.1142);
   hCCpi0inFV_stack_6->SetBinContent(3,107.9821);
   hCCpi0inFV_stack_6->SetBinContent(4,87.81087);
   hCCpi0inFV_stack_6->SetBinContent(5,66.89912);
   hCCpi0inFV_stack_6->SetBinContent(6,54.23355);
   hCCpi0inFV_stack_6->SetBinContent(7,41.86652);
   hCCpi0inFV_stack_6->SetBinContent(8,34.77995);
   hCCpi0inFV_stack_6->SetBinContent(9,26.64972);
   hCCpi0inFV_stack_6->SetBinContent(10,21.89826);
   hCCpi0inFV_stack_6->SetBinContent(11,16.42545);
   hCCpi0inFV_stack_6->SetBinContent(12,13.78089);
   hCCpi0inFV_stack_6->SetBinContent(13,11.22066);
   hCCpi0inFV_stack_6->SetBinContent(14,10.24352);
   hCCpi0inFV_stack_6->SetBinContent(15,7.121418);
   hCCpi0inFV_stack_6->SetBinContent(16,6.819476);
   hCCpi0inFV_stack_6->SetBinContent(17,4.708872);
   hCCpi0inFV_stack_6->SetBinContent(18,3.694218);
   hCCpi0inFV_stack_6->SetBinContent(19,43.60214);
   hCCpi0inFV_stack_6->SetBinError(0,3.077649);
   hCCpi0inFV_stack_6->SetBinError(1,5.336635);
   hCCpi0inFV_stack_6->SetBinError(2,2.618883);
   hCCpi0inFV_stack_6->SetBinError(3,2.412886);
   hCCpi0inFV_stack_6->SetBinError(4,2.172724);
   hCCpi0inFV_stack_6->SetBinError(5,1.899498);
   hCCpi0inFV_stack_6->SetBinError(6,1.709406);
   hCCpi0inFV_stack_6->SetBinError(7,1.501018);
   hCCpi0inFV_stack_6->SetBinError(8,1.380649);
   hCCpi0inFV_stack_6->SetBinError(9,1.20502);
   hCCpi0inFV_stack_6->SetBinError(10,1.091568);
   hCCpi0inFV_stack_6->SetBinError(11,0.9414619);
   hCCpi0inFV_stack_6->SetBinError(12,0.8608392);
   hCCpi0inFV_stack_6->SetBinError(13,0.7991411);
   hCCpi0inFV_stack_6->SetBinError(14,0.7466727);
   hCCpi0inFV_stack_6->SetBinError(15,0.6159826);
   hCCpi0inFV_stack_6->SetBinError(16,0.6176386);
   hCCpi0inFV_stack_6->SetBinError(17,0.5049888);
   hCCpi0inFV_stack_6->SetBinError(18,0.4443543);
   hCCpi0inFV_stack_6->SetBinError(19,1.519501);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(0,899.4496);
   hNCinFV_stack_7->SetBinContent(1,127.8784);
   hNCinFV_stack_7->SetBinContent(2,8.988484);
   hNCinFV_stack_7->SetBinContent(3,8.175874);
   hNCinFV_stack_7->SetBinContent(4,6.401052);
   hNCinFV_stack_7->SetBinContent(5,6.16236);
   hNCinFV_stack_7->SetBinContent(6,5.925518);
   hNCinFV_stack_7->SetBinContent(7,4.770401);
   hNCinFV_stack_7->SetBinContent(8,4.54614);
   hNCinFV_stack_7->SetBinContent(9,3.653252);
   hNCinFV_stack_7->SetBinContent(10,4.081562);
   hNCinFV_stack_7->SetBinContent(11,3.766396);
   hNCinFV_stack_7->SetBinContent(12,3.412793);
   hNCinFV_stack_7->SetBinContent(13,3.316175);
   hNCinFV_stack_7->SetBinContent(14,2.689434);
   hNCinFV_stack_7->SetBinContent(15,2.29399);
   hNCinFV_stack_7->SetBinContent(16,2.665693);
   hNCinFV_stack_7->SetBinContent(17,1.718249);
   hNCinFV_stack_7->SetBinContent(18,1.834796);
   hNCinFV_stack_7->SetBinContent(19,35.68768);
   hNCinFV_stack_7->SetBinError(0,6.951107);
   hNCinFV_stack_7->SetBinError(1,2.626321);
   hNCinFV_stack_7->SetBinError(2,0.6953336);
   hNCinFV_stack_7->SetBinError(3,0.6676004);
   hNCinFV_stack_7->SetBinError(4,0.5837362);
   hNCinFV_stack_7->SetBinError(5,0.5800693);
   hNCinFV_stack_7->SetBinError(6,0.5651917);
   hNCinFV_stack_7->SetBinError(7,0.505929);
   hNCinFV_stack_7->SetBinError(8,0.4907971);
   hNCinFV_stack_7->SetBinError(9,0.4322228);
   hNCinFV_stack_7->SetBinError(10,0.4719786);
   hNCinFV_stack_7->SetBinError(11,0.4611379);
   hNCinFV_stack_7->SetBinError(12,0.4250906);
   hNCinFV_stack_7->SetBinError(13,0.4127036);
   hNCinFV_stack_7->SetBinError(14,0.3795278);
   hNCinFV_stack_7->SetBinError(15,0.3430146);
   hNCinFV_stack_7->SetBinError(16,0.3791033);
   hNCinFV_stack_7->SetBinError(17,0.3033586);
   hNCinFV_stack_7->SetBinError(18,0.300772);
   hNCinFV_stack_7->SetBinError(19,1.381209);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(0,8531.197);
   hnumuCCinFV_stack_8->SetBinContent(1,1222.941);
   hnumuCCinFV_stack_8->SetBinContent(2,77.05712);
   hnumuCCinFV_stack_8->SetBinContent(3,58.38213);
   hnumuCCinFV_stack_8->SetBinContent(4,46.82959);
   hnumuCCinFV_stack_8->SetBinContent(5,44.94683);
   hnumuCCinFV_stack_8->SetBinContent(6,37.84078);
   hnumuCCinFV_stack_8->SetBinContent(7,35.50605);
   hnumuCCinFV_stack_8->SetBinContent(8,32.09971);
   hnumuCCinFV_stack_8->SetBinContent(9,30.53407);
   hnumuCCinFV_stack_8->SetBinContent(10,27.07371);
   hnumuCCinFV_stack_8->SetBinContent(11,27.66073);
   hnumuCCinFV_stack_8->SetBinContent(12,30.16037);
   hnumuCCinFV_stack_8->SetBinContent(13,28.25794);
   hnumuCCinFV_stack_8->SetBinContent(14,26.68046);
   hnumuCCinFV_stack_8->SetBinContent(15,26.73933);
   hnumuCCinFV_stack_8->SetBinContent(16,24.59878);
   hnumuCCinFV_stack_8->SetBinContent(17,23.78109);
   hnumuCCinFV_stack_8->SetBinContent(18,23.58577);
   hnumuCCinFV_stack_8->SetBinContent(19,553.927);
   hnumuCCinFV_stack_8->SetBinError(0,30.59935);
   hnumuCCinFV_stack_8->SetBinError(1,10.41764);
   hnumuCCinFV_stack_8->SetBinError(2,2.5057);
   hnumuCCinFV_stack_8->SetBinError(3,2.089696);
   hnumuCCinFV_stack_8->SetBinError(4,2.109788);
   hnumuCCinFV_stack_8->SetBinError(5,2.241366);
   hnumuCCinFV_stack_8->SetBinError(6,2.065885);
   hnumuCCinFV_stack_8->SetBinError(7,2.032224);
   hnumuCCinFV_stack_8->SetBinError(8,1.754682);
   hnumuCCinFV_stack_8->SetBinError(9,1.689511);
   hnumuCCinFV_stack_8->SetBinError(10,1.388114);
   hnumuCCinFV_stack_8->SetBinError(11,1.816153);
   hnumuCCinFV_stack_8->SetBinError(12,1.836532);
   hnumuCCinFV_stack_8->SetBinError(13,1.711682);
   hnumuCCinFV_stack_8->SetBinError(14,1.486771);
   hnumuCCinFV_stack_8->SetBinError(15,1.696244);
   hnumuCCinFV_stack_8->SetBinError(16,1.393481);
   hnumuCCinFV_stack_8->SetBinError(17,1.404068);
   hnumuCCinFV_stack_8->SetBinError(18,1.660495);
   hnumuCCinFV_stack_8->SetBinError(19,7.750529);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(0,25.86654);
   hnueCCinFV_stack_9->SetBinContent(1,49.77199);
   hnueCCinFV_stack_9->SetBinContent(2,1.085466);
   hnueCCinFV_stack_9->SetBinContent(3,1.014996);
   hnueCCinFV_stack_9->SetBinContent(4,0.6983992);
   hnueCCinFV_stack_9->SetBinContent(5,0.4570626);
   hnueCCinFV_stack_9->SetBinContent(6,0.3537989);
   hnueCCinFV_stack_9->SetBinContent(7,0.8692597);
   hnueCCinFV_stack_9->SetBinContent(8,0.2663878);
   hnueCCinFV_stack_9->SetBinContent(9,0.418846);
   hnueCCinFV_stack_9->SetBinContent(10,0.2447652);
   hnueCCinFV_stack_9->SetBinContent(11,0.4010961);
   hnueCCinFV_stack_9->SetBinContent(12,0.2118526);
   hnueCCinFV_stack_9->SetBinContent(13,0.2113693);
   hnueCCinFV_stack_9->SetBinContent(14,0.04656805);
   hnueCCinFV_stack_9->SetBinContent(15,0.06205634);
   hnueCCinFV_stack_9->SetBinContent(16,0.2007937);
   hnueCCinFV_stack_9->SetBinContent(17,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(18,0.08849405);
   hnueCCinFV_stack_9->SetBinContent(19,0.8469166);
   hnueCCinFV_stack_9->SetBinError(0,1.673547);
   hnueCCinFV_stack_9->SetBinError(1,2.068685);
   hnueCCinFV_stack_9->SetBinError(2,0.2686799);
   hnueCCinFV_stack_9->SetBinError(3,0.2446884);
   hnueCCinFV_stack_9->SetBinError(4,0.199492);
   hnueCCinFV_stack_9->SetBinError(5,0.1670582);
   hnueCCinFV_stack_9->SetBinError(6,0.1372419);
   hnueCCinFV_stack_9->SetBinError(7,0.2324913);
   hnueCCinFV_stack_9->SetBinError(8,0.1219341);
   hnueCCinFV_stack_9->SetBinError(9,0.1740878);
   hnueCCinFV_stack_9->SetBinError(10,0.1191245);
   hnueCCinFV_stack_9->SetBinError(11,0.1639638);
   hnueCCinFV_stack_9->SetBinError(12,0.1088735);
   hnueCCinFV_stack_9->SetBinError(13,0.1088158);
   hnueCCinFV_stack_9->SetBinError(14,0.02341674);
   hnueCCinFV_stack_9->SetBinError(15,0.06195637);
   hnueCCinFV_stack_9->SetBinError(16,0.1264136);
   hnueCCinFV_stack_9->SetBinError(17,0.06195629);
   hnueCCinFV_stack_9->SetBinError(18,0.03638048);
   hnueCCinFV_stack_9->SetBinError(19,0.2133092);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmcerror__2->SetBinContent(0,12593.05);
   hmcerror__2->SetBinContent(1,2886.193);
   hmcerror__2->SetBinContent(2,340.9326);
   hmcerror__2->SetBinContent(3,280.2861);
   hmcerror__2->SetBinContent(4,228.0172);
   hmcerror__2->SetBinContent(5,199.5181);
   hmcerror__2->SetBinContent(6,161.6252);
   hmcerror__2->SetBinContent(7,139.0876);
   hmcerror__2->SetBinContent(8,120.8324);
   hmcerror__2->SetBinContent(9,103.237);
   hmcerror__2->SetBinContent(10,90.79179);
   hmcerror__2->SetBinContent(11,80.92154);
   hmcerror__2->SetBinContent(12,76.01511);
   hmcerror__2->SetBinContent(13,66.53573);
   hmcerror__2->SetBinContent(14,61.53835);
   hmcerror__2->SetBinContent(15,54.51505);
   hmcerror__2->SetBinContent(16,51.83381);
   hmcerror__2->SetBinContent(17,44.71913);
   hmcerror__2->SetBinContent(18,43.18479);
   hmcerror__2->SetBinContent(19,886.413);
   hmcerror__2->SetBinError(0,36.71901);
   hmcerror__2->SetBinError(1,421.2735);
   hmcerror__2->SetBinError(2,60.83097);
   hmcerror__2->SetBinError(3,49.14104);
   hmcerror__2->SetBinError(4,40.35842);
   hmcerror__2->SetBinError(5,36.5928);
   hmcerror__2->SetBinError(6,29.22277);
   hmcerror__2->SetBinError(7,24.70757);
   hmcerror__2->SetBinError(8,22.57323);
   hmcerror__2->SetBinError(9,18.46283);
   hmcerror__2->SetBinError(10,15.50446);
   hmcerror__2->SetBinError(11,14.66553);
   hmcerror__2->SetBinError(12,16.34241);
   hmcerror__2->SetBinError(13,14.06056);
   hmcerror__2->SetBinError(14,12.58386);
   hmcerror__2->SetBinError(15,13.39845);
   hmcerror__2->SetBinError(16,10.76065);
   hmcerror__2->SetBinError(17,9.877225);
   hmcerror__2->SetBinError(18,9.393933);
   hmcerror__2->SetBinError(19,237.1606);
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
   2860,
   320,
   252,
   206,
   201,
   131,
   129,
   100,
   87,
   81,
   85,
   62,
   68,
   70,
   52,
   65,
   33,
   37};
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
   53.47897,
   17.88854,
   15.87451,
   14.3527,
   14.17745,
   11.44552,
   11.35782,
   10.1212,
   9.4503,
   9.1239,
   9.3428,
   8.0018,
   8.3726,
   8.4925,
   7.3419,
   8.1893,
   5.8847,
   6.2203};
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
   53.47897,
   17.88854,
   15.87451,
   14.3527,
   14.17745,
   11.44552,
   11.35782,
   9.92,
   9.2488,
   8.9221,
   9.1411,
   7.7989,
   8.1701,
   8.2902,
   7.1381,
   7.9866,
   5.6776,
   6.0141};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(24.40377);
   Graph_Graph3001->SetMaximum(3202.115);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.96#pm0.01(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.80/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 4839.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 107.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 655.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 97.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 371.7","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  544.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1169.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 202.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 1824.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 56.5","F");

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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_kine_pio_gap_high_all");
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
   0.1459616,
   0.1784252,
   0.1753246,
   0.1769972,
   0.1834059,
   0.1808058,
   0.1776403,
   0.1868144,
   0.1788394,
   0.1707694,
   0.1812315,
   0.2149889,
   0.2113235,
   0.2044881,
   0.2457752,
   0.207599,
   0.2208725,
   0.2175287};
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
   0.1459616,
   0.1784252,
   0.1753246,
   0.1769972,
   0.1834059,
   0.1808058,
   0.1776403,
   0.1868144,
   0.1788394,
   0.1707694,
   0.1812315,
   0.2149889,
   0.2113235,
   0.2044881,
   0.2457752,
   0.207599,
   0.2208725,
   0.2175287};
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
   0.1420791,
   0.1736445,
   0.1684196,
   0.171383,
   0.1664771,
   0.1711809,
   0.162706,
   0.1612339,
   0.1552401,
   0.151237,
   0.1478198,
   0.1546487,
   0.1497612,
   0.1547382,
   0.1399823,
   0.1414495,
   0.1452989,
   0.1481654};
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
   0.1420791,
   0.1736445,
   0.1684196,
   0.171383,
   0.1664771,
   0.1711809,
   0.162706,
   0.1612339,
   0.1552401,
   0.151237,
   0.1478198,
   0.1546487,
   0.1497612,
   0.1547382,
   0.1399823,
   0.1414495,
   0.1452989,
   0.1481654};
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
   0.9909248,
   0.9386019,
   0.8990814,
   0.9034406,
   1.007427,
   0.8105173,
   0.9274728,
   0.8275925,
   0.8427213,
   0.8921511,
   1.0504,
   0.8156274,
   1.022007,
   1.137502,
   0.9538651,
   1.254008,
   0.7379393,
   0.8567831};
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
   0.01852924,
   0.05246944,
   0.05663681,
   0.06294569,
   0.07105844,
   0.07081523,
   0.08165943,
   0.08376229,
   0.09153988,
   0.1004926,
   0.115455,
   0.1052659,
   0.1258362,
   0.1380034,
   0.1346766,
   0.1579915,
   0.1315925,
   0.1440391};
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
   0.01852924,
   0.05246944,
   0.05663681,
   0.06294569,
   0.07105844,
   0.07081523,
   0.08165943,
   0.08209718,
   0.08958806,
   0.09826989,
   0.1129625,
   0.1025967,
   0.1227927,
   0.134716,
   0.1309382,
   0.1540809,
   0.1269613,
   0.1392643};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0.5261726);
   Graph_Graph3004->SetMaximum(1.488263);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_kine_pio_gap_high_all",18,0,90);

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
