#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Jun  2 17:40:32 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-230.7692,-12.56,1692.308,1388.872);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hmc__1->SetBinContent(2,10.25918);
   hmc__1->SetBinContent(3,256.7806);
   hmc__1->SetBinContent(4,499.1584);
   hmc__1->SetBinContent(5,485.6395);
   hmc__1->SetBinContent(6,419.0242);
   hmc__1->SetBinContent(7,335.0871);
   hmc__1->SetBinContent(8,241.8687);
   hmc__1->SetBinContent(9,183.3543);
   hmc__1->SetBinContent(10,134.3288);
   hmc__1->SetBinContent(11,89.71561);
   hmc__1->SetBinContent(12,59.17334);
   hmc__1->SetBinContent(13,40.37137);
   hmc__1->SetBinContent(14,30.93911);
   hmc__1->SetBinContent(15,20.16838);
   hmc__1->SetBinContent(16,13.98046);
   hmc__1->SetBinContent(17,14.21587);
   hmc__1->SetBinContent(18,9.140317);
   hmc__1->SetBinContent(19,6.414167);
   hmc__1->SetBinContent(20,6.586421);
   hmc__1->SetBinContent(21,22.1716);
   hmc__1->SetBinError(1,0.3895343);
   hmc__1->SetBinError(2,3.960811);
   hmc__1->SetBinError(3,56.78415);
   hmc__1->SetBinError(4,114.5058);
   hmc__1->SetBinError(5,107.6054);
   hmc__1->SetBinError(6,91.37471);
   hmc__1->SetBinError(7,70.62314);
   hmc__1->SetBinError(8,53.6141);
   hmc__1->SetBinError(9,41.84684);
   hmc__1->SetBinError(10,29.32828);
   hmc__1->SetBinError(11,23.13908);
   hmc__1->SetBinError(12,15.8233);
   hmc__1->SetBinError(13,11.58115);
   hmc__1->SetBinError(14,13.0285);
   hmc__1->SetBinError(15,7.549029);
   hmc__1->SetBinError(16,5.818934);
   hmc__1->SetBinError(17,5.696845);
   hmc__1->SetBinError(18,5.155772);
   hmc__1->SetBinError(19,4.313745);
   hmc__1->SetBinError(20,4.906057);
   hmc__1->SetBinError(21,7.401506);
   hmc__1->SetMinimum(-12.56);
   hmc__1->SetMaximum(1318.8);
   hmc__1->SetEntries(2848.296);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1500);
   hs1_stack_1->SetMinimum(-9.474605e-09);
   hs1_stack_1->SetMaximum(524.1163);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,7.907143);
   hbadmatch_stack_1->SetBinContent(4,17.52269);
   hbadmatch_stack_1->SetBinContent(5,7.778605);
   hbadmatch_stack_1->SetBinContent(6,7.262337);
   hbadmatch_stack_1->SetBinContent(7,6.609007);
   hbadmatch_stack_1->SetBinContent(8,5.518079);
   hbadmatch_stack_1->SetBinContent(9,2.534241);
   hbadmatch_stack_1->SetBinContent(10,2.541003);
   hbadmatch_stack_1->SetBinContent(11,4.055049);
   hbadmatch_stack_1->SetBinContent(12,0.9610817);
   hbadmatch_stack_1->SetBinContent(13,0.5850745);
   hbadmatch_stack_1->SetBinContent(14,0.7759535);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.3934307);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.467875);
   hbadmatch_stack_1->SetBinError(4,2.777336);
   hbadmatch_stack_1->SetBinError(5,1.499441);
   hbadmatch_stack_1->SetBinError(6,1.341195);
   hbadmatch_stack_1->SetBinError(7,1.264974);
   hbadmatch_stack_1->SetBinError(8,1.26547);
   hbadmatch_stack_1->SetBinError(9,0.8321153);
   hbadmatch_stack_1->SetBinError(10,0.8337055);
   hbadmatch_stack_1->SetBinError(11,1.871952);
   hbadmatch_stack_1->SetBinError(12,0.4948321);
   hbadmatch_stack_1->SetBinError(13,0.337793);
   hbadmatch_stack_1->SetBinError(14,0.4599648);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.2781975);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(2,0.15957);
   hext_stack_2->SetBinContent(3,8.394083);
   hext_stack_2->SetBinContent(4,10.74301);
   hext_stack_2->SetBinContent(5,6.010718);
   hext_stack_2->SetBinContent(6,5.004551);
   hext_stack_2->SetBinContent(7,2.829071);
   hext_stack_2->SetBinContent(8,1.328264);
   hext_stack_2->SetBinContent(9,0.3381872);
   hext_stack_2->SetBinContent(10,1.912233);
   hext_stack_2->SetBinContent(11,0.5461392);
   hext_stack_2->SetBinContent(12,0.1482583);
   hext_stack_2->SetBinContent(14,0.3937887);
   hext_stack_2->SetBinError(2,0.15957);
   hext_stack_2->SetBinError(3,1.617825);
   hext_stack_2->SetBinError(4,1.64009);
   hext_stack_2->SetBinError(5,1.263032);
   hext_stack_2->SetBinError(6,1.167271);
   hext_stack_2->SetBinError(7,0.9016543);
   hext_stack_2->SetBinError(8,0.5352159);
   hext_stack_2->SetBinError(9,0.3381872);
   hext_stack_2->SetBinError(10,1.196209);
   hext_stack_2->SetBinError(11,0.4307935);
   hext_stack_2->SetBinError(12,0.1482583);
   hext_stack_2->SetBinError(14,0.3937887);
   hext_stack_2->SetEntries(156);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(2,1.861411);
   hdirt_stack_3->SetBinContent(3,59.4548);
   hdirt_stack_3->SetBinContent(4,63.35757);
   hdirt_stack_3->SetBinContent(5,53.05856);
   hdirt_stack_3->SetBinContent(6,33.78463);
   hdirt_stack_3->SetBinContent(7,24.83227);
   hdirt_stack_3->SetBinContent(8,12.54385);
   hdirt_stack_3->SetBinContent(9,8.402838);
   hdirt_stack_3->SetBinContent(10,6.407382);
   hdirt_stack_3->SetBinContent(11,1.868591);
   hdirt_stack_3->SetBinContent(12,1.868591);
   hdirt_stack_3->SetBinContent(13,3.704052);
   hdirt_stack_3->SetBinContent(14,0.8131978);
   hdirt_stack_3->SetBinContent(15,0.6416141);
   hdirt_stack_3->SetBinContent(16,1.055394);
   hdirt_stack_3->SetBinContent(17,3.939067);
   hdirt_stack_3->SetBinContent(20,0.4065989);
   hdirt_stack_3->SetBinContent(21,0.3243973);
   hdirt_stack_3->SetBinError(2,0.9526997);
   hdirt_stack_3->SetBinError(3,5.388183);
   hdirt_stack_3->SetBinError(4,5.331734);
   hdirt_stack_3->SetBinError(5,4.882702);
   hdirt_stack_3->SetBinError(6,3.816913);
   hdirt_stack_3->SetBinError(7,3.336605);
   hdirt_stack_3->SetBinError(8,2.4066);
   hdirt_stack_3->SetBinError(9,1.969062);
   hdirt_stack_3->SetBinError(10,1.5862);
   hdirt_stack_3->SetBinError(11,0.840497);
   hdirt_stack_3->SetBinError(12,0.840497);
   hdirt_stack_3->SetBinError(13,1.443106);
   hdirt_stack_3->SetBinError(14,0.5750177);
   hdirt_stack_3->SetBinError(15,0.6416141);
   hdirt_stack_3->SetBinError(16,0.6130171);
   hdirt_stack_3->SetBinError(17,1.526073);
   hdirt_stack_3->SetBinError(20,0.4065989);
   hdirt_stack_3->SetBinError(21,0.3243973);
   hdirt_stack_3->SetEntries(657);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,3.172568);
   houtFV_stack_4->SetBinContent(3,41.45757);
   houtFV_stack_4->SetBinContent(4,74.66063);
   houtFV_stack_4->SetBinContent(5,61.28139);
   houtFV_stack_4->SetBinContent(6,34.5788);
   houtFV_stack_4->SetBinContent(7,28.20215);
   houtFV_stack_4->SetBinContent(8,19.42791);
   houtFV_stack_4->SetBinContent(9,14.42202);
   houtFV_stack_4->SetBinContent(10,7.281386);
   houtFV_stack_4->SetBinContent(11,6.853713);
   houtFV_stack_4->SetBinContent(12,3.269539);
   houtFV_stack_4->SetBinContent(13,2.218886);
   houtFV_stack_4->SetBinContent(14,2.00411);
   houtFV_stack_4->SetBinContent(15,0.3917402);
   houtFV_stack_4->SetBinContent(16,0.7319179);
   houtFV_stack_4->SetBinContent(17,0.7319179);
   houtFV_stack_4->SetBinContent(18,0.536893);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.536893);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(2,0.8764662);
   houtFV_stack_4->SetBinError(3,3.162378);
   houtFV_stack_4->SetBinError(4,4.324253);
   houtFV_stack_4->SetBinError(5,3.905648);
   houtFV_stack_4->SetBinError(6,2.934728);
   houtFV_stack_4->SetBinError(7,2.681389);
   houtFV_stack_4->SetBinError(8,2.2238);
   houtFV_stack_4->SetBinError(9,1.916653);
   houtFV_stack_4->SetBinError(10,1.353586);
   houtFV_stack_4->SetBinError(11,1.34261);
   houtFV_stack_4->SetBinError(12,0.9413781);
   houtFV_stack_4->SetBinError(13,0.7660566);
   houtFV_stack_4->SetBinError(14,0.7352871);
   houtFV_stack_4->SetBinError(15,0.2770047);
   houtFV_stack_4->SetBinError(16,0.438694);
   houtFV_stack_4->SetBinError(17,0.438694);
   houtFV_stack_4->SetBinError(18,0.3929602);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.3929602);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.969202);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.47558);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,14.15166);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,14.22208);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,15.30987);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,8.925216);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.610836);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.111526);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.682657);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.771326);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.504944);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6410357);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7807039);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5544478);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.105967);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.190537);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.21577);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.369862);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.9964662);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8699558);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5386023);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7096311);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4479997);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3847468);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1771895);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2608584);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.800058);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.421908);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.407458);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4698386);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3635961);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3252697);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.023258);
   hNCpi0inFVres_stack_7->SetBinContent(3,87.71677);
   hNCpi0inFVres_stack_7->SetBinContent(4,223.9638);
   hNCpi0inFVres_stack_7->SetBinContent(5,236.1496);
   hNCpi0inFVres_stack_7->SetBinContent(6,195.7004);
   hNCpi0inFVres_stack_7->SetBinContent(7,139.8043);
   hNCpi0inFVres_stack_7->SetBinContent(8,98.65823);
   hNCpi0inFVres_stack_7->SetBinContent(9,65.86552);
   hNCpi0inFVres_stack_7->SetBinContent(10,39.43781);
   hNCpi0inFVres_stack_7->SetBinContent(11,24.29335);
   hNCpi0inFVres_stack_7->SetBinContent(12,17.65681);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.612402);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.758218);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.1856);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.288312);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.812676);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.407626);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.6139679);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.585404);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.367108);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4764196);
   hNCpi0inFVres_stack_7->SetBinError(3,3.01117);
   hNCpi0inFVres_stack_7->SetBinError(4,4.854923);
   hNCpi0inFVres_stack_7->SetBinError(5,5.036983);
   hNCpi0inFVres_stack_7->SetBinError(6,4.574606);
   hNCpi0inFVres_stack_7->SetBinError(7,3.886931);
   hNCpi0inFVres_stack_7->SetBinError(8,3.225476);
   hNCpi0inFVres_stack_7->SetBinError(9,2.649642);
   hNCpi0inFVres_stack_7->SetBinError(10,2.045014);
   hNCpi0inFVres_stack_7->SetBinError(11,1.579632);
   hNCpi0inFVres_stack_7->SetBinError(12,1.470885);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8133445);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7888504);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7399703);
   hNCpi0inFVres_stack_7->SetBinError(16,0.553746);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4193552);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3722355);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2233471);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2501964);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4273996);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(3,18.29367);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.55693);
   hNCpi0inFVdis_stack_8->SetBinContent(5,30.70241);
   hNCpi0inFVdis_stack_8->SetBinContent(6,32.54332);
   hNCpi0inFVdis_stack_8->SetBinContent(7,24.72231);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.28487);
   hNCpi0inFVdis_stack_8->SetBinContent(9,18.99567);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.27364);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.31839);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.754081);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.444165);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.52413);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.091012);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.714526);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6139679);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9627222);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.198876);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4457358);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.063607);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.397869);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.744732);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.80825);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.874013);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.571542);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.443574);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.461283);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.157524);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.051238);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9730154);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5542135);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5176605);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4439995);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3835646);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2233471);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3631504);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3984141);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1610816);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3874346);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3206861);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2201295);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinContent(3,6.206746);
   hCCpi0inFV_stack_11->SetBinContent(4,18.62193);
   hCCpi0inFV_stack_11->SetBinContent(5,33.72367);
   hCCpi0inFV_stack_11->SetBinContent(6,52.81936);
   hCCpi0inFV_stack_11->SetBinContent(7,61.14049);
   hCCpi0inFV_stack_11->SetBinContent(8,50.36576);
   hCCpi0inFV_stack_11->SetBinContent(9,46.34763);
   hCCpi0inFV_stack_11->SetBinContent(10,41.87853);
   hCCpi0inFV_stack_11->SetBinContent(11,25.74392);
   hCCpi0inFV_stack_11->SetBinContent(12,19.19469);
   hCCpi0inFV_stack_11->SetBinContent(13,13.4845);
   hCCpi0inFV_stack_11->SetBinContent(14,13.09107);
   hCCpi0inFV_stack_11->SetBinContent(15,8.389925);
   hCCpi0inFV_stack_11->SetBinContent(16,6.276709);
   hCCpi0inFV_stack_11->SetBinContent(17,5.87164);
   hCCpi0inFV_stack_11->SetBinContent(18,5.070172);
   hCCpi0inFV_stack_11->SetBinContent(19,2.979234);
   hCCpi0inFV_stack_11->SetBinContent(20,2.837462);
   hCCpi0inFV_stack_11->SetBinContent(21,9.613594);
   hCCpi0inFV_stack_11->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinError(3,1.208863);
   hCCpi0inFV_stack_11->SetBinError(4,2.09397);
   hCCpi0inFV_stack_11->SetBinError(5,2.86498);
   hCCpi0inFV_stack_11->SetBinError(6,3.557672);
   hCCpi0inFV_stack_11->SetBinError(7,3.911423);
   hCCpi0inFV_stack_11->SetBinError(8,3.539879);
   hCCpi0inFV_stack_11->SetBinError(9,3.42502);
   hCCpi0inFV_stack_11->SetBinError(10,3.286469);
   hCCpi0inFV_stack_11->SetBinError(11,2.582078);
   hCCpi0inFV_stack_11->SetBinError(12,2.211508);
   hCCpi0inFV_stack_11->SetBinError(13,1.851712);
   hCCpi0inFV_stack_11->SetBinError(14,1.830694);
   hCCpi0inFV_stack_11->SetBinError(15,1.468283);
   hCCpi0inFV_stack_11->SetBinError(16,1.221738);
   hCCpi0inFV_stack_11->SetBinError(17,1.160868);
   hCCpi0inFV_stack_11->SetBinError(18,1.17707);
   hCCpi0inFV_stack_11->SetBinError(19,0.8548804);
   hCCpi0inFV_stack_11->SetBinError(20,0.8089864);
   hCCpi0inFV_stack_11->SetBinError(21,1.618809);
   hCCpi0inFV_stack_11->SetEntries(1821);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(2,0.3934307);
   hNCinFV_stack_12->SetBinContent(3,11.59197);
   hNCinFV_stack_12->SetBinContent(4,22.00801);
   hNCinFV_stack_12->SetBinContent(5,17.98252);
   hNCinFV_stack_12->SetBinContent(6,19.25579);
   hNCinFV_stack_12->SetBinContent(7,17.00232);
   hNCinFV_stack_12->SetBinContent(8,10.38428);
   hNCinFV_stack_12->SetBinContent(9,7.179097);
   hNCinFV_stack_12->SetBinContent(10,9.043126);
   hNCinFV_stack_12->SetBinContent(11,3.904486);
   hNCinFV_stack_12->SetBinContent(12,2.249007);
   hNCinFV_stack_12->SetBinContent(13,2.877799);
   hNCinFV_stack_12->SetBinContent(14,1.853885);
   hNCinFV_stack_12->SetBinContent(15,0.785171);
   hNCinFV_stack_12->SetBinContent(16,0.7319179);
   hNCinFV_stack_12->SetBinContent(17,0.5901461);
   hNCinFV_stack_12->SetBinContent(18,0.3934307);
   hNCinFV_stack_12->SetBinContent(19,0.7336084);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.9269427);
   hNCinFV_stack_12->SetBinError(2,0.2781975);
   hNCinFV_stack_12->SetBinError(3,1.677356);
   hNCinFV_stack_12->SetBinError(4,2.435682);
   hNCinFV_stack_12->SetBinError(5,2.122945);
   hNCinFV_stack_12->SetBinError(6,2.158038);
   hNCinFV_stack_12->SetBinError(7,2.077194);
   hNCinFV_stack_12->SetBinError(8,1.682111);
   hNCinFV_stack_12->SetBinError(9,1.359715);
   hNCinFV_stack_12->SetBinError(10,1.521109);
   hNCinFV_stack_12->SetBinError(11,0.9801252);
   hNCinFV_stack_12->SetBinError(12,0.7341869);
   hNCinFV_stack_12->SetBinError(13,0.8997006);
   hNCinFV_stack_12->SetBinError(14,0.6789509);
   hNCinFV_stack_12->SetBinError(15,0.3925882);
   hNCinFV_stack_12->SetBinError(16,0.438694);
   hNCinFV_stack_12->SetBinError(17,0.340721);
   hNCinFV_stack_12->SetBinError(18,0.2781975);
   hNCinFV_stack_12->SetBinError(19,0.4394482);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.4800908);
   hNCinFV_stack_12->SetEntries(550);

   ci = 1445;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_13->SetBinContent(3,9.78486);
   hnumuCCinFV_stack_13->SetBinContent(4,24.30074);
   hnumuCCinFV_stack_13->SetBinContent(5,19.82082);
   hnumuCCinFV_stack_13->SetBinContent(6,20.74673);
   hnumuCCinFV_stack_13->SetBinContent(7,12.58763);
   hnumuCCinFV_stack_13->SetBinContent(8,11.26734);
   hnumuCCinFV_stack_13->SetBinContent(9,10.55036);
   hnumuCCinFV_stack_13->SetBinContent(10,7.975109);
   hnumuCCinFV_stack_13->SetBinContent(11,6.339942);
   hnumuCCinFV_stack_13->SetBinContent(12,4.048688);
   hnumuCCinFV_stack_13->SetBinContent(13,3.353436);
   hnumuCCinFV_stack_13->SetBinContent(14,2.106397);
   hnumuCCinFV_stack_13->SetBinContent(15,1.073786);
   hnumuCCinFV_stack_13->SetBinContent(16,0.536893);
   hnumuCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(21,1.578831);
   hnumuCCinFV_stack_13->SetBinError(2,0.300021);
   hnumuCCinFV_stack_13->SetBinError(3,2.178704);
   hnumuCCinFV_stack_13->SetBinError(4,3.337213);
   hnumuCCinFV_stack_13->SetBinError(5,2.561244);
   hnumuCCinFV_stack_13->SetBinError(6,2.520522);
   hnumuCCinFV_stack_13->SetBinError(7,2.155358);
   hnumuCCinFV_stack_13->SetBinError(8,1.768981);
   hnumuCCinFV_stack_13->SetBinError(9,1.690858);
   hnumuCCinFV_stack_13->SetBinError(10,1.388153);
   hnumuCCinFV_stack_13->SetBinError(11,1.353257);
   hnumuCCinFV_stack_13->SetBinError(12,1.273471);
   hnumuCCinFV_stack_13->SetBinError(13,1.037667);
   hnumuCCinFV_stack_13->SetBinError(14,0.7348959);
   hnumuCCinFV_stack_13->SetBinError(15,0.5557297);
   hnumuCCinFV_stack_13->SetBinError(16,0.3929602);
   hnumuCCinFV_stack_13->SetBinError(17,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(18,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(20,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(21,0.6121123);
   hnumuCCinFV_stack_13->SetEntries(526);

   ci = 1446;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(3,2.36194);
   hnueCCinFV_stack_14->SetBinContent(4,2.119546);
   hnueCCinFV_stack_14->SetBinContent(5,3.236968);
   hnueCCinFV_stack_14->SetBinContent(6,1.642957);
   hnueCCinFV_stack_14->SetBinContent(7,1.308459);
   hnueCCinFV_stack_14->SetBinContent(8,2.704752);
   hnueCCinFV_stack_14->SetBinContent(9,1.745037);
   hnueCCinFV_stack_14->SetBinContent(10,1.160035);
   hnueCCinFV_stack_14->SetBinContent(11,1.997767);
   hnueCCinFV_stack_14->SetBinContent(13,1.391469);
   hnueCCinFV_stack_14->SetBinContent(14,0.949423);
   hnueCCinFV_stack_14->SetBinContent(15,0.8007563);
   hnueCCinFV_stack_14->SetBinContent(16,0.1969809);
   hnueCCinFV_stack_14->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(19,0.6097559);
   hnueCCinFV_stack_14->SetBinContent(20,0.610123);
   hnueCCinFV_stack_14->SetBinContent(21,4.926272);
   hnueCCinFV_stack_14->SetBinError(3,1.426612);
   hnueCCinFV_stack_14->SetBinError(4,0.8602195);
   hnueCCinFV_stack_14->SetBinError(5,1.024455);
   hnueCCinFV_stack_14->SetBinError(6,0.7077585);
   hnueCCinFV_stack_14->SetBinError(7,0.5399875);
   hnueCCinFV_stack_14->SetBinError(8,0.9256588);
   hnueCCinFV_stack_14->SetBinError(9,0.6891878);
   hnueCCinFV_stack_14->SetBinError(10,0.6866306);
   hnueCCinFV_stack_14->SetBinError(11,1.220846);
   hnueCCinFV_stack_14->SetBinError(13,0.6489534);
   hnueCCinFV_stack_14->SetBinError(14,0.4896539);
   hnueCCinFV_stack_14->SetBinError(15,0.4932626);
   hnueCCinFV_stack_14->SetBinError(16,0.1967155);
   hnueCCinFV_stack_14->SetBinError(18,0.1950249);
   hnueCCinFV_stack_14->SetBinError(19,0.3525088);
   hnueCCinFV_stack_14->SetBinError(20,0.4379395);
   hnueCCinFV_stack_14->SetBinError(21,1.955595);
   hnueCCinFV_stack_14->SetEntries(97);

   ci = 1447;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);
   hmcerror__2->SetBinContent(2,10.25918);
   hmcerror__2->SetBinContent(3,256.7806);
   hmcerror__2->SetBinContent(4,499.1584);
   hmcerror__2->SetBinContent(5,485.6395);
   hmcerror__2->SetBinContent(6,419.0242);
   hmcerror__2->SetBinContent(7,335.0871);
   hmcerror__2->SetBinContent(8,241.8687);
   hmcerror__2->SetBinContent(9,183.3543);
   hmcerror__2->SetBinContent(10,134.3288);
   hmcerror__2->SetBinContent(11,89.71561);
   hmcerror__2->SetBinContent(12,59.17334);
   hmcerror__2->SetBinContent(13,40.37137);
   hmcerror__2->SetBinContent(14,30.93911);
   hmcerror__2->SetBinContent(15,20.16838);
   hmcerror__2->SetBinContent(16,13.98046);
   hmcerror__2->SetBinContent(17,14.21587);
   hmcerror__2->SetBinContent(18,9.140317);
   hmcerror__2->SetBinContent(19,6.414167);
   hmcerror__2->SetBinContent(20,6.586421);
   hmcerror__2->SetBinContent(21,22.1716);
   hmcerror__2->SetBinError(1,0.3895343);
   hmcerror__2->SetBinError(2,3.960811);
   hmcerror__2->SetBinError(3,56.78415);
   hmcerror__2->SetBinError(4,114.5058);
   hmcerror__2->SetBinError(5,107.6054);
   hmcerror__2->SetBinError(6,91.37471);
   hmcerror__2->SetBinError(7,70.62314);
   hmcerror__2->SetBinError(8,53.6141);
   hmcerror__2->SetBinError(9,41.84684);
   hmcerror__2->SetBinError(10,29.32828);
   hmcerror__2->SetBinError(11,23.13908);
   hmcerror__2->SetBinError(12,15.8233);
   hmcerror__2->SetBinError(13,11.58115);
   hmcerror__2->SetBinError(14,13.0285);
   hmcerror__2->SetBinError(15,7.549029);
   hmcerror__2->SetBinError(16,5.818934);
   hmcerror__2->SetBinError(17,5.696845);
   hmcerror__2->SetBinError(18,5.155772);
   hmcerror__2->SetBinError(19,4.313745);
   hmcerror__2->SetBinError(20,4.906057);
   hmcerror__2->SetBinError(21,7.401506);
   hmcerror__2->SetEntries(2848.296);

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
   
   Double_t _fx3001[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3001[20] = {
   0,
   10,
   303,
   628,
   551,
   416,
   277,
   184,
   174,
   100,
   91,
   59,
   39,
   24,
   14,
   19,
   16,
   9,
   4,
   7};
   Double_t _felx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3001[20] = {
   0,
   3.34883,
   17.4069,
   25.05993,
   23.47339,
   20.39608,
   16.64332,
   13.56466,
   13.19091,
   10.1212,
   9.6617,
   7.8097,
   6.3813,
   5.0476,
   3.9102,
   4.5151,
   4.1628,
   3.19354,
   2.29683,
   2.85954};
   Double_t _fehx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3001[20] = {
   1.1478,
   3.1179,
   17.4069,
   25.05993,
   23.47339,
   20.39608,
   16.64332,
   13.56466,
   13.19091,
   9.92,
   9.46,
   7.6066,
   6.1757,
   4.837,
   3.6898,
   4.3011,
   3.9454,
   2.9582,
   1.98186,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(718.3659);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2925.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 65.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 37.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 278.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  86.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1156.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  219.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 414.4","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 129.3","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 135.6","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 23.0","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3002[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3002[20] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3002[20] = {
   0,
   0.3860749,
   0.2211387,
   0.2293977,
   0.2215746,
   0.2180655,
   0.2107606,
   0.2216661,
   0.2282294,
   0.2183319,
   0.2579158,
   0.2674059,
   0.2868653,
   0.4211013,
   0.3743003,
   0.4162189,
   0.4007383,
   0.5640693,
   0.6725338,
   0.7448744};
   Double_t _fehx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3002[20] = {
   0,
   0.3860749,
   0.2211387,
   0.2293977,
   0.2215746,
   0.2180655,
   0.2107606,
   0.2216661,
   0.2282294,
   0.2183319,
   0.2579158,
   0.2674059,
   0.2868653,
   0.4211013,
   0.3743003,
   0.4162189,
   0.4007383,
   0.5640693,
   0.6725338,
   0.7448744};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3003[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3003[20] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3003[20] = {
   0,
   0.2372493,
   0.161397,
   0.197475,
   0.2067764,
   0.203887,
   0.2062436,
   0.2090898,
   0.207708,
   0.2056181,
   0.2095476,
   0.2106934,
   0.217949,
   0.2420794,
   0.2312314,
   0.2353231,
   0.2294863,
   0.304464,
   0.326299,
   0.3237682};
   Double_t _fehx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3003[20] = {
   0,
   0.2372493,
   0.161397,
   0.197475,
   0.2067764,
   0.203887,
   0.2062436,
   0.2090898,
   0.207708,
   0.2056181,
   0.2095476,
   0.2106934,
   0.217949,
   0.2420794,
   0.2312314,
   0.2353231,
   0.2294863,
   0.304464,
   0.326299,
   0.3237682};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   
   Double_t _fx3004[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3004[20] = {
   10,
   0.974737,
   1.179996,
   1.258118,
   1.134587,
   0.9927828,
   0.8266507,
   0.7607432,
   0.9489823,
   0.7444418,
   1.014316,
   0.9970706,
   0.9660312,
   0.7757171,
   0.694156,
   1.359039,
   1.125503,
   0.9846486,
   0.6236195,
   1.062793};
   Double_t _felx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3004[20] = {
   0,
   0.3264229,
   0.06778897,
   0.05020436,
   0.04833501,
   0.04867518,
   0.04966863,
   0.05608273,
   0.07194216,
   0.07534644,
   0.1076925,
   0.13198,
   0.158065,
   0.1631462,
   0.1938778,
   0.3229578,
   0.2928276,
   0.3493905,
   0.358087,
   0.4341569};
   Double_t _fehx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3004[20] = {
   0,
   0.3039133,
   0.06778897,
   0.05020436,
   0.04833501,
   0.04867518,
   0.04966863,
   0.05608273,
   0.07194216,
   0.07384862,
   0.1054443,
   0.1285478,
   0.1529723,
   0.1563393,
   0.1829498,
   0.3076507,
   0.2775349,
   0.323643,
   0.3089816,
   0.3963503};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.2389793);
   Graph_Graph3004->SetMaximum(10.97345);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_12_corrected_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
