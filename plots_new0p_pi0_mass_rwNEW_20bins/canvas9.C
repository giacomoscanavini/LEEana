#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 13:44:49 2023) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-0.9619818,451.2821,106.3749);
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
   hmc__25->SetBinContent(1,14.85396);
   hmc__25->SetBinContent(2,14.41418);
   hmc__25->SetBinContent(3,17.01568);
   hmc__25->SetBinContent(4,20.75756);
   hmc__25->SetBinContent(5,20.82904);
   hmc__25->SetBinContent(6,34.51677);
   hmc__25->SetBinContent(7,33.77058);
   hmc__25->SetBinContent(8,33.68028);
   hmc__25->SetBinContent(9,36.85018);
   hmc__25->SetBinContent(10,48.09909);
   hmc__25->SetBinContent(11,45.31481);
   hmc__25->SetBinContent(12,42.11027);
   hmc__25->SetBinContent(13,34.57503);
   hmc__25->SetBinContent(14,18.92695);
   hmc__25->SetBinContent(15,8.712995);
   hmc__25->SetBinContent(16,7.711581);
   hmc__25->SetBinContent(17,3.110706);
   hmc__25->SetBinContent(18,5.386787);
   hmc__25->SetBinContent(19,3.040962);
   hmc__25->SetBinContent(20,4.44904);
   hmc__25->SetBinContent(21,2.419307);
   hmc__25->SetBinContent(22,2.965588);
   hmc__25->SetBinContent(23,1.802323);
   hmc__25->SetBinContent(24,2.476588);
   hmc__25->SetBinContent(25,1.43819);
   hmc__25->SetBinContent(26,2.13883);
   hmc__25->SetBinContent(27,1.563675);
   hmc__25->SetBinContent(28,2.14275);
   hmc__25->SetBinContent(29,0.3401776);
   hmc__25->SetBinContent(30,2.270384);
   hmc__25->SetBinContent(31,1.337741);
   hmc__25->SetBinContent(32,1.167395);
   hmc__25->SetBinContent(34,0.3900497);
   hmc__25->SetBinContent(35,9.955996);
   hmc__25->SetBinError(1,12.66971);
   hmc__25->SetBinError(2,14.50503);
   hmc__25->SetBinError(3,10.56781);
   hmc__25->SetBinError(4,11.93298);
   hmc__25->SetBinError(5,11.99535);
   hmc__25->SetBinError(6,14.41747);
   hmc__25->SetBinError(7,15.36238);
   hmc__25->SetBinError(8,17.2337);
   hmc__25->SetBinError(9,15.72813);
   hmc__25->SetBinError(10,20.20466);
   hmc__25->SetBinError(11,21.77283);
   hmc__25->SetBinError(12,19.3253);
   hmc__25->SetBinError(13,19.10005);
   hmc__25->SetBinError(14,11.0335);
   hmc__25->SetBinError(15,10.40248);
   hmc__25->SetBinError(16,6.532645);
   hmc__25->SetBinError(17,3.637174);
   hmc__25->SetBinError(18,5.650302);
   hmc__25->SetBinError(19,9.194476);
   hmc__25->SetBinError(20,7.674532);
   hmc__25->SetBinError(21,3.236486);
   hmc__25->SetBinError(22,4.355444);
   hmc__25->SetBinError(23,9.863652);
   hmc__25->SetBinError(24,7.405975);
   hmc__25->SetBinError(25,2.906516);
   hmc__25->SetBinError(26,4.890186);
   hmc__25->SetBinError(27,12.43745);
   hmc__25->SetBinError(28,7.406387);
   hmc__25->SetBinError(29,0.9192066);
   hmc__25->SetBinError(30,6.484319);
   hmc__25->SetBinError(31,3.001852);
   hmc__25->SetBinError(32,3.871355);
   hmc__25->SetBinError(33,0.3895343);
   hmc__25->SetBinError(34,1.539753);
   hmc__25->SetBinError(35,12.4359);
   hmc__25->SetMinimum(-0.9619818);
   hmc__25->SetMaximum(101.0081);
   hmc__25->SetEntries(469.1651);
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
   hs9_stack_9->SetMaximum(50.50405);
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
   hbadmatch_stack_1->SetBinContent(3,0.6169422);
   hbadmatch_stack_1->SetBinContent(4,0.4277573);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,1.31777);
   hbadmatch_stack_1->SetBinContent(7,0.8073083);
   hbadmatch_stack_1->SetBinContent(8,0.9785053);
   hbadmatch_stack_1->SetBinContent(9,1.438036);
   hbadmatch_stack_1->SetBinContent(10,2.739835);
   hbadmatch_stack_1->SetBinContent(11,1.466282);
   hbadmatch_stack_1->SetBinContent(12,2.072319);
   hbadmatch_stack_1->SetBinContent(13,0.9801958);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,0.4329889);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinContent(25,0.4410358);
   hbadmatch_stack_1->SetBinContent(28,0.2364157);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(35,0.5352025);
   hbadmatch_stack_1->SetBinError(2,0.2946723);
   hbadmatch_stack_1->SetBinError(3,0.3569979);
   hbadmatch_stack_1->SetBinError(4,0.3034424);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.6069298);
   hbadmatch_stack_1->SetBinError(7,0.404135);
   hbadmatch_stack_1->SetBinError(8,0.4376048);
   hbadmatch_stack_1->SetBinError(9,0.7004578);
   hbadmatch_stack_1->SetBinError(10,0.9071887);
   hbadmatch_stack_1->SetBinError(11,0.6693728);
   hbadmatch_stack_1->SetBinError(12,0.7131244);
   hbadmatch_stack_1->SetBinError(13,0.4383608);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.3076713);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetBinError(25,0.4410358);
   hbadmatch_stack_1->SetBinError(28,0.2364157);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(35,0.3921167);
   hbadmatch_stack_1->SetEntries(71);

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
   hext_stack_2->SetBinContent(2,1.461993);
   hext_stack_2->SetBinContent(3,1.868591);
   hext_stack_2->SetBinContent(4,1.607626);
   hext_stack_2->SetBinContent(5,2.428004);
   hext_stack_2->SetBinContent(6,3.394015);
   hext_stack_2->SetBinContent(7,2.028585);
   hext_stack_2->SetBinContent(8,2.021405);
   hext_stack_2->SetBinContent(9,3.159);
   hext_stack_2->SetBinContent(10,4.94539);
   hext_stack_2->SetBinContent(11,2.338622);
   hext_stack_2->SetBinContent(12,1.779209);
   hext_stack_2->SetBinContent(13,1.461993);
   hext_stack_2->SetBinContent(14,1.78639);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,1.137595);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.9660115);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(32,0.4065989);
   hext_stack_2->SetBinContent(35,1.37261);
   hext_stack_2->SetBinError(1,0.788756);
   hext_stack_2->SetBinError(2,0.7356036);
   hext_stack_2->SetBinError(3,0.840497);
   hext_stack_2->SetBinError(4,0.9636239);
   hext_stack_2->SetBinError(5,1.028599);
   hext_stack_2->SetBinError(6,1.254957);
   hext_stack_2->SetBinError(7,0.8315593);
   hext_stack_2->SetBinError(8,0.9448239);
   hext_stack_2->SetBinError(9,1.152637);
   hext_stack_2->SetBinError(10,1.405318);
   hext_stack_2->SetBinError(11,1.095047);
   hext_stack_2->SetBinError(12,0.9206235);
   hext_stack_2->SetBinError(13,0.7356036);
   hext_stack_2->SetBinError(14,0.8039566);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,0.6602113);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.7189592);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(32,0.4065989);
   hext_stack_2->SetBinError(35,0.8259691);
   hext_stack_2->SetEntries(92);

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
   hdirt_stack_3->SetBinContent(6,0.5429839);
   hdirt_stack_3->SetBinContent(8,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.5529928);
   hdirt_stack_3->SetBinError(3,0.2964588);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.2645965);
   hdirt_stack_3->SetBinError(6,0.4278058);
   hdirt_stack_3->SetBinError(8,0.3381872);
   hdirt_stack_3->SetBinError(11,0.437291);
   hdirt_stack_3->SetEntries(11);

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
   houtFV_stack_4->SetBinContent(1,4.071067);
   houtFV_stack_4->SetBinContent(2,3.172568);
   houtFV_stack_4->SetBinContent(3,5.39039);
   houtFV_stack_4->SetBinContent(4,3.959951);
   houtFV_stack_4->SetBinContent(5,3.427608);
   houtFV_stack_4->SetBinContent(6,5.771734);
   houtFV_stack_4->SetBinContent(7,6.215199);
   houtFV_stack_4->SetBinContent(8,4.983913);
   houtFV_stack_4->SetBinContent(9,5.543015);
   houtFV_stack_4->SetBinContent(10,5.690418);
   houtFV_stack_4->SetBinContent(11,5.862105);
   houtFV_stack_4->SetBinContent(12,6.647276);
   houtFV_stack_4->SetBinContent(13,6.968686);
   houtFV_stack_4->SetBinContent(14,3.378069);
   houtFV_stack_4->SetBinContent(15,1.467217);
   houtFV_stack_4->SetBinContent(16,1.518779);
   houtFV_stack_4->SetBinContent(17,0.3934307);
   houtFV_stack_4->SetBinContent(18,0.7696583);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(22,1.175221);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinContent(27,0.1967154);
   houtFV_stack_4->SetBinContent(32,0.1967154);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,0.6250385);
   houtFV_stack_4->SetBinError(1,1.018026);
   houtFV_stack_4->SetBinError(2,0.8764662);
   houtFV_stack_4->SetBinError(3,1.232612);
   houtFV_stack_4->SetBinError(4,0.960719);
   houtFV_stack_4->SetBinError(5,0.8778096);
   houtFV_stack_4->SetBinError(6,1.185896);
   houtFV_stack_4->SetBinError(7,1.210231);
   houtFV_stack_4->SetBinError(8,1.19649);
   houtFV_stack_4->SetBinError(9,1.178157);
   houtFV_stack_4->SetBinError(10,1.230502);
   houtFV_stack_4->SetBinError(11,1.241881);
   houtFV_stack_4->SetBinError(12,1.302457);
   houtFV_stack_4->SetBinError(13,1.290935);
   houtFV_stack_4->SetBinError(14,0.8748976);
   houtFV_stack_4->SetBinError(15,0.6214735);
   houtFV_stack_4->SetBinError(16,0.5892709);
   houtFV_stack_4->SetBinError(17,0.2781975);
   houtFV_stack_4->SetBinError(18,0.4568644);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(22,0.4797863);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(26,0.2770047);
   houtFV_stack_4->SetBinError(27,0.1967154);
   houtFV_stack_4->SetBinError(32,0.1967154);
   houtFV_stack_4->SetBinError(34,4.828564e-09);
   houtFV_stack_4->SetBinError(35,0.4721721);
   houtFV_stack_4->SetEntries(344);

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
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(26);

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
   hNCpi0inFVres_stack_7->SetBinContent(1,1.576026);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.254508);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.462762);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.16367);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.65342);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.148153);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.827234);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.702919);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.13896);
   hNCpi0inFVres_stack_7->SetBinContent(10,15.04697);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.91761);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.8891);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.840188);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.52737);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.785112);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3062359);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.460186);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.125218);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.1954681);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.1954681);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1954681);
   hNCpi0inFVres_stack_7->SetBinContent(35,0.2512681);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4418765);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3571158);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3919296);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5418441);
   hNCpi0inFVres_stack_7->SetBinError(5,0.620689);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8041613);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9984822);
   hNCpi0inFVres_stack_7->SetBinError(8,0.951271);
   hNCpi0inFVres_stack_7->SetBinError(9,1.191137);
   hNCpi0inFVres_stack_7->SetBinError(10,1.282426);
   hNCpi0inFVres_stack_7->SetBinError(11,1.399586);
   hNCpi0inFVres_stack_7->SetBinError(12,1.181321);
   hNCpi0inFVres_stack_7->SetBinError(13,1.008759);
   hNCpi0inFVres_stack_7->SetBinError(14,0.596439);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4905081);
   hNCpi0inFVres_stack_7->SetBinError(16,0.14851);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2287991);
   hNCpi0inFVres_stack_7->SetBinError(19,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(20,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1012383);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1954681);
   hNCpi0inFVres_stack_7->SetBinError(26,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(27,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(28,0.1954681);
   hNCpi0inFVres_stack_7->SetBinError(31,0.1954681);
   hNCpi0inFVres_stack_7->SetBinError(35,0.1994106);
   hNCpi0inFVres_stack_7->SetEntries(2042);

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
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.710622);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.418668);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8502901);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.256172);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.78428);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.38039);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.580266);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.301594);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.539244);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.401488);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.747498);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.00748);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.031308);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7944901);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.4180041);
   hNCpi0inFVdis_stack_8->SetBinContent(35,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2699026);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2107962);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3309054);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4075096);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4704594);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3525453);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5788325);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4982493);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5299825);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5991519);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5540384);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4770317);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3482878);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3285446);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.2406819);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(441);

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
   hCCpi0inFV_stack_10->SetBinContent(1,2.283394);
   hCCpi0inFV_stack_10->SetBinContent(2,2.06023);
   hCCpi0inFV_stack_10->SetBinContent(3,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(4,3.74414);
   hCCpi0inFV_stack_10->SetBinContent(5,2.587494);
   hCCpi0inFV_stack_10->SetBinContent(6,5.939895);
   hCCpi0inFV_stack_10->SetBinContent(7,5.565701);
   hCCpi0inFV_stack_10->SetBinContent(8,4.639785);
   hCCpi0inFV_stack_10->SetBinContent(9,7.16293);
   hCCpi0inFV_stack_10->SetBinContent(10,6.499155);
   hCCpi0inFV_stack_10->SetBinContent(11,6.030938);
   hCCpi0inFV_stack_10->SetBinContent(12,9.624914);
   hCCpi0inFV_stack_10->SetBinContent(13,9.745018);
   hCCpi0inFV_stack_10->SetBinContent(14,3.909558);
   hCCpi0inFV_stack_10->SetBinContent(15,2.392469);
   hCCpi0inFV_stack_10->SetBinContent(16,2.880695);
   hCCpi0inFV_stack_10->SetBinContent(17,1.121968);
   hCCpi0inFV_stack_10->SetBinContent(18,1.307425);
   hCCpi0inFV_stack_10->SetBinContent(19,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(20,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(21,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(22,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(23,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(24,1.301368);
   hCCpi0inFV_stack_10->SetBinContent(25,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(26,0.9872717);
   hCCpi0inFV_stack_10->SetBinContent(27,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(28,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(30,1.288437);
   hCCpi0inFV_stack_10->SetBinContent(31,0.4120452);
   hCCpi0inFV_stack_10->SetBinContent(34,0.3900497);
   hCCpi0inFV_stack_10->SetBinContent(35,2.730956);
   hCCpi0inFV_stack_10->SetBinError(1,0.7439859);
   hCCpi0inFV_stack_10->SetBinError(2,0.7637706);
   hCCpi0inFV_stack_10->SetBinError(3,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(4,0.9680508);
   hCCpi0inFV_stack_10->SetBinError(5,0.8087577);
   hCCpi0inFV_stack_10->SetBinError(6,1.230602);
   hCCpi0inFV_stack_10->SetBinError(7,1.222322);
   hCCpi0inFV_stack_10->SetBinError(8,1.074441);
   hCCpi0inFV_stack_10->SetBinError(9,1.37949);
   hCCpi0inFV_stack_10->SetBinError(10,1.248595);
   hCCpi0inFV_stack_10->SetBinError(11,1.194726);
   hCCpi0inFV_stack_10->SetBinError(12,1.603652);
   hCCpi0inFV_stack_10->SetBinError(13,1.562474);
   hCCpi0inFV_stack_10->SetBinError(14,0.9811382);
   hCCpi0inFV_stack_10->SetBinError(15,0.7848912);
   hCCpi0inFV_stack_10->SetBinError(16,0.820482);
   hCCpi0inFV_stack_10->SetBinError(17,0.5181909);
   hCCpi0inFV_stack_10->SetBinError(18,0.5902213);
   hCCpi0inFV_stack_10->SetBinError(19,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(20,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(21,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(22,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(23,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(24,0.6006155);
   hCCpi0inFV_stack_10->SetBinError(25,0.438694);
   hCCpi0inFV_stack_10->SetBinError(26,0.5078011);
   hCCpi0inFV_stack_10->SetBinError(27,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(28,0.48078);
   hCCpi0inFV_stack_10->SetBinError(30,0.662843);
   hCCpi0inFV_stack_10->SetBinError(31,0.4120451);
   hCCpi0inFV_stack_10->SetBinError(34,0.2758068);
   hCCpi0inFV_stack_10->SetBinError(35,0.8550514);
   hCCpi0inFV_stack_10->SetEntries(397);

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
   hNCinFV_stack_11->SetBinContent(2,0.5901461);
   hNCinFV_stack_11->SetBinContent(3,0.5884556);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,1.268811);
   hNCinFV_stack_11->SetBinContent(6,1.127039);
   hNCinFV_stack_11->SetBinContent(7,2.000729);
   hNCinFV_stack_11->SetBinContent(8,1.123658);
   hNCinFV_stack_11->SetBinContent(9,1.178602);
   hNCinFV_stack_11->SetBinContent(10,1.462145);
   hNCinFV_stack_11->SetBinContent(11,2.587494);
   hNCinFV_stack_11->SetBinContent(12,1.26712);
   hNCinFV_stack_11->SetBinContent(13,1.660551);
   hNCinFV_stack_11->SetBinContent(14,0.9286332);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.3934307);
   hNCinFV_stack_11->SetBinContent(19,0.8753801);
   hNCinFV_stack_11->SetBinContent(20,0.1950248);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.536893);
   hNCinFV_stack_11->SetBinContent(28,0.1967154);
   hNCinFV_stack_11->SetBinContent(31,0.7302274);
   hNCinFV_stack_11->SetBinContent(35,2.055672);
   hNCinFV_stack_11->SetBinError(2,0.340721);
   hNCinFV_stack_11->SetBinError(3,0.3397478);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.5889569);
   hNCinFV_stack_11->SetBinError(6,0.5201044);
   hNCinFV_stack_11->SetBinError(7,0.7343859);
   hNCinFV_stack_11->SetBinError(8,0.5188295);
   hNCinFV_stack_11->SetBinError(9,0.4811646);
   hNCinFV_stack_11->SetBinError(10,0.6198731);
   hNCinFV_stack_11->SetBinError(11,0.8087577);
   hNCinFV_stack_11->SetBinError(12,0.5883944);
   hNCinFV_stack_11->SetBinError(13,0.650847);
   hNCinFV_stack_11->SetBinError(14,0.48078);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.2781975);
   hNCinFV_stack_11->SetBinError(19,0.5191111);
   hNCinFV_stack_11->SetBinError(20,0.1950249);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.3929602);
   hNCinFV_stack_11->SetBinError(28,0.1967154);
   hNCinFV_stack_11->SetBinError(31,0.4379386);
   hNCinFV_stack_11->SetBinError(35,0.7082781);
   hNCinFV_stack_11->SetEntries(97);

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
   hnumuCCinFV_stack_12->SetBinContent(1,5.186493);
   hnumuCCinFV_stack_12->SetBinContent(2,4.514822);
   hnumuCCinFV_stack_12->SetBinContent(3,3.571222);
   hnumuCCinFV_stack_12->SetBinContent(4,5.971885);
   hnumuCCinFV_stack_12->SetBinContent(5,5.063519);
   hnumuCCinFV_stack_12->SetBinContent(6,8.294188);
   hnumuCCinFV_stack_12->SetBinContent(7,6.271714);
   hnumuCCinFV_stack_12->SetBinContent(8,7.130626);
   hnumuCCinFV_stack_12->SetBinContent(9,2.816436);
   hnumuCCinFV_stack_12->SetBinContent(10,8.980639);
   hnumuCCinFV_stack_12->SetBinContent(11,5.934348);
   hnumuCCinFV_stack_12->SetBinContent(12,4.054926);
   hnumuCCinFV_stack_12->SetBinContent(13,2.367313);
   hnumuCCinFV_stack_12->SetBinContent(14,4.114795);
   hnumuCCinFV_stack_12->SetBinContent(15,1.854526);
   hnumuCCinFV_stack_12->SetBinContent(16,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(17,0.6291255);
   hnumuCCinFV_stack_12->SetBinContent(18,1.156168);
   hnumuCCinFV_stack_12->SetBinContent(19,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(20,1.385408);
   hnumuCCinFV_stack_12->SetBinContent(21,0.2264959);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(24,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(25,0.2373361);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(27,0.5775509);
   hnumuCCinFV_stack_12->SetBinContent(28,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(29,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(30,0.5639431);
   hnumuCCinFV_stack_12->SetBinContent(32,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(35,2.084448);
   hnumuCCinFV_stack_12->SetBinError(1,1.257935);
   hnumuCCinFV_stack_12->SetBinError(2,1.251918);
   hnumuCCinFV_stack_12->SetBinError(3,1.034931);
   hnumuCCinFV_stack_12->SetBinError(4,1.297912);
   hnumuCCinFV_stack_12->SetBinError(5,1.712457);
   hnumuCCinFV_stack_12->SetBinError(6,1.993451);
   hnumuCCinFV_stack_12->SetBinError(7,1.277941);
   hnumuCCinFV_stack_12->SetBinError(8,1.390488);
   hnumuCCinFV_stack_12->SetBinError(9,0.8062987);
   hnumuCCinFV_stack_12->SetBinError(10,1.726354);
   hnumuCCinFV_stack_12->SetBinError(11,1.528363);
   hnumuCCinFV_stack_12->SetBinError(12,1.302074);
   hnumuCCinFV_stack_12->SetBinError(13,0.8211122);
   hnumuCCinFV_stack_12->SetBinError(14,1.094907);
   hnumuCCinFV_stack_12->SetBinError(15,0.6737741);
   hnumuCCinFV_stack_12->SetBinError(16,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(17,0.3583707);
   hnumuCCinFV_stack_12->SetBinError(18,0.5321157);
   hnumuCCinFV_stack_12->SetBinError(19,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(20,0.5809278);
   hnumuCCinFV_stack_12->SetBinError(21,0.2264959);
   hnumuCCinFV_stack_12->SetBinError(23,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(24,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(25,0.2373361);
   hnumuCCinFV_stack_12->SetBinError(26,0.438694);
   hnumuCCinFV_stack_12->SetBinError(27,0.4148095);
   hnumuCCinFV_stack_12->SetBinError(28,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(29,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(30,0.4071754);
   hnumuCCinFV_stack_12->SetBinError(32,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(35,0.717031);
   hnumuCCinFV_stack_12->SetEntries(332);

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
   hnueCCinFV_stack_13->SetBinContent(2,0.2331833);
   hnueCCinFV_stack_13->SetBinContent(4,0.2192101);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.56212);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,1.569686);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(35,0.2171002);
   hnueCCinFV_stack_13->SetBinError(2,0.2331833);
   hnueCCinFV_stack_13->SetBinError(4,0.2192101);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.4149909);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.4041031);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,1.569686);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(35,0.2171002);
   hnueCCinFV_stack_13->SetEntries(12);

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
   hmcerror__26->SetBinContent(1,14.85396);
   hmcerror__26->SetBinContent(2,14.41418);
   hmcerror__26->SetBinContent(3,17.01568);
   hmcerror__26->SetBinContent(4,20.75756);
   hmcerror__26->SetBinContent(5,20.82904);
   hmcerror__26->SetBinContent(6,34.51677);
   hmcerror__26->SetBinContent(7,33.77058);
   hmcerror__26->SetBinContent(8,33.68028);
   hmcerror__26->SetBinContent(9,36.85018);
   hmcerror__26->SetBinContent(10,48.09909);
   hmcerror__26->SetBinContent(11,45.31481);
   hmcerror__26->SetBinContent(12,42.11027);
   hmcerror__26->SetBinContent(13,34.57503);
   hmcerror__26->SetBinContent(14,18.92695);
   hmcerror__26->SetBinContent(15,8.712995);
   hmcerror__26->SetBinContent(16,7.711581);
   hmcerror__26->SetBinContent(17,3.110706);
   hmcerror__26->SetBinContent(18,5.386787);
   hmcerror__26->SetBinContent(19,3.040962);
   hmcerror__26->SetBinContent(20,4.44904);
   hmcerror__26->SetBinContent(21,2.419307);
   hmcerror__26->SetBinContent(22,2.965588);
   hmcerror__26->SetBinContent(23,1.802323);
   hmcerror__26->SetBinContent(24,2.476588);
   hmcerror__26->SetBinContent(25,1.43819);
   hmcerror__26->SetBinContent(26,2.13883);
   hmcerror__26->SetBinContent(27,1.563675);
   hmcerror__26->SetBinContent(28,2.14275);
   hmcerror__26->SetBinContent(29,0.3401776);
   hmcerror__26->SetBinContent(30,2.270384);
   hmcerror__26->SetBinContent(31,1.337741);
   hmcerror__26->SetBinContent(32,1.167395);
   hmcerror__26->SetBinContent(34,0.3900497);
   hmcerror__26->SetBinContent(35,9.955996);
   hmcerror__26->SetBinError(1,12.66971);
   hmcerror__26->SetBinError(2,14.50503);
   hmcerror__26->SetBinError(3,10.56781);
   hmcerror__26->SetBinError(4,11.93298);
   hmcerror__26->SetBinError(5,11.99535);
   hmcerror__26->SetBinError(6,14.41747);
   hmcerror__26->SetBinError(7,15.36238);
   hmcerror__26->SetBinError(8,17.2337);
   hmcerror__26->SetBinError(9,15.72813);
   hmcerror__26->SetBinError(10,20.20466);
   hmcerror__26->SetBinError(11,21.77283);
   hmcerror__26->SetBinError(12,19.3253);
   hmcerror__26->SetBinError(13,19.10005);
   hmcerror__26->SetBinError(14,11.0335);
   hmcerror__26->SetBinError(15,10.40248);
   hmcerror__26->SetBinError(16,6.532645);
   hmcerror__26->SetBinError(17,3.637174);
   hmcerror__26->SetBinError(18,5.650302);
   hmcerror__26->SetBinError(19,9.194476);
   hmcerror__26->SetBinError(20,7.674532);
   hmcerror__26->SetBinError(21,3.236486);
   hmcerror__26->SetBinError(22,4.355444);
   hmcerror__26->SetBinError(23,9.863652);
   hmcerror__26->SetBinError(24,7.405975);
   hmcerror__26->SetBinError(25,2.906516);
   hmcerror__26->SetBinError(26,4.890186);
   hmcerror__26->SetBinError(27,12.43745);
   hmcerror__26->SetBinError(28,7.406387);
   hmcerror__26->SetBinError(29,0.9192066);
   hmcerror__26->SetBinError(30,6.484319);
   hmcerror__26->SetBinError(31,3.001852);
   hmcerror__26->SetBinError(32,3.871355);
   hmcerror__26->SetBinError(33,0.3895343);
   hmcerror__26->SetBinError(34,1.539753);
   hmcerror__26->SetBinError(35,12.4359);
   hmcerror__26->SetEntries(469.1651);

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
   13,
   13,
   19,
   24,
   20,
   30,
   34,
   28,
   34,
   33,
   37,
   41,
   19,
   10,
   9,
   3,
   1,
   7,
   2,
   0,
   1,
   3,
   0,
   2,
   1,
   1,
   2,
   1,
   0,
   1,
   0,
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
   3.77763,
   3.77763,
   4.5151,
   5.0476,
   4.6266,
   5.6197,
   5.9703,
   5.4358,
   5.9703,
   5.8847,
   6.2203,
   6.5384,
   4.5151,
   3.34883,
   3.19354,
   2.143368,
   1,
   2.85954,
   2,
   0,
   1,
   2.143368,
   0,
   2,
   1,
   1,
   2,
   1,
   0,
   1,
   0,
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
   3.5552,
   3.5552,
   4.3011,
   4.837,
   4.4133,
   5.4117,
   5.7635,
   5.2271,
   5.7635,
   5.6776,
   6.0141,
   6.3331,
   4.3011,
   3.1179,
   2.9582,
   1.72422,
   1.35971,
   2.61053,
   1.51917,
   1.1478,
   1.35971,
   1.72422,
   1.1478,
   1.51917,
   1.35971,
   1.35971,
   1.51917,
   1.35971,
   1.1478,
   1.35971,
   1.1478,
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
   Graph_Graph3033->SetMaximum(52.06641);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.3/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 391.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 16.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 35.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  110.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 90.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 20.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 84.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.2","F");

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
   0.852952,
   1.006303,
   0.6210629,
   0.5748738,
   0.5758954,
   0.4176947,
   0.4549044,
   0.5116852,
   0.4268129,
   0.4200633,
   0.4804793,
   0.4589213,
   0.5524234,
   0.5829521,
   1.193905,
   0.8471214,
   1.169244,
   1.048919,
   3.023542,
   1.724986,
   1.337774,
   1.468662,
   5.472744,
   2.990394,
   2.020954,
   2.286384,
   7.953988,
   3.456486,
   2.702137,
   2.856045,
   2.243971,
   3.316235,
   0,
   3.947581};
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
   0.852952,
   1.006303,
   0.6210629,
   0.5748738,
   0.5758954,
   0.4176947,
   0.4549044,
   0.5116852,
   0.4268129,
   0.4200633,
   0.4804793,
   0.4589213,
   0.5524234,
   0.5829521,
   1.193905,
   0.8471214,
   1.169244,
   1.048919,
   3.023542,
   1.724986,
   1.337774,
   1.468662,
   5.472744,
   2.990394,
   2.020954,
   2.286384,
   7.953988,
   3.456486,
   2.702137,
   2.856045,
   2.243971,
   3.316235,
   0,
   3.947581};
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
   0.2222302,
   0.2284234,
   0.2270508,
   0.2360903,
   0.2616173,
   0.240445,
   0.2463091,
   0.2930892,
   0.3265352,
   0.3145477,
   0.3470783,
   0.3014593,
   0.2780536,
   0.2602493,
   0.327501,
   0.2887266,
   0.4412276,
   0.3391592,
   0.4035874,
   0.5231001,
   0.4476149,
   0.4111297,
   0.6725173,
   0.4799834,
   0.6246158,
   0.5725058,
   0.8580343,
   0.547655,
   1.969059,
   0.5470445,
   0.9254464,
   0.7321864,
   0,
   1.212861};
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
   0.2222302,
   0.2284234,
   0.2270508,
   0.2360903,
   0.2616173,
   0.240445,
   0.2463091,
   0.2930892,
   0.3265352,
   0.3145477,
   0.3470783,
   0.3014593,
   0.2780536,
   0.2602493,
   0.327501,
   0.2887266,
   0.4412276,
   0.3391592,
   0.4035874,
   0.5231001,
   0.4476149,
   0.4111297,
   0.6725173,
   0.4799834,
   0.6246158,
   0.5725058,
   0.8580343,
   0.547655,
   1.969059,
   0.5470445,
   0.9254464,
   0.7321864,
   0,
   1.212861};
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
   0.8751876,
   0.9018894,
   1.116617,
   1.156205,
   0.960198,
   0.8691427,
   1.006793,
   0.8313469,
   0.922655,
   0.6860837,
   0.8165101,
   0.9736343,
   0.5495296,
   0.5283472,
   1.03294,
   0.3890253,
   0.3214704,
   1.299476,
   0.6576867,
   0,
   0.4133415,
   1.011604,
   0,
   0.8075626,
   0.6953185,
   0.4675454,
   1.279038,
   0.4666899,
   0,
   0.4404541,
   0,
   0.8566084,
   10,
   2.563776};
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
   0.2543181,
   0.2620773,
   0.2653493,
   0.2431692,
   0.2221226,
   0.1628107,
   0.17679,
   0.1613941,
   0.1620155,
   0.1223453,
   0.1372686,
   0.1552685,
   0.1305885,
   0.1769345,
   0.3665261,
   0.2779415,
   0.3214704,
   0.5308433,
   0.6576867,
   0,
   0.4133415,
   0.7227465,
   0,
   0.8075626,
   0.6953185,
   0.4675454,
   1.279038,
   0.4666899,
   0,
   0.4404541,
   0,
   0.8566084,
   0,
   2.563776};
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
   0.2393436,
   0.2466459,
   0.2527727,
   0.2330235,
   0.2118821,
   0.1567846,
   0.1706663,
   0.1551976,
   0.1564036,
   0.1180397,
   0.1327182,
   0.1503932,
   0.124399,
   0.1647334,
   0.3395159,
   0.2235884,
   0.4371065,
   0.4846172,
   0.4995689,
   0.2579882,
   0.5620245,
   0.5814092,
   0.6368448,
   0.6134124,
   0.9454316,
   0.6357262,
   0.9715384,
   0.634563,
   3.37412,
   0.5988898,
   0.8580138,
   1.164739,
   0,
   3.485992};
   grae = new TGraphAsymmErrors(34,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,440);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
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
