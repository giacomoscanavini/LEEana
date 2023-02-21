#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 18:59:35 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
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
   pad1->Range(-69.23077,-5.138283,507.6923,568.1859);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__22->SetBinContent(1,205.789);
   hmc__22->SetBinContent(2,256.9142);
   hmc__22->SetBinContent(3,186.2137);
   hmc__22->SetBinContent(4,114.4202);
   hmc__22->SetBinContent(5,78.45894);
   hmc__22->SetBinContent(6,41.66649);
   hmc__22->SetBinContent(7,19.5816);
   hmc__22->SetBinContent(8,11.41221);
   hmc__22->SetBinContent(9,7.151224);
   hmc__22->SetBinContent(10,5.235307);
   hmc__22->SetBinContent(11,2.041483);
   hmc__22->SetBinContent(12,1.35213);
   hmc__22->SetBinContent(13,1.052027);
   hmc__22->SetBinContent(14,0.4554563);
   hmc__22->SetBinContent(15,0.6947192);
   hmc__22->SetBinContent(16,1.125632);
   hmc__22->SetBinError(1,45.35115);
   hmc__22->SetBinError(2,55.31681);
   hmc__22->SetBinError(3,45.33743);
   hmc__22->SetBinError(4,37.15745);
   hmc__22->SetBinError(5,25.26609);
   hmc__22->SetBinError(6,15.69911);
   hmc__22->SetBinError(7,11.35658);
   hmc__22->SetBinError(8,9.084952);
   hmc__22->SetBinError(9,5.681114);
   hmc__22->SetBinError(10,4.919607);
   hmc__22->SetBinError(11,2.908654);
   hmc__22->SetBinError(12,2.350208);
   hmc__22->SetBinError(13,2.091819);
   hmc__22->SetBinError(14,1.168782);
   hmc__22->SetBinError(15,5.111134);
   hmc__22->SetBinError(16,3.25826);
   hmc__22->SetMinimum(-5.138283);
   hmc__22->SetMaximum(539.5197);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",15,0,450);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(269.7599);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,5.711021);
   hbadmatch_stack_1->SetBinContent(2,10.06898);
   hbadmatch_stack_1->SetBinContent(3,7.699902);
   hbadmatch_stack_1->SetBinContent(4,4.057435);
   hbadmatch_stack_1->SetBinContent(5,2.292771);
   hbadmatch_stack_1->SetBinContent(6,1.004324);
   hbadmatch_stack_1->SetBinContent(7,0.3401776);
   hbadmatch_stack_1->SetBinContent(8,1.073592);
   hbadmatch_stack_1->SetBinContent(9,0.3962007);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinError(1,1.514042);
   hbadmatch_stack_1->SetBinError(2,1.731351);
   hbadmatch_stack_1->SetBinError(3,1.670625);
   hbadmatch_stack_1->SetBinError(4,0.9930533);
   hbadmatch_stack_1->SetBinError(5,0.9190935);
   hbadmatch_stack_1->SetBinError(6,0.5186862);
   hbadmatch_stack_1->SetBinError(7,0.3401776);
   hbadmatch_stack_1->SetBinError(8,0.556052);
   hbadmatch_stack_1->SetBinError(9,0.3962007);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,58.98873);
   hext_stack_2->SetBinContent(2,77.1427);
   hext_stack_2->SetBinContent(3,30.93126);
   hext_stack_2->SetBinContent(4,15.79941);
   hext_stack_2->SetBinContent(5,8.649442);
   hext_stack_2->SetBinContent(6,4.04281);
   hext_stack_2->SetBinContent(7,1.137595);
   hext_stack_2->SetBinContent(8,0.4065989);
   hext_stack_2->SetBinContent(9,0.6487947);
   hext_stack_2->SetBinContent(10,0.6416141);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinError(1,5.10542);
   hext_stack_2->SetBinError(2,5.953308);
   hext_stack_2->SetBinError(3,3.689549);
   hext_stack_2->SetBinError(4,2.603455);
   hext_stack_2->SetBinError(5,2.014317);
   hext_stack_2->SetBinError(6,1.336183);
   hext_stack_2->SetBinError(7,0.6602113);
   hext_stack_2->SetBinError(8,0.4065989);
   hext_stack_2->SetBinError(9,0.4587671);
   hext_stack_2->SetBinError(10,0.6416141);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,5.008953);
   hdirt_stack_3->SetBinContent(2,5.938113);
   hdirt_stack_3->SetBinContent(3,4.628994);
   hdirt_stack_3->SetBinContent(4,2.49907);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.6177251);
   hdirt_stack_3->SetBinContent(7,0.4142698);
   hdirt_stack_3->SetBinError(1,1.149144);
   hdirt_stack_3->SetBinError(2,1.464467);
   hdirt_stack_3->SetBinError(3,1.123964);
   hdirt_stack_3->SetBinError(4,0.8375669);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4549508);
   hdirt_stack_3->SetBinError(7,0.4142698);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,47.53679);
   houtFV_stack_4->SetBinContent(2,59.58371);
   houtFV_stack_4->SetBinContent(3,42.26543);
   houtFV_stack_4->SetBinContent(4,16.64961);
   houtFV_stack_4->SetBinContent(5,12.10103);
   houtFV_stack_4->SetBinContent(6,6.484093);
   houtFV_stack_4->SetBinContent(7,3.754535);
   houtFV_stack_4->SetBinContent(8,1.710027);
   houtFV_stack_4->SetBinContent(9,1.270501);
   houtFV_stack_4->SetBinContent(10,0.3401776);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(15,0.2090315);
   houtFV_stack_4->SetBinError(1,3.433051);
   houtFV_stack_4->SetBinError(2,4.13559);
   houtFV_stack_4->SetBinError(3,3.303475);
   houtFV_stack_4->SetBinError(4,2.027672);
   houtFV_stack_4->SetBinError(5,1.754366);
   houtFV_stack_4->SetBinError(6,1.227219);
   houtFV_stack_4->SetBinError(7,0.9799819);
   houtFV_stack_4->SetBinError(8,0.6472842);
   houtFV_stack_4->SetBinError(9,0.5895188);
   houtFV_stack_4->SetBinError(10,0.3401776);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(15,0.2090315);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.092508);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.908992);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.76627);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.302801);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.414956);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8462456);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.4652989);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2721736);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1066853);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4565061);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6339323);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5931994);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.749069);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3866611);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4575098);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2278444);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2238412);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1772578);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.0579174);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3514137);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0589169);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06768902);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2769569);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1255094);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04448979);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03125151);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.156067);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05864476);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,20.98727);
   hNCpi0inFVres_stack_7->SetBinContent(2,30.94824);
   hNCpi0inFVres_stack_7->SetBinContent(3,25.15225);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.91014);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.69778);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.606002);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.595535);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.205647);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.5891862);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.382404);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1799253);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.03728024);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.2185116);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.06540655);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.05967807);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.05967807);
   hNCpi0inFVres_stack_7->SetBinError(1,1.53021);
   hNCpi0inFVres_stack_7->SetBinError(2,1.867259);
   hNCpi0inFVres_stack_7->SetBinError(3,1.618015);
   hNCpi0inFVres_stack_7->SetBinError(4,1.372162);
   hNCpi0inFVres_stack_7->SetBinError(5,1.21956);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7262625);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4782126);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5115146);
   hNCpi0inFVres_stack_7->SetBinError(9,0.179411);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1462702);
   hNCpi0inFVres_stack_7->SetBinError(11,0.07079059);
   hNCpi0inFVres_stack_7->SetBinError(12,0.03728024);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1415609);
   hNCpi0inFVres_stack_7->SetBinError(14,0.05053188);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05967807);
   hNCpi0inFVres_stack_7->SetBinError(16,0.05967807);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.293705);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.991183);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.284422);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.055288);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.490306);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.399243);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.02393);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.2118768);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1829311);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3659826);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1345859);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2359885);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2845029);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.08575786);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8560976);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8607524);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.23356);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7116473);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6637484);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6628487);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2919194);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.08245413);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.07507657);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1779911);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.08870156);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1861367);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2555052);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.0642335);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,34.64491);
   hCCpi0inFV_stack_10->SetBinContent(2,35.93817);
   hCCpi0inFV_stack_10->SetBinContent(3,38.96654);
   hCCpi0inFV_stack_10->SetBinContent(4,28.41526);
   hCCpi0inFV_stack_10->SetBinContent(5,22.69444);
   hCCpi0inFV_stack_10->SetBinContent(6,11.41594);
   hCCpi0inFV_stack_10->SetBinContent(7,5.373393);
   hCCpi0inFV_stack_10->SetBinContent(8,4.098169);
   hCCpi0inFV_stack_10->SetBinContent(9,2.497284);
   hCCpi0inFV_stack_10->SetBinContent(10,1.375317);
   hCCpi0inFV_stack_10->SetBinContent(11,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(12,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(16,0.5867651);
   hCCpi0inFV_stack_10->SetBinError(1,3.065735);
   hCCpi0inFV_stack_10->SetBinError(2,2.988576);
   hCCpi0inFV_stack_10->SetBinError(3,3.165223);
   hCCpi0inFV_stack_10->SetBinError(4,2.654032);
   hCCpi0inFV_stack_10->SetBinError(5,2.432425);
   hCCpi0inFV_stack_10->SetBinError(6,1.686902);
   hCCpi0inFV_stack_10->SetBinError(7,1.160835);
   hCCpi0inFV_stack_10->SetBinError(8,1.029225);
   hCCpi0inFV_stack_10->SetBinError(9,0.7339878);
   hCCpi0inFV_stack_10->SetBinError(10,0.5198233);
   hCCpi0inFV_stack_10->SetBinError(11,0.340721);
   hCCpi0inFV_stack_10->SetBinError(12,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(16,0.3387718);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,4.6729);
   hNCinFV_stack_11->SetBinContent(2,5.03293);
   hNCinFV_stack_11->SetBinContent(3,5.589075);
   hNCinFV_stack_11->SetBinContent(4,7.039985);
   hNCinFV_stack_11->SetBinContent(5,4.482446);
   hNCinFV_stack_11->SetBinContent(6,3.66659);
   hNCinFV_stack_11->SetBinContent(7,1.310533);
   hNCinFV_stack_11->SetBinContent(8,0.8490497);
   hNCinFV_stack_11->SetBinContent(9,0.6761602);
   hNCinFV_stack_11->SetBinContent(10,0.7175387);
   hNCinFV_stack_11->SetBinContent(12,0.1950248);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.11235);
   hNCinFV_stack_11->SetBinError(2,1.32152);
   hNCinFV_stack_11->SetBinError(3,1.085183);
   hNCinFV_stack_11->SetBinError(4,1.515432);
   hNCinFV_stack_11->SetBinError(5,1.103621);
   hNCinFV_stack_11->SetBinError(6,1.040729);
   hNCinFV_stack_11->SetBinError(7,0.6121336);
   hNCinFV_stack_11->SetBinError(8,0.4281797);
   hNCinFV_stack_11->SetBinError(9,0.5690231);
   hNCinFV_stack_11->SetBinError(10,0.3634433);
   hNCinFV_stack_11->SetBinError(12,0.1950249);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,17.06286);
   hnumuCCinFV_stack_12->SetBinContent(2,22.0794);
   hnumuCCinFV_stack_12->SetBinContent(3,18.84624);
   hnumuCCinFV_stack_12->SetBinContent(4,17.26311);
   hnumuCCinFV_stack_12->SetBinContent(5,11.03051);
   hnumuCCinFV_stack_12->SetBinContent(6,4.971479);
   hnumuCCinFV_stack_12->SetBinContent(7,3.166332);
   hnumuCCinFV_stack_12->SetBinContent(8,0.5850745);
   hnumuCCinFV_stack_12->SetBinContent(9,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(10,0.8753801);
   hnumuCCinFV_stack_12->SetBinContent(11,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(12,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3981096);
   hnumuCCinFV_stack_12->SetBinContent(16,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.3598);
   hnumuCCinFV_stack_12->SetBinError(2,2.499798);
   hnumuCCinFV_stack_12->SetBinError(3,2.425495);
   hnumuCCinFV_stack_12->SetBinError(4,3.454342);
   hnumuCCinFV_stack_12->SetBinError(5,1.69218);
   hnumuCCinFV_stack_12->SetBinError(6,1.113933);
   hnumuCCinFV_stack_12->SetBinError(7,0.9090437);
   hnumuCCinFV_stack_12->SetBinError(8,0.337793);
   hnumuCCinFV_stack_12->SetBinError(9,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(10,0.5191111);
   hnumuCCinFV_stack_12->SetBinError(11,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(12,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(14,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(15,0.3981096);
   hnumuCCinFV_stack_12->SetBinError(16,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,2.730427);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.8064182);
   hnueCCinFV_stack_13->SetBinContent(4,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(5,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.103606);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.4036537);
   hnueCCinFV_stack_13->SetBinError(4,0.3025491);
   hnueCCinFV_stack_13->SetBinError(5,0.3152389);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__23->SetBinContent(1,205.789);
   hmcerror__23->SetBinContent(2,256.9142);
   hmcerror__23->SetBinContent(3,186.2137);
   hmcerror__23->SetBinContent(4,114.4202);
   hmcerror__23->SetBinContent(5,78.45894);
   hmcerror__23->SetBinContent(6,41.66649);
   hmcerror__23->SetBinContent(7,19.5816);
   hmcerror__23->SetBinContent(8,11.41221);
   hmcerror__23->SetBinContent(9,7.151224);
   hmcerror__23->SetBinContent(10,5.235307);
   hmcerror__23->SetBinContent(11,2.041483);
   hmcerror__23->SetBinContent(12,1.35213);
   hmcerror__23->SetBinContent(13,1.052027);
   hmcerror__23->SetBinContent(14,0.4554563);
   hmcerror__23->SetBinContent(15,0.6947192);
   hmcerror__23->SetBinContent(16,1.125632);
   hmcerror__23->SetBinError(1,45.35115);
   hmcerror__23->SetBinError(2,55.31681);
   hmcerror__23->SetBinError(3,45.33743);
   hmcerror__23->SetBinError(4,37.15745);
   hmcerror__23->SetBinError(5,25.26609);
   hmcerror__23->SetBinError(6,15.69911);
   hmcerror__23->SetBinError(7,11.35658);
   hmcerror__23->SetBinError(8,9.084952);
   hmcerror__23->SetBinError(9,5.681114);
   hmcerror__23->SetBinError(10,4.919607);
   hmcerror__23->SetBinError(11,2.908654);
   hmcerror__23->SetBinError(12,2.350208);
   hmcerror__23->SetBinError(13,2.091819);
   hmcerror__23->SetBinError(14,1.168782);
   hmcerror__23->SetBinError(15,5.111134);
   hmcerror__23->SetBinError(16,3.25826);
   hmcerror__23->SetEntries(948.2139);

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
   
   Double_t _fx3029[15] = {
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
   Double_t _fy3029[15] = {
   192,
   236,
   193,
   118,
   61,
   34,
   23,
   14,
   7,
   2,
   2,
   1,
   0,
   1,
   0};
   Double_t _felx3029[15] = {
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
   Double_t _fely3029[15] = {
   13.85641,
   15.36229,
   13.89244,
   10.86278,
   7.9383,
   5.9703,
   4.9457,
   3.9102,
   2.85954,
   2,
   2,
   1,
   0,
   1,
   0};
   Double_t _fehx3029[15] = {
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
   Double_t _fehy3029[15] = {
   13.85641,
   15.36229,
   13.89244,
   10.86278,
   7.7354,
   5.7635,
   4.7346,
   3.6898,
   2.61053,
   1.51917,
   1.51917,
   1.35971,
   1.1478,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,495);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(276.4985);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.6/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 884.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

   ci = 1526;
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

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.6","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.0","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 186.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.2","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 97.8","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[15] = {
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
   Double_t _fy3030[15] = {
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
   Double_t _felx3030[15] = {
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
   Double_t _fely3030[15] = {
   0.2203769,
   0.2153124,
   0.2434698,
   0.3247457,
   0.3220294,
   0.3767803,
   0.5799619,
   0.7960731,
   0.7944254,
   0.9396978,
   1.424775,
   1.738153,
   1.988369,
   2.566178,
   7.357122};
   Double_t _fehx3030[15] = {
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
   Double_t _fehy3030[15] = {
   0.2203769,
   0.2153124,
   0.2434698,
   0.3247457,
   0.3220294,
   0.3767803,
   0.5799619,
   0.7960731,
   0.7944254,
   0.9396978,
   1.424775,
   1.738153,
   1.988369,
   2.566178,
   7.357122};
   grae = new TGraphAsymmErrors(15,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,495);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3031[15] = {
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
   Double_t _fy3031[15] = {
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
   Double_t _felx3031[15] = {
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
   Double_t _fely3031[15] = {
   0.1523726,
   0.1449776,
   0.1737466,
   0.1855416,
   0.2062558,
   0.1972014,
   0.2785954,
   0.2921414,
   0.2958235,
   0.358628,
   0.4716698,
   0.6475922,
   0.6823418,
   1.104155,
   0.8936255};
   Double_t _fehx3031[15] = {
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
   Double_t _fehy3031[15] = {
   0.1523726,
   0.1449776,
   0.1737466,
   0.1855416,
   0.2062558,
   0.1972014,
   0.2785954,
   0.2921414,
   0.2958235,
   0.358628,
   0.4716698,
   0.6475922,
   0.6823418,
   1.104155,
   0.8936255};
   grae = new TGraphAsymmErrors(15,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,495);
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
   
   Double_t _fx3032[15] = {
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
   Double_t _fy3032[15] = {
   0.9329945,
   0.9185948,
   1.036443,
   1.031287,
   0.7774767,
   0.8160035,
   1.174572,
   1.226756,
   0.9788534,
   0.3820215,
   0.9796798,
   0.739574,
   0,
   2.195601,
   0};
   Double_t _felx3032[15] = {
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
   Double_t _fely3032[15] = {
   0.06733308,
   0.05979543,
   0.07460483,
   0.09493764,
   0.1011778,
   0.1432878,
   0.2525687,
   0.3426331,
   0.3998672,
   0.3820215,
   0.9796798,
   0.739574,
   0,
   2.195601,
   0};
   Double_t _fehx3032[15] = {
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
   Double_t _fehy3032[15] = {
   0.06733308,
   0.05979543,
   0.07460483,
   0.09493764,
   0.0985917,
   0.1383246,
   0.2417882,
   0.3233204,
   0.3650466,
   0.2901778,
   0.7441501,
   1.005606,
   1.091036,
   2.98538,
   1.652178};
   grae = new TGraphAsymmErrors(15,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,495);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(5.699079);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
