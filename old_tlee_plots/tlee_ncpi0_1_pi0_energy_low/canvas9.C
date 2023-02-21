#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Oct 22 18:59:36 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-69.23077,-3.56,507.6923,393.6611);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__25->SetBinContent(1,131.3902);
   hmc__25->SetBinContent(2,175.9886);
   hmc__25->SetBinContent(3,137.0957);
   hmc__25->SetBinContent(4,81.48468);
   hmc__25->SetBinContent(5,49.07058);
   hmc__25->SetBinContent(6,33.64682);
   hmc__25->SetBinContent(7,22.30409);
   hmc__25->SetBinContent(8,11.58639);
   hmc__25->SetBinContent(9,5.724452);
   hmc__25->SetBinContent(10,5.084637);
   hmc__25->SetBinContent(11,0.7638761);
   hmc__25->SetBinContent(12,2.717394);
   hmc__25->SetBinContent(13,1.321329);
   hmc__25->SetBinContent(14,0.6312143);
   hmc__25->SetBinContent(15,0.8206164);
   hmc__25->SetBinContent(16,0.9586912);
   hmc__25->SetBinError(1,38.59463);
   hmc__25->SetBinError(2,55.36232);
   hmc__25->SetBinError(3,42.24041);
   hmc__25->SetBinError(4,29.16081);
   hmc__25->SetBinError(5,19.1738);
   hmc__25->SetBinError(6,21.09953);
   hmc__25->SetBinError(7,20.44551);
   hmc__25->SetBinError(8,8.72171);
   hmc__25->SetBinError(9,5.88803);
   hmc__25->SetBinError(10,8.290512);
   hmc__25->SetBinError(11,2.379666);
   hmc__25->SetBinError(12,10.37879);
   hmc__25->SetBinError(13,2.573576);
   hmc__25->SetBinError(14,1.182476);
   hmc__25->SetBinError(15,11.40837);
   hmc__25->SetBinError(16,2.519289);
   hmc__25->SetMinimum(-3.56);
   hmc__25->SetMaximum(373.8);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",15,0,450);
   hs9_stack_9->SetMinimum(-1.246074e-08);
   hs9_stack_9->SetMaximum(184.788);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,4.146612);
   hbadmatch_stack_1->SetBinContent(2,4.581918);
   hbadmatch_stack_1->SetBinContent(3,4.776383);
   hbadmatch_stack_1->SetBinContent(4,2.441146);
   hbadmatch_stack_1->SetBinContent(5,2.13645);
   hbadmatch_stack_1->SetBinContent(6,1.925408);
   hbadmatch_stack_1->SetBinContent(7,0.3546062);
   hbadmatch_stack_1->SetBinContent(8,0.3418778);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.9920562);
   hbadmatch_stack_1->SetBinError(2,1.119921);
   hbadmatch_stack_1->SetBinError(3,1.126911);
   hbadmatch_stack_1->SetBinError(4,0.7540119);
   hbadmatch_stack_1->SetBinError(5,0.7509585);
   hbadmatch_stack_1->SetBinError(6,0.7783919);
   hbadmatch_stack_1->SetBinError(7,0.2678908);
   hbadmatch_stack_1->SetBinError(8,0.2492633);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,21.34169);
   hext_stack_2->SetBinContent(2,34.07023);
   hext_stack_2->SetBinContent(3,14.05768);
   hext_stack_2->SetBinContent(4,9.201674);
   hext_stack_2->SetBinContent(5,3.897177);
   hext_stack_2->SetBinContent(6,1.137595);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,2.890854);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinError(1,3.146479);
   hext_stack_2->SetBinError(2,4.321715);
   hext_stack_2->SetBinError(3,2.593508);
   hext_stack_2->SetBinError(4,2.14715);
   hext_stack_2->SetBinError(5,1.182339);
   hext_stack_2->SetBinError(6,0.6602113);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,1.323597);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,2.725708);
   hdirt_stack_3->SetBinContent(2,0.7478366);
   hdirt_stack_3->SetBinContent(3,0.2945329);
   hdirt_stack_3->SetBinContent(4,0.4149213);
   hdirt_stack_3->SetBinContent(5,0.3381872);
   hdirt_stack_3->SetBinError(1,0.8999266);
   hdirt_stack_3->SetBinError(2,0.4319403);
   hdirt_stack_3->SetBinError(3,0.2086718);
   hdirt_stack_3->SetBinError(4,0.4149213);
   hdirt_stack_3->SetBinError(5,0.3381872);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,23.08968);
   houtFV_stack_4->SetBinContent(2,32.49917);
   houtFV_stack_4->SetBinContent(3,23.26591);
   houtFV_stack_4->SetBinContent(4,13.09833);
   houtFV_stack_4->SetBinContent(5,8.008898);
   houtFV_stack_4->SetBinContent(6,7.033391);
   houtFV_stack_4->SetBinContent(7,5.076871);
   houtFV_stack_4->SetBinContent(8,0.8317063);
   houtFV_stack_4->SetBinContent(9,1.826077);
   houtFV_stack_4->SetBinContent(10,0.6803553);
   houtFV_stack_4->SetBinContent(12,0.5858262);
   houtFV_stack_4->SetBinContent(13,0.2510497);
   houtFV_stack_4->SetBinError(1,2.379128);
   houtFV_stack_4->SetBinError(2,2.819052);
   houtFV_stack_4->SetBinError(3,2.489168);
   houtFV_stack_4->SetBinError(4,1.811971);
   houtFV_stack_4->SetBinError(5,1.444071);
   houtFV_stack_4->SetBinError(6,1.539244);
   houtFV_stack_4->SetBinError(7,1.20924);
   houtFV_stack_4->SetBinError(8,0.3808078);
   houtFV_stack_4->SetBinError(9,0.842864);
   houtFV_stack_4->SetBinError(10,0.4810838);
   houtFV_stack_4->SetBinError(12,0.5858262);
   houtFV_stack_4->SetBinError(13,0.2510497);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1603158);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2127225);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2328935);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.04904586);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4314342);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1117156);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1478076);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1477945);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.0385056);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2793844);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02414102);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1463856);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4299016);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1922047);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03563222);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07581913);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1771125);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06148402);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02520537);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05284983);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.28229);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.67834);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.88266);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.14453);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.164322);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.357612);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.217545);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.706327);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.9592572);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.4177332);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.2249335);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.06808199);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.1763105);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.222536);
   hNCpi0inFVres_stack_7->SetBinError(1,1.331845);
   hNCpi0inFVres_stack_7->SetBinError(2,1.595188);
   hNCpi0inFVres_stack_7->SetBinError(3,1.377102);
   hNCpi0inFVres_stack_7->SetBinError(4,1.018435);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8532276);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8004237);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5365343);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3944403);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3440548);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1915231);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2088376);
   hNCpi0inFVres_stack_7->SetBinError(12,0.05500112);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1763105);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1404279);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.457035);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.716952);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.783097);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.996675);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.676005);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.975847);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.639356);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.178604);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.3516243);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.035246);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1153349);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.04620773);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2293934);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.623901);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6318645);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.824446);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.1542);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.920776);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3843983);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7885729);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6157432);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5049375);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.128895);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6857189);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.07142288);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.03337039);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1969348);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4488072);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,17.6858);
   hCCpi0inFV_stack_10->SetBinContent(2,30.40684);
   hCCpi0inFV_stack_10->SetBinContent(3,33.29135);
   hCCpi0inFV_stack_10->SetBinContent(4,21.29522);
   hCCpi0inFV_stack_10->SetBinContent(5,11.16298);
   hCCpi0inFV_stack_10->SetBinContent(6,8.511312);
   hCCpi0inFV_stack_10->SetBinContent(7,3.500502);
   hCCpi0inFV_stack_10->SetBinContent(8,1.663932);
   hCCpi0inFV_stack_10->SetBinContent(9,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(10,1.322064);
   hCCpi0inFV_stack_10->SetBinContent(11,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(12,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(16,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(1,2.078269);
   hCCpi0inFV_stack_10->SetBinError(2,2.764634);
   hCCpi0inFV_stack_10->SetBinError(3,2.953064);
   hCCpi0inFV_stack_10->SetBinError(4,2.283885);
   hCCpi0inFV_stack_10->SetBinError(5,1.665041);
   hCCpi0inFV_stack_10->SetBinError(6,1.498088);
   hCCpi0inFV_stack_10->SetBinError(7,0.9692372);
   hCCpi0inFV_stack_10->SetBinError(8,0.6518637);
   hCCpi0inFV_stack_10->SetBinError(9,0.588146);
   hCCpi0inFV_stack_10->SetBinError(10,0.5554667);
   hCCpi0inFV_stack_10->SetBinError(11,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(12,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(16,0.3401776);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,5.108755);
   hNCinFV_stack_11->SetBinContent(2,4.685537);
   hNCinFV_stack_11->SetBinContent(3,7.787686);
   hNCinFV_stack_11->SetBinContent(4,5.235456);
   hNCinFV_stack_11->SetBinContent(5,3.983288);
   hNCinFV_stack_11->SetBinContent(6,3.384413);
   hNCinFV_stack_11->SetBinContent(7,3.058441);
   hNCinFV_stack_11->SetBinContent(8,1.310929);
   hNCinFV_stack_11->SetBinContent(9,0.536893);
   hNCinFV_stack_11->SetBinContent(10,0.297835);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.176914);
   hNCinFV_stack_11->SetBinError(2,1.008458);
   hNCinFV_stack_11->SetBinError(3,1.505727);
   hNCinFV_stack_11->SetBinError(4,1.21655);
   hNCinFV_stack_11->SetBinError(5,1.052446);
   hNCinFV_stack_11->SetBinError(6,1.135584);
   hNCinFV_stack_11->SetBinError(7,1.221162);
   hNCinFV_stack_11->SetBinError(8,0.5804804);
   hNCinFV_stack_11->SetBinError(9,0.3929602);
   hNCinFV_stack_11->SetBinError(10,0.2204646);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,32.37403);
   hnumuCCinFV_stack_12->SetBinContent(2,31.87968);
   hnumuCCinFV_stack_12->SetBinContent(3,21.9685);
   hnumuCCinFV_stack_12->SetBinContent(4,10.55383);
   hnumuCCinFV_stack_12->SetBinContent(5,7.718408);
   hnumuCCinFV_stack_12->SetBinContent(6,3.126216);
   hnumuCCinFV_stack_12->SetBinContent(7,4.825553);
   hnumuCCinFV_stack_12->SetBinContent(8,1.609309);
   hnumuCCinFV_stack_12->SetBinContent(9,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(10,0.7657652);
   hnumuCCinFV_stack_12->SetBinContent(11,0.2285828);
   hnumuCCinFV_stack_12->SetBinContent(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(13,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(1,3.418474);
   hnumuCCinFV_stack_12->SetBinError(2,3.442102);
   hnumuCCinFV_stack_12->SetBinError(3,2.70231);
   hnumuCCinFV_stack_12->SetBinError(4,1.662441);
   hnumuCCinFV_stack_12->SetBinError(5,1.418363);
   hnumuCCinFV_stack_12->SetBinError(6,0.9085017);
   hnumuCCinFV_stack_12->SetBinError(7,1.151803);
   hnumuCCinFV_stack_12->SetBinError(8,0.5702963);
   hnumuCCinFV_stack_12->SetBinError(9,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(10,0.4548787);
   hnumuCCinFV_stack_12->SetBinError(11,0.2285828);
   hnumuCCinFV_stack_12->SetBinError(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(13,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,2.871847);
   hnueCCinFV_stack_13->SetBinContent(2,2.044925);
   hnueCCinFV_stack_13->SetBinContent(3,0.536893);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.2171002);
   hnueCCinFV_stack_13->SetBinError(1,1.666005);
   hnueCCinFV_stack_13->SetBinError(2,1.272762);
   hnueCCinFV_stack_13->SetBinError(3,0.3929602);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2171002);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__26->SetBinContent(1,131.3902);
   hmcerror__26->SetBinContent(2,175.9886);
   hmcerror__26->SetBinContent(3,137.0957);
   hmcerror__26->SetBinContent(4,81.48468);
   hmcerror__26->SetBinContent(5,49.07058);
   hmcerror__26->SetBinContent(6,33.64682);
   hmcerror__26->SetBinContent(7,22.30409);
   hmcerror__26->SetBinContent(8,11.58639);
   hmcerror__26->SetBinContent(9,5.724452);
   hmcerror__26->SetBinContent(10,5.084637);
   hmcerror__26->SetBinContent(11,0.7638761);
   hmcerror__26->SetBinContent(12,2.717394);
   hmcerror__26->SetBinContent(13,1.321329);
   hmcerror__26->SetBinContent(14,0.6312143);
   hmcerror__26->SetBinContent(15,0.8206164);
   hmcerror__26->SetBinContent(16,0.9586912);
   hmcerror__26->SetBinError(1,38.59463);
   hmcerror__26->SetBinError(2,55.36232);
   hmcerror__26->SetBinError(3,42.24041);
   hmcerror__26->SetBinError(4,29.16081);
   hmcerror__26->SetBinError(5,19.1738);
   hmcerror__26->SetBinError(6,21.09953);
   hmcerror__26->SetBinError(7,20.44551);
   hmcerror__26->SetBinError(8,8.72171);
   hmcerror__26->SetBinError(9,5.88803);
   hmcerror__26->SetBinError(10,8.290512);
   hmcerror__26->SetBinError(11,2.379666);
   hmcerror__26->SetBinError(12,10.37879);
   hmcerror__26->SetBinError(13,2.573576);
   hmcerror__26->SetBinError(14,1.182476);
   hmcerror__26->SetBinError(15,11.40837);
   hmcerror__26->SetBinError(16,2.519289);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[15] = {
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
   Double_t _fy3033[15] = {
   123,
   178,
   124,
   75,
   32,
   23,
   9,
   8,
   4,
   2,
   2,
   1,
   1,
   2,
   1};
   Double_t _felx3033[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fely3033[15] = {
   11.09054,
   13.34166,
   11.13553,
   8.7852,
   5.7977,
   4.9457,
   3.19354,
   3.0307,
   2.29683,
   2,
   2,
   1,
   1,
   2,
   1};
   Double_t _fehx3033[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fehy3033[15] = {
   11.09054,
   13.34166,
   11.13553,
   8.5831,
   5.5904,
   4.7346,
   2.9582,
   2.7896,
   1.98186,
   1.51917,
   1.51917,
   1.35971,
   1.35971,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,495);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(210.4758);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 21.0","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 116.2","F");

   ci = 1541;
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

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.8","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 131.8","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.8","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.0","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[15] = {
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
   Double_t _fy3034[15] = {
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
   Double_t _felx3034[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fely3034[15] = {
   0.2937406,
   0.3145791,
   0.308109,
   0.3578686,
   0.3907392,
   0.6270884,
   0.9166709,
   0.7527549,
   1.028575,
   1.630502,
   3.115251,
   3.819393,
   1.947719,
   1.873335,
   13.90219};
   Double_t _fehx3034[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fehy3034[15] = {
   0.2937406,
   0.3145791,
   0.308109,
   0.3578686,
   0.3907392,
   0.6270884,
   0.9166709,
   0.7527549,
   1.028575,
   1.630502,
   3.115251,
   3.819393,
   1.947719,
   1.873335,
   13.90219};
   grae = new TGraphAsymmErrors(15,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,495);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[15] = {
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
   Double_t _fy3035[15] = {
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
   Double_t _felx3035[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fely3035[15] = {
   0.2070951,
   0.2442517,
   0.273576,
   0.2690853,
   0.2782922,
   0.2642124,
   0.2691746,
   0.2827019,
   0.349954,
   0.3886007,
   0.7504278,
   0.6588386,
   0.591477,
   0.9787799,
   0.9798147};
   Double_t _fehx3035[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fehy3035[15] = {
   0.2070951,
   0.2442517,
   0.273576,
   0.2690853,
   0.2782922,
   0.2642124,
   0.2691746,
   0.2827019,
   0.349954,
   0.3886007,
   0.7504278,
   0.6588386,
   0.591477,
   0.9787799,
   0.9798147};
   grae = new TGraphAsymmErrors(15,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,495);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[15] = {
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
   Double_t _fy3036[15] = {
   0.9361431,
   1.011429,
   0.9044779,
   0.9204184,
   0.6521219,
   0.6835713,
   0.4035135,
   0.6904654,
   0.6987568,
   0.3933418,
   2.618226,
   0.3679997,
   0.7568141,
   3.168496,
   1.218596};
   Double_t _felx3036[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fely3036[15] = {
   0.08440918,
   0.07580984,
   0.08122451,
   0.1078141,
   0.1181502,
   0.1469886,
   0.1431818,
   0.2615742,
   0.4012314,
   0.3933418,
   2.618226,
   0.3679997,
   0.7568141,
   3.168496,
   1.218596};
   Double_t _fehx3036[15] = {
   15,
   15,
   15,
   15,
   15,
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
   Double_t _fehy3036[15] = {
   0.08440918,
   0.07580984,
   0.08122451,
   0.1053339,
   0.1139257,
   0.1407146,
   0.1326304,
   0.2407653,
   0.3462096,
   0.2987765,
   1.988765,
   0.5003729,
   1.029048,
   2.406742,
   1.656937};
   grae = new TGraphAsymmErrors(15,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,495);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(6.132762);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",15,0,450);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
