#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sun Oct 23 14:05:14 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",112,135,1200,900);
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
   pad1->Range(-61.53846,-1.21877,451.2821,134.7703);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hmc__25->SetBinContent(1,17.4847);
   hmc__25->SetBinContent(2,19.67841);
   hmc__25->SetBinContent(3,24.72491);
   hmc__25->SetBinContent(4,24.82544);
   hmc__25->SetBinContent(5,26.76543);
   hmc__25->SetBinContent(6,42.09428);
   hmc__25->SetBinContent(7,49.10543);
   hmc__25->SetBinContent(8,44.1902);
   hmc__25->SetBinContent(9,47.69507);
   hmc__25->SetBinContent(10,60.93851);
   hmc__25->SetBinContent(11,56.1207);
   hmc__25->SetBinContent(12,60.39394);
   hmc__25->SetBinContent(13,47.99522);
   hmc__25->SetBinContent(14,24.38744);
   hmc__25->SetBinContent(15,17.41793);
   hmc__25->SetBinContent(16,12.35304);
   hmc__25->SetBinContent(17,8.083735);
   hmc__25->SetBinContent(18,8.129585);
   hmc__25->SetBinContent(19,4.417476);
   hmc__25->SetBinContent(20,5.72998);
   hmc__25->SetBinContent(21,4.885724);
   hmc__25->SetBinContent(22,3.975067);
   hmc__25->SetBinContent(23,2.815423);
   hmc__25->SetBinContent(24,3.001602);
   hmc__25->SetBinContent(25,2.786525);
   hmc__25->SetBinContent(26,3.447879);
   hmc__25->SetBinContent(27,3.061339);
   hmc__25->SetBinContent(28,2.088776);
   hmc__25->SetBinContent(29,2.752687);
   hmc__25->SetBinContent(30,3.076818);
   hmc__25->SetBinContent(31,2.130331);
   hmc__25->SetBinContent(32,2.644006);
   hmc__25->SetBinContent(33,0.7033981);
   hmc__25->SetBinContent(34,1.547928);
   hmc__25->SetBinContent(35,19.14022);
   hmc__25->SetBinError(1,12.85012);
   hmc__25->SetBinError(2,12.41893);
   hmc__25->SetBinError(3,13.8377);
   hmc__25->SetBinError(4,13.75947);
   hmc__25->SetBinError(5,12.69698);
   hmc__25->SetBinError(6,16.24231);
   hmc__25->SetBinError(7,19.14159);
   hmc__25->SetBinError(8,22.08522);
   hmc__25->SetBinError(9,20.75404);
   hmc__25->SetBinError(10,26.29294);
   hmc__25->SetBinError(11,23.70645);
   hmc__25->SetBinError(12,23.44787);
   hmc__25->SetBinError(13,26.9315);
   hmc__25->SetBinError(14,13.65034);
   hmc__25->SetBinError(15,11.25424);
   hmc__25->SetBinError(16,8.548398);
   hmc__25->SetBinError(17,5.498609);
   hmc__25->SetBinError(18,8.412153);
   hmc__25->SetBinError(19,12.41334);
   hmc__25->SetBinError(20,6.299387);
   hmc__25->SetBinError(21,5.777679);
   hmc__25->SetBinError(22,5.34954);
   hmc__25->SetBinError(23,4.817661);
   hmc__25->SetBinError(24,5.095539);
   hmc__25->SetBinError(25,3.85112);
   hmc__25->SetBinError(26,5.304096);
   hmc__25->SetBinError(27,5.449902);
   hmc__25->SetBinError(28,8.583348);
   hmc__25->SetBinError(29,4.44499);
   hmc__25->SetBinError(30,7.696373);
   hmc__25->SetBinError(31,4.636656);
   hmc__25->SetBinError(32,5.411747);
   hmc__25->SetBinError(33,2.130219);
   hmc__25->SetBinError(34,5.074893);
   hmc__25->SetBinError(35,26.0311);
   hmc__25->SetMinimum(-1.21877);
   hmc__25->SetMaximum(127.9709);
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
   hs9_stack_9->SetMinimum(-1.337066e-08);
   hs9_stack_9->SetMaximum(63.98544);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(2,0.4161119);
   hbadmatch_stack_1->SetBinContent(3,0.9463137);
   hbadmatch_stack_1->SetBinContent(4,0.341664);
   hbadmatch_stack_1->SetBinContent(5,1.072095);
   hbadmatch_stack_1->SetBinContent(6,1.600676);
   hbadmatch_stack_1->SetBinContent(7,1.088759);
   hbadmatch_stack_1->SetBinContent(8,0.9969443);
   hbadmatch_stack_1->SetBinContent(9,2.390769);
   hbadmatch_stack_1->SetBinContent(10,2.780503);
   hbadmatch_stack_1->SetBinContent(11,2.431843);
   hbadmatch_stack_1->SetBinContent(12,1.697538);
   hbadmatch_stack_1->SetBinContent(13,1.364775);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.5851527);
   hbadmatch_stack_1->SetBinContent(16,0.1106221);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.4611859);
   hbadmatch_stack_1->SetBinContent(20,0.1950248);
   hbadmatch_stack_1->SetBinContent(24,0.3254665);
   hbadmatch_stack_1->SetBinContent(25,0.8467914);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(35,0.3418778);
   hbadmatch_stack_1->SetBinError(2,0.2946723);
   hbadmatch_stack_1->SetBinError(3,0.4286515);
   hbadmatch_stack_1->SetBinError(4,0.2561594);
   hbadmatch_stack_1->SetBinError(5,0.5551335);
   hbadmatch_stack_1->SetBinError(6,0.6438086);
   hbadmatch_stack_1->SetBinError(7,0.4924834);
   hbadmatch_stack_1->SetBinError(8,0.4268768);
   hbadmatch_stack_1->SetBinError(9,0.8420469);
   hbadmatch_stack_1->SetBinError(10,0.9363828);
   hbadmatch_stack_1->SetBinError(11,0.8294192);
   hbadmatch_stack_1->SetBinError(12,0.5902752);
   hbadmatch_stack_1->SetBinError(13,0.5994543);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.419206);
   hbadmatch_stack_1->SetBinError(16,0.1106221);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.3262743);
   hbadmatch_stack_1->SetBinError(20,0.1950249);
   hbadmatch_stack_1->SetBinError(24,0.2351038);
   hbadmatch_stack_1->SetBinError(25,0.5992914);
   hbadmatch_stack_1->SetBinError(28,0.2364157);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(35,0.2492633);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,1.290409);
   hext_stack_2->SetBinContent(2,2.923985);
   hext_stack_2->SetBinContent(3,2.599588);
   hext_stack_2->SetBinContent(4,2.745221);
   hext_stack_2->SetBinContent(5,4.856008);
   hext_stack_2->SetBinContent(6,7.2437);
   hext_stack_2->SetBinContent(7,10.45895);
   hext_stack_2->SetBinContent(8,7.885314);
   hext_stack_2->SetBinContent(9,4.214394);
   hext_stack_2->SetBinContent(10,11.6225);
   hext_stack_2->SetBinContent(11,5.643255);
   hext_stack_2->SetBinContent(12,6.061444);
   hext_stack_2->SetBinContent(13,5.725457);
   hext_stack_2->SetBinContent(14,2.110787);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,1.868591);
   hext_stack_2->SetBinContent(17,2.973055);
   hext_stack_2->SetBinContent(18,0.9660115);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,0.4065989);
   hext_stack_2->SetBinContent(32,0.4065989);
   hext_stack_2->SetBinContent(35,4.435048);
   hext_stack_2->SetBinError(1,0.788756);
   hext_stack_2->SetBinError(2,1.040301);
   hext_stack_2->SetBinError(3,0.9884288);
   hext_stack_2->SetBinError(4,1.168097);
   hext_stack_2->SetBinError(5,1.454658);
   hext_stack_2->SetBinError(6,2.011201);
   hext_stack_2->SetBinError(7,2.429418);
   hext_stack_2->SetBinError(8,2.111066);
   hext_stack_2->SetBinError(9,1.305512);
   hext_stack_2->SetBinError(10,2.422699);
   hext_stack_2->SetBinError(11,1.707383);
   hext_stack_2->SetBinError(12,1.736203);
   hext_stack_2->SetBinError(13,1.72489);
   hext_stack_2->SetBinError(14,0.8669371);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,0.840497);
   hext_stack_2->SetBinError(17,1.346105);
   hext_stack_2->SetBinError(18,0.7189592);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(3,0.4004149);
   hdirt_stack_3->SetBinContent(4,0.540729);
   hdirt_stack_3->SetBinContent(6,1.130697);
   hdirt_stack_3->SetBinContent(7,0.938378);
   hdirt_stack_3->SetBinContent(8,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.2628198);
   hdirt_stack_3->SetBinContent(11,0.5529928);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinError(3,0.2964588);
   hdirt_stack_3->SetBinError(4,0.3288362);
   hdirt_stack_3->SetBinError(6,0.625667);
   hdirt_stack_3->SetBinError(7,0.545332);
   hdirt_stack_3->SetBinError(8,0.3381872);
   hdirt_stack_3->SetBinError(9,0.2628198);
   hdirt_stack_3->SetBinError(11,0.437291);
   hdirt_stack_3->SetBinError(12,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,4.409903);
   houtFV_stack_4->SetBinContent(2,4.795859);
   houtFV_stack_4->SetBinContent(3,8.067793);
   houtFV_stack_4->SetBinContent(4,5.64242);
   houtFV_stack_4->SetBinContent(5,5.249171);
   houtFV_stack_4->SetBinContent(6,5.827494);
   houtFV_stack_4->SetBinContent(7,9.004458);
   houtFV_stack_4->SetBinContent(8,7.51899);
   houtFV_stack_4->SetBinContent(9,8.400975);
   houtFV_stack_4->SetBinContent(10,7.522524);
   houtFV_stack_4->SetBinContent(11,10.52441);
   houtFV_stack_4->SetBinContent(12,9.957063);
   houtFV_stack_4->SetBinContent(13,9.904835);
   houtFV_stack_4->SetBinContent(14,4.835336);
   houtFV_stack_4->SetBinContent(15,2.760463);
   houtFV_stack_4->SetBinContent(16,2.250784);
   houtFV_stack_4->SetBinContent(17,0.5133469);
   houtFV_stack_4->SetBinContent(18,0.8462275);
   houtFV_stack_4->SetBinContent(19,0.4497738);
   houtFV_stack_4->SetBinContent(20,0.656303);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,1.312521);
   houtFV_stack_4->SetBinContent(23,0.7877532);
   houtFV_stack_4->SetBinContent(24,0.7584243);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinContent(27,0.1967154);
   houtFV_stack_4->SetBinContent(28,0.1967154);
   houtFV_stack_4->SetBinContent(29,0.5352025);
   houtFV_stack_4->SetBinContent(30,0.3401776);
   houtFV_stack_4->SetBinContent(31,0.1950248);
   houtFV_stack_4->SetBinContent(32,0.1967154);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,1.806412);
   houtFV_stack_4->SetBinError(1,1.033405);
   houtFV_stack_4->SetBinError(2,1.048564);
   houtFV_stack_4->SetBinError(3,1.492466);
   houtFV_stack_4->SetBinError(4,1.162106);
   houtFV_stack_4->SetBinError(5,1.082102);
   houtFV_stack_4->SetBinError(6,1.185129);
   houtFV_stack_4->SetBinError(7,1.636253);
   houtFV_stack_4->SetBinError(8,1.511005);
   houtFV_stack_4->SetBinError(9,1.416567);
   houtFV_stack_4->SetBinError(10,1.350085);
   houtFV_stack_4->SetBinError(11,1.639862);
   houtFV_stack_4->SetBinError(12,1.632879);
   houtFV_stack_4->SetBinError(13,1.6847);
   houtFV_stack_4->SetBinError(14,1.156593);
   houtFV_stack_4->SetBinError(15,0.8298221);
   houtFV_stack_4->SetBinError(16,0.8437676);
   houtFV_stack_4->SetBinError(17,0.3029418);
   houtFV_stack_4->SetBinError(18,0.4636746);
   houtFV_stack_4->SetBinError(19,0.3205238);
   houtFV_stack_4->SetBinError(20,0.4103911);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.5783978);
   houtFV_stack_4->SetBinError(23,0.4929259);
   houtFV_stack_4->SetBinError(24,0.4512023);
   houtFV_stack_4->SetBinError(26,0.2770047);
   houtFV_stack_4->SetBinError(27,0.1967154);
   houtFV_stack_4->SetBinError(28,0.1967154);
   houtFV_stack_4->SetBinError(29,0.3921167);
   houtFV_stack_4->SetBinError(30,0.3401776);
   houtFV_stack_4->SetBinError(31,0.1950249);
   houtFV_stack_4->SetBinError(32,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1408695);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2096589);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1106578);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1495766);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.01269218);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02537674);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08967217);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08623998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.07657229);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1075352);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06515877);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09141042);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1614976);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01962509);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04770452);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06278178);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04034209);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06156244);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03322717);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01830775);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0408982);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1304061);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.106717);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.161117);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.225933);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.148458);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.966664);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.770557);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.672226);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.830681);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.498929);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.91495);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.99306);
   hNCpi0inFVres_stack_7->SetBinContent(11,13.01016);
   hNCpi0inFVres_stack_7->SetBinContent(12,12.67358);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.304746);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.479236);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.827162);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.882861);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4849504);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.4756153);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.9245581);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2981308);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.5507307);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.3450778);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.1114477);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.29434);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.04049794);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.1710531);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.1872732);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.36947);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.06293684);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.5245802);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.3349434);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.07773142);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.04248147);
   hNCpi0inFVres_stack_7->SetBinContent(35,0.856926);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2956349);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2839555);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4881462);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5029386);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4062322);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8213491);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9084237);
   hNCpi0inFVres_stack_7->SetBinError(8,0.945333);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9882898);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9763456);
   hNCpi0inFVres_stack_7->SetBinError(11,1.007015);
   hNCpi0inFVres_stack_7->SetBinError(12,1.019786);
   hNCpi0inFVres_stack_7->SetBinError(13,0.879237);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5612765);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5368167);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2591965);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1837179);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1797368);
   hNCpi0inFVres_stack_7->SetBinError(19,0.286781);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1023726);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2706895);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1599829);
   hNCpi0inFVres_stack_7->SetBinError(23,0.05571208);
   hNCpi0inFVres_stack_7->SetBinError(24,0.148424);
   hNCpi0inFVres_stack_7->SetBinError(25,0.04049794);
   hNCpi0inFVres_stack_7->SetBinError(26,0.08414352);
   hNCpi0inFVres_stack_7->SetBinError(27,0.08548936);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2315612);
   hNCpi0inFVres_stack_7->SetBinError(29,0.03752443);
   hNCpi0inFVres_stack_7->SetBinError(30,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4145714);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1584407);
   hNCpi0inFVres_stack_7->SetBinError(33,0.04830453);
   hNCpi0inFVres_stack_7->SetBinError(34,0.03148061);
   hNCpi0inFVres_stack_7->SetBinError(35,0.3431837);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4905511);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8997197);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5625198);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.784531);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.121281);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.353176);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.95137);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.091647);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.957108);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.130784);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.449682);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.279875);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.538125);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.11095);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9197835);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9800617);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2958539);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1494089);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1586321);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1465724);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1290437);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.1358551);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.01822845);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3428196);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.07038145);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2240949);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.0470988);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.4956873);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.4931307);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.07410772);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.3058567);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(35,1.08944);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2129697);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3461659);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2291911);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2674434);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3366664);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3173745);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6546204);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3945222);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.698333);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6397064);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.573017);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.135681);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6238695);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3647989);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4472877);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3955155);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2034041);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.08777651);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.09689454);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1295646);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1290437);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.09113603);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.01822846);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2349367);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.04206469);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1975532);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.0470988);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3505038);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.420946);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04349703);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2632072);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.5864199);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.04157296);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02549736);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,2.87185);
   hCCpi0inFV_stack_10->SetBinContent(2,2.597123);
   hCCpi0inFV_stack_10->SetBinContent(3,3.57107);
   hCCpi0inFV_stack_10->SetBinContent(4,4.52593);
   hCCpi0inFV_stack_10->SetBinContent(5,3.175949);
   hCCpi0inFV_stack_10->SetBinContent(6,8.428396);
   hCCpi0inFV_stack_10->SetBinContent(7,6.451555);
   hCCpi0inFV_stack_10->SetBinContent(8,6.588951);
   hCCpi0inFV_stack_10->SetBinContent(9,9.000525);
   hCCpi0inFV_stack_10->SetBinContent(10,10.45103);
   hCCpi0inFV_stack_10->SetBinContent(11,9.877099);
   hCCpi0inFV_stack_10->SetBinContent(12,15.74619);
   hCCpi0inFV_stack_10->SetBinContent(13,11.66367);
   hCCpi0inFV_stack_10->SetBinContent(14,5.82795);
   hCCpi0inFV_stack_10->SetBinContent(15,5.219805);
   hCCpi0inFV_stack_10->SetBinContent(16,3.237784);
   hCCpi0inFV_stack_10->SetBinContent(17,2.979234);
   hCCpi0inFV_stack_10->SetBinContent(18,1.518779);
   hCCpi0inFV_stack_10->SetBinContent(19,1.1124);
   hCCpi0inFV_stack_10->SetBinContent(20,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(21,1.596314);
   hCCpi0inFV_stack_10->SetBinContent(22,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(23,1.463836);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9628805);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(26,1.327449);
   hCCpi0inFV_stack_10->SetBinContent(27,1.002191);
   hCCpi0inFV_stack_10->SetBinContent(28,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(29,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(30,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(31,0.6063912);
   hCCpi0inFV_stack_10->SetBinContent(32,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(33,0.3900497);
   hCCpi0inFV_stack_10->SetBinContent(34,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(35,3.999767);
   hCCpi0inFV_stack_10->SetBinError(1,0.8178898);
   hCCpi0inFV_stack_10->SetBinError(2,0.8589314);
   hCCpi0inFV_stack_10->SetBinError(3,0.9206376);
   hCCpi0inFV_stack_10->SetBinError(4,1.043994);
   hCCpi0inFV_stack_10->SetBinError(5,0.8772215);
   hCCpi0inFV_stack_10->SetBinError(6,1.4529);
   hCCpi0inFV_stack_10->SetBinError(7,1.306296);
   hCCpi0inFV_stack_10->SetBinError(8,1.316334);
   hCCpi0inFV_stack_10->SetBinError(9,1.554942);
   hCCpi0inFV_stack_10->SetBinError(10,1.655103);
   hCCpi0inFV_stack_10->SetBinError(11,1.532283);
   hCCpi0inFV_stack_10->SetBinError(12,2.04916);
   hCCpi0inFV_stack_10->SetBinError(13,1.64493);
   hCCpi0inFV_stack_10->SetBinError(14,1.119254);
   hCCpi0inFV_stack_10->SetBinError(15,1.186121);
   hCCpi0inFV_stack_10->SetBinError(16,0.9372621);
   hCCpi0inFV_stack_10->SetBinError(17,0.8548804);
   hCCpi0inFV_stack_10->SetBinError(18,0.5892709);
   hCCpi0inFV_stack_10->SetBinError(19,0.5570696);
   hCCpi0inFV_stack_10->SetBinError(20,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(21,0.5650986);
   hCCpi0inFV_stack_10->SetBinError(22,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(23,0.620407);
   hCCpi0inFV_stack_10->SetBinError(24,0.4956616);
   hCCpi0inFV_stack_10->SetBinError(25,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(26,0.6112142);
   hCCpi0inFV_stack_10->SetBinError(27,0.53467);
   hCCpi0inFV_stack_10->SetBinError(28,0.438694);
   hCCpi0inFV_stack_10->SetBinError(29,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(30,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(31,0.4552549);
   hCCpi0inFV_stack_10->SetBinError(32,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(33,0.2758068);
   hCCpi0inFV_stack_10->SetBinError(34,0.3921167);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.4207742);
   hNCinFV_stack_11->SetBinContent(2,0.8573031);
   hNCinFV_stack_11->SetBinContent(3,0.7665486);
   hNCinFV_stack_11->SetBinContent(4,0.8109234);
   hNCinFV_stack_11->SetBinContent(5,1.818544);
   hNCinFV_stack_11->SetBinContent(6,1.531534);
   hNCinFV_stack_11->SetBinContent(7,2.695947);
   hNCinFV_stack_11->SetBinContent(8,1.844025);
   hNCinFV_stack_11->SetBinContent(9,1.547854);
   hNCinFV_stack_11->SetBinContent(10,2.881816);
   hNCinFV_stack_11->SetBinContent(11,2.960036);
   hNCinFV_stack_11->SetBinContent(12,0.9368775);
   hNCinFV_stack_11->SetBinContent(13,3.108306);
   hNCinFV_stack_11->SetBinContent(14,1.254267);
   hNCinFV_stack_11->SetBinContent(15,0.9287087);
   hNCinFV_stack_11->SetBinContent(16,0.587963);
   hNCinFV_stack_11->SetBinContent(17,0.209167);
   hNCinFV_stack_11->SetBinContent(18,1.19579);
   hNCinFV_stack_11->SetBinContent(19,0.6983295);
   hNCinFV_stack_11->SetBinContent(20,1.16554);
   hNCinFV_stack_11->SetBinContent(21,1.179587);
   hNCinFV_stack_11->SetBinContent(22,0.1209555);
   hNCinFV_stack_11->SetBinContent(23,0.2112329);
   hNCinFV_stack_11->SetBinContent(24,0.1209555);
   hNCinFV_stack_11->SetBinContent(27,0.6587691);
   hNCinFV_stack_11->SetBinContent(28,0.1967154);
   hNCinFV_stack_11->SetBinContent(31,0.7302274);
   hNCinFV_stack_11->SetBinContent(32,0.3320811);
   hNCinFV_stack_11->SetBinContent(34,0.9702444);
   hNCinFV_stack_11->SetBinContent(35,3.04164);
   hNCinFV_stack_11->SetBinError(1,0.4207742);
   hNCinFV_stack_11->SetBinError(2,0.456525);
   hNCinFV_stack_11->SetBinError(3,0.3519167);
   hNCinFV_stack_11->SetBinError(4,0.4382537);
   hNCinFV_stack_11->SetBinError(5,0.710296);
   hNCinFV_stack_11->SetBinError(6,0.5827278);
   hNCinFV_stack_11->SetBinError(7,0.977514);
   hNCinFV_stack_11->SetBinError(8,0.5932822);
   hNCinFV_stack_11->SetBinError(9,0.5008932);
   hNCinFV_stack_11->SetBinError(10,0.9813265);
   hNCinFV_stack_11->SetBinError(11,0.9213358);
   hNCinFV_stack_11->SetBinError(12,0.4605372);
   hNCinFV_stack_11->SetBinError(13,0.9317437);
   hNCinFV_stack_11->SetBinError(14,0.5350167);
   hNCinFV_stack_11->SetBinError(15,0.4097237);
   hNCinFV_stack_11->SetBinError(16,0.3620804);
   hNCinFV_stack_11->SetBinError(17,0.2091671);
   hNCinFV_stack_11->SetBinError(18,0.5687474);
   hNCinFV_stack_11->SetBinError(19,0.430026);
   hNCinFV_stack_11->SetBinError(20,0.7923104);
   hNCinFV_stack_11->SetBinError(21,0.7543125);
   hNCinFV_stack_11->SetBinError(22,0.1209556);
   hNCinFV_stack_11->SetBinError(23,0.211233);
   hNCinFV_stack_11->SetBinError(24,0.1209556);
   hNCinFV_stack_11->SetBinError(27,0.4157551);
   hNCinFV_stack_11->SetBinError(28,0.1967154);
   hNCinFV_stack_11->SetBinError(31,0.4379386);
   hNCinFV_stack_11->SetBinError(32,0.3320811);
   hNCinFV_stack_11->SetBinError(34,0.9702444);
   hNCinFV_stack_11->SetBinError(35,0.8922788);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,6.618001);
   hnumuCCinFV_stack_12->SetBinContent(2,5.962378);
   hnumuCCinFV_stack_12->SetBinContent(3,5.396286);
   hnumuCCinFV_stack_12->SetBinContent(4,6.326487);
   hnumuCCinFV_stack_12->SetBinContent(5,6.468641);
   hnumuCCinFV_stack_12->SetBinContent(6,8.928838);
   hnumuCCinFV_stack_12->SetBinContent(7,8.38625);
   hnumuCCinFV_stack_12->SetBinContent(8,7.956761);
   hnumuCCinFV_stack_12->SetBinContent(9,6.203615);
   hnumuCCinFV_stack_12->SetBinContent(10,10.40719);
   hnumuCCinFV_stack_12->SetBinContent(11,7.383141);
   hnumuCCinFV_stack_12->SetBinContent(12,7.016913);
   hnumuCCinFV_stack_12->SetBinContent(13,5.074998);
   hnumuCCinFV_stack_12->SetBinContent(14,4.410697);
   hnumuCCinFV_stack_12->SetBinContent(15,3.195771);
   hnumuCCinFV_stack_12->SetBinContent(16,2.43437);
   hnumuCCinFV_stack_12->SetBinContent(17,0.4005427);
   hnumuCCinFV_stack_12->SetBinContent(18,0.9611434);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(20,2.160531);
   hnumuCCinFV_stack_12->SetBinContent(21,0.4865562);
   hnumuCCinFV_stack_12->SetBinContent(22,0.6624733);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5775138);
   hnumuCCinFV_stack_12->SetBinContent(26,0.9269427);
   hnumuCCinFV_stack_12->SetBinContent(27,0.9692912);
   hnumuCCinFV_stack_12->SetBinContent(28,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(29,1.26543);
   hnumuCCinFV_stack_12->SetBinContent(30,0.9556834);
   hnumuCCinFV_stack_12->SetBinContent(32,0.4504772);
   hnumuCCinFV_stack_12->SetBinContent(35,3.156544);
   hnumuCCinFV_stack_12->SetBinError(1,1.534982);
   hnumuCCinFV_stack_12->SetBinError(2,1.416404);
   hnumuCCinFV_stack_12->SetBinError(3,1.309095);
   hnumuCCinFV_stack_12->SetBinError(4,1.323021);
   hnumuCCinFV_stack_12->SetBinError(5,1.828595);
   hnumuCCinFV_stack_12->SetBinError(6,2.02721);
   hnumuCCinFV_stack_12->SetBinError(7,1.773728);
   hnumuCCinFV_stack_12->SetBinError(8,1.509143);
   hnumuCCinFV_stack_12->SetBinError(9,1.264374);
   hnumuCCinFV_stack_12->SetBinError(10,1.845224);
   hnumuCCinFV_stack_12->SetBinError(11,1.665943);
   hnumuCCinFV_stack_12->SetBinError(12,1.580697);
   hnumuCCinFV_stack_12->SetBinError(13,1.176059);
   hnumuCCinFV_stack_12->SetBinError(14,1.099785);
   hnumuCCinFV_stack_12->SetBinError(15,0.9191881);
   hnumuCCinFV_stack_12->SetBinError(16,0.7963376);
   hnumuCCinFV_stack_12->SetBinError(17,0.2760063);
   hnumuCCinFV_stack_12->SetBinError(18,0.4950883);
   hnumuCCinFV_stack_12->SetBinError(19,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(20,0.812554);
   hnumuCCinFV_stack_12->SetBinError(21,0.3448639);
   hnumuCCinFV_stack_12->SetBinError(22,0.3836653);
   hnumuCCinFV_stack_12->SetBinError(23,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.4147882);
   hnumuCCinFV_stack_12->SetBinError(26,0.4800908);
   hnumuCCinFV_stack_12->SetBinError(27,0.4987971);
   hnumuCCinFV_stack_12->SetBinError(28,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(29,0.5878314);
   hnumuCCinFV_stack_12->SetBinError(30,0.4924667);
   hnumuCCinFV_stack_12->SetBinError(32,0.3210795);
   hnumuCCinFV_stack_12->SetBinError(35,0.9068113);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(5,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(6,0.34964);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3654046);
   hnueCCinFV_stack_13->SetBinContent(9,1.497608);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(12,0.575294);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,1.819894);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(35,0.2171002);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.2192101);
   hnueCCinFV_stack_13->SetBinError(5,0.2331833);
   hnueCCinFV_stack_13->SetBinError(6,0.2491644);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.3654046);
   hnueCCinFV_stack_13->SetBinError(9,1.206386);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(12,0.4388686);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,1.589502);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__26->SetBinContent(1,17.4847);
   hmcerror__26->SetBinContent(2,19.67841);
   hmcerror__26->SetBinContent(3,24.72491);
   hmcerror__26->SetBinContent(4,24.82544);
   hmcerror__26->SetBinContent(5,26.76543);
   hmcerror__26->SetBinContent(6,42.09428);
   hmcerror__26->SetBinContent(7,49.10543);
   hmcerror__26->SetBinContent(8,44.1902);
   hmcerror__26->SetBinContent(9,47.69507);
   hmcerror__26->SetBinContent(10,60.93851);
   hmcerror__26->SetBinContent(11,56.1207);
   hmcerror__26->SetBinContent(12,60.39394);
   hmcerror__26->SetBinContent(13,47.99522);
   hmcerror__26->SetBinContent(14,24.38744);
   hmcerror__26->SetBinContent(15,17.41793);
   hmcerror__26->SetBinContent(16,12.35304);
   hmcerror__26->SetBinContent(17,8.083735);
   hmcerror__26->SetBinContent(18,8.129585);
   hmcerror__26->SetBinContent(19,4.417476);
   hmcerror__26->SetBinContent(20,5.72998);
   hmcerror__26->SetBinContent(21,4.885724);
   hmcerror__26->SetBinContent(22,3.975067);
   hmcerror__26->SetBinContent(23,2.815423);
   hmcerror__26->SetBinContent(24,3.001602);
   hmcerror__26->SetBinContent(25,2.786525);
   hmcerror__26->SetBinContent(26,3.447879);
   hmcerror__26->SetBinContent(27,3.061339);
   hmcerror__26->SetBinContent(28,2.088776);
   hmcerror__26->SetBinContent(29,2.752687);
   hmcerror__26->SetBinContent(30,3.076818);
   hmcerror__26->SetBinContent(31,2.130331);
   hmcerror__26->SetBinContent(32,2.644006);
   hmcerror__26->SetBinContent(33,0.7033981);
   hmcerror__26->SetBinContent(34,1.547928);
   hmcerror__26->SetBinContent(35,19.14022);
   hmcerror__26->SetBinError(1,12.85012);
   hmcerror__26->SetBinError(2,12.41893);
   hmcerror__26->SetBinError(3,13.8377);
   hmcerror__26->SetBinError(4,13.75947);
   hmcerror__26->SetBinError(5,12.69698);
   hmcerror__26->SetBinError(6,16.24231);
   hmcerror__26->SetBinError(7,19.14159);
   hmcerror__26->SetBinError(8,22.08522);
   hmcerror__26->SetBinError(9,20.75404);
   hmcerror__26->SetBinError(10,26.29294);
   hmcerror__26->SetBinError(11,23.70645);
   hmcerror__26->SetBinError(12,23.44787);
   hmcerror__26->SetBinError(13,26.9315);
   hmcerror__26->SetBinError(14,13.65034);
   hmcerror__26->SetBinError(15,11.25424);
   hmcerror__26->SetBinError(16,8.548398);
   hmcerror__26->SetBinError(17,5.498609);
   hmcerror__26->SetBinError(18,8.412153);
   hmcerror__26->SetBinError(19,12.41334);
   hmcerror__26->SetBinError(20,6.299387);
   hmcerror__26->SetBinError(21,5.777679);
   hmcerror__26->SetBinError(22,5.34954);
   hmcerror__26->SetBinError(23,4.817661);
   hmcerror__26->SetBinError(24,5.095539);
   hmcerror__26->SetBinError(25,3.85112);
   hmcerror__26->SetBinError(26,5.304096);
   hmcerror__26->SetBinError(27,5.449902);
   hmcerror__26->SetBinError(28,8.583348);
   hmcerror__26->SetBinError(29,4.44499);
   hmcerror__26->SetBinError(30,7.696373);
   hmcerror__26->SetBinError(31,4.636656);
   hmcerror__26->SetBinError(32,5.411747);
   hmcerror__26->SetBinError(33,2.130219);
   hmcerror__26->SetBinError(34,5.074893);
   hmcerror__26->SetBinError(35,26.0311);
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
   19,
   17,
   28,
   32,
   21,
   41,
   46,
   55,
   44,
   56,
   52,
   60,
   28,
   15,
   13,
   5,
   3,
   9,
   1,
   5,
   2,
   3,
   3,
   2,
   3,
   2,
   0,
   3,
   0,
   3,
   2,
   1,
   0,
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
   4.5151,
   4.2835,
   5.4358,
   5.7977,
   4.7354,
   6.5384,
   6.9153,
   7.546,
   6.7671,
   7.6127,
   7.3419,
   7.8743,
   5.4358,
   4.0385,
   3.77763,
   2.48995,
   2.143368,
   3.19354,
   1,
   2.48995,
   2,
   2.143368,
   2.143368,
   2,
   2.143368,
   2,
   0,
   2.143368,
   0,
   2.143368,
   2,
   1,
   0,
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
   4.3011,
   4.0673,
   5.2271,
   5.5904,
   4.5229,
   6.3331,
   6.7108,
   7.3425,
   6.5623,
   7.4094,
   7.1381,
   7.6713,
   5.2271,
   3.8197,
   3.5552,
   2.21064,
   1.72422,
   2.9582,
   1.35971,
   2.21064,
   1.51917,
   1.72422,
   1.72422,
   1.51917,
   1.72422,
   1.51917,
   1.1478,
   1.72422,
   1.1478,
   1.72422,
   1.51917,
   1.35971,
   1.1478,
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
   Graph_Graph3033->SetMaximum(74.43843);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/34","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 114.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 32.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 113.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_mass_all");
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
   0.7349355,
   0.6310939,
   0.5596662,
   0.5542487,
   0.4743797,
   0.3858556,
   0.3898059,
   0.4997764,
   0.4351402,
   0.4314668,
   0.422419,
   0.3882486,
   0.5611289,
   0.5597282,
   0.6461297,
   0.6920078,
   0.6802065,
   1.034758,
   2.810054,
   1.099373,
   1.182564,
   1.345774,
   1.711168,
   1.697607,
   1.382051,
   1.538365,
   1.780235,
   4.109272,
   1.614782,
   2.501407,
   2.176495,
   2.046798,
   3.028469,
   3.278506};
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
   0.7349355,
   0.6310939,
   0.5596662,
   0.5542487,
   0.4743797,
   0.3858556,
   0.3898059,
   0.4997764,
   0.4351402,
   0.4314668,
   0.422419,
   0.3882486,
   0.5611289,
   0.5597282,
   0.6461297,
   0.6920078,
   0.6802065,
   1.034758,
   2.810054,
   1.099373,
   1.182564,
   1.345774,
   1.711168,
   1.697607,
   1.382051,
   1.538365,
   1.780235,
   4.109272,
   1.614782,
   2.501407,
   2.176495,
   2.046798,
   3.028469,
   3.278506};
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
   0.2379811,
   0.2226748,
   0.2238934,
   0.2384531,
   0.2321338,
   0.2463141,
   0.2300435,
   0.2698595,
   0.3205215,
   0.3182152,
   0.3223697,
   0.2664441,
   0.252656,
   0.2778385,
   0.259468,
   0.2854983,
   0.2995498,
   0.3459951,
   0.3708684,
   0.3867196,
   0.3281593,
   0.3633405,
   0.493122,
   0.4358203,
   0.4591064,
   0.4367536,
   0.4598759,
   0.5315443,
   0.5601595,
   0.714539,
   0.783285,
   0.4662187,
   0.8453082,
   0.9561186};
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
   0.2379811,
   0.2226748,
   0.2238934,
   0.2384531,
   0.2321338,
   0.2463141,
   0.2300435,
   0.2698595,
   0.3205215,
   0.3182152,
   0.3223697,
   0.2664441,
   0.252656,
   0.2778385,
   0.259468,
   0.2854983,
   0.2995498,
   0.3459951,
   0.3708684,
   0.3867196,
   0.3281593,
   0.3633405,
   0.493122,
   0.4358203,
   0.4591064,
   0.4367536,
   0.4598759,
   0.5315443,
   0.5601595,
   0.714539,
   0.783285,
   0.4662187,
   0.8453082,
   0.9561186};
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
   1.086665,
   0.8638908,
   1.132461,
   1.289,
   0.7845941,
   0.9740042,
   0.9367599,
   1.24462,
   0.9225272,
   0.9189591,
   0.9265744,
   0.9934771,
   0.5833915,
   0.6150708,
   0.7463573,
   0.4047587,
   0.3711156,
   1.107068,
   0.2263736,
   0.8726034,
   0.4093559,
   0.7547043,
   1.065559,
   0.6663109,
   1.07661,
   0.5800667,
   0,
   1.436248,
   0,
   0.9750335,
   0.9388211,
   0.3782139,
   0,
   0.6460247};
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
   0.2582315,
   0.2176751,
   0.2198511,
   0.2335387,
   0.1769222,
   0.1553275,
   0.1408256,
   0.1707618,
   0.1418826,
   0.1249243,
   0.1308234,
   0.1303823,
   0.1132571,
   0.1655976,
   0.2168817,
   0.2015658,
   0.2651458,
   0.3928294,
   0.2263736,
   0.4345478,
   0.4093559,
   0.539203,
   0.7612953,
   0.6663109,
   0.7691904,
   0.5800667,
   0,
   1.026136,
   0,
   0.6966185,
   0.9388211,
   0.3782139,
   0,
   0.6460247};
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
   0.2459922,
   0.2066884,
   0.2114102,
   0.2251884,
   0.1689829,
   0.1504504,
   0.136661,
   0.1661567,
   0.1375886,
   0.1215881,
   0.1271919,
   0.127021,
   0.1089088,
   0.1566257,
   0.2041115,
   0.1789552,
   0.213295,
   0.3638808,
   0.3078025,
   0.3858024,
   0.3109406,
   0.4337588,
   0.6124196,
   0.5061198,
   0.6187708,
   0.44061,
   0.374934,
   0.825469,
   0.4169744,
   0.5603907,
   0.7131144,
   0.5142613,
   1.631793,
   0.8784063};
   grae = new TGraphAsymmErrors(34,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,440);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(2.487888);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_mass_all",34,0,400);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
