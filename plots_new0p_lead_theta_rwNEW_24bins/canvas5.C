#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 16:16:04 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-0.4846154,-3.484793,3.553846,385.3447);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__13->SetBinContent(1,26.33011);
   hmc__13->SetBinContent(2,73.30045);
   hmc__13->SetBinContent(3,103.0744);
   hmc__13->SetBinContent(4,136.8651);
   hmc__13->SetBinContent(5,141.8818);
   hmc__13->SetBinContent(6,150.9859);
   hmc__13->SetBinContent(7,174.2396);
   hmc__13->SetBinContent(8,171.7656);
   hmc__13->SetBinContent(9,164.8497);
   hmc__13->SetBinContent(10,149.348);
   hmc__13->SetBinContent(11,154.4259);
   hmc__13->SetBinContent(12,155.5831);
   hmc__13->SetBinContent(13,119.0641);
   hmc__13->SetBinContent(14,112.0163);
   hmc__13->SetBinContent(15,105.0185);
   hmc__13->SetBinContent(16,107.7846);
   hmc__13->SetBinContent(17,83.9404);
   hmc__13->SetBinContent(18,76.74574);
   hmc__13->SetBinContent(19,76.80762);
   hmc__13->SetBinContent(20,65.95552);
   hmc__13->SetBinContent(21,55.82807);
   hmc__13->SetBinContent(22,47.49645);
   hmc__13->SetBinContent(23,31.98304);
   hmc__13->SetBinContent(24,11.75232);
   hmc__13->SetBinError(1,14.72125);
   hmc__13->SetBinError(2,29.04999);
   hmc__13->SetBinError(3,37.55917);
   hmc__13->SetBinError(4,49.93823);
   hmc__13->SetBinError(5,53.31027);
   hmc__13->SetBinError(6,61.02153);
   hmc__13->SetBinError(7,73.22388);
   hmc__13->SetBinError(8,72.73272);
   hmc__13->SetBinError(9,65.60445);
   hmc__13->SetBinError(10,61.70489);
   hmc__13->SetBinError(11,58.16682);
   hmc__13->SetBinError(12,58.48298);
   hmc__13->SetBinError(13,48.75631);
   hmc__13->SetBinError(14,40.33149);
   hmc__13->SetBinError(15,36.2992);
   hmc__13->SetBinError(16,37.05112);
   hmc__13->SetBinError(17,32.1923);
   hmc__13->SetBinError(18,28.7981);
   hmc__13->SetBinError(19,28.6264);
   hmc__13->SetBinError(20,25.64393);
   hmc__13->SetBinError(21,29.36146);
   hmc__13->SetBinError(22,25.07011);
   hmc__13->SetBinError(23,14.32698);
   hmc__13->SetBinError(24,8.676354);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-3.484793);
   hmc__13->SetMaximum(365.9032);
   hmc__13->SetEntries(2462.59);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,3.15);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(182.9516);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,1.113335);
   hbadmatch_stack_1->SetBinContent(3,2.510412);
   hbadmatch_stack_1->SetBinContent(4,2.476318);
   hbadmatch_stack_1->SetBinContent(5,2.972709);
   hbadmatch_stack_1->SetBinContent(6,2.855414);
   hbadmatch_stack_1->SetBinContent(7,3.121388);
   hbadmatch_stack_1->SetBinContent(8,3.753279);
   hbadmatch_stack_1->SetBinContent(9,2.599577);
   hbadmatch_stack_1->SetBinContent(10,3.123547);
   hbadmatch_stack_1->SetBinContent(11,4.838711);
   hbadmatch_stack_1->SetBinContent(12,6.07337);
   hbadmatch_stack_1->SetBinContent(13,1.311045);
   hbadmatch_stack_1->SetBinContent(14,4.480775);
   hbadmatch_stack_1->SetBinContent(15,2.886045);
   hbadmatch_stack_1->SetBinContent(16,2.220626);
   hbadmatch_stack_1->SetBinContent(17,2.093907);
   hbadmatch_stack_1->SetBinContent(18,1.268811);
   hbadmatch_stack_1->SetBinContent(19,1.689429);
   hbadmatch_stack_1->SetBinContent(20,2.540224);
   hbadmatch_stack_1->SetBinContent(21,1.177667);
   hbadmatch_stack_1->SetBinContent(22,1.266751);
   hbadmatch_stack_1->SetBinContent(23,1.322064);
   hbadmatch_stack_1->SetBinContent(24,0.2193965);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.5818607);
   hbadmatch_stack_1->SetBinError(3,0.7779949);
   hbadmatch_stack_1->SetBinError(4,0.8237722);
   hbadmatch_stack_1->SetBinError(5,0.9646624);
   hbadmatch_stack_1->SetBinError(6,0.8852642);
   hbadmatch_stack_1->SetBinError(7,0.9610703);
   hbadmatch_stack_1->SetBinError(8,1.014518);
   hbadmatch_stack_1->SetBinError(9,0.903591);
   hbadmatch_stack_1->SetBinError(10,0.8994104);
   hbadmatch_stack_1->SetBinError(11,1.156699);
   hbadmatch_stack_1->SetBinError(12,1.596125);
   hbadmatch_stack_1->SetBinError(13,0.6143195);
   hbadmatch_stack_1->SetBinError(14,1.15051);
   hbadmatch_stack_1->SetBinError(15,0.8732627);
   hbadmatch_stack_1->SetBinError(16,0.7606293);
   hbadmatch_stack_1->SetBinError(17,0.7198351);
   hbadmatch_stack_1->SetBinError(18,0.5889569);
   hbadmatch_stack_1->SetBinError(19,0.6600754);
   hbadmatch_stack_1->SetBinError(20,0.7465456);
   hbadmatch_stack_1->SetBinError(21,0.5416179);
   hbadmatch_stack_1->SetBinError(22,0.6385811);
   hbadmatch_stack_1->SetBinError(23,0.5554667);
   hbadmatch_stack_1->SetBinError(24,0.2193965);
   hbadmatch_stack_1->SetEntries(235);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(2,1.454812);
   hext_stack_2->SetBinContent(3,1.697008);
   hext_stack_2->SetBinContent(4,4.378797);
   hext_stack_2->SetBinContent(5,6.710238);
   hext_stack_2->SetBinContent(6,4.117831);
   hext_stack_2->SetBinContent(7,6.635217);
   hext_stack_2->SetBinContent(8,8.663803);
   hext_stack_2->SetBinContent(9,9.145422);
   hext_stack_2->SetBinContent(10,9.561974);
   hext_stack_2->SetBinContent(11,10.35804);
   hext_stack_2->SetBinContent(12,10.78177);
   hext_stack_2->SetBinContent(13,6.075805);
   hext_stack_2->SetBinContent(14,7.455595);
   hext_stack_2->SetBinContent(15,7.540569);
   hext_stack_2->SetBinContent(16,12.38662);
   hext_stack_2->SetBinContent(17,6.221437);
   hext_stack_2->SetBinContent(18,4.054399);
   hext_stack_2->SetBinContent(19,3.979379);
   hext_stack_2->SetBinContent(20,3.807795);
   hext_stack_2->SetBinContent(21,2.517386);
   hext_stack_2->SetBinContent(22,1.697008);
   hext_stack_2->SetBinContent(23,0.973192);
   hext_stack_2->SetBinContent(24,0.8131978);
   hext_stack_2->SetBinError(2,0.8615765);
   hext_stack_2->SetBinError(3,0.8873887);
   hext_stack_2->SetBinError(4,1.350755);
   hext_stack_2->SetBinError(5,1.795792);
   hext_stack_2->SetBinError(6,1.430621);
   hext_stack_2->SetBinError(7,1.721504);
   hext_stack_2->SetBinError(8,1.911823);
   hext_stack_2->SetBinError(9,2.020317);
   hext_stack_2->SetBinError(10,1.926001);
   hext_stack_2->SetBinError(11,2.186058);
   hext_stack_2->SetBinError(12,2.050719);
   hext_stack_2->SetBinError(13,1.616168);
   hext_stack_2->SetBinError(14,1.758699);
   hext_stack_2->SetBinError(15,1.678328);
   hext_stack_2->SetBinError(16,2.338876);
   hext_stack_2->SetBinError(17,1.731894);
   hext_stack_2->SetBinError(18,1.311223);
   hext_stack_2->SetBinError(19,1.207483);
   hext_stack_2->SetBinError(20,1.24058);
   hext_stack_2->SetBinError(21,0.9575503);
   hext_stack_2->SetBinError(22,0.8873887);
   hext_stack_2->SetBinError(23,0.5618727);
   hext_stack_2->SetBinError(24,0.5750177);
   hext_stack_2->SetEntries(327);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(3,0.5016454);
   hdirt_stack_3->SetBinContent(5,1.284752);
   hdirt_stack_3->SetBinContent(6,0.4794168);
   hdirt_stack_3->SetBinContent(7,0.5529928);
   hdirt_stack_3->SetBinContent(8,0.5135057);
   hdirt_stack_3->SetBinContent(9,0.6673524);
   hdirt_stack_3->SetBinContent(10,0.5033671);
   hdirt_stack_3->SetBinContent(11,0.5570828);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.4950385);
   hdirt_stack_3->SetBinContent(15,0.6143302);
   hdirt_stack_3->SetBinContent(16,0.5388689);
   hdirt_stack_3->SetBinContent(17,0.5570828);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.4049124);
   hdirt_stack_3->SetBinContent(20,0.3867341);
   hdirt_stack_3->SetBinContent(21,0.470507);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(3,0.2964976);
   hdirt_stack_3->SetBinError(5,0.6087306);
   hdirt_stack_3->SetBinError(6,0.3402743);
   hdirt_stack_3->SetBinError(7,0.437291);
   hdirt_stack_3->SetBinError(8,0.3809293);
   hdirt_stack_3->SetBinError(9,0.3973652);
   hdirt_stack_3->SetBinError(10,0.3763708);
   hdirt_stack_3->SetBinError(11,0.4028472);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.2933304);
   hdirt_stack_3->SetBinError(15,0.39051);
   hdirt_stack_3->SetBinError(16,0.4239131);
   hdirt_stack_3->SetBinError(17,0.4028472);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4049124);
   hdirt_stack_3->SetBinError(20,0.2742997);
   hdirt_stack_3->SetBinError(21,0.333502);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetEntries(44);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,1.110369);
   houtFV_stack_4->SetBinContent(2,4.159526);
   houtFV_stack_4->SetBinContent(3,7.666118);
   houtFV_stack_4->SetBinContent(4,7.148304);
   houtFV_stack_4->SetBinContent(5,9.14287);
   houtFV_stack_4->SetBinContent(6,7.725525);
   houtFV_stack_4->SetBinContent(7,8.390945);
   houtFV_stack_4->SetBinContent(8,8.7472);
   houtFV_stack_4->SetBinContent(9,5.317544);
   houtFV_stack_4->SetBinContent(10,6.132512);
   houtFV_stack_4->SetBinContent(11,5.371703);
   houtFV_stack_4->SetBinContent(12,5.18344);
   houtFV_stack_4->SetBinContent(13,5.803148);
   houtFV_stack_4->SetBinContent(14,4.807203);
   houtFV_stack_4->SetBinContent(15,7.810824);
   houtFV_stack_4->SetBinContent(16,5.450477);
   houtFV_stack_4->SetBinContent(17,4.249735);
   houtFV_stack_4->SetBinContent(18,3.908807);
   houtFV_stack_4->SetBinContent(19,5.872851);
   houtFV_stack_4->SetBinContent(20,4.39996);
   houtFV_stack_4->SetBinContent(21,3.920314);
   houtFV_stack_4->SetBinContent(22,5.913668);
   houtFV_stack_4->SetBinContent(23,5.384787);
   houtFV_stack_4->SetBinContent(24,1.36232);
   houtFV_stack_4->SetBinError(1,0.6452545);
   houtFV_stack_4->SetBinError(2,0.9813267);
   houtFV_stack_4->SetBinError(3,1.429298);
   houtFV_stack_4->SetBinError(4,1.433033);
   houtFV_stack_4->SetBinError(5,1.494814);
   houtFV_stack_4->SetBinError(6,1.344838);
   houtFV_stack_4->SetBinError(7,1.376801);
   houtFV_stack_4->SetBinError(8,1.475592);
   houtFV_stack_4->SetBinError(9,1.116752);
   houtFV_stack_4->SetBinError(10,1.232739);
   houtFV_stack_4->SetBinError(11,1.160549);
   houtFV_stack_4->SetBinError(12,1.145203);
   houtFV_stack_4->SetBinError(13,1.263838);
   houtFV_stack_4->SetBinError(14,1.11461);
   houtFV_stack_4->SetBinError(15,1.396844);
   houtFV_stack_4->SetBinError(16,1.14341);
   houtFV_stack_4->SetBinError(17,1.038438);
   houtFV_stack_4->SetBinError(18,1.011954);
   houtFV_stack_4->SetBinError(19,1.201413);
   houtFV_stack_4->SetBinError(20,1.076116);
   houtFV_stack_4->SetBinError(21,0.9537897);
   houtFV_stack_4->SetBinError(22,1.226083);
   houtFV_stack_4->SetBinError(23,1.189557);
   houtFV_stack_4->SetBinError(24,0.5710898);
   houtFV_stack_4->SetEntries(584);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.004904);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9481038);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.170808);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.436358);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.088772);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4872539);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6971721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3553864);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2696619);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3538311);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.398251);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4017382);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1840142);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3138005);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(268);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.05077);
   hNCpi0inFVres_stack_7->SetBinContent(2,22.82894);
   hNCpi0inFVres_stack_7->SetBinContent(3,36.77102);
   hNCpi0inFVres_stack_7->SetBinContent(4,58.05399);
   hNCpi0inFVres_stack_7->SetBinContent(5,59.94771);
   hNCpi0inFVres_stack_7->SetBinContent(6,67.86801);
   hNCpi0inFVres_stack_7->SetBinContent(7,77.84529);
   hNCpi0inFVres_stack_7->SetBinContent(8,78.75455);
   hNCpi0inFVres_stack_7->SetBinContent(9,71.57708);
   hNCpi0inFVres_stack_7->SetBinContent(10,71.5294);
   hNCpi0inFVres_stack_7->SetBinContent(11,67.21751);
   hNCpi0inFVres_stack_7->SetBinContent(12,63.6445);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.83686);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.02489);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.69989);
   hNCpi0inFVres_stack_7->SetBinContent(16,43.65569);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.44197);
   hNCpi0inFVres_stack_7->SetBinContent(18,34.14424);
   hNCpi0inFVres_stack_7->SetBinContent(19,31.07426);
   hNCpi0inFVres_stack_7->SetBinContent(20,25.43211);
   hNCpi0inFVres_stack_7->SetBinContent(21,21.92252);
   hNCpi0inFVres_stack_7->SetBinContent(22,15.59002);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.147752);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.360306);
   hNCpi0inFVres_stack_7->SetBinError(1,1.033785);
   hNCpi0inFVres_stack_7->SetBinError(2,1.564488);
   hNCpi0inFVres_stack_7->SetBinError(3,1.966192);
   hNCpi0inFVres_stack_7->SetBinError(4,2.51452);
   hNCpi0inFVres_stack_7->SetBinError(5,2.518632);
   hNCpi0inFVres_stack_7->SetBinError(6,2.658124);
   hNCpi0inFVres_stack_7->SetBinError(7,2.987614);
   hNCpi0inFVres_stack_7->SetBinError(8,2.918422);
   hNCpi0inFVres_stack_7->SetBinError(9,2.77646);
   hNCpi0inFVres_stack_7->SetBinError(10,2.738692);
   hNCpi0inFVres_stack_7->SetBinError(11,2.681486);
   hNCpi0inFVres_stack_7->SetBinError(12,2.664024);
   hNCpi0inFVres_stack_7->SetBinError(13,2.407803);
   hNCpi0inFVres_stack_7->SetBinError(14,2.267771);
   hNCpi0inFVres_stack_7->SetBinError(15,2.248467);
   hNCpi0inFVres_stack_7->SetBinError(16,2.082699);
   hNCpi0inFVres_stack_7->SetBinError(17,2.103079);
   hNCpi0inFVres_stack_7->SetBinError(18,1.845902);
   hNCpi0inFVres_stack_7->SetBinError(19,1.86864);
   hNCpi0inFVres_stack_7->SetBinError(20,1.633356);
   hNCpi0inFVres_stack_7->SetBinError(21,1.554213);
   hNCpi0inFVres_stack_7->SetBinError(22,1.296161);
   hNCpi0inFVres_stack_7->SetBinError(23,1.006312);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6454354);
   hNCpi0inFVres_stack_7->SetEntries(19586);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.585339);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.94738);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.7946);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.78466);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.7374);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.95155);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.33161);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.03225);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.2112);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.801406);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.69421);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.10085);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.874634);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.415775);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.266818);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.191247);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.561749);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.338213);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.4088);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.05847);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.576536);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.374084);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.567144);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.488086);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7029263);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9209547);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.110445);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.303447);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.24318);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.129127);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.215824);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.125041);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.128955);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9995856);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.081022);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.183077);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8731554);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.826478);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8765668);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8389422);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.729419);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6784593);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7441662);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6500418);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7899188);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5585275);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5307164);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2304939);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.4188362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.277838);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(25);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,4.534969);
   hCCpi0inFV_stack_10->SetBinContent(2,14.526);
   hCCpi0inFV_stack_10->SetBinContent(3,19.67605);
   hCCpi0inFV_stack_10->SetBinContent(4,17.9388);
   hCCpi0inFV_stack_10->SetBinContent(5,16.83909);
   hCCpi0inFV_stack_10->SetBinContent(6,26.5779);
   hCCpi0inFV_stack_10->SetBinContent(7,27.79158);
   hCCpi0inFV_stack_10->SetBinContent(8,25.12422);
   hCCpi0inFV_stack_10->SetBinContent(9,26.20462);
   hCCpi0inFV_stack_10->SetBinContent(10,17.59472);
   hCCpi0inFV_stack_10->SetBinContent(11,21.77304);
   hCCpi0inFV_stack_10->SetBinContent(12,21.03341);
   hCCpi0inFV_stack_10->SetBinContent(13,14.77101);
   hCCpi0inFV_stack_10->SetBinContent(14,11.94541);
   hCCpi0inFV_stack_10->SetBinContent(15,14.6066);
   hCCpi0inFV_stack_10->SetBinContent(16,15.71999);
   hCCpi0inFV_stack_10->SetBinContent(17,11.16858);
   hCCpi0inFV_stack_10->SetBinContent(18,12.45721);
   hCCpi0inFV_stack_10->SetBinContent(19,11.55527);
   hCCpi0inFV_stack_10->SetBinContent(20,12.70718);
   hCCpi0inFV_stack_10->SetBinContent(21,7.337166);
   hCCpi0inFV_stack_10->SetBinContent(22,8.585129);
   hCCpi0inFV_stack_10->SetBinContent(23,5.214077);
   hCCpi0inFV_stack_10->SetBinContent(24,1.372048);
   hCCpi0inFV_stack_10->SetBinError(1,1.109837);
   hCCpi0inFV_stack_10->SetBinError(2,1.93124);
   hCCpi0inFV_stack_10->SetBinError(3,2.293056);
   hCCpi0inFV_stack_10->SetBinError(4,2.085802);
   hCCpi0inFV_stack_10->SetBinError(5,2.037912);
   hCCpi0inFV_stack_10->SetBinError(6,2.657945);
   hCCpi0inFV_stack_10->SetBinError(7,2.688592);
   hCCpi0inFV_stack_10->SetBinError(8,2.566254);
   hCCpi0inFV_stack_10->SetBinError(9,2.615923);
   hCCpi0inFV_stack_10->SetBinError(10,2.072445);
   hCCpi0inFV_stack_10->SetBinError(11,2.33758);
   hCCpi0inFV_stack_10->SetBinError(12,2.255924);
   hCCpi0inFV_stack_10->SetBinError(13,1.925013);
   hCCpi0inFV_stack_10->SetBinError(14,1.690767);
   hCCpi0inFV_stack_10->SetBinError(15,1.96036);
   hCCpi0inFV_stack_10->SetBinError(16,1.99062);
   hCCpi0inFV_stack_10->SetBinError(17,1.609041);
   hCCpi0inFV_stack_10->SetBinError(18,1.754715);
   hCCpi0inFV_stack_10->SetBinError(19,1.737772);
   hCCpi0inFV_stack_10->SetBinError(20,1.75482);
   hCCpi0inFV_stack_10->SetBinError(21,1.316504);
   hCCpi0inFV_stack_10->SetBinError(22,1.460238);
   hCCpi0inFV_stack_10->SetBinError(23,1.190738);
   hCCpi0inFV_stack_10->SetBinError(24,0.5750712);
   hCCpi0inFV_stack_10->SetEntries(1562);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.053982);
   hNCinFV_stack_11->SetBinContent(2,8.747748);
   hNCinFV_stack_11->SetBinContent(3,11.12899);
   hNCinFV_stack_11->SetBinContent(4,16.11173);
   hNCinFV_stack_11->SetBinContent(5,16.02044);
   hNCinFV_stack_11->SetBinContent(6,14.0214);
   hNCinFV_stack_11->SetBinContent(7,15.28852);
   hNCinFV_stack_11->SetBinContent(8,11.78193);
   hNCinFV_stack_11->SetBinContent(9,12.4589);
   hNCinFV_stack_11->SetBinContent(10,6.443798);
   hNCinFV_stack_11->SetBinContent(11,10.0267);
   hNCinFV_stack_11->SetBinContent(12,5.80209);
   hNCinFV_stack_11->SetBinContent(13,9.615284);
   hNCinFV_stack_11->SetBinContent(14,4.986725);
   hNCinFV_stack_11->SetBinContent(15,7.61902);
   hNCinFV_stack_11->SetBinContent(16,7.469403);
   hNCinFV_stack_11->SetBinContent(17,5.528081);
   hNCinFV_stack_11->SetBinContent(18,7.180788);
   hNCinFV_stack_11->SetBinContent(19,7.379193);
   hNCinFV_stack_11->SetBinContent(20,3.766095);
   hNCinFV_stack_11->SetBinContent(21,4.751363);
   hNCinFV_stack_11->SetBinContent(22,5.121734);
   hNCinFV_stack_11->SetBinContent(23,4.05133);
   hNCinFV_stack_11->SetBinContent(24,2.002419);
   hNCinFV_stack_11->SetBinError(1,0.7078105);
   hNCinFV_stack_11->SetBinError(2,1.468473);
   hNCinFV_stack_11->SetBinError(3,1.722341);
   hNCinFV_stack_11->SetBinError(4,2.009801);
   hNCinFV_stack_11->SetBinError(5,2.03025);
   hNCinFV_stack_11->SetBinError(6,1.892948);
   hNCinFV_stack_11->SetBinError(7,1.982287);
   hNCinFV_stack_11->SetBinError(8,1.688067);
   hNCinFV_stack_11->SetBinError(9,1.754904);
   hNCinFV_stack_11->SetBinError(10,1.286487);
   hNCinFV_stack_11->SetBinError(11,1.583432);
   hNCinFV_stack_11->SetBinError(12,1.256163);
   hNCinFV_stack_11->SetBinError(13,1.619014);
   hNCinFV_stack_11->SetBinError(14,1.128181);
   hNCinFV_stack_11->SetBinError(15,1.373042);
   hNCinFV_stack_11->SetBinError(16,1.415697);
   hNCinFV_stack_11->SetBinError(17,1.10931);
   hNCinFV_stack_11->SetBinError(18,1.359959);
   hNCinFV_stack_11->SetBinError(19,1.374353);
   hNCinFV_stack_11->SetBinError(20,0.9410676);
   hNCinFV_stack_11->SetBinError(21,1.039113);
   hNCinFV_stack_11->SetBinError(22,1.16039);
   hNCinFV_stack_11->SetBinError(23,1.01931);
   hNCinFV_stack_11->SetBinError(24,0.7348366);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.96125);
   hnumuCCinFV_stack_12->SetBinContent(2,7.970353);
   hnumuCCinFV_stack_12->SetBinContent(3,9.02234);
   hnumuCCinFV_stack_12->SetBinContent(4,12.61628);
   hnumuCCinFV_stack_12->SetBinContent(5,12.63673);
   hnumuCCinFV_stack_12->SetBinContent(6,13.60171);
   hnumuCCinFV_stack_12->SetBinContent(7,18.91412);
   hnumuCCinFV_stack_12->SetBinContent(8,21.64203);
   hnumuCCinFV_stack_12->SetBinContent(9,24.87296);
   hnumuCCinFV_stack_12->SetBinContent(10,23.28545);
   hnumuCCinFV_stack_12->SetBinContent(11,22.7249);
   hnumuCCinFV_stack_12->SetBinContent(12,29.62809);
   hnumuCCinFV_stack_12->SetBinContent(13,17.67385);
   hnumuCCinFV_stack_12->SetBinContent(14,19.40597);
   hnumuCCinFV_stack_12->SetBinContent(15,8.147789);
   hnumuCCinFV_stack_12->SetBinContent(16,12.37253);
   hnumuCCinFV_stack_12->SetBinContent(17,8.632124);
   hnumuCCinFV_stack_12->SetBinContent(18,7.616726);
   hnumuCCinFV_stack_12->SetBinContent(19,8.972645);
   hnumuCCinFV_stack_12->SetBinContent(20,7.622248);
   hnumuCCinFV_stack_12->SetBinContent(21,7.511331);
   hnumuCCinFV_stack_12->SetBinContent(22,5.08099);
   hnumuCCinFV_stack_12->SetBinContent(23,2.989988);
   hnumuCCinFV_stack_12->SetBinContent(24,2.10665);
   hnumuCCinFV_stack_12->SetBinError(1,0.8909448);
   hnumuCCinFV_stack_12->SetBinError(2,1.532476);
   hnumuCCinFV_stack_12->SetBinError(3,1.538982);
   hnumuCCinFV_stack_12->SetBinError(4,2.338016);
   hnumuCCinFV_stack_12->SetBinError(5,1.876725);
   hnumuCCinFV_stack_12->SetBinError(6,2.078918);
   hnumuCCinFV_stack_12->SetBinError(7,2.658635);
   hnumuCCinFV_stack_12->SetBinError(8,3.407733);
   hnumuCCinFV_stack_12->SetBinError(9,2.958871);
   hnumuCCinFV_stack_12->SetBinError(10,2.675735);
   hnumuCCinFV_stack_12->SetBinError(11,2.717479);
   hnumuCCinFV_stack_12->SetBinError(12,3.464949);
   hnumuCCinFV_stack_12->SetBinError(13,2.32287);
   hnumuCCinFV_stack_12->SetBinError(14,2.70782);
   hnumuCCinFV_stack_12->SetBinError(15,1.465511);
   hnumuCCinFV_stack_12->SetBinError(16,1.887487);
   hnumuCCinFV_stack_12->SetBinError(17,1.828209);
   hnumuCCinFV_stack_12->SetBinError(18,1.783761);
   hnumuCCinFV_stack_12->SetBinError(19,1.656664);
   hnumuCCinFV_stack_12->SetBinError(20,1.448137);
   hnumuCCinFV_stack_12->SetBinError(21,1.45231);
   hnumuCCinFV_stack_12->SetBinError(22,1.161953);
   hnumuCCinFV_stack_12->SetBinError(23,0.8658682);
   hnumuCCinFV_stack_12->SetBinError(24,0.7240944);
   hnumuCCinFV_stack_12->SetEntries(1201);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.338649);
   hnueCCinFV_stack_13->SetBinContent(2,3.798719);
   hnueCCinFV_stack_13->SetBinContent(3,1.121981);
   hnueCCinFV_stack_13->SetBinContent(4,0.9892863);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(7,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(10,1.14862);
   hnueCCinFV_stack_13->SetBinContent(11,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(14,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(15,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(16,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(17,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(18,0.2505759);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.4402164);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.8131529);
   hnueCCinFV_stack_13->SetBinError(2,1.771535);
   hnueCCinFV_stack_13->SetBinError(3,0.5867897);
   hnueCCinFV_stack_13->SetBinError(4,0.506799);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3397478);
   hnueCCinFV_stack_13->SetBinError(7,0.4810838);
   hnueCCinFV_stack_13->SetBinError(10,0.5845149);
   hnueCCinFV_stack_13->SetBinError(11,0.3174228);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(14,0.5946997);
   hnueCCinFV_stack_13->SetBinError(15,0.2556436);
   hnueCCinFV_stack_13->SetBinError(16,0.2486649);
   hnueCCinFV_stack_13->SetBinError(17,0.2346262);
   hnueCCinFV_stack_13->SetBinError(18,0.2502083);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.3132948);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.2781975);
   hnueCCinFV_stack_13->SetEntries(52);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__14->SetBinContent(1,26.33011);
   hmcerror__14->SetBinContent(2,73.30045);
   hmcerror__14->SetBinContent(3,103.0744);
   hmcerror__14->SetBinContent(4,136.8651);
   hmcerror__14->SetBinContent(5,141.8818);
   hmcerror__14->SetBinContent(6,150.9859);
   hmcerror__14->SetBinContent(7,174.2396);
   hmcerror__14->SetBinContent(8,171.7656);
   hmcerror__14->SetBinContent(9,164.8497);
   hmcerror__14->SetBinContent(10,149.348);
   hmcerror__14->SetBinContent(11,154.4259);
   hmcerror__14->SetBinContent(12,155.5831);
   hmcerror__14->SetBinContent(13,119.0641);
   hmcerror__14->SetBinContent(14,112.0163);
   hmcerror__14->SetBinContent(15,105.0185);
   hmcerror__14->SetBinContent(16,107.7846);
   hmcerror__14->SetBinContent(17,83.9404);
   hmcerror__14->SetBinContent(18,76.74574);
   hmcerror__14->SetBinContent(19,76.80762);
   hmcerror__14->SetBinContent(20,65.95552);
   hmcerror__14->SetBinContent(21,55.82807);
   hmcerror__14->SetBinContent(22,47.49645);
   hmcerror__14->SetBinContent(23,31.98304);
   hmcerror__14->SetBinContent(24,11.75232);
   hmcerror__14->SetBinError(1,14.72125);
   hmcerror__14->SetBinError(2,29.04999);
   hmcerror__14->SetBinError(3,37.55917);
   hmcerror__14->SetBinError(4,49.93823);
   hmcerror__14->SetBinError(5,53.31027);
   hmcerror__14->SetBinError(6,61.02153);
   hmcerror__14->SetBinError(7,73.22388);
   hmcerror__14->SetBinError(8,72.73272);
   hmcerror__14->SetBinError(9,65.60445);
   hmcerror__14->SetBinError(10,61.70489);
   hmcerror__14->SetBinError(11,58.16682);
   hmcerror__14->SetBinError(12,58.48298);
   hmcerror__14->SetBinError(13,48.75631);
   hmcerror__14->SetBinError(14,40.33149);
   hmcerror__14->SetBinError(15,36.2992);
   hmcerror__14->SetBinError(16,37.05112);
   hmcerror__14->SetBinError(17,32.1923);
   hmcerror__14->SetBinError(18,28.7981);
   hmcerror__14->SetBinError(19,28.6264);
   hmcerror__14->SetBinError(20,25.64393);
   hmcerror__14->SetBinError(21,29.36146);
   hmcerror__14->SetBinError(22,25.07011);
   hmcerror__14->SetBinError(23,14.32698);
   hmcerror__14->SetBinError(24,8.676354);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(2462.59);

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
   
   Double_t _fx3017[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3017[24] = {
   17,
   45,
   72,
   106,
   95,
   103,
   131,
   120,
   134,
   111,
   140,
   98,
   90,
   81,
   83,
   63,
   74,
   60,
   60,
   53,
   45,
   36,
   28,
   4};
   Double_t _felx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3017[24] = {
   4.2835,
   6.8416,
   8.6108,
   10.29563,
   9.8686,
   10.14889,
   11.44552,
   10.95445,
   11.57584,
   10.53565,
   11.83216,
   10.0209,
   9.6093,
   9.1239,
   9.234,
   8.0648,
   8.7275,
   7.8743,
   7.8743,
   7.4105,
   6.8416,
   6.1381,
   5.4358,
   2.29683};
   Double_t _fehx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3017[24] = {
   4.0673,
   6.637,
   8.4085,
   10.29563,
   9.667,
   10.14889,
   11.44552,
   10.95445,
   11.57584,
   10.53565,
   11.83216,
   9.82,
   9.4079,
   8.9221,
   9.0323,
   7.862,
   8.5253,
   7.6713,
   7.6713,
   7.2068,
   6.637,
   5.9318,
   5.2271,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(1.532853);
   Graph_Graph3017->SetMaximum(166.8451);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3018[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3018[24] = {
   0.5591033,
   0.396314,
   0.3643888,
   0.364872,
   0.3757372,
   0.4041538,
   0.4202481,
   0.4234418,
   0.3979653,
   0.4131619,
   0.376665,
   0.3758954,
   0.4094962,
   0.3600503,
   0.3456458,
   0.3437516,
   0.3835137,
   0.3752404,
   0.3727027,
   0.3888065,
   0.5259265,
   0.5278311,
   0.4479555,
   0.7382671};
   Double_t _fehx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3018[24] = {
   0.5591033,
   0.396314,
   0.3643888,
   0.364872,
   0.3757372,
   0.4041538,
   0.4202481,
   0.4234418,
   0.3979653,
   0.4131619,
   0.376665,
   0.3758954,
   0.4094962,
   0.3600503,
   0.3456458,
   0.3437516,
   0.3835137,
   0.3752404,
   0.3727027,
   0.3888065,
   0.5259265,
   0.5278311,
   0.4479555,
   0.7382671};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3019[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3019[24] = {
   0.3029557,
   0.2766737,
   0.3104971,
   0.3359762,
   0.3565567,
   0.368927,
   0.3803105,
   0.3883397,
   0.3767533,
   0.3670834,
   0.3445054,
   0.3389138,
   0.3304537,
   0.3270703,
   0.3161187,
   0.2954771,
   0.3404928,
   0.3319497,
   0.3159376,
   0.3050479,
   0.3114798,
   0.289358,
   0.2913547,
   0.2970608};
   Double_t _fehx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3019[24] = {
   0.3029557,
   0.2766737,
   0.3104971,
   0.3359762,
   0.3565567,
   0.368927,
   0.3803105,
   0.3883397,
   0.3767533,
   0.3670834,
   0.3445054,
   0.3389138,
   0.3304537,
   0.3270703,
   0.3161187,
   0.2954771,
   0.3404928,
   0.3319497,
   0.3159376,
   0.3050479,
   0.3114798,
   0.289358,
   0.2913547,
   0.2970608};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
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
   
   Double_t _fx3020[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3020[24] = {
   0.6456487,
   0.6139117,
   0.6985244,
   0.7744853,
   0.6695715,
   0.6821828,
   0.7518381,
   0.6986266,
   0.8128619,
   0.7432306,
   0.9065838,
   0.6298885,
   0.755895,
   0.7231091,
   0.790337,
   0.5844993,
   0.8815779,
   0.7818024,
   0.7811725,
   0.8035719,
   0.8060461,
   0.7579513,
   0.875464,
   0.3403582};
   Double_t _felx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3020[24] = {
   0.1626845,
   0.0933364,
   0.08353964,
   0.07522467,
   0.06955509,
   0.06721747,
   0.0656884,
   0.0637756,
   0.07022057,
   0.07054433,
   0.07662032,
   0.06440867,
   0.08070691,
   0.08145155,
   0.08792738,
   0.07482334,
   0.1039726,
   0.1026024,
   0.1025198,
   0.112356,
   0.1225477,
   0.1292328,
   0.1699588,
   0.1954363};
   Double_t _fehx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3020[24] = {
   0.1544734,
   0.09054515,
   0.08157698,
   0.07522467,
   0.06813418,
   0.06721747,
   0.0656884,
   0.0637756,
   0.07022057,
   0.07054433,
   0.07662032,
   0.0631174,
   0.07901539,
   0.07965002,
   0.08600676,
   0.07294181,
   0.1015637,
   0.09995735,
   0.09987681,
   0.1092676,
   0.1188828,
   0.1248893,
   0.1634335,
   0.1686356};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.05552443);
   Graph_Graph3020->SetMaximum(1.128295);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
