#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 22:15:18 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-1.307692,-4.632666,1.25641,512.2753);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hmc__19->SetBinContent(1,11.13675);
   hmc__19->SetBinContent(2,13.60568);
   hmc__19->SetBinContent(3,17.46327);
   hmc__19->SetBinContent(4,17.72833);
   hmc__19->SetBinContent(5,21.22096);
   hmc__19->SetBinContent(6,21.93534);
   hmc__19->SetBinContent(7,25.39618);
   hmc__19->SetBinContent(8,27.21523);
   hmc__19->SetBinContent(9,26.07395);
   hmc__19->SetBinContent(10,32.86802);
   hmc__19->SetBinContent(11,33.86012);
   hmc__19->SetBinContent(12,37.9026);
   hmc__19->SetBinContent(13,52.9101);
   hmc__19->SetBinContent(14,55.5681);
   hmc__19->SetBinContent(15,53.43824);
   hmc__19->SetBinContent(16,64.67004);
   hmc__19->SetBinContent(17,76.12344);
   hmc__19->SetBinContent(18,77.183);
   hmc__19->SetBinContent(19,89.66282);
   hmc__19->SetBinContent(20,103.5452);
   hmc__19->SetBinContent(21,122.5691);
   hmc__19->SetBinContent(22,139.6934);
   hmc__19->SetBinContent(23,179.3237);
   hmc__19->SetBinContent(24,231.6333);
   hmc__19->SetBinContent(25,227.9826);
   hmc__19->SetBinError(1,3.68637);
   hmc__19->SetBinError(2,5.329568);
   hmc__19->SetBinError(3,5.941272);
   hmc__19->SetBinError(4,5.870763);
   hmc__19->SetBinError(5,7.302307);
   hmc__19->SetBinError(6,6.690213);
   hmc__19->SetBinError(7,7.444995);
   hmc__19->SetBinError(8,7.508671);
   hmc__19->SetBinError(9,7.820465);
   hmc__19->SetBinError(10,10.96475);
   hmc__19->SetBinError(11,9.296128);
   hmc__19->SetBinError(12,11.53195);
   hmc__19->SetBinError(13,15.22869);
   hmc__19->SetBinError(14,16.86319);
   hmc__19->SetBinError(15,13.74978);
   hmc__19->SetBinError(16,18.61108);
   hmc__19->SetBinError(17,20.96265);
   hmc__19->SetBinError(18,18.69224);
   hmc__19->SetBinError(19,21.64032);
   hmc__19->SetBinError(20,25.35074);
   hmc__19->SetBinError(21,31.50169);
   hmc__19->SetBinError(22,32.27196);
   hmc__19->SetBinError(23,43.23947);
   hmc__19->SetBinError(24,55.04862);
   hmc__19->SetBinError(25,58.2765);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-4.632666);
   hmc__19->SetMaximum(486.4299);
   hmc__19->SetEntries(1759.741);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-1,1);
   hs7_stack_7->SetMinimum(-1.427841e-08);
   hs7_stack_7->SetMaximum(243.215);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(10,0.4386579);
   hbadmatch_stack_1->SetBinContent(11,0.2112621);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.4433452);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.7336084);
   hbadmatch_stack_1->SetBinContent(20,0.5738525);
   hbadmatch_stack_1->SetBinContent(21,1.610679);
   hbadmatch_stack_1->SetBinContent(22,0.9123542);
   hbadmatch_stack_1->SetBinContent(23,1.962204);
   hbadmatch_stack_1->SetBinContent(24,1.763676);
   hbadmatch_stack_1->SetBinContent(25,0.8770706);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(10,0.3118223);
   hbadmatch_stack_1->SetBinError(11,0.211233);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.3157494);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.4394482);
   hbadmatch_stack_1->SetBinError(20,0.4127042);
   hbadmatch_stack_1->SetBinError(21,0.6806271);
   hbadmatch_stack_1->SetBinError(22,0.5341022);
   hbadmatch_stack_1->SetBinError(23,0.7951451);
   hbadmatch_stack_1->SetBinError(24,0.5878975);
   hbadmatch_stack_1->SetBinError(25,0.5197486);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(8,2.566457);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(11,0.6487947);
   hext_stack_2->SetBinContent(13,1.461993);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.6487947);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,2.890854);
   hext_stack_2->SetBinContent(18,0.6416141);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(23,0.7309963);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(8,1.283228);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(11,0.4587671);
   hext_stack_2->SetBinError(13,0.7356036);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.4587671);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,1.323597);
   hext_stack_2->SetBinError(18,0.6416141);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(23,0.5201503);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(6,0.2552519);
   houtFV_stack_4->SetBinContent(10,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.1950248);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.8753801);
   houtFV_stack_4->SetBinContent(25,1.072095);
   houtFV_stack_4->SetBinError(6,0.255252);
   houtFV_stack_4->SetBinError(10,0.1950249);
   houtFV_stack_4->SetBinError(21,0.3921167);
   houtFV_stack_4->SetBinError(22,0.1950249);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.5191111);
   houtFV_stack_4->SetBinError(25,0.5551335);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.1509538);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1144496);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.1762515);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.2527035);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.4964134);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.6228522);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.489501);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.8911436);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.6330656);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.156659);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4114107);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.9337788);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.9824804);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.9093826);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.246822);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.060827);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4991637);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.054399);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.10885);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.798081);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.848204);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.25812);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.127516);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.757288);
   hNCpi0inFVres_stack_7->SetBinContent(25,5.447282);
   hNCpi0inFVres_stack_7->SetBinError(1,0.1198705);
   hNCpi0inFVres_stack_7->SetBinError(2,0.08491415);
   hNCpi0inFVres_stack_7->SetBinError(3,0.08615375);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1012755);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2009196);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2449139);
   hNCpi0inFVres_stack_7->SetBinError(7,0.2760786);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3307745);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2496488);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4456114);
   hNCpi0inFVres_stack_7->SetBinError(11,0.129119);
   hNCpi0inFVres_stack_7->SetBinError(12,0.355316);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2939439);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3516957);
   hNCpi0inFVres_stack_7->SetBinError(15,0.42206);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2955511);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1422715);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2377737);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2868627);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4373137);
   hNCpi0inFVres_stack_7->SetBinError(21,0.356151);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4975622);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7181491);
   hNCpi0inFVres_stack_7->SetBinError(24,1.111868);
   hNCpi0inFVres_stack_7->SetBinError(25,1.01987);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.2971034);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2334729);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3554705);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8001583);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3536356);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3499995);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6524441);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.04915749);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1378213);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3320703);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6016443);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.7628379);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.083076);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7560996);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.912611);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.3660209);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5612959);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.8094983);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8619967);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.776687);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.94006);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.29872);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.61372);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.111475);
   hNCpi0inFVdis_stack_8->SetBinContent(25,6.1202);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.128938);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1135165);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2068381);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3369245);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.151613);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.143994);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2807046);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.02841754);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.0686846);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1705194);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1884464);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.331471);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3870113);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2926533);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7965621);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1251099);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1726107);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2680656);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3058556);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4977847);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.568179);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4997521);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5426403);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6609006);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.956343);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,6.323858);
   hCCpi0inFV_stack_10->SetBinContent(2,9.427006);
   hCCpi0inFV_stack_10->SetBinContent(3,13.71984);
   hCCpi0inFV_stack_10->SetBinContent(4,14.60397);
   hCCpi0inFV_stack_10->SetBinContent(5,16.5502);
   hCCpi0inFV_stack_10->SetBinContent(6,17.45338);
   hCCpi0inFV_stack_10->SetBinContent(7,19.36132);
   hCCpi0inFV_stack_10->SetBinContent(8,19.68382);
   hCCpi0inFV_stack_10->SetBinContent(9,22.02492);
   hCCpi0inFV_stack_10->SetBinContent(10,24.68738);
   hCCpi0inFV_stack_10->SetBinContent(11,26.53501);
   hCCpi0inFV_stack_10->SetBinContent(12,30.33608);
   hCCpi0inFV_stack_10->SetBinContent(13,40.23706);
   hCCpi0inFV_stack_10->SetBinContent(14,46.44523);
   hCCpi0inFV_stack_10->SetBinContent(15,42.99318);
   hCCpi0inFV_stack_10->SetBinContent(16,55.03909);
   hCCpi0inFV_stack_10->SetBinContent(17,62.5162);
   hCCpi0inFV_stack_10->SetBinContent(18,62.70087);
   hCCpi0inFV_stack_10->SetBinContent(19,74.9425);
   hCCpi0inFV_stack_10->SetBinContent(20,86.64543);
   hCCpi0inFV_stack_10->SetBinContent(21,103.1297);
   hCCpi0inFV_stack_10->SetBinContent(22,116.271);
   hCCpi0inFV_stack_10->SetBinContent(23,147.4933);
   hCCpi0inFV_stack_10->SetBinContent(24,190.6678);
   hCCpi0inFV_stack_10->SetBinContent(25,188.5086);
   hCCpi0inFV_stack_10->SetBinError(1,1.2926);
   hCCpi0inFV_stack_10->SetBinError(2,1.563637);
   hCCpi0inFV_stack_10->SetBinError(3,1.923014);
   hCCpi0inFV_stack_10->SetBinError(4,1.902728);
   hCCpi0inFV_stack_10->SetBinError(5,2.082089);
   hCCpi0inFV_stack_10->SetBinError(6,2.081207);
   hCCpi0inFV_stack_10->SetBinError(7,2.28227);
   hCCpi0inFV_stack_10->SetBinError(8,2.241305);
   hCCpi0inFV_stack_10->SetBinError(9,2.373608);
   hCCpi0inFV_stack_10->SetBinError(10,2.427427);
   hCCpi0inFV_stack_10->SetBinError(11,2.575489);
   hCCpi0inFV_stack_10->SetBinError(12,2.768742);
   hCCpi0inFV_stack_10->SetBinError(13,3.165673);
   hCCpi0inFV_stack_10->SetBinError(14,3.458428);
   hCCpi0inFV_stack_10->SetBinError(15,3.313122);
   hCCpi0inFV_stack_10->SetBinError(16,3.756688);
   hCCpi0inFV_stack_10->SetBinError(17,3.982676);
   hCCpi0inFV_stack_10->SetBinError(18,3.943797);
   hCCpi0inFV_stack_10->SetBinError(19,4.309643);
   hCCpi0inFV_stack_10->SetBinError(20,4.674227);
   hCCpi0inFV_stack_10->SetBinError(21,5.055601);
   hCCpi0inFV_stack_10->SetBinError(22,5.374915);
   hCCpi0inFV_stack_10->SetBinError(23,6.099628);
   hCCpi0inFV_stack_10->SetBinError(24,6.96271);
   hCCpi0inFV_stack_10->SetBinError(25,6.885814);
   hCCpi0inFV_stack_10->SetEntries(6147);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,0.1967154);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(7,0.3917402);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.3934307);
   hNCinFV_stack_11->SetBinContent(11,1.072095);
   hNCinFV_stack_11->SetBinContent(12,0.3934307);
   hNCinFV_stack_11->SetBinContent(13,1.268811);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,1.072095);
   hNCinFV_stack_11->SetBinContent(19,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,0.7319179);
   hNCinFV_stack_11->SetBinContent(21,0.8770706);
   hNCinFV_stack_11->SetBinContent(22,1.662242);
   hNCinFV_stack_11->SetBinContent(23,2.053982);
   hNCinFV_stack_11->SetBinContent(24,3.512746);
   hNCinFV_stack_11->SetBinContent(25,1.322064);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.1967154);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(7,0.2770047);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.2781975);
   hNCinFV_stack_11->SetBinError(11,0.5551335);
   hNCinFV_stack_11->SetBinError(12,0.2781975);
   hNCinFV_stack_11->SetBinError(13,0.5889569);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.5551335);
   hNCinFV_stack_11->SetBinError(19,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.438694);
   hNCinFV_stack_11->SetBinError(21,0.5197486);
   hNCinFV_stack_11->SetBinError(22,0.6513556);
   hNCinFV_stack_11->SetBinError(23,0.7078105);
   hNCinFV_stack_11->SetBinError(24,0.9401669);
   hNCinFV_stack_11->SetBinError(25,0.5554667);
   hNCinFV_stack_11->SetEntries(73);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,4.168125);
   hnumuCCinFV_stack_12->SetBinContent(2,3.506352);
   hnumuCCinFV_stack_12->SetBinContent(3,3.211711);
   hnumuCCinFV_stack_12->SetBinContent(4,1.874787);
   hnumuCCinFV_stack_12->SetBinContent(5,3.428974);
   hnumuCCinFV_stack_12->SetBinContent(6,2.913674);
   hnumuCCinFV_stack_12->SetBinContent(7,4.107748);
   hnumuCCinFV_stack_12->SetBinContent(8,3.684476);
   hnumuCCinFV_stack_12->SetBinContent(9,3.278148);
   hnumuCCinFV_stack_12->SetBinContent(10,5.340389);
   hnumuCCinFV_stack_12->SetBinContent(11,4.379904);
   hnumuCCinFV_stack_12->SetBinContent(12,4.839108);
   hnumuCCinFV_stack_12->SetBinContent(13,7.876674);
   hnumuCCinFV_stack_12->SetBinContent(14,6.255925);
   hnumuCCinFV_stack_12->SetBinContent(15,6.636832);
   hnumuCCinFV_stack_12->SetBinContent(16,7.065594);
   hnumuCCinFV_stack_12->SetBinContent(17,9.015869);
   hnumuCCinFV_stack_12->SetBinContent(18,10.36762);
   hnumuCCinFV_stack_12->SetBinContent(19,10.80029);
   hnumuCCinFV_stack_12->SetBinContent(20,11.59955);
   hnumuCCinFV_stack_12->SetBinContent(21,11.55701);
   hnumuCCinFV_stack_12->SetBinContent(22,15.10694);
   hnumuCCinFV_stack_12->SetBinContent(23,20.14527);
   hnumuCCinFV_stack_12->SetBinContent(24,23.03207);
   hnumuCCinFV_stack_12->SetBinContent(25,23.97069);
   hnumuCCinFV_stack_12->SetBinError(1,1.088093);
   hnumuCCinFV_stack_12->SetBinError(2,0.9233275);
   hnumuCCinFV_stack_12->SetBinError(3,1.016957);
   hnumuCCinFV_stack_12->SetBinError(4,0.6870016);
   hnumuCCinFV_stack_12->SetBinError(5,1.003303);
   hnumuCCinFV_stack_12->SetBinError(6,0.8291452);
   hnumuCCinFV_stack_12->SetBinError(7,1.069784);
   hnumuCCinFV_stack_12->SetBinError(8,1.002023);
   hnumuCCinFV_stack_12->SetBinError(9,0.914067);
   hnumuCCinFV_stack_12->SetBinError(10,1.198053);
   hnumuCCinFV_stack_12->SetBinError(11,1.08014);
   hnumuCCinFV_stack_12->SetBinError(12,1.111309);
   hnumuCCinFV_stack_12->SetBinError(13,1.784014);
   hnumuCCinFV_stack_12->SetBinError(14,1.327387);
   hnumuCCinFV_stack_12->SetBinError(15,1.45103);
   hnumuCCinFV_stack_12->SetBinError(16,1.335808);
   hnumuCCinFV_stack_12->SetBinError(17,1.552093);
   hnumuCCinFV_stack_12->SetBinError(18,1.674895);
   hnumuCCinFV_stack_12->SetBinError(19,1.676616);
   hnumuCCinFV_stack_12->SetBinError(20,1.693523);
   hnumuCCinFV_stack_12->SetBinError(21,1.775017);
   hnumuCCinFV_stack_12->SetBinError(22,1.950625);
   hnumuCCinFV_stack_12->SetBinError(23,2.268054);
   hnumuCCinFV_stack_12->SetBinError(24,2.399119);
   hnumuCCinFV_stack_12->SetBinError(25,2.552291);
   hnumuCCinFV_stack_12->SetEntries(885);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.2770047);
   hnueCCinFV_stack_13->SetBinError(19,0.3921167);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.3397478);
   hnueCCinFV_stack_13->SetBinError(25,0.3401776);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);
   hmcerror__20->SetBinContent(1,11.13675);
   hmcerror__20->SetBinContent(2,13.60568);
   hmcerror__20->SetBinContent(3,17.46327);
   hmcerror__20->SetBinContent(4,17.72833);
   hmcerror__20->SetBinContent(5,21.22096);
   hmcerror__20->SetBinContent(6,21.93534);
   hmcerror__20->SetBinContent(7,25.39618);
   hmcerror__20->SetBinContent(8,27.21523);
   hmcerror__20->SetBinContent(9,26.07395);
   hmcerror__20->SetBinContent(10,32.86802);
   hmcerror__20->SetBinContent(11,33.86012);
   hmcerror__20->SetBinContent(12,37.9026);
   hmcerror__20->SetBinContent(13,52.9101);
   hmcerror__20->SetBinContent(14,55.5681);
   hmcerror__20->SetBinContent(15,53.43824);
   hmcerror__20->SetBinContent(16,64.67004);
   hmcerror__20->SetBinContent(17,76.12344);
   hmcerror__20->SetBinContent(18,77.183);
   hmcerror__20->SetBinContent(19,89.66282);
   hmcerror__20->SetBinContent(20,103.5452);
   hmcerror__20->SetBinContent(21,122.5691);
   hmcerror__20->SetBinContent(22,139.6934);
   hmcerror__20->SetBinContent(23,179.3237);
   hmcerror__20->SetBinContent(24,231.6333);
   hmcerror__20->SetBinContent(25,227.9826);
   hmcerror__20->SetBinError(1,3.68637);
   hmcerror__20->SetBinError(2,5.329568);
   hmcerror__20->SetBinError(3,5.941272);
   hmcerror__20->SetBinError(4,5.870763);
   hmcerror__20->SetBinError(5,7.302307);
   hmcerror__20->SetBinError(6,6.690213);
   hmcerror__20->SetBinError(7,7.444995);
   hmcerror__20->SetBinError(8,7.508671);
   hmcerror__20->SetBinError(9,7.820465);
   hmcerror__20->SetBinError(10,10.96475);
   hmcerror__20->SetBinError(11,9.296128);
   hmcerror__20->SetBinError(12,11.53195);
   hmcerror__20->SetBinError(13,15.22869);
   hmcerror__20->SetBinError(14,16.86319);
   hmcerror__20->SetBinError(15,13.74978);
   hmcerror__20->SetBinError(16,18.61108);
   hmcerror__20->SetBinError(17,20.96265);
   hmcerror__20->SetBinError(18,18.69224);
   hmcerror__20->SetBinError(19,21.64032);
   hmcerror__20->SetBinError(20,25.35074);
   hmcerror__20->SetBinError(21,31.50169);
   hmcerror__20->SetBinError(22,32.27196);
   hmcerror__20->SetBinError(23,43.23947);
   hmcerror__20->SetBinError(24,55.04862);
   hmcerror__20->SetBinError(25,58.2765);
   hmcerror__20->SetBinError(26,0.3895343);
   hmcerror__20->SetEntries(1759.741);

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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3025[25] = {
   12,
   7,
   22,
   22,
   16,
   15,
   30,
   27,
   40,
   25,
   45,
   38,
   59,
   37,
   67,
   76,
   63,
   67,
   72,
   107,
   115,
   125,
   138,
   176,
   138};
   Double_t _felx3025[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3025[25] = {
   3.64022,
   2.85954,
   4.8417,
   4.8417,
   4.1628,
   4.0385,
   5.6197,
   5.3414,
   6.4604,
   5.1474,
   6.8416,
   6.3013,
   7.8097,
   6.2203,
   8.3119,
   8.8425,
   8.0648,
   8.3119,
   8.6108,
   10.34408,
   10.72381,
   11.18034,
   11.74734,
   13.2665,
   11.74734};
   Double_t _fehx3025[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3025[25] = {
   3.4155,
   2.61053,
   4.6299,
   4.6299,
   3.9454,
   3.8197,
   5.4117,
   5.1322,
   6.2549,
   4.9374,
   6.637,
   6.0955,
   7.6066,
   6.0141,
   8.1094,
   8.6406,
   7.862,
   8.1094,
   8.4085,
   10.34408,
   10.72381,
   11.18034,
   11.74734,
   13.2665,
   11.74734};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(3.726414);
   Graph_Graph3025->SetMaximum(207.7791);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=37.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1539.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  30.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1438.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 17.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.1","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_muon_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3026[25] = {
   0.3310093,
   0.3917165,
   0.3402152,
   0.3311515,
   0.3441082,
   0.3049971,
   0.2931541,
   0.2758997,
   0.299934,
   0.3335995,
   0.274545,
   0.3042522,
   0.287822,
   0.303469,
   0.2573023,
   0.2877852,
   0.275377,
   0.2421808,
   0.2413523,
   0.2448279,
   0.2570116,
   0.23102,
   0.2411253,
   0.2376542,
   0.2556182};
   Double_t _fehx3026[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3026[25] = {
   0.3310093,
   0.3917165,
   0.3402152,
   0.3311515,
   0.3441082,
   0.3049971,
   0.2931541,
   0.2758997,
   0.299934,
   0.3335995,
   0.274545,
   0.3042522,
   0.287822,
   0.303469,
   0.2573023,
   0.2877852,
   0.275377,
   0.2421808,
   0.2413523,
   0.2448279,
   0.2570116,
   0.23102,
   0.2411253,
   0.2376542,
   0.2556182};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Muon cos #theta");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3027[25] = {
   0.3310093,
   0.3917165,
   0.3402152,
   0.3311515,
   0.3441082,
   0.3049971,
   0.2931541,
   0.2758997,
   0.299934,
   0.3335995,
   0.274545,
   0.3042522,
   0.287822,
   0.303469,
   0.2573023,
   0.2877852,
   0.275377,
   0.2421808,
   0.2413523,
   0.2448279,
   0.2570116,
   0.23102,
   0.2411253,
   0.2376542,
   0.2556182};
   Double_t _fehx3027[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3027[25] = {
   0.3310093,
   0.3917165,
   0.3402152,
   0.3311515,
   0.3441082,
   0.3049971,
   0.2931541,
   0.2758997,
   0.299934,
   0.3335995,
   0.274545,
   0.3042522,
   0.287822,
   0.303469,
   0.2573023,
   0.2877852,
   0.275377,
   0.2421808,
   0.2413523,
   0.2448279,
   0.2570116,
   0.23102,
   0.2411253,
   0.2376542,
   0.2556182};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3028[25] = {
   1.077513,
   0.5144911,
   1.259787,
   1.240951,
   0.7539714,
   0.6838282,
   1.18128,
   0.9920917,
   1.534098,
   0.7606179,
   1.328997,
   1.00257,
   1.115099,
   0.6658496,
   1.253784,
   1.175196,
   0.8276031,
   0.8680668,
   0.8030084,
   1.033365,
   0.938246,
   0.894817,
   0.7695581,
   0.7598217,
   0.6053093};
   Double_t _felx3028[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3028[25] = {
   0.3268654,
   0.2101726,
   0.2772504,
   0.2731052,
   0.1961645,
   0.1841093,
   0.2212813,
   0.1962651,
   0.2477722,
   0.1566082,
   0.2020548,
   0.1662498,
   0.1476032,
   0.1119401,
   0.1555422,
   0.1367325,
   0.1059437,
   0.1076908,
   0.09603535,
   0.09989921,
   0.08749189,
   0.08003486,
   0.06550913,
   0.05727371,
   0.05152735};
   Double_t _fehx3028[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3028[25] = {
   0.3066872,
   0.1918706,
   0.2651221,
   0.2611582,
   0.1859199,
   0.1741346,
   0.2130911,
   0.1885783,
   0.2398908,
   0.150219,
   0.1960123,
   0.1608201,
   0.1437646,
   0.1082294,
   0.1517527,
   0.1336105,
   0.1032796,
   0.1050672,
   0.09377912,
   0.09989921,
   0.08749189,
   0.08003486,
   0.06550913,
   0.05727371,
   0.05152735};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0.1573515);
   Graph_Graph3028->SetMaximum(1.920956);
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
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_muon_costheta_all",25,-1,1);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
