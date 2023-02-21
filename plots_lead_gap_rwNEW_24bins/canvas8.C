#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 11:58:36 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-7.522151,101.5385,831.7915);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__22->SetBinContent(1,376.1075);
   hmc__22->SetBinContent(2,79.88638);
   hmc__22->SetBinContent(3,75.13835);
   hmc__22->SetBinContent(4,69.62183);
   hmc__22->SetBinContent(5,54.73714);
   hmc__22->SetBinContent(6,54.31006);
   hmc__22->SetBinContent(7,48.2033);
   hmc__22->SetBinContent(8,30.99337);
   hmc__22->SetBinContent(9,22.95706);
   hmc__22->SetBinContent(10,20.45209);
   hmc__22->SetBinContent(11,14.0922);
   hmc__22->SetBinContent(12,15.94432);
   hmc__22->SetBinContent(13,13.37533);
   hmc__22->SetBinContent(14,9.432126);
   hmc__22->SetBinContent(15,8.334425);
   hmc__22->SetBinContent(16,4.569096);
   hmc__22->SetBinContent(17,4.907076);
   hmc__22->SetBinContent(18,6.256165);
   hmc__22->SetBinContent(19,2.721086);
   hmc__22->SetBinContent(20,2.805486);
   hmc__22->SetBinContent(21,4.04902);
   hmc__22->SetBinContent(22,2.818608);
   hmc__22->SetBinContent(23,3.276495);
   hmc__22->SetBinContent(24,0.7589914);
   hmc__22->SetBinContent(25,38.25028);
   hmc__22->SetBinError(1,72.2433);
   hmc__22->SetBinError(2,23.58392);
   hmc__22->SetBinError(3,24.83846);
   hmc__22->SetBinError(4,27.60712);
   hmc__22->SetBinError(5,16.24964);
   hmc__22->SetBinError(6,22.60523);
   hmc__22->SetBinError(7,21.46081);
   hmc__22->SetBinError(8,14.98767);
   hmc__22->SetBinError(9,11.31679);
   hmc__22->SetBinError(10,10.71024);
   hmc__22->SetBinError(11,9.007724);
   hmc__22->SetBinError(12,10.55152);
   hmc__22->SetBinError(13,8.823871);
   hmc__22->SetBinError(14,6.592063);
   hmc__22->SetBinError(15,7.645538);
   hmc__22->SetBinError(16,4.226385);
   hmc__22->SetBinError(17,5.581253);
   hmc__22->SetBinError(18,6.126597);
   hmc__22->SetBinError(19,5.698998);
   hmc__22->SetBinError(20,3.248506);
   hmc__22->SetBinError(21,5.766486);
   hmc__22->SetBinError(22,4.739554);
   hmc__22->SetBinError(23,6.563143);
   hmc__22->SetBinError(24,1.579179);
   hmc__22->SetBinError(25,18.90551);
   hmc__22->SetMinimum(-7.522151);
   hmc__22->SetMaximum(789.8258);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,90);
   hs8_stack_8->SetMinimum(-1.486166e-08);
   hs8_stack_8->SetMaximum(394.9129);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,9.477571);
   hbadmatch_stack_1->SetBinContent(2,2.572724);
   hbadmatch_stack_1->SetBinContent(3,1.861727);
   hbadmatch_stack_1->SetBinContent(4,2.878642);
   hbadmatch_stack_1->SetBinContent(5,1.419387);
   hbadmatch_stack_1->SetBinContent(6,1.875056);
   hbadmatch_stack_1->SetBinContent(7,1.806383);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.3917402);
   hbadmatch_stack_1->SetBinContent(10,2.255398);
   hbadmatch_stack_1->SetBinContent(11,0.745395);
   hbadmatch_stack_1->SetBinContent(12,0.8753801);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(15,0.6803553);
   hbadmatch_stack_1->SetBinContent(17,0.2620963);
   hbadmatch_stack_1->SetBinContent(18,0.2221688);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(25,2.980408);
   hbadmatch_stack_1->SetBinError(1,1.579257);
   hbadmatch_stack_1->SetBinError(2,0.841822);
   hbadmatch_stack_1->SetBinError(3,0.7365746);
   hbadmatch_stack_1->SetBinError(4,1.284337);
   hbadmatch_stack_1->SetBinError(5,0.5383421);
   hbadmatch_stack_1->SetBinError(6,0.7579183);
   hbadmatch_stack_1->SetBinError(7,0.7362985);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.2770047);
   hbadmatch_stack_1->SetBinError(10,0.938316);
   hbadmatch_stack_1->SetBinError(11,0.5290765);
   hbadmatch_stack_1->SetBinError(12,0.5191111);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(15,0.4810838);
   hbadmatch_stack_1->SetBinError(17,0.2620963);
   hbadmatch_stack_1->SetBinError(18,0.2221688);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
   hbadmatch_stack_1->SetBinError(25,0.9237137);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,73.97652);
   hext_stack_2->SetBinContent(2,12.06223);
   hext_stack_2->SetBinContent(3,16.00407);
   hext_stack_2->SetBinContent(4,13.25166);
   hext_stack_2->SetBinContent(5,13.63237);
   hext_stack_2->SetBinContent(6,16.05754);
   hext_stack_2->SetBinContent(7,9.704836);
   hext_stack_2->SetBinContent(8,4.710375);
   hext_stack_2->SetBinContent(9,4.385977);
   hext_stack_2->SetBinContent(10,2.510206);
   hext_stack_2->SetBinContent(11,2.599588);
   hext_stack_2->SetBinContent(12,3.654981);
   hext_stack_2->SetBinContent(13,3.401196);
   hext_stack_2->SetBinContent(14,1.868591);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,0.6416141);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,2.973055);
   hext_stack_2->SetBinContent(19,0.6487947);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinContent(25,10.95335);
   hext_stack_2->SetBinError(1,5.857859);
   hext_stack_2->SetBinError(2,2.31627);
   hext_stack_2->SetBinError(3,2.712505);
   hext_stack_2->SetBinError(4,2.488862);
   hext_stack_2->SetBinError(5,2.344745);
   hext_stack_2->SetBinError(6,2.867504);
   hext_stack_2->SetBinError(7,2.105531);
   hext_stack_2->SetBinError(8,1.314751);
   hext_stack_2->SetBinError(9,1.274103);
   hext_stack_2->SetBinError(10,1.057404);
   hext_stack_2->SetBinError(11,0.9884288);
   hext_stack_2->SetBinError(12,1.163091);
   hext_stack_2->SetBinError(13,1.172056);
   hext_stack_2->SetBinError(14,0.840497);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,0.6416141);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,1.346105);
   hext_stack_2->SetBinError(19,0.4587671);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetBinError(25,2.030868);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,5.399484);
   hdirt_stack_3->SetBinContent(2,1.300972);
   hdirt_stack_3->SetBinContent(3,1.583221);
   hdirt_stack_3->SetBinContent(4,1.573592);
   hdirt_stack_3->SetBinContent(5,2.24419);
   hdirt_stack_3->SetBinContent(6,1.090589);
   hdirt_stack_3->SetBinContent(7,1.365909);
   hdirt_stack_3->SetBinContent(8,0.6143302);
   hdirt_stack_3->SetBinContent(9,0.5758626);
   hdirt_stack_3->SetBinContent(10,0.9257255);
   hdirt_stack_3->SetBinContent(11,0.399291);
   hdirt_stack_3->SetBinContent(12,0.3851607);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.5303817);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1443594);
   hdirt_stack_3->SetBinContent(23,0.165479);
   hdirt_stack_3->SetBinContent(25,0.3895662);
   hdirt_stack_3->SetBinError(1,1.14865);
   hdirt_stack_3->SetBinError(2,0.6411415);
   hdirt_stack_3->SetBinError(3,0.7164928);
   hdirt_stack_3->SetBinError(4,0.5706);
   hdirt_stack_3->SetBinError(5,0.8258343);
   hdirt_stack_3->SetBinError(6,0.5347264);
   hdirt_stack_3->SetBinError(7,0.9783825);
   hdirt_stack_3->SetBinError(8,0.39051);
   hdirt_stack_3->SetBinError(9,0.3389606);
   hdirt_stack_3->SetBinError(10,0.5393673);
   hdirt_stack_3->SetBinError(11,0.399291);
   hdirt_stack_3->SetBinError(12,0.2830491);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4158979);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1443594);
   hdirt_stack_3->SetBinError(23,0.165479);
   hdirt_stack_3->SetBinError(25,0.3895662);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,69.02064);
   houtFV_stack_4->SetBinContent(2,16.26085);
   houtFV_stack_4->SetBinContent(3,17.27823);
   houtFV_stack_4->SetBinContent(4,16.09736);
   houtFV_stack_4->SetBinContent(5,12.28354);
   houtFV_stack_4->SetBinContent(6,11.66444);
   houtFV_stack_4->SetBinContent(7,13.06465);
   houtFV_stack_4->SetBinContent(8,7.509131);
   houtFV_stack_4->SetBinContent(9,5.774509);
   houtFV_stack_4->SetBinContent(10,2.837462);
   houtFV_stack_4->SetBinContent(11,2.929362);
   houtFV_stack_4->SetBinContent(12,4.024407);
   houtFV_stack_4->SetBinContent(13,3.600428);
   houtFV_stack_4->SetBinContent(14,2.124392);
   houtFV_stack_4->SetBinContent(15,1.874475);
   houtFV_stack_4->SetBinContent(16,1.727811);
   houtFV_stack_4->SetBinContent(17,1.599079);
   houtFV_stack_4->SetBinContent(18,1.073786);
   houtFV_stack_4->SetBinContent(19,1.073786);
   houtFV_stack_4->SetBinContent(20,0.7868615);
   houtFV_stack_4->SetBinContent(21,1.26543);
   houtFV_stack_4->SetBinContent(22,0.7636718);
   houtFV_stack_4->SetBinContent(23,0.5352025);
   houtFV_stack_4->SetBinContent(24,0.6752914);
   houtFV_stack_4->SetBinContent(25,7.867321);
   houtFV_stack_4->SetBinError(1,4.167785);
   houtFV_stack_4->SetBinError(2,2.062406);
   houtFV_stack_4->SetBinError(3,2.112184);
   houtFV_stack_4->SetBinError(4,2.010688);
   houtFV_stack_4->SetBinError(5,1.787807);
   houtFV_stack_4->SetBinError(6,1.687618);
   houtFV_stack_4->SetBinError(7,2.310965);
   houtFV_stack_4->SetBinError(8,1.400204);
   houtFV_stack_4->SetBinError(9,1.18868);
   houtFV_stack_4->SetBinError(10,0.8089864);
   houtFV_stack_4->SetBinError(11,0.8777653);
   houtFV_stack_4->SetBinError(12,1.043209);
   houtFV_stack_4->SetBinError(13,0.9745251);
   houtFV_stack_4->SetBinError(14,0.7949484);
   houtFV_stack_4->SetBinError(15,0.6805893);
   houtFV_stack_4->SetBinError(16,0.6252474);
   houtFV_stack_4->SetBinError(17,0.6209332);
   houtFV_stack_4->SetBinError(18,0.5557297);
   houtFV_stack_4->SetBinError(19,0.5557297);
   houtFV_stack_4->SetBinError(20,0.3934307);
   houtFV_stack_4->SetBinError(21,0.5878314);
   houtFV_stack_4->SetBinError(22,0.4537029);
   houtFV_stack_4->SetBinError(23,0.3921167);
   houtFV_stack_4->SetBinError(24,0.4166196);
   houtFV_stack_4->SetBinError(25,1.424117);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.45439);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.074322);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9060901);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.311308);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8177595);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3674124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3332495);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4255744);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.05579997);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,55.85865);
   hNCpi0inFVres_stack_7->SetBinContent(2,14.49975);
   hNCpi0inFVres_stack_7->SetBinContent(3,11.25188);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.911589);
   hNCpi0inFVres_stack_7->SetBinContent(5,7.852054);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.291894);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.065454);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.92005);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.579098);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.968369);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.658558);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.176049);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.10139);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.697836);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.753636);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.795154);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.613304);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2926179);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.334968);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.307068);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.272198);
   hNCpi0inFVres_stack_7->SetBinError(1,2.368016);
   hNCpi0inFVres_stack_7->SetBinError(2,1.229986);
   hNCpi0inFVres_stack_7->SetBinError(3,1.057667);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9172136);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8934252);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8890217);
   hNCpi0inFVres_stack_7->SetBinError(7,0.834485);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7170416);
   hNCpi0inFVres_stack_7->SetBinError(9,0.500263);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5367925);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3358661);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5630397);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3413269);
   hNCpi0inFVres_stack_7->SetBinError(14,0.29151);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2941681);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3073253);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2517472);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(19,0.122146);
   hNCpi0inFVres_stack_7->SetBinError(20,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2051824);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2032767);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(24,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4916305);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,15.03002);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.067184);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.624856);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.92802);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.798226);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.295858);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.519226);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8923038);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4872539);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.249166);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5508089);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.630848);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6041657);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3865967);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3204477);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3763946);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2667597);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2452205);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1840142);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2548204);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,81.35184);
   hCCpi0inFV_stack_10->SetBinContent(2,15.76989);
   hCCpi0inFV_stack_10->SetBinContent(3,12.20104);
   hCCpi0inFV_stack_10->SetBinContent(4,10.00122);
   hCCpi0inFV_stack_10->SetBinContent(5,8.967198);
   hCCpi0inFV_stack_10->SetBinContent(6,9.932037);
   hCCpi0inFV_stack_10->SetBinContent(7,8.874929);
   hCCpi0inFV_stack_10->SetBinContent(8,7.472784);
   hCCpi0inFV_stack_10->SetBinContent(9,4.554647);
   hCCpi0inFV_stack_10->SetBinContent(10,4.393198);
   hCCpi0inFV_stack_10->SetBinContent(11,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(12,3.229203);
   hCCpi0inFV_stack_10->SetBinContent(13,2.682774);
   hCCpi0inFV_stack_10->SetBinContent(14,2.144191);
   hCCpi0inFV_stack_10->SetBinContent(15,1.7976);
   hCCpi0inFV_stack_10->SetBinContent(16,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(18,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(19,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(20,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(21,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(23,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(25,5.744843);
   hCCpi0inFV_stack_10->SetBinError(1,4.518048);
   hCCpi0inFV_stack_10->SetBinError(2,2.038003);
   hCCpi0inFV_stack_10->SetBinError(3,1.755649);
   hCCpi0inFV_stack_10->SetBinError(4,1.599249);
   hCCpi0inFV_stack_10->SetBinError(5,1.513087);
   hCCpi0inFV_stack_10->SetBinError(6,1.628736);
   hCCpi0inFV_stack_10->SetBinError(7,1.512426);
   hCCpi0inFV_stack_10->SetBinError(8,1.416164);
   hCCpi0inFV_stack_10->SetBinError(9,1.020323);
   hCCpi0inFV_stack_10->SetBinError(10,1.074885);
   hCCpi0inFV_stack_10->SetBinError(11,1.00081);
   hCCpi0inFV_stack_10->SetBinError(12,0.8550968);
   hCCpi0inFV_stack_10->SetBinError(13,0.8783089);
   hCCpi0inFV_stack_10->SetBinError(14,0.7850774);
   hCCpi0inFV_stack_10->SetBinError(15,0.7478393);
   hCCpi0inFV_stack_10->SetBinError(16,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(18,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(19,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(20,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(21,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(23,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(25,1.215044);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,15.19831);
   hNCinFV_stack_11->SetBinContent(2,2.977543);
   hNCinFV_stack_11->SetBinContent(3,3.124387);
   hNCinFV_stack_11->SetBinContent(4,2.835772);
   hNCinFV_stack_11->SetBinContent(5,1.608988);
   hNCinFV_stack_11->SetBinContent(6,0.785171);
   hNCinFV_stack_11->SetBinContent(7,1.752451);
   hNCinFV_stack_11->SetBinContent(8,1.75076);
   hNCinFV_stack_11->SetBinContent(9,1.660551);
   hNCinFV_stack_11->SetBinContent(10,1.072095);
   hNCinFV_stack_11->SetBinContent(11,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.1950248);
   hNCinFV_stack_11->SetBinContent(14,0.1950248);
   hNCinFV_stack_11->SetBinContent(15,0.785171);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.536893);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,1.072095);
   hNCinFV_stack_11->SetBinError(1,1.952975);
   hNCinFV_stack_11->SetBinError(2,0.854493);
   hNCinFV_stack_11->SetBinError(3,0.89917);
   hNCinFV_stack_11->SetBinError(4,0.808577);
   hNCinFV_stack_11->SetBinError(5,0.6801404);
   hNCinFV_stack_11->SetBinError(6,0.3925882);
   hNCinFV_stack_11->SetBinError(7,0.7345848);
   hNCinFV_stack_11->SetBinError(8,0.7341339);
   hNCinFV_stack_11->SetBinError(9,0.650847);
   hNCinFV_stack_11->SetBinError(10,0.5551335);
   hNCinFV_stack_11->SetBinError(11,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.1950249);
   hNCinFV_stack_11->SetBinError(14,0.1950249);
   hNCinFV_stack_11->SetBinError(15,0.3925882);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.3929602);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.5551335);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,39.57688);
   hnumuCCinFV_stack_12->SetBinContent(2,10.07755);
   hnumuCCinFV_stack_12->SetBinContent(3,7.442522);
   hnumuCCinFV_stack_12->SetBinContent(4,9.9587);
   hnumuCCinFV_stack_12->SetBinContent(5,4.053164);
   hnumuCCinFV_stack_12->SetBinContent(6,3.006152);
   hnumuCCinFV_stack_12->SetBinContent(7,3.523718);
   hnumuCCinFV_stack_12->SetBinContent(8,2.536978);
   hnumuCCinFV_stack_12->SetBinContent(9,2.183718);
   hnumuCCinFV_stack_12->SetBinContent(10,2.610953);
   hnumuCCinFV_stack_12->SetBinContent(11,0.9252522);
   hnumuCCinFV_stack_12->SetBinContent(12,1.013739);
   hnumuCCinFV_stack_12->SetBinContent(13,0.8299595);
   hnumuCCinFV_stack_12->SetBinContent(14,0.6330177);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(17,0.940885);
   hnumuCCinFV_stack_12->SetBinContent(18,0.7954943);
   hnumuCCinFV_stack_12->SetBinContent(19,0.2287565);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5675556);
   hnumuCCinFV_stack_12->SetBinContent(21,0.5522578);
   hnumuCCinFV_stack_12->SetBinContent(22,3.420469e-07);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,5.993076);
   hnumuCCinFV_stack_12->SetBinError(1,3.88934);
   hnumuCCinFV_stack_12->SetBinError(2,1.731431);
   hnumuCCinFV_stack_12->SetBinError(3,1.425286);
   hnumuCCinFV_stack_12->SetBinError(4,2.415033);
   hnumuCCinFV_stack_12->SetBinError(5,1.024112);
   hnumuCCinFV_stack_12->SetBinError(6,0.8968503);
   hnumuCCinFV_stack_12->SetBinError(7,0.9742763);
   hnumuCCinFV_stack_12->SetBinError(8,0.8881621);
   hnumuCCinFV_stack_12->SetBinError(9,0.7214946);
   hnumuCCinFV_stack_12->SetBinError(10,0.8994851);
   hnumuCCinFV_stack_12->SetBinError(11,0.4794006);
   hnumuCCinFV_stack_12->SetBinError(12,0.4542781);
   hnumuCCinFV_stack_12->SetBinError(13,0.4855919);
   hnumuCCinFV_stack_12->SetBinError(14,0.4644514);
   hnumuCCinFV_stack_12->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(17,0.5978896);
   hnumuCCinFV_stack_12->SetBinError(18,0.4704173);
   hnumuCCinFV_stack_12->SetBinError(19,0.2287565);
   hnumuCCinFV_stack_12->SetBinError(20,0.4091718);
   hnumuCCinFV_stack_12->SetBinError(21,0.4008725);
   hnumuCCinFV_stack_12->SetBinError(22,3.420469e-07);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.605735);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,4.373322);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.248059);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__23->SetBinContent(1,376.1075);
   hmcerror__23->SetBinContent(2,79.88638);
   hmcerror__23->SetBinContent(3,75.13835);
   hmcerror__23->SetBinContent(4,69.62183);
   hmcerror__23->SetBinContent(5,54.73714);
   hmcerror__23->SetBinContent(6,54.31006);
   hmcerror__23->SetBinContent(7,48.2033);
   hmcerror__23->SetBinContent(8,30.99337);
   hmcerror__23->SetBinContent(9,22.95706);
   hmcerror__23->SetBinContent(10,20.45209);
   hmcerror__23->SetBinContent(11,14.0922);
   hmcerror__23->SetBinContent(12,15.94432);
   hmcerror__23->SetBinContent(13,13.37533);
   hmcerror__23->SetBinContent(14,9.432126);
   hmcerror__23->SetBinContent(15,8.334425);
   hmcerror__23->SetBinContent(16,4.569096);
   hmcerror__23->SetBinContent(17,4.907076);
   hmcerror__23->SetBinContent(18,6.256165);
   hmcerror__23->SetBinContent(19,2.721086);
   hmcerror__23->SetBinContent(20,2.805486);
   hmcerror__23->SetBinContent(21,4.04902);
   hmcerror__23->SetBinContent(22,2.818608);
   hmcerror__23->SetBinContent(23,3.276495);
   hmcerror__23->SetBinContent(24,0.7589914);
   hmcerror__23->SetBinContent(25,38.25028);
   hmcerror__23->SetBinError(1,72.2433);
   hmcerror__23->SetBinError(2,23.58392);
   hmcerror__23->SetBinError(3,24.83846);
   hmcerror__23->SetBinError(4,27.60712);
   hmcerror__23->SetBinError(5,16.24964);
   hmcerror__23->SetBinError(6,22.60523);
   hmcerror__23->SetBinError(7,21.46081);
   hmcerror__23->SetBinError(8,14.98767);
   hmcerror__23->SetBinError(9,11.31679);
   hmcerror__23->SetBinError(10,10.71024);
   hmcerror__23->SetBinError(11,9.007724);
   hmcerror__23->SetBinError(12,10.55152);
   hmcerror__23->SetBinError(13,8.823871);
   hmcerror__23->SetBinError(14,6.592063);
   hmcerror__23->SetBinError(15,7.645538);
   hmcerror__23->SetBinError(16,4.226385);
   hmcerror__23->SetBinError(17,5.581253);
   hmcerror__23->SetBinError(18,6.126597);
   hmcerror__23->SetBinError(19,5.698998);
   hmcerror__23->SetBinError(20,3.248506);
   hmcerror__23->SetBinError(21,5.766486);
   hmcerror__23->SetBinError(22,4.739554);
   hmcerror__23->SetBinError(23,6.563143);
   hmcerror__23->SetBinError(24,1.579179);
   hmcerror__23->SetBinError(25,18.90551);
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
   367,
   80,
   80,
   34,
   27,
   49,
   46,
   27,
   18,
   20,
   16,
   14,
   17,
   8,
   4,
   5,
   5,
   3,
   5,
   5,
   3,
   3,
   3,
   4};
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
   19.15724,
   9.0683,
   9.0683,
   5.9703,
   5.3414,
   7.1318,
   6.9153,
   5.3414,
   4.4008,
   4.6266,
   4.1628,
   3.9102,
   4.2835,
   3.0307,
   2.29683,
   2.48995,
   2.48995,
   2.143368,
   2.48995,
   2.48995,
   2.143368,
   2.143368,
   2.143368,
   2.29683};
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
   19.15724,
   8.8665,
   8.8665,
   5.7635,
   5.1322,
   6.9277,
   6.7108,
   5.1322,
   4.1858,
   4.4133,
   3.9454,
   3.6898,
   4.0673,
   2.7896,
   1.98186,
   2.21064,
   2.21064,
   1.72422,
   2.21064,
   2.21064,
   1.72422,
   1.72422,
   1.72422,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,99);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(424.6873);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.91#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 843.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 29.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 18.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 195.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  131.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 181.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 92.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all");
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
   0.1920815,
   0.2952183,
   0.3305696,
   0.3965297,
   0.2968669,
   0.4162254,
   0.4452145,
   0.4835766,
   0.4929549,
   0.5236747,
   0.6391995,
   0.6617729,
   0.6597122,
   0.6988947,
   0.9173444,
   0.9249938,
   1.137389,
   0.9792897,
   2.094384,
   1.157912,
   1.424168,
   1.681523,
   2.003099,
   2.080628};
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
   0.1920815,
   0.2952183,
   0.3305696,
   0.3965297,
   0.2968669,
   0.4162254,
   0.4452145,
   0.4835766,
   0.4929549,
   0.5236747,
   0.6391995,
   0.6617729,
   0.6597122,
   0.6988947,
   0.9173444,
   0.9249938,
   1.137389,
   0.9792897,
   2.094384,
   1.157912,
   1.424168,
   1.681523,
   2.003099,
   2.080628};
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
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   0.16637,
   0.1853609,
   0.1736378,
   0.173783,
   0.1674572,
   0.1757048,
   0.1797764,
   0.2175525,
   0.2051297,
   0.2129697,
   0.2477922,
   0.1969513,
   0.2154399,
   0.2810101,
   0.2589046,
   0.3280879,
   0.3036948,
   0.3191374,
   0.3965941,
   0.4283082,
   0.3300831,
   0.4085941,
   0.37501,
   0.8734503};
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
   0.16637,
   0.1853609,
   0.1736378,
   0.173783,
   0.1674572,
   0.1757048,
   0.1797764,
   0.2175525,
   0.2051297,
   0.2129697,
   0.2477922,
   0.1969513,
   0.2154399,
   0.2810101,
   0.2589046,
   0.3280879,
   0.3036948,
   0.3191374,
   0.3965941,
   0.4283082,
   0.3300831,
   0.4085941,
   0.37501,
   0.8734503};
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
   0.9757847,
   1.001422,
   1.064703,
   0.4883526,
   0.4932665,
   0.902227,
   0.9542915,
   0.8711542,
   0.7840726,
   0.9778951,
   1.13538,
   0.8780555,
   1.270996,
   0.8481651,
   0.4799371,
   1.094308,
   1.018937,
   0.479527,
   1.837502,
   1.782222,
   0.7409201,
   1.064355,
   0.9156125,
   5.270152};
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
   0.05093555,
   0.113515,
   0.120688,
   0.08575328,
   0.09758273,
   0.1313164,
   0.1434611,
   0.1723401,
   0.191697,
   0.2262165,
   0.2953975,
   0.2452409,
   0.3202537,
   0.3213167,
   0.2755835,
   0.5449547,
   0.5074203,
   0.342601,
   0.9150576,
   0.8875288,
   0.5293548,
   0.7604349,
   0.6541648,
   3.026161};
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
   0.05093555,
   0.1109889,
   0.1180023,
   0.08278295,
   0.09376083,
   0.1275583,
   0.1392187,
   0.1655903,
   0.1823317,
   0.2157872,
   0.2799706,
   0.2314178,
   0.3040896,
   0.2957552,
   0.2377921,
   0.4838244,
   0.4505004,
   0.2756034,
   0.8124111,
   0.7879703,
   0.4258364,
   0.6117274,
   0.5262391,
   2.611176};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,99);
   Graph_Graph3032->SetMinimum(0.1232335);
   Graph_Graph3032->SetMaximum(8.655768);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);

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
