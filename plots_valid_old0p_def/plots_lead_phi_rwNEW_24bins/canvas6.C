#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Feb 18 12:26:07 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.04,3.957692,336.16);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__16->SetBinContent(1,125.6997);
   hmc__16->SetBinContent(2,131.5499);
   hmc__16->SetBinContent(3,133.1434);
   hmc__16->SetBinContent(4,139.4233);
   hmc__16->SetBinContent(5,112.97);
   hmc__16->SetBinContent(6,119.3035);
   hmc__16->SetBinContent(7,116.1958);
   hmc__16->SetBinContent(8,107.2671);
   hmc__16->SetBinContent(9,126.291);
   hmc__16->SetBinContent(10,118.8147);
   hmc__16->SetBinContent(11,123.788);
   hmc__16->SetBinContent(12,113.1656);
   hmc__16->SetBinContent(13,110.0134);
   hmc__16->SetBinContent(14,125.1244);
   hmc__16->SetBinContent(15,132.0113);
   hmc__16->SetBinContent(16,130.3948);
   hmc__16->SetBinContent(17,113.3403);
   hmc__16->SetBinContent(18,116.3324);
   hmc__16->SetBinContent(19,122.8991);
   hmc__16->SetBinContent(20,115.1328);
   hmc__16->SetBinContent(21,135.1173);
   hmc__16->SetBinContent(22,136.7899);
   hmc__16->SetBinContent(23,132.1087);
   hmc__16->SetBinContent(24,109.2304);
   hmc__16->SetBinError(1,40.79305);
   hmc__16->SetBinError(2,41.07461);
   hmc__16->SetBinError(3,40.09762);
   hmc__16->SetBinError(4,34.48185);
   hmc__16->SetBinError(5,29.97508);
   hmc__16->SetBinError(6,28.8124);
   hmc__16->SetBinError(7,36.33873);
   hmc__16->SetBinError(8,29.39268);
   hmc__16->SetBinError(9,39.15989);
   hmc__16->SetBinError(10,35.45136);
   hmc__16->SetBinError(11,36.98879);
   hmc__16->SetBinError(12,31.80366);
   hmc__16->SetBinError(13,33.36826);
   hmc__16->SetBinError(14,36.33173);
   hmc__16->SetBinError(15,36.12323);
   hmc__16->SetBinError(16,33.46284);
   hmc__16->SetBinError(17,28.94366);
   hmc__16->SetBinError(18,29.45581);
   hmc__16->SetBinError(19,32.17331);
   hmc__16->SetBinError(20,32.86397);
   hmc__16->SetBinError(21,38.19515);
   hmc__16->SetBinError(22,38.66951);
   hmc__16->SetBinError(23,40.15282);
   hmc__16->SetBinError(24,29.87986);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-3.04);
   hmc__16->SetMaximum(319.2);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,-3.15,3.15);
   hs6_stack_6->SetMinimum(-3.646956e-09);
   hs6_stack_6->SetMaximum(146.3944);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.903757);
   hbadmatch_stack_1->SetBinContent(2,3.25996);
   hbadmatch_stack_1->SetBinContent(3,3.516008);
   hbadmatch_stack_1->SetBinContent(4,2.63093);
   hbadmatch_stack_1->SetBinContent(5,4.238317);
   hbadmatch_stack_1->SetBinContent(6,4.694367);
   hbadmatch_stack_1->SetBinContent(7,2.648049);
   hbadmatch_stack_1->SetBinContent(8,1.953741);
   hbadmatch_stack_1->SetBinContent(9,2.978002);
   hbadmatch_stack_1->SetBinContent(10,2.069082);
   hbadmatch_stack_1->SetBinContent(11,2.066272);
   hbadmatch_stack_1->SetBinContent(12,2.476281);
   hbadmatch_stack_1->SetBinContent(13,2.148617);
   hbadmatch_stack_1->SetBinContent(14,2.432957);
   hbadmatch_stack_1->SetBinContent(15,4.732673);
   hbadmatch_stack_1->SetBinContent(16,4.353917);
   hbadmatch_stack_1->SetBinContent(17,3.204543);
   hbadmatch_stack_1->SetBinContent(18,2.292763);
   hbadmatch_stack_1->SetBinContent(19,2.105545);
   hbadmatch_stack_1->SetBinContent(20,2.678238);
   hbadmatch_stack_1->SetBinContent(21,2.556138);
   hbadmatch_stack_1->SetBinContent(22,2.542635);
   hbadmatch_stack_1->SetBinContent(23,1.948158);
   hbadmatch_stack_1->SetBinContent(24,0.7319179);
   hbadmatch_stack_1->SetBinError(1,0.6490939);
   hbadmatch_stack_1->SetBinError(2,0.8626922);
   hbadmatch_stack_1->SetBinError(3,1.030037);
   hbadmatch_stack_1->SetBinError(4,0.8202298);
   hbadmatch_stack_1->SetBinError(5,1.161569);
   hbadmatch_stack_1->SetBinError(6,1.191208);
   hbadmatch_stack_1->SetBinError(7,1.101373);
   hbadmatch_stack_1->SetBinError(8,0.7329688);
   hbadmatch_stack_1->SetBinError(9,0.9803818);
   hbadmatch_stack_1->SetBinError(10,0.658718);
   hbadmatch_stack_1->SetBinError(11,0.7593583);
   hbadmatch_stack_1->SetBinError(12,0.7173918);
   hbadmatch_stack_1->SetBinError(13,0.7333151);
   hbadmatch_stack_1->SetBinError(14,1.659649);
   hbadmatch_stack_1->SetBinError(15,1.882272);
   hbadmatch_stack_1->SetBinError(16,1.167138);
   hbadmatch_stack_1->SetBinError(17,1.022142);
   hbadmatch_stack_1->SetBinError(18,0.7984137);
   hbadmatch_stack_1->SetBinError(19,0.6797106);
   hbadmatch_stack_1->SetBinError(20,0.8349382);
   hbadmatch_stack_1->SetBinError(21,0.8865929);
   hbadmatch_stack_1->SetBinError(22,0.837136);
   hbadmatch_stack_1->SetBinError(23,0.7085441);
   hbadmatch_stack_1->SetBinError(24,0.438694);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,7.930035);
   hext_stack_2->SetBinContent(2,6.318);
   hext_stack_2->SetBinContent(3,8.261613);
   hext_stack_2->SetBinContent(4,13.56888);
   hext_stack_2->SetBinContent(5,12.86384);
   hext_stack_2->SetBinContent(6,19.3247);
   hext_stack_2->SetBinContent(7,13.5314);
   hext_stack_2->SetBinContent(8,10.14457);
   hext_stack_2->SetBinContent(9,12.67071);
   hext_stack_2->SetBinContent(10,8.440376);
   hext_stack_2->SetBinContent(11,8.896047);
   hext_stack_2->SetBinContent(12,4.773807);
   hext_stack_2->SetBinContent(13,3.166181);
   hext_stack_2->SetBinContent(14,7.048997);
   hext_stack_2->SetBinContent(15,11.78249);
   hext_stack_2->SetBinContent(16,18.77246);
   hext_stack_2->SetBinContent(17,13.08726);
   hext_stack_2->SetBinContent(18,20.71885);
   hext_stack_2->SetBinContent(19,18.69026);
   hext_stack_2->SetBinContent(20,14.85929);
   hext_stack_2->SetBinContent(21,12.92727);
   hext_stack_2->SetBinContent(22,15.51967);
   hext_stack_2->SetBinContent(23,10.40711);
   hext_stack_2->SetBinContent(24,4.620993);
   hext_stack_2->SetBinError(1,1.928947);
   hext_stack_2->SetBinError(2,1.630074);
   hext_stack_2->SetBinError(3,1.903909);
   hext_stack_2->SetBinError(4,2.54968);
   hext_stack_2->SetBinError(5,2.400382);
   hext_stack_2->SetBinError(6,3.023699);
   hext_stack_2->SetBinError(7,2.388518);
   hext_stack_2->SetBinError(8,1.982145);
   hext_stack_2->SetBinError(9,2.538988);
   hext_stack_2->SetBinError(10,1.82829);
   hext_stack_2->SetBinError(11,2.058577);
   hext_stack_2->SetBinError(12,1.433855);
   hext_stack_2->SetBinError(13,1.061777);
   hext_stack_2->SetBinError(14,1.711052);
   hext_stack_2->SetBinError(15,2.419612);
   hext_stack_2->SetBinError(16,2.930866);
   hext_stack_2->SetBinError(17,2.464601);
   hext_stack_2->SetBinError(18,3.036672);
   hext_stack_2->SetBinError(19,2.920597);
   hext_stack_2->SetBinError(20,2.668896);
   hext_stack_2->SetBinError(21,2.467631);
   hext_stack_2->SetBinError(22,2.695811);
   hext_stack_2->SetBinError(23,2.347046);
   hext_stack_2->SetBinError(24,1.367364);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.1380715);
   hdirt_stack_3->SetBinContent(2,1.234817);
   hdirt_stack_3->SetBinContent(3,2.011368);
   hdirt_stack_3->SetBinContent(4,2.279606);
   hdirt_stack_3->SetBinContent(5,1.823303);
   hdirt_stack_3->SetBinContent(6,1.177013);
   hdirt_stack_3->SetBinContent(7,2.129662);
   hdirt_stack_3->SetBinContent(8,1.15728);
   hdirt_stack_3->SetBinContent(9,1.221669);
   hdirt_stack_3->SetBinContent(10,0.4762587);
   hdirt_stack_3->SetBinContent(11,3.015844);
   hdirt_stack_3->SetBinContent(12,1.080054);
   hdirt_stack_3->SetBinContent(13,1.489913);
   hdirt_stack_3->SetBinContent(14,1.246303);
   hdirt_stack_3->SetBinContent(15,1.498816);
   hdirt_stack_3->SetBinContent(16,3.617293);
   hdirt_stack_3->SetBinContent(17,3.195463);
   hdirt_stack_3->SetBinContent(18,1.317406);
   hdirt_stack_3->SetBinContent(19,2.401859);
   hdirt_stack_3->SetBinContent(20,0.8904731);
   hdirt_stack_3->SetBinContent(21,1.190193);
   hdirt_stack_3->SetBinContent(22,2.17325);
   hdirt_stack_3->SetBinContent(23,0.9038851);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.1380715);
   hdirt_stack_3->SetBinError(2,0.5720096);
   hdirt_stack_3->SetBinError(3,0.7016413);
   hdirt_stack_3->SetBinError(4,0.8385282);
   hdirt_stack_3->SetBinError(5,0.6103268);
   hdirt_stack_3->SetBinError(6,0.6070381);
   hdirt_stack_3->SetBinError(7,0.7037741);
   hdirt_stack_3->SetBinError(8,0.7541119);
   hdirt_stack_3->SetBinError(9,0.5259118);
   hdirt_stack_3->SetBinError(10,0.3652866);
   hdirt_stack_3->SetBinError(11,1.308459);
   hdirt_stack_3->SetBinError(12,0.5067763);
   hdirt_stack_3->SetBinError(13,0.5866508);
   hdirt_stack_3->SetBinError(14,0.6420399);
   hdirt_stack_3->SetBinError(15,0.6464407);
   hdirt_stack_3->SetBinError(16,1.023349);
   hdirt_stack_3->SetBinError(17,0.9828863);
   hdirt_stack_3->SetBinError(18,0.6260682);
   hdirt_stack_3->SetBinError(19,0.8214053);
   hdirt_stack_3->SetBinError(20,0.4366068);
   hdirt_stack_3->SetBinError(21,0.5170999);
   hdirt_stack_3->SetBinError(22,0.7731157);
   hdirt_stack_3->SetBinError(23,0.4931997);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,11.57351);
   houtFV_stack_4->SetBinContent(2,16.22467);
   houtFV_stack_4->SetBinContent(3,14.85782);
   houtFV_stack_4->SetBinContent(4,15.70288);
   houtFV_stack_4->SetBinContent(5,9.465059);
   houtFV_stack_4->SetBinContent(6,10.91251);
   houtFV_stack_4->SetBinContent(7,12.26161);
   houtFV_stack_4->SetBinContent(8,12.43714);
   houtFV_stack_4->SetBinContent(9,13.56316);
   houtFV_stack_4->SetBinContent(10,14.19843);
   houtFV_stack_4->SetBinContent(11,13.83027);
   houtFV_stack_4->SetBinContent(12,12.08339);
   houtFV_stack_4->SetBinContent(13,13.66168);
   houtFV_stack_4->SetBinContent(14,11.96189);
   houtFV_stack_4->SetBinContent(15,13.17595);
   houtFV_stack_4->SetBinContent(16,10.04206);
   houtFV_stack_4->SetBinContent(17,11.1714);
   houtFV_stack_4->SetBinContent(18,13.99049);
   houtFV_stack_4->SetBinContent(19,9.816463);
   houtFV_stack_4->SetBinContent(20,10.11894);
   houtFV_stack_4->SetBinContent(21,12.82643);
   houtFV_stack_4->SetBinContent(22,12.56972);
   houtFV_stack_4->SetBinContent(23,13.93728);
   houtFV_stack_4->SetBinContent(24,11.76901);
   houtFV_stack_4->SetBinError(1,1.753842);
   houtFV_stack_4->SetBinError(2,1.991935);
   houtFV_stack_4->SetBinError(3,1.887108);
   houtFV_stack_4->SetBinError(4,2.012441);
   houtFV_stack_4->SetBinError(5,1.594219);
   houtFV_stack_4->SetBinError(6,1.626293);
   houtFV_stack_4->SetBinError(7,1.703923);
   houtFV_stack_4->SetBinError(8,1.769516);
   houtFV_stack_4->SetBinError(9,1.812334);
   houtFV_stack_4->SetBinError(10,1.952596);
   houtFV_stack_4->SetBinError(11,1.863109);
   houtFV_stack_4->SetBinError(12,1.653823);
   houtFV_stack_4->SetBinError(13,1.784631);
   houtFV_stack_4->SetBinError(14,1.715347);
   houtFV_stack_4->SetBinError(15,1.803011);
   houtFV_stack_4->SetBinError(16,1.617288);
   houtFV_stack_4->SetBinError(17,1.646798);
   houtFV_stack_4->SetBinError(18,1.921754);
   houtFV_stack_4->SetBinError(19,1.569478);
   houtFV_stack_4->SetBinError(20,1.576875);
   houtFV_stack_4->SetBinError(21,1.845553);
   houtFV_stack_4->SetBinError(22,1.768311);
   houtFV_stack_4->SetBinError(23,1.880229);
   houtFV_stack_4->SetBinError(24,1.744391);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.112942);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.63997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.710052);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.542652);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.968865);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.248202);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.724006);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.594212);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.135274);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.476147);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.79292);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.444334);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.387533);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.583338);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.28267);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.156124);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.399824);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.303338);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.620887);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.802466);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.940797);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.225374);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.487684);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.668038);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6716373);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6409978);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6372424);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6335672);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4918278);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5614236);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6919041);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.513003);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5822957);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7479924);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6238164);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5830193);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5350978);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.624544);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6934023);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7053673);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5660836);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5746704);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8690236);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5378189);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4564617);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6880963);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6473923);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.666645);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8511223);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.460186);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3588378);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2287991);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,52.69086);
   hNCpi0inFVres_stack_7->SetBinContent(2,51.714);
   hNCpi0inFVres_stack_7->SetBinContent(3,50.91022);
   hNCpi0inFVres_stack_7->SetBinContent(4,53.30068);
   hNCpi0inFVres_stack_7->SetBinContent(5,45.74986);
   hNCpi0inFVres_stack_7->SetBinContent(6,44.27016);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.66824);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.59614);
   hNCpi0inFVres_stack_7->SetBinContent(9,49.40186);
   hNCpi0inFVres_stack_7->SetBinContent(10,48.62309);
   hNCpi0inFVres_stack_7->SetBinContent(11,47.64243);
   hNCpi0inFVres_stack_7->SetBinContent(12,45.09755);
   hNCpi0inFVres_stack_7->SetBinContent(13,46.27863);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.12914);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.01974);
   hNCpi0inFVres_stack_7->SetBinContent(16,48.85425);
   hNCpi0inFVres_stack_7->SetBinContent(17,45.0014);
   hNCpi0inFVres_stack_7->SetBinContent(18,44.10826);
   hNCpi0inFVres_stack_7->SetBinContent(19,46.74249);
   hNCpi0inFVres_stack_7->SetBinContent(20,45.07994);
   hNCpi0inFVres_stack_7->SetBinContent(21,56.32288);
   hNCpi0inFVres_stack_7->SetBinContent(22,53.00491);
   hNCpi0inFVres_stack_7->SetBinContent(23,50.22367);
   hNCpi0inFVres_stack_7->SetBinContent(24,45.4707);
   hNCpi0inFVres_stack_7->SetBinError(1,2.39348);
   hNCpi0inFVres_stack_7->SetBinError(2,2.280877);
   hNCpi0inFVres_stack_7->SetBinError(3,2.31537);
   hNCpi0inFVres_stack_7->SetBinError(4,2.399976);
   hNCpi0inFVres_stack_7->SetBinError(5,2.173385);
   hNCpi0inFVres_stack_7->SetBinError(6,2.151819);
   hNCpi0inFVres_stack_7->SetBinError(7,2.130338);
   hNCpi0inFVres_stack_7->SetBinError(8,2.215202);
   hNCpi0inFVres_stack_7->SetBinError(9,2.298958);
   hNCpi0inFVres_stack_7->SetBinError(10,2.298612);
   hNCpi0inFVres_stack_7->SetBinError(11,2.239534);
   hNCpi0inFVres_stack_7->SetBinError(12,2.203325);
   hNCpi0inFVres_stack_7->SetBinError(13,2.182975);
   hNCpi0inFVres_stack_7->SetBinError(14,2.298216);
   hNCpi0inFVres_stack_7->SetBinError(15,2.283975);
   hNCpi0inFVres_stack_7->SetBinError(16,2.247298);
   hNCpi0inFVres_stack_7->SetBinError(17,2.22035);
   hNCpi0inFVres_stack_7->SetBinError(18,2.199892);
   hNCpi0inFVres_stack_7->SetBinError(19,2.259389);
   hNCpi0inFVres_stack_7->SetBinError(20,2.220014);
   hNCpi0inFVres_stack_7->SetBinError(21,2.525692);
   hNCpi0inFVres_stack_7->SetBinError(22,2.387605);
   hNCpi0inFVres_stack_7->SetBinError(23,2.261311);
   hNCpi0inFVres_stack_7->SetBinError(24,2.164038);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.09353);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.188597);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.33167);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.943729);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.615404);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.613908);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.896652);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.447003);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.73166);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.20629);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.54226);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.10781);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.244734);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.849);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.228044);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.757975);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.063052);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.303016);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.497338);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.33998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.089951);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.548058);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.67868);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.910598);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.029729);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9431559);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.023093);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9908842);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9042149);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9010168);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.002826);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.872301);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.034161);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.001854);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.114614);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.026638);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9780684);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.103707);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9457664);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9362184);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9789303);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8600562);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.055427);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9813794);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9523958);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9010524);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.115981);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9663251);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,18.82051);
   hCCpi0inFV_stack_10->SetBinContent(2,18.72945);
   hCCpi0inFV_stack_10->SetBinContent(3,19.36979);
   hCCpi0inFV_stack_10->SetBinContent(4,22.13697);
   hCCpi0inFV_stack_10->SetBinContent(5,13.73725);
   hCCpi0inFV_stack_10->SetBinContent(6,13.59946);
   hCCpi0inFV_stack_10->SetBinContent(7,15.48354);
   hCCpi0inFV_stack_10->SetBinContent(8,14.49523);
   hCCpi0inFV_stack_10->SetBinContent(9,15.33501);
   hCCpi0inFV_stack_10->SetBinContent(10,12.64439);
   hCCpi0inFV_stack_10->SetBinContent(11,16.26702);
   hCCpi0inFV_stack_10->SetBinContent(12,16.81592);
   hCCpi0inFV_stack_10->SetBinContent(13,14.59904);
   hCCpi0inFV_stack_10->SetBinContent(14,17.26014);
   hCCpi0inFV_stack_10->SetBinContent(15,18.36288);
   hCCpi0inFV_stack_10->SetBinContent(16,16.16069);
   hCCpi0inFV_stack_10->SetBinContent(17,14.02697);
   hCCpi0inFV_stack_10->SetBinContent(18,9.928041);
   hCCpi0inFV_stack_10->SetBinContent(19,15.07725);
   hCCpi0inFV_stack_10->SetBinContent(20,18.84896);
   hCCpi0inFV_stack_10->SetBinContent(21,19.19892);
   hCCpi0inFV_stack_10->SetBinContent(22,17.28587);
   hCCpi0inFV_stack_10->SetBinContent(23,18.89756);
   hCCpi0inFV_stack_10->SetBinContent(24,15.05593);
   hCCpi0inFV_stack_10->SetBinError(1,2.117919);
   hCCpi0inFV_stack_10->SetBinError(2,2.183646);
   hCCpi0inFV_stack_10->SetBinError(3,2.173768);
   hCCpi0inFV_stack_10->SetBinError(4,2.338357);
   hCCpi0inFV_stack_10->SetBinError(5,1.79775);
   hCCpi0inFV_stack_10->SetBinError(6,1.831801);
   hCCpi0inFV_stack_10->SetBinError(7,1.991858);
   hCCpi0inFV_stack_10->SetBinError(8,1.922413);
   hCCpi0inFV_stack_10->SetBinError(9,1.971924);
   hCCpi0inFV_stack_10->SetBinError(10,1.819993);
   hCCpi0inFV_stack_10->SetBinError(11,2.030015);
   hCCpi0inFV_stack_10->SetBinError(12,2.035335);
   hCCpi0inFV_stack_10->SetBinError(13,1.901959);
   hCCpi0inFV_stack_10->SetBinError(14,2.029727);
   hCCpi0inFV_stack_10->SetBinError(15,2.154075);
   hCCpi0inFV_stack_10->SetBinError(16,2.014924);
   hCCpi0inFV_stack_10->SetBinError(17,1.802465);
   hCCpi0inFV_stack_10->SetBinError(18,1.545508);
   hCCpi0inFV_stack_10->SetBinError(19,1.95148);
   hCCpi0inFV_stack_10->SetBinError(20,2.291385);
   hCCpi0inFV_stack_10->SetBinError(21,2.173005);
   hCCpi0inFV_stack_10->SetBinError(22,2.113637);
   hCCpi0inFV_stack_10->SetBinError(23,2.208404);
   hCCpi0inFV_stack_10->SetBinError(24,1.881255);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.22897);
   hNCinFV_stack_11->SetBinContent(2,10.36181);
   hNCinFV_stack_11->SetBinContent(3,11.92539);
   hNCinFV_stack_11->SetBinContent(4,8.541498);
   hNCinFV_stack_11->SetBinContent(5,8.31398);
   hNCinFV_stack_11->SetBinContent(6,7.824187);
   hNCinFV_stack_11->SetBinContent(7,7.100114);
   hNCinFV_stack_11->SetBinContent(8,7.14045);
   hNCinFV_stack_11->SetBinContent(9,9.526766);
   hNCinFV_stack_11->SetBinContent(10,9.46675);
   hNCinFV_stack_11->SetBinContent(11,7.475557);
   hNCinFV_stack_11->SetBinContent(12,8.254574);
   hNCinFV_stack_11->SetBinContent(13,8.356009);
   hNCinFV_stack_11->SetBinContent(14,9.812);
   hNCinFV_stack_11->SetBinContent(15,10.20036);
   hNCinFV_stack_11->SetBinContent(16,8.304445);
   hNCinFV_stack_11->SetBinContent(17,6.103621);
   hNCinFV_stack_11->SetBinContent(18,6.247083);
   hNCinFV_stack_11->SetBinContent(19,7.065953);
   hNCinFV_stack_11->SetBinContent(20,5.770205);
   hNCinFV_stack_11->SetBinContent(21,8.98311);
   hNCinFV_stack_11->SetBinContent(22,9.869716);
   hNCinFV_stack_11->SetBinContent(23,9.391149);
   hNCinFV_stack_11->SetBinContent(24,4.693038);
   hNCinFV_stack_11->SetBinError(1,1.345055);
   hNCinFV_stack_11->SetBinError(2,1.618948);
   hNCinFV_stack_11->SetBinError(3,1.710729);
   hNCinFV_stack_11->SetBinError(4,1.520648);
   hNCinFV_stack_11->SetBinError(5,1.38709);
   hNCinFV_stack_11->SetBinError(6,1.388255);
   hNCinFV_stack_11->SetBinError(7,1.240759);
   hNCinFV_stack_11->SetBinError(8,1.301724);
   hNCinFV_stack_11->SetBinError(9,1.583198);
   hNCinFV_stack_11->SetBinError(10,1.594426);
   hNCinFV_stack_11->SetBinError(11,1.3447);
   hNCinFV_stack_11->SetBinError(12,1.469123);
   hNCinFV_stack_11->SetBinError(13,1.44211);
   hNCinFV_stack_11->SetBinError(14,1.630921);
   hNCinFV_stack_11->SetBinError(15,1.653877);
   hNCinFV_stack_11->SetBinError(16,1.455566);
   hNCinFV_stack_11->SetBinError(17,1.240696);
   hNCinFV_stack_11->SetBinError(18,1.271358);
   hNCinFV_stack_11->SetBinError(19,1.336035);
   hNCinFV_stack_11->SetBinError(20,1.194259);
   hNCinFV_stack_11->SetBinError(21,1.532792);
   hNCinFV_stack_11->SetBinError(22,1.55722);
   hNCinFV_stack_11->SetBinError(23,1.494717);
   hNCinFV_stack_11->SetBinError(24,1.056454);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,9.031771);
   hnumuCCinFV_stack_12->SetBinContent(2,8.176493);
   hnumuCCinFV_stack_12->SetBinContent(3,6.794454);
   hnumuCCinFV_stack_12->SetBinContent(4,6.443105);
   hnumuCCinFV_stack_12->SetBinContent(5,5.042486);
   hnumuCCinFV_stack_12->SetBinContent(6,6.025719);
   hnumuCCinFV_stack_12->SetBinContent(7,5.602901);
   hnumuCCinFV_stack_12->SetBinContent(8,4.517946);
   hnumuCCinFV_stack_12->SetBinContent(9,7.878048);
   hnumuCCinFV_stack_12->SetBinContent(10,5.356642);
   hnumuCCinFV_stack_12->SetBinContent(11,9.503518);
   hnumuCCinFV_stack_12->SetBinContent(12,7.456307);
   hnumuCCinFV_stack_12->SetBinContent(13,6.48754);
   hnumuCCinFV_stack_12->SetBinContent(14,9.16906);
   hnumuCCinFV_stack_12->SetBinContent(15,8.239096);
   hnumuCCinFV_stack_12->SetBinContent(16,6.494567);
   hnumuCCinFV_stack_12->SetBinContent(17,4.186161);
   hnumuCCinFV_stack_12->SetBinContent(18,3.39699);
   hnumuCCinFV_stack_12->SetBinContent(19,4.701286);
   hnumuCCinFV_stack_12->SetBinContent(20,3.374323);
   hnumuCCinFV_stack_12->SetBinContent(21,7.496437);
   hnumuCCinFV_stack_12->SetBinContent(22,10.44118);
   hnumuCCinFV_stack_12->SetBinContent(23,9.881035);
   hnumuCCinFV_stack_12->SetBinContent(24,13.32014);
   hnumuCCinFV_stack_12->SetBinError(1,1.546263);
   hnumuCCinFV_stack_12->SetBinError(2,1.496544);
   hnumuCCinFV_stack_12->SetBinError(3,1.316067);
   hnumuCCinFV_stack_12->SetBinError(4,1.517377);
   hnumuCCinFV_stack_12->SetBinError(5,1.159841);
   hnumuCCinFV_stack_12->SetBinError(6,1.291506);
   hnumuCCinFV_stack_12->SetBinError(7,1.179471);
   hnumuCCinFV_stack_12->SetBinError(8,1.370156);
   hnumuCCinFV_stack_12->SetBinError(9,1.501994);
   hnumuCCinFV_stack_12->SetBinError(10,1.146427);
   hnumuCCinFV_stack_12->SetBinError(11,2.125517);
   hnumuCCinFV_stack_12->SetBinError(12,1.508166);
   hnumuCCinFV_stack_12->SetBinError(13,1.344331);
   hnumuCCinFV_stack_12->SetBinError(14,2.094422);
   hnumuCCinFV_stack_12->SetBinError(15,1.440147);
   hnumuCCinFV_stack_12->SetBinError(16,1.185323);
   hnumuCCinFV_stack_12->SetBinError(17,1.07245);
   hnumuCCinFV_stack_12->SetBinError(18,0.9370426);
   hnumuCCinFV_stack_12->SetBinError(19,1.050689);
   hnumuCCinFV_stack_12->SetBinError(20,0.9526434);
   hnumuCCinFV_stack_12->SetBinError(21,1.770859);
   hnumuCCinFV_stack_12->SetBinError(22,2.214811);
   hnumuCCinFV_stack_12->SetBinError(23,1.826302);
   hnumuCCinFV_stack_12->SetBinError(24,2.263625);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.036279);
   hnueCCinFV_stack_13->SetBinContent(2,2.47894);
   hnueCCinFV_stack_13->SetBinContent(3,1.064237);
   hnueCCinFV_stack_13->SetBinContent(4,1.137062);
   hnueCCinFV_stack_13->SetBinContent(5,0.9284594);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_13->SetBinContent(9,0.5418147);
   hnueCCinFV_stack_13->SetBinContent(10,2.424972);
   hnueCCinFV_stack_13->SetBinContent(11,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(12,1.269369);
   hnueCCinFV_stack_13->SetBinContent(13,0.789167);
   hnueCCinFV_stack_13->SetBinContent(14,1.366893);
   hnueCCinFV_stack_13->SetBinContent(15,0.9868677);
   hnueCCinFV_stack_13->SetBinContent(16,0.6999667);
   hnueCCinFV_stack_13->SetBinContent(17,0.6358774);
   hnueCCinFV_stack_13->SetBinContent(18,2.875052);
   hnueCCinFV_stack_13->SetBinContent(19,0.788994);
   hnueCCinFV_stack_13->SetBinContent(20,2.146811);
   hnueCCinFV_stack_13->SetBinContent(21,1.027643);
   hnueCCinFV_stack_13->SetBinContent(22,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(23,1.185129);
   hnueCCinFV_stack_13->SetBinContent(24,0.3917402);
   hnueCCinFV_stack_13->SetBinError(1,0.8259115);
   hnueCCinFV_stack_13->SetBinError(2,1.596092);
   hnueCCinFV_stack_13->SetBinError(3,0.4789597);
   hnueCCinFV_stack_13->SetBinError(4,0.5892454);
   hnueCCinFV_stack_13->SetBinError(5,0.5456539);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.372493);
   hnueCCinFV_stack_13->SetBinError(9,0.3929906);
   hnueCCinFV_stack_13->SetBinError(10,1.167136);
   hnueCCinFV_stack_13->SetBinError(11,0.3397478);
   hnueCCinFV_stack_13->SetBinError(12,0.5218164);
   hnueCCinFV_stack_13->SetBinError(13,0.3926085);
   hnueCCinFV_stack_13->SetBinError(14,0.8674883);
   hnueCCinFV_stack_13->SetBinError(15,0.5057638);
   hnueCCinFV_stack_13->SetBinError(16,0.4084579);
   hnueCCinFV_stack_13->SetBinError(17,0.3692351);
   hnueCCinFV_stack_13->SetBinError(18,1.314803);
   hnueCCinFV_stack_13->SetBinError(19,0.4667322);
   hnueCCinFV_stack_13->SetBinError(20,1.389452);
   hnueCCinFV_stack_13->SetBinError(21,0.4941397);
   hnueCCinFV_stack_13->SetBinError(22,0.3582875);
   hnueCCinFV_stack_13->SetBinError(23,0.6176974);
   hnueCCinFV_stack_13->SetBinError(24,0.2770047);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__17->SetBinContent(1,125.6997);
   hmcerror__17->SetBinContent(2,131.5499);
   hmcerror__17->SetBinContent(3,133.1434);
   hmcerror__17->SetBinContent(4,139.4233);
   hmcerror__17->SetBinContent(5,112.97);
   hmcerror__17->SetBinContent(6,119.3035);
   hmcerror__17->SetBinContent(7,116.1958);
   hmcerror__17->SetBinContent(8,107.2671);
   hmcerror__17->SetBinContent(9,126.291);
   hmcerror__17->SetBinContent(10,118.8147);
   hmcerror__17->SetBinContent(11,123.788);
   hmcerror__17->SetBinContent(12,113.1656);
   hmcerror__17->SetBinContent(13,110.0134);
   hmcerror__17->SetBinContent(14,125.1244);
   hmcerror__17->SetBinContent(15,132.0113);
   hmcerror__17->SetBinContent(16,130.3948);
   hmcerror__17->SetBinContent(17,113.3403);
   hmcerror__17->SetBinContent(18,116.3324);
   hmcerror__17->SetBinContent(19,122.8991);
   hmcerror__17->SetBinContent(20,115.1328);
   hmcerror__17->SetBinContent(21,135.1173);
   hmcerror__17->SetBinContent(22,136.7899);
   hmcerror__17->SetBinContent(23,132.1087);
   hmcerror__17->SetBinContent(24,109.2304);
   hmcerror__17->SetBinError(1,40.79305);
   hmcerror__17->SetBinError(2,41.07461);
   hmcerror__17->SetBinError(3,40.09762);
   hmcerror__17->SetBinError(4,34.48185);
   hmcerror__17->SetBinError(5,29.97508);
   hmcerror__17->SetBinError(6,28.8124);
   hmcerror__17->SetBinError(7,36.33873);
   hmcerror__17->SetBinError(8,29.39268);
   hmcerror__17->SetBinError(9,39.15989);
   hmcerror__17->SetBinError(10,35.45136);
   hmcerror__17->SetBinError(11,36.98879);
   hmcerror__17->SetBinError(12,31.80366);
   hmcerror__17->SetBinError(13,33.36826);
   hmcerror__17->SetBinError(14,36.33173);
   hmcerror__17->SetBinError(15,36.12323);
   hmcerror__17->SetBinError(16,33.46284);
   hmcerror__17->SetBinError(17,28.94366);
   hmcerror__17->SetBinError(18,29.45581);
   hmcerror__17->SetBinError(19,32.17331);
   hmcerror__17->SetBinError(20,32.86397);
   hmcerror__17->SetBinError(21,38.19515);
   hmcerror__17->SetBinError(22,38.66951);
   hmcerror__17->SetBinError(23,40.15282);
   hmcerror__17->SetBinError(24,29.87986);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3021[24] = {
   129,
   145,
   141,
   135,
   141,
   130,
   107,
   114,
   114,
   111,
   108,
   106,
   111,
   117,
   152,
   125,
   108,
   119,
   110,
   115,
   127,
   136,
   119,
   118};
   Double_t _felx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3021[24] = {
   11.35782,
   12.04159,
   11.87434,
   11.61895,
   11.87434,
   11.40175,
   10.34408,
   10.67708,
   10.67708,
   10.53565,
   10.3923,
   10.29563,
   10.53565,
   10.81665,
   12.32883,
   11.18034,
   10.3923,
   10.90871,
   10.48809,
   10.72381,
   11.26943,
   11.6619,
   10.90871,
   10.86278};
   Double_t _fehx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3021[24] = {
   11.35782,
   12.04159,
   11.87434,
   11.61895,
   11.87434,
   11.40175,
   10.34408,
   10.67708,
   10.67708,
   10.53565,
   10.3923,
   10.29563,
   10.53565,
   10.81665,
   12.32883,
   11.18034,
   10.3923,
   10.90871,
   10.48809,
   10.72381,
   11.26943,
   11.6619,
   10.90871,
   10.86278};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(88.84192);
   Graph_Graph3021->SetMaximum(171.1913);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 392.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 198.0","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 169.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3022[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3022[24] = {
   0.3245278,
   0.312236,
   0.3011612,
   0.2473177,
   0.2653366,
   0.241505,
   0.3127369,
   0.2740139,
   0.3100765,
   0.2983751,
   0.2988076,
   0.2810364,
   0.3033108,
   0.2903649,
   0.2736374,
   0.2566272,
   0.2553695,
   0.2532038,
   0.2617864,
   0.285444,
   0.2826815,
   0.2826927,
   0.3039377,
   0.273549};
   Double_t _fehx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3022[24] = {
   0.3245278,
   0.312236,
   0.3011612,
   0.2473177,
   0.2653366,
   0.241505,
   0.3127369,
   0.2740139,
   0.3100765,
   0.2983751,
   0.2988076,
   0.2810364,
   0.3033108,
   0.2903649,
   0.2736374,
   0.2566272,
   0.2553695,
   0.2532038,
   0.2617864,
   0.285444,
   0.2826815,
   0.2826927,
   0.3039377,
   0.273549};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-3.78,3.78);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3023[24] = {
   0.218204,
   0.2244361,
   0.2110981,
   0.206906,
   0.2043071,
   0.1931169,
   0.2013858,
   0.2166313,
   0.2106243,
   0.2174793,
   0.2134825,
   0.2211004,
   0.2249697,
   0.207187,
   0.2001394,
   0.1995998,
   0.2069642,
   0.1882765,
   0.1953418,
   0.2042503,
   0.2087725,
   0.2019734,
   0.2068791,
   0.22281};
   Double_t _fehx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3023[24] = {
   0.218204,
   0.2244361,
   0.2110981,
   0.206906,
   0.2043071,
   0.1931169,
   0.2013858,
   0.2166313,
   0.2106243,
   0.2174793,
   0.2134825,
   0.2211004,
   0.2249697,
   0.207187,
   0.2001394,
   0.1995998,
   0.2069642,
   0.1882765,
   0.1953418,
   0.2042503,
   0.2087725,
   0.2019734,
   0.2068791,
   0.22281};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.78,3.78);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3024[24] = {
   1.026255,
   1.102243,
   1.059009,
   0.9682744,
   1.248119,
   1.089658,
   0.9208593,
   1.062767,
   0.9026769,
   0.9342276,
   0.8724595,
   0.9366801,
   1.008968,
   0.9350693,
   1.151417,
   0.9586274,
   0.9528826,
   1.022931,
   0.8950432,
   0.9988464,
   0.9399243,
   0.9942252,
   0.9007731,
   1.080286};
   Double_t _felx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3024[24] = {
   0.09035674,
   0.09153632,
   0.08918462,
   0.08333579,
   0.1051106,
   0.0955693,
   0.08902282,
   0.09953727,
   0.08454344,
   0.08867296,
   0.08395245,
   0.09097842,
   0.09576698,
   0.08644718,
   0.09339221,
   0.08574224,
   0.09169117,
   0.09377191,
   0.08533902,
   0.0931429,
   0.08340479,
   0.08525411,
   0.08257374,
   0.09944837};
   Double_t _fehx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3024[24] = {
   0.09035674,
   0.09153632,
   0.08918462,
   0.08333579,
   0.1051106,
   0.0955693,
   0.08902282,
   0.09953727,
   0.08454344,
   0.08867296,
   0.08395245,
   0.09097842,
   0.09576698,
   0.08644718,
   0.09339221,
   0.08574224,
   0.09169117,
   0.09377191,
   0.08533902,
   0.0931429,
   0.08340479,
   0.08525411,
   0.08257374,
   0.09944837};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.7320348);
   Graph_Graph3024->SetMaximum(1.409701);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
