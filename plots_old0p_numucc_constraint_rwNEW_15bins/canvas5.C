#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Wed Mar 15 16:23:05 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",190,172,1200,900);
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
   pad1->Range(-230.7692,-137.72,1692.308,15228.93);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmc__13->SetBinContent(2,82.38239);
   hmc__13->SetBinContent(3,2418.813);
   hmc__13->SetBinContent(4,4184.163);
   hmc__13->SetBinContent(5,5143.576);
   hmc__13->SetBinContent(6,5249.609);
   hmc__13->SetBinContent(7,4911.193);
   hmc__13->SetBinContent(8,4379.34);
   hmc__13->SetBinContent(9,3584.991);
   hmc__13->SetBinContent(10,2796.854);
   hmc__13->SetBinContent(11,2186.133);
   hmc__13->SetBinContent(12,1657.234);
   hmc__13->SetBinContent(13,1176.395);
   hmc__13->SetBinContent(14,844.5613);
   hmc__13->SetBinContent(15,606.0436);
   hmc__13->SetBinContent(16,1708.512);
   hmc__13->SetBinError(1,0.3895343);
   hmc__13->SetBinError(2,37.18638);
   hmc__13->SetBinError(3,522.2225);
   hmc__13->SetBinError(4,846.6337);
   hmc__13->SetBinError(5,1054.969);
   hmc__13->SetBinError(6,1049.797);
   hmc__13->SetBinError(7,1001.919);
   hmc__13->SetBinError(8,902.5476);
   hmc__13->SetBinError(9,705.2933);
   hmc__13->SetBinError(10,562.4039);
   hmc__13->SetBinError(11,516.128);
   hmc__13->SetBinError(12,336.3056);
   hmc__13->SetBinError(13,264.1848);
   hmc__13->SetBinError(14,208.3408);
   hmc__13->SetBinError(15,180.1855);
   hmc__13->SetBinError(16,401.9488);
   hmc__13->SetMinimum(-137.72);
   hmc__13->SetMaximum(14460.6);
   hmc__13->SetEntries(36508.33);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",15,0,1500);
   hs5_stack_5->SetMinimum(-5.219833e-10);
   hs5_stack_5->SetMaximum(5512.089);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.175579);
   hbadmatch_stack_1->SetBinContent(3,54.94666);
   hbadmatch_stack_1->SetBinContent(4,67.60712);
   hbadmatch_stack_1->SetBinContent(5,68.27754);
   hbadmatch_stack_1->SetBinContent(6,55.14539);
   hbadmatch_stack_1->SetBinContent(7,50.49401);
   hbadmatch_stack_1->SetBinContent(8,43.02508);
   hbadmatch_stack_1->SetBinContent(9,30.10189);
   hbadmatch_stack_1->SetBinContent(10,16.58137);
   hbadmatch_stack_1->SetBinContent(11,20.17748);
   hbadmatch_stack_1->SetBinContent(12,7.758657);
   hbadmatch_stack_1->SetBinContent(13,8.270664);
   hbadmatch_stack_1->SetBinContent(14,5.912716);
   hbadmatch_stack_1->SetBinContent(15,4.644778);
   hbadmatch_stack_1->SetBinContent(16,16.49967);
   hbadmatch_stack_1->SetBinError(2,0.4797864);
   hbadmatch_stack_1->SetBinError(3,4.511655);
   hbadmatch_stack_1->SetBinError(4,4.66651);
   hbadmatch_stack_1->SetBinError(5,5.264178);
   hbadmatch_stack_1->SetBinError(6,4.033202);
   hbadmatch_stack_1->SetBinError(7,9.23047);
   hbadmatch_stack_1->SetBinError(8,4.253644);
   hbadmatch_stack_1->SetBinError(9,3.213948);
   hbadmatch_stack_1->SetBinError(10,2.20622);
   hbadmatch_stack_1->SetBinError(11,2.815811);
   hbadmatch_stack_1->SetBinError(12,1.514142);
   hbadmatch_stack_1->SetBinError(13,1.485682);
   hbadmatch_stack_1->SetBinError(14,1.518816);
   hbadmatch_stack_1->SetBinError(15,1.091311);
   hbadmatch_stack_1->SetBinError(16,2.474047);
   hbadmatch_stack_1->SetEntries(1712);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hext_stack_2->SetBinContent(2,2.110787);
   hext_stack_2->SetBinContent(3,113.009);
   hext_stack_2->SetBinContent(4,205.2584);
   hext_stack_2->SetBinContent(5,256.3882);
   hext_stack_2->SetBinContent(6,296.3583);
   hext_stack_2->SetBinContent(7,266.0531);
   hext_stack_2->SetBinContent(8,247.8529);
   hext_stack_2->SetBinContent(9,204.4014);
   hext_stack_2->SetBinContent(10,132.0528);
   hext_stack_2->SetBinContent(11,93.32118);
   hext_stack_2->SetBinContent(12,60.48826);
   hext_stack_2->SetBinContent(13,36.70697);
   hext_stack_2->SetBinContent(14,22.57585);
   hext_stack_2->SetBinContent(15,18.97277);
   hext_stack_2->SetBinContent(16,51.70636);
   hext_stack_2->SetBinError(2,0.8669371);
   hext_stack_2->SetBinError(3,6.996961);
   hext_stack_2->SetBinError(4,9.181175);
   hext_stack_2->SetBinError(5,10.45821);
   hext_stack_2->SetBinError(6,11.31143);
   hext_stack_2->SetBinError(7,10.82996);
   hext_stack_2->SetBinError(8,10.3366);
   hext_stack_2->SetBinError(9,9.482529);
   hext_stack_2->SetBinError(10,7.706971);
   hext_stack_2->SetBinError(11,6.407168);
   hext_stack_2->SetBinError(12,5.106062);
   hext_stack_2->SetBinError(13,3.896101);
   hext_stack_2->SetBinError(14,3.161312);
   hext_stack_2->SetBinError(15,2.775635);
   hext_stack_2->SetBinError(16,4.8335);
   hext_stack_2->SetEntries(4967);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hdirt_stack_3->SetBinContent(2,2.696215);
   hdirt_stack_3->SetBinContent(3,42.15942);
   hdirt_stack_3->SetBinContent(4,75.84264);
   hdirt_stack_3->SetBinContent(5,75.81297);
   hdirt_stack_3->SetBinContent(6,75.3138);
   hdirt_stack_3->SetBinContent(7,62.32003);
   hdirt_stack_3->SetBinContent(8,49.59509);
   hdirt_stack_3->SetBinContent(9,31.7384);
   hdirt_stack_3->SetBinContent(10,26.49525);
   hdirt_stack_3->SetBinContent(11,27.0675);
   hdirt_stack_3->SetBinContent(12,18.94403);
   hdirt_stack_3->SetBinContent(13,16.16381);
   hdirt_stack_3->SetBinContent(14,11.43476);
   hdirt_stack_3->SetBinContent(15,11.7363);
   hdirt_stack_3->SetBinContent(16,32.26076);
   hdirt_stack_3->SetBinError(2,1.818472);
   hdirt_stack_3->SetBinError(3,3.992725);
   hdirt_stack_3->SetBinError(4,6.897978);
   hdirt_stack_3->SetBinError(5,4.847358);
   hdirt_stack_3->SetBinError(6,5.137639);
   hdirt_stack_3->SetBinError(7,4.319698);
   hdirt_stack_3->SetBinError(8,5.004165);
   hdirt_stack_3->SetBinError(9,3.74769);
   hdirt_stack_3->SetBinError(10,3.479489);
   hdirt_stack_3->SetBinError(11,4.41934);
   hdirt_stack_3->SetBinError(12,3.301152);
   hdirt_stack_3->SetBinError(13,2.493137);
   hdirt_stack_3->SetBinError(14,2.108698);
   hdirt_stack_3->SetBinError(15,2.237817);
   hdirt_stack_3->SetBinError(16,3.278073);
   hdirt_stack_3->SetEntries(2255);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   houtFV_stack_4->SetBinContent(2,1.523409);
   houtFV_stack_4->SetBinContent(3,48.5749);
   houtFV_stack_4->SetBinContent(4,78.15665);
   houtFV_stack_4->SetBinContent(5,106.1965);
   houtFV_stack_4->SetBinContent(6,98.15972);
   houtFV_stack_4->SetBinContent(7,84.82403);
   houtFV_stack_4->SetBinContent(8,68.97012);
   houtFV_stack_4->SetBinContent(9,58.67486);
   houtFV_stack_4->SetBinContent(10,53.10368);
   houtFV_stack_4->SetBinContent(11,35.12517);
   houtFV_stack_4->SetBinContent(12,29.02592);
   houtFV_stack_4->SetBinContent(13,17.41676);
   houtFV_stack_4->SetBinContent(14,20.82744);
   houtFV_stack_4->SetBinContent(15,13.19571);
   houtFV_stack_4->SetBinContent(16,35.74502);
   houtFV_stack_4->SetBinError(2,0.6470716);
   houtFV_stack_4->SetBinError(3,4.001089);
   houtFV_stack_4->SetBinError(4,5.470623);
   houtFV_stack_4->SetBinError(5,6.122798);
   houtFV_stack_4->SetBinError(6,6.114183);
   houtFV_stack_4->SetBinError(7,5.86508);
   houtFV_stack_4->SetBinError(8,4.727676);
   houtFV_stack_4->SetBinError(9,5.086308);
   houtFV_stack_4->SetBinError(10,5.622996);
   houtFV_stack_4->SetBinError(11,3.486216);
   houtFV_stack_4->SetBinError(12,3.726964);
   houtFV_stack_4->SetBinError(13,2.160851);
   houtFV_stack_4->SetBinError(14,2.93305);
   houtFV_stack_4->SetBinError(15,2.039946);
   houtFV_stack_4->SetBinError(16,3.972228);
   houtFV_stack_4->SetEntries(2881);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(28);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4180041);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2406819);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(15);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.7112858);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.25377);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.33167);
   hNCpi0inFVres_stack_7->SetBinContent(6,12.50688);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.79445);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.02154);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.241);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.745942);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.981914);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.796328);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.068016);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.175712);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.353322);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.12232);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.2436282);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6542196);
   hNCpi0inFVres_stack_7->SetBinError(5,1.023093);
   hNCpi0inFVres_stack_7->SetBinError(6,1.095417);
   hNCpi0inFVres_stack_7->SetBinError(7,1.294333);
   hNCpi0inFVres_stack_7->SetBinError(8,1.131738);
   hNCpi0inFVres_stack_7->SetBinError(9,1.116039);
   hNCpi0inFVres_stack_7->SetBinError(10,1.031083);
   hNCpi0inFVres_stack_7->SetBinError(11,0.76306);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7139138);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5680287);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5014937);
   hNCpi0inFVres_stack_7->SetBinError(15,0.377857);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5643049);
   hNCpi0inFVres_stack_7->SetEntries(1896);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.505608);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.364706);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.747774);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.882034);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.244158);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.434218);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.479873);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.602187);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.767764);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.651419);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.527042);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.223135);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.387562);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3667934);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6667905);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.065093);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9728815);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9794938);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8792268);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6756329);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6666931);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7227636);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5302873);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6593558);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6616151);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.018614);
   hNCpi0inFVdis_stack_8->SetEntries(1426);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(3,12.32051);
   hCCpi0inFV_stack_10->SetBinContent(4,42.01168);
   hCCpi0inFV_stack_10->SetBinContent(5,104.6684);
   hCCpi0inFV_stack_10->SetBinContent(6,207.514);
   hCCpi0inFV_stack_10->SetBinContent(7,302.0346);
   hCCpi0inFV_stack_10->SetBinContent(8,368.6293);
   hCCpi0inFV_stack_10->SetBinContent(9,361.5155);
   hCCpi0inFV_stack_10->SetBinContent(10,361.7411);
   hCCpi0inFV_stack_10->SetBinContent(11,319.0415);
   hCCpi0inFV_stack_10->SetBinContent(12,265.2683);
   hCCpi0inFV_stack_10->SetBinContent(13,202.425);
   hCCpi0inFV_stack_10->SetBinContent(14,160.506);
   hCCpi0inFV_stack_10->SetBinContent(15,132.2641);
   hCCpi0inFV_stack_10->SetBinContent(16,449.1335);
   hCCpi0inFV_stack_10->SetBinError(3,1.733393);
   hCCpi0inFV_stack_10->SetBinError(4,3.242426);
   hCCpi0inFV_stack_10->SetBinError(5,5.155295);
   hCCpi0inFV_stack_10->SetBinError(6,7.254442);
   hCCpi0inFV_stack_10->SetBinError(7,8.747962);
   hCCpi0inFV_stack_10->SetBinError(8,9.637415);
   hCCpi0inFV_stack_10->SetBinError(9,9.518013);
   hCCpi0inFV_stack_10->SetBinError(10,9.472235);
   hCCpi0inFV_stack_10->SetBinError(11,8.952277);
   hCCpi0inFV_stack_10->SetBinError(12,8.204262);
   hCCpi0inFV_stack_10->SetBinError(13,7.138338);
   hCCpi0inFV_stack_10->SetBinError(14,6.366964);
   hCCpi0inFV_stack_10->SetBinError(15,5.78382);
   hCCpi0inFV_stack_10->SetBinError(16,10.68436);
   hCCpi0inFV_stack_10->SetEntries(14046);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hNCinFV_stack_11->SetBinContent(2,1.857266);
   hNCinFV_stack_11->SetBinContent(3,83.40547);
   hNCinFV_stack_11->SetBinContent(4,114.5105);
   hNCinFV_stack_11->SetBinContent(5,107.3373);
   hNCinFV_stack_11->SetBinContent(6,93.20154);
   hNCinFV_stack_11->SetBinContent(7,69.02414);
   hNCinFV_stack_11->SetBinContent(8,50.97729);
   hNCinFV_stack_11->SetBinContent(9,38.14726);
   hNCinFV_stack_11->SetBinContent(10,24.20774);
   hNCinFV_stack_11->SetBinContent(11,16.67337);
   hNCinFV_stack_11->SetBinContent(12,10.83531);
   hNCinFV_stack_11->SetBinContent(13,13.62012);
   hNCinFV_stack_11->SetBinContent(14,7.130916);
   hNCinFV_stack_11->SetBinContent(15,4.63025);
   hNCinFV_stack_11->SetBinContent(16,17.82952);
   hNCinFV_stack_11->SetBinError(2,0.6799255);
   hNCinFV_stack_11->SetBinError(3,4.591339);
   hNCinFV_stack_11->SetBinError(4,5.316692);
   hNCinFV_stack_11->SetBinError(5,5.119221);
   hNCinFV_stack_11->SetBinError(6,4.846579);
   hNCinFV_stack_11->SetBinError(7,4.171989);
   hNCinFV_stack_11->SetBinError(8,3.622981);
   hNCinFV_stack_11->SetBinError(9,3.096103);
   hNCinFV_stack_11->SetBinError(10,2.484895);
   hNCinFV_stack_11->SetBinError(11,2.001256);
   hNCinFV_stack_11->SetBinError(12,1.676235);
   hNCinFV_stack_11->SetBinError(13,1.923844);
   hNCinFV_stack_11->SetBinError(14,1.374459);
   hNCinFV_stack_11->SetBinError(15,1.161497);
   hNCinFV_stack_11->SetBinError(16,2.150471);
   hNCinFV_stack_11->SetEntries(2792);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,72.99124);
   hnumuCCinFV_stack_12->SetBinContent(3,2062.401);
   hnumuCCinFV_stack_12->SetBinContent(4,3593.994);
   hnumuCCinFV_stack_12->SetBinContent(5,4408.5);
   hnumuCCinFV_stack_12->SetBinContent(6,4399.435);
   hnumuCCinFV_stack_12->SetBinContent(7,4048.526);
   hnumuCCinFV_stack_12->SetBinContent(8,3525.969);
   hnumuCCinFV_stack_12->SetBinContent(9,2837.291);
   hnumuCCinFV_stack_12->SetBinContent(10,2162.993);
   hnumuCCinFV_stack_12->SetBinContent(11,1661.236);
   hnumuCCinFV_stack_12->SetBinContent(12,1252.641);
   hnumuCCinFV_stack_12->SetBinContent(13,871.1711);
   hnumuCCinFV_stack_12->SetBinContent(14,607.7017);
   hnumuCCinFV_stack_12->SetBinContent(15,413.2974);
   hnumuCCinFV_stack_12->SetBinContent(16,1082.574);
   hnumuCCinFV_stack_12->SetBinError(2,5.620414);
   hnumuCCinFV_stack_12->SetBinError(3,30.53911);
   hnumuCCinFV_stack_12->SetBinError(4,39.89407);
   hnumuCCinFV_stack_12->SetBinError(5,43.58694);
   hnumuCCinFV_stack_12->SetBinError(6,43.9868);
   hnumuCCinFV_stack_12->SetBinError(7,41.76803);
   hnumuCCinFV_stack_12->SetBinError(8,40.76207);
   hnumuCCinFV_stack_12->SetBinError(9,35.87461);
   hnumuCCinFV_stack_12->SetBinError(10,30.32033);
   hnumuCCinFV_stack_12->SetBinError(11,28.03454);
   hnumuCCinFV_stack_12->SetBinError(12,24.88472);
   hnumuCCinFV_stack_12->SetBinError(13,21.33469);
   hnumuCCinFV_stack_12->SetBinError(14,17.7415);
   hnumuCCinFV_stack_12->SetBinError(15,13.60469);
   hnumuCCinFV_stack_12->SetBinError(16,21.75632);
   hnumuCCinFV_stack_12->SetEntries(123280);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.882241);
   hnueCCinFV_stack_13->SetBinContent(5,1.280558);
   hnueCCinFV_stack_13->SetBinContent(6,1.696385);
   hnueCCinFV_stack_13->SetBinContent(7,2.808411);
   hnueCCinFV_stack_13->SetBinContent(8,2.748565);
   hnueCCinFV_stack_13->SetBinContent(9,3.222414);
   hnueCCinFV_stack_13->SetBinContent(10,4.31389);
   hnueCCinFV_stack_13->SetBinContent(11,2.725884);
   hnueCCinFV_stack_13->SetBinContent(12,2.653408);
   hnueCCinFV_stack_13->SetBinContent(13,3.900797);
   hnueCCinFV_stack_13->SetBinContent(14,2.741295);
   hnueCCinFV_stack_13->SetBinContent(15,2.698033);
   hnueCCinFV_stack_13->SetBinContent(16,10.2535);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.4437851);
   hnueCCinFV_stack_13->SetBinError(5,0.5861191);
   hnueCCinFV_stack_13->SetBinError(6,0.6625586);
   hnueCCinFV_stack_13->SetBinError(7,1.206343);
   hnueCCinFV_stack_13->SetBinError(8,1.248482);
   hnueCCinFV_stack_13->SetBinError(9,0.9250328);
   hnueCCinFV_stack_13->SetBinError(10,1.222547);
   hnueCCinFV_stack_13->SetBinError(11,0.8538888);
   hnueCCinFV_stack_13->SetBinError(12,0.9206179);
   hnueCCinFV_stack_13->SetBinError(13,0.9463535);
   hnueCCinFV_stack_13->SetBinError(14,0.7734851);
   hnueCCinFV_stack_13->SetBinError(15,0.8376809);
   hnueCCinFV_stack_13->SetBinError(16,1.618503);
   hnueCCinFV_stack_13->SetEntries(170);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);
   hmcerror__14->SetBinContent(2,82.38239);
   hmcerror__14->SetBinContent(3,2418.813);
   hmcerror__14->SetBinContent(4,4184.163);
   hmcerror__14->SetBinContent(5,5143.576);
   hmcerror__14->SetBinContent(6,5249.609);
   hmcerror__14->SetBinContent(7,4911.193);
   hmcerror__14->SetBinContent(8,4379.34);
   hmcerror__14->SetBinContent(9,3584.991);
   hmcerror__14->SetBinContent(10,2796.854);
   hmcerror__14->SetBinContent(11,2186.133);
   hmcerror__14->SetBinContent(12,1657.234);
   hmcerror__14->SetBinContent(13,1176.395);
   hmcerror__14->SetBinContent(14,844.5613);
   hmcerror__14->SetBinContent(15,606.0436);
   hmcerror__14->SetBinContent(16,1708.512);
   hmcerror__14->SetBinError(1,0.3895343);
   hmcerror__14->SetBinError(2,37.18638);
   hmcerror__14->SetBinError(3,522.2225);
   hmcerror__14->SetBinError(4,846.6337);
   hmcerror__14->SetBinError(5,1054.969);
   hmcerror__14->SetBinError(6,1049.797);
   hmcerror__14->SetBinError(7,1001.919);
   hmcerror__14->SetBinError(8,902.5476);
   hmcerror__14->SetBinError(9,705.2933);
   hmcerror__14->SetBinError(10,562.4039);
   hmcerror__14->SetBinError(11,516.128);
   hmcerror__14->SetBinError(12,336.3056);
   hmcerror__14->SetBinError(13,264.1848);
   hmcerror__14->SetBinError(14,208.3408);
   hmcerror__14->SetBinError(15,180.1855);
   hmcerror__14->SetBinError(16,401.9488);
   hmcerror__14->SetEntries(36508.33);

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
   
   Double_t _fx3017[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3017[15] = {
   0,
   137,
   3172,
   5511,
   6886,
   6812,
   6012,
   5257,
   4265,
   3230,
   2459,
   1683,
   1183,
   786,
   554};
   Double_t _felx3017[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3017[15] = {
   0,
   11.7047,
   56.32051,
   74.23611,
   82.98193,
   82.53484,
   77.53709,
   72.50517,
   65.30697,
   56.83309,
   49.58831,
   41.02438,
   34.39477,
   28.03569,
   23.5372};
   Double_t _fehx3017[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3017[15] = {
   1.1478,
   11.7047,
   56.32051,
   74.23611,
   82.98193,
   82.53484,
   77.53709,
   72.50517,
   65.30697,
   56.83309,
   49.58831,
   41.02438,
   34.39477,
   28.03569,
   23.5372};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1650);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(7665.88);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.22#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 47947.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 434.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 1955.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 527.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 713.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  96.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2839.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 635.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 31918.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.9","F");

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
   TText *pt_LaTex = pt->AddText("numuCC_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3018[15] = {
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3018[15] = {
   0,
   0.4513875,
   0.2159003,
   0.2023425,
   0.2051042,
   0.1999762,
   0.2040072,
   0.2060921,
   0.196735,
   0.2010845,
   0.2360917,
   0.2029318,
   0.2245716,
   0.2466852,
   0.2973144};
   Double_t _fehx3018[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3018[15] = {
   0,
   0.4513875,
   0.2159003,
   0.2023425,
   0.2051042,
   0.1999762,
   0.2040072,
   0.2060921,
   0.196735,
   0.2010845,
   0.2360917,
   0.2029318,
   0.2245716,
   0.2466852,
   0.2973144};
   grae = new TGraphAsymmErrors(15,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1650);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3019[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3019[15] = {
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3019[15] = {
   0,
   0.260063,
   0.1791652,
   0.1568326,
   0.1459884,
   0.1432715,
   0.1447671,
   0.1489333,
   0.1498917,
   0.1530864,
   0.1624974,
   0.1706601,
   0.1724309,
   0.1806001,
   0.182702};
   Double_t _fehx3019[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3019[15] = {
   0,
   0.260063,
   0.1791652,
   0.1568326,
   0.1459884,
   0.1432715,
   0.1447671,
   0.1489333,
   0.1498917,
   0.1530864,
   0.1624974,
   0.1706601,
   0.1724309,
   0.1806001,
   0.182702};
   grae = new TGraphAsymmErrors(15,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1650);
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
   
   Double_t _fx3020[15] = {
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
   1150,
   1250,
   1350,
   1450};
   Double_t _fy3020[15] = {
   10,
   1.662977,
   1.311387,
   1.317109,
   1.338757,
   1.29762,
   1.224142,
   1.200409,
   1.189682,
   1.154869,
   1.124817,
   1.015547,
   1.005615,
   0.9306606,
   0.9141257};
   Double_t _felx3020[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fely3020[15] = {
   0,
   0.1420777,
   0.02328436,
   0.01774217,
   0.01613312,
   0.01572209,
   0.01578783,
   0.01655619,
   0.01821677,
   0.02032036,
   0.02268311,
   0.02475473,
   0.02923744,
   0.03319557,
   0.03883748};
   Double_t _fehx3020[15] = {
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
   50,
   50,
   50,
   50};
   Double_t _fehy3020[15] = {
   0,
   0.1420777,
   0.02328436,
   0.01774217,
   0.01613312,
   0.01572209,
   0.01578783,
   0.01655619,
   0.01821677,
   0.02032036,
   0.02268311,
   0.02475473,
   0.02923744,
   0.03319557,
   0.03883748};
   grae = new TGraphAsymmErrors(15,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1650);
   Graph_Graph3020->SetMinimum(0.7877594);
   Graph_Graph3020->SetMaximum(10.91247);
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
   
   TH1F *hist__15 = new TH1F("hist__15","numuCC_0p_bnb_12_nc_transferred_energy_all",15,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
