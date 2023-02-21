#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Jan 13 22:53:51 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",164,172,1200,900);
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
   pad1->Range(-184.6154,-20.92,1353.846,2313.312);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__13->SetBinContent(1,305.387);
   hmc__13->SetBinContent(2,813.9944);
   hmc__13->SetBinContent(3,655.1964);
   hmc__13->SetBinContent(4,413.8232);
   hmc__13->SetBinContent(5,300.4662);
   hmc__13->SetBinContent(6,191.7534);
   hmc__13->SetBinContent(7,107.9828);
   hmc__13->SetBinContent(8,63.88163);
   hmc__13->SetBinContent(9,52.80311);
   hmc__13->SetBinContent(10,37.51685);
   hmc__13->SetBinContent(11,34.37037);
   hmc__13->SetBinContent(12,31.96525);
   hmc__13->SetBinContent(13,189.8356);
   hmc__13->SetBinError(1,116.7906);
   hmc__13->SetBinError(2,374.0902);
   hmc__13->SetBinError(3,284.4428);
   hmc__13->SetBinError(4,168.4865);
   hmc__13->SetBinError(5,112.9105);
   hmc__13->SetBinError(6,64.6917);
   hmc__13->SetBinError(7,40.40275);
   hmc__13->SetBinError(8,24.70709);
   hmc__13->SetBinError(9,20.32239);
   hmc__13->SetBinError(10,18.28031);
   hmc__13->SetBinError(11,19.32663);
   hmc__13->SetBinError(12,15.2918);
   hmc__13->SetBinError(13,57.97117);
   hmc__13->SetMinimum(-20.92);
   hmc__13->SetMaximum(2196.6);
   hmc__13->SetEntries(3699.717);
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
   hs5_stack_5->SetMinimum(-2.940502e-08);
   hs5_stack_5->SetMaximum(854.6942);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.08669);
   hbadmatch_stack_1->SetBinContent(2,17.71926);
   hbadmatch_stack_1->SetBinContent(3,13.88754);
   hbadmatch_stack_1->SetBinContent(4,7.944206);
   hbadmatch_stack_1->SetBinContent(5,6.710175);
   hbadmatch_stack_1->SetBinContent(6,3.34428);
   hbadmatch_stack_1->SetBinContent(7,1.931378);
   hbadmatch_stack_1->SetBinContent(9,3.093746);
   hbadmatch_stack_1->SetBinContent(10,3.673837);
   hbadmatch_stack_1->SetBinContent(13,0.9925678);
   hbadmatch_stack_1->SetBinError(1,3.192171);
   hbadmatch_stack_1->SetBinError(2,6.637908);
   hbadmatch_stack_1->SetBinError(3,3.702884);
   hbadmatch_stack_1->SetBinError(4,2.864601);
   hbadmatch_stack_1->SetBinError(5,2.704471);
   hbadmatch_stack_1->SetBinError(6,1.936542);
   hbadmatch_stack_1->SetBinError(7,1.428549);
   hbadmatch_stack_1->SetBinError(9,1.788687);
   hbadmatch_stack_1->SetBinError(10,2.409213);
   hbadmatch_stack_1->SetBinError(13,0.9925678);
   hbadmatch_stack_1->SetEntries(68);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,27.24371);
   houtFV_stack_4->SetBinContent(2,45.86152);
   houtFV_stack_4->SetBinContent(3,39.12469);
   houtFV_stack_4->SetBinContent(4,30.50999);
   houtFV_stack_4->SetBinContent(5,27.87254);
   houtFV_stack_4->SetBinContent(6,20.20456);
   houtFV_stack_4->SetBinContent(7,10.91825);
   houtFV_stack_4->SetBinContent(8,5.137343);
   houtFV_stack_4->SetBinContent(9,5.614154);
   houtFV_stack_4->SetBinContent(10,5.955407);
   houtFV_stack_4->SetBinContent(11,4.508731);
   houtFV_stack_4->SetBinContent(12,5.258119);
   houtFV_stack_4->SetBinContent(13,21.83748);
   houtFV_stack_4->SetBinError(1,5.135381);
   houtFV_stack_4->SetBinError(2,6.68062);
   houtFV_stack_4->SetBinError(3,6.056014);
   houtFV_stack_4->SetBinError(4,5.375934);
   houtFV_stack_4->SetBinError(5,5.301607);
   houtFV_stack_4->SetBinError(6,5.00651);
   houtFV_stack_4->SetBinError(7,3.291975);
   houtFV_stack_4->SetBinError(8,2.302785);
   houtFV_stack_4->SetBinError(9,2.313043);
   houtFV_stack_4->SetBinError(10,2.431285);
   houtFV_stack_4->SetBinError(11,2.14785);
   houtFV_stack_4->SetBinError(12,2.139771);
   houtFV_stack_4->SetBinError(13,4.657012);
   houtFV_stack_4->SetEntries(267);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4506357);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.952499);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.375035);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.798934);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.826946);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8272357);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3186475);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.328921);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.786452);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.044636);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9913707);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8272357);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4952944);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4952944);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.52417);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.972049);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.560491);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.65527);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6281452);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2648315);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2588577);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3340047);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3843462);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.9483206);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.421895);
   hNCpi0inFVqe_stack_6->SetBinError(4,1.259034);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4443701);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2648314);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2588577);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3340047);
   hNCpi0inFVqe_stack_6->SetEntries(30);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,91.32255);
   hNCpi0inFVres_stack_7->SetBinContent(2,302.693);
   hNCpi0inFVres_stack_7->SetBinContent(3,267.0094);
   hNCpi0inFVres_stack_7->SetBinContent(4,175.4243);
   hNCpi0inFVres_stack_7->SetBinContent(5,100.1648);
   hNCpi0inFVres_stack_7->SetBinContent(6,73.235);
   hNCpi0inFVres_stack_7->SetBinContent(7,32.01128);
   hNCpi0inFVres_stack_7->SetBinContent(8,17.83963);
   hNCpi0inFVres_stack_7->SetBinContent(9,19.79179);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.55994);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.359268);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.159374);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.65326);
   hNCpi0inFVres_stack_7->SetBinError(1,6.155463);
   hNCpi0inFVres_stack_7->SetBinError(2,10.73402);
   hNCpi0inFVres_stack_7->SetBinError(3,10.39491);
   hNCpi0inFVres_stack_7->SetBinError(4,8.129674);
   hNCpi0inFVres_stack_7->SetBinError(5,6.576773);
   hNCpi0inFVres_stack_7->SetBinError(6,6.374413);
   hNCpi0inFVres_stack_7->SetBinError(7,4.60242);
   hNCpi0inFVres_stack_7->SetBinError(8,3.179855);
   hNCpi0inFVres_stack_7->SetBinError(9,3.946924);
   hNCpi0inFVres_stack_7->SetBinError(10,2.270275);
   hNCpi0inFVres_stack_7->SetBinError(11,2.560332);
   hNCpi0inFVres_stack_7->SetBinError(12,2.123122);
   hNCpi0inFVres_stack_7->SetBinError(13,5.396513);
   hNCpi0inFVres_stack_7->SetEntries(3339);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.54565);
   hNCpi0inFVdis_stack_8->SetBinContent(2,75.55162);
   hNCpi0inFVdis_stack_8->SetBinContent(3,54.08121);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.23271);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.11193);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.87794);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.53745);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.73553);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.864745);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.300073);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.23976);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.901138);
   hNCpi0inFVdis_stack_8->SetBinContent(13,19.59227);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.530683);
   hNCpi0inFVdis_stack_8->SetBinError(2,5.742938);
   hNCpi0inFVdis_stack_8->SetBinError(3,5.1362);
   hNCpi0inFVdis_stack_8->SetBinError(4,3.927529);
   hNCpi0inFVdis_stack_8->SetBinError(5,4.249121);
   hNCpi0inFVdis_stack_8->SetBinError(6,4.007528);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.644363);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.987392);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.920255);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.919829);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7304362);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.186388);
   hNCpi0inFVdis_stack_8->SetBinError(13,4.255354);
   hNCpi0inFVdis_stack_8->SetEntries(700);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3340047);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3340047);
   hNCpi0inFVmec_stack_9->SetEntries(1);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,73.14706);
   hCCpi0inFV_stack_10->SetBinContent(2,202.3497);
   hCCpi0inFV_stack_10->SetBinContent(3,115.7088);
   hCCpi0inFV_stack_10->SetBinContent(4,79.90803);
   hCCpi0inFV_stack_10->SetBinContent(5,55.84679);
   hCCpi0inFV_stack_10->SetBinContent(6,32.17409);
   hCCpi0inFV_stack_10->SetBinContent(7,13.89595);
   hCCpi0inFV_stack_10->SetBinContent(8,8.93311);
   hCCpi0inFV_stack_10->SetBinContent(9,9.925678);
   hCCpi0inFV_stack_10->SetBinContent(10,2.977704);
   hCCpi0inFV_stack_10->SetBinContent(11,7.171355);
   hCCpi0inFV_stack_10->SetBinContent(12,10.11321);
   hCCpi0inFV_stack_10->SetBinContent(13,24.9806);
   hCCpi0inFV_stack_10->SetBinError(1,8.567817);
   hCCpi0inFV_stack_10->SetBinError(2,14.23427);
   hCCpi0inFV_stack_10->SetBinError(3,10.7483);
   hCCpi0inFV_stack_10->SetBinError(4,8.940886);
   hCCpi0inFV_stack_10->SetBinError(5,7.467392);
   hCCpi0inFV_stack_10->SetBinError(6,5.69489);
   hCCpi0inFV_stack_10->SetBinError(7,3.713849);
   hCCpi0inFV_stack_10->SetBinError(8,2.977704);
   hCCpi0inFV_stack_10->SetBinError(9,3.138775);
   hCCpi0inFV_stack_10->SetBinError(10,1.719178);
   hCCpi0inFV_stack_10->SetBinError(11,2.718396);
   hCCpi0inFV_stack_10->SetBinError(12,3.203022);
   hCCpi0inFV_stack_10->SetBinError(13,4.998781);
   hCCpi0inFV_stack_10->SetEntries(639);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,41.55737);
   hNCinFV_stack_11->SetBinContent(2,72.41874);
   hNCinFV_stack_11->SetBinContent(3,66.16851);
   hNCinFV_stack_11->SetBinContent(4,29.87973);
   hNCinFV_stack_11->SetBinContent(5,27.8592);
   hNCinFV_stack_11->SetBinContent(6,20.63701);
   hNCinFV_stack_11->SetBinContent(7,16.03438);
   hNCinFV_stack_11->SetBinContent(8,5.573145);
   hNCinFV_stack_11->SetBinContent(9,1.985136);
   hNCinFV_stack_11->SetBinContent(10,3.705109);
   hNCinFV_stack_11->SetBinContent(11,5.348991);
   hNCinFV_stack_11->SetBinContent(12,4.962839);
   hNCinFV_stack_11->SetBinContent(13,17.53886);
   hNCinFV_stack_11->SetBinError(1,6.647064);
   hNCinFV_stack_11->SetBinError(2,8.769917);
   hNCinFV_stack_11->SetBinError(3,9.037303);
   hNCinFV_stack_11->SetBinError(4,6.067078);
   hNCinFV_stack_11->SetBinError(5,6.431115);
   hNCinFV_stack_11->SetBinError(6,4.935287);
   hNCinFV_stack_11->SetBinError(7,4.435668);
   hNCinFV_stack_11->SetBinError(8,2.301832);
   hNCinFV_stack_11->SetBinError(9,1.403703);
   hNCinFV_stack_11->SetBinError(10,1.866733);
   hNCinFV_stack_11->SetBinError(11,2.21226);
   hNCinFV_stack_11->SetBinError(12,2.219449);
   hNCinFV_stack_11->SetBinError(13,4.302474);
   hNCinFV_stack_11->SetEntries(315);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,35.50914);
   hnumuCCinFV_stack_12->SetBinContent(2,91.14207);
   hnumuCCinFV_stack_12->SetBinContent(3,88.02223);
   hnumuCCinFV_stack_12->SetBinContent(4,46.49977);
   hnumuCCinFV_stack_12->SetBinContent(5,52.67485);
   hnumuCCinFV_stack_12->SetBinContent(6,22.45333);
   hnumuCCinFV_stack_12->SetBinContent(7,21.66153);
   hnumuCCinFV_stack_12->SetBinContent(8,13.66286);
   hnumuCCinFV_stack_12->SetBinContent(9,4.527863);
   hnumuCCinFV_stack_12->SetBinContent(10,5.079947);
   hnumuCCinFV_stack_12->SetBinContent(11,8.246967);
   hnumuCCinFV_stack_12->SetBinContent(12,2.311716);
   hnumuCCinFV_stack_12->SetBinContent(13,44.2542);
   hnumuCCinFV_stack_12->SetBinError(1,7.428995);
   hnumuCCinFV_stack_12->SetBinError(2,11.36376);
   hnumuCCinFV_stack_12->SetBinError(3,12.39412);
   hnumuCCinFV_stack_12->SetBinError(4,7.119221);
   hnumuCCinFV_stack_12->SetBinError(5,9.792704);
   hnumuCCinFV_stack_12->SetBinError(6,4.863723);
   hnumuCCinFV_stack_12->SetBinError(7,7.796157);
   hnumuCCinFV_stack_12->SetBinError(8,4.005063);
   hnumuCCinFV_stack_12->SetBinError(9,2.281229);
   hnumuCCinFV_stack_12->SetBinError(10,2.597632);
   hnumuCCinFV_stack_12->SetBinError(11,3.149336);
   hnumuCCinFV_stack_12->SetBinError(12,1.650861);
   hnumuCCinFV_stack_12->SetBinError(13,8.289001);
   hnumuCCinFV_stack_12->SetEntries(381);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,3.258555);
   hnueCCinFV_stack_13->SetBinContent(4,3.970271);
   hnueCCinFV_stack_13->SetBinContent(5,1.770869);
   hnueCCinFV_stack_13->SetBinContent(7,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,5.157044);
   hnueCCinFV_stack_13->SetBinError(3,1.895252);
   hnueCCinFV_stack_13->SetBinError(4,1.985136);
   hnueCCinFV_stack_13->SetBinError(5,1.261326);
   hnueCCinFV_stack_13->SetBinError(7,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,2.312832);
   hnueCCinFV_stack_13->SetEntries(15);

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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__14->SetBinContent(1,305.387);
   hmcerror__14->SetBinContent(2,813.9944);
   hmcerror__14->SetBinContent(3,655.1964);
   hmcerror__14->SetBinContent(4,413.8232);
   hmcerror__14->SetBinContent(5,300.4662);
   hmcerror__14->SetBinContent(6,191.7534);
   hmcerror__14->SetBinContent(7,107.9828);
   hmcerror__14->SetBinContent(8,63.88163);
   hmcerror__14->SetBinContent(9,52.80311);
   hmcerror__14->SetBinContent(10,37.51685);
   hmcerror__14->SetBinContent(11,34.37037);
   hmcerror__14->SetBinContent(12,31.96525);
   hmcerror__14->SetBinContent(13,189.8356);
   hmcerror__14->SetBinError(1,116.7906);
   hmcerror__14->SetBinError(2,374.0902);
   hmcerror__14->SetBinError(3,284.4428);
   hmcerror__14->SetBinError(4,168.4865);
   hmcerror__14->SetBinError(5,112.9105);
   hmcerror__14->SetBinError(6,64.6917);
   hmcerror__14->SetBinError(7,40.40275);
   hmcerror__14->SetBinError(8,24.70709);
   hmcerror__14->SetBinError(9,20.32239);
   hmcerror__14->SetBinError(10,18.28031);
   hmcerror__14->SetBinError(11,19.32663);
   hmcerror__14->SetBinError(12,15.2918);
   hmcerror__14->SetBinError(13,57.97117);
   hmcerror__14->SetEntries(3699.717);

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
   435,
   1046,
   935,
   723,
   399,
   265,
   150,
   85,
   49,
   47,
   26,
   22};
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
   20.85665,
   32.34192,
   30.57777,
   26.88866,
   19.97498,
   16.27882,
   12.24745,
   9.3428,
   7.1318,
   6.9882,
   5.2453,
   4.8417};
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
   20.85665,
   32.34192,
   30.57777,
   26.88866,
   19.97498,
   16.27882,
   12.24745,
   9.1411,
   6.9277,
   6.7839,
   5.0358,
   4.6299};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1320);
   Graph_Graph3017->SetMinimum(15.44247);
   Graph_Graph3017->SetMaximum(1184.46);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.39#pm0.52","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 7.24e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.9/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4182.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 68.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 228.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1105.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  273.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 612.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 296.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 391.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_4_pi0_momentum_all");
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
   0.3824347,
   0.4595734,
   0.4341336,
   0.407146,
   0.3757842,
   0.3373692,
   0.3741592,
   0.3867636,
   0.3848712,
   0.4872561,
   0.562305,
   0.4783882};
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
   0.3824347,
   0.4595734,
   0.4341336,
   0.407146,
   0.3757842,
   0.3373692,
   0.3741592,
   0.3867636,
   0.3848712,
   0.4872561,
   0.562305,
   0.4783882};
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
   0.3606514,
   0.4449732,
   0.4163183,
   0.3927691,
   0.3473763,
   0.3046923,
   0.2550123,
   0.2432268,
   0.2905557,
   0.2943186,
   0.2681017,
   0.2780034};
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
   0.3606514,
   0.4449732,
   0.4163183,
   0.3927691,
   0.3473763,
   0.3046923,
   0.2550123,
   0.2432268,
   0.2905557,
   0.2943186,
   0.2681017,
   0.2780034};
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
   1.424422,
   1.285021,
   1.427053,
   1.747123,
   1.327936,
   1.381983,
   1.38911,
   1.330586,
   0.9279757,
   1.252771,
   0.7564656,
   0.6882473};
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
   0.06829582,
   0.03973236,
   0.04666963,
   0.0649762,
   0.06647997,
   0.08489454,
   0.1134204,
   0.1462517,
   0.135064,
   0.1862683,
   0.1526111,
   0.1514676};
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
   0.06829582,
   0.03973236,
   0.04666963,
   0.0649762,
   0.06647997,
   0.08489454,
   0.1134204,
   0.1430943,
   0.1311987,
   0.1808228,
   0.1465158,
   0.1448416};
   grae = new TGraphAsymmErrors(12,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1320);
   Graph_Graph3020->SetMinimum(0.4092478);
   Graph_Graph3020->SetMaximum(1.939631);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_4_pi0_momentum_all",12,0,1200);

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
