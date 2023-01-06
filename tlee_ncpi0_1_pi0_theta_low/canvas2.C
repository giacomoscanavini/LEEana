#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 23:09:34 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-7.000261,3.553846,774.0815);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__4->SetBinContent(1,56.31681);
   hmc__4->SetBinContent(2,170.1322);
   hmc__4->SetBinContent(3,246.8702);
   hmc__4->SetBinContent(4,303.1065);
   hmc__4->SetBinContent(5,332.7975);
   hmc__4->SetBinContent(6,350.013);
   hmc__4->SetBinContent(7,331.9782);
   hmc__4->SetBinContent(8,329.6963);
   hmc__4->SetBinContent(9,322.389);
   hmc__4->SetBinContent(10,291.0172);
   hmc__4->SetBinContent(11,273.3239);
   hmc__4->SetBinContent(12,251.5651);
   hmc__4->SetBinContent(13,258.6927);
   hmc__4->SetBinContent(14,215.3709);
   hmc__4->SetBinContent(15,213.5916);
   hmc__4->SetBinContent(16,195.6122);
   hmc__4->SetBinContent(17,177.2937);
   hmc__4->SetBinContent(18,151.7567);
   hmc__4->SetBinContent(19,164.1803);
   hmc__4->SetBinContent(20,144.5344);
   hmc__4->SetBinContent(21,141.0948);
   hmc__4->SetBinContent(22,110.2145);
   hmc__4->SetBinContent(23,86.14325);
   hmc__4->SetBinContent(24,51.21608);
   hmc__4->SetBinContent(25,16.0442);
   hmc__4->SetBinError(1,18.17169);
   hmc__4->SetBinError(2,42.65498);
   hmc__4->SetBinError(3,77.73504);
   hmc__4->SetBinError(4,80.73051);
   hmc__4->SetBinError(5,89.34045);
   hmc__4->SetBinError(6,99.45784);
   hmc__4->SetBinError(7,92.25466);
   hmc__4->SetBinError(8,91.49972);
   hmc__4->SetBinError(9,91.33743);
   hmc__4->SetBinError(10,85.79916);
   hmc__4->SetBinError(11,81.33765);
   hmc__4->SetBinError(12,75.77604);
   hmc__4->SetBinError(13,78.48209);
   hmc__4->SetBinError(14,61.83252);
   hmc__4->SetBinError(15,62.71714);
   hmc__4->SetBinError(16,59.40187);
   hmc__4->SetBinError(17,53.89375);
   hmc__4->SetBinError(18,47.34594);
   hmc__4->SetBinError(19,49.19597);
   hmc__4->SetBinError(20,46.18244);
   hmc__4->SetBinError(21,45.80353);
   hmc__4->SetBinError(22,36.74714);
   hmc__4->SetBinError(23,25.61368);
   hmc__4->SetBinError(24,19.0524);
   hmc__4->SetBinError(25,8.833487);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-7.000261);
   hmc__4->SetMaximum(735.0274);
   hmc__4->SetEntries(5727.925);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,3.15);
   hs2_stack_2->SetMinimum(-1.479728e-08);
   hs2_stack_2->SetMaximum(367.5137);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.8480954);
   hbadmatch_stack_1->SetBinContent(2,1.458184);
   hbadmatch_stack_1->SetBinContent(3,4.136675);
   hbadmatch_stack_1->SetBinContent(4,6.241294);
   hbadmatch_stack_1->SetBinContent(5,4.73858);
   hbadmatch_stack_1->SetBinContent(6,8.693102);
   hbadmatch_stack_1->SetBinContent(7,5.513521);
   hbadmatch_stack_1->SetBinContent(8,7.646508);
   hbadmatch_stack_1->SetBinContent(9,9.92605);
   hbadmatch_stack_1->SetBinContent(10,8.953898);
   hbadmatch_stack_1->SetBinContent(11,9.687649);
   hbadmatch_stack_1->SetBinContent(12,5.111968);
   hbadmatch_stack_1->SetBinContent(13,7.035671);
   hbadmatch_stack_1->SetBinContent(14,2.799101);
   hbadmatch_stack_1->SetBinContent(15,4.525358);
   hbadmatch_stack_1->SetBinContent(16,7.775121);
   hbadmatch_stack_1->SetBinContent(17,4.978539);
   hbadmatch_stack_1->SetBinContent(18,2.649754);
   hbadmatch_stack_1->SetBinContent(19,2.582682);
   hbadmatch_stack_1->SetBinContent(20,4.23844);
   hbadmatch_stack_1->SetBinContent(21,3.178497);
   hbadmatch_stack_1->SetBinContent(22,2.886091);
   hbadmatch_stack_1->SetBinContent(23,1.797119);
   hbadmatch_stack_1->SetBinContent(24,2.029028);
   hbadmatch_stack_1->SetBinError(1,0.6758179);
   hbadmatch_stack_1->SetBinError(2,0.5371628);
   hbadmatch_stack_1->SetBinError(3,1.192318);
   hbadmatch_stack_1->SetBinError(4,1.288421);
   hbadmatch_stack_1->SetBinError(5,1.045005);
   hbadmatch_stack_1->SetBinError(6,1.623816);
   hbadmatch_stack_1->SetBinError(7,1.20191);
   hbadmatch_stack_1->SetBinError(8,1.420981);
   hbadmatch_stack_1->SetBinError(9,2.213966);
   hbadmatch_stack_1->SetBinError(10,1.93178);
   hbadmatch_stack_1->SetBinError(11,1.706018);
   hbadmatch_stack_1->SetBinError(12,1.071122);
   hbadmatch_stack_1->SetBinError(13,1.384752);
   hbadmatch_stack_1->SetBinError(14,0.9293023);
   hbadmatch_stack_1->SetBinError(15,1.213316);
   hbadmatch_stack_1->SetBinError(16,2.329043);
   hbadmatch_stack_1->SetBinError(17,1.90596);
   hbadmatch_stack_1->SetBinError(18,0.84171);
   hbadmatch_stack_1->SetBinError(19,0.869348);
   hbadmatch_stack_1->SetBinError(20,1.048206);
   hbadmatch_stack_1->SetBinError(21,0.8403762);
   hbadmatch_stack_1->SetBinError(22,0.9612648);
   hbadmatch_stack_1->SetBinError(23,0.7230999);
   hbadmatch_stack_1->SetBinError(24,1.013104);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,5.814838);
   hext_stack_2->SetBinContent(2,12.83788);
   hext_stack_2->SetBinContent(3,16.03002);
   hext_stack_2->SetBinContent(4,20.42475);
   hext_stack_2->SetBinContent(5,20.66978);
   hext_stack_2->SetBinContent(6,26.5221);
   hext_stack_2->SetBinContent(7,20.18375);
   hext_stack_2->SetBinContent(8,25.44516);
   hext_stack_2->SetBinContent(9,37.56364);
   hext_stack_2->SetBinContent(10,20.16662);
   hext_stack_2->SetBinContent(11,24.55978);
   hext_stack_2->SetBinContent(12,24.83668);
   hext_stack_2->SetBinContent(13,39.55192);
   hext_stack_2->SetBinContent(14,26.60147);
   hext_stack_2->SetBinContent(15,29.27608);
   hext_stack_2->SetBinContent(16,16.55636);
   hext_stack_2->SetBinContent(17,22.09146);
   hext_stack_2->SetBinContent(18,10.14457);
   hext_stack_2->SetBinContent(19,16.66168);
   hext_stack_2->SetBinContent(20,12.88701);
   hext_stack_2->SetBinContent(21,12.2757);
   hext_stack_2->SetBinContent(22,10.01487);
   hext_stack_2->SetBinContent(23,10.23553);
   hext_stack_2->SetBinContent(24,3.297453);
   hext_stack_2->SetBinContent(25,2.103607);
   hext_stack_2->SetBinError(1,1.683489);
   hext_stack_2->SetBinError(2,2.49606);
   hext_stack_2->SetBinError(3,2.624729);
   hext_stack_2->SetBinError(4,3.180125);
   hext_stack_2->SetBinError(5,2.914036);
   hext_stack_2->SetBinError(6,3.481607);
   hext_stack_2->SetBinError(7,2.816002);
   hext_stack_2->SetBinError(8,3.514172);
   hext_stack_2->SetBinError(9,4.271192);
   hext_stack_2->SetBinError(10,2.944248);
   hext_stack_2->SetBinError(11,3.176591);
   hext_stack_2->SetBinError(12,3.356792);
   hext_stack_2->SetBinError(13,4.450333);
   hext_stack_2->SetBinError(14,3.721346);
   hext_stack_2->SetBinError(15,3.88416);
   hext_stack_2->SetBinError(16,2.565161);
   hext_stack_2->SetBinError(17,3.146999);
   hext_stack_2->SetBinError(18,1.982145);
   hext_stack_2->SetBinError(19,2.799714);
   hext_stack_2->SetBinError(20,2.372694);
   hext_stack_2->SetBinError(21,2.493002);
   hext_stack_2->SetBinError(22,2.222813);
   hext_stack_2->SetBinError(23,2.364243);
   hext_stack_2->SetBinError(24,1.384641);
   hext_stack_2->SetBinError(25,0.9761052);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,1.572915);
   hdirt_stack_3->SetBinContent(3,1.946594);
   hdirt_stack_3->SetBinContent(4,2.238187);
   hdirt_stack_3->SetBinContent(5,2.194546);
   hdirt_stack_3->SetBinContent(6,2.605463);
   hdirt_stack_3->SetBinContent(7,3.593153);
   hdirt_stack_3->SetBinContent(8,2.309313);
   hdirt_stack_3->SetBinContent(9,3.215328);
   hdirt_stack_3->SetBinContent(10,2.95991);
   hdirt_stack_3->SetBinContent(11,3.258931);
   hdirt_stack_3->SetBinContent(12,1.751553);
   hdirt_stack_3->SetBinContent(13,2.06541);
   hdirt_stack_3->SetBinContent(14,1.258884);
   hdirt_stack_3->SetBinContent(15,2.301589);
   hdirt_stack_3->SetBinContent(16,2.075236);
   hdirt_stack_3->SetBinContent(17,1.990179);
   hdirt_stack_3->SetBinContent(18,2.465842);
   hdirt_stack_3->SetBinContent(19,1.535801);
   hdirt_stack_3->SetBinContent(20,3.989667);
   hdirt_stack_3->SetBinContent(21,0.7139341);
   hdirt_stack_3->SetBinContent(22,0.7395225);
   hdirt_stack_3->SetBinContent(23,1.171413);
   hdirt_stack_3->SetBinContent(24,0.9140499);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.6740478);
   hdirt_stack_3->SetBinError(3,0.7461006);
   hdirt_stack_3->SetBinError(4,0.8084276);
   hdirt_stack_3->SetBinError(5,0.704665);
   hdirt_stack_3->SetBinError(6,0.8092923);
   hdirt_stack_3->SetBinError(7,0.980006);
   hdirt_stack_3->SetBinError(8,1.134987);
   hdirt_stack_3->SetBinError(9,0.911245);
   hdirt_stack_3->SetBinError(10,0.8736422);
   hdirt_stack_3->SetBinError(11,1.348151);
   hdirt_stack_3->SetBinError(12,0.6453567);
   hdirt_stack_3->SetBinError(13,0.7175894);
   hdirt_stack_3->SetBinError(14,0.6121292);
   hdirt_stack_3->SetBinError(15,0.7715469);
   hdirt_stack_3->SetBinError(16,0.6967009);
   hdirt_stack_3->SetBinError(17,0.7860087);
   hdirt_stack_3->SetBinError(18,0.8052331);
   hdirt_stack_3->SetBinError(19,0.5522574);
   hdirt_stack_3->SetBinError(20,1.199467);
   hdirt_stack_3->SetBinError(21,0.3660028);
   hdirt_stack_3->SetBinError(22,0.3764025);
   hdirt_stack_3->SetBinError(23,0.5610561);
   hdirt_stack_3->SetBinError(24,0.4788161);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.625125);
   houtFV_stack_4->SetBinContent(2,7.875986);
   houtFV_stack_4->SetBinContent(3,13.93547);
   houtFV_stack_4->SetBinContent(4,18.04395);
   houtFV_stack_4->SetBinContent(5,23.88341);
   houtFV_stack_4->SetBinContent(6,24.93584);
   houtFV_stack_4->SetBinContent(7,23.25898);
   houtFV_stack_4->SetBinContent(8,22.70868);
   houtFV_stack_4->SetBinContent(9,18.46654);
   houtFV_stack_4->SetBinContent(10,18.96175);
   houtFV_stack_4->SetBinContent(11,16.68387);
   houtFV_stack_4->SetBinContent(12,16.72485);
   houtFV_stack_4->SetBinContent(13,16.25109);
   houtFV_stack_4->SetBinContent(14,14.02431);
   houtFV_stack_4->SetBinContent(15,14.32697);
   houtFV_stack_4->SetBinContent(16,13.19672);
   houtFV_stack_4->SetBinContent(17,15.73748);
   houtFV_stack_4->SetBinContent(18,15.16778);
   houtFV_stack_4->SetBinContent(19,16.93892);
   houtFV_stack_4->SetBinContent(20,14.88808);
   houtFV_stack_4->SetBinContent(21,17.22729);
   houtFV_stack_4->SetBinContent(22,9.400035);
   houtFV_stack_4->SetBinContent(23,6.886536);
   houtFV_stack_4->SetBinContent(24,6.591268);
   houtFV_stack_4->SetBinContent(25,1.383637);
   houtFV_stack_4->SetBinError(1,0.9594439);
   houtFV_stack_4->SetBinError(2,1.397507);
   houtFV_stack_4->SetBinError(3,1.782897);
   houtFV_stack_4->SetBinError(4,2.04592);
   houtFV_stack_4->SetBinError(5,2.493612);
   houtFV_stack_4->SetBinError(6,2.51685);
   houtFV_stack_4->SetBinError(7,2.417728);
   houtFV_stack_4->SetBinError(8,2.416462);
   houtFV_stack_4->SetBinError(9,2.158475);
   houtFV_stack_4->SetBinError(10,2.212587);
   houtFV_stack_4->SetBinError(11,2.095881);
   houtFV_stack_4->SetBinError(12,2.003291);
   houtFV_stack_4->SetBinError(13,2.035711);
   houtFV_stack_4->SetBinError(14,1.821547);
   houtFV_stack_4->SetBinError(15,1.865832);
   houtFV_stack_4->SetBinError(16,1.730368);
   houtFV_stack_4->SetBinError(17,2.028804);
   houtFV_stack_4->SetBinError(18,1.902461);
   houtFV_stack_4->SetBinError(19,2.047365);
   houtFV_stack_4->SetBinError(20,1.874895);
   houtFV_stack_4->SetBinError(21,2.122162);
   houtFV_stack_4->SetBinError(22,1.466093);
   houtFV_stack_4->SetBinError(23,1.268113);
   houtFV_stack_4->SetBinError(24,1.35177);
   houtFV_stack_4->SetBinError(25,0.6464258);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.721631);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.89879);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,8.290689);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.94761);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.2828);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.588017);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.759043);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.74757);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.573072);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.45759);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.077373);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.966026);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.534894);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.270944);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.702413);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.985282);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.175791);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.613208);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.507731);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.375337);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.209982);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.805567);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.856913);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.007673);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.456353);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6234093);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.129217);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.023633);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.159773);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.192379);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.10119);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9756035);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8209713);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.954389);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7061877);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8245746);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6180139);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5886417);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5424468);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5217253);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4971581);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5086866);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5798401);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.465554);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.469851);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4107667);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5332941);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4832491);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3571295);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2960178);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.07974695);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2799393);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8029675);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.271421);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.8495488);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.367926);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.233493);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.307989);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6667495);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.080958);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.104595);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.031169);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6076543);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.126205);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2402323);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9555762);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2988404);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4318601);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5661008);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5311694);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4194441);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5434358);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.06477489);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1214816);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04850399);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.09619941);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2663504);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3062729);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2461397);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3431246);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4017918);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.404123);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2040457);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2934276);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2937191);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2423824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2029468);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3666957);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06351583);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3155285);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1162901);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1796047);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2100971);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1860111);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1860073);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1900585);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0325411);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06045541);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.91656);
   hNCpi0inFVres_stack_7->SetBinContent(2,57.79335);
   hNCpi0inFVres_stack_7->SetBinContent(3,92.86442);
   hNCpi0inFVres_stack_7->SetBinContent(4,116.0948);
   hNCpi0inFVres_stack_7->SetBinContent(5,128.664);
   hNCpi0inFVres_stack_7->SetBinContent(6,131.3477);
   hNCpi0inFVres_stack_7->SetBinContent(7,133.1995);
   hNCpi0inFVres_stack_7->SetBinContent(8,130.8718);
   hNCpi0inFVres_stack_7->SetBinContent(9,121.8615);
   hNCpi0inFVres_stack_7->SetBinContent(10,116.5213);
   hNCpi0inFVres_stack_7->SetBinContent(11,104.8337);
   hNCpi0inFVres_stack_7->SetBinContent(12,98.88995);
   hNCpi0inFVres_stack_7->SetBinContent(13,93.90637);
   hNCpi0inFVres_stack_7->SetBinContent(14,84.4735);
   hNCpi0inFVres_stack_7->SetBinContent(15,77.963);
   hNCpi0inFVres_stack_7->SetBinContent(16,71.00282);
   hNCpi0inFVres_stack_7->SetBinContent(17,62.57633);
   hNCpi0inFVres_stack_7->SetBinContent(18,63.41714);
   hNCpi0inFVres_stack_7->SetBinContent(19,57.67899);
   hNCpi0inFVres_stack_7->SetBinContent(20,51.2257);
   hNCpi0inFVres_stack_7->SetBinContent(21,50.34962);
   hNCpi0inFVres_stack_7->SetBinContent(22,41.11773);
   hNCpi0inFVres_stack_7->SetBinContent(23,25.34567);
   hNCpi0inFVres_stack_7->SetBinContent(24,15.77164);
   hNCpi0inFVres_stack_7->SetBinContent(25,6.253243);
   hNCpi0inFVres_stack_7->SetBinError(1,1.369093);
   hNCpi0inFVres_stack_7->SetBinError(2,2.548353);
   hNCpi0inFVres_stack_7->SetBinError(3,3.331836);
   hNCpi0inFVres_stack_7->SetBinError(4,3.764641);
   hNCpi0inFVres_stack_7->SetBinError(5,3.715872);
   hNCpi0inFVres_stack_7->SetBinError(6,3.765089);
   hNCpi0inFVres_stack_7->SetBinError(7,3.777198);
   hNCpi0inFVres_stack_7->SetBinError(8,3.777333);
   hNCpi0inFVres_stack_7->SetBinError(9,3.543063);
   hNCpi0inFVres_stack_7->SetBinError(10,3.432134);
   hNCpi0inFVres_stack_7->SetBinError(11,3.215348);
   hNCpi0inFVres_stack_7->SetBinError(12,3.188806);
   hNCpi0inFVres_stack_7->SetBinError(13,3.08463);
   hNCpi0inFVres_stack_7->SetBinError(14,2.988258);
   hNCpi0inFVres_stack_7->SetBinError(15,2.997966);
   hNCpi0inFVres_stack_7->SetBinError(16,2.737088);
   hNCpi0inFVres_stack_7->SetBinError(17,2.440418);
   hNCpi0inFVres_stack_7->SetBinError(18,2.63709);
   hNCpi0inFVres_stack_7->SetBinError(19,2.466726);
   hNCpi0inFVres_stack_7->SetBinError(20,2.208641);
   hNCpi0inFVres_stack_7->SetBinError(21,2.327407);
   hNCpi0inFVres_stack_7->SetBinError(22,2.163595);
   hNCpi0inFVres_stack_7->SetBinError(23,1.672305);
   hNCpi0inFVres_stack_7->SetBinError(24,1.236436);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8805263);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.762609);
   hNCpi0inFVdis_stack_8->SetBinContent(2,17.57972);
   hNCpi0inFVdis_stack_8->SetBinContent(3,24.27715);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.74907);
   hNCpi0inFVdis_stack_8->SetBinContent(5,29.94862);
   hNCpi0inFVdis_stack_8->SetBinContent(6,32.94731);
   hNCpi0inFVdis_stack_8->SetBinContent(7,30.5898);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.12885);
   hNCpi0inFVdis_stack_8->SetBinContent(9,26.70957);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.21263);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.55203);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.96621);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.51012);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.51889);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.90514);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.8724);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.112676);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.02621);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.31078);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.326285);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.802519);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.320856);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.99672);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.072097);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.1815);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9188108);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.549359);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.819094);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.768574);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.000354);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.144155);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.96469);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.825228);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.812344);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.424635);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.355856);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.395841);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.350155);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.303625);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.232055);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.106668);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8655476);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9465275);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.141622);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.958257);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9278087);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.074001);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6397906);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5280829);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.241442);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.07778011);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1006257);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03683791);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1509076);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1026699);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02952655);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1839615);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04914823);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.0687679);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1303248);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02604834);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1127429);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.07066231);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02165026);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1352255);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,8.391732);
   hCCpi0inFV_stack_10->SetBinContent(2,27.36113);
   hCCpi0inFV_stack_10->SetBinContent(3,35.42148);
   hCCpi0inFV_stack_10->SetBinContent(4,46.04264);
   hCCpi0inFV_stack_10->SetBinContent(5,53.71246);
   hCCpi0inFV_stack_10->SetBinContent(6,52.343);
   hCCpi0inFV_stack_10->SetBinContent(7,48.82925);
   hCCpi0inFV_stack_10->SetBinContent(8,52.49828);
   hCCpi0inFV_stack_10->SetBinContent(9,48.88785);
   hCCpi0inFV_stack_10->SetBinContent(10,45.23104);
   hCCpi0inFV_stack_10->SetBinContent(11,41.09526);
   hCCpi0inFV_stack_10->SetBinContent(12,35.00822);
   hCCpi0inFV_stack_10->SetBinContent(13,29.16031);
   hCCpi0inFV_stack_10->SetBinContent(14,31.96875);
   hCCpi0inFV_stack_10->SetBinContent(15,32.88565);
   hCCpi0inFV_stack_10->SetBinContent(16,27.36008);
   hCCpi0inFV_stack_10->SetBinContent(17,28.3065);
   hCCpi0inFV_stack_10->SetBinContent(18,20.84736);
   hCCpi0inFV_stack_10->SetBinContent(19,28.95645);
   hCCpi0inFV_stack_10->SetBinContent(20,21.44924);
   hCCpi0inFV_stack_10->SetBinContent(21,19.53063);
   hCCpi0inFV_stack_10->SetBinContent(22,16.74728);
   hCCpi0inFV_stack_10->SetBinContent(23,14.7096);
   hCCpi0inFV_stack_10->SetBinContent(24,7.121387);
   hCCpi0inFV_stack_10->SetBinContent(25,2.055672);
   hCCpi0inFV_stack_10->SetBinError(1,1.447416);
   hCCpi0inFV_stack_10->SetBinError(2,2.660623);
   hCCpi0inFV_stack_10->SetBinError(3,2.945575);
   hCCpi0inFV_stack_10->SetBinError(4,3.397654);
   hCCpi0inFV_stack_10->SetBinError(5,3.677967);
   hCCpi0inFV_stack_10->SetBinError(6,3.579344);
   hCCpi0inFV_stack_10->SetBinError(7,3.46747);
   hCCpi0inFV_stack_10->SetBinError(8,3.62782);
   hCCpi0inFV_stack_10->SetBinError(9,3.524228);
   hCCpi0inFV_stack_10->SetBinError(10,3.402638);
   hCCpi0inFV_stack_10->SetBinError(11,3.186113);
   hCCpi0inFV_stack_10->SetBinError(12,2.971845);
   hCCpi0inFV_stack_10->SetBinError(13,2.680054);
   hCCpi0inFV_stack_10->SetBinError(14,2.852422);
   hCCpi0inFV_stack_10->SetBinError(15,2.907931);
   hCCpi0inFV_stack_10->SetBinError(16,2.638618);
   hCCpi0inFV_stack_10->SetBinError(17,2.628429);
   hCCpi0inFV_stack_10->SetBinError(18,2.288007);
   hCCpi0inFV_stack_10->SetBinError(19,2.759228);
   hCCpi0inFV_stack_10->SetBinError(20,2.301081);
   hCCpi0inFV_stack_10->SetBinError(21,2.161533);
   hCCpi0inFV_stack_10->SetBinError(22,2.076627);
   hCCpi0inFV_stack_10->SetBinError(23,1.902467);
   hCCpi0inFV_stack_10->SetBinError(24,1.379136);
   hCCpi0inFV_stack_10->SetBinError(25,0.7082781);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,5.75164);
   hNCinFV_stack_11->SetBinContent(2,17.98683);
   hNCinFV_stack_11->SetBinContent(3,24.33497);
   hNCinFV_stack_11->SetBinContent(4,30.3212);
   hNCinFV_stack_11->SetBinContent(5,28.932);
   hNCinFV_stack_11->SetBinContent(6,30.54332);
   hNCinFV_stack_11->SetBinContent(7,30.8783);
   hNCinFV_stack_11->SetBinContent(8,22.75219);
   hNCinFV_stack_11->SetBinContent(9,23.10194);
   hNCinFV_stack_11->SetBinContent(10,25.53302);
   hNCinFV_stack_11->SetBinContent(11,22.52247);
   hNCinFV_stack_11->SetBinContent(12,19.78288);
   hNCinFV_stack_11->SetBinContent(13,22.02238);
   hNCinFV_stack_11->SetBinContent(14,15.93529);
   hNCinFV_stack_11->SetBinContent(15,19.85409);
   hNCinFV_stack_11->SetBinContent(16,17.05678);
   hNCinFV_stack_11->SetBinContent(17,15.19506);
   hNCinFV_stack_11->SetBinContent(18,12.54872);
   hNCinFV_stack_11->SetBinContent(19,13.16815);
   hNCinFV_stack_11->SetBinContent(20,12.2142);
   hNCinFV_stack_11->SetBinContent(21,11.15884);
   hNCinFV_stack_11->SetBinContent(22,9.315563);
   hNCinFV_stack_11->SetBinContent(23,6.731358);
   hNCinFV_stack_11->SetBinContent(24,5.966409);
   hNCinFV_stack_11->SetBinContent(25,1.421707);
   hNCinFV_stack_11->SetBinError(1,1.482484);
   hNCinFV_stack_11->SetBinError(2,2.697097);
   hNCinFV_stack_11->SetBinError(3,2.671717);
   hNCinFV_stack_11->SetBinError(4,3.008148);
   hNCinFV_stack_11->SetBinError(5,2.888461);
   hNCinFV_stack_11->SetBinError(6,3.092842);
   hNCinFV_stack_11->SetBinError(7,3.147614);
   hNCinFV_stack_11->SetBinError(8,2.544392);
   hNCinFV_stack_11->SetBinError(9,2.584801);
   hNCinFV_stack_11->SetBinError(10,2.829998);
   hNCinFV_stack_11->SetBinError(11,2.469099);
   hNCinFV_stack_11->SetBinError(12,2.352904);
   hNCinFV_stack_11->SetBinError(13,2.39215);
   hNCinFV_stack_11->SetBinError(14,1.989886);
   hNCinFV_stack_11->SetBinError(15,2.461203);
   hNCinFV_stack_11->SetBinError(16,2.150004);
   hNCinFV_stack_11->SetBinError(17,2.020501);
   hNCinFV_stack_11->SetBinError(18,1.99285);
   hNCinFV_stack_11->SetBinError(19,2.047547);
   hNCinFV_stack_11->SetBinError(20,1.899219);
   hNCinFV_stack_11->SetBinError(21,1.812206);
   hNCinFV_stack_11->SetBinError(22,1.5113);
   hNCinFV_stack_11->SetBinError(23,1.332476);
   hNCinFV_stack_11->SetBinError(24,1.267018);
   hNCinFV_stack_11->SetBinError(25,0.5109504);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,3.605311);
   hnumuCCinFV_stack_12->SetBinContent(2,14.57683);
   hnumuCCinFV_stack_12->SetBinContent(3,20.84614);
   hnumuCCinFV_stack_12->SetBinContent(4,22.34222);
   hnumuCCinFV_stack_12->SetBinContent(5,27.1445);
   hnumuCCinFV_stack_12->SetBinContent(6,26.95584);
   hnumuCCinFV_stack_12->SetBinContent(7,24.31459);
   hnumuCCinFV_stack_12->SetBinContent(8,28.71531);
   hnumuCCinFV_stack_12->SetBinContent(9,24.46505);
   hnumuCCinFV_stack_12->SetBinContent(10,22.89886);
   hnumuCCinFV_stack_12->SetBinContent(11,25.52666);
   hnumuCCinFV_stack_12->SetBinContent(12,25.63638);
   hnumuCCinFV_stack_12->SetBinContent(13,28.175);
   hnumuCCinFV_stack_12->SetBinContent(14,18.44658);
   hnumuCCinFV_stack_12->SetBinContent(15,14.60329);
   hnumuCCinFV_stack_12->SetBinContent(16,22.1922);
   hnumuCCinFV_stack_12->SetBinContent(17,14.6072);
   hnumuCCinFV_stack_12->SetBinContent(18,11.65285);
   hnumuCCinFV_stack_12->SetBinContent(19,11.79016);
   hnumuCCinFV_stack_12->SetBinContent(20,10.97776);
   hnumuCCinFV_stack_12->SetBinContent(21,13.99723);
   hnumuCCinFV_stack_12->SetBinContent(22,9.111103);
   hnumuCCinFV_stack_12->SetBinContent(23,10.93364);
   hnumuCCinFV_stack_12->SetBinContent(24,4.856226);
   hnumuCCinFV_stack_12->SetBinContent(25,1.032864);
   hnumuCCinFV_stack_12->SetBinError(1,0.9594487);
   hnumuCCinFV_stack_12->SetBinError(2,1.93918);
   hnumuCCinFV_stack_12->SetBinError(3,2.560699);
   hnumuCCinFV_stack_12->SetBinError(4,2.732021);
   hnumuCCinFV_stack_12->SetBinError(5,3.182891);
   hnumuCCinFV_stack_12->SetBinError(6,3.558159);
   hnumuCCinFV_stack_12->SetBinError(7,2.766885);
   hnumuCCinFV_stack_12->SetBinError(8,2.917668);
   hnumuCCinFV_stack_12->SetBinError(9,2.797107);
   hnumuCCinFV_stack_12->SetBinError(10,2.996497);
   hnumuCCinFV_stack_12->SetBinError(11,3.066444);
   hnumuCCinFV_stack_12->SetBinError(12,2.87777);
   hnumuCCinFV_stack_12->SetBinError(13,3.090229);
   hnumuCCinFV_stack_12->SetBinError(14,2.547925);
   hnumuCCinFV_stack_12->SetBinError(15,1.98386);
   hnumuCCinFV_stack_12->SetBinError(16,2.926814);
   hnumuCCinFV_stack_12->SetBinError(17,2.017546);
   hnumuCCinFV_stack_12->SetBinError(18,2.4563);
   hnumuCCinFV_stack_12->SetBinError(19,1.91811);
   hnumuCCinFV_stack_12->SetBinError(20,1.742734);
   hnumuCCinFV_stack_12->SetBinError(21,2.113584);
   hnumuCCinFV_stack_12->SetBinError(22,1.586313);
   hnumuCCinFV_stack_12->SetBinError(23,1.974005);
   hnumuCCinFV_stack_12->SetBinError(24,1.086972);
   hnumuCCinFV_stack_12->SetBinError(25,0.4641952);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.540352);
   hnueCCinFV_stack_13->SetBinContent(2,3.910632);
   hnueCCinFV_stack_13->SetBinContent(3,3.943084);
   hnueCCinFV_stack_13->SetBinContent(4,3.311497);
   hnueCCinFV_stack_13->SetBinContent(5,1.676535);
   hnueCCinFV_stack_13->SetBinContent(6,3.134458);
   hnueCCinFV_stack_13->SetBinContent(7,2.477567);
   hnueCCinFV_stack_13->SetBinContent(8,2.527876);
   hnueCCinFV_stack_13->SetBinContent(9,0.8008012);
   hnueCCinFV_stack_13->SetBinContent(10,4.020818);
   hnueCCinFV_stack_13->SetBinContent(11,1.318913);
   hnueCCinFV_stack_13->SetBinContent(12,0.8592273);
   hnueCCinFV_stack_13->SetBinContent(13,0.8423215);
   hnueCCinFV_stack_13->SetBinContent(14,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(15,0.9920567);
   hnueCCinFV_stack_13->SetBinContent(16,1.399707);
   hnueCCinFV_stack_13->SetBinContent(17,1.204853);
   hnueCCinFV_stack_13->SetBinContent(18,0.791415);
   hnueCCinFV_stack_13->SetBinContent(19,1.467138);
   hnueCCinFV_stack_13->SetBinContent(20,1.415805);
   hnueCCinFV_stack_13->SetBinContent(21,1.1034);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.413985);
   hnueCCinFV_stack_13->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_13->SetBinError(1,0.7404628);
   hnueCCinFV_stack_13->SetBinError(2,1.3412);
   hnueCCinFV_stack_13->SetBinError(3,1.696529);
   hnueCCinFV_stack_13->SetBinError(4,1.044869);
   hnueCCinFV_stack_13->SetBinError(5,0.5950258);
   hnueCCinFV_stack_13->SetBinError(6,1.313317);
   hnueCCinFV_stack_13->SetBinError(7,0.83095);
   hnueCCinFV_stack_13->SetBinError(8,0.9296922);
   hnueCCinFV_stack_13->SetBinError(9,0.4940269);
   hnueCCinFV_stack_13->SetBinError(10,1.511796);
   hnueCCinFV_stack_13->SetBinError(11,0.6073901);
   hnueCCinFV_stack_13->SetBinError(12,0.5193443);
   hnueCCinFV_stack_13->SetBinError(13,0.4241184);
   hnueCCinFV_stack_13->SetBinError(14,0.48078);
   hnueCCinFV_stack_13->SetBinError(15,0.6100764);
   hnueCCinFV_stack_13->SetBinError(16,0.6455304);
   hnueCCinFV_stack_13->SetBinError(17,0.60745);
   hnueCCinFV_stack_13->SetBinError(18,0.6263902);
   hnueCCinFV_stack_13->SetBinError(19,0.7675731);
   hnueCCinFV_stack_13->SetBinError(20,0.6630982);
   hnueCCinFV_stack_13->SetBinError(21,0.4960539);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.6880142);
   hnueCCinFV_stack_13->SetBinError(24,0.3345885);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__5->SetBinContent(1,56.31681);
   hmcerror__5->SetBinContent(2,170.1322);
   hmcerror__5->SetBinContent(3,246.8702);
   hmcerror__5->SetBinContent(4,303.1065);
   hmcerror__5->SetBinContent(5,332.7975);
   hmcerror__5->SetBinContent(6,350.013);
   hmcerror__5->SetBinContent(7,331.9782);
   hmcerror__5->SetBinContent(8,329.6963);
   hmcerror__5->SetBinContent(9,322.389);
   hmcerror__5->SetBinContent(10,291.0172);
   hmcerror__5->SetBinContent(11,273.3239);
   hmcerror__5->SetBinContent(12,251.5651);
   hmcerror__5->SetBinContent(13,258.6927);
   hmcerror__5->SetBinContent(14,215.3709);
   hmcerror__5->SetBinContent(15,213.5916);
   hmcerror__5->SetBinContent(16,195.6122);
   hmcerror__5->SetBinContent(17,177.2937);
   hmcerror__5->SetBinContent(18,151.7567);
   hmcerror__5->SetBinContent(19,164.1803);
   hmcerror__5->SetBinContent(20,144.5344);
   hmcerror__5->SetBinContent(21,141.0948);
   hmcerror__5->SetBinContent(22,110.2145);
   hmcerror__5->SetBinContent(23,86.14325);
   hmcerror__5->SetBinContent(24,51.21608);
   hmcerror__5->SetBinContent(25,16.0442);
   hmcerror__5->SetBinError(1,18.17169);
   hmcerror__5->SetBinError(2,42.65498);
   hmcerror__5->SetBinError(3,77.73504);
   hmcerror__5->SetBinError(4,80.73051);
   hmcerror__5->SetBinError(5,89.34045);
   hmcerror__5->SetBinError(6,99.45784);
   hmcerror__5->SetBinError(7,92.25466);
   hmcerror__5->SetBinError(8,91.49972);
   hmcerror__5->SetBinError(9,91.33743);
   hmcerror__5->SetBinError(10,85.79916);
   hmcerror__5->SetBinError(11,81.33765);
   hmcerror__5->SetBinError(12,75.77604);
   hmcerror__5->SetBinError(13,78.48209);
   hmcerror__5->SetBinError(14,61.83252);
   hmcerror__5->SetBinError(15,62.71714);
   hmcerror__5->SetBinError(16,59.40187);
   hmcerror__5->SetBinError(17,53.89375);
   hmcerror__5->SetBinError(18,47.34594);
   hmcerror__5->SetBinError(19,49.19597);
   hmcerror__5->SetBinError(20,46.18244);
   hmcerror__5->SetBinError(21,45.80353);
   hmcerror__5->SetBinError(22,36.74714);
   hmcerror__5->SetBinError(23,25.61368);
   hmcerror__5->SetBinError(24,19.0524);
   hmcerror__5->SetBinError(25,8.833487);
   hmcerror__5->SetBinError(26,0.3895343);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
   55,
   156,
   257,
   306,
   350,
   313,
   317,
   294,
   274,
   263,
   257,
   238,
   247,
   201,
   203,
   189,
   177,
   152,
   152,
   138,
   149,
   123,
   88,
   51,
   24};
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
   7.546,
   12.49,
   16.03122,
   17.49286,
   18.70829,
   17.69181,
   17.80449,
   17.14643,
   16.55295,
   16.21727,
   16.03122,
   15.42725,
   15.71623,
   14.17745,
   14.24781,
   13.74773,
   13.30413,
   12.32883,
   12.32883,
   11.74734,
   12.20656,
   11.09054,
   9.5036,
   7.2725,
   5.0476};
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
   7.3425,
   12.49,
   16.03122,
   17.49286,
   18.70829,
   17.69181,
   17.80449,
   17.14643,
   16.55295,
   16.21727,
   16.03122,
   15.42725,
   15.71623,
   14.17745,
   14.24781,
   13.74773,
   13.30413,
   12.32883,
   12.32883,
   11.74734,
   12.20656,
   11.09054,
   9.3021,
   7.0686,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,3.465);
   Graph_Graph3005->SetMinimum(17.05716);
   Graph_Graph3005->SetMaximum(403.6839);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  99.8","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1951.9","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  406.4","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 445.0","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
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
   Double_t _fely3006[25] = {
   0.322669,
   0.2507167,
   0.3148823,
   0.2663437,
   0.2684529,
   0.2841547,
   0.2778937,
   0.2775273,
   0.2833144,
   0.2948251,
   0.2975871,
   0.3012184,
   0.3033797,
   0.2870979,
   0.2936312,
   0.3036716,
   0.30398,
   0.3119858,
   0.299646,
   0.3195256,
   0.3246295,
   0.3334149,
   0.2973382,
   0.3720004,
   0.550572};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0.322669,
   0.2507167,
   0.3148823,
   0.2663437,
   0.2684529,
   0.2841547,
   0.2778937,
   0.2775273,
   0.2833144,
   0.2948251,
   0.2975871,
   0.3012184,
   0.3033797,
   0.2870979,
   0.2936312,
   0.3036716,
   0.30398,
   0.3119858,
   0.299646,
   0.3195256,
   0.3246295,
   0.3334149,
   0.2973382,
   0.3720004,
   0.550572};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,3.465);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
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
   Double_t _fely3007[25] = {
   0.2355531,
   0.2162759,
   0.2405643,
   0.2398776,
   0.2470591,
   0.2544162,
   0.2622377,
   0.2617153,
   0.2640918,
   0.2778831,
   0.2816194,
   0.2800589,
   0.2805566,
   0.2671515,
   0.267258,
   0.2816135,
   0.268384,
   0.2817429,
   0.2735316,
   0.2747078,
   0.2629546,
   0.2600778,
   0.2497921,
   0.2564099,
   0.3204958};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0.2355531,
   0.2162759,
   0.2405643,
   0.2398776,
   0.2470591,
   0.2544162,
   0.2622377,
   0.2617153,
   0.2640918,
   0.2778831,
   0.2816194,
   0.2800589,
   0.2805566,
   0.2671515,
   0.267258,
   0.2816135,
   0.268384,
   0.2817429,
   0.2735316,
   0.2747078,
   0.2629546,
   0.2600778,
   0.2497921,
   0.2564099,
   0.3204958};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,3.465);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   0.9766178,
   0.9169341,
   1.041033,
   1.009546,
   1.051691,
   0.8942524,
   0.9548819,
   0.8917297,
   0.849905,
   0.9037267,
   0.9402764,
   0.9460771,
   0.954801,
   0.9332739,
   0.9504121,
   0.9661973,
   0.9983432,
   1.001603,
   0.9258116,
   0.95479,
   1.056028,
   1.116006,
   1.021554,
   0.9957809,
   1.495868};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0.133992,
   0.07341348,
   0.06493786,
   0.05771192,
   0.05621523,
   0.05054614,
   0.05363151,
   0.05200673,
   0.05134464,
   0.05572618,
   0.05865283,
   0.06132507,
   0.06075253,
   0.06582806,
   0.06670585,
   0.07028051,
   0.07504007,
   0.08124074,
   0.07509324,
   0.08127713,
   0.08651316,
   0.1006269,
   0.1103232,
   0.1419964,
   0.3146059};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.1303785,
   0.07341348,
   0.06493786,
   0.05771192,
   0.05621523,
   0.05054614,
   0.05363151,
   0.05200673,
   0.05134464,
   0.05572618,
   0.05865283,
   0.06132507,
   0.06075253,
   0.06582806,
   0.06670585,
   0.07028051,
   0.07504007,
   0.08124074,
   0.07509324,
   0.08127713,
   0.08651316,
   0.1006269,
   0.1079841,
   0.1380152,
   0.3014797};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,3.465);
   Graph_Graph3008->SetMinimum(0.6986816);
   Graph_Graph3008->SetMaximum(1.897226);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_theta_low_all",25,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
