#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 13:44:47 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-61.53846,-9.08,451.2821,1004.057);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__10->SetBinContent(1,95.82168);
   hmc__10->SetBinContent(2,151.0135);
   hmc__10->SetBinContent(3,183.3389);
   hmc__10->SetBinContent(4,190.7764);
   hmc__10->SetBinContent(5,204.1983);
   hmc__10->SetBinContent(6,229.1946);
   hmc__10->SetBinContent(7,253.7482);
   hmc__10->SetBinContent(8,248.756);
   hmc__10->SetBinContent(9,300.5753);
   hmc__10->SetBinContent(10,367.6077);
   hmc__10->SetBinContent(11,407.3709);
   hmc__10->SetBinContent(12,441.1241);
   hmc__10->SetBinContent(13,410.2956);
   hmc__10->SetBinContent(14,287.1302);
   hmc__10->SetBinContent(15,181.6902);
   hmc__10->SetBinContent(16,128.622);
   hmc__10->SetBinContent(17,90.2962);
   hmc__10->SetBinContent(18,69.42815);
   hmc__10->SetBinContent(19,59.68763);
   hmc__10->SetBinContent(20,55.83698);
   hmc__10->SetBinContent(21,50.50047);
   hmc__10->SetBinContent(22,38.47994);
   hmc__10->SetBinContent(23,37.50506);
   hmc__10->SetBinContent(24,34.13008);
   hmc__10->SetBinContent(25,27.41425);
   hmc__10->SetBinContent(26,26.90403);
   hmc__10->SetBinContent(27,25.99736);
   hmc__10->SetBinContent(28,19.54008);
   hmc__10->SetBinContent(29,22.64116);
   hmc__10->SetBinContent(30,22.30869);
   hmc__10->SetBinContent(31,15.8644);
   hmc__10->SetBinContent(32,14.43921);
   hmc__10->SetBinContent(33,11.73138);
   hmc__10->SetBinContent(34,12.45837);
   hmc__10->SetBinContent(35,120.8362);
   hmc__10->SetBinError(1,33.10027);
   hmc__10->SetBinError(2,49.8594);
   hmc__10->SetBinError(3,44.94576);
   hmc__10->SetBinError(4,50.42446);
   hmc__10->SetBinError(5,55.73284);
   hmc__10->SetBinError(6,53.40466);
   hmc__10->SetBinError(7,85.09472);
   hmc__10->SetBinError(8,59.14876);
   hmc__10->SetBinError(9,78.46426);
   hmc__10->SetBinError(10,99.27957);
   hmc__10->SetBinError(11,104.5929);
   hmc__10->SetBinError(12,111.9879);
   hmc__10->SetBinError(13,100.6215);
   hmc__10->SetBinError(14,82.29305);
   hmc__10->SetBinError(15,52.18303);
   hmc__10->SetBinError(16,40.16797);
   hmc__10->SetBinError(17,27.04161);
   hmc__10->SetBinError(18,23.44011);
   hmc__10->SetBinError(19,21.0858);
   hmc__10->SetBinError(20,24.10708);
   hmc__10->SetBinError(21,24.15524);
   hmc__10->SetBinError(22,15.53702);
   hmc__10->SetBinError(23,19.21942);
   hmc__10->SetBinError(24,15.4806);
   hmc__10->SetBinError(25,16.16781);
   hmc__10->SetBinError(26,15.4337);
   hmc__10->SetBinError(27,13.15734);
   hmc__10->SetBinError(28,11.08204);
   hmc__10->SetBinError(29,12.0033);
   hmc__10->SetBinError(30,12.31692);
   hmc__10->SetBinError(31,10.49601);
   hmc__10->SetBinError(32,11.33992);
   hmc__10->SetBinError(33,8.043592);
   hmc__10->SetBinError(34,10.44713);
   hmc__10->SetBinError(35,56.03539);
   hmc__10->SetMinimum(-9.08);
   hmc__10->SetMaximum(953.4);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",34,0,400);
   hs4_stack_4->SetMinimum(-1.429819e-08);
   hs4_stack_4->SetMaximum(463.1803);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.748458);
   hbadmatch_stack_1->SetBinContent(2,7.018975);
   hbadmatch_stack_1->SetBinContent(3,8.08804);
   hbadmatch_stack_1->SetBinContent(4,4.593191);
   hbadmatch_stack_1->SetBinContent(5,7.065881);
   hbadmatch_stack_1->SetBinContent(6,8.472339);
   hbadmatch_stack_1->SetBinContent(7,11.03104);
   hbadmatch_stack_1->SetBinContent(8,7.734016);
   hbadmatch_stack_1->SetBinContent(9,7.654952);
   hbadmatch_stack_1->SetBinContent(10,6.396546);
   hbadmatch_stack_1->SetBinContent(11,6.190405);
   hbadmatch_stack_1->SetBinContent(12,8.757787);
   hbadmatch_stack_1->SetBinContent(13,7.09554);
   hbadmatch_stack_1->SetBinContent(14,7.490812);
   hbadmatch_stack_1->SetBinContent(15,6.600046);
   hbadmatch_stack_1->SetBinContent(16,3.076205);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,1.465526);
   hbadmatch_stack_1->SetBinContent(19,0.9286332);
   hbadmatch_stack_1->SetBinContent(20,0.9269427);
   hbadmatch_stack_1->SetBinContent(21,2.102773);
   hbadmatch_stack_1->SetBinContent(22,0.7317812);
   hbadmatch_stack_1->SetBinContent(23,0.3917402);
   hbadmatch_stack_1->SetBinContent(24,0.536893);
   hbadmatch_stack_1->SetBinContent(25,0.7459332);
   hbadmatch_stack_1->SetBinContent(26,0.3998213);
   hbadmatch_stack_1->SetBinContent(27,0.3934307);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(33,0.7319179);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.3934307);
   hbadmatch_stack_1->SetBinError(1,1.100734);
   hbadmatch_stack_1->SetBinError(2,1.659381);
   hbadmatch_stack_1->SetBinError(3,1.488598);
   hbadmatch_stack_1->SetBinError(4,1.059749);
   hbadmatch_stack_1->SetBinError(5,1.428177);
   hbadmatch_stack_1->SetBinError(6,1.583375);
   hbadmatch_stack_1->SetBinError(7,1.726864);
   hbadmatch_stack_1->SetBinError(8,1.69316);
   hbadmatch_stack_1->SetBinError(9,1.443724);
   hbadmatch_stack_1->SetBinError(10,1.268898);
   hbadmatch_stack_1->SetBinError(11,1.313706);
   hbadmatch_stack_1->SetBinError(12,2.174928);
   hbadmatch_stack_1->SetBinError(13,1.485485);
   hbadmatch_stack_1->SetBinError(14,1.987517);
   hbadmatch_stack_1->SetBinError(15,2.282859);
   hbadmatch_stack_1->SetBinError(16,0.9213145);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.6209405);
   hbadmatch_stack_1->SetBinError(19,0.48078);
   hbadmatch_stack_1->SetBinError(20,0.4800908);
   hbadmatch_stack_1->SetBinError(21,0.7226673);
   hbadmatch_stack_1->SetBinError(22,0.5187237);
   hbadmatch_stack_1->SetBinError(23,0.2770047);
   hbadmatch_stack_1->SetBinError(24,0.3929602);
   hbadmatch_stack_1->SetBinError(25,0.5294888);
   hbadmatch_stack_1->SetBinError(26,0.3998213);
   hbadmatch_stack_1->SetBinError(27,0.2781975);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(33,0.438694);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.2781975);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,18.00235);
   hext_stack_2->SetBinContent(2,20.02098);
   hext_stack_2->SetBinContent(3,37.26085);
   hext_stack_2->SetBinContent(4,35.12688);
   hext_stack_2->SetBinContent(5,27.96815);
   hext_stack_2->SetBinContent(6,36.37263);
   hext_stack_2->SetBinContent(7,35.01437);
   hext_stack_2->SetBinContent(8,31.49344);
   hext_stack_2->SetBinContent(9,31.69538);
   hext_stack_2->SetBinContent(10,38.13584);
   hext_stack_2->SetBinContent(11,26.64461);
   hext_stack_2->SetBinContent(12,32.89037);
   hext_stack_2->SetBinContent(13,30.27087);
   hext_stack_2->SetBinContent(14,14.8334);
   hext_stack_2->SetBinContent(15,11.905);
   hext_stack_2->SetBinContent(16,12.40099);
   hext_stack_2->SetBinContent(17,8.343815);
   hext_stack_2->SetBinContent(18,4.296596);
   hext_stack_2->SetBinContent(19,3.401196);
   hext_stack_2->SetBinContent(20,5.191995);
   hext_stack_2->SetBinContent(21,3.730002);
   hext_stack_2->SetBinContent(22,2.192989);
   hext_stack_2->SetBinContent(23,2.185808);
   hext_stack_2->SetBinContent(24,2.428004);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,2.916804);
   hext_stack_2->SetBinContent(27,1.290409);
   hext_stack_2->SetBinContent(28,0.6487947);
   hext_stack_2->SetBinContent(29,1.137595);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(33,0.8131978);
   hext_stack_2->SetBinContent(35,3.17059);
   hext_stack_2->SetBinError(1,2.655583);
   hext_stack_2->SetBinError(2,2.877697);
   hext_stack_2->SetBinError(3,4.025399);
   hext_stack_2->SetBinError(4,3.94771);
   hext_stack_2->SetBinError(5,3.356076);
   hext_stack_2->SetBinError(6,3.951189);
   hext_stack_2->SetBinError(7,3.811466);
   hext_stack_2->SetBinError(8,3.691616);
   hext_stack_2->SetBinError(9,3.635058);
   hext_stack_2->SetBinError(10,4.048506);
   hext_stack_2->SetBinError(11,3.363153);
   hext_stack_2->SetBinError(12,3.656545);
   hext_stack_2->SetBinError(13,3.669929);
   hext_stack_2->SetBinError(14,2.502214);
   hext_stack_2->SetBinError(15,2.245825);
   hext_stack_2->SetBinError(16,2.251208);
   hext_stack_2->SetBinError(17,1.919624);
   hext_stack_2->SetBinError(18,1.328326);
   hext_stack_2->SetBinError(19,1.172056);
   hext_stack_2->SetBinError(20,1.468055);
   hext_stack_2->SetBinError(21,1.270461);
   hext_stack_2->SetBinError(22,0.9009267);
   hext_stack_2->SetBinError(23,1.006415);
   hext_stack_2->SetBinError(24,1.028599);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,1.132884);
   hext_stack_2->SetBinError(27,0.788756);
   hext_stack_2->SetBinError(28,0.4587671);
   hext_stack_2->SetBinError(29,0.6602113);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(33,0.5750177);
   hext_stack_2->SetBinError(35,1.123607);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,2.334814);
   hdirt_stack_3->SetBinContent(2,3.98527);
   hdirt_stack_3->SetBinContent(3,2.692162);
   hdirt_stack_3->SetBinContent(4,3.794836);
   hdirt_stack_3->SetBinContent(5,3.773705);
   hdirt_stack_3->SetBinContent(6,4.191374);
   hdirt_stack_3->SetBinContent(7,5.351993);
   hdirt_stack_3->SetBinContent(8,5.090951);
   hdirt_stack_3->SetBinContent(9,4.405653);
   hdirt_stack_3->SetBinContent(10,4.893683);
   hdirt_stack_3->SetBinContent(11,5.476408);
   hdirt_stack_3->SetBinContent(12,3.287433);
   hdirt_stack_3->SetBinContent(13,4.718071);
   hdirt_stack_3->SetBinContent(14,1.171114);
   hdirt_stack_3->SetBinContent(15,2.685964);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,1.142423);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.7786044);
   hdirt_stack_3->SetBinError(2,1.183304);
   hdirt_stack_3->SetBinError(3,0.8290161);
   hdirt_stack_3->SetBinError(4,0.9998193);
   hdirt_stack_3->SetBinError(5,0.9571685);
   hdirt_stack_3->SetBinError(6,1.03712);
   hdirt_stack_3->SetBinError(7,1.18583);
   hdirt_stack_3->SetBinError(8,1.205855);
   hdirt_stack_3->SetBinError(9,1.395281);
   hdirt_stack_3->SetBinError(10,1.39855);
   hdirt_stack_3->SetBinError(11,1.295832);
   hdirt_stack_3->SetBinError(12,1.005465);
   hdirt_stack_3->SetBinError(13,1.336671);
   hdirt_stack_3->SetBinError(14,0.532892);
   hdirt_stack_3->SetBinError(15,0.8942396);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.530726);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetBinError(29,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,17.95496);
   houtFV_stack_4->SetBinContent(2,25.29482);
   houtFV_stack_4->SetBinContent(3,32.17395);
   houtFV_stack_4->SetBinContent(4,28.4052);
   houtFV_stack_4->SetBinContent(5,30.06691);
   houtFV_stack_4->SetBinContent(6,33.70955);
   houtFV_stack_4->SetBinContent(7,38.75786);
   houtFV_stack_4->SetBinContent(8,33.38727);
   houtFV_stack_4->SetBinContent(9,38.21716);
   houtFV_stack_4->SetBinContent(10,43.31566);
   houtFV_stack_4->SetBinContent(11,40.34866);
   houtFV_stack_4->SetBinContent(12,45.32449);
   houtFV_stack_4->SetBinContent(13,43.82432);
   houtFV_stack_4->SetBinContent(14,31.75402);
   houtFV_stack_4->SetBinContent(15,17.6912);
   houtFV_stack_4->SetBinContent(16,11.38);
   houtFV_stack_4->SetBinContent(17,8.977314);
   houtFV_stack_4->SetBinContent(18,7.622225);
   houtFV_stack_4->SetBinContent(19,8.06264);
   houtFV_stack_4->SetBinContent(20,6.316923);
   houtFV_stack_4->SetBinContent(21,5.033506);
   houtFV_stack_4->SetBinContent(22,4.494632);
   houtFV_stack_4->SetBinContent(23,4.540576);
   houtFV_stack_4->SetBinContent(24,2.44065);
   houtFV_stack_4->SetBinContent(25,3.221046);
   houtFV_stack_4->SetBinContent(26,2.110616);
   houtFV_stack_4->SetBinContent(27,3.172215);
   houtFV_stack_4->SetBinContent(28,1.413964);
   houtFV_stack_4->SetBinContent(29,2.290579);
   houtFV_stack_4->SetBinContent(30,2.050601);
   houtFV_stack_4->SetBinContent(31,1.318683);
   houtFV_stack_4->SetBinContent(32,1.178602);
   houtFV_stack_4->SetBinContent(33,0.3917402);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,10.81236);
   houtFV_stack_4->SetBinError(1,2.182997);
   houtFV_stack_4->SetBinError(2,2.509092);
   houtFV_stack_4->SetBinError(3,2.858855);
   houtFV_stack_4->SetBinError(4,2.870635);
   houtFV_stack_4->SetBinError(5,2.769505);
   houtFV_stack_4->SetBinError(6,2.851985);
   houtFV_stack_4->SetBinError(7,3.101805);
   houtFV_stack_4->SetBinError(8,2.904903);
   houtFV_stack_4->SetBinError(9,3.050763);
   houtFV_stack_4->SetBinError(10,3.280732);
   houtFV_stack_4->SetBinError(11,3.158798);
   houtFV_stack_4->SetBinError(12,3.411094);
   houtFV_stack_4->SetBinError(13,3.587641);
   houtFV_stack_4->SetBinError(14,2.880401);
   houtFV_stack_4->SetBinError(15,2.069309);
   houtFV_stack_4->SetBinError(16,1.640867);
   houtFV_stack_4->SetBinError(17,1.448272);
   houtFV_stack_4->SetBinError(18,1.395794);
   houtFV_stack_4->SetBinError(19,1.362821);
   houtFV_stack_4->SetBinError(20,1.267079);
   houtFV_stack_4->SetBinError(21,1.178989);
   houtFV_stack_4->SetBinError(22,1.037659);
   houtFV_stack_4->SetBinError(23,1.138387);
   houtFV_stack_4->SetBinError(24,0.7587757);
   houtFV_stack_4->SetBinError(25,0.8882534);
   houtFV_stack_4->SetBinError(26,0.6811705);
   houtFV_stack_4->SetBinError(27,0.9110337);
   houtFV_stack_4->SetBinError(28,0.6515799);
   houtFV_stack_4->SetBinError(29,0.7462165);
   houtFV_stack_4->SetBinError(30,0.7068742);
   houtFV_stack_4->SetBinError(31,0.5542732);
   houtFV_stack_4->SetBinError(32,0.4811646);
   houtFV_stack_4->SetBinError(33,0.2770047);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.709493);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.477876);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.789016);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.035876);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.47257);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.497974);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.14922);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.000342);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.90976);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.908671);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.019037);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,9.18827);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,12.44147);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,11.60146);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,8.726587);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.441196);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.026498);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.630994);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.172472);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.185922);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.380558);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,2.32883);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.408066);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5611351);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4267154);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6373443);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.590921);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5169074);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6292518);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7642499);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7367191);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9447708);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9841512);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.242528);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.1045);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.9541652);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8464104);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5610193);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4213615);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4046342);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3716255);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3962917);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.5123705);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9763402);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.241058);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.437022);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.255172);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.255508);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.228104);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9476081);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3728455);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3913503);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3809346);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3376966);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4237414);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3640422);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3449191);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.1994106);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,22.13227);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.1002);
   hNCpi0inFVres_stack_7->SetBinContent(3,50.02093);
   hNCpi0inFVres_stack_7->SetBinContent(4,58.24181);
   hNCpi0inFVres_stack_7->SetBinContent(5,66.00194);
   hNCpi0inFVres_stack_7->SetBinContent(6,70.55006);
   hNCpi0inFVres_stack_7->SetBinContent(7,77.51466);
   hNCpi0inFVres_stack_7->SetBinContent(8,84.15271);
   hNCpi0inFVres_stack_7->SetBinContent(9,109.9321);
   hNCpi0inFVres_stack_7->SetBinContent(10,141.1863);
   hNCpi0inFVres_stack_7->SetBinContent(11,173.6636);
   hNCpi0inFVres_stack_7->SetBinContent(12,180.5675);
   hNCpi0inFVres_stack_7->SetBinContent(13,171.8788);
   hNCpi0inFVres_stack_7->SetBinContent(14,121.6002);
   hNCpi0inFVres_stack_7->SetBinContent(15,69.11938);
   hNCpi0inFVres_stack_7->SetBinContent(16,45.52668);
   hNCpi0inFVres_stack_7->SetBinContent(17,29.95128);
   hNCpi0inFVres_stack_7->SetBinContent(18,22.68328);
   hNCpi0inFVres_stack_7->SetBinContent(19,19.04332);
   hNCpi0inFVres_stack_7->SetBinContent(20,16.28769);
   hNCpi0inFVres_stack_7->SetBinContent(21,15.11472);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.36131);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.272129);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.91974);
   hNCpi0inFVres_stack_7->SetBinContent(25,8.240493);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.662304);
   hNCpi0inFVres_stack_7->SetBinContent(27,7.476577);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.546556);
   hNCpi0inFVres_stack_7->SetBinContent(29,5.0451);
   hNCpi0inFVres_stack_7->SetBinContent(30,5.061878);
   hNCpi0inFVres_stack_7->SetBinContent(31,5.118846);
   hNCpi0inFVres_stack_7->SetBinContent(32,3.59662);
   hNCpi0inFVres_stack_7->SetBinContent(33,4.060471);
   hNCpi0inFVres_stack_7->SetBinContent(34,3.430388);
   hNCpi0inFVres_stack_7->SetBinContent(35,20.89601);
   hNCpi0inFVres_stack_7->SetBinError(1,1.564426);
   hNCpi0inFVres_stack_7->SetBinError(2,2.160769);
   hNCpi0inFVres_stack_7->SetBinError(3,2.333635);
   hNCpi0inFVres_stack_7->SetBinError(4,2.467371);
   hNCpi0inFVres_stack_7->SetBinError(5,2.690706);
   hNCpi0inFVres_stack_7->SetBinError(6,2.711065);
   hNCpi0inFVres_stack_7->SetBinError(7,2.881717);
   hNCpi0inFVres_stack_7->SetBinError(8,2.964174);
   hNCpi0inFVres_stack_7->SetBinError(9,3.41686);
   hNCpi0inFVres_stack_7->SetBinError(10,3.84186);
   hNCpi0inFVres_stack_7->SetBinError(11,4.330594);
   hNCpi0inFVres_stack_7->SetBinError(12,4.349844);
   hNCpi0inFVres_stack_7->SetBinError(13,4.311167);
   hNCpi0inFVres_stack_7->SetBinError(14,3.665504);
   hNCpi0inFVres_stack_7->SetBinError(15,2.753622);
   hNCpi0inFVres_stack_7->SetBinError(16,2.237506);
   hNCpi0inFVres_stack_7->SetBinError(17,1.839989);
   hNCpi0inFVres_stack_7->SetBinError(18,1.497782);
   hNCpi0inFVres_stack_7->SetBinError(19,1.406059);
   hNCpi0inFVres_stack_7->SetBinError(20,1.316151);
   hNCpi0inFVres_stack_7->SetBinError(21,1.270738);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9924534);
   hNCpi0inFVres_stack_7->SetBinError(23,0.926887);
   hNCpi0inFVres_stack_7->SetBinError(24,1.095388);
   hNCpi0inFVres_stack_7->SetBinError(25,0.903784);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8086936);
   hNCpi0inFVres_stack_7->SetBinError(27,0.9719816);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6896969);
   hNCpi0inFVres_stack_7->SetBinError(29,0.7011697);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7369399);
   hNCpi0inFVres_stack_7->SetBinError(31,0.7933607);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5759105);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7256753);
   hNCpi0inFVres_stack_7->SetBinError(34,0.641706);
   hNCpi0inFVres_stack_7->SetBinError(35,1.467992);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.262484);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.312912);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.57771);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.299365);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.05325);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.52888);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.37944);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.1853);
   hNCpi0inFVdis_stack_8->SetBinContent(9,21.41815);
   hNCpi0inFVdis_stack_8->SetBinContent(10,27.3735);
   hNCpi0inFVdis_stack_8->SetBinContent(11,33.78337);
   hNCpi0inFVdis_stack_8->SetBinContent(12,39.80235);
   hNCpi0inFVdis_stack_8->SetBinContent(13,31.86508);
   hNCpi0inFVdis_stack_8->SetBinContent(14,24.31627);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.16238);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.5508);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.792191);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.744431);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.989468);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.238992);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.466498);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.453048);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.523298);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.60883);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.909162);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.243466);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.245298);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.673344);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.840744);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.187666);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.365444);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.505112);
   hNCpi0inFVdis_stack_8->SetBinContent(35,8.979352);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5557331);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9907539);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.01941);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9345537);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.017912);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.080241);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.27629);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.250489);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.504912);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.721564);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.862398);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.099529);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.820068);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.589008);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.184173);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9725811);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9133164);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7631451);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7230775);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6932619);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4417287);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4698379);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4987045);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5677436);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4075087);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4708035);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.541246);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4524662);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4575982);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4691472);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3796552);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.4251929);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.9777368);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,8.788086);
   hCCpi0inFV_stack_10->SetBinContent(2,15.32679);
   hCCpi0inFV_stack_10->SetBinContent(3,18.62357);
   hCCpi0inFV_stack_10->SetBinContent(4,19.18696);
   hCCpi0inFV_stack_10->SetBinContent(5,23.02189);
   hCCpi0inFV_stack_10->SetBinContent(6,26.87819);
   hCCpi0inFV_stack_10->SetBinContent(7,32.24962);
   hCCpi0inFV_stack_10->SetBinContent(8,33.62002);
   hCCpi0inFV_stack_10->SetBinContent(9,41.91875);
   hCCpi0inFV_stack_10->SetBinContent(10,58.94458);
   hCCpi0inFV_stack_10->SetBinContent(11,64.88087);
   hCCpi0inFV_stack_10->SetBinContent(12,73.75639);
   hCCpi0inFV_stack_10->SetBinContent(13,69.10168);
   hCCpi0inFV_stack_10->SetBinContent(14,43.64049);
   hCCpi0inFV_stack_10->SetBinContent(15,28.98368);
   hCCpi0inFV_stack_10->SetBinContent(16,19.84763);
   hCCpi0inFV_stack_10->SetBinContent(17,14.62748);
   hCCpi0inFV_stack_10->SetBinContent(18,12.85571);
   hCCpi0inFV_stack_10->SetBinContent(19,10.29743);
   hCCpi0inFV_stack_10->SetBinContent(20,8.59306);
   hCCpi0inFV_stack_10->SetBinContent(21,8.738455);
   hCCpi0inFV_stack_10->SetBinContent(22,7.375813);
   hCCpi0inFV_stack_10->SetBinContent(23,7.559612);
   hCCpi0inFV_stack_10->SetBinContent(24,6.767683);
   hCCpi0inFV_stack_10->SetBinContent(25,5.613827);
   hCCpi0inFV_stack_10->SetBinContent(26,6.061942);
   hCCpi0inFV_stack_10->SetBinContent(27,5.718642);
   hCCpi0inFV_stack_10->SetBinContent(28,4.88152);
   hCCpi0inFV_stack_10->SetBinContent(29,4.83481);
   hCCpi0inFV_stack_10->SetBinContent(30,5.689739);
   hCCpi0inFV_stack_10->SetBinContent(31,2.502356);
   hCCpi0inFV_stack_10->SetBinContent(32,2.30395);
   hCCpi0inFV_stack_10->SetBinContent(33,1.997348);
   hCCpi0inFV_stack_10->SetBinContent(34,3.56769);
   hCCpi0inFV_stack_10->SetBinContent(35,29.20684);
   hCCpi0inFV_stack_10->SetBinError(1,1.520334);
   hCCpi0inFV_stack_10->SetBinError(2,1.956471);
   hCCpi0inFV_stack_10->SetBinError(3,2.200988);
   hCCpi0inFV_stack_10->SetBinError(4,2.179425);
   hCCpi0inFV_stack_10->SetBinError(5,2.354301);
   hCCpi0inFV_stack_10->SetBinError(6,2.558064);
   hCCpi0inFV_stack_10->SetBinError(7,2.845408);
   hCCpi0inFV_stack_10->SetBinError(8,2.969504);
   hCCpi0inFV_stack_10->SetBinError(9,3.214032);
   hCCpi0inFV_stack_10->SetBinError(10,3.888444);
   hCCpi0inFV_stack_10->SetBinError(11,4.085147);
   hCCpi0inFV_stack_10->SetBinError(12,4.27455);
   hCCpi0inFV_stack_10->SetBinError(13,4.181742);
   hCCpi0inFV_stack_10->SetBinError(14,3.276207);
   hCCpi0inFV_stack_10->SetBinError(15,2.701897);
   hCCpi0inFV_stack_10->SetBinError(16,2.184921);
   hCCpi0inFV_stack_10->SetBinError(17,1.888907);
   hCCpi0inFV_stack_10->SetBinError(18,1.77719);
   hCCpi0inFV_stack_10->SetBinError(19,1.630745);
   hCCpi0inFV_stack_10->SetBinError(20,1.507774);
   hCCpi0inFV_stack_10->SetBinError(21,1.419325);
   hCCpi0inFV_stack_10->SetBinError(22,1.373871);
   hCCpi0inFV_stack_10->SetBinError(23,1.455867);
   hCCpi0inFV_stack_10->SetBinError(24,1.298662);
   hCCpi0inFV_stack_10->SetBinError(25,1.241999);
   hCCpi0inFV_stack_10->SetBinError(26,1.202061);
   hCCpi0inFV_stack_10->SetBinError(27,1.210473);
   hCCpi0inFV_stack_10->SetBinError(28,1.100979);
   hCCpi0inFV_stack_10->SetBinError(29,1.091997);
   hCCpi0inFV_stack_10->SetBinError(30,1.18245);
   hCCpi0inFV_stack_10->SetBinError(31,0.73534);
   hCCpi0inFV_stack_10->SetBinError(32,0.7080718);
   hCCpi0inFV_stack_10->SetBinError(33,0.7334836);
   hCCpi0inFV_stack_10->SetBinError(34,0.919918);
   hCCpi0inFV_stack_10->SetBinError(35,2.704818);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,6.200592);
   hNCinFV_stack_11->SetBinContent(2,7.712609);
   hNCinFV_stack_11->SetBinContent(3,8.455752);
   hNCinFV_stack_11->SetBinContent(4,13.13926);
   hNCinFV_stack_11->SetBinContent(5,14.75163);
   hNCinFV_stack_11->SetBinContent(6,13.14095);
   hNCinFV_stack_11->SetBinContent(7,15.10134);
   hNCinFV_stack_11->SetBinContent(8,14.80657);
   hNCinFV_stack_11->SetBinContent(9,16.61843);
   hNCinFV_stack_11->SetBinContent(10,16.24006);
   hNCinFV_stack_11->SetBinContent(11,20.08806);
   hNCinFV_stack_11->SetBinContent(12,19.49115);
   hNCinFV_stack_11->SetBinContent(13,17.8329);
   hNCinFV_stack_11->SetBinContent(14,10.89701);
   hNCinFV_stack_11->SetBinContent(15,10.64704);
   hNCinFV_stack_11->SetBinContent(16,10.70199);
   hNCinFV_stack_11->SetBinContent(17,8.433426);
   hNCinFV_stack_11->SetBinContent(18,6.248774);
   hNCinFV_stack_11->SetBinContent(19,6.44887);
   hNCinFV_stack_11->SetBinContent(20,5.268578);
   hNCinFV_stack_11->SetBinContent(21,7.115701);
   hNCinFV_stack_11->SetBinContent(22,2.640747);
   hNCinFV_stack_11->SetBinContent(23,4.549576);
   hNCinFV_stack_11->SetBinContent(24,4.8365);
   hNCinFV_stack_11->SetBinContent(25,2.442341);
   hNCinFV_stack_11->SetBinContent(26,3.032487);
   hNCinFV_stack_11->SetBinContent(27,2.249007);
   hNCinFV_stack_11->SetBinContent(28,2.495594);
   hNCinFV_stack_11->SetBinContent(29,3.664661);
   hNCinFV_stack_11->SetBinContent(30,3.948204);
   hNCinFV_stack_11->SetBinContent(31,2.057363);
   hNCinFV_stack_11->SetBinContent(32,3.274611);
   hNCinFV_stack_11->SetBinContent(33,1.073786);
   hNCinFV_stack_11->SetBinContent(34,2.39585);
   hNCinFV_stack_11->SetBinContent(35,24.73123);
   hNCinFV_stack_11->SetBinError(1,1.287372);
   hNCinFV_stack_11->SetBinError(2,1.414892);
   hNCinFV_stack_11->SetBinError(3,1.414348);
   hNCinFV_stack_11->SetBinError(4,1.819651);
   hNCinFV_stack_11->SetBinError(5,1.942947);
   hNCinFV_stack_11->SetBinError(6,1.819833);
   hNCinFV_stack_11->SetBinError(7,1.922527);
   hNCinFV_stack_11->SetBinError(8,1.93323);
   hNCinFV_stack_11->SetBinError(9,2.010644);
   hNCinFV_stack_11->SetBinError(10,1.953409);
   hNCinFV_stack_11->SetBinError(11,2.229104);
   hNCinFV_stack_11->SetBinError(12,2.202309);
   hNCinFV_stack_11->SetBinError(13,2.150779);
   hNCinFV_stack_11->SetBinError(14,1.665757);
   hNCinFV_stack_11->SetBinError(15,1.665646);
   hNCinFV_stack_11->SetBinError(16,1.654301);
   hNCinFV_stack_11->SetBinError(17,1.500174);
   hNCinFV_stack_11->SetBinError(18,1.271618);
   hNCinFV_stack_11->SetBinError(19,1.287259);
   hNCinFV_stack_11->SetBinError(20,1.193672);
   hNCinFV_stack_11->SetBinError(21,1.37229);
   hNCinFV_stack_11->SetBinError(22,0.784705);
   hNCinFV_stack_11->SetBinError(23,1.019349);
   hNCinFV_stack_11->SetBinError(24,1.0923);
   hNCinFV_stack_11->SetBinError(25,0.759212);
   hNCinFV_stack_11->SetBinError(26,0.832162);
   hNCinFV_stack_11->SetBinError(27,0.7341869);
   hNCinFV_stack_11->SetBinError(28,0.7335366);
   hNCinFV_stack_11->SetBinError(29,0.9819618);
   hNCinFV_stack_11->SetBinError(30,1.056869);
   hNCinFV_stack_11->SetBinError(31,0.7087455);
   hNCinFV_stack_11->SetBinError(32,0.9424328);
   hNCinFV_stack_11->SetBinError(33,0.5557297);
   hNCinFV_stack_11->SetBinError(34,0.7857345);
   hNCinFV_stack_11->SetBinError(35,2.474803);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,9.087959);
   hnumuCCinFV_stack_12->SetBinContent(2,13.48665);
   hnumuCCinFV_stack_12->SetBinContent(3,10.92162);
   hnumuCCinFV_stack_12->SetBinContent(4,13.55231);
   hnumuCCinFV_stack_12->SetBinContent(5,15.16562);
   hnumuCCinFV_stack_12->SetBinContent(6,17.40502);
   hnumuCCinFV_stack_12->SetBinContent(7,18.15337);
   hnumuCCinFV_stack_12->SetBinContent(8,16.10848);
   hnumuCCinFV_stack_12->SetBinContent(9,20.00981);
   hnumuCCinFV_stack_12->SetBinContent(10,19.78643);
   hnumuCCinFV_stack_12->SetBinContent(11,23.70468);
   hnumuCCinFV_stack_12->SetBinContent(12,22.28462);
   hnumuCCinFV_stack_12->SetBinContent(13,19.237);
   hnumuCCinFV_stack_12->SetBinContent(14,20.90734);
   hnumuCCinFV_stack_12->SetBinContent(15,12.89947);
   hnumuCCinFV_stack_12->SetBinContent(16,11.52825);
   hnumuCCinFV_stack_12->SetBinContent(17,8.304765);
   hnumuCCinFV_stack_12->SetBinContent(18,6.419993);
   hnumuCCinFV_stack_12->SetBinContent(19,4.579577);
   hnumuCCinFV_stack_12->SetBinContent(20,6.106318);
   hnumuCCinFV_stack_12->SetBinContent(21,4.06616);
   hnumuCCinFV_stack_12->SetBinContent(22,5.488864);
   hnumuCCinFV_stack_12->SetBinContent(23,3.990866);
   hnumuCCinFV_stack_12->SetBinContent(24,3.27126);
   hnumuCCinFV_stack_12->SetBinContent(25,3.51989);
   hnumuCCinFV_stack_12->SetBinContent(26,2.904983);
   hnumuCCinFV_stack_12->SetBinContent(27,2.394159);
   hnumuCCinFV_stack_12->SetBinContent(28,2.835701);
   hnumuCCinFV_stack_12->SetBinContent(29,2.644128);
   hnumuCCinFV_stack_12->SetBinContent(30,1.953137);
   hnumuCCinFV_stack_12->SetBinContent(31,1.968501);
   hnumuCCinFV_stack_12->SetBinContent(32,2.599535);
   hnumuCCinFV_stack_12->SetBinContent(33,1.26712);
   hnumuCCinFV_stack_12->SetBinContent(34,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(35,16.46505);
   hnumuCCinFV_stack_12->SetBinError(1,2.026045);
   hnumuCCinFV_stack_12->SetBinError(2,2.623326);
   hnumuCCinFV_stack_12->SetBinError(3,1.83624);
   hnumuCCinFV_stack_12->SetBinError(4,1.965378);
   hnumuCCinFV_stack_12->SetBinError(5,2.175852);
   hnumuCCinFV_stack_12->SetBinError(6,2.35094);
   hnumuCCinFV_stack_12->SetBinError(7,2.781289);
   hnumuCCinFV_stack_12->SetBinError(8,2.064036);
   hnumuCCinFV_stack_12->SetBinError(9,2.820068);
   hnumuCCinFV_stack_12->SetBinError(10,2.371126);
   hnumuCCinFV_stack_12->SetBinError(11,2.771675);
   hnumuCCinFV_stack_12->SetBinError(12,2.843996);
   hnumuCCinFV_stack_12->SetBinError(13,2.335202);
   hnumuCCinFV_stack_12->SetBinError(14,3.016604);
   hnumuCCinFV_stack_12->SetBinError(15,1.886147);
   hnumuCCinFV_stack_12->SetBinError(16,1.753951);
   hnumuCCinFV_stack_12->SetBinError(17,1.498127);
   hnumuCCinFV_stack_12->SetBinError(18,1.300597);
   hnumuCCinFV_stack_12->SetBinError(19,1.119198);
   hnumuCCinFV_stack_12->SetBinError(20,1.275425);
   hnumuCCinFV_stack_12->SetBinError(21,1.084925);
   hnumuCCinFV_stack_12->SetBinError(22,1.252613);
   hnumuCCinFV_stack_12->SetBinError(23,2.316168);
   hnumuCCinFV_stack_12->SetBinError(24,0.9316695);
   hnumuCCinFV_stack_12->SetBinError(25,1.005031);
   hnumuCCinFV_stack_12->SetBinError(26,0.8686082);
   hnumuCCinFV_stack_12->SetBinError(27,0.785313);
   hnumuCCinFV_stack_12->SetBinError(28,0.8096503);
   hnumuCCinFV_stack_12->SetBinError(29,0.7855485);
   hnumuCCinFV_stack_12->SetBinError(30,0.7221045);
   hnumuCCinFV_stack_12->SetBinError(31,0.6710792);
   hnumuCCinFV_stack_12->SetBinError(32,0.7644756);
   hnumuCCinFV_stack_12->SetBinError(33,0.5883944);
   hnumuCCinFV_stack_12->SetBinError(34,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(35,2.009187);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.748128);
   hnueCCinFV_stack_13->SetBinContent(2,3.602393);
   hnueCCinFV_stack_13->SetBinContent(3,3.348938);
   hnueCCinFV_stack_13->SetBinContent(4,1.740889);
   hnueCCinFV_stack_13->SetBinContent(5,0.9801958);
   hnueCCinFV_stack_13->SetBinContent(6,2.820048);
   hnueCCinFV_stack_13->SetBinContent(7,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(8,1.974841);
   hnueCCinFV_stack_13->SetBinContent(9,2.252517);
   hnueCCinFV_stack_13->SetBinContent(10,1.019172);
   hnueCCinFV_stack_13->SetBinContent(11,1.909141);
   hnueCCinFV_stack_13->SetBinContent(12,1.209602);
   hnueCCinFV_stack_13->SetBinContent(13,1.55858);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,1.607187);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_13->SetBinContent(18,0.4505813);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(23,1.393971);
   hnueCCinFV_stack_13->SetBinContent(25,0.196839);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.5008826);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(35,3.601262);
   hnueCCinFV_stack_13->SetBinError(1,1.155548);
   hnueCCinFV_stack_13->SetBinError(2,1.707316);
   hnueCCinFV_stack_13->SetBinError(3,1.048355);
   hnueCCinFV_stack_13->SetBinError(4,0.8830779);
   hnueCCinFV_stack_13->SetBinError(5,0.4383608);
   hnueCCinFV_stack_13->SetBinError(6,1.438196);
   hnueCCinFV_stack_13->SetBinError(7,0.4575996);
   hnueCCinFV_stack_13->SetBinError(8,0.7951725);
   hnueCCinFV_stack_13->SetBinError(9,1.287368);
   hnueCCinFV_stack_13->SetBinError(10,0.5199676);
   hnueCCinFV_stack_13->SetBinError(11,0.7705845);
   hnueCCinFV_stack_13->SetBinError(12,0.5781583);
   hnueCCinFV_stack_13->SetBinError(13,0.8480054);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.6947991);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.4715374);
   hnueCCinFV_stack_13->SetBinError(18,0.3211617);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(23,0.7125256);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3622357);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(35,1.305561);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__11->SetBinContent(1,95.82168);
   hmcerror__11->SetBinContent(2,151.0135);
   hmcerror__11->SetBinContent(3,183.3389);
   hmcerror__11->SetBinContent(4,190.7764);
   hmcerror__11->SetBinContent(5,204.1983);
   hmcerror__11->SetBinContent(6,229.1946);
   hmcerror__11->SetBinContent(7,253.7482);
   hmcerror__11->SetBinContent(8,248.756);
   hmcerror__11->SetBinContent(9,300.5753);
   hmcerror__11->SetBinContent(10,367.6077);
   hmcerror__11->SetBinContent(11,407.3709);
   hmcerror__11->SetBinContent(12,441.1241);
   hmcerror__11->SetBinContent(13,410.2956);
   hmcerror__11->SetBinContent(14,287.1302);
   hmcerror__11->SetBinContent(15,181.6902);
   hmcerror__11->SetBinContent(16,128.622);
   hmcerror__11->SetBinContent(17,90.2962);
   hmcerror__11->SetBinContent(18,69.42815);
   hmcerror__11->SetBinContent(19,59.68763);
   hmcerror__11->SetBinContent(20,55.83698);
   hmcerror__11->SetBinContent(21,50.50047);
   hmcerror__11->SetBinContent(22,38.47994);
   hmcerror__11->SetBinContent(23,37.50506);
   hmcerror__11->SetBinContent(24,34.13008);
   hmcerror__11->SetBinContent(25,27.41425);
   hmcerror__11->SetBinContent(26,26.90403);
   hmcerror__11->SetBinContent(27,25.99736);
   hmcerror__11->SetBinContent(28,19.54008);
   hmcerror__11->SetBinContent(29,22.64116);
   hmcerror__11->SetBinContent(30,22.30869);
   hmcerror__11->SetBinContent(31,15.8644);
   hmcerror__11->SetBinContent(32,14.43921);
   hmcerror__11->SetBinContent(33,11.73138);
   hmcerror__11->SetBinContent(34,12.45837);
   hmcerror__11->SetBinContent(35,120.8362);
   hmcerror__11->SetBinError(1,33.10027);
   hmcerror__11->SetBinError(2,49.8594);
   hmcerror__11->SetBinError(3,44.94576);
   hmcerror__11->SetBinError(4,50.42446);
   hmcerror__11->SetBinError(5,55.73284);
   hmcerror__11->SetBinError(6,53.40466);
   hmcerror__11->SetBinError(7,85.09472);
   hmcerror__11->SetBinError(8,59.14876);
   hmcerror__11->SetBinError(9,78.46426);
   hmcerror__11->SetBinError(10,99.27957);
   hmcerror__11->SetBinError(11,104.5929);
   hmcerror__11->SetBinError(12,111.9879);
   hmcerror__11->SetBinError(13,100.6215);
   hmcerror__11->SetBinError(14,82.29305);
   hmcerror__11->SetBinError(15,52.18303);
   hmcerror__11->SetBinError(16,40.16797);
   hmcerror__11->SetBinError(17,27.04161);
   hmcerror__11->SetBinError(18,23.44011);
   hmcerror__11->SetBinError(19,21.0858);
   hmcerror__11->SetBinError(20,24.10708);
   hmcerror__11->SetBinError(21,24.15524);
   hmcerror__11->SetBinError(22,15.53702);
   hmcerror__11->SetBinError(23,19.21942);
   hmcerror__11->SetBinError(24,15.4806);
   hmcerror__11->SetBinError(25,16.16781);
   hmcerror__11->SetBinError(26,15.4337);
   hmcerror__11->SetBinError(27,13.15734);
   hmcerror__11->SetBinError(28,11.08204);
   hmcerror__11->SetBinError(29,12.0033);
   hmcerror__11->SetBinError(30,12.31692);
   hmcerror__11->SetBinError(31,10.49601);
   hmcerror__11->SetBinError(32,11.33992);
   hmcerror__11->SetBinError(33,8.043592);
   hmcerror__11->SetBinError(34,10.44713);
   hmcerror__11->SetBinError(35,56.03539);
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
   
   Double_t _fx3013[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3013[34] = {
   108,
   151,
   176,
   175,
   208,
   222,
   252,
   267,
   285,
   391,
   367,
   454,
   400,
   214,
   183,
   101,
   77,
   62,
   55,
   45,
   34,
   48,
   43,
   27,
   19,
   24,
   24,
   12,
   16,
   16,
   16,
   16,
   12,
   3};
   Double_t _felx3013[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3013[34] = {
   10.3923,
   12.28821,
   13.2665,
   13.22876,
   14.42221,
   14.89966,
   15.87451,
   16.34013,
   16.88194,
   19.77372,
   19.15724,
   21.30728,
   20,
   14.62874,
   13.52775,
   10.04988,
   8.8995,
   8.0018,
   7.546,
   6.8416,
   5.9703,
   7.0604,
   6.6917,
   5.3414,
   4.5151,
   5.0476,
   5.0476,
   3.64022,
   4.1628,
   4.1628,
   4.1628,
   4.1628,
   3.64022,
   2.143368};
   Double_t _fehx3013[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3013[34] = {
   10.3923,
   12.28821,
   13.2665,
   13.22876,
   14.42221,
   14.89966,
   15.87451,
   16.34013,
   16.88194,
   19.77372,
   19.15724,
   21.30728,
   20,
   14.62874,
   13.52775,
   10.04988,
   8.6976,
   7.7989,
   7.3425,
   6.637,
   5.7635,
   6.8561,
   6.4868,
   5.1322,
   4.3011,
   4.837,
   4.837,
   3.4155,
   3.9454,
   3.9454,
   3.9454,
   3.9454,
   3.4155,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(0.7709688);
   Graph_Graph3013->SetMaximum(522.7523);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4503.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 480.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 576.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  102.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1673.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  333.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 698.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 288.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 329.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 34.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3014[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3014[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3014[34] = {
   0.3454361,
   0.3301652,
   0.2451513,
   0.2643118,
   0.2729349,
   0.2330101,
   0.335351,
   0.2377783,
   0.261047,
   0.2700693,
   0.2567509,
   0.2538693,
   0.2452414,
   0.2866054,
   0.2872088,
   0.3122947,
   0.2994767,
   0.3376168,
   0.3532691,
   0.4317404,
   0.478317,
   0.4037693,
   0.5124487,
   0.4535763,
   0.5897592,
   0.5736575,
   0.506103,
   0.5671439,
   0.5301542,
   0.552113,
   0.6616082,
   0.7853565,
   0.6856473,
   0.8385633};
   Double_t _fehx3014[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3014[34] = {
   0.3454361,
   0.3301652,
   0.2451513,
   0.2643118,
   0.2729349,
   0.2330101,
   0.335351,
   0.2377783,
   0.261047,
   0.2700693,
   0.2567509,
   0.2538693,
   0.2452414,
   0.2866054,
   0.2872088,
   0.3122947,
   0.2994767,
   0.3376168,
   0.3532691,
   0.4317404,
   0.478317,
   0.4037693,
   0.5124487,
   0.4535763,
   0.5897592,
   0.5736575,
   0.506103,
   0.5671439,
   0.5301542,
   0.552113,
   0.6616082,
   0.7853565,
   0.6856473,
   0.8385633};
   grae = new TGraphAsymmErrors(34,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3015[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3015[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3015[34] = {
   0.1748883,
   0.1933792,
   0.1778112,
   0.1820096,
   0.1883324,
   0.1844178,
   0.1912818,
   0.1924991,
   0.2021021,
   0.2114051,
   0.2234089,
   0.218023,
   0.2175136,
   0.2215155,
   0.2191872,
   0.2334645,
   0.2373412,
   0.2460945,
   0.2415407,
   0.2297383,
   0.2575544,
   0.2431264,
   0.2762266,
   0.2717337,
   0.2769109,
   0.2672196,
   0.2551923,
   0.2613531,
   0.2806766,
   0.2666044,
   0.3096208,
   0.2861378,
   0.3433263,
   0.3411464};
   Double_t _fehx3015[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3015[34] = {
   0.1748883,
   0.1933792,
   0.1778112,
   0.1820096,
   0.1883324,
   0.1844178,
   0.1912818,
   0.1924991,
   0.2021021,
   0.2114051,
   0.2234089,
   0.218023,
   0.2175136,
   0.2215155,
   0.2191872,
   0.2334645,
   0.2373412,
   0.2460945,
   0.2415407,
   0.2297383,
   0.2575544,
   0.2431264,
   0.2762266,
   0.2717337,
   0.2769109,
   0.2672196,
   0.2551923,
   0.2613531,
   0.2806766,
   0.2666044,
   0.3096208,
   0.2861378,
   0.3433263,
   0.3411464};
   grae = new TGraphAsymmErrors(34,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
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
   
   Double_t _fx3016[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3016[34] = {
   1.127094,
   0.9999107,
   0.9599709,
   0.917304,
   1.018618,
   0.9686092,
   0.9931104,
   1.073341,
   0.9481818,
   1.063634,
   0.900899,
   1.029189,
   0.9749069,
   0.7453066,
   1.007209,
   0.7852464,
   0.852749,
   0.8930095,
   0.921464,
   0.8059176,
   0.673261,
   1.247403,
   1.146512,
   0.791091,
   0.6930701,
   0.8920596,
   0.9231707,
   0.6141222,
   0.7066777,
   0.7172092,
   1.008548,
   1.108094,
   1.022897,
   0.2408021};
   Double_t _felx3016[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3016[34] = {
   0.1084546,
   0.08137158,
   0.07236053,
   0.06934167,
   0.07062844,
   0.06500879,
   0.06256007,
   0.06568741,
   0.05616544,
   0.05379027,
   0.04702654,
   0.04830222,
   0.04874534,
   0.05094811,
   0.07445503,
   0.07813494,
   0.09855896,
   0.115253,
   0.1264249,
   0.1225281,
   0.1182227,
   0.1834826,
   0.1784212,
   0.1565012,
   0.164699,
   0.187615,
   0.1941582,
   0.186295,
   0.1838599,
   0.1865999,
   0.2623989,
   0.2882984,
   0.3102976,
   0.1720425};
   Double_t _fehx3016[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3016[34] = {
   0.1084546,
   0.08137158,
   0.07236053,
   0.06934167,
   0.07062844,
   0.06500879,
   0.06256007,
   0.06568741,
   0.05616544,
   0.05379027,
   0.04702654,
   0.04830222,
   0.04874534,
   0.05094811,
   0.07445503,
   0.07813494,
   0.09632299,
   0.1123305,
   0.1230154,
   0.1188639,
   0.1141276,
   0.1781733,
   0.172958,
   0.1503717,
   0.1568928,
   0.1797872,
   0.1860574,
   0.1747945,
   0.1742579,
   0.1768548,
   0.2486953,
   0.2732422,
   0.2911421,
   0.1383986};
   grae = new TGraphAsymmErrors(34,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0.06188362);
   Graph_Graph3016->SetMaximum(1.561258);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
