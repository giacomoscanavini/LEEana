#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sun Mar 12 14:46:52 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-39.50225,1353.846,4368.117);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,670.0704);
   hmc__1->SetBinContent(2,1975.113);
   hmc__1->SetBinContent(3,1606.526);
   hmc__1->SetBinContent(4,1151.118);
   hmc__1->SetBinContent(5,711.4827);
   hmc__1->SetBinContent(6,397.541);
   hmc__1->SetBinContent(7,204.9965);
   hmc__1->SetBinContent(8,138.1791);
   hmc__1->SetBinContent(9,81.29883);
   hmc__1->SetBinContent(10,57.37341);
   hmc__1->SetBinContent(11,39.27094);
   hmc__1->SetBinContent(12,30.63745);
   hmc__1->SetBinContent(13,137.8511);
   hmc__1->SetBinError(1,146.5058);
   hmc__1->SetBinError(2,463.062);
   hmc__1->SetBinError(3,420.8492);
   hmc__1->SetBinError(4,295.5348);
   hmc__1->SetBinError(5,166.9717);
   hmc__1->SetBinError(6,86.10339);
   hmc__1->SetBinError(7,44.478);
   hmc__1->SetBinError(8,31.41823);
   hmc__1->SetBinError(9,17.90558);
   hmc__1->SetBinError(10,12.01766);
   hmc__1->SetBinError(11,9.544457);
   hmc__1->SetBinError(12,6.970797);
   hmc__1->SetBinError(13,26.6027);
   hmc__1->SetMinimum(-39.50225);
   hmc__1->SetMaximum(4147.736);
   hmc__1->SetEntries(7144.623);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1200);
   hs1_stack_1->SetMinimum(-4.784113e-08);
   hs1_stack_1->SetMaximum(2073.868);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,1.146108);
   hbadmatch_stack_1->SetBinContent(2,7.590827);
   hbadmatch_stack_1->SetBinContent(3,8.81406);
   hbadmatch_stack_1->SetBinContent(4,4.178524);
   hbadmatch_stack_1->SetBinContent(5,4.879084);
   hbadmatch_stack_1->SetBinContent(6,3.609766);
   hbadmatch_stack_1->SetBinContent(7,2.057991);
   hbadmatch_stack_1->SetBinContent(8,1.239585);
   hbadmatch_stack_1->SetBinContent(9,1.125226);
   hbadmatch_stack_1->SetBinContent(10,0.5374587);
   hbadmatch_stack_1->SetBinContent(11,0.2333977);
   hbadmatch_stack_1->SetBinContent(13,1.125226);
   hbadmatch_stack_1->SetBinError(1,0.601883);
   hbadmatch_stack_1->SetBinError(2,1.657373);
   hbadmatch_stack_1->SetBinError(3,1.726386);
   hbadmatch_stack_1->SetBinError(4,1.12715);
   hbadmatch_stack_1->SetBinError(5,1.368698);
   hbadmatch_stack_1->SetBinError(6,1.169096);
   hbadmatch_stack_1->SetBinError(7,0.877329);
   hbadmatch_stack_1->SetBinError(8,0.7371271);
   hbadmatch_stack_1->SetBinError(9,0.6724238);
   hbadmatch_stack_1->SetBinError(10,0.5374588);
   hbadmatch_stack_1->SetBinError(11,0.2333977);
   hbadmatch_stack_1->SetBinError(13,0.6724238);
   hbadmatch_stack_1->SetEntries(115);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,6.616416);
   houtFV_stack_4->SetBinContent(2,10.88555);
   houtFV_stack_4->SetBinContent(3,15.9632);
   houtFV_stack_4->SetBinContent(4,6.706235);
   houtFV_stack_4->SetBinContent(5,8.797034);
   houtFV_stack_4->SetBinContent(6,5.009463);
   houtFV_stack_4->SetBinContent(7,2.490026);
   houtFV_stack_4->SetBinContent(8,0.4459144);
   houtFV_stack_4->SetBinContent(9,0.2333977);
   houtFV_stack_4->SetBinContent(10,0.2333977);
   houtFV_stack_4->SetBinContent(11,0.9199441);
   houtFV_stack_4->SetBinContent(12,0.4459144);
   houtFV_stack_4->SetBinContent(13,1.166989);
   houtFV_stack_4->SetBinError(1,2.356276);
   houtFV_stack_4->SetBinError(2,1.795087);
   houtFV_stack_4->SetBinError(3,2.36528);
   houtFV_stack_4->SetBinError(4,1.614811);
   houtFV_stack_4->SetBinError(5,1.780283);
   houtFV_stack_4->SetBinError(6,1.31825);
   houtFV_stack_4->SetBinError(7,1.019157);
   houtFV_stack_4->SetBinError(8,0.4459143);
   houtFV_stack_4->SetBinError(9,0.2333977);
   houtFV_stack_4->SetBinError(10,0.2333977);
   houtFV_stack_4->SetBinError(11,0.6508025);
   houtFV_stack_4->SetBinError(12,0.4459143);
   houtFV_stack_4->SetBinError(13,0.5218932);
   houtFV_stack_4->SetEntries(189);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05733541);
   hNCpi0inFVcoh_stack_5->SetEntries(8);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5124501);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5124501);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.362357);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.362357);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetEntries(9);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.801453);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.93787);
   hNCpi0inFVres_stack_7->SetBinContent(3,21.08947);
   hNCpi0inFVres_stack_7->SetBinContent(4,17.45806);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.89374);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.046227);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.994259);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.464224);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.1663);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.8765788);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5541486);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.3555329);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.398018);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9886283);
   hNCpi0inFVres_stack_7->SetBinError(2,2.002991);
   hNCpi0inFVres_stack_7->SetBinError(3,1.760465);
   hNCpi0inFVres_stack_7->SetBinError(4,1.641091);
   hNCpi0inFVres_stack_7->SetBinError(5,1.362371);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7141853);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8042055);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6516054);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6439935);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3786241);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2747969);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2625617);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6499216);
   hNCpi0inFVres_stack_7->SetEntries(1808);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.080904);
   hNCpi0inFVdis_stack_8->SetBinContent(2,18.3372);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.8626);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.33582);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.253733);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.260754);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.689414);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.927267);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.6951549);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.008989);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6203538);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.3972314);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.943964);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.153106);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.542487);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.696491);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.203504);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.227552);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7946705);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8183874);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4850838);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1516952);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3843687);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.278756);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1146708);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8714475);
   hNCpi0inFVdis_stack_8->SetEntries(1420);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,451.519);
   hCCpi0inFV_stack_10->SetBinContent(2,1444.328);
   hCCpi0inFV_stack_10->SetBinContent(3,1151.683);
   hCCpi0inFV_stack_10->SetBinContent(4,868.6829);
   hCCpi0inFV_stack_10->SetBinContent(5,495.3556);
   hCCpi0inFV_stack_10->SetBinContent(6,252.7019);
   hCCpi0inFV_stack_10->SetBinContent(7,125.9119);
   hCCpi0inFV_stack_10->SetBinContent(8,86.97495);
   hCCpi0inFV_stack_10->SetBinContent(9,48.49277);
   hCCpi0inFV_stack_10->SetBinContent(10,32.19203);
   hCCpi0inFV_stack_10->SetBinContent(11,21.43122);
   hCCpi0inFV_stack_10->SetBinContent(12,18.0821);
   hCCpi0inFV_stack_10->SetBinContent(13,73.06503);
   hCCpi0inFV_stack_10->SetBinError(1,12.52721);
   hCCpi0inFV_stack_10->SetBinError(2,22.34806);
   hCCpi0inFV_stack_10->SetBinError(3,19.94639);
   hCCpi0inFV_stack_10->SetBinError(4,17.3564);
   hCCpi0inFV_stack_10->SetBinError(5,13.01216);
   hCCpi0inFV_stack_10->SetBinError(6,9.286979);
   hCCpi0inFV_stack_10->SetBinError(7,6.621164);
   hCCpi0inFV_stack_10->SetBinError(8,5.537663);
   hCCpi0inFV_stack_10->SetBinError(9,4.124612);
   hCCpi0inFV_stack_10->SetBinError(10,3.375783);
   hCCpi0inFV_stack_10->SetBinError(11,2.792444);
   hCCpi0inFV_stack_10->SetBinError(12,2.526398);
   hCCpi0inFV_stack_10->SetBinError(13,4.97494);
   hCCpi0inFV_stack_10->SetEntries(16345);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,7.0474);
   hNCinFV_stack_11->SetBinContent(2,21.80063);
   hNCinFV_stack_11->SetBinContent(3,18.21243);
   hNCinFV_stack_11->SetBinContent(4,8.406024);
   hNCinFV_stack_11->SetBinContent(5,8.193507);
   hNCinFV_stack_11->SetBinContent(6,6.155571);
   hNCinFV_stack_11->SetBinContent(7,1.846301);
   hNCinFV_stack_11->SetBinContent(8,1.146108);
   hNCinFV_stack_11->SetBinContent(9,1.82542);
   hNCinFV_stack_11->SetBinContent(10,0.7001932);
   hNCinFV_stack_11->SetBinContent(11,1.592022);
   hNCinFV_stack_11->SetBinContent(12,0.9127098);
   hNCinFV_stack_11->SetBinContent(13,4.30927);
   hNCinFV_stack_11->SetBinError(1,1.580419);
   hNCinFV_stack_11->SetBinError(2,2.799353);
   hNCinFV_stack_11->SetBinError(3,2.517052);
   hNCinFV_stack_11->SetBinError(4,1.733307);
   hNCinFV_stack_11->SetBinError(5,1.69115);
   hNCinFV_stack_11->SetBinError(6,1.449153);
   hNCinFV_stack_11->SetBinError(7,0.7250425);
   hNCinFV_stack_11->SetBinError(8,0.601883);
   hNCinFV_stack_11->SetBinError(9,0.7845873);
   hNCinFV_stack_11->SetBinError(10,0.4042567);
   hNCinFV_stack_11->SetBinError(11,0.7490679);
   hNCinFV_stack_11->SetBinError(12,0.554787);
   hNCinFV_stack_11->SetBinError(13,1.254735);
   hNCinFV_stack_11->SetEntries(260);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,185.5265);
   hnumuCCinFV_stack_12->SetBinContent(2,440.9171);
   hnumuCCinFV_stack_12->SetBinContent(3,370.5312);
   hnumuCCinFV_stack_12->SetBinContent(4,233.6918);
   hnumuCCinFV_stack_12->SetBinContent(5,168.1679);
   hnumuCCinFV_stack_12->SetBinContent(6,117.6985);
   hnumuCCinFV_stack_12->SetBinContent(7,63.77322);
   hnumuCCinFV_stack_12->SetBinContent(8,43.06831);
   hnumuCCinFV_stack_12->SetBinContent(9,26.03754);
   hnumuCCinFV_stack_12->SetBinContent(10,21.82475);
   hnumuCCinFV_stack_12->SetBinContent(11,13.00714);
   hnumuCCinFV_stack_12->SetBinContent(12,9.552132);
   hnumuCCinFV_stack_12->SetBinContent(13,48.58009);
   hnumuCCinFV_stack_12->SetBinError(1,9.112944);
   hnumuCCinFV_stack_12->SetBinError(2,13.73615);
   hnumuCCinFV_stack_12->SetBinError(3,12.8704);
   hnumuCCinFV_stack_12->SetBinError(4,8.990399);
   hnumuCCinFV_stack_12->SetBinError(5,7.839628);
   hnumuCCinFV_stack_12->SetBinError(6,6.527864);
   hnumuCCinFV_stack_12->SetBinError(7,4.899551);
   hnumuCCinFV_stack_12->SetBinError(8,4.335258);
   hnumuCCinFV_stack_12->SetBinError(9,3.048489);
   hnumuCCinFV_stack_12->SetBinError(10,2.872452);
   hnumuCCinFV_stack_12->SetBinError(11,2.171947);
   hnumuCCinFV_stack_12->SetBinError(12,1.834834);
   hnumuCCinFV_stack_12->SetBinError(13,4.045785);
   hnumuCCinFV_stack_12->SetEntries(5485);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(2,2.803213);
   hnueCCinFV_stack_13->SetBinContent(3,2.271334);
   hnueCCinFV_stack_13->SetBinContent(4,1.592022);
   hnueCCinFV_stack_13->SetBinContent(5,3.39656);
   hnueCCinFV_stack_13->SetBinContent(6,2.058817);
   hnueCCinFV_stack_13->SetBinContent(7,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(8,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(9,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(11,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(12,0.8918287);
   hnueCCinFV_stack_13->SetBinContent(13,3.163163);
   hnueCCinFV_stack_13->SetBinError(1,0.2333977);
   hnueCCinFV_stack_13->SetBinError(2,1.099932);
   hnueCCinFV_stack_13->SetBinError(3,0.9024504);
   hnueCCinFV_stack_13->SetBinError(4,0.7490679);
   hnueCCinFV_stack_13->SetBinError(5,1.12542);
   hnueCCinFV_stack_13->SetBinError(6,0.8185668);
   hnueCCinFV_stack_13->SetBinError(7,0.2333977);
   hnueCCinFV_stack_13->SetBinError(8,0.554787);
   hnueCCinFV_stack_13->SetBinError(9,0.3300742);
   hnueCCinFV_stack_13->SetBinError(11,0.554787);
   hnueCCinFV_stack_13->SetBinError(12,0.6306181);
   hnueCCinFV_stack_13->SetBinError(13,1.100952);
   hnueCCinFV_stack_13->SetEntries(57);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,670.0704);
   hmcerror__2->SetBinContent(2,1975.113);
   hmcerror__2->SetBinContent(3,1606.526);
   hmcerror__2->SetBinContent(4,1151.118);
   hmcerror__2->SetBinContent(5,711.4827);
   hmcerror__2->SetBinContent(6,397.541);
   hmcerror__2->SetBinContent(7,204.9965);
   hmcerror__2->SetBinContent(8,138.1791);
   hmcerror__2->SetBinContent(9,81.29883);
   hmcerror__2->SetBinContent(10,57.37341);
   hmcerror__2->SetBinContent(11,39.27094);
   hmcerror__2->SetBinContent(12,30.63745);
   hmcerror__2->SetBinContent(13,137.8511);
   hmcerror__2->SetBinError(1,146.5058);
   hmcerror__2->SetBinError(2,463.062);
   hmcerror__2->SetBinError(3,420.8492);
   hmcerror__2->SetBinError(4,295.5348);
   hmcerror__2->SetBinError(5,166.9717);
   hmcerror__2->SetBinError(6,86.10339);
   hmcerror__2->SetBinError(7,44.478);
   hmcerror__2->SetBinError(8,31.41823);
   hmcerror__2->SetBinError(9,17.90558);
   hmcerror__2->SetBinError(10,12.01766);
   hmcerror__2->SetBinError(11,9.544457);
   hmcerror__2->SetBinError(12,6.970797);
   hmcerror__2->SetBinError(13,26.6027);
   hmcerror__2->SetEntries(7144.623);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[12] = {
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
   Double_t _fy3001[12] = {
   521,
   1745,
   1272,
   834,
   561,
   357,
   218,
   125,
   83,
   58,
   35,
   30};
   Double_t _felx3001[12] = {
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
   Double_t _fely3001[12] = {
   22.82542,
   41.7732,
   35.66511,
   28.87906,
   23.68544,
   18.89444,
   14.76482,
   11.18034,
   9.234,
   7.7446,
   6.0548,
   5.6197};
   Double_t _fehx3001[12] = {
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
   Double_t _fehy3001[12] = {
   22.82542,
   41.7732,
   35.66511,
   28.87906,
   23.68544,
   18.89444,
   14.76482,
   11.18034,
   9.0323,
   7.5415,
   5.8483,
   5.4117};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(21.94227);
   Graph_Graph3001->SetMaximum(1963.012);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5839.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.4","F");

   ci = 1434;
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

   ci = 1435;
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

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 58.7","F");

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.4","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  103.6","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  79.5","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 4997.4","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 77.8","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1693.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 15.8","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[12] = {
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
   Double_t _fy3002[12] = {
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
   Double_t _felx3002[12] = {
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
   Double_t _fely3002[12] = {
   0.2186424,
   0.2344484,
   0.2619622,
   0.2567373,
   0.2346813,
   0.21659,
   0.2169696,
   0.2273733,
   0.220244,
   0.209464,
   0.2430412,
   0.2275253};
   Double_t _fehx3002[12] = {
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
   Double_t _fehy3002[12] = {
   0.2186424,
   0.2344484,
   0.2619622,
   0.2567373,
   0.2346813,
   0.21659,
   0.2169696,
   0.2273733,
   0.220244,
   0.209464,
   0.2430412,
   0.2275253};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[12] = {
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
   Double_t _fy3003[12] = {
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
   Double_t _felx3003[12] = {
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
   Double_t _fely3003[12] = {
   0.2186424,
   0.2344484,
   0.2619622,
   0.2567373,
   0.2346813,
   0.21659,
   0.2169696,
   0.2273733,
   0.220244,
   0.209464,
   0.2430412,
   0.2275253};
   Double_t _fehx3003[12] = {
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
   Double_t _fehy3003[12] = {
   0.2186424,
   0.2344484,
   0.2619622,
   0.2567373,
   0.2346813,
   0.21659,
   0.2169696,
   0.2273733,
   0.220244,
   0.209464,
   0.2430412,
   0.2275253};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[12] = {
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
   Double_t _fy3004[12] = {
   0.7775303,
   0.883494,
   0.7917704,
   0.7245133,
   0.7884942,
   0.8980205,
   1.063433,
   0.9046233,
   1.020925,
   1.010921,
   0.8912444,
   0.9791937};
   Double_t _felx3004[12] = {
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
   Double_t _fely3004[12] = {
   0.03406422,
   0.02114978,
   0.02220014,
   0.02508784,
   0.03329025,
   0.04752829,
   0.07202477,
   0.08091197,
   0.113581,
   0.1349859,
   0.1541802,
   0.1834258};
   Double_t _fehx3004[12] = {
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
   Double_t _fehy3004[12] = {
   0.03406422,
   0.02114978,
   0.02220014,
   0.02508784,
   0.03329025,
   0.04752829,
   0.07202477,
   0.08091197,
   0.1111,
   0.1314459,
   0.1489218,
   0.1766368};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.653785);
   Graph_Graph3004->SetMaximum(1.201471);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_4_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
