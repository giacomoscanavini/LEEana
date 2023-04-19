#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sun Mar 12 14:46:54 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
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
   pad1->Range(-184.6154,-10.62,1353.846,1174.348);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__22->SetBinContent(1,164.261);
   hmc__22->SetBinContent(2,480.8279);
   hmc__22->SetBinContent(3,454.7388);
   hmc__22->SetBinContent(4,350.4705);
   hmc__22->SetBinContent(5,227.2364);
   hmc__22->SetBinContent(6,131.2206);
   hmc__22->SetBinContent(7,70.30016);
   hmc__22->SetBinContent(8,53.53372);
   hmc__22->SetBinContent(9,32.75844);
   hmc__22->SetBinContent(10,27.02272);
   hmc__22->SetBinContent(11,14.53109);
   hmc__22->SetBinContent(12,12.45934);
   hmc__22->SetBinContent(13,58.41088);
   hmc__22->SetBinError(1,34.94764);
   hmc__22->SetBinError(2,102.0281);
   hmc__22->SetBinError(3,110.5701);
   hmc__22->SetBinError(4,84.30188);
   hmc__22->SetBinError(5,52.7068);
   hmc__22->SetBinError(6,29.75124);
   hmc__22->SetBinError(7,15.97118);
   hmc__22->SetBinError(8,13.53599);
   hmc__22->SetBinError(9,7.677261);
   hmc__22->SetBinError(10,5.946307);
   hmc__22->SetBinError(11,4.02953);
   hmc__22->SetBinError(12,3.44364);
   hmc__22->SetBinError(13,11.48004);
   hmc__22->SetMinimum(-10.62);
   hmc__22->SetMaximum(1115.1);
   hmc__22->SetEntries(2047.875);
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
   hs8_stack_8->SetMinimum(-4.784113e-08);
   hs8_stack_8->SetMaximum(504.8693);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(2,2.929765);
   hbadmatch_stack_1->SetBinContent(3,2.525613);
   hbadmatch_stack_1->SetBinContent(4,0.7001932);
   hbadmatch_stack_1->SetBinContent(5,1.715921);
   hbadmatch_stack_1->SetBinContent(6,0.9335909);
   hbadmatch_stack_1->SetBinContent(7,0.4868505);
   hbadmatch_stack_1->SetBinContent(8,0.5184094);
   hbadmatch_stack_1->SetBinContent(9,0.8918287);
   hbadmatch_stack_1->SetBinContent(10,0.5374587);
   hbadmatch_stack_1->SetBinContent(13,0.4459144);
   hbadmatch_stack_1->SetBinError(2,1.075928);
   hbadmatch_stack_1->SetBinError(3,0.8826101);
   hbadmatch_stack_1->SetBinError(4,0.4042567);
   hbadmatch_stack_1->SetBinError(5,0.8131648);
   hbadmatch_stack_1->SetBinError(6,0.4667954);
   hbadmatch_stack_1->SetBinError(7,0.3445473);
   hbadmatch_stack_1->SetBinError(8,0.5184094);
   hbadmatch_stack_1->SetBinError(9,0.6306181);
   hbadmatch_stack_1->SetBinError(10,0.5374588);
   hbadmatch_stack_1->SetBinError(13,0.4459143);
   hbadmatch_stack_1->SetEntries(37);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.713046);
   houtFV_stack_4->SetBinContent(2,6.025961);
   houtFV_stack_4->SetBinContent(3,7.714675);
   houtFV_stack_4->SetBinContent(4,3.77647);
   houtFV_stack_4->SetBinContent(5,3.438323);
   houtFV_stack_4->SetBinContent(6,2.738129);
   houtFV_stack_4->SetBinContent(7,1.68963);
   houtFV_stack_4->SetBinContent(8,0.4459144);
   houtFV_stack_4->SetBinContent(9,0.2333977);
   houtFV_stack_4->SetBinContent(10,0.2333977);
   houtFV_stack_4->SetBinContent(11,0.4740298);
   houtFV_stack_4->SetBinContent(13,0.7001932);
   houtFV_stack_4->SetBinError(1,2.235277);
   houtFV_stack_4->SetBinError(2,1.377894);
   houtFV_stack_4->SetBinError(3,1.595348);
   houtFV_stack_4->SetBinError(4,1.204157);
   houtFV_stack_4->SetBinError(5,1.042492);
   houtFV_stack_4->SetBinError(6,0.9609192);
   houtFV_stack_4->SetBinError(7,0.877898);
   houtFV_stack_4->SetBinError(8,0.4459143);
   houtFV_stack_4->SetBinError(9,0.2333977);
   houtFV_stack_4->SetBinError(10,0.2333977);
   houtFV_stack_4->SetBinError(11,0.4740298);
   houtFV_stack_4->SetBinError(13,0.4042567);
   houtFV_stack_4->SetEntries(99);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03310261);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetEntries(4);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.836555);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.972213);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.226371);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.481809);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.556216);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.8937706);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.397625);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.2648209);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.7441684);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5786553);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.3555329);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.06620523);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.6779631);
   hNCpi0inFVres_stack_7->SetBinError(1,0.41849);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9869158);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9268448);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7179442);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5060891);
   hNCpi0inFVres_stack_7->SetBinError(6,0.1720062);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4666623);
   hNCpi0inFVres_stack_7->SetBinError(8,0.09362833);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3727909);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3653685);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2625617);
   hNCpi0inFVres_stack_7->SetBinError(12,0.04681417);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3698398);
   hNCpi0inFVres_stack_7->SetEntries(440);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.662839);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.921132);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.63912);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.456908);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.927267);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.728651);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.530035);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6534564);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1986157);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7441684);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.09930784);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1655131);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.835274);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.656631);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8230604);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.884552);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5028308);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4850838);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4782589);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4713352);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2807146);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.08108451);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3727909);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.05733541);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.0740197);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6354288);
   hNCpi0inFVdis_stack_8->SetEntries(395);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,105.0146);
   hCCpi0inFV_stack_10->SetBinContent(2,310.6269);
   hCCpi0inFV_stack_10->SetBinContent(3,299.9641);
   hCCpi0inFV_stack_10->SetBinContent(4,245.5175);
   hCCpi0inFV_stack_10->SetBinContent(5,151.121);
   hCCpi0inFV_stack_10->SetBinContent(6,77.39627);
   hCCpi0inFV_stack_10->SetBinContent(7,38.97315);
   hCCpi0inFV_stack_10->SetBinContent(8,30.78522);
   hCCpi0inFV_stack_10->SetBinContent(9,16.2273);
   hCCpi0inFV_stack_10->SetBinContent(10,13.14033);
   hCCpi0inFV_stack_10->SetBinContent(11,7.797664);
   hCCpi0inFV_stack_10->SetBinContent(12,7.918347);
   hCCpi0inFV_stack_10->SetBinContent(13,31.56806);
   hCCpi0inFV_stack_10->SetBinError(1,6.044801);
   hCCpi0inFV_stack_10->SetBinError(2,10.37875);
   hCCpi0inFV_stack_10->SetBinError(3,10.15129);
   hCCpi0inFV_stack_10->SetBinError(4,9.266438);
   hCCpi0inFV_stack_10->SetBinError(5,7.180093);
   hCCpi0inFV_stack_10->SetBinError(6,5.053441);
   hCCpi0inFV_stack_10->SetBinError(7,3.630926);
   hCCpi0inFV_stack_10->SetBinError(8,3.287474);
   hCCpi0inFV_stack_10->SetBinError(9,2.345557);
   hCCpi0inFV_stack_10->SetBinError(10,2.206228);
   hCCpi0inFV_stack_10->SetBinError(11,1.639216);
   hCCpi0inFV_stack_10->SetBinError(12,1.727801);
   hCCpi0inFV_stack_10->SetBinError(13,3.257424);
   hCCpi0inFV_stack_10->SetEntries(4303);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,2.250453);
   hNCinFV_stack_11->SetBinContent(2,3.163163);
   hNCinFV_stack_11->SetBinContent(3,6.388968);
   hNCinFV_stack_11->SetBinContent(4,2.950646);
   hNCinFV_stack_11->SetBinContent(5,1.846301);
   hNCinFV_stack_11->SetBinContent(6,1.82542);
   hNCinFV_stack_11->SetBinContent(7,1.146108);
   hNCinFV_stack_11->SetBinContent(8,0.2333977);
   hNCinFV_stack_11->SetBinContent(9,0.6793121);
   hNCinFV_stack_11->SetBinContent(10,0.4667954);
   hNCinFV_stack_11->SetBinContent(11,1.125226);
   hNCinFV_stack_11->SetBinContent(12,0.4459144);
   hNCinFV_stack_11->SetBinContent(13,1.592022);
   hNCinFV_stack_11->SetBinError(1,0.9509508);
   hNCinFV_stack_11->SetBinError(2,1.100952);
   hNCinFV_stack_11->SetBinError(3,1.467828);
   hNCinFV_stack_11->SetBinError(4,1.033311);
   hNCinFV_stack_11->SetBinError(5,0.7250425);
   hNCinFV_stack_11->SetBinError(6,0.7845873);
   hNCinFV_stack_11->SetBinError(7,0.601883);
   hNCinFV_stack_11->SetBinError(8,0.2333977);
   hNCinFV_stack_11->SetBinError(9,0.5033032);
   hNCinFV_stack_11->SetBinError(10,0.3300742);
   hNCinFV_stack_11->SetBinError(11,0.6724238);
   hNCinFV_stack_11->SetBinError(12,0.4459143);
   hNCinFV_stack_11->SetBinError(13,0.7490679);
   hNCinFV_stack_11->SetEntries(76);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,47.78358);
   hnumuCCinFV_stack_12->SetBinContent(2,145.2532);
   hnumuCCinFV_stack_12->SetBinContent(3,127.3342);
   hnumuCCinFV_stack_12->SetBinContent(4,90.8414);
   hnumuCCinFV_stack_12->SetBinContent(5,62.10379);
   hnumuCCinFV_stack_12->SetBinContent(6,44.79208);
   hnumuCCinFV_stack_12->SetBinContent(7,24.84336);
   hnumuCCinFV_stack_12->SetBinContent(8,20.18658);
   hnumuCCinFV_stack_12->SetBinContent(9,13.0608);
   hnumuCCinFV_stack_12->SetBinContent(10,11.32192);
   hnumuCCinFV_stack_12->SetBinContent(11,4.44593);
   hnumuCCinFV_stack_12->SetBinContent(12,3.863356);
   hnumuCCinFV_stack_12->SetBinContent(13,20.87904);
   hnumuCCinFV_stack_12->SetBinError(1,4.267626);
   hnumuCCinFV_stack_12->SetBinError(2,8.201339);
   hnumuCCinFV_stack_12->SetBinError(3,8.5075);
   hnumuCCinFV_stack_12->SetBinError(4,5.682876);
   hnumuCCinFV_stack_12->SetBinError(5,4.775114);
   hnumuCCinFV_stack_12->SetBinError(6,3.928109);
   hnumuCCinFV_stack_12->SetBinError(7,2.86014);
   hnumuCCinFV_stack_12->SetBinError(8,3.34185);
   hnumuCCinFV_stack_12->SetBinError(9,2.231594);
   hnumuCCinFV_stack_12->SetBinError(10,2.152399);
   hnumuCCinFV_stack_12->SetBinError(11,1.252955);
   hnumuCCinFV_stack_12->SetBinError(12,1.172825);
   hnumuCCinFV_stack_12->SetBinError(13,2.603095);
   hnumuCCinFV_stack_12->SetEntries(1937);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(2,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(3,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(4,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(5,2.271334);
   hnueCCinFV_stack_13->SetBinContent(6,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(7,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(8,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(9,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(11,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(13,0.6793121);
   hnueCCinFV_stack_13->SetBinError(2,0.5033032);
   hnueCCinFV_stack_13->SetBinError(3,0.554787);
   hnueCCinFV_stack_13->SetBinError(4,0.5033032);
   hnueCCinFV_stack_13->SetBinError(5,0.9024504);
   hnueCCinFV_stack_13->SetBinError(6,0.554787);
   hnueCCinFV_stack_13->SetBinError(7,0.2333977);
   hnueCCinFV_stack_13->SetBinError(8,0.4459143);
   hnueCCinFV_stack_13->SetBinError(9,0.3300742);
   hnueCCinFV_stack_13->SetBinError(11,0.2333977);
   hnueCCinFV_stack_13->SetBinError(13,0.5033032);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__23->SetBinContent(1,164.261);
   hmcerror__23->SetBinContent(2,480.8279);
   hmcerror__23->SetBinContent(3,454.7388);
   hmcerror__23->SetBinContent(4,350.4705);
   hmcerror__23->SetBinContent(5,227.2364);
   hmcerror__23->SetBinContent(6,131.2206);
   hmcerror__23->SetBinContent(7,70.30016);
   hmcerror__23->SetBinContent(8,53.53372);
   hmcerror__23->SetBinContent(9,32.75844);
   hmcerror__23->SetBinContent(10,27.02272);
   hmcerror__23->SetBinContent(11,14.53109);
   hmcerror__23->SetBinContent(12,12.45934);
   hmcerror__23->SetBinContent(13,58.41088);
   hmcerror__23->SetBinError(1,34.94764);
   hmcerror__23->SetBinError(2,102.0281);
   hmcerror__23->SetBinError(3,110.5701);
   hmcerror__23->SetBinError(4,84.30188);
   hmcerror__23->SetBinError(5,52.7068);
   hmcerror__23->SetBinError(6,29.75124);
   hmcerror__23->SetBinError(7,15.97118);
   hmcerror__23->SetBinError(8,13.53599);
   hmcerror__23->SetBinError(9,7.677261);
   hmcerror__23->SetBinError(10,5.946307);
   hmcerror__23->SetBinError(11,4.02953);
   hmcerror__23->SetBinError(12,3.44364);
   hmcerror__23->SetBinError(13,11.48004);
   hmcerror__23->SetEntries(2047.875);

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
   159,
   531,
   434,
   294,
   185,
   146,
   75,
   43,
   35,
   24,
   12,
   13};
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
   12.60952,
   23.04344,
   20.83267,
   17.14643,
   13.60147,
   12.08305,
   8.7852,
   6.6917,
   6.0548,
   5.0476,
   3.64022,
   3.77763};
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
   12.60952,
   23.04344,
   20.83267,
   17.14643,
   13.60147,
   12.08305,
   8.5831,
   6.4868,
   5.8483,
   4.837,
   3.4155,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1320);
   Graph_Graph3029->SetMinimum(7.523802);
   Graph_Graph3029->SetMaximum(608.6118);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.21","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1951.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 11.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 31.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  24.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  21.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1304.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 595.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.8","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_0p_bnb_4_pi0_momentum_all");
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
   0.2127567,
   0.2121924,
   0.2431508,
   0.2405392,
   0.231947,
   0.2267269,
   0.2271856,
   0.2528499,
   0.2343598,
   0.2200484,
   0.2773041,
   0.2763903};
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
   0.2127567,
   0.2121924,
   0.2431508,
   0.2405392,
   0.231947,
   0.2267269,
   0.2271856,
   0.2528499,
   0.2343598,
   0.2200484,
   0.2773041,
   0.2763903};
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
   0.2127567,
   0.2121924,
   0.2431508,
   0.2405392,
   0.231947,
   0.2267269,
   0.2271856,
   0.2528499,
   0.2343598,
   0.2200484,
   0.2773041,
   0.2763903};
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
   0.2127567,
   0.2121924,
   0.2431508,
   0.2405392,
   0.231947,
   0.2267269,
   0.2271856,
   0.2528499,
   0.2343598,
   0.2200484,
   0.2773041,
   0.2763903};
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
   0.9679714,
   1.104345,
   0.954394,
   0.8388723,
   0.8141301,
   1.11263,
   1.066854,
   0.803232,
   1.068427,
   0.8881415,
   0.8258157,
   1.043394};
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
   0.07676513,
   0.0479245,
   0.04581238,
   0.04892403,
   0.05985603,
   0.09208192,
   0.124967,
   0.1249997,
   0.1848318,
   0.186791,
   0.2505126,
   0.3031968};
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
   0.07676513,
   0.0479245,
   0.04581238,
   0.04892403,
   0.05985603,
   0.09208192,
   0.1220922,
   0.1211722,
   0.178528,
   0.1789975,
   0.2350478,
   0.2853443};
   grae = new TGraphAsymmErrors(12,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1320);
   Graph_Graph3032->SetMinimum(0.4999596);
   Graph_Graph3032->SetMaximum(1.404082);
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
   
   TH1F *hist__24 = new TH1F("hist__24","CCpi0_PC_0p_bnb_4_pi0_momentum_all",12,0,1200);

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
   entry=leg->AddEntry("","Stat. + XS","F");

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
