#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 15:03:36 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-276.9231,-12.14277,2030.769,1342.735);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__7->SetBinContent(0,0.7336084);
   hmc__7->SetBinContent(1,8.03246);
   hmc__7->SetBinContent(2,63.0553);
   hmc__7->SetBinContent(3,219.0568);
   hmc__7->SetBinContent(4,406.1784);
   hmc__7->SetBinContent(5,562.9659);
   hmc__7->SetBinContent(6,607.1384);
   hmc__7->SetBinContent(7,550.4825);
   hmc__7->SetBinContent(8,480.7443);
   hmc__7->SetBinContent(9,379.0486);
   hmc__7->SetBinContent(10,327.2925);
   hmc__7->SetBinContent(11,269.216);
   hmc__7->SetBinContent(12,204.5702);
   hmc__7->SetBinContent(13,156.8596);
   hmc__7->SetBinContent(14,122.9995);
   hmc__7->SetBinContent(15,98.93513);
   hmc__7->SetBinContent(16,68.2066);
   hmc__7->SetBinContent(17,51.24189);
   hmc__7->SetBinContent(18,46.04424);
   hmc__7->SetBinContent(19,35.10803);
   hmc__7->SetBinContent(20,22.81512);
   hmc__7->SetBinContent(21,130.2993);
   hmc__7->SetBinError(0,0.4394482);
   hmc__7->SetBinError(1,8.697197);
   hmc__7->SetBinError(2,35.86785);
   hmc__7->SetBinError(3,65.03919);
   hmc__7->SetBinError(4,128.6613);
   hmc__7->SetBinError(5,156.63);
   hmc__7->SetBinError(6,172.6001);
   hmc__7->SetBinError(7,151.1757);
   hmc__7->SetBinError(8,133.374);
   hmc__7->SetBinError(9,125.0727);
   hmc__7->SetBinError(10,108.0426);
   hmc__7->SetBinError(11,81.6929);
   hmc__7->SetBinError(12,68.05884);
   hmc__7->SetBinError(13,69.1774);
   hmc__7->SetBinError(14,44.24278);
   hmc__7->SetBinError(15,42.24316);
   hmc__7->SetBinError(16,36.0196);
   hmc__7->SetBinError(17,26.15224);
   hmc__7->SetBinError(18,24.6899);
   hmc__7->SetBinError(19,20.19485);
   hmc__7->SetBinError(20,15.417);
   hmc__7->SetBinError(21,49.77649);
   hmc__7->SetMinimum(-12.14277);
   hmc__7->SetMaximum(1274.991);
   hmc__7->SetEntries(4762.881);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,1800);
   hs3_stack_3->SetMinimum(-9.474605e-09);
   hs3_stack_3->SetMaximum(637.4954);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,0.2337684);
   hbadmatch_stack_1->SetBinContent(3,0.611176);
   hbadmatch_stack_1->SetBinContent(4,1.106487);
   hbadmatch_stack_1->SetBinContent(5,1.03052);
   hbadmatch_stack_1->SetBinContent(6,1.693888);
   hbadmatch_stack_1->SetBinContent(7,2.266856);
   hbadmatch_stack_1->SetBinContent(8,0.9641857);
   hbadmatch_stack_1->SetBinContent(9,0.7319179);
   hbadmatch_stack_1->SetBinContent(10,1.934919);
   hbadmatch_stack_1->SetBinContent(11,2.433208);
   hbadmatch_stack_1->SetBinContent(12,0.9593105);
   hbadmatch_stack_1->SetBinContent(13,2.413459);
   hbadmatch_stack_1->SetBinContent(14,1.526508);
   hbadmatch_stack_1->SetBinContent(15,1.268811);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(21,0.3934307);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.2337684);
   hbadmatch_stack_1->SetBinError(3,0.4087974);
   hbadmatch_stack_1->SetBinError(4,0.568129);
   hbadmatch_stack_1->SetBinError(5,0.5445994);
   hbadmatch_stack_1->SetBinError(6,0.6616014);
   hbadmatch_stack_1->SetBinError(7,0.7392141);
   hbadmatch_stack_1->SetBinError(8,0.4417371);
   hbadmatch_stack_1->SetBinError(9,0.438694);
   hbadmatch_stack_1->SetBinError(10,0.7218887);
   hbadmatch_stack_1->SetBinError(11,0.8266399);
   hbadmatch_stack_1->SetBinError(12,0.4940204);
   hbadmatch_stack_1->SetBinError(13,1.025171);
   hbadmatch_stack_1->SetBinError(14,0.6563349);
   hbadmatch_stack_1->SetBinError(15,0.5889569);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(21,0.2781975);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,2.912395);
   hext_stack_2->SetBinContent(3,8.698513);
   hext_stack_2->SetBinContent(4,5.725457);
   hext_stack_2->SetBinContent(5,12.09253);
   hext_stack_2->SetBinContent(6,10.09266);
   hext_stack_2->SetBinContent(7,14.22486);
   hext_stack_2->SetBinContent(8,12.54385);
   hext_stack_2->SetBinContent(9,5.020411);
   hext_stack_2->SetBinContent(10,6.082985);
   hext_stack_2->SetBinContent(11,9.582322);
   hext_stack_2->SetBinContent(12,4.054399);
   hext_stack_2->SetBinContent(13,4.98728);
   hext_stack_2->SetBinContent(14,5.344809);
   hext_stack_2->SetBinContent(15,1.614806);
   hext_stack_2->SetBinContent(16,0.6487947);
   hext_stack_2->SetBinContent(17,4.028449);
   hext_stack_2->SetBinContent(18,1.461993);
   hext_stack_2->SetBinContent(19,0.6416141);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,10.93616);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,1.07159);
   hext_stack_2->SetBinError(3,2.187977);
   hext_stack_2->SetBinError(4,1.72489);
   hext_stack_2->SetBinError(5,2.522332);
   hext_stack_2->SetBinError(6,2.20587);
   hext_stack_2->SetBinError(7,2.551497);
   hext_stack_2->SetBinError(8,2.4066);
   hext_stack_2->SetBinError(9,1.495396);
   hext_stack_2->SetBinError(10,1.552674);
   hext_stack_2->SetBinError(11,2.289991);
   hext_stack_2->SetBinError(12,1.311223);
   hext_stack_2->SetBinError(13,1.704667);
   hext_stack_2->SetBinError(14,1.530177);
   hext_stack_2->SetBinError(15,0.8528597);
   hext_stack_2->SetBinError(16,0.4587671);
   hext_stack_2->SetBinError(17,1.479117);
   hext_stack_2->SetBinError(18,0.7356036);
   hext_stack_2->SetBinError(19,0.6416141);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,2.488687);
   hext_stack_2->SetEntries(271);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.7551225);
   hdirt_stack_3->SetBinContent(5,1.252237);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,0.4045523);
   hdirt_stack_3->SetBinContent(8,0.853712);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.3204826);
   hdirt_stack_3->SetBinContent(11,1.167841e-06);
   hdirt_stack_3->SetBinContent(12,0.6047785);
   hdirt_stack_3->SetBinContent(13,0.3820091);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(4,0.3834428);
   hdirt_stack_3->SetBinError(5,0.5862043);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.3001263);
   hdirt_stack_3->SetBinError(8,0.4538079);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,0.2267565);
   hdirt_stack_3->SetBinError(11,1.167841e-06);
   hdirt_stack_3->SetBinError(12,0.4306292);
   hdirt_stack_3->SetBinError(13,0.3820091);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(27);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(2,1.156506);
   houtFV_stack_4->SetBinContent(3,3.692386);
   houtFV_stack_4->SetBinContent(4,8.552102);
   houtFV_stack_4->SetBinContent(5,5.87414);
   houtFV_stack_4->SetBinContent(6,5.560875);
   houtFV_stack_4->SetBinContent(7,8.15691);
   houtFV_stack_4->SetBinContent(8,5.303149);
   houtFV_stack_4->SetBinContent(9,4.107625);
   houtFV_stack_4->SetBinContent(10,3.796651);
   houtFV_stack_4->SetBinContent(11,1.45743);
   houtFV_stack_4->SetBinContent(12,3.831825);
   houtFV_stack_4->SetBinContent(13,0.8225994);
   houtFV_stack_4->SetBinContent(14,0.8575791);
   houtFV_stack_4->SetBinContent(15,1.145107);
   houtFV_stack_4->SetBinContent(16,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.4519673);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(21,0.7319179);
   houtFV_stack_4->SetBinError(2,0.6105144);
   houtFV_stack_4->SetBinError(3,0.9501153);
   houtFV_stack_4->SetBinError(4,2.147871);
   houtFV_stack_4->SetBinError(5,1.183607);
   houtFV_stack_4->SetBinError(6,1.145885);
   houtFV_stack_4->SetBinError(7,1.460184);
   houtFV_stack_4->SetBinError(8,1.211974);
   houtFV_stack_4->SetBinError(9,1.088213);
   houtFV_stack_4->SetBinError(10,1.176075);
   houtFV_stack_4->SetBinError(11,0.6165421);
   houtFV_stack_4->SetBinError(12,1.239523);
   houtFV_stack_4->SetBinError(13,0.4475743);
   houtFV_stack_4->SetBinError(14,0.4331411);
   houtFV_stack_4->SetBinError(15,0.5331386);
   houtFV_stack_4->SetBinError(16,0.3397478);
   houtFV_stack_4->SetBinError(18,0.3222584);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(21,0.438694);
   houtFV_stack_4->SetEntries(234);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1771563);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.5021628);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.768744);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.536006);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.17684);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.050064);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.994157);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.663424);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.774776);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.08457);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.680194);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.73735);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.731207);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.588674);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.684752);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.9106729);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3205652);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2174681);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.08743493);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1780678);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1841702);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1380257);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4789213);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6148737);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4444493);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6060493);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8021417);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5232496);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4594045);
   hNCpi0inFVres_stack_7->SetBinError(10,1.020478);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8259789);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8414036);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4715997);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8449572);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7250265);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5862728);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1647928);
   hNCpi0inFVres_stack_7->SetBinError(18,0.08404321);
   hNCpi0inFVres_stack_7->SetBinError(19,0.06574814);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1142029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.0703683);
   hNCpi0inFVres_stack_7->SetEntries(949);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4409424);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.22605);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.660698);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.866357);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.488046);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.9952);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.481839);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.666216);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.771378);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.796191);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.657112);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.053417);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.509424);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.419388);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.660875);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9554887);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.376534);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5998541);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.3783757);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.107491);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.169494);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5011379);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4718448);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4813747);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4600586);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5083566);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4854267);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9163534);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5850928);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7407732);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6410174);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.717245);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9533424);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.757322);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4906428);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3070891);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6479888);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2983287);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1380058);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4454617);
   hNCpi0inFVdis_stack_8->SetEntries(773);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(2,31.44243);
   hCCpi0inFV_stack_10->SetBinContent(3,142.2985);
   hCCpi0inFV_stack_10->SetBinContent(4,300.6673);
   hCCpi0inFV_stack_10->SetBinContent(5,437.7554);
   hCCpi0inFV_stack_10->SetBinContent(6,475.0085);
   hCCpi0inFV_stack_10->SetBinContent(7,417.6358);
   hCCpi0inFV_stack_10->SetBinContent(8,369.5017);
   hCCpi0inFV_stack_10->SetBinContent(9,297.0376);
   hCCpi0inFV_stack_10->SetBinContent(10,244.4168);
   hCCpi0inFV_stack_10->SetBinContent(11,203.3786);
   hCCpi0inFV_stack_10->SetBinContent(12,150.3622);
   hCCpi0inFV_stack_10->SetBinContent(13,114.4147);
   hCCpi0inFV_stack_10->SetBinContent(14,84.73434);
   hCCpi0inFV_stack_10->SetBinContent(15,72.78413);
   hCCpi0inFV_stack_10->SetBinContent(16,50.02681);
   hCCpi0inFV_stack_10->SetBinContent(17,33.39006);
   hCCpi0inFV_stack_10->SetBinContent(18,30.88079);
   hCCpi0inFV_stack_10->SetBinContent(19,24.2273);
   hCCpi0inFV_stack_10->SetBinContent(20,17.30174);
   hCCpi0inFV_stack_10->SetBinContent(21,89.01518);
   hCCpi0inFV_stack_10->SetBinError(1,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(2,2.829887);
   hCCpi0inFV_stack_10->SetBinError(3,5.967951);
   hCCpi0inFV_stack_10->SetBinError(4,8.7658);
   hCCpi0inFV_stack_10->SetBinError(5,10.55209);
   hCCpi0inFV_stack_10->SetBinError(6,10.92);
   hCCpi0inFV_stack_10->SetBinError(7,10.27155);
   hCCpi0inFV_stack_10->SetBinError(8,9.671398);
   hCCpi0inFV_stack_10->SetBinError(9,8.743305);
   hCCpi0inFV_stack_10->SetBinError(10,7.814776);
   hCCpi0inFV_stack_10->SetBinError(11,7.193944);
   hCCpi0inFV_stack_10->SetBinError(12,6.16495);
   hCCpi0inFV_stack_10->SetBinError(13,5.374623);
   hCCpi0inFV_stack_10->SetBinError(14,4.649261);
   hCCpi0inFV_stack_10->SetBinError(15,4.339514);
   hCCpi0inFV_stack_10->SetBinError(16,3.551643);
   hCCpi0inFV_stack_10->SetBinError(17,2.902995);
   hCCpi0inFV_stack_10->SetBinError(18,2.807666);
   hCCpi0inFV_stack_10->SetBinError(19,2.433918);
   hCCpi0inFV_stack_10->SetBinError(20,2.129801);
   hCCpi0inFV_stack_10->SetBinError(21,4.775611);
   hCCpi0inFV_stack_10->SetEntries(15285);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,0.8770706);
   hNCinFV_stack_11->SetBinContent(4,1.660551);
   hNCinFV_stack_11->SetBinContent(5,1.371936);
   hNCinFV_stack_11->SetBinContent(6,2.734337);
   hNCinFV_stack_11->SetBinContent(7,2.784209);
   hNCinFV_stack_11->SetBinContent(8,3.664661);
   hNCinFV_stack_11->SetBinContent(9,2.110616);
   hNCinFV_stack_11->SetBinContent(10,2.00411);
   hNCinFV_stack_11->SetBinContent(11,0.5901461);
   hNCinFV_stack_11->SetBinContent(12,1.318683);
   hNCinFV_stack_11->SetBinContent(13,0.7336084);
   hNCinFV_stack_11->SetBinContent(14,1.465526);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(18,0.8753801);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.3934307);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.5197486);
   hNCinFV_stack_11->SetBinError(4,0.650847);
   hNCinFV_stack_11->SetBinError(5,0.5185478);
   hNCinFV_stack_11->SetBinError(6,0.8558255);
   hNCinFV_stack_11->SetBinError(7,0.8323376);
   hNCinFV_stack_11->SetBinError(8,0.9819618);
   hNCinFV_stack_11->SetBinError(9,0.6811705);
   hNCinFV_stack_11->SetBinError(10,0.7352871);
   hNCinFV_stack_11->SetBinError(11,0.340721);
   hNCinFV_stack_11->SetBinError(12,0.5542732);
   hNCinFV_stack_11->SetBinError(13,0.4394482);
   hNCinFV_stack_11->SetBinError(14,0.6209405);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(18,0.5191111);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.2781975);
   hNCinFV_stack_11->SetEntries(106);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(1,6.070473);
   hnumuCCinFV_stack_12->SetBinContent(2,25.80752);
   hnumuCCinFV_stack_12->SetBinContent(3,57.55142);
   hnumuCCinFV_stack_12->SetBinContent(4,81.17459);
   hnumuCCinFV_stack_12->SetBinContent(5,97.29555);
   hnumuCCinFV_stack_12->SetBinContent(6,103.7413);
   hnumuCCinFV_stack_12->SetBinContent(7,96.4332);
   hnumuCCinFV_stack_12->SetBinContent(8,80.78305);
   hnumuCCinFV_stack_12->SetBinContent(9,62.26464);
   hnumuCCinFV_stack_12->SetBinContent(10,60.24635);
   hnumuCCinFV_stack_12->SetBinContent(11,43.16608);
   hnumuCCinFV_stack_12->SetBinContent(12,37.04289);
   hnumuCCinFV_stack_12->SetBinContent(13,28.05254);
   hnumuCCinFV_stack_12->SetBinContent(14,22.2923);
   hnumuCCinFV_stack_12->SetBinContent(15,17.0878);
   hnumuCCinFV_stack_12->SetBinContent(16,13.63739);
   hnumuCCinFV_stack_12->SetBinContent(17,11.95718);
   hnumuCCinFV_stack_12->SetBinContent(18,9.707995);
   hnumuCCinFV_stack_12->SetBinContent(19,8.183989);
   hnumuCCinFV_stack_12->SetBinContent(20,3.230893);
   hnumuCCinFV_stack_12->SetBinContent(21,24.73009);
   hnumuCCinFV_stack_12->SetBinError(0,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(1,2.107836);
   hnumuCCinFV_stack_12->SetBinError(2,2.789002);
   hnumuCCinFV_stack_12->SetBinError(3,4.404717);
   hnumuCCinFV_stack_12->SetBinError(4,5.475635);
   hnumuCCinFV_stack_12->SetBinError(5,5.686939);
   hnumuCCinFV_stack_12->SetBinError(6,5.632083);
   hnumuCCinFV_stack_12->SetBinError(7,5.247813);
   hnumuCCinFV_stack_12->SetBinError(8,6.114171);
   hnumuCCinFV_stack_12->SetBinError(9,3.953147);
   hnumuCCinFV_stack_12->SetBinError(10,4.61403);
   hnumuCCinFV_stack_12->SetBinError(11,3.420042);
   hnumuCCinFV_stack_12->SetBinError(12,3.06144);
   hnumuCCinFV_stack_12->SetBinError(13,2.83552);
   hnumuCCinFV_stack_12->SetBinError(14,2.666804);
   hnumuCCinFV_stack_12->SetBinError(15,2.083405);
   hnumuCCinFV_stack_12->SetBinError(16,1.914501);
   hnumuCCinFV_stack_12->SetBinError(17,1.751793);
   hnumuCCinFV_stack_12->SetBinError(18,1.570149);
   hnumuCCinFV_stack_12->SetBinError(19,1.405442);
   hnumuCCinFV_stack_12->SetBinError(20,0.855484);
   hnumuCCinFV_stack_12->SetBinError(21,2.544966);
   hnumuCCinFV_stack_12->SetEntries(3654);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(8,0.9720587);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.6167127);
   hnueCCinFV_stack_13->SetBinContent(11,1.072095);
   hnueCCinFV_stack_13->SetBinContent(12,1.001686);
   hnueCCinFV_stack_13->SetBinContent(13,1.268811);
   hnueCCinFV_stack_13->SetBinContent(14,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(15,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,1.807394);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.3387718);
   hnueCCinFV_stack_13->SetBinError(8,0.4999732);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.4646023);
   hnueCCinFV_stack_13->SetBinError(11,0.5551335);
   hnueCCinFV_stack_13->SetBinError(12,0.5147626);
   hnueCCinFV_stack_13->SetBinError(13,0.5889569);
   hnueCCinFV_stack_13->SetBinError(14,0.4810838);
   hnueCCinFV_stack_13->SetBinError(15,0.340721);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.7084844);
   hnueCCinFV_stack_13->SetEntries(47);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__8->SetBinContent(0,0.7336084);
   hmcerror__8->SetBinContent(1,8.03246);
   hmcerror__8->SetBinContent(2,63.0553);
   hmcerror__8->SetBinContent(3,219.0568);
   hmcerror__8->SetBinContent(4,406.1784);
   hmcerror__8->SetBinContent(5,562.9659);
   hmcerror__8->SetBinContent(6,607.1384);
   hmcerror__8->SetBinContent(7,550.4825);
   hmcerror__8->SetBinContent(8,480.7443);
   hmcerror__8->SetBinContent(9,379.0486);
   hmcerror__8->SetBinContent(10,327.2925);
   hmcerror__8->SetBinContent(11,269.216);
   hmcerror__8->SetBinContent(12,204.5702);
   hmcerror__8->SetBinContent(13,156.8596);
   hmcerror__8->SetBinContent(14,122.9995);
   hmcerror__8->SetBinContent(15,98.93513);
   hmcerror__8->SetBinContent(16,68.2066);
   hmcerror__8->SetBinContent(17,51.24189);
   hmcerror__8->SetBinContent(18,46.04424);
   hmcerror__8->SetBinContent(19,35.10803);
   hmcerror__8->SetBinContent(20,22.81512);
   hmcerror__8->SetBinContent(21,130.2993);
   hmcerror__8->SetBinError(0,0.4394482);
   hmcerror__8->SetBinError(1,8.697197);
   hmcerror__8->SetBinError(2,35.86785);
   hmcerror__8->SetBinError(3,65.03919);
   hmcerror__8->SetBinError(4,128.6613);
   hmcerror__8->SetBinError(5,156.63);
   hmcerror__8->SetBinError(6,172.6001);
   hmcerror__8->SetBinError(7,151.1757);
   hmcerror__8->SetBinError(8,133.374);
   hmcerror__8->SetBinError(9,125.0727);
   hmcerror__8->SetBinError(10,108.0426);
   hmcerror__8->SetBinError(11,81.6929);
   hmcerror__8->SetBinError(12,68.05884);
   hmcerror__8->SetBinError(13,69.1774);
   hmcerror__8->SetBinError(14,44.24278);
   hmcerror__8->SetBinError(15,42.24316);
   hmcerror__8->SetBinError(16,36.0196);
   hmcerror__8->SetBinError(17,26.15224);
   hmcerror__8->SetBinError(18,24.6899);
   hmcerror__8->SetBinError(19,20.19485);
   hmcerror__8->SetBinError(20,15.417);
   hmcerror__8->SetBinError(21,49.77649);
   hmcerror__8->SetEntries(4762.881);

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
   
   Double_t _fx3009[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3009[20] = {
   7,
   109,
   304,
   472,
   585,
   533,
   497,
   407,
   337,
   271,
   200,
   163,
   135,
   99,
   76,
   54,
   44,
   31,
   24,
   18};
   Double_t _felx3009[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3009[20] = {
   2.85954,
   10.44031,
   17.4356,
   21.72556,
   24.18677,
   23.08679,
   22.2935,
   20.17424,
   18.35756,
   16.46208,
   14.14214,
   12.76715,
   11.61895,
   10.0712,
   8.8425,
   7.4785,
   6.7671,
   5.7094,
   5.0476,
   4.4008};
   Double_t _fehx3009[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3009[20] = {
   2.61053,
   10.44031,
   17.4356,
   21.72556,
   24.18677,
   23.08679,
   22.2935,
   20.17424,
   18.35756,
   16.46208,
   14.14214,
   12.76715,
   11.61895,
   9.87,
   8.6406,
   7.275,
   6.5623,
   5.5017,
   4.837,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1980);
   Graph_Graph3009->SetMinimum(3.726414);
   Graph_Graph3009->SetMaximum(669.6914);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4366.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 111.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 55.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  43.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3498.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 865.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3010[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3010[20] = {
   1.082756,
   0.5688316,
   0.2969056,
   0.3167606,
   0.278223,
   0.2842846,
   0.274624,
   0.2774324,
   0.3299647,
   0.3301103,
   0.3034475,
   0.3326918,
   0.4410146,
   0.3596988,
   0.4269784,
   0.5280955,
   0.5103683,
   0.5362212,
   0.5752203,
   0.6757361};
   Double_t _fehx3010[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3010[20] = {
   1.082756,
   0.5688316,
   0.2969056,
   0.3167606,
   0.278223,
   0.2842846,
   0.274624,
   0.2774324,
   0.3299647,
   0.3301103,
   0.3034475,
   0.3326918,
   0.4410146,
   0.3596988,
   0.4269784,
   0.5280955,
   0.5103683,
   0.5362212,
   0.5752203,
   0.6757361};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1980);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3011[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3011[20] = {
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
   Double_t _felx3011[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3011[20] = {
   0.4009221,
   0.2080011,
   0.2142349,
   0.2406983,
   0.2407314,
   0.258915,
   0.2490301,
   0.2470786,
   0.2491281,
   0.2436118,
   0.2438261,
   0.2442811,
   0.2427013,
   0.2256735,
   0.248444,
   0.2512741,
   0.2119752,
   0.2530553,
   0.206025,
   0.2806233};
   Double_t _fehx3011[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3011[20] = {
   0.4009221,
   0.2080011,
   0.2142349,
   0.2406983,
   0.2407314,
   0.258915,
   0.2490301,
   0.2470786,
   0.2491281,
   0.2436118,
   0.2438261,
   0.2442811,
   0.2427013,
   0.2256735,
   0.248444,
   0.2512741,
   0.2119752,
   0.2530553,
   0.206025,
   0.2806233};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1980);
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
   
   Double_t _fx3012[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3012[20] = {
   0.871464,
   1.728641,
   1.387768,
   1.162051,
   1.039139,
   0.8778888,
   0.9028444,
   0.8466039,
   0.8890679,
   0.8280055,
   0.742898,
   0.7967924,
   0.860642,
   0.8048812,
   0.7681801,
   0.7917122,
   0.8586725,
   0.6732656,
   0.6836042,
   0.7889503};
   Double_t _felx3012[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3012[20] = {
   0.355998,
   0.1655738,
   0.07959394,
   0.05348773,
   0.04296312,
   0.03802558,
   0.0404981,
   0.0419646,
   0.04843062,
   0.05029775,
   0.05253082,
   0.06240959,
   0.07407227,
   0.08187999,
   0.08937674,
   0.1096448,
   0.1320619,
   0.1239982,
   0.1437734,
   0.1928896};
   Double_t _fehx3012[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3012[20] = {
   0.3249976,
   0.1655738,
   0.07959394,
   0.05348773,
   0.04296312,
   0.03802558,
   0.0404981,
   0.0419646,
   0.04843062,
   0.05029775,
   0.05253082,
   0.06240959,
   0.07407227,
   0.08024422,
   0.08733601,
   0.1066612,
   0.1280651,
   0.1194873,
   0.1377747,
   0.183466};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1980);
   Graph_Graph3012->SetMinimum(0.3775911);
   Graph_Graph3012->SetMaximum(2.03209);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
