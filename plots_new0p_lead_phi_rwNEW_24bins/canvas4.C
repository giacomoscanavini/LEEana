#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 18:06:00 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-4.572684,3.957692,505.6426);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__10->SetBinContent(1,218.6815);
   hmc__10->SetBinContent(2,222.9487);
   hmc__10->SetBinContent(3,224.818);
   hmc__10->SetBinContent(4,228.6342);
   hmc__10->SetBinContent(5,177.703);
   hmc__10->SetBinContent(6,186.0511);
   hmc__10->SetBinContent(7,197.8731);
   hmc__10->SetBinContent(8,176.201);
   hmc__10->SetBinContent(9,197.2927);
   hmc__10->SetBinContent(10,195.3574);
   hmc__10->SetBinContent(11,203.4252);
   hmc__10->SetBinContent(12,185.5537);
   hmc__10->SetBinContent(13,186.4775);
   hmc__10->SetBinContent(14,200.2068);
   hmc__10->SetBinContent(15,215.1096);
   hmc__10->SetBinContent(16,203.1058);
   hmc__10->SetBinContent(17,195.7566);
   hmc__10->SetBinContent(18,190.2972);
   hmc__10->SetBinContent(19,198.0821);
   hmc__10->SetBinContent(20,188.7805);
   hmc__10->SetBinContent(21,222.3127);
   hmc__10->SetBinContent(22,214.7);
   hmc__10->SetBinContent(23,213.3208);
   hmc__10->SetBinContent(24,194.5739);
   hmc__10->SetBinError(1,58.47126);
   hmc__10->SetBinError(2,64.41062);
   hmc__10->SetBinError(3,56.70301);
   hmc__10->SetBinError(4,54.99511);
   hmc__10->SetBinError(5,42.33205);
   hmc__10->SetBinError(6,42.22859);
   hmc__10->SetBinError(7,49.52147);
   hmc__10->SetBinError(8,43.06596);
   hmc__10->SetBinError(9,50.30441);
   hmc__10->SetBinError(10,56.53887);
   hmc__10->SetBinError(11,55.88614);
   hmc__10->SetBinError(12,48.55789);
   hmc__10->SetBinError(13,51.44797);
   hmc__10->SetBinError(14,51.31762);
   hmc__10->SetBinError(15,52.73226);
   hmc__10->SetBinError(16,49.10124);
   hmc__10->SetBinError(17,46.26634);
   hmc__10->SetBinError(18,42.31324);
   hmc__10->SetBinError(19,48.63901);
   hmc__10->SetBinError(20,49.95476);
   hmc__10->SetBinError(21,52.83075);
   hmc__10->SetBinError(22,54.56975);
   hmc__10->SetBinError(23,60.10513);
   hmc__10->SetBinError(24,49.6008);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-4.572684);
   hmc__10->SetMaximum(480.1318);
   hmc__10->SetEntries(4778.995);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,-3.15,3.15);
   hs4_stack_4->SetMinimum(-3.646956e-09);
   hs4_stack_4->SetMaximum(240.0659);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.111501);
   hbadmatch_stack_1->SetBinContent(2,5.118917);
   hbadmatch_stack_1->SetBinContent(3,6.513995);
   hbadmatch_stack_1->SetBinContent(4,6.384109);
   hbadmatch_stack_1->SetBinContent(5,6.972654);
   hbadmatch_stack_1->SetBinContent(6,5.999523);
   hbadmatch_stack_1->SetBinContent(7,6.478887);
   hbadmatch_stack_1->SetBinContent(8,3.489659);
   hbadmatch_stack_1->SetBinContent(9,4.1561);
   hbadmatch_stack_1->SetBinContent(10,2.655848);
   hbadmatch_stack_1->SetBinContent(11,5.487728);
   hbadmatch_stack_1->SetBinContent(12,3.745092);
   hbadmatch_stack_1->SetBinContent(13,2.540357);
   hbadmatch_stack_1->SetBinContent(14,4.715135);
   hbadmatch_stack_1->SetBinContent(15,9.485198);
   hbadmatch_stack_1->SetBinContent(16,5.813423);
   hbadmatch_stack_1->SetBinContent(17,8.961874);
   hbadmatch_stack_1->SetBinContent(18,4.384102);
   hbadmatch_stack_1->SetBinContent(19,3.770072);
   hbadmatch_stack_1->SetBinContent(20,4.927612);
   hbadmatch_stack_1->SetBinContent(21,4.543243);
   hbadmatch_stack_1->SetBinContent(22,5.183382);
   hbadmatch_stack_1->SetBinContent(23,4.968815);
   hbadmatch_stack_1->SetBinContent(24,2.01469);
   hbadmatch_stack_1->SetBinError(1,1.041272);
   hbadmatch_stack_1->SetBinError(2,1.098726);
   hbadmatch_stack_1->SetBinError(3,1.39262);
   hbadmatch_stack_1->SetBinError(4,1.323524);
   hbadmatch_stack_1->SetBinError(5,1.442802);
   hbadmatch_stack_1->SetBinError(6,1.338617);
   hbadmatch_stack_1->SetBinError(7,1.600882);
   hbadmatch_stack_1->SetBinError(8,0.9779074);
   hbadmatch_stack_1->SetBinError(9,1.119979);
   hbadmatch_stack_1->SetBinError(10,0.7407265);
   hbadmatch_stack_1->SetBinError(11,1.185787);
   hbadmatch_stack_1->SetBinError(12,0.9281816);
   hbadmatch_stack_1->SetBinError(13,0.7838894);
   hbadmatch_stack_1->SetBinError(14,1.835591);
   hbadmatch_stack_1->SetBinError(15,2.39226);
   hbadmatch_stack_1->SetBinError(16,1.291631);
   hbadmatch_stack_1->SetBinError(17,2.439445);
   hbadmatch_stack_1->SetBinError(18,1.193271);
   hbadmatch_stack_1->SetBinError(19,0.9417713);
   hbadmatch_stack_1->SetBinError(20,1.139339);
   hbadmatch_stack_1->SetBinError(21,1.174988);
   hbadmatch_stack_1->SetBinError(22,1.147414);
   hbadmatch_stack_1->SetBinError(23,1.232081);
   hbadmatch_stack_1->SetBinError(24,0.7426838);
   hbadmatch_stack_1->SetEntries(466);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.06841);
   hext_stack_2->SetBinContent(2,15.3884);
   hext_stack_2->SetBinContent(3,16.8548);
   hext_stack_2->SetBinContent(4,21.60266);
   hext_stack_2->SetBinContent(5,18.73058);
   hext_stack_2->SetBinContent(6,27.92784);
   hext_stack_2->SetBinContent(7,30.81157);
   hext_stack_2->SetBinContent(8,19.71095);
   hext_stack_2->SetBinContent(9,17.07105);
   hext_stack_2->SetBinContent(10,16.05597);
   hext_stack_2->SetBinContent(11,16.0576);
   hext_stack_2->SetBinContent(12,10.6146);
   hext_stack_2->SetBinContent(13,11.26339);
   hext_stack_2->SetBinContent(14,12.40099);
   hext_stack_2->SetBinContent(15,18.54463);
   hext_stack_2->SetBinContent(16,24.16476);
   hext_stack_2->SetBinContent(17,26.95024);
   hext_stack_2->SetBinContent(18,32.63103);
   hext_stack_2->SetBinContent(19,34.83561);
   hext_stack_2->SetBinContent(20,26.26396);
   hext_stack_2->SetBinContent(21,23.65997);
   hext_stack_2->SetBinContent(22,21.64297);
   hext_stack_2->SetBinContent(23,11.24185);
   hext_stack_2->SetBinContent(24,14.31147);
   hext_stack_2->SetBinError(1,2.550965);
   hext_stack_2->SetBinError(2,2.5451);
   hext_stack_2->SetBinError(3,2.674653);
   hext_stack_2->SetBinError(4,3.110979);
   hext_stack_2->SetBinError(5,2.76749);
   hext_stack_2->SetBinError(6,3.483408);
   hext_stack_2->SetBinError(7,3.571671);
   hext_stack_2->SetBinError(8,2.7881);
   hext_stack_2->SetBinError(9,2.769006);
   hext_stack_2->SetBinError(10,2.533914);
   hext_stack_2->SetBinError(11,2.625294);
   hext_stack_2->SetBinError(12,2.102758);
   hext_stack_2->SetBinError(13,2.152222);
   hext_stack_2->SetBinError(14,2.251208);
   hext_stack_2->SetBinError(15,2.853494);
   hext_stack_2->SetBinError(16,3.139957);
   hext_stack_2->SetBinError(17,3.418086);
   hext_stack_2->SetBinError(18,3.750187);
   hext_stack_2->SetBinError(19,3.848311);
   hext_stack_2->SetBinError(20,3.267566);
   hext_stack_2->SetBinError(21,3.092713);
   hext_stack_2->SetBinError(22,2.967711);
   hext_stack_2->SetBinError(23,2.288157);
   hext_stack_2->SetBinError(24,2.589469);
   hext_stack_2->SetEntries(1214);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9141704);
   hdirt_stack_3->SetBinContent(2,2.344186);
   hdirt_stack_3->SetBinContent(3,2.494356);
   hdirt_stack_3->SetBinContent(4,3.228999);
   hdirt_stack_3->SetBinContent(5,2.499677);
   hdirt_stack_3->SetBinContent(6,1.927668);
   hdirt_stack_3->SetBinContent(7,3.001926);
   hdirt_stack_3->SetBinContent(8,1.633539);
   hdirt_stack_3->SetBinContent(9,1.859977);
   hdirt_stack_3->SetBinContent(10,1.625463);
   hdirt_stack_3->SetBinContent(11,3.673876);
   hdirt_stack_3->SetBinContent(12,1.655917);
   hdirt_stack_3->SetBinContent(13,2.107443);
   hdirt_stack_3->SetBinContent(14,2.217656);
   hdirt_stack_3->SetBinContent(15,3.171556);
   hdirt_stack_3->SetBinContent(16,4.133663);
   hdirt_stack_3->SetBinContent(17,4.238694);
   hdirt_stack_3->SetBinContent(18,2.817771);
   hdirt_stack_3->SetBinContent(19,4.640842);
   hdirt_stack_3->SetBinContent(20,1.855902);
   hdirt_stack_3->SetBinContent(21,2.422742);
   hdirt_stack_3->SetBinContent(22,3.444004);
   hdirt_stack_3->SetBinContent(23,3.316444);
   hdirt_stack_3->SetBinContent(24,2.263329);
   hdirt_stack_3->SetBinError(1,0.4788161);
   hdirt_stack_3->SetBinError(2,0.7521541);
   hdirt_stack_3->SetBinError(3,0.7910626);
   hdirt_stack_3->SetBinError(4,1.009615);
   hdirt_stack_3->SetBinError(5,0.7753967);
   hdirt_stack_3->SetBinError(6,0.7608995);
   hdirt_stack_3->SetBinError(7,0.8089032);
   hdirt_stack_3->SetBinError(8,0.8379255);
   hdirt_stack_3->SetBinError(9,0.6605131);
   hdirt_stack_3->SetBinError(10,1.023144);
   hdirt_stack_3->SetBinError(11,1.35162);
   hdirt_stack_3->SetBinError(12,0.6096856);
   hdirt_stack_3->SetBinError(13,0.6921208);
   hdirt_stack_3->SetBinError(14,0.8637827);
   hdirt_stack_3->SetBinError(15,0.905808);
   hdirt_stack_3->SetBinError(16,1.099735);
   hdirt_stack_3->SetBinError(17,1.14128);
   hdirt_stack_3->SetBinError(18,0.9304209);
   hdirt_stack_3->SetBinError(19,1.35992);
   hdirt_stack_3->SetBinError(20,0.676226);
   hdirt_stack_3->SetBinError(21,0.725281);
   hdirt_stack_3->SetBinError(22,0.9751852);
   hdirt_stack_3->SetBinError(23,0.9773437);
   hdirt_stack_3->SetBinError(24,0.7732689);
   hdirt_stack_3->SetEntries(263);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,24.4963);
   houtFV_stack_4->SetBinContent(2,25.8867);
   houtFV_stack_4->SetBinContent(3,29.70847);
   houtFV_stack_4->SetBinContent(4,30.12424);
   houtFV_stack_4->SetBinContent(5,20.93132);
   houtFV_stack_4->SetBinContent(6,22.6588);
   houtFV_stack_4->SetBinContent(7,22.05359);
   houtFV_stack_4->SetBinContent(8,26.28904);
   houtFV_stack_4->SetBinContent(9,25.08255);
   houtFV_stack_4->SetBinContent(10,25.14596);
   houtFV_stack_4->SetBinContent(11,25.17058);
   houtFV_stack_4->SetBinContent(12,23.9088);
   houtFV_stack_4->SetBinContent(13,25.97694);
   houtFV_stack_4->SetBinContent(14,24.2566);
   houtFV_stack_4->SetBinContent(15,26.16841);
   houtFV_stack_4->SetBinContent(16,21.06442);
   houtFV_stack_4->SetBinContent(17,23.22848);
   houtFV_stack_4->SetBinContent(18,23.21509);
   houtFV_stack_4->SetBinContent(19,17.77805);
   houtFV_stack_4->SetBinContent(20,18.92806);
   houtFV_stack_4->SetBinContent(21,28.6216);
   houtFV_stack_4->SetBinContent(22,21.9775);
   houtFV_stack_4->SetBinContent(23,29.78304);
   houtFV_stack_4->SetBinContent(24,24.79709);
   houtFV_stack_4->SetBinError(1,2.502627);
   houtFV_stack_4->SetBinError(2,2.538415);
   houtFV_stack_4->SetBinError(3,2.694734);
   houtFV_stack_4->SetBinError(4,2.829292);
   houtFV_stack_4->SetBinError(5,2.299134);
   houtFV_stack_4->SetBinError(6,2.401305);
   houtFV_stack_4->SetBinError(7,2.327404);
   houtFV_stack_4->SetBinError(8,2.710264);
   houtFV_stack_4->SetBinError(9,2.504836);
   houtFV_stack_4->SetBinError(10,2.55931);
   houtFV_stack_4->SetBinError(11,2.506724);
   houtFV_stack_4->SetBinError(12,2.457216);
   houtFV_stack_4->SetBinError(13,2.541435);
   houtFV_stack_4->SetBinError(14,2.466655);
   houtFV_stack_4->SetBinError(15,2.55624);
   houtFV_stack_4->SetBinError(16,2.320214);
   houtFV_stack_4->SetBinError(17,2.637343);
   houtFV_stack_4->SetBinError(18,2.429239);
   houtFV_stack_4->SetBinError(19,2.080251);
   houtFV_stack_4->SetBinError(20,2.161033);
   houtFV_stack_4->SetBinError(21,2.755996);
   houtFV_stack_4->SetBinError(22,2.34882);
   houtFV_stack_4->SetBinError(23,2.734602);
   houtFV_stack_4->SetBinError(24,2.512473);
   houtFV_stack_4->SetEntries(2510);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.530778);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.170238);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.82506);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.142338);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.331733);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.196474);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.174814);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.179616);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.41785);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.061551);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.61531);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.11427);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.293623);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.155124);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.145578);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.82606);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.874292);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.278014);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,6.387477);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.485852);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.233415);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.060382);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.407224);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.198306);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6901199);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6770723);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.727817);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6764972);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5336411);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6485931);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8147005);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5707629);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7072039);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7887274);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7055968);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6512382);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6303847);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6674713);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7385226);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7627206);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6053449);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6562983);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9286362);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5897673);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4725218);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7330122);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7103159);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7014016);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9348222);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.13029);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5025361);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.488086);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3620771);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.41147);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2820092);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2304939);
   hNCpi0inFVqe_stack_6->SetEntries(258);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,76.08926);
   hNCpi0inFVres_stack_7->SetBinContent(2,81.16458);
   hNCpi0inFVres_stack_7->SetBinContent(3,77.94727);
   hNCpi0inFVres_stack_7->SetBinContent(4,78.49416);
   hNCpi0inFVres_stack_7->SetBinContent(5,65.04827);
   hNCpi0inFVres_stack_7->SetBinContent(6,62.92654);
   hNCpi0inFVres_stack_7->SetBinContent(7,62.88536);
   hNCpi0inFVres_stack_7->SetBinContent(8,62.65878);
   hNCpi0inFVres_stack_7->SetBinContent(9,71.12757);
   hNCpi0inFVres_stack_7->SetBinContent(10,72.66337);
   hNCpi0inFVres_stack_7->SetBinContent(11,68.44377);
   hNCpi0inFVres_stack_7->SetBinContent(12,63.50248);
   hNCpi0inFVres_stack_7->SetBinContent(13,66.96655);
   hNCpi0inFVres_stack_7->SetBinContent(14,71.13691);
   hNCpi0inFVres_stack_7->SetBinContent(15,76.31894);
   hNCpi0inFVres_stack_7->SetBinContent(16,72.02978);
   hNCpi0inFVres_stack_7->SetBinContent(17,64.14703);
   hNCpi0inFVres_stack_7->SetBinContent(18,64.91212);
   hNCpi0inFVres_stack_7->SetBinContent(19,66.93871);
   hNCpi0inFVres_stack_7->SetBinContent(20,64.71247);
   hNCpi0inFVres_stack_7->SetBinContent(21,82.89891);
   hNCpi0inFVres_stack_7->SetBinContent(22,77.78203);
   hNCpi0inFVres_stack_7->SetBinContent(23,73.20407);
   hNCpi0inFVres_stack_7->SetBinContent(24,69.95888);
   hNCpi0inFVres_stack_7->SetBinError(1,2.86475);
   hNCpi0inFVres_stack_7->SetBinError(2,2.953684);
   hNCpi0inFVres_stack_7->SetBinError(3,2.876952);
   hNCpi0inFVres_stack_7->SetBinError(4,2.93805);
   hNCpi0inFVres_stack_7->SetBinError(5,2.60215);
   hNCpi0inFVres_stack_7->SetBinError(6,2.567972);
   hNCpi0inFVres_stack_7->SetBinError(7,2.607031);
   hNCpi0inFVres_stack_7->SetBinError(8,2.572162);
   hNCpi0inFVres_stack_7->SetBinError(9,2.746823);
   hNCpi0inFVres_stack_7->SetBinError(10,2.825164);
   hNCpi0inFVres_stack_7->SetBinError(11,2.665909);
   hNCpi0inFVres_stack_7->SetBinError(12,2.597359);
   hNCpi0inFVres_stack_7->SetBinError(13,2.60433);
   hNCpi0inFVres_stack_7->SetBinError(14,2.707054);
   hNCpi0inFVres_stack_7->SetBinError(15,2.861794);
   hNCpi0inFVres_stack_7->SetBinError(16,2.754575);
   hNCpi0inFVres_stack_7->SetBinError(17,2.651796);
   hNCpi0inFVres_stack_7->SetBinError(18,2.670845);
   hNCpi0inFVres_stack_7->SetBinError(19,2.75354);
   hNCpi0inFVres_stack_7->SetBinError(20,2.590331);
   hNCpi0inFVres_stack_7->SetBinError(21,3.06071);
   hNCpi0inFVres_stack_7->SetBinError(22,2.874797);
   hNCpi0inFVres_stack_7->SetBinError(23,2.744749);
   hNCpi0inFVres_stack_7->SetBinError(24,2.74209);
   hNCpi0inFVres_stack_7->SetEntries(31278);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,15.98029);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.05974);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.81139);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.58438);
   hNCpi0inFVdis_stack_8->SetBinContent(5,12.25928);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.46263);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.08117);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.56094);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.25065);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.99449);
   hNCpi0inFVdis_stack_8->SetBinContent(11,15.43757);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.10061);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.94017);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.87607);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.00468);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.7217);
   hNCpi0inFVdis_stack_8->SetBinContent(17,14.30362);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.62247);
   hNCpi0inFVdis_stack_8->SetBinContent(19,14.32007);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.07951);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.98667);
   hNCpi0inFVdis_stack_8->SetBinContent(22,14.25097);
   hNCpi0inFVdis_stack_8->SetBinContent(23,17.85407);
   hNCpi0inFVdis_stack_8->SetBinContent(24,14.75418);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.330392);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.219818);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.270814);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.361692);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.141384);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.096602);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.207364);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.058065);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.268823);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.332024);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.341656);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.286037);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.141725);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.236981);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.089003);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.179342);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.219898);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.065306);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.272243);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.1913);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.21705);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.177443);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.38071);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.2637);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(15);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,40.0058);
   hCCpi0inFV_stack_10->SetBinContent(2,36.94994);
   hCCpi0inFV_stack_10->SetBinContent(3,38.04521);
   hCCpi0inFV_stack_10->SetBinContent(4,38.93566);
   hCCpi0inFV_stack_10->SetBinContent(5,24.28718);
   hCCpi0inFV_stack_10->SetBinContent(6,25.5897);
   hCCpi0inFV_stack_10->SetBinContent(7,28.79786);
   hCCpi0inFV_stack_10->SetBinContent(8,22.67556);
   hCCpi0inFV_stack_10->SetBinContent(9,31.24708);
   hCCpi0inFV_stack_10->SetBinContent(10,25.30041);
   hCCpi0inFV_stack_10->SetBinContent(11,30.37696);
   hCCpi0inFV_stack_10->SetBinContent(12,29.45426);
   hCCpi0inFV_stack_10->SetBinContent(13,28.51386);
   hCCpi0inFV_stack_10->SetBinContent(14,28.8067);
   hCCpi0inFV_stack_10->SetBinContent(15,30.57672);
   hCCpi0inFV_stack_10->SetBinContent(16,30.38991);
   hCCpi0inFV_stack_10->SetBinContent(17,28.39192);
   hCCpi0inFV_stack_10->SetBinContent(18,22.12307);
   hCCpi0inFV_stack_10->SetBinContent(19,27.16854);
   hCCpi0inFV_stack_10->SetBinContent(20,30.96193);
   hCCpi0inFV_stack_10->SetBinContent(21,34.64837);
   hCCpi0inFV_stack_10->SetBinContent(22,31.19677);
   hCCpi0inFV_stack_10->SetBinContent(23,34.86046);
   hCCpi0inFV_stack_10->SetBinContent(24,28.65926);
   hCCpi0inFV_stack_10->SetBinError(1,3.16748);
   hCCpi0inFV_stack_10->SetBinError(2,3.089132);
   hCCpi0inFV_stack_10->SetBinError(3,3.068517);
   hCCpi0inFV_stack_10->SetBinError(4,3.098905);
   hCCpi0inFV_stack_10->SetBinError(5,2.458546);
   hCCpi0inFV_stack_10->SetBinError(6,2.539196);
   hCCpi0inFV_stack_10->SetBinError(7,2.72596);
   hCCpi0inFV_stack_10->SetBinError(8,2.414302);
   hCCpi0inFV_stack_10->SetBinError(9,2.805878);
   hCCpi0inFV_stack_10->SetBinError(10,2.522757);
   hCCpi0inFV_stack_10->SetBinError(11,2.771442);
   hCCpi0inFV_stack_10->SetBinError(12,2.629945);
   hCCpi0inFV_stack_10->SetBinError(13,2.674461);
   hCCpi0inFV_stack_10->SetBinError(14,2.603137);
   hCCpi0inFV_stack_10->SetBinError(15,2.753731);
   hCCpi0inFV_stack_10->SetBinError(16,2.799049);
   hCCpi0inFV_stack_10->SetBinError(17,2.636129);
   hCCpi0inFV_stack_10->SetBinError(18,2.387652);
   hCCpi0inFV_stack_10->SetBinError(19,2.649599);
   hCCpi0inFV_stack_10->SetBinError(20,2.876227);
   hCCpi0inFV_stack_10->SetBinError(21,2.935824);
   hCCpi0inFV_stack_10->SetBinError(22,2.766135);
   hCCpi0inFV_stack_10->SetBinError(23,3.026173);
   hCCpi0inFV_stack_10->SetBinError(24,2.627697);
   hCCpi0inFV_stack_10->SetEntries(3118);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.91694);
   hNCinFV_stack_11->SetBinContent(2,15.93361);
   hNCinFV_stack_11->SetBinContent(3,17.88432);
   hNCinFV_stack_11->SetBinContent(4,14.25845);
   hNCinFV_stack_11->SetBinContent(5,13.20204);
   hNCinFV_stack_11->SetBinContent(6,11.24672);
   hNCinFV_stack_11->SetBinContent(7,9.549216);
   hNCinFV_stack_11->SetBinContent(8,13.05074);
   hNCinFV_stack_11->SetBinContent(9,13.30131);
   hNCinFV_stack_11->SetBinContent(10,13.32921);
   hNCinFV_stack_11->SetBinContent(11,11.63508);
   hNCinFV_stack_11->SetBinContent(12,14.50673);
   hNCinFV_stack_11->SetBinContent(13,12.89436);
   hNCinFV_stack_11->SetBinContent(14,14.45347);
   hNCinFV_stack_11->SetBinContent(15,16.55226);
   hNCinFV_stack_11->SetBinContent(16,12.16413);
   hNCinFV_stack_11->SetBinContent(17,9.573256);
   hNCinFV_stack_11->SetBinContent(18,9.477976);
   hNCinFV_stack_11->SetBinContent(19,10.44031);
   hNCinFV_stack_11->SetBinContent(20,12.41917);
   hNCinFV_stack_11->SetBinContent(21,13.95354);
   hNCinFV_stack_11->SetBinContent(22,17.97068);
   hNCinFV_stack_11->SetBinContent(23,14.56167);
   hNCinFV_stack_11->SetBinContent(24,8.457443);
   hNCinFV_stack_11->SetBinError(1,1.709761);
   hNCinFV_stack_11->SetBinError(2,2.001971);
   hNCinFV_stack_11->SetBinError(3,2.105093);
   hNCinFV_stack_11->SetBinError(4,1.943438);
   hNCinFV_stack_11->SetBinError(5,1.754465);
   hNCinFV_stack_11->SetBinError(6,1.641893);
   hNCinFV_stack_11->SetBinError(7,1.455519);
   hNCinFV_stack_11->SetBinError(8,1.787859);
   hNCinFV_stack_11->SetBinError(9,1.842671);
   hNCinFV_stack_11->SetBinError(10,1.829529);
   hNCinFV_stack_11->SetBinError(11,1.664699);
   hNCinFV_stack_11->SetBinError(12,1.943363);
   hNCinFV_stack_11->SetBinError(13,1.820095);
   hNCinFV_stack_11->SetBinError(14,1.953199);
   hNCinFV_stack_11->SetBinError(15,2.067449);
   hNCinFV_stack_11->SetBinError(16,1.766622);
   hNCinFV_stack_11->SetBinError(17,1.570204);
   hNCinFV_stack_11->SetBinError(18,1.532385);
   hNCinFV_stack_11->SetBinError(19,1.610549);
   hNCinFV_stack_11->SetBinError(20,1.767289);
   hNCinFV_stack_11->SetBinError(21,1.95301);
   hNCinFV_stack_11->SetBinError(22,2.121853);
   hNCinFV_stack_11->SetBinError(23,1.933648);
   hNCinFV_stack_11->SetBinError(24,1.414582);
   hNCinFV_stack_11->SetEntries(1336);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,23.30853);
   hnumuCCinFV_stack_12->SetBinContent(2,17.95101);
   hnumuCCinFV_stack_12->SetBinContent(3,12.28533);
   hnumuCCinFV_stack_12->SetBinContent(4,12.1133);
   hnumuCCinFV_stack_12->SetBinContent(5,8.591907);
   hnumuCCinFV_stack_12->SetBinContent(6,11.24702);
   hnumuCCinFV_stack_12->SetBinContent(7,13.83325);
   hnumuCCinFV_stack_12->SetBinContent(8,10.91753);
   hnumuCCinFV_stack_12->SetBinContent(9,12.17488);
   hnumuCCinFV_stack_12->SetBinContent(10,13.05185);
   hnumuCCinFV_stack_12->SetBinContent(11,21.06945);
   hnumuCCinFV_stack_12->SetBinContent(12,17.06709);
   hnumuCCinFV_stack_12->SetBinContent(13,17.13054);
   hnumuCCinFV_stack_12->SetBinContent(14,20.32715);
   hnumuCCinFV_stack_12->SetBinContent(15,15.16954);
   hnumuCCinFV_stack_12->SetBinContent(16,13.22361);
   hnumuCCinFV_stack_12->SetBinContent(17,10.89399);
   hnumuCCinFV_stack_12->SetBinContent(18,11.1699);
   hnumuCCinFV_stack_12->SetBinContent(19,10.00336);
   hnumuCCinFV_stack_12->SetBinContent(20,8.880527);
   hnumuCCinFV_stack_12->SetBinContent(21,11.50778);
   hnumuCCinFV_stack_12->SetBinContent(22,15.30257);
   hnumuCCinFV_stack_12->SetBinContent(23,16.29124);
   hnumuCCinFV_stack_12->SetBinContent(24,22.24089);
   hnumuCCinFV_stack_12->SetBinError(1,2.548129);
   hnumuCCinFV_stack_12->SetBinError(2,2.19901);
   hnumuCCinFV_stack_12->SetBinError(3,1.760432);
   hnumuCCinFV_stack_12->SetBinError(4,1.938318);
   hnumuCCinFV_stack_12->SetBinError(5,1.518339);
   hnumuCCinFV_stack_12->SetBinError(6,1.753085);
   hnumuCCinFV_stack_12->SetBinError(7,2.617453);
   hnumuCCinFV_stack_12->SetBinError(8,2.153198);
   hnumuCCinFV_stack_12->SetBinError(9,1.942142);
   hnumuCCinFV_stack_12->SetBinError(10,1.817549);
   hnumuCCinFV_stack_12->SetBinError(11,3.184701);
   hnumuCCinFV_stack_12->SetBinError(12,3.055063);
   hnumuCCinFV_stack_12->SetBinError(13,2.186838);
   hnumuCCinFV_stack_12->SetBinError(14,2.743765);
   hnumuCCinFV_stack_12->SetBinError(15,1.981892);
   hnumuCCinFV_stack_12->SetBinError(16,1.757339);
   hnumuCCinFV_stack_12->SetBinError(17,1.82994);
   hnumuCCinFV_stack_12->SetBinError(18,2.226546);
   hnumuCCinFV_stack_12->SetBinError(19,1.576056);
   hnumuCCinFV_stack_12->SetBinError(20,1.53913);
   hnumuCCinFV_stack_12->SetBinError(21,2.017125);
   hnumuCCinFV_stack_12->SetBinError(22,2.478076);
   hnumuCCinFV_stack_12->SetBinError(23,2.210907);
   hnumuCCinFV_stack_12->SetBinError(24,2.721324);
   hnumuCCinFV_stack_12->SetEntries(1360);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.036279);
   hnueCCinFV_stack_13->SetBinContent(2,2.47894);
   hnueCCinFV_stack_13->SetBinContent(3,1.749949);
   hnueCCinFV_stack_13->SetBinContent(4,1.333777);
   hnueCCinFV_stack_13->SetBinContent(5,1.123484);
   hnueCCinFV_stack_13->SetBinContent(6,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_13->SetBinContent(9,1.668854);
   hnueCCinFV_stack_13->SetBinContent(10,2.650257);
   hnueCCinFV_stack_13->SetBinContent(11,1.234062);
   hnueCCinFV_stack_13->SetBinContent(12,1.466085);
   hnueCCinFV_stack_13->SetBinContent(13,1.138807);
   hnueCCinFV_stack_13->SetBinContent(14,2.443174);
   hnueCCinFV_stack_13->SetBinContent(15,1.289417);
   hnueCCinFV_stack_13->SetBinContent(16,1.128645);
   hnueCCinFV_stack_13->SetBinContent(17,0.6358774);
   hnueCCinFV_stack_13->SetBinContent(18,3.535342);
   hnueCCinFV_stack_13->SetBinContent(19,1.129172);
   hnueCCinFV_stack_13->SetBinContent(20,2.735266);
   hnueCCinFV_stack_13->SetBinContent(21,1.027643);
   hnueCCinFV_stack_13->SetBinContent(22,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(23,2.539275);
   hnueCCinFV_stack_13->SetBinContent(24,2.402404);
   hnueCCinFV_stack_13->SetBinError(1,0.8259115);
   hnueCCinFV_stack_13->SetBinError(2,1.596092);
   hnueCCinFV_stack_13->SetBinError(3,0.712192);
   hnueCCinFV_stack_13->SetBinError(4,0.6212142);
   hnueCCinFV_stack_13->SetBinError(5,0.5794591);
   hnueCCinFV_stack_13->SetBinError(6,0.1711909);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.372493);
   hnueCCinFV_stack_13->SetBinError(9,0.651882);
   hnueCCinFV_stack_13->SetBinError(10,1.18868);
   hnueCCinFV_stack_13->SetBinError(11,0.506565);
   hnueCCinFV_stack_13->SetBinError(12,0.5576641);
   hnueCCinFV_stack_13->SetBinError(13,0.4649993);
   hnueCCinFV_stack_13->SetBinError(14,1.04386);
   hnueCCinFV_stack_13->SetBinError(15,0.5893496);
   hnueCCinFV_stack_13->SetBinError(16,0.5086715);
   hnueCCinFV_stack_13->SetBinError(17,0.3692351);
   hnueCCinFV_stack_13->SetBinError(18,1.400267);
   hnueCCinFV_stack_13->SetBinError(19,0.5775463);
   hnueCCinFV_stack_13->SetBinError(20,1.430386);
   hnueCCinFV_stack_13->SetBinError(21,0.4941397);
   hnueCCinFV_stack_13->SetBinError(22,0.3582875);
   hnueCCinFV_stack_13->SetBinError(23,1.32661);
   hnueCCinFV_stack_13->SetBinError(24,0.9869026);
   hnueCCinFV_stack_13->SetEntries(135);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__11->SetBinContent(1,218.6815);
   hmcerror__11->SetBinContent(2,222.9487);
   hmcerror__11->SetBinContent(3,224.818);
   hmcerror__11->SetBinContent(4,228.6342);
   hmcerror__11->SetBinContent(5,177.703);
   hmcerror__11->SetBinContent(6,186.0511);
   hmcerror__11->SetBinContent(7,197.8731);
   hmcerror__11->SetBinContent(8,176.201);
   hmcerror__11->SetBinContent(9,197.2927);
   hmcerror__11->SetBinContent(10,195.3574);
   hmcerror__11->SetBinContent(11,203.4252);
   hmcerror__11->SetBinContent(12,185.5537);
   hmcerror__11->SetBinContent(13,186.4775);
   hmcerror__11->SetBinContent(14,200.2068);
   hmcerror__11->SetBinContent(15,215.1096);
   hmcerror__11->SetBinContent(16,203.1058);
   hmcerror__11->SetBinContent(17,195.7566);
   hmcerror__11->SetBinContent(18,190.2972);
   hmcerror__11->SetBinContent(19,198.0821);
   hmcerror__11->SetBinContent(20,188.7805);
   hmcerror__11->SetBinContent(21,222.3127);
   hmcerror__11->SetBinContent(22,214.7);
   hmcerror__11->SetBinContent(23,213.3208);
   hmcerror__11->SetBinContent(24,194.5739);
   hmcerror__11->SetBinError(1,58.47126);
   hmcerror__11->SetBinError(2,64.41062);
   hmcerror__11->SetBinError(3,56.70301);
   hmcerror__11->SetBinError(4,54.99511);
   hmcerror__11->SetBinError(5,42.33205);
   hmcerror__11->SetBinError(6,42.22859);
   hmcerror__11->SetBinError(7,49.52147);
   hmcerror__11->SetBinError(8,43.06596);
   hmcerror__11->SetBinError(9,50.30441);
   hmcerror__11->SetBinError(10,56.53887);
   hmcerror__11->SetBinError(11,55.88614);
   hmcerror__11->SetBinError(12,48.55789);
   hmcerror__11->SetBinError(13,51.44797);
   hmcerror__11->SetBinError(14,51.31762);
   hmcerror__11->SetBinError(15,52.73226);
   hmcerror__11->SetBinError(16,49.10124);
   hmcerror__11->SetBinError(17,46.26634);
   hmcerror__11->SetBinError(18,42.31324);
   hmcerror__11->SetBinError(19,48.63901);
   hmcerror__11->SetBinError(20,49.95476);
   hmcerror__11->SetBinError(21,52.83075);
   hmcerror__11->SetBinError(22,54.56975);
   hmcerror__11->SetBinError(23,60.10513);
   hmcerror__11->SetBinError(24,49.6008);
   hmcerror__11->SetBinError(25,0.3895343);
   hmcerror__11->SetEntries(4778.995);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3013[24] = {
   200,
   211,
   210,
   201,
   215,
   204,
   161,
   166,
   168,
   176,
   177,
   184,
   191,
   194,
   228,
   196,
   183,
   195,
   178,
   183,
   204,
   200,
   177,
   193};
   Double_t _felx3013[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3013[24] = {
   14.14214,
   14.52584,
   14.49138,
   14.17745,
   14.66288,
   14.28286,
   12.68858,
   12.8841,
   12.96148,
   13.2665,
   13.30413,
   13.56466,
   13.82027,
   13.92839,
   15.09967,
   14,
   13.52775,
   13.96424,
   13.34166,
   13.52775,
   14.28286,
   14.14214,
   13.30413,
   13.89244};
   Double_t _fehx3013[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3013[24] = {
   14.14214,
   14.52584,
   14.49138,
   14.17745,
   14.66288,
   14.28286,
   12.68858,
   12.8841,
   12.96148,
   13.2665,
   13.30413,
   13.56466,
   13.82027,
   13.92839,
   15.09967,
   14,
   13.52775,
   13.96424,
   13.34166,
   13.52775,
   14.28286,
   14.14214,
   13.30413,
   13.89244};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(138.8326);
   Graph_Graph3013->SetMaximum(252.5785);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4595.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.8","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 587.3","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.1","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1694.0","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  342.3","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 728.0","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.7","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3014[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3014[24] = {
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
   Double_t _felx3014[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3014[24] = {
   0.267381,
   0.2889034,
   0.2522174,
   0.2405376,
   0.238218,
   0.2269731,
   0.2502689,
   0.2444137,
   0.2549735,
   0.2894125,
   0.2747258,
   0.2616918,
   0.2758937,
   0.256323,
   0.2451413,
   0.241752,
   0.2363462,
   0.2223535,
   0.2455497,
   0.2646182,
   0.2376417,
   0.2541674,
   0.2817594,
   0.2549201};
   Double_t _fehx3014[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3014[24] = {
   0.267381,
   0.2889034,
   0.2522174,
   0.2405376,
   0.238218,
   0.2269731,
   0.2502689,
   0.2444137,
   0.2549735,
   0.2894125,
   0.2747258,
   0.2616918,
   0.2758937,
   0.256323,
   0.2451413,
   0.241752,
   0.2363462,
   0.2223535,
   0.2455497,
   0.2646182,
   0.2376417,
   0.2541674,
   0.2817594,
   0.2549201};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3015[24] = {
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
   Double_t _felx3015[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3015[24] = {
   0.2146139,
   0.2195885,
   0.2144429,
   0.2088032,
   0.2064517,
   0.1983767,
   0.1935147,
   0.210095,
   0.2100221,
   0.2137324,
   0.2104476,
   0.2154694,
   0.2112004,
   0.2098167,
   0.2070706,
   0.2064048,
   0.1997427,
   0.1879372,
   0.1924024,
   0.2000784,
   0.2062458,
   0.2076528,
   0.2119023,
   0.214624};
   Double_t _fehx3015[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3015[24] = {
   0.2146139,
   0.2195885,
   0.2144429,
   0.2088032,
   0.2064517,
   0.1983767,
   0.1935147,
   0.210095,
   0.2100221,
   0.2137324,
   0.2104476,
   0.2154694,
   0.2112004,
   0.2098167,
   0.2070706,
   0.2064048,
   0.1997427,
   0.1879372,
   0.1924024,
   0.2000784,
   0.2062458,
   0.2076528,
   0.2119023,
   0.214624};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3016[24] = {
   0.9145723,
   0.9464063,
   0.9340889,
   0.8791336,
   1.209884,
   1.096473,
   0.8136529,
   0.9421056,
   0.8515267,
   0.9009127,
   0.8700987,
   0.9916265,
   1.024252,
   0.968998,
   1.059925,
   0.9650141,
   0.9348343,
   1.024713,
   0.8986171,
   0.9693797,
   0.9176266,
   0.9315324,
   0.8297363,
   0.9919109};
   Double_t _felx3016[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3016[24] = {
   0.06467003,
   0.06515329,
   0.06445826,
   0.0620093,
   0.08251338,
   0.07676846,
   0.06412483,
   0.07312158,
   0.06569671,
   0.06790885,
   0.06540063,
   0.07310367,
   0.07411229,
   0.06957,
   0.07019522,
   0.06892958,
   0.06910494,
   0.07338122,
   0.0673542,
   0.07165861,
   0.06424671,
   0.06586929,
   0.0623668,
   0.07139931};
   Double_t _fehx3016[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3016[24] = {
   0.06467003,
   0.06515329,
   0.06445826,
   0.0620093,
   0.08251338,
   0.07676846,
   0.06412483,
   0.07312158,
   0.06569671,
   0.06790885,
   0.06540063,
   0.07310367,
   0.07411229,
   0.06957,
   0.07019522,
   0.06892958,
   0.06910494,
   0.07338122,
   0.0673542,
   0.07165861,
   0.06424671,
   0.06586929,
   0.0623668,
   0.07139931};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.6952412);
   Graph_Graph3016->SetMaximum(1.346684);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
