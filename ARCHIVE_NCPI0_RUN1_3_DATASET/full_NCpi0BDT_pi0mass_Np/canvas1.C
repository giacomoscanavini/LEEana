#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 09:31:43 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
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
   pad1->Range(-46.15385,-6.32,338.4615,532.5432);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hmc__1->SetBinContent(0,337.7701);
   hmc__1->SetBinContent(2,84.06353);
   hmc__1->SetBinContent(3,119.3834);
   hmc__1->SetBinContent(4,136.3056);
   hmc__1->SetBinContent(5,138.7224);
   hmc__1->SetBinContent(6,148.9085);
   hmc__1->SetBinContent(7,177.9796);
   hmc__1->SetBinContent(8,183.1049);
   hmc__1->SetBinContent(9,169.4312);
   hmc__1->SetBinContent(10,194.6197);
   hmc__1->SetBinContent(11,260.6653);
   hmc__1->SetBinContent(12,266.3925);
   hmc__1->SetBinContent(13,310.4622);
   hmc__1->SetBinContent(14,313.5321);
   hmc__1->SetBinContent(15,272.7963);
   hmc__1->SetBinContent(16,182.484);
   hmc__1->SetBinContent(17,118.2671);
   hmc__1->SetBinContent(18,87.25261);
   hmc__1->SetBinContent(19,65.16106);
   hmc__1->SetBinContent(20,50.97593);
   hmc__1->SetBinContent(21,42.07048);
   hmc__1->SetBinContent(22,37.98083);
   hmc__1->SetBinContent(23,41.29501);
   hmc__1->SetBinContent(24,28.22758);
   hmc__1->SetBinContent(25,31.69038);
   hmc__1->SetBinContent(26,24.64596);
   hmc__1->SetBinContent(27,26.12396);
   hmc__1->SetBinContent(28,17.04897);
   hmc__1->SetBinContent(29,14.32545);
   hmc__1->SetBinContent(30,194.6298);
   hmc__1->SetBinError(0,8.878918);
   hmc__1->SetBinError(1,0.4212968);
   hmc__1->SetBinError(2,19.5118);
   hmc__1->SetBinError(3,22.84232);
   hmc__1->SetBinError(4,29.6686);
   hmc__1->SetBinError(5,27.31102);
   hmc__1->SetBinError(6,28.84392);
   hmc__1->SetBinError(7,32.90049);
   hmc__1->SetBinError(8,40.0639);
   hmc__1->SetBinError(9,34.42776);
   hmc__1->SetBinError(10,42.84035);
   hmc__1->SetBinError(11,60.37452);
   hmc__1->SetBinError(12,60.53583);
   hmc__1->SetBinError(13,78.10239);
   hmc__1->SetBinError(14,68.91293);
   hmc__1->SetBinError(15,56.26017);
   hmc__1->SetBinError(16,38.69231);
   hmc__1->SetBinError(17,24.73304);
   hmc__1->SetBinError(18,18.5963);
   hmc__1->SetBinError(19,17.59502);
   hmc__1->SetBinError(20,13.38335);
   hmc__1->SetBinError(21,10.45643);
   hmc__1->SetBinError(22,9.992212);
   hmc__1->SetBinError(23,9.0731);
   hmc__1->SetBinError(24,8.92996);
   hmc__1->SetBinError(25,8.073196);
   hmc__1->SetBinError(26,7.505841);
   hmc__1->SetBinError(27,7.549814);
   hmc__1->SetBinError(28,6.3592);
   hmc__1->SetBinError(29,5.051029);
   hmc__1->SetBinError(30,41.48031);
   hmc__1->SetMinimum(-6.32);
   hmc__1->SetMaximum(505.6);
   hmc__1->SetEntries(4029.808);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",29,0,300);
   hs1_stack_1->SetMinimum(-1.429819e-08);
   hs1_stack_1->SetMaximum(329.2087);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,8.858557);
   hbadmatch_stack_1->SetBinContent(2,3.808353);
   hbadmatch_stack_1->SetBinContent(3,5.033431);
   hbadmatch_stack_1->SetBinContent(4,4.31616);
   hbadmatch_stack_1->SetBinContent(5,3.145423);
   hbadmatch_stack_1->SetBinContent(6,5.355355);
   hbadmatch_stack_1->SetBinContent(7,6.927181);
   hbadmatch_stack_1->SetBinContent(8,9.685511);
   hbadmatch_stack_1->SetBinContent(9,4.962723);
   hbadmatch_stack_1->SetBinContent(10,4.068438);
   hbadmatch_stack_1->SetBinContent(11,5.152007);
   hbadmatch_stack_1->SetBinContent(12,3.6709);
   hbadmatch_stack_1->SetBinContent(13,5.913886);
   hbadmatch_stack_1->SetBinContent(14,7.079071);
   hbadmatch_stack_1->SetBinContent(15,4.22669);
   hbadmatch_stack_1->SetBinContent(16,6.909198);
   hbadmatch_stack_1->SetBinContent(17,2.735628);
   hbadmatch_stack_1->SetBinContent(18,1.752451);
   hbadmatch_stack_1->SetBinContent(19,1.125349);
   hbadmatch_stack_1->SetBinContent(20,2.000729);
   hbadmatch_stack_1->SetBinContent(21,0.3917402);
   hbadmatch_stack_1->SetBinContent(22,0.1950248);
   hbadmatch_stack_1->SetBinContent(23,1.072095);
   hbadmatch_stack_1->SetBinContent(24,0.8322716);
   hbadmatch_stack_1->SetBinContent(25,0.3916036);
   hbadmatch_stack_1->SetBinContent(26,0.5352025);
   hbadmatch_stack_1->SetBinContent(27,0.6803553);
   hbadmatch_stack_1->SetBinContent(29,0.3998213);
   hbadmatch_stack_1->SetBinContent(30,1.570342);
   hbadmatch_stack_1->SetBinError(0,1.869437);
   hbadmatch_stack_1->SetBinError(2,1.025129);
   hbadmatch_stack_1->SetBinError(3,1.237577);
   hbadmatch_stack_1->SetBinError(4,1.015412);
   hbadmatch_stack_1->SetBinError(5,0.9061296);
   hbadmatch_stack_1->SetBinError(6,1.22828);
   hbadmatch_stack_1->SetBinError(7,1.38496);
   hbadmatch_stack_1->SetBinError(8,1.636738);
   hbadmatch_stack_1->SetBinError(9,1.407365);
   hbadmatch_stack_1->SetBinError(10,1.081274);
   hbadmatch_stack_1->SetBinError(11,1.167312);
   hbadmatch_stack_1->SetBinError(12,1.018144);
   hbadmatch_stack_1->SetBinError(13,1.279404);
   hbadmatch_stack_1->SetBinError(14,2.073694);
   hbadmatch_stack_1->SetBinError(15,1.149543);
   hbadmatch_stack_1->SetBinError(16,1.986917);
   hbadmatch_stack_1->SetBinError(17,0.8489141);
   hbadmatch_stack_1->SetBinError(18,0.7345848);
   hbadmatch_stack_1->SetBinError(19,0.5194673);
   hbadmatch_stack_1->SetBinError(20,0.7343859);
   hbadmatch_stack_1->SetBinError(21,0.2770047);
   hbadmatch_stack_1->SetBinError(22,0.1950249);
   hbadmatch_stack_1->SetBinError(23,0.5551335);
   hbadmatch_stack_1->SetBinError(24,0.4179899);
   hbadmatch_stack_1->SetBinError(25,0.3916037);
   hbadmatch_stack_1->SetBinError(26,0.3921167);
   hbadmatch_stack_1->SetBinError(27,0.4810838);
   hbadmatch_stack_1->SetBinError(29,0.3998213);
   hbadmatch_stack_1->SetBinError(30,0.5552036);
   hbadmatch_stack_1->SetEntries(394);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,52.24977);
   hext_stack_2->SetBinContent(2,17.73861);
   hext_stack_2->SetBinContent(3,23.20033);
   hext_stack_2->SetBinContent(4,34.01682);
   hext_stack_2->SetBinContent(5,27.69283);
   hext_stack_2->SetBinContent(6,27.08151);
   hext_stack_2->SetBinContent(7,38.09716);
   hext_stack_2->SetBinContent(8,29.69269);
   hext_stack_2->SetBinContent(9,28.14849);
   hext_stack_2->SetBinContent(10,22.39709);
   hext_stack_2->SetBinContent(11,38.09993);
   hext_stack_2->SetBinContent(12,21.86362);
   hext_stack_2->SetBinContent(13,27.57308);
   hext_stack_2->SetBinContent(14,30.89649);
   hext_stack_2->SetBinContent(15,22.46493);
   hext_stack_2->SetBinContent(16,10.78618);
   hext_stack_2->SetBinContent(17,9.876419);
   hext_stack_2->SetBinContent(18,7.855014);
   hext_stack_2->SetBinContent(19,5.102613);
   hext_stack_2->SetBinContent(20,2.834603);
   hext_stack_2->SetBinContent(21,3.166181);
   hext_stack_2->SetBinContent(22,2.345802);
   hext_stack_2->SetBinContent(23,6.550243);
   hext_stack_2->SetBinContent(24,1.779209);
   hext_stack_2->SetBinContent(25,4.352847);
   hext_stack_2->SetBinContent(26,1.219797);
   hext_stack_2->SetBinContent(27,3.215251);
   hext_stack_2->SetBinContent(28,1.704188);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(30,9.812987);
   hext_stack_2->SetBinError(0,4.862639);
   hext_stack_2->SetBinError(2,2.758728);
   hext_stack_2->SetBinError(3,3.338306);
   hext_stack_2->SetBinError(4,4.059792);
   hext_stack_2->SetBinError(5,3.447867);
   hext_stack_2->SetBinError(6,3.531738);
   hext_stack_2->SetBinError(7,4.211025);
   hext_stack_2->SetBinError(8,3.658426);
   hext_stack_2->SetBinError(9,3.575316);
   hext_stack_2->SetBinError(10,3.205638);
   hext_stack_2->SetBinError(11,4.1709);
   hext_stack_2->SetBinError(12,3.07507);
   hext_stack_2->SetBinError(13,3.516);
   hext_stack_2->SetBinError(14,3.716316);
   hext_stack_2->SetBinError(15,3.276982);
   hext_stack_2->SetBinError(16,2.083403);
   hext_stack_2->SetBinError(17,2.086202);
   hext_stack_2->SetBinError(18,1.859985);
   hext_stack_2->SetBinError(19,1.515354);
   hext_stack_2->SetBinError(20,1.106046);
   hext_stack_2->SetBinError(21,1.061777);
   hext_stack_2->SetBinError(22,0.9989624);
   hext_stack_2->SetBinError(23,1.799948);
   hext_stack_2->SetBinError(24,0.9206235);
   hext_stack_2->SetBinError(25,1.514272);
   hext_stack_2->SetBinError(26,0.7042499);
   hext_stack_2->SetBinError(27,1.36277);
   hext_stack_2->SetBinError(28,0.7656743);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(30,2.006207);
   hext_stack_2->SetEntries(1218);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,6.064788);
   hdirt_stack_3->SetBinContent(2,2.202682);
   hdirt_stack_3->SetBinContent(3,3.329178);
   hdirt_stack_3->SetBinContent(4,2.536657);
   hdirt_stack_3->SetBinContent(5,3.477812);
   hdirt_stack_3->SetBinContent(6,3.245273);
   hdirt_stack_3->SetBinContent(7,2.978892);
   hdirt_stack_3->SetBinContent(8,3.945333);
   hdirt_stack_3->SetBinContent(9,2.900254);
   hdirt_stack_3->SetBinContent(10,4.12512);
   hdirt_stack_3->SetBinContent(11,3.789479);
   hdirt_stack_3->SetBinContent(12,2.922727);
   hdirt_stack_3->SetBinContent(13,4.473073);
   hdirt_stack_3->SetBinContent(14,3.305225);
   hdirt_stack_3->SetBinContent(15,2.891725);
   hdirt_stack_3->SetBinContent(16,1.190371);
   hdirt_stack_3->SetBinContent(17,1.652623);
   hdirt_stack_3->SetBinContent(18,0.6143302);
   hdirt_stack_3->SetBinContent(19,0.6926074);
   hdirt_stack_3->SetBinContent(20,0.5570828);
   hdirt_stack_3->SetBinContent(22,1.175763);
   hdirt_stack_3->SetBinContent(23,0.4193363);
   hdirt_stack_3->SetBinContent(24,0.9731574);
   hdirt_stack_3->SetBinContent(25,0.3861994);
   hdirt_stack_3->SetBinContent(26,0.2188956);
   hdirt_stack_3->SetBinContent(29,0.1380715);
   hdirt_stack_3->SetBinContent(30,0.6951543);
   hdirt_stack_3->SetBinError(0,1.2956);
   hdirt_stack_3->SetBinError(2,0.8625123);
   hdirt_stack_3->SetBinError(3,0.9630064);
   hdirt_stack_3->SetBinError(4,0.8764731);
   hdirt_stack_3->SetBinError(5,0.9605601);
   hdirt_stack_3->SetBinError(6,0.8825263);
   hdirt_stack_3->SetBinError(7,0.8078434);
   hdirt_stack_3->SetBinError(8,1.052586);
   hdirt_stack_3->SetBinError(9,0.8718032);
   hdirt_stack_3->SetBinError(10,1.045467);
   hdirt_stack_3->SetBinError(11,1.370444);
   hdirt_stack_3->SetBinError(12,0.9013019);
   hdirt_stack_3->SetBinError(13,1.222638);
   hdirt_stack_3->SetBinError(14,0.9494528);
   hdirt_stack_3->SetBinError(15,1.159236);
   hdirt_stack_3->SetBinError(16,0.5171);
   hdirt_stack_3->SetBinError(17,0.7098903);
   hdirt_stack_3->SetBinError(18,0.39051);
   hdirt_stack_3->SetBinError(19,0.4009512);
   hdirt_stack_3->SetBinError(20,0.4028472);
   hdirt_stack_3->SetBinError(22,0.5960978);
   hdirt_stack_3->SetBinError(23,0.3030294);
   hdirt_stack_3->SetBinError(24,0.5027759);
   hdirt_stack_3->SetBinError(25,0.3861995);
   hdirt_stack_3->SetBinError(26,0.2188956);
   hdirt_stack_3->SetBinError(29,0.1380715);
   hdirt_stack_3->SetBinError(30,0.4258516);
   hdirt_stack_3->SetEntries(253);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,53.47516);
   houtFV_stack_4->SetBinContent(2,12.85143);
   houtFV_stack_4->SetBinContent(3,20.38512);
   houtFV_stack_4->SetBinContent(4,24.56235);
   houtFV_stack_4->SetBinContent(5,21.91444);
   houtFV_stack_4->SetBinContent(6,20.56559);
   houtFV_stack_4->SetBinContent(7,28.06385);
   houtFV_stack_4->SetBinContent(8,30.4334);
   houtFV_stack_4->SetBinContent(9,22.46779);
   houtFV_stack_4->SetBinContent(10,30.85519);
   houtFV_stack_4->SetBinContent(11,32.58239);
   houtFV_stack_4->SetBinContent(12,29.53353);
   houtFV_stack_4->SetBinContent(13,34.28075);
   houtFV_stack_4->SetBinContent(14,35.3629);
   houtFV_stack_4->SetBinContent(15,31.72656);
   houtFV_stack_4->SetBinContent(16,22.62143);
   houtFV_stack_4->SetBinContent(17,11.8448);
   houtFV_stack_4->SetBinContent(18,7.45028);
   houtFV_stack_4->SetBinContent(19,9.489202);
   houtFV_stack_4->SetBinContent(20,7.271698);
   houtFV_stack_4->SetBinContent(21,5.249866);
   houtFV_stack_4->SetBinContent(22,6.326822);
   houtFV_stack_4->SetBinContent(23,5.483031);
   houtFV_stack_4->SetBinContent(24,3.370974);
   houtFV_stack_4->SetBinContent(25,4.694729);
   houtFV_stack_4->SetBinContent(26,2.733181);
   houtFV_stack_4->SetBinContent(27,2.980925);
   houtFV_stack_4->SetBinContent(28,1.898982);
   houtFV_stack_4->SetBinContent(29,2.30395);
   houtFV_stack_4->SetBinContent(30,20.12868);
   houtFV_stack_4->SetBinError(0,3.716597);
   houtFV_stack_4->SetBinError(2,1.739433);
   houtFV_stack_4->SetBinError(3,2.293338);
   houtFV_stack_4->SetBinError(4,2.532756);
   houtFV_stack_4->SetBinError(5,2.538995);
   houtFV_stack_4->SetBinError(6,2.240878);
   houtFV_stack_4->SetBinError(7,2.641717);
   houtFV_stack_4->SetBinError(8,2.775755);
   houtFV_stack_4->SetBinError(9,2.345615);
   houtFV_stack_4->SetBinError(10,2.786305);
   houtFV_stack_4->SetBinError(11,2.852144);
   houtFV_stack_4->SetBinError(12,2.700023);
   houtFV_stack_4->SetBinError(13,2.944255);
   houtFV_stack_4->SetBinError(14,3.043752);
   houtFV_stack_4->SetBinError(15,3.037265);
   houtFV_stack_4->SetBinError(16,2.409638);
   houtFV_stack_4->SetBinError(17,1.697273);
   houtFV_stack_4->SetBinError(18,1.336221);
   houtFV_stack_4->SetBinError(19,1.467724);
   houtFV_stack_4->SetBinError(20,1.355802);
   houtFV_stack_4->SetBinError(21,1.168855);
   houtFV_stack_4->SetBinError(22,1.26873);
   houtFV_stack_4->SetBinError(23,1.137207);
   houtFV_stack_4->SetBinError(24,0.8986391);
   houtFV_stack_4->SetBinError(25,1.056768);
   houtFV_stack_4->SetBinError(26,0.8910529);
   houtFV_stack_4->SetBinError(27,0.8552677);
   houtFV_stack_4->SetBinError(28,0.6931457);
   houtFV_stack_4->SetBinError(29,0.7080718);
   houtFV_stack_4->SetBinError(30,2.290595);
   houtFV_stack_4->SetEntries(2321);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,12.68675);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.978748);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.954008);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.605502);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.593548);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.816084);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.578266);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.15022);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.473234);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.363041);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.310585);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.676421);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.708);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,10.15498);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,11.35004);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,6.400086);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.89207);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.04178);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.658062);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.24189);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.6699361);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9904539);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.8637398);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5583361);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,4.754978);
   hNCpi0inFVcoh_stack_5->SetBinError(0,1.189966);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4555378);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.501041);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4952454);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5259893);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5444123);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4806213);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5649942);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6266698);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6372419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9780356);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7682278);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.099319);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.07889);
   hNCpi0inFVcoh_stack_5->SetBinError(15,1.136629);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8203336);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6854991);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6003421);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3988204);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4152364);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2901718);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.316066);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2896119);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2847561);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.7311073);
   hNCpi0inFVcoh_stack_5->SetEntries(2012);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,123.4912);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,26.48303);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,36.47673);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,43.78724);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,47.15922);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,51.28207);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,60.92786);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,63.50282);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,67.57223);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,80.43385);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,113.5036);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,128.3094);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,148.8828);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,148.4658);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,135.4789);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,88.01471);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,52.53095);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,37.4916);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,28.90486);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,20.02214);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,17.03649);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,15.44619);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,14.26976);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,10.91225);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,9.746934);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,9.22962);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,9.051929);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,5.062374);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,6.107131);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,60.52381);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,3.585371);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.721602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,1.952552);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.173833);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.222226);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.346359);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.536877);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.609941);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.64696);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.894541);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.50338);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.592862);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,4.005953);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,3.953213);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.810801);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,3.01971);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.428471);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.986917);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.803149);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.42453);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.261515);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,1.243805);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,1.298612);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,1.013154);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.9852051);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.9714467);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,1.004474);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,0.7048608);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,0.7697466);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,2.539778);
   hNCpi0inFVnoncoh_stack_6->SetEntries(31034);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_7->SetBinContent(0,40.19923);
   hCCpi0inFV_stack_7->SetBinContent(2,8.977458);
   hCCpi0inFV_stack_7->SetBinContent(3,15.08937);
   hCCpi0inFV_stack_7->SetBinContent(4,11.67204);
   hCCpi0inFV_stack_7->SetBinContent(5,14.39248);
   hCCpi0inFV_stack_7->SetBinContent(6,20.06081);
   hCCpi0inFV_stack_7->SetBinContent(7,19.06415);
   hCCpi0inFV_stack_7->SetBinContent(8,23.95205);
   hCCpi0inFV_stack_7->SetBinContent(9,23.34034);
   hCCpi0inFV_stack_7->SetBinContent(10,31.2047);
   hCCpi0inFV_stack_7->SetBinContent(11,39.22743);
   hCCpi0inFV_stack_7->SetBinContent(12,48.7567);
   hCCpi0inFV_stack_7->SetBinContent(13,50.07288);
   hCCpi0inFV_stack_7->SetBinContent(14,56.32177);
   hCCpi0inFV_stack_7->SetBinContent(15,43.82928);
   hCCpi0inFV_stack_7->SetBinContent(16,30.12561);
   hCCpi0inFV_stack_7->SetBinContent(17,24.3001);
   hCCpi0inFV_stack_7->SetBinContent(18,16.46543);
   hCCpi0inFV_stack_7->SetBinContent(19,11.34423);
   hCCpi0inFV_stack_7->SetBinContent(20,10.55345);
   hCCpi0inFV_stack_7->SetBinContent(21,9.381613);
   hCCpi0inFV_stack_7->SetBinContent(22,7.871433);
   hCCpi0inFV_stack_7->SetBinContent(23,8.507923);
   hCCpi0inFV_stack_7->SetBinContent(24,5.564453);
   hCCpi0inFV_stack_7->SetBinContent(25,7.234041);
   hCCpi0inFV_stack_7->SetBinContent(26,5.32014);
   hCCpi0inFV_stack_7->SetBinContent(27,5.808851);
   hCCpi0inFV_stack_7->SetBinContent(28,5.66708);
   hCCpi0inFV_stack_7->SetBinContent(29,2.539312);
   hCCpi0inFV_stack_7->SetBinContent(30,63.85489);
   hCCpi0inFV_stack_7->SetBinError(0,3.100178);
   hCCpi0inFV_stack_7->SetBinError(2,1.507014);
   hCCpi0inFV_stack_7->SetBinError(3,1.937071);
   hCCpi0inFV_stack_7->SetBinError(4,1.710234);
   hCCpi0inFV_stack_7->SetBinError(5,1.926769);
   hCCpi0inFV_stack_7->SetBinError(6,2.240293);
   hCCpi0inFV_stack_7->SetBinError(7,2.149515);
   hCCpi0inFV_stack_7->SetBinError(8,2.473514);
   hCCpi0inFV_stack_7->SetBinError(9,2.471291);
   hCCpi0inFV_stack_7->SetBinError(10,2.818176);
   hCCpi0inFV_stack_7->SetBinError(11,3.124066);
   hCCpi0inFV_stack_7->SetBinError(12,3.551615);
   hCCpi0inFV_stack_7->SetBinError(13,3.501258);
   hCCpi0inFV_stack_7->SetBinError(14,3.798246);
   hCCpi0inFV_stack_7->SetBinError(15,3.281084);
   hCCpi0inFV_stack_7->SetBinError(16,2.71007);
   hCCpi0inFV_stack_7->SetBinError(17,2.493119);
   hCCpi0inFV_stack_7->SetBinError(18,2.039686);
   hCCpi0inFV_stack_7->SetBinError(19,1.654464);
   hCCpi0inFV_stack_7->SetBinError(20,1.630246);
   hCCpi0inFV_stack_7->SetBinError(21,1.558471);
   hCCpi0inFV_stack_7->SetBinError(22,1.424455);
   hCCpi0inFV_stack_7->SetBinError(23,1.4697);
   hCCpi0inFV_stack_7->SetBinError(24,1.116177);
   hCCpi0inFV_stack_7->SetBinError(25,1.345794);
   hCCpi0inFV_stack_7->SetBinError(26,1.177227);
   hCCpi0inFV_stack_7->SetBinError(27,1.257217);
   hCCpi0inFV_stack_7->SetBinError(28,1.226472);
   hCCpi0inFV_stack_7->SetBinError(29,0.8333082);
   hCCpi0inFV_stack_7->SetBinError(30,3.963357);
   hCCpi0inFV_stack_7->SetEntries(2832);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hNCinFV_stack_8->SetBinContent(0,19.19469);
   hNCinFV_stack_8->SetBinContent(2,2.589184);
   hNCinFV_stack_8->SetBinContent(3,3.672505);
   hNCinFV_stack_8->SetBinContent(4,5.605374);
   hNCinFV_stack_8->SetBinContent(5,8.749439);
   hNCinFV_stack_8->SetBinContent(6,9.0319);
   hNCinFV_stack_8->SetBinContent(7,7.277151);
   hNCinFV_stack_8->SetBinContent(8,6.645585);
   hNCinFV_stack_8->SetBinContent(9,4.39996);
   hNCinFV_stack_8->SetBinContent(10,7.283913);
   hNCinFV_stack_8->SetBinContent(11,6.05713);
   hNCinFV_stack_8->SetBinContent(12,7.862833);
   hNCinFV_stack_8->SetBinContent(13,12.8294);
   hNCinFV_stack_8->SetBinContent(14,9.720099);
   hNCinFV_stack_8->SetBinContent(15,8.057858);
   hNCinFV_stack_8->SetBinContent(16,5.863795);
   hNCinFV_stack_8->SetBinContent(17,3.034178);
   hNCinFV_stack_8->SetBinContent(18,4.05302);
   hNCinFV_stack_8->SetBinContent(19,1.712114);
   hNCinFV_stack_8->SetBinContent(20,1.660551);
   hNCinFV_stack_8->SetBinContent(21,2.000729);
   hNCinFV_stack_8->SetBinContent(22,0.8770706);
   hNCinFV_stack_8->SetBinContent(23,1.070405);
   hNCinFV_stack_8->SetBinContent(24,1.708733);
   hNCinFV_stack_8->SetBinContent(25,0.7336084);
   hNCinFV_stack_8->SetBinContent(26,2.050601);
   hNCinFV_stack_8->SetBinContent(27,1.072095);
   hNCinFV_stack_8->SetBinContent(28,0.3934307);
   hNCinFV_stack_8->SetBinContent(29,0.1950248);
   hNCinFV_stack_8->SetBinContent(30,14.39248);
   hNCinFV_stack_8->SetBinError(0,2.211508);
   hNCinFV_stack_8->SetBinError(2,0.809167);
   hNCinFV_stack_8->SetBinError(3,0.8768883);
   hNCinFV_stack_8->SetBinError(4,1.240665);
   hNCinFV_stack_8->SetBinError(5,1.468699);
   hNCinFV_stack_8->SetBinError(6,1.583592);
   hNCinFV_stack_8->SetBinError(7,1.329985);
   hNCinFV_stack_8->SetBinError(8,1.302203);
   hNCinFV_stack_8->SetBinError(9,1.076116);
   hNCinFV_stack_8->SetBinError(10,1.33098);
   hNCinFV_stack_8->SetBinError(11,1.257101);
   hNCinFV_stack_8->SetBinError(12,1.442772);
   hNCinFV_stack_8->SetBinError(13,1.791256);
   hNCinFV_stack_8->SetBinError(14,1.594958);
   hNCinFV_stack_8->SetBinError(15,1.455893);
   hNCinFV_stack_8->SetBinError(16,1.242148);
   hNCinFV_stack_8->SetBinError(17,0.8325598);
   hNCinFV_stack_8->SetBinError(18,1.019635);
   hNCinFV_stack_8->SetBinError(19,0.6201715);
   hNCinFV_stack_8->SetBinError(20,0.650847);
   hNCinFV_stack_8->SetBinError(21,0.7343859);
   hNCinFV_stack_8->SetBinError(22,0.5197486);
   hNCinFV_stack_8->SetBinError(23,0.5545368);
   hNCinFV_stack_8->SetBinError(24,0.6191027);
   hNCinFV_stack_8->SetBinError(25,0.4394482);
   hNCinFV_stack_8->SetBinError(26,0.7068742);
   hNCinFV_stack_8->SetBinError(27,0.5551335);
   hNCinFV_stack_8->SetBinError(28,0.2781975);
   hNCinFV_stack_8->SetBinError(29,0.1950249);
   hNCinFV_stack_8->SetBinError(30,1.820523);
   hNCinFV_stack_8->SetEntries(678);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_9->SetBinContent(0,18.57489);
   hnumuCCinFV_stack_9->SetBinContent(2,5.26991);
   hnumuCCinFV_stack_9->SetBinContent(3,8.357104);
   hnumuCCinFV_stack_9->SetBinContent(4,5.436842);
   hnumuCCinFV_stack_9->SetBinContent(5,7.941733);
   hnumuCCinFV_stack_9->SetBinContent(6,8.37112);
   hnumuCCinFV_stack_9->SetBinContent(7,10.7326);
   hnumuCCinFV_stack_9->SetBinContent(8,11.42881);
   hnumuCCinFV_stack_9->SetBinContent(9,9.967281);
   hnumuCCinFV_stack_9->SetBinContent(10,9.548151);
   hnumuCCinFV_stack_9->SetBinContent(11,11.8816);
   hnumuCCinFV_stack_9->SetBinContent(12,15.58804);
   hnumuCCinFV_stack_9->SetBinContent(13,13.88874);
   hnumuCCinFV_stack_9->SetBinContent(14,11.78491);
   hnumuCCinFV_stack_9->SetBinContent(15,11.80006);
   hnumuCCinFV_stack_9->SetBinContent(16,10.23249);
   hnumuCCinFV_stack_9->SetBinContent(17,7.3225);
   hnumuCCinFV_stack_9->SetBinContent(18,7.195784);
   hnumuCCinFV_stack_9->SetBinContent(19,3.941071);
   hnumuCCinFV_stack_9->SetBinContent(20,4.440348);
   hnumuCCinFV_stack_9->SetBinContent(21,3.992906);
   hnumuCCinFV_stack_9->SetBinContent(22,3.072793);
   hnumuCCinFV_stack_9->SetBinContent(23,2.813647);
   hnumuCCinFV_stack_9->SetBinContent(24,1.817917);
   hnumuCCinFV_stack_9->SetBinContent(25,2.854986);
   hnumuCCinFV_stack_9->SetBinContent(26,2.618141);
   hnumuCCinFV_stack_9->SetBinContent(27,2.220612);
   hnumuCCinFV_stack_9->SetBinContent(28,2.085965);
   hnumuCCinFV_stack_9->SetBinContent(29,1.7594);
   hnumuCCinFV_stack_9->SetBinContent(30,13.66308);
   hnumuCCinFV_stack_9->SetBinError(0,2.55024);
   hnumuCCinFV_stack_9->SetBinError(2,1.124982);
   hnumuCCinFV_stack_9->SetBinError(3,2.137126);
   hnumuCCinFV_stack_9->SetBinError(4,1.190651);
   hnumuCCinFV_stack_9->SetBinError(5,1.434222);
   hnumuCCinFV_stack_9->SetBinError(6,1.818401);
   hnumuCCinFV_stack_9->SetBinError(7,1.675465);
   hnumuCCinFV_stack_9->SetBinError(8,2.207339);
   hnumuCCinFV_stack_9->SetBinError(9,2.253548);
   hnumuCCinFV_stack_9->SetBinError(10,1.902966);
   hnumuCCinFV_stack_9->SetBinError(11,1.750803);
   hnumuCCinFV_stack_9->SetBinError(12,2.357926);
   hnumuCCinFV_stack_9->SetBinError(13,2.081515);
   hnumuCCinFV_stack_9->SetBinError(14,1.927783);
   hnumuCCinFV_stack_9->SetBinError(15,1.85755);
   hnumuCCinFV_stack_9->SetBinError(16,2.396485);
   hnumuCCinFV_stack_9->SetBinError(17,1.473803);
   hnumuCCinFV_stack_9->SetBinError(18,1.463335);
   hnumuCCinFV_stack_9->SetBinError(19,0.9621862);
   hnumuCCinFV_stack_9->SetBinError(20,1.072696);
   hnumuCCinFV_stack_9->SetBinError(21,1.07472);
   hnumuCCinFV_stack_9->SetBinError(22,0.9123214);
   hnumuCCinFV_stack_9->SetBinError(23,0.8935379);
   hnumuCCinFV_stack_9->SetBinError(24,0.7593743);
   hnumuCCinFV_stack_9->SetBinError(25,0.9040698);
   hnumuCCinFV_stack_9->SetBinError(26,2.243567);
   hnumuCCinFV_stack_9->SetBinError(27,0.8229934);
   hnumuCCinFV_stack_9->SetBinError(28,0.8418197);
   hnumuCCinFV_stack_9->SetBinError(29,0.6836562);
   hnumuCCinFV_stack_9->SetBinError(30,1.837721);
   hnumuCCinFV_stack_9->SetEntries(891);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_10->SetBinContent(0,2.975029);
   hnueCCinFV_stack_10->SetBinContent(2,2.16411);
   hnueCCinFV_stack_10->SetBinContent(3,1.885595);
   hnueCCinFV_stack_10->SetBinContent(4,1.766599);
   hnueCCinFV_stack_10->SetBinContent(5,1.655525);
   hnueCCinFV_stack_10->SetBinContent(6,1.098823);
   hnueCCinFV_stack_10->SetBinContent(7,1.332541);
   hnueCCinFV_stack_10->SetBinContent(8,0.6684211);
   hnueCCinFV_stack_10->SetBinContent(9,2.19892);
   hnueCCinFV_stack_10->SetBinContent(10,0.3402104);
   hnueCCinFV_stack_10->SetBinContent(11,2.061076);
   hnueCCinFV_stack_10->SetBinContent(12,1.208269);
   hnueCCinFV_stack_10->SetBinContent(13,1.839634);
   hnueCCinFV_stack_10->SetBinContent(14,0.4408525);
   hnueCCinFV_stack_10->SetBinContent(15,0.9702828);
   hnueCCinFV_stack_10->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(17,1.077859);
   hnueCCinFV_stack_10->SetBinContent(18,1.332922);
   hnueCCinFV_stack_10->SetBinContent(19,1.190957);
   hnueCCinFV_stack_10->SetBinContent(20,0.3934307);
   hnueCCinFV_stack_10->SetBinContent(23,0.2998007);
   hnueCCinFV_stack_10->SetBinContent(24,0.2781615);
   hnueCCinFV_stack_10->SetBinContent(25,0.4316896);
   hnueCCinFV_stack_10->SetBinContent(26,0.3025491);
   hnueCCinFV_stack_10->SetBinContent(27,0.8013275);
   hnueCCinFV_stack_10->SetBinContent(28,0.0001285301);
   hnueCCinFV_stack_10->SetBinContent(30,5.233411);
   hnueCCinFV_stack_10->SetBinError(0,0.9627873);
   hnueCCinFV_stack_10->SetBinError(2,1.564231);
   hnueCCinFV_stack_10->SetBinError(3,0.7590299);
   hnueCCinFV_stack_10->SetBinError(4,1.01581);
   hnueCCinFV_stack_10->SetBinError(5,0.8614449);
   hnueCCinFV_stack_10->SetBinError(6,0.5449035);
   hnueCCinFV_stack_10->SetBinError(7,0.6488391);
   hnueCCinFV_stack_10->SetBinError(8,0.3859444);
   hnueCCinFV_stack_10->SetBinError(9,1.36049);
   hnueCCinFV_stack_10->SetBinError(10,0.3401776);
   hnueCCinFV_stack_10->SetBinError(11,0.8209993);
   hnueCCinFV_stack_10->SetBinError(12,0.5474801);
   hnueCCinFV_stack_10->SetBinError(13,0.8083309);
   hnueCCinFV_stack_10->SetBinError(14,0.3135281);
   hnueCCinFV_stack_10->SetBinError(15,0.7770837);
   hnueCCinFV_stack_10->SetBinError(16,0.3401776);
   hnueCCinFV_stack_10->SetBinError(17,0.5726707);
   hnueCCinFV_stack_10->SetBinError(18,0.7233422);
   hnueCCinFV_stack_10->SetBinError(19,0.5474864);
   hnueCCinFV_stack_10->SetBinError(20,0.2781975);
   hnueCCinFV_stack_10->SetBinError(23,0.2998007);
   hnueCCinFV_stack_10->SetBinError(24,0.2781615);
   hnueCCinFV_stack_10->SetBinError(25,0.4316896);
   hnueCCinFV_stack_10->SetBinError(26,0.3025491);
   hnueCCinFV_stack_10->SetBinError(27,0.4937343);
   hnueCCinFV_stack_10->SetBinError(28,0.0001237195);
   hnueCCinFV_stack_10->SetBinError(30,1.474521);
   hnueCCinFV_stack_10->SetEntries(122);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);
   hmcerror__2->SetBinContent(0,337.7701);
   hmcerror__2->SetBinContent(2,84.06353);
   hmcerror__2->SetBinContent(3,119.3834);
   hmcerror__2->SetBinContent(4,136.3056);
   hmcerror__2->SetBinContent(5,138.7224);
   hmcerror__2->SetBinContent(6,148.9085);
   hmcerror__2->SetBinContent(7,177.9796);
   hmcerror__2->SetBinContent(8,183.1049);
   hmcerror__2->SetBinContent(9,169.4312);
   hmcerror__2->SetBinContent(10,194.6197);
   hmcerror__2->SetBinContent(11,260.6653);
   hmcerror__2->SetBinContent(12,266.3925);
   hmcerror__2->SetBinContent(13,310.4622);
   hmcerror__2->SetBinContent(14,313.5321);
   hmcerror__2->SetBinContent(15,272.7963);
   hmcerror__2->SetBinContent(16,182.484);
   hmcerror__2->SetBinContent(17,118.2671);
   hmcerror__2->SetBinContent(18,87.25261);
   hmcerror__2->SetBinContent(19,65.16106);
   hmcerror__2->SetBinContent(20,50.97593);
   hmcerror__2->SetBinContent(21,42.07048);
   hmcerror__2->SetBinContent(22,37.98083);
   hmcerror__2->SetBinContent(23,41.29501);
   hmcerror__2->SetBinContent(24,28.22758);
   hmcerror__2->SetBinContent(25,31.69038);
   hmcerror__2->SetBinContent(26,24.64596);
   hmcerror__2->SetBinContent(27,26.12396);
   hmcerror__2->SetBinContent(28,17.04897);
   hmcerror__2->SetBinContent(29,14.32545);
   hmcerror__2->SetBinContent(30,194.6298);
   hmcerror__2->SetBinError(0,8.878918);
   hmcerror__2->SetBinError(1,0.4212968);
   hmcerror__2->SetBinError(2,19.5118);
   hmcerror__2->SetBinError(3,22.84232);
   hmcerror__2->SetBinError(4,29.6686);
   hmcerror__2->SetBinError(5,27.31102);
   hmcerror__2->SetBinError(6,28.84392);
   hmcerror__2->SetBinError(7,32.90049);
   hmcerror__2->SetBinError(8,40.0639);
   hmcerror__2->SetBinError(9,34.42776);
   hmcerror__2->SetBinError(10,42.84035);
   hmcerror__2->SetBinError(11,60.37452);
   hmcerror__2->SetBinError(12,60.53583);
   hmcerror__2->SetBinError(13,78.10239);
   hmcerror__2->SetBinError(14,68.91293);
   hmcerror__2->SetBinError(15,56.26017);
   hmcerror__2->SetBinError(16,38.69231);
   hmcerror__2->SetBinError(17,24.73304);
   hmcerror__2->SetBinError(18,18.5963);
   hmcerror__2->SetBinError(19,17.59502);
   hmcerror__2->SetBinError(20,13.38335);
   hmcerror__2->SetBinError(21,10.45643);
   hmcerror__2->SetBinError(22,9.992212);
   hmcerror__2->SetBinError(23,9.0731);
   hmcerror__2->SetBinError(24,8.92996);
   hmcerror__2->SetBinError(25,8.073196);
   hmcerror__2->SetBinError(26,7.505841);
   hmcerror__2->SetBinError(27,7.549814);
   hmcerror__2->SetBinError(28,6.3592);
   hmcerror__2->SetBinError(29,5.051029);
   hmcerror__2->SetBinError(30,41.48031);
   hmcerror__2->SetEntries(4029.808);

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
   
   Double_t _fx3001[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3001[29] = {
   0,
   87,
   110,
   115,
   150,
   152,
   168,
   162,
   185,
   229,
   241,
   282,
   316,
   309,
   294,
   150,
   134,
   75,
   63,
   60,
   44,
   34,
   28,
   29,
   43,
   32,
   22,
   16,
   14};
   Double_t _felx3001[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3001[29] = {
   0,
   9.4503,
   10.48809,
   10.72381,
   12.24745,
   12.32883,
   12.96148,
   12.72792,
   13.60147,
   15.13275,
   15.52417,
   16.79286,
   17.77639,
   17.5784,
   17.14643,
   12.24745,
   11.57584,
   8.7852,
   8.0648,
   7.8743,
   6.7671,
   5.9703,
   5.4358,
   5.5285,
   6.6917,
   5.7977,
   4.8417,
   4.1628,
   3.9102};
   Double_t _fehx3001[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3001[29] = {
   1.1478,
   9.2488,
   10.48809,
   10.72381,
   12.24745,
   12.32883,
   12.96148,
   12.72792,
   13.60147,
   15.13275,
   15.52417,
   16.79286,
   17.77639,
   17.5784,
   17.14643,
   12.24745,
   11.57584,
   8.5831,
   7.862,
   7.6713,
   6.5623,
   5.7635,
   5.2271,
   5.3201,
   6.4868,
   5.5904,
   4.6299,
   3.9454,
   3.6898};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,330);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(367.154);
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
   
   TLegend *leg = new TLegend(0.6,0.3,0.9,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=23.2/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3544.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 92.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 450.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 54.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 469.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  94.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1476.1","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 556.6","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 126.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 198.4","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 26.1","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3002[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3002[29] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3002[29] = {
   0,
   0.2321077,
   0.1913358,
   0.2176624,
   0.1968753,
   0.1937022,
   0.1848554,
   0.218803,
   0.2031961,
   0.2201234,
   0.231617,
   0.227243,
   0.2515681,
   0.2197954,
   0.2062351,
   0.2120312,
   0.2091286,
   0.2131317,
   0.2700236,
   0.2625426,
   0.2485456,
   0.2630856,
   0.2197142,
   0.3163558,
   0.2547523,
   0.3045465,
   0.2889996,
   0.3729962,
   0.3525914};
   Double_t _fehx3002[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3002[29] = {
   0,
   0.2321077,
   0.1913358,
   0.2176624,
   0.1968753,
   0.1937022,
   0.1848554,
   0.218803,
   0.2031961,
   0.2201234,
   0.231617,
   0.227243,
   0.2515681,
   0.2197954,
   0.2062351,
   0.2120312,
   0.2091286,
   0.2131317,
   0.2700236,
   0.2625426,
   0.2485456,
   0.2630856,
   0.2197142,
   0.3163558,
   0.2547523,
   0.3045465,
   0.2889996,
   0.3729962,
   0.3525914};
   grae = new TGraphAsymmErrors(29,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,330);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} mass [MeV/c^{2}]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3003[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3003[29] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3003[29] = {
   0,
   0.1766193,
   0.1700931,
   0.1578377,
   0.1708681,
   0.1650594,
   0.162545,
   0.1750377,
   0.1761629,
   0.1904648,
   0.1863412,
   0.1957858,
   0.1977287,
   0.1920913,
   0.198766,
   0.2008096,
   0.1956137,
   0.2014074,
   0.2126106,
   0.213957,
   0.2037998,
   0.2199721,
   0.1877156,
   0.2180539,
   0.2135068,
   0.2501657,
   0.214705,
   0.229223,
   0.2639262};
   Double_t _fehx3003[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3003[29] = {
   0,
   0.1766193,
   0.1700931,
   0.1578377,
   0.1708681,
   0.1650594,
   0.162545,
   0.1750377,
   0.1761629,
   0.1904648,
   0.1863412,
   0.1957858,
   0.1977287,
   0.1920913,
   0.198766,
   0.2008096,
   0.1956137,
   0.2014074,
   0.2126106,
   0.213957,
   0.2037998,
   0.2199721,
   0.1877156,
   0.2180539,
   0.2135068,
   0.2501657,
   0.214705,
   0.229223,
   0.2639262};
   grae = new TGraphAsymmErrors(29,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,330);
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
   
   Double_t _fx3004[29] = {
   5.172414,
   15.51724,
   25.86207,
   36.2069,
   46.55172,
   56.89655,
   67.24138,
   77.58621,
   87.93103,
   98.27586,
   108.6207,
   118.9655,
   129.3103,
   139.6552,
   150,
   160.3448,
   170.6897,
   181.0345,
   191.3793,
   201.7241,
   212.069,
   222.4138,
   232.7586,
   243.1034,
   253.4483,
   263.7931,
   274.1379,
   284.4828,
   294.8276};
   Double_t _fy3004[29] = {
   10,
   1.034932,
   0.9214013,
   0.8436925,
   1.081296,
   1.020761,
   0.9439282,
   0.8847389,
   1.091889,
   1.176654,
   0.9245573,
   1.058589,
   1.017837,
   0.985545,
   1.077727,
   0.8219897,
   1.133028,
   0.8595731,
   0.966835,
   1.177026,
   1.045864,
   0.8951883,
   0.678048,
   1.027364,
   1.356879,
   1.298387,
   0.8421387,
   0.9384734,
   0.977282};
   Double_t _felx3004[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fely3004[29] = {
   0,
   0.1124185,
   0.08785216,
   0.07867473,
   0.08828744,
   0.08279463,
   0.07282565,
   0.06951166,
   0.08027724,
   0.07775547,
   0.05955597,
   0.06303803,
   0.05725782,
   0.0560657,
   0.06285432,
   0.06711518,
   0.09787873,
   0.100687,
   0.1237672,
   0.1544709,
   0.1608515,
   0.1571924,
   0.1316333,
   0.1958545,
   0.2111587,
   0.2352393,
   0.1853356,
   0.2441673,
   0.2729549};
   Double_t _fehx3004[29] = {
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414,
   5.172414};
   Double_t _fehy3004[29] = {
   0,
   0.1100216,
   0.08785216,
   0.07867473,
   0.08828744,
   0.08279463,
   0.07282565,
   0.06951166,
   0.08027724,
   0.07775547,
   0.05955597,
   0.06303803,
   0.05725782,
   0.0560657,
   0.06285432,
   0.06711518,
   0.09787873,
   0.0983707,
   0.1206549,
   0.1504887,
   0.1559835,
   0.1517476,
   0.1265794,
   0.1884717,
   0.204693,
   0.2268282,
   0.1772281,
   0.2314158,
   0.2575697};
   grae = new TGraphAsymmErrors(29,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,330);
   Graph_Graph3004->SetMinimum(0.4917732);
   Graph_Graph3004->SetMaximum(10.94536);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_pi0_mass_all",29,0,300);

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
   TLine *line = new TLine(0,1,300,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
