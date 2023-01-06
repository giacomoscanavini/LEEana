#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Oct 21 23:07:15 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-3.055837,293.3333,337.9112);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__13->SetBinContent(0,1.343772);
   hmc__13->SetBinContent(1,62.14846);
   hmc__13->SetBinContent(2,69.4913);
   hmc__13->SetBinContent(3,81.8272);
   hmc__13->SetBinContent(4,94.23907);
   hmc__13->SetBinContent(5,100.4102);
   hmc__13->SetBinContent(6,103.15);
   hmc__13->SetBinContent(7,100.535);
   hmc__13->SetBinContent(8,113.7291);
   hmc__13->SetBinContent(9,117.3568);
   hmc__13->SetBinContent(10,117.5487);
   hmc__13->SetBinContent(11,132.394);
   hmc__13->SetBinContent(12,126.3463);
   hmc__13->SetBinContent(13,135.5271);
   hmc__13->SetBinContent(14,137.1251);
   hmc__13->SetBinContent(15,118.7109);
   hmc__13->SetBinContent(16,129.9684);
   hmc__13->SetBinContent(17,141.8704);
   hmc__13->SetBinContent(18,140.3613);
   hmc__13->SetBinContent(19,147.12);
   hmc__13->SetBinContent(20,143.9203);
   hmc__13->SetBinContent(21,152.7918);
   hmc__13->SetBinContent(22,138.8964);
   hmc__13->SetBinContent(23,149.6263);
   hmc__13->SetBinContent(24,122.2916);
   hmc__13->SetBinContent(25,104.0628);
   hmc__13->SetBinContent(26,63.53485);
   hmc__13->SetBinContent(27,3.318577);
   hmc__13->SetBinError(0,0.5514377);
   hmc__13->SetBinError(1,22.93341);
   hmc__13->SetBinError(2,32.4319);
   hmc__13->SetBinError(3,34.13066);
   hmc__13->SetBinError(4,36.9861);
   hmc__13->SetBinError(5,45.51226);
   hmc__13->SetBinError(6,41.63698);
   hmc__13->SetBinError(7,40.81547);
   hmc__13->SetBinError(8,49.55789);
   hmc__13->SetBinError(9,45.39587);
   hmc__13->SetBinError(10,42.79453);
   hmc__13->SetBinError(11,45.91617);
   hmc__13->SetBinError(12,52.05781);
   hmc__13->SetBinError(13,48.7233);
   hmc__13->SetBinError(14,46.64445);
   hmc__13->SetBinError(15,46.55818);
   hmc__13->SetBinError(16,46.92246);
   hmc__13->SetBinError(17,45.2763);
   hmc__13->SetBinError(18,44.12731);
   hmc__13->SetBinError(19,46.86223);
   hmc__13->SetBinError(20,49.77684);
   hmc__13->SetBinError(21,51.80176);
   hmc__13->SetBinError(22,47.89324);
   hmc__13->SetBinError(23,50.44119);
   hmc__13->SetBinError(24,42.76146);
   hmc__13->SetBinError(25,40.99187);
   hmc__13->SetBinError(26,22.93567);
   hmc__13->SetBinError(27,5.467923);
   hmc__13->SetMinimum(-3.055837);
   hmc__13->SetMaximum(320.8629);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",26,0,260);
   hs5_stack_5->SetMinimum(-2.083393e-08);
   hs5_stack_5->SetMaximum(160.4314);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,2.014965);
   hbadmatch_stack_1->SetBinContent(2,0.7336084);
   hbadmatch_stack_1->SetBinContent(3,1.693556);
   hbadmatch_stack_1->SetBinContent(4,1.25088);
   hbadmatch_stack_1->SetBinContent(5,3.055866);
   hbadmatch_stack_1->SetBinContent(6,1.889621);
   hbadmatch_stack_1->SetBinContent(7,1.823401);
   hbadmatch_stack_1->SetBinContent(8,1.85614);
   hbadmatch_stack_1->SetBinContent(9,2.990222);
   hbadmatch_stack_1->SetBinContent(10,2.687797);
   hbadmatch_stack_1->SetBinContent(11,3.819233);
   hbadmatch_stack_1->SetBinContent(12,4.232081);
   hbadmatch_stack_1->SetBinContent(13,4.9842);
   hbadmatch_stack_1->SetBinContent(14,4.155826);
   hbadmatch_stack_1->SetBinContent(15,2.381517);
   hbadmatch_stack_1->SetBinContent(16,2.078472);
   hbadmatch_stack_1->SetBinContent(17,4.110128);
   hbadmatch_stack_1->SetBinContent(18,4.342473);
   hbadmatch_stack_1->SetBinContent(19,4.272688);
   hbadmatch_stack_1->SetBinContent(20,3.298591);
   hbadmatch_stack_1->SetBinContent(21,2.361);
   hbadmatch_stack_1->SetBinContent(22,3.640954);
   hbadmatch_stack_1->SetBinContent(23,5.276465);
   hbadmatch_stack_1->SetBinContent(24,2.11339);
   hbadmatch_stack_1->SetBinContent(25,2.489804);
   hbadmatch_stack_1->SetBinContent(26,2.125209);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.7028866);
   hbadmatch_stack_1->SetBinError(2,0.4394482);
   hbadmatch_stack_1->SetBinError(3,0.6069255);
   hbadmatch_stack_1->SetBinError(4,0.5884735);
   hbadmatch_stack_1->SetBinError(5,1.995311);
   hbadmatch_stack_1->SetBinError(6,0.6062645);
   hbadmatch_stack_1->SetBinError(7,0.6282556);
   hbadmatch_stack_1->SetBinError(8,0.7085648);
   hbadmatch_stack_1->SetBinError(9,1.108623);
   hbadmatch_stack_1->SetBinError(10,0.9277271);
   hbadmatch_stack_1->SetBinError(11,1.154742);
   hbadmatch_stack_1->SetBinError(12,1.152847);
   hbadmatch_stack_1->SetBinError(13,1.169974);
   hbadmatch_stack_1->SetBinError(14,1.021976);
   hbadmatch_stack_1->SetBinError(15,0.7910634);
   hbadmatch_stack_1->SetBinError(16,0.8131561);
   hbadmatch_stack_1->SetBinError(17,1.086872);
   hbadmatch_stack_1->SetBinError(18,1.076018);
   hbadmatch_stack_1->SetBinError(19,1.550343);
   hbadmatch_stack_1->SetBinError(20,0.8901874);
   hbadmatch_stack_1->SetBinError(21,0.7639081);
   hbadmatch_stack_1->SetBinError(22,0.982735);
   hbadmatch_stack_1->SetBinError(23,1.200011);
   hbadmatch_stack_1->SetBinError(24,0.6875881);
   hbadmatch_stack_1->SetBinError(25,0.7357334);
   hbadmatch_stack_1->SetBinError(26,0.7904477);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.3243973);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,3.15182);
   hext_stack_2->SetBinContent(3,4.214394);
   hext_stack_2->SetBinContent(4,8.402838);
   hext_stack_2->SetBinContent(5,7.911264);
   hext_stack_2->SetBinContent(6,6.082985);
   hext_stack_2->SetBinContent(7,6.24298);
   hext_stack_2->SetBinContent(8,3.636211);
   hext_stack_2->SetBinContent(9,8.802256);
   hext_stack_2->SetBinContent(10,11.52593);
   hext_stack_2->SetBinContent(11,13.05854);
   hext_stack_2->SetBinContent(12,10.66367);
   hext_stack_2->SetBinContent(13,10.18205);
   hext_stack_2->SetBinContent(14,10.64931);
   hext_stack_2->SetBinContent(15,8.015008);
   hext_stack_2->SetBinContent(16,13.17387);
   hext_stack_2->SetBinContent(17,11.95848);
   hext_stack_2->SetBinContent(18,13.91205);
   hext_stack_2->SetBinContent(19,10.90586);
   hext_stack_2->SetBinContent(20,13.46514);
   hext_stack_2->SetBinContent(21,23.79723);
   hext_stack_2->SetBinContent(22,15.32655);
   hext_stack_2->SetBinContent(23,21.38358);
   hext_stack_2->SetBinContent(24,12.71102);
   hext_stack_2->SetBinContent(25,12.15161);
   hext_stack_2->SetBinContent(26,13.45796);
   hext_stack_2->SetBinError(0,0.3243973);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,1.23684);
   hext_stack_2->SetBinError(3,1.305512);
   hext_stack_2->SetBinError(4,1.969062);
   hext_stack_2->SetBinError(5,1.997027);
   hext_stack_2->SetBinError(6,1.552674);
   hext_stack_2->SetBinError(7,1.547854);
   hext_stack_2->SetBinError(8,1.272817);
   hext_stack_2->SetBinError(9,2.060031);
   hext_stack_2->SetBinError(10,2.492345);
   hext_stack_2->SetBinError(11,2.622797);
   hext_stack_2->SetBinError(12,2.269662);
   hext_stack_2->SetBinError(13,2.173649);
   hext_stack_2->SetBinError(14,2.356643);
   hext_stack_2->SetBinError(15,1.855964);
   hext_stack_2->SetBinError(16,2.503891);
   hext_stack_2->SetBinError(17,2.430766);
   hext_stack_2->SetBinError(18,2.517702);
   hext_stack_2->SetBinError(19,2.279585);
   hext_stack_2->SetBinError(20,2.654126);
   hext_stack_2->SetBinError(21,3.505955);
   hext_stack_2->SetBinError(22,2.819933);
   hext_stack_2->SetBinError(23,3.291094);
   hext_stack_2->SetBinError(24,2.361266);
   hext_stack_2->SetBinError(25,2.285606);
   hext_stack_2->SetBinError(26,2.691763);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.6381768);
   hdirt_stack_3->SetBinContent(2,0.4048706);
   hdirt_stack_3->SetBinContent(3,0.9987812);
   hdirt_stack_3->SetBinContent(4,0.5902398);
   hdirt_stack_3->SetBinContent(5,1.586995);
   hdirt_stack_3->SetBinContent(8,0.4377912);
   hdirt_stack_3->SetBinContent(9,0.7043164);
   hdirt_stack_3->SetBinContent(10,0.5570828);
   hdirt_stack_3->SetBinContent(11,0.2605212);
   hdirt_stack_3->SetBinContent(13,0.4762587);
   hdirt_stack_3->SetBinContent(14,0.2516114);
   hdirt_stack_3->SetBinContent(16,0.9600414);
   hdirt_stack_3->SetBinContent(17,1.076449);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.6762486);
   hdirt_stack_3->SetBinContent(21,1.371529);
   hdirt_stack_3->SetBinContent(22,0.9239391);
   hdirt_stack_3->SetBinContent(23,1.658375);
   hdirt_stack_3->SetBinContent(24,0.8667945);
   hdirt_stack_3->SetBinContent(25,0.49739);
   hdirt_stack_3->SetBinContent(26,0.6027733);
   hdirt_stack_3->SetBinError(1,0.3761246);
   hdirt_stack_3->SetBinError(2,0.2872316);
   hdirt_stack_3->SetBinError(3,0.5311599);
   hdirt_stack_3->SetBinError(4,0.4504401);
   hdirt_stack_3->SetBinError(5,1.0046);
   hdirt_stack_3->SetBinError(8,0.3095651);
   hdirt_stack_3->SetBinError(9,0.428047);
   hdirt_stack_3->SetBinError(10,0.4028472);
   hdirt_stack_3->SetBinError(11,0.2605212);
   hdirt_stack_3->SetBinError(13,0.3652866);
   hdirt_stack_3->SetBinError(14,0.2516114);
   hdirt_stack_3->SetBinError(16,0.4360368);
   hdirt_stack_3->SetBinError(17,0.5625396);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.3547578);
   hdirt_stack_3->SetBinError(21,0.6403833);
   hdirt_stack_3->SetBinError(22,0.5196137);
   hdirt_stack_3->SetBinError(23,0.6846166);
   hdirt_stack_3->SetBinError(24,0.4852483);
   hdirt_stack_3->SetBinError(25,0.2933399);
   hdirt_stack_3->SetBinError(26,0.4293907);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,0.6480603);
   houtFV_stack_4->SetBinContent(1,31.5994);
   houtFV_stack_4->SetBinContent(2,6.489408);
   houtFV_stack_4->SetBinContent(3,6.365576);
   houtFV_stack_4->SetBinContent(4,5.722533);
   houtFV_stack_4->SetBinContent(5,5.347934);
   houtFV_stack_4->SetBinContent(6,6.075774);
   houtFV_stack_4->SetBinContent(7,5.773258);
   houtFV_stack_4->SetBinContent(8,6.494918);
   houtFV_stack_4->SetBinContent(9,3.56813);
   houtFV_stack_4->SetBinContent(10,6.373805);
   houtFV_stack_4->SetBinContent(11,4.449832);
   houtFV_stack_4->SetBinContent(12,6.049252);
   houtFV_stack_4->SetBinContent(13,5.487622);
   houtFV_stack_4->SetBinContent(14,5.534641);
   houtFV_stack_4->SetBinContent(15,6.340791);
   houtFV_stack_4->SetBinContent(16,6.093563);
   houtFV_stack_4->SetBinContent(17,9.695547);
   houtFV_stack_4->SetBinContent(18,6.229806);
   houtFV_stack_4->SetBinContent(19,6.492904);
   houtFV_stack_4->SetBinContent(20,6.70226);
   houtFV_stack_4->SetBinContent(21,5.032626);
   houtFV_stack_4->SetBinContent(22,4.700694);
   houtFV_stack_4->SetBinContent(23,6.491767);
   houtFV_stack_4->SetBinContent(24,6.405683);
   houtFV_stack_4->SetBinContent(25,10.17141);
   houtFV_stack_4->SetBinContent(26,20.89416);
   houtFV_stack_4->SetBinContent(27,1.838253);
   houtFV_stack_4->SetBinError(0,0.3774012);
   houtFV_stack_4->SetBinError(1,2.743773);
   houtFV_stack_4->SetBinError(2,1.402773);
   houtFV_stack_4->SetBinError(3,1.226303);
   houtFV_stack_4->SetBinError(4,1.308462);
   houtFV_stack_4->SetBinError(5,1.090828);
   houtFV_stack_4->SetBinError(6,1.15216);
   houtFV_stack_4->SetBinError(7,1.220293);
   houtFV_stack_4->SetBinError(8,1.230698);
   houtFV_stack_4->SetBinError(9,0.9478964);
   houtFV_stack_4->SetBinError(10,1.23294);
   houtFV_stack_4->SetBinError(11,1.057532);
   houtFV_stack_4->SetBinError(12,1.278615);
   houtFV_stack_4->SetBinError(13,1.19028);
   houtFV_stack_4->SetBinError(14,1.167717);
   houtFV_stack_4->SetBinError(15,1.244603);
   houtFV_stack_4->SetBinError(16,1.314296);
   houtFV_stack_4->SetBinError(17,1.587334);
   houtFV_stack_4->SetBinError(18,1.421098);
   houtFV_stack_4->SetBinError(19,1.244497);
   houtFV_stack_4->SetBinError(20,1.431005);
   houtFV_stack_4->SetBinError(21,1.162955);
   houtFV_stack_4->SetBinError(22,1.048308);
   houtFV_stack_4->SetBinError(23,1.198956);
   houtFV_stack_4->SetBinError(24,1.235745);
   houtFV_stack_4->SetBinError(25,1.579441);
   houtFV_stack_4->SetBinError(26,2.301507);
   houtFV_stack_4->SetBinError(27,0.6888013);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09813661);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.112236);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06968138);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.314373);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4009035);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1771287);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.07012717);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1522855);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1249247);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1527339);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2815107);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1056831);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6644922);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2192516);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4382001);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.4315809);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4486328);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3506555);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2196091);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4053292);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1874579);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05700669);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.09845476);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04150762);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2615932);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2320654);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.148796);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.0506117);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07847396);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06337503);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1064585);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1814872);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05790597);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2691196);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1672141);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1944726);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.216492);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.200508);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1504821);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1969532);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1713443);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1168463);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02414102);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.10808);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1202462);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4924173);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3683632);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2476281);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5772849);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5786688);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5915838);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.037174);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4557459);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4586421);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.234984);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6327077);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4756072);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9387465);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2798115);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4848928);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3716825);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8402213);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5064898);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2575742);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4599445);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5861233);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4481009);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1912414);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.07633901);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04764111);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04599974);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1961873);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1607849);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.08960133);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.25783);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1858047);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2132819);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3274128);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1887398);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1359842);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0698839);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2363857);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2186879);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.28096);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08731511);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2043121);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1197184);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3779787);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1708382);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1219054);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1527782);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2065498);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1881913);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05792855);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.06649547);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1478583);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.249589);
   hNCpi0inFVres_stack_7->SetBinContent(2,22.9232);
   hNCpi0inFVres_stack_7->SetBinContent(3,29.75805);
   hNCpi0inFVres_stack_7->SetBinContent(4,31.78869);
   hNCpi0inFVres_stack_7->SetBinContent(5,37.84098);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.0188);
   hNCpi0inFVres_stack_7->SetBinContent(7,38.10268);
   hNCpi0inFVres_stack_7->SetBinContent(8,46.80037);
   hNCpi0inFVres_stack_7->SetBinContent(9,44.37304);
   hNCpi0inFVres_stack_7->SetBinContent(10,41.69491);
   hNCpi0inFVres_stack_7->SetBinContent(11,50.71043);
   hNCpi0inFVres_stack_7->SetBinContent(12,44.09062);
   hNCpi0inFVres_stack_7->SetBinContent(13,46.04241);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.37904);
   hNCpi0inFVres_stack_7->SetBinContent(15,44.69424);
   hNCpi0inFVres_stack_7->SetBinContent(16,46.26623);
   hNCpi0inFVres_stack_7->SetBinContent(17,50.86091);
   hNCpi0inFVres_stack_7->SetBinContent(18,44.4875);
   hNCpi0inFVres_stack_7->SetBinContent(19,48.42451);
   hNCpi0inFVres_stack_7->SetBinContent(20,45.85704);
   hNCpi0inFVres_stack_7->SetBinContent(21,47.65742);
   hNCpi0inFVres_stack_7->SetBinContent(22,47.36861);
   hNCpi0inFVres_stack_7->SetBinContent(23,38.33703);
   hNCpi0inFVres_stack_7->SetBinContent(24,35.23768);
   hNCpi0inFVres_stack_7->SetBinContent(25,25.50843);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.618427);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.4343299);
   hNCpi0inFVres_stack_7->SetBinError(0,0.1304081);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8048149);
   hNCpi0inFVres_stack_7->SetBinError(2,1.358061);
   hNCpi0inFVres_stack_7->SetBinError(3,1.524162);
   hNCpi0inFVres_stack_7->SetBinError(4,1.553994);
   hNCpi0inFVres_stack_7->SetBinError(5,1.737328);
   hNCpi0inFVres_stack_7->SetBinError(6,1.975948);
   hNCpi0inFVres_stack_7->SetBinError(7,1.739896);
   hNCpi0inFVres_stack_7->SetBinError(8,2.252443);
   hNCpi0inFVres_stack_7->SetBinError(9,1.996023);
   hNCpi0inFVres_stack_7->SetBinError(10,1.928573);
   hNCpi0inFVres_stack_7->SetBinError(11,2.212315);
   hNCpi0inFVres_stack_7->SetBinError(12,1.893739);
   hNCpi0inFVres_stack_7->SetBinError(13,2.146379);
   hNCpi0inFVres_stack_7->SetBinError(14,2.265909);
   hNCpi0inFVres_stack_7->SetBinError(15,2.101438);
   hNCpi0inFVres_stack_7->SetBinError(16,2.025458);
   hNCpi0inFVres_stack_7->SetBinError(17,2.358139);
   hNCpi0inFVres_stack_7->SetBinError(18,2.075835);
   hNCpi0inFVres_stack_7->SetBinError(19,2.195707);
   hNCpi0inFVres_stack_7->SetBinError(20,2.080968);
   hNCpi0inFVres_stack_7->SetBinError(21,2.154216);
   hNCpi0inFVres_stack_7->SetBinError(22,2.171679);
   hNCpi0inFVres_stack_7->SetBinError(23,1.780962);
   hNCpi0inFVres_stack_7->SetBinError(24,1.777922);
   hNCpi0inFVres_stack_7->SetBinError(25,1.517112);
   hNCpi0inFVres_stack_7->SetBinError(26,0.94009);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1722758);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02674065);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.819435);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.082459);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.150042);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.957452);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.189293);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.683742);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.232508);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.181396);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.02008);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.24546);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.53902);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.08954);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.76364);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.54446);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.25568);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.95727);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.034916);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.930834);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.8587);
   hNCpi0inFVdis_stack_8->SetBinContent(20,13.22488);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.095107);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.83251);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.48833);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.41309);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.294569);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.541967);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.04552541);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02674065);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3068422);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8543986);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7878441);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9503593);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.826119);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8933613);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9955715);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7735298);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.152274);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.13026);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.141169);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.172124);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.113678);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.128232);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.1394);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.383522);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.033704);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.085433);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.217467);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.379214);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9280178);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.118396);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.300651);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.003245);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.022179);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3664163);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.02629165);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.0341084);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.1847543);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1256101);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02419538);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1388276);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1110348);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(1,8.257955);
   hCCpi0inFV_stack_10->SetBinContent(2,14.97828);
   hCCpi0inFV_stack_10->SetBinContent(3,16.83427);
   hCCpi0inFV_stack_10->SetBinContent(4,16.97091);
   hCCpi0inFV_stack_10->SetBinContent(5,15.00328);
   hCCpi0inFV_stack_10->SetBinContent(6,16.78326);
   hCCpi0inFV_stack_10->SetBinContent(7,16.85692);
   hCCpi0inFV_stack_10->SetBinContent(8,21.4062);
   hCCpi0inFV_stack_10->SetBinContent(9,19.24485);
   hCCpi0inFV_stack_10->SetBinContent(10,19.04957);
   hCCpi0inFV_stack_10->SetBinContent(11,16.9503);
   hCCpi0inFV_stack_10->SetBinContent(12,19.16645);
   hCCpi0inFV_stack_10->SetBinContent(13,21.11198);
   hCCpi0inFV_stack_10->SetBinContent(14,22.68325);
   hCCpi0inFV_stack_10->SetBinContent(15,17.53697);
   hCCpi0inFV_stack_10->SetBinContent(16,21.82239);
   hCCpi0inFV_stack_10->SetBinContent(17,22.85672);
   hCCpi0inFV_stack_10->SetBinContent(18,27.44955);
   hCCpi0inFV_stack_10->SetBinContent(19,23.68545);
   hCCpi0inFV_stack_10->SetBinContent(20,26.81166);
   hCCpi0inFV_stack_10->SetBinContent(21,27.75441);
   hCCpi0inFV_stack_10->SetBinContent(22,23.45144);
   hCCpi0inFV_stack_10->SetBinContent(23,24.38743);
   hCCpi0inFV_stack_10->SetBinContent(24,25.679);
   hCCpi0inFV_stack_10->SetBinContent(25,19.23014);
   hCCpi0inFV_stack_10->SetBinContent(26,9.536283);
   hCCpi0inFV_stack_10->SetBinContent(27,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.469574);
   hCCpi0inFV_stack_10->SetBinError(2,1.946653);
   hCCpi0inFV_stack_10->SetBinError(3,2.091362);
   hCCpi0inFV_stack_10->SetBinError(4,2.076519);
   hCCpi0inFV_stack_10->SetBinError(5,1.943213);
   hCCpi0inFV_stack_10->SetBinError(6,1.982346);
   hCCpi0inFV_stack_10->SetBinError(7,2.024934);
   hCCpi0inFV_stack_10->SetBinError(8,2.341015);
   hCCpi0inFV_stack_10->SetBinError(9,2.193573);
   hCCpi0inFV_stack_10->SetBinError(10,2.207833);
   hCCpi0inFV_stack_10->SetBinError(11,2.058107);
   hCCpi0inFV_stack_10->SetBinError(12,2.228367);
   hCCpi0inFV_stack_10->SetBinError(13,2.305947);
   hCCpi0inFV_stack_10->SetBinError(14,2.43408);
   hCCpi0inFV_stack_10->SetBinError(15,2.133804);
   hCCpi0inFV_stack_10->SetBinError(16,2.285893);
   hCCpi0inFV_stack_10->SetBinError(17,2.387464);
   hCCpi0inFV_stack_10->SetBinError(18,2.643572);
   hCCpi0inFV_stack_10->SetBinError(19,2.427963);
   hCCpi0inFV_stack_10->SetBinError(20,2.65872);
   hCCpi0inFV_stack_10->SetBinError(21,2.630814);
   hCCpi0inFV_stack_10->SetBinError(22,2.443004);
   hCCpi0inFV_stack_10->SetBinError(23,2.476317);
   hCCpi0inFV_stack_10->SetBinError(24,2.49247);
   hCCpi0inFV_stack_10->SetBinError(25,2.214616);
   hCCpi0inFV_stack_10->SetBinError(26,1.603628);
   hCCpi0inFV_stack_10->SetBinError(27,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,3.407166);
   hNCinFV_stack_11->SetBinContent(2,8.082598);
   hNCinFV_stack_11->SetBinContent(3,7.924526);
   hNCinFV_stack_11->SetBinContent(4,10.64973);
   hNCinFV_stack_11->SetBinContent(5,11.16857);
   hNCinFV_stack_11->SetBinContent(6,11.45829);
   hNCinFV_stack_11->SetBinContent(7,10.09787);
   hNCinFV_stack_11->SetBinContent(8,12.76292);
   hNCinFV_stack_11->SetBinContent(9,14.34612);
   hNCinFV_stack_11->SetBinContent(10,9.4678);
   hNCinFV_stack_11->SetBinContent(11,12.16363);
   hNCinFV_stack_11->SetBinContent(12,12.75733);
   hNCinFV_stack_11->SetBinContent(13,16.12895);
   hNCinFV_stack_11->SetBinContent(14,13.73098);
   hNCinFV_stack_11->SetBinContent(15,9.137541);
   hNCinFV_stack_11->SetBinContent(16,11.05799);
   hNCinFV_stack_11->SetBinContent(17,11.47341);
   hNCinFV_stack_11->SetBinContent(18,13.04129);
   hNCinFV_stack_11->SetBinContent(19,11.80286);
   hNCinFV_stack_11->SetBinContent(20,13.06747);
   hNCinFV_stack_11->SetBinContent(21,13.04032);
   hNCinFV_stack_11->SetBinContent(22,11.01149);
   hNCinFV_stack_11->SetBinContent(23,16.37001);
   hNCinFV_stack_11->SetBinContent(24,8.352885);
   hNCinFV_stack_11->SetBinContent(25,9.027941);
   hNCinFV_stack_11->SetBinContent(26,1.545269);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,1.064228);
   hNCinFV_stack_11->SetBinError(2,1.352191);
   hNCinFV_stack_11->SetBinError(3,1.605473);
   hNCinFV_stack_11->SetBinError(4,1.751138);
   hNCinFV_stack_11->SetBinError(5,1.81618);
   hNCinFV_stack_11->SetBinError(6,2.125871);
   hNCinFV_stack_11->SetBinError(7,1.638086);
   hNCinFV_stack_11->SetBinError(8,1.886243);
   hNCinFV_stack_11->SetBinError(9,2.345077);
   hNCinFV_stack_11->SetBinError(10,1.558868);
   hNCinFV_stack_11->SetBinError(11,1.974157);
   hNCinFV_stack_11->SetBinError(12,2.060019);
   hNCinFV_stack_11->SetBinError(13,2.350186);
   hNCinFV_stack_11->SetBinError(14,2.132157);
   hNCinFV_stack_11->SetBinError(15,1.650001);
   hNCinFV_stack_11->SetBinError(16,1.654007);
   hNCinFV_stack_11->SetBinError(17,1.727511);
   hNCinFV_stack_11->SetBinError(18,2.003016);
   hNCinFV_stack_11->SetBinError(19,1.959138);
   hNCinFV_stack_11->SetBinError(20,2.039882);
   hNCinFV_stack_11->SetBinError(21,2.023984);
   hNCinFV_stack_11->SetBinError(22,1.792738);
   hNCinFV_stack_11->SetBinError(23,2.308769);
   hNCinFV_stack_11->SetBinError(24,1.425116);
   hNCinFV_stack_11->SetBinError(25,1.577086);
   hNCinFV_stack_11->SetBinError(26,0.5103603);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,3.914433);
   hnumuCCinFV_stack_12->SetBinContent(2,7.498828);
   hnumuCCinFV_stack_12->SetBinContent(3,6.67641);
   hnumuCCinFV_stack_12->SetBinContent(4,9.831228);
   hnumuCCinFV_stack_12->SetBinContent(5,9.474745);
   hnumuCCinFV_stack_12->SetBinContent(6,7.045784);
   hnumuCCinFV_stack_12->SetBinContent(7,11.10653);
   hnumuCCinFV_stack_12->SetBinContent(8,10.86979);
   hnumuCCinFV_stack_12->SetBinContent(9,11.47017);
   hnumuCCinFV_stack_12->SetBinContent(10,13.67126);
   hnumuCCinFV_stack_12->SetBinContent(11,17.92974);
   hnumuCCinFV_stack_12->SetBinContent(12,17.56715);
   hnumuCCinFV_stack_12->SetBinContent(13,18.96851);
   hnumuCCinFV_stack_12->SetBinContent(14,19.37099);
   hnumuCCinFV_stack_12->SetBinContent(15,17.10545);
   hnumuCCinFV_stack_12->SetBinContent(16,16.17309);
   hnumuCCinFV_stack_12->SetBinContent(17,18.74968);
   hnumuCCinFV_stack_12->SetBinContent(18,18.44311);
   hnumuCCinFV_stack_12->SetBinContent(19,26.5006);
   hnumuCCinFV_stack_12->SetBinContent(20,19.51641);
   hnumuCCinFV_stack_12->SetBinContent(21,21.19391);
   hnumuCCinFV_stack_12->SetBinContent(22,20.09269);
   hnumuCCinFV_stack_12->SetBinContent(23,19.90459);
   hnumuCCinFV_stack_12->SetBinContent(24,20.9067);
   hnumuCCinFV_stack_12->SetBinContent(25,16.34433);
   hnumuCCinFV_stack_12->SetBinContent(26,6.112329);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,1.0526);
   hnumuCCinFV_stack_12->SetBinError(2,1.339588);
   hnumuCCinFV_stack_12->SetBinError(3,1.311299);
   hnumuCCinFV_stack_12->SetBinError(4,1.627264);
   hnumuCCinFV_stack_12->SetBinError(5,1.849271);
   hnumuCCinFV_stack_12->SetBinError(6,1.380572);
   hnumuCCinFV_stack_12->SetBinError(7,1.91271);
   hnumuCCinFV_stack_12->SetBinError(8,1.890701);
   hnumuCCinFV_stack_12->SetBinError(9,2.096534);
   hnumuCCinFV_stack_12->SetBinError(10,2.083474);
   hnumuCCinFV_stack_12->SetBinError(11,2.377441);
   hnumuCCinFV_stack_12->SetBinError(12,2.422788);
   hnumuCCinFV_stack_12->SetBinError(13,2.427477);
   hnumuCCinFV_stack_12->SetBinError(14,2.73205);
   hnumuCCinFV_stack_12->SetBinError(15,2.239418);
   hnumuCCinFV_stack_12->SetBinError(16,2.552181);
   hnumuCCinFV_stack_12->SetBinError(17,2.533968);
   hnumuCCinFV_stack_12->SetBinError(18,2.265943);
   hnumuCCinFV_stack_12->SetBinError(19,3.253722);
   hnumuCCinFV_stack_12->SetBinError(20,2.532405);
   hnumuCCinFV_stack_12->SetBinError(21,2.459342);
   hnumuCCinFV_stack_12->SetBinError(22,2.556976);
   hnumuCCinFV_stack_12->SetBinError(23,2.437761);
   hnumuCCinFV_stack_12->SetBinError(24,2.757533);
   hnumuCCinFV_stack_12->SetBinError(25,3.180521);
   hnumuCCinFV_stack_12->SetBinError(26,1.76483);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.6210482);
   hnueCCinFV_stack_13->SetBinContent(4,0.6419483);
   hnueCCinFV_stack_13->SetBinContent(5,0.4424184);
   hnueCCinFV_stack_13->SetBinContent(6,0.4647761);
   hnueCCinFV_stack_13->SetBinContent(7,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(9,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(10,1.776738);
   hnueCCinFV_stack_13->SetBinContent(11,0.8380547);
   hnueCCinFV_stack_13->SetBinContent(12,1.30886);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.9864399);
   hnueCCinFV_stack_13->SetBinContent(17,0.9047992);
   hnueCCinFV_stack_13->SetBinContent(18,1.440728);
   hnueCCinFV_stack_13->SetBinContent(19,1.137711);
   hnueCCinFV_stack_13->SetBinContent(20,1.020533);
   hnueCCinFV_stack_13->SetBinContent(21,0.7820846);
   hnueCCinFV_stack_13->SetBinContent(22,0.7298748);
   hnueCCinFV_stack_13->SetBinContent(23,3.338256);
   hnueCCinFV_stack_13->SetBinContent(24,0.6263665);
   hnueCCinFV_stack_13->SetBinContent(25,0.9528184);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.4459531);
   hnueCCinFV_stack_13->SetBinError(4,0.373277);
   hnueCCinFV_stack_13->SetBinError(5,0.3147324);
   hnueCCinFV_stack_13->SetBinError(6,0.3293567);
   hnueCCinFV_stack_13->SetBinError(7,0.2871419);
   hnueCCinFV_stack_13->SetBinError(8,0.2538659);
   hnueCCinFV_stack_13->SetBinError(9,0.4213728);
   hnueCCinFV_stack_13->SetBinError(10,1.240334);
   hnueCCinFV_stack_13->SetBinError(11,0.4200657);
   hnueCCinFV_stack_13->SetBinError(12,0.613987);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.6560483);
   hnueCCinFV_stack_13->SetBinError(17,0.4716153);
   hnueCCinFV_stack_13->SetBinError(18,0.6114525);
   hnueCCinFV_stack_13->SetBinError(19,0.5970042);
   hnueCCinFV_stack_13->SetBinError(20,0.5892049);
   hnueCCinFV_stack_13->SetBinError(21,0.463181);
   hnueCCinFV_stack_13->SetBinError(22,0.4417782);
   hnueCCinFV_stack_13->SetBinError(23,1.740761);
   hnueCCinFV_stack_13->SetBinError(24,0.3630167);
   hnueCCinFV_stack_13->SetBinError(25,0.4910883);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__14->SetBinContent(0,1.343772);
   hmcerror__14->SetBinContent(1,62.14846);
   hmcerror__14->SetBinContent(2,69.4913);
   hmcerror__14->SetBinContent(3,81.8272);
   hmcerror__14->SetBinContent(4,94.23907);
   hmcerror__14->SetBinContent(5,100.4102);
   hmcerror__14->SetBinContent(6,103.15);
   hmcerror__14->SetBinContent(7,100.535);
   hmcerror__14->SetBinContent(8,113.7291);
   hmcerror__14->SetBinContent(9,117.3568);
   hmcerror__14->SetBinContent(10,117.5487);
   hmcerror__14->SetBinContent(11,132.394);
   hmcerror__14->SetBinContent(12,126.3463);
   hmcerror__14->SetBinContent(13,135.5271);
   hmcerror__14->SetBinContent(14,137.1251);
   hmcerror__14->SetBinContent(15,118.7109);
   hmcerror__14->SetBinContent(16,129.9684);
   hmcerror__14->SetBinContent(17,141.8704);
   hmcerror__14->SetBinContent(18,140.3613);
   hmcerror__14->SetBinContent(19,147.12);
   hmcerror__14->SetBinContent(20,143.9203);
   hmcerror__14->SetBinContent(21,152.7918);
   hmcerror__14->SetBinContent(22,138.8964);
   hmcerror__14->SetBinContent(23,149.6263);
   hmcerror__14->SetBinContent(24,122.2916);
   hmcerror__14->SetBinContent(25,104.0628);
   hmcerror__14->SetBinContent(26,63.53485);
   hmcerror__14->SetBinContent(27,3.318577);
   hmcerror__14->SetBinError(0,0.5514377);
   hmcerror__14->SetBinError(1,22.93341);
   hmcerror__14->SetBinError(2,32.4319);
   hmcerror__14->SetBinError(3,34.13066);
   hmcerror__14->SetBinError(4,36.9861);
   hmcerror__14->SetBinError(5,45.51226);
   hmcerror__14->SetBinError(6,41.63698);
   hmcerror__14->SetBinError(7,40.81547);
   hmcerror__14->SetBinError(8,49.55789);
   hmcerror__14->SetBinError(9,45.39587);
   hmcerror__14->SetBinError(10,42.79453);
   hmcerror__14->SetBinError(11,45.91617);
   hmcerror__14->SetBinError(12,52.05781);
   hmcerror__14->SetBinError(13,48.7233);
   hmcerror__14->SetBinError(14,46.64445);
   hmcerror__14->SetBinError(15,46.55818);
   hmcerror__14->SetBinError(16,46.92246);
   hmcerror__14->SetBinError(17,45.2763);
   hmcerror__14->SetBinError(18,44.12731);
   hmcerror__14->SetBinError(19,46.86223);
   hmcerror__14->SetBinError(20,49.77684);
   hmcerror__14->SetBinError(21,51.80176);
   hmcerror__14->SetBinError(22,47.89324);
   hmcerror__14->SetBinError(23,50.44119);
   hmcerror__14->SetBinError(24,42.76146);
   hmcerror__14->SetBinError(25,40.99187);
   hmcerror__14->SetBinError(26,22.93567);
   hmcerror__14->SetBinError(27,5.467923);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3017[26] = {
   54,
   45,
   94,
   91,
   78,
   86,
   102,
   91,
   115,
   114,
   124,
   103,
   119,
   100,
   120,
   118,
   120,
   122,
   123,
   110,
   132,
   122,
   99,
   98,
   89,
   46};
   Double_t _felx3017[26] = {
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
   Double_t _fely3017[26] = {
   7.4785,
   6.8416,
   9.8173,
   9.6617,
   8.9562,
   9.3967,
   10.0995,
   9.6617,
   10.72381,
   10.67708,
   11.13553,
   10.14889,
   10.90871,
   10.1212,
   10.95445,
   10.86278,
   10.95445,
   11.04536,
   11.09054,
   10.48809,
   11.48913,
   11.04536,
   10.0712,
   10.0209,
   9.5566,
   6.9153};
   Double_t _fehx3017[26] = {
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
   Double_t _fehy3017[26] = {
   7.275,
   6.637,
   9.616,
   9.46,
   8.7542,
   9.1951,
   10.0995,
   9.46,
   10.72381,
   10.67708,
   11.13553,
   10.14889,
   10.90871,
   9.92,
   10.95445,
   10.86278,
   10.95445,
   11.04536,
   11.09054,
   10.48809,
   11.48913,
   11.04536,
   9.87,
   9.82,
   9.3552,
   6.7108};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,286);
   Graph_Graph3017->SetMinimum(27.62533);
   Graph_Graph3017->SetMaximum(154.0222);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2615.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.7","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.6","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 200.6","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.1","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.4","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.5","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.1","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.4","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3018[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3018[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[26] = {
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
   Double_t _fely3018[26] = {
   0.3690102,
   0.4667045,
   0.4171066,
   0.392471,
   0.4532635,
   0.4036547,
   0.4059829,
   0.4357536,
   0.3868191,
   0.3640578,
   0.3468145,
   0.4120247,
   0.3595097,
   0.3401597,
   0.3921979,
   0.3610297,
   0.3191384,
   0.3143836,
   0.3185306,
   0.345864,
   0.3390349,
   0.3448126,
   0.3371144,
   0.3496679,
   0.3939146,
   0.3609935};
   Double_t _fehx3018[26] = {
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
   Double_t _fehy3018[26] = {
   0.3690102,
   0.4667045,
   0.4171066,
   0.392471,
   0.4532635,
   0.4036547,
   0.4059829,
   0.4357536,
   0.3868191,
   0.3640578,
   0.3468145,
   0.4120247,
   0.3595097,
   0.3401597,
   0.3921979,
   0.3610297,
   0.3191384,
   0.3143836,
   0.3185306,
   0.345864,
   0.3390349,
   0.3448126,
   0.3371144,
   0.3496679,
   0.3939146,
   0.3609935};
   grae = new TGraphAsymmErrors(26,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,286);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3019[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[26] = {
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
   Double_t _fely3019[26] = {
   0.2916327,
   0.3848514,
   0.3738153,
   0.3269671,
   0.3985109,
   0.3774326,
   0.3718809,
   0.3832157,
   0.3293236,
   0.328285,
   0.3239035,
   0.3261788,
   0.3037771,
   0.3215033,
   0.3368052,
   0.3187259,
   0.3015789,
   0.2935421,
   0.296976,
   0.3046439,
   0.2927828,
   0.3149698,
   0.2934119,
   0.3091355,
   0.2895871,
   0.2356966};
   Double_t _fehx3019[26] = {
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
   Double_t _fehy3019[26] = {
   0.2916327,
   0.3848514,
   0.3738153,
   0.3269671,
   0.3985109,
   0.3774326,
   0.3718809,
   0.3832157,
   0.3293236,
   0.328285,
   0.3239035,
   0.3261788,
   0.3037771,
   0.3215033,
   0.3368052,
   0.3187259,
   0.3015789,
   0.2935421,
   0.296976,
   0.3046439,
   0.2927828,
   0.3149698,
   0.2934119,
   0.3091355,
   0.2895871,
   0.2356966};
   grae = new TGraphAsymmErrors(26,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,286);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[26] = {
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3020[26] = {
   0.8688872,
   0.6475631,
   1.148762,
   0.9656293,
   0.7768138,
   0.8337374,
   1.014572,
   0.8001467,
   0.9799174,
   0.9698106,
   0.9365981,
   0.8152196,
   0.8780535,
   0.7292609,
   1.010859,
   0.9079128,
   0.8458423,
   0.8691853,
   0.8360521,
   0.7643121,
   0.8639205,
   0.8783524,
   0.6616483,
   0.801363,
   0.8552526,
   0.724012};
   Double_t _felx3020[26] = {
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
   Double_t _fely3020[26] = {
   0.1203328,
   0.09845261,
   0.119976,
   0.1025233,
   0.08919616,
   0.09109744,
   0.1004576,
   0.08495359,
   0.09137777,
   0.09083109,
   0.084109,
   0.08032597,
   0.08049103,
   0.07380995,
   0.09227836,
   0.08358015,
   0.07721448,
   0.07869234,
   0.07538428,
   0.0728743,
   0.07519463,
   0.07952229,
   0.06730901,
   0.08194264,
   0.09183491,
   0.1088426};
   Double_t _fehx3020[26] = {
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
   Double_t _fehy3020[26] = {
   0.1170584,
   0.09550836,
   0.1175159,
   0.100383,
   0.08718441,
   0.08914301,
   0.1004576,
   0.08318008,
   0.09137777,
   0.09083109,
   0.084109,
   0.08032597,
   0.08049103,
   0.07234268,
   0.09227836,
   0.08358015,
   0.07721448,
   0.07869234,
   0.07538428,
   0.0728743,
   0.07519463,
   0.07952229,
   0.06596433,
   0.08029984,
   0.08989954,
   0.1056239};
   grae = new TGraphAsymmErrors(26,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,286);
   Graph_Graph3020->SetMinimum(0.4773937);
   Graph_Graph3020->SetMaximum(1.337995);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,260,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
