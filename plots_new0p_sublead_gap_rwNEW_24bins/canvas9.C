#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 16:38:22 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-1.372439,101.5385,151.7628);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__25->SetBinContent(1,68.62194);
   hmc__25->SetBinContent(2,45.54457);
   hmc__25->SetBinContent(3,45.13877);
   hmc__25->SetBinContent(4,32.44272);
   hmc__25->SetBinContent(5,31.09706);
   hmc__25->SetBinContent(6,28.6646);
   hmc__25->SetBinContent(7,27.04039);
   hmc__25->SetBinContent(8,26.7926);
   hmc__25->SetBinContent(9,17.96679);
   hmc__25->SetBinContent(10,16.54491);
   hmc__25->SetBinContent(11,17.44059);
   hmc__25->SetBinContent(12,11.84756);
   hmc__25->SetBinContent(13,13.7282);
   hmc__25->SetBinContent(14,8.46698);
   hmc__25->SetBinContent(15,9.777573);
   hmc__25->SetBinContent(16,8.297054);
   hmc__25->SetBinContent(17,4.405264);
   hmc__25->SetBinContent(18,3.577701);
   hmc__25->SetBinContent(19,5.456385);
   hmc__25->SetBinContent(20,4.735514);
   hmc__25->SetBinContent(21,4.266469);
   hmc__25->SetBinContent(22,5.158785);
   hmc__25->SetBinContent(23,2.822645);
   hmc__25->SetBinContent(24,2.73843);
   hmc__25->SetBinContent(25,37.96192);
   hmc__25->SetBinError(1,28.90138);
   hmc__25->SetBinError(2,22.90854);
   hmc__25->SetBinError(3,18.49928);
   hmc__25->SetBinError(4,14.90595);
   hmc__25->SetBinError(5,14.18558);
   hmc__25->SetBinError(6,11.60563);
   hmc__25->SetBinError(7,13.09694);
   hmc__25->SetBinError(8,19.26355);
   hmc__25->SetBinError(9,11.90928);
   hmc__25->SetBinError(10,14.13081);
   hmc__25->SetBinError(11,11.3179);
   hmc__25->SetBinError(12,7.986236);
   hmc__25->SetBinError(13,8.506861);
   hmc__25->SetBinError(14,6.447277);
   hmc__25->SetBinError(15,11.67259);
   hmc__25->SetBinError(16,9.889002);
   hmc__25->SetBinError(17,5.244005);
   hmc__25->SetBinError(18,3.702518);
   hmc__25->SetBinError(19,6.628115);
   hmc__25->SetBinError(20,6.13603);
   hmc__25->SetBinError(21,4.205926);
   hmc__25->SetBinError(22,5.585496);
   hmc__25->SetBinError(23,3.70075);
   hmc__25->SetBinError(24,3.702429);
   hmc__25->SetBinError(25,19.47359);
   hmc__25->SetMinimum(-1.372439);
   hmc__25->SetMaximum(144.1061);
   hmc__25->SetEntries(469.1651);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,90);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(72.05305);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,2.533951);
   hbadmatch_stack_1->SetBinContent(2,1.67162);
   hbadmatch_stack_1->SetBinContent(3,1.677001);
   hbadmatch_stack_1->SetBinContent(4,0.3917402);
   hbadmatch_stack_1->SetBinContent(5,0.9113972);
   hbadmatch_stack_1->SetBinContent(6,0.9286332);
   hbadmatch_stack_1->SetBinContent(7,1.26712);
   hbadmatch_stack_1->SetBinContent(8,0.3900497);
   hbadmatch_stack_1->SetBinContent(9,1.242956);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.8753801);
   hbadmatch_stack_1->SetBinContent(12,0.3934307);
   hbadmatch_stack_1->SetBinContent(13,0.5901461);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.6803553);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.390963);
   hbadmatch_stack_1->SetBinContent(22,0.4410358);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,1.517085);
   hbadmatch_stack_1->SetBinError(1,0.9057912);
   hbadmatch_stack_1->SetBinError(2,0.5943469);
   hbadmatch_stack_1->SetBinError(3,0.7011343);
   hbadmatch_stack_1->SetBinError(4,0.2770047);
   hbadmatch_stack_1->SetBinError(5,0.5336872);
   hbadmatch_stack_1->SetBinError(6,0.48078);
   hbadmatch_stack_1->SetBinError(7,0.5883944);
   hbadmatch_stack_1->SetBinError(8,0.2758068);
   hbadmatch_stack_1->SetBinError(9,0.5091228);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.5191111);
   hbadmatch_stack_1->SetBinError(12,0.2781975);
   hbadmatch_stack_1->SetBinError(13,0.340721);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.4810838);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.390963);
   hbadmatch_stack_1->SetBinError(22,0.4410358);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.638046);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,3.889996);
   hext_stack_2->SetBinContent(2,1.37261);
   hext_stack_2->SetBinContent(3,2.6702);
   hext_stack_2->SetBinContent(4,1.704188);
   hext_stack_2->SetBinContent(5,1.297589);
   hext_stack_2->SetBinContent(6,2.110787);
   hext_stack_2->SetBinContent(7,1.779209);
   hext_stack_2->SetBinContent(8,3.565599);
   hext_stack_2->SetBinContent(9,2.103607);
   hext_stack_2->SetBinContent(10,1.614806);
   hext_stack_2->SetBinContent(11,1.454812);
   hext_stack_2->SetBinContent(12,1.779209);
   hext_stack_2->SetBinContent(13,2.26801);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,2.103607);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.973192);
   hext_stack_2->SetBinContent(22,1.048213);
   hext_stack_2->SetBinContent(25,2.510206);
   hext_stack_2->SetBinError(1,1.264566);
   hext_stack_2->SetBinError(2,0.8259691);
   hext_stack_2->SetBinError(3,1.050314);
   hext_stack_2->SetBinError(4,0.7656743);
   hext_stack_2->SetBinError(5,0.6487947);
   hext_stack_2->SetBinError(6,0.8669371);
   hext_stack_2->SetBinError(7,0.9206235);
   hext_stack_2->SetBinError(8,1.22225);
   hext_stack_2->SetBinError(9,0.9761052);
   hext_stack_2->SetBinError(10,0.8528597);
   hext_stack_2->SetBinError(11,0.8615765);
   hext_stack_2->SetBinError(12,0.9206235);
   hext_stack_2->SetBinError(13,1.035838);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.9761052);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.5618727);
   hext_stack_2->SetBinError(22,0.7595995);
   hext_stack_2->SetBinError(25,1.057404);
   hext_stack_2->SetEntries(92);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,0.405009);
   hdirt_stack_3->SetBinContent(3,0.4149213);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.4049124);
   hdirt_stack_3->SetBinContent(21,0.2623434);
   hdirt_stack_3->SetBinError(1,0.2984544);
   hdirt_stack_3->SetBinError(3,0.4149213);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(19,0.4049124);
   hdirt_stack_3->SetBinError(21,0.2623434);
   hdirt_stack_3->SetEntries(11);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,12.17926);
   houtFV_stack_4->SetBinContent(2,5.717737);
   houtFV_stack_4->SetBinContent(3,4.915352);
   houtFV_stack_4->SetBinContent(4,3.480861);
   houtFV_stack_4->SetBinContent(5,6.137023);
   houtFV_stack_4->SetBinContent(6,5.034906);
   houtFV_stack_4->SetBinContent(7,3.593391);
   houtFV_stack_4->SetBinContent(8,5.508685);
   houtFV_stack_4->SetBinContent(9,1.897493);
   houtFV_stack_4->SetBinContent(10,2.132484);
   houtFV_stack_4->SetBinContent(11,3.455806);
   houtFV_stack_4->SetBinContent(12,2.444031);
   houtFV_stack_4->SetBinContent(13,3.680075);
   houtFV_stack_4->SetBinContent(14,1.923265);
   houtFV_stack_4->SetBinContent(15,1.320373);
   houtFV_stack_4->SetBinContent(16,1.855576);
   houtFV_stack_4->SetBinContent(17,0.8224597);
   houtFV_stack_4->SetBinContent(18,0.5874136);
   houtFV_stack_4->SetBinContent(19,0.9286332);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,0.3917402);
   houtFV_stack_4->SetBinContent(22,1.123658);
   houtFV_stack_4->SetBinContent(23,0.3934307);
   houtFV_stack_4->SetBinContent(24,1.123658);
   houtFV_stack_4->SetBinContent(25,7.952682);
   houtFV_stack_4->SetBinError(1,1.711224);
   houtFV_stack_4->SetBinError(2,1.152032);
   houtFV_stack_4->SetBinError(3,1.151294);
   houtFV_stack_4->SetBinError(4,0.8557002);
   houtFV_stack_4->SetBinError(5,1.246341);
   houtFV_stack_4->SetBinError(6,1.11017);
   houtFV_stack_4->SetBinError(7,0.959734);
   houtFV_stack_4->SetBinError(8,1.237391);
   houtFV_stack_4->SetBinError(9,0.6926351);
   houtFV_stack_4->SetBinError(10,0.712431);
   houtFV_stack_4->SetBinError(11,0.9210955);
   houtFV_stack_4->SetBinError(12,0.759648);
   houtFV_stack_4->SetBinError(13,0.9202114);
   houtFV_stack_4->SetBinError(14,0.715232);
   houtFV_stack_4->SetBinError(15,0.5548703);
   houtFV_stack_4->SetBinError(16,0.6794384);
   houtFV_stack_4->SetBinError(17,0.5128819);
   houtFV_stack_4->SetBinError(18,0.4205312);
   houtFV_stack_4->SetBinError(19,0.48078);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.2770047);
   houtFV_stack_4->SetBinError(22,0.5188295);
   houtFV_stack_4->SetBinError(23,0.2781975);
   houtFV_stack_4->SetBinError(24,0.5188295);
   houtFV_stack_4->SetBinError(25,1.489209);
   houtFV_stack_4->SetEntries(344);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(26);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,10.61084);
   hNCpi0inFVres_stack_7->SetBinContent(2,16.02463);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.91444);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.05724);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.853966);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.004675);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.710066);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.186095);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.838846);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.251778);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.096748);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.397079);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.077562);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.580266);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.855194);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.088772);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.046254);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.6267538);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6691039);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.850954);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.501704);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.018522);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.307068);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.290056);
   hNCpi0inFVres_stack_7->SetBinError(1,1.042719);
   hNCpi0inFVres_stack_7->SetBinError(2,1.325384);
   hNCpi0inFVres_stack_7->SetBinError(3,1.199819);
   hNCpi0inFVres_stack_7->SetBinError(4,1.048674);
   hNCpi0inFVres_stack_7->SetBinError(5,0.95549);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9249259);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9386407);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7080286);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7547265);
   hNCpi0inFVres_stack_7->SetBinError(10,0.684457);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5854069);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4317776);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4719735);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5788325);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4855902);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4017382);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3185193);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1943021);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2548204);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3098478);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2454852);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3652876);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2032767);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6234006);
   hNCpi0inFVres_stack_7->SetEntries(2042);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.844152);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.718934);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.909994);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.497062);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.71619);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.966962);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.757876);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.895712);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.505944);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8914717);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6267538);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4600178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.473804);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5161542);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.198876);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5743885);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5653962);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4304992);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5352198);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4308761);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5212201);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4757384);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4378204);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2452205);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4472753);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2278037);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1943021);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1399647);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2438946);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.277838);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2943888);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3984141);
   hNCpi0inFVdis_stack_8->SetEntries(441);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,14.5188);
   hCCpi0inFV_stack_10->SetBinContent(2,8.70745);
   hCCpi0inFV_stack_10->SetBinContent(3,11.22326);
   hCCpi0inFV_stack_10->SetBinContent(4,7.143053);
   hCCpi0inFV_stack_10->SetBinContent(5,6.735794);
   hCCpi0inFV_stack_10->SetBinContent(6,5.40938);
   hCCpi0inFV_stack_10->SetBinContent(7,7.031731);
   hCCpi0inFV_stack_10->SetBinContent(8,5.802057);
   hCCpi0inFV_stack_10->SetBinContent(9,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(10,4.396306);
   hCCpi0inFV_stack_10->SetBinContent(11,3.665968);
   hCCpi0inFV_stack_10->SetBinContent(12,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(13,1.720633);
   hCCpi0inFV_stack_10->SetBinContent(14,1.072095);
   hCCpi0inFV_stack_10->SetBinContent(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(16,0.8177277);
   hCCpi0inFV_stack_10->SetBinContent(17,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(18,1.070405);
   hCCpi0inFV_stack_10->SetBinContent(19,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(20,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(21,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(22,0.4227465);
   hCCpi0inFV_stack_10->SetBinContent(23,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(25,4.921682);
   hCCpi0inFV_stack_10->SetBinError(1,1.966758);
   hCCpi0inFV_stack_10->SetBinError(2,1.503586);
   hCCpi0inFV_stack_10->SetBinError(3,1.699116);
   hCCpi0inFV_stack_10->SetBinError(4,1.367031);
   hCCpi0inFV_stack_10->SetBinError(5,1.345765);
   hCCpi0inFV_stack_10->SetBinError(6,1.106901);
   hCCpi0inFV_stack_10->SetBinError(7,1.353506);
   hCCpi0inFV_stack_10->SetBinError(8,1.193774);
   hCCpi0inFV_stack_10->SetBinError(9,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(10,1.039832);
   hCCpi0inFV_stack_10->SetBinError(11,0.9522475);
   hCCpi0inFV_stack_10->SetBinError(12,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(13,0.6713023);
   hCCpi0inFV_stack_10->SetBinError(14,0.5551335);
   hCCpi0inFV_stack_10->SetBinError(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(16,0.409871);
   hCCpi0inFV_stack_10->SetBinError(17,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(18,0.5545368);
   hCCpi0inFV_stack_10->SetBinError(19,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(20,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(21,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(22,0.2998197);
   hCCpi0inFV_stack_10->SetBinError(23,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(24,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(25,1.080913);
   hCCpi0inFV_stack_10->SetEntries(397);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,1.020533);
   hNCinFV_stack_11->SetBinContent(2,2.050601);
   hNCinFV_stack_11->SetBinContent(3,2.782519);
   hNCinFV_stack_11->SetBinContent(4,2.539312);
   hNCinFV_stack_11->SetBinContent(5,1.517089);
   hNCinFV_stack_11->SetBinContent(6,1.073786);
   hNCinFV_stack_11->SetBinContent(7,1.125349);
   hNCinFV_stack_11->SetBinContent(8,2.002419);
   hNCinFV_stack_11->SetBinContent(9,1.412273);
   hNCinFV_stack_11->SetBinContent(10,0.7336084);
   hNCinFV_stack_11->SetBinContent(11,0.7834804);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,0.1967154);
   hNCinFV_stack_11->SetBinContent(16,0.9286332);
   hNCinFV_stack_11->SetBinContent(18,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.1950248);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(22,0.3917402);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.9818863);
   hNCinFV_stack_11->SetBinError(1,0.5892049);
   hNCinFV_stack_11->SetBinError(2,0.7068742);
   hNCinFV_stack_11->SetBinError(3,0.8319397);
   hNCinFV_stack_11->SetBinError(4,0.8333082);
   hNCinFV_stack_11->SetBinError(5,0.5887087);
   hNCinFV_stack_11->SetBinError(6,0.5557297);
   hNCinFV_stack_11->SetBinError(7,0.5194673);
   hNCinFV_stack_11->SetBinError(8,0.7348366);
   hNCinFV_stack_11->SetBinError(9,0.6510715);
   hNCinFV_stack_11->SetBinError(10,0.4394482);
   hNCinFV_stack_11->SetBinError(11,0.3917439);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.1967154);
   hNCinFV_stack_11->SetBinError(16,0.48078);
   hNCinFV_stack_11->SetBinError(18,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.1950249);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(22,0.2770047);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.4391155);
   hNCinFV_stack_11->SetEntries(97);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,20.36813);
   hnumuCCinFV_stack_12->SetBinContent(2,7.016275);
   hnumuCCinFV_stack_12->SetBinContent(3,6.603193);
   hnumuCCinFV_stack_12->SetBinContent(4,3.489759);
   hnumuCCinFV_stack_12->SetBinContent(5,3.678345);
   hnumuCCinFV_stack_12->SetBinContent(6,3.739494);
   hnumuCCinFV_stack_12->SetBinContent(7,2.331567);
   hnumuCCinFV_stack_12->SetBinContent(8,2.246962);
   hnumuCCinFV_stack_12->SetBinContent(9,2.861134);
   hnumuCCinFV_stack_12->SetBinContent(10,1.347186);
   hnumuCCinFV_stack_12->SetBinContent(11,3.078847);
   hnumuCCinFV_stack_12->SetBinContent(12,2.184255);
   hnumuCCinFV_stack_12->SetBinContent(13,2.171935);
   hnumuCCinFV_stack_12->SetBinContent(14,0.7073137);
   hnumuCCinFV_stack_12->SetBinContent(15,3.262696);
   hnumuCCinFV_stack_12->SetBinContent(16,2.56828);
   hnumuCCinFV_stack_12->SetBinContent(17,0.6646178);
   hnumuCCinFV_stack_12->SetBinContent(18,0.2308686);
   hnumuCCinFV_stack_12->SetBinContent(19,2.270512);
   hnumuCCinFV_stack_12->SetBinContent(20,0.9710017);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8183636);
   hnumuCCinFV_stack_12->SetBinContent(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(23,0.8262917);
   hnumuCCinFV_stack_12->SetBinContent(24,0.2421173);
   hnumuCCinFV_stack_12->SetBinContent(25,12.76996);
   hnumuCCinFV_stack_12->SetBinError(1,2.83739);
   hnumuCCinFV_stack_12->SetBinError(2,1.396484);
   hnumuCCinFV_stack_12->SetBinError(3,1.578242);
   hnumuCCinFV_stack_12->SetBinError(4,0.8928669);
   hnumuCCinFV_stack_12->SetBinError(5,0.9773176);
   hnumuCCinFV_stack_12->SetBinError(6,1.149236);
   hnumuCCinFV_stack_12->SetBinError(7,0.803042);
   hnumuCCinFV_stack_12->SetBinError(8,0.7782289);
   hnumuCCinFV_stack_12->SetBinError(9,0.8983711);
   hnumuCCinFV_stack_12->SetBinError(10,0.5648525);
   hnumuCCinFV_stack_12->SetBinError(11,1.012942);
   hnumuCCinFV_stack_12->SetBinError(12,0.8077687);
   hnumuCCinFV_stack_12->SetBinError(13,0.7435195);
   hnumuCCinFV_stack_12->SetBinError(14,0.4087439);
   hnumuCCinFV_stack_12->SetBinError(15,0.9679395);
   hnumuCCinFV_stack_12->SetBinError(16,1.03906);
   hnumuCCinFV_stack_12->SetBinError(17,0.3685363);
   hnumuCCinFV_stack_12->SetBinError(18,0.2234529);
   hnumuCCinFV_stack_12->SetBinError(19,1.09593);
   hnumuCCinFV_stack_12->SetBinError(20,0.49947);
   hnumuCCinFV_stack_12->SetBinError(21,0.4796432);
   hnumuCCinFV_stack_12->SetBinError(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(23,0.5847469);
   hnumuCCinFV_stack_12->SetBinError(24,0.2421173);
   hnumuCCinFV_stack_12->SetBinError(25,2.091691);
   hnumuCCinFV_stack_12->SetEntries(332);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,2.791587);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.2502081);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2171002);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.692088);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__26->SetBinContent(1,68.62194);
   hmcerror__26->SetBinContent(2,45.54457);
   hmcerror__26->SetBinContent(3,45.13877);
   hmcerror__26->SetBinContent(4,32.44272);
   hmcerror__26->SetBinContent(5,31.09706);
   hmcerror__26->SetBinContent(6,28.6646);
   hmcerror__26->SetBinContent(7,27.04039);
   hmcerror__26->SetBinContent(8,26.7926);
   hmcerror__26->SetBinContent(9,17.96679);
   hmcerror__26->SetBinContent(10,16.54491);
   hmcerror__26->SetBinContent(11,17.44059);
   hmcerror__26->SetBinContent(12,11.84756);
   hmcerror__26->SetBinContent(13,13.7282);
   hmcerror__26->SetBinContent(14,8.46698);
   hmcerror__26->SetBinContent(15,9.777573);
   hmcerror__26->SetBinContent(16,8.297054);
   hmcerror__26->SetBinContent(17,4.405264);
   hmcerror__26->SetBinContent(18,3.577701);
   hmcerror__26->SetBinContent(19,5.456385);
   hmcerror__26->SetBinContent(20,4.735514);
   hmcerror__26->SetBinContent(21,4.266469);
   hmcerror__26->SetBinContent(22,5.158785);
   hmcerror__26->SetBinContent(23,2.822645);
   hmcerror__26->SetBinContent(24,2.73843);
   hmcerror__26->SetBinContent(25,37.96192);
   hmcerror__26->SetBinError(1,28.90138);
   hmcerror__26->SetBinError(2,22.90854);
   hmcerror__26->SetBinError(3,18.49928);
   hmcerror__26->SetBinError(4,14.90595);
   hmcerror__26->SetBinError(5,14.18558);
   hmcerror__26->SetBinError(6,11.60563);
   hmcerror__26->SetBinError(7,13.09694);
   hmcerror__26->SetBinError(8,19.26355);
   hmcerror__26->SetBinError(9,11.90928);
   hmcerror__26->SetBinError(10,14.13081);
   hmcerror__26->SetBinError(11,11.3179);
   hmcerror__26->SetBinError(12,7.986236);
   hmcerror__26->SetBinError(13,8.506861);
   hmcerror__26->SetBinError(14,6.447277);
   hmcerror__26->SetBinError(15,11.67259);
   hmcerror__26->SetBinError(16,9.889002);
   hmcerror__26->SetBinError(17,5.244005);
   hmcerror__26->SetBinError(18,3.702518);
   hmcerror__26->SetBinError(19,6.628115);
   hmcerror__26->SetBinError(20,6.13603);
   hmcerror__26->SetBinError(21,4.205926);
   hmcerror__26->SetBinError(22,5.585496);
   hmcerror__26->SetBinError(23,3.70075);
   hmcerror__26->SetBinError(24,3.702429);
   hmcerror__26->SetBinError(25,19.47359);
   hmcerror__26->SetEntries(469.1651);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[24] = {
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
   Double_t _fy3033[24] = {
   58,
   35,
   33,
   29,
   37,
   21,
   24,
   19,
   13,
   14,
   10,
   13,
   9,
   10,
   11,
   5,
   10,
   6,
   4,
   2,
   3,
   1,
   3,
   2};
   Double_t _felx3033[24] = {
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
   Double_t _fely3033[24] = {
   7.7446,
   6.0548,
   5.8847,
   5.5285,
   6.2203,
   4.7354,
   5.0476,
   4.5151,
   3.77763,
   3.9102,
   3.34883,
   3.77763,
   3.19354,
   3.34883,
   3.4975,
   2.48995,
   3.34883,
   2.67925,
   2.29683,
   2,
   2.143368,
   1,
   2.143368,
   2};
   Double_t _fehx3033[24] = {
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
   Double_t _fehy3033[24] = {
   7.5415,
   5.8483,
   5.6776,
   5.3201,
   6.0141,
   4.5229,
   4.837,
   4.3011,
   3.5552,
   3.6898,
   3.1179,
   3.5552,
   2.9582,
   3.1179,
   3.27,
   2.21064,
   3.1179,
   2.41858,
   1.98186,
   1.51917,
   1.72422,
   1.35971,
   1.72422,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,99);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(72.09565);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 372.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.8","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 34.4","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 71.0","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  107.8","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  24.4","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 88.3","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 21.9","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 73.9","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[24] = {
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
   Double_t _fy3034[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[24] = {
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
   Double_t _fely3034[24] = {
   0.4211682,
   0.5029916,
   0.4098312,
   0.4594544,
   0.4561712,
   0.4048767,
   0.4843473,
   0.7189878,
   0.6628498,
   0.8540876,
   0.6489402,
   0.6740825,
   0.6196633,
   0.7614612,
   1.193813,
   1.191869,
   1.190395,
   1.034888,
   1.214745,
   1.295747,
   0.9858095,
   1.082715,
   1.311093,
   1.352026};
   Double_t _fehx3034[24] = {
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
   Double_t _fehy3034[24] = {
   0.4211682,
   0.5029916,
   0.4098312,
   0.4594544,
   0.4561712,
   0.4048767,
   0.4843473,
   0.7189878,
   0.6628498,
   0.8540876,
   0.6489402,
   0.6740825,
   0.6196633,
   0.7614612,
   1.193813,
   1.191869,
   1.190395,
   1.034888,
   1.214745,
   1.295747,
   0.9858095,
   1.082715,
   1.311093,
   1.352026};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,99);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[24] = {
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
   Double_t _fy3035[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[24] = {
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
   Double_t _fely3035[24] = {
   0.2420434,
   0.3093532,
   0.2792384,
   0.3384599,
   0.3218255,
   0.2865908,
   0.3095215,
   0.2577556,
   0.2965861,
   0.2921801,
   0.2479954,
   0.2882868,
   0.2693322,
   0.2902741,
   0.2628563,
   0.2999184,
   0.4275827,
   0.3803972,
   0.3741347,
   0.3393756,
   0.3517894,
   0.3256341,
   0.4734615,
   0.4160673};
   Double_t _fehx3035[24] = {
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
   Double_t _fehy3035[24] = {
   0.2420434,
   0.3093532,
   0.2792384,
   0.3384599,
   0.3218255,
   0.2865908,
   0.3095215,
   0.2577556,
   0.2965861,
   0.2921801,
   0.2479954,
   0.2882868,
   0.2693322,
   0.2902741,
   0.2628563,
   0.2999184,
   0.4275827,
   0.3803972,
   0.3741347,
   0.3393756,
   0.3517894,
   0.3256341,
   0.4734615,
   0.4160673};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,99);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[24] = {
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
   Double_t _fy3036[24] = {
   0.8452107,
   0.7684779,
   0.7310788,
   0.8938832,
   1.189823,
   0.7326109,
   0.8875612,
   0.709151,
   0.7235574,
   0.8461815,
   0.5733752,
   1.097272,
   0.655585,
   1.181059,
   1.125024,
   0.6026235,
   2.270011,
   1.677055,
   0.7330861,
   0.4223406,
   0.7031575,
   0.1938441,
   1.062833,
   0.7303456};
   Double_t _felx3036[24] = {
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
   Double_t _fely3036[24] = {
   0.1128589,
   0.1329423,
   0.1303691,
   0.170408,
   0.2000285,
   0.1652003,
   0.1866689,
   0.1685204,
   0.2102563,
   0.2363385,
   0.1920136,
   0.3188529,
   0.2326263,
   0.3955165,
   0.3577064,
   0.3001005,
   0.7601882,
   0.7488748,
   0.4209435,
   0.4223406,
   0.5023751,
   0.1938441,
   0.7593474,
   0.7303456};
   Double_t _fehx3036[24] = {
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
   Double_t _fehy3036[24] = {
   0.1098993,
   0.1284083,
   0.125781,
   0.1639844,
   0.1933977,
   0.157787,
   0.1788806,
   0.1605331,
   0.1978762,
   0.2230172,
   0.1787727,
   0.3000786,
   0.2154835,
   0.3682423,
   0.3344388,
   0.2664367,
   0.7077668,
   0.6760152,
   0.3632185,
   0.3208036,
   0.4041327,
   0.2635717,
   0.6108526,
   0.5547596};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,99);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(3.275556);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
