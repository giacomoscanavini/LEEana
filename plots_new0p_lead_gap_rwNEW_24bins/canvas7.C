#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 15:31:58 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-5.232036,101.5385,578.553);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__19->SetBinContent(1,254.0816);
   hmc__19->SetBinContent(2,261.6018);
   hmc__19->SetBinContent(3,229.0875);
   hmc__19->SetBinContent(4,198.0241);
   hmc__19->SetBinContent(5,165.6115);
   hmc__19->SetBinContent(6,148.3437);
   hmc__19->SetBinContent(7,114.9711);
   hmc__19->SetBinContent(8,98.07272);
   hmc__19->SetBinContent(9,77.40176);
   hmc__19->SetBinContent(10,66.44041);
   hmc__19->SetBinContent(11,54.86667);
   hmc__19->SetBinContent(12,53.91276);
   hmc__19->SetBinContent(13,37.70598);
   hmc__19->SetBinContent(14,33.36811);
   hmc__19->SetBinContent(15,28.25994);
   hmc__19->SetBinContent(16,22.4345);
   hmc__19->SetBinContent(17,17.07245);
   hmc__19->SetBinContent(18,15.38129);
   hmc__19->SetBinContent(19,18.74562);
   hmc__19->SetBinContent(20,14.08779);
   hmc__19->SetBinContent(21,10.8366);
   hmc__19->SetBinContent(22,9.709179);
   hmc__19->SetBinContent(23,7.755193);
   hmc__19->SetBinContent(24,7.11263);
   hmc__19->SetBinContent(25,71.62196);
   hmc__19->SetBinError(1,93.0645);
   hmc__19->SetBinError(2,105.2577);
   hmc__19->SetBinError(3,90.37559);
   hmc__19->SetBinError(4,81.8657);
   hmc__19->SetBinError(5,67.03818);
   hmc__19->SetBinError(6,56.55244);
   hmc__19->SetBinError(7,44.69706);
   hmc__19->SetBinError(8,38.61846);
   hmc__19->SetBinError(9,32.19191);
   hmc__19->SetBinError(10,31.06347);
   hmc__19->SetBinError(11,22.45978);
   hmc__19->SetBinError(12,22.30926);
   hmc__19->SetBinError(13,16.4798);
   hmc__19->SetBinError(14,15.84256);
   hmc__19->SetBinError(15,19.34366);
   hmc__19->SetBinError(16,10.70966);
   hmc__19->SetBinError(17,7.701535);
   hmc__19->SetBinError(18,8.323321);
   hmc__19->SetBinError(19,9.496537);
   hmc__19->SetBinError(20,13.33195);
   hmc__19->SetBinError(21,8.187713);
   hmc__19->SetBinError(22,6.639889);
   hmc__19->SetBinError(23,9.283841);
   hmc__19->SetBinError(24,7.304175);
   hmc__19->SetBinError(25,23.15196);
   hmc__19->SetMinimum(-5.232036);
   hmc__19->SetMaximum(549.3637);
   hmc__19->SetEntries(1993.425);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,90);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(274.6818);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,3.241594);
   hbadmatch_stack_1->SetBinContent(2,2.855948);
   hbadmatch_stack_1->SetBinContent(3,2.985996);
   hbadmatch_stack_1->SetBinContent(4,3.702259);
   hbadmatch_stack_1->SetBinContent(5,3.350842);
   hbadmatch_stack_1->SetBinContent(6,1.554497);
   hbadmatch_stack_1->SetBinContent(7,1.914718);
   hbadmatch_stack_1->SetBinContent(8,1.924116);
   hbadmatch_stack_1->SetBinContent(9,1.882089);
   hbadmatch_stack_1->SetBinContent(10,1.535839);
   hbadmatch_stack_1->SetBinContent(11,1.854508);
   hbadmatch_stack_1->SetBinContent(12,1.780944);
   hbadmatch_stack_1->SetBinContent(14,1.286221);
   hbadmatch_stack_1->SetBinContent(15,0.9815794);
   hbadmatch_stack_1->SetBinContent(16,0.7438102);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,1.029855);
   hbadmatch_stack_1->SetBinContent(19,0.5791276);
   hbadmatch_stack_1->SetBinContent(20,0.988306);
   hbadmatch_stack_1->SetBinContent(21,0.7868615);
   hbadmatch_stack_1->SetBinContent(22,0.536893);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,4.532162);
   hbadmatch_stack_1->SetBinError(1,0.9699677);
   hbadmatch_stack_1->SetBinError(2,0.9013801);
   hbadmatch_stack_1->SetBinError(3,0.8564284);
   hbadmatch_stack_1->SetBinError(4,0.9891652);
   hbadmatch_stack_1->SetBinError(5,0.9303334);
   hbadmatch_stack_1->SetBinError(6,0.6023422);
   hbadmatch_stack_1->SetBinError(7,0.698715);
   hbadmatch_stack_1->SetBinError(8,0.7620777);
   hbadmatch_stack_1->SetBinError(9,1.206743);
   hbadmatch_stack_1->SetBinError(10,0.6446568);
   hbadmatch_stack_1->SetBinError(11,0.7225202);
   hbadmatch_stack_1->SetBinError(12,0.7085129);
   hbadmatch_stack_1->SetBinError(14,0.66147);
   hbadmatch_stack_1->SetBinError(15,0.5045833);
   hbadmatch_stack_1->SetBinError(16,0.4395666);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.5303007);
   hbadmatch_stack_1->SetBinError(19,0.4300419);
   hbadmatch_stack_1->SetBinError(20,0.5941788);
   hbadmatch_stack_1->SetBinError(21,0.3934307);
   hbadmatch_stack_1->SetBinError(22,0.3929602);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,1.145653);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,9.87201);
   hext_stack_2->SetBinContent(2,7.112428);
   hext_stack_2->SetBinContent(3,8.929177);
   hext_stack_2->SetBinContent(4,5.676386);
   hext_stack_2->SetBinContent(5,4.696014);
   hext_stack_2->SetBinContent(6,8.914816);
   hext_stack_2->SetBinContent(7,6.889002);
   hext_stack_2->SetBinContent(8,4.759445);
   hext_stack_2->SetBinContent(9,6.388612);
   hext_stack_2->SetBinContent(10,1.697008);
   hext_stack_2->SetBinContent(11,2.841783);
   hext_stack_2->SetBinContent(12,5.587004);
   hext_stack_2->SetBinContent(13,2.752401);
   hext_stack_2->SetBinContent(14,2.103607);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,1.055394);
   hext_stack_2->SetBinContent(19,1.78639);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(22,1.055394);
   hext_stack_2->SetBinContent(23,1.048213);
   hext_stack_2->SetBinContent(24,0.6416141);
   hext_stack_2->SetBinContent(25,7.787173);
   hext_stack_2->SetBinError(1,2.053562);
   hext_stack_2->SetBinError(2,1.804181);
   hext_stack_2->SetBinError(3,1.88893);
   hext_stack_2->SetBinError(4,1.49849);
   hext_stack_2->SetBinError(5,1.459786);
   hext_stack_2->SetBinError(6,1.992601);
   hext_stack_2->SetBinError(7,1.715413);
   hext_stack_2->SetBinError(8,1.567911);
   hext_stack_2->SetBinError(9,1.668326);
   hext_stack_2->SetBinError(10,0.8873887);
   hext_stack_2->SetBinError(11,1.011007);
   hext_stack_2->SetBinError(12,1.544858);
   hext_stack_2->SetBinError(13,1.07854);
   hext_stack_2->SetBinError(14,0.9761052);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.6130171);
   hext_stack_2->SetBinError(19,0.8039566);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(22,0.6130171);
   hext_stack_2->SetBinError(23,0.7595995);
   hext_stack_2->SetBinError(24,0.6416141);
   hext_stack_2->SetBinError(25,1.7312);
   hext_stack_2->SetEntries(235);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,0.6436294);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.5288571);
   hdirt_stack_3->SetBinContent(6,0.7759784);
   hdirt_stack_3->SetBinContent(7,0.2214509);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.6998254);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.3942141);
   hdirt_stack_3->SetBinContent(15,4.167396e-09);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,1.906348);
   hdirt_stack_3->SetBinError(1,0.4778222);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.3101058);
   hdirt_stack_3->SetBinError(6,0.458477);
   hdirt_stack_3->SetBinError(7,0.2189105);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(11,0.4055767);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(14,0.2804494);
   hdirt_stack_3->SetBinError(15,4.167396e-09);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,0.719648);
   hdirt_stack_3->SetEntries(33);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,3.127768);
   houtFV_stack_4->SetBinContent(2,3.219349);
   houtFV_stack_4->SetBinContent(3,4.494828);
   houtFV_stack_4->SetBinContent(4,3.069338);
   houtFV_stack_4->SetBinContent(5,4.985325);
   houtFV_stack_4->SetBinContent(6,5.377527);
   houtFV_stack_4->SetBinContent(7,4.146152);
   houtFV_stack_4->SetBinContent(8,4.510462);
   houtFV_stack_4->SetBinContent(9,1.515398);
   houtFV_stack_4->SetBinContent(10,3.769477);
   houtFV_stack_4->SetBinContent(11,2.442341);
   houtFV_stack_4->SetBinContent(12,1.176911);
   houtFV_stack_4->SetBinContent(13,1.610679);
   houtFV_stack_4->SetBinContent(14,1.222239);
   houtFV_stack_4->SetBinContent(15,0.5352025);
   houtFV_stack_4->SetBinContent(16,1.83711);
   houtFV_stack_4->SetBinContent(17,0.5352025);
   houtFV_stack_4->SetBinContent(18,0.7302274);
   houtFV_stack_4->SetBinContent(19,1.218318);
   houtFV_stack_4->SetBinContent(20,0.7302274);
   houtFV_stack_4->SetBinContent(21,0.536893);
   houtFV_stack_4->SetBinContent(22,0.7336084);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(24,0.7782435);
   houtFV_stack_4->SetBinContent(25,3.542128);
   houtFV_stack_4->SetBinError(1,0.8999062);
   houtFV_stack_4->SetBinError(2,0.8881364);
   houtFV_stack_4->SetBinError(3,1.111614);
   houtFV_stack_4->SetBinError(4,0.8417127);
   houtFV_stack_4->SetBinError(5,1.127887);
   houtFV_stack_4->SetBinError(6,1.188004);
   houtFV_stack_4->SetBinError(7,1.015222);
   houtFV_stack_4->SetBinError(8,1.098174);
   houtFV_stack_4->SetBinError(9,0.588146);
   houtFV_stack_4->SetBinError(10,0.9417711);
   houtFV_stack_4->SetBinError(11,0.759212);
   houtFV_stack_4->SetBinError(12,0.4804759);
   houtFV_stack_4->SetBinError(13,0.6806271);
   houtFV_stack_4->SetBinError(14,0.500444);
   houtFV_stack_4->SetBinError(15,0.3921167);
   houtFV_stack_4->SetBinError(16,0.7707109);
   houtFV_stack_4->SetBinError(17,0.3921167);
   houtFV_stack_4->SetBinError(18,0.4379386);
   houtFV_stack_4->SetBinError(19,0.5845872);
   houtFV_stack_4->SetBinError(20,0.4379386);
   houtFV_stack_4->SetBinError(21,0.3929602);
   houtFV_stack_4->SetBinError(22,0.4394482);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(24,0.4417092);
   houtFV_stack_4->SetBinError(25,0.8718258);
   houtFV_stack_4->SetEntries(240);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.7521399);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2841855);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.379726);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.938894);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9065858);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.533508);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.8926402);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3711885);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4879888);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2545655);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3678529);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3697006);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.06238626);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,108.0876);
   hNCpi0inFVres_stack_7->SetBinContent(2,139.2833);
   hNCpi0inFVres_stack_7->SetBinContent(3,115.7792);
   hNCpi0inFVres_stack_7->SetBinContent(4,104.5148);
   hNCpi0inFVres_stack_7->SetBinContent(5,83.55504);
   hNCpi0inFVres_stack_7->SetBinContent(6,67.64681);
   hNCpi0inFVres_stack_7->SetBinContent(7,57.92995);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.95605);
   hNCpi0inFVres_stack_7->SetBinContent(9,36.89441);
   hNCpi0inFVres_stack_7->SetBinContent(10,33.13486);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.19995);
   hNCpi0inFVres_stack_7->SetBinContent(12,23.41352);
   hNCpi0inFVres_stack_7->SetBinContent(13,17.15026);
   hNCpi0inFVres_stack_7->SetBinContent(14,15.2406);
   hNCpi0inFVres_stack_7->SetBinContent(15,13.13448);
   hNCpi0inFVres_stack_7->SetBinContent(16,8.828721);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.48969);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.439772);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.667884);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.327932);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.920802);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.598284);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.245625);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.38039);
   hNCpi0inFVres_stack_7->SetBinContent(25,17.48956);
   hNCpi0inFVres_stack_7->SetBinError(1,3.456283);
   hNCpi0inFVres_stack_7->SetBinError(2,3.865066);
   hNCpi0inFVres_stack_7->SetBinError(3,3.486954);
   hNCpi0inFVres_stack_7->SetBinError(4,3.352256);
   hNCpi0inFVres_stack_7->SetBinError(5,3.020462);
   hNCpi0inFVres_stack_7->SetBinError(6,2.676461);
   hNCpi0inFVres_stack_7->SetBinError(7,2.478339);
   hNCpi0inFVres_stack_7->SetBinError(8,2.178692);
   hNCpi0inFVres_stack_7->SetBinError(9,1.987309);
   hNCpi0inFVres_stack_7->SetBinError(10,1.846148);
   hNCpi0inFVres_stack_7->SetBinError(11,1.644557);
   hNCpi0inFVres_stack_7->SetBinError(12,1.623418);
   hNCpi0inFVres_stack_7->SetBinError(13,1.315805);
   hNCpi0inFVres_stack_7->SetBinError(14,1.269461);
   hNCpi0inFVres_stack_7->SetBinError(15,1.183844);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9263972);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9239086);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7807496);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9416077);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8214405);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6999669);
   hNCpi0inFVres_stack_7->SetBinError(22,0.608445);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4625329);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3525453);
   hNCpi0inFVres_stack_7->SetBinError(25,1.379323);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,22.36243);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.29885);
   hNCpi0inFVdis_stack_8->SetBinContent(3,19.26718);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.59428);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.4305);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.56044);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.338634);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.937002);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.080896);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.783374);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.47373);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.25585);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.850136);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.603421);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.31438);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.217894);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.129122);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.422076);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.184258);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7247357);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.169976);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7234079);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8079399);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(25,3.639961);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.51877);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.605417);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.403473);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.561833);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.239731);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.168095);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8372778);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.963737);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7938915);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6993173);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5886114);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7586268);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7427704);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3126604);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4859236);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4959004);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2907294);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.406154);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3155521);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.183661);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3254693);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2464078);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2869115);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5160909);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,36.30588);
   hCCpi0inFV_stack_10->SetBinContent(2,28.96302);
   hCCpi0inFV_stack_10->SetBinContent(3,32.09365);
   hCCpi0inFV_stack_10->SetBinContent(4,27.41984);
   hCCpi0inFV_stack_10->SetBinContent(5,21.35755);
   hCCpi0inFV_stack_10->SetBinContent(6,24.64479);
   hCCpi0inFV_stack_10->SetBinContent(7,17.2728);
   hCCpi0inFV_stack_10->SetBinContent(8,12.36157);
   hCCpi0inFV_stack_10->SetBinContent(9,10.21943);
   hCCpi0inFV_stack_10->SetBinContent(10,9.686525);
   hCCpi0inFV_stack_10->SetBinContent(11,7.904253);
   hCCpi0inFV_stack_10->SetBinContent(12,8.10773);
   hCCpi0inFV_stack_10->SetBinContent(13,4.21844);
   hCCpi0inFV_stack_10->SetBinContent(14,5.860415);
   hCCpi0inFV_stack_10->SetBinContent(15,4.398269);
   hCCpi0inFV_stack_10->SetBinContent(16,3.556859);
   hCCpi0inFV_stack_10->SetBinContent(17,1.907138);
   hCCpi0inFV_stack_10->SetBinContent(18,2.445959);
   hCCpi0inFV_stack_10->SetBinContent(19,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(20,2.00255);
   hCCpi0inFV_stack_10->SetBinContent(21,1.797884);
   hCCpi0inFV_stack_10->SetBinContent(22,0.9785053);
   hCCpi0inFV_stack_10->SetBinContent(23,0.6803553);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(25,6.876318);
   hCCpi0inFV_stack_10->SetBinError(1,3.064452);
   hCCpi0inFV_stack_10->SetBinError(2,2.688086);
   hCCpi0inFV_stack_10->SetBinError(3,2.899089);
   hCCpi0inFV_stack_10->SetBinError(4,2.600264);
   hCCpi0inFV_stack_10->SetBinError(5,2.275651);
   hCCpi0inFV_stack_10->SetBinError(6,2.491993);
   hCCpi0inFV_stack_10->SetBinError(7,2.079538);
   hCCpi0inFV_stack_10->SetBinError(8,1.777649);
   hCCpi0inFV_stack_10->SetBinError(9,1.531667);
   hCCpi0inFV_stack_10->SetBinError(10,1.546459);
   hCCpi0inFV_stack_10->SetBinError(11,1.427805);
   hCCpi0inFV_stack_10->SetBinError(12,1.442212);
   hCCpi0inFV_stack_10->SetBinError(13,1.036359);
   hCCpi0inFV_stack_10->SetBinError(14,1.241614);
   hCCpi0inFV_stack_10->SetBinError(15,1.075808);
   hCCpi0inFV_stack_10->SetBinError(16,0.9500139);
   hCCpi0inFV_stack_10->SetBinError(17,0.6501133);
   hCCpi0inFV_stack_10->SetBinError(18,0.8593012);
   hCCpi0inFV_stack_10->SetBinError(19,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(20,0.7348366);
   hCCpi0inFV_stack_10->SetBinError(21,0.649627);
   hCCpi0inFV_stack_10->SetBinError(22,0.4376048);
   hCCpi0inFV_stack_10->SetBinError(23,0.4810838);
   hCCpi0inFV_stack_10->SetBinError(24,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(25,1.357248);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,24.91334);
   hNCinFV_stack_11->SetBinContent(2,22.6386);
   hNCinFV_stack_11->SetBinContent(3,19.93168);
   hNCinFV_stack_11->SetBinContent(4,14.31279);
   hNCinFV_stack_11->SetBinContent(5,13.73616);
   hNCinFV_stack_11->SetBinContent(6,10.55176);
   hNCinFV_stack_11->SetBinContent(7,9.424723);
   hNCinFV_stack_11->SetBinContent(8,8.160983);
   hNCinFV_stack_11->SetBinContent(9,6.44718);
   hNCinFV_stack_11->SetBinContent(10,5.80547);
   hNCinFV_stack_11->SetBinContent(11,7.019338);
   hNCinFV_stack_11->SetBinContent(12,3.322793);
   hNCinFV_stack_11->SetBinContent(13,3.619252);
   hNCinFV_stack_11->SetBinContent(14,2.000729);
   hNCinFV_stack_11->SetBinContent(15,2.681084);
   hNCinFV_stack_11->SetBinContent(16,2.199135);
   hNCinFV_stack_11->SetBinContent(17,2.195754);
   hNCinFV_stack_11->SetBinContent(18,1.908829);
   hNCinFV_stack_11->SetBinContent(19,1.123658);
   hNCinFV_stack_11->SetBinContent(20,1.660551);
   hNCinFV_stack_11->SetBinContent(21,1.268811);
   hNCinFV_stack_11->SetBinContent(22,0.785171);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(24,1.413964);
   hNCinFV_stack_11->SetBinContent(25,9.124882);
   hNCinFV_stack_11->SetBinError(1,2.521114);
   hNCinFV_stack_11->SetBinError(2,2.338657);
   hNCinFV_stack_11->SetBinError(3,2.255041);
   hNCinFV_stack_11->SetBinError(4,1.881664);
   hNCinFV_stack_11->SetBinError(5,1.85199);
   hNCinFV_stack_11->SetBinError(6,1.630043);
   hNCinFV_stack_11->SetBinError(7,1.54484);
   hNCinFV_stack_11->SetBinError(8,1.428862);
   hNCinFV_stack_11->SetBinError(9,1.287001);
   hNCinFV_stack_11->SetBinError(10,1.25669);
   hNCinFV_stack_11->SetBinError(11,1.401359);
   hNCinFV_stack_11->SetBinError(12,0.9207963);
   hNCinFV_stack_11->SetBinError(13,0.8984765);
   hNCinFV_stack_11->SetBinError(14,0.7343859);
   hNCinFV_stack_11->SetBinError(15,0.8779318);
   hNCinFV_stack_11->SetBinError(16,0.7607114);
   hNCinFV_stack_11->SetBinError(17,0.7598403);
   hNCinFV_stack_11->SetBinError(18,0.6506224);
   hNCinFV_stack_11->SetBinError(19,0.5188295);
   hNCinFV_stack_11->SetBinError(20,0.650847);
   hNCinFV_stack_11->SetBinError(21,0.5889569);
   hNCinFV_stack_11->SetBinError(22,0.3925882);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(24,0.6515799);
   hNCinFV_stack_11->SetBinError(25,1.557502);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,38.24371);
   hnumuCCinFV_stack_12->SetBinContent(2,31.04997);
   hnumuCCinFV_stack_12->SetBinContent(3,22.98132);
   hnumuCCinFV_stack_12->SetBinContent(4,16.66766);
   hnumuCCinFV_stack_12->SetBinContent(5,17.52356);
   hnumuCCinFV_stack_12->SetBinContent(6,14.17252);
   hnumuCCinFV_stack_12->SetBinContent(7,7.969224);
   hnumuCCinFV_stack_12->SetBinContent(8,11.31971);
   hnumuCCinFV_stack_12->SetBinContent(9,6.996002);
   hnumuCCinFV_stack_12->SetBinContent(10,5.413723);
   hnumuCCinFV_stack_12->SetBinContent(11,2.482511);
   hnumuCCinFV_stack_12->SetBinContent(12,4.231248);
   hnumuCCinFV_stack_12->SetBinContent(13,3.198186);
   hnumuCCinFV_stack_12->SetBinContent(14,3.628768);
   hnumuCCinFV_stack_12->SetBinContent(15,2.657857);
   hnumuCCinFV_stack_12->SetBinContent(16,2.698673);
   hnumuCCinFV_stack_12->SetBinContent(17,2.366719);
   hnumuCCinFV_stack_12->SetBinContent(18,1.125407);
   hnumuCCinFV_stack_12->SetBinContent(19,3.149392);
   hnumuCCinFV_stack_12->SetBinContent(20,1.460091);
   hnumuCCinFV_stack_12->SetBinContent(21,1.327473);
   hnumuCCinFV_stack_12->SetBinContent(22,1.242116);
   hnumuCCinFV_stack_12->SetBinContent(23,2.111513);
   hnumuCCinFV_stack_12->SetBinContent(24,1.207448);
   hnumuCCinFV_stack_12->SetBinContent(25,16.13842);
   hnumuCCinFV_stack_12->SetBinError(1,3.709205);
   hnumuCCinFV_stack_12->SetBinError(2,3.490793);
   hnumuCCinFV_stack_12->SetBinError(3,3.559033);
   hnumuCCinFV_stack_12->SetBinError(4,2.095641);
   hnumuCCinFV_stack_12->SetBinError(5,2.472981);
   hnumuCCinFV_stack_12->SetBinError(6,2.442869);
   hnumuCCinFV_stack_12->SetBinError(7,1.448643);
   hnumuCCinFV_stack_12->SetBinError(8,1.987458);
   hnumuCCinFV_stack_12->SetBinError(9,1.36942);
   hnumuCCinFV_stack_12->SetBinError(10,1.213402);
   hnumuCCinFV_stack_12->SetBinError(11,0.7196184);
   hnumuCCinFV_stack_12->SetBinError(12,1.074998);
   hnumuCCinFV_stack_12->SetBinError(13,0.8815578);
   hnumuCCinFV_stack_12->SetBinError(14,0.9958952);
   hnumuCCinFV_stack_12->SetBinError(15,0.862937);
   hnumuCCinFV_stack_12->SetBinError(16,0.8505042);
   hnumuCCinFV_stack_12->SetBinError(17,0.8196691);
   hnumuCCinFV_stack_12->SetBinError(18,0.5760293);
   hnumuCCinFV_stack_12->SetBinError(19,0.9618045);
   hnumuCCinFV_stack_12->SetBinError(20,0.6017418);
   hnumuCCinFV_stack_12->SetBinError(21,0.6126305);
   hnumuCCinFV_stack_12->SetBinError(22,0.6511595);
   hnumuCCinFV_stack_12->SetBinError(23,0.8258032);
   hnumuCCinFV_stack_12->SetBinError(24,0.6524266);
   hnumuCCinFV_stack_12->SetBinError(25,2.171945);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,5.06817);
   hnueCCinFV_stack_13->SetBinContent(2,1.432998);
   hnueCCinFV_stack_13->SetBinContent(3,1.32943);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(25,0.3897057);
   hnueCCinFV_stack_13->SetBinError(1,1.144859);
   hnueCCinFV_stack_13->SetBinError(2,0.7703599);
   hnueCCinFV_stack_13->SetBinError(3,0.61171);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.3160204);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.2451916);
   hnueCCinFV_stack_13->SetBinError(25,0.3893381);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__20->SetBinContent(1,254.0816);
   hmcerror__20->SetBinContent(2,261.6018);
   hmcerror__20->SetBinContent(3,229.0875);
   hmcerror__20->SetBinContent(4,198.0241);
   hmcerror__20->SetBinContent(5,165.6115);
   hmcerror__20->SetBinContent(6,148.3437);
   hmcerror__20->SetBinContent(7,114.9711);
   hmcerror__20->SetBinContent(8,98.07272);
   hmcerror__20->SetBinContent(9,77.40176);
   hmcerror__20->SetBinContent(10,66.44041);
   hmcerror__20->SetBinContent(11,54.86667);
   hmcerror__20->SetBinContent(12,53.91276);
   hmcerror__20->SetBinContent(13,37.70598);
   hmcerror__20->SetBinContent(14,33.36811);
   hmcerror__20->SetBinContent(15,28.25994);
   hmcerror__20->SetBinContent(16,22.4345);
   hmcerror__20->SetBinContent(17,17.07245);
   hmcerror__20->SetBinContent(18,15.38129);
   hmcerror__20->SetBinContent(19,18.74562);
   hmcerror__20->SetBinContent(20,14.08779);
   hmcerror__20->SetBinContent(21,10.8366);
   hmcerror__20->SetBinContent(22,9.709179);
   hmcerror__20->SetBinContent(23,7.755193);
   hmcerror__20->SetBinContent(24,7.11263);
   hmcerror__20->SetBinContent(25,71.62196);
   hmcerror__20->SetBinError(1,93.0645);
   hmcerror__20->SetBinError(2,105.2577);
   hmcerror__20->SetBinError(3,90.37559);
   hmcerror__20->SetBinError(4,81.8657);
   hmcerror__20->SetBinError(5,67.03818);
   hmcerror__20->SetBinError(6,56.55244);
   hmcerror__20->SetBinError(7,44.69706);
   hmcerror__20->SetBinError(8,38.61846);
   hmcerror__20->SetBinError(9,32.19191);
   hmcerror__20->SetBinError(10,31.06347);
   hmcerror__20->SetBinError(11,22.45978);
   hmcerror__20->SetBinError(12,22.30926);
   hmcerror__20->SetBinError(13,16.4798);
   hmcerror__20->SetBinError(14,15.84256);
   hmcerror__20->SetBinError(15,19.34366);
   hmcerror__20->SetBinError(16,10.70966);
   hmcerror__20->SetBinError(17,7.701535);
   hmcerror__20->SetBinError(18,8.323321);
   hmcerror__20->SetBinError(19,9.496537);
   hmcerror__20->SetBinError(20,13.33195);
   hmcerror__20->SetBinError(21,8.187713);
   hmcerror__20->SetBinError(22,6.639889);
   hmcerror__20->SetBinError(23,9.283841);
   hmcerror__20->SetBinError(24,7.304175);
   hmcerror__20->SetBinError(25,23.15196);
   hmcerror__20->SetEntries(1993.425);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[24] = {
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
   Double_t _fy3025[24] = {
   162,
   170,
   177,
   144,
   123,
   112,
   103,
   72,
   49,
   39,
   43,
   53,
   28,
   21,
   20,
   26,
   8,
   17,
   8,
   10,
   9,
   5,
   4,
   2};
   Double_t _felx3025[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3025[24] = {
   12.72792,
   13.0384,
   13.30413,
   12,
   11.09054,
   10.58301,
   10.14889,
   8.6108,
   7.1318,
   6.3813,
   6.6917,
   7.4105,
   5.4358,
   4.7354,
   4.6266,
   5.2453,
   3.0307,
   4.2835,
   3.0307,
   3.34883,
   3.19354,
   2.48995,
   2.29683,
   2};
   Double_t _fehx3025[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3025[24] = {
   12.72792,
   13.0384,
   13.30413,
   12,
   11.09054,
   10.58301,
   10.14889,
   8.4085,
   6.9277,
   6.1757,
   6.4868,
   7.2068,
   5.2271,
   4.5229,
   4.4133,
   5.0358,
   2.7896,
   4.0673,
   2.7896,
   3.1179,
   2.9582,
   2.21064,
   1.98186,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,99);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(209.3345);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.27","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1405.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 36.3","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 86.3","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.3","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 52.5","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.0","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  932.8","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  167.9","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 267.0","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 167.3","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 205.2","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.9","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[24] = {
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
   Double_t _fy3026[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3026[24] = {
   0.3662779,
   0.4023587,
   0.3945025,
   0.4134128,
   0.4047919,
   0.3812257,
   0.3887679,
   0.3937737,
   0.4159067,
   0.4675388,
   0.4093519,
   0.413803,
   0.4370607,
   0.4747815,
   0.6844906,
   0.4773747,
   0.451109,
   0.5411327,
   0.5066003,
   0.9463479,
   0.7555611,
   0.6838775,
   1.197113,
   1.02693};
   Double_t _fehx3026[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3026[24] = {
   0.3662779,
   0.4023587,
   0.3945025,
   0.4134128,
   0.4047919,
   0.3812257,
   0.3887679,
   0.3937737,
   0.4159067,
   0.4675388,
   0.4093519,
   0.413803,
   0.4370607,
   0.4747815,
   0.6844906,
   0.4773747,
   0.451109,
   0.5411327,
   0.5066003,
   0.9463479,
   0.7555611,
   0.6838775,
   1.197113,
   1.02693};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,99);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[24] = {
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
   Double_t _fy3027[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3027[24] = {
   0.3484284,
   0.3876843,
   0.3756102,
   0.3948916,
   0.3869336,
   0.3529685,
   0.3647509,
   0.3579314,
   0.3486635,
   0.3762394,
   0.3595707,
   0.33806,
   0.3582991,
   0.3265101,
   0.3353628,
   0.3575112,
   0.322813,
   0.3583488,
   0.2845853,
   0.3198562,
   0.3431302,
   0.3200897,
   0.3259887,
   0.3350214};
   Double_t _fehx3027[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3027[24] = {
   0.3484284,
   0.3876843,
   0.3756102,
   0.3948916,
   0.3869336,
   0.3529685,
   0.3647509,
   0.3579314,
   0.3486635,
   0.3762394,
   0.3595707,
   0.33806,
   0.3582991,
   0.3265101,
   0.3353628,
   0.3575112,
   0.322813,
   0.3583488,
   0.2845853,
   0.3198562,
   0.3431302,
   0.3200897,
   0.3259887,
   0.3350214};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,99);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[24] = {
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
   Double_t _fy3028[24] = {
   0.6375903,
   0.6498427,
   0.7726305,
   0.7271842,
   0.7427023,
   0.7550033,
   0.8958776,
   0.7341491,
   0.6330606,
   0.5869922,
   0.783718,
   0.9830697,
   0.7425878,
   0.6293433,
   0.7077155,
   1.158929,
   0.4685912,
   1.105239,
   0.4267663,
   0.7098346,
   0.8305188,
   0.5149766,
   0.5157834,
   0.2811899};
   Double_t _felx3028[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fely3028[24] = {
   0.05009383,
   0.04984066,
   0.05807447,
   0.06059869,
   0.06696721,
   0.07134111,
   0.08827344,
   0.08780015,
   0.09214003,
   0.09604547,
   0.1219629,
   0.1374536,
   0.1441628,
   0.1419139,
   0.1637158,
   0.2338051,
   0.1775199,
   0.2784876,
   0.1616751,
   0.2377115,
   0.2946995,
   0.2564532,
   0.2961667,
   0.2811899};
   Double_t _fehx3028[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
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
   Double_t _fehy3028[24] = {
   0.05009383,
   0.04984066,
   0.05807447,
   0.06059869,
   0.06696721,
   0.07134111,
   0.08827344,
   0.0857374,
   0.08950314,
   0.09295097,
   0.1182284,
   0.1336752,
   0.1386279,
   0.1355456,
   0.156168,
   0.2244668,
   0.1633978,
   0.2644316,
   0.1488134,
   0.2213193,
   0.2729823,
   0.2276856,
   0.2555526,
   0.2135876};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,99);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.521736);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
