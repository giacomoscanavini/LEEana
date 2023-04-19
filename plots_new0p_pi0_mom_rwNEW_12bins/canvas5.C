#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 12:32:24 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-13.82161,1353.846,1528.379);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__13->SetBinContent(1,208.2108);
   hmc__13->SetBinContent(2,691.0804);
   hmc__13->SetBinContent(3,528.7828);
   hmc__13->SetBinContent(4,351.4563);
   hmc__13->SetBinContent(5,223.7224);
   hmc__13->SetBinContent(6,120.8627);
   hmc__13->SetBinContent(7,74.31386);
   hmc__13->SetBinContent(8,43.74734);
   hmc__13->SetBinContent(9,28.79933);
   hmc__13->SetBinContent(10,21.6801);
   hmc__13->SetBinContent(11,22.55841);
   hmc__13->SetBinContent(12,18.21131);
   hmc__13->SetBinContent(13,163.6165);
   hmc__13->SetBinError(1,69.42628);
   hmc__13->SetBinError(2,248.2311);
   hmc__13->SetBinError(3,208.7447);
   hmc__13->SetBinError(4,143.3339);
   hmc__13->SetBinError(5,87.58444);
   hmc__13->SetBinError(6,43.8741);
   hmc__13->SetBinError(7,33.94039);
   hmc__13->SetBinError(8,15.49487);
   hmc__13->SetBinError(9,12.5437);
   hmc__13->SetBinError(10,11.08995);
   hmc__13->SetBinError(11,12.38277);
   hmc__13->SetBinError(12,9.989009);
   hmc__13->SetBinError(13,49.14477);
   hmc__13->SetMinimum(-13.82161);
   hmc__13->SetMaximum(1451.269);
   hmc__13->SetEntries(2462.59);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",12,0,1200);
   hs5_stack_5->SetMinimum(-3.646956e-09);
   hs5_stack_5->SetMaximum(725.6345);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.30896);
   hbadmatch_stack_1->SetBinContent(2,13.43165);
   hbadmatch_stack_1->SetBinContent(3,11.83048);
   hbadmatch_stack_1->SetBinContent(4,7.050025);
   hbadmatch_stack_1->SetBinContent(5,4.436771);
   hbadmatch_stack_1->SetBinContent(6,2.479241);
   hbadmatch_stack_1->SetBinContent(7,1.792786);
   hbadmatch_stack_1->SetBinContent(8,1.064416);
   hbadmatch_stack_1->SetBinContent(9,1.289925);
   hbadmatch_stack_1->SetBinContent(10,0.5867651);
   hbadmatch_stack_1->SetBinContent(11,0.383108);
   hbadmatch_stack_1->SetBinContent(12,0.8326599);
   hbadmatch_stack_1->SetBinContent(13,2.624726);
   hbadmatch_stack_1->SetBinError(1,1.737162);
   hbadmatch_stack_1->SetBinError(2,2.042773);
   hbadmatch_stack_1->SetBinError(3,1.817836);
   hbadmatch_stack_1->SetBinError(4,1.332732);
   hbadmatch_stack_1->SetBinError(5,1.111886);
   hbadmatch_stack_1->SetBinError(6,0.8844908);
   hbadmatch_stack_1->SetBinError(7,0.6938319);
   hbadmatch_stack_1->SetBinError(8,0.6330255);
   hbadmatch_stack_1->SetBinError(9,0.5963399);
   hbadmatch_stack_1->SetBinError(10,0.3387718);
   hbadmatch_stack_1->SetBinError(11,0.383108);
   hbadmatch_stack_1->SetBinError(12,0.5075997);
   hbadmatch_stack_1->SetBinError(13,0.8662888);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,14.74679);
   hext_stack_2->SetBinContent(2,35.37185);
   hext_stack_2->SetBinContent(3,23.91539);
   hext_stack_2->SetBinContent(4,15.04964);
   hext_stack_2->SetBinContent(5,8.992609);
   hext_stack_2->SetBinContent(6,6.318);
   hext_stack_2->SetBinContent(7,6.545835);
   hext_stack_2->SetBinContent(8,3.800614);
   hext_stack_2->SetBinContent(9,2.435184);
   hext_stack_2->SetBinContent(10,2.192989);
   hext_stack_2->SetBinContent(11,2.6702);
   hext_stack_2->SetBinContent(12,1.055394);
   hext_stack_2->SetBinContent(13,7.932806);
   hext_stack_2->SetBinError(1,2.462898);
   hext_stack_2->SetBinError(2,3.910656);
   hext_stack_2->SetBinError(3,3.16471);
   hext_stack_2->SetBinError(4,2.602826);
   hext_stack_2->SetBinError(5,1.973683);
   hext_stack_2->SetBinError(6,1.630074);
   hext_stack_2->SetBinError(7,1.762013);
   hext_stack_2->SetBinError(8,1.319182);
   hext_stack_2->SetBinError(9,0.9256422);
   hext_stack_2->SetBinError(10,0.9009267);
   hext_stack_2->SetBinError(11,1.050314);
   hext_stack_2->SetBinError(12,0.6130171);
   hext_stack_2->SetBinError(13,1.839704);
   hext_stack_2->SetEntries(327);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,1.207287);
   hdirt_stack_3->SetBinContent(2,3.232388);
   hdirt_stack_3->SetBinContent(3,2.775094);
   hdirt_stack_3->SetBinContent(4,0.6439939);
   hdirt_stack_3->SetBinContent(5,0.3405387);
   hdirt_stack_3->SetBinContent(6,0.2645861);
   hdirt_stack_3->SetBinContent(7,0.2761429);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinContent(13,0.5388689);
   hdirt_stack_3->SetBinError(1,0.5590431);
   hdirt_stack_3->SetBinError(2,0.944376);
   hdirt_stack_3->SetBinError(3,0.8233811);
   hdirt_stack_3->SetBinError(4,0.4009055);
   hdirt_stack_3->SetBinError(5,0.3381954);
   hdirt_stack_3->SetBinError(6,0.2645861);
   hdirt_stack_3->SetBinError(7,0.1952625);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetBinError(13,0.4239131);
   hdirt_stack_3->SetEntries(44);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,9.05013);
   houtFV_stack_4->SetBinContent(2,24.1038);
   houtFV_stack_4->SetBinContent(3,28.99757);
   houtFV_stack_4->SetBinContent(4,18.55265);
   houtFV_stack_4->SetBinContent(5,13.58036);
   houtFV_stack_4->SetBinContent(6,7.957098);
   houtFV_stack_4->SetBinContent(7,6.053749);
   houtFV_stack_4->SetBinContent(8,2.578467);
   houtFV_stack_4->SetBinContent(9,3.712842);
   houtFV_stack_4->SetBinContent(10,2.640747);
   houtFV_stack_4->SetBinContent(11,2.010189);
   houtFV_stack_4->SetBinContent(12,1.843892);
   houtFV_stack_4->SetBinContent(13,13.89865);
   houtFV_stack_4->SetBinError(1,1.475996);
   houtFV_stack_4->SetBinError(2,2.391711);
   houtFV_stack_4->SetBinError(3,2.739365);
   houtFV_stack_4->SetBinError(4,2.135298);
   houtFV_stack_4->SetBinError(5,1.902048);
   houtFV_stack_4->SetBinError(6,1.349545);
   houtFV_stack_4->SetBinError(7,1.256574);
   houtFV_stack_4->SetBinError(8,0.8462056);
   houtFV_stack_4->SetBinError(9,0.9612155);
   houtFV_stack_4->SetBinError(10,0.784705);
   houtFV_stack_4->SetBinError(11,0.7515872);
   houtFV_stack_4->SetBinError(12,0.7279925);
   houtFV_stack_4->SetBinError(13,1.908423);
   houtFV_stack_4->SetEntries(584);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.687785);
   hNCpi0inFVqe_stack_6->SetBinContent(2,4.589074);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.454376);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.258748);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.795154);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2942771);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.7318613);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4401843);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5170337);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3073253);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,69.01111);
   hNCpi0inFVres_stack_7->SetBinContent(2,320.7992);
   hNCpi0inFVres_stack_7->SetBinContent(3,256.3467);
   hNCpi0inFVres_stack_7->SetBinContent(4,166.5842);
   hNCpi0inFVres_stack_7->SetBinContent(5,100.7962);
   hNCpi0inFVres_stack_7->SetBinContent(6,45.56719);
   hNCpi0inFVres_stack_7->SetBinContent(7,21.72505);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.73996);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.574798);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.950605);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.58036);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.945542);
   hNCpi0inFVres_stack_7->SetBinContent(13,45.79838);
   hNCpi0inFVres_stack_7->SetBinError(1,2.740776);
   hNCpi0inFVres_stack_7->SetBinError(2,5.85562);
   hNCpi0inFVres_stack_7->SetBinError(3,5.238484);
   hNCpi0inFVres_stack_7->SetBinError(4,4.231117);
   hNCpi0inFVres_stack_7->SetBinError(5,3.333058);
   hNCpi0inFVres_stack_7->SetBinError(6,2.194947);
   hNCpi0inFVres_stack_7->SetBinError(7,1.507754);
   hNCpi0inFVres_stack_7->SetBinError(8,1.082491);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9340332);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6789375);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8091877);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6681513);
   hNCpi0inFVres_stack_7->SetBinError(13,2.225121);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,17.88878);
   hNCpi0inFVdis_stack_8->SetBinContent(2,54.4801);
   hNCpi0inFVdis_stack_8->SetBinContent(3,38.75906);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.63747);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.80774);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.66681);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.53585);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.413274);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.161926);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.15719);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.199372);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.953344);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.43309);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.343491);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.387265);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.987831);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.77388);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.375933);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.059046);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7970721);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.54298);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4600016);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3435999);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3353836);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5143295);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.258582);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.418668);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.739354);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2107962);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3047819);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,37.03388);
   hCCpi0inFV_stack_10->SetBinContent(2,111.419);
   hCCpi0inFV_stack_10->SetBinContent(3,76.80032);
   hCCpi0inFV_stack_10->SetBinContent(4,50.93539);
   hCCpi0inFV_stack_10->SetBinContent(5,27.72078);
   hCCpi0inFV_stack_10->SetBinContent(6,18.9524);
   hCCpi0inFV_stack_10->SetBinContent(7,8.745397);
   hCCpi0inFV_stack_10->SetBinContent(8,5.820077);
   hCCpi0inFV_stack_10->SetBinContent(9,3.175949);
   hCCpi0inFV_stack_10->SetBinContent(10,3.181021);
   hCCpi0inFV_stack_10->SetBinContent(11,2.874418);
   hCCpi0inFV_stack_10->SetBinContent(12,2.492213);
   hCCpi0inFV_stack_10->SetBinContent(13,17.90324);
   hCCpi0inFV_stack_10->SetBinError(1,3.032225);
   hCCpi0inFV_stack_10->SetBinError(2,5.323216);
   hCCpi0inFV_stack_10->SetBinError(3,4.413826);
   hCCpi0inFV_stack_10->SetBinError(4,3.61524);
   hCCpi0inFV_stack_10->SetBinError(5,2.566213);
   hCCpi0inFV_stack_10->SetBinError(6,2.194975);
   hCCpi0inFV_stack_10->SetBinError(7,1.560404);
   hCCpi0inFV_stack_10->SetBinError(8,1.177542);
   hCCpi0inFV_stack_10->SetBinError(9,0.8772215);
   hCCpi0inFV_stack_10->SetBinError(10,0.8783531);
   hCCpi0inFV_stack_10->SetBinError(11,0.8989642);
   hCCpi0inFV_stack_10->SetBinError(12,0.7326332);
   hCCpi0inFV_stack_10->SetBinError(13,2.202564);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,24.48126);
   hNCinFV_stack_11->SetBinContent(2,53.68974);
   hNCinFV_stack_11->SetBinContent(3,34.92144);
   hNCinFV_stack_11->SetBinContent(4,20.28478);
   hNCinFV_stack_11->SetBinContent(5,16.36061);
   hNCinFV_stack_11->SetBinContent(6,11.67542);
   hNCinFV_stack_11->SetBinContent(7,8.744368);
   hNCinFV_stack_11->SetBinContent(8,4.53835);
   hNCinFV_stack_11->SetBinContent(9,1.320373);
   hNCinFV_stack_11->SetBinContent(10,2.732646);
   hNCinFV_stack_11->SetBinContent(11,2.298879);
   hNCinFV_stack_11->SetBinContent(12,1.997348);
   hNCinFV_stack_11->SetBinContent(13,16.31243);
   hNCinFV_stack_11->SetBinError(1,2.474728);
   hNCinFV_stack_11->SetBinError(2,3.703463);
   hNCinFV_stack_11->SetBinError(3,2.975901);
   hNCinFV_stack_11->SetBinError(4,2.237767);
   hNCinFV_stack_11->SetBinError(5,2.058552);
   hNCinFV_stack_11->SetBinError(6,1.710621);
   hNCinFV_stack_11->SetBinError(7,1.468022);
   hNCinFV_stack_11->SetBinError(8,1.110434);
   hNCinFV_stack_11->SetBinError(9,0.5548703);
   hNCinFV_stack_11->SetBinError(10,0.8554385);
   hNCinFV_stack_11->SetBinError(11,0.7066675);
   hNCinFV_stack_11->SetBinError(12,0.7334836);
   hNCinFV_stack_11->SetBinError(13,2.06832);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,21.47328);
   hnumuCCinFV_stack_12->SetBinContent(2,67.92799);
   hnumuCCinFV_stack_12->SetBinContent(3,49.52973);
   hnumuCCinFV_stack_12->SetBinContent(4,38.39166);
   hnumuCCinFV_stack_12->SetBinContent(5,32.37566);
   hnumuCCinFV_stack_12->SetBinContent(6,16.63207);
   hnumuCCinFV_stack_12->SetBinContent(7,14.16418);
   hnumuCCinFV_stack_12->SetBinContent(8,10.52965);
   hnumuCCinFV_stack_12->SetBinContent(9,5.903713);
   hnumuCCinFV_stack_12->SetBinContent(10,3.833748);
   hnumuCCinFV_stack_12->SetBinContent(11,5.251641);
   hnumuCCinFV_stack_12->SetBinContent(12,3.00977);
   hnumuCCinFV_stack_12->SetBinContent(13,38.98597);
   hnumuCCinFV_stack_12->SetBinError(1,2.605707);
   hnumuCCinFV_stack_12->SetBinError(2,4.764838);
   hnumuCCinFV_stack_12->SetBinError(3,3.920949);
   hnumuCCinFV_stack_12->SetBinError(4,3.507118);
   hnumuCCinFV_stack_12->SetBinError(5,3.542422);
   hnumuCCinFV_stack_12->SetBinError(6,3.176531);
   hnumuCCinFV_stack_12->SetBinError(7,2.322507);
   hnumuCCinFV_stack_12->SetBinError(8,1.942691);
   hnumuCCinFV_stack_12->SetBinError(9,1.336246);
   hnumuCCinFV_stack_12->SetBinError(10,0.9889266);
   hnumuCCinFV_stack_12->SetBinError(11,1.215801);
   hnumuCCinFV_stack_12->SetBinError(12,0.948188);
   hnumuCCinFV_stack_12->SetBinError(13,3.637239);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(2,1.073786);
   hnueCCinFV_stack_13->SetBinContent(3,2.048247);
   hnueCCinFV_stack_13->SetBinContent(4,2.886678);
   hnueCCinFV_stack_13->SetBinContent(5,0.6420956);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(8,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.9280312);
   hnueCCinFV_stack_13->SetBinContent(13,5.281558);
   hnueCCinFV_stack_13->SetBinError(1,0.4810838);
   hnueCCinFV_stack_13->SetBinError(2,0.5557297);
   hnueCCinFV_stack_13->SetBinError(3,0.8488511);
   hnueCCinFV_stack_13->SetBinError(4,1.664473);
   hnueCCinFV_stack_13->SetBinError(5,0.3731328);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3921167);
   hnueCCinFV_stack_13->SetBinError(8,0.2346262);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.5410961);
   hnueCCinFV_stack_13->SetBinError(13,1.227349);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__14->SetBinContent(1,208.2108);
   hmcerror__14->SetBinContent(2,691.0804);
   hmcerror__14->SetBinContent(3,528.7828);
   hmcerror__14->SetBinContent(4,351.4563);
   hmcerror__14->SetBinContent(5,223.7224);
   hmcerror__14->SetBinContent(6,120.8627);
   hmcerror__14->SetBinContent(7,74.31386);
   hmcerror__14->SetBinContent(8,43.74734);
   hmcerror__14->SetBinContent(9,28.79933);
   hmcerror__14->SetBinContent(10,21.6801);
   hmcerror__14->SetBinContent(11,22.55841);
   hmcerror__14->SetBinContent(12,18.21131);
   hmcerror__14->SetBinContent(13,163.6165);
   hmcerror__14->SetBinError(1,69.42628);
   hmcerror__14->SetBinError(2,248.2311);
   hmcerror__14->SetBinError(3,208.7447);
   hmcerror__14->SetBinError(4,143.3339);
   hmcerror__14->SetBinError(5,87.58444);
   hmcerror__14->SetBinError(6,43.8741);
   hmcerror__14->SetBinError(7,33.94039);
   hmcerror__14->SetBinError(8,15.49487);
   hmcerror__14->SetBinError(9,12.5437);
   hmcerror__14->SetBinError(10,11.08995);
   hmcerror__14->SetBinError(11,12.38277);
   hmcerror__14->SetBinError(12,9.989009);
   hmcerror__14->SetBinError(13,49.14477);
   hmcerror__14->SetEntries(2462.59);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[12] = {
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
   Double_t _fy3017[12] = {
   144,
   524,
   432,
   248,
   124,
   95,
   57,
   40,
   27,
   17,
   19,
   7};
   Double_t _felx3017[12] = {
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
   Double_t _fely3017[12] = {
   12,
   22.89105,
   20.78461,
   15.74802,
   11.13553,
   9.8686,
   7.679,
   6.4604,
   5.3414,
   4.2835,
   4.5151,
   2.85954};
   Double_t _fehx3017[12] = {
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
   Double_t _fehy3017[12] = {
   12,
   22.89105,
   20.78461,
   15.74802,
   11.13553,
   9.667,
   7.4757,
   6.2549,
   5.1322,
   4.0673,
   4.3011,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(3.726414);
   Graph_Graph3017->SetMaximum(601.1661);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.26","h");
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
   entry=leg->AddEntry("","BNB Data, 1734.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.5","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 123.1","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.1","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.3","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1015.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  183.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 349.2","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 183.0","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 269.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[12] = {
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
   Double_t _fy3018[12] = {
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
   Double_t _felx3018[12] = {
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
   Double_t _fely3018[12] = {
   0.3334423,
   0.3591927,
   0.3947645,
   0.4078285,
   0.3914871,
   0.3630079,
   0.4567169,
   0.3541901,
   0.4355552,
   0.5115268,
   0.5489201,
   0.5485057};
   Double_t _fehx3018[12] = {
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
   Double_t _fehy3018[12] = {
   0.3334423,
   0.3591927,
   0.3947645,
   0.4078285,
   0.3914871,
   0.3630079,
   0.4567169,
   0.3541901,
   0.4355552,
   0.5115268,
   0.5489201,
   0.5485057};
   grae = new TGraphAsymmErrors(12,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1320);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[12] = {
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
   Double_t _fy3019[12] = {
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
   Double_t _felx3019[12] = {
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
   Double_t _fely3019[12] = {
   0.291512,
   0.3440729,
   0.3806697,
   0.3890774,
   0.3687484,
   0.326714,
   0.2625036,
   0.2281844,
   0.2689508,
   0.2407462,
   0.2189434,
   0.2285842};
   Double_t _fehx3019[12] = {
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
   Double_t _fehy3019[12] = {
   0.291512,
   0.3440729,
   0.3806697,
   0.3890774,
   0.3687484,
   0.326714,
   0.2625036,
   0.2281844,
   0.2689508,
   0.2407462,
   0.2189434,
   0.2285842};
   grae = new TGraphAsymmErrors(12,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1320);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[12] = {
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
   Double_t _fy3020[12] = {
   0.6916067,
   0.7582331,
   0.8169705,
   0.7056354,
   0.5542582,
   0.7860162,
   0.7670171,
   0.9143414,
   0.9375219,
   0.7841293,
   0.8422579,
   0.3843765};
   Double_t _felx3020[12] = {
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
   Double_t _fely3020[12] = {
   0.05763389,
   0.03312357,
   0.03930651,
   0.0448079,
   0.04977386,
   0.08165136,
   0.103332,
   0.1476753,
   0.1854696,
   0.1975775,
   0.2001515,
   0.15702};
   Double_t _fehx3020[12] = {
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
   Double_t _fehy3020[12] = {
   0.05763389,
   0.03312357,
   0.03930651,
   0.0448079,
   0.04977386,
   0.07998335,
   0.1005963,
   0.1429778,
   0.1782055,
   0.1876052,
   0.190665,
   0.1433466};
   grae = new TGraphAsymmErrors(12,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0.1385194);
   Graph_Graph3020->SetMaximum(1.204565);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
