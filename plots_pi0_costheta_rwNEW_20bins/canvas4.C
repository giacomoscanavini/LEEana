#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Feb 17 19:54:23 2023) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-18.43725,1.25641,2038.772);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__10->SetBinContent(1,87.56819);
   hmc__10->SetBinContent(2,70.94797);
   hmc__10->SetBinContent(3,65.54826);
   hmc__10->SetBinContent(4,62.40201);
   hmc__10->SetBinContent(5,68.03775);
   hmc__10->SetBinContent(6,64.97687);
   hmc__10->SetBinContent(7,53.89306);
   hmc__10->SetBinContent(8,64.12112);
   hmc__10->SetBinContent(9,82.02976);
   hmc__10->SetBinContent(10,86.85717);
   hmc__10->SetBinContent(11,98.93164);
   hmc__10->SetBinContent(12,111.3291);
   hmc__10->SetBinContent(13,136.8214);
   hmc__10->SetBinContent(14,159.0352);
   hmc__10->SetBinContent(15,194.0107);
   hmc__10->SetBinContent(16,257.8028);
   hmc__10->SetBinContent(17,328.7592);
   hmc__10->SetBinContent(18,407.2339);
   hmc__10->SetBinContent(19,587.9365);
   hmc__10->SetBinContent(20,921.8624);
   hmc__10->SetBinError(1,30.49798);
   hmc__10->SetBinError(2,22.03294);
   hmc__10->SetBinError(3,21.35331);
   hmc__10->SetBinError(4,21.85169);
   hmc__10->SetBinError(5,21.97708);
   hmc__10->SetBinError(6,21.69501);
   hmc__10->SetBinError(7,18.1297);
   hmc__10->SetBinError(8,21.20177);
   hmc__10->SetBinError(9,23.69883);
   hmc__10->SetBinError(10,27.13932);
   hmc__10->SetBinError(11,25.77661);
   hmc__10->SetBinError(12,32.81317);
   hmc__10->SetBinError(13,42.46544);
   hmc__10->SetBinError(14,43.62241);
   hmc__10->SetBinError(15,52.31328);
   hmc__10->SetBinError(16,67.82678);
   hmc__10->SetBinError(17,86.95281);
   hmc__10->SetBinError(18,106.8194);
   hmc__10->SetBinError(19,128.753);
   hmc__10->SetBinError(20,214.8321);
   hmc__10->SetBinError(21,0.3895343);
   hmc__10->SetMinimum(-18.43725);
   hmc__10->SetMaximum(1935.911);
   hmc__10->SetEntries(3864.24);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,-1,1);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(967.9555);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.72588);
   hbadmatch_stack_1->SetBinContent(2,2.685642);
   hbadmatch_stack_1->SetBinContent(3,2.833118);
   hbadmatch_stack_1->SetBinContent(4,1.399302);
   hbadmatch_stack_1->SetBinContent(5,1.81138);
   hbadmatch_stack_1->SetBinContent(6,3.062922);
   hbadmatch_stack_1->SetBinContent(7,0.785171);
   hbadmatch_stack_1->SetBinContent(8,1.870968);
   hbadmatch_stack_1->SetBinContent(9,3.467715);
   hbadmatch_stack_1->SetBinContent(10,1.673614);
   hbadmatch_stack_1->SetBinContent(11,5.334047);
   hbadmatch_stack_1->SetBinContent(12,4.795072);
   hbadmatch_stack_1->SetBinContent(13,3.554773);
   hbadmatch_stack_1->SetBinContent(14,3.867042);
   hbadmatch_stack_1->SetBinContent(15,3.469623);
   hbadmatch_stack_1->SetBinContent(16,7.348645);
   hbadmatch_stack_1->SetBinContent(17,6.57407);
   hbadmatch_stack_1->SetBinContent(18,10.39477);
   hbadmatch_stack_1->SetBinContent(19,9.704586);
   hbadmatch_stack_1->SetBinContent(20,20.59502);
   hbadmatch_stack_1->SetBinError(1,1.013376);
   hbadmatch_stack_1->SetBinError(2,1.745105);
   hbadmatch_stack_1->SetBinError(3,0.8449505);
   hbadmatch_stack_1->SetBinError(4,0.5293657);
   hbadmatch_stack_1->SetBinError(5,0.7632144);
   hbadmatch_stack_1->SetBinError(6,0.9510356);
   hbadmatch_stack_1->SetBinError(7,0.3925882);
   hbadmatch_stack_1->SetBinError(8,0.6756805);
   hbadmatch_stack_1->SetBinError(9,1.011386);
   hbadmatch_stack_1->SetBinError(10,0.7073693);
   hbadmatch_stack_1->SetBinError(11,1.932416);
   hbadmatch_stack_1->SetBinError(12,1.272129);
   hbadmatch_stack_1->SetBinError(13,1.019597);
   hbadmatch_stack_1->SetBinError(14,1.079373);
   hbadmatch_stack_1->SetBinError(15,0.9739464);
   hbadmatch_stack_1->SetBinError(16,1.394694);
   hbadmatch_stack_1->SetBinError(17,1.337908);
   hbadmatch_stack_1->SetBinError(18,1.64797);
   hbadmatch_stack_1->SetBinError(19,1.629452);
   hbadmatch_stack_1->SetBinError(20,2.658601);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,12.28288);
   hext_stack_2->SetBinContent(2,10.5671);
   hext_stack_2->SetBinContent(3,8.407247);
   hext_stack_2->SetBinContent(4,10.66367);
   hext_stack_2->SetBinContent(5,10.10703);
   hext_stack_2->SetBinContent(6,12.52785);
   hext_stack_2->SetBinContent(7,6.971204);
   hext_stack_2->SetBinContent(8,12.02469);
   hext_stack_2->SetBinContent(9,18.29525);
   hext_stack_2->SetBinContent(10,16.1194);
   hext_stack_2->SetBinContent(11,23.59811);
   hext_stack_2->SetBinContent(12,22.14053);
   hext_stack_2->SetBinContent(13,22.3552);
   hext_stack_2->SetBinContent(14,31.09283);
   hext_stack_2->SetBinContent(15,31.60594);
   hext_stack_2->SetBinContent(16,31.11002);
   hext_stack_2->SetBinContent(17,36.34227);
   hext_stack_2->SetBinContent(18,35.83916);
   hext_stack_2->SetBinContent(19,58.0299);
   hext_stack_2->SetBinContent(20,67.36449);
   hext_stack_2->SetBinError(1,2.452317);
   hext_stack_2->SetBinError(2,2.34386);
   hext_stack_2->SetBinError(3,2.003079);
   hext_stack_2->SetBinError(4,2.269662);
   hext_stack_2->SetBinError(5,2.112691);
   hext_stack_2->SetBinError(6,2.392212);
   hext_stack_2->SetBinError(7,1.732839);
   hext_stack_2->SetBinError(8,2.428923);
   hext_stack_2->SetBinError(9,2.880709);
   hext_stack_2->SetBinError(10,2.597709);
   hext_stack_2->SetBinError(11,3.322554);
   hext_stack_2->SetBinError(12,3.260886);
   hext_stack_2->SetBinError(13,3.056983);
   hext_stack_2->SetBinError(14,3.924243);
   hext_stack_2->SetBinError(15,3.832123);
   hext_stack_2->SetBinError(16,3.651102);
   hext_stack_2->SetBinError(17,3.993151);
   hext_stack_2->SetBinError(18,3.846016);
   hext_stack_2->SetBinError(19,5.034602);
   hext_stack_2->SetBinError(20,5.587376);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.898887);
   hdirt_stack_3->SetBinContent(2,0.9430165);
   hdirt_stack_3->SetBinContent(3,1.961211);
   hdirt_stack_3->SetBinContent(4,3.19507);
   hdirt_stack_3->SetBinContent(5,0.6688038);
   hdirt_stack_3->SetBinContent(6,1.430615);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,2.134555);
   hdirt_stack_3->SetBinContent(9,1.179927);
   hdirt_stack_3->SetBinContent(10,0.4794586);
   hdirt_stack_3->SetBinContent(11,1.651058);
   hdirt_stack_3->SetBinContent(12,2.667917);
   hdirt_stack_3->SetBinContent(13,3.068294);
   hdirt_stack_3->SetBinContent(14,2.493926);
   hdirt_stack_3->SetBinContent(15,1.6785);
   hdirt_stack_3->SetBinContent(16,4.201101);
   hdirt_stack_3->SetBinContent(17,6.334413);
   hdirt_stack_3->SetBinContent(18,6.552585);
   hdirt_stack_3->SetBinContent(19,5.50254);
   hdirt_stack_3->SetBinContent(20,8.573397);
   hdirt_stack_3->SetBinError(1,0.6057332);
   hdirt_stack_3->SetBinError(2,0.4298722);
   hdirt_stack_3->SetBinError(3,0.8106537);
   hdirt_stack_3->SetBinError(4,1.232008);
   hdirt_stack_3->SetBinError(5,0.4240956);
   hdirt_stack_3->SetBinError(6,0.6095214);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.786332);
   hdirt_stack_3->SetBinError(9,0.4862253);
   hdirt_stack_3->SetBinError(10,0.3403063);
   hdirt_stack_3->SetBinError(11,0.6984735);
   hdirt_stack_3->SetBinError(12,0.8727352);
   hdirt_stack_3->SetBinError(13,0.9365159);
   hdirt_stack_3->SetBinError(14,0.8073456);
   hdirt_stack_3->SetBinError(15,0.6520188);
   hdirt_stack_3->SetBinError(16,0.9705757);
   hdirt_stack_3->SetBinError(17,1.599221);
   hdirt_stack_3->SetBinError(18,1.355913);
   hdirt_stack_3->SetBinError(19,1.311937);
   hdirt_stack_3->SetBinError(20,1.586924);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,12.9891);
   houtFV_stack_4->SetBinContent(2,12.9945);
   houtFV_stack_4->SetBinContent(3,11.38331);
   houtFV_stack_4->SetBinContent(4,10.67469);
   houtFV_stack_4->SetBinContent(5,13.14095);
   houtFV_stack_4->SetBinContent(6,11.81894);
   houtFV_stack_4->SetBinContent(7,10.26315);
   houtFV_stack_4->SetBinContent(8,9.444297);
   houtFV_stack_4->SetBinContent(9,10.50376);
   houtFV_stack_4->SetBinContent(10,13.00613);
   houtFV_stack_4->SetBinContent(11,14.42128);
   houtFV_stack_4->SetBinContent(12,16.47306);
   houtFV_stack_4->SetBinContent(13,16.55828);
   houtFV_stack_4->SetBinContent(14,22.86567);
   houtFV_stack_4->SetBinContent(15,29.22623);
   houtFV_stack_4->SetBinContent(16,34.72868);
   houtFV_stack_4->SetBinContent(17,47.68193);
   houtFV_stack_4->SetBinContent(18,57.18384);
   houtFV_stack_4->SetBinContent(19,70.15167);
   houtFV_stack_4->SetBinContent(20,80.35443);
   houtFV_stack_4->SetBinError(1,1.814269);
   houtFV_stack_4->SetBinError(2,1.815066);
   houtFV_stack_4->SetBinError(3,1.648891);
   houtFV_stack_4->SetBinError(4,1.565155);
   houtFV_stack_4->SetBinError(5,1.819833);
   houtFV_stack_4->SetBinError(6,2.059952);
   houtFV_stack_4->SetBinError(7,1.581875);
   houtFV_stack_4->SetBinError(8,1.522767);
   houtFV_stack_4->SetBinError(9,1.601597);
   houtFV_stack_4->SetBinError(10,1.816352);
   houtFV_stack_4->SetBinError(11,1.874491);
   houtFV_stack_4->SetBinError(12,2.072394);
   houtFV_stack_4->SetBinError(13,2.08284);
   houtFV_stack_4->SetBinError(14,2.362784);
   houtFV_stack_4->SetBinError(15,2.699505);
   houtFV_stack_4->SetBinError(16,3.015487);
   houtFV_stack_4->SetBinError(17,3.414755);
   houtFV_stack_4->SetBinError(18,3.949088);
   houtFV_stack_4->SetBinError(19,4.236154);
   houtFV_stack_4->SetBinError(20,4.498159);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.18012);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5294358);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8502901);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.823054);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.994198);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.97153);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,6.651354);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,15.67156);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,64.1676);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6511889);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.168174);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3309054);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3085891);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.534735);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5765866);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.8442226);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.300034);
   hNCpi0inFVcoh_stack_5->SetBinError(20,2.625293);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3477539);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.562408);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.742762);
   hNCpi0inFVqe_stack_6->SetBinContent(20,2.078058);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1731161);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4337272);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4619719);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4201277);
   hNCpi0inFVqe_stack_6->SetEntries(179);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,24.27842);
   hNCpi0inFVres_stack_7->SetBinContent(2,18.03211);
   hNCpi0inFVres_stack_7->SetBinContent(3,18.89535);
   hNCpi0inFVres_stack_7->SetBinContent(4,18.7976);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.72182);
   hNCpi0inFVres_stack_7->SetBinContent(6,18.32124);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.33801);
   hNCpi0inFVres_stack_7->SetBinContent(8,20.57848);
   hNCpi0inFVres_stack_7->SetBinContent(9,23.31103);
   hNCpi0inFVres_stack_7->SetBinContent(10,28.92639);
   hNCpi0inFVres_stack_7->SetBinContent(11,29.58756);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.08463);
   hNCpi0inFVres_stack_7->SetBinContent(13,45.94167);
   hNCpi0inFVres_stack_7->SetBinContent(14,54.41767);
   hNCpi0inFVres_stack_7->SetBinContent(15,67.97395);
   hNCpi0inFVres_stack_7->SetBinContent(16,90.81421);
   hNCpi0inFVres_stack_7->SetBinContent(17,119.2201);
   hNCpi0inFVres_stack_7->SetBinContent(18,147.5424);
   hNCpi0inFVres_stack_7->SetBinContent(19,207.1406);
   hNCpi0inFVres_stack_7->SetBinContent(20,282.8205);
   hNCpi0inFVres_stack_7->SetBinError(1,1.630833);
   hNCpi0inFVres_stack_7->SetBinError(2,1.356346);
   hNCpi0inFVres_stack_7->SetBinError(3,1.403496);
   hNCpi0inFVres_stack_7->SetBinError(4,1.429747);
   hNCpi0inFVres_stack_7->SetBinError(5,1.526461);
   hNCpi0inFVres_stack_7->SetBinError(6,1.374518);
   hNCpi0inFVres_stack_7->SetBinError(7,1.393105);
   hNCpi0inFVres_stack_7->SetBinError(8,1.416447);
   hNCpi0inFVres_stack_7->SetBinError(9,1.527458);
   hNCpi0inFVres_stack_7->SetBinError(10,1.775103);
   hNCpi0inFVres_stack_7->SetBinError(11,1.741941);
   hNCpi0inFVres_stack_7->SetBinError(12,1.910827);
   hNCpi0inFVres_stack_7->SetBinError(13,2.182603);
   hNCpi0inFVres_stack_7->SetBinError(14,2.401137);
   hNCpi0inFVres_stack_7->SetBinError(15,2.639438);
   hNCpi0inFVres_stack_7->SetBinError(16,3.135273);
   hNCpi0inFVres_stack_7->SetBinError(17,3.571831);
   hNCpi0inFVres_stack_7->SetBinError(18,3.929975);
   hNCpi0inFVres_stack_7->SetBinError(19,4.733877);
   hNCpi0inFVres_stack_7->SetBinError(20,5.491897);
   hNCpi0inFVres_stack_7->SetEntries(24054);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.547556);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.795);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.206684);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.182528);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.746666);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.327662);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.375084);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.76602);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.500134);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.864002);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.193729);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.97801);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.403326);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.748167);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.83371);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.84917);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.43601);
   hNCpi0inFVdis_stack_8->SetBinContent(18,29.84066);
   hNCpi0inFVdis_stack_8->SetBinContent(19,43.49924);
   hNCpi0inFVdis_stack_8->SetBinContent(20,75.55865);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7264344);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7325697);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5543307);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7018176);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5363696);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4215916);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.603306);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6636216);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5843529);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6605844);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.535401);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7127315);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8721894);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7898772);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.082821);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.257524);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.552961);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.773532);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.096204);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.844947);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(11);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.83794);
   hCCpi0inFV_stack_10->SetBinContent(2,9.800487);
   hCCpi0inFV_stack_10->SetBinContent(3,9.206784);
   hCCpi0inFV_stack_10->SetBinContent(4,5.621671);
   hCCpi0inFV_stack_10->SetBinContent(5,9.242165);
   hCCpi0inFV_stack_10->SetBinContent(6,7.820806);
   hCCpi0inFV_stack_10->SetBinContent(7,6.941326);
   hCCpi0inFV_stack_10->SetBinContent(8,6.666785);
   hCCpi0inFV_stack_10->SetBinContent(9,9.216168);
   hCCpi0inFV_stack_10->SetBinContent(10,12.65717);
   hCCpi0inFV_stack_10->SetBinContent(11,12.42363);
   hCCpi0inFV_stack_10->SetBinContent(12,13.29117);
   hCCpi0inFV_stack_10->SetBinContent(13,19.34323);
   hCCpi0inFV_stack_10->SetBinContent(14,16.9586);
   hCCpi0inFV_stack_10->SetBinContent(15,25.22097);
   hCCpi0inFV_stack_10->SetBinContent(16,34.39534);
   hCCpi0inFV_stack_10->SetBinContent(17,48.73746);
   hCCpi0inFV_stack_10->SetBinContent(18,60.25846);
   hCCpi0inFV_stack_10->SetBinContent(19,98.60091);
   hCCpi0inFV_stack_10->SetBinContent(20,159.8838);
   hCCpi0inFV_stack_10->SetBinError(1,1.753421);
   hCCpi0inFV_stack_10->SetBinError(2,1.542528);
   hCCpi0inFV_stack_10->SetBinError(3,1.51018);
   hCCpi0inFV_stack_10->SetBinError(4,1.160709);
   hCCpi0inFV_stack_10->SetBinError(5,1.488918);
   hCCpi0inFV_stack_10->SetBinError(6,1.387778);
   hCCpi0inFV_stack_10->SetBinError(7,1.333051);
   hCCpi0inFV_stack_10->SetBinError(8,1.337729);
   hCCpi0inFV_stack_10->SetBinError(9,1.484843);
   hCCpi0inFV_stack_10->SetBinError(10,1.783204);
   hCCpi0inFV_stack_10->SetBinError(11,1.710752);
   hCCpi0inFV_stack_10->SetBinError(12,1.841593);
   hCCpi0inFV_stack_10->SetBinError(13,2.2293);
   hCCpi0inFV_stack_10->SetBinError(14,2.039218);
   hCCpi0inFV_stack_10->SetBinError(15,2.597231);
   hCCpi0inFV_stack_10->SetBinError(16,2.893825);
   hCCpi0inFV_stack_10->SetBinError(17,3.510156);
   hCCpi0inFV_stack_10->SetBinError(18,3.894633);
   hCCpi0inFV_stack_10->SetBinError(19,5.013931);
   hCCpi0inFV_stack_10->SetBinError(20,6.341045);
   hCCpi0inFV_stack_10->SetEntries(2475);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.962811);
   hNCinFV_stack_11->SetBinContent(2,5.033216);
   hNCinFV_stack_11->SetBinContent(3,4.109654);
   hNCinFV_stack_11->SetBinContent(4,3.021261);
   hNCinFV_stack_11->SetBinContent(5,4.107964);
   hNCinFV_stack_11->SetBinContent(6,2.107235);
   hNCinFV_stack_11->SetBinContent(7,3.267849);
   hNCinFV_stack_11->SetBinContent(8,1.660551);
   hNCinFV_stack_11->SetBinContent(9,5.029835);
   hNCinFV_stack_11->SetBinContent(10,3.181021);
   hNCinFV_stack_11->SetBinContent(11,4.102892);
   hNCinFV_stack_11->SetBinContent(12,5.96354);
   hNCinFV_stack_11->SetBinContent(13,5.961849);
   hNCinFV_stack_11->SetBinContent(14,7.22897);
   hNCinFV_stack_11->SetBinContent(15,9.874788);
   hNCinFV_stack_11->SetBinContent(16,14.55998);
   hNCinFV_stack_11->SetBinContent(17,15.67688);
   hNCinFV_stack_11->SetBinContent(18,23.71844);
   hNCinFV_stack_11->SetBinContent(19,37.49166);
   hNCinFV_stack_11->SetBinContent(20,74.18018);
   hNCinFV_stack_11->SetBinError(1,0.961408);
   hNCinFV_stack_11->SetBinError(2,1.109872);
   hNCinFV_stack_11->SetBinError(3,1.001326);
   hNCinFV_stack_11->SetBinError(4,0.9415334);
   hNCinFV_stack_11->SetBinError(5,1.000995);
   hNCinFV_stack_11->SetBinError(6,0.6801976);
   hNCinFV_stack_11->SetBinError(7,0.9410263);
   hNCinFV_stack_11->SetBinError(8,0.650847);
   hNCinFV_stack_11->SetBinError(9,1.109275);
   hNCinFV_stack_11->SetBinError(10,0.8783531);
   hNCinFV_stack_11->SetBinError(11,1.000002);
   hNCinFV_stack_11->SetBinError(12,1.209805);
   hNCinFV_stack_11->SetBinError(13,1.209531);
   hNCinFV_stack_11->SetBinError(14,1.345055);
   hNCinFV_stack_11->SetBinError(15,1.557858);
   hNCinFV_stack_11->SetBinError(16,1.933477);
   hNCinFV_stack_11->SetBinError(17,2.001217);
   hNCinFV_stack_11->SetBinError(18,2.513265);
   hNCinFV_stack_11->SetBinError(19,3.027494);
   hNCinFV_stack_11->SetBinError(20,4.354898);
   hNCinFV_stack_11->SetEntries(996);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.386863);
   hnumuCCinFV_stack_12->SetBinContent(2,3.69745);
   hnumuCCinFV_stack_12->SetBinContent(3,4.002568);
   hnumuCCinFV_stack_12->SetBinContent(4,2.887002);
   hnumuCCinFV_stack_12->SetBinContent(5,4.840013);
   hnumuCCinFV_stack_12->SetBinContent(6,4.820854);
   hnumuCCinFV_stack_12->SetBinContent(7,3.220858);
   hnumuCCinFV_stack_12->SetBinContent(8,5.375095);
   hnumuCCinFV_stack_12->SetBinContent(9,6.076214);
   hnumuCCinFV_stack_12->SetBinContent(10,6.350573);
   hnumuCCinFV_stack_12->SetBinContent(11,4.032285);
   hnumuCCinFV_stack_12->SetBinContent(12,4.049706);
   hnumuCCinFV_stack_12->SetBinContent(13,11.88837);
   hnumuCCinFV_stack_12->SetBinContent(14,10.98098);
   hnumuCCinFV_stack_12->SetBinContent(15,11.04162);
   hnumuCCinFV_stack_12->SetBinContent(16,21.46738);
   hnumuCCinFV_stack_12->SetBinContent(17,21.04366);
   hnumuCCinFV_stack_12->SetBinContent(18,24.96957);
   hnumuCCinFV_stack_12->SetBinContent(19,37.89784);
   hnumuCCinFV_stack_12->SetBinContent(20,72.02709);
   hnumuCCinFV_stack_12->SetBinError(1,1.226417);
   hnumuCCinFV_stack_12->SetBinError(2,1.077822);
   hnumuCCinFV_stack_12->SetBinError(3,0.9912487);
   hnumuCCinFV_stack_12->SetBinError(4,0.8680126);
   hnumuCCinFV_stack_12->SetBinError(5,1.148235);
   hnumuCCinFV_stack_12->SetBinError(6,1.404254);
   hnumuCCinFV_stack_12->SetBinError(7,1.293919);
   hnumuCCinFV_stack_12->SetBinError(8,1.943633);
   hnumuCCinFV_stack_12->SetBinError(9,1.244844);
   hnumuCCinFV_stack_12->SetBinError(10,1.456231);
   hnumuCCinFV_stack_12->SetBinError(11,1.116606);
   hnumuCCinFV_stack_12->SetBinError(12,1.023332);
   hnumuCCinFV_stack_12->SetBinError(13,1.905617);
   hnumuCCinFV_stack_12->SetBinError(14,1.892447);
   hnumuCCinFV_stack_12->SetBinError(15,1.754783);
   hnumuCCinFV_stack_12->SetBinError(16,3.415805);
   hnumuCCinFV_stack_12->SetBinError(17,2.388491);
   hnumuCCinFV_stack_12->SetBinError(18,2.60062);
   hnumuCCinFV_stack_12->SetBinError(19,3.735098);
   hnumuCCinFV_stack_12->SetBinError(20,4.8462);
   hnumuCCinFV_stack_12->SetEntries(1051);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,1.199902);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(4,1.416171);
   hnueCCinFV_stack_13->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(6,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(9,1.031049);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,1.196905);
   hnueCCinFV_stack_13->SetBinContent(15,2.122796);
   hnueCCinFV_stack_13->SetBinContent(16,1.427288);
   hnueCCinFV_stack_13->SetBinContent(17,1.37819);
   hnueCCinFV_stack_13->SetBinContent(18,2.720229);
   hnueCCinFV_stack_13->SetBinContent(19,2.391631);
   hnueCCinFV_stack_13->SetBinContent(20,14.03587);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.4902584);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(4,1.128487);
   hnueCCinFV_stack_13->SetBinError(5,0.3025491);
   hnueCCinFV_stack_13->SetBinError(6,0.4316896);
   hnueCCinFV_stack_13->SetBinError(9,0.5334159);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2451269);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.6198054);
   hnueCCinFV_stack_13->SetBinError(15,1.343642);
   hnueCCinFV_stack_13->SetBinError(16,0.6843119);
   hnueCCinFV_stack_13->SetBinError(17,0.6653251);
   hnueCCinFV_stack_13->SetBinError(18,1.014724);
   hnueCCinFV_stack_13->SetBinError(19,0.7320601);
   hnueCCinFV_stack_13->SetBinError(20,2.653185);
   hnueCCinFV_stack_13->SetEntries(115);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__11->SetBinContent(1,87.56819);
   hmcerror__11->SetBinContent(2,70.94797);
   hmcerror__11->SetBinContent(3,65.54826);
   hmcerror__11->SetBinContent(4,62.40201);
   hmcerror__11->SetBinContent(5,68.03775);
   hmcerror__11->SetBinContent(6,64.97687);
   hmcerror__11->SetBinContent(7,53.89306);
   hmcerror__11->SetBinContent(8,64.12112);
   hmcerror__11->SetBinContent(9,82.02976);
   hmcerror__11->SetBinContent(10,86.85717);
   hmcerror__11->SetBinContent(11,98.93164);
   hmcerror__11->SetBinContent(12,111.3291);
   hmcerror__11->SetBinContent(13,136.8214);
   hmcerror__11->SetBinContent(14,159.0352);
   hmcerror__11->SetBinContent(15,194.0107);
   hmcerror__11->SetBinContent(16,257.8028);
   hmcerror__11->SetBinContent(17,328.7592);
   hmcerror__11->SetBinContent(18,407.2339);
   hmcerror__11->SetBinContent(19,587.9365);
   hmcerror__11->SetBinContent(20,921.8624);
   hmcerror__11->SetBinError(1,30.49798);
   hmcerror__11->SetBinError(2,22.03294);
   hmcerror__11->SetBinError(3,21.35331);
   hmcerror__11->SetBinError(4,21.85169);
   hmcerror__11->SetBinError(5,21.97708);
   hmcerror__11->SetBinError(6,21.69501);
   hmcerror__11->SetBinError(7,18.1297);
   hmcerror__11->SetBinError(8,21.20177);
   hmcerror__11->SetBinError(9,23.69883);
   hmcerror__11->SetBinError(10,27.13932);
   hmcerror__11->SetBinError(11,25.77661);
   hmcerror__11->SetBinError(12,32.81317);
   hmcerror__11->SetBinError(13,42.46544);
   hmcerror__11->SetBinError(14,43.62241);
   hmcerror__11->SetBinError(15,52.31328);
   hmcerror__11->SetBinError(16,67.82678);
   hmcerror__11->SetBinError(17,86.95281);
   hmcerror__11->SetBinError(18,106.8194);
   hmcerror__11->SetBinError(19,128.753);
   hmcerror__11->SetBinError(20,214.8321);
   hmcerror__11->SetBinError(21,0.3895343);
   hmcerror__11->SetEntries(3864.24);

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
   
   Double_t _fx3013[20] = {
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
   Double_t _fy3013[20] = {
   94,
   67,
   61,
   57,
   57,
   68,
   73,
   87,
   72,
   81,
   81,
   96,
   132,
   172,
   162,
   259,
   297,
   413,
   592,
   902};
   Double_t _felx3013[20] = {
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
   Double_t _fely3013[20] = {
   9.8173,
   8.3119,
   7.9383,
   7.679,
   7.679,
   8.3726,
   8.6693,
   9.4503,
   8.6108,
   9.1239,
   9.1239,
   9.9196,
   11.48913,
   13.11488,
   12.72792,
   16.09348,
   17.23369,
   20.3224,
   24.33105,
   30.03331};
   Double_t _fehx3013[20] = {
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
   Double_t _fehy3013[20] = {
   9.616,
   8.1094,
   7.7354,
   7.4757,
   7.4757,
   8.1701,
   8.4672,
   9.2488,
   8.4085,
   8.9221,
   8.9221,
   9.718,
   11.48913,
   13.11488,
   12.72792,
   16.09348,
   17.23369,
   20.3224,
   24.33105,
   30.03331};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(44.3889);
   Graph_Graph3013->SetMaximum(1020.305);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[20] = {
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
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
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
   Double_t _fely3014[20] = {
   0.3482769,
   0.3105507,
   0.3257647,
   0.350176,
   0.323013,
   0.3338881,
   0.3364013,
   0.3306519,
   0.2889053,
   0.3124591,
   0.2605497,
   0.2947402,
   0.3103715,
   0.274294,
   0.2696412,
   0.2630956,
   0.2644878,
   0.2623047,
   0.2189913,
   0.2330414};
   Double_t _fehx3014[20] = {
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
   Double_t _fehy3014[20] = {
   0.3482769,
   0.3105507,
   0.3257647,
   0.350176,
   0.323013,
   0.3338881,
   0.3364013,
   0.3306519,
   0.2889053,
   0.3124591,
   0.2605497,
   0.2947402,
   0.3103715,
   0.274294,
   0.2696412,
   0.2630956,
   0.2644878,
   0.2623047,
   0.2189913,
   0.2330414};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3015[20] = {
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
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
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
   Double_t _fely3015[20] = {
   0.1976245,
   0.1872744,
   0.1961473,
   0.2092541,
   0.2033494,
   0.1845774,
   0.2139138,
   0.1951645,
   0.1813624,
   0.1975951,
   0.1920932,
   0.2056556,
   0.2228576,
   0.2124459,
   0.2339871,
   0.2264561,
   0.2290618,
   0.209975,
   0.1974,
   0.2097665};
   Double_t _fehx3015[20] = {
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
   Double_t _fehy3015[20] = {
   0.1976245,
   0.1872744,
   0.1961473,
   0.2092541,
   0.2033494,
   0.1845774,
   0.2139138,
   0.1951645,
   0.1813624,
   0.1975951,
   0.1920932,
   0.2056556,
   0.2228576,
   0.2124459,
   0.2339871,
   0.2264561,
   0.2290618,
   0.209975,
   0.1974,
   0.2097665};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3016[20] = {
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
   Double_t _fy3016[20] = {
   1.073449,
   0.944354,
   0.9306121,
   0.9134321,
   0.8377702,
   1.046526,
   1.354534,
   1.356807,
   0.8777302,
   0.9325655,
   0.8187472,
   0.862308,
   0.9647617,
   1.081522,
   0.8350056,
   1.004644,
   0.9033966,
   1.014159,
   1.006912,
   0.978454};
   Double_t _felx3016[20] = {
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
   Double_t _fely3016[20] = {
   0.1121103,
   0.1171549,
   0.1211062,
   0.1230569,
   0.1128638,
   0.1288551,
   0.1608612,
   0.147382,
   0.1049717,
   0.1050449,
   0.09222429,
   0.08910157,
   0.08397173,
   0.08246525,
   0.06560423,
   0.06242553,
   0.05242039,
   0.04990351,
   0.04138381,
   0.03257896};
   Double_t _fehx3016[20] = {
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
   Double_t _fehy3016[20] = {
   0.1098116,
   0.1143007,
   0.1180108,
   0.119799,
   0.1098758,
   0.1257386,
   0.1571111,
   0.1442395,
   0.1025055,
   0.1027215,
   0.09018449,
   0.08729072,
   0.08397173,
   0.08246525,
   0.06560423,
   0.06242553,
   0.05242039,
   0.04990351,
   0.04138381,
   0.03257896};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.6462325);
   Graph_Graph3016->SetMaximum(1.590319);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
