#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 23:09:34 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-2.352114,3.553846,260.0943);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__7->SetBinContent(1,16.76257);
   hmc__7->SetBinContent(2,59.24875);
   hmc__7->SetBinContent(3,88.63434);
   hmc__7->SetBinContent(4,112.3202);
   hmc__7->SetBinContent(5,117.6057);
   hmc__7->SetBinContent(6,110.5392);
   hmc__7->SetBinContent(7,110.4298);
   hmc__7->SetBinContent(8,108.9508);
   hmc__7->SetBinContent(9,91.67704);
   hmc__7->SetBinContent(10,89.45216);
   hmc__7->SetBinContent(11,76.96946);
   hmc__7->SetBinContent(12,72.96042);
   hmc__7->SetBinContent(13,71.01992);
   hmc__7->SetBinContent(14,49.91132);
   hmc__7->SetBinContent(15,51.52271);
   hmc__7->SetBinContent(16,56.92336);
   hmc__7->SetBinContent(17,50.1385);
   hmc__7->SetBinContent(18,38.95652);
   hmc__7->SetBinContent(19,37.73904);
   hmc__7->SetBinContent(20,39.56911);
   hmc__7->SetBinContent(21,38.76105);
   hmc__7->SetBinContent(22,41.70678);
   hmc__7->SetBinContent(23,30.32564);
   hmc__7->SetBinContent(24,24.47259);
   hmc__7->SetBinContent(25,7.556494);
   hmc__7->SetBinError(1,8.936612);
   hmc__7->SetBinError(2,19.57187);
   hmc__7->SetBinError(3,23.57765);
   hmc__7->SetBinError(4,31.11478);
   hmc__7->SetBinError(5,29.24913);
   hmc__7->SetBinError(6,31.1766);
   hmc__7->SetBinError(7,30.35115);
   hmc__7->SetBinError(8,32.62348);
   hmc__7->SetBinError(9,32.30069);
   hmc__7->SetBinError(10,27.75839);
   hmc__7->SetBinError(11,24.98462);
   hmc__7->SetBinError(12,23.59651);
   hmc__7->SetBinError(13,22.83356);
   hmc__7->SetBinError(14,17.6163);
   hmc__7->SetBinError(15,20.59856);
   hmc__7->SetBinError(16,18.20117);
   hmc__7->SetBinError(17,26.48962);
   hmc__7->SetBinError(18,16.12683);
   hmc__7->SetBinError(19,14.13557);
   hmc__7->SetBinError(20,14.99954);
   hmc__7->SetBinError(21,15.94316);
   hmc__7->SetBinError(22,19.26374);
   hmc__7->SetBinError(23,21.55047);
   hmc__7->SetBinError(24,12.0459);
   hmc__7->SetBinError(25,9.465492);
   hmc__7->SetBinError(26,0.3895343);
   hmc__7->SetMinimum(-2.352114);
   hmc__7->SetMaximum(246.972);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,3.15);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(123.486);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,1.579702);
   hbadmatch_stack_1->SetBinContent(3,4.360054);
   hbadmatch_stack_1->SetBinContent(4,2.840025);
   hbadmatch_stack_1->SetBinContent(5,5.596997);
   hbadmatch_stack_1->SetBinContent(6,1.668218);
   hbadmatch_stack_1->SetBinContent(7,2.516119);
   hbadmatch_stack_1->SetBinContent(8,5.404992);
   hbadmatch_stack_1->SetBinContent(9,2.759812);
   hbadmatch_stack_1->SetBinContent(10,3.178269);
   hbadmatch_stack_1->SetBinContent(11,1.342239);
   hbadmatch_stack_1->SetBinContent(12,3.134095);
   hbadmatch_stack_1->SetBinContent(13,2.0001);
   hbadmatch_stack_1->SetBinContent(14,1.24884);
   hbadmatch_stack_1->SetBinContent(15,2.357826);
   hbadmatch_stack_1->SetBinContent(16,2.271861);
   hbadmatch_stack_1->SetBinContent(17,1.877347);
   hbadmatch_stack_1->SetBinContent(18,1.800667);
   hbadmatch_stack_1->SetBinContent(19,2.209822);
   hbadmatch_stack_1->SetBinContent(20,1.560668);
   hbadmatch_stack_1->SetBinContent(21,1.783653);
   hbadmatch_stack_1->SetBinContent(22,1.055413);
   hbadmatch_stack_1->SetBinContent(24,1.285731);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.6318489);
   hbadmatch_stack_1->SetBinError(3,1.183161);
   hbadmatch_stack_1->SetBinError(4,0.8648846);
   hbadmatch_stack_1->SetBinError(5,1.50292);
   hbadmatch_stack_1->SetBinError(6,0.643063);
   hbadmatch_stack_1->SetBinError(7,0.7010163);
   hbadmatch_stack_1->SetBinError(8,1.415066);
   hbadmatch_stack_1->SetBinError(9,0.811938);
   hbadmatch_stack_1->SetBinError(10,0.921887);
   hbadmatch_stack_1->SetBinError(11,0.644313);
   hbadmatch_stack_1->SetBinError(12,0.9559156);
   hbadmatch_stack_1->SetBinError(13,0.6893507);
   hbadmatch_stack_1->SetBinError(14,0.5267168);
   hbadmatch_stack_1->SetBinError(15,0.7947867);
   hbadmatch_stack_1->SetBinError(16,1.024432);
   hbadmatch_stack_1->SetBinError(17,0.7495113);
   hbadmatch_stack_1->SetBinError(18,0.6697261);
   hbadmatch_stack_1->SetBinError(19,0.827964);
   hbadmatch_stack_1->SetBinError(20,0.6746716);
   hbadmatch_stack_1->SetBinError(21,0.709184);
   hbadmatch_stack_1->SetBinError(22,0.5390323);
   hbadmatch_stack_1->SetBinError(24,0.6375368);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,2.26801);
   hext_stack_2->SetBinContent(2,12.35349);
   hext_stack_2->SetBinContent(3,14.16583);
   hext_stack_2->SetBinContent(4,16.91105);
   hext_stack_2->SetBinContent(5,20.80105);
   hext_stack_2->SetBinContent(6,15.70562);
   hext_stack_2->SetBinContent(7,22.1593);
   hext_stack_2->SetBinContent(8,17.07382);
   hext_stack_2->SetBinContent(9,13.60201);
   hext_stack_2->SetBinContent(10,17.12453);
   hext_stack_2->SetBinContent(11,9.566383);
   hext_stack_2->SetBinContent(12,11.16242);
   hext_stack_2->SetBinContent(13,17.90296);
   hext_stack_2->SetBinContent(14,12.22222);
   hext_stack_2->SetBinContent(15,12.03905);
   hext_stack_2->SetBinContent(16,14.91995);
   hext_stack_2->SetBinContent(17,9.883599);
   hext_stack_2->SetBinContent(18,5.359169);
   hext_stack_2->SetBinContent(19,6.214257);
   hext_stack_2->SetBinContent(20,8.242843);
   hext_stack_2->SetBinContent(21,5.083842);
   hext_stack_2->SetBinContent(22,11.93253);
   hext_stack_2->SetBinContent(23,2.841783);
   hext_stack_2->SetBinContent(24,6.829921);
   hext_stack_2->SetBinContent(25,1.219797);
   hext_stack_2->SetBinError(1,1.035838);
   hext_stack_2->SetBinError(2,2.477907);
   hext_stack_2->SetBinError(3,2.513541);
   hext_stack_2->SetBinError(4,2.771703);
   hext_stack_2->SetBinError(5,3.04655);
   hext_stack_2->SetBinError(6,2.604605);
   hext_stack_2->SetBinError(7,3.219642);
   hext_stack_2->SetBinError(8,2.707595);
   hext_stack_2->SetBinError(9,2.414785);
   hext_stack_2->SetBinError(10,2.921008);
   hext_stack_2->SetBinError(11,1.960765);
   hext_stack_2->SetBinError(12,2.19983);
   hext_stack_2->SetBinError(13,3.010178);
   hext_stack_2->SetBinError(14,2.313042);
   hext_stack_2->SetBinError(15,2.344625);
   hext_stack_2->SetBinError(16,2.790466);
   hext_stack_2->SetBinError(17,2.037409);
   hext_stack_2->SetBinError(18,1.392494);
   hext_stack_2->SetBinError(19,1.789038);
   hext_stack_2->SetBinError(20,1.972853);
   hext_stack_2->SetBinError(21,1.601118);
   hext_stack_2->SetBinError(22,2.525293);
   hext_stack_2->SetBinError(23,1.011007);
   hext_stack_2->SetBinError(24,2.020101);
   hext_stack_2->SetBinError(25,0.7042499);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.5758626);
   hdirt_stack_3->SetBinContent(4,2.244567);
   hdirt_stack_3->SetBinContent(5,0.9443466);
   hdirt_stack_3->SetBinContent(6,1.390929);
   hdirt_stack_3->SetBinContent(7,2.885595);
   hdirt_stack_3->SetBinContent(8,2.78653);
   hdirt_stack_3->SetBinContent(9,0.8520056);
   hdirt_stack_3->SetBinContent(10,1.642079);
   hdirt_stack_3->SetBinContent(11,1.926822);
   hdirt_stack_3->SetBinContent(12,1.862714);
   hdirt_stack_3->SetBinContent(13,0.7756181);
   hdirt_stack_3->SetBinContent(14,0.6951543);
   hdirt_stack_3->SetBinContent(16,0.9068468);
   hdirt_stack_3->SetBinContent(17,0.3569671);
   hdirt_stack_3->SetBinContent(18,0.5758626);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.6763744);
   hdirt_stack_3->SetBinContent(21,0.7430074);
   hdirt_stack_3->SetBinContent(22,0.8010461);
   hdirt_stack_3->SetBinContent(23,0.4289006);
   hdirt_stack_3->SetBinContent(24,0.4762587);
   hdirt_stack_3->SetBinError(2,0.3389606);
   hdirt_stack_3->SetBinError(4,0.8400036);
   hdirt_stack_3->SetBinError(5,0.492541);
   hdirt_stack_3->SetBinError(6,0.6524508);
   hdirt_stack_3->SetBinError(7,0.9090476);
   hdirt_stack_3->SetBinError(8,0.933663);
   hdirt_stack_3->SetBinError(9,0.3911799);
   hdirt_stack_3->SetBinError(10,0.6301529);
   hdirt_stack_3->SetBinError(11,1.043647);
   hdirt_stack_3->SetBinError(12,0.7018281);
   hdirt_stack_3->SetBinError(13,0.4758457);
   hdirt_stack_3->SetBinError(14,0.4258516);
   hdirt_stack_3->SetBinError(16,0.5334985);
   hdirt_stack_3->SetBinError(17,0.258803);
   hdirt_stack_3->SetBinError(18,0.3389606);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.4782689);
   hdirt_stack_3->SetBinError(21,0.4500267);
   hdirt_stack_3->SetBinError(22,0.4056913);
   hdirt_stack_3->SetBinError(23,0.4289006);
   hdirt_stack_3->SetBinError(24,0.3652866);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.494447);
   houtFV_stack_4->SetBinContent(2,10.83103);
   houtFV_stack_4->SetBinContent(3,19.20626);
   houtFV_stack_4->SetBinContent(4,21.76961);
   houtFV_stack_4->SetBinContent(5,23.8038);
   houtFV_stack_4->SetBinContent(6,19.27948);
   houtFV_stack_4->SetBinContent(7,19.14501);
   houtFV_stack_4->SetBinContent(8,21.24101);
   houtFV_stack_4->SetBinContent(9,18.35492);
   houtFV_stack_4->SetBinContent(10,14.68269);
   houtFV_stack_4->SetBinContent(11,14.11965);
   houtFV_stack_4->SetBinContent(12,12.15384);
   houtFV_stack_4->SetBinContent(13,10.70092);
   houtFV_stack_4->SetBinContent(14,10.71843);
   houtFV_stack_4->SetBinContent(15,10.95003);
   houtFV_stack_4->SetBinContent(16,9.522795);
   houtFV_stack_4->SetBinContent(17,9.8256);
   houtFV_stack_4->SetBinContent(18,8.330736);
   houtFV_stack_4->SetBinContent(19,8.38135);
   houtFV_stack_4->SetBinContent(20,10.87528);
   houtFV_stack_4->SetBinContent(21,11.02089);
   houtFV_stack_4->SetBinContent(22,6.655227);
   houtFV_stack_4->SetBinContent(23,6.602323);
   houtFV_stack_4->SetBinContent(24,5.219622);
   houtFV_stack_4->SetBinContent(25,1.80245);
   houtFV_stack_4->SetBinError(1,0.9582174);
   houtFV_stack_4->SetBinError(2,1.709381);
   houtFV_stack_4->SetBinError(3,2.346232);
   houtFV_stack_4->SetBinError(4,2.49561);
   houtFV_stack_4->SetBinError(5,2.540073);
   houtFV_stack_4->SetBinError(6,2.151349);
   houtFV_stack_4->SetBinError(7,2.195628);
   houtFV_stack_4->SetBinError(8,2.284542);
   houtFV_stack_4->SetBinError(9,2.167245);
   houtFV_stack_4->SetBinError(10,1.914807);
   houtFV_stack_4->SetBinError(11,2.056583);
   houtFV_stack_4->SetBinError(12,1.765203);
   houtFV_stack_4->SetBinError(13,1.979059);
   houtFV_stack_4->SetBinError(14,1.656266);
   houtFV_stack_4->SetBinError(15,1.655846);
   houtFV_stack_4->SetBinError(16,1.52498);
   houtFV_stack_4->SetBinError(17,1.496806);
   houtFV_stack_4->SetBinError(18,1.418205);
   houtFV_stack_4->SetBinError(19,1.437915);
   houtFV_stack_4->SetBinError(20,1.597114);
   houtFV_stack_4->SetBinError(21,1.70713);
   houtFV_stack_4->SetBinError(22,1.316426);
   houtFV_stack_4->SetBinError(23,1.273904);
   houtFV_stack_4->SetBinError(24,1.17325);
   houtFV_stack_4->SetBinError(25,0.6225633);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3044679);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.816358);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.46271);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.856226);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.73648);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.099671);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9067796);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.8636717);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7906337);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5246623);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.004716);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2546074);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5445461);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.304511);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2121149);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.5668249);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3863148);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05592273);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08515355);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.03568899);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1640856);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1788464);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4906192);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1531754);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1301691);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5634795);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3730935);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4654374);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4293373);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3887802);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2651394);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3309723);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3503668);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2928014);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4633067);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1560631);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2632659);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1522303);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1501908);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3239212);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2315733);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03954344);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.049167);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02905246);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1321719);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1320636);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3088313);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1000354);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1389992);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02529745);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.06368171);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1895762);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.09576937);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1458081);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1228038);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1208256);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.0824865);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02952655);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1587601);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.03723348);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02862678);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06884561);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01955114);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04184164);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1328778);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05156184);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1294588);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.08020806);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05780885);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04210045);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02165026);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1138256);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02632953);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02862678);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.436496);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.840253);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.92113);
   hNCpi0inFVres_stack_7->SetBinContent(4,18.20552);
   hNCpi0inFVres_stack_7->SetBinContent(5,17.4503);
   hNCpi0inFVres_stack_7->SetBinContent(6,18.30717);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.86986);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.68265);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.1087);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.92449);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.65429);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.32319);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.876947);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.344228);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.998299);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.564629);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.096043);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.132843);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.72038);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.221068);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.067222);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.589365);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.63675);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.625397);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.6280903);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5487132);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7615076);
   hNCpi0inFVres_stack_7->SetBinError(3,1.119144);
   hNCpi0inFVres_stack_7->SetBinError(4,1.494398);
   hNCpi0inFVres_stack_7->SetBinError(5,1.397241);
   hNCpi0inFVres_stack_7->SetBinError(6,1.414646);
   hNCpi0inFVres_stack_7->SetBinError(7,1.337451);
   hNCpi0inFVres_stack_7->SetBinError(8,1.35483);
   hNCpi0inFVres_stack_7->SetBinError(9,1.072215);
   hNCpi0inFVres_stack_7->SetBinError(10,1.213051);
   hNCpi0inFVres_stack_7->SetBinError(11,1.030508);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9251096);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8798202);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9370612);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8040154);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6930936);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6163987);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6540522);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7153587);
   hNCpi0inFVres_stack_7->SetBinError(20,0.735792);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5724228);
   hNCpi0inFVres_stack_7->SetBinError(22,0.459923);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5902246);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3481778);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3304467);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.490356);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.548818);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.680843);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.572431);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.23674);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.174073);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.110774);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.834234);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.549381);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.895333);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.243723);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.399707);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.364169);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.219894);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.125624);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.5128);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.192792);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.30304);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.251636);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8138306);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.193191);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.969924);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8804268);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.299991);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.08494912);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.538462);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8344023);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.11496);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.01887);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7428351);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9541858);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7538983);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5975893);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6299217);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7695724);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6251644);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4558327);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8891336);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5772109);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5363444);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3295859);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4585447);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4459492);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3107348);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2030517);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3555059);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6874562);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2905732);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1620749);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.04391064);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.254823);
   hCCpi0inFV_stack_10->SetBinContent(2,11.00863);
   hCCpi0inFV_stack_10->SetBinContent(3,16.33944);
   hCCpi0inFV_stack_10->SetBinContent(4,19.37647);
   hCCpi0inFV_stack_10->SetBinContent(5,23.93201);
   hCCpi0inFV_stack_10->SetBinContent(6,23.63632);
   hCCpi0inFV_stack_10->SetBinContent(7,21.43806);
   hCCpi0inFV_stack_10->SetBinContent(8,23.45702);
   hCCpi0inFV_stack_10->SetBinContent(9,20.30544);
   hCCpi0inFV_stack_10->SetBinContent(10,19.48744);
   hCCpi0inFV_stack_10->SetBinContent(11,15.86713);
   hCCpi0inFV_stack_10->SetBinContent(12,16.90696);
   hCCpi0inFV_stack_10->SetBinContent(13,14.5193);
   hCCpi0inFV_stack_10->SetBinContent(14,7.374122);
   hCCpi0inFV_stack_10->SetBinContent(15,9.266344);
   hCCpi0inFV_stack_10->SetBinContent(16,9.819359);
   hCCpi0inFV_stack_10->SetBinContent(17,11.17793);
   hCCpi0inFV_stack_10->SetBinContent(18,8.319104);
   hCCpi0inFV_stack_10->SetBinContent(19,9.139928);
   hCCpi0inFV_stack_10->SetBinContent(20,5.425805);
   hCCpi0inFV_stack_10->SetBinContent(21,7.241886);
   hCCpi0inFV_stack_10->SetBinContent(22,8.10448);
   hCCpi0inFV_stack_10->SetBinContent(23,6.561433);
   hCCpi0inFV_stack_10->SetBinContent(24,4.33245);
   hCCpi0inFV_stack_10->SetBinContent(25,1.804013);
   hCCpi0inFV_stack_10->SetBinError(1,0.9707372);
   hCCpi0inFV_stack_10->SetBinError(2,1.686749);
   hCCpi0inFV_stack_10->SetBinError(3,1.992901);
   hCCpi0inFV_stack_10->SetBinError(4,2.246052);
   hCCpi0inFV_stack_10->SetBinError(5,2.513786);
   hCCpi0inFV_stack_10->SetBinError(6,2.469717);
   hCCpi0inFV_stack_10->SetBinError(7,2.356893);
   hCCpi0inFV_stack_10->SetBinError(8,2.486215);
   hCCpi0inFV_stack_10->SetBinError(9,2.283671);
   hCCpi0inFV_stack_10->SetBinError(10,2.275187);
   hCCpi0inFV_stack_10->SetBinError(11,1.993286);
   hCCpi0inFV_stack_10->SetBinError(12,2.078171);
   hCCpi0inFV_stack_10->SetBinError(13,1.924918);
   hCCpi0inFV_stack_10->SetBinError(14,1.37363);
   hCCpi0inFV_stack_10->SetBinError(15,1.492235);
   hCCpi0inFV_stack_10->SetBinError(16,1.525448);
   hCCpi0inFV_stack_10->SetBinError(17,1.670117);
   hCCpi0inFV_stack_10->SetBinError(18,1.486358);
   hCCpi0inFV_stack_10->SetBinError(19,1.489376);
   hCCpi0inFV_stack_10->SetBinError(20,1.081939);
   hCCpi0inFV_stack_10->SetBinError(21,1.271159);
   hCCpi0inFV_stack_10->SetBinError(22,1.393131);
   hCCpi0inFV_stack_10->SetBinError(23,1.366429);
   hCCpi0inFV_stack_10->SetBinError(24,1.026013);
   hCCpi0inFV_stack_10->SetBinError(25,0.7075491);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.3917402);
   hNCinFV_stack_11->SetBinContent(2,1.884388);
   hNCinFV_stack_11->SetBinContent(3,5.119285);
   hNCinFV_stack_11->SetBinContent(4,5.026668);
   hNCinFV_stack_11->SetBinContent(5,3.015892);
   hNCinFV_stack_11->SetBinContent(6,3.564671);
   hNCinFV_stack_11->SetBinContent(7,4.374687);
   hNCinFV_stack_11->SetBinContent(8,4.492);
   hNCinFV_stack_11->SetBinContent(9,3.804201);
   hNCinFV_stack_11->SetBinContent(10,4.071458);
   hNCinFV_stack_11->SetBinContent(11,4.122469);
   hNCinFV_stack_11->SetBinContent(12,2.815358);
   hNCinFV_stack_11->SetBinContent(13,2.439257);
   hNCinFV_stack_11->SetBinContent(14,1.175221);
   hNCinFV_stack_11->SetBinContent(15,2.538884);
   hNCinFV_stack_11->SetBinContent(16,2.560903);
   hNCinFV_stack_11->SetBinContent(17,2.520303);
   hNCinFV_stack_11->SetBinContent(18,3.561533);
   hNCinFV_stack_11->SetBinContent(19,2.206993);
   hNCinFV_stack_11->SetBinContent(20,1.465333);
   hNCinFV_stack_11->SetBinContent(21,2.390292);
   hNCinFV_stack_11->SetBinContent(22,2.917468);
   hNCinFV_stack_11->SetBinContent(23,2.059165);
   hNCinFV_stack_11->SetBinContent(24,1.367907);
   hNCinFV_stack_11->SetBinContent(25,0.3255346);
   hNCinFV_stack_11->SetBinError(1,0.2770047);
   hNCinFV_stack_11->SetBinError(2,0.6653822);
   hNCinFV_stack_11->SetBinError(3,1.416385);
   hNCinFV_stack_11->SetBinError(4,1.082184);
   hNCinFV_stack_11->SetBinError(5,0.9090772);
   hNCinFV_stack_11->SetBinError(6,0.9622765);
   hNCinFV_stack_11->SetBinError(7,1.090069);
   hNCinFV_stack_11->SetBinError(8,0.9912489);
   hNCinFV_stack_11->SetBinError(9,0.8937627);
   hNCinFV_stack_11->SetBinError(10,1.025096);
   hNCinFV_stack_11->SetBinError(11,1.128494);
   hNCinFV_stack_11->SetBinError(12,1.01379);
   hNCinFV_stack_11->SetBinError(13,0.7107864);
   hNCinFV_stack_11->SetBinError(14,0.4797863);
   hNCinFV_stack_11->SetBinError(15,0.9091805);
   hNCinFV_stack_11->SetBinError(16,1.025106);
   hNCinFV_stack_11->SetBinError(17,0.8663643);
   hNCinFV_stack_11->SetBinError(18,1.031468);
   hNCinFV_stack_11->SetBinError(19,1.120928);
   hNCinFV_stack_11->SetBinError(20,0.621229);
   hNCinFV_stack_11->SetBinError(21,0.7726139);
   hNCinFV_stack_11->SetBinError(22,0.9684845);
   hNCinFV_stack_11->SetBinError(23,0.7258638);
   hNCinFV_stack_11->SetBinError(24,0.7391324);
   hNCinFV_stack_11->SetBinError(25,0.2367271);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.368238);
   hnumuCCinFV_stack_12->SetBinContent(2,7.719956);
   hnumuCCinFV_stack_12->SetBinContent(3,9.106584);
   hnumuCCinFV_stack_12->SetBinContent(4,16.74135);
   hnumuCCinFV_stack_12->SetBinContent(5,13.74582);
   hnumuCCinFV_stack_12->SetBinContent(6,19.32158);
   hnumuCCinFV_stack_12->SetBinContent(7,13.98043);
   hnumuCCinFV_stack_12->SetBinContent(8,12.35308);
   hnumuCCinFV_stack_12->SetBinContent(9,15.32733);
   hnumuCCinFV_stack_12->SetBinContent(10,10.82543);
   hnumuCCinFV_stack_12->SetBinContent(11,14.11132);
   hnumuCCinFV_stack_12->SetBinContent(12,10.80172);
   hnumuCCinFV_stack_12->SetBinContent(13,9.836262);
   hnumuCCinFV_stack_12->SetBinContent(14,5.591375);
   hnumuCCinFV_stack_12->SetBinContent(15,5.466496);
   hnumuCCinFV_stack_12->SetBinContent(16,8.24845);
   hnumuCCinFV_stack_12->SetBinContent(17,6.498595);
   hnumuCCinFV_stack_12->SetBinContent(18,4.089077);
   hnumuCCinFV_stack_12->SetBinContent(19,3.310331);
   hnumuCCinFV_stack_12->SetBinContent(20,5.006033);
   hnumuCCinFV_stack_12->SetBinContent(21,4.845897);
   hnumuCCinFV_stack_12->SetBinContent(22,5.498934);
   hnumuCCinFV_stack_12->SetBinContent(23,6.902063);
   hnumuCCinFV_stack_12->SetBinContent(24,2.347975);
   hnumuCCinFV_stack_12->SetBinContent(25,1.313142);
   hnumuCCinFV_stack_12->SetBinError(1,0.6509322);
   hnumuCCinFV_stack_12->SetBinError(2,1.526161);
   hnumuCCinFV_stack_12->SetBinError(3,1.595097);
   hnumuCCinFV_stack_12->SetBinError(4,2.191189);
   hnumuCCinFV_stack_12->SetBinError(5,2.16403);
   hnumuCCinFV_stack_12->SetBinError(6,3.211793);
   hnumuCCinFV_stack_12->SetBinError(7,2.45648);
   hnumuCCinFV_stack_12->SetBinError(8,1.73188);
   hnumuCCinFV_stack_12->SetBinError(9,2.190804);
   hnumuCCinFV_stack_12->SetBinError(10,1.725338);
   hnumuCCinFV_stack_12->SetBinError(11,2.045836);
   hnumuCCinFV_stack_12->SetBinError(12,1.781575);
   hnumuCCinFV_stack_12->SetBinError(13,1.892923);
   hnumuCCinFV_stack_12->SetBinError(14,1.316347);
   hnumuCCinFV_stack_12->SetBinError(15,1.275671);
   hnumuCCinFV_stack_12->SetBinError(16,1.657228);
   hnumuCCinFV_stack_12->SetBinError(17,1.354736);
   hnumuCCinFV_stack_12->SetBinError(18,0.943869);
   hnumuCCinFV_stack_12->SetBinError(19,0.9469983);
   hnumuCCinFV_stack_12->SetBinError(20,1.145943);
   hnumuCCinFV_stack_12->SetBinError(21,1.151117);
   hnumuCCinFV_stack_12->SetBinError(22,1.185841);
   hnumuCCinFV_stack_12->SetBinError(23,2.469565);
   hnumuCCinFV_stack_12->SetBinError(24,1.015231);
   hnumuCCinFV_stack_12->SetBinError(25,0.6262211);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7539932);
   hnueCCinFV_stack_13->SetBinContent(2,1.046837);
   hnueCCinFV_stack_13->SetBinContent(3,0.838637);
   hnueCCinFV_stack_13->SetBinContent(4,0.6372864);
   hnueCCinFV_stack_13->SetBinContent(5,2.31696);
   hnueCCinFV_stack_13->SetBinContent(6,1.327762);
   hnueCCinFV_stack_13->SetBinContent(7,0.8347859);
   hnueCCinFV_stack_13->SetBinContent(8,0.7155366);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.4489435);
   hnueCCinFV_stack_13->SetBinError(2,0.5697868);
   hnueCCinFV_stack_13->SetBinError(3,0.5488178);
   hnueCCinFV_stack_13->SetBinError(4,0.4665552);
   hnueCCinFV_stack_13->SetBinError(5,1.274861);
   hnueCCinFV_stack_13->SetBinError(6,0.856646);
   hnueCCinFV_stack_13->SetBinError(7,0.4196513);
   hnueCCinFV_stack_13->SetBinError(8,0.4208068);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3172361);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__8->SetBinContent(1,16.76257);
   hmcerror__8->SetBinContent(2,59.24875);
   hmcerror__8->SetBinContent(3,88.63434);
   hmcerror__8->SetBinContent(4,112.3202);
   hmcerror__8->SetBinContent(5,117.6057);
   hmcerror__8->SetBinContent(6,110.5392);
   hmcerror__8->SetBinContent(7,110.4298);
   hmcerror__8->SetBinContent(8,108.9508);
   hmcerror__8->SetBinContent(9,91.67704);
   hmcerror__8->SetBinContent(10,89.45216);
   hmcerror__8->SetBinContent(11,76.96946);
   hmcerror__8->SetBinContent(12,72.96042);
   hmcerror__8->SetBinContent(13,71.01992);
   hmcerror__8->SetBinContent(14,49.91132);
   hmcerror__8->SetBinContent(15,51.52271);
   hmcerror__8->SetBinContent(16,56.92336);
   hmcerror__8->SetBinContent(17,50.1385);
   hmcerror__8->SetBinContent(18,38.95652);
   hmcerror__8->SetBinContent(19,37.73904);
   hmcerror__8->SetBinContent(20,39.56911);
   hmcerror__8->SetBinContent(21,38.76105);
   hmcerror__8->SetBinContent(22,41.70678);
   hmcerror__8->SetBinContent(23,30.32564);
   hmcerror__8->SetBinContent(24,24.47259);
   hmcerror__8->SetBinContent(25,7.556494);
   hmcerror__8->SetBinError(1,8.936612);
   hmcerror__8->SetBinError(2,19.57187);
   hmcerror__8->SetBinError(3,23.57765);
   hmcerror__8->SetBinError(4,31.11478);
   hmcerror__8->SetBinError(5,29.24913);
   hmcerror__8->SetBinError(6,31.1766);
   hmcerror__8->SetBinError(7,30.35115);
   hmcerror__8->SetBinError(8,32.62348);
   hmcerror__8->SetBinError(9,32.30069);
   hmcerror__8->SetBinError(10,27.75839);
   hmcerror__8->SetBinError(11,24.98462);
   hmcerror__8->SetBinError(12,23.59651);
   hmcerror__8->SetBinError(13,22.83356);
   hmcerror__8->SetBinError(14,17.6163);
   hmcerror__8->SetBinError(15,20.59856);
   hmcerror__8->SetBinError(16,18.20117);
   hmcerror__8->SetBinError(17,26.48962);
   hmcerror__8->SetBinError(18,16.12683);
   hmcerror__8->SetBinError(19,14.13557);
   hmcerror__8->SetBinError(20,14.99954);
   hmcerror__8->SetBinError(21,15.94316);
   hmcerror__8->SetBinError(22,19.26374);
   hmcerror__8->SetBinError(23,21.55047);
   hmcerror__8->SetBinError(24,12.0459);
   hmcerror__8->SetBinError(25,9.465492);
   hmcerror__8->SetBinError(26,0.3895343);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[25] = {
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
   Double_t _fy3009[25] = {
   21,
   71,
   85,
   111,
   112,
   79,
   102,
   100,
   96,
   77,
   72,
   49,
   53,
   65,
   51,
   45,
   47,
   33,
   35,
   44,
   36,
   30,
   27,
   24,
   5};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   4.7354,
   8.5518,
   9.3428,
   10.53565,
   10.58301,
   9.0124,
   10.0995,
   10.1212,
   9.9196,
   8.8995,
   8.6108,
   7.1318,
   7.4105,
   8.1893,
   7.2725,
   6.8416,
   6.9882,
   5.8847,
   6.0548,
   6.7671,
   6.1381,
   5.6197,
   5.3414,
   5.0476,
   2.48995};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   4.5229,
   8.3496,
   9.1411,
   10.53565,
   10.58301,
   8.8105,
   10.0995,
   9.92,
   9.718,
   8.6976,
   8.4085,
   6.9277,
   7.2068,
   7.9866,
   7.0686,
   6.637,
   6.7839,
   5.6776,
   5.8483,
   6.5623,
   5.9318,
   5.4117,
   5.1322,
   4.837,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,3.465);
   Graph_Graph3009->SetMinimum(2.259045);
   Graph_Graph3009->SetMaximum(134.5903);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  220.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.9","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.2","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[25] = {
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
   Double_t _fy3010[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.5331289,
   0.3303338,
   0.2660104,
   0.2770185,
   0.2487051,
   0.2820412,
   0.2748457,
   0.2994332,
   0.3523312,
   0.3103155,
   0.3246044,
   0.3234152,
   0.3215092,
   0.3529521,
   0.3997958,
   0.3197487,
   0.5283288,
   0.4139699,
   0.3745608,
   0.3790719,
   0.411319,
   0.461885,
   0.7106353,
   0.4922201,
   1.25263};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   0.5331289,
   0.3303338,
   0.2660104,
   0.2770185,
   0.2487051,
   0.2820412,
   0.2748457,
   0.2994332,
   0.3523312,
   0.3103155,
   0.3246044,
   0.3234152,
   0.3215092,
   0.3529521,
   0.3997958,
   0.3197487,
   0.5283288,
   0.4139699,
   0.3745608,
   0.3790719,
   0.411319,
   0.461885,
   0.7106353,
   0.4922201,
   1.25263};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,3.465);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[25] = {
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
   Double_t _fy3011[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[25] = {
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
   Double_t _fely3011[25] = {
   0.2126405,
   0.1756887,
   0.1875195,
   0.1816328,
   0.1823833,
   0.2011376,
   0.1904745,
   0.2078951,
   0.2155713,
   0.2038033,
   0.2264741,
   0.2039156,
   0.2061598,
   0.2229437,
   0.2094789,
   0.1968972,
   0.236148,
   0.2358931,
   0.2205838,
   0.2339447,
   0.2295234,
   0.1731112,
   0.2596233,
   0.1968726,
   0.3195115};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   0.2126405,
   0.1756887,
   0.1875195,
   0.1816328,
   0.1823833,
   0.2011376,
   0.1904745,
   0.2078951,
   0.2155713,
   0.2038033,
   0.2264741,
   0.2039156,
   0.2061598,
   0.2229437,
   0.2094789,
   0.1968972,
   0.236148,
   0.2358931,
   0.2205838,
   0.2339447,
   0.2295234,
   0.1731112,
   0.2596233,
   0.1968726,
   0.3195115};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,3.465);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[25] = {
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
   Double_t _fy3012[25] = {
   1.252791,
   1.198337,
   0.9589963,
   0.9882461,
   0.9523348,
   0.7146787,
   0.9236638,
   0.9178455,
   1.047154,
   0.8607954,
   0.935436,
   0.671597,
   0.7462695,
   1.30231,
   0.9898549,
   0.7905366,
   0.9374034,
   0.8470982,
   0.9274215,
   1.111979,
   0.9287675,
   0.7193075,
   0.8903357,
   0.980689,
   0.6616825};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   0.2824984,
   0.1443372,
   0.1054084,
   0.09380016,
   0.08998718,
   0.08153127,
   0.09145634,
   0.09289698,
   0.1082016,
   0.09948894,
   0.1118729,
   0.09774889,
   0.104344,
   0.164077,
   0.1411514,
   0.1201897,
   0.1393779,
   0.1510581,
   0.1604386,
   0.1710198,
   0.1583574,
   0.1347431,
   0.1761348,
   0.2062552,
   0.3295113};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   0.2698214,
   0.1409245,
   0.1031327,
   0.09380016,
   0.08998718,
   0.07970477,
   0.09145634,
   0.09105027,
   0.1060025,
   0.09723187,
   0.1092446,
   0.09495148,
   0.1014758,
   0.1600158,
   0.1371939,
   0.1165954,
   0.1353032,
   0.145742,
   0.1549668,
   0.165844,
   0.1530351,
   0.1297559,
   0.1692363,
   0.1976497,
   0.2925484};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,3.465);
   Graph_Graph3012->SetMinimum(0.2131271);
   Graph_Graph3012->SetMaximum(1.641657);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_theta_low_all",25,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
