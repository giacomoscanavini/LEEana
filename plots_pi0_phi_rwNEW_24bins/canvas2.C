#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Feb 17 21:59:20 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-4.119231,-5.500228,3.957692,608.2094);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__4->SetBinContent(1,260.1135);
   hmc__4->SetBinContent(2,275.0114);
   hmc__4->SetBinContent(3,266.3859);
   hmc__4->SetBinContent(4,233.8264);
   hmc__4->SetBinContent(5,238.5815);
   hmc__4->SetBinContent(6,223.714);
   hmc__4->SetBinContent(7,219.7757);
   hmc__4->SetBinContent(8,212.2831);
   hmc__4->SetBinContent(9,239.1228);
   hmc__4->SetBinContent(10,225.3202);
   hmc__4->SetBinContent(11,245.8671);
   hmc__4->SetBinContent(12,234.5516);
   hmc__4->SetBinContent(13,247.615);
   hmc__4->SetBinContent(14,248.0371);
   hmc__4->SetBinContent(15,241.7618);
   hmc__4->SetBinContent(16,240.5258);
   hmc__4->SetBinContent(17,233.9651);
   hmc__4->SetBinContent(18,227.1905);
   hmc__4->SetBinContent(19,225.4338);
   hmc__4->SetBinContent(20,235.8285);
   hmc__4->SetBinContent(21,243.9035);
   hmc__4->SetBinContent(22,262.4096);
   hmc__4->SetBinContent(23,256.4162);
   hmc__4->SetBinContent(24,251.1152);
   hmc__4->SetBinError(1,73.04532);
   hmc__4->SetBinError(2,74.19854);
   hmc__4->SetBinError(3,73.83016);
   hmc__4->SetBinError(4,67.77462);
   hmc__4->SetBinError(5,63.68037);
   hmc__4->SetBinError(6,56.23203);
   hmc__4->SetBinError(7,59.92329);
   hmc__4->SetBinError(8,62.51863);
   hmc__4->SetBinError(9,71.32818);
   hmc__4->SetBinError(10,61.76137);
   hmc__4->SetBinError(11,75.16892);
   hmc__4->SetBinError(12,66.02946);
   hmc__4->SetBinError(13,69.46006);
   hmc__4->SetBinError(14,67.82573);
   hmc__4->SetBinError(15,65.12161);
   hmc__4->SetBinError(16,67.31661);
   hmc__4->SetBinError(17,60.78433);
   hmc__4->SetBinError(18,62.6727);
   hmc__4->SetBinError(19,61.08897);
   hmc__4->SetBinError(20,60.17902);
   hmc__4->SetBinError(21,62.78311);
   hmc__4->SetBinError(22,75.67401);
   hmc__4->SetBinError(23,71.34722);
   hmc__4->SetBinError(24,69.3522);
   hmc__4->SetBinError(25,0.3895343);
   hmc__4->SetMinimum(-5.500228);
   hmc__4->SetMaximum(577.5239);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,-3.15,3.15);
   hs2_stack_2->SetMinimum(-3.571482e-09);
   hs2_stack_2->SetMaximum(288.762);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,5.307313);
   hbadmatch_stack_1->SetBinContent(2,7.143643);
   hbadmatch_stack_1->SetBinContent(3,5.422619);
   hbadmatch_stack_1->SetBinContent(4,4.691955);
   hbadmatch_stack_1->SetBinContent(5,6.347346);
   hbadmatch_stack_1->SetBinContent(6,7.404686);
   hbadmatch_stack_1->SetBinContent(7,4.129013);
   hbadmatch_stack_1->SetBinContent(8,4.563367);
   hbadmatch_stack_1->SetBinContent(9,5.316566);
   hbadmatch_stack_1->SetBinContent(10,4.794215);
   hbadmatch_stack_1->SetBinContent(11,6.212675);
   hbadmatch_stack_1->SetBinContent(12,3.840951);
   hbadmatch_stack_1->SetBinContent(13,4.295768);
   hbadmatch_stack_1->SetBinContent(14,7.023757);
   hbadmatch_stack_1->SetBinContent(15,3.370974);
   hbadmatch_stack_1->SetBinContent(16,7.638319);
   hbadmatch_stack_1->SetBinContent(17,5.337197);
   hbadmatch_stack_1->SetBinContent(18,4.326572);
   hbadmatch_stack_1->SetBinContent(19,4.917827);
   hbadmatch_stack_1->SetBinContent(20,4.682207);
   hbadmatch_stack_1->SetBinContent(21,3.138346);
   hbadmatch_stack_1->SetBinContent(22,7.454318);
   hbadmatch_stack_1->SetBinContent(23,2.964983);
   hbadmatch_stack_1->SetBinContent(24,3.750116);
   hbadmatch_stack_1->SetBinError(1,1.202129);
   hbadmatch_stack_1->SetBinError(2,1.449503);
   hbadmatch_stack_1->SetBinError(3,1.373949);
   hbadmatch_stack_1->SetBinError(4,1.084722);
   hbadmatch_stack_1->SetBinError(5,1.38374);
   hbadmatch_stack_1->SetBinError(6,1.48977);
   hbadmatch_stack_1->SetBinError(7,1.044803);
   hbadmatch_stack_1->SetBinError(8,1.123237);
   hbadmatch_stack_1->SetBinError(9,1.551583);
   hbadmatch_stack_1->SetBinError(10,1.144057);
   hbadmatch_stack_1->SetBinError(11,1.312804);
   hbadmatch_stack_1->SetBinError(12,0.9480755);
   hbadmatch_stack_1->SetBinError(13,1.11566);
   hbadmatch_stack_1->SetBinError(14,2.494165);
   hbadmatch_stack_1->SetBinError(15,0.8986391);
   hbadmatch_stack_1->SetBinError(16,2.308761);
   hbadmatch_stack_1->SetBinError(17,1.215653);
   hbadmatch_stack_1->SetBinError(18,1.120448);
   hbadmatch_stack_1->SetBinError(19,1.289646);
   hbadmatch_stack_1->SetBinError(20,1.142365);
   hbadmatch_stack_1->SetBinError(21,0.9425123);
   hbadmatch_stack_1->SetBinError(22,1.458235);
   hbadmatch_stack_1->SetBinError(23,0.8050985);
   hbadmatch_stack_1->SetBinError(24,0.969743);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,18.22741);
   hext_stack_2->SetBinContent(2,17.54108);
   hext_stack_2->SetBinContent(3,19.52658);
   hext_stack_2->SetBinContent(4,14.18738);
   hext_stack_2->SetBinContent(5,29.14203);
   hext_stack_2->SetBinContent(6,28.94733);
   hext_stack_2->SetBinContent(7,20.56163);
   hext_stack_2->SetBinContent(8,13.8558);
   hext_stack_2->SetBinContent(9,24.78919);
   hext_stack_2->SetBinContent(10,15.70285);
   hext_stack_2->SetBinContent(11,15.85566);
   hext_stack_2->SetBinContent(12,8.022189);
   hext_stack_2->SetBinContent(13,14.29711);
   hext_stack_2->SetBinContent(14,10.96494);
   hext_stack_2->SetBinContent(15,16.16406);
   hext_stack_2->SetBinContent(16,21.5883);
   hext_stack_2->SetBinContent(17,21.81173);
   hext_stack_2->SetBinContent(18,32.21165);
   hext_stack_2->SetBinContent(19,22.113);
   hext_stack_2->SetBinContent(20,31.26718);
   hext_stack_2->SetBinContent(21,22.14771);
   hext_stack_2->SetBinContent(22,21.62578);
   hext_stack_2->SetBinContent(23,12.3116);
   hext_stack_2->SetBinContent(24,13.89051);
   hext_stack_2->SetBinError(1,2.799284);
   hext_stack_2->SetBinError(2,2.856587);
   hext_stack_2->SetBinError(3,3.171559);
   hext_stack_2->SetBinError(4,2.390457);
   hext_stack_2->SetBinError(5,3.825331);
   hext_stack_2->SetBinError(6,3.676402);
   hext_stack_2->SetBinError(7,2.983287);
   hext_stack_2->SetBinError(8,2.410447);
   hext_stack_2->SetBinError(9,3.512853);
   hext_stack_2->SetBinError(10,2.668388);
   hext_stack_2->SetBinError(11,2.703063);
   hext_stack_2->SetBinError(12,1.800944);
   hext_stack_2->SetBinError(13,2.666037);
   hext_stack_2->SetBinError(14,2.014533);
   hext_stack_2->SetBinError(15,2.709749);
   hext_stack_2->SetBinError(16,3.174995);
   hext_stack_2->SetBinError(17,3.223821);
   hext_stack_2->SetBinError(18,4.012835);
   hext_stack_2->SetBinError(19,3.04959);
   hext_stack_2->SetBinError(20,3.870702);
   hext_stack_2->SetBinError(21,3.229888);
   hext_stack_2->SetBinError(22,3.297946);
   hext_stack_2->SetBinError(23,2.282335);
   hext_stack_2->SetBinError(24,2.634849);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.6143302);
   hdirt_stack_3->SetBinContent(2,1.847927);
   hdirt_stack_3->SetBinContent(3,2.927572);
   hdirt_stack_3->SetBinContent(4,1.157112);
   hdirt_stack_3->SetBinContent(5,2.072858);
   hdirt_stack_3->SetBinContent(6,3.00307);
   hdirt_stack_3->SetBinContent(7,2.666754);
   hdirt_stack_3->SetBinContent(8,2.310039);
   hdirt_stack_3->SetBinContent(9,2.17224);
   hdirt_stack_3->SetBinContent(10,1.911643);
   hdirt_stack_3->SetBinContent(11,2.039677);
   hdirt_stack_3->SetBinContent(12,1.285603);
   hdirt_stack_3->SetBinContent(13,1.60434);
   hdirt_stack_3->SetBinContent(14,1.58478);
   hdirt_stack_3->SetBinContent(15,2.425494);
   hdirt_stack_3->SetBinContent(16,3.024608);
   hdirt_stack_3->SetBinContent(17,3.906034);
   hdirt_stack_3->SetBinContent(18,1.098964);
   hdirt_stack_3->SetBinContent(19,3.066364);
   hdirt_stack_3->SetBinContent(20,3.277072);
   hdirt_stack_3->SetBinContent(21,1.134957);
   hdirt_stack_3->SetBinContent(22,2.517161);
   hdirt_stack_3->SetBinContent(23,1.411418);
   hdirt_stack_3->SetBinContent(24,0.2046459);
   hdirt_stack_3->SetBinError(1,0.39051);
   hdirt_stack_3->SetBinError(2,0.6736187);
   hdirt_stack_3->SetBinError(3,0.9243114);
   hdirt_stack_3->SetBinError(4,0.5369766);
   hdirt_stack_3->SetBinError(5,0.7408564);
   hdirt_stack_3->SetBinError(6,0.8811751);
   hdirt_stack_3->SetBinError(7,0.8360407);
   hdirt_stack_3->SetBinError(8,0.7475473);
   hdirt_stack_3->SetBinError(9,0.8744528);
   hdirt_stack_3->SetBinError(10,1.167646);
   hdirt_stack_3->SetBinError(11,1.050721);
   hdirt_stack_3->SetBinError(12,0.5481151);
   hdirt_stack_3->SetBinError(13,0.6235792);
   hdirt_stack_3->SetBinError(14,0.7330241);
   hdirt_stack_3->SetBinError(15,0.8157861);
   hdirt_stack_3->SetBinError(16,0.887708);
   hdirt_stack_3->SetBinError(17,1.084994);
   hdirt_stack_3->SetBinError(18,0.5014971);
   hdirt_stack_3->SetBinError(19,0.9272104);
   hdirt_stack_3->SetBinError(20,0.941338);
   hdirt_stack_3->SetBinError(21,0.4962475);
   hdirt_stack_3->SetBinError(22,0.8266797);
   hdirt_stack_3->SetBinError(23,0.6229395);
   hdirt_stack_3->SetBinError(24,0.2046459);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,18.19073);
   houtFV_stack_4->SetBinContent(2,17.95533);
   houtFV_stack_4->SetBinContent(3,19.9251);
   houtFV_stack_4->SetBinContent(4,17.88708);
   houtFV_stack_4->SetBinContent(5,15.07061);
   houtFV_stack_4->SetBinContent(6,16.55307);
   houtFV_stack_4->SetBinContent(7,15.25756);
   houtFV_stack_4->SetBinContent(8,16.00821);
   houtFV_stack_4->SetBinContent(9,20.28843);
   houtFV_stack_4->SetBinContent(10,16.7001);
   houtFV_stack_4->SetBinContent(11,15.83826);
   houtFV_stack_4->SetBinContent(12,17.01754);
   houtFV_stack_4->SetBinContent(13,15.71657);
   houtFV_stack_4->SetBinContent(14,14.69623);
   houtFV_stack_4->SetBinContent(15,12.2015);
   houtFV_stack_4->SetBinContent(16,14.73635);
   houtFV_stack_4->SetBinContent(17,18.27159);
   houtFV_stack_4->SetBinContent(18,15.51589);
   houtFV_stack_4->SetBinContent(19,18.22204);
   houtFV_stack_4->SetBinContent(20,13.61003);
   houtFV_stack_4->SetBinContent(21,17.677);
   houtFV_stack_4->SetBinContent(22,15.60559);
   houtFV_stack_4->SetBinContent(23,19.95396);
   houtFV_stack_4->SetBinContent(24,14.32462);
   houtFV_stack_4->SetBinError(1,2.203276);
   houtFV_stack_4->SetBinError(2,2.054251);
   houtFV_stack_4->SetBinError(3,2.271584);
   houtFV_stack_4->SetBinError(4,2.151473);
   houtFV_stack_4->SetBinError(5,1.934808);
   houtFV_stack_4->SetBinError(6,2.049315);
   houtFV_stack_4->SetBinError(7,1.964163);
   houtFV_stack_4->SetBinError(8,1.994683);
   houtFV_stack_4->SetBinError(9,2.27349);
   houtFV_stack_4->SetBinError(10,2.049841);
   houtFV_stack_4->SetBinError(11,1.987991);
   houtFV_stack_4->SetBinError(12,1.941923);
   houtFV_stack_4->SetBinError(13,1.879247);
   houtFV_stack_4->SetBinError(14,1.916991);
   houtFV_stack_4->SetBinError(15,1.673328);
   houtFV_stack_4->SetBinError(16,1.969082);
   houtFV_stack_4->SetBinError(17,2.09748);
   houtFV_stack_4->SetBinError(18,2.041571);
   houtFV_stack_4->SetBinError(19,2.186307);
   houtFV_stack_4->SetBinError(20,1.862778);
   houtFV_stack_4->SetBinError(21,2.084602);
   houtFV_stack_4->SetBinError(22,1.954672);
   houtFV_stack_4->SetBinError(23,2.287182);
   houtFV_stack_4->SetBinError(24,1.882896);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.041116);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.375996);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.990052);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.517328);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.97053);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.959824);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.138602);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.857434);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.456456);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.792256);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.988724);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.890574);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.219797);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.445334);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.784622);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.429388);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.558509);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.195978);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.324524);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.436124);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.636473);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.458447);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.254106);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.011384);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6114764);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.653227);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6825592);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7084411);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5295535);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.663377);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6450838);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5210948);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5841863);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6345389);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7020488);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6812749);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.46491);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6260484);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.785678);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5998011);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6665471);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6833188);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.744472);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7465602);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5486844);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5484482);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7025105);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.5493939);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.19854);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.227272);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8375041);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.157854);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.562408);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5581679);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.338376);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.8365039);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.157358);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.213822);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7798718);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.087772);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.9625539);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.28324);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.10139);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.004072);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3053129);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3365421);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3487535);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.32337);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4337272);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2198343);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4032689);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2638255);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3883553);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3726713);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.220864);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3307091);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3148322);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3841566);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3413269);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3271594);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,110.3192);
   hNCpi0inFVres_stack_7->SetBinContent(2,109.2348);
   hNCpi0inFVres_stack_7->SetBinContent(3,113.4776);
   hNCpi0inFVres_stack_7->SetBinContent(4,103.764);
   hNCpi0inFVres_stack_7->SetBinContent(5,101.1015);
   hNCpi0inFVres_stack_7->SetBinContent(6,90.38503);
   hNCpi0inFVres_stack_7->SetBinContent(7,99.55663);
   hNCpi0inFVres_stack_7->SetBinContent(8,91.93695);
   hNCpi0inFVres_stack_7->SetBinContent(9,101.3427);
   hNCpi0inFVres_stack_7->SetBinContent(10,103.0565);
   hNCpi0inFVres_stack_7->SetBinContent(11,103.5316);
   hNCpi0inFVres_stack_7->SetBinContent(12,97.60522);
   hNCpi0inFVres_stack_7->SetBinContent(13,96.32924);
   hNCpi0inFVres_stack_7->SetBinContent(14,107.4359);
   hNCpi0inFVres_stack_7->SetBinContent(15,106.8886);
   hNCpi0inFVres_stack_7->SetBinContent(16,106.0904);
   hNCpi0inFVres_stack_7->SetBinContent(17,98.55215);
   hNCpi0inFVres_stack_7->SetBinContent(18,94.62056);
   hNCpi0inFVres_stack_7->SetBinContent(19,96.59319);
   hNCpi0inFVres_stack_7->SetBinContent(20,96.8302);
   hNCpi0inFVres_stack_7->SetBinContent(21,110.2272);
   hNCpi0inFVres_stack_7->SetBinContent(22,113.8098);
   hNCpi0inFVres_stack_7->SetBinContent(23,111.7856);
   hNCpi0inFVres_stack_7->SetBinContent(24,105.7477);
   hNCpi0inFVres_stack_7->SetBinError(1,3.476661);
   hNCpi0inFVres_stack_7->SetBinError(2,3.418805);
   hNCpi0inFVres_stack_7->SetBinError(3,3.4928);
   hNCpi0inFVres_stack_7->SetBinError(4,3.296295);
   hNCpi0inFVres_stack_7->SetBinError(5,3.289834);
   hNCpi0inFVres_stack_7->SetBinError(6,3.027701);
   hNCpi0inFVres_stack_7->SetBinError(7,3.375719);
   hNCpi0inFVres_stack_7->SetBinError(8,3.095806);
   hNCpi0inFVres_stack_7->SetBinError(9,3.265136);
   hNCpi0inFVres_stack_7->SetBinError(10,3.323927);
   hNCpi0inFVres_stack_7->SetBinError(11,3.379776);
   hNCpi0inFVres_stack_7->SetBinError(12,3.23029);
   hNCpi0inFVres_stack_7->SetBinError(13,3.102838);
   hNCpi0inFVres_stack_7->SetBinError(14,3.398862);
   hNCpi0inFVres_stack_7->SetBinError(15,3.3989);
   hNCpi0inFVres_stack_7->SetBinError(16,3.412975);
   hNCpi0inFVres_stack_7->SetBinError(17,3.205959);
   hNCpi0inFVres_stack_7->SetBinError(18,3.147126);
   hNCpi0inFVres_stack_7->SetBinError(19,3.228422);
   hNCpi0inFVres_stack_7->SetBinError(20,3.240787);
   hNCpi0inFVres_stack_7->SetBinError(21,3.448503);
   hNCpi0inFVres_stack_7->SetBinError(22,3.574092);
   hNCpi0inFVres_stack_7->SetBinError(23,3.487299);
   hNCpi0inFVres_stack_7->SetBinError(24,3.354939);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,19.84079);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.51937);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.5873);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.24634);
   hNCpi0inFVdis_stack_8->SetBinContent(5,16.33069);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.24891);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.96103);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.15808);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.20126);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.46026);
   hNCpi0inFVdis_stack_8->SetBinContent(11,19.645);
   hNCpi0inFVdis_stack_8->SetBinContent(12,17.87649);
   hNCpi0inFVdis_stack_8->SetBinContent(13,21.28712);
   hNCpi0inFVdis_stack_8->SetBinContent(14,21.39125);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.04065);
   hNCpi0inFVdis_stack_8->SetBinContent(16,19.22616);
   hNCpi0inFVdis_stack_8->SetBinContent(17,20.06034);
   hNCpi0inFVdis_stack_8->SetBinContent(18,17.35552);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.44843);
   hNCpi0inFVdis_stack_8->SetBinContent(20,19.04914);
   hNCpi0inFVdis_stack_8->SetBinContent(21,20.51007);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.68834);
   hNCpi0inFVdis_stack_8->SetBinContent(23,21.99924);
   hNCpi0inFVdis_stack_8->SetBinContent(24,18.89402);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.397126);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.532483);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.579858);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.444831);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.265469);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.363216);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.391754);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.422821);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.439051);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.53631);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.461948);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.330732);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.504718);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.521843);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.373479);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.384041);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.450746);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.321315);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.258091);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.453226);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.481277);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.439434);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.530619);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.413077);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,34.52605);
   hCCpi0inFV_stack_10->SetBinContent(2,37.49948);
   hCCpi0inFV_stack_10->SetBinContent(3,33.66069);
   hCCpi0inFV_stack_10->SetBinContent(4,38.81898);
   hCCpi0inFV_stack_10->SetBinContent(5,32.94281);
   hCCpi0inFV_stack_10->SetBinContent(6,28.19265);
   hCCpi0inFV_stack_10->SetBinContent(7,27.90053);
   hCCpi0inFV_stack_10->SetBinContent(8,27.19488);
   hCCpi0inFV_stack_10->SetBinContent(9,29.40259);
   hCCpi0inFV_stack_10->SetBinContent(10,29.87062);
   hCCpi0inFV_stack_10->SetBinContent(11,32.8368);
   hCCpi0inFV_stack_10->SetBinContent(12,32.06856);
   hCCpi0inFV_stack_10->SetBinContent(13,38.19473);
   hCCpi0inFV_stack_10->SetBinContent(14,33.35349);
   hCCpi0inFV_stack_10->SetBinContent(15,29.97048);
   hCCpi0inFV_stack_10->SetBinContent(16,29.90622);
   hCCpi0inFV_stack_10->SetBinContent(17,29.22503);
   hCCpi0inFV_stack_10->SetBinContent(18,24.74432);
   hCCpi0inFV_stack_10->SetBinContent(19,28.61955);
   hCCpi0inFV_stack_10->SetBinContent(20,33.70245);
   hCCpi0inFV_stack_10->SetBinContent(21,35.67683);
   hCCpi0inFV_stack_10->SetBinContent(22,37.97264);
   hCCpi0inFV_stack_10->SetBinContent(23,36.86309);
   hCCpi0inFV_stack_10->SetBinContent(24,32.77781);
   hCCpi0inFV_stack_10->SetBinError(1,2.974555);
   hCCpi0inFV_stack_10->SetBinError(2,3.050379);
   hCCpi0inFV_stack_10->SetBinError(3,2.893963);
   hCCpi0inFV_stack_10->SetBinError(4,3.135602);
   hCCpi0inFV_stack_10->SetBinError(5,2.850794);
   hCCpi0inFV_stack_10->SetBinError(6,2.684814);
   hCCpi0inFV_stack_10->SetBinError(7,2.636917);
   hCCpi0inFV_stack_10->SetBinError(8,2.618906);
   hCCpi0inFV_stack_10->SetBinError(9,2.737148);
   hCCpi0inFV_stack_10->SetBinError(10,2.781814);
   hCCpi0inFV_stack_10->SetBinError(11,2.867027);
   hCCpi0inFV_stack_10->SetBinError(12,2.860092);
   hCCpi0inFV_stack_10->SetBinError(13,3.067009);
   hCCpi0inFV_stack_10->SetBinError(14,2.856649);
   hCCpi0inFV_stack_10->SetBinError(15,2.712632);
   hCCpi0inFV_stack_10->SetBinError(16,2.726321);
   hCCpi0inFV_stack_10->SetBinError(17,2.710004);
   hCCpi0inFV_stack_10->SetBinError(18,2.407081);
   hCCpi0inFV_stack_10->SetBinError(19,2.69834);
   hCCpi0inFV_stack_10->SetBinError(20,2.954377);
   hCCpi0inFV_stack_10->SetBinError(21,3.03779);
   hCCpi0inFV_stack_10->SetBinError(22,3.120747);
   hCCpi0inFV_stack_10->SetBinError(23,3.052728);
   hCCpi0inFV_stack_10->SetBinError(24,2.786864);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,18.95764);
   hNCinFV_stack_11->SetBinContent(2,18.42413);
   hNCinFV_stack_11->SetBinContent(3,20.03312);
   hNCinFV_stack_11->SetBinContent(4,17.5426);
   hNCinFV_stack_11->SetBinContent(5,20.5106);
   hNCinFV_stack_11->SetBinContent(6,15.8434);
   hNCinFV_stack_11->SetBinContent(7,15.90619);
   hNCinFV_stack_11->SetBinContent(8,17.55382);
   hNCinFV_stack_11->SetBinContent(9,18.02285);
   hNCinFV_stack_11->SetBinContent(10,13.87794);
   hNCinFV_stack_11->SetBinContent(11,16.30844);
   hNCinFV_stack_11->SetBinContent(12,22.12575);
   hNCinFV_stack_11->SetBinContent(13,18.61638);
   hNCinFV_stack_11->SetBinContent(14,23.19784);
   hNCinFV_stack_11->SetBinContent(15,23.62654);
   hNCinFV_stack_11->SetBinContent(16,18.41121);
   hNCinFV_stack_11->SetBinContent(17,17.62943);
   hNCinFV_stack_11->SetBinContent(18,18.30978);
   hNCinFV_stack_11->SetBinContent(19,17.5426);
   hNCinFV_stack_11->SetBinContent(20,14.9074);
   hNCinFV_stack_11->SetBinContent(21,16.13214);
   hNCinFV_stack_11->SetBinContent(22,20.27295);
   hNCinFV_stack_11->SetBinContent(23,16.99218);
   hNCinFV_stack_11->SetBinContent(24,17.88386);
   hNCinFV_stack_11->SetBinError(1,2.167273);
   hNCinFV_stack_11->SetBinError(2,2.131661);
   hNCinFV_stack_11->SetBinError(3,2.237536);
   hNCinFV_stack_11->SetBinError(4,2.114351);
   hNCinFV_stack_11->SetBinError(5,2.322777);
   hNCinFV_stack_11->SetBinError(6,1.972951);
   hNCinFV_stack_11->SetBinError(7,1.912997);
   hNCinFV_stack_11->SetBinError(8,2.067967);
   hNCinFV_stack_11->SetBinError(9,2.159143);
   hNCinFV_stack_11->SetBinError(10,1.872493);
   hNCinFV_stack_11->SetBinError(11,2.019405);
   hNCinFV_stack_11->SetBinError(12,2.379475);
   hNCinFV_stack_11->SetBinError(13,2.186164);
   hNCinFV_stack_11->SetBinError(14,2.443374);
   hNCinFV_stack_11->SetBinError(15,2.490078);
   hNCinFV_stack_11->SetBinError(16,2.176535);
   hNCinFV_stack_11->SetBinError(17,2.141146);
   hNCinFV_stack_11->SetBinError(18,2.194527);
   hNCinFV_stack_11->SetBinError(19,2.114351);
   hNCinFV_stack_11->SetBinError(20,1.860137);
   hNCinFV_stack_11->SetBinError(21,1.977222);
   hNCinFV_stack_11->SetBinError(22,2.236731);
   hNCinFV_stack_11->SetBinError(23,2.076238);
   hNCinFV_stack_11->SetBinError(24,2.094811);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,28.47318);
   hnumuCCinFV_stack_12->SetBinContent(2,33.65837);
   hnumuCCinFV_stack_12->SetBinContent(3,21.17582);
   hnumuCCinFV_stack_12->SetBinContent(4,8.056268);
   hnumuCCinFV_stack_12->SetBinContent(5,9.833542);
   hnumuCCinFV_stack_12->SetBinContent(6,10.10924);
   hnumuCCinFV_stack_12->SetBinContent(7,9.959623);
   hnumuCCinFV_stack_12->SetBinContent(8,14.9576);
   hnumuCCinFV_stack_12->SetBinContent(9,12.80042);
   hnumuCCinFV_stack_12->SetBinContent(10,12.68889);
   hnumuCCinFV_stack_12->SetBinContent(11,26.37881);
   hnumuCCinFV_stack_12->SetBinContent(12,28.05253);
   hnumuCCinFV_stack_12->SetBinContent(13,30.62202);
   hnumuCCinFV_stack_12->SetBinContent(14,22.36016);
   hnumuCCinFV_stack_12->SetBinContent(15,19.50094);
   hnumuCCinFV_stack_12->SetBinContent(16,14.61475);
   hnumuCCinFV_stack_12->SetBinContent(17,11.74166);
   hnumuCCinFV_stack_12->SetBinContent(18,10.47549);
   hnumuCCinFV_stack_12->SetBinContent(19,11.96136);
   hnumuCCinFV_stack_12->SetBinContent(20,10.56095);
   hnumuCCinFV_stack_12->SetBinContent(21,11.37258);
   hnumuCCinFV_stack_12->SetBinContent(22,17.66793);
   hnumuCCinFV_stack_12->SetBinContent(23,24.91462);
   hnumuCCinFV_stack_12->SetBinContent(24,37.46704);
   hnumuCCinFV_stack_12->SetBinError(1,2.996275);
   hnumuCCinFV_stack_12->SetBinError(2,4.261813);
   hnumuCCinFV_stack_12->SetBinError(3,2.386919);
   hnumuCCinFV_stack_12->SetBinError(4,1.442246);
   hnumuCCinFV_stack_12->SetBinError(5,1.627626);
   hnumuCCinFV_stack_12->SetBinError(6,1.818394);
   hnumuCCinFV_stack_12->SetBinError(7,1.637031);
   hnumuCCinFV_stack_12->SetBinError(8,2.128193);
   hnumuCCinFV_stack_12->SetBinError(9,2.168287);
   hnumuCCinFV_stack_12->SetBinError(10,1.814259);
   hnumuCCinFV_stack_12->SetBinError(11,3.045655);
   hnumuCCinFV_stack_12->SetBinError(12,3.26008);
   hnumuCCinFV_stack_12->SetBinError(13,3.133088);
   hnumuCCinFV_stack_12->SetBinError(14,2.941409);
   hnumuCCinFV_stack_12->SetBinError(15,2.346037);
   hnumuCCinFV_stack_12->SetBinError(16,1.919457);
   hnumuCCinFV_stack_12->SetBinError(17,2.162736);
   hnumuCCinFV_stack_12->SetBinError(18,2.095286);
   hnumuCCinFV_stack_12->SetBinError(19,1.772438);
   hnumuCCinFV_stack_12->SetBinError(20,1.927608);
   hnumuCCinFV_stack_12->SetBinError(21,2.032466);
   hnumuCCinFV_stack_12->SetBinError(22,2.180963);
   hnumuCCinFV_stack_12->SetBinError(23,3.013841);
   hnumuCCinFV_stack_12->SetBinError(24,3.50115);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.41719);
   hnueCCinFV_stack_13->SetBinContent(2,3.584052);
   hnueCCinFV_stack_13->SetBinContent(3,2.79401);
   hnueCCinFV_stack_13->SetBinContent(4,1.771591);
   hnueCCinFV_stack_13->SetBinContent(5,1.226996);
   hnueCCinFV_stack_13->SetBinContent(6,0.4485508);
   hnueCCinFV_stack_13->SetBinContent(7,1.74772);
   hnueCCinFV_stack_13->SetBinContent(8,1.300873);
   hnueCCinFV_stack_13->SetBinContent(9,1.702514);
   hnueCCinFV_stack_13->SetBinContent(10,1.460988);
   hnueCCinFV_stack_13->SetBinContent(11,1.893015);
   hnueCCinFV_stack_13->SetBinContent(12,1.831478);
   hnueCCinFV_stack_13->SetBinContent(13,2.595431);
   hnueCCinFV_stack_13->SetBinContent(14,1.398225);
   hnueCCinFV_stack_13->SetBinContent(15,1.378608);
   hnueCCinFV_stack_13->SetBinContent(16,0.8290548);
   hnueCCinFV_stack_13->SetBinContent(17,1.839424);
   hnueCCinFV_stack_13->SetBinContent(18,3.247998);
   hnueCCinFV_stack_13->SetBinContent(19,0.5371585);
   hnueCCinFV_stack_13->SetBinContent(20,2.166725);
   hnueCCinFV_stack_13->SetBinContent(21,1.301123);
   hnueCCinFV_stack_13->SetBinContent(22,1.235358);
   hnueCCinFV_stack_13->SetBinContent(23,1.933425);
   hnueCCinFV_stack_13->SetBinContent(24,2.103648);
   hnueCCinFV_stack_13->SetBinError(1,0.5883982);
   hnueCCinFV_stack_13->SetBinError(2,1.710481);
   hnueCCinFV_stack_13->SetBinError(3,0.8745972);
   hnueCCinFV_stack_13->SetBinError(4,0.7476048);
   hnueCCinFV_stack_13->SetBinError(5,0.5656155);
   hnueCCinFV_stack_13->SetBinError(6,0.3195591);
   hnueCCinFV_stack_13->SetBinError(7,0.8111646);
   hnueCCinFV_stack_13->SetBinError(8,0.5334005);
   hnueCCinFV_stack_13->SetBinError(9,0.794498);
   hnueCCinFV_stack_13->SetBinError(10,0.9613102);
   hnueCCinFV_stack_13->SetBinError(11,0.6344145);
   hnueCCinFV_stack_13->SetBinError(12,0.6708438);
   hnueCCinFV_stack_13->SetBinError(13,0.9521914);
   hnueCCinFV_stack_13->SetBinError(14,0.6713744);
   hnueCCinFV_stack_13->SetBinError(15,0.576653);
   hnueCCinFV_stack_13->SetBinError(16,0.4873353);
   hnueCCinFV_stack_13->SetBinError(17,0.7115105);
   hnueCCinFV_stack_13->SetBinError(18,1.5737);
   hnueCCinFV_stack_13->SetBinError(19,0.3929603);
   hnueCCinFV_stack_13->SetBinError(20,1.230297);
   hnueCCinFV_stack_13->SetBinError(21,0.6402175);
   hnueCCinFV_stack_13->SetBinError(22,0.6312753);
   hnueCCinFV_stack_13->SetBinError(23,0.8382154);
   hnueCCinFV_stack_13->SetBinError(24,0.7223215);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__5->SetBinContent(1,260.1135);
   hmcerror__5->SetBinContent(2,275.0114);
   hmcerror__5->SetBinContent(3,266.3859);
   hmcerror__5->SetBinContent(4,233.8264);
   hmcerror__5->SetBinContent(5,238.5815);
   hmcerror__5->SetBinContent(6,223.714);
   hmcerror__5->SetBinContent(7,219.7757);
   hmcerror__5->SetBinContent(8,212.2831);
   hmcerror__5->SetBinContent(9,239.1228);
   hmcerror__5->SetBinContent(10,225.3202);
   hmcerror__5->SetBinContent(11,245.8671);
   hmcerror__5->SetBinContent(12,234.5516);
   hmcerror__5->SetBinContent(13,247.615);
   hmcerror__5->SetBinContent(14,248.0371);
   hmcerror__5->SetBinContent(15,241.7618);
   hmcerror__5->SetBinContent(16,240.5258);
   hmcerror__5->SetBinContent(17,233.9651);
   hmcerror__5->SetBinContent(18,227.1905);
   hmcerror__5->SetBinContent(19,225.4338);
   hmcerror__5->SetBinContent(20,235.8285);
   hmcerror__5->SetBinContent(21,243.9035);
   hmcerror__5->SetBinContent(22,262.4096);
   hmcerror__5->SetBinContent(23,256.4162);
   hmcerror__5->SetBinContent(24,251.1152);
   hmcerror__5->SetBinError(1,73.04532);
   hmcerror__5->SetBinError(2,74.19854);
   hmcerror__5->SetBinError(3,73.83016);
   hmcerror__5->SetBinError(4,67.77462);
   hmcerror__5->SetBinError(5,63.68037);
   hmcerror__5->SetBinError(6,56.23203);
   hmcerror__5->SetBinError(7,59.92329);
   hmcerror__5->SetBinError(8,62.51863);
   hmcerror__5->SetBinError(9,71.32818);
   hmcerror__5->SetBinError(10,61.76137);
   hmcerror__5->SetBinError(11,75.16892);
   hmcerror__5->SetBinError(12,66.02946);
   hmcerror__5->SetBinError(13,69.46006);
   hmcerror__5->SetBinError(14,67.82573);
   hmcerror__5->SetBinError(15,65.12161);
   hmcerror__5->SetBinError(16,67.31661);
   hmcerror__5->SetBinError(17,60.78433);
   hmcerror__5->SetBinError(18,62.6727);
   hmcerror__5->SetBinError(19,61.08897);
   hmcerror__5->SetBinError(20,60.17902);
   hmcerror__5->SetBinError(21,62.78311);
   hmcerror__5->SetBinError(22,75.67401);
   hmcerror__5->SetBinError(23,71.34722);
   hmcerror__5->SetBinError(24,69.3522);
   hmcerror__5->SetBinError(25,0.3895343);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3005[24] = {
   217,
   260,
   208,
   247,
   225,
   206,
   193,
   172,
   174,
   241,
   189,
   173,
   200,
   238,
   204,
   202,
   212,
   172,
   197,
   201,
   212,
   203,
   221,
   207};
   Double_t _felx3005[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3005[24] = {
   14.73092,
   16.12452,
   14.42221,
   15.71623,
   15,
   14.3527,
   13.89244,
   13.11488,
   13.19091,
   15.52417,
   13.74773,
   13.15295,
   14.14214,
   15.42725,
   14.28286,
   14.21267,
   14.56022,
   13.11488,
   14.03567,
   14.17745,
   14.56022,
   14.24781,
   14.86607,
   14.38749};
   Double_t _fehx3005[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3005[24] = {
   14.73092,
   16.12452,
   14.42221,
   15.71623,
   15,
   14.3527,
   13.89244,
   13.11488,
   13.19091,
   15.52417,
   13.74773,
   13.15295,
   14.14214,
   15.42725,
   14.28286,
   14.21267,
   14.56022,
   13.11488,
   14.03567,
   14.17745,
   14.56022,
   14.24781,
   14.86607,
   14.38749};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(147.1612);
   Graph_Graph3005->SetMaximum(287.8485);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3006[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3006[24] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3006[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3006[24] = {
   0.2808209,
   0.2698017,
   0.277155,
   0.2898502,
   0.2669124,
   0.2513568,
   0.2726565,
   0.2945059,
   0.298291,
   0.2741049,
   0.3057299,
   0.2815136,
   0.2805164,
   0.2734499,
   0.2693627,
   0.2798727,
   0.2598009,
   0.2758597,
   0.270984,
   0.2551813,
   0.2574096,
   0.2883812,
   0.2782477,
   0.2761768};
   Double_t _fehx3006[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3006[24] = {
   0.2808209,
   0.2698017,
   0.277155,
   0.2898502,
   0.2669124,
   0.2513568,
   0.2726565,
   0.2945059,
   0.298291,
   0.2741049,
   0.3057299,
   0.2815136,
   0.2805164,
   0.2734499,
   0.2693627,
   0.2798727,
   0.2598009,
   0.2758597,
   0.270984,
   0.2551813,
   0.2574096,
   0.2883812,
   0.2782477,
   0.2761768};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3007[24] = {
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
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3007[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3007[24] = {
   0.2512074,
   0.2447541,
   0.2456917,
   0.2542521,
   0.2373509,
   0.2279928,
   0.2527635,
   0.2637965,
   0.2492204,
   0.2513174,
   0.2533558,
   0.2595306,
   0.2447173,
   0.24553,
   0.2475581,
   0.2481647,
   0.2417353,
   0.2293827,
   0.2383157,
   0.2343139,
   0.2412789,
   0.2463816,
   0.2546765,
   0.2469508};
   Double_t _fehx3007[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3007[24] = {
   0.2512074,
   0.2447541,
   0.2456917,
   0.2542521,
   0.2373509,
   0.2279928,
   0.2527635,
   0.2637965,
   0.2492204,
   0.2513174,
   0.2533558,
   0.2595306,
   0.2447173,
   0.24553,
   0.2475581,
   0.2481647,
   0.2417353,
   0.2293827,
   0.2383157,
   0.2343139,
   0.2412789,
   0.2463816,
   0.2546765,
   0.2469508};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3008[24] = {
   0.8342511,
   0.9454154,
   0.7808222,
   1.056339,
   0.9430739,
   0.9208187,
   0.8781679,
   0.8102387,
   0.7276595,
   1.069589,
   0.768708,
   0.7375777,
   0.8077056,
   0.9595337,
   0.8438059,
   0.8398266,
   0.9061182,
   0.7570738,
   0.8738706,
   0.8523143,
   0.8691961,
   0.7735996,
   0.86188,
   0.8243227};
   Double_t _felx3008[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3008[24] = {
   0.05663266,
   0.05863217,
   0.05414028,
   0.06721326,
   0.06287159,
   0.06415648,
   0.06321191,
   0.06178012,
   0.05516372,
   0.06889828,
   0.05591528,
   0.05607699,
   0.05711341,
   0.06219733,
   0.05907823,
   0.05908999,
   0.06223245,
   0.05772634,
   0.0622607,
   0.06011761,
   0.05969663,
   0.05429605,
   0.05797632,
   0.05729439};
   Double_t _fehx3008[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3008[24] = {
   0.05663266,
   0.05863217,
   0.05414028,
   0.06721326,
   0.06287159,
   0.06415648,
   0.06321191,
   0.06178012,
   0.05516372,
   0.06889828,
   0.05591528,
   0.05607699,
   0.05711341,
   0.06219733,
   0.05907823,
   0.05908999,
   0.06223245,
   0.05772634,
   0.0622607,
   0.06011761,
   0.05969663,
   0.05429605,
   0.05797632,
   0.05729439};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.6258966);
   Graph_Graph3008->SetMaximum(1.185086);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
