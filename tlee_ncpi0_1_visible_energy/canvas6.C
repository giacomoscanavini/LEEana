#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 16:05:15 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-153.8462,-26.04,1128.205,2879.476);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hmc__16->SetBinContent(1,448.4606);
   hmc__16->SetBinContent(2,1133.369);
   hmc__16->SetBinContent(3,565.4106);
   hmc__16->SetBinContent(4,287.064);
   hmc__16->SetBinContent(5,150.5112);
   hmc__16->SetBinContent(6,79.36658);
   hmc__16->SetBinContent(7,45.31648);
   hmc__16->SetBinContent(8,27.90934);
   hmc__16->SetBinContent(9,13.12708);
   hmc__16->SetBinContent(10,11.14607);
   hmc__16->SetBinContent(11,9.141809);
   hmc__16->SetBinContent(12,5.4592);
   hmc__16->SetBinContent(13,19.61757);
   hmc__16->SetBinError(1,113.0315);
   hmc__16->SetBinError(2,274.8962);
   hmc__16->SetBinError(3,150.2022);
   hmc__16->SetBinError(4,86.34866);
   hmc__16->SetBinError(5,37.79836);
   hmc__16->SetBinError(6,24.28903);
   hmc__16->SetBinError(7,19.2837);
   hmc__16->SetBinError(8,14.08545);
   hmc__16->SetBinError(9,7.84539);
   hmc__16->SetBinError(10,9.742239);
   hmc__16->SetBinError(11,9.865699);
   hmc__16->SetBinError(12,12.30395);
   hmc__16->SetBinError(13,10.61972);
   hmc__16->SetMinimum(-26.04);
   hmc__16->SetMaximum(2734.2);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",12,0,1000);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(1190.038);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,19.83136);
   hbadmatch_stack_1->SetBinContent(2,20.51666);
   hbadmatch_stack_1->SetBinContent(3,10.32127);
   hbadmatch_stack_1->SetBinContent(4,7.048016);
   hbadmatch_stack_1->SetBinContent(5,1.645227);
   hbadmatch_stack_1->SetBinContent(6,1.328807);
   hbadmatch_stack_1->SetBinContent(7,1.520475);
   hbadmatch_stack_1->SetBinContent(8,0.3934307);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.5610657);
   hbadmatch_stack_1->SetBinContent(11,0.4749889);
   hbadmatch_stack_1->SetBinContent(13,0.6192136);
   hbadmatch_stack_1->SetBinError(1,2.39101);
   hbadmatch_stack_1->SetBinError(2,2.775083);
   hbadmatch_stack_1->SetBinError(3,2.223544);
   hbadmatch_stack_1->SetBinError(4,1.526419);
   hbadmatch_stack_1->SetBinError(5,0.6881528);
   hbadmatch_stack_1->SetBinError(6,0.6591238);
   hbadmatch_stack_1->SetBinError(7,0.7041849);
   hbadmatch_stack_1->SetBinError(8,0.2781975);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.5610657);
   hbadmatch_stack_1->SetBinError(11,0.4749889);
   hbadmatch_stack_1->SetBinError(13,0.3584351);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,68.45024);
   hext_stack_2->SetBinContent(2,123.4077);
   hext_stack_2->SetBinContent(3,33.63736);
   hext_stack_2->SetBinContent(4,20.73038);
   hext_stack_2->SetBinContent(5,14.05768);
   hext_stack_2->SetBinContent(6,7.027455);
   hext_stack_2->SetBinContent(7,6.952434);
   hext_stack_2->SetBinContent(8,0.3243973);
   hext_stack_2->SetBinContent(9,1.137595);
   hext_stack_2->SetBinContent(10,0.4065989);
   hext_stack_2->SetBinContent(11,0.8131978);
   hext_stack_2->SetBinContent(13,1.379791);
   hext_stack_2->SetBinError(1,5.591172);
   hext_stack_2->SetBinError(2,7.53694);
   hext_stack_2->SetBinError(3,3.702691);
   hext_stack_2->SetBinError(4,3.238165);
   hext_stack_2->SetBinError(5,2.593508);
   hext_stack_2->SetBinError(6,1.879176);
   hext_stack_2->SetBinError(7,1.808318);
   hext_stack_2->SetBinError(8,0.3243973);
   hext_stack_2->SetBinError(9,0.6602113);
   hext_stack_2->SetBinError(10,0.4065989);
   hext_stack_2->SetBinError(11,0.5750177);
   hext_stack_2->SetBinError(13,0.6935586);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,14.03258);
   hdirt_stack_3->SetBinContent(2,16.09194);
   hdirt_stack_3->SetBinContent(3,4.626894);
   hdirt_stack_3->SetBinContent(4,2.038447);
   hdirt_stack_3->SetBinContent(5,0.8799402);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinError(1,2.010995);
   hdirt_stack_3->SetBinError(2,2.105544);
   hdirt_stack_3->SetBinError(3,1.115484);
   hdirt_stack_3->SetBinError(4,1.16361);
   hdirt_stack_3->SetBinError(5,0.4506329);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,77.09821);
   houtFV_stack_4->SetBinContent(2,138.9307);
   houtFV_stack_4->SetBinContent(3,46.21011);
   houtFV_stack_4->SetBinContent(4,10.40538);
   houtFV_stack_4->SetBinContent(5,6.988396);
   houtFV_stack_4->SetBinContent(6,1.558661);
   houtFV_stack_4->SetBinContent(7,1.462145);
   houtFV_stack_4->SetBinContent(8,0.7319179);
   houtFV_stack_4->SetBinContent(9,0.3934307);
   houtFV_stack_4->SetBinContent(11,0.3265825);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinError(1,4.409532);
   houtFV_stack_4->SetBinError(2,5.881741);
   houtFV_stack_4->SetBinError(3,3.452077);
   houtFV_stack_4->SetBinError(4,1.585422);
   houtFV_stack_4->SetBinError(5,1.34714);
   houtFV_stack_4->SetBinError(6,0.6036445);
   houtFV_stack_4->SetBinError(7,0.6198731);
   houtFV_stack_4->SetBinError(8,0.438694);
   houtFV_stack_4->SetBinError(9,0.2781975);
   houtFV_stack_4->SetBinError(11,0.2357168);
   houtFV_stack_4->SetBinError(13,0.1967154);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.5236);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,38.24496);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,23.48051);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,10.8904);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.182692);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.415386);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.468431);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.6695023);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5716925);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3920534);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4094663);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5796018);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.553205);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9043518);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.293747);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.936986);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.163913);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8850416);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9293014);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3834465);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2388353);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1957322);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2259424);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.212249);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3087577);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4476577);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.459857);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.536778);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9135543);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3769297);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3408638);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03661549);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4147044);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4580978);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2678443);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1015081);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2209438);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02589106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03620218);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01677029);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,175.5616);
   hNCpi0inFVres_stack_7->SetBinContent(2,487.4362);
   hNCpi0inFVres_stack_7->SetBinContent(3,206.177);
   hNCpi0inFVres_stack_7->SetBinContent(4,82.3427);
   hNCpi0inFVres_stack_7->SetBinContent(5,38.31142);
   hNCpi0inFVres_stack_7->SetBinContent(6,20.74054);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.46131);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.695412);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.157171);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.616943);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.048317);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6778744);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.577079);
   hNCpi0inFVres_stack_7->SetBinError(1,4.631664);
   hNCpi0inFVres_stack_7->SetBinError(2,7.589738);
   hNCpi0inFVres_stack_7->SetBinError(3,4.741005);
   hNCpi0inFVres_stack_7->SetBinError(4,3.081059);
   hNCpi0inFVres_stack_7->SetBinError(5,2.26139);
   hNCpi0inFVres_stack_7->SetBinError(6,1.763682);
   hNCpi0inFVres_stack_7->SetBinError(7,1.229943);
   hNCpi0inFVres_stack_7->SetBinError(8,1.145062);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7997632);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3878338);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3569908);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3280668);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7572423);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,33.40883);
   hNCpi0inFVdis_stack_8->SetBinContent(2,71.5347);
   hNCpi0inFVdis_stack_8->SetBinContent(3,39.13926);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.79747);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.6518);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.427494);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.224406);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.071167);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.752044);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.707689);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8687012);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.043976);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.13458);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.029836);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.874564);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.997765);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.844271);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.30577);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.001453);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7348525);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7768996);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.542771);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5691787);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4024045);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3095073);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5588612);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1761121);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1012118);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.0587264);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.131874);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06892557);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04441126);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,21.1483);
   hCCpi0inFV_stack_10->SetBinContent(2,117.3839);
   hCCpi0inFV_stack_10->SetBinContent(3,100.7389);
   hCCpi0inFV_stack_10->SetBinContent(4,66.24967);
   hCCpi0inFV_stack_10->SetBinContent(5,36.08713);
   hCCpi0inFV_stack_10->SetBinContent(6,19.43006);
   hCCpi0inFV_stack_10->SetBinContent(7,12.1945);
   hCCpi0inFV_stack_10->SetBinContent(8,7.035635);
   hCCpi0inFV_stack_10->SetBinContent(9,2.444031);
   hCCpi0inFV_stack_10->SetBinContent(10,4.338254);
   hCCpi0inFV_stack_10->SetBinContent(11,1.371936);
   hCCpi0inFV_stack_10->SetBinContent(12,1.610679);
   hCCpi0inFV_stack_10->SetBinContent(13,2.103854);
   hCCpi0inFV_stack_10->SetBinError(1,2.279391);
   hCCpi0inFV_stack_10->SetBinError(2,5.335732);
   hCCpi0inFV_stack_10->SetBinError(3,5.028097);
   hCCpi0inFV_stack_10->SetBinError(4,4.08892);
   hCCpi0inFV_stack_10->SetBinError(5,3.046446);
   hCCpi0inFV_stack_10->SetBinError(6,2.25473);
   hCCpi0inFV_stack_10->SetBinError(7,1.770393);
   hCCpi0inFV_stack_10->SetBinError(8,1.33109);
   hCCpi0inFV_stack_10->SetBinError(9,0.759648);
   hCCpi0inFV_stack_10->SetBinError(10,1.092264);
   hCCpi0inFV_stack_10->SetBinError(11,0.5185478);
   hCCpi0inFV_stack_10->SetBinError(12,0.6806271);
   hCCpi0inFV_stack_10->SetBinError(13,0.6792233);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,17.7653);
   hNCinFV_stack_11->SetBinContent(2,65.16716);
   hNCinFV_stack_11->SetBinContent(3,52.95887);
   hNCinFV_stack_11->SetBinContent(4,26.09206);
   hNCinFV_stack_11->SetBinContent(5,15.74487);
   hNCinFV_stack_11->SetBinContent(6,6.561548);
   hNCinFV_stack_11->SetBinContent(7,3.376781);
   hNCinFV_stack_11->SetBinContent(8,4.056089);
   hNCinFV_stack_11->SetBinContent(9,1.335464);
   hNCinFV_stack_11->SetBinContent(10,0.3900497);
   hNCinFV_stack_11->SetBinContent(11,1.269254);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinContent(13,2.482678);
   hNCinFV_stack_11->SetBinError(1,2.105901);
   hNCinFV_stack_11->SetBinError(2,4.075561);
   hNCinFV_stack_11->SetBinError(3,3.813241);
   hNCinFV_stack_11->SetBinError(4,2.687736);
   hNCinFV_stack_11->SetBinError(5,2.38818);
   hNCinFV_stack_11->SetBinError(6,1.586424);
   hNCinFV_stack_11->SetBinError(7,0.9944718);
   hNCinFV_stack_11->SetBinError(8,1.273009);
   hNCinFV_stack_11->SetBinError(9,0.6759796);
   hNCinFV_stack_11->SetBinError(10,0.2758068);
   hNCinFV_stack_11->SetBinError(11,0.7854941);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetBinError(13,0.8552222);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,9.818562);
   hnumuCCinFV_stack_12->SetBinContent(2,45.63266);
   hnumuCCinFV_stack_12->SetBinContent(3,41.81366);
   hnumuCCinFV_stack_12->SetBinContent(4,34.5529);
   hnumuCCinFV_stack_12->SetBinContent(5,15.45219);
   hnumuCCinFV_stack_12->SetBinContent(6,8.654634);
   hnumuCCinFV_stack_12->SetBinContent(7,3.941819);
   hnumuCCinFV_stack_12->SetBinContent(8,3.323889);
   hnumuCCinFV_stack_12->SetBinContent(9,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(10,1.320373);
   hnumuCCinFV_stack_12->SetBinContent(11,1.462145);
   hnumuCCinFV_stack_12->SetBinContent(12,0.4551731);
   hnumuCCinFV_stack_12->SetBinContent(13,1.858957);
   hnumuCCinFV_stack_12->SetBinError(1,2.314744);
   hnumuCCinFV_stack_12->SetBinError(2,3.865151);
   hnumuCCinFV_stack_12->SetBinError(3,3.723124);
   hnumuCCinFV_stack_12->SetBinError(4,3.277126);
   hnumuCCinFV_stack_12->SetBinError(5,2.068013);
   hnumuCCinFV_stack_12->SetBinError(6,1.455018);
   hnumuCCinFV_stack_12->SetBinError(7,1.310749);
   hnumuCCinFV_stack_12->SetBinError(8,1.029463);
   hnumuCCinFV_stack_12->SetBinError(9,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(10,0.5548703);
   hnumuCCinFV_stack_12->SetBinError(11,0.6198731);
   hnumuCCinFV_stack_12->SetBinError(12,0.3248035);
   hnumuCCinFV_stack_12->SetBinError(13,0.6804124);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(1,2.186077);
   hnueCCinFV_stack_13->SetBinContent(2,6.384726);
   hnueCCinFV_stack_13->SetBinContent(3,5.334696);
   hnueCCinFV_stack_13->SetBinContent(4,2.53963);
   hnueCCinFV_stack_13->SetBinContent(5,2.169017);
   hnueCCinFV_stack_13->SetBinContent(6,1.029985);
   hnueCCinFV_stack_13->SetBinContent(7,0.6779776);
   hnueCCinFV_stack_13->SetBinContent(8,0.4132661);
   hnueCCinFV_stack_13->SetBinContent(9,1.182159);
   hnueCCinFV_stack_13->SetBinContent(10,0.4130405);
   hnueCCinFV_stack_13->SetBinContent(11,1.03679);
   hnueCCinFV_stack_13->SetBinContent(12,0.8951805);
   hnueCCinFV_stack_13->SetBinContent(13,3.694723);
   hnueCCinFV_stack_13->SetBinError(1,1.403542);
   hnueCCinFV_stack_13->SetBinError(2,1.488221);
   hnueCCinFV_stack_13->SetBinError(3,1.55641);
   hnueCCinFV_stack_13->SetBinError(4,0.8324485);
   hnueCCinFV_stack_13->SetBinError(5,0.8132004);
   hnueCCinFV_stack_13->SetBinError(6,0.5442166);
   hnueCCinFV_stack_13->SetBinError(7,0.4890466);
   hnueCCinFV_stack_13->SetBinError(8,0.292684);
   hnueCCinFV_stack_13->SetBinError(9,0.5433532);
   hnueCCinFV_stack_13->SetBinError(10,0.2925159);
   hnueCCinFV_stack_13->SetBinError(11,0.8625403);
   hnueCCinFV_stack_13->SetBinError(12,0.5317779);
   hnueCCinFV_stack_13->SetBinError(13,1.744231);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__17->SetBinContent(1,448.4606);
   hmcerror__17->SetBinContent(2,1133.369);
   hmcerror__17->SetBinContent(3,565.4106);
   hmcerror__17->SetBinContent(4,287.064);
   hmcerror__17->SetBinContent(5,150.5112);
   hmcerror__17->SetBinContent(6,79.36658);
   hmcerror__17->SetBinContent(7,45.31648);
   hmcerror__17->SetBinContent(8,27.90934);
   hmcerror__17->SetBinContent(9,13.12708);
   hmcerror__17->SetBinContent(10,11.14607);
   hmcerror__17->SetBinContent(11,9.141809);
   hmcerror__17->SetBinContent(12,5.4592);
   hmcerror__17->SetBinContent(13,19.61757);
   hmcerror__17->SetBinError(1,113.0315);
   hmcerror__17->SetBinError(2,274.8962);
   hmcerror__17->SetBinError(3,150.2022);
   hmcerror__17->SetBinError(4,86.34866);
   hmcerror__17->SetBinError(5,37.79836);
   hmcerror__17->SetBinError(6,24.28903);
   hmcerror__17->SetBinError(7,19.2837);
   hmcerror__17->SetBinError(8,14.08545);
   hmcerror__17->SetBinError(9,7.84539);
   hmcerror__17->SetBinError(10,9.742239);
   hmcerror__17->SetBinError(11,9.865699);
   hmcerror__17->SetBinError(12,12.30395);
   hmcerror__17->SetBinError(13,10.61972);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3021[12] = {
   509,
   1302,
   573,
   265,
   126,
   63,
   33,
   20,
   10,
   13,
   6,
   3};
   Double_t _felx3021[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3021[12] = {
   22.56103,
   36.08324,
   23.93742,
   16.27882,
   11.22497,
   8.0648,
   5.8847,
   4.6266,
   3.34883,
   3.77763,
   2.67925,
   2.143368};
   Double_t _fehx3021[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3021[12] = {
   22.56103,
   36.08324,
   23.93742,
   16.27882,
   11.22497,
   7.862,
   5.6776,
   4.4133,
   3.1179,
   3.5552,
   2.41858,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1100);
   Graph_Graph3021->SetMinimum(0.7709688);
   Graph_Graph3021->SetMaximum(1471.806);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("","BNB Data, 2923.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.0","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.1","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  93.8","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.0","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1035.2","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.6","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 390.0","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 194.9","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 167.2","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.3","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   
   Double_t _fx3022[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3022[12] = {
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
   Double_t _felx3022[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3022[12] = {
   0.2520432,
   0.2425478,
   0.2656515,
   0.3007993,
   0.2511331,
   0.3060361,
   0.425534,
   0.5046858,
   0.5976492,
   0.8740517,
   1.079185,
   2.253801};
   Double_t _fehx3022[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3022[12] = {
   0.2520432,
   0.2425478,
   0.2656515,
   0.3007993,
   0.2511331,
   0.3060361,
   0.425534,
   0.5046858,
   0.5976492,
   0.8740517,
   1.079185,
   2.253801};
   grae = new TGraphAsymmErrors(12,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1100);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3023[12] = {
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
   Double_t _felx3023[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3023[12] = {
   0.199911,
   0.2203608,
   0.253732,
   0.2546825,
   0.20777,
   0.2149779,
   0.2331467,
   0.3048047,
   0.3030239,
   0.2881687,
   0.3239189,
   0.4117018};
   Double_t _fehx3023[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3023[12] = {
   0.199911,
   0.2203608,
   0.253732,
   0.2546825,
   0.20777,
   0.2149779,
   0.2331467,
   0.3048047,
   0.3030239,
   0.2881687,
   0.3239189,
   0.4117018};
   grae = new TGraphAsymmErrors(12,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1100);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[12] = {
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3024[12] = {
   1.134994,
   1.148787,
   1.013423,
   0.9231391,
   0.8371468,
   0.793785,
   0.7282119,
   0.7166059,
   0.761784,
   1.166331,
   0.6563253,
   0.549531};
   Double_t _felx3024[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3024[12] = {
   0.05030771,
   0.03183714,
   0.04233634,
   0.05670798,
   0.07457897,
   0.1016146,
   0.1298578,
   0.1657725,
   0.2551085,
   0.3389204,
   0.2930766,
   0.3926157};
   Double_t _fehx3024[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3024[12] = {
   0.05030771,
   0.03183714,
   0.04233634,
   0.05670798,
   0.07457897,
   0.09905933,
   0.1252878,
   0.1581298,
   0.2375166,
   0.3189645,
   0.2645625,
   0.3158375};
   grae = new TGraphAsymmErrors(12,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1100);
   Graph_Graph3024->SetMinimum(0.0240773);
   Graph_Graph3024->SetMaximum(1.618133);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_visible_energy_all",12,0,1000);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,1000,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
