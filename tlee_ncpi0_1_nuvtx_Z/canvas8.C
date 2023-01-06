#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 10:27:35 2022) by ROOT version 6.26/00
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
   hmc__22->SetBinContent(1,31.54948);
   hmc__22->SetBinContent(2,28.8387);
   hmc__22->SetBinContent(3,30.97578);
   hmc__22->SetBinContent(4,36.07652);
   hmc__22->SetBinContent(5,28.3105);
   hmc__22->SetBinContent(6,33.76912);
   hmc__22->SetBinContent(7,30.59306);
   hmc__22->SetBinContent(8,46.5844);
   hmc__22->SetBinContent(9,33.72762);
   hmc__22->SetBinContent(10,23.9995);
   hmc__22->SetBinContent(11,29.72878);
   hmc__22->SetBinContent(12,26.58939);
   hmc__22->SetBinContent(13,29.30984);
   hmc__22->SetBinContent(14,27.84551);
   hmc__22->SetBinContent(15,29.33021);
   hmc__22->SetBinContent(16,25.83597);
   hmc__22->SetBinContent(17,23.7964);
   hmc__22->SetBinContent(18,19.41789);
   hmc__22->SetBinContent(19,23.85214);
   hmc__22->SetBinContent(20,29.08945);
   hmc__22->SetBinContent(21,51.13457);
   hmc__22->SetBinContent(22,35.1844);
   hmc__22->SetBinContent(23,24.19466);
   hmc__22->SetBinContent(24,28.03576);
   hmc__22->SetBinContent(25,26.08056);
   hmc__22->SetBinContent(26,23.95939);
   hmc__22->SetBinContent(27,30.41658);
   hmc__22->SetBinContent(28,25.90722);
   hmc__22->SetBinContent(29,40.91214);
   hmc__22->SetBinContent(30,56.28714);
   hmc__22->SetBinContent(31,1.643159);
   hmc__22->SetBinError(0,0.3397478);
   hmc__22->SetBinError(1,14.75483);
   hmc__22->SetBinError(2,12.93012);
   hmc__22->SetBinError(3,17.09044);
   hmc__22->SetBinError(4,13.61871);
   hmc__22->SetBinError(5,12.22641);
   hmc__22->SetBinError(6,10.53637);
   hmc__22->SetBinError(7,18.29972);
   hmc__22->SetBinError(8,28.95399);
   hmc__22->SetBinError(9,13.97511);
   hmc__22->SetBinError(10,11.8225);
   hmc__22->SetBinError(11,12.93088);
   hmc__22->SetBinError(12,10.53008);
   hmc__22->SetBinError(13,11.04681);
   hmc__22->SetBinError(14,10.74239);
   hmc__22->SetBinError(15,13.52102);
   hmc__22->SetBinError(16,15.19474);
   hmc__22->SetBinError(17,14.94873);
   hmc__22->SetBinError(18,13.51808);
   hmc__22->SetBinError(19,11.48539);
   hmc__22->SetBinError(20,10.51932);
   hmc__22->SetBinError(21,17.52327);
   hmc__22->SetBinError(22,20.20817);
   hmc__22->SetBinError(23,21.53002);
   hmc__22->SetBinError(24,13.78843);
   hmc__22->SetBinError(25,12.21683);
   hmc__22->SetBinError(26,13.35462);
   hmc__22->SetBinError(27,13.57023);
   hmc__22->SetBinError(28,10.54151);
   hmc__22->SetBinError(29,15.33583);
   hmc__22->SetBinError(30,18.92008);
   hmc__22->SetBinError(31,4.762859);
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
   hs8_stack_8->SetMaximum(59.1015);
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
   hbadmatch_stack_1->SetBinContent(2,1.698323);
   hbadmatch_stack_1->SetBinContent(3,0.7285981);
   hbadmatch_stack_1->SetBinContent(4,1.659272);
   hbadmatch_stack_1->SetBinContent(5,0.5964978);
   hbadmatch_stack_1->SetBinContent(6,1.0809);
   hbadmatch_stack_1->SetBinContent(7,1.373484);
   hbadmatch_stack_1->SetBinContent(8,2.298764);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,0.7640502);
   hbadmatch_stack_1->SetBinContent(12,0.6904968);
   hbadmatch_stack_1->SetBinContent(13,0.4157053);
   hbadmatch_stack_1->SetBinContent(14,2.11306);
   hbadmatch_stack_1->SetBinContent(15,2.063704);
   hbadmatch_stack_1->SetBinContent(16,1.030674);
   hbadmatch_stack_1->SetBinContent(17,0.6257179);
   hbadmatch_stack_1->SetBinContent(18,0.04941325);
   hbadmatch_stack_1->SetBinContent(19,0.9605361);
   hbadmatch_stack_1->SetBinContent(20,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,1.523176);
   hbadmatch_stack_1->SetBinContent(22,2.070346);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,1.202424);
   hbadmatch_stack_1->SetBinContent(25,1.799184);
   hbadmatch_stack_1->SetBinContent(26,0.4657666);
   hbadmatch_stack_1->SetBinContent(27,1.159724);
   hbadmatch_stack_1->SetBinContent(28,0.2441665);
   hbadmatch_stack_1->SetBinContent(29,1.707652);
   hbadmatch_stack_1->SetBinContent(30,2.557405);
   hbadmatch_stack_1->SetBinError(1,0.48078);
   hbadmatch_stack_1->SetBinError(2,0.7654737);
   hbadmatch_stack_1->SetBinError(3,0.4773774);
   hbadmatch_stack_1->SetBinError(4,0.6569969);
   hbadmatch_stack_1->SetBinError(5,0.4259352);
   hbadmatch_stack_1->SetBinError(6,0.5628355);
   hbadmatch_stack_1->SetBinError(7,0.6052856);
   hbadmatch_stack_1->SetBinError(8,1.211494);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.4538922);
   hbadmatch_stack_1->SetBinError(12,0.5315233);
   hbadmatch_stack_1->SetBinError(13,0.3484612);
   hbadmatch_stack_1->SetBinError(14,0.7569756);
   hbadmatch_stack_1->SetBinError(15,0.8218485);
   hbadmatch_stack_1->SetBinError(16,0.6310609);
   hbadmatch_stack_1->SetBinError(17,0.4441329);
   hbadmatch_stack_1->SetBinError(18,0.04941325);
   hbadmatch_stack_1->SetBinError(19,0.5044513);
   hbadmatch_stack_1->SetBinError(20,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.8332999);
   hbadmatch_stack_1->SetBinError(22,0.7563187);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.6166416);
   hbadmatch_stack_1->SetBinError(25,0.8750742);
   hbadmatch_stack_1->SetBinError(26,0.2857702);
   hbadmatch_stack_1->SetBinError(27,0.5333257);
   hbadmatch_stack_1->SetBinError(28,0.2441665);
   hbadmatch_stack_1->SetBinError(29,0.6664772);
   hbadmatch_stack_1->SetBinError(30,0.9195126);
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
   houtFV_stack_4->SetBinContent(1,10.89439);
   houtFV_stack_4->SetBinContent(2,5.723837);
   houtFV_stack_4->SetBinContent(3,6.354171);
   houtFV_stack_4->SetBinContent(4,7.989785);
   houtFV_stack_4->SetBinContent(5,6.532154);
   houtFV_stack_4->SetBinContent(6,7.904983);
   houtFV_stack_4->SetBinContent(7,6.979842);
   houtFV_stack_4->SetBinContent(8,8.437911);
   houtFV_stack_4->SetBinContent(9,4.518876);
   houtFV_stack_4->SetBinContent(10,4.194353);
   houtFV_stack_4->SetBinContent(11,7.020569);
   houtFV_stack_4->SetBinContent(12,6.038509);
   houtFV_stack_4->SetBinContent(13,6.139507);
   houtFV_stack_4->SetBinContent(14,4.892166);
   houtFV_stack_4->SetBinContent(15,8.497066);
   houtFV_stack_4->SetBinContent(16,5.652487);
   houtFV_stack_4->SetBinContent(17,5.27694);
   houtFV_stack_4->SetBinContent(18,3.798475);
   houtFV_stack_4->SetBinContent(19,5.662249);
   houtFV_stack_4->SetBinContent(20,6.948689);
   houtFV_stack_4->SetBinContent(21,9.629746);
   houtFV_stack_4->SetBinContent(22,6.210366);
   houtFV_stack_4->SetBinContent(23,7.117187);
   houtFV_stack_4->SetBinContent(24,5.40376);
   houtFV_stack_4->SetBinContent(25,6.467043);
   houtFV_stack_4->SetBinContent(26,4.876654);
   houtFV_stack_4->SetBinContent(27,6.602991);
   houtFV_stack_4->SetBinContent(28,4.086408);
   houtFV_stack_4->SetBinContent(29,4.976343);
   houtFV_stack_4->SetBinContent(30,6.684049);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,1.661585);
   houtFV_stack_4->SetBinError(2,1.219987);
   houtFV_stack_4->SetBinError(3,1.220627);
   houtFV_stack_4->SetBinError(4,1.673393);
   houtFV_stack_4->SetBinError(5,1.22972);
   houtFV_stack_4->SetBinError(6,1.476354);
   houtFV_stack_4->SetBinError(7,1.353904);
   houtFV_stack_4->SetBinError(8,1.543538);
   houtFV_stack_4->SetBinError(9,0.9975566);
   houtFV_stack_4->SetBinError(10,1.039319);
   houtFV_stack_4->SetBinError(11,1.321552);
   houtFV_stack_4->SetBinError(12,1.28014);
   houtFV_stack_4->SetBinError(13,1.294734);
   houtFV_stack_4->SetBinError(14,1.16169);
   houtFV_stack_4->SetBinError(15,1.434648);
   houtFV_stack_4->SetBinError(16,1.248883);
   houtFV_stack_4->SetBinError(17,1.114034);
   houtFV_stack_4->SetBinError(18,0.9802152);
   houtFV_stack_4->SetBinError(19,1.186615);
   houtFV_stack_4->SetBinError(20,1.324645);
   houtFV_stack_4->SetBinError(21,1.549819);
   houtFV_stack_4->SetBinError(22,1.23018);
   houtFV_stack_4->SetBinError(23,1.766803);
   houtFV_stack_4->SetBinError(24,1.195416);
   houtFV_stack_4->SetBinError(25,1.205189);
   houtFV_stack_4->SetBinError(26,1.100471);
   houtFV_stack_4->SetBinError(27,1.24348);
   houtFV_stack_4->SetBinError(28,0.9568708);
   houtFV_stack_4->SetBinError(29,1.078648);
   houtFV_stack_4->SetBinError(30,1.2789);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2966268);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1439229);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3498756);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3287398);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1839351);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5334769);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1840593);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.158448);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6848183);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3149889);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.147073);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2619032);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6297572);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.12815);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3077527);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6281111);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.06498046);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1026188);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.224364);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.056726);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.9547551);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5453709);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2792596);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.672873);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.8255943);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.7323035);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.4520847);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.162239);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,1.290608);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2133032);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06441057);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2861781);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1326673);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.08359659);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1967148);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.08298127);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06312375);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3176191);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1386624);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06944519);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.146209);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3134108);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4861673);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1287011);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3384877);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04627183);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06759654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1540082);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3135378);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4083181);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2531475);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1327596);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3671365);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.3445073);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.343833);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1797736);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3755042);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.4411399);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.03873478);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1003463);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.07624137);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.1579842);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03000036);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07755366);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04774389);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1307643);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.04049794);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,2.263566);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.112105);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.247176);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.548717);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.340495);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.445704);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.189292);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.379244);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.262384);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.303361);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.060618);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.636912);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.729001);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.764578);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.254886);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.161014);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.248508);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.265265);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.61653);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.58865);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.438106);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.284729);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.033796);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.535694);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.248075);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.61694);
   hNCpi0inFVres_stack_7->SetBinContent(27,3.679554);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.235359);
   hNCpi0inFVres_stack_7->SetBinContent(29,8.185005);
   hNCpi0inFVres_stack_7->SetBinContent(30,10.98459);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.03509174);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4570716);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6922879);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5529319);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4752123);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6318794);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5825732);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7049862);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4394644);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7468106);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5708912);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5705917);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4996198);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5114578);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7396669);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6815434);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4263874);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8142498);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5429874);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7075087);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6245505);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7061732);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7328005);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5808363);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4917691);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7001046);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6756283);
   hNCpi0inFVres_stack_7->SetBinError(27,0.6333423);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6010353);
   hNCpi0inFVres_stack_7->SetBinError(29,0.9357093);
   hNCpi0inFVres_stack_7->SetBinError(30,1.145736);
   hNCpi0inFVres_stack_7->SetBinError(31,0.0289006);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.088399);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5948671);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.435354);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.284021);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.363605);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.086756);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8166196);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8863291);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.9484909);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6457496);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.4259042);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.013521);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.573941);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.30002);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5957254);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6367747);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.250154);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.928637);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.364086);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9688938);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.9091827);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.235963);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.7562073);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.370611);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.6828182);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.2779);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.027851);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.853522);
   hNCpi0inFVdis_stack_8->SetBinContent(29,2.361887);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.38381);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6356911);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2385123);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4540143);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3429067);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1217182);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.457898);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2760375);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2815858);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3796512);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1833384);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1687342);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3450435);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5535821);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4843065);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2972944);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1819825);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4797719);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.691847);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.162715);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3403609);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2693502);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3300777);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1945162);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4262737);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1812294);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3825734);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2940856);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.522028);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.6664286);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4867025);
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
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01732447);
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
   hNCinFV_stack_11->SetBinContent(2,0.6749613);
   hNCinFV_stack_11->SetBinContent(3,0.5636427);
   hNCinFV_stack_11->SetBinContent(4,0.3934307);
   hNCinFV_stack_11->SetBinContent(5,0.512454);
   hNCinFV_stack_11->SetBinContent(6,0.9243553);
   hNCinFV_stack_11->SetBinContent(7,0.8526207);
   hNCinFV_stack_11->SetBinContent(8,0.6327568);
   hNCinFV_stack_11->SetBinContent(9,0.5681612);
   hNCinFV_stack_11->SetBinContent(10,0.6568091);
   hNCinFV_stack_11->SetBinContent(11,2.217767);
   hNCinFV_stack_11->SetBinContent(12,0.3385667);
   hNCinFV_stack_11->SetBinContent(13,0.9091824);
   hNCinFV_stack_11->SetBinContent(14,0.7437132);
   hNCinFV_stack_11->SetBinContent(15,1.021418);
   hNCinFV_stack_11->SetBinContent(16,1.038294);
   hNCinFV_stack_11->SetBinContent(17,1.658921);
   hNCinFV_stack_11->SetBinContent(18,1.376303);
   hNCinFV_stack_11->SetBinContent(19,0.4062578);
   hNCinFV_stack_11->SetBinContent(20,0.5710931);
   hNCinFV_stack_11->SetBinContent(21,2.29785);
   hNCinFV_stack_11->SetBinContent(22,1.484945);
   hNCinFV_stack_11->SetBinContent(23,0.6720612);
   hNCinFV_stack_11->SetBinContent(24,2.191477);
   hNCinFV_stack_11->SetBinContent(25,1.986043);
   hNCinFV_stack_11->SetBinContent(26,1.328318);
   hNCinFV_stack_11->SetBinContent(27,0.5138904);
   hNCinFV_stack_11->SetBinContent(28,1.072095);
   hNCinFV_stack_11->SetBinContent(29,2.699999);
   hNCinFV_stack_11->SetBinContent(30,3.584668);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.392401);
   hNCinFV_stack_11->SetBinError(3,0.326138);
   hNCinFV_stack_11->SetBinError(4,0.2781975);
   hNCinFV_stack_11->SetBinError(5,0.2775812);
   hNCinFV_stack_11->SetBinError(6,0.7537618);
   hNCinFV_stack_11->SetBinError(7,0.4610338);
   hNCinFV_stack_11->SetBinError(8,0.3252335);
   hNCinFV_stack_11->SetBinError(9,0.5681613);
   hNCinFV_stack_11->SetBinError(10,0.4108499);
   hNCinFV_stack_11->SetBinError(11,0.9042406);
   hNCinFV_stack_11->SetBinError(12,0.2212797);
   hNCinFV_stack_11->SetBinError(13,0.4108542);
   hNCinFV_stack_11->SetBinError(14,0.3783338);
   hNCinFV_stack_11->SetBinError(15,0.4986197);
   hNCinFV_stack_11->SetBinError(16,0.4318149);
   hNCinFV_stack_11->SetBinError(17,0.746528);
   hNCinFV_stack_11->SetBinError(18,0.7795411);
   hNCinFV_stack_11->SetBinError(19,0.2874962);
   hNCinFV_stack_11->SetBinError(20,0.3066905);
   hNCinFV_stack_11->SetBinError(21,0.7067798);
   hNCinFV_stack_11->SetBinError(22,0.7480252);
   hNCinFV_stack_11->SetBinError(23,0.3615947);
   hNCinFV_stack_11->SetBinError(24,0.7632391);
   hNCinFV_stack_11->SetBinError(25,0.7302876);
   hNCinFV_stack_11->SetBinError(26,0.6397927);
   hNCinFV_stack_11->SetBinError(27,0.3027413);
   hNCinFV_stack_11->SetBinError(28,0.5551335);
   hNCinFV_stack_11->SetBinError(29,0.905408);
   hNCinFV_stack_11->SetBinError(30,1.006179);
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
   hmcerror__23->SetBinContent(1,31.54948);
   hmcerror__23->SetBinContent(2,28.8387);
   hmcerror__23->SetBinContent(3,30.97578);
   hmcerror__23->SetBinContent(4,36.07652);
   hmcerror__23->SetBinContent(5,28.3105);
   hmcerror__23->SetBinContent(6,33.76912);
   hmcerror__23->SetBinContent(7,30.59306);
   hmcerror__23->SetBinContent(8,46.5844);
   hmcerror__23->SetBinContent(9,33.72762);
   hmcerror__23->SetBinContent(10,23.9995);
   hmcerror__23->SetBinContent(11,29.72878);
   hmcerror__23->SetBinContent(12,26.58939);
   hmcerror__23->SetBinContent(13,29.30984);
   hmcerror__23->SetBinContent(14,27.84551);
   hmcerror__23->SetBinContent(15,29.33021);
   hmcerror__23->SetBinContent(16,25.83597);
   hmcerror__23->SetBinContent(17,23.7964);
   hmcerror__23->SetBinContent(18,19.41789);
   hmcerror__23->SetBinContent(19,23.85214);
   hmcerror__23->SetBinContent(20,29.08945);
   hmcerror__23->SetBinContent(21,51.13457);
   hmcerror__23->SetBinContent(22,35.1844);
   hmcerror__23->SetBinContent(23,24.19466);
   hmcerror__23->SetBinContent(24,28.03576);
   hmcerror__23->SetBinContent(25,26.08056);
   hmcerror__23->SetBinContent(26,23.95939);
   hmcerror__23->SetBinContent(27,30.41658);
   hmcerror__23->SetBinContent(28,25.90722);
   hmcerror__23->SetBinContent(29,40.91214);
   hmcerror__23->SetBinContent(30,56.28714);
   hmcerror__23->SetBinContent(31,1.643159);
   hmcerror__23->SetBinError(0,0.3397478);
   hmcerror__23->SetBinError(1,14.75483);
   hmcerror__23->SetBinError(2,12.93012);
   hmcerror__23->SetBinError(3,17.09044);
   hmcerror__23->SetBinError(4,13.61871);
   hmcerror__23->SetBinError(5,12.22641);
   hmcerror__23->SetBinError(6,10.53637);
   hmcerror__23->SetBinError(7,18.29972);
   hmcerror__23->SetBinError(8,28.95399);
   hmcerror__23->SetBinError(9,13.97511);
   hmcerror__23->SetBinError(10,11.8225);
   hmcerror__23->SetBinError(11,12.93088);
   hmcerror__23->SetBinError(12,10.53008);
   hmcerror__23->SetBinError(13,11.04681);
   hmcerror__23->SetBinError(14,10.74239);
   hmcerror__23->SetBinError(15,13.52102);
   hmcerror__23->SetBinError(16,15.19474);
   hmcerror__23->SetBinError(17,14.94873);
   hmcerror__23->SetBinError(18,13.51808);
   hmcerror__23->SetBinError(19,11.48539);
   hmcerror__23->SetBinError(20,10.51932);
   hmcerror__23->SetBinError(21,17.52327);
   hmcerror__23->SetBinError(22,20.20817);
   hmcerror__23->SetBinError(23,21.53002);
   hmcerror__23->SetBinError(24,13.78843);
   hmcerror__23->SetBinError(25,12.21683);
   hmcerror__23->SetBinError(26,13.35462);
   hmcerror__23->SetBinError(27,13.57023);
   hmcerror__23->SetBinError(28,10.54151);
   hmcerror__23->SetBinError(29,15.33583);
   hmcerror__23->SetBinError(30,18.92008);
   hmcerror__23->SetBinError(31,4.762859);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.9/32","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

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
   0.4676728,
   0.4483601,
   0.5517355,
   0.3774952,
   0.4318685,
   0.3120121,
   0.5981659,
   0.6215384,
   0.4143522,
   0.4926145,
   0.4349616,
   0.3960257,
   0.3768977,
   0.3857853,
   0.4609929,
   0.5881236,
   0.6281931,
   0.6961664,
   0.4815247,
   0.3616198,
   0.3426894,
   0.5743504,
   0.8898665,
   0.4918157,
   0.4684267,
   0.5573857,
   0.446146,
   0.4068945,
   0.3748478,
   0.336135,
   2.898599,
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
   0.4676728,
   0.4483601,
   0.5517355,
   0.3774952,
   0.4318685,
   0.3120121,
   0.5981659,
   0.6215384,
   0.4143522,
   0.4926145,
   0.4349616,
   0.3960257,
   0.3768977,
   0.3857853,
   0.4609929,
   0.5881236,
   0.6281931,
   0.6961664,
   0.4815247,
   0.3616198,
   0.3426894,
   0.5743504,
   0.8898665,
   0.4918157,
   0.4684267,
   0.5573857,
   0.446146,
   0.4068945,
   0.3748478,
   0.336135,
   2.898599,
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
   0.1995932,
   0.1935896,
   0.2021947,
   0.1829511,
   0.2168043,
   0.1611378,
   0.2212767,
   0.1628104,
   0.1812855,
   0.2014958,
   0.1930378,
   0.1793137,
   0.1783364,
   0.2018906,
   0.2278005,
   0.218694,
   0.2122861,
   0.2141785,
   0.2106826,
   0.2024729,
   0.1667342,
   0.2000542,
   0.2288115,
   0.1983354,
   0.201702,
   0.2332877,
   0.2042686,
   0.2275023,
   0.2063367,
   0.1951845,
   0.5403572,
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
   0.1995932,
   0.1935896,
   0.2021947,
   0.1829511,
   0.2168043,
   0.1611378,
   0.2212767,
   0.1628104,
   0.1812855,
   0.2014958,
   0.1930378,
   0.1793137,
   0.1783364,
   0.2018906,
   0.2278005,
   0.218694,
   0.2122861,
   0.2141785,
   0.2106826,
   0.2024729,
   0.1667342,
   0.2000542,
   0.2288115,
   0.1983354,
   0.201702,
   0.2332877,
   0.2042686,
   0.2275023,
   0.2063367,
   0.1951845,
   0.5403572,
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
   0.8241024,
   1.629754,
   1.065348,
   0.8870034,
   0.9537098,
   0.7403214,
   1.078676,
   0.7083917,
   0.7708815,
   1.083356,
   0.9418483,
   0.7897888,
   0.8188375,
   1.364673,
   0.9887417,
   1.161172,
   0.9665327,
   0.9269802,
   1.006199,
   0.9625481,
   1.290712,
   0.7958073,
   0.86796,
   0.8917182,
   0.9585685,
   1.08517,
   0.7890434,
   1.157978,
   0.7821639,
   0.6395778,
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
   0.1662563,
   0.2423202,
   0.1899775,
   0.1607056,
   0.1886721,
   0.1524292,
   0.1923541,
   0.1263234,
   0.1555194,
   0.2185587,
   0.1828464,
   0.1780936,
   0.1722152,
   0.226295,
   0.1884917,
   0.2175146,
   0.2078339,
   0.2266364,
   0.2116204,
   0.186865,
   0.1613566,
   0.1544946,
   0.1957208,
   0.1836012,
   0.1973654,
   0.2189246,
   0.165949,
   0.2169163,
   0.141711,
   0.1090498,
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
   0.159616,
   0.235236,
   0.1832916,
   0.1549595,
   0.1812826,
   0.1462105,
   0.1855846,
   0.1218777,
   0.1493079,
   0.2098294,
   0.1758263,
   0.1701017,
   0.1650299,
   0.2189042,
   0.1813864,
   0.2094638,
   0.1989629,
   0.2155641,
   0.202791,
   0.1796905,
   0.1573945,
   0.148563,
   0.1869379,
   0.1761108,
   0.1893134,
   0.2101807,
   0.1590251,
   0.2088877,
   0.136644,
   0.1053846,
   0.6985327,
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
