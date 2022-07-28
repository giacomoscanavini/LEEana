#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Wed Jun  8 17:52:19 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-8.66,1260.256,957.6137);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__22->SetBinContent(0,289.6482);
   hmc__22->SetBinContent(1,8.501575);
   hmc__22->SetBinContent(2,15.11696);
   hmc__22->SetBinContent(3,49.10891);
   hmc__22->SetBinContent(4,345.1033);
   hmc__22->SetBinContent(5,201.2281);
   hmc__22->SetBinContent(6,131.8712);
   hmc__22->SetBinContent(7,170.0332);
   hmc__22->SetBinContent(8,153.9693);
   hmc__22->SetBinContent(9,120.3987);
   hmc__22->SetBinContent(10,112.2307);
   hmc__22->SetBinContent(11,87.88669);
   hmc__22->SetBinContent(12,72.99225);
   hmc__22->SetBinContent(13,55.50022);
   hmc__22->SetBinContent(14,46.90622);
   hmc__22->SetBinContent(15,38.29982);
   hmc__22->SetBinContent(16,25.99326);
   hmc__22->SetBinContent(17,21.31147);
   hmc__22->SetBinContent(18,19.51618);
   hmc__22->SetBinContent(19,16.97832);
   hmc__22->SetBinContent(20,11.30806);
   hmc__22->SetBinContent(21,9.481523);
   hmc__22->SetBinContent(22,6.267451);
   hmc__22->SetBinContent(23,7.53764);
   hmc__22->SetBinContent(24,5.608755);
   hmc__22->SetBinContent(25,6.090362);
   hmc__22->SetBinContent(26,22.52944);
   hmc__22->SetBinError(0,9.298758);
   hmc__22->SetBinError(1,10.7528);
   hmc__22->SetBinError(2,10.01028);
   hmc__22->SetBinError(3,26.69724);
   hmc__22->SetBinError(4,97.7482);
   hmc__22->SetBinError(5,63.75769);
   hmc__22->SetBinError(6,44.05343);
   hmc__22->SetBinError(7,51.38628);
   hmc__22->SetBinError(8,52.99161);
   hmc__22->SetBinError(9,38.30935);
   hmc__22->SetBinError(10,43.21762);
   hmc__22->SetBinError(11,41.27476);
   hmc__22->SetBinError(12,35.12687);
   hmc__22->SetBinError(13,23.29713);
   hmc__22->SetBinError(14,23.87989);
   hmc__22->SetBinError(15,19.18346);
   hmc__22->SetBinError(16,16.18);
   hmc__22->SetBinError(17,15.77379);
   hmc__22->SetBinError(18,14.36243);
   hmc__22->SetBinError(19,14.79423);
   hmc__22->SetBinError(20,11.27859);
   hmc__22->SetBinError(21,11.70628);
   hmc__22->SetBinError(22,6.601909);
   hmc__22->SetBinError(23,8.328295);
   hmc__22->SetBinError(24,12.80794);
   hmc__22->SetBinError(25,9.471735);
   hmc__22->SetBinError(26,12.87251);
   hmc__22->SetMinimum(-8.66);
   hmc__22->SetMaximum(909.3);
   hmc__22->SetEntries(2024.9);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-150,1100);
   hs8_stack_8->SetMinimum(-1.348765e-08);
   hs8_stack_8->SetMaximum(362.3585);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,4.065688);
   hbadmatch_stack_1->SetBinContent(1,0.2136185);
   hbadmatch_stack_1->SetBinContent(3,0.4287933);
   hbadmatch_stack_1->SetBinContent(4,0.4161817);
   hbadmatch_stack_1->SetBinContent(5,0.3934307);
   hbadmatch_stack_1->SetBinContent(6,0.9481728);
   hbadmatch_stack_1->SetBinContent(7,0.7663097);
   hbadmatch_stack_1->SetBinContent(8,0.7652553);
   hbadmatch_stack_1->SetBinContent(9,0.60673);
   hbadmatch_stack_1->SetBinContent(10,1.17353);
   hbadmatch_stack_1->SetBinContent(11,0.7336084);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.3917402);
   hbadmatch_stack_1->SetBinContent(16,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(22,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.1967154);
   hbadmatch_stack_1->SetBinError(0,1.130282);
   hbadmatch_stack_1->SetBinError(1,0.2136185);
   hbadmatch_stack_1->SetBinError(3,0.3044378);
   hbadmatch_stack_1->SetBinError(4,0.2948644);
   hbadmatch_stack_1->SetBinError(5,0.2781975);
   hbadmatch_stack_1->SetBinError(6,0.4890998);
   hbadmatch_stack_1->SetBinError(7,0.4550272);
   hbadmatch_stack_1->SetBinError(8,0.4544965);
   hbadmatch_stack_1->SetBinError(9,0.4547626);
   hbadmatch_stack_1->SetBinError(10,0.4790957);
   hbadmatch_stack_1->SetBinError(11,0.4394482);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.2770047);
   hbadmatch_stack_1->SetBinError(16,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(22,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.1967154);
   hbadmatch_stack_1->SetEntries(57);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1532;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,43.73324);
   hext_stack_2->SetBinContent(2,1.290409);
   hext_stack_2->SetBinContent(3,1.544194);
   hext_stack_2->SetBinContent(4,5.511983);
   hext_stack_2->SetBinContent(5,9.01132);
   hext_stack_2->SetBinContent(6,3.241202);
   hext_stack_2->SetBinContent(7,6.538654);
   hext_stack_2->SetBinContent(8,5.173224);
   hext_stack_2->SetBinContent(9,5.076662);
   hext_stack_2->SetBinContent(10,6.124875);
   hext_stack_2->SetBinContent(11,1.697008);
   hext_stack_2->SetBinContent(12,2.110787);
   hext_stack_2->SetBinContent(13,1.379791);
   hext_stack_2->SetBinContent(14,1.137595);
   hext_stack_2->SetBinContent(15,1.055394);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,1.048213);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,3.215251);
   hext_stack_2->SetBinError(0,4.566081);
   hext_stack_2->SetBinError(2,0.788756);
   hext_stack_2->SetBinError(3,0.7753719);
   hext_stack_2->SetBinError(4,1.457839);
   hext_stack_2->SetBinError(5,2.226782);
   hext_stack_2->SetBinError(6,1.178414);
   hext_stack_2->SetBinError(7,1.818211);
   hext_stack_2->SetBinError(8,1.556427);
   hext_stack_2->SetBinError(9,1.662762);
   hext_stack_2->SetBinError(10,1.828051);
   hext_stack_2->SetBinError(11,0.8873887);
   hext_stack_2->SetBinError(12,0.8669371);
   hext_stack_2->SetBinError(13,0.6935586);
   hext_stack_2->SetBinError(14,0.6602113);
   hext_stack_2->SetBinError(15,0.6130171);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.7595995);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.36277);
   hext_stack_2->SetEntries(228);

   ci = 1533;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,2.570714);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(4,0.3981555);
   hdirt_stack_3->SetBinContent(5,0.3381872);
   hdirt_stack_3->SetBinContent(6,0.3734822);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,2.407774e-08);
   hdirt_stack_3->SetBinContent(10,0.6009047);
   hdirt_stack_3->SetBinContent(13,0.4045523);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.1380715);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinError(0,0.8628619);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(4,0.28293);
   hdirt_stack_3->SetBinError(5,0.3381872);
   hdirt_stack_3->SetBinError(6,0.2679781);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,2.407774e-08);
   hdirt_stack_3->SetBinError(10,0.4402797);
   hdirt_stack_3->SetBinError(13,0.3001263);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.1380715);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetEntries(30);

   ci = 1534;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,10.84327);
   houtFV_stack_4->SetBinContent(2,0.2269427);
   houtFV_stack_4->SetBinContent(3,1.412273);
   houtFV_stack_4->SetBinContent(4,5.901248);
   houtFV_stack_4->SetBinContent(5,6.122712);
   houtFV_stack_4->SetBinContent(6,1.467217);
   houtFV_stack_4->SetBinContent(7,2.905384);
   houtFV_stack_4->SetBinContent(8,1.795058);
   houtFV_stack_4->SetBinContent(9,1.575323);
   houtFV_stack_4->SetBinContent(10,2.590875);
   houtFV_stack_4->SetBinContent(11,0.3917402);
   houtFV_stack_4->SetBinContent(12,0.7834804);
   houtFV_stack_4->SetBinContent(13,1.485284);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.536893);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(21,0.1950248);
   houtFV_stack_4->SetBinError(0,1.816251);
   houtFV_stack_4->SetBinError(2,0.2269427);
   houtFV_stack_4->SetBinError(3,0.6510715);
   houtFV_stack_4->SetBinError(4,1.229428);
   houtFV_stack_4->SetBinError(5,1.990114);
   houtFV_stack_4->SetBinError(6,0.6214735);
   houtFV_stack_4->SetBinError(7,0.828415);
   houtFV_stack_4->SetBinError(8,0.5992216);
   houtFV_stack_4->SetBinError(9,0.6236239);
   houtFV_stack_4->SetBinError(10,0.8095761);
   houtFV_stack_4->SetBinError(11,0.2770047);
   houtFV_stack_4->SetBinError(12,0.3917439);
   houtFV_stack_4->SetBinError(13,0.632422);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.3397478);
   houtFV_stack_4->SetBinError(18,0.3929602);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(21,0.1950249);
   houtFV_stack_4->SetEntries(160);

   ci = 1535;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

   ci = 1536;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3909362);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2764336);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(4);

   ci = 1537;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,6.470336);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.194636);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.4736358);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.60137);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.909826);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.75538);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.023258);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.685962);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.9202038);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5573358);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.502368);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.7529721);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.5583361);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.6277541);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.445904);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.125218);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.09731799);
   hNCpi0inFVres_stack_7->SetBinError(0,0.8372012);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1376284);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1634799);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9487792);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3906029);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4105222);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4764196);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3997951);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2682147);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1704726);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2162644);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3162714);
   hNCpi0inFVres_stack_7->SetBinError(13,0.2847561);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2996304);
   hNCpi0inFVres_stack_7->SetBinError(15,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(16,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(17,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(18,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2422936);
   hNCpi0inFVres_stack_7->SetBinError(21,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(22,0.1012383);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.097318);
   hNCpi0inFVres_stack_7->SetEntries(532);

   ci = 1538;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,3.878284);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.325932);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.756708);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.241722);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.255172);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.213822);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.562576);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.087772);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.87819);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.529604);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5719541);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.4746361);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3485861);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.6557549);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7554564);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3762221);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3737142);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3376966);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3726713);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4699768);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3307091);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3320795);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2470656);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2970212);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2806257);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2218905);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.05579997);
   hNCpi0inFVdis_stack_8->SetEntries(411);

   ci = 1539;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1540;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1541;
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
   hs8->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,127.3104);
   hCCpi0inFV_stack_11->SetBinContent(1,3.008044);
   hCCpi0inFV_stack_11->SetBinContent(2,6.103621);
   hCCpi0inFV_stack_11->SetBinContent(3,24.76773);
   hCCpi0inFV_stack_11->SetBinContent(4,245.6928);
   hCCpi0inFV_stack_11->SetBinContent(5,137.9203);
   hCCpi0inFV_stack_11->SetBinContent(6,94.04629);
   hCCpi0inFV_stack_11->SetBinContent(7,120.2197);
   hCCpi0inFV_stack_11->SetBinContent(8,112.5104);
   hCCpi0inFV_stack_11->SetBinContent(9,87.20212);
   hCCpi0inFV_stack_11->SetBinContent(10,78.05532);
   hCCpi0inFV_stack_11->SetBinContent(11,66.99152);
   hCCpi0inFV_stack_11->SetBinContent(12,50.23209);
   hCCpi0inFV_stack_11->SetBinContent(13,39.132);
   hCCpi0inFV_stack_11->SetBinContent(14,35.54146);
   hCCpi0inFV_stack_11->SetBinContent(15,25.57746);
   hCCpi0inFV_stack_11->SetBinContent(16,20.50651);
   hCCpi0inFV_stack_11->SetBinContent(17,13.95298);
   hCCpi0inFV_stack_11->SetBinContent(18,13.14914);
   hCCpi0inFV_stack_11->SetBinContent(19,11.26738);
   hCCpi0inFV_stack_11->SetBinContent(20,6.408533);
   hCCpi0inFV_stack_11->SetBinContent(21,7.349769);
   hCCpi0inFV_stack_11->SetBinContent(22,3.604645);
   hCCpi0inFV_stack_11->SetBinContent(23,5.273649);
   hCCpi0inFV_stack_11->SetBinContent(24,3.608027);
   hCCpi0inFV_stack_11->SetBinContent(25,4.288043);
   hCCpi0inFV_stack_11->SetBinContent(26,13.72849);
   hCCpi0inFV_stack_11->SetBinError(0,5.587886);
   hCCpi0inFV_stack_11->SetBinError(1,0.9111503);
   hCCpi0inFV_stack_11->SetBinError(2,1.240696);
   hCCpi0inFV_stack_11->SetBinError(3,2.478114);
   hCCpi0inFV_stack_11->SetBinError(4,7.929374);
   hCCpi0inFV_stack_11->SetBinError(5,5.847938);
   hCCpi0inFV_stack_11->SetBinError(6,4.88485);
   hCCpi0inFV_stack_11->SetBinError(7,5.436302);
   hCCpi0inFV_stack_11->SetBinError(8,5.316267);
   hCCpi0inFV_stack_11->SetBinError(9,4.675578);
   hCCpi0inFV_stack_11->SetBinError(10,4.394273);
   hCCpi0inFV_stack_11->SetBinError(11,4.062109);
   hCCpi0inFV_stack_11->SetBinError(12,3.575874);
   hCCpi0inFV_stack_11->SetBinError(13,3.104829);
   hCCpi0inFV_stack_11->SetBinError(14,3.025275);
   hCCpi0inFV_stack_11->SetBinError(15,2.510891);
   hCCpi0inFV_stack_11->SetBinError(16,2.232075);
   hCCpi0inFV_stack_11->SetBinError(17,1.917414);
   hCCpi0inFV_stack_11->SetBinError(18,1.825454);
   hCCpi0inFV_stack_11->SetBinError(19,1.743989);
   hCCpi0inFV_stack_11->SetBinError(20,1.225574);
   hCCpi0inFV_stack_11->SetBinError(21,1.349846);
   hCCpi0inFV_stack_11->SetBinError(22,0.9999634);
   hCCpi0inFV_stack_11->SetBinError(23,1.194504);
   hCCpi0inFV_stack_11->SetBinError(24,1.000625);
   hCCpi0inFV_stack_11->SetBinError(25,1.051318);
   hCCpi0inFV_stack_11->SetBinError(26,1.867593);
   hCCpi0inFV_stack_11->SetEntries(5821);

   ci = 1542;
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
   hs8->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,3.907867);
   hNCinFV_stack_12->SetBinContent(4,2.057363);
   hNCinFV_stack_12->SetBinContent(5,0.536893);
   hNCinFV_stack_12->SetBinContent(6,0.3934307);
   hNCinFV_stack_12->SetBinContent(7,1.17353);
   hNCinFV_stack_12->SetBinContent(8,0.7834804);
   hNCinFV_stack_12->SetBinContent(9,0.7336084);
   hNCinFV_stack_12->SetBinContent(10,1.322064);
   hNCinFV_stack_12->SetBinContent(11,0.3917402);
   hNCinFV_stack_12->SetBinContent(12,0.8770706);
   hNCinFV_stack_12->SetBinContent(13,0.3934307);
   hNCinFV_stack_12->SetBinContent(14,0.1950248);
   hNCinFV_stack_12->SetBinContent(19,0.3401776);
   hNCinFV_stack_12->SetBinContent(26,0.1967154);
   hNCinFV_stack_12->SetBinError(0,0.9808007);
   hNCinFV_stack_12->SetBinError(4,0.7087455);
   hNCinFV_stack_12->SetBinError(5,0.3929602);
   hNCinFV_stack_12->SetBinError(6,0.2781975);
   hNCinFV_stack_12->SetBinError(7,0.4790957);
   hNCinFV_stack_12->SetBinError(8,0.3917439);
   hNCinFV_stack_12->SetBinError(9,0.4394482);
   hNCinFV_stack_12->SetBinError(10,0.5554667);
   hNCinFV_stack_12->SetBinError(11,0.2770047);
   hNCinFV_stack_12->SetBinError(12,0.5197486);
   hNCinFV_stack_12->SetBinError(13,0.2781975);
   hNCinFV_stack_12->SetBinError(14,0.1950249);
   hNCinFV_stack_12->SetBinError(19,0.3401776);
   hNCinFV_stack_12->SetBinError(26,0.1967154);
   hNCinFV_stack_12->SetEntries(59);

   ci = 1543;
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
   hs8->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,84.8851);
   hnumuCCinFV_stack_13->SetBinContent(1,5.279912);
   hnumuCCinFV_stack_13->SetBinContent(2,7.04884);
   hnumuCCinFV_stack_13->SetBinContent(3,19.98117);
   hnumuCCinFV_stack_13->SetBinContent(4,70.19096);
   hnumuCCinFV_stack_13->SetBinContent(5,42.48014);
   hnumuCCinFV_stack_13->SetBinContent(6,28.01087);
   hnumuCCinFV_stack_13->SetBinContent(7,33.56397);
   hnumuCCinFV_stack_13->SetBinContent(8,29.66554);
   hnumuCCinFV_stack_13->SetBinContent(9,22.72146);
   hnumuCCinFV_stack_13->SetBinContent(10,20.18112);
   hnumuCCinFV_stack_13->SetBinContent(11,16.60691);
   hnumuCCinFV_stack_13->SetBinContent(12,16.79286);
   hnumuCCinFV_stack_13->SetBinContent(13,11.27372);
   hnumuCCinFV_stack_13->SetBinContent(14,8.0031);
   hnumuCCinFV_stack_13->SetBinContent(15,9.548637);
   hnumuCCinFV_stack_13->SetBinContent(16,3.900411);
   hnumuCCinFV_stack_13->SetBinContent(17,6.251395);
   hnumuCCinFV_stack_13->SetBinContent(18,4.054778);
   hnumuCCinFV_stack_13->SetBinContent(19,3.791094);
   hnumuCCinFV_stack_13->SetBinContent(20,3.577087);
   hnumuCCinFV_stack_13->SetBinContent(21,1.908829);
   hnumuCCinFV_stack_13->SetBinContent(22,1.753108);
   hnumuCCinFV_stack_13->SetBinContent(23,2.236091);
   hnumuCCinFV_stack_13->SetBinContent(24,2.000729);
   hnumuCCinFV_stack_13->SetBinContent(25,1.270501);
   hnumuCCinFV_stack_13->SetBinContent(26,4.446451);
   hnumuCCinFV_stack_13->SetBinError(0,5.146252);
   hnumuCCinFV_stack_13->SetBinError(1,2.252252);
   hnumuCCinFV_stack_13->SetBinError(2,1.620095);
   hnumuCCinFV_stack_13->SetBinError(3,2.29954);
   hnumuCCinFV_stack_13->SetBinError(4,4.478632);
   hnumuCCinFV_stack_13->SetBinError(5,3.417792);
   hnumuCCinFV_stack_13->SetBinError(6,2.72421);
   hnumuCCinFV_stack_13->SetBinError(7,3.589299);
   hnumuCCinFV_stack_13->SetBinError(8,2.719764);
   hnumuCCinFV_stack_13->SetBinError(9,2.496516);
   hnumuCCinFV_stack_13->SetBinError(10,2.221811);
   hnumuCCinFV_stack_13->SetBinError(11,2.085211);
   hnumuCCinFV_stack_13->SetBinError(12,2.092949);
   hnumuCCinFV_stack_13->SetBinError(13,1.75922);
   hnumuCCinFV_stack_13->SetBinError(14,1.915672);
   hnumuCCinFV_stack_13->SetBinError(15,1.588949);
   hnumuCCinFV_stack_13->SetBinError(16,0.9059079);
   hnumuCCinFV_stack_13->SetBinError(17,1.246031);
   hnumuCCinFV_stack_13->SetBinError(18,1.049898);
   hnumuCCinFV_stack_13->SetBinError(19,0.9466567);
   hnumuCCinFV_stack_13->SetBinError(20,0.9553701);
   hnumuCCinFV_stack_13->SetBinError(21,0.6506224);
   hnumuCCinFV_stack_13->SetBinError(22,0.7042326);
   hnumuCCinFV_stack_13->SetBinError(23,0.8557801);
   hnumuCCinFV_stack_13->SetBinError(24,0.7343859);
   hnumuCCinFV_stack_13->SetBinError(25,0.5895188);
   hnumuCCinFV_stack_13->SetBinError(26,1.056906);
   hnumuCCinFV_stack_13->SetEntries(1889);

   ci = 1544;
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
   hs8->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,1.704137);
   hnueCCinFV_stack_14->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(4,0.5884556);
   hnueCCinFV_stack_14->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(7,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(8,0.2384502);
   hnueCCinFV_stack_14->SetBinContent(10,0.536893);
   hnueCCinFV_stack_14->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(13,0.536893);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.6803553);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(26,0.536893);
   hnueCCinFV_stack_14->SetBinError(0,0.6746521);
   hnueCCinFV_stack_14->SetBinError(2,0.1967154);
   hnueCCinFV_stack_14->SetBinError(4,0.3397478);
   hnueCCinFV_stack_14->SetBinError(5,0.3921167);
   hnueCCinFV_stack_14->SetBinError(6,0.2781975);
   hnueCCinFV_stack_14->SetBinError(7,0.3921167);
   hnueCCinFV_stack_14->SetBinError(8,0.2384502);
   hnueCCinFV_stack_14->SetBinError(10,0.3929602);
   hnueCCinFV_stack_14->SetBinError(12,0.1967154);
   hnueCCinFV_stack_14->SetBinError(13,0.3929602);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.4810838);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(19,0.1967154);
   hnueCCinFV_stack_14->SetBinError(26,0.3929602);
   hnueCCinFV_stack_14->SetEntries(30);

   ci = 1545;
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
   hs8->Add(hnueCCinFV_stack_14,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__23->SetBinContent(0,289.6482);
   hmcerror__23->SetBinContent(1,8.501575);
   hmcerror__23->SetBinContent(2,15.11696);
   hmcerror__23->SetBinContent(3,49.10891);
   hmcerror__23->SetBinContent(4,345.1033);
   hmcerror__23->SetBinContent(5,201.2281);
   hmcerror__23->SetBinContent(6,131.8712);
   hmcerror__23->SetBinContent(7,170.0332);
   hmcerror__23->SetBinContent(8,153.9693);
   hmcerror__23->SetBinContent(9,120.3987);
   hmcerror__23->SetBinContent(10,112.2307);
   hmcerror__23->SetBinContent(11,87.88669);
   hmcerror__23->SetBinContent(12,72.99225);
   hmcerror__23->SetBinContent(13,55.50022);
   hmcerror__23->SetBinContent(14,46.90622);
   hmcerror__23->SetBinContent(15,38.29982);
   hmcerror__23->SetBinContent(16,25.99326);
   hmcerror__23->SetBinContent(17,21.31147);
   hmcerror__23->SetBinContent(18,19.51618);
   hmcerror__23->SetBinContent(19,16.97832);
   hmcerror__23->SetBinContent(20,11.30806);
   hmcerror__23->SetBinContent(21,9.481523);
   hmcerror__23->SetBinContent(22,6.267451);
   hmcerror__23->SetBinContent(23,7.53764);
   hmcerror__23->SetBinContent(24,5.608755);
   hmcerror__23->SetBinContent(25,6.090362);
   hmcerror__23->SetBinContent(26,22.52944);
   hmcerror__23->SetBinError(0,9.298758);
   hmcerror__23->SetBinError(1,10.7528);
   hmcerror__23->SetBinError(2,10.01028);
   hmcerror__23->SetBinError(3,26.69724);
   hmcerror__23->SetBinError(4,97.7482);
   hmcerror__23->SetBinError(5,63.75769);
   hmcerror__23->SetBinError(6,44.05343);
   hmcerror__23->SetBinError(7,51.38628);
   hmcerror__23->SetBinError(8,52.99161);
   hmcerror__23->SetBinError(9,38.30935);
   hmcerror__23->SetBinError(10,43.21762);
   hmcerror__23->SetBinError(11,41.27476);
   hmcerror__23->SetBinError(12,35.12687);
   hmcerror__23->SetBinError(13,23.29713);
   hmcerror__23->SetBinError(14,23.87989);
   hmcerror__23->SetBinError(15,19.18346);
   hmcerror__23->SetBinError(16,16.18);
   hmcerror__23->SetBinError(17,15.77379);
   hmcerror__23->SetBinError(18,14.36243);
   hmcerror__23->SetBinError(19,14.79423);
   hmcerror__23->SetBinError(20,11.27859);
   hmcerror__23->SetBinError(21,11.70628);
   hmcerror__23->SetBinError(22,6.601909);
   hmcerror__23->SetBinError(23,8.328295);
   hmcerror__23->SetBinError(24,12.80794);
   hmcerror__23->SetBinError(25,9.471735);
   hmcerror__23->SetBinError(26,12.87251);
   hmcerror__23->SetEntries(2024.9);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   6,
   15,
   67,
   433,
   212,
   143,
   195,
   132,
   123,
   84,
   70,
   72,
   45,
   41,
   25,
   24,
   20,
   16,
   14,
   11,
   8,
   11,
   1,
   3,
   4};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   2.67925,
   4.0385,
   8.3119,
   20.80865,
   14.56022,
   11.95826,
   13.96424,
   11.48913,
   11.09054,
   9.2886,
   8.4925,
   8.6108,
   6.8416,
   6.5384,
   5.1474,
   5.0476,
   4.6266,
   4.1628,
   3.9102,
   3.4975,
   3.0307,
   3.4975,
   1,
   2.143368,
   2.29683};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   2.41858,
   3.8197,
   8.1094,
   20.80865,
   14.56022,
   11.95826,
   13.96424,
   11.48913,
   11.09054,
   9.0869,
   8.2902,
   8.4085,
   6.637,
   6.3331,
   4.9374,
   4.837,
   4.4133,
   3.9454,
   3.6898,
   3.27,
   2.7896,
   3.27,
   1.35971,
   1.72422,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-275,1225);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(499.1895);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1775.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

   ci = 1532;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 53.9","F");

   ci = 1533;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.1","F");

   ci = 1534;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.6","F");

   ci = 1535;
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

   ci = 1536;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.6","F");

   ci = 1537;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  21.5","F");

   ci = 1538;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  18.4","F");

   ci = 1539;
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

   ci = 1540;
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

   ci = 1541;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1216.4","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 9.2","F");

   ci = 1543;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 372.1","F");

   ci = 1544;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 5.0","F");

   ci = 1545;
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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   1.264801,
   0.6621887,
   0.5436333,
   0.2832433,
   0.3168428,
   0.3340641,
   0.3022131,
   0.3441701,
   0.3181875,
   0.3850784,
   0.4696361,
   0.4812411,
   0.4197665,
   0.5090985,
   0.500876,
   0.6224693,
   0.7401549,
   0.7359243,
   0.8713606,
   0.9973933,
   1.234642,
   1.053364,
   1.104894,
   2.283562,
   1.555201};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   1.264801,
   0.6621887,
   0.5436333,
   0.2832433,
   0.3168428,
   0.3340641,
   0.3022131,
   0.3441701,
   0.3181875,
   0.3850784,
   0.4696361,
   0.4812411,
   0.4197665,
   0.5090985,
   0.500876,
   0.6224693,
   0.7401549,
   0.7359243,
   0.8713606,
   0.9973933,
   1.234642,
   1.053364,
   1.104894,
   2.283562,
   1.555201};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-275,1225);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0.4668407,
   0.2671419,
   0.2106204,
   0.2200512,
   0.2233278,
   0.2204527,
   0.2217221,
   0.2206633,
   0.2314884,
   0.2215861,
   0.2425357,
   0.2447653,
   0.2441463,
   0.2464046,
   0.2457275,
   0.2672252,
   0.2460995,
   0.2596673,
   0.2830175,
   0.2788684,
   0.3614843,
   0.3005237,
   0.328596,
   0.3367316,
   0.3400434};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.4668407,
   0.2671419,
   0.2106204,
   0.2200512,
   0.2233278,
   0.2204527,
   0.2217221,
   0.2206633,
   0.2314884,
   0.2215861,
   0.2425357,
   0.2447653,
   0.2441463,
   0.2464046,
   0.2457275,
   0.2672252,
   0.2460995,
   0.2596673,
   0.2830175,
   0.2788684,
   0.3614843,
   0.3005237,
   0.328596,
   0.3367316,
   0.3400434};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-275,1225);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   0.7057515,
   0.9922628,
   1.364315,
   1.254697,
   1.053531,
   1.084391,
   1.146835,
   0.857314,
   1.021606,
   0.7484583,
   0.7964801,
   0.9864061,
   0.8108076,
   0.8740845,
   0.6527445,
   0.9233164,
   0.9384618,
   0.8198327,
   0.8245812,
   0.9727573,
   0.8437463,
   1.755099,
   0.1326675,
   0.5348781,
   0.6567755};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   0.3151475,
   0.2671502,
   0.1692544,
   0.06029688,
   0.07235677,
   0.09068137,
   0.08212653,
   0.07461961,
   0.09211509,
   0.08276345,
   0.09663011,
   0.1179687,
   0.1232716,
   0.139393,
   0.1343975,
   0.1941888,
   0.2170944,
   0.2133,
   0.2303055,
   0.3092926,
   0.3196428,
   0.5580418,
   0.1326675,
   0.3821468,
   0.3771254};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   0.2844861,
   0.2526764,
   0.1651309,
   0.06029688,
   0.07235677,
   0.09068137,
   0.08212653,
   0.07461961,
   0.09211509,
   0.08096626,
   0.09432828,
   0.1151972,
   0.1195851,
   0.1350162,
   0.1289144,
   0.1860867,
   0.2070857,
   0.2021605,
   0.2173243,
   0.2891742,
   0.2942144,
   0.5217432,
   0.1803894,
   0.3074158,
   0.3254093};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-275,1225);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.504527);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
