#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 18:06:29 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-230.7692,-26.84,1692.308,2967.939);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__1->SetBinContent(1,191.3269);
   hmc__1->SetBinContent(2,870.1894);
   hmc__1->SetBinContent(3,1280.771);
   hmc__1->SetBinContent(4,1162.448);
   hmc__1->SetBinContent(5,921.2236);
   hmc__1->SetBinContent(6,792.027);
   hmc__1->SetBinContent(7,606.4625);
   hmc__1->SetBinContent(8,439.0061);
   hmc__1->SetBinContent(9,305.4401);
   hmc__1->SetBinContent(10,229.0414);
   hmc__1->SetBinContent(11,142.1374);
   hmc__1->SetBinContent(12,114.0777);
   hmc__1->SetBinContent(13,82.22043);
   hmc__1->SetBinContent(14,64.15234);
   hmc__1->SetBinContent(15,44.99659);
   hmc__1->SetBinContent(16,38.74657);
   hmc__1->SetBinContent(17,32.79141);
   hmc__1->SetBinContent(18,26.16983);
   hmc__1->SetBinContent(19,20.94661);
   hmc__1->SetBinContent(20,17.9147);
   hmc__1->SetBinContent(21,15.54729);
   hmc__1->SetBinContent(22,16.58292);
   hmc__1->SetBinContent(23,12.05732);
   hmc__1->SetBinContent(24,9.507265);
   hmc__1->SetBinContent(25,9.211449);
   hmc__1->SetBinContent(26,82.50833);
   hmc__1->SetBinError(1,47.58338);
   hmc__1->SetBinError(2,183.4121);
   hmc__1->SetBinError(3,290.9199);
   hmc__1->SetBinError(4,295.4562);
   hmc__1->SetBinError(5,240.5598);
   hmc__1->SetBinError(6,203.1416);
   hmc__1->SetBinError(7,146.8327);
   hmc__1->SetBinError(8,98.31282);
   hmc__1->SetBinError(9,65.50276);
   hmc__1->SetBinError(10,49.73845);
   hmc__1->SetBinError(11,30.51322);
   hmc__1->SetBinError(12,25.07758);
   hmc__1->SetBinError(13,19.40801);
   hmc__1->SetBinError(14,14.50656);
   hmc__1->SetBinError(15,10.03613);
   hmc__1->SetBinError(16,8.361957);
   hmc__1->SetBinError(17,6.989318);
   hmc__1->SetBinError(18,6.656493);
   hmc__1->SetBinError(19,5.189308);
   hmc__1->SetBinError(20,4.181222);
   hmc__1->SetBinError(21,3.768348);
   hmc__1->SetBinError(22,4.471984);
   hmc__1->SetBinError(23,3.385164);
   hmc__1->SetBinError(24,3.026997);
   hmc__1->SetBinError(25,2.473077);
   hmc__1->SetBinError(26,15.3231);
   hmc__1->SetMinimum(-26.84);
   hmc__1->SetMaximum(2818.2);
   hmc__1->SetEntries(7468.322);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-2.264013e-08);
   hs1_stack_1->SetMaximum(1344.809);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.9768147);
   hbadmatch_stack_1->SetBinContent(2,2.396964);
   hbadmatch_stack_1->SetBinContent(3,3.933511);
   hbadmatch_stack_1->SetBinContent(4,5.995028);
   hbadmatch_stack_1->SetBinContent(5,4.727068);
   hbadmatch_stack_1->SetBinContent(6,2.840818);
   hbadmatch_stack_1->SetBinContent(7,2.065328);
   hbadmatch_stack_1->SetBinContent(8,3.322123);
   hbadmatch_stack_1->SetBinContent(9,2.927843);
   hbadmatch_stack_1->SetBinContent(10,1.125349);
   hbadmatch_stack_1->SetBinContent(11,0.9455363);
   hbadmatch_stack_1->SetBinContent(12,1.10907);
   hbadmatch_stack_1->SetBinContent(13,0.8017401);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.4100147);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.305647);
   hbadmatch_stack_1->SetBinError(1,0.4368475);
   hbadmatch_stack_1->SetBinError(2,0.791583);
   hbadmatch_stack_1->SetBinError(3,1.016647);
   hbadmatch_stack_1->SetBinError(4,1.380016);
   hbadmatch_stack_1->SetBinError(5,1.075421);
   hbadmatch_stack_1->SetBinError(6,0.8465036);
   hbadmatch_stack_1->SetBinError(7,0.7722778);
   hbadmatch_stack_1->SetBinError(8,0.9363909);
   hbadmatch_stack_1->SetBinError(9,0.9621231);
   hbadmatch_stack_1->SetBinError(10,0.5194673);
   hbadmatch_stack_1->SetBinError(11,0.4879398);
   hbadmatch_stack_1->SetBinError(12,0.5691767);
   hbadmatch_stack_1->SetBinError(13,0.488938);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.4100147);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.2242141);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,5.650435);
   hext_stack_2->SetBinContent(2,17.76451);
   hext_stack_2->SetBinContent(3,22.86435);
   hext_stack_2->SetBinContent(4,17.64205);
   hext_stack_2->SetBinContent(5,18.61959);
   hext_stack_2->SetBinContent(6,15.08435);
   hext_stack_2->SetBinContent(7,16.28538);
   hext_stack_2->SetBinContent(8,11.11934);
   hext_stack_2->SetBinContent(9,6.221437);
   hext_stack_2->SetBinContent(10,2.759582);
   hext_stack_2->SetBinContent(11,2.110787);
   hext_stack_2->SetBinContent(12,1.379791);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,0.9660115);
   hext_stack_2->SetBinContent(15,0.973192);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(26,2.028585);
   hext_stack_2->SetBinError(1,1.647409);
   hext_stack_2->SetBinError(2,2.910758);
   hext_stack_2->SetBinError(3,3.332437);
   hext_stack_2->SetBinError(4,2.820088);
   hext_stack_2->SetBinError(5,3.119957);
   hext_stack_2->SetBinError(6,2.811917);
   hext_stack_2->SetBinError(7,2.944508);
   hext_stack_2->SetBinError(8,2.458955);
   hext_stack_2->SetBinError(9,1.731894);
   hext_stack_2->SetBinError(10,0.98084);
   hext_stack_2->SetBinError(11,0.8669371);
   hext_stack_2->SetBinError(12,0.6935586);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,0.7189592);
   hext_stack_2->SetBinError(15,0.5618727);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(26,0.8315593);
   hext_stack_2->SetEntries(323);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.3569671);
   hdirt_stack_3->SetBinContent(2,0.7773166);
   hdirt_stack_3->SetBinContent(3,0.7967575);
   hdirt_stack_3->SetBinContent(4,1.326369);
   hdirt_stack_3->SetBinContent(5,1.256782);
   hdirt_stack_3->SetBinContent(6,0.5200806);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.1545866);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(1,0.258803);
   hdirt_stack_3->SetBinError(2,0.3990577);
   hdirt_stack_3->SetBinError(3,0.4646348);
   hdirt_stack_3->SetBinError(4,0.5714535);
   hdirt_stack_3->SetBinError(5,0.5424736);
   hdirt_stack_3->SetBinError(6,0.4061954);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.1545866);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(30);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,1.692279);
   houtFV_stack_4->SetBinContent(2,8.168686);
   houtFV_stack_4->SetBinContent(3,8.482265);
   houtFV_stack_4->SetBinContent(4,9.153855);
   houtFV_stack_4->SetBinContent(5,7.571255);
   houtFV_stack_4->SetBinContent(6,5.701983);
   houtFV_stack_4->SetBinContent(7,4.600533);
   houtFV_stack_4->SetBinContent(8,6.08128);
   houtFV_stack_4->SetBinContent(9,2.739501);
   houtFV_stack_4->SetBinContent(10,4.161747);
   houtFV_stack_4->SetBinContent(11,0.6086679);
   houtFV_stack_4->SetBinContent(12,1.256551);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.7018039);
   houtFV_stack_4->SetBinContent(19,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.3934307);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9801958);
   houtFV_stack_4->SetBinError(1,0.5783806);
   houtFV_stack_4->SetBinError(2,2.10424);
   houtFV_stack_4->SetBinError(3,1.421873);
   houtFV_stack_4->SetBinError(4,1.495526);
   houtFV_stack_4->SetBinError(5,1.42473);
   houtFV_stack_4->SetBinError(6,1.176094);
   houtFV_stack_4->SetBinError(7,1.359311);
   houtFV_stack_4->SetBinError(8,1.26669);
   houtFV_stack_4->SetBinError(9,0.7730242);
   houtFV_stack_4->SetBinError(10,1.340815);
   houtFV_stack_4->SetBinError(11,0.3515622);
   houtFV_stack_4->SetBinError(12,0.6221238);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(18,0.496482);
   houtFV_stack_4->SetBinError(19,0.3921167);
   houtFV_stack_4->SetBinError(22,0.2781975);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4383608);
   houtFV_stack_4->SetEntries(267);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.04659828);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1203867);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1274642);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2905084);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1037718);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1113119);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2081776);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.013628);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.602545);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.00677);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.67879);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.59636);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.89437);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.02274);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.269679);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.503605);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.648278);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.448098);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.425605);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.232675);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.700942);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.018712);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.405315);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2861435);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.3984283);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6379001);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1378285);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2219427);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.7400821);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1841348);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.3091259);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.7950422);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6799294);
   hNCpi0inFVres_stack_7->SetBinError(2,0.947754);
   hNCpi0inFVres_stack_7->SetBinError(3,1.22723);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9905334);
   hNCpi0inFVres_stack_7->SetBinError(5,1.185314);
   hNCpi0inFVres_stack_7->SetBinError(6,1.211411);
   hNCpi0inFVres_stack_7->SetBinError(7,1.153994);
   hNCpi0inFVres_stack_7->SetBinError(8,1.047368);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9152571);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7984301);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9267853);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4386916);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7859315);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5362708);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4963704);
   hNCpi0inFVres_stack_7->SetBinError(16,0.172032);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1331822);
   hNCpi0inFVres_stack_7->SetBinError(18,0.174445);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3180153);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1238125);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1379155);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5558068);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1389007);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2076346);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2631898);
   hNCpi0inFVres_stack_7->SetEntries(2070);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.301579);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.05563);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.4251);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.577248);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.76088);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.769097);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.351704);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.10252);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.972331);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.106301);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.533871);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.656966);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.83788);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.480291);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5864105);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.840264);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7483944);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3855931);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2783359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7100146);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.569004);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6934159);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.211791);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.230086);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.3031152);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.350532);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3215208);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.284292);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9972213);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9852788);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.280115);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8727692);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.049329);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.112383);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9130434);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.858036);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9122814);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.582653);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4443436);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4135884);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2330033);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3632761);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2673632);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1469058);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1458657);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2306131);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2990951);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5757898);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1386935);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7739052);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2854693);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6984477);
   hNCpi0inFVdis_stack_8->SetEntries(1636);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,140.7293);
   hCCpi0inFV_stack_10->SetBinContent(2,646.1545);
   hCCpi0inFV_stack_10->SetBinContent(3,991.4559);
   hCCpi0inFV_stack_10->SetBinContent(4,906.8357);
   hCCpi0inFV_stack_10->SetBinContent(5,716.9227);
   hCCpi0inFV_stack_10->SetBinContent(6,637.3478);
   hCCpi0inFV_stack_10->SetBinContent(7,486.0659);
   hCCpi0inFV_stack_10->SetBinContent(8,329.2344);
   hCCpi0inFV_stack_10->SetBinContent(9,224.5633);
   hCCpi0inFV_stack_10->SetBinContent(10,166.0066);
   hCCpi0inFV_stack_10->SetBinContent(11,100.2048);
   hCCpi0inFV_stack_10->SetBinContent(12,78.46362);
   hCCpi0inFV_stack_10->SetBinContent(13,56.97461);
   hCCpi0inFV_stack_10->SetBinContent(14,44.14893);
   hCCpi0inFV_stack_10->SetBinContent(15,31.16718);
   hCCpi0inFV_stack_10->SetBinContent(16,26.62991);
   hCCpi0inFV_stack_10->SetBinContent(17,20.01002);
   hCCpi0inFV_stack_10->SetBinContent(18,17.08408);
   hCCpi0inFV_stack_10->SetBinContent(19,13.45551);
   hCCpi0inFV_stack_10->SetBinContent(20,12.15255);
   hCCpi0inFV_stack_10->SetBinContent(21,11.32909);
   hCCpi0inFV_stack_10->SetBinContent(22,10.55007);
   hCCpi0inFV_stack_10->SetBinContent(23,8.162674);
   hCCpi0inFV_stack_10->SetBinContent(24,4.596675);
   hCCpi0inFV_stack_10->SetBinContent(25,5.614909);
   hCCpi0inFV_stack_10->SetBinContent(26,46.36385);
   hCCpi0inFV_stack_10->SetBinError(1,6.044349);
   hCCpi0inFV_stack_10->SetBinError(2,12.75617);
   hCCpi0inFV_stack_10->SetBinError(3,15.86416);
   hCCpi0inFV_stack_10->SetBinError(4,15.14683);
   hCCpi0inFV_stack_10->SetBinError(5,13.46414);
   hCCpi0inFV_stack_10->SetBinError(6,12.68792);
   hCCpi0inFV_stack_10->SetBinError(7,11.12803);
   hCCpi0inFV_stack_10->SetBinError(8,9.074938);
   hCCpi0inFV_stack_10->SetBinError(9,7.504829);
   hCCpi0inFV_stack_10->SetBinError(10,6.501658);
   hCCpi0inFV_stack_10->SetBinError(11,4.982055);
   hCCpi0inFV_stack_10->SetBinError(12,4.56682);
   hCCpi0inFV_stack_10->SetBinError(13,3.813404);
   hCCpi0inFV_stack_10->SetBinError(14,3.296483);
   hCCpi0inFV_stack_10->SetBinError(15,2.824007);
   hCCpi0inFV_stack_10->SetBinError(16,2.558122);
   hCCpi0inFV_stack_10->SetBinError(17,2.269373);
   hCCpi0inFV_stack_10->SetBinError(18,2.103991);
   hCCpi0inFV_stack_10->SetBinError(19,1.900248);
   hCCpi0inFV_stack_10->SetBinError(20,1.750639);
   hCCpi0inFV_stack_10->SetBinError(21,1.733921);
   hCCpi0inFV_stack_10->SetBinError(22,1.62984);
   hCCpi0inFV_stack_10->SetBinError(23,1.429094);
   hCCpi0inFV_stack_10->SetBinError(24,1.093948);
   hCCpi0inFV_stack_10->SetBinError(25,1.159567);
   hCCpi0inFV_stack_10->SetBinError(26,3.334186);
   hCCpi0inFV_stack_10->SetEntries(24435);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,1.463836);
   hNCinFV_stack_11->SetBinContent(2,5.858724);
   hNCinFV_stack_11->SetBinContent(3,9.23477);
   hNCinFV_stack_11->SetBinContent(4,6.208436);
   hNCinFV_stack_11->SetBinContent(5,7.18755);
   hNCinFV_stack_11->SetBinContent(6,3.609717);
   hNCinFV_stack_11->SetBinContent(7,4.589913);
   hNCinFV_stack_11->SetBinContent(8,2.252388);
   hNCinFV_stack_11->SetBinContent(9,1.176911);
   hNCinFV_stack_11->SetBinContent(10,2.984305);
   hNCinFV_stack_11->SetBinContent(11,0.785171);
   hNCinFV_stack_11->SetBinContent(12,1.123658);
   hNCinFV_stack_11->SetBinContent(14,0.9303237);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.7336084);
   hNCinFV_stack_11->SetBinContent(19,0.3934307);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.536893);
   hNCinFV_stack_11->SetBinContent(26,2.000729);
   hNCinFV_stack_11->SetBinError(1,0.620407);
   hNCinFV_stack_11->SetBinError(2,1.241348);
   hNCinFV_stack_11->SetBinError(3,1.533128);
   hNCinFV_stack_11->SetBinError(4,1.209137);
   hNCinFV_stack_11->SetBinError(5,1.360932);
   hNCinFV_stack_11->SetBinError(6,1.000956);
   hNCinFV_stack_11->SetBinError(7,1.092737);
   hNCinFV_stack_11->SetBinError(8,0.7350883);
   hNCinFV_stack_11->SetBinError(9,0.4804759);
   hNCinFV_stack_11->SetBinError(10,0.8560416);
   hNCinFV_stack_11->SetBinError(11,0.3925882);
   hNCinFV_stack_11->SetBinError(12,0.5188295);
   hNCinFV_stack_11->SetBinError(14,0.4814682);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.4394482);
   hNCinFV_stack_11->SetBinError(19,0.2781975);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.3929602);
   hNCinFV_stack_11->SetBinError(26,0.7343859);
   hNCinFV_stack_11->SetEntries(225);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,36.08321);
   hnumuCCinFV_stack_12->SetBinContent(2,168.0934);
   hnumuCCinFV_stack_12->SetBinContent(3,216.5406);
   hnumuCCinFV_stack_12->SetBinContent(4,193.2791);
   hnumuCCinFV_stack_12->SetBinContent(5,141.6249);
   hnumuCCinFV_stack_12->SetBinContent(6,108.1071);
   hnumuCCinFV_stack_12->SetBinContent(7,73.61941);
   hnumuCCinFV_stack_12->SetBinContent(8,69.01514);
   hnumuCCinFV_stack_12->SetBinContent(9,54.95616);
   hnumuCCinFV_stack_12->SetBinContent(10,43.05091);
   hnumuCCinFV_stack_12->SetBinContent(11,27.8703);
   hnumuCCinFV_stack_12->SetBinContent(12,26.12726);
   hnumuCCinFV_stack_12->SetBinContent(13,18.80327);
   hnumuCCinFV_stack_12->SetBinContent(14,13.85375);
   hnumuCCinFV_stack_12->SetBinContent(15,9.799988);
   hnumuCCinFV_stack_12->SetBinContent(16,9.763201);
   hnumuCCinFV_stack_12->SetBinContent(17,10.21241);
   hnumuCCinFV_stack_12->SetBinContent(18,5.613287);
   hnumuCCinFV_stack_12->SetBinContent(19,5.321831);
   hnumuCCinFV_stack_12->SetBinContent(20,4.037237);
   hnumuCCinFV_stack_12->SetBinContent(21,2.746898);
   hnumuCCinFV_stack_12->SetBinContent(22,2.989359);
   hnumuCCinFV_stack_12->SetBinContent(23,2.899268);
   hnumuCCinFV_stack_12->SetBinContent(24,3.176353);
   hnumuCCinFV_stack_12->SetBinContent(25,2.258725);
   hnumuCCinFV_stack_12->SetBinContent(26,24.51517);
   hnumuCCinFV_stack_12->SetBinError(1,3.059878);
   hnumuCCinFV_stack_12->SetBinError(2,7.876338);
   hnumuCCinFV_stack_12->SetBinError(3,8.62801);
   hnumuCCinFV_stack_12->SetBinError(4,8.398166);
   hnumuCCinFV_stack_12->SetBinError(5,6.425649);
   hnumuCCinFV_stack_12->SetBinError(6,5.650053);
   hnumuCCinFV_stack_12->SetBinError(7,4.379702);
   hnumuCCinFV_stack_12->SetBinError(8,4.354165);
   hnumuCCinFV_stack_12->SetBinError(9,3.914602);
   hnumuCCinFV_stack_12->SetBinError(10,3.421195);
   hnumuCCinFV_stack_12->SetBinError(11,2.600166);
   hnumuCCinFV_stack_12->SetBinError(12,3.333994);
   hnumuCCinFV_stack_12->SetBinError(13,2.145016);
   hnumuCCinFV_stack_12->SetBinError(14,1.908762);
   hnumuCCinFV_stack_12->SetBinError(15,1.632581);
   hnumuCCinFV_stack_12->SetBinError(16,1.646529);
   hnumuCCinFV_stack_12->SetBinError(17,1.690986);
   hnumuCCinFV_stack_12->SetBinError(18,1.19348);
   hnumuCCinFV_stack_12->SetBinError(19,1.177508);
   hnumuCCinFV_stack_12->SetBinError(20,1.00919);
   hnumuCCinFV_stack_12->SetBinError(21,0.7747517);
   hnumuCCinFV_stack_12->SetBinError(22,0.85024);
   hnumuCCinFV_stack_12->SetBinError(23,0.8300426);
   hnumuCCinFV_stack_12->SetBinError(24,0.9117592);
   hnumuCCinFV_stack_12->SetBinError(25,0.8318142);
   hnumuCCinFV_stack_12->SetBinError(26,2.51918);
   hnumuCCinFV_stack_12->SetEntries(5250);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,2.030676);
   hnueCCinFV_stack_13->SetBinContent(4,1.608988);
   hnueCCinFV_stack_13->SetBinContent(5,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(6,1.123658);
   hnueCCinFV_stack_13->SetBinContent(7,1.463836);
   hnueCCinFV_stack_13->SetBinContent(8,1.949166);
   hnueCCinFV_stack_13->SetBinContent(9,1.127039);
   hnueCCinFV_stack_13->SetBinContent(10,1.198402);
   hnueCCinFV_stack_13->SetBinContent(11,0.6301904);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,2.877799);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.8002572);
   hnueCCinFV_stack_13->SetBinError(4,0.6801404);
   hnueCCinFV_stack_13->SetBinError(5,0.48078);
   hnueCCinFV_stack_13->SetBinError(6,0.5188295);
   hnueCCinFV_stack_13->SetBinError(7,0.620407);
   hnueCCinFV_stack_13->SetBinError(8,0.7604681);
   hnueCCinFV_stack_13->SetBinError(9,0.5201044);
   hnueCCinFV_stack_13->SetBinError(10,0.5510694);
   hnueCCinFV_stack_13->SetBinError(11,0.3654999);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.3397478);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.4810838);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.8997006);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(1,191.3269);
   hmcerror__2->SetBinContent(2,870.1894);
   hmcerror__2->SetBinContent(3,1280.771);
   hmcerror__2->SetBinContent(4,1162.448);
   hmcerror__2->SetBinContent(5,921.2236);
   hmcerror__2->SetBinContent(6,792.027);
   hmcerror__2->SetBinContent(7,606.4625);
   hmcerror__2->SetBinContent(8,439.0061);
   hmcerror__2->SetBinContent(9,305.4401);
   hmcerror__2->SetBinContent(10,229.0414);
   hmcerror__2->SetBinContent(11,142.1374);
   hmcerror__2->SetBinContent(12,114.0777);
   hmcerror__2->SetBinContent(13,82.22043);
   hmcerror__2->SetBinContent(14,64.15234);
   hmcerror__2->SetBinContent(15,44.99659);
   hmcerror__2->SetBinContent(16,38.74657);
   hmcerror__2->SetBinContent(17,32.79141);
   hmcerror__2->SetBinContent(18,26.16983);
   hmcerror__2->SetBinContent(19,20.94661);
   hmcerror__2->SetBinContent(20,17.9147);
   hmcerror__2->SetBinContent(21,15.54729);
   hmcerror__2->SetBinContent(22,16.58292);
   hmcerror__2->SetBinContent(23,12.05732);
   hmcerror__2->SetBinContent(24,9.507265);
   hmcerror__2->SetBinContent(25,9.211449);
   hmcerror__2->SetBinContent(26,82.50833);
   hmcerror__2->SetBinError(1,47.58338);
   hmcerror__2->SetBinError(2,183.4121);
   hmcerror__2->SetBinError(3,290.9199);
   hmcerror__2->SetBinError(4,295.4562);
   hmcerror__2->SetBinError(5,240.5598);
   hmcerror__2->SetBinError(6,203.1416);
   hmcerror__2->SetBinError(7,146.8327);
   hmcerror__2->SetBinError(8,98.31282);
   hmcerror__2->SetBinError(9,65.50276);
   hmcerror__2->SetBinError(10,49.73845);
   hmcerror__2->SetBinError(11,30.51322);
   hmcerror__2->SetBinError(12,25.07758);
   hmcerror__2->SetBinError(13,19.40801);
   hmcerror__2->SetBinError(14,14.50656);
   hmcerror__2->SetBinError(15,10.03613);
   hmcerror__2->SetBinError(16,8.361957);
   hmcerror__2->SetBinError(17,6.989318);
   hmcerror__2->SetBinError(18,6.656493);
   hmcerror__2->SetBinError(19,5.189308);
   hmcerror__2->SetBinError(20,4.181222);
   hmcerror__2->SetBinError(21,3.768348);
   hmcerror__2->SetBinError(22,4.471984);
   hmcerror__2->SetBinError(23,3.385164);
   hmcerror__2->SetBinError(24,3.026997);
   hmcerror__2->SetBinError(25,2.473077);
   hmcerror__2->SetBinError(26,15.3231);
   hmcerror__2->SetEntries(7468.322);

   ci = TColor::GetColor("#999999");
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3001[25] = {
   179,
   970,
   1342,
   1069,
   807,
   609,
   463,
   345,
   283,
   204,
   141,
   118,
   67,
   53,
   38,
   40,
   27,
   27,
   24,
   17,
   13,
   17,
   12,
   8,
   8};
   Double_t _felx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3001[25] = {
   13.37909,
   31.14482,
   36.63332,
   32.69557,
   28.40775,
   24.67793,
   21.51743,
   18.57418,
   16.8226,
   14.28286,
   11.87434,
   10.86278,
   8.3119,
   7.4105,
   6.3013,
   6.4604,
   5.3414,
   5.3414,
   5.0476,
   4.2835,
   3.77763,
   4.2835,
   3.64022,
   3.0307,
   3.0307};
   Double_t _fehx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3001[25] = {
   13.37909,
   31.14482,
   36.63332,
   32.69557,
   28.40775,
   24.67793,
   21.51743,
   18.57418,
   16.8226,
   14.28286,
   11.87434,
   10.86278,
   8.1094,
   7.2068,
   6.0955,
   6.2549,
   5.1322,
   5.1322,
   4.837,
   4.0673,
   3.5552,
   4.0673,
   3.4155,
   2.7896,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(4.47237);
   Graph_Graph3001->SetMaximum(1516);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=40.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6881.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.7","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 142.4","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.9","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 63.2","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  101.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  92.5","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5685.9","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.9","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1249.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 15.8","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3002[25] = {
   0.248702,
   0.2107727,
   0.2271445,
   0.2541672,
   0.2611308,
   0.2564832,
   0.2421134,
   0.2239441,
   0.2144537,
   0.2171592,
   0.2146742,
   0.2198289,
   0.2360485,
   0.2261268,
   0.223042,
   0.2158115,
   0.2131448,
   0.2543575,
   0.2477398,
   0.2333962,
   0.2423798,
   0.2696741,
   0.2807559,
   0.3183877,
   0.2684787};
   Double_t _fehx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3002[25] = {
   0.248702,
   0.2107727,
   0.2271445,
   0.2541672,
   0.2611308,
   0.2564832,
   0.2421134,
   0.2239441,
   0.2144537,
   0.2171592,
   0.2146742,
   0.2198289,
   0.2360485,
   0.2261268,
   0.223042,
   0.2158115,
   0.2131448,
   0.2543575,
   0.2477398,
   0.2333962,
   0.2423798,
   0.2696741,
   0.2807559,
   0.3183877,
   0.2684787};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
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
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3003[25] = {
   0.248702,
   0.2107727,
   0.2271445,
   0.2541672,
   0.2611308,
   0.2564832,
   0.2421134,
   0.2239441,
   0.2144537,
   0.2171592,
   0.2146742,
   0.2198289,
   0.2360485,
   0.2261268,
   0.223042,
   0.2158115,
   0.2131448,
   0.2543575,
   0.2477398,
   0.2333962,
   0.2423798,
   0.2696741,
   0.2807559,
   0.3183877,
   0.2684787};
   Double_t _fehx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3003[25] = {
   0.248702,
   0.2107727,
   0.2271445,
   0.2541672,
   0.2611308,
   0.2564832,
   0.2421134,
   0.2239441,
   0.2144537,
   0.2171592,
   0.2146742,
   0.2198289,
   0.2360485,
   0.2261268,
   0.223042,
   0.2158115,
   0.2131448,
   0.2543575,
   0.2477398,
   0.2333962,
   0.2423798,
   0.2696741,
   0.2807559,
   0.3183877,
   0.2684787};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3004[25] = {
   0.9355714,
   1.1147,
   1.047807,
   0.9196111,
   0.8760088,
   0.7689131,
   0.7634438,
   0.785866,
   0.926532,
   0.8906686,
   0.991998,
   1.034382,
   0.8148826,
   0.8261584,
   0.8445084,
   1.032349,
   0.8233863,
   1.031722,
   1.14577,
   0.9489415,
   0.8361586,
   1.025151,
   0.9952458,
   0.8414618,
   0.8684845};
   Double_t _felx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3004[25] = {
   0.06992789,
   0.03579086,
   0.02860256,
   0.02812648,
   0.03083697,
   0.03115793,
   0.03548024,
   0.0423096,
   0.05507661,
   0.06235928,
   0.0835413,
   0.09522262,
   0.1010929,
   0.1155141,
   0.1400395,
   0.1667348,
   0.1628902,
   0.2041052,
   0.2409746,
   0.2391053,
   0.2429768,
   0.258308,
   0.3019095,
   0.3187773,
   0.3290145};
   Double_t _fehx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3004[25] = {
   0.06992789,
   0.03579086,
   0.02860256,
   0.02812648,
   0.03083697,
   0.03115793,
   0.03548024,
   0.0423096,
   0.05507661,
   0.06235928,
   0.0835413,
   0.09522262,
   0.09862999,
   0.1123388,
   0.1354658,
   0.1614311,
   0.1565105,
   0.1961113,
   0.2309205,
   0.227037,
   0.2286701,
   0.2452705,
   0.2832718,
   0.2934177,
   0.3028405};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.4372839);
   Graph_Graph3004->SetMaximum(1.462091);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
