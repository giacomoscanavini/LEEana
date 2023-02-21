#ifdef __CLING__
#pragma cling optimize(0)
#endif
void mass_FC_0p_run_all()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 20:45:12 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-6.26,451.2821,692.2242);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__1->SetBinContent(1,52.06102);
   hmc__1->SetBinContent(2,92.3545);
   hmc__1->SetBinContent(3,114.9968);
   hmc__1->SetBinContent(4,123.8965);
   hmc__1->SetBinContent(5,126.128);
   hmc__1->SetBinContent(6,133.8115);
   hmc__1->SetBinContent(7,139.6118);
   hmc__1->SetBinContent(8,145.3505);
   hmc__1->SetBinContent(9,175.4735);
   hmc__1->SetBinContent(10,222.0266);
   hmc__1->SetBinContent(11,253.6168);
   hmc__1->SetBinContent(12,277.1747);
   hmc__1->SetBinContent(13,260.2422);
   hmc__1->SetBinContent(14,184.1716);
   hmc__1->SetBinContent(15,111.5821);
   hmc__1->SetBinContent(16,73.83263);
   hmc__1->SetBinContent(17,57.24852);
   hmc__1->SetBinContent(18,42.11398);
   hmc__1->SetBinContent(19,38.81365);
   hmc__1->SetBinContent(20,34.5724);
   hmc__1->SetBinContent(21,33.17279);
   hmc__1->SetBinContent(22,22.54744);
   hmc__1->SetBinContent(23,23.30632);
   hmc__1->SetBinContent(24,21.86868);
   hmc__1->SetBinContent(25,15.39454);
   hmc__1->SetBinContent(26,14.75975);
   hmc__1->SetBinContent(27,17.23353);
   hmc__1->SetBinContent(28,10.73167);
   hmc__1->SetBinContent(29,11.79702);
   hmc__1->SetBinContent(30,12.717);
   hmc__1->SetBinContent(31,9.850346);
   hmc__1->SetBinContent(32,9.162044);
   hmc__1->SetBinContent(33,6.610992);
   hmc__1->SetBinContent(34,7.319677);
   hmc__1->SetBinContent(35,70.556);
   hmc__1->SetBinError(1,3.788261);
   hmc__1->SetBinError(2,5.015005);
   hmc__1->SetBinError(3,5.46784);
   hmc__1->SetBinError(4,5.479703);
   hmc__1->SetBinError(5,5.175892);
   hmc__1->SetBinError(6,5.498551);
   hmc__1->SetBinError(7,5.462504);
   hmc__1->SetBinError(8,5.61126);
   hmc__1->SetBinError(9,6.08809);
   hmc__1->SetBinError(10,6.485391);
   hmc__1->SetBinError(11,6.908944);
   hmc__1->SetBinError(12,7.271252);
   hmc__1->SetBinError(13,7.017723);
   hmc__1->SetBinError(14,5.917427);
   hmc__1->SetBinError(15,4.537121);
   hmc__1->SetBinError(16,3.717147);
   hmc__1->SetBinError(17,3.397828);
   hmc__1->SetBinError(18,2.798396);
   hmc__1->SetBinError(19,2.755096);
   hmc__1->SetBinError(20,2.619521);
   hmc__1->SetBinError(21,2.767641);
   hmc__1->SetBinError(22,2.038336);
   hmc__1->SetBinError(23,2.245894);
   hmc__1->SetBinError(24,2.319284);
   hmc__1->SetBinError(25,1.729605);
   hmc__1->SetBinError(26,1.682451);
   hmc__1->SetBinError(27,1.932383);
   hmc__1->SetBinError(28,1.399666);
   hmc__1->SetBinError(29,1.519501);
   hmc__1->SetBinError(30,1.674041);
   hmc__1->SetBinError(31,1.332732);
   hmc__1->SetBinError(32,1.310598);
   hmc__1->SetBinError(33,1.12245);
   hmc__1->SetBinError(34,1.126485);
   hmc__1->SetBinError(35,3.968903);
   hmc__1->SetMinimum(-6.26);
   hmc__1->SetMaximum(657.3);
   hmc__1->SetEntries(2916.026);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(42);
   hmc__1->GetYaxis()->SetTitleFont(42);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_1 = new TH1F("hs6_stack_1","",34,0,400);
   hs6_stack_1->SetMinimum(-1.150846e-08);
   hs6_stack_1->SetMaximum(291.0334);
   hs6_stack_1->SetDirectory(0);
   hs6_stack_1->SetStats(0);
   hs6_stack_1->SetLineWidth(2);
   hs6_stack_1->SetMarkerStyle(20);
   hs6_stack_1->GetXaxis()->SetNdivisions(509);
   hs6_stack_1->GetXaxis()->SetLabelFont(132);
   hs6_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_1->GetXaxis()->SetTitleFont(132);
   hs6_stack_1->GetYaxis()->SetNdivisions(509);
   hs6_stack_1->GetYaxis()->SetLabelFont(132);
   hs6_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_1->GetYaxis()->SetTitleFont(132);
   hs6_stack_1->GetZaxis()->SetLabelFont(132);
   hs6_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_1->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.703874);
   hbadmatch_stack_1->SetBinContent(2,3.581949);
   hbadmatch_stack_1->SetBinContent(3,4.332238);
   hbadmatch_stack_1->SetBinContent(4,3.401639);
   hbadmatch_stack_1->SetBinContent(5,3.899065);
   hbadmatch_stack_1->SetBinContent(6,4.734744);
   hbadmatch_stack_1->SetBinContent(7,5.873734);
   hbadmatch_stack_1->SetBinContent(8,3.954226);
   hbadmatch_stack_1->SetBinContent(9,4.349164);
   hbadmatch_stack_1->SetBinContent(10,4.239943);
   hbadmatch_stack_1->SetBinContent(11,2.400805);
   hbadmatch_stack_1->SetBinContent(12,6.758748);
   hbadmatch_stack_1->SetBinContent(13,3.697078);
   hbadmatch_stack_1->SetBinContent(14,4.920213);
   hbadmatch_stack_1->SetBinContent(15,2.790515);
   hbadmatch_stack_1->SetBinContent(16,1.020533);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.3998213);
   hbadmatch_stack_1->SetBinContent(33,0.3917402);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.8083349);
   hbadmatch_stack_1->SetBinError(2,1.038336);
   hbadmatch_stack_1->SetBinError(3,1.055447);
   hbadmatch_stack_1->SetBinError(4,0.9057346);
   hbadmatch_stack_1->SetBinError(5,0.9714721);
   hbadmatch_stack_1->SetBinError(6,1.132829);
   hbadmatch_stack_1->SetBinError(7,1.252529);
   hbadmatch_stack_1->SetBinError(8,1.255334);
   hbadmatch_stack_1->SetBinError(9,1.08746);
   hbadmatch_stack_1->SetBinError(10,1.060849);
   hbadmatch_stack_1->SetBinError(11,0.8407807);
   hbadmatch_stack_1->SetBinError(12,2.047352);
   hbadmatch_stack_1->SetBinError(13,1.066567);
   hbadmatch_stack_1->SetBinError(14,1.813357);
   hbadmatch_stack_1->SetBinError(15,0.972886);
   hbadmatch_stack_1->SetBinError(16,0.5892049);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.3998213);
   hbadmatch_stack_1->SetBinError(33,0.2770047);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1504;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,10.16768);
   hext_stack_2->SetBinContent(2,13.07731);
   hext_stack_2->SetBinContent(3,25.92678);
   hext_stack_2->SetBinContent(4,23.00998);
   hext_stack_2->SetBinContent(5,15.5528);
   hext_stack_2->SetBinContent(6,18.30521);
   hext_stack_2->SetBinContent(7,15.49655);
   hext_stack_2->SetBinContent(8,19.01025);
   hext_stack_2->SetBinContent(9,15.54562);
   hext_stack_2->SetBinContent(10,22.09146);
   hext_stack_2->SetBinContent(11,17.28011);
   hext_stack_2->SetBinContent(12,16.7566);
   hext_stack_2->SetBinContent(13,18.33992);
   hext_stack_2->SetBinContent(14,10.11584);
   hext_stack_2->SetBinContent(15,4.221574);
   hext_stack_2->SetBinContent(16,6.165187);
   hext_stack_2->SetBinContent(17,3.972198);
   hext_stack_2->SetBinContent(18,2.916804);
   hext_stack_2->SetBinContent(19,2.263601);
   hext_stack_2->SetBinContent(20,3.405605);
   hext_stack_2->SetBinContent(21,3.786253);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,1.544194);
   hext_stack_2->SetBinContent(24,3.62185);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,1.868591);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinContent(29,0.7309963);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(35,0.8131978);
   hext_stack_2->SetBinError(1,2.264322);
   hext_stack_2->SetBinError(2,2.571339);
   hext_stack_2->SetBinError(3,3.574356);
   hext_stack_2->SetBinError(4,3.390073);
   hext_stack_2->SetBinError(5,2.568601);
   hext_stack_2->SetBinError(6,2.78585);
   hext_stack_2->SetBinError(7,2.463563);
   hext_stack_2->SetBinError(8,2.915476);
   hext_stack_2->SetBinError(9,2.607473);
   hext_stack_2->SetBinError(10,3.146999);
   hext_stack_2->SetBinError(11,2.895207);
   hext_stack_2->SetBinError(12,2.650403);
   hext_stack_2->SetBinError(13,2.982136);
   hext_stack_2->SetBinError(14,2.175708);
   hext_stack_2->SetBinError(15,1.226034);
   hext_stack_2->SetBinError(16,1.571905);
   hext_stack_2->SetBinError(17,1.288106);
   hext_stack_2->SetBinError(18,1.132884);
   hext_stack_2->SetBinError(19,0.9684198);
   hext_stack_2->SetBinError(20,1.228348);
   hext_stack_2->SetBinError(21,1.463777);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,0.7753719);
   hext_stack_2->SetBinError(24,1.422134);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.840497);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetBinError(29,0.5201503);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(35,0.5750177);
   hext_stack_2->SetEntries(657);

   ci = 1505;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.252237);
   hdirt_stack_3->SetBinContent(2,2.671405);
   hdirt_stack_3->SetBinContent(3,1.840369);
   hdirt_stack_3->SetBinContent(4,3.056414);
   hdirt_stack_3->SetBinContent(5,3.635633);
   hdirt_stack_3->SetBinContent(6,1.619061);
   hdirt_stack_3->SetBinContent(7,2.789896);
   hdirt_stack_3->SetBinContent(8,2.455608);
   hdirt_stack_3->SetBinContent(9,2.477219);
   hdirt_stack_3->SetBinContent(10,1.104887);
   hdirt_stack_3->SetBinContent(11,3.722844);
   hdirt_stack_3->SetBinContent(12,2.178008);
   hdirt_stack_3->SetBinContent(13,2.57843);
   hdirt_stack_3->SetBinContent(14,0.8949713);
   hdirt_stack_3->SetBinContent(15,2.110102);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.9769442);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.5862043);
   hdirt_stack_3->SetBinError(2,0.9773925);
   hdirt_stack_3->SetBinError(3,0.7302451);
   hdirt_stack_3->SetBinError(4,0.9271274);
   hdirt_stack_3->SetBinError(5,0.9471577);
   hdirt_stack_3->SetBinError(6,0.6442253);
   hdirt_stack_3->SetBinError(7,0.7719639);
   hdirt_stack_3->SetBinError(8,0.8321032);
   hdirt_stack_3->SetBinError(9,1.234283);
   hdirt_stack_3->SetBinError(10,0.4592811);
   hdirt_stack_3->SetBinError(11,1.117017);
   hdirt_stack_3->SetBinError(12,0.8111669);
   hdirt_stack_3->SetBinError(13,0.7627341);
   hdirt_stack_3->SetBinError(14,0.495829);
   hdirt_stack_3->SetBinError(15,0.8275084);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(20,0.5042685);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(29,0.3381872);
   hdirt_stack_3->SetEntries(156);

   ci = 1506;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,8.843496);
   houtFV_stack_4->SetBinContent(2,11.46826);
   houtFV_stack_4->SetBinContent(3,15.60364);
   houtFV_stack_4->SetBinContent(4,13.61156);
   houtFV_stack_4->SetBinContent(5,14.84452);
   houtFV_stack_4->SetBinContent(6,17.38861);
   houtFV_stack_4->SetBinContent(7,16.60114);
   houtFV_stack_4->SetBinContent(8,16.89562);
   houtFV_stack_4->SetBinContent(9,19.84317);
   houtFV_stack_4->SetBinContent(10,24.72582);
   houtFV_stack_4->SetBinContent(11,21.06386);
   houtFV_stack_4->SetBinContent(12,22.83774);
   houtFV_stack_4->SetBinContent(13,24.8025);
   houtFV_stack_4->SetBinContent(14,18.12355);
   houtFV_stack_4->SetBinContent(15,9.424478);
   houtFV_stack_4->SetBinContent(16,5.138031);
   houtFV_stack_4->SetBinContent(17,5.354681);
   houtFV_stack_4->SetBinContent(18,3.962635);
   houtFV_stack_4->SetBinContent(19,4.801235);
   houtFV_stack_4->SetBinContent(20,3.572761);
   houtFV_stack_4->SetBinContent(21,3.127768);
   houtFV_stack_4->SetBinContent(22,2.640747);
   houtFV_stack_4->SetBinContent(23,2.87949);
   houtFV_stack_4->SetBinContent(24,1.072095);
   houtFV_stack_4->SetBinContent(25,1.858957);
   houtFV_stack_4->SetBinContent(26,0.7868615);
   houtFV_stack_4->SetBinContent(27,1.515398);
   houtFV_stack_4->SetBinContent(29,0.9685152);
   houtFV_stack_4->SetBinContent(30,0.5867651);
   houtFV_stack_4->SetBinContent(31,0.9269427);
   houtFV_stack_4->SetBinContent(32,0.9818863);
   houtFV_stack_4->SetBinContent(35,5.899061);
   houtFV_stack_4->SetBinError(1,1.558601);
   houtFV_stack_4->SetBinError(2,1.656701);
   houtFV_stack_4->SetBinError(3,2.004833);
   houtFV_stack_4->SetBinError(4,1.874905);
   houtFV_stack_4->SetBinError(5,1.925209);
   houtFV_stack_4->SetBinError(6,2.062095);
   houtFV_stack_4->SetBinError(7,1.989734);
   houtFV_stack_4->SetBinError(8,2.077461);
   houtFV_stack_4->SetBinError(9,2.229466);
   houtFV_stack_4->SetBinError(10,2.483871);
   houtFV_stack_4->SetBinError(11,2.287009);
   houtFV_stack_4->SetBinError(12,2.417965);
   houtFV_stack_4->SetBinError(13,2.505804);
   houtFV_stack_4->SetBinError(14,2.155107);
   houtFV_stack_4->SetBinError(15,1.499591);
   houtFV_stack_4->SetBinError(16,1.074477);
   houtFV_stack_4->SetBinError(17,1.1353);
   houtFV_stack_4->SetBinError(18,0.9929645);
   houtFV_stack_4->SetBinError(19,1.019855);
   houtFV_stack_4->SetBinError(20,0.9209972);
   houtFV_stack_4->SetBinError(21,0.8999062);
   houtFV_stack_4->SetBinError(22,0.784705);
   houtFV_stack_4->SetBinError(23,0.9000686);
   houtFV_stack_4->SetBinError(24,0.5551335);
   houtFV_stack_4->SetBinError(25,0.6804124);
   houtFV_stack_4->SetBinError(26,0.3934307);
   houtFV_stack_4->SetBinError(27,0.588146);
   houtFV_stack_4->SetBinError(29,0.4982929);
   houtFV_stack_4->SetBinError(30,0.3387718);
   houtFV_stack_4->SetBinError(31,0.4800908);
   houtFV_stack_4->SetBinError(32,0.4391155);
   houtFV_stack_4->SetBinError(35,1.302285);
   houtFV_stack_4->SetEntries(1301);

   ci = 1507;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.394176);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.621616);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.715358);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.872884);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.815252);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.437765);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.56548);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.711052);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.223373);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.081639);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.946548);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,10.82393);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.26259);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.125158);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.022529);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.203276);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.547294);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.9491041);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.074322);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.784944);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4051946);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5569579);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4079068);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5915798);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5264205);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4184252);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4930796);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6768331);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6078044);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8125468);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9104347);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.157889);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.050498);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8787471);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8197411);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4321533);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4185812);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3531893);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3674124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.4558939);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1508;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5437177);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.04659);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8652359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.69634);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1480721);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4086225);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2994136);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2814331);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.1994106);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1509;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,14.53414);
   hNCpi0inFVres_stack_7->SetBinContent(2,30.69013);
   hNCpi0inFVres_stack_7->SetBinContent(3,35.17242);
   hNCpi0inFVres_stack_7->SetBinContent(4,41.53812);
   hNCpi0inFVres_stack_7->SetBinContent(5,47.26237);
   hNCpi0inFVres_stack_7->SetBinContent(6,47.7942);
   hNCpi0inFVres_stack_7->SetBinContent(7,51.44034);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.10098);
   hNCpi0inFVres_stack_7->SetBinContent(9,72.07362);
   hNCpi0inFVres_stack_7->SetBinContent(10,95.53045);
   hNCpi0inFVres_stack_7->SetBinContent(11,117.284);
   hNCpi0inFVres_stack_7->SetBinContent(12,123.3449);
   hNCpi0inFVres_stack_7->SetBinContent(13,115.7127);
   hNCpi0inFVres_stack_7->SetBinContent(14,85.21643);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.43867);
   hNCpi0inFVres_stack_7->SetBinContent(16,30.1474);
   hNCpi0inFVres_stack_7->SetBinContent(17,21.07158);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.65943);
   hNCpi0inFVres_stack_7->SetBinContent(19,12.91027);
   hNCpi0inFVres_stack_7->SetBinContent(20,12.38566);
   hNCpi0inFVres_stack_7->SetBinContent(21,10.69338);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.696103);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.194903);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.935595);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.950774);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.167573);
   hNCpi0inFVres_stack_7->SetBinContent(27,6.192841);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.235416);
   hNCpi0inFVres_stack_7->SetBinContent(29,3.274437);
   hNCpi0inFVres_stack_7->SetBinContent(30,3.919138);
   hNCpi0inFVres_stack_7->SetBinContent(31,3.541988);
   hNCpi0inFVres_stack_7->SetBinContent(32,2.648516);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.721431);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.649684);
   hNCpi0inFVres_stack_7->SetBinContent(35,13.77152);
   hNCpi0inFVres_stack_7->SetBinError(1,1.278677);
   hNCpi0inFVres_stack_7->SetBinError(2,1.838526);
   hNCpi0inFVres_stack_7->SetBinError(3,1.962395);
   hNCpi0inFVres_stack_7->SetBinError(4,2.098045);
   hNCpi0inFVres_stack_7->SetBinError(5,2.286297);
   hNCpi0inFVres_stack_7->SetBinError(6,2.215626);
   hNCpi0inFVres_stack_7->SetBinError(7,2.349523);
   hNCpi0inFVres_stack_7->SetBinError(8,2.431527);
   hNCpi0inFVres_stack_7->SetBinError(9,2.76055);
   hNCpi0inFVres_stack_7->SetBinError(10,3.134351);
   hNCpi0inFVres_stack_7->SetBinError(11,3.514841);
   hNCpi0inFVres_stack_7->SetBinError(12,3.578916);
   hNCpi0inFVres_stack_7->SetBinError(13,3.515772);
   hNCpi0inFVres_stack_7->SetBinError(14,3.0593);
   hNCpi0inFVres_stack_7->SetBinError(15,2.301263);
   hNCpi0inFVres_stack_7->SetBinError(16,1.766697);
   hNCpi0inFVres_stack_7->SetBinError(17,1.569746);
   hNCpi0inFVres_stack_7->SetBinError(18,1.242657);
   hNCpi0inFVres_stack_7->SetBinError(19,1.15898);
   hNCpi0inFVres_stack_7->SetBinError(20,1.182282);
   hNCpi0inFVres_stack_7->SetBinError(21,1.072074);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8147788);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8377818);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9551509);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7026486);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6065224);
   hNCpi0inFVres_stack_7->SetBinError(27,0.918381);
   hNCpi0inFVres_stack_7->SetBinError(28,0.5721251);
   hNCpi0inFVres_stack_7->SetBinError(29,0.5267281);
   hNCpi0inFVres_stack_7->SetBinError(30,0.6718789);
   hNCpi0inFVres_stack_7->SetBinError(31,0.6441274);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5088766);
   hNCpi0inFVres_stack_7->SetBinError(33,0.6143871);
   hNCpi0inFVres_stack_7->SetBinError(34,0.586293);
   hNCpi0inFVres_stack_7->SetBinError(35,1.170176);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1510;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.882094);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.746432);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.552708);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.510022);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.652929);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.596466);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.008916);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.21833);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.54119);
   hNCpi0inFVdis_stack_8->SetBinContent(10,18.07397);
   hNCpi0inFVdis_stack_8->SetBinContent(11,23.35489);
   hNCpi0inFVdis_stack_8->SetBinContent(12,24.48916);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.03859);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.99341);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.672947);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.623117);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.184024);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.349423);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.261156);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.206188);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.630826);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.337208);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.184922);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.39484);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.267958);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.463426);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.646276);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.213158);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.850954);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.128458);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.031308);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.7529721);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.086276);
   hNCpi0inFVdis_stack_8->SetBinContent(35,5.019696);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4295942);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8285172);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8545329);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7984538);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8728955);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8797059);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9976372);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9806186);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.21545);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.434446);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.584491);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.61213);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.41958);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.295685);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9492919);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8039998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7059188);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6316183);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5795039);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5945874);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3805083);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2790014);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2933946);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.388188);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3192308);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3743209);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.4724547);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.3903545);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3098478);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3130755);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3482878);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3162714);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.3218618);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.7407153);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1511;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1512;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = 1513;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs6->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_11->SetBinContent(1,3.035868);
   hCCpi0inFV_stack_11->SetBinContent(2,8.06166);
   hCCpi0inFV_stack_11->SetBinContent(3,10.15326);
   hCCpi0inFV_stack_11->SetBinContent(4,11.28814);
   hCCpi0inFV_stack_11->SetBinContent(5,11.7236);
   hCCpi0inFV_stack_11->SetBinContent(6,11.88167);
   hCCpi0inFV_stack_11->SetBinContent(7,15.93148);
   hCCpi0inFV_stack_11->SetBinContent(8,16.91735);
   hCCpi0inFV_stack_11->SetBinContent(9,21.90155);
   hCCpi0inFV_stack_11->SetBinContent(10,28.40204);
   hCCpi0inFV_stack_11->SetBinContent(11,34.40849);
   hCCpi0inFV_stack_11->SetBinContent(12,43.78285);
   hCCpi0inFV_stack_11->SetBinContent(13,40.58952);
   hCCpi0inFV_stack_11->SetBinContent(14,24.04475);
   hCCpi0inFV_stack_11->SetBinContent(15,18.42582);
   hCCpi0inFV_stack_11->SetBinContent(16,10.51143);
   hCCpi0inFV_stack_11->SetBinContent(17,8.581441);
   hCCpi0inFV_stack_11->SetBinContent(18,6.35697);
   hCCpi0inFV_stack_11->SetBinContent(19,6.496117);
   hCCpi0inFV_stack_11->SetBinContent(20,3.321102);
   hCCpi0inFV_stack_11->SetBinContent(21,5.235003);
   hCCpi0inFV_stack_11->SetBinContent(22,3.714533);
   hCCpi0inFV_stack_11->SetBinContent(23,4.770331);
   hCCpi0inFV_stack_11->SetBinContent(24,2.932743);
   hCCpi0inFV_stack_11->SetBinContent(25,2.482678);
   hCCpi0inFV_stack_11->SetBinContent(26,2.498975);
   hCCpi0inFV_stack_11->SetBinContent(27,4.14661);
   hCCpi0inFV_stack_11->SetBinContent(28,2.789281);
   hCCpi0inFV_stack_11->SetBinContent(29,2.729266);
   hCCpi0inFV_stack_11->SetBinContent(30,2.653871);
   hCCpi0inFV_stack_11->SetBinContent(31,1.178602);
   hCCpi0inFV_stack_11->SetBinContent(32,1.322064);
   hCCpi0inFV_stack_11->SetBinContent(33,1.412273);
   hCCpi0inFV_stack_11->SetBinContent(34,1.712114);
   hCCpi0inFV_stack_11->SetBinContent(35,16.74332);
   hCCpi0inFV_stack_11->SetBinError(1,0.8329575);
   hCCpi0inFV_stack_11->SetBinError(2,1.408523);
   hCCpi0inFV_stack_11->SetBinError(3,1.605509);
   hCCpi0inFV_stack_11->SetBinError(4,1.628758);
   hCCpi0inFV_stack_11->SetBinError(5,1.698797);
   hCCpi0inFV_stack_11->SetBinError(6,1.664412);
   hCCpi0inFV_stack_11->SetBinError(7,1.96726);
   hCCpi0inFV_stack_11->SetBinError(8,2.144694);
   hCCpi0inFV_stack_11->SetBinError(9,2.323497);
   hCCpi0inFV_stack_11->SetBinError(10,2.625437);
   hCCpi0inFV_stack_11->SetBinError(11,2.96499);
   hCCpi0inFV_stack_11->SetBinError(12,3.286982);
   hCCpi0inFV_stack_11->SetBinError(13,3.220098);
   hCCpi0inFV_stack_11->SetBinError(14,2.411422);
   hCCpi0inFV_stack_11->SetBinError(15,2.131816);
   hCCpi0inFV_stack_11->SetBinError(16,1.581783);
   hCCpi0inFV_stack_11->SetBinError(17,1.459591);
   hCCpi0inFV_stack_11->SetBinError(18,1.241379);
   hCCpi0inFV_stack_11->SetBinError(19,1.326219);
   hCCpi0inFV_stack_11->SetBinError(20,0.9204367);
   hCCpi0inFV_stack_11->SetBinError(21,1.128051);
   hCCpi0inFV_stack_11->SetBinError(22,0.9615599);
   hCCpi0inFV_stack_11->SetBinError(23,1.19364);
   hCCpi0inFV_stack_11->SetBinError(24,0.8785195);
   hCCpi0inFV_stack_11->SetBinError(25,0.8552222);
   hCCpi0inFV_stack_11->SetBinError(26,0.7344388);
   hCCpi0inFV_stack_11->SetBinError(27,1.075328);
   hCCpi0inFV_stack_11->SetBinError(28,0.8335302);
   hCCpi0inFV_stack_11->SetBinError(29,0.854664);
   hCCpi0inFV_stack_11->SetBinError(30,0.8392677);
   hCCpi0inFV_stack_11->SetBinError(31,0.4811646);
   hCCpi0inFV_stack_11->SetBinError(32,0.5554667);
   hCCpi0inFV_stack_11->SetBinError(33,0.6510715);
   hCCpi0inFV_stack_11->SetBinError(34,0.6201715);
   hCCpi0inFV_stack_11->SetBinError(35,2.042709);
   hCCpi0inFV_stack_11->SetEntries(1685);

   ci = 1514;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs6->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_12->SetBinContent(1,4.53835);
   hNCinFV_stack_12->SetBinContent(2,4.639785);
   hNCinFV_stack_12->SetBinContent(3,5.473138);
   hNCinFV_stack_12->SetBinContent(4,9.371469);
   hNCinFV_stack_12->SetBinContent(5,10.45033);
   hNCinFV_stack_12->SetBinContent(6,9.906672);
   hNCinFV_stack_12->SetBinContent(7,9.623129);
   hNCinFV_stack_12->SetBinContent(8,7.861143);
   hNCinFV_stack_12->SetBinContent(9,10.89532);
   hNCinFV_stack_12->SetBinContent(10,8.960761);
   hNCinFV_stack_12->SetBinContent(11,13.58425);
   hNCinFV_stack_12->SetBinContent(12,14.00957);
   hNCinFV_stack_12->SetBinContent(13,12.79969);
   hNCinFV_stack_12->SetBinContent(14,7.969339);
   hNCinFV_stack_12->SetBinContent(15,6.643895);
   hNCinFV_stack_12->SetBinContent(16,5.862105);
   hNCinFV_stack_12->SetBinContent(17,5.700779);
   hNCinFV_stack_12->SetBinContent(18,2.889025);
   hNCinFV_stack_12->SetBinContent(19,4.159526);
   hNCinFV_stack_12->SetBinContent(20,2.442341);
   hNCinFV_stack_12->SetBinContent(21,3.902796);
   hNCinFV_stack_12->SetBinContent(22,2.052291);
   hNCinFV_stack_12->SetBinContent(23,2.445722);
   hNCinFV_stack_12->SetBinContent(24,2.7859);
   hNCinFV_stack_12->SetBinContent(25,1.123658);
   hNCinFV_stack_12->SetBinContent(26,1.513708);
   hNCinFV_stack_12->SetBinContent(27,0.9286332);
   hNCinFV_stack_12->SetBinContent(28,1.710423);
   hNCinFV_stack_12->SetBinContent(29,1.715495);
   hNCinFV_stack_12->SetBinContent(30,2.484368);
   hNCinFV_stack_12->SetBinContent(31,1.323754);
   hNCinFV_stack_12->SetBinContent(32,2.397541);
   hNCinFV_stack_12->SetBinContent(33,0.3934307);
   hNCinFV_stack_12->SetBinContent(34,1.127039);
   hNCinFV_stack_12->SetBinContent(35,14.27137);
   hNCinFV_stack_12->SetBinError(1,1.110434);
   hNCinFV_stack_12->SetBinError(2,1.074441);
   hNCinFV_stack_12->SetBinError(3,1.126159);
   hNCinFV_stack_12->SetBinError(4,1.557196);
   hNCinFV_stack_12->SetBinError(5,1.653989);
   hNCinFV_stack_12->SetBinError(6,1.605806);
   hNCinFV_stack_12->SetBinError(7,1.557527);
   hNCinFV_stack_12->SetBinError(8,1.442543);
   hNCinFV_stack_12->SetBinError(9,1.665558);
   hNCinFV_stack_12->SetBinError(10,1.415311);
   hNCinFV_stack_12->SetBinError(11,1.830173);
   hNCinFV_stack_12->SetBinError(12,1.891724);
   hNCinFV_stack_12->SetBinError(13,1.842291);
   hNCinFV_stack_12->SetBinError(14,1.415958);
   hNCinFV_stack_12->SetBinError(15,1.301948);
   hNCinFV_stack_12->SetBinError(16,1.241881);
   hNCinFV_stack_12->SetBinError(17,1.232375);
   hNCinFV_stack_12->SetBinError(18,0.7845188);
   hNCinFV_stack_12->SetBinError(19,0.9813267);
   hNCinFV_stack_12->SetBinError(20,0.759212);
   hNCinFV_stack_12->SetBinError(21,0.9797873);
   hNCinFV_stack_12->SetBinError(22,0.7073425);
   hNCinFV_stack_12->SetBinError(23,0.7600838);
   hNCinFV_stack_12->SetBinError(24,0.8327353);
   hNCinFV_stack_12->SetBinError(25,0.5188295);
   hNCinFV_stack_12->SetBinError(26,0.5875827);
   hNCinFV_stack_12->SetBinError(27,0.48078);
   hNCinFV_stack_12->SetBinError(28,0.6196373);
   hNCinFV_stack_12->SetBinError(29,0.6212384);
   hNCinFV_stack_12->SetBinError(30,0.8556093);
   hNCinFV_stack_12->SetBinError(31,0.5560625);
   hNCinFV_stack_12->SetBinError(32,0.7861558);
   hNCinFV_stack_12->SetBinError(33,0.2781975);
   hNCinFV_stack_12->SetBinError(34,0.5201044);
   hNCinFV_stack_12->SetBinError(35,1.893046);
   hNCinFV_stack_12->SetEntries(844);

   ci = 1515;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs6->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_13->SetBinContent(1,2.269012);
   hnumuCCinFV_stack_13->SetBinContent(2,6.77667);
   hnumuCCinFV_stack_13->SetBinContent(3,5.71308);
   hnumuCCinFV_stack_13->SetBinContent(4,7.609606);
   hnumuCCinFV_stack_13->SetBinContent(5,7.059629);
   hnumuCCinFV_stack_13->SetBinContent(6,9.091289);
   hnumuCCinFV_stack_13->SetBinContent(7,9.821354);
   hnumuCCinFV_stack_13->SetBinContent(8,7.7837);
   hnumuCCinFV_stack_13->SetBinContent(9,9.6173);
   hnumuCCinFV_stack_13->SetBinContent(10,10.22833);
   hnumuCCinFV_stack_13->SetBinContent(11,10.09144);
   hnumuCCinFV_stack_13->SetBinContent(12,10.41201);
   hnumuCCinFV_stack_13->SetBinContent(13,9.925383);
   hnumuCCinFV_stack_13->SetBinContent(14,8.53457);
   hnumuCCinFV_stack_13->SetBinContent(15,5.344304);
   hnumuCCinFV_stack_13->SetBinContent(16,5.314897);
   hnumuCCinFV_stack_13->SetBinContent(17,4.25038);
   hnumuCCinFV_stack_13->SetBinContent(18,3.71137);
   hnumuCCinFV_stack_13->SetBinContent(19,3.539103);
   hnumuCCinFV_stack_13->SetBinContent(20,3.358512);
   hnumuCCinFV_stack_13->SetBinContent(21,2.209657);
   hnumuCCinFV_stack_13->SetBinContent(22,2.926758);
   hnumuCCinFV_stack_13->SetBinContent(23,1.372726);
   hnumuCCinFV_stack_13->SetBinContent(24,1.860943);
   hnumuCCinFV_stack_13->SetBinContent(25,2.592268);
   hnumuCCinFV_stack_13->SetBinContent(26,1.517089);
   hnumuCCinFV_stack_13->SetBinContent(27,1.467217);
   hnumuCCinFV_stack_13->SetBinContent(28,0.9855721);
   hnumuCCinFV_stack_13->SetBinContent(29,0.5901461);
   hnumuCCinFV_stack_13->SetBinContent(30,1.163287);
   hnumuCCinFV_stack_13->SetBinContent(31,1.186711);
   hnumuCCinFV_stack_13->SetBinContent(32,0.8286846);
   hnumuCCinFV_stack_13->SetBinContent(33,0.7302274);
   hnumuCCinFV_stack_13->SetBinContent(34,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(35,8.793794);
   hnumuCCinFV_stack_13->SetBinError(1,0.7911787);
   hnumuCCinFV_stack_13->SetBinError(2,1.895335);
   hnumuCCinFV_stack_13->SetBinError(3,1.435516);
   hnumuCCinFV_stack_13->SetBinError(4,1.467316);
   hnumuCCinFV_stack_13->SetBinError(5,1.589007);
   hnumuCCinFV_stack_13->SetBinError(6,1.801881);
   hnumuCCinFV_stack_13->SetBinError(7,2.130531);
   hnumuCCinFV_stack_13->SetBinError(8,1.422652);
   hnumuCCinFV_stack_13->SetBinError(9,2.177227);
   hnumuCCinFV_stack_13->SetBinError(10,1.696682);
   hnumuCCinFV_stack_13->SetBinError(11,1.92767);
   hnumuCCinFV_stack_13->SetBinError(12,1.913668);
   hnumuCCinFV_stack_13->SetBinError(13,1.693671);
   hnumuCCinFV_stack_13->SetBinError(14,1.505753);
   hnumuCCinFV_stack_13->SetBinError(15,1.303415);
   hnumuCCinFV_stack_13->SetBinError(16,1.221625);
   hnumuCCinFV_stack_13->SetBinError(17,1.069394);
   hnumuCCinFV_stack_13->SetBinError(18,1.023121);
   hnumuCCinFV_stack_13->SetBinError(19,1.017298);
   hnumuCCinFV_stack_13->SetBinError(20,0.8887388);
   hnumuCCinFV_stack_13->SetBinError(21,0.8083199);
   hnumuCCinFV_stack_13->SetBinError(22,0.9196968);
   hnumuCCinFV_stack_13->SetBinError(23,0.5753622);
   hnumuCCinFV_stack_13->SetBinError(24,0.7113715);
   hnumuCCinFV_stack_13->SetBinError(25,0.847057);
   hnumuCCinFV_stack_13->SetBinError(26,0.5887087);
   hnumuCCinFV_stack_13->SetBinError(27,0.6214735);
   hnumuCCinFV_stack_13->SetBinError(28,0.5219698);
   hnumuCCinFV_stack_13->SetBinError(29,0.340721);
   hnumuCCinFV_stack_13->SetBinError(30,0.5349878);
   hnumuCCinFV_stack_13->SetBinError(31,0.545478);
   hnumuCCinFV_stack_13->SetBinError(32,0.4164732);
   hnumuCCinFV_stack_13->SetBinError(33,0.4379386);
   hnumuCCinFV_stack_13->SetBinError(34,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(35,1.475347);
   hnumuCCinFV_stack_13->SetEntries(662);

   ci = 1516;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs6->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_14->SetBinContent(1,2.356388);
   hnueCCinFV_stack_14->SetBinContent(2,2.712214);
   hnueCCinFV_stack_14->SetBinContent(3,2.430127);
   hnueCCinFV_stack_14->SetBinContent(4,1.487184);
   hnueCCinFV_stack_14->SetBinContent(5,0.785171);
   hnueCCinFV_stack_14->SetBinContent(6,2.470408);
   hnueCCinFV_stack_14->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(8,1.289128);
   hnueCCinFV_stack_14->SetBinContent(9,0.7549087);
   hnueCCinFV_stack_14->SetBinContent(10,0.8479808);
   hnueCCinFV_stack_14->SetBinContent(11,1.712425);
   hnueCCinFV_stack_14->SetBinContent(12,1.209602);
   hnueCCinFV_stack_14->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(15,0.7908806);
   hnueCCinFV_stack_14->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_14->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_14->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_14->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_14->SetBinContent(23,1.091422);
   hnueCCinFV_stack_14->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_14->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_14->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_14->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_14->SetBinContent(35,3.011116);
   hnueCCinFV_stack_14->SetBinError(1,1.121856);
   hnueCCinFV_stack_14->SetBinError(2,1.616045);
   hnueCCinFV_stack_14->SetBinError(3,0.8933854);
   hnueCCinFV_stack_14->SetBinError(4,0.845849);
   hnueCCinFV_stack_14->SetBinError(5,0.3925882);
   hnueCCinFV_stack_14->SetBinError(6,1.416448);
   hnueCCinFV_stack_14->SetBinError(7,0.1950249);
   hnueCCinFV_stack_14->SetBinError(8,0.5953858);
   hnueCCinFV_stack_14->SetBinError(9,0.4493869);
   hnueCCinFV_stack_14->SetBinError(10,0.4909786);
   hnueCCinFV_stack_14->SetBinError(11,0.7450527);
   hnueCCinFV_stack_14->SetBinError(12,0.5781583);
   hnueCCinFV_stack_14->SetBinError(13,0.2781975);
   hnueCCinFV_stack_14->SetBinError(14,0.3401776);
   hnueCCinFV_stack_14->SetBinError(15,0.5616999);
   hnueCCinFV_stack_14->SetBinError(16,0.5866007);
   hnueCCinFV_stack_14->SetBinError(17,0.4715374);
   hnueCCinFV_stack_14->SetBinError(18,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.2998007);
   hnueCCinFV_stack_14->SetBinError(21,0.2781615);
   hnueCCinFV_stack_14->SetBinError(23,0.6451021);
   hnueCCinFV_stack_14->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_14->SetBinError(26,0.1967154);
   hnueCCinFV_stack_14->SetBinError(27,0.3041673);
   hnueCCinFV_stack_14->SetBinError(28,0.2781975);
   hnueCCinFV_stack_14->SetBinError(31,0.3963213);
   hnueCCinFV_stack_14->SetBinError(32,0.3345885);
   hnueCCinFV_stack_14->SetBinError(35,1.260316);
   hnueCCinFV_stack_14->SetEntries(97);

   ci = 1517;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs6->Add(hnueCCinFV_stack_14,"");
   hs6->Draw("hist same");
   
   Double_t _fx3001[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3001[34] = {
   66,
   96,
   106,
   102,
   131,
   125,
   153,
   172,
   160,
   228,
   252,
   313,
   277,
   151,
   115,
   67,
   52,
   41,
   37,
   28,
   22,
   27,
   27,
   17,
   12,
   16,
   15,
   10,
   14,
   8,
   10,
   13,
   9,
   2};
   Double_t _felx3001[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3001[34] = {
   8.124038,
   9.797959,
   10.29563,
   10.0995,
   11.44552,
   11.18034,
   12.36932,
   13.11488,
   12.64911,
   15.09967,
   15.87451,
   17.69181,
   16.64332,
   12.28821,
   10.72381,
   8.185353,
   7.211103,
   6.403124,
   6.082763,
   5.291503,
   4.690416,
   5.196152,
   5.196152,
   4.123106,
   3.464102,
   4,
   3.872983,
   3.162278,
   3.741657,
   2.828427,
   3.162278,
   3.605551,
   3,
   1.414214};
   Double_t _fehx3001[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3001[34] = {
   8.124038,
   9.797959,
   10.29563,
   10.0995,
   11.44552,
   11.18034,
   12.36932,
   13.11488,
   12.64911,
   15.09967,
   15.87451,
   17.69181,
   16.64332,
   12.28821,
   10.72381,
   8.185353,
   7.211103,
   6.403124,
   6.082763,
   5.291503,
   4.690416,
   5.196152,
   5.196152,
   4.123106,
   3.464102,
   4,
   3.872983,
   3.162278,
   3.741657,
   2.828427,
   3.162278,
   3.605551,
   3,
   1.414214};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(0.5272078);
   Graph_Graph3001->SetMaximum(363.7024);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00","h");
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
   entry=leg->AddEntry("","BNB Data, 2874.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.0","F");

   ci = 1504;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 277.5","F");

   ci = 1505;
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

   ci = 1506;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 296.3","F");

   ci = 1507;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  85.5","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.4","F");

   ci = 1509;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1144.1","F");

   ci = 1510;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  216.2","F");

   ci = 1511;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

   ci = 1512;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1513;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 375.4","F");

   ci = 1514;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 183.7","F");

   ci = 1515;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 160.2","F");

   ci = 1516;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 24.9","F");

   ci = 1517;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3002[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3002[34] = {
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
   Double_t _felx3002[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3002[34] = {
   0.07276579,
   0.05430169,
   0.04754775,
   0.04422806,
   0.04103681,
   0.04109177,
   0.03912639,
   0.03860502,
   0.0346952,
   0.02920997,
   0.02724167,
   0.02623346,
   0.02696612,
   0.03212997,
   0.04066174,
   0.05034559,
   0.05935224,
   0.06644815,
   0.07098267,
   0.07576914,
   0.08343105,
   0.0904021,
   0.09636415,
   0.106055,
   0.1123518,
   0.1139891,
   0.1121293,
   0.1304239,
   0.1288038,
   0.131638,
   0.135298,
   0.1430465,
   0.1697854,
   0.1538982};
   Double_t _fehx3002[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3002[34] = {
   0.07276579,
   0.05430169,
   0.04754775,
   0.04422806,
   0.04103681,
   0.04109177,
   0.03912639,
   0.03860502,
   0.0346952,
   0.02920997,
   0.02724167,
   0.02623346,
   0.02696612,
   0.03212997,
   0.04066174,
   0.05034559,
   0.05935224,
   0.06644815,
   0.07098267,
   0.07576914,
   0.08343105,
   0.0904021,
   0.09636415,
   0.106055,
   0.1123518,
   0.1139891,
   0.1121293,
   0.1304239,
   0.1288038,
   0.131638,
   0.135298,
   0.1430465,
   0.1697854,
   0.1538982};
   grae = new TGraphAsymmErrors(34,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#cccccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Reco #pi^{0} mass [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(509);
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
   
   Double_t _fx3003[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3003[34] = {
   1.267743,
   1.039473,
   0.9217646,
   0.8232677,
   1.038627,
   0.93415,
   1.095896,
   1.183346,
   0.9118184,
   1.026904,
   0.9936251,
   1.129252,
   1.064393,
   0.8198877,
   1.030632,
   0.9074578,
   0.9083205,
   0.9735484,
   0.9532728,
   0.8098946,
   0.6631941,
   1.197475,
   1.158484,
   0.7773673,
   0.7794972,
   1.084029,
   0.8703964,
   0.9318217,
   1.18674,
   0.6290791,
   1.015193,
   1.418897,
   1.361369,
   0.2732361};
   Double_t _felx3003[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3003[34] = {
   0.1560484,
   0.1060908,
   0.08952969,
   0.08151565,
   0.09074527,
   0.08355291,
   0.08859796,
   0.09022932,
   0.07208557,
   0.06800837,
   0.0625925,
   0.06382908,
   0.06395319,
   0.06672152,
   0.09610689,
   0.1108636,
   0.1259614,
   0.1520427,
   0.1567171,
   0.1530557,
   0.1413934,
   0.2304542,
   0.2229504,
   0.1885393,
   0.2250214,
   0.2710073,
   0.2247354,
   0.2946679,
   0.3171697,
   0.222413,
   0.3210322,
   0.3935313,
   0.4537897,
   0.1932071};
   Double_t _fehx3003[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3003[34] = {
   0.1560484,
   0.1060908,
   0.08952969,
   0.08151565,
   0.09074527,
   0.08355291,
   0.08859796,
   0.09022932,
   0.07208557,
   0.06800837,
   0.0625925,
   0.06382908,
   0.06395319,
   0.06672152,
   0.09610689,
   0.1108636,
   0.1259614,
   0.1520427,
   0.1567171,
   0.1530557,
   0.1413934,
   0.2304542,
   0.2229504,
   0.1885393,
   0.2250214,
   0.2710073,
   0.2247354,
   0.2946679,
   0.3171697,
   0.222413,
   0.3210322,
   0.3935313,
   0.4537897,
   0.1932071};
   grae = new TGraphAsymmErrors(34,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
   Graph_Graph3003->SetMinimum(0.0720261);
   Graph_Graph3003->SetMaximum(1.988672);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
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
   
   grae->Draw("p ");
   
   TH1F *hist__2 = new TH1F("hist__2","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__2->SetLineColor(ci);
   hist__2->GetXaxis()->SetLabelFont(42);
   hist__2->GetXaxis()->SetTitleOffset(1);
   hist__2->GetXaxis()->SetTitleFont(42);
   hist__2->GetYaxis()->SetLabelFont(42);
   hist__2->GetYaxis()->SetTitleFont(42);
   hist__2->GetZaxis()->SetLabelFont(42);
   hist__2->GetZaxis()->SetTitleOffset(1);
   hist__2->GetZaxis()->SetTitleFont(42);
   hist__2->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.15,0.75,0.7,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred stat. uncertainty (Bayesian)","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","Data stat. uncertainty (Bayesian)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   leg->Draw();
   pad2->Modified();
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
