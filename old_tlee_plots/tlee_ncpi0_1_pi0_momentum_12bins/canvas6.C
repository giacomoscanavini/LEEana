#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Mon Jan  9 23:11:10 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-184.6154,-14.52,1353.846,1605.606);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__16->SetBinContent(1,360.638);
   hmc__16->SetBinContent(2,640.3081);
   hmc__16->SetBinContent(3,550.3451);
   hmc__16->SetBinContent(4,378.4862);
   hmc__16->SetBinContent(5,244.3712);
   hmc__16->SetBinContent(6,151.6927);
   hmc__16->SetBinContent(7,101.3503);
   hmc__16->SetBinContent(8,57.6567);
   hmc__16->SetBinContent(9,56.55064);
   hmc__16->SetBinContent(10,29.12831);
   hmc__16->SetBinContent(11,28.81054);
   hmc__16->SetBinContent(12,21.51641);
   hmc__16->SetBinContent(13,175.041);
   hmc__16->SetBinError(1,90.2159);
   hmc__16->SetBinError(2,150.26);
   hmc__16->SetBinError(3,130.1695);
   hmc__16->SetBinError(4,104.933);
   hmc__16->SetBinError(5,74.63412);
   hmc__16->SetBinError(6,42.72521);
   hmc__16->SetBinError(7,26.77686);
   hmc__16->SetBinError(8,17.24361);
   hmc__16->SetBinError(9,19.46051);
   hmc__16->SetBinError(10,11.4088);
   hmc__16->SetBinError(11,13.1794);
   hmc__16->SetBinError(12,10.40207);
   hmc__16->SetBinError(13,47.90889);
   hmc__16->SetMinimum(-14.52);
   hmc__16->SetMaximum(1524.6);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",12,0,1200);
   hs6_stack_6->SetMinimum(-1.396248e-08);
   hs6_stack_6->SetMaximum(672.3236);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.28837);
   hbadmatch_stack_1->SetBinContent(2,17.87423);
   hbadmatch_stack_1->SetBinContent(3,9.55912);
   hbadmatch_stack_1->SetBinContent(4,8.914136);
   hbadmatch_stack_1->SetBinContent(5,5.85278);
   hbadmatch_stack_1->SetBinContent(6,2.209957);
   hbadmatch_stack_1->SetBinContent(7,1.263784);
   hbadmatch_stack_1->SetBinContent(8,0.9963553);
   hbadmatch_stack_1->SetBinContent(9,1.540876);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,1.202034);
   hbadmatch_stack_1->SetBinContent(12,0.897447);
   hbadmatch_stack_1->SetBinContent(13,3.804892);
   hbadmatch_stack_1->SetBinError(1,1.807719);
   hbadmatch_stack_1->SetBinError(2,2.749626);
   hbadmatch_stack_1->SetBinError(3,1.550848);
   hbadmatch_stack_1->SetBinError(4,2.138053);
   hbadmatch_stack_1->SetBinError(5,1.216967);
   hbadmatch_stack_1->SetBinError(6,0.757838);
   hbadmatch_stack_1->SetBinError(7,0.6695651);
   hbadmatch_stack_1->SetBinError(8,0.5098831);
   hbadmatch_stack_1->SetBinError(9,0.6231436);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.6981565);
   hbadmatch_stack_1->SetBinError(12,0.497253);
   hbadmatch_stack_1->SetBinError(13,1.108148);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,46.6947);
   hext_stack_2->SetBinContent(2,73.65936);
   hext_stack_2->SetBinContent(3,38.73997);
   hext_stack_2->SetBinContent(4,19.2784);
   hext_stack_2->SetBinContent(5,25.66424);
   hext_stack_2->SetBinContent(6,14.46428);
   hext_stack_2->SetBinContent(7,12.64041);
   hext_stack_2->SetBinContent(8,4.367208);
   hext_stack_2->SetBinContent(9,11.04872);
   hext_stack_2->SetBinContent(10,2.028585);
   hext_stack_2->SetBinContent(11,4.830057);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,22.80526);
   hext_stack_2->SetBinError(1,4.767302);
   hext_stack_2->SetBinError(2,5.716438);
   hext_stack_2->SetBinError(3,4.000777);
   hext_stack_2->SetBinError(4,2.841947);
   hext_stack_2->SetBinError(5,3.346087);
   hext_stack_2->SetBinError(6,2.625187);
   hext_stack_2->SetBinError(7,2.334397);
   hext_stack_2->SetBinError(8,1.374998);
   hext_stack_2->SetBinError(9,2.433165);
   hext_stack_2->SetBinError(10,0.8315593);
   hext_stack_2->SetBinError(11,1.607642);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,3.499042);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,7.912873);
   hdirt_stack_3->SetBinContent(2,8.872778);
   hdirt_stack_3->SetBinContent(3,4.378151);
   hdirt_stack_3->SetBinContent(4,2.478073);
   hdirt_stack_3->SetBinContent(5,2.783446);
   hdirt_stack_3->SetBinContent(6,2.365996);
   hdirt_stack_3->SetBinContent(7,2.216944);
   hdirt_stack_3->SetBinContent(8,1.70538);
   hdirt_stack_3->SetBinContent(9,0.7819759);
   hdirt_stack_3->SetBinContent(10,0.6392631);
   hdirt_stack_3->SetBinContent(11,0.2524987);
   hdirt_stack_3->SetBinContent(12,0.9115412);
   hdirt_stack_3->SetBinContent(13,2.50895);
   hdirt_stack_3->SetBinError(1,1.452565);
   hdirt_stack_3->SetBinError(2,1.586968);
   hdirt_stack_3->SetBinError(3,1.03967);
   hdirt_stack_3->SetBinError(4,0.7540406);
   hdirt_stack_3->SetBinError(5,0.8464396);
   hdirt_stack_3->SetBinError(6,0.813463);
   hdirt_stack_3->SetBinError(7,0.8056712);
   hdirt_stack_3->SetBinError(8,1.173634);
   hdirt_stack_3->SetBinError(9,0.4844357);
   hdirt_stack_3->SetBinError(10,0.4709666);
   hdirt_stack_3->SetBinError(11,0.2524987);
   hdirt_stack_3->SetBinError(12,0.5597697);
   hdirt_stack_3->SetBinError(13,0.8841094);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,57.59617);
   houtFV_stack_4->SetBinContent(2,66.75156);
   houtFV_stack_4->SetBinContent(3,45.02347);
   houtFV_stack_4->SetBinContent(4,33.1009);
   houtFV_stack_4->SetBinContent(5,18.59826);
   houtFV_stack_4->SetBinContent(6,11.68503);
   houtFV_stack_4->SetBinContent(7,10.35121);
   houtFV_stack_4->SetBinContent(8,3.612324);
   houtFV_stack_4->SetBinContent(9,5.878917);
   houtFV_stack_4->SetBinContent(10,3.54418);
   houtFV_stack_4->SetBinContent(11,3.413599);
   houtFV_stack_4->SetBinContent(12,4.786865);
   houtFV_stack_4->SetBinContent(13,19.95976);
   houtFV_stack_4->SetBinError(1,3.807163);
   houtFV_stack_4->SetBinError(2,4.081357);
   houtFV_stack_4->SetBinError(3,3.307137);
   houtFV_stack_4->SetBinError(4,2.842506);
   houtFV_stack_4->SetBinError(5,2.160648);
   houtFV_stack_4->SetBinError(6,1.738031);
   houtFV_stack_4->SetBinError(7,1.571798);
   houtFV_stack_4->SetBinError(8,0.9346642);
   houtFV_stack_4->SetBinError(9,1.291125);
   houtFV_stack_4->SetBinError(10,1.014001);
   houtFV_stack_4->SetBinError(11,0.9466412);
   houtFV_stack_4->SetBinError(12,1.163572);
   houtFV_stack_4->SetBinError(13,2.291129);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.263491);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,12.55825);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,20.29921);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,18.8984);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.74111);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.527462);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.454529);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.963467);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.549003);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.286277);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.5810632);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.8926116);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.36661);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.97216);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.314284);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.653884);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.68663);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.203508);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8571738);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9506174);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6924311);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4518722);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4774122);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2017388);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2870691);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.045385);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7929484);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.494868);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.606823);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7392322);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2960107);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4226536);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3530845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1289414);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1380737);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.226621);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3953684);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4178006);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2187345);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1075637);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1835703);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2279063);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08125716);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06051453);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,105.3383);
   hNCpi0inFVres_stack_7->SetBinContent(2,237.3006);
   hNCpi0inFVres_stack_7->SetBinContent(3,243.3811);
   hNCpi0inFVres_stack_7->SetBinContent(4,166.2074);
   hNCpi0inFVres_stack_7->SetBinContent(5,87.00635);
   hNCpi0inFVres_stack_7->SetBinContent(6,51.30853);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.02377);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.14071);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.02466);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.529554);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.930282);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.405589);
   hNCpi0inFVres_stack_7->SetBinContent(13,52.20223);
   hNCpi0inFVres_stack_7->SetBinError(1,3.511738);
   hNCpi0inFVres_stack_7->SetBinError(2,5.260519);
   hNCpi0inFVres_stack_7->SetBinError(3,5.507629);
   hNCpi0inFVres_stack_7->SetBinError(4,4.467291);
   hNCpi0inFVres_stack_7->SetBinError(5,2.989986);
   hNCpi0inFVres_stack_7->SetBinError(6,2.284095);
   hNCpi0inFVres_stack_7->SetBinError(7,2.191209);
   hNCpi0inFVres_stack_7->SetBinError(8,1.525738);
   hNCpi0inFVres_stack_7->SetBinError(9,1.514689);
   hNCpi0inFVres_stack_7->SetBinError(10,1.028946);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9636523);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7495543);
   hNCpi0inFVres_stack_7->SetBinError(13,2.692122);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,24.04036);
   hNCpi0inFVdis_stack_8->SetBinContent(2,47.72779);
   hNCpi0inFVdis_stack_8->SetBinContent(3,33.99789);
   hNCpi0inFVdis_stack_8->SetBinContent(4,26.61648);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.06841);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.75583);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.956217);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.491282);
   hNCpi0inFVdis_stack_8->SetBinContent(9,4.447247);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.479335);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.26984);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.972454);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.93906);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.724237);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.410275);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.998031);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.705686);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.37484);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.337529);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.192922);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8382369);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.872692);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5137978);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5499826);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5251222);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.312741);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.0949616);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1695417);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06734299);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1352493);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,49.5607);
   hCCpi0inFV_stack_10->SetBinContent(2,82.83293);
   hCCpi0inFV_stack_10->SetBinContent(3,83.01487);
   hCCpi0inFV_stack_10->SetBinContent(4,57.0616);
   hCCpi0inFV_stack_10->SetBinContent(5,35.32289);
   hCCpi0inFV_stack_10->SetBinContent(6,25.67146);
   hCCpi0inFV_stack_10->SetBinContent(7,13.40106);
   hCCpi0inFV_stack_10->SetBinContent(8,8.567743);
   hCCpi0inFV_stack_10->SetBinContent(9,6.353589);
   hCCpi0inFV_stack_10->SetBinContent(10,3.821039);
   hCCpi0inFV_stack_10->SetBinContent(11,2.730956);
   hCCpi0inFV_stack_10->SetBinContent(12,2.642437);
   hCCpi0inFV_stack_10->SetBinContent(13,21.15551);
   hCCpi0inFV_stack_10->SetBinError(1,3.517843);
   hCCpi0inFV_stack_10->SetBinError(2,4.555911);
   hCCpi0inFV_stack_10->SetBinError(3,4.550582);
   hCCpi0inFV_stack_10->SetBinError(4,3.792865);
   hCCpi0inFV_stack_10->SetBinError(5,2.966408);
   hCCpi0inFV_stack_10->SetBinError(6,2.54942);
   hCCpi0inFV_stack_10->SetBinError(7,1.821026);
   hCCpi0inFV_stack_10->SetBinError(8,1.478965);
   hCCpi0inFV_stack_10->SetBinError(9,1.240845);
   hCCpi0inFV_stack_10->SetBinError(10,0.9208385);
   hCCpi0inFV_stack_10->SetBinError(11,0.8550514);
   hCCpi0inFV_stack_10->SetBinError(12,0.7851269);
   hCCpi0inFV_stack_10->SetBinError(13,2.266733);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,26.85921);
   hNCinFV_stack_11->SetBinContent(2,45.71649);
   hNCinFV_stack_11->SetBinContent(3,37.00648);
   hNCinFV_stack_11->SetBinContent(4,20.19168);
   hNCinFV_stack_11->SetBinContent(5,22.26622);
   hNCinFV_stack_11->SetBinContent(6,12.08029);
   hNCinFV_stack_11->SetBinContent(7,5.849973);
   hNCinFV_stack_11->SetBinContent(8,5.550777);
   hNCinFV_stack_11->SetBinContent(9,4.316949);
   hNCinFV_stack_11->SetBinContent(10,3.434045);
   hNCinFV_stack_11->SetBinContent(11,2.002419);
   hNCinFV_stack_11->SetBinContent(12,0.7155161);
   hNCinFV_stack_11->SetBinContent(13,11.40676);
   hNCinFV_stack_11->SetBinError(1,2.653181);
   hNCinFV_stack_11->SetBinError(2,3.592181);
   hNCinFV_stack_11->SetBinError(3,3.2241);
   hNCinFV_stack_11->SetBinError(4,2.3273);
   hNCinFV_stack_11->SetBinError(5,2.853456);
   hNCinFV_stack_11->SetBinError(6,1.725101);
   hNCinFV_stack_11->SetBinError(7,1.200552);
   hNCinFV_stack_11->SetBinError(8,1.137983);
   hNCinFV_stack_11->SetBinError(9,1.087384);
   hNCinFV_stack_11->SetBinError(10,0.9613458);
   hNCinFV_stack_11->SetBinError(11,0.7348366);
   hNCinFV_stack_11->SetBinError(12,0.362413);
   hNCinFV_stack_11->SetBinError(13,1.781243);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,19.44704);
   hnumuCCinFV_stack_12->SetBinContent(2,42.73121);
   hnumuCCinFV_stack_12->SetBinContent(3,30.58482);
   hnumuCCinFV_stack_12->SetBinContent(4,22.42616);
   hnumuCCinFV_stack_12->SetBinContent(5,16.20075);
   hnumuCCinFV_stack_12->SetBinContent(6,10.42023);
   hnumuCCinFV_stack_12->SetBinContent(7,4.996645);
   hnumuCCinFV_stack_12->SetBinContent(8,3.618068);
   hnumuCCinFV_stack_12->SetBinContent(9,3.413682);
   hnumuCCinFV_stack_12->SetBinContent(10,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(11,1.470498);
   hnumuCCinFV_stack_12->SetBinContent(12,0.993323);
   hnumuCCinFV_stack_12->SetBinContent(13,11.19936);
   hnumuCCinFV_stack_12->SetBinError(1,2.296514);
   hnumuCCinFV_stack_12->SetBinError(2,3.715386);
   hnumuCCinFV_stack_12->SetBinError(3,3.471282);
   hnumuCCinFV_stack_12->SetBinError(4,2.585809);
   hnumuCCinFV_stack_12->SetBinError(5,2.345818);
   hnumuCCinFV_stack_12->SetBinError(6,1.697856);
   hnumuCCinFV_stack_12->SetBinError(7,1.242894);
   hnumuCCinFV_stack_12->SetBinError(8,1.031313);
   hnumuCCinFV_stack_12->SetBinError(9,1.608044);
   hnumuCCinFV_stack_12->SetBinError(10,0.588146);
   hnumuCCinFV_stack_12->SetBinError(11,0.6209604);
   hnumuCCinFV_stack_12->SetBinError(12,0.5085382);
   hnumuCCinFV_stack_12->SetBinError(13,1.771568);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,4.748883);
   hnueCCinFV_stack_13->SetBinContent(2,2.751027);
   hnueCCinFV_stack_13->SetBinContent(3,2.734507);
   hnueCCinFV_stack_13->SetBinContent(4,2.540789);
   hnueCCinFV_stack_13->SetBinContent(5,1.570749);
   hnueCCinFV_stack_13->SetBinContent(6,0.781035);
   hnueCCinFV_stack_13->SetBinContent(7,0.842703);
   hnueCCinFV_stack_13->SetBinContent(8,1.344896);
   hnueCCinFV_stack_13->SetBinContent(9,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,8.554512);
   hnueCCinFV_stack_13->SetBinError(1,1.527832);
   hnueCCinFV_stack_13->SetBinError(2,0.8686332);
   hnueCCinFV_stack_13->SetBinError(3,0.9628543);
   hnueCCinFV_stack_13->SetBinError(4,1.40261);
   hnueCCinFV_stack_13->SetBinError(5,0.6816847);
   hnueCCinFV_stack_13->SetBinError(6,0.4626237);
   hnueCCinFV_stack_13->SetBinError(7,0.4243469);
   hnueCCinFV_stack_13->SetBinError(8,0.6166702);
   hnueCCinFV_stack_13->SetBinError(9,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.3816983);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,2.278915);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__17->SetBinContent(1,360.638);
   hmcerror__17->SetBinContent(2,640.3081);
   hmcerror__17->SetBinContent(3,550.3451);
   hmcerror__17->SetBinContent(4,378.4862);
   hmcerror__17->SetBinContent(5,244.3712);
   hmcerror__17->SetBinContent(6,151.6927);
   hmcerror__17->SetBinContent(7,101.3503);
   hmcerror__17->SetBinContent(8,57.6567);
   hmcerror__17->SetBinContent(9,56.55064);
   hmcerror__17->SetBinContent(10,29.12831);
   hmcerror__17->SetBinContent(11,28.81054);
   hmcerror__17->SetBinContent(12,21.51641);
   hmcerror__17->SetBinContent(13,175.041);
   hmcerror__17->SetBinError(1,90.2159);
   hmcerror__17->SetBinError(2,150.26);
   hmcerror__17->SetBinError(3,130.1695);
   hmcerror__17->SetBinError(4,104.933);
   hmcerror__17->SetBinError(5,74.63412);
   hmcerror__17->SetBinError(6,42.72521);
   hmcerror__17->SetBinError(7,26.77686);
   hmcerror__17->SetBinError(8,17.24361);
   hmcerror__17->SetBinError(9,19.46051);
   hmcerror__17->SetBinError(10,11.4088);
   hmcerror__17->SetBinError(11,13.1794);
   hmcerror__17->SetBinError(12,10.40207);
   hmcerror__17->SetBinError(13,47.90889);
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
   Double_t _fy3021[12] = {
   403,
   726,
   596,
   377,
   218,
   170,
   87,
   71,
   54,
   28,
   14,
   16};
   Double_t _felx3021[12] = {
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
   Double_t _fely3021[12] = {
   20.07486,
   26.94439,
   24.41311,
   19.41649,
   14.76482,
   13.0384,
   9.4503,
   8.5518,
   7.4785,
   5.4358,
   3.9102,
   4.1628};
   Double_t _fehx3021[12] = {
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
   Double_t _fehy3021[12] = {
   20.07486,
   26.94439,
   24.41311,
   19.41649,
   14.76482,
   13.0384,
   9.2488,
   8.3496,
   7.275,
   5.2271,
   3.6898,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1320);
   Graph_Graph3021->SetMinimum(9.08082);
   Graph_Graph3021->SetMaximum(827.2298);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2760.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 60.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 255.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 35.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 264.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  5.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  985.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  191.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 371.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 186.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 157.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[12] = {
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
   Double_t _fely3022[12] = {
   0.2501564,
   0.2346682,
   0.2365234,
   0.277244,
   0.3054129,
   0.2816563,
   0.264201,
   0.2990738,
   0.3441253,
   0.3916738,
   0.4574505,
   0.4834481};
   Double_t _fehx3022[12] = {
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
   Double_t _fehy3022[12] = {
   0.2501564,
   0.2346682,
   0.2365234,
   0.277244,
   0.3054129,
   0.2816563,
   0.264201,
   0.2990738,
   0.3441253,
   0.3916738,
   0.4574505,
   0.4834481};
   grae = new TGraphAsymmErrors(12,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1320);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   Double_t _fely3023[12] = {
   0.1979496,
   0.2134458,
   0.2193779,
   0.2429449,
   0.253215,
   0.2386005,
   0.202851,
   0.2131184,
   0.1927727,
   0.2328162,
   0.2040104,
   0.2294468};
   Double_t _fehx3023[12] = {
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
   Double_t _fehy3023[12] = {
   0.1979496,
   0.2134458,
   0.2193779,
   0.2429449,
   0.253215,
   0.2386005,
   0.202851,
   0.2131184,
   0.1927727,
   0.2328162,
   0.2040104,
   0.2294468};
   grae = new TGraphAsymmErrors(12,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1320);
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
   Double_t _fy3024[12] = {
   1.117464,
   1.133829,
   1.082957,
   0.9960732,
   0.8920854,
   1.120686,
   0.8584086,
   1.231427,
   0.9548963,
   0.9612642,
   0.4859333,
   0.7436183};
   Double_t _felx3024[12] = {
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
   Double_t _fely3024[12] = {
   0.05566485,
   0.04208035,
   0.04435964,
   0.05130038,
   0.06041965,
   0.08595272,
   0.0932439,
   0.1483227,
   0.1322443,
   0.1866157,
   0.1357212,
   0.1934709};
   Double_t _fehx3024[12] = {
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
   Double_t _fehy3024[12] = {
   0.05566485,
   0.04208035,
   0.04435964,
   0.05130038,
   0.06041965,
   0.08595272,
   0.09125574,
   0.1448158,
   0.1286457,
   0.1794509,
   0.1280712,
   0.183367};
   grae = new TGraphAsymmErrors(12,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1320);
   Graph_Graph3024->SetMinimum(0.2476091);
   Graph_Graph3024->SetMaximum(1.478846);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
