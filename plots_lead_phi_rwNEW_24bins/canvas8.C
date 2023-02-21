#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 12:26:08 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
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
   pad1->Range(-4.119231,-0.9911013,3.957692,109.5949);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__22->SetBinContent(1,46.99689);
   hmc__22->SetBinContent(2,40.1969);
   hmc__22->SetBinContent(3,40.38016);
   hmc__22->SetBinContent(4,46.13138);
   hmc__22->SetBinContent(5,30.55668);
   hmc__22->SetBinContent(6,38.72464);
   hmc__22->SetBinContent(7,43.81833);
   hmc__22->SetBinContent(8,35.00768);
   hmc__22->SetBinContent(9,38.91248);
   hmc__22->SetBinContent(10,34.75103);
   hmc__22->SetBinContent(11,38.22272);
   hmc__22->SetBinContent(12,38.841);
   hmc__22->SetBinContent(13,37.92252);
   hmc__22->SetBinContent(14,35.30416);
   hmc__22->SetBinContent(15,43.76307);
   hmc__22->SetBinContent(16,35.67499);
   hmc__22->SetBinContent(17,49.55507);
   hmc__22->SetBinContent(18,38.56138);
   hmc__22->SetBinContent(19,45.20396);
   hmc__22->SetBinContent(20,40.06817);
   hmc__22->SetBinContent(21,42.94042);
   hmc__22->SetBinContent(22,37.88838);
   hmc__22->SetBinContent(23,41.68113);
   hmc__22->SetBinContent(24,42.89471);
   hmc__22->SetBinError(1,18.78259);
   hmc__22->SetBinError(2,16.17955);
   hmc__22->SetBinError(3,16.58876);
   hmc__22->SetBinError(4,20.79441);
   hmc__22->SetBinError(5,14.58183);
   hmc__22->SetBinError(6,16.25016);
   hmc__22->SetBinError(7,17.38739);
   hmc__22->SetBinError(8,14.65623);
   hmc__22->SetBinError(9,14.19334);
   hmc__22->SetBinError(10,15.46099);
   hmc__22->SetBinError(11,20.92231);
   hmc__22->SetBinError(12,19.20544);
   hmc__22->SetBinError(13,22.50078);
   hmc__22->SetBinError(14,17.63944);
   hmc__22->SetBinError(15,16.00145);
   hmc__22->SetBinError(16,19.79148);
   hmc__22->SetBinError(17,16.91578);
   hmc__22->SetBinError(18,15.29577);
   hmc__22->SetBinError(19,17.63368);
   hmc__22->SetBinError(20,18.46944);
   hmc__22->SetBinError(21,14.98326);
   hmc__22->SetBinError(22,14.56896);
   hmc__22->SetBinError(23,14.67353);
   hmc__22->SetBinError(24,19.4032);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-0.9911013);
   hmc__22->SetMaximum(104.0656);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,-3.15,3.15);
   hs8_stack_8->SetMinimum(-9.756003e-09);
   hs8_stack_8->SetMaximum(52.03282);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.474135);
   hbadmatch_stack_1->SetBinContent(2,0.9286332);
   hbadmatch_stack_1->SetBinContent(3,1.924201);
   hbadmatch_stack_1->SetBinContent(4,2.340906);
   hbadmatch_stack_1->SetBinContent(5,1.270501);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,2.581587);
   hbadmatch_stack_1->SetBinContent(8,0.8023093);
   hbadmatch_stack_1->SetBinContent(9,0.7336084);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinContent(11,2.634594);
   hbadmatch_stack_1->SetBinContent(12,0.8770706);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,1.123658);
   hbadmatch_stack_1->SetBinContent(15,4.018917);
   hbadmatch_stack_1->SetBinContent(16,0.654384);
   hbadmatch_stack_1->SetBinContent(17,2.359816);
   hbadmatch_stack_1->SetBinContent(18,1.175221);
   hbadmatch_stack_1->SetBinContent(19,0.5368956);
   hbadmatch_stack_1->SetBinContent(20,1.515766);
   hbadmatch_stack_1->SetBinContent(21,1.79039);
   hbadmatch_stack_1->SetBinContent(22,1.121968);
   hbadmatch_stack_1->SetBinContent(23,1.800581);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6854262);
   hbadmatch_stack_1->SetBinError(2,0.48078);
   hbadmatch_stack_1->SetBinError(3,0.7547055);
   hbadmatch_stack_1->SetBinError(4,0.8093475);
   hbadmatch_stack_1->SetBinError(5,0.5895188);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.9646187);
   hbadmatch_stack_1->SetBinError(8,0.4753367);
   hbadmatch_stack_1->SetBinError(9,0.4394482);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetBinError(11,0.8213885);
   hbadmatch_stack_1->SetBinError(12,0.5197486);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.5188295);
   hbadmatch_stack_1->SetBinError(15,1.409554);
   hbadmatch_stack_1->SetBinError(16,0.3790157);
   hbadmatch_stack_1->SetBinError(17,0.8876776);
   hbadmatch_stack_1->SetBinError(18,0.4797863);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.6386367);
   hbadmatch_stack_1->SetBinError(21,0.745555);
   hbadmatch_stack_1->SetBinError(22,0.5181909);
   hbadmatch_stack_1->SetBinError(23,0.7754887);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.082985);
   hext_stack_2->SetBinContent(2,4.132192);
   hext_stack_2->SetBinContent(3,5.034772);
   hext_stack_2->SetBinContent(4,11.93971);
   hext_stack_2->SetBinContent(5,6.005192);
   hext_stack_2->SetBinContent(6,11.78249);
   hext_stack_2->SetBinContent(7,12.87543);
   hext_stack_2->SetBinContent(8,6.165187);
   hext_stack_2->SetBinContent(9,7.429645);
   hext_stack_2->SetBinContent(10,5.568234);
   hext_stack_2->SetBinContent(11,5.039181);
   hext_stack_2->SetBinContent(12,4.296596);
   hext_stack_2->SetBinContent(13,6.698648);
   hext_stack_2->SetBinContent(14,3.166181);
   hext_stack_2->SetBinContent(15,8.508217);
   hext_stack_2->SetBinContent(16,6.966795);
   hext_stack_2->SetBinContent(17,15.92627);
   hext_stack_2->SetBinContent(18,14.6993);
   hext_stack_2->SetBinContent(19,17.07105);
   hext_stack_2->SetBinContent(20,11.75937);
   hext_stack_2->SetBinContent(21,8.913179);
   hext_stack_2->SetBinContent(22,6.318);
   hext_stack_2->SetBinContent(23,8.209712);
   hext_stack_2->SetBinContent(24,4.53161);
   hext_stack_2->SetBinError(1,1.552674);
   hext_stack_2->SetBinError(2,1.282292);
   hext_stack_2->SetBinError(3,1.354181);
   hext_stack_2->SetBinError(4,2.485137);
   hext_stack_2->SetBinError(5,1.576651);
   hext_stack_2->SetBinError(6,2.419612);
   hext_stack_2->SetBinError(7,2.386578);
   hext_stack_2->SetBinError(8,1.571905);
   hext_stack_2->SetBinError(9,1.887195);
   hext_stack_2->SetBinError(10,1.629069);
   hext_stack_2->SetBinError(11,1.403185);
   hext_stack_2->SetBinError(12,1.328326);
   hext_stack_2->SetBinError(13,1.814097);
   hext_stack_2->SetBinError(14,1.061777);
   hext_stack_2->SetBinError(15,1.950676);
   hext_stack_2->SetBinError(16,1.693402);
   hext_stack_2->SetBinError(17,2.726301);
   hext_stack_2->SetBinError(18,2.671694);
   hext_stack_2->SetBinError(19,2.769006);
   hext_stack_2->SetBinError(20,2.157839);
   hext_stack_2->SetBinError(21,1.870564);
   hext_stack_2->SetBinError(22,1.630074);
   hext_stack_2->SetBinError(23,2.135845);
   hext_stack_2->SetBinError(24,1.418025);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.776099);
   hdirt_stack_3->SetBinContent(2,1.109369);
   hdirt_stack_3->SetBinContent(3,0.3449163);
   hdirt_stack_3->SetBinContent(4,0.7304975);
   hdirt_stack_3->SetBinContent(5,0.6763744);
   hdirt_stack_3->SetBinContent(6,0.4878354);
   hdirt_stack_3->SetBinContent(7,0.3772257);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.6383081);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.4720574);
   hdirt_stack_3->SetBinContent(12,0.3569671);
   hdirt_stack_3->SetBinContent(13,0.3986344);
   hdirt_stack_3->SetBinContent(14,0.6331654);
   hdirt_stack_3->SetBinContent(15,1.534668);
   hdirt_stack_3->SetBinContent(16,0.51637);
   hdirt_stack_3->SetBinContent(17,0.6143302);
   hdirt_stack_3->SetBinContent(18,0.9432823);
   hdirt_stack_3->SetBinContent(19,1.405758);
   hdirt_stack_3->SetBinContent(20,0.9654288);
   hdirt_stack_3->SetBinContent(21,1.013654);
   hdirt_stack_3->SetBinContent(22,1.270754);
   hdirt_stack_3->SetBinContent(23,1.812369);
   hdirt_stack_3->SetBinContent(24,1.810166);
   hdirt_stack_3->SetBinError(1,0.458477);
   hdirt_stack_3->SetBinError(2,0.4884064);
   hdirt_stack_3->SetBinError(3,0.3382541);
   hdirt_stack_3->SetBinError(4,0.5179555);
   hdirt_stack_3->SetBinError(5,0.4782689);
   hdirt_stack_3->SetBinError(6,0.37603);
   hdirt_stack_3->SetBinError(7,0.270155);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.3996177);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2832398);
   hdirt_stack_3->SetBinError(12,0.258803);
   hdirt_stack_3->SetBinError(13,0.2948844);
   hdirt_stack_3->SetBinError(14,0.4685454);
   hdirt_stack_3->SetBinError(15,0.6193051);
   hdirt_stack_3->SetBinError(16,0.4027077);
   hdirt_stack_3->SetBinError(17,0.39051);
   hdirt_stack_3->SetBinError(18,0.5580644);
   hdirt_stack_3->SetBinError(19,0.987048);
   hdirt_stack_3->SetBinError(20,0.5163876);
   hdirt_stack_3->SetBinError(21,0.4590478);
   hdirt_stack_3->SetBinError(22,0.5943722);
   hdirt_stack_3->SetBinError(23,0.7272816);
   hdirt_stack_3->SetBinError(24,0.7274869);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,10.58188);
   houtFV_stack_4->SetBinContent(2,6.46217);
   houtFV_stack_4->SetBinContent(3,10.34812);
   houtFV_stack_4->SetBinContent(4,9.884749);
   houtFV_stack_4->SetBinContent(5,9.023925);
   houtFV_stack_4->SetBinContent(6,7.043398);
   houtFV_stack_4->SetBinContent(7,8.041211);
   houtFV_stack_4->SetBinContent(8,10.13399);
   houtFV_stack_4->SetBinContent(9,8.733487);
   houtFV_stack_4->SetBinContent(10,7.335798);
   houtFV_stack_4->SetBinContent(11,8.414333);
   houtFV_stack_4->SetBinContent(12,9.914883);
   houtFV_stack_4->SetBinContent(13,9.334339);
   houtFV_stack_4->SetBinContent(14,8.256264);
   houtFV_stack_4->SetBinContent(15,8.051565);
   houtFV_stack_4->SetBinContent(16,8.771665);
   houtFV_stack_4->SetBinContent(17,8.241107);
   houtFV_stack_4->SetBinContent(18,5.903501);
   houtFV_stack_4->SetBinContent(19,6.05276);
   houtFV_stack_4->SetBinContent(20,6.750401);
   houtFV_stack_4->SetBinContent(21,9.467286);
   houtFV_stack_4->SetBinContent(22,7.498948);
   houtFV_stack_4->SetBinContent(23,10.07786);
   houtFV_stack_4->SetBinContent(24,9.388477);
   houtFV_stack_4->SetBinError(1,1.59127);
   houtFV_stack_4->SetBinError(2,1.268045);
   houtFV_stack_4->SetBinError(3,1.573907);
   houtFV_stack_4->SetBinError(4,1.668208);
   houtFV_stack_4->SetBinError(5,1.472441);
   houtFV_stack_4->SetBinError(6,1.386425);
   houtFV_stack_4->SetBinError(7,1.40517);
   houtFV_stack_4->SetBinError(8,1.813401);
   houtFV_stack_4->SetBinError(9,1.515322);
   houtFV_stack_4->SetBinError(10,1.3397);
   houtFV_stack_4->SetBinError(11,1.429455);
   houtFV_stack_4->SetBinError(12,1.696706);
   houtFV_stack_4->SetBinError(13,1.594522);
   houtFV_stack_4->SetBinError(14,1.469348);
   houtFV_stack_4->SetBinError(15,1.42621);
   houtFV_stack_4->SetBinError(16,1.492676);
   houtFV_stack_4->SetBinError(17,1.843279);
   houtFV_stack_4->SetBinError(18,1.166559);
   houtFV_stack_4->SetBinError(19,1.200363);
   houtFV_stack_4->SetBinError(20,1.27217);
   houtFV_stack_4->SetBinError(21,1.573682);
   houtFV_stack_4->SetBinError(22,1.402398);
   houtFV_stack_4->SetBinError(23,1.566907);
   houtFV_stack_4->SetBinError(24,1.566527);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.795154);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.08794);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.157358);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7665901);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6141361);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8502901);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.69634);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7513078);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3073253);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3769979);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3883553);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3273579);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2874767);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3309054);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2814331);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2479823);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2126346);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.920209);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.868425);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.621622);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.007158);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.210419);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.028074);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.559174);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.237408);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.173309);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.521896);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.255513);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.629255);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.185927);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.340045);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.663139);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.257514);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.201715);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.879027);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.373523);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.810441);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.90379);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.452141);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.01015);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.732726);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6343337);
   hNCpi0inFVres_stack_7->SetBinError(2,1.041101);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8004013);
   hNCpi0inFVres_stack_7->SetBinError(4,0.798129);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5905912);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6033054);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6563477);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6968076);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7165439);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7501136);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7141406);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6526806);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6845039);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7291079);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8053298);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7836116);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7826176);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6782205);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8886573);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6859715);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9150194);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6988993);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8053303);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8306669);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.408458);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.381222);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.143572);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.86698);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.25534);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8220537);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.26879);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.10039);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.29877);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.21299);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.855026);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.24089);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.059872);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.12829);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.436526);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.450808);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.864572);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.784944);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9202038);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.329662);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.13253);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.435358);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.728976);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3972726);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3788857);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3330545);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4142971);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3831421);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2078513);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3481013);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2539271);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5190996);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3458579);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4505984);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3469814);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3295301);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2554552);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4374504);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4301228);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3211561);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4558939);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2682147);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5308387);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.452824);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3264641);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4165616);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,12.22958);
   hCCpi0inFV_stack_10->SetBinContent(2,9.694234);
   hCCpi0inFV_stack_10->SetBinContent(3,9.110661);
   hCCpi0inFV_stack_10->SetBinContent(4,7.659198);
   hCCpi0inFV_stack_10->SetBinContent(5,4.394888);
   hCCpi0inFV_stack_10->SetBinContent(6,8.619261);
   hCCpi0inFV_stack_10->SetBinContent(7,6.669374);
   hCCpi0inFV_stack_10->SetBinContent(8,5.641015);
   hCCpi0inFV_stack_10->SetBinContent(9,10.68348);
   hCCpi0inFV_stack_10->SetBinContent(10,6.846059);
   hCCpi0inFV_stack_10->SetBinContent(11,7.801144);
   hCCpi0inFV_stack_10->SetBinContent(12,8.514078);
   hCCpi0inFV_stack_10->SetBinContent(13,6.350673);
   hCCpi0inFV_stack_10->SetBinContent(14,7.780469);
   hCCpi0inFV_stack_10->SetBinContent(15,6.97731);
   hCCpi0inFV_stack_10->SetBinContent(16,8.13953);
   hCCpi0inFV_stack_10->SetBinContent(17,9.618666);
   hCCpi0inFV_stack_10->SetBinContent(18,4.933472);
   hCCpi0inFV_stack_10->SetBinContent(19,7.072591);
   hCCpi0inFV_stack_10->SetBinContent(20,7.127535);
   hCCpi0inFV_stack_10->SetBinContent(21,7.833029);
   hCCpi0inFV_stack_10->SetBinContent(22,8.165446);
   hCCpi0inFV_stack_10->SetBinContent(23,6.832766);
   hCCpi0inFV_stack_10->SetBinContent(24,8.293609);
   hCCpi0inFV_stack_10->SetBinError(1,1.812887);
   hCCpi0inFV_stack_10->SetBinError(2,1.586749);
   hCCpi0inFV_stack_10->SetBinError(3,1.538329);
   hCCpi0inFV_stack_10->SetBinError(4,1.379187);
   hCCpi0inFV_stack_10->SetBinError(5,1.075193);
   hCCpi0inFV_stack_10->SetBinError(6,1.511446);
   hCCpi0inFV_stack_10->SetBinError(7,1.306008);
   hCCpi0inFV_stack_10->SetBinError(8,1.199491);
   hCCpi0inFV_stack_10->SetBinError(9,1.628705);
   hCCpi0inFV_stack_10->SetBinError(10,1.268012);
   hCCpi0inFV_stack_10->SetBinError(11,1.406626);
   hCCpi0inFV_stack_10->SetBinError(12,1.401442);
   hCCpi0inFV_stack_10->SetBinError(13,1.241912);
   hCCpi0inFV_stack_10->SetBinError(14,1.330761);
   hCCpi0inFV_stack_10->SetBinError(15,1.344671);
   hCCpi0inFV_stack_10->SetBinError(16,1.476599);
   hCCpi0inFV_stack_10->SetBinError(17,1.619423);
   hCCpi0inFV_stack_10->SetBinError(18,1.145041);
   hCCpi0inFV_stack_10->SetBinError(19,1.387616);
   hCCpi0inFV_stack_10->SetBinError(20,1.373978);
   hCCpi0inFV_stack_10->SetBinError(21,1.368346);
   hCCpi0inFV_stack_10->SetBinError(22,1.35831);
   hCCpi0inFV_stack_10->SetBinError(23,1.388914);
   hCCpi0inFV_stack_10->SetBinError(24,1.456825);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.902067);
   hNCinFV_stack_11->SetBinContent(2,2.002419);
   hNCinFV_stack_11->SetBinContent(3,1.123658);
   hNCinFV_stack_11->SetBinContent(4,2.344287);
   hNCinFV_stack_11->SetBinContent(5,1.65886);
   hNCinFV_stack_11->SetBinContent(6,1.17353);
   hNCinFV_stack_11->SetBinContent(7,0.3934307);
   hNCinFV_stack_11->SetBinContent(8,1.999038);
   hNCinFV_stack_11->SetBinContent(9,0.7868615);
   hNCinFV_stack_11->SetBinContent(10,1.176911);
   hNCinFV_stack_11->SetBinContent(11,1.413964);
   hNCinFV_stack_11->SetBinContent(12,1.860647);
   hNCinFV_stack_11->SetBinContent(13,0.8770706);
   hNCinFV_stack_11->SetBinContent(14,1.215558);
   hNCinFV_stack_11->SetBinContent(15,2.295498);
   hNCinFV_stack_11->SetBinContent(16,0.8770706);
   hNCinFV_stack_11->SetBinContent(17,1.127039);
   hNCinFV_stack_11->SetBinContent(18,1.073786);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,2.684465);
   hNCinFV_stack_11->SetBinContent(21,1.949166);
   hNCinFV_stack_11->SetBinContent(22,2.387397);
   hNCinFV_stack_11->SetBinContent(23,1.270501);
   hNCinFV_stack_11->SetBinContent(24,2.495594);
   hNCinFV_stack_11->SetBinError(1,0.6485835);
   hNCinFV_stack_11->SetBinError(2,0.7348366);
   hNCinFV_stack_11->SetBinError(3,0.5188295);
   hNCinFV_stack_11->SetBinError(4,0.8101654);
   hNCinFV_stack_11->SetBinError(5,0.650338);
   hNCinFV_stack_11->SetBinError(6,0.4790957);
   hNCinFV_stack_11->SetBinError(7,0.2781975);
   hNCinFV_stack_11->SetBinError(8,0.7339349);
   hNCinFV_stack_11->SetBinError(9,0.3934307);
   hNCinFV_stack_11->SetBinError(10,0.4804759);
   hNCinFV_stack_11->SetBinError(11,0.6515799);
   hNCinFV_stack_11->SetBinError(12,0.6808988);
   hNCinFV_stack_11->SetBinError(13,0.5197486);
   hNCinFV_stack_11->SetBinError(14,0.6206425);
   hNCinFV_stack_11->SetBinError(15,0.7057297);
   hNCinFV_stack_11->SetBinError(16,0.5197486);
   hNCinFV_stack_11->SetBinError(17,0.5201044);
   hNCinFV_stack_11->SetBinError(18,0.5557297);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.8786858);
   hNCinFV_stack_11->SetBinError(21,0.7604681);
   hNCinFV_stack_11->SetBinError(22,0.7836246);
   hNCinFV_stack_11->SetBinError(23,0.5895188);
   hNCinFV_stack_11->SetBinError(24,0.7335366);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,7.300955);
   hnumuCCinFV_stack_12->SetBinContent(2,5.143764);
   hnumuCCinFV_stack_12->SetBinContent(3,3.219873);
   hnumuCCinFV_stack_12->SetBinContent(4,2.813998);
   hnumuCCinFV_stack_12->SetBinContent(5,1.503672);
   hnumuCCinFV_stack_12->SetBinContent(6,3.757465);
   hnumuCCinFV_stack_12->SetBinContent(7,5.964167);
   hnumuCCinFV_stack_12->SetBinContent(8,3.650778);
   hnumuCCinFV_stack_12->SetBinContent(9,2.054944);
   hnumuCCinFV_stack_12->SetBinContent(10,4.97339);
   hnumuCCinFV_stack_12->SetBinContent(11,4.987743);
   hnumuCCinFV_stack_12->SetBinContent(12,5.697719);
   hnumuCCinFV_stack_12->SetBinContent(13,6.538066);
   hnumuCCinFV_stack_12->SetBinContent(14,5.261902);
   hnumuCCinFV_stack_12->SetBinContent(15,3.726244);
   hnumuCCinFV_stack_12->SetBinContent(16,2.446402);
   hnumuCCinFV_stack_12->SetBinContent(17,4.512945);
   hnumuCCinFV_stack_12->SetBinContent(18,3.146558);
   hnumuCCinFV_stack_12->SetBinContent(19,4.140292);
   hnumuCCinFV_stack_12->SetBinContent(20,2.640448);
   hnumuCCinFV_stack_12->SetBinContent(21,2.25218);
   hnumuCCinFV_stack_12->SetBinContent(22,2.734088);
   hnumuCCinFV_stack_12->SetBinContent(23,3.493312);
   hnumuCCinFV_stack_12->SetBinContent(24,6.077888);
   hnumuCCinFV_stack_12->SetBinError(1,1.412903);
   hnumuCCinFV_stack_12->SetBinError(2,1.17529);
   hnumuCCinFV_stack_12->SetBinError(3,0.8058376);
   hnumuCCinFV_stack_12->SetBinError(4,0.8378194);
   hnumuCCinFV_stack_12->SetBinError(5,0.6340582);
   hnumuCCinFV_stack_12->SetBinError(6,1.010157);
   hnumuCCinFV_stack_12->SetBinError(7,2.183746);
   hnumuCCinFV_stack_12->SetBinError(8,1.439393);
   hnumuCCinFV_stack_12->SetBinError(9,0.6972398);
   hnumuCCinFV_stack_12->SetBinError(10,1.183231);
   hnumuCCinFV_stack_12->SetBinError(11,1.224808);
   hnumuCCinFV_stack_12->SetBinError(12,2.429279);
   hnumuCCinFV_stack_12->SetBinError(13,1.376072);
   hnumuCCinFV_stack_12->SetBinError(14,1.231585);
   hnumuCCinFV_stack_12->SetBinError(15,1.005568);
   hnumuCCinFV_stack_12->SetBinError(16,0.7998893);
   hnumuCCinFV_stack_12->SetBinError(17,1.216052);
   hnumuCCinFV_stack_12->SetBinError(18,1.141298);
   hnumuCCinFV_stack_12->SetBinError(19,1.046181);
   hnumuCCinFV_stack_12->SetBinError(20,0.8155918);
   hnumuCCinFV_stack_12->SetBinError(21,0.7264143);
   hnumuCCinFV_stack_12->SetBinError(22,0.8384077);
   hnumuCCinFV_stack_12->SetBinError(23,0.8857974);
   hnumuCCinFV_stack_12->SetBinError(24,1.246142);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,1.076281);
   hnueCCinFV_stack_13->SetBinContent(15,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(18,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(24,1.136579);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2252857);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.5806102);
   hnueCCinFV_stack_13->SetBinError(15,0.3025491);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(18,0.2463303);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(24,0.7935128);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__23->SetBinContent(1,46.99689);
   hmcerror__23->SetBinContent(2,40.1969);
   hmcerror__23->SetBinContent(3,40.38016);
   hmcerror__23->SetBinContent(4,46.13138);
   hmcerror__23->SetBinContent(5,30.55668);
   hmcerror__23->SetBinContent(6,38.72464);
   hmcerror__23->SetBinContent(7,43.81833);
   hmcerror__23->SetBinContent(8,35.00768);
   hmcerror__23->SetBinContent(9,38.91248);
   hmcerror__23->SetBinContent(10,34.75103);
   hmcerror__23->SetBinContent(11,38.22272);
   hmcerror__23->SetBinContent(12,38.841);
   hmcerror__23->SetBinContent(13,37.92252);
   hmcerror__23->SetBinContent(14,35.30416);
   hmcerror__23->SetBinContent(15,43.76307);
   hmcerror__23->SetBinContent(16,35.67499);
   hmcerror__23->SetBinContent(17,49.55507);
   hmcerror__23->SetBinContent(18,38.56138);
   hmcerror__23->SetBinContent(19,45.20396);
   hmcerror__23->SetBinContent(20,40.06817);
   hmcerror__23->SetBinContent(21,42.94042);
   hmcerror__23->SetBinContent(22,37.88838);
   hmcerror__23->SetBinContent(23,41.68113);
   hmcerror__23->SetBinContent(24,42.89471);
   hmcerror__23->SetBinError(1,18.78259);
   hmcerror__23->SetBinError(2,16.17955);
   hmcerror__23->SetBinError(3,16.58876);
   hmcerror__23->SetBinError(4,20.79441);
   hmcerror__23->SetBinError(5,14.58183);
   hmcerror__23->SetBinError(6,16.25016);
   hmcerror__23->SetBinError(7,17.38739);
   hmcerror__23->SetBinError(8,14.65623);
   hmcerror__23->SetBinError(9,14.19334);
   hmcerror__23->SetBinError(10,15.46099);
   hmcerror__23->SetBinError(11,20.92231);
   hmcerror__23->SetBinError(12,19.20544);
   hmcerror__23->SetBinError(13,22.50078);
   hmcerror__23->SetBinError(14,17.63944);
   hmcerror__23->SetBinError(15,16.00145);
   hmcerror__23->SetBinError(16,19.79148);
   hmcerror__23->SetBinError(17,16.91578);
   hmcerror__23->SetBinError(18,15.29577);
   hmcerror__23->SetBinError(19,17.63368);
   hmcerror__23->SetBinError(20,18.46944);
   hmcerror__23->SetBinError(21,14.98326);
   hmcerror__23->SetBinError(22,14.56896);
   hmcerror__23->SetBinError(23,14.67353);
   hmcerror__23->SetBinError(24,19.4032);
   hmcerror__23->SetBinError(25,0.3895343);
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
   
   Double_t _fx3029[24] = {
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
   Double_t _fy3029[24] = {
   33,
   38,
   34,
   36,
   33,
   39,
   31,
   31,
   25,
   33,
   41,
   39,
   41,
   40,
   40,
   43,
   37,
   36,
   37,
   38,
   45,
   41,
   32,
   42};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   5.8847,
   6.3013,
   5.9703,
   6.1381,
   5.8847,
   6.3813,
   5.7094,
   5.7094,
   5.1474,
   5.8847,
   6.5384,
   6.3813,
   6.5384,
   6.4604,
   6.4604,
   6.6917,
   6.2203,
   6.1381,
   6.2203,
   6.3013,
   6.8416,
   6.5384,
   5.7977,
   6.6155};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   5.6776,
   6.0955,
   5.7635,
   5.9318,
   5.6776,
   6.1757,
   5.5017,
   5.5017,
   4.9374,
   5.6776,
   6.3331,
   6.1757,
   6.3331,
   6.2549,
   6.2549,
   6.4868,
   6.0141,
   5.9318,
   6.0141,
   6.0955,
   6.637,
   6.3331,
   5.5904,
   6.4104};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(16.67416);
   Graph_Graph3029->SetMaximum(54.81544);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
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
   Double_t _fely3030[24] = {
   0.3996561,
   0.4025074,
   0.4108146,
   0.450765,
   0.477206,
   0.4196335,
   0.3968063,
   0.4186576,
   0.3647504,
   0.4449073,
   0.5473787,
   0.494463,
   0.5933356,
   0.4996421,
   0.3656383,
   0.554772,
   0.3413531,
   0.3966604,
   0.3900915,
   0.4609505,
   0.3489313,
   0.3845231,
   0.3520426,
   0.4523449};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   0.3996561,
   0.4025074,
   0.4108146,
   0.450765,
   0.477206,
   0.4196335,
   0.3968063,
   0.4186576,
   0.3647504,
   0.4449073,
   0.5473787,
   0.494463,
   0.5933356,
   0.4996421,
   0.3656383,
   0.554772,
   0.3413531,
   0.3966604,
   0.3900915,
   0.4609505,
   0.3489313,
   0.3845231,
   0.3520426,
   0.4523449};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-3.78,3.78);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   Double_t _fely3031[24] = {
   0.1818378,
   0.2070551,
   0.1994782,
   0.1713538,
   0.1951749,
   0.1745228,
   0.1722289,
   0.1896356,
   0.1864032,
   0.1919009,
   0.1916023,
   0.2139333,
   0.1760704,
   0.2121083,
   0.1903183,
   0.1988812,
   0.1666764,
   0.1619737,
   0.1613052,
   0.1752989,
   0.1750728,
   0.200445,
   0.1846492,
   0.1949049};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.1818378,
   0.2070551,
   0.1994782,
   0.1713538,
   0.1951749,
   0.1745228,
   0.1722289,
   0.1896356,
   0.1864032,
   0.1919009,
   0.1916023,
   0.2139333,
   0.1760704,
   0.2121083,
   0.1903183,
   0.1988812,
   0.1666764,
   0.1619737,
   0.1613052,
   0.1752989,
   0.1750728,
   0.200445,
   0.1846492,
   0.1949049};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-3.78,3.78);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3032[24] = {
   0.7021741,
   0.9453466,
   0.8419976,
   0.7803799,
   1.07996,
   1.007111,
   0.7074666,
   0.8855199,
   0.6424675,
   0.9496121,
   1.07266,
   1.004094,
   1.081152,
   1.133011,
   0.9140127,
   1.205326,
   0.7466442,
   0.9335765,
   0.8185124,
   0.9483837,
   1.047964,
   1.082126,
   0.7677334,
   0.9791418};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.1252147,
   0.1567609,
   0.1478523,
   0.1330569,
   0.1925831,
   0.1647866,
   0.1302971,
   0.1630899,
   0.1322815,
   0.1693389,
   0.1710605,
   0.1642929,
   0.1724147,
   0.1829926,
   0.1476222,
   0.187574,
   0.125523,
   0.1591774,
   0.1376052,
   0.1572645,
   0.1593277,
   0.1725701,
   0.1390965,
   0.1542265};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.120808,
   0.1516411,
   0.142731,
   0.1285849,
   0.1858055,
   0.1594773,
   0.1255571,
   0.1571569,
   0.1268848,
   0.1633793,
   0.1656894,
   0.1589995,
   0.167001,
   0.1771718,
   0.1429264,
   0.1818305,
   0.121362,
   0.1538275,
   0.1330437,
   0.1521282,
   0.154563,
   0.1671515,
   0.134123,
   0.149445};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.4224889);
   Graph_Graph3032->SetMaximum(1.474854);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
