#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Oct 21 20:21:51 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-230.7692,-20.28,1692.308,2242.541);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__1->SetBinContent(1,276.4024);
   hmc__1->SetBinContent(2,750.9487);
   hmc__1->SetBinContent(3,996.3163);
   hmc__1->SetBinContent(4,915.7759);
   hmc__1->SetBinContent(5,741.866);
   hmc__1->SetBinContent(6,596.59);
   hmc__1->SetBinContent(7,492.0824);
   hmc__1->SetBinContent(8,347.1224);
   hmc__1->SetBinContent(9,277.9452);
   hmc__1->SetBinContent(10,215.3106);
   hmc__1->SetBinContent(11,152.1776);
   hmc__1->SetBinContent(12,120.9469);
   hmc__1->SetBinContent(13,84.89623);
   hmc__1->SetBinContent(14,79.67155);
   hmc__1->SetBinContent(15,64.12009);
   hmc__1->SetBinContent(16,48.10688);
   hmc__1->SetBinContent(17,45.49714);
   hmc__1->SetBinContent(18,39.76266);
   hmc__1->SetBinContent(19,36.17867);
   hmc__1->SetBinContent(20,34.03963);
   hmc__1->SetBinContent(21,27.46411);
   hmc__1->SetBinContent(22,30.13323);
   hmc__1->SetBinContent(23,23.85909);
   hmc__1->SetBinContent(24,15.7095);
   hmc__1->SetBinContent(25,18.74566);
   hmc__1->SetBinContent(26,347.4344);
   hmc__1->SetBinError(1,75.7734);
   hmc__1->SetBinError(2,194.0525);
   hmc__1->SetBinError(3,281.3245);
   hmc__1->SetBinError(4,256.6971);
   hmc__1->SetBinError(5,197.5833);
   hmc__1->SetBinError(6,166.4759);
   hmc__1->SetBinError(7,140.5928);
   hmc__1->SetBinError(8,102.27);
   hmc__1->SetBinError(9,74.50753);
   hmc__1->SetBinError(10,55.92454);
   hmc__1->SetBinError(11,37.39413);
   hmc__1->SetBinError(12,48.44949);
   hmc__1->SetBinError(13,25.02829);
   hmc__1->SetBinError(14,25.752);
   hmc__1->SetBinError(15,22.25345);
   hmc__1->SetBinError(16,17.1047);
   hmc__1->SetBinError(17,17.15647);
   hmc__1->SetBinError(18,19.6233);
   hmc__1->SetBinError(19,15.03173);
   hmc__1->SetBinError(20,14.56646);
   hmc__1->SetBinError(21,12.57191);
   hmc__1->SetBinError(22,14.33318);
   hmc__1->SetBinError(23,10.99042);
   hmc__1->SetBinError(24,7.835421);
   hmc__1->SetBinError(25,11.51909);
   hmc__1->SetBinError(26,86.25711);
   hmc__1->SetMinimum(-20.28);
   hmc__1->SetMaximum(2129.4);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-9.66926e-09);
   hs1_stack_1->SetMaximum(1046.132);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,12.06666);
   hbadmatch_stack_1->SetBinContent(2,22.85732);
   hbadmatch_stack_1->SetBinContent(3,31.92804);
   hbadmatch_stack_1->SetBinContent(4,19.8176);
   hbadmatch_stack_1->SetBinContent(5,15.37566);
   hbadmatch_stack_1->SetBinContent(6,13.5627);
   hbadmatch_stack_1->SetBinContent(7,10.99326);
   hbadmatch_stack_1->SetBinContent(8,7.276228);
   hbadmatch_stack_1->SetBinContent(9,7.46896);
   hbadmatch_stack_1->SetBinContent(10,3.565674);
   hbadmatch_stack_1->SetBinContent(11,2.690781);
   hbadmatch_stack_1->SetBinContent(12,2.46729);
   hbadmatch_stack_1->SetBinContent(13,2.460079);
   hbadmatch_stack_1->SetBinContent(14,1.305509);
   hbadmatch_stack_1->SetBinContent(15,2.598112);
   hbadmatch_stack_1->SetBinContent(16,1.007304);
   hbadmatch_stack_1->SetBinContent(17,1.446586);
   hbadmatch_stack_1->SetBinContent(18,1.102295);
   hbadmatch_stack_1->SetBinContent(19,0.8894893);
   hbadmatch_stack_1->SetBinContent(20,1.833058);
   hbadmatch_stack_1->SetBinContent(21,1.072095);
   hbadmatch_stack_1->SetBinContent(22,0.3416744);
   hbadmatch_stack_1->SetBinContent(23,0.2248688);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,8.768671);
   hbadmatch_stack_1->SetBinError(1,1.964992);
   hbadmatch_stack_1->SetBinError(2,2.525153);
   hbadmatch_stack_1->SetBinError(3,3.942747);
   hbadmatch_stack_1->SetBinError(4,2.364119);
   hbadmatch_stack_1->SetBinError(5,2.052719);
   hbadmatch_stack_1->SetBinError(6,1.933068);
   hbadmatch_stack_1->SetBinError(7,2.303993);
   hbadmatch_stack_1->SetBinError(8,1.3986);
   hbadmatch_stack_1->SetBinError(9,1.707319);
   hbadmatch_stack_1->SetBinError(10,0.9895436);
   hbadmatch_stack_1->SetBinError(11,0.882955);
   hbadmatch_stack_1->SetBinError(12,0.8358067);
   hbadmatch_stack_1->SetBinError(13,0.8622117);
   hbadmatch_stack_1->SetBinError(14,0.6255712);
   hbadmatch_stack_1->SetBinError(15,0.9428799);
   hbadmatch_stack_1->SetBinError(16,0.5386202);
   hbadmatch_stack_1->SetBinError(17,0.698416);
   hbadmatch_stack_1->SetBinError(18,0.6048225);
   hbadmatch_stack_1->SetBinError(19,0.4700171);
   hbadmatch_stack_1->SetBinError(20,0.7364501);
   hbadmatch_stack_1->SetBinError(21,0.5551335);
   hbadmatch_stack_1->SetBinError(22,0.3416744);
   hbadmatch_stack_1->SetBinError(23,0.2248688);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(26,1.630127);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,24.12004);
   hext_stack_2->SetBinContent(2,102.8432);
   hext_stack_2->SetBinContent(3,127.8168);
   hext_stack_2->SetBinContent(4,81.29095);
   hext_stack_2->SetBinContent(5,75.86665);
   hext_stack_2->SetBinContent(6,55.47378);
   hext_stack_2->SetBinContent(7,51.346);
   hext_stack_2->SetBinContent(8,31.23688);
   hext_stack_2->SetBinContent(9,35.82034);
   hext_stack_2->SetBinContent(10,24.11287);
   hext_stack_2->SetBinContent(11,23.04311);
   hext_stack_2->SetBinContent(12,12.86824);
   hext_stack_2->SetBinContent(13,7.683431);
   hext_stack_2->SetBinContent(14,9.615453);
   hext_stack_2->SetBinContent(15,9.627043);
   hext_stack_2->SetBinContent(16,5.191995);
   hext_stack_2->SetBinContent(17,3.967789);
   hext_stack_2->SetBinContent(18,6.802392);
   hext_stack_2->SetBinContent(19,6.049854);
   hext_stack_2->SetBinContent(20,2.517386);
   hext_stack_2->SetBinContent(21,2.999006);
   hext_stack_2->SetBinContent(22,8.456316);
   hext_stack_2->SetBinContent(23,3.565599);
   hext_stack_2->SetBinContent(24,1.137595);
   hext_stack_2->SetBinContent(25,1.697008);
   hext_stack_2->SetBinContent(26,39.1884);
   hext_stack_2->SetBinError(1,3.255011);
   hext_stack_2->SetBinError(2,7.040753);
   hext_stack_2->SetBinError(3,7.721856);
   hext_stack_2->SetBinError(4,5.985381);
   hext_stack_2->SetBinError(5,5.866629);
   hext_stack_2->SetBinError(6,5.206059);
   hext_stack_2->SetBinError(7,5.059042);
   hext_stack_2->SetBinError(8,3.73969);
   hext_stack_2->SetBinError(9,4.048398);
   hext_stack_2->SetBinError(10,3.285772);
   hext_stack_2->SetBinError(11,3.289819);
   hext_stack_2->SetBinError(12,2.428365);
   hext_stack_2->SetBinError(13,1.88164);
   hext_stack_2->SetBinError(14,2.138779);
   hext_stack_2->SetBinError(15,2.123275);
   hext_stack_2->SetBinError(16,1.468055);
   hext_stack_2->SetBinError(17,1.234542);
   hext_stack_2->SetBinError(18,1.657538);
   hext_stack_2->SetBinError(19,1.75513);
   hext_stack_2->SetBinError(20,0.9575503);
   hext_stack_2->SetBinError(21,1.159101);
   hext_stack_2->SetBinError(22,2.177636);
   hext_stack_2->SetBinError(23,1.22225);
   hext_stack_2->SetBinError(24,0.6602113);
   hext_stack_2->SetBinError(25,0.8873887);
   hext_stack_2->SetBinError(26,4.293359);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,7.126712);
   hdirt_stack_3->SetBinContent(2,12.18289);
   hdirt_stack_3->SetBinContent(3,9.377749);
   hdirt_stack_3->SetBinContent(4,7.405054);
   hdirt_stack_3->SetBinContent(5,6.796021);
   hdirt_stack_3->SetBinContent(6,5.291636);
   hdirt_stack_3->SetBinContent(7,2.747076);
   hdirt_stack_3->SetBinContent(8,2.648132);
   hdirt_stack_3->SetBinContent(9,3.569522);
   hdirt_stack_3->SetBinContent(10,1.846317);
   hdirt_stack_3->SetBinContent(11,2.377725);
   hdirt_stack_3->SetBinContent(12,0.966706);
   hdirt_stack_3->SetBinContent(13,1.486485);
   hdirt_stack_3->SetBinContent(14,0.8175273);
   hdirt_stack_3->SetBinContent(15,1.000872);
   hdirt_stack_3->SetBinContent(16,0.8581587);
   hdirt_stack_3->SetBinContent(17,0.6193105);
   hdirt_stack_3->SetBinContent(19,0.5906858);
   hdirt_stack_3->SetBinContent(20,0.9115412);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.3866654);
   hdirt_stack_3->SetBinContent(26,3.686066);
   hdirt_stack_3->SetBinError(1,1.43464);
   hdirt_stack_3->SetBinError(2,1.749323);
   hdirt_stack_3->SetBinError(3,1.804506);
   hdirt_stack_3->SetBinError(4,1.306885);
   hdirt_stack_3->SetBinError(5,1.346362);
   hdirt_stack_3->SetBinError(6,1.441817);
   hdirt_stack_3->SetBinError(7,0.8118277);
   hdirt_stack_3->SetBinError(8,0.8482792);
   hdirt_stack_3->SetBinError(9,1.110469);
   hdirt_stack_3->SetBinError(10,0.6746077);
   hdirt_stack_3->SetBinError(11,0.7879046);
   hdirt_stack_3->SetBinError(12,0.4680551);
   hdirt_stack_3->SetBinError(13,1.15304);
   hdirt_stack_3->SetBinError(14,0.411844);
   hdirt_stack_3->SetBinError(15,0.531595);
   hdirt_stack_3->SetBinError(16,0.5193504);
   hdirt_stack_3->SetBinError(17,0.3685147);
   hdirt_stack_3->SetBinError(19,0.42205);
   hdirt_stack_3->SetBinError(20,0.5597697);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.3866654);
   hdirt_stack_3->SetBinError(26,1.053211);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,46.76581);
   houtFV_stack_4->SetBinContent(2,92.54994);
   houtFV_stack_4->SetBinContent(3,89.46118);
   houtFV_stack_4->SetBinContent(4,79.71471);
   houtFV_stack_4->SetBinContent(5,59.75586);
   houtFV_stack_4->SetBinContent(6,53.01032);
   houtFV_stack_4->SetBinContent(7,45.78526);
   houtFV_stack_4->SetBinContent(8,30.61684);
   houtFV_stack_4->SetBinContent(9,23.98068);
   houtFV_stack_4->SetBinContent(10,19.80896);
   houtFV_stack_4->SetBinContent(11,15.97975);
   houtFV_stack_4->SetBinContent(12,14.99104);
   houtFV_stack_4->SetBinContent(13,7.825392);
   houtFV_stack_4->SetBinContent(14,10.42856);
   houtFV_stack_4->SetBinContent(15,5.916796);
   houtFV_stack_4->SetBinContent(16,6.935193);
   houtFV_stack_4->SetBinContent(17,6.503345);
   houtFV_stack_4->SetBinContent(18,5.134038);
   houtFV_stack_4->SetBinContent(19,5.560373);
   houtFV_stack_4->SetBinContent(20,6.166577);
   houtFV_stack_4->SetBinContent(21,3.034178);
   houtFV_stack_4->SetBinContent(22,2.466292);
   houtFV_stack_4->SetBinContent(23,3.466885);
   houtFV_stack_4->SetBinContent(24,2.349768);
   houtFV_stack_4->SetBinContent(25,3.390944);
   houtFV_stack_4->SetBinContent(26,38.21329);
   houtFV_stack_4->SetBinError(1,3.41847);
   houtFV_stack_4->SetBinError(2,4.989988);
   houtFV_stack_4->SetBinError(3,4.704801);
   houtFV_stack_4->SetBinError(4,4.441121);
   houtFV_stack_4->SetBinError(5,3.774185);
   houtFV_stack_4->SetBinError(6,3.634701);
   houtFV_stack_4->SetBinError(7,3.496001);
   houtFV_stack_4->SetBinError(8,2.77961);
   houtFV_stack_4->SetBinError(9,2.560609);
   houtFV_stack_4->SetBinError(10,2.240929);
   houtFV_stack_4->SetBinError(11,2.007446);
   houtFV_stack_4->SetBinError(12,1.837644);
   houtFV_stack_4->SetBinError(13,1.419544);
   houtFV_stack_4->SetBinError(14,1.740943);
   houtFV_stack_4->SetBinError(15,1.234281);
   houtFV_stack_4->SetBinError(16,1.48992);
   houtFV_stack_4->SetBinError(17,1.302585);
   houtFV_stack_4->SetBinError(18,1.206124);
   houtFV_stack_4->SetBinError(19,1.231856);
   houtFV_stack_4->SetBinError(20,1.27225);
   houtFV_stack_4->SetBinError(21,0.8325598);
   houtFV_stack_4->SetBinError(22,0.7655781);
   houtFV_stack_4->SetBinError(23,0.8714026);
   houtFV_stack_4->SetBinError(24,0.8131119);
   houtFV_stack_4->SetBinError(25,1.056419);
   houtFV_stack_4->SetBinError(26,3.103151);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.706059);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.586865);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,8.707228);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,15.35725);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,14.01791);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,13.0137);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,12.23437);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,8.243721);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.869622);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.476921);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.1047);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.915675);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.702654);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.217146);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.607857);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.381692);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.4621715);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4272387);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6165608);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6910766);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.9389976);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2503593);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2783695);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8743464);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2836161);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,7.64497);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7725427);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8150791);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.159727);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.459732);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.347716);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.349942);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.420567);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9563181);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5663759);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9770976);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5358665);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8634679);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5312965);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4650978);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4158471);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.485871);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1640778);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1625691);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2015952);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2578809);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4273934);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.09243534);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.122033);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3387167);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2244855);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.9480362);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9732006);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.317144);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.202048);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.42327);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.226175);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.959362);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.268167);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4169983);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5178115);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2726041);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4328885);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2993899);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03507804);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1576705);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1521039);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4516816);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0508617);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08444149);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.5058255);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2370748);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3566504);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4971999);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.604844);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4055425);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4699905);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3226922);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1195315);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1957611);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1434796);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2328369);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1152431);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02482773);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1321809);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1295493);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05203545);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2959227);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05086169);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06827068);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1714512);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,69.24242);
   hNCpi0inFVres_stack_7->SetBinContent(2,204.0952);
   hNCpi0inFVres_stack_7->SetBinContent(3,319.8996);
   hNCpi0inFVres_stack_7->SetBinContent(4,334.41);
   hNCpi0inFVres_stack_7->SetBinContent(5,282.0099);
   hNCpi0inFVres_stack_7->SetBinContent(6,226.2536);
   hNCpi0inFVres_stack_7->SetBinContent(7,165.8774);
   hNCpi0inFVres_stack_7->SetBinContent(8,119.7972);
   hNCpi0inFVres_stack_7->SetBinContent(9,82.96127);
   hNCpi0inFVres_stack_7->SetBinContent(10,63.52421);
   hNCpi0inFVres_stack_7->SetBinContent(11,45.3765);
   hNCpi0inFVres_stack_7->SetBinContent(12,32.53794);
   hNCpi0inFVres_stack_7->SetBinContent(13,23.71335);
   hNCpi0inFVres_stack_7->SetBinContent(14,21.17755);
   hNCpi0inFVres_stack_7->SetBinContent(15,19.03337);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.89449);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.5126);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.195895);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.037166);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.029423);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.728106);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.882127);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.023786);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.893278);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.743369);
   hNCpi0inFVres_stack_7->SetBinContent(26,83.31472);
   hNCpi0inFVres_stack_7->SetBinError(1,2.761022);
   hNCpi0inFVres_stack_7->SetBinError(2,4.593139);
   hNCpi0inFVres_stack_7->SetBinError(3,5.561841);
   hNCpi0inFVres_stack_7->SetBinError(4,5.871394);
   hNCpi0inFVres_stack_7->SetBinError(5,5.479885);
   hNCpi0inFVres_stack_7->SetBinError(6,4.816658);
   hNCpi0inFVres_stack_7->SetBinError(7,4.137388);
   hNCpi0inFVres_stack_7->SetBinError(8,3.465679);
   hNCpi0inFVres_stack_7->SetBinError(9,2.936798);
   hNCpi0inFVres_stack_7->SetBinError(10,2.633801);
   hNCpi0inFVres_stack_7->SetBinError(11,2.331209);
   hNCpi0inFVres_stack_7->SetBinError(12,2.145391);
   hNCpi0inFVres_stack_7->SetBinError(13,1.690975);
   hNCpi0inFVres_stack_7->SetBinError(14,1.681336);
   hNCpi0inFVres_stack_7->SetBinError(15,1.643623);
   hNCpi0inFVres_stack_7->SetBinError(16,1.338421);
   hNCpi0inFVres_stack_7->SetBinError(17,1.089527);
   hNCpi0inFVres_stack_7->SetBinError(18,1.050577);
   hNCpi0inFVres_stack_7->SetBinError(19,1.044224);
   hNCpi0inFVres_stack_7->SetBinError(20,1.008024);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9692865);
   hNCpi0inFVres_stack_7->SetBinError(22,1.000297);
   hNCpi0inFVres_stack_7->SetBinError(23,1.035791);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7573477);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7509563);
   hNCpi0inFVres_stack_7->SetBinError(26,3.228955);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.83652);
   hNCpi0inFVdis_stack_8->SetBinContent(2,49.9241);
   hNCpi0inFVdis_stack_8->SetBinContent(3,61.77005);
   hNCpi0inFVdis_stack_8->SetBinContent(4,57.83331);
   hNCpi0inFVdis_stack_8->SetBinContent(5,45.42392);
   hNCpi0inFVdis_stack_8->SetBinContent(6,40.34349);
   hNCpi0inFVdis_stack_8->SetBinContent(7,32.14823);
   hNCpi0inFVdis_stack_8->SetBinContent(8,28.15741);
   hNCpi0inFVdis_stack_8->SetBinContent(9,23.43161);
   hNCpi0inFVdis_stack_8->SetBinContent(10,17.18643);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.46517);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.571);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.511454);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.846167);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.015217);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.26277);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.487689);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.915338);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.960671);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.372637);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.160615);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.365603);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.894713);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.274064);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.521884);
   hNCpi0inFVdis_stack_8->SetBinContent(26,26.64829);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.500235);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.420334);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.463288);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.490699);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.274829);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.079068);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.850693);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.913214);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.684932);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.445669);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.415174);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.208741);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.071871);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.26634);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8443699);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5698639);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7394343);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6634025);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7932217);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6656167);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.047179);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.547644);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4939141);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5806719);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6644964);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.965331);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1340961);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2350968);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.4436634);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1287713);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.1712709);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.0716931);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1341172);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1902652);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04867602);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1357771);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04049794);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,43.53934);
   hCCpi0inFV_stack_10->SetBinContent(2,120.8087);
   hCCpi0inFV_stack_10->SetBinContent(3,162.9158);
   hCCpi0inFV_stack_10->SetBinContent(4,160.2191);
   hCCpi0inFV_stack_10->SetBinContent(5,124.7761);
   hCCpi0inFV_stack_10->SetBinContent(6,103.894);
   hCCpi0inFV_stack_10->SetBinContent(7,81.17657);
   hCCpi0inFV_stack_10->SetBinContent(8,55.15569);
   hCCpi0inFV_stack_10->SetBinContent(9,48.12408);
   hCCpi0inFV_stack_10->SetBinContent(10,36.73988);
   hCCpi0inFV_stack_10->SetBinContent(11,21.09776);
   hCCpi0inFV_stack_10->SetBinContent(12,19.59996);
   hCCpi0inFV_stack_10->SetBinContent(13,10.82459);
   hCCpi0inFV_stack_10->SetBinContent(14,11.0354);
   hCCpi0inFV_stack_10->SetBinContent(15,8.450546);
   hCCpi0inFV_stack_10->SetBinContent(16,6.753782);
   hCCpi0inFV_stack_10->SetBinContent(17,5.525481);
   hCCpi0inFV_stack_10->SetBinContent(18,6.340673);
   hCCpi0inFV_stack_10->SetBinContent(19,3.514436);
   hCCpi0inFV_stack_10->SetBinContent(20,4.637985);
   hCCpi0inFV_stack_10->SetBinContent(21,3.372665);
   hCCpi0inFV_stack_10->SetBinContent(22,3.230893);
   hCCpi0inFV_stack_10->SetBinContent(23,2.442341);
   hCCpi0inFV_stack_10->SetBinContent(24,2.53255);
   hCCpi0inFV_stack_10->SetBinContent(25,2.335254);
   hCCpi0inFV_stack_10->SetBinContent(26,45.97367);
   hCCpi0inFV_stack_10->SetBinError(1,3.235317);
   hCCpi0inFV_stack_10->SetBinError(2,5.495221);
   hCCpi0inFV_stack_10->SetBinError(3,6.401245);
   hCCpi0inFV_stack_10->SetBinError(4,6.409176);
   hCCpi0inFV_stack_10->SetBinError(5,5.5815);
   hCCpi0inFV_stack_10->SetBinError(6,5.152172);
   hCCpi0inFV_stack_10->SetBinError(7,4.543529);
   hCCpi0inFV_stack_10->SetBinError(8,3.648837);
   hCCpi0inFV_stack_10->SetBinError(9,3.509533);
   hCCpi0inFV_stack_10->SetBinError(10,3.047576);
   hCCpi0inFV_stack_10->SetBinError(11,2.354028);
   hCCpi0inFV_stack_10->SetBinError(12,2.229977);
   hCCpi0inFV_stack_10->SetBinError(13,1.590928);
   hCCpi0inFV_stack_10->SetBinError(14,1.68813);
   hCCpi0inFV_stack_10->SetBinError(15,1.434978);
   hCCpi0inFV_stack_10->SetBinError(16,1.27269);
   hCCpi0inFV_stack_10->SetBinError(17,1.136042);
   hCCpi0inFV_stack_10->SetBinError(18,1.316445);
   hCCpi0inFV_stack_10->SetBinError(19,0.940519);
   hCCpi0inFV_stack_10->SetBinError(20,1.007875);
   hCCpi0inFV_stack_10->SetBinError(21,0.8990075);
   hCCpi0inFV_stack_10->SetBinError(22,0.855484);
   hCCpi0inFV_stack_10->SetBinError(23,0.759212);
   hCCpi0inFV_stack_10->SetBinError(24,0.8317173);
   hCCpi0inFV_stack_10->SetBinError(25,0.7593971);
   hCCpi0inFV_stack_10->SetBinError(26,3.462316);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,24.23756);
   hNCinFV_stack_11->SetBinContent(2,66.34401);
   hNCinFV_stack_11->SetBinContent(3,82.67719);
   hNCinFV_stack_11->SetBinContent(4,65.79858);
   hNCinFV_stack_11->SetBinContent(5,52.76128);
   hNCinFV_stack_11->SetBinContent(6,30.14099);
   hNCinFV_stack_11->SetBinContent(7,36.23189);
   hNCinFV_stack_11->SetBinContent(8,26.40354);
   hNCinFV_stack_11->SetBinContent(9,21.85288);
   hNCinFV_stack_11->SetBinContent(10,19.59151);
   hNCinFV_stack_11->SetBinContent(11,11.77666);
   hNCinFV_stack_11->SetBinContent(12,7.738029);
   hNCinFV_stack_11->SetBinContent(13,8.719509);
   hNCinFV_stack_11->SetBinContent(14,5.31765);
   hNCinFV_stack_11->SetBinContent(15,4.429919);
   hNCinFV_stack_11->SetBinContent(16,4.463092);
   hNCinFV_stack_11->SetBinContent(17,4.879662);
   hNCinFV_stack_11->SetBinContent(18,3.073987);
   hNCinFV_stack_11->SetBinContent(19,1.966788);
   hNCinFV_stack_11->SetBinContent(20,2.332869);
   hNCinFV_stack_11->SetBinContent(21,1.931336);
   hNCinFV_stack_11->SetBinContent(22,1.694524);
   hNCinFV_stack_11->SetBinContent(23,1.291794);
   hNCinFV_stack_11->SetBinContent(24,1.632389);
   hNCinFV_stack_11->SetBinContent(25,1.008593);
   hNCinFV_stack_11->SetBinContent(26,26.94471);
   hNCinFV_stack_11->SetBinError(1,2.703936);
   hNCinFV_stack_11->SetBinError(2,4.216304);
   hNCinFV_stack_11->SetBinError(3,5.024786);
   hNCinFV_stack_11->SetBinError(4,4.387911);
   hNCinFV_stack_11->SetBinError(5,3.982358);
   hNCinFV_stack_11->SetBinError(6,2.804052);
   hNCinFV_stack_11->SetBinError(7,3.389802);
   hNCinFV_stack_11->SetBinError(8,2.870902);
   hNCinFV_stack_11->SetBinError(9,2.578275);
   hNCinFV_stack_11->SetBinError(10,2.520757);
   hNCinFV_stack_11->SetBinError(11,1.840187);
   hNCinFV_stack_11->SetBinError(12,1.375682);
   hNCinFV_stack_11->SetBinError(13,1.649825);
   hNCinFV_stack_11->SetBinError(14,1.19534);
   hNCinFV_stack_11->SetBinError(15,1.165374);
   hNCinFV_stack_11->SetBinError(16,1.164299);
   hNCinFV_stack_11->SetBinError(17,1.181937);
   hNCinFV_stack_11->SetBinError(18,0.858668);
   hNCinFV_stack_11->SetBinError(19,0.9984966);
   hNCinFV_stack_11->SetBinError(20,0.8206192);
   hNCinFV_stack_11->SetBinError(21,0.7532368);
   hNCinFV_stack_11->SetBinError(22,0.6148669);
   hNCinFV_stack_11->SetBinError(23,1.010591);
   hNCinFV_stack_11->SetBinError(24,0.8533125);
   hNCinFV_stack_11->SetBinError(25,0.5319109);
   hNCinFV_stack_11->SetBinError(26,2.688758);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,21.90058);
   hnumuCCinFV_stack_12->SetBinContent(2,68.0451);
   hnumuCCinFV_stack_12->SetBinContent(3,94.82399);
   hnumuCCinFV_stack_12->SetBinContent(4,86.80994);
   hnumuCCinFV_stack_12->SetBinContent(5,60.39243);
   hnumuCCinFV_stack_12->SetBinContent(6,50.99924);
   hnumuCCinFV_stack_12->SetBinContent(7,47.94212);
   hnumuCCinFV_stack_12->SetBinContent(8,34.96305);
   hnumuCCinFV_stack_12->SetBinContent(9,25.37237);
   hnumuCCinFV_stack_12->SetBinContent(10,22.38099);
   hnumuCCinFV_stack_12->SetBinContent(11,12.39764);
   hnumuCCinFV_stack_12->SetBinContent(12,13.78848);
   hnumuCCinFV_stack_12->SetBinContent(13,11.99311);
   hnumuCCinFV_stack_12->SetBinContent(14,9.333204);
   hnumuCCinFV_stack_12->SetBinContent(15,6.087655);
   hnumuCCinFV_stack_12->SetBinContent(16,4.552389);
   hnumuCCinFV_stack_12->SetBinContent(17,6.464215);
   hnumuCCinFV_stack_12->SetBinContent(18,4.001799);
   hnumuCCinFV_stack_12->SetBinContent(19,4.293289);
   hnumuCCinFV_stack_12->SetBinContent(20,3.620839);
   hnumuCCinFV_stack_12->SetBinContent(21,3.14264);
   hnumuCCinFV_stack_12->SetBinContent(22,3.206676);
   hnumuCCinFV_stack_12->SetBinContent(23,2.828223);
   hnumuCCinFV_stack_12->SetBinContent(24,0.6237661);
   hnumuCCinFV_stack_12->SetBinContent(25,2.375395);
   hnumuCCinFV_stack_12->SetBinContent(26,51.42215);
   hnumuCCinFV_stack_12->SetBinError(1,3.199837);
   hnumuCCinFV_stack_12->SetBinError(2,4.435174);
   hnumuCCinFV_stack_12->SetBinError(3,5.527227);
   hnumuCCinFV_stack_12->SetBinError(4,5.639512);
   hnumuCCinFV_stack_12->SetBinError(5,4.570863);
   hnumuCCinFV_stack_12->SetBinError(6,3.78199);
   hnumuCCinFV_stack_12->SetBinError(7,4.212947);
   hnumuCCinFV_stack_12->SetBinError(8,3.420871);
   hnumuCCinFV_stack_12->SetBinError(9,2.697313);
   hnumuCCinFV_stack_12->SetBinError(10,3.388637);
   hnumuCCinFV_stack_12->SetBinError(11,1.813486);
   hnumuCCinFV_stack_12->SetBinError(12,2.325849);
   hnumuCCinFV_stack_12->SetBinError(13,1.836804);
   hnumuCCinFV_stack_12->SetBinError(14,2.262609);
   hnumuCCinFV_stack_12->SetBinError(15,1.289666);
   hnumuCCinFV_stack_12->SetBinError(16,1.085016);
   hnumuCCinFV_stack_12->SetBinError(17,1.661762);
   hnumuCCinFV_stack_12->SetBinError(18,1.043899);
   hnumuCCinFV_stack_12->SetBinError(19,1.125951);
   hnumuCCinFV_stack_12->SetBinError(20,1.071773);
   hnumuCCinFV_stack_12->SetBinError(21,0.9347549);
   hnumuCCinFV_stack_12->SetBinError(22,1.015514);
   hnumuCCinFV_stack_12->SetBinError(23,0.8849171);
   hnumuCCinFV_stack_12->SetBinError(24,0.3613414);
   hnumuCCinFV_stack_12->SetBinError(25,0.8507502);
   hnumuCCinFV_stack_12->SetBinError(26,4.292258);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,3.753394);
   hnueCCinFV_stack_13->SetBinContent(2,3.159203);
   hnueCCinFV_stack_13->SetBinContent(3,3.292992);
   hnueCCinFV_stack_13->SetBinContent(4,3.56737);
   hnueCCinFV_stack_13->SetBinContent(5,2.464128);
   hnueCCinFV_stack_13->SetBinContent(6,2.64721);
   hnueCCinFV_stack_13->SetBinContent(7,4.299036);
   hnueCCinFV_stack_13->SetBinContent(8,2.169054);
   hnueCCinFV_stack_13->SetBinContent(9,0.9760599);
   hnueCCinFV_stack_13->SetBinContent(10,0.7868615);
   hnueCCinFV_stack_13->SetBinContent(11,1.434895);
   hnueCCinFV_stack_13->SetBinContent(12,1.203124);
   hnueCCinFV_stack_13->SetBinContent(13,0.7698287);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(17,0.5762501);
   hnueCCinFV_stack_13->SetBinContent(18,0.6859174);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinContent(22,1.900578);
   hnueCCinFV_stack_13->SetBinContent(23,0.4558426);
   hnueCCinFV_stack_13->SetBinContent(24,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(25,1.049427);
   hnueCCinFV_stack_13->SetBinContent(26,15.12362);
   hnueCCinFV_stack_13->SetBinError(1,1.44044);
   hnueCCinFV_stack_13->SetBinError(2,0.9366523);
   hnueCCinFV_stack_13->SetBinError(3,0.9544255);
   hnueCCinFV_stack_13->SetBinError(4,1.120625);
   hnueCCinFV_stack_13->SetBinError(5,0.8598296);
   hnueCCinFV_stack_13->SetBinError(6,1.375343);
   hnueCCinFV_stack_13->SetBinError(7,1.787025);
   hnueCCinFV_stack_13->SetBinError(8,0.76721);
   hnueCCinFV_stack_13->SetBinError(9,0.5020512);
   hnueCCinFV_stack_13->SetBinError(10,0.3934307);
   hnueCCinFV_stack_13->SetBinError(11,0.5995791);
   hnueCCinFV_stack_13->SetBinError(12,0.5512898);
   hnueCCinFV_stack_13->SetBinError(13,0.4569518);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3816983);
   hnueCCinFV_stack_13->SetBinError(17,0.4193777);
   hnueCCinFV_stack_13->SetBinError(18,0.5162003);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.5191111);
   hnueCCinFV_stack_13->SetBinError(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinError(22,1.375469);
   hnueCCinFV_stack_13->SetBinError(23,0.3232465);
   hnueCCinFV_stack_13->SetBinError(24,0.2770047);
   hnueCCinFV_stack_13->SetBinError(25,0.640838);
   hnueCCinFV_stack_13->SetBinError(26,2.662439);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(1,276.4024);
   hmcerror__2->SetBinContent(2,750.9487);
   hmcerror__2->SetBinContent(3,996.3163);
   hmcerror__2->SetBinContent(4,915.7759);
   hmcerror__2->SetBinContent(5,741.866);
   hmcerror__2->SetBinContent(6,596.59);
   hmcerror__2->SetBinContent(7,492.0824);
   hmcerror__2->SetBinContent(8,347.1224);
   hmcerror__2->SetBinContent(9,277.9452);
   hmcerror__2->SetBinContent(10,215.3106);
   hmcerror__2->SetBinContent(11,152.1776);
   hmcerror__2->SetBinContent(12,120.9469);
   hmcerror__2->SetBinContent(13,84.89623);
   hmcerror__2->SetBinContent(14,79.67155);
   hmcerror__2->SetBinContent(15,64.12009);
   hmcerror__2->SetBinContent(16,48.10688);
   hmcerror__2->SetBinContent(17,45.49714);
   hmcerror__2->SetBinContent(18,39.76266);
   hmcerror__2->SetBinContent(19,36.17867);
   hmcerror__2->SetBinContent(20,34.03963);
   hmcerror__2->SetBinContent(21,27.46411);
   hmcerror__2->SetBinContent(22,30.13323);
   hmcerror__2->SetBinContent(23,23.85909);
   hmcerror__2->SetBinContent(24,15.7095);
   hmcerror__2->SetBinContent(25,18.74566);
   hmcerror__2->SetBinContent(26,347.4344);
   hmcerror__2->SetBinError(1,75.7734);
   hmcerror__2->SetBinError(2,194.0525);
   hmcerror__2->SetBinError(3,281.3245);
   hmcerror__2->SetBinError(4,256.6971);
   hmcerror__2->SetBinError(5,197.5833);
   hmcerror__2->SetBinError(6,166.4759);
   hmcerror__2->SetBinError(7,140.5928);
   hmcerror__2->SetBinError(8,102.27);
   hmcerror__2->SetBinError(9,74.50753);
   hmcerror__2->SetBinError(10,55.92454);
   hmcerror__2->SetBinError(11,37.39413);
   hmcerror__2->SetBinError(12,48.44949);
   hmcerror__2->SetBinError(13,25.02829);
   hmcerror__2->SetBinError(14,25.752);
   hmcerror__2->SetBinError(15,22.25345);
   hmcerror__2->SetBinError(16,17.1047);
   hmcerror__2->SetBinError(17,17.15647);
   hmcerror__2->SetBinError(18,19.6233);
   hmcerror__2->SetBinError(19,15.03173);
   hmcerror__2->SetBinError(20,14.56646);
   hmcerror__2->SetBinError(21,12.57191);
   hmcerror__2->SetBinError(22,14.33318);
   hmcerror__2->SetBinError(23,10.99042);
   hmcerror__2->SetBinError(24,7.835421);
   hmcerror__2->SetBinError(25,11.51909);
   hmcerror__2->SetBinError(26,86.25711);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3001[25] = {
   290,
   760,
   1014,
   925,
   745,
   534,
   406,
   291,
   244,
   195,
   134,
   102,
   105,
   65,
   57,
   49,
   35,
   30,
   25,
   26,
   23,
   24,
   17,
   16,
   13};
   Double_t _felx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3001[25] = {
   17.02939,
   27.5681,
   31.84337,
   30.41381,
   27.29469,
   23.10844,
   20.14944,
   17.05872,
   15.6205,
   13.96424,
   11.57584,
   10.0995,
   10.24695,
   8.1893,
   7.679,
   7.1318,
   6.0548,
   5.6197,
   5.1474,
   5.2453,
   4.9457,
   5.0476,
   4.2835,
   4.1628,
   3.77763};
   Double_t _fehx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3001[25] = {
   17.02939,
   27.5681,
   31.84337,
   30.41381,
   27.29469,
   23.10844,
   20.14944,
   17.05872,
   15.6205,
   13.96424,
   11.57584,
   10.0995,
   10.24695,
   7.9866,
   7.4757,
   6.9277,
   5.8483,
   5.4117,
   4.9374,
   5.0358,
   4.7346,
   4.837,
   4.0673,
   3.9454,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(8.300133);
   Graph_Graph3001->SetMaximum(1149.505);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6125.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 164.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 715.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 69.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 641.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  108.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2088.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  446.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1049.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 488.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 602.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3002[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3002[25] = {
   0.2741416,
   0.2584098,
   0.2823646,
   0.2803056,
   0.2663329,
   0.2790457,
   0.2857099,
   0.2946223,
   0.2680656,
   0.259739,
   0.245727,
   0.4005848,
   0.2948103,
   0.3232271,
   0.347059,
   0.3555561,
   0.377089,
   0.4935108,
   0.415486,
   0.4279264,
   0.4577578,
   0.4756603,
   0.4606387,
   0.4987697,
   0.6144936};
   Double_t _fehx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3002[25] = {
   0.2741416,
   0.2584098,
   0.2823646,
   0.2803056,
   0.2663329,
   0.2790457,
   0.2857099,
   0.2946223,
   0.2680656,
   0.259739,
   0.245727,
   0.4005848,
   0.2948103,
   0.3232271,
   0.347059,
   0.3555561,
   0.377089,
   0.4935108,
   0.415486,
   0.4279264,
   0.4577578,
   0.4756603,
   0.4606387,
   0.4987697,
   0.6144936};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3003[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3003[25] = {
   0.2113097,
   0.2463411,
   0.2790993,
   0.2735589,
   0.261126,
   0.270089,
   0.2649881,
   0.2744379,
   0.2437333,
   0.2246941,
   0.1969379,
   0.1967482,
   0.1990938,
   0.1988252,
   0.2037242,
   0.2144273,
   0.2091305,
   0.1944519,
   0.1951526,
   0.2071607,
   0.2123706,
   0.2455912,
   0.2259974,
   0.2453709,
   0.2438019};
   Double_t _fehx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3003[25] = {
   0.2113097,
   0.2463411,
   0.2790993,
   0.2735589,
   0.261126,
   0.270089,
   0.2649881,
   0.2744379,
   0.2437333,
   0.2246941,
   0.1969379,
   0.1967482,
   0.1990938,
   0.1988252,
   0.2037242,
   0.2144273,
   0.2091305,
   0.1944519,
   0.1951526,
   0.2071607,
   0.2123706,
   0.2455912,
   0.2259974,
   0.2453709,
   0.2438019};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   
   Double_t _fx3004[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3004[25] = {
   1.049195,
   1.012053,
   1.017749,
   1.010072,
   1.004225,
   0.8950871,
   0.8250651,
   0.8383209,
   0.8778709,
   0.9056685,
   0.8805503,
   0.8433454,
   1.236804,
   0.8158496,
   0.888957,
   1.018565,
   0.7692791,
   0.7544767,
   0.6910148,
   0.7638156,
   0.8374565,
   0.7964629,
   0.7125167,
   1.018492,
   0.6934937};
   Double_t _felx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3004[25] = {
   0.06161085,
   0.03671102,
   0.0319611,
   0.03321098,
   0.03679194,
   0.03873421,
   0.04094729,
   0.04914324,
   0.05619993,
   0.06485627,
   0.07606796,
   0.08350364,
   0.1206997,
   0.1027883,
   0.1197597,
   0.1482491,
   0.1330809,
   0.1413311,
   0.1422772,
   0.1540939,
   0.1800786,
   0.1675094,
   0.1795333,
   0.2649862,
   0.2015202};
   Double_t _fehx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3004[25] = {
   0.06161085,
   0.03671102,
   0.0319611,
   0.03321098,
   0.03679194,
   0.03873421,
   0.04094729,
   0.04914324,
   0.05619993,
   0.06485627,
   0.07606796,
   0.08350364,
   0.1206997,
   0.1002441,
   0.1165891,
   0.1440064,
   0.1285421,
   0.1361001,
   0.1364727,
   0.1479393,
   0.1723922,
   0.1605205,
   0.1704717,
   0.2511475,
   0.1896545};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.4054205);
   Graph_Graph3004->SetMaximum(1.444057);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
