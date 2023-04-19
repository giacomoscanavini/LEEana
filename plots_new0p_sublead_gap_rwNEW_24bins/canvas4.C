#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 16:38:20 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-13.84615,-17.38045,101.5385,1921.912);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__10->SetBinContent(1,869.0225);
   hmc__10->SetBinContent(2,293.6476);
   hmc__10->SetBinContent(3,308.3604);
   hmc__10->SetBinContent(4,312.8904);
   hmc__10->SetBinContent(5,307.422);
   hmc__10->SetBinContent(6,288.692);
   hmc__10->SetBinContent(7,274.0309);
   hmc__10->SetBinContent(8,238.4892);
   hmc__10->SetBinContent(9,203.3241);
   hmc__10->SetBinContent(10,197.4925);
   hmc__10->SetBinContent(11,159.6424);
   hmc__10->SetBinContent(12,149.1734);
   hmc__10->SetBinContent(13,137.6066);
   hmc__10->SetBinContent(14,116.7661);
   hmc__10->SetBinContent(15,95.97173);
   hmc__10->SetBinContent(16,83.56585);
   hmc__10->SetBinContent(17,70.50551);
   hmc__10->SetBinContent(18,65.33595);
   hmc__10->SetBinContent(19,62.27756);
   hmc__10->SetBinContent(20,44.92033);
   hmc__10->SetBinContent(21,44.22526);
   hmc__10->SetBinContent(22,43.4919);
   hmc__10->SetBinContent(23,35.60364);
   hmc__10->SetBinContent(24,30.64375);
   hmc__10->SetBinContent(25,404.1617);
   hmc__10->SetBinError(1,190.8867);
   hmc__10->SetBinError(2,74.70554);
   hmc__10->SetBinError(3,74.1538);
   hmc__10->SetBinError(4,80.09965);
   hmc__10->SetBinError(5,81.1247);
   hmc__10->SetBinError(6,67.51132);
   hmc__10->SetBinError(7,77.90708);
   hmc__10->SetBinError(8,59.80512);
   hmc__10->SetBinError(9,52.87891);
   hmc__10->SetBinError(10,49.06843);
   hmc__10->SetBinError(11,43.50087);
   hmc__10->SetBinError(12,40.61739);
   hmc__10->SetBinError(13,34.86649);
   hmc__10->SetBinError(14,30.81465);
   hmc__10->SetBinError(15,26.98038);
   hmc__10->SetBinError(16,23.9531);
   hmc__10->SetBinError(17,22.14712);
   hmc__10->SetBinError(18,21.83513);
   hmc__10->SetBinError(19,26.56415);
   hmc__10->SetBinError(20,17.01175);
   hmc__10->SetBinError(21,15.11645);
   hmc__10->SetBinError(22,15.85602);
   hmc__10->SetBinError(23,20.2571);
   hmc__10->SetBinError(24,14.59856);
   hmc__10->SetBinError(25,91.1481);
   hmc__10->SetMinimum(-17.38045);
   hmc__10->SetMaximum(1824.947);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,90);
   hs4_stack_4->SetMinimum(-2.843452e-08);
   hs4_stack_4->SetMaximum(912.4736);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,26.24376);
   hbadmatch_stack_1->SetBinContent(2,3.796408);
   hbadmatch_stack_1->SetBinContent(3,6.023283);
   hbadmatch_stack_1->SetBinContent(4,8.725527);
   hbadmatch_stack_1->SetBinContent(5,3.68945);
   hbadmatch_stack_1->SetBinContent(6,6.075453);
   hbadmatch_stack_1->SetBinContent(7,5.90179);
   hbadmatch_stack_1->SetBinContent(8,4.189908);
   hbadmatch_stack_1->SetBinContent(9,2.948664);
   hbadmatch_stack_1->SetBinContent(10,6.617934);
   hbadmatch_stack_1->SetBinContent(11,4.035416);
   hbadmatch_stack_1->SetBinContent(12,3.180029);
   hbadmatch_stack_1->SetBinContent(13,3.780369);
   hbadmatch_stack_1->SetBinContent(14,1.321927);
   hbadmatch_stack_1->SetBinContent(15,4.704949);
   hbadmatch_stack_1->SetBinContent(16,2.292393);
   hbadmatch_stack_1->SetBinContent(17,1.047435);
   hbadmatch_stack_1->SetBinContent(18,2.44237);
   hbadmatch_stack_1->SetBinContent(19,3.015128);
   hbadmatch_stack_1->SetBinContent(20,2.093854);
   hbadmatch_stack_1->SetBinContent(21,2.359857);
   hbadmatch_stack_1->SetBinContent(22,0.9788727);
   hbadmatch_stack_1->SetBinContent(23,0.5386397);
   hbadmatch_stack_1->SetBinContent(24,1.814194);
   hbadmatch_stack_1->SetBinContent(25,14.60431);
   hbadmatch_stack_1->SetBinError(1,2.898821);
   hbadmatch_stack_1->SetBinError(2,0.9851278);
   hbadmatch_stack_1->SetBinError(3,1.302851);
   hbadmatch_stack_1->SetBinError(4,2.31867);
   hbadmatch_stack_1->SetBinError(5,1.155382);
   hbadmatch_stack_1->SetBinError(6,1.313604);
   hbadmatch_stack_1->SetBinError(7,1.217603);
   hbadmatch_stack_1->SetBinError(8,1.280256);
   hbadmatch_stack_1->SetBinError(9,0.9630666);
   hbadmatch_stack_1->SetBinError(10,2.058402);
   hbadmatch_stack_1->SetBinError(11,1.045542);
   hbadmatch_stack_1->SetBinError(12,0.9561385);
   hbadmatch_stack_1->SetBinError(13,0.946321);
   hbadmatch_stack_1->SetBinError(14,0.6206167);
   hbadmatch_stack_1->SetBinError(15,1.834824);
   hbadmatch_stack_1->SetBinError(16,0.7467897);
   hbadmatch_stack_1->SetBinError(17,0.4723718);
   hbadmatch_stack_1->SetBinError(18,0.8149313);
   hbadmatch_stack_1->SetBinError(19,0.8636457);
   hbadmatch_stack_1->SetBinError(20,0.7760857);
   hbadmatch_stack_1->SetBinError(21,0.8314634);
   hbadmatch_stack_1->SetBinError(22,0.5034274);
   hbadmatch_stack_1->SetBinError(23,0.3929641);
   hbadmatch_stack_1->SetBinError(24,0.7026175);
   hbadmatch_stack_1->SetBinError(25,2.076789);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,95.89764);
   hext_stack_2->SetBinContent(2,24.21661);
   hext_stack_2->SetBinContent(3,26.58118);
   hext_stack_2->SetBinContent(4,30.31836);
   hext_stack_2->SetBinContent(5,31.11002);
   hext_stack_2->SetBinContent(6,25.72049);
   hext_stack_2->SetBinContent(7,23.02717);
   hext_stack_2->SetBinContent(8,18.9181);
   hext_stack_2->SetBinContent(9,21.73235);
   hext_stack_2->SetBinContent(10,19.18624);
   hext_stack_2->SetBinContent(11,13.70298);
   hext_stack_2->SetBinContent(12,16.69758);
   hext_stack_2->SetBinContent(13,14.9156);
   hext_stack_2->SetBinContent(14,14.07922);
   hext_stack_2->SetBinContent(15,6.653987);
   hext_stack_2->SetBinContent(16,9.342957);
   hext_stack_2->SetBinContent(17,9.965801);
   hext_stack_2->SetBinContent(18,5.993603);
   hext_stack_2->SetBinContent(19,8.656622);
   hext_stack_2->SetBinContent(20,3.979379);
   hext_stack_2->SetBinContent(21,6.724599);
   hext_stack_2->SetBinContent(22,6.571785);
   hext_stack_2->SetBinContent(23,3.889996);
   hext_stack_2->SetBinContent(24,1.37261);
   hext_stack_2->SetBinContent(25,44.5504);
   hext_stack_2->SetBinError(1,6.389878);
   hext_stack_2->SetBinError(2,3.201996);
   hext_stack_2->SetBinError(3,3.314125);
   hext_stack_2->SetBinError(4,3.520837);
   hext_stack_2->SetBinError(5,3.651102);
   hext_stack_2->SetBinError(6,3.424159);
   hext_stack_2->SetBinError(7,3.069764);
   hext_stack_2->SetBinError(8,2.996237);
   hext_stack_2->SetBinError(9,2.94384);
   hext_stack_2->SetBinError(10,2.924739);
   hext_stack_2->SetBinError(11,2.371497);
   hext_stack_2->SetBinError(12,2.613884);
   hext_stack_2->SetBinError(13,2.514193);
   hext_stack_2->SetBinError(14,2.474405);
   hext_stack_2->SetBinError(15,1.642041);
   hext_stack_2->SetBinError(16,1.879408);
   hext_stack_2->SetBinError(17,2.052103);
   hext_stack_2->SetBinError(18,1.59747);
   hext_stack_2->SetBinError(19,1.963739);
   hext_stack_2->SetBinError(20,1.207483);
   hext_stack_2->SetBinError(21,1.680019);
   hext_stack_2->SetBinError(22,1.62364);
   hext_stack_2->SetBinError(23,1.264566);
   hext_stack_2->SetBinError(24,0.8259691);
   hext_stack_2->SetBinError(25,4.324954);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,13.84864);
   hdirt_stack_3->SetBinContent(2,3.134999);
   hdirt_stack_3->SetBinContent(3,5.094581);
   hdirt_stack_3->SetBinContent(4,4.907243);
   hdirt_stack_3->SetBinContent(5,4.63473);
   hdirt_stack_3->SetBinContent(6,5.000342);
   hdirt_stack_3->SetBinContent(7,1.73055);
   hdirt_stack_3->SetBinContent(8,2.742343);
   hdirt_stack_3->SetBinContent(9,2.785411);
   hdirt_stack_3->SetBinContent(10,1.084439);
   hdirt_stack_3->SetBinContent(11,1.627984);
   hdirt_stack_3->SetBinContent(12,1.336892);
   hdirt_stack_3->SetBinContent(13,1.674881);
   hdirt_stack_3->SetBinContent(14,1.414125);
   hdirt_stack_3->SetBinContent(15,1.252782);
   hdirt_stack_3->SetBinContent(16,1.482172);
   hdirt_stack_3->SetBinContent(17,1.370732);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.8572037);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.7050098);
   hdirt_stack_3->SetBinContent(22,0.8766446);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(25,4.99527);
   hdirt_stack_3->SetBinError(1,2.050467);
   hdirt_stack_3->SetBinError(2,0.932115);
   hdirt_stack_3->SetBinError(3,1.250255);
   hdirt_stack_3->SetBinError(4,1.365162);
   hdirt_stack_3->SetBinError(5,1.26475);
   hdirt_stack_3->SetBinError(6,1.150618);
   hdirt_stack_3->SetBinError(7,0.6707299);
   hdirt_stack_3->SetBinError(8,0.8237399);
   hdirt_stack_3->SetBinError(9,1.226367);
   hdirt_stack_3->SetBinError(10,0.506058);
   hdirt_stack_3->SetBinError(11,0.6026798);
   hdirt_stack_3->SetBinError(12,0.5849506);
   hdirt_stack_3->SetBinError(13,0.6193212);
   hdirt_stack_3->SetBinError(14,0.6649533);
   hdirt_stack_3->SetBinError(15,0.6018287);
   hdirt_stack_3->SetBinError(16,0.7008154);
   hdirt_stack_3->SetBinError(17,0.6646592);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.455642);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,0.4310004);
   hdirt_stack_3->SetBinError(22,0.5419808);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(25,1.187963);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,112.7421);
   houtFV_stack_4->SetBinContent(2,34.04654);
   houtFV_stack_4->SetBinContent(3,38.37977);
   houtFV_stack_4->SetBinContent(4,34.84373);
   houtFV_stack_4->SetBinContent(5,31.21325);
   houtFV_stack_4->SetBinContent(6,33.22226);
   houtFV_stack_4->SetBinContent(7,28.07494);
   houtFV_stack_4->SetBinContent(8,29.80113);
   houtFV_stack_4->SetBinContent(9,21.51678);
   houtFV_stack_4->SetBinContent(10,25.86367);
   houtFV_stack_4->SetBinContent(11,20.89575);
   houtFV_stack_4->SetBinContent(12,19.44759);
   houtFV_stack_4->SetBinContent(13,18.79295);
   houtFV_stack_4->SetBinContent(14,13.42194);
   houtFV_stack_4->SetBinContent(15,11.22823);
   houtFV_stack_4->SetBinContent(16,10.55731);
   houtFV_stack_4->SetBinContent(17,6.256189);
   houtFV_stack_4->SetBinContent(18,7.62409);
   houtFV_stack_4->SetBinContent(19,5.901216);
   houtFV_stack_4->SetBinContent(20,6.916084);
   houtFV_stack_4->SetBinContent(21,6.313252);
   houtFV_stack_4->SetBinContent(22,5.600017);
   houtFV_stack_4->SetBinContent(23,3.27123);
   houtFV_stack_4->SetBinContent(24,2.608645);
   houtFV_stack_4->SetBinContent(25,58.71297);
   houtFV_stack_4->SetBinError(1,5.394544);
   houtFV_stack_4->SetBinError(2,3.107093);
   houtFV_stack_4->SetBinError(3,3.118494);
   houtFV_stack_4->SetBinError(4,2.992493);
   houtFV_stack_4->SetBinError(5,2.781182);
   houtFV_stack_4->SetBinError(6,2.875432);
   houtFV_stack_4->SetBinError(7,2.627774);
   houtFV_stack_4->SetBinError(8,2.701303);
   houtFV_stack_4->SetBinError(9,2.304561);
   houtFV_stack_4->SetBinError(10,2.585425);
   houtFV_stack_4->SetBinError(11,2.322893);
   houtFV_stack_4->SetBinError(12,2.289162);
   houtFV_stack_4->SetBinError(13,2.148312);
   houtFV_stack_4->SetBinError(14,1.791872);
   houtFV_stack_4->SetBinError(15,1.66244);
   houtFV_stack_4->SetBinError(16,1.588141);
   houtFV_stack_4->SetBinError(17,1.27283);
   houtFV_stack_4->SetBinError(18,1.373765);
   houtFV_stack_4->SetBinError(19,1.279693);
   houtFV_stack_4->SetBinError(20,1.339054);
   houtFV_stack_4->SetBinError(21,1.176731);
   houtFV_stack_4->SetBinError(22,1.186872);
   houtFV_stack_4->SetBinError(23,0.9417298);
   houtFV_stack_4->SetBinError(24,0.8140063);
   houtFV_stack_4->SetBinError(25,3.935384);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,14.42221);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.236262);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.1147);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,8.282516);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,7.739789);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.717196);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.5493);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.05631);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.752145);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.848056);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.613318);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.010552);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.607166);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.42806);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.30617);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.367772);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.701244);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.814508);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9188759);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.240226);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.878854);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4600178);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,10.04984);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.308018);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9064004);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8996481);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9607374);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.899215);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7537369);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7808332);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6559525);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6412499);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6357645);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.73372);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5315707);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5327292);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6218898);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6734704);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4113122);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4533256);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4971419);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3145228);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1427183);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3659082);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3111014);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1399647);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9568801);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,3.096252);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5988538);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.018354);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9069222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.753636);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6236609);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1922885);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.317295);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3610006);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2941681);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,279.8006);
   hNCpi0inFVres_stack_7->SetBinContent(2,111.3206);
   hNCpi0inFVres_stack_7->SetBinContent(3,110.457);
   hNCpi0inFVres_stack_7->SetBinContent(4,116.5507);
   hNCpi0inFVres_stack_7->SetBinContent(5,118.0413);
   hNCpi0inFVres_stack_7->SetBinContent(6,108.9282);
   hNCpi0inFVres_stack_7->SetBinContent(7,101.1216);
   hNCpi0inFVres_stack_7->SetBinContent(8,90.67833);
   hNCpi0inFVres_stack_7->SetBinContent(9,78.97525);
   hNCpi0inFVres_stack_7->SetBinContent(10,70.10735);
   hNCpi0inFVres_stack_7->SetBinContent(11,57.21299);
   hNCpi0inFVres_stack_7->SetBinContent(12,50.81721);
   hNCpi0inFVres_stack_7->SetBinContent(13,45.52601);
   hNCpi0inFVres_stack_7->SetBinContent(14,40.13929);
   hNCpi0inFVres_stack_7->SetBinContent(15,32.91206);
   hNCpi0inFVres_stack_7->SetBinContent(16,28.07183);
   hNCpi0inFVres_stack_7->SetBinContent(17,24.11897);
   hNCpi0inFVres_stack_7->SetBinContent(18,22.31046);
   hNCpi0inFVres_stack_7->SetBinContent(19,19.44373);
   hNCpi0inFVres_stack_7->SetBinContent(20,16.21761);
   hNCpi0inFVres_stack_7->SetBinContent(21,14.51354);
   hNCpi0inFVres_stack_7->SetBinContent(22,13.49551);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.67628);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.26766);
   hNCpi0inFVres_stack_7->SetBinContent(25,119.2536);
   hNCpi0inFVres_stack_7->SetBinError(1,5.479509);
   hNCpi0inFVres_stack_7->SetBinError(2,3.458196);
   hNCpi0inFVres_stack_7->SetBinError(3,3.37592);
   hNCpi0inFVres_stack_7->SetBinError(4,3.528251);
   hNCpi0inFVres_stack_7->SetBinError(5,3.536331);
   hNCpi0inFVres_stack_7->SetBinError(6,3.38469);
   hNCpi0inFVres_stack_7->SetBinError(7,3.297565);
   hNCpi0inFVres_stack_7->SetBinError(8,3.155329);
   hNCpi0inFVres_stack_7->SetBinError(9,2.909574);
   hNCpi0inFVres_stack_7->SetBinError(10,2.761256);
   hNCpi0inFVres_stack_7->SetBinError(11,2.454469);
   hNCpi0inFVres_stack_7->SetBinError(12,2.29313);
   hNCpi0inFVres_stack_7->SetBinError(13,2.20803);
   hNCpi0inFVres_stack_7->SetBinError(14,2.046345);
   hNCpi0inFVres_stack_7->SetBinError(15,1.854239);
   hNCpi0inFVres_stack_7->SetBinError(16,1.732775);
   hNCpi0inFVres_stack_7->SetBinError(17,1.554171);
   hNCpi0inFVres_stack_7->SetBinError(18,1.574944);
   hNCpi0inFVres_stack_7->SetBinError(19,1.478626);
   hNCpi0inFVres_stack_7->SetBinError(20,1.317973);
   hNCpi0inFVres_stack_7->SetBinError(21,1.246098);
   hNCpi0inFVres_stack_7->SetBinError(22,1.171782);
   hNCpi0inFVres_stack_7->SetBinError(23,1.143967);
   hNCpi0inFVres_stack_7->SetBinError(24,1.123656);
   hNCpi0inFVres_stack_7->SetBinError(25,3.63517);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,54.42283);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.75669);
   hNCpi0inFVdis_stack_8->SetBinContent(3,25.79548);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.47405);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.63588);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.93868);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.80145);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.17592);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.1452);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.43798);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.619051);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.4139);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.410637);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.657922);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.943972);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.66306);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.198386);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.654995);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.011879);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.788184);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.840239);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.774398);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.756539);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.189994);
   hNCpi0inFVdis_stack_8->SetBinContent(25,23.78999);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.431834);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.568485);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.676009);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.652447);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.57414);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.399515);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.491772);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.376616);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.310272);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.328342);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9326427);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.209995);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9775043);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.936773);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8530132);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7778785);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7317277);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6591582);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5055512);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5436969);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3333457);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5056796);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3298244);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4951149);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.548044);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,117.6666);
   hCCpi0inFV_stack_10->SetBinContent(2,44.52753);
   hCCpi0inFV_stack_10->SetBinContent(3,44.24459);
   hCCpi0inFV_stack_10->SetBinContent(4,45.67625);
   hCCpi0inFV_stack_10->SetBinContent(5,54.36143);
   hCCpi0inFV_stack_10->SetBinContent(6,44.89731);
   hCCpi0inFV_stack_10->SetBinContent(7,50.60391);
   hCCpi0inFV_stack_10->SetBinContent(8,40.49573);
   hCCpi0inFV_stack_10->SetBinContent(9,30.37023);
   hCCpi0inFV_stack_10->SetBinContent(10,29.78171);
   hCCpi0inFV_stack_10->SetBinContent(11,23.01175);
   hCCpi0inFV_stack_10->SetBinContent(12,22.38847);
   hCCpi0inFV_stack_10->SetBinContent(13,18.64031);
   hCCpi0inFV_stack_10->SetBinContent(14,19.11099);
   hCCpi0inFV_stack_10->SetBinContent(15,15.05215);
   hCCpi0inFV_stack_10->SetBinContent(16,14.60214);
   hCCpi0inFV_stack_10->SetBinContent(17,11.74741);
   hCCpi0inFV_stack_10->SetBinContent(18,9.760442);
   hCCpi0inFV_stack_10->SetBinContent(19,7.668073);
   hCCpi0inFV_stack_10->SetBinContent(20,4.685205);
   hCCpi0inFV_stack_10->SetBinContent(21,5.13296);
   hCCpi0inFV_stack_10->SetBinContent(22,5.765134);
   hCCpi0inFV_stack_10->SetBinContent(23,4.893135);
   hCCpi0inFV_stack_10->SetBinContent(24,4.499704);
   hCCpi0inFV_stack_10->SetBinContent(25,58.37999);
   hCCpi0inFV_stack_10->SetBinError(1,5.397097);
   hCCpi0inFV_stack_10->SetBinError(2,3.355384);
   hCCpi0inFV_stack_10->SetBinError(3,3.346946);
   hCCpi0inFV_stack_10->SetBinError(4,3.400571);
   hCCpi0inFV_stack_10->SetBinError(5,3.728088);
   hCCpi0inFV_stack_10->SetBinError(6,3.340698);
   hCCpi0inFV_stack_10->SetBinError(7,3.595489);
   hCCpi0inFV_stack_10->SetBinError(8,3.188684);
   hCCpi0inFV_stack_10->SetBinError(9,2.777436);
   hCCpi0inFV_stack_10->SetBinError(10,2.762225);
   hCCpi0inFV_stack_10->SetBinError(11,2.353457);
   hCCpi0inFV_stack_10->SetBinError(12,2.369275);
   hCCpi0inFV_stack_10->SetBinError(13,2.129343);
   hCCpi0inFV_stack_10->SetBinError(14,2.213718);
   hCCpi0inFV_stack_10->SetBinError(15,1.948606);
   hCCpi0inFV_stack_10->SetBinError(16,1.886072);
   hCCpi0inFV_stack_10->SetBinError(17,1.684699);
   hCCpi0inFV_stack_10->SetBinError(18,1.564382);
   hCCpi0inFV_stack_10->SetBinError(19,1.380695);
   hCCpi0inFV_stack_10->SetBinError(20,1.145169);
   hCCpi0inFV_stack_10->SetBinError(21,1.073552);
   hCCpi0inFV_stack_10->SetBinError(22,1.193427);
   hCCpi0inFV_stack_10->SetBinError(23,1.075229);
   hCCpi0inFV_stack_10->SetBinError(24,1.038616);
   hCCpi0inFV_stack_10->SetBinError(25,3.859618);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,55.27721);
   hNCinFV_stack_11->SetBinContent(2,19.61227);
   hNCinFV_stack_11->SetBinContent(3,20.67205);
   hNCinFV_stack_11->SetBinContent(4,19.96357);
   hNCinFV_stack_11->SetBinContent(5,15.54863);
   hNCinFV_stack_11->SetBinContent(6,20.56555);
   hNCinFV_stack_11->SetBinContent(7,19.05968);
   hNCinFV_stack_11->SetBinContent(8,13.82806);
   hNCinFV_stack_11->SetBinContent(9,12.69595);
   hNCinFV_stack_11->SetBinContent(10,11.54995);
   hNCinFV_stack_11->SetBinContent(11,10.5613);
   hNCinFV_stack_11->SetBinContent(12,10.06643);
   hNCinFV_stack_11->SetBinContent(13,11.23043);
   hNCinFV_stack_11->SetBinContent(14,7.322559);
   hNCinFV_stack_11->SetBinContent(15,7.923931);
   hNCinFV_stack_11->SetBinContent(16,3.664661);
   hNCinFV_stack_11->SetBinContent(17,4.501394);
   hNCinFV_stack_11->SetBinContent(18,3.854614);
   hNCinFV_stack_11->SetBinContent(19,7.071025);
   hNCinFV_stack_11->SetBinContent(20,2.390778);
   hNCinFV_stack_11->SetBinContent(21,2.592565);
   hNCinFV_stack_11->SetBinContent(22,3.370974);
   hNCinFV_stack_11->SetBinContent(23,1.320373);
   hNCinFV_stack_11->SetBinContent(24,1.607298);
   hNCinFV_stack_11->SetBinContent(25,26.48138);
   hNCinFV_stack_11->SetBinError(1,3.769986);
   hNCinFV_stack_11->SetBinError(2,2.14029);
   hNCinFV_stack_11->SetBinError(3,2.298037);
   hNCinFV_stack_11->SetBinError(4,2.288427);
   hNCinFV_stack_11->SetBinError(5,1.983382);
   hNCinFV_stack_11->SetBinError(6,2.314655);
   hNCinFV_stack_11->SetBinError(7,2.194779);
   hNCinFV_stack_11->SetBinError(8,1.883051);
   hNCinFV_stack_11->SetBinError(9,1.80925);
   hNCinFV_stack_11->SetBinError(10,1.630294);
   hNCinFV_stack_11->SetBinError(11,1.569199);
   hNCinFV_stack_11->SetBinError(12,1.569596);
   hNCinFV_stack_11->SetBinError(13,1.699358);
   hNCinFV_stack_11->SetBinError(14,1.38775);
   hNCinFV_stack_11->SetBinError(15,1.359393);
   hNCinFV_stack_11->SetBinError(16,0.9819618);
   hNCinFV_stack_11->SetBinError(17,1.038935);
   hNCinFV_stack_11->SetBinError(18,1.000148);
   hNCinFV_stack_11->SetBinError(19,1.336779);
   hNCinFV_stack_11->SetBinError(20,0.7844693);
   hNCinFV_stack_11->SetBinError(21,0.809985);
   hNCinFV_stack_11->SetBinError(22,0.8986391);
   hNCinFV_stack_11->SetBinError(23,0.5548703);
   hNCinFV_stack_11->SetBinError(24,0.6796534);
   hNCinFV_stack_11->SetBinError(25,2.542632);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,90.28551);
   hnumuCCinFV_stack_12->SetBinContent(2,20.13308);
   hnumuCCinFV_stack_12->SetBinContent(3,21.80698);
   hnumuCCinFV_stack_12->SetBinContent(4,16.75624);
   hnumuCCinFV_stack_12->SetBinContent(5,15.84339);
   hnumuCCinFV_stack_12->SetBinContent(6,13.67747);
   hnumuCCinFV_stack_12->SetBinContent(7,16.79829);
   hnumuCCinFV_stack_12->SetBinContent(8,14.6337);
   hnumuCCinFV_stack_12->SetBinContent(9,9.955523);
   hnumuCCinFV_stack_12->SetBinContent(10,10.5017);
   hnumuCCinFV_stack_12->SetBinContent(11,12.37294);
   hnumuCCinFV_stack_12->SetBinContent(12,8.117174);
   hnumuCCinFV_stack_12->SetBinContent(13,9.841162);
   hnumuCCinFV_stack_12->SetBinContent(14,7.470977);
   hnumuCCinFV_stack_12->SetBinContent(15,4.964979);
   hnumuCCinFV_stack_12->SetBinContent(16,5.814632);
   hnumuCCinFV_stack_12->SetBinContent(17,4.277706);
   hnumuCCinFV_stack_12->SetBinContent(18,6.055385);
   hnumuCCinFV_stack_12->SetBinContent(19,5.173357);
   hnumuCCinFV_stack_12->SetBinContent(20,3.949872);
   hnumuCCinFV_stack_12->SetBinContent(21,3.159345);
   hnumuCCinFV_stack_12->SetBinContent(22,1.822678);
   hnumuCCinFV_stack_12->SetBinContent(23,5.574472);
   hnumuCCinFV_stack_12->SetBinContent(24,3.441578);
   hnumuCCinFV_stack_12->SetBinContent(25,33.32409);
   hnumuCCinFV_stack_12->SetBinError(1,5.437213);
   hnumuCCinFV_stack_12->SetBinError(2,3.082887);
   hnumuCCinFV_stack_12->SetBinError(3,3.126705);
   hnumuCCinFV_stack_12->SetBinError(4,2.077039);
   hnumuCCinFV_stack_12->SetBinError(5,2.096991);
   hnumuCCinFV_stack_12->SetBinError(6,1.820478);
   hnumuCCinFV_stack_12->SetBinError(7,2.783021);
   hnumuCCinFV_stack_12->SetBinError(8,2.120111);
   hnumuCCinFV_stack_12->SetBinError(9,1.629746);
   hnumuCCinFV_stack_12->SetBinError(10,1.824776);
   hnumuCCinFV_stack_12->SetBinError(11,2.026917);
   hnumuCCinFV_stack_12->SetBinError(12,1.441906);
   hnumuCCinFV_stack_12->SetBinError(13,1.949066);
   hnumuCCinFV_stack_12->SetBinError(14,1.715541);
   hnumuCCinFV_stack_12->SetBinError(15,1.054215);
   hnumuCCinFV_stack_12->SetBinError(16,1.340033);
   hnumuCCinFV_stack_12->SetBinError(17,1.037934);
   hnumuCCinFV_stack_12->SetBinError(18,1.296357);
   hnumuCCinFV_stack_12->SetBinError(19,1.427526);
   hnumuCCinFV_stack_12->SetBinError(20,1.106887);
   hnumuCCinFV_stack_12->SetBinError(21,0.9920084);
   hnumuCCinFV_stack_12->SetBinError(22,0.6744023);
   hnumuCCinFV_stack_12->SetBinError(23,1.647565);
   hnumuCCinFV_stack_12->SetBinError(24,1.207606);
   hnumuCCinFV_stack_12->SetBinError(25,3.166485);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,5.138126);
   hnueCCinFV_stack_13->SetBinContent(2,2.267722);
   hnueCCinFV_stack_13->SetBinContent(3,1.228217);
   hnueCCinFV_stack_13->SetBinContent(4,1.373872);
   hnueCCinFV_stack_13->SetBinContent(5,1.073786);
   hnueCCinFV_stack_13->SetBinContent(6,3.237773);
   hnueCCinFV_stack_13->SetBinContent(7,1.469717);
   hnueCCinFV_stack_13->SetBinContent(8,0.5933445);
   hnueCCinFV_stack_13->SetBinContent(9,0.8749174);
   hnueCCinFV_stack_13->SetBinContent(10,1.550785);
   hnueCCinFV_stack_13->SetBinContent(11,1.486508);
   hnueCCinFV_stack_13->SetBinContent(12,0.9997832);
   hnueCCinFV_stack_13->SetBinContent(13,0.8666171);
   hnueCCinFV_stack_13->SetBinContent(14,1.147774);
   hnueCCinFV_stack_13->SetBinContent(15,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(16,0.4556582);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2451434);
   hnueCCinFV_stack_13->SetBinContent(19,0.4073255);
   hnueCCinFV_stack_13->SetBinContent(20,1.122308);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.9398632);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,1.354146);
   hnueCCinFV_stack_13->SetBinContent(25,9.070754);
   hnueCCinFV_stack_13->SetBinError(1,1.572864);
   hnueCCinFV_stack_13->SetBinError(2,0.8768042);
   hnueCCinFV_stack_13->SetBinError(3,0.5034889);
   hnueCCinFV_stack_13->SetBinError(4,0.5688255);
   hnueCCinFV_stack_13->SetBinError(5,0.5557297);
   hnueCCinFV_stack_13->SetBinError(6,1.471089);
   hnueCCinFV_stack_13->SetBinError(7,0.6615517);
   hnueCCinFV_stack_13->SetBinError(8,0.339783);
   hnueCCinFV_stack_13->SetBinError(9,0.5560785);
   hnueCCinFV_stack_13->SetBinError(10,0.6550905);
   hnueCCinFV_stack_13->SetBinError(11,0.7750286);
   hnueCCinFV_stack_13->SetBinError(12,0.4517983);
   hnueCCinFV_stack_13->SetBinError(13,0.4390927);
   hnueCCinFV_stack_13->SetBinError(14,0.6270275);
   hnueCCinFV_stack_13->SetBinError(15,0.5191111);
   hnueCCinFV_stack_13->SetBinError(16,0.3255218);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2451269);
   hnueCCinFV_stack_13->SetBinError(19,0.4073256);
   hnueCCinFV_stack_13->SetBinError(20,0.6109035);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.7687429);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,1.174028);
   hnueCCinFV_stack_13->SetBinError(25,2.264376);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__11->SetBinContent(1,869.0225);
   hmcerror__11->SetBinContent(2,293.6476);
   hmcerror__11->SetBinContent(3,308.3604);
   hmcerror__11->SetBinContent(4,312.8904);
   hmcerror__11->SetBinContent(5,307.422);
   hmcerror__11->SetBinContent(6,288.692);
   hmcerror__11->SetBinContent(7,274.0309);
   hmcerror__11->SetBinContent(8,238.4892);
   hmcerror__11->SetBinContent(9,203.3241);
   hmcerror__11->SetBinContent(10,197.4925);
   hmcerror__11->SetBinContent(11,159.6424);
   hmcerror__11->SetBinContent(12,149.1734);
   hmcerror__11->SetBinContent(13,137.6066);
   hmcerror__11->SetBinContent(14,116.7661);
   hmcerror__11->SetBinContent(15,95.97173);
   hmcerror__11->SetBinContent(16,83.56585);
   hmcerror__11->SetBinContent(17,70.50551);
   hmcerror__11->SetBinContent(18,65.33595);
   hmcerror__11->SetBinContent(19,62.27756);
   hmcerror__11->SetBinContent(20,44.92033);
   hmcerror__11->SetBinContent(21,44.22526);
   hmcerror__11->SetBinContent(22,43.4919);
   hmcerror__11->SetBinContent(23,35.60364);
   hmcerror__11->SetBinContent(24,30.64375);
   hmcerror__11->SetBinContent(25,404.1617);
   hmcerror__11->SetBinError(1,190.8867);
   hmcerror__11->SetBinError(2,74.70554);
   hmcerror__11->SetBinError(3,74.1538);
   hmcerror__11->SetBinError(4,80.09965);
   hmcerror__11->SetBinError(5,81.1247);
   hmcerror__11->SetBinError(6,67.51132);
   hmcerror__11->SetBinError(7,77.90708);
   hmcerror__11->SetBinError(8,59.80512);
   hmcerror__11->SetBinError(9,52.87891);
   hmcerror__11->SetBinError(10,49.06843);
   hmcerror__11->SetBinError(11,43.50087);
   hmcerror__11->SetBinError(12,40.61739);
   hmcerror__11->SetBinError(13,34.86649);
   hmcerror__11->SetBinError(14,30.81465);
   hmcerror__11->SetBinError(15,26.98038);
   hmcerror__11->SetBinError(16,23.9531);
   hmcerror__11->SetBinError(17,22.14712);
   hmcerror__11->SetBinError(18,21.83513);
   hmcerror__11->SetBinError(19,26.56415);
   hmcerror__11->SetBinError(20,17.01175);
   hmcerror__11->SetBinError(21,15.11645);
   hmcerror__11->SetBinError(22,15.85602);
   hmcerror__11->SetBinError(23,20.2571);
   hmcerror__11->SetBinError(24,14.59856);
   hmcerror__11->SetBinError(25,91.1481);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[24] = {
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
   Double_t _fy3013[24] = {
   841,
   268,
   305,
   332,
   283,
   249,
   247,
   197,
   163,
   189,
   185,
   138,
   144,
   95,
   108,
   85,
   81,
   60,
   62,
   52,
   38,
   40,
   33,
   30};
   Double_t _felx3013[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3013[24] = {
   29,
   16.37071,
   17.46425,
   18.22087,
   16.8226,
   15.77973,
   15.71623,
   14.03567,
   12.76715,
   13.74773,
   13.60147,
   11.74734,
   12,
   9.8686,
   10.3923,
   9.3428,
   9.1239,
   7.8743,
   8.0018,
   7.3419,
   6.3013,
   6.4604,
   5.8847,
   5.6197};
   Double_t _fehx3013[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3013[24] = {
   29,
   16.37071,
   17.46425,
   18.22087,
   16.8226,
   15.77973,
   15.71623,
   14.03567,
   12.76715,
   13.74773,
   13.60147,
   11.74734,
   12,
   9.667,
   10.3923,
   9.1411,
   8.9221,
   7.6713,
   7.7989,
   7.1381,
   6.0955,
   6.2549,
   5.6776,
   5.4117};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,99);
   Graph_Graph3013->SetMinimum(21.94227);
   Graph_Graph3013->SetMaximum(954.562);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4225.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 107.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 439.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 58.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 528.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1574.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  318.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 669.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 286.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 312.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
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
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3014[24] = {
   0.2196568,
   0.2544054,
   0.2404777,
   0.2559991,
   0.2638871,
   0.2338524,
   0.2843003,
   0.2507666,
   0.2600721,
   0.2484572,
   0.2724895,
   0.272283,
   0.253378,
   0.2639007,
   0.2811284,
   0.2866374,
   0.314119,
   0.3341978,
   0.4265444,
   0.3787094,
   0.3418058,
   0.364574,
   0.5689615,
   0.4763961};
   Double_t _fehx3014[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3014[24] = {
   0.2196568,
   0.2544054,
   0.2404777,
   0.2559991,
   0.2638871,
   0.2338524,
   0.2843003,
   0.2507666,
   0.2600721,
   0.2484572,
   0.2724895,
   0.272283,
   0.253378,
   0.2639007,
   0.2811284,
   0.2866374,
   0.314119,
   0.3341978,
   0.4265444,
   0.3787094,
   0.3418058,
   0.364574,
   0.5689615,
   0.4763961};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,99);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[24] = {
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
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3015[24] = {
   0.2062899,
   0.2131833,
   0.2120994,
   0.2129984,
   0.2122311,
   0.2106572,
   0.2182009,
   0.2155093,
   0.2082443,
   0.2107707,
   0.2096445,
   0.2016486,
   0.1956087,
   0.2110171,
   0.2199973,
   0.2147342,
   0.2011246,
   0.2097672,
   0.2049744,
   0.2202613,
   0.2131538,
   0.2111309,
   0.2345507,
   0.2805956};
   Double_t _fehx3015[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3015[24] = {
   0.2062899,
   0.2131833,
   0.2120994,
   0.2129984,
   0.2122311,
   0.2106572,
   0.2182009,
   0.2155093,
   0.2082443,
   0.2107707,
   0.2096445,
   0.2016486,
   0.1956087,
   0.2110171,
   0.2199973,
   0.2147342,
   0.2011246,
   0.2097672,
   0.2049744,
   0.2202613,
   0.2131538,
   0.2111309,
   0.2345507,
   0.2805956};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,99);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[24] = {
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
   Double_t _fy3016[24] = {
   0.967754,
   0.9126586,
   0.9891023,
   1.061074,
   0.9205588,
   0.862511,
   0.9013582,
   0.8260333,
   0.8016759,
   0.9569983,
   1.15884,
   0.9250976,
   1.046461,
   0.8135925,
   1.125331,
   1.017162,
   1.148846,
   0.9183305,
   0.9955432,
   1.157605,
   0.8592374,
   0.9197115,
   0.9268715,
   0.9789924};
   Double_t _felx3016[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3016[24] = {
   0.03337083,
   0.0557495,
   0.05663583,
   0.05823402,
   0.05472154,
   0.05465941,
   0.05735205,
   0.05885243,
   0.06279211,
   0.06961139,
   0.08519963,
   0.07874954,
   0.08720509,
   0.08451599,
   0.1082851,
   0.1118017,
   0.1294069,
   0.1205202,
   0.1284861,
   0.1634427,
   0.1424819,
   0.1485426,
   0.1652837,
   0.1833881};
   Double_t _fehx3016[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3016[24] = {
   0.03337083,
   0.0557495,
   0.05663583,
   0.05823402,
   0.05472154,
   0.05465941,
   0.05735205,
   0.05885243,
   0.06279211,
   0.06961139,
   0.08519963,
   0.07874954,
   0.08720509,
   0.08278946,
   0.1082851,
   0.109388,
   0.1265447,
   0.1174131,
   0.1252281,
   0.1589058,
   0.1378285,
   0.1438176,
   0.1594668,
   0.1766004};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,99);
   Graph_Graph3016->SetMinimum(0.65678);
   Graph_Graph3016->SetMaximum(1.376486);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
