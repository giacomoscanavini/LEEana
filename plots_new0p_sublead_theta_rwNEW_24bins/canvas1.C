#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 17:14:58 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",112,135,1200,900);
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
   pad1->Range(-0.4846154,-10.35565,3.553846,1145.117);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__1->SetBinContent(1,80.73362);
   hmc__1->SetBinContent(2,255.5122);
   hmc__1->SetBinContent(3,376.4254);
   hmc__1->SetBinContent(4,479.2374);
   hmc__1->SetBinContent(5,503.4344);
   hmc__1->SetBinContent(6,517.7823);
   hmc__1->SetBinContent(7,494.7304);
   hmc__1->SetBinContent(8,486.8893);
   hmc__1->SetBinContent(9,455.063);
   hmc__1->SetBinContent(10,424.1793);
   hmc__1->SetBinContent(11,404.6399);
   hmc__1->SetBinContent(12,376.0536);
   hmc__1->SetBinContent(13,320.2806);
   hmc__1->SetBinContent(14,285.9945);
   hmc__1->SetBinContent(15,300.3354);
   hmc__1->SetBinContent(16,270.6698);
   hmc__1->SetBinContent(17,239.1046);
   hmc__1->SetBinContent(18,225.3542);
   hmc__1->SetBinContent(19,213.5236);
   hmc__1->SetBinContent(20,210.6165);
   hmc__1->SetBinContent(21,167.3383);
   hmc__1->SetBinContent(22,136.632);
   hmc__1->SetBinContent(23,80.68483);
   hmc__1->SetBinContent(24,29.09011);
   hmc__1->SetBinError(1,23.92659);
   hmc__1->SetBinError(2,63.78509);
   hmc__1->SetBinError(3,96.90653);
   hmc__1->SetBinError(4,115.4112);
   hmc__1->SetBinError(5,124.422);
   hmc__1->SetBinError(6,134.9517);
   hmc__1->SetBinError(7,129.513);
   hmc__1->SetBinError(8,125.5161);
   hmc__1->SetBinError(9,118.7003);
   hmc__1->SetBinError(10,111.0279);
   hmc__1->SetBinError(11,103.9643);
   hmc__1->SetBinError(12,99.52793);
   hmc__1->SetBinError(13,89.12436);
   hmc__1->SetBinError(14,78.87837);
   hmc__1->SetBinError(15,80.0664);
   hmc__1->SetBinError(16,80.71381);
   hmc__1->SetBinError(17,59.38714);
   hmc__1->SetBinError(18,59.30708);
   hmc__1->SetBinError(19,53.45412);
   hmc__1->SetBinError(20,57.71943);
   hmc__1->SetBinError(21,46.35116);
   hmc__1->SetBinError(22,37.70145);
   hmc__1->SetBinError(23,25.82169);
   hmc__1->SetBinError(24,17.28603);
   hmc__1->SetBinError(25,0.3895343);
   hmc__1->SetMinimum(-10.35565);
   hmc__1->SetMaximum(1087.343);
   hmc__1->SetEntries(7241.585);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,3.15);
   hs1_stack_1->SetMinimum(-1.479728e-08);
   hs1_stack_1->SetMaximum(543.6715);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.536893);
   hbadmatch_stack_1->SetBinContent(2,3.618921);
   hbadmatch_stack_1->SetBinContent(3,8.573281);
   hbadmatch_stack_1->SetBinContent(4,10.01307);
   hbadmatch_stack_1->SetBinContent(5,11.82623);
   hbadmatch_stack_1->SetBinContent(6,11.83612);
   hbadmatch_stack_1->SetBinContent(7,9.23457);
   hbadmatch_stack_1->SetBinContent(8,13.59944);
   hbadmatch_stack_1->SetBinContent(9,13.60498);
   hbadmatch_stack_1->SetBinContent(10,10.70749);
   hbadmatch_stack_1->SetBinContent(11,13.36174);
   hbadmatch_stack_1->SetBinContent(12,8.840597);
   hbadmatch_stack_1->SetBinContent(13,7.778996);
   hbadmatch_stack_1->SetBinContent(14,5.198592);
   hbadmatch_stack_1->SetBinContent(15,9.830873);
   hbadmatch_stack_1->SetBinContent(16,8.656835);
   hbadmatch_stack_1->SetBinContent(17,4.538272);
   hbadmatch_stack_1->SetBinContent(18,5.497202);
   hbadmatch_stack_1->SetBinContent(19,7.351721);
   hbadmatch_stack_1->SetBinContent(20,5.445844);
   hbadmatch_stack_1->SetBinContent(21,4.065855);
   hbadmatch_stack_1->SetBinContent(22,2.753525);
   hbadmatch_stack_1->SetBinContent(23,3.465673);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.3929602);
   hbadmatch_stack_1->SetBinError(2,0.9322176);
   hbadmatch_stack_1->SetBinError(3,1.630277);
   hbadmatch_stack_1->SetBinError(4,1.62833);
   hbadmatch_stack_1->SetBinError(5,1.938135);
   hbadmatch_stack_1->SetBinError(6,1.813461);
   hbadmatch_stack_1->SetBinError(7,1.558818);
   hbadmatch_stack_1->SetBinError(8,1.931191);
   hbadmatch_stack_1->SetBinError(9,2.437134);
   hbadmatch_stack_1->SetBinError(10,2.000393);
   hbadmatch_stack_1->SetBinError(11,1.91581);
   hbadmatch_stack_1->SetBinError(12,1.503708);
   hbadmatch_stack_1->SetBinError(13,1.476271);
   hbadmatch_stack_1->SetBinError(14,1.238203);
   hbadmatch_stack_1->SetBinError(15,2.513265);
   hbadmatch_stack_1->SetBinError(16,2.178425);
   hbadmatch_stack_1->SetBinError(17,1.12039);
   hbadmatch_stack_1->SetBinError(18,1.222567);
   hbadmatch_stack_1->SetBinError(19,1.448963);
   hbadmatch_stack_1->SetBinError(20,1.174087);
   hbadmatch_stack_1->SetBinError(21,1.051207);
   hbadmatch_stack_1->SetBinError(22,0.9636219);
   hbadmatch_stack_1->SetBinError(23,1.208459);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,6.482403);
   hext_stack_2->SetBinContent(2,21.92706);
   hext_stack_2->SetBinContent(3,26.98778);
   hext_stack_2->SetBinContent(4,34.98125);
   hext_stack_2->SetBinContent(5,37.99461);
   hext_stack_2->SetBinContent(6,39.09309);
   hext_stack_2->SetBinContent(7,38.46741);
   hext_stack_2->SetBinContent(8,38.56839);
   hext_stack_2->SetBinContent(9,36.87138);
   hext_stack_2->SetBinContent(10,37.09644);
   hext_stack_2->SetBinContent(11,31.38812);
   hext_stack_2->SetBinContent(12,39.01247);
   hext_stack_2->SetBinContent(13,35.20744);
   hext_stack_2->SetBinContent(14,25.48107);
   hext_stack_2->SetBinContent(15,27.85723);
   hext_stack_2->SetBinContent(16,32.18255);
   hext_stack_2->SetBinContent(17,21.2336);
   hext_stack_2->SetBinContent(18,16.95578);
   hext_stack_2->SetBinContent(19,18.25336);
   hext_stack_2->SetBinContent(20,14.34183);
   hext_stack_2->SetBinContent(21,15.76628);
   hext_stack_2->SetBinContent(22,10.27584);
   hext_stack_2->SetBinContent(23,4.442228);
   hext_stack_2->SetBinContent(24,3.965017);
   hext_stack_2->SetBinError(1,1.666529);
   hext_stack_2->SetBinError(2,3.127847);
   hext_stack_2->SetBinError(3,3.338974);
   hext_stack_2->SetBinError(4,3.898327);
   hext_stack_2->SetBinError(5,4.017221);
   hext_stack_2->SetBinError(6,3.912371);
   hext_stack_2->SetBinError(7,4.036637);
   hext_stack_2->SetBinError(8,4.010891);
   hext_stack_2->SetBinError(9,3.911494);
   hext_stack_2->SetBinError(10,4.010443);
   hext_stack_2->SetBinError(11,3.517056);
   hext_stack_2->SetBinError(12,4.128973);
   hext_stack_2->SetBinError(13,3.895261);
   hext_stack_2->SetBinError(14,3.367996);
   hext_stack_2->SetBinError(15,3.465251);
   hext_stack_2->SetBinError(16,3.601057);
   hext_stack_2->SetBinError(17,2.996382);
   hext_stack_2->SetBinError(18,2.635636);
   hext_stack_2->SetBinError(19,2.714316);
   hext_stack_2->SetBinError(20,2.52428);
   hext_stack_2->SetBinError(21,2.72904);
   hext_stack_2->SetBinError(22,2.172271);
   hext_stack_2->SetBinError(23,1.466939);
   hext_stack_2->SetBinError(24,1.363971);
   hext_stack_2->SetEntries(1541);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.923959);
   hdirt_stack_3->SetBinContent(3,1.728496);
   hdirt_stack_3->SetBinContent(4,4.331312);
   hdirt_stack_3->SetBinContent(5,3.171042);
   hdirt_stack_3->SetBinContent(6,5.044457);
   hdirt_stack_3->SetBinContent(7,6.108068);
   hdirt_stack_3->SetBinContent(8,4.854122);
   hdirt_stack_3->SetBinContent(9,6.111583);
   hdirt_stack_3->SetBinContent(10,5.217553);
   hdirt_stack_3->SetBinContent(11,3.805752);
   hdirt_stack_3->SetBinContent(12,2.694662);
   hdirt_stack_3->SetBinContent(13,2.377454);
   hdirt_stack_3->SetBinContent(14,2.36957);
   hdirt_stack_3->SetBinContent(15,2.517854);
   hdirt_stack_3->SetBinContent(16,3.232189);
   hdirt_stack_3->SetBinContent(17,2.684737);
   hdirt_stack_3->SetBinContent(18,2.203847);
   hdirt_stack_3->SetBinContent(19,4.706207);
   hdirt_stack_3->SetBinContent(20,1.881675);
   hdirt_stack_3->SetBinContent(21,1.51498);
   hdirt_stack_3->SetBinContent(22,1.763973);
   hdirt_stack_3->SetBinContent(23,1.390309);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.9006203);
   hdirt_stack_3->SetBinError(3,0.6907024);
   hdirt_stack_3->SetBinError(4,1.119122);
   hdirt_stack_3->SetBinError(5,0.882848);
   hdirt_stack_3->SetBinError(6,1.18426);
   hdirt_stack_3->SetBinError(7,1.31015);
   hdirt_stack_3->SetBinError(8,1.404263);
   hdirt_stack_3->SetBinError(9,1.273874);
   hdirt_stack_3->SetBinError(10,1.678752);
   hdirt_stack_3->SetBinError(11,1.013965);
   hdirt_stack_3->SetBinError(12,0.8360114);
   hdirt_stack_3->SetBinError(13,0.7817256);
   hdirt_stack_3->SetBinError(14,0.7954966);
   hdirt_stack_3->SetBinError(15,0.8071779);
   hdirt_stack_3->SetBinError(16,0.9501518);
   hdirt_stack_3->SetBinError(17,0.8344553);
   hdirt_stack_3->SetBinError(18,0.6914602);
   hdirt_stack_3->SetBinError(19,1.261394);
   hdirt_stack_3->SetBinError(20,0.7189442);
   hdirt_stack_3->SetBinError(21,0.5463913);
   hdirt_stack_3->SetBinError(22,0.7249304);
   hdirt_stack_3->SetBinError(23,0.6022451);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,7.805323);
   houtFV_stack_4->SetBinContent(2,21.8593);
   houtFV_stack_4->SetBinContent(3,36.40826);
   houtFV_stack_4->SetBinContent(4,49.16901);
   houtFV_stack_4->SetBinContent(5,49.92113);
   houtFV_stack_4->SetBinContent(6,51.17307);
   houtFV_stack_4->SetBinContent(7,44.77801);
   houtFV_stack_4->SetBinContent(8,46.45517);
   houtFV_stack_4->SetBinContent(9,38.81051);
   houtFV_stack_4->SetBinContent(10,34.19604);
   houtFV_stack_4->SetBinContent(11,34.51738);
   houtFV_stack_4->SetBinContent(12,33.80911);
   houtFV_stack_4->SetBinContent(13,26.90659);
   houtFV_stack_4->SetBinContent(14,23.29959);
   houtFV_stack_4->SetBinContent(15,28.78562);
   houtFV_stack_4->SetBinContent(16,28.99474);
   houtFV_stack_4->SetBinContent(17,25.61101);
   houtFV_stack_4->SetBinContent(18,27.5693);
   houtFV_stack_4->SetBinContent(19,25.8663);
   houtFV_stack_4->SetBinContent(20,34.85902);
   houtFV_stack_4->SetBinContent(21,19.35306);
   houtFV_stack_4->SetBinContent(22,14.11969);
   houtFV_stack_4->SetBinContent(23,14.12271);
   houtFV_stack_4->SetBinContent(24,3.841856);
   houtFV_stack_4->SetBinError(1,1.4389);
   houtFV_stack_4->SetBinError(2,2.337688);
   houtFV_stack_4->SetBinError(3,3.042044);
   houtFV_stack_4->SetBinError(4,3.66267);
   houtFV_stack_4->SetBinError(5,3.528708);
   houtFV_stack_4->SetBinError(6,3.59076);
   houtFV_stack_4->SetBinError(7,3.328069);
   houtFV_stack_4->SetBinError(8,3.41591);
   houtFV_stack_4->SetBinError(9,3.105446);
   houtFV_stack_4->SetBinError(10,3.00573);
   houtFV_stack_4->SetBinError(11,3.027925);
   houtFV_stack_4->SetBinError(12,3.113209);
   houtFV_stack_4->SetBinError(13,2.60802);
   houtFV_stack_4->SetBinError(14,2.345832);
   houtFV_stack_4->SetBinError(15,2.709554);
   houtFV_stack_4->SetBinError(16,2.679305);
   houtFV_stack_4->SetBinError(17,2.469337);
   houtFV_stack_4->SetBinError(18,2.638874);
   houtFV_stack_4->SetBinError(19,2.478309);
   houtFV_stack_4->SetBinError(20,3.058026);
   houtFV_stack_4->SetBinError(21,2.150223);
   houtFV_stack_4->SetBinError(22,1.852088);
   houtFV_stack_4->SetBinError(23,1.95016);
   houtFV_stack_4->SetBinError(24,1.027464);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.138266);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,8.186198);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,11.127);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.66996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.26666);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.121347);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.944547);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.762458);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.561086);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.837014);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.915562);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.30517);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.190826);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.454216);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.272366);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.074154);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.618544);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.617376);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.142908);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.729976);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.840744);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.854362);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.239394);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6141361);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5921277);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9826345);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.08348);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.104558);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.100263);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.008791);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.851376);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8729703);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.73861);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7059183);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5460186);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6336697);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5142032);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5527492);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5238888);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3197389);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5051672);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4128074);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3527294);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4749196);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4575982);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4653296);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3385597);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2874767);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.896712);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.70174);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.687626);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.588644);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.59014);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.966626);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.701908);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8921356);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.71619);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.953176);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.659726);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8365039);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.031804);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8923038);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.15819);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.11584);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7385219);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4936718);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3990644);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4453858);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3877697);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.395144);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4540403);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.438191);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1959638);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4308761);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4814311);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4445111);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2638255);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2739576);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2667597);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4124148);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3780289);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2713408);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,27.72076);
   hNCpi0inFVres_stack_7->SetBinContent(2,83.12125);
   hNCpi0inFVres_stack_7->SetBinContent(3,137.3322);
   hNCpi0inFVres_stack_7->SetBinContent(4,172.7281);
   hNCpi0inFVres_stack_7->SetBinContent(5,189.412);
   hNCpi0inFVres_stack_7->SetBinContent(6,195.4414);
   hNCpi0inFVres_stack_7->SetBinContent(7,193.3451);
   hNCpi0inFVres_stack_7->SetBinContent(8,186.0034);
   hNCpi0inFVres_stack_7->SetBinContent(9,181.3172);
   hNCpi0inFVres_stack_7->SetBinContent(10,168.198);
   hNCpi0inFVres_stack_7->SetBinContent(11,151.6542);
   hNCpi0inFVres_stack_7->SetBinContent(12,150.1819);
   hNCpi0inFVres_stack_7->SetBinContent(13,127.8157);
   hNCpi0inFVres_stack_7->SetBinContent(14,114.71);
   hNCpi0inFVres_stack_7->SetBinContent(15,110.6434);
   hNCpi0inFVres_stack_7->SetBinContent(16,99.72626);
   hNCpi0inFVres_stack_7->SetBinContent(17,90.63154);
   hNCpi0inFVres_stack_7->SetBinContent(18,87.9724);
   hNCpi0inFVres_stack_7->SetBinContent(19,79.97516);
   hNCpi0inFVres_stack_7->SetBinContent(20,73.24982);
   hNCpi0inFVres_stack_7->SetBinContent(21,58.34276);
   hNCpi0inFVres_stack_7->SetBinContent(22,41.92956);
   hNCpi0inFVres_stack_7->SetBinContent(23,24.31794);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.606976);
   hNCpi0inFVres_stack_7->SetBinError(1,1.743561);
   hNCpi0inFVres_stack_7->SetBinError(2,2.986858);
   hNCpi0inFVres_stack_7->SetBinError(3,3.832907);
   hNCpi0inFVres_stack_7->SetBinError(4,4.302515);
   hNCpi0inFVres_stack_7->SetBinError(5,4.527849);
   hNCpi0inFVres_stack_7->SetBinError(6,4.570839);
   hNCpi0inFVres_stack_7->SetBinError(7,4.53783);
   hNCpi0inFVres_stack_7->SetBinError(8,4.468513);
   hNCpi0inFVres_stack_7->SetBinError(9,4.452181);
   hNCpi0inFVres_stack_7->SetBinError(10,4.201874);
   hNCpi0inFVres_stack_7->SetBinError(11,4.019068);
   hNCpi0inFVres_stack_7->SetBinError(12,4.03633);
   hNCpi0inFVres_stack_7->SetBinError(13,3.670977);
   hNCpi0inFVres_stack_7->SetBinError(14,3.498451);
   hNCpi0inFVres_stack_7->SetBinError(15,3.478638);
   hNCpi0inFVres_stack_7->SetBinError(16,3.192394);
   hNCpi0inFVres_stack_7->SetBinError(17,3.139615);
   hNCpi0inFVres_stack_7->SetBinError(18,3.109595);
   hNCpi0inFVres_stack_7->SetBinError(19,2.886484);
   hNCpi0inFVres_stack_7->SetBinError(20,2.796429);
   hNCpi0inFVres_stack_7->SetBinError(21,2.423496);
   hNCpi0inFVres_stack_7->SetBinError(22,2.139272);
   hNCpi0inFVres_stack_7->SetBinError(23,1.601087);
   hNCpi0inFVres_stack_7->SetBinError(24,1.091508);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.910023);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.24453);
   hNCpi0inFVdis_stack_8->SetBinContent(3,31.63956);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.98648);
   hNCpi0inFVdis_stack_8->SetBinContent(5,37.55288);
   hNCpi0inFVdis_stack_8->SetBinContent(6,41.97124);
   hNCpi0inFVdis_stack_8->SetBinContent(7,40.30869);
   hNCpi0inFVdis_stack_8->SetBinContent(8,39.25232);
   hNCpi0inFVdis_stack_8->SetBinContent(9,32.42822);
   hNCpi0inFVdis_stack_8->SetBinContent(10,28.58516);
   hNCpi0inFVdis_stack_8->SetBinContent(11,30.19043);
   hNCpi0inFVdis_stack_8->SetBinContent(12,25.33279);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.71302);
   hNCpi0inFVdis_stack_8->SetBinContent(14,21.3283);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.90108);
   hNCpi0inFVdis_stack_8->SetBinContent(16,16.80002);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.94324);
   hNCpi0inFVdis_stack_8->SetBinContent(18,16.88672);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.66871);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.43192);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.2919);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.364047);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.889901);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.770157);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9677678);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.561106);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.850921);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.903293);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.968302);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.114859);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.07274);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.107608);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.804012);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.722167);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.850396);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.598228);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.568422);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.485453);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.521203);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.3372);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.165566);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.395175);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.044894);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.303049);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.058678);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8879991);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5771481);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3404698);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,13.52363);
   hCCpi0inFV_stack_10->SetBinContent(2,41.06207);
   hCCpi0inFV_stack_10->SetBinContent(3,55.43588);
   hCCpi0inFV_stack_10->SetBinContent(4,72.63165);
   hCCpi0inFV_stack_10->SetBinContent(5,76.78736);
   hCCpi0inFV_stack_10->SetBinContent(6,80.79951);
   hCCpi0inFV_stack_10->SetBinContent(7,73.76786);
   hCCpi0inFV_stack_10->SetBinContent(8,75.90887);
   hCCpi0inFV_stack_10->SetBinContent(9,69.69619);
   hCCpi0inFV_stack_10->SetBinContent(10,66.07059);
   hCCpi0inFV_stack_10->SetBinContent(11,61.56562);
   hCCpi0inFV_stack_10->SetBinContent(12,47.0872);
   hCCpi0inFV_stack_10->SetBinContent(13,41.38939);
   hCCpi0inFV_stack_10->SetBinContent(14,42.46323);
   hCCpi0inFV_stack_10->SetBinContent(15,42.26352);
   hCCpi0inFV_stack_10->SetBinContent(16,37.36142);
   hCCpi0inFV_stack_10->SetBinContent(17,36.70284);
   hCCpi0inFV_stack_10->SetBinContent(18,35.2307);
   hCCpi0inFV_stack_10->SetBinContent(19,32.99485);
   hCCpi0inFV_stack_10->SetBinContent(20,27.07067);
   hCCpi0inFV_stack_10->SetBinContent(21,25.49516);
   hCCpi0inFV_stack_10->SetBinContent(22,23.47017);
   hCCpi0inFV_stack_10->SetBinContent(23,12.03891);
   hCCpi0inFV_stack_10->SetBinContent(24,4.199863);
   hCCpi0inFV_stack_10->SetBinError(1,1.818648);
   hCCpi0inFV_stack_10->SetBinError(2,3.240495);
   hCCpi0inFV_stack_10->SetBinError(3,3.673829);
   hCCpi0inFV_stack_10->SetBinError(4,4.342617);
   hCCpi0inFV_stack_10->SetBinError(5,4.393144);
   hCCpi0inFV_stack_10->SetBinError(6,4.482856);
   hCCpi0inFV_stack_10->SetBinError(7,4.344313);
   hCCpi0inFV_stack_10->SetBinError(8,4.35511);
   hCCpi0inFV_stack_10->SetBinError(9,4.206964);
   hCCpi0inFV_stack_10->SetBinError(10,4.11859);
   hCCpi0inFV_stack_10->SetBinError(11,3.946491);
   hCCpi0inFV_stack_10->SetBinError(12,3.442232);
   hCCpi0inFV_stack_10->SetBinError(13,3.252944);
   hCCpi0inFV_stack_10->SetBinError(14,3.244361);
   hCCpi0inFV_stack_10->SetBinError(15,3.252766);
   hCCpi0inFV_stack_10->SetBinError(16,3.041805);
   hCCpi0inFV_stack_10->SetBinError(17,3.058562);
   hCCpi0inFV_stack_10->SetBinError(18,2.977781);
   hCCpi0inFV_stack_10->SetBinError(19,2.893235);
   hCCpi0inFV_stack_10->SetBinError(20,2.499625);
   hCCpi0inFV_stack_10->SetBinError(21,2.516139);
   hCCpi0inFV_stack_10->SetBinError(22,2.46276);
   hCCpi0inFV_stack_10->SetBinError(23,1.751806);
   hCCpi0inFV_stack_10->SetBinError(24,1.057357);
   hCCpi0inFV_stack_10->SetEntries(4680);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,5.222087);
   hNCinFV_stack_11->SetBinContent(2,20.02358);
   hNCinFV_stack_11->SetBinContent(3,30.47837);
   hNCinFV_stack_11->SetBinContent(4,36.98895);
   hNCinFV_stack_11->SetBinContent(5,32.24821);
   hNCinFV_stack_11->SetBinContent(6,36.07096);
   hNCinFV_stack_11->SetBinContent(7,33.73049);
   hNCinFV_stack_11->SetBinContent(8,28.88798);
   hNCinFV_stack_11->SetBinContent(9,29.10752);
   hNCinFV_stack_11->SetBinContent(10,27.6589);
   hNCinFV_stack_11->SetBinContent(11,30.91721);
   hNCinFV_stack_11->SetBinContent(12,23.41424);
   hNCinFV_stack_11->SetBinContent(13,21.12827);
   hNCinFV_stack_11->SetBinContent(14,22.03216);
   hNCinFV_stack_11->SetBinContent(15,21.20388);
   hNCinFV_stack_11->SetBinContent(16,18.31593);
   hNCinFV_stack_11->SetBinContent(17,18.83545);
   hNCinFV_stack_11->SetBinContent(18,16.11849);
   hNCinFV_stack_11->SetBinContent(19,13.33259);
   hNCinFV_stack_11->SetBinContent(20,13.82975);
   hNCinFV_stack_11->SetBinContent(21,12.89774);
   hNCinFV_stack_11->SetBinContent(22,10.70476);
   hNCinFV_stack_11->SetBinContent(23,6.782286);
   hNCinFV_stack_11->SetBinContent(24,2.160488);
   hNCinFV_stack_11->SetBinError(1,1.210714);
   hNCinFV_stack_11->SetBinError(2,2.280619);
   hNCinFV_stack_11->SetBinError(3,2.782132);
   hNCinFV_stack_11->SetBinError(4,3.059784);
   hNCinFV_stack_11->SetBinError(5,2.808898);
   hNCinFV_stack_11->SetBinError(6,3.055323);
   hNCinFV_stack_11->SetBinError(7,2.850728);
   hNCinFV_stack_11->SetBinError(8,2.699066);
   hNCinFV_stack_11->SetBinError(9,2.696925);
   hNCinFV_stack_11->SetBinError(10,2.62573);
   hNCinFV_stack_11->SetBinError(11,2.823941);
   hNCinFV_stack_11->SetBinError(12,2.412072);
   hNCinFV_stack_11->SetBinError(13,2.263931);
   hNCinFV_stack_11->SetBinError(14,2.354831);
   hNCinFV_stack_11->SetBinError(15,2.330966);
   hNCinFV_stack_11->SetBinError(16,2.149411);
   hNCinFV_stack_11->SetBinError(17,2.272522);
   hNCinFV_stack_11->SetBinError(18,2.01046);
   hNCinFV_stack_11->SetBinError(19,1.829891);
   hNCinFV_stack_11->SetBinError(20,1.883227);
   hNCinFV_stack_11->SetBinError(21,1.820459);
   hNCinFV_stack_11->SetBinError(22,1.593553);
   hNCinFV_stack_11->SetBinError(23,1.330454);
   hNCinFV_stack_11->SetBinError(24,0.6514152);
   hNCinFV_stack_11->SetEntries(2180);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.75703);
   hnumuCCinFV_stack_12->SetBinContent(2,24.89234);
   hnumuCCinFV_stack_12->SetBinContent(3,30.03403);
   hnumuCCinFV_stack_12->SetBinContent(4,43.38576);
   hnumuCCinFV_stack_12->SetBinContent(5,47.86879);
   hnumuCCinFV_stack_12->SetBinContent(6,40.60799);
   hnumuCCinFV_stack_12->SetBinContent(7,41.26565);
   hnumuCCinFV_stack_12->SetBinContent(8,42.39206);
   hnumuCCinFV_stack_12->SetBinContent(9,37.98897);
   hnumuCCinFV_stack_12->SetBinContent(10,36.83977);
   hnumuCCinFV_stack_12->SetBinContent(11,41.77641);
   hnumuCCinFV_stack_12->SetBinContent(12,38.6654);
   hnumuCCinFV_stack_12->SetBinContent(13,30.69356);
   hnumuCCinFV_stack_12->SetBinContent(14,24.34891);
   hnumuCCinFV_stack_12->SetBinContent(15,30.18493);
   hnumuCCinFV_stack_12->SetBinContent(16,21.80703);
   hnumuCCinFV_stack_12->SetBinContent(17,20.31668);
   hnumuCCinFV_stack_12->SetBinContent(18,13.4495);
   hnumuCCinFV_stack_12->SetBinContent(19,15.9717);
   hnumuCCinFV_stack_12->SetBinContent(20,19.67781);
   hnumuCCinFV_stack_12->SetBinContent(21,15.61122);
   hnumuCCinFV_stack_12->SetBinContent(22,19.68783);
   hnumuCCinFV_stack_12->SetBinContent(23,7.996882);
   hnumuCCinFV_stack_12->SetBinContent(24,2.54103);
   hnumuCCinFV_stack_12->SetBinError(1,1.223813);
   hnumuCCinFV_stack_12->SetBinError(2,2.624328);
   hnumuCCinFV_stack_12->SetBinError(3,2.999271);
   hnumuCCinFV_stack_12->SetBinError(4,3.829155);
   hnumuCCinFV_stack_12->SetBinError(5,4.234198);
   hnumuCCinFV_stack_12->SetBinError(6,4.645924);
   hnumuCCinFV_stack_12->SetBinError(7,3.486544);
   hnumuCCinFV_stack_12->SetBinError(8,3.408393);
   hnumuCCinFV_stack_12->SetBinError(9,3.536699);
   hnumuCCinFV_stack_12->SetBinError(10,3.529002);
   hnumuCCinFV_stack_12->SetBinError(11,3.790768);
   hnumuCCinFV_stack_12->SetBinError(12,3.660509);
   hnumuCCinFV_stack_12->SetBinError(13,3.13053);
   hnumuCCinFV_stack_12->SetBinError(14,2.853639);
   hnumuCCinFV_stack_12->SetBinError(15,3.364352);
   hnumuCCinFV_stack_12->SetBinError(16,2.506779);
   hnumuCCinFV_stack_12->SetBinError(17,2.835048);
   hnumuCCinFV_stack_12->SetBinError(18,2.048911);
   hnumuCCinFV_stack_12->SetBinError(19,2.083063);
   hnumuCCinFV_stack_12->SetBinError(20,2.44107);
   hnumuCCinFV_stack_12->SetBinError(21,2.064677);
   hnumuCCinFV_stack_12->SetBinError(22,3.234754);
   hnumuCCinFV_stack_12->SetBinError(23,1.556661);
   hnumuCCinFV_stack_12->SetBinError(24,0.8035327);
   hnumuCCinFV_stack_12->SetEntries(2561);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.294345);
   hnueCCinFV_stack_13->SetBinContent(2,5.038984);
   hnueCCinFV_stack_13->SetBinContent(3,4.700205);
   hnueCCinFV_stack_13->SetBinContent(4,4.497005);
   hnueCCinFV_stack_13->SetBinContent(5,3.641988);
   hnueCCinFV_stack_13->SetBinContent(6,4.922925);
   hnueCCinFV_stack_13->SetBinContent(7,3.994361);
   hnueCCinFV_stack_13->SetBinContent(8,2.09901);
   hnueCCinFV_stack_13->SetBinContent(9,1.584282);
   hnueCCinFV_stack_13->SetBinContent(10,3.824333);
   hnueCCinFV_stack_13->SetBinContent(11,0.7339762);
   hnueCCinFV_stack_13->SetBinContent(12,1.701181);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,1.472396);
   hnueCCinFV_stack_13->SetBinContent(15,1.591555);
   hnueCCinFV_stack_13->SetBinContent(16,1.514791);
   hnueCCinFV_stack_13->SetBinContent(17,2.361101);
   hnueCCinFV_stack_13->SetBinContent(18,0.6668286);
   hnueCCinFV_stack_13->SetBinContent(19,1.730633);
   hnueCCinFV_stack_13->SetBinContent(20,1.982312);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.415675);
   hnueCCinFV_stack_13->SetBinContent(23,0.8591076);
   hnueCCinFV_stack_13->SetBinError(1,0.8659304);
   hnueCCinFV_stack_13->SetBinError(2,1.459493);
   hnueCCinFV_stack_13->SetBinError(3,1.781226);
   hnueCCinFV_stack_13->SetBinError(4,1.211787);
   hnueCCinFV_stack_13->SetBinError(5,1.363459);
   hnueCCinFV_stack_13->SetBinError(6,1.601628);
   hnueCCinFV_stack_13->SetBinError(7,1.098297);
   hnueCCinFV_stack_13->SetBinError(8,0.7710397);
   hnueCCinFV_stack_13->SetBinError(9,0.6304965);
   hnueCCinFV_stack_13->SetBinError(10,1.519386);
   hnueCCinFV_stack_13->SetBinError(11,0.4394483);
   hnueCCinFV_stack_13->SetBinError(12,0.6705183);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.6127476);
   hnueCCinFV_stack_13->SetBinError(15,0.7565962);
   hnueCCinFV_stack_13->SetBinError(16,0.681951);
   hnueCCinFV_stack_13->SetBinError(17,1.690053);
   hnueCCinFV_stack_13->SetBinError(18,0.471616);
   hnueCCinFV_stack_13->SetBinError(19,0.7736656);
   hnueCCinFV_stack_13->SetBinError(20,0.7289382);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.6884953);
   hnueCCinFV_stack_13->SetBinError(23,0.4343743);
   hnueCCinFV_stack_13->SetEntries(187);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__2->SetBinContent(1,80.73362);
   hmcerror__2->SetBinContent(2,255.5122);
   hmcerror__2->SetBinContent(3,376.4254);
   hmcerror__2->SetBinContent(4,479.2374);
   hmcerror__2->SetBinContent(5,503.4344);
   hmcerror__2->SetBinContent(6,517.7823);
   hmcerror__2->SetBinContent(7,494.7304);
   hmcerror__2->SetBinContent(8,486.8893);
   hmcerror__2->SetBinContent(9,455.063);
   hmcerror__2->SetBinContent(10,424.1793);
   hmcerror__2->SetBinContent(11,404.6399);
   hmcerror__2->SetBinContent(12,376.0536);
   hmcerror__2->SetBinContent(13,320.2806);
   hmcerror__2->SetBinContent(14,285.9945);
   hmcerror__2->SetBinContent(15,300.3354);
   hmcerror__2->SetBinContent(16,270.6698);
   hmcerror__2->SetBinContent(17,239.1046);
   hmcerror__2->SetBinContent(18,225.3542);
   hmcerror__2->SetBinContent(19,213.5236);
   hmcerror__2->SetBinContent(20,210.6165);
   hmcerror__2->SetBinContent(21,167.3383);
   hmcerror__2->SetBinContent(22,136.632);
   hmcerror__2->SetBinContent(23,80.68483);
   hmcerror__2->SetBinContent(24,29.09011);
   hmcerror__2->SetBinError(1,23.92659);
   hmcerror__2->SetBinError(2,63.78509);
   hmcerror__2->SetBinError(3,96.90653);
   hmcerror__2->SetBinError(4,115.4112);
   hmcerror__2->SetBinError(5,124.422);
   hmcerror__2->SetBinError(6,134.9517);
   hmcerror__2->SetBinError(7,129.513);
   hmcerror__2->SetBinError(8,125.5161);
   hmcerror__2->SetBinError(9,118.7003);
   hmcerror__2->SetBinError(10,111.0279);
   hmcerror__2->SetBinError(11,103.9643);
   hmcerror__2->SetBinError(12,99.52793);
   hmcerror__2->SetBinError(13,89.12436);
   hmcerror__2->SetBinError(14,78.87837);
   hmcerror__2->SetBinError(15,80.0664);
   hmcerror__2->SetBinError(16,80.71381);
   hmcerror__2->SetBinError(17,59.38714);
   hmcerror__2->SetBinError(18,59.30708);
   hmcerror__2->SetBinError(19,53.45412);
   hmcerror__2->SetBinError(20,57.71943);
   hmcerror__2->SetBinError(21,46.35116);
   hmcerror__2->SetBinError(22,37.70145);
   hmcerror__2->SetBinError(23,25.82169);
   hmcerror__2->SetBinError(24,17.28603);
   hmcerror__2->SetBinError(25,0.3895343);
   hmcerror__2->SetEntries(7241.585);

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
   
   Double_t _fx3001[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3001[24] = {
   82,
   245,
   365,
   450,
   445,
   444,
   437,
   403,
   355,
   355,
   315,
   324,
   284,
   267,
   252,
   235,
   211,
   193,
   191,
   192,
   156,
   135,
   77,
   31};
   Double_t _felx3001[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3001[24] = {
   9.1791,
   15.65248,
   19.10497,
   21.2132,
   21.09502,
   21.07131,
   20.90454,
   20.07486,
   18.84144,
   18.84144,
   17.74824,
   18,
   16.8523,
   16.34013,
   15.87451,
   15.32971,
   14.52584,
   13.89244,
   13.82027,
   13.85641,
   12.49,
   11.61895,
   8.8995,
   5.7094};
   Double_t _fehx3001[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3001[24] = {
   8.9774,
   15.65248,
   19.10497,
   21.2132,
   21.09502,
   21.07131,
   20.90454,
   20.07486,
   18.84144,
   18.84144,
   17.74824,
   18,
   16.8523,
   16.34013,
   15.87451,
   15.32971,
   14.52584,
   13.89244,
   13.82027,
   13.85641,
   12.49,
   11.61895,
   8.6976,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,3.465);
   Graph_Graph3001->SetMinimum(22.76154);
   Graph_Graph3001->SetMaximum(515.8055);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 614.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 512.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3002[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3002[24] = {
   0.2963647,
   0.2496362,
   0.2574389,
   0.2408227,
   0.2471465,
   0.260634,
   0.261785,
   0.2577919,
   0.2608436,
   0.2617476,
   0.2569303,
   0.2646642,
   0.2782696,
   0.2758038,
   0.26659,
   0.2982003,
   0.2483731,
   0.2631727,
   0.2503429,
   0.27405,
   0.2769907,
   0.2759342,
   0.3200316,
   0.5942234};
   Double_t _fehx3002[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3002[24] = {
   0.2963647,
   0.2496362,
   0.2574389,
   0.2408227,
   0.2471465,
   0.260634,
   0.261785,
   0.2577919,
   0.2608436,
   0.2617476,
   0.2569303,
   0.2646642,
   0.2782696,
   0.2758038,
   0.26659,
   0.2982003,
   0.2483731,
   0.2631727,
   0.2503429,
   0.27405,
   0.2769907,
   0.2759342,
   0.3200316,
   0.5942234};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,3.465);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3003[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3003[24] = {
   0.2262011,
   0.2203356,
   0.2325382,
   0.2283835,
   0.2323505,
   0.2413128,
   0.2498462,
   0.244076,
   0.25008,
   0.2500489,
   0.2430986,
   0.2484599,
   0.2466764,
   0.2380524,
   0.2391391,
   0.2247229,
   0.2262845,
   0.2342825,
   0.2212011,
   0.2246639,
   0.2223571,
   0.2229039,
   0.2264571,
   0.2562537};
   Double_t _fehx3003[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3003[24] = {
   0.2262011,
   0.2203356,
   0.2325382,
   0.2283835,
   0.2323505,
   0.2413128,
   0.2498462,
   0.244076,
   0.25008,
   0.2500489,
   0.2430986,
   0.2484599,
   0.2466764,
   0.2380524,
   0.2391391,
   0.2247229,
   0.2262845,
   0.2342825,
   0.2212011,
   0.2246639,
   0.2223571,
   0.2229039,
   0.2264571,
   0.2562537};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,3.465);
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
   
   Double_t _fx3004[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3004[24] = {
   1.015686,
   0.9588584,
   0.9696476,
   0.9389918,
   0.8839285,
   0.8575032,
   0.8833094,
   0.8277035,
   0.7801117,
   0.8369103,
   0.77847,
   0.8615792,
   0.8867223,
   0.9335844,
   0.839062,
   0.8682166,
   0.882459,
   0.8564294,
   0.8945148,
   0.9116097,
   0.9322432,
   0.9880553,
   0.9543306,
   1.065654};
   Double_t _felx3004[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3004[24] = {
   0.1136961,
   0.06125921,
   0.05075367,
   0.0442645,
   0.04190223,
   0.0406953,
   0.04225442,
   0.04123085,
   0.04140403,
   0.04441859,
   0.04386181,
   0.04786551,
   0.05261729,
   0.05713444,
   0.05285594,
   0.0566362,
   0.06075099,
   0.06164714,
   0.06472482,
   0.06578976,
   0.07463919,
   0.08503826,
   0.1102995,
   0.196266};
   Double_t _fehx3004[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3004[24] = {
   0.1111978,
   0.06125921,
   0.05075367,
   0.0442645,
   0.04190223,
   0.0406953,
   0.04225442,
   0.04123085,
   0.04140403,
   0.04441859,
   0.04386181,
   0.04786551,
   0.05261729,
   0.05713444,
   0.05285594,
   0.0566362,
   0.06075099,
   0.06164714,
   0.06472482,
   0.06578976,
   0.07463919,
   0.08503826,
   0.1077972,
   0.1891261};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,3.465);
   Graph_Graph3004->SetMinimum(0.6825909);
   Graph_Graph3004->SetMaximum(1.306798);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
