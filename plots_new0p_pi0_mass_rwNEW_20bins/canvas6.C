#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 13:44:48 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-7.58,451.2821,838.1884);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__16->SetBinContent(1,62.29344);
   hmc__16->SetBinContent(2,111.9252);
   hmc__16->SetBinContent(3,134.5246);
   hmc__16->SetBinContent(4,144.7944);
   hmc__16->SetBinContent(5,152.755);
   hmc__16->SetBinContent(6,166.1382);
   hmc__16->SetBinContent(7,176.6662);
   hmc__16->SetBinContent(8,180.9008);
   hmc__16->SetBinContent(9,220.6271);
   hmc__16->SetBinContent(10,277.0698);
   hmc__16->SetBinContent(11,316.9487);
   hmc__16->SetBinContent(12,353.8729);
   hmc__16->SetBinContent(13,328.4037);
   hmc__16->SetBinContent(14,232.0936);
   hmc__16->SetBinContent(15,143.7609);
   hmc__16->SetBinContent(16,98.36809);
   hmc__16->SetBinContent(17,72.14483);
   hmc__16->SetBinContent(18,52.17444);
   hmc__16->SetBinContent(19,47.35757);
   hmc__16->SetBinContent(20,40.9779);
   hmc__16->SetBinContent(21,40.80285);
   hmc__16->SetBinContent(22,29.24182);
   hmc__16->SetBinContent(23,27.10676);
   hmc__16->SetBinContent(24,27.1405);
   hmc__16->SetBinContent(25,20.47463);
   hmc__16->SetBinContent(26,20.49274);
   hmc__16->SetBinContent(27,20.67357);
   hmc__16->SetBinContent(28,15.22948);
   hmc__16->SetBinContent(29,17.00484);
   hmc__16->SetBinContent(30,16.51652);
   hmc__16->SetBinContent(31,12.17443);
   hmc__16->SetBinContent(32,10.28501);
   hmc__16->SetBinContent(33,9.430524);
   hmc__16->SetBinContent(34,9.375609);
   hmc__16->SetBinContent(35,93.25881);
   hmc__16->SetBinError(1,23.74645);
   hmc__16->SetBinError(2,39.06001);
   hmc__16->SetBinError(3,36.83462);
   hmc__16->SetBinError(4,41.5401);
   hmc__16->SetBinError(5,42.46917);
   hmc__16->SetBinError(6,43.22326);
   hmc__16->SetBinError(7,60.16527);
   hmc__16->SetBinError(8,48.71974);
   hmc__16->SetBinError(9,65.19212);
   hmc__16->SetBinError(10,81.32098);
   hmc__16->SetBinError(11,88.31931);
   hmc__16->SetBinError(12,91.34312);
   hmc__16->SetBinError(13,84.097);
   hmc__16->SetBinError(14,67.70821);
   hmc__16->SetBinError(15,47.11797);
   hmc__16->SetBinError(16,32.36636);
   hmc__16->SetBinError(17,25.36865);
   hmc__16->SetBinError(18,18.73004);
   hmc__16->SetBinError(19,19.28963);
   hmc__16->SetBinError(20,23.34521);
   hmc__16->SetBinError(21,18.5374);
   hmc__16->SetBinError(22,12.79459);
   hmc__16->SetBinError(23,16.19251);
   hmc__16->SetBinError(24,12.82257);
   hmc__16->SetBinError(25,12.5038);
   hmc__16->SetBinError(26,10.47158);
   hmc__16->SetBinError(27,11.47913);
   hmc__16->SetBinError(28,9.403442);
   hmc__16->SetBinError(29,9.689356);
   hmc__16->SetBinError(30,9.739636);
   hmc__16->SetBinError(31,9.199758);
   hmc__16->SetBinError(32,11.01512);
   hmc__16->SetBinError(33,7.277141);
   hmc__16->SetBinError(34,9.396499);
   hmc__16->SetBinError(35,40.13573);
   hmc__16->SetMinimum(-7.58);
   hmc__16->SetMaximum(795.9);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",34,0,400);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(371.5665);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.240767);
   hbadmatch_stack_1->SetBinContent(2,4.707297);
   hbadmatch_stack_1->SetBinContent(3,5.427666);
   hbadmatch_stack_1->SetBinContent(4,3.795069);
   hbadmatch_stack_1->SetBinContent(5,5.600354);
   hbadmatch_stack_1->SetBinContent(6,5.387161);
   hbadmatch_stack_1->SetBinContent(7,7.001366);
   hbadmatch_stack_1->SetBinContent(8,4.634581);
   hbadmatch_stack_1->SetBinContent(9,5.276107);
   hbadmatch_stack_1->SetBinContent(10,4.682742);
   hbadmatch_stack_1->SetBinContent(11,4.003176);
   hbadmatch_stack_1->SetBinContent(12,7.295641);
   hbadmatch_stack_1->SetBinContent(13,4.233971);
   hbadmatch_stack_1->SetBinContent(14,5.970341);
   hbadmatch_stack_1->SetBinContent(15,5.259398);
   hbadmatch_stack_1->SetBinContent(16,1.557426);
   hbadmatch_stack_1->SetBinContent(17,1.26712);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.5867651);
   hbadmatch_stack_1->SetBinContent(21,1.467217);
   hbadmatch_stack_1->SetBinContent(23,0.1950248);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3998213);
   hbadmatch_stack_1->SetBinContent(33,0.7319179);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.8987898);
   hbadmatch_stack_1->SetBinError(2,1.161029);
   hbadmatch_stack_1->SetBinError(3,1.196573);
   hbadmatch_stack_1->SetBinError(4,0.9474962);
   hbadmatch_stack_1->SetBinError(5,1.286126);
   hbadmatch_stack_1->SetBinError(6,1.237151);
   hbadmatch_stack_1->SetBinError(7,1.356222);
   hbadmatch_stack_1->SetBinError(8,1.34436);
   hbadmatch_stack_1->SetBinError(9,1.188721);
   hbadmatch_stack_1->SetBinError(10,1.106719);
   hbadmatch_stack_1->SetBinError(11,1.044289);
   hbadmatch_stack_1->SetBinError(12,2.084722);
   hbadmatch_stack_1->SetBinError(13,1.136654);
   hbadmatch_stack_1->SetBinError(14,1.897978);
   hbadmatch_stack_1->SetBinError(15,2.198524);
   hbadmatch_stack_1->SetBinError(16,0.7082233);
   hbadmatch_stack_1->SetBinError(17,0.5883944);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.3387718);
   hbadmatch_stack_1->SetBinError(21,0.6214735);
   hbadmatch_stack_1->SetBinError(23,0.1950249);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3998213);
   hbadmatch_stack_1->SetBinError(33,0.438694);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,8.746004);
   hext_stack_2->SetBinContent(2,10.28302);
   hext_stack_2->SetBinContent(3,22.69559);
   hext_stack_2->SetBinContent(4,20.94668);
   hext_stack_2->SetBinContent(5,14.68336);
   hext_stack_2->SetBinContent(6,21.13981);
   hext_stack_2->SetBinContent(7,18.33116);
   hext_stack_2->SetBinContent(8,18.31239);
   hext_stack_2->SetBinContent(9,16.7726);
   hext_stack_2->SetBinContent(10,23.89939);
   hext_stack_2->SetBinContent(11,16.83603);
   hext_stack_2->SetBinContent(12,21.0532);
   hext_stack_2->SetBinContent(13,18.78683);
   hext_stack_2->SetBinContent(14,9.328596);
   hext_stack_2->SetBinContent(15,6.000783);
   hext_stack_2->SetBinContent(16,7.627179);
   hext_stack_2->SetBinContent(17,4.378797);
   hext_stack_2->SetBinContent(18,3.241202);
   hext_stack_2->SetBinContent(19,2.263601);
   hext_stack_2->SetBinContent(20,3.812204);
   hext_stack_2->SetBinContent(21,2.26801);
   hext_stack_2->SetBinContent(22,1.544194);
   hext_stack_2->SetBinContent(23,1.544194);
   hext_stack_2->SetBinContent(24,2.103607);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,2.510206);
   hext_stack_2->SetBinContent(27,0.6416141);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,0.7309963);
   hext_stack_2->SetBinContent(30,0.6416141);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,0.8131978);
   hext_stack_2->SetBinError(1,1.927474);
   hext_stack_2->SetBinError(2,2.125455);
   hext_stack_2->SetBinError(3,3.085356);
   hext_stack_2->SetBinError(4,3.10949);
   hext_stack_2->SetBinError(5,2.395516);
   hext_stack_2->SetBinError(6,2.997382);
   hext_stack_2->SetBinError(7,2.700459);
   hext_stack_2->SetBinError(8,2.749502);
   hext_stack_2->SetBinError(9,2.663396);
   hext_stack_2->SetBinError(10,3.153783);
   hext_stack_2->SetBinError(11,2.72416);
   hext_stack_2->SetBinError(12,2.964639);
   hext_stack_2->SetBinError(13,2.861394);
   hext_stack_2->SetBinError(14,1.983577);
   hext_stack_2->SetBinError(15,1.533202);
   hext_stack_2->SetBinError(16,1.735511);
   hext_stack_2->SetBinError(17,1.350755);
   hext_stack_2->SetBinError(18,1.178414);
   hext_stack_2->SetBinError(19,0.9684198);
   hext_stack_2->SetBinError(20,1.293894);
   hext_stack_2->SetBinError(21,1.035838);
   hext_stack_2->SetBinError(22,0.7753719);
   hext_stack_2->SetBinError(23,0.7753719);
   hext_stack_2->SetBinError(24,0.9761052);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,1.057404);
   hext_stack_2->SetBinError(27,0.6416141);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.5201503);
   hext_stack_2->SetBinError(30,0.6416141);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.5750177);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.252237);
   hdirt_stack_3->SetBinContent(2,2.671405);
   hdirt_stack_3->SetBinContent(3,1.840369);
   hdirt_stack_3->SetBinContent(4,3.353116);
   hdirt_stack_3->SetBinContent(5,3.635633);
   hdirt_stack_3->SetBinContent(6,2.53311);
   hdirt_stack_3->SetBinContent(7,2.789896);
   hdirt_stack_3->SetBinContent(8,2.674504);
   hdirt_stack_3->SetBinContent(9,2.663194);
   hdirt_stack_3->SetBinContent(10,2.254091);
   hdirt_stack_3->SetBinContent(11,4.079811);
   hdirt_stack_3->SetBinContent(12,2.735091);
   hdirt_stack_3->SetBinContent(13,3.054688);
   hdirt_stack_3->SetBinContent(14,0.8949713);
   hdirt_stack_3->SetBinContent(15,2.110102);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.9769442);
   hdirt_stack_3->SetBinContent(21,0.501847);
   hdirt_stack_3->SetBinContent(22,0.751803);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinContent(26,0.1380715);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinContent(29,0.3381872);
   hdirt_stack_3->SetBinError(1,0.5862043);
   hdirt_stack_3->SetBinError(2,0.9773925);
   hdirt_stack_3->SetBinError(3,0.7302451);
   hdirt_stack_3->SetBinError(4,0.9506801);
   hdirt_stack_3->SetBinError(5,0.9471577);
   hdirt_stack_3->SetBinError(6,0.8026775);
   hdirt_stack_3->SetBinError(7,0.7719639);
   hdirt_stack_3->SetBinError(8,0.8604132);
   hdirt_stack_3->SetBinError(9,1.248215);
   hdirt_stack_3->SetBinError(10,1.060344);
   hdirt_stack_3->SetBinError(11,1.146606);
   hdirt_stack_3->SetBinError(12,0.9056918);
   hdirt_stack_3->SetBinError(13,0.8456936);
   hdirt_stack_3->SetBinError(14,0.495829);
   hdirt_stack_3->SetBinError(15,0.8275084);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(20,0.5042685);
   hdirt_stack_3->SetBinError(21,0.3757062);
   hdirt_stack_3->SetBinError(22,0.4362392);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetBinError(26,0.1380715);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetBinError(29,0.3381872);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,9.720567);
   houtFV_stack_4->SetBinContent(2,14.05711);
   houtFV_stack_4->SetBinContent(3,18.58288);
   houtFV_stack_4->SetBinContent(4,14.78847);
   houtFV_stack_4->SetBinContent(5,16.9463);
   houtFV_stack_4->SetBinContent(6,20.17451);
   houtFV_stack_4->SetBinContent(7,19.62537);
   houtFV_stack_4->SetBinContent(8,18.80445);
   houtFV_stack_4->SetBinContent(9,21.16354);
   houtFV_stack_4->SetBinContent(10,26.63634);
   houtFV_stack_4->SetBinContent(11,24.32135);
   houtFV_stack_4->SetBinContent(12,25.86853);
   houtFV_stack_4->SetBinContent(13,28.31197);
   houtFV_stack_4->SetBinContent(14,20.71273);
   houtFV_stack_4->SetBinContent(15,10.7981);
   houtFV_stack_4->SetBinContent(16,5.87164);
   houtFV_stack_4->SetBinContent(17,5.746421);
   houtFV_stack_4->SetBinContent(18,4.159351);
   houtFV_stack_4->SetBinContent(19,5.434109);
   houtFV_stack_4->SetBinContent(20,3.767786);
   houtFV_stack_4->SetBinContent(21,3.127768);
   houtFV_stack_4->SetBinContent(22,2.640747);
   houtFV_stack_4->SetBinContent(23,2.87949);
   houtFV_stack_4->SetBinContent(24,1.463836);
   houtFV_stack_4->SetBinContent(25,2.053982);
   houtFV_stack_4->SetBinContent(26,1.323754);
   houtFV_stack_4->SetBinContent(27,1.515398);
   houtFV_stack_4->SetBinContent(28,0.536893);
   houtFV_stack_4->SetBinContent(29,1.165231);
   houtFV_stack_4->SetBinContent(30,0.7834804);
   houtFV_stack_4->SetBinContent(31,0.9269427);
   houtFV_stack_4->SetBinContent(32,0.9818863);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinContent(35,6.095776);
   houtFV_stack_4->SetBinError(1,1.642978);
   houtFV_stack_4->SetBinError(2,1.860522);
   houtFV_stack_4->SetBinError(3,2.17949);
   houtFV_stack_4->SetBinError(4,1.935491);
   houtFV_stack_4->SetBinError(5,2.060147);
   houtFV_stack_4->SetBinError(6,2.223889);
   houtFV_stack_4->SetBinError(7,2.170091);
   houtFV_stack_4->SetBinError(8,2.17696);
   houtFV_stack_4->SetBinError(9,2.297477);
   houtFV_stack_4->SetBinError(10,2.567799);
   houtFV_stack_4->SetBinError(11,2.444061);
   houtFV_stack_4->SetBinError(12,2.557026);
   houtFV_stack_4->SetBinError(13,2.707816);
   houtFV_stack_4->SetBinError(14,2.302007);
   houtFV_stack_4->SetBinError(15,1.586924);
   houtFV_stack_4->SetBinError(16,1.160868);
   houtFV_stack_4->SetBinError(17,1.168605);
   houtFV_stack_4->SetBinError(18,1.012263);
   houtFV_stack_4->SetBinError(19,1.083896);
   houtFV_stack_4->SetBinError(20,0.9414194);
   houtFV_stack_4->SetBinError(21,0.8999062);
   houtFV_stack_4->SetBinError(22,0.784705);
   houtFV_stack_4->SetBinError(23,0.9000686);
   houtFV_stack_4->SetBinError(24,0.620407);
   houtFV_stack_4->SetBinError(25,0.7078105);
   houtFV_stack_4->SetBinError(26,0.5560625);
   houtFV_stack_4->SetBinError(27,0.588146);
   houtFV_stack_4->SetBinError(28,0.3929602);
   houtFV_stack_4->SetBinError(29,0.5357171);
   houtFV_stack_4->SetBinError(30,0.3917439);
   houtFV_stack_4->SetBinError(31,0.4800908);
   houtFV_stack_4->SetBinError(32,0.4391155);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetBinError(35,1.317059);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.422076);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.649516);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.896376);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.068184);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.037787);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.437765);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.718598);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.045188);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.752145);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.486026);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.946548);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,11.00495);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.54176);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,7.306176);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.245897);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.231176);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.547294);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.9491041);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.158022);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.324758);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.840744);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.406154);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5576563);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4221303);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5961674);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5448289);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4184252);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.504138);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.693496);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6412499);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8432227);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9104347);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.162976);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.069621);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8854392);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8431855);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.433053);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4185812);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3531893);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3705767);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3943225);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.4575982);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9906222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.157854);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.199708);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.004736);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9197081);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3642206);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.32337);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4219004);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.305844);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3437889);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.1994106);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.95905);
   hNCpi0inFVres_stack_7->SetBinContent(2,39.39181);
   hNCpi0inFVres_stack_7->SetBinContent(3,44.54154);
   hNCpi0inFVres_stack_7->SetBinContent(4,52.42612);
   hNCpi0inFVres_stack_7->SetBinContent(5,59.64504);
   hNCpi0inFVres_stack_7->SetBinContent(6,62.89481);
   hNCpi0inFVres_stack_7->SetBinContent(7,67.36234);
   hNCpi0inFVres_stack_7->SetBinContent(8,73.12669);
   hNCpi0inFVres_stack_7->SetBinContent(9,95.79437);
   hNCpi0inFVres_stack_7->SetBinContent(10,125.4271);
   hNCpi0inFVres_stack_7->SetBinContent(11,152.8853);
   hNCpi0inFVres_stack_7->SetBinContent(12,164.1986);
   hNCpi0inFVres_stack_7->SetBinContent(13,155.8012);
   hNCpi0inFVres_stack_7->SetBinContent(14,112.5094);
   hNCpi0inFVres_stack_7->SetBinContent(15,63.5314);
   hNCpi0inFVres_stack_7->SetBinContent(16,41.62183);
   hNCpi0inFVres_stack_7->SetBinContent(17,27.49907);
   hNCpi0inFVres_stack_7->SetBinContent(18,20.32672);
   hNCpi0inFVres_stack_7->SetBinContent(19,16.77112);
   hNCpi0inFVres_stack_7->SetBinContent(20,14.69988);
   hNCpi0inFVres_stack_7->SetBinContent(21,13.874);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.09335);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.589575);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.98592);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.096921);
   hNCpi0inFVres_stack_7->SetBinContent(26,6.021932);
   hNCpi0inFVres_stack_7->SetBinContent(27,7.141777);
   hNCpi0inFVres_stack_7->SetBinContent(28,4.127888);
   hNCpi0inFVres_stack_7->SetBinContent(29,4.8777);
   hNCpi0inFVres_stack_7->SetBinContent(30,4.629592);
   hNCpi0inFVres_stack_7->SetBinContent(31,4.923546);
   hNCpi0inFVres_stack_7->SetBinContent(32,3.150884);
   hNCpi0inFVres_stack_7->SetBinContent(33,3.739953);
   hNCpi0inFVres_stack_7->SetBinContent(34,3.10987);
   hNCpi0inFVres_stack_7->SetBinContent(35,18.13673);
   hNCpi0inFVres_stack_7->SetBinError(1,1.501244);
   hNCpi0inFVres_stack_7->SetBinError(2,2.073976);
   hNCpi0inFVres_stack_7->SetBinError(3,2.190569);
   hNCpi0inFVres_stack_7->SetBinError(4,2.32928);
   hNCpi0inFVres_stack_7->SetBinError(5,2.571652);
   hNCpi0inFVres_stack_7->SetBinError(6,2.561814);
   hNCpi0inFVres_stack_7->SetBinError(7,2.689023);
   hNCpi0inFVres_stack_7->SetBinError(8,2.786477);
   hNCpi0inFVres_stack_7->SetBinError(9,3.1915);
   hNCpi0inFVres_stack_7->SetBinError(10,3.626075);
   hNCpi0inFVres_stack_7->SetBinError(11,4.036257);
   hNCpi0inFVres_stack_7->SetBinError(12,4.152632);
   hNCpi0inFVres_stack_7->SetBinError(13,4.099604);
   hNCpi0inFVres_stack_7->SetBinError(14,3.536891);
   hNCpi0inFVres_stack_7->SetBinError(15,2.662355);
   hNCpi0inFVres_stack_7->SetBinError(16,2.132758);
   hNCpi0inFVres_stack_7->SetBinError(17,1.784399);
   hNCpi0inFVres_stack_7->SetBinError(18,1.418735);
   hNCpi0inFVres_stack_7->SetBinError(19,1.317308);
   hNCpi0inFVres_stack_7->SetBinError(20,1.265367);
   hNCpi0inFVres_stack_7->SetBinError(21,1.235774);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9397103);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9054332);
   hNCpi0inFVres_stack_7->SetBinError(24,1.058679);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8401787);
   hNCpi0inFVres_stack_7->SetBinError(26,0.7804464);
   hNCpi0inFVres_stack_7->SetBinError(27,0.9671646);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6566938);
   hNCpi0inFVres_stack_7->SetBinError(29,0.6978313);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7010776);
   hNCpi0inFVres_stack_7->SetBinError(31,0.7899192);
   hNCpi0inFVres_stack_7->SetBinError(32,0.5529247);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7147773);
   hNCpi0inFVres_stack_7->SetBinError(34,0.6293556);
   hNCpi0inFVres_stack_7->SetBinError(35,1.382822);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.62128);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.642976);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.462871);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.435129);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.11943);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.75839);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.17766);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.50822);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.91868);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.21754);
   hNCpi0inFVdis_stack_8->SetBinContent(11,28.93058);
   hNCpi0inFVdis_stack_8->SetBinContent(12,34.00144);
   hNCpi0inFVdis_stack_8->SetBinContent(13,28.01702);
   hNCpi0inFVdis_stack_8->SetBinContent(14,21.24742);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.86552);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.477311);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.164604);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.381564);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.473482);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.959824);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.160261);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.992862);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.189162);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.078394);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.546294);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.93723);
   hNCpi0inFVdis_stack_8->SetBinContent(27,2.09218);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.533844);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.576026);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.741762);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.240226);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.864572);
   hNCpi0inFVdis_stack_8->SetBinContent(34,1.505112);
   hNCpi0inFVdis_stack_8->SetBinContent(35,7.319626);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4946557);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9473086);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9738147);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.914203);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9783);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9927154);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.203301);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.147816);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.381954);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.580823);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.723598);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.921728);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.705418);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.477506);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.116939);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9111467);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8815483);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.734515);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6847884);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.663377);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4160157);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.410364);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4752605);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4919605);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3509774);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4467669);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.530961);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4481446);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.4418765);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4017374);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3659082);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.3211561);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.4251929);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.8708497);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.097318);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,5.181749);
   hCCpi0inFV_stack_10->SetBinContent(2,10.40689);
   hCCpi0inFV_stack_10->SetBinContent(3,13.10671);
   hCCpi0inFV_stack_10->SetBinContent(4,14.07573);
   hCCpi0inFV_stack_10->SetBinContent(5,14.4176);
   hCCpi0inFV_stack_10->SetBinContent(6,16.57471);
   hCCpi0inFV_stack_10->SetBinContent(7,21.24813);
   hCCpi0inFV_stack_10->SetBinContent(8,22.41998);
   hCCpi0inFV_stack_10->SetBinContent(9,29.16533);
   hCCpi0inFV_stack_10->SetBinContent(10,36.60336);
   hCCpi0inFV_stack_10->SetBinContent(11,44.55049);
   hCCpi0inFV_stack_10->SetBinContent(12,55.50645);
   hCCpi0inFV_stack_10->SetBinContent(13,50.2234);
   hCCpi0inFV_stack_10->SetBinContent(14,31.22863);
   hCCpi0inFV_stack_10->SetBinContent(15,21.14462);
   hCCpi0inFV_stack_10->SetBinContent(16,14.0808);
   hCCpi0inFV_stack_10->SetBinContent(17,10.34681);
   hCCpi0inFV_stack_10->SetBinContent(18,7.770934);
   hCCpi0inFV_stack_10->SetBinContent(19,7.706554);
   hCCpi0inFV_stack_10->SetBinContent(20,4.05471);
   hCCpi0inFV_stack_10->SetBinContent(21,6.553686);
   hCCpi0inFV_stack_10->SetBinContent(22,5.662008);
   hCCpi0inFV_stack_10->SetBinContent(23,5.163762);
   hCCpi0inFV_stack_10->SetBinContent(24,4.123555);
   hCCpi0inFV_stack_10->SetBinContent(25,3.949895);
   hCCpi0inFV_stack_10->SetBinContent(26,3.282455);
   hCCpi0inFV_stack_10->SetBinContent(27,4.735065);
   hCCpi0inFV_stack_10->SetBinContent(28,3.415993);
   hCCpi0inFV_stack_10->SetBinContent(29,3.461183);
   hCCpi0inFV_stack_10->SetBinContent(30,3.637448);
   hCCpi0inFV_stack_10->SetBinContent(31,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(32,1.322064);
   hCCpi0inFV_stack_10->SetBinContent(33,1.607298);
   hCCpi0inFV_stack_10->SetBinContent(34,1.907138);
   hCCpi0inFV_stack_10->SetBinContent(35,21.72835);
   hCCpi0inFV_stack_10->SetBinError(1,1.144913);
   hCCpi0inFV_stack_10->SetBinError(2,1.611989);
   hCCpi0inFV_stack_10->SetBinError(3,1.849266);
   hCCpi0inFV_stack_10->SetBinError(4,1.82947);
   hCCpi0inFV_stack_10->SetBinError(5,1.861006);
   hCCpi0inFV_stack_10->SetBinError(6,1.971386);
   hCCpi0inFV_stack_10->SetBinError(7,2.262013);
   hCCpi0inFV_stack_10->SetBinError(8,2.437546);
   hCCpi0inFV_stack_10->SetBinError(9,2.66178);
   hCCpi0inFV_stack_10->SetBinError(10,3.014891);
   hCCpi0inFV_stack_10->SetBinError(11,3.39309);
   hCCpi0inFV_stack_10->SetBinError(12,3.708253);
   hCCpi0inFV_stack_10->SetBinError(13,3.562758);
   hCCpi0inFV_stack_10->SetBinError(14,2.768474);
   hCCpi0inFV_stack_10->SetBinError(15,2.303324);
   hCCpi0inFV_stack_10->SetBinError(16,1.830013);
   hCCpi0inFV_stack_10->SetBinError(17,1.57375);
   hCCpi0inFV_stack_10->SetBinError(18,1.401991);
   hCCpi0inFV_stack_10->SetBinError(19,1.415597);
   hCCpi0inFV_stack_10->SetBinError(20,1.01996);
   hCCpi0inFV_stack_10->SetBinError(21,1.256869);
   hCCpi0inFV_stack_10->SetBinError(22,1.225662);
   hCCpi0inFV_stack_10->SetBinError(23,1.22563);
   hCCpi0inFV_stack_10->SetBinError(24,1.034135);
   hCCpi0inFV_stack_10->SetBinError(25,1.057182);
   hCCpi0inFV_stack_10->SetBinError(26,0.8323843);
   hCCpi0inFV_stack_10->SetBinError(27,1.127723);
   hCCpi0inFV_stack_10->SetBinError(28,0.9091683);
   hCCpi0inFV_stack_10->SetBinError(29,0.9606784);
   hCCpi0inFV_stack_10->SetBinError(30,0.9475521);
   hCCpi0inFV_stack_10->SetBinError(31,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(32,0.5554667);
   hCCpi0inFV_stack_10->SetBinError(33,0.6796534);
   hCCpi0inFV_stack_10->SetBinError(34,0.6501133);
   hCCpi0inFV_stack_10->SetBinError(35,2.333407);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,5.808851);
   hNCinFV_stack_11->SetBinContent(2,6.835539);
   hNCinFV_stack_11->SetBinContent(3,7.133688);
   hNCinFV_stack_11->SetBinContent(4,11.96065);
   hNCinFV_stack_11->SetBinContent(5,12.70103);
   hNCinFV_stack_11->SetBinContent(6,10.3001);
   hNCinFV_stack_11->SetBinContent(7,12.12041);
   hNCinFV_stack_11->SetBinContent(8,12.60743);
   hNCinFV_stack_11->SetBinContent(9,14.31955);
   hNCinFV_stack_11->SetBinContent(10,12.67529);
   hNCinFV_stack_11->SetBinContent(11,17.1587);
   hNCinFV_stack_11->SetBinContent(12,16.31351);
   hNCinFV_stack_11->SetBinContent(13,14.85367);
   hNCinFV_stack_11->SetBinContent(14,9.341276);
   hNCinFV_stack_11->SetBinContent(15,9.183207);
   hNCinFV_stack_11->SetBinContent(16,8.843029);
   hNCinFV_stack_11->SetBinContent(17,7.504793);
   hNCinFV_stack_11->SetBinContent(18,4.44476);
   hNCinFV_stack_11->SetBinContent(19,5.08816);
   hNCinFV_stack_11->SetBinContent(20,3.856305);
   hNCinFV_stack_11->SetBinContent(21,6.240321);
   hNCinFV_stack_11->SetBinContent(22,2.444031);
   hNCinFV_stack_11->SetBinContent(23,3.229203);
   hNCinFV_stack_11->SetBinContent(24,4.641476);
   hNCinFV_stack_11->SetBinContent(25,1.710423);
   hNCinFV_stack_11->SetBinContent(26,2.300569);
   hNCinFV_stack_11->SetBinContent(27,1.517089);
   hNCinFV_stack_11->SetBinContent(28,2.495594);
   hNCinFV_stack_11->SetBinContent(29,3.129458);
   hNCinFV_stack_11->SetBinContent(30,3.556464);
   hNCinFV_stack_11->SetBinContent(31,1.323754);
   hNCinFV_stack_11->SetBinContent(32,2.737718);
   hNCinFV_stack_11->SetBinContent(33,0.7336084);
   hNCinFV_stack_11->SetBinContent(34,1.715495);
   hNCinFV_stack_11->SetBinContent(35,21.36025);
   hNCinFV_stack_11->SetBinError(1,1.257217);
   hNCinFV_stack_11->SetBinError(2,1.315971);
   hNCinFV_stack_11->SetBinError(3,1.300706);
   hNCinFV_stack_11->SetBinError(4,1.754881);
   hNCinFV_stack_11->SetBinError(5,1.809799);
   hNCinFV_stack_11->SetBinError(6,1.629726);
   hNCinFV_stack_11->SetBinError(7,1.72181);
   hNCinFV_stack_11->SetBinError(8,1.777272);
   hNCinFV_stack_11->SetBinError(9,1.882368);
   hNCinFV_stack_11->SetBinError(10,1.711053);
   hNCinFV_stack_11->SetBinError(11,2.049007);
   hNCinFV_stack_11->SetBinError(12,2.019897);
   hNCinFV_stack_11->SetBinError(13,1.973583);
   hNCinFV_stack_11->SetBinError(14,1.507922);
   hNCinFV_stack_11->SetBinError(15,1.545792);
   hNCinFV_stack_11->SetBinError(16,1.507896);
   hNCinFV_stack_11->SetBinError(17,1.421047);
   hNCinFV_stack_11->SetBinError(18,1.056592);
   hNCinFV_stack_11->SetBinError(19,1.092772);
   hNCinFV_stack_11->SetBinError(20,1.000479);
   hNCinFV_stack_11->SetBinError(21,1.270316);
   hNCinFV_stack_11->SetBinError(22,0.759648);
   hNCinFV_stack_11->SetBinError(23,0.8550968);
   hNCinFV_stack_11->SetBinError(24,1.074749);
   hNCinFV_stack_11->SetBinError(25,0.6196373);
   hNCinFV_stack_11->SetBinError(26,0.7071359);
   hNCinFV_stack_11->SetBinError(27,0.5887087);
   hNCinFV_stack_11->SetBinError(28,0.7335366);
   hNCinFV_stack_11->SetBinError(29,0.9002741);
   hNCinFV_stack_11->SetBinError(30,1.019922);
   hNCinFV_stack_11->SetBinError(31,0.5560625);
   hNCinFV_stack_11->SetBinError(32,0.856599);
   hNCinFV_stack_11->SetBinError(33,0.4394482);
   hNCinFV_stack_11->SetBinError(34,0.6212384);
   hNCinFV_stack_11->SetBinError(35,2.305883);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,2.70574);
   hnumuCCinFV_stack_12->SetBinContent(2,9.967825);
   hnumuCCinFV_stack_12->SetBinContent(3,7.348433);
   hnumuCCinFV_stack_12->SetBinContent(4,10.0648);
   hnumuCCinFV_stack_12->SetBinContent(5,10.33215);
   hnumuCCinFV_stack_12->SetBinContent(6,11.68655);
   hnumuCCinFV_stack_12->SetBinContent(7,11.18077);
   hnumuCCinFV_stack_12->SetBinContent(8,10.18567);
   hnumuCCinFV_stack_12->SetBinContent(9,11.55871);
   hnumuCCinFV_stack_12->SetBinContent(10,12.29351);
   hnumuCCinFV_stack_12->SetBinContent(11,13.33853);
   hnumuCCinFV_stack_12->SetBinContent(12,13.4586);
   hnumuCCinFV_stack_12->SetBinContent(13,12.7336);
   hnumuCCinFV_stack_12->SetBinContent(14,11.9845);
   hnumuCCinFV_stack_12->SetBinContent(15,6.911264);
   hnumuCCinFV_stack_12->SetBinContent(16,6.778733);
   hnumuCCinFV_stack_12->SetBinContent(17,6.343008);
   hnumuCCinFV_stack_12->SetBinContent(18,4.299826);
   hnumuCCinFV_stack_12->SetBinContent(19,3.734128);
   hnumuCCinFV_stack_12->SetBinContent(20,3.555228);
   hnumuCCinFV_stack_12->SetBinContent(21,3.23019);
   hnumuCCinFV_stack_12->SetBinContent(22,3.318499);
   hnumuCCinFV_stack_12->SetBinContent(23,1.569441);
   hnumuCCinFV_stack_12->SetBinContent(24,2.254374);
   hnumuCCinFV_stack_12->SetBinContent(25,2.592268);
   hnumuCCinFV_stack_12->SetBinContent(26,2.173065);
   hnumuCCinFV_stack_12->SetBinContent(27,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(28,1.969149);
   hnumuCCinFV_stack_12->SetBinContent(29,1.127039);
   hnumuCCinFV_stack_12->SetBinContent(30,1.163287);
   hnumuCCinFV_stack_12->SetBinContent(31,1.383427);
   hnumuCCinFV_stack_12->SetBinContent(32,1.0254);
   hnumuCCinFV_stack_12->SetBinContent(33,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(34,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(35,12.11159);
   hnumuCCinFV_stack_12->SetBinError(1,0.8498629);
   hnumuCCinFV_stack_12->SetBinError(2,2.438819);
   hnumuCCinFV_stack_12->SetBinError(3,1.548111);
   hnumuCCinFV_stack_12->SetBinError(4,1.690909);
   hnumuCCinFV_stack_12->SetBinError(5,1.848445);
   hnumuCCinFV_stack_12->SetBinError(6,2.017587);
   hnumuCCinFV_stack_12->SetBinError(7,2.205401);
   hnumuCCinFV_stack_12->SetBinError(8,1.608913);
   hnumuCCinFV_stack_12->SetBinError(9,2.288204);
   hnumuCCinFV_stack_12->SetBinError(10,1.902507);
   hnumuCCinFV_stack_12->SetBinError(11,2.125003);
   hnumuCCinFV_stack_12->SetBinError(12,2.384565);
   hnumuCCinFV_stack_12->SetBinError(13,1.928481);
   hnumuCCinFV_stack_12->SetBinError(14,1.852275);
   hnumuCCinFV_stack_12->SetBinError(15,1.416268);
   hnumuCCinFV_stack_12->SetBinError(16,1.370136);
   hnumuCCinFV_stack_12->SetBinError(17,1.341245);
   hnumuCCinFV_stack_12->SetBinError(18,1.078056);
   hnumuCCinFV_stack_12->SetBinError(19,1.035823);
   hnumuCCinFV_stack_12->SetBinError(20,0.9102492);
   hnumuCCinFV_stack_12->SetBinError(21,1.000272);
   hnumuCCinFV_stack_12->SetBinError(22,0.9605071);
   hnumuCCinFV_stack_12->SetBinError(23,0.6080614);
   hnumuCCinFV_stack_12->SetBinError(24,0.7638346);
   hnumuCCinFV_stack_12->SetBinError(25,0.847057);
   hnumuCCinFV_stack_12->SetBinError(26,0.7496851);
   hnumuCCinFV_stack_12->SetBinError(27,0.760276);
   hnumuCCinFV_stack_12->SetBinError(28,0.6825959);
   hnumuCCinFV_stack_12->SetBinError(29,0.5201044);
   hnumuCCinFV_stack_12->SetBinError(30,0.5349878);
   hnumuCCinFV_stack_12->SetBinError(31,0.5798648);
   hnumuCCinFV_stack_12->SetBinError(32,0.460594);
   hnumuCCinFV_stack_12->SetBinError(33,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(34,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(35,1.724646);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.551413);
   hnueCCinFV_stack_13->SetBinContent(2,2.948987);
   hnueCCinFV_stack_13->SetBinContent(3,3.348938);
   hnueCCinFV_stack_13->SetBinContent(4,1.740889);
   hnueCCinFV_stack_13->SetBinContent(5,0.785171);
   hnueCCinFV_stack_13->SetBinContent(6,2.470408);
   hnueCCinFV_stack_13->SetBinContent(7,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(8,1.289128);
   hnueCCinFV_stack_13->SetBinContent(9,0.7549087);
   hnueCCinFV_stack_13->SetBinContent(10,0.8479808);
   hnueCCinFV_stack_13->SetBinContent(11,1.712425);
   hnueCCinFV_stack_13->SetBinContent(12,1.209602);
   hnueCCinFV_stack_13->SetBinContent(13,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.7908806);
   hnueCCinFV_stack_13->SetBinContent(16,0.7493486);
   hnueCCinFV_stack_13->SetBinContent(17,0.7975264);
   hnueCCinFV_stack_13->SetBinContent(18,0.4505813);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(23,1.091422);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.4673674);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(35,3.404546);
   hnueCCinFV_stack_13->SetBinError(1,1.138681);
   hnueCCinFV_stack_13->SetBinError(2,1.633299);
   hnueCCinFV_stack_13->SetBinError(3,1.048355);
   hnueCCinFV_stack_13->SetBinError(4,0.8830779);
   hnueCCinFV_stack_13->SetBinError(5,0.3925882);
   hnueCCinFV_stack_13->SetBinError(6,1.416448);
   hnueCCinFV_stack_13->SetBinError(7,0.4575996);
   hnueCCinFV_stack_13->SetBinError(8,0.5953858);
   hnueCCinFV_stack_13->SetBinError(9,0.4493869);
   hnueCCinFV_stack_13->SetBinError(10,0.4909786);
   hnueCCinFV_stack_13->SetBinError(11,0.7450527);
   hnueCCinFV_stack_13->SetBinError(12,0.5781583);
   hnueCCinFV_stack_13->SetBinError(13,0.340721);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.5616999);
   hnueCCinFV_stack_13->SetBinError(16,0.5866007);
   hnueCCinFV_stack_13->SetBinError(17,0.4715374);
   hnueCCinFV_stack_13->SetBinError(18,0.3211617);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(23,0.6451021);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.3345885);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(35,1.290655);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__17->SetBinContent(1,62.29344);
   hmcerror__17->SetBinContent(2,111.9252);
   hmcerror__17->SetBinContent(3,134.5246);
   hmcerror__17->SetBinContent(4,144.7944);
   hmcerror__17->SetBinContent(5,152.755);
   hmcerror__17->SetBinContent(6,166.1382);
   hmcerror__17->SetBinContent(7,176.6662);
   hmcerror__17->SetBinContent(8,180.9008);
   hmcerror__17->SetBinContent(9,220.6271);
   hmcerror__17->SetBinContent(10,277.0698);
   hmcerror__17->SetBinContent(11,316.9487);
   hmcerror__17->SetBinContent(12,353.8729);
   hmcerror__17->SetBinContent(13,328.4037);
   hmcerror__17->SetBinContent(14,232.0936);
   hmcerror__17->SetBinContent(15,143.7609);
   hmcerror__17->SetBinContent(16,98.36809);
   hmcerror__17->SetBinContent(17,72.14483);
   hmcerror__17->SetBinContent(18,52.17444);
   hmcerror__17->SetBinContent(19,47.35757);
   hmcerror__17->SetBinContent(20,40.9779);
   hmcerror__17->SetBinContent(21,40.80285);
   hmcerror__17->SetBinContent(22,29.24182);
   hmcerror__17->SetBinContent(23,27.10676);
   hmcerror__17->SetBinContent(24,27.1405);
   hmcerror__17->SetBinContent(25,20.47463);
   hmcerror__17->SetBinContent(26,20.49274);
   hmcerror__17->SetBinContent(27,20.67357);
   hmcerror__17->SetBinContent(28,15.22948);
   hmcerror__17->SetBinContent(29,17.00484);
   hmcerror__17->SetBinContent(30,16.51652);
   hmcerror__17->SetBinContent(31,12.17443);
   hmcerror__17->SetBinContent(32,10.28501);
   hmcerror__17->SetBinContent(33,9.430524);
   hmcerror__17->SetBinContent(34,9.375609);
   hmcerror__17->SetBinContent(35,93.25881);
   hmcerror__17->SetBinError(1,23.74645);
   hmcerror__17->SetBinError(2,39.06001);
   hmcerror__17->SetBinError(3,36.83462);
   hmcerror__17->SetBinError(4,41.5401);
   hmcerror__17->SetBinError(5,42.46917);
   hmcerror__17->SetBinError(6,43.22326);
   hmcerror__17->SetBinError(7,60.16527);
   hmcerror__17->SetBinError(8,48.71974);
   hmcerror__17->SetBinError(9,65.19212);
   hmcerror__17->SetBinError(10,81.32098);
   hmcerror__17->SetBinError(11,88.31931);
   hmcerror__17->SetBinError(12,91.34312);
   hmcerror__17->SetBinError(13,84.097);
   hmcerror__17->SetBinError(14,67.70821);
   hmcerror__17->SetBinError(15,47.11797);
   hmcerror__17->SetBinError(16,32.36636);
   hmcerror__17->SetBinError(17,25.36865);
   hmcerror__17->SetBinError(18,18.73004);
   hmcerror__17->SetBinError(19,19.28963);
   hmcerror__17->SetBinError(20,23.34521);
   hmcerror__17->SetBinError(21,18.5374);
   hmcerror__17->SetBinError(22,12.79459);
   hmcerror__17->SetBinError(23,16.19251);
   hmcerror__17->SetBinError(24,12.82257);
   hmcerror__17->SetBinError(25,12.5038);
   hmcerror__17->SetBinError(26,10.47158);
   hmcerror__17->SetBinError(27,11.47913);
   hmcerror__17->SetBinError(28,9.403442);
   hmcerror__17->SetBinError(29,9.689356);
   hmcerror__17->SetBinError(30,9.739636);
   hmcerror__17->SetBinError(31,9.199758);
   hmcerror__17->SetBinError(32,11.01512);
   hmcerror__17->SetBinError(33,7.277141);
   hmcerror__17->SetBinError(34,9.396499);
   hmcerror__17->SetBinError(35,40.13573);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[34] = {
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
   Double_t _fy3021[34] = {
   74,
   116,
   130,
   129,
   154,
   151,
   189,
   194,
   193,
   286,
   302,
   379,
   331,
   178,
   142,
   77,
   62,
   46,
   43,
   35,
   24,
   33,
   32,
   21,
   14,
   18,
   20,
   11,
   14,
   10,
   11,
   16,
   10,
   2};
   Double_t _felx3021[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3021[34] = {
   8.7275,
   10.77033,
   11.40175,
   11.35782,
   12.40967,
   12.28821,
   13.74773,
   13.92839,
   13.89244,
   16.91153,
   17.37815,
   19.46792,
   18.19341,
   13.34166,
   11.91638,
   8.8995,
   8.0018,
   6.9153,
   6.6917,
   6.0548,
   5.0476,
   5.8847,
   5.7977,
   4.7354,
   3.9102,
   4.4008,
   4.6266,
   3.4975,
   3.9102,
   3.34883,
   3.4975,
   4.1628,
   3.34883,
   2};
   Double_t _fehx3021[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3021[34] = {
   8.5253,
   10.77033,
   11.40175,
   11.35782,
   12.40967,
   12.28821,
   13.74773,
   13.92839,
   13.89244,
   16.91153,
   17.37815,
   19.46792,
   18.19341,
   13.34166,
   11.91638,
   8.6976,
   7.7989,
   6.7108,
   6.4868,
   5.8483,
   4.837,
   5.6776,
   5.5904,
   4.5229,
   3.6898,
   4.1858,
   4.4133,
   3.27,
   3.6898,
   3.1179,
   3.27,
   3.9454,
   3.1179,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,440);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(438.3147);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3447.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.0","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 282.6","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 335.1","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  88.6","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.6","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1501.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  289.2","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 480.4","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.8","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 205.9","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[34] = {
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
   Double_t _fy3022[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3022[34] = {
   0.381203,
   0.348983,
   0.2738134,
   0.2868903,
   0.2780215,
   0.2601645,
   0.340559,
   0.2693173,
   0.2954856,
   0.2935036,
   0.2786549,
   0.2581241,
   0.2560781,
   0.2917281,
   0.3277523,
   0.3290331,
   0.3516351,
   0.3589887,
   0.4073188,
   0.5697023,
   0.4543162,
   0.4375443,
   0.5973608,
   0.4724518,
   0.6106973,
   0.5109896,
   0.5552563,
   0.6174501,
   0.5697998,
   0.5896907,
   0.7556623,
   1.070988,
   0.7716582,
   1.002228};
   Double_t _fehx3022[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3022[34] = {
   0.381203,
   0.348983,
   0.2738134,
   0.2868903,
   0.2780215,
   0.2601645,
   0.340559,
   0.2693173,
   0.2954856,
   0.2935036,
   0.2786549,
   0.2581241,
   0.2560781,
   0.2917281,
   0.3277523,
   0.3290331,
   0.3516351,
   0.3589887,
   0.4073188,
   0.5697023,
   0.4543162,
   0.4375443,
   0.5973608,
   0.4724518,
   0.6106973,
   0.5109896,
   0.5552563,
   0.6174501,
   0.5697998,
   0.5896907,
   0.7556623,
   1.070988,
   0.7716582,
   1.002228};
   grae = new TGraphAsymmErrors(34,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,440);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[34] = {
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
   Double_t _fy3023[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3023[34] = {
   0.1941869,
   0.2077721,
   0.1929312,
   0.1953375,
   0.1997924,
   0.1941467,
   0.2088893,
   0.205988,
   0.2170379,
   0.2244336,
   0.2341952,
   0.2272149,
   0.2280809,
   0.231696,
   0.23458,
   0.2464382,
   0.2586561,
   0.2657996,
   0.2571094,
   0.2539486,
   0.2745966,
   0.2541457,
   0.3024417,
   0.2948752,
   0.2839842,
   0.2897979,
   0.2853391,
   0.2935817,
   0.2998697,
   0.2982053,
   0.3454208,
   0.3149942,
   0.3721502,
   0.3740062};
   Double_t _fehx3023[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3023[34] = {
   0.1941869,
   0.2077721,
   0.1929312,
   0.1953375,
   0.1997924,
   0.1941467,
   0.2088893,
   0.205988,
   0.2170379,
   0.2244336,
   0.2341952,
   0.2272149,
   0.2280809,
   0.231696,
   0.23458,
   0.2464382,
   0.2586561,
   0.2657996,
   0.2571094,
   0.2539486,
   0.2745966,
   0.2541457,
   0.3024417,
   0.2948752,
   0.2839842,
   0.2897979,
   0.2853391,
   0.2935817,
   0.2998697,
   0.2982053,
   0.3454208,
   0.3149942,
   0.3721502,
   0.3740062};
   grae = new TGraphAsymmErrors(34,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,440);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[34] = {
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
   Double_t _fy3024[34] = {
   1.187926,
   1.036406,
   0.9663662,
   0.8909187,
   1.00815,
   0.9088819,
   1.069814,
   1.072411,
   0.8747793,
   1.032231,
   0.9528357,
   1.071006,
   1.007906,
   0.7669321,
   0.9877512,
   0.7827742,
   0.8593825,
   0.8816577,
   0.9079857,
   0.8541189,
   0.5881942,
   1.128521,
   1.180517,
   0.7737515,
   0.6837731,
   0.8783599,
   0.9674186,
   0.7222836,
   0.8232949,
   0.6054546,
   0.9035331,
   1.555663,
   1.060386,
   0.2133195};
   Double_t _felx3024[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3024[34] = {
   0.140103,
   0.09622788,
   0.08475593,
   0.07844102,
   0.08123908,
   0.07396376,
   0.07781752,
   0.0769946,
   0.06296799,
   0.06103709,
   0.05482953,
   0.05501388,
   0.05539951,
   0.05748399,
   0.08289024,
   0.09047141,
   0.110913,
   0.1325419,
   0.1413016,
   0.1477577,
   0.123707,
   0.2012426,
   0.2138839,
   0.1744773,
   0.1909778,
   0.2147492,
   0.2237929,
   0.2296534,
   0.2299463,
   0.2027564,
   0.2872824,
   0.4047446,
   0.3551054,
   0.2133195};
   Double_t _fehx3024[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3024[34] = {
   0.1368571,
   0.09622788,
   0.08475593,
   0.07844102,
   0.08123908,
   0.07396376,
   0.07781752,
   0.0769946,
   0.06296799,
   0.06103709,
   0.05482953,
   0.05501388,
   0.05539951,
   0.05748399,
   0.08289024,
   0.08841892,
   0.1081006,
   0.1286224,
   0.1369749,
   0.1427184,
   0.1185456,
   0.1941603,
   0.2062364,
   0.1666477,
   0.1802133,
   0.2042577,
   0.2134754,
   0.2147152,
   0.2169852,
   0.1887747,
   0.2685957,
   0.383607,
   0.3306179,
   0.1620343};
   grae = new TGraphAsymmErrors(34,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,440);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.133197);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
