#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr 15 00:01:13 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-230.7692,-1.916442,1692.308,161.4855);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hmc__1->SetBinContent(1,24.66586);
   hmc__1->SetBinContent(2,71.68771);
   hmc__1->SetBinContent(3,95.82211);
   hmc__1->SetBinContent(4,86.28023);
   hmc__1->SetBinContent(5,69.73195);
   hmc__1->SetBinContent(6,57.31494);
   hmc__1->SetBinContent(7,43.29631);
   hmc__1->SetBinContent(8,33.83374);
   hmc__1->SetBinContent(9,27.06217);
   hmc__1->SetBinContent(10,21.02499);
   hmc__1->SetBinContent(11,12.63547);
   hmc__1->SetBinContent(12,10.35812);
   hmc__1->SetBinContent(13,8.31057);
   hmc__1->SetBinContent(14,7.191526);
   hmc__1->SetBinContent(15,5.441835);
   hmc__1->SetBinContent(16,3.945);
   hmc__1->SetBinContent(17,4.378896);
   hmc__1->SetBinContent(18,3.532423);
   hmc__1->SetBinContent(19,3.312491);
   hmc__1->SetBinContent(20,2.982311);
   hmc__1->SetBinContent(21,2.427013);
   hmc__1->SetBinContent(22,2.324428);
   hmc__1->SetBinContent(23,1.863661);
   hmc__1->SetBinContent(24,1.220324);
   hmc__1->SetBinContent(25,1.559029);
   hmc__1->SetBinContent(26,28.83471);
   hmc__1->SetBinError(1,7.202731);
   hmc__1->SetBinError(2,15.4716);
   hmc__1->SetBinError(3,19.5114);
   hmc__1->SetBinError(4,19.7803);
   hmc__1->SetBinError(5,16.13443);
   hmc__1->SetBinError(6,13.67875);
   hmc__1->SetBinError(7,11.47354);
   hmc__1->SetBinError(8,9.372829);
   hmc__1->SetBinError(9,6.872386);
   hmc__1->SetBinError(10,5.8516);
   hmc__1->SetBinError(11,4.22702);
   hmc__1->SetBinError(12,6.093654);
   hmc__1->SetBinError(13,3.050705);
   hmc__1->SetBinError(14,3.20852);
   hmc__1->SetBinError(15,2.790555);
   hmc__1->SetBinError(16,1.827551);
   hmc__1->SetBinError(17,2.326194);
   hmc__1->SetBinError(18,2.212181);
   hmc__1->SetBinError(19,1.750071);
   hmc__1->SetBinError(20,2.164252);
   hmc__1->SetBinError(21,1.617279);
   hmc__1->SetBinError(22,1.550738);
   hmc__1->SetBinError(23,1.226673);
   hmc__1->SetBinError(24,0.9590575);
   hmc__1->SetBinError(25,1.191511);
   hmc__1->SetBinError(26,8.536164);
   hmc__1->SetMinimum(-1.916442);
   hmc__1->SetMaximum(153.3154);
   hmc__1->SetEntries(622.1566);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1500);
   hs1_stack_1->SetMinimum(-2.788889e-09);
   hs1_stack_1->SetMaximum(100.6132);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,1.226804);
   hbadmatch_stack_1->SetBinContent(2,1.714769);
   hbadmatch_stack_1->SetBinContent(3,2.21517);
   hbadmatch_stack_1->SetBinContent(4,1.679029);
   hbadmatch_stack_1->SetBinContent(5,1.610142);
   hbadmatch_stack_1->SetBinContent(6,1.054226);
   hbadmatch_stack_1->SetBinContent(7,0.7762761);
   hbadmatch_stack_1->SetBinContent(8,0.46099);
   hbadmatch_stack_1->SetBinContent(9,0.7829725);
   hbadmatch_stack_1->SetBinContent(10,0.4017621);
   hbadmatch_stack_1->SetBinContent(11,0.2834903);
   hbadmatch_stack_1->SetBinContent(12,0.03825059);
   hbadmatch_stack_1->SetBinContent(13,0.1817723);
   hbadmatch_stack_1->SetBinContent(14,0.09008019);
   hbadmatch_stack_1->SetBinContent(15,0.2933192);
   hbadmatch_stack_1->SetBinContent(16,0.06195629);
   hbadmatch_stack_1->SetBinContent(17,0.1667118);
   hbadmatch_stack_1->SetBinContent(18,0.02550039);
   hbadmatch_stack_1->SetBinContent(19,0.02550039);
   hbadmatch_stack_1->SetBinContent(20,0.09272019);
   hbadmatch_stack_1->SetBinContent(21,0.08745668);
   hbadmatch_stack_1->SetBinContent(22,0.0127502);
   hbadmatch_stack_1->SetBinContent(23,0.07143724);
   hbadmatch_stack_1->SetBinContent(25,0.0127502);
   hbadmatch_stack_1->SetBinContent(26,0.3671791);
   hbadmatch_stack_1->SetBinError(1,0.3525623);
   hbadmatch_stack_1->SetBinError(2,0.2997468);
   hbadmatch_stack_1->SetBinError(3,0.4710873);
   hbadmatch_stack_1->SetBinError(4,0.301255);
   hbadmatch_stack_1->SetBinError(5,0.3193838);
   hbadmatch_stack_1->SetBinError(6,0.2370764);
   hbadmatch_stack_1->SetBinError(7,0.2172769);
   hbadmatch_stack_1->SetBinError(8,0.1554653);
   hbadmatch_stack_1->SetBinError(9,0.3747438);
   hbadmatch_stack_1->SetBinError(10,0.1521807);
   hbadmatch_stack_1->SetBinError(11,0.1223814);
   hbadmatch_stack_1->SetBinError(12,0.02208399);
   hbadmatch_stack_1->SetBinError(13,0.1028119);
   hbadmatch_stack_1->SetBinError(14,0.06509608);
   hbadmatch_stack_1->SetBinError(15,0.1295841);
   hbadmatch_stack_1->SetBinError(16,0.06195629);
   hbadmatch_stack_1->SetBinError(17,0.0910609);
   hbadmatch_stack_1->SetBinError(18,0.0180315);
   hbadmatch_stack_1->SetBinError(19,0.0180315);
   hbadmatch_stack_1->SetBinError(20,0.06566632);
   hbadmatch_stack_1->SetBinError(21,0.06452687);
   hbadmatch_stack_1->SetBinError(22,0.0127502);
   hbadmatch_stack_1->SetBinError(23,0.07143724);
   hbadmatch_stack_1->SetBinError(25,0.0127502);
   hbadmatch_stack_1->SetBinError(26,0.1186606);
   hbadmatch_stack_1->SetEntries(370);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,1.71236);
   hext_stack_2->SetBinContent(2,6.628582);
   hext_stack_2->SetBinContent(3,8.016463);
   hext_stack_2->SetBinContent(4,4.913491);
   hext_stack_2->SetBinContent(5,4.340883);
   hext_stack_2->SetBinContent(6,4.196376);
   hext_stack_2->SetBinContent(7,3.240672);
   hext_stack_2->SetBinContent(8,1.363341);
   hext_stack_2->SetBinContent(9,2.444476);
   hext_stack_2->SetBinContent(10,1.899139);
   hext_stack_2->SetBinContent(11,1.029324);
   hext_stack_2->SetBinContent(12,0.707576);
   hext_stack_2->SetBinContent(13,0.8820854);
   hext_stack_2->SetBinContent(14,0.707576);
   hext_stack_2->SetBinContent(15,0.4717173);
   hext_stack_2->SetBinContent(16,0.2481285);
   hext_stack_2->SetBinContent(17,0.3094778);
   hext_stack_2->SetBinContent(18,0.5330666);
   hext_stack_2->SetBinContent(19,0.4471776);
   hext_stack_2->SetBinContent(20,0.04907941);
   hext_stack_2->SetBinContent(21,0.211319);
   hext_stack_2->SetBinContent(22,0.6216871);
   hext_stack_2->SetBinContent(23,0.2481285);
   hext_stack_2->SetBinContent(24,0.01226985);
   hext_stack_2->SetBinContent(25,0.2235888);
   hext_stack_2->SetBinContent(26,2.294506);
   hext_stack_2->SetBinError(1,0.5303377);
   hext_stack_2->SetBinError(2,1.059397);
   hext_stack_2->SetBinError(3,1.151192);
   hext_stack_2->SetBinError(4,0.8965783);
   hext_stack_2->SetBinError(5,0.8278237);
   hext_stack_2->SetBinError(6,0.8489389);
   hext_stack_2->SetBinError(7,0.7485038);
   hext_stack_2->SetBinError(8,0.4501324);
   hext_stack_2->SetBinError(9,0.6338579);
   hext_stack_2->SetBinError(10,0.5663286);
   hext_stack_2->SetBinError(11,0.4016748);
   hext_stack_2->SetBinError(12,0.3467226);
   hext_stack_2->SetBinError(13,0.3994196);
   hext_stack_2->SetBinError(14,0.3467226);
   hext_stack_2->SetBinError(15,0.2830978);
   hext_stack_2->SetBinError(16,0.2005561);
   hext_stack_2->SetBinError(17,0.202424);
   hext_stack_2->SetBinError(18,0.2844242);
   hext_stack_2->SetBinError(19,0.2825656);
   hext_stack_2->SetBinError(20,0.0245397);
   hext_stack_2->SetBinError(21,0.1994269);
   hext_stack_2->SetBinError(22,0.3451996);
   hext_stack_2->SetBinError(23,0.2005561);
   hext_stack_2->SetBinError(24,0.01226985);
   hext_stack_2->SetBinError(25,0.199804);
   hext_stack_2->SetBinError(26,0.6022935);
   hext_stack_2->SetEntries(893);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.278049);
   hdirt_stack_3->SetBinContent(2,1.211421);
   hdirt_stack_3->SetBinContent(3,1.185996);
   hdirt_stack_3->SetBinContent(4,0.9034615);
   hdirt_stack_3->SetBinContent(5,0.4092519);
   hdirt_stack_3->SetBinContent(6,0.3913683);
   hdirt_stack_3->SetBinContent(7,0.3044737);
   hdirt_stack_3->SetBinContent(8,0.2007699);
   hdirt_stack_3->SetBinContent(9,0.06278424);
   hdirt_stack_3->SetBinContent(10,0.2538097);
   hdirt_stack_3->SetBinContent(11,0.1820701);
   hdirt_stack_3->SetBinContent(12,0.1393768);
   hdirt_stack_3->SetBinContent(13,0.04049498);
   hdirt_stack_3->SetBinContent(14,0.07615833);
   hdirt_stack_3->SetBinContent(15,0.06854287);
   hdirt_stack_3->SetBinContent(16,0.08062768);
   hdirt_stack_3->SetBinContent(17,0.06227979);
   hdirt_stack_3->SetBinContent(19,0.009481426);
   hdirt_stack_3->SetBinContent(20,0.04967419);
   hdirt_stack_3->SetBinContent(26,0.2115832);
   hdirt_stack_3->SetBinError(1,0.09313544);
   hdirt_stack_3->SetBinError(2,0.2223126);
   hdirt_stack_3->SetBinError(3,0.3954829);
   hdirt_stack_3->SetBinError(4,0.1950054);
   hdirt_stack_3->SetBinError(5,0.1198134);
   hdirt_stack_3->SetBinError(6,0.1285119);
   hdirt_stack_3->SetBinError(7,0.1121013);
   hdirt_stack_3->SetBinError(8,0.0865871);
   hdirt_stack_3->SetBinError(9,0.04598581);
   hdirt_stack_3->SetBinError(10,0.1030137);
   hdirt_stack_3->SetBinError(11,0.0796056);
   hdirt_stack_3->SetBinError(12,0.07674455);
   hdirt_stack_3->SetBinError(13,0.04049498);
   hdirt_stack_3->SetBinError(14,0.0534311);
   hdirt_stack_3->SetBinError(15,0.05338457);
   hdirt_stack_3->SetBinError(16,0.07287311);
   hdirt_stack_3->SetBinError(17,0.04603312);
   hdirt_stack_3->SetBinError(19,0.009481427);
   hdirt_stack_3->SetBinError(20,0.04967418);
   hdirt_stack_3->SetBinError(26,0.09011418);
   hdirt_stack_3->SetEntries(224);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,4.443231);
   houtFV_stack_4->SetBinContent(2,7.822423);
   houtFV_stack_4->SetBinContent(3,8.642193);
   houtFV_stack_4->SetBinContent(4,7.190481);
   houtFV_stack_4->SetBinContent(5,5.457291);
   houtFV_stack_4->SetBinContent(6,4.745746);
   houtFV_stack_4->SetBinContent(7,4.244465);
   houtFV_stack_4->SetBinContent(8,2.944283);
   houtFV_stack_4->SetBinContent(9,2.258701);
   houtFV_stack_4->SetBinContent(10,1.792956);
   houtFV_stack_4->SetBinContent(11,1.273541);
   houtFV_stack_4->SetBinContent(12,2.13965);
   houtFV_stack_4->SetBinContent(13,0.6771256);
   houtFV_stack_4->SetBinContent(14,1.110209);
   houtFV_stack_4->SetBinContent(15,0.6990769);
   houtFV_stack_4->SetBinContent(16,0.4734741);
   houtFV_stack_4->SetBinContent(17,0.7343147);
   houtFV_stack_4->SetBinContent(18,0.4941641);
   houtFV_stack_4->SetBinContent(19,0.6629322);
   houtFV_stack_4->SetBinContent(20,0.6024315);
   houtFV_stack_4->SetBinContent(21,0.2733256);
   houtFV_stack_4->SetBinContent(22,0.1002069);
   houtFV_stack_4->SetBinContent(23,0.4591944);
   houtFV_stack_4->SetBinContent(24,0.1749134);
   houtFV_stack_4->SetBinContent(25,0.1512077);
   houtFV_stack_4->SetBinContent(26,3.535195);
   houtFV_stack_4->SetBinError(1,0.489478);
   houtFV_stack_4->SetBinError(2,0.6567222);
   houtFV_stack_4->SetBinError(3,0.6902926);
   houtFV_stack_4->SetBinError(4,0.6303138);
   houtFV_stack_4->SetBinError(5,0.5479696);
   houtFV_stack_4->SetBinError(6,0.507194);
   houtFV_stack_4->SetBinError(7,0.480804);
   houtFV_stack_4->SetBinError(8,0.4033302);
   houtFV_stack_4->SetBinError(9,0.3545166);
   houtFV_stack_4->SetBinError(10,0.3098832);
   houtFV_stack_4->SetBinError(11,0.260453);
   houtFV_stack_4->SetBinError(12,0.3563513);
   houtFV_stack_4->SetBinError(13,0.1936694);
   houtFV_stack_4->SetBinError(14,0.2485822);
   houtFV_stack_4->SetBinError(15,0.198613);
   houtFV_stack_4->SetBinError(16,0.160849);
   houtFV_stack_4->SetBinError(17,0.199622);
   houtFV_stack_4->SetBinError(18,0.1636308);
   houtFV_stack_4->SetBinError(19,0.1895879);
   houtFV_stack_4->SetBinError(20,0.1792872);
   houtFV_stack_4->SetBinError(21,0.1252177);
   houtFV_stack_4->SetBinError(22,0.0657745);
   houtFV_stack_4->SetBinError(23,0.1649097);
   houtFV_stack_4->SetBinError(24,0.09125478);
   houtFV_stack_4->SetBinError(25,0.0705447);
   houtFV_stack_4->SetBinError(26,0.440344);
   houtFV_stack_4->SetEntries(1630);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(1,10.53182);
   hNCpi0inFV_stack_5->SetBinContent(2,34.23177);
   hNCpi0inFV_stack_5->SetBinContent(3,49.19729);
   hNCpi0inFV_stack_5->SetBinContent(4,46.36581);
   hNCpi0inFV_stack_5->SetBinContent(5,38.6089);
   hNCpi0inFV_stack_5->SetBinContent(6,33.10973);
   hNCpi0inFV_stack_5->SetBinContent(7,22.71975);
   hNCpi0inFV_stack_5->SetBinContent(8,19.11787);
   hNCpi0inFV_stack_5->SetBinContent(9,13.80257);
   hNCpi0inFV_stack_5->SetBinContent(10,9.535135);
   hNCpi0inFV_stack_5->SetBinContent(11,6.588716);
   hNCpi0inFV_stack_5->SetBinContent(12,4.431388);
   hNCpi0inFV_stack_5->SetBinContent(13,3.899282);
   hNCpi0inFV_stack_5->SetBinContent(14,3.168744);
   hNCpi0inFV_stack_5->SetBinContent(15,2.762345);
   hNCpi0inFV_stack_5->SetBinContent(16,1.754705);
   hNCpi0inFV_stack_5->SetBinContent(17,2.00253);
   hNCpi0inFV_stack_5->SetBinContent(18,1.306466);
   hNCpi0inFV_stack_5->SetBinContent(19,1.171598);
   hNCpi0inFV_stack_5->SetBinContent(20,0.8727722);
   hNCpi0inFV_stack_5->SetBinContent(21,1.23176);
   hNCpi0inFV_stack_5->SetBinContent(22,0.99489);
   hNCpi0inFV_stack_5->SetBinContent(23,0.6341078);
   hNCpi0inFV_stack_5->SetBinContent(24,0.411783);
   hNCpi0inFV_stack_5->SetBinContent(25,0.5229454);
   hNCpi0inFV_stack_5->SetBinContent(26,11.61039);
   hNCpi0inFV_stack_5->SetBinError(1,0.7531187);
   hNCpi0inFV_stack_5->SetBinError(2,1.353805);
   hNCpi0inFV_stack_5->SetBinError(3,1.634902);
   hNCpi0inFV_stack_5->SetBinError(4,1.580144);
   hNCpi0inFV_stack_5->SetBinError(5,1.446651);
   hNCpi0inFV_stack_5->SetBinError(6,1.337538);
   hNCpi0inFV_stack_5->SetBinError(7,1.096002);
   hNCpi0inFV_stack_5->SetBinError(8,1.028465);
   hNCpi0inFV_stack_5->SetBinError(9,0.8655214);
   hNCpi0inFV_stack_5->SetBinError(10,0.7175289);
   hNCpi0inFV_stack_5->SetBinError(11,0.5909636);
   hNCpi0inFV_stack_5->SetBinError(12,0.4893043);
   hNCpi0inFV_stack_5->SetBinError(13,0.4529863);
   hNCpi0inFV_stack_5->SetBinError(14,0.4250164);
   hNCpi0inFV_stack_5->SetBinError(15,0.388675);
   hNCpi0inFV_stack_5->SetBinError(16,0.3090953);
   hNCpi0inFV_stack_5->SetBinError(17,0.3330078);
   hNCpi0inFV_stack_5->SetBinError(18,0.2674565);
   hNCpi0inFV_stack_5->SetBinError(19,0.2463078);
   hNCpi0inFV_stack_5->SetBinError(20,0.211336);
   hNCpi0inFV_stack_5->SetBinError(21,0.2598689);
   hNCpi0inFV_stack_5->SetBinError(22,0.2352994);
   hNCpi0inFV_stack_5->SetBinError(23,0.1884745);
   hNCpi0inFV_stack_5->SetBinError(24,0.1431553);
   hNCpi0inFV_stack_5->SetBinError(25,0.167356);
   hNCpi0inFV_stack_5->SetBinError(26,0.7819374);
   hNCpi0inFV_stack_5->SetEntries(8416);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(1,4.512368);
   hCCpi0inFV_stack_6->SetBinContent(2,11.75452);
   hCCpi0inFV_stack_6->SetBinContent(3,16.60533);
   hCCpi0inFV_stack_6->SetBinContent(4,14.67009);
   hCCpi0inFV_stack_6->SetBinContent(5,11.09459);
   hCCpi0inFV_stack_6->SetBinContent(6,8.925037);
   hCCpi0inFV_stack_6->SetBinContent(7,7.191828);
   hCCpi0inFV_stack_6->SetBinContent(8,6.044846);
   hCCpi0inFV_stack_6->SetBinContent(9,4.719471);
   hCCpi0inFV_stack_6->SetBinContent(10,4.361187);
   hCCpi0inFV_stack_6->SetBinContent(11,1.614273);
   hCCpi0inFV_stack_6->SetBinContent(12,1.433968);
   hCCpi0inFV_stack_6->SetBinContent(13,1.056846);
   hCCpi0inFV_stack_6->SetBinContent(14,1.045891);
   hCCpi0inFV_stack_6->SetBinContent(15,0.6596082);
   hCCpi0inFV_stack_6->SetBinContent(16,0.3990328);
   hCCpi0inFV_stack_6->SetBinContent(17,0.4366819);
   hCCpi0inFV_stack_6->SetBinContent(18,0.6359025);
   hCCpi0inFV_stack_6->SetBinContent(19,0.4846948);
   hCCpi0inFV_stack_6->SetBinContent(20,0.5328563);
   hCCpi0inFV_stack_6->SetBinContent(21,0.3862826);
   hCCpi0inFV_stack_6->SetBinContent(22,0.2733256);
   hCCpi0inFV_stack_6->SetBinContent(23,0.4099883);
   hCCpi0inFV_stack_6->SetBinContent(24,0.3607822);
   hCCpi0inFV_stack_6->SetBinContent(25,0.3765054);
   hCCpi0inFV_stack_6->SetBinContent(26,4.369476);
   hCCpi0inFV_stack_6->SetBinError(1,0.50079);
   hCCpi0inFV_stack_6->SetBinError(2,0.8035126);
   hCCpi0inFV_stack_6->SetBinError(3,0.9587091);
   hCCpi0inFV_stack_6->SetBinError(4,0.8857439);
   hCCpi0inFV_stack_6->SetBinError(5,0.7757062);
   hCCpi0inFV_stack_6->SetBinError(6,0.6853324);
   hCCpi0inFV_stack_6->SetBinError(7,0.6167354);
   hCCpi0inFV_stack_6->SetBinError(8,0.5824901);
   hCCpi0inFV_stack_6->SetBinError(9,0.5054093);
   hCCpi0inFV_stack_6->SetBinError(10,0.492481);
   hCCpi0inFV_stack_6->SetBinError(11,0.2857243);
   hCCpi0inFV_stack_6->SetBinError(12,0.2704786);
   hCCpi0inFV_stack_6->SetBinError(13,0.2433196);
   hCCpi0inFV_stack_6->SetBinError(14,0.2366772);
   hCCpi0inFV_stack_6->SetBinError(15,0.1893351);
   hCCpi0inFV_stack_6->SetBinError(16,0.1425864);
   hCCpi0inFV_stack_6->SetBinError(17,0.1600123);
   hCCpi0inFV_stack_6->SetBinError(18,0.180269);
   hCCpi0inFV_stack_6->SetBinError(19,0.1658926);
   hCCpi0inFV_stack_6->SetBinError(20,0.1806136);
   hCCpi0inFV_stack_6->SetBinError(21,0.1420152);
   hCCpi0inFV_stack_6->SetBinError(22,0.1252177);
   hCCpi0inFV_stack_6->SetBinError(23,0.1533597);
   hCCpi0inFV_stack_6->SetBinError(24,0.1408658);
   hCCpi0inFV_stack_6->SetBinError(25,0.1536698);
   hCCpi0inFV_stack_6->SetBinError(26,0.4837473);
   hCCpi0inFV_stack_6->SetEntries(2725);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_7->SetBinContent(1,0.9966847);
   hNCinFV_stack_7->SetBinContent(2,3.396418);
   hNCinFV_stack_7->SetBinContent(3,4.05965);
   hNCinFV_stack_7->SetBinContent(4,3.352631);
   hNCinFV_stack_7->SetBinContent(5,2.787846);
   hNCinFV_stack_7->SetBinContent(6,1.556086);
   hNCinFV_stack_7->SetBinContent(7,1.48138);
   hNCinFV_stack_7->SetBinContent(8,1.109642);
   hNCinFV_stack_7->SetBinContent(9,0.6614029);
   hNCinFV_stack_7->SetBinContent(10,0.8217714);
   hNCinFV_stack_7->SetBinContent(11,0.5484458);
   hNCinFV_stack_7->SetBinContent(12,0.3607822);
   hNCinFV_stack_7->SetBinContent(13,0.4354887);
   hNCinFV_stack_7->SetBinContent(14,0.3115761);
   hNCinFV_stack_7->SetBinContent(15,0.2004138);
   hNCinFV_stack_7->SetBinContent(16,0.4099883);
   hNCinFV_stack_7->SetBinContent(17,0.1257073);
   hNCinFV_stack_7->SetBinContent(18,0.2860757);
   hNCinFV_stack_7->SetBinContent(19,0.07470649);
   hNCinFV_stack_7->SetBinContent(20,0.433694);
   hNCinFV_stack_7->SetBinContent(21,0.2113693);
   hNCinFV_stack_7->SetBinContent(22,0.1366628);
   hNCinFV_stack_7->SetBinContent(23,0.0127502);
   hNCinFV_stack_7->SetBinContent(24,0.1366628);
   hNCinFV_stack_7->SetBinContent(25,0.07470649);
   hNCinFV_stack_7->SetBinContent(26,1.758294);
   hNCinFV_stack_7->SetBinError(1,0.2287795);
   hNCinFV_stack_7->SetBinError(2,0.4354535);
   hNCinFV_stack_7->SetBinError(3,0.4651744);
   hNCinFV_stack_7->SetBinError(4,0.4169385);
   hNCinFV_stack_7->SetBinError(5,0.3890931);
   hNCinFV_stack_7->SetBinError(6,0.2895886);
   hNCinFV_stack_7->SetBinError(7,0.2825959);
   hNCinFV_stack_7->SetBinError(8,0.2383882);
   hNCinFV_stack_7->SetBinError(9,0.1811685);
   hNCinFV_stack_7->SetBinError(10,0.2097919);
   hNCinFV_stack_7->SetBinError(11,0.1683246);
   hNCinFV_stack_7->SetBinError(12,0.1408658);
   hNCinFV_stack_7->SetBinError(13,0.1544161);
   hNCinFV_stack_7->SetBinError(14,0.1271502);
   hNCinFV_stack_7->SetBinError(15,0.09301919);
   hNCinFV_stack_7->SetBinError(16,0.1533597);
   hNCinFV_stack_7->SetBinError(17,0.06820132);
   hNCinFV_stack_7->SetBinError(18,0.1258651);
   hNCinFV_stack_7->SetBinError(19,0.06325464);
   hNCinFV_stack_7->SetBinError(20,0.1639209);
   hNCinFV_stack_7->SetBinError(21,0.1088158);
   hNCinFV_stack_7->SetBinError(22,0.08854226);
   hNCinFV_stack_7->SetBinError(23,0.0127502);
   hNCinFV_stack_7->SetBinError(24,0.08854226);
   hNCinFV_stack_7->SetBinError(25,0.06325464);
   hNCinFV_stack_7->SetBinError(26,0.2991461);
   hNCinFV_stack_7->SetEntries(696);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(1,0.7966011);
   hnumuCCinFV_stack_8->SetBinContent(2,4.668823);
   hnumuCCinFV_stack_8->SetBinContent(3,5.63062);
   hnumuCCinFV_stack_8->SetBinContent(4,7.047637);
   hnumuCCinFV_stack_8->SetBinContent(5,5.175312);
   hnumuCCinFV_stack_8->SetBinContent(6,3.164724);
   hnumuCCinFV_stack_8->SetBinContent(7,3.113355);
   hnumuCCinFV_stack_8->SetBinContent(8,2.46555);
   hnumuCCinFV_stack_8->SetBinContent(9,2.255093);
   hnumuCCinFV_stack_8->SetBinContent(10,1.959228);
   hnumuCCinFV_stack_8->SetBinContent(11,0.9789469);
   hnumuCCinFV_stack_8->SetBinContent(12,1.014377);
   hnumuCCinFV_stack_8->SetBinContent(13,1.062767);
   hnumuCCinFV_stack_8->SetBinContent(14,0.6685404);
   hnumuCCinFV_stack_8->SetBinContent(15,0.224856);
   hnumuCCinFV_stack_8->SetBinContent(16,0.393175);
   hnumuCCinFV_stack_8->SetBinContent(17,0.4585199);
   hnumuCCinFV_stack_8->SetBinContent(18,0.2337099);
   hnumuCCinFV_stack_8->SetBinContent(19,0.4364002);
   hnumuCCinFV_stack_8->SetBinContent(20,0.2616262);
   hnumuCCinFV_stack_8->SetBinContent(21,0.02550039);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1570512);
   hnumuCCinFV_stack_8->SetBinContent(23,0.02805466);
   hnumuCCinFV_stack_8->SetBinContent(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinContent(25,0.1033449);
   hnumuCCinFV_stack_8->SetBinContent(26,3.661374);
   hnumuCCinFV_stack_8->SetBinError(1,0.2114438);
   hnumuCCinFV_stack_8->SetBinError(2,0.6075975);
   hnumuCCinFV_stack_8->SetBinError(3,0.5748054);
   hnumuCCinFV_stack_8->SetBinError(4,0.9406589);
   hnumuCCinFV_stack_8->SetBinError(5,0.8010716);
   hnumuCCinFV_stack_8->SetBinError(6,0.424793);
   hnumuCCinFV_stack_8->SetBinError(7,0.5656953);
   hnumuCCinFV_stack_8->SetBinError(8,0.3809981);
   hnumuCCinFV_stack_8->SetBinError(9,0.3927807);
   hnumuCCinFV_stack_8->SetBinError(10,0.3581157);
   hnumuCCinFV_stack_8->SetBinError(11,0.2394567);
   hnumuCCinFV_stack_8->SetBinError(12,0.455752);
   hnumuCCinFV_stack_8->SetBinError(13,0.3042086);
   hnumuCCinFV_stack_8->SetBinError(14,0.2064837);
   hnumuCCinFV_stack_8->SetBinError(15,0.1071692);
   hnumuCCinFV_stack_8->SetBinError(16,0.1688471);
   hnumuCCinFV_stack_8->SetBinError(17,0.1691212);
   hnumuCCinFV_stack_8->SetBinError(18,0.1195455);
   hnumuCCinFV_stack_8->SetBinError(19,0.1677615);
   hnumuCCinFV_stack_8->SetBinError(20,0.1291955);
   hnumuCCinFV_stack_8->SetBinError(21,0.0180315);
   hnumuCCinFV_stack_8->SetBinError(22,0.07800763);
   hnumuCCinFV_stack_8->SetBinError(23,0.01991967);
   hnumuCCinFV_stack_8->SetBinError(24,0.06195629);
   hnumuCCinFV_stack_8->SetBinError(25,0.06645414);
   hnumuCCinFV_stack_8->SetBinError(26,0.5455297);
   hnumuCCinFV_stack_8->SetEntries(1072);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_9->SetBinContent(1,0.1679476);
   hnueCCinFV_stack_9->SetBinContent(2,0.2589819);
   hnueCCinFV_stack_9->SetBinContent(3,0.2693988);
   hnueCCinFV_stack_9->SetBinContent(4,0.1575884);
   hnueCCinFV_stack_9->SetBinContent(5,0.2477372);
   hnueCCinFV_stack_9->SetBinContent(6,0.1716478);
   hnueCCinFV_stack_9->SetBinContent(7,0.2241195);
   hnueCCinFV_stack_9->SetBinContent(8,0.1264461);
   hnueCCinFV_stack_9->SetBinContent(9,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(11,0.1366628);
   hnueCCinFV_stack_9->SetBinContent(12,0.09275431);
   hnueCCinFV_stack_9->SetBinContent(13,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(14,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(17,0.08267223);
   hnueCCinFV_stack_9->SetBinContent(18,0.01753742);
   hnueCCinFV_stack_9->SetBinContent(20,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(22,0.02785392);
   hnueCCinFV_stack_9->SetBinContent(24,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(25,0.09398012);
   hnueCCinFV_stack_9->SetBinContent(26,1.026712);
   hnueCCinFV_stack_9->SetBinError(1,0.09645693);
   hnueCCinFV_stack_9->SetBinError(2,0.1232263);
   hnueCCinFV_stack_9->SetBinError(3,0.137963);
   hnueCCinFV_stack_9->SetBinError(4,0.090838);
   hnueCCinFV_stack_9->SetBinError(5,0.1291393);
   hnueCCinFV_stack_9->SetBinError(6,0.09977881);
   hnueCCinFV_stack_9->SetBinError(7,0.1095603);
   hnueCCinFV_stack_9->SetBinError(8,0.08032331);
   hnueCCinFV_stack_9->SetBinError(9,0.06325464);
   hnueCCinFV_stack_9->SetBinError(11,0.08854226);
   hnueCCinFV_stack_9->SetBinError(12,0.08101374);
   hnueCCinFV_stack_9->SetBinError(13,0.06325464);
   hnueCCinFV_stack_9->SetBinError(14,0.0127502);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.08761943);
   hnueCCinFV_stack_9->SetBinError(17,0.07053344);
   hnueCCinFV_stack_9->SetBinError(18,0.01753742);
   hnueCCinFV_stack_9->SetBinError(20,0.06452687);
   hnueCCinFV_stack_9->SetBinError(22,0.02785392);
   hnueCCinFV_stack_9->SetBinError(24,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.066046);
   hnueCCinFV_stack_9->SetBinError(26,0.4963686);
   hnueCCinFV_stack_9->SetEntries(85);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);
   hmcerror__2->SetBinContent(1,24.66586);
   hmcerror__2->SetBinContent(2,71.68771);
   hmcerror__2->SetBinContent(3,95.82211);
   hmcerror__2->SetBinContent(4,86.28023);
   hmcerror__2->SetBinContent(5,69.73195);
   hmcerror__2->SetBinContent(6,57.31494);
   hmcerror__2->SetBinContent(7,43.29631);
   hmcerror__2->SetBinContent(8,33.83374);
   hmcerror__2->SetBinContent(9,27.06217);
   hmcerror__2->SetBinContent(10,21.02499);
   hmcerror__2->SetBinContent(11,12.63547);
   hmcerror__2->SetBinContent(12,10.35812);
   hmcerror__2->SetBinContent(13,8.31057);
   hmcerror__2->SetBinContent(14,7.191526);
   hmcerror__2->SetBinContent(15,5.441835);
   hmcerror__2->SetBinContent(16,3.945);
   hmcerror__2->SetBinContent(17,4.378896);
   hmcerror__2->SetBinContent(18,3.532423);
   hmcerror__2->SetBinContent(19,3.312491);
   hmcerror__2->SetBinContent(20,2.982311);
   hmcerror__2->SetBinContent(21,2.427013);
   hmcerror__2->SetBinContent(22,2.324428);
   hmcerror__2->SetBinContent(23,1.863661);
   hmcerror__2->SetBinContent(24,1.220324);
   hmcerror__2->SetBinContent(25,1.559029);
   hmcerror__2->SetBinContent(26,28.83471);
   hmcerror__2->SetBinError(1,7.202731);
   hmcerror__2->SetBinError(2,15.4716);
   hmcerror__2->SetBinError(3,19.5114);
   hmcerror__2->SetBinError(4,19.7803);
   hmcerror__2->SetBinError(5,16.13443);
   hmcerror__2->SetBinError(6,13.67875);
   hmcerror__2->SetBinError(7,11.47354);
   hmcerror__2->SetBinError(8,9.372829);
   hmcerror__2->SetBinError(9,6.872386);
   hmcerror__2->SetBinError(10,5.8516);
   hmcerror__2->SetBinError(11,4.22702);
   hmcerror__2->SetBinError(12,6.093654);
   hmcerror__2->SetBinError(13,3.050705);
   hmcerror__2->SetBinError(14,3.20852);
   hmcerror__2->SetBinError(15,2.790555);
   hmcerror__2->SetBinError(16,1.827551);
   hmcerror__2->SetBinError(17,2.326194);
   hmcerror__2->SetBinError(18,2.212181);
   hmcerror__2->SetBinError(19,1.750071);
   hmcerror__2->SetBinError(20,2.164252);
   hmcerror__2->SetBinError(21,1.617279);
   hmcerror__2->SetBinError(22,1.550738);
   hmcerror__2->SetBinError(23,1.226673);
   hmcerror__2->SetBinError(24,0.9590575);
   hmcerror__2->SetBinError(25,1.191511);
   hmcerror__2->SetBinError(26,8.536164);
   hmcerror__2->SetEntries(622.1566);

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
   
   Double_t _fx3001[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3001[25] = {
   22,
   58,
   74,
   67,
   55,
   52,
   31,
   22,
   23,
   15,
   16,
   12,
   8,
   7,
   4,
   6,
   2,
   0,
   1,
   4,
   4,
   3,
   1,
   1,
   1};
   Double_t _felx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3001[25] = {
   4.8417,
   7.7446,
   8.7275,
   8.3119,
   7.546,
   7.3419,
   5.7094,
   4.8417,
   4.9457,
   4.0385,
   4.1628,
   3.64022,
   3.0307,
   2.85954,
   2.29683,
   2.67925,
   2,
   0,
   1,
   2.29683,
   2.29683,
   2.143368,
   1,
   1,
   1};
   Double_t _fehx3001[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3001[25] = {
   4.6299,
   7.5415,
   8.5253,
   8.1094,
   7.3425,
   7.1381,
   5.5017,
   4.6299,
   4.7346,
   3.8197,
   3.9454,
   3.4155,
   2.7896,
   2.61053,
   1.98186,
   2.41858,
   1.51917,
   1.1478,
   1.35971,
   1.98186,
   1.98186,
   1.72422,
   1.35971,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(90.77783);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.67/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 489.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 45.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 59.6","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  309.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 100.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 24.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 42.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3002[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3002[25] = {
   0.2920121,
   0.2158194,
   0.203621,
   0.2292565,
   0.2313779,
   0.2386594,
   0.2650005,
   0.2770261,
   0.2539481,
   0.2783164,
   0.334536,
   0.5882971,
   0.3670873,
   0.4461528,
   0.5127967,
   0.4632574,
   0.5312285,
   0.6262505,
   0.5283249,
   0.7256964,
   0.6663661,
   0.6671483,
   0.6582061,
   0.7859041,
   0.7642646};
   Double_t _fehx3002[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3002[25] = {
   0.2920121,
   0.2158194,
   0.203621,
   0.2292565,
   0.2313779,
   0.2386594,
   0.2650005,
   0.2770261,
   0.2539481,
   0.2783164,
   0.334536,
   0.5882971,
   0.3670873,
   0.4461528,
   0.5127967,
   0.4632574,
   0.5312285,
   0.6262505,
   0.5283249,
   0.7256964,
   0.6663661,
   0.6671483,
   0.6582061,
   0.7859041,
   0.7642646};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} momentum [MeV/c]");
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
   
   Double_t _fx3003[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3003[25] = {
   0.1797672,
   0.1773407,
   0.1921306,
   0.2129502,
   0.2159232,
   0.2159007,
   0.2094462,
   0.2077127,
   0.1900816,
   0.1903224,
   0.1940968,
   0.2045443,
   0.1939022,
   0.2062219,
   0.2254347,
   0.2361857,
   0.2233637,
   0.2496495,
   0.2209411,
   0.2694923,
   0.2749605,
   0.2536391,
   0.3064539,
   0.3448914,
   0.3203979};
   Double_t _fehx3003[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3003[25] = {
   0.1797672,
   0.1773407,
   0.1921306,
   0.2129502,
   0.2159232,
   0.2159007,
   0.2094462,
   0.2077127,
   0.1900816,
   0.1903224,
   0.1940968,
   0.2045443,
   0.1939022,
   0.2062219,
   0.2254347,
   0.2361857,
   0.2233637,
   0.2496495,
   0.2209411,
   0.2694923,
   0.2749605,
   0.2536391,
   0.3064539,
   0.3448914,
   0.3203979};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   
   Double_t _fx3004[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3004[25] = {
   0.891921,
   0.8090648,
   0.7722643,
   0.7765394,
   0.7887346,
   0.9072678,
   0.7159963,
   0.6502386,
   0.8498948,
   0.7134368,
   1.266277,
   1.158511,
   0.9626295,
   0.9733678,
   0.7350461,
   1.520912,
   0.4567362,
   0,
   0.3018876,
   1.341242,
   1.648116,
   1.29064,
   0.5365782,
   0.8194546,
   0.6414249};
   Double_t _felx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3004[25] = {
   0.1962915,
   0.1080325,
   0.09108023,
   0.09633609,
   0.1082144,
   0.1280975,
   0.131868,
   0.1431027,
   0.1827533,
   0.192081,
   0.3294536,
   0.3514362,
   0.3646802,
   0.3976263,
   0.422069,
   0.6791508,
   0.4567362,
   0,
   0.3018876,
   0.7701511,
   0.9463607,
   0.9221057,
   0.5365782,
   0.8194546,
   0.6414249};
   Double_t _fehx3004[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3004[25] = {
   0.1877048,
   0.1051993,
   0.08897007,
   0.09398909,
   0.1052961,
   0.1245417,
   0.1270709,
   0.1368427,
   0.1749527,
   0.1816743,
   0.312248,
   0.3297412,
   0.3356689,
   0.3630008,
   0.3641896,
   0.6130748,
   0.3469299,
   0.3249328,
   0.4104796,
   0.6645384,
   0.8165839,
   0.7417826,
   0.7295908,
   1.114221,
   0.8721518};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.71117);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
