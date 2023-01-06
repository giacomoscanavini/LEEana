#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Sep 28 22:15:17 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-11.17126,1.25641,1235.306);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hmc__10->SetBinContent(1,12.76695);
   hmc__10->SetBinContent(2,9.114282);
   hmc__10->SetBinContent(3,9.897162);
   hmc__10->SetBinContent(4,12.90044);
   hmc__10->SetBinContent(5,13.21896);
   hmc__10->SetBinContent(6,14.19801);
   hmc__10->SetBinContent(7,16.90032);
   hmc__10->SetBinContent(8,19.58528);
   hmc__10->SetBinContent(9,21.4227);
   hmc__10->SetBinContent(10,27.18063);
   hmc__10->SetBinContent(11,25.05419);
   hmc__10->SetBinContent(12,36.4631);
   hmc__10->SetBinContent(13,46.04166);
   hmc__10->SetBinContent(14,50.67627);
   hmc__10->SetBinContent(15,56.53751);
   hmc__10->SetBinContent(16,69.69142);
   hmc__10->SetBinContent(17,83.02186);
   hmc__10->SetBinContent(18,103.9568);
   hmc__10->SetBinContent(19,114.236);
   hmc__10->SetBinContent(20,145.4204);
   hmc__10->SetBinContent(21,183.6018);
   hmc__10->SetBinContent(22,241.3303);
   hmc__10->SetBinContent(23,357.0696);
   hmc__10->SetBinContent(24,491.6028);
   hmc__10->SetBinContent(25,558.5629);
   hmc__10->SetBinError(1,3.435918);
   hmc__10->SetBinError(2,2.323191);
   hmc__10->SetBinError(3,3.14712);
   hmc__10->SetBinError(4,3.875793);
   hmc__10->SetBinError(5,3.730812);
   hmc__10->SetBinError(6,4.448194);
   hmc__10->SetBinError(7,4.316479);
   hmc__10->SetBinError(8,5.814196);
   hmc__10->SetBinError(9,5.826095);
   hmc__10->SetBinError(10,7.298405);
   hmc__10->SetBinError(11,6.790076);
   hmc__10->SetBinError(12,8.78348);
   hmc__10->SetBinError(13,11.08187);
   hmc__10->SetBinError(14,13.42295);
   hmc__10->SetBinError(15,13.81676);
   hmc__10->SetBinError(16,15.67425);
   hmc__10->SetBinError(17,18.24669);
   hmc__10->SetBinError(18,24.51523);
   hmc__10->SetBinError(19,24.43358);
   hmc__10->SetBinError(20,32.00034);
   hmc__10->SetBinError(21,39.58485);
   hmc__10->SetBinError(22,52.2127);
   hmc__10->SetBinError(23,76.07048);
   hmc__10->SetBinError(24,104.3395);
   hmc__10->SetBinError(25,112.5797);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-11.17126);
   hmc__10->SetMaximum(1172.982);
   hmc__10->SetEntries(2693.828);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-1,1);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(586.491);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(4,0.2211568);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.8048514);
   hbadmatch_stack_1->SetBinContent(14,0.5352025);
   hbadmatch_stack_1->SetBinContent(15,0.9303237);
   hbadmatch_stack_1->SetBinContent(16,0.4982925);
   hbadmatch_stack_1->SetBinContent(17,0.8047106);
   hbadmatch_stack_1->SetBinContent(18,0.9835768);
   hbadmatch_stack_1->SetBinContent(19,0.988238);
   hbadmatch_stack_1->SetBinContent(20,0.9983876);
   hbadmatch_stack_1->SetBinContent(21,1.533229);
   hbadmatch_stack_1->SetBinContent(22,1.657964);
   hbadmatch_stack_1->SetBinContent(23,0.8185084);
   hbadmatch_stack_1->SetBinContent(24,1.798555);
   hbadmatch_stack_1->SetBinContent(25,2.203632);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.2211568);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.5692171);
   hbadmatch_stack_1->SetBinError(14,0.3921167);
   hbadmatch_stack_1->SetBinError(15,0.4814682);
   hbadmatch_stack_1->SetBinError(16,0.4086273);
   hbadmatch_stack_1->SetBinError(17,0.4027341);
   hbadmatch_stack_1->SetBinError(18,0.4398689);
   hbadmatch_stack_1->SetBinError(19,0.508087);
   hbadmatch_stack_1->SetBinError(20,0.510916);
   hbadmatch_stack_1->SetBinError(21,0.6622117);
   hbadmatch_stack_1->SetBinError(22,0.8725087);
   hbadmatch_stack_1->SetBinError(23,0.4101709);
   hbadmatch_stack_1->SetBinError(24,0.6672354);
   hbadmatch_stack_1->SetBinError(25,0.7619006);
   hbadmatch_stack_1->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,1.37261);
   hext_stack_2->SetBinContent(4,0.7309963);
   hext_stack_2->SetBinContent(5,0.6487947);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,0.7309963);
   hext_stack_2->SetBinContent(8,1.137595);
   hext_stack_2->SetBinContent(9,0.973192);
   hext_stack_2->SetBinContent(10,1.868591);
   hext_stack_2->SetBinContent(11,0.7309963);
   hext_stack_2->SetBinContent(12,6.367071);
   hext_stack_2->SetBinContent(13,5.572643);
   hext_stack_2->SetBinContent(14,1.379791);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,2.599588);
   hext_stack_2->SetBinContent(17,3.546829);
   hext_stack_2->SetBinContent(18,1.779209);
   hext_stack_2->SetBinContent(19,6.616447);
   hext_stack_2->SetBinContent(20,4.587862);
   hext_stack_2->SetBinContent(21,7.020274);
   hext_stack_2->SetBinContent(22,5.89704);
   hext_stack_2->SetBinContent(23,2.6702);
   hext_stack_2->SetBinContent(24,4.345666);
   hext_stack_2->SetBinContent(25,1.868591);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,0.8259691);
   hext_stack_2->SetBinError(4,0.5201503);
   hext_stack_2->SetBinError(5,0.4587671);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.5201503);
   hext_stack_2->SetBinError(8,0.6602113);
   hext_stack_2->SetBinError(9,0.5618727);
   hext_stack_2->SetBinError(10,0.840497);
   hext_stack_2->SetBinError(11,0.5201503);
   hext_stack_2->SetBinError(12,1.840357);
   hext_stack_2->SetBinError(13,1.670027);
   hext_stack_2->SetBinError(14,0.6935586);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,0.9884288);
   hext_stack_2->SetBinError(17,1.327092);
   hext_stack_2->SetBinError(18,0.9206235);
   hext_stack_2->SetBinError(19,1.797459);
   hext_stack_2->SetBinError(20,1.593539);
   hext_stack_2->SetBinError(21,1.931969);
   hext_stack_2->SetBinError(22,1.701242);
   hext_stack_2->SetBinError(23,1.050314);
   hext_stack_2->SetBinError(24,1.579311);
   hext_stack_2->SetBinError(25,0.840497);
   hext_stack_2->SetEntries(152);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.3820091);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.3042167);
   hdirt_stack_3->SetBinContent(21,0.3981555);
   hdirt_stack_3->SetBinContent(22,0.8144931);
   hdirt_stack_3->SetBinContent(23,0.8852987);
   hdirt_stack_3->SetBinContent(24,0.4045523);
   hdirt_stack_3->SetBinContent(25,0.7139341);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(6,0.3381872);
   hdirt_stack_3->SetBinError(9,0.3820091);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(17,0.2160277);
   hdirt_stack_3->SetBinError(21,0.28293);
   hdirt_stack_3->SetBinError(22,0.4780647);
   hdirt_stack_3->SetBinError(23,0.4712514);
   hdirt_stack_3->SetBinError(24,0.3001263);
   hdirt_stack_3->SetBinError(25,0.3660028);
   hdirt_stack_3->SetEntries(23);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(2,0.4457082);
   houtFV_stack_4->SetBinContent(3,1.320373);
   houtFV_stack_4->SetBinContent(4,0.1967154);
   houtFV_stack_4->SetBinContent(5,0.6434152);
   houtFV_stack_4->SetBinContent(6,0.5352025);
   houtFV_stack_4->SetBinContent(7,0.7807996);
   houtFV_stack_4->SetBinContent(8,0.3934307);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(10,0.3900497);
   houtFV_stack_4->SetBinContent(11,0.4157053);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(13,0.7800043);
   houtFV_stack_4->SetBinContent(14,1.182036);
   houtFV_stack_4->SetBinContent(15,0.6695492);
   houtFV_stack_4->SetBinContent(16,1.835578);
   houtFV_stack_4->SetBinContent(17,0.536893);
   houtFV_stack_4->SetBinContent(18,1.136679);
   houtFV_stack_4->SetBinContent(19,1.143398);
   houtFV_stack_4->SetBinContent(20,1.717094);
   houtFV_stack_4->SetBinContent(21,1.901032);
   houtFV_stack_4->SetBinContent(22,3.032628);
   houtFV_stack_4->SetBinContent(23,5.149412);
   houtFV_stack_4->SetBinContent(24,4.629736);
   houtFV_stack_4->SetBinContent(25,3.420846);
   houtFV_stack_4->SetBinError(2,0.3173238);
   houtFV_stack_4->SetBinError(3,0.5548703);
   houtFV_stack_4->SetBinError(4,0.1967154);
   houtFV_stack_4->SetBinError(5,0.3740135);
   houtFV_stack_4->SetBinError(6,0.3921167);
   houtFV_stack_4->SetBinError(7,0.4625021);
   houtFV_stack_4->SetBinError(8,0.2781975);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(10,0.2758068);
   houtFV_stack_4->SetBinError(11,0.3484612);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(13,0.462259);
   houtFV_stack_4->SetBinError(14,0.4825966);
   houtFV_stack_4->SetBinError(15,0.4147474);
   houtFV_stack_4->SetBinError(16,0.6843887);
   houtFV_stack_4->SetBinError(17,0.3929602);
   houtFV_stack_4->SetBinError(18,0.4962108);
   houtFV_stack_4->SetBinError(19,0.5842176);
   houtFV_stack_4->SetBinError(20,0.6821058);
   houtFV_stack_4->SetBinError(21,0.6732091);
   houtFV_stack_4->SetBinError(22,0.8684202);
   houtFV_stack_4->SetBinError(23,1.901756);
   houtFV_stack_4->SetBinError(24,1.14835);
   houtFV_stack_4->SetBinError(25,0.8762995);
   houtFV_stack_4->SetEntries(138);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1062763);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.07571573);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03076306);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1281492);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1114219);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1691327);
   hNCpi0inFVqe_stack_6->SetEntries(5);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3389997);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2250256);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.1663838);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.01677029);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.1357626);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.5127434);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.1574252);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.4769852);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.3093801);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.2141919);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1521261);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.332726);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4880889);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.9353855);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.481451);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.6505173);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.7605463);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.8932434);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9279076);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.949088);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.91133);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.406573);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.369374);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.824827);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.97143);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1557807);
   hNCpi0inFVres_stack_7->SetBinError(2,0.13477);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1267891);
   hNCpi0inFVres_stack_7->SetBinError(4,0.01677029);
   hNCpi0inFVres_stack_7->SetBinError(5,0.06673321);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2494662);
   hNCpi0inFVres_stack_7->SetBinError(7,0.07503371);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2429087);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1800776);
   hNCpi0inFVres_stack_7->SetBinError(10,0.08537481);
   hNCpi0inFVres_stack_7->SetBinError(11,0.08057212);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1569004);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2081035);
   hNCpi0inFVres_stack_7->SetBinError(14,0.36265);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1972922);
   hNCpi0inFVres_stack_7->SetBinError(16,0.200985);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2334267);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2617969);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2101005);
   hNCpi0inFVres_stack_7->SetBinError(20,0.429946);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6367917);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5440322);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7597954);
   hNCpi0inFVres_stack_7->SetBinError(24,1.10406);
   hNCpi0inFVres_stack_7->SetBinError(25,1.153664);
   hNCpi0inFVres_stack_7->SetEntries(874);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.181052);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4086592);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1461976);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.112236);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6943234);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.2107601);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.05335721);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.06609386);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1998792);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2796547);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4111024);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3701897);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.28822);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2736307);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.012756);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8788987);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7389954);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9255724);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8876609);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8124135);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.534291);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.445148);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.908671);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.988442);
   hNCpi0inFVdis_stack_8->SetBinContent(25,11.47388);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.08709792);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3334449);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.0850076);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.09845476);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3232096);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1015441);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.04006112);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.0530936);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.10818);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1241272);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2831344);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1626478);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1344868);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1512918);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4300274);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2757572);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.322411);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4383046);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2937285);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2875621);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3870942);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8043683);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9640502);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.055679);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.422424);
   hNCpi0inFVdis_stack_8->SetEntries(672);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,5.172579);
   hCCpi0inFV_stack_10->SetBinContent(2,3.909558);
   hCCpi0inFV_stack_10->SetBinContent(3,6.538826);
   hCCpi0inFV_stack_10->SetBinContent(4,7.094042);
   hCCpi0inFV_stack_10->SetBinContent(5,6.823138);
   hCCpi0inFV_stack_10->SetBinContent(6,9.221853);
   hCCpi0inFV_stack_10->SetBinContent(7,8.35297);
   hCCpi0inFV_stack_10->SetBinContent(8,12.39101);
   hCCpi0inFV_stack_10->SetBinContent(9,12.31915);
   hCCpi0inFV_stack_10->SetBinContent(10,16.03788);
   hCCpi0inFV_stack_10->SetBinContent(11,16.60222);
   hCCpi0inFV_stack_10->SetBinContent(12,23.06594);
   hCCpi0inFV_stack_10->SetBinContent(13,28.00089);
   hCCpi0inFV_stack_10->SetBinContent(14,33.44532);
   hCCpi0inFV_stack_10->SetBinContent(15,39.62144);
   hCCpi0inFV_stack_10->SetBinContent(16,48.21472);
   hCCpi0inFV_stack_10->SetBinContent(17,57.30043);
   hCCpi0inFV_stack_10->SetBinContent(18,73.28081);
   hCCpi0inFV_stack_10->SetBinContent(19,77.44833);
   hCCpi0inFV_stack_10->SetBinContent(20,100.6002);
   hCCpi0inFV_stack_10->SetBinContent(21,130.5745);
   hCCpi0inFV_stack_10->SetBinContent(22,169.6767);
   hCCpi0inFV_stack_10->SetBinContent(23,261.2356);
   hCCpi0inFV_stack_10->SetBinContent(24,367.84);
   hCCpi0inFV_stack_10->SetBinContent(25,423.6079);
   hCCpi0inFV_stack_10->SetBinError(1,1.169938);
   hCCpi0inFV_stack_10->SetBinError(2,0.9811382);
   hCCpi0inFV_stack_10->SetBinError(3,1.313899);
   hCCpi0inFV_stack_10->SetBinError(4,1.341042);
   hCCpi0inFV_stack_10->SetBinError(5,1.416287);
   hCCpi0inFV_stack_10->SetBinError(6,1.594933);
   hCCpi0inFV_stack_10->SetBinError(7,1.415205);
   hCCpi0inFV_stack_10->SetBinError(8,1.781193);
   hCCpi0inFV_stack_10->SetBinError(9,1.77035);
   hCCpi0inFV_stack_10->SetBinError(10,2.024454);
   hCCpi0inFV_stack_10->SetBinError(11,2.023932);
   hCCpi0inFV_stack_10->SetBinError(12,2.416932);
   hCCpi0inFV_stack_10->SetBinError(13,2.709254);
   hCCpi0inFV_stack_10->SetBinError(14,2.850431);
   hCCpi0inFV_stack_10->SetBinError(15,3.171368);
   hCCpi0inFV_stack_10->SetBinError(16,3.463369);
   hCCpi0inFV_stack_10->SetBinError(17,3.815308);
   hCCpi0inFV_stack_10->SetBinError(18,4.322194);
   hCCpi0inFV_stack_10->SetBinError(19,4.455572);
   hCCpi0inFV_stack_10->SetBinError(20,5.041599);
   hCCpi0inFV_stack_10->SetBinError(21,5.739867);
   hCCpi0inFV_stack_10->SetBinError(22,6.533201);
   hCCpi0inFV_stack_10->SetBinError(23,8.106341);
   hCCpi0inFV_stack_10->SetBinError(24,9.583066);
   hCCpi0inFV_stack_10->SetBinError(25,10.31819);
   hCCpi0inFV_stack_10->SetEntries(8276);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,0.1967154);
   hNCinFV_stack_11->SetBinContent(7,0.3934307);
   hNCinFV_stack_11->SetBinContent(8,0.3917402);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(10,0.7336084);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,0.1950248);
   hNCinFV_stack_11->SetBinContent(14,0.785171);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.7336084);
   hNCinFV_stack_11->SetBinContent(18,0.3934307);
   hNCinFV_stack_11->SetBinContent(19,0.3934307);
   hNCinFV_stack_11->SetBinContent(20,1.268811);
   hNCinFV_stack_11->SetBinContent(21,1.123658);
   hNCinFV_stack_11->SetBinContent(22,2.105544);
   hNCinFV_stack_11->SetBinContent(23,1.713804);
   hNCinFV_stack_11->SetBinContent(24,4.161217);
   hNCinFV_stack_11->SetBinContent(25,3.606336);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.1967154);
   hNCinFV_stack_11->SetBinError(7,0.2781975);
   hNCinFV_stack_11->SetBinError(8,0.2770047);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(10,0.4394482);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.1950249);
   hNCinFV_stack_11->SetBinError(14,0.3925882);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.4394482);
   hNCinFV_stack_11->SetBinError(18,0.2781975);
   hNCinFV_stack_11->SetBinError(19,0.2781975);
   hNCinFV_stack_11->SetBinError(20,0.5889569);
   hNCinFV_stack_11->SetBinError(21,0.5188295);
   hNCinFV_stack_11->SetBinError(22,0.6797106);
   hNCinFV_stack_11->SetBinError(23,0.6207051);
   hNCinFV_stack_11->SetBinError(24,0.9816641);
   hNCinFV_stack_11->SetBinError(25,1.000295);
   hNCinFV_stack_11->SetEntries(89);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,5.627182);
   hnumuCCinFV_stack_12->SetBinContent(2,2.752721);
   hnumuCCinFV_stack_12->SetBinContent(3,1.188488);
   hnumuCCinFV_stack_12->SetBinContent(4,4.112909);
   hnumuCCinFV_stack_12->SetBinContent(5,4.273527);
   hnumuCCinFV_stack_12->SetBinContent(6,2.56607);
   hnumuCCinFV_stack_12->SetBinContent(7,6.234628);
   hnumuCCinFV_stack_12->SetBinContent(8,4.531713);
   hnumuCCinFV_stack_12->SetBinContent(9,6.31215);
   hnumuCCinFV_stack_12->SetBinContent(10,7.224422);
   hnumuCCinFV_stack_12->SetBinContent(11,6.263784);
   hnumuCCinFV_stack_12->SetBinContent(12,5.398544);
   hnumuCCinFV_stack_12->SetBinContent(13,9.911942);
   hnumuCCinFV_stack_12->SetBinContent(14,11.60991);
   hnumuCCinFV_stack_12->SetBinContent(15,11.1743);
   hnumuCCinFV_stack_12->SetBinContent(16,14.26699);
   hnumuCCinFV_stack_12->SetBinContent(17,18.29562);
   hnumuCCinFV_stack_12->SetBinContent(18,24.17086);
   hnumuCCinFV_stack_12->SetBinContent(19,24.84729);
   hnumuCCinFV_stack_12->SetBinContent(20,33.4866);
   hnumuCCinFV_stack_12->SetBinContent(21,35.0283);
   hnumuCCinFV_stack_12->SetBinContent(22,50.90081);
   hnumuCCinFV_stack_12->SetBinContent(23,74.69893);
   hnumuCCinFV_stack_12->SetBinContent(24,89.51107);
   hnumuCCinFV_stack_12->SetBinContent(25,99.63086);
   hnumuCCinFV_stack_12->SetBinError(1,1.827857);
   hnumuCCinFV_stack_12->SetBinError(2,0.8252898);
   hnumuCCinFV_stack_12->SetBinError(3,0.5628414);
   hnumuCCinFV_stack_12->SetBinError(4,1.113154);
   hnumuCCinFV_stack_12->SetBinError(5,1.046033);
   hnumuCCinFV_stack_12->SetBinError(6,0.7536901);
   hnumuCCinFV_stack_12->SetBinError(7,1.261199);
   hnumuCCinFV_stack_12->SetBinError(8,1.096474);
   hnumuCCinFV_stack_12->SetBinError(9,1.322291);
   hnumuCCinFV_stack_12->SetBinError(10,1.429937);
   hnumuCCinFV_stack_12->SetBinError(11,1.274059);
   hnumuCCinFV_stack_12->SetBinError(12,1.153689);
   hnumuCCinFV_stack_12->SetBinError(13,1.615461);
   hnumuCCinFV_stack_12->SetBinError(14,1.875574);
   hnumuCCinFV_stack_12->SetBinError(15,1.749817);
   hnumuCCinFV_stack_12->SetBinError(16,1.985163);
   hnumuCCinFV_stack_12->SetBinError(17,2.502007);
   hnumuCCinFV_stack_12->SetBinError(18,2.710323);
   hnumuCCinFV_stack_12->SetBinError(19,2.608342);
   hnumuCCinFV_stack_12->SetBinError(20,2.969039);
   hnumuCCinFV_stack_12->SetBinError(21,3.135007);
   hnumuCCinFV_stack_12->SetBinError(22,3.719297);
   hnumuCCinFV_stack_12->SetBinError(23,5.092171);
   hnumuCCinFV_stack_12->SetBinError(24,5.201294);
   hnumuCCinFV_stack_12->SetBinError(25,5.948396);
   hnumuCCinFV_stack_12->SetEntries(2276);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(21,1.455698);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(23,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(24,0.9269427);
   hnueCCinFV_stack_13->SetBinContent(25,1.855576);
   hnueCCinFV_stack_13->SetBinError(3,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.2770047);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.5197486);
   hnueCCinFV_stack_13->SetBinError(21,0.6653705);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetBinError(23,0.2781975);
   hnueCCinFV_stack_13->SetBinError(24,0.4800908);
   hnueCCinFV_stack_13->SetBinError(25,0.6794384);
   hnueCCinFV_stack_13->SetEntries(35);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__11->SetBinContent(1,12.76695);
   hmcerror__11->SetBinContent(2,9.114282);
   hmcerror__11->SetBinContent(3,9.897162);
   hmcerror__11->SetBinContent(4,12.90044);
   hmcerror__11->SetBinContent(5,13.21896);
   hmcerror__11->SetBinContent(6,14.19801);
   hmcerror__11->SetBinContent(7,16.90032);
   hmcerror__11->SetBinContent(8,19.58528);
   hmcerror__11->SetBinContent(9,21.4227);
   hmcerror__11->SetBinContent(10,27.18063);
   hmcerror__11->SetBinContent(11,25.05419);
   hmcerror__11->SetBinContent(12,36.4631);
   hmcerror__11->SetBinContent(13,46.04166);
   hmcerror__11->SetBinContent(14,50.67627);
   hmcerror__11->SetBinContent(15,56.53751);
   hmcerror__11->SetBinContent(16,69.69142);
   hmcerror__11->SetBinContent(17,83.02186);
   hmcerror__11->SetBinContent(18,103.9568);
   hmcerror__11->SetBinContent(19,114.236);
   hmcerror__11->SetBinContent(20,145.4204);
   hmcerror__11->SetBinContent(21,183.6018);
   hmcerror__11->SetBinContent(22,241.3303);
   hmcerror__11->SetBinContent(23,357.0696);
   hmcerror__11->SetBinContent(24,491.6028);
   hmcerror__11->SetBinContent(25,558.5629);
   hmcerror__11->SetBinError(1,3.435918);
   hmcerror__11->SetBinError(2,2.323191);
   hmcerror__11->SetBinError(3,3.14712);
   hmcerror__11->SetBinError(4,3.875793);
   hmcerror__11->SetBinError(5,3.730812);
   hmcerror__11->SetBinError(6,4.448194);
   hmcerror__11->SetBinError(7,4.316479);
   hmcerror__11->SetBinError(8,5.814196);
   hmcerror__11->SetBinError(9,5.826095);
   hmcerror__11->SetBinError(10,7.298405);
   hmcerror__11->SetBinError(11,6.790076);
   hmcerror__11->SetBinError(12,8.78348);
   hmcerror__11->SetBinError(13,11.08187);
   hmcerror__11->SetBinError(14,13.42295);
   hmcerror__11->SetBinError(15,13.81676);
   hmcerror__11->SetBinError(16,15.67425);
   hmcerror__11->SetBinError(17,18.24669);
   hmcerror__11->SetBinError(18,24.51523);
   hmcerror__11->SetBinError(19,24.43358);
   hmcerror__11->SetBinError(20,32.00034);
   hmcerror__11->SetBinError(21,39.58485);
   hmcerror__11->SetBinError(22,52.2127);
   hmcerror__11->SetBinError(23,76.07048);
   hmcerror__11->SetBinError(24,104.3395);
   hmcerror__11->SetBinError(25,112.5797);
   hmcerror__11->SetBinError(26,0.3895343);
   hmcerror__11->SetEntries(2693.828);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3013[25] = {
   9,
   11,
   9,
   14,
   13,
   13,
   18,
   26,
   22,
   35,
   44,
   32,
   40,
   52,
   54,
   77,
   76,
   96,
   140,
   164,
   202,
   216,
   340,
   500,
   549};
   Double_t _felx3013[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3013[25] = {
   3.19354,
   3.4975,
   3.19354,
   3.9102,
   3.77763,
   3.77763,
   4.4008,
   5.2453,
   4.8417,
   6.0548,
   6.7671,
   5.7977,
   6.4604,
   7.3419,
   7.4785,
   8.8995,
   8.8425,
   9.9196,
   11.83216,
   12.80625,
   14.21267,
   14.69694,
   18.43909,
   22.36068,
   23.43075};
   Double_t _fehx3013[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3013[25] = {
   2.9582,
   3.27,
   2.9582,
   3.6898,
   3.5552,
   3.5552,
   4.1858,
   5.0358,
   4.6299,
   5.8483,
   6.5623,
   5.5904,
   6.2549,
   7.1381,
   7.275,
   8.6976,
   8.6406,
   9.718,
   11.83216,
   12.80625,
   14.21267,
   14.69694,
   18.43909,
   22.36068,
   23.43075};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(5.225814);
   Graph_Graph3013->SetMaximum(629.0932);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=23.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2752.0","lp");
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

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 66.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.7","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 32.8","F");

   ci = 1476;
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

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.5","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  39.6","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.3","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1938.4","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 20.2","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 554.0","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.3","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_muon_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3014[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3014[25] = {
   0.2691261,
   0.2548957,
   0.317982,
   0.3004389,
   0.2822318,
   0.3132969,
   0.2554081,
   0.2968655,
   0.2719589,
   0.2685149,
   0.2710156,
   0.2408868,
   0.2406922,
   0.2648764,
   0.2443821,
   0.2249094,
   0.2197817,
   0.2358213,
   0.2138868,
   0.220054,
   0.2156016,
   0.2163537,
   0.2130411,
   0.2122435,
   0.2015523};
   Double_t _fehx3014[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3014[25] = {
   0.2691261,
   0.2548957,
   0.317982,
   0.3004389,
   0.2822318,
   0.3132969,
   0.2554081,
   0.2968655,
   0.2719589,
   0.2685149,
   0.2710156,
   0.2408868,
   0.2406922,
   0.2648764,
   0.2443821,
   0.2249094,
   0.2197817,
   0.2358213,
   0.2138868,
   0.220054,
   0.2156016,
   0.2163537,
   0.2130411,
   0.2122435,
   0.2015523};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Muon cos #theta");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3015[25] = {
   0.2691261,
   0.2548957,
   0.317982,
   0.3004389,
   0.2822318,
   0.3132969,
   0.2554081,
   0.2968655,
   0.2719589,
   0.2685149,
   0.2710156,
   0.2408868,
   0.2406922,
   0.2648764,
   0.2443821,
   0.2249094,
   0.2197817,
   0.2358213,
   0.2138868,
   0.220054,
   0.2156016,
   0.2163537,
   0.2130411,
   0.2122435,
   0.2015523};
   Double_t _fehx3015[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3015[25] = {
   0.2691261,
   0.2548957,
   0.317982,
   0.3004389,
   0.2822318,
   0.3132969,
   0.2554081,
   0.2968655,
   0.2719589,
   0.2685149,
   0.2710156,
   0.2408868,
   0.2406922,
   0.2648764,
   0.2443821,
   0.2249094,
   0.2197817,
   0.2358213,
   0.2138868,
   0.220054,
   0.2156016,
   0.2163537,
   0.2130411,
   0.2122435,
   0.2015523};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3016[25] = {
   0.7049454,
   1.206897,
   0.9093515,
   1.085235,
   0.9834358,
   0.9156211,
   1.065068,
   1.327527,
   1.026948,
   1.287682,
   1.756193,
   0.8775994,
   0.8687783,
   1.026121,
   0.9551182,
   1.104871,
   0.9154216,
   0.9234604,
   1.225533,
   1.127765,
   1.100207,
   0.8950388,
   0.9521954,
   1.017081,
   0.9828794};
   Double_t _felx3016[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3016[25] = {
   0.2501412,
   0.3837384,
   0.3226723,
   0.303106,
   0.2857736,
   0.2660675,
   0.2603974,
   0.2678184,
   0.2260079,
   0.2227616,
   0.2700986,
   0.1590018,
   0.1403164,
   0.1448785,
   0.132275,
   0.1276986,
   0.1065081,
   0.0954204,
   0.1035764,
   0.08806362,
   0.07741028,
   0.06089968,
   0.05164004,
   0.04548526,
   0.04194827};
   Double_t _fehx3016[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3016[25] = {
   0.2317077,
   0.3587776,
   0.2988938,
   0.2860213,
   0.268947,
   0.2504012,
   0.2476758,
   0.2571216,
   0.2161212,
   0.2151643,
   0.2619243,
   0.1533166,
   0.135853,
   0.1408569,
   0.1286756,
   0.1248016,
   0.1040762,
   0.09348113,
   0.1035764,
   0.08806362,
   0.07741028,
   0.06089968,
   0.05164004,
   0.04548526,
   0.04194827};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.2984728);
   Graph_Graph3016->SetMaximum(2.174449);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_muon_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
