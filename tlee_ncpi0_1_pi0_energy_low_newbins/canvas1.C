#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 19:43:27 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
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
   pad1->Range(-46.15385,-19.5,338.4615,2156.289);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__1->SetBinContent(1,559.2008);
   hmc__1->SetBinContent(2,859.3166);
   hmc__1->SetBinContent(3,910.3564);
   hmc__1->SetBinContent(4,857.3332);
   hmc__1->SetBinContent(5,740.3907);
   hmc__1->SetBinContent(6,627.4456);
   hmc__1->SetBinContent(7,502.8611);
   hmc__1->SetBinContent(8,398.4141);
   hmc__1->SetBinContent(9,291.6458);
   hmc__1->SetBinContent(10,243.8017);
   hmc__1->SetBinContent(11,176.11);
   hmc__1->SetBinContent(12,136.7313);
   hmc__1->SetBinContent(13,115.4392);
   hmc__1->SetBinContent(14,78.15945);
   hmc__1->SetBinContent(15,61.35012);
   hmc__1->SetBinContent(16,48.56321);
   hmc__1->SetBinContent(17,33.39428);
   hmc__1->SetBinContent(18,26.877);
   hmc__1->SetBinContent(19,29.32511);
   hmc__1->SetBinContent(20,18.5037);
   hmc__1->SetBinContent(21,63.88361);
   hmc__1->SetBinError(1,130.196);
   hmc__1->SetBinError(2,193.0669);
   hmc__1->SetBinError(3,224.0901);
   hmc__1->SetBinError(4,221.2695);
   hmc__1->SetBinError(5,196.6485);
   hmc__1->SetBinError(6,173.0694);
   hmc__1->SetBinError(7,140.6425);
   hmc__1->SetBinError(8,108.5767);
   hmc__1->SetBinError(9,84.76934);
   hmc__1->SetBinError(10,70.40659);
   hmc__1->SetBinError(11,55.55028);
   hmc__1->SetBinError(12,41.95511);
   hmc__1->SetBinError(13,35.83162);
   hmc__1->SetBinError(14,26.87666);
   hmc__1->SetBinError(15,27.8149);
   hmc__1->SetBinError(16,22.9346);
   hmc__1->SetBinError(17,25.23036);
   hmc__1->SetBinError(18,11.02461);
   hmc__1->SetBinError(19,24.61965);
   hmc__1->SetBinError(20,11.99653);
   hmc__1->SetBinError(21,27.14661);
   hmc__1->SetMinimum(-19.5);
   hmc__1->SetMaximum(2047.5);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,300);
   hs1_stack_1->SetMinimum(-2.606256e-09);
   hs1_stack_1->SetMaximum(955.8743);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,11.52909);
   hbadmatch_stack_1->SetBinContent(2,25.48784);
   hbadmatch_stack_1->SetBinContent(3,21.40096);
   hbadmatch_stack_1->SetBinContent(4,25.55905);
   hbadmatch_stack_1->SetBinContent(5,21.47251);
   hbadmatch_stack_1->SetBinContent(6,19.63959);
   hbadmatch_stack_1->SetBinContent(7,12.58925);
   hbadmatch_stack_1->SetBinContent(8,8.583672);
   hbadmatch_stack_1->SetBinContent(9,6.902161);
   hbadmatch_stack_1->SetBinContent(10,5.385702);
   hbadmatch_stack_1->SetBinContent(11,4.147688);
   hbadmatch_stack_1->SetBinContent(12,2.472306);
   hbadmatch_stack_1->SetBinContent(13,2.006068);
   hbadmatch_stack_1->SetBinContent(14,0.298642);
   hbadmatch_stack_1->SetBinContent(15,1.683612);
   hbadmatch_stack_1->SetBinContent(16,1.068454);
   hbadmatch_stack_1->SetBinContent(17,0.4212931);
   hbadmatch_stack_1->SetBinContent(18,1.273271);
   hbadmatch_stack_1->SetBinContent(19,0.722615);
   hbadmatch_stack_1->SetBinContent(21,0.8163177);
   hbadmatch_stack_1->SetBinError(1,1.801331);
   hbadmatch_stack_1->SetBinError(2,2.731781);
   hbadmatch_stack_1->SetBinError(3,2.853126);
   hbadmatch_stack_1->SetBinError(4,3.356991);
   hbadmatch_stack_1->SetBinError(5,2.462432);
   hbadmatch_stack_1->SetBinError(6,2.621099);
   hbadmatch_stack_1->SetBinError(7,1.771582);
   hbadmatch_stack_1->SetBinError(8,1.505757);
   hbadmatch_stack_1->SetBinError(9,2.096983);
   hbadmatch_stack_1->SetBinError(10,1.3448);
   hbadmatch_stack_1->SetBinError(11,1.037835);
   hbadmatch_stack_1->SetBinError(12,0.86125);
   hbadmatch_stack_1->SetBinError(13,0.7435529);
   hbadmatch_stack_1->SetBinError(14,0.2215535);
   hbadmatch_stack_1->SetBinError(15,0.846579);
   hbadmatch_stack_1->SetBinError(16,0.5032355);
   hbadmatch_stack_1->SetBinError(17,0.29855);
   hbadmatch_stack_1->SetBinError(18,0.6535392);
   hbadmatch_stack_1->SetBinError(19,0.4346383);
   hbadmatch_stack_1->SetBinError(21,0.6163994);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,82.33904);
   hext_stack_2->SetBinContent(2,139.292);
   hext_stack_2->SetBinContent(3,138.0104);
   hext_stack_2->SetBinContent(4,120.3843);
   hext_stack_2->SetBinContent(5,77.4572);
   hext_stack_2->SetBinContent(6,55.23441);
   hext_stack_2->SetBinContent(7,40.92017);
   hext_stack_2->SetBinContent(8,36.28041);
   hext_stack_2->SetBinContent(9,16.02283);
   hext_stack_2->SetBinContent(10,12.78604);
   hext_stack_2->SetBinContent(11,8.09721);
   hext_stack_2->SetBinContent(12,9.615453);
   hext_stack_2->SetBinContent(13,5.027592);
   hext_stack_2->SetBinContent(14,1.78639);
   hext_stack_2->SetBinContent(15,1.704188);
   hext_stack_2->SetBinContent(16,3.379654);
   hext_stack_2->SetBinContent(17,1.055394);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.6487947);
   hext_stack_2->SetBinContent(20,0.9660115);
   hext_stack_2->SetBinContent(21,2.599588);
   hext_stack_2->SetBinError(1,6.250008);
   hext_stack_2->SetBinError(2,8.039753);
   hext_stack_2->SetBinError(3,8.017839);
   hext_stack_2->SetBinError(4,7.598177);
   hext_stack_2->SetBinError(5,5.895272);
   hext_stack_2->SetBinError(6,5.038966);
   hext_stack_2->SetBinError(7,4.361439);
   hext_stack_2->SetBinError(8,4.173697);
   hext_stack_2->SetBinError(9,2.662781);
   hext_stack_2->SetBinError(10,2.415961);
   hext_stack_2->SetBinError(11,1.872082);
   hext_stack_2->SetBinError(12,2.138779);
   hext_stack_2->SetBinError(13,1.426537);
   hext_stack_2->SetBinError(14,0.8039566);
   hext_stack_2->SetBinError(15,0.7656743);
   hext_stack_2->SetBinError(16,1.406172);
   hext_stack_2->SetBinError(17,0.6130171);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.4587671);
   hext_stack_2->SetBinError(20,0.7189592);
   hext_stack_2->SetBinError(21,0.9884288);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,4.537679);
   hdirt_stack_3->SetBinContent(2,17.17347);
   hdirt_stack_3->SetBinContent(3,13.90832);
   hdirt_stack_3->SetBinContent(4,10.86785);
   hdirt_stack_3->SetBinContent(5,10.67532);
   hdirt_stack_3->SetBinContent(6,3.819444);
   hdirt_stack_3->SetBinContent(7,3.781229);
   hdirt_stack_3->SetBinContent(8,4.191555);
   hdirt_stack_3->SetBinContent(9,2.349026);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,1.174808);
   hdirt_stack_3->SetBinContent(13,0.4142698);
   hdirt_stack_3->SetBinError(1,1.091535);
   hdirt_stack_3->SetBinError(2,2.170175);
   hdirt_stack_3->SetBinError(3,1.873251);
   hdirt_stack_3->SetBinError(4,1.877963);
   hdirt_stack_3->SetBinError(5,1.878353);
   hdirt_stack_3->SetBinError(6,1.051587);
   hdirt_stack_3->SetBinError(7,1.037262);
   hdirt_stack_3->SetBinError(8,1.442272);
   hdirt_stack_3->SetBinError(9,0.8035263);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.6076727);
   hdirt_stack_3->SetBinError(13,0.4142698);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,59.60492);
   houtFV_stack_4->SetBinContent(2,102.8114);
   houtFV_stack_4->SetBinContent(3,111.4126);
   houtFV_stack_4->SetBinContent(4,93.71938);
   houtFV_stack_4->SetBinContent(5,81.85866);
   houtFV_stack_4->SetBinContent(6,69.12689);
   houtFV_stack_4->SetBinContent(7,40.78952);
   houtFV_stack_4->SetBinContent(8,28.61113);
   houtFV_stack_4->SetBinContent(9,19.52522);
   houtFV_stack_4->SetBinContent(10,17.79337);
   houtFV_stack_4->SetBinContent(11,14.78233);
   houtFV_stack_4->SetBinContent(12,10.27271);
   houtFV_stack_4->SetBinContent(13,9.895216);
   houtFV_stack_4->SetBinContent(14,5.470558);
   houtFV_stack_4->SetBinContent(15,1.605738);
   houtFV_stack_4->SetBinContent(16,3.73335);
   houtFV_stack_4->SetBinContent(17,3.003603);
   houtFV_stack_4->SetBinContent(18,1.695809);
   houtFV_stack_4->SetBinContent(19,1.412273);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,2.347171);
   houtFV_stack_4->SetBinError(1,3.873767);
   houtFV_stack_4->SetBinError(2,5.063966);
   houtFV_stack_4->SetBinError(3,5.270061);
   houtFV_stack_4->SetBinError(4,5.009733);
   houtFV_stack_4->SetBinError(5,4.608526);
   houtFV_stack_4->SetBinError(6,4.174744);
   houtFV_stack_4->SetBinError(7,3.182673);
   houtFV_stack_4->SetBinError(8,2.628105);
   houtFV_stack_4->SetBinError(9,2.168741);
   houtFV_stack_4->SetBinError(10,2.129107);
   houtFV_stack_4->SetBinError(11,1.939904);
   houtFV_stack_4->SetBinError(12,1.725864);
   houtFV_stack_4->SetBinError(13,1.622871);
   houtFV_stack_4->SetBinError(14,1.17344);
   houtFV_stack_4->SetBinError(15,0.6522584);
   houtFV_stack_4->SetBinError(16,0.9449299);
   houtFV_stack_4->SetBinError(17,0.8961364);
   houtFV_stack_4->SetBinError(18,0.8134548);
   houtFV_stack_4->SetBinError(19,0.6510715);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.9054916);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,10.32579);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,13.90758);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,12.55895);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,13.13323);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.05869);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.130165);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.463203);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.263914);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.558058);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.352526);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.193114);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.361969);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.119074);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.29214);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.203293);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3729524);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2342583);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1820541);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7576709);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3706383);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.771819);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.29537);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.366211);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.205236);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.365905);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.13157);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.002167);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9424463);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9722793);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.188554);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8670651);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5585608);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.774705);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6010947);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5721012);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.721297);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1043646);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.08421782);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.07148423);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3623128);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1928416);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7045037);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.041559);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.827571);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.947084);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.917252);
   hNCpi0inFVqe_stack_6->SetBinContent(5,3.07494);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.366836);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.605928);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7254184);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6716285);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1217952);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3599139);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.52414);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2565304);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.217637);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1454196);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05405053);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.261386);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3606592);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.473117);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5230893);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5347068);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4571045);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3490342);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.205384);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2281169);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04615079);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1614941);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2981238);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1799647);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1417208);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1294067);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04087859);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,152.9418);
   hNCpi0inFVres_stack_7->SetBinContent(2,253.7451);
   hNCpi0inFVres_stack_7->SetBinContent(3,294.3146);
   hNCpi0inFVres_stack_7->SetBinContent(4,296.5688);
   hNCpi0inFVres_stack_7->SetBinContent(5,250.2888);
   hNCpi0inFVres_stack_7->SetBinContent(6,213.62);
   hNCpi0inFVres_stack_7->SetBinContent(7,175.681);
   hNCpi0inFVres_stack_7->SetBinContent(8,135.2031);
   hNCpi0inFVres_stack_7->SetBinContent(9,98.18407);
   hNCpi0inFVres_stack_7->SetBinContent(10,81.48215);
   hNCpi0inFVres_stack_7->SetBinContent(11,55.3408);
   hNCpi0inFVres_stack_7->SetBinContent(12,39.53399);
   hNCpi0inFVres_stack_7->SetBinContent(13,32.01805);
   hNCpi0inFVres_stack_7->SetBinContent(14,21.65646);
   hNCpi0inFVres_stack_7->SetBinContent(15,19.21768);
   hNCpi0inFVres_stack_7->SetBinContent(16,13.18257);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.975007);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.280633);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.76032);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.139876);
   hNCpi0inFVres_stack_7->SetBinContent(21,13.02968);
   hNCpi0inFVres_stack_7->SetBinError(1,4.268818);
   hNCpi0inFVres_stack_7->SetBinError(2,5.161036);
   hNCpi0inFVres_stack_7->SetBinError(3,5.581339);
   hNCpi0inFVres_stack_7->SetBinError(4,5.584574);
   hNCpi0inFVres_stack_7->SetBinError(5,5.002579);
   hNCpi0inFVres_stack_7->SetBinError(6,4.567664);
   hNCpi0inFVres_stack_7->SetBinError(7,4.419148);
   hNCpi0inFVres_stack_7->SetBinError(8,3.807306);
   hNCpi0inFVres_stack_7->SetBinError(9,3.164509);
   hNCpi0inFVres_stack_7->SetBinError(10,2.942437);
   hNCpi0inFVres_stack_7->SetBinError(11,2.435596);
   hNCpi0inFVres_stack_7->SetBinError(12,1.932557);
   hNCpi0inFVres_stack_7->SetBinError(13,1.890713);
   hNCpi0inFVres_stack_7->SetBinError(14,1.466666);
   hNCpi0inFVres_stack_7->SetBinError(15,1.609721);
   hNCpi0inFVres_stack_7->SetBinError(16,1.291724);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9607024);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9862514);
   hNCpi0inFVres_stack_7->SetBinError(19,1.020776);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7944323);
   hNCpi0inFVres_stack_7->SetBinError(21,1.49422);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,31.15807);
   hNCpi0inFVdis_stack_8->SetBinContent(2,49.27208);
   hNCpi0inFVdis_stack_8->SetBinContent(3,57.75739);
   hNCpi0inFVdis_stack_8->SetBinContent(4,56.1629);
   hNCpi0inFVdis_stack_8->SetBinContent(5,52.45128);
   hNCpi0inFVdis_stack_8->SetBinContent(6,44.92633);
   hNCpi0inFVdis_stack_8->SetBinContent(7,36.88792);
   hNCpi0inFVdis_stack_8->SetBinContent(8,32.2999);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.15619);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.99331);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.42364);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.9103);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.942966);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.476845);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.014006);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.670009);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.213282);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.073066);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.276313);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.29296);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.969599);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.02192);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.339452);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.563611);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.403529);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.541222);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.300728);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.996376);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.140472);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.418486);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.402092);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.10415);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.438064);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.056991);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.08133);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.104434);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.01593);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3730617);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4273264);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9111936);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7431509);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.322984);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1660867);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1194592);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4026322);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2468879);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1627324);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1316759);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04527036);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1616281);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1391982);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1140959);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02577893);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02577893);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,61.94483);
   hCCpi0inFV_stack_10->SetBinContent(2,98.52522);
   hCCpi0inFV_stack_10->SetBinContent(3,122.6401);
   hCCpi0inFV_stack_10->SetBinContent(4,120.7432);
   hCCpi0inFV_stack_10->SetBinContent(5,126.4628);
   hCCpi0inFV_stack_10->SetBinContent(6,113.9222);
   hCCpi0inFV_stack_10->SetBinContent(7,97.6165);
   hCCpi0inFV_stack_10->SetBinContent(8,76.97472);
   hCCpi0inFV_stack_10->SetBinContent(9,60.90289);
   hCCpi0inFV_stack_10->SetBinContent(10,56.80012);
   hCCpi0inFV_stack_10->SetBinContent(11,36.26612);
   hCCpi0inFV_stack_10->SetBinContent(12,26.25477);
   hCCpi0inFV_stack_10->SetBinContent(13,22.58722);
   hCCpi0inFV_stack_10->SetBinContent(14,15.97672);
   hCCpi0inFV_stack_10->SetBinContent(15,11.96742);
   hCCpi0inFV_stack_10->SetBinContent(16,9.594603);
   hCCpi0inFV_stack_10->SetBinContent(17,8.804383);
   hCCpi0inFV_stack_10->SetBinContent(18,5.084778);
   hCCpi0inFV_stack_10->SetBinContent(19,5.146484);
   hCCpi0inFV_stack_10->SetBinContent(20,3.377736);
   hCCpi0inFV_stack_10->SetBinContent(21,13.42438);
   hCCpi0inFV_stack_10->SetBinError(1,3.973011);
   hCCpi0inFV_stack_10->SetBinError(2,5.00248);
   hCCpi0inFV_stack_10->SetBinError(3,5.572345);
   hCCpi0inFV_stack_10->SetBinError(4,5.460623);
   hCCpi0inFV_stack_10->SetBinError(5,5.655363);
   hCCpi0inFV_stack_10->SetBinError(6,5.386998);
   hCCpi0inFV_stack_10->SetBinError(7,5.009038);
   hCCpi0inFV_stack_10->SetBinError(8,4.344232);
   hCCpi0inFV_stack_10->SetBinError(9,3.84623);
   hCCpi0inFV_stack_10->SetBinError(10,3.833005);
   hCCpi0inFV_stack_10->SetBinError(11,3.006141);
   hCCpi0inFV_stack_10->SetBinError(12,2.5843);
   hCCpi0inFV_stack_10->SetBinError(13,2.459631);
   hCCpi0inFV_stack_10->SetBinError(14,1.991378);
   hCCpi0inFV_stack_10->SetBinError(15,1.755636);
   hCCpi0inFV_stack_10->SetBinError(16,1.516197);
   hCCpi0inFV_stack_10->SetBinError(17,1.45582);
   hCCpi0inFV_stack_10->SetBinError(18,1.092166);
   hCCpi0inFV_stack_10->SetBinError(19,1.076016);
   hCCpi0inFV_stack_10->SetBinError(20,0.9001118);
   hCCpi0inFV_stack_10->SetBinError(21,1.823888);
   hCCpi0inFV_stack_10->SetEntries(4680);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,48.64558);
   hNCinFV_stack_11->SetBinContent(2,48.36591);
   hNCinFV_stack_11->SetBinContent(3,43.631);
   hNCinFV_stack_11->SetBinContent(4,44.87385);
   hNCinFV_stack_11->SetBinContent(5,43.04218);
   hNCinFV_stack_11->SetBinContent(6,37.51204);
   hNCinFV_stack_11->SetBinContent(7,36.08);
   hNCinFV_stack_11->SetBinContent(8,34.56973);
   hNCinFV_stack_11->SetBinContent(9,29.88393);
   hNCinFV_stack_11->SetBinContent(10,24.86595);
   hNCinFV_stack_11->SetBinContent(11,23.74788);
   hNCinFV_stack_11->SetBinContent(12,13.83258);
   hNCinFV_stack_11->SetBinContent(13,19.13477);
   hNCinFV_stack_11->SetBinContent(14,12.27374);
   hNCinFV_stack_11->SetBinContent(15,9.800083);
   hNCinFV_stack_11->SetBinContent(16,6.936153);
   hNCinFV_stack_11->SetBinContent(17,7.439478);
   hNCinFV_stack_11->SetBinContent(18,5.77218);
   hNCinFV_stack_11->SetBinContent(19,7.872907);
   hNCinFV_stack_11->SetBinContent(20,3.48786);
   hNCinFV_stack_11->SetBinContent(21,13.47312);
   hNCinFV_stack_11->SetBinError(1,3.569044);
   hNCinFV_stack_11->SetBinError(2,3.568431);
   hNCinFV_stack_11->SetBinError(3,3.28452);
   hNCinFV_stack_11->SetBinError(4,3.632171);
   hNCinFV_stack_11->SetBinError(5,3.247203);
   hNCinFV_stack_11->SetBinError(6,3.119116);
   hNCinFV_stack_11->SetBinError(7,3.145978);
   hNCinFV_stack_11->SetBinError(8,3.078642);
   hNCinFV_stack_11->SetBinError(9,3.083636);
   hNCinFV_stack_11->SetBinError(10,2.77789);
   hNCinFV_stack_11->SetBinError(11,2.766929);
   hNCinFV_stack_11->SetBinError(12,1.93465);
   hNCinFV_stack_11->SetBinError(13,2.849662);
   hNCinFV_stack_11->SetBinError(14,2.20941);
   hNCinFV_stack_11->SetBinError(15,2.024825);
   hNCinFV_stack_11->SetBinError(16,1.717317);
   hNCinFV_stack_11->SetBinError(17,1.786291);
   hNCinFV_stack_11->SetBinError(18,1.384254);
   hNCinFV_stack_11->SetBinError(19,1.782364);
   hNCinFV_stack_11->SetBinError(20,1.01399);
   hNCinFV_stack_11->SetBinError(21,2.261407);
   hNCinFV_stack_11->SetEntries(2180);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,87.48073);
   hnumuCCinFV_stack_12->SetBinContent(2,96.32483);
   hnumuCCinFV_stack_12->SetBinContent(3,85.48445);
   hnumuCCinFV_stack_12->SetBinContent(4,66.68269);
   hnumuCCinFV_stack_12->SetBinContent(5,60.08669);
   hnumuCCinFV_stack_12->SetBinContent(6,55.39294);
   hnumuCCinFV_stack_12->SetBinContent(7,45.65968);
   hnumuCCinFV_stack_12->SetBinContent(8,31.76488);
   hnumuCCinFV_stack_12->SetBinContent(9,27.38166);
   hnumuCCinFV_stack_12->SetBinContent(10,19.62207);
   hnumuCCinFV_stack_12->SetBinContent(11,15.79134);
   hnumuCCinFV_stack_12->SetBinContent(12,13.82941);
   hnumuCCinFV_stack_12->SetBinContent(13,12.44897);
   hnumuCCinFV_stack_12->SetBinContent(14,9.603296);
   hnumuCCinFV_stack_12->SetBinContent(15,6.692329);
   hnumuCCinFV_stack_12->SetBinContent(16,3.957739);
   hnumuCCinFV_stack_12->SetBinContent(17,2.102163);
   hnumuCCinFV_stack_12->SetBinContent(18,2.784209);
   hnumuCCinFV_stack_12->SetBinContent(19,2.313914);
   hnumuCCinFV_stack_12->SetBinContent(20,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(21,6.108283);
   hnumuCCinFV_stack_12->SetBinError(1,5.777607);
   hnumuCCinFV_stack_12->SetBinError(2,5.721381);
   hnumuCCinFV_stack_12->SetBinError(3,6.006599);
   hnumuCCinFV_stack_12->SetBinError(4,4.496851);
   hnumuCCinFV_stack_12->SetBinError(5,4.548314);
   hnumuCCinFV_stack_12->SetBinError(6,4.190543);
   hnumuCCinFV_stack_12->SetBinError(7,4.496104);
   hnumuCCinFV_stack_12->SetBinError(8,3.18329);
   hnumuCCinFV_stack_12->SetBinError(9,2.693064);
   hnumuCCinFV_stack_12->SetBinError(10,2.367407);
   hnumuCCinFV_stack_12->SetBinError(11,2.09999);
   hnumuCCinFV_stack_12->SetBinError(12,1.87541);
   hnumuCCinFV_stack_12->SetBinError(13,1.826379);
   hnumuCCinFV_stack_12->SetBinError(14,1.578207);
   hnumuCCinFV_stack_12->SetBinError(15,1.284261);
   hnumuCCinFV_stack_12->SetBinError(16,0.9603742);
   hnumuCCinFV_stack_12->SetBinError(17,0.6787356);
   hnumuCCinFV_stack_12->SetBinError(18,0.8323376);
   hnumuCCinFV_stack_12->SetBinError(19,0.7526441);
   hnumuCCinFV_stack_12->SetBinError(20,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(21,1.217492);
   hnumuCCinFV_stack_12->SetEntries(2561);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,7.644624);
   hnueCCinFV_stack_13->SetBinContent(2,12.41743);
   hnueCCinFV_stack_13->SetBinContent(3,6.171253);
   hnueCCinFV_stack_13->SetBinContent(4,5.318125);
   hnueCCinFV_stack_13->SetBinContent(5,2.214875);
   hnueCCinFV_stack_13->SetBinContent(6,2.591992);
   hnueCCinFV_stack_13->SetBinContent(7,3.750281);
   hnueCCinFV_stack_13->SetBinContent(8,1.909181);
   hnueCCinFV_stack_13->SetBinContent(9,2.108181);
   hnueCCinFV_stack_13->SetBinContent(10,1.397008);
   hnueCCinFV_stack_13->SetBinContent(11,0.785171);
   hnueCCinFV_stack_13->SetBinContent(12,1.123658);
   hnueCCinFV_stack_13->SetBinContent(13,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(14,1.324658);
   hnueCCinFV_stack_13->SetBinContent(15,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(16,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(19,0.4138155);
   hnueCCinFV_stack_13->SetBinContent(20,1.279433);
   hnueCCinFV_stack_13->SetBinContent(21,1.289601);
   hnueCCinFV_stack_13->SetBinError(1,2.029477);
   hnueCCinFV_stack_13->SetBinError(2,2.642274);
   hnueCCinFV_stack_13->SetBinError(3,1.67328);
   hnueCCinFV_stack_13->SetBinError(4,1.245564);
   hnueCCinFV_stack_13->SetBinError(5,0.8542058);
   hnueCCinFV_stack_13->SetBinError(6,0.7551147);
   hnueCCinFV_stack_13->SetBinError(7,1.511419);
   hnueCCinFV_stack_13->SetBinError(8,0.8077622);
   hnueCCinFV_stack_13->SetBinError(9,0.7701581);
   hnueCCinFV_stack_13->SetBinError(10,0.5825588);
   hnueCCinFV_stack_13->SetBinError(11,0.3925882);
   hnueCCinFV_stack_13->SetBinError(12,0.5188295);
   hnueCCinFV_stack_13->SetBinError(13,0.3397478);
   hnueCCinFV_stack_13->SetBinError(14,1.104353);
   hnueCCinFV_stack_13->SetBinError(15,0.2441371);
   hnueCCinFV_stack_13->SetBinError(16,0.3743698);
   hnueCCinFV_stack_13->SetBinError(19,0.2929666);
   hnueCCinFV_stack_13->SetBinError(20,0.6886788);
   hnueCCinFV_stack_13->SetBinError(21,0.5962229);
   hnueCCinFV_stack_13->SetEntries(187);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__2->SetBinContent(1,559.2008);
   hmcerror__2->SetBinContent(2,859.3166);
   hmcerror__2->SetBinContent(3,910.3564);
   hmcerror__2->SetBinContent(4,857.3332);
   hmcerror__2->SetBinContent(5,740.3907);
   hmcerror__2->SetBinContent(6,627.4456);
   hmcerror__2->SetBinContent(7,502.8611);
   hmcerror__2->SetBinContent(8,398.4141);
   hmcerror__2->SetBinContent(9,291.6458);
   hmcerror__2->SetBinContent(10,243.8017);
   hmcerror__2->SetBinContent(11,176.11);
   hmcerror__2->SetBinContent(12,136.7313);
   hmcerror__2->SetBinContent(13,115.4392);
   hmcerror__2->SetBinContent(14,78.15945);
   hmcerror__2->SetBinContent(15,61.35012);
   hmcerror__2->SetBinContent(16,48.56321);
   hmcerror__2->SetBinContent(17,33.39428);
   hmcerror__2->SetBinContent(18,26.877);
   hmcerror__2->SetBinContent(19,29.32511);
   hmcerror__2->SetBinContent(20,18.5037);
   hmcerror__2->SetBinContent(21,63.88361);
   hmcerror__2->SetBinError(1,130.196);
   hmcerror__2->SetBinError(2,193.0669);
   hmcerror__2->SetBinError(3,224.0901);
   hmcerror__2->SetBinError(4,221.2695);
   hmcerror__2->SetBinError(5,196.6485);
   hmcerror__2->SetBinError(6,173.0694);
   hmcerror__2->SetBinError(7,140.6425);
   hmcerror__2->SetBinError(8,108.5767);
   hmcerror__2->SetBinError(9,84.76934);
   hmcerror__2->SetBinError(10,70.40659);
   hmcerror__2->SetBinError(11,55.55028);
   hmcerror__2->SetBinError(12,41.95511);
   hmcerror__2->SetBinError(13,35.83162);
   hmcerror__2->SetBinError(14,26.87666);
   hmcerror__2->SetBinError(15,27.8149);
   hmcerror__2->SetBinError(16,22.9346);
   hmcerror__2->SetBinError(17,25.23036);
   hmcerror__2->SetBinError(18,11.02461);
   hmcerror__2->SetBinError(19,24.61965);
   hmcerror__2->SetBinError(20,11.99653);
   hmcerror__2->SetBinError(21,27.14661);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3001[20] = {
   538,
   813,
   975,
   801,
   779,
   612,
   488,
   374,
   280,
   188,
   143,
   117,
   55,
   74,
   46,
   34,
   27,
   18,
   12,
   21};
   Double_t _felx3001[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3001[20] = {
   23.19483,
   28.51315,
   31.22499,
   28.30194,
   27.91057,
   24.73863,
   22.09072,
   19.33908,
   16.7332,
   13.71131,
   11.95826,
   10.81665,
   7.546,
   8.7275,
   6.9153,
   5.9703,
   5.3414,
   4.4008,
   3.64022,
   4.7354};
   Double_t _fehx3001[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3001[20] = {
   23.19483,
   28.51315,
   31.22499,
   28.30194,
   27.91057,
   24.73863,
   22.09072,
   19.33908,
   16.7332,
   13.71131,
   11.95826,
   10.81665,
   7.3425,
   8.5253,
   6.7108,
   5.7635,
   5.1322,
   4.1858,
   3.4155,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,330);
   Graph_Graph3001->SetMinimum(7.523802);
   Graph_Graph3001->SetMaximum(1106.012);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6395.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 172.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 751.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 677.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  113.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2159.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  464.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1081.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 501.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 647.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 51.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3002[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3002[20] = {
   0.2328252,
   0.2246749,
   0.2461564,
   0.2580905,
   0.265601,
   0.2758317,
   0.2796846,
   0.2725224,
   0.2906585,
   0.2887863,
   0.3154294,
   0.3068435,
   0.310394,
   0.3438695,
   0.4533798,
   0.4722628,
   0.7555294,
   0.4101877,
   0.8395418,
   0.6483314};
   Double_t _fehx3002[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3002[20] = {
   0.2328252,
   0.2246749,
   0.2461564,
   0.2580905,
   0.265601,
   0.2758317,
   0.2796846,
   0.2725224,
   0.2906585,
   0.2887863,
   0.3154294,
   0.3068435,
   0.310394,
   0.3438695,
   0.4533798,
   0.4722628,
   0.7555294,
   0.4101877,
   0.8395418,
   0.6483314};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,330);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3003[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3003[20] = {
   0.1961596,
   0.2150128,
   0.2414275,
   0.2501034,
   0.2592727,
   0.2688403,
   0.269384,
   0.25969,
   0.2661152,
   0.2575253,
   0.2631208,
   0.2553725,
   0.2701138,
   0.2629254,
   0.267568,
   0.2352183,
   0.249731,
   0.25899,
   0.2643473,
   0.2604985};
   Double_t _fehx3003[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3003[20] = {
   0.1961596,
   0.2150128,
   0.2414275,
   0.2501034,
   0.2592727,
   0.2688403,
   0.269384,
   0.25969,
   0.2661152,
   0.2575253,
   0.2631208,
   0.2553725,
   0.2701138,
   0.2629254,
   0.267568,
   0.2352183,
   0.249731,
   0.25899,
   0.2643473,
   0.2604985};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,330);
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
   
   Double_t _fx3004[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3004[20] = {
   0.9620873,
   0.9461007,
   1.071009,
   0.9342925,
   1.052147,
   0.9753833,
   0.9704468,
   0.9387219,
   0.9600685,
   0.7711186,
   0.8119924,
   0.8556929,
   0.4764414,
   0.9467825,
   0.7497948,
   0.7001185,
   0.8085216,
   0.6697177,
   0.4092057,
   1.134908};
   Double_t _felx3004[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3004[20] = {
   0.04147853,
   0.0331812,
   0.03429974,
   0.0330116,
   0.03769708,
   0.03942753,
   0.04393006,
   0.04854015,
   0.05737507,
   0.0562396,
   0.06790221,
   0.07910884,
   0.06536776,
   0.1116628,
   0.1127186,
   0.1229388,
   0.1599495,
   0.1637385,
   0.1241332,
   0.2559164};
   Double_t _fehx3004[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3004[20] = {
   0.04147853,
   0.0331812,
   0.03429974,
   0.0330116,
   0.03769708,
   0.03942753,
   0.04393006,
   0.04854015,
   0.05737507,
   0.0562396,
   0.06790221,
   0.07910884,
   0.06360492,
   0.1090757,
   0.1093853,
   0.1186804,
   0.153685,
   0.1557391,
   0.1164702,
   0.2444322};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,330);
   Graph_Graph3004->SetMinimum(0.1756457);
   Graph_Graph3004->SetMaximum(1.488767);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_energy_low_all",20,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
