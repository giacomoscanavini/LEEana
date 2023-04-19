#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 13:44:46 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-12.73449,451.2821,1408.166);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__4->SetBinContent(1,132.7939);
   hmc__4->SetBinContent(2,182.3185);
   hmc__4->SetBinContent(3,202.5692);
   hmc__4->SetBinContent(4,209.8451);
   hmc__4->SetBinContent(5,226.6586);
   hmc__4->SetBinContent(6,240.5672);
   hmc__4->SetBinContent(7,260.8567);
   hmc__4->SetBinContent(8,285.4787);
   hmc__4->SetBinContent(9,355.3671);
   hmc__4->SetBinContent(10,465.6422);
   hmc__4->SetBinContent(11,576.8747);
   hmc__4->SetBinContent(12,636.7244);
   hmc__4->SetBinContent(13,540.8702);
   hmc__4->SetBinContent(14,336.6805);
   hmc__4->SetBinContent(15,185.6198);
   hmc__4->SetBinContent(16,122.5743);
   hmc__4->SetBinContent(17,90.05659);
   hmc__4->SetBinContent(18,67.92115);
   hmc__4->SetBinContent(19,59.67622);
   hmc__4->SetBinContent(20,52.7836);
   hmc__4->SetBinContent(21,50.61723);
   hmc__4->SetBinContent(22,36.43374);
   hmc__4->SetBinContent(23,35.21157);
   hmc__4->SetBinContent(24,34.58939);
   hmc__4->SetBinContent(25,26.68254);
   hmc__4->SetBinContent(26,25.90316);
   hmc__4->SetBinContent(27,25.81324);
   hmc__4->SetBinContent(28,19.4047);
   hmc__4->SetBinContent(29,21.85257);
   hmc__4->SetBinContent(30,19.45226);
   hmc__4->SetBinContent(31,15.42872);
   hmc__4->SetBinContent(32,14.2596);
   hmc__4->SetBinContent(33,11.99976);
   hmc__4->SetBinContent(34,11.91518);
   hmc__4->SetBinContent(35,118.0698);
   hmc__4->SetBinError(1,46.67317);
   hmc__4->SetBinError(2,50.56905);
   hmc__4->SetBinError(3,48.10134);
   hmc__4->SetBinError(4,52.41703);
   hmc__4->SetBinError(5,57.33882);
   hmc__4->SetBinError(6,64.12376);
   hmc__4->SetBinError(7,86.51351);
   hmc__4->SetBinError(8,86.28685);
   hmc__4->SetBinError(9,104.2363);
   hmc__4->SetBinError(10,149.6755);
   hmc__4->SetBinError(11,178.7976);
   hmc__4->SetBinError(12,191.6653);
   hmc__4->SetBinError(13,175.1678);
   hmc__4->SetBinError(14,122.9908);
   hmc__4->SetBinError(15,70.75124);
   hmc__4->SetBinError(16,38.77229);
   hmc__4->SetBinError(17,31.05853);
   hmc__4->SetBinError(18,23.83964);
   hmc__4->SetBinError(19,24.15914);
   hmc__4->SetBinError(20,26.19367);
   hmc__4->SetBinError(21,20.60054);
   hmc__4->SetBinError(22,14.94163);
   hmc__4->SetBinError(23,18.51423);
   hmc__4->SetBinError(24,16.48308);
   hmc__4->SetBinError(25,15.23044);
   hmc__4->SetBinError(26,13.82917);
   hmc__4->SetBinError(27,15.08815);
   hmc__4->SetBinError(28,11.8897);
   hmc__4->SetBinError(29,11.56958);
   hmc__4->SetBinError(30,11.44831);
   hmc__4->SetBinError(31,11.67041);
   hmc__4->SetBinError(32,10.48068);
   hmc__4->SetBinError(33,8.35472);
   hmc__4->SetBinError(34,11.39438);
   hmc__4->SetBinError(35,45.33697);
   hmc__4->SetMinimum(-12.73449);
   hmc__4->SetMaximum(1337.121);
   hmc__4->SetEntries(5638.682);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",34,0,400);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(668.5606);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,4.960781);
   hbadmatch_stack_1->SetBinContent(2,6.691609);
   hbadmatch_stack_1->SetBinContent(3,7.378645);
   hbadmatch_stack_1->SetBinContent(4,5.655807);
   hbadmatch_stack_1->SetBinContent(5,6.82706);
   hbadmatch_stack_1->SetBinContent(6,7.23679);
   hbadmatch_stack_1->SetBinContent(7,9.224257);
   hbadmatch_stack_1->SetBinContent(8,7.254507);
   hbadmatch_stack_1->SetBinContent(9,8.610793);
   hbadmatch_stack_1->SetBinContent(10,8.045459);
   hbadmatch_stack_1->SetBinContent(11,7.49646);
   hbadmatch_stack_1->SetBinContent(12,10.20587);
   hbadmatch_stack_1->SetBinContent(13,7.012673);
   hbadmatch_stack_1->SetBinContent(14,6.990874);
   hbadmatch_stack_1->SetBinContent(15,6.220757);
   hbadmatch_stack_1->SetBinContent(16,3.249555);
   hbadmatch_stack_1->SetBinContent(17,1.660551);
   hbadmatch_stack_1->SetBinContent(18,0.933257);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(20,0.9269427);
   hbadmatch_stack_1->SetBinContent(21,1.467217);
   hbadmatch_stack_1->SetBinContent(22,0.5901461);
   hbadmatch_stack_1->SetBinContent(23,1.412273);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.9865863);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.1967154);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(33,0.7319179);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.3934307);
   hbadmatch_stack_1->SetBinError(1,1.307428);
   hbadmatch_stack_1->SetBinError(2,1.341703);
   hbadmatch_stack_1->SetBinError(3,1.39108);
   hbadmatch_stack_1->SetBinError(4,1.203173);
   hbadmatch_stack_1->SetBinError(5,1.402556);
   hbadmatch_stack_1->SetBinError(6,1.436319);
   hbadmatch_stack_1->SetBinError(7,1.530914);
   hbadmatch_stack_1->SetBinError(8,1.601674);
   hbadmatch_stack_1->SetBinError(9,1.50917);
   hbadmatch_stack_1->SetBinError(10,1.445635);
   hbadmatch_stack_1->SetBinError(11,1.427925);
   hbadmatch_stack_1->SetBinError(12,2.273594);
   hbadmatch_stack_1->SetBinError(13,1.722163);
   hbadmatch_stack_1->SetBinError(14,1.98733);
   hbadmatch_stack_1->SetBinError(15,2.253551);
   hbadmatch_stack_1->SetBinError(16,1.078845);
   hbadmatch_stack_1->SetBinError(17,0.650847);
   hbadmatch_stack_1->SetBinError(18,0.4808022);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(20,0.4800908);
   hbadmatch_stack_1->SetBinError(21,0.6214735);
   hbadmatch_stack_1->SetBinError(22,0.340721);
   hbadmatch_stack_1->SetBinError(23,0.6510715);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.5240452);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.1967154);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(33,0.438694);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.2781975);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,12.46442);
   hext_stack_2->SetBinContent(2,18.62242);
   hext_stack_2->SetBinContent(3,31.2816);
   hext_stack_2->SetBinContent(4,27.67128);
   hext_stack_2->SetBinContent(5,20.76634);
   hext_stack_2->SetBinContent(6,23.97441);
   hext_stack_2->SetBinContent(7,22.22115);
   hext_stack_2->SetBinContent(8,23.01558);
   hext_stack_2->SetBinContent(9,21.88239);
   hext_stack_2->SetBinContent(10,28.27378);
   hext_stack_2->SetBinContent(11,24.69105);
   hext_stack_2->SetBinContent(12,30.59804);
   hext_stack_2->SetBinContent(13,30.09929);
   hext_stack_2->SetBinContent(14,13.05419);
   hext_stack_2->SetBinContent(15,7.380575);
   hext_stack_2->SetBinContent(16,9.577972);
   hext_stack_2->SetBinContent(17,4.378797);
   hext_stack_2->SetBinContent(18,3.889996);
   hext_stack_2->SetBinContent(19,2.6702);
   hext_stack_2->SetBinContent(20,4.218802);
   hext_stack_2->SetBinContent(21,2.26801);
   hext_stack_2->SetBinContent(22,1.950793);
   hext_stack_2->SetBinContent(23,1.868591);
   hext_stack_2->SetBinContent(24,2.103607);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,2.510206);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,1.055394);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,1.950793);
   hext_stack_2->SetBinError(1,2.32278);
   hext_stack_2->SetBinError(2,2.840316);
   hext_stack_2->SetBinError(3,3.639989);
   hext_stack_2->SetBinError(4,3.534316);
   hext_stack_2->SetBinError(5,2.854696);
   hext_stack_2->SetBinError(6,3.194939);
   hext_stack_2->SetBinError(7,2.98188);
   hext_stack_2->SetBinError(8,3.080508);
   hext_stack_2->SetBinError(9,3.031299);
   hext_stack_2->SetBinError(10,3.411123);
   hext_stack_2->SetBinError(11,3.298575);
   hext_stack_2->SetBinError(12,3.638309);
   hext_stack_2->SetBinError(13,3.680952);
   hext_stack_2->SetBinError(14,2.326699);
   hext_stack_2->SetBinError(15,1.682775);
   hext_stack_2->SetBinError(16,1.943842);
   hext_stack_2->SetBinError(17,1.350755);
   hext_stack_2->SetBinError(18,1.264566);
   hext_stack_2->SetBinError(19,1.050314);
   hext_stack_2->SetBinError(20,1.356276);
   hext_stack_2->SetBinError(21,1.035838);
   hext_stack_2->SetBinError(22,0.8755137);
   hext_stack_2->SetBinError(23,0.840497);
   hext_stack_2->SetBinError(24,0.9761052);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,1.057404);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.6130171);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.8755137);
   hext_stack_2->SetEntries(946);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.791106);
   hdirt_stack_3->SetBinContent(2,2.809477);
   hdirt_stack_3->SetBinContent(3,2.008207);
   hdirt_stack_3->SetBinContent(4,3.992725);
   hdirt_stack_3->SetBinContent(5,4.61993);
   hdirt_stack_3->SetBinContent(6,3.108973);
   hdirt_stack_3->SetBinContent(7,3.21463);
   hdirt_stack_3->SetBinContent(8,2.8934);
   hdirt_stack_3->SetBinContent(9,2.801266);
   hdirt_stack_3->SetBinContent(10,2.592278);
   hdirt_stack_3->SetBinContent(11,4.911817);
   hdirt_stack_3->SetBinContent(12,3.391778);
   hdirt_stack_3->SetBinContent(13,3.637158);
   hdirt_stack_3->SetBinContent(14,1.233158);
   hdirt_stack_3->SetBinContent(15,2.110102);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.3896828);
   hdirt_stack_3->SetBinContent(20,0.9769442);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(25,0.4762587);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.7234209);
   hdirt_stack_3->SetBinError(2,0.9870967);
   hdirt_stack_3->SetBinError(3,0.7487209);
   hdirt_stack_3->SetBinError(4,1.02237);
   hdirt_stack_3->SetBinError(5,1.074867);
   hdirt_stack_3->SetBinError(6,0.8713125);
   hdirt_stack_3->SetBinError(7,0.8810942);
   hdirt_stack_3->SetBinError(8,0.8878211);
   hdirt_stack_3->SetBinError(9,1.255828);
   hdirt_stack_3->SetBinError(10,1.112969);
   hdirt_stack_3->SetBinError(11,1.220323);
   hdirt_stack_3->SetBinError(12,0.981847);
   hdirt_stack_3->SetBinError(13,0.9121184);
   hdirt_stack_3->SetBinError(14,0.6001808);
   hdirt_stack_3->SetBinError(15,0.8275084);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.2870053);
   hdirt_stack_3->SetBinError(20,0.5042685);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(25,0.3652866);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(29,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,14.11376);
   houtFV_stack_4->SetBinContent(2,18.29685);
   houtFV_stack_4->SetBinContent(3,22.10238);
   houtFV_stack_4->SetBinContent(4,18.25473);
   houtFV_stack_4->SetBinContent(5,19.14375);
   houtFV_stack_4->SetBinContent(6,23.25725);
   houtFV_stack_4->SetBinContent(7,21.95704);
   houtFV_stack_4->SetBinContent(8,21.96737);
   houtFV_stack_4->SetBinContent(9,24.53479);
   houtFV_stack_4->SetBinContent(10,32.79171);
   houtFV_stack_4->SetBinContent(11,28.13901);
   houtFV_stack_4->SetBinContent(12,31.71551);
   houtFV_stack_4->SetBinContent(13,31.18176);
   houtFV_stack_4->SetBinContent(14,23.69366);
   houtFV_stack_4->SetBinContent(15,11.97332);
   houtFV_stack_4->SetBinContent(16,6.26507);
   houtFV_stack_4->SetBinContent(17,6.283315);
   houtFV_stack_4->SetBinContent(18,4.356066);
   houtFV_stack_4->SetBinContent(19,5.629133);
   houtFV_stack_4->SetBinContent(20,3.767786);
   houtFV_stack_4->SetBinContent(21,3.324483);
   houtFV_stack_4->SetBinContent(22,2.837462);
   houtFV_stack_4->SetBinContent(23,3.076205);
   houtFV_stack_4->SetBinContent(24,1.65886);
   houtFV_stack_4->SetBinContent(25,2.053982);
   houtFV_stack_4->SetBinContent(26,1.52047);
   houtFV_stack_4->SetBinContent(27,2.103854);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,1.165231);
   houtFV_stack_4->SetBinContent(30,0.7834804);
   houtFV_stack_4->SetBinContent(31,1.123658);
   houtFV_stack_4->SetBinContent(32,0.9818863);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinContent(35,6.095776);
   houtFV_stack_4->SetBinError(1,1.963353);
   houtFV_stack_4->SetBinError(2,2.146833);
   houtFV_stack_4->SetBinError(3,2.374182);
   houtFV_stack_4->SetBinError(4,2.161253);
   houtFV_stack_4->SetBinError(5,2.195957);
   houtFV_stack_4->SetBinError(6,2.405035);
   houtFV_stack_4->SetBinError(7,2.315141);
   houtFV_stack_4->SetBinError(8,2.358879);
   houtFV_stack_4->SetBinError(9,2.467683);
   houtFV_stack_4->SetBinError(10,2.872782);
   houtFV_stack_4->SetBinError(11,2.611523);
   houtFV_stack_4->SetBinError(12,2.828127);
   houtFV_stack_4->SetBinError(13,2.828491);
   houtFV_stack_4->SetBinError(14,2.455752);
   houtFV_stack_4->SetBinError(15,1.657867);
   houtFV_stack_4->SetBinError(16,1.193737);
   houtFV_stack_4->SetBinError(17,1.232905);
   houtFV_stack_4->SetBinError(18,1.031199);
   houtFV_stack_4->SetBinError(19,1.101302);
   houtFV_stack_4->SetBinError(20,0.9414194);
   houtFV_stack_4->SetBinError(21,0.9211559);
   houtFV_stack_4->SetBinError(22,0.8089864);
   houtFV_stack_4->SetBinError(23,0.9213145);
   houtFV_stack_4->SetBinError(24,0.650338);
   houtFV_stack_4->SetBinError(25,0.7078105);
   houtFV_stack_4->SetBinError(26,0.5898325);
   houtFV_stack_4->SetBinError(27,0.6792233);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.5357171);
   houtFV_stack_4->SetBinError(30,0.3917439);
   houtFV_stack_4->SetBinError(31,0.5188295);
   houtFV_stack_4->SetBinError(32,0.4391155);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetBinError(35,1.317059);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.505776);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.705316);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.924276);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.096084);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.065688);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.562984);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.718598);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.045188);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.849463);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.513926);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.974447);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,11.22832);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.66698);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.306176);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.245897);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.453712);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.547294);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.9491041);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.158022);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.840744);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4090187);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5590504);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4230513);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5968199);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5455428);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4304984);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.504138);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.693496);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6485925);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8436841);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9108621);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.179618);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.074401);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8854392);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8431855);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4552526);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4185812);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3531893);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3705767);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.4575982);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.255508);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.01669);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8923038);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.729808);
   hNCpi0inFVqe_stack_6->SetBinContent(10,2.483612);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.705644);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.677575);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.45488);
   hNCpi0inFVqe_stack_6->SetBinContent(14,2.176376);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.003408);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.654822);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4237414);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2492865);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2667597);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4390783);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.5586444);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4832461);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4472018);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5404063);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.4878557);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3471685);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.267003);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.1994106);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,42.28612);
   hNCpi0inFVres_stack_7->SetBinContent(2,57.54947);
   hNCpi0inFVres_stack_7->SetBinContent(3,61.17648);
   hNCpi0inFVres_stack_7->SetBinContent(4,70.8882);
   hNCpi0inFVres_stack_7->SetBinContent(5,83.50112);
   hNCpi0inFVres_stack_7->SetBinContent(6,90.15871);
   hNCpi0inFVres_stack_7->SetBinContent(7,101.4958);
   hNCpi0inFVres_stack_7->SetBinContent(8,124.2736);
   hNCpi0inFVres_stack_7->SetBinContent(9,163.5157);
   hNCpi0inFVres_stack_7->SetBinContent(10,235.1023);
   hNCpi0inFVres_stack_7->SetBinContent(11,312.3925);
   hNCpi0inFVres_stack_7->SetBinContent(12,340.9101);
   hNCpi0inFVres_stack_7->SetBinContent(13,277.2492);
   hNCpi0inFVres_stack_7->SetBinContent(14,164.3671);
   hNCpi0inFVres_stack_7->SetBinContent(15,81.7178);
   hNCpi0inFVres_stack_7->SetBinContent(16,50.98082);
   hNCpi0inFVres_stack_7->SetBinContent(17,32.60146);
   hNCpi0inFVres_stack_7->SetBinContent(18,23.89693);
   hNCpi0inFVres_stack_7->SetBinContent(19,19.4492);
   hNCpi0inFVres_stack_7->SetBinContent(20,16.06581);
   hNCpi0inFVres_stack_7->SetBinContent(21,15.12917);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.27844);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.859197);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.89201);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.919975);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.608169);
   hNCpi0inFVres_stack_7->SetBinContent(27,7.741631);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.643874);
   hNCpi0inFVres_stack_7->SetBinContent(29,5.434371);
   hNCpi0inFVres_stack_7->SetBinContent(30,5.033978);
   hNCpi0inFVres_stack_7->SetBinContent(31,5.300033);
   hNCpi0inFVres_stack_7->SetBinContent(32,3.402152);
   hNCpi0inFVres_stack_7->SetBinContent(33,4.214589);
   hNCpi0inFVres_stack_7->SetBinContent(34,3.668206);
   hNCpi0inFVres_stack_7->SetBinContent(35,19.51812);
   hNCpi0inFVres_stack_7->SetBinError(1,2.146703);
   hNCpi0inFVres_stack_7->SetBinError(2,2.493355);
   hNCpi0inFVres_stack_7->SetBinError(3,2.542152);
   hNCpi0inFVres_stack_7->SetBinError(4,2.726955);
   hNCpi0inFVres_stack_7->SetBinError(5,3.014298);
   hNCpi0inFVres_stack_7->SetBinError(6,3.079461);
   hNCpi0inFVres_stack_7->SetBinError(7,3.301349);
   hNCpi0inFVres_stack_7->SetBinError(8,3.62022);
   hNCpi0inFVres_stack_7->SetBinError(9,4.139991);
   hNCpi0inFVres_stack_7->SetBinError(10,4.971454);
   hNCpi0inFVres_stack_7->SetBinError(11,5.82002);
   hNCpi0inFVres_stack_7->SetBinError(12,5.981529);
   hNCpi0inFVres_stack_7->SetBinError(13,5.476734);
   hNCpi0inFVres_stack_7->SetBinError(14,4.305213);
   hNCpi0inFVres_stack_7->SetBinError(15,3.027895);
   hNCpi0inFVres_stack_7->SetBinError(16,2.366209);
   hNCpi0inFVres_stack_7->SetBinError(17,1.919127);
   hNCpi0inFVres_stack_7->SetBinError(18,1.5328);
   hNCpi0inFVres_stack_7->SetBinError(19,1.426032);
   hNCpi0inFVres_stack_7->SetBinError(20,1.303472);
   hNCpi0inFVres_stack_7->SetBinError(21,1.281084);
   hNCpi0inFVres_stack_7->SetBinError(22,1.000947);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9799235);
   hNCpi0inFVres_stack_7->SetBinError(24,1.10989);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8950573);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8312406);
   hNCpi0inFVres_stack_7->SetBinError(27,1.01213);
   hNCpi0inFVres_stack_7->SetBinError(28,0.696529);
   hNCpi0inFVres_stack_7->SetBinError(29,0.7276827);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7364115);
   hNCpi0inFVres_stack_7->SetBinError(31,0.8209666);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5877842);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7678915);
   hNCpi0inFVres_stack_7->SetBinError(34,0.6907782);
   hNCpi0inFVres_stack_7->SetBinError(35,1.445168);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.362967);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.28635);
   hNCpi0inFVdis_stack_8->SetBinContent(3,12.01814);
   hNCpi0inFVdis_stack_8->SetBinContent(4,12.01896);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.13746);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.33526);
   hNCpi0inFVdis_stack_8->SetBinContent(7,20.55192);
   hNCpi0inFVdis_stack_8->SetBinContent(8,21.59851);
   hNCpi0inFVdis_stack_8->SetBinContent(9,29.01877);
   hNCpi0inFVdis_stack_8->SetBinContent(10,38.98608);
   hNCpi0inFVdis_stack_8->SetBinContent(11,53.35962);
   hNCpi0inFVdis_stack_8->SetBinContent(12,62.23818);
   hNCpi0inFVdis_stack_8->SetBinContent(13,51.29585);
   hNCpi0inFVdis_stack_8->SetBinContent(14,31.81575);
   hNCpi0inFVdis_stack_8->SetBinContent(15,16.02147);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.15066);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.323707);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.204618);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.017368);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.697514);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.800633);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.773734);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.45388);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.245794);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.853362);
   hNCpi0inFVdis_stack_8->SetBinContent(26,2.118248);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.328998);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.785112);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.855194);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.93723);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.240226);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.7664219);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.864572);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.63033);
   hNCpi0inFVdis_stack_8->SetBinContent(35,7.93293);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8324999);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.195323);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.142293);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.08608);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.211279);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.237112);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.50586);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.513294);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.72929);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.997126);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.362971);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.577289);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.323955);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.831632);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.308563);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.017307);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.004958);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7967054);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7236155);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7031562);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4668596);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5188493);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4899121);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4966846);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4055941);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4597899);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.543399);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4905081);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4855902);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4467669);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3659082);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2727714);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3211561);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.4370792);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.9065075);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5719541);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2970212);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,10.45257);
   hCCpi0inFV_stack_10->SetBinContent(2,16.74925);
   hCCpi0inFV_stack_10->SetBinContent(3,17.64075);
   hCCpi0inFV_stack_10->SetBinContent(4,21.13147);
   hCCpi0inFV_stack_10->SetBinContent(5,20.86309);
   hCCpi0inFV_stack_10->SetBinContent(6,26.39286);
   hCCpi0inFV_stack_10->SetBinContent(7,32.52843);
   hCCpi0inFV_stack_10->SetBinContent(8,36.83325);
   hCCpi0inFV_stack_10->SetBinContent(9,50.36038);
   hCCpi0inFV_stack_10->SetBinContent(10,61.68355);
   hCCpi0inFV_stack_10->SetBinContent(11,76.03925);
   hCCpi0inFV_stack_10->SetBinContent(12,90.07504);
   hCCpi0inFV_stack_10->SetBinContent(13,78.61767);
   hCCpi0inFV_stack_10->SetBinContent(14,47.47437);
   hCCpi0inFV_stack_10->SetBinContent(15,29.17267);
   hCCpi0inFV_stack_10->SetBinContent(16,18.86574);
   hCCpi0inFV_stack_10->SetBinContent(17,15.47192);
   hCCpi0inFV_stack_10->SetBinContent(18,10.41168);
   hCCpi0inFV_stack_10->SetBinContent(19,10.97609);
   hCCpi0inFV_stack_10->SetBinContent(20,8.062322);
   hCCpi0inFV_stack_10->SetBinContent(21,9.869716);
   hCCpi0inFV_stack_10->SetBinContent(22,7.322559);
   hCCpi0inFV_stack_10->SetBinContent(23,6.039142);
   hCCpi0inFV_stack_10->SetBinContent(24,6.172465);
   hCCpi0inFV_stack_10->SetBinContent(25,6.680851);
   hCCpi0inFV_stack_10->SetBinContent(26,4.551267);
   hCCpi0inFV_stack_10->SetBinContent(27,6.005567);
   hCCpi0inFV_stack_10->SetBinContent(28,4.293064);
   hCCpi0inFV_stack_10->SetBinContent(29,4.871766);
   hCCpi0inFV_stack_10->SetBinContent(30,4.067892);
   hCCpi0inFV_stack_10->SetBinContent(31,2.39585);
   hCCpi0inFV_stack_10->SetBinContent(32,2.445722);
   hCCpi0inFV_stack_10->SetBinContent(33,1.804013);
   hCCpi0inFV_stack_10->SetBinContent(34,2.247316);
   hCCpi0inFV_stack_10->SetBinContent(35,27.35171);
   hCCpi0inFV_stack_10->SetBinError(1,1.659367);
   hCCpi0inFV_stack_10->SetBinError(2,2.081393);
   hCCpi0inFV_stack_10->SetBinError(3,2.161887);
   hCCpi0inFV_stack_10->SetBinError(4,2.23813);
   hCCpi0inFV_stack_10->SetBinError(5,2.262533);
   hCCpi0inFV_stack_10->SetBinError(6,2.519978);
   hCCpi0inFV_stack_10->SetBinError(7,2.82221);
   hCCpi0inFV_stack_10->SetBinError(8,3.098647);
   hCCpi0inFV_stack_10->SetBinError(9,3.502211);
   hCCpi0inFV_stack_10->SetBinError(10,3.898234);
   hCCpi0inFV_stack_10->SetBinError(11,4.418096);
   hCCpi0inFV_stack_10->SetBinError(12,4.727394);
   hCCpi0inFV_stack_10->SetBinError(13,4.448771);
   hCCpi0inFV_stack_10->SetBinError(14,3.440613);
   hCCpi0inFV_stack_10->SetBinError(15,2.733734);
   hCCpi0inFV_stack_10->SetBinError(16,2.14034);
   hCCpi0inFV_stack_10->SetBinError(17,1.955638);
   hCCpi0inFV_stack_10->SetBinError(18,1.606655);
   hCCpi0inFV_stack_10->SetBinError(19,1.700032);
   hCCpi0inFV_stack_10->SetBinError(20,1.386717);
   hCCpi0inFV_stack_10->SetBinError(21,1.55722);
   hCCpi0inFV_stack_10->SetBinError(22,1.38775);
   hCCpi0inFV_stack_10->SetBinError(23,1.331032);
   hCCpi0inFV_stack_10->SetBinError(24,1.252375);
   hCCpi0inFV_stack_10->SetBinError(25,1.359686);
   hCCpi0inFV_stack_10->SetBinError(26,1.019673);
   hCCpi0inFV_stack_10->SetBinError(27,1.272514);
   hCCpi0inFV_stack_10->SetBinError(28,1.047247);
   hCCpi0inFV_stack_10->SetBinError(29,1.160231);
   hCCpi0inFV_stack_10->SetBinError(30,0.9955807);
   hCCpi0inFV_stack_10->SetBinError(31,0.7857345);
   hCCpi0inFV_stack_10->SetBinError(32,0.7600838);
   hCCpi0inFV_stack_10->SetBinError(33,0.7075491);
   hCCpi0inFV_stack_10->SetBinError(34,0.7337357);
   hCCpi0inFV_stack_10->SetBinError(35,2.60628);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,16.40095);
   hNCinFV_stack_11->SetBinContent(2,15.56868);
   hNCinFV_stack_11->SetBinContent(3,13.91598);
   hNCinFV_stack_11->SetBinContent(4,20.6002);
   hNCinFV_stack_11->SetBinContent(5,24.95875);
   hNCinFV_stack_11->SetBinContent(6,17.04205);
   hNCinFV_stack_11->SetBinContent(7,20.57677);
   hNCinFV_stack_11->SetBinContent(8,17.55213);
   hNCinFV_stack_11->SetBinContent(9,23.21076);
   hNCinFV_stack_11->SetBinContent(10,21.81647);
   hNCinFV_stack_11->SetBinContent(11,30.78329);
   hNCinFV_stack_11->SetBinContent(12,25.8061);
   hNCinFV_stack_11->SetBinContent(13,25.01707);
   hNCinFV_stack_11->SetBinContent(14,18.613);
   hNCinFV_stack_11->SetBinContent(15,13.34104);
   hNCinFV_stack_11->SetBinContent(16,10.45033);
   hNCinFV_stack_11->SetBinContent(17,10.00546);
   hNCinFV_stack_11->SetBinContent(18,8.111112);
   hNCinFV_stack_11->SetBinContent(19,7.967649);
   hNCinFV_stack_11->SetBinContent(20,7.225589);
   hNCinFV_stack_11->SetBinContent(21,8.827814);
   hNCinFV_stack_11->SetBinContent(22,3.516127);
   hNCinFV_stack_11->SetBinContent(23,4.744601);
   hNCinFV_stack_11->SetBinContent(24,6.83892);
   hNCinFV_stack_11->SetBinContent(25,2.927671);
   hNCinFV_stack_11->SetBinContent(26,3.674196);
   hNCinFV_stack_11->SetBinContent(27,3.56769);
   hNCinFV_stack_11->SetBinContent(28,3.672505);
   hNCinFV_stack_11->SetBinContent(29,4.449832);
   hNCinFV_stack_11->SetBinContent(30,4.678432);
   hNCinFV_stack_11->SetBinContent(31,2.736028);
   hNCinFV_stack_11->SetBinContent(32,4.006529);
   hNCinFV_stack_11->SetBinContent(33,2.199135);
   hNCinFV_stack_11->SetBinContent(34,2.447412);
   hNCinFV_stack_11->SetBinContent(35,31.37851);
   hNCinFV_stack_11->SetBinError(1,2.095862);
   hNCinFV_stack_11->SetBinError(2,2.020114);
   hNCinFV_stack_11->SetBinError(3,1.86063);
   hNCinFV_stack_11->SetBinError(4,2.304781);
   hNCinFV_stack_11->SetBinError(5,2.552059);
   hNCinFV_stack_11->SetBinError(6,2.066667);
   hNCinFV_stack_11->SetBinError(7,2.272363);
   hNCinFV_stack_11->SetBinError(8,2.067807);
   hNCinFV_stack_11->SetBinError(9,2.403487);
   hNCinFV_stack_11->SetBinError(10,2.271896);
   hNCinFV_stack_11->SetBinError(11,2.775422);
   hNCinFV_stack_11->SetBinError(12,2.497102);
   hNCinFV_stack_11->SetBinError(13,2.544929);
   hNCinFV_stack_11->SetBinError(14,2.185861);
   hNCinFV_stack_11->SetBinError(15,1.830795);
   hNCinFV_stack_11->SetBinError(16,1.653989);
   hNCinFV_stack_11->SetBinError(17,1.599824);
   hNCinFV_stack_11->SetBinError(18,1.442671);
   hNCinFV_stack_11->SetBinError(19,1.415724);
   hNCinFV_stack_11->SetBinError(20,1.344563);
   hNCinFV_stack_11->SetBinError(21,1.505919);
   hNCinFV_stack_11->SetBinError(22,0.940871);
   hNCinFV_stack_11->SetBinError(23,1.037837);
   hNCinFV_stack_11->SetBinError(24,1.316474);
   hNCinFV_stack_11->SetBinError(25,0.877388);
   hNCinFV_stack_11->SetBinError(26,0.8772658);
   hNCinFV_stack_11->SetBinError(27,0.919918);
   hNCinFV_stack_11->SetBinError(28,0.8768883);
   hNCinFV_stack_11->SetBinError(29,1.057532);
   hNCinFV_stack_11->SetBinError(30,1.144012);
   hNCinFV_stack_11->SetBinError(31,0.8562123);
   hNCinFV_stack_11->SetBinError(32,1.039534);
   hNCinFV_stack_11->SetBinError(33,0.7607114);
   hNCinFV_stack_11->SetBinError(34,0.7605193);
   hNCinFV_stack_11->SetBinError(35,2.796613);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,17.36866);
   hnumuCCinFV_stack_12->SetBinContent(2,25.91103);
   hnumuCCinFV_stack_12->SetBinContent(3,28.7646);
   hnumuCCinFV_stack_12->SetBinContent(4,23.97346);
   hnumuCCinFV_stack_12->SetBinContent(5,25.42757);
   hnumuCCinFV_stack_12->SetBinContent(6,27.13446);
   hnumuCCinFV_stack_12->SetBinContent(7,24.68666);
   hnumuCCinFV_stack_12->SetBinContent(8,23.62512);
   hnumuCCinFV_stack_12->SetBinContent(9,23.84555);
   hnumuCCinFV_stack_12->SetBinContent(10,25.44926);
   hnumuCCinFV_stack_12->SetBinContent(11,24.31391);
   hnumuCCinFV_stack_12->SetBinContent(12,25.7981);
   hnumuCCinFV_stack_12->SetBinContent(13,22.59572);
   hnumuCCinFV_stack_12->SetBinContent(14,18.82791);
   hnumuCCinFV_stack_12->SetBinContent(15,10.614);
   hnumuCCinFV_stack_12->SetBinContent(16,9.176273);
   hnumuCCinFV_stack_12->SetBinContent(17,8.212558);
   hnumuCCinFV_stack_12->SetBinContent(18,8.048954);
   hnumuCCinFV_stack_12->SetBinContent(19,5.829335);
   hnumuCCinFV_stack_12->SetBinContent(20,4.938607);
   hnumuCCinFV_stack_12->SetBinContent(21,5.02089);
   hnumuCCinFV_stack_12->SetBinContent(22,4.277808);
   hnumuCCinFV_stack_12->SetBinContent(23,3.475967);
   hnumuCCinFV_stack_12->SetBinContent(24,4.188403);
   hnumuCCinFV_stack_12->SetBinContent(25,3.188642);
   hnumuCCinFV_stack_12->SetBinContent(26,3.390314);
   hnumuCCinFV_stack_12->SetBinContent(27,2.394159);
   hnumuCCinFV_stack_12->SetBinContent(28,2.758341);
   hnumuCCinFV_stack_12->SetBinContent(29,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(30,1.946768);
   hnumuCCinFV_stack_12->SetBinContent(31,1.971882);
   hnumuCCinFV_stack_12->SetBinContent(32,1.613856);
   hnumuCCinFV_stack_12->SetBinContent(33,1.16259);
   hnumuCCinFV_stack_12->SetBinContent(34,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(35,17.02335);
   hnumuCCinFV_stack_12->SetBinError(1,2.2465);
   hnumuCCinFV_stack_12->SetBinError(2,3.506616);
   hnumuCCinFV_stack_12->SetBinError(3,3.443575);
   hnumuCCinFV_stack_12->SetBinError(4,2.889604);
   hnumuCCinFV_stack_12->SetBinError(5,3.047705);
   hnumuCCinFV_stack_12->SetBinError(6,2.966126);
   hnumuCCinFV_stack_12->SetBinError(7,3.030683);
   hnumuCCinFV_stack_12->SetBinError(8,2.560327);
   hnumuCCinFV_stack_12->SetBinError(9,3.020673);
   hnumuCCinFV_stack_12->SetBinError(10,2.715779);
   hnumuCCinFV_stack_12->SetBinError(11,2.731758);
   hnumuCCinFV_stack_12->SetBinError(12,3.109161);
   hnumuCCinFV_stack_12->SetBinError(13,3.419111);
   hnumuCCinFV_stack_12->SetBinError(14,2.29501);
   hnumuCCinFV_stack_12->SetBinError(15,1.746037);
   hnumuCCinFV_stack_12->SetBinError(16,1.579656);
   hnumuCCinFV_stack_12->SetBinError(17,1.509826);
   hnumuCCinFV_stack_12->SetBinError(18,1.470868);
   hnumuCCinFV_stack_12->SetBinError(19,1.261741);
   hnumuCCinFV_stack_12->SetBinError(20,1.164062);
   hnumuCCinFV_stack_12->SetBinError(21,1.283868);
   hnumuCCinFV_stack_12->SetBinError(22,1.083949);
   hnumuCCinFV_stack_12->SetBinError(23,1.246804);
   hnumuCCinFV_stack_12->SetBinError(24,1.07552);
   hnumuCCinFV_stack_12->SetBinError(25,0.9457919);
   hnumuCCinFV_stack_12->SetBinError(26,0.973595);
   hnumuCCinFV_stack_12->SetBinError(27,0.785313);
   hnumuCCinFV_stack_12->SetBinError(28,0.8271658);
   hnumuCCinFV_stack_12->SetBinError(29,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(30,0.6630801);
   hnumuCCinFV_stack_12->SetBinError(31,0.6720653);
   hnumuCCinFV_stack_12->SetBinError(32,0.5723421);
   hnumuCCinFV_stack_12->SetBinError(33,0.5348054);
   hnumuCCinFV_stack_12->SetBinError(34,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(35,2.032161);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,3.640189);
   hnueCCinFV_stack_13->SetBinContent(2,4.17975);
   hnueCCinFV_stack_13->SetBinContent(3,4.037627);
   hnueCCinFV_stack_13->SetBinContent(4,2.172231);
   hnueCCinFV_stack_13->SetBinContent(5,1.28784);
   hnueCCinFV_stack_13->SetBinContent(6,3.052129);
   hnueCCinFV_stack_13->SetBinContent(7,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(8,1.499879);
   hnueCCinFV_stack_13->SetBinContent(9,0.951624);
   hnueCCinFV_stack_13->SetBinContent(10,0.8479808);
   hnueCCinFV_stack_13->SetBinContent(11,3.495752);
   hnueCCinFV_stack_13->SetBinContent(12,1.744804);
   hnueCCinFV_stack_13->SetBinContent(13,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(14,1.072095);
   hnueCCinFV_stack_13->SetBinContent(15,0.7908806);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.9942417);
   hnueCCinFV_stack_13->SetBinContent(18,0.4505813);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.4948255);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,1.431599);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,4.333179);
   hnueCCinFV_stack_13->SetBinError(1,1.269891);
   hnueCCinFV_stack_13->SetBinError(2,1.727561);
   hnueCCinFV_stack_13->SetBinError(3,1.156459);
   hnueCCinFV_stack_13->SetBinError(4,0.9346513);
   hnueCCinFV_stack_13->SetBinError(5,0.5296233);
   hnueCCinFV_stack_13->SetBinError(6,1.48118);
   hnueCCinFV_stack_13->SetBinError(7,0.4575996);
   hnueCCinFV_stack_13->SetBinError(8,0.6315853);
   hnueCCinFV_stack_13->SetBinError(9,0.4905563);
   hnueCCinFV_stack_13->SetBinError(10,0.4909786);
   hnueCCinFV_stack_13->SetBinError(11,1.098335);
   hnueCCinFV_stack_13->SetBinError(12,0.6985861);
   hnueCCinFV_stack_13->SetBinError(13,0.4814682);
   hnueCCinFV_stack_13->SetBinError(14,0.5551335);
   hnueCCinFV_stack_13->SetBinError(15,0.5616999);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.5109251);
   hnueCCinFV_stack_13->SetBinError(18,0.3211617);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.3576523);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.7292993);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,1.377295);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__5->SetBinContent(1,132.7939);
   hmcerror__5->SetBinContent(2,182.3185);
   hmcerror__5->SetBinContent(3,202.5692);
   hmcerror__5->SetBinContent(4,209.8451);
   hmcerror__5->SetBinContent(5,226.6586);
   hmcerror__5->SetBinContent(6,240.5672);
   hmcerror__5->SetBinContent(7,260.8567);
   hmcerror__5->SetBinContent(8,285.4787);
   hmcerror__5->SetBinContent(9,355.3671);
   hmcerror__5->SetBinContent(10,465.6422);
   hmcerror__5->SetBinContent(11,576.8747);
   hmcerror__5->SetBinContent(12,636.7244);
   hmcerror__5->SetBinContent(13,540.8702);
   hmcerror__5->SetBinContent(14,336.6805);
   hmcerror__5->SetBinContent(15,185.6198);
   hmcerror__5->SetBinContent(16,122.5743);
   hmcerror__5->SetBinContent(17,90.05659);
   hmcerror__5->SetBinContent(18,67.92115);
   hmcerror__5->SetBinContent(19,59.67622);
   hmcerror__5->SetBinContent(20,52.7836);
   hmcerror__5->SetBinContent(21,50.61723);
   hmcerror__5->SetBinContent(22,36.43374);
   hmcerror__5->SetBinContent(23,35.21157);
   hmcerror__5->SetBinContent(24,34.58939);
   hmcerror__5->SetBinContent(25,26.68254);
   hmcerror__5->SetBinContent(26,25.90316);
   hmcerror__5->SetBinContent(27,25.81324);
   hmcerror__5->SetBinContent(28,19.4047);
   hmcerror__5->SetBinContent(29,21.85257);
   hmcerror__5->SetBinContent(30,19.45226);
   hmcerror__5->SetBinContent(31,15.42872);
   hmcerror__5->SetBinContent(32,14.2596);
   hmcerror__5->SetBinContent(33,11.99976);
   hmcerror__5->SetBinContent(34,11.91518);
   hmcerror__5->SetBinContent(35,118.0698);
   hmcerror__5->SetBinError(1,46.67317);
   hmcerror__5->SetBinError(2,50.56905);
   hmcerror__5->SetBinError(3,48.10134);
   hmcerror__5->SetBinError(4,52.41703);
   hmcerror__5->SetBinError(5,57.33882);
   hmcerror__5->SetBinError(6,64.12376);
   hmcerror__5->SetBinError(7,86.51351);
   hmcerror__5->SetBinError(8,86.28685);
   hmcerror__5->SetBinError(9,104.2363);
   hmcerror__5->SetBinError(10,149.6755);
   hmcerror__5->SetBinError(11,178.7976);
   hmcerror__5->SetBinError(12,191.6653);
   hmcerror__5->SetBinError(13,175.1678);
   hmcerror__5->SetBinError(14,122.9908);
   hmcerror__5->SetBinError(15,70.75124);
   hmcerror__5->SetBinError(16,38.77229);
   hmcerror__5->SetBinError(17,31.05853);
   hmcerror__5->SetBinError(18,23.83964);
   hmcerror__5->SetBinError(19,24.15914);
   hmcerror__5->SetBinError(20,26.19367);
   hmcerror__5->SetBinError(21,20.60054);
   hmcerror__5->SetBinError(22,14.94163);
   hmcerror__5->SetBinError(23,18.51423);
   hmcerror__5->SetBinError(24,16.48308);
   hmcerror__5->SetBinError(25,15.23044);
   hmcerror__5->SetBinError(26,13.82917);
   hmcerror__5->SetBinError(27,15.08815);
   hmcerror__5->SetBinError(28,11.8897);
   hmcerror__5->SetBinError(29,11.56958);
   hmcerror__5->SetBinError(30,11.44831);
   hmcerror__5->SetBinError(31,11.67041);
   hmcerror__5->SetBinError(32,10.48068);
   hmcerror__5->SetBinError(33,8.35472);
   hmcerror__5->SetBinError(34,11.39438);
   hmcerror__5->SetBinError(35,45.33697);
   hmcerror__5->SetEntries(5638.682);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[34] = {
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
   Double_t _fy3005[34] = {
   130,
   164,
   178,
   179,
   212,
   199,
   266,
   253,
   300,
   430,
   480,
   610,
   480,
   232,
   174,
   90,
   73,
   58,
   53,
   43,
   33,
   42,
   35,
   25,
   15,
   21,
   22,
   18,
   17,
   12,
   12,
   17,
   11,
   4};
   Double_t _felx3005[34] = {
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
   Double_t _fely3005[34] = {
   11.40175,
   12.80625,
   13.34166,
   13.37909,
   14.56022,
   14.10674,
   16.30951,
   15.90597,
   17.32051,
   20.73644,
   21.9089,
   24.69818,
   21.9089,
   15.23155,
   13.19091,
   9.6093,
   8.6693,
   7.7446,
   7.4105,
   6.6917,
   5.8847,
   6.6155,
   6.0548,
   5.1474,
   4.0385,
   4.7354,
   4.8417,
   4.4008,
   4.2835,
   3.64022,
   3.64022,
   4.2835,
   3.4975,
   2.29683};
   Double_t _fehx3005[34] = {
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
   Double_t _fehy3005[34] = {
   11.40175,
   12.80625,
   13.34166,
   13.37909,
   14.56022,
   14.10674,
   16.30951,
   15.90597,
   17.32051,
   20.73644,
   21.9089,
   24.69818,
   21.9089,
   15.23155,
   13.19091,
   9.4079,
   8.4672,
   7.5415,
   7.2068,
   6.4868,
   5.6776,
   6.4104,
   5.8483,
   4.9374,
   3.8197,
   4.5229,
   4.6299,
   4.1858,
   4.0673,
   3.4155,
   3.4155,
   4.0673,
   3.27,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(1.532853);
   Graph_Graph3005->SetMaximum(697.9977);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.7/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4888.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 123.7","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 375.6","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 391.1","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  89.9","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  23.8","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2450.7","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  460.1","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 748.6","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 407.3","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 422.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 37.4","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[34] = {
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
   Double_t _fy3006[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[34] = {
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
   Double_t _fely3006[34] = {
   0.3514708,
   0.2773665,
   0.2374564,
   0.2497891,
   0.2529743,
   0.2665524,
   0.3316515,
   0.3022532,
   0.2933201,
   0.3214388,
   0.3099418,
   0.3010177,
   0.3238629,
   0.3653041,
   0.381162,
   0.3163166,
   0.3448779,
   0.3509899,
   0.404837,
   0.4962463,
   0.4069867,
   0.4101042,
   0.5257995,
   0.4765356,
   0.5708017,
   0.5338794,
   0.5845122,
   0.612723,
   0.5294379,
   0.5885334,
   0.7564085,
   0.7349911,
   0.6962404,
   0.9562906};
   Double_t _fehx3006[34] = {
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
   Double_t _fehy3006[34] = {
   0.3514708,
   0.2773665,
   0.2374564,
   0.2497891,
   0.2529743,
   0.2665524,
   0.3316515,
   0.3022532,
   0.2933201,
   0.3214388,
   0.3099418,
   0.3010177,
   0.3238629,
   0.3653041,
   0.381162,
   0.3163166,
   0.3448779,
   0.3509899,
   0.404837,
   0.4962463,
   0.4069867,
   0.4101042,
   0.5257995,
   0.4765356,
   0.5708017,
   0.5338794,
   0.5845122,
   0.612723,
   0.5294379,
   0.5885334,
   0.7564085,
   0.7349911,
   0.6962404,
   0.9562906};
   grae = new TGraphAsymmErrors(34,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,440);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[34] = {
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
   Double_t _fy3007[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[34] = {
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
   Double_t _fely3007[34] = {
   0.2086181,
   0.2009429,
   0.1926839,
   0.1974548,
   0.2100699,
   0.210326,
   0.2210403,
   0.2408751,
   0.2511737,
   0.2760279,
   0.2937081,
   0.2891139,
   0.2730417,
   0.260963,
   0.2536134,
   0.2570527,
   0.2607687,
   0.2700069,
   0.2559906,
   0.2507121,
   0.2700739,
   0.2445999,
   0.2828074,
   0.2831446,
   0.2723939,
   0.2754644,
   0.2825672,
   0.2806184,
   0.2964808,
   0.2938207,
   0.3111657,
   0.2866124,
   0.3483986,
   0.3457127};
   Double_t _fehx3007[34] = {
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
   Double_t _fehy3007[34] = {
   0.2086181,
   0.2009429,
   0.1926839,
   0.1974548,
   0.2100699,
   0.210326,
   0.2210403,
   0.2408751,
   0.2511737,
   0.2760279,
   0.2937081,
   0.2891139,
   0.2730417,
   0.260963,
   0.2536134,
   0.2570527,
   0.2607687,
   0.2700069,
   0.2559906,
   0.2507121,
   0.2700739,
   0.2445999,
   0.2828074,
   0.2831446,
   0.2723939,
   0.2754644,
   0.2825672,
   0.2806184,
   0.2964808,
   0.2938207,
   0.3111657,
   0.2866124,
   0.3483986,
   0.3457127};
   grae = new TGraphAsymmErrors(34,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,440);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[34] = {
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
   Double_t _fy3008[34] = {
   0.9789607,
   0.8995248,
   0.8787121,
   0.8530102,
   0.9353273,
   0.8272118,
   1.019717,
   0.8862307,
   0.8441975,
   0.9234558,
   0.8320698,
   0.9580284,
   0.8874588,
   0.6890807,
   0.9373998,
   0.7342485,
   0.8106014,
   0.8539314,
   0.888126,
   0.8146469,
   0.6519519,
   1.152778,
   0.9939913,
   0.7227649,
   0.5621654,
   0.8107118,
   0.8522759,
   0.9276104,
   0.7779406,
   0.6168949,
   0.7777705,
   1.192179,
   0.9166847,
   0.3357061};
   Double_t _felx3008[34] = {
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
   Double_t _fely3008[34] = {
   0.08586054,
   0.07024109,
   0.06586226,
   0.06375697,
   0.06423854,
   0.05863949,
   0.06252285,
   0.05571685,
   0.04873976,
   0.04453299,
   0.03797862,
   0.03878943,
   0.04050677,
   0.04524036,
   0.07106409,
   0.07839571,
   0.09626502,
   0.1140234,
   0.1241784,
   0.1267761,
   0.1162588,
   0.1815762,
   0.1719548,
   0.1488144,
   0.1513537,
   0.1828117,
   0.1875666,
   0.2267904,
   0.1960181,
   0.1871361,
   0.235938,
   0.3003942,
   0.2914641,
   0.192765};
   Double_t _fehx3008[34] = {
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
   Double_t _fehy3008[34] = {
   0.08586054,
   0.07024109,
   0.06586226,
   0.06375697,
   0.06423854,
   0.05863949,
   0.06252285,
   0.05571685,
   0.04873976,
   0.04453299,
   0.03797862,
   0.03878943,
   0.04050677,
   0.04524036,
   0.07106409,
   0.07675263,
   0.09402088,
   0.1110332,
   0.120765,
   0.1228942,
   0.1121673,
   0.1759468,
   0.1660903,
   0.1427432,
   0.1431535,
   0.174608,
   0.1793615,
   0.2157107,
   0.1861246,
   0.1755837,
   0.2213729,
   0.2852324,
   0.2725054,
   0.1663306};
   grae = new TGraphAsymmErrors(34,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0.009494074);
   Graph_Graph3008->SetMaximum(1.610859);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
