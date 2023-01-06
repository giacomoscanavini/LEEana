#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Oct 24 15:37:54 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-276.9231,-15.08189,2030.769,1667.739);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__1->SetBinContent(0,0.7760984);
   hmc__1->SetBinContent(1,5.165845);
   hmc__1->SetBinContent(2,42.24253);
   hmc__1->SetBinContent(3,152.2219);
   hmc__1->SetBinContent(4,337.1723);
   hmc__1->SetBinContent(5,553.6439);
   hmc__1->SetBinContent(6,719.1981);
   hmc__1->SetBinContent(7,754.0943);
   hmc__1->SetBinContent(8,740.3226);
   hmc__1->SetBinContent(9,697.138);
   hmc__1->SetBinContent(10,608.818);
   hmc__1->SetBinContent(11,502.0677);
   hmc__1->SetBinContent(12,427.0221);
   hmc__1->SetBinContent(13,380.3299);
   hmc__1->SetBinContent(14,318.1801);
   hmc__1->SetBinContent(15,246.854);
   hmc__1->SetBinContent(16,208.0301);
   hmc__1->SetBinContent(17,174.2711);
   hmc__1->SetBinContent(18,129.8988);
   hmc__1->SetBinContent(19,98.07123);
   hmc__1->SetBinContent(20,82.01415);
   hmc__1->SetBinContent(21,59.78898);
   hmc__1->SetBinContent(22,60.70541);
   hmc__1->SetBinContent(23,44.60537);
   hmc__1->SetBinContent(24,34.76675);
   hmc__1->SetBinContent(25,25.81745);
   hmc__1->SetBinContent(26,159.4445);
   hmc__1->SetBinError(0,0.4405089);
   hmc__1->SetBinError(1,3.050653);
   hmc__1->SetBinError(2,8.502886);
   hmc__1->SetBinError(3,31.01748);
   hmc__1->SetBinError(4,78.4973);
   hmc__1->SetBinError(5,135.8142);
   hmc__1->SetBinError(6,172.9874);
   hmc__1->SetBinError(7,191.07);
   hmc__1->SetBinError(8,187.5194);
   hmc__1->SetBinError(9,166.9269);
   hmc__1->SetBinError(10,144.4152);
   hmc__1->SetBinError(11,123.2759);
   hmc__1->SetBinError(12,99.31595);
   hmc__1->SetBinError(13,90.23746);
   hmc__1->SetBinError(14,76.22001);
   hmc__1->SetBinError(15,58.40515);
   hmc__1->SetBinError(16,48.56745);
   hmc__1->SetBinError(17,40.54606);
   hmc__1->SetBinError(18,30.19144);
   hmc__1->SetBinError(19,23.70148);
   hmc__1->SetBinError(20,19.6697);
   hmc__1->SetBinError(21,13.86507);
   hmc__1->SetBinError(22,14.73754);
   hmc__1->SetBinError(23,10.09129);
   hmc__1->SetBinError(24,7.495895);
   hmc__1->SetBinError(25,6.591891);
   hmc__1->SetBinError(26,24.99027);
   hmc__1->SetMinimum(-15.08189);
   hmc__1->SetMaximum(1583.598);
   hmc__1->SetEntries(7494.873);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1800);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(791.7991);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,1.165498);
   hbadmatch_stack_1->SetBinContent(4,0.9513537);
   hbadmatch_stack_1->SetBinContent(5,1.209297);
   hbadmatch_stack_1->SetBinContent(6,1.915469);
   hbadmatch_stack_1->SetBinContent(7,3.067515);
   hbadmatch_stack_1->SetBinContent(8,1.268811);
   hbadmatch_stack_1->SetBinContent(9,3.872524);
   hbadmatch_stack_1->SetBinContent(10,1.960589);
   hbadmatch_stack_1->SetBinContent(11,1.607298);
   hbadmatch_stack_1->SetBinContent(12,2.449741);
   hbadmatch_stack_1->SetBinContent(13,2.098475);
   hbadmatch_stack_1->SetBinContent(14,2.109287);
   hbadmatch_stack_1->SetBinContent(15,1.299488);
   hbadmatch_stack_1->SetBinContent(16,2.269997);
   hbadmatch_stack_1->SetBinContent(17,2.205173);
   hbadmatch_stack_1->SetBinContent(18,1.391457);
   hbadmatch_stack_1->SetBinContent(19,1.568773);
   hbadmatch_stack_1->SetBinContent(20,0.536893);
   hbadmatch_stack_1->SetBinContent(21,1.562316);
   hbadmatch_stack_1->SetBinContent(23,0.3917402);
   hbadmatch_stack_1->SetBinContent(26,0.7336084);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.6041204);
   hbadmatch_stack_1->SetBinError(4,0.5318234);
   hbadmatch_stack_1->SetBinError(5,0.5773565);
   hbadmatch_stack_1->SetBinError(6,0.7548922);
   hbadmatch_stack_1->SetBinError(7,0.8409938);
   hbadmatch_stack_1->SetBinError(8,0.5889569);
   hbadmatch_stack_1->SetBinError(9,0.9652825);
   hbadmatch_stack_1->SetBinError(10,0.6275958);
   hbadmatch_stack_1->SetBinError(11,0.6796534);
   hbadmatch_stack_1->SetBinError(12,0.8001385);
   hbadmatch_stack_1->SetBinError(13,0.7607995);
   hbadmatch_stack_1->SetBinError(14,0.7359899);
   hbadmatch_stack_1->SetBinError(15,0.5998141);
   hbadmatch_stack_1->SetBinError(16,0.9868904);
   hbadmatch_stack_1->SetBinError(17,0.8133602);
   hbadmatch_stack_1->SetBinError(18,0.6017995);
   hbadmatch_stack_1->SetBinError(19,0.7448905);
   hbadmatch_stack_1->SetBinError(20,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.6053241);
   hbadmatch_stack_1->SetBinError(23,0.2770047);
   hbadmatch_stack_1->SetBinError(26,0.4394482);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.939204);
   hext_stack_2->SetBinContent(3,7.803113);
   hext_stack_2->SetBinContent(4,4.296596);
   hext_stack_2->SetBinContent(5,6.049854);
   hext_stack_2->SetBinContent(6,11.69752);
   hext_stack_2->SetBinContent(7,11.75654);
   hext_stack_2->SetBinContent(8,8.193772);
   hext_stack_2->SetBinContent(9,12.59128);
   hext_stack_2->SetBinContent(10,9.0864);
   hext_stack_2->SetBinContent(11,10.19364);
   hext_stack_2->SetBinContent(12,4.766625);
   hext_stack_2->SetBinContent(13,4.303776);
   hext_stack_2->SetBinContent(14,10.31332);
   hext_stack_2->SetBinContent(15,2.752401);
   hext_stack_2->SetBinContent(16,8.456316);
   hext_stack_2->SetBinContent(17,3.965017);
   hext_stack_2->SetBinContent(18,4.04281);
   hext_stack_2->SetBinContent(19,1.614806);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,4.270645);
   hext_stack_2->SetBinContent(23,1.544194);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.9660115);
   hext_stack_2->SetBinContent(26,11.74936);
   hext_stack_2->SetBinError(2,0.912471);
   hext_stack_2->SetBinError(3,2.096785);
   hext_stack_2->SetBinError(4,1.328326);
   hext_stack_2->SetBinError(5,1.75513);
   hext_stack_2->SetBinError(6,2.476037);
   hext_stack_2->SetBinError(7,2.514559);
   hext_stack_2->SetBinError(8,1.778307);
   hext_stack_2->SetBinError(9,2.459684);
   hext_stack_2->SetBinError(10,1.972165);
   hext_stack_2->SetBinError(11,2.158396);
   hext_stack_2->SetBinError(12,1.502379);
   hext_stack_2->SetBinError(13,1.250299);
   hext_stack_2->SetBinError(14,2.348321);
   hext_stack_2->SetBinError(15,1.07854);
   hext_stack_2->SetBinError(16,2.177636);
   hext_stack_2->SetBinError(17,1.363971);
   hext_stack_2->SetBinError(18,1.336183);
   hext_stack_2->SetBinError(19,0.8528597);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,1.4943);
   hext_stack_2->SetBinError(23,0.7753719);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.7189592);
   hext_stack_2->SetBinError(26,2.554253);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.2544535);
   hdirt_stack_3->SetBinContent(5,0.7551225);
   hdirt_stack_3->SetBinContent(6,0.9140499);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(9,0.7159333);
   hdirt_stack_3->SetBinContent(10,0.5423309);
   hdirt_stack_3->SetBinContent(12,0.4307295);
   hdirt_stack_3->SetBinContent(13,0.165896);
   hdirt_stack_3->SetBinContent(14,0.3381884);
   hdirt_stack_3->SetBinContent(15,0.2665913);
   hdirt_stack_3->SetBinContent(16,0.6394193);
   hdirt_stack_3->SetBinContent(23,0.2441834);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(4,0.2544535);
   hdirt_stack_3->SetBinError(5,0.3834428);
   hdirt_stack_3->SetBinError(6,0.4788161);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(9,0.4324742);
   hdirt_stack_3->SetBinError(10,0.3301265);
   hdirt_stack_3->SetBinError(12,0.2490471);
   hdirt_stack_3->SetBinError(13,0.165896);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.2665913);
   hdirt_stack_3->SetBinError(16,0.4606419);
   hdirt_stack_3->SetBinError(23,0.2441834);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,1.401308);
   houtFV_stack_4->SetBinContent(3,0.7336084);
   houtFV_stack_4->SetBinContent(4,4.430464);
   houtFV_stack_4->SetBinContent(5,8.162052);
   houtFV_stack_4->SetBinContent(6,5.002643);
   houtFV_stack_4->SetBinContent(7,4.835998);
   houtFV_stack_4->SetBinContent(8,7.523849);
   houtFV_stack_4->SetBinContent(9,6.480634);
   houtFV_stack_4->SetBinContent(10,5.354955);
   houtFV_stack_4->SetBinContent(11,4.114965);
   houtFV_stack_4->SetBinContent(12,3.402322);
   houtFV_stack_4->SetBinContent(13,1.72154);
   houtFV_stack_4->SetBinContent(14,1.855576);
   houtFV_stack_4->SetBinContent(15,3.491647);
   houtFV_stack_4->SetBinContent(16,1.37722);
   houtFV_stack_4->SetBinContent(17,0.7532358);
   houtFV_stack_4->SetBinContent(18,1.146797);
   houtFV_stack_4->SetBinContent(19,0.5867651);
   houtFV_stack_4->SetBinContent(20,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.4519673);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(2,0.6577657);
   houtFV_stack_4->SetBinError(3,0.4394482);
   houtFV_stack_4->SetBinError(4,1.044071);
   houtFV_stack_4->SetBinError(5,2.130089);
   houtFV_stack_4->SetBinError(6,1.127396);
   houtFV_stack_4->SetBinError(7,1.027069);
   houtFV_stack_4->SetBinError(8,1.377351);
   houtFV_stack_4->SetBinError(9,1.275398);
   houtFV_stack_4->SetBinError(10,1.252004);
   houtFV_stack_4->SetBinError(11,1.067514);
   houtFV_stack_4->SetBinError(12,1.178148);
   houtFV_stack_4->SetBinError(13,0.6214582);
   houtFV_stack_4->SetBinError(14,0.6794384);
   houtFV_stack_4->SetBinError(15,1.19193);
   houtFV_stack_4->SetBinError(16,0.5776464);
   houtFV_stack_4->SetBinError(17,0.3967958);
   houtFV_stack_4->SetBinError(18,0.5337594);
   houtFV_stack_4->SetBinError(19,0.3387718);
   houtFV_stack_4->SetBinError(20,0.1967154);
   houtFV_stack_4->SetBinError(22,0.3222584);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(26,0.438694);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1062763);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.07571573);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1281492);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1970327);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1114219);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1771563);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1714184);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01754354);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.2742507);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.166209);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.192518);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.230083);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.92426);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.312567);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.729493);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.027265);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.704303);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.143432);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.488208);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.493326);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.531984);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.03974);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.810581);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.373273);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.195324);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.815557);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.841144);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5590205);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.6554337);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.3888507);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.3443657);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.3651882);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.09088882);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3367316);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5796289);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6867475);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7378101);
   hNCpi0inFVres_stack_7->SetBinError(7,0.791507);
   hNCpi0inFVres_stack_7->SetBinError(8,1.071497);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8924834);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9424998);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8703351);
   hNCpi0inFVres_stack_7->SetBinError(12,1.211262);
   hNCpi0inFVres_stack_7->SetBinError(13,1.226997);
   hNCpi0inFVres_stack_7->SetBinError(14,1.173417);
   hNCpi0inFVres_stack_7->SetBinError(15,0.585694);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7345436);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8318511);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9452775);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5980013);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8163657);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2119033);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2393099);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2222621);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1585789);
   hNCpi0inFVres_stack_7->SetBinError(25,0.05284983);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1294516);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.07619371);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.002153);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.775348);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.127864);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.690401);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.137053);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.952489);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.733115);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.234952);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.945954);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.637866);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.661689);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.072739);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.307962);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.954447);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.075057);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.712759);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.662859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.008828);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.404402);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.296593);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.095192);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.61211);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7884805);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.846677);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.05009538);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4195491);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8717846);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6280298);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8240167);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6806174);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7009554);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6887474);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8399246);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.134536);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8076106);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.10304);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7875004);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9164753);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9721176);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8638964);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9179417);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6520461);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5326069);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3986029);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3457915);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.888166);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2949207);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3323481);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.508497);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(2,13.90316);
   hCCpi0inFV_stack_10->SetBinContent(3,85.64252);
   hCCpi0inFV_stack_10->SetBinContent(4,239.8995);
   hCCpi0inFV_stack_10->SetBinContent(5,421.6612);
   hCCpi0inFV_stack_10->SetBinContent(6,559.2895);
   hCCpi0inFV_stack_10->SetBinContent(7,578.2853);
   hCCpi0inFV_stack_10->SetBinContent(8,559.2892);
   hCCpi0inFV_stack_10->SetBinContent(9,503.9396);
   hCCpi0inFV_stack_10->SetBinContent(10,429.1193);
   hCCpi0inFV_stack_10->SetBinContent(11,344.7217);
   hCCpi0inFV_stack_10->SetBinContent(12,291.6932);
   hCCpi0inFV_stack_10->SetBinContent(13,249.2786);
   hCCpi0inFV_stack_10->SetBinContent(14,196.8253);
   hCCpi0inFV_stack_10->SetBinContent(15,158.6444);
   hCCpi0inFV_stack_10->SetBinContent(16,120.5729);
   hCCpi0inFV_stack_10->SetBinContent(17,95.10056);
   hCCpi0inFV_stack_10->SetBinContent(18,71.97643);
   hCCpi0inFV_stack_10->SetBinContent(19,52.30463);
   hCCpi0inFV_stack_10->SetBinContent(20,45.6655);
   hCCpi0inFV_stack_10->SetBinContent(21,30.69477);
   hCCpi0inFV_stack_10->SetBinContent(22,31.05148);
   hCCpi0inFV_stack_10->SetBinContent(23,20.77849);
   hCCpi0inFV_stack_10->SetBinContent(24,17.44055);
   hCCpi0inFV_stack_10->SetBinContent(25,16.81303);
   hCCpi0inFV_stack_10->SetBinContent(26,76.4554);
   hCCpi0inFV_stack_10->SetBinError(1,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(2,1.927632);
   hCCpi0inFV_stack_10->SetBinError(3,4.634038);
   hCCpi0inFV_stack_10->SetBinError(4,7.769713);
   hCCpi0inFV_stack_10->SetBinError(5,10.37782);
   hCCpi0inFV_stack_10->SetBinError(6,11.89961);
   hCCpi0inFV_stack_10->SetBinError(7,12.10184);
   hCCpi0inFV_stack_10->SetBinError(8,11.86132);
   hCCpi0inFV_stack_10->SetBinError(9,11.27685);
   hCCpi0inFV_stack_10->SetBinError(10,10.39794);
   hCCpi0inFV_stack_10->SetBinError(11,9.406447);
   hCCpi0inFV_stack_10->SetBinError(12,8.572742);
   hCCpi0inFV_stack_10->SetBinError(13,7.926933);
   hCCpi0inFV_stack_10->SetBinError(14,7.036841);
   hCCpi0inFV_stack_10->SetBinError(15,6.323157);
   hCCpi0inFV_stack_10->SetBinError(16,5.540923);
   hCCpi0inFV_stack_10->SetBinError(17,4.919928);
   hCCpi0inFV_stack_10->SetBinError(18,4.316231);
   hCCpi0inFV_stack_10->SetBinError(19,3.66426);
   hCCpi0inFV_stack_10->SetBinError(20,3.407416);
   hCCpi0inFV_stack_10->SetBinError(21,2.754683);
   hCCpi0inFV_stack_10->SetBinError(22,2.799362);
   hCCpi0inFV_stack_10->SetBinError(23,2.251159);
   hCCpi0inFV_stack_10->SetBinError(24,2.085783);
   hCCpi0inFV_stack_10->SetBinError(25,2.083583);
   hCCpi0inFV_stack_10->SetBinError(26,4.419996);
   hCCpi0inFV_stack_10->SetEntries(22225);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.9303237);
   hNCinFV_stack_11->SetBinContent(4,2.372847);
   hNCinFV_stack_11->SetBinContent(5,4.29632);
   hNCinFV_stack_11->SetBinContent(6,4.233609);
   hNCinFV_stack_11->SetBinContent(7,4.880936);
   hNCinFV_stack_11->SetBinContent(8,7.121799);
   hNCinFV_stack_11->SetBinContent(9,4.942209);
   hNCinFV_stack_11->SetBinContent(10,8.502286);
   hNCinFV_stack_11->SetBinContent(11,5.160056);
   hNCinFV_stack_11->SetBinContent(12,5.043913);
   hNCinFV_stack_11->SetBinContent(13,5.185845);
   hNCinFV_stack_11->SetBinContent(14,3.102962);
   hNCinFV_stack_11->SetBinContent(15,4.490754);
   hNCinFV_stack_11->SetBinContent(16,5.000156);
   hNCinFV_stack_11->SetBinContent(17,6.591496);
   hNCinFV_stack_11->SetBinContent(18,3.505322);
   hNCinFV_stack_11->SetBinContent(19,1.53119);
   hNCinFV_stack_11->SetBinContent(20,2.160973);
   hNCinFV_stack_11->SetBinContent(21,1.784885);
   hNCinFV_stack_11->SetBinContent(22,1.285011);
   hNCinFV_stack_11->SetBinContent(23,0.9286332);
   hNCinFV_stack_11->SetBinContent(24,0.5850745);
   hNCinFV_stack_11->SetBinContent(25,0.785171);
   hNCinFV_stack_11->SetBinContent(26,3.272921);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.4814682);
   hNCinFV_stack_11->SetBinError(4,0.7447236);
   hNCinFV_stack_11->SetBinError(5,1.091488);
   hNCinFV_stack_11->SetBinError(6,1.393739);
   hNCinFV_stack_11->SetBinError(7,1.129881);
   hNCinFV_stack_11->SetBinError(8,1.364236);
   hNCinFV_stack_11->SetBinError(9,1.089989);
   hNCinFV_stack_11->SetBinError(10,1.559862);
   hNCinFV_stack_11->SetBinError(11,1.249619);
   hNCinFV_stack_11->SetBinError(12,1.335117);
   hNCinFV_stack_11->SetBinError(13,1.319776);
   hNCinFV_stack_11->SetBinError(14,0.971563);
   hNCinFV_stack_11->SetBinError(15,1.064059);
   hNCinFV_stack_11->SetBinError(16,1.801758);
   hNCinFV_stack_11->SetBinError(17,2.085068);
   hNCinFV_stack_11->SetBinError(18,1.082204);
   hNCinFV_stack_11->SetBinError(19,0.6620411);
   hNCinFV_stack_11->SetBinError(20,0.8752578);
   hNCinFV_stack_11->SetBinError(21,0.8642462);
   hNCinFV_stack_11->SetBinError(22,0.6607223);
   hNCinFV_stack_11->SetBinError(23,0.48078);
   hNCinFV_stack_11->SetBinError(24,0.337793);
   hNCinFV_stack_11->SetBinError(25,0.3925882);
   hNCinFV_stack_11->SetBinError(26,0.9420814);
   hNCinFV_stack_11->SetEntries(331);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(1,3.988934);
   hnumuCCinFV_stack_12->SetBinContent(2,24.08884);
   hnumuCCinFV_stack_12->SetBinContent(3,51.65028);
   hnumuCCinFV_stack_12->SetBinContent(4,76.77618);
   hnumuCCinFV_stack_12->SetBinContent(5,101.8119);
   hnumuCCinFV_stack_12->SetBinContent(6,123.0687);
   hnumuCCinFV_stack_12->SetBinContent(7,137.5275);
   hnumuCCinFV_stack_12->SetBinContent(8,141.4157);
   hnumuCCinFV_stack_12->SetBinContent(9,149.3282);
   hnumuCCinFV_stack_12->SetBinContent(10,137.2144);
   hnumuCCinFV_stack_12->SetBinContent(11,122.0833);
   hnumuCCinFV_stack_12->SetBinContent(12,103.8424);
   hnumuCCinFV_stack_12->SetBinContent(13,101.1451);
   hnumuCCinFV_stack_12->SetBinContent(14,91.49384);
   hnumuCCinFV_stack_12->SetBinContent(15,66.55934);
   hnumuCCinFV_stack_12->SetBinContent(16,59.34008);
   hnumuCCinFV_stack_12->SetBinContent(17,56.84656);
   hnumuCCinFV_stack_12->SetBinContent(18,40.33772);
   hnumuCCinFV_stack_12->SetBinContent(19,35.25473);
   hnumuCCinFV_stack_12->SetBinContent(20,28.15697);
   hnumuCCinFV_stack_12->SetBinContent(21,23.05259);
   hnumuCCinFV_stack_12->SetBinContent(22,21.30085);
   hnumuCCinFV_stack_12->SetBinContent(23,16.47995);
   hnumuCCinFV_stack_12->SetBinContent(24,14.48174);
   hnumuCCinFV_stack_12->SetBinContent(25,6.216889);
   hnumuCCinFV_stack_12->SetBinContent(26,60.55505);
   hnumuCCinFV_stack_12->SetBinError(0,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(1,1.938027);
   hnumuCCinFV_stack_12->SetBinError(2,2.666964);
   hnumuCCinFV_stack_12->SetBinError(3,3.990939);
   hnumuCCinFV_stack_12->SetBinError(4,5.068549);
   hnumuCCinFV_stack_12->SetBinError(5,6.353825);
   hnumuCCinFV_stack_12->SetBinError(6,6.271718);
   hnumuCCinFV_stack_12->SetBinError(7,6.268128);
   hnumuCCinFV_stack_12->SetBinError(8,6.664887);
   hnumuCCinFV_stack_12->SetBinError(9,6.379703);
   hnumuCCinFV_stack_12->SetBinError(10,7.264298);
   hnumuCCinFV_stack_12->SetBinError(11,5.553285);
   hnumuCCinFV_stack_12->SetBinError(12,5.421687);
   hnumuCCinFV_stack_12->SetBinError(13,5.318654);
   hnumuCCinFV_stack_12->SetBinError(14,4.883762);
   hnumuCCinFV_stack_12->SetBinError(15,4.114415);
   hnumuCCinFV_stack_12->SetBinError(16,4.019174);
   hnumuCCinFV_stack_12->SetBinError(17,4.042414);
   hnumuCCinFV_stack_12->SetBinError(18,3.185644);
   hnumuCCinFV_stack_12->SetBinError(19,3.013249);
   hnumuCCinFV_stack_12->SetBinError(20,2.740085);
   hnumuCCinFV_stack_12->SetBinError(21,2.425466);
   hnumuCCinFV_stack_12->SetBinError(22,2.356142);
   hnumuCCinFV_stack_12->SetBinError(23,2.08658);
   hnumuCCinFV_stack_12->SetBinError(24,1.904804);
   hnumuCCinFV_stack_12->SetBinError(25,1.210505);
   hnumuCCinFV_stack_12->SetBinError(26,3.926187);
   hnumuCCinFV_stack_12->SetEntries(7460);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(9,1.507261);
   hnueCCinFV_stack_13->SetBinContent(10,0.9835768);
   hnueCCinFV_stack_13->SetBinContent(12,1.26712);
   hnueCCinFV_stack_13->SetBinContent(13,1.151915);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,1.001686);
   hnueCCinFV_stack_13->SetBinContent(16,1.608988);
   hnueCCinFV_stack_13->SetBinContent(17,1.360711);
   hnueCCinFV_stack_13->SetBinContent(18,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(23,1.557426);
   hnueCCinFV_stack_13->SetBinContent(24,0.7834804);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,2.734337);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.3387718);
   hnueCCinFV_stack_13->SetBinError(9,0.6353965);
   hnueCCinFV_stack_13->SetBinError(10,0.4398689);
   hnueCCinFV_stack_13->SetBinError(12,0.5883944);
   hnueCCinFV_stack_13->SetBinError(13,0.6079563);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.5147626);
   hnueCCinFV_stack_13->SetBinError(16,0.6801404);
   hnueCCinFV_stack_13->SetBinError(17,0.6803552);
   hnueCCinFV_stack_13->SetBinError(18,0.340721);
   hnueCCinFV_stack_13->SetBinError(19,0.438694);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetBinError(23,0.7082233);
   hnueCCinFV_stack_13->SetBinError(24,0.3917439);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.8558255);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__2->SetBinContent(0,0.7760984);
   hmcerror__2->SetBinContent(1,5.165845);
   hmcerror__2->SetBinContent(2,42.24253);
   hmcerror__2->SetBinContent(3,152.2219);
   hmcerror__2->SetBinContent(4,337.1723);
   hmcerror__2->SetBinContent(5,553.6439);
   hmcerror__2->SetBinContent(6,719.1981);
   hmcerror__2->SetBinContent(7,754.0943);
   hmcerror__2->SetBinContent(8,740.3226);
   hmcerror__2->SetBinContent(9,697.138);
   hmcerror__2->SetBinContent(10,608.818);
   hmcerror__2->SetBinContent(11,502.0677);
   hmcerror__2->SetBinContent(12,427.0221);
   hmcerror__2->SetBinContent(13,380.3299);
   hmcerror__2->SetBinContent(14,318.1801);
   hmcerror__2->SetBinContent(15,246.854);
   hmcerror__2->SetBinContent(16,208.0301);
   hmcerror__2->SetBinContent(17,174.2711);
   hmcerror__2->SetBinContent(18,129.8988);
   hmcerror__2->SetBinContent(19,98.07123);
   hmcerror__2->SetBinContent(20,82.01415);
   hmcerror__2->SetBinContent(21,59.78898);
   hmcerror__2->SetBinContent(22,60.70541);
   hmcerror__2->SetBinContent(23,44.60537);
   hmcerror__2->SetBinContent(24,34.76675);
   hmcerror__2->SetBinContent(25,25.81745);
   hmcerror__2->SetBinContent(26,159.4445);
   hmcerror__2->SetBinError(0,0.4405089);
   hmcerror__2->SetBinError(1,3.050653);
   hmcerror__2->SetBinError(2,8.502886);
   hmcerror__2->SetBinError(3,31.01748);
   hmcerror__2->SetBinError(4,78.4973);
   hmcerror__2->SetBinError(5,135.8142);
   hmcerror__2->SetBinError(6,172.9874);
   hmcerror__2->SetBinError(7,191.07);
   hmcerror__2->SetBinError(8,187.5194);
   hmcerror__2->SetBinError(9,166.9269);
   hmcerror__2->SetBinError(10,144.4152);
   hmcerror__2->SetBinError(11,123.2759);
   hmcerror__2->SetBinError(12,99.31595);
   hmcerror__2->SetBinError(13,90.23746);
   hmcerror__2->SetBinError(14,76.22001);
   hmcerror__2->SetBinError(15,58.40515);
   hmcerror__2->SetBinError(16,48.56745);
   hmcerror__2->SetBinError(17,40.54606);
   hmcerror__2->SetBinError(18,30.19144);
   hmcerror__2->SetBinError(19,23.70148);
   hmcerror__2->SetBinError(20,19.6697);
   hmcerror__2->SetBinError(21,13.86507);
   hmcerror__2->SetBinError(22,14.73754);
   hmcerror__2->SetBinError(23,10.09129);
   hmcerror__2->SetBinError(24,7.495895);
   hmcerror__2->SetBinError(25,6.591891);
   hmcerror__2->SetBinError(26,24.99027);
   hmcerror__2->SetEntries(7494.873);

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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3001[25] = {
   2,
   56,
   225,
   448,
   585,
   638,
   730,
   682,
   588,
   537,
   436,
   379,
   309,
   255,
   216,
   164,
   119,
   106,
   102,
   66,
   62,
   40,
   23,
   31,
   21};
   Double_t _felx3001[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3001[25] = {
   2,
   7.6127,
   15,
   21.16601,
   24.18677,
   25.25866,
   27.01851,
   26.11513,
   24.24871,
   23.17326,
   20.88061,
   19.46792,
   17.5784,
   15.96872,
   14.69694,
   12.80625,
   10.90871,
   10.29563,
   10.0995,
   8.2509,
   8.0018,
   6.4604,
   4.9457,
   5.7094,
   4.7354};
   Double_t _fehx3001[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3001[25] = {
   1.51917,
   7.4094,
   15,
   21.16601,
   24.18677,
   25.25866,
   27.01851,
   26.11513,
   24.24871,
   23.17326,
   20.88061,
   19.46792,
   17.5784,
   15.96872,
   14.69694,
   12.80625,
   10.90871,
   10.29563,
   10.0995,
   8.0483,
   7.7989,
   6.2549,
   4.7346,
   5.5017,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1980);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(832.7204);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=51.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6820.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 132.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 63.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  92.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5135.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 84.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1733.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 15.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3002[25] = {
   0.5905428,
   0.2012873,
   0.2037649,
   0.2328106,
   0.2453097,
   0.2405282,
   0.2533768,
   0.2532942,
   0.239446,
   0.2372058,
   0.2455364,
   0.232578,
   0.237261,
   0.2395499,
   0.2365979,
   0.2334635,
   0.2326609,
   0.2324228,
   0.2416762,
   0.239833,
   0.2319,
   0.2427714,
   0.2262349,
   0.2156053,
   0.2553269};
   Double_t _fehx3002[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3002[25] = {
   0.5905428,
   0.2012873,
   0.2037649,
   0.2328106,
   0.2453097,
   0.2405282,
   0.2533768,
   0.2532942,
   0.239446,
   0.2372058,
   0.2455364,
   0.232578,
   0.237261,
   0.2395499,
   0.2365979,
   0.2334635,
   0.2326609,
   0.2324228,
   0.2416762,
   0.239833,
   0.2319,
   0.2427714,
   0.2262349,
   0.2156053,
   0.2553269};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1980);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3003[25] = {
   0.5905428,
   0.2012873,
   0.2037649,
   0.2328106,
   0.2453097,
   0.2405282,
   0.2533768,
   0.2532942,
   0.239446,
   0.2372058,
   0.2455364,
   0.232578,
   0.237261,
   0.2395499,
   0.2365979,
   0.2334635,
   0.2326609,
   0.2324228,
   0.2416762,
   0.239833,
   0.2319,
   0.2427714,
   0.2262349,
   0.2156053,
   0.2553269};
   Double_t _fehx3003[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3003[25] = {
   0.5905428,
   0.2012873,
   0.2037649,
   0.2328106,
   0.2453097,
   0.2405282,
   0.2533768,
   0.2532942,
   0.239446,
   0.2372058,
   0.2455364,
   0.232578,
   0.237261,
   0.2395499,
   0.2365979,
   0.2334635,
   0.2326609,
   0.2324228,
   0.2416762,
   0.239833,
   0.2319,
   0.2427714,
   0.2262349,
   0.2156053,
   0.2553269};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1980);
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3004[25] = {
   0.3871584,
   1.325678,
   1.478106,
   1.328698,
   1.056636,
   0.8870991,
   0.9680487,
   0.9212201,
   0.8434485,
   0.882037,
   0.8684088,
   0.8875418,
   0.8124525,
   0.8014328,
   0.875011,
   0.7883473,
   0.6828443,
   0.81602,
   1.04006,
   0.8047392,
   1.03698,
   0.6589198,
   0.515633,
   0.8916565,
   0.8134032};
   Double_t _felx3004[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3004[25] = {
   0.3871584,
   0.1802141,
   0.09854038,
   0.06277506,
   0.04368652,
   0.03512059,
   0.03582909,
   0.03527534,
   0.03478323,
   0.03806271,
   0.04158924,
   0.04558996,
   0.04621881,
   0.05018767,
   0.05953696,
   0.06155958,
   0.06259623,
   0.07925887,
   0.1029813,
   0.1006034,
   0.133834,
   0.1064221,
   0.1108768,
   0.1642201,
   0.1834186};
   Double_t _fehx3004[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3004[25] = {
   0.2940797,
   0.1754014,
   0.09854038,
   0.06277506,
   0.04368652,
   0.03512059,
   0.03582909,
   0.03527534,
   0.03478323,
   0.03806271,
   0.04158924,
   0.04558996,
   0.04621881,
   0.05018767,
   0.05953696,
   0.06155958,
   0.06259623,
   0.07925887,
   0.1029813,
   0.09813306,
   0.1304404,
   0.1030369,
   0.1061442,
   0.158246,
   0.1751877};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1980);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.734311);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
