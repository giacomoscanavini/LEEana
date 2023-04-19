#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 15:23:26 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
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
   pad1->Range(-61.53846,-15.83991,451.2821,1751.56);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__13->SetBinContent(1,543.4705);
   hmc__13->SetBinContent(2,791.9953);
   hmc__13->SetBinContent(3,732.153);
   hmc__13->SetBinContent(4,540.0188);
   hmc__13->SetBinContent(5,346.2575);
   hmc__13->SetBinContent(6,213.9117);
   hmc__13->SetBinContent(7,141.6688);
   hmc__13->SetBinContent(8,93.07343);
   hmc__13->SetBinContent(9,57.73083);
   hmc__13->SetBinContent(10,33.98141);
   hmc__13->SetBinContent(11,26.23651);
   hmc__13->SetBinContent(12,16.32512);
   hmc__13->SetBinContent(13,7.937422);
   hmc__13->SetBinContent(14,4.986048);
   hmc__13->SetBinContent(15,4.55619);
   hmc__13->SetBinContent(16,2.932832);
   hmc__13->SetBinContent(17,6.470473);
   hmc__13->SetBinError(1,140.7684);
   hmc__13->SetBinError(2,246.3345);
   hmc__13->SetBinError(3,243.1934);
   hmc__13->SetBinError(4,191.6901);
   hmc__13->SetBinError(5,133.2525);
   hmc__13->SetBinError(6,84.3689);
   hmc__13->SetBinError(7,57.49896);
   hmc__13->SetBinError(8,42.35217);
   hmc__13->SetBinError(9,35.02931);
   hmc__13->SetBinError(10,14.49379);
   hmc__13->SetBinError(11,14.57134);
   hmc__13->SetBinError(12,11.90798);
   hmc__13->SetBinError(13,5.784424);
   hmc__13->SetBinError(14,9.329387);
   hmc__13->SetBinError(15,6.527937);
   hmc__13->SetBinError(16,3.363051);
   hmc__13->SetBinError(17,6.220369);
   hmc__13->SetMinimum(-15.83991);
   hmc__13->SetMaximum(1663.19);
   hmc__13->SetEntries(3516.85);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",16,0,400);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(831.5951);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,12.41133);
   hbadmatch_stack_1->SetBinContent(2,14.20176);
   hbadmatch_stack_1->SetBinContent(3,21.62493);
   hbadmatch_stack_1->SetBinContent(4,13.77623);
   hbadmatch_stack_1->SetBinContent(5,5.489522);
   hbadmatch_stack_1->SetBinContent(6,5.632611);
   hbadmatch_stack_1->SetBinContent(7,4.104661);
   hbadmatch_stack_1->SetBinContent(8,1.31777);
   hbadmatch_stack_1->SetBinContent(9,0.7302274);
   hbadmatch_stack_1->SetBinContent(10,0.8770706);
   hbadmatch_stack_1->SetBinContent(11,0.6803553);
   hbadmatch_stack_1->SetBinContent(12,0.536893);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.784737);
   hbadmatch_stack_1->SetBinError(2,1.905943);
   hbadmatch_stack_1->SetBinError(3,3.115459);
   hbadmatch_stack_1->SetBinError(4,2.198004);
   hbadmatch_stack_1->SetBinError(5,1.124992);
   hbadmatch_stack_1->SetBinError(6,1.280464);
   hbadmatch_stack_1->SetBinError(7,1.030678);
   hbadmatch_stack_1->SetBinError(8,0.6069298);
   hbadmatch_stack_1->SetBinError(9,0.4379386);
   hbadmatch_stack_1->SetBinError(10,0.5197486);
   hbadmatch_stack_1->SetBinError(11,0.4810838);
   hbadmatch_stack_1->SetBinError(12,0.3929602);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,59.08127);
   hext_stack_2->SetBinContent(2,73.619);
   hext_stack_2->SetBinContent(3,63.07224);
   hext_stack_2->SetBinContent(4,36.57168);
   hext_stack_2->SetBinContent(5,19.31752);
   hext_stack_2->SetBinContent(6,8.821025);
   hext_stack_2->SetBinContent(7,6.463634);
   hext_stack_2->SetBinContent(8,2.428004);
   hext_stack_2->SetBinContent(9,2.110787);
   hext_stack_2->SetBinContent(10,2.566457);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.6487947);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.8131978);
   hext_stack_2->SetBinError(1,5.43396);
   hext_stack_2->SetBinError(2,5.905841);
   hext_stack_2->SetBinError(3,5.560563);
   hext_stack_2->SetBinError(4,4.26552);
   hext_stack_2->SetBinError(5,3.056789);
   hext_stack_2->SetBinError(6,1.994103);
   hext_stack_2->SetBinError(7,1.744878);
   hext_stack_2->SetBinError(8,1.028599);
   hext_stack_2->SetBinError(9,0.8669371);
   hext_stack_2->SetBinError(10,1.283228);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4587671);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.5750177);
   hext_stack_2->SetEntries(621);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,4.96895);
   hdirt_stack_3->SetBinContent(2,4.833838);
   hdirt_stack_3->SetBinContent(3,3.416586);
   hdirt_stack_3->SetBinContent(4,1.02759);
   hdirt_stack_3->SetBinContent(5,0.9099599);
   hdirt_stack_3->SetBinContent(6,0.4828655);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinError(1,1.172394);
   hdirt_stack_3->SetBinError(2,1.103787);
   hdirt_stack_3->SetBinError(3,1.197028);
   hdirt_stack_3->SetBinError(4,0.5229813);
   hdirt_stack_3->SetBinError(5,0.5081362);
   hdirt_stack_3->SetBinError(6,0.3678347);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetEntries(69);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,43.1667);
   houtFV_stack_4->SetBinContent(2,49.76495);
   houtFV_stack_4->SetBinContent(3,43.89523);
   houtFV_stack_4->SetBinContent(4,29.36092);
   houtFV_stack_4->SetBinContent(5,17.30592);
   houtFV_stack_4->SetBinContent(6,9.548101);
   houtFV_stack_4->SetBinContent(7,9.541004);
   houtFV_stack_4->SetBinContent(8,6.550304);
   houtFV_stack_4->SetBinContent(9,1.752078);
   houtFV_stack_4->SetBinContent(10,2.640747);
   houtFV_stack_4->SetBinContent(11,1.857266);
   houtFV_stack_4->SetBinContent(12,0.3401776);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinContent(15,0.2510497);
   houtFV_stack_4->SetBinError(1,3.333871);
   houtFV_stack_4->SetBinError(2,3.520546);
   houtFV_stack_4->SetBinError(3,3.333598);
   houtFV_stack_4->SetBinError(4,2.746698);
   houtFV_stack_4->SetBinError(5,2.024771);
   houtFV_stack_4->SetBinError(6,1.542089);
   houtFV_stack_4->SetBinError(7,1.59242);
   houtFV_stack_4->SetBinError(8,1.256342);
   houtFV_stack_4->SetBinError(9,0.7024635);
   houtFV_stack_4->SetBinError(10,0.784705);
   houtFV_stack_4->SetBinError(11,0.6799255);
   houtFV_stack_4->SetBinError(12,0.3401776);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetBinError(15,0.2510497);
   houtFV_stack_4->SetEntries(931);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.184426);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.9057537);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.030644);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3637747);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2133949);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3671473);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.812676);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.18876);
   hNCpi0inFVqe_stack_6->SetBinContent(3,4.503205);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.235416);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.381222);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4193552);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.7693257);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.6296638);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5721251);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3788857);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(347);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,168.8277);
   hNCpi0inFVres_stack_7->SetBinContent(2,345.3458);
   hNCpi0inFVres_stack_7->SetBinContent(3,332.0203);
   hNCpi0inFVres_stack_7->SetBinContent(4,241.7655);
   hNCpi0inFVres_stack_7->SetBinContent(5,148.1561);
   hNCpi0inFVres_stack_7->SetBinContent(6,90.93459);
   hNCpi0inFVres_stack_7->SetBinContent(7,53.36145);
   hNCpi0inFVres_stack_7->SetBinContent(8,34.56957);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.88905);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.38159);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.887676);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.349096);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.504944);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.241722);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.9771723);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.5438859);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8771898);
   hNCpi0inFVres_stack_7->SetBinError(1,4.199713);
   hNCpi0inFVres_stack_7->SetBinError(2,6.109586);
   hNCpi0inFVres_stack_7->SetBinError(3,5.946464);
   hNCpi0inFVres_stack_7->SetBinError(4,5.147514);
   hNCpi0inFVres_stack_7->SetBinError(5,4.018919);
   hNCpi0inFVres_stack_7->SetBinError(6,3.190114);
   hNCpi0inFVres_stack_7->SetBinError(7,2.378008);
   hNCpi0inFVres_stack_7->SetBinError(8,1.936607);
   hNCpi0inFVres_stack_7->SetBinError(9,1.525349);
   hNCpi0inFVres_stack_7->SetBinError(10,1.136115);
   hNCpi0inFVres_stack_7->SetBinError(11,0.878821);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6913409);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3847468);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3737142);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3978442);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2338466);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2413539);
   hNCpi0inFVres_stack_7->SetEntries(26810);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,33.64454);
   hNCpi0inFVdis_stack_8->SetBinContent(2,63.64146);
   hNCpi0inFVdis_stack_8->SetBinContent(3,56.88781);
   hNCpi0inFVdis_stack_8->SetBinContent(4,41.36788);
   hNCpi0inFVdis_stack_8->SetBinContent(5,32.79776);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.24916);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.78523);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.518501);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.59265);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.026498);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.562408);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.43719);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.781536);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6420361);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8934723);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.599022);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.31214);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.857725);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.564041);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.411247);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.067318);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.934043);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.390891);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.168651);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9576601);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8300035);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5610193);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4337272);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4217465);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2954882);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2888274);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3948984);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2640716);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.447638);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3763178);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.6141361);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1313578);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.2874767);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(29);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,48.41164);
   hCCpi0inFV_stack_10->SetBinContent(2,97.5874);
   hCCpi0inFV_stack_10->SetBinContent(3,111.5406);
   hCCpi0inFV_stack_10->SetBinContent(4,90.4294);
   hCCpi0inFV_stack_10->SetBinContent(5,60.65544);
   hCCpi0inFV_stack_10->SetBinContent(6,37.58247);
   hCCpi0inFV_stack_10->SetBinContent(7,25.4948);
   hCCpi0inFV_stack_10->SetBinContent(8,15.49137);
   hCCpi0inFV_stack_10->SetBinContent(9,8.894591);
   hCCpi0inFV_stack_10->SetBinContent(10,5.733486);
   hCCpi0inFV_stack_10->SetBinContent(11,4.99626);
   hCCpi0inFV_stack_10->SetBinContent(12,3.324483);
   hCCpi0inFV_stack_10->SetBinContent(13,2.192263);
   hCCpi0inFV_stack_10->SetBinContent(14,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(15,1.020533);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(17,1.412273);
   hCCpi0inFV_stack_10->SetBinError(1,3.529915);
   hCCpi0inFV_stack_10->SetBinError(2,4.967599);
   hCCpi0inFV_stack_10->SetBinError(3,5.301904);
   hCCpi0inFV_stack_10->SetBinError(4,4.814796);
   hCCpi0inFV_stack_10->SetBinError(5,3.863571);
   hCCpi0inFV_stack_10->SetBinError(6,3.032357);
   hCCpi0inFV_stack_10->SetBinError(7,2.571348);
   hCCpi0inFV_stack_10->SetBinError(8,2.007916);
   hCCpi0inFV_stack_10->SetBinError(9,1.494912);
   hCCpi0inFV_stack_10->SetBinError(10,1.197184);
   hCCpi0inFV_stack_10->SetBinError(11,1.038334);
   hCCpi0inFV_stack_10->SetBinError(12,0.9211559);
   hCCpi0inFV_stack_10->SetBinError(13,0.6618798);
   hCCpi0inFV_stack_10->SetBinError(14,0.48078);
   hCCpi0inFV_stack_10->SetBinError(15,0.5892049);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(17,0.6510715);
   hCCpi0inFV_stack_10->SetEntries(2205);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,50.02775);
   hNCinFV_stack_11->SetBinContent(2,39.16066);
   hNCinFV_stack_11->SetBinContent(3,38.09011);
   hNCinFV_stack_11->SetBinContent(4,34.14811);
   hNCinFV_stack_11->SetBinContent(5,29.2354);
   hNCinFV_stack_11->SetBinContent(6,24.76927);
   hNCinFV_stack_11->SetBinContent(7,17.32789);
   hNCinFV_stack_11->SetBinContent(8,13.4862);
   hNCinFV_stack_11->SetBinContent(9,10.2407);
   hNCinFV_stack_11->SetBinContent(10,5.424956);
   hNCinFV_stack_11->SetBinContent(11,6.897244);
   hNCinFV_stack_11->SetBinContent(12,3.717914);
   hNCinFV_stack_11->SetBinContent(13,1.607298);
   hNCinFV_stack_11->SetBinContent(14,0.9801958);
   hNCinFV_stack_11->SetBinContent(15,1.217248);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,1.127039);
   hNCinFV_stack_11->SetBinError(1,3.645327);
   hNCinFV_stack_11->SetBinError(2,3.097197);
   hNCinFV_stack_11->SetBinError(3,3.021535);
   hNCinFV_stack_11->SetBinError(4,2.950677);
   hNCinFV_stack_11->SetBinError(5,2.647023);
   hNCinFV_stack_11->SetBinError(6,2.465839);
   hNCinFV_stack_11->SetBinError(7,2.150145);
   hNCinFV_stack_11->SetBinError(8,1.85189);
   hNCinFV_stack_11->SetBinError(9,1.700092);
   hNCinFV_stack_11->SetBinError(10,1.143918);
   hNCinFV_stack_11->SetBinError(11,1.302599);
   hNCinFV_stack_11->SetBinError(12,0.9622484);
   hNCinFV_stack_11->SetBinError(13,0.6796534);
   hNCinFV_stack_11->SetBinError(14,0.4383608);
   hNCinFV_stack_11->SetBinError(15,0.6211758);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.5201044);
   hNCinFV_stack_11->SetEntries(1184);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,113.2492);
   hnumuCCinFV_stack_12->SetBinContent(2,92.24089);
   hnumuCCinFV_stack_12->SetBinContent(3,53.70494);
   hnumuCCinFV_stack_12->SetBinContent(4,45.81248);
   hnumuCCinFV_stack_12->SetBinContent(5,28.64964);
   hnumuCCinFV_stack_12->SetBinContent(6,15.14682);
   hnumuCCinFV_stack_12->SetBinContent(7,11.28891);
   hnumuCCinFV_stack_12->SetBinContent(8,9.788282);
   hnumuCCinFV_stack_12->SetBinContent(9,6.825346);
   hnumuCCinFV_stack_12->SetBinContent(10,2.107235);
   hnumuCCinFV_stack_12->SetBinContent(11,2.7859);
   hnumuCCinFV_stack_12->SetBinContent(12,1.747651);
   hnumuCCinFV_stack_12->SetBinContent(13,1.158907);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(17,0.9286332);
   hnumuCCinFV_stack_12->SetBinError(1,6.532999);
   hnumuCCinFV_stack_12->SetBinError(2,6.112569);
   hnumuCCinFV_stack_12->SetBinError(3,4.017601);
   hnumuCCinFV_stack_12->SetBinError(4,3.762248);
   hnumuCCinFV_stack_12->SetBinError(5,2.977826);
   hnumuCCinFV_stack_12->SetBinError(6,1.980715);
   hnumuCCinFV_stack_12->SetBinError(7,1.779331);
   hnumuCCinFV_stack_12->SetBinError(8,1.604631);
   hnumuCCinFV_stack_12->SetBinError(9,1.293596);
   hnumuCCinFV_stack_12->SetBinError(10,0.6801976);
   hnumuCCinFV_stack_12->SetBinError(11,0.8327353);
   hnumuCCinFV_stack_12->SetBinError(12,0.6322477);
   hnumuCCinFV_stack_12->SetBinError(13,0.5329744);
   hnumuCCinFV_stack_12->SetBinError(14,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(17,0.48078);
   hnumuCCinFV_stack_12->SetEntries(1510);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,6.656484);
   hnueCCinFV_stack_13->SetBinContent(2,5.128695);
   hnueCCinFV_stack_13->SetBinContent(3,2.295725);
   hnueCCinFV_stack_13->SetBinContent(4,1.240429);
   hnueCCinFV_stack_13->SetBinContent(5,1.815979);
   hnueCCinFV_stack_13->SetBinContent(6,1.072095);
   hnueCCinFV_stack_13->SetBinContent(7,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(8,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(9,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,1.985194);
   hnueCCinFV_stack_13->SetBinError(2,1.603318);
   hnueCCinFV_stack_13->SetBinError(3,0.7882676);
   hnueCCinFV_stack_13->SetBinError(4,0.5090713);
   hnueCCinFV_stack_13->SetBinError(5,0.7623532);
   hnueCCinFV_stack_13->SetBinError(6,0.5551335);
   hnueCCinFV_stack_13->SetBinError(7,0.3387718);
   hnueCCinFV_stack_13->SetBinError(8,0.3397478);
   hnueCCinFV_stack_13->SetBinError(9,0.2486649);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetEntries(72);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__14->SetBinContent(1,543.4705);
   hmcerror__14->SetBinContent(2,791.9953);
   hmcerror__14->SetBinContent(3,732.153);
   hmcerror__14->SetBinContent(4,540.0188);
   hmcerror__14->SetBinContent(5,346.2575);
   hmcerror__14->SetBinContent(6,213.9117);
   hmcerror__14->SetBinContent(7,141.6688);
   hmcerror__14->SetBinContent(8,93.07343);
   hmcerror__14->SetBinContent(9,57.73083);
   hmcerror__14->SetBinContent(10,33.98141);
   hmcerror__14->SetBinContent(11,26.23651);
   hmcerror__14->SetBinContent(12,16.32512);
   hmcerror__14->SetBinContent(13,7.937422);
   hmcerror__14->SetBinContent(14,4.986048);
   hmcerror__14->SetBinContent(15,4.55619);
   hmcerror__14->SetBinContent(16,2.932832);
   hmcerror__14->SetBinContent(17,6.470473);
   hmcerror__14->SetBinError(1,140.7684);
   hmcerror__14->SetBinError(2,246.3345);
   hmcerror__14->SetBinError(3,243.1934);
   hmcerror__14->SetBinError(4,191.6901);
   hmcerror__14->SetBinError(5,133.2525);
   hmcerror__14->SetBinError(6,84.3689);
   hmcerror__14->SetBinError(7,57.49896);
   hmcerror__14->SetBinError(8,42.35217);
   hmcerror__14->SetBinError(9,35.02931);
   hmcerror__14->SetBinError(10,14.49379);
   hmcerror__14->SetBinError(11,14.57134);
   hmcerror__14->SetBinError(12,11.90798);
   hmcerror__14->SetBinError(13,5.784424);
   hmcerror__14->SetBinError(14,9.329387);
   hmcerror__14->SetBinError(15,6.527937);
   hmcerror__14->SetBinError(16,3.363051);
   hmcerror__14->SetBinError(17,6.220369);
   hmcerror__14->SetEntries(3516.85);

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
   
   Double_t _fx3017[16] = {
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
   Double_t _fy3017[16] = {
   423,
   595,
   567,
   386,
   268,
   146,
   95,
   47,
   31,
   22,
   10,
   11,
   8,
   4,
   2,
   1};
   Double_t _felx3017[16] = {
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
   Double_t _fely3017[16] = {
   20.56696,
   24.39262,
   23.81176,
   19.64688,
   16.37071,
   12.08305,
   9.8686,
   6.9882,
   5.7094,
   4.8417,
   3.34883,
   3.4975,
   3.0307,
   2.29683,
   2,
   1};
   Double_t _fehx3017[16] = {
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
   Double_t _fehy3017[16] = {
   20.56696,
   24.39262,
   23.81176,
   19.64688,
   16.37071,
   12.08305,
   9.667,
   6.7839,
   5.5017,
   4.6299,
   3.1179,
   3.27,
   2.7896,
   1.98186,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,440);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(681.3319);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.8/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2616.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1462.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  282.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 514.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 276.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 385.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all");
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
   
   Double_t _fx3018[16] = {
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
   Double_t _fy3018[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[16] = {
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
   Double_t _fely3018[16] = {
   0.2590175,
   0.3110303,
   0.332162,
   0.3549693,
   0.3848364,
   0.39441,
   0.4058688,
   0.4550404,
   0.6067696,
   0.4265213,
   0.5553842,
   0.7294268,
   0.7287534,
   1.871099,
   1.432762,
   1.146691};
   Double_t _fehx3018[16] = {
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
   Double_t _fehy3018[16] = {
   0.2590175,
   0.3110303,
   0.332162,
   0.3549693,
   0.3848364,
   0.39441,
   0.4058688,
   0.4550404,
   0.6067696,
   0.4265213,
   0.5553842,
   0.7294268,
   0.7287534,
   1.871099,
   1.432762,
   1.146691};
   grae = new TGraphAsymmErrors(16,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
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
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3019[16] = {
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
   Double_t _fy3019[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[16] = {
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
   Double_t _fely3019[16] = {
   0.2393317,
   0.2994559,
   0.3221773,
   0.338037,
   0.3555535,
   0.3631486,
   0.338604,
   0.3489836,
   0.3424327,
   0.3113108,
   0.2789642,
   0.2665296,
   0.3404867,
   0.3736216,
   0.3758567,
   0.4152741};
   Double_t _fehx3019[16] = {
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
   Double_t _fehy3019[16] = {
   0.2393317,
   0.2994559,
   0.3221773,
   0.338037,
   0.3555535,
   0.3631486,
   0.338604,
   0.3489836,
   0.3424327,
   0.3113108,
   0.2789642,
   0.2665296,
   0.3404867,
   0.3736216,
   0.3758567,
   0.4152741};
   grae = new TGraphAsymmErrors(16,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
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
   
   Double_t _fx3020[16] = {
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
   Double_t _fy3020[16] = {
   0.7783311,
   0.7512671,
   0.7744283,
   0.7147899,
   0.7739904,
   0.6825247,
   0.670578,
   0.5049777,
   0.5369748,
   0.6474129,
   0.3811483,
   0.673808,
   1.007884,
   0.8022386,
   0.4389632,
   0.3409674};
   Double_t _felx3020[16] = {
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
   Double_t _fely3020[16] = {
   0.03784375,
   0.03079895,
   0.03252293,
   0.03638185,
   0.04727899,
   0.05648614,
   0.06965964,
   0.07508266,
   0.0988969,
   0.1424809,
   0.1276401,
   0.2142403,
   0.3818242,
   0.4606514,
   0.4389632,
   0.3409674};
   Double_t _fehx3020[16] = {
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
   Double_t _fehy3020[16] = {
   0.03784375,
   0.03079895,
   0.03252293,
   0.03638185,
   0.04727899,
   0.05648614,
   0.0682366,
   0.07288762,
   0.09529916,
   0.136248,
   0.1188382,
   0.2003047,
   0.3514491,
   0.3974812,
   0.3334299,
   0.4636168};
   grae = new TGraphAsymmErrors(16,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,440);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(1.495266);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",16,0,400);

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
