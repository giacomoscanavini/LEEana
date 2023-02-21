#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 19:21:10 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
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
   pad1->Range(-184.6154,-18.18,1353.846,2010.325);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,491.6515);
   hmc__10->SetBinContent(2,874.0041);
   hmc__10->SetBinContent(3,744.749);
   hmc__10->SetBinContent(4,548.3794);
   hmc__10->SetBinContent(5,360.5805);
   hmc__10->SetBinContent(6,234.9477);
   hmc__10->SetBinContent(7,135.2988);
   hmc__10->SetBinContent(8,83.88397);
   hmc__10->SetBinContent(9,73.13513);
   hmc__10->SetBinContent(10,43.67135);
   hmc__10->SetBinContent(11,37.94125);
   hmc__10->SetBinContent(12,29.15648);
   hmc__10->SetBinContent(13,252.7058);
   hmc__10->SetBinError(1,110.0231);
   hmc__10->SetBinError(2,186.9212);
   hmc__10->SetBinError(3,169.6776);
   hmc__10->SetBinError(4,135.9936);
   hmc__10->SetBinError(5,107.9494);
   hmc__10->SetBinError(6,58.05911);
   hmc__10->SetBinError(7,36.3163);
   hmc__10->SetBinError(8,25.70522);
   hmc__10->SetBinError(9,25.68174);
   hmc__10->SetBinError(10,14.89818);
   hmc__10->SetBinError(11,14.67122);
   hmc__10->SetBinError(12,12.63695);
   hmc__10->SetBinError(13,60.16642);
   hmc__10->SetMinimum(-18.18);
   hmc__10->SetMaximum(1908.9);
   hmc__10->SetEntries(3864.24);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(917.7043);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,16.44151);
   hbadmatch_stack_1->SetBinContent(2,25.04015);
   hbadmatch_stack_1->SetBinContent(3,14.41745);
   hbadmatch_stack_1->SetBinContent(4,13.09797);
   hbadmatch_stack_1->SetBinContent(5,9.608136);
   hbadmatch_stack_1->SetBinContent(6,4.283939);
   hbadmatch_stack_1->SetBinContent(7,2.094335);
   hbadmatch_stack_1->SetBinContent(8,2.028481);
   hbadmatch_stack_1->SetBinContent(9,1.687835);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,1.295675);
   hbadmatch_stack_1->SetBinContent(12,1.709788);
   hbadmatch_stack_1->SetBinContent(13,7.051375);
   hbadmatch_stack_1->SetBinError(1,2.221509);
   hbadmatch_stack_1->SetBinError(2,3.094743);
   hbadmatch_stack_1->SetBinError(3,1.912082);
   hbadmatch_stack_1->SetBinError(4,2.40206);
   hbadmatch_stack_1->SetBinError(5,1.88419);
   hbadmatch_stack_1->SetBinError(6,1.045349);
   hbadmatch_stack_1->SetBinError(7,0.8221021);
   hbadmatch_stack_1->SetBinError(8,0.6892698);
   hbadmatch_stack_1->SetBinError(9,0.6596062);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.6673592);
   hbadmatch_stack_1->SetBinError(12,0.724449);
   hbadmatch_stack_1->SetBinError(13,1.480221);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,59.83387);
   hext_stack_2->SetBinContent(2,115.1936);
   hext_stack_2->SetBinContent(3,78.97659);
   hext_stack_2->SetBinContent(4,51.7063);
   hext_stack_2->SetBinContent(5,43.61192);
   hext_stack_2->SetBinContent(6,29.69987);
   hext_stack_2->SetBinContent(7,19.0522);
   hext_stack_2->SetBinContent(8,8.015008);
   hext_stack_2->SetBinContent(9,14.7037);
   hext_stack_2->SetBinContent(10,5.504803);
   hext_stack_2->SetBinContent(11,7.265242);
   hext_stack_2->SetBinContent(12,2.834603);
   hext_stack_2->SetBinContent(13,41.04704);
   hext_stack_2->SetBinError(1,5.27868);
   hext_stack_2->SetBinError(2,7.125876);
   hext_stack_2->SetBinError(3,5.917444);
   hext_stack_2->SetBinError(4,4.969218);
   hext_stack_2->SetBinError(5,4.418337);
   hext_stack_2->SetBinError(6,3.630824);
   hext_stack_2->SetBinError(7,2.846148);
   hext_stack_2->SetBinError(8,1.855964);
   hext_stack_2->SetBinError(9,2.696864);
   hext_stack_2->SetBinError(10,1.525286);
   hext_stack_2->SetBinError(11,1.855081);
   hext_stack_2->SetBinError(12,1.106046);
   hext_stack_2->SetBinError(13,4.435864);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,11.61858);
   hdirt_stack_3->SetBinContent(2,13.02584);
   hdirt_stack_3->SetBinContent(3,7.044441);
   hdirt_stack_3->SetBinContent(4,5.975907);
   hdirt_stack_3->SetBinContent(5,3.502578);
   hdirt_stack_3->SetBinContent(6,3.655475);
   hdirt_stack_3->SetBinContent(7,2.554859);
   hdirt_stack_3->SetBinContent(8,1.866221);
   hdirt_stack_3->SetBinContent(9,1.438663);
   hdirt_stack_3->SetBinContent(10,0.8581587);
   hdirt_stack_3->SetBinContent(11,0.3905701);
   hdirt_stack_3->SetBinContent(12,1.249728);
   hdirt_stack_3->SetBinContent(13,3.87205);
   hdirt_stack_3->SetBinError(1,1.755125);
   hdirt_stack_3->SetBinError(2,1.903436);
   hdirt_stack_3->SetBinError(3,1.311826);
   hdirt_stack_3->SetBinError(4,1.484779);
   hdirt_stack_3->SetBinError(5,0.9513179);
   hdirt_stack_3->SetBinError(6,1.061056);
   hdirt_stack_3->SetBinError(7,0.8427826);
   hdirt_stack_3->SetBinError(8,1.184604);
   hdirt_stack_3->SetBinError(9,0.6151616);
   hdirt_stack_3->SetBinError(10,0.5193504);
   hdirt_stack_3->SetBinError(11,0.2877834);
   hdirt_stack_3->SetBinError(12,0.6539975);
   hdirt_stack_3->SetBinError(13,1.092443);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,93.17749);
   houtFV_stack_4->SetBinContent(2,113.5918);
   houtFV_stack_4->SetBinContent(3,79.70896);
   houtFV_stack_4->SetBinContent(4,63.9454);
   houtFV_stack_4->SetBinContent(5,34.05471);
   houtFV_stack_4->SetBinContent(6,25.87374);
   houtFV_stack_4->SetBinContent(7,20.0567);
   houtFV_stack_4->SetBinContent(8,11.7381);
   houtFV_stack_4->SetBinContent(9,8.473818);
   houtFV_stack_4->SetBinContent(10,7.557607);
   houtFV_stack_4->SetBinContent(11,5.889083);
   houtFV_stack_4->SetBinContent(12,6.247118);
   houtFV_stack_4->SetBinContent(13,35.5494);
   houtFV_stack_4->SetBinError(1,4.848518);
   houtFV_stack_4->SetBinError(2,5.434527);
   houtFV_stack_4->SetBinError(3,4.459925);
   houtFV_stack_4->SetBinError(4,4.121012);
   houtFV_stack_4->SetBinError(5,2.898722);
   houtFV_stack_4->SetBinError(6,2.592894);
   houtFV_stack_4->SetBinError(7,2.246012);
   houtFV_stack_4->SetBinError(8,1.662188);
   houtFV_stack_4->SetBinError(9,1.468903);
   houtFV_stack_4->SetBinError(10,1.429232);
   houtFV_stack_4->SetBinError(11,1.282765);
   houtFV_stack_4->SetBinError(12,1.327064);
   houtFV_stack_4->SetBinError(13,3.013882);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.474576);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,12.99631);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,18.30828);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,18.23804);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,14.19336);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.32553);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.015951);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.207852);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.769662);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.142908);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8916399);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.184258);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,9.064716);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9168959);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.230909);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.366993);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.408986);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.265931);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9678346);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6021755);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6261522);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.402705);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3527294);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2909527);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3155521);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9984172);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.96729);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.077562);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.003904);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4389304);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4719735);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2725332);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07381642);
   hNCpi0inFVqe_stack_6->SetEntries(179);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,133.7498);
   hNCpi0inFVres_stack_7->SetBinContent(2,288.9985);
   hNCpi0inFVres_stack_7->SetBinContent(3,283.757);
   hNCpi0inFVres_stack_7->SetBinContent(4,210.5654);
   hNCpi0inFVres_stack_7->SetBinContent(5,124.6397);
   hNCpi0inFVres_stack_7->SetBinContent(6,71.96552);
   hNCpi0inFVres_stack_7->SetBinContent(7,41.807);
   hNCpi0inFVres_stack_7->SetBinContent(8,23.51332);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.44248);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.76537);
   hNCpi0inFVres_stack_7->SetBinContent(11,10.56384);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.887172);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.08865);
   hNCpi0inFVres_stack_7->SetBinError(1,3.785294);
   hNCpi0inFVres_stack_7->SetBinError(2,5.520766);
   hNCpi0inFVres_stack_7->SetBinError(3,5.449322);
   hNCpi0inFVres_stack_7->SetBinError(4,4.770416);
   hNCpi0inFVres_stack_7->SetBinError(5,3.632572);
   hNCpi0inFVres_stack_7->SetBinError(6,2.753692);
   hNCpi0inFVres_stack_7->SetBinError(7,2.124209);
   hNCpi0inFVres_stack_7->SetBinError(8,1.553608);
   hNCpi0inFVres_stack_7->SetBinError(9,1.502259);
   hNCpi0inFVres_stack_7->SetBinError(10,1.055825);
   hNCpi0inFVres_stack_7->SetBinError(11,1.004989);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8210052);
   hNCpi0inFVres_stack_7->SetBinError(13,2.632339);
   hNCpi0inFVres_stack_7->SetEntries(24054);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,28.72333);
   hNCpi0inFVdis_stack_8->SetBinContent(2,57.21813);
   hNCpi0inFVdis_stack_8->SetBinContent(3,42.67157);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.60783);
   hNCpi0inFVdis_stack_8->SetBinContent(5,26.45097);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.57907);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.51943);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.358736);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.074832);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.454544);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.118912);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.272198);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.60247);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.731108);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.439397);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.148349);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.892149);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.693164);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.44703);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.120766);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8353396);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7508053);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4759423);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4448753);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4916305);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.265853);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(11);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,68.4127);
   hCCpi0inFV_stack_10->SetBinContent(2,121.307);
   hCCpi0inFV_stack_10->SetBinContent(3,120.6121);
   hCCpi0inFV_stack_10->SetBinContent(4,86.54153);
   hCCpi0inFV_stack_10->SetBinContent(5,57.03252);
   hCCpi0inFV_stack_10->SetBinContent(6,37.69865);
   hCCpi0inFV_stack_10->SetBinContent(7,18.28912);
   hCCpi0inFV_stack_10->SetBinContent(8,11.79695);
   hCCpi0inFV_stack_10->SetBinContent(9,10.14974);
   hCCpi0inFV_stack_10->SetBinContent(10,5.286565);
   hCCpi0inFV_stack_10->SetBinContent(11,4.394888);
   hCCpi0inFV_stack_10->SetBinContent(12,3.376046);
   hCCpi0inFV_stack_10->SetBinContent(13,34.22698);
   hCCpi0inFV_stack_10->SetBinError(1,4.115558);
   hCCpi0inFV_stack_10->SetBinError(2,5.530461);
   hCCpi0inFV_stack_10->SetBinError(3,5.50874);
   hCCpi0inFV_stack_10->SetBinError(4,4.691966);
   hCCpi0inFV_stack_10->SetBinError(5,3.784172);
   hCCpi0inFV_stack_10->SetBinError(6,3.099545);
   hCCpi0inFV_stack_10->SetBinError(7,2.1143);
   hCCpi0inFV_stack_10->SetBinError(8,1.70837);
   hCCpi0inFV_stack_10->SetBinError(9,1.623916);
   hCCpi0inFV_stack_10->SetBinError(10,1.110635);
   hCCpi0inFV_stack_10->SetBinError(11,1.075193);
   hCCpi0inFV_stack_10->SetBinError(12,0.8997438);
   hCCpi0inFV_stack_10->SetBinError(13,2.92282);
   hCCpi0inFV_stack_10->SetEntries(2475);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,32.22477);
   hNCinFV_stack_11->SetBinContent(2,55.45016);
   hNCinFV_stack_11->SetBinContent(3,44.24534);
   hNCinFV_stack_11->SetBinContent(4,24.61458);
   hNCinFV_stack_11->SetBinContent(5,23.58789);
   hNCinFV_stack_11->SetBinContent(6,14.89509);
   hNCinFV_stack_11->SetBinContent(7,6.998679);
   hNCinFV_stack_11->SetBinContent(8,7.13876);
   hNCinFV_stack_11->SetBinContent(9,4.825274);
   hNCinFV_stack_11->SetBinContent(10,4.05471);
   hNCinFV_stack_11->SetBinContent(11,2.002419);
   hNCinFV_stack_11->SetBinContent(12,0.9785053);
   hNCinFV_stack_11->SetBinContent(13,13.22439);
   hNCinFV_stack_11->SetBinError(1,2.78236);
   hNCinFV_stack_11->SetBinError(2,3.731232);
   hNCinFV_stack_11->SetBinError(3,3.394081);
   hNCinFV_stack_11->SetBinError(4,2.489444);
   hNCinFV_stack_11->SetBinError(5,2.458891);
   hNCinFV_stack_11->SetBinError(6,1.962669);
   hNCinFV_stack_11->SetBinError(7,1.272055);
   hNCinFV_stack_11->SetBinError(8,1.301469);
   hNCinFV_stack_11->SetBinError(9,1.177757);
   hNCinFV_stack_11->SetBinError(10,1.01996);
   hNCinFV_stack_11->SetBinError(11,0.7348366);
   hNCinFV_stack_11->SetBinError(12,0.4376048);
   hNCinFV_stack_11->SetBinError(13,1.850538);
   hNCinFV_stack_11->SetEntries(996);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,33.33844);
   hnumuCCinFV_stack_12->SetBinContent(2,66.01505);
   hnumuCCinFV_stack_12->SetBinContent(3,49.92095);
   hnumuCCinFV_stack_12->SetBinContent(4,33.70079);
   hnumuCCinFV_stack_12->SetBinContent(5,21.70042);
   hnumuCCinFV_stack_12->SetBinContent(6,17.37978);
   hnumuCCinFV_stack_12->SetBinContent(7,7.691275);
   hnumuCCinFV_stack_12->SetBinContent(8,6.373123);
   hnumuCCinFV_stack_12->SetBinContent(9,4.178619);
   hnumuCCinFV_stack_12->SetBinContent(10,3.978098);
   hnumuCCinFV_stack_12->SetBinContent(11,1.862238);
   hnumuCCinFV_stack_12->SetBinContent(12,2.22204);
   hnumuCCinFV_stack_12->SetBinContent(13,18.69518);
   hnumuCCinFV_stack_12->SetBinError(1,3.652209);
   hnumuCCinFV_stack_12->SetBinError(2,4.477985);
   hnumuCCinFV_stack_12->SetBinError(3,4.554791);
   hnumuCCinFV_stack_12->SetBinError(4,3.176777);
   hnumuCCinFV_stack_12->SetBinError(5,2.618015);
   hnumuCCinFV_stack_12->SetBinError(6,2.163714);
   hnumuCCinFV_stack_12->SetBinError(7,1.49959);
   hnumuCCinFV_stack_12->SetBinError(8,1.314722);
   hnumuCCinFV_stack_12->SetBinError(9,1.670996);
   hnumuCCinFV_stack_12->SetBinError(10,1.456548);
   hnumuCCinFV_stack_12->SetBinError(11,0.6799437);
   hnumuCCinFV_stack_12->SetBinError(12,0.770235);
   hnumuCCinFV_stack_12->SetBinError(13,2.293806);
   hnumuCCinFV_stack_12->SetEntries(1051);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,5.248148);
   hnueCCinFV_stack_13->SetBinContent(2,3.144458);
   hnueCCinFV_stack_13->SetBinContent(3,2.980837);
   hnueCCinFV_stack_13->SetBinContent(4,3.32596);
   hnueCCinFV_stack_13->SetBinContent(5,1.570749);
   hnueCCinFV_stack_13->SetBinContent(6,0.9777503);
   hnueCCinFV_stack_13->SetBinContent(7,0.842703);
   hnueCCinFV_stack_13->SetBinContent(8,1.344896);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.8718764);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,11.08822);
   hnueCCinFV_stack_13->SetBinError(1,1.569874);
   hnueCCinFV_stack_13->SetBinError(2,0.9120951);
   hnueCCinFV_stack_13->SetBinError(3,0.9938646);
   hnueCCinFV_stack_13->SetBinError(4,1.456517);
   hnueCCinFV_stack_13->SetBinError(5,0.6816847);
   hnueCCinFV_stack_13->SetBinError(6,0.5027103);
   hnueCCinFV_stack_13->SetBinError(7,0.4243469);
   hnueCCinFV_stack_13->SetBinError(8,0.6166702);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.4395467);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,2.524421);
   hnueCCinFV_stack_13->SetEntries(115);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,491.6515);
   hmcerror__11->SetBinContent(2,874.0041);
   hmcerror__11->SetBinContent(3,744.749);
   hmcerror__11->SetBinContent(4,548.3794);
   hmcerror__11->SetBinContent(5,360.5805);
   hmcerror__11->SetBinContent(6,234.9477);
   hmcerror__11->SetBinContent(7,135.2988);
   hmcerror__11->SetBinContent(8,83.88397);
   hmcerror__11->SetBinContent(9,73.13513);
   hmcerror__11->SetBinContent(10,43.67135);
   hmcerror__11->SetBinContent(11,37.94125);
   hmcerror__11->SetBinContent(12,29.15648);
   hmcerror__11->SetBinContent(13,252.7058);
   hmcerror__11->SetBinError(1,110.0231);
   hmcerror__11->SetBinError(2,186.9212);
   hmcerror__11->SetBinError(3,169.6776);
   hmcerror__11->SetBinError(4,135.9936);
   hmcerror__11->SetBinError(5,107.9494);
   hmcerror__11->SetBinError(6,58.05911);
   hmcerror__11->SetBinError(7,36.3163);
   hmcerror__11->SetBinError(8,25.70522);
   hmcerror__11->SetBinError(9,25.68174);
   hmcerror__11->SetBinError(10,14.89818);
   hmcerror__11->SetBinError(11,14.67122);
   hmcerror__11->SetBinError(12,12.63695);
   hmcerror__11->SetBinError(13,60.16642);
   hmcerror__11->SetEntries(3864.24);

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
   
   Double_t _fx3013[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3013[12] = {
   525,
   909,
   759,
   484,
   304,
   214,
   116,
   103,
   63,
   42,
   23,
   27};
   Double_t _felx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3013[12] = {
   22.91288,
   30.14963,
   27.54995,
   22,
   17.4356,
   14.62874,
   10.77033,
   10.14889,
   8.0648,
   6.6155,
   4.9457,
   5.3414};
   Double_t _fehx3013[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3013[12] = {
   22.91288,
   30.14963,
   27.54995,
   22,
   17.4356,
   14.62874,
   10.77033,
   10.14889,
   7.862,
   6.4104,
   4.7346,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(16.24887);
   Graph_Graph3013->SetMaximum(1031.259);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3569.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 91.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 436.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 53.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 470.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1228.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  240.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 544.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 221.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 248.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3014[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3014[12] = {
   1,
   1,
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
   Double_t _felx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3014[12] = {
   0.2237826,
   0.2138676,
   0.2278319,
   0.2479918,
   0.2993767,
   0.247115,
   0.2684156,
   0.3064379,
   0.3511546,
   0.3411432,
   0.3866826,
   0.4334182};
   Double_t _fehx3014[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3014[12] = {
   0.2237826,
   0.2138676,
   0.2278319,
   0.2479918,
   0.2993767,
   0.247115,
   0.2684156,
   0.3064379,
   0.3511546,
   0.3411432,
   0.3866826,
   0.4334182};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3015[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3015[12] = {
   1,
   1,
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
   Double_t _felx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3015[12] = {
   0.1824614,
   0.1940687,
   0.2050822,
   0.2175683,
   0.2195264,
   0.2095619,
   0.2062468,
   0.2087355,
   0.1935612,
   0.2030266,
   0.191014,
   0.2181574};
   Double_t _fehx3015[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3015[12] = {
   0.1824614,
   0.1940687,
   0.2050822,
   0.2175683,
   0.2195264,
   0.2095619,
   0.2062468,
   0.2087355,
   0.1935612,
   0.2030266,
   0.191014,
   0.2181574};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
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
   
   Double_t _fx3016[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3016[12] = {
   1.06783,
   1.040041,
   1.019135,
   0.8826006,
   0.8430849,
   0.910841,
   0.8573619,
   1.227887,
   0.8614191,
   0.9617289,
   0.6062004,
   0.9260377};
   Double_t _felx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3016[12] = {
   0.0466039,
   0.03449598,
   0.03699227,
   0.04011821,
   0.04835423,
   0.06226381,
   0.07960406,
   0.1209873,
   0.1102726,
   0.1514837,
   0.1303515,
   0.1831977};
   Double_t _fehx3016[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3016[12] = {
   0.0466039,
   0.03449598,
   0.03699227,
   0.04011821,
   0.04835423,
   0.06226381,
   0.07960406,
   0.1209873,
   0.1074996,
   0.1467873,
   0.1247877,
   0.1760226};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0.3885464);
   Graph_Graph3016->SetMaximum(1.436176);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
