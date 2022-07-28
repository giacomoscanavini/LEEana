#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Jun  2 18:57:12 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-1.307692,-6.094472,1.25641,673.9203);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__4->SetBinContent(1,82.82535);
   hmc__4->SetBinContent(2,70.52203);
   hmc__4->SetBinContent(3,65.80393);
   hmc__4->SetBinContent(4,59.82259);
   hmc__4->SetBinContent(5,61.95854);
   hmc__4->SetBinContent(6,62.20249);
   hmc__4->SetBinContent(7,63.85138);
   hmc__4->SetBinContent(8,65.47198);
   hmc__4->SetBinContent(9,61.11058);
   hmc__4->SetBinContent(10,68.56572);
   hmc__4->SetBinContent(11,74.37062);
   hmc__4->SetBinContent(12,74.17058);
   hmc__4->SetBinContent(13,87.13132);
   hmc__4->SetBinContent(14,93.66112);
   hmc__4->SetBinContent(15,100.9531);
   hmc__4->SetBinContent(16,96.46118);
   hmc__4->SetBinContent(17,100.0251);
   hmc__4->SetBinContent(18,110.3713);
   hmc__4->SetBinContent(19,125.7708);
   hmc__4->SetBinContent(20,142.3752);
   hmc__4->SetBinContent(21,166.2415);
   hmc__4->SetBinContent(22,171.0492);
   hmc__4->SetBinContent(23,193.255);
   hmc__4->SetBinContent(24,240.4169);
   hmc__4->SetBinContent(25,304.7236);
   hmc__4->SetBinError(1,21.77671);
   hmc__4->SetBinError(2,18.73293);
   hmc__4->SetBinError(3,18.51473);
   hmc__4->SetBinError(4,14.81104);
   hmc__4->SetBinError(5,15.08488);
   hmc__4->SetBinError(6,15.30726);
   hmc__4->SetBinError(7,15.49781);
   hmc__4->SetBinError(8,15.15561);
   hmc__4->SetBinError(9,15.39576);
   hmc__4->SetBinError(10,15.28634);
   hmc__4->SetBinError(11,18.32135);
   hmc__4->SetBinError(12,17.97391);
   hmc__4->SetBinError(13,20.75645);
   hmc__4->SetBinError(14,22.67384);
   hmc__4->SetBinError(15,24.93414);
   hmc__4->SetBinError(16,26.23706);
   hmc__4->SetBinError(17,29.04255);
   hmc__4->SetBinError(18,32.07832);
   hmc__4->SetBinError(19,37.76301);
   hmc__4->SetBinError(20,43.37932);
   hmc__4->SetBinError(21,47.50615);
   hmc__4->SetBinError(22,49.01873);
   hmc__4->SetBinError(23,50.77198);
   hmc__4->SetBinError(24,58.00857);
   hmc__4->SetBinError(25,71.32847);
   hmc__4->SetBinError(26,0.3895343);
   hmc__4->SetMinimum(-6.094472);
   hmc__4->SetMaximum(639.9196);
   hmc__4->SetEntries(2712.362);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-1,1);
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(319.9598);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.560876);
   hbadmatch_stack_1->SetBinContent(2,1.307977);
   hbadmatch_stack_1->SetBinContent(3,1.125349);
   hbadmatch_stack_1->SetBinContent(4,1.383631);
   hbadmatch_stack_1->SetBinContent(5,1.570342);
   hbadmatch_stack_1->SetBinContent(6,1.125349);
   hbadmatch_stack_1->SetBinContent(7,2.194063);
   hbadmatch_stack_1->SetBinContent(8,0.6133513);
   hbadmatch_stack_1->SetBinContent(9,1.153903);
   hbadmatch_stack_1->SetBinContent(10,1.988258);
   hbadmatch_stack_1->SetBinContent(11,0.9674867);
   hbadmatch_stack_1->SetBinContent(12,2.558578);
   hbadmatch_stack_1->SetBinContent(13,1.247267);
   hbadmatch_stack_1->SetBinContent(14,3.612598);
   hbadmatch_stack_1->SetBinContent(15,4.98921);
   hbadmatch_stack_1->SetBinContent(16,2.868194);
   hbadmatch_stack_1->SetBinContent(17,2.245695);
   hbadmatch_stack_1->SetBinContent(18,1.701317);
   hbadmatch_stack_1->SetBinContent(19,1.529949);
   hbadmatch_stack_1->SetBinContent(20,2.841133);
   hbadmatch_stack_1->SetBinContent(21,4.019544);
   hbadmatch_stack_1->SetBinContent(22,3.328774);
   hbadmatch_stack_1->SetBinContent(23,3.880896);
   hbadmatch_stack_1->SetBinContent(24,2.769813);
   hbadmatch_stack_1->SetBinContent(25,4.32831);
   hbadmatch_stack_1->SetBinError(1,0.8556457);
   hbadmatch_stack_1->SetBinError(2,0.6751438);
   hbadmatch_stack_1->SetBinError(3,0.5194673);
   hbadmatch_stack_1->SetBinError(4,0.5785266);
   hbadmatch_stack_1->SetBinError(5,0.5552036);
   hbadmatch_stack_1->SetBinError(6,0.5194673);
   hbadmatch_stack_1->SetBinError(7,0.7594044);
   hbadmatch_stack_1->SetBinError(8,0.3415087);
   hbadmatch_stack_1->SetBinError(9,0.6080807);
   hbadmatch_stack_1->SetBinError(10,0.7836282);
   hbadmatch_stack_1->SetBinError(11,0.5102383);
   hbadmatch_stack_1->SetBinError(12,0.8045301);
   hbadmatch_stack_1->SetBinError(13,0.5873537);
   hbadmatch_stack_1->SetBinError(14,1.031951);
   hbadmatch_stack_1->SetBinError(15,2.154395);
   hbadmatch_stack_1->SetBinError(16,1.279721);
   hbadmatch_stack_1->SetBinError(17,0.7709018);
   hbadmatch_stack_1->SetBinError(18,0.6642021);
   hbadmatch_stack_1->SetBinError(19,0.6579097);
   hbadmatch_stack_1->SetBinError(20,0.8982354);
   hbadmatch_stack_1->SetBinError(21,1.189244);
   hbadmatch_stack_1->SetBinError(22,0.9996281);
   hbadmatch_stack_1->SetBinError(23,1.073865);
   hbadmatch_stack_1->SetBinError(24,0.7808962);
   hbadmatch_stack_1->SetBinError(25,1.060461);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.3896828);
   hext_stack_2->SetBinContent(2,0.5570828);
   hext_stack_2->SetBinContent(3,0.3059099);
   hext_stack_2->SetBinContent(4,0.2761429);
   hext_stack_2->SetBinContent(5,0.2188956);
   hext_stack_2->SetBinContent(6,0.1380715);
   hext_stack_2->SetBinContent(7,0.8385887);
   hext_stack_2->SetBinContent(8,0.6143302);
   hext_stack_2->SetBinContent(12,0.2188956);
   hext_stack_2->SetBinContent(14,0.2188956);
   hext_stack_2->SetBinContent(15,2.044474);
   hext_stack_2->SetBinContent(16,0.1651799);
   hext_stack_2->SetBinContent(18,0.5833645);
   hext_stack_2->SetBinContent(19,0.89527);
   hext_stack_2->SetBinContent(20,0.5570828);
   hext_stack_2->SetBinContent(21,0.4794168);
   hext_stack_2->SetBinContent(22,1.275688);
   hext_stack_2->SetBinContent(23,0.2188956);
   hext_stack_2->SetBinContent(24,0.7839588);
   hext_stack_2->SetBinContent(25,0.6769639);
   hext_stack_2->SetBinError(1,0.2870053);
   hext_stack_2->SetBinError(2,0.4028472);
   hext_stack_2->SetBinError(3,0.2153806);
   hext_stack_2->SetBinError(4,0.1952625);
   hext_stack_2->SetBinError(5,0.2188956);
   hext_stack_2->SetBinError(6,0.1380715);
   hext_stack_2->SetBinError(7,0.5064279);
   hext_stack_2->SetBinError(8,0.39051);
   hext_stack_2->SetBinError(12,0.2188956);
   hext_stack_2->SetBinError(14,0.2188956);
   hext_stack_2->SetBinError(15,1.090892);
   hext_stack_2->SetBinError(16,0.1651799);
   hext_stack_2->SetBinError(18,0.45339);
   hext_stack_2->SetBinError(19,0.5259814);
   hext_stack_2->SetBinError(20,0.4028472);
   hext_stack_2->SetBinError(21,0.3402743);
   hext_stack_2->SetBinError(22,0.5285705);
   hext_stack_2->SetBinError(23,0.2188956);
   hext_stack_2->SetBinError(24,0.3950683);
   hext_stack_2->SetBinError(25,0.3444523);
   hext_stack_2->SetEntries(50);

   ci = 1449;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,3.864046);
   hdirt_stack_3->SetBinContent(2,4.06158);
   hdirt_stack_3->SetBinContent(3,2.517386);
   hdirt_stack_3->SetBinContent(4,1.868591);
   hdirt_stack_3->SetBinContent(5,3.565599);
   hdirt_stack_3->SetBinContent(6,5.725457);
   hdirt_stack_3->SetBinContent(7,8.056898);
   hdirt_stack_3->SetBinContent(8,9.208854);
   hdirt_stack_3->SetBinContent(9,1.78639);
   hdirt_stack_3->SetBinContent(10,6.705829);
   hdirt_stack_3->SetBinContent(11,10.59583);
   hdirt_stack_3->SetBinContent(12,4.620993);
   hdirt_stack_3->SetBinContent(13,12.71978);
   hdirt_stack_3->SetBinContent(14,4.143782);
   hdirt_stack_3->SetBinContent(15,10.80212);
   hdirt_stack_3->SetBinContent(16,6.877413);
   hdirt_stack_3->SetBinContent(17,5.918582);
   hdirt_stack_3->SetBinContent(18,5.82202);
   hdirt_stack_3->SetBinContent(19,11.44373);
   hdirt_stack_3->SetBinContent(20,12.76727);
   hdirt_stack_3->SetBinContent(21,11.38748);
   hdirt_stack_3->SetBinContent(22,7.530616);
   hdirt_stack_3->SetBinContent(23,9.627043);
   hdirt_stack_3->SetBinContent(24,15.32655);
   hdirt_stack_3->SetBinContent(25,11.48405);
   hdirt_stack_3->SetBinError(1,1.437918);
   hdirt_stack_3->SetBinError(2,1.232114);
   hdirt_stack_3->SetBinError(3,0.9575503);
   hdirt_stack_3->SetBinError(4,0.840497);
   hdirt_stack_3->SetBinError(5,1.22225);
   hdirt_stack_3->SetBinError(6,1.72489);
   hdirt_stack_3->SetBinError(7,2.091787);
   hdirt_stack_3->SetBinError(8,2.099774);
   hdirt_stack_3->SetBinError(9,0.8039566);
   hdirt_stack_3->SetBinError(10,1.757767);
   hdirt_stack_3->SetBinError(11,2.165381);
   hdirt_stack_3->SetBinError(12,1.367364);
   hdirt_stack_3->SetBinError(13,2.678849);
   hdirt_stack_3->SetBinError(14,1.256262);
   hdirt_stack_3->SetBinError(15,2.395835);
   hdirt_stack_3->SetBinError(16,1.734567);
   hdirt_stack_3->SetBinError(17,1.513479);
   hdirt_stack_3->SetBinError(18,1.622631);
   hdirt_stack_3->SetBinError(19,2.480261);
   hdirt_stack_3->SetBinError(20,2.470657);
   hdirt_stack_3->SetBinError(21,2.371312);
   hdirt_stack_3->SetBinError(22,1.831478);
   hdirt_stack_3->SetBinError(23,2.123275);
   hdirt_stack_3->SetBinError(24,2.819933);
   hdirt_stack_3->SetBinError(25,2.298001);
   hdirt_stack_3->SetEntries(428);

   ci = 1450;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,5.807661);
   houtFV_stack_4->SetBinContent(2,2.369529);
   houtFV_stack_4->SetBinContent(3,2.145881);
   houtFV_stack_4->SetBinContent(4,1.804013);
   houtFV_stack_4->SetBinContent(5,2.537621);
   houtFV_stack_4->SetBinContent(6,2.245626);
   houtFV_stack_4->SetBinContent(7,1.921348);
   houtFV_stack_4->SetBinContent(8,1.805704);
   houtFV_stack_4->SetBinContent(9,1.946855);
   houtFV_stack_4->SetBinContent(10,1.517089);
   houtFV_stack_4->SetBinContent(11,2.247316);
   houtFV_stack_4->SetBinContent(12,2.680625);
   houtFV_stack_4->SetBinContent(13,1.962082);
   houtFV_stack_4->SetBinContent(14,3.215802);
   houtFV_stack_4->SetBinContent(15,3.550056);
   houtFV_stack_4->SetBinContent(16,3.714533);
   houtFV_stack_4->SetBinContent(17,3.196676);
   houtFV_stack_4->SetBinContent(18,4.789432);
   houtFV_stack_4->SetBinContent(19,3.766095);
   houtFV_stack_4->SetBinContent(20,5.784508);
   houtFV_stack_4->SetBinContent(21,8.25281);
   houtFV_stack_4->SetBinContent(22,5.560119);
   houtFV_stack_4->SetBinContent(23,6.790738);
   houtFV_stack_4->SetBinContent(24,8.420487);
   houtFV_stack_4->SetBinContent(25,7.039016);
   houtFV_stack_4->SetBinError(1,1.226418);
   houtFV_stack_4->SetBinError(2,0.7814824);
   houtFV_stack_4->SetBinError(3,0.785499);
   houtFV_stack_4->SetBinError(4,0.7075491);
   houtFV_stack_4->SetBinError(5,0.8329108);
   houtFV_stack_4->SetBinError(6,0.7332843);
   houtFV_stack_4->SetBinError(7,0.6997698);
   houtFV_stack_4->SetBinError(8,0.7080169);
   houtFV_stack_4->SetBinError(9,0.7299795);
   houtFV_stack_4->SetBinError(10,0.5887087);
   houtFV_stack_4->SetBinError(11,0.7337357);
   houtFV_stack_4->SetBinError(12,0.8031871);
   houtFV_stack_4->SetBinError(13,0.6204697);
   houtFV_stack_4->SetBinError(14,0.9294751);
   houtFV_stack_4->SetBinError(15,0.9080328);
   houtFV_stack_4->SetBinError(16,0.9615599);
   houtFV_stack_4->SetBinError(17,0.9630939);
   houtFV_stack_4->SetBinError(18,1.112676);
   houtFV_stack_4->SetBinError(19,0.9410676);
   houtFV_stack_4->SetBinError(20,1.230607);
   houtFV_stack_4->SetBinError(21,1.448299);
   houtFV_stack_4->SetBinError(22,1.081126);
   houtFV_stack_4->SetBinError(23,1.331697);
   houtFV_stack_4->SetBinError(24,1.359178);
   houtFV_stack_4->SetBinError(25,1.331588);
   houtFV_stack_4->SetEntries(411);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.312716);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4445103);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1452;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8368403);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4593539);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6277541);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.06004);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.7949858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.617376);
   hNCpi0inFVqe_stack_6->SetBinContent(23,2.34328);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.129786);
   hNCpi0inFVqe_stack_6->SetBinContent(25,2.189994);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3675891);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1818869);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2996304);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3759641);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2483746);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4128074);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.5375177);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2665161);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.4951149);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1453;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,31.54074);
   hNCpi0inFVres_stack_7->SetBinContent(2,33.77276);
   hNCpi0inFVres_stack_7->SetBinContent(3,29.43462);
   hNCpi0inFVres_stack_7->SetBinContent(4,28.67003);
   hNCpi0inFVres_stack_7->SetBinContent(5,30.48055);
   hNCpi0inFVres_stack_7->SetBinContent(6,28.99321);
   hNCpi0inFVres_stack_7->SetBinContent(7,28.8012);
   hNCpi0inFVres_stack_7->SetBinContent(8,29.97503);
   hNCpi0inFVres_stack_7->SetBinContent(9,30.56041);
   hNCpi0inFVres_stack_7->SetBinContent(10,31.19547);
   hNCpi0inFVres_stack_7->SetBinContent(11,33.42583);
   hNCpi0inFVres_stack_7->SetBinContent(12,37.80616);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.60654);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.33497);
   hNCpi0inFVres_stack_7->SetBinContent(15,46.5472);
   hNCpi0inFVres_stack_7->SetBinContent(16,47.06101);
   hNCpi0inFVres_stack_7->SetBinContent(17,50.37331);
   hNCpi0inFVres_stack_7->SetBinContent(18,53.87976);
   hNCpi0inFVres_stack_7->SetBinContent(19,64.22706);
   hNCpi0inFVres_stack_7->SetBinContent(20,73.1768);
   hNCpi0inFVres_stack_7->SetBinContent(21,79.12673);
   hNCpi0inFVres_stack_7->SetBinContent(22,87.25163);
   hNCpi0inFVres_stack_7->SetBinContent(23,100.1138);
   hNCpi0inFVres_stack_7->SetBinContent(24,116.8998);
   hNCpi0inFVres_stack_7->SetBinContent(25,133.1639);
   hNCpi0inFVres_stack_7->SetBinError(1,1.807245);
   hNCpi0inFVres_stack_7->SetBinError(2,1.939586);
   hNCpi0inFVres_stack_7->SetBinError(3,1.789028);
   hNCpi0inFVres_stack_7->SetBinError(4,1.788157);
   hNCpi0inFVres_stack_7->SetBinError(5,1.838773);
   hNCpi0inFVres_stack_7->SetBinError(6,1.777423);
   hNCpi0inFVres_stack_7->SetBinError(7,1.692397);
   hNCpi0inFVres_stack_7->SetBinError(8,1.742075);
   hNCpi0inFVres_stack_7->SetBinError(9,1.7503);
   hNCpi0inFVres_stack_7->SetBinError(10,1.774665);
   hNCpi0inFVres_stack_7->SetBinError(11,1.899148);
   hNCpi0inFVres_stack_7->SetBinError(12,2.040235);
   hNCpi0inFVres_stack_7->SetBinError(13,2.07468);
   hNCpi0inFVres_stack_7->SetBinError(14,2.301912);
   hNCpi0inFVres_stack_7->SetBinError(15,2.28996);
   hNCpi0inFVres_stack_7->SetBinError(16,2.239752);
   hNCpi0inFVres_stack_7->SetBinError(17,2.302996);
   hNCpi0inFVres_stack_7->SetBinError(18,2.364179);
   hNCpi0inFVres_stack_7->SetBinError(19,2.625219);
   hNCpi0inFVres_stack_7->SetBinError(20,2.829452);
   hNCpi0inFVres_stack_7->SetBinError(21,2.942826);
   hNCpi0inFVres_stack_7->SetBinError(22,3.067632);
   hNCpi0inFVres_stack_7->SetBinError(23,3.298578);
   hNCpi0inFVres_stack_7->SetBinError(24,3.572854);
   hNCpi0inFVres_stack_7->SetBinError(25,3.802187);
   hNCpi0inFVres_stack_7->SetEntries(24019);

   ci = 1454;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.65285);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.283246);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.784206);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.881603);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.478714);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.225286);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.695849);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.95816);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.201378);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.147658);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.880939);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.298032);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.174973);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.244808);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.01023);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.19524);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.20663);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.036816);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.08423);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.48462);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.68732);
   hNCpi0inFVdis_stack_8->SetBinContent(22,15.28528);
   hNCpi0inFVdis_stack_8->SetBinContent(23,22.21298);
   hNCpi0inFVdis_stack_8->SetBinContent(24,26.39217);
   hNCpi0inFVdis_stack_8->SetBinContent(25,39.29365);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8476352);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6913873);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7129592);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7491614);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7184874);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6958296);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6752009);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6336692);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7395758);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8324224);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7581132);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.754941);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7429451);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8183147);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8318762);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8760115);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.101707);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9980273);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.111962);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.012417);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.10206);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.289865);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.56148);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.645957);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.031775);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1455;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2368179);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1155977);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1456;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1457;
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
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,13.77021);
   hCCpi0inFV_stack_11->SetBinContent(2,9.860181);
   hCCpi0inFV_stack_11->SetBinContent(3,13.8678);
   hCCpi0inFV_stack_11->SetBinContent(4,9.098307);
   hCCpi0inFV_stack_11->SetBinContent(5,9.367969);
   hCCpi0inFV_stack_11->SetBinContent(6,7.881904);
   hCCpi0inFV_stack_11->SetBinContent(7,9.819844);
   hCCpi0inFV_stack_11->SetBinContent(8,7.867297);
   hCCpi0inFV_stack_11->SetBinContent(9,10.26315);
   hCCpi0inFV_stack_11->SetBinContent(10,9.527848);
   hCCpi0inFV_stack_11->SetBinContent(11,8.215533);
   hCCpi0inFV_stack_11->SetBinContent(12,8.999408);
   hCCpi0inFV_stack_11->SetBinContent(13,10.47176);
   hCCpi0inFV_stack_11->SetBinContent(14,15.10683);
   hCCpi0inFV_stack_11->SetBinContent(15,9.913434);
   hCCpi0inFV_stack_11->SetBinContent(16,12.64777);
   hCCpi0inFV_stack_11->SetBinContent(17,13.90891);
   hCCpi0inFV_stack_11->SetBinContent(18,15.9167);
   hCCpi0inFV_stack_11->SetBinContent(19,14.13708);
   hCCpi0inFV_stack_11->SetBinContent(20,16.80191);
   hCCpi0inFV_stack_11->SetBinContent(21,27.75551);
   hCCpi0inFV_stack_11->SetBinContent(22,27.55517);
   hCCpi0inFV_stack_11->SetBinContent(23,26.66045);
   hCCpi0inFV_stack_11->SetBinContent(24,43.81802);
   hCCpi0inFV_stack_11->SetBinContent(25,61.46941);
   hCCpi0inFV_stack_11->SetBinError(1,1.80637);
   hCCpi0inFV_stack_11->SetBinError(2,1.618515);
   hCCpi0inFV_stack_11->SetBinError(3,1.871432);
   hCCpi0inFV_stack_11->SetBinError(4,1.561019);
   hCCpi0inFV_stack_11->SetBinError(5,1.511774);
   hCCpi0inFV_stack_11->SetBinError(6,1.300878);
   hCCpi0inFV_stack_11->SetBinError(7,1.5699);
   hCCpi0inFV_stack_11->SetBinError(8,1.372935);
   hCCpi0inFV_stack_11->SetBinError(9,1.581875);
   hCCpi0inFV_stack_11->SetBinError(10,1.519392);
   hCCpi0inFV_stack_11->SetBinError(11,1.366228);
   hCCpi0inFV_stack_11->SetBinError(12,1.468825);
   hCCpi0inFV_stack_11->SetBinError(13,1.614881);
   hCCpi0inFV_stack_11->SetBinError(14,1.944027);
   hCCpi0inFV_stack_11->SetBinError(15,1.606631);
   hCCpi0inFV_stack_11->SetBinError(16,1.820357);
   hCCpi0inFV_stack_11->SetBinError(17,1.928368);
   hCCpi0inFV_stack_11->SetBinError(18,2.000316);
   hCCpi0inFV_stack_11->SetBinError(19,1.873578);
   hCCpi0inFV_stack_11->SetBinError(20,2.082304);
   hCCpi0inFV_stack_11->SetBinError(21,2.68221);
   hCCpi0inFV_stack_11->SetBinError(22,2.602655);
   hCCpi0inFV_stack_11->SetBinError(23,2.573466);
   hCCpi0inFV_stack_11->SetBinError(24,3.320809);
   hCCpi0inFV_stack_11->SetBinError(25,3.97286);
   hCCpi0inFV_stack_11->SetEntries(1778);

   ci = 1458;
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
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,8.10773);
   hNCinFV_stack_12->SetBinContent(2,5.286565);
   hNCinFV_stack_12->SetBinContent(3,4.983344);
   hNCinFV_stack_12->SetBinContent(4,4.35117);
   hNCinFV_stack_12->SetBinContent(5,3.124387);
   hNCinFV_stack_12->SetBinContent(6,3.66297);
   hNCinFV_stack_12->SetBinContent(7,2.984305);
   hNCinFV_stack_12->SetBinContent(8,3.124387);
   hNCinFV_stack_12->SetBinContent(9,4.301298);
   hNCinFV_stack_12->SetBinContent(10,1.176911);
   hNCinFV_stack_12->SetBinContent(11,3.264468);
   hNCinFV_stack_12->SetBinContent(12,3.558154);
   hNCinFV_stack_12->SetBinContent(13,3.127768);
   hNCinFV_stack_12->SetBinContent(14,2.249007);
   hNCinFV_stack_12->SetBinContent(15,3.714533);
   hNCinFV_stack_12->SetBinContent(16,3.719604);
   hNCinFV_stack_12->SetBinContent(17,3.319412);
   hNCinFV_stack_12->SetBinContent(18,4.159526);
   hNCinFV_stack_12->SetBinContent(19,6.537388);
   hNCinFV_stack_12->SetBinContent(20,6.74871);
   hNCinFV_stack_12->SetBinContent(21,7.330404);
   hNCinFV_stack_12->SetBinContent(22,7.820806);
   hNCinFV_stack_12->SetBinContent(23,10.15326);
   hNCinFV_stack_12->SetBinContent(24,14.40638);
   hNCinFV_stack_12->SetBinContent(25,19.82518);
   hNCinFV_stack_12->SetBinError(1,1.442212);
   hNCinFV_stack_12->SetBinError(2,1.110635);
   hNCinFV_stack_12->SetBinError(3,1.127594);
   hNCinFV_stack_12->SetBinError(4,0.9998562);
   hNCinFV_stack_12->SetBinError(5,0.89917);
   hNCinFV_stack_12->SetBinError(6,0.9816245);
   hNCinFV_stack_12->SetBinError(7,0.8560416);
   hNCinFV_stack_12->SetBinError(8,0.89917);
   hNCinFV_stack_12->SetBinError(9,1.019492);
   hNCinFV_stack_12->SetBinError(10,0.4804759);
   hNCinFV_stack_12->SetBinError(11,0.9403223);
   hNCinFV_stack_12->SetBinError(12,1.020246);
   hNCinFV_stack_12->SetBinError(13,0.8999062);
   hNCinFV_stack_12->SetBinError(14,0.7341869);
   hNCinFV_stack_12->SetBinError(15,0.9615599);
   hNCinFV_stack_12->SetBinError(16,0.9625925);
   hNCinFV_stack_12->SetBinError(17,0.9200768);
   hNCinFV_stack_12->SetBinError(18,0.9813267);
   hNCinFV_stack_12->SetBinError(19,1.331061);
   hNCinFV_stack_12->SetBinError(20,1.271909);
   hNCinFV_stack_12->SetBinError(21,1.315497);
   hNCinFV_stack_12->SetBinError(22,1.387778);
   hNCinFV_stack_12->SetBinError(23,1.605509);
   hNCinFV_stack_12->SetBinError(24,1.912416);
   hNCinFV_stack_12->SetBinError(25,2.271973);
   hNCinFV_stack_12->SetEntries(601);

   ci = 1459;
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
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,9.238918);
   hnumuCCinFV_stack_13->SetBinContent(2,7.535858);
   hnumuCCinFV_stack_13->SetBinContent(3,5.835485);
   hnumuCCinFV_stack_13->SetBinContent(4,6.018228);
   hnumuCCinFV_stack_13->SetBinContent(5,5.128983);
   hnumuCCinFV_stack_13->SetBinContent(6,6.222871);
   hnumuCCinFV_stack_13->SetBinContent(7,3.32328);
   hnumuCCinFV_stack_13->SetBinContent(8,7.714268);
   hnumuCCinFV_stack_13->SetBinContent(9,5.107205);
   hnumuCCinFV_stack_13->SetBinContent(10,9.887983);
   hnumuCCinFV_stack_13->SetBinContent(11,9.327091);
   hnumuCCinFV_stack_13->SetBinContent(12,7.844327);
   hnumuCCinFV_stack_13->SetBinContent(13,12.73744);
   hnumuCCinFV_stack_13->SetBinContent(14,11.90667);
   hnumuCCinFV_stack_13->SetBinContent(15,11.61586);
   hnumuCCinFV_stack_13->SetBinContent(16,11.84937);
   hnumuCCinFV_stack_13->SetBinContent(17,10.21389);
   hnumuCCinFV_stack_13->SetBinContent(18,12.99734);
   hnumuCCinFV_stack_13->SetBinContent(19,10.06208);
   hnumuCCinFV_stack_13->SetBinContent(20,11.76349);
   hnumuCCinFV_stack_13->SetBinContent(21,14.64753);
   hnumuCCinFV_stack_13->SetBinContent(22,12.47224);
   hnumuCCinFV_stack_13->SetBinContent(23,10.1331);
   hnumuCCinFV_stack_13->SetBinContent(24,9.039314);
   hnumuCCinFV_stack_13->SetBinContent(25,16.84584);
   hnumuCCinFV_stack_13->SetBinError(1,1.60435);
   hnumuCCinFV_stack_13->SetBinError(2,1.531979);
   hnumuCCinFV_stack_13->SetBinError(3,1.281166);
   hnumuCCinFV_stack_13->SetBinError(4,1.640188);
   hnumuCCinFV_stack_13->SetBinError(5,1.20437);
   hnumuCCinFV_stack_13->SetBinError(6,1.714078);
   hnumuCCinFV_stack_13->SetBinError(7,0.8709037);
   hnumuCCinFV_stack_13->SetBinError(8,1.518714);
   hnumuCCinFV_stack_13->SetBinError(9,1.1595);
   hnumuCCinFV_stack_13->SetBinError(10,1.787239);
   hnumuCCinFV_stack_13->SetBinError(11,1.811118);
   hnumuCCinFV_stack_13->SetBinError(12,1.639349);
   hnumuCCinFV_stack_13->SetBinError(13,2.207107);
   hnumuCCinFV_stack_13->SetBinError(14,1.828335);
   hnumuCCinFV_stack_13->SetBinError(15,2.267343);
   hnumuCCinFV_stack_13->SetBinError(16,2.190181);
   hnumuCCinFV_stack_13->SetBinError(17,1.683237);
   hnumuCCinFV_stack_13->SetBinError(18,2.350972);
   hnumuCCinFV_stack_13->SetBinError(19,1.61083);
   hnumuCCinFV_stack_13->SetBinError(20,2.955317);
   hnumuCCinFV_stack_13->SetBinError(21,2.506416);
   hnumuCCinFV_stack_13->SetBinError(22,2.230484);
   hnumuCCinFV_stack_13->SetBinError(23,2.03289);
   hnumuCCinFV_stack_13->SetBinError(24,1.49568);
   hnumuCCinFV_stack_13->SetBinError(25,2.036768);
   hnumuCCinFV_stack_13->SetEntries(929);

   ci = 1460;
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
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(3,0.441907);
   hnueCCinFV_stack_14->SetBinContent(4,0.2476759);
   hnueCCinFV_stack_14->SetBinContent(5,0.2486649);
   hnueCCinFV_stack_14->SetBinContent(6,0.3405455);
   hnueCCinFV_stack_14->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_14->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_14->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_14->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(15,0.4454695);
   hnueCCinFV_stack_14->SetBinContent(17,0.2511644);
   hnueCCinFV_stack_14->SetBinContent(18,1.094315);
   hnueCCinFV_stack_14->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(21,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(22,1.044464);
   hnueCCinFV_stack_14->SetBinContent(23,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(24,0.7336084);
   hnueCCinFV_stack_14->SetBinContent(25,5.857757);
   hnueCCinFV_stack_14->SetBinError(3,0.3143499);
   hnueCCinFV_stack_14->SetBinError(4,0.2476759);
   hnueCCinFV_stack_14->SetBinError(5,0.2486649);
   hnueCCinFV_stack_14->SetBinError(6,0.3401778);
   hnueCCinFV_stack_14->SetBinError(7,0.4132436);
   hnueCCinFV_stack_14->SetBinError(8,0.2556436);
   hnueCCinFV_stack_14->SetBinError(9,0.5946997);
   hnueCCinFV_stack_14->SetBinError(11,0.1950249);
   hnueCCinFV_stack_14->SetBinError(15,0.3174228);
   hnueCCinFV_stack_14->SetBinError(17,0.2511644);
   hnueCCinFV_stack_14->SetBinError(18,0.6346687);
   hnueCCinFV_stack_14->SetBinError(20,0.1950249);
   hnueCCinFV_stack_14->SetBinError(21,0.438694);
   hnueCCinFV_stack_14->SetBinError(22,0.5321953);
   hnueCCinFV_stack_14->SetBinError(23,0.3921167);
   hnueCCinFV_stack_14->SetBinError(24,0.4394482);
   hnueCCinFV_stack_14->SetBinError(25,1.246638);
   hnueCCinFV_stack_14->SetEntries(54);

   ci = 1461;
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
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(1,82.82535);
   hmcerror__5->SetBinContent(2,70.52203);
   hmcerror__5->SetBinContent(3,65.80393);
   hmcerror__5->SetBinContent(4,59.82259);
   hmcerror__5->SetBinContent(5,61.95854);
   hmcerror__5->SetBinContent(6,62.20249);
   hmcerror__5->SetBinContent(7,63.85138);
   hmcerror__5->SetBinContent(8,65.47198);
   hmcerror__5->SetBinContent(9,61.11058);
   hmcerror__5->SetBinContent(10,68.56572);
   hmcerror__5->SetBinContent(11,74.37062);
   hmcerror__5->SetBinContent(12,74.17058);
   hmcerror__5->SetBinContent(13,87.13132);
   hmcerror__5->SetBinContent(14,93.66112);
   hmcerror__5->SetBinContent(15,100.9531);
   hmcerror__5->SetBinContent(16,96.46118);
   hmcerror__5->SetBinContent(17,100.0251);
   hmcerror__5->SetBinContent(18,110.3713);
   hmcerror__5->SetBinContent(19,125.7708);
   hmcerror__5->SetBinContent(20,142.3752);
   hmcerror__5->SetBinContent(21,166.2415);
   hmcerror__5->SetBinContent(22,171.0492);
   hmcerror__5->SetBinContent(23,193.255);
   hmcerror__5->SetBinContent(24,240.4169);
   hmcerror__5->SetBinContent(25,304.7236);
   hmcerror__5->SetBinError(1,21.77671);
   hmcerror__5->SetBinError(2,18.73293);
   hmcerror__5->SetBinError(3,18.51473);
   hmcerror__5->SetBinError(4,14.81104);
   hmcerror__5->SetBinError(5,15.08488);
   hmcerror__5->SetBinError(6,15.30726);
   hmcerror__5->SetBinError(7,15.49781);
   hmcerror__5->SetBinError(8,15.15561);
   hmcerror__5->SetBinError(9,15.39576);
   hmcerror__5->SetBinError(10,15.28634);
   hmcerror__5->SetBinError(11,18.32135);
   hmcerror__5->SetBinError(12,17.97391);
   hmcerror__5->SetBinError(13,20.75645);
   hmcerror__5->SetBinError(14,22.67384);
   hmcerror__5->SetBinError(15,24.93414);
   hmcerror__5->SetBinError(16,26.23706);
   hmcerror__5->SetBinError(17,29.04255);
   hmcerror__5->SetBinError(18,32.07832);
   hmcerror__5->SetBinError(19,37.76301);
   hmcerror__5->SetBinError(20,43.37932);
   hmcerror__5->SetBinError(21,47.50615);
   hmcerror__5->SetBinError(22,49.01873);
   hmcerror__5->SetBinError(23,50.77198);
   hmcerror__5->SetBinError(24,58.00857);
   hmcerror__5->SetBinError(25,71.32847);
   hmcerror__5->SetBinError(26,0.3895343);
   hmcerror__5->SetEntries(2712.362);

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
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
   56,
   47,
   46,
   55,
   41,
   60,
   53,
   55,
   51,
   64,
   56,
   46,
   56,
   65,
   73,
   60,
   68,
   94,
   74,
   94,
   116,
   132,
   176,
   175,
   223};
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
   7.6127,
   6.9882,
   6.9153,
   7.546,
   6.5384,
   7.8743,
   7.4105,
   7.546,
   7.2725,
   8.1273,
   7.6127,
   6.9153,
   7.6127,
   8.1893,
   8.6693,
   7.8743,
   8.3726,
   9.8173,
   8.7275,
   9.8173,
   10.77033,
   11.48913,
   13.2665,
   13.22876,
   14.93318};
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
   7.4094,
   6.7839,
   6.7108,
   7.3425,
   6.3331,
   7.6713,
   7.2068,
   7.3425,
   7.0686,
   7.9246,
   7.4094,
   6.7108,
   7.4094,
   7.9866,
   8.4672,
   7.6713,
   8.1701,
   9.616,
   8.5253,
   9.616,
   10.77033,
   11.48913,
   13.2665,
   13.22876,
   14.93318};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(14.11444);
   Graph_Graph3005->SetMaximum(258.2803);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 11.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 188.4","F");

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.4","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

   ci = 1455;
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

   ci = 1456;
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

   ci = 1457;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 414.7","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 141.0","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 239.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
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
   Double_t _fely3006[25] = {
   0.2629232,
   0.2656323,
   0.281362,
   0.2475828,
   0.2434673,
   0.2460876,
   0.242717,
   0.2314823,
   0.2519327,
   0.2229444,
   0.246352,
   0.2423321,
   0.2382203,
   0.2420838,
   0.2469873,
   0.2719961,
   0.2903527,
   0.2906399,
   0.3002525,
   0.304683,
   0.2857658,
   0.2865767,
   0.2627201,
   0.2412832,
   0.234076};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0.2629232,
   0.2656323,
   0.281362,
   0.2475828,
   0.2434673,
   0.2460876,
   0.242717,
   0.2314823,
   0.2519327,
   0.2229444,
   0.246352,
   0.2423321,
   0.2382203,
   0.2420838,
   0.2469873,
   0.2719961,
   0.2903527,
   0.2906399,
   0.3002525,
   0.304683,
   0.2857658,
   0.2865767,
   0.2627201,
   0.2412832,
   0.234076};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
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
   Double_t _fely3007[25] = {
   0.2259265,
   0.229607,
   0.2272653,
   0.2284925,
   0.2256083,
   0.2294448,
   0.2034303,
   0.2024563,
   0.2333577,
   0.2022115,
   0.2174438,
   0.2330035,
   0.2246889,
   0.2285678,
   0.2353946,
   0.2592398,
   0.2695458,
   0.2830438,
   0.2825963,
   0.2890987,
   0.2742244,
   0.2729248,
   0.2464539,
   0.2215504,
   0.2223371};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0.2259265,
   0.229607,
   0.2272653,
   0.2284925,
   0.2256083,
   0.2294448,
   0.2034303,
   0.2024563,
   0.2333577,
   0.2022115,
   0.2174438,
   0.2330035,
   0.2246889,
   0.2285678,
   0.2353946,
   0.2592398,
   0.2695458,
   0.2830438,
   0.2825963,
   0.2890987,
   0.2742244,
   0.2729248,
   0.2464539,
   0.2215504,
   0.2223371};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
   0.6761215,
   0.6664584,
   0.6990464,
   0.9193851,
   0.6617328,
   0.9645916,
   0.8300525,
   0.840054,
   0.8345526,
   0.933411,
   0.7529855,
   0.620192,
   0.642708,
   0.6939913,
   0.7231079,
   0.6220119,
   0.6798297,
   0.8516703,
   0.5883717,
   0.6602271,
   0.6977798,
   0.7717076,
   0.9107139,
   0.7279022,
   0.7318107};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
   0.09191268,
   0.09909245,
   0.1050895,
   0.1261396,
   0.1055286,
   0.1265914,
   0.1160586,
   0.1152554,
   0.1190056,
   0.118533,
   0.1023617,
   0.09323508,
   0.08737041,
   0.08743543,
   0.08587452,
   0.0816318,
   0.08370503,
   0.08894791,
   0.06939208,
   0.0689537,
   0.06478723,
   0.06716853,
   0.06864764,
   0.05502423,
   0.04900567};
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.08945812,
   0.09619548,
   0.1019817,
   0.1227379,
   0.1022151,
   0.1233279,
   0.1128683,
   0.1121472,
   0.115669,
   0.1155767,
   0.09962805,
   0.09047793,
   0.08503716,
   0.08527124,
   0.0838726,
   0.07952733,
   0.08168053,
   0.08712406,
   0.06778439,
   0.06753983,
   0.06478723,
   0.06716853,
   0.06864764,
   0.05502423,
   0.04900567};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.4620856);
   Graph_Graph3008->SetMaximum(1.144813);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
