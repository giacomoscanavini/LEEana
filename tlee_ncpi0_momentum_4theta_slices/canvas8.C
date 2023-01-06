#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Tue Dec  6 22:18:04 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
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
   pad1->Range(-184.6154,-1.726644,1353.846,190.9305);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__22->SetBinContent(1,30.38615);
   hmc__22->SetBinContent(2,80.0146);
   hmc__22->SetBinContent(3,86.33219);
   hmc__22->SetBinContent(4,72.85532);
   hmc__22->SetBinContent(5,57.82577);
   hmc__22->SetBinContent(6,44.27292);
   hmc__22->SetBinContent(7,27.04141);
   hmc__22->SetBinContent(8,14.61634);
   hmc__22->SetBinContent(9,12.72921);
   hmc__22->SetBinContent(10,8.788794);
   hmc__22->SetBinContent(11,7.796283);
   hmc__22->SetBinContent(12,6.119898);
   hmc__22->SetBinContent(13,48.4874);
   hmc__22->SetBinError(1,13.0081);
   hmc__22->SetBinError(2,34.30779);
   hmc__22->SetBinError(3,32.03439);
   hmc__22->SetBinError(4,30.87484);
   hmc__22->SetBinError(5,22.96658);
   hmc__22->SetBinError(6,16.73804);
   hmc__22->SetBinError(7,11.23994);
   hmc__22->SetBinError(8,7.716102);
   hmc__22->SetBinError(9,8.156517);
   hmc__22->SetBinError(10,8.292877);
   hmc__22->SetBinError(11,10.92028);
   hmc__22->SetBinError(12,6.359408);
   hmc__22->SetBinError(13,17.46827);
   hmc__22->SetMinimum(-1.726644);
   hmc__22->SetMaximum(181.2976);
   hmc__22->SetEntries(551.2154);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",12,0,1200);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(90.64881);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,1.459983);
   hbadmatch_stack_1->SetBinContent(2,1.07451);
   hbadmatch_stack_1->SetBinContent(3,0.8556126);
   hbadmatch_stack_1->SetBinContent(4,0.5893211);
   hbadmatch_stack_1->SetBinContent(5,0.1967154);
   hbadmatch_stack_1->SetBinContent(6,0.2306697);
   hbadmatch_stack_1->SetBinContent(9,0.8394097);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.5052582);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.5329995);
   hbadmatch_stack_1->SetBinError(2,0.4468439);
   hbadmatch_stack_1->SetBinError(3,0.4557991);
   hbadmatch_stack_1->SetBinError(4,0.3402497);
   hbadmatch_stack_1->SetBinError(5,0.1967154);
   hbadmatch_stack_1->SetBinError(6,0.2306697);
   hbadmatch_stack_1->SetBinError(9,0.6732507);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.4021099);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetEntries(29);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,3.394015);
   hext_stack_2->SetBinContent(2,5.40824);
   hext_stack_2->SetBinContent(3,7.001504);
   hext_stack_2->SetBinContent(4,2.834603);
   hext_stack_2->SetBinContent(5,3.297453);
   hext_stack_2->SetBinContent(6,0.3243973);
   hext_stack_2->SetBinContent(7,0.3243973);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(13,1.544194);
   hext_stack_2->SetBinError(1,1.254957);
   hext_stack_2->SetBinError(2,1.63365);
   hext_stack_2->SetBinError(3,1.999946);
   hext_stack_2->SetBinError(4,1.106046);
   hext_stack_2->SetBinError(5,1.384641);
   hext_stack_2->SetBinError(6,0.3243973);
   hext_stack_2->SetBinError(7,0.3243973);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(13,0.7753719);
   hext_stack_2->SetEntries(53);

   ci = 1526;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.3942141);
   hdirt_stack_3->SetBinContent(3,0.7097415);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.2804494);
   hdirt_stack_3->SetBinError(3,0.3592986);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetEntries(8);

   ci = 1527;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,1.005851);
   houtFV_stack_4->SetBinContent(2,0.9801958);
   houtFV_stack_4->SetBinContent(3,1.895203);
   houtFV_stack_4->SetBinContent(4,1.138021);
   houtFV_stack_4->SetBinContent(5,1.617419);
   houtFV_stack_4->SetBinContent(6,1.551544);
   houtFV_stack_4->SetBinContent(7,0.7834804);
   houtFV_stack_4->SetBinContent(8,0.3934307);
   houtFV_stack_4->SetBinContent(9,0.3908268);
   houtFV_stack_4->SetBinContent(10,0.8442304);
   houtFV_stack_4->SetBinContent(11,0.1950248);
   houtFV_stack_4->SetBinContent(12,0.3917402);
   houtFV_stack_4->SetBinContent(13,2.077343);
   houtFV_stack_4->SetBinError(1,0.4873562);
   houtFV_stack_4->SetBinError(2,0.4383608);
   houtFV_stack_4->SetBinError(3,0.6366214);
   houtFV_stack_4->SetBinError(4,0.5652173);
   houtFV_stack_4->SetBinError(5,0.5938933);
   houtFV_stack_4->SetBinError(6,0.6505103);
   houtFV_stack_4->SetBinError(7,0.3917439);
   houtFV_stack_4->SetBinError(8,0.2781975);
   houtFV_stack_4->SetBinError(9,0.2923508);
   houtFV_stack_4->SetBinError(10,0.4531577);
   houtFV_stack_4->SetBinError(11,0.1950249);
   houtFV_stack_4->SetBinError(12,0.2770047);
   houtFV_stack_4->SetBinError(13,0.771048);
   houtFV_stack_4->SetEntries(63);

   ci = 1528;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.4962577);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9145765);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1889171);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3908812);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2717257);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09597109);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3620712);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2304524);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3691494);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.08018148);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1773705);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1725862);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.06663134);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1318796);
   hNCpi0inFVcoh_stack_5->SetEntries(56);

   ci = 1529;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.09544593);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8498369);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6158255);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1598754);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.06628121);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1474627);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.04612844);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1425271);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03748782);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2816475);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1880757);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07581116);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03562695);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1303516);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03332695);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.01523216);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1322496);
   hNCpi0inFVqe_stack_6->SetEntries(72);

   ci = 1530;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.066218);
   hNCpi0inFVres_stack_7->SetBinContent(2,22.71912);
   hNCpi0inFVres_stack_7->SetBinContent(3,31.80581);
   hNCpi0inFVres_stack_7->SetBinContent(4,30.75049);
   hNCpi0inFVres_stack_7->SetBinContent(5,27.16598);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.57612);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.994719);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.457267);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.735904);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.3014);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.366214);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.670434);
   hNCpi0inFVres_stack_7->SetBinContent(13,14.67077);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8477819);
   hNCpi0inFVres_stack_7->SetBinError(2,1.35659);
   hNCpi0inFVres_stack_7->SetBinError(3,1.792018);
   hNCpi0inFVres_stack_7->SetBinError(4,1.736987);
   hNCpi0inFVres_stack_7->SetBinError(5,1.564304);
   hNCpi0inFVres_stack_7->SetBinError(6,1.528613);
   hNCpi0inFVres_stack_7->SetBinError(7,1.232294);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7778521);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8471309);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5705966);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5956078);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6083743);
   hNCpi0inFVres_stack_7->SetBinError(13,1.293999);
   hNCpi0inFVres_stack_7->SetEntries(4249);

   ci = 1531;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.790373);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.829553);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.466788);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.554862);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.352072);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.080798);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.811515);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.776367);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.637236);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.303054);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9773185);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.369077);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.431136);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3234371);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9097695);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.828399);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9682791);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.113513);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.055148);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8654783);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5920804);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8415952);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4548203);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3927784);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6318107);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.256723);
   hNCpi0inFVdis_stack_8->SetEntries(1196);

   ci = 1532;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02640148);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2121951);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01899753);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1306177);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04222718);
   hNCpi0inFVmec_stack_9->SetEntries(7);

   ci = 1533;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,5.785532);
   hCCpi0inFV_stack_10->SetBinContent(2,16.69442);
   hCCpi0inFV_stack_10->SetBinContent(3,14.10808);
   hCCpi0inFV_stack_10->SetBinContent(4,12.64395);
   hCCpi0inFV_stack_10->SetBinContent(5,7.42974);
   hCCpi0inFV_stack_10->SetBinContent(6,8.719378);
   hCCpi0inFV_stack_10->SetBinContent(7,5.49715);
   hCCpi0inFV_stack_10->SetBinContent(8,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(9,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(10,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(11,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(12,1.35553);
   hCCpi0inFV_stack_10->SetBinContent(13,8.014002);
   hCCpi0inFV_stack_10->SetBinError(1,1.175715);
   hCCpi0inFV_stack_10->SetBinError(2,2.117082);
   hCCpi0inFV_stack_10->SetBinError(3,1.833294);
   hCCpi0inFV_stack_10->SetBinError(4,1.836733);
   hCCpi0inFV_stack_10->SetBinError(5,1.308438);
   hCCpi0inFV_stack_10->SetBinError(6,1.550449);
   hCCpi0inFV_stack_10->SetBinError(7,1.251194);
   hCCpi0inFV_stack_10->SetBinError(8,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(9,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(10,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(11,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(12,0.5682856);
   hCCpi0inFV_stack_10->SetBinError(13,1.45584);
   hCCpi0inFV_stack_10->SetEntries(369);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,6.855677);
   hNCinFV_stack_11->SetBinContent(2,16.35075);
   hNCinFV_stack_11->SetBinContent(3,14.95343);
   hNCinFV_stack_11->SetBinContent(4,8.605583);
   hNCinFV_stack_11->SetBinContent(5,6.668481);
   hNCinFV_stack_11->SetBinContent(6,5.978351);
   hNCinFV_stack_11->SetBinContent(7,3.749412);
   hNCinFV_stack_11->SetBinContent(8,1.922907);
   hNCinFV_stack_11->SetBinContent(9,0.6784184);
   hNCinFV_stack_11->SetBinContent(10,0.8483711);
   hNCinFV_stack_11->SetBinContent(11,0.8937213);
   hNCinFV_stack_11->SetBinContent(12,0.9643137);
   hNCinFV_stack_11->SetBinContent(13,4.76309);
   hNCinFV_stack_11->SetBinError(1,1.563577);
   hNCinFV_stack_11->SetBinError(2,2.311412);
   hNCinFV_stack_11->SetBinError(3,2.341074);
   hNCinFV_stack_11->SetBinError(4,1.740363);
   hNCinFV_stack_11->SetBinError(5,1.502187);
   hNCinFV_stack_11->SetBinError(6,1.406795);
   hNCinFV_stack_11->SetBinError(7,1.064288);
   hNCinFV_stack_11->SetBinError(8,1.030426);
   hNCinFV_stack_11->SetBinError(9,0.5314764);
   hNCinFV_stack_11->SetBinError(10,0.7197795);
   hNCinFV_stack_11->SetBinError(11,0.4696808);
   hNCinFV_stack_11->SetBinError(12,0.6370625);
   hNCinFV_stack_11->SetBinError(13,1.170996);
   hNCinFV_stack_11->SetEntries(276);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,2.672837);
   hnumuCCinFV_stack_12->SetBinContent(2,6.468416);
   hnumuCCinFV_stack_12->SetBinContent(3,5.808915);
   hnumuCCinFV_stack_12->SetBinContent(4,7.859888);
   hnumuCCinFV_stack_12->SetBinContent(5,2.444031);
   hnumuCCinFV_stack_12->SetBinContent(6,1.999038);
   hnumuCCinFV_stack_12->SetBinContent(7,2.61156);
   hnumuCCinFV_stack_12->SetBinContent(8,1.662242);
   hnumuCCinFV_stack_12->SetBinContent(9,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(10,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(11,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(13,4.141596);
   hnumuCCinFV_stack_12->SetBinError(1,0.7932897);
   hnumuCCinFV_stack_12->SetBinError(2,1.23415);
   hnumuCCinFV_stack_12->SetBinError(3,1.169625);
   hnumuCCinFV_stack_12->SetBinError(4,1.418967);
   hnumuCCinFV_stack_12->SetBinError(5,0.759648);
   hnumuCCinFV_stack_12->SetBinError(6,0.7339349);
   hnumuCCinFV_stack_12->SetBinError(7,0.8072093);
   hnumuCCinFV_stack_12->SetBinError(8,0.6513556);
   hnumuCCinFV_stack_12->SetBinError(9,0.340721);
   hnumuCCinFV_stack_12->SetBinError(10,0.340721);
   hnumuCCinFV_stack_12->SetBinError(11,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(13,1.007288);
   hnumuCCinFV_stack_12->SetEntries(170);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(2,0.536893);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,4.143953);
   hnueCCinFV_stack_13->SetBinError(2,0.3929602);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2781975);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,1.081125);
   hnueCCinFV_stack_13->SetEntries(27);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__23->SetBinContent(1,30.38615);
   hmcerror__23->SetBinContent(2,80.0146);
   hmcerror__23->SetBinContent(3,86.33219);
   hmcerror__23->SetBinContent(4,72.85532);
   hmcerror__23->SetBinContent(5,57.82577);
   hmcerror__23->SetBinContent(6,44.27292);
   hmcerror__23->SetBinContent(7,27.04141);
   hmcerror__23->SetBinContent(8,14.61634);
   hmcerror__23->SetBinContent(9,12.72921);
   hmcerror__23->SetBinContent(10,8.788794);
   hmcerror__23->SetBinContent(11,7.796283);
   hmcerror__23->SetBinContent(12,6.119898);
   hmcerror__23->SetBinContent(13,48.4874);
   hmcerror__23->SetBinError(1,13.0081);
   hmcerror__23->SetBinError(2,34.30779);
   hmcerror__23->SetBinError(3,32.03439);
   hmcerror__23->SetBinError(4,30.87484);
   hmcerror__23->SetBinError(5,22.96658);
   hmcerror__23->SetBinError(6,16.73804);
   hmcerror__23->SetBinError(7,11.23994);
   hmcerror__23->SetBinError(8,7.716102);
   hmcerror__23->SetBinError(9,8.156517);
   hmcerror__23->SetBinError(10,8.292877);
   hmcerror__23->SetBinError(11,10.92028);
   hmcerror__23->SetBinError(12,6.359408);
   hmcerror__23->SetBinError(13,17.46827);
   hmcerror__23->SetEntries(551.2154);

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
   
   Double_t _fx3029[12] = {
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
   1150};
   Double_t _fy3029[12] = {
   32,
   58,
   75,
   44,
   42,
   19,
   24,
   14,
   10,
   13,
   6,
   3};
   Double_t _felx3029[12] = {
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
   Double_t _fely3029[12] = {
   5.7977,
   7.7446,
   8.7852,
   6.7671,
   6.6155,
   4.5151,
   5.0476,
   3.9102,
   3.34883,
   3.77763,
   2.67925,
   2.143368};
   Double_t _fehx3029[12] = {
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
   Double_t _fehy3029[12] = {
   5.5904,
   7.5415,
   8.5831,
   6.5623,
   6.4104,
   4.3011,
   4.837,
   3.6898,
   3.1179,
   3.5552,
   2.41858,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1320);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(91.85575);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.9/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 340.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.9","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 23.0","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.5","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 11.2","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  2.5","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  164.6","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  53.9","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 79.7","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 68.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 33.2","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.4","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3030[12] = {
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
   1150};
   Double_t _fy3030[12] = {
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
   Double_t _felx3030[12] = {
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
   Double_t _fely3030[12] = {
   0.4280931,
   0.4287691,
   0.3710596,
   0.4237829,
   0.3971686,
   0.3780649,
   0.4156565,
   0.5279093,
   0.6407718,
   0.9435739,
   1.400703,
   1.039136};
   Double_t _fehx3030[12] = {
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
   Double_t _fehy3030[12] = {
   0.4280931,
   0.4287691,
   0.3710596,
   0.4237829,
   0.3971686,
   0.3780649,
   0.4156565,
   0.5279093,
   0.6407718,
   0.9435739,
   1.400703,
   1.039136};
   grae = new TGraphAsymmErrors(12,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1320);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3031[12] = {
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
   1150};
   Double_t _fy3031[12] = {
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
   Double_t _felx3031[12] = {
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
   Double_t _fely3031[12] = {
   0.3254509,
   0.3510139,
   0.3323137,
   0.3444988,
   0.342848,
   0.2988481,
   0.2689478,
   0.2946,
   0.3627845,
   0.3324735,
   0.3051644,
   0.4459101};
   Double_t _fehx3031[12] = {
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
   Double_t _fehy3031[12] = {
   0.3254509,
   0.3510139,
   0.3323137,
   0.3444988,
   0.342848,
   0.2988481,
   0.2689478,
   0.2946,
   0.3627845,
   0.3324735,
   0.3051644,
   0.4459101};
   grae = new TGraphAsymmErrors(12,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1320);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3032[12] = {
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
   1150};
   Double_t _fy3032[12] = {
   1.053111,
   0.7248677,
   0.8687374,
   0.6039366,
   0.7263198,
   0.4291563,
   0.8875277,
   0.9578321,
   0.7855948,
   1.479156,
   0.7695975,
   0.4902042};
   Double_t _felx3032[12] = {
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
   Double_t _fely3032[12] = {
   0.1908008,
   0.09678983,
   0.1017604,
   0.09288408,
   0.114404,
   0.1019833,
   0.1866619,
   0.2675225,
   0.2630824,
   0.4298235,
   0.3436574,
   0.3502293};
   Double_t _fehx3032[12] = {
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
   Double_t _fehy3032[12] = {
   0.1839786,
   0.09425155,
   0.09941946,
   0.09007303,
   0.1108571,
   0.09714968,
   0.1788738,
   0.2524435,
   0.2449406,
   0.4045151,
   0.3102222,
   0.28174};
   grae = new TGraphAsymmErrors(12,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1320);
   Graph_Graph3032->SetMinimum(0.1259774);
   Graph_Graph3032->SetMaximum(2.058041);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_theta3_FC_Np_bnb_12_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
