#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Oct 21 13:43:28 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
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
   pad1->Range(-276.9231,-3.728478,2030.769,412.2912);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__19->SetBinContent(0,0.02516554);
   hmc__19->SetBinContent(2,0.4487854);
   hmc__19->SetBinContent(3,5.269194);
   hmc__19->SetBinContent(4,38.03918);
   hmc__19->SetBinContent(5,102.8832);
   hmc__19->SetBinContent(6,155.1713);
   hmc__19->SetBinContent(7,173.9062);
   hmc__19->SetBinContent(8,185.4405);
   hmc__19->SetBinContent(9,186.4239);
   hmc__19->SetBinContent(10,157.7382);
   hmc__19->SetBinContent(11,134.8254);
   hmc__19->SetBinContent(12,118.1794);
   hmc__19->SetBinContent(13,101.9315);
   hmc__19->SetBinContent(14,88.67211);
   hmc__19->SetBinContent(15,67.22346);
   hmc__19->SetBinContent(16,62.06231);
   hmc__19->SetBinContent(17,46.1725);
   hmc__19->SetBinContent(18,30.75153);
   hmc__19->SetBinContent(19,21.6311);
   hmc__19->SetBinContent(20,19.45123);
   hmc__19->SetBinContent(21,16.24868);
   hmc__19->SetBinContent(22,14.83056);
   hmc__19->SetBinContent(23,10.07005);
   hmc__19->SetBinContent(24,6.895123);
   hmc__19->SetBinContent(25,6.888565);
   hmc__19->SetBinContent(26,21.36414);
   hmc__19->SetBinError(0,0.02516554);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.5060948);
   hmc__19->SetBinError(3,1.660937);
   hmc__19->SetBinError(4,9.833669);
   hmc__19->SetBinError(5,30.11087);
   hmc__19->SetBinError(6,44.23066);
   hmc__19->SetBinError(7,50.97798);
   hmc__19->SetBinError(8,49.16158);
   hmc__19->SetBinError(9,49.75386);
   hmc__19->SetBinError(10,38.47139);
   hmc__19->SetBinError(11,34.52746);
   hmc__19->SetBinError(12,28.68558);
   hmc__19->SetBinError(13,24.83622);
   hmc__19->SetBinError(14,22.8235);
   hmc__19->SetBinError(15,16.43266);
   hmc__19->SetBinError(16,15.18269);
   hmc__19->SetBinError(17,11.76189);
   hmc__19->SetBinError(18,8.331554);
   hmc__19->SetBinError(19,5.69421);
   hmc__19->SetBinError(20,5.307941);
   hmc__19->SetBinError(21,4.446809);
   hmc__19->SetBinError(22,4.978628);
   hmc__19->SetBinError(23,3.214026);
   hmc__19->SetBinError(24,2.423557);
   hmc__19->SetBinError(25,2.223534);
   hmc__19->SetBinError(26,3.99714);
   hmc__19->SetMinimum(-3.728478);
   hmc__19->SetMaximum(391.4902);
   hmc__19->SetEntries(1768.521);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,1800);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(195.7451);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,0.536893);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,1.408953);
   hbadmatch_stack_1->SetBinContent(10,0.797998);
   hbadmatch_stack_1->SetBinContent(11,0.5352025);
   hbadmatch_stack_1->SetBinContent(12,0.9673123);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.7336084);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.8368552);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,1.025423);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.5887579);
   hbadmatch_stack_1->SetBinError(10,0.3992314);
   hbadmatch_stack_1->SetBinError(11,0.3921167);
   hbadmatch_stack_1->SetBinError(12,0.4977134);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.4394482);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.6020045);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.460434);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetEntries(43);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(7,2.890854);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,1.461993);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,3.208071);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinError(7,1.323597);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.7356036);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,1.434693);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetEntries(30);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(6,0.3401776);
   houtFV_stack_4->SetBinContent(7,0.536893);
   houtFV_stack_4->SetBinContent(9,0.5352025);
   houtFV_stack_4->SetBinContent(10,0.3401776);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.3900497);
   houtFV_stack_4->SetBinContent(16,0.6469922);
   houtFV_stack_4->SetBinError(6,0.3401776);
   houtFV_stack_4->SetBinError(7,0.3929602);
   houtFV_stack_4->SetBinError(9,0.3921167);
   houtFV_stack_4->SetBinError(10,0.3401776);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(14,0.2758068);
   houtFV_stack_4->SetBinError(16,0.3766765);
   houtFV_stack_4->SetEntries(13);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.09970617);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.5031474);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.8532896);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.820674);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.876723);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.291631);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.212444);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.606274);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.436473);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.900067);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.131945);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.91205);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.48123);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.121337);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.178603);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.6538403);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.280327);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.8342512);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2192565);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.4658655);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.2735158);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1912477);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(3,0.07899562);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1545553);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2327055);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3456666);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4209687);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5867732);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6092998);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5825006);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6221569);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8119809);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5056257);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7740885);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3689859);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5654499);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4097014);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2187056);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5174081);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5630766);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1276968);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2257972);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2104738);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1188261);
   hNCpi0inFVres_stack_7->SetBinError(26,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(660);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.0327757);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5089586);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.286666);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.143765);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.249969);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.992487);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.770708);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.361645);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.539494);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.72478);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.156014);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.38552);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.105892);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.373688);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7836457);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6989611);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.707963);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.654822);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3745437);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6658118);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.50051);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4380047);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.02323348);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1681254);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4126814);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3065375);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4048313);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3617166);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.590259);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7204076);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5957638);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5359074);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5119317);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5357536);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5934578);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3391792);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2721044);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.326703);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2662465);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.267003);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1517094);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5841142);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2895938);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3036249);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2404119);
   hNCpi0inFVdis_stack_8->SetEntries(528);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,2.250697);
   hCCpi0inFV_stack_10->SetBinContent(4,31.09893);
   hCCpi0inFV_stack_10->SetBinContent(5,89.92891);
   hCCpi0inFV_stack_10->SetBinContent(6,134.3312);
   hCCpi0inFV_stack_10->SetBinContent(7,144.2978);
   hCCpi0inFV_stack_10->SetBinContent(8,154.1387);
   hCCpi0inFV_stack_10->SetBinContent(9,150.42);
   hCCpi0inFV_stack_10->SetBinContent(10,117.509);
   hCCpi0inFV_stack_10->SetBinContent(11,98.51166);
   hCCpi0inFV_stack_10->SetBinContent(12,82.48144);
   hCCpi0inFV_stack_10->SetBinContent(13,70.79728);
   hCCpi0inFV_stack_10->SetBinContent(14,54.19121);
   hCCpi0inFV_stack_10->SetBinContent(15,46.59995);
   hCCpi0inFV_stack_10->SetBinContent(16,35.16019);
   hCCpi0inFV_stack_10->SetBinContent(17,25.20213);
   hCCpi0inFV_stack_10->SetBinContent(18,17.93096);
   hCCpi0inFV_stack_10->SetBinContent(19,12.54086);
   hCCpi0inFV_stack_10->SetBinContent(20,9.959925);
   hCCpi0inFV_stack_10->SetBinContent(21,9.62989);
   hCCpi0inFV_stack_10->SetBinContent(22,7.646096);
   hCCpi0inFV_stack_10->SetBinContent(23,5.128496);
   hCCpi0inFV_stack_10->SetBinContent(24,4.301298);
   hCCpi0inFV_stack_10->SetBinContent(25,4.448141);
   hCCpi0inFV_stack_10->SetBinContent(26,12.46228);
   hCCpi0inFV_stack_10->SetBinError(3,0.7346377);
   hCCpi0inFV_stack_10->SetBinError(4,2.805374);
   hCCpi0inFV_stack_10->SetBinError(5,4.759837);
   hCCpi0inFV_stack_10->SetBinError(6,5.760035);
   hCCpi0inFV_stack_10->SetBinError(7,6.060897);
   hCCpi0inFV_stack_10->SetBinError(8,6.1964);
   hCCpi0inFV_stack_10->SetBinError(9,6.191387);
   hCCpi0inFV_stack_10->SetBinError(10,5.407797);
   hCCpi0inFV_stack_10->SetBinError(11,4.999393);
   hCCpi0inFV_stack_10->SetBinError(12,4.559731);
   hCCpi0inFV_stack_10->SetBinError(13,4.222061);
   hCCpi0inFV_stack_10->SetBinError(14,3.658274);
   hCCpi0inFV_stack_10->SetBinError(15,3.423601);
   hCCpi0inFV_stack_10->SetBinError(16,3.00838);
   hCCpi0inFV_stack_10->SetBinError(17,2.572259);
   hCCpi0inFV_stack_10->SetBinError(18,2.132108);
   hCCpi0inFV_stack_10->SetBinError(19,1.803592);
   hCCpi0inFV_stack_10->SetBinError(20,1.593828);
   hCCpi0inFV_stack_10->SetBinError(21,1.558377);
   hCCpi0inFV_stack_10->SetBinError(22,1.326892);
   hCCpi0inFV_stack_10->SetBinError(23,1.161531);
   hCCpi0inFV_stack_10->SetBinError(24,1.019492);
   hCCpi0inFV_stack_10->SetBinError(25,1.057219);
   hCCpi0inFV_stack_10->SetBinError(26,1.755281);
   hCCpi0inFV_stack_10->SetEntries(5656);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,1.412273);
   hNCinFV_stack_11->SetBinContent(6,0.3900497);
   hNCinFV_stack_11->SetBinContent(7,1.103036);
   hNCinFV_stack_11->SetBinContent(8,3.433682);
   hNCinFV_stack_11->SetBinContent(9,1.380601);
   hNCinFV_stack_11->SetBinContent(10,2.454627);
   hNCinFV_stack_11->SetBinContent(12,2.275024);
   hNCinFV_stack_11->SetBinContent(13,2.003873);
   hNCinFV_stack_11->SetBinContent(14,1.072095);
   hNCinFV_stack_11->SetBinContent(15,1.765159);
   hNCinFV_stack_11->SetBinContent(16,3.191804);
   hNCinFV_stack_11->SetBinContent(17,3.336638);
   hNCinFV_stack_11->SetBinContent(18,1.040445);
   hNCinFV_stack_11->SetBinContent(19,0.8508351);
   hNCinFV_stack_11->SetBinContent(20,0.536893);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.3900497);
   hNCinFV_stack_11->SetBinContent(25,0.3934307);
   hNCinFV_stack_11->SetBinContent(26,1.557426);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.6510715);
   hNCinFV_stack_11->SetBinError(6,0.2758068);
   hNCinFV_stack_11->SetBinError(7,0.5741007);
   hNCinFV_stack_11->SetBinError(8,0.8987437);
   hNCinFV_stack_11->SetBinError(9,0.5787917);
   hNCinFV_stack_11->SetBinError(10,0.7484452);
   hNCinFV_stack_11->SetBinError(12,1.054303);
   hNCinFV_stack_11->SetBinError(13,0.7552407);
   hNCinFV_stack_11->SetBinError(14,0.5551335);
   hNCinFV_stack_11->SetBinError(15,0.70996);
   hNCinFV_stack_11->SetBinError(16,1.505772);
   hNCinFV_stack_11->SetBinError(17,1.557328);
   hNCinFV_stack_11->SetBinError(18,0.5359699);
   hNCinFV_stack_11->SetBinError(19,0.4548151);
   hNCinFV_stack_11->SetBinError(20,0.3929602);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.2758068);
   hNCinFV_stack_11->SetBinError(25,0.2781975);
   hNCinFV_stack_11->SetBinError(26,0.7082233);
   hNCinFV_stack_11->SetEntries(106);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(2,0.4487854);
   hnumuCCinFV_stack_12->SetBinContent(3,2.91879);
   hnumuCCinFV_stack_12->SetBinContent(4,5.867436);
   hnumuCCinFV_stack_12->SetBinContent(5,10.17982);
   hnumuCCinFV_stack_12->SetBinContent(6,16.46569);
   hnumuCCinFV_stack_12->SetBinContent(7,21.18);
   hnumuCCinFV_stack_12->SetBinContent(8,24.10188);
   hnumuCCinFV_stack_12->SetBinContent(9,26.61293);
   hnumuCCinFV_stack_12->SetBinContent(10,28.49859);
   hnumuCCinFV_stack_12->SetBinContent(11,28.47204);
   hnumuCCinFV_stack_12->SetBinContent(12,25.35148);
   hnumuCCinFV_stack_12->SetBinContent(13,23.03642);
   hnumuCCinFV_stack_12->SetBinContent(14,26.89269);
   hnumuCCinFV_stack_12->SetBinContent(15,13.92043);
   hnumuCCinFV_stack_12->SetBinContent(16,14.89611);
   hnumuCCinFV_stack_12->SetBinContent(17,13.86419);
   hnumuCCinFV_stack_12->SetBinContent(18,9.481357);
   hnumuCCinFV_stack_12->SetBinContent(19,5.423265);
   hnumuCCinFV_stack_12->SetBinContent(20,6.341022);
   hnumuCCinFV_stack_12->SetBinContent(21,4.05471);
   hnumuCCinFV_stack_12->SetBinContent(22,6.147339);
   hnumuCCinFV_stack_12->SetBinContent(23,2.734337);
   hnumuCCinFV_stack_12->SetBinContent(24,1.316992);
   hnumuCCinFV_stack_12->SetBinContent(25,1.413964);
   hnumuCCinFV_stack_12->SetBinContent(26,5.873331);
   hnumuCCinFV_stack_12->SetBinError(2,0.3173508);
   hnumuCCinFV_stack_12->SetBinError(3,0.9184975);
   hnumuCCinFV_stack_12->SetBinError(4,1.264187);
   hnumuCCinFV_stack_12->SetBinError(5,1.526106);
   hnumuCCinFV_stack_12->SetBinError(6,2.043195);
   hnumuCCinFV_stack_12->SetBinError(7,2.594572);
   hnumuCCinFV_stack_12->SetBinError(8,2.580937);
   hnumuCCinFV_stack_12->SetBinError(9,2.66355);
   hnumuCCinFV_stack_12->SetBinError(10,2.724442);
   hnumuCCinFV_stack_12->SetBinError(11,2.722948);
   hnumuCCinFV_stack_12->SetBinError(12,2.547479);
   hnumuCCinFV_stack_12->SetBinError(13,2.397397);
   hnumuCCinFV_stack_12->SetBinError(14,2.701922);
   hnumuCCinFV_stack_12->SetBinError(15,1.877433);
   hnumuCCinFV_stack_12->SetBinError(16,1.994245);
   hnumuCCinFV_stack_12->SetBinError(17,1.962618);
   hnumuCCinFV_stack_12->SetBinError(18,1.532817);
   hnumuCCinFV_stack_12->SetBinError(19,1.143628);
   hnumuCCinFV_stack_12->SetBinError(20,1.361764);
   hnumuCCinFV_stack_12->SetBinError(21,1.01996);
   hnumuCCinFV_stack_12->SetBinError(22,1.302173);
   hnumuCCinFV_stack_12->SetBinError(23,0.8558255);
   hnumuCCinFV_stack_12->SetBinError(24,0.5536755);
   hnumuCCinFV_stack_12->SetBinError(25,0.6515799);
   hnumuCCinFV_stack_12->SetBinError(26,1.161153);
   hnumuCCinFV_stack_12->SetEntries(1376);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.3917402);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.4810838);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.2770047);
   hnueCCinFV_stack_13->SetEntries(16);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__20->SetBinContent(0,0.02516554);
   hmcerror__20->SetBinContent(2,0.4487854);
   hmcerror__20->SetBinContent(3,5.269194);
   hmcerror__20->SetBinContent(4,38.03918);
   hmcerror__20->SetBinContent(5,102.8832);
   hmcerror__20->SetBinContent(6,155.1713);
   hmcerror__20->SetBinContent(7,173.9062);
   hmcerror__20->SetBinContent(8,185.4405);
   hmcerror__20->SetBinContent(9,186.4239);
   hmcerror__20->SetBinContent(10,157.7382);
   hmcerror__20->SetBinContent(11,134.8254);
   hmcerror__20->SetBinContent(12,118.1794);
   hmcerror__20->SetBinContent(13,101.9315);
   hmcerror__20->SetBinContent(14,88.67211);
   hmcerror__20->SetBinContent(15,67.22346);
   hmcerror__20->SetBinContent(16,62.06231);
   hmcerror__20->SetBinContent(17,46.1725);
   hmcerror__20->SetBinContent(18,30.75153);
   hmcerror__20->SetBinContent(19,21.6311);
   hmcerror__20->SetBinContent(20,19.45123);
   hmcerror__20->SetBinContent(21,16.24868);
   hmcerror__20->SetBinContent(22,14.83056);
   hmcerror__20->SetBinContent(23,10.07005);
   hmcerror__20->SetBinContent(24,6.895123);
   hmcerror__20->SetBinContent(25,6.888565);
   hmcerror__20->SetBinContent(26,21.36414);
   hmcerror__20->SetBinError(0,0.02516554);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.5060948);
   hmcerror__20->SetBinError(3,1.660937);
   hmcerror__20->SetBinError(4,9.833669);
   hmcerror__20->SetBinError(5,30.11087);
   hmcerror__20->SetBinError(6,44.23066);
   hmcerror__20->SetBinError(7,50.97798);
   hmcerror__20->SetBinError(8,49.16158);
   hmcerror__20->SetBinError(9,49.75386);
   hmcerror__20->SetBinError(10,38.47139);
   hmcerror__20->SetBinError(11,34.52746);
   hmcerror__20->SetBinError(12,28.68558);
   hmcerror__20->SetBinError(13,24.83622);
   hmcerror__20->SetBinError(14,22.8235);
   hmcerror__20->SetBinError(15,16.43266);
   hmcerror__20->SetBinError(16,15.18269);
   hmcerror__20->SetBinError(17,11.76189);
   hmcerror__20->SetBinError(18,8.331554);
   hmcerror__20->SetBinError(19,5.69421);
   hmcerror__20->SetBinError(20,5.307941);
   hmcerror__20->SetBinError(21,4.446809);
   hmcerror__20->SetBinError(22,4.978628);
   hmcerror__20->SetBinError(23,3.214026);
   hmcerror__20->SetBinError(24,2.423557);
   hmcerror__20->SetBinError(25,2.223534);
   hmcerror__20->SetBinError(26,3.99714);
   hmcerror__20->SetEntries(1768.521);

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
   
   Double_t _fx3025[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3025[25] = {
   0,
   0,
   10,
   44,
   90,
   153,
   170,
   180,
   150,
   131,
   118,
   109,
   91,
   64,
   50,
   36,
   25,
   32,
   17,
   11,
   14,
   6,
   5,
   3,
   5};
   Double_t _felx3025[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3025[25] = {
   0,
   0,
   3.34883,
   6.7671,
   9.6093,
   12.36932,
   13.0384,
   13.41641,
   12.24745,
   11.44552,
   10.86278,
   10.44031,
   9.6617,
   8.1273,
   7.2025,
   6.1381,
   5.1474,
   5.7977,
   4.2835,
   3.4975,
   3.9102,
   2.67925,
   2.48995,
   2.143368,
   2.48995};
   Double_t _fehx3025[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3025[25] = {
   1.1478,
   1.1478,
   3.1179,
   6.5623,
   9.4079,
   12.36932,
   13.0384,
   13.41641,
   12.24745,
   11.44552,
   10.86278,
   10.44031,
   9.46,
   7.9246,
   6.9985,
   5.9318,
   4.9374,
   5.5904,
   4.0673,
   3.27,
   3.6898,
   2.41858,
   2.21064,
   1.72422,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1980);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(212.758);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 13.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 3.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  29.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1308.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 27.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 319.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.8","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3026[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3026[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3026[25] = {
   0,
   1.127699,
   0.3152166,
   0.2585142,
   0.2926703,
   0.285044,
   0.293135,
   0.2651071,
   0.2668856,
   0.2438939,
   0.2560902,
   0.2427292,
   0.2436559,
   0.2573921,
   0.2444483,
   0.2446363,
   0.2547381,
   0.2709313,
   0.2632418,
   0.2728846,
   0.2736721,
   0.3357006,
   0.3191669,
   0.3514886,
   0.3227862};
   Double_t _fehx3026[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3026[25] = {
   0,
   1.127699,
   0.3152166,
   0.2585142,
   0.2926703,
   0.285044,
   0.293135,
   0.2651071,
   0.2668856,
   0.2438939,
   0.2560902,
   0.2427292,
   0.2436559,
   0.2573921,
   0.2444483,
   0.2446363,
   0.2547381,
   0.2709313,
   0.2632418,
   0.2728846,
   0.2736721,
   0.3357006,
   0.3191669,
   0.3514886,
   0.3227862};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1980);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3027[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3027[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3027[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3027[25] = {
   0,
   1.127699,
   0.3152166,
   0.2585142,
   0.2926703,
   0.285044,
   0.293135,
   0.2651071,
   0.2668856,
   0.2438939,
   0.2560902,
   0.2427292,
   0.2436559,
   0.2573921,
   0.2444483,
   0.2446363,
   0.2547381,
   0.2709313,
   0.2632418,
   0.2728846,
   0.2736721,
   0.3357006,
   0.3191669,
   0.3514886,
   0.3227862};
   Double_t _fehx3027[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3027[25] = {
   0,
   1.127699,
   0.3152166,
   0.2585142,
   0.2926703,
   0.285044,
   0.293135,
   0.2651071,
   0.2668856,
   0.2438939,
   0.2560902,
   0.2427292,
   0.2436559,
   0.2573921,
   0.2444483,
   0.2446363,
   0.2547381,
   0.2709313,
   0.2632418,
   0.2728846,
   0.2736721,
   0.3357006,
   0.3191669,
   0.3514886,
   0.3227862};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1980);
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
   
   Double_t _fx3028[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3028[25] = {
   10,
   0,
   1.897824,
   1.156702,
   0.874778,
   0.9860068,
   0.9775387,
   0.9706619,
   0.8046178,
   0.8304898,
   0.8752059,
   0.9223266,
   0.892756,
   0.7217602,
   0.7437879,
   0.5800622,
   0.5414479,
   1.040599,
   0.7859054,
   0.565517,
   0.8616086,
   0.4045701,
   0.4965219,
   0.4350902,
   0.7258406};
   Double_t _felx3028[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3028[25] = {
   0,
   0,
   0.6355489,
   0.1778981,
   0.09340005,
   0.07971393,
   0.0749738,
   0.07234886,
   0.06569677,
   0.07256023,
   0.08056924,
   0.08834287,
   0.09478617,
   0.09165565,
   0.1071426,
   0.09890221,
   0.111482,
   0.1885337,
   0.198025,
   0.1798087,
   0.2406473,
   0.1806574,
   0.2472629,
   0.3108528,
   0.3614613};
   Double_t _fehx3028[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3028[25] = {
   0,
   2.55757,
   0.5917224,
   0.1725142,
   0.09144249,
   0.07971393,
   0.0749738,
   0.07234886,
   0.06569677,
   0.07256023,
   0.08056924,
   0.08834287,
   0.09280739,
   0.0893697,
   0.104108,
   0.09557813,
   0.1069338,
   0.1817926,
   0.1880302,
   0.1681128,
   0.2270831,
   0.1630808,
   0.2195262,
   0.2500637,
   0.3209144};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1980);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
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
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",25,0,1800);

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
