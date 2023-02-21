#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Mon Jan  9 21:29:47 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",112,135,1200,900);
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
   pad1->Range(-1.307692,-27.55052,1.25641,3046.508);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__1->SetBinContent(1,204.2078);
   hmc__1->SetBinContent(2,158.8767);
   hmc__1->SetBinContent(3,143.6391);
   hmc__1->SetBinContent(4,137.9553);
   hmc__1->SetBinContent(5,142.203);
   hmc__1->SetBinContent(6,151.7991);
   hmc__1->SetBinContent(7,128.7547);
   hmc__1->SetBinContent(8,150.5045);
   hmc__1->SetBinContent(9,170.4279);
   hmc__1->SetBinContent(10,190.2691);
   hmc__1->SetBinContent(11,206.5487);
   hmc__1->SetBinContent(12,233.7179);
   hmc__1->SetBinContent(13,258.038);
   hmc__1->SetBinContent(14,290.5665);
   hmc__1->SetBinContent(15,343.5071);
   hmc__1->SetBinContent(16,433.6568);
   hmc__1->SetBinContent(17,547.7328);
   hmc__1->SetBinContent(18,638.8719);
   hmc__1->SetBinContent(19,870.3019);
   hmc__1->SetBinContent(20,1377.526);
   hmc__1->SetBinError(1,54.85324);
   hmc__1->SetBinError(2,48.65007);
   hmc__1->SetBinError(3,42.95578);
   hmc__1->SetBinError(4,44.94875);
   hmc__1->SetBinError(5,45.22139);
   hmc__1->SetBinError(6,43.17928);
   hmc__1->SetBinError(7,41.80811);
   hmc__1->SetBinError(8,47.59261);
   hmc__1->SetBinError(9,54.11117);
   hmc__1->SetBinError(10,57.48214);
   hmc__1->SetBinError(11,63.91562);
   hmc__1->SetBinError(12,68.91657);
   hmc__1->SetBinError(13,75.50643);
   hmc__1->SetBinError(14,87.70964);
   hmc__1->SetBinError(15,102.4717);
   hmc__1->SetBinError(16,127.4245);
   hmc__1->SetBinError(17,151.3518);
   hmc__1->SetBinError(18,170.1107);
   hmc__1->SetBinError(19,214.5272);
   hmc__1->SetBinError(20,307.778);
   hmc__1->SetBinError(21,0.3895343);
   hmc__1->SetMinimum(-27.55052);
   hmc__1->SetMaximum(2892.805);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,-1,1);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(1446.402);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,7.87469);
   hbadmatch_stack_1->SetBinContent(2,4.365646);
   hbadmatch_stack_1->SetBinContent(3,4.929163);
   hbadmatch_stack_1->SetBinContent(4,3.552909);
   hbadmatch_stack_1->SetBinContent(5,3.675526);
   hbadmatch_stack_1->SetBinContent(6,5.800093);
   hbadmatch_stack_1->SetBinContent(7,1.985926);
   hbadmatch_stack_1->SetBinContent(8,5.231395);
   hbadmatch_stack_1->SetBinContent(9,7.267149);
   hbadmatch_stack_1->SetBinContent(10,4.329453);
   hbadmatch_stack_1->SetBinContent(11,9.515892);
   hbadmatch_stack_1->SetBinContent(12,12.10573);
   hbadmatch_stack_1->SetBinContent(13,7.088703);
   hbadmatch_stack_1->SetBinContent(14,8.287241);
   hbadmatch_stack_1->SetBinContent(15,6.281868);
   hbadmatch_stack_1->SetBinContent(16,10.99267);
   hbadmatch_stack_1->SetBinContent(17,12.86772);
   hbadmatch_stack_1->SetBinContent(18,16.39145);
   hbadmatch_stack_1->SetBinContent(19,13.72179);
   hbadmatch_stack_1->SetBinContent(20,27.19508);
   hbadmatch_stack_1->SetBinError(1,1.476368);
   hbadmatch_stack_1->SetBinError(2,1.860583);
   hbadmatch_stack_1->SetBinError(3,1.124886);
   hbadmatch_stack_1->SetBinError(4,0.8485109);
   hbadmatch_stack_1->SetBinError(5,1.015693);
   hbadmatch_stack_1->SetBinError(6,1.297169);
   hbadmatch_stack_1->SetBinError(7,0.6102074);
   hbadmatch_stack_1->SetBinError(8,1.213552);
   hbadmatch_stack_1->SetBinError(9,1.521751);
   hbadmatch_stack_1->SetBinError(10,1.040008);
   hbadmatch_stack_1->SetBinError(11,2.243144);
   hbadmatch_stack_1->SetBinError(12,2.618928);
   hbadmatch_stack_1->SetBinError(13,1.664901);
   hbadmatch_stack_1->SetBinError(14,1.679999);
   hbadmatch_stack_1->SetBinError(15,1.374648);
   hbadmatch_stack_1->SetBinError(16,1.739631);
   hbadmatch_stack_1->SetBinError(17,1.95994);
   hbadmatch_stack_1->SetBinError(18,2.168162);
   hbadmatch_stack_1->SetBinError(19,1.879745);
   hbadmatch_stack_1->SetBinError(20,3.013043);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,22.20837);
   hext_stack_2->SetBinContent(2,17.06387);
   hext_stack_2->SetBinContent(3,13.19982);
   hext_stack_2->SetBinContent(4,18.08613);
   hext_stack_2->SetBinContent(5,16.64568);
   hext_stack_2->SetBinContent(6,30.81586);
   hext_stack_2->SetBinContent(7,13.938);
   hext_stack_2->SetBinContent(8,24.62756);
   hext_stack_2->SetBinContent(9,30.67747);
   hext_stack_2->SetBinContent(10,36.41446);
   hext_stack_2->SetBinContent(11,32.44786);
   hext_stack_2->SetBinContent(12,36.26605);
   hext_stack_2->SetBinContent(13,39.31091);
   hext_stack_2->SetBinContent(14,43.2113);
   hext_stack_2->SetBinContent(15,45.55547);
   hext_stack_2->SetBinContent(16,52.18798);
   hext_stack_2->SetBinContent(17,59.26286);
   hext_stack_2->SetBinContent(18,52.83242);
   hext_stack_2->SetBinContent(19,75.82477);
   hext_stack_2->SetBinContent(20,93.7613);
   hext_stack_2->SetBinError(1,3.331046);
   hext_stack_2->SetBinError(2,2.805102);
   hext_stack_2->SetBinError(3,2.408524);
   hext_stack_2->SetBinError(4,2.985644);
   hext_stack_2->SetBinError(5,2.787356);
   hext_stack_2->SetBinError(6,3.943701);
   hext_stack_2->SetBinError(7,2.422879);
   hext_stack_2->SetBinError(8,3.447265);
   hext_stack_2->SetBinError(9,3.692385);
   hext_stack_2->SetBinError(10,4.227681);
   hext_stack_2->SetBinError(11,3.769749);
   hext_stack_2->SetBinError(12,4.221629);
   hext_stack_2->SetBinError(13,4.197872);
   hext_stack_2->SetBinError(14,4.614473);
   hext_stack_2->SetBinError(15,4.671171);
   hext_stack_2->SetBinError(16,4.877431);
   hext_stack_2->SetBinError(17,5.251568);
   hext_stack_2->SetBinError(18,4.747027);
   hext_stack_2->SetBinError(19,5.786741);
   hext_stack_2->SetBinError(20,6.669894);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,2.28857);
   hdirt_stack_3->SetBinContent(2,1.667938);
   hdirt_stack_3->SetBinContent(3,2.780338);
   hdirt_stack_3->SetBinContent(4,3.413966);
   hdirt_stack_3->SetBinContent(5,1.283134);
   hdirt_stack_3->SetBinContent(6,2.269204);
   hdirt_stack_3->SetBinContent(7,1.052121);
   hdirt_stack_3->SetBinContent(8,2.134555);
   hdirt_stack_3->SetBinContent(9,1.179927);
   hdirt_stack_3->SetBinContent(10,1.098429);
   hdirt_stack_3->SetBinContent(11,1.651058);
   hdirt_stack_3->SetBinContent(12,4.931287);
   hdirt_stack_3->SetBinContent(13,3.233474);
   hdirt_stack_3->SetBinContent(14,3.415478);
   hdirt_stack_3->SetBinContent(15,3.103051);
   hdirt_stack_3->SetBinContent(16,4.896255);
   hdirt_stack_3->SetBinContent(17,7.032725);
   hdirt_stack_3->SetBinContent(18,8.229164);
   hdirt_stack_3->SetBinContent(19,6.355253);
   hdirt_stack_3->SetBinContent(20,11.01512);
   hdirt_stack_3->SetBinError(1,0.670287);
   hdirt_stack_3->SetBinError(2,0.6118832);
   hdirt_stack_3->SetBinError(3,0.9371791);
   hdirt_stack_3->SetBinError(4,1.251303);
   hdirt_stack_3->SetBinError(5,0.5765025);
   hdirt_stack_3->SetBinError(6,0.7924553);
   hdirt_stack_3->SetBinError(7,0.4983258);
   hdirt_stack_3->SetBinError(8,0.786332);
   hdirt_stack_3->SetBinError(9,0.4862253);
   hdirt_stack_3->SetBinError(10,0.5014312);
   hdirt_stack_3->SetBinError(11,0.6984735);
   hdirt_stack_3->SetBinError(12,1.414082);
   hdirt_stack_3->SetBinError(13,0.9509713);
   hdirt_stack_3->SetBinError(14,0.9857688);
   hdirt_stack_3->SetBinError(15,0.9168535);
   hdirt_stack_3->SetBinError(16,1.05989);
   hdirt_stack_3->SetBinError(17,1.649609);
   hdirt_stack_3->SetBinError(18,1.48527);
   hdirt_stack_3->SetBinError(19,1.410379);
   hdirt_stack_3->SetBinError(20,1.762405);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,26.85472);
   houtFV_stack_4->SetBinContent(2,19.89986);
   houtFV_stack_4->SetBinContent(3,17.71891);
   houtFV_stack_4->SetBinContent(4,17.86646);
   houtFV_stack_4->SetBinContent(5,16.73974);
   houtFV_stack_4->SetBinContent(6,16.59737);
   houtFV_stack_4->SetBinContent(7,15.07703);
   houtFV_stack_4->SetBinContent(8,14.91463);
   houtFV_stack_4->SetBinContent(9,16.26035);
   houtFV_stack_4->SetBinContent(10,17.2572);
   houtFV_stack_4->SetBinContent(11,20.82281);
   houtFV_stack_4->SetBinContent(12,23.05908);
   houtFV_stack_4->SetBinContent(13,20.59953);
   houtFV_stack_4->SetBinContent(14,29.8308);
   houtFV_stack_4->SetBinContent(15,38.67038);
   houtFV_stack_4->SetBinContent(16,44.39957);
   houtFV_stack_4->SetBinContent(17,59.93559);
   houtFV_stack_4->SetBinContent(18,71.23757);
   houtFV_stack_4->SetBinContent(19,85.24443);
   houtFV_stack_4->SetBinContent(20,106.826);
   houtFV_stack_4->SetBinError(1,2.660591);
   houtFV_stack_4->SetBinError(2,2.233673);
   houtFV_stack_4->SetBinError(3,2.096621);
   houtFV_stack_4->SetBinError(4,2.158868);
   houtFV_stack_4->SetBinError(5,2.022416);
   houtFV_stack_4->SetBinError(6,2.303866);
   houtFV_stack_4->SetBinError(7,1.936265);
   houtFV_stack_4->SetBinError(8,1.929784);
   houtFV_stack_4->SetBinError(9,1.943313);
   houtFV_stack_4->SetBinError(10,2.031765);
   houtFV_stack_4->SetBinError(11,2.302495);
   houtFV_stack_4->SetBinError(12,2.407911);
   houtFV_stack_4->SetBinError(13,2.29436);
   houtFV_stack_4->SetBinError(14,2.71126);
   houtFV_stack_4->SetBinError(15,3.106773);
   houtFV_stack_4->SetBinError(16,3.433636);
   houtFV_stack_4->SetBinError(17,3.808476);
   houtFV_stack_4->SetBinError(18,4.310826);
   houtFV_stack_4->SetBinError(19,4.571293);
   houtFV_stack_4->SetBinError(20,5.321155);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.010918);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6479869);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7466539);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4961244);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8069153);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.477931);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3686657);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5270647);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3852539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3634356);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2567868);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.013025);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9951198);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.408164);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.532381);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,8.131753);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,17.7878);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,72.2849);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8552902);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.212227);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.214359);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1829821);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3094619);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2967592);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1735087);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2261944);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2201053);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2511433);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.09780812);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.416183);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3948346);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.600739);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7196876);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.070133);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.482725);
   hNCpi0inFVcoh_stack_5->SetBinError(20,3.182134);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8915669);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6354839);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3117386);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1684204);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4157971);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2719082);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2789553);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2944414);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5203094);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2766943);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4652843);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6131324);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3303709);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3467803);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.793514);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.083629);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.215442);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.926519);
   hNCpi0inFVqe_stack_6->SetBinContent(19,3.402484);
   hNCpi0inFVqe_stack_6->SetBinContent(20,3.639375);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3115092);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2103176);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1358382);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06039806);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1521572);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.137782);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1369245);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1234173);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2226475);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1250404);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1658121);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2095301);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1477841);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1064381);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2337278);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2689493);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2479296);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.5396636);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.6457888);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.5379118);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,53.13491);
   hNCpi0inFVres_stack_7->SetBinContent(2,44.3609);
   hNCpi0inFVres_stack_7->SetBinContent(3,42.79234);
   hNCpi0inFVres_stack_7->SetBinContent(4,42.73373);
   hNCpi0inFVres_stack_7->SetBinContent(5,43.96356);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.20873);
   hNCpi0inFVres_stack_7->SetBinContent(7,42.87802);
   hNCpi0inFVres_stack_7->SetBinContent(8,44.89035);
   hNCpi0inFVres_stack_7->SetBinContent(9,50.23704);
   hNCpi0inFVres_stack_7->SetBinContent(10,60.8785);
   hNCpi0inFVres_stack_7->SetBinContent(11,63.83511);
   hNCpi0inFVres_stack_7->SetBinContent(12,76.19994);
   hNCpi0inFVres_stack_7->SetBinContent(13,86.04767);
   hNCpi0inFVres_stack_7->SetBinContent(14,101.2658);
   hNCpi0inFVres_stack_7->SetBinContent(15,118.0346);
   hNCpi0inFVres_stack_7->SetBinContent(16,152.6132);
   hNCpi0inFVres_stack_7->SetBinContent(17,188.4283);
   hNCpi0inFVres_stack_7->SetBinContent(18,228.7021);
   hNCpi0inFVres_stack_7->SetBinContent(19,293.1798);
   hNCpi0inFVres_stack_7->SetBinContent(20,394.7818);
   hNCpi0inFVres_stack_7->SetBinError(1,2.400306);
   hNCpi0inFVres_stack_7->SetBinError(2,2.107484);
   hNCpi0inFVres_stack_7->SetBinError(3,2.100558);
   hNCpi0inFVres_stack_7->SetBinError(4,2.039262);
   hNCpi0inFVres_stack_7->SetBinError(5,2.138357);
   hNCpi0inFVres_stack_7->SetBinError(6,2.028935);
   hNCpi0inFVres_stack_7->SetBinError(7,2.035517);
   hNCpi0inFVres_stack_7->SetBinError(8,2.031124);
   hNCpi0inFVres_stack_7->SetBinError(9,2.14128);
   hNCpi0inFVres_stack_7->SetBinError(10,2.518764);
   hNCpi0inFVres_stack_7->SetBinError(11,2.450337);
   hNCpi0inFVres_stack_7->SetBinError(12,2.776736);
   hNCpi0inFVres_stack_7->SetBinError(13,3.03022);
   hNCpi0inFVres_stack_7->SetBinError(14,3.190926);
   hNCpi0inFVres_stack_7->SetBinError(15,3.462678);
   hNCpi0inFVres_stack_7->SetBinError(16,4.077162);
   hNCpi0inFVres_stack_7->SetBinError(17,4.524583);
   hNCpi0inFVres_stack_7->SetBinError(18,4.981788);
   hNCpi0inFVres_stack_7->SetBinError(19,5.61143);
   hNCpi0inFVres_stack_7->SetBinError(20,6.790171);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.01896);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.00355);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.249231);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.813771);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.375751);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.855327);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.745477);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.07797);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.31674);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.877355);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.487339);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.50722);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.63718);
   hNCpi0inFVdis_stack_8->SetBinContent(14,16.56621);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.56051);
   hNCpi0inFVdis_stack_8->SetBinContent(16,27.63918);
   hNCpi0inFVdis_stack_8->SetBinContent(17,35.74721);
   hNCpi0inFVdis_stack_8->SetBinContent(18,48.56554);
   hNCpi0inFVdis_stack_8->SetBinContent(19,71.29497);
   hNCpi0inFVdis_stack_8->SetBinContent(20,129.9887);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.229612);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.097766);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8919291);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.108882);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8336532);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7775413);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9585097);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.140855);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9497684);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8706548);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9385973);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.186505);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.114377);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.32085);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.334522);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.970453);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.021572);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.386528);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.997806);
   hNCpi0inFVdis_stack_8->SetBinError(20,4.225704);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03255694);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1829805);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.165733);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2053722);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.3511891);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02095708);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1316364);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1339912);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1213703);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1570138);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,33.67398);
   hCCpi0inFV_stack_10->SetBinContent(2,29.06198);
   hCCpi0inFV_stack_10->SetBinContent(3,25.29364);
   hCCpi0inFV_stack_10->SetBinContent(4,18.07314);
   hCCpi0inFV_stack_10->SetBinContent(5,23.49884);
   hCCpi0inFV_stack_10->SetBinContent(6,22.10345);
   hCCpi0inFV_stack_10->SetBinContent(7,21.31635);
   hCCpi0inFV_stack_10->SetBinContent(8,22.01645);
   hCCpi0inFV_stack_10->SetBinContent(9,21.62688);
   hCCpi0inFV_stack_10->SetBinContent(10,27.57011);
   hCCpi0inFV_stack_10->SetBinContent(11,32.81432);
   hCCpi0inFV_stack_10->SetBinContent(12,30.60559);
   hCCpi0inFV_stack_10->SetBinContent(13,39.60758);
   hCCpi0inFV_stack_10->SetBinContent(14,39.85707);
   hCCpi0inFV_stack_10->SetBinContent(15,50.13068);
   hCCpi0inFV_stack_10->SetBinContent(16,60.35975);
   hCCpi0inFV_stack_10->SetBinContent(17,92.51428);
   hCCpi0inFV_stack_10->SetBinContent(18,103.9701);
   hCCpi0inFV_stack_10->SetBinContent(19,151.5294);
   hCCpi0inFV_stack_10->SetBinContent(20,249.3935);
   hCCpi0inFV_stack_10->SetBinError(1,2.874072);
   hCCpi0inFV_stack_10->SetBinError(2,2.726989);
   hCCpi0inFV_stack_10->SetBinError(3,2.516262);
   hCCpi0inFV_stack_10->SetBinError(4,2.085074);
   hCCpi0inFV_stack_10->SetBinError(5,2.319796);
   hCCpi0inFV_stack_10->SetBinError(6,2.366182);
   hCCpi0inFV_stack_10->SetBinError(7,2.268522);
   hCCpi0inFV_stack_10->SetBinError(8,2.371966);
   hCCpi0inFV_stack_10->SetBinError(9,2.247113);
   hCCpi0inFV_stack_10->SetBinError(10,2.627198);
   hCCpi0inFV_stack_10->SetBinError(11,2.814035);
   hCCpi0inFV_stack_10->SetBinError(12,2.784367);
   hCCpi0inFV_stack_10->SetBinError(13,3.198209);
   hCCpi0inFV_stack_10->SetBinError(14,3.17688);
   hCCpi0inFV_stack_10->SetBinError(15,3.598222);
   hCCpi0inFV_stack_10->SetBinError(16,3.87778);
   hCCpi0inFV_stack_10->SetBinError(17,4.876454);
   hCCpi0inFV_stack_10->SetBinError(18,5.100182);
   hCCpi0inFV_stack_10->SetBinError(19,6.213755);
   hCCpi0inFV_stack_10->SetBinError(20,7.961741);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,17.94186);
   hNCinFV_stack_11->SetBinContent(2,14.68427);
   hNCinFV_stack_11->SetBinContent(3,11.90508);
   hNCinFV_stack_11->SetBinContent(4,9.080849);
   hNCinFV_stack_11->SetBinContent(5,12.86343);
   hNCinFV_stack_11->SetBinContent(6,7.859078);
   hNCinFV_stack_11->SetBinContent(7,10.05428);
   hNCinFV_stack_11->SetBinContent(8,5.113773);
   hNCinFV_stack_11->SetBinContent(9,11.90735);
   hNCinFV_stack_11->SetBinContent(10,10.03181);
   hNCinFV_stack_11->SetBinContent(11,9.699318);
   hNCinFV_stack_11->SetBinContent(12,12.75725);
   hNCinFV_stack_11->SetBinContent(13,14.06038);
   hNCinFV_stack_11->SetBinContent(14,14.438);
   hNCinFV_stack_11->SetBinContent(15,23.08334);
   hNCinFV_stack_11->SetBinContent(16,29.38292);
   hNCinFV_stack_11->SetBinContent(17,32.24257);
   hNCinFV_stack_11->SetBinContent(18,45.497);
   hNCinFV_stack_11->SetBinContent(19,79.50714);
   hNCinFV_stack_11->SetBinContent(20,143.1312);
   hNCinFV_stack_11->SetBinError(1,2.163353);
   hNCinFV_stack_11->SetBinError(2,1.996677);
   hNCinFV_stack_11->SetBinError(3,1.750578);
   hNCinFV_stack_11->SetBinError(4,1.571494);
   hNCinFV_stack_11->SetBinError(5,2.001115);
   hNCinFV_stack_11->SetBinError(6,1.345811);
   hNCinFV_stack_11->SetBinError(7,1.559543);
   hNCinFV_stack_11->SetBinError(8,1.18787);
   hNCinFV_stack_11->SetBinError(9,1.821861);
   hNCinFV_stack_11->SetBinError(10,1.584321);
   hNCinFV_stack_11->SetBinError(11,1.710785);
   hNCinFV_stack_11->SetBinError(12,1.752383);
   hNCinFV_stack_11->SetBinError(13,1.947893);
   hNCinFV_stack_11->SetBinError(14,2.062894);
   hNCinFV_stack_11->SetBinError(15,2.676747);
   hNCinFV_stack_11->SetBinError(16,2.908692);
   hNCinFV_stack_11->SetBinError(17,3.067047);
   hNCinFV_stack_11->SetBinError(18,3.579222);
   hNCinFV_stack_11->SetBinError(19,4.866562);
   hNCinFV_stack_11->SetBinError(20,6.851226);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,21.65071);
   hnumuCCinFV_stack_12->SetBinContent(2,14.82505);
   hnumuCCinFV_stack_12->SetBinContent(3,14.42482);
   hnumuCCinFV_stack_12->SetBinContent(4,12.79425);
   hnumuCCinFV_stack_12->SetBinContent(5,14.27328);
   hnumuCCinFV_stack_12->SetBinContent(6,14.53366);
   hnumuCCinFV_stack_12->SetBinContent(7,13.17817);
   hnumuCCinFV_stack_12->SetBinContent(8,20.63873);
   hnumuCCinFV_stack_12->SetBinContent(9,19.8234);
   hnumuCCinFV_stack_12->SetBinContent(10,22.97657);
   hnumuCCinFV_stack_12->SetBinContent(11,26.38937);
   hnumuCCinFV_stack_12->SetBinContent(12,24.66167);
   hnumuCCinFV_stack_12->SetBinContent(13,33.4483);
   hnumuCCinFV_stack_12->SetBinContent(14,29.94961);
   hnumuCCinFV_stack_12->SetBinContent(15,34.4286);
   hnumuCCinFV_stack_12->SetBinContent(16,45.9055);
   hnumuCCinFV_stack_12->SetBinContent(17,52.55578);
   hnumuCCinFV_stack_12->SetBinContent(18,48.50027);
   hnumuCCinFV_stack_12->SetBinContent(19,68.39314);
   hnumuCCinFV_stack_12->SetBinContent(20,120.4104);
   hnumuCCinFV_stack_12->SetBinError(1,2.371554);
   hnumuCCinFV_stack_12->SetBinError(2,2.081025);
   hnumuCCinFV_stack_12->SetBinError(3,2.229134);
   hnumuCCinFV_stack_12->SetBinError(4,1.872088);
   hnumuCCinFV_stack_12->SetBinError(5,2.262318);
   hnumuCCinFV_stack_12->SetBinError(6,2.137806);
   hnumuCCinFV_stack_12->SetBinError(7,2.114705);
   hnumuCCinFV_stack_12->SetBinError(8,2.939422);
   hnumuCCinFV_stack_12->SetBinError(9,2.508561);
   hnumuCCinFV_stack_12->SetBinError(10,2.837424);
   hnumuCCinFV_stack_12->SetBinError(11,2.977083);
   hnumuCCinFV_stack_12->SetBinError(12,2.940913);
   hnumuCCinFV_stack_12->SetBinError(13,3.399695);
   hnumuCCinFV_stack_12->SetBinError(14,3.014267);
   hnumuCCinFV_stack_12->SetBinError(15,3.387892);
   hnumuCCinFV_stack_12->SetBinError(16,4.945195);
   hnumuCCinFV_stack_12->SetBinError(17,4.077496);
   hnumuCCinFV_stack_12->SetBinError(18,3.769317);
   hnumuCCinFV_stack_12->SetBinError(19,4.949547);
   hnumuCCinFV_stack_12->SetBinError(20,6.240379);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.647793);
   hnueCCinFV_stack_13->SetBinContent(2,1.641809);
   hnueCCinFV_stack_13->SetBinContent(3,1.287416);
   hnueCCinFV_stack_13->SetBinContent(4,1.85986);
   hnueCCinFV_stack_13->SetBinContent(5,0.6430945);
   hnueCCinFV_stack_13->SetBinContent(6,1.006494);
   hnueCCinFV_stack_13->SetBinContent(7,0.8503433);
   hnueCCinFV_stack_13->SetBinContent(9,1.226073);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.6905964);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,2.202207);
   hnueCCinFV_stack_13->SetBinContent(15,2.832999);
   hnueCCinFV_stack_13->SetBinContent(16,1.622312);
   hnueCCinFV_stack_13->SetBinContent(17,2.363974);
   hnueCCinFV_stack_13->SetBinContent(18,3.851004);
   hnueCCinFV_stack_13->SetBinContent(19,3.855467);
   hnueCCinFV_stack_13->SetBinContent(20,24.74744);
   hnueCCinFV_stack_13->SetBinError(1,0.7359977);
   hnueCCinFV_stack_13->SetBinError(2,0.5823823);
   hnueCCinFV_stack_13->SetBinError(3,0.57742);
   hnueCCinFV_stack_13->SetBinError(4,1.1719);
   hnueCCinFV_stack_13->SetBinError(5,0.4552547);
   hnueCCinFV_stack_13->SetBinError(6,0.5976004);
   hnueCCinFV_stack_13->SetBinError(7,0.6473186);
   hnueCCinFV_stack_13->SetBinError(9,0.56795);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.4010541);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.8569281);
   hnueCCinFV_stack_13->SetBinError(15,1.411245);
   hnueCCinFV_stack_13->SetBinError(16,0.7115599);
   hnueCCinFV_stack_13->SetBinError(17,0.8363957);
   hnueCCinFV_stack_13->SetBinError(18,1.167976);
   hnueCCinFV_stack_13->SetBinError(19,0.959592);
   hnueCCinFV_stack_13->SetBinError(20,3.608147);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__2->SetBinContent(1,204.2078);
   hmcerror__2->SetBinContent(2,158.8767);
   hmcerror__2->SetBinContent(3,143.6391);
   hmcerror__2->SetBinContent(4,137.9553);
   hmcerror__2->SetBinContent(5,142.203);
   hmcerror__2->SetBinContent(6,151.7991);
   hmcerror__2->SetBinContent(7,128.7547);
   hmcerror__2->SetBinContent(8,150.5045);
   hmcerror__2->SetBinContent(9,170.4279);
   hmcerror__2->SetBinContent(10,190.2691);
   hmcerror__2->SetBinContent(11,206.5487);
   hmcerror__2->SetBinContent(12,233.7179);
   hmcerror__2->SetBinContent(13,258.038);
   hmcerror__2->SetBinContent(14,290.5665);
   hmcerror__2->SetBinContent(15,343.5071);
   hmcerror__2->SetBinContent(16,433.6568);
   hmcerror__2->SetBinContent(17,547.7328);
   hmcerror__2->SetBinContent(18,638.8719);
   hmcerror__2->SetBinContent(19,870.3019);
   hmcerror__2->SetBinContent(20,1377.526);
   hmcerror__2->SetBinError(1,54.85324);
   hmcerror__2->SetBinError(2,48.65007);
   hmcerror__2->SetBinError(3,42.95578);
   hmcerror__2->SetBinError(4,44.94875);
   hmcerror__2->SetBinError(5,45.22139);
   hmcerror__2->SetBinError(6,43.17928);
   hmcerror__2->SetBinError(7,41.80811);
   hmcerror__2->SetBinError(8,47.59261);
   hmcerror__2->SetBinError(9,54.11117);
   hmcerror__2->SetBinError(10,57.48214);
   hmcerror__2->SetBinError(11,63.91562);
   hmcerror__2->SetBinError(12,68.91657);
   hmcerror__2->SetBinError(13,75.50643);
   hmcerror__2->SetBinError(14,87.70964);
   hmcerror__2->SetBinError(15,102.4717);
   hmcerror__2->SetBinError(16,127.4245);
   hmcerror__2->SetBinError(17,151.3518);
   hmcerror__2->SetBinError(18,170.1107);
   hmcerror__2->SetBinError(19,214.5272);
   hmcerror__2->SetBinError(20,307.778);
   hmcerror__2->SetBinError(21,0.3895343);
   hmcerror__2->SetEntries(7381.09);

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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3001[20] = {
   196,
   134,
   147,
   124,
   149,
   145,
   151,
   179,
   152,
   170,
   182,
   207,
   234,
   297,
   285,
   407,
   472,
   650,
   886,
   1277};
   Double_t _felx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3001[20] = {
   14,
   11.57584,
   12.12436,
   11.13553,
   12.20656,
   12.04159,
   12.28821,
   13.37909,
   12.32883,
   13.0384,
   13.49074,
   14.38749,
   15.29706,
   17.23369,
   16.88194,
   20.17424,
   21.72556,
   25.4951,
   29.76575,
   35.73514};
   Double_t _fehx3001[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3001[20] = {
   14,
   11.57584,
   12.12436,
   11.13553,
   12.20656,
   12.04159,
   12.28821,
   13.37909,
   12.32883,
   13.0384,
   13.49074,
   14.38749,
   15.29706,
   17.23369,
   16.88194,
   20.17424,
   21.72556,
   25.4951,
   29.76575,
   35.73514};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(101.578);
   Graph_Graph3001->SetMaximum(1432.722);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 679.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2172.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  473.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 515.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3002[20] = {
   0.2686149,
   0.3062128,
   0.2990535,
   0.3258211,
   0.3180059,
   0.2844502,
   0.3247113,
   0.3162205,
   0.3175018,
   0.3021098,
   0.3094457,
   0.2948707,
   0.2926174,
   0.3018573,
   0.2983103,
   0.2938373,
   0.2763241,
   0.2662673,
   0.2464974,
   0.2234281};
   Double_t _fehx3002[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3002[20] = {
   0.2686149,
   0.3062128,
   0.2990535,
   0.3258211,
   0.3180059,
   0.2844502,
   0.3247113,
   0.3162205,
   0.3175018,
   0.3021098,
   0.3094457,
   0.2948707,
   0.2926174,
   0.3018573,
   0.2983103,
   0.2938373,
   0.2763241,
   0.2662673,
   0.2464974,
   0.2234281};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
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
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3003[20] = {
   0.2467429,
   0.260069,
   0.2630303,
   0.2840692,
   0.2820683,
   0.2618604,
   0.2850643,
   0.2717056,
   0.2763224,
   0.2816791,
   0.2807983,
   0.2764347,
   0.273497,
   0.2843192,
   0.2867511,
   0.2803645,
   0.2667438,
   0.2552331,
   0.2342064,
   0.2112063};
   Double_t _fehx3003[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3003[20] = {
   0.2467429,
   0.260069,
   0.2630303,
   0.2840692,
   0.2820683,
   0.2618604,
   0.2850643,
   0.2717056,
   0.2763224,
   0.2816791,
   0.2807983,
   0.2764347,
   0.273497,
   0.2843192,
   0.2867511,
   0.2803645,
   0.2667438,
   0.2552331,
   0.2342064,
   0.2112063};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3004[20] = {
   0.9598068,
   0.8434215,
   1.023398,
   0.8988419,
   1.047798,
   0.9552098,
   1.172773,
   1.189333,
   0.8918726,
   0.8934716,
   0.8811481,
   0.885683,
   0.9068431,
   1.022141,
   0.8296771,
   0.9385301,
   0.8617341,
   1.017418,
   1.018037,
   0.9270242};
   Double_t _felx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3004[20] = {
   0.06855763,
   0.07286052,
   0.08440844,
   0.08071839,
   0.08583896,
   0.07932585,
   0.09543888,
   0.08889492,
   0.07234042,
   0.06852614,
   0.06531504,
   0.06155923,
   0.05928219,
   0.05931064,
   0.04914583,
   0.04652121,
   0.03966453,
   0.03990643,
   0.03420164,
   0.02594153};
   Double_t _fehx3004[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3004[20] = {
   0.06855763,
   0.07286052,
   0.08440844,
   0.08071839,
   0.08583896,
   0.07932585,
   0.09543888,
   0.08889492,
   0.07234042,
   0.06852614,
   0.06531504,
   0.06155923,
   0.05928219,
   0.05931064,
   0.04914583,
   0.04652121,
   0.03966453,
   0.03990643,
   0.03420164,
   0.02594153};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.7197942);
   Graph_Graph3004->SetMaximum(1.328995);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
