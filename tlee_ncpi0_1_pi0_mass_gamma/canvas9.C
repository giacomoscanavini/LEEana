#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sun Oct 23 18:44:01 2022) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-1.237266,451.2821,136.8156);
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
   hmc__25->SetBinContent(1,17.82214);
   hmc__25->SetBinContent(2,20.29167);
   hmc__25->SetBinContent(3,23.55424);
   hmc__25->SetBinContent(4,24.14726);
   hmc__25->SetBinContent(5,27.3582);
   hmc__25->SetBinContent(6,44.02056);
   hmc__25->SetBinContent(7,44.8605);
   hmc__25->SetBinContent(8,43.64371);
   hmc__25->SetBinContent(9,51.13216);
   hmc__25->SetBinContent(10,61.86332);
   hmc__25->SetBinContent(11,56.17469);
   hmc__25->SetBinContent(12,54.57387);
   hmc__25->SetBinContent(13,49.47338);
   hmc__25->SetBinContent(14,28.43);
   hmc__25->SetBinContent(15,14.74063);
   hmc__25->SetBinContent(16,13.25101);
   hmc__25->SetBinContent(17,7.609691);
   hmc__25->SetBinContent(18,7.38998);
   hmc__25->SetBinContent(19,4.949516);
   hmc__25->SetBinContent(20,7.283044);
   hmc__25->SetBinContent(21,4.219371);
   hmc__25->SetBinContent(22,4.02913);
   hmc__25->SetBinContent(23,2.556361);
   hmc__25->SetBinContent(24,3.100005);
   hmc__25->SetBinContent(25,2.886934);
   hmc__25->SetBinContent(26,3.309998);
   hmc__25->SetBinContent(27,2.016787);
   hmc__25->SetBinContent(28,2.769915);
   hmc__25->SetBinContent(29,2.043049);
   hmc__25->SetBinContent(30,4.107833);
   hmc__25->SetBinContent(31,2.322787);
   hmc__25->SetBinContent(32,3.555449);
   hmc__25->SetBinContent(33,0.4616588);
   hmc__25->SetBinContent(34,1.742953);
   hmc__25->SetBinContent(35,18.89736);
   hmc__25->SetBinError(1,11.79636);
   hmc__25->SetBinError(2,11.55618);
   hmc__25->SetBinError(3,14.80061);
   hmc__25->SetBinError(4,14.56762);
   hmc__25->SetBinError(5,12.08754);
   hmc__25->SetBinError(6,18.18858);
   hmc__25->SetBinError(7,19.69986);
   hmc__25->SetBinError(8,22.86676);
   hmc__25->SetBinError(9,19.61669);
   hmc__25->SetBinError(10,25.22889);
   hmc__25->SetBinError(11,24.35012);
   hmc__25->SetBinError(12,22.67569);
   hmc__25->SetBinError(13,25.82838);
   hmc__25->SetBinError(14,17.53407);
   hmc__25->SetBinError(15,11.05293);
   hmc__25->SetBinError(16,8.381592);
   hmc__25->SetBinError(17,5.593617);
   hmc__25->SetBinError(18,6.667224);
   hmc__25->SetBinError(19,14.05278);
   hmc__25->SetBinError(20,7.640116);
   hmc__25->SetBinError(21,4.99101);
   hmc__25->SetBinError(22,5.838087);
   hmc__25->SetBinError(23,4.829094);
   hmc__25->SetBinError(24,6.159018);
   hmc__25->SetBinError(25,4.21994);
   hmc__25->SetBinError(26,5.569801);
   hmc__25->SetBinError(27,4.019668);
   hmc__25->SetBinError(28,8.14261);
   hmc__25->SetBinError(29,3.615358);
   hmc__25->SetBinError(30,12.76042);
   hmc__25->SetBinError(31,4.936809);
   hmc__25->SetBinError(32,8.578766);
   hmc__25->SetBinError(33,1.153494);
   hmc__25->SetBinError(34,4.81635);
   hmc__25->SetBinError(35,26.95556);
   hmc__25->SetMinimum(-1.237266);
   hmc__25->SetMaximum(129.913);
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
   hs9_stack_9->SetMaximum(64.95649);
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
   hbadmatch_stack_1->SetBinContent(3,1.141339);
   hbadmatch_stack_1->SetBinContent(4,0.341664);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,1.31777);
   hbadmatch_stack_1->SetBinContent(7,1.17495);
   hbadmatch_stack_1->SetBinContent(8,0.9969443);
   hbadmatch_stack_1->SetBinContent(9,2.156218);
   hbadmatch_stack_1->SetBinContent(10,3.079113);
   hbadmatch_stack_1->SetBinContent(11,2.091666);
   hbadmatch_stack_1->SetBinContent(12,1.697538);
   hbadmatch_stack_1->SetBinContent(13,1.497431);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.5851527);
   hbadmatch_stack_1->SetBinContent(16,0.1106221);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.2232218);
   hbadmatch_stack_1->SetBinContent(20,0.4329889);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3254665);
   hbadmatch_stack_1->SetBinContent(25,0.8467914);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(35,0.3418778);
   hbadmatch_stack_1->SetBinError(2,0.2946723);
   hbadmatch_stack_1->SetBinError(3,0.4709319);
   hbadmatch_stack_1->SetBinError(4,0.2561594);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.6069298);
   hbadmatch_stack_1->SetBinError(7,0.4999687);
   hbadmatch_stack_1->SetBinError(8,0.4268768);
   hbadmatch_stack_1->SetBinError(9,0.8087206);
   hbadmatch_stack_1->SetBinError(10,0.9761793);
   hbadmatch_stack_1->SetBinError(11,0.7564492);
   hbadmatch_stack_1->SetBinError(12,0.5902752);
   hbadmatch_stack_1->SetBinError(13,0.613957);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.419206);
   hbadmatch_stack_1->SetBinError(16,0.1106221);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.2232218);
   hbadmatch_stack_1->SetBinError(20,0.3076713);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
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
   houtFV_stack_4->SetBinContent(1,4.647317);
   houtFV_stack_4->SetBinContent(2,5.35378);
   houtFV_stack_4->SetBinContent(3,7.817233);
   houtFV_stack_4->SetBinContent(4,5.310259);
   houtFV_stack_4->SetBinContent(5,5.036557);
   houtFV_stack_4->SetBinContent(6,6.963866);
   houtFV_stack_4->SetBinContent(7,8.831001);
   houtFV_stack_4->SetBinContent(8,6.898387);
   houtFV_stack_4->SetBinContent(9,7.993402);
   houtFV_stack_4->SetBinContent(10,8.122987);
   houtFV_stack_4->SetBinContent(11,10.82957);
   houtFV_stack_4->SetBinContent(12,9.864433);
   houtFV_stack_4->SetBinContent(13,9.853038);
   houtFV_stack_4->SetBinContent(14,4.783773);
   houtFV_stack_4->SetBinContent(15,2.420285);
   houtFV_stack_4->SetBinContent(16,1.749861);
   houtFV_stack_4->SetBinContent(17,0.5133469);
   houtFV_stack_4->SetBinContent(18,0.8462275);
   houtFV_stack_4->SetBinContent(19,0.4497738);
   houtFV_stack_4->SetBinContent(20,0.3161254);
   houtFV_stack_4->SetBinContent(21,0.2232218);
   houtFV_stack_4->SetBinContent(22,1.509237);
   houtFV_stack_4->SetBinContent(23,0.7877532);
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
   houtFV_stack_4->SetBinError(1,1.060326);
   houtFV_stack_4->SetBinError(2,1.104623);
   houtFV_stack_4->SetBinError(3,1.460637);
   houtFV_stack_4->SetBinError(4,1.145425);
   houtFV_stack_4->SetBinError(5,1.0613);
   houtFV_stack_4->SetBinError(6,1.268769);
   houtFV_stack_4->SetBinError(7,1.648653);
   houtFV_stack_4->SetBinError(8,1.450731);
   houtFV_stack_4->SetBinError(9,1.386922);
   houtFV_stack_4->SetBinError(10,1.411429);
   houtFV_stack_4->SetBinError(11,1.716118);
   houtFV_stack_4->SetBinError(12,1.652803);
   houtFV_stack_4->SetBinError(13,1.655089);
   houtFV_stack_4->SetBinError(14,1.173327);
   houtFV_stack_4->SetBinError(15,0.7568909);
   houtFV_stack_4->SetBinError(16,0.6113394);
   houtFV_stack_4->SetBinError(17,0.3029418);
   houtFV_stack_4->SetBinError(18,0.4636746);
   houtFV_stack_4->SetBinError(19,0.3205238);
   houtFV_stack_4->SetBinError(20,0.2295649);
   houtFV_stack_4->SetBinError(21,0.2232218);
   houtFV_stack_4->SetBinError(22,0.6109345);
   houtFV_stack_4->SetBinError(23,0.4929259);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1385449);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05204101);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1045158);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1120131);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03689442);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02537674);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08967217);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08623998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.07657229);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1182472);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05543002);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09141042);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1893976);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01962509);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04770452);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06278178);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04034209);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.06248745);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03200521);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0408982);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1333572);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.197256);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.43873);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.210782);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.645123);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.497874);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.597215);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.613939);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.911054);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.39703);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.18209);
   hNCpi0inFVres_stack_7->SetBinContent(11,13.31505);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.57);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.675604);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.701564);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.644027);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.9701972);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4215097);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.7612342);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.7763469);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.3186881);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.3112648);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.4310084);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.04197631);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2076869);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.1062648);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.226949);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.1432222);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.3344713);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.01715503);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.04595124);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.5245802);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.3362144);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.0589169);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.04248147);
   hNCpi0inFVres_stack_7->SetBinContent(35,0.856926);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2967391);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3173811);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4907673);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4041832);
   hNCpi0inFVres_stack_7->SetBinError(5,0.538523);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8089947);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8987008);
   hNCpi0inFVres_stack_7->SetBinError(8,0.964359);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9645432);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9574351);
   hNCpi0inFVres_stack_7->SetBinError(11,1.021882);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9033747);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9556914);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6518522);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5205844);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2739354);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1691389);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2245554);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2748388);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1071825);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2135219);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1760918);
   hNCpi0inFVres_stack_7->SetBinError(23,0.0254433);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1250759);
   hNCpi0inFVres_stack_7->SetBinError(25,0.04855878);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1155992);
   hNCpi0inFVres_stack_7->SetBinError(27,0.06171672);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2302327);
   hNCpi0inFVres_stack_7->SetBinError(29,0.01715503);
   hNCpi0inFVres_stack_7->SetBinError(30,0.03346087);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4145714);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1585865);
   hNCpi0inFVres_stack_7->SetBinError(33,0.04448979);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4109755);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.00788);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.5618348);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6585022);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.45801);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.410996);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.747629);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.212575);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.628827);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.031597);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.461429);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.474249);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.720343);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.701607);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8237304);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.223142);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3141616);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1234349);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2109686);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1465724);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1290437);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.1358551);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.361048);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2842685);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02862678);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.0470988);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.9406908);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.06916945);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.2890864);
   hNCpi0inFVdis_stack_8->SetBinContent(35,1.186758);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1975445);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3563228);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2291377);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2276035);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4141337);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3294046);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6191789);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4151626);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6803856);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6264326);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5851933);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.081169);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6404903);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4587133);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4312288);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4391832);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2042264);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.08550304);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1025035);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1295646);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1290437);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.09113603);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2356428);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2007896);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02862678);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.0470988);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.5455334);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.05405632);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2626723);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.5944401);
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
   hNCinFV_stack_11->SetBinContent(1,0.4207742);
   hNCinFV_stack_11->SetBinContent(2,0.8573031);
   hNCinFV_stack_11->SetBinContent(3,0.9842004);
   hNCinFV_stack_11->SetBinContent(4,0.6667601);
   hNCinFV_stack_11->SetBinContent(5,1.962707);
   hNCinFV_stack_11->SetBinContent(6,2.041956);
   hNCinFV_stack_11->SetBinContent(7,2.185525);
   hNCinFV_stack_11->SetBinContent(8,1.234633);
   hNCinFV_stack_11->SetBinContent(9,1.888031);
   hNCinFV_stack_11->SetBinContent(10,2.209305);
   hNCinFV_stack_11->SetBinContent(11,3.277852);
   hNCinFV_stack_11->SetBinContent(12,1.341069);
   hNCinFV_stack_11->SetBinContent(13,2.768503);
   hNCinFV_stack_11->SetBinContent(14,1.652478);
   hNCinFV_stack_11->SetBinContent(15,0.3490677);
   hNCinFV_stack_11->SetBinContent(16,0.7178301);
   hNCinFV_stack_11->SetBinContent(17,0.209167);
   hNCinFV_stack_11->SetBinContent(18,1.052328);
   hNCinFV_stack_11->SetBinContent(19,1.038507);
   hNCinFV_stack_11->SetBinContent(20,1.16554);
   hNCinFV_stack_11->SetBinContent(21,1.179587);
   hNCinFV_stack_11->SetBinContent(22,0.1209555);
   hNCinFV_stack_11->SetBinContent(23,0.2112329);
   hNCinFV_stack_11->SetBinContent(24,0.1209555);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.6587691);
   hNCinFV_stack_11->SetBinContent(28,0.1967154);
   hNCinFV_stack_11->SetBinContent(31,0.9269427);
   hNCinFV_stack_11->SetBinContent(32,0.3320811);
   hNCinFV_stack_11->SetBinContent(34,0.9702444);
   hNCinFV_stack_11->SetBinContent(35,2.844925);
   hNCinFV_stack_11->SetBinError(1,0.4207742);
   hNCinFV_stack_11->SetBinError(2,0.456525);
   hNCinFV_stack_11->SetBinError(3,0.4137845);
   hNCinFV_stack_11->SetBinError(4,0.4138638);
   hNCinFV_stack_11->SetBinError(5,0.7247782);
   hNCinFV_stack_11->SetBinError(6,0.8939755);
   hNCinFV_stack_11->SetBinError(7,0.7042111);
   hNCinFV_stack_11->SetBinError(8,0.4773676);
   hNCinFV_stack_11->SetBinError(9,0.6054872);
   hNCinFV_stack_11->SetBinError(10,0.8876915);
   hNCinFV_stack_11->SetBinError(11,0.9498536);
   hNCinFV_stack_11->SetBinError(12,0.5421071);
   hNCinFV_stack_11->SetBinError(13,0.8675435);
   hNCinFV_stack_11->SetBinError(14,0.6541922);
   hNCinFV_stack_11->SetBinError(15,0.21971);
   hNCinFV_stack_11->SetBinError(16,0.3846657);
   hNCinFV_stack_11->SetBinError(17,0.2091671);
   hNCinFV_stack_11->SetBinError(18,0.4964371);
   hNCinFV_stack_11->SetBinError(19,0.5483094);
   hNCinFV_stack_11->SetBinError(20,0.7923104);
   hNCinFV_stack_11->SetBinError(21,0.7543125);
   hNCinFV_stack_11->SetBinError(22,0.1209556);
   hNCinFV_stack_11->SetBinError(23,0.211233);
   hNCinFV_stack_11->SetBinError(24,0.1209556);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.4157551);
   hNCinFV_stack_11->SetBinError(28,0.1967154);
   hNCinFV_stack_11->SetBinError(31,0.4800908);
   hNCinFV_stack_11->SetBinError(32,0.3320811);
   hNCinFV_stack_11->SetBinError(34,0.9702444);
   hNCinFV_stack_11->SetBinError(35,0.8703244);
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
   hmcerror__26->SetBinContent(1,17.82214);
   hmcerror__26->SetBinContent(2,20.29167);
   hmcerror__26->SetBinContent(3,23.55424);
   hmcerror__26->SetBinContent(4,24.14726);
   hmcerror__26->SetBinContent(5,27.3582);
   hmcerror__26->SetBinContent(6,44.02056);
   hmcerror__26->SetBinContent(7,44.8605);
   hmcerror__26->SetBinContent(8,43.64371);
   hmcerror__26->SetBinContent(9,51.13216);
   hmcerror__26->SetBinContent(10,61.86332);
   hmcerror__26->SetBinContent(11,56.17469);
   hmcerror__26->SetBinContent(12,54.57387);
   hmcerror__26->SetBinContent(13,49.47338);
   hmcerror__26->SetBinContent(14,28.43);
   hmcerror__26->SetBinContent(15,14.74063);
   hmcerror__26->SetBinContent(16,13.25101);
   hmcerror__26->SetBinContent(17,7.609691);
   hmcerror__26->SetBinContent(18,7.38998);
   hmcerror__26->SetBinContent(19,4.949516);
   hmcerror__26->SetBinContent(20,7.283044);
   hmcerror__26->SetBinContent(21,4.219371);
   hmcerror__26->SetBinContent(22,4.02913);
   hmcerror__26->SetBinContent(23,2.556361);
   hmcerror__26->SetBinContent(24,3.100005);
   hmcerror__26->SetBinContent(25,2.886934);
   hmcerror__26->SetBinContent(26,3.309998);
   hmcerror__26->SetBinContent(27,2.016787);
   hmcerror__26->SetBinContent(28,2.769915);
   hmcerror__26->SetBinContent(29,2.043049);
   hmcerror__26->SetBinContent(30,4.107833);
   hmcerror__26->SetBinContent(31,2.322787);
   hmcerror__26->SetBinContent(32,3.555449);
   hmcerror__26->SetBinContent(33,0.4616588);
   hmcerror__26->SetBinContent(34,1.742953);
   hmcerror__26->SetBinContent(35,18.89736);
   hmcerror__26->SetBinError(1,11.79636);
   hmcerror__26->SetBinError(2,11.55618);
   hmcerror__26->SetBinError(3,14.80061);
   hmcerror__26->SetBinError(4,14.56762);
   hmcerror__26->SetBinError(5,12.08754);
   hmcerror__26->SetBinError(6,18.18858);
   hmcerror__26->SetBinError(7,19.69986);
   hmcerror__26->SetBinError(8,22.86676);
   hmcerror__26->SetBinError(9,19.61669);
   hmcerror__26->SetBinError(10,25.22889);
   hmcerror__26->SetBinError(11,24.35012);
   hmcerror__26->SetBinError(12,22.67569);
   hmcerror__26->SetBinError(13,25.82838);
   hmcerror__26->SetBinError(14,17.53407);
   hmcerror__26->SetBinError(15,11.05293);
   hmcerror__26->SetBinError(16,8.381592);
   hmcerror__26->SetBinError(17,5.593617);
   hmcerror__26->SetBinError(18,6.667224);
   hmcerror__26->SetBinError(19,14.05278);
   hmcerror__26->SetBinError(20,7.640116);
   hmcerror__26->SetBinError(21,4.99101);
   hmcerror__26->SetBinError(22,5.838087);
   hmcerror__26->SetBinError(23,4.829094);
   hmcerror__26->SetBinError(24,6.159018);
   hmcerror__26->SetBinError(25,4.21994);
   hmcerror__26->SetBinError(26,5.569801);
   hmcerror__26->SetBinError(27,4.019668);
   hmcerror__26->SetBinError(28,8.14261);
   hmcerror__26->SetBinError(29,3.615358);
   hmcerror__26->SetBinError(30,12.76042);
   hmcerror__26->SetBinError(31,4.936809);
   hmcerror__26->SetBinError(32,8.578766);
   hmcerror__26->SetBinError(33,1.153494);
   hmcerror__26->SetBinError(34,4.81635);
   hmcerror__26->SetBinError(35,26.95556);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.3/34","");
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 32.9","F");

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
   0.6618939,
   0.5695035,
   0.628363,
   0.6032824,
   0.4418252,
   0.4131837,
   0.4391359,
   0.5239418,
   0.3836468,
   0.4078166,
   0.4334713,
   0.4155045,
   0.5220663,
   0.6167451,
   0.7498275,
   0.6325246,
   0.735065,
   0.9021979,
   2.839223,
   1.049028,
   1.18288,
   1.44897,
   1.88905,
   1.986777,
   1.461738,
   1.682721,
   1.993105,
   2.939661,
   1.769589,
   3.106364,
   2.125381,
   2.41285,
   2.498585,
   2.763327};
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
   0.6618939,
   0.5695035,
   0.628363,
   0.6032824,
   0.4418252,
   0.4131837,
   0.4391359,
   0.5239418,
   0.3836468,
   0.4078166,
   0.4334713,
   0.4155045,
   0.5220663,
   0.6167451,
   0.7498275,
   0.6325246,
   0.735065,
   0.9021979,
   2.839223,
   1.049028,
   1.18288,
   1.44897,
   1.88905,
   1.986777,
   1.461738,
   1.682721,
   1.993105,
   2.939661,
   1.769589,
   3.106364,
   2.125381,
   2.41285,
   2.498585,
   2.763327};
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
   0.2370989,
   0.2120685,
   0.2288795,
   0.2486311,
   0.2299244,
   0.2369929,
   0.2589102,
   0.2759712,
   0.2889344,
   0.3177604,
   0.3235185,
   0.278176,
   0.251449,
   0.2587731,
   0.2815245,
   0.2996193,
   0.2863279,
   0.3009075,
   0.3463926,
   0.4078157,
   0.3770062,
   0.3615188,
   0.4666457,
   0.4315769,
   0.4470421,
   0.4496889,
   0.6042936,
   0.4543829,
   1.051252,
   0.4120578,
   0.6150895,
   0.3993029,
   1.114517,
   0.8523692};
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
   0.2370989,
   0.2120685,
   0.2288795,
   0.2486311,
   0.2299244,
   0.2369929,
   0.2589102,
   0.2759712,
   0.2889344,
   0.3177604,
   0.3235185,
   0.278176,
   0.251449,
   0.2587731,
   0.2815245,
   0.2996193,
   0.2863279,
   0.3009075,
   0.3463926,
   0.4078157,
   0.3770062,
   0.3615188,
   0.4666457,
   0.4315769,
   0.4470421,
   0.4496889,
   0.6042936,
   0.4543829,
   1.051252,
   0.4120578,
   0.6150895,
   0.3993029,
   1.114517,
   0.8523692};
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
   1.1222,
   0.8377821,
   1.103835,
   1.325202,
   0.8406987,
   0.9540997,
   1.114566,
   1.053989,
   0.9583009,
   0.8567274,
   0.872279,
   1.081104,
   0.5457481,
   0.5276116,
   1.153275,
   0.3018637,
   0.2628228,
   1.62382,
   0.6061199,
   0.2746105,
   0.7110065,
   1.240963,
   0,
   0.9677403,
   1.039165,
   0.6042301,
   1.487515,
   0.7220439,
   0,
   0.4868747,
   0.4305173,
   0.2812584,
   2.166102,
   0.5737388};
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
   0.2595985,
   0.2110965,
   0.2226903,
   0.2400976,
   0.1807758,
   0.1502821,
   0.1605533,
   0.1584489,
   0.1394778,
   0.1197883,
   0.1269575,
   0.1431033,
   0.1079651,
   0.1420506,
   0.2905913,
   0.1733324,
   0.2628228,
   0.4925886,
   0.433046,
   0.2746105,
   0.5079828,
   0.617987,
   0,
   0.6914079,
   0.7424375,
   0.6042301,
   1.062764,
   0.7220439,
   0,
   0.4868747,
   0.4305173,
   0.2812584,
   2.166102,
   0.5737388};
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
   0.2476302,
   0.2004418,
   0.2137959,
   0.2315128,
   0.1730597,
   0.1456229,
   0.1560059,
   0.1537633,
   0.1354861,
   0.1164955,
   0.1233242,
   0.1393817,
   0.1037366,
   0.1343545,
   0.2759243,
   0.1495629,
   0.1996362,
   0.4621799,
   0.3483613,
   0.20859,
   0.4086439,
   0.5486644,
   0.4489977,
   0.5561991,
   0.5972496,
   0.4589641,
   0.8549341,
   0.5484537,
   0.5618073,
   0.3698227,
   0.5853786,
   0.3824298,
   2.945271,
   0.7801184};
   grae = new TGraphAsymmErrors(34,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,440);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(5.62251);
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
