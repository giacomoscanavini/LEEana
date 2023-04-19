#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Mar 13 18:29:34 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-2.024187,163.3333,223.8325);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__22->SetBinContent(0,0.7319179);
   hmc__22->SetBinContent(1,0.5884556);
   hmc__22->SetBinContent(2,17.98375);
   hmc__22->SetBinContent(3,52.94394);
   hmc__22->SetBinContent(4,74.2037);
   hmc__22->SetBinContent(5,58.57977);
   hmc__22->SetBinContent(6,45.02692);
   hmc__22->SetBinContent(7,34.67377);
   hmc__22->SetBinContent(8,36.2118);
   hmc__22->SetBinContent(9,32.29539);
   hmc__22->SetBinContent(10,30.9102);
   hmc__22->SetBinContent(11,29.91963);
   hmc__22->SetBinContent(12,32.76183);
   hmc__22->SetBinContent(13,31.37368);
   hmc__22->SetBinContent(14,29.56096);
   hmc__22->SetBinContent(15,35.14275);
   hmc__22->SetBinContent(16,35.0355);
   hmc__22->SetBinContent(17,35.32852);
   hmc__22->SetBinContent(18,40.66271);
   hmc__22->SetBinContent(19,48.10412);
   hmc__22->SetBinContent(20,52.62689);
   hmc__22->SetBinContent(21,62.02602);
   hmc__22->SetBinContent(22,91.6781);
   hmc__22->SetBinContent(23,100.806);
   hmc__22->SetBinContent(24,101.2094);
   hmc__22->SetBinContent(25,41.67935);
   hmc__22->SetBinContent(26,1.448055);
   hmc__22->SetBinContent(27,0.7447861);
   hmc__22->SetBinError(0,0.438694);
   hmc__22->SetBinError(1,1.26207);
   hmc__22->SetBinError(2,13.90953);
   hmc__22->SetBinError(3,19.33214);
   hmc__22->SetBinError(4,24.75156);
   hmc__22->SetBinError(5,23.72995);
   hmc__22->SetBinError(6,16.62302);
   hmc__22->SetBinError(7,17.64481);
   hmc__22->SetBinError(8,14.52483);
   hmc__22->SetBinError(9,13.24369);
   hmc__22->SetBinError(10,14.51884);
   hmc__22->SetBinError(11,14.33981);
   hmc__22->SetBinError(12,14.66909);
   hmc__22->SetBinError(13,14.328);
   hmc__22->SetBinError(14,12.25269);
   hmc__22->SetBinError(15,24.15664);
   hmc__22->SetBinError(16,16.28952);
   hmc__22->SetBinError(17,13.76605);
   hmc__22->SetBinError(18,15.23139);
   hmc__22->SetBinError(19,16.35326);
   hmc__22->SetBinError(20,15.08907);
   hmc__22->SetBinError(21,21.34846);
   hmc__22->SetBinError(22,27.52857);
   hmc__22->SetBinError(23,21.72297);
   hmc__22->SetBinError(24,23.68335);
   hmc__22->SetBinError(25,29.08648);
   hmc__22->SetBinError(26,2.931409);
   hmc__22->SetBinError(27,5.682938);
   hmc__22->SetMinimum(-2.024187);
   hmc__22->SetMaximum(212.5397);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",26,-130,130);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(106.2699);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,0.536893);
   hbadmatch_stack_1->SetBinContent(3,0.5884556);
   hbadmatch_stack_1->SetBinContent(4,3.545958);
   hbadmatch_stack_1->SetBinContent(5,1.334252);
   hbadmatch_stack_1->SetBinContent(6,1.123658);
   hbadmatch_stack_1->SetBinContent(7,0.3934307);
   hbadmatch_stack_1->SetBinContent(8,1.464678);
   hbadmatch_stack_1->SetBinContent(9,1.127039);
   hbadmatch_stack_1->SetBinContent(10,0.5587807);
   hbadmatch_stack_1->SetBinContent(11,1.322064);
   hbadmatch_stack_1->SetBinContent(12,1.42989);
   hbadmatch_stack_1->SetBinContent(13,2.026182);
   hbadmatch_stack_1->SetBinContent(14,0.4781666);
   hbadmatch_stack_1->SetBinContent(15,1.645333);
   hbadmatch_stack_1->SetBinContent(16,1.123658);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,3.438852);
   hbadmatch_stack_1->SetBinContent(19,2.891277);
   hbadmatch_stack_1->SetBinContent(20,2.905539);
   hbadmatch_stack_1->SetBinContent(21,1.831382);
   hbadmatch_stack_1->SetBinContent(22,2.613758);
   hbadmatch_stack_1->SetBinContent(23,2.759199);
   hbadmatch_stack_1->SetBinContent(24,2.730226);
   hbadmatch_stack_1->SetBinContent(25,1.118515);
   hbadmatch_stack_1->SetBinError(2,0.3929602);
   hbadmatch_stack_1->SetBinError(3,0.3397478);
   hbadmatch_stack_1->SetBinError(4,1.018618);
   hbadmatch_stack_1->SetBinError(5,0.68732);
   hbadmatch_stack_1->SetBinError(6,0.5188295);
   hbadmatch_stack_1->SetBinError(7,0.2781975);
   hbadmatch_stack_1->SetBinError(8,1.106781);
   hbadmatch_stack_1->SetBinError(9,0.5201044);
   hbadmatch_stack_1->SetBinError(10,0.4043614);
   hbadmatch_stack_1->SetBinError(11,0.5554667);
   hbadmatch_stack_1->SetBinError(12,0.7558499);
   hbadmatch_stack_1->SetBinError(13,0.7416095);
   hbadmatch_stack_1->SetBinError(14,0.3433827);
   hbadmatch_stack_1->SetBinError(15,0.6990273);
   hbadmatch_stack_1->SetBinError(16,0.5188295);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,1.002624);
   hbadmatch_stack_1->SetBinError(19,0.9470643);
   hbadmatch_stack_1->SetBinError(20,0.928379);
   hbadmatch_stack_1->SetBinError(21,0.7155152);
   hbadmatch_stack_1->SetBinError(22,0.8657774);
   hbadmatch_stack_1->SetBinError(23,0.8166096);
   hbadmatch_stack_1->SetBinError(24,0.8901387);
   hbadmatch_stack_1->SetBinError(25,0.5730914);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,2.110787);
   hext_stack_2->SetBinContent(5,1.544194);
   hext_stack_2->SetBinContent(6,0.3243973);
   hext_stack_2->SetBinContent(7,2.103607);
   hext_stack_2->SetBinContent(8,3.875635);
   hext_stack_2->SetBinContent(9,3.062438);
   hext_stack_2->SetBinContent(10,2.663019);
   hext_stack_2->SetBinContent(11,1.868591);
   hext_stack_2->SetBinContent(12,3.076798);
   hext_stack_2->SetBinContent(13,2.27519);
   hext_stack_2->SetBinContent(14,3.159);
   hext_stack_2->SetBinContent(15,5.281377);
   hext_stack_2->SetBinContent(16,5.109793);
   hext_stack_2->SetBinContent(17,9.883599);
   hext_stack_2->SetBinContent(18,8.235662);
   hext_stack_2->SetBinContent(19,11.81562);
   hext_stack_2->SetBinContent(20,15.15339);
   hext_stack_2->SetBinContent(21,15.65655);
   hext_stack_2->SetBinContent(22,28.11378);
   hext_stack_2->SetBinContent(23,30.68742);
   hext_stack_2->SetBinContent(24,31.606);
   hext_stack_2->SetBinContent(25,11.33841);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.8669371);
   hext_stack_2->SetBinError(5,0.7753719);
   hext_stack_2->SetBinError(6,0.3243973);
   hext_stack_2->SetBinError(7,0.9761052);
   hext_stack_2->SetBinError(8,1.414755);
   hext_stack_2->SetBinError(9,1.292627);
   hext_stack_2->SetBinError(10,1.142086);
   hext_stack_2->SetBinError(11,0.840497);
   hext_stack_2->SetBinError(12,1.126269);
   hext_stack_2->SetBinError(13,0.9336798);
   hext_stack_2->SetBinError(14,1.152637);
   hext_stack_2->SetBinError(15,1.41918);
   hext_stack_2->SetBinError(16,1.447444);
   hext_stack_2->SetBinError(17,2.037409);
   hext_stack_2->SetBinError(18,2.023203);
   hext_stack_2->SetBinError(19,2.277025);
   hext_stack_2->SetBinError(20,2.496235);
   hext_stack_2->SetBinError(21,2.460528);
   hext_stack_2->SetBinError(22,3.413313);
   hext_stack_2->SetBinError(23,3.618864);
   hext_stack_2->SetBinError(24,3.654416);
   hext_stack_2->SetBinError(25,2.212092);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(3,1.334496);
   hdirt_stack_3->SetBinContent(4,1.052121);
   hdirt_stack_3->SetBinContent(5,0.6273471);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,1.285084);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.327738);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.9140499);
   hdirt_stack_3->SetBinContent(13,0.1564614);
   hdirt_stack_3->SetBinContent(14,0.4737118);
   hdirt_stack_3->SetBinContent(16,0.9673651);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.4950385);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.9140499);
   hdirt_stack_3->SetBinContent(21,1.699436);
   hdirt_stack_3->SetBinContent(22,3.024554);
   hdirt_stack_3->SetBinContent(23,2.847161);
   hdirt_stack_3->SetBinContent(24,0.7759784);
   hdirt_stack_3->SetBinContent(25,1.932407);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(3,0.6307253);
   hdirt_stack_3->SetBinError(4,0.4983258);
   hdirt_stack_3->SetBinError(5,0.3928349);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.9635251);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2290571);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.4788161);
   hdirt_stack_3->SetBinError(13,0.1564614);
   hdirt_stack_3->SetBinError(14,0.3359264);
   hdirt_stack_3->SetBinError(16,0.4867938);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.2933304);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4788161);
   hdirt_stack_3->SetBinError(21,0.6594528);
   hdirt_stack_3->SetBinError(22,1.015435);
   hdirt_stack_3->SetBinError(23,0.9056961);
   hdirt_stack_3->SetBinError(24,0.458477);
   hdirt_stack_3->SetBinError(25,0.7716319);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,0.3917402);
   houtFV_stack_4->SetBinContent(2,13.0976);
   houtFV_stack_4->SetBinContent(3,22.5434);
   houtFV_stack_4->SetBinContent(4,15.46429);
   houtFV_stack_4->SetBinContent(5,13.37287);
   houtFV_stack_4->SetBinContent(6,10.25131);
   houtFV_stack_4->SetBinContent(7,5.820084);
   houtFV_stack_4->SetBinContent(8,6.868372);
   houtFV_stack_4->SetBinContent(9,7.22926);
   houtFV_stack_4->SetBinContent(10,7.374122);
   houtFV_stack_4->SetBinContent(11,6.265664);
   houtFV_stack_4->SetBinContent(12,6.196977);
   houtFV_stack_4->SetBinContent(13,6.862358);
   houtFV_stack_4->SetBinContent(14,6.001574);
   houtFV_stack_4->SetBinContent(15,5.164652);
   houtFV_stack_4->SetBinContent(16,5.09285);
   houtFV_stack_4->SetBinContent(17,6.338487);
   houtFV_stack_4->SetBinContent(18,6.37992);
   houtFV_stack_4->SetBinContent(19,6.921244);
   houtFV_stack_4->SetBinContent(20,5.615679);
   houtFV_stack_4->SetBinContent(21,11.49971);
   houtFV_stack_4->SetBinContent(22,12.4563);
   houtFV_stack_4->SetBinContent(23,15.20019);
   houtFV_stack_4->SetBinContent(24,23.1078);
   houtFV_stack_4->SetBinContent(25,19.42809);
   houtFV_stack_4->SetBinContent(26,0.7319179);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,0.2770047);
   houtFV_stack_4->SetBinError(2,1.793621);
   houtFV_stack_4->SetBinError(3,2.428472);
   houtFV_stack_4->SetBinError(4,1.972519);
   houtFV_stack_4->SetBinError(5,1.873491);
   houtFV_stack_4->SetBinError(6,1.638369);
   houtFV_stack_4->SetBinError(7,1.177542);
   houtFV_stack_4->SetBinError(8,1.276276);
   houtFV_stack_4->SetBinError(9,1.40263);
   houtFV_stack_4->SetBinError(10,1.37363);
   houtFV_stack_4->SetBinError(11,1.709728);
   houtFV_stack_4->SetBinError(12,1.232121);
   houtFV_stack_4->SetBinError(13,1.295897);
   houtFV_stack_4->SetBinError(14,1.197333);
   houtFV_stack_4->SetBinError(15,1.146094);
   houtFV_stack_4->SetBinError(16,1.121554);
   houtFV_stack_4->SetBinError(17,1.26254);
   houtFV_stack_4->SetBinError(18,1.245255);
   houtFV_stack_4->SetBinError(19,1.360443);
   houtFV_stack_4->SetBinError(20,1.126327);
   houtFV_stack_4->SetBinError(21,1.937445);
   houtFV_stack_4->SetBinError(22,1.825688);
   houtFV_stack_4->SetBinError(23,1.993102);
   houtFV_stack_4->SetBinError(24,2.46444);
   houtFV_stack_4->SetBinError(25,2.240041);
   houtFV_stack_4->SetBinError(26,0.438694);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.50752);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6412039);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.920372);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.519226);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.744426);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4992894);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2532885);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3235708);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3763946);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5019466);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1012383);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.437022);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.52881);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.66706);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.54516);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.519741);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.185095);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.367946);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.186264);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.102395);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.121918);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.140506);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.16691);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.219133);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.634664);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.671278);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.81161);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.534681);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.606428);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.262826);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.572973);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.11529);
   hNCpi0inFVres_stack_7->SetBinContent(23,16.58014);
   hNCpi0inFVres_stack_7->SetBinContent(24,14.05968);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.007312);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3809346);
   hNCpi0inFVres_stack_7->SetBinError(3,1.059934);
   hNCpi0inFVres_stack_7->SetBinError(4,1.23622);
   hNCpi0inFVres_stack_7->SetBinError(5,1.058341);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9491205);
   hNCpi0inFVres_stack_7->SetBinError(7,0.670283);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7296415);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7307964);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7063775);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8273025);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6215764);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6175453);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4792015);
   hNCpi0inFVres_stack_7->SetBinError(15,0.806578);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7295085);
   hNCpi0inFVres_stack_7->SetBinError(17,0.745212);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7419837);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7643768);
   hNCpi0inFVres_stack_7->SetBinError(20,0.839522);
   hNCpi0inFVres_stack_7->SetBinError(21,0.972448);
   hNCpi0inFVres_stack_7->SetBinError(22,1.132053);
   hNCpi0inFVres_stack_7->SetBinError(23,1.309356);
   hNCpi0inFVres_stack_7->SetBinError(24,1.316644);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4413619);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.561239);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.11635);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.941798);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.14698);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.868476);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.06328);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.617376);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.102054);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.185922);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.394008);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.435526);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.33904);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.281744);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.393344);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.841744);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.924276);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.34228);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.692362);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.86317);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.015792);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.9060901);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.321458);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7560573);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5102767);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4810939);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4212073);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4786607);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2420254);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4128074);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3209538);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3716255);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3625241);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3732797);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3861776);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3765671);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3806789);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5112937);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4230513);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4867239);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5402861);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6458371);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6887559);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3332495);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(2,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(3,8.059549);
   hCCpi0inFV_stack_10->SetBinContent(4,17.68857);
   hCCpi0inFV_stack_10->SetBinContent(5,16.15718);
   hCCpi0inFV_stack_10->SetBinContent(6,12.15225);
   hCCpi0inFV_stack_10->SetBinContent(7,8.523515);
   hCCpi0inFV_stack_10->SetBinContent(8,9.216427);
   hCCpi0inFV_stack_10->SetBinContent(9,9.223284);
   hCCpi0inFV_stack_10->SetBinContent(10,8.349936);
   hCCpi0inFV_stack_10->SetBinContent(11,5.080178);
   hCCpi0inFV_stack_10->SetBinContent(12,9.159276);
   hCCpi0inFV_stack_10->SetBinContent(13,7.991103);
   hCCpi0inFV_stack_10->SetBinContent(14,6.382835);
   hCCpi0inFV_stack_10->SetBinContent(15,8.566626);
   hCCpi0inFV_stack_10->SetBinContent(16,9.179826);
   hCCpi0inFV_stack_10->SetBinContent(17,6.240929);
   hCCpi0inFV_stack_10->SetBinContent(18,8.712317);
   hCCpi0inFV_stack_10->SetBinContent(19,10.46967);
   hCCpi0inFV_stack_10->SetBinContent(20,10.00702);
   hCCpi0inFV_stack_10->SetBinContent(21,10.23331);
   hCCpi0inFV_stack_10->SetBinContent(22,13.9906);
   hCCpi0inFV_stack_10->SetBinContent(23,14.32769);
   hCCpi0inFV_stack_10->SetBinContent(24,11.21245);
   hCCpi0inFV_stack_10->SetBinContent(25,2.368694);
   hCCpi0inFV_stack_10->SetBinContent(26,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(0,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(2,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(3,1.456121);
   hCCpi0inFV_stack_10->SetBinError(4,2.137647);
   hCCpi0inFV_stack_10->SetBinError(5,2.015571);
   hCCpi0inFV_stack_10->SetBinError(6,1.746999);
   hCCpi0inFV_stack_10->SetBinError(7,1.445784);
   hCCpi0inFV_stack_10->SetBinError(8,1.550299);
   hCCpi0inFV_stack_10->SetBinError(9,1.551494);
   hCCpi0inFV_stack_10->SetBinError(10,1.462305);
   hCCpi0inFV_stack_10->SetBinError(11,1.182239);
   hCCpi0inFV_stack_10->SetBinError(12,1.524573);
   hCCpi0inFV_stack_10->SetBinError(13,1.440714);
   hCCpi0inFV_stack_10->SetBinError(14,1.245777);
   hCCpi0inFV_stack_10->SetBinError(15,1.486543);
   hCCpi0inFV_stack_10->SetBinError(16,1.545363);
   hCCpi0inFV_stack_10->SetBinError(17,1.346228);
   hCCpi0inFV_stack_10->SetBinError(18,1.436891);
   hCCpi0inFV_stack_10->SetBinError(19,1.681432);
   hCCpi0inFV_stack_10->SetBinError(20,1.64254);
   hCCpi0inFV_stack_10->SetBinError(21,1.553459);
   hCCpi0inFV_stack_10->SetBinError(22,1.798221);
   hCCpi0inFV_stack_10->SetBinError(23,1.846639);
   hCCpi0inFV_stack_10->SetBinError(24,1.714944);
   hCCpi0inFV_stack_10->SetBinError(25,0.7273567);
   hCCpi0inFV_stack_10->SetBinError(26,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3401776);
   hNCinFV_stack_11->SetBinContent(3,2.734337);
   hNCinFV_stack_11->SetBinContent(4,3.852923);
   hNCinFV_stack_11->SetBinContent(5,4.591603);
   hNCinFV_stack_11->SetBinContent(6,2.980925);
   hNCinFV_stack_11->SetBinContent(7,2.394159);
   hNCinFV_stack_11->SetBinContent(8,1.465526);
   hNCinFV_stack_11->SetBinContent(9,1.515398);
   hNCinFV_stack_11->SetBinContent(10,0.7319179);
   hNCinFV_stack_11->SetBinContent(11,2.932743);
   hNCinFV_stack_11->SetBinContent(12,1.517089);
   hNCinFV_stack_11->SetBinContent(13,1.465526);
   hNCinFV_stack_11->SetBinContent(14,1.805704);
   hNCinFV_stack_11->SetBinContent(15,2.339216);
   hNCinFV_stack_11->SetBinContent(16,0.9286332);
   hNCinFV_stack_11->SetBinContent(17,1.26712);
   hNCinFV_stack_11->SetBinContent(18,0.9286332);
   hNCinFV_stack_11->SetBinContent(19,2.197444);
   hNCinFV_stack_11->SetBinContent(20,1.268811);
   hNCinFV_stack_11->SetBinContent(21,1.907138);
   hNCinFV_stack_11->SetBinContent(22,3.229203);
   hNCinFV_stack_11->SetBinContent(23,3.322793);
   hNCinFV_stack_11->SetBinContent(24,3.657898);
   hNCinFV_stack_11->SetBinContent(25,0.975584);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.8558255);
   hNCinFV_stack_11->SetBinError(4,0.9998173);
   hNCinFV_stack_11->SetBinError(5,1.09304);
   hNCinFV_stack_11->SetBinError(6,0.8552677);
   hNCinFV_stack_11->SetBinError(7,0.785313);
   hNCinFV_stack_11->SetBinError(8,0.6209405);
   hNCinFV_stack_11->SetBinError(9,0.588146);
   hNCinFV_stack_11->SetBinError(10,0.438694);
   hNCinFV_stack_11->SetBinError(11,0.8785195);
   hNCinFV_stack_11->SetBinError(12,0.5887087);
   hNCinFV_stack_11->SetBinError(13,0.6209405);
   hNCinFV_stack_11->SetBinError(14,0.7080169);
   hNCinFV_stack_11->SetBinError(15,0.8089383);
   hNCinFV_stack_11->SetBinError(16,0.48078);
   hNCinFV_stack_11->SetBinError(17,0.5883944);
   hNCinFV_stack_11->SetBinError(18,0.48078);
   hNCinFV_stack_11->SetBinError(19,0.760276);
   hNCinFV_stack_11->SetBinError(20,0.5889569);
   hNCinFV_stack_11->SetBinError(21,0.6501133);
   hNCinFV_stack_11->SetBinError(22,0.8550968);
   hNCinFV_stack_11->SetBinError(23,0.9207963);
   hNCinFV_stack_11->SetBinError(24,0.980612);
   hNCinFV_stack_11->SetBinError(25,0.483067);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2384555);
   hnumuCCinFV_stack_12->SetBinContent(3,3.900101);
   hnumuCCinFV_stack_12->SetBinContent(4,4.857376);
   hnumuCCinFV_stack_12->SetBinContent(5,5.62745);
   hnumuCCinFV_stack_12->SetBinContent(6,5.452818);
   hnumuCCinFV_stack_12->SetBinContent(7,6.207261);
   hnumuCCinFV_stack_12->SetBinContent(8,4.939762);
   hnumuCCinFV_stack_12->SetBinContent(9,3.701005);
   hnumuCCinFV_stack_12->SetBinContent(10,4.436373);
   hnumuCCinFV_stack_12->SetBinContent(11,3.844632);
   hnumuCCinFV_stack_12->SetBinContent(12,4.547042);
   hnumuCCinFV_stack_12->SetBinContent(13,5.007205);
   hnumuCCinFV_stack_12->SetBinContent(14,5.68863);
   hnumuCCinFV_stack_12->SetBinContent(15,4.796187);
   hnumuCCinFV_stack_12->SetBinContent(16,5.993381);
   hnumuCCinFV_stack_12->SetBinContent(17,3.884058);
   hnumuCCinFV_stack_12->SetBinContent(18,5.335341);
   hnumuCCinFV_stack_12->SetBinContent(19,4.822135);
   hnumuCCinFV_stack_12->SetBinContent(20,6.918397);
   hnumuCCinFV_stack_12->SetBinContent(21,7.865407);
   hnumuCCinFV_stack_12->SetBinContent(22,12.46608);
   hnumuCCinFV_stack_12->SetBinContent(23,8.874248);
   hnumuCCinFV_stack_12->SetBinContent(24,6.857175);
   hnumuCCinFV_stack_12->SetBinContent(25,1.451126);
   hnumuCCinFV_stack_12->SetBinError(2,0.2384555);
   hnumuCCinFV_stack_12->SetBinError(3,1.05548);
   hnumuCCinFV_stack_12->SetBinError(4,1.117902);
   hnumuCCinFV_stack_12->SetBinError(5,1.233054);
   hnumuCCinFV_stack_12->SetBinError(6,1.176385);
   hnumuCCinFV_stack_12->SetBinError(7,1.533821);
   hnumuCCinFV_stack_12->SetBinError(8,1.196893);
   hnumuCCinFV_stack_12->SetBinError(9,0.9089352);
   hnumuCCinFV_stack_12->SetBinError(10,1.039932);
   hnumuCCinFV_stack_12->SetBinError(11,1.104365);
   hnumuCCinFV_stack_12->SetBinError(12,1.151278);
   hnumuCCinFV_stack_12->SetBinError(13,1.190857);
   hnumuCCinFV_stack_12->SetBinError(14,1.26648);
   hnumuCCinFV_stack_12->SetBinError(15,1.149895);
   hnumuCCinFV_stack_12->SetBinError(16,1.254788);
   hnumuCCinFV_stack_12->SetBinError(17,0.9609861);
   hnumuCCinFV_stack_12->SetBinError(18,1.312631);
   hnumuCCinFV_stack_12->SetBinError(19,1.151968);
   hnumuCCinFV_stack_12->SetBinError(20,2.243191);
   hnumuCCinFV_stack_12->SetBinError(21,1.714039);
   hnumuCCinFV_stack_12->SetBinError(22,3.045459);
   hnumuCCinFV_stack_12->SetBinError(23,1.523265);
   hnumuCCinFV_stack_12->SetBinError(24,1.30744);
   hnumuCCinFV_stack_12->SetBinError(25,0.615344);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,2.089473);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3973506);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(11,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(14,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.7968681);
   hnueCCinFV_stack_13->SetBinContent(24,1.134888);
   hnueCCinFV_stack_13->SetBinError(4,1.29543);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2836451);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.1529246);
   hnueCCinFV_stack_13->SetBinError(11,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.2179626);
   hnueCCinFV_stack_13->SetBinError(14,0.3025491);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.569462);
   hnueCCinFV_stack_13->SetBinError(24,0.7930954);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__23->SetBinContent(0,0.7319179);
   hmcerror__23->SetBinContent(1,0.5884556);
   hmcerror__23->SetBinContent(2,17.98375);
   hmcerror__23->SetBinContent(3,52.94394);
   hmcerror__23->SetBinContent(4,74.2037);
   hmcerror__23->SetBinContent(5,58.57977);
   hmcerror__23->SetBinContent(6,45.02692);
   hmcerror__23->SetBinContent(7,34.67377);
   hmcerror__23->SetBinContent(8,36.2118);
   hmcerror__23->SetBinContent(9,32.29539);
   hmcerror__23->SetBinContent(10,30.9102);
   hmcerror__23->SetBinContent(11,29.91963);
   hmcerror__23->SetBinContent(12,32.76183);
   hmcerror__23->SetBinContent(13,31.37368);
   hmcerror__23->SetBinContent(14,29.56096);
   hmcerror__23->SetBinContent(15,35.14275);
   hmcerror__23->SetBinContent(16,35.0355);
   hmcerror__23->SetBinContent(17,35.32852);
   hmcerror__23->SetBinContent(18,40.66271);
   hmcerror__23->SetBinContent(19,48.10412);
   hmcerror__23->SetBinContent(20,52.62689);
   hmcerror__23->SetBinContent(21,62.02602);
   hmcerror__23->SetBinContent(22,91.6781);
   hmcerror__23->SetBinContent(23,100.806);
   hmcerror__23->SetBinContent(24,101.2094);
   hmcerror__23->SetBinContent(25,41.67935);
   hmcerror__23->SetBinContent(26,1.448055);
   hmcerror__23->SetBinContent(27,0.7447861);
   hmcerror__23->SetBinError(0,0.438694);
   hmcerror__23->SetBinError(1,1.26207);
   hmcerror__23->SetBinError(2,13.90953);
   hmcerror__23->SetBinError(3,19.33214);
   hmcerror__23->SetBinError(4,24.75156);
   hmcerror__23->SetBinError(5,23.72995);
   hmcerror__23->SetBinError(6,16.62302);
   hmcerror__23->SetBinError(7,17.64481);
   hmcerror__23->SetBinError(8,14.52483);
   hmcerror__23->SetBinError(9,13.24369);
   hmcerror__23->SetBinError(10,14.51884);
   hmcerror__23->SetBinError(11,14.33981);
   hmcerror__23->SetBinError(12,14.66909);
   hmcerror__23->SetBinError(13,14.328);
   hmcerror__23->SetBinError(14,12.25269);
   hmcerror__23->SetBinError(15,24.15664);
   hmcerror__23->SetBinError(16,16.28952);
   hmcerror__23->SetBinError(17,13.76605);
   hmcerror__23->SetBinError(18,15.23139);
   hmcerror__23->SetBinError(19,16.35326);
   hmcerror__23->SetBinError(20,15.08907);
   hmcerror__23->SetBinError(21,21.34846);
   hmcerror__23->SetBinError(22,27.52857);
   hmcerror__23->SetBinError(23,21.72297);
   hmcerror__23->SetBinError(24,23.68335);
   hmcerror__23->SetBinError(25,29.08648);
   hmcerror__23->SetBinError(26,2.931409);
   hmcerror__23->SetBinError(27,5.682938);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3029[26] = {
   1,
   14,
   57,
   62,
   66,
   43,
   38,
   38,
   35,
   32,
   40,
   26,
   30,
   28,
   26,
   30,
   27,
   29,
   47,
   45,
   59,
   76,
   94,
   101,
   27,
   1};
   Double_t _felx3029[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3029[26] = {
   1,
   3.9102,
   7.679,
   8.0018,
   8.2509,
   6.6917,
   6.3013,
   6.3013,
   6.0548,
   5.7977,
   6.4604,
   5.2453,
   5.6197,
   5.4358,
   5.2453,
   5.6197,
   5.3414,
   5.5285,
   6.9882,
   6.8416,
   7.8097,
   8.8425,
   9.8173,
   10.04988,
   5.3414,
   1};
   Double_t _fehx3029[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3029[26] = {
   1.35971,
   3.6898,
   7.4757,
   7.7989,
   8.0483,
   6.4868,
   6.0955,
   6.0955,
   5.8483,
   5.5904,
   6.2549,
   5.0358,
   5.4117,
   5.2271,
   5.0358,
   5.4117,
   5.1322,
   5.3201,
   6.7839,
   6.637,
   7.6066,
   8.6406,
   9.616,
   10.04988,
   5.1322,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-156,156);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(122.1549);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.7/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1072.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.0","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.1","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 245.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.5","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3030[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3030[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3030[26] = {
   2.144716,
   0.7734501,
   0.3651436,
   0.3335623,
   0.4050879,
   0.3691797,
   0.5088806,
   0.4011078,
   0.4100801,
   0.4697103,
   0.4792777,
   0.4477495,
   0.4566887,
   0.4144889,
   0.687386,
   0.4649434,
   0.3896583,
   0.3745789,
   0.3399556,
   0.2867179,
   0.3441856,
   0.3002743,
   0.2154928,
   0.2340035,
   0.697863,
   2.024376};
   Double_t _fehx3030[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3030[26] = {
   2.144716,
   0.7734501,
   0.3651436,
   0.3335623,
   0.4050879,
   0.3691797,
   0.5088806,
   0.4011078,
   0.4100801,
   0.4697103,
   0.4792777,
   0.4477495,
   0.4566887,
   0.4144889,
   0.687386,
   0.4649434,
   0.3896583,
   0.3745789,
   0.3399556,
   0.2867179,
   0.3441856,
   0.3002743,
   0.2154928,
   0.2340035,
   0.697863,
   2.024376};
   grae = new TGraphAsymmErrors(26,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-156,156);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3031[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3031[26] = {
   0.9806379,
   0.2355993,
   0.2152951,
   0.2042849,
   0.2010763,
   0.2096777,
   0.2058297,
   0.2259876,
   0.2178436,
   0.2096799,
   0.2123034,
   0.209159,
   0.2144242,
   0.1853089,
   0.200829,
   0.2013833,
   0.1845889,
   0.181258,
   0.1720823,
   0.1582374,
   0.1566977,
   0.1619771,
   0.1422957,
   0.1441025,
   0.1713776,
   0.5723747};
   Double_t _fehx3031[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3031[26] = {
   0.9806379,
   0.2355993,
   0.2152951,
   0.2042849,
   0.2010763,
   0.2096777,
   0.2058297,
   0.2259876,
   0.2178436,
   0.2096799,
   0.2123034,
   0.209159,
   0.2144242,
   0.1853089,
   0.200829,
   0.2013833,
   0.1845889,
   0.181258,
   0.1720823,
   0.1582374,
   0.1566977,
   0.1619771,
   0.1422957,
   0.1441025,
   0.1713776,
   0.5723747};
   grae = new TGraphAsymmErrors(26,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-156,156);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3032[26] = {
   1.699364,
   0.7784808,
   1.076611,
   0.8355378,
   1.126669,
   0.9549843,
   1.095929,
   1.049382,
   1.083746,
   1.035257,
   1.336915,
   0.7936065,
   0.9562156,
   0.9471951,
   0.7398397,
   0.8562745,
   0.7642551,
   0.7131842,
   0.9770473,
   0.8550761,
   0.9512138,
   0.8289875,
   0.9324842,
   0.9979313,
   0.6478028,
   0.6905813};
   Double_t _felx3032[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3032[26] = {
   1.699364,
   0.2174297,
   0.1450402,
   0.1078356,
   0.140849,
   0.1486156,
   0.181731,
   0.1740123,
   0.1874819,
   0.1875659,
   0.2159251,
   0.160104,
   0.1791215,
   0.1838844,
   0.149257,
   0.1604002,
   0.1511923,
   0.13596,
   0.1452724,
   0.130002,
   0.1259101,
   0.09645161,
   0.09738805,
   0.09929787,
   0.1281546,
   0.6905813};
   Double_t _fehx3032[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3032[26] = {
   2.310642,
   0.2051742,
   0.1412003,
   0.1051012,
   0.1373904,
   0.1440649,
   0.1757957,
   0.1683291,
   0.1810878,
   0.1808594,
   0.2090567,
   0.1537094,
   0.1724917,
   0.1768244,
   0.1432956,
   0.1544633,
   0.1452707,
   0.1308349,
   0.1410253,
   0.1261142,
   0.1226356,
   0.09424933,
   0.09539115,
   0.09929787,
   0.1231353,
   0.9389903};
   grae = new TGraphAsymmErrors(26,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-156,156);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(4.411006);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(-130,1,130,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
