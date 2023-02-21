#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Jan 13 22:53:50 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
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
   pad1->Range(-184.6154,-34.8,1353.846,3848.147);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__4->SetBinContent(1,578.3464);
   hmc__4->SetBinContent(2,1278.987);
   hmc__4->SetBinContent(3,1128.566);
   hmc__4->SetBinContent(4,736.2281);
   hmc__4->SetBinContent(5,493.5121);
   hmc__4->SetBinContent(6,309.8319);
   hmc__4->SetBinContent(7,167.1443);
   hmc__4->SetBinContent(8,107.4701);
   hmc__4->SetBinContent(9,99.68224);
   hmc__4->SetBinContent(10,60.81932);
   hmc__4->SetBinContent(11,54.25328);
   hmc__4->SetBinContent(12,53.17406);
   hmc__4->SetBinContent(13,326.2777);
   hmc__4->SetBinError(1,169.8547);
   hmc__4->SetBinError(2,432.393);
   hmc__4->SetBinError(3,346.5644);
   hmc__4->SetBinError(4,231.8425);
   hmc__4->SetBinError(5,163.5622);
   hmc__4->SetBinError(6,92.0036);
   hmc__4->SetBinError(7,44.62296);
   hmc__4->SetBinError(8,30.32428);
   hmc__4->SetBinError(9,34.17574);
   hmc__4->SetBinError(10,23.5625);
   hmc__4->SetBinError(11,25.97472);
   hmc__4->SetBinError(12,22.70235);
   hmc__4->SetBinError(13,87.18227);
   hmc__4->SetMinimum(-34.8);
   hmc__4->SetMaximum(3654);
   hmc__4->SetEntries(5979.682);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",12,0,1200);
   hs2_stack_2->SetMinimum(-1.103704e-08);
   hs2_stack_2->SetMaximum(1342.936);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,23.33737);
   hbadmatch_stack_1->SetBinContent(2,27.20712);
   hbadmatch_stack_1->SetBinContent(3,24.4817);
   hbadmatch_stack_1->SetBinContent(4,10.68004);
   hbadmatch_stack_1->SetBinContent(5,7.954227);
   hbadmatch_stack_1->SetBinContent(6,5.49489);
   hbadmatch_stack_1->SetBinContent(7,1.931378);
   hbadmatch_stack_1->SetBinContent(9,3.717874);
   hbadmatch_stack_1->SetBinContent(10,2.681269);
   hbadmatch_stack_1->SetBinContent(12,0.9925678);
   hbadmatch_stack_1->SetBinContent(13,5.779937);
   hbadmatch_stack_1->SetBinError(1,6.128838);
   hbadmatch_stack_1->SetBinError(2,7.419606);
   hbadmatch_stack_1->SetBinError(3,5.134794);
   hbadmatch_stack_1->SetBinError(4,3.257679);
   hbadmatch_stack_1->SetBinError(5,2.891815);
   hbadmatch_stack_1->SetBinError(6,2.465045);
   hbadmatch_stack_1->SetBinError(7,1.428549);
   hbadmatch_stack_1->SetBinError(9,1.894449);
   hbadmatch_stack_1->SetBinError(10,2.195248);
   hbadmatch_stack_1->SetBinError(12,0.9925678);
   hbadmatch_stack_1->SetBinError(13,2.648316);
   hbadmatch_stack_1->SetEntries(109);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,80.40517);
   houtFV_stack_4->SetBinContent(2,101.3592);
   houtFV_stack_4->SetBinContent(3,77.11372);
   houtFV_stack_4->SetBinContent(4,51.23452);
   houtFV_stack_4->SetBinContent(5,31.9988);
   houtFV_stack_4->SetBinContent(6,17.81156);
   houtFV_stack_4->SetBinContent(7,20.98161);
   houtFV_stack_4->SetBinContent(8,6.469967);
   houtFV_stack_4->SetBinContent(9,14.59066);
   houtFV_stack_4->SetBinContent(10,3.358794);
   houtFV_stack_4->SetBinContent(11,6.465111);
   houtFV_stack_4->SetBinContent(12,8.010194);
   houtFV_stack_4->SetBinContent(13,34.85833);
   houtFV_stack_4->SetBinError(1,9.091603);
   houtFV_stack_4->SetBinError(2,10.1001);
   houtFV_stack_4->SetBinError(3,8.701962);
   houtFV_stack_4->SetBinError(4,7.292221);
   houtFV_stack_4->SetBinError(5,5.592496);
   houtFV_stack_4->SetBinError(6,4.162586);
   houtFV_stack_4->SetBinError(7,4.515411);
   houtFV_stack_4->SetBinError(8,2.592813);
   houtFV_stack_4->SetBinError(9,4.264483);
   houtFV_stack_4->SetBinError(10,1.76091);
   houtFV_stack_4->SetBinError(11,2.68007);
   houtFV_stack_4->SetBinError(12,2.742799);
   houtFV_stack_4->SetBinError(13,5.911892);
   houtFV_stack_4->SetEntries(478);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.521408);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,18.40157);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,25.00121);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,24.82827);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,15.7754);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.110587);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.52105);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.22747);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.459949);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.569776);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.275681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.486424);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,10.38463);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.81134);
   hNCpi0inFVcoh_stack_5->SetBinError(2,3.43483);
   hNCpi0inFVcoh_stack_5->SetBinError(3,4.142734);
   hNCpi0inFVcoh_stack_5->SetBinError(4,4.043292);
   hNCpi0inFVcoh_stack_5->SetBinError(5,2.892951);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.4532);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.719777);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.558608);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.849283);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.636746);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7352715);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8939991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,2.660712);
   hNCpi0inFVcoh_stack_5->SetEntries(221);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.552335);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.480246);
   hNCpi0inFVqe_stack_6->SetBinContent(3,5.312227);
   hNCpi0inFVqe_stack_6->SetBinContent(4,3.564375);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6311531);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9905888);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2253178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2648315);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2588577);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3340047);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.8872746);
   hNCpi0inFVqe_stack_6->SetBinError(2,1.075907);
   hNCpi0inFVqe_stack_6->SetBinError(3,1.632505);
   hNCpi0inFVqe_stack_6->SetBinError(4,1.46226);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4464369);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.700452);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2253178);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2648314);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2588577);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3340047);
   hNCpi0inFVqe_stack_6->SetEntries(43);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,199.8304);
   hNCpi0inFVres_stack_7->SetBinContent(2,540.9198);
   hNCpi0inFVres_stack_7->SetBinContent(3,526.0499);
   hNCpi0inFVres_stack_7->SetBinContent(4,349.1061);
   hNCpi0inFVres_stack_7->SetBinContent(5,191.0507);
   hNCpi0inFVres_stack_7->SetBinContent(6,122.0709);
   hNCpi0inFVres_stack_7->SetBinContent(7,68.06265);
   hNCpi0inFVres_stack_7->SetBinContent(8,34.43803);
   hNCpi0inFVres_stack_7->SetBinContent(9,33.42969);
   hNCpi0inFVres_stack_7->SetBinContent(10,24.00864);
   hNCpi0inFVres_stack_7->SetBinContent(11,23.11222);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.1549);
   hNCpi0inFVres_stack_7->SetBinContent(13,102.2387);
   hNCpi0inFVres_stack_7->SetBinError(1,9.844643);
   hNCpi0inFVres_stack_7->SetBinError(2,15.66441);
   hNCpi0inFVres_stack_7->SetBinError(3,16.13573);
   hNCpi0inFVres_stack_7->SetBinError(4,12.74889);
   hNCpi0inFVres_stack_7->SetBinError(5,9.525967);
   hNCpi0inFVres_stack_7->SetBinError(6,8.075368);
   hNCpi0inFVres_stack_7->SetBinError(7,6.533849);
   hNCpi0inFVres_stack_7->SetBinError(8,4.618988);
   hNCpi0inFVres_stack_7->SetBinError(9,4.793866);
   hNCpi0inFVres_stack_7->SetBinError(10,3.697859);
   hNCpi0inFVres_stack_7->SetBinError(11,4.033724);
   hNCpi0inFVres_stack_7->SetBinError(12,2.569308);
   hNCpi0inFVres_stack_7->SetBinError(13,7.820046);
   hNCpi0inFVres_stack_7->SetEntries(5656);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,51.86774);
   hNCpi0inFVdis_stack_8->SetBinContent(2,127.9047);
   hNCpi0inFVdis_stack_8->SetBinContent(3,82.10258);
   hNCpi0inFVdis_stack_8->SetBinContent(4,65.0392);
   hNCpi0inFVdis_stack_8->SetBinContent(5,42.58564);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.8838);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.82312);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.09764);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.46522);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.716843);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.625525);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.942266);
   hNCpi0inFVdis_stack_8->SetBinContent(13,30.88843);
   hNCpi0inFVdis_stack_8->SetBinError(1,5.235489);
   hNCpi0inFVdis_stack_8->SetBinError(2,7.723107);
   hNCpi0inFVdis_stack_8->SetBinError(3,6.500671);
   hNCpi0inFVdis_stack_8->SetBinError(4,6.037399);
   hNCpi0inFVdis_stack_8->SetBinError(5,5.23409);
   hNCpi0inFVdis_stack_8->SetBinError(6,4.379054);
   hNCpi0inFVdis_stack_8->SetBinError(7,3.139116);
   hNCpi0inFVdis_stack_8->SetBinError(8,3.41756);
   hNCpi0inFVdis_stack_8->SetBinError(9,3.90386);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.128336);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.335278);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.29327);
   hNCpi0inFVdis_stack_8->SetBinError(13,4.767204);
   hNCpi0inFVdis_stack_8->SetEntries(1143);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.3236006);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.3340047);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.3236006);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3340047);
   hNCpi0inFVmec_stack_9->SetEntries(2);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,108.3516);
   hCCpi0inFV_stack_10->SetBinContent(2,248.563);
   hCCpi0inFV_stack_10->SetBinContent(3,184.0302);
   hCCpi0inFV_stack_10->SetBinContent(4,122.3288);
   hCCpi0inFV_stack_10->SetBinContent(5,88.60153);
   hCCpi0inFV_stack_10->SetBinContent(6,66.66861);
   hCCpi0inFV_stack_10->SetBinContent(7,18.85879);
   hCCpi0inFV_stack_10->SetBinContent(8,12.90338);
   hCCpi0inFV_stack_10->SetBinContent(9,15.88109);
   hCCpi0inFV_stack_10->SetBinContent(10,5.955407);
   hCCpi0inFV_stack_10->SetBinContent(11,8.163922);
   hCCpi0inFV_stack_10->SetBinContent(12,12.09834);
   hCCpi0inFV_stack_10->SetBinContent(13,51.84678);
   hCCpi0inFV_stack_10->SetBinError(1,10.37945);
   hCCpi0inFV_stack_10->SetBinError(2,15.76024);
   hCCpi0inFV_stack_10->SetBinError(3,13.53318);
   hCCpi0inFV_stack_10->SetBinError(4,11.03267);
   hCCpi0inFV_stack_10->SetBinError(5,9.395384);
   hCCpi0inFV_stack_10->SetBinError(6,8.146544);
   hCCpi0inFV_stack_10->SetBinError(7,4.326503);
   hCCpi0inFV_stack_10->SetBinError(8,3.578754);
   hCCpi0inFV_stack_10->SetBinError(9,3.970271);
   hCCpi0inFV_stack_10->SetBinError(10,2.431285);
   hCCpi0inFV_stack_10->SetBinError(11,2.893936);
   hCCpi0inFV_stack_10->SetBinError(12,3.497103);
   hCCpi0inFV_stack_10->SetBinError(13,7.193563);
   hCCpi0inFV_stack_10->SetEntries(949);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,67.27473);
   hNCinFV_stack_11->SetBinContent(2,113.3687);
   hNCinFV_stack_11->SetBinContent(3,100.5437);
   hNCinFV_stack_11->SetBinContent(4,54.81055);
   hNCinFV_stack_11->SetBinContent(5,47.52635);
   hNCinFV_stack_11->SetBinContent(6,34.02619);
   hNCinFV_stack_11->SetBinContent(7,17.75913);
   hNCinFV_stack_11->SetBinContent(8,10.75655);
   hNCinFV_stack_11->SetBinContent(9,5.632183);
   hNCinFV_stack_11->SetBinContent(10,6.220966);
   hNCinFV_stack_11->SetBinContent(11,5.348991);
   hNCinFV_stack_11->SetBinContent(12,7.603247);
   hNCinFV_stack_11->SetBinContent(13,33.16441);
   hNCinFV_stack_11->SetBinError(1,8.293423);
   hNCinFV_stack_11->SetBinError(2,11.27042);
   hNCinFV_stack_11->SetBinError(3,11.09026);
   hNCinFV_stack_11->SetBinError(4,8.13148);
   hNCinFV_stack_11->SetBinError(5,7.9728);
   hNCinFV_stack_11->SetBinError(6,6.332034);
   hNCinFV_stack_11->SetBinError(7,4.584355);
   hNCinFV_stack_11->SetBinError(8,3.362034);
   hNCinFV_stack_11->SetBinError(9,2.318184);
   hNCinFV_stack_11->SetBinError(10,2.395149);
   hNCinFV_stack_11->SetBinError(11,2.21226);
   hNCinFV_stack_11->SetBinError(12,2.706606);
   hNCinFV_stack_11->SetBinError(13,5.875655);
   hNCinFV_stack_11->SetEntries(504);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,35.43576);
   hnumuCCinFV_stack_12->SetBinContent(2,90.82299);
   hnumuCCinFV_stack_12->SetBinContent(3,101.9455);
   hnumuCCinFV_stack_12->SetBinContent(4,52.6511);
   hnumuCCinFV_stack_12->SetBinContent(5,65.40316);
   hnumuCCinFV_stack_12->SetBinContent(6,30.77469);
   hnumuCCinFV_stack_12->SetBinContent(7,15.99614);
   hnumuCCinFV_stack_12->SetBinContent(8,20.30278);
   hnumuCCinFV_stack_12->SetBinContent(9,6.512998);
   hnumuCCinFV_stack_12->SetBinContent(10,8.057651);
   hnumuCCinFV_stack_12->SetBinContent(11,6.261832);
   hnumuCCinFV_stack_12->SetBinContent(12,4.634691);
   hnumuCCinFV_stack_12->SetBinContent(13,42.75385);
   hnumuCCinFV_stack_12->SetBinError(1,6.152577);
   hnumuCCinFV_stack_12->SetBinError(2,12.27714);
   hnumuCCinFV_stack_12->SetBinError(3,13.90529);
   hnumuCCinFV_stack_12->SetBinError(4,7.484465);
   hnumuCCinFV_stack_12->SetBinError(5,10.4683);
   hnumuCCinFV_stack_12->SetBinError(6,5.760317);
   hnumuCCinFV_stack_12->SetBinError(7,7.405274);
   hnumuCCinFV_stack_12->SetBinError(8,5.411305);
   hnumuCCinFV_stack_12->SetBinError(9,2.678505);
   hnumuCCinFV_stack_12->SetBinError(10,3.115006);
   hnumuCCinFV_stack_12->SetBinError(11,2.819208);
   hnumuCCinFV_stack_12->SetBinError(12,2.328992);
   hnumuCCinFV_stack_12->SetBinError(13,8.082904);
   hnumuCCinFV_stack_12->SetEntries(427);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,3.446364);
   hnueCCinFV_stack_13->SetBinContent(2,6.625311);
   hnueCCinFV_stack_13->SetBinContent(3,1.985136);
   hnueCCinFV_stack_13->SetBinContent(4,1.985136);
   hnueCCinFV_stack_13->SetBinContent(5,1.985136);
   hnueCCinFV_stack_13->SetBinContent(7,1.985136);
   hnueCCinFV_stack_13->SetBinContent(8,2.27427);
   hnueCCinFV_stack_13->SetBinContent(9,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(10,1.985136);
   hnueCCinFV_stack_13->SetBinContent(12,0.9925678);
   hnueCCinFV_stack_13->SetBinContent(13,14.0286);
   hnueCCinFV_stack_13->SetBinError(1,1.992625);
   hnueCCinFV_stack_13->SetBinError(2,2.773043);
   hnueCCinFV_stack_13->SetBinError(3,1.403703);
   hnueCCinFV_stack_13->SetBinError(4,1.403703);
   hnueCCinFV_stack_13->SetBinError(5,1.403703);
   hnueCCinFV_stack_13->SetBinError(7,1.403703);
   hnueCCinFV_stack_13->SetBinError(8,1.621096);
   hnueCCinFV_stack_13->SetBinError(9,0.9925678);
   hnueCCinFV_stack_13->SetBinError(10,1.403703);
   hnueCCinFV_stack_13->SetBinError(12,0.9925678);
   hnueCCinFV_stack_13->SetBinError(13,7.936313);
   hnueCCinFV_stack_13->SetEntries(32);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__5->SetBinContent(1,578.3464);
   hmcerror__5->SetBinContent(2,1278.987);
   hmcerror__5->SetBinContent(3,1128.566);
   hmcerror__5->SetBinContent(4,736.2281);
   hmcerror__5->SetBinContent(5,493.5121);
   hmcerror__5->SetBinContent(6,309.8319);
   hmcerror__5->SetBinContent(7,167.1443);
   hmcerror__5->SetBinContent(8,107.4701);
   hmcerror__5->SetBinContent(9,99.68224);
   hmcerror__5->SetBinContent(10,60.81932);
   hmcerror__5->SetBinContent(11,54.25328);
   hmcerror__5->SetBinContent(12,53.17406);
   hmcerror__5->SetBinContent(13,326.2777);
   hmcerror__5->SetBinError(1,169.8547);
   hmcerror__5->SetBinError(2,432.393);
   hmcerror__5->SetBinError(3,346.5644);
   hmcerror__5->SetBinError(4,231.8425);
   hmcerror__5->SetBinError(5,163.5622);
   hmcerror__5->SetBinError(6,92.0036);
   hmcerror__5->SetBinError(7,44.62296);
   hmcerror__5->SetBinError(8,30.32428);
   hmcerror__5->SetBinError(9,34.17574);
   hmcerror__5->SetBinError(10,23.5625);
   hmcerror__5->SetBinError(11,25.97472);
   hmcerror__5->SetBinError(12,22.70235);
   hmcerror__5->SetBinError(13,87.18227);
   hmcerror__5->SetEntries(5979.682);

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
   
   Double_t _fx3005[12] = {
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
   Double_t _fy3005[12] = {
   876,
   1740,
   1652,
   1203,
   715,
   432,
   259,
   152,
   99,
   76,
   53,
   57};
   Double_t _felx3005[12] = {
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
   Double_t _fely3005[12] = {
   29.5973,
   41.71331,
   40.6448,
   34.68429,
   26.73948,
   20.78461,
   16.09348,
   12.32883,
   10.0712,
   8.8425,
   7.4105,
   7.679};
   Double_t _fehx3005[12] = {
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
   Double_t _fehy3005[12] = {
   29.5973,
   41.71331,
   40.6448,
   34.68429,
   26.73948,
   20.78461,
   16.09348,
   12.32883,
   9.87,
   8.6406,
   7.2068,
   7.4757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1320);
   Graph_Graph3005->SetMinimum(41.03055);
   Graph_Graph3005->SetMaximum(1955.326);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.44#pm0.42","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.9/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 7314.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 108.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 419.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  111.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2123.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  462.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 892.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 470.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 438.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 24.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[12] = {
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
   Double_t _fy3006[12] = {
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
   Double_t _felx3006[12] = {
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
   Double_t _fely3006[12] = {
   0.2936902,
   0.3380747,
   0.3070839,
   0.3149059,
   0.3314248,
   0.2969468,
   0.2669726,
   0.2821648,
   0.3428469,
   0.387418,
   0.4787677,
   0.426944};
   Double_t _fehx3006[12] = {
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
   Double_t _fehy3006[12] = {
   0.2936902,
   0.3380747,
   0.3070839,
   0.3149059,
   0.3314248,
   0.2969468,
   0.2669726,
   0.2821648,
   0.3428469,
   0.387418,
   0.4787677,
   0.426944};
   grae = new TGraphAsymmErrors(12,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1320);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3007[12] = {
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
   Double_t _fy3007[12] = {
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
   Double_t _felx3007[12] = {
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
   Double_t _fely3007[12] = {
   0.2732939,
   0.3357649,
   0.3021695,
   0.3081656,
   0.3141534,
   0.2784212,
   0.2392005,
   0.2317985,
   0.2516955,
   0.2660719,
   0.2501088,
   0.2542923};
   Double_t _fehx3007[12] = {
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
   Double_t _fehy3007[12] = {
   0.2732939,
   0.3357649,
   0.3021695,
   0.3081656,
   0.3141534,
   0.2784212,
   0.2392005,
   0.2317985,
   0.2516955,
   0.2660719,
   0.2501088,
   0.2542923};
   grae = new TGraphAsymmErrors(12,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1320);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[12] = {
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
   Double_t _fy3008[12] = {
   1.514663,
   1.360452,
   1.463805,
   1.634004,
   1.448799,
   1.394305,
   1.549559,
   1.414347,
   0.9931559,
   1.249603,
   0.9768994,
   1.071951};
   Double_t _felx3008[12] = {
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
   Double_t _fely3008[12] = {
   0.05117572,
   0.03261434,
   0.03601456,
   0.04711079,
   0.05418202,
   0.06708351,
   0.09628492,
   0.1147187,
   0.101033,
   0.1453897,
   0.1365908,
   0.1444125};
   Double_t _fehx3008[12] = {
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
   Double_t _fehy3008[12] = {
   0.05117572,
   0.03261434,
   0.03601456,
   0.04711079,
   0.05418202,
   0.06708351,
   0.09628492,
   0.1147187,
   0.09901463,
   0.14207,
   0.1328362,
   0.1405892};
   grae = new TGraphAsymmErrors(12,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1320);
   Graph_Graph3008->SetMinimum(0.756228);
   Graph_Graph3008->SetMaximum(1.765196);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_4_pi0_momentum_all",12,0,1200);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
