#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue May 31 21:15:46 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
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
   pad1->Range(-230.7692,-392.0959,1692.308,41293.89);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hmc__1->SetBinContent(1,9460.891);
   hmc__1->SetBinContent(2,19604.79);
   hmc__1->SetBinContent(3,16005.99);
   hmc__1->SetBinContent(4,12746.62);
   hmc__1->SetBinContent(5,9976.359);
   hmc__1->SetBinContent(6,7963.096);
   hmc__1->SetBinContent(7,6589.632);
   hmc__1->SetBinContent(8,5097.339);
   hmc__1->SetBinContent(9,3832.249);
   hmc__1->SetBinContent(10,2813.922);
   hmc__1->SetBinContent(11,2129.354);
   hmc__1->SetBinContent(12,1646.243);
   hmc__1->SetBinContent(13,1296.798);
   hmc__1->SetBinContent(14,1004.13);
   hmc__1->SetBinContent(15,793.8481);
   hmc__1->SetBinContent(16,585.7494);
   hmc__1->SetBinContent(17,475.8097);
   hmc__1->SetBinContent(18,363.5449);
   hmc__1->SetBinContent(19,296.8171);
   hmc__1->SetBinContent(20,252.8768);
   hmc__1->SetBinContent(21,1673.28);
   hmc__1->SetBinError(1,1238.603);
   hmc__1->SetBinError(2,2701.465);
   hmc__1->SetBinError(3,2084.543);
   hmc__1->SetBinError(4,1704.467);
   hmc__1->SetBinError(5,1256.738);
   hmc__1->SetBinError(6,957.7985);
   hmc__1->SetBinError(7,850.3063);
   hmc__1->SetBinError(8,681.3135);
   hmc__1->SetBinError(9,525.3909);
   hmc__1->SetBinError(10,401.9303);
   hmc__1->SetBinError(11,332.5667);
   hmc__1->SetBinError(12,259.271);
   hmc__1->SetBinError(13,227.7798);
   hmc__1->SetBinError(14,178.1581);
   hmc__1->SetBinError(15,165.8234);
   hmc__1->SetBinError(16,126.2468);
   hmc__1->SetBinError(17,113.9395);
   hmc__1->SetBinError(18,78.59798);
   hmc__1->SetBinError(19,70.36119);
   hmc__1->SetBinError(20,83.78598);
   hmc__1->SetBinError(21,269.1348);
   hmc__1->SetMinimum(-392.0959);
   hmc__1->SetMaximum(39209.59);
   hmc__1->SetEntries(96405.82);
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
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(20585.03);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,1202.408);
   hbadmatch_stack_1->SetBinContent(2,1522.777);
   hbadmatch_stack_1->SetBinContent(3,844.1168);
   hbadmatch_stack_1->SetBinContent(4,494.1955);
   hbadmatch_stack_1->SetBinContent(5,265.4976);
   hbadmatch_stack_1->SetBinContent(6,176.58);
   hbadmatch_stack_1->SetBinContent(7,114.7364);
   hbadmatch_stack_1->SetBinContent(8,89.99895);
   hbadmatch_stack_1->SetBinContent(9,49.89084);
   hbadmatch_stack_1->SetBinContent(10,30.50257);
   hbadmatch_stack_1->SetBinContent(11,24.2097);
   hbadmatch_stack_1->SetBinContent(12,17.92361);
   hbadmatch_stack_1->SetBinContent(13,8.994726);
   hbadmatch_stack_1->SetBinContent(14,6.978765);
   hbadmatch_stack_1->SetBinContent(15,3.586456);
   hbadmatch_stack_1->SetBinContent(16,5.830945);
   hbadmatch_stack_1->SetBinContent(17,1.046954);
   hbadmatch_stack_1->SetBinContent(18,1.151766);
   hbadmatch_stack_1->SetBinContent(19,1.178826);
   hbadmatch_stack_1->SetBinContent(20,4.526893);
   hbadmatch_stack_1->SetBinContent(21,17.12968);
   hbadmatch_stack_1->SetBinError(1,21.9577);
   hbadmatch_stack_1->SetBinError(2,25.61481);
   hbadmatch_stack_1->SetBinError(3,17.86206);
   hbadmatch_stack_1->SetBinError(4,14.87051);
   hbadmatch_stack_1->SetBinError(5,10.5279);
   hbadmatch_stack_1->SetBinError(6,12.11273);
   hbadmatch_stack_1->SetBinError(7,6.624505);
   hbadmatch_stack_1->SetBinError(8,5.911656);
   hbadmatch_stack_1->SetBinError(9,3.832641);
   hbadmatch_stack_1->SetBinError(10,3.010333);
   hbadmatch_stack_1->SetBinError(11,2.861517);
   hbadmatch_stack_1->SetBinError(12,2.466218);
   hbadmatch_stack_1->SetBinError(13,1.704556);
   hbadmatch_stack_1->SetBinError(14,1.723325);
   hbadmatch_stack_1->SetBinError(15,0.9930999);
   hbadmatch_stack_1->SetBinError(16,1.439943);
   hbadmatch_stack_1->SetBinError(17,0.470251);
   hbadmatch_stack_1->SetBinError(18,0.5297371);
   hbadmatch_stack_1->SetBinError(19,0.6170468);
   hbadmatch_stack_1->SetBinError(20,2.438442);
   hbadmatch_stack_1->SetBinError(21,2.587022);
   hbadmatch_stack_1->SetEntries(18491);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,4027.356);
   hext_stack_2->SetBinContent(2,5258.536);
   hext_stack_2->SetBinContent(3,3801.603);
   hext_stack_2->SetBinContent(4,2874.714);
   hext_stack_2->SetBinContent(5,2195.827);
   hext_stack_2->SetBinContent(6,1803.366);
   hext_stack_2->SetBinContent(7,1673.504);
   hext_stack_2->SetBinContent(8,1247.043);
   hext_stack_2->SetBinContent(9,825.4149);
   hext_stack_2->SetBinContent(10,516.37);
   hext_stack_2->SetBinContent(11,354.9766);
   hext_stack_2->SetBinContent(12,262.2576);
   hext_stack_2->SetBinContent(13,195.18);
   hext_stack_2->SetBinContent(14,148.2994);
   hext_stack_2->SetBinContent(15,104.0399);
   hext_stack_2->SetBinContent(16,84.82777);
   hext_stack_2->SetBinContent(17,65.89809);
   hext_stack_2->SetBinContent(18,57.03675);
   hext_stack_2->SetBinContent(19,38.89833);
   hext_stack_2->SetBinContent(20,40.0838);
   hext_stack_2->SetBinContent(21,543.4032);
   hext_stack_2->SetBinError(1,44.01983);
   hext_stack_2->SetBinError(2,49.49307);
   hext_stack_2->SetBinError(3,41.66666);
   hext_stack_2->SetBinError(4,36.14477);
   hext_stack_2->SetBinError(5,31.78091);
   hext_stack_2->SetBinError(6,28.87028);
   hext_stack_2->SetBinError(7,28.20998);
   hext_stack_2->SetBinError(8,24.46694);
   hext_stack_2->SetBinError(9,19.99547);
   hext_stack_2->SetBinError(10,15.72913);
   hext_stack_2->SetBinError(11,13.16821);
   hext_stack_2->SetBinError(12,11.23494);
   hext_stack_2->SetBinError(13,9.711562);
   hext_stack_2->SetBinError(14,8.410724);
   hext_stack_2->SetBinError(15,6.990703);
   hext_stack_2->SetBinError(16,6.281234);
   hext_stack_2->SetBinError(17,5.52653);
   hext_stack_2->SetBinError(18,5.238032);
   hext_stack_2->SetBinError(19,3.939521);
   hext_stack_2->SetBinError(20,4.338625);
   hext_stack_2->SetBinError(21,15.94995);
   hext_stack_2->SetEntries(60612);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,1182.57);
   hdirt_stack_3->SetBinContent(2,1627.675);
   hdirt_stack_3->SetBinContent(3,1012.131);
   hdirt_stack_3->SetBinContent(4,610.2529);
   hdirt_stack_3->SetBinContent(5,382.8488);
   hdirt_stack_3->SetBinContent(6,277.661);
   hdirt_stack_3->SetBinContent(7,208.5114);
   hdirt_stack_3->SetBinContent(8,137.6228);
   hdirt_stack_3->SetBinContent(9,106.5999);
   hdirt_stack_3->SetBinContent(10,84.45602);
   hdirt_stack_3->SetBinContent(11,71.4381);
   hdirt_stack_3->SetBinContent(12,53.66826);
   hdirt_stack_3->SetBinContent(13,47.27328);
   hdirt_stack_3->SetBinContent(14,34.59579);
   hdirt_stack_3->SetBinContent(15,30.37661);
   hdirt_stack_3->SetBinContent(16,24.67026);
   hdirt_stack_3->SetBinContent(17,22.18856);
   hdirt_stack_3->SetBinContent(18,14.21435);
   hdirt_stack_3->SetBinContent(19,16.22532);
   hdirt_stack_3->SetBinContent(20,14.4877);
   hdirt_stack_3->SetBinContent(21,90.71759);
   hdirt_stack_3->SetBinError(1,21.6314);
   hdirt_stack_3->SetBinError(2,25.98575);
   hdirt_stack_3->SetBinError(3,20.92247);
   hdirt_stack_3->SetBinError(4,15.57265);
   hdirt_stack_3->SetBinError(5,11.70944);
   hdirt_stack_3->SetBinError(6,10.66587);
   hdirt_stack_3->SetBinError(7,9.281899);
   hdirt_stack_3->SetBinError(8,7.392678);
   hdirt_stack_3->SetBinError(9,6.025079);
   hdirt_stack_3->SetBinError(10,5.877375);
   hdirt_stack_3->SetBinError(11,5.701042);
   hdirt_stack_3->SetBinError(12,5.410076);
   hdirt_stack_3->SetBinError(13,4.47802);
   hdirt_stack_3->SetBinError(14,3.218528);
   hdirt_stack_3->SetBinError(15,3.749369);
   hdirt_stack_3->SetBinError(16,3.350859);
   hdirt_stack_3->SetBinError(17,2.695526);
   hdirt_stack_3->SetBinError(18,1.956518);
   hdirt_stack_3->SetBinError(19,2.354505);
   hdirt_stack_3->SetBinError(20,2.838938);
   hdirt_stack_3->SetBinError(21,6.408844);
   hdirt_stack_3->SetEntries(24330);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,955.6935);
   houtFV_stack_4->SetBinContent(2,2049.441);
   houtFV_stack_4->SetBinContent(3,1269.328);
   houtFV_stack_4->SetBinContent(4,884.1786);
   houtFV_stack_4->SetBinContent(5,606.8672);
   houtFV_stack_4->SetBinContent(6,439.3474);
   houtFV_stack_4->SetBinContent(7,332.3646);
   houtFV_stack_4->SetBinContent(8,264.2133);
   houtFV_stack_4->SetBinContent(9,196.5452);
   houtFV_stack_4->SetBinContent(10,143.6494);
   houtFV_stack_4->SetBinContent(11,130.1775);
   houtFV_stack_4->SetBinContent(12,101.9711);
   houtFV_stack_4->SetBinContent(13,80.14993);
   houtFV_stack_4->SetBinContent(14,71.45273);
   houtFV_stack_4->SetBinContent(15,46.04209);
   houtFV_stack_4->SetBinContent(16,33.94509);
   houtFV_stack_4->SetBinContent(17,29.63629);
   houtFV_stack_4->SetBinContent(18,20.48143);
   houtFV_stack_4->SetBinContent(19,14.3476);
   houtFV_stack_4->SetBinContent(20,12.35529);
   houtFV_stack_4->SetBinContent(21,74.86762);
   houtFV_stack_4->SetBinError(1,16.40618);
   houtFV_stack_4->SetBinError(2,25.00707);
   houtFV_stack_4->SetBinError(3,20.08987);
   houtFV_stack_4->SetBinError(4,17.63113);
   houtFV_stack_4->SetBinError(5,14.94085);
   houtFV_stack_4->SetBinError(6,13.50092);
   houtFV_stack_4->SetBinError(7,12.40515);
   houtFV_stack_4->SetBinError(8,11.097);
   houtFV_stack_4->SetBinError(9,10.3742);
   houtFV_stack_4->SetBinError(10,8.294873);
   houtFV_stack_4->SetBinError(11,8.13187);
   houtFV_stack_4->SetBinError(12,7.140937);
   houtFV_stack_4->SetBinError(13,6.193175);
   houtFV_stack_4->SetBinError(14,6.623224);
   houtFV_stack_4->SetBinError(15,5.029352);
   houtFV_stack_4->SetBinError(16,3.377354);
   houtFV_stack_4->SetBinError(17,3.298435);
   houtFV_stack_4->SetBinError(18,3.176493);
   houtFV_stack_4->SetBinError(19,2.964885);
   houtFV_stack_4->SetBinError(20,2.118122);
   houtFV_stack_4->SetBinError(21,5.886994);
   houtFV_stack_4->SetEntries(30909);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.834611);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,46.18299);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,38.59715);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,25.94777);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,14.29533);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,10.27688);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.897381);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.081466);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.899616);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,2.847884);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.854194);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.310972);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.282904);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.08694);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.826462);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.077562);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8719288);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.222379);
   hNCpi0inFVcoh_stack_5->SetBinError(3,2.039773);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.67355);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.289236);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.114323);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7487718);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5450076);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5157142);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.58459);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4286872);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3399938);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2864585);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3001705);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4644925);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4719735);
   hNCpi0inFVcoh_stack_5->SetEntries(3116);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,385.2459);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,1236.722);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,723.3358);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,418.1376);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,225.7865);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,135.5767);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,91.59273);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,61.62367);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,40.14127);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,26.92292);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,24.2384);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,17.54854);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,12.70485);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,10.40376);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,8.937666);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,5.857032);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,6.021608);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,3.571216);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,4.005027);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,3.723006);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,21.73602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,6.430404);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,11.403);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,8.789373);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,6.701289);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.903496);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.73989);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.077681);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.696408);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.036431);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,1.601856);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.673919);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.390927);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.200197);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.0705);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.9567112);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.7984543);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.8145009);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.6234526);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.5913745);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.6532275);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.527883);
   hNCpi0inFVnoncoh_stack_6->SetEntries(64545);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,63.99717);
   hCCpi0inFV_stack_7->SetBinContent(2,474.4234);
   hCCpi0inFV_stack_7->SetBinContent(3,704.5289);
   hCCpi0inFV_stack_7->SetBinContent(4,748.6552);
   hCCpi0inFV_stack_7->SetBinContent(5,724.7401);
   hCCpi0inFV_stack_7->SetBinContent(6,635.7502);
   hCCpi0inFV_stack_7->SetBinContent(7,561.085);
   hCCpi0inFV_stack_7->SetBinContent(8,461.7384);
   hCCpi0inFV_stack_7->SetBinContent(9,378.7721);
   hCCpi0inFV_stack_7->SetBinContent(10,299.1762);
   hCCpi0inFV_stack_7->SetBinContent(11,250.2493);
   hCCpi0inFV_stack_7->SetBinContent(12,211.4095);
   hCCpi0inFV_stack_7->SetBinContent(13,159.355);
   hCCpi0inFV_stack_7->SetBinContent(14,122.8874);
   hCCpi0inFV_stack_7->SetBinContent(15,100.8393);
   hCCpi0inFV_stack_7->SetBinContent(16,88.5658);
   hCCpi0inFV_stack_7->SetBinContent(17,68.47516);
   hCCpi0inFV_stack_7->SetBinContent(18,63.2571);
   hCCpi0inFV_stack_7->SetBinContent(19,51.4435);
   hCCpi0inFV_stack_7->SetBinContent(20,45.49228);
   hCCpi0inFV_stack_7->SetBinContent(21,307.9609);
   hCCpi0inFV_stack_7->SetBinError(1,4.466124);
   hCCpi0inFV_stack_7->SetBinError(2,10.90779);
   hCCpi0inFV_stack_7->SetBinError(3,13.28625);
   hCCpi0inFV_stack_7->SetBinError(4,13.72786);
   hCCpi0inFV_stack_7->SetBinError(5,13.4801);
   hCCpi0inFV_stack_7->SetBinError(6,12.61225);
   hCCpi0inFV_stack_7->SetBinError(7,11.87316);
   hCCpi0inFV_stack_7->SetBinError(8,10.78768);
   hCCpi0inFV_stack_7->SetBinError(9,9.748333);
   hCCpi0inFV_stack_7->SetBinError(10,8.620069);
   hCCpi0inFV_stack_7->SetBinError(11,7.902449);
   hCCpi0inFV_stack_7->SetBinError(12,7.307627);
   hCCpi0inFV_stack_7->SetBinError(13,6.336422);
   hCCpi0inFV_stack_7->SetBinError(14,5.513442);
   hCCpi0inFV_stack_7->SetBinError(15,5.056754);
   hCCpi0inFV_stack_7->SetBinError(16,4.685454);
   hCCpi0inFV_stack_7->SetBinError(17,4.164492);
   hCCpi0inFV_stack_7->SetBinError(18,3.979864);
   hCCpi0inFV_stack_7->SetBinError(19,3.60268);
   hCCpi0inFV_stack_7->SetBinError(20,3.335224);
   hCCpi0inFV_stack_7->SetBinError(21,8.842812);
   hCCpi0inFV_stack_7->SetEntries(27943);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,384.797);
   hNCinFV_stack_8->SetBinContent(2,1387.714);
   hNCinFV_stack_8->SetBinContent(3,728.7175);
   hNCinFV_stack_8->SetBinContent(4,367.5937);
   hNCinFV_stack_8->SetBinContent(5,195.869);
   hNCinFV_stack_8->SetBinContent(6,114.0833);
   hNCinFV_stack_8->SetBinContent(7,75.05982);
   hNCinFV_stack_8->SetBinContent(8,39.51259);
   hNCinFV_stack_8->SetBinContent(9,32.76495);
   hNCinFV_stack_8->SetBinContent(10,18.49755);
   hNCinFV_stack_8->SetBinContent(11,15.28852);
   hNCinFV_stack_8->SetBinContent(12,10.88071);
   hNCinFV_stack_8->SetBinContent(13,8.526543);
   hNCinFV_stack_8->SetBinContent(14,7.168954);
   hNCinFV_stack_8->SetBinContent(15,5.328593);
   hNCinFV_stack_8->SetBinContent(16,2.681084);
   hNCinFV_stack_8->SetBinContent(17,2.252388);
   hNCinFV_stack_8->SetBinContent(18,1.802323);
   hNCinFV_stack_8->SetBinContent(19,1.607298);
   hNCinFV_stack_8->SetBinContent(20,0.5867651);
   hNCinFV_stack_8->SetBinContent(21,6.640513);
   hNCinFV_stack_8->SetBinError(1,9.769592);
   hNCinFV_stack_8->SetBinError(2,18.61573);
   hNCinFV_stack_8->SetBinError(3,13.48063);
   hNCinFV_stack_8->SetBinError(4,9.588238);
   hNCinFV_stack_8->SetBinError(5,7.118332);
   hNCinFV_stack_8->SetBinError(6,5.338112);
   hNCinFV_stack_8->SetBinError(7,4.340414);
   hNCinFV_stack_8->SetBinError(8,3.13802);
   hNCinFV_stack_8->SetBinError(9,2.937958);
   hNCinFV_stack_8->SetBinError(10,2.170892);
   hNCinFV_stack_8->SetBinError(11,1.982287);
   hNCinFV_stack_8->SetBinError(12,1.722426);
   hNCinFV_stack_8->SetBinError(13,1.425372);
   hNCinFV_stack_8->SetBinError(14,1.358253);
   hNCinFV_stack_8->SetBinError(15,1.178633);
   hNCinFV_stack_8->SetBinError(16,0.8779318);
   hNCinFV_stack_8->SetBinError(17,0.7350883);
   hNCinFV_stack_8->SetBinError(18,0.7070809);
   hNCinFV_stack_8->SetBinError(19,0.6796534);
   hNCinFV_stack_8->SetBinError(20,0.3387718);
   hNCinFV_stack_8->SetBinError(21,1.30144);
   hNCinFV_stack_8->SetEntries(14605);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,1244.213);
   hnumuCCinFV_stack_9->SetBinContent(2,5966.34);
   hnumuCCinFV_stack_9->SetBinContent(3,6848.102);
   hnumuCCinFV_stack_9->SetBinContent(4,6284.062);
   hnumuCCinFV_stack_9->SetBinContent(5,5335.898);
   hnumuCCinFV_stack_9->SetBinContent(6,4338.994);
   hnumuCCinFV_stack_9->SetBinContent(7,3501.814);
   hnumuCCinFV_stack_9->SetBinContent(8,2766.086);
   hnumuCCinFV_stack_9->SetBinContent(9,2175.206);
   hnumuCCinFV_stack_9->SetBinContent(10,1665.199);
   hnumuCCinFV_stack_9->SetBinContent(11,1236.68);
   hnumuCCinFV_stack_9->SetBinContent(12,950.7568);
   hnumuCCinFV_stack_9->SetBinContent(13,768.6866);
   hnumuCCinFV_stack_9->SetBinContent(14,581.3774);
   hnumuCCinFV_stack_9->SetBinContent(15,482.5614);
   hnumuCCinFV_stack_9->SetBinContent(16,327.71);
   hnumuCCinFV_stack_9->SetBinContent(17,270.8356);
   hnumuCCinFV_stack_9->SetBinContent(18,190.9634);
   hnumuCCinFV_stack_9->SetBinContent(19,163.7727);
   hnumuCCinFV_stack_9->SetBinContent(20,125.4832);
   hnumuCCinFV_stack_9->SetBinContent(21,551.6708);
   hnumuCCinFV_stack_9->SetBinError(1,25.29208);
   hnumuCCinFV_stack_9->SetBinError(2,54.02982);
   hnumuCCinFV_stack_9->SetBinError(3,54.07448);
   hnumuCCinFV_stack_9->SetBinError(4,50.55678);
   hnumuCCinFV_stack_9->SetBinError(5,46.55586);
   hnumuCCinFV_stack_9->SetBinError(6,43.29639);
   hnumuCCinFV_stack_9->SetBinError(7,39.33997);
   hnumuCCinFV_stack_9->SetBinError(8,35.82171);
   hnumuCCinFV_stack_9->SetBinError(9,31.89793);
   hnumuCCinFV_stack_9->SetBinError(10,28.26603);
   hnumuCCinFV_stack_9->SetBinError(11,23.79219);
   hnumuCCinFV_stack_9->SetBinError(12,20.8569);
   hnumuCCinFV_stack_9->SetBinError(13,21.06052);
   hnumuCCinFV_stack_9->SetBinError(14,16.77647);
   hnumuCCinFV_stack_9->SetBinError(15,16.87113);
   hnumuCCinFV_stack_9->SetBinError(16,13.16996);
   hnumuCCinFV_stack_9->SetBinError(17,12.52614);
   hnumuCCinFV_stack_9->SetBinError(18,9.813475);
   hnumuCCinFV_stack_9->SetBinError(19,9.24171);
   hnumuCCinFV_stack_9->SetBinError(20,9.449815);
   hnumuCCinFV_stack_9->SetBinError(21,15.92013);
   hnumuCCinFV_stack_9->SetEntries(168676);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(1,6.776377);
   hnueCCinFV_stack_10->SetBinContent(2,34.98116);
   hnueCCinFV_stack_10->SetBinContent(3,35.53305);
   hnueCCinFV_stack_10->SetBinContent(4,38.88282);
   hnueCCinFV_stack_10->SetBinContent(5,28.72955);
   hnueCCinFV_stack_10->SetBinContent(6,31.46082);
   hnueCCinFV_stack_10->SetBinContent(7,25.06722);
   hnueCCinFV_stack_10->SetBinContent(8,26.41913);
   hnueCCinFV_stack_10->SetBinContent(9,24.01423);
   hnueCCinFV_stack_10->SetBinContent(10,26.29999);
   hnueCCinFV_stack_10->SetBinContent(11,20.24132);
   hnueCCinFV_stack_10->SetBinContent(12,18.51606);
   hnueCCinFV_stack_10->SetBinContent(13,14.64442);
   hnueCCinFV_stack_10->SetBinContent(14,19.87913);
   hnueCCinFV_stack_10->SetBinContent(15,10.30965);
   hnueCCinFV_stack_10->SetBinContent(16,10.72743);
   hnueCCinFV_stack_10->SetBinContent(17,8.576888);
   hnueCCinFV_stack_10->SetBinContent(18,10.8576);
   hnueCCinFV_stack_10->SetBinContent(19,5.185442);
   hnueCCinFV_stack_10->SetBinContent(20,5.970484);
   hnueCCinFV_stack_10->SetBinContent(21,57.07646);
   hnueCCinFV_stack_10->SetBinError(1,2.061914);
   hnueCCinFV_stack_10->SetBinError(2,3.95946);
   hnueCCinFV_stack_10->SetBinError(3,3.660927);
   hnueCCinFV_stack_10->SetBinError(4,3.70854);
   hnueCCinFV_stack_10->SetBinError(5,3.134471);
   hnueCCinFV_stack_10->SetBinError(6,3.248114);
   hnueCCinFV_stack_10->SetBinError(7,2.688637);
   hnueCCinFV_stack_10->SetBinError(8,3.217505);
   hnueCCinFV_stack_10->SetBinError(9,2.67319);
   hnueCCinFV_stack_10->SetBinError(10,4.12824);
   hnueCCinFV_stack_10->SetBinError(11,2.274645);
   hnueCCinFV_stack_10->SetBinError(12,2.621421);
   hnueCCinFV_stack_10->SetBinError(13,1.978868);
   hnueCCinFV_stack_10->SetBinError(14,3.910594);
   hnueCCinFV_stack_10->SetBinError(15,1.58101);
   hnueCCinFV_stack_10->SetBinError(16,1.836435);
   hnueCCinFV_stack_10->SetBinError(17,1.831067);
   hnueCCinFV_stack_10->SetBinError(18,2.609876);
   hnueCCinFV_stack_10->SetBinError(19,1.230324);
   hnueCCinFV_stack_10->SetBinError(20,1.259571);
   hnueCCinFV_stack_10->SetBinError(21,4.903851);
   hnueCCinFV_stack_10->SetEntries(1752);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_0p_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__2->SetBinContent(1,9460.891);
   hmcerror__2->SetBinContent(2,19604.79);
   hmcerror__2->SetBinContent(3,16005.99);
   hmcerror__2->SetBinContent(4,12746.62);
   hmcerror__2->SetBinContent(5,9976.359);
   hmcerror__2->SetBinContent(6,7963.096);
   hmcerror__2->SetBinContent(7,6589.632);
   hmcerror__2->SetBinContent(8,5097.339);
   hmcerror__2->SetBinContent(9,3832.249);
   hmcerror__2->SetBinContent(10,2813.922);
   hmcerror__2->SetBinContent(11,2129.354);
   hmcerror__2->SetBinContent(12,1646.243);
   hmcerror__2->SetBinContent(13,1296.798);
   hmcerror__2->SetBinContent(14,1004.13);
   hmcerror__2->SetBinContent(15,793.8481);
   hmcerror__2->SetBinContent(16,585.7494);
   hmcerror__2->SetBinContent(17,475.8097);
   hmcerror__2->SetBinContent(18,363.5449);
   hmcerror__2->SetBinContent(19,296.8171);
   hmcerror__2->SetBinContent(20,252.8768);
   hmcerror__2->SetBinContent(21,1673.28);
   hmcerror__2->SetBinError(1,1238.603);
   hmcerror__2->SetBinError(2,2701.465);
   hmcerror__2->SetBinError(3,2084.543);
   hmcerror__2->SetBinError(4,1704.467);
   hmcerror__2->SetBinError(5,1256.738);
   hmcerror__2->SetBinError(6,957.7985);
   hmcerror__2->SetBinError(7,850.3063);
   hmcerror__2->SetBinError(8,681.3135);
   hmcerror__2->SetBinError(9,525.3909);
   hmcerror__2->SetBinError(10,401.9303);
   hmcerror__2->SetBinError(11,332.5667);
   hmcerror__2->SetBinError(12,259.271);
   hmcerror__2->SetBinError(13,227.7798);
   hmcerror__2->SetBinError(14,178.1581);
   hmcerror__2->SetBinError(15,165.8234);
   hmcerror__2->SetBinError(16,126.2468);
   hmcerror__2->SetBinError(17,113.9395);
   hmcerror__2->SetBinError(18,78.59798);
   hmcerror__2->SetBinError(19,70.36119);
   hmcerror__2->SetBinError(20,83.78598);
   hmcerror__2->SetBinError(21,269.1348);
   hmcerror__2->SetEntries(96405.82);

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
   8465,
   19523,
   16582,
   13646,
   11031,
   8670,
   6865,
   5406,
   3962,
   3008,
   2407,
   1749,
   1336,
   993,
   768,
   596,
   462,
   361,
   307,
   263};
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
   92.00543,
   139.7247,
   128.7711,
   116.8161,
   105.0286,
   93.11283,
   82.8553,
   73.52551,
   62.94442,
   54.84524,
   49.06119,
   41.82105,
   36.55133,
   31.5119,
   27.71281,
   24.41311,
   21.49419,
   19,
   17.52142,
   16.21727};
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
   92.00543,
   139.7247,
   128.7711,
   116.8161,
   105.0286,
   93.11283,
   82.8553,
   73.52551,
   62.94442,
   54.84524,
   49.06119,
   41.82105,
   36.55133,
   31.5119,
   27.71281,
   24.41311,
   21.49419,
   19,
   17.52142,
   16.21727};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(222.1045);
   Graph_Graph3001->SetMaximum(21604.32);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.13","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 106400.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4866.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 25575.2","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5959.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7682.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  167.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3442.1","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6214.8","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 3400.7","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 45224.7","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 403.1","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("generic_0p_bnb_12_visible_energy_all");
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
   0.1309182,
   0.1377961,
   0.1302351,
   0.1337192,
   0.1259716,
   0.1202797,
   0.129037,
   0.1336606,
   0.1370973,
   0.1428363,
   0.156182,
   0.1574925,
   0.1756478,
   0.1774252,
   0.2088856,
   0.2155305,
   0.2394644,
   0.2161989,
   0.2370523,
   0.3313312};
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
   0.1309182,
   0.1377961,
   0.1302351,
   0.1337192,
   0.1259716,
   0.1202797,
   0.129037,
   0.1336606,
   0.1370973,
   0.1428363,
   0.156182,
   0.1574925,
   0.1756478,
   0.1774252,
   0.2088856,
   0.2155305,
   0.2394644,
   0.2161989,
   0.2370523,
   0.3313312};
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
   Graph_Graph3002->GetXaxis()->SetTitle("Visible Energy [MeV]");
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
   0.09460416,
   0.1160096,
   0.1123436,
   0.1107053,
   0.1103934,
   0.1104994,
   0.1126954,
   0.1183911,
   0.1241359,
   0.1345519,
   0.1343109,
   0.1406331,
   0.1496076,
   0.1472805,
   0.1675768,
   0.1604762,
   0.1652434,
   0.151485,
   0.1583091,
   0.1818296};
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
   0.09460416,
   0.1160096,
   0.1123436,
   0.1107053,
   0.1103934,
   0.1104994,
   0.1126954,
   0.1183911,
   0.1241359,
   0.1345519,
   0.1343109,
   0.1406331,
   0.1496076,
   0.1472805,
   0.1675768,
   0.1604762,
   0.1652434,
   0.151485,
   0.1583091,
   0.1818296};
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
   0.8947361,
   0.9958279,
   1.035987,
   1.070558,
   1.105714,
   1.088772,
   1.041788,
   1.060553,
   1.033858,
   1.068971,
   1.13039,
   1.062419,
   1.03023,
   0.9889155,
   0.9674394,
   1.0175,
   0.9709764,
   0.9929999,
   1.034307,
   1.040032};
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
   0.009724817,
   0.00712707,
   0.008045182,
   0.009164476,
   0.01052775,
   0.01169304,
   0.01257358,
   0.01442429,
   0.01642493,
   0.01949067,
   0.02304041,
   0.02540393,
   0.02818583,
   0.03138229,
   0.03490946,
   0.04167842,
   0.04517391,
   0.05226315,
   0.05903101,
   0.06413112};
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
   0.009724817,
   0.00712707,
   0.008045182,
   0.009164476,
   0.01052775,
   0.01169304,
   0.01257358,
   0.01442429,
   0.01642493,
   0.01949067,
   0.02304041,
   0.02540393,
   0.02818583,
   0.03138229,
   0.03490946,
   0.04167842,
   0.04517391,
   0.05226315,
   0.05903101,
   0.06413112};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.8581693);
   Graph_Graph3004->SetMaximum(1.180272);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_0p_bnb_12_visible_energy_all",20,0,1500);

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
