#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 18:31:54 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",86,109,1200,900);
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
   pad1->Range(-92.30769,-9.32,676.9231,1030.596);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__16->SetBinContent(1,7.544202);
   hmc__16->SetBinContent(2,43.83821);
   hmc__16->SetBinContent(3,145.9554);
   hmc__16->SetBinContent(4,313.6681);
   hmc__16->SetBinContent(5,378.3521);
   hmc__16->SetBinContent(6,373.9702);
   hmc__16->SetBinContent(7,311.5931);
   hmc__16->SetBinContent(8,254.1534);
   hmc__16->SetBinContent(9,199.7967);
   hmc__16->SetBinContent(10,154.9941);
   hmc__16->SetBinContent(11,119.5058);
   hmc__16->SetBinContent(12,93.40466);
   hmc__16->SetBinContent(13,64.46655);
   hmc__16->SetBinContent(14,57.21071);
   hmc__16->SetBinContent(15,48.04345);
   hmc__16->SetBinContent(16,40.62923);
   hmc__16->SetBinContent(17,28.98754);
   hmc__16->SetBinContent(18,23.14018);
   hmc__16->SetBinContent(19,19.03288);
   hmc__16->SetBinContent(20,18.42242);
   hmc__16->SetBinContent(21,99.18655);
   hmc__16->SetBinError(1,5.462931);
   hmc__16->SetBinError(2,14.42944);
   hmc__16->SetBinError(3,55.10983);
   hmc__16->SetBinError(4,80.1082);
   hmc__16->SetBinError(5,92.60743);
   hmc__16->SetBinError(6,91.10113);
   hmc__16->SetBinError(7,83.98696);
   hmc__16->SetBinError(8,68.02326);
   hmc__16->SetBinError(9,55.62345);
   hmc__16->SetBinError(10,45.71066);
   hmc__16->SetBinError(11,39.34579);
   hmc__16->SetBinError(12,30.77748);
   hmc__16->SetBinError(13,28.87176);
   hmc__16->SetBinError(14,25.37667);
   hmc__16->SetBinError(15,18.41336);
   hmc__16->SetBinError(16,18.01383);
   hmc__16->SetBinError(17,11.70482);
   hmc__16->SetBinError(18,11.28051);
   hmc__16->SetBinError(19,10.41888);
   hmc__16->SetBinError(20,10.49281);
   hmc__16->SetBinError(21,37.83811);
   hmc__16->SetMinimum(-9.32);
   hmc__16->SetMaximum(978.6);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,0,600);
   hs6_stack_6->SetMinimum(-8.758691e-09);
   hs6_stack_6->SetMaximum(397.2697);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.4927575);
   hbadmatch_stack_1->SetBinContent(2,4.477349);
   hbadmatch_stack_1->SetBinContent(3,7.013187);
   hbadmatch_stack_1->SetBinContent(4,9.986076);
   hbadmatch_stack_1->SetBinContent(5,11.74046);
   hbadmatch_stack_1->SetBinContent(6,9.453367);
   hbadmatch_stack_1->SetBinContent(7,9.249318);
   hbadmatch_stack_1->SetBinContent(8,3.73465);
   hbadmatch_stack_1->SetBinContent(9,0.7852378);
   hbadmatch_stack_1->SetBinContent(10,3.547091);
   hbadmatch_stack_1->SetBinContent(11,0.930169);
   hbadmatch_stack_1->SetBinContent(12,0.1221502);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.3166315);
   hbadmatch_stack_1->SetBinContent(16,0.6399668);
   hbadmatch_stack_1->SetBinContent(17,0.4241887);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.5610657);
   hbadmatch_stack_1->SetBinError(1,0.3559205);
   hbadmatch_stack_1->SetBinError(2,1.288781);
   hbadmatch_stack_1->SetBinError(3,1.35529);
   hbadmatch_stack_1->SetBinError(4,1.579755);
   hbadmatch_stack_1->SetBinError(5,1.701439);
   hbadmatch_stack_1->SetBinError(6,1.721583);
   hbadmatch_stack_1->SetBinError(7,2.296865);
   hbadmatch_stack_1->SetBinError(8,1.01286);
   hbadmatch_stack_1->SetBinError(9,0.3917478);
   hbadmatch_stack_1->SetBinError(10,1.834223);
   hbadmatch_stack_1->SetBinError(11,0.4253855);
   hbadmatch_stack_1->SetBinError(12,0.1221502);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.230384);
   hbadmatch_stack_1->SetBinError(16,0.484942);
   hbadmatch_stack_1->SetBinError(17,0.3007342);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.5610657);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,3.297453);
   hext_stack_2->SetBinContent(2,11.11499);
   hext_stack_2->SetBinContent(3,27.51847);
   hext_stack_2->SetBinContent(4,46.14089);
   hext_stack_2->SetBinContent(5,56.70794);
   hext_stack_2->SetBinContent(6,43.0988);
   hext_stack_2->SetBinContent(7,31.43877);
   hext_stack_2->SetBinContent(8,13.78078);
   hext_stack_2->SetBinContent(9,14.9818);
   hext_stack_2->SetBinContent(10,13.58047);
   hext_stack_2->SetBinContent(11,3.814975);
   hext_stack_2->SetBinContent(12,4.207213);
   hext_stack_2->SetBinContent(13,1.779209);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(15,4.345666);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinError(1,1.384641);
   hext_stack_2->SetBinError(2,2.14031);
   hext_stack_2->SetBinError(3,3.507867);
   hext_stack_2->SetBinError(4,4.513594);
   hext_stack_2->SetBinError(5,5.215038);
   hext_stack_2->SetBinError(6,4.498469);
   hext_stack_2->SetBinError(7,3.860222);
   hext_stack_2->SetBinError(8,2.355624);
   hext_stack_2->SetBinError(9,2.512411);
   hext_stack_2->SetBinError(10,2.536689);
   hext_stack_2->SetBinError(11,1.156649);
   hext_stack_2->SetBinError(12,1.380421);
   hext_stack_2->SetBinError(13,0.9206235);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(15,1.579311);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(1,0.3652534);
   hdirt_stack_3->SetBinContent(2,1.747276);
   hdirt_stack_3->SetBinContent(3,6.734902);
   hdirt_stack_3->SetBinContent(4,4.004404);
   hdirt_stack_3->SetBinContent(5,8.095148);
   hdirt_stack_3->SetBinContent(6,6.191111);
   hdirt_stack_3->SetBinContent(7,2.272875);
   hdirt_stack_3->SetBinContent(8,1.456716);
   hdirt_stack_3->SetBinContent(9,1.640887);
   hdirt_stack_3->SetBinContent(10,1.965115);
   hdirt_stack_3->SetBinContent(11,0.3888685);
   hdirt_stack_3->SetBinContent(12,1.04839);
   hdirt_stack_3->SetBinContent(13,0.1580268);
   hdirt_stack_3->SetBinContent(15,1.330832);
   hdirt_stack_3->SetBinContent(16,0.4080678);
   hdirt_stack_3->SetBinError(1,0.3652534);
   hdirt_stack_3->SetBinError(2,0.6554984);
   hdirt_stack_3->SetBinError(3,1.358306);
   hdirt_stack_3->SetBinError(4,1.010126);
   hdirt_stack_3->SetBinError(5,1.499284);
   hdirt_stack_3->SetBinError(6,1.377335);
   hdirt_stack_3->SetBinError(7,0.6790373);
   hdirt_stack_3->SetBinError(8,0.6891782);
   hdirt_stack_3->SetBinError(9,0.692948);
   hdirt_stack_3->SetBinError(10,0.7075342);
   hdirt_stack_3->SetBinError(11,0.2786036);
   hdirt_stack_3->SetBinError(12,0.5584383);
   hdirt_stack_3->SetBinError(13,0.1580268);
   hdirt_stack_3->SetBinError(15,1.107563);
   hdirt_stack_3->SetBinError(16,0.4080678);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,0.9780464);
   houtFV_stack_4->SetBinContent(2,6.066074);
   houtFV_stack_4->SetBinContent(3,21.98469);
   houtFV_stack_4->SetBinContent(4,46.63508);
   houtFV_stack_4->SetBinContent(5,45.94101);
   houtFV_stack_4->SetBinContent(6,42.56741);
   houtFV_stack_4->SetBinContent(7,30.99388);
   houtFV_stack_4->SetBinContent(8,23.02648);
   houtFV_stack_4->SetBinContent(9,16.14135);
   houtFV_stack_4->SetBinContent(10,15.28498);
   houtFV_stack_4->SetBinContent(11,8.940072);
   houtFV_stack_4->SetBinContent(12,5.819977);
   houtFV_stack_4->SetBinContent(13,3.20586);
   houtFV_stack_4->SetBinContent(14,3.409871);
   houtFV_stack_4->SetBinContent(15,2.794178);
   houtFV_stack_4->SetBinContent(16,3.498059);
   houtFV_stack_4->SetBinContent(17,1.121968);
   houtFV_stack_4->SetBinContent(19,2.677741);
   houtFV_stack_4->SetBinContent(20,0.5850745);
   houtFV_stack_4->SetBinContent(21,2.630435);
   houtFV_stack_4->SetBinError(1,0.4833126);
   houtFV_stack_4->SetBinError(2,1.221939);
   houtFV_stack_4->SetBinError(3,2.34445);
   houtFV_stack_4->SetBinError(4,3.447144);
   houtFV_stack_4->SetBinError(5,3.398855);
   houtFV_stack_4->SetBinError(6,3.257566);
   houtFV_stack_4->SetBinError(7,2.820041);
   houtFV_stack_4->SetBinError(8,2.380038);
   houtFV_stack_4->SetBinError(9,2.029674);
   houtFV_stack_4->SetBinError(10,1.967778);
   houtFV_stack_4->SetBinError(11,1.465133);
   houtFV_stack_4->SetBinError(12,1.209034);
   houtFV_stack_4->SetBinError(13,0.8443209);
   houtFV_stack_4->SetBinError(14,0.8647944);
   houtFV_stack_4->SetBinError(15,0.8608281);
   houtFV_stack_4->SetBinError(16,0.8897245);
   houtFV_stack_4->SetBinError(17,0.5181909);
   houtFV_stack_4->SetBinError(19,0.8803978);
   houtFV_stack_4->SetBinError(20,0.337793);
   houtFV_stack_4->SetBinError(21,0.8708725);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.3794058);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.370243);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.154611);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,7.205546);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.44393);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,9.7201);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,8.913542);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.134453);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,8.14957);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.928089);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.394172);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.918967);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.539387);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.383177);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.948655);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.489454);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.8799393);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.203294);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.178768);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,10.00397);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2223618);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4138825);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8135469);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9712015);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.165609);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.104585);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.061519);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.03031);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.151197);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8908266);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6807176);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8988357);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7677903);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3111849);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5143603);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3566457);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3099989);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5112641);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4122547);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.36984);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.04342267);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1747422);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6537495);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7287532);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.055701);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6536441);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.02398);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3827297);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05344805);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.01491798);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3007007);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1986936);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05879373);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.07411882);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2129437);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3523315);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03703459);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07246993);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1695473);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2956539);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3281032);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2084947);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3461706);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1446069);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03424265);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.01491798);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1792351);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1262849);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03668827);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04914633);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1388408);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2350932);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.14298);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.555666);
   hNCpi0inFVres_stack_7->SetBinContent(3,43.73305);
   hNCpi0inFVres_stack_7->SetBinContent(4,114.9164);
   hNCpi0inFVres_stack_7->SetBinContent(5,146.0245);
   hNCpi0inFVres_stack_7->SetBinContent(6,144.1127);
   hNCpi0inFVres_stack_7->SetBinContent(7,126.2045);
   hNCpi0inFVres_stack_7->SetBinContent(8,109.8951);
   hNCpi0inFVres_stack_7->SetBinContent(9,79.08701);
   hNCpi0inFVres_stack_7->SetBinContent(10,57.13504);
   hNCpi0inFVres_stack_7->SetBinContent(11,46.87839);
   hNCpi0inFVres_stack_7->SetBinContent(12,32.97985);
   hNCpi0inFVres_stack_7->SetBinContent(13,21.25245);
   hNCpi0inFVres_stack_7->SetBinContent(14,19.60545);
   hNCpi0inFVres_stack_7->SetBinContent(15,13.80018);
   hNCpi0inFVres_stack_7->SetBinContent(16,14.37469);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.14691);
   hNCpi0inFVres_stack_7->SetBinContent(18,8.583633);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.353581);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.287179);
   hNCpi0inFVres_stack_7->SetBinContent(21,25.72984);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3440033);
   hNCpi0inFVres_stack_7->SetBinError(2,1.10911);
   hNCpi0inFVres_stack_7->SetBinError(3,2.20137);
   hNCpi0inFVres_stack_7->SetBinError(4,3.803596);
   hNCpi0inFVres_stack_7->SetBinError(5,4.141729);
   hNCpi0inFVres_stack_7->SetBinError(6,4.102583);
   hNCpi0inFVres_stack_7->SetBinError(7,3.840783);
   hNCpi0inFVres_stack_7->SetBinError(8,3.647238);
   hNCpi0inFVres_stack_7->SetBinError(9,2.961898);
   hNCpi0inFVres_stack_7->SetBinError(10,2.45532);
   hNCpi0inFVres_stack_7->SetBinError(11,2.289748);
   hNCpi0inFVres_stack_7->SetBinError(12,1.908347);
   hNCpi0inFVres_stack_7->SetBinError(13,1.508894);
   hNCpi0inFVres_stack_7->SetBinError(14,1.453151);
   hNCpi0inFVres_stack_7->SetBinError(15,1.311918);
   hNCpi0inFVres_stack_7->SetBinError(16,1.478519);
   hNCpi0inFVres_stack_7->SetBinError(17,1.195834);
   hNCpi0inFVres_stack_7->SetBinError(18,1.172294);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7324745);
   hNCpi0inFVres_stack_7->SetBinError(20,1.088495);
   hNCpi0inFVres_stack_7->SetBinError(21,2.11309);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6221819);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.355745);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.742006);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.57211);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.04783);
   hNCpi0inFVdis_stack_8->SetBinContent(6,22.67013);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.16184);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.49118);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.36743);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.72597);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.951433);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.616609);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.653688);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.716224);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.097531);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.708537);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.603407);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.533789);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.193285);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.916828);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.01438);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3627871);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3139678);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.113971);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.590491);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.646031);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.647256);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.496708);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.349103);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.21915);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.033458);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9808874);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.049744);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9445944);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7210369);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6932465);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7499157);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7096163);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5780594);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5094378);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6632512);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.649639);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1599382);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.08199448);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(2,3.322793);
   hCCpi0inFV_stack_10->SetBinContent(3,13.27931);
   hCCpi0inFV_stack_10->SetBinContent(4,29.80417);
   hCCpi0inFV_stack_10->SetBinContent(5,33.81787);
   hCCpi0inFV_stack_10->SetBinContent(6,47.71424);
   hCCpi0inFV_stack_10->SetBinContent(7,44.13272);
   hCCpi0inFV_stack_10->SetBinContent(8,37.77678);
   hCCpi0inFV_stack_10->SetBinContent(9,38.28943);
   hCCpi0inFV_stack_10->SetBinContent(10,23.96912);
   hCCpi0inFV_stack_10->SetBinContent(11,24.72169);
   hCCpi0inFV_stack_10->SetBinContent(12,18.89316);
   hCCpi0inFV_stack_10->SetBinContent(13,16.18358);
   hCCpi0inFV_stack_10->SetBinContent(14,11.16814);
   hCCpi0inFV_stack_10->SetBinContent(15,9.537992);
   hCCpi0inFV_stack_10->SetBinContent(16,6.011721);
   hCCpi0inFV_stack_10->SetBinContent(17,5.968416);
   hCCpi0inFV_stack_10->SetBinContent(18,5.466984);
   hCCpi0inFV_stack_10->SetBinContent(19,3.766095);
   hCCpi0inFV_stack_10->SetBinContent(20,2.105544);
   hCCpi0inFV_stack_10->SetBinContent(21,16.01198);
   hCCpi0inFV_stack_10->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(2,0.9207963);
   hCCpi0inFV_stack_10->SetBinError(3,1.819553);
   hCCpi0inFV_stack_10->SetBinError(4,2.704227);
   hCCpi0inFV_stack_10->SetBinError(5,2.871219);
   hCCpi0inFV_stack_10->SetBinError(6,3.474299);
   hCCpi0inFV_stack_10->SetBinError(7,3.296404);
   hCCpi0inFV_stack_10->SetBinError(8,3.054012);
   hCCpi0inFV_stack_10->SetBinError(9,3.141041);
   hCCpi0inFV_stack_10->SetBinError(10,2.404406);
   hCCpi0inFV_stack_10->SetBinError(11,2.513823);
   hCCpi0inFV_stack_10->SetBinError(12,2.220223);
   hCCpi0inFV_stack_10->SetBinError(13,2.002063);
   hCCpi0inFV_stack_10->SetBinError(14,1.668663);
   hCCpi0inFV_stack_10->SetBinError(15,1.520699);
   hCCpi0inFV_stack_10->SetBinError(16,1.193027);
   hCCpi0inFV_stack_10->SetBinError(17,1.236371);
   hCCpi0inFV_stack_10->SetBinError(18,1.210046);
   hCCpi0inFV_stack_10->SetBinError(19,0.9410676);
   hCCpi0inFV_stack_10->SetBinError(20,0.6797106);
   hCCpi0inFV_stack_10->SetBinError(21,2.029434);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(1,0.3900497);
   hNCinFV_stack_11->SetBinContent(2,1.65717);
   hNCinFV_stack_11->SetBinContent(3,7.048421);
   hNCinFV_stack_11->SetBinContent(4,16.54759);
   hNCinFV_stack_11->SetBinContent(5,19.98015);
   hNCinFV_stack_11->SetBinContent(6,24.93512);
   hNCinFV_stack_11->SetBinContent(7,18.67411);
   hNCinFV_stack_11->SetBinContent(8,21.72345);
   hNCinFV_stack_11->SetBinContent(9,15.45131);
   hNCinFV_stack_11->SetBinContent(10,9.839367);
   hNCinFV_stack_11->SetBinContent(11,9.006866);
   hNCinFV_stack_11->SetBinContent(12,7.590566);
   hNCinFV_stack_11->SetBinContent(13,5.974203);
   hNCinFV_stack_11->SetBinContent(14,8.105696);
   hNCinFV_stack_11->SetBinContent(15,5.859032);
   hNCinFV_stack_11->SetBinContent(16,4.607223);
   hNCinFV_stack_11->SetBinContent(17,2.167731);
   hNCinFV_stack_11->SetBinContent(18,3.75705);
   hNCinFV_stack_11->SetBinContent(19,1.764087);
   hNCinFV_stack_11->SetBinContent(20,1.759847);
   hNCinFV_stack_11->SetBinContent(21,10.55779);
   hNCinFV_stack_11->SetBinError(1,0.2758068);
   hNCinFV_stack_11->SetBinError(2,0.6498287);
   hNCinFV_stack_11->SetBinError(3,1.358941);
   hNCinFV_stack_11->SetBinError(4,2.026479);
   hNCinFV_stack_11->SetBinError(5,2.170421);
   hNCinFV_stack_11->SetBinError(6,2.494013);
   hNCinFV_stack_11->SetBinError(7,2.177735);
   hNCinFV_stack_11->SetBinError(8,2.510834);
   hNCinFV_stack_11->SetBinError(9,2.238427);
   hNCinFV_stack_11->SetBinError(10,1.599535);
   hNCinFV_stack_11->SetBinError(11,1.56913);
   hNCinFV_stack_11->SetBinError(12,1.473684);
   hNCinFV_stack_11->SetBinError(13,1.357386);
   hNCinFV_stack_11->SetBinError(14,1.803751);
   hNCinFV_stack_11->SetBinError(15,1.27872);
   hNCinFV_stack_11->SetBinError(16,1.012784);
   hNCinFV_stack_11->SetBinError(17,0.7578585);
   hNCinFV_stack_11->SetBinError(18,1.371999);
   hNCinFV_stack_11->SetBinError(19,0.7078247);
   hNCinFV_stack_11->SetBinError(20,0.7707614);
   hNCinFV_stack_11->SetBinError(21,1.902247);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(2,3.728274);
   hnumuCCinFV_stack_12->SetBinContent(3,6.130583);
   hnumuCCinFV_stack_12->SetBinContent(4,16.391);
   hnumuCCinFV_stack_12->SetBinContent(5,21.12649);
   hnumuCCinFV_stack_12->SetBinContent(6,19.71665);
   hnumuCCinFV_stack_12->SetBinContent(7,17.77594);
   hnumuCCinFV_stack_12->SetBinContent(8,16.14789);
   hnumuCCinFV_stack_12->SetBinContent(9,12.00144);
   hnumuCCinFV_stack_12->SetBinContent(10,8.535109);
   hnumuCCinFV_stack_12->SetBinContent(11,9.129034);
   hnumuCCinFV_stack_12->SetBinContent(12,8.235156);
   hnumuCCinFV_stack_12->SetBinContent(13,4.941168);
   hnumuCCinFV_stack_12->SetBinContent(14,4.679414);
   hnumuCCinFV_stack_12->SetBinContent(15,3.951585);
   hnumuCCinFV_stack_12->SetBinContent(16,3.064326);
   hnumuCCinFV_stack_12->SetBinContent(17,1.712114);
   hnumuCCinFV_stack_12->SetBinContent(18,1.323754);
   hnumuCCinFV_stack_12->SetBinContent(19,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(20,2.249007);
   hnumuCCinFV_stack_12->SetBinContent(21,6.909462);
   hnumuCCinFV_stack_12->SetBinError(2,1.252069);
   hnumuCCinFV_stack_12->SetBinError(3,1.570529);
   hnumuCCinFV_stack_12->SetBinError(4,2.640942);
   hnumuCCinFV_stack_12->SetBinError(5,3.324955);
   hnumuCCinFV_stack_12->SetBinError(6,2.425527);
   hnumuCCinFV_stack_12->SetBinError(7,2.093833);
   hnumuCCinFV_stack_12->SetBinError(8,2.132955);
   hnumuCCinFV_stack_12->SetBinError(9,1.834507);
   hnumuCCinFV_stack_12->SetBinError(10,1.639681);
   hnumuCCinFV_stack_12->SetBinError(11,1.63181);
   hnumuCCinFV_stack_12->SetBinError(12,1.506195);
   hnumuCCinFV_stack_12->SetBinError(13,1.068871);
   hnumuCCinFV_stack_12->SetBinError(14,1.082336);
   hnumuCCinFV_stack_12->SetBinError(15,1.057495);
   hnumuCCinFV_stack_12->SetBinError(16,0.840194);
   hnumuCCinFV_stack_12->SetBinError(17,0.6201715);
   hnumuCCinFV_stack_12->SetBinError(18,0.5560625);
   hnumuCCinFV_stack_12->SetBinError(19,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(20,0.7341869);
   hnumuCCinFV_stack_12->SetBinError(21,1.392265);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,1.210092);
   hnueCCinFV_stack_13->SetBinContent(4,1.862039);
   hnueCCinFV_stack_13->SetBinContent(5,1.905048);
   hnueCCinFV_stack_13->SetBinContent(6,2.85108);
   hnueCCinFV_stack_13->SetBinContent(7,2.315365);
   hnueCCinFV_stack_13->SetBinContent(8,1.182881);
   hnueCCinFV_stack_13->SetBinContent(9,0.5335968);
   hnueCCinFV_stack_13->SetBinContent(10,2.079783);
   hnueCCinFV_stack_13->SetBinContent(11,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.003996095);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967481);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(17,0.5850745);
   hnueCCinFV_stack_13->SetBinContent(18,0.2016043);
   hnueCCinFV_stack_13->SetBinContent(19,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(21,10.09089);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.719076);
   hnueCCinFV_stack_13->SetBinError(4,1.318121);
   hnueCCinFV_stack_13->SetBinError(5,0.8945168);
   hnueCCinFV_stack_13->SetBinError(6,0.8984025);
   hnueCCinFV_stack_13->SetBinError(7,0.9075575);
   hnueCCinFV_stack_13->SetBinError(8,0.5438668);
   hnueCCinFV_stack_13->SetBinError(9,0.3901103);
   hnueCCinFV_stack_13->SetBinError(10,1.235543);
   hnueCCinFV_stack_13->SetBinError(11,0.4937343);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.003996095);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.4670934);
   hnueCCinFV_stack_13->SetBinError(17,0.337793);
   hnueCCinFV_stack_13->SetBinError(18,0.1967761);
   hnueCCinFV_stack_13->SetBinError(19,0.3963213);
   hnueCCinFV_stack_13->SetBinError(21,2.300702);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__17->SetBinContent(1,7.544202);
   hmcerror__17->SetBinContent(2,43.83821);
   hmcerror__17->SetBinContent(3,145.9554);
   hmcerror__17->SetBinContent(4,313.6681);
   hmcerror__17->SetBinContent(5,378.3521);
   hmcerror__17->SetBinContent(6,373.9702);
   hmcerror__17->SetBinContent(7,311.5931);
   hmcerror__17->SetBinContent(8,254.1534);
   hmcerror__17->SetBinContent(9,199.7967);
   hmcerror__17->SetBinContent(10,154.9941);
   hmcerror__17->SetBinContent(11,119.5058);
   hmcerror__17->SetBinContent(12,93.40466);
   hmcerror__17->SetBinContent(13,64.46655);
   hmcerror__17->SetBinContent(14,57.21071);
   hmcerror__17->SetBinContent(15,48.04345);
   hmcerror__17->SetBinContent(16,40.62923);
   hmcerror__17->SetBinContent(17,28.98754);
   hmcerror__17->SetBinContent(18,23.14018);
   hmcerror__17->SetBinContent(19,19.03288);
   hmcerror__17->SetBinContent(20,18.42242);
   hmcerror__17->SetBinContent(21,99.18655);
   hmcerror__17->SetBinError(1,5.462931);
   hmcerror__17->SetBinError(2,14.42944);
   hmcerror__17->SetBinError(3,55.10983);
   hmcerror__17->SetBinError(4,80.1082);
   hmcerror__17->SetBinError(5,92.60743);
   hmcerror__17->SetBinError(6,91.10113);
   hmcerror__17->SetBinError(7,83.98696);
   hmcerror__17->SetBinError(8,68.02326);
   hmcerror__17->SetBinError(9,55.62345);
   hmcerror__17->SetBinError(10,45.71066);
   hmcerror__17->SetBinError(11,39.34579);
   hmcerror__17->SetBinError(12,30.77748);
   hmcerror__17->SetBinError(13,28.87176);
   hmcerror__17->SetBinError(14,25.37667);
   hmcerror__17->SetBinError(15,18.41336);
   hmcerror__17->SetBinError(16,18.01383);
   hmcerror__17->SetBinError(17,11.70482);
   hmcerror__17->SetBinError(18,11.28051);
   hmcerror__17->SetBinError(19,10.41888);
   hmcerror__17->SetBinError(20,10.49281);
   hmcerror__17->SetBinError(21,37.83811);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[20] = {
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
   Double_t _fy3021[20] = {
   4,
   44,
   170,
   361,
   466,
   394,
   335,
   272,
   199,
   173,
   103,
   66,
   70,
   59,
   50,
   37,
   16,
   20,
   13,
   17};
   Double_t _felx3021[20] = {
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
   Double_t _fely3021[20] = {
   2.29683,
   6.7671,
   13.0384,
   19,
   21.58703,
   19.84943,
   18.30301,
   16.49242,
   14.10674,
   13.15295,
   10.14889,
   8.2509,
   8.4925,
   7.8097,
   7.2025,
   6.2203,
   4.1628,
   4.6266,
   3.77763,
   4.2835};
   Double_t _fehx3021[20] = {
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
   Double_t _fehy3021[20] = {
   1.98186,
   6.5623,
   13.0384,
   19,
   21.58703,
   19.84943,
   18.30301,
   16.49242,
   14.10674,
   13.15295,
   10.14889,
   8.0483,
   8.2902,
   7.6066,
   6.9985,
   6.0141,
   3.9454,
   4.4133,
   3.5552,
   4.0673};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,660);
   Graph_Graph3021->SetMinimum(1.532853);
   Graph_Graph3021->SetMaximum(536.1754);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.06#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2869.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 281.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  85.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1012.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  188.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 376.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 186.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 162.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 17.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[20] = {
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
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
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
   Double_t _fely3022[20] = {
   0.7241231,
   0.3291522,
   0.3775799,
   0.2553916,
   0.2447652,
   0.2436053,
   0.2695405,
   0.2676464,
   0.2784003,
   0.2949188,
   0.3292374,
   0.3295069,
   0.4478564,
   0.4435651,
   0.3832648,
   0.4433712,
   0.4037881,
   0.4874857,
   0.5474152,
   0.5695673};
   Double_t _fehx3022[20] = {
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
   Double_t _fehy3022[20] = {
   0.7241231,
   0.3291522,
   0.3775799,
   0.2553916,
   0.2447652,
   0.2436053,
   0.2695405,
   0.2676464,
   0.2784003,
   0.2949188,
   0.3292374,
   0.3295069,
   0.4478564,
   0.4435651,
   0.3832648,
   0.4433712,
   0.4037881,
   0.4874857,
   0.5474152,
   0.5695673};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,660);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3023[20] = {
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
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
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
   Double_t _fely3023[20] = {
   0.273107,
   0.1754634,
   0.1789903,
   0.1986167,
   0.2111939,
   0.218454,
   0.2275216,
   0.2311039,
   0.2438031,
   0.2445485,
   0.2727477,
   0.2844132,
   0.3541032,
   0.3381495,
   0.2933695,
   0.2840036,
   0.287315,
   0.2923853,
   0.2918124,
   0.3289438};
   Double_t _fehx3023[20] = {
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
   Double_t _fehy3023[20] = {
   0.273107,
   0.1754634,
   0.1789903,
   0.1986167,
   0.2111939,
   0.218454,
   0.2275216,
   0.2311039,
   0.2438031,
   0.2445485,
   0.2727477,
   0.2844132,
   0.3541032,
   0.3381495,
   0.2933695,
   0.2840036,
   0.287315,
   0.2923853,
   0.2918124,
   0.3289438};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,660);
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
   
   Double_t _fx3024[20] = {
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
   Double_t _fy3024[20] = {
   0.5302085,
   1.003691,
   1.164739,
   1.150898,
   1.231657,
   1.05356,
   1.07512,
   1.07022,
   0.9960126,
   1.116172,
   0.8618826,
   0.7066029,
   1.085834,
   1.031275,
   1.040725,
   0.9106743,
   0.5519613,
   0.8642973,
   0.6830287,
   0.9227884};
   Double_t _felx3024[20] = {
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
   Double_t _fely3024[20] = {
   0.3044497,
   0.1543653,
   0.08933143,
   0.06057359,
   0.05705541,
   0.05307758,
   0.05874008,
   0.0648916,
   0.07060546,
   0.08486095,
   0.08492382,
   0.088335,
   0.131735,
   0.1365077,
   0.1499164,
   0.1530991,
   0.1436065,
   0.1999379,
   0.1984792,
   0.2325155};
   Double_t _fehx3024[20] = {
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
   Double_t _fehy3024[20] = {
   0.2626997,
   0.1496936,
   0.08933143,
   0.06057359,
   0.05705541,
   0.05307758,
   0.05874008,
   0.0648916,
   0.07060546,
   0.08486095,
   0.08492382,
   0.08616594,
   0.1285969,
   0.1329576,
   0.1456702,
   0.148024,
   0.1361067,
   0.1907202,
   0.1867926,
   0.2207798};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,660);
   Graph_Graph3024->SetMinimum(0.1194634);
   Graph_Graph3024->SetMaximum(1.395008);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
