#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 20:33:11 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-15.92093,1.25641,1760.519);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__7->SetBinContent(1,93.36933);
   hmc__7->SetBinContent(2,89.47468);
   hmc__7->SetBinContent(3,93.89637);
   hmc__7->SetBinContent(4,99.01975);
   hmc__7->SetBinContent(5,111.1237);
   hmc__7->SetBinContent(6,121.9829);
   hmc__7->SetBinContent(7,129.6894);
   hmc__7->SetBinContent(8,135.8167);
   hmc__7->SetBinContent(9,156.0231);
   hmc__7->SetBinContent(10,166.2222);
   hmc__7->SetBinContent(11,182.2375);
   hmc__7->SetBinContent(12,195.1095);
   hmc__7->SetBinContent(13,203.0607);
   hmc__7->SetBinContent(14,234.2972);
   hmc__7->SetBinContent(15,282.147);
   hmc__7->SetBinContent(16,326.679);
   hmc__7->SetBinContent(17,372.0642);
   hmc__7->SetBinContent(18,428.0359);
   hmc__7->SetBinContent(19,594.7289);
   hmc__7->SetBinContent(20,796.0463);
   hmc__7->SetBinError(1,25.43374);
   hmc__7->SetBinError(2,24.36121);
   hmc__7->SetBinError(3,26.69266);
   hmc__7->SetBinError(4,26.11088);
   hmc__7->SetBinError(5,28.96057);
   hmc__7->SetBinError(6,29.64552);
   hmc__7->SetBinError(7,32.29106);
   hmc__7->SetBinError(8,34.59314);
   hmc__7->SetBinError(9,39.0201);
   hmc__7->SetBinError(10,41.8932);
   hmc__7->SetBinError(11,43.93495);
   hmc__7->SetBinError(12,47.0508);
   hmc__7->SetBinError(13,52.08628);
   hmc__7->SetBinError(14,60.08329);
   hmc__7->SetBinError(15,71.36479);
   hmc__7->SetBinError(16,81.35151);
   hmc__7->SetBinError(17,92.2518);
   hmc__7->SetBinError(18,96.46652);
   hmc__7->SetBinError(19,135.2567);
   hmc__7->SetBinError(20,161.1626);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-15.92093);
   hmc__7->SetMaximum(1671.697);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,-1,1);
   hs3_stack_3->SetMinimum(-9.311246e-09);
   hs3_stack_3->SetMaximum(835.8486);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(3,0.5367542);
   hbadmatch_stack_1->SetBinContent(5,0.2211568);
   hbadmatch_stack_1->SetBinContent(6,0.04984158);
   hbadmatch_stack_1->SetBinContent(7,1.297798);
   hbadmatch_stack_1->SetBinContent(8,0.7132982);
   hbadmatch_stack_1->SetBinContent(9,0.7588764);
   hbadmatch_stack_1->SetBinContent(10,0.7932131);
   hbadmatch_stack_1->SetBinContent(11,1.72875);
   hbadmatch_stack_1->SetBinContent(12,0.7319179);
   hbadmatch_stack_1->SetBinContent(13,0.9269427);
   hbadmatch_stack_1->SetBinContent(14,0.9380528);
   hbadmatch_stack_1->SetBinContent(15,1.125349);
   hbadmatch_stack_1->SetBinContent(16,1.465526);
   hbadmatch_stack_1->SetBinContent(17,1.721608);
   hbadmatch_stack_1->SetBinContent(18,1.39053);
   hbadmatch_stack_1->SetBinContent(19,3.061214);
   hbadmatch_stack_1->SetBinContent(20,2.694384);
   hbadmatch_stack_1->SetBinError(3,0.3218171);
   hbadmatch_stack_1->SetBinError(5,0.2211568);
   hbadmatch_stack_1->SetBinError(6,0.04984158);
   hbadmatch_stack_1->SetBinError(7,0.5992618);
   hbadmatch_stack_1->SetBinError(8,0.458005);
   hbadmatch_stack_1->SetBinError(9,0.5394715);
   hbadmatch_stack_1->SetBinError(10,0.4691671);
   hbadmatch_stack_1->SetBinError(11,0.6889501);
   hbadmatch_stack_1->SetBinError(12,0.438694);
   hbadmatch_stack_1->SetBinError(13,0.4800908);
   hbadmatch_stack_1->SetBinError(14,0.5615576);
   hbadmatch_stack_1->SetBinError(15,0.5194673);
   hbadmatch_stack_1->SetBinError(16,0.6209405);
   hbadmatch_stack_1->SetBinError(17,0.8879473);
   hbadmatch_stack_1->SetBinError(18,0.5258231);
   hbadmatch_stack_1->SetBinError(19,0.8896296);
   hbadmatch_stack_1->SetBinError(20,0.8499594);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,4.352847);
   hext_stack_2->SetBinContent(3,0.973192);
   hext_stack_2->SetBinContent(4,2.510206);
   hext_stack_2->SetBinContent(5,4.98728);
   hext_stack_2->SetBinContent(6,10.78335);
   hext_stack_2->SetBinContent(7,3.494987);
   hext_stack_2->SetBinContent(8,7.892495);
   hext_stack_2->SetBinContent(9,7.67625);
   hext_stack_2->SetBinContent(10,4.780987);
   hext_stack_2->SetBinContent(11,12.81193);
   hext_stack_2->SetBinContent(12,13.68579);
   hext_stack_2->SetBinContent(13,3.17059);
   hext_stack_2->SetBinContent(14,4.870369);
   hext_stack_2->SetBinContent(15,10.26425);
   hext_stack_2->SetBinContent(16,5.979242);
   hext_stack_2->SetBinContent(17,3.248382);
   hext_stack_2->SetBinContent(18,5.158864);
   hext_stack_2->SetBinContent(19,6.24298);
   hext_stack_2->SetBinContent(20,8.534109);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,1.514272);
   hext_stack_2->SetBinError(3,0.5618727);
   hext_stack_2->SetBinError(4,1.057404);
   hext_stack_2->SetBinError(5,1.704667);
   hext_stack_2->SetBinError(6,2.45098);
   hext_stack_2->SetBinError(7,1.169498);
   hext_stack_2->SetBinError(8,2.062861);
   hext_stack_2->SetBinError(9,1.934366);
   hext_stack_2->SetBinError(10,1.361888);
   hext_stack_2->SetBinError(11,2.588203);
   hext_stack_2->SetBinError(12,2.77365);
   hext_stack_2->SetBinError(13,1.123607);
   hext_stack_2->SetBinError(14,1.309056);
   hext_stack_2->SetBinError(15,2.187428);
   hext_stack_2->SetBinError(16,1.718811);
   hext_stack_2->SetBinError(17,1.089706);
   hext_stack_2->SetBinError(18,1.680734);
   hext_stack_2->SetBinError(19,1.547854);
   hext_stack_2->SetBinError(20,2.160339);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.4927738);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.311381);
   hdirt_stack_3->SetBinContent(8,0.4103287);
   hdirt_stack_3->SetBinContent(10,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.7801647);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.4853777);
   hdirt_stack_3->SetBinContent(17,0.4762587);
   hdirt_stack_3->SetBinContent(18,0.4046628);
   hdirt_stack_3->SetBinContent(20,0.9083427);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.3718435);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.311381);
   hdirt_stack_3->SetBinError(8,0.2953469);
   hdirt_stack_3->SetBinError(10,0.1380715);
   hdirt_stack_3->SetBinError(11,0.1380715);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4753739);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.3448585);
   hdirt_stack_3->SetBinError(17,0.3652866);
   hdirt_stack_3->SetBinError(18,0.3002244);
   hdirt_stack_3->SetBinError(20,0.4814684);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,1.203534);
   houtFV_stack_4->SetBinContent(2,0.5901461);
   houtFV_stack_4->SetBinContent(3,1.844413);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,1.389138);
   houtFV_stack_4->SetBinContent(6,0.9517723);
   houtFV_stack_4->SetBinContent(7,1.123658);
   houtFV_stack_4->SetBinContent(8,1.93935);
   houtFV_stack_4->SetBinContent(9,2.388369);
   houtFV_stack_4->SetBinContent(10,1.268811);
   houtFV_stack_4->SetBinContent(11,1.053189);
   houtFV_stack_4->SetBinContent(12,2.199135);
   houtFV_stack_4->SetBinContent(13,2.15106);
   houtFV_stack_4->SetBinContent(14,3.482933);
   houtFV_stack_4->SetBinContent(15,3.758542);
   houtFV_stack_4->SetBinContent(16,3.317113);
   houtFV_stack_4->SetBinContent(17,4.638575);
   houtFV_stack_4->SetBinContent(18,5.366472);
   houtFV_stack_4->SetBinContent(19,7.343962);
   houtFV_stack_4->SetBinContent(20,10.12861);
   houtFV_stack_4->SetBinError(1,0.4665064);
   houtFV_stack_4->SetBinError(2,0.340721);
   houtFV_stack_4->SetBinError(3,0.6342977);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.5253093);
   houtFV_stack_4->SetBinError(6,0.4968545);
   houtFV_stack_4->SetBinError(7,0.5188295);
   houtFV_stack_4->SetBinError(8,0.6603394);
   houtFV_stack_4->SetBinError(9,0.7508922);
   houtFV_stack_4->SetBinError(10,0.5889569);
   houtFV_stack_4->SetBinError(11,0.4753518);
   houtFV_stack_4->SetBinError(12,0.7607114);
   houtFV_stack_4->SetBinError(13,0.694736);
   houtFV_stack_4->SetBinError(14,1.007105);
   houtFV_stack_4->SetBinError(15,1.071522);
   houtFV_stack_4->SetBinError(16,1.370832);
   houtFV_stack_4->SetBinError(17,1.869547);
   houtFV_stack_4->SetBinError(18,1.164776);
   houtFV_stack_4->SetBinError(19,1.392276);
   houtFV_stack_4->SetBinError(20,1.654858);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.04071492);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03076306);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1389192);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.122637);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5278504);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.9855994);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.6913804);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.05969);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.7571561);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.4508791);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.8588278);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.410563);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.516008);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.004477);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.131286);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.0474);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.778826);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.114534);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.225504);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.248801);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.199805);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.38374);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.937263);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.541713);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1774764);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2892949);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1974103);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4642363);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2204238);
   hNCpi0inFVres_stack_7->SetBinError(6,0.1777801);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3561795);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5176142);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4669894);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4372045);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4761901);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2698063);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4866236);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4627816);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4056226);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9538515);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8696787);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9665862);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7851514);
   hNCpi0inFVres_stack_7->SetBinError(20,1.107963);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.004431);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.220223);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.7963215);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.437554);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5491331);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.7611437);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8586526);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.132565);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.9110496);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.4424847);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.602767);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8047595);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.456596);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.469542);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.796471);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.377292);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.114964);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.630033);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.926897);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.818);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4765136);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1379401);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2796681);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1523338);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2090539);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2916121);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2917651);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5237281);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2919239);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.147264);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4782159);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2516337);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5330998);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3867418);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6439535);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5612045);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7007487);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7947649);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.246205);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.251467);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,74.11083);
   hCCpi0inFV_stack_10->SetBinContent(2,71.3804);
   hCCpi0inFV_stack_10->SetBinContent(3,79.23329);
   hCCpi0inFV_stack_10->SetBinContent(4,83.55468);
   hCCpi0inFV_stack_10->SetBinContent(5,89.25562);
   hCCpi0inFV_stack_10->SetBinContent(6,87.00827);
   hCCpi0inFV_stack_10->SetBinContent(7,103.171);
   hCCpi0inFV_stack_10->SetBinContent(8,101.2692);
   hCCpi0inFV_stack_10->SetBinContent(9,117.1284);
   hCCpi0inFV_stack_10->SetBinContent(10,130.0347);
   hCCpi0inFV_stack_10->SetBinContent(11,127.9184);
   hCCpi0inFV_stack_10->SetBinContent(12,141.5909);
   hCCpi0inFV_stack_10->SetBinContent(13,156.3213);
   hCCpi0inFV_stack_10->SetBinContent(14,176.6867);
   hCCpi0inFV_stack_10->SetBinContent(15,212.0026);
   hCCpi0inFV_stack_10->SetBinContent(16,247.3365);
   hCCpi0inFV_stack_10->SetBinContent(17,278.7107);
   hCCpi0inFV_stack_10->SetBinContent(18,310.6028);
   hCCpi0inFV_stack_10->SetBinContent(19,440.1359);
   hCCpi0inFV_stack_10->SetBinContent(20,559.9528);
   hCCpi0inFV_stack_10->SetBinError(1,4.368296);
   hCCpi0inFV_stack_10->SetBinError(2,4.214323);
   hCCpi0inFV_stack_10->SetBinError(3,4.502353);
   hCCpi0inFV_stack_10->SetBinError(4,4.59635);
   hCCpi0inFV_stack_10->SetBinError(5,4.808692);
   hCCpi0inFV_stack_10->SetBinError(6,4.711676);
   hCCpi0inFV_stack_10->SetBinError(7,5.114974);
   hCCpi0inFV_stack_10->SetBinError(8,5.069325);
   hCCpi0inFV_stack_10->SetBinError(9,5.596595);
   hCCpi0inFV_stack_10->SetBinError(10,5.689118);
   hCCpi0inFV_stack_10->SetBinError(11,5.68892);
   hCCpi0inFV_stack_10->SetBinError(12,5.966504);
   hCCpi0inFV_stack_10->SetBinError(13,6.298363);
   hCCpi0inFV_stack_10->SetBinError(14,6.616504);
   hCCpi0inFV_stack_10->SetBinError(15,7.331499);
   hCCpi0inFV_stack_10->SetBinError(16,7.96228);
   hCCpi0inFV_stack_10->SetBinError(17,8.410776);
   hCCpi0inFV_stack_10->SetBinError(18,8.801248);
   hCCpi0inFV_stack_10->SetBinError(19,10.56201);
   hCCpi0inFV_stack_10->SetBinError(20,11.90532);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.9286332);
   hNCinFV_stack_11->SetBinContent(2,0.7319179);
   hNCinFV_stack_11->SetBinContent(4,0.5352025);
   hNCinFV_stack_11->SetBinContent(6,0.5867651);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.3917402);
   hNCinFV_stack_11->SetBinContent(9,0.785171);
   hNCinFV_stack_11->SetBinContent(10,0.5901461);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,1.125349);
   hNCinFV_stack_11->SetBinContent(13,0.9835768);
   hNCinFV_stack_11->SetBinContent(14,1.073786);
   hNCinFV_stack_11->SetBinContent(15,0.9303237);
   hNCinFV_stack_11->SetBinContent(16,2.876109);
   hNCinFV_stack_11->SetBinContent(17,1.125349);
   hNCinFV_stack_11->SetBinContent(18,2.00411);
   hNCinFV_stack_11->SetBinContent(19,3.374355);
   hNCinFV_stack_11->SetBinContent(20,6.258917);
   hNCinFV_stack_11->SetBinError(1,0.48078);
   hNCinFV_stack_11->SetBinError(2,0.438694);
   hNCinFV_stack_11->SetBinError(4,0.3921167);
   hNCinFV_stack_11->SetBinError(6,0.3387718);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.2770047);
   hNCinFV_stack_11->SetBinError(9,0.3925882);
   hNCinFV_stack_11->SetBinError(10,0.340721);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.5194673);
   hNCinFV_stack_11->SetBinError(13,0.4398689);
   hNCinFV_stack_11->SetBinError(14,0.5557297);
   hNCinFV_stack_11->SetBinError(15,0.4814682);
   hNCinFV_stack_11->SetBinError(16,0.8993325);
   hNCinFV_stack_11->SetBinError(17,0.5194673);
   hNCinFV_stack_11->SetBinError(18,0.7352871);
   hNCinFV_stack_11->SetBinError(19,0.8993757);
   hNCinFV_stack_11->SetBinError(20,1.27318);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,14.53865);
   hnumuCCinFV_stack_12->SetBinContent(2,11.21354);
   hnumuCCinFV_stack_12->SetBinContent(3,9.095592);
   hnumuCCinFV_stack_12->SetBinContent(4,10.08947);
   hnumuCCinFV_stack_12->SetBinContent(5,13.23943);
   hnumuCCinFV_stack_12->SetBinContent(6,21.07955);
   hnumuCCinFV_stack_12->SetBinContent(7,18.68946);
   hnumuCCinFV_stack_12->SetBinContent(8,20.65721);
   hnumuCCinFV_stack_12->SetBinContent(9,24.85891);
   hnumuCCinFV_stack_12->SetBinContent(10,26.16928);
   hnumuCCinFV_stack_12->SetBinContent(11,33.97598);
   hnumuCCinFV_stack_12->SetBinContent(12,33.76774);
   hnumuCCinFV_stack_12->SetBinContent(13,35.05292);
   hnumuCCinFV_stack_12->SetBinContent(14,42.68436);
   hnumuCCinFV_stack_12->SetBinContent(15,47.27969);
   hnumuCCinFV_stack_12->SetBinContent(16,58.59309);
   hnumuCCinFV_stack_12->SetBinContent(17,74.37885);
   hnumuCCinFV_stack_12->SetBinContent(18,92.1077);
   hnumuCCinFV_stack_12->SetBinContent(19,120.3987);
   hnumuCCinFV_stack_12->SetBinContent(20,183.124);
   hnumuCCinFV_stack_12->SetBinError(1,4.341065);
   hnumuCCinFV_stack_12->SetBinError(2,1.627729);
   hnumuCCinFV_stack_12->SetBinError(3,1.476445);
   hnumuCCinFV_stack_12->SetBinError(4,1.596587);
   hnumuCCinFV_stack_12->SetBinError(5,2.184746);
   hnumuCCinFV_stack_12->SetBinError(6,3.322485);
   hnumuCCinFV_stack_12->SetBinError(7,2.211035);
   hnumuCCinFV_stack_12->SetBinError(8,2.859385);
   hnumuCCinFV_stack_12->SetBinError(9,2.880766);
   hnumuCCinFV_stack_12->SetBinError(10,2.71155);
   hnumuCCinFV_stack_12->SetBinError(11,3.079016);
   hnumuCCinFV_stack_12->SetBinError(12,3.404595);
   hnumuCCinFV_stack_12->SetBinError(13,3.770978);
   hnumuCCinFV_stack_12->SetBinError(14,3.601711);
   hnumuCCinFV_stack_12->SetBinError(15,3.791516);
   hnumuCCinFV_stack_12->SetBinError(16,4.156149);
   hnumuCCinFV_stack_12->SetBinError(17,4.799458);
   hnumuCCinFV_stack_12->SetBinError(18,5.19591);
   hnumuCCinFV_stack_12->SetBinError(19,5.798013);
   hnumuCCinFV_stack_12->SetBinError(20,7.231324);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.5065283);
   hnueCCinFV_stack_13->SetBinContent(5,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,1.545346);
   hnueCCinFV_stack_13->SetBinContent(17,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(18,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,1.178602);
   hnueCCinFV_stack_13->SetBinContent(20,5.905823);
   hnueCCinFV_stack_13->SetBinError(3,0.3587818);
   hnueCCinFV_stack_13->SetBinError(5,0.3387718);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.6685841);
   hnueCCinFV_stack_13->SetBinError(17,0.2758068);
   hnueCCinFV_stack_13->SetBinError(18,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.4811646);
   hnueCCinFV_stack_13->SetBinError(20,1.303302);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__8->SetBinContent(1,93.36933);
   hmcerror__8->SetBinContent(2,89.47468);
   hmcerror__8->SetBinContent(3,93.89637);
   hmcerror__8->SetBinContent(4,99.01975);
   hmcerror__8->SetBinContent(5,111.1237);
   hmcerror__8->SetBinContent(6,121.9829);
   hmcerror__8->SetBinContent(7,129.6894);
   hmcerror__8->SetBinContent(8,135.8167);
   hmcerror__8->SetBinContent(9,156.0231);
   hmcerror__8->SetBinContent(10,166.2222);
   hmcerror__8->SetBinContent(11,182.2375);
   hmcerror__8->SetBinContent(12,195.1095);
   hmcerror__8->SetBinContent(13,203.0607);
   hmcerror__8->SetBinContent(14,234.2972);
   hmcerror__8->SetBinContent(15,282.147);
   hmcerror__8->SetBinContent(16,326.679);
   hmcerror__8->SetBinContent(17,372.0642);
   hmcerror__8->SetBinContent(18,428.0359);
   hmcerror__8->SetBinContent(19,594.7289);
   hmcerror__8->SetBinContent(20,796.0463);
   hmcerror__8->SetBinError(1,25.43374);
   hmcerror__8->SetBinError(2,24.36121);
   hmcerror__8->SetBinError(3,26.69266);
   hmcerror__8->SetBinError(4,26.11088);
   hmcerror__8->SetBinError(5,28.96057);
   hmcerror__8->SetBinError(6,29.64552);
   hmcerror__8->SetBinError(7,32.29106);
   hmcerror__8->SetBinError(8,34.59314);
   hmcerror__8->SetBinError(9,39.0201);
   hmcerror__8->SetBinError(10,41.8932);
   hmcerror__8->SetBinError(11,43.93495);
   hmcerror__8->SetBinError(12,47.0508);
   hmcerror__8->SetBinError(13,52.08628);
   hmcerror__8->SetBinError(14,60.08329);
   hmcerror__8->SetBinError(15,71.36479);
   hmcerror__8->SetBinError(16,81.35151);
   hmcerror__8->SetBinError(17,92.2518);
   hmcerror__8->SetBinError(18,96.46652);
   hmcerror__8->SetBinError(19,135.2567);
   hmcerror__8->SetBinError(20,161.1626);
   hmcerror__8->SetBinError(21,0.3895343);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3009[20] = {
   90,
   72,
   94,
   82,
   90,
   104,
   99,
   104,
   127,
   145,
   167,
   145,
   197,
   228,
   266,
   323,
   357,
   463,
   577,
   722};
   Double_t _felx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3009[20] = {
   9.6093,
   8.6108,
   9.8173,
   9.1791,
   9.6093,
   10.19804,
   10.0712,
   10.19804,
   11.26943,
   12.04159,
   12.92285,
   12.04159,
   14.03567,
   15.09967,
   16.30951,
   17.9722,
   18.89444,
   21.51743,
   24.02082,
   26.87006};
   Double_t _fehx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3009[20] = {
   9.4079,
   8.4085,
   9.616,
   8.9774,
   9.4079,
   10.19804,
   9.87,
   10.19804,
   11.26943,
   12.04159,
   12.92285,
   12.04159,
   14.03567,
   15.09967,
   16.30951,
   17.9722,
   18.89444,
   21.51743,
   24.02082,
   26.87006};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(57.05028);
   Graph_Graph3009->SetMaximum(817.4181);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 20.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 122.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3587.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 891.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.7","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3010[20] = {
   0.2723992,
   0.2722693,
   0.2842778,
   0.2636937,
   0.2606155,
   0.24303,
   0.2489876,
   0.2547045,
   0.2500919,
   0.2520313,
   0.2410863,
   0.2411507,
   0.2565059,
   0.2564405,
   0.2529348,
   0.2490258,
   0.2479459,
   0.2253701,
   0.2274258,
   0.2024538};
   Double_t _fehx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3010[20] = {
   0.2723992,
   0.2722693,
   0.2842778,
   0.2636937,
   0.2606155,
   0.24303,
   0.2489876,
   0.2547045,
   0.2500919,
   0.2520313,
   0.2410863,
   0.2411507,
   0.2565059,
   0.2564405,
   0.2529348,
   0.2490258,
   0.2479459,
   0.2253701,
   0.2274258,
   0.2024538};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3011[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3011[20] = {
   0.2723992,
   0.2722693,
   0.2842778,
   0.2636937,
   0.2606155,
   0.24303,
   0.2489876,
   0.2547045,
   0.2500919,
   0.2520313,
   0.2410863,
   0.2411507,
   0.2565059,
   0.2564405,
   0.2529348,
   0.2490258,
   0.2479459,
   0.2253701,
   0.2274258,
   0.2024538};
   Double_t _fehx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3011[20] = {
   0.2723992,
   0.2722693,
   0.2842778,
   0.2636937,
   0.2606155,
   0.24303,
   0.2489876,
   0.2547045,
   0.2500919,
   0.2520313,
   0.2410863,
   0.2411507,
   0.2565059,
   0.2564405,
   0.2529348,
   0.2490258,
   0.2479459,
   0.2253701,
   0.2274258,
   0.2024538};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3012[20] = {
   0.9639139,
   0.8046969,
   1.001104,
   0.8281176,
   0.8099079,
   0.8525782,
   0.7633621,
   0.7657377,
   0.8139822,
   0.8723264,
   0.9163867,
   0.7431724,
   0.970153,
   0.9731231,
   0.942771,
   0.9887382,
   0.9595118,
   1.081685,
   0.97019,
   0.9069824};
   Double_t _felx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3012[20] = {
   0.1029171,
   0.09623728,
   0.1045546,
   0.09269969,
   0.08647386,
   0.08360217,
   0.07765629,
   0.07508676,
   0.07222924,
   0.07244277,
   0.07091213,
   0.06171711,
   0.06912054,
   0.06444665,
   0.057805,
   0.05501487,
   0.05078275,
   0.05027016,
   0.04038954,
   0.03375439};
   Double_t _fehx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3012[20] = {
   0.1007601,
   0.09397631,
   0.1024108,
   0.09066272,
   0.08466147,
   0.08360217,
   0.07610489,
   0.07508676,
   0.07222924,
   0.07244277,
   0.07091213,
   0.06171711,
   0.06912054,
   0.06444665,
   0.057805,
   0.05501487,
   0.05078275,
   0.05027016,
   0.04038954,
   0.03375439};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.6364053);
   Graph_Graph3012->SetMaximum(1.177005);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
