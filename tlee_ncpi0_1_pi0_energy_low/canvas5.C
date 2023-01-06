#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 18:59:34 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",242,172,1200,900);
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
   pad1->Range(-69.23077,-15.92895,507.6923,1761.406);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__13->SetBinContent(1,611.5817);
   hmc__13->SetBinContent(2,796.4473);
   hmc__13->SetBinContent(3,623.7741);
   hmc__13->SetBinContent(4,399.7193);
   hmc__13->SetBinContent(5,230.8822);
   hmc__13->SetBinContent(6,145.4611);
   hmc__13->SetBinContent(7,94.24651);
   hmc__13->SetBinContent(8,58.38272);
   hmc__13->SetBinContent(9,34.07206);
   hmc__13->SetBinContent(10,23.47554);
   hmc__13->SetBinContent(11,10.26071);
   hmc__13->SetBinContent(12,8.748186);
   hmc__13->SetBinContent(13,4.255972);
   hmc__13->SetBinContent(14,2.269469);
   hmc__13->SetBinContent(15,1.713338);
   hmc__13->SetBinContent(16,4.353632);
   hmc__13->SetBinError(1,171.1334);
   hmc__13->SetBinError(2,287.9227);
   hmc__13->SetBinError(3,237.2883);
   hmc__13->SetBinError(4,158.865);
   hmc__13->SetBinError(5,82.19734);
   hmc__13->SetBinError(6,54.05468);
   hmc__13->SetBinError(7,39.97448);
   hmc__13->SetBinError(8,20.17826);
   hmc__13->SetBinError(9,21.7305);
   hmc__13->SetBinError(10,17.35034);
   hmc__13->SetBinError(11,9.036437);
   hmc__13->SetBinError(12,9.598551);
   hmc__13->SetBinError(13,5.548935);
   hmc__13->SetBinError(14,2.812238);
   hmc__13->SetBinError(15,8.075295);
   hmc__13->SetBinError(16,5.508333);
   hmc__13->SetMinimum(-15.92895);
   hmc__13->SetMaximum(1672.539);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",15,0,450);
   hs5_stack_5->SetMinimum(-1.427841e-08);
   hs5_stack_5->SetMaximum(836.2696);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,15.94011);
   hbadmatch_stack_1->SetBinContent(2,18.98005);
   hbadmatch_stack_1->SetBinContent(3,18.11993);
   hbadmatch_stack_1->SetBinContent(4,7.957172);
   hbadmatch_stack_1->SetBinContent(5,6.591397);
   hbadmatch_stack_1->SetBinContent(6,4.308054);
   hbadmatch_stack_1->SetBinContent(7,1.136888);
   hbadmatch_stack_1->SetBinContent(8,1.32644);
   hbadmatch_stack_1->SetBinContent(9,0.8770706);
   hbadmatch_stack_1->SetBinContent(10,0.3824374);
   hbadmatch_stack_1->SetBinContent(13,0.2552519);
   hbadmatch_stack_1->SetBinError(1,2.03516);
   hbadmatch_stack_1->SetBinError(2,2.944286);
   hbadmatch_stack_1->SetBinError(3,2.433912);
   hbadmatch_stack_1->SetBinError(4,1.394915);
   hbadmatch_stack_1->SetBinError(5,1.433692);
   hbadmatch_stack_1->SetBinError(6,1.118435);
   hbadmatch_stack_1->SetBinError(7,0.5599966);
   hbadmatch_stack_1->SetBinError(8,0.77012);
   hbadmatch_stack_1->SetBinError(9,0.5197486);
   hbadmatch_stack_1->SetBinError(10,0.2705358);
   hbadmatch_stack_1->SetBinError(13,0.255252);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,77.52493);
   hext_stack_2->SetBinContent(2,89.21086);
   hext_stack_2->SetBinContent(3,52.66954);
   hext_stack_2->SetBinContent(4,29.33957);
   hext_stack_2->SetBinContent(5,11.73783);
   hext_stack_2->SetBinContent(6,6.788031);
   hext_stack_2->SetBinContent(7,2.834603);
   hext_stack_2->SetBinContent(8,3.946247);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinError(1,6.154473);
   hext_stack_2->SetBinError(2,6.638854);
   hext_stack_2->SetBinError(3,5.05434);
   hext_stack_2->SetBinError(4,3.75282);
   hext_stack_2->SetBinError(5,2.293442);
   hext_stack_2->SetBinError(6,1.774777);
   hext_stack_2->SetBinError(7,1.106046);
   hext_stack_2->SetBinError(8,1.458663);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(16,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,5.770256);
   hdirt_stack_3->SetBinContent(2,5.506016);
   hdirt_stack_3->SetBinContent(3,2.751796);
   hdirt_stack_3->SetBinContent(4,0.9907839);
   hdirt_stack_3->SetBinContent(5,0.620937);
   hdirt_stack_3->SetBinContent(6,0.3381872);
   hdirt_stack_3->SetBinError(1,1.245204);
   hdirt_stack_3->SetBinError(2,1.197446);
   hdirt_stack_3->SetBinError(3,1.125573);
   hdirt_stack_3->SetBinError(4,0.5357742);
   hdirt_stack_3->SetBinError(5,0.3928946);
   hdirt_stack_3->SetBinError(6,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,45.69137);
   houtFV_stack_4->SetBinContent(2,56.22495);
   houtFV_stack_4->SetBinContent(3,41.75399);
   houtFV_stack_4->SetBinContent(4,22.9393);
   houtFV_stack_4->SetBinContent(5,12.39083);
   houtFV_stack_4->SetBinContent(6,10.28083);
   houtFV_stack_4->SetBinContent(7,7.260517);
   houtFV_stack_4->SetBinContent(8,1.76047);
   houtFV_stack_4->SetBinContent(9,2.680785);
   houtFV_stack_4->SetBinContent(10,0.8770706);
   houtFV_stack_4->SetBinContent(12,0.9584563);
   houtFV_stack_4->SetBinContent(13,0.2510497);
   houtFV_stack_4->SetBinError(1,3.361867);
   houtFV_stack_4->SetBinError(2,3.655711);
   houtFV_stack_4->SetBinError(3,3.305701);
   houtFV_stack_4->SetBinError(4,2.356335);
   houtFV_stack_4->SetBinError(5,1.73216);
   houtFV_stack_4->SetBinError(6,1.776666);
   houtFV_stack_4->SetBinError(7,1.40723);
   houtFV_stack_4->SetBinError(8,0.6362578);
   houtFV_stack_4->SetBinError(9,0.9582274);
   houtFV_stack_4->SetBinError(10,0.5197486);
   houtFV_stack_4->SetBinError(12,0.694295);
   houtFV_stack_4->SetBinError(13,0.2510497);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.591579);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7107837);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9547907);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6377236);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.099617);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3012714);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2043998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4338684);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1972314);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2673453);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2486304);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3827592);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1758487);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1141287);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02414102);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.629175);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.339558);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.26396);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.419807);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5250612);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1065019);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.190892);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2003125);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3050144);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.6021107);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5347273);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2905151);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.190306);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04425848);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1769124);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1406579);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01677029);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,162.1024);
   hNCpi0inFVres_stack_7->SetBinContent(2,290.5246);
   hNCpi0inFVres_stack_7->SetBinContent(3,227.2765);
   hNCpi0inFVres_stack_7->SetBinContent(4,146.369);
   hNCpi0inFVres_stack_7->SetBinContent(5,79.23003);
   hNCpi0inFVres_stack_7->SetBinContent(6,45.565);
   hNCpi0inFVres_stack_7->SetBinContent(7,27.57648);
   hNCpi0inFVres_stack_7->SetBinContent(8,18.10753);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.682642);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.854606);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.48259);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.440031);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.16178);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.350786);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1694538);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.7772231);
   hNCpi0inFVres_stack_7->SetBinError(1,3.891115);
   hNCpi0inFVres_stack_7->SetBinError(2,5.212011);
   hNCpi0inFVres_stack_7->SetBinError(3,4.296302);
   hNCpi0inFVres_stack_7->SetBinError(4,3.722354);
   hNCpi0inFVres_stack_7->SetBinError(5,2.673056);
   hNCpi0inFVres_stack_7->SetBinError(6,2.122975);
   hNCpi0inFVres_stack_7->SetBinError(7,1.677113);
   hNCpi0inFVres_stack_7->SetBinError(8,1.647006);
   hNCpi0inFVres_stack_7->SetBinError(9,1.034713);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9587992);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6720166);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3860426);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4025372);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1383142);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1198997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2385382);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,37.97452);
   hNCpi0inFVdis_stack_8->SetBinContent(2,58.39506);
   hNCpi0inFVdis_stack_8->SetBinContent(3,46.63192);
   hNCpi0inFVdis_stack_8->SetBinContent(4,34.25122);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.56513);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.16642);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.66375);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.053685);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.223211);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.831092);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.048572);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.514117);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.333169);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.06410217);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.006991);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7756513);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.029052);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.416582);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.275528);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.972811);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.301173);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.329339);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.201624);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.308589);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4617188);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9414184);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4139575);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6754766);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5138341);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.04570566);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5031662);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3963891);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.396751);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.3751164);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.07291382);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1583868);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1783084);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03645691);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,66.21284);
   hCCpi0inFV_stack_10->SetBinContent(2,124.8884);
   hCCpi0inFV_stack_10->SetBinContent(3,124.9853);
   hCCpi0inFV_stack_10->SetBinContent(4,82.28217);
   hCCpi0inFV_stack_10->SetBinContent(5,47.83823);
   hCCpi0inFV_stack_10->SetBinContent(6,29.30123);
   hCCpi0inFV_stack_10->SetBinContent(7,15.98792);
   hCCpi0inFV_stack_10->SetBinContent(8,8.857872);
   hCCpi0inFV_stack_10->SetBinContent(9,5.873331);
   hCCpi0inFV_stack_10->SetBinContent(10,3.914629);
   hCCpi0inFV_stack_10->SetBinContent(11,2.192263);
   hCCpi0inFV_stack_10->SetBinContent(12,1.949166);
   hCCpi0inFV_stack_10->SetBinContent(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(16,1.072095);
   hCCpi0inFV_stack_10->SetBinError(1,4.106018);
   hCCpi0inFV_stack_10->SetBinError(2,5.614898);
   hCCpi0inFV_stack_10->SetBinError(3,5.645187);
   hCCpi0inFV_stack_10->SetBinError(4,4.532374);
   hCCpi0inFV_stack_10->SetBinError(5,3.428579);
   hCCpi0inFV_stack_10->SetBinError(6,2.766304);
   hCCpi0inFV_stack_10->SetBinError(7,2.00777);
   hCCpi0inFV_stack_10->SetBinError(8,1.497249);
   hCCpi0inFV_stack_10->SetBinError(9,1.161153);
   hCCpi0inFV_stack_10->SetBinError(10,0.9821502);
   hCCpi0inFV_stack_10->SetBinError(11,0.6618798);
   hCCpi0inFV_stack_10->SetBinError(12,0.7604681);
   hCCpi0inFV_stack_10->SetBinError(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(15,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(16,0.5551335);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,54.69482);
   hNCinFV_stack_11->SetBinContent(2,47.10308);
   hNCinFV_stack_11->SetBinContent(3,41.72814);
   hNCinFV_stack_11->SetBinContent(4,34.42025);
   hNCinFV_stack_11->SetBinContent(5,31.16313);
   hNCinFV_stack_11->SetBinContent(6,20.71037);
   hNCinFV_stack_11->SetBinContent(7,18.18959);
   hNCinFV_stack_11->SetBinContent(8,11.68221);
   hNCinFV_stack_11->SetBinContent(9,10.79936);
   hNCinFV_stack_11->SetBinContent(10,6.246095);
   hNCinFV_stack_11->SetBinContent(11,2.50032);
   hNCinFV_stack_11->SetBinContent(12,2.283102);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(14,1.107805);
   hNCinFV_stack_11->SetBinContent(16,0.5901461);
   hNCinFV_stack_11->SetBinError(1,3.764908);
   hNCinFV_stack_11->SetBinError(2,3.58304);
   hNCinFV_stack_11->SetBinError(3,3.320676);
   hNCinFV_stack_11->SetBinError(4,2.957261);
   hNCinFV_stack_11->SetBinError(5,3.252521);
   hNCinFV_stack_11->SetBinError(6,2.650074);
   hNCinFV_stack_11->SetBinError(7,2.783299);
   hNCinFV_stack_11->SetBinError(8,2.309575);
   hNCinFV_stack_11->SetBinError(9,2.100954);
   hNCinFV_stack_11->SetBinError(10,1.568952);
   hNCinFV_stack_11->SetBinError(11,1.036313);
   hNCinFV_stack_11->SetBinError(12,0.8606759);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(14,0.6930787);
   hNCinFV_stack_11->SetBinError(16,0.340721);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,134.2445);
   hnumuCCinFV_stack_12->SetBinContent(2,94.99912);
   hnumuCCinFV_stack_12->SetBinContent(3,62.0789);
   hnumuCCinFV_stack_12->SetBinContent(4,36.96871);
   hnumuCCinFV_stack_12->SetBinContent(5,20.51271);
   hnumuCCinFV_stack_12->SetBinContent(6,13.00842);
   hnumuCCinFV_stack_12->SetBinContent(7,11.36435);
   hnumuCCinFV_stack_12->SetBinContent(8,5.440283);
   hnumuCCinFV_stack_12->SetBinContent(9,2.445722);
   hnumuCCinFV_stack_12->SetBinContent(10,2.284544);
   hnumuCCinFV_stack_12->SetBinContent(11,1.355622);
   hnumuCCinFV_stack_12->SetBinContent(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(13,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.7319179);
   hnumuCCinFV_stack_12->SetBinError(1,7.052945);
   hnumuCCinFV_stack_12->SetBinError(2,6.109611);
   hnumuCCinFV_stack_12->SetBinError(3,4.431937);
   hnumuCCinFV_stack_12->SetBinError(4,3.341094);
   hnumuCCinFV_stack_12->SetBinError(5,2.29206);
   hnumuCCinFV_stack_12->SetBinError(6,1.901604);
   hnumuCCinFV_stack_12->SetBinError(7,1.724475);
   hnumuCCinFV_stack_12->SetBinError(8,1.117279);
   hnumuCCinFV_stack_12->SetBinError(9,0.7600838);
   hnumuCCinFV_stack_12->SetBinError(10,0.7444158);
   hnumuCCinFV_stack_12->SetBinError(11,0.5681185);
   hnumuCCinFV_stack_12->SetBinError(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(13,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(14,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.438694);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,8.179259);
   hnueCCinFV_stack_13->SetBinContent(2,5.168037);
   hnueCCinFV_stack_13->SetBinContent(3,1.18419);
   hnueCCinFV_stack_13->SetBinContent(4,2.070624);
   hnueCCinFV_stack_13->SetBinContent(5,1.607298);
   hnueCCinFV_stack_13->SetBinContent(6,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(7,0.8371204);
   hnueCCinFV_stack_13->SetBinContent(10,0.412125);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(1,2.109818);
   hnueCCinFV_stack_13->SetBinError(2,1.577511);
   hnueCCinFV_stack_13->SetBinError(3,0.5442973);
   hnueCCinFV_stack_13->SetBinError(4,0.7638296);
   hnueCCinFV_stack_13->SetBinError(5,0.6796534);
   hnueCCinFV_stack_13->SetBinError(6,0.3387718);
   hnueCCinFV_stack_13->SetBinError(7,0.4210259);
   hnueCCinFV_stack_13->SetBinError(10,0.2918342);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__14->SetBinContent(1,611.5817);
   hmcerror__14->SetBinContent(2,796.4473);
   hmcerror__14->SetBinContent(3,623.7741);
   hmcerror__14->SetBinContent(4,399.7193);
   hmcerror__14->SetBinContent(5,230.8822);
   hmcerror__14->SetBinContent(6,145.4611);
   hmcerror__14->SetBinContent(7,94.24651);
   hmcerror__14->SetBinContent(8,58.38272);
   hmcerror__14->SetBinContent(9,34.07206);
   hmcerror__14->SetBinContent(10,23.47554);
   hmcerror__14->SetBinContent(11,10.26071);
   hmcerror__14->SetBinContent(12,8.748186);
   hmcerror__14->SetBinContent(13,4.255972);
   hmcerror__14->SetBinContent(14,2.269469);
   hmcerror__14->SetBinContent(15,1.713338);
   hmcerror__14->SetBinContent(16,4.353632);
   hmcerror__14->SetBinError(1,171.1334);
   hmcerror__14->SetBinError(2,287.9227);
   hmcerror__14->SetBinError(3,237.2883);
   hmcerror__14->SetBinError(4,158.865);
   hmcerror__14->SetBinError(5,82.19734);
   hmcerror__14->SetBinError(6,54.05468);
   hmcerror__14->SetBinError(7,39.97448);
   hmcerror__14->SetBinError(8,20.17826);
   hmcerror__14->SetBinError(9,21.7305);
   hmcerror__14->SetBinError(10,17.35034);
   hmcerror__14->SetBinError(11,9.036437);
   hmcerror__14->SetBinError(12,9.598551);
   hmcerror__14->SetBinError(13,5.548935);
   hmcerror__14->SetBinError(14,2.812238);
   hmcerror__14->SetBinError(15,8.075295);
   hmcerror__14->SetBinError(16,5.508333);
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
   
   Double_t _fx3017[15] = {
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
   435};
   Double_t _fy3017[15] = {
   525,
   733,
   588,
   341,
   198,
   108,
   48,
   29,
   20,
   11,
   8,
   5,
   2,
   3,
   1};
   Double_t _felx3017[15] = {
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
   Double_t _fely3017[15] = {
   22.91288,
   27.07397,
   24.24871,
   18.46619,
   14.07125,
   10.3923,
   7.0604,
   5.5285,
   4.6266,
   3.4975,
   3.0307,
   2.48995,
   2,
   2.143368,
   1};
   Double_t _fehx3017[15] = {
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
   Double_t _fehy3017[15] = {
   22.91288,
   27.07397,
   24.24871,
   18.46619,
   14.07125,
   10.3923,
   6.8561,
   5.3201,
   4.4133,
   3.27,
   2.7896,
   2.21064,
   1.51917,
   1.72422,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,495);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(836.0814);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2620.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1016.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  234.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 514.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 282.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.0","F");

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
   pad2->Range(-69.3,-0.5333333,508.2,2.133333);
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
   435};
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
   Double_t _fely3018[15] = {
   0.279821,
   0.3615089,
   0.3804074,
   0.3974414,
   0.3560142,
   0.3716092,
   0.4241481,
   0.3456205,
   0.6377807,
   0.7390815,
   0.8806832,
   1.097205,
   1.3038,
   1.239161,
   4.713196};
   Double_t _fehx3018[15] = {
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
   Double_t _fehy3018[15] = {
   0.279821,
   0.3615089,
   0.3804074,
   0.3974414,
   0.3560142,
   0.3716092,
   0.4241481,
   0.3456205,
   0.6377807,
   0.7390815,
   0.8806832,
   1.097205,
   1.3038,
   1.239161,
   4.713196};
   grae = new TGraphAsymmErrors(15,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,495);
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
   
   Double_t _fx3019[15] = {
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
   435};
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
   Double_t _fely3019[15] = {
   0.2622394,
   0.3553439,
   0.3688112,
   0.3609204,
   0.3308489,
   0.2944761,
   0.2817052,
   0.2647366,
   0.2645071,
   0.2927248,
   0.3343532,
   0.3847529,
   0.3763144,
   0.5798999,
   0.6186051};
   Double_t _fehx3019[15] = {
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
   Double_t _fehy3019[15] = {
   0.2622394,
   0.3553439,
   0.3688112,
   0.3609204,
   0.3308489,
   0.2944761,
   0.2817052,
   0.2647366,
   0.2645071,
   0.2927248,
   0.3343532,
   0.3847529,
   0.3763144,
   0.5798999,
   0.6186051};
   grae = new TGraphAsymmErrors(15,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,495);
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
   435};
   Double_t _fy3020[15] = {
   0.8584299,
   0.9203371,
   0.9426489,
   0.8530987,
   0.8575802,
   0.7424667,
   0.5093027,
   0.4967223,
   0.5869912,
   0.4685729,
   0.7796729,
   0.5715471,
   0.4699279,
   1.321895,
   0.5836562};
   Double_t _felx3020[15] = {
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
   Double_t _fely3020[15] = {
   0.03746495,
   0.03399343,
   0.03887419,
   0.04619788,
   0.06094557,
   0.07144389,
   0.07491418,
   0.09469412,
   0.1357887,
   0.1489849,
   0.2953693,
   0.2846247,
   0.4699279,
   0.9444357,
   0.5836562};
   Double_t _fehx3020[15] = {
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
   Double_t _fehy3020[15] = {
   0.03746495,
   0.03399343,
   0.03887419,
   0.04619788,
   0.06094557,
   0.07144389,
   0.07274646,
   0.09112457,
   0.1295284,
   0.1392939,
   0.271872,
   0.252697,
   0.3569502,
   0.7597458,
   0.7936031};
   grae = new TGraphAsymmErrors(15,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,495);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(2.289805);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   TLine *line = new TLine(0,1,450,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
