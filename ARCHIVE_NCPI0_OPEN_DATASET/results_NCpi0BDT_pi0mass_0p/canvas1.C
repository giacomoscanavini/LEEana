#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 13:35:49 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-46.15385,-0.56,338.4615,47.18737);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hmc__1->SetBinContent(0,5.7019);
   hmc__1->SetBinContent(2,7.397682);
   hmc__1->SetBinContent(3,9.907936);
   hmc__1->SetBinContent(4,10.96111);
   hmc__1->SetBinContent(5,12.03025);
   hmc__1->SetBinContent(6,13.09721);
   hmc__1->SetBinContent(7,15.17096);
   hmc__1->SetBinContent(8,16.71821);
   hmc__1->SetBinContent(9,13.92783);
   hmc__1->SetBinContent(10,16.14535);
   hmc__1->SetBinContent(11,21.71824);
   hmc__1->SetBinContent(12,22.66344);
   hmc__1->SetBinContent(13,26.43931);
   hmc__1->SetBinContent(14,26.57724);
   hmc__1->SetBinContent(15,21.88742);
   hmc__1->SetBinContent(16,17.11502);
   hmc__1->SetBinContent(17,9.842074);
   hmc__1->SetBinContent(18,7.842547);
   hmc__1->SetBinContent(19,6.179585);
   hmc__1->SetBinContent(20,4.473483);
   hmc__1->SetBinContent(21,3.404029);
   hmc__1->SetBinContent(22,3.404019);
   hmc__1->SetBinContent(23,2.85138);
   hmc__1->SetBinContent(24,3.112175);
   hmc__1->SetBinContent(25,2.832255);
   hmc__1->SetBinContent(26,2.610197);
   hmc__1->SetBinContent(27,1.963242);
   hmc__1->SetBinContent(28,1.125945);
   hmc__1->SetBinContent(29,1.208937);
   hmc__1->SetBinContent(30,17.20373);
   hmc__1->SetBinError(0,0.6660468);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,4.24673);
   hmc__1->SetBinError(3,4.053617);
   hmc__1->SetBinError(4,4.661607);
   hmc__1->SetBinError(5,3.862451);
   hmc__1->SetBinError(6,4.806302);
   hmc__1->SetBinError(7,5.991719);
   hmc__1->SetBinError(8,6.731561);
   hmc__1->SetBinError(9,4.922759);
   hmc__1->SetBinError(10,4.832549);
   hmc__1->SetBinError(11,7.989767);
   hmc__1->SetBinError(12,7.207833);
   hmc__1->SetBinError(13,8.120793);
   hmc__1->SetBinError(14,6.880637);
   hmc__1->SetBinError(15,6.51006);
   hmc__1->SetBinError(16,5.739006);
   hmc__1->SetBinError(17,3.969497);
   hmc__1->SetBinError(18,2.861348);
   hmc__1->SetBinError(19,2.518413);
   hmc__1->SetBinError(20,2.158906);
   hmc__1->SetBinError(21,1.827563);
   hmc__1->SetBinError(22,2.811476);
   hmc__1->SetBinError(23,2.062217);
   hmc__1->SetBinError(24,1.782967);
   hmc__1->SetBinError(25,1.742297);
   hmc__1->SetBinError(26,2.028398);
   hmc__1->SetBinError(27,1.552764);
   hmc__1->SetBinError(28,1.093154);
   hmc__1->SetBinError(29,1.257478);
   hmc__1->SetBinError(30,4.750071);
   hmc__1->SetMinimum(-0.56);
   hmc__1->SetMaximum(44.8);
   hmc__1->SetEntries(321.7148);
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
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(27.9061);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hbadmatch_stack_1->SetBinContent(0,0.4897051);
   hbadmatch_stack_1->SetBinContent(2,0.2525594);
   hbadmatch_stack_1->SetBinContent(3,0.3787408);
   hbadmatch_stack_1->SetBinContent(4,0.4264857);
   hbadmatch_stack_1->SetBinContent(5,0.05153579);
   hbadmatch_stack_1->SetBinContent(6,0.386016);
   hbadmatch_stack_1->SetBinContent(7,0.6255106);
   hbadmatch_stack_1->SetBinContent(8,0.8273469);
   hbadmatch_stack_1->SetBinContent(9,0.5739873);
   hbadmatch_stack_1->SetBinContent(10,0.4377662);
   hbadmatch_stack_1->SetBinContent(11,0.4487226);
   hbadmatch_stack_1->SetBinContent(12,0.1902389);
   hbadmatch_stack_1->SetBinContent(13,0.6515264);
   hbadmatch_stack_1->SetBinContent(14,0.4929991);
   hbadmatch_stack_1->SetBinContent(15,0.2013559);
   hbadmatch_stack_1->SetBinContent(16,0.3480321);
   hbadmatch_stack_1->SetBinContent(17,0.1770589);
   hbadmatch_stack_1->SetBinContent(18,0.1129571);
   hbadmatch_stack_1->SetBinContent(19,0.07470649);
   hbadmatch_stack_1->SetBinContent(20,0.1621632);
   hbadmatch_stack_1->SetBinContent(21,0.06195629);
   hbadmatch_stack_1->SetBinContent(22,0.06195629);
   hbadmatch_stack_1->SetBinContent(23,0.08745668);
   hbadmatch_stack_1->SetBinContent(24,0.07691942);
   hbadmatch_stack_1->SetBinContent(25,0.01467769);
   hbadmatch_stack_1->SetBinContent(26,0.07470649);
   hbadmatch_stack_1->SetBinContent(27,0.02550039);
   hbadmatch_stack_1->SetBinContent(29,0.0149857);
   hbadmatch_stack_1->SetBinContent(30,0.1239126);
   hbadmatch_stack_1->SetBinError(0,0.3477828);
   hbadmatch_stack_1->SetBinError(2,0.11141);
   hbadmatch_stack_1->SetBinError(3,0.1351573);
   hbadmatch_stack_1->SetBinError(4,0.1607345);
   hbadmatch_stack_1->SetBinError(5,0.02577206);
   hbadmatch_stack_1->SetBinError(6,0.1464647);
   hbadmatch_stack_1->SetBinError(7,0.18);
   hbadmatch_stack_1->SetBinError(8,0.2137979);
   hbadmatch_stack_1->SetBinError(9,0.3006467);
   hbadmatch_stack_1->SetBinError(10,0.1601997);
   hbadmatch_stack_1->SetBinError(11,0.1601852);
   hbadmatch_stack_1->SetBinError(12,0.09253272);
   hbadmatch_stack_1->SetBinError(13,0.2039298);
   hbadmatch_stack_1->SetBinError(14,0.16699);
   hbadmatch_stack_1->SetBinError(15,0.09453805);
   hbadmatch_stack_1->SetBinError(16,0.1402876);
   hbadmatch_stack_1->SetBinError(17,0.1011559);
   hbadmatch_stack_1->SetBinError(18,0.0669989);
   hbadmatch_stack_1->SetBinError(19,0.06325464);
   hbadmatch_stack_1->SetBinError(20,0.09035965);
   hbadmatch_stack_1->SetBinError(21,0.06195629);
   hbadmatch_stack_1->SetBinError(22,0.06195629);
   hbadmatch_stack_1->SetBinError(23,0.06452687);
   hbadmatch_stack_1->SetBinError(24,0.07691942);
   hbadmatch_stack_1->SetBinError(25,0.0146777);
   hbadmatch_stack_1->SetBinError(26,0.06325464);
   hbadmatch_stack_1->SetBinError(27,0.0180315);
   hbadmatch_stack_1->SetBinError(29,0.0149857);
   hbadmatch_stack_1->SetBinError(30,0.08761943);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hext_stack_2->SetBinContent(0,0.6557651);
   hext_stack_2->SetBinContent(2,0.8180047);
   hext_stack_2->SetBinContent(3,1.776441);
   hext_stack_2->SetBinContent(4,2.297237);
   hext_stack_2->SetBinContent(5,2.383126);
   hext_stack_2->SetBinContent(6,1.537851);
   hext_stack_2->SetBinContent(7,1.948219);
   hext_stack_2->SetBinContent(8,1.351071);
   hext_stack_2->SetBinContent(9,1.338801);
   hext_stack_2->SetBinContent(10,1.476501);
   hext_stack_2->SetBinContent(11,2.419936);
   hext_stack_2->SetBinContent(12,1.277452);
   hext_stack_2->SetBinContent(13,2.021838);
   hext_stack_2->SetBinContent(14,2.245426);
   hext_stack_2->SetBinContent(15,1.228373);
   hext_stack_2->SetBinContent(16,0.5576063);
   hext_stack_2->SetBinContent(17,0.3217476);
   hext_stack_2->SetBinContent(18,0.6830363);
   hext_stack_2->SetBinContent(19,0.4349078);
   hext_stack_2->SetBinContent(20,0.2358586);
   hext_stack_2->SetBinContent(21,0.07361911);
   hext_stack_2->SetBinContent(22,0.2481285);
   hext_stack_2->SetBinContent(23,0.211319);
   hext_stack_2->SetBinContent(24,0.211319);
   hext_stack_2->SetBinContent(25,0.2358586);
   hext_stack_2->SetBinContent(27,0.2235888);
   hext_stack_2->SetBinContent(28,0.04907941);
   hext_stack_2->SetBinContent(29,0.01226985);
   hext_stack_2->SetBinContent(30,0.5207967);
   hext_stack_2->SetBinError(0,0.2870586);
   hext_stack_2->SetBinError(2,0.3486711);
   hext_stack_2->SetBinError(3,0.5649979);
   hext_stack_2->SetBinError(4,0.6324312);
   hext_stack_2->SetBinError(5,0.6332638);
   hext_stack_2->SetBinError(6,0.4918726);
   hext_stack_2->SetBinError(7,0.56686);
   hext_stack_2->SetBinError(8,0.4499652);
   hext_stack_2->SetBinError(9,0.4497979);
   hext_stack_2->SetBinError(10,0.4911068);
   hext_stack_2->SetBinError(11,0.6336203);
   hext_stack_2->SetBinError(12,0.4489603);
   hext_stack_2->SetBinError(13,0.5676562);
   hext_stack_2->SetBinError(14,0.6017934);
   hext_stack_2->SetBinError(15,0.4482892);
   hext_stack_2->SetBinError(16,0.284953);
   hext_stack_2->SetBinError(17,0.2027956);
   hext_stack_2->SetBinError(18,0.3462882);
   hext_stack_2->SetBinError(19,0.282299);
   hext_stack_2->SetBinError(20,0.2001804);
   hext_stack_2->SetBinError(21,0.03005488);
   hext_stack_2->SetBinError(22,0.2005561);
   hext_stack_2->SetBinError(23,0.1994269);
   hext_stack_2->SetBinError(24,0.1994269);
   hext_stack_2->SetBinError(25,0.2001804);
   hext_stack_2->SetBinError(27,0.199804);
   hext_stack_2->SetBinError(28,0.0245397);
   hext_stack_2->SetBinError(29,0.01226985);
   hext_stack_2->SetBinError(30,0.2841594);
   hext_stack_2->SetEntries(581);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hdirt_stack_3->SetBinContent(0,0.1231651);
   hdirt_stack_3->SetBinContent(2,0.05789381);
   hdirt_stack_3->SetBinContent(3,0.1558862);
   hdirt_stack_3->SetBinContent(4,0.188759);
   hdirt_stack_3->SetBinContent(5,0.3405223);
   hdirt_stack_3->SetBinContent(6,0.3316565);
   hdirt_stack_3->SetBinContent(7,0.5264764);
   hdirt_stack_3->SetBinContent(8,0.2343784);
   hdirt_stack_3->SetBinContent(9,0.1903165);
   hdirt_stack_3->SetBinContent(10,0.2300483);
   hdirt_stack_3->SetBinContent(11,0.3333231);
   hdirt_stack_3->SetBinContent(12,0.2310909);
   hdirt_stack_3->SetBinContent(13,0.397189);
   hdirt_stack_3->SetBinContent(14,0.2643895);
   hdirt_stack_3->SetBinContent(15,0.3566125);
   hdirt_stack_3->SetBinContent(16,0.1490731);
   hdirt_stack_3->SetBinContent(17,0.06064831);
   hdirt_stack_3->SetBinContent(18,0.08841814);
   hdirt_stack_3->SetBinContent(19,0.02600769);
   hdirt_stack_3->SetBinContent(20,0.008219617);
   hdirt_stack_3->SetBinContent(22,0.01875223);
   hdirt_stack_3->SetBinContent(23,0.06251712);
   hdirt_stack_3->SetBinContent(24,0.0701001);
   hdirt_stack_3->SetBinContent(26,0.008219617);
   hdirt_stack_3->SetBinContent(29,0.04420907);
   hdirt_stack_3->SetBinContent(30,0.05242869);
   hdirt_stack_3->SetBinError(0,0.06489747);
   hdirt_stack_3->SetBinError(2,0.05034964);
   hdirt_stack_3->SetBinError(3,0.07159937);
   hdirt_stack_3->SetBinError(4,0.08608845);
   hdirt_stack_3->SetBinError(5,0.1261607);
   hdirt_stack_3->SetBinError(6,0.1168644);
   hdirt_stack_3->SetBinError(7,0.1520821);
   hdirt_stack_3->SetBinError(8,0.09105329);
   hdirt_stack_3->SetBinError(9,0.08763146);
   hdirt_stack_3->SetBinError(10,0.08894067);
   hdirt_stack_3->SetBinError(11,0.1205285);
   hdirt_stack_3->SetBinError(12,0.09538314);
   hdirt_stack_3->SetBinError(13,0.2181337);
   hdirt_stack_3->SetBinError(14,0.1007571);
   hdirt_stack_3->SetBinError(15,0.124032);
   hdirt_stack_3->SetBinError(16,0.07744966);
   hdirt_stack_3->SetBinError(17,0.04571177);
   hdirt_stack_3->SetBinError(18,0.06252107);
   hdirt_stack_3->SetBinError(19,0.01505588);
   hdirt_stack_3->SetBinError(20,0.008219618);
   hdirt_stack_3->SetBinError(22,0.01336031);
   hdirt_stack_3->SetBinError(23,0.05383534);
   hdirt_stack_3->SetBinError(24,0.05388312);
   hdirt_stack_3->SetBinError(26,0.008219618);
   hdirt_stack_3->SetBinError(29,0.04420907);
   hdirt_stack_3->SetBinError(30,0.0449667);
   hdirt_stack_3->SetEntries(170);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   houtFV_stack_4->SetBinContent(0,1.431574);
   houtFV_stack_4->SetBinContent(2,1.136001);
   houtFV_stack_4->SetBinContent(3,1.621085);
   houtFV_stack_4->SetBinContent(4,2.50094);
   houtFV_stack_4->SetBinContent(5,1.51087);
   houtFV_stack_4->SetBinContent(6,2.002265);
   houtFV_stack_4->SetBinContent(7,2.44669);
   houtFV_stack_4->SetBinContent(8,3.135691);
   houtFV_stack_4->SetBinContent(9,2.023218);
   houtFV_stack_4->SetBinContent(10,2.604652);
   houtFV_stack_4->SetBinContent(11,2.321337);
   houtFV_stack_4->SetBinContent(12,2.83566);
   houtFV_stack_4->SetBinContent(13,2.863641);
   houtFV_stack_4->SetBinContent(14,2.603514);
   houtFV_stack_4->SetBinContent(15,2.656423);
   houtFV_stack_4->SetBinContent(16,1.895868);
   houtFV_stack_4->SetBinContent(17,0.8112211);
   houtFV_stack_4->SetBinContent(18,0.8575224);
   houtFV_stack_4->SetBinContent(19,1.067802);
   houtFV_stack_4->SetBinContent(20,0.537107);
   houtFV_stack_4->SetBinContent(21,0.6989973);
   houtFV_stack_4->SetBinContent(22,0.3905363);
   houtFV_stack_4->SetBinContent(23,0.5377136);
   houtFV_stack_4->SetBinContent(24,0.4099883);
   houtFV_stack_4->SetBinContent(25,0.4227385);
   houtFV_stack_4->SetBinContent(26,0.1876636);
   houtFV_stack_4->SetBinContent(27,0.2860757);
   houtFV_stack_4->SetBinContent(28,0.149413);
   houtFV_stack_4->SetBinContent(29,0.1366628);
   houtFV_stack_4->SetBinContent(30,1.335575);
   houtFV_stack_4->SetBinError(0,0.2774479);
   houtFV_stack_4->SetBinError(2,0.2585021);
   houtFV_stack_4->SetBinError(3,0.291046);
   houtFV_stack_4->SetBinError(4,0.3709468);
   houtFV_stack_4->SetBinError(5,0.277886);
   houtFV_stack_4->SetBinError(6,0.3353126);
   houtFV_stack_4->SetBinError(7,0.3707176);
   houtFV_stack_4->SetBinError(8,0.4173919);
   houtFV_stack_4->SetBinError(9,0.3333463);
   houtFV_stack_4->SetBinError(10,0.374103);
   houtFV_stack_4->SetBinError(11,0.3526468);
   houtFV_stack_4->SetBinError(12,0.3997907);
   houtFV_stack_4->SetBinError(13,0.3954213);
   houtFV_stack_4->SetBinError(14,0.3673773);
   houtFV_stack_4->SetBinError(15,0.3825034);
   houtFV_stack_4->SetBinError(16,0.3169072);
   houtFV_stack_4->SetBinError(17,0.2095496);
   houtFV_stack_4->SetBinError(18,0.2291673);
   houtFV_stack_4->SetBinError(19,0.2497853);
   houtFV_stack_4->SetBinError(20,0.1679542);
   houtFV_stack_4->SetBinError(21,0.1986067);
   houtFV_stack_4->SetBinError(22,0.1424301);
   houtFV_stack_4->SetBinError(23,0.176941);
   houtFV_stack_4->SetBinError(24,0.1533597);
   houtFV_stack_4->SetBinError(25,0.1538888);
   houtFV_stack_4->SetBinError(26,0.0921412);
   houtFV_stack_4->SetBinError(27,0.1258651);
   houtFV_stack_4->SetBinError(28,0.08945557);
   houtFV_stack_4->SetBinError(29,0.08854226);
   houtFV_stack_4->SetBinError(30,0.259571);
   houtFV_stack_4->SetEntries(1136);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hNCpi0inFV_stack_5->SetBinContent(0,1.470424);
   hNCpi0inFV_stack_5->SetBinContent(2,2.975509);
   hNCpi0inFV_stack_5->SetBinContent(3,3.596867);
   hNCpi0inFV_stack_5->SetBinContent(4,3.248835);
   hNCpi0inFV_stack_5->SetBinContent(5,4.857716);
   hNCpi0inFV_stack_5->SetBinContent(6,5.685059);
   hNCpi0inFV_stack_5->SetBinContent(7,5.799811);
   hNCpi0inFV_stack_5->SetBinContent(8,7.441559);
   hNCpi0inFV_stack_5->SetBinContent(9,6.34089);
   hNCpi0inFV_stack_5->SetBinContent(10,7.818681);
   hNCpi0inFV_stack_5->SetBinContent(11,10.71911);
   hNCpi0inFV_stack_5->SetBinContent(12,12.55985);
   hNCpi0inFV_stack_5->SetBinContent(13,13.37085);
   hNCpi0inFV_stack_5->SetBinContent(14,15.02337);
   hNCpi0inFV_stack_5->SetBinContent(15,12.2652);
   hNCpi0inFV_stack_5->SetBinContent(16,9.916035);
   hNCpi0inFV_stack_5->SetBinContent(17,5.531869);
   hNCpi0inFV_stack_5->SetBinContent(18,3.944899);
   hNCpi0inFV_stack_5->SetBinContent(19,2.99742);
   hNCpi0inFV_stack_5->SetBinContent(20,2.082621);
   hNCpi0inFV_stack_5->SetBinContent(21,1.48138);
   hNCpi0inFV_stack_5->SetBinContent(22,1.780205);
   hNCpi0inFV_stack_5->SetBinContent(23,1.260849);
   hNCpi0inFV_stack_5->SetBinContent(24,1.441334);
   hNCpi0inFV_stack_5->SetBinContent(25,1.417629);
   hNCpi0inFV_stack_5->SetBinContent(26,1.48138);
   hNCpi0inFV_stack_5->SetBinContent(27,0.9201835);
   hNCpi0inFV_stack_5->SetBinContent(28,0.6104021);
   hNCpi0inFV_stack_5->SetBinContent(29,0.5976519);
   hNCpi0inFV_stack_5->SetBinContent(30,6.860247);
   hNCpi0inFV_stack_5->SetBinError(0,0.2768973);
   hNCpi0inFV_stack_5->SetBinError(2,0.3998542);
   hNCpi0inFV_stack_5->SetBinError(3,0.4418637);
   hNCpi0inFV_stack_5->SetBinError(4,0.4190022);
   hNCpi0inFV_stack_5->SetBinError(5,0.507);
   hNCpi0inFV_stack_5->SetBinError(6,0.5597563);
   hNCpi0inFV_stack_5->SetBinError(7,0.5610617);
   hNCpi0inFV_stack_5->SetBinError(8,0.6370568);
   hNCpi0inFV_stack_5->SetBinError(9,0.5778267);
   hNCpi0inFV_stack_5->SetBinError(10,0.6479163);
   hNCpi0inFV_stack_5->SetBinError(11,0.7693806);
   hNCpi0inFV_stack_5->SetBinError(12,0.8236548);
   hNCpi0inFV_stack_5->SetBinError(13,0.8605663);
   hNCpi0inFV_stack_5->SetBinError(14,0.9019262);
   hNCpi0inFV_stack_5->SetBinError(15,0.812061);
   hNCpi0inFV_stack_5->SetBinError(16,0.7376268);
   hNCpi0inFV_stack_5->SetBinError(17,0.5385477);
   hNCpi0inFV_stack_5->SetBinError(18,0.4635991);
   hNCpi0inFV_stack_5->SetBinError(19,0.40775);
   hNCpi0inFV_stack_5->SetBinError(20,0.325297);
   hNCpi0inFV_stack_5->SetBinError(21,0.2825959);
   hNCpi0inFV_stack_5->SetBinError(22,0.3096208);
   hNCpi0inFV_stack_5->SetBinError(23,0.2486071);
   hNCpi0inFV_stack_5->SetBinError(24,0.2870513);
   hNCpi0inFV_stack_5->SetBinError(25,0.281154);
   hNCpi0inFV_stack_5->SetBinError(26,0.2825959);
   hNCpi0inFV_stack_5->SetBinError(27,0.2266378);
   hNCpi0inFV_stack_5->SetBinError(28,0.1793649);
   hNCpi0inFV_stack_5->SetBinError(29,0.1789111);
   hNCpi0inFV_stack_5->SetBinError(30,0.6065832);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hCCpi0inFV_stack_6->SetBinContent(0,0.646858);
   hCCpi0inFV_stack_6->SetBinContent(2,0.9614071);
   hCCpi0inFV_stack_6->SetBinContent(3,1.381173);
   hCCpi0inFV_stack_6->SetBinContent(4,1.21901);
   hCCpi0inFV_stack_6->SetBinContent(5,1.282761);
   hCCpi0inFV_stack_6->SetBinContent(6,2.139193);
   hCCpi0inFV_stack_6->SetBinContent(7,1.778411);
   hCCpi0inFV_stack_6->SetBinContent(8,2.156332);
   hCCpi0inFV_stack_6->SetBinContent(9,2.085224);
   hCCpi0inFV_stack_6->SetBinContent(10,2.259064);
   hCCpi0inFV_stack_6->SetBinContent(11,3.633323);
   hCCpi0inFV_stack_6->SetBinContent(12,3.827525);
   hCCpi0inFV_stack_6->SetBinContent(13,3.900265);
   hCCpi0inFV_stack_6->SetBinContent(14,4.34161);
   hCCpi0inFV_stack_6->SetBinContent(15,3.732199);
   hCCpi0inFV_stack_6->SetBinContent(16,3.297693);
   hCCpi0inFV_stack_6->SetBinContent(17,2.30306);
   hCCpi0inFV_stack_6->SetBinContent(18,1.357467);
   hCCpi0inFV_stack_6->SetBinContent(19,0.9463386);
   hCCpi0inFV_stack_6->SetBinContent(20,0.8964778);
   hCCpi0inFV_stack_6->SetBinContent(21,0.5866964);
   hCCpi0inFV_stack_6->SetBinContent(22,0.674746);
   hCCpi0inFV_stack_6->SetBinContent(23,0.4372834);
   hCCpi0inFV_stack_6->SetBinContent(24,0.4719446);
   hCCpi0inFV_stack_6->SetBinContent(25,0.5356956);
   hCCpi0inFV_stack_6->SetBinContent(26,0.5229454);
   hCCpi0inFV_stack_6->SetBinContent(27,0.3625769);
   hCCpi0inFV_stack_6->SetBinContent(28,0.2878704);
   hCCpi0inFV_stack_6->SetBinContent(29,0.1129571);
   hCCpi0inFV_stack_6->SetBinContent(30,5.403329);
   hCCpi0inFV_stack_6->SetBinError(0,0.1889053);
   hCCpi0inFV_stack_6->SetBinError(2,0.2355017);
   hCCpi0inFV_stack_6->SetBinError(3,0.2748347);
   hCCpi0inFV_stack_6->SetBinError(4,0.2595559);
   hCCpi0inFV_stack_6->SetBinError(5,0.261117);
   hCCpi0inFV_stack_6->SetBinError(6,0.3445779);
   hCCpi0inFV_stack_6->SetBinError(7,0.314469);
   hCCpi0inFV_stack_6->SetBinError(8,0.340505);
   hCCpi0inFV_stack_6->SetBinError(9,0.333097);
   hCCpi0inFV_stack_6->SetBinError(10,0.3444604);
   hCCpi0inFV_stack_6->SetBinError(11,0.4458216);
   hCCpi0inFV_stack_6->SetBinError(12,0.446733);
   hCCpi0inFV_stack_6->SetBinError(13,0.4597555);
   hCCpi0inFV_stack_6->SetBinError(14,0.4788074);
   hCCpi0inFV_stack_6->SetBinError(15,0.4535937);
   hCCpi0inFV_stack_6->SetBinError(16,0.4328569);
   hCCpi0inFV_stack_6->SetBinError(17,0.3541742);
   hCCpi0inFV_stack_6->SetBinError(18,0.2686694);
   hCCpi0inFV_stack_6->SetBinError(19,0.2310151);
   hCCpi0inFV_stack_6->SetBinError(20,0.2191205);
   hCCpi0inFV_stack_6->SetBinError(21,0.1697671);
   hCCpi0inFV_stack_6->SetBinError(22,0.1899393);
   hCCpi0inFV_stack_6->SetBinError(23,0.1442865);
   hCCpi0inFV_stack_6->SetBinError(24,0.1654019);
   hCCpi0inFV_stack_6->SetBinError(25,0.167841);
   hCCpi0inFV_stack_6->SetBinError(26,0.167356);
   hCCpi0inFV_stack_6->SetBinError(27,0.1296821);
   hCCpi0inFV_stack_6->SetBinError(28,0.113209);
   hCCpi0inFV_stack_6->SetBinError(29,0.0669989);
   hCCpi0inFV_stack_6->SetBinError(30,0.5427071);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hNCinFV_stack_7->SetBinContent(0,0.3990328);
   hNCinFV_stack_7->SetBinContent(2,0.2241195);
   hNCinFV_stack_7->SetBinContent(3,0.4464442);
   hNCinFV_stack_7->SetBinContent(4,0.6104021);
   hNCinFV_stack_7->SetBinContent(5,0.7343147);
   hNCinFV_stack_7->SetBinContent(6,0.3771218);
   hNCinFV_stack_7->SetBinContent(7,0.8946831);
   hNCinFV_stack_7->SetBinContent(8,0.4737393);
   hNCinFV_stack_7->SetBinContent(9,0.1384575);
   hNCinFV_stack_7->SetBinContent(10,0.646858);
   hNCinFV_stack_7->SetBinContent(11,0.411783);
   hNCinFV_stack_7->SetBinContent(12,0.5119899);
   hNCinFV_stack_7->SetBinContent(13,1.417629);
   hNCinFV_stack_7->SetBinContent(14,0.6614029);
   hNCinFV_stack_7->SetBinContent(15,0.5739462);
   hNCinFV_stack_7->SetBinContent(16,0.2878704);
   hNCinFV_stack_7->SetBinContent(17,0.2733256);
   hNCinFV_stack_7->SetBinContent(18,0.3735324);
   hNCinFV_stack_7->SetBinContent(19,0.1986191);
   hNCinFV_stack_7->SetBinContent(20,0.149413);
   hNCinFV_stack_7->SetBinContent(21,0.1621632);
   hNCinFV_stack_7->SetBinContent(22,0.02550039);
   hNCinFV_stack_7->SetBinContent(23,0.149413);
   hNCinFV_stack_7->SetBinContent(24,0.3225317);
   hNCinFV_stack_7->SetBinContent(25,0.0127502);
   hNCinFV_stack_7->SetBinContent(26,0.2733256);
   hNCinFV_stack_7->SetBinContent(27,0.08745668);
   hNCinFV_stack_7->SetBinContent(29,0.06195629);
   hNCinFV_stack_7->SetBinContent(30,1.056846);
   hNCinFV_stack_7->SetBinError(0,0.1425864);
   hNCinFV_stack_7->SetBinError(2,0.1095603);
   hNCinFV_stack_7->SetBinError(3,0.1644161);
   hNCinFV_stack_7->SetBinError(4,0.1793649);
   hNCinFV_stack_7->SetBinError(5,0.199622);
   hNCinFV_stack_7->SetBinError(6,0.1181281);
   hNCinFV_stack_7->SetBinError(7,0.2259193);
   hNCinFV_stack_7->SetBinError(8,0.1559873);
   hNCinFV_stack_7->SetBinError(9,0.0693829);
   hNCinFV_stack_7->SetBinError(10,0.1889053);
   hNCinFV_stack_7->SetBinError(11,0.1431553);
   hNCinFV_stack_7->SetBinError(12,0.1575428);
   hNCinFV_stack_7->SetBinError(13,0.281154);
   hNCinFV_stack_7->SetBinError(14,0.1811685);
   hNCinFV_stack_7->SetBinError(15,0.1692877);
   hNCinFV_stack_7->SetBinError(16,0.113209);
   hNCinFV_stack_7->SetBinError(17,0.1252177);
   hNCinFV_stack_7->SetBinError(18,0.1414417);
   hNCinFV_stack_7->SetBinError(19,0.1080662);
   hNCinFV_stack_7->SetBinError(20,0.08945557);
   hNCinFV_stack_7->SetBinError(21,0.09035965);
   hNCinFV_stack_7->SetBinError(22,0.0180315);
   hNCinFV_stack_7->SetBinError(23,0.08945557);
   hNCinFV_stack_7->SetBinError(24,0.139124);
   hNCinFV_stack_7->SetBinError(25,0.0127502);
   hNCinFV_stack_7->SetBinError(26,0.1252177);
   hNCinFV_stack_7->SetBinError(27,0.06452687);
   hNCinFV_stack_7->SetBinError(29,0.06195629);
   hNCinFV_stack_7->SetBinError(30,0.2433196);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hnumuCCinFV_stack_8->SetBinContent(0,0.3266129);
   hnumuCCinFV_stack_8->SetBinContent(2,0.4853886);
   hnumuCCinFV_stack_8->SetBinContent(3,0.458548);
   hnumuCCinFV_stack_8->SetBinContent(4,0.3899502);
   hnumuCCinFV_stack_8->SetBinContent(5,0.8694004);
   hnumuCCinFV_stack_8->SetBinContent(6,0.5349285);
   hnumuCCinFV_stack_8->SetBinContent(7,1.008821);
   hnumuCCinFV_stack_8->SetBinContent(8,1.027788);
   hnumuCCinFV_stack_8->SetBinContent(9,1.127242);
   hnumuCCinFV_stack_8->SetBinContent(10,0.6590281);
   hnumuCCinFV_stack_8->SetBinContent(11,1.386871);
   hnumuCCinFV_stack_8->SetBinContent(12,1.229634);
   hnumuCCinFV_stack_8->SetBinContent(13,1.553975);
   hnumuCCinFV_stack_8->SetBinContent(14,0.9445261);
   hnumuCCinFV_stack_8->SetBinContent(15,0.8454645);
   hnumuCCinFV_stack_8->SetBinContent(16,0.650089);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2669261);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3905732);
   hnumuCCinFV_stack_8->SetBinContent(19,0.3382341);
   hnumuCCinFV_stack_8->SetBinContent(20,0.4016224);
   hnumuCCinFV_stack_8->SetBinContent(21,0.3392174);
   hnumuCCinFV_stack_8->SetBinContent(22,0.2041933);
   hnumuCCinFV_stack_8->SetBinContent(23,0.1048276);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1080377);
   hnumuCCinFV_stack_8->SetBinContent(25,0.1767258);
   hnumuCCinFV_stack_8->SetBinContent(26,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(27,0.04257171);
   hnumuCCinFV_stack_8->SetBinContent(28,0.02918029);
   hnumuCCinFV_stack_8->SetBinContent(29,0.2282445);
   hnumuCCinFV_stack_8->SetBinContent(30,1.29534);
   hnumuCCinFV_stack_8->SetBinError(0,0.1345079);
   hnumuCCinFV_stack_8->SetBinError(2,0.1708929);
   hnumuCCinFV_stack_8->SetBinError(3,0.1605737);
   hnumuCCinFV_stack_8->SetBinError(4,0.1530182);
   hnumuCCinFV_stack_8->SetBinError(5,0.2352847);
   hnumuCCinFV_stack_8->SetBinError(6,0.2240073);
   hnumuCCinFV_stack_8->SetBinError(7,0.2594893);
   hnumuCCinFV_stack_8->SetBinError(8,0.452789);
   hnumuCCinFV_stack_8->SetBinError(9,0.5215979);
   hnumuCCinFV_stack_8->SetBinError(10,0.2014349);
   hnumuCCinFV_stack_8->SetBinError(11,0.2974115);
   hnumuCCinFV_stack_8->SetBinError(12,0.3285813);
   hnumuCCinFV_stack_8->SetBinError(13,0.387293);
   hnumuCCinFV_stack_8->SetBinError(14,0.2667765);
   hnumuCCinFV_stack_8->SetBinError(15,0.2197553);
   hnumuCCinFV_stack_8->SetBinError(16,0.2004702);
   hnumuCCinFV_stack_8->SetBinError(17,0.1078533);
   hnumuCCinFV_stack_8->SetBinError(18,0.1456116);
   hnumuCCinFV_stack_8->SetBinError(19,0.1400072);
   hnumuCCinFV_stack_8->SetBinError(20,0.1601531);
   hnumuCCinFV_stack_8->SetBinError(21,0.1337445);
   hnumuCCinFV_stack_8->SetBinError(22,0.1114002);
   hnumuCCinFV_stack_8->SetBinError(23,0.06682415);
   hnumuCCinFV_stack_8->SetBinError(24,0.06698146);
   hnumuCCinFV_stack_8->SetBinError(25,0.09766544);
   hnumuCCinFV_stack_8->SetBinError(26,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(27,0.02483073);
   hnumuCCinFV_stack_8->SetBinError(28,0.02063401);
   hnumuCCinFV_stack_8->SetBinError(29,0.1192338);
   hnumuCCinFV_stack_8->SetBinError(30,0.275782);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hnueCCinFV_stack_9->SetBinContent(0,0.1587629);
   hnueCCinFV_stack_9->SetBinContent(2,0.4867987);
   hnueCCinFV_stack_9->SetBinContent(3,0.09275308);
   hnueCCinFV_stack_9->SetBinContent(4,0.07949371);
   hnueCCinFV_stack_9->SetBinContent(6,0.1031196);
   hnueCCinFV_stack_9->SetBinContent(7,0.1423349);
   hnueCCinFV_stack_9->SetBinContent(8,0.07030885);
   hnueCCinFV_stack_9->SetBinContent(9,0.1096915);
   hnueCCinFV_stack_9->SetBinContent(10,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(11,0.04382849);
   hnueCCinFV_stack_9->SetBinContent(12,3.875852e-07);
   hnueCCinFV_stack_9->SetBinContent(13,0.2624);
   hnueCCinFV_stack_9->SetBinContent(15,0.02785392);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(17,0.09621814);
   hnueCCinFV_stack_9->SetBinContent(18,0.03414221);
   hnueCCinFV_stack_9->SetBinContent(19,0.09554926);
   hnueCCinFV_stack_9->SetBinContent(25,0.01618016);
   hnueCCinFV_stack_9->SetBinContent(27,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(30,0.5552521);
   hnueCCinFV_stack_9->SetBinError(0,0.09106701);
   hnueCCinFV_stack_9->SetBinError(2,0.4699933);
   hnueCCinFV_stack_9->SetBinError(3,0.06577864);
   hnueCCinFV_stack_9->SetBinError(4,0.06439055);
   hnueCCinFV_stack_9->SetBinError(6,0.06886423);
   hnueCCinFV_stack_9->SetBinError(7,0.08953517);
   hnueCCinFV_stack_9->SetBinError(8,0.07030884);
   hnueCCinFV_stack_9->SetBinError(9,0.07821272);
   hnueCCinFV_stack_9->SetBinError(10,0.0127502);
   hnueCCinFV_stack_9->SetBinError(11,0.02571097);
   hnueCCinFV_stack_9->SetBinError(12,3.875852e-07);
   hnueCCinFV_stack_9->SetBinError(13,0.138031);
   hnueCCinFV_stack_9->SetBinError(15,0.02785392);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(17,0.08163059);
   hnueCCinFV_stack_9->SetBinError(18,0.02468554);
   hnueCCinFV_stack_9->SetBinError(19,0.08377501);
   hnueCCinFV_stack_9->SetBinError(25,0.01618016);
   hnueCCinFV_stack_9->SetBinError(27,0.01528837);
   hnueCCinFV_stack_9->SetBinError(30,0.1878052);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);
   hmcerror__2->SetBinContent(0,5.7019);
   hmcerror__2->SetBinContent(2,7.397682);
   hmcerror__2->SetBinContent(3,9.907936);
   hmcerror__2->SetBinContent(4,10.96111);
   hmcerror__2->SetBinContent(5,12.03025);
   hmcerror__2->SetBinContent(6,13.09721);
   hmcerror__2->SetBinContent(7,15.17096);
   hmcerror__2->SetBinContent(8,16.71821);
   hmcerror__2->SetBinContent(9,13.92783);
   hmcerror__2->SetBinContent(10,16.14535);
   hmcerror__2->SetBinContent(11,21.71824);
   hmcerror__2->SetBinContent(12,22.66344);
   hmcerror__2->SetBinContent(13,26.43931);
   hmcerror__2->SetBinContent(14,26.57724);
   hmcerror__2->SetBinContent(15,21.88742);
   hmcerror__2->SetBinContent(16,17.11502);
   hmcerror__2->SetBinContent(17,9.842074);
   hmcerror__2->SetBinContent(18,7.842547);
   hmcerror__2->SetBinContent(19,6.179585);
   hmcerror__2->SetBinContent(20,4.473483);
   hmcerror__2->SetBinContent(21,3.404029);
   hmcerror__2->SetBinContent(22,3.404019);
   hmcerror__2->SetBinContent(23,2.85138);
   hmcerror__2->SetBinContent(24,3.112175);
   hmcerror__2->SetBinContent(25,2.832255);
   hmcerror__2->SetBinContent(26,2.610197);
   hmcerror__2->SetBinContent(27,1.963242);
   hmcerror__2->SetBinContent(28,1.125945);
   hmcerror__2->SetBinContent(29,1.208937);
   hmcerror__2->SetBinContent(30,17.20373);
   hmcerror__2->SetBinError(0,0.6660468);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,4.24673);
   hmcerror__2->SetBinError(3,4.053617);
   hmcerror__2->SetBinError(4,4.661607);
   hmcerror__2->SetBinError(5,3.862451);
   hmcerror__2->SetBinError(6,4.806302);
   hmcerror__2->SetBinError(7,5.991719);
   hmcerror__2->SetBinError(8,6.731561);
   hmcerror__2->SetBinError(9,4.922759);
   hmcerror__2->SetBinError(10,4.832549);
   hmcerror__2->SetBinError(11,7.989767);
   hmcerror__2->SetBinError(12,7.207833);
   hmcerror__2->SetBinError(13,8.120793);
   hmcerror__2->SetBinError(14,6.880637);
   hmcerror__2->SetBinError(15,6.51006);
   hmcerror__2->SetBinError(16,5.739006);
   hmcerror__2->SetBinError(17,3.969497);
   hmcerror__2->SetBinError(18,2.861348);
   hmcerror__2->SetBinError(19,2.518413);
   hmcerror__2->SetBinError(20,2.158906);
   hmcerror__2->SetBinError(21,1.827563);
   hmcerror__2->SetBinError(22,2.811476);
   hmcerror__2->SetBinError(23,2.062217);
   hmcerror__2->SetBinError(24,1.782967);
   hmcerror__2->SetBinError(25,1.742297);
   hmcerror__2->SetBinError(26,2.028398);
   hmcerror__2->SetBinError(27,1.552764);
   hmcerror__2->SetBinError(28,1.093154);
   hmcerror__2->SetBinError(29,1.257478);
   hmcerror__2->SetBinError(30,4.750071);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
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
   8,
   9,
   9,
   15,
   17,
   16,
   9,
   12,
   19,
   17,
   27,
   26,
   28,
   16,
   12,
   7,
   8,
   3,
   2,
   6,
   8,
   2,
   3,
   2,
   2,
   0,
   2,
   2};
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
   3.0307,
   3.19354,
   3.19354,
   4.0385,
   4.2835,
   4.1628,
   3.19354,
   3.64022,
   4.5151,
   4.2835,
   5.3414,
   5.2453,
   5.4358,
   4.1628,
   3.64022,
   2.85954,
   3.0307,
   2.143368,
   2,
   2.67925,
   3.0307,
   2,
   2.143368,
   2,
   2,
   0,
   2,
   2};
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
   2.7896,
   2.9582,
   2.9582,
   3.8197,
   4.0673,
   3.9454,
   2.9582,
   3.4155,
   4.3011,
   4.0673,
   5.1322,
   5.0358,
   5.2271,
   3.9454,
   3.4155,
   2.61053,
   2.7896,
   1.72422,
   1.51917,
   2.41858,
   2.7896,
   1.51917,
   1.72422,
   1.51917,
   1.51917,
   1.1478,
   1.51917,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(29,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,330);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(36.54981);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.95#pm0.06(data err)#pm0.20(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.79/29","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 287.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.2","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 27.6","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.4","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 40.7","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  147.2","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 47.5","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 10.5","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 15.9","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.7","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_pi0_mass_all");
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
   0.5740623,
   0.4091283,
   0.4252859,
   0.3210617,
   0.3669714,
   0.3949467,
   0.4026483,
   0.3534477,
   0.2993152,
   0.3678828,
   0.3180379,
   0.3071484,
   0.2588921,
   0.2974338,
   0.3353199,
   0.4033191,
   0.3648493,
   0.4075376,
   0.4826008,
   0.5368823,
   0.8259284,
   0.7232346,
   0.5729006,
   0.6151622,
   0.7771054,
   0.7909183,
   0.9708765,
   1.040151};
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
   0.5740623,
   0.4091283,
   0.4252859,
   0.3210617,
   0.3669714,
   0.3949467,
   0.4026483,
   0.3534477,
   0.2993152,
   0.3678828,
   0.3180379,
   0.3071484,
   0.2588921,
   0.2974338,
   0.3353199,
   0.4033191,
   0.3648493,
   0.4075376,
   0.4826008,
   0.5368823,
   0.8259284,
   0.7232346,
   0.5729006,
   0.6151622,
   0.7771054,
   0.7909183,
   0.9708765,
   1.040151};
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
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   0.2161401,
   0.196801,
   0.1861895,
   0.1750035,
   0.1874987,
   0.1845198,
   0.2039761,
   0.1976015,
   0.1827001,
   0.1920798,
   0.193795,
   0.2075482,
   0.1961815,
   0.2013969,
   0.2147197,
   0.2192754,
   0.2152316,
   0.2317153,
   0.2268786,
   0.2557799,
   0.2585378,
   0.2588536,
   0.2451506,
   0.2592917,
   0.349083,
   0.2800284,
   0.3584586,
   0.3532248};
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
   0.2161401,
   0.196801,
   0.1861895,
   0.1750035,
   0.1874987,
   0.1845198,
   0.2039761,
   0.1976015,
   0.1827001,
   0.1920798,
   0.193795,
   0.2075482,
   0.1961815,
   0.2013969,
   0.2147197,
   0.2192754,
   0.2152316,
   0.2317153,
   0.2268786,
   0.2557799,
   0.2585378,
   0.2588536,
   0.2451506,
   0.2592917,
   0.349083,
   0.2800284,
   0.3584586,
   0.3532248};
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
   1.08142,
   0.9083627,
   0.8210845,
   1.246857,
   1.297986,
   1.054647,
   0.538335,
   0.8615845,
   1.176809,
   0.7827523,
   1.191346,
   0.9833841,
   1.053533,
   0.7310134,
   0.7011386,
   0.7112322,
   1.020077,
   0.4854695,
   0.447079,
   1.762617,
   2.350163,
   0.7014148,
   0.9639561,
   0.706151,
   0.7662258,
   0,
   1.776285,
   1.654346};
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
   0.4096824,
   0.3223214,
   0.2913518,
   0.3356955,
   0.3270544,
   0.2743927,
   0.1910216,
   0.2613631,
   0.2796533,
   0.1972306,
   0.2356835,
   0.1983902,
   0.2045284,
   0.1901914,
   0.2126916,
   0.2905424,
   0.3864433,
   0.3468466,
   0.447079,
   0.7870819,
   0.89033,
   0.7014148,
   0.6887042,
   0.706151,
   0.7662258,
   0,
   1.776285,
   1.654346};
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
   0.3770911,
   0.2985687,
   0.2698814,
   0.317508,
   0.3105471,
   0.2600627,
   0.1769447,
   0.2452285,
   0.2663987,
   0.1872758,
   0.2264528,
   0.1904664,
   0.1966758,
   0.1802588,
   0.1995616,
   0.2652418,
   0.3557008,
   0.2790187,
   0.3395945,
   0.710505,
   0.819502,
   0.5327841,
   0.5540241,
   0.5363817,
   0.5820136,
   0.5846451,
   1.34924,
   1.256616};
   grae = new TGraphAsymmErrors(29,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,330);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_pi0_mass_all",29,0,300);

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
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
