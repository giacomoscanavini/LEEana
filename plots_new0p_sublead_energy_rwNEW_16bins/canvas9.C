#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Thu Mar  9 20:02:47 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",190,172,1200,900);
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
   pad1->Range(-61.53846,-2.094224,451.2821,231.577);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__25->SetBinContent(1,78.80684);
   hmc__25->SetBinContent(2,104.7112);
   hmc__25->SetBinContent(3,99.2121);
   hmc__25->SetBinContent(4,78.8896);
   hmc__25->SetBinContent(5,40.53146);
   hmc__25->SetBinContent(6,28.61916);
   hmc__25->SetBinContent(7,20.31459);
   hmc__25->SetBinContent(8,14.11514);
   hmc__25->SetBinContent(9,5.071635);
   hmc__25->SetBinContent(10,3.457197);
   hmc__25->SetBinContent(11,2.887765);
   hmc__25->SetBinContent(12,0.8336848);
   hmc__25->SetBinContent(13,0.5767256);
   hmc__25->SetBinContent(14,0.2525153);
   hmc__25->SetBinContent(15,0.6803553);
   hmc__25->SetBinContent(16,0.3401776);
   hmc__25->SetBinContent(17,1.235312);
   hmc__25->SetBinError(1,28.05788);
   hmc__25->SetBinError(2,40.40338);
   hmc__25->SetBinError(3,32.51022);
   hmc__25->SetBinError(4,27.27222);
   hmc__25->SetBinError(5,16.36555);
   hmc__25->SetBinError(6,12.65879);
   hmc__25->SetBinError(7,14.82992);
   hmc__25->SetBinError(8,11.16697);
   hmc__25->SetBinError(9,5.190908);
   hmc__25->SetBinError(10,3.926014);
   hmc__25->SetBinError(11,3.561684);
   hmc__25->SetBinError(12,1.756697);
   hmc__25->SetBinError(13,1.423245);
   hmc__25->SetBinError(14,1.055575);
   hmc__25->SetBinError(15,2.037478);
   hmc__25->SetBinError(16,1.06321);
   hmc__25->SetBinError(17,3.416255);
   hmc__25->SetMinimum(-2.094224);
   hmc__25->SetMaximum(219.8935);
   hmc__25->SetEntries(469.1651);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",16,0,400);
   hs9_stack_9->SetMinimum(-1.150846e-08);
   hs9_stack_9->SetMaximum(109.9467);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.341197);
   hbadmatch_stack_1->SetBinContent(2,2.693605);
   hbadmatch_stack_1->SetBinContent(3,4.084548);
   hbadmatch_stack_1->SetBinContent(4,3.675763);
   hbadmatch_stack_1->SetBinContent(5,1.030368);
   hbadmatch_stack_1->SetBinContent(6,0.86612);
   hbadmatch_stack_1->SetBinContent(7,1.465526);
   hbadmatch_stack_1->SetBinContent(8,0.2439841);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.7604235);
   hbadmatch_stack_1->SetBinError(2,0.7986746);
   hbadmatch_stack_1->SetBinError(3,1.103671);
   hbadmatch_stack_1->SetBinError(4,1.051994);
   hbadmatch_stack_1->SetBinError(5,0.4617093);
   hbadmatch_stack_1->SetBinError(6,0.4350298);
   hbadmatch_stack_1->SetBinError(7,0.6209405);
   hbadmatch_stack_1->SetBinError(8,0.2439841);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetEntries(71);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,9.45105);
   hext_stack_2->SetBinContent(2,6.724599);
   hext_stack_2->SetBinContent(3,9.223215);
   hext_stack_2->SetBinContent(4,5.199175);
   hext_stack_2->SetBinContent(5,2.021405);
   hext_stack_2->SetBinContent(6,2.517386);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,0.4065989);
   hext_stack_2->SetBinContent(10,0.6416141);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinError(1,2.110497);
   hext_stack_2->SetBinError(2,1.680019);
   hext_stack_2->SetBinError(3,2.001661);
   hext_stack_2->SetBinError(4,1.397849);
   hext_stack_2->SetBinError(5,0.9448239);
   hext_stack_2->SetBinError(6,0.9575503);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,0.4065989);
   hext_stack_2->SetBinError(10,0.6416141);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetEntries(92);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,1.157314);
   hdirt_stack_3->SetBinContent(2,0.665001);
   hdirt_stack_3->SetBinContent(3,0.140423);
   hdirt_stack_3->SetBinContent(5,0.4149213);
   hdirt_stack_3->SetBinError(1,0.5792373);
   hdirt_stack_3->SetBinError(2,0.3973583);
   hdirt_stack_3->SetBinError(3,0.1380915);
   hdirt_stack_3->SetBinError(5,0.4149213);
   hdirt_stack_3->SetEntries(11);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,14.99774);
   houtFV_stack_4->SetBinContent(2,18.98556);
   houtFV_stack_4->SetBinContent(3,15.61373);
   houtFV_stack_4->SetBinContent(4,10.40099);
   houtFV_stack_4->SetBinContent(5,5.712665);
   houtFV_stack_4->SetBinContent(6,3.891398);
   houtFV_stack_4->SetBinContent(7,4.356811);
   houtFV_stack_4->SetBinContent(8,2.982615);
   houtFV_stack_4->SetBinContent(9,0.8217539);
   houtFV_stack_4->SetBinContent(10,0.5867651);
   houtFV_stack_4->SetBinContent(11,0.3934307);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,1.938571);
   houtFV_stack_4->SetBinError(2,2.184622);
   houtFV_stack_4->SetBinError(3,2.000556);
   houtFV_stack_4->SetBinError(4,1.590193);
   houtFV_stack_4->SetBinError(5,1.151169);
   houtFV_stack_4->SetBinError(6,1.007799);
   houtFV_stack_4->SetBinError(7,1.077878);
   houtFV_stack_4->SetBinError(8,0.8556548);
   houtFV_stack_4->SetBinError(9,0.5115109);
   houtFV_stack_4->SetBinError(10,0.3387718);
   houtFV_stack_4->SetBinError(11,0.2781975);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetEntries(344);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(26);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.94772);
   hNCpi0inFVres_stack_7->SetBinContent(2,22.60972);
   hNCpi0inFVres_stack_7->SetBinContent(3,27.65217);
   hNCpi0inFVres_stack_7->SetBinContent(4,20.9412);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.75034);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.950708);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.126392);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.593884);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.7807039);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.711454);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5862361);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.09731799);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2504359);
   hNCpi0inFVres_stack_7->SetBinError(1,1.115399);
   hNCpi0inFVres_stack_7->SetBinError(2,1.536373);
   hNCpi0inFVres_stack_7->SetBinError(3,1.746591);
   hNCpi0inFVres_stack_7->SetBinError(4,1.518386);
   hNCpi0inFVres_stack_7->SetBinError(5,1.044584);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9618848);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6522831);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5849638);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2608584);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3035023);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2861196);
   hNCpi0inFVres_stack_7->SetBinError(12,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(13,0.097318);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1431726);
   hNCpi0inFVres_stack_7->SetEntries(2042);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.635898);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.554372);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.039218);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.206852);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.732384);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.198708);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.631826);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.445904);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5512213);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.876789);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8568076);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5831307);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5422634);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3549294);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4436346);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2422936);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1994106);
   hNCpi0inFVdis_stack_8->SetEntries(441);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,7.68111);
   hCCpi0inFV_stack_10->SetBinContent(2,19.38757);
   hCCpi0inFV_stack_10->SetBinContent(3,20.19587);
   hCCpi0inFV_stack_10->SetBinContent(4,18.53492);
   hCCpi0inFV_stack_10->SetBinContent(5,10.06438);
   hCCpi0inFV_stack_10->SetBinContent(6,5.732953);
   hCCpi0inFV_stack_10->SetBinContent(7,5.240081);
   hCCpi0inFV_stack_10->SetBinContent(8,2.910356);
   hCCpi0inFV_stack_10->SetBinContent(9,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(10,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(11,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(12,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(13,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(15,0.6803553);
   hCCpi0inFV_stack_10->SetBinContent(17,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(1,1.35478);
   hCCpi0inFV_stack_10->SetBinError(2,2.190419);
   hCCpi0inFV_stack_10->SetBinError(3,2.319625);
   hCCpi0inFV_stack_10->SetBinError(4,2.207185);
   hCCpi0inFV_stack_10->SetBinError(5,1.524654);
   hCCpi0inFV_stack_10->SetBinError(6,1.20906);
   hCCpi0inFV_stack_10->SetBinError(7,1.165081);
   hCCpi0inFV_stack_10->SetBinError(8,0.9073753);
   hCCpi0inFV_stack_10->SetBinError(9,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(10,0.340721);
   hCCpi0inFV_stack_10->SetBinError(11,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(12,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(13,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(15,0.4810838);
   hCCpi0inFV_stack_10->SetBinError(17,0.3401776);
   hCCpi0inFV_stack_10->SetEntries(397);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,2.589184);
   hNCinFV_stack_11->SetBinContent(2,2.644128);
   hNCinFV_stack_11->SetBinContent(3,3.124387);
   hNCinFV_stack_11->SetBinContent(4,5.075243);
   hNCinFV_stack_11->SetBinContent(5,2.589184);
   hNCinFV_stack_11->SetBinContent(6,2.249007);
   hNCinFV_stack_11->SetBinContent(7,1.855576);
   hNCinFV_stack_11->SetBinContent(8,1.465526);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(10,0.3917402);
   hNCinFV_stack_11->SetBinContent(11,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.809167);
   hNCinFV_stack_11->SetBinError(2,0.7855485);
   hNCinFV_stack_11->SetBinError(3,0.89917);
   hNCinFV_stack_11->SetBinError(4,1.177914);
   hNCinFV_stack_11->SetBinError(5,0.809167);
   hNCinFV_stack_11->SetBinError(6,0.7341869);
   hNCinFV_stack_11->SetBinError(7,0.6794384);
   hNCinFV_stack_11->SetBinError(8,0.6209405);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(10,0.2770047);
   hNCinFV_stack_11->SetBinError(11,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetEntries(97);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,23.57091);
   hnumuCCinFV_stack_12->SetBinContent(2,22.90364);
   hnumuCCinFV_stack_12->SetBinContent(3,12.69073);
   hnumuCCinFV_stack_12->SetBinContent(4,11.77176);
   hnumuCCinFV_stack_12->SetBinContent(5,4.819833);
   hnumuCCinFV_stack_12->SetBinContent(6,3.989955);
   hnumuCCinFV_stack_12->SetBinContent(7,1.036751);
   hnumuCCinFV_stack_12->SetBinContent(8,2.968287);
   hnumuCCinFV_stack_12->SetBinContent(9,1.897924);
   hnumuCCinFV_stack_12->SetBinContent(12,0.2305627);
   hnumuCCinFV_stack_12->SetBinContent(13,0.2285828);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(17,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.953812);
   hnumuCCinFV_stack_12->SetBinError(2,3.012395);
   hnumuCCinFV_stack_12->SetBinError(3,1.908252);
   hnumuCCinFV_stack_12->SetBinError(4,1.900085);
   hnumuCCinFV_stack_12->SetBinError(5,1.073466);
   hnumuCCinFV_stack_12->SetBinError(6,1.005858);
   hnumuCCinFV_stack_12->SetBinError(7,0.4666972);
   hnumuCCinFV_stack_12->SetBinError(8,0.9297052);
   hnumuCCinFV_stack_12->SetBinError(9,0.6927827);
   hnumuCCinFV_stack_12->SetBinError(12,0.2305627);
   hnumuCCinFV_stack_12->SetBinError(13,0.2285828);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(17,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(332);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,2.351016);
   hnueCCinFV_stack_13->SetBinContent(2,0.8874944);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.2171002);
   hnueCCinFV_stack_13->SetBinError(1,1.638348);
   hnueCCinFV_stack_13->SetBinError(2,0.5294127);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2171002);
   hnueCCinFV_stack_13->SetEntries(12);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__26->SetBinContent(1,78.80684);
   hmcerror__26->SetBinContent(2,104.7112);
   hmcerror__26->SetBinContent(3,99.2121);
   hmcerror__26->SetBinContent(4,78.8896);
   hmcerror__26->SetBinContent(5,40.53146);
   hmcerror__26->SetBinContent(6,28.61916);
   hmcerror__26->SetBinContent(7,20.31459);
   hmcerror__26->SetBinContent(8,14.11514);
   hmcerror__26->SetBinContent(9,5.071635);
   hmcerror__26->SetBinContent(10,3.457197);
   hmcerror__26->SetBinContent(11,2.887765);
   hmcerror__26->SetBinContent(12,0.8336848);
   hmcerror__26->SetBinContent(13,0.5767256);
   hmcerror__26->SetBinContent(14,0.2525153);
   hmcerror__26->SetBinContent(15,0.6803553);
   hmcerror__26->SetBinContent(16,0.3401776);
   hmcerror__26->SetBinContent(17,1.235312);
   hmcerror__26->SetBinError(1,28.05788);
   hmcerror__26->SetBinError(2,40.40338);
   hmcerror__26->SetBinError(3,32.51022);
   hmcerror__26->SetBinError(4,27.27222);
   hmcerror__26->SetBinError(5,16.36555);
   hmcerror__26->SetBinError(6,12.65879);
   hmcerror__26->SetBinError(7,14.82992);
   hmcerror__26->SetBinError(8,11.16697);
   hmcerror__26->SetBinError(9,5.190908);
   hmcerror__26->SetBinError(10,3.926014);
   hmcerror__26->SetBinError(11,3.561684);
   hmcerror__26->SetBinError(12,1.756697);
   hmcerror__26->SetBinError(13,1.423245);
   hmcerror__26->SetBinError(14,1.055575);
   hmcerror__26->SetBinError(15,2.037478);
   hmcerror__26->SetBinError(16,1.06321);
   hmcerror__26->SetBinError(17,3.416255);
   hmcerror__26->SetEntries(469.1651);

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
   
   Double_t _fx3033[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3033[16] = {
   69,
   98,
   87,
   56,
   37,
   25,
   8,
   5,
   5,
   4,
   0,
   0,
   1,
   1,
   0,
   0};
   Double_t _felx3033[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3033[16] = {
   8.4327,
   10.0209,
   9.4503,
   7.6127,
   6.2203,
   5.1474,
   3.0307,
   2.48995,
   2.48995,
   2.29683,
   0,
   0,
   1,
   1,
   0,
   0};
   Double_t _fehx3033[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3033[16] = {
   8.2304,
   9.82,
   9.2488,
   7.4094,
   6.0141,
   4.9374,
   2.7896,
   2.21064,
   2.21064,
   1.98186,
   1.1478,
   1.1478,
   1.35971,
   1.35971,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,440);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(118.602);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.1/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 396.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  110.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 92.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

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
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3034[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3034[16] = {
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
   Double_t _felx3034[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3034[16] = {
   0.3560336,
   0.3858555,
   0.327684,
   0.3457011,
   0.4037739,
   0.4423189,
   0.7300136,
   0.791134,
   1.023518,
   1.135606,
   1.23337,
   2.107147,
   2.467803,
   4.180239,
   2.994726,
   3.125456};
   Double_t _fehx3034[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3034[16] = {
   0.3560336,
   0.3858555,
   0.327684,
   0.3457011,
   0.4037739,
   0.4423189,
   0.7300136,
   0.791134,
   1.023518,
   1.135606,
   1.23337,
   2.107147,
   2.467803,
   4.180239,
   2.994726,
   3.125456};
   grae = new TGraphAsymmErrors(16,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,440);
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
   
   Double_t _fx3035[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3035[16] = {
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
   Double_t _felx3035[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3035[16] = {
   0.1875691,
   0.2426077,
   0.271915,
   0.2729978,
   0.2966007,
   0.2939567,
   0.3094658,
   0.3136521,
   0.3776047,
   0.4603929,
   0.4343672,
   0.7356656,
   0.886022,
   1.772678,
   1.051452,
   1.75945};
   Double_t _fehx3035[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3035[16] = {
   0.1875691,
   0.2426077,
   0.271915,
   0.2729978,
   0.2966007,
   0.2939567,
   0.3094658,
   0.3136521,
   0.3776047,
   0.4603929,
   0.4343672,
   0.7356656,
   0.886022,
   1.772678,
   1.051452,
   1.75945};
   grae = new TGraphAsymmErrors(16,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,440);
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
   
   Double_t _fx3036[16] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5};
   Double_t _fy3036[16] = {
   0.8755585,
   0.9359077,
   0.8769091,
   0.7098527,
   0.9128711,
   0.8735407,
   0.3938057,
   0.3542296,
   0.9858754,
   1.157007,
   0,
   0,
   1.733927,
   3.960155,
   0,
   0};
   Double_t _felx3036[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3036[16] = {
   0.1070047,
   0.09570038,
   0.0952535,
   0.09649814,
   0.1534684,
   0.1798585,
   0.1491884,
   0.1764028,
   0.4909561,
   0.6643619,
   0,
   0,
   1.733927,
   3.960155,
   0,
   0};
   Double_t _fehx3036[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3036[16] = {
   0.1044376,
   0.09378177,
   0.0932225,
   0.09392112,
   0.148381,
   0.1725208,
   0.13732,
   0.1566148,
   0.4358831,
   0.5732563,
   0.39747,
   1.376779,
   2.357638,
   5.384663,
   1.68706,
   3.37412};
   grae = new TGraphAsymmErrors(16,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,440);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(10.2793);
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
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_energy_low_all",16,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
