#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 17:36:57 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-4.119231,-5.22,3.957692,577.2221);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__4->SetBinContent(1,243.9075);
   hmc__4->SetBinContent(2,245.476);
   hmc__4->SetBinContent(3,243.4471);
   hmc__4->SetBinContent(4,236.1109);
   hmc__4->SetBinContent(5,212.2523);
   hmc__4->SetBinContent(6,220.3619);
   hmc__4->SetBinContent(7,237.4322);
   hmc__4->SetBinContent(8,226.1507);
   hmc__4->SetBinContent(9,223.7545);
   hmc__4->SetBinContent(10,224.176);
   hmc__4->SetBinContent(11,243.3516);
   hmc__4->SetBinContent(12,242.6317);
   hmc__4->SetBinContent(13,250.5082);
   hmc__4->SetBinContent(14,239.6429);
   hmc__4->SetBinContent(15,249.3032);
   hmc__4->SetBinContent(16,236.9134);
   hmc__4->SetBinContent(17,250.3602);
   hmc__4->SetBinContent(18,234.5472);
   hmc__4->SetBinContent(19,229.0879);
   hmc__4->SetBinContent(20,232.7131);
   hmc__4->SetBinContent(21,238.5947);
   hmc__4->SetBinContent(22,232.4913);
   hmc__4->SetBinContent(23,250.2443);
   hmc__4->SetBinContent(24,256.0532);
   hmc__4->SetBinError(1,66.38612);
   hmc__4->SetBinError(2,65.72831);
   hmc__4->SetBinError(3,68.00984);
   hmc__4->SetBinError(4,68.63816);
   hmc__4->SetBinError(5,57.17347);
   hmc__4->SetBinError(6,62.93588);
   hmc__4->SetBinError(7,62.77137);
   hmc__4->SetBinError(8,65.91435);
   hmc__4->SetBinError(9,61.87029);
   hmc__4->SetBinError(10,64.81285);
   hmc__4->SetBinError(11,69.79241);
   hmc__4->SetBinError(12,67.43303);
   hmc__4->SetBinError(13,67.34342);
   hmc__4->SetBinError(14,67.72686);
   hmc__4->SetBinError(15,72.17256);
   hmc__4->SetBinError(16,64.30362);
   hmc__4->SetBinError(17,65.42015);
   hmc__4->SetBinError(18,63.39233);
   hmc__4->SetBinError(19,62.46838);
   hmc__4->SetBinError(20,62.83593);
   hmc__4->SetBinError(21,66.09184);
   hmc__4->SetBinError(22,65.36291);
   hmc__4->SetBinError(23,68.3155);
   hmc__4->SetBinError(24,68.65664);
   hmc__4->SetBinError(25,0.3895343);
   hmc__4->SetMinimum(-5.22);
   hmc__4->SetMaximum(548.1);
   hmc__4->SetEntries(5638.682);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,-3.15,3.15);
   hs2_stack_2->SetMinimum(-3.571482e-09);
   hs2_stack_2->SetMaximum(268.8558);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.878585);
   hbadmatch_stack_1->SetBinContent(2,5.296851);
   hbadmatch_stack_1->SetBinContent(3,4.532267);
   hbadmatch_stack_1->SetBinContent(4,6.850095);
   hbadmatch_stack_1->SetBinContent(5,3.131548);
   hbadmatch_stack_1->SetBinContent(6,5.519797);
   hbadmatch_stack_1->SetBinContent(7,6.547035);
   hbadmatch_stack_1->SetBinContent(8,6.640673);
   hbadmatch_stack_1->SetBinContent(9,5.063828);
   hbadmatch_stack_1->SetBinContent(10,2.756316);
   hbadmatch_stack_1->SetBinContent(11,4.417144);
   hbadmatch_stack_1->SetBinContent(12,3.896732);
   hbadmatch_stack_1->SetBinContent(13,5.943861);
   hbadmatch_stack_1->SetBinContent(14,6.267603);
   hbadmatch_stack_1->SetBinContent(15,6.091739);
   hbadmatch_stack_1->SetBinContent(16,4.811086);
   hbadmatch_stack_1->SetBinContent(17,5.560145);
   hbadmatch_stack_1->SetBinContent(18,2.768069);
   hbadmatch_stack_1->SetBinContent(19,5.112312);
   hbadmatch_stack_1->SetBinContent(20,6.906148);
   hbadmatch_stack_1->SetBinContent(21,4.558878);
   hbadmatch_stack_1->SetBinContent(22,5.269376);
   hbadmatch_stack_1->SetBinContent(23,4.188668);
   hbadmatch_stack_1->SetBinContent(24,7.065978);
   hbadmatch_stack_1->SetBinError(1,1.192848);
   hbadmatch_stack_1->SetBinError(2,1.177444);
   hbadmatch_stack_1->SetBinError(3,1.038466);
   hbadmatch_stack_1->SetBinError(4,1.336585);
   hbadmatch_stack_1->SetBinError(5,0.8650008);
   hbadmatch_stack_1->SetBinError(6,1.210036);
   hbadmatch_stack_1->SetBinError(7,1.316298);
   hbadmatch_stack_1->SetBinError(8,1.424764);
   hbadmatch_stack_1->SetBinError(9,2.152274);
   hbadmatch_stack_1->SetBinError(10,0.8160028);
   hbadmatch_stack_1->SetBinError(11,1.013774);
   hbadmatch_stack_1->SetBinError(12,1.015131);
   hbadmatch_stack_1->SetBinError(13,1.579614);
   hbadmatch_stack_1->SetBinError(14,2.047966);
   hbadmatch_stack_1->SetBinError(15,1.321522);
   hbadmatch_stack_1->SetBinError(16,1.180977);
   hbadmatch_stack_1->SetBinError(17,1.226254);
   hbadmatch_stack_1->SetBinError(18,0.9124001);
   hbadmatch_stack_1->SetBinError(19,1.303466);
   hbadmatch_stack_1->SetBinError(20,1.56079);
   hbadmatch_stack_1->SetBinError(21,1.151019);
   hbadmatch_stack_1->SetBinError(22,1.225376);
   hbadmatch_stack_1->SetBinError(23,1.798466);
   hbadmatch_stack_1->SetBinError(24,1.405939);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,14.59838);
   hext_stack_2->SetBinContent(2,13.37418);
   hext_stack_2->SetBinContent(3,15.48219);
   hext_stack_2->SetBinContent(4,19.77438);
   hext_stack_2->SetBinContent(5,19.10404);
   hext_stack_2->SetBinContent(6,21.40078);
   hext_stack_2->SetBinContent(7,27.13782);
   hext_stack_2->SetBinContent(8,23.79565);
   hext_stack_2->SetBinContent(9,17.92179);
   hext_stack_2->SetBinContent(10,12.95322);
   hext_stack_2->SetBinContent(11,14.81463);
   hext_stack_2->SetBinContent(12,12.11407);
   hext_stack_2->SetBinContent(13,8.414427);
   hext_stack_2->SetBinContent(14,10.76023);
   hext_stack_2->SetBinContent(15,12.8004);
   hext_stack_2->SetBinContent(16,13.05419);
   hext_stack_2->SetBinContent(17,19.5206);
   hext_stack_2->SetBinContent(18,18.81278);
   hext_stack_2->SetBinContent(19,11.9988);
   hext_stack_2->SetBinContent(20,15.5528);
   hext_stack_2->SetBinContent(21,14.00861);
   hext_stack_2->SetBinContent(22,12.95599);
   hext_stack_2->SetBinContent(23,14.18738);
   hext_stack_2->SetBinContent(24,12.97199);
   hext_stack_2->SetBinError(1,2.452495);
   hext_stack_2->SetBinError(2,2.320267);
   hext_stack_2->SetBinError(3,2.543923);
   hext_stack_2->SetBinError(4,2.846203);
   hext_stack_2->SetBinError(5,2.914448);
   hext_stack_2->SetBinError(6,2.960095);
   hext_stack_2->SetBinError(7,3.416333);
   hext_stack_2->SetBinError(8,3.238805);
   hext_stack_2->SetBinError(9,2.731937);
   hext_stack_2->SetBinError(10,2.370806);
   hext_stack_2->SetBinError(11,2.555065);
   hext_stack_2->SetBinError(12,2.399699);
   hext_stack_2->SetBinError(13,1.95221);
   hext_stack_2->SetBinError(14,2.192955);
   hext_stack_2->SetBinError(15,2.331193);
   hext_stack_2->SetBinError(16,2.326699);
   hext_stack_2->SetBinError(17,2.849878);
   hext_stack_2->SetBinError(18,2.778325);
   hext_stack_2->SetBinError(19,2.244491);
   hext_stack_2->SetBinError(20,2.568601);
   hext_stack_2->SetBinError(21,2.448777);
   hext_stack_2->SetBinError(22,2.298781);
   hext_stack_2->SetBinError(23,2.390457);
   hext_stack_2->SetBinError(24,2.31375);
   hext_stack_2->SetEntries(946);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9176354);
   hdirt_stack_3->SetBinContent(2,1.957913);
   hdirt_stack_3->SetBinContent(3,2.414306);
   hdirt_stack_3->SetBinContent(4,2.270262);
   hdirt_stack_3->SetBinContent(5,1.532801);
   hdirt_stack_3->SetBinContent(6,2.360208);
   hdirt_stack_3->SetBinContent(7,2.066558);
   hdirt_stack_3->SetBinContent(8,2.121249);
   hdirt_stack_3->SetBinContent(9,1.275265);
   hdirt_stack_3->SetBinContent(10,3.094372);
   hdirt_stack_3->SetBinContent(11,1.840513);
   hdirt_stack_3->SetBinContent(12,1.084837);
   hdirt_stack_3->SetBinContent(13,2.513026);
   hdirt_stack_3->SetBinContent(14,2.89648);
   hdirt_stack_3->SetBinContent(15,1.971318);
   hdirt_stack_3->SetBinContent(16,2.276055);
   hdirt_stack_3->SetBinContent(17,2.324887);
   hdirt_stack_3->SetBinContent(18,2.004363);
   hdirt_stack_3->SetBinContent(19,2.343478);
   hdirt_stack_3->SetBinContent(20,2.110675);
   hdirt_stack_3->SetBinContent(21,2.156129);
   hdirt_stack_3->SetBinContent(22,1.696352);
   hdirt_stack_3->SetBinContent(23,2.207879);
   hdirt_stack_3->SetBinContent(24,1.8281);
   hdirt_stack_3->SetBinError(1,0.4235178);
   hdirt_stack_3->SetBinError(2,0.7677064);
   hdirt_stack_3->SetBinError(3,0.8268798);
   hdirt_stack_3->SetBinError(4,0.8428556);
   hdirt_stack_3->SetBinError(5,0.5522075);
   hdirt_stack_3->SetBinError(6,0.846084);
   hdirt_stack_3->SetBinError(7,0.6989652);
   hdirt_stack_3->SetBinError(8,0.6899738);
   hdirt_stack_3->SetBinError(9,0.6411534);
   hdirt_stack_3->SetBinError(10,1.277571);
   hdirt_stack_3->SetBinError(11,0.7356933);
   hdirt_stack_3->SetBinError(12,0.5135383);
   hdirt_stack_3->SetBinError(13,0.9094446);
   hdirt_stack_3->SetBinError(14,1.158908);
   hdirt_stack_3->SetBinError(15,0.6867139);
   hdirt_stack_3->SetBinError(16,0.7115605);
   hdirt_stack_3->SetBinError(17,0.7981602);
   hdirt_stack_3->SetBinError(18,0.7490278);
   hdirt_stack_3->SetBinError(19,0.8213422);
   hdirt_stack_3->SetBinError(20,0.8207916);
   hdirt_stack_3->SetBinError(21,0.7230454);
   hdirt_stack_3->SetBinError(22,0.7235753);
   hdirt_stack_3->SetBinError(23,0.7632738);
   hdirt_stack_3->SetBinError(24,0.6771483);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,17.28895);
   houtFV_stack_4->SetBinContent(2,16.31254);
   houtFV_stack_4->SetBinContent(3,17.50014);
   houtFV_stack_4->SetBinContent(4,16.3169);
   houtFV_stack_4->SetBinContent(5,12.71056);
   houtFV_stack_4->SetBinContent(6,15.05888);
   houtFV_stack_4->SetBinContent(7,16.03804);
   houtFV_stack_4->SetBinContent(8,14.11013);
   houtFV_stack_4->SetBinContent(9,16.71426);
   houtFV_stack_4->SetBinContent(10,15.94868);
   houtFV_stack_4->SetBinContent(11,16.9194);
   houtFV_stack_4->SetBinContent(12,18.28382);
   houtFV_stack_4->SetBinContent(13,14.96297);
   houtFV_stack_4->SetBinContent(14,16.99172);
   houtFV_stack_4->SetBinContent(15,17.68081);
   houtFV_stack_4->SetBinContent(16,19.78673);
   houtFV_stack_4->SetBinContent(17,16.3308);
   houtFV_stack_4->SetBinContent(18,16.80773);
   houtFV_stack_4->SetBinContent(19,16.7109);
   houtFV_stack_4->SetBinContent(20,15.30509);
   houtFV_stack_4->SetBinContent(21,17.09483);
   houtFV_stack_4->SetBinContent(22,17.39312);
   houtFV_stack_4->SetBinContent(23,17.82451);
   houtFV_stack_4->SetBinContent(24,17.13192);
   houtFV_stack_4->SetBinError(1,2.116178);
   houtFV_stack_4->SetBinError(2,1.985658);
   houtFV_stack_4->SetBinError(3,2.113165);
   houtFV_stack_4->SetBinError(4,2.020225);
   houtFV_stack_4->SetBinError(5,1.755198);
   houtFV_stack_4->SetBinError(6,1.936588);
   houtFV_stack_4->SetBinError(7,2.018409);
   houtFV_stack_4->SetBinError(8,1.866756);
   houtFV_stack_4->SetBinError(9,2.055107);
   houtFV_stack_4->SetBinError(10,2.054476);
   houtFV_stack_4->SetBinError(11,2.001683);
   houtFV_stack_4->SetBinError(12,2.156798);
   houtFV_stack_4->SetBinError(13,1.934894);
   houtFV_stack_4->SetBinError(14,2.042707);
   houtFV_stack_4->SetBinError(15,2.165476);
   houtFV_stack_4->SetBinError(16,2.203998);
   houtFV_stack_4->SetBinError(17,2.026925);
   houtFV_stack_4->SetBinError(18,2.049823);
   houtFV_stack_4->SetBinError(19,2.078268);
   houtFV_stack_4->SetBinError(20,1.929918);
   houtFV_stack_4->SetBinError(21,2.038693);
   houtFV_stack_4->SetBinError(22,2.062758);
   houtFV_stack_4->SetBinError(23,2.140229);
   houtFV_stack_4->SetBinError(24,2.027592);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.697098);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.318284);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.388702);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.44367);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.823564);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.609574);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.83203);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.81866);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.79292);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.0471);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.998598);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.459952);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.449079);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.861506);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.579594);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.500302);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.098492);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.372588);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.292464);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.989052);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.835102);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.642714);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.978346);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.904192);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6208459);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5571321);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.609191);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5944781);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7238398);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5935497);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5732015);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6305907);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6238164);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.771809);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5603252);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6716378);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7602503);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.615283);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4516762);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6117412);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6516862);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5533349);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6761133);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6433211);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6193288);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7381714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7573005);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6864919);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.29669);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.227272);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9770041);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.462594);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.297522);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.409122);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.478876);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.08794);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8644038);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.36794);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.225944);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3492176);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3365421);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3542895);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3476347);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3757913);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3799115);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4674858);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3769979);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2652967);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4493736);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3744943);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,105.9518);
   hNCpi0inFVres_stack_7->SetBinContent(2,112.7439);
   hNCpi0inFVres_stack_7->SetBinContent(3,103.3244);
   hNCpi0inFVres_stack_7->SetBinContent(4,96.88629);
   hNCpi0inFVres_stack_7->SetBinContent(5,94.60147);
   hNCpi0inFVres_stack_7->SetBinContent(6,98.42245);
   hNCpi0inFVres_stack_7->SetBinContent(7,97.44708);
   hNCpi0inFVres_stack_7->SetBinContent(8,93.60387);
   hNCpi0inFVres_stack_7->SetBinContent(9,98.71709);
   hNCpi0inFVres_stack_7->SetBinContent(10,92.66475);
   hNCpi0inFVres_stack_7->SetBinContent(11,107.5764);
   hNCpi0inFVres_stack_7->SetBinContent(12,105.8902);
   hNCpi0inFVres_stack_7->SetBinContent(13,108.5513);
   hNCpi0inFVres_stack_7->SetBinContent(14,106.4037);
   hNCpi0inFVres_stack_7->SetBinContent(15,109.5895);
   hNCpi0inFVres_stack_7->SetBinContent(16,99.55891);
   hNCpi0inFVres_stack_7->SetBinContent(17,106.2524);
   hNCpi0inFVres_stack_7->SetBinContent(18,99.51646);
   hNCpi0inFVres_stack_7->SetBinContent(19,98.1109);
   hNCpi0inFVres_stack_7->SetBinContent(20,101.0837);
   hNCpi0inFVres_stack_7->SetBinContent(21,105.3804);
   hNCpi0inFVres_stack_7->SetBinContent(22,105.8347);
   hNCpi0inFVres_stack_7->SetBinContent(23,112.3629);
   hNCpi0inFVres_stack_7->SetBinContent(24,109.7476);
   hNCpi0inFVres_stack_7->SetBinError(1,3.344453);
   hNCpi0inFVres_stack_7->SetBinError(2,3.518251);
   hNCpi0inFVres_stack_7->SetBinError(3,3.289055);
   hNCpi0inFVres_stack_7->SetBinError(4,3.20107);
   hNCpi0inFVres_stack_7->SetBinError(5,3.18072);
   hNCpi0inFVres_stack_7->SetBinError(6,3.21375);
   hNCpi0inFVres_stack_7->SetBinError(7,3.26258);
   hNCpi0inFVres_stack_7->SetBinError(8,3.137238);
   hNCpi0inFVres_stack_7->SetBinError(9,3.264756);
   hNCpi0inFVres_stack_7->SetBinError(10,3.154158);
   hNCpi0inFVres_stack_7->SetBinError(11,3.428222);
   hNCpi0inFVres_stack_7->SetBinError(12,3.35724);
   hNCpi0inFVres_stack_7->SetBinError(13,3.439043);
   hNCpi0inFVres_stack_7->SetBinError(14,3.35666);
   hNCpi0inFVres_stack_7->SetBinError(15,3.455119);
   hNCpi0inFVres_stack_7->SetBinError(16,3.292781);
   hNCpi0inFVres_stack_7->SetBinError(17,3.387028);
   hNCpi0inFVres_stack_7->SetBinError(18,3.289386);
   hNCpi0inFVres_stack_7->SetBinError(19,3.204614);
   hNCpi0inFVres_stack_7->SetBinError(20,3.265472);
   hNCpi0inFVres_stack_7->SetBinError(21,3.35753);
   hNCpi0inFVres_stack_7->SetBinError(22,3.333602);
   hNCpi0inFVres_stack_7->SetBinError(23,3.505148);
   hNCpi0inFVres_stack_7->SetBinError(24,3.462208);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,18.52766);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.94965);
   hNCpi0inFVdis_stack_8->SetBinContent(3,23.35756);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.22808);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.1335);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.45042);
   hNCpi0inFVdis_stack_8->SetBinContent(7,19.43275);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.86895);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.12951);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.53639);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.11448);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.26261);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.37856);
   hNCpi0inFVdis_stack_8->SetBinContent(14,20.065);
   hNCpi0inFVdis_stack_8->SetBinContent(15,21.72223);
   hNCpi0inFVdis_stack_8->SetBinContent(16,21.88397);
   hNCpi0inFVdis_stack_8->SetBinContent(17,20.30927);
   hNCpi0inFVdis_stack_8->SetBinContent(18,19.77238);
   hNCpi0inFVdis_stack_8->SetBinContent(19,17.8755);
   hNCpi0inFVdis_stack_8->SetBinContent(20,19.16936);
   hNCpi0inFVdis_stack_8->SetBinContent(21,20.09007);
   hNCpi0inFVdis_stack_8->SetBinContent(22,21.1511);
   hNCpi0inFVdis_stack_8->SetBinContent(23,20.19388);
   hNCpi0inFVdis_stack_8->SetBinContent(24,17.42294);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.357971);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.401993);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.657015);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.405759);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.449382);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.2419);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.379534);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.45579);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.427282);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.46483);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.367112);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.30777);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.58623);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.467904);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.514772);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.482262);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.405297);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.462813);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.365046);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.364547);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.425554);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.491837);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.51907);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.284724);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.153118);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.3909362);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1050124);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2764336);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,36.46173);
   hCCpi0inFV_stack_10->SetBinContent(2,31.52384);
   hCCpi0inFV_stack_10->SetBinContent(3,33.03432);
   hCCpi0inFV_stack_10->SetBinContent(4,29.99429);
   hCCpi0inFV_stack_10->SetBinContent(5,25.55968);
   hCCpi0inFV_stack_10->SetBinContent(6,23.61905);
   hCCpi0inFV_stack_10->SetBinContent(7,29.79678);
   hCCpi0inFV_stack_10->SetBinContent(8,25.77847);
   hCCpi0inFV_stack_10->SetBinContent(9,28.42826);
   hCCpi0inFV_stack_10->SetBinContent(10,38.41511);
   hCCpi0inFV_stack_10->SetBinContent(11,37.68738);
   hCCpi0inFV_stack_10->SetBinContent(12,42.33511);
   hCCpi0inFV_stack_10->SetBinContent(13,35.26993);
   hCCpi0inFV_stack_10->SetBinContent(14,30.84683);
   hCCpi0inFV_stack_10->SetBinContent(15,37.36271);
   hCCpi0inFV_stack_10->SetBinContent(16,29.12518);
   hCCpi0inFV_stack_10->SetBinContent(17,34.08533);
   hCCpi0inFV_stack_10->SetBinContent(18,29.08301);
   hCCpi0inFV_stack_10->SetBinContent(19,31.94115);
   hCCpi0inFV_stack_10->SetBinContent(20,26.80604);
   hCCpi0inFV_stack_10->SetBinContent(21,35.50528);
   hCCpi0inFV_stack_10->SetBinContent(22,28.94826);
   hCCpi0inFV_stack_10->SetBinContent(23,38.37983);
   hCCpi0inFV_stack_10->SetBinContent(24,35.93368);
   hCCpi0inFV_stack_10->SetBinError(1,3.039585);
   hCCpi0inFV_stack_10->SetBinError(2,2.807878);
   hCCpi0inFV_stack_10->SetBinError(3,2.8636);
   hCCpi0inFV_stack_10->SetBinError(4,2.758393);
   hCCpi0inFV_stack_10->SetBinError(5,2.469571);
   hCCpi0inFV_stack_10->SetBinError(6,2.415437);
   hCCpi0inFV_stack_10->SetBinError(7,2.751358);
   hCCpi0inFV_stack_10->SetBinError(8,2.547969);
   hCCpi0inFV_stack_10->SetBinError(9,2.58953);
   hCCpi0inFV_stack_10->SetBinError(10,3.177438);
   hCCpi0inFV_stack_10->SetBinError(11,3.19895);
   hCCpi0inFV_stack_10->SetBinError(12,3.228541);
   hCCpi0inFV_stack_10->SetBinError(13,2.972913);
   hCCpi0inFV_stack_10->SetBinError(14,2.771112);
   hCCpi0inFV_stack_10->SetBinError(15,3.016851);
   hCCpi0inFV_stack_10->SetBinError(16,2.661785);
   hCCpi0inFV_stack_10->SetBinError(17,2.913846);
   hCCpi0inFV_stack_10->SetBinError(18,2.706102);
   hCCpi0inFV_stack_10->SetBinError(19,2.836958);
   hCCpi0inFV_stack_10->SetBinError(20,2.614201);
   hCCpi0inFV_stack_10->SetBinError(21,3.018411);
   hCCpi0inFV_stack_10->SetBinError(22,2.729235);
   hCCpi0inFV_stack_10->SetBinError(23,3.060173);
   hCCpi0inFV_stack_10->SetBinError(24,2.997742);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,15.86683);
   hNCinFV_stack_11->SetBinContent(2,18.46724);
   hNCinFV_stack_11->SetBinContent(3,23.54925);
   hNCinFV_stack_11->SetBinContent(4,19.15774);
   hNCinFV_stack_11->SetBinContent(5,12.35916);
   hNCinFV_stack_11->SetBinContent(6,18.11657);
   hNCinFV_stack_11->SetBinContent(7,19.20146);
   hNCinFV_stack_11->SetBinContent(8,17.3588);
   hNCinFV_stack_11->SetBinContent(9,15.43705);
   hNCinFV_stack_11->SetBinContent(10,17.48258);
   hNCinFV_stack_11->SetBinContent(11,20.51);
   hNCinFV_stack_11->SetBinContent(12,16.16052);
   hNCinFV_stack_11->SetBinContent(13,19.03662);
   hNCinFV_stack_11->SetBinContent(14,18.69378);
   hNCinFV_stack_11->SetBinContent(15,22.51241);
   hNCinFV_stack_11->SetBinContent(16,17.58909);
   hNCinFV_stack_11->SetBinContent(17,19.80513);
   hNCinFV_stack_11->SetBinContent(18,18.99629);
   hNCinFV_stack_11->SetBinContent(19,17.5874);
   hNCinFV_stack_11->SetBinContent(20,19.7299);
   hNCinFV_stack_11->SetBinContent(21,15.63208);
   hNCinFV_stack_11->SetBinContent(22,17.68714);
   hNCinFV_stack_11->SetBinContent(23,17.74039);
   hNCinFV_stack_11->SetBinContent(24,19.95136);
   hNCinFV_stack_11->SetBinError(1,2.010203);
   hNCinFV_stack_11->SetBinError(2,2.121715);
   hNCinFV_stack_11->SetBinError(3,2.427304);
   hNCinFV_stack_11->SetBinError(4,2.176486);
   hNCinFV_stack_11->SetBinError(5,1.777355);
   hNCinFV_stack_11->SetBinError(6,2.154236);
   hNCinFV_stack_11->SetBinError(7,2.212107);
   hNCinFV_stack_11->SetBinError(8,2.05875);
   hNCinFV_stack_11->SetBinError(9,2.002117);
   hNCinFV_stack_11->SetBinError(10,2.122771);
   hNCinFV_stack_11->SetBinError(11,2.279619);
   hNCinFV_stack_11->SetBinError(12,2.048808);
   hNCinFV_stack_11->SetBinError(13,2.237501);
   hNCinFV_stack_11->SetBinError(14,2.086544);
   hNCinFV_stack_11->SetBinError(15,2.39513);
   hNCinFV_stack_11->SetBinError(16,2.104638);
   hNCinFV_stack_11->SetBinError(17,2.239376);
   hNCinFV_stack_11->SetBinError(18,2.202592);
   hNCinFV_stack_11->SetBinError(19,2.104481);
   hNCinFV_stack_11->SetBinError(20,2.246002);
   hNCinFV_stack_11->SetBinError(21,2.011593);
   hNCinFV_stack_11->SetBinError(22,2.085555);
   hNCinFV_stack_11->SetBinError(23,2.076346);
   hNCinFV_stack_11->SetBinError(24,2.212358);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,21.21338);
   hnumuCCinFV_stack_12->SetBinContent(2,20.94473);
   hnumuCCinFV_stack_12->SetBinContent(3,14.58777);
   hnumuCCinFV_stack_12->SetBinContent(4,18.5656);
   hnumuCCinFV_stack_12->SetBinContent(5,16.06026);
   hnumuCCinFV_stack_12->SetBinContent(6,12.47041);
   hnumuCCinFV_stack_12->SetBinContent(7,14.69142);
   hnumuCCinFV_stack_12->SetBinContent(8,17.11507);
   hnumuCCinFV_stack_12->SetBinContent(9,13.3269);
   hnumuCCinFV_stack_12->SetBinContent(10,14.45835);
   hnumuCCinFV_stack_12->SetBinContent(11,16.65948);
   hnumuCCinFV_stack_12->SetBinContent(12,20.56059);
   hnumuCCinFV_stack_12->SetBinContent(13,25.34586);
   hnumuCCinFV_stack_12->SetBinContent(14,22.15905);
   hnumuCCinFV_stack_12->SetBinContent(15,14.73946);
   hnumuCCinFV_stack_12->SetBinContent(16,21.76785);
   hnumuCCinFV_stack_12->SetBinContent(17,18.00582);
   hnumuCCinFV_stack_12->SetBinContent(18,21.32884);
   hnumuCCinFV_stack_12->SetBinContent(19,21.36247);
   hnumuCCinFV_stack_12->SetBinContent(20,18.4181);
   hnumuCCinFV_stack_12->SetBinContent(21,18.87819);
   hnumuCCinFV_stack_12->SetBinContent(22,14.71512);
   hnumuCCinFV_stack_12->SetBinContent(23,14.67651);
   hnumuCCinFV_stack_12->SetBinContent(24,27.35256);
   hnumuCCinFV_stack_12->SetBinError(1,2.58057);
   hnumuCCinFV_stack_12->SetBinError(2,2.505087);
   hnumuCCinFV_stack_12->SetBinError(3,1.913607);
   hnumuCCinFV_stack_12->SetBinError(4,2.53666);
   hnumuCCinFV_stack_12->SetBinError(5,2.296977);
   hnumuCCinFV_stack_12->SetBinError(6,1.845171);
   hnumuCCinFV_stack_12->SetBinError(7,1.955682);
   hnumuCCinFV_stack_12->SetBinError(8,2.208603);
   hnumuCCinFV_stack_12->SetBinError(9,2.328151);
   hnumuCCinFV_stack_12->SetBinError(10,2.076315);
   hnumuCCinFV_stack_12->SetBinError(11,2.183904);
   hnumuCCinFV_stack_12->SetBinError(12,2.786437);
   hnumuCCinFV_stack_12->SetBinError(13,3.00184);
   hnumuCCinFV_stack_12->SetBinError(14,2.603838);
   hnumuCCinFV_stack_12->SetBinError(15,2.053057);
   hnumuCCinFV_stack_12->SetBinError(16,2.826454);
   hnumuCCinFV_stack_12->SetBinError(17,2.387617);
   hnumuCCinFV_stack_12->SetBinError(18,2.846392);
   hnumuCCinFV_stack_12->SetBinError(19,3.214477);
   hnumuCCinFV_stack_12->SetBinError(20,3.276523);
   hnumuCCinFV_stack_12->SetBinError(21,2.519293);
   hnumuCCinFV_stack_12->SetBinError(22,2.065771);
   hnumuCCinFV_stack_12->SetBinError(23,1.959464);
   hnumuCCinFV_stack_12->SetBinError(24,3.128987);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.836492);
   hnueCCinFV_stack_13->SetBinContent(2,1.513463);
   hnueCCinFV_stack_13->SetBinContent(3,0.9516344);
   hnueCCinFV_stack_13->SetBinContent(4,3.368285);
   hnueCCinFV_stack_13->SetBinContent(5,1.924801);
   hnueCCinFV_stack_13->SetBinContent(6,2.328856);
   hnueCCinFV_stack_13->SetBinContent(7,1.306526);
   hnueCCinFV_stack_13->SetBinContent(8,1.085676);
   hnueCCinFV_stack_13->SetBinContent(9,3.361568);
   hnueCCinFV_stack_13->SetBinContent(10,1.205148);
   hnueCCinFV_stack_13->SetBinContent(11,0.8797531);
   hnueCCinFV_stack_13->SetBinContent(12,1.2857);
   hnueCCinFV_stack_13->SetBinContent(13,2.205514);
   hnueCCinFV_stack_13->SetBinContent(15,0.7183912);
   hnueCCinFV_stack_13->SetBinContent(16,2.220988);
   hnueCCinFV_stack_13->SetBinContent(17,3.481214);
   hnueCCinFV_stack_13->SetBinContent(18,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(19,1.139384);
   hnueCCinFV_stack_13->SetBinContent(20,2.498574);
   hnueCCinFV_stack_13->SetBinContent(21,0.8556478);
   hnueCCinFV_stack_13->SetBinContent(22,0.7178028);
   hnueCCinFV_stack_13->SetBinContent(23,2.541492);
   hnueCCinFV_stack_13->SetBinContent(24,1.516921);
   hnueCCinFV_stack_13->SetBinError(1,1.665403);
   hnueCCinFV_stack_13->SetBinError(2,0.6488335);
   hnueCCinFV_stack_13->SetBinError(3,0.4905563);
   hnueCCinFV_stack_13->SetBinError(4,1.364436);
   hnueCCinFV_stack_13->SetBinError(5,0.758036);
   hnueCCinFV_stack_13->SetBinError(6,0.8285874);
   hnueCCinFV_stack_13->SetBinError(7,0.6082919);
   hnueCCinFV_stack_13->SetBinError(8,0.6895381);
   hnueCCinFV_stack_13->SetBinError(9,1.230121);
   hnueCCinFV_stack_13->SetBinError(10,0.791697);
   hnueCCinFV_stack_13->SetBinError(11,0.5371743);
   hnueCCinFV_stack_13->SetBinError(12,0.6099762);
   hnueCCinFV_stack_13->SetBinError(13,0.7580284);
   hnueCCinFV_stack_13->SetBinError(15,0.4282902);
   hnueCCinFV_stack_13->SetBinError(16,0.8224923);
   hnueCCinFV_stack_13->SetBinError(17,1.516196);
   hnueCCinFV_stack_13->SetBinError(18,0.4937343);
   hnueCCinFV_stack_13->SetBinError(19,0.524943);
   hnueCCinFV_stack_13->SetBinError(20,0.9609435);
   hnueCCinFV_stack_13->SetBinError(21,0.4293986);
   hnueCCinFV_stack_13->SetBinError(22,0.4132265);
   hnueCCinFV_stack_13->SetBinError(23,0.9525097);
   hnueCCinFV_stack_13->SetBinError(24,0.5800831);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__5->SetBinContent(1,243.9075);
   hmcerror__5->SetBinContent(2,245.476);
   hmcerror__5->SetBinContent(3,243.4471);
   hmcerror__5->SetBinContent(4,236.1109);
   hmcerror__5->SetBinContent(5,212.2523);
   hmcerror__5->SetBinContent(6,220.3619);
   hmcerror__5->SetBinContent(7,237.4322);
   hmcerror__5->SetBinContent(8,226.1507);
   hmcerror__5->SetBinContent(9,223.7545);
   hmcerror__5->SetBinContent(10,224.176);
   hmcerror__5->SetBinContent(11,243.3516);
   hmcerror__5->SetBinContent(12,242.6317);
   hmcerror__5->SetBinContent(13,250.5082);
   hmcerror__5->SetBinContent(14,239.6429);
   hmcerror__5->SetBinContent(15,249.3032);
   hmcerror__5->SetBinContent(16,236.9134);
   hmcerror__5->SetBinContent(17,250.3602);
   hmcerror__5->SetBinContent(18,234.5472);
   hmcerror__5->SetBinContent(19,229.0879);
   hmcerror__5->SetBinContent(20,232.7131);
   hmcerror__5->SetBinContent(21,238.5947);
   hmcerror__5->SetBinContent(22,232.4913);
   hmcerror__5->SetBinContent(23,250.2443);
   hmcerror__5->SetBinContent(24,256.0532);
   hmcerror__5->SetBinError(1,66.38612);
   hmcerror__5->SetBinError(2,65.72831);
   hmcerror__5->SetBinError(3,68.00984);
   hmcerror__5->SetBinError(4,68.63816);
   hmcerror__5->SetBinError(5,57.17347);
   hmcerror__5->SetBinError(6,62.93588);
   hmcerror__5->SetBinError(7,62.77137);
   hmcerror__5->SetBinError(8,65.91435);
   hmcerror__5->SetBinError(9,61.87029);
   hmcerror__5->SetBinError(10,64.81285);
   hmcerror__5->SetBinError(11,69.79241);
   hmcerror__5->SetBinError(12,67.43303);
   hmcerror__5->SetBinError(13,67.34342);
   hmcerror__5->SetBinError(14,67.72686);
   hmcerror__5->SetBinError(15,72.17256);
   hmcerror__5->SetBinError(16,64.30362);
   hmcerror__5->SetBinError(17,65.42015);
   hmcerror__5->SetBinError(18,63.39233);
   hmcerror__5->SetBinError(19,62.46838);
   hmcerror__5->SetBinError(20,62.83593);
   hmcerror__5->SetBinError(21,66.09184);
   hmcerror__5->SetBinError(22,65.36291);
   hmcerror__5->SetBinError(23,68.3155);
   hmcerror__5->SetBinError(24,68.65664);
   hmcerror__5->SetBinError(25,0.3895343);
   hmcerror__5->SetEntries(5638.682);

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
   
   Double_t _fx3005[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3005[24] = {
   228,
   200,
   215,
   212,
   195,
   180,
   200,
   206,
   192,
   221,
   203,
   207,
   235,
   217,
   208,
   200,
   218,
   188,
   193,
   199,
   197,
   261,
   203,
   196};
   Double_t _felx3005[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3005[24] = {
   15.09967,
   14.14214,
   14.66288,
   14.56022,
   13.96424,
   13.41641,
   14.14214,
   14.3527,
   13.85641,
   14.86607,
   14.24781,
   14.38749,
   15.32971,
   14.73092,
   14.42221,
   14.14214,
   14.76482,
   13.71131,
   13.89244,
   14.10674,
   14.03567,
   16.15549,
   14.24781,
   14};
   Double_t _fehx3005[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3005[24] = {
   15.09967,
   14.14214,
   14.66288,
   14.56022,
   13.96424,
   13.41641,
   14.14214,
   14.3527,
   13.85641,
   14.86607,
   14.24781,
   14.38749,
   15.32971,
   14.73092,
   14.42221,
   14.14214,
   14.76482,
   13.71131,
   13.89244,
   14.10674,
   14.03567,
   16.15549,
   14.24781,
   14};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(155.5264);
   Graph_Graph3005->SetMaximum(288.2127);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 377.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3006[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3006[24] = {
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
   Double_t _felx3006[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3006[24] = {
   0.2721774,
   0.2677586,
   0.2793619,
   0.290703,
   0.2693656,
   0.2856024,
   0.264376,
   0.2914621,
   0.2765097,
   0.2891159,
   0.2867966,
   0.2779234,
   0.2688272,
   0.2826157,
   0.2894971,
   0.2714225,
   0.2613041,
   0.2702753,
   0.272683,
   0.2700146,
   0.2770046,
   0.2811413,
   0.2729952,
   0.2681343};
   Double_t _fehx3006[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3006[24] = {
   0.2721774,
   0.2677586,
   0.2793619,
   0.290703,
   0.2693656,
   0.2856024,
   0.264376,
   0.2914621,
   0.2765097,
   0.2891159,
   0.2867966,
   0.2779234,
   0.2688272,
   0.2826157,
   0.2894971,
   0.2714225,
   0.2613041,
   0.2702753,
   0.272683,
   0.2700146,
   0.2770046,
   0.2811413,
   0.2729952,
   0.2681343};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3007[24] = {
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
   Double_t _felx3007[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3007[24] = {
   0.2539094,
   0.2494507,
   0.255308,
   0.2412109,
   0.2495343,
   0.2532801,
   0.2435475,
   0.2436206,
   0.2453648,
   0.255879,
   0.2514126,
   0.25966,
   0.2511581,
   0.2470392,
   0.2565902,
   0.2499118,
   0.2400486,
   0.2447046,
   0.255066,
   0.2476625,
   0.2531537,
   0.2557304,
   0.2488498,
   0.2463595};
   Double_t _fehx3007[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3007[24] = {
   0.2539094,
   0.2494507,
   0.255308,
   0.2412109,
   0.2495343,
   0.2532801,
   0.2435475,
   0.2436206,
   0.2453648,
   0.255879,
   0.2514126,
   0.25966,
   0.2511581,
   0.2470392,
   0.2565902,
   0.2499118,
   0.2400486,
   0.2447046,
   0.255066,
   0.2476625,
   0.2531537,
   0.2557304,
   0.2488498,
   0.2463595};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3008[24] = {
   0.9347806,
   0.8147435,
   0.8831486,
   0.897883,
   0.9187177,
   0.8168381,
   0.8423459,
   0.910897,
   0.8580832,
   0.9858327,
   0.8341841,
   0.8531449,
   0.9380931,
   0.9055139,
   0.8343254,
   0.8441904,
   0.8707455,
   0.8015443,
   0.8424713,
   0.8551303,
   0.8256679,
   1.122623,
   0.8112072,
   0.765466};
   Double_t _felx3008[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3008[24] = {
   0.06190736,
   0.05761106,
   0.06023024,
   0.06166686,
   0.06579074,
   0.06088352,
   0.05956285,
   0.0634652,
   0.06192682,
   0.06631428,
   0.05854824,
   0.05929767,
   0.06119444,
   0.06147029,
   0.05785005,
   0.05969327,
   0.05897433,
   0.05845863,
   0.06064241,
   0.06061858,
   0.0588264,
   0.06948861,
   0.05693558,
   0.05467615};
   Double_t _fehx3008[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3008[24] = {
   0.06190736,
   0.05761106,
   0.06023024,
   0.06166686,
   0.06579074,
   0.06088352,
   0.05956285,
   0.0634652,
   0.06192682,
   0.06631428,
   0.05854824,
   0.05929767,
   0.06119444,
   0.06147029,
   0.05785005,
   0.05969327,
   0.05897433,
   0.05845863,
   0.06064241,
   0.06061858,
   0.0588264,
   0.06948861,
   0.05693558,
   0.05467615};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.6626577);
   Graph_Graph3008->SetMaximum(1.240244);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
