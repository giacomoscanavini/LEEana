#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 13:27:17 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",242,172,1200,900);
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
   pad1->Range(-13.84615,-2.282394,101.5385,252.3848);
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
   hmc__25->SetBinContent(1,114.1197);
   hmc__25->SetBinContent(2,61.96254);
   hmc__25->SetBinContent(3,62.96633);
   hmc__25->SetBinContent(4,46.78523);
   hmc__25->SetBinContent(5,46.26349);
   hmc__25->SetBinContent(6,41.74331);
   hmc__25->SetBinContent(7,42.23089);
   hmc__25->SetBinContent(8,35.58837);
   hmc__25->SetBinContent(9,30.39804);
   hmc__25->SetBinContent(10,24.06224);
   hmc__25->SetBinContent(11,25.46069);
   hmc__25->SetBinContent(12,18.90614);
   hmc__25->SetBinContent(13,21.30158);
   hmc__25->SetBinContent(14,17.86487);
   hmc__25->SetBinContent(15,13.58405);
   hmc__25->SetBinContent(16,11.04095);
   hmc__25->SetBinContent(17,5.611178);
   hmc__25->SetBinContent(18,6.415235);
   hmc__25->SetBinContent(19,9.563532);
   hmc__25->SetBinContent(20,6.824551);
   hmc__25->SetBinContent(21,5.432886);
   hmc__25->SetBinContent(22,7.357393);
   hmc__25->SetBinContent(23,3.523144);
   hmc__25->SetBinContent(24,4.975902);
   hmc__25->SetBinContent(25,57.07537);
   hmc__25->SetBinError(1,42.62536);
   hmc__25->SetBinError(2,30.67309);
   hmc__25->SetBinError(3,23.11338);
   hmc__25->SetBinError(4,19.94585);
   hmc__25->SetBinError(5,19.98414);
   hmc__25->SetBinError(6,15.64643);
   hmc__25->SetBinError(7,18.28434);
   hmc__25->SetBinError(8,27.39941);
   hmc__25->SetBinError(9,14.62361);
   hmc__25->SetBinError(10,12.92851);
   hmc__25->SetBinError(11,13.2169);
   hmc__25->SetBinError(12,10.20577);
   hmc__25->SetBinError(13,12.26764);
   hmc__25->SetBinError(14,10.4316);
   hmc__25->SetBinError(15,10.41958);
   hmc__25->SetBinError(16,10.16316);
   hmc__25->SetBinError(17,4.92205);
   hmc__25->SetBinError(18,6.246873);
   hmc__25->SetBinError(19,12.20139);
   hmc__25->SetBinError(20,7.33809);
   hmc__25->SetBinError(21,4.079154);
   hmc__25->SetBinError(22,5.522969);
   hmc__25->SetBinError(23,4.520796);
   hmc__25->SetBinError(24,6.14214);
   hmc__25->SetBinError(25,21.07873);
   hmc__25->SetMinimum(-2.282394);
   hmc__25->SetMaximum(239.6514);
   hmc__25->SetEntries(704.9513);
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
   hs9_stack_9->SetMaximum(119.8257);
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
   hbadmatch_stack_1->SetBinContent(1,3.607737);
   hbadmatch_stack_1->SetBinContent(2,2.243167);
   hbadmatch_stack_1->SetBinContent(3,1.677001);
   hbadmatch_stack_1->SetBinContent(4,1.22164);
   hbadmatch_stack_1->SetBinContent(5,0.9113972);
   hbadmatch_stack_1->SetBinContent(6,1.268811);
   hbadmatch_stack_1->SetBinContent(7,1.855576);
   hbadmatch_stack_1->SetBinContent(8,0.3900497);
   hbadmatch_stack_1->SetBinContent(9,1.242956);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,1.215558);
   hbadmatch_stack_1->SetBinContent(12,0.5901461);
   hbadmatch_stack_1->SetBinContent(13,0.5901461);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.6367154);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.8770706);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.5876783);
   hbadmatch_stack_1->SetBinContent(22,0.4410358);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.4781666);
   hbadmatch_stack_1->SetBinContent(25,2.458043);
   hbadmatch_stack_1->SetBinError(1,1.062682);
   hbadmatch_stack_1->SetBinError(2,0.7301041);
   hbadmatch_stack_1->SetBinError(3,0.7011343);
   hbadmatch_stack_1->SetBinError(4,0.5004552);
   hbadmatch_stack_1->SetBinError(5,0.5336872);
   hbadmatch_stack_1->SetBinError(6,0.5889569);
   hbadmatch_stack_1->SetBinError(7,0.6794384);
   hbadmatch_stack_1->SetBinError(8,0.2758068);
   hbadmatch_stack_1->SetBinError(9,0.5091228);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.6206425);
   hbadmatch_stack_1->SetBinError(12,0.340721);
   hbadmatch_stack_1->SetBinError(13,0.340721);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.3697897);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.5197486);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.4376631);
   hbadmatch_stack_1->SetBinError(22,0.4410358);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3433827);
   hbadmatch_stack_1->SetBinError(25,0.8517604);
   hbadmatch_stack_1->SetEntries(97);

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
   hext_stack_2->SetBinContent(1,18.04582);
   hext_stack_2->SetBinContent(2,5.86391);
   hext_stack_2->SetBinContent(3,4.04281);
   hext_stack_2->SetBinContent(4,2.435184);
   hext_stack_2->SetBinContent(5,2.345802);
   hext_stack_2->SetBinContent(6,3.807795);
   hext_stack_2->SetBinContent(7,5.166044);
   hext_stack_2->SetBinContent(8,3.972198);
   hext_stack_2->SetBinContent(9,5.814838);
   hext_stack_2->SetBinContent(10,4.50566);
   hext_stack_2->SetBinContent(11,3.704052);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,5.00605);
   hext_stack_2->SetBinContent(14,3.856865);
   hext_stack_2->SetBinContent(15,2.428004);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,0.6487947);
   hext_stack_2->SetBinContent(18,0.4065989);
   hext_stack_2->SetBinContent(19,1.37261);
   hext_stack_2->SetBinContent(20,1.048213);
   hext_stack_2->SetBinContent(21,1.379791);
   hext_stack_2->SetBinContent(22,2.185808);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,7.26965);
   hext_stack_2->SetBinError(1,3.128091);
   hext_stack_2->SetBinError(2,1.887831);
   hext_stack_2->SetBinError(3,1.336183);
   hext_stack_2->SetBinError(4,0.9256422);
   hext_stack_2->SetBinError(5,0.9989624);
   hext_stack_2->SetBinError(6,1.24058);
   hext_stack_2->SetBinError(7,1.619774);
   hext_stack_2->SetBinError(8,1.288106);
   hext_stack_2->SetBinError(9,1.683489);
   hext_stack_2->SetBinError(10,1.574572);
   hext_stack_2->SetBinError(11,1.443106);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,1.62438);
   hext_stack_2->SetBinError(14,1.506257);
   hext_stack_2->SetBinError(15,1.028599);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.4587671);
   hext_stack_2->SetBinError(18,0.4065989);
   hext_stack_2->SetBinError(19,0.8259691);
   hext_stack_2->SetBinError(20,0.7595995);
   hext_stack_2->SetBinError(21,0.6935586);
   hext_stack_2->SetBinError(22,1.006415);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,1.89115);
   hext_stack_2->SetEntries(193);

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
   hdirt_stack_3->SetBinContent(1,1.26802);
   hdirt_stack_3->SetBinContent(3,0.8438219);
   hdirt_stack_3->SetBinContent(4,0.1564614);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.4049124);
   hdirt_stack_3->SetBinContent(21,0.2623434);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(1,0.5840939);
   hdirt_stack_3->SetBinError(3,0.596754);
   hdirt_stack_3->SetBinError(4,0.1564614);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(19,0.4049124);
   hdirt_stack_3->SetBinError(21,0.2623434);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetEntries(19);

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
   houtFV_stack_4->SetBinContent(1,20.28943);
   houtFV_stack_4->SetBinContent(2,9.653061);
   houtFV_stack_4->SetBinContent(3,7.594745);
   houtFV_stack_4->SetBinContent(4,6.314942);
   houtFV_stack_4->SetBinContent(5,8.139442);
   houtFV_stack_4->SetBinContent(6,7.090579);
   houtFV_stack_4->SetBinContent(7,5.592429);
   houtFV_stack_4->SetBinContent(8,7.985796);
   houtFV_stack_4->SetBinContent(9,4.494274);
   houtFV_stack_4->SetBinContent(10,3.544757);
   houtFV_stack_4->SetBinContent(11,4.579465);
   houtFV_stack_4->SetBinContent(12,3.909558);
   houtFV_stack_4->SetBinContent(13,5.006923);
   houtFV_stack_4->SetBinContent(14,3.048613);
   houtFV_stack_4->SetBinContent(15,2.245626);
   houtFV_stack_4->SetBinContent(16,2.445722);
   houtFV_stack_4->SetBinContent(17,0.8224597);
   houtFV_stack_4->SetBinContent(18,1.319331);
   houtFV_stack_4->SetBinContent(19,1.660551);
   houtFV_stack_4->SetBinContent(20,0.3401776);
   houtFV_stack_4->SetBinContent(21,0.3917402);
   houtFV_stack_4->SetBinContent(22,1.123658);
   houtFV_stack_4->SetBinContent(23,0.3934307);
   houtFV_stack_4->SetBinContent(24,1.123658);
   houtFV_stack_4->SetBinContent(25,12.18589);
   houtFV_stack_4->SetBinError(1,2.237711);
   houtFV_stack_4->SetBinError(2,1.545361);
   houtFV_stack_4->SetBinError(3,1.447612);
   houtFV_stack_4->SetBinError(4,1.177012);
   houtFV_stack_4->SetBinError(5,1.446841);
   houtFV_stack_4->SetBinError(6,1.316866);
   houtFV_stack_4->SetBinError(7,1.208201);
   houtFV_stack_4->SetBinError(8,1.456777);
   houtFV_stack_4->SetBinError(9,1.094873);
   houtFV_stack_4->SetBinError(10,0.9651176);
   houtFV_stack_4->SetBinError(11,1.057167);
   houtFV_stack_4->SetBinError(12,0.9811382);
   houtFV_stack_4->SetBinError(13,1.111986);
   houtFV_stack_4->SetBinError(14,0.8839701);
   houtFV_stack_4->SetBinError(15,0.7332843);
   houtFV_stack_4->SetBinError(16,0.7600838);
   houtFV_stack_4->SetBinError(17,0.5128819);
   houtFV_stack_4->SetBinError(18,0.6076997);
   houtFV_stack_4->SetBinError(19,0.650847);
   houtFV_stack_4->SetBinError(20,0.3401776);
   houtFV_stack_4->SetBinError(21,0.2770047);
   houtFV_stack_4->SetBinError(22,0.5188295);
   houtFV_stack_4->SetBinError(23,0.2781975);
   houtFV_stack_4->SetBinError(24,0.5188295);
   houtFV_stack_4->SetBinError(25,1.83036);
   houtFV_stack_4->SetEntries(520);

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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(33);

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
   hNCpi0inFVres_stack_7->SetBinContent(1,15.7433);
   hNCpi0inFVres_stack_7->SetBinContent(2,18.436);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.56653);
   hNCpi0inFVres_stack_7->SetBinContent(4,13.70708);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.36789);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.92498);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.41605);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.262161);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.67859);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.5772);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.561838);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.637305);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.319452);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.290888);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.566648);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.771494);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.409122);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.197876);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.7807039);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.604758);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.501704);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.631994);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.334968);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.5304361);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.493164);
   hNCpi0inFVres_stack_7->SetBinError(1,1.256699);
   hNCpi0inFVres_stack_7->SetBinError(2,1.39166);
   hNCpi0inFVres_stack_7->SetBinError(3,1.360811);
   hNCpi0inFVres_stack_7->SetBinError(4,1.153988);
   hNCpi0inFVres_stack_7->SetBinError(5,1.137684);
   hNCpi0inFVres_stack_7->SetBinError(6,1.1797);
   hNCpi0inFVres_stack_7->SetBinError(7,1.08632);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8475199);
   hNCpi0inFVres_stack_7->SetBinError(9,0.852633);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7813315);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7220455);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5659689);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6286336);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6386662);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5726356);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4831797);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3799115);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3266629);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2608584);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4640037);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2454852);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4791353);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2051824);
   hNCpi0inFVres_stack_7->SetBinError(24,0.283386);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7366314);
   hNCpi0inFVres_stack_7->SetEntries(2792);

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
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.1876);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.346688);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.956416);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.305834);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.553358);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.999766);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.189994);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.760284);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.087604);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.02193);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.030972);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9059218);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7528039);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.529604);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5440542);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.216566);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8072214);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6398838);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5652814);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6229323);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4916964);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6314652);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4951149);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5429806);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2767844);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5039455);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2361918);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2798147);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2593621);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2470656);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.277838);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2957079);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5224008);
   hNCpi0inFVdis_stack_8->SetEntries(645);

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
   hCCpi0inFV_stack_10->SetBinContent(1,18.78012);
   hCCpi0inFV_stack_10->SetBinContent(2,11.44179);
   hCCpi0inFV_stack_10->SetBinContent(3,15.25794);
   hCCpi0inFV_stack_10->SetBinContent(4,10.52248);
   hCCpi0inFV_stack_10->SetBinContent(5,11.03035);
   hCCpi0inFV_stack_10->SetBinContent(6,7.073312);
   hCCpi0inFV_stack_10->SetBinContent(7,10.60478);
   hCCpi0inFV_stack_10->SetBinContent(8,6.927405);
   hCCpi0inFV_stack_10->SetBinContent(9,4.654537);
   hCCpi0inFV_stack_10->SetBinContent(10,4.98138);
   hCCpi0inFV_stack_10->SetBinContent(11,4.789627);
   hCCpi0inFV_stack_10->SetBinContent(12,2.247316);
   hCCpi0inFV_stack_10->SetBinContent(13,2.84091);
   hCCpi0inFV_stack_10->SetBinContent(14,3.208539);
   hCCpi0inFV_stack_10->SetBinContent(15,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(16,1.014443);
   hCCpi0inFV_stack_10->SetBinContent(17,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(18,1.605607);
   hCCpi0inFV_stack_10->SetBinContent(19,1.805704);
   hCCpi0inFV_stack_10->SetBinContent(20,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(21,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(22,0.6177714);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9835768);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(25,7.225632);
   hCCpi0inFV_stack_10->SetBinError(1,2.194182);
   hCCpi0inFV_stack_10->SetBinError(2,1.730089);
   hCCpi0inFV_stack_10->SetBinError(3,1.994892);
   hCCpi0inFV_stack_10->SetBinError(4,1.63696);
   hCCpi0inFV_stack_10->SetBinError(5,1.728624);
   hCCpi0inFV_stack_10->SetBinError(6,1.284584);
   hCCpi0inFV_stack_10->SetBinError(7,1.655987);
   hCCpi0inFV_stack_10->SetBinError(8,1.3019);
   hCCpi0inFV_stack_10->SetBinError(9,1.105157);
   hCCpi0inFV_stack_10->SetBinError(10,1.093323);
   hCCpi0inFV_stack_10->SetBinError(11,1.084417);
   hCCpi0inFV_stack_10->SetBinError(12,0.7337357);
   hCCpi0inFV_stack_10->SetBinError(13,0.8476475);
   hCCpi0inFV_stack_10->SetBinError(14,0.9192756);
   hCCpi0inFV_stack_10->SetBinError(15,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(16,0.4546331);
   hCCpi0inFV_stack_10->SetBinError(17,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(18,0.679166);
   hCCpi0inFV_stack_10->SetBinError(19,0.7080169);
   hCCpi0inFV_stack_10->SetBinError(20,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(21,0.650338);
   hCCpi0inFV_stack_10->SetBinError(22,0.3576682);
   hCCpi0inFV_stack_10->SetBinError(23,0.4398689);
   hCCpi0inFV_stack_10->SetBinError(24,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(25,1.292184);
   hCCpi0inFV_stack_10->SetEntries(564);

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
   hNCinFV_stack_11->SetBinContent(1,3.069903);
   hNCinFV_stack_11->SetBinContent(2,2.835772);
   hNCinFV_stack_11->SetBinContent(3,4.784938);
   hNCinFV_stack_11->SetBinContent(4,3.856305);
   hNCinFV_stack_11->SetBinContent(5,2.053982);
   hNCinFV_stack_11->SetBinContent(6,2.145881);
   hNCinFV_stack_11->SetBinContent(7,2.39585);
   hNCinFV_stack_11->SetBinContent(8,2.539312);
   hNCinFV_stack_11->SetBinContent(9,1.999038);
   hNCinFV_stack_11->SetBinContent(10,0.7336084);
   hNCinFV_stack_11->SetBinContent(11,1.370245);
   hNCinFV_stack_11->SetBinContent(12,1.270501);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,1.123658);
   hNCinFV_stack_11->SetBinContent(15,0.7868615);
   hNCinFV_stack_11->SetBinContent(16,0.9286332);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.3917402);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.3900497);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(22,0.5884556);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,1.715495);
   hNCinFV_stack_11->SetBinError(1,0.9430544);
   hNCinFV_stack_11->SetBinError(2,0.808577);
   hNCinFV_stack_11->SetBinError(3,1.110004);
   hNCinFV_stack_11->SetBinError(4,1.000479);
   hNCinFV_stack_11->SetBinError(5,0.7078105);
   hNCinFV_stack_11->SetBinError(6,0.785499);
   hNCinFV_stack_11->SetBinError(7,0.7857345);
   hNCinFV_stack_11->SetBinError(8,0.8333082);
   hNCinFV_stack_11->SetBinError(9,0.7339349);
   hNCinFV_stack_11->SetBinError(10,0.4394482);
   hNCinFV_stack_11->SetBinError(11,0.5179089);
   hNCinFV_stack_11->SetBinError(12,0.5895188);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.5188295);
   hNCinFV_stack_11->SetBinError(15,0.3934307);
   hNCinFV_stack_11->SetBinError(16,0.48078);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.2770047);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.2758068);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(22,0.3397478);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.6212384);
   hNCinFV_stack_11->SetEntries(158);

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
   hnumuCCinFV_stack_12->SetBinContent(1,27.62525);
   hnumuCCinFV_stack_12->SetBinContent(2,7.82164);
   hnumuCCinFV_stack_12->SetBinContent(3,9.214228);
   hnumuCCinFV_stack_12->SetBinContent(4,4.902432);
   hnumuCCinFV_stack_12->SetBinContent(5,6.416134);
   hnumuCCinFV_stack_12->SetBinContent(6,5.008305);
   hnumuCCinFV_stack_12->SetBinContent(7,3.342711);
   hnumuCCinFV_stack_12->SetBinContent(8,3.124033);
   hnumuCCinFV_stack_12->SetBinContent(9,4.117892);
   hnumuCCinFV_stack_12->SetBinContent(10,2.079104);
   hnumuCCinFV_stack_12->SetBinContent(11,4.042964);
   hnumuCCinFV_stack_12->SetBinContent(12,3.843864);
   hnumuCCinFV_stack_12->SetBinContent(13,2.61156);
   hnumuCCinFV_stack_12->SetBinContent(14,2.36162);
   hnumuCCinFV_stack_12->SetBinContent(15,3.457721);
   hnumuCCinFV_stack_12->SetBinContent(16,3.61798);
   hnumuCCinFV_stack_12->SetBinContent(17,0.6646178);
   hnumuCCinFV_stack_12->SetBinContent(18,0.5710462);
   hnumuCCinFV_stack_12->SetBinContent(19,2.849039);
   hnumuCCinFV_stack_12->SetBinContent(20,1.311179);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8183636);
   hnumuCCinFV_stack_12->SetBinContent(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(23,1.023007);
   hnumuCCinFV_stack_12->SetBinContent(24,0.4371421);
   hnumuCCinFV_stack_12->SetBinContent(25,14.86014);
   hnumuCCinFV_stack_12->SetBinError(1,3.185003);
   hnumuCCinFV_stack_12->SetBinError(2,1.474482);
   hnumuCCinFV_stack_12->SetBinError(3,1.775782);
   hnumuCCinFV_stack_12->SetBinError(4,1.070395);
   hnumuCCinFV_stack_12->SetBinError(5,1.446414);
   hnumuCCinFV_stack_12->SetBinError(6,1.291361);
   hnumuCCinFV_stack_12->SetBinError(7,0.9549053);
   hnumuCCinFV_stack_12->SetBinError(8,0.9358305);
   hnumuCCinFV_stack_12->SetBinError(9,1.100016);
   hnumuCCinFV_stack_12->SetBinError(10,0.7151998);
   hnumuCCinFV_stack_12->SetBinError(11,1.167808);
   hnumuCCinFV_stack_12->SetBinError(12,1.029682);
   hnumuCCinFV_stack_12->SetBinError(13,0.8065503);
   hnumuCCinFV_stack_12->SetBinError(14,1.254281);
   hnumuCCinFV_stack_12->SetBinError(15,0.9873913);
   hnumuCCinFV_stack_12->SetBinError(16,1.176197);
   hnumuCCinFV_stack_12->SetBinError(17,0.3685363);
   hnumuCCinFV_stack_12->SetBinError(18,0.4070037);
   hnumuCCinFV_stack_12->SetBinError(19,1.172004);
   hnumuCCinFV_stack_12->SetBinError(20,0.6043104);
   hnumuCCinFV_stack_12->SetBinError(21,0.4796432);
   hnumuCCinFV_stack_12->SetBinError(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(23,0.6169488);
   hnumuCCinFV_stack_12->SetBinError(24,0.3108946);
   hnumuCCinFV_stack_12->SetBinError(25,2.239744);
   hnumuCCinFV_stack_12->SetEntries(444);

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
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,1.354146);
   hnueCCinFV_stack_13->SetBinContent(25,3.159493);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.2502081);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2655531);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,1.174028);
   hnueCCinFV_stack_13->SetBinError(25,1.712064);
   hnueCCinFV_stack_13->SetEntries(18);

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
   hmcerror__26->SetBinContent(1,114.1197);
   hmcerror__26->SetBinContent(2,61.96254);
   hmcerror__26->SetBinContent(3,62.96633);
   hmcerror__26->SetBinContent(4,46.78523);
   hmcerror__26->SetBinContent(5,46.26349);
   hmcerror__26->SetBinContent(6,41.74331);
   hmcerror__26->SetBinContent(7,42.23089);
   hmcerror__26->SetBinContent(8,35.58837);
   hmcerror__26->SetBinContent(9,30.39804);
   hmcerror__26->SetBinContent(10,24.06224);
   hmcerror__26->SetBinContent(11,25.46069);
   hmcerror__26->SetBinContent(12,18.90614);
   hmcerror__26->SetBinContent(13,21.30158);
   hmcerror__26->SetBinContent(14,17.86487);
   hmcerror__26->SetBinContent(15,13.58405);
   hmcerror__26->SetBinContent(16,11.04095);
   hmcerror__26->SetBinContent(17,5.611178);
   hmcerror__26->SetBinContent(18,6.415235);
   hmcerror__26->SetBinContent(19,9.563532);
   hmcerror__26->SetBinContent(20,6.824551);
   hmcerror__26->SetBinContent(21,5.432886);
   hmcerror__26->SetBinContent(22,7.357393);
   hmcerror__26->SetBinContent(23,3.523144);
   hmcerror__26->SetBinContent(24,4.975902);
   hmcerror__26->SetBinContent(25,57.07537);
   hmcerror__26->SetBinError(1,42.62536);
   hmcerror__26->SetBinError(2,30.67309);
   hmcerror__26->SetBinError(3,23.11338);
   hmcerror__26->SetBinError(4,19.94585);
   hmcerror__26->SetBinError(5,19.98414);
   hmcerror__26->SetBinError(6,15.64643);
   hmcerror__26->SetBinError(7,18.28434);
   hmcerror__26->SetBinError(8,27.39941);
   hmcerror__26->SetBinError(9,14.62361);
   hmcerror__26->SetBinError(10,12.92851);
   hmcerror__26->SetBinError(11,13.2169);
   hmcerror__26->SetBinError(12,10.20577);
   hmcerror__26->SetBinError(13,12.26764);
   hmcerror__26->SetBinError(14,10.4316);
   hmcerror__26->SetBinError(15,10.41958);
   hmcerror__26->SetBinError(16,10.16316);
   hmcerror__26->SetBinError(17,4.92205);
   hmcerror__26->SetBinError(18,6.246873);
   hmcerror__26->SetBinError(19,12.20139);
   hmcerror__26->SetBinError(20,7.33809);
   hmcerror__26->SetBinError(21,4.079154);
   hmcerror__26->SetBinError(22,5.522969);
   hmcerror__26->SetBinError(23,4.520796);
   hmcerror__26->SetBinError(24,6.14214);
   hmcerror__26->SetBinError(25,21.07873);
   hmcerror__26->SetEntries(704.9513);

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
   92,
   51,
   51,
   41,
   48,
   32,
   36,
   28,
   17,
   24,
   14,
   17,
   14,
   15,
   11,
   6,
   13,
   12,
   5,
   3,
   4,
   1,
   6,
   4};
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
   9.7138,
   7.2725,
   7.2725,
   6.5384,
   7.0604,
   5.7977,
   6.1381,
   5.4358,
   4.2835,
   5.0476,
   3.9102,
   4.2835,
   3.9102,
   4.0385,
   3.4975,
   2.67925,
   3.77763,
   3.64022,
   2.48995,
   2.143368,
   2.29683,
   1,
   2.67925,
   2.29683};
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
   9.513,
   7.0686,
   7.0686,
   6.3331,
   6.8561,
   5.5904,
   5.9318,
   5.2271,
   4.0673,
   4.837,
   3.6898,
   4.0673,
   3.6898,
   3.8197,
   3.27,
   2.41858,
   3.5552,
   3.4155,
   2.21064,
   1.72422,
   1.98186,
   1.35971,
   2.41858,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,99);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(111.6643);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.82#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 545.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 81.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 109.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  145.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 124.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 101.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.4","F");

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
   0.3735144,
   0.4950264,
   0.3670753,
   0.4263278,
   0.4319635,
   0.3748248,
   0.4329613,
   0.769898,
   0.4810708,
   0.5372945,
   0.51911,
   0.5398121,
   0.5759027,
   0.5839168,
   0.767045,
   0.9204969,
   0.8771865,
   0.9737559,
   1.275824,
   1.075249,
   0.7508264,
   0.7506692,
   1.283171,
   1.234377};
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
   0.3735144,
   0.4950264,
   0.3670753,
   0.4263278,
   0.4319635,
   0.3748248,
   0.4329613,
   0.769898,
   0.4810708,
   0.5372945,
   0.51911,
   0.5398121,
   0.5759027,
   0.5839168,
   0.767045,
   0.9204969,
   0.8771865,
   0.9737559,
   1.275824,
   1.075249,
   0.7508264,
   0.7506692,
   1.283171,
   1.234377};
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
   0.2056196,
   0.2782258,
   0.2628234,
   0.3062042,
   0.2878559,
   0.2669871,
   0.2809771,
   0.2522428,
   0.2463764,
   0.2684876,
   0.2304995,
   0.2667192,
   0.2293133,
   0.2397141,
   0.2459913,
   0.2721529,
   0.3732134,
   0.2964614,
   0.3123475,
   0.293175,
   0.3163552,
   0.2918792,
   0.4085076,
   0.8199806};
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
   0.2056196,
   0.2782258,
   0.2628234,
   0.3062042,
   0.2878559,
   0.2669871,
   0.2809771,
   0.2522428,
   0.2463764,
   0.2684876,
   0.2304995,
   0.2667192,
   0.2293133,
   0.2397141,
   0.2459913,
   0.2721529,
   0.3732134,
   0.2964614,
   0.3123475,
   0.293175,
   0.3163552,
   0.2918792,
   0.4085076,
   0.8199806};
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
   0.8061709,
   0.8230779,
   0.8099567,
   0.8763449,
   1.037535,
   0.7665899,
   0.8524566,
   0.7867739,
   0.5592465,
   0.9974132,
   0.5498673,
   0.8991786,
   0.6572281,
   0.8396366,
   0.8097732,
   0.5434314,
   2.316804,
   1.870547,
   0.5228194,
   0.4395894,
   0.7362569,
   0.1359177,
   1.703024,
   0.8038744};
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
   0.08511938,
   0.1173693,
   0.1154982,
   0.1397535,
   0.1526128,
   0.1388893,
   0.1453462,
   0.1527409,
   0.1409137,
   0.2097726,
   0.1535779,
   0.2265666,
   0.1835638,
   0.2260582,
   0.2574711,
   0.2426647,
   0.673233,
   0.5674337,
   0.2603588,
   0.3140673,
   0.4227642,
   0.1359177,
   0.7604713,
   0.4615907};
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
   0.08335983,
   0.1140786,
   0.11226,
   0.1353654,
   0.1481968,
   0.1339232,
   0.1404612,
   0.1468766,
   0.1338014,
   0.2010203,
   0.1449214,
   0.2151311,
   0.1732172,
   0.2138107,
   0.2407235,
   0.2190554,
   0.6335925,
   0.5324045,
   0.2311531,
   0.2526496,
   0.3647895,
   0.1848087,
   0.6864834,
   0.3982916};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,99);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(3.245436);
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
