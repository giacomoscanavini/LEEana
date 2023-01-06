#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sun Oct 23 18:43:59 2022) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-12.2,451.2821,1349.063);
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
   hmc__4->SetBinContent(1,129.74);
   hmc__4->SetBinContent(2,178.1391);
   hmc__4->SetBinContent(3,201.2271);
   hmc__4->SetBinContent(4,199.2908);
   hmc__4->SetBinContent(5,210.2707);
   hmc__4->SetBinContent(6,227.8084);
   hmc__4->SetBinContent(7,234.9948);
   hmc__4->SetBinContent(8,262.3439);
   hmc__4->SetBinContent(9,315.4801);
   hmc__4->SetBinContent(10,409.1469);
   hmc__4->SetBinContent(11,490.9286);
   hmc__4->SetBinContent(12,548.3845);
   hmc__4->SetBinContent(13,480.8138);
   hmc__4->SetBinContent(14,301.8962);
   hmc__4->SetBinContent(15,167.4862);
   hmc__4->SetBinContent(16,115.8796);
   hmc__4->SetBinContent(17,83.39783);
   hmc__4->SetBinContent(18,62.16581);
   hmc__4->SetBinContent(19,56.45212);
   hmc__4->SetBinContent(20,50.72121);
   hmc__4->SetBinContent(21,49.44965);
   hmc__4->SetBinContent(22,35.39644);
   hmc__4->SetBinContent(23,32.67936);
   hmc__4->SetBinContent(24,33.24539);
   hmc__4->SetBinContent(25,25.036);
   hmc__4->SetBinContent(26,23.92098);
   hmc__4->SetBinContent(27,23.99412);
   hmc__4->SetBinContent(28,20.52539);
   hmc__4->SetBinContent(29,20.22523);
   hmc__4->SetBinContent(30,18.25456);
   hmc__4->SetBinContent(31,14.21737);
   hmc__4->SetBinContent(32,15.50519);
   hmc__4->SetBinContent(33,11.01649);
   hmc__4->SetBinContent(34,11.39633);
   hmc__4->SetBinContent(35,123.5206);
   hmc__4->SetBinError(1,39.92088);
   hmc__4->SetBinError(2,46.75285);
   hmc__4->SetBinError(3,46.87285);
   hmc__4->SetBinError(4,49.79761);
   hmc__4->SetBinError(5,56.92184);
   hmc__4->SetBinError(6,63.09977);
   hmc__4->SetBinError(7,81.25947);
   hmc__4->SetBinError(8,82.73256);
   hmc__4->SetBinError(9,96.62877);
   hmc__4->SetBinError(10,135.4695);
   hmc__4->SetBinError(11,162.1246);
   hmc__4->SetBinError(12,177.2511);
   hmc__4->SetBinError(13,164.4021);
   hmc__4->SetBinError(14,109.6768);
   hmc__4->SetBinError(15,68.40184);
   hmc__4->SetBinError(16,33.76306);
   hmc__4->SetBinError(17,29.58563);
   hmc__4->SetBinError(18,23.78721);
   hmc__4->SetBinError(19,21.05296);
   hmc__4->SetBinError(20,27.64092);
   hmc__4->SetBinError(21,18.32261);
   hmc__4->SetBinError(22,14.52338);
   hmc__4->SetBinError(23,16.28924);
   hmc__4->SetBinError(24,14.0715);
   hmc__4->SetBinError(25,14.20586);
   hmc__4->SetBinError(26,13.45559);
   hmc__4->SetBinError(27,13.18313);
   hmc__4->SetBinError(28,12.13803);
   hmc__4->SetBinError(29,11.69706);
   hmc__4->SetBinError(30,10.32093);
   hmc__4->SetBinError(31,9.63093);
   hmc__4->SetBinError(32,10.48448);
   hmc__4->SetBinError(33,7.845154);
   hmc__4->SetBinError(34,11.7368);
   hmc__4->SetBinError(35,41.07563);
   hmc__4->SetMinimum(-12.2);
   hmc__4->SetMaximum(1281);
   hmc__4->SetEntries(5727.925);
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
   hs2_stack_2->SetMaximum(575.8036);
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
   hbadmatch_stack_1->SetBinContent(2,6.790011);
   hbadmatch_stack_1->SetBinContent(3,7.034176);
   hbadmatch_stack_1->SetBinContent(4,5.341799);
   hbadmatch_stack_1->SetBinContent(5,6.329642);
   hbadmatch_stack_1->SetBinContent(6,7.360246);
   hbadmatch_stack_1->SetBinContent(7,8.845982);
   hbadmatch_stack_1->SetBinContent(8,6.356331);
   hbadmatch_stack_1->SetBinContent(9,8.301149);
   hbadmatch_stack_1->SetBinContent(10,7.460358);
   hbadmatch_stack_1->SetBinContent(11,6.80011);
   hbadmatch_stack_1->SetBinContent(12,10.1766);
   hbadmatch_stack_1->SetBinContent(13,6.570025);
   hbadmatch_stack_1->SetBinContent(14,6.554188);
   hbadmatch_stack_1->SetBinContent(15,6.031768);
   hbadmatch_stack_1->SetBinContent(16,3.231067);
   hbadmatch_stack_1->SetBinContent(17,1.58753);
   hbadmatch_stack_1->SetBinContent(18,0.933257);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(20,0.8376253);
   hbadmatch_stack_1->SetBinContent(21,1.333757);
   hbadmatch_stack_1->SetBinContent(22,0.4689584);
   hbadmatch_stack_1->SetBinContent(23,1.641371);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,0.1019266);
   hbadmatch_stack_1->SetBinContent(26,0.9865863);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.4207742);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(33,0.5774622);
   hbadmatch_stack_1->SetBinContent(34,0.1236948);
   hbadmatch_stack_1->SetBinContent(35,0.8163177);
   hbadmatch_stack_1->SetBinError(1,1.307428);
   hbadmatch_stack_1->SetBinError(2,1.379595);
   hbadmatch_stack_1->SetBinError(3,1.343901);
   hbadmatch_stack_1->SetBinError(4,1.162073);
   hbadmatch_stack_1->SetBinError(5,1.352822);
   hbadmatch_stack_1->SetBinError(6,1.523857);
   hbadmatch_stack_1->SetBinError(7,1.500643);
   hbadmatch_stack_1->SetBinError(8,1.484377);
   hbadmatch_stack_1->SetBinError(9,1.482462);
   hbadmatch_stack_1->SetBinError(10,1.36906);
   hbadmatch_stack_1->SetBinError(11,1.32846);
   hbadmatch_stack_1->SetBinError(12,2.315179);
   hbadmatch_stack_1->SetBinError(13,1.683733);
   hbadmatch_stack_1->SetBinError(14,1.936285);
   hbadmatch_stack_1->SetBinError(15,2.236126);
   hbadmatch_stack_1->SetBinError(16,1.131121);
   hbadmatch_stack_1->SetBinError(17,0.6326178);
   hbadmatch_stack_1->SetBinError(18,0.4808022);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(20,0.4509152);
   hbadmatch_stack_1->SetBinError(21,0.5999823);
   hbadmatch_stack_1->SetBinError(22,0.2882678);
   hbadmatch_stack_1->SetBinError(23,0.8365108);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.1019266);
   hbadmatch_stack_1->SetBinError(26,0.5240452);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.4207742);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(33,0.3335031);
   hbadmatch_stack_1->SetBinError(34,0.1236948);
   hbadmatch_stack_1->SetBinError(35,0.6163994);
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
   hext_stack_2->SetBinContent(1,20.48818);
   hext_stack_2->SetBinContent(2,24.39695);
   hext_stack_2->SetBinContent(3,40.90582);
   hext_stack_2->SetBinContent(4,31.52097);
   hext_stack_2->SetBinContent(5,23.01558);
   hext_stack_2->SetBinContent(6,28.93574);
   hext_stack_2->SetBinContent(7,22.54555);
   hext_stack_2->SetBinContent(8,32.55759);
   hext_stack_2->SetBinContent(9,25.32548);
   hext_stack_2->SetBinContent(10,38.22239);
   hext_stack_2->SetBinContent(11,30.46557);
   hext_stack_2->SetBinContent(12,37.89081);
   hext_stack_2->SetBinContent(13,43.16659);
   hext_stack_2->SetBinContent(14,14.57243);
   hext_stack_2->SetBinContent(15,7.380575);
   hext_stack_2->SetBinContent(16,9.577972);
   hext_stack_2->SetBinContent(17,4.378797);
   hext_stack_2->SetBinContent(18,3.889996);
   hext_stack_2->SetBinContent(19,2.6702);
   hext_stack_2->SetBinContent(20,4.218802);
   hext_stack_2->SetBinContent(21,4.192852);
   hext_stack_2->SetBinContent(22,1.950793);
   hext_stack_2->SetBinContent(23,1.868591);
   hext_stack_2->SetBinContent(24,4.028449);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,2.510206);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,1.055394);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,1.950793);
   hext_stack_2->SetBinError(1,3.231187);
   hext_stack_2->SetBinError(2,3.431095);
   hext_stack_2->SetBinError(3,4.407329);
   hext_stack_2->SetBinError(4,3.867997);
   hext_stack_2->SetBinError(5,3.080508);
   hext_stack_2->SetBinError(6,3.685378);
   hext_stack_2->SetBinError(7,2.999473);
   hext_stack_2->SetBinError(8,3.95025);
   hext_stack_2->SetBinError(9,3.390201);
   hext_stack_2->SetBinError(10,4.232733);
   hext_stack_2->SetBinError(11,3.819112);
   hext_stack_2->SetBinError(12,4.244054);
   hext_stack_2->SetBinError(13,4.69352);
   hext_stack_2->SetBinError(14,2.546215);
   hext_stack_2->SetBinError(15,1.682775);
   hext_stack_2->SetBinError(16,1.943842);
   hext_stack_2->SetBinError(17,1.350755);
   hext_stack_2->SetBinError(18,1.264566);
   hext_stack_2->SetBinError(19,1.050314);
   hext_stack_2->SetBinError(20,1.356276);
   hext_stack_2->SetBinError(21,1.519199);
   hext_stack_2->SetBinError(22,0.8755137);
   hext_stack_2->SetBinError(23,0.840497);
   hext_stack_2->SetBinError(24,1.479117);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,1.057404);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.6130171);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.8755137);
   hext_stack_2->SetEntries(1085);

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
   houtFV_stack_4->SetBinContent(1,13.59784);
   houtFV_stack_4->SetBinContent(2,17.40594);
   houtFV_stack_4->SetBinContent(3,21.66812);
   houtFV_stack_4->SetBinContent(4,16.99095);
   houtFV_stack_4->SetBinContent(5,17.25423);
   houtFV_stack_4->SetBinContent(6,22.31996);
   houtFV_stack_4->SetBinContent(7,19.24428);
   houtFV_stack_4->SetBinContent(8,21.19365);
   houtFV_stack_4->SetBinContent(9,22.82107);
   houtFV_stack_4->SetBinContent(10,29.82812);
   houtFV_stack_4->SetBinContent(11,26.70594);
   houtFV_stack_4->SetBinContent(12,29.02013);
   houtFV_stack_4->SetBinContent(13,28.84685);
   houtFV_stack_4->SetBinContent(14,22.23725);
   houtFV_stack_4->SetBinContent(15,10.9367);
   houtFV_stack_4->SetBinContent(16,5.923728);
   houtFV_stack_4->SetBinContent(17,5.633187);
   houtFV_stack_4->SetBinContent(18,4.204782);
   houtFV_stack_4->SetBinContent(19,5.258382);
   houtFV_stack_4->SetBinContent(20,3.749184);
   houtFV_stack_4->SetBinContent(21,3.109977);
   houtFV_stack_4->SetBinContent(22,2.560843);
   houtFV_stack_4->SetBinContent(23,2.340675);
   houtFV_stack_4->SetBinContent(24,1.511987);
   houtFV_stack_4->SetBinContent(25,1.98579);
   houtFV_stack_4->SetBinContent(26,1.649234);
   houtFV_stack_4->SetBinContent(27,2.04266);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,1.165231);
   houtFV_stack_4->SetBinContent(30,0.7834804);
   houtFV_stack_4->SetBinContent(31,0.9466075);
   houtFV_stack_4->SetBinContent(32,0.9553829);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinContent(35,6.158619);
   houtFV_stack_4->SetBinError(1,1.937306);
   houtFV_stack_4->SetBinError(2,2.101032);
   houtFV_stack_4->SetBinError(3,2.391178);
   houtFV_stack_4->SetBinError(4,2.069901);
   houtFV_stack_4->SetBinError(5,2.049402);
   houtFV_stack_4->SetBinError(6,2.373272);
   houtFV_stack_4->SetBinError(7,2.11824);
   houtFV_stack_4->SetBinError(8,2.347896);
   houtFV_stack_4->SetBinError(9,2.366545);
   houtFV_stack_4->SetBinError(10,2.70076);
   houtFV_stack_4->SetBinError(11,2.536566);
   houtFV_stack_4->SetBinError(12,2.670551);
   houtFV_stack_4->SetBinError(13,2.687968);
   houtFV_stack_4->SetBinError(14,2.367847);
   houtFV_stack_4->SetBinError(15,1.56536);
   houtFV_stack_4->SetBinError(16,1.165755);
   houtFV_stack_4->SetBinError(17,1.193068);
   houtFV_stack_4->SetBinError(18,1.082913);
   houtFV_stack_4->SetBinError(19,1.074109);
   houtFV_stack_4->SetBinError(20,0.9457386);
   houtFV_stack_4->SetBinError(21,0.8889774);
   houtFV_stack_4->SetBinError(22,0.7503637);
   houtFV_stack_4->SetBinError(23,0.7293321);
   houtFV_stack_4->SetBinError(24,0.6218736);
   houtFV_stack_4->SetBinError(25,0.6919662);
   houtFV_stack_4->SetBinError(26,0.683132);
   houtFV_stack_4->SetBinError(27,0.664751);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.5357171);
   houtFV_stack_4->SetBinError(30,0.3917439);
   houtFV_stack_4->SetBinError(31,0.4296861);
   houtFV_stack_4->SetBinError(32,0.427899);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetBinError(35,1.340848);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.52322);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.086185);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.230054);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.13343);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.958105);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.609286);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.646045);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.332369);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.002375);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.861896);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,8.93667);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,12.35652);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,11.56271);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,8.144974);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.65829);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.541302);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.713741);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.589922);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.33073);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.450857);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.091944);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.6486011);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.8431908);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2650432);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4992333);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1142903);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.4025692);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.5559403);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5596033);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.09591387);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2591538);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.07406837);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.2292755);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.55291);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.951886);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4209973);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6747655);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5375914);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6379411);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5547742);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4772621);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5258781);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7551639);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8189962);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8849194);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.107802);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.36414);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.280972);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.070786);
   hNCpi0inFVcoh_stack_5->SetBinError(15,1.062893);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6614753);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4887852);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7039544);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4720218);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5008432);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3882125);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3176999);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3261939);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1271589);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2017138);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.06333532);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1923191);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2865729);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2608273);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.05918372);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1150878);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.05571912);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1513713);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3451981);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.5468095);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.240301);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5979788);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2339773);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.337822);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4567311);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.01869);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7949147);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5453262);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.136289);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.643321);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.100351);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.805701);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.974855);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.509398);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7902778);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4926114);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.0721459);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1654046);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2487517);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.0696628);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03645691);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1378969);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05883958);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.03499874);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1771987);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.1628412);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.09429163);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1938258);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09630441);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1639063);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1434135);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3903371);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2162549);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1577108);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2804979);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3774654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4341419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3048053);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.5043781);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3615026);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2738772);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2114867);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03884068);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1231268);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1363385);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04330004);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02577893);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.08723333);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03442179);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02476932);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1320714);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.12496);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,33.3187);
   hNCpi0inFVres_stack_7->SetBinContent(2,48.86617);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.16932);
   hNCpi0inFVres_stack_7->SetBinContent(4,59.81325);
   hNCpi0inFVres_stack_7->SetBinContent(5,70.28036);
   hNCpi0inFVres_stack_7->SetBinContent(6,73.52985);
   hNCpi0inFVres_stack_7->SetBinContent(7,81.63716);
   hNCpi0inFVres_stack_7->SetBinContent(8,98.10658);
   hNCpi0inFVres_stack_7->SetBinContent(9,126.6257);
   hNCpi0inFVres_stack_7->SetBinContent(10,180.2483);
   hNCpi0inFVres_stack_7->SetBinContent(11,232.5926);
   hNCpi0inFVres_stack_7->SetBinContent(12,258.277);
   hNCpi0inFVres_stack_7->SetBinContent(13,215.147);
   hNCpi0inFVres_stack_7->SetBinContent(14,133.2284);
   hNCpi0inFVres_stack_7->SetBinContent(15,67.20807);
   hNCpi0inFVres_stack_7->SetBinContent(16,43.72467);
   hNCpi0inFVres_stack_7->SetBinContent(17,26.86647);
   hNCpi0inFVres_stack_7->SetBinContent(18,18.89052);
   hNCpi0inFVres_stack_7->SetBinContent(19,16.49631);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.13539);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.96687);
   hNCpi0inFVres_stack_7->SetBinContent(22,9.790438);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.983368);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.504442);
   hNCpi0inFVres_stack_7->SetBinContent(25,6.210155);
   hNCpi0inFVres_stack_7->SetBinContent(26,5.641682);
   hNCpi0inFVres_stack_7->SetBinContent(27,5.902159);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.359946);
   hNCpi0inFVres_stack_7->SetBinContent(29,3.905197);
   hNCpi0inFVres_stack_7->SetBinContent(30,4.476501);
   hNCpi0inFVres_stack_7->SetBinContent(31,3.968652);
   hNCpi0inFVres_stack_7->SetBinContent(32,3.308869);
   hNCpi0inFVres_stack_7->SetBinContent(33,3.423261);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.743464);
   hNCpi0inFVres_stack_7->SetBinContent(35,19.59341);
   hNCpi0inFVres_stack_7->SetBinError(1,1.845831);
   hNCpi0inFVres_stack_7->SetBinError(2,2.426956);
   hNCpi0inFVres_stack_7->SetBinError(3,2.450095);
   hNCpi0inFVres_stack_7->SetBinError(4,2.641286);
   hNCpi0inFVres_stack_7->SetBinError(5,2.846982);
   hNCpi0inFVres_stack_7->SetBinError(6,2.769766);
   hNCpi0inFVres_stack_7->SetBinError(7,3.00728);
   hNCpi0inFVres_stack_7->SetBinError(8,3.231362);
   hNCpi0inFVres_stack_7->SetBinError(9,3.618913);
   hNCpi0inFVres_stack_7->SetBinError(10,4.279724);
   hNCpi0inFVres_stack_7->SetBinError(11,4.770368);
   hNCpi0inFVres_stack_7->SetBinError(12,5.135477);
   hNCpi0inFVres_stack_7->SetBinError(13,4.721766);
   hNCpi0inFVres_stack_7->SetBinError(14,3.879021);
   hNCpi0inFVres_stack_7->SetBinError(15,2.738645);
   hNCpi0inFVres_stack_7->SetBinError(16,2.346811);
   hNCpi0inFVres_stack_7->SetBinError(17,1.780663);
   hNCpi0inFVres_stack_7->SetBinError(18,1.298465);
   hNCpi0inFVres_stack_7->SetBinError(19,1.349286);
   hNCpi0inFVres_stack_7->SetBinError(20,1.202414);
   hNCpi0inFVres_stack_7->SetBinError(21,1.125634);
   hNCpi0inFVres_stack_7->SetBinError(22,1.002894);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8587921);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9796122);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7658856);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8617592);
   hNCpi0inFVres_stack_7->SetBinError(27,0.8133769);
   hNCpi0inFVres_stack_7->SetBinError(28,0.8562183);
   hNCpi0inFVres_stack_7->SetBinError(29,0.5417542);
   hNCpi0inFVres_stack_7->SetBinError(30,0.8109358);
   hNCpi0inFVres_stack_7->SetBinError(31,0.6570504);
   hNCpi0inFVres_stack_7->SetBinError(32,0.8112701);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7395307);
   hNCpi0inFVres_stack_7->SetBinError(34,0.580344);
   hNCpi0inFVres_stack_7->SetBinError(35,1.680523);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.50065);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.85272);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.92421);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.6776);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.43168);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.47689);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.27949);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.6078);
   hNCpi0inFVdis_stack_8->SetBinContent(9,25.22341);
   hNCpi0inFVdis_stack_8->SetBinContent(10,32.9123);
   hNCpi0inFVdis_stack_8->SetBinContent(11,44.47184);
   hNCpi0inFVdis_stack_8->SetBinContent(12,51.21437);
   hNCpi0inFVdis_stack_8->SetBinContent(13,41.45047);
   hNCpi0inFVdis_stack_8->SetBinContent(14,28.91963);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.72654);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.674572);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.414078);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.281016);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.95803);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.620709);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.455603);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.662165);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.120611);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.92318);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.62166);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.561871);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.919802);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.922791);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.700099);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.713594);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.205708);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.7516426);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.7906546);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.549822);
   hNCpi0inFVdis_stack_8->SetBinContent(35,8.86248);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8116846);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.271724);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.154805);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.027303);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.221966);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.366369);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.583953);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.34003);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.793411);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.890197);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.24144);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.382965);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.031591);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.882765);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.156232);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.094338);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.055919);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7427646);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9330538);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8559404);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4082527);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5317433);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4353888);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4562998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3647483);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3150919);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.482419);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.6423145);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.468588);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4225529);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.403847);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2513358);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3934404);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.4277855);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.216675);
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
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03723348);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02640148);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.3600952);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2195167);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.06344445);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03555292);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02632953);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01899753);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1862716);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1341477);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03235999);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02514784);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
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
   hNCinFV_stack_11->SetBinContent(1,15.85776);
   hNCinFV_stack_11->SetBinContent(2,15.4514);
   hNCinFV_stack_11->SetBinContent(3,13.59141);
   hNCinFV_stack_11->SetBinContent(4,20.16455);
   hNCinFV_stack_11->SetBinContent(5,24.21694);
   hNCinFV_stack_11->SetBinContent(6,17.84385);
   hNCinFV_stack_11->SetBinContent(7,19.92875);
   hNCinFV_stack_11->SetBinContent(8,16.77696);
   hNCinFV_stack_11->SetBinContent(9,22.04856);
   hNCinFV_stack_11->SetBinContent(10,20.37077);
   hNCinFV_stack_11->SetBinContent(11,29.73478);
   hNCinFV_stack_11->SetBinContent(12,26.41409);
   hNCinFV_stack_11->SetBinContent(13,26.251);
   hNCinFV_stack_11->SetBinContent(14,18.08689);
   hNCinFV_stack_11->SetBinContent(15,13.05069);
   hNCinFV_stack_11->SetBinContent(16,11.92227);
   hNCinFV_stack_11->SetBinContent(17,10.59714);
   hNCinFV_stack_11->SetBinContent(18,7.910013);
   hNCinFV_stack_11->SetBinContent(19,8.095838);
   hNCinFV_stack_11->SetBinContent(20,8.166286);
   hNCinFV_stack_11->SetBinContent(21,9.591577);
   hNCinFV_stack_11->SetBinContent(22,4.484028);
   hNCinFV_stack_11->SetBinContent(23,4.876003);
   hNCinFV_stack_11->SetBinContent(24,6.440125);
   hNCinFV_stack_11->SetBinContent(25,3.540361);
   hNCinFV_stack_11->SetBinContent(26,3.117159);
   hNCinFV_stack_11->SetBinContent(27,4.046634);
   hNCinFV_stack_11->SetBinContent(28,4.619631);
   hNCinFV_stack_11->SetBinContent(29,4.403713);
   hNCinFV_stack_11->SetBinContent(30,4.351597);
   hNCinFV_stack_11->SetBinContent(31,3.07319);
   hNCinFV_stack_11->SetBinContent(32,5.563887);
   hNCinFV_stack_11->SetBinContent(33,2.199971);
   hNCinFV_stack_11->SetBinContent(34,2.92551);
   hNCinFV_stack_11->SetBinContent(35,35.31599);
   hNCinFV_stack_11->SetBinError(1,2.04192);
   hNCinFV_stack_11->SetBinError(2,2.028779);
   hNCinFV_stack_11->SetBinError(3,1.851711);
   hNCinFV_stack_11->SetBinError(4,2.296672);
   hNCinFV_stack_11->SetBinError(5,2.539256);
   hNCinFV_stack_11->SetBinError(6,2.334277);
   hNCinFV_stack_11->SetBinError(7,2.262748);
   hNCinFV_stack_11->SetBinError(8,2.072543);
   hNCinFV_stack_11->SetBinError(9,2.325641);
   hNCinFV_stack_11->SetBinError(10,2.209262);
   hNCinFV_stack_11->SetBinError(11,2.915197);
   hNCinFV_stack_11->SetBinError(12,2.718654);
   hNCinFV_stack_11->SetBinError(13,2.942886);
   hNCinFV_stack_11->SetBinError(14,2.212388);
   hNCinFV_stack_11->SetBinError(15,1.88352);
   hNCinFV_stack_11->SetBinError(16,2.207827);
   hNCinFV_stack_11->SetBinError(17,1.964515);
   hNCinFV_stack_11->SetBinError(18,1.679671);
   hNCinFV_stack_11->SetBinError(19,1.682218);
   hNCinFV_stack_11->SetBinError(20,1.605468);
   hNCinFV_stack_11->SetBinError(21,1.95578);
   hNCinFV_stack_11->SetBinError(22,1.374724);
   hNCinFV_stack_11->SetBinError(23,1.117462);
   hNCinFV_stack_11->SetBinError(24,1.400302);
   hNCinFV_stack_11->SetBinError(25,1.209021);
   hNCinFV_stack_11->SetBinError(26,0.8072416);
   hNCinFV_stack_11->SetBinError(27,1.099646);
   hNCinFV_stack_11->SetBinError(28,1.384297);
   hNCinFV_stack_11->SetBinError(29,1.116274);
   hNCinFV_stack_11->SetBinError(30,1.101736);
   hNCinFV_stack_11->SetBinError(31,1.04367);
   hNCinFV_stack_11->SetBinError(32,1.562108);
   hNCinFV_stack_11->SetBinError(33,0.7765015);
   hNCinFV_stack_11->SetBinError(34,1.030736);
   hNCinFV_stack_11->SetBinError(35,3.366623);
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
   hmcerror__5->SetBinContent(1,129.74);
   hmcerror__5->SetBinContent(2,178.1391);
   hmcerror__5->SetBinContent(3,201.2271);
   hmcerror__5->SetBinContent(4,199.2908);
   hmcerror__5->SetBinContent(5,210.2707);
   hmcerror__5->SetBinContent(6,227.8084);
   hmcerror__5->SetBinContent(7,234.9948);
   hmcerror__5->SetBinContent(8,262.3439);
   hmcerror__5->SetBinContent(9,315.4801);
   hmcerror__5->SetBinContent(10,409.1469);
   hmcerror__5->SetBinContent(11,490.9286);
   hmcerror__5->SetBinContent(12,548.3845);
   hmcerror__5->SetBinContent(13,480.8138);
   hmcerror__5->SetBinContent(14,301.8962);
   hmcerror__5->SetBinContent(15,167.4862);
   hmcerror__5->SetBinContent(16,115.8796);
   hmcerror__5->SetBinContent(17,83.39783);
   hmcerror__5->SetBinContent(18,62.16581);
   hmcerror__5->SetBinContent(19,56.45212);
   hmcerror__5->SetBinContent(20,50.72121);
   hmcerror__5->SetBinContent(21,49.44965);
   hmcerror__5->SetBinContent(22,35.39644);
   hmcerror__5->SetBinContent(23,32.67936);
   hmcerror__5->SetBinContent(24,33.24539);
   hmcerror__5->SetBinContent(25,25.036);
   hmcerror__5->SetBinContent(26,23.92098);
   hmcerror__5->SetBinContent(27,23.99412);
   hmcerror__5->SetBinContent(28,20.52539);
   hmcerror__5->SetBinContent(29,20.22523);
   hmcerror__5->SetBinContent(30,18.25456);
   hmcerror__5->SetBinContent(31,14.21737);
   hmcerror__5->SetBinContent(32,15.50519);
   hmcerror__5->SetBinContent(33,11.01649);
   hmcerror__5->SetBinContent(34,11.39633);
   hmcerror__5->SetBinContent(35,123.5206);
   hmcerror__5->SetBinError(1,39.92088);
   hmcerror__5->SetBinError(2,46.75285);
   hmcerror__5->SetBinError(3,46.87285);
   hmcerror__5->SetBinError(4,49.79761);
   hmcerror__5->SetBinError(5,56.92184);
   hmcerror__5->SetBinError(6,63.09977);
   hmcerror__5->SetBinError(7,81.25947);
   hmcerror__5->SetBinError(8,82.73256);
   hmcerror__5->SetBinError(9,96.62877);
   hmcerror__5->SetBinError(10,135.4695);
   hmcerror__5->SetBinError(11,162.1246);
   hmcerror__5->SetBinError(12,177.2511);
   hmcerror__5->SetBinError(13,164.4021);
   hmcerror__5->SetBinError(14,109.6768);
   hmcerror__5->SetBinError(15,68.40184);
   hmcerror__5->SetBinError(16,33.76306);
   hmcerror__5->SetBinError(17,29.58563);
   hmcerror__5->SetBinError(18,23.78721);
   hmcerror__5->SetBinError(19,21.05296);
   hmcerror__5->SetBinError(20,27.64092);
   hmcerror__5->SetBinError(21,18.32261);
   hmcerror__5->SetBinError(22,14.52338);
   hmcerror__5->SetBinError(23,16.28924);
   hmcerror__5->SetBinError(24,14.0715);
   hmcerror__5->SetBinError(25,14.20586);
   hmcerror__5->SetBinError(26,13.45559);
   hmcerror__5->SetBinError(27,13.18313);
   hmcerror__5->SetBinError(28,12.13803);
   hmcerror__5->SetBinError(29,11.69706);
   hmcerror__5->SetBinError(30,10.32093);
   hmcerror__5->SetBinError(31,9.63093);
   hmcerror__5->SetBinError(32,10.48448);
   hmcerror__5->SetBinError(33,7.845154);
   hmcerror__5->SetBinError(34,11.7368);
   hmcerror__5->SetBinError(35,41.07563);
   hmcerror__5->SetEntries(5727.925);

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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.4/34","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 118.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 464.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 365.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  97.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1932.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  397.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 409.7","F");

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
   0.3076992,
   0.2624514,
   0.2329351,
   0.2498742,
   0.2707074,
   0.2769861,
   0.3457926,
   0.3153591,
   0.3062911,
   0.3311023,
   0.3302407,
   0.3232241,
   0.3419247,
   0.3632931,
   0.4084027,
   0.2913634,
   0.354753,
   0.3826414,
   0.3729349,
   0.5449579,
   0.3705307,
   0.4103061,
   0.4984564,
   0.4232618,
   0.5674175,
   0.5625017,
   0.5494319,
   0.5913666,
   0.5783401,
   0.5653894,
   0.6774061,
   0.6761913,
   0.7121283,
   1.029876};
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
   0.3076992,
   0.2624514,
   0.2329351,
   0.2498742,
   0.2707074,
   0.2769861,
   0.3457926,
   0.3153591,
   0.3062911,
   0.3311023,
   0.3302407,
   0.3232241,
   0.3419247,
   0.3632931,
   0.4084027,
   0.2913634,
   0.354753,
   0.3826414,
   0.3729349,
   0.5449579,
   0.3705307,
   0.4103061,
   0.4984564,
   0.4232618,
   0.5674175,
   0.5625017,
   0.5494319,
   0.5913666,
   0.5783401,
   0.5653894,
   0.6774061,
   0.6761913,
   0.7121283,
   1.029876};
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
   0.2070725,
   0.1996909,
   0.1887237,
   0.2068358,
   0.2308537,
   0.2146559,
   0.2448787,
   0.2594304,
   0.277637,
   0.2985509,
   0.3195885,
   0.3131433,
   0.2896199,
   0.2703117,
   0.2592265,
   0.2371882,
   0.2425336,
   0.2831918,
   0.2378284,
   0.2295537,
   0.2336516,
   0.2358975,
   0.2618464,
   0.2641698,
   0.2602175,
   0.2528359,
   0.2543129,
   0.2780272,
   0.2654818,
   0.2779543,
   0.2930482,
   0.2934592,
   0.3277639,
   0.2903898};
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
   0.2070725,
   0.1996909,
   0.1887237,
   0.2068358,
   0.2308537,
   0.2146559,
   0.2448787,
   0.2594304,
   0.277637,
   0.2985509,
   0.3195885,
   0.3131433,
   0.2896199,
   0.2703117,
   0.2592265,
   0.2371882,
   0.2425336,
   0.2831918,
   0.2378284,
   0.2295537,
   0.2336516,
   0.2358975,
   0.2618464,
   0.2641698,
   0.2602175,
   0.2528359,
   0.2543129,
   0.2780272,
   0.2654818,
   0.2779543,
   0.2930482,
   0.2934592,
   0.3277639,
   0.2903898};
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
   1.002004,
   0.920629,
   0.8845728,
   0.8981852,
   1.008224,
   0.873541,
   1.13194,
   0.9643829,
   0.9509315,
   1.050967,
   0.9777388,
   1.112358,
   0.9983074,
   0.7684759,
   1.038891,
   0.7766685,
   0.8753225,
   0.9329887,
   0.9388487,
   0.8477715,
   0.6673455,
   1.18656,
   1.071012,
   0.7519839,
   0.5991373,
   0.8778904,
   0.9168914,
   0.8769628,
   0.8405345,
   0.65737,
   0.8440382,
   1.096407,
   0.9985032,
   0.3509902};
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
   0.08788158,
   0.07188904,
   0.06630153,
   0.06713351,
   0.06924511,
   0.06192368,
   0.06940369,
   0.06063023,
   0.05490206,
   0.05068214,
   0.04462747,
   0.04503807,
   0.04556629,
   0.05045292,
   0.07875815,
   0.0829249,
   0.1039511,
   0.1245797,
   0.1312705,
   0.131931,
   0.1190039,
   0.1868973,
   0.185279,
   0.1548305,
   0.1613077,
   0.1979601,
   0.201787,
   0.2144077,
   0.21179,
   0.1994143,
   0.2560404,
   0.2762623,
   0.3174786,
   0.2015412};
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
   0.08788158,
   0.07188904,
   0.06630153,
   0.06713351,
   0.06924511,
   0.06192368,
   0.06940369,
   0.06063023,
   0.05490206,
   0.05068214,
   0.04462747,
   0.04503807,
   0.04556629,
   0.05045292,
   0.07875815,
   0.08118688,
   0.1015278,
   0.1213127,
   0.1276622,
   0.1278913,
   0.1148158,
   0.181103,
   0.1789601,
   0.1485138,
   0.1525683,
   0.1890767,
   0.1929598,
   0.2039328,
   0.2011004,
   0.1871039,
   0.2402344,
   0.2623186,
   0.2968278,
   0.1739034};
   grae = new TGraphAsymmErrors(34,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0.02762759);
   Graph_Graph3008->SetMaximum(1.489484);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
