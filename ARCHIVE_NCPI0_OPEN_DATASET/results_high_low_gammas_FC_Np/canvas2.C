void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar 31 00:48:08 2022) by ROOT version 6.14/06
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-61.53846,-1.08569,451.2821,91.48366);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmc__4->SetBinContent(1,35.98687);
   hmc__4->SetBinContent(2,54.2845);
   hmc__4->SetBinContent(3,50.1852);
   hmc__4->SetBinContent(4,38.02054);
   hmc__4->SetBinContent(5,24.82745);
   hmc__4->SetBinContent(6,14.26383);
   hmc__4->SetBinContent(7,9.615612);
   hmc__4->SetBinContent(8,6.448845);
   hmc__4->SetBinContent(9,4.350824);
   hmc__4->SetBinContent(10,2.231485);
   hmc__4->SetBinContent(11,1.468149);
   hmc__4->SetBinContent(12,0.6231523);
   hmc__4->SetBinContent(13,0.6721478);
   hmc__4->SetBinContent(14,0.2860758);
   hmc__4->SetBinContent(15,0.1129571);
   hmc__4->SetBinContent(16,0.07470649);
   hmc__4->SetBinContent(17,0.3607822);
   hmc__4->SetBinError(1,8.343186);
   hmc__4->SetBinError(2,12.40372);
   hmc__4->SetBinError(3,12.85867);
   hmc__4->SetBinError(4,10.56072);
   hmc__4->SetBinError(5,8.102671);
   hmc__4->SetBinError(6,5.00221);
   hmc__4->SetBinError(7,3.837781);
   hmc__4->SetBinError(8,3.024004);
   hmc__4->SetBinError(9,2.949461);
   hmc__4->SetBinError(10,1.323245);
   hmc__4->SetBinError(11,1.255153);
   hmc__4->SetBinError(12,0.7023716);
   hmc__4->SetBinError(13,0.7034727);
   hmc__4->SetBinError(14,0.8496746);
   hmc__4->SetBinError(15,0.3035272);
   hmc__4->SetBinError(16,0.1698571);
   hmc__4->SetBinError(17,0.5961672);
   hmc__4->SetMinimum(-1.08569);
   hmc__4->SetMaximum(86.85519);
   hmc__4->SetEntries(240.4242);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetLabelSize(0.035);
   hmc__4->GetXaxis()->SetTitleSize(0.035);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetLabelSize(0.035);
   hmc__4->GetZaxis()->SetTitleSize(0.035);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",16,0,400);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(56.99872);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,0.5840339);
   hbadmatch_stack_1->SetBinContent(2,0.8891375);
   hbadmatch_stack_1->SetBinContent(3,0.9844964);
   hbadmatch_stack_1->SetBinContent(4,0.7877735);
   hbadmatch_stack_1->SetBinContent(5,0.3807256);
   hbadmatch_stack_1->SetBinContent(6,0.2157491);
   hbadmatch_stack_1->SetBinContent(7,0.149413);
   hbadmatch_stack_1->SetBinContent(8,0.02550039);
   hbadmatch_stack_1->SetBinContent(9,0.07470649);
   hbadmatch_stack_1->SetBinContent(10,0.0127502);
   hbadmatch_stack_1->SetBinContent(11,0.0127502);
   hbadmatch_stack_1->SetBinContent(12,0.0127502);
   hbadmatch_stack_1->SetBinError(1,0.1801148);
   hbadmatch_stack_1->SetBinError(2,0.2284121);
   hbadmatch_stack_1->SetBinError(3,0.2282749);
   hbadmatch_stack_1->SetBinError(4,0.3835334);
   hbadmatch_stack_1->SetBinError(5,0.1574821);
   hbadmatch_stack_1->SetBinError(6,0.09427482);
   hbadmatch_stack_1->SetBinError(7,0.08945557);
   hbadmatch_stack_1->SetBinError(8,0.0180315);
   hbadmatch_stack_1->SetBinError(9,0.06325464);
   hbadmatch_stack_1->SetBinError(10,0.0127502);
   hbadmatch_stack_1->SetBinError(11,0.0127502);
   hbadmatch_stack_1->SetBinError(12,0.0127502);
   hbadmatch_stack_1->SetEntries(113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleOffset(0);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,2.955734);
   hext_stack_2->SetBinContent(2,2.928463);
   hext_stack_2->SetBinContent(3,2.891653);
   hext_stack_2->SetBinContent(4,2.061379);
   hext_stack_2->SetBinContent(5,0.6707665);
   hext_stack_2->SetBinContent(6,0.4471776);
   hext_stack_2->SetBinContent(7,0.2235888);
   hext_stack_2->SetBinContent(8,0.08588897);
   hext_stack_2->SetBinContent(9,0.211319);
   hext_stack_2->SetBinContent(10,0.02453971);
   hext_stack_2->SetBinContent(11,0.01226985);
   hext_stack_2->SetBinContent(13,0.02453971);
   hext_stack_2->SetBinError(1,0.7208215);
   hext_stack_2->SetBinError(2,0.6943131);
   hext_stack_2->SetBinError(3,0.6939878);
   hext_stack_2->SetBinError(4,0.5999142);
   hext_stack_2->SetBinError(5,0.3460707);
   hext_stack_2->SetBinError(6,0.2825656);
   hext_stack_2->SetBinError(7,0.199804);
   hext_stack_2->SetBinError(8,0.03246298);
   hext_stack_2->SetBinError(9,0.1994269);
   hext_stack_2->SetBinError(10,0.01735219);
   hext_stack_2->SetBinError(11,0.01226985);
   hext_stack_2->SetBinError(13,0.01735219);
   hext_stack_2->SetEntries(215);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetLabelSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetLabelSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleOffset(0);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetLabelSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,0.2981177);
   hdirt_stack_3->SetBinContent(2,0.2491761);
   hdirt_stack_3->SetBinContent(3,0.4753071);
   hdirt_stack_3->SetBinContent(4,0.02588734);
   hdirt_stack_3->SetBinContent(5,0.09663776);
   hdirt_stack_3->SetBinContent(6,0.04632451);
   hdirt_stack_3->SetBinError(1,0.112252);
   hdirt_stack_3->SetBinError(2,0.09478208);
   hdirt_stack_3->SetBinError(3,0.3099355);
   hdirt_stack_3->SetBinError(4,0.01497969);
   hdirt_stack_3->SetBinError(5,0.06305907);
   hdirt_stack_3->SetBinError(6,0.04632451);
   hdirt_stack_3->SetEntries(40);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleOffset(0);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,1.601174);
   houtFV_stack_4->SetBinContent(2,2.383699);
   houtFV_stack_4->SetBinContent(3,1.642535);
   houtFV_stack_4->SetBinContent(4,1.541421);
   houtFV_stack_4->SetBinContent(5,0.8238493);
   houtFV_stack_4->SetBinContent(6,0.2478252);
   houtFV_stack_4->SetBinContent(7,0.3037695);
   houtFV_stack_4->SetBinContent(8,0.1986191);
   houtFV_stack_4->SetBinContent(9,0.0127502);
   houtFV_stack_4->SetBinContent(10,0.07470649);
   houtFV_stack_4->SetBinContent(11,0.06195629);
   houtFV_stack_4->SetBinError(1,0.2854237);
   houtFV_stack_4->SetBinError(2,0.3698322);
   houtFV_stack_4->SetBinError(3,0.3037869);
   houtFV_stack_4->SetBinError(4,0.2957118);
   houtFV_stack_4->SetBinError(5,0.2171454);
   houtFV_stack_4->SetBinError(6,0.1239126);
   houtFV_stack_4->SetBinError(7,0.1354532);
   houtFV_stack_4->SetBinError(8,0.1080662);
   houtFV_stack_4->SetBinError(9,0.0127502);
   houtFV_stack_4->SetBinError(10,0.06325464);
   houtFV_stack_4->SetBinError(11,0.06195629);
   houtFV_stack_4->SetEntries(218);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleOffset(0);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFV_stack_5->SetBinContent(1,17.0004);
   hNCpi0inFV_stack_5->SetBinContent(2,32.97304);
   hNCpi0inFV_stack_5->SetBinContent(3,30.845);
   hNCpi0inFV_stack_5->SetBinContent(4,24.23777);
   hNCpi0inFV_stack_5->SetBinContent(5,14.52413);
   hNCpi0inFV_stack_5->SetBinContent(6,9.219643);
   hNCpi0inFV_stack_5->SetBinContent(7,6.632538);
   hNCpi0inFV_stack_5->SetBinContent(8,4.371227);
   hNCpi0inFV_stack_5->SetBinContent(9,2.928098);
   hNCpi0inFV_stack_5->SetBinContent(10,1.455879);
   hNCpi0inFV_stack_5->SetBinContent(11,0.6723584);
   hNCpi0inFV_stack_5->SetBinContent(12,0.3607822);
   hNCpi0inFV_stack_5->SetBinContent(13,0.2878704);
   hNCpi0inFV_stack_5->SetBinContent(14,0.149413);
   hNCpi0inFV_stack_5->SetBinContent(15,0.08745668);
   hNCpi0inFV_stack_5->SetBinContent(16,0.06195629);
   hNCpi0inFV_stack_5->SetBinContent(17,0.2113693);
   hNCpi0inFV_stack_5->SetBinError(1,0.96127);
   hNCpi0inFV_stack_5->SetBinError(2,1.335346);
   hNCpi0inFV_stack_5->SetBinError(3,1.286741);
   hNCpi0inFV_stack_5->SetBinError(4,1.142776);
   hNCpi0inFV_stack_5->SetBinError(5,0.8881518);
   hNCpi0inFV_stack_5->SetBinError(6,0.6996718);
   hNCpi0inFV_stack_5->SetBinError(7,0.6016571);
   hNCpi0inFV_stack_5->SetBinError(8,0.4822389);
   hNCpi0inFV_stack_5->SetBinError(9,0.3913843);
   hNCpi0inFV_stack_5->SetBinError(10,0.28202);
   hNCpi0inFV_stack_5->SetBinError(11,0.1897639);
   hNCpi0inFV_stack_5->SetBinError(12,0.1408658);
   hNCpi0inFV_stack_5->SetBinError(13,0.113209);
   hNCpi0inFV_stack_5->SetBinError(14,0.08945557);
   hNCpi0inFV_stack_5->SetBinError(15,0.06452687);
   hNCpi0inFV_stack_5->SetBinError(16,0.06195629);
   hNCpi0inFV_stack_5->SetBinError(17,0.1088158);
   hNCpi0inFV_stack_5->SetEntries(3845);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleOffset(0);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_6->SetBinContent(1,2.800418);
   hCCpi0inFV_stack_6->SetBinContent(2,7.322152);
   hCCpi0inFV_stack_6->SetBinContent(3,8.349983);
   hCCpi0inFV_stack_6->SetBinContent(4,6.347452);
   hCCpi0inFV_stack_6->SetBinContent(5,5.142225);
   hCCpi0inFV_stack_6->SetBinContent(6,2.835257);
   hCCpi0inFV_stack_6->SetBinContent(7,1.444365);
   hCCpi0inFV_stack_6->SetBinContent(8,1.24451);
   hCCpi0inFV_stack_6->SetBinContent(9,0.7835208);
   hCCpi0inFV_stack_6->SetBinContent(10,0.5014458);
   hCCpi0inFV_stack_6->SetBinContent(11,0.2988259);
   hCCpi0inFV_stack_6->SetBinContent(12,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(13,0.272281);
   hCCpi0inFV_stack_6->SetBinContent(14,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(16,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(17,0.149413);
   hCCpi0inFV_stack_6->SetBinError(1,0.3824679);
   hCCpi0inFV_stack_6->SetBinError(2,0.6345049);
   hCCpi0inFV_stack_6->SetBinError(3,0.6794297);
   hCCpi0inFV_stack_6->SetBinError(4,0.5846347);
   hCCpi0inFV_stack_6->SetBinError(5,0.5354496);
   hCCpi0inFV_stack_6->SetBinError(6,0.3976118);
   hCCpi0inFV_stack_6->SetBinError(7,0.2730477);
   hCCpi0inFV_stack_6->SetBinError(8,0.2601815);
   hCCpi0inFV_stack_6->SetBinError(9,0.2086263);
   hCCpi0inFV_stack_6->SetBinError(10,0.1667361);
   hCCpi0inFV_stack_6->SetBinError(11,0.1265093);
   hCCpi0inFV_stack_6->SetBinError(12,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(13,0.1307838);
   hCCpi0inFV_stack_6->SetBinError(14,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(16,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(17,0.08945557);
   hCCpi0inFV_stack_6->SetEntries(968);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleOffset(0);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_7->SetBinContent(1,3.576751);
   hNCinFV_stack_7->SetBinContent(2,2.228444);
   hNCinFV_stack_7->SetBinContent(3,1.95153);
   hNCinFV_stack_7->SetBinContent(4,1.208054);
   hNCinFV_stack_7->SetBinContent(5,1.441334);
   hNCinFV_stack_7->SetBinContent(6,0.646858);
   hNCinFV_stack_7->SetBinContent(7,0.3498267);
   hNCinFV_stack_7->SetBinContent(8,0.2605754);
   hNCinFV_stack_7->SetBinContent(9,0.2368697);
   hNCinFV_stack_7->SetBinContent(10,0.149413);
   hNCinFV_stack_7->SetBinContent(11,0.2860757);
   hNCinFV_stack_7->SetBinContent(12,0.02550039);
   hNCinFV_stack_7->SetBinContent(13,0.07470649);
   hNCinFV_stack_7->SetBinContent(14,0.06195629);
   hNCinFV_stack_7->SetBinContent(15,0.02550039);
   hNCinFV_stack_7->SetBinError(1,0.4310929);
   hNCinFV_stack_7->SetBinError(2,0.3462252);
   hNCinFV_stack_7->SetBinError(3,0.33203);
   hNCinFV_stack_7->SetBinError(4,0.2533396);
   hNCinFV_stack_7->SetBinError(5,0.2870513);
   hNCinFV_stack_7->SetBinError(6,0.1889053);
   hNCinFV_stack_7->SetBinError(7,0.1290537);
   hNCinFV_stack_7->SetBinError(8,0.1245668);
   hNCinFV_stack_7->SetBinError(9,0.1102997);
   hNCinFV_stack_7->SetBinError(10,0.08945557);
   hNCinFV_stack_7->SetBinError(11,0.1258651);
   hNCinFV_stack_7->SetBinError(12,0.0180315);
   hNCinFV_stack_7->SetBinError(13,0.06325464);
   hNCinFV_stack_7->SetBinError(14,0.06195629);
   hNCinFV_stack_7->SetBinError(15,0.0180315);
   hNCinFV_stack_7->SetEntries(330);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleOffset(0);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_8->SetBinContent(1,7.020519);
   hnumuCCinFV_stack_8->SetBinContent(2,5.132098);
   hnumuCCinFV_stack_8->SetBinContent(3,3.019191);
   hnumuCCinFV_stack_8->SetBinContent(4,1.686895);
   hnumuCCinFV_stack_8->SetBinContent(5,1.64572);
   hnumuCCinFV_stack_8->SetBinContent(6,0.5794982);
   hnumuCCinFV_stack_8->SetBinContent(7,0.4501549);
   hnumuCCinFV_stack_8->SetBinContent(8,0.2005687);
   hnumuCCinFV_stack_8->SetBinContent(9,0.10356);
   hnumuCCinFV_stack_8->SetBinContent(10,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(11,0.1239126);
   hnumuCCinFV_stack_8->SetBinError(1,0.8754871);
   hnumuCCinFV_stack_8->SetBinError(2,0.5951082);
   hnumuCCinFV_stack_8->SetBinError(3,0.4831851);
   hnumuCCinFV_stack_8->SetBinError(4,0.3188798);
   hnumuCCinFV_stack_8->SetBinError(5,0.3841984);
   hnumuCCinFV_stack_8->SetBinError(6,0.1807147);
   hnumuCCinFV_stack_8->SetBinError(7,0.2035973);
   hnumuCCinFV_stack_8->SetBinError(8,0.1012702);
   hnumuCCinFV_stack_8->SetBinError(9,0.07484518);
   hnumuCCinFV_stack_8->SetBinError(10,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(11,0.08761943);
   hnumuCCinFV_stack_8->SetEntries(468);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleOffset(0);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_9->SetBinContent(1,0.1497253);
   hnueCCinFV_stack_9->SetBinContent(2,0.1782847);
   hnueCCinFV_stack_9->SetBinContent(3,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(4,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(5,0.1020632);
   hnueCCinFV_stack_9->SetBinContent(6,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(7,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(8,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(12,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.0127502);
   hnueCCinFV_stack_9->SetBinError(1,0.08950979);
   hnueCCinFV_stack_9->SetBinError(2,0.09175563);
   hnueCCinFV_stack_9->SetBinError(3,0.0180315);
   hnueCCinFV_stack_9->SetBinError(4,0.08761943);
   hnueCCinFV_stack_9->SetBinError(5,0.06615638);
   hnueCCinFV_stack_9->SetBinError(6,0.0180315);
   hnueCCinFV_stack_9->SetBinError(7,0.06195629);
   hnueCCinFV_stack_9->SetBinError(8,0.06195629);
   hnueCCinFV_stack_9->SetBinError(12,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.0127502);
   hnueCCinFV_stack_9->SetEntries(25);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleOffset(0);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);
   hmcerror__5->SetBinContent(1,35.98687);
   hmcerror__5->SetBinContent(2,54.2845);
   hmcerror__5->SetBinContent(3,50.1852);
   hmcerror__5->SetBinContent(4,38.02054);
   hmcerror__5->SetBinContent(5,24.82745);
   hmcerror__5->SetBinContent(6,14.26383);
   hmcerror__5->SetBinContent(7,9.615612);
   hmcerror__5->SetBinContent(8,6.448845);
   hmcerror__5->SetBinContent(9,4.350824);
   hmcerror__5->SetBinContent(10,2.231485);
   hmcerror__5->SetBinContent(11,1.468149);
   hmcerror__5->SetBinContent(12,0.6231523);
   hmcerror__5->SetBinContent(13,0.6721478);
   hmcerror__5->SetBinContent(14,0.2860758);
   hmcerror__5->SetBinContent(15,0.1129571);
   hmcerror__5->SetBinContent(16,0.07470649);
   hmcerror__5->SetBinContent(17,0.3607822);
   hmcerror__5->SetBinError(1,8.343186);
   hmcerror__5->SetBinError(2,12.40372);
   hmcerror__5->SetBinError(3,12.85867);
   hmcerror__5->SetBinError(4,10.56072);
   hmcerror__5->SetBinError(5,8.102671);
   hmcerror__5->SetBinError(6,5.00221);
   hmcerror__5->SetBinError(7,3.837781);
   hmcerror__5->SetBinError(8,3.024004);
   hmcerror__5->SetBinError(9,2.949461);
   hmcerror__5->SetBinError(10,1.323245);
   hmcerror__5->SetBinError(11,1.255153);
   hmcerror__5->SetBinError(12,0.7023716);
   hmcerror__5->SetBinError(13,0.7034727);
   hmcerror__5->SetBinError(14,0.8496746);
   hmcerror__5->SetBinError(15,0.3035272);
   hmcerror__5->SetBinError(16,0.1698571);
   hmcerror__5->SetBinError(17,0.5961672);
   hmcerror__5->SetEntries(240.4242);

   ci = TColor::GetColor("#666666");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetLabelSize(0.035);
   hmcerror__5->GetXaxis()->SetTitleSize(0.035);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetLabelSize(0.035);
   hmcerror__5->GetYaxis()->SetTitleSize(0.035);
   hmcerror__5->GetYaxis()->SetTitleOffset(0);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetLabelSize(0.035);
   hmcerror__5->GetZaxis()->SetTitleSize(0.035);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3005[16] = {
   30,
   44,
   22,
   25,
   10,
   10,
   8,
   2,
   3,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3005[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3005[16] = {
   5.6197,
   6.7671,
   4.8417,
   5.1474,
   3.34883,
   3.34883,
   3.0307,
   2,
   2.143368,
   0,
   2,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3005[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3005[16] = {
   5.4117,
   6.5623,
   4.6299,
   4.9374,
   3.1179,
   3.1179,
   2.7896,
   1.51917,
   1.72422,
   1.1478,
   1.51917,
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(55.61853);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.64#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.58/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 156.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.1","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.5","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 8.9","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  145.8","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 37.6","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 20.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all");
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
   
   Double_t _fx3006[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3006[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3006[16] = {
   0.2318397,
   0.2284947,
   0.2562243,
   0.2777635,
   0.3263594,
   0.3506919,
   0.3991198,
   0.4689218,
   0.6779085,
   0.5929886,
   0.8549221,
   1.127127,
   1.046604,
   2.970103,
   2.687102,
   2.273659};
   Double_t _fehx3006[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3006[16] = {
   0.2318397,
   0.2284947,
   0.2562243,
   0.2777635,
   0.3263594,
   0.3506919,
   0.3991198,
   0.4689218,
   0.6779085,
   0.5929886,
   0.8549221,
   1.127127,
   1.046604,
   2.970103,
   2.687102,
   2.273659};
   grae = new TGraphAsymmErrors(16,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
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
   Graph_Graph3006->GetXaxis()->SetTitle("Reconstructed E_{#gamma} [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3007[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3007[16] = {
   0.1949933,
   0.2030737,
   0.2222994,
   0.2302541,
   0.2373165,
   0.2408025,
   0.2440217,
   0.2851097,
   0.2912777,
   0.3420517,
   0.4093285,
   0.4674071,
   0.4553388,
   0.713302,
   1.264983,
   1.77084};
   Double_t _fehx3007[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3007[16] = {
   0.1949933,
   0.2030737,
   0.2222994,
   0.2302541,
   0.2373165,
   0.2408025,
   0.2440217,
   0.2851097,
   0.2912777,
   0.3420517,
   0.4093285,
   0.4674071,
   0.4553388,
   0.713302,
   1.264983,
   1.77084};
   grae = new TGraphAsymmErrors(16,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
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
   
   Double_t _fx3008[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3008[16] = {
   0.8336374,
   0.8105445,
   0.4383763,
   0.6575393,
   0.40278,
   0.7010738,
   0.8319803,
   0.310133,
   0.6895246,
   0,
   1.36226,
   0,
   0,
   0,
   0,
   0};
   Double_t _felx3008[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3008[16] = {
   0.1561597,
   0.1246599,
   0.09647665,
   0.1353847,
   0.1348842,
   0.2347777,
   0.3151853,
   0.310133,
   0.492635,
   0,
   1.36226,
   0,
   0,
   0,
   0,
   0};
   Double_t _fehx3008[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3008[16] = {
   0.1503798,
   0.1208872,
   0.09225628,
   0.1298614,
   0.1255828,
   0.2185878,
   0.2901115,
   0.2355724,
   0.3962974,
   0.5143661,
   1.034752,
   1.841925,
   1.70766,
   4.012224,
   10.16138,
   15.36413};
   grae = new TGraphAsymmErrors(16,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,440);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(16.90054);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT1_FC_Np_bnb_10_kine_pio_energy_low_all",16,0,400);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetLabelSize(0.035);
   hist__6->GetXaxis()->SetTitleSize(0.035);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetLabelSize(0.035);
   hist__6->GetYaxis()->SetTitleSize(0.035);
   hist__6->GetYaxis()->SetTitleOffset(0);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetLabelSize(0.035);
   hist__6->GetZaxis()->SetTitleSize(0.035);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
