#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 10:27:36 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-169.2308,-0.6750867,1241.026,74.65038);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__25->SetBinContent(1,33.75434);
   hmc__25->SetBinContent(2,26.38369);
   hmc__25->SetBinContent(3,21.54302);
   hmc__25->SetBinContent(4,23.41556);
   hmc__25->SetBinContent(5,22.39543);
   hmc__25->SetBinContent(6,21.76409);
   hmc__25->SetBinContent(7,22.17721);
   hmc__25->SetBinContent(8,28.48282);
   hmc__25->SetBinContent(9,23.78731);
   hmc__25->SetBinContent(10,18.98846);
   hmc__25->SetBinContent(11,22.40246);
   hmc__25->SetBinContent(12,17.57071);
   hmc__25->SetBinContent(13,18.37939);
   hmc__25->SetBinContent(14,19.66254);
   hmc__25->SetBinContent(15,21.45626);
   hmc__25->SetBinContent(16,22.25615);
   hmc__25->SetBinContent(17,18.5474);
   hmc__25->SetBinContent(18,18.67431);
   hmc__25->SetBinContent(19,19.42895);
   hmc__25->SetBinContent(20,23.43328);
   hmc__25->SetBinContent(21,29.97056);
   hmc__25->SetBinContent(22,20.4227);
   hmc__25->SetBinContent(23,19.14817);
   hmc__25->SetBinContent(24,17.68231);
   hmc__25->SetBinContent(25,18.63423);
   hmc__25->SetBinContent(26,20.27718);
   hmc__25->SetBinContent(27,16.4473);
   hmc__25->SetBinContent(28,20.84747);
   hmc__25->SetBinContent(29,29.15076);
   hmc__25->SetBinContent(30,22.86899);
   hmc__25->SetBinContent(31,0.6360891);
   hmc__25->SetBinError(1,30.9732);
   hmc__25->SetBinError(2,13.08548);
   hmc__25->SetBinError(3,19.82931);
   hmc__25->SetBinError(4,10.2511);
   hmc__25->SetBinError(5,11.90795);
   hmc__25->SetBinError(6,9.228281);
   hmc__25->SetBinError(7,9.966916);
   hmc__25->SetBinError(8,13.6913);
   hmc__25->SetBinError(9,13.53874);
   hmc__25->SetBinError(10,9.570073);
   hmc__25->SetBinError(11,14.94825);
   hmc__25->SetBinError(12,8.360638);
   hmc__25->SetBinError(13,15.96539);
   hmc__25->SetBinError(14,9.86054);
   hmc__25->SetBinError(15,10.33517);
   hmc__25->SetBinError(16,13.01036);
   hmc__25->SetBinError(17,10.27742);
   hmc__25->SetBinError(18,10.22014);
   hmc__25->SetBinError(19,11.95104);
   hmc__25->SetBinError(20,13.58019);
   hmc__25->SetBinError(21,14.26673);
   hmc__25->SetBinError(22,12.34556);
   hmc__25->SetBinError(23,10.34218);
   hmc__25->SetBinError(24,10.8396);
   hmc__25->SetBinError(25,10.36504);
   hmc__25->SetBinError(26,19.22618);
   hmc__25->SetBinError(27,9.548009);
   hmc__25->SetBinError(28,9.44976);
   hmc__25->SetBinError(29,13.69482);
   hmc__25->SetBinError(30,12.28273);
   hmc__25->SetBinError(31,2.13645);
   hmc__25->SetBinError(32,0.3895343);
   hmc__25->SetBinError(33,0.3895343);
   hmc__25->SetMinimum(-0.6750867);
   hmc__25->SetMaximum(70.88411);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",32,0,1100);
   hs9_stack_9->SetMinimum(-4.228303e-08);
   hs9_stack_9->SetMaximum(35.44205);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,1.055694);
   hbadmatch_stack_1->SetBinContent(3,1.275426);
   hbadmatch_stack_1->SetBinContent(4,1.256949);
   hbadmatch_stack_1->SetBinContent(5,0.7807323);
   hbadmatch_stack_1->SetBinContent(6,0.5592399);
   hbadmatch_stack_1->SetBinContent(7,0.3418232);
   hbadmatch_stack_1->SetBinContent(8,0.9426186);
   hbadmatch_stack_1->SetBinContent(9,1.76146);
   hbadmatch_stack_1->SetBinContent(10,1.270754);
   hbadmatch_stack_1->SetBinContent(11,0.8232274);
   hbadmatch_stack_1->SetBinContent(12,0.7290006);
   hbadmatch_stack_1->SetBinContent(13,0.8948178);
   hbadmatch_stack_1->SetBinContent(14,0.9255152);
   hbadmatch_stack_1->SetBinContent(16,0.7876176);
   hbadmatch_stack_1->SetBinContent(17,0.318806);
   hbadmatch_stack_1->SetBinContent(18,0.6124207);
   hbadmatch_stack_1->SetBinContent(19,0.355878);
   hbadmatch_stack_1->SetBinContent(20,1.442508);
   hbadmatch_stack_1->SetBinContent(21,0.9161366);
   hbadmatch_stack_1->SetBinContent(22,0.3176709);
   hbadmatch_stack_1->SetBinContent(23,0.1964832);
   hbadmatch_stack_1->SetBinContent(24,0.5424016);
   hbadmatch_stack_1->SetBinContent(25,0.3073375);
   hbadmatch_stack_1->SetBinContent(26,0.5834559);
   hbadmatch_stack_1->SetBinContent(27,0.5164875);
   hbadmatch_stack_1->SetBinContent(28,0.5352025);
   hbadmatch_stack_1->SetBinContent(29,0.213904);
   hbadmatch_stack_1->SetBinContent(30,0.390963);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.4970553);
   hbadmatch_stack_1->SetBinError(3,0.5705521);
   hbadmatch_stack_1->SetBinError(4,0.634866);
   hbadmatch_stack_1->SetBinError(5,0.4004709);
   hbadmatch_stack_1->SetBinError(6,0.3317955);
   hbadmatch_stack_1->SetBinError(7,0.2476863);
   hbadmatch_stack_1->SetBinError(8,0.5211845);
   hbadmatch_stack_1->SetBinError(9,0.7340072);
   hbadmatch_stack_1->SetBinError(10,0.6925321);
   hbadmatch_stack_1->SetBinError(11,0.4236993);
   hbadmatch_stack_1->SetBinError(12,0.3817772);
   hbadmatch_stack_1->SetBinError(13,0.4728223);
   hbadmatch_stack_1->SetBinError(14,0.5884926);
   hbadmatch_stack_1->SetBinError(16,0.4661336);
   hbadmatch_stack_1->SetBinError(17,0.1885188);
   hbadmatch_stack_1->SetBinError(18,0.4001527);
   hbadmatch_stack_1->SetBinError(19,0.2596645);
   hbadmatch_stack_1->SetBinError(20,0.6631238);
   hbadmatch_stack_1->SetBinError(21,0.4135951);
   hbadmatch_stack_1->SetBinError(22,0.2309268);
   hbadmatch_stack_1->SetBinError(23,0.1425997);
   hbadmatch_stack_1->SetBinError(24,0.3200775);
   hbadmatch_stack_1->SetBinError(25,0.225686);
   hbadmatch_stack_1->SetBinError(26,0.3815177);
   hbadmatch_stack_1->SetBinError(27,0.3339091);
   hbadmatch_stack_1->SetBinError(28,0.3921167);
   hbadmatch_stack_1->SetBinError(29,0.213904);
   hbadmatch_stack_1->SetBinError(30,0.390963);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,1.379791);
   hext_stack_2->SetBinContent(2,4.125011);
   hext_stack_2->SetBinContent(3,3.856865);
   hext_stack_2->SetBinContent(4,3.394015);
   hext_stack_2->SetBinContent(5,5.083842);
   hext_stack_2->SetBinContent(6,4.919439);
   hext_stack_2->SetBinContent(7,4.054399);
   hext_stack_2->SetBinContent(8,6.512704);
   hext_stack_2->SetBinContent(9,4.143782);
   hext_stack_2->SetBinContent(10,1.697008);
   hext_stack_2->SetBinContent(11,3.532468);
   hext_stack_2->SetBinContent(12,1.868591);
   hext_stack_2->SetBinContent(13,2.110787);
   hext_stack_2->SetBinContent(14,2.25642);
   hext_stack_2->SetBinContent(15,3.215251);
   hext_stack_2->SetBinContent(16,2.021405);
   hext_stack_2->SetBinContent(17,3.297453);
   hext_stack_2->SetBinContent(18,1.219797);
   hext_stack_2->SetBinContent(19,1.219797);
   hext_stack_2->SetBinContent(20,4.841647);
   hext_stack_2->SetBinContent(21,9.105111);
   hext_stack_2->SetBinContent(22,1.048213);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinContent(24,3.379654);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,2.890854);
   hext_stack_2->SetBinContent(27,1.37261);
   hext_stack_2->SetBinContent(28,2.021405);
   hext_stack_2->SetBinContent(29,1.379791);
   hext_stack_2->SetBinContent(30,1.379791);
   hext_stack_2->SetBinError(1,0.6935586);
   hext_stack_2->SetBinError(2,1.358482);
   hext_stack_2->SetBinError(3,1.506257);
   hext_stack_2->SetBinError(4,1.254957);
   hext_stack_2->SetBinError(5,1.601118);
   hext_stack_2->SetBinError(6,1.563138);
   hext_stack_2->SetBinError(7,1.311223);
   hext_stack_2->SetBinError(8,1.942775);
   hext_stack_2->SetBinError(9,1.256262);
   hext_stack_2->SetBinError(10,0.8873887);
   hext_stack_2->SetBinError(11,1.47091);
   hext_stack_2->SetBinError(12,0.840497);
   hext_stack_2->SetBinError(13,0.8669371);
   hext_stack_2->SetBinError(14,1.067257);
   hext_stack_2->SetBinError(15,1.36277);
   hext_stack_2->SetBinError(16,0.9448239);
   hext_stack_2->SetBinError(17,1.384641);
   hext_stack_2->SetBinError(18,0.7042499);
   hext_stack_2->SetBinError(19,0.7042499);
   hext_stack_2->SetBinError(20,1.586957);
   hext_stack_2->SetBinError(21,2.225436);
   hext_stack_2->SetBinError(22,0.7595995);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetBinError(24,1.406172);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.323597);
   hext_stack_2->SetBinError(27,0.8259691);
   hext_stack_2->SetBinError(28,0.9448239);
   hext_stack_2->SetBinError(29,0.6935586);
   hext_stack_2->SetBinError(30,0.6935586);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,0.8359687);
   hdirt_stack_3->SetBinContent(2,0.002351481);
   hdirt_stack_3->SetBinContent(3,0.2761429);
   hdirt_stack_3->SetBinContent(4,0.3381872);
   hdirt_stack_3->SetBinContent(5,0.4049124);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.4008912);
   hdirt_stack_3->SetBinContent(12,0.2620035);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.6763744);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.691244);
   hdirt_stack_3->SetBinError(1,0.5163774);
   hdirt_stack_3->SetBinError(2,0.002351481);
   hdirt_stack_3->SetBinError(3,0.1952625);
   hdirt_stack_3->SetBinError(4,0.3381872);
   hdirt_stack_3->SetBinError(5,0.4049124);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.2968804);
   hdirt_stack_3->SetBinError(12,0.2620035);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.4782689);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(28,0.5027721);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,14.74514);
   houtFV_stack_4->SetBinContent(2,6.058055);
   houtFV_stack_4->SetBinContent(3,3.167965);
   houtFV_stack_4->SetBinContent(4,2.896301);
   houtFV_stack_4->SetBinContent(5,2.127509);
   houtFV_stack_4->SetBinContent(6,2.690077);
   houtFV_stack_4->SetBinContent(7,3.304489);
   houtFV_stack_4->SetBinContent(8,5.243418);
   houtFV_stack_4->SetBinContent(9,3.991457);
   houtFV_stack_4->SetBinContent(10,3.102373);
   houtFV_stack_4->SetBinContent(11,4.075633);
   houtFV_stack_4->SetBinContent(12,2.739894);
   houtFV_stack_4->SetBinContent(13,4.37394);
   houtFV_stack_4->SetBinContent(14,3.112344);
   houtFV_stack_4->SetBinContent(15,3.510706);
   houtFV_stack_4->SetBinContent(16,2.991334);
   houtFV_stack_4->SetBinContent(17,3.285978);
   houtFV_stack_4->SetBinContent(18,3.577438);
   houtFV_stack_4->SetBinContent(19,6.195457);
   houtFV_stack_4->SetBinContent(20,2.716584);
   houtFV_stack_4->SetBinContent(21,5.772605);
   houtFV_stack_4->SetBinContent(22,2.706314);
   houtFV_stack_4->SetBinContent(23,3.051349);
   houtFV_stack_4->SetBinContent(24,4.719086);
   houtFV_stack_4->SetBinContent(25,3.663694);
   houtFV_stack_4->SetBinContent(26,2.420179);
   houtFV_stack_4->SetBinContent(27,3.655203);
   houtFV_stack_4->SetBinContent(28,2.0936);
   houtFV_stack_4->SetBinContent(29,2.241706);
   houtFV_stack_4->SetBinContent(30,2.017434);
   houtFV_stack_4->SetBinError(1,2.210845);
   houtFV_stack_4->SetBinError(2,1.243846);
   houtFV_stack_4->SetBinError(3,0.885035);
   houtFV_stack_4->SetBinError(4,0.8446473);
   houtFV_stack_4->SetBinError(5,0.7295575);
   houtFV_stack_4->SetBinError(6,0.7495753);
   houtFV_stack_4->SetBinError(7,0.8259691);
   houtFV_stack_4->SetBinError(8,1.146067);
   houtFV_stack_4->SetBinError(9,0.9857034);
   houtFV_stack_4->SetBinError(10,0.8877492);
   houtFV_stack_4->SetBinError(11,1.038779);
   houtFV_stack_4->SetBinError(12,0.7536028);
   houtFV_stack_4->SetBinError(13,1.149771);
   houtFV_stack_4->SetBinError(14,0.8161673);
   houtFV_stack_4->SetBinError(15,0.9044778);
   houtFV_stack_4->SetBinError(16,0.792027);
   houtFV_stack_4->SetBinError(17,0.8404162);
   houtFV_stack_4->SetBinError(18,0.8846768);
   houtFV_stack_4->SetBinError(19,1.483696);
   houtFV_stack_4->SetBinError(20,0.8874719);
   houtFV_stack_4->SetBinError(21,1.255137);
   houtFV_stack_4->SetBinError(22,0.7762221);
   houtFV_stack_4->SetBinError(23,0.7814092);
   houtFV_stack_4->SetBinError(24,1.023119);
   houtFV_stack_4->SetBinError(25,1.016524);
   houtFV_stack_4->SetBinError(26,0.8858881);
   houtFV_stack_4->SetBinError(27,0.9531666);
   houtFV_stack_4->SetBinError(28,0.7401437);
   houtFV_stack_4->SetBinError(29,0.6963793);
   houtFV_stack_4->SetBinError(30,0.7497981);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1355755);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.07685162);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3739642);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1112314);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05442126);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2032288);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.07339665);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03984302);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03464893);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1389766);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.03399719);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.07534129);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.03450397);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1249454);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.07814625);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04480907);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02384855);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0245005);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1287111);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02411083);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04418018);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02449786);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1082626);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.06257651);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.01822846);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.268528);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.593771);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.631888);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.236184);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.435627);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.77635);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.674675);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.374162);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.446253);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.673215);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.263718);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.395664);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.63626);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.544132);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.364987);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.125215);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.929682);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.41216);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.586616);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.817073);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.129207);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.013628);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.608845);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.37133);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.160851);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.542416);
   hNCpi0inFVres_stack_7->SetBinContent(27,3.702776);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.914115);
   hNCpi0inFVres_stack_7->SetBinContent(29,6.195881);
   hNCpi0inFVres_stack_7->SetBinContent(30,4.655837);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.04932405);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5808586);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4254936);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4042115);
   hNCpi0inFVres_stack_7->SetBinError(4,0.415958);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5703931);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4411824);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4098387);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7390496);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7557574);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5784809);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6771755);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5023294);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4136107);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5406585);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5832735);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5439808);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3142889);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5313121);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5203845);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7017655);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4401774);
   hNCpi0inFVres_stack_7->SetBinError(22,0.514787);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5483016);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3432385);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6775072);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5069976);
   hNCpi0inFVres_stack_7->SetBinError(27,0.5347256);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6385169);
   hNCpi0inFVres_stack_7->SetBinError(29,0.8542514);
   hNCpi0inFVres_stack_7->SetBinError(30,0.5918038);
   hNCpi0inFVres_stack_7->SetBinError(31,0.03174751);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.46);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.596774);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.4915431);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.009718);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5715108);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6118931);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8983396);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.5634658);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.026573);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7620485);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5554771);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.70432);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.306475);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.412897);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.367948);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.245222);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.113593);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.45708);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.178358);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.999733);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.270059);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8454583);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.04522);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5442297);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.256879);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.006831);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.186405);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.6529855);
   hNCpi0inFVdis_stack_8->SetBinContent(29,2.268828);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.47121);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6124296);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5619899);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1949315);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.638199);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1890005);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1849387);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3503361);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1754852);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2860815);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.315428);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1726901);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.705071);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4876209);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.368);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6135493);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4152499);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3356538);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5382606);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.584918);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3118041);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.352599);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2560058);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3395352);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2007343);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4807978);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2530962);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.5162775);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.2302836);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.6609378);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4106802);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,6.169353);
   hCCpi0inFV_stack_10->SetBinContent(2,4.833119);
   hCCpi0inFV_stack_10->SetBinContent(3,3.804742);
   hCCpi0inFV_stack_10->SetBinContent(4,3.58018);
   hCCpi0inFV_stack_10->SetBinContent(5,6.976806);
   hCCpi0inFV_stack_10->SetBinContent(6,4.200301);
   hCCpi0inFV_stack_10->SetBinContent(7,4.63248);
   hCCpi0inFV_stack_10->SetBinContent(8,3.95943);
   hCCpi0inFV_stack_10->SetBinContent(9,3.552726);
   hCCpi0inFV_stack_10->SetBinContent(10,5.51773);
   hCCpi0inFV_stack_10->SetBinContent(11,4.382205);
   hCCpi0inFV_stack_10->SetBinContent(12,2.980925);
   hCCpi0inFV_stack_10->SetBinContent(13,2.834081);
   hCCpi0inFV_stack_10->SetBinContent(14,4.520749);
   hCCpi0inFV_stack_10->SetBinContent(15,5.862216);
   hCCpi0inFV_stack_10->SetBinContent(16,3.514436);
   hCCpi0inFV_stack_10->SetBinContent(17,3.896642);
   hCCpi0inFV_stack_10->SetBinContent(18,4.487303);
   hCCpi0inFV_stack_10->SetBinContent(19,4.488478);
   hCCpi0inFV_stack_10->SetBinContent(20,4.639785);
   hCCpi0inFV_stack_10->SetBinContent(21,3.3381);
   hCCpi0inFV_stack_10->SetBinContent(22,5.482244);
   hCCpi0inFV_stack_10->SetBinContent(23,4.357932);
   hCCpi0inFV_stack_10->SetBinContent(24,2.249007);
   hCCpi0inFV_stack_10->SetBinContent(25,4.087294);
   hCCpi0inFV_stack_10->SetBinContent(26,3.473638);
   hCCpi0inFV_stack_10->SetBinContent(27,2.589184);
   hCCpi0inFV_stack_10->SetBinContent(28,4.839881);
   hCCpi0inFV_stack_10->SetBinContent(29,6.500432);
   hCCpi0inFV_stack_10->SetBinContent(30,6.356448);
   hCCpi0inFV_stack_10->SetBinError(1,1.251503);
   hCCpi0inFV_stack_10->SetBinError(2,1.091694);
   hCCpi0inFV_stack_10->SetBinError(3,1.019779);
   hCCpi0inFV_stack_10->SetBinError(4,0.8715217);
   hCCpi0inFV_stack_10->SetBinError(5,1.347166);
   hCCpi0inFV_stack_10->SetBinError(6,1.029438);
   hCCpi0inFV_stack_10->SetBinError(7,1.036887);
   hCCpi0inFV_stack_10->SetBinError(8,0.9607189);
   hCCpi0inFV_stack_10->SetBinError(9,0.9489554);
   hCCpi0inFV_stack_10->SetBinError(10,1.161353);
   hCCpi0inFV_stack_10->SetBinError(11,1.036491);
   hCCpi0inFV_stack_10->SetBinError(12,0.8552677);
   hCCpi0inFV_stack_10->SetBinError(13,0.8081673);
   hCCpi0inFV_stack_10->SetBinError(14,1.118484);
   hCCpi0inFV_stack_10->SetBinError(15,1.211149);
   hCCpi0inFV_stack_10->SetBinError(16,0.940519);
   hCCpi0inFV_stack_10->SetBinError(17,1.075156);
   hCCpi0inFV_stack_10->SetBinError(18,1.131365);
   hCCpi0inFV_stack_10->SetBinError(19,1.128146);
   hCCpi0inFV_stack_10->SetBinError(20,1.074441);
   hCCpi0inFV_stack_10->SetBinError(21,0.8950227);
   hCCpi0inFV_stack_10->SetBinError(22,1.188869);
   hCCpi0inFV_stack_10->SetBinError(23,1.00118);
   hCCpi0inFV_stack_10->SetBinError(24,0.7341869);
   hCCpi0inFV_stack_10->SetBinError(25,1.020272);
   hCCpi0inFV_stack_10->SetBinError(26,0.9614103);
   hCCpi0inFV_stack_10->SetBinError(27,0.809167);
   hCCpi0inFV_stack_10->SetBinError(28,1.092906);
   hCCpi0inFV_stack_10->SetBinError(29,1.272024);
   hCCpi0inFV_stack_10->SetBinError(30,1.296838);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,1.439547);
   hNCinFV_stack_11->SetBinContent(2,1.963819);
   hNCinFV_stack_11->SetBinContent(3,1.847708);
   hNCinFV_stack_11->SetBinContent(4,1.822128);
   hNCinFV_stack_11->SetBinContent(5,0.6200937);
   hNCinFV_stack_11->SetBinContent(6,0.9053291);
   hNCinFV_stack_11->SetBinContent(7,1.080162);
   hNCinFV_stack_11->SetBinContent(8,0.3518876);
   hNCinFV_stack_11->SetBinContent(9,1.109151);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.7958432);
   hNCinFV_stack_11->SetBinContent(12,0.1279738);
   hNCinFV_stack_11->SetBinContent(13,1.008637);
   hNCinFV_stack_11->SetBinContent(14,0.7135791);
   hNCinFV_stack_11->SetBinContent(15,0.3273245);
   hNCinFV_stack_11->SetBinContent(16,1.853536);
   hNCinFV_stack_11->SetBinContent(17,0.2987886);
   hNCinFV_stack_11->SetBinContent(18,0.7183228);
   hNCinFV_stack_11->SetBinContent(19,0.5128407);
   hNCinFV_stack_11->SetBinContent(20,0.7660749);
   hNCinFV_stack_11->SetBinContent(21,1.200773);
   hNCinFV_stack_11->SetBinContent(22,2.281633);
   hNCinFV_stack_11->SetBinContent(23,0.4647949);
   hNCinFV_stack_11->SetBinContent(24,1.320373);
   hNCinFV_stack_11->SetBinContent(25,1.036655);
   hNCinFV_stack_11->SetBinContent(26,1.855879);
   hNCinFV_stack_11->SetBinContent(27,1.245352);
   hNCinFV_stack_11->SetBinContent(28,1.844727);
   hNCinFV_stack_11->SetBinContent(29,2.308616);
   hNCinFV_stack_11->SetBinContent(30,3.620934);
   hNCinFV_stack_11->SetBinError(1,0.5945052);
   hNCinFV_stack_11->SetBinError(2,0.9034793);
   hNCinFV_stack_11->SetBinError(3,0.720288);
   hNCinFV_stack_11->SetBinError(4,1.044775);
   hNCinFV_stack_11->SetBinError(5,0.3207744);
   hNCinFV_stack_11->SetBinError(6,0.4468766);
   hNCinFV_stack_11->SetBinError(7,0.4893204);
   hNCinFV_stack_11->SetBinError(8,0.2269941);
   hNCinFV_stack_11->SetBinError(9,0.5024626);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.433527);
   hNCinFV_stack_11->SetBinError(12,0.1279737);
   hNCinFV_stack_11->SetBinError(13,0.7400601);
   hNCinFV_stack_11->SetBinError(14,0.4027758);
   hNCinFV_stack_11->SetBinError(15,0.2361264);
   hNCinFV_stack_11->SetBinError(16,0.8919912);
   hNCinFV_stack_11->SetBinError(17,0.1816344);
   hNCinFV_stack_11->SetBinError(18,0.3637225);
   hNCinFV_stack_11->SetBinError(19,0.3023193);
   hNCinFV_stack_11->SetBinError(20,0.5910876);
   hNCinFV_stack_11->SetBinError(21,0.600849);
   hNCinFV_stack_11->SetBinError(22,0.7675819);
   hNCinFV_stack_11->SetBinError(23,0.2771015);
   hNCinFV_stack_11->SetBinError(24,0.5548703);
   hNCinFV_stack_11->SetBinError(25,0.6367694);
   hNCinFV_stack_11->SetBinError(26,0.5994429);
   hNCinFV_stack_11->SetBinError(27,0.6696941);
   hNCinFV_stack_11->SetBinError(28,0.7098008);
   hNCinFV_stack_11->SetBinError(29,0.8034384);
   hNCinFV_stack_11->SetBinError(30,0.9187456);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,4.242675);
   hnumuCCinFV_stack_12->SetBinContent(2,3.940813);
   hnumuCCinFV_stack_12->SetBinContent(3,3.940535);
   hnumuCCinFV_stack_12->SetBinContent(4,5.881898);
   hnumuCCinFV_stack_12->SetBinContent(5,2.199373);
   hnumuCCinFV_stack_12->SetBinContent(6,4.827813);
   hnumuCCinFV_stack_12->SetBinContent(7,5.052774);
   hnumuCCinFV_stack_12->SetBinContent(8,5.598602);
   hnumuCCinFV_stack_12->SetBinContent(9,4.664286);
   hnumuCCinFV_stack_12->SetBinContent(10,2.57971);
   hnumuCCinFV_stack_12->SetBinContent(11,3.896896);
   hnumuCCinFV_stack_12->SetBinContent(12,3.722491);
   hnumuCCinFV_stack_12->SetBinContent(13,3.179741);
   hnumuCCinFV_stack_12->SetBinContent(14,2.724508);
   hnumuCCinFV_stack_12->SetBinContent(15,3.66178);
   hnumuCCinFV_stack_12->SetBinContent(16,4.507139);
   hnumuCCinFV_stack_12->SetBinContent(17,4.05898);
   hnumuCCinFV_stack_12->SetBinContent(18,2.419262);
   hnumuCCinFV_stack_12->SetBinContent(19,1.685834);
   hnumuCCinFV_stack_12->SetBinContent(20,4.008075);
   hnumuCCinFV_stack_12->SetBinContent(21,4.438735);
   hnumuCCinFV_stack_12->SetBinContent(22,3.913019);
   hnumuCCinFV_stack_12->SetBinContent(23,5.657578);
   hnumuCCinFV_stack_12->SetBinContent(24,2.307752);
   hnumuCCinFV_stack_12->SetBinContent(25,3.160902);
   hnumuCCinFV_stack_12->SetBinContent(26,4.294519);
   hnumuCCinFV_stack_12->SetBinContent(27,2.007544);
   hnumuCCinFV_stack_12->SetBinContent(28,4.029692);
   hnumuCCinFV_stack_12->SetBinContent(29,6.365871);
   hnumuCCinFV_stack_12->SetBinContent(30,2.958148);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,1.164384);
   hnumuCCinFV_stack_12->SetBinError(2,1.640349);
   hnumuCCinFV_stack_12->SetBinError(3,1.277739);
   hnumuCCinFV_stack_12->SetBinError(4,1.328651);
   hnumuCCinFV_stack_12->SetBinError(5,0.8080887);
   hnumuCCinFV_stack_12->SetBinError(6,1.281409);
   hnumuCCinFV_stack_12->SetBinError(7,1.205256);
   hnumuCCinFV_stack_12->SetBinError(8,1.33634);
   hnumuCCinFV_stack_12->SetBinError(9,1.26735);
   hnumuCCinFV_stack_12->SetBinError(10,0.7948682);
   hnumuCCinFV_stack_12->SetBinError(11,1.001679);
   hnumuCCinFV_stack_12->SetBinError(12,0.9760621);
   hnumuCCinFV_stack_12->SetBinError(13,1.000845);
   hnumuCCinFV_stack_12->SetBinError(14,0.7987962);
   hnumuCCinFV_stack_12->SetBinError(15,0.9792943);
   hnumuCCinFV_stack_12->SetBinError(16,1.333688);
   hnumuCCinFV_stack_12->SetBinError(17,1.206843);
   hnumuCCinFV_stack_12->SetBinError(18,0.8534524);
   hnumuCCinFV_stack_12->SetBinError(19,0.6276995);
   hnumuCCinFV_stack_12->SetBinError(20,1.438664);
   hnumuCCinFV_stack_12->SetBinError(21,1.138148);
   hnumuCCinFV_stack_12->SetBinError(22,1.029051);
   hnumuCCinFV_stack_12->SetBinError(23,1.552378);
   hnumuCCinFV_stack_12->SetBinError(24,0.7950501);
   hnumuCCinFV_stack_12->SetBinError(25,0.9706087);
   hnumuCCinFV_stack_12->SetBinError(26,1.110225);
   hnumuCCinFV_stack_12->SetBinError(27,0.6939813);
   hnumuCCinFV_stack_12->SetBinError(28,1.060403);
   hnumuCCinFV_stack_12->SetBinError(29,1.600691);
   hnumuCCinFV_stack_12->SetBinError(30,0.8253356);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(16,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(25,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,1.569686);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(16,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1711909);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4041031);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(25,0.3921167);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.1529246);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,1.569686);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__26->SetBinContent(1,33.75434);
   hmcerror__26->SetBinContent(2,26.38369);
   hmcerror__26->SetBinContent(3,21.54302);
   hmcerror__26->SetBinContent(4,23.41556);
   hmcerror__26->SetBinContent(5,22.39543);
   hmcerror__26->SetBinContent(6,21.76409);
   hmcerror__26->SetBinContent(7,22.17721);
   hmcerror__26->SetBinContent(8,28.48282);
   hmcerror__26->SetBinContent(9,23.78731);
   hmcerror__26->SetBinContent(10,18.98846);
   hmcerror__26->SetBinContent(11,22.40246);
   hmcerror__26->SetBinContent(12,17.57071);
   hmcerror__26->SetBinContent(13,18.37939);
   hmcerror__26->SetBinContent(14,19.66254);
   hmcerror__26->SetBinContent(15,21.45626);
   hmcerror__26->SetBinContent(16,22.25615);
   hmcerror__26->SetBinContent(17,18.5474);
   hmcerror__26->SetBinContent(18,18.67431);
   hmcerror__26->SetBinContent(19,19.42895);
   hmcerror__26->SetBinContent(20,23.43328);
   hmcerror__26->SetBinContent(21,29.97056);
   hmcerror__26->SetBinContent(22,20.4227);
   hmcerror__26->SetBinContent(23,19.14817);
   hmcerror__26->SetBinContent(24,17.68231);
   hmcerror__26->SetBinContent(25,18.63423);
   hmcerror__26->SetBinContent(26,20.27718);
   hmcerror__26->SetBinContent(27,16.4473);
   hmcerror__26->SetBinContent(28,20.84747);
   hmcerror__26->SetBinContent(29,29.15076);
   hmcerror__26->SetBinContent(30,22.86899);
   hmcerror__26->SetBinContent(31,0.6360891);
   hmcerror__26->SetBinError(1,30.9732);
   hmcerror__26->SetBinError(2,13.08548);
   hmcerror__26->SetBinError(3,19.82931);
   hmcerror__26->SetBinError(4,10.2511);
   hmcerror__26->SetBinError(5,11.90795);
   hmcerror__26->SetBinError(6,9.228281);
   hmcerror__26->SetBinError(7,9.966916);
   hmcerror__26->SetBinError(8,13.6913);
   hmcerror__26->SetBinError(9,13.53874);
   hmcerror__26->SetBinError(10,9.570073);
   hmcerror__26->SetBinError(11,14.94825);
   hmcerror__26->SetBinError(12,8.360638);
   hmcerror__26->SetBinError(13,15.96539);
   hmcerror__26->SetBinError(14,9.86054);
   hmcerror__26->SetBinError(15,10.33517);
   hmcerror__26->SetBinError(16,13.01036);
   hmcerror__26->SetBinError(17,10.27742);
   hmcerror__26->SetBinError(18,10.22014);
   hmcerror__26->SetBinError(19,11.95104);
   hmcerror__26->SetBinError(20,13.58019);
   hmcerror__26->SetBinError(21,14.26673);
   hmcerror__26->SetBinError(22,12.34556);
   hmcerror__26->SetBinError(23,10.34218);
   hmcerror__26->SetBinError(24,10.8396);
   hmcerror__26->SetBinError(25,10.36504);
   hmcerror__26->SetBinError(26,19.22618);
   hmcerror__26->SetBinError(27,9.548009);
   hmcerror__26->SetBinError(28,9.44976);
   hmcerror__26->SetBinError(29,13.69482);
   hmcerror__26->SetBinError(30,12.28273);
   hmcerror__26->SetBinError(31,2.13645);
   hmcerror__26->SetBinError(32,0.3895343);
   hmcerror__26->SetBinError(33,0.3895343);
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
   
   Double_t _fx3033[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3033[32] = {
   23,
   18,
   16,
   19,
   20,
   19,
   25,
   27,
   19,
   19,
   19,
   17,
   14,
   20,
   20,
   20,
   13,
   12,
   17,
   15,
   27,
   20,
   21,
   15,
   22,
   20,
   25,
   21,
   27,
   15,
   0,
   0};
   Double_t _felx3033[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3033[32] = {
   4.9457,
   4.4008,
   4.1628,
   4.5151,
   4.6266,
   4.5151,
   5.1474,
   5.3414,
   4.5151,
   4.5151,
   4.5151,
   4.2835,
   3.9102,
   4.6266,
   4.6266,
   4.6266,
   3.77763,
   3.64022,
   4.2835,
   4.0385,
   5.3414,
   4.6266,
   4.7354,
   4.0385,
   4.8417,
   4.6266,
   5.1474,
   4.7354,
   5.3414,
   4.0385,
   0,
   0};
   Double_t _fehx3033[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3033[32] = {
   4.7346,
   4.1858,
   3.9454,
   4.3011,
   4.4133,
   4.3011,
   4.9374,
   5.1322,
   4.3011,
   4.3011,
   4.3011,
   4.0673,
   3.6898,
   4.4133,
   4.4133,
   4.4133,
   3.5552,
   3.4155,
   4.0673,
   3.8197,
   5.1322,
   4.4133,
   4.5229,
   3.8197,
   4.6299,
   4.4133,
   4.9374,
   4.5229,
   5.1322,
   3.8197,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1210);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(35.34542);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.0/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3034[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3034[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3034[32] = {
   0.9176064,
   0.4959683,
   0.9204513,
   0.4377899,
   0.5317132,
   0.4240141,
   0.4494215,
   0.4806862,
   0.5691578,
   0.5039942,
   0.6672592,
   0.4758282,
   0.8686575,
   0.5014887,
   0.4816855,
   0.5845739,
   0.5541164,
   0.5472833,
   0.6151151,
   0.5795257,
   0.4760248,
   0.6045015,
   0.5401131,
   0.6130196,
   0.5562368,
   0.9481683,
   0.5805214,
   0.4532809,
   0.4697929,
   0.537091,
   3.358727,
   0};
   Double_t _fehx3034[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3034[32] = {
   0.9176064,
   0.4959683,
   0.9204513,
   0.4377899,
   0.5317132,
   0.4240141,
   0.4494215,
   0.4806862,
   0.5691578,
   0.5039942,
   0.6672592,
   0.4758282,
   0.8686575,
   0.5014887,
   0.4816855,
   0.5845739,
   0.5541164,
   0.5472833,
   0.6151151,
   0.5795257,
   0.4760248,
   0.6045015,
   0.5401131,
   0.6130196,
   0.5562368,
   0.9481683,
   0.5805214,
   0.4532809,
   0.4697929,
   0.537091,
   3.358727,
   0};
   grae = new TGraphAsymmErrors(32,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1210);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3035[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3035[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3035[32] = {
   0.2261459,
   0.2639513,
   0.2645938,
   0.2445408,
   0.2434681,
   0.2506941,
   0.2501561,
   0.245995,
   0.2242035,
   0.3233992,
   0.2469963,
   0.3108473,
   0.2775443,
   0.2650252,
   0.2817757,
   0.3258124,
   0.2827435,
   0.3050624,
   0.3003341,
   0.259357,
   0.204772,
   0.2861295,
   0.314956,
   0.2912283,
   0.2832606,
   0.3117078,
   0.3082218,
   0.2817412,
   0.2951782,
   0.3678539,
   0.8634466,
   0};
   Double_t _fehx3035[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3035[32] = {
   0.2261459,
   0.2639513,
   0.2645938,
   0.2445408,
   0.2434681,
   0.2506941,
   0.2501561,
   0.245995,
   0.2242035,
   0.3233992,
   0.2469963,
   0.3108473,
   0.2775443,
   0.2650252,
   0.2817757,
   0.3258124,
   0.2827435,
   0.3050624,
   0.3003341,
   0.259357,
   0.204772,
   0.2861295,
   0.314956,
   0.2912283,
   0.2832606,
   0.3117078,
   0.3082218,
   0.2817412,
   0.2951782,
   0.3678539,
   0.8634466,
   0};
   grae = new TGraphAsymmErrors(32,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1210);
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
   
   Double_t _fx3036[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3036[32] = {
   0.6813939,
   0.6822396,
   0.7426998,
   0.8114262,
   0.8930393,
   0.8729978,
   1.127283,
   0.9479397,
   0.7987451,
   1.000608,
   0.8481212,
   0.9675195,
   0.7617229,
   1.017163,
   0.932129,
   0.8986281,
   0.7009068,
   0.6425939,
   0.8749828,
   0.6401153,
   0.9008842,
   0.9793022,
   1.096711,
   0.8483054,
   1.180623,
   0.9863305,
   1.520006,
   1.007317,
   0.9262194,
   0.65591,
   0,
   10};
   Double_t _felx3036[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3036[32] = {
   0.1465204,
   0.1668,
   0.1932319,
   0.1928248,
   0.2065868,
   0.2074564,
   0.2321031,
   0.1875306,
   0.1898113,
   0.2377813,
   0.2015448,
   0.2437865,
   0.2127492,
   0.2353002,
   0.2156294,
   0.2078796,
   0.2036744,
   0.1949319,
   0.2204699,
   0.1723404,
   0.1782216,
   0.226542,
   0.247303,
   0.2283921,
   0.2598283,
   0.2281678,
   0.3129632,
   0.2271451,
   0.1832336,
   0.1765928,
   0,
   0};
   Double_t _fehx3036[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3036[32] = {
   0.1402664,
   0.158651,
   0.1831405,
   0.1836855,
   0.1970625,
   0.1976237,
   0.2226339,
   0.1801858,
   0.1808149,
   0.2265113,
   0.1919923,
   0.2314819,
   0.2007575,
   0.2244522,
   0.2056882,
   0.1982958,
   0.1916818,
   0.1828983,
   0.2093422,
   0.1630032,
   0.1712414,
   0.2160977,
   0.2362054,
   0.2160181,
   0.2484621,
   0.2176486,
   0.3001952,
   0.216952,
   0.1760572,
   0.1670253,
   1.804464,
   0};
   grae = new TGraphAsymmErrors(32,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1210);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
