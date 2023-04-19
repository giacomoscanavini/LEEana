#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 13:44:47 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-6.499235,451.2821,718.6785);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__13->SetBinContent(1,85.35439);
   hmc__13->SetBinContent(2,84.80743);
   hmc__13->SetBinContent(3,85.06032);
   hmc__13->SetBinContent(4,85.8083);
   hmc__13->SetBinContent(5,94.7327);
   hmc__13->SetBinContent(6,108.9458);
   hmc__13->SetBinContent(7,117.9611);
   hmc__13->SetBinContent(8,138.2581);
   hmc__13->SetBinContent(9,171.5902);
   hmc__13->SetBinContent(10,236.6715);
   hmc__13->SetBinContent(11,305.2408);
   hmc__13->SetBinContent(12,324.9617);
   hmc__13->SetBinContent(13,247.0415);
   hmc__13->SetBinContent(14,123.5138);
   hmc__13->SetBinContent(15,50.57195);
   hmc__13->SetBinContent(16,31.91781);
   hmc__13->SetBinContent(17,21.02248);
   hmc__13->SetBinContent(18,21.1335);
   hmc__13->SetBinContent(19,15.35961);
   hmc__13->SetBinContent(20,16.25474);
   hmc__13->SetBinContent(21,12.23369);
   hmc__13->SetBinContent(22,10.15751);
   hmc__13->SetBinContent(23,9.907142);
   hmc__13->SetBinContent(24,9.925487);
   hmc__13->SetBinContent(25,7.646102);
   hmc__13->SetBinContent(26,7.54925);
   hmc__13->SetBinContent(27,6.703335);
   hmc__13->SetBinContent(28,6.31797);
   hmc__13->SetBinContent(29,5.187904);
   hmc__13->SetBinContent(30,5.206131);
   hmc__13->SetBinContent(31,4.592026);
   hmc__13->SetBinContent(32,5.141988);
   hmc__13->SetBinContent(33,2.569241);
   hmc__13->SetBinContent(34,2.929623);
   hmc__13->SetBinContent(35,34.767);
   hmc__13->SetBinError(1,34.64567);
   hmc__13->SetBinError(2,26.57597);
   hmc__13->SetBinError(3,27.09181);
   hmc__13->SetBinError(4,26.13845);
   hmc__13->SetBinError(5,30.55442);
   hmc__13->SetBinError(6,37.69364);
   hmc__13->SetBinError(7,41.69021);
   hmc__13->SetBinError(8,54.9008);
   hmc__13->SetBinError(9,64.09285);
   hmc__13->SetBinError(10,99.06498);
   hmc__13->SetBinError(11,130.0966);
   hmc__13->SetBinError(12,139.5234);
   hmc__13->SetBinError(13,128.7458);
   hmc__13->SetBinError(14,77.63187);
   hmc__13->SetBinError(15,39.38465);
   hmc__13->SetBinError(16,14.02109);
   hmc__13->SetBinError(17,12.6653);
   hmc__13->SetBinError(18,12.6266);
   hmc__13->SetBinError(19,13.22842);
   hmc__13->SetBinError(20,12.1443);
   hmc__13->SetBinError(21,8.235032);
   hmc__13->SetBinError(22,8.376102);
   hmc__13->SetBinError(23,15.79956);
   hmc__13->SetBinError(24,12.04004);
   hmc__13->SetBinError(25,8.623238);
   hmc__13->SetBinError(26,9.874775);
   hmc__13->SetBinError(27,7.648952);
   hmc__13->SetBinError(28,11.51721);
   hmc__13->SetBinError(29,7.028638);
   hmc__13->SetBinError(30,6.289439);
   hmc__13->SetBinError(31,7.130816);
   hmc__13->SetBinError(32,6.02171);
   hmc__13->SetBinError(33,3.992989);
   hmc__13->SetBinError(34,4.243957);
   hmc__13->SetBinError(35,19.21288);
   hmc__13->SetMinimum(-6.499235);
   hmc__13->SetMaximum(682.4196);
   hmc__13->SetEntries(2462.59);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",34,0,400);
   hs5_stack_5->SetMinimum(-1.450578e-08);
   hs5_stack_5->SetMaximum(341.2098);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.720014);
   hbadmatch_stack_1->SetBinContent(2,2.400424);
   hbadmatch_stack_1->SetBinContent(3,2.567921);
   hbadmatch_stack_1->SetBinContent(4,2.288495);
   hbadmatch_stack_1->SetBinContent(5,2.103776);
   hbadmatch_stack_1->SetBinContent(6,3.167399);
   hbadmatch_stack_1->SetBinContent(7,3.030199);
   hbadmatch_stack_1->SetBinContent(8,3.598431);
   hbadmatch_stack_1->SetBinContent(9,4.772722);
   hbadmatch_stack_1->SetBinContent(10,6.102553);
   hbadmatch_stack_1->SetBinContent(11,4.959566);
   hbadmatch_stack_1->SetBinContent(12,4.982545);
   hbadmatch_stack_1->SetBinContent(13,3.758898);
   hbadmatch_stack_1->SetBinContent(14,1.020533);
   hbadmatch_stack_1->SetBinContent(15,1.301538);
   hbadmatch_stack_1->SetBinContent(16,1.692129);
   hbadmatch_stack_1->SetBinContent(17,0.5901461);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.5352025);
   hbadmatch_stack_1->SetBinContent(20,0.7731665);
   hbadmatch_stack_1->SetBinContent(22,0.5901461);
   hbadmatch_stack_1->SetBinContent(23,1.217248);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinContent(25,0.6360607);
   hbadmatch_stack_1->SetBinContent(26,0.5867651);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.4331311);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.7319179);
   hbadmatch_stack_1->SetBinError(1,0.9494969);
   hbadmatch_stack_1->SetBinError(2,0.7341742);
   hbadmatch_stack_1->SetBinError(3,0.7942064);
   hbadmatch_stack_1->SetBinError(4,0.8012195);
   hbadmatch_stack_1->SetBinError(5,0.7636627);
   hbadmatch_stack_1->SetBinError(6,0.9491218);
   hbadmatch_stack_1->SetBinError(7,0.8171192);
   hbadmatch_stack_1->SetBinError(8,0.9744497);
   hbadmatch_stack_1->SetBinError(9,1.164121);
   hbadmatch_stack_1->SetBinError(10,1.29924);
   hbadmatch_stack_1->SetBinError(11,1.181731);
   hbadmatch_stack_1->SetBinError(12,1.153996);
   hbadmatch_stack_1->SetBinError(13,1.366025);
   hbadmatch_stack_1->SetBinError(14,0.5892049);
   hbadmatch_stack_1->SetBinError(15,0.6005883);
   hbadmatch_stack_1->SetBinError(16,0.8138344);
   hbadmatch_stack_1->SetBinError(17,0.340721);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.3921167);
   hbadmatch_stack_1->SetBinError(20,0.4586746);
   hbadmatch_stack_1->SetBinError(22,0.340721);
   hbadmatch_stack_1->SetBinError(23,0.6211758);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetBinError(25,0.4822316);
   hbadmatch_stack_1->SetBinError(26,0.3387718);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.3075538);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.438694);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,5.008821);
   hext_stack_2->SetBinContent(2,9.801397);
   hext_stack_2->SetBinContent(3,10.4546);
   hext_stack_2->SetBinContent(4,8.332225);
   hext_stack_2->SetBinContent(5,8.510989);
   hext_stack_2->SetBinContent(6,6.228619);
   hext_stack_2->SetBinContent(7,5.918582);
   hext_stack_2->SetBinContent(8,6.724599);
   hext_stack_2->SetBinContent(9,8.268793);
   hext_stack_2->SetBinContent(10,9.319778);
   hext_stack_2->SetBinContent(11,10.19364);
   hext_stack_2->SetBinContent(12,11.32405);
   hext_stack_2->SetBinContent(13,12.77445);
   hext_stack_2->SetBinContent(14,5.511983);
   hext_stack_2->SetBinContent(15,1.704188);
   hext_stack_2->SetBinContent(16,3.088388);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,1.614806);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(35,2.510206);
   hext_stack_2->SetBinError(1,1.517329);
   hext_stack_2->SetBinError(2,2.022609);
   hext_stack_2->SetBinError(3,2.106309);
   hext_stack_2->SetBinError(4,1.936759);
   hext_stack_2->SetBinError(5,1.862475);
   hext_stack_2->SetBinError(6,1.672799);
   hext_stack_2->SetBinError(7,1.513479);
   hext_stack_2->SetBinError(8,1.680019);
   hext_stack_2->SetBinError(9,1.850315);
   hext_stack_2->SetBinError(10,1.914245);
   hext_stack_2->SetBinError(11,2.158396);
   hext_stack_2->SetBinError(12,2.30125);
   hext_stack_2->SetBinError(13,2.429598);
   hext_stack_2->SetBinError(14,1.457839);
   hext_stack_2->SetBinError(15,0.7656743);
   hext_stack_2->SetBinError(16,1.096541);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.8528597);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(35,1.057404);
   hext_stack_2->SetEntries(327);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.5682533);
   hdirt_stack_3->SetBinContent(4,0.9157523);
   hdirt_stack_3->SetBinContent(5,1.251234);
   hdirt_stack_3->SetBinContent(6,1.118847);
   hdirt_stack_3->SetBinContent(7,0.4247338);
   hdirt_stack_3->SetBinContent(8,0.5570828);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,1.384998);
   hdirt_stack_3->SetBinContent(12,0.6566868);
   hdirt_stack_3->SetBinContent(13,0.5824695);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.3394302);
   hdirt_stack_3->SetBinError(4,0.4237637);
   hdirt_stack_3->SetBinError(5,0.5729254);
   hdirt_stack_3->SetBinError(6,0.5458132);
   hdirt_stack_3->SetBinError(7,0.4247338);
   hdirt_stack_3->SetBinError(8,0.4028472);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.6047362);
   hdirt_stack_3->SetBinError(12,0.3791383);
   hdirt_stack_3->SetBinError(13,0.3417051);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetEntries(44);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,8.464265);
   houtFV_stack_4->SetBinContent(2,7.41231);
   houtFV_stack_4->SetBinContent(3,8.909899);
   houtFV_stack_4->SetBinContent(4,7.426207);
   houtFV_stack_4->SetBinContent(5,5.625052);
   houtFV_stack_4->SetBinContent(6,8.854469);
   houtFV_stack_4->SetBinContent(7,8.546866);
   houtFV_stack_4->SetBinContent(8,8.146841);
   houtFV_stack_4->SetBinContent(9,8.914263);
   houtFV_stack_4->SetBinContent(10,11.8458);
   houtFV_stack_4->SetBinContent(11,9.679763);
   houtFV_stack_4->SetBinContent(12,12.49425);
   houtFV_stack_4->SetBinContent(13,9.838479);
   houtFV_stack_4->SetBinContent(14,6.358994);
   houtFV_stack_4->SetBinContent(15,2.642437);
   houtFV_stack_4->SetBinContent(16,1.91221);
   houtFV_stack_4->SetBinContent(17,0.9303237);
   houtFV_stack_4->SetBinContent(18,0.9663737);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,1.371936);
   houtFV_stack_4->SetBinContent(23,0.7336084);
   houtFV_stack_4->SetBinContent(24,0.3900497);
   houtFV_stack_4->SetBinContent(26,0.5884556);
   houtFV_stack_4->SetBinContent(27,0.785171);
   houtFV_stack_4->SetBinContent(28,0.3401776);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinContent(32,0.1967154);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,0.6250385);
   houtFV_stack_4->SetBinError(1,1.480457);
   houtFV_stack_4->SetBinError(2,1.384032);
   houtFV_stack_4->SetBinError(3,1.551094);
   houtFV_stack_4->SetBinError(4,1.359364);
   houtFV_stack_4->SetBinError(5,1.161279);
   houtFV_stack_4->SetBinError(6,1.498286);
   houtFV_stack_4->SetBinError(7,1.454388);
   houtFV_stack_4->SetBinError(8,1.502247);
   houtFV_stack_4->SetBinError(9,1.482941);
   houtFV_stack_4->SetBinError(10,1.78141);
   houtFV_stack_4->SetBinError(11,1.545603);
   houtFV_stack_4->SetBinError(12,1.776602);
   houtFV_stack_4->SetBinError(13,1.527942);
   houtFV_stack_4->SetBinError(14,1.22349);
   houtFV_stack_4->SetBinError(15,0.7851269);
   houtFV_stack_4->SetBinError(16,0.6516395);
   houtFV_stack_4->SetBinError(17,0.4814682);
   houtFV_stack_4->SetBinError(18,0.4974153);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.5185478);
   houtFV_stack_4->SetBinError(23,0.4394482);
   houtFV_stack_4->SetBinError(24,0.2758068);
   houtFV_stack_4->SetBinError(26,0.3397478);
   houtFV_stack_4->SetBinError(27,0.3925882);
   houtFV_stack_4->SetBinError(28,0.3401776);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetBinError(32,0.1967154);
   houtFV_stack_4->SetBinError(34,4.828564e-09);
   houtFV_stack_4->SetBinError(35,0.4721721);
   houtFV_stack_4->SetEntries(584);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7528039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.35349);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.60459);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.57569);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.534003);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.394672);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.22744);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2593621);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4189688);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4272476);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3601903);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2984362);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3434108);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3821249);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,23.90309);
   hNCpi0inFVres_stack_7->SetBinContent(2,19.41217);
   hNCpi0inFVres_stack_7->SetBinContent(3,18.0977);
   hNCpi0inFVres_stack_7->SetBinContent(4,21.62574);
   hNCpi0inFVres_stack_7->SetBinContent(5,27.5095);
   hNCpi0inFVres_stack_7->SetBinContent(6,33.41205);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.9607);
   hNCpi0inFVres_stack_7->SetBinContent(8,60.8498);
   hNCpi0inFVres_stack_7->SetBinContent(9,80.86032);
   hNCpi0inFVres_stack_7->SetBinContent(10,124.7221);
   hNCpi0inFVres_stack_7->SetBinContent(11,176.4249);
   hNCpi0inFVres_stack_7->SetBinContent(12,190.6006);
   hNCpi0inFVres_stack_7->SetBinContent(13,130.2882);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.38507);
   hNCpi0inFVres_stack_7->SetBinContent(15,19.97151);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.665234);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.381564);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.030402);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.73388);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.42174);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.38039);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.380558);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.269622);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.9060901);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.823054);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.6141361);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.6277541);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.711454);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.5566719);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.404386);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.5719541);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.4746361);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.5583361);
   hNCpi0inFVres_stack_7->SetBinContent(35,1.632658);
   hNCpi0inFVres_stack_7->SetBinError(1,1.596827);
   hNCpi0inFVres_stack_7->SetBinError(2,1.429326);
   hNCpi0inFVres_stack_7->SetBinError(3,1.348167);
   hNCpi0inFVres_stack_7->SetBinError(4,1.518002);
   hNCpi0inFVres_stack_7->SetBinError(5,1.690518);
   hNCpi0inFVres_stack_7->SetBinError(6,1.888615);
   hNCpi0inFVres_stack_7->SetBinError(7,2.159868);
   hNCpi0inFVres_stack_7->SetBinError(8,2.499292);
   hNCpi0inFVres_stack_7->SetBinError(9,2.893555);
   hNCpi0inFVres_stack_7->SetBinError(10,3.634769);
   hNCpi0inFVres_stack_7->SetBinError(11,4.420418);
   hNCpi0inFVres_stack_7->SetBinError(12,4.464286);
   hNCpi0inFVres_stack_7->SetBinError(13,3.769013);
   hNCpi0inFVres_stack_7->SetBinError(14,2.526065);
   hNCpi0inFVres_stack_7->SetBinError(15,1.523356);
   hNCpi0inFVres_stack_7->SetBinError(16,1.03554);
   hNCpi0inFVres_stack_7->SetBinError(17,0.734515);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6237123);
   hNCpi0inFVres_stack_7->SetBinError(19,0.547561);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3153462);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3525453);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3962917);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3747542);
   hNCpi0inFVres_stack_7->SetBinError(24,0.3332495);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3085891);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2874767);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2996304);
   hNCpi0inFVres_stack_7->SetBinError(28,0.3035023);
   hNCpi0inFVres_stack_7->SetBinError(29,0.2062853);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2253713);
   hNCpi0inFVres_stack_7->SetBinError(31,0.2970212);
   hNCpi0inFVres_stack_7->SetBinError(32,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(33,0.2806257);
   hNCpi0inFVres_stack_7->SetBinError(34,0.2847561);
   hNCpi0inFVres_stack_7->SetBinError(35,0.4648418);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.132456);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.354);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.973938);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.434124);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.274204);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.361144);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.754656);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.67055);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.40168);
   hNCpi0inFVdis_stack_8->SetBinContent(10,18.30778);
   hNCpi0inFVdis_stack_8->SetBinContent(11,27.83053);
   hNCpi0inFVdis_stack_8->SetBinContent(12,30.98423);
   hNCpi0inFVdis_stack_8->SetBinContent(13,25.2863);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.59964);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.364874);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.467834);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.214902);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.906754);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9610579);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.8358399);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.181018);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.6134722);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.4180041);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(35,0.697004);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7014474);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7773363);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6332085);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.673277);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8223082);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8753817);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9715804);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.143513);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.152779);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.330561);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.723899);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.804533);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.649205);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.137171);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6909186);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5591665);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.484118);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3123499);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3055255);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2882649);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1086555);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3100573);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2406819);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.2563433);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,7.554217);
   hCCpi0inFV_stack_10->SetBinContent(2,8.402594);
   hCCpi0inFV_stack_10->SetBinContent(3,7.176474);
   hCCpi0inFV_stack_10->SetBinContent(4,10.79987);
   hCCpi0inFV_stack_10->SetBinContent(5,9.032983);
   hCCpi0inFV_stack_10->SetBinContent(6,15.75805);
   hCCpi0inFV_stack_10->SetBinContent(7,16.846);
   hCCpi0inFV_stack_10->SetBinContent(8,19.05305);
   hCCpi0inFV_stack_10->SetBinContent(9,28.35798);
   hCCpi0inFV_stack_10->SetBinContent(10,31.57934);
   hCCpi0inFV_stack_10->SetBinContent(11,37.51969);
   hCCpi0inFV_stack_10->SetBinContent(12,44.1935);
   hCCpi0inFV_stack_10->SetBinContent(13,38.13929);
   hCCpi0inFV_stack_10->SetBinContent(14,20.15529);
   hCCpi0inFV_stack_10->SetBinContent(15,10.42052);
   hCCpi0inFV_stack_10->SetBinContent(16,7.665632);
   hCCpi0inFV_stack_10->SetBinContent(17,6.247083);
   hCCpi0inFV_stack_10->SetBinContent(18,3.948172);
   hCCpi0inFV_stack_10->SetBinContent(19,4.394888);
   hCCpi0inFV_stack_10->SetBinContent(20,4.399352);
   hCCpi0inFV_stack_10->SetBinContent(21,4.101202);
   hCCpi0inFV_stack_10->SetBinContent(22,2.734337);
   hCCpi0inFV_stack_10->SetBinContent(23,1.605607);
   hCCpi0inFV_stack_10->SetBinContent(24,3.350278);
   hCCpi0inFV_stack_10->SetBinContent(25,3.462874);
   hCCpi0inFV_stack_10->SetBinContent(26,2.256083);
   hCCpi0inFV_stack_10->SetBinContent(27,1.467217);
   hCCpi0inFV_stack_10->SetBinContent(28,1.805704);
   hCCpi0inFV_stack_10->SetBinContent(29,1.410583);
   hCCpi0inFV_stack_10->SetBinContent(30,1.718881);
   hCCpi0inFV_stack_10->SetBinContent(31,1.0924);
   hCCpi0inFV_stack_10->SetBinContent(32,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(33,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(34,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(35,8.354318);
   hCCpi0inFV_stack_10->SetBinError(1,1.412864);
   hCCpi0inFV_stack_10->SetBinError(2,1.522181);
   hCCpi0inFV_stack_10->SetBinError(3,1.367624);
   hCCpi0inFV_stack_10->SetBinError(4,1.612262);
   hCCpi0inFV_stack_10->SetBinError(5,1.519802);
   hCCpi0inFV_stack_10->SetBinError(6,1.994569);
   hCCpi0inFV_stack_10->SetBinError(7,2.083804);
   hCCpi0inFV_stack_10->SetBinError(8,2.194176);
   hCCpi0inFV_stack_10->SetBinError(9,2.661466);
   hCCpi0inFV_stack_10->SetBinError(10,2.768691);
   hCCpi0inFV_stack_10->SetBinError(11,3.071463);
   hCCpi0inFV_stack_10->SetBinError(12,3.341977);
   hCCpi0inFV_stack_10->SetBinError(13,3.088632);
   hCCpi0inFV_stack_10->SetBinError(14,2.266276);
   hCCpi0inFV_stack_10->SetBinError(15,1.668549);
   hCCpi0inFV_stack_10->SetBinError(16,1.380326);
   hCCpi0inFV_stack_10->SetBinError(17,1.271358);
   hCCpi0inFV_stack_10->SetBinError(18,0.9818978);
   hCCpi0inFV_stack_10->SetBinError(19,1.075193);
   hCCpi0inFV_stack_10->SetBinError(20,0.979489);
   hCCpi0inFV_stack_10->SetBinError(21,0.9996711);
   hCCpi0inFV_stack_10->SetBinError(22,0.8558255);
   hCCpi0inFV_stack_10->SetBinError(23,0.679166);
   hCCpi0inFV_stack_10->SetBinError(24,0.9272259);
   hCCpi0inFV_stack_10->SetBinError(25,0.961023);
   hCCpi0inFV_stack_10->SetBinError(26,0.7776453);
   hCCpi0inFV_stack_10->SetBinError(27,0.6214735);
   hCCpi0inFV_stack_10->SetBinError(28,0.7080169);
   hCCpi0inFV_stack_10->SetBinError(29,0.6505627);
   hCCpi0inFV_stack_10->SetBinError(30,0.729854);
   hCCpi0inFV_stack_10->SetBinError(31,0.6334215);
   hCCpi0inFV_stack_10->SetBinError(32,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(33,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(34,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(35,1.441881);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,10.5921);
   hNCinFV_stack_11->SetBinContent(2,9.323288);
   hNCinFV_stack_11->SetBinContent(3,7.370741);
   hNCinFV_stack_11->SetBinContent(4,9.176445);
   hNCinFV_stack_11->SetBinContent(5,13.52653);
   hNCinFV_stack_11->SetBinContent(6,7.868988);
   hNCinFV_stack_11->SetBinContent(7,10.45709);
   hNCinFV_stack_11->SetBinContent(8,6.068355);
   hNCinFV_stack_11->SetBinContent(9,10.06981);
   hNCinFV_stack_11->SetBinContent(10,10.60332);
   hNCinFV_stack_11->SetBinContent(11,16.21208);
   hNCinFV_stack_11->SetBinContent(12,10.7597);
   hNCinFV_stack_11->SetBinContent(13,11.82395);
   hNCinFV_stack_11->SetBinContent(14,10.20036);
   hNCinFV_stack_11->SetBinContent(15,4.498013);
   hNCinFV_stack_11->SetBinContent(16,1.804013);
   hNCinFV_stack_11->SetBinContent(17,2.500666);
   hNCinFV_stack_11->SetBinContent(18,4.059782);
   hNCinFV_stack_11->SetBinContent(19,3.75487);
   hNCinFV_stack_11->SetBinContent(20,3.564308);
   hNCinFV_stack_11->SetBinContent(21,2.927671);
   hNCinFV_stack_11->SetBinContent(22,1.268811);
   hNCinFV_stack_11->SetBinContent(23,1.855576);
   hNCinFV_stack_11->SetBinContent(24,2.394159);
   hNCinFV_stack_11->SetBinContent(25,1.217248);
   hNCinFV_stack_11->SetBinContent(26,1.373626);
   hNCinFV_stack_11->SetBinContent(27,2.587494);
   hNCinFV_stack_11->SetBinContent(28,1.373626);
   hNCinFV_stack_11->SetBinContent(29,1.320373);
   hNCinFV_stack_11->SetBinContent(30,1.121968);
   hNCinFV_stack_11->SetBinContent(31,2.1425);
   hNCinFV_stack_11->SetBinContent(32,1.268811);
   hNCinFV_stack_11->SetBinContent(33,1.465526);
   hNCinFV_stack_11->SetBinContent(34,0.7319179);
   hNCinFV_stack_11->SetBinContent(35,12.07392);
   hNCinFV_stack_11->SetBinError(1,1.676914);
   hNCinFV_stack_11->SetBinError(2,1.570086);
   hNCinFV_stack_11->SetBinError(3,1.373148);
   hNCinFV_stack_11->SetBinError(4,1.544935);
   hNCinFV_stack_11->SetBinError(5,1.893278);
   hNCinFV_stack_11->SetBinError(6,1.373176);
   hNCinFV_stack_11->SetBinError(7,1.65479);
   hNCinFV_stack_11->SetBinError(8,1.177417);
   hNCinFV_stack_11->SetBinError(9,1.570018);
   hNCinFV_stack_11->SetBinError(10,1.618039);
   hNCinFV_stack_11->SetBinError(11,2.039271);
   hNCinFV_stack_11->SetBinError(12,1.581691);
   hNCinFV_stack_11->SetBinError(13,1.733561);
   hNCinFV_stack_11->SetBinError(14,1.653877);
   hNCinFV_stack_11->SetBinError(15,1.038297);
   hNCinFV_stack_11->SetBinError(16,0.7075491);
   hNCinFV_stack_11->SetBinError(17,0.7348895);
   hNCinFV_stack_11->SetBinError(18,1.020933);
   hNCinFV_stack_11->SetBinError(19,1.039038);
   hNCinFV_stack_11->SetBinError(20,0.9191978);
   hNCinFV_stack_11->SetBinError(21,0.877388);
   hNCinFV_stack_11->SetBinError(22,0.5889569);
   hNCinFV_stack_11->SetBinError(23,0.6794384);
   hNCinFV_stack_11->SetBinError(24,0.785313);
   hNCinFV_stack_11->SetBinError(25,0.6211758);
   hNCinFV_stack_11->SetBinError(26,0.519186);
   hNCinFV_stack_11->SetBinError(27,0.8087577);
   hNCinFV_stack_11->SetBinError(28,0.519186);
   hNCinFV_stack_11->SetBinError(29,0.5548703);
   hNCinFV_stack_11->SetBinError(30,0.5181909);
   hNCinFV_stack_11->SetBinError(31,0.7846555);
   hNCinFV_stack_11->SetBinError(32,0.5889569);
   hNCinFV_stack_11->SetBinError(33,0.6209405);
   hNCinFV_stack_11->SetBinError(34,0.438694);
   hNCinFV_stack_11->SetBinError(35,1.733668);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,19.84941);
   hnumuCCinFV_stack_12->SetBinContent(2,20.45802);
   hnumuCCinFV_stack_12->SetBinContent(3,24.98738);
   hnumuCCinFV_stack_12->SetBinContent(4,19.88055);
   hnumuCCinFV_stack_12->SetBinContent(5,20.15894);
   hnumuCCinFV_stack_12->SetBinContent(6,23.7421);
   hnumuCCinFV_stack_12->SetBinContent(7,19.7776);
   hnumuCCinFV_stack_12->SetBinContent(8,20.57008);
   hnumuCCinFV_stack_12->SetBinContent(9,15.10328);
   hnumuCCinFV_stack_12->SetBinContent(10,22.13638);
   hnumuCCinFV_stack_12->SetBinContent(11,16.90973);
   hnumuCCinFV_stack_12->SetBinContent(12,16.39442);
   hnumuCCinFV_stack_12->SetBinContent(13,12.22944);
   hnumuCCinFV_stack_12->SetBinContent(14,10.9582);
   hnumuCCinFV_stack_12->SetBinContent(15,5.557266);
   hnumuCCinFV_stack_12->SetBinContent(16,3.274611);
   hnumuCCinFV_stack_12->SetBinContent(17,2.498675);
   hnumuCCinFV_stack_12->SetBinContent(18,4.905296);
   hnumuCCinFV_stack_12->SetBinContent(19,2.486948);
   hnumuCCinFV_stack_12->SetBinContent(20,2.768786);
   hnumuCCinFV_stack_12->SetBinContent(21,2.017195);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9593096);
   hnumuCCinFV_stack_12->SetBinContent(23,2.101551);
   hnumuCCinFV_stack_12->SetBinContent(24,2.325768);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8337098);
   hnumuCCinFV_stack_12->SetBinContent(26,1.949166);
   hnumuCCinFV_stack_12->SetBinContent(27,0.7742663);
   hnumuCCinFV_stack_12->SetBinContent(28,1.179241);
   hnumuCCinFV_stack_12->SetBinContent(29,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(30,1.347424);
   hnumuCCinFV_stack_12->SetBinContent(31,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(32,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(35,6.996202);
   hnumuCCinFV_stack_12->SetBinError(1,2.43041);
   hnumuCCinFV_stack_12->SetBinError(2,2.813506);
   hnumuCCinFV_stack_12->SetBinError(3,3.245403);
   hnumuCCinFV_stack_12->SetBinError(4,2.678659);
   hnumuCCinFV_stack_12->SetBinError(5,2.967198);
   hnumuCCinFV_stack_12->SetBinError(6,2.949761);
   hnumuCCinFV_stack_12->SetBinError(7,2.44016);
   hnumuCCinFV_stack_12->SetBinError(8,2.429018);
   hnumuCCinFV_stack_12->SetBinError(9,2.130423);
   hnumuCCinFV_stack_12->SetBinError(10,2.595423);
   hnumuCCinFV_stack_12->SetBinError(11,2.298424);
   hnumuCCinFV_stack_12->SetBinError(12,2.382462);
   hnumuCCinFV_stack_12->SetBinError(13,2.940324);
   hnumuCCinFV_stack_12->SetBinError(14,1.742116);
   hnumuCCinFV_stack_12->SetBinError(15,1.223438);
   hnumuCCinFV_stack_12->SetBinError(16,0.9424328);
   hnumuCCinFV_stack_12->SetBinError(17,0.7804261);
   hnumuCCinFV_stack_12->SetBinError(18,1.133312);
   hnumuCCinFV_stack_12->SetBinError(19,0.7718753);
   hnumuCCinFV_stack_12->SetBinError(20,0.9294965);
   hnumuCCinFV_stack_12->SetBinError(21,0.8361058);
   hnumuCCinFV_stack_12->SetBinError(22,0.5023668);
   hnumuCCinFV_stack_12->SetBinError(23,1.105811);
   hnumuCCinFV_stack_12->SetBinError(24,0.806246);
   hnumuCCinFV_stack_12->SetBinError(25,0.4830582);
   hnumuCCinFV_stack_12->SetBinError(26,0.7604681);
   hnumuCCinFV_stack_12->SetBinError(27,0.4590902);
   hnumuCCinFV_stack_12->SetBinError(28,0.5425269);
   hnumuCCinFV_stack_12->SetBinError(29,0.438694);
   hnumuCCinFV_stack_12->SetBinError(30,0.5650266);
   hnumuCCinFV_stack_12->SetBinError(31,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(32,0.48078);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(35,1.292056);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.088776);
   hnueCCinFV_stack_13->SetBinContent(2,1.463947);
   hnueCCinFV_stack_13->SetBinContent(3,0.6886892);
   hnueCCinFV_stack_13->SetBinContent(4,0.6505517);
   hnueCCinFV_stack_13->SetBinContent(5,0.5026693);
   hnueCCinFV_stack_13->SetBinContent(6,0.7784365);
   hnueCCinFV_stack_13->SetBinContent(7,0.56212);
   hnueCCinFV_stack_13->SetBinContent(8,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,1.978352);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.7442807);
   hnueCCinFV_stack_13->SetBinContent(14,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,1.764711);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,1.145733);
   hnueCCinFV_stack_13->SetBinError(1,0.5621645);
   hnueCCinFV_stack_13->SetBinError(2,0.6092442);
   hnueCCinFV_stack_13->SetBinError(3,0.4882097);
   hnueCCinFV_stack_13->SetBinError(4,0.3765627);
   hnueCCinFV_stack_13->SetBinError(5,0.3554931);
   hnueCCinFV_stack_13->SetBinError(6,0.4756739);
   hnueCCinFV_stack_13->SetBinError(7,0.4149909);
   hnueCCinFV_stack_13->SetBinError(8,0.2107505);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.8302238);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.5282236);
   hnueCCinFV_stack_13->SetBinError(14,0.4379386);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,1.581755);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,0.5275243);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__14->SetBinContent(1,85.35439);
   hmcerror__14->SetBinContent(2,84.80743);
   hmcerror__14->SetBinContent(3,85.06032);
   hmcerror__14->SetBinContent(4,85.8083);
   hmcerror__14->SetBinContent(5,94.7327);
   hmcerror__14->SetBinContent(6,108.9458);
   hmcerror__14->SetBinContent(7,117.9611);
   hmcerror__14->SetBinContent(8,138.2581);
   hmcerror__14->SetBinContent(9,171.5902);
   hmcerror__14->SetBinContent(10,236.6715);
   hmcerror__14->SetBinContent(11,305.2408);
   hmcerror__14->SetBinContent(12,324.9617);
   hmcerror__14->SetBinContent(13,247.0415);
   hmcerror__14->SetBinContent(14,123.5138);
   hmcerror__14->SetBinContent(15,50.57195);
   hmcerror__14->SetBinContent(16,31.91781);
   hmcerror__14->SetBinContent(17,21.02248);
   hmcerror__14->SetBinContent(18,21.1335);
   hmcerror__14->SetBinContent(19,15.35961);
   hmcerror__14->SetBinContent(20,16.25474);
   hmcerror__14->SetBinContent(21,12.23369);
   hmcerror__14->SetBinContent(22,10.15751);
   hmcerror__14->SetBinContent(23,9.907142);
   hmcerror__14->SetBinContent(24,9.925487);
   hmcerror__14->SetBinContent(25,7.646102);
   hmcerror__14->SetBinContent(26,7.54925);
   hmcerror__14->SetBinContent(27,6.703335);
   hmcerror__14->SetBinContent(28,6.31797);
   hmcerror__14->SetBinContent(29,5.187904);
   hmcerror__14->SetBinContent(30,5.206131);
   hmcerror__14->SetBinContent(31,4.592026);
   hmcerror__14->SetBinContent(32,5.141988);
   hmcerror__14->SetBinContent(33,2.569241);
   hmcerror__14->SetBinContent(34,2.929623);
   hmcerror__14->SetBinContent(35,34.767);
   hmcerror__14->SetBinError(1,34.64567);
   hmcerror__14->SetBinError(2,26.57597);
   hmcerror__14->SetBinError(3,27.09181);
   hmcerror__14->SetBinError(4,26.13845);
   hmcerror__14->SetBinError(5,30.55442);
   hmcerror__14->SetBinError(6,37.69364);
   hmcerror__14->SetBinError(7,41.69021);
   hmcerror__14->SetBinError(8,54.9008);
   hmcerror__14->SetBinError(9,64.09285);
   hmcerror__14->SetBinError(10,99.06498);
   hmcerror__14->SetBinError(11,130.0966);
   hmcerror__14->SetBinError(12,139.5234);
   hmcerror__14->SetBinError(13,128.7458);
   hmcerror__14->SetBinError(14,77.63187);
   hmcerror__14->SetBinError(15,39.38465);
   hmcerror__14->SetBinError(16,14.02109);
   hmcerror__14->SetBinError(17,12.6653);
   hmcerror__14->SetBinError(18,12.6266);
   hmcerror__14->SetBinError(19,13.22842);
   hmcerror__14->SetBinError(20,12.1443);
   hmcerror__14->SetBinError(21,8.235032);
   hmcerror__14->SetBinError(22,8.376102);
   hmcerror__14->SetBinError(23,15.79956);
   hmcerror__14->SetBinError(24,12.04004);
   hmcerror__14->SetBinError(25,8.623238);
   hmcerror__14->SetBinError(26,9.874775);
   hmcerror__14->SetBinError(27,7.648952);
   hmcerror__14->SetBinError(28,11.51721);
   hmcerror__14->SetBinError(29,7.028638);
   hmcerror__14->SetBinError(30,6.289439);
   hmcerror__14->SetBinError(31,7.130816);
   hmcerror__14->SetBinError(32,6.02171);
   hmcerror__14->SetBinError(33,3.992989);
   hmcerror__14->SetBinError(34,4.243957);
   hmcerror__14->SetBinError(35,19.21288);
   hmcerror__14->SetEntries(2462.59);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[34] = {
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
   Double_t _fy3017[34] = {
   69,
   61,
   67,
   74,
   78,
   78,
   111,
   87,
   141,
   177,
   215,
   272,
   168,
   64,
   41,
   16,
   12,
   19,
   12,
   8,
   10,
   12,
   3,
   6,
   2,
   4,
   4,
   8,
   3,
   3,
   1,
   2,
   1,
   3};
   Double_t _felx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3017[34] = {
   8.4327,
   7.9383,
   8.3119,
   8.7275,
   8.9562,
   8.9562,
   10.53565,
   9.4503,
   11.87434,
   13.30413,
   14.66288,
   16.49242,
   12.96148,
   8.1273,
   6.5384,
   4.1628,
   3.64022,
   4.5151,
   3.64022,
   3.0307,
   3.34883,
   3.64022,
   2.143368,
   2.67925,
   2,
   2.29683,
   2.29683,
   3.0307,
   2.143368,
   2.143368,
   1,
   2,
   1,
   2.143368};
   Double_t _fehx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3017[34] = {
   8.2304,
   7.7354,
   8.1094,
   8.5253,
   8.7542,
   8.7542,
   10.53565,
   9.2488,
   11.87434,
   13.30413,
   14.66288,
   16.49242,
   12.96148,
   7.9246,
   6.3331,
   3.9454,
   3.4155,
   4.3011,
   3.4155,
   2.7896,
   3.1179,
   3.4155,
   1.72422,
   2.41858,
   1.51917,
   1.98186,
   1.98186,
   2.7896,
   1.72422,
   1.72422,
   1.35971,
   1.51917,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,440);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(317.3417);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1832.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.4","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 128.5","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 134.4","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1059.8","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  196.4","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 358.7","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 187.3","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 301.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.6","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[34] = {
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
   Double_t _fy3018[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3018[34] = {
   0.4059038,
   0.3133685,
   0.3185011,
   0.3046145,
   0.322533,
   0.3459854,
   0.3534234,
   0.3970891,
   0.3735227,
   0.4185759,
   0.4262098,
   0.4293534,
   0.5211503,
   0.6285278,
   0.7787845,
   0.4392875,
   0.6024648,
   0.5974688,
   0.8612468,
   0.7471234,
   0.6731438,
   0.8246214,
   1.594765,
   1.213043,
   1.127795,
   1.308047,
   1.141067,
   1.82293,
   1.354813,
   1.208083,
   1.552869,
   1.171086,
   1.554152,
   1.448636};
   Double_t _fehx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3018[34] = {
   0.4059038,
   0.3133685,
   0.3185011,
   0.3046145,
   0.322533,
   0.3459854,
   0.3534234,
   0.3970891,
   0.3735227,
   0.4185759,
   0.4262098,
   0.4293534,
   0.5211503,
   0.6285278,
   0.7787845,
   0.4392875,
   0.6024648,
   0.5974688,
   0.8612468,
   0.7471234,
   0.6731438,
   0.8246214,
   1.594765,
   1.213043,
   1.127795,
   1.308047,
   1.141067,
   1.82293,
   1.354813,
   1.208083,
   1.552869,
   1.171086,
   1.554152,
   1.448636};
   grae = new TGraphAsymmErrors(34,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,440);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[34] = {
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
   Double_t _fy3019[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3019[34] = {
   0.2376504,
   0.2074341,
   0.2096924,
   0.2297135,
   0.254157,
   0.2698456,
   0.2807498,
   0.3411433,
   0.3563915,
   0.3900085,
   0.4146647,
   0.4167566,
   0.3910846,
   0.3682899,
   0.3419211,
   0.2995334,
   0.2971887,
   0.287981,
   0.2847866,
   0.3115245,
   0.3114234,
   0.270823,
   0.3596704,
   0.3163941,
   0.3706142,
   0.3145057,
   0.3741792,
   0.3541715,
   0.5472307,
   0.348461,
   0.4699208,
   0.3429792,
   0.4655313,
   0.4355737};
   Double_t _fehx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3019[34] = {
   0.2376504,
   0.2074341,
   0.2096924,
   0.2297135,
   0.254157,
   0.2698456,
   0.2807498,
   0.3411433,
   0.3563915,
   0.3900085,
   0.4146647,
   0.4167566,
   0.3910846,
   0.3682899,
   0.3419211,
   0.2995334,
   0.2971887,
   0.287981,
   0.2847866,
   0.3115245,
   0.3114234,
   0.270823,
   0.3596704,
   0.3163941,
   0.3706142,
   0.3145057,
   0.3741792,
   0.3541715,
   0.5472307,
   0.348461,
   0.4699208,
   0.3429792,
   0.4655313,
   0.4355737};
   grae = new TGraphAsymmErrors(34,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,440);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[34] = {
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
   Double_t _fy3020[34] = {
   0.8083943,
   0.7192766,
   0.7876763,
   0.8623874,
   0.8233694,
   0.7159526,
   0.9409882,
   0.6292577,
   0.8217251,
   0.7478721,
   0.7043618,
   0.8370216,
   0.6800477,
   0.5181606,
   0.8107261,
   0.5012876,
   0.5708176,
   0.8990467,
   0.7812697,
   0.492164,
   0.8174149,
   1.181392,
   0.3028119,
   0.6045044,
   0.2615712,
   0.529854,
   0.5967179,
   1.266229,
   0.5782682,
   0.5762437,
   0.2177688,
   0.3889546,
   0.3892201,
   1.024023};
   Double_t _felx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3020[34] = {
   0.09879633,
   0.09360383,
   0.09771772,
   0.1017093,
   0.0945418,
   0.08220788,
   0.08931465,
   0.06835258,
   0.06920174,
   0.05621351,
   0.04803708,
   0.05075189,
   0.05246682,
   0.06580073,
   0.1292891,
   0.1304225,
   0.1731585,
   0.2136466,
   0.2369995,
   0.1864502,
   0.2737384,
   0.3583771,
   0.2163458,
   0.2699364,
   0.2615712,
   0.3042461,
   0.3426399,
   0.4796952,
   0.4131472,
   0.4117008,
   0.2177688,
   0.3889546,
   0.3892201,
   0.731619};
   Double_t _fehx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3020[34] = {
   0.09642621,
   0.09121135,
   0.09533705,
   0.09935286,
   0.09240949,
   0.08035375,
   0.08931465,
   0.06689516,
   0.06920174,
   0.05621351,
   0.04803708,
   0.05075189,
   0.05246682,
   0.06415962,
   0.1252295,
   0.1236113,
   0.162469,
   0.2035205,
   0.2223689,
   0.1716176,
   0.2548618,
   0.3362536,
   0.1740381,
   0.2436737,
   0.1986856,
   0.2625241,
   0.2956528,
   0.4415342,
   0.3323539,
   0.3311903,
   0.2961024,
   0.2954441,
   0.5292264,
   0.5885467};
   grae = new TGraphAsymmErrors(34,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,440);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.87854);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
