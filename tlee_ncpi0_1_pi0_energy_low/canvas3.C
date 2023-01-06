#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Oct 22 18:59:34 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-69.23077,-8.658054,507.6923,957.3985);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__7->SetBinContent(1,337.1791);
   hmc__7->SetBinContent(2,432.9027);
   hmc__7->SetBinContent(3,323.3094);
   hmc__7->SetBinContent(4,195.9049);
   hmc__7->SetBinContent(5,127.5295);
   hmc__7->SetBinContent(6,75.31331);
   hmc__7->SetBinContent(7,41.88569);
   hmc__7->SetBinContent(8,22.9986);
   hmc__7->SetBinContent(9,12.87568);
   hmc__7->SetBinContent(10,10.31994);
   hmc__7->SetBinContent(11,2.80536);
   hmc__7->SetBinContent(12,4.069524);
   hmc__7->SetBinContent(13,2.373356);
   hmc__7->SetBinContent(14,1.086671);
   hmc__7->SetBinContent(15,1.515335);
   hmc__7->SetBinContent(16,2.084323);
   hmc__7->SetBinError(1,71.69656);
   hmc__7->SetBinError(2,87.52817);
   hmc__7->SetBinError(3,72.74374);
   hmc__7->SetBinError(4,57.05802);
   hmc__7->SetBinError(5,36.99484);
   hmc__7->SetBinError(6,25.58784);
   hmc__7->SetBinError(7,17.46976);
   hmc__7->SetBinError(8,11.67025);
   hmc__7->SetBinError(9,8.956808);
   hmc__7->SetBinError(10,6.702309);
   hmc__7->SetBinError(11,4.43329);
   hmc__7->SetBinError(12,4.96132);
   hmc__7->SetBinError(13,3.438642);
   hmc__7->SetBinError(14,1.416892);
   hmc__7->SetBinError(15,11.35355);
   hmc__7->SetBinError(16,4.52653);
   hmc__7->SetMinimum(-8.658054);
   hmc__7->SetMaximum(909.0957);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",15,0,450);
   hs3_stack_3->SetMinimum(-1.246074e-08);
   hs3_stack_3->SetMaximum(454.5478);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,9.857634);
   hbadmatch_stack_1->SetBinContent(2,14.6509);
   hbadmatch_stack_1->SetBinContent(3,12.47628);
   hbadmatch_stack_1->SetBinContent(4,6.498581);
   hbadmatch_stack_1->SetBinContent(5,4.429221);
   hbadmatch_stack_1->SetBinContent(6,2.929733);
   hbadmatch_stack_1->SetBinContent(7,0.6947839);
   hbadmatch_stack_1->SetBinContent(8,1.41547);
   hbadmatch_stack_1->SetBinContent(9,0.7363783);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinError(1,1.81011);
   hbadmatch_stack_1->SetBinError(2,2.061989);
   hbadmatch_stack_1->SetBinError(3,2.015172);
   hbadmatch_stack_1->SetBinError(4,1.246872);
   hbadmatch_stack_1->SetBinError(5,1.186875);
   hbadmatch_stack_1->SetBinError(6,0.9353766);
   hbadmatch_stack_1->SetBinError(7,0.4329969);
   hbadmatch_stack_1->SetBinError(8,0.6093653);
   hbadmatch_stack_1->SetBinError(9,0.5222028);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,80.33042);
   hext_stack_2->SetBinContent(2,111.2129);
   hext_stack_2->SetBinContent(3,44.98894);
   hext_stack_2->SetBinContent(4,25.00108);
   hext_stack_2->SetBinContent(5,12.54662);
   hext_stack_2->SetBinContent(6,5.180405);
   hext_stack_2->SetBinContent(7,1.544194);
   hext_stack_2->SetBinContent(8,3.297453);
   hext_stack_2->SetBinContent(9,0.6487947);
   hext_stack_2->SetBinContent(10,0.9660115);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinError(1,5.997136);
   hext_stack_2->SetBinError(2,7.356568);
   hext_stack_2->SetBinError(3,4.509884);
   hext_stack_2->SetBinError(4,3.374645);
   hext_stack_2->SetBinError(5,2.335679);
   hext_stack_2->SetBinError(6,1.49039);
   hext_stack_2->SetBinError(7,0.7753719);
   hext_stack_2->SetBinError(8,1.384641);
   hext_stack_2->SetBinError(9,0.4587671);
   hext_stack_2->SetBinError(10,0.7189592);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,7.734661);
   hdirt_stack_3->SetBinContent(2,6.685949);
   hdirt_stack_3->SetBinContent(3,4.923527);
   hdirt_stack_3->SetBinContent(4,2.913991);
   hdirt_stack_3->SetBinContent(5,0.4762587);
   hdirt_stack_3->SetBinContent(6,0.6177251);
   hdirt_stack_3->SetBinContent(7,0.4142698);
   hdirt_stack_3->SetBinError(1,1.459589);
   hdirt_stack_3->SetBinError(2,1.526839);
   hdirt_stack_3->SetBinError(3,1.14317);
   hdirt_stack_3->SetBinError(4,0.9347075);
   hdirt_stack_3->SetBinError(5,0.3652866);
   hdirt_stack_3->SetBinError(6,0.4549508);
   hdirt_stack_3->SetBinError(7,0.4142698);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,70.62648);
   houtFV_stack_4->SetBinContent(2,92.08289);
   houtFV_stack_4->SetBinContent(3,65.53134);
   houtFV_stack_4->SetBinContent(4,29.74794);
   houtFV_stack_4->SetBinContent(5,20.10993);
   houtFV_stack_4->SetBinContent(6,13.51748);
   houtFV_stack_4->SetBinContent(7,8.831406);
   houtFV_stack_4->SetBinContent(8,2.541733);
   houtFV_stack_4->SetBinContent(9,3.096578);
   houtFV_stack_4->SetBinContent(10,1.020533);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(12,0.5858262);
   houtFV_stack_4->SetBinContent(13,0.2510497);
   houtFV_stack_4->SetBinContent(15,0.2090315);
   houtFV_stack_4->SetBinError(1,4.176852);
   houtFV_stack_4->SetBinError(2,5.005013);
   houtFV_stack_4->SetBinError(3,4.136291);
   houtFV_stack_4->SetBinError(4,2.719318);
   houtFV_stack_4->SetBinError(5,2.272255);
   houtFV_stack_4->SetBinError(6,1.968588);
   houtFV_stack_4->SetBinError(7,1.556479);
   houtFV_stack_4->SetBinError(8,0.7509936);
   houtFV_stack_4->SetBinError(9,1.028568);
   houtFV_stack_4->SetBinError(10,0.5892049);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(12,0.5858262);
   houtFV_stack_4->SetBinError(13,0.2510497);
   houtFV_stack_4->SetBinError(15,0.2090315);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.252824);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.121714);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.999163);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.351846);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.84639);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8462456);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.4931989);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2721736);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1066853);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4565061);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6437007);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6113367);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.76351);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3885736);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5360698);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2278444);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2255732);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1772578);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.0579174);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3514137);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2053025);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4975906);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4691616);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1611416);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.04236947);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08790837);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1798486);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1677415);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06383196);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03025005);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.26957);
   hNCpi0inFVres_stack_7->SetBinContent(2,57.62655);
   hNCpi0inFVres_stack_7->SetBinContent(3,49.03488);
   hNCpi0inFVres_stack_7->SetBinContent(4,30.05468);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.86212);
   hNCpi0inFVres_stack_7->SetBinContent(6,10.96361);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.81308);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.911974);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.548444);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.8001372);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4048588);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1053622);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.3948221);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.09330653);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.05967807);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.282214);
   hNCpi0inFVres_stack_7->SetBinError(1,2.028633);
   hNCpi0inFVres_stack_7->SetBinError(2,2.455866);
   hNCpi0inFVres_stack_7->SetBinError(3,2.124708);
   hNCpi0inFVres_stack_7->SetBinError(4,1.708812);
   hNCpi0inFVres_stack_7->SetBinError(5,1.488396);
   hNCpi0inFVres_stack_7->SetBinError(6,1.080803);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7187185);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6459337);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3880232);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2409898);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2205096);
   hNCpi0inFVres_stack_7->SetBinError(12,0.06644501);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2261081);
   hNCpi0inFVres_stack_7->SetBinError(14,0.05772244);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05967807);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1525827);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.750739);
   hNCpi0inFVdis_stack_8->SetBinContent(2,14.70813);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.06752);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.05196);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.16631);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.37509);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.663286);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.390481);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5345553);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.401228);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.2499208);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2821963);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5138963);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.651801);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1415578);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.064028);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.191892);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.689333);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.163731);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7670228);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.030153);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6814371);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5116254);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1491658);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7084428);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1138824);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1891043);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3225929);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4496736);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.07538409);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05182843);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.0300047);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,52.3307);
   hCCpi0inFV_stack_10->SetBinContent(2,66.34502);
   hCCpi0inFV_stack_10->SetBinContent(3,72.25789);
   hCCpi0inFV_stack_10->SetBinContent(4,49.71047);
   hCCpi0inFV_stack_10->SetBinContent(5,33.85742);
   hCCpi0inFV_stack_10->SetBinContent(6,19.92725);
   hCCpi0inFV_stack_10->SetBinContent(7,8.873896);
   hCCpi0inFV_stack_10->SetBinContent(8,5.762101);
   hCCpi0inFV_stack_10->SetBinContent(9,4.012683);
   hCCpi0inFV_stack_10->SetBinContent(10,2.697381);
   hCCpi0inFV_stack_10->SetBinContent(11,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(12,1.412273);
   hCCpi0inFV_stack_10->SetBinContent(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(16,0.9269427);
   hCCpi0inFV_stack_10->SetBinError(1,3.703772);
   hCCpi0inFV_stack_10->SetBinError(2,4.071215);
   hCCpi0inFV_stack_10->SetBinError(3,4.328882);
   hCCpi0inFV_stack_10->SetBinError(4,3.501431);
   hCCpi0inFV_stack_10->SetBinError(5,2.94772);
   hCCpi0inFV_stack_10->SetBinError(6,2.256082);
   hCCpi0inFV_stack_10->SetBinError(7,1.512269);
   hCCpi0inFV_stack_10->SetBinError(8,1.21829);
   hCCpi0inFV_stack_10->SetBinError(9,0.9405604);
   hCCpi0inFV_stack_10->SetBinError(10,0.7607625);
   hCCpi0inFV_stack_10->SetBinError(11,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(12,0.6510715);
   hCCpi0inFV_stack_10->SetBinError(13,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(16,0.4800908);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,9.781654);
   hNCinFV_stack_11->SetBinContent(2,9.718468);
   hNCinFV_stack_11->SetBinContent(3,13.37676);
   hNCinFV_stack_11->SetBinContent(4,12.27544);
   hNCinFV_stack_11->SetBinContent(5,8.465734);
   hNCinFV_stack_11->SetBinContent(6,7.051003);
   hNCinFV_stack_11->SetBinContent(7,4.368975);
   hNCinFV_stack_11->SetBinContent(8,2.159979);
   hNCinFV_stack_11->SetBinContent(9,1.213053);
   hNCinFV_stack_11->SetBinContent(10,1.015374);
   hNCinFV_stack_11->SetBinContent(12,0.3917402);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.619398);
   hNCinFV_stack_11->SetBinError(2,1.662348);
   hNCinFV_stack_11->SetBinError(3,1.856027);
   hNCinFV_stack_11->SetBinError(4,1.943329);
   hNCinFV_stack_11->SetBinError(5,1.524998);
   hNCinFV_stack_11->SetBinError(6,1.540346);
   hNCinFV_stack_11->SetBinError(7,1.365996);
   hNCinFV_stack_11->SetBinError(8,0.721315);
   hNCinFV_stack_11->SetBinError(9,0.6915237);
   hNCinFV_stack_11->SetBinError(10,0.4250831);
   hNCinFV_stack_11->SetBinError(12,0.2770047);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,49.43689);
   hnumuCCinFV_stack_12->SetBinContent(2,53.95909);
   hnumuCCinFV_stack_12->SetBinContent(3,40.81474);
   hnumuCCinFV_stack_12->SetBinContent(4,27.81694);
   hnumuCCinFV_stack_12->SetBinContent(5,18.74891);
   hnumuCCinFV_stack_12->SetBinContent(6,8.097696);
   hnumuCCinFV_stack_12->SetBinContent(7,7.991885);
   hnumuCCinFV_stack_12->SetBinContent(8,2.194384);
   hnumuCCinFV_stack_12->SetBinContent(9,0.9785053);
   hnumuCCinFV_stack_12->SetBinContent(10,1.641145);
   hnumuCCinFV_stack_12->SetBinContent(11,0.4236077);
   hnumuCCinFV_stack_12->SetBinContent(12,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(13,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(15,0.594825);
   hnumuCCinFV_stack_12->SetBinContent(16,0.536893);
   hnumuCCinFV_stack_12->SetBinError(1,4.153868);
   hnumuCCinFV_stack_12->SetBinError(2,4.254063);
   hnumuCCinFV_stack_12->SetBinError(3,3.631185);
   hnumuCCinFV_stack_12->SetBinError(4,3.83356);
   hnumuCCinFV_stack_12->SetBinError(5,2.207992);
   hnumuCCinFV_stack_12->SetBinError(6,1.437436);
   hnumuCCinFV_stack_12->SetBinError(7,1.467314);
   hnumuCCinFV_stack_12->SetBinError(8,0.6628288);
   hnumuCCinFV_stack_12->SetBinError(9,0.4376048);
   hnumuCCinFV_stack_12->SetBinError(10,0.6902108);
   hnumuCCinFV_stack_12->SetBinError(11,0.3004743);
   hnumuCCinFV_stack_12->SetBinError(12,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(13,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(14,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(15,0.4440588);
   hnumuCCinFV_stack_12->SetBinError(16,0.3929602);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,5.602273);
   hnueCCinFV_stack_13->SetBinContent(2,2.24164);
   hnueCCinFV_stack_13->SetBinContent(3,1.343311);
   hnueCCinFV_stack_13->SetBinContent(4,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(5,0.9782481);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.4138155);
   hnueCCinFV_stack_13->SetBinError(1,1.998379);
   hnueCCinFV_stack_13->SetBinError(2,1.287874);
   hnueCCinFV_stack_13->SetBinError(3,0.5633418);
   hnueCCinFV_stack_13->SetBinError(4,0.3025491);
   hnueCCinFV_stack_13->SetBinError(5,0.5031213);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2929666);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__8->SetBinContent(1,337.1791);
   hmcerror__8->SetBinContent(2,432.9027);
   hmcerror__8->SetBinContent(3,323.3094);
   hmcerror__8->SetBinContent(4,195.9049);
   hmcerror__8->SetBinContent(5,127.5295);
   hmcerror__8->SetBinContent(6,75.31331);
   hmcerror__8->SetBinContent(7,41.88569);
   hmcerror__8->SetBinContent(8,22.9986);
   hmcerror__8->SetBinContent(9,12.87568);
   hmcerror__8->SetBinContent(10,10.31994);
   hmcerror__8->SetBinContent(11,2.80536);
   hmcerror__8->SetBinContent(12,4.069524);
   hmcerror__8->SetBinContent(13,2.373356);
   hmcerror__8->SetBinContent(14,1.086671);
   hmcerror__8->SetBinContent(15,1.515335);
   hmcerror__8->SetBinContent(16,2.084323);
   hmcerror__8->SetBinError(1,71.69656);
   hmcerror__8->SetBinError(2,87.52817);
   hmcerror__8->SetBinError(3,72.74374);
   hmcerror__8->SetBinError(4,57.05802);
   hmcerror__8->SetBinError(5,36.99484);
   hmcerror__8->SetBinError(6,25.58784);
   hmcerror__8->SetBinError(7,17.46976);
   hmcerror__8->SetBinError(8,11.67025);
   hmcerror__8->SetBinError(9,8.956808);
   hmcerror__8->SetBinError(10,6.702309);
   hmcerror__8->SetBinError(11,4.43329);
   hmcerror__8->SetBinError(12,4.96132);
   hmcerror__8->SetBinError(13,3.438642);
   hmcerror__8->SetBinError(14,1.416892);
   hmcerror__8->SetBinError(15,11.35355);
   hmcerror__8->SetBinError(16,4.52653);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[15] = {
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
   Double_t _fy3009[15] = {
   315,
   414,
   317,
   193,
   93,
   57,
   32,
   22,
   11,
   4,
   4,
   2,
   1,
   3,
   1};
   Double_t _felx3009[15] = {
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
   Double_t _fely3009[15] = {
   17.74824,
   20.34699,
   17.80449,
   13.89244,
   9.7658,
   7.679,
   5.7977,
   4.8417,
   3.4975,
   2.29683,
   2.29683,
   2,
   1,
   2.143368,
   1};
   Double_t _fehx3009[15] = {
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
   Double_t _fehy3009[15] = {
   17.74824,
   20.34699,
   17.80449,
   13.89244,
   9.564,
   7.4757,
   5.5904,
   4.6299,
   3.27,
   1.98186,
   1.98186,
   1.51917,
   1.35971,
   1.72422,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,495);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(477.7817);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1469.0","lp");
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

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  15.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.9","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  219.9","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  66.8","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 318.2","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 70.0","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 213.8","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[15] = {
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
   Double_t _fy3010[15] = {
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
   Double_t _felx3010[15] = {
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
   Double_t _fely3010[15] = {
   0.2126364,
   0.202189,
   0.2249973,
   0.2912537,
   0.2900884,
   0.339752,
   0.4170818,
   0.5074331,
   0.6956379,
   0.6494521,
   1.580293,
   1.21914,
   1.448853,
   1.303883,
   7.492432};
   Double_t _fehx3010[15] = {
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
   Double_t _fehy3010[15] = {
   0.2126364,
   0.202189,
   0.2249973,
   0.2912537,
   0.2900884,
   0.339752,
   0.4170818,
   0.5074331,
   0.6956379,
   0.6494521,
   1.580293,
   1.21914,
   1.448853,
   1.303883,
   7.492432};
   grae = new TGraphAsymmErrors(15,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,495);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[15] = {
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
   Double_t _fy3011[15] = {
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
   Double_t _felx3011[15] = {
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
   Double_t _fely3011[15] = {
   0.1657902,
   0.1778802,
   0.2046806,
   0.2068609,
   0.2212216,
   0.2087972,
   0.2524188,
   0.2572308,
   0.2625254,
   0.2749873,
   0.3857773,
   0.5090227,
   0.4323813,
   0.6593049,
   0.6224204};
   Double_t _fehx3011[15] = {
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
   Double_t _fehy3011[15] = {
   0.1657902,
   0.1778802,
   0.2046806,
   0.2068609,
   0.2212216,
   0.2087972,
   0.2524188,
   0.2572308,
   0.2625254,
   0.2749873,
   0.3857773,
   0.5090227,
   0.4323813,
   0.6593049,
   0.6224204};
   grae = new TGraphAsymmErrors(15,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,495);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[15] = {
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
   Double_t _fy3012[15] = {
   0.9342215,
   0.956335,
   0.980485,
   0.9851721,
   0.7292428,
   0.7568383,
   0.7639841,
   0.9565801,
   0.8543241,
   0.387599,
   1.425842,
   0.491458,
   0.4213444,
   2.760726,
   0.6599199};
   Double_t _felx3012[15] = {
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
   Double_t _fely3012[15] = {
   0.05263742,
   0.0470013,
   0.05506952,
   0.07091424,
   0.07657677,
   0.1019607,
   0.1384172,
   0.2105215,
   0.2716362,
   0.2225623,
   0.8187293,
   0.491458,
   0.4213444,
   1.972418,
   0.6599199};
   Double_t _fehx3012[15] = {
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
   Double_t _fehy3012[15] = {
   0.05263742,
   0.0470013,
   0.05506952,
   0.07091424,
   0.07499439,
   0.09926134,
   0.133468,
   0.2013123,
   0.2539672,
   0.1920418,
   0.7064549,
   0.3733041,
   0.5729061,
   1.5867,
   0.8972997};
   grae = new TGraphAsymmErrors(15,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,495);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(4.782169);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_energy_low_all",15,0,450);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
