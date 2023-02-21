#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Jun  8 13:23:08 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-1.307692,-3.971845,1.25641,439.2025);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__22->SetBinContent(1,21.60916);
   hmc__22->SetBinContent(2,18.61842);
   hmc__22->SetBinContent(3,15.79515);
   hmc__22->SetBinContent(4,11.75235);
   hmc__22->SetBinContent(5,14.57143);
   hmc__22->SetBinContent(6,15.97358);
   hmc__22->SetBinContent(7,17.46639);
   hmc__22->SetBinContent(8,11.92003);
   hmc__22->SetBinContent(9,12.88639);
   hmc__22->SetBinContent(10,10.30172);
   hmc__22->SetBinContent(11,16.7668);
   hmc__22->SetBinContent(12,22.27427);
   hmc__22->SetBinContent(13,25.44679);
   hmc__22->SetBinContent(14,21.33526);
   hmc__22->SetBinContent(15,17.88083);
   hmc__22->SetBinContent(16,22.33441);
   hmc__22->SetBinContent(17,25.13429);
   hmc__22->SetBinContent(18,26.69465);
   hmc__22->SetBinContent(19,36.00155);
   hmc__22->SetBinContent(20,37.79253);
   hmc__22->SetBinContent(21,53.90347);
   hmc__22->SetBinContent(22,71.26236);
   hmc__22->SetBinContent(23,95.92032);
   hmc__22->SetBinContent(24,120.3893);
   hmc__22->SetBinContent(25,198.5923);
   hmc__22->SetBinError(1,8.9313);
   hmc__22->SetBinError(2,6.363843);
   hmc__22->SetBinError(3,5.247165);
   hmc__22->SetBinError(4,6.295148);
   hmc__22->SetBinError(5,8.540302);
   hmc__22->SetBinError(6,7.070442);
   hmc__22->SetBinError(7,6.062701);
   hmc__22->SetBinError(8,4.876628);
   hmc__22->SetBinError(9,3.981926);
   hmc__22->SetBinError(10,4.051193);
   hmc__22->SetBinError(11,7.223637);
   hmc__22->SetBinError(12,7.442806);
   hmc__22->SetBinError(13,6.746975);
   hmc__22->SetBinError(14,6.65363);
   hmc__22->SetBinError(15,5.855864);
   hmc__22->SetBinError(16,7.139584);
   hmc__22->SetBinError(17,8.071771);
   hmc__22->SetBinError(18,8.362366);
   hmc__22->SetBinError(19,11.4746);
   hmc__22->SetBinError(20,10.24586);
   hmc__22->SetBinError(21,15.16499);
   hmc__22->SetBinError(22,14.4741);
   hmc__22->SetBinError(23,19.96183);
   hmc__22->SetBinError(24,24.38172);
   hmc__22->SetBinError(25,36.27343);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-3.971845);
   hmc__22->SetMaximum(417.0437);
   hmc__22->SetEntries(926.8397);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-1,1);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(208.5219);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.108553);
   hbadmatch_stack_1->SetBinContent(2,0.474294);
   hbadmatch_stack_1->SetBinContent(3,0.6803553);
   hbadmatch_stack_1->SetBinContent(4,0.9286332);
   hbadmatch_stack_1->SetBinContent(5,0.8108466);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,0.7336084);
   hbadmatch_stack_1->SetBinContent(8,2.648355e-06);
   hbadmatch_stack_1->SetBinContent(10,0.2221688);
   hbadmatch_stack_1->SetBinContent(11,1.341418);
   hbadmatch_stack_1->SetBinContent(12,1.346657);
   hbadmatch_stack_1->SetBinContent(13,0.2421255);
   hbadmatch_stack_1->SetBinContent(14,2.691218);
   hbadmatch_stack_1->SetBinContent(15,1.072095);
   hbadmatch_stack_1->SetBinContent(16,0.7319179);
   hbadmatch_stack_1->SetBinContent(17,1.110034);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,1.537149);
   hbadmatch_stack_1->SetBinContent(20,1.22546);
   hbadmatch_stack_1->SetBinContent(21,1.950857);
   hbadmatch_stack_1->SetBinContent(22,1.676516);
   hbadmatch_stack_1->SetBinContent(23,2.505893);
   hbadmatch_stack_1->SetBinContent(24,4.249735);
   hbadmatch_stack_1->SetBinContent(25,5.419033);
   hbadmatch_stack_1->SetBinError(1,0.5689665);
   hbadmatch_stack_1->SetBinError(2,0.3355234);
   hbadmatch_stack_1->SetBinError(3,0.4810838);
   hbadmatch_stack_1->SetBinError(4,0.48078);
   hbadmatch_stack_1->SetBinError(5,0.4059551);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.4394482);
   hbadmatch_stack_1->SetBinError(8,2.648355e-06);
   hbadmatch_stack_1->SetBinError(10,0.2221688);
   hbadmatch_stack_1->SetBinError(11,0.6148156);
   hbadmatch_stack_1->SetBinError(12,0.7102975);
   hbadmatch_stack_1->SetBinError(13,0.2421255);
   hbadmatch_stack_1->SetBinError(14,1.075624);
   hbadmatch_stack_1->SetBinError(15,0.5551335);
   hbadmatch_stack_1->SetBinError(16,0.438694);
   hbadmatch_stack_1->SetBinError(17,0.5695706);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.6569839);
   hbadmatch_stack_1->SetBinError(20,0.5024785);
   hbadmatch_stack_1->SetBinError(21,0.7609034);
   hbadmatch_stack_1->SetBinError(22,0.6589227);
   hbadmatch_stack_1->SetBinError(23,0.7892909);
   hbadmatch_stack_1->SetBinError(24,1.038438);
   hbadmatch_stack_1->SetBinError(25,1.556548);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1532;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,3.330584);
   hext_stack_2->SetBinContent(2,4.435048);
   hext_stack_2->SetBinContent(3,4.021268);
   hext_stack_2->SetBinContent(4,2.192989);
   hext_stack_2->SetBinContent(5,4.125011);
   hext_stack_2->SetBinContent(6,4.919439);
   hext_stack_2->SetBinContent(7,7.015866);
   hext_stack_2->SetBinContent(8,2.345802);
   hext_stack_2->SetBinContent(9,4.620993);
   hext_stack_2->SetBinContent(10,3.864046);
   hext_stack_2->SetBinContent(11,5.027592);
   hext_stack_2->SetBinContent(12,8.802256);
   hext_stack_2->SetBinContent(13,10.73428);
   hext_stack_2->SetBinContent(14,6.325181);
   hext_stack_2->SetBinContent(15,5.173224);
   hext_stack_2->SetBinContent(16,4.863188);
   hext_stack_2->SetBinContent(17,6.254569);
   hext_stack_2->SetBinContent(18,7.105247);
   hext_stack_2->SetBinContent(19,5.281377);
   hext_stack_2->SetBinContent(20,8.663803);
   hext_stack_2->SetBinContent(21,11.56625);
   hext_stack_2->SetBinContent(22,13.03983);
   hext_stack_2->SetBinContent(23,19.02184);
   hext_stack_2->SetBinContent(24,15.91033);
   hext_stack_2->SetBinContent(25,30.47993);
   hext_stack_2->SetBinError(1,1.116937);
   hext_stack_2->SetBinError(2,1.533985);
   hext_stack_2->SetBinError(3,1.545635);
   hext_stack_2->SetBinError(4,0.9009267);
   hext_stack_2->SetBinError(5,1.358482);
   hext_stack_2->SetBinError(6,1.563138);
   hext_stack_2->SetBinError(7,1.896677);
   hext_stack_2->SetBinError(8,0.9989624);
   hext_stack_2->SetBinError(9,1.367364);
   hext_stack_2->SetBinError(10,1.437918);
   hext_stack_2->SetBinError(11,1.426537);
   hext_stack_2->SetBinError(12,2.060031);
   hext_stack_2->SetBinError(13,2.297288);
   hext_stack_2->SetBinError(14,1.567144);
   hext_stack_2->SetBinError(15,1.556427);
   hext_stack_2->SetBinError(16,1.383773);
   hext_stack_2->SetBinError(17,1.526359);
   hext_stack_2->SetBinError(18,1.859105);
   hext_stack_2->SetBinError(19,1.41918);
   hext_stack_2->SetBinError(20,1.911823);
   hext_stack_2->SetBinError(21,2.311038);
   hext_stack_2->SetBinError(22,2.411624);
   hext_stack_2->SetBinError(23,2.904121);
   hext_stack_2->SetBinError(24,2.45627);
   hext_stack_2->SetBinError(25,3.76606);
   hext_stack_2->SetEntries(479);

   ci = 1533;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(3,0.3569671);
   hdirt_stack_3->SetBinContent(4,0.6084618);
   hdirt_stack_3->SetBinContent(5,1.880635);
   hdirt_stack_3->SetBinContent(6,0.165479);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.804172);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.260563);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.5930034);
   hdirt_stack_3->SetBinContent(16,0.5570828);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1583301);
   hdirt_stack_3->SetBinContent(19,0.30685);
   hdirt_stack_3->SetBinContent(20,1.4492);
   hdirt_stack_3->SetBinContent(21,0.9140499);
   hdirt_stack_3->SetBinContent(22,2.285562);
   hdirt_stack_3->SetBinContent(23,1.940291);
   hdirt_stack_3->SetBinContent(24,1.980797);
   hdirt_stack_3->SetBinContent(25,2.43779);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(3,0.258803);
   hdirt_stack_3->SetBinError(4,0.4468525);
   hdirt_stack_3->SetBinError(5,1.062201);
   hdirt_stack_3->SetBinError(6,0.165479);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.4725875);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.260563);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4234405);
   hdirt_stack_3->SetBinError(16,0.4028472);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1583301);
   hdirt_stack_3->SetBinError(19,0.2130001);
   hdirt_stack_3->SetBinError(20,0.5865551);
   hdirt_stack_3->SetBinError(21,0.4788161);
   hdirt_stack_3->SetBinError(22,0.8444637);
   hdirt_stack_3->SetBinError(23,0.7358752);
   hdirt_stack_3->SetBinError(24,0.7131444);
   hdirt_stack_3->SetBinError(25,0.8792524);
   hdirt_stack_3->SetEntries(82);

   ci = 1534;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,6.248837);
   houtFV_stack_4->SetBinContent(2,6.408533);
   houtFV_stack_4->SetBinContent(3,5.168625);
   houtFV_stack_4->SetBinContent(4,3.140684);
   houtFV_stack_4->SetBinContent(5,3.879364);
   houtFV_stack_4->SetBinContent(6,4.499704);
   houtFV_stack_4->SetBinContent(7,4.652791);
   houtFV_stack_4->SetBinContent(8,4.713483);
   houtFV_stack_4->SetBinContent(9,4.099579);
   houtFV_stack_4->SetBinContent(10,2.147326);
   houtFV_stack_4->SetBinContent(11,3.45781);
   houtFV_stack_4->SetBinContent(12,3.845732);
   houtFV_stack_4->SetBinContent(13,5.081398);
   houtFV_stack_4->SetBinContent(14,4.633319);
   houtFV_stack_4->SetBinContent(15,4.625048);
   houtFV_stack_4->SetBinContent(16,3.699926);
   houtFV_stack_4->SetBinContent(17,7.285603);
   houtFV_stack_4->SetBinContent(18,5.879596);
   houtFV_stack_4->SetBinContent(19,8.103383);
   houtFV_stack_4->SetBinContent(20,7.357743);
   houtFV_stack_4->SetBinContent(21,11.85707);
   houtFV_stack_4->SetBinContent(22,18.27219);
   houtFV_stack_4->SetBinContent(23,21.45299);
   houtFV_stack_4->SetBinContent(24,22.98674);
   houtFV_stack_4->SetBinContent(25,30.21464);
   houtFV_stack_4->SetBinError(1,1.295041);
   houtFV_stack_4->SetBinError(2,1.225574);
   houtFV_stack_4->SetBinError(3,1.168996);
   houtFV_stack_4->SetBinError(4,0.7851764);
   houtFV_stack_4->SetBinError(5,0.9008903);
   houtFV_stack_4->SetBinError(6,1.038616);
   houtFV_stack_4->SetBinError(7,1.109258);
   houtFV_stack_4->SetBinError(8,1.603029);
   houtFV_stack_4->SetBinError(9,1.029632);
   houtFV_stack_4->SetBinError(10,0.6930639);
   houtFV_stack_4->SetBinError(11,0.9304276);
   houtFV_stack_4->SetBinError(12,1.02834);
   houtFV_stack_4->SetBinError(13,1.09156);
   houtFV_stack_4->SetBinError(14,1.101312);
   houtFV_stack_4->SetBinError(15,1.099451);
   houtFV_stack_4->SetBinError(16,1.057007);
   houtFV_stack_4->SetBinError(17,1.331229);
   houtFV_stack_4->SetBinError(18,1.224318);
   houtFV_stack_4->SetBinError(19,1.446241);
   houtFV_stack_4->SetBinError(20,1.376501);
   houtFV_stack_4->SetBinError(21,1.75268);
   houtFV_stack_4->SetBinError(22,2.364997);
   houtFV_stack_4->SetBinError(23,2.330226);
   houtFV_stack_4->SetBinError(24,2.37324);
   houtFV_stack_4->SetBinError(25,2.80513);
   houtFV_stack_4->SetEntries(862);

   ci = 1535;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.093924);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.574798);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6032522);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9340332);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1536;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2390593);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.06834073);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1537;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.31438);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.81334);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.14374);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.9489359);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.603094);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.351826);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.532844);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.948272);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.672344);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.115672);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.509184);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.310972);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.861178);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.784608);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.053566);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.735456);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.17812);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.565246);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.923785);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.965472);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.768938);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.50723);
   hNCpi0inFVres_stack_7->SetBinContent(23,13.98226);
   hNCpi0inFVres_stack_7->SetBinContent(24,18.65504);
   hNCpi0inFVres_stack_7->SetBinContent(25,28.59711);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4859236);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4029467);
   hNCpi0inFVres_stack_7->SetBinError(3,0.379057);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3032882);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4204368);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3701385);
   hNCpi0inFVres_stack_7->SetBinError(7,0.385757);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3247714);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3907692);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3318839);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5364907);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3399938);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6764493);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3772552);
   hNCpi0inFVres_stack_7->SetBinError(15,0.544293);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5908111);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5656826);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8011715);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7454288);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7722286);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9683033);
   hNCpi0inFVres_stack_7->SetBinError(22,1.187428);
   hNCpi0inFVres_stack_7->SetBinError(23,1.143966);
   hNCpi0inFVres_stack_7->SetBinError(24,1.358902);
   hNCpi0inFVres_stack_7->SetBinError(25,1.713027);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1538;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.710622);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2231999);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6141361);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4879178);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5581679);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.351162);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.36694);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.243466);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.620784);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.238824);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.869818);
   hNCpi0inFVdis_stack_8->SetBinContent(25,10.29016);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2699026);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.07891307);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2874767);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1427183);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2198343);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3879371);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3871841);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4708035);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5393848);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6692183);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7908215);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.019218);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1539;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1540;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1541;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,5.652223);
   hCCpi0inFV_stack_11->SetBinContent(2,2.143405);
   hCCpi0inFV_stack_11->SetBinContent(3,3.188301);
   hCCpi0inFV_stack_11->SetBinContent(4,2.250697);
   hCCpi0inFV_stack_11->SetBinContent(5,1.320373);
   hCCpi0inFV_stack_11->SetBinContent(6,1.516639);
   hCCpi0inFV_stack_11->SetBinContent(7,1.607298);
   hCCpi0inFV_stack_11->SetBinContent(8,2.138387);
   hCCpi0inFV_stack_11->SetBinContent(9,1.303918);
   hCCpi0inFV_stack_11->SetBinContent(10,0.9303237);
   hCCpi0inFV_stack_11->SetBinContent(11,2.587494);
   hCCpi0inFV_stack_11->SetBinContent(12,5.156994);
   hCCpi0inFV_stack_11->SetBinContent(13,2.828875);
   hCCpi0inFV_stack_11->SetBinContent(14,4.735065);
   hCCpi0inFV_stack_11->SetBinContent(15,2.447412);
   hCCpi0inFV_stack_11->SetBinContent(16,5.171607);
   hCCpi0inFV_stack_11->SetBinContent(17,3.619252);
   hCCpi0inFV_stack_11->SetBinContent(18,3.413002);
   hCCpi0inFV_stack_11->SetBinContent(19,8.456924);
   hCCpi0inFV_stack_11->SetBinContent(20,6.771529);
   hCCpi0inFV_stack_11->SetBinContent(21,10.30141);
   hCCpi0inFV_stack_11->SetBinContent(22,13.09446);
   hCCpi0inFV_stack_11->SetBinContent(23,24.25928);
   hCCpi0inFV_stack_11->SetBinContent(24,32.26804);
   hCCpi0inFV_stack_11->SetBinContent(25,55.83693);
   hCCpi0inFV_stack_11->SetBinError(1,1.166113);
   hCCpi0inFV_stack_11->SetBinError(2,0.6915255);
   hCCpi0inFV_stack_11->SetBinError(3,0.924489);
   hCCpi0inFV_stack_11->SetBinError(4,0.7346377);
   hCCpi0inFV_stack_11->SetBinError(5,0.5548703);
   hCCpi0inFV_stack_11->SetBinError(6,0.6389749);
   hCCpi0inFV_stack_11->SetBinError(7,0.6796534);
   hCCpi0inFV_stack_11->SetBinError(8,0.6899324);
   hCCpi0inFV_stack_11->SetBinError(9,0.601495);
   hCCpi0inFV_stack_11->SetBinError(10,0.4814682);
   hCCpi0inFV_stack_11->SetBinError(11,0.8087577);
   hCCpi0inFV_stack_11->SetBinError(12,1.166654);
   hCCpi0inFV_stack_11->SetBinError(13,0.8437524);
   hCCpi0inFV_stack_11->SetBinError(14,1.127723);
   hCCpi0inFV_stack_11->SetBinError(15,0.7605193);
   hCCpi0inFV_stack_11->SetBinError(16,1.143177);
   hCCpi0inFV_stack_11->SetBinError(17,0.8984765);
   hCCpi0inFV_stack_11->SetBinError(18,0.981436);
   hCCpi0inFV_stack_11->SetBinError(19,1.485247);
   hCCpi0inFV_stack_11->SetBinError(20,1.275742);
   hCCpi0inFV_stack_11->SetBinError(21,1.587175);
   hCCpi0inFV_stack_11->SetBinError(22,1.831056);
   hCCpi0inFV_stack_11->SetBinError(23,2.505006);
   hCCpi0inFV_stack_11->SetBinError(24,2.852292);
   hCCpi0inFV_stack_11->SetBinError(25,3.795781);
   hCCpi0inFV_stack_11->SetEntries(859);

   ci = 1542;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs8->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.1950248);
   hNCinFV_stack_12->SetBinContent(2,0.5884556);
   hNCinFV_stack_12->SetBinContent(6,0.1950248);
   hNCinFV_stack_12->SetBinContent(8,0.3401776);
   hNCinFV_stack_12->SetBinContent(9,0.3917402);
   hNCinFV_stack_12->SetBinContent(10,0.3401776);
   hNCinFV_stack_12->SetBinContent(16,0.3934307);
   hNCinFV_stack_12->SetBinContent(17,0.536893);
   hNCinFV_stack_12->SetBinContent(18,0.3401776);
   hNCinFV_stack_12->SetBinContent(19,0.9818863);
   hNCinFV_stack_12->SetBinContent(20,0.1967154);
   hNCinFV_stack_12->SetBinContent(21,0.7319179);
   hNCinFV_stack_12->SetBinContent(22,0.7336084);
   hNCinFV_stack_12->SetBinContent(23,1.907138);
   hNCinFV_stack_12->SetBinContent(24,1.804013);
   hNCinFV_stack_12->SetBinContent(25,5.233312);
   hNCinFV_stack_12->SetBinError(1,0.1950249);
   hNCinFV_stack_12->SetBinError(2,0.3397478);
   hNCinFV_stack_12->SetBinError(6,0.1950249);
   hNCinFV_stack_12->SetBinError(8,0.3401776);
   hNCinFV_stack_12->SetBinError(9,0.2770047);
   hNCinFV_stack_12->SetBinError(10,0.3401776);
   hNCinFV_stack_12->SetBinError(16,0.2781975);
   hNCinFV_stack_12->SetBinError(17,0.3929602);
   hNCinFV_stack_12->SetBinError(18,0.3401776);
   hNCinFV_stack_12->SetBinError(19,0.4391155);
   hNCinFV_stack_12->SetBinError(20,0.1967154);
   hNCinFV_stack_12->SetBinError(21,0.438694);
   hNCinFV_stack_12->SetBinError(22,0.4394482);
   hNCinFV_stack_12->SetBinError(23,0.6501133);
   hNCinFV_stack_12->SetBinError(24,0.7075491);
   hNCinFV_stack_12->SetBinError(25,1.127758);
   hNCinFV_stack_12->SetEntries(65);

   ci = 1543;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,1.169432);
   hnumuCCinFV_stack_13->SetBinContent(2,0.9609864);
   hnumuCCinFV_stack_13->SetBinContent(3,1.152193);
   hnumuCCinFV_stack_13->SetBinContent(4,1.347811);
   hnumuCCinFV_stack_13->SetBinContent(5,0.590071);
   hnumuCCinFV_stack_13->SetBinContent(6,1.85827);
   hnumuCCinFV_stack_13->SetBinContent(7,1.646409);
   hnumuCCinFV_stack_13->SetBinContent(8,1.322309);
   hnumuCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnumuCCinFV_stack_13->SetBinContent(10,0.4734525);
   hnumuCCinFV_stack_13->SetBinContent(11,1.154407);
   hnumuCCinFV_stack_13->SetBinContent(12,1.397982);
   hnumuCCinFV_stack_13->SetBinContent(13,1.527718);
   hnumuCCinFV_stack_13->SetBinContent(14,1.026371);
   hnumuCCinFV_stack_13->SetBinContent(15,0.679665);
   hnumuCCinFV_stack_13->SetBinContent(16,2.456899);
   hnumuCCinFV_stack_13->SetBinContent(17,2.495934);
   hnumuCCinFV_stack_13->SetBinContent(18,3.19944);
   hnumuCCinFV_stack_13->SetBinContent(19,3.835664);
   hnumuCCinFV_stack_13->SetBinContent(20,4.795667);
   hnumuCCinFV_stack_13->SetBinContent(21,5.289088);
   hnumuCCinFV_stack_13->SetBinContent(22,6.544106);
   hnumuCCinFV_stack_13->SetBinContent(23,5.607178);
   hnumuCCinFV_stack_13->SetBinContent(24,12.984);
   hnumuCCinFV_stack_13->SetBinContent(25,18.11854);
   hnumuCCinFV_stack_13->SetBinError(1,0.5377112);
   hnumuCCinFV_stack_13->SetBinError(2,0.4947883);
   hnumuCCinFV_stack_13->SetBinError(3,0.598262);
   hnumuCCinFV_stack_13->SetBinError(4,0.5526787);
   hnumuCCinFV_stack_13->SetBinError(5,0.4398017);
   hnumuCCinFV_stack_13->SetBinError(6,0.7242613);
   hnumuCCinFV_stack_13->SetBinError(7,0.7752373);
   hnumuCCinFV_stack_13->SetBinError(8,0.5439279);
   hnumuCCinFV_stack_13->SetBinError(9,0.2781975);
   hnumuCCinFV_stack_13->SetBinError(10,0.3350065);
   hnumuCCinFV_stack_13->SetBinError(11,0.5178159);
   hnumuCCinFV_stack_13->SetBinError(12,0.6528146);
   hnumuCCinFV_stack_13->SetBinError(13,0.6537341);
   hnumuCCinFV_stack_13->SetBinError(14,0.538455);
   hnumuCCinFV_stack_13->SetBinError(15,0.3941811);
   hnumuCCinFV_stack_13->SetBinError(16,0.8489119);
   hnumuCCinFV_stack_13->SetBinError(17,0.8647605);
   hnumuCCinFV_stack_13->SetBinError(18,0.9569451);
   hnumuCCinFV_stack_13->SetBinError(19,1.07386);
   hnumuCCinFV_stack_13->SetBinError(20,1.314395);
   hnumuCCinFV_stack_13->SetBinError(21,1.174064);
   hnumuCCinFV_stack_13->SetBinError(22,1.309352);
   hnumuCCinFV_stack_13->SetBinError(23,1.179242);
   hnumuCCinFV_stack_13->SetBinError(24,2.792355);
   hnumuCCinFV_stack_13->SetBinError(25,3.058704);
   hnumuCCinFV_stack_13->SetEntries(320);

   ci = 1544;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_14->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(25,3.19472);
   hnueCCinFV_stack_14->SetBinError(2,0.340721);
   hnueCCinFV_stack_14->SetBinError(6,0.3025491);
   hnueCCinFV_stack_14->SetBinError(18,0.1967154);
   hnueCCinFV_stack_14->SetBinError(21,0.1967154);
   hnueCCinFV_stack_14->SetBinError(23,0.1950249);
   hnueCCinFV_stack_14->SetBinError(24,0.1967154);
   hnueCCinFV_stack_14->SetBinError(25,1.151578);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1545;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnueCCinFV_stack_14,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__23->SetBinContent(1,21.60916);
   hmcerror__23->SetBinContent(2,18.61842);
   hmcerror__23->SetBinContent(3,15.79515);
   hmcerror__23->SetBinContent(4,11.75235);
   hmcerror__23->SetBinContent(5,14.57143);
   hmcerror__23->SetBinContent(6,15.97358);
   hmcerror__23->SetBinContent(7,17.46639);
   hmcerror__23->SetBinContent(8,11.92003);
   hmcerror__23->SetBinContent(9,12.88639);
   hmcerror__23->SetBinContent(10,10.30172);
   hmcerror__23->SetBinContent(11,16.7668);
   hmcerror__23->SetBinContent(12,22.27427);
   hmcerror__23->SetBinContent(13,25.44679);
   hmcerror__23->SetBinContent(14,21.33526);
   hmcerror__23->SetBinContent(15,17.88083);
   hmcerror__23->SetBinContent(16,22.33441);
   hmcerror__23->SetBinContent(17,25.13429);
   hmcerror__23->SetBinContent(18,26.69465);
   hmcerror__23->SetBinContent(19,36.00155);
   hmcerror__23->SetBinContent(20,37.79253);
   hmcerror__23->SetBinContent(21,53.90347);
   hmcerror__23->SetBinContent(22,71.26236);
   hmcerror__23->SetBinContent(23,95.92032);
   hmcerror__23->SetBinContent(24,120.3893);
   hmcerror__23->SetBinContent(25,198.5923);
   hmcerror__23->SetBinError(1,8.9313);
   hmcerror__23->SetBinError(2,6.363843);
   hmcerror__23->SetBinError(3,5.247165);
   hmcerror__23->SetBinError(4,6.295148);
   hmcerror__23->SetBinError(5,8.540302);
   hmcerror__23->SetBinError(6,7.070442);
   hmcerror__23->SetBinError(7,6.062701);
   hmcerror__23->SetBinError(8,4.876628);
   hmcerror__23->SetBinError(9,3.981926);
   hmcerror__23->SetBinError(10,4.051193);
   hmcerror__23->SetBinError(11,7.223637);
   hmcerror__23->SetBinError(12,7.442806);
   hmcerror__23->SetBinError(13,6.746975);
   hmcerror__23->SetBinError(14,6.65363);
   hmcerror__23->SetBinError(15,5.855864);
   hmcerror__23->SetBinError(16,7.139584);
   hmcerror__23->SetBinError(17,8.071771);
   hmcerror__23->SetBinError(18,8.362366);
   hmcerror__23->SetBinError(19,11.4746);
   hmcerror__23->SetBinError(20,10.24586);
   hmcerror__23->SetBinError(21,15.16499);
   hmcerror__23->SetBinError(22,14.4741);
   hmcerror__23->SetBinError(23,19.96183);
   hmcerror__23->SetBinError(24,24.38172);
   hmcerror__23->SetBinError(25,36.27343);
   hmcerror__23->SetBinError(26,0.3895343);
   hmcerror__23->SetEntries(926.8397);

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
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   27,
   13,
   11,
   9,
   14,
   11,
   12,
   13,
   16,
   15,
   14,
   17,
   15,
   15,
   15,
   17,
   26,
   24,
   31,
   43,
   48,
   64,
   95,
   131,
   189};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   5.3414,
   3.77763,
   3.4975,
   3.19354,
   3.9102,
   3.4975,
   3.64022,
   3.77763,
   4.1628,
   4.0385,
   3.9102,
   4.2835,
   4.0385,
   4.0385,
   4.0385,
   4.2835,
   5.2453,
   5.0476,
   5.7094,
   6.6917,
   7.0604,
   8.1273,
   9.8686,
   11.44552,
   13.74773};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   5.1322,
   3.5552,
   3.27,
   2.9582,
   3.6898,
   3.27,
   3.4155,
   3.5552,
   3.9454,
   3.8197,
   3.6898,
   4.0673,
   3.8197,
   3.8197,
   3.8197,
   4.0673,
   5.0358,
   4.837,
   5.5017,
   6.4868,
   6.8561,
   7.9246,
   9.667,
   11.44552,
   13.74773};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(5.225814);
   Graph_Graph3029->SetMaximum(222.4419);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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

   ci = 1532;
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

   ci = 1533;
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

   ci = 1534;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

   ci = 1535;
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

   ci = 1536;
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

   ci = 1537;
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

   ci = 1538;
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

   ci = 1539;
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

   ci = 1540;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1541;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 203.0","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 14.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 82.0","F");

   ci = 1544;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1545;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   0.4133109,
   0.3418036,
   0.332201,
   0.5356503,
   0.5860991,
   0.4426336,
   0.3471068,
   0.4091119,
   0.3090025,
   0.3932539,
   0.4308299,
   0.3341436,
   0.2651405,
   0.3118607,
   0.3274939,
   0.3196675,
   0.3211457,
   0.31326,
   0.3187251,
   0.2711081,
   0.281336,
   0.2031101,
   0.2081085,
   0.2025241,
   0.1826528};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   0.4133109,
   0.3418036,
   0.332201,
   0.5356503,
   0.5860991,
   0.4426336,
   0.3471068,
   0.4091119,
   0.3090025,
   0.3932539,
   0.4308299,
   0.3341436,
   0.2651405,
   0.3118607,
   0.3274939,
   0.3196675,
   0.3211457,
   0.31326,
   0.3187251,
   0.2711081,
   0.281336,
   0.2031101,
   0.2081085,
   0.2025241,
   0.1826528};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0.2225816,
   0.191635,
   0.2014884,
   0.2355284,
   0.2383522,
   0.2219267,
   0.1915071,
   0.2487241,
   0.2144747,
   0.2313536,
   0.1989144,
   0.1810043,
   0.186838,
   0.1918093,
   0.2095234,
   0.2119933,
   0.2062241,
   0.2099871,
   0.226495,
   0.1949519,
   0.1908537,
   0.1745783,
   0.1772314,
   0.1721979,
   0.1660548};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.2225816,
   0.191635,
   0.2014884,
   0.2355284,
   0.2383522,
   0.2219267,
   0.1915071,
   0.2487241,
   0.2144747,
   0.2313536,
   0.1989144,
   0.1810043,
   0.186838,
   0.1918093,
   0.2095234,
   0.2119933,
   0.2062241,
   0.2099871,
   0.226495,
   0.1949519,
   0.1908537,
   0.1745783,
   0.1772314,
   0.1721979,
   0.1660548};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
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
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   1.24947,
   0.6982333,
   0.6964163,
   0.7658045,
   0.9607842,
   0.6886372,
   0.6870339,
   1.090601,
   1.24162,
   1.456067,
   0.8349836,
   0.7632123,
   0.5894653,
   0.7030614,
   0.8388871,
   0.7611573,
   1.034443,
   0.8990566,
   0.8610741,
   1.137791,
   0.8904808,
   0.8980898,
   0.9904054,
   1.088137,
   0.9516987};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   0.2471822,
   0.2028975,
   0.2214287,
   0.2717364,
   0.268347,
   0.2189553,
   0.2084129,
   0.3169144,
   0.3230385,
   0.3920217,
   0.2332109,
   0.1923071,
   0.1587037,
   0.1892876,
   0.2258564,
   0.1917893,
   0.208691,
   0.1890866,
   0.1585876,
   0.1770641,
   0.1309823,
   0.1140476,
   0.1028833,
   0.09507097,
   0.0692259};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   0.2375011,
   0.1909507,
   0.2070256,
   0.2517114,
   0.2532215,
   0.2047131,
   0.195547,
   0.2982542,
   0.306168,
   0.3707826,
   0.2200659,
   0.1826008,
   0.1501054,
   0.1790322,
   0.2136198,
   0.1821091,
   0.2003557,
   0.1811974,
   0.1528184,
   0.1716424,
   0.1271922,
   0.1112032,
   0.1007816,
   0.09507097,
   0.0692259};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.2911528);
   Graph_Graph3032->SetMaximum(1.966458);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
