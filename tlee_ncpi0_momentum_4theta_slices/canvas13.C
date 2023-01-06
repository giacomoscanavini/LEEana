#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas13()
{
//=========Macro generated from canvas: canvas13/channel13
//=========  (Tue Dec  6 22:18:05 2022) by ROOT version 6.26/00
   TCanvas *canvas13 = new TCanvas("canvas13", "channel13",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas13->SetHighLightColor(2);
   canvas13->Range(0,0,1,1);
   canvas13->SetFillColor(0);
   canvas13->SetBorderMode(0);
   canvas13->SetBorderSize(2);
   canvas13->SetLeftMargin(0.12);
   canvas13->SetRightMargin(0.12);
   canvas13->SetTopMargin(0.05);
   canvas13->SetBottomMargin(0.12);
   canvas13->SetFrameLineWidth(2);
   canvas13->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-1.241323,1353.846,137.2642);
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
   
   TH1F *hmc__37 = new TH1F("hmc__37","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__37->SetBinContent(1,22.86647);
   hmc__37->SetBinContent(2,62.06616);
   hmc__37->SetBinContent(3,34.30489);
   hmc__37->SetBinContent(4,16.06779);
   hmc__37->SetBinContent(5,11.97233);
   hmc__37->SetBinContent(6,6.312497);
   hmc__37->SetBinContent(7,6.929046);
   hmc__37->SetBinContent(8,2.896207);
   hmc__37->SetBinContent(9,3.093748);
   hmc__37->SetBinContent(10,1.922355);
   hmc__37->SetBinContent(11,2.551722);
   hmc__37->SetBinContent(12,1.537663);
   hmc__37->SetBinContent(13,13.06957);
   hmc__37->SetBinError(1,11.48157);
   hmc__37->SetBinError(2,26.16086);
   hmc__37->SetBinError(3,13.81343);
   hmc__37->SetBinError(4,9.691147);
   hmc__37->SetBinError(5,7.627167);
   hmc__37->SetBinError(6,8.730216);
   hmc__37->SetBinError(7,9.802162);
   hmc__37->SetBinError(8,3.676598);
   hmc__37->SetBinError(9,10.76919);
   hmc__37->SetBinError(10,3.1076);
   hmc__37->SetBinError(11,4.013562);
   hmc__37->SetBinError(12,2.634374);
   hmc__37->SetBinError(13,13.53164);
   hmc__37->SetMinimum(-1.241323);
   hmc__37->SetMaximum(130.3389);
   hmc__37->SetEntries(199.3103);
   hmc__37->SetLineWidth(5);
   hmc__37->GetXaxis()->SetLabelFont(42);
   hmc__37->GetXaxis()->SetTitleOffset(1);
   hmc__37->GetXaxis()->SetTitleFont(42);
   hmc__37->GetYaxis()->SetTitle("Event counts");
   hmc__37->GetYaxis()->SetLabelFont(132);
   hmc__37->GetYaxis()->SetLabelSize(0.04);
   hmc__37->GetYaxis()->SetTitleSize(0.05);
   hmc__37->GetYaxis()->SetTitleOffset(0.73);
   hmc__37->GetYaxis()->SetTitleFont(132);
   hmc__37->GetZaxis()->SetLabelFont(42);
   hmc__37->GetZaxis()->SetTitleOffset(1);
   hmc__37->GetZaxis()->SetTitleFont(42);
   hmc__37->Draw("hist");
   
   THStack *hs13 = new THStack();
   hs13->SetName("hs13");
   hs13->SetTitle("");
   
   TH1F *hs13_stack_13 = new TH1F("hs13_stack_13","",12,0,1200);
   hs13_stack_13->SetMinimum(-1.244044e-08);
   hs13_stack_13->SetMaximum(65.16947);
   hs13_stack_13->SetDirectory(0);
   hs13_stack_13->SetStats(0);
   hs13_stack_13->SetLineWidth(2);
   hs13_stack_13->SetMarkerStyle(20);
   hs13_stack_13->GetXaxis()->SetNdivisions(509);
   hs13_stack_13->GetXaxis()->SetLabelFont(132);
   hs13_stack_13->GetXaxis()->SetLabelOffset(0.01);
   hs13_stack_13->GetXaxis()->SetLabelSize(0.08);
   hs13_stack_13->GetXaxis()->SetTitleSize(0.08);
   hs13_stack_13->GetXaxis()->SetTitleOffset(0.95);
   hs13_stack_13->GetXaxis()->SetTitleFont(132);
   hs13_stack_13->GetYaxis()->SetNdivisions(509);
   hs13_stack_13->GetYaxis()->SetLabelFont(132);
   hs13_stack_13->GetYaxis()->SetLabelOffset(0.01);
   hs13_stack_13->GetYaxis()->SetLabelSize(0.08);
   hs13_stack_13->GetYaxis()->SetTitleSize(0.08);
   hs13_stack_13->GetYaxis()->SetTitleOffset(0.95);
   hs13_stack_13->GetYaxis()->SetTitleFont(132);
   hs13_stack_13->GetZaxis()->SetLabelFont(132);
   hs13_stack_13->GetZaxis()->SetLabelSize(0.08);
   hs13_stack_13->GetZaxis()->SetTitleSize(0.08);
   hs13_stack_13->GetZaxis()->SetTitleOffset(1.2);
   hs13_stack_13->GetZaxis()->SetTitleFont(132);
   hs13->SetHistogram(hs13_stack_13);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,1.188648);
   hbadmatch_stack_1->SetBinContent(2,3.149811);
   hbadmatch_stack_1->SetBinContent(3,2.663489);
   hbadmatch_stack_1->SetBinContent(5,0.4507997);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(13,0.2193965);
   hbadmatch_stack_1->SetBinError(1,0.6208267);
   hbadmatch_stack_1->SetBinError(2,0.8528471);
   hbadmatch_stack_1->SetBinError(3,0.8139242);
   hbadmatch_stack_1->SetBinError(5,0.3577123);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(13,0.2193965);
   hbadmatch_stack_1->SetEntries(37);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1590;
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
   hs13->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,5.001641);
   hext_stack_2->SetBinContent(2,10.55992);
   hext_stack_2->SetBinContent(3,3.737183);
   hext_stack_2->SetBinContent(4,2.185808);
   hext_stack_2->SetBinContent(5,3.946247);
   hext_stack_2->SetBinContent(6,1.290409);
   hext_stack_2->SetBinContent(7,2.566457);
   hext_stack_2->SetBinContent(8,0.6487947);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.9660115);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinError(1,1.582242);
   hext_stack_2->SetBinError(2,2.386395);
   hext_stack_2->SetBinError(3,1.188642);
   hext_stack_2->SetBinError(4,1.006415);
   hext_stack_2->SetBinError(5,1.458663);
   hext_stack_2->SetBinError(6,0.788756);
   hext_stack_2->SetBinError(7,1.283228);
   hext_stack_2->SetBinError(8,0.4587671);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.7189592);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetEntries(71);

   ci = 1591;
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
   hs13->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(2,0.6669159);
   hdirt_stack_3->SetBinContent(3,0.2761429);
   hdirt_stack_3->SetBinContent(4,0.3381872);
   hdirt_stack_3->SetBinError(2,0.4822861);
   hdirt_stack_3->SetBinError(3,0.1952625);
   hdirt_stack_3->SetBinError(4,0.3381872);
   hdirt_stack_3->SetEntries(5);

   ci = 1592;
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
   hs13->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.593498);
   houtFV_stack_4->SetBinContent(2,12.27044);
   houtFV_stack_4->SetBinContent(3,8.465467);
   houtFV_stack_4->SetBinContent(4,2.748725);
   houtFV_stack_4->SetBinContent(5,2.55199);
   houtFV_stack_4->SetBinContent(6,1.813232);
   houtFV_stack_4->SetBinContent(7,2.21838);
   houtFV_stack_4->SetBinContent(8,0.7333651);
   houtFV_stack_4->SetBinContent(9,1.22836);
   houtFV_stack_4->SetBinContent(10,0.3917402);
   houtFV_stack_4->SetBinContent(11,0.247236);
   houtFV_stack_4->SetBinContent(12,0.5793237);
   houtFV_stack_4->SetBinContent(13,4.183052);
   houtFV_stack_4->SetBinError(1,1.048155);
   houtFV_stack_4->SetBinError(2,1.73611);
   houtFV_stack_4->SetBinError(3,1.450311);
   houtFV_stack_4->SetBinError(4,0.7969225);
   houtFV_stack_4->SetBinError(5,0.8979623);
   houtFV_stack_4->SetBinError(6,0.7977475);
   houtFV_stack_4->SetBinError(7,0.7659601);
   houtFV_stack_4->SetBinError(8,0.3771143);
   houtFV_stack_4->SetBinError(9,0.5818243);
   houtFV_stack_4->SetBinError(10,0.2770047);
   houtFV_stack_4->SetBinError(11,0.247236);
   houtFV_stack_4->SetBinError(12,0.3801006);
   houtFV_stack_4->SetBinError(13,0.9943708);
   houtFV_stack_4->SetEntries(192);

   ci = 1593;
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
   hs13->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1954681);
   hNCpi0inFVcoh_stack_5->SetEntries(2);

   ci = 1594;
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
   hs13->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.0816729);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03712227);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03714089);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02625185);
   hNCpi0inFVqe_stack_6->SetEntries(8);

   ci = 1595;
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
   hs13->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.07992);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.043209);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.780077);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.590911);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.8198251);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.3238451);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.2253787);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.1186514);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.4173321);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.05735015);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1912494);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.015928);
   hNCpi0inFVres_stack_7->SetBinError(1,0.559122);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8251403);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5625767);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4620629);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2232677);
   hNCpi0inFVres_stack_7->SetBinError(6,0.1446838);
   hNCpi0inFVres_stack_7->SetBinError(7,0.1270325);
   hNCpi0inFVres_stack_7->SetBinError(8,0.06709918);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2432356);
   hNCpi0inFVres_stack_7->SetBinError(10,0.03695506);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1251271);
   hNCpi0inFVres_stack_7->SetBinError(13,0.282122);
   hNCpi0inFVres_stack_7->SetEntries(638);

   ci = 1596;
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
   hs13->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5966126);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.220292);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.030132);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.665158);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.4197527);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1253411);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.1968382);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.05967807);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.09318605);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1727914);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5476925);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7224004);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.279846);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1829656);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1017835);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1310281);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.05967807);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06415361);
   hNCpi0inFVdis_stack_8->SetEntries(134);

   ci = 1597;
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
   hs13->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1598;
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
   hs13->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,5.418582);
   hCCpi0inFV_stack_10->SetBinContent(2,11.72121);
   hCCpi0inFV_stack_10->SetBinContent(3,6.758284);
   hCCpi0inFV_stack_10->SetBinContent(4,4.341837);
   hCCpi0inFV_stack_10->SetBinContent(5,2.04891);
   hCCpi0inFV_stack_10->SetBinContent(6,0.9768428);
   hCCpi0inFV_stack_10->SetBinContent(7,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(8,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(9,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(10,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(11,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(13,2.642437);
   hCCpi0inFV_stack_10->SetBinError(1,1.080769);
   hCCpi0inFV_stack_10->SetBinError(2,1.741561);
   hCCpi0inFV_stack_10->SetBinError(3,1.297135);
   hCCpi0inFV_stack_10->SetBinError(4,1.057829);
   hCCpi0inFV_stack_10->SetBinError(5,0.7064057);
   hCCpi0inFV_stack_10->SetBinError(6,0.5022725);
   hCCpi0inFV_stack_10->SetBinError(7,0.438694);
   hCCpi0inFV_stack_10->SetBinError(8,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(9,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(10,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(11,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(13,0.7851269);
   hCCpi0inFV_stack_10->SetEntries(160);

   ci = 1599;
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
   hs13->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,1.306901);
   hNCinFV_stack_11->SetBinContent(2,1.995165);
   hNCinFV_stack_11->SetBinContent(3,1.339253);
   hNCinFV_stack_11->SetBinContent(4,0.4079483);
   hNCinFV_stack_11->SetBinContent(5,0.1221502);
   hNCinFV_stack_11->SetBinContent(6,0.772576);
   hNCinFV_stack_11->SetBinContent(7,0.6498969);
   hNCinFV_stack_11->SetBinContent(13,0.3204102);
   hNCinFV_stack_11->SetBinError(1,0.5403936);
   hNCinFV_stack_11->SetBinError(2,0.7156279);
   hNCinFV_stack_11->SetBinError(3,0.561784);
   hNCinFV_stack_11->SetBinError(4,0.2886456);
   hNCinFV_stack_11->SetBinError(5,0.1221502);
   hNCinFV_stack_11->SetBinError(6,0.608533);
   hNCinFV_stack_11->SetBinError(7,0.4045246);
   hNCinFV_stack_11->SetBinError(13,0.2323733);
   hNCinFV_stack_11->SetEntries(32);

   ci = 1600;
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
   hs13->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,1.661849);
   hnumuCCinFV_stack_12->SetBinContent(2,10.32601);
   hnumuCCinFV_stack_12->SetBinContent(3,3.809179);
   hnumuCCinFV_stack_12->SetBinContent(4,2.397479);
   hnumuCCinFV_stack_12->SetBinContent(5,1.612656);
   hnumuCCinFV_stack_12->SetBinContent(6,1.010251);
   hnumuCCinFV_stack_12->SetBinContent(7,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(8,0.6617875);
   hnumuCCinFV_stack_12->SetBinContent(10,0.4782097);
   hnumuCCinFV_stack_12->SetBinContent(11,0.8032721);
   hnumuCCinFV_stack_12->SetBinContent(12,0.3830141);
   hnumuCCinFV_stack_12->SetBinContent(13,3.90924);
   hnumuCCinFV_stack_12->SetBinError(1,0.6406978);
   hnumuCCinFV_stack_12->SetBinError(2,2.015548);
   hnumuCCinFV_stack_12->SetBinError(3,0.9830271);
   hnumuCCinFV_stack_12->SetBinError(4,0.8248034);
   hnumuCCinFV_stack_12->SetBinError(5,0.6712294);
   hnumuCCinFV_stack_12->SetBinError(6,0.5273181);
   hnumuCCinFV_stack_12->SetBinError(7,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(8,0.3832255);
   hnumuCCinFV_stack_12->SetBinError(10,0.3383741);
   hnumuCCinFV_stack_12->SetBinError(11,0.496812);
   hnumuCCinFV_stack_12->SetBinError(12,0.270932);
   hnumuCCinFV_stack_12->SetBinError(13,1.074111);
   hnumuCCinFV_stack_12->SetEntries(104);

   ci = 1601;
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
   hs13->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetEntries(4);

   ci = 1602;
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
   hs13->Add(hnueCCinFV_stack_13,"");
   hs13->Draw("hist same");
   
   TH1F *hmcerror__38 = new TH1F("hmcerror__38","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__38->SetBinContent(1,22.86647);
   hmcerror__38->SetBinContent(2,62.06616);
   hmcerror__38->SetBinContent(3,34.30489);
   hmcerror__38->SetBinContent(4,16.06779);
   hmcerror__38->SetBinContent(5,11.97233);
   hmcerror__38->SetBinContent(6,6.312497);
   hmcerror__38->SetBinContent(7,6.929046);
   hmcerror__38->SetBinContent(8,2.896207);
   hmcerror__38->SetBinContent(9,3.093748);
   hmcerror__38->SetBinContent(10,1.922355);
   hmcerror__38->SetBinContent(11,2.551722);
   hmcerror__38->SetBinContent(12,1.537663);
   hmcerror__38->SetBinContent(13,13.06957);
   hmcerror__38->SetBinError(1,11.48157);
   hmcerror__38->SetBinError(2,26.16086);
   hmcerror__38->SetBinError(3,13.81343);
   hmcerror__38->SetBinError(4,9.691147);
   hmcerror__38->SetBinError(5,7.627167);
   hmcerror__38->SetBinError(6,8.730216);
   hmcerror__38->SetBinError(7,9.802162);
   hmcerror__38->SetBinError(8,3.676598);
   hmcerror__38->SetBinError(9,10.76919);
   hmcerror__38->SetBinError(10,3.1076);
   hmcerror__38->SetBinError(11,4.013562);
   hmcerror__38->SetBinError(12,2.634374);
   hmcerror__38->SetBinError(13,13.53164);
   hmcerror__38->SetEntries(199.3103);

   ci = TColor::GetColor("#999999");
   hmcerror__38->SetFillColor(ci);
   hmcerror__38->SetFillStyle(3002);
   hmcerror__38->SetLineColor(12);
   hmcerror__38->SetLineWidth(0);
   hmcerror__38->SetMarkerColor(0);
   hmcerror__38->SetMarkerSize(0);
   hmcerror__38->GetXaxis()->SetLabelFont(42);
   hmcerror__38->GetXaxis()->SetTitleOffset(1);
   hmcerror__38->GetXaxis()->SetTitleFont(42);
   hmcerror__38->GetYaxis()->SetLabelFont(42);
   hmcerror__38->GetYaxis()->SetTitleFont(42);
   hmcerror__38->GetZaxis()->SetLabelFont(42);
   hmcerror__38->GetZaxis()->SetTitleOffset(1);
   hmcerror__38->GetZaxis()->SetTitleFont(42);
   hmcerror__38->Draw("same E2");
   
   Double_t _fx3049[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3049[12] = {
   21,
   47,
   36,
   13,
   11,
   13,
   6,
   1,
   4,
   3,
   1,
   0};
   Double_t _felx3049[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3049[12] = {
   4.7354,
   6.9882,
   6.1381,
   3.77763,
   3.4975,
   3.77763,
   2.67925,
   1,
   2.29683,
   2.143368,
   1,
   0};
   Double_t _fehx3049[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3049[12] = {
   4.5229,
   6.7839,
   5.9318,
   3.5552,
   3.27,
   3.5552,
   2.41858,
   1.35971,
   1.98186,
   1.72422,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3049,_fy3049,_felx3049,_fehx3049,_fely3049,_fehy3049);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3049 = new TH1F("Graph_Graph3049","",100,0,1320);
   Graph_Graph3049->SetMinimum(0);
   Graph_Graph3049->SetMaximum(59.16229);
   Graph_Graph3049->SetDirectory(0);
   Graph_Graph3049->SetStats(0);
   Graph_Graph3049->SetLineWidth(2);
   Graph_Graph3049->SetMarkerStyle(20);
   Graph_Graph3049->GetXaxis()->SetNdivisions(509);
   Graph_Graph3049->GetXaxis()->SetLabelFont(132);
   Graph_Graph3049->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3049->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3049->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3049->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3049->GetXaxis()->SetTitleFont(132);
   Graph_Graph3049->GetYaxis()->SetNdivisions(509);
   Graph_Graph3049->GetYaxis()->SetLabelFont(132);
   Graph_Graph3049->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3049->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3049->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3049->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3049->GetYaxis()->SetTitleFont(132);
   Graph_Graph3049->GetZaxis()->SetLabelFont(132);
   Graph_Graph3049->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3049->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3049->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3049->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3049);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.0/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 156.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 8.0","F");

   ci = 1590;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 32.0","F");

   ci = 1591;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.3","F");

   ci = 1592;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 37.8","F");

   ci = 1593;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1594;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

   ci = 1595;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  21.6","F");

   ci = 1596;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  6.3","F");

   ci = 1597;
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

   ci = 1598;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 34.2","F");

   ci = 1599;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 6.6","F");

   ci = 1600;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 23.5","F");

   ci = 1601;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 0.8","F");

   ci = 1602;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas13->cd();
  
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
   
   Double_t _fx3050[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3050[12] = {
   1,
   1,
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
   Double_t _felx3050[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3050[12] = {
   0.5021137,
   0.4214995,
   0.4026666,
   0.6031411,
   0.6370661,
   1.383005,
   1.414648,
   1.269453,
   3.480952,
   1.616559,
   1.572883,
   1.713233};
   Double_t _fehx3050[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3050[12] = {
   0.5021137,
   0.4214995,
   0.4026666,
   0.6031411,
   0.6370661,
   1.383005,
   1.414648,
   1.269453,
   3.480952,
   1.616559,
   1.572883,
   1.713233};
   grae = new TGraphAsymmErrors(12,_fx3050,_fy3050,_felx3050,_fehx3050,_fely3050,_fehy3050);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3050 = new TH1F("Graph_Graph3050","",100,0,1320);
   Graph_Graph3050->SetMinimum(0);
   Graph_Graph3050->SetMaximum(2);
   Graph_Graph3050->SetDirectory(0);
   Graph_Graph3050->SetStats(0);
   Graph_Graph3050->SetLineWidth(2);
   Graph_Graph3050->SetMarkerStyle(20);
   Graph_Graph3050->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3050->GetXaxis()->SetRange(1,91);
   Graph_Graph3050->GetXaxis()->SetNdivisions(509);
   Graph_Graph3050->GetXaxis()->SetLabelFont(132);
   Graph_Graph3050->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3050->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3050->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3050->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3050->GetXaxis()->SetTitleFont(132);
   Graph_Graph3050->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3050->GetYaxis()->SetNdivisions(210);
   Graph_Graph3050->GetYaxis()->SetLabelFont(132);
   Graph_Graph3050->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3050->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3050->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3050->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3050->GetYaxis()->SetTitleFont(132);
   Graph_Graph3050->GetZaxis()->SetLabelFont(132);
   Graph_Graph3050->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3050->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3050->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3050->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3050);
   
   grae->Draw("a2");
   
   Double_t _fx3051[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3051[12] = {
   1,
   1,
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
   Double_t _felx3051[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3051[12] = {
   0.2529394,
   0.2874803,
   0.2674697,
   0.3016225,
   0.262568,
   0.3167052,
   0.2977985,
   0.4063728,
   0.4433087,
   0.4618586,
   0.4803583,
   0.6508666};
   Double_t _fehx3051[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3051[12] = {
   0.2529394,
   0.2874803,
   0.2674697,
   0.3016225,
   0.262568,
   0.3167052,
   0.2977985,
   0.4063728,
   0.4433087,
   0.4618586,
   0.4803583,
   0.6508666};
   grae = new TGraphAsymmErrors(12,_fx3051,_fy3051,_felx3051,_fehx3051,_fely3051,_fehy3051);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3051 = new TH1F("Graph_Graph3051","",100,0,1320);
   Graph_Graph3051->SetMinimum(0);
   Graph_Graph3051->SetMaximum(2);
   Graph_Graph3051->SetDirectory(0);
   Graph_Graph3051->SetStats(0);
   Graph_Graph3051->SetLineWidth(2);
   Graph_Graph3051->SetMarkerStyle(20);
   Graph_Graph3051->GetXaxis()->SetRange(1,91);
   Graph_Graph3051->GetXaxis()->SetNdivisions(509);
   Graph_Graph3051->GetXaxis()->SetLabelFont(132);
   Graph_Graph3051->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3051->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3051->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3051->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3051->GetXaxis()->SetTitleFont(132);
   Graph_Graph3051->GetYaxis()->SetNdivisions(509);
   Graph_Graph3051->GetYaxis()->SetLabelFont(132);
   Graph_Graph3051->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3051->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3051->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3051->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3051->GetYaxis()->SetTitleFont(132);
   Graph_Graph3051->GetZaxis()->SetLabelFont(132);
   Graph_Graph3051->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3051->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3051->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3051->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3051);
   
   grae->Draw("2 ");
   
   Double_t _fx3052[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3052[12] = {
   0.9183754,
   0.7572564,
   1.049413,
   0.8090718,
   0.9187851,
   2.059407,
   0.8659201,
   0.3452792,
   1.29293,
   1.560586,
   0.3918922,
   0};
   Double_t _felx3052[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3052[12] = {
   0.2070893,
   0.1125928,
   0.1789279,
   0.2351057,
   0.2921319,
   0.5984368,
   0.3866694,
   0.3452792,
   0.7424103,
   1.11497,
   0.3918922,
   0};
   Double_t _fehx3052[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3052[12] = {
   0.1977962,
   0.1093011,
   0.1729141,
   0.2212625,
   0.2731297,
   0.5632003,
   0.3490495,
   0.4694795,
   0.6406017,
   0.8969313,
   0.5328597,
   0.7464576};
   grae = new TGraphAsymmErrors(12,_fx3052,_fy3052,_felx3052,_fehx3052,_fely3052,_fehy3052);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3052 = new TH1F("Graph_Graph3052","",100,0,1320);
   Graph_Graph3052->SetMinimum(0);
   Graph_Graph3052->SetMaximum(2.884868);
   Graph_Graph3052->SetDirectory(0);
   Graph_Graph3052->SetStats(0);
   Graph_Graph3052->SetLineWidth(2);
   Graph_Graph3052->SetMarkerStyle(20);
   Graph_Graph3052->GetXaxis()->SetNdivisions(509);
   Graph_Graph3052->GetXaxis()->SetLabelFont(132);
   Graph_Graph3052->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3052->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3052->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3052->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3052->GetXaxis()->SetTitleFont(132);
   Graph_Graph3052->GetYaxis()->SetNdivisions(509);
   Graph_Graph3052->GetYaxis()->SetLabelFont(132);
   Graph_Graph3052->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3052->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3052->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3052->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3052->GetYaxis()->SetTitleFont(132);
   Graph_Graph3052->GetZaxis()->SetLabelFont(132);
   Graph_Graph3052->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3052->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3052->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3052->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3052);
   
   grae->Draw("p ");
   
   TH1F *hist__39 = new TH1F("hist__39","NCpi0BDT_theta0_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__39->SetLineColor(ci);
   hist__39->GetXaxis()->SetLabelFont(42);
   hist__39->GetXaxis()->SetTitleOffset(1);
   hist__39->GetXaxis()->SetTitleFont(42);
   hist__39->GetYaxis()->SetNdivisions(405);
   hist__39->GetYaxis()->SetLabelFont(42);
   hist__39->GetYaxis()->SetTitleFont(42);
   hist__39->GetZaxis()->SetLabelFont(42);
   hist__39->GetZaxis()->SetTitleOffset(1);
   hist__39->GetZaxis()->SetTitleFont(42);
   hist__39->Draw("axis same");
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
   canvas13->cd();
   canvas13->Modified();
   canvas13->cd();
   canvas13->SetSelected(canvas13);
}
