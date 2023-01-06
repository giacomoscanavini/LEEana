#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 18:31:54 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-6.46,676.9231,714.34);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__19->SetBinContent(1,15.84901);
   hmc__19->SetBinContent(2,68.28564);
   hmc__19->SetBinContent(3,179.4519);
   hmc__19->SetBinContent(4,292.5478);
   hmc__19->SetBinContent(5,321.386);
   hmc__19->SetBinContent(6,304.9843);
   hmc__19->SetBinContent(7,225.4519);
   hmc__19->SetBinContent(8,183.7706);
   hmc__19->SetBinContent(9,150.0367);
   hmc__19->SetBinContent(10,123.5776);
   hmc__19->SetBinContent(11,100.2671);
   hmc__19->SetBinContent(12,78.04434);
   hmc__19->SetBinContent(13,57.57449);
   hmc__19->SetBinContent(14,52.78321);
   hmc__19->SetBinContent(15,35.71699);
   hmc__19->SetBinContent(16,28.75884);
   hmc__19->SetBinContent(17,24.2516);
   hmc__19->SetBinContent(18,15.60764);
   hmc__19->SetBinContent(19,15.68925);
   hmc__19->SetBinContent(20,13.5324);
   hmc__19->SetBinContent(21,101.4887);
   hmc__19->SetBinError(1,8.168788);
   hmc__19->SetBinError(2,26.23552);
   hmc__19->SetBinError(3,69.51195);
   hmc__19->SetBinError(4,125.7841);
   hmc__19->SetBinError(5,137.8221);
   hmc__19->SetBinError(6,125.2958);
   hmc__19->SetBinError(7,98.04107);
   hmc__19->SetBinError(8,77.40565);
   hmc__19->SetBinError(9,60.70572);
   hmc__19->SetBinError(10,49.8746);
   hmc__19->SetBinError(11,37.35966);
   hmc__19->SetBinError(12,31.78507);
   hmc__19->SetBinError(13,23.71249);
   hmc__19->SetBinError(14,31.47446);
   hmc__19->SetBinError(15,15.71898);
   hmc__19->SetBinError(16,13.19125);
   hmc__19->SetBinError(17,9.565208);
   hmc__19->SetBinError(18,9.080853);
   hmc__19->SetBinError(19,12.81306);
   hmc__19->SetBinError(20,10.75713);
   hmc__19->SetBinError(21,40.34582);
   hmc__19->SetMinimum(-6.46);
   hmc__19->SetMaximum(678.3);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,600);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(337.4553);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.678984);
   hbadmatch_stack_1->SetBinContent(2,3.073465);
   hbadmatch_stack_1->SetBinContent(3,7.81298);
   hbadmatch_stack_1->SetBinContent(4,7.959981);
   hbadmatch_stack_1->SetBinContent(5,7.875841);
   hbadmatch_stack_1->SetBinContent(6,7.358875);
   hbadmatch_stack_1->SetBinContent(7,6.250832);
   hbadmatch_stack_1->SetBinContent(8,4.606854);
   hbadmatch_stack_1->SetBinContent(9,1.947719);
   hbadmatch_stack_1->SetBinContent(10,1.351941);
   hbadmatch_stack_1->SetBinContent(11,0.6803553);
   hbadmatch_stack_1->SetBinContent(12,1.037816);
   hbadmatch_stack_1->SetBinContent(13,0.8437076);
   hbadmatch_stack_1->SetBinContent(14,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.3459499);
   hbadmatch_stack_1->SetBinContent(16,0.4157053);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.8556126);
   hbadmatch_stack_1->SetBinError(1,0.7177132);
   hbadmatch_stack_1->SetBinError(2,0.9356752);
   hbadmatch_stack_1->SetBinError(3,1.519638);
   hbadmatch_stack_1->SetBinError(4,1.400478);
   hbadmatch_stack_1->SetBinError(5,1.857434);
   hbadmatch_stack_1->SetBinError(6,1.373268);
   hbadmatch_stack_1->SetBinError(7,2.233896);
   hbadmatch_stack_1->SetBinError(8,1.086141);
   hbadmatch_stack_1->SetBinError(9,0.8663269);
   hbadmatch_stack_1->SetBinError(10,0.629528);
   hbadmatch_stack_1->SetBinError(11,0.4810838);
   hbadmatch_stack_1->SetBinError(12,0.701873);
   hbadmatch_stack_1->SetBinError(13,0.4249496);
   hbadmatch_stack_1->SetBinError(14,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.2543575);
   hbadmatch_stack_1->SetBinError(16,0.3484612);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.4557991);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,4.841647);
   hext_stack_2->SetBinContent(2,11.26339);
   hext_stack_2->SetBinContent(3,22.72866);
   hext_stack_2->SetBinContent(4,26.90716);
   hext_stack_2->SetBinContent(5,25.63829);
   hext_stack_2->SetBinContent(6,37.0836);
   hext_stack_2->SetBinContent(7,14.85211);
   hext_stack_2->SetBinContent(8,9.481409);
   hext_stack_2->SetBinContent(9,7.601229);
   hext_stack_2->SetBinContent(10,8.642262);
   hext_stack_2->SetBinContent(11,5.001641);
   hext_stack_2->SetBinContent(12,2.27519);
   hext_stack_2->SetBinContent(13,4.021268);
   hext_stack_2->SetBinContent(14,2.27519);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,2.566457);
   hext_stack_2->SetBinContent(18,1.137595);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.6487947);
   hext_stack_2->SetBinError(1,1.586957);
   hext_stack_2->SetBinError(2,2.152222);
   hext_stack_2->SetBinError(3,3.190635);
   hext_stack_2->SetBinError(4,3.590337);
   hext_stack_2->SetBinError(5,3.415374);
   hext_stack_2->SetBinError(6,4.429258);
   hext_stack_2->SetBinError(7,2.706327);
   hext_stack_2->SetBinError(8,2.029984);
   hext_stack_2->SetBinError(9,1.865604);
   hext_stack_2->SetBinError(10,2.063655);
   hext_stack_2->SetBinError(11,1.582242);
   hext_stack_2->SetBinError(12,0.9336798);
   hext_stack_2->SetBinError(13,1.545635);
   hext_stack_2->SetBinError(14,0.9336798);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,1.283228);
   hext_stack_2->SetBinError(18,0.6602113);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.4587671);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(2,1.139739);
   hdirt_stack_3->SetBinContent(3,1.359222);
   hdirt_stack_3->SetBinContent(4,3.200666);
   hdirt_stack_3->SetBinContent(5,2.313253);
   hdirt_stack_3->SetBinContent(6,0.8398326);
   hdirt_stack_3->SetBinContent(7,0.6566868);
   hdirt_stack_3->SetBinContent(8,1.152633);
   hdirt_stack_3->SetBinContent(9,0.3569671);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinError(2,0.4786939);
   hdirt_stack_3->SetBinError(3,0.598162);
   hdirt_stack_3->SetBinError(4,1.185345);
   hdirt_stack_3->SetBinError(5,0.7858761);
   hdirt_stack_3->SetBinError(6,0.4497571);
   hdirt_stack_3->SetBinError(7,0.3791383);
   hdirt_stack_3->SetBinError(8,0.6018102);
   hdirt_stack_3->SetBinError(9,0.258803);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,0.536893);
   houtFV_stack_4->SetBinContent(2,5.652307);
   houtFV_stack_4->SetBinContent(3,8.532234);
   houtFV_stack_4->SetBinContent(4,9.678403);
   houtFV_stack_4->SetBinContent(5,11.50408);
   houtFV_stack_4->SetBinContent(6,10.72364);
   houtFV_stack_4->SetBinContent(7,9.700722);
   houtFV_stack_4->SetBinContent(8,6.120723);
   houtFV_stack_4->SetBinContent(9,8.295227);
   houtFV_stack_4->SetBinContent(10,3.093786);
   houtFV_stack_4->SetBinContent(11,2.819836);
   houtFV_stack_4->SetBinContent(12,2.25233);
   houtFV_stack_4->SetBinContent(13,1.320373);
   houtFV_stack_4->SetBinContent(14,1.877038);
   houtFV_stack_4->SetBinContent(15,0.8298061);
   houtFV_stack_4->SetBinContent(16,0.6405246);
   houtFV_stack_4->SetBinContent(17,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.1777884);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.7834804);
   houtFV_stack_4->SetBinContent(21,1.497979);
   houtFV_stack_4->SetBinError(1,0.3929602);
   houtFV_stack_4->SetBinError(2,1.233404);
   houtFV_stack_4->SetBinError(3,1.424918);
   houtFV_stack_4->SetBinError(4,1.608609);
   houtFV_stack_4->SetBinError(5,1.642431);
   houtFV_stack_4->SetBinError(6,1.61609);
   houtFV_stack_4->SetBinError(7,1.55555);
   houtFV_stack_4->SetBinError(8,1.142865);
   houtFV_stack_4->SetBinError(9,1.41922);
   houtFV_stack_4->SetBinError(10,0.8514572);
   houtFV_stack_4->SetBinError(11,0.810073);
   houtFV_stack_4->SetBinError(12,0.6586286);
   houtFV_stack_4->SetBinError(13,0.5548703);
   houtFV_stack_4->SetBinError(14,0.6688293);
   houtFV_stack_4->SetBinError(15,0.3951174);
   houtFV_stack_4->SetBinError(16,0.3286357);
   houtFV_stack_4->SetBinError(17,0.3397478);
   houtFV_stack_4->SetBinError(18,0.1777884);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(20,0.3917439);
   houtFV_stack_4->SetBinError(21,0.6392961);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2245515);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3884996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4934192);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9008006);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6279312);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09039138);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5261656);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2747122);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1622325);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.07795165);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.04030234);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05370995);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.04281797);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.439874);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.160106);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1922251);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2158367);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3164467);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2381064);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05900839);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2798554);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1748383);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.08121681);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04261305);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02333943);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05370994);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03163788);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1510662);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.27496);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.111617);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.605238);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.421576);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9525083);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.169239);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.06279);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5527475);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7507622);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3435476);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1284962);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03023572);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.198548);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2573083);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08135562);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2492614);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5205154);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2909636);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2203837);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3229298);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3268332);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1749482);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3051032);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1545965);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04920559);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02165334);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1330004);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1819453);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02516554);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.09539);
   hNCpi0inFVres_stack_7->SetBinContent(2,16.86783);
   hNCpi0inFVres_stack_7->SetBinContent(3,59.99023);
   hNCpi0inFVres_stack_7->SetBinContent(4,115.9548);
   hNCpi0inFVres_stack_7->SetBinContent(5,130.3585);
   hNCpi0inFVres_stack_7->SetBinContent(6,120.3765);
   hNCpi0inFVres_stack_7->SetBinContent(7,90.43531);
   hNCpi0inFVres_stack_7->SetBinContent(8,79.54697);
   hNCpi0inFVres_stack_7->SetBinContent(9,64.1591);
   hNCpi0inFVres_stack_7->SetBinContent(10,44.68285);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.70642);
   hNCpi0inFVres_stack_7->SetBinContent(12,29.83136);
   hNCpi0inFVres_stack_7->SetBinContent(13,20.98375);
   hNCpi0inFVres_stack_7->SetBinContent(14,16.39091);
   hNCpi0inFVres_stack_7->SetBinContent(15,14.6468);
   hNCpi0inFVres_stack_7->SetBinContent(16,10.18155);
   hNCpi0inFVres_stack_7->SetBinContent(17,8.429257);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.704358);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.649441);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.390893);
   hNCpi0inFVres_stack_7->SetBinContent(21,31.75953);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2181925);
   hNCpi0inFVres_stack_7->SetBinError(2,1.206079);
   hNCpi0inFVres_stack_7->SetBinError(3,2.317283);
   hNCpi0inFVres_stack_7->SetBinError(4,3.09459);
   hNCpi0inFVres_stack_7->SetBinError(5,3.243033);
   hNCpi0inFVres_stack_7->SetBinError(6,3.154354);
   hNCpi0inFVres_stack_7->SetBinError(7,2.699734);
   hNCpi0inFVres_stack_7->SetBinError(8,2.813689);
   hNCpi0inFVres_stack_7->SetBinError(9,2.468709);
   hNCpi0inFVres_stack_7->SetBinError(10,2.010251);
   hNCpi0inFVres_stack_7->SetBinError(11,1.95438);
   hNCpi0inFVres_stack_7->SetBinError(12,1.763925);
   hNCpi0inFVres_stack_7->SetBinError(13,1.296021);
   hNCpi0inFVres_stack_7->SetBinError(14,1.222297);
   hNCpi0inFVres_stack_7->SetBinError(15,1.384704);
   hNCpi0inFVres_stack_7->SetBinError(16,1.030455);
   hNCpi0inFVres_stack_7->SetBinError(17,1.064427);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8115382);
   hNCpi0inFVres_stack_7->SetBinError(19,1.22979);
   hNCpi0inFVres_stack_7->SetBinError(20,0.828239);
   hNCpi0inFVres_stack_7->SetBinError(21,2.447938);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6126458);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.815156);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.12228);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.48157);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.65367);
   hNCpi0inFVdis_stack_8->SetBinContent(6,20.96678);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.58212);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.50916);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.90543);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.01954);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.725715);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.485029);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.038231);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.84032);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.346869);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.033425);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.3335);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.242633);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.078184);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.300169);
   hNCpi0inFVdis_stack_8->SetBinContent(21,18.52514);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2131156);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3890742);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.02087);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.589076);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.299961);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.38669);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.321219);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.232817);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.131457);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.098922);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8640188);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.038542);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5306677);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.141786);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8182319);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8569185);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8042254);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5705726);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3263354);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4323442);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.854528);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.07673115);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1943231);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.3372378);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1102569);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04881885);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1164264);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1870499);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.07071126);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.7835922);
   hCCpi0inFV_stack_10->SetBinContent(2,5.180059);
   hCCpi0inFV_stack_10->SetBinContent(3,25.66165);
   hCCpi0inFV_stack_10->SetBinContent(4,45.62795);
   hCCpi0inFV_stack_10->SetBinContent(5,58.48871);
   hCCpi0inFV_stack_10->SetBinContent(6,45.16763);
   hCCpi0inFV_stack_10->SetBinContent(7,37.19207);
   hCCpi0inFV_stack_10->SetBinContent(8,28.84337);
   hCCpi0inFV_stack_10->SetBinContent(9,23.60961);
   hCCpi0inFV_stack_10->SetBinContent(10,22.31371);
   hCCpi0inFV_stack_10->SetBinContent(11,19.25809);
   hCCpi0inFV_stack_10->SetBinContent(12,13.61433);
   hCCpi0inFV_stack_10->SetBinContent(13,10.15579);
   hCCpi0inFV_stack_10->SetBinContent(14,9.056479);
   hCCpi0inFV_stack_10->SetBinContent(15,6.7605);
   hCCpi0inFV_stack_10->SetBinContent(16,7.064018);
   hCCpi0inFV_stack_10->SetBinContent(17,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(18,2.00411);
   hCCpi0inFV_stack_10->SetBinContent(19,3.946514);
   hCCpi0inFV_stack_10->SetBinContent(20,2.44065);
   hCCpi0inFV_stack_10->SetBinContent(21,13.6846);
   hCCpi0inFV_stack_10->SetBinError(1,0.4639809);
   hCCpi0inFV_stack_10->SetBinError(2,1.144624);
   hCCpi0inFV_stack_10->SetBinError(3,2.560398);
   hCCpi0inFV_stack_10->SetBinError(4,3.42922);
   hCCpi0inFV_stack_10->SetBinError(5,3.765491);
   hCCpi0inFV_stack_10->SetBinError(6,3.359232);
   hCCpi0inFV_stack_10->SetBinError(7,3.048749);
   hCCpi0inFV_stack_10->SetBinError(8,2.700864);
   hCCpi0inFV_stack_10->SetBinError(9,2.492402);
   hCCpi0inFV_stack_10->SetBinError(10,2.399561);
   hCCpi0inFV_stack_10->SetBinError(11,2.203728);
   hCCpi0inFV_stack_10->SetBinError(12,1.833743);
   hCCpi0inFV_stack_10->SetBinError(13,1.562199);
   hCCpi0inFV_stack_10->SetBinError(14,1.497675);
   hCCpi0inFV_stack_10->SetBinError(15,1.331321);
   hCCpi0inFV_stack_10->SetBinError(16,1.335701);
   hCCpi0inFV_stack_10->SetBinError(17,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(18,0.7352871);
   hCCpi0inFV_stack_10->SetBinError(19,1.056556);
   hCCpi0inFV_stack_10->SetBinError(20,0.7587757);
   hCCpi0inFV_stack_10->SetBinError(21,1.862487);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(1,2.902615);
   hNCinFV_stack_11->SetBinContent(2,11.46018);
   hNCinFV_stack_11->SetBinContent(3,16.79966);
   hNCinFV_stack_11->SetBinContent(4,22.76066);
   hNCinFV_stack_11->SetBinContent(5,28.19566);
   hNCinFV_stack_11->SetBinContent(6,25.62743);
   hNCinFV_stack_11->SetBinContent(7,20.66988);
   hNCinFV_stack_11->SetBinContent(8,18.57035);
   hNCinFV_stack_11->SetBinContent(9,13.05374);
   hNCinFV_stack_11->SetBinContent(10,13.53306);
   hNCinFV_stack_11->SetBinContent(11,12.4873);
   hNCinFV_stack_11->SetBinContent(12,10.57093);
   hNCinFV_stack_11->SetBinContent(13,9.817267);
   hNCinFV_stack_11->SetBinContent(14,8.196113);
   hNCinFV_stack_11->SetBinContent(15,4.659634);
   hNCinFV_stack_11->SetBinContent(16,2.926113);
   hNCinFV_stack_11->SetBinContent(17,3.981011);
   hNCinFV_stack_11->SetBinContent(18,1.926714);
   hNCinFV_stack_11->SetBinContent(19,1.36152);
   hNCinFV_stack_11->SetBinContent(20,1.870667);
   hNCinFV_stack_11->SetBinContent(21,16.26196);
   hNCinFV_stack_11->SetBinError(1,0.9054999);
   hNCinFV_stack_11->SetBinError(2,1.744594);
   hNCinFV_stack_11->SetBinError(3,2.032969);
   hNCinFV_stack_11->SetBinError(4,2.367835);
   hNCinFV_stack_11->SetBinError(5,2.917678);
   hNCinFV_stack_11->SetBinError(6,2.586293);
   hNCinFV_stack_11->SetBinError(7,2.249967);
   hNCinFV_stack_11->SetBinError(8,2.519426);
   hNCinFV_stack_11->SetBinError(9,2.234131);
   hNCinFV_stack_11->SetBinError(10,2.035358);
   hNCinFV_stack_11->SetBinError(11,2.11238);
   hNCinFV_stack_11->SetBinError(12,1.893517);
   hNCinFV_stack_11->SetBinError(13,1.914869);
   hNCinFV_stack_11->SetBinError(14,1.792528);
   hNCinFV_stack_11->SetBinError(15,1.138027);
   hNCinFV_stack_11->SetBinError(16,0.9102067);
   hNCinFV_stack_11->SetBinError(17,1.14683);
   hNCinFV_stack_11->SetBinError(18,1.041376);
   hNCinFV_stack_11->SetBinError(19,0.646474);
   hNCinFV_stack_11->SetBinError(20,0.7814755);
   hNCinFV_stack_11->SetBinError(21,2.511948);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,3.186527);
   hnumuCCinFV_stack_12->SetBinContent(2,10.45379);
   hnumuCCinFV_stack_12->SetBinContent(3,21.65883);
   hnumuCCinFV_stack_12->SetBinContent(4,30.81193);
   hnumuCCinFV_stack_12->SetBinContent(5,32.06458);
   hnumuCCinFV_stack_12->SetBinContent(6,32.60057);
   hnumuCCinFV_stack_12->SetBinContent(7,24.29064);
   hnumuCCinFV_stack_12->SetBinContent(8,20.51849);
   hnumuCCinFV_stack_12->SetBinContent(9,17.77832);
   hnumuCCinFV_stack_12->SetBinContent(10,18.69609);
   hnumuCCinFV_stack_12->SetBinContent(11,11.88527);
   hnumuCCinFV_stack_12->SetBinContent(12,10.65177);
   hnumuCCinFV_stack_12->SetBinContent(13,5.750712);
   hnumuCCinFV_stack_12->SetBinContent(14,6.120254);
   hnumuCCinFV_stack_12->SetBinContent(15,2.621385);
   hnumuCCinFV_stack_12->SetBinContent(16,2.751589);
   hnumuCCinFV_stack_12->SetBinContent(17,1.825382);
   hnumuCCinFV_stack_12->SetBinContent(18,1.390297);
   hnumuCCinFV_stack_12->SetBinContent(19,1.41628);
   hnumuCCinFV_stack_12->SetBinContent(20,1.982715);
   hnumuCCinFV_stack_12->SetBinContent(21,11.93119);
   hnumuCCinFV_stack_12->SetBinError(1,1.065526);
   hnumuCCinFV_stack_12->SetBinError(2,1.799956);
   hnumuCCinFV_stack_12->SetBinError(3,2.66829);
   hnumuCCinFV_stack_12->SetBinError(4,3.398498);
   hnumuCCinFV_stack_12->SetBinError(5,2.967723);
   hnumuCCinFV_stack_12->SetBinError(6,3.857627);
   hnumuCCinFV_stack_12->SetBinError(7,2.674404);
   hnumuCCinFV_stack_12->SetBinError(8,2.492598);
   hnumuCCinFV_stack_12->SetBinError(9,2.261997);
   hnumuCCinFV_stack_12->SetBinError(10,2.560455);
   hnumuCCinFV_stack_12->SetBinError(11,1.798287);
   hnumuCCinFV_stack_12->SetBinError(12,2.10784);
   hnumuCCinFV_stack_12->SetBinError(13,1.192891);
   hnumuCCinFV_stack_12->SetBinError(14,1.296576);
   hnumuCCinFV_stack_12->SetBinError(15,0.8031008);
   hnumuCCinFV_stack_12->SetBinError(16,0.9070709);
   hnumuCCinFV_stack_12->SetBinError(17,0.7401607);
   hnumuCCinFV_stack_12->SetBinError(18,0.5833355);
   hnumuCCinFV_stack_12->SetBinError(19,0.652792);
   hnumuCCinFV_stack_12->SetBinError(20,0.7458019);
   hnumuCCinFV_stack_12->SetBinError(21,2.894283);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.8336472);
   hnueCCinFV_stack_13->SetBinContent(5,1.268209);
   hnueCCinFV_stack_13->SetBinContent(6,2.331401);
   hnueCCinFV_stack_13->SetBinContent(7,1.024351);
   hnueCCinFV_stack_13->SetBinContent(8,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(9,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(14,0.591342);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,5.665134);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.4189839);
   hnueCCinFV_stack_13->SetBinError(5,0.6391446);
   hnueCCinFV_stack_13->SetBinError(6,0.8938251);
   hnueCCinFV_stack_13->SetBinError(7,0.668395);
   hnueCCinFV_stack_13->SetBinError(8,0.2486649);
   hnueCCinFV_stack_13->SetBinError(9,0.2504446);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967157);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(14,0.4228527);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,1.200507);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__20->SetBinContent(1,15.84901);
   hmcerror__20->SetBinContent(2,68.28564);
   hmcerror__20->SetBinContent(3,179.4519);
   hmcerror__20->SetBinContent(4,292.5478);
   hmcerror__20->SetBinContent(5,321.386);
   hmcerror__20->SetBinContent(6,304.9843);
   hmcerror__20->SetBinContent(7,225.4519);
   hmcerror__20->SetBinContent(8,183.7706);
   hmcerror__20->SetBinContent(9,150.0367);
   hmcerror__20->SetBinContent(10,123.5776);
   hmcerror__20->SetBinContent(11,100.2671);
   hmcerror__20->SetBinContent(12,78.04434);
   hmcerror__20->SetBinContent(13,57.57449);
   hmcerror__20->SetBinContent(14,52.78321);
   hmcerror__20->SetBinContent(15,35.71699);
   hmcerror__20->SetBinContent(16,28.75884);
   hmcerror__20->SetBinContent(17,24.2516);
   hmcerror__20->SetBinContent(18,15.60764);
   hmcerror__20->SetBinContent(19,15.68925);
   hmcerror__20->SetBinContent(20,13.5324);
   hmcerror__20->SetBinContent(21,101.4887);
   hmcerror__20->SetBinError(1,8.168788);
   hmcerror__20->SetBinError(2,26.23552);
   hmcerror__20->SetBinError(3,69.51195);
   hmcerror__20->SetBinError(4,125.7841);
   hmcerror__20->SetBinError(5,137.8221);
   hmcerror__20->SetBinError(6,125.2958);
   hmcerror__20->SetBinError(7,98.04107);
   hmcerror__20->SetBinError(8,77.40565);
   hmcerror__20->SetBinError(9,60.70572);
   hmcerror__20->SetBinError(10,49.8746);
   hmcerror__20->SetBinError(11,37.35966);
   hmcerror__20->SetBinError(12,31.78507);
   hmcerror__20->SetBinError(13,23.71249);
   hmcerror__20->SetBinError(14,31.47446);
   hmcerror__20->SetBinError(15,15.71898);
   hmcerror__20->SetBinError(16,13.19125);
   hmcerror__20->SetBinError(17,9.565208);
   hmcerror__20->SetBinError(18,9.080853);
   hmcerror__20->SetBinError(19,12.81306);
   hmcerror__20->SetBinError(20,10.75713);
   hmcerror__20->SetBinError(21,40.34582);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3025[20] = {
   14,
   53,
   174,
   323,
   315,
   275,
   184,
   162,
   116,
   84,
   69,
   53,
   44,
   26,
   28,
   20,
   17,
   19,
   5,
   7};
   Double_t _felx3025[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3025[20] = {
   3.9102,
   7.4105,
   13.19091,
   17.9722,
   17.74824,
   16.58312,
   13.56466,
   12.72792,
   10.77033,
   9.2886,
   8.4327,
   7.4105,
   6.7671,
   5.2453,
   5.4358,
   4.6266,
   4.2835,
   4.5151,
   2.48995,
   2.85954};
   Double_t _fehx3025[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3025[20] = {
   3.6898,
   7.2068,
   13.19091,
   17.9722,
   17.74824,
   16.58312,
   13.56466,
   12.72792,
   10.77033,
   9.0869,
   8.2304,
   7.2068,
   6.5623,
   5.0358,
   5.2271,
   4.4133,
   4.0673,
   4.3011,
   2.21064,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,660);
   Graph_Graph3025->SetMinimum(2.259045);
   Graph_Graph3025->SetMaximum(374.8184);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.32","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1988.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.0","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.8","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 85.3","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.0","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  882.4","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  183.1","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 370.1","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.4","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 258.5","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 8.1","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3026[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3026[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3026[20] = {
   0.5154132,
   0.3842026,
   0.3873571,
   0.4299608,
   0.4288367,
   0.4108272,
   0.4348648,
   0.4212079,
   0.4046058,
   0.4035892,
   0.3726012,
   0.4072694,
   0.4118576,
   0.5962968,
   0.4400981,
   0.458685,
   0.3944156,
   0.5818211,
   0.8166779,
   0.7949165};
   Double_t _fehx3026[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3026[20] = {
   0.5154132,
   0.3842026,
   0.3873571,
   0.4299608,
   0.4288367,
   0.4108272,
   0.4348648,
   0.4212079,
   0.4046058,
   0.4035892,
   0.3726012,
   0.4072694,
   0.4118576,
   0.5962968,
   0.4400981,
   0.458685,
   0.3944156,
   0.5818211,
   0.8166779,
   0.7949165};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,660);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3027[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3027[20] = {
   0.2161464,
   0.2907589,
   0.3587003,
   0.4217543,
   0.4211589,
   0.396947,
   0.3982267,
   0.3874511,
   0.3880675,
   0.3372998,
   0.333228,
   0.3311775,
   0.3214755,
   0.2613665,
   0.2968083,
   0.2823518,
   0.2639436,
   0.2790646,
   0.3380778,
   0.3531769};
   Double_t _fehx3027[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3027[20] = {
   0.2161464,
   0.2907589,
   0.3587003,
   0.4217543,
   0.4211589,
   0.396947,
   0.3982267,
   0.3874511,
   0.3880675,
   0.3372998,
   0.333228,
   0.3311775,
   0.3214755,
   0.2613665,
   0.2968083,
   0.2823518,
   0.2639436,
   0.2790646,
   0.3380778,
   0.3531769};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,660);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3028[20] = {
   0.8833361,
   0.7761515,
   0.9696193,
   1.104093,
   0.9801298,
   0.9016859,
   0.8161387,
   0.8815337,
   0.7731441,
   0.6797347,
   0.6881617,
   0.6791011,
   0.7642273,
   0.4925808,
   0.7839407,
   0.6954384,
   0.7009848,
   1.217353,
   0.3186896,
   0.517277};
   Double_t _felx3028[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3028[20] = {
   0.2467158,
   0.1085221,
   0.07350665,
   0.06143338,
   0.05522406,
   0.05437371,
   0.06016654,
   0.06925983,
   0.07178463,
   0.07516409,
   0.08410233,
   0.09495243,
   0.1175364,
   0.09937439,
   0.1521909,
   0.1608758,
   0.1766275,
   0.2892879,
   0.1587042,
   0.2113106};
   Double_t _fehx3028[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3028[20] = {
   0.2328095,
   0.105539,
   0.07350665,
   0.06143338,
   0.05522406,
   0.05437371,
   0.06016654,
   0.06925983,
   0.07178463,
   0.07353192,
   0.08208472,
   0.09234238,
   0.1139793,
   0.09540533,
   0.1463477,
   0.1534589,
   0.1677127,
   0.2755766,
   0.1409016,
   0.1929096};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,660);
   Graph_Graph3028->SetMinimum(0.02669096);
   Graph_Graph3028->SetMaximum(1.626224);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_energy_high_all",20,0,600);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
