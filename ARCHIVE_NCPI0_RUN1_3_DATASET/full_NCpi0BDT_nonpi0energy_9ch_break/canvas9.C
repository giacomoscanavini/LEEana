#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sun Jun  5 00:41:49 2022) by ROOT version 6.26/00
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
   pad1->Range(-153.8462,-1.706605,1128.205,188.7146);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hmc__25->SetBinContent(0,2.0999);
   hmc__25->SetBinContent(1,18.02829);
   hmc__25->SetBinContent(2,68.49707);
   hmc__25->SetBinContent(3,83.70084);
   hmc__25->SetBinContent(4,79.35387);
   hmc__25->SetBinContent(5,85.33024);
   hmc__25->SetBinContent(6,69.82298);
   hmc__25->SetBinContent(7,62.86443);
   hmc__25->SetBinContent(8,47.32483);
   hmc__25->SetBinContent(9,42.98923);
   hmc__25->SetBinContent(10,30.2497);
   hmc__25->SetBinContent(11,23.6837);
   hmc__25->SetBinContent(12,18.68665);
   hmc__25->SetBinContent(13,13.28725);
   hmc__25->SetBinContent(14,8.413293);
   hmc__25->SetBinContent(15,7.746765);
   hmc__25->SetBinContent(16,38.4069);
   hmc__25->SetBinError(0,0.7449725);
   hmc__25->SetBinError(1,5.037379);
   hmc__25->SetBinError(2,17.05396);
   hmc__25->SetBinError(3,20.91438);
   hmc__25->SetBinError(4,19.77626);
   hmc__25->SetBinError(5,20.9293);
   hmc__25->SetBinError(6,17.59472);
   hmc__25->SetBinError(7,19.02938);
   hmc__25->SetBinError(8,15.79479);
   hmc__25->SetBinError(9,11.75363);
   hmc__25->SetBinError(10,9.649703);
   hmc__25->SetBinError(11,8.849151);
   hmc__25->SetBinError(12,6.947194);
   hmc__25->SetBinError(13,7.560501);
   hmc__25->SetBinError(14,5.101084);
   hmc__25->SetBinError(15,5.542192);
   hmc__25->SetBinError(16,18.53512);
   hmc__25->SetMinimum(-1.706605);
   hmc__25->SetMaximum(179.1935);
   hmc__25->SetEntries(684.3796);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",15,0,1000);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(89.59676);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,1.575002);
   hbadmatch_stack_1->SetBinContent(3,2.406484);
   hbadmatch_stack_1->SetBinContent(4,1.966984);
   hbadmatch_stack_1->SetBinContent(5,3.292692);
   hbadmatch_stack_1->SetBinContent(6,2.585094);
   hbadmatch_stack_1->SetBinContent(7,2.767116);
   hbadmatch_stack_1->SetBinContent(8,2.501304);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(10,1.227897);
   hbadmatch_stack_1->SetBinContent(11,1.072095);
   hbadmatch_stack_1->SetBinContent(12,1.121968);
   hbadmatch_stack_1->SetBinContent(13,0.3934307);
   hbadmatch_stack_1->SetBinContent(14,0.3917402);
   hbadmatch_stack_1->SetBinContent(15,0.5640803);
   hbadmatch_stack_1->SetBinContent(16,1.070405);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.6578873);
   hbadmatch_stack_1->SetBinError(3,0.8390234);
   hbadmatch_stack_1->SetBinError(4,0.6692196);
   hbadmatch_stack_1->SetBinError(5,1.049348);
   hbadmatch_stack_1->SetBinError(6,0.7595106);
   hbadmatch_stack_1->SetBinError(7,0.7801977);
   hbadmatch_stack_1->SetBinError(8,0.8600445);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(10,0.5910164);
   hbadmatch_stack_1->SetBinError(11,0.5551335);
   hbadmatch_stack_1->SetBinError(12,0.5181909);
   hbadmatch_stack_1->SetBinError(13,0.2781975);
   hbadmatch_stack_1->SetBinError(14,0.2770047);
   hbadmatch_stack_1->SetBinError(15,0.4072508);
   hbadmatch_stack_1->SetBinError(16,0.5545368);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1546;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hext_stack_2->SetBinContent(0,0.7309963);
   hext_stack_2->SetBinContent(1,5.781708);
   hext_stack_2->SetBinContent(2,8.056898);
   hext_stack_2->SetBinContent(3,7.650299);
   hext_stack_2->SetBinContent(4,5.687976);
   hext_stack_2->SetBinContent(5,8.783485);
   hext_stack_2->SetBinContent(6,5.993603);
   hext_stack_2->SetBinContent(7,6.855872);
   hext_stack_2->SetBinContent(8,6.463634);
   hext_stack_2->SetBinContent(9,8.325045);
   hext_stack_2->SetBinContent(10,3.647801);
   hext_stack_2->SetBinContent(11,2.827422);
   hext_stack_2->SetBinContent(12,3.297453);
   hext_stack_2->SetBinContent(13,0.6487947);
   hext_stack_2->SetBinContent(14,0.9660115);
   hext_stack_2->SetBinContent(15,2.428004);
   hext_stack_2->SetBinContent(16,10.3205);
   hext_stack_2->SetBinError(0,0.5201503);
   hext_stack_2->SetBinError(1,1.871849);
   hext_stack_2->SetBinError(2,2.091787);
   hext_stack_2->SetBinError(3,2.05189);
   hext_stack_2->SetBinError(4,1.476277);
   hext_stack_2->SetBinError(5,2.123914);
   hext_stack_2->SetBinError(6,1.59747);
   hext_stack_2->SetBinError(7,1.900612);
   hext_stack_2->SetBinError(8,1.744878);
   hext_stack_2->SetBinError(9,1.988024);
   hext_stack_2->SetBinError(10,1.246589);
   hext_stack_2->SetBinError(11,1.193541);
   hext_stack_2->SetBinError(12,1.384641);
   hext_stack_2->SetBinError(13,0.4587671);
   hext_stack_2->SetBinError(14,0.7189592);
   hext_stack_2->SetBinError(15,1.028599);
   hext_stack_2->SetBinError(16,2.305084);
   hext_stack_2->SetEntries(193);

   ci = 1547;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hdirt_stack_3->SetBinContent(1,0.2623434);
   hdirt_stack_3->SetBinContent(2,0.849948);
   hdirt_stack_3->SetBinContent(3,0.5570828);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(5,0.400075);
   hdirt_stack_3->SetBinContent(6,0.5553442);
   hdirt_stack_3->SetBinContent(7,0.7390785);
   hdirt_stack_3->SetBinContent(10,0.5429839);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2623434);
   hdirt_stack_3->SetBinError(2,0.5276757);
   hdirt_stack_3->SetBinError(3,0.4028472);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(5,0.296158);
   hdirt_stack_3->SetBinError(6,0.4372973);
   hdirt_stack_3->SetBinError(7,0.4500095);
   hdirt_stack_3->SetBinError(10,0.4278058);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetEntries(19);

   ci = 1548;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   houtFV_stack_4->SetBinContent(0,0.2153807);
   houtFV_stack_4->SetBinContent(1,4.476596);
   houtFV_stack_4->SetBinContent(2,12.32995);
   houtFV_stack_4->SetBinContent(3,15.27013);
   houtFV_stack_4->SetBinContent(4,14.03557);
   houtFV_stack_4->SetBinContent(5,11.04223);
   houtFV_stack_4->SetBinContent(6,13.7738);
   houtFV_stack_4->SetBinContent(7,11.70867);
   houtFV_stack_4->SetBinContent(8,12.01029);
   houtFV_stack_4->SetBinContent(9,7.67119);
   houtFV_stack_4->SetBinContent(10,4.001457);
   houtFV_stack_4->SetBinContent(11,3.766095);
   houtFV_stack_4->SetBinContent(12,4.012512);
   houtFV_stack_4->SetBinContent(13,1.608988);
   houtFV_stack_4->SetBinContent(14,1.65886);
   houtFV_stack_4->SetBinContent(15,0.9286332);
   houtFV_stack_4->SetBinContent(16,2.7859);
   houtFV_stack_4->SetBinError(0,0.2153807);
   houtFV_stack_4->SetBinError(1,1.139422);
   houtFV_stack_4->SetBinError(2,1.792943);
   houtFV_stack_4->SetBinError(3,1.94931);
   houtFV_stack_4->SetBinError(4,1.838252);
   houtFV_stack_4->SetBinError(5,1.54235);
   houtFV_stack_4->SetBinError(6,1.856371);
   houtFV_stack_4->SetBinError(7,1.697638);
   houtFV_stack_4->SetBinError(8,1.847692);
   houtFV_stack_4->SetBinError(9,1.429993);
   houtFV_stack_4->SetBinError(10,1.038578);
   houtFV_stack_4->SetBinError(11,0.9410676);
   houtFV_stack_4->SetBinError(12,1.079615);
   houtFV_stack_4->SetBinError(13,0.6801404);
   houtFV_stack_4->SetBinError(14,0.650338);
   houtFV_stack_4->SetBinError(15,0.48078);
   houtFV_stack_4->SetBinError(16,0.8327353);
   houtFV_stack_4->SetEntries(520);

   ci = 1549;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1550;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1551;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1673999);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.657324);
   hNCpi0inFVres_stack_7->SetBinContent(2,24.31047);
   hNCpi0inFVres_stack_7->SetBinContent(3,29.74719);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.55267);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.86811);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.69705);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.159369);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.632664);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.410295);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.433132);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.994358);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.882262);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.828126);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.25534);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.390768);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.32559);
   hNCpi0inFVres_stack_7->SetBinError(0,0.06834073);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6778859);
   hNCpi0inFVres_stack_7->SetBinError(2,1.616229);
   hNCpi0inFVres_stack_7->SetBinError(3,1.858982);
   hNCpi0inFVres_stack_7->SetBinError(4,1.558631);
   hNCpi0inFVres_stack_7->SetBinError(5,1.467727);
   hNCpi0inFVres_stack_7->SetBinError(6,1.273721);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9569483);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7392685);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7480353);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7387863);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4173393);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4661653);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5042674);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3831421);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2089417);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4180388);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1552;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.825228);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.324356);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.724502);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.898887);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.723838);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.930428);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.217726);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.840576);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.562576);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.19954);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.5852358);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2926179);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5025361);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.603094);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7499843);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7221355);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6576319);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.843185);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6678116);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6584202);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4616907);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4202823);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4699768);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.381105);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1727406);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.122146);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2820092);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4204368);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1553;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1554;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hCCpi0inFV_stack_11->SetBinContent(0,0.7336084);
   hCCpi0inFV_stack_11->SetBinContent(1,0.7336084);
   hCCpi0inFV_stack_11->SetBinContent(2,4.108989);
   hCCpi0inFV_stack_11->SetBinContent(3,7.725525);
   hCCpi0inFV_stack_11->SetBinContent(4,12.38792);
   hCCpi0inFV_stack_11->SetBinContent(5,18.01281);
   hCCpi0inFV_stack_11->SetBinContent(6,15.99387);
   hCCpi0inFV_stack_11->SetBinContent(7,16.48984);
   hCCpi0inFV_stack_11->SetBinContent(8,11.31444);
   hCCpi0inFV_stack_11->SetBinContent(9,12.84979);
   hCCpi0inFV_stack_11->SetBinContent(10,10.2895);
   hCCpi0inFV_stack_11->SetBinContent(11,9.69273);
   hCCpi0inFV_stack_11->SetBinContent(12,4.999008);
   hCCpi0inFV_stack_11->SetBinContent(13,6.877899);
   hCCpi0inFV_stack_11->SetBinContent(14,2.340906);
   hCCpi0inFV_stack_11->SetBinContent(15,2.539312);
   hCCpi0inFV_stack_11->SetBinContent(16,15.18345);
   hCCpi0inFV_stack_11->SetBinError(0,0.4394482);
   hCCpi0inFV_stack_11->SetBinError(1,0.4394482);
   hCCpi0inFV_stack_11->SetBinError(2,1.040304);
   hCCpi0inFV_stack_11->SetBinError(3,1.344838);
   hCCpi0inFV_stack_11->SetBinError(4,1.823479);
   hCCpi0inFV_stack_11->SetBinError(5,2.168717);
   hCCpi0inFV_stack_11->SetBinError(6,1.973953);
   hCCpi0inFV_stack_11->SetBinError(7,2.038329);
   hCCpi0inFV_stack_11->SetBinError(8,1.607632);
   hCCpi0inFV_stack_11->SetBinError(9,1.81081);
   hCCpi0inFV_stack_11->SetBinError(10,1.679067);
   hCCpi0inFV_stack_11->SetBinError(11,1.574425);
   hCCpi0inFV_stack_11->SetBinError(12,1.124244);
   hCCpi0inFV_stack_11->SetBinError(13,1.32286);
   hCCpi0inFV_stack_11->SetBinError(14,0.8093475);
   hCCpi0inFV_stack_11->SetBinError(15,0.8333082);
   hCCpi0inFV_stack_11->SetBinError(16,1.967253);
   hCCpi0inFV_stack_11->SetEntries(647);

   ci = 1556;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs9->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hNCinFV_stack_12->SetBinContent(1,0.3934307);
   hNCinFV_stack_12->SetBinContent(2,1.662242);
   hNCinFV_stack_12->SetBinContent(3,3.269539);
   hNCinFV_stack_12->SetBinContent(4,2.300569);
   hNCinFV_stack_12->SetBinContent(5,1.318683);
   hNCinFV_stack_12->SetBinContent(6,1.073786);
   hNCinFV_stack_12->SetBinContent(7,1.270501);
   hNCinFV_stack_12->SetBinContent(8,1.176911);
   hNCinFV_stack_12->SetBinContent(9,0.7302274);
   hNCinFV_stack_12->SetBinContent(10,0.3917402);
   hNCinFV_stack_12->SetBinContent(11,0.536893);
   hNCinFV_stack_12->SetBinContent(13,0.3871285);
   hNCinFV_stack_12->SetBinContent(14,1.020533);
   hNCinFV_stack_12->SetBinContent(16,1.073786);
   hNCinFV_stack_12->SetBinError(1,0.2781975);
   hNCinFV_stack_12->SetBinError(2,0.6513556);
   hNCinFV_stack_12->SetBinError(3,0.9413781);
   hNCinFV_stack_12->SetBinError(4,0.7071359);
   hNCinFV_stack_12->SetBinError(5,0.5542732);
   hNCinFV_stack_12->SetBinError(6,0.5557297);
   hNCinFV_stack_12->SetBinError(7,0.5895188);
   hNCinFV_stack_12->SetBinError(8,0.4804759);
   hNCinFV_stack_12->SetBinError(9,0.4379386);
   hNCinFV_stack_12->SetBinError(10,0.2770047);
   hNCinFV_stack_12->SetBinError(11,0.3929602);
   hNCinFV_stack_12->SetBinError(13,0.3434024);
   hNCinFV_stack_12->SetBinError(14,0.5892049);
   hNCinFV_stack_12->SetBinError(16,0.5557297);
   hNCinFV_stack_12->SetEntries(70);

   ci = 1557;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hnumuCCinFV_stack_13->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(1,1.012265);
   hnumuCCinFV_stack_13->SetBinContent(2,10.21019);
   hnumuCCinFV_stack_13->SetBinContent(3,12.33031);
   hnumuCCinFV_stack_13->SetBinContent(4,12.79954);
   hnumuCCinFV_stack_13->SetBinContent(5,14.03149);
   hnumuCCinFV_stack_13->SetBinContent(6,10.90539);
   hnumuCCinFV_stack_13->SetBinContent(7,9.197131);
   hnumuCCinFV_stack_13->SetBinContent(8,5.630132);
   hnumuCCinFV_stack_13->SetBinContent(9,5.400599);
   hnumuCCinFV_stack_13->SetBinContent(10,3.929249);
   hnumuCCinFV_stack_13->SetBinContent(11,2.413738);
   hnumuCCinFV_stack_13->SetBinContent(12,2.482206);
   hnumuCCinFV_stack_13->SetBinContent(13,1.0269);
   hnumuCCinFV_stack_13->SetBinContent(14,0.6404013);
   hnumuCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnumuCCinFV_stack_13->SetBinContent(16,3.553648);
   hnumuCCinFV_stack_13->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(1,0.4687734);
   hnumuCCinFV_stack_13->SetBinError(2,1.729302);
   hnumuCCinFV_stack_13->SetBinError(3,2.372598);
   hnumuCCinFV_stack_13->SetBinError(4,1.961189);
   hnumuCCinFV_stack_13->SetBinError(5,2.402544);
   hnumuCCinFV_stack_13->SetBinError(6,1.882897);
   hnumuCCinFV_stack_13->SetBinError(7,1.869233);
   hnumuCCinFV_stack_13->SetBinError(8,1.196216);
   hnumuCCinFV_stack_13->SetBinError(9,1.498596);
   hnumuCCinFV_stack_13->SetBinError(10,1.018353);
   hnumuCCinFV_stack_13->SetBinError(11,0.8818046);
   hnumuCCinFV_stack_13->SetBinError(12,0.9111847);
   hnumuCCinFV_stack_13->SetBinError(13,0.5242184);
   hnumuCCinFV_stack_13->SetBinError(14,0.3720058);
   hnumuCCinFV_stack_13->SetBinError(15,0.2781975);
   hnumuCCinFV_stack_13->SetBinError(16,1.034184);
   hnumuCCinFV_stack_13->SetEntries(361);

   ci = 1558;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hnueCCinFV_stack_14->SetBinContent(2,0.2331833);
   hnueCCinFV_stack_14->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(4,1.766401);
   hnueCCinFV_stack_14->SetBinContent(5,1.291008);
   hnueCCinFV_stack_14->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(7,0.6212033);
   hnueCCinFV_stack_14->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(11,0.1529246);
   hnueCCinFV_stack_14->SetBinContent(12,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(16,1.352455);
   hnueCCinFV_stack_14->SetBinError(2,0.2331833);
   hnueCCinFV_stack_14->SetBinError(3,0.1967154);
   hnueCCinFV_stack_14->SetBinError(4,1.581964);
   hnueCCinFV_stack_14->SetBinError(5,0.6038505);
   hnueCCinFV_stack_14->SetBinError(6,0.3401776);
   hnueCCinFV_stack_14->SetBinError(7,0.4587285);
   hnueCCinFV_stack_14->SetBinError(8,0.1967154);
   hnueCCinFV_stack_14->SetBinError(9,0.1967154);
   hnueCCinFV_stack_14->SetBinError(11,0.1529246);
   hnueCCinFV_stack_14->SetBinError(12,0.2502081);
   hnueCCinFV_stack_14->SetBinError(16,1.173746);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1559;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnueCCinFV_stack_14,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);
   hmcerror__26->SetBinContent(0,2.0999);
   hmcerror__26->SetBinContent(1,18.02829);
   hmcerror__26->SetBinContent(2,68.49707);
   hmcerror__26->SetBinContent(3,83.70084);
   hmcerror__26->SetBinContent(4,79.35387);
   hmcerror__26->SetBinContent(5,85.33024);
   hmcerror__26->SetBinContent(6,69.82298);
   hmcerror__26->SetBinContent(7,62.86443);
   hmcerror__26->SetBinContent(8,47.32483);
   hmcerror__26->SetBinContent(9,42.98923);
   hmcerror__26->SetBinContent(10,30.2497);
   hmcerror__26->SetBinContent(11,23.6837);
   hmcerror__26->SetBinContent(12,18.68665);
   hmcerror__26->SetBinContent(13,13.28725);
   hmcerror__26->SetBinContent(14,8.413293);
   hmcerror__26->SetBinContent(15,7.746765);
   hmcerror__26->SetBinContent(16,38.4069);
   hmcerror__26->SetBinError(0,0.7449725);
   hmcerror__26->SetBinError(1,5.037379);
   hmcerror__26->SetBinError(2,17.05396);
   hmcerror__26->SetBinError(3,20.91438);
   hmcerror__26->SetBinError(4,19.77626);
   hmcerror__26->SetBinError(5,20.9293);
   hmcerror__26->SetBinError(6,17.59472);
   hmcerror__26->SetBinError(7,19.02938);
   hmcerror__26->SetBinError(8,15.79479);
   hmcerror__26->SetBinError(9,11.75363);
   hmcerror__26->SetBinError(10,9.649703);
   hmcerror__26->SetBinError(11,8.849151);
   hmcerror__26->SetBinError(12,6.947194);
   hmcerror__26->SetBinError(13,7.560501);
   hmcerror__26->SetBinError(14,5.101084);
   hmcerror__26->SetBinError(15,5.542192);
   hmcerror__26->SetBinError(16,18.53512);
   hmcerror__26->SetEntries(684.3796);

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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3033[15] = {
   16,
   55,
   78,
   79,
   85,
   47,
   58,
   38,
   23,
   27,
   24,
   9,
   8,
   9,
   6};
   Double_t _felx3033[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3033[15] = {
   4.1628,
   7.546,
   8.9562,
   9.0124,
   9.3428,
   6.9882,
   7.7446,
   6.3013,
   4.9457,
   5.3414,
   5.0476,
   3.19354,
   3.0307,
   3.19354,
   2.67925};
   Double_t _fehx3033[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3033[15] = {
   3.9454,
   7.3425,
   8.7542,
   8.8105,
   9.1411,
   6.7839,
   7.5415,
   6.0955,
   4.7346,
   5.1322,
   4.837,
   2.9582,
   2.7896,
   2.9582,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1100);
   Graph_Graph3033->SetMinimum(2.988675);
   Graph_Graph3033->SetMaximum(103.2231);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.9/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 562.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 22.6","F");

   ci = 1546;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 77.4","F");

   ci = 1547;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.4","F");

   ci = 1548;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 118.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1550;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1551;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  149.8","F");

   ci = 1552;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  35.3","F");

   ci = 1553;
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

   ci = 1554;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 136.4","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 15.5","F");

   ci = 1557;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 92.4","F");

   ci = 1558;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 5.2","F");

   ci = 1559;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
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
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3034[15] = {
   0.2794153,
   0.2489735,
   0.2498706,
   0.2492161,
   0.2452741,
   0.2519903,
   0.302705,
   0.3337527,
   0.2734087,
   0.3190016,
   0.3736389,
   0.371773,
   0.569004,
   0.6063124,
   0.7154202};
   Double_t _fehx3034[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3034[15] = {
   0.2794153,
   0.2489735,
   0.2498706,
   0.2492161,
   0.2452741,
   0.2519903,
   0.302705,
   0.3337527,
   0.2734087,
   0.3190016,
   0.3736389,
   0.371773,
   0.569004,
   0.6063124,
   0.7154202};
   grae = new TGraphAsymmErrors(15,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1100);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Pred");
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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
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
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3035[15] = {
   0.1989101,
   0.2056794,
   0.2161571,
   0.2038687,
   0.2062353,
   0.2015393,
   0.1970513,
   0.1931524,
   0.2073912,
   0.2240448,
   0.2374121,
   0.2347727,
   0.2954696,
   0.3355717,
   0.2945022};
   Double_t _fehx3035[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3035[15] = {
   0.1989101,
   0.2056794,
   0.2161571,
   0.2038687,
   0.2062353,
   0.2015393,
   0.1970513,
   0.1931524,
   0.2073912,
   0.2240448,
   0.2374121,
   0.2347727,
   0.2954696,
   0.3355717,
   0.2945022};
   grae = new TGraphAsymmErrors(15,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1100);
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
   33.33333,
   100,
   166.6667,
   233.3333,
   300,
   366.6667,
   433.3333,
   500,
   566.6667,
   633.3333,
   700,
   766.6667,
   833.3333,
   900,
   966.6667};
   Double_t _fy3036[15] = {
   0.8874942,
   0.802954,
   0.9318903,
   0.9955406,
   0.9961299,
   0.6731309,
   0.9226203,
   0.8029611,
   0.5350178,
   0.8925707,
   1.013355,
   0.4816272,
   0.6020807,
   1.069736,
   0.7745169};
   Double_t _felx3036[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fely3036[15] = {
   0.2309038,
   0.1101653,
   0.1070025,
   0.1135723,
   0.1094899,
   0.1000845,
   0.1231953,
   0.13315,
   0.1150451,
   0.1765769,
   0.2131255,
   0.1708995,
   0.2280908,
   0.3795826,
   0.3458541};
   Double_t _fehx3036[15] = {
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333,
   33.33333};
   Double_t _fehy3036[15] = {
   0.218845,
   0.1071944,
   0.1045892,
   0.111028,
   0.1071262,
   0.09715856,
   0.1199645,
   0.1288013,
   0.1101346,
   0.1696612,
   0.2042333,
   0.1583055,
   0.2099456,
   0.3516102,
   0.3122052};
   grae = new TGraphAsymmErrors(15,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1100);
   Graph_Graph3036->SetMinimum(0.1996658);
   Graph_Graph3036->SetMaximum(1.532408);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_nonpi0_energy_all",15,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
