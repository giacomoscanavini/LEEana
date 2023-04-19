#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 21:31:46 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-2.440207,1353.846,269.8355);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__10->SetBinContent(1,34.8795);
   hmc__10->SetBinContent(2,122.0103);
   hmc__10->SetBinContent(3,97.31617);
   hmc__10->SetBinContent(4,73.93304);
   hmc__10->SetBinContent(5,45.27469);
   hmc__10->SetBinContent(6,24.51644);
   hmc__10->SetBinContent(7,20.45038);
   hmc__10->SetBinContent(8,8.825024);
   hmc__10->SetBinContent(9,7.363942);
   hmc__10->SetBinContent(10,5.954546);
   hmc__10->SetBinContent(11,6.953287);
   hmc__10->SetBinContent(12,3.055228);
   hmc__10->SetBinContent(13,30.00285);
   hmc__10->SetBinError(1,16.74678);
   hmc__10->SetBinError(2,43.37923);
   hmc__10->SetBinError(3,32.34284);
   hmc__10->SetBinError(4,29.53135);
   hmc__10->SetBinError(5,17.29825);
   hmc__10->SetBinError(6,12.37586);
   hmc__10->SetBinError(7,16.18917);
   hmc__10->SetBinError(8,7.276463);
   hmc__10->SetBinError(9,6.431649);
   hmc__10->SetBinError(10,5.988199);
   hmc__10->SetBinError(11,8.17999);
   hmc__10->SetBinError(12,3.660794);
   hmc__10->SetBinError(13,20.02645);
   hmc__10->SetMinimum(-2.440207);
   hmc__10->SetMaximum(256.2217);
   hmc__10->SetEntries(469.1651);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",12,0,1200);
   hs4_stack_4->SetMinimum(-1.556429e-09);
   hs4_stack_4->SetMaximum(128.1108);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,2.609627);
   hbadmatch_stack_1->SetBinContent(2,4.426368);
   hbadmatch_stack_1->SetBinContent(3,4.537905);
   hbadmatch_stack_1->SetBinContent(4,1.03082);
   hbadmatch_stack_1->SetBinContent(5,1.949166);
   hbadmatch_stack_1->SetBinContent(6,1.099549);
   hbadmatch_stack_1->SetBinContent(7,0.2439841);
   hbadmatch_stack_1->SetBinContent(8,0.231042);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.9018036);
   hbadmatch_stack_1->SetBinError(2,1.01574);
   hbadmatch_stack_1->SetBinError(3,1.119582);
   hbadmatch_stack_1->SetBinError(4,0.4619294);
   hbadmatch_stack_1->SetBinError(5,0.7604681);
   hbadmatch_stack_1->SetBinError(6,0.6128479);
   hbadmatch_stack_1->SetBinError(7,0.2439841);
   hbadmatch_stack_1->SetBinError(8,0.231042);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.2946723);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,4.53161);
   hext_stack_2->SetBinContent(2,9.712016);
   hext_stack_2->SetBinContent(3,6.172367);
   hext_stack_2->SetBinContent(4,3.323403);
   hext_stack_2->SetBinContent(5,3.800614);
   hext_stack_2->SetBinContent(6,0.973192);
   hext_stack_2->SetBinContent(7,2.980236);
   hext_stack_2->SetBinContent(8,0.6487947);
   hext_stack_2->SetBinContent(9,1.055394);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinContent(11,0.9660115);
   hext_stack_2->SetBinContent(12,0.6487947);
   hext_stack_2->SetBinContent(13,1.37261);
   hext_stack_2->SetBinError(1,1.418025);
   hext_stack_2->SetBinError(2,2.057197);
   hext_stack_2->SetBinError(3,1.506547);
   hext_stack_2->SetBinError(4,1.20364);
   hext_stack_2->SetBinError(5,1.319182);
   hext_stack_2->SetBinError(6,0.5618727);
   hext_stack_2->SetBinError(7,1.269171);
   hext_stack_2->SetBinError(8,0.4587671);
   hext_stack_2->SetBinError(9,0.6130171);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetBinError(11,0.7189592);
   hext_stack_2->SetBinError(12,0.4587671);
   hext_stack_2->SetBinError(13,0.8259691);
   hext_stack_2->SetEntries(92);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(2,0.5429839);
   hdirt_stack_3->SetBinContent(3,0.6910642);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(5,0.002351481);
   hdirt_stack_3->SetBinContent(6,0.2645861);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinError(2,0.4278058);
   hdirt_stack_3->SetBinError(3,0.4585707);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(5,0.002351481);
   hdirt_stack_3->SetBinError(6,0.2645861);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetEntries(11);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,4.186245);
   houtFV_stack_4->SetBinContent(2,16.69779);
   houtFV_stack_4->SetBinContent(3,16.40628);
   houtFV_stack_4->SetBinContent(4,10.38146);
   houtFV_stack_4->SetBinContent(5,8.247109);
   houtFV_stack_4->SetBinContent(6,4.581991);
   houtFV_stack_4->SetBinContent(7,3.608027);
   houtFV_stack_4->SetBinContent(8,1.945377);
   houtFV_stack_4->SetBinContent(9,2.052291);
   houtFV_stack_4->SetBinContent(10,2.050601);
   houtFV_stack_4->SetBinContent(11,1.670011);
   houtFV_stack_4->SetBinContent(12,0.7319179);
   houtFV_stack_4->SetBinContent(13,6.381067);
   houtFV_stack_4->SetBinError(1,0.98703);
   houtFV_stack_4->SetBinError(2,1.973737);
   houtFV_stack_4->SetBinError(3,2.07156);
   houtFV_stack_4->SetBinError(4,1.578524);
   houtFV_stack_4->SetBinError(5,1.505424);
   houtFV_stack_4->SetBinError(6,0.9746303);
   houtFV_stack_4->SetBinError(7,1.000625);
   houtFV_stack_4->SetBinError(8,0.7737202);
   houtFV_stack_4->SetBinError(9,0.7073425);
   houtFV_stack_4->SetBinError(10,0.7068742);
   houtFV_stack_4->SetBinError(11,0.6701959);
   houtFV_stack_4->SetBinError(12,0.438694);
   houtFV_stack_4->SetBinError(13,1.295452);
   houtFV_stack_4->SetEntries(344);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetEntries(26);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.357161);
   hNCpi0inFVres_stack_7->SetBinContent(2,28.47256);
   hNCpi0inFVres_stack_7->SetBinContent(3,24.5986);
   hNCpi0inFVres_stack_7->SetBinContent(4,22.45329);
   hNCpi0inFVres_stack_7->SetBinContent(5,12.25661);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.999276);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.626184);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.9896218);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.379062);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5430539);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.460186);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.834774);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8053307);
   hNCpi0inFVres_stack_7->SetBinError(2,1.747927);
   hNCpi0inFVres_stack_7->SetBinError(3,1.615486);
   hNCpi0inFVres_stack_7->SetBinError(4,1.600439);
   hNCpi0inFVres_stack_7->SetBinError(5,1.100999);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8805907);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6090844);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2839569);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3889391);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1881969);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2287991);
   hNCpi0inFVres_stack_7->SetBinError(12,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6801314);
   hNCpi0inFVres_stack_7->SetEntries(2042);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.534172);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.630592);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.2992);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.395854);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.57893);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.409458);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3756539);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3206861);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.687626);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3490316);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7372482);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8091477);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8232153);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4663734);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4580945);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.17535);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2201295);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4453858);
   hNCpi0inFVdis_stack_8->SetEntries(441);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,8.202791);
   hCCpi0inFV_stack_10->SetBinContent(2,26.11039);
   hCCpi0inFV_stack_10->SetBinContent(3,20.11589);
   hCCpi0inFV_stack_10->SetBinContent(4,14.29096);
   hCCpi0inFV_stack_10->SetBinContent(5,6.945426);
   hCCpi0inFV_stack_10->SetBinContent(6,4.504842);
   hCCpi0inFV_stack_10->SetBinContent(7,2.000729);
   hCCpi0inFV_stack_10->SetBinContent(8,2.055672);
   hCCpi0inFV_stack_10->SetBinContent(9,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(10,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(11,1.410583);
   hCCpi0inFV_stack_10->SetBinContent(12,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(13,5.614126);
   hCCpi0inFV_stack_10->SetBinError(1,1.364129);
   hCCpi0inFV_stack_10->SetBinError(2,2.606155);
   hCCpi0inFV_stack_10->SetBinError(3,2.272961);
   hCCpi0inFV_stack_10->SetBinError(4,1.955762);
   hCCpi0inFV_stack_10->SetBinError(5,1.287032);
   hCCpi0inFV_stack_10->SetBinError(6,1.069314);
   hCCpi0inFV_stack_10->SetBinError(7,0.7343859);
   hCCpi0inFV_stack_10->SetBinError(8,0.7082781);
   hCCpi0inFV_stack_10->SetBinError(9,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(10,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(11,0.6505627);
   hCCpi0inFV_stack_10->SetBinError(12,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(13,1.218357);
   hCCpi0inFV_stack_10->SetEntries(397);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,3.127768);
   hNCinFV_stack_11->SetBinContent(2,5.757289);
   hNCinFV_stack_11->SetBinContent(3,3.66128);
   hNCinFV_stack_11->SetBinContent(4,3.369284);
   hNCinFV_stack_11->SetBinContent(5,1.662242);
   hNCinFV_stack_11->SetBinContent(6,1.373626);
   hNCinFV_stack_11->SetBinContent(7,1.517089);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(9,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.5884556);
   hNCinFV_stack_11->SetBinContent(13,0.9286332);
   hNCinFV_stack_11->SetBinError(1,0.8999062);
   hNCinFV_stack_11->SetBinError(2,1.272629);
   hNCinFV_stack_11->SetBinError(3,0.9812871);
   hNCinFV_stack_11->SetBinError(4,0.8982705);
   hNCinFV_stack_11->SetBinError(5,0.6513556);
   hNCinFV_stack_11->SetBinError(6,0.519186);
   hNCinFV_stack_11->SetBinError(7,0.5887087);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(9,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.3397478);
   hNCinFV_stack_11->SetBinError(13,0.48078);
   hNCinFV_stack_11->SetEntries(97);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,5.106927);
   hnumuCCinFV_stack_12->SetBinContent(2,25.40924);
   hnumuCCinFV_stack_12->SetBinContent(3,14.97551);
   hnumuCCinFV_stack_12->SetBinContent(4,11.02735);
   hnumuCCinFV_stack_12->SetBinContent(5,7.707027);
   hnumuCCinFV_stack_12->SetBinContent(6,3.185867);
   hnumuCCinFV_stack_12->SetBinContent(7,4.586421);
   hnumuCCinFV_stack_12->SetBinContent(8,1.819044);
   hnumuCCinFV_stack_12->SetBinContent(9,1.361522);
   hnumuCCinFV_stack_12->SetBinContent(10,1.104398);
   hnumuCCinFV_stack_12->SetBinContent(11,1.177028);
   hnumuCCinFV_stack_12->SetBinContent(12,0.7231917);
   hnumuCCinFV_stack_12->SetBinContent(13,8.462302);
   hnumuCCinFV_stack_12->SetBinError(1,1.359473);
   hnumuCCinFV_stack_12->SetBinError(2,2.957317);
   hnumuCCinFV_stack_12->SetBinError(3,2.390847);
   hnumuCCinFV_stack_12->SetBinError(4,1.796828);
   hnumuCCinFV_stack_12->SetBinError(5,1.720643);
   hnumuCCinFV_stack_12->SetBinError(6,0.9084861);
   hnumuCCinFV_stack_12->SetBinError(7,1.082553);
   hnumuCCinFV_stack_12->SetBinError(8,0.7118799);
   hnumuCCinFV_stack_12->SetBinError(9,0.5570941);
   hnumuCCinFV_stack_12->SetBinError(10,0.5811561);
   hnumuCCinFV_stack_12->SetBinError(11,0.621704);
   hnumuCCinFV_stack_12->SetBinError(12,0.434885);
   hnumuCCinFV_stack_12->SetBinError(13,1.676387);
   hnumuCCinFV_stack_12->SetEntries(332);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.4673082);
   hnueCCinFV_stack_13->SetBinContent(4,2.156451);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,1.221901);
   hnueCCinFV_stack_13->SetBinError(3,0.3312651);
   hnueCCinFV_stack_13->SetBinError(4,1.605827);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.6318602);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__11->SetBinContent(1,34.8795);
   hmcerror__11->SetBinContent(2,122.0103);
   hmcerror__11->SetBinContent(3,97.31617);
   hmcerror__11->SetBinContent(4,73.93304);
   hmcerror__11->SetBinContent(5,45.27469);
   hmcerror__11->SetBinContent(6,24.51644);
   hmcerror__11->SetBinContent(7,20.45038);
   hmcerror__11->SetBinContent(8,8.825024);
   hmcerror__11->SetBinContent(9,7.363942);
   hmcerror__11->SetBinContent(10,5.954546);
   hmcerror__11->SetBinContent(11,6.953287);
   hmcerror__11->SetBinContent(12,3.055228);
   hmcerror__11->SetBinContent(13,30.00285);
   hmcerror__11->SetBinError(1,16.74678);
   hmcerror__11->SetBinError(2,43.37923);
   hmcerror__11->SetBinError(3,32.34284);
   hmcerror__11->SetBinError(4,29.53135);
   hmcerror__11->SetBinError(5,17.29825);
   hmcerror__11->SetBinError(6,12.37586);
   hmcerror__11->SetBinError(7,16.18917);
   hmcerror__11->SetBinError(8,7.276463);
   hmcerror__11->SetBinError(9,6.431649);
   hmcerror__11->SetBinError(10,5.988199);
   hmcerror__11->SetBinError(11,8.17999);
   hmcerror__11->SetBinError(12,3.660794);
   hmcerror__11->SetBinError(13,20.02645);
   hmcerror__11->SetEntries(469.1651);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[12] = {
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
   Double_t _fy3013[12] = {
   16,
   103,
   101,
   59,
   32,
   32,
   12,
   4,
   5,
   3,
   6,
   1};
   Double_t _felx3013[12] = {
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
   Double_t _fely3013[12] = {
   4.1628,
   10.14889,
   10.04988,
   7.8097,
   5.7977,
   5.7977,
   3.64022,
   2.29683,
   2.48995,
   2.143368,
   2.67925,
   1};
   Double_t _fehx3013[12] = {
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
   Double_t _fehy3013[12] = {
   3.9454,
   10.14889,
   10.04988,
   7.6066,
   5.5904,
   5.5904,
   3.4155,
   1.98186,
   2.21064,
   1.72422,
   2.41858,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1320);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(124.4638);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 374.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 16.9","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 35.5","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 72.6","F");

   ci = 1476;
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

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.9","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  107.3","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  23.9","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 87.6","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.0","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 78.2","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.2","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[12] = {
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
   Double_t _fy3014[12] = {
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
   Double_t _felx3014[12] = {
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
   Double_t _fely3014[12] = {
   0.4801323,
   0.3555374,
   0.3323481,
   0.3994337,
   0.3820732,
   0.5047985,
   0.7916317,
   0.8245261,
   0.8733976,
   1.005652,
   1.176421,
   1.198207};
   Double_t _fehx3014[12] = {
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
   Double_t _fehy3014[12] = {
   0.4801323,
   0.3555374,
   0.3323481,
   0.3994337,
   0.3820732,
   0.5047985,
   0.7916317,
   0.8245261,
   0.8733976,
   1.005652,
   1.176421,
   1.198207};
   grae = new TGraphAsymmErrors(12,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1320);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[12] = {
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
   Double_t _fy3015[12] = {
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
   Double_t _felx3015[12] = {
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
   Double_t _fely3015[12] = {
   0.22715,
   0.2457436,
   0.2780226,
   0.3195086,
   0.2880755,
   0.2985864,
   0.2433652,
   0.274035,
   0.2936736,
   0.273446,
   0.2723488,
   0.4022381};
   Double_t _fehx3015[12] = {
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
   Double_t _fehy3015[12] = {
   0.22715,
   0.2457436,
   0.2780226,
   0.3195086,
   0.2880755,
   0.2985864,
   0.2433652,
   0.274035,
   0.2936736,
   0.273446,
   0.2723488,
   0.4022381};
   grae = new TGraphAsymmErrors(12,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1320);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[12] = {
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
   Double_t _fy3016[12] = {
   0.4587222,
   0.8441908,
   1.037854,
   0.7980193,
   0.7067966,
   1.305247,
   0.5867863,
   0.4532566,
   0.6789842,
   0.5038167,
   0.8629012,
   0.3273078};
   Double_t _felx3016[12] = {
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
   Double_t _fely3016[12] = {
   0.119348,
   0.08318059,
   0.1032704,
   0.1056321,
   0.1280561,
   0.2364821,
   0.1780026,
   0.2602633,
   0.3381273,
   0.3599549,
   0.3853214,
   0.3273078};
   Double_t _fehx3016[12] = {
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
   Double_t _fehy3016[12] = {
   0.1131151,
   0.08318059,
   0.1032704,
   0.102885,
   0.1234774,
   0.2280266,
   0.167014,
   0.2245728,
   0.3001979,
   0.2895636,
   0.3478326,
   0.4450437};
   grae = new TGraphAsymmErrors(12,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1320);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.686601);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_PC_Np_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
