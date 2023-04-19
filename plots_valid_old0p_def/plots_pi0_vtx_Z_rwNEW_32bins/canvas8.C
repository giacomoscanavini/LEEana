#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Feb 17 21:15:03 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
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
   pad1->Range(-169.2308,-1.32,1241.026,145.9642);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__22->SetBinContent(0,0.5884556);
   hmc__22->SetBinContent(1,32.31165);
   hmc__22->SetBinContent(2,29.41544);
   hmc__22->SetBinContent(3,32.41912);
   hmc__22->SetBinContent(4,36.95436);
   hmc__22->SetBinContent(5,30.15355);
   hmc__22->SetBinContent(6,34.39912);
   hmc__22->SetBinContent(7,32.32642);
   hmc__22->SetBinContent(8,47.37663);
   hmc__22->SetBinContent(9,34.75341);
   hmc__22->SetBinContent(10,24.65283);
   hmc__22->SetBinContent(11,30.13934);
   hmc__22->SetBinContent(12,27.75392);
   hmc__22->SetBinContent(13,29.66492);
   hmc__22->SetBinContent(14,29.26846);
   hmc__22->SetBinContent(15,29.97616);
   hmc__22->SetBinContent(16,27.06072);
   hmc__22->SetBinContent(17,23.38644);
   hmc__22->SetBinContent(18,19.29163);
   hmc__22->SetBinContent(19,24.46757);
   hmc__22->SetBinContent(20,30.57486);
   hmc__22->SetBinContent(21,52.91404);
   hmc__22->SetBinContent(22,35.84395);
   hmc__22->SetBinContent(23,25.72914);
   hmc__22->SetBinContent(24,29.04318);
   hmc__22->SetBinContent(25,26.90329);
   hmc__22->SetBinContent(26,24.97351);
   hmc__22->SetBinContent(27,31.36817);
   hmc__22->SetBinContent(28,27.59667);
   hmc__22->SetBinContent(29,43.25159);
   hmc__22->SetBinContent(30,57.77543);
   hmc__22->SetBinContent(31,1.663867);
   hmc__22->SetBinError(0,0.3397478);
   hmc__22->SetBinError(1,16.342);
   hmc__22->SetBinError(2,14.20708);
   hmc__22->SetBinError(3,17.932);
   hmc__22->SetBinError(4,14.2174);
   hmc__22->SetBinError(5,13.07206);
   hmc__22->SetBinError(6,11.2395);
   hmc__22->SetBinError(7,19.36164);
   hmc__22->SetBinError(8,31.03325);
   hmc__22->SetBinError(9,13.53712);
   hmc__22->SetBinError(10,11.16807);
   hmc__22->SetBinError(11,13.28194);
   hmc__22->SetBinError(12,11.17326);
   hmc__22->SetBinError(13,11.97401);
   hmc__22->SetBinError(14,12.24064);
   hmc__22->SetBinError(15,13.4639);
   hmc__22->SetBinError(16,14.94055);
   hmc__22->SetBinError(17,13.2372);
   hmc__22->SetBinError(18,13.48046);
   hmc__22->SetBinError(19,11.24231);
   hmc__22->SetBinError(20,11.20151);
   hmc__22->SetBinError(21,18.46787);
   hmc__22->SetBinError(22,21.78587);
   hmc__22->SetBinError(23,24.66286);
   hmc__22->SetBinError(24,12.72418);
   hmc__22->SetBinError(25,12.58037);
   hmc__22->SetBinError(26,13.87935);
   hmc__22->SetBinError(27,15.65303);
   hmc__22->SetBinError(28,11.35225);
   hmc__22->SetBinError(29,17.16425);
   hmc__22->SetBinError(30,19.15184);
   hmc__22->SetBinError(31,4.880548);
   hmc__22->SetBinError(32,0.3895343);
   hmc__22->SetBinError(33,0.3895343);
   hmc__22->SetMinimum(-1.32);
   hmc__22->SetMaximum(138.6);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",32,0,1100);
   hs8_stack_8->SetMinimum(-7.299257e-09);
   hs8_stack_8->SetMaximum(60.66421);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,0.9286332);
   hbadmatch_stack_1->SetBinContent(2,1.608988);
   hbadmatch_stack_1->SetBinContent(3,0.9825853);
   hbadmatch_stack_1->SetBinContent(4,1.660551);
   hbadmatch_stack_1->SetBinContent(5,0.536893);
   hbadmatch_stack_1->SetBinContent(6,1.016171);
   hbadmatch_stack_1->SetBinContent(7,1.532598);
   hbadmatch_stack_1->SetBinContent(8,2.194905);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,0.7640502);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,2.089084);
   hbadmatch_stack_1->SetBinContent(15,2.00141);
   hbadmatch_stack_1->SetBinContent(16,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,0.8337198);
   hbadmatch_stack_1->SetBinContent(20,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,1.434351);
   hbadmatch_stack_1->SetBinContent(22,2.057384);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,1.360711);
   hbadmatch_stack_1->SetBinContent(25,1.584931);
   hbadmatch_stack_1->SetBinContent(26,0.624704);
   hbadmatch_stack_1->SetBinContent(27,1.270501);
   hbadmatch_stack_1->SetBinContent(28,0.2441665);
   hbadmatch_stack_1->SetBinContent(29,1.707652);
   hbadmatch_stack_1->SetBinContent(30,2.496815);
   hbadmatch_stack_1->SetBinError(1,0.48078);
   hbadmatch_stack_1->SetBinError(2,0.6801404);
   hbadmatch_stack_1->SetBinError(3,0.5798114);
   hbadmatch_stack_1->SetBinError(4,0.650847);
   hbadmatch_stack_1->SetBinError(5,0.3929602);
   hbadmatch_stack_1->SetBinError(6,0.5364125);
   hbadmatch_stack_1->SetBinError(7,0.6451565);
   hbadmatch_stack_1->SetBinError(8,1.190275);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.4538922);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.7182755);
   hbadmatch_stack_1->SetBinError(15,0.761689);
   hbadmatch_stack_1->SetBinError(16,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.4192291);
   hbadmatch_stack_1->SetBinError(20,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.807188);
   hbadmatch_stack_1->SetBinError(22,0.7505334);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.6803552);
   hbadmatch_stack_1->SetBinError(25,0.7459064);
   hbadmatch_stack_1->SetBinError(26,0.3619444);
   hbadmatch_stack_1->SetBinError(27,0.5895188);
   hbadmatch_stack_1->SetBinError(28,0.2441665);
   hbadmatch_stack_1->SetBinError(29,0.6664772);
   hbadmatch_stack_1->SetBinError(30,0.9044014);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,5.504803);
   hext_stack_2->SetBinContent(2,5.739818);
   hext_stack_2->SetBinContent(3,7.716561);
   hext_stack_2->SetBinContent(4,9.704836);
   hext_stack_2->SetBinContent(5,7.2437);
   hext_stack_2->SetBinContent(6,9.988921);
   hext_stack_2->SetBinContent(7,6.240208);
   hext_stack_2->SetBinContent(8,16.46414);
   hext_stack_2->SetBinContent(9,8.57883);
   hext_stack_2->SetBinContent(10,4.296596);
   hext_stack_2->SetBinContent(11,6.325181);
   hext_stack_2->SetBinContent(12,7.996238);
   hext_stack_2->SetBinContent(13,7.504666);
   hext_stack_2->SetBinContent(14,7.015866);
   hext_stack_2->SetBinContent(15,2.595179);
   hext_stack_2->SetBinContent(16,6.000783);
   hext_stack_2->SetBinContent(17,1.950793);
   hext_stack_2->SetBinContent(18,2.834603);
   hext_stack_2->SetBinContent(19,5.359169);
   hext_stack_2->SetBinContent(20,8.332225);
   hext_stack_2->SetBinContent(21,16.37318);
   hext_stack_2->SetBinContent(22,5.676386);
   hext_stack_2->SetBinContent(23,3.807795);
   hext_stack_2->SetBinContent(24,6.877413);
   hext_stack_2->SetBinContent(25,5.587004);
   hext_stack_2->SetBinContent(26,2.103607);
   hext_stack_2->SetBinContent(27,6.012373);
   hext_stack_2->SetBinContent(28,2.916804);
   hext_stack_2->SetBinContent(29,4.218802);
   hext_stack_2->SetBinContent(30,7.422464);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,1.525286);
   hext_stack_2->SetBinError(2,1.604008);
   hext_stack_2->SetBinError(3,1.694369);
   hext_stack_2->SetBinError(4,2.105531);
   hext_stack_2->SetBinError(5,2.011201);
   hext_stack_2->SetBinError(6,2.325807);
   hext_stack_2->SetBinError(7,1.65293);
   hext_stack_2->SetBinError(8,2.896187);
   hext_stack_2->SetBinError(9,1.982751);
   hext_stack_2->SetBinError(10,1.328326);
   hext_stack_2->SetBinError(11,1.567144);
   hext_stack_2->SetBinError(12,1.926624);
   hext_stack_2->SetBinError(13,1.955197);
   hext_stack_2->SetBinError(14,1.896677);
   hext_stack_2->SetBinError(15,0.9175342);
   hext_stack_2->SetBinError(16,1.533202);
   hext_stack_2->SetBinError(17,0.8755137);
   hext_stack_2->SetBinError(18,1.106046);
   hext_stack_2->SetBinError(19,1.392494);
   hext_stack_2->SetBinError(20,1.936759);
   hext_stack_2->SetBinError(21,2.593676);
   hext_stack_2->SetBinError(22,1.49849);
   hext_stack_2->SetBinError(23,1.24058);
   hext_stack_2->SetBinError(24,1.734567);
   hext_stack_2->SetBinError(25,1.544858);
   hext_stack_2->SetBinError(26,0.9761052);
   hext_stack_2->SetBinError(27,1.511499);
   hext_stack_2->SetBinError(28,1.132884);
   hext_stack_2->SetBinError(29,1.356276);
   hext_stack_2->SetBinError(30,1.939769);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,2.350201);
   hdirt_stack_3->SetBinContent(2,1.095335);
   hdirt_stack_3->SetBinContent(3,1.663121);
   hdirt_stack_3->SetBinContent(4,0.2964016);
   hdirt_stack_3->SetBinContent(5,1.134176);
   hdirt_stack_3->SetBinContent(6,1.195391);
   hdirt_stack_3->SetBinContent(7,0.6183072);
   hdirt_stack_3->SetBinContent(8,1.495571);
   hdirt_stack_3->SetBinContent(9,1.094478);
   hdirt_stack_3->SetBinContent(10,0.5852764);
   hdirt_stack_3->SetBinContent(11,0.8750882);
   hdirt_stack_3->SetBinContent(12,0.8624582);
   hdirt_stack_3->SetBinContent(13,0.63311);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,1.165545);
   hdirt_stack_3->SetBinContent(19,0.2256247);
   hdirt_stack_3->SetBinContent(21,1.275006);
   hdirt_stack_3->SetBinContent(22,0.2761429);
   hdirt_stack_3->SetBinContent(23,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.6951543);
   hdirt_stack_3->SetBinContent(27,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.4762587);
   hdirt_stack_3->SetBinContent(30,0.2188956);
   hdirt_stack_3->SetBinError(1,0.7644099);
   hdirt_stack_3->SetBinError(2,0.5463329);
   hdirt_stack_3->SetBinError(3,1.029457);
   hdirt_stack_3->SetBinError(4,0.2100765);
   hdirt_stack_3->SetBinError(5,0.5936329);
   hdirt_stack_3->SetBinError(6,0.567433);
   hdirt_stack_3->SetBinError(7,0.4553555);
   hdirt_stack_3->SetBinError(8,0.7015128);
   hdirt_stack_3->SetBinError(9,0.4894654);
   hdirt_stack_3->SetBinError(10,0.4188361);
   hdirt_stack_3->SetBinError(11,0.540832);
   hdirt_stack_3->SetBinError(12,0.5315866);
   hdirt_stack_3->SetBinError(13,0.3242013);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.6016336);
   hdirt_stack_3->SetBinError(19,0.218999);
   hdirt_stack_3->SetBinError(21,0.5919809);
   hdirt_stack_3->SetBinError(22,0.1952625);
   hdirt_stack_3->SetBinError(23,0.2188956);
   hdirt_stack_3->SetBinError(26,0.4258516);
   hdirt_stack_3->SetBinError(27,0.2188956);
   hdirt_stack_3->SetBinError(29,0.3652866);
   hdirt_stack_3->SetBinError(30,0.2188956);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,11.59138);
   houtFV_stack_4->SetBinContent(2,6.024271);
   houtFV_stack_4->SetBinContent(3,6.629701);
   houtFV_stack_4->SetBinContent(4,8.265753);
   houtFV_stack_4->SetBinContent(5,7.142141);
   houtFV_stack_4->SetBinContent(6,8.234064);
   houtFV_stack_4->SetBinContent(7,7.243902);
   houtFV_stack_4->SetBinContent(8,8.732174);
   houtFV_stack_4->SetBinContent(9,4.74291);
   houtFV_stack_4->SetBinContent(10,4.403922);
   houtFV_stack_4->SetBinContent(11,7.284887);
   houtFV_stack_4->SetBinContent(12,6.442408);
   houtFV_stack_4->SetBinContent(13,5.905215);
   houtFV_stack_4->SetBinContent(14,5.165721);
   houtFV_stack_4->SetBinContent(15,8.862792);
   houtFV_stack_4->SetBinContent(16,6.456622);
   houtFV_stack_4->SetBinContent(17,5.906905);
   houtFV_stack_4->SetBinContent(18,3.792492);
   houtFV_stack_4->SetBinContent(19,5.996984);
   houtFV_stack_4->SetBinContent(20,7.517584);
   houtFV_stack_4->SetBinContent(21,10.44804);
   houtFV_stack_4->SetBinContent(22,6.88311);
   houtFV_stack_4->SetBinContent(23,7.683008);
   houtFV_stack_4->SetBinContent(24,5.643024);
   houtFV_stack_4->SetBinContent(25,6.801963);
   houtFV_stack_4->SetBinContent(26,5.166935);
   houtFV_stack_4->SetBinContent(27,6.633728);
   houtFV_stack_4->SetBinContent(28,5.011561);
   houtFV_stack_4->SetBinContent(29,5.281494);
   houtFV_stack_4->SetBinContent(30,6.888792);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,1.741112);
   houtFV_stack_4->SetBinError(2,1.227429);
   houtFV_stack_4->SetBinError(3,1.252633);
   houtFV_stack_4->SetBinError(4,1.696587);
   houtFV_stack_4->SetBinError(5,1.301978);
   houtFV_stack_4->SetBinError(6,1.516608);
   houtFV_stack_4->SetBinError(7,1.349577);
   houtFV_stack_4->SetBinError(8,1.552535);
   houtFV_stack_4->SetBinError(9,1.037518);
   houtFV_stack_4->SetBinError(10,1.085747);
   houtFV_stack_4->SetBinError(11,1.331415);
   houtFV_stack_4->SetBinError(12,1.280342);
   houtFV_stack_4->SetBinError(13,1.224732);
   houtFV_stack_4->SetBinError(14,1.196008);
   houtFV_stack_4->SetBinError(15,1.46463);
   houtFV_stack_4->SetBinError(16,1.375365);
   houtFV_stack_4->SetBinError(17,1.225002);
   houtFV_stack_4->SetBinError(18,0.9790016);
   houtFV_stack_4->SetBinError(19,1.2156);
   houtFV_stack_4->SetBinError(20,1.401386);
   houtFV_stack_4->SetBinError(21,1.614823);
   houtFV_stack_4->SetBinError(22,1.323723);
   houtFV_stack_4->SetBinError(23,1.830041);
   houtFV_stack_4->SetBinError(24,1.223329);
   houtFV_stack_4->SetBinError(25,1.256752);
   houtFV_stack_4->SetBinError(26,1.168713);
   houtFV_stack_4->SetBinError(27,1.246053);
   houtFV_stack_4->SetBinError(28,1.137206);
   houtFV_stack_4->SetBinError(29,1.109741);
   houtFV_stack_4->SetBinError(30,1.301327);
   houtFV_stack_4->SetBinError(31,0.3929602);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6412039);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7116223);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9484402);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.268958);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.5719541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2532885);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3533731);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3718002);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3923435);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2970212);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.336735);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.857602);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.391942);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.36537);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.970361);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.044931);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.447742);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.840343);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.857265);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.950446);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.525705);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.248034);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.206684);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.138098);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.550132);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.990964);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.412025);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.113111);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.777637);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.903856);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.155787);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.862586);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.281174);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.68132);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.787848);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.624688);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.959824);
   hNCpi0inFVres_stack_7->SetBinContent(27,4.265059);
   hNCpi0inFVres_stack_7->SetBinContent(28,5.117342);
   hNCpi0inFVres_stack_7->SetBinContent(29,10.19251);
   hNCpi0inFVres_stack_7->SetBinContent(30,12.26642);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5516328);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6774074);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6565949);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4976626);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6774068);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6785555);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7585417);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4886522);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7567864);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5632114);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5314486);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5543307);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5637875);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7930742);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7270588);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4081446);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6955973);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5860708);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6369877);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6572862);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6885198);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6892266);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6213158);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4796755);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6043263);
   hNCpi0inFVres_stack_7->SetBinError(26,0.663377);
   hNCpi0inFVres_stack_7->SetBinError(27,0.6403898);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6921845);
   hNCpi0inFVres_stack_7->SetBinError(29,1.05278);
   hNCpi0inFVres_stack_7->SetBinError(30,1.154578);
   hNCpi0inFVres_stack_7->SetBinError(31,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6412039);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.19854);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.505776);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.4457358);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8916399);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.98979);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8780218);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.10239);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8356717);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.115672);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.618376);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.42274);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.4042178);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8365039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.059872);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.463762);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.976172);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.03114);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.630994);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.9608897);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.477876);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7526357);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.479372);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.31114);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.799226);
   hNCpi0inFVdis_stack_8->SetBinContent(29,2.328662);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.536084);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2532885);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3053129);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4090187);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1610816);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2909527);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.336735);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2784203);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4105231);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2243607);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3318839);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4716302);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3891893);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1342881);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2638255);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3295301);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4534688);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3259676);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.297566);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4213615);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2461441);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.408066);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.185768);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4150799);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.3851684);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4488676);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4793377);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4863904);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(2,5.796934);
   hCCpi0inFV_stack_10->SetBinContent(3,6.816766);
   hCCpi0inFV_stack_10->SetBinContent(4,7.434137);
   hCCpi0inFV_stack_10->SetBinContent(5,3.911248);
   hCCpi0inFV_stack_10->SetBinContent(6,4.924879);
   hCCpi0inFV_stack_10->SetBinContent(7,3.79967);
   hCCpi0inFV_stack_10->SetBinContent(8,7.480628);
   hCCpi0inFV_stack_10->SetBinContent(9,7.080435);
   hCCpi0inFV_stack_10->SetBinContent(10,7.072591);
   hCCpi0inFV_stack_10->SetBinContent(11,5.710574);
   hCCpi0inFV_stack_10->SetBinContent(12,5.034906);
   hCCpi0inFV_stack_10->SetBinContent(13,6.197925);
   hCCpi0inFV_stack_10->SetBinContent(14,4.496323);
   hCCpi0inFV_stack_10->SetBinContent(15,5.720333);
   hCCpi0inFV_stack_10->SetBinContent(16,6.052058);
   hCCpi0inFV_stack_10->SetBinContent(17,5.040438);
   hCCpi0inFV_stack_10->SetBinContent(18,4.198173);
   hCCpi0inFV_stack_10->SetBinContent(19,4.181624);
   hCCpi0inFV_stack_10->SetBinContent(20,4.446451);
   hCCpi0inFV_stack_10->SetBinContent(21,8.194918);
   hCCpi0inFV_stack_10->SetBinContent(22,7.80266);
   hCCpi0inFV_stack_10->SetBinContent(23,5.352767);
   hCCpi0inFV_stack_10->SetBinContent(24,4.289689);
   hCCpi0inFV_stack_10->SetBinContent(25,5.049063);
   hCCpi0inFV_stack_10->SetBinContent(26,6.815248);
   hCCpi0inFV_stack_10->SetBinContent(27,6.951863);
   hCCpi0inFV_stack_10->SetBinContent(28,8.164365);
   hCCpi0inFV_stack_10->SetBinContent(29,10.98412);
   hCCpi0inFV_stack_10->SetBinContent(30,14.12929);
   hCCpi0inFV_stack_10->SetBinError(1,1.00081);
   hCCpi0inFV_stack_10->SetBinError(2,1.234763);
   hCCpi0inFV_stack_10->SetBinError(3,1.336033);
   hCCpi0inFV_stack_10->SetBinError(4,1.360581);
   hCCpi0inFV_stack_10->SetBinError(5,0.9814756);
   hCCpi0inFV_stack_10->SetBinError(6,1.109605);
   hCCpi0inFV_stack_10->SetBinError(7,1.018804);
   hCCpi0inFV_stack_10->SetBinError(8,1.345439);
   hCCpi0inFV_stack_10->SetBinError(9,1.315357);
   hCCpi0inFV_stack_10->SetBinError(10,1.387616);
   hCCpi0inFV_stack_10->SetBinError(11,1.266187);
   hCCpi0inFV_stack_10->SetBinError(12,1.11017);
   hCCpi0inFV_stack_10->SetBinError(13,1.232249);
   hCCpi0inFV_stack_10->SetBinError(14,1.037978);
   hCCpi0inFV_stack_10->SetBinError(15,1.210746);
   hCCpi0inFV_stack_10->SetBinError(16,1.256311);
   hCCpi0inFV_stack_10->SetBinError(17,1.08628);
   hCCpi0inFV_stack_10->SetBinError(18,1.057044);
   hCCpi0inFV_stack_10->SetBinError(19,0.9860351);
   hCCpi0inFV_stack_10->SetBinError(20,1.056906);
   hCCpi0inFV_stack_10->SetBinError(21,1.511924);
   hCCpi0inFV_stack_10->SetBinError(22,1.406833);
   hCCpi0inFV_stack_10->SetBinError(23,1.182984);
   hCCpi0inFV_stack_10->SetBinError(24,1.046809);
   hCCpi0inFV_stack_10->SetBinError(25,1.049534);
   hCCpi0inFV_stack_10->SetBinError(26,1.335606);
   hCCpi0inFV_stack_10->SetBinError(27,1.393835);
   hCCpi0inFV_stack_10->SetBinError(28,1.429326);
   hCCpi0inFV_stack_10->SetBinError(29,1.616641);
   hCCpi0inFV_stack_10->SetBinError(30,1.926234);
   hCCpi0inFV_stack_10->SetEntries(790);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.5884556);
   hNCinFV_stack_11->SetBinContent(3,0.5901461);
   hNCinFV_stack_11->SetBinContent(4,0.3934307);
   hNCinFV_stack_11->SetBinContent(5,0.9286332);
   hNCinFV_stack_11->SetBinContent(6,0.536893);
   hNCinFV_stack_11->SetBinContent(7,1.217248);
   hNCinFV_stack_11->SetBinContent(8,0.7817899);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.7319179);
   hNCinFV_stack_11->SetBinContent(11,1.947476);
   hNCinFV_stack_11->SetBinContent(12,0.5884556);
   hNCinFV_stack_11->SetBinContent(13,0.9768147);
   hNCinFV_stack_11->SetBinContent(14,0.9269427);
   hNCinFV_stack_11->SetBinContent(15,0.9818863);
   hNCinFV_stack_11->SetBinContent(16,1.176911);
   hNCinFV_stack_11->SetBinContent(17,1.17353);
   hNCinFV_stack_11->SetBinContent(18,1.072095);
   hNCinFV_stack_11->SetBinContent(19,0.5352025);
   hNCinFV_stack_11->SetBinContent(20,0.9286332);
   hNCinFV_stack_11->SetBinContent(21,2.589184);
   hNCinFV_stack_11->SetBinContent(22,1.26712);
   hNCinFV_stack_11->SetBinContent(23,0.9303237);
   hNCinFV_stack_11->SetBinContent(24,2.484368);
   hNCinFV_stack_11->SetBinContent(25,2.342597);
   hNCinFV_stack_11->SetBinContent(26,1.463836);
   hNCinFV_stack_11->SetBinContent(27,0.5884556);
   hNCinFV_stack_11->SetBinContent(28,1.072095);
   hNCinFV_stack_11->SetBinContent(29,2.784209);
   hNCinFV_stack_11->SetBinContent(30,3.808123);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3397478);
   hNCinFV_stack_11->SetBinError(3,0.340721);
   hNCinFV_stack_11->SetBinError(4,0.2781975);
   hNCinFV_stack_11->SetBinError(5,0.48078);
   hNCinFV_stack_11->SetBinError(6,0.3929602);
   hNCinFV_stack_11->SetBinError(7,0.6211758);
   hNCinFV_stack_11->SetBinError(8,0.3908977);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.438694);
   hNCinFV_stack_11->SetBinError(11,0.7600326);
   hNCinFV_stack_11->SetBinError(12,0.3397478);
   hNCinFV_stack_11->SetBinError(13,0.4368475);
   hNCinFV_stack_11->SetBinError(14,0.4800908);
   hNCinFV_stack_11->SetBinError(15,0.4391155);
   hNCinFV_stack_11->SetBinError(16,0.4804759);
   hNCinFV_stack_11->SetBinError(17,0.4790957);
   hNCinFV_stack_11->SetBinError(18,0.5551335);
   hNCinFV_stack_11->SetBinError(19,0.3921167);
   hNCinFV_stack_11->SetBinError(20,0.48078);
   hNCinFV_stack_11->SetBinError(21,0.809167);
   hNCinFV_stack_11->SetBinError(22,0.5883944);
   hNCinFV_stack_11->SetBinError(23,0.4814682);
   hNCinFV_stack_11->SetBinError(24,0.8556093);
   hNCinFV_stack_11->SetBinError(25,0.8097566);
   hNCinFV_stack_11->SetBinError(26,0.620407);
   hNCinFV_stack_11->SetBinError(27,0.3397478);
   hNCinFV_stack_11->SetBinError(28,0.5551335);
   hNCinFV_stack_11->SetBinError(29,0.8323376);
   hNCinFV_stack_11->SetBinError(30,1.020428);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetEntries(152);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,4.034528);
   hnumuCCinFV_stack_12->SetBinContent(2,3.081752);
   hnumuCCinFV_stack_12->SetBinContent(3,2.288926);
   hnumuCCinFV_stack_12->SetBinContent(4,4.416046);
   hnumuCCinFV_stack_12->SetBinContent(5,3.347428);
   hnumuCCinFV_stack_12->SetBinContent(6,2.996015);
   hnumuCCinFV_stack_12->SetBinContent(7,4.797797);
   hnumuCCinFV_stack_12->SetBinContent(8,6.268931);
   hnumuCCinFV_stack_12->SetBinContent(9,6.02374);
   hnumuCCinFV_stack_12->SetBinContent(10,1.971488);
   hnumuCCinFV_stack_12->SetBinContent(11,2.937797);
   hnumuCCinFV_stack_12->SetBinContent(12,1.830707);
   hnumuCCinFV_stack_12->SetBinContent(13,2.209575);
   hnumuCCinFV_stack_12->SetBinContent(14,1.890024);
   hnumuCCinFV_stack_12->SetBinContent(15,2.473742);
   hnumuCCinFV_stack_12->SetBinContent(16,1.790586);
   hnumuCCinFV_stack_12->SetBinContent(17,2.660128);
   hnumuCCinFV_stack_12->SetBinContent(18,1.902042);
   hnumuCCinFV_stack_12->SetBinContent(19,2.957754);
   hnumuCCinFV_stack_12->SetBinContent(20,3.61735);
   hnumuCCinFV_stack_12->SetBinContent(21,5.436676);
   hnumuCCinFV_stack_12->SetBinContent(22,4.991387);
   hnumuCCinFV_stack_12->SetBinContent(23,2.275908);
   hnumuCCinFV_stack_12->SetBinContent(24,2.916131);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(26,1.954205);
   hnumuCCinFV_stack_12->SetBinContent(27,3.067228);
   hnumuCCinFV_stack_12->SetBinContent(28,2.642277);
   hnumuCCinFV_stack_12->SetBinContent(29,3.981853);
   hnumuCCinFV_stack_12->SetBinContent(30,6.491601);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.491769);
   hnumuCCinFV_stack_12->SetBinError(2,0.880149);
   hnumuCCinFV_stack_12->SetBinError(3,0.8135411);
   hnumuCCinFV_stack_12->SetBinError(4,1.04307);
   hnumuCCinFV_stack_12->SetBinError(5,1.165508);
   hnumuCCinFV_stack_12->SetBinError(6,0.8150161);
   hnumuCCinFV_stack_12->SetBinError(7,2.365283);
   hnumuCCinFV_stack_12->SetBinError(8,2.210038);
   hnumuCCinFV_stack_12->SetBinError(9,1.379953);
   hnumuCCinFV_stack_12->SetBinError(10,0.7151803);
   hnumuCCinFV_stack_12->SetBinError(11,0.8885501);
   hnumuCCinFV_stack_12->SetBinError(12,0.7639388);
   hnumuCCinFV_stack_12->SetBinError(13,0.7559785);
   hnumuCCinFV_stack_12->SetBinError(14,0.6900356);
   hnumuCCinFV_stack_12->SetBinError(15,0.7698864);
   hnumuCCinFV_stack_12->SetBinError(16,0.6359883);
   hnumuCCinFV_stack_12->SetBinError(17,0.8276821);
   hnumuCCinFV_stack_12->SetBinError(18,0.637598);
   hnumuCCinFV_stack_12->SetBinError(19,0.9233001);
   hnumuCCinFV_stack_12->SetBinError(20,1.041783);
   hnumuCCinFV_stack_12->SetBinError(21,1.166451);
   hnumuCCinFV_stack_12->SetBinError(22,1.266767);
   hnumuCCinFV_stack_12->SetBinError(23,0.7822527);
   hnumuCCinFV_stack_12->SetBinError(24,0.8653521);
   hnumuCCinFV_stack_12->SetBinError(25,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(26,0.7142651);
   hnumuCCinFV_stack_12->SetBinError(27,0.9320677);
   hnumuCCinFV_stack_12->SetBinError(28,0.8279238);
   hnumuCCinFV_stack_12->SetBinError(29,0.996659);
   hnumuCCinFV_stack_12->SetBinError(30,1.340823);
   hnumuCCinFV_stack_12->SetEntries(389);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(24,0.9693075);
   hnueCCinFV_stack_13->SetBinContent(27,0.422001);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(30,0.4992645);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.5475369);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.4566905);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.2179626);
   hnueCCinFV_stack_13->SetBinError(24,0.7767992);
   hnueCCinFV_stack_13->SetBinError(27,0.2990829);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(30,0.3608779);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__23->SetBinContent(0,0.5884556);
   hmcerror__23->SetBinContent(1,32.31165);
   hmcerror__23->SetBinContent(2,29.41544);
   hmcerror__23->SetBinContent(3,32.41912);
   hmcerror__23->SetBinContent(4,36.95436);
   hmcerror__23->SetBinContent(5,30.15355);
   hmcerror__23->SetBinContent(6,34.39912);
   hmcerror__23->SetBinContent(7,32.32642);
   hmcerror__23->SetBinContent(8,47.37663);
   hmcerror__23->SetBinContent(9,34.75341);
   hmcerror__23->SetBinContent(10,24.65283);
   hmcerror__23->SetBinContent(11,30.13934);
   hmcerror__23->SetBinContent(12,27.75392);
   hmcerror__23->SetBinContent(13,29.66492);
   hmcerror__23->SetBinContent(14,29.26846);
   hmcerror__23->SetBinContent(15,29.97616);
   hmcerror__23->SetBinContent(16,27.06072);
   hmcerror__23->SetBinContent(17,23.38644);
   hmcerror__23->SetBinContent(18,19.29163);
   hmcerror__23->SetBinContent(19,24.46757);
   hmcerror__23->SetBinContent(20,30.57486);
   hmcerror__23->SetBinContent(21,52.91404);
   hmcerror__23->SetBinContent(22,35.84395);
   hmcerror__23->SetBinContent(23,25.72914);
   hmcerror__23->SetBinContent(24,29.04318);
   hmcerror__23->SetBinContent(25,26.90329);
   hmcerror__23->SetBinContent(26,24.97351);
   hmcerror__23->SetBinContent(27,31.36817);
   hmcerror__23->SetBinContent(28,27.59667);
   hmcerror__23->SetBinContent(29,43.25159);
   hmcerror__23->SetBinContent(30,57.77543);
   hmcerror__23->SetBinContent(31,1.663867);
   hmcerror__23->SetBinError(0,0.3397478);
   hmcerror__23->SetBinError(1,16.342);
   hmcerror__23->SetBinError(2,14.20708);
   hmcerror__23->SetBinError(3,17.932);
   hmcerror__23->SetBinError(4,14.2174);
   hmcerror__23->SetBinError(5,13.07206);
   hmcerror__23->SetBinError(6,11.2395);
   hmcerror__23->SetBinError(7,19.36164);
   hmcerror__23->SetBinError(8,31.03325);
   hmcerror__23->SetBinError(9,13.53712);
   hmcerror__23->SetBinError(10,11.16807);
   hmcerror__23->SetBinError(11,13.28194);
   hmcerror__23->SetBinError(12,11.17326);
   hmcerror__23->SetBinError(13,11.97401);
   hmcerror__23->SetBinError(14,12.24064);
   hmcerror__23->SetBinError(15,13.4639);
   hmcerror__23->SetBinError(16,14.94055);
   hmcerror__23->SetBinError(17,13.2372);
   hmcerror__23->SetBinError(18,13.48046);
   hmcerror__23->SetBinError(19,11.24231);
   hmcerror__23->SetBinError(20,11.20151);
   hmcerror__23->SetBinError(21,18.46787);
   hmcerror__23->SetBinError(22,21.78587);
   hmcerror__23->SetBinError(23,24.66286);
   hmcerror__23->SetBinError(24,12.72418);
   hmcerror__23->SetBinError(25,12.58037);
   hmcerror__23->SetBinError(26,13.87935);
   hmcerror__23->SetBinError(27,15.65303);
   hmcerror__23->SetBinError(28,11.35225);
   hmcerror__23->SetBinError(29,17.16425);
   hmcerror__23->SetBinError(30,19.15184);
   hmcerror__23->SetBinError(31,4.880548);
   hmcerror__23->SetBinError(32,0.3895343);
   hmcerror__23->SetBinError(33,0.3895343);
   hmcerror__23->SetEntries(948.2139);

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
   
   Double_t _fx3029[32] = {
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
   Double_t _fy3029[32] = {
   26,
   47,
   33,
   32,
   27,
   25,
   33,
   33,
   26,
   26,
   28,
   21,
   24,
   38,
   29,
   30,
   23,
   18,
   24,
   28,
   66,
   28,
   21,
   25,
   25,
   26,
   24,
   30,
   32,
   36,
   0,
   0};
   Double_t _felx3029[32] = {
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
   Double_t _fely3029[32] = {
   5.2453,
   6.9882,
   5.8847,
   5.7977,
   5.3414,
   5.1474,
   5.8847,
   5.8847,
   5.2453,
   5.2453,
   5.4358,
   4.7354,
   5.0476,
   6.3013,
   5.5285,
   5.6197,
   4.9457,
   4.4008,
   5.0476,
   5.4358,
   8.2509,
   5.4358,
   4.7354,
   5.1474,
   5.1474,
   5.2453,
   5.0476,
   5.6197,
   5.7977,
   6.1381,
   0,
   0};
   Double_t _fehx3029[32] = {
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
   Double_t _fehy3029[32] = {
   5.0358,
   6.7839,
   5.6776,
   5.5904,
   5.1322,
   4.9374,
   5.6776,
   5.6776,
   5.0358,
   5.0358,
   5.2271,
   4.5229,
   4.837,
   6.0955,
   5.3201,
   5.4117,
   4.7346,
   4.1858,
   4.837,
   5.2271,
   8.0483,
   5.2271,
   4.5229,
   4.9374,
   4.9374,
   5.0358,
   4.837,
   5.4117,
   5.5904,
   5.9318,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1210);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(81.45313);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.5/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 884.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 97.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[32] = {
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
   Double_t _fy3030[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[32] = {
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
   Double_t _fely3030[32] = {
   0.5057617,
   0.4829806,
   0.5531305,
   0.3847285,
   0.4335165,
   0.3267381,
   0.5989416,
   0.6550328,
   0.3895191,
   0.4530137,
   0.4406845,
   0.4025831,
   0.4036419,
   0.4182196,
   0.4491535,
   0.5521119,
   0.5660201,
   0.6987724,
   0.4594779,
   0.3663633,
   0.3490164,
   0.6077976,
   0.9585577,
   0.4381126,
   0.4676144,
   0.555763,
   0.4990101,
   0.4113629,
   0.3968467,
   0.3314875,
   2.933257,
   0};
   Double_t _fehx3030[32] = {
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
   Double_t _fehy3030[32] = {
   0.5057617,
   0.4829806,
   0.5531305,
   0.3847285,
   0.4335165,
   0.3267381,
   0.5989416,
   0.6550328,
   0.3895191,
   0.4530137,
   0.4406845,
   0.4025831,
   0.4036419,
   0.4182196,
   0.4491535,
   0.5521119,
   0.5660201,
   0.6987724,
   0.4594779,
   0.3663633,
   0.3490164,
   0.6077976,
   0.9585577,
   0.4381126,
   0.4676144,
   0.555763,
   0.4990101,
   0.4113629,
   0.3968467,
   0.3314875,
   2.933257,
   0};
   grae = new TGraphAsymmErrors(32,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1210);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3031[32] = {
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
   Double_t _fy3031[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[32] = {
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
   Double_t _fely3031[32] = {
   0.1896788,
   0.1901635,
   0.183833,
   0.1751809,
   0.1972735,
   0.16,
   0.213104,
   0.1642625,
   0.1757048,
   0.195546,
   0.1862573,
   0.1774599,
   0.1737585,
   0.1985749,
   0.2178947,
   0.2087351,
   0.2080649,
   0.2074918,
   0.1949417,
   0.1951639,
   0.1603641,
   0.1976161,
   0.2199676,
   0.1914709,
   0.1998243,
   0.2288219,
   0.1988572,
   0.2274219,
   0.2043401,
   0.1907579,
   0.5345098,
   0};
   Double_t _fehx3031[32] = {
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
   Double_t _fehy3031[32] = {
   0.1896788,
   0.1901635,
   0.183833,
   0.1751809,
   0.1972735,
   0.16,
   0.213104,
   0.1642625,
   0.1757048,
   0.195546,
   0.1862573,
   0.1774599,
   0.1737585,
   0.1985749,
   0.2178947,
   0.2087351,
   0.2080649,
   0.2074918,
   0.1949417,
   0.1951639,
   0.1603641,
   0.1976161,
   0.2199676,
   0.1914709,
   0.1998243,
   0.2288219,
   0.1988572,
   0.2274219,
   0.2043401,
   0.1907579,
   0.5345098,
   0};
   grae = new TGraphAsymmErrors(32,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1210);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3032[32] = {
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
   Double_t _fy3032[32] = {
   0.8046633,
   1.597801,
   1.017918,
   0.865933,
   0.8954168,
   0.7267629,
   1.020837,
   0.6965459,
   0.7481281,
   1.054646,
   0.9290183,
   0.7566498,
   0.8090364,
   1.298326,
   0.9674355,
   1.108618,
   0.9834757,
   0.9330471,
   0.9808902,
   0.9157851,
   1.247306,
   0.7811639,
   0.8161952,
   0.8607872,
   0.9292544,
   1.041103,
   0.7651068,
   1.087088,
   0.7398572,
   0.6231022,
   0,
   10};
   Double_t _felx3032[32] = {
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
   Double_t _fely3032[32] = {
   0.1623346,
   0.2375691,
   0.1815194,
   0.1568881,
   0.17714,
   0.1496376,
   0.1820399,
   0.124211,
   0.1509291,
   0.2127667,
   0.1803556,
   0.1706209,
   0.1701538,
   0.2152932,
   0.1844299,
   0.20767,
   0.2114772,
   0.2281197,
   0.2062975,
   0.1777866,
   0.1559303,
   0.1516518,
   0.1840481,
   0.1772326,
   0.1913298,
   0.2100346,
   0.1609147,
   0.2036369,
   0.1340459,
   0.1062407,
   0,
   0};
   Double_t _fehx3032[32] = {
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
   Double_t _fehy3032[32] = {
   0.1558509,
   0.2306238,
   0.1751312,
   0.1512785,
   0.1702022,
   0.1435328,
   0.1756334,
   0.1198397,
   0.1449009,
   0.2042687,
   0.1734311,
   0.1629644,
   0.1630545,
   0.2082618,
   0.1774777,
   0.1999836,
   0.2024506,
   0.2169749,
   0.1976902,
   0.1709607,
   0.1521014,
   0.1458294,
   0.175789,
   0.170002,
   0.183524,
   0.2016457,
   0.1542009,
   0.1960997,
   0.129253,
   0.1026699,
   0.6898388,
   0};
   grae = new TGraphAsymmErrors(32,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1210);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
