#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Oct 21 20:21:51 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-230.7692,-4.544323,1692.308,502.5064);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__7->SetBinContent(1,55.77274);
   hmc__7->SetBinContent(2,175.2682);
   hmc__7->SetBinContent(3,227.2161);
   hmc__7->SetBinContent(4,195.7252);
   hmc__7->SetBinContent(5,161.6199);
   hmc__7->SetBinContent(6,149.5997);
   hmc__7->SetBinContent(7,122.5118);
   hmc__7->SetBinContent(8,84.89998);
   hmc__7->SetBinContent(9,72.63019);
   hmc__7->SetBinContent(10,52.60436);
   hmc__7->SetBinContent(11,36.82554);
   hmc__7->SetBinContent(12,32.04672);
   hmc__7->SetBinContent(13,21.93677);
   hmc__7->SetBinContent(14,18.37758);
   hmc__7->SetBinContent(15,15.2859);
   hmc__7->SetBinContent(16,12.90778);
   hmc__7->SetBinContent(17,13.1907);
   hmc__7->SetBinContent(18,12.0872);
   hmc__7->SetBinContent(19,7.905445);
   hmc__7->SetBinContent(20,7.716983);
   hmc__7->SetBinContent(21,9.393735);
   hmc__7->SetBinContent(22,9.473302);
   hmc__7->SetBinContent(23,5.9569);
   hmc__7->SetBinContent(24,3.797396);
   hmc__7->SetBinContent(25,4.508406);
   hmc__7->SetBinContent(26,84.89488);
   hmc__7->SetBinError(1,21.64904);
   hmc__7->SetBinError(2,47.85672);
   hmc__7->SetBinError(3,57.52499);
   hmc__7->SetBinError(4,51.27875);
   hmc__7->SetBinError(5,41.34181);
   hmc__7->SetBinError(6,39.66729);
   hmc__7->SetBinError(7,36.02241);
   hmc__7->SetBinError(8,26.66588);
   hmc__7->SetBinError(9,25.83231);
   hmc__7->SetBinError(10,17.64628);
   hmc__7->SetBinError(11,12.14693);
   hmc__7->SetBinError(12,19.32313);
   hmc__7->SetBinError(13,14.37355);
   hmc__7->SetBinError(14,11.84824);
   hmc__7->SetBinError(15,8.664955);
   hmc__7->SetBinError(16,9.754117);
   hmc__7->SetBinError(17,10.9325);
   hmc__7->SetBinError(18,8.505692);
   hmc__7->SetBinError(19,5.734626);
   hmc__7->SetBinError(20,8.806604);
   hmc__7->SetBinError(21,8.661532);
   hmc__7->SetBinError(22,11.27115);
   hmc__7->SetBinError(23,10.75092);
   hmc__7->SetBinError(24,22.27959);
   hmc__7->SetBinError(25,5.837854);
   hmc__7->SetBinError(26,28.30168);
   hmc__7->SetMinimum(-4.544323);
   hmc__7->SetMaximum(477.1539);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,1500);
   hs3_stack_3->SetMinimum(-1.473944e-08);
   hs3_stack_3->SetMaximum(238.5769);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,3.652728);
   hbadmatch_stack_1->SetBinContent(2,8.114204);
   hbadmatch_stack_1->SetBinContent(3,8.526362);
   hbadmatch_stack_1->SetBinContent(4,6.677435);
   hbadmatch_stack_1->SetBinContent(5,4.05572);
   hbadmatch_stack_1->SetBinContent(6,4.141832);
   hbadmatch_stack_1->SetBinContent(7,2.896934);
   hbadmatch_stack_1->SetBinContent(8,2.888173);
   hbadmatch_stack_1->SetBinContent(9,3.239545);
   hbadmatch_stack_1->SetBinContent(10,1.618758);
   hbadmatch_stack_1->SetBinContent(11,0.5106161);
   hbadmatch_stack_1->SetBinContent(12,1.042361);
   hbadmatch_stack_1->SetBinContent(13,1.159807);
   hbadmatch_stack_1->SetBinContent(14,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.5773679);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.3416744);
   hbadmatch_stack_1->SetBinContent(26,3.265269);
   hbadmatch_stack_1->SetBinError(1,1.045831);
   hbadmatch_stack_1->SetBinError(2,1.475625);
   hbadmatch_stack_1->SetBinError(3,1.591716);
   hbadmatch_stack_1->SetBinError(4,1.376264);
   hbadmatch_stack_1->SetBinError(5,0.9751048);
   hbadmatch_stack_1->SetBinError(6,1.135819);
   hbadmatch_stack_1->SetBinError(7,0.9796509);
   hbadmatch_stack_1->SetBinError(8,1.010098);
   hbadmatch_stack_1->SetBinError(9,1.318137);
   hbadmatch_stack_1->SetBinError(10,0.6918681);
   hbadmatch_stack_1->SetBinError(11,0.3131904);
   hbadmatch_stack_1->SetBinError(12,0.5293674);
   hbadmatch_stack_1->SetBinError(13,0.5423759);
   hbadmatch_stack_1->SetBinError(14,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.4147048);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3416744);
   hbadmatch_stack_1->SetBinError(26,0.984708);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,4.049991);
   hext_stack_2->SetBinContent(2,34.16522);
   hext_stack_2->SetBinContent(3,48.75642);
   hext_stack_2->SetBinContent(4,26.41836);
   hext_stack_2->SetBinContent(5,32.11628);
   hext_stack_2->SetBinContent(6,26.70244);
   hext_stack_2->SetBinContent(7,24.19664);
   hext_stack_2->SetBinContent(8,13.81549);
   hext_stack_2->SetBinContent(9,13.95236);
   hext_stack_2->SetBinContent(10,9.230396);
   hext_stack_2->SetBinContent(11,8.896047);
   hext_stack_2->SetBinContent(12,5.807659);
   hext_stack_2->SetBinContent(13,3.241202);
   hext_stack_2->SetBinContent(14,1.704188);
   hext_stack_2->SetBinContent(15,3.006186);
   hext_stack_2->SetBinContent(16,2.674609);
   hext_stack_2->SetBinContent(17,2.263601);
   hext_stack_2->SetBinContent(18,3.076798);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,2.26801);
   hext_stack_2->SetBinContent(22,1.950793);
   hext_stack_2->SetBinContent(23,1.379791);
   hext_stack_2->SetBinContent(25,0.9660115);
   hext_stack_2->SetBinContent(26,14.42957);
   hext_stack_2->SetBinError(1,1.258643);
   hext_stack_2->SetBinError(2,4.066085);
   hext_stack_2->SetBinError(3,4.769589);
   hext_stack_2->SetBinError(4,3.558807);
   hext_stack_2->SetBinError(5,3.782456);
   hext_stack_2->SetBinError(6,3.693403);
   hext_stack_2->SetBinError(7,3.557842);
   hext_stack_2->SetBinError(8,2.58479);
   hext_stack_2->SetBinError(9,2.338362);
   hext_stack_2->SetBinError(10,1.950755);
   hext_stack_2->SetBinError(11,2.058577);
   hext_stack_2->SetBinError(12,1.742221);
   hext_stack_2->SetBinError(13,1.178414);
   hext_stack_2->SetBinError(14,0.7656743);
   hext_stack_2->SetBinError(15,1.068791);
   hext_stack_2->SetBinError(16,1.112781);
   hext_stack_2->SetBinError(17,0.9684198);
   hext_stack_2->SetBinError(18,1.126269);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,1.035838);
   hext_stack_2->SetBinError(22,0.8755137);
   hext_stack_2->SetBinError(23,0.6935586);
   hext_stack_2->SetBinError(25,0.7189592);
   hext_stack_2->SetBinError(26,2.399881);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,2.490447);
   hdirt_stack_3->SetBinContent(2,2.530202);
   hdirt_stack_3->SetBinContent(3,2.103963);
   hdirt_stack_3->SetBinContent(4,2.941516);
   hdirt_stack_3->SetBinContent(5,2.436694);
   hdirt_stack_3->SetBinContent(6,3.221691);
   hdirt_stack_3->SetBinContent(7,0.9712972);
   hdirt_stack_3->SetBinContent(8,0.9291372);
   hdirt_stack_3->SetBinContent(9,1.830133);
   hdirt_stack_3->SetBinContent(10,0.540729);
   hdirt_stack_3->SetBinContent(11,0.360896);
   hdirt_stack_3->SetBinContent(12,0.2715517);
   hdirt_stack_3->SetBinContent(14,0.5986317);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.4004149);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinContent(26,1.3631);
   hdirt_stack_3->SetBinError(1,0.8652987);
   hdirt_stack_3->SetBinError(2,0.7342884);
   hdirt_stack_3->SetBinError(3,0.8059551);
   hdirt_stack_3->SetBinError(4,0.8278513);
   hdirt_stack_3->SetBinError(5,0.8192744);
   hdirt_stack_3->SetBinError(6,1.264066);
   hdirt_stack_3->SetBinError(7,0.4684838);
   hdirt_stack_3->SetBinError(8,0.5697248);
   hdirt_stack_3->SetBinError(9,0.8208543);
   hdirt_stack_3->SetBinError(10,0.3288362);
   hdirt_stack_3->SetBinError(11,0.2588329);
   hdirt_stack_3->SetBinError(12,0.1942317);
   hdirt_stack_3->SetBinError(14,0.3488556);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(17,0.2964588);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetBinError(26,0.6417027);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,16.35293);
   houtFV_stack_4->SetBinContent(2,38.37382);
   houtFV_stack_4->SetBinContent(3,41.1045);
   houtFV_stack_4->SetBinContent(4,35.75095);
   houtFV_stack_4->SetBinContent(5,24.96665);
   houtFV_stack_4->SetBinContent(6,25.65915);
   houtFV_stack_4->SetBinContent(7,20.79919);
   houtFV_stack_4->SetBinContent(8,15.49421);
   houtFV_stack_4->SetBinContent(9,13.68656);
   houtFV_stack_4->SetBinContent(10,10.52523);
   houtFV_stack_4->SetBinContent(11,7.30459);
   houtFV_stack_4->SetBinContent(12,8.599551);
   houtFV_stack_4->SetBinContent(13,5.188238);
   houtFV_stack_4->SetBinContent(14,4.603121);
   houtFV_stack_4->SetBinContent(15,3.240681);
   houtFV_stack_4->SetBinContent(16,4.068679);
   houtFV_stack_4->SetBinContent(17,3.533985);
   houtFV_stack_4->SetBinContent(18,2.851269);
   houtFV_stack_4->SetBinContent(19,1.553435);
   houtFV_stack_4->SetBinContent(20,2.204918);
   houtFV_stack_4->SetBinContent(21,1.857266);
   houtFV_stack_4->SetBinContent(22,1.732683);
   houtFV_stack_4->SetBinContent(23,1.110637);
   houtFV_stack_4->SetBinContent(24,0.8770706);
   houtFV_stack_4->SetBinContent(25,0.8770706);
   houtFV_stack_4->SetBinContent(26,16.37103);
   houtFV_stack_4->SetBinError(1,1.977407);
   houtFV_stack_4->SetBinError(2,3.408606);
   houtFV_stack_4->SetBinError(3,3.155965);
   houtFV_stack_4->SetBinError(4,2.968193);
   houtFV_stack_4->SetBinError(5,2.483568);
   houtFV_stack_4->SetBinError(6,2.5683);
   houtFV_stack_4->SetBinError(7,2.437018);
   houtFV_stack_4->SetBinError(8,2.005128);
   houtFV_stack_4->SetBinError(9,1.994104);
   houtFV_stack_4->SetBinError(10,1.640011);
   houtFV_stack_4->SetBinError(11,1.3984);
   houtFV_stack_4->SetBinError(12,1.412114);
   houtFV_stack_4->SetBinError(13,1.172751);
   houtFV_stack_4->SetBinError(14,1.209879);
   houtFV_stack_4->SetBinError(15,0.8787663);
   houtFV_stack_4->SetBinError(16,1.240362);
   houtFV_stack_4->SetBinError(17,0.9327078);
   houtFV_stack_4->SetBinError(18,0.9128175);
   houtFV_stack_4->SetBinError(19,0.6588172);
   houtFV_stack_4->SetBinError(20,0.7211359);
   houtFV_stack_4->SetBinError(21,0.6799255);
   houtFV_stack_4->SetBinError(22,0.6268932);
   houtFV_stack_4->SetBinError(23,0.4576017);
   houtFV_stack_4->SetBinError(24,0.5197486);
   houtFV_stack_4->SetBinError(25,0.5197486);
   houtFV_stack_4->SetBinError(26,1.995758);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4913292);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6883109);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.075275);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.490592);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.281359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.036393);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.358571);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.703622);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9220282);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.254961);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2179755);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3790249);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1959804);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.0972715);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5261939);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.121459);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.07071795);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.06473318);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1505081);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1121063);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1106251);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2081603);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,1.032673);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2117108);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3360857);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4301084);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6045944);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4214221);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3253202);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4147797);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.491891);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3219004);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5067078);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.08509269);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1550642);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1263922);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06323581);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2439339);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1002675);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04218251);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03901653);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1061695);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.08870805);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06481996);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1958797);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3275612);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03613899);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2950172);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2126723);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.07357918);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3740225);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.04706571);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03574342);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.06825298);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.02537674);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02557584);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.103197);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06828485);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03679284);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1775193);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03789905);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02528626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03631835);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0598385);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.01962509);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.458138);
   hNCpi0inFVres_stack_7->SetBinContent(2,20.51969);
   hNCpi0inFVres_stack_7->SetBinContent(3,26.29076);
   hNCpi0inFVres_stack_7->SetBinContent(4,29.54067);
   hNCpi0inFVres_stack_7->SetBinContent(5,26.93591);
   hNCpi0inFVres_stack_7->SetBinContent(6,25.36305);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.53969);
   hNCpi0inFVres_stack_7->SetBinContent(8,14.21568);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.4378);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.838909);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.748184);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.755771);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.895308);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.921484);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.776643);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.9502379);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.391893);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.8333188);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.8131534);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.7526892);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.485749);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.022865);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.146672);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.705862);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1959523);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.68926);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7606904);
   hNCpi0inFVres_stack_7->SetBinError(2,1.523764);
   hNCpi0inFVres_stack_7->SetBinError(3,1.577052);
   hNCpi0inFVres_stack_7->SetBinError(4,1.641955);
   hNCpi0inFVres_stack_7->SetBinError(5,1.57097);
   hNCpi0inFVres_stack_7->SetBinError(6,1.569322);
   hNCpi0inFVres_stack_7->SetBinError(7,1.183845);
   hNCpi0inFVres_stack_7->SetBinError(8,1.188914);
   hNCpi0inFVres_stack_7->SetBinError(9,1.003677);
   hNCpi0inFVres_stack_7->SetBinError(10,1.041525);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7398353);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5830603);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6381654);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7006731);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6129423);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2038084);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3390505);
   hNCpi0inFVres_stack_7->SetBinError(18,0.220362);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3912638);
   hNCpi0inFVres_stack_7->SetBinError(20,0.279082);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5966167);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5902704);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5414275);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2390885);
   hNCpi0inFVres_stack_7->SetBinError(25,0.07954958);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8133568);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.64536);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.785435);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.517457);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.832939);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.335961);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.965254);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.708958);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.95518);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.048409);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.015322);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.186808);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.328766);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.366451);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.841867);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3343382);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.5168804);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1579417);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9838821);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4644774);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6001178);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.9174521);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6566647);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5689389);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(26,4.934649);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6310278);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8379829);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9324297);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.857688);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.053138);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.723939);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8238615);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.710238);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7463793);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3538681);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6365763);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5949168);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.57699);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7099667);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1020865);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1821039);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.09364571);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5708613);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2274444);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.283797);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6156179);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4160996);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4994853);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.9318972);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,11.18925);
   hCCpi0inFV_stack_10->SetBinContent(2,31.39717);
   hCCpi0inFV_stack_10->SetBinContent(3,43.4353);
   hCCpi0inFV_stack_10->SetBinContent(4,46.00057);
   hCCpi0inFV_stack_10->SetBinContent(5,35.16743);
   hCCpi0inFV_stack_10->SetBinContent(6,34.41016);
   hCCpi0inFV_stack_10->SetBinContent(7,27.04234);
   hCCpi0inFV_stack_10->SetBinContent(8,19.27345);
   hCCpi0inFV_stack_10->SetBinContent(9,13.24579);
   hCCpi0inFV_stack_10->SetBinContent(10,9.491321);
   hCCpi0inFV_stack_10->SetBinContent(11,5.565037);
   hCCpi0inFV_stack_10->SetBinContent(12,4.841572);
   hCCpi0inFV_stack_10->SetBinContent(13,3.425918);
   hCCpi0inFV_stack_10->SetBinContent(14,3.216286);
   hCCpi0inFV_stack_10->SetBinContent(15,3.167362);
   hCCpi0inFV_stack_10->SetBinContent(16,2.254078);
   hCCpi0inFV_stack_10->SetBinContent(17,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(18,2.340906);
   hCCpi0inFV_stack_10->SetBinContent(19,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(20,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(21,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(22,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(23,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(24,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9707419);
   hCCpi0inFV_stack_10->SetBinContent(26,15.46923);
   hCCpi0inFV_stack_10->SetBinError(1,1.610651);
   hCCpi0inFV_stack_10->SetBinError(2,2.743274);
   hCCpi0inFV_stack_10->SetBinError(3,3.347178);
   hCCpi0inFV_stack_10->SetBinError(4,3.458);
   hCCpi0inFV_stack_10->SetBinError(5,2.974689);
   hCCpi0inFV_stack_10->SetBinError(6,3.028438);
   hCCpi0inFV_stack_10->SetBinError(7,2.65074);
   hCCpi0inFV_stack_10->SetBinError(8,2.17899);
   hCCpi0inFV_stack_10->SetBinError(9,1.815466);
   hCCpi0inFV_stack_10->SetBinError(10,1.573937);
   hCCpi0inFV_stack_10->SetBinError(11,1.17654);
   hCCpi0inFV_stack_10->SetBinError(12,1.093209);
   hCCpi0inFV_stack_10->SetBinError(13,0.8774323);
   hCCpi0inFV_stack_10->SetBinError(14,0.9615195);
   hCCpi0inFV_stack_10->SetBinError(15,0.9093825);
   hCCpi0inFV_stack_10->SetBinError(16,0.7355386);
   hCCpi0inFV_stack_10->SetBinError(17,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(18,0.8093475);
   hCCpi0inFV_stack_10->SetBinError(19,0.650847);
   hCCpi0inFV_stack_10->SetBinError(20,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(21,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(22,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(23,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(24,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(25,0.4994891);
   hCCpi0inFV_stack_10->SetBinError(26,2.025338);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,2.158761);
   hNCinFV_stack_11->SetBinContent(2,10.51951);
   hNCinFV_stack_11->SetBinContent(3,13.65633);
   hNCinFV_stack_11->SetBinContent(4,6.569327);
   hNCinFV_stack_11->SetBinContent(5,6.943544);
   hNCinFV_stack_11->SetBinContent(6,5.694206);
   hNCinFV_stack_11->SetBinContent(7,4.363936);
   hNCinFV_stack_11->SetBinContent(8,2.268972);
   hNCinFV_stack_11->SetBinContent(9,4.028942);
   hNCinFV_stack_11->SetBinContent(10,2.624059);
   hNCinFV_stack_11->SetBinContent(11,1.131642);
   hNCinFV_stack_11->SetBinContent(12,1.660025);
   hNCinFV_stack_11->SetBinContent(13,1.509831);
   hNCinFV_stack_11->SetBinContent(14,1.0377);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.5145313);
   hNCinFV_stack_11->SetBinContent(17,0.8662739);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.05405266);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.9004716);
   hNCinFV_stack_11->SetBinContent(25,0.1441633);
   hNCinFV_stack_11->SetBinContent(26,2.348081);
   hNCinFV_stack_11->SetBinError(1,0.7055639);
   hNCinFV_stack_11->SetBinError(2,1.613432);
   hNCinFV_stack_11->SetBinError(3,2.279314);
   hNCinFV_stack_11->SetBinError(4,1.439321);
   hNCinFV_stack_11->SetBinError(5,1.40845);
   hNCinFV_stack_11->SetBinError(6,1.215622);
   hNCinFV_stack_11->SetBinError(7,1.005534);
   hNCinFV_stack_11->SetBinError(8,0.6871611);
   hNCinFV_stack_11->SetBinError(9,1.082825);
   hNCinFV_stack_11->SetBinError(10,0.9001837);
   hNCinFV_stack_11->SetBinError(11,0.4720372);
   hNCinFV_stack_11->SetBinError(12,0.5939273);
   hNCinFV_stack_11->SetBinError(13,0.5872531);
   hNCinFV_stack_11->SetBinError(14,0.556304);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.3034126);
   hNCinFV_stack_11->SetBinError(17,0.5962281);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.05405266);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.7319083);
   hNCinFV_stack_11->SetBinError(25,0.1441632);
   hNCinFV_stack_11->SetBinError(26,0.7658717);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,7.938056);
   hnumuCCinFV_stack_12->SetBinContent(2,22.66724);
   hnumuCCinFV_stack_12->SetBinContent(3,35.12486);
   hnumuCCinFV_stack_12->SetBinContent(4,33.39219);
   hnumuCCinFV_stack_12->SetBinContent(5,19.2927);
   hnumuCCinFV_stack_12->SetBinContent(6,16.37825);
   hnumuCCinFV_stack_12->SetBinContent(7,14.1002);
   hnumuCCinFV_stack_12->SetBinContent(8,10.1349);
   hnumuCCinFV_stack_12->SetBinContent(9,7.178782);
   hnumuCCinFV_stack_12->SetBinContent(10,6.213355);
   hnumuCCinFV_stack_12->SetBinContent(11,4.563565);
   hnumuCCinFV_stack_12->SetBinContent(12,4.307588);
   hnumuCCinFV_stack_12->SetBinContent(13,2.954031);
   hnumuCCinFV_stack_12->SetBinContent(14,1.82014);
   hnumuCCinFV_stack_12->SetBinContent(15,1.351351);
   hnumuCCinFV_stack_12->SetBinContent(16,1.391699);
   hnumuCCinFV_stack_12->SetBinContent(17,2.974488);
   hnumuCCinFV_stack_12->SetBinContent(18,1.196703);
   hnumuCCinFV_stack_12->SetBinContent(19,1.164752);
   hnumuCCinFV_stack_12->SetBinContent(20,1.50391);
   hnumuCCinFV_stack_12->SetBinContent(21,1.217248);
   hnumuCCinFV_stack_12->SetBinContent(22,0.4370442);
   hnumuCCinFV_stack_12->SetBinContent(23,1.168241);
   hnumuCCinFV_stack_12->SetBinContent(25,0.2487975);
   hnumuCCinFV_stack_12->SetBinContent(26,15.63738);
   hnumuCCinFV_stack_12->SetBinError(1,2.560125);
   hnumuCCinFV_stack_12->SetBinError(2,2.539756);
   hnumuCCinFV_stack_12->SetBinError(3,3.265591);
   hnumuCCinFV_stack_12->SetBinError(4,3.62898);
   hnumuCCinFV_stack_12->SetBinError(5,2.814606);
   hnumuCCinFV_stack_12->SetBinError(6,2.086434);
   hnumuCCinFV_stack_12->SetBinError(7,2.121933);
   hnumuCCinFV_stack_12->SetBinError(8,1.880697);
   hnumuCCinFV_stack_12->SetBinError(9,1.407217);
   hnumuCCinFV_stack_12->SetBinError(10,1.259562);
   hnumuCCinFV_stack_12->SetBinError(11,1.045663);
   hnumuCCinFV_stack_12->SetBinError(12,1.077249);
   hnumuCCinFV_stack_12->SetBinError(13,0.83942);
   hnumuCCinFV_stack_12->SetBinError(14,0.7122619);
   hnumuCCinFV_stack_12->SetBinError(15,0.5528214);
   hnumuCCinFV_stack_12->SetBinError(16,0.6557764);
   hnumuCCinFV_stack_12->SetBinError(17,1.383505);
   hnumuCCinFV_stack_12->SetBinError(18,0.5693997);
   hnumuCCinFV_stack_12->SetBinError(19,0.5357613);
   hnumuCCinFV_stack_12->SetBinError(20,0.7395749);
   hnumuCCinFV_stack_12->SetBinError(21,0.6211758);
   hnumuCCinFV_stack_12->SetBinError(22,0.4370442);
   hnumuCCinFV_stack_12->SetBinError(23,0.537179);
   hnumuCCinFV_stack_12->SetBinError(25,0.2487975);
   hnumuCCinFV_stack_12->SetBinError(26,2.285734);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(5,0.7136385);
   hnueCCinFV_stack_13->SetBinContent(6,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(7,2.498319);
   hnueCCinFV_stack_13->SetBinContent(8,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(22,1.900578);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.8544016);
   hnueCCinFV_stack_13->SetBinContent(26,2.329254);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.2781975);
   hnueCCinFV_stack_13->SetBinError(5,0.4128137);
   hnueCCinFV_stack_13->SetBinError(6,0.4383608);
   hnueCCinFV_stack_13->SetBinError(7,1.641665);
   hnueCCinFV_stack_13->SetBinError(8,0.1529246);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.2179626);
   hnueCCinFV_stack_13->SetBinError(22,1.375469);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.6104413);
   hnueCCinFV_stack_13->SetBinError(26,0.8263746);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__8->SetBinContent(1,55.77274);
   hmcerror__8->SetBinContent(2,175.2682);
   hmcerror__8->SetBinContent(3,227.2161);
   hmcerror__8->SetBinContent(4,195.7252);
   hmcerror__8->SetBinContent(5,161.6199);
   hmcerror__8->SetBinContent(6,149.5997);
   hmcerror__8->SetBinContent(7,122.5118);
   hmcerror__8->SetBinContent(8,84.89998);
   hmcerror__8->SetBinContent(9,72.63019);
   hmcerror__8->SetBinContent(10,52.60436);
   hmcerror__8->SetBinContent(11,36.82554);
   hmcerror__8->SetBinContent(12,32.04672);
   hmcerror__8->SetBinContent(13,21.93677);
   hmcerror__8->SetBinContent(14,18.37758);
   hmcerror__8->SetBinContent(15,15.2859);
   hmcerror__8->SetBinContent(16,12.90778);
   hmcerror__8->SetBinContent(17,13.1907);
   hmcerror__8->SetBinContent(18,12.0872);
   hmcerror__8->SetBinContent(19,7.905445);
   hmcerror__8->SetBinContent(20,7.716983);
   hmcerror__8->SetBinContent(21,9.393735);
   hmcerror__8->SetBinContent(22,9.473302);
   hmcerror__8->SetBinContent(23,5.9569);
   hmcerror__8->SetBinContent(24,3.797396);
   hmcerror__8->SetBinContent(25,4.508406);
   hmcerror__8->SetBinContent(26,84.89488);
   hmcerror__8->SetBinError(1,21.64904);
   hmcerror__8->SetBinError(2,47.85672);
   hmcerror__8->SetBinError(3,57.52499);
   hmcerror__8->SetBinError(4,51.27875);
   hmcerror__8->SetBinError(5,41.34181);
   hmcerror__8->SetBinError(6,39.66729);
   hmcerror__8->SetBinError(7,36.02241);
   hmcerror__8->SetBinError(8,26.66588);
   hmcerror__8->SetBinError(9,25.83231);
   hmcerror__8->SetBinError(10,17.64628);
   hmcerror__8->SetBinError(11,12.14693);
   hmcerror__8->SetBinError(12,19.32313);
   hmcerror__8->SetBinError(13,14.37355);
   hmcerror__8->SetBinError(14,11.84824);
   hmcerror__8->SetBinError(15,8.664955);
   hmcerror__8->SetBinError(16,9.754117);
   hmcerror__8->SetBinError(17,10.9325);
   hmcerror__8->SetBinError(18,8.505692);
   hmcerror__8->SetBinError(19,5.734626);
   hmcerror__8->SetBinError(20,8.806604);
   hmcerror__8->SetBinError(21,8.661532);
   hmcerror__8->SetBinError(22,11.27115);
   hmcerror__8->SetBinError(23,10.75092);
   hmcerror__8->SetBinError(24,22.27959);
   hmcerror__8->SetBinError(25,5.837854);
   hmcerror__8->SetBinError(26,28.30168);
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
   Double_t _fy3009[25] = {
   70,
   144,
   201,
   190,
   182,
   118,
   102,
   82,
   53,
   55,
   31,
   26,
   25,
   11,
   17,
   18,
   4,
   10,
   11,
   9,
   4,
   7,
   5,
   4,
   5};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   8.4925,
   12,
   14.17745,
   13.78405,
   13.49074,
   10.86278,
   10.0995,
   9.1791,
   7.4105,
   7.546,
   5.7094,
   5.2453,
   5.1474,
   3.4975,
   4.2835,
   4.4008,
   2.29683,
   3.34883,
   3.4975,
   3.19354,
   2.29683,
   2.85954,
   2.48995,
   2.29683,
   2.48995};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   8.2902,
   12,
   14.17745,
   13.78405,
   13.49074,
   10.86278,
   10.0995,
   8.9774,
   7.2068,
   7.3425,
   5.5017,
   5.0358,
   4.9374,
   3.27,
   4.0673,
   4.1858,
   1.98186,
   3.1179,
   3.27,
   2.9582,
   1.98186,
   2.61053,
   2.21064,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(1.532853);
   Graph_Graph3009->SetMaximum(236.5249);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1384.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 50.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 273.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 22.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 292.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  212.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  62.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 303.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 67.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 198.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.3881653,
   0.2730485,
   0.253173,
   0.2619936,
   0.2557965,
   0.2651563,
   0.2940321,
   0.3140858,
   0.355669,
   0.3354529,
   0.3298507,
   0.6029676,
   0.6552263,
   0.6447116,
   0.5668594,
   0.7556771,
   0.8288038,
   0.7036939,
   0.725402,
   1.141198,
   0.9220541,
   1.189781,
   1.804785,
   5.86707,
   1.294882};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   0.3881653,
   0.2730485,
   0.253173,
   0.2619936,
   0.2557965,
   0.2651563,
   0.2940321,
   0.3140858,
   0.355669,
   0.3354529,
   0.3298507,
   0.6029676,
   0.6552263,
   0.6447116,
   0.5668594,
   0.7556771,
   0.8288038,
   0.7036939,
   0.725402,
   1.141198,
   0.9220541,
   1.189781,
   1.804785,
   5.86707,
   1.294882};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1650);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   Double_t _fely3011[25] = {
   0.1961093,
   0.1910568,
   0.1950413,
   0.2241319,
   0.2063926,
   0.2169235,
   0.204511,
   0.2240627,
   0.2030053,
   0.1993111,
   0.2011815,
   0.201652,
   0.2120613,
   0.245207,
   0.2227114,
   0.2360089,
   0.2585248,
   0.2285372,
   0.2683971,
   0.2637263,
   0.2754273,
   0.6814419,
   0.340108,
   0.4171303,
   0.3482633};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   0.1961093,
   0.1910568,
   0.1950413,
   0.2241319,
   0.2063926,
   0.2169235,
   0.204511,
   0.2240627,
   0.2030053,
   0.1993111,
   0.2011815,
   0.201652,
   0.2120613,
   0.245207,
   0.2227114,
   0.2360089,
   0.2585248,
   0.2285372,
   0.2683971,
   0.2637263,
   0.2754273,
   0.6814419,
   0.340108,
   0.4171303,
   0.3482633};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1650);
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
   Double_t _fy3012[25] = {
   1.255093,
   0.8215979,
   0.8846203,
   0.9707489,
   1.126099,
   0.7887718,
   0.8325727,
   0.9658424,
   0.7297241,
   1.045541,
   0.8418071,
   0.8113155,
   1.139639,
   0.5985553,
   1.112136,
   1.394507,
   0.303244,
   0.8273212,
   1.391446,
   1.166259,
   0.4258157,
   0.7389187,
   0.8393628,
   1.053353,
   1.109039};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   0.1522697,
   0.06846649,
   0.0623963,
   0.07042553,
   0.08347201,
   0.07261233,
   0.08243698,
   0.1081166,
   0.1020306,
   0.1434482,
   0.1550391,
   0.1636767,
   0.2346472,
   0.1903134,
   0.2802256,
   0.3409416,
   0.174125,
   0.2770558,
   0.4424166,
   0.4138327,
   0.2445066,
   0.3018525,
   0.4179943,
   0.6048434,
   0.5522905};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   0.1486425,
   0.06846649,
   0.0623963,
   0.07042553,
   0.08347201,
   0.07261233,
   0.08243698,
   0.1057409,
   0.09922596,
   0.1395797,
   0.149399,
   0.1571393,
   0.2250742,
   0.1779342,
   0.2660819,
   0.324285,
   0.1502468,
   0.2579505,
   0.4136389,
   0.3833363,
   0.2109768,
   0.2755671,
   0.3711058,
   0.5218997,
   0.4903374};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.1162071);
   Graph_Graph3012->SetMaximum(1.972682);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
