#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Feb 17 20:27:24 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",216,172,1200,900);
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
   pad1->Range(-40,-1.182642,293.3333,130.7753);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__22->SetBinContent(0,3.827691);
   hmc__22->SetBinContent(1,48.91153);
   hmc__22->SetBinContent(2,52.15853);
   hmc__22->SetBinContent(3,52.33115);
   hmc__22->SetBinContent(4,38.3435);
   hmc__22->SetBinContent(5,33.26967);
   hmc__22->SetBinContent(6,32.61237);
   hmc__22->SetBinContent(7,28.06853);
   hmc__22->SetBinContent(8,30.41454);
   hmc__22->SetBinContent(9,28.00542);
   hmc__22->SetBinContent(10,30.81769);
   hmc__22->SetBinContent(11,29.1569);
   hmc__22->SetBinContent(12,27.97892);
   hmc__22->SetBinContent(13,30.00127);
   hmc__22->SetBinContent(14,25.06006);
   hmc__22->SetBinContent(15,30.35844);
   hmc__22->SetBinContent(16,28.55115);
   hmc__22->SetBinContent(17,28.9492);
   hmc__22->SetBinContent(18,37.4655);
   hmc__22->SetBinContent(19,25.56724);
   hmc__22->SetBinContent(20,31.79959);
   hmc__22->SetBinContent(21,38.53099);
   hmc__22->SetBinContent(22,42.60867);
   hmc__22->SetBinContent(23,52.33371);
   hmc__22->SetBinContent(24,58.35648);
   hmc__22->SetBinContent(25,59.13211);
   hmc__22->SetBinContent(26,36.29709);
   hmc__22->SetBinContent(27,3.089883);
   hmc__22->SetBinError(0,1.062042);
   hmc__22->SetBinError(1,15.93994);
   hmc__22->SetBinError(2,22.2489);
   hmc__22->SetBinError(3,16.79879);
   hmc__22->SetBinError(4,14.81342);
   hmc__22->SetBinError(5,16.03197);
   hmc__22->SetBinError(6,15.80378);
   hmc__22->SetBinError(7,15.28619);
   hmc__22->SetBinError(8,13.6962);
   hmc__22->SetBinError(9,12.67329);
   hmc__22->SetBinError(10,14.15053);
   hmc__22->SetBinError(11,10.18421);
   hmc__22->SetBinError(12,13.03914);
   hmc__22->SetBinError(13,10.75938);
   hmc__22->SetBinError(14,12.23796);
   hmc__22->SetBinError(15,10.77897);
   hmc__22->SetBinError(16,13.45604);
   hmc__22->SetBinError(17,13.215);
   hmc__22->SetBinError(18,16.89307);
   hmc__22->SetBinError(19,14.35281);
   hmc__22->SetBinError(20,12.17314);
   hmc__22->SetBinError(21,15.90629);
   hmc__22->SetBinError(22,15.46882);
   hmc__22->SetBinError(23,27.20581);
   hmc__22->SetBinError(24,19.696);
   hmc__22->SetBinError(25,21.00851);
   hmc__22->SetBinError(26,24.91051);
   hmc__22->SetBinError(27,4.122173);
   hmc__22->SetMinimum(-1.182642);
   hmc__22->SetMaximum(124.1774);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",26,0,260);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(62.08872);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,1.309151);
   hbadmatch_stack_1->SetBinContent(2,0.5352025);
   hbadmatch_stack_1->SetBinContent(3,0.4281982);
   hbadmatch_stack_1->SetBinContent(4,0.9801958);
   hbadmatch_stack_1->SetBinContent(5,0.3917402);
   hbadmatch_stack_1->SetBinContent(6,0.3934307);
   hbadmatch_stack_1->SetBinContent(7,0.7834804);
   hbadmatch_stack_1->SetBinContent(8,1.209044);
   hbadmatch_stack_1->SetBinContent(9,1.127039);
   hbadmatch_stack_1->SetBinContent(10,0.6803553);
   hbadmatch_stack_1->SetBinContent(11,0.7336084);
   hbadmatch_stack_1->SetBinContent(12,1.441677);
   hbadmatch_stack_1->SetBinContent(13,1.020533);
   hbadmatch_stack_1->SetBinContent(14,1.125212);
   hbadmatch_stack_1->SetBinContent(15,1.096081);
   hbadmatch_stack_1->SetBinContent(16,1.801592);
   hbadmatch_stack_1->SetBinContent(17,0.6403855);
   hbadmatch_stack_1->SetBinContent(18,1.722413);
   hbadmatch_stack_1->SetBinContent(19,2.340058);
   hbadmatch_stack_1->SetBinContent(20,1.829467);
   hbadmatch_stack_1->SetBinContent(21,1.108344);
   hbadmatch_stack_1->SetBinContent(22,1.710422);
   hbadmatch_stack_1->SetBinContent(23,3.024645);
   hbadmatch_stack_1->SetBinContent(24,1.407642);
   hbadmatch_stack_1->SetBinContent(25,1.465526);
   hbadmatch_stack_1->SetBinContent(26,2.288332);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6873098);
   hbadmatch_stack_1->SetBinError(2,0.3921167);
   hbadmatch_stack_1->SetBinError(3,0.3037782);
   hbadmatch_stack_1->SetBinError(4,0.4383608);
   hbadmatch_stack_1->SetBinError(5,0.2770047);
   hbadmatch_stack_1->SetBinError(6,0.2781975);
   hbadmatch_stack_1->SetBinError(7,0.3917439);
   hbadmatch_stack_1->SetBinError(8,0.4943914);
   hbadmatch_stack_1->SetBinError(9,0.5201044);
   hbadmatch_stack_1->SetBinError(10,0.4810838);
   hbadmatch_stack_1->SetBinError(11,0.4394482);
   hbadmatch_stack_1->SetBinError(12,0.8112438);
   hbadmatch_stack_1->SetBinError(13,0.5892049);
   hbadmatch_stack_1->SetBinError(14,0.5886154);
   hbadmatch_stack_1->SetBinError(15,0.5640789);
   hbadmatch_stack_1->SetBinError(16,0.7491311);
   hbadmatch_stack_1->SetBinError(17,0.3719954);
   hbadmatch_stack_1->SetBinError(18,0.685213);
   hbadmatch_stack_1->SetBinError(19,1.222473);
   hbadmatch_stack_1->SetBinError(20,0.7150439);
   hbadmatch_stack_1->SetBinError(21,0.568989);
   hbadmatch_stack_1->SetBinError(22,0.7237216);
   hbadmatch_stack_1->SetBinError(23,0.9422365);
   hbadmatch_stack_1->SetBinError(24,0.5890407);
   hbadmatch_stack_1->SetBinError(25,0.6209405);
   hbadmatch_stack_1->SetBinError(26,0.8568651);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.7309963);
   hext_stack_2->SetBinContent(1,8.477858);
   hext_stack_2->SetBinContent(2,6.489584);
   hext_stack_2->SetBinContent(3,12.29006);
   hext_stack_2->SetBinContent(4,8.485039);
   hext_stack_2->SetBinContent(5,6.165187);
   hext_stack_2->SetBinContent(6,8.656622);
   hext_stack_2->SetBinContent(7,5.89704);
   hext_stack_2->SetBinContent(8,5.89704);
   hext_stack_2->SetBinContent(9,5.001641);
   hext_stack_2->SetBinContent(10,9.526072);
   hext_stack_2->SetBinContent(11,10.58146);
   hext_stack_2->SetBinContent(12,4.703194);
   hext_stack_2->SetBinContent(13,9.305417);
   hext_stack_2->SetBinContent(14,5.027592);
   hext_stack_2->SetBinContent(15,9.753906);
   hext_stack_2->SetBinContent(16,5.199175);
   hext_stack_2->SetBinContent(17,8.417198);
   hext_stack_2->SetBinContent(18,8.447557);
   hext_stack_2->SetBinContent(19,2.994597);
   hext_stack_2->SetBinContent(20,6.400202);
   hext_stack_2->SetBinContent(21,5.669206);
   hext_stack_2->SetBinContent(22,6.071396);
   hext_stack_2->SetBinContent(23,8.846975);
   hext_stack_2->SetBinContent(24,10.2902);
   hext_stack_2->SetBinContent(25,15.50531);
   hext_stack_2->SetBinContent(26,3.647801);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinError(0,0.5201503);
   hext_stack_2->SetBinError(1,2.034329);
   hext_stack_2->SetBinError(2,1.605029);
   hext_stack_2->SetBinError(3,2.410945);
   hext_stack_2->SetBinError(4,1.984261);
   hext_stack_2->SetBinError(5,1.571905);
   hext_stack_2->SetBinError(6,1.963739);
   hext_stack_2->SetBinError(7,1.701242);
   hext_stack_2->SetBinError(8,1.701242);
   hext_stack_2->SetBinError(9,1.582242);
   hext_stack_2->SetBinError(10,2.171517);
   hext_stack_2->SetBinError(11,2.256386);
   hext_stack_2->SetBinError(12,1.389163);
   hext_stack_2->SetBinError(13,2.016615);
   hext_stack_2->SetBinError(14,1.426537);
   hext_stack_2->SetBinError(15,2.272231);
   hext_stack_2->SetBinError(16,1.397849);
   hext_stack_2->SetBinError(17,1.864082);
   hext_stack_2->SetBinError(18,1.772411);
   hext_stack_2->SetBinError(19,1.099269);
   hext_stack_2->SetBinError(20,1.648403);
   hext_stack_2->SetBinError(21,1.564185);
   hext_stack_2->SetBinError(22,1.573809);
   hext_stack_2->SetBinError(23,1.872956);
   hext_stack_2->SetBinError(24,2.077585);
   hext_stack_2->SetBinError(25,2.76944);
   hext_stack_2->SetBinError(26,1.246589);
   hext_stack_2->SetBinError(27,0.6416141);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(2,1.758908);
   hdirt_stack_3->SetBinContent(3,0.5638119);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2989119);
   hdirt_stack_3->SetBinContent(6,0.5522859);
   hdirt_stack_3->SetBinContent(7,0.6951543);
   hdirt_stack_3->SetBinContent(8,0.6926074);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.4759863);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(17,0.3986344);
   hdirt_stack_3->SetBinContent(18,1.200645);
   hdirt_stack_3->SetBinContent(20,0.5852764);
   hdirt_stack_3->SetBinContent(21,2.46618);
   hdirt_stack_3->SetBinContent(22,0.4965173);
   hdirt_stack_3->SetBinContent(23,0.9098686);
   hdirt_stack_3->SetBinContent(24,2.855974);
   hdirt_stack_3->SetBinContent(25,1.791767);
   hdirt_stack_3->SetBinContent(26,1.698144);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(2,0.7430146);
   hdirt_stack_3->SetBinError(3,0.4029034);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.211975);
   hdirt_stack_3->SetBinError(6,0.2761429);
   hdirt_stack_3->SetBinError(7,0.4258516);
   hdirt_stack_3->SetBinError(8,0.4009512);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.2832671);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(17,0.2948844);
   hdirt_stack_3->SetBinError(18,0.6300436);
   hdirt_stack_3->SetBinError(20,0.4188361);
   hdirt_stack_3->SetBinError(21,1.139922);
   hdirt_stack_3->SetBinError(22,0.3734153);
   hdirt_stack_3->SetBinError(23,0.4190489);
   hdirt_stack_3->SetBinError(24,0.8774884);
   hdirt_stack_3->SetBinError(25,0.754641);
   hdirt_stack_3->SetBinError(26,0.732511);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,2.681084);
   houtFV_stack_4->SetBinContent(1,25.06372);
   houtFV_stack_4->SetBinContent(2,12.29396);
   houtFV_stack_4->SetBinContent(3,10.69045);
   houtFV_stack_4->SetBinContent(4,7.148705);
   houtFV_stack_4->SetBinContent(5,5.031525);
   houtFV_stack_4->SetBinContent(6,3.912939);
   houtFV_stack_4->SetBinContent(7,5.529556);
   houtFV_stack_4->SetBinContent(8,5.836945);
   houtFV_stack_4->SetBinContent(9,5.814728);
   houtFV_stack_4->SetBinContent(10,4.183537);
   houtFV_stack_4->SetBinContent(11,2.688928);
   houtFV_stack_4->SetBinContent(12,5.760238);
   houtFV_stack_4->SetBinContent(13,5.343418);
   houtFV_stack_4->SetBinContent(14,4.686276);
   houtFV_stack_4->SetBinContent(15,3.365184);
   houtFV_stack_4->SetBinContent(16,5.599385);
   houtFV_stack_4->SetBinContent(17,4.09232);
   houtFV_stack_4->SetBinContent(18,7.271374);
   houtFV_stack_4->SetBinContent(19,4.708341);
   houtFV_stack_4->SetBinContent(20,6.944613);
   houtFV_stack_4->SetBinContent(21,7.705747);
   houtFV_stack_4->SetBinContent(22,8.495478);
   houtFV_stack_4->SetBinContent(23,9.356475);
   houtFV_stack_4->SetBinContent(24,11.50708);
   houtFV_stack_4->SetBinContent(25,9.66898);
   houtFV_stack_4->SetBinContent(26,15.93866);
   houtFV_stack_4->SetBinContent(27,2.392469);
   houtFV_stack_4->SetBinError(0,0.8779318);
   houtFV_stack_4->SetBinError(1,2.61191);
   houtFV_stack_4->SetBinError(2,1.772383);
   houtFV_stack_4->SetBinError(3,1.671284);
   houtFV_stack_4->SetBinError(4,1.403752);
   houtFV_stack_4->SetBinError(5,1.109574);
   houtFV_stack_4->SetBinError(6,0.981813);
   houtFV_stack_4->SetBinError(7,1.201774);
   houtFV_stack_4->SetBinError(8,1.404682);
   houtFV_stack_4->SetBinError(9,1.279671);
   houtFV_stack_4->SetBinError(10,1.028418);
   houtFV_stack_4->SetBinError(11,0.7585831);
   houtFV_stack_4->SetBinError(12,1.165531);
   houtFV_stack_4->SetBinError(13,1.121383);
   houtFV_stack_4->SetBinError(14,1.0552);
   houtFV_stack_4->SetBinError(15,0.9307743);
   houtFV_stack_4->SetBinError(16,1.182784);
   houtFV_stack_4->SetBinError(17,1.027876);
   houtFV_stack_4->SetBinError(18,1.410203);
   houtFV_stack_4->SetBinError(19,0.992347);
   houtFV_stack_4->SetBinError(20,1.416018);
   houtFV_stack_4->SetBinError(21,1.434019);
   houtFV_stack_4->SetBinError(22,1.514808);
   houtFV_stack_4->SetBinError(23,1.89191);
   houtFV_stack_4->SetBinError(24,1.599738);
   houtFV_stack_4->SetBinError(25,1.564891);
   houtFV_stack_4->SetBinError(26,1.983699);
   houtFV_stack_4->SetBinError(27,0.7848912);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.21399);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6420361);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7944901);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.03214);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9889579);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5008719);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.324094);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.414298);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2888274);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3285446);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3749275);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.0882275);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3067967);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2024767);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4110754);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2390593);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03945654);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.556597);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.43721);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.874634);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.88734);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.285078);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.307905);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.936828);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.090778);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.196978);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.859009);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.734792);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.601523);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.651756);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.84448);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.393606);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.656164);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.052733);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.875619);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.30741);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.168406);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.919634);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.7436);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.355094);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.013628);
   hNCpi0inFVres_stack_7->SetBinContent(25,9.580206);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.483692);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5740492);
   hNCpi0inFVres_stack_7->SetBinError(2,0.991604);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8731554);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8407191);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7411529);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6253221);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7520572);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7719352);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7203816);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5663696);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6021216);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6767366);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5888315);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5009107);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7052752);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7206064);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5262972);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5826294);
   hNCpi0inFVres_stack_7->SetBinError(19,0.661271);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6222022);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6365293);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7504161);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9879345);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8173223);
   hNCpi0inFVres_stack_7->SetBinError(25,1.047375);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5962757);
   hNCpi0inFVres_stack_7->SetBinError(27,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.25434);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.25858);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.106126);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.856026);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.477212);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.102222);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.7662537);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.310308);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.00324);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.07349);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.142908);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.142908);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.212326);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.45064);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7528039);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.906754);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.338208);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.253508);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.5860679);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.938062);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.562408);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.686794);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.496398);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.658558);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.4872539);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3078519);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4843191);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4583063);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5050387);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4242766);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3684702);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2040719);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3592889);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2962551);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3401847);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3527294);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3527294);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.364843);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3901881);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2593621);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3123499);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3603705);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2747846);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2215976);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4678321);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4337272);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4232048);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5476796);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3358661);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1840142);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(1,5.174987);
   hCCpi0inFV_stack_10->SetBinContent(2,10.69522);
   hCCpi0inFV_stack_10->SetBinContent(3,11.86091);
   hCCpi0inFV_stack_10->SetBinContent(4,8.518824);
   hCCpi0inFV_stack_10->SetBinContent(5,8.290745);
   hCCpi0inFV_stack_10->SetBinContent(6,8.791467);
   hCCpi0inFV_stack_10->SetBinContent(7,6.010046);
   hCCpi0inFV_stack_10->SetBinContent(8,6.553918);
   hCCpi0inFV_stack_10->SetBinContent(9,8.355848);
   hCCpi0inFV_stack_10->SetBinContent(10,6.734104);
   hCCpi0inFV_stack_10->SetBinContent(11,4.693038);
   hCCpi0inFV_stack_10->SetBinContent(12,5.768515);
   hCCpi0inFV_stack_10->SetBinContent(13,5.281494);
   hCCpi0inFV_stack_10->SetBinContent(14,5.461912);
   hCCpi0inFV_stack_10->SetBinContent(15,5.759243);
   hCCpi0inFV_stack_10->SetBinContent(16,5.911977);
   hCCpi0inFV_stack_10->SetBinContent(17,5.766759);
   hCCpi0inFV_stack_10->SetBinContent(18,7.6224);
   hCCpi0inFV_stack_10->SetBinContent(19,5.130187);
   hCCpi0inFV_stack_10->SetBinContent(20,7.435751);
   hCCpi0inFV_stack_10->SetBinContent(21,6.242759);
   hCCpi0inFV_stack_10->SetBinContent(22,6.751641);
   hCCpi0inFV_stack_10->SetBinContent(23,8.785419);
   hCCpi0inFV_stack_10->SetBinContent(24,12.69036);
   hCCpi0inFV_stack_10->SetBinContent(25,9.237662);
   hCCpi0inFV_stack_10->SetBinContent(26,3.462874);
   hCCpi0inFV_stack_10->SetBinError(1,1.143756);
   hCCpi0inFV_stack_10->SetBinError(2,1.6535);
   hCCpi0inFV_stack_10->SetBinError(3,1.777333);
   hCCpi0inFV_stack_10->SetBinError(4,1.499901);
   hCCpi0inFV_stack_10->SetBinError(5,1.474402);
   hCCpi0inFV_stack_10->SetBinError(6,1.52077);
   hCCpi0inFV_stack_10->SetBinError(7,1.133421);
   hCCpi0inFV_stack_10->SetBinError(8,1.356387);
   hCCpi0inFV_stack_10->SetBinError(9,1.415104);
   hCCpi0inFV_stack_10->SetBinError(10,1.345519);
   hCCpi0inFV_stack_10->SetBinError(11,1.056454);
   hCCpi0inFV_stack_10->SetBinError(12,1.193982);
   hCCpi0inFV_stack_10->SetBinError(13,1.109741);
   hCCpi0inFV_stack_10->SetBinError(14,1.209225);
   hCCpi0inFV_stack_10->SetBinError(15,1.217789);
   hCCpi0inFV_stack_10->SetBinError(16,1.225813);
   hCCpi0inFV_stack_10->SetBinError(17,1.283502);
   hCCpi0inFV_stack_10->SetBinError(18,1.373524);
   hCCpi0inFV_stack_10->SetBinError(19,1.161816);
   hCCpi0inFV_stack_10->SetBinError(20,1.365561);
   hCCpi0inFV_stack_10->SetBinError(21,1.227608);
   hCCpi0inFV_stack_10->SetBinError(22,1.296452);
   hCCpi0inFV_stack_10->SetBinError(23,1.473949);
   hCCpi0inFV_stack_10->SetBinError(24,1.826556);
   hCCpi0inFV_stack_10->SetBinError(25,1.48793);
   hCCpi0inFV_stack_10->SetBinError(26,0.961023);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,0.9269427);
   hNCinFV_stack_11->SetBinContent(2,3.267849);
   hNCinFV_stack_11->SetBinContent(3,2.297188);
   hNCinFV_stack_11->SetBinContent(4,2.002419);
   hNCinFV_stack_11->SetBinContent(5,1.123658);
   hNCinFV_stack_11->SetBinContent(6,0.8770706);
   hNCinFV_stack_11->SetBinContent(7,0.3401776);
   hNCinFV_stack_11->SetBinContent(8,0.9286332);
   hNCinFV_stack_11->SetBinContent(9,0.9286332);
   hNCinFV_stack_11->SetBinContent(10,1.270501);
   hNCinFV_stack_11->SetBinContent(11,2.000729);
   hNCinFV_stack_11->SetBinContent(12,1.072095);
   hNCinFV_stack_11->SetBinContent(13,1.070405);
   hNCinFV_stack_11->SetBinContent(14,0.9818863);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.785171);
   hNCinFV_stack_11->SetBinContent(17,1.465526);
   hNCinFV_stack_11->SetBinContent(18,1.217248);
   hNCinFV_stack_11->SetBinContent(19,0.5352025);
   hNCinFV_stack_11->SetBinContent(20,0.5850745);
   hNCinFV_stack_11->SetBinContent(21,1.713804);
   hNCinFV_stack_11->SetBinContent(22,1.465526);
   hNCinFV_stack_11->SetBinContent(23,0.9269427);
   hNCinFV_stack_11->SetBinContent(24,2.980925);
   hNCinFV_stack_11->SetBinContent(25,3.857995);
   hNCinFV_stack_11->SetBinContent(26,1.125349);
   hNCinFV_stack_11->SetBinError(1,0.4800908);
   hNCinFV_stack_11->SetBinError(2,0.9410263);
   hNCinFV_stack_11->SetBinError(3,0.7061988);
   hNCinFV_stack_11->SetBinError(4,0.7348366);
   hNCinFV_stack_11->SetBinError(5,0.5188295);
   hNCinFV_stack_11->SetBinError(6,0.5197486);
   hNCinFV_stack_11->SetBinError(7,0.3401776);
   hNCinFV_stack_11->SetBinError(8,0.48078);
   hNCinFV_stack_11->SetBinError(9,0.48078);
   hNCinFV_stack_11->SetBinError(10,0.5895188);
   hNCinFV_stack_11->SetBinError(11,0.7343859);
   hNCinFV_stack_11->SetBinError(12,0.5551335);
   hNCinFV_stack_11->SetBinError(13,0.5545368);
   hNCinFV_stack_11->SetBinError(14,0.4391155);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.3925882);
   hNCinFV_stack_11->SetBinError(17,0.6209405);
   hNCinFV_stack_11->SetBinError(18,0.6211758);
   hNCinFV_stack_11->SetBinError(19,0.3921167);
   hNCinFV_stack_11->SetBinError(20,0.337793);
   hNCinFV_stack_11->SetBinError(21,0.6207051);
   hNCinFV_stack_11->SetBinError(22,0.6209405);
   hNCinFV_stack_11->SetBinError(23,0.4800908);
   hNCinFV_stack_11->SetBinError(24,0.8552677);
   hNCinFV_stack_11->SetBinError(25,1.00081);
   hNCinFV_stack_11->SetBinError(26,0.5194673);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,2.729269);
   hnumuCCinFV_stack_12->SetBinContent(2,4.585344);
   hnumuCCinFV_stack_12->SetBinContent(3,2.675324);
   hnumuCCinFV_stack_12->SetBinContent(4,1.826773);
   hnumuCCinFV_stack_12->SetBinContent(5,3.976754);
   hnumuCCinFV_stack_12->SetBinContent(6,2.887832);
   hnumuCCinFV_stack_12->SetBinContent(7,2.465465);
   hnumuCCinFV_stack_12->SetBinContent(8,2.340419);
   hnumuCCinFV_stack_12->SetBinContent(9,0.8768651);
   hnumuCCinFV_stack_12->SetBinContent(10,2.612435);
   hnumuCCinFV_stack_12->SetBinContent(11,2.950631);
   hnumuCCinFV_stack_12->SetBinContent(12,2.733617);
   hnumuCCinFV_stack_12->SetBinContent(13,2.850373);
   hnumuCCinFV_stack_12->SetBinContent(14,2.922005);
   hnumuCCinFV_stack_12->SetBinContent(15,2.954271);
   hnumuCCinFV_stack_12->SetBinContent(16,3.179598);
   hnumuCCinFV_stack_12->SetBinContent(17,2.720062);
   hnumuCCinFV_stack_12->SetBinContent(18,4.29431);
   hnumuCCinFV_stack_12->SetBinContent(19,3.308978);
   hnumuCCinFV_stack_12->SetBinContent(20,3.055816);
   hnumuCCinFV_stack_12->SetBinContent(21,7.083282);
   hnumuCCinFV_stack_12->SetBinContent(22,9.311964);
   hnumuCCinFV_stack_12->SetBinContent(23,9.785841);
   hnumuCCinFV_stack_12->SetBinContent(24,5.068679);
   hnumuCCinFV_stack_12->SetBinContent(25,4.789496);
   hnumuCCinFV_stack_12->SetBinContent(26,4.053386);
   hnumuCCinFV_stack_12->SetBinError(1,0.854664);
   hnumuCCinFV_stack_12->SetBinError(2,1.084748);
   hnumuCCinFV_stack_12->SetBinError(3,0.8436856);
   hnumuCCinFV_stack_12->SetBinError(4,0.677832);
   hnumuCCinFV_stack_12->SetBinError(5,1.080315);
   hnumuCCinFV_stack_12->SetBinError(6,0.8679539);
   hnumuCCinFV_stack_12->SetBinError(7,0.8571967);
   hnumuCCinFV_stack_12->SetBinError(8,0.7195455);
   hnumuCCinFV_stack_12->SetBinError(9,0.4411497);
   hnumuCCinFV_stack_12->SetBinError(10,0.8171883);
   hnumuCCinFV_stack_12->SetBinError(11,0.8388566);
   hnumuCCinFV_stack_12->SetBinError(12,0.87378);
   hnumuCCinFV_stack_12->SetBinError(13,1.073614);
   hnumuCCinFV_stack_12->SetBinError(14,0.8310343);
   hnumuCCinFV_stack_12->SetBinError(15,0.9370868);
   hnumuCCinFV_stack_12->SetBinError(16,0.8570056);
   hnumuCCinFV_stack_12->SetBinError(17,0.7984188);
   hnumuCCinFV_stack_12->SetBinError(18,1.091039);
   hnumuCCinFV_stack_12->SetBinError(19,0.9641429);
   hnumuCCinFV_stack_12->SetBinError(20,1.370853);
   hnumuCCinFV_stack_12->SetBinError(21,1.384086);
   hnumuCCinFV_stack_12->SetBinError(22,2.474071);
   hnumuCCinFV_stack_12->SetBinError(23,2.634526);
   hnumuCCinFV_stack_12->SetBinError(24,1.178799);
   hnumuCCinFV_stack_12->SetBinError(25,1.141857);
   hnumuCCinFV_stack_12->SetBinError(26,1.051623);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(3,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.6840218);
   hnueCCinFV_stack_13->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(8,0.4432483);
   hnueCCinFV_stack_13->SetBinContent(9,0.4228751);
   hnueCCinFV_stack_13->SetBinContent(15,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.3025491);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.526453);
   hnueCCinFV_stack_13->SetBinError(7,0.2781975);
   hnueCCinFV_stack_13->SetBinError(8,0.3134667);
   hnueCCinFV_stack_13->SetBinError(9,0.2997418);
   hnueCCinFV_stack_13->SetBinError(15,0.7431478);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.4566905);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.3152389);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__23->SetBinContent(0,3.827691);
   hmcerror__23->SetBinContent(1,48.91153);
   hmcerror__23->SetBinContent(2,52.15853);
   hmcerror__23->SetBinContent(3,52.33115);
   hmcerror__23->SetBinContent(4,38.3435);
   hmcerror__23->SetBinContent(5,33.26967);
   hmcerror__23->SetBinContent(6,32.61237);
   hmcerror__23->SetBinContent(7,28.06853);
   hmcerror__23->SetBinContent(8,30.41454);
   hmcerror__23->SetBinContent(9,28.00542);
   hmcerror__23->SetBinContent(10,30.81769);
   hmcerror__23->SetBinContent(11,29.1569);
   hmcerror__23->SetBinContent(12,27.97892);
   hmcerror__23->SetBinContent(13,30.00127);
   hmcerror__23->SetBinContent(14,25.06006);
   hmcerror__23->SetBinContent(15,30.35844);
   hmcerror__23->SetBinContent(16,28.55115);
   hmcerror__23->SetBinContent(17,28.9492);
   hmcerror__23->SetBinContent(18,37.4655);
   hmcerror__23->SetBinContent(19,25.56724);
   hmcerror__23->SetBinContent(20,31.79959);
   hmcerror__23->SetBinContent(21,38.53099);
   hmcerror__23->SetBinContent(22,42.60867);
   hmcerror__23->SetBinContent(23,52.33371);
   hmcerror__23->SetBinContent(24,58.35648);
   hmcerror__23->SetBinContent(25,59.13211);
   hmcerror__23->SetBinContent(26,36.29709);
   hmcerror__23->SetBinContent(27,3.089883);
   hmcerror__23->SetBinError(0,1.062042);
   hmcerror__23->SetBinError(1,15.93994);
   hmcerror__23->SetBinError(2,22.2489);
   hmcerror__23->SetBinError(3,16.79879);
   hmcerror__23->SetBinError(4,14.81342);
   hmcerror__23->SetBinError(5,16.03197);
   hmcerror__23->SetBinError(6,15.80378);
   hmcerror__23->SetBinError(7,15.28619);
   hmcerror__23->SetBinError(8,13.6962);
   hmcerror__23->SetBinError(9,12.67329);
   hmcerror__23->SetBinError(10,14.15053);
   hmcerror__23->SetBinError(11,10.18421);
   hmcerror__23->SetBinError(12,13.03914);
   hmcerror__23->SetBinError(13,10.75938);
   hmcerror__23->SetBinError(14,12.23796);
   hmcerror__23->SetBinError(15,10.77897);
   hmcerror__23->SetBinError(16,13.45604);
   hmcerror__23->SetBinError(17,13.215);
   hmcerror__23->SetBinError(18,16.89307);
   hmcerror__23->SetBinError(19,14.35281);
   hmcerror__23->SetBinError(20,12.17314);
   hmcerror__23->SetBinError(21,15.90629);
   hmcerror__23->SetBinError(22,15.46882);
   hmcerror__23->SetBinError(23,27.20581);
   hmcerror__23->SetBinError(24,19.696);
   hmcerror__23->SetBinError(25,21.00851);
   hmcerror__23->SetBinError(26,24.91051);
   hmcerror__23->SetBinError(27,4.122173);
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
   
   Double_t _fx3029[26] = {
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
   Double_t _fy3029[26] = {
   50,
   59,
   38,
   35,
   31,
   24,
   33,
   34,
   24,
   22,
   24,
   35,
   30,
   31,
   26,
   28,
   21,
   25,
   31,
   32,
   37,
   32,
   43,
   50,
   56,
   31};
   Double_t _felx3029[26] = {
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
   Double_t _fely3029[26] = {
   7.2025,
   7.8097,
   6.3013,
   6.0548,
   5.7094,
   5.0476,
   5.8847,
   5.9703,
   5.0476,
   4.8417,
   5.0476,
   6.0548,
   5.6197,
   5.7094,
   5.2453,
   5.4358,
   4.7354,
   5.1474,
   5.7094,
   5.7977,
   6.2203,
   5.7977,
   6.6917,
   7.2025,
   7.6127,
   5.7094};
   Double_t _fehx3029[26] = {
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
   Double_t _fehy3029[26] = {
   6.9985,
   7.6066,
   6.0955,
   5.8483,
   5.5017,
   4.837,
   5.6776,
   5.7635,
   4.837,
   4.6299,
   4.837,
   5.8483,
   5.4117,
   5.5017,
   5.0358,
   5.2271,
   4.5229,
   4.9374,
   5.5017,
   5.5904,
   6.0141,
   5.5904,
   6.4868,
   6.9985,
   7.4094,
   5.5017};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,286);
   Graph_Graph3029->SetMinimum(11.2304);
   Graph_Graph3029->SetMaximum(71.6408);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.6/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 882.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 197.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 198.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[26] = {
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
   Double_t _fy3030[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[26] = {
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
   Double_t _fely3030[26] = {
   0.3258933,
   0.426563,
   0.3210093,
   0.3863345,
   0.4818795,
   0.4845946,
   0.5446023,
   0.4503176,
   0.45253,
   0.4591691,
   0.3492898,
   0.4660342,
   0.3586308,
   0.4883453,
   0.3550568,
   0.4712959,
   0.4564891,
   0.4508968,
   0.5613751,
   0.3828082,
   0.4128182,
   0.3630439,
   0.5198526,
   0.3375118,
   0.3552808,
   0.686295};
   Double_t _fehx3030[26] = {
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
   Double_t _fehy3030[26] = {
   0.3258933,
   0.426563,
   0.3210093,
   0.3863345,
   0.4818795,
   0.4845946,
   0.5446023,
   0.4503176,
   0.45253,
   0.4591691,
   0.3492898,
   0.4660342,
   0.3586308,
   0.4883453,
   0.3550568,
   0.4712959,
   0.4564891,
   0.4508968,
   0.5613751,
   0.3828082,
   0.4128182,
   0.3630439,
   0.5198526,
   0.3375118,
   0.3552808,
   0.686295};
   grae = new TGraphAsymmErrors(26,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,286);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex X [cm]");
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
   
   Double_t _fx3031[26] = {
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
   Double_t _fy3031[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[26] = {
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
   Double_t _fely3031[26] = {
   0.1802938,
   0.1922323,
   0.1898852,
   0.182519,
   0.2036406,
   0.1862361,
   0.1923118,
   0.2030869,
   0.1918669,
   0.1767929,
   0.1727605,
   0.1842803,
   0.1842319,
   0.1989951,
   0.1824681,
   0.1965208,
   0.1833536,
   0.1750624,
   0.2355827,
   0.1980179,
   0.1785643,
   0.189152,
   0.1984173,
   0.1795717,
   0.1709015,
   0.1955832};
   Double_t _fehx3031[26] = {
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
   Double_t _fehy3031[26] = {
   0.1802938,
   0.1922323,
   0.1898852,
   0.182519,
   0.2036406,
   0.1862361,
   0.1923118,
   0.2030869,
   0.1918669,
   0.1767929,
   0.1727605,
   0.1842803,
   0.1842319,
   0.1989951,
   0.1824681,
   0.1965208,
   0.1833536,
   0.1750624,
   0.2355827,
   0.1980179,
   0.1785643,
   0.189152,
   0.1984173,
   0.1795717,
   0.1709015,
   0.1955832};
   grae = new TGraphAsymmErrors(26,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,286);
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
   
   Double_t _fx3032[26] = {
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
   Double_t _fy3032[26] = {
   1.022254,
   1.131167,
   0.726145,
   0.9128013,
   0.9317796,
   0.7359172,
   1.175694,
   1.117886,
   0.856977,
   0.7138756,
   0.8231328,
   1.250942,
   0.9999577,
   1.237028,
   0.8564339,
   0.9806961,
   0.7254086,
   0.6672806,
   1.212489,
   1.006302,
   0.9602661,
   0.7510208,
   0.8216501,
   0.8568029,
   0.9470319,
   0.854063};
   Double_t _felx3032[26] = {
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
   Double_t _fely3032[26] = {
   0.1472557,
   0.1497301,
   0.120412,
   0.1579094,
   0.1716098,
   0.1547756,
   0.2096547,
   0.1962976,
   0.1802365,
   0.1571078,
   0.1731185,
   0.2164058,
   0.1873154,
   0.2278286,
   0.1727789,
   0.1903881,
   0.1635762,
   0.1373904,
   0.2233092,
   0.1823199,
   0.1614363,
   0.1360685,
   0.127866,
   0.1234225,
   0.1287405,
   0.1572964};
   Double_t _fehx3032[26] = {
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
   Double_t _fehy3032[26] = {
   0.1430849,
   0.1458362,
   0.1164794,
   0.1525239,
   0.1653668,
   0.148318,
   0.2022763,
   0.1894982,
   0.1727166,
   0.1502351,
   0.1658955,
   0.2090252,
   0.1803824,
   0.2195406,
   0.1658781,
   0.1830785,
   0.1562357,
   0.1317853,
   0.2151855,
   0.175801,
   0.1560848,
   0.1312033,
   0.1239507,
   0.1199267,
   0.1253025,
   0.1515741};
   grae = new TGraphAsymmErrors(26,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,286);
   Graph_Graph3032->SetMinimum(0.4368826);
   Graph_Graph3032->SetMaximum(1.552974);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
