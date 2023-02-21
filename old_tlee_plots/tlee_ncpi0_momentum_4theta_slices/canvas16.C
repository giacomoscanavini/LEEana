#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas16()
{
//=========Macro generated from canvas: canvas16/channel16
//=========  (Tue Dec  6 22:18:07 2022) by ROOT version 6.26/00
   TCanvas *canvas16 = new TCanvas("canvas16", "channel16",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas16->SetHighLightColor(2);
   canvas16->Range(0,0,1,1);
   canvas16->SetFillColor(0);
   canvas16->SetBorderMode(0);
   canvas16->SetBorderSize(2);
   canvas16->SetLeftMargin(0.12);
   canvas16->SetRightMargin(0.12);
   canvas16->SetTopMargin(0.05);
   canvas16->SetBottomMargin(0.12);
   canvas16->SetFrameLineWidth(2);
   canvas16->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-0.6,1353.846,66.34737);
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
   
   TH1F *hmc__46 = new TH1F("hmc__46","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__46->SetBinContent(1,6.199716);
   hmc__46->SetBinContent(2,23.71165);
   hmc__46->SetBinContent(3,22.38601);
   hmc__46->SetBinContent(4,24.04361);
   hmc__46->SetBinContent(5,22.61554);
   hmc__46->SetBinContent(6,11.35161);
   hmc__46->SetBinContent(7,9.091981);
   hmc__46->SetBinContent(8,5.175096);
   hmc__46->SetBinContent(9,3.176493);
   hmc__46->SetBinContent(10,3.694717);
   hmc__46->SetBinContent(11,4.93794);
   hmc__46->SetBinContent(12,2.959702);
   hmc__46->SetBinContent(13,19.511);
   hmc__46->SetBinError(1,5.568369);
   hmc__46->SetBinError(2,17.34789);
   hmc__46->SetBinError(3,13.45396);
   hmc__46->SetBinError(4,22.22036);
   hmc__46->SetBinError(5,15.14244);
   hmc__46->SetBinError(6,8.74878);
   hmc__46->SetBinError(7,7.965543);
   hmc__46->SetBinError(8,6.891975);
   hmc__46->SetBinError(9,4.413305);
   hmc__46->SetBinError(10,5.553142);
   hmc__46->SetBinError(11,9.664385);
   hmc__46->SetBinError(12,3.043236);
   hmc__46->SetBinError(13,12.45138);
   hmc__46->SetMinimum(-0.6);
   hmc__46->SetMaximum(63);
   hmc__46->SetEntries(159.5038);
   hmc__46->SetLineWidth(5);
   hmc__46->GetXaxis()->SetLabelFont(42);
   hmc__46->GetXaxis()->SetTitleOffset(1);
   hmc__46->GetXaxis()->SetTitleFont(42);
   hmc__46->GetYaxis()->SetTitle("Event counts");
   hmc__46->GetYaxis()->SetLabelFont(132);
   hmc__46->GetYaxis()->SetLabelSize(0.04);
   hmc__46->GetYaxis()->SetTitleSize(0.05);
   hmc__46->GetYaxis()->SetTitleOffset(0.73);
   hmc__46->GetYaxis()->SetTitleFont(132);
   hmc__46->GetZaxis()->SetLabelFont(42);
   hmc__46->GetZaxis()->SetTitleOffset(1);
   hmc__46->GetZaxis()->SetTitleFont(42);
   hmc__46->Draw("hist");
   
   THStack *hs16 = new THStack();
   hs16->SetName("hs16");
   hs16->SetTitle("");
   
   TH1F *hs16_stack_16 = new TH1F("hs16_stack_16","",12,0,1200);
   hs16_stack_16->SetMinimum(-1.222345e-08);
   hs16_stack_16->SetMaximum(25.24579);
   hs16_stack_16->SetDirectory(0);
   hs16_stack_16->SetStats(0);
   hs16_stack_16->SetLineWidth(2);
   hs16_stack_16->SetMarkerStyle(20);
   hs16_stack_16->GetXaxis()->SetNdivisions(509);
   hs16_stack_16->GetXaxis()->SetLabelFont(132);
   hs16_stack_16->GetXaxis()->SetLabelOffset(0.01);
   hs16_stack_16->GetXaxis()->SetLabelSize(0.08);
   hs16_stack_16->GetXaxis()->SetTitleSize(0.08);
   hs16_stack_16->GetXaxis()->SetTitleOffset(0.95);
   hs16_stack_16->GetXaxis()->SetTitleFont(132);
   hs16_stack_16->GetYaxis()->SetNdivisions(509);
   hs16_stack_16->GetYaxis()->SetLabelFont(132);
   hs16_stack_16->GetYaxis()->SetLabelOffset(0.01);
   hs16_stack_16->GetYaxis()->SetLabelSize(0.08);
   hs16_stack_16->GetYaxis()->SetTitleSize(0.08);
   hs16_stack_16->GetYaxis()->SetTitleOffset(0.95);
   hs16_stack_16->GetYaxis()->SetTitleFont(132);
   hs16_stack_16->GetZaxis()->SetLabelFont(132);
   hs16_stack_16->GetZaxis()->SetLabelSize(0.08);
   hs16_stack_16->GetZaxis()->SetTitleSize(0.08);
   hs16_stack_16->GetZaxis()->SetTitleOffset(1.2);
   hs16_stack_16->GetZaxis()->SetTitleFont(132);
   hs16->SetHistogram(hs16_stack_16);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.5816216);
   hbadmatch_stack_1->SetBinContent(2,0.2232218);
   hbadmatch_stack_1->SetBinContent(3,0.1950248);
   hbadmatch_stack_1->SetBinContent(4,0.2188528);
   hbadmatch_stack_1->SetBinContent(5,0.4507997);
   hbadmatch_stack_1->SetBinContent(6,0.4515218);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.4171523);
   hbadmatch_stack_1->SetBinError(2,0.2232218);
   hbadmatch_stack_1->SetBinError(3,0.1950249);
   hbadmatch_stack_1->SetBinError(4,0.2188527);
   hbadmatch_stack_1->SetBinError(5,0.3577123);
   hbadmatch_stack_1->SetBinError(6,0.2668619);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1629;
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
   hs16->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(2,1.137595);
   hext_stack_2->SetBinContent(3,0.7309963);
   hext_stack_2->SetBinContent(4,0.3243973);
   hext_stack_2->SetBinContent(5,4.021268);
   hext_stack_2->SetBinContent(6,0.6487947);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,0.4065989);
   hext_stack_2->SetBinContent(12,1.137595);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinError(2,0.6602113);
   hext_stack_2->SetBinError(3,0.5201503);
   hext_stack_2->SetBinError(4,0.3243973);
   hext_stack_2->SetBinError(5,1.545635);
   hext_stack_2->SetBinError(6,0.4587671);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,0.4065989);
   hext_stack_2->SetBinError(12,0.6602113);
   hext_stack_2->SetBinError(13,0.3243973);
   hext_stack_2->SetEntries(21);

   ci = 1630;
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
   hs16->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(5,0.7670878);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.1564614);
   hdirt_stack_3->SetBinError(5,0.5461925);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.1564614);
   hdirt_stack_3->SetEntries(5);

   ci = 1631;
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
   hs16->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(2,4.27304);
   houtFV_stack_4->SetBinContent(3,3.528391);
   houtFV_stack_4->SetBinContent(4,3.221695);
   houtFV_stack_4->SetBinContent(5,5.148618);
   houtFV_stack_4->SetBinContent(6,2.142023);
   houtFV_stack_4->SetBinContent(7,1.947476);
   houtFV_stack_4->SetBinContent(8,1.360005);
   houtFV_stack_4->SetBinContent(9,1.122719);
   houtFV_stack_4->SetBinContent(10,2.135155);
   houtFV_stack_4->SetBinContent(11,1.050323);
   houtFV_stack_4->SetBinContent(12,0.5202642);
   houtFV_stack_4->SetBinContent(13,2.604223);
   houtFV_stack_4->SetBinError(2,1.080816);
   houtFV_stack_4->SetBinError(3,0.9772879);
   houtFV_stack_4->SetBinError(4,0.8769129);
   houtFV_stack_4->SetBinError(5,1.150395);
   houtFV_stack_4->SetBinError(6,0.8363382);
   houtFV_stack_4->SetBinError(7,0.7600326);
   houtFV_stack_4->SetBinError(8,0.8025126);
   houtFV_stack_4->SetBinError(9,0.7054149);
   houtFV_stack_4->SetBinError(10,1.047579);
   houtFV_stack_4->SetBinError(11,0.5595114);
   houtFV_stack_4->SetBinError(12,0.3053687);
   houtFV_stack_4->SetBinError(13,0.8385941);
   houtFV_stack_4->SetEntries(120);

   ci = 1632;
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
   hs16->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.0604947);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3557839);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1076756);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04363919);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2251403);
   hNCpi0inFVcoh_stack_5->SetEntries(13);

   ci = 1633;
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
   hs16->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1297722);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2349816);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05684238);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1668542);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.007068991);
   hNCpi0inFVqe_stack_6->SetEntries(12);

   ci = 1634;
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
   hs16->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.846592);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.810519);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.256583);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.901691);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.558682);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.563242);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.674468);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.9402956);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.6088091);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.4354017);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.3014632);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.4704906);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.561432);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2861661);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4563825);
   hNCpi0inFVres_stack_7->SetBinError(3,0.4685272);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6583349);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4960996);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5085444);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4363491);
   hNCpi0inFVres_stack_7->SetBinError(8,0.375356);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2132692);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1835598);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1221029);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3739602);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6711784);
   hNCpi0inFVres_stack_7->SetEntries(627);

   ci = 1635;
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
   hs16->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.9975151);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7474615);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.137621);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.58347);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.273557);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.20644);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.356805);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.532171);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5096434);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3093989);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9278977);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2149963);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.637294);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5961759);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2582848);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3120805);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3930248);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4620092);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4104278);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5588261);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2512417);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3766524);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1510039);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5699145);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1449468);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8149251);
   hNCpi0inFVdis_stack_8->SetEntries(218);

   ci = 1636;
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
   hs16->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(2);

   ci = 1637;
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
   hs16->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,1.384998);
   hCCpi0inFV_stack_10->SetBinContent(2,6.120064);
   hCCpi0inFV_stack_10->SetBinContent(3,5.174987);
   hCCpi0inFV_stack_10->SetBinContent(4,5.927198);
   hCCpi0inFV_stack_10->SetBinContent(5,3.182711);
   hCCpi0inFV_stack_10->SetBinContent(6,1.710423);
   hCCpi0inFV_stack_10->SetBinContent(7,2.000729);
   hCCpi0inFV_stack_10->SetBinContent(8,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(9,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(10,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(11,0.8753801);
   hCCpi0inFV_stack_10->SetBinContent(12,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(13,3.332422);
   hCCpi0inFV_stack_10->SetBinError(1,0.5789466);
   hCCpi0inFV_stack_10->SetBinError(2,1.284331);
   hCCpi0inFV_stack_10->SetBinError(3,1.143756);
   hCCpi0inFV_stack_10->SetBinError(4,1.261548);
   hCCpi0inFV_stack_10->SetBinError(5,0.87873);
   hCCpi0inFV_stack_10->SetBinError(6,0.6196373);
   hCCpi0inFV_stack_10->SetBinError(7,0.7343859);
   hCCpi0inFV_stack_10->SetBinError(8,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(9,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(10,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(11,0.5191111);
   hCCpi0inFV_stack_10->SetBinError(12,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(13,0.9651633);
   hCCpi0inFV_stack_10->SetEntries(137);

   ci = 1638;
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
   hs16->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,1.614398);
   hNCinFV_stack_11->SetBinContent(2,2.519837);
   hNCinFV_stack_11->SetBinContent(3,1.076784);
   hNCinFV_stack_11->SetBinContent(4,2.444245);
   hNCinFV_stack_11->SetBinContent(5,0.6405246);
   hNCinFV_stack_11->SetBinContent(6,1.070324);
   hNCinFV_stack_11->SetBinContent(7,0.3604563);
   hNCinFV_stack_11->SetBinContent(8,0.5899609);
   hNCinFV_stack_11->SetBinContent(9,0.3726301);
   hNCinFV_stack_11->SetBinContent(11,1.087187);
   hNCinFV_stack_11->SetBinContent(13,1.805587);
   hNCinFV_stack_11->SetBinError(1,0.6427104);
   hNCinFV_stack_11->SetBinError(2,0.8167888);
   hNCinFV_stack_11->SetBinError(3,0.4819937);
   hNCinFV_stack_11->SetBinError(4,0.7350856);
   hNCinFV_stack_11->SetBinError(5,0.3286357);
   hNCinFV_stack_11->SetBinError(6,0.599435);
   hNCinFV_stack_11->SetBinError(7,0.2749052);
   hNCinFV_stack_11->SetBinError(8,0.3833617);
   hNCinFV_stack_11->SetBinError(9,0.3726301);
   hNCinFV_stack_11->SetBinError(11,0.6761958);
   hNCinFV_stack_11->SetBinError(13,0.9215446);
   hNCinFV_stack_11->SetEntries(59);

   ci = 1639;
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
   hs16->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,0.6291289);
   hnumuCCinFV_stack_12->SetBinContent(2,5.861099);
   hnumuCCinFV_stack_12->SetBinContent(3,7.032414);
   hnumuCCinFV_stack_12->SetBinContent(4,3.638331);
   hnumuCCinFV_stack_12->SetBinContent(5,3.124432);
   hnumuCCinFV_stack_12->SetBinContent(6,1.36028);
   hnumuCCinFV_stack_12->SetBinContent(7,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(8,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(9,0.2225131);
   hnumuCCinFV_stack_12->SetBinContent(11,0.5704716);
   hnumuCCinFV_stack_12->SetBinContent(13,2.938833);
   hnumuCCinFV_stack_12->SetBinError(1,0.3646189);
   hnumuCCinFV_stack_12->SetBinError(2,1.382635);
   hnumuCCinFV_stack_12->SetBinError(3,2.0974);
   hnumuCCinFV_stack_12->SetBinError(4,1.006722);
   hnumuCCinFV_stack_12->SetBinError(5,1.286573);
   hnumuCCinFV_stack_12->SetBinError(6,0.5701218);
   hnumuCCinFV_stack_12->SetBinError(7,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(8,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(9,0.2225131);
   hnumuCCinFV_stack_12->SetBinError(11,0.4223632);
   hnumuCCinFV_stack_12->SetBinError(13,1.260933);
   hnumuCCinFV_stack_12->SetEntries(92);

   ci = 1640;
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
   hs16->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(4,1.766401);
   hnueCCinFV_stack_13->SetBinContent(5,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,2.747238);
   hnueCCinFV_stack_13->SetBinError(4,1.581964);
   hnueCCinFV_stack_13->SetBinError(5,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,1.344208);
   hnueCCinFV_stack_13->SetEntries(11);

   ci = 1641;
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
   hs16->Add(hnueCCinFV_stack_13,"");
   hs16->Draw("hist same");
   
   TH1F *hmcerror__47 = new TH1F("hmcerror__47","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__47->SetBinContent(1,6.199716);
   hmcerror__47->SetBinContent(2,23.71165);
   hmcerror__47->SetBinContent(3,22.38601);
   hmcerror__47->SetBinContent(4,24.04361);
   hmcerror__47->SetBinContent(5,22.61554);
   hmcerror__47->SetBinContent(6,11.35161);
   hmcerror__47->SetBinContent(7,9.091981);
   hmcerror__47->SetBinContent(8,5.175096);
   hmcerror__47->SetBinContent(9,3.176493);
   hmcerror__47->SetBinContent(10,3.694717);
   hmcerror__47->SetBinContent(11,4.93794);
   hmcerror__47->SetBinContent(12,2.959702);
   hmcerror__47->SetBinContent(13,19.511);
   hmcerror__47->SetBinError(1,5.568369);
   hmcerror__47->SetBinError(2,17.34789);
   hmcerror__47->SetBinError(3,13.45396);
   hmcerror__47->SetBinError(4,22.22036);
   hmcerror__47->SetBinError(5,15.14244);
   hmcerror__47->SetBinError(6,8.74878);
   hmcerror__47->SetBinError(7,7.965543);
   hmcerror__47->SetBinError(8,6.891975);
   hmcerror__47->SetBinError(9,4.413305);
   hmcerror__47->SetBinError(10,5.553142);
   hmcerror__47->SetBinError(11,9.664385);
   hmcerror__47->SetBinError(12,3.043236);
   hmcerror__47->SetBinError(13,12.45138);
   hmcerror__47->SetEntries(159.5038);

   ci = TColor::GetColor("#999999");
   hmcerror__47->SetFillColor(ci);
   hmcerror__47->SetFillStyle(3002);
   hmcerror__47->SetLineColor(12);
   hmcerror__47->SetLineWidth(0);
   hmcerror__47->SetMarkerColor(0);
   hmcerror__47->SetMarkerSize(0);
   hmcerror__47->GetXaxis()->SetLabelFont(42);
   hmcerror__47->GetXaxis()->SetTitleOffset(1);
   hmcerror__47->GetXaxis()->SetTitleFont(42);
   hmcerror__47->GetYaxis()->SetLabelFont(42);
   hmcerror__47->GetYaxis()->SetTitleFont(42);
   hmcerror__47->GetZaxis()->SetLabelFont(42);
   hmcerror__47->GetZaxis()->SetTitleOffset(1);
   hmcerror__47->GetZaxis()->SetTitleFont(42);
   hmcerror__47->Draw("same E2");
   
   Double_t _fx3061[12] = {
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
   Double_t _fy3061[12] = {
   5,
   22,
   30,
   24,
   20,
   15,
   8,
   4,
   3,
   2,
   1,
   3};
   Double_t _felx3061[12] = {
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
   Double_t _fely3061[12] = {
   2.48995,
   4.8417,
   5.6197,
   5.0476,
   4.6266,
   4.0385,
   3.0307,
   2.29683,
   2.143368,
   2,
   1,
   2.143368};
   Double_t _fehx3061[12] = {
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
   Double_t _fehy3061[12] = {
   2.21064,
   4.6299,
   5.4117,
   4.837,
   4.4133,
   3.8197,
   2.7896,
   1.98186,
   1.72422,
   1.51917,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3061,_fy3061,_felx3061,_fehx3061,_fely3061,_fehy3061);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3061 = new TH1F("Graph_Graph3061","",100,0,1320);
   Graph_Graph3061->SetMinimum(0);
   Graph_Graph3061->SetMaximum(38.95287);
   Graph_Graph3061->SetDirectory(0);
   Graph_Graph3061->SetStats(0);
   Graph_Graph3061->SetLineWidth(2);
   Graph_Graph3061->SetMarkerStyle(20);
   Graph_Graph3061->GetXaxis()->SetNdivisions(509);
   Graph_Graph3061->GetXaxis()->SetLabelFont(132);
   Graph_Graph3061->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3061->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3061->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3061->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3061->GetXaxis()->SetTitleFont(132);
   Graph_Graph3061->GetYaxis()->SetNdivisions(509);
   Graph_Graph3061->GetYaxis()->SetLabelFont(132);
   Graph_Graph3061->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3061->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3061->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3061->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3061->GetYaxis()->SetTitleFont(132);
   Graph_Graph3061->GetZaxis()->SetLabelFont(132);
   Graph_Graph3061->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3061->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3061->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3061->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3061);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.42","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.0/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 137.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 2.1","F");

   ci = 1629;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 8.8","F");

   ci = 1630;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

   ci = 1631;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 26.4","F");

   ci = 1632;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.4","F");

   ci = 1633;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.5","F");

   ci = 1634;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  22.4","F");

   ci = 1635;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  10.8","F");

   ci = 1636;
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

   ci = 1637;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 28.9","F");

   ci = 1638;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 11.8","F");

   ci = 1639;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 23.6","F");

   ci = 1640;
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

   ci = 1641;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas16->cd();
  
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
   
   Double_t _fx3062[12] = {
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
   Double_t _fy3062[12] = {
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
   Double_t _felx3062[12] = {
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
   Double_t _fely3062[12] = {
   0.8981653,
   0.7316186,
   0.6009984,
   0.9241694,
   0.669559,
   0.770708,
   0.8761064,
   1.331758,
   1.389364,
   1.502995,
   1.957169,
   1.028224};
   Double_t _fehx3062[12] = {
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
   Double_t _fehy3062[12] = {
   0.8981653,
   0.7316186,
   0.6009984,
   0.9241694,
   0.669559,
   0.770708,
   0.8761064,
   1.331758,
   1.389364,
   1.502995,
   1.957169,
   1.028224};
   grae = new TGraphAsymmErrors(12,_fx3062,_fy3062,_felx3062,_fehx3062,_fely3062,_fehy3062);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3062 = new TH1F("Graph_Graph3062","",100,0,1320);
   Graph_Graph3062->SetMinimum(0);
   Graph_Graph3062->SetMaximum(2);
   Graph_Graph3062->SetDirectory(0);
   Graph_Graph3062->SetStats(0);
   Graph_Graph3062->SetLineWidth(2);
   Graph_Graph3062->SetMarkerStyle(20);
   Graph_Graph3062->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3062->GetXaxis()->SetRange(1,91);
   Graph_Graph3062->GetXaxis()->SetNdivisions(509);
   Graph_Graph3062->GetXaxis()->SetLabelFont(132);
   Graph_Graph3062->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3062->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3062->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3062->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3062->GetXaxis()->SetTitleFont(132);
   Graph_Graph3062->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3062->GetYaxis()->SetNdivisions(210);
   Graph_Graph3062->GetYaxis()->SetLabelFont(132);
   Graph_Graph3062->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3062->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3062->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3062->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3062->GetYaxis()->SetTitleFont(132);
   Graph_Graph3062->GetZaxis()->SetLabelFont(132);
   Graph_Graph3062->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3062->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3062->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3062->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3062);
   
   grae->Draw("a2");
   
   Double_t _fx3063[12] = {
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
   Double_t _fy3063[12] = {
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
   Double_t _felx3063[12] = {
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
   Double_t _fely3063[12] = {
   0.3082003,
   0.3065509,
   0.3081908,
   0.3381275,
   0.2620865,
   0.3079247,
   0.2961258,
   0.3561913,
   0.6119677,
   0.482722,
   0.4121023,
   0.3974264};
   Double_t _fehx3063[12] = {
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
   Double_t _fehy3063[12] = {
   0.3082003,
   0.3065509,
   0.3081908,
   0.3381275,
   0.2620865,
   0.3079247,
   0.2961258,
   0.3561913,
   0.6119677,
   0.482722,
   0.4121023,
   0.3974264};
   grae = new TGraphAsymmErrors(12,_fx3063,_fy3063,_felx3063,_fehx3063,_fely3063,_fehy3063);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3063 = new TH1F("Graph_Graph3063","",100,0,1320);
   Graph_Graph3063->SetMinimum(0);
   Graph_Graph3063->SetMaximum(2);
   Graph_Graph3063->SetDirectory(0);
   Graph_Graph3063->SetStats(0);
   Graph_Graph3063->SetLineWidth(2);
   Graph_Graph3063->SetMarkerStyle(20);
   Graph_Graph3063->GetXaxis()->SetRange(1,91);
   Graph_Graph3063->GetXaxis()->SetNdivisions(509);
   Graph_Graph3063->GetXaxis()->SetLabelFont(132);
   Graph_Graph3063->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3063->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3063->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3063->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3063->GetXaxis()->SetTitleFont(132);
   Graph_Graph3063->GetYaxis()->SetNdivisions(509);
   Graph_Graph3063->GetYaxis()->SetLabelFont(132);
   Graph_Graph3063->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3063->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3063->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3063->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3063->GetYaxis()->SetTitleFont(132);
   Graph_Graph3063->GetZaxis()->SetLabelFont(132);
   Graph_Graph3063->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3063->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3063->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3063->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3063);
   
   grae->Draw("2 ");
   
   Double_t _fx3064[12] = {
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
   Double_t _fy3064[12] = {
   0.8064886,
   0.9278139,
   1.340123,
   0.9981864,
   0.8843478,
   1.321398,
   0.8798963,
   0.7729326,
   0.9444379,
   0.5413135,
   0.2025136,
   1.013616};
   Double_t _felx3064[12] = {
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
   Double_t _fely3064[12] = {
   0.4016233,
   0.2041908,
   0.2510362,
   0.2099352,
   0.2045762,
   0.3557644,
   0.3333377,
   0.4438237,
   0.6747593,
   0.5413135,
   0.2025136,
   0.7241837};
   Double_t _fehx3064[12] = {
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
   Double_t _fehy3064[12] = {
   0.3565712,
   0.1952584,
   0.2417447,
   0.2011761,
   0.1951446,
   0.3364896,
   0.3068198,
   0.382961,
   0.5428062,
   0.4111736,
   0.2753598,
   0.5825654};
   grae = new TGraphAsymmErrors(12,_fx3064,_fy3064,_felx3064,_fehx3064,_fely3064,_fehy3064);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3064 = new TH1F("Graph_Graph3064","",100,0,1320);
   Graph_Graph3064->SetMinimum(0);
   Graph_Graph3064->SetMaximum(1.823676);
   Graph_Graph3064->SetDirectory(0);
   Graph_Graph3064->SetStats(0);
   Graph_Graph3064->SetLineWidth(2);
   Graph_Graph3064->SetMarkerStyle(20);
   Graph_Graph3064->GetXaxis()->SetNdivisions(509);
   Graph_Graph3064->GetXaxis()->SetLabelFont(132);
   Graph_Graph3064->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3064->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3064->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3064->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3064->GetXaxis()->SetTitleFont(132);
   Graph_Graph3064->GetYaxis()->SetNdivisions(509);
   Graph_Graph3064->GetYaxis()->SetLabelFont(132);
   Graph_Graph3064->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3064->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3064->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3064->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3064->GetYaxis()->SetTitleFont(132);
   Graph_Graph3064->GetZaxis()->SetLabelFont(132);
   Graph_Graph3064->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3064->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3064->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3064->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3064);
   
   grae->Draw("p ");
   
   TH1F *hist__48 = new TH1F("hist__48","NCpi0BDT_theta3_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__48->SetLineColor(ci);
   hist__48->GetXaxis()->SetLabelFont(42);
   hist__48->GetXaxis()->SetTitleOffset(1);
   hist__48->GetXaxis()->SetTitleFont(42);
   hist__48->GetYaxis()->SetNdivisions(405);
   hist__48->GetYaxis()->SetLabelFont(42);
   hist__48->GetYaxis()->SetTitleFont(42);
   hist__48->GetZaxis()->SetLabelFont(42);
   hist__48->GetZaxis()->SetTitleOffset(1);
   hist__48->GetZaxis()->SetTitleFont(42);
   hist__48->Draw("axis same");
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
   canvas16->cd();
   canvas16->Modified();
   canvas16->cd();
   canvas16->SetSelected(canvas16);
}
