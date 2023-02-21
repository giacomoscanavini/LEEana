#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Wed Jun  8 17:52:18 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-13.84,1260.256,1530.413);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__10->SetBinContent(0,424.5027);
   hmc__10->SetBinContent(1,10.78802);
   hmc__10->SetBinContent(2,24.20482);
   hmc__10->SetBinContent(3,66.85218);
   hmc__10->SetBinContent(4,565.6779);
   hmc__10->SetBinContent(5,334.2581);
   hmc__10->SetBinContent(6,208.067);
   hmc__10->SetBinContent(7,260.7189);
   hmc__10->SetBinContent(8,244.5681);
   hmc__10->SetBinContent(9,182.9035);
   hmc__10->SetBinContent(10,167.2962);
   hmc__10->SetBinContent(11,128.4288);
   hmc__10->SetBinContent(12,111.4258);
   hmc__10->SetBinContent(13,79.82877);
   hmc__10->SetBinContent(14,65.52499);
   hmc__10->SetBinContent(15,52.23927);
   hmc__10->SetBinContent(16,38.68917);
   hmc__10->SetBinContent(17,31.48433);
   hmc__10->SetBinContent(18,28.25712);
   hmc__10->SetBinContent(19,23.33107);
   hmc__10->SetBinContent(20,16.62659);
   hmc__10->SetBinContent(21,14.90947);
   hmc__10->SetBinContent(22,10.51719);
   hmc__10->SetBinContent(23,10.52618);
   hmc__10->SetBinContent(24,7.556231);
   hmc__10->SetBinContent(25,6.82228);
   hmc__10->SetBinContent(26,27.00162);
   hmc__10->SetBinError(0,11.2012);
   hmc__10->SetBinError(1,11.30555);
   hmc__10->SetBinError(2,14.68913);
   hmc__10->SetBinError(3,31.80266);
   hmc__10->SetBinError(4,151.9348);
   hmc__10->SetBinError(5,107.9725);
   hmc__10->SetBinError(6,61.72112);
   hmc__10->SetBinError(7,81.08109);
   hmc__10->SetBinError(8,80.91984);
   hmc__10->SetBinError(9,56.04889);
   hmc__10->SetBinError(10,59.93925);
   hmc__10->SetBinError(11,52.16484);
   hmc__10->SetBinError(12,52.91523);
   hmc__10->SetBinError(13,28.83844);
   hmc__10->SetBinError(14,29.45558);
   hmc__10->SetBinError(15,26.80246);
   hmc__10->SetBinError(16,21.76296);
   hmc__10->SetBinError(17,17.13871);
   hmc__10->SetBinError(18,14.6791);
   hmc__10->SetBinError(19,17.52779);
   hmc__10->SetBinError(20,12.39387);
   hmc__10->SetBinError(21,21.63377);
   hmc__10->SetBinError(22,9.278113);
   hmc__10->SetBinError(23,9.881763);
   hmc__10->SetBinError(24,11.90687);
   hmc__10->SetBinError(25,7.749474);
   hmc__10->SetBinError(26,13.69724);
   hmc__10->SetMinimum(-13.84);
   hmc__10->SetMaximum(1453.2);
   hmc__10->SetEntries(3100.979);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-150,1100);
   hs4_stack_4->SetMinimum(-1.348765e-08);
   hs4_stack_4->SetMaximum(593.9618);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,8.425208);
   hbadmatch_stack_1->SetBinContent(1,0.2136185);
   hbadmatch_stack_1->SetBinContent(3,0.4287933);
   hbadmatch_stack_1->SetBinContent(4,2.224982);
   hbadmatch_stack_1->SetBinContent(5,0.785171);
   hbadmatch_stack_1->SetBinContent(6,1.878497);
   hbadmatch_stack_1->SetBinContent(7,0.7663097);
   hbadmatch_stack_1->SetBinContent(8,0.9619707);
   hbadmatch_stack_1->SetBinContent(9,1.006349);
   hbadmatch_stack_1->SetBinContent(10,1.370245);
   hbadmatch_stack_1->SetBinContent(11,0.9303237);
   hbadmatch_stack_1->SetBinContent(12,0.7319179);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(16,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.1950248);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.1967154);
   hbadmatch_stack_1->SetBinError(0,2.704334);
   hbadmatch_stack_1->SetBinError(1,0.2136185);
   hbadmatch_stack_1->SetBinError(3,0.3044378);
   hbadmatch_stack_1->SetBinError(4,0.8169439);
   hbadmatch_stack_1->SetBinError(5,0.3925882);
   hbadmatch_stack_1->SetBinError(6,0.6863165);
   hbadmatch_stack_1->SetBinError(7,0.4550272);
   hbadmatch_stack_1->SetBinError(8,0.4952414);
   hbadmatch_stack_1->SetBinError(9,0.5354211);
   hbadmatch_stack_1->SetBinError(10,0.5179089);
   hbadmatch_stack_1->SetBinError(11,0.4814682);
   hbadmatch_stack_1->SetBinError(12,0.438694);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(16,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.1950249);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.1967154);
   hbadmatch_stack_1->SetEntries(89);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1476;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,49.87247);
   hext_stack_2->SetBinContent(2,1.290409);
   hext_stack_2->SetBinContent(3,1.868591);
   hext_stack_2->SetBinContent(4,6.891774);
   hext_stack_2->SetBinContent(5,9.742316);
   hext_stack_2->SetBinContent(6,3.647801);
   hext_stack_2->SetBinContent(7,8.806664);
   hext_stack_2->SetBinContent(8,5.904221);
   hext_stack_2->SetBinContent(9,6.124875);
   hext_stack_2->SetBinContent(10,6.124875);
   hext_stack_2->SetBinContent(11,1.697008);
   hext_stack_2->SetBinContent(12,3.483397);
   hext_stack_2->SetBinContent(13,1.78639);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,1.048213);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,3.215251);
   hext_stack_2->SetBinError(0,4.877341);
   hext_stack_2->SetBinError(2,0.788756);
   hext_stack_2->SetBinError(3,0.840497);
   hext_stack_2->SetBinError(4,1.61441);
   hext_stack_2->SetBinError(5,2.286725);
   hext_stack_2->SetBinError(6,1.246589);
   hext_stack_2->SetBinError(7,2.09257);
   hext_stack_2->SetBinError(8,1.641043);
   hext_stack_2->SetBinError(9,1.828051);
   hext_stack_2->SetBinError(10,1.828051);
   hext_stack_2->SetBinError(11,0.8873887);
   hext_stack_2->SetBinError(12,1.197416);
   hext_stack_2->SetBinError(13,0.8039566);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.7595995);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.36277);
   hext_stack_2->SetEntries(264);

   ci = 1477;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,3.901196);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.3981555);
   hdirt_stack_3->SetBinContent(5,0.5926407);
   hdirt_stack_3->SetBinContent(6,0.3734822);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,2.407774e-08);
   hdirt_stack_3->SetBinContent(10,0.6009047);
   hdirt_stack_3->SetBinContent(13,0.4045523);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.2574102);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinError(0,1.267936);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(4,0.28293);
   hdirt_stack_3->SetBinError(5,0.4232224);
   hdirt_stack_3->SetBinError(6,0.2679781);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,2.407774e-08);
   hdirt_stack_3->SetBinError(10,0.4402797);
   hdirt_stack_3->SetBinError(13,0.3001263);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(20,0.2574102);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetEntries(36);

   ci = 1478;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,12.90898);
   houtFV_stack_4->SetBinContent(2,0.2269427);
   houtFV_stack_4->SetBinContent(3,1.412273);
   houtFV_stack_4->SetBinContent(4,6.586671);
   houtFV_stack_4->SetBinContent(5,6.122712);
   houtFV_stack_4->SetBinContent(6,1.768053);
   houtFV_stack_4->SetBinContent(7,3.637302);
   houtFV_stack_4->SetBinContent(8,2.578538);
   houtFV_stack_4->SetBinContent(9,2.362184);
   houtFV_stack_4->SetBinContent(10,2.931052);
   houtFV_stack_4->SetBinContent(11,0.5867651);
   houtFV_stack_4->SetBinContent(12,0.7834804);
   houtFV_stack_4->SetBinContent(13,1.735269);
   houtFV_stack_4->SetBinContent(15,0.3917402);
   houtFV_stack_4->SetBinContent(16,0.785171);
   houtFV_stack_4->SetBinContent(18,0.536893);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.1950248);
   houtFV_stack_4->SetBinError(0,1.971608);
   houtFV_stack_4->SetBinError(2,0.2269427);
   houtFV_stack_4->SetBinError(3,0.6510715);
   houtFV_stack_4->SetBinError(4,1.292134);
   houtFV_stack_4->SetBinError(5,1.990114);
   houtFV_stack_4->SetBinError(6,0.6904577);
   houtFV_stack_4->SetBinError(7,0.9374027);
   houtFV_stack_4->SetBinError(8,0.7159119);
   houtFV_stack_4->SetBinError(9,0.7373564);
   houtFV_stack_4->SetBinError(10,0.8781425);
   houtFV_stack_4->SetBinError(11,0.3387718);
   houtFV_stack_4->SetBinError(12,0.3917439);
   houtFV_stack_4->SetBinError(13,0.6800366);
   houtFV_stack_4->SetBinError(15,0.2770047);
   houtFV_stack_4->SetBinError(16,0.3925882);
   houtFV_stack_4->SetBinError(18,0.3929602);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(21,0.1950249);
   houtFV_stack_4->SetEntries(188);

   ci = 1479;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.4744679);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2144572);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(20);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4188362);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.277838);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(7);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,17.9333);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.222536);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.5015358);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.83538);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.078736);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.414938);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.11427);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.447078);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.914898);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.38363);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.575858);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.436358);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.004072);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.031308);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.2510999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.5583361);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.445904);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.125218);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.222536);
   hNCpi0inFVres_stack_7->SetBinError(0,1.403196);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1404279);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1658436);
   hNCpi0inFVres_stack_7->SetBinError(4,1.241561);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7987384);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5773731);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6512382);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6884259);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5582374);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4604946);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4031079);
   hNCpi0inFVres_stack_7->SetBinError(12,0.398251);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3271594);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3482878);
   hNCpi0inFVres_stack_7->SetBinError(15,0.08369995);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2847561);
   hNCpi0inFVres_stack_7->SetBinError(17,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(18,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2422936);
   hNCpi0inFVres_stack_7->SetBinError(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1012383);
   hNCpi0inFVres_stack_7->SetBinError(23,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1404279);
   hNCpi0inFVres_stack_7->SetEntries(1200);

   ci = 1482;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,9.456316);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.702264);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.209924);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.413026);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.84548);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.013048);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.970866);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.077562);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.366108);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.645444);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7949858);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.446568);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6141361);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5304361);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.404386);
   hNCpi0inFVdis_stack_8->SetBinError(0,1.029446);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.030989);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6285297);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4675544);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5503968);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.583409);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5881707);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4719735);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3614489);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4516052);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2483746);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2126346);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2874767);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.283386);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2253713);
   hNCpi0inFVdis_stack_8->SetEntries(844);

   ci = 1483;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1484;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1485;
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
   hs4->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,190.2751);
   hCCpi0inFV_stack_11->SetBinContent(1,3.938368);
   hCCpi0inFV_stack_11->SetBinContent(2,9.674691);
   hCCpi0inFV_stack_11->SetBinContent(3,32.10997);
   hCCpi0inFV_stack_11->SetBinContent(4,413.3558);
   hCCpi0inFV_stack_11->SetBinContent(5,238.175);
   hCCpi0inFV_stack_11->SetBinContent(6,152.1255);
   hCCpi0inFV_stack_11->SetBinContent(7,185.3437);
   hCCpi0inFV_stack_11->SetBinContent(8,181.0747);
   hCCpi0inFV_stack_11->SetBinContent(9,134.1653);
   hCCpi0inFV_stack_11->SetBinContent(10,118.469);
   hCCpi0inFV_stack_11->SetBinContent(11,95.68109);
   hCCpi0inFV_stack_11->SetBinContent(12,77.87361);
   hCCpi0inFV_stack_11->SetBinContent(13,57.01308);
   hCCpi0inFV_stack_11->SetBinContent(14,48.77155);
   hCCpi0inFV_stack_11->SetBinContent(15,35.78409);
   hCCpi0inFV_stack_11->SetBinContent(16,30.79877);
   hCCpi0inFV_stack_11->SetBinContent(17,22.65085);
   hCCpi0inFV_stack_11->SetBinContent(18,20.03962);
   hCCpi0inFV_stack_11->SetBinContent(19,16.499);
   hCCpi0inFV_stack_11->SetBinContent(20,10.36965);
   hCCpi0inFV_stack_11->SetBinContent(21,11.40279);
   hCCpi0inFV_stack_11->SetBinContent(22,6.534007);
   hCCpi0inFV_stack_11->SetBinContent(23,7.669499);
   hCCpi0inFV_stack_11->SetBinContent(24,5.360477);
   hCCpi0inFV_stack_11->SetBinContent(25,4.679784);
   hCCpi0inFV_stack_11->SetBinContent(26,16.85404);
   hCCpi0inFV_stack_11->SetBinError(0,6.829978);
   hCCpi0inFV_stack_11->SetBinError(1,1.030537);
   hCCpi0inFV_stack_11->SetBinError(2,1.54496);
   hCCpi0inFV_stack_11->SetBinError(3,2.80646);
   hCCpi0inFV_stack_11->SetBinError(4,10.28611);
   hCCpi0inFV_stack_11->SetBinError(5,7.719615);
   hCCpi0inFV_stack_11->SetBinError(6,6.221407);
   hCCpi0inFV_stack_11->SetBinError(7,6.781775);
   hCCpi0inFV_stack_11->SetBinError(8,6.740408);
   hCCpi0inFV_stack_11->SetBinError(9,5.800933);
   hCCpi0inFV_stack_11->SetBinError(10,5.389299);
   hCCpi0inFV_stack_11->SetBinError(11,4.87302);
   hCCpi0inFV_stack_11->SetBinError(12,4.480101);
   hCCpi0inFV_stack_11->SetBinError(13,3.771671);
   hCCpi0inFV_stack_11->SetBinError(14,3.52724);
   hCCpi0inFV_stack_11->SetBinError(15,2.98409);
   hCCpi0inFV_stack_11->SetBinError(16,2.798836);
   hCCpi0inFV_stack_11->SetBinError(17,2.423333);
   hCCpi0inFV_stack_11->SetBinError(18,2.241963);
   hCCpi0inFV_stack_11->SetBinError(19,2.076697);
   hCCpi0inFV_stack_11->SetBinError(20,1.557458);
   hCCpi0inFV_stack_11->SetBinError(21,1.691668);
   hCCpi0inFV_stack_11->SetBinError(22,1.330563);
   hCCpi0inFV_stack_11->SetBinError(23,1.429762);
   hCCpi0inFV_stack_11->SetBinError(24,1.241316);
   hCCpi0inFV_stack_11->SetBinError(25,1.087199);
   hCCpi0inFV_stack_11->SetBinError(26,2.055721);
   hCCpi0inFV_stack_11->SetEntries(9097);

   ci = 1486;
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
   hs4->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,10.50189);
   hNCinFV_stack_12->SetBinContent(1,0.3401776);
   hNCinFV_stack_12->SetBinContent(2,0.1967154);
   hNCinFV_stack_12->SetBinContent(4,3.429299);
   hNCinFV_stack_12->SetBinContent(5,1.515398);
   hNCinFV_stack_12->SetBinContent(6,2.055672);
   hNCinFV_stack_12->SetBinContent(7,2.100473);
   hNCinFV_stack_12->SetBinContent(8,1.568651);
   hNCinFV_stack_12->SetBinContent(9,1.805704);
   hNCinFV_stack_12->SetBinContent(10,1.517089);
   hNCinFV_stack_12->SetBinContent(11,0.785171);
   hNCinFV_stack_12->SetBinContent(12,1.413964);
   hNCinFV_stack_12->SetBinContent(13,0.3934307);
   hNCinFV_stack_12->SetBinContent(14,0.9286332);
   hNCinFV_stack_12->SetBinContent(15,0.3934307);
   hNCinFV_stack_12->SetBinContent(17,0.3401776);
   hNCinFV_stack_12->SetBinContent(19,0.536893);
   hNCinFV_stack_12->SetBinContent(26,0.536893);
   hNCinFV_stack_12->SetBinError(0,1.64216);
   hNCinFV_stack_12->SetBinError(1,0.3401776);
   hNCinFV_stack_12->SetBinError(2,0.1967154);
   hNCinFV_stack_12->SetBinError(4,0.8781868);
   hNCinFV_stack_12->SetBinError(5,0.588146);
   hNCinFV_stack_12->SetBinError(6,0.7082781);
   hNCinFV_stack_12->SetBinError(7,0.6782476);
   hNCinFV_stack_12->SetBinError(8,0.5546069);
   hNCinFV_stack_12->SetBinError(9,0.7080169);
   hNCinFV_stack_12->SetBinError(10,0.5887087);
   hNCinFV_stack_12->SetBinError(11,0.3925882);
   hNCinFV_stack_12->SetBinError(12,0.6515799);
   hNCinFV_stack_12->SetBinError(13,0.2781975);
   hNCinFV_stack_12->SetBinError(14,0.48078);
   hNCinFV_stack_12->SetBinError(15,0.2781975);
   hNCinFV_stack_12->SetBinError(17,0.3401776);
   hNCinFV_stack_12->SetBinError(19,0.3929602);
   hNCinFV_stack_12->SetBinError(26,0.3929602);
   hNCinFV_stack_12->SetEntries(132);

   ci = 1487;
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
   hs4->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,118.531);
   hnumuCCinFV_stack_13->SetBinContent(1,6.26796);
   hnumuCCinFV_stack_13->SetBinContent(2,12.28521);
   hnumuCCinFV_stack_13->SetBinContent(3,29.97411);
   hnumuCCinFV_stack_13->SetBinContent(4,106.9675);
   hnumuCCinFV_stack_13->SetBinContent(5,65.54566);
   hnumuCCinFV_stack_13->SetBinContent(6,39.43177);
   hnumuCCinFV_stack_13->SetBinContent(7,51.51738);
   hnumuCCinFV_stack_13->SetBinContent(8,44.61545);
   hnumuCCinFV_stack_13->SetBinContent(9,31.16154);
   hnumuCCinFV_stack_13->SetBinContent(10,31.08997);
   hnumuCCinFV_stack_13->SetBinContent(11,25.58306);
   hnumuCCinFV_stack_13->SetBinContent(12,23.83306);
   hnumuCCinFV_stack_13->SetBinContent(13,15.6232);
   hnumuCCinFV_stack_13->SetBinContent(14,12.05932);
   hnumuCCinFV_stack_13->SetBinContent(15,12.19108);
   hnumuCCinFV_stack_13->SetBinContent(16,5.256229);
   hnumuCCinFV_stack_13->SetBinContent(17,6.643136);
   hnumuCCinFV_stack_13->SetBinContent(18,5.178436);
   hnumuCCinFV_stack_13->SetBinContent(19,4.631814);
   hnumuCCinFV_stack_13->SetBinContent(20,4.309005);
   hnumuCCinFV_stack_13->SetBinContent(21,2.692309);
   hnumuCCinFV_stack_13->SetBinContent(22,3.073481);
   hnumuCCinFV_stack_13->SetBinContent(23,2.576268);
   hnumuCCinFV_stack_13->SetBinContent(24,2.195754);
   hnumuCCinFV_stack_13->SetBinContent(25,1.610679);
   hnumuCCinFV_stack_13->SetBinContent(26,5.034906);
   hnumuCCinFV_stack_13->SetBinError(0,5.992268);
   hnumuCCinFV_stack_13->SetBinError(1,2.312305);
   hnumuCCinFV_stack_13->SetBinError(2,2.258749);
   hnumuCCinFV_stack_13->SetBinError(3,3.577893);
   hnumuCCinFV_stack_13->SetBinError(4,5.679215);
   hnumuCCinFV_stack_13->SetBinError(5,4.196378);
   hnumuCCinFV_stack_13->SetBinError(6,3.230783);
   hnumuCCinFV_stack_13->SetBinError(7,4.782212);
   hnumuCCinFV_stack_13->SetBinError(8,3.363523);
   hnumuCCinFV_stack_13->SetBinError(9,2.902316);
   hnumuCCinFV_stack_13->SetBinError(10,2.962104);
   hnumuCCinFV_stack_13->SetBinError(11,2.57255);
   hnumuCCinFV_stack_13->SetBinError(12,2.499612);
   hnumuCCinFV_stack_13->SetBinError(13,2.02334);
   hnumuCCinFV_stack_13->SetBinError(14,2.139556);
   hnumuCCinFV_stack_13->SetBinError(15,1.772338);
   hnumuCCinFV_stack_13->SetBinError(16,1.069407);
   hnumuCCinFV_stack_13->SetBinError(17,1.27645);
   hnumuCCinFV_stack_13->SetBinError(18,1.171098);
   hnumuCCinFV_stack_13->SetBinError(19,1.083337);
   hnumuCCinFV_stack_13->SetBinError(20,1.051278);
   hnumuCCinFV_stack_13->SetBinError(21,0.7594556);
   hnumuCCinFV_stack_13->SetBinError(22,0.8965626);
   hnumuCCinFV_stack_13->SetBinError(23,0.9209128);
   hnumuCCinFV_stack_13->SetBinError(24,0.7598403);
   hnumuCCinFV_stack_13->SetBinError(25,0.6806271);
   hnumuCCinFV_stack_13->SetBinError(26,1.11017);
   hnumuCCinFV_stack_13->SetEntries(2743);

   ci = 1488;
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
   hs4->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,2.097568);
   hnueCCinFV_stack_14->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(4,0.7834804);
   hnueCCinFV_stack_14->SetBinContent(5,1.26712);
   hnueCCinFV_stack_14->SetBinContent(6,0.9303237);
   hnueCCinFV_stack_14->SetBinContent(7,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(8,0.2384502);
   hnueCCinFV_stack_14->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(10,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,0.536893);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.8753801);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,0.536893);
   hnueCCinFV_stack_14->SetBinError(0,0.7297597);
   hnueCCinFV_stack_14->SetBinError(2,0.1967154);
   hnueCCinFV_stack_14->SetBinError(4,0.3917439);
   hnueCCinFV_stack_14->SetBinError(5,0.5883944);
   hnueCCinFV_stack_14->SetBinError(6,0.4814682);
   hnueCCinFV_stack_14->SetBinError(7,0.3921167);
   hnueCCinFV_stack_14->SetBinError(8,0.2384502);
   hnueCCinFV_stack_14->SetBinError(9,0.2770047);
   hnueCCinFV_stack_14->SetBinError(10,0.438694);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.3929602);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.5191111);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(18,0.1967154);
   hnueCCinFV_stack_14->SetBinError(19,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,0.3929602);
   hnueCCinFV_stack_14->SetEntries(44);

   ci = 1489;
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
   hs4->Add(hnueCCinFV_stack_14,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__11->SetBinContent(0,424.5027);
   hmcerror__11->SetBinContent(1,10.78802);
   hmcerror__11->SetBinContent(2,24.20482);
   hmcerror__11->SetBinContent(3,66.85218);
   hmcerror__11->SetBinContent(4,565.6779);
   hmcerror__11->SetBinContent(5,334.2581);
   hmcerror__11->SetBinContent(6,208.067);
   hmcerror__11->SetBinContent(7,260.7189);
   hmcerror__11->SetBinContent(8,244.5681);
   hmcerror__11->SetBinContent(9,182.9035);
   hmcerror__11->SetBinContent(10,167.2962);
   hmcerror__11->SetBinContent(11,128.4288);
   hmcerror__11->SetBinContent(12,111.4258);
   hmcerror__11->SetBinContent(13,79.82877);
   hmcerror__11->SetBinContent(14,65.52499);
   hmcerror__11->SetBinContent(15,52.23927);
   hmcerror__11->SetBinContent(16,38.68917);
   hmcerror__11->SetBinContent(17,31.48433);
   hmcerror__11->SetBinContent(18,28.25712);
   hmcerror__11->SetBinContent(19,23.33107);
   hmcerror__11->SetBinContent(20,16.62659);
   hmcerror__11->SetBinContent(21,14.90947);
   hmcerror__11->SetBinContent(22,10.51719);
   hmcerror__11->SetBinContent(23,10.52618);
   hmcerror__11->SetBinContent(24,7.556231);
   hmcerror__11->SetBinContent(25,6.82228);
   hmcerror__11->SetBinContent(26,27.00162);
   hmcerror__11->SetBinError(0,11.2012);
   hmcerror__11->SetBinError(1,11.30555);
   hmcerror__11->SetBinError(2,14.68913);
   hmcerror__11->SetBinError(3,31.80266);
   hmcerror__11->SetBinError(4,151.9348);
   hmcerror__11->SetBinError(5,107.9725);
   hmcerror__11->SetBinError(6,61.72112);
   hmcerror__11->SetBinError(7,81.08109);
   hmcerror__11->SetBinError(8,80.91984);
   hmcerror__11->SetBinError(9,56.04889);
   hmcerror__11->SetBinError(10,59.93925);
   hmcerror__11->SetBinError(11,52.16484);
   hmcerror__11->SetBinError(12,52.91523);
   hmcerror__11->SetBinError(13,28.83844);
   hmcerror__11->SetBinError(14,29.45558);
   hmcerror__11->SetBinError(15,26.80246);
   hmcerror__11->SetBinError(16,21.76296);
   hmcerror__11->SetBinError(17,17.13871);
   hmcerror__11->SetBinError(18,14.6791);
   hmcerror__11->SetBinError(19,17.52779);
   hmcerror__11->SetBinError(20,12.39387);
   hmcerror__11->SetBinError(21,21.63377);
   hmcerror__11->SetBinError(22,9.278113);
   hmcerror__11->SetBinError(23,9.881763);
   hmcerror__11->SetBinError(24,11.90687);
   hmcerror__11->SetBinError(25,7.749474);
   hmcerror__11->SetBinError(26,13.69724);
   hmcerror__11->SetEntries(3100.979);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3013[25] = {
   7,
   19,
   91,
   692,
   353,
   241,
   293,
   207,
   168,
   126,
   104,
   99,
   80,
   54,
   38,
   35,
   28,
   24,
   19,
   14,
   14,
   12,
   4,
   4,
   5};
   Double_t _felx3013[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3013[25] = {
   2.85954,
   4.5151,
   9.6617,
   26.30589,
   18.78829,
   15.52417,
   17.11724,
   14.38749,
   12.96148,
   11.22497,
   10.19804,
   10.0712,
   9.0683,
   7.4785,
   6.3013,
   6.0548,
   5.4358,
   5.0476,
   4.5151,
   3.9102,
   3.9102,
   3.64022,
   2.29683,
   2.29683,
   2.48995};
   Double_t _fehx3013[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3013[25] = {
   2.61053,
   4.3011,
   9.46,
   26.30589,
   18.78829,
   15.52417,
   17.11724,
   14.38749,
   12.96148,
   11.22497,
   10.19804,
   9.87,
   8.8665,
   7.275,
   6.0955,
   5.8483,
   5.2271,
   4.837,
   4.3011,
   3.6898,
   3.6898,
   3.4155,
   1.98186,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-275,1225);
   Graph_Graph3013->SetMinimum(1.532853);
   Graph_Graph3013->SetMaximum(789.9662);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.27","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2731.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.0","F");

   ci = 1476;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 62.9","F");

   ci = 1477;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.7","F");

   ci = 1478;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 33.0","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.8","F");

   ci = 1481;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.8","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.0","F");

   ci = 1483;
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

   ci = 1484;
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

   ci = 1485;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1919.6","F");

   ci = 1486;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 19.3","F");

   ci = 1487;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 546.3","F");

   ci = 1488;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 7.8","F");

   ci = 1489;
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
   TText *pt_LaTex = pt->AddText("CCpi0_0p_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   
   Double_t _fx3014[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3014[25] = {
   1.047972,
   0.606868,
   0.4757162,
   0.2685889,
   0.3230214,
   0.2966406,
   0.3109905,
   0.3308684,
   0.3064397,
   0.3582822,
   0.4061772,
   0.4748919,
   0.3612538,
   0.449532,
   0.5130711,
   0.5625079,
   0.544357,
   0.5194834,
   0.751264,
   0.7454247,
   1.451009,
   0.8821858,
   0.9387793,
   1.575768,
   1.135907};
   Double_t _fehx3014[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3014[25] = {
   1.047972,
   0.606868,
   0.4757162,
   0.2685889,
   0.3230214,
   0.2966406,
   0.3109905,
   0.3308684,
   0.3064397,
   0.3582822,
   0.4061772,
   0.4748919,
   0.3612538,
   0.449532,
   0.5130711,
   0.5625079,
   0.544357,
   0.5194834,
   0.751264,
   0.7454247,
   1.451009,
   0.8821858,
   0.9387793,
   1.575768,
   1.135907};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-275,1225);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3015[25] = {
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
   Double_t _felx3015[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3015[25] = {
   0.3871569,
   0.2477892,
   0.2005963,
   0.2193938,
   0.2222979,
   0.2144842,
   0.2143742,
   0.2156458,
   0.2150365,
   0.2150185,
   0.2277883,
   0.2309516,
   0.2209691,
   0.2466884,
   0.2449601,
   0.2602227,
   0.2209378,
   0.2535137,
   0.2623657,
   0.2617572,
   0.326186,
   0.2771467,
   0.3098639,
   0.2949338,
   0.3260535};
   Double_t _fehx3015[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3015[25] = {
   0.3871569,
   0.2477892,
   0.2005963,
   0.2193938,
   0.2222979,
   0.2144842,
   0.2143742,
   0.2156458,
   0.2150365,
   0.2150185,
   0.2277883,
   0.2309516,
   0.2209691,
   0.2466884,
   0.2449601,
   0.2602227,
   0.2209378,
   0.2535137,
   0.2623657,
   0.2617572,
   0.326186,
   0.2771467,
   0.3098639,
   0.2949338,
   0.3260535};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-275,1225);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3016[25] = {
   0.6488677,
   0.7849675,
   1.361212,
   1.223311,
   1.05607,
   1.158281,
   1.123816,
   0.8463902,
   0.9185172,
   0.7531551,
   0.8097875,
   0.8884833,
   1.002145,
   0.824113,
   0.7274221,
   0.9046459,
   0.8893313,
   0.8493435,
   0.8143646,
   0.8420248,
   0.9390006,
   1.14099,
   0.3800048,
   0.5293644,
   0.7328928};
   Double_t _felx3016[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3016[25] = {
   0.2650662,
   0.1865372,
   0.1445233,
   0.04650331,
   0.05620894,
   0.07461143,
   0.06565402,
   0.05882818,
   0.07086514,
   0.06709639,
   0.0794062,
   0.09038478,
   0.1135969,
   0.114132,
   0.1206238,
   0.1564986,
   0.172651,
   0.1786311,
   0.193523,
   0.2351775,
   0.2622629,
   0.3461211,
   0.2182016,
   0.303965,
   0.3649733};
   Double_t _fehx3016[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3016[25] = {
   0.2419841,
   0.177696,
   0.1415062,
   0.04650331,
   0.05620894,
   0.07461143,
   0.06565402,
   0.05882818,
   0.07086514,
   0.06709639,
   0.0794062,
   0.08857909,
   0.111069,
   0.1110263,
   0.1166842,
   0.1511612,
   0.1660223,
   0.1711781,
   0.1843507,
   0.2219216,
   0.2474803,
   0.3247542,
   0.1882791,
   0.2622816,
   0.3240324};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-275,1225);
   Graph_Graph3016->SetMinimum(0.02771167);
   Graph_Graph3016->SetMaximum(1.63681);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","CCpi0_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
