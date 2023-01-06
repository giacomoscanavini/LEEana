#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas14()
{
//=========Macro generated from canvas: canvas14/channel14
//=========  (Tue Dec  6 22:18:06 2022) by ROOT version 6.26/00
   TCanvas *canvas14 = new TCanvas("canvas14", "channel14",60,83,1200,900);
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
   pad1->Range(-184.6154,-0.9108211,1353.846,100.7176);
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
   hmc__40->SetBinContent(1,17.15816);
   hmc__40->SetBinContent(2,45.54105);
   hmc__40->SetBinContent(3,31.46963);
   hmc__40->SetBinContent(4,27.87798);
   hmc__40->SetBinContent(5,13.44932);
   hmc__40->SetBinContent(6,8.117336);
   hmc__40->SetBinContent(7,8.1871);
   hmc__40->SetBinContent(8,1.486312);
   hmc__40->SetBinContent(9,1.071017);
   hmc__40->SetBinContent(10,0.6822943);
   hmc__40->SetBinContent(11,0.9475491);
   hmc__40->SetBinContent(12,0.9515129);
   hmc__40->SetBinContent(13,7.057054);
   hmc__40->SetBinError(1,10.70937);
   hmc__40->SetBinError(2,18.48314);
   hmc__40->SetBinError(3,14.55194);
   hmc__40->SetBinError(4,12.89842);
   hmc__40->SetBinError(5,8.87371);
   hmc__40->SetBinError(6,6.371212);
   hmc__40->SetBinError(7,6.567053);
   hmc__40->SetBinError(8,2.06127);
   hmc__40->SetBinError(9,1.864603);
   hmc__40->SetBinError(10,0.9622975);
   hmc__40->SetBinError(11,4.354571);
   hmc__40->SetBinError(12,3.475324);
   hmc__40->SetBinError(13,7.904278);
   hmc__40->SetMinimum(-0.9108211);
   hmc__40->SetMaximum(95.63621);
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
   hs14_stack_14->SetMaximum(47.81811);
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
   hbadmatch_stack_1->SetBinContent(1,0.6571763);
   hbadmatch_stack_1->SetBinContent(2,1.768119);
   hbadmatch_stack_1->SetBinContent(3,1.326915);
   hbadmatch_stack_1->SetBinContent(4,0.701678);
   hbadmatch_stack_1->SetBinContent(5,1.099638);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,0.5841618);
   hbadmatch_stack_1->SetBinError(1,0.3544474);
   hbadmatch_stack_1->SetBinError(2,0.6938519);
   hbadmatch_stack_1->SetBinError(3,0.5572903);
   hbadmatch_stack_1->SetBinError(4,0.4098358);
   hbadmatch_stack_1->SetBinError(5,0.6799225);
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
   houtFV_stack_4->SetBinContent(1,2.934592);
   houtFV_stack_4->SetBinContent(2,5.550069);
   houtFV_stack_4->SetBinContent(3,5.135698);
   houtFV_stack_4->SetBinContent(4,2.783368);
   houtFV_stack_4->SetBinContent(5,2.476528);
   houtFV_stack_4->SetBinContent(6,1.386454);
   houtFV_stack_4->SetBinContent(7,0.1967154);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(12,0.1967154);
   houtFV_stack_4->SetBinContent(13,0.8530184);
   houtFV_stack_4->SetBinError(1,0.8499452);
   houtFV_stack_4->SetBinError(2,1.142698);
   houtFV_stack_4->SetBinError(3,1.101594);
   houtFV_stack_4->SetBinError(4,0.7689674);
   houtFV_stack_4->SetBinError(5,0.8328566);
   houtFV_stack_4->SetBinError(6,0.5242273);
   houtFV_stack_4->SetBinError(7,0.1967154);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(12,0.1967154);
   houtFV_stack_4->SetBinError(13,0.4551019);
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
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06200838);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05444674);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03693001);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03145309);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01881452);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,1.358905);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.680787);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.110127);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.07474);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.400731);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.959004);
   hNCpi0inFVres_stack_7->SetBinContent(7,0.8616639);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.2192725);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.269602);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.1611816);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1536953);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.03635368);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.3012383);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3775158);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8157392);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5868577);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6573139);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3892555);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4644796);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4500024);
   hNCpi0inFVres_stack_7->SetBinError(8,0.1008537);
   hNCpi0inFVres_stack_7->SetBinError(9,0.159529);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1120216);
   hNCpi0inFVres_stack_7->SetBinError(11,0.122944);
   hNCpi0inFVres_stack_7->SetBinError(12,0.03635368);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1545843);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5266349);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.157947);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.807216);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.513016);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3899447);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.2333504);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.3062969);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.03813057);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.01881452);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3218995);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1938598);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3527071);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6185118);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4212368);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1177756);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.08464398);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1730283);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.02286502);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.01881452);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2187175);
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
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
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
   hNCinFV_stack_11->SetBinContent(1,0.591851);
   hNCinFV_stack_11->SetBinContent(2,3.65301);
   hNCinFV_stack_11->SetBinContent(3,0.3375988);
   hNCinFV_stack_11->SetBinContent(4,0.5130002);
   hNCinFV_stack_11->SetBinContent(5,0.6667601);
   hNCinFV_stack_11->SetBinContent(6,0.1967154);
   hNCinFV_stack_11->SetBinContent(8,0.2176518);
   hNCinFV_stack_11->SetBinContent(11,0.3159804);
   hNCinFV_stack_11->SetBinContent(13,0.2176518);
   hNCinFV_stack_11->SetBinError(1,0.3228218);
   hNCinFV_stack_11->SetBinError(2,1.405158);
   hNCinFV_stack_11->SetBinError(3,0.2470938);
   hNCinFV_stack_11->SetBinError(4,0.2565031);
   hNCinFV_stack_11->SetBinError(5,0.4138638);
   hNCinFV_stack_11->SetBinError(6,0.1967154);
   hNCinFV_stack_11->SetBinError(8,0.2176518);
   hNCinFV_stack_11->SetBinError(11,0.2294884);
   hNCinFV_stack_11->SetBinError(13,0.2176518);
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
   hmcerror__41->SetBinContent(1,17.15816);
   hmcerror__41->SetBinContent(2,45.54105);
   hmcerror__41->SetBinContent(3,31.46963);
   hmcerror__41->SetBinContent(4,27.87798);
   hmcerror__41->SetBinContent(5,13.44932);
   hmcerror__41->SetBinContent(6,8.117336);
   hmcerror__41->SetBinContent(7,8.1871);
   hmcerror__41->SetBinContent(8,1.486312);
   hmcerror__41->SetBinContent(9,1.071017);
   hmcerror__41->SetBinContent(10,0.6822943);
   hmcerror__41->SetBinContent(11,0.9475491);
   hmcerror__41->SetBinContent(12,0.9515129);
   hmcerror__41->SetBinContent(13,7.057054);
   hmcerror__41->SetBinError(1,10.70937);
   hmcerror__41->SetBinError(2,18.48314);
   hmcerror__41->SetBinError(3,14.55194);
   hmcerror__41->SetBinError(4,12.89842);
   hmcerror__41->SetBinError(5,8.87371);
   hmcerror__41->SetBinError(6,6.371212);
   hmcerror__41->SetBinError(7,6.567053);
   hmcerror__41->SetBinError(8,2.06127);
   hmcerror__41->SetBinError(9,1.864603);
   hmcerror__41->SetBinError(10,0.9622975);
   hmcerror__41->SetBinError(11,4.354571);
   hmcerror__41->SetBinError(12,3.475324);
   hmcerror__41->SetBinError(13,7.904278);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/12","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 21.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  6.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 6.5","F");

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
   0.6241562,
   0.4058567,
   0.4624122,
   0.4626741,
   0.6597886,
   0.7848895,
   0.8021219,
   1.386835,
   1.740966,
   1.410385,
   4.595615,
   3.65242};
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
   0.6241562,
   0.4058567,
   0.4624122,
   0.4626741,
   0.6597886,
   0.7848895,
   0.8021219,
   1.386835,
   1.740966,
   1.410385,
   4.595615,
   3.65242};
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
   0.2609433,
   0.2640206,
   0.3702005,
   0.3259788,
   0.3728744,
   0.3398721,
   0.267735,
   0.5438045,
   0.614218,
   0.850897,
   0.7782429,
   1.042071};
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
   0.2609433,
   0.2640206,
   0.3702005,
   0.3259788,
   0.3728744,
   0.3398721,
   0.267735,
   0.5438045,
   0.614218,
   0.850897,
   0.7782429,
   1.042071};
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
   0.4079691,
   0.9881194,
   1.366397,
   0.7532828,
   0.7435318,
   1.355124,
   0.2442867,
   1.345612,
   0.9336924,
   0,
   1.055354,
   1.050958};
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
   0.1666577,
   0.1502293,
   0.2126399,
   0.1698617,
   0.2489962,
   0.4308679,
   0.2442867,
   1.345612,
   0.9336924,
   0,
   1.055354,
   1.050958};
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
   0.1521451,
   0.1457366,
   0.2061289,
   0.1622392,
   0.2318258,
   0.4028415,
   0.1855565,
   1.022107,
   1.269551,
   1.682265,
   1.434976,
   1.428998};
   grae = new TGraphAsymmErrors(12,_fx3056,_fy3056,_felx3056,_fehx3056,_fely3056,_fehy3056);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3056 = new TH1F("Graph_Graph3056","",100,0,1320);
   Graph_Graph3056->SetMinimum(0);
   Graph_Graph3056->SetMaximum(2.739363);
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
   canvas14->cd();
   canvas14->Modified();
   canvas14->cd();
   canvas14->SetSelected(canvas14);
}
