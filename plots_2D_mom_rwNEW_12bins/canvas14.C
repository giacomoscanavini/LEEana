#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas14()
{
//=========Macro generated from canvas: canvas14/channel14
//=========  (Sat Feb 18 20:31:00 2023) by ROOT version 6.26/00
   TCanvas *canvas14 = new TCanvas("canvas14", "channel14",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas14->SetHighLightColor(2);
   canvas14->Range(0,0,1,1);
   canvas14->SetFillColor(0);
   canvas14->SetBorderMode(0);
   canvas14->SetBorderSize(2);
   canvas14->SetLeftMargin(0.12);
   canvas14->SetRightMargin(0.12);
   canvas14->SetTopMargin(0.05);
   canvas14->SetBottomMargin(0.12);
   canvas14->SetFrameLineWidth(2);
   canvas14->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-0.9941306,1353.846,109.9299);
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
   
   TH1F *hmc__40 = new TH1F("hmc__40","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__40->SetBinContent(1,19.37835);
   hmc__40->SetBinContent(2,49.70653);
   hmc__40->SetBinContent(3,36.78201);
   hmc__40->SetBinContent(4,32.41263);
   hmc__40->SetBinContent(5,15.26285);
   hmc__40->SetBinContent(6,8.941092);
   hmc__40->SetBinContent(7,8.260198);
   hmc__40->SetBinContent(8,1.580239);
   hmc__40->SetBinContent(9,1.09742);
   hmc__40->SetBinContent(10,0.7021306);
   hmc__40->SetBinContent(11,1.102067);
   hmc__40->SetBinContent(12,0.9430592);
   hmc__40->SetBinContent(13,7.198359);
   hmc__40->SetBinError(1,11.2481);
   hmc__40->SetBinError(2,19.08949);
   hmc__40->SetBinError(3,16.28131);
   hmc__40->SetBinError(4,15.37645);
   hmc__40->SetBinError(5,10.48255);
   hmc__40->SetBinError(6,7.399924);
   hmc__40->SetBinError(7,6.404184);
   hmc__40->SetBinError(8,1.895901);
   hmc__40->SetBinError(9,1.764202);
   hmc__40->SetBinError(10,0.9496355);
   hmc__40->SetBinError(11,7.571721);
   hmc__40->SetBinError(12,3.060723);
   hmc__40->SetBinError(13,7.73216);
   hmc__40->SetMinimum(-0.9941306);
   hmc__40->SetMaximum(104.3837);
   hmc__40->SetEntries(179.2105);
   hmc__40->SetLineWidth(5);
   hmc__40->GetXaxis()->SetLabelFont(42);
   hmc__40->GetXaxis()->SetTitleOffset(1);
   hmc__40->GetXaxis()->SetTitleFont(42);
   hmc__40->GetYaxis()->SetTitle("Event counts");
   hmc__40->GetYaxis()->SetLabelFont(132);
   hmc__40->GetYaxis()->SetLabelSize(0.04);
   hmc__40->GetYaxis()->SetTitleSize(0.05);
   hmc__40->GetYaxis()->SetTitleOffset(0.73);
   hmc__40->GetYaxis()->SetTitleFont(132);
   hmc__40->GetZaxis()->SetLabelFont(42);
   hmc__40->GetZaxis()->SetTitleOffset(1);
   hmc__40->GetZaxis()->SetTitleFont(42);
   hmc__40->Draw("hist");
   
   THStack *hs14 = new THStack();
   hs14->SetName("hs14");
   hs14->SetTitle("");
   
   TH1F *hs14_stack_14 = new TH1F("hs14_stack_14","",12,0,1200);
   hs14_stack_14->SetMinimum(-2.355863e-08);
   hs14_stack_14->SetMaximum(52.19186);
   hs14_stack_14->SetDirectory(0);
   hs14_stack_14->SetStats(0);
   hs14_stack_14->SetLineWidth(2);
   hs14_stack_14->SetMarkerStyle(20);
   hs14_stack_14->GetXaxis()->SetNdivisions(509);
   hs14_stack_14->GetXaxis()->SetLabelFont(132);
   hs14_stack_14->GetXaxis()->SetLabelOffset(0.01);
   hs14_stack_14->GetXaxis()->SetLabelSize(0.08);
   hs14_stack_14->GetXaxis()->SetTitleSize(0.08);
   hs14_stack_14->GetXaxis()->SetTitleOffset(0.95);
   hs14_stack_14->GetXaxis()->SetTitleFont(132);
   hs14_stack_14->GetYaxis()->SetNdivisions(509);
   hs14_stack_14->GetYaxis()->SetLabelFont(132);
   hs14_stack_14->GetYaxis()->SetLabelOffset(0.01);
   hs14_stack_14->GetYaxis()->SetLabelSize(0.08);
   hs14_stack_14->GetYaxis()->SetTitleSize(0.08);
   hs14_stack_14->GetYaxis()->SetTitleOffset(0.95);
   hs14_stack_14->GetYaxis()->SetTitleFont(132);
   hs14_stack_14->GetZaxis()->SetLabelFont(132);
   hs14_stack_14->GetZaxis()->SetLabelSize(0.08);
   hs14_stack_14->GetZaxis()->SetTitleSize(0.08);
   hs14_stack_14->GetZaxis()->SetTitleOffset(1.2);
   hs14_stack_14->GetZaxis()->SetTitleFont(132);
   hs14->SetHistogram(hs14_stack_14);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.9303237);
   hbadmatch_stack_1->SetBinContent(2,1.957499);
   hbadmatch_stack_1->SetBinContent(3,1.6074);
   hbadmatch_stack_1->SetBinContent(4,0.701678);
   hbadmatch_stack_1->SetBinContent(5,0.8770706);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,0.5841618);
   hbadmatch_stack_1->SetBinError(1,0.4814682);
   hbadmatch_stack_1->SetBinError(2,0.7325309);
   hbadmatch_stack_1->SetBinError(3,0.6329996);
   hbadmatch_stack_1->SetBinError(4,0.4098358);
   hbadmatch_stack_1->SetBinError(5,0.5197486);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.4186276);
   hbadmatch_stack_1->SetEntries(28);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1603;
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
   hs14->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,4.352847);
   hext_stack_2->SetBinContent(2,7.422464);
   hext_stack_2->SetBinContent(3,3.069618);
   hext_stack_2->SetBinContent(4,4.517249);
   hext_stack_2->SetBinContent(5,1.37261);
   hext_stack_2->SetBinContent(6,1.055394);
   hext_stack_2->SetBinContent(7,3.215251);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinContent(13,1.454812);
   hext_stack_2->SetBinError(1,1.514272);
   hext_stack_2->SetBinError(2,1.939769);
   hext_stack_2->SetBinError(3,1.212305);
   hext_stack_2->SetBinError(4,1.553448);
   hext_stack_2->SetBinError(5,0.8259691);
   hext_stack_2->SetBinError(6,0.6130171);
   hext_stack_2->SetBinError(7,1.36277);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetBinError(13,0.8615765);
   hext_stack_2->SetEntries(58);

   ci = 1604;
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
   hs14->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(4,0.1380715);
   hdirt_stack_3->SetBinContent(5,0.002351481);
   hdirt_stack_3->SetBinContent(6,0.6027733);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinError(4,0.1380715);
   hdirt_stack_3->SetBinError(5,0.002351481);
   hdirt_stack_3->SetBinError(6,0.4293907);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetEntries(5);

   ci = 1605;
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
   hs14->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,3.149415);
   houtFV_stack_4->SetBinContent(2,5.638424);
   houtFV_stack_4->SetBinContent(3,5.521927);
   houtFV_stack_4->SetBinContent(4,3.213851);
   houtFV_stack_4->SetBinContent(5,2.779793);
   houtFV_stack_4->SetBinContent(6,1.515398);
   houtFV_stack_4->SetBinContent(7,0.1967154);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(12,0.1967154);
   houtFV_stack_4->SetBinContent(13,0.9269427);
   houtFV_stack_4->SetBinError(1,0.9050251);
   houtFV_stack_4->SetBinError(2,1.131555);
   houtFV_stack_4->SetBinError(3,1.194382);
   houtFV_stack_4->SetBinError(4,0.8864906);
   houtFV_stack_4->SetBinError(5,0.9202423);
   houtFV_stack_4->SetBinError(6,0.588146);
   houtFV_stack_4->SetBinError(7,0.1967154);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(12,0.1967154);
   houtFV_stack_4->SetBinError(13,0.4800908);
   houtFV_stack_4->SetEntries(101);

   ci = 1606;
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
   hs14->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = 1607;
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
   hs14->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(7);

   ci = 1608;
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
   hs14->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.022426);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.89425);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.12159);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.678188);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.82082);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.636066);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.9627222);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.3341359);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.2504359);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.181018);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.2233681);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.2926179);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4557515);
   hNCpi0inFVres_stack_7->SetBinError(2,1.125877);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9743468);
   hNCpi0inFVres_stack_7->SetBinError(4,1.045453);
   hNCpi0inFVres_stack_7->SetBinError(5,0.62444);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5801757);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3631504);
   hNCpi0inFVres_stack_7->SetBinError(8,0.151108);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1431726);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1086555);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1974492);
   hNCpi0inFVres_stack_7->SetBinError(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(13,0.122146);
   hNCpi0inFVres_stack_7->SetEntries(796);

   ci = 1609;
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
   hs14->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.9491041);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.492158);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.20378);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.743258);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6267538);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.2783359);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3531893);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4002008);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5338851);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4088599);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1943021);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1458657);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.277838);
   hNCpi0inFVdis_stack_8->SetEntries(150);

   ci = 1610;
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
   hs14->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(2);

   ci = 1611;
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
   hs14->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,3.462948);
   hCCpi0inFV_stack_10->SetBinContent(2,9.283867);
   hCCpi0inFV_stack_10->SetBinContent(3,6.645061);
   hCCpi0inFV_stack_10->SetBinContent(4,5.654661);
   hCCpi0inFV_stack_10->SetBinContent(5,2.932743);
   hCCpi0inFV_stack_10->SetBinContent(6,1.18374);
   hCCpi0inFV_stack_10->SetBinContent(7,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(8,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(10,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(12,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(13,0.6211524);
   hCCpi0inFV_stack_10->SetBinError(1,0.8863984);
   hCCpi0inFV_stack_10->SetBinError(2,1.494474);
   hCCpi0inFV_stack_10->SetBinError(3,1.325607);
   hCCpi0inFV_stack_10->SetBinError(4,1.166617);
   hCCpi0inFV_stack_10->SetBinError(5,0.8785195);
   hCCpi0inFV_stack_10->SetBinError(6,0.5442692);
   hCCpi0inFV_stack_10->SetBinError(7,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(8,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(10,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(12,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(13,0.359515);
   hCCpi0inFV_stack_10->SetEntries(137);

   ci = 1612;
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
   hs14->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,1.217248);
   hNCinFV_stack_11->SetBinContent(2,2.971389);
   hNCinFV_stack_11->SetBinContent(3,0.536893);
   hNCinFV_stack_11->SetBinContent(4,0.7834804);
   hNCinFV_stack_11->SetBinContent(5,0.7336084);
   hNCinFV_stack_11->SetBinContent(6,0.1967154);
   hNCinFV_stack_11->SetBinContent(8,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.3917402);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.6211758);
   hNCinFV_stack_11->SetBinError(2,0.9623598);
   hNCinFV_stack_11->SetBinError(3,0.3929602);
   hNCinFV_stack_11->SetBinError(4,0.3917439);
   hNCinFV_stack_11->SetBinError(5,0.4394482);
   hNCinFV_stack_11->SetBinError(6,0.1967154);
   hNCinFV_stack_11->SetBinError(8,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.2770047);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetEntries(28);

   ci = 1613;
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
   hs14->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,3.266141);
   hnumuCCinFV_stack_12->SetBinContent(2,8.962784);
   hnumuCCinFV_stack_12->SetBinContent(3,6.747034);
   hnumuCCinFV_stack_12->SetBinContent(4,5.982192);
   hnumuCCinFV_stack_12->SetBinContent(5,1.936277);
   hnumuCCinFV_stack_12->SetBinContent(6,1.30319);
   hnumuCCinFV_stack_12->SetBinContent(7,2.292784);
   hnumuCCinFV_stack_12->SetBinContent(8,0.6576476);
   hnumuCCinFV_stack_12->SetBinContent(9,0.2438618);
   hnumuCCinFV_stack_12->SetBinContent(12,0.5217285);
   hnumuCCinFV_stack_12->SetBinContent(13,3.287282);
   hnumuCCinFV_stack_12->SetBinError(1,1.188314);
   hnumuCCinFV_stack_12->SetBinError(2,1.685698);
   hnumuCCinFV_stack_12->SetBinError(3,1.398882);
   hnumuCCinFV_stack_12->SetBinError(4,1.402721);
   hnumuCCinFV_stack_12->SetBinError(5,0.7338507);
   hnumuCCinFV_stack_12->SetBinError(6,0.6013134);
   hnumuCCinFV_stack_12->SetBinError(7,0.7899455);
   hnumuCCinFV_stack_12->SetBinError(8,0.380695);
   hnumuCCinFV_stack_12->SetBinError(9,0.2438618);
   hnumuCCinFV_stack_12->SetBinError(12,0.5217285);
   hnumuCCinFV_stack_12->SetBinError(13,1.024747);
   hnumuCCinFV_stack_12->SetEntries(133);

   ci = 1614;
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
   hs14->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(5,0.1529246);
   hnueCCinFV_stack_13->SetBinError(3,0.2171002);
   hnueCCinFV_stack_13->SetBinError(5,0.1529246);
   hnueCCinFV_stack_13->SetEntries(2);

   ci = 1615;
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
   hs14->Add(hnueCCinFV_stack_13,"");
   hs14->Draw("hist same");
   
   TH1F *hmcerror__41 = new TH1F("hmcerror__41","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__41->SetBinContent(1,19.37835);
   hmcerror__41->SetBinContent(2,49.70653);
   hmcerror__41->SetBinContent(3,36.78201);
   hmcerror__41->SetBinContent(4,32.41263);
   hmcerror__41->SetBinContent(5,15.26285);
   hmcerror__41->SetBinContent(6,8.941092);
   hmcerror__41->SetBinContent(7,8.260198);
   hmcerror__41->SetBinContent(8,1.580239);
   hmcerror__41->SetBinContent(9,1.09742);
   hmcerror__41->SetBinContent(10,0.7021306);
   hmcerror__41->SetBinContent(11,1.102067);
   hmcerror__41->SetBinContent(12,0.9430592);
   hmcerror__41->SetBinContent(13,7.198359);
   hmcerror__41->SetBinError(1,11.2481);
   hmcerror__41->SetBinError(2,19.08949);
   hmcerror__41->SetBinError(3,16.28131);
   hmcerror__41->SetBinError(4,15.37645);
   hmcerror__41->SetBinError(5,10.48255);
   hmcerror__41->SetBinError(6,7.399924);
   hmcerror__41->SetBinError(7,6.404184);
   hmcerror__41->SetBinError(8,1.895901);
   hmcerror__41->SetBinError(9,1.764202);
   hmcerror__41->SetBinError(10,0.9496355);
   hmcerror__41->SetBinError(11,7.571721);
   hmcerror__41->SetBinError(12,3.060723);
   hmcerror__41->SetBinError(13,7.73216);
   hmcerror__41->SetEntries(179.2105);

   ci = TColor::GetColor("#999999");
   hmcerror__41->SetFillColor(ci);
   hmcerror__41->SetFillStyle(3002);
   hmcerror__41->SetLineColor(12);
   hmcerror__41->SetLineWidth(0);
   hmcerror__41->SetMarkerColor(0);
   hmcerror__41->SetMarkerSize(0);
   hmcerror__41->GetXaxis()->SetLabelFont(42);
   hmcerror__41->GetXaxis()->SetTitleOffset(1);
   hmcerror__41->GetXaxis()->SetTitleFont(42);
   hmcerror__41->GetYaxis()->SetLabelFont(42);
   hmcerror__41->GetYaxis()->SetTitleFont(42);
   hmcerror__41->GetZaxis()->SetLabelFont(42);
   hmcerror__41->GetZaxis()->SetTitleOffset(1);
   hmcerror__41->GetZaxis()->SetTitleFont(42);
   hmcerror__41->Draw("same E2");
   
   Double_t _fx3053[12] = {
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
   Double_t _fy3053[12] = {
   7,
   45,
   43,
   21,
   10,
   11,
   2,
   2,
   1,
   0,
   1,
   1};
   Double_t _felx3053[12] = {
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
   Double_t _fely3053[12] = {
   2.85954,
   6.8416,
   6.6917,
   4.7354,
   3.34883,
   3.4975,
   2,
   2,
   1,
   0,
   1,
   1};
   Double_t _fehx3053[12] = {
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
   Double_t _fehy3053[12] = {
   2.61053,
   6.637,
   6.4868,
   4.5229,
   3.1179,
   3.27,
   1.51917,
   1.51917,
   1.35971,
   1.1478,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3053,_fy3053,_felx3053,_fehx3053,_fely3053,_fehy3053);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3053 = new TH1F("Graph_Graph3053","",100,0,1320);
   Graph_Graph3053->SetMinimum(0);
   Graph_Graph3053->SetMaximum(56.8007);
   Graph_Graph3053->SetDirectory(0);
   Graph_Graph3053->SetStats(0);
   Graph_Graph3053->SetLineWidth(2);
   Graph_Graph3053->SetMarkerStyle(20);
   Graph_Graph3053->GetXaxis()->SetNdivisions(509);
   Graph_Graph3053->GetXaxis()->SetLabelFont(132);
   Graph_Graph3053->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3053->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3053->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3053->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3053->GetXaxis()->SetTitleFont(132);
   Graph_Graph3053->GetYaxis()->SetNdivisions(509);
   Graph_Graph3053->GetYaxis()->SetLabelFont(132);
   Graph_Graph3053->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3053->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3053->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3053->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3053->GetYaxis()->SetTitleFont(132);
   Graph_Graph3053->GetZaxis()->SetLabelFont(132);
   Graph_Graph3053->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3053->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3053->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3053->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3053);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.82#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.6/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 144.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6.9","F");

   ci = 1603;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 25.7","F");

   ci = 1604;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.0","F");

   ci = 1605;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 22.6","F");

   ci = 1606;
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

   ci = 1607;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

   ci = 1608;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  42.2","F");

   ci = 1609;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  7.7","F");

   ci = 1610;
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

   ci = 1611;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 30.7","F");

   ci = 1612;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 7.0","F");

   ci = 1613;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 31.9","F");

   ci = 1614;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 0.4","F");

   ci = 1615;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas14->cd();
  
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
   
   Double_t _fx3054[12] = {
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
   Double_t _fy3054[12] = {
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
   Double_t _felx3054[12] = {
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
   Double_t _fely3054[12] = {
   0.5804467,
   0.3840439,
   0.4426434,
   0.4743968,
   0.6868014,
   0.8276309,
   0.7753064,
   1.199756,
   1.60759,
   1.352505,
   6.870472,
   3.245526};
   Double_t _fehx3054[12] = {
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
   Double_t _fehy3054[12] = {
   0.5804467,
   0.3840439,
   0.4426434,
   0.4743968,
   0.6868014,
   0.8276309,
   0.7753064,
   1.199756,
   1.60759,
   1.352505,
   6.870472,
   3.245526};
   grae = new TGraphAsymmErrors(12,_fx3054,_fy3054,_felx3054,_fehx3054,_fely3054,_fehy3054);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3054 = new TH1F("Graph_Graph3054","",100,0,1320);
   Graph_Graph3054->SetMinimum(0);
   Graph_Graph3054->SetMaximum(2);
   Graph_Graph3054->SetDirectory(0);
   Graph_Graph3054->SetStats(0);
   Graph_Graph3054->SetLineWidth(2);
   Graph_Graph3054->SetMarkerStyle(20);
   Graph_Graph3054->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3054->GetXaxis()->SetRange(1,91);
   Graph_Graph3054->GetXaxis()->SetNdivisions(509);
   Graph_Graph3054->GetXaxis()->SetLabelFont(132);
   Graph_Graph3054->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3054->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3054->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3054->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3054->GetXaxis()->SetTitleFont(132);
   Graph_Graph3054->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3054->GetYaxis()->SetNdivisions(210);
   Graph_Graph3054->GetYaxis()->SetLabelFont(132);
   Graph_Graph3054->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3054->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3054->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3054->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3054->GetYaxis()->SetTitleFont(132);
   Graph_Graph3054->GetZaxis()->SetLabelFont(132);
   Graph_Graph3054->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3054->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3054->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3054->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3054);
   
   grae->Draw("a2");
   
   Double_t _fx3055[12] = {
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
   Double_t _fy3055[12] = {
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
   Double_t _felx3055[12] = {
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
   Double_t _fely3055[12] = {
   0.2294181,
   0.2320765,
   0.3191419,
   0.3066308,
   0.3690901,
   0.3404346,
   0.2597361,
   0.5282421,
   0.6003206,
   0.8249761,
   0.711201,
   1.013352};
   Double_t _fehx3055[12] = {
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
   Double_t _fehy3055[12] = {
   0.2294181,
   0.2320765,
   0.3191419,
   0.3066308,
   0.3690901,
   0.3404346,
   0.2597361,
   0.5282421,
   0.6003206,
   0.8249761,
   0.711201,
   1.013352};
   grae = new TGraphAsymmErrors(12,_fx3055,_fy3055,_felx3055,_fehx3055,_fely3055,_fehy3055);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3055 = new TH1F("Graph_Graph3055","",100,0,1320);
   Graph_Graph3055->SetMinimum(0);
   Graph_Graph3055->SetMaximum(2);
   Graph_Graph3055->SetDirectory(0);
   Graph_Graph3055->SetStats(0);
   Graph_Graph3055->SetLineWidth(2);
   Graph_Graph3055->SetMarkerStyle(20);
   Graph_Graph3055->GetXaxis()->SetRange(1,91);
   Graph_Graph3055->GetXaxis()->SetNdivisions(509);
   Graph_Graph3055->GetXaxis()->SetLabelFont(132);
   Graph_Graph3055->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3055->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3055->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3055->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3055->GetXaxis()->SetTitleFont(132);
   Graph_Graph3055->GetYaxis()->SetNdivisions(509);
   Graph_Graph3055->GetYaxis()->SetLabelFont(132);
   Graph_Graph3055->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3055->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3055->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3055->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3055->GetYaxis()->SetTitleFont(132);
   Graph_Graph3055->GetZaxis()->SetLabelFont(132);
   Graph_Graph3055->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3055->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3055->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3055->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3055);
   
   grae->Draw("2 ");
   
   Double_t _fx3056[12] = {
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
   Double_t _fy3056[12] = {
   0.3612278,
   0.9053136,
   1.16905,
   0.6478956,
   0.6551856,
   1.230275,
   0.242125,
   1.265631,
   0.9112283,
   0,
   0.9073858,
   1.060379};
   Double_t _felx3056[12] = {
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
   Double_t _fely3056[12] = {
   0.1475636,
   0.1376399,
   0.1819286,
   0.1460974,
   0.2194105,
   0.3911715,
   0.242125,
   1.265631,
   0.9112283,
   0,
   0.9073858,
   1.060379};
   Double_t _fehx3056[12] = {
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
   Double_t _fehy3056[12] = {
   0.1347137,
   0.1335237,
   0.176358,
   0.1395413,
   0.2042803,
   0.3657272,
   0.1839145,
   0.9613545,
   1.239006,
   1.634739,
   1.233781,
   1.441808};
   grae = new TGraphAsymmErrors(12,_fx3056,_fy3056,_felx3056,_fehx3056,_fely3056,_fehy3056);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3056 = new TH1F("Graph_Graph3056","",100,0,1320);
   Graph_Graph3056->SetMinimum(0);
   Graph_Graph3056->SetMaximum(2.752405);
   Graph_Graph3056->SetDirectory(0);
   Graph_Graph3056->SetStats(0);
   Graph_Graph3056->SetLineWidth(2);
   Graph_Graph3056->SetMarkerStyle(20);
   Graph_Graph3056->GetXaxis()->SetNdivisions(509);
   Graph_Graph3056->GetXaxis()->SetLabelFont(132);
   Graph_Graph3056->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3056->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3056->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3056->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3056->GetXaxis()->SetTitleFont(132);
   Graph_Graph3056->GetYaxis()->SetNdivisions(509);
   Graph_Graph3056->GetYaxis()->SetLabelFont(132);
   Graph_Graph3056->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3056->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3056->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3056->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3056->GetYaxis()->SetTitleFont(132);
   Graph_Graph3056->GetZaxis()->SetLabelFont(132);
   Graph_Graph3056->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3056->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3056->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3056->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3056);
   
   grae->Draw("p ");
   
   TH1F *hist__42 = new TH1F("hist__42","NCpi0BDT_theta1_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__42->SetLineColor(ci);
   hist__42->GetXaxis()->SetLabelFont(42);
   hist__42->GetXaxis()->SetTitleOffset(1);
   hist__42->GetXaxis()->SetTitleFont(42);
   hist__42->GetYaxis()->SetNdivisions(405);
   hist__42->GetYaxis()->SetLabelFont(42);
   hist__42->GetYaxis()->SetTitleFont(42);
   hist__42->GetZaxis()->SetLabelFont(42);
   hist__42->GetZaxis()->SetTitleOffset(1);
   hist__42->GetZaxis()->SetTitleFont(42);
   hist__42->Draw("axis same");
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
   canvas14->cd();
   canvas14->Modified();
   canvas14->cd();
   canvas14->SetSelected(canvas14);
}
