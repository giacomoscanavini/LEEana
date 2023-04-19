#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 13:44:48 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
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
   pad1->Range(-61.53846,-2.1,451.2821,232.2158);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__22->SetBinContent(1,33.52824);
   hmc__22->SetBinContent(2,39.08824);
   hmc__22->SetBinContent(3,48.81433);
   hmc__22->SetBinContent(4,45.98211);
   hmc__22->SetBinContent(5,51.4433);
   hmc__22->SetBinContent(6,63.0564);
   hmc__22->SetBinContent(7,77.08205);
   hmc__22->SetBinContent(8,67.85513);
   hmc__22->SetBinContent(9,79.94822);
   hmc__22->SetBinContent(10,90.5379);
   hmc__22->SetBinContent(11,90.4222);
   hmc__22->SetBinContent(12,87.25122);
   hmc__22->SetBinContent(13,81.89186);
   hmc__22->SetBinContent(14,55.03656);
   hmc__22->SetBinContent(15,37.92929);
   hmc__22->SetBinContent(16,30.25396);
   hmc__22->SetBinContent(17,18.15138);
   hmc__22->SetBinContent(18,17.25371);
   hmc__22->SetBinContent(19,12.33006);
   hmc__22->SetBinContent(20,14.85908);
   hmc__22->SetBinContent(21,9.697632);
   hmc__22->SetBinContent(22,9.238126);
   hmc__22->SetBinContent(23,10.3983);
   hmc__22->SetBinContent(24,6.989586);
   hmc__22->SetBinContent(25,6.939624);
   hmc__22->SetBinContent(26,6.41129);
   hmc__22->SetBinContent(27,5.323785);
   hmc__22->SetBinContent(28,4.310609);
   hmc__22->SetBinContent(29,5.636313);
   hmc__22->SetBinContent(30,5.79218);
   hmc__22->SetBinContent(31,3.689965);
   hmc__22->SetBinContent(32,4.154202);
   hmc__22->SetBinContent(33,2.300862);
   hmc__22->SetBinContent(34,3.082755);
   hmc__22->SetBinContent(35,27.57742);
   hmc__22->SetBinError(1,17.5196);
   hmc__22->SetBinError(2,20.92537);
   hmc__22->SetBinError(3,17.96327);
   hmc__22->SetBinError(4,17.86595);
   hmc__22->SetBinError(5,20.16086);
   hmc__22->SetBinError(6,22.38984);
   hmc__22->SetBinError(7,32.24551);
   hmc__22->SetBinError(8,26.94139);
   hmc__22->SetBinError(9,22.33266);
   hmc__22->SetBinError(10,29.07276);
   hmc__22->SetBinError(11,28.00622);
   hmc__22->SetBinError(12,29.46084);
   hmc__22->SetBinError(13,26.76701);
   hmc__22->SetBinError(14,22.30638);
   hmc__22->SetBinError(15,15.03694);
   hmc__22->SetBinError(16,19.59333);
   hmc__22->SetBinError(17,9.025437);
   hmc__22->SetBinError(18,15.2366);
   hmc__22->SetBinError(19,8.120068);
   hmc__22->SetBinError(20,11.7858);
   hmc__22->SetBinError(21,8.482413);
   hmc__22->SetBinError(22,9.455164);
   hmc__22->SetBinError(23,11.41029);
   hmc__22->SetBinError(24,11.09868);
   hmc__22->SetBinError(25,9.272327);
   hmc__22->SetBinError(26,8.094422);
   hmc__22->SetBinError(27,5.052624);
   hmc__22->SetBinError(28,6.520462);
   hmc__22->SetBinError(29,7.287392);
   hmc__22->SetBinError(30,7.084591);
   hmc__22->SetBinError(31,4.819134);
   hmc__22->SetBinError(32,5.275721);
   hmc__22->SetBinError(33,2.882865);
   hmc__22->SetBinError(34,6.275232);
   hmc__22->SetBinError(35,23.49323);
   hmc__22->SetMinimum(-2.1);
   hmc__22->SetMaximum(220.5);
   hmc__22->SetEntries(1133.738);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",34,0,400);
   hs8_stack_8->SetMinimum(-1.429819e-08);
   hs8_stack_8->SetMaximum(95.0648);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.507692);
   hbadmatch_stack_1->SetBinContent(2,2.311677);
   hbadmatch_stack_1->SetBinContent(3,2.660375);
   hbadmatch_stack_1->SetBinContent(4,0.7981218);
   hbadmatch_stack_1->SetBinContent(5,1.465526);
   hbadmatch_stack_1->SetBinContent(6,3.085177);
   hbadmatch_stack_1->SetBinContent(7,4.029676);
   hbadmatch_stack_1->SetBinContent(8,3.099435);
   hbadmatch_stack_1->SetBinContent(9,2.378845);
   hbadmatch_stack_1->SetBinContent(10,1.713804);
   hbadmatch_stack_1->SetBinContent(11,2.187229);
   hbadmatch_stack_1->SetBinContent(12,1.462145);
   hbadmatch_stack_1->SetBinContent(13,2.86157);
   hbadmatch_stack_1->SetBinContent(14,1.52047);
   hbadmatch_stack_1->SetBinContent(15,1.340649);
   hbadmatch_stack_1->SetBinContent(16,1.518779);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.6355563);
   hbadmatch_stack_1->SetBinContent(22,0.7317812);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.7459332);
   hbadmatch_stack_1->SetBinContent(27,0.3934307);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.635446);
   hbadmatch_stack_1->SetBinError(2,1.185562);
   hbadmatch_stack_1->SetBinError(3,0.8855152);
   hbadmatch_stack_1->SetBinError(4,0.4746783);
   hbadmatch_stack_1->SetBinError(5,0.6209405);
   hbadmatch_stack_1->SetBinError(6,0.9881974);
   hbadmatch_stack_1->SetBinError(7,1.068981);
   hbadmatch_stack_1->SetBinError(8,1.029313);
   hbadmatch_stack_1->SetBinError(9,0.8193173);
   hbadmatch_stack_1->SetBinError(10,0.6207051);
   hbadmatch_stack_1->SetBinError(11,0.7970461);
   hbadmatch_stack_1->SetBinError(12,0.6198731);
   hbadmatch_stack_1->SetBinError(13,0.956391);
   hbadmatch_stack_1->SetBinError(14,0.5898325);
   hbadmatch_stack_1->SetBinError(15,0.6147672);
   hbadmatch_stack_1->SetBinError(16,0.5892709);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.368807);
   hbadmatch_stack_1->SetBinError(22,0.5187237);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.5294888);
   hbadmatch_stack_1->SetBinError(27,0.2781975);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,9.256346);
   hext_stack_2->SetBinContent(2,9.737967);
   hext_stack_2->SetBinContent(3,14.56525);
   hext_stack_2->SetBinContent(4,14.18019);
   hext_stack_2->SetBinContent(5,13.2848);
   hext_stack_2->SetBinContent(6,15.23282);
   hext_stack_2->SetBinContent(7,16.68322);
   hext_stack_2->SetBinContent(8,13.18105);
   hext_stack_2->SetBinContent(9,14.92278);
   hext_stack_2->SetBinContent(10,14.23645);
   hext_stack_2->SetBinContent(11,9.808578);
   hext_stack_2->SetBinContent(12,11.83716);
   hext_stack_2->SetBinContent(13,11.48405);
   hext_stack_2->SetBinContent(14,5.504803);
   hext_stack_2->SetBinContent(15,5.904221);
   hext_stack_2->SetBinContent(16,4.773807);
   hext_stack_2->SetBinContent(17,3.965017);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,1.379791);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(23,0.6416141);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,0.4065989);
   hext_stack_2->SetBinContent(27,0.6487947);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,0.4065989);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,2.357392);
   hext_stack_2->SetBinError(1,1.826736);
   hext_stack_2->SetBinError(2,1.939994);
   hext_stack_2->SetBinError(3,2.585423);
   hext_stack_2->SetBinError(4,2.432177);
   hext_stack_2->SetBinError(5,2.350479);
   hext_stack_2->SetBinError(6,2.574413);
   hext_stack_2->SetBinError(7,2.689757);
   hext_stack_2->SetBinError(8,2.463385);
   hext_stack_2->SetBinError(9,2.473856);
   hext_stack_2->SetBinError(10,2.538515);
   hext_stack_2->SetBinError(11,1.972244);
   hext_stack_2->SetBinError(12,2.140382);
   hext_stack_2->SetBinError(13,2.298001);
   hext_stack_2->SetBinError(14,1.525286);
   hext_stack_2->SetBinError(15,1.641043);
   hext_stack_2->SetBinError(16,1.433855);
   hext_stack_2->SetBinError(17,1.363971);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.6935586);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(23,0.6416141);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,0.4065989);
   hext_stack_2->SetBinError(27,0.4587671);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.4065989);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.9653222);
   hext_stack_2->SetEntries(503);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.082577);
   hdirt_stack_3->SetBinContent(2,1.313864);
   hdirt_stack_3->SetBinContent(3,0.8517935);
   hdirt_stack_3->SetBinContent(4,0.4417201);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,1.658264);
   hdirt_stack_3->SetBinContent(7,2.562096);
   hdirt_stack_3->SetBinContent(8,2.416447);
   hdirt_stack_3->SetBinContent(9,1.742458);
   hdirt_stack_3->SetBinContent(10,2.639593);
   hdirt_stack_3->SetBinContent(11,1.396596);
   hdirt_stack_3->SetBinContent(12,0.5523413);
   hdirt_stack_3->SetBinContent(13,1.663383);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.5930034);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.165479);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5124346);
   hdirt_stack_3->SetBinError(2,0.6670182);
   hdirt_stack_3->SetBinError(3,0.3924407);
   hdirt_stack_3->SetBinError(4,0.3095901);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.6567542);
   hdirt_stack_3->SetBinError(7,0.9001475);
   hdirt_stack_3->SetBinError(8,0.8448522);
   hdirt_stack_3->SetBinError(9,0.6235122);
   hdirt_stack_3->SetBinError(10,0.9119285);
   hdirt_stack_3->SetBinError(11,0.6037177);
   hdirt_stack_3->SetBinError(12,0.4366729);
   hdirt_stack_3->SetBinError(13,1.035128);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.4234405);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.165479);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(28,0.2188956);
   hdirt_stack_3->SetEntries(90);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,8.234392);
   houtFV_stack_4->SetBinContent(2,11.23771);
   houtFV_stack_4->SetBinContent(3,13.59107);
   houtFV_stack_4->SetBinContent(4,13.61673);
   houtFV_stack_4->SetBinContent(5,13.12061);
   houtFV_stack_4->SetBinContent(6,13.53503);
   houtFV_stack_4->SetBinContent(7,19.1325);
   houtFV_stack_4->SetBinContent(8,14.58283);
   houtFV_stack_4->SetBinContent(9,17.05362);
   houtFV_stack_4->SetBinContent(10,16.67933);
   houtFV_stack_4->SetBinContent(11,16.02731);
   houtFV_stack_4->SetBinContent(12,19.45596);
   houtFV_stack_4->SetBinContent(13,15.51234);
   houtFV_stack_4->SetBinContent(14,11.04129);
   houtFV_stack_4->SetBinContent(15,6.893099);
   houtFV_stack_4->SetBinContent(16,5.508365);
   houtFV_stack_4->SetBinContent(17,3.230893);
   houtFV_stack_4->SetBinContent(18,3.462874);
   houtFV_stack_4->SetBinContent(19,2.628531);
   houtFV_stack_4->SetBinContent(20,2.549137);
   houtFV_stack_4->SetBinContent(21,1.905739);
   houtFV_stack_4->SetBinContent(22,1.853885);
   houtFV_stack_4->SetBinContent(23,1.661086);
   houtFV_stack_4->SetBinContent(24,0.9768147);
   houtFV_stack_4->SetBinContent(25,1.167064);
   houtFV_stack_4->SetBinContent(26,0.7868615);
   houtFV_stack_4->SetBinContent(27,1.656816);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,1.125349);
   houtFV_stack_4->SetBinContent(30,1.26712);
   houtFV_stack_4->SetBinContent(31,0.3917402);
   houtFV_stack_4->SetBinContent(32,0.1967154);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,4.716578);
   houtFV_stack_4->SetBinError(1,1.437393);
   houtFV_stack_4->SetBinError(2,1.683449);
   houtFV_stack_4->SetBinError(3,1.850101);
   houtFV_stack_4->SetBinError(4,2.120005);
   houtFV_stack_4->SetBinError(5,1.850933);
   houtFV_stack_4->SetBinError(6,1.785534);
   houtFV_stack_4->SetBinError(7,2.21628);
   houtFV_stack_4->SetBinError(8,1.923359);
   houtFV_stack_4->SetBinError(9,2.007176);
   houtFV_stack_4->SetBinError(10,2.041963);
   houtFV_stack_4->SetBinError(11,2.001141);
   houtFV_stack_4->SetBinError(12,2.257692);
   houtFV_stack_4->SetBinError(13,2.353486);
   houtFV_stack_4->SetBinError(14,1.731321);
   houtFV_stack_4->SetBinError(15,1.328048);
   houtFV_stack_4->SetBinError(16,1.159668);
   houtFV_stack_4->SetBinError(17,0.855484);
   houtFV_stack_4->SetBinError(18,0.961023);
   houtFV_stack_4->SetBinError(19,0.8261061);
   houtFV_stack_4->SetBinError(20,0.8480683);
   houtFV_stack_4->SetBinError(21,0.7616975);
   houtFV_stack_4->SetBinError(22,0.6789509);
   houtFV_stack_4->SetBinError(23,0.696995);
   houtFV_stack_4->SetBinError(24,0.4368475);
   houtFV_stack_4->SetBinError(25,0.5366549);
   houtFV_stack_4->SetBinError(26,0.3934307);
   houtFV_stack_4->SetBinError(27,0.695749);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.5194673);
   houtFV_stack_4->SetBinError(30,0.5883944);
   houtFV_stack_4->SetBinError(31,0.2770047);
   houtFV_stack_4->SetBinError(32,0.1967154);
   houtFV_stack_4->SetBinError(33,0.1950249);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.089827);
   houtFV_stack_4->SetEntries(1038);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.711454);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.281744);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.156526);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.533012);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.241722);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.436526);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.059704);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.420412);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7953222);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3035023);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3765671);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3627032);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4261073);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3737142);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4374504);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2753746);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3555681);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.356662);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.2304939);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.173216);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.708388);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.479386);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.815682);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.356904);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.655257);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.15232);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.02601);
   hNCpi0inFVres_stack_7->SetBinContent(9,14.13772);
   hNCpi0inFVres_stack_7->SetBinContent(10,15.75924);
   hNCpi0inFVres_stack_7->SetBinContent(11,20.77829);
   hNCpi0inFVres_stack_7->SetBinContent(12,16.36889);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.07761);
   hNCpi0inFVres_stack_7->SetBinContent(14,9.090784);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.587986);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.904856);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.452215);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.356562);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.272198);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.587812);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.240722);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.267958);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6825538);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.9338218);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.143572);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.6403718);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3347998);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.418668);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.4457358);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.3205179);
   hNCpi0inFVres_stack_7->SetBinContent(35,2.759284);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4401106);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6062553);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8045246);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8138637);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7915181);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8871225);
   hNCpi0inFVres_stack_7->SetBinError(7,1.036073);
   hNCpi0inFVres_stack_7->SetBinError(8,1.010878);
   hNCpi0inFVres_stack_7->SetBinError(9,1.22035);
   hNCpi0inFVres_stack_7->SetBinError(10,1.269436);
   hNCpi0inFVres_stack_7->SetBinError(11,1.569291);
   hNCpi0inFVres_stack_7->SetBinError(12,1.294909);
   hNCpi0inFVres_stack_7->SetBinError(13,1.333946);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9624572);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7030634);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6765932);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4488668);
   hNCpi0inFVres_stack_7->SetBinError(18,0.480149);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4916305);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3620761);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2960358);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3192308);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1982678);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2812022);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3330545);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2118699);
   hNCpi0inFVres_stack_7->SetBinError(27,0.09664838);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2107962);
   hNCpi0inFVres_stack_7->SetBinError(29,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1610816);
   hNCpi0inFVres_stack_7->SetBinError(33,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(34,0.1252919);
   hNCpi0inFVres_stack_7->SetBinError(35,0.4927503);
   hNCpi0inFVres_stack_7->SetEntries(3289);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6412039);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6699361);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.11484);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8642356);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.9338218);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.770494);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.20178);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.67708);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.49947);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.155956);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.852792);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.800904);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.848056);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.068848);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.296858);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.07349);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5304361);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.445904);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(35,1.659726);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2532885);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2901718);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3014643);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1939675);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2812022);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4259548);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.425421);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4962269);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5957861);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6817507);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7055048);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8455666);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6357645);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5847417);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3933343);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3401847);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.283386);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.2422936);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.277838);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.4445111);
   hNCpi0inFVdis_stack_8->SetEntries(856);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,3.606336);
   hCCpi0inFV_stack_10->SetBinContent(2,4.919894);
   hCCpi0inFV_stack_10->SetBinContent(3,5.516855);
   hCCpi0inFV_stack_10->SetBinContent(4,5.111223);
   hCCpi0inFV_stack_10->SetBinContent(5,8.604286);
   hCCpi0inFV_stack_10->SetBinContent(6,10.30348);
   hCCpi0inFV_stack_10->SetBinContent(7,11.00149);
   hCCpi0inFV_stack_10->SetBinContent(8,11.20004);
   hCCpi0inFV_stack_10->SetBinContent(9,12.75342);
   hCCpi0inFV_stack_10->SetBinContent(10,22.34122);
   hCCpi0inFV_stack_10->SetBinContent(11,20.33038);
   hCCpi0inFV_stack_10->SetBinContent(12,18.24994);
   hCCpi0inFV_stack_10->SetBinContent(13,18.87828);
   hCCpi0inFV_stack_10->SetBinContent(14,12.41186);
   hCCpi0inFV_stack_10->SetBinContent(15,7.839063);
   hCCpi0inFV_stack_10->SetBinContent(16,5.766824);
   hCCpi0inFV_stack_10->SetBinContent(17,4.280672);
   hCCpi0inFV_stack_10->SetBinContent(18,5.084778);
   hCCpi0inFV_stack_10->SetBinContent(19,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(20,4.53835);
   hCCpi0inFV_stack_10->SetBinContent(21,2.184769);
   hCCpi0inFV_stack_10->SetBinContent(22,1.713804);
   hCCpi0inFV_stack_10->SetBinContent(23,2.39585);
   hCCpi0inFV_stack_10->SetBinContent(24,2.644128);
   hCCpi0inFV_stack_10->SetBinContent(25,1.663932);
   hCCpi0inFV_stack_10->SetBinContent(26,2.779486);
   hCCpi0inFV_stack_10->SetBinContent(27,0.9835768);
   hCCpi0inFV_stack_10->SetBinContent(28,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(29,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(30,2.052291);
   hCCpi0inFV_stack_10->SetBinContent(31,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(32,0.9818863);
   hCCpi0inFV_stack_10->SetBinContent(33,0.3900497);
   hCCpi0inFV_stack_10->SetBinContent(34,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(35,7.478488);
   hCCpi0inFV_stack_10->SetBinError(1,1.000295);
   hCCpi0inFV_stack_10->SetBinError(2,1.108723);
   hCCpi0inFV_stack_10->SetBinError(3,1.19355);
   hCCpi0inFV_stack_10->SetBinError(4,1.184454);
   hCCpi0inFV_stack_10->SetBinError(5,1.442009);
   hCCpi0inFV_stack_10->SetBinError(6,1.630132);
   hCCpi0inFV_stack_10->SetBinError(7,1.726165);
   hCCpi0inFV_stack_10->SetBinError(8,1.695973);
   hCCpi0inFV_stack_10->SetBinError(9,1.801368);
   hCCpi0inFV_stack_10->SetBinError(10,2.455693);
   hCCpi0inFV_stack_10->SetBinError(11,2.274944);
   hCCpi0inFV_stack_10->SetBinError(12,2.12618);
   hCCpi0inFV_stack_10->SetBinError(13,2.189457);
   hCCpi0inFV_stack_10->SetBinError(14,1.751881);
   hCCpi0inFV_stack_10->SetBinError(15,1.412425);
   hCCpi0inFV_stack_10->SetBinError(16,1.193705);
   hCCpi0inFV_stack_10->SetBinError(17,1.044643);
   hCCpi0inFV_stack_10->SetBinError(18,1.092166);
   hCCpi0inFV_stack_10->SetBinError(19,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(20,1.110434);
   hCCpi0inFV_stack_10->SetBinError(21,0.6593671);
   hCCpi0inFV_stack_10->SetBinError(22,0.6207051);
   hCCpi0inFV_stack_10->SetBinError(23,0.7857345);
   hCCpi0inFV_stack_10->SetBinError(24,0.7855485);
   hCCpi0inFV_stack_10->SetBinError(25,0.6518637);
   hCCpi0inFV_stack_10->SetBinError(26,0.8672289);
   hCCpi0inFV_stack_10->SetBinError(27,0.4398689);
   hCCpi0inFV_stack_10->SetBinError(28,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(29,0.519186);
   hCCpi0inFV_stack_10->SetBinError(30,0.7073425);
   hCCpi0inFV_stack_10->SetBinError(31,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(32,0.4391155);
   hCCpi0inFV_stack_10->SetBinError(33,0.2758068);
   hCCpi0inFV_stack_10->SetBinError(34,0.650847);
   hCCpi0inFV_stack_10->SetBinError(35,1.367938);
   hCCpi0inFV_stack_10->SetEntries(957);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.3917402);
   hNCinFV_stack_11->SetBinContent(2,0.8770706);
   hNCinFV_stack_11->SetBinContent(3,1.322064);
   hNCinFV_stack_11->SetBinContent(4,1.178602);
   hNCinFV_stack_11->SetBinContent(5,2.050601);
   hNCinFV_stack_11->SetBinContent(6,2.840843);
   hNCinFV_stack_11->SetBinContent(7,2.980925);
   hNCinFV_stack_11->SetBinContent(8,2.199135);
   hNCinFV_stack_11->SetBinContent(9,2.298879);
   hNCinFV_stack_11->SetBinContent(10,3.564768);
   hNCinFV_stack_11->SetBinContent(11,2.929362);
   hNCinFV_stack_11->SetBinContent(12,3.17764);
   hNCinFV_stack_11->SetBinContent(13,2.979234);
   hNCinFV_stack_11->SetBinContent(14,1.555735);
   hNCinFV_stack_11->SetBinContent(15,1.463836);
   hNCinFV_stack_11->SetBinContent(16,1.858957);
   hNCinFV_stack_11->SetBinContent(17,0.9286332);
   hNCinFV_stack_11->SetBinContent(18,1.804013);
   hNCinFV_stack_11->SetBinContent(19,1.360711);
   hNCinFV_stack_11->SetBinContent(20,1.412273);
   hNCinFV_stack_11->SetBinContent(21,0.8753801);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,1.320373);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.7319179);
   hNCinFV_stack_11->SetBinContent(26,0.7319179);
   hNCinFV_stack_11->SetBinContent(27,0.7319179);
   hNCinFV_stack_11->SetBinContent(29,0.5352025);
   hNCinFV_stack_11->SetBinContent(30,0.3917402);
   hNCinFV_stack_11->SetBinContent(31,0.7336084);
   hNCinFV_stack_11->SetBinContent(32,0.536893);
   hNCinFV_stack_11->SetBinContent(33,0.3401776);
   hNCinFV_stack_11->SetBinContent(34,0.6803553);
   hNCinFV_stack_11->SetBinContent(35,3.370974);
   hNCinFV_stack_11->SetBinError(1,0.2770047);
   hNCinFV_stack_11->SetBinError(2,0.5197486);
   hNCinFV_stack_11->SetBinError(3,0.5554667);
   hNCinFV_stack_11->SetBinError(4,0.4811646);
   hNCinFV_stack_11->SetBinError(5,0.7068742);
   hNCinFV_stack_11->SetBinError(6,0.8098046);
   hNCinFV_stack_11->SetBinError(7,0.8552677);
   hNCinFV_stack_11->SetBinError(8,0.7607114);
   hNCinFV_stack_11->SetBinError(9,0.7066675);
   hNCinFV_stack_11->SetBinError(10,0.9423932);
   hNCinFV_stack_11->SetBinError(11,0.8777653);
   hNCinFV_stack_11->SetBinError(12,0.8775989);
   hNCinFV_stack_11->SetBinError(13,0.8548804);
   hNCinFV_stack_11->SetBinError(14,0.7077556);
   hNCinFV_stack_11->SetBinError(15,0.620407);
   hNCinFV_stack_11->SetBinError(16,0.6804124);
   hNCinFV_stack_11->SetBinError(17,0.48078);
   hNCinFV_stack_11->SetBinError(18,0.7075491);
   hNCinFV_stack_11->SetBinError(19,0.6803552);
   hNCinFV_stack_11->SetBinError(20,0.6510715);
   hNCinFV_stack_11->SetBinError(21,0.5191111);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.5548703);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.438694);
   hNCinFV_stack_11->SetBinError(26,0.438694);
   hNCinFV_stack_11->SetBinError(27,0.438694);
   hNCinFV_stack_11->SetBinError(29,0.3921167);
   hNCinFV_stack_11->SetBinError(30,0.2770047);
   hNCinFV_stack_11->SetBinError(31,0.4394482);
   hNCinFV_stack_11->SetBinError(32,0.3929602);
   hNCinFV_stack_11->SetBinError(33,0.3401776);
   hNCinFV_stack_11->SetBinError(34,0.4810838);
   hNCinFV_stack_11->SetBinError(35,0.8986391);
   hNCinFV_stack_11->SetEntries(213);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,6.382218);
   hnumuCCinFV_stack_12->SetBinContent(2,3.518824);
   hnumuCCinFV_stack_12->SetBinContent(3,3.573187);
   hnumuCCinFV_stack_12->SetBinContent(4,3.487509);
   hnumuCCinFV_stack_12->SetBinContent(5,4.833473);
   hnumuCCinFV_stack_12->SetBinContent(6,5.718467);
   hnumuCCinFV_stack_12->SetBinContent(7,6.972603);
   hnumuCCinFV_stack_12->SetBinContent(8,5.922812);
   hnumuCCinFV_stack_12->SetBinContent(9,8.451098);
   hnumuCCinFV_stack_12->SetBinContent(10,7.492913);
   hnumuCCinFV_stack_12->SetBinContent(11,10.36615);
   hnumuCCinFV_stack_12->SetBinContent(12,8.826014);
   hnumuCCinFV_stack_12->SetBinContent(13,6.5034);
   hnumuCCinFV_stack_12->SetBinContent(14,8.922837);
   hnumuCCinFV_stack_12->SetBinContent(15,5.98821);
   hnumuCCinFV_stack_12->SetBinContent(16,4.749517);
   hnumuCCinFV_stack_12->SetBinContent(17,1.961757);
   hnumuCCinFV_stack_12->SetBinContent(18,2.120168);
   hnumuCCinFV_stack_12->SetBinContent(19,0.8454494);
   hnumuCCinFV_stack_12->SetBinContent(20,2.551091);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8359696);
   hnumuCCinFV_stack_12->SetBinContent(22,2.170365);
   hnumuCCinFV_stack_12->SetBinContent(23,2.421425);
   hnumuCCinFV_stack_12->SetBinContent(24,1.016886);
   hnumuCCinFV_stack_12->SetBinContent(25,0.9276224);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(28,0.8665517);
   hnumuCCinFV_stack_12->SetBinContent(29,1.517089);
   hnumuCCinFV_stack_12->SetBinContent(30,0.7898498);
   hnumuCCinFV_stack_12->SetBinContent(31,0.5850745);
   hnumuCCinFV_stack_12->SetBinContent(32,1.574135);
   hnumuCCinFV_stack_12->SetBinContent(33,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(35,4.353459);
   hnumuCCinFV_stack_12->SetBinError(1,1.839182);
   hnumuCCinFV_stack_12->SetBinError(2,0.9664364);
   hnumuCCinFV_stack_12->SetBinError(3,0.9874858);
   hnumuCCinFV_stack_12->SetBinError(4,1.001768);
   hnumuCCinFV_stack_12->SetBinError(5,1.147859);
   hnumuCCinFV_stack_12->SetBinError(6,1.206756);
   hnumuCCinFV_stack_12->SetBinError(7,1.694631);
   hnumuCCinFV_stack_12->SetBinError(8,1.292921);
   hnumuCCinFV_stack_12->SetBinError(9,1.648304);
   hnumuCCinFV_stack_12->SetBinError(10,1.41517);
   hnumuCCinFV_stack_12->SetBinError(11,1.779479);
   hnumuCCinFV_stack_12->SetBinError(12,1.549891);
   hnumuCCinFV_stack_12->SetBinError(13,1.316864);
   hnumuCCinFV_stack_12->SetBinError(14,2.380961);
   hnumuCCinFV_stack_12->SetBinError(15,1.245687);
   hnumuCCinFV_stack_12->SetBinError(16,1.095022);
   hnumuCCinFV_stack_12->SetBinError(17,0.6674164);
   hnumuCCinFV_stack_12->SetBinError(18,0.7275638);
   hnumuCCinFV_stack_12->SetBinError(19,0.4238811);
   hnumuCCinFV_stack_12->SetBinError(20,0.8933952);
   hnumuCCinFV_stack_12->SetBinError(21,0.4201422);
   hnumuCCinFV_stack_12->SetBinError(22,0.8040302);
   hnumuCCinFV_stack_12->SetBinError(23,2.234926);
   hnumuCCinFV_stack_12->SetBinError(24,0.5334462);
   hnumuCCinFV_stack_12->SetBinError(25,0.5409091);
   hnumuCCinFV_stack_12->SetBinError(26,0.438694);
   hnumuCCinFV_stack_12->SetBinError(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(28,0.4354267);
   hnumuCCinFV_stack_12->SetBinError(29,0.5887087);
   hnumuCCinFV_stack_12->SetBinError(30,0.4849978);
   hnumuCCinFV_stack_12->SetBinError(31,0.337793);
   hnumuCCinFV_stack_12->SetBinError(32,0.6101443);
   hnumuCCinFV_stack_12->SetBinError(33,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(35,1.030742);
   hnumuCCinFV_stack_12->SetEntries(501);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.34964);
   hnueCCinFV_stack_13->SetBinContent(8,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,1.497608);
   hnueCCinFV_stack_13->SetBinContent(10,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.9684335);
   hnueCCinFV_stack_13->SetBinContent(15,0.8163059);
   hnueCCinFV_stack_13->SetBinContent(23,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(35,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.4972556);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.2491644);
   hnueCCinFV_stack_13->SetBinError(8,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,1.206386);
   hnueCCinFV_stack_13->SetBinError(10,0.1711909);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.7765451);
   hnueCCinFV_stack_13->SetBinError(15,0.4089487);
   hnueCCinFV_stack_13->SetBinError(23,0.3025491);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(35,0.1967154);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__23->SetBinContent(1,33.52824);
   hmcerror__23->SetBinContent(2,39.08824);
   hmcerror__23->SetBinContent(3,48.81433);
   hmcerror__23->SetBinContent(4,45.98211);
   hmcerror__23->SetBinContent(5,51.4433);
   hmcerror__23->SetBinContent(6,63.0564);
   hmcerror__23->SetBinContent(7,77.08205);
   hmcerror__23->SetBinContent(8,67.85513);
   hmcerror__23->SetBinContent(9,79.94822);
   hmcerror__23->SetBinContent(10,90.5379);
   hmcerror__23->SetBinContent(11,90.4222);
   hmcerror__23->SetBinContent(12,87.25122);
   hmcerror__23->SetBinContent(13,81.89186);
   hmcerror__23->SetBinContent(14,55.03656);
   hmcerror__23->SetBinContent(15,37.92929);
   hmcerror__23->SetBinContent(16,30.25396);
   hmcerror__23->SetBinContent(17,18.15138);
   hmcerror__23->SetBinContent(18,17.25371);
   hmcerror__23->SetBinContent(19,12.33006);
   hmcerror__23->SetBinContent(20,14.85908);
   hmcerror__23->SetBinContent(21,9.697632);
   hmcerror__23->SetBinContent(22,9.238126);
   hmcerror__23->SetBinContent(23,10.3983);
   hmcerror__23->SetBinContent(24,6.989586);
   hmcerror__23->SetBinContent(25,6.939624);
   hmcerror__23->SetBinContent(26,6.41129);
   hmcerror__23->SetBinContent(27,5.323785);
   hmcerror__23->SetBinContent(28,4.310609);
   hmcerror__23->SetBinContent(29,5.636313);
   hmcerror__23->SetBinContent(30,5.79218);
   hmcerror__23->SetBinContent(31,3.689965);
   hmcerror__23->SetBinContent(32,4.154202);
   hmcerror__23->SetBinContent(33,2.300862);
   hmcerror__23->SetBinContent(34,3.082755);
   hmcerror__23->SetBinContent(35,27.57742);
   hmcerror__23->SetBinError(1,17.5196);
   hmcerror__23->SetBinError(2,20.92537);
   hmcerror__23->SetBinError(3,17.96327);
   hmcerror__23->SetBinError(4,17.86595);
   hmcerror__23->SetBinError(5,20.16086);
   hmcerror__23->SetBinError(6,22.38984);
   hmcerror__23->SetBinError(7,32.24551);
   hmcerror__23->SetBinError(8,26.94139);
   hmcerror__23->SetBinError(9,22.33266);
   hmcerror__23->SetBinError(10,29.07276);
   hmcerror__23->SetBinError(11,28.00622);
   hmcerror__23->SetBinError(12,29.46084);
   hmcerror__23->SetBinError(13,26.76701);
   hmcerror__23->SetBinError(14,22.30638);
   hmcerror__23->SetBinError(15,15.03694);
   hmcerror__23->SetBinError(16,19.59333);
   hmcerror__23->SetBinError(17,9.025437);
   hmcerror__23->SetBinError(18,15.2366);
   hmcerror__23->SetBinError(19,8.120068);
   hmcerror__23->SetBinError(20,11.7858);
   hmcerror__23->SetBinError(21,8.482413);
   hmcerror__23->SetBinError(22,9.455164);
   hmcerror__23->SetBinError(23,11.41029);
   hmcerror__23->SetBinError(24,11.09868);
   hmcerror__23->SetBinError(25,9.272327);
   hmcerror__23->SetBinError(26,8.094422);
   hmcerror__23->SetBinError(27,5.052624);
   hmcerror__23->SetBinError(28,6.520462);
   hmcerror__23->SetBinError(29,7.287392);
   hmcerror__23->SetBinError(30,7.084591);
   hmcerror__23->SetBinError(31,4.819134);
   hmcerror__23->SetBinError(32,5.275721);
   hmcerror__23->SetBinError(33,2.882865);
   hmcerror__23->SetBinError(34,6.275232);
   hmcerror__23->SetBinError(35,23.49323);
   hmcerror__23->SetEntries(1133.738);

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
   
   Double_t _fx3029[34] = {
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
   Double_t _fy3029[34] = {
   34,
   35,
   46,
   46,
   54,
   71,
   63,
   73,
   92,
   105,
   65,
   75,
   69,
   36,
   41,
   24,
   15,
   16,
   12,
   10,
   10,
   15,
   11,
   6,
   5,
   6,
   4,
   1,
   2,
   6,
   5,
   0,
   2,
   1};
   Double_t _felx3029[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3029[34] = {
   5.9703,
   6.0548,
   6.9153,
   6.9153,
   7.4785,
   8.5518,
   8.0648,
   8.6693,
   9.7138,
   10.24695,
   8.1893,
   8.7852,
   8.4327,
   6.1381,
   6.5384,
   5.0476,
   4.0385,
   4.1628,
   3.64022,
   3.34883,
   3.34883,
   4.0385,
   3.4975,
   2.67925,
   2.48995,
   2.67925,
   2.29683,
   1,
   2,
   2.67925,
   2.48995,
   0,
   2,
   1};
   Double_t _fehx3029[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3029[34] = {
   5.7635,
   5.8483,
   6.7108,
   6.7108,
   7.275,
   8.3496,
   7.862,
   8.4672,
   9.513,
   10.24695,
   7.9866,
   8.5831,
   8.2304,
   5.9318,
   6.3331,
   4.837,
   3.8197,
   3.9454,
   3.4155,
   3.1179,
   3.1179,
   3.8197,
   3.27,
   2.41858,
   2.21064,
   2.41858,
   1.98186,
   1.35971,
   1.51917,
   2.41858,
   2.21064,
   1.1478,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,440);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(126.7716);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.7/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1056.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 198.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 241.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  171.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  44.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 218.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 47.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 123.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[34] = {
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
   Double_t _fy3030[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3030[34] = {
   0.5225328,
   0.5353367,
   0.3679918,
   0.3885413,
   0.3919045,
   0.3550764,
   0.4183271,
   0.3970428,
   0.2793391,
   0.3211114,
   0.3097273,
   0.3376553,
   0.326858,
   0.4053011,
   0.3964467,
   0.6476284,
   0.4972315,
   0.8830913,
   0.6585588,
   0.793172,
   0.8746891,
   1.023494,
   1.097322,
   1.587889,
   1.336142,
   1.262526,
   0.9490661,
   1.512654,
   1.292936,
   1.22313,
   1.306011,
   1.269972,
   1.25295,
   2.035592};
   Double_t _fehx3030[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3030[34] = {
   0.5225328,
   0.5353367,
   0.3679918,
   0.3885413,
   0.3919045,
   0.3550764,
   0.4183271,
   0.3970428,
   0.2793391,
   0.3211114,
   0.3097273,
   0.3376553,
   0.326858,
   0.4053011,
   0.3964467,
   0.6476284,
   0.4972315,
   0.8830913,
   0.6585588,
   0.793172,
   0.8746891,
   1.023494,
   1.097322,
   1.587889,
   1.336142,
   1.262526,
   0.9490661,
   1.512654,
   1.292936,
   1.22313,
   1.306011,
   1.269972,
   1.25295,
   2.035592};
   grae = new TGraphAsymmErrors(34,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,440);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3031[34] = {
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
   Double_t _fy3031[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3031[34] = {
   0.1848172,
   0.188272,
   0.1658756,
   0.1708007,
   0.180324,
   0.1770732,
   0.1646228,
   0.1722442,
   0.1796311,
   0.1828042,
   0.1946962,
   0.1945326,
   0.1902965,
   0.1951939,
   0.1860312,
   0.2325829,
   0.2100128,
   0.2446333,
   0.2530803,
   0.2280091,
   0.2693154,
   0.2827678,
   0.4171918,
   0.3052455,
   0.3381071,
   0.3101066,
   0.2956924,
   0.3208317,
   0.4768987,
   0.314478,
   0.359965,
   0.3643532,
   0.5648936,
   0.4346778};
   Double_t _fehx3031[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3031[34] = {
   0.1848172,
   0.188272,
   0.1658756,
   0.1708007,
   0.180324,
   0.1770732,
   0.1646228,
   0.1722442,
   0.1796311,
   0.1828042,
   0.1946962,
   0.1945326,
   0.1902965,
   0.1951939,
   0.1860312,
   0.2325829,
   0.2100128,
   0.2446333,
   0.2530803,
   0.2280091,
   0.2693154,
   0.2827678,
   0.4171918,
   0.3052455,
   0.3381071,
   0.3101066,
   0.2956924,
   0.3208317,
   0.4768987,
   0.314478,
   0.359965,
   0.3643532,
   0.5648936,
   0.4346778};
   grae = new TGraphAsymmErrors(34,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,440);
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
   
   Double_t _fx3032[34] = {
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
   Double_t _fy3032[34] = {
   1.014071,
   0.89541,
   0.9423462,
   1.000389,
   1.049699,
   1.125976,
   0.8173109,
   1.075821,
   1.150745,
   1.159735,
   0.7188501,
   0.8595868,
   0.8425746,
   0.6541107,
   1.080959,
   0.7932845,
   0.8263836,
   0.9273366,
   0.9732314,
   0.6729892,
   1.03118,
   1.623706,
   1.057865,
   0.8584199,
   0.7205001,
   0.9358491,
   0.7513452,
   0.2319858,
   0.3548419,
   1.035879,
   1.355026,
   0,
   0.8692395,
   0.3243852};
   Double_t _felx3032[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3032[34] = {
   0.1780678,
   0.1549008,
   0.1416654,
   0.1503911,
   0.1453736,
   0.1356214,
   0.1046262,
   0.1277619,
   0.1215011,
   0.1131786,
   0.09056737,
   0.1006886,
   0.1029736,
   0.1115277,
   0.1723839,
   0.1668409,
   0.22249,
   0.2412698,
   0.2952314,
   0.2253727,
   0.3453245,
   0.4371558,
   0.336353,
   0.3833203,
   0.3588018,
   0.4178956,
   0.431428,
   0.2319858,
   0.3548419,
   0.4625634,
   0.6747896,
   0,
   0.8692395,
   0.3243852};
   Double_t _fehx3032[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3032[34] = {
   0.1718999,
   0.1496179,
   0.137476,
   0.1459437,
   0.1414178,
   0.1324148,
   0.1019952,
   0.1247835,
   0.1189895,
   0.1131786,
   0.08832566,
   0.09837226,
   0.1005033,
   0.1077793,
   0.1669712,
   0.1598799,
   0.2104358,
   0.2286696,
   0.277006,
   0.2098313,
   0.3215115,
   0.4134713,
   0.3144744,
   0.3460262,
   0.3185533,
   0.3772377,
   0.3722652,
   0.3154334,
   0.2695326,
   0.4175596,
   0.5990951,
   0.2762986,
   0.6602613,
   0.4410698};
   grae = new TGraphAsymmErrors(34,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,440);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.240895);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
