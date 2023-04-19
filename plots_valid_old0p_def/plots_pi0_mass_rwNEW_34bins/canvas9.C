#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Fri Feb 17 18:13:03 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-1.399322,451.2821,154.7355);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__25->SetBinContent(1,18.82753);
   hmc__25->SetBinContent(2,21.48148);
   hmc__25->SetBinContent(3,25.68655);
   hmc__25->SetBinContent(4,26.59376);
   hmc__25->SetBinContent(5,28.96702);
   hmc__25->SetBinContent(6,47.82446);
   hmc__25->SetBinContent(7,48.35841);
   hmc__25->SetBinContent(8,49.50976);
   hmc__25->SetBinContent(9,57.848);
   hmc__25->SetBinContent(10,69.96608);
   hmc__25->SetBinContent(11,64.80321);
   hmc__25->SetBinContent(12,60.84818);
   hmc__25->SetBinContent(13,53.81171);
   hmc__25->SetBinContent(14,30.44379);
   hmc__25->SetBinContent(15,16.30418);
   hmc__25->SetBinContent(16,14.04869);
   hmc__25->SetBinContent(17,8.172503);
   hmc__25->SetBinContent(18,7.968099);
   hmc__25->SetBinContent(19,5.509313);
   hmc__25->SetBinContent(20,7.229133);
   hmc__25->SetBinContent(21,4.024096);
   hmc__25->SetBinContent(22,4.083447);
   hmc__25->SetBinContent(23,2.816346);
   hmc__25->SetBinContent(24,3.399208);
   hmc__25->SetBinContent(25,2.942968);
   hmc__25->SetBinContent(26,3.29124);
   hmc__25->SetBinContent(27,2.094915);
   hmc__25->SetBinContent(28,2.943031);
   hmc__25->SetBinContent(29,2.056529);
   hmc__25->SetBinContent(30,3.594995);
   hmc__25->SetBinContent(31,2.133424);
   hmc__25->SetBinContent(32,3.324387);
   hmc__25->SetBinContent(33,0.4737496);
   hmc__25->SetBinContent(34,1.126205);
   hmc__25->SetBinContent(35,18.55124);
   hmc__25->SetBinError(1,12.40267);
   hmc__25->SetBinError(2,13.22848);
   hmc__25->SetBinError(3,15.62832);
   hmc__25->SetBinError(4,14.41039);
   hmc__25->SetBinError(5,13.33741);
   hmc__25->SetBinError(6,19.48994);
   hmc__25->SetBinError(7,18.82849);
   hmc__25->SetBinError(8,25.80882);
   hmc__25->SetBinError(9,20.65942);
   hmc__25->SetBinError(10,24.33814);
   hmc__25->SetBinError(11,27.67463);
   hmc__25->SetBinError(12,24.29772);
   hmc__25->SetBinError(13,27.71311);
   hmc__25->SetBinError(14,17.5469);
   hmc__25->SetBinError(15,13.61133);
   hmc__25->SetBinError(16,9.028946);
   hmc__25->SetBinError(17,5.700895);
   hmc__25->SetBinError(18,7.158217);
   hmc__25->SetBinError(19,10.39961);
   hmc__25->SetBinError(20,7.825788);
   hmc__25->SetBinError(21,4.660309);
   hmc__25->SetBinError(22,5.696554);
   hmc__25->SetBinError(23,5.109355);
   hmc__25->SetBinError(24,7.39802);
   hmc__25->SetBinError(25,4.434057);
   hmc__25->SetBinError(26,5.545941);
   hmc__25->SetBinError(27,5.556805);
   hmc__25->SetBinError(28,8.416843);
   hmc__25->SetBinError(29,3.590752);
   hmc__25->SetBinError(30,9.445671);
   hmc__25->SetBinError(31,4.343436);
   hmc__25->SetBinError(32,10.33846);
   hmc__25->SetBinError(33,1.138737);
   hmc__25->SetBinError(34,3.18305);
   hmc__25->SetBinError(35,26.67512);
   hmc__25->SetMinimum(-1.399322);
   hmc__25->SetMaximum(146.9288);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",34,0,400);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(73.46438);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(2,0.4161119);
   hbadmatch_stack_1->SetBinContent(3,1.205398);
   hbadmatch_stack_1->SetBinContent(4,0.4277573);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,1.31777);
   hbadmatch_stack_1->SetBinContent(7,1.428937);
   hbadmatch_stack_1->SetBinContent(8,1.17353);
   hbadmatch_stack_1->SetBinContent(9,2.36836);
   hbadmatch_stack_1->SetBinContent(10,3.32829);
   hbadmatch_stack_1->SetBinContent(11,2.242929);
   hbadmatch_stack_1->SetBinContent(12,2.269035);
   hbadmatch_stack_1->SetBinContent(13,1.893611);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.5851527);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.4329889);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinContent(25,0.8467914);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(35,0.5352025);
   hbadmatch_stack_1->SetBinError(2,0.2946723);
   hbadmatch_stack_1->SetBinError(3,0.4928246);
   hbadmatch_stack_1->SetBinError(4,0.3034424);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.6069298);
   hbadmatch_stack_1->SetBinError(7,0.5985488);
   hbadmatch_stack_1->SetBinError(8,0.4790957);
   hbadmatch_stack_1->SetBinError(9,0.8499722);
   hbadmatch_stack_1->SetBinError(10,0.9687208);
   hbadmatch_stack_1->SetBinError(11,0.8124719);
   hbadmatch_stack_1->SetBinError(12,0.739759);
   hbadmatch_stack_1->SetBinError(13,0.6988183);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.419206);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.3076713);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetBinError(25,0.5992914);
   hbadmatch_stack_1->SetBinError(28,0.2364157);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(35,0.3921167);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,1.290409);
   hext_stack_2->SetBinContent(2,2.923985);
   hext_stack_2->SetBinContent(3,2.27519);
   hext_stack_2->SetBinContent(4,2.745221);
   hext_stack_2->SetBinContent(5,4.856008);
   hext_stack_2->SetBinContent(6,7.885314);
   hext_stack_2->SetBinContent(7,5.650435);
   hext_stack_2->SetBinContent(8,7.478716);
   hext_stack_2->SetBinContent(9,9.925489);
   hext_stack_2->SetBinContent(10,11.2159);
   hext_stack_2->SetBinContent(11,5.318858);
   hext_stack_2->SetBinContent(12,5.166044);
   hext_stack_2->SetBinContent(13,5.807659);
   hext_stack_2->SetBinContent(14,2.110787);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,2.599588);
   hext_stack_2->SetBinContent(17,2.973055);
   hext_stack_2->SetBinContent(18,0.9660115);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,0.4065989);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(32,0.4065989);
   hext_stack_2->SetBinContent(35,4.435048);
   hext_stack_2->SetBinError(1,0.788756);
   hext_stack_2->SetBinError(2,1.040301);
   hext_stack_2->SetBinError(3,0.9336798);
   hext_stack_2->SetBinError(4,1.168097);
   hext_stack_2->SetBinError(5,1.454658);
   hext_stack_2->SetBinError(6,2.111066);
   hext_stack_2->SetBinError(7,1.647409);
   hext_stack_2->SetBinError(8,2.071539);
   hext_stack_2->SetBinError(9,2.254331);
   hext_stack_2->SetBinError(10,2.388335);
   hext_stack_2->SetBinError(11,1.676283);
   hext_stack_2->SetBinError(12,1.619774);
   hext_stack_2->SetBinError(13,1.742221);
   hext_stack_2->SetBinError(14,0.8669371);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,0.9884288);
   hext_stack_2->SetBinError(17,1.346105);
   hext_stack_2->SetBinError(18,0.7189592);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.4065989);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(32,0.4065989);
   hext_stack_2->SetBinError(35,1.533985);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(3,0.4004149);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2669376);
   hdirt_stack_3->SetBinContent(6,1.128346);
   hdirt_stack_3->SetBinContent(7,0.938378);
   hdirt_stack_3->SetBinContent(8,0.4762587);
   hdirt_stack_3->SetBinContent(9,0.2628198);
   hdirt_stack_3->SetBinContent(11,0.5529928);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinError(3,0.2964588);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.2645965);
   hdirt_stack_3->SetBinError(6,0.6256626);
   hdirt_stack_3->SetBinError(7,0.545332);
   hdirt_stack_3->SetBinError(8,0.3652866);
   hdirt_stack_3->SetBinError(9,0.2628198);
   hdirt_stack_3->SetBinError(11,0.437291);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,4.999701);
   houtFV_stack_4->SetBinContent(2,6.10193);
   houtFV_stack_4->SetBinContent(3,8.174599);
   houtFV_stack_4->SetBinContent(4,5.714093);
   houtFV_stack_4->SetBinContent(5,5.19166);
   houtFV_stack_4->SetBinContent(6,7.721887);
   houtFV_stack_4->SetBinContent(7,8.164521);
   houtFV_stack_4->SetBinContent(8,7.23292);
   houtFV_stack_4->SetBinContent(9,8.502073);
   houtFV_stack_4->SetBinContent(10,8.893824);
   houtFV_stack_4->SetBinContent(11,11.37389);
   houtFV_stack_4->SetBinContent(12,10.19023);
   houtFV_stack_4->SetBinContent(13,9.688183);
   houtFV_stack_4->SetBinContent(14,4.790342);
   houtFV_stack_4->SetBinContent(15,2.594256);
   houtFV_stack_4->SetBinContent(16,1.91052);
   houtFV_stack_4->SetBinContent(17,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.9663737);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,0.3900497);
   houtFV_stack_4->SetBinContent(21,0.3401776);
   houtFV_stack_4->SetBinContent(22,1.371936);
   houtFV_stack_4->SetBinContent(23,0.8770706);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(25,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinContent(27,0.1967154);
   houtFV_stack_4->SetBinContent(28,0.1967154);
   houtFV_stack_4->SetBinContent(29,0.5352025);
   houtFV_stack_4->SetBinContent(30,0.6803553);
   houtFV_stack_4->SetBinContent(31,0.1950248);
   houtFV_stack_4->SetBinContent(32,0.3934307);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,1.806412);
   houtFV_stack_4->SetBinError(1,1.125845);
   houtFV_stack_4->SetBinError(2,1.240429);
   houtFV_stack_4->SetBinError(3,1.487319);
   houtFV_stack_4->SetBinError(4,1.209652);
   houtFV_stack_4->SetBinError(5,1.085258);
   houtFV_stack_4->SetBinError(6,1.363628);
   houtFV_stack_4->SetBinError(7,1.380413);
   houtFV_stack_4->SetBinError(8,1.403788);
   houtFV_stack_4->SetBinError(9,1.473498);
   houtFV_stack_4->SetBinError(10,1.543583);
   houtFV_stack_4->SetBinError(11,1.721872);
   houtFV_stack_4->SetBinError(12,1.634573);
   houtFV_stack_4->SetBinError(13,1.566441);
   houtFV_stack_4->SetBinError(14,1.090569);
   houtFV_stack_4->SetBinError(15,0.8103937);
   houtFV_stack_4->SetBinError(16,0.6511312);
   houtFV_stack_4->SetBinError(17,0.3397478);
   houtFV_stack_4->SetBinError(18,0.4974153);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.2758068);
   houtFV_stack_4->SetBinError(21,0.3401776);
   houtFV_stack_4->SetBinError(22,0.5185478);
   houtFV_stack_4->SetBinError(23,0.5197486);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(25,0.3401776);
   houtFV_stack_4->SetBinError(26,0.2770047);
   houtFV_stack_4->SetBinError(27,0.1967154);
   houtFV_stack_4->SetBinError(28,0.1967154);
   houtFV_stack_4->SetBinError(29,0.3921167);
   houtFV_stack_4->SetBinError(30,0.4810838);
   houtFV_stack_4->SetBinError(31,0.1950249);
   houtFV_stack_4->SetBinError(32,0.2781975);
   houtFV_stack_4->SetBinError(33,0.1950249);
   houtFV_stack_4->SetBinError(34,4.828564e-09);
   houtFV_stack_4->SetBinError(35,0.7195721);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.1954681);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.008312);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.02093);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.554278);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.140506);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.978842);
   hNCpi0inFVres_stack_7->SetBinContent(6,8.05898);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.9048);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.70152);
   hNCpi0inFVres_stack_7->SetBinContent(9,15.73251);
   hNCpi0inFVres_stack_7->SetBinContent(10,18.7424);
   hNCpi0inFVres_stack_7->SetBinContent(11,20.30798);
   hNCpi0inFVres_stack_7->SetBinContent(12,17.10907);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.32821);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.45439);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.69361);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.435694);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.753636);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.158022);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.14374);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.4042178);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2368179);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.599022);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.4188362);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.3062359);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(35,0.7664219);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4968153);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4493728);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6700904);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6215764);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7261215);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9226436);
   hNCpi0inFVres_stack_7->SetBinError(7,1.104412);
   hNCpi0inFVres_stack_7->SetBinError(8,1.104029);
   hNCpi0inFVres_stack_7->SetBinError(9,1.302103);
   hNCpi0inFVres_stack_7->SetBinError(10,1.411217);
   hNCpi0inFVres_stack_7->SetBinError(11,1.538989);
   hNCpi0inFVres_stack_7->SetBinError(12,1.282349);
   hNCpi0inFVres_stack_7->SetBinError(13,1.225655);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8177595);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6481931);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4148453);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2941681);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3705767);
   hNCpi0inFVres_stack_7->SetBinError(19,0.379057);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1342881);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1155977);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2640716);
   hNCpi0inFVres_stack_7->SetBinError(23,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(25,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(27,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(28,0.277838);
   hNCpi0inFVres_stack_7->SetBinError(29,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(30,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(31,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(32,0.14851);
   hNCpi0inFVres_stack_7->SetBinError(33,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(34,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(35,0.2727714);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.446568);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.725736);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.96189);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.534508);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.328334);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.784608);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.43122);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.87338);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.864002);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.154292);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.820988);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.914234);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.714694);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.241226);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.4180041);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(35,0.795154);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2126346);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2741946);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2928421);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3355772);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4328289);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5556754);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3772552);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6565461);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5511035);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6605844);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6528795);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6501417);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5701945);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4241235);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4311774);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.2406819);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.3073253);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,2.87185);
   hCCpi0inFV_stack_10->SetBinContent(2,2.06023);
   hCCpi0inFV_stack_10->SetBinContent(3,3.716223);
   hCCpi0inFV_stack_10->SetBinContent(4,4.330905);
   hCCpi0inFV_stack_10->SetBinContent(5,3.56769);
   hCCpi0inFV_stack_10->SetBinContent(6,7.992186);
   hCCpi0inFV_stack_10->SetBinContent(7,6.836203);
   hCCpi0inFV_stack_10->SetBinContent(8,6.835539);
   hCCpi0inFV_stack_10->SetBinContent(9,9.245421);
   hCCpi0inFV_stack_10->SetBinContent(10,10.59619);
   hCCpi0inFV_stack_10->SetBinContent(11,8.311474);
   hCCpi0inFV_stack_10->SetBinContent(12,13.78444);
   hCCpi0inFV_stack_10->SetBinContent(13,14.13587);
   hCCpi0inFV_stack_10->SetBinContent(14,7.338219);
   hCCpi0inFV_stack_10->SetBinContent(15,4.193175);
   hCCpi0inFV_stack_10->SetBinContent(16,3.417588);
   hCCpi0inFV_stack_10->SetBinContent(17,2.103854);
   hCCpi0inFV_stack_10->SetBinContent(18,2.039343);
   hCCpi0inFV_stack_10->SetBinContent(19,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(20,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(21,1.402979);
   hCCpi0inFV_stack_10->SetBinContent(22,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(23,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(24,1.301368);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(26,1.327449);
   hCCpi0inFV_stack_10->SetBinContent(27,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(28,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(29,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(30,1.681868);
   hCCpi0inFV_stack_10->SetBinContent(31,0.4120452);
   hCCpi0inFV_stack_10->SetBinContent(32,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(33,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(34,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(35,3.999767);
   hCCpi0inFV_stack_10->SetBinError(1,0.8178898);
   hCCpi0inFV_stack_10->SetBinError(2,0.7637706);
   hCCpi0inFV_stack_10->SetBinError(3,0.9619042);
   hCCpi0inFV_stack_10->SetBinError(4,1.025616);
   hCCpi0inFV_stack_10->SetBinError(5,0.919918);
   hCCpi0inFV_stack_10->SetBinError(6,1.419406);
   hCCpi0inFV_stack_10->SetBinError(7,1.357057);
   hCCpi0inFV_stack_10->SetBinError(8,1.315971);
   hCCpi0inFV_stack_10->SetBinError(9,1.554422);
   hCCpi0inFV_stack_10->SetBinError(10,1.678407);
   hCCpi0inFV_stack_10->SetBinError(11,1.407015);
   hCCpi0inFV_stack_10->SetBinError(12,1.88008);
   hCCpi0inFV_stack_10->SetBinError(13,1.876094);
   hCCpi0inFV_stack_10->SetBinError(14,1.369257);
   hCCpi0inFV_stack_10->SetBinError(15,0.9886821);
   hCCpi0inFV_stack_10->SetBinError(16,0.9097299);
   hCCpi0inFV_stack_10->SetBinError(17,0.6792233);
   hCCpi0inFV_stack_10->SetBinError(18,0.7354003);
   hCCpi0inFV_stack_10->SetBinError(19,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(20,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(21,0.5310028);
   hCCpi0inFV_stack_10->SetBinError(22,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(23,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(24,0.6006155);
   hCCpi0inFV_stack_10->SetBinError(25,0.438694);
   hCCpi0inFV_stack_10->SetBinError(26,0.6112142);
   hCCpi0inFV_stack_10->SetBinError(27,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(28,0.48078);
   hCCpi0inFV_stack_10->SetBinError(29,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(30,0.7188565);
   hCCpi0inFV_stack_10->SetBinError(31,0.4120451);
   hCCpi0inFV_stack_10->SetBinError(32,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(33,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(34,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(35,1.03826);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.9303237);
   hNCinFV_stack_11->SetBinContent(3,1.178602);
   hNCinFV_stack_11->SetBinContent(4,0.7336084);
   hNCinFV_stack_11->SetBinContent(5,1.858957);
   hNCinFV_stack_11->SetBinContent(6,1.717185);
   hNCinFV_stack_11->SetBinContent(7,2.730956);
   hNCinFV_stack_11->SetBinContent(8,1.517089);
   hNCinFV_stack_11->SetBinContent(9,2.30226);
   hNCinFV_stack_11->SetBinContent(10,1.849274);
   hNCinFV_stack_11->SetBinContent(11,3.514436);
   hNCinFV_stack_11->SetBinContent(12,1.804013);
   hNCinFV_stack_11->SetBinContent(13,2.980925);
   hNCinFV_stack_11->SetBinContent(14,1.804013);
   hNCinFV_stack_11->SetBinContent(15,0.7319179);
   hNCinFV_stack_11->SetBinContent(16,0.785171);
   hNCinFV_stack_11->SetBinContent(17,0.3401776);
   hNCinFV_stack_11->SetBinContent(18,1.125349);
   hNCinFV_stack_11->SetBinContent(19,1.215558);
   hNCinFV_stack_11->SetBinContent(20,0.8753801);
   hNCinFV_stack_11->SetBinContent(21,0.8753801);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.7319179);
   hNCinFV_stack_11->SetBinContent(28,0.1967154);
   hNCinFV_stack_11->SetBinContent(31,0.9269427);
   hNCinFV_stack_11->SetBinContent(32,0.1967154);
   hNCinFV_stack_11->SetBinContent(34,0.3401776);
   hNCinFV_stack_11->SetBinContent(35,2.78759);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.4814682);
   hNCinFV_stack_11->SetBinError(3,0.4811646);
   hNCinFV_stack_11->SetBinError(4,0.4394482);
   hNCinFV_stack_11->SetBinError(5,0.6804124);
   hNCinFV_stack_11->SetBinError(6,0.6217711);
   hNCinFV_stack_11->SetBinError(7,0.8550514);
   hNCinFV_stack_11->SetBinError(8,0.5887087);
   hNCinFV_stack_11->SetBinError(9,0.707604);
   hNCinFV_stack_11->SetBinError(10,0.708638);
   hNCinFV_stack_11->SetBinError(11,0.940519);
   hNCinFV_stack_11->SetBinError(12,0.7075491);
   hNCinFV_stack_11->SetBinError(13,0.8552677);
   hNCinFV_stack_11->SetBinError(14,0.7075491);
   hNCinFV_stack_11->SetBinError(15,0.438694);
   hNCinFV_stack_11->SetBinError(16,0.3925882);
   hNCinFV_stack_11->SetBinError(17,0.3401776);
   hNCinFV_stack_11->SetBinError(18,0.5194673);
   hNCinFV_stack_11->SetBinError(19,0.6206425);
   hNCinFV_stack_11->SetBinError(20,0.5191111);
   hNCinFV_stack_11->SetBinError(21,0.5191111);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.438694);
   hNCinFV_stack_11->SetBinError(28,0.1967154);
   hNCinFV_stack_11->SetBinError(31,0.4800908);
   hNCinFV_stack_11->SetBinError(32,0.1967154);
   hNCinFV_stack_11->SetBinError(34,0.3401776);
   hNCinFV_stack_11->SetBinError(35,0.8331329);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,6.761463);
   hnumuCCinFV_stack_12->SetBinContent(2,6.000466);
   hnumuCCinFV_stack_12->SetBinContent(3,4.400311);
   hnumuCCinFV_stack_12->SetBinContent(4,6.848956);
   hnumuCCinFV_stack_12->SetBinContent(5,5.835343);
   hnumuCCinFV_stack_12->SetBinContent(6,9.269015);
   hnumuCCinFV_stack_12->SetBinContent(7,9.217951);
   hnumuCCinFV_stack_12->SetBinContent(8,8.45405);
   hnumuCCinFV_stack_12->SetBinContent(9,4.901258);
   hnumuCCinFV_stack_12->SetBinContent(10,10.95659);
   hnumuCCinFV_stack_12->SetBinContent(11,8.747642);
   hnumuCCinFV_stack_12->SetBinContent(12,6.425191);
   hnumuCCinFV_stack_12->SetBinContent(13,3.300519);
   hnumuCCinFV_stack_12->SetBinContent(14,5.122941);
   hnumuCCinFV_stack_12->SetBinContent(15,2.879687);
   hnumuCCinFV_stack_12->SetBinContent(16,2.462185);
   hnumuCCinFV_stack_12->SetBinContent(17,0.8258409);
   hnumuCCinFV_stack_12->SetBinContent(18,1.351193);
   hnumuCCinFV_stack_12->SetBinContent(19,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(20,2.42059);
   hnumuCCinFV_stack_12->SetBinContent(21,0.226497);
   hnumuCCinFV_stack_12->SetBinContent(22,0.4338905);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5775138);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(27,0.5775509);
   hnumuCCinFV_stack_12->SetBinContent(28,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(29,1.072095);
   hnumuCCinFV_stack_12->SetBinContent(30,0.758968);
   hnumuCCinFV_stack_12->SetBinContent(31,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(32,0.9856797);
   hnumuCCinFV_stack_12->SetBinContent(35,3.013081);
   hnumuCCinFV_stack_12->SetBinError(1,1.55987);
   hnumuCCinFV_stack_12->SetBinError(2,1.44418);
   hnumuCCinFV_stack_12->SetBinError(3,1.150973);
   hnumuCCinFV_stack_12->SetBinError(4,1.398111);
   hnumuCCinFV_stack_12->SetBinError(5,1.772602);
   hnumuCCinFV_stack_12->SetBinError(6,2.055554);
   hnumuCCinFV_stack_12->SetBinError(7,1.846349);
   hnumuCCinFV_stack_12->SetBinError(8,1.548543);
   hnumuCCinFV_stack_12->SetBinError(9,1.107439);
   hnumuCCinFV_stack_12->SetBinError(10,1.869038);
   hnumuCCinFV_stack_12->SetBinError(11,1.783992);
   hnumuCCinFV_stack_12->SetBinError(12,1.532521);
   hnumuCCinFV_stack_12->SetBinError(13,0.9535386);
   hnumuCCinFV_stack_12->SetBinError(14,1.210074);
   hnumuCCinFV_stack_12->SetBinError(15,0.833533);
   hnumuCCinFV_stack_12->SetBinError(16,0.8036607);
   hnumuCCinFV_stack_12->SetBinError(17,0.4088111);
   hnumuCCinFV_stack_12->SetBinError(18,0.566729);
   hnumuCCinFV_stack_12->SetBinError(19,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(20,0.8531557);
   hnumuCCinFV_stack_12->SetBinError(21,0.2264959);
   hnumuCCinFV_stack_12->SetBinError(22,0.3081379);
   hnumuCCinFV_stack_12->SetBinError(23,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(24,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(25,0.4147882);
   hnumuCCinFV_stack_12->SetBinError(26,0.438694);
   hnumuCCinFV_stack_12->SetBinError(27,0.4148095);
   hnumuCCinFV_stack_12->SetBinError(28,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(29,0.5551335);
   hnumuCCinFV_stack_12->SetBinError(30,0.4514715);
   hnumuCCinFV_stack_12->SetBinError(31,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(32,0.5068013);
   hnumuCCinFV_stack_12->SetBinError(35,0.8632976);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(4,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(6,0.34964);
   hnueCCinFV_stack_13->SetBinContent(7,0.56212);
   hnueCCinFV_stack_13->SetBinContent(9,1.497608);
   hnueCCinFV_stack_13->SetBinContent(10,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,1.569686);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(35,0.2171002);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.2331833);
   hnueCCinFV_stack_13->SetBinError(4,0.2192101);
   hnueCCinFV_stack_13->SetBinError(6,0.2491644);
   hnueCCinFV_stack_13->SetBinError(7,0.4149909);
   hnueCCinFV_stack_13->SetBinError(9,1.206386);
   hnueCCinFV_stack_13->SetBinError(10,0.1711909);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.4041031);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,1.569686);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(35,0.2171002);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__26->SetBinContent(1,18.82753);
   hmcerror__26->SetBinContent(2,21.48148);
   hmcerror__26->SetBinContent(3,25.68655);
   hmcerror__26->SetBinContent(4,26.59376);
   hmcerror__26->SetBinContent(5,28.96702);
   hmcerror__26->SetBinContent(6,47.82446);
   hmcerror__26->SetBinContent(7,48.35841);
   hmcerror__26->SetBinContent(8,49.50976);
   hmcerror__26->SetBinContent(9,57.848);
   hmcerror__26->SetBinContent(10,69.96608);
   hmcerror__26->SetBinContent(11,64.80321);
   hmcerror__26->SetBinContent(12,60.84818);
   hmcerror__26->SetBinContent(13,53.81171);
   hmcerror__26->SetBinContent(14,30.44379);
   hmcerror__26->SetBinContent(15,16.30418);
   hmcerror__26->SetBinContent(16,14.04869);
   hmcerror__26->SetBinContent(17,8.172503);
   hmcerror__26->SetBinContent(18,7.968099);
   hmcerror__26->SetBinContent(19,5.509313);
   hmcerror__26->SetBinContent(20,7.229133);
   hmcerror__26->SetBinContent(21,4.024096);
   hmcerror__26->SetBinContent(22,4.083447);
   hmcerror__26->SetBinContent(23,2.816346);
   hmcerror__26->SetBinContent(24,3.399208);
   hmcerror__26->SetBinContent(25,2.942968);
   hmcerror__26->SetBinContent(26,3.29124);
   hmcerror__26->SetBinContent(27,2.094915);
   hmcerror__26->SetBinContent(28,2.943031);
   hmcerror__26->SetBinContent(29,2.056529);
   hmcerror__26->SetBinContent(30,3.594995);
   hmcerror__26->SetBinContent(31,2.133424);
   hmcerror__26->SetBinContent(32,3.324387);
   hmcerror__26->SetBinContent(33,0.4737496);
   hmcerror__26->SetBinContent(34,1.126205);
   hmcerror__26->SetBinContent(35,18.55124);
   hmcerror__26->SetBinError(1,12.40267);
   hmcerror__26->SetBinError(2,13.22848);
   hmcerror__26->SetBinError(3,15.62832);
   hmcerror__26->SetBinError(4,14.41039);
   hmcerror__26->SetBinError(5,13.33741);
   hmcerror__26->SetBinError(6,19.48994);
   hmcerror__26->SetBinError(7,18.82849);
   hmcerror__26->SetBinError(8,25.80882);
   hmcerror__26->SetBinError(9,20.65942);
   hmcerror__26->SetBinError(10,24.33814);
   hmcerror__26->SetBinError(11,27.67463);
   hmcerror__26->SetBinError(12,24.29772);
   hmcerror__26->SetBinError(13,27.71311);
   hmcerror__26->SetBinError(14,17.5469);
   hmcerror__26->SetBinError(15,13.61133);
   hmcerror__26->SetBinError(16,9.028946);
   hmcerror__26->SetBinError(17,5.700895);
   hmcerror__26->SetBinError(18,7.158217);
   hmcerror__26->SetBinError(19,10.39961);
   hmcerror__26->SetBinError(20,7.825788);
   hmcerror__26->SetBinError(21,4.660309);
   hmcerror__26->SetBinError(22,5.696554);
   hmcerror__26->SetBinError(23,5.109355);
   hmcerror__26->SetBinError(24,7.39802);
   hmcerror__26->SetBinError(25,4.434057);
   hmcerror__26->SetBinError(26,5.545941);
   hmcerror__26->SetBinError(27,5.556805);
   hmcerror__26->SetBinError(28,8.416843);
   hmcerror__26->SetBinError(29,3.590752);
   hmcerror__26->SetBinError(30,9.445671);
   hmcerror__26->SetBinError(31,4.343436);
   hmcerror__26->SetBinError(32,10.33846);
   hmcerror__26->SetBinError(33,1.138737);
   hmcerror__26->SetBinError(34,3.18305);
   hmcerror__26->SetBinError(35,26.67512);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[34] = {
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
   Double_t _fy3033[34] = {
   20,
   17,
   26,
   32,
   23,
   42,
   50,
   46,
   49,
   53,
   49,
   59,
   27,
   15,
   17,
   4,
   2,
   12,
   3,
   2,
   3,
   5,
   0,
   3,
   3,
   2,
   3,
   2,
   0,
   2,
   1,
   1,
   1,
   1};
   Double_t _felx3033[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3033[34] = {
   4.6266,
   4.2835,
   5.2453,
   5.7977,
   4.9457,
   6.6155,
   7.2025,
   6.9153,
   7.1318,
   7.4105,
   7.1318,
   7.8097,
   5.3414,
   4.0385,
   4.2835,
   2.29683,
   2,
   3.64022,
   2.143368,
   2,
   2.143368,
   2.48995,
   0,
   2.143368,
   2.143368,
   2,
   2.143368,
   2,
   0,
   2,
   1,
   1,
   1,
   1};
   Double_t _fehx3033[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3033[34] = {
   4.4133,
   4.0673,
   5.0358,
   5.5904,
   4.7346,
   6.4104,
   6.9985,
   6.7108,
   6.9277,
   7.2068,
   6.9277,
   7.6066,
   5.1322,
   3.8197,
   4.0673,
   1.98186,
   1.51917,
   3.4155,
   1.72422,
   1.51917,
   1.72422,
   2.21064,
   1.1478,
   1.72422,
   1.72422,
   1.51917,
   1.72422,
   1.51917,
   1.1478,
   1.51917,
   1.35971,
   1.35971,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,440);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(73.26726);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.82#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.6/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 575.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.1","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 84.0","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 119.5","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.0","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  150.5","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.1","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 128.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 113.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[34] = {
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
   Double_t _fy3034[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3034[34] = {
   0.6587516,
   0.6158087,
   0.6084242,
   0.5418711,
   0.4604344,
   0.4075308,
   0.389353,
   0.5212875,
   0.3571328,
   0.3478563,
   0.4270565,
   0.3993172,
   0.5150014,
   0.5763703,
   0.8348367,
   0.6426897,
   0.6975703,
   0.8983595,
   1.887641,
   1.082535,
   1.158101,
   1.395035,
   1.814179,
   2.176395,
   1.506661,
   1.685061,
   2.652521,
   2.859924,
   1.746026,
   2.62745,
   2.035899,
   3.109884,
   2.403669,
   2.826351};
   Double_t _fehx3034[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3034[34] = {
   0.6587516,
   0.6158087,
   0.6084242,
   0.5418711,
   0.4604344,
   0.4075308,
   0.389353,
   0.5212875,
   0.3571328,
   0.3478563,
   0.4270565,
   0.3993172,
   0.5150014,
   0.5763703,
   0.8348367,
   0.6426897,
   0.6975703,
   0.8983595,
   1.887641,
   1.082535,
   1.158101,
   1.395035,
   1.814179,
   2.176395,
   1.506661,
   1.685061,
   2.652521,
   2.859924,
   1.746026,
   2.62745,
   2.035899,
   3.109884,
   2.403669,
   2.826351};
   grae = new TGraphAsymmErrors(34,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,440);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[34] = {
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
   Double_t _fy3035[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3035[34] = {
   0.2280337,
   0.2031766,
   0.2136469,
   0.2254094,
   0.2285351,
   0.2265992,
   0.227777,
   0.2508076,
   0.2641431,
   0.2734292,
   0.3080746,
   0.2724053,
   0.2533263,
   0.2546907,
   0.2667256,
   0.2941362,
   0.2765389,
   0.2975661,
   0.3391552,
   0.3885424,
   0.3853028,
   0.3496854,
   0.4823227,
   0.4059182,
   0.4374938,
   0.4412959,
   0.6457206,
   0.4367545,
   1.009419,
   0.4187471,
   0.5787347,
   0.3813471,
   1.089016,
   0.6707481};
   Double_t _fehx3035[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3035[34] = {
   0.2280337,
   0.2031766,
   0.2136469,
   0.2254094,
   0.2285351,
   0.2265992,
   0.227777,
   0.2508076,
   0.2641431,
   0.2734292,
   0.3080746,
   0.2724053,
   0.2533263,
   0.2546907,
   0.2667256,
   0.2941362,
   0.2765389,
   0.2975661,
   0.3391552,
   0.3885424,
   0.3853028,
   0.3496854,
   0.4823227,
   0.4059182,
   0.4374938,
   0.4412959,
   0.6457206,
   0.4367545,
   1.009419,
   0.4187471,
   0.5787347,
   0.3813471,
   1.089016,
   0.6707481};
   grae = new TGraphAsymmErrors(34,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,440);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[34] = {
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
   Double_t _fy3036[34] = {
   1.062274,
   0.7913793,
   1.012203,
   1.20329,
   0.7940065,
   0.8782117,
   1.033946,
   0.9291097,
   0.8470474,
   0.7575099,
   0.7561354,
   0.9696265,
   0.5017496,
   0.4927113,
   1.042677,
   0.2847241,
   0.2447231,
   1.506005,
   0.5445325,
   0.2766584,
   0.745509,
   1.224456,
   0,
   0.8825585,
   1.019379,
   0.6076738,
   1.432039,
   0.6795715,
   0,
   0.556329,
   0.4687302,
   0.3008073,
   2.11082,
   0.8879378};
   Double_t _felx3036[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3036[34] = {
   0.2457358,
   0.1994043,
   0.2042041,
   0.2180098,
   0.1707356,
   0.1383288,
   0.14894,
   0.1396755,
   0.1232852,
   0.1059156,
   0.1100532,
   0.1283473,
   0.09926093,
   0.1326543,
   0.262724,
   0.1634907,
   0.2447231,
   0.4568493,
   0.3890445,
   0.2766584,
   0.5326334,
   0.6097666,
   0,
   0.6305492,
   0.7283014,
   0.6076738,
   1.023129,
   0.6795715,
   0,
   0.556329,
   0.4687302,
   0.3008073,
   2.11082,
   0.8879378};
   Double_t _fehx3036[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3036[34] = {
   0.2344067,
   0.1893398,
   0.1960481,
   0.2102148,
   0.163448,
   0.1340402,
   0.1447215,
   0.135545,
   0.119757,
   0.1030042,
   0.1069037,
   0.1250095,
   0.0953733,
   0.1254673,
   0.2494636,
   0.1410708,
   0.185888,
   0.4286468,
   0.3129646,
   0.2101455,
   0.4284738,
   0.5413661,
   0.4075493,
   0.5072417,
   0.5858779,
   0.4615799,
   0.8230502,
   0.5161923,
   0.558125,
   0.4225791,
   0.6373371,
   0.4090107,
   2.870102,
   1.207338};
   grae = new TGraphAsymmErrors(34,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,440);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(5.479014);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
