#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 17:41:25 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-384.6154,-6.902563,2820.513,763.2782);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__4->SetBinContent(4,4.635179);
   hmc__4->SetBinContent(5,32.2819);
   hmc__4->SetBinContent(6,104.8956);
   hmc__4->SetBinContent(7,200.5338);
   hmc__4->SetBinContent(8,276.5676);
   hmc__4->SetBinContent(9,331.7207);
   hmc__4->SetBinContent(10,345.1282);
   hmc__4->SetBinContent(11,305.837);
   hmc__4->SetBinContent(12,271.7641);
   hmc__4->SetBinContent(13,229.2724);
   hmc__4->SetBinContent(14,176.6745);
   hmc__4->SetBinContent(15,121.8421);
   hmc__4->SetBinContent(16,91.97272);
   hmc__4->SetBinContent(17,61.72947);
   hmc__4->SetBinContent(18,48.40561);
   hmc__4->SetBinContent(19,39.58423);
   hmc__4->SetBinContent(20,16.04325);
   hmc__4->SetBinContent(21,13.41495);
   hmc__4->SetBinContent(22,10.92592);
   hmc__4->SetBinContent(23,6.800124);
   hmc__4->SetBinContent(24,6.226801);
   hmc__4->SetBinContent(25,4.327928);
   hmc__4->SetBinContent(26,15.89545);
   hmc__4->SetBinError(1,0.3895343);
   hmc__4->SetBinError(2,0.3895343);
   hmc__4->SetBinError(3,0.3895343);
   hmc__4->SetBinError(4,1.522264);
   hmc__4->SetBinError(5,8.117369);
   hmc__4->SetBinError(6,25.03455);
   hmc__4->SetBinError(7,50.57429);
   hmc__4->SetBinError(8,67.15406);
   hmc__4->SetBinError(9,80.3931);
   hmc__4->SetBinError(10,82.61578);
   hmc__4->SetBinError(11,72.44366);
   hmc__4->SetBinError(12,63.04641);
   hmc__4->SetBinError(13,52.57301);
   hmc__4->SetBinError(14,41.98698);
   hmc__4->SetBinError(15,30.76203);
   hmc__4->SetBinError(16,23.17127);
   hmc__4->SetBinError(17,15.71555);
   hmc__4->SetBinError(18,12.20851);
   hmc__4->SetBinError(19,11.00447);
   hmc__4->SetBinError(20,4.551013);
   hmc__4->SetBinError(21,3.553308);
   hmc__4->SetBinError(22,2.920315);
   hmc__4->SetBinError(23,2.26366);
   hmc__4->SetBinError(24,2.142849);
   hmc__4->SetBinError(25,1.588625);
   hmc__4->SetBinError(26,3.518084);
   hmc__4->SetMinimum(-6.902563);
   hmc__4->SetMaximum(724.7692);
   hmc__4->SetEntries(2705.441);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,2500);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(362.3846);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(4,0.5915521);
   hbadmatch_stack_1->SetBinContent(5,0.6397032);
   hbadmatch_stack_1->SetBinContent(6,0.5430812);
   hbadmatch_stack_1->SetBinContent(7,1.270501);
   hbadmatch_stack_1->SetBinContent(8,1.5025);
   hbadmatch_stack_1->SetBinContent(9,1.127039);
   hbadmatch_stack_1->SetBinContent(10,1.565342);
   hbadmatch_stack_1->SetBinContent(11,1.518694);
   hbadmatch_stack_1->SetBinContent(12,0.9818863);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.7319179);
   hbadmatch_stack_1->SetBinContent(15,1.389766);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,1.078798);
   hbadmatch_stack_1->SetBinContent(18,0.7834804);
   hbadmatch_stack_1->SetBinContent(19,0.8770706);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinError(4,0.4411269);
   hbadmatch_stack_1->SetBinError(5,0.4061867);
   hbadmatch_stack_1->SetBinError(6,0.3960943);
   hbadmatch_stack_1->SetBinError(7,0.5895188);
   hbadmatch_stack_1->SetBinError(8,0.6335266);
   hbadmatch_stack_1->SetBinError(9,0.5201044);
   hbadmatch_stack_1->SetBinError(10,0.6068109);
   hbadmatch_stack_1->SetBinError(11,0.6387948);
   hbadmatch_stack_1->SetBinError(12,0.4391155);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.438694);
   hbadmatch_stack_1->SetBinError(15,0.6012491);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.6488032);
   hbadmatch_stack_1->SetBinError(18,0.3917439);
   hbadmatch_stack_1->SetBinError(19,0.5197486);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(5,0.6487947);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,1.78639);
   hext_stack_2->SetBinContent(8,5.158864);
   hext_stack_2->SetBinContent(9,0.7309963);
   hext_stack_2->SetBinContent(10,4.125011);
   hext_stack_2->SetBinContent(11,1.379791);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,0.973192);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(18,2.890854);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinError(5,0.4587671);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.8039566);
   hext_stack_2->SetBinError(8,1.680734);
   hext_stack_2->SetBinError(9,0.5201503);
   hext_stack_2->SetBinError(10,1.358482);
   hext_stack_2->SetBinError(11,0.6935586);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.5618727);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(18,1.323597);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetEntries(52);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(6,0.2544535);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2574102);
   hdirt_stack_3->SetBinError(6,0.2544535);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2574102);
   hdirt_stack_3->SetEntries(3);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(5,0.4415172);
   houtFV_stack_4->SetBinContent(6,0.8849206);
   houtFV_stack_4->SetBinContent(7,0.7336084);
   houtFV_stack_4->SetBinContent(8,1.318683);
   houtFV_stack_4->SetBinContent(9,0.7851869);
   houtFV_stack_4->SetBinContent(10,0.6107302);
   houtFV_stack_4->SetBinContent(11,0.3917402);
   houtFV_stack_4->SetBinContent(12,1.072095);
   houtFV_stack_4->SetBinContent(13,0.8403265);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinError(5,0.3140459);
   houtFV_stack_4->SetBinError(6,0.5154743);
   houtFV_stack_4->SetBinError(7,0.4394482);
   houtFV_stack_4->SetBinError(8,0.5542732);
   houtFV_stack_4->SetBinError(9,0.4650244);
   houtFV_stack_4->SetBinError(10,0.3993243);
   houtFV_stack_4->SetBinError(11,0.2770047);
   houtFV_stack_4->SetBinError(12,0.5551335);
   houtFV_stack_4->SetBinError(13,0.4233883);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1967154);
   houtFV_stack_4->SetEntries(33);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04659828);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1970327);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1714184);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetEntries(4);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.2478449);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.339568);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.352107);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.89626);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.095943);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.313332);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.729815);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.648992);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.258824);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.694262);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.859606);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.427346);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.907472);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.5757398);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.6785064);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2155215);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1597216);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.09731799);
   hNCpi0inFVres_stack_7->SetBinError(4,0.09251864);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2980941);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5580814);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6035438);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5851525);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6907795);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9872117);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9202259);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7354366);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9688414);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9268132);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7419039);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7789149);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1811101);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3081679);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1196615);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1129693);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(25,0.097318);
   hNCpi0inFVres_stack_7->SetEntries(1121);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6172754);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.220722);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.145053);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.955245);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.884197);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.711058);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.669395);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.693781);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.185202);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.730938);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.570117);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.350877);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7285376);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.358055);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.178041);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3620359);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.418668);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3012939);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2827907);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4807886);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9264861);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6553815);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8221201);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8626495);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8250082);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8535925);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.035333);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5525512);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3681564);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3007797);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6411642);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4271435);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1536621);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2107962);
   hNCpi0inFVdis_stack_8->SetEntries(863);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(4,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(5,18.1356);
   hCCpi0inFV_stack_10->SetBinContent(6,71.96906);
   hCCpi0inFV_stack_10->SetBinContent(7,149.6015);
   hCCpi0inFV_stack_10->SetBinContent(8,214.3549);
   hCCpi0inFV_stack_10->SetBinContent(9,265.9947);
   hCCpi0inFV_stack_10->SetBinContent(10,276.2783);
   hCCpi0inFV_stack_10->SetBinContent(11,251.8022);
   hCCpi0inFV_stack_10->SetBinContent(12,217.9473);
   hCCpi0inFV_stack_10->SetBinContent(13,180.4918);
   hCCpi0inFV_stack_10->SetBinContent(14,145.431);
   hCCpi0inFV_stack_10->SetBinContent(15,99.30116);
   hCCpi0inFV_stack_10->SetBinContent(16,75.04589);
   hCCpi0inFV_stack_10->SetBinContent(17,50.93882);
   hCCpi0inFV_stack_10->SetBinContent(18,35.88669);
   hCCpi0inFV_stack_10->SetBinContent(19,31.60095);
   hCCpi0inFV_stack_10->SetBinContent(20,13.14095);
   hCCpi0inFV_stack_10->SetBinContent(21,11.33862);
   hCCpi0inFV_stack_10->SetBinContent(22,8.797621);
   hCCpi0inFV_stack_10->SetBinContent(23,5.617208);
   hCCpi0inFV_stack_10->SetBinContent(24,4.44476);
   hCCpi0inFV_stack_10->SetBinContent(25,3.522355);
   hCCpi0inFV_stack_10->SetBinContent(26,12.39442);
   hCCpi0inFV_stack_10->SetBinError(4,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(5,2.173176);
   hCCpi0inFV_stack_10->SetBinError(6,4.25789);
   hCCpi0inFV_stack_10->SetBinError(7,6.13015);
   hCCpi0inFV_stack_10->SetBinError(8,7.399425);
   hCCpi0inFV_stack_10->SetBinError(9,8.216543);
   hCCpi0inFV_stack_10->SetBinError(10,8.308558);
   hCCpi0inFV_stack_10->SetBinError(11,7.940826);
   hCCpi0inFV_stack_10->SetBinError(12,7.451736);
   hCCpi0inFV_stack_10->SetBinError(13,6.700411);
   hCCpi0inFV_stack_10->SetBinError(14,6.02913);
   hCCpi0inFV_stack_10->SetBinError(15,4.992264);
   hCCpi0inFV_stack_10->SetBinError(16,4.440289);
   hCCpi0inFV_stack_10->SetBinError(17,3.61921);
   hCCpi0inFV_stack_10->SetBinError(18,2.961061);
   hCCpi0inFV_stack_10->SetBinError(19,2.864858);
   hCCpi0inFV_stack_10->SetBinError(20,1.819833);
   hCCpi0inFV_stack_10->SetBinError(21,1.67685);
   hCCpi0inFV_stack_10->SetBinError(22,1.45491);
   hCCpi0inFV_stack_10->SetBinError(23,1.242532);
   hCCpi0inFV_stack_10->SetBinError(24,1.056592);
   hCCpi0inFV_stack_10->SetBinError(25,0.9037713);
   hCCpi0inFV_stack_10->SetBinError(26,1.819892);
   hCCpi0inFV_stack_10->SetEntries(9150);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(6,2.640747);
   hNCinFV_stack_11->SetBinContent(7,2.979234);
   hNCinFV_stack_11->SetBinContent(8,3.711152);
   hNCinFV_stack_11->SetBinContent(9,4.05302);
   hNCinFV_stack_11->SetBinContent(10,2.250697);
   hNCinFV_stack_11->SetBinContent(11,2.057363);
   hNCinFV_stack_11->SetBinContent(12,2.092628);
   hNCinFV_stack_11->SetBinContent(13,2.30395);
   hNCinFV_stack_11->SetBinContent(14,1.270501);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,1.413964);
   hNCinFV_stack_11->SetBinContent(18,0.536893);
   hNCinFV_stack_11->SetBinContent(20,0.1950248);
   hNCinFV_stack_11->SetBinContent(21,0.5884556);
   hNCinFV_stack_11->SetBinContent(24,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(6,0.784705);
   hNCinFV_stack_11->SetBinError(7,0.8548804);
   hNCinFV_stack_11->SetBinError(8,0.960871);
   hNCinFV_stack_11->SetBinError(9,1.019635);
   hNCinFV_stack_11->SetBinError(10,0.7346377);
   hNCinFV_stack_11->SetBinError(11,0.7087455);
   hNCinFV_stack_11->SetBinError(12,0.8095281);
   hNCinFV_stack_11->SetBinError(13,0.7080718);
   hNCinFV_stack_11->SetBinError(14,0.5895188);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.6515799);
   hNCinFV_stack_11->SetBinError(18,0.3929602);
   hNCinFV_stack_11->SetBinError(20,0.1950249);
   hNCinFV_stack_11->SetBinError(21,0.3397478);
   hNCinFV_stack_11->SetBinError(24,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
   hNCinFV_stack_11->SetEntries(119);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(4,3.012302);
   hnumuCCinFV_stack_12->SetBinContent(5,10.04947);
   hnumuCCinFV_stack_12->SetBinContent(6,22.98007);
   hnumuCCinFV_stack_12->SetBinContent(7,35.76614);
   hnumuCCinFV_stack_12->SetBinContent(8,39.88956);
   hnumuCCinFV_stack_12->SetBinContent(9,48.24377);
   hnumuCCinFV_stack_12->SetBinContent(10,46.36165);
   hnumuCCinFV_stack_12->SetBinContent(11,35.73624);
   hnumuCCinFV_stack_12->SetBinContent(12,39.00639);
   hnumuCCinFV_stack_12->SetBinContent(13,33.52301);
   hnumuCCinFV_stack_12->SetBinContent(14,17.46714);
   hnumuCCinFV_stack_12->SetBinContent(15,14.42012);
   hnumuCCinFV_stack_12->SetBinContent(16,11.48739);
   hnumuCCinFV_stack_12->SetBinContent(17,6.064974);
   hnumuCCinFV_stack_12->SetBinContent(18,6.074418);
   hnumuCCinFV_stack_12->SetBinContent(19,4.641476);
   hnumuCCinFV_stack_12->SetBinContent(20,1.181612);
   hnumuCCinFV_stack_12->SetBinContent(21,1.1529);
   hnumuCCinFV_stack_12->SetBinContent(22,1.413964);
   hnumuCCinFV_stack_12->SetBinContent(23,1.127117);
   hnumuCCinFV_stack_12->SetBinContent(24,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(25,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(26,2.350441);
   hnumuCCinFV_stack_12->SetBinError(4,0.9373724);
   hnumuCCinFV_stack_12->SetBinError(5,1.672551);
   hnumuCCinFV_stack_12->SetBinError(6,2.711778);
   hnumuCCinFV_stack_12->SetBinError(7,3.631278);
   hnumuCCinFV_stack_12->SetBinError(8,3.308025);
   hnumuCCinFV_stack_12->SetBinError(9,3.585119);
   hnumuCCinFV_stack_12->SetBinError(10,3.446797);
   hnumuCCinFV_stack_12->SetBinError(11,3.024265);
   hnumuCCinFV_stack_12->SetBinError(12,3.939358);
   hnumuCCinFV_stack_12->SetBinError(13,2.976981);
   hnumuCCinFV_stack_12->SetBinError(14,2.152109);
   hnumuCCinFV_stack_12->SetBinError(15,1.951515);
   hnumuCCinFV_stack_12->SetBinError(16,1.791854);
   hnumuCCinFV_stack_12->SetBinError(17,1.176855);
   hnumuCCinFV_stack_12->SetBinError(18,2.549701);
   hnumuCCinFV_stack_12->SetBinError(19,1.074749);
   hnumuCCinFV_stack_12->SetBinError(20,0.4824419);
   hnumuCCinFV_stack_12->SetBinError(21,0.5384552);
   hnumuCCinFV_stack_12->SetBinError(22,0.6515799);
   hnumuCCinFV_stack_12->SetBinError(23,0.5201395);
   hnumuCCinFV_stack_12->SetBinError(24,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(25,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(26,0.6785203);
   hnumuCCinFV_stack_12->SetEntries(1596);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(16,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(17,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.5850745);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.3917402);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.3397478);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.3921167);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.5191111);
   hnueCCinFV_stack_13->SetBinError(16,0.438694);
   hnueCCinFV_stack_13->SetBinError(17,0.438694);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.337793);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.2770047);
   hnueCCinFV_stack_13->SetEntries(28);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__5->SetBinContent(4,4.635179);
   hmcerror__5->SetBinContent(5,32.2819);
   hmcerror__5->SetBinContent(6,104.8956);
   hmcerror__5->SetBinContent(7,200.5338);
   hmcerror__5->SetBinContent(8,276.5676);
   hmcerror__5->SetBinContent(9,331.7207);
   hmcerror__5->SetBinContent(10,345.1282);
   hmcerror__5->SetBinContent(11,305.837);
   hmcerror__5->SetBinContent(12,271.7641);
   hmcerror__5->SetBinContent(13,229.2724);
   hmcerror__5->SetBinContent(14,176.6745);
   hmcerror__5->SetBinContent(15,121.8421);
   hmcerror__5->SetBinContent(16,91.97272);
   hmcerror__5->SetBinContent(17,61.72947);
   hmcerror__5->SetBinContent(18,48.40561);
   hmcerror__5->SetBinContent(19,39.58423);
   hmcerror__5->SetBinContent(20,16.04325);
   hmcerror__5->SetBinContent(21,13.41495);
   hmcerror__5->SetBinContent(22,10.92592);
   hmcerror__5->SetBinContent(23,6.800124);
   hmcerror__5->SetBinContent(24,6.226801);
   hmcerror__5->SetBinContent(25,4.327928);
   hmcerror__5->SetBinContent(26,15.89545);
   hmcerror__5->SetBinError(1,0.3895343);
   hmcerror__5->SetBinError(2,0.3895343);
   hmcerror__5->SetBinError(3,0.3895343);
   hmcerror__5->SetBinError(4,1.522264);
   hmcerror__5->SetBinError(5,8.117369);
   hmcerror__5->SetBinError(6,25.03455);
   hmcerror__5->SetBinError(7,50.57429);
   hmcerror__5->SetBinError(8,67.15406);
   hmcerror__5->SetBinError(9,80.3931);
   hmcerror__5->SetBinError(10,82.61578);
   hmcerror__5->SetBinError(11,72.44366);
   hmcerror__5->SetBinError(12,63.04641);
   hmcerror__5->SetBinError(13,52.57301);
   hmcerror__5->SetBinError(14,41.98698);
   hmcerror__5->SetBinError(15,30.76203);
   hmcerror__5->SetBinError(16,23.17127);
   hmcerror__5->SetBinError(17,15.71555);
   hmcerror__5->SetBinError(18,12.20851);
   hmcerror__5->SetBinError(19,11.00447);
   hmcerror__5->SetBinError(20,4.551013);
   hmcerror__5->SetBinError(21,3.553308);
   hmcerror__5->SetBinError(22,2.920315);
   hmcerror__5->SetBinError(23,2.26366);
   hmcerror__5->SetBinError(24,2.142849);
   hmcerror__5->SetBinError(25,1.588625);
   hmcerror__5->SetBinError(26,3.518084);
   hmcerror__5->SetEntries(2705.441);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3005[25] = {
   0,
   0,
   0,
   2,
   47,
   142,
   198,
   306,
   319,
   331,
   303,
   237,
   163,
   146,
   81,
   74,
   38,
   29,
   22,
   16,
   8,
   10,
   3,
   1,
   5};
   Double_t _felx3005[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3005[25] = {
   0,
   0,
   0,
   2,
   6.9882,
   11.91638,
   14.07125,
   17.49286,
   17.86057,
   18.19341,
   17.4069,
   15.3948,
   12.76715,
   12.08305,
   9.1239,
   8.7275,
   6.3013,
   5.5285,
   4.8417,
   4.1628,
   3.0307,
   3.34883,
   2.143368,
   1,
   2.48995};
   Double_t _fehx3005[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3005[25] = {
   1.1478,
   1.1478,
   1.1478,
   1.51917,
   6.7839,
   11.91638,
   14.07125,
   17.49286,
   17.86057,
   18.19341,
   17.4069,
   15.3948,
   12.76715,
   12.08305,
   8.9221,
   8.5253,
   6.0955,
   5.3201,
   4.6299,
   3.9454,
   2.7896,
   3.1179,
   1.72422,
   1.35971,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,2750);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(384.1127);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=27.6/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2481.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22.0","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7.7","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.8","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.3","F");

   ci = 1454;
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

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2132.4","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 27.8","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 381.0","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.5","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   
   Double_t _fx3006[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3006[25] = {
   0,
   0,
   0,
   0.3284153,
   0.2514527,
   0.2386617,
   0.2521983,
   0.2428124,
   0.2423518,
   0.2393771,
   0.2368702,
   0.2319895,
   0.2293037,
   0.2376516,
   0.2524745,
   0.2519363,
   0.2545875,
   0.2522126,
   0.2780013,
   0.2836715,
   0.2648768,
   0.2672833,
   0.3328851,
   0.3441332,
   0.3670638};
   Double_t _fehx3006[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3006[25] = {
   0,
   0,
   0,
   0.3284153,
   0.2514527,
   0.2386617,
   0.2521983,
   0.2428124,
   0.2423518,
   0.2393771,
   0.2368702,
   0.2319895,
   0.2293037,
   0.2376516,
   0.2524745,
   0.2519363,
   0.2545875,
   0.2522126,
   0.2780013,
   0.2836715,
   0.2648768,
   0.2672833,
   0.3328851,
   0.3441332,
   0.3670638};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,2750);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3007[25] = {
   0,
   0,
   0,
   0.3284153,
   0.2514527,
   0.2386617,
   0.2521983,
   0.2428124,
   0.2423518,
   0.2393771,
   0.2368702,
   0.2319895,
   0.2293037,
   0.2376516,
   0.2524745,
   0.2519363,
   0.2545875,
   0.2522126,
   0.2780013,
   0.2836715,
   0.2648768,
   0.2672833,
   0.3328851,
   0.3441332,
   0.3670638};
   Double_t _fehx3007[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3007[25] = {
   0,
   0,
   0,
   0.3284153,
   0.2514527,
   0.2386617,
   0.2521983,
   0.2428124,
   0.2423518,
   0.2393771,
   0.2368702,
   0.2319895,
   0.2293037,
   0.2376516,
   0.2524745,
   0.2519363,
   0.2545875,
   0.2522126,
   0.2780013,
   0.2836715,
   0.2648768,
   0.2672833,
   0.3328851,
   0.3441332,
   0.3670638};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,2750);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[25] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3008[25] = {
   10,
   10,
   10,
   0.4314828,
   1.455924,
   1.353727,
   0.9873646,
   1.10642,
   0.9616524,
   0.959064,
   0.9907238,
   0.87208,
   0.7109446,
   0.8263783,
   0.6647948,
   0.8045864,
   0.6155893,
   0.5991041,
   0.5557769,
   0.9973041,
   0.5963498,
   0.9152549,
   0.4411684,
   0.1605961,
   1.155287};
   Double_t _felx3008[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3008[25] = {
   0,
   0,
   0,
   0.4314828,
   0.2164743,
   0.1136023,
   0.07016895,
   0.06324983,
   0.0538422,
   0.05271492,
   0.0569156,
   0.05664768,
   0.05568548,
   0.06839156,
   0.07488298,
   0.09489226,
   0.1020793,
   0.114212,
   0.1223139,
   0.2594736,
   0.2259197,
   0.3065033,
   0.3151954,
   0.1605961,
   0.5753215};
   Double_t _fehx3008[25] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3008[25] = {
   0,
   0,
   0,
   0.3277479,
   0.2101456,
   0.1136023,
   0.07016895,
   0.06324983,
   0.0538422,
   0.05271492,
   0.0569156,
   0.05664768,
   0.05568548,
   0.06839156,
   0.07322674,
   0.09269379,
   0.09874539,
   0.1099067,
   0.1169632,
   0.2459227,
   0.2079472,
   0.2853673,
   0.2535571,
   0.2183641,
   0.5107849};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,2750);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_cc_nu_energy_all",25,0,2500);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,2500,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
