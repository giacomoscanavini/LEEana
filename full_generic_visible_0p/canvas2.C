#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue May 31 21:15:47 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-230.7692,-350.7766,1692.308,36942.31);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hmc__4->SetBinContent(1,2015.531);
   hmc__4->SetBinContent(2,14916.87);
   hmc__4->SetBinContent(3,17538.83);
   hmc__4->SetBinContent(4,16814.36);
   hmc__4->SetBinContent(5,14809.1);
   hmc__4->SetBinContent(6,12502.32);
   hmc__4->SetBinContent(7,10003.38);
   hmc__4->SetBinContent(8,7780.67);
   hmc__4->SetBinContent(9,5914.952);
   hmc__4->SetBinContent(10,4414.613);
   hmc__4->SetBinContent(11,3254.718);
   hmc__4->SetBinContent(12,2465.587);
   hmc__4->SetBinContent(13,1783.113);
   hmc__4->SetBinContent(14,1305.39);
   hmc__4->SetBinContent(15,990.5076);
   hmc__4->SetBinContent(16,773.6295);
   hmc__4->SetBinContent(17,587.501);
   hmc__4->SetBinContent(18,444.8403);
   hmc__4->SetBinContent(19,352.9632);
   hmc__4->SetBinContent(20,300.2326);
   hmc__4->SetBinContent(21,1683.064);
   hmc__4->SetBinError(1,299.2894);
   hmc__4->SetBinError(2,2228.673);
   hmc__4->SetBinError(3,2626.026);
   hmc__4->SetBinError(4,2684.041);
   hmc__4->SetBinError(5,2410.743);
   hmc__4->SetBinError(6,2106.658);
   hmc__4->SetBinError(7,1936.362);
   hmc__4->SetBinError(8,1609.519);
   hmc__4->SetBinError(9,1303.643);
   hmc__4->SetBinError(10,1060.386);
   hmc__4->SetBinError(11,855.7456);
   hmc__4->SetBinError(12,673.9025);
   hmc__4->SetBinError(13,527.2206);
   hmc__4->SetBinError(14,486.3683);
   hmc__4->SetBinError(15,265.0254);
   hmc__4->SetBinError(16,321.0657);
   hmc__4->SetBinError(17,189.6504);
   hmc__4->SetBinError(18,120.7811);
   hmc__4->SetBinError(19,112.1875);
   hmc__4->SetBinError(20,77.75048);
   hmc__4->SetBinError(21,472.883);
   hmc__4->SetMinimum(-350.7766);
   hmc__4->SetMaximum(35077.66);
   hmc__4->SetEntries(104733.2);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(-3.571482e-09);
   hs2_stack_2->SetMaximum(18415.77);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,267.7138);
   hbadmatch_stack_1->SetBinContent(2,373.7864);
   hbadmatch_stack_1->SetBinContent(3,252.4611);
   hbadmatch_stack_1->SetBinContent(4,162.9576);
   hbadmatch_stack_1->SetBinContent(5,104.9755);
   hbadmatch_stack_1->SetBinContent(6,73.86107);
   hbadmatch_stack_1->SetBinContent(7,51.04969);
   hbadmatch_stack_1->SetBinContent(8,46.87902);
   hbadmatch_stack_1->SetBinContent(9,26.0686);
   hbadmatch_stack_1->SetBinContent(10,14.63963);
   hbadmatch_stack_1->SetBinContent(11,11.64551);
   hbadmatch_stack_1->SetBinContent(12,9.698092);
   hbadmatch_stack_1->SetBinContent(13,5.766775);
   hbadmatch_stack_1->SetBinContent(14,5.040701);
   hbadmatch_stack_1->SetBinContent(15,2.277329);
   hbadmatch_stack_1->SetBinContent(16,1.999038);
   hbadmatch_stack_1->SetBinContent(17,1.354194);
   hbadmatch_stack_1->SetBinContent(18,1.805704);
   hbadmatch_stack_1->SetBinContent(19,1.04423);
   hbadmatch_stack_1->SetBinContent(20,1.218746);
   hbadmatch_stack_1->SetBinContent(21,18.61285);
   hbadmatch_stack_1->SetBinError(1,9.657605);
   hbadmatch_stack_1->SetBinError(2,13.16345);
   hbadmatch_stack_1->SetBinError(3,10.55307);
   hbadmatch_stack_1->SetBinError(4,8.119799);
   hbadmatch_stack_1->SetBinError(5,6.781862);
   hbadmatch_stack_1->SetBinError(6,5.404522);
   hbadmatch_stack_1->SetBinError(7,4.398538);
   hbadmatch_stack_1->SetBinError(8,5.519988);
   hbadmatch_stack_1->SetBinError(9,3.240785);
   hbadmatch_stack_1->SetBinError(10,2.244722);
   hbadmatch_stack_1->SetBinError(11,1.762199);
   hbadmatch_stack_1->SetBinError(12,1.68122);
   hbadmatch_stack_1->SetBinError(13,1.201362);
   hbadmatch_stack_1->SetBinError(14,1.231369);
   hbadmatch_stack_1->SetBinError(15,0.78267);
   hbadmatch_stack_1->SetBinError(16,0.7339349);
   hbadmatch_stack_1->SetBinError(17,0.5666104);
   hbadmatch_stack_1->SetBinError(18,0.7080169);
   hbadmatch_stack_1->SetBinError(19,0.5321984);
   hbadmatch_stack_1->SetBinError(20,0.5736048);
   hbadmatch_stack_1->SetBinError(21,3.540868);
   hbadmatch_stack_1->SetEntries(5481);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,416.8957);
   hext_stack_2->SetBinContent(2,1764.452);
   hext_stack_2->SetBinContent(3,1177.218);
   hext_stack_2->SetBinContent(4,702.9704);
   hext_stack_2->SetBinContent(5,471.6724);
   hext_stack_2->SetBinContent(6,441.3472);
   hext_stack_2->SetBinContent(7,327.4625);
   hext_stack_2->SetBinContent(8,256.5432);
   hext_stack_2->SetBinContent(9,166.5236);
   hext_stack_2->SetBinContent(10,109.5099);
   hext_stack_2->SetBinContent(11,89.32021);
   hext_stack_2->SetBinContent(12,71.99983);
   hext_stack_2->SetBinContent(13,63.0403);
   hext_stack_2->SetBinContent(14,47.14439);
   hext_stack_2->SetBinContent(15,48.27039);
   hext_stack_2->SetBinContent(16,35.66752);
   hext_stack_2->SetBinContent(17,21.38201);
   hext_stack_2->SetBinContent(18,20.17657);
   hext_stack_2->SetBinContent(19,23.68032);
   hext_stack_2->SetBinContent(20,18.70462);
   hext_stack_2->SetBinContent(21,315.3542);
   hext_stack_2->SetBinError(1,13.92115);
   hext_stack_2->SetBinError(2,28.82979);
   hext_stack_2->SetBinError(3,23.62914);
   hext_stack_2->SetBinError(4,17.81237);
   hext_stack_2->SetBinError(5,14.57918);
   hext_stack_2->SetBinError(6,14.38605);
   hext_stack_2->SetBinError(7,12.19032);
   hext_stack_2->SetBinError(8,11.04098);
   hext_stack_2->SetBinError(9,8.810981);
   hext_stack_2->SetBinError(10,7.169007);
   hext_stack_2->SetBinError(11,6.444207);
   hext_stack_2->SetBinError(12,5.717172);
   hext_stack_2->SetBinError(13,5.426911);
   hext_stack_2->SetBinError(14,4.656746);
   hext_stack_2->SetBinError(15,4.710333);
   hext_stack_2->SetBinError(16,4.025329);
   hext_stack_2->SetBinError(17,3.004903);
   hext_stack_2->SetBinError(18,2.851503);
   hext_stack_2->SetBinError(19,3.331584);
   hext_stack_2->SetBinError(20,2.850874);
   hext_stack_2->SetBinError(21,12.19727);
   hext_stack_2->SetEntries(15374);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,117.5886);
   hdirt_stack_3->SetBinContent(2,418.6475);
   hdirt_stack_3->SetBinContent(3,195.9717);
   hdirt_stack_3->SetBinContent(4,92.58929);
   hdirt_stack_3->SetBinContent(5,54.31576);
   hdirt_stack_3->SetBinContent(6,36.66193);
   hdirt_stack_3->SetBinContent(7,15.48563);
   hdirt_stack_3->SetBinContent(8,16.21917);
   hdirt_stack_3->SetBinContent(9,9.18964);
   hdirt_stack_3->SetBinContent(10,6.379475);
   hdirt_stack_3->SetBinContent(11,5.530433);
   hdirt_stack_3->SetBinContent(12,1.946143);
   hdirt_stack_3->SetBinContent(13,4.660631);
   hdirt_stack_3->SetBinContent(14,5.092407);
   hdirt_stack_3->SetBinContent(15,1.925449);
   hdirt_stack_3->SetBinContent(16,2.130391);
   hdirt_stack_3->SetBinContent(17,2.737403);
   hdirt_stack_3->SetBinContent(18,2.188751);
   hdirt_stack_3->SetBinContent(19,0.735727);
   hdirt_stack_3->SetBinContent(20,1.998925);
   hdirt_stack_3->SetBinContent(21,16.62817);
   hdirt_stack_3->SetBinError(1,6.858104);
   hdirt_stack_3->SetBinError(2,12.22609);
   hdirt_stack_3->SetBinError(3,9.118199);
   hdirt_stack_3->SetBinError(4,5.298748);
   hdirt_stack_3->SetBinError(5,4.987085);
   hdirt_stack_3->SetBinError(6,4.415742);
   hdirt_stack_3->SetBinError(7,2.099452);
   hdirt_stack_3->SetBinError(8,2.778186);
   hdirt_stack_3->SetBinError(9,1.710006);
   hdirt_stack_3->SetBinError(10,1.321055);
   hdirt_stack_3->SetBinError(11,1.253218);
   hdirt_stack_3->SetBinError(12,0.678779);
   hdirt_stack_3->SetBinError(13,1.176892);
   hdirt_stack_3->SetBinError(14,3.410091);
   hdirt_stack_3->SetBinError(15,0.7226163);
   hdirt_stack_3->SetBinError(16,0.7064174);
   hdirt_stack_3->SetBinError(17,1.392151);
   hdirt_stack_3->SetBinError(18,0.8623178);
   hdirt_stack_3->SetBinError(19,0.408649);
   hdirt_stack_3->SetBinError(20,0.7978315);
   hdirt_stack_3->SetBinError(21,2.445344);
   hdirt_stack_3->SetEntries(4150);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,207.7024);
   houtFV_stack_4->SetBinContent(2,1253.937);
   houtFV_stack_4->SetBinContent(3,983.9437);
   houtFV_stack_4->SetBinContent(4,654.2333);
   houtFV_stack_4->SetBinContent(5,386.5209);
   houtFV_stack_4->SetBinContent(6,272.5361);
   houtFV_stack_4->SetBinContent(7,176.8141);
   houtFV_stack_4->SetBinContent(8,147.3565);
   houtFV_stack_4->SetBinContent(9,97.26112);
   houtFV_stack_4->SetBinContent(10,73.13165);
   houtFV_stack_4->SetBinContent(11,53.43485);
   houtFV_stack_4->SetBinContent(12,34.07143);
   houtFV_stack_4->SetBinContent(13,27.48909);
   houtFV_stack_4->SetBinContent(14,16.4518);
   houtFV_stack_4->SetBinContent(15,14.01643);
   houtFV_stack_4->SetBinContent(16,11.43259);
   houtFV_stack_4->SetBinContent(17,11.11408);
   houtFV_stack_4->SetBinContent(18,7.761961);
   houtFV_stack_4->SetBinContent(19,4.426127);
   houtFV_stack_4->SetBinContent(20,14.28211);
   houtFV_stack_4->SetBinContent(21,24.66714);
   houtFV_stack_4->SetBinError(1,7.705544);
   houtFV_stack_4->SetBinError(2,19.97001);
   houtFV_stack_4->SetBinError(3,18.11909);
   houtFV_stack_4->SetBinError(4,14.52535);
   houtFV_stack_4->SetBinError(5,10.64639);
   houtFV_stack_4->SetBinError(6,9.814971);
   houtFV_stack_4->SetBinError(7,7.998548);
   houtFV_stack_4->SetBinError(8,8.586524);
   houtFV_stack_4->SetBinError(9,6.295146);
   houtFV_stack_4->SetBinError(10,6.24262);
   houtFV_stack_4->SetBinError(11,5.217588);
   houtFV_stack_4->SetBinError(12,3.180917);
   houtFV_stack_4->SetBinError(13,3.416645);
   houtFV_stack_4->SetBinError(14,2.442414);
   houtFV_stack_4->SetBinError(15,1.903787);
   houtFV_stack_4->SetBinError(16,1.684707);
   houtFV_stack_4->SetBinError(17,2.828526);
   houtFV_stack_4->SetBinError(18,1.425511);
   houtFV_stack_4->SetBinError(19,1.043381);
   houtFV_stack_4->SetBinError(20,4.610366);
   houtFV_stack_4->SetBinError(21,2.736185);
   houtFV_stack_4->SetEntries(18079);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9459438);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.649516);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.342112);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.327334);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3485861);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6141361);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2836138);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5576563);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.45182);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5067051);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2218905);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2874767);
   hNCpi0inFVcoh_stack_5->SetEntries(244);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,237.076);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,981.8118);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,775.2503);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,511.6768);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,305.8016);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,203.6944);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,123.0236);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,83.0078);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,58.81576);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,39.90031);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,30.32826);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,19.973);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,17.51147);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,11.97912);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,9.791452);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,8.715138);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,6.597189);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,5.076992);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,4.584914);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,4.908264);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,26.38555);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,4.992851);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,10.19238);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,9.121564);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,7.495699);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,5.668571);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.743658);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.625691);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.936802);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.506031);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.044966);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.841011);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.477111);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.37121);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.163923);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.065185);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.019855);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.8501738);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.745647);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.6627895);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.7604633);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.751061);
   hNCpi0inFVnoncoh_stack_6->SetEntries(63901);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,37.87671);
   hCCpi0inFV_stack_7->SetBinContent(2,441.3027);
   hCCpi0inFV_stack_7->SetBinContent(3,866.1951);
   hCCpi0inFV_stack_7->SetBinContent(4,1105.354);
   hCCpi0inFV_stack_7->SetBinContent(5,1158.071);
   hCCpi0inFV_stack_7->SetBinContent(6,1096.275);
   hCCpi0inFV_stack_7->SetBinContent(7,967.2932);
   hCCpi0inFV_stack_7->SetBinContent(8,798.0286);
   hCCpi0inFV_stack_7->SetBinContent(9,655.8301);
   hCCpi0inFV_stack_7->SetBinContent(10,501.8716);
   hCCpi0inFV_stack_7->SetBinContent(11,383.9608);
   hCCpi0inFV_stack_7->SetBinContent(12,311.4134);
   hCCpi0inFV_stack_7->SetBinContent(13,237.6403);
   hCCpi0inFV_stack_7->SetBinContent(14,188.2161);
   hCCpi0inFV_stack_7->SetBinContent(15,150.7495);
   hCCpi0inFV_stack_7->SetBinContent(16,119.5839);
   hCCpi0inFV_stack_7->SetBinContent(17,92.69942);
   hCCpi0inFV_stack_7->SetBinContent(18,84.48847);
   hCCpi0inFV_stack_7->SetBinContent(19,59.92553);
   hCCpi0inFV_stack_7->SetBinContent(20,58.40979);
   hCCpi0inFV_stack_7->SetBinContent(21,405.3303);
   hCCpi0inFV_stack_7->SetBinError(1,3.127449);
   hCCpi0inFV_stack_7->SetBinError(2,10.53105);
   hCCpi0inFV_stack_7->SetBinError(3,14.78367);
   hCCpi0inFV_stack_7->SetBinError(4,16.69933);
   hCCpi0inFV_stack_7->SetBinError(5,17.12525);
   hCCpi0inFV_stack_7->SetBinError(6,16.63677);
   hCCpi0inFV_stack_7->SetBinError(7,15.66231);
   hCCpi0inFV_stack_7->SetBinError(8,14.18679);
   hCCpi0inFV_stack_7->SetBinError(9,12.87103);
   hCCpi0inFV_stack_7->SetBinError(10,11.25748);
   hCCpi0inFV_stack_7->SetBinError(11,9.917832);
   hCCpi0inFV_stack_7->SetBinError(12,8.881124);
   hCCpi0inFV_stack_7->SetBinError(13,7.750939);
   hCCpi0inFV_stack_7->SetBinError(14,6.894112);
   hCCpi0inFV_stack_7->SetBinError(15,6.134089);
   hCCpi0inFV_stack_7->SetBinError(16,5.512927);
   hCCpi0inFV_stack_7->SetBinError(17,4.825895);
   hCCpi0inFV_stack_7->SetBinError(18,4.656891);
   hCCpi0inFV_stack_7->SetBinError(19,3.89959);
   hCCpi0inFV_stack_7->SetBinError(20,3.855104);
   hCCpi0inFV_stack_7->SetBinError(21,10.11543);
   hCCpi0inFV_stack_7->SetEntries(41502);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,287.1437);
   hNCinFV_stack_8->SetBinContent(2,3703.391);
   hNCinFV_stack_8->SetBinContent(3,2667.934);
   hNCinFV_stack_8->SetBinContent(4,1418.002);
   hNCinFV_stack_8->SetBinContent(5,781.6664);
   hNCinFV_stack_8->SetBinContent(6,445.5023);
   hNCinFV_stack_8->SetBinContent(7,246.7809);
   hNCinFV_stack_8->SetBinContent(8,148.0519);
   hNCinFV_stack_8->SetBinContent(9,97.55673);
   hNCinFV_stack_8->SetBinContent(10,52.64409);
   hNCinFV_stack_8->SetBinContent(11,41.95438);
   hNCinFV_stack_8->SetBinContent(12,22.09067);
   hNCinFV_stack_8->SetBinContent(13,16.6089);
   hNCinFV_stack_8->SetBinContent(14,13.25591);
   hNCinFV_stack_8->SetBinContent(15,9.516623);
   hNCinFV_stack_8->SetBinContent(16,8.247812);
   hNCinFV_stack_8->SetBinContent(17,7.80789);
   hNCinFV_stack_8->SetBinContent(18,5.534843);
   hNCinFV_stack_8->SetBinContent(19,3.911248);
   hNCinFV_stack_8->SetBinContent(20,1.568651);
   hNCinFV_stack_8->SetBinContent(21,12.60405);
   hNCinFV_stack_8->SetBinError(1,8.561655);
   hNCinFV_stack_8->SetBinError(2,30.49797);
   hNCinFV_stack_8->SetBinError(3,25.96729);
   hNCinFV_stack_8->SetBinError(4,18.83945);
   hNCinFV_stack_8->SetBinError(5,13.96953);
   hNCinFV_stack_8->SetBinError(6,10.65271);
   hNCinFV_stack_8->SetBinError(7,7.877951);
   hNCinFV_stack_8->SetBinError(8,6.140821);
   hNCinFV_stack_8->SetBinError(9,4.956689);
   hNCinFV_stack_8->SetBinError(10,3.635854);
   hNCinFV_stack_8->SetBinError(11,3.264925);
   hNCinFV_stack_8->SetBinError(12,2.274312);
   hNCinFV_stack_8->SetBinError(13,2.027784);
   hNCinFV_stack_8->SetBinError(14,1.799569);
   hNCinFV_stack_8->SetBinError(15,1.581943);
   hNCinFV_stack_8->SetBinError(16,1.468221);
   hNCinFV_stack_8->SetBinError(17,1.455766);
   hNCinFV_stack_8->SetBinError(18,1.110504);
   hNCinFV_stack_8->SetBinError(19,0.9814756);
   hNCinFV_stack_8->SetBinError(20,0.5546069);
   hNCinFV_stack_8->SetBinError(21,1.7769);
   hNCinFV_stack_8->SetEntries(42689);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,441.497);
   hnumuCCinFV_stack_9->SetBinContent(2,5957.514);
   hnumuCCinFV_stack_9->SetBinContent(3,10575.06);
   hnumuCCinFV_stack_9->SetBinContent(4,12122.27);
   hnumuCCinFV_stack_9->SetBinContent(5,11499.33);
   hnumuCCinFV_stack_9->SetBinContent(6,9878.811);
   hnumuCCinFV_stack_9->SetBinContent(7,8057.323);
   hnumuCCinFV_stack_9->SetBinContent(8,6247.393);
   hnumuCCinFV_stack_9->SetBinContent(9,4765.653);
   hnumuCCinFV_stack_9->SetBinContent(10,3588.143);
   hnumuCCinFV_stack_9->SetBinContent(11,2614.6);
   hnumuCCinFV_stack_9->SetBinContent(12,1972.54);
   hnumuCCinFV_stack_9->SetBinContent(13,1387.045);
   hnumuCCinFV_stack_9->SetBinContent(14,1000.1);
   hnumuCCinFV_stack_9->SetBinContent(15,739.0933);
   hnumuCCinFV_stack_9->SetBinContent(16,569.8569);
   hnumuCCinFV_stack_9->SetBinContent(17,433.4401);
   hnumuCCinFV_stack_9->SetBinContent(18,306.6926);
   hnumuCCinFV_stack_9->SetBinContent(19,245.0189);
   hnumuCCinFV_stack_9->SetBinContent(20,190.3924);
   hnumuCCinFV_stack_9->SetBinContent(21,773.2848);
   hnumuCCinFV_stack_9->SetBinError(1,16.45851);
   hnumuCCinFV_stack_9->SetBinError(2,58.56606);
   hnumuCCinFV_stack_9->SetBinError(3,75.00248);
   hnumuCCinFV_stack_9->SetBinError(4,77.74985);
   hnumuCCinFV_stack_9->SetBinError(5,75.49989);
   hnumuCCinFV_stack_9->SetBinError(6,69.66088);
   hnumuCCinFV_stack_9->SetBinError(7,63.96689);
   hnumuCCinFV_stack_9->SetBinError(8,56.32136);
   hnumuCCinFV_stack_9->SetBinError(9,50.55675);
   hnumuCCinFV_stack_9->SetBinError(10,44.22357);
   hnumuCCinFV_stack_9->SetBinError(11,38.65717);
   hnumuCCinFV_stack_9->SetBinError(12,34.86025);
   hnumuCCinFV_stack_9->SetBinError(13,29.34638);
   hnumuCCinFV_stack_9->SetBinError(14,24.02372);
   hnumuCCinFV_stack_9->SetBinError(15,21.95235);
   hnumuCCinFV_stack_9->SetBinError(16,19.21311);
   hnumuCCinFV_stack_9->SetBinError(17,17.01856);
   hnumuCCinFV_stack_9->SetBinError(18,13.23389);
   hnumuCCinFV_stack_9->SetBinError(19,13.14729);
   hnumuCCinFV_stack_9->SetBinError(20,11.19653);
   hnumuCCinFV_stack_9->SetBinError(21,21.57231);
   hnumuCCinFV_stack_9->SetEntries(290947);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(1,1.090874);
   hnueCCinFV_stack_10->SetBinContent(2,19.38103);
   hnueCCinFV_stack_10->SetBinContent(3,42.45092);
   hnueCCinFV_stack_10->SetBinContent(4,41.97733);
   hnueCCinFV_stack_10->SetBinContent(5,45.72104);
   hnueCCinFV_stack_10->SetBinContent(6,52.74192);
   hnueCCinFV_stack_10->SetBinContent(7,37.60636);
   hnueCCinFV_stack_10->SetBinContent(8,36.75929);
   hnueCCinFV_stack_10->SetBinContent(9,37.56461);
   hnueCCinFV_stack_10->SetBinContent(10,28.30902);
   hnueCCinFV_stack_10->SetBinContent(11,23.83146);
   hnueCCinFV_stack_10->SetBinContent(12,21.77141);
   hnueCCinFV_stack_10->SetBinContent(13,23.00237);
   hnueCCinFV_stack_10->SetBinContent(14,17.91416);
   hnueCCinFV_stack_10->SetBinContent(15,14.8393);
   hnueCCinFV_stack_10->SetBinContent(16,15.91252);
   hnueCCinFV_stack_10->SetBinContent(17,10.15989);
   hnueCCinFV_stack_10->SetBinContent(18,11.08649);
   hnueCCinFV_stack_10->SetBinContent(19,9.636261);
   hnueCCinFV_stack_10->SetBinContent(20,8.637504);
   hnueCCinFV_stack_10->SetBinContent(21,89.58229);
   hnueCCinFV_stack_10->SetBinError(1,0.5716463);
   hnueCCinFV_stack_10->SetBinError(2,2.995495);
   hnueCCinFV_stack_10->SetBinError(3,5.036434);
   hnueCCinFV_stack_10->SetBinError(4,4.125334);
   hnueCCinFV_stack_10->SetBinError(5,4.158244);
   hnueCCinFV_stack_10->SetBinError(6,4.884645);
   hnueCCinFV_stack_10->SetBinError(7,3.403662);
   hnueCCinFV_stack_10->SetBinError(8,3.910275);
   hnueCCinFV_stack_10->SetBinError(9,4.382467);
   hnueCCinFV_stack_10->SetBinError(10,2.866755);
   hnueCCinFV_stack_10->SetBinError(11,2.973895);
   hnueCCinFV_stack_10->SetBinError(12,4.152694);
   hnueCCinFV_stack_10->SetBinError(13,3.576321);
   hnueCCinFV_stack_10->SetBinError(14,3.395683);
   hnueCCinFV_stack_10->SetBinError(15,2.874678);
   hnueCCinFV_stack_10->SetBinError(16,4.294555);
   hnueCCinFV_stack_10->SetBinError(17,2.11056);
   hnueCCinFV_stack_10->SetBinError(18,1.692486);
   hnueCCinFV_stack_10->SetBinError(19,1.892819);
   hnueCCinFV_stack_10->SetBinError(20,1.588011);
   hnueCCinFV_stack_10->SetBinError(21,7.485973);
   hnueCCinFV_stack_10->SetEntries(2156);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_Np_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__5->SetBinContent(1,2015.531);
   hmcerror__5->SetBinContent(2,14916.87);
   hmcerror__5->SetBinContent(3,17538.83);
   hmcerror__5->SetBinContent(4,16814.36);
   hmcerror__5->SetBinContent(5,14809.1);
   hmcerror__5->SetBinContent(6,12502.32);
   hmcerror__5->SetBinContent(7,10003.38);
   hmcerror__5->SetBinContent(8,7780.67);
   hmcerror__5->SetBinContent(9,5914.952);
   hmcerror__5->SetBinContent(10,4414.613);
   hmcerror__5->SetBinContent(11,3254.718);
   hmcerror__5->SetBinContent(12,2465.587);
   hmcerror__5->SetBinContent(13,1783.113);
   hmcerror__5->SetBinContent(14,1305.39);
   hmcerror__5->SetBinContent(15,990.5076);
   hmcerror__5->SetBinContent(16,773.6295);
   hmcerror__5->SetBinContent(17,587.501);
   hmcerror__5->SetBinContent(18,444.8403);
   hmcerror__5->SetBinContent(19,352.9632);
   hmcerror__5->SetBinContent(20,300.2326);
   hmcerror__5->SetBinContent(21,1683.064);
   hmcerror__5->SetBinError(1,299.2894);
   hmcerror__5->SetBinError(2,2228.673);
   hmcerror__5->SetBinError(3,2626.026);
   hmcerror__5->SetBinError(4,2684.041);
   hmcerror__5->SetBinError(5,2410.743);
   hmcerror__5->SetBinError(6,2106.658);
   hmcerror__5->SetBinError(7,1936.362);
   hmcerror__5->SetBinError(8,1609.519);
   hmcerror__5->SetBinError(9,1303.643);
   hmcerror__5->SetBinError(10,1060.386);
   hmcerror__5->SetBinError(11,855.7456);
   hmcerror__5->SetBinError(12,673.9025);
   hmcerror__5->SetBinError(13,527.2206);
   hmcerror__5->SetBinError(14,486.3683);
   hmcerror__5->SetBinError(15,265.0254);
   hmcerror__5->SetBinError(16,321.0657);
   hmcerror__5->SetBinError(17,189.6504);
   hmcerror__5->SetBinError(18,120.7811);
   hmcerror__5->SetBinError(19,112.1875);
   hmcerror__5->SetBinError(20,77.75048);
   hmcerror__5->SetBinError(21,472.883);
   hmcerror__5->SetEntries(104733.2);

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
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
   1890,
   14343,
   17375,
   17309,
   15439,
   12889,
   10194,
   7478,
   5491,
   4051,
   2897,
   2048,
   1422,
   1041,
   777,
   553,
   443,
   326,
   265,
   195};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   43.47413,
   119.7623,
   131.8143,
   131.5637,
   124.2538,
   113.5297,
   100.9653,
   86.47543,
   74.10128,
   63.64747,
   53.82379,
   45.25483,
   37.70942,
   32.26453,
   27.87472,
   23.51595,
   21.04757,
   18.05547,
   16.27882,
   13.96424};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   43.47413,
   119.7623,
   131.8143,
   131.5637,
   124.2538,
   113.5297,
   100.9653,
   86.47543,
   74.10128,
   63.64747,
   53.82379,
   45.25483,
   37.70942,
   32.26453,
   27.87472,
   23.51595,
   21.04757,
   18.05547,
   16.27882,
   13.96424};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(162.9322);
   Graph_Graph3005->SetMaximum(19239.39);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 116426.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 1416.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 6274.0","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 992.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4447.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.9","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3439.5","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9315.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 9979.2","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 82591.8","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 500.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("generic_Np_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   0.1484916,
   0.1494062,
   0.1497264,
   0.1596279,
   0.162788,
   0.1685013,
   0.1935707,
   0.2068612,
   0.2203979,
   0.2401991,
   0.2629247,
   0.2733233,
   0.2956742,
   0.3725847,
   0.2675652,
   0.4150123,
   0.3228086,
   0.2715155,
   0.3178447,
   0.2589675};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0.1484916,
   0.1494062,
   0.1497264,
   0.1596279,
   0.162788,
   0.1685013,
   0.1935707,
   0.2068612,
   0.2203979,
   0.2401991,
   0.2629247,
   0.2733233,
   0.2956742,
   0.3725847,
   0.2675652,
   0.4150123,
   0.3228086,
   0.2715155,
   0.3178447,
   0.2589675};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.1339729,
   0.1445945,
   0.1424129,
   0.1442336,
   0.1463196,
   0.1483576,
   0.1570631,
   0.1624489,
   0.1677877,
   0.1760523,
   0.1846033,
   0.1960439,
   0.1900062,
   0.1922105,
   0.1999247,
   0.2037274,
   0.206352,
   0.1845126,
   0.1997724,
   0.2024264};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.1339729,
   0.1445945,
   0.1424129,
   0.1442336,
   0.1463196,
   0.1483576,
   0.1570631,
   0.1624489,
   0.1677877,
   0.1760523,
   0.1846033,
   0.1960439,
   0.1900062,
   0.1922105,
   0.1999247,
   0.2037274,
   0.206352,
   0.1845126,
   0.1997724,
   0.2024264};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
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
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   0.9377183,
   0.9615287,
   0.9906591,
   1.029418,
   1.042535,
   1.030928,
   1.019055,
   0.9610997,
   0.9283254,
   0.9176343,
   0.8900926,
   0.8306337,
   0.7974815,
   0.7974629,
   0.7844463,
   0.7148124,
   0.7540412,
   0.7328472,
   0.7507864,
   0.6494963};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0.02156957,
   0.008028645,
   0.007515568,
   0.007824482,
   0.008390368,
   0.009080691,
   0.01009312,
   0.01111414,
   0.01252779,
   0.01441745,
   0.01653716,
   0.01835459,
   0.02114807,
   0.02471639,
   0.02814185,
   0.03039692,
   0.03582558,
   0.04058865,
   0.04612044,
   0.0465114};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   0.02156957,
   0.008028645,
   0.007515568,
   0.007824482,
   0.008390368,
   0.009080691,
   0.01009312,
   0.01111414,
   0.01252779,
   0.01441745,
   0.01653716,
   0.01835459,
   0.02114807,
   0.02471639,
   0.02814185,
   0.03039692,
   0.03582558,
   0.04058865,
   0.04612044,
   0.0465114};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0.5581909);
   Graph_Graph3008->SetMaximum(1.095719);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_Np_bnb_12_visible_energy_all",20,0,1500);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
