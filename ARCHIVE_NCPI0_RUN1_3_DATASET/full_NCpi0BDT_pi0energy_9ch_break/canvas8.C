#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sun Jun  5 00:36:32 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
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
   pad1->Range(-184.6154,-3.873933,1353.846,428.3754);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hmc__22->SetBinContent(1,9.030496);
   hmc__22->SetBinContent(2,58.06474);
   hmc__22->SetBinContent(3,143.1608);
   hmc__22->SetBinContent(4,193.6966);
   hmc__22->SetBinContent(5,157.6232);
   hmc__22->SetBinContent(6,119.9082);
   hmc__22->SetBinContent(7,86.61998);
   hmc__22->SetBinContent(8,55.4528);
   hmc__22->SetBinContent(9,35.84391);
   hmc__22->SetBinContent(10,23.28338);
   hmc__22->SetBinContent(11,17.66175);
   hmc__22->SetBinContent(12,10.54795);
   hmc__22->SetBinContent(13,6.955521);
   hmc__22->SetBinContent(14,5.742226);
   hmc__22->SetBinContent(15,3.644439);
   hmc__22->SetBinContent(16,2.855127);
   hmc__22->SetBinContent(17,1.793734);
   hmc__22->SetBinContent(18,1.953579);
   hmc__22->SetBinContent(19,1.851994);
   hmc__22->SetBinContent(20,0.4758834);
   hmc__22->SetBinContent(21,6.457346);
   hmc__22->SetBinError(1,10.21601);
   hmc__22->SetBinError(2,15.30051);
   hmc__22->SetBinError(3,27.25514);
   hmc__22->SetBinError(4,36.38152);
   hmc__22->SetBinError(5,32.10121);
   hmc__22->SetBinError(6,22.42984);
   hmc__22->SetBinError(7,19.78485);
   hmc__22->SetBinError(8,15.55142);
   hmc__22->SetBinError(9,10.06874);
   hmc__22->SetBinError(10,6.197006);
   hmc__22->SetBinError(11,6.077975);
   hmc__22->SetBinError(12,6.136736);
   hmc__22->SetBinError(13,4.826503);
   hmc__22->SetBinError(14,2.674914);
   hmc__22->SetBinError(15,2.743854);
   hmc__22->SetBinError(16,2.233117);
   hmc__22->SetBinError(17,1.870388);
   hmc__22->SetBinError(18,1.970594);
   hmc__22->SetBinError(19,1.497575);
   hmc__22->SetBinError(20,1.136345);
   hmc__22->SetBinError(21,3.714245);
   hmc__22->SetMinimum(-3.873933);
   hmc__22->SetMaximum(406.7629);
   hmc__22->SetEntries(926.8397);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,1200);
   hs8_stack_8->SetMinimum(-3.262303e-08);
   hs8_stack_8->SetMaximum(203.3815);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,1.425699);
   hbadmatch_stack_1->SetBinContent(2,4.057845);
   hbadmatch_stack_1->SetBinContent(3,4.779136);
   hbadmatch_stack_1->SetBinContent(4,8.1834);
   hbadmatch_stack_1->SetBinContent(5,5.943641);
   hbadmatch_stack_1->SetBinContent(6,1.528875);
   hbadmatch_stack_1->SetBinContent(7,3.096266);
   hbadmatch_stack_1->SetBinContent(8,0.5884556);
   hbadmatch_stack_1->SetBinContent(9,1.663932);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.592916);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.128365);
   hbadmatch_stack_1->SetBinError(2,1.05293);
   hbadmatch_stack_1->SetBinError(3,1.136378);
   hbadmatch_stack_1->SetBinError(4,1.489022);
   hbadmatch_stack_1->SetBinError(5,1.420458);
   hbadmatch_stack_1->SetBinError(6,0.65832);
   hbadmatch_stack_1->SetBinError(7,0.9663696);
   hbadmatch_stack_1->SetBinError(8,0.3397478);
   hbadmatch_stack_1->SetBinError(9,0.6518637);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.4423482);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1532;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,21.02888);
   hext_stack_2->SetBinContent(3,37.92236);
   hext_stack_2->SetBinContent(4,46.42498);
   hext_stack_2->SetBinContent(5,35.72654);
   hext_stack_2->SetBinContent(6,25.06452);
   hext_stack_2->SetBinContent(7,12.62164);
   hext_stack_2->SetBinContent(8,5.979242);
   hext_stack_2->SetBinContent(9,2.517386);
   hext_stack_2->SetBinContent(10,4.785396);
   hext_stack_2->SetBinContent(11,2.25642);
   hext_stack_2->SetBinContent(13,0.7309963);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,3.119137);
   hext_stack_2->SetBinError(3,3.942138);
   hext_stack_2->SetBinError(4,4.62046);
   hext_stack_2->SetBinError(5,4.049138);
   hext_stack_2->SetBinError(6,3.422806);
   hext_stack_2->SetBinError(7,2.39096);
   hext_stack_2->SetBinError(8,1.718811);
   hext_stack_2->SetBinError(9,0.9575503);
   hext_stack_2->SetBinError(10,1.410625);
   hext_stack_2->SetBinError(11,1.067257);
   hext_stack_2->SetBinError(13,0.5201503);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetEntries(479);

   ci = 1533;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,0.4950385);
   hdirt_stack_3->SetBinContent(2,1.548639);
   hdirt_stack_3->SetBinContent(3,5.666567);
   hdirt_stack_3->SetBinContent(4,5.13192);
   hdirt_stack_3->SetBinContent(5,1.738564);
   hdirt_stack_3->SetBinContent(6,1.286178);
   hdirt_stack_3->SetBinContent(7,1.922991);
   hdirt_stack_3->SetBinContent(8,0.56477);
   hdirt_stack_3->SetBinContent(9,0.8905285);
   hdirt_stack_3->SetBinError(1,0.2933304);
   hdirt_stack_3->SetBinError(2,0.6227099);
   hdirt_stack_3->SetBinError(3,1.248007);
   hdirt_stack_3->SetBinError(4,1.12048);
   hdirt_stack_3->SetBinError(5,0.7283272);
   hdirt_stack_3->SetBinError(6,0.6316764);
   hdirt_stack_3->SetBinError(7,1.058073);
   hdirt_stack_3->SetBinError(8,0.4322229);
   hdirt_stack_3->SetBinError(9,0.5523168);
   hdirt_stack_3->SetEntries(82);

   ci = 1534;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,2.668769);
   houtFV_stack_4->SetBinContent(2,17.43015);
   houtFV_stack_4->SetBinContent(3,39.90978);
   houtFV_stack_4->SetBinContent(4,52.07772);
   houtFV_stack_4->SetBinContent(5,29.4299);
   houtFV_stack_4->SetBinContent(6,20.01765);
   houtFV_stack_4->SetBinContent(7,15.83426);
   houtFV_stack_4->SetBinContent(8,9.074378);
   houtFV_stack_4->SetBinContent(9,5.311306);
   houtFV_stack_4->SetBinContent(10,3.734336);
   houtFV_stack_4->SetBinContent(11,4.007907);
   houtFV_stack_4->SetBinContent(12,1.65886);
   houtFV_stack_4->SetBinContent(13,0.7319179);
   houtFV_stack_4->SetBinContent(14,0.7319179);
   houtFV_stack_4->SetBinContent(15,0.441903);
   houtFV_stack_4->SetBinContent(16,0.2090315);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.2456195);
   houtFV_stack_4->SetBinError(1,0.7920784);
   houtFV_stack_4->SetBinError(2,2.09516);
   houtFV_stack_4->SetBinError(3,3.296719);
   houtFV_stack_4->SetBinError(4,3.809633);
   houtFV_stack_4->SetBinError(5,2.74166);
   houtFV_stack_4->SetBinError(6,2.262009);
   houtFV_stack_4->SetBinError(7,2.044289);
   houtFV_stack_4->SetBinError(8,1.4589);
   houtFV_stack_4->SetBinError(9,1.205769);
   houtFV_stack_4->SetBinError(10,1.00858);
   houtFV_stack_4->SetBinError(11,0.9714844);
   houtFV_stack_4->SetBinError(12,0.650338);
   houtFV_stack_4->SetBinError(13,0.438694);
   houtFV_stack_4->SetBinError(14,0.438694);
   houtFV_stack_4->SetBinError(15,0.441903);
   houtFV_stack_4->SetBinError(16,0.2090315);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(21,0.2456195);
   houtFV_stack_4->SetEntries(862);

   ci = 1535;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8511223);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.909666);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.370348);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.617208);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.84008);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4184998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9346539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.739354);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3588378);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5141402);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5200361);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3710135);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.472111);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1080562);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3135935);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3047819);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1427183);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1536;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.194636);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1376284);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1537;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.5439);
   hNCpi0inFVres_stack_7->SetBinContent(3,19.85675);
   hNCpi0inFVres_stack_7->SetBinContent(4,24.60738);
   hNCpi0inFVres_stack_7->SetBinContent(5,25.10926);
   hNCpi0inFVres_stack_7->SetBinContent(6,20.15965);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.8875);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.16344);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.538922);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.084874);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.440926);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.463426);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.714694);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.4178359);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.418668);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3347998);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2504359);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.432286);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7277724);
   hNCpi0inFVres_stack_7->SetBinError(3,1.507711);
   hNCpi0inFVres_stack_7->SetBinError(4,1.545822);
   hNCpi0inFVres_stack_7->SetBinError(5,1.620838);
   hNCpi0inFVres_stack_7->SetBinError(6,1.440019);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9620183);
   hNCpi0inFVres_stack_7->SetBinError(8,1.011328);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8308622);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6461883);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4683861);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3743209);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4241235);
   hNCpi0inFVres_stack_7->SetBinError(14,0.158647);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2107962);
   hNCpi0inFVres_stack_7->SetBinError(16,0.09664838);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1431726);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2270916);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1538;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.225944);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.412194);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.603099);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.75481);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.986724);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.292048);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.26182);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.509184);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.909162);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.436526);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8790222);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6701043);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3485861);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3744943);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4464761);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7121848);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7083495);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6235562);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5900425);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5677429);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5364907);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4075087);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4374504);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3599208);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3419921);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2218905);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2404119);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1539;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1540;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1541;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,0.9269427);
   hCCpi0inFV_stack_11->SetBinContent(2,4.39996);
   hCCpi0inFV_stack_11->SetBinContent(3,19.45909);
   hCCpi0inFV_stack_11->SetBinContent(4,28.75121);
   hCCpi0inFV_stack_11->SetBinContent(5,31.6602);
   hCCpi0inFV_stack_11->SetBinContent(6,33.75517);
   hCCpi0inFV_stack_11->SetBinContent(7,27.22924);
   hCCpi0inFV_stack_11->SetBinContent(8,17.49336);
   hCCpi0inFV_stack_11->SetBinContent(9,12.34299);
   hCCpi0inFV_stack_11->SetBinContent(10,5.861845);
   hCCpi0inFV_stack_11->SetBinContent(11,5.371703);
   hCCpi0inFV_stack_11->SetBinContent(12,4.981653);
   hCCpi0inFV_stack_11->SetBinContent(13,1.712114);
   hCCpi0inFV_stack_11->SetBinContent(14,2.107235);
   hCCpi0inFV_stack_11->SetBinContent(15,1.610679);
   hCCpi0inFV_stack_11->SetBinContent(16,1.515398);
   hCCpi0inFV_stack_11->SetBinContent(17,0.9269427);
   hCCpi0inFV_stack_11->SetBinContent(18,0.3401776);
   hCCpi0inFV_stack_11->SetBinContent(19,0.7868615);
   hCCpi0inFV_stack_11->SetBinContent(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(21,1.570342);
   hCCpi0inFV_stack_11->SetBinError(1,0.4800908);
   hCCpi0inFV_stack_11->SetBinError(2,1.076116);
   hCCpi0inFV_stack_11->SetBinError(3,2.239548);
   hCCpi0inFV_stack_11->SetBinError(4,2.711569);
   hCCpi0inFV_stack_11->SetBinError(5,2.887928);
   hCCpi0inFV_stack_11->SetBinError(6,2.953639);
   hCCpi0inFV_stack_11->SetBinError(7,2.631099);
   hCCpi0inFV_stack_11->SetBinError(8,2.091381);
   hCCpi0inFV_stack_11->SetBinError(9,1.736163);
   hCCpi0inFV_stack_11->SetBinError(10,1.185297);
   hCCpi0inFV_stack_11->SetBinError(11,1.160549);
   hCCpi0inFV_stack_11->SetBinError(12,1.1273);
   hCCpi0inFV_stack_11->SetBinError(13,0.6201715);
   hCCpi0inFV_stack_11->SetBinError(14,0.6801976);
   hCCpi0inFV_stack_11->SetBinError(15,0.6806271);
   hCCpi0inFV_stack_11->SetBinError(16,0.588146);
   hCCpi0inFV_stack_11->SetBinError(17,0.4800908);
   hCCpi0inFV_stack_11->SetBinError(18,0.3401776);
   hCCpi0inFV_stack_11->SetBinError(19,0.3934307);
   hCCpi0inFV_stack_11->SetBinError(20,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(21,0.5552036);
   hCCpi0inFV_stack_11->SetEntries(859);

   ci = 1542;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs8->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(2,0.9835768);
   hNCinFV_stack_12->SetBinContent(3,1.713804);
   hNCinFV_stack_12->SetBinContent(4,2.287653);
   hNCinFV_stack_12->SetBinContent(5,2.835772);
   hNCinFV_stack_12->SetBinContent(6,1.662242);
   hNCinFV_stack_12->SetBinContent(7,1.513708);
   hNCinFV_stack_12->SetBinContent(8,1.465526);
   hNCinFV_stack_12->SetBinContent(9,0.8770706);
   hNCinFV_stack_12->SetBinContent(10,0.3917402);
   hNCinFV_stack_12->SetBinContent(11,0.3934307);
   hNCinFV_stack_12->SetBinContent(12,0.5884556);
   hNCinFV_stack_12->SetBinContent(14,0.1967154);
   hNCinFV_stack_12->SetBinError(2,0.4398689);
   hNCinFV_stack_12->SetBinError(3,0.6207051);
   hNCinFV_stack_12->SetBinError(4,0.8326886);
   hNCinFV_stack_12->SetBinError(5,0.808577);
   hNCinFV_stack_12->SetBinError(6,0.6513556);
   hNCinFV_stack_12->SetBinError(7,0.5875827);
   hNCinFV_stack_12->SetBinError(8,0.6209405);
   hNCinFV_stack_12->SetBinError(9,0.5197486);
   hNCinFV_stack_12->SetBinError(10,0.2770047);
   hNCinFV_stack_12->SetBinError(11,0.2781975);
   hNCinFV_stack_12->SetBinError(12,0.3397478);
   hNCinFV_stack_12->SetBinError(14,0.1967154);
   hNCinFV_stack_12->SetEntries(65);

   ci = 1543;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,1.435039);
   hnumuCCinFV_stack_13->SetBinContent(2,2.720622);
   hnumuCCinFV_stack_13->SetBinContent(3,9.891155);
   hnumuCCinFV_stack_13->SetBinContent(4,18.5801);
   hnumuCCinFV_stack_13->SetBinContent(5,17.69579);
   hnumuCCinFV_stack_13->SetBinContent(6,10.77421);
   hnumuCCinFV_stack_13->SetBinContent(7,7.962163);
   hnumuCCinFV_stack_13->SetBinContent(8,5.994081);
   hnumuCCinFV_stack_13->SetBinContent(9,1.836606);
   hnumuCCinFV_stack_13->SetBinContent(10,1.436499);
   hnumuCCinFV_stack_13->SetBinContent(11,1.000622);
   hnumuCCinFV_stack_13->SetBinContent(12,0.3900497);
   hnumuCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(14,0.5352025);
   hnumuCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(18,0.4498371);
   hnumuCCinFV_stack_13->SetBinContent(21,0.5931345);
   hnumuCCinFV_stack_13->SetBinError(1,1.219324);
   hnumuCCinFV_stack_13->SetBinError(2,0.8529368);
   hnumuCCinFV_stack_13->SetBinError(3,1.655132);
   hnumuCCinFV_stack_13->SetBinError(4,2.296857);
   hnumuCCinFV_stack_13->SetBinError(5,3.118144);
   hnumuCCinFV_stack_13->SetBinError(6,2.433864);
   hnumuCCinFV_stack_13->SetBinError(7,1.489844);
   hnumuCCinFV_stack_13->SetBinError(8,1.269469);
   hnumuCCinFV_stack_13->SetBinError(9,0.613988);
   hnumuCCinFV_stack_13->SetBinError(10,0.6152704);
   hnumuCCinFV_stack_13->SetBinError(11,0.5348304);
   hnumuCCinFV_stack_13->SetBinError(12,0.2758068);
   hnumuCCinFV_stack_13->SetBinError(13,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(14,0.3921167);
   hnumuCCinFV_stack_13->SetBinError(17,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(18,0.3205738);
   hnumuCCinFV_stack_13->SetBinError(21,0.4433125);
   hnumuCCinFV_stack_13->SetEntries(320);

   ci = 1544;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(3,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_14->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,0.2463303);
   hnueCCinFV_stack_14->SetBinContent(16,0.488997);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(21,2.065962);
   hnueCCinFV_stack_14->SetBinError(3,0.2770047);
   hnueCCinFV_stack_14->SetBinError(5,0.3025491);
   hnueCCinFV_stack_14->SetBinError(7,0.1967154);
   hnueCCinFV_stack_14->SetBinError(8,0.2781975);
   hnueCCinFV_stack_14->SetBinError(9,0.2781975);
   hnueCCinFV_stack_14->SetBinError(11,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.2463303);
   hnueCCinFV_stack_14->SetBinError(16,0.488997);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(21,0.9741362);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1545;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnueCCinFV_stack_14,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__23->SetBinContent(1,9.030496);
   hmcerror__23->SetBinContent(2,58.06474);
   hmcerror__23->SetBinContent(3,143.1608);
   hmcerror__23->SetBinContent(4,193.6966);
   hmcerror__23->SetBinContent(5,157.6232);
   hmcerror__23->SetBinContent(6,119.9082);
   hmcerror__23->SetBinContent(7,86.61998);
   hmcerror__23->SetBinContent(8,55.4528);
   hmcerror__23->SetBinContent(9,35.84391);
   hmcerror__23->SetBinContent(10,23.28338);
   hmcerror__23->SetBinContent(11,17.66175);
   hmcerror__23->SetBinContent(12,10.54795);
   hmcerror__23->SetBinContent(13,6.955521);
   hmcerror__23->SetBinContent(14,5.742226);
   hmcerror__23->SetBinContent(15,3.644439);
   hmcerror__23->SetBinContent(16,2.855127);
   hmcerror__23->SetBinContent(17,1.793734);
   hmcerror__23->SetBinContent(18,1.953579);
   hmcerror__23->SetBinContent(19,1.851994);
   hmcerror__23->SetBinContent(20,0.4758834);
   hmcerror__23->SetBinContent(21,6.457346);
   hmcerror__23->SetBinError(1,10.21601);
   hmcerror__23->SetBinError(2,15.30051);
   hmcerror__23->SetBinError(3,27.25514);
   hmcerror__23->SetBinError(4,36.38152);
   hmcerror__23->SetBinError(5,32.10121);
   hmcerror__23->SetBinError(6,22.42984);
   hmcerror__23->SetBinError(7,19.78485);
   hmcerror__23->SetBinError(8,15.55142);
   hmcerror__23->SetBinError(9,10.06874);
   hmcerror__23->SetBinError(10,6.197006);
   hmcerror__23->SetBinError(11,6.077975);
   hmcerror__23->SetBinError(12,6.136736);
   hmcerror__23->SetBinError(13,4.826503);
   hmcerror__23->SetBinError(14,2.674914);
   hmcerror__23->SetBinError(15,2.743854);
   hmcerror__23->SetBinError(16,2.233117);
   hmcerror__23->SetBinError(17,1.870388);
   hmcerror__23->SetBinError(18,1.970594);
   hmcerror__23->SetBinError(19,1.497575);
   hmcerror__23->SetBinError(20,1.136345);
   hmcerror__23->SetBinError(21,3.714245);
   hmcerror__23->SetEntries(926.8397);

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
   
   Double_t _fx3029[20] = {
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
   1170};
   Double_t _fy3029[20] = {
   4,
   43,
   158,
   177,
   152,
   115,
   62,
   61,
   30,
   26,
   16,
   11,
   7,
   5,
   4,
   1,
   3,
   0,
   1,
   3};
   Double_t _felx3029[20] = {
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
   Double_t _fely3029[20] = {
   2.29683,
   6.6917,
   12.56981,
   13.30413,
   12.32883,
   10.72381,
   8.0018,
   7.9383,
   5.6197,
   5.2453,
   4.1628,
   3.4975,
   2.85954,
   2.48995,
   2.29683,
   1,
   2.143368,
   0,
   1,
   2.143368};
   Double_t _fehx3029[20] = {
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
   Double_t _fehy3029[20] = {
   1.98186,
   6.4868,
   12.56981,
   13.30413,
   12.32883,
   10.72381,
   7.7989,
   7.7354,
   5.4117,
   5.0358,
   3.9454,
   3.27,
   2.61053,
   2.21064,
   1.98186,
   1.35971,
   1.72422,
   1.1478,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1320);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(209.3345);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 879.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

   ci = 1532;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 198.7","F");

   ci = 1533;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1534;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.1","F");

   ci = 1536;
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

   ci = 1537;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.4","F");

   ci = 1538;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.8","F");

   ci = 1539;
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

   ci = 1540;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1541;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 201.4","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 14.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 81.4","F");

   ci = 1544;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 2.8","F");

   ci = 1545;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3030[20] = {
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
   1170};
   Double_t _fy3030[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[20] = {
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
   Double_t _fely3030[20] = {
   1.131279,
   0.2635078,
   0.1903813,
   0.1878273,
   0.2036579,
   0.1870584,
   0.2284098,
   0.2804442,
   0.2809052,
   0.2661557,
   0.344132,
   0.5817942,
   0.6939096,
   0.4658323,
   0.752888,
   0.7821428,
   1.042734,
   1.00871,
   0.8086284,
   2.387865};
   Double_t _fehx3030[20] = {
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
   Double_t _fehy3030[20] = {
   1.131279,
   0.2635078,
   0.1903813,
   0.1878273,
   0.2036579,
   0.1870584,
   0.2284098,
   0.2804442,
   0.2809052,
   0.2661557,
   0.344132,
   0.5817942,
   0.6939096,
   0.4658323,
   0.752888,
   0.7821428,
   1.042734,
   1.00871,
   0.8086284,
   2.387865};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1320);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3031[20] = {
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
   1170};
   Double_t _fy3031[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[20] = {
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
   Double_t _fely3031[20] = {
   0.3724051,
   0.158292,
   0.1486575,
   0.145826,
   0.1667575,
   0.1694334,
   0.1702606,
   0.1942325,
   0.2110406,
   0.2028995,
   0.2325181,
   0.2897833,
   0.2738082,
   0.291974,
   0.3613816,
   0.4091339,
   0.5307136,
   0.4561107,
   0.4606063,
   1.067315};
   Double_t _fehx3031[20] = {
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
   Double_t _fehy3031[20] = {
   0.3724051,
   0.158292,
   0.1486575,
   0.145826,
   0.1667575,
   0.1694334,
   0.1702606,
   0.1942325,
   0.2110406,
   0.2028995,
   0.2325181,
   0.2897833,
   0.2738082,
   0.291974,
   0.3613816,
   0.4091339,
   0.5307136,
   0.4561107,
   0.4606063,
   1.067315};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1320);
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
   
   Double_t _fx3032[20] = {
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
   1170};
   Double_t _fy3032[20] = {
   0.4429436,
   0.7405527,
   1.103654,
   0.9138001,
   0.9643251,
   0.9590669,
   0.7157702,
   1.100035,
   0.8369622,
   1.116676,
   0.9059123,
   1.042857,
   1.006395,
   0.8707425,
   1.097563,
   0.3502472,
   1.672489,
   0,
   0.5399587,
   6.304065};
   Double_t _felx3032[20] = {
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
   Double_t _fely3032[20] = {
   0.2543415,
   0.1152455,
   0.08780202,
   0.06868542,
   0.0782171,
   0.08943345,
   0.09237823,
   0.1431542,
   0.1567825,
   0.2252808,
   0.2356957,
   0.331581,
   0.411118,
   0.4336211,
   0.6302287,
   0.3502472,
   1.19492,
   0,
   0.5399587,
   4.503977};
   Double_t _fehx3032[20] = {
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
   Double_t _fehy3032[20] = {
   0.219463,
   0.1117167,
   0.08780202,
   0.06868542,
   0.0782171,
   0.08943345,
   0.09003581,
   0.1394952,
   0.1509796,
   0.216283,
   0.2233866,
   0.3100129,
   0.3753177,
   0.3849796,
   0.5438039,
   0.4762346,
   0.9612461,
   0.5875371,
   0.7341872,
   3.623198};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1320);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(10.91999);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_energy_all",20,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
