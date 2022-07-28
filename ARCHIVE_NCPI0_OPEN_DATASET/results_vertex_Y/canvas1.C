#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr 15 13:46:33 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
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
   pad1->Range(-170,-19.06,163.3333,1606.056);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hmc__1->SetBinContent(0,1.90687);
   hmc__1->SetBinContent(1,0.909228);
   hmc__1->SetBinContent(2,287.2738);
   hmc__1->SetBinContent(3,656.7281);
   hmc__1->SetBinContent(4,796.4825);
   hmc__1->SetBinContent(5,833.325);
   hmc__1->SetBinContent(6,850.53);
   hmc__1->SetBinContent(7,835.3168);
   hmc__1->SetBinContent(8,832.6128);
   hmc__1->SetBinContent(9,844.7181);
   hmc__1->SetBinContent(10,836.2385);
   hmc__1->SetBinContent(11,829.4259);
   hmc__1->SetBinContent(12,815.2285);
   hmc__1->SetBinContent(13,814.0436);
   hmc__1->SetBinContent(14,828.9161);
   hmc__1->SetBinContent(15,855.5879);
   hmc__1->SetBinContent(16,844.2723);
   hmc__1->SetBinContent(17,841.2584);
   hmc__1->SetBinContent(18,869.7011);
   hmc__1->SetBinContent(19,868.6424);
   hmc__1->SetBinContent(20,893.3073);
   hmc__1->SetBinContent(21,926.0505);
   hmc__1->SetBinContent(22,924.1235);
   hmc__1->SetBinContent(23,821.8204);
   hmc__1->SetBinContent(24,596.7898);
   hmc__1->SetBinContent(25,1.475468);
   hmc__1->SetBinContent(26,2.605435);
   hmc__1->SetBinError(0,0.3565659);
   hmc__1->SetBinError(1,0.9456864);
   hmc__1->SetBinError(2,42.75452);
   hmc__1->SetBinError(3,92.91978);
   hmc__1->SetBinError(4,111.8272);
   hmc__1->SetBinError(5,117.7991);
   hmc__1->SetBinError(6,122.9768);
   hmc__1->SetBinError(7,118.218);
   hmc__1->SetBinError(8,117.8808);
   hmc__1->SetBinError(9,118.3926);
   hmc__1->SetBinError(10,116.4494);
   hmc__1->SetBinError(11,118.3673);
   hmc__1->SetBinError(12,110.4344);
   hmc__1->SetBinError(13,111.3849);
   hmc__1->SetBinError(14,117.3384);
   hmc__1->SetBinError(15,119.4658);
   hmc__1->SetBinError(16,113.1173);
   hmc__1->SetBinError(17,113.6315);
   hmc__1->SetBinError(18,118.2844);
   hmc__1->SetBinError(19,115.0081);
   hmc__1->SetBinError(20,112.7603);
   hmc__1->SetBinError(21,116.8226);
   hmc__1->SetBinError(22,113.5093);
   hmc__1->SetBinError(23,94.83563);
   hmc__1->SetBinError(24,67.91981);
   hmc__1->SetBinError(25,0.7961288);
   hmc__1->SetBinError(26,2.056181);
   hmc__1->SetMinimum(-19.06);
   hmc__1->SetMaximum(1524.8);
   hmc__1->SetEntries(16480.37);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-130,130);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(972.3531);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hbadmatch_stack_1->SetBinContent(0,0.02550039);
   hbadmatch_stack_1->SetBinContent(1,0.06195629);
   hbadmatch_stack_1->SetBinContent(2,23.08031);
   hbadmatch_stack_1->SetBinContent(3,32.31964);
   hbadmatch_stack_1->SetBinContent(4,18.58577);
   hbadmatch_stack_1->SetBinContent(5,20.66176);
   hbadmatch_stack_1->SetBinContent(6,18.35983);
   hbadmatch_stack_1->SetBinContent(7,17.15886);
   hbadmatch_stack_1->SetBinContent(8,15.51268);
   hbadmatch_stack_1->SetBinContent(9,16.1389);
   hbadmatch_stack_1->SetBinContent(10,17.27788);
   hbadmatch_stack_1->SetBinContent(11,16.51456);
   hbadmatch_stack_1->SetBinContent(12,16.32007);
   hbadmatch_stack_1->SetBinContent(13,14.81618);
   hbadmatch_stack_1->SetBinContent(14,14.9327);
   hbadmatch_stack_1->SetBinContent(15,16.62999);
   hbadmatch_stack_1->SetBinContent(16,19.54161);
   hbadmatch_stack_1->SetBinContent(17,17.5132);
   hbadmatch_stack_1->SetBinContent(18,20.32952);
   hbadmatch_stack_1->SetBinContent(19,24.14049);
   hbadmatch_stack_1->SetBinContent(20,28.00372);
   hbadmatch_stack_1->SetBinContent(21,26.93223);
   hbadmatch_stack_1->SetBinContent(22,27.40618);
   hbadmatch_stack_1->SetBinContent(23,40.90807);
   hbadmatch_stack_1->SetBinContent(24,37.22231);
   hbadmatch_stack_1->SetBinContent(25,0.07470649);
   hbadmatch_stack_1->SetBinContent(26,0.1876636);
   hbadmatch_stack_1->SetBinError(0,0.0180315);
   hbadmatch_stack_1->SetBinError(1,0.06195629);
   hbadmatch_stack_1->SetBinError(2,1.301932);
   hbadmatch_stack_1->SetBinError(3,1.494455);
   hbadmatch_stack_1->SetBinError(4,1.264489);
   hbadmatch_stack_1->SetBinError(5,1.418865);
   hbadmatch_stack_1->SetBinError(6,1.167399);
   hbadmatch_stack_1->SetBinError(7,1.068527);
   hbadmatch_stack_1->SetBinError(8,1.146403);
   hbadmatch_stack_1->SetBinError(9,1.149215);
   hbadmatch_stack_1->SetBinError(10,1.178199);
   hbadmatch_stack_1->SetBinError(11,1.297174);
   hbadmatch_stack_1->SetBinError(12,1.082573);
   hbadmatch_stack_1->SetBinError(13,1.122776);
   hbadmatch_stack_1->SetBinError(14,0.9815738);
   hbadmatch_stack_1->SetBinError(15,1.115752);
   hbadmatch_stack_1->SetBinError(16,1.649738);
   hbadmatch_stack_1->SetBinError(17,1.181381);
   hbadmatch_stack_1->SetBinError(18,1.235349);
   hbadmatch_stack_1->SetBinError(19,1.381129);
   hbadmatch_stack_1->SetBinError(20,1.493914);
   hbadmatch_stack_1->SetBinError(21,1.310765);
   hbadmatch_stack_1->SetBinError(22,1.433336);
   hbadmatch_stack_1->SetBinError(23,2.343773);
   hbadmatch_stack_1->SetBinError(24,1.666317);
   hbadmatch_stack_1->SetBinError(25,0.06325464);
   hbadmatch_stack_1->SetBinError(26,0.0921412);
   hbadmatch_stack_1->SetEntries(12616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hext_stack_2->SetBinContent(0,0.2972079);
   hext_stack_2->SetBinContent(2,47.02176);
   hext_stack_2->SetBinContent(3,75.8714);
   hext_stack_2->SetBinContent(4,54.28838);
   hext_stack_2->SetBinContent(5,49.73752);
   hext_stack_2->SetBinContent(6,47.99108);
   hext_stack_2->SetBinContent(7,50.58006);
   hext_stack_2->SetBinContent(8,53.86981);
   hext_stack_2->SetBinContent(9,55.23315);
   hext_stack_2->SetBinContent(10,60.87742);
   hext_stack_2->SetBinContent(11,55.7703);
   hext_stack_2->SetBinContent(12,62.24891);
   hext_stack_2->SetBinContent(13,62.60747);
   hext_stack_2->SetBinContent(14,66.74522);
   hext_stack_2->SetBinContent(15,83.04813);
   hext_stack_2->SetBinContent(16,89.39313);
   hext_stack_2->SetBinContent(17,88.68689);
   hext_stack_2->SetBinContent(18,109.1875);
   hext_stack_2->SetBinContent(19,113.4998);
   hext_stack_2->SetBinContent(20,137.1647);
   hext_stack_2->SetBinContent(21,154.1739);
   hext_stack_2->SetBinContent(22,187.1055);
   hext_stack_2->SetBinContent(23,219.5679);
   hext_stack_2->SetBinContent(24,231.6636);
   hext_stack_2->SetBinContent(25,0.5330666);
   hext_stack_2->SetBinContent(26,0.8057348);
   hext_stack_2->SetBinError(0,0.2020518);
   hext_stack_2->SetBinError(2,2.824079);
   hext_stack_2->SetBinError(3,3.470911);
   hext_stack_2->SetBinError(4,3.017544);
   hext_stack_2->SetBinError(5,2.869113);
   hext_stack_2->SetBinError(6,2.826184);
   hext_stack_2->SetBinError(7,2.890274);
   hext_stack_2->SetBinError(8,2.985723);
   hext_stack_2->SetBinError(9,3.019464);
   hext_stack_2->SetBinError(10,3.192214);
   hext_stack_2->SetBinError(11,3.014395);
   hext_stack_2->SetBinError(12,3.189025);
   hext_stack_2->SetBinError(13,3.195537);
   hext_stack_2->SetBinError(14,3.31189);
   hext_stack_2->SetBinError(15,3.735909);
   hext_stack_2->SetBinError(16,3.858752);
   hext_stack_2->SetBinError(17,3.823749);
   hext_stack_2->SetBinError(18,4.263972);
   hext_stack_2->SetBinError(19,4.356367);
   hext_stack_2->SetBinError(20,4.802133);
   hext_stack_2->SetBinError(21,5.130087);
   hext_stack_2->SetBinError(22,5.647091);
   hext_stack_2->SetBinError(23,6.034462);
   hext_stack_2->SetBinError(24,6.234436);
   hext_stack_2->SetBinError(25,0.2844242);
   hext_stack_2->SetBinError(26,0.3484551);
   hext_stack_2->SetEntries(39405);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hdirt_stack_3->SetBinContent(0,0.178269);
   hdirt_stack_3->SetBinContent(2,38.32962);
   hdirt_stack_3->SetBinContent(3,40.8318);
   hdirt_stack_3->SetBinContent(4,30.43487);
   hdirt_stack_3->SetBinContent(5,29.32044);
   hdirt_stack_3->SetBinContent(6,26.23747);
   hdirt_stack_3->SetBinContent(7,21.25251);
   hdirt_stack_3->SetBinContent(8,22.00112);
   hdirt_stack_3->SetBinContent(9,19.90816);
   hdirt_stack_3->SetBinContent(10,21.0865);
   hdirt_stack_3->SetBinContent(11,19.69487);
   hdirt_stack_3->SetBinContent(12,21.09485);
   hdirt_stack_3->SetBinContent(13,16.93301);
   hdirt_stack_3->SetBinContent(14,18.4206);
   hdirt_stack_3->SetBinContent(15,21.35327);
   hdirt_stack_3->SetBinContent(16,18.87672);
   hdirt_stack_3->SetBinContent(17,18.99648);
   hdirt_stack_3->SetBinContent(18,23.15998);
   hdirt_stack_3->SetBinContent(19,22.92742);
   hdirt_stack_3->SetBinContent(20,24.51239);
   hdirt_stack_3->SetBinContent(21,25.61374);
   hdirt_stack_3->SetBinContent(22,33.0143);
   hdirt_stack_3->SetBinContent(23,34.76316);
   hdirt_stack_3->SetBinContent(24,63.63762);
   hdirt_stack_3->SetBinContent(25,0.1093174);
   hdirt_stack_3->SetBinContent(26,0.1048574);
   hdirt_stack_3->SetBinError(0,0.08765965);
   hdirt_stack_3->SetBinError(2,1.57846);
   hdirt_stack_3->SetBinError(3,1.701041);
   hdirt_stack_3->SetBinError(4,1.433648);
   hdirt_stack_3->SetBinError(5,1.375835);
   hdirt_stack_3->SetBinError(6,1.102733);
   hdirt_stack_3->SetBinError(7,1.031516);
   hdirt_stack_3->SetBinError(8,1.427662);
   hdirt_stack_3->SetBinError(9,1.123276);
   hdirt_stack_3->SetBinError(10,1.187538);
   hdirt_stack_3->SetBinError(11,1.17671);
   hdirt_stack_3->SetBinError(12,1.579192);
   hdirt_stack_3->SetBinError(13,0.9623992);
   hdirt_stack_3->SetBinError(14,1.132138);
   hdirt_stack_3->SetBinError(15,1.291387);
   hdirt_stack_3->SetBinError(16,0.9602282);
   hdirt_stack_3->SetBinError(17,0.9351194);
   hdirt_stack_3->SetBinError(18,1.33167);
   hdirt_stack_3->SetBinError(19,1.148081);
   hdirt_stack_3->SetBinError(20,1.368041);
   hdirt_stack_3->SetBinError(21,1.23899);
   hdirt_stack_3->SetBinError(22,1.509555);
   hdirt_stack_3->SetBinError(23,1.433614);
   hdirt_stack_3->SetBinError(24,2.131868);
   hdirt_stack_3->SetBinError(25,0.07738334);
   hdirt_stack_3->SetBinError(26,0.06359251);
   hdirt_stack_3->SetEntries(20994);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   houtFV_stack_4->SetBinContent(0,0.8327268);
   houtFV_stack_4->SetBinContent(1,0.6596082);
   houtFV_stack_4->SetBinContent(2,92.7919);
   houtFV_stack_4->SetBinContent(3,80.97126);
   houtFV_stack_4->SetBinContent(4,46.91745);
   houtFV_stack_4->SetBinContent(5,41.17121);
   houtFV_stack_4->SetBinContent(6,37.04686);
   houtFV_stack_4->SetBinContent(7,34.86174);
   houtFV_stack_4->SetBinContent(8,33.95536);
   houtFV_stack_4->SetBinContent(9,32.76298);
   houtFV_stack_4->SetBinContent(10,35.53978);
   houtFV_stack_4->SetBinContent(11,30.82191);
   houtFV_stack_4->SetBinContent(12,31.11789);
   houtFV_stack_4->SetBinContent(13,34.02896);
   houtFV_stack_4->SetBinContent(14,31.99636);
   houtFV_stack_4->SetBinContent(15,33.01231);
   houtFV_stack_4->SetBinContent(16,33.84483);
   houtFV_stack_4->SetBinContent(17,31.89542);
   houtFV_stack_4->SetBinContent(18,32.86739);
   houtFV_stack_4->SetBinContent(19,33.87251);
   houtFV_stack_4->SetBinContent(20,35.54993);
   houtFV_stack_4->SetBinContent(21,35.67334);
   houtFV_stack_4->SetBinContent(22,45.63782);
   houtFV_stack_4->SetBinContent(23,57.69841);
   houtFV_stack_4->SetBinContent(24,143.2711);
   houtFV_stack_4->SetBinContent(25,0.4864895);
   houtFV_stack_4->SetBinContent(26,0.5703735);
   houtFV_stack_4->SetBinError(0,0.2172578);
   houtFV_stack_4->SetBinError(1,0.1893351);
   houtFV_stack_4->SetBinError(2,2.65229);
   houtFV_stack_4->SetBinError(3,2.4731);
   houtFV_stack_4->SetBinError(4,1.928202);
   houtFV_stack_4->SetBinError(5,1.717982);
   houtFV_stack_4->SetBinError(6,1.674385);
   houtFV_stack_4->SetBinError(7,1.549329);
   houtFV_stack_4->SetBinError(8,1.573044);
   houtFV_stack_4->SetBinError(9,1.701326);
   houtFV_stack_4->SetBinError(10,1.73975);
   houtFV_stack_4->SetBinError(11,1.395233);
   houtFV_stack_4->SetBinError(12,1.389131);
   houtFV_stack_4->SetBinError(13,1.619058);
   houtFV_stack_4->SetBinError(14,1.394686);
   houtFV_stack_4->SetBinError(15,1.57694);
   houtFV_stack_4->SetBinError(16,1.673969);
   houtFV_stack_4->SetBinError(17,1.479758);
   houtFV_stack_4->SetBinError(18,1.615999);
   houtFV_stack_4->SetBinError(19,1.537022);
   houtFV_stack_4->SetBinError(20,1.780994);
   houtFV_stack_4->SetBinError(21,1.595778);
   houtFV_stack_4->SetBinError(22,1.989726);
   houtFV_stack_4->SetBinError(23,2.135613);
   houtFV_stack_4->SetBinError(24,3.760518);
   houtFV_stack_4->SetBinError(25,0.1565075);
   houtFV_stack_4->SetBinError(26,0.1808738);
   houtFV_stack_4->SetEntries(25917);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hNCpi0inFV_stack_5->SetBinContent(0,0.0127502);
   hNCpi0inFV_stack_5->SetBinContent(1,0.07470649);
   hNCpi0inFV_stack_5->SetBinContent(2,3.967349);
   hNCpi0inFV_stack_5->SetBinContent(3,19.29977);
   hNCpi0inFV_stack_5->SetBinContent(4,31.23861);
   hNCpi0inFV_stack_5->SetBinContent(5,31.28646);
   hNCpi0inFV_stack_5->SetBinContent(6,34.1811);
   hNCpi0inFV_stack_5->SetBinContent(7,37.02731);
   hNCpi0inFV_stack_5->SetBinContent(8,36.62091);
   hNCpi0inFV_stack_5->SetBinContent(9,32.56485);
   hNCpi0inFV_stack_5->SetBinContent(10,32.79992);
   hNCpi0inFV_stack_5->SetBinContent(11,33.48249);
   hNCpi0inFV_stack_5->SetBinContent(12,33.10128);
   hNCpi0inFV_stack_5->SetBinContent(13,34.13712);
   hNCpi0inFV_stack_5->SetBinContent(14,31.73624);
   hNCpi0inFV_stack_5->SetBinContent(15,32.33879);
   hNCpi0inFV_stack_5->SetBinContent(16,30.09104);
   hNCpi0inFV_stack_5->SetBinContent(17,32.59035);
   hNCpi0inFV_stack_5->SetBinContent(18,32.00025);
   hNCpi0inFV_stack_5->SetBinContent(19,34.21864);
   hNCpi0inFV_stack_5->SetBinContent(20,29.12816);
   hNCpi0inFV_stack_5->SetBinContent(21,33.2946);
   hNCpi0inFV_stack_5->SetBinContent(22,27.53797);
   hNCpi0inFV_stack_5->SetBinContent(23,21.55837);
   hNCpi0inFV_stack_5->SetBinContent(24,6.696145);
   hNCpi0inFV_stack_5->SetBinContent(25,0.0127502);
   hNCpi0inFV_stack_5->SetBinContent(26,0.2241195);
   hNCpi0inFV_stack_5->SetBinError(0,0.0127502);
   hNCpi0inFV_stack_5->SetBinError(1,0.06325464);
   hNCpi0inFV_stack_5->SetBinError(2,0.4540244);
   hNCpi0inFV_stack_5->SetBinError(3,1.030106);
   hNCpi0inFV_stack_5->SetBinError(4,1.305057);
   hNCpi0inFV_stack_5->SetBinError(5,1.298987);
   hNCpi0inFV_stack_5->SetBinError(6,1.359165);
   hNCpi0inFV_stack_5->SetBinError(7,1.417256);
   hNCpi0inFV_stack_5->SetBinError(8,1.406785);
   hNCpi0inFV_stack_5->SetBinError(9,1.325369);
   hNCpi0inFV_stack_5->SetBinError(10,1.331088);
   hNCpi0inFV_stack_5->SetBinError(11,1.335881);
   hNCpi0inFV_stack_5->SetBinError(12,1.337113);
   hNCpi0inFV_stack_5->SetBinError(13,1.364573);
   hNCpi0inFV_stack_5->SetBinError(14,1.301682);
   hNCpi0inFV_stack_5->SetBinError(15,1.324303);
   hNCpi0inFV_stack_5->SetBinError(16,1.279357);
   hNCpi0inFV_stack_5->SetBinError(17,1.325492);
   hNCpi0inFV_stack_5->SetBinError(18,1.324954);
   hNCpi0inFV_stack_5->SetBinError(19,1.365298);
   hNCpi0inFV_stack_5->SetBinError(20,1.245475);
   hNCpi0inFV_stack_5->SetBinError(21,1.335876);
   hNCpi0inFV_stack_5->SetBinError(22,1.201067);
   hNCpi0inFV_stack_5->SetBinError(23,1.077743);
   hNCpi0inFV_stack_5->SetBinError(24,0.5843469);
   hNCpi0inFV_stack_5->SetBinError(25,0.0127502);
   hNCpi0inFV_stack_5->SetBinError(26,0.1095603);
   hNCpi0inFV_stack_5->SetEntries(17673);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hCCpi0inFV_stack_6->SetBinContent(0,0.2496199);
   hCCpi0inFV_stack_6->SetBinContent(1,0.02550039);
   hCCpi0inFV_stack_6->SetBinContent(2,9.780236);
   hCCpi0inFV_stack_6->SetBinContent(3,41.70754);
   hCCpi0inFV_stack_6->SetBinContent(4,65.32951);
   hCCpi0inFV_stack_6->SetBinContent(5,68.65244);
   hCCpi0inFV_stack_6->SetBinContent(6,67.85365);
   hCCpi0inFV_stack_6->SetBinContent(7,68.96957);
   hCCpi0inFV_stack_6->SetBinContent(8,65.65986);
   hCCpi0inFV_stack_6->SetBinContent(9,69.22817);
   hCCpi0inFV_stack_6->SetBinContent(10,68.7684);
   hCCpi0inFV_stack_6->SetBinContent(11,70.01669);
   hCCpi0inFV_stack_6->SetBinContent(12,67.04633);
   hCCpi0inFV_stack_6->SetBinContent(13,65.80043);
   hCCpi0inFV_stack_6->SetBinContent(14,67.77964);
   hCCpi0inFV_stack_6->SetBinContent(15,69.78928);
   hCCpi0inFV_stack_6->SetBinContent(16,65.78137);
   hCCpi0inFV_stack_6->SetBinContent(17,65.19289);
   hCCpi0inFV_stack_6->SetBinContent(18,67.35305);
   hCCpi0inFV_stack_6->SetBinContent(19,67.05972);
   hCCpi0inFV_stack_6->SetBinContent(20,65.79693);
   hCCpi0inFV_stack_6->SetBinContent(21,66.8147);
   hCCpi0inFV_stack_6->SetBinContent(22,61.98155);
   hCCpi0inFV_stack_6->SetBinContent(23,47.68248);
   hCCpi0inFV_stack_6->SetBinContent(24,11.82391);
   hCCpi0inFV_stack_6->SetBinContent(25,0.06195629);
   hCCpi0inFV_stack_6->SetBinContent(26,0.149413);
   hCCpi0inFV_stack_6->SetBinError(0,0.1110342);
   hCCpi0inFV_stack_6->SetBinError(1,0.0180315);
   hCCpi0inFV_stack_6->SetBinError(2,0.7325348);
   hCCpi0inFV_stack_6->SetBinError(3,1.487981);
   hCCpi0inFV_stack_6->SetBinError(4,1.883574);
   hCCpi0inFV_stack_6->SetBinError(5,1.930605);
   hCCpi0inFV_stack_6->SetBinError(6,1.9168);
   hCCpi0inFV_stack_6->SetBinError(7,1.935037);
   hCCpi0inFV_stack_6->SetBinError(8,1.873516);
   hCCpi0inFV_stack_6->SetBinError(9,1.933792);
   hCCpi0inFV_stack_6->SetBinError(10,1.92732);
   hCCpi0inFV_stack_6->SetBinError(11,1.946315);
   hCCpi0inFV_stack_6->SetBinError(12,1.903186);
   hCCpi0inFV_stack_6->SetBinError(13,1.881592);
   hCCpi0inFV_stack_6->SetBinError(14,1.921373);
   hCCpi0inFV_stack_6->SetBinError(15,1.957979);
   hCCpi0inFV_stack_6->SetBinError(16,1.885041);
   hCCpi0inFV_stack_6->SetBinError(17,1.878981);
   hCCpi0inFV_stack_6->SetBinError(18,1.910057);
   hCCpi0inFV_stack_6->SetBinError(19,1.90834);
   hCCpi0inFV_stack_6->SetBinError(20,1.882887);
   hCCpi0inFV_stack_6->SetBinError(21,1.901607);
   hCCpi0inFV_stack_6->SetBinError(22,1.834058);
   hCCpi0inFV_stack_6->SetBinError(23,1.605784);
   hCCpi0inFV_stack_6->SetBinError(24,0.8031477);
   hCCpi0inFV_stack_6->SetBinError(25,0.06195629);
   hCCpi0inFV_stack_6->SetBinError(26,0.08945557);
   hCCpi0inFV_stack_6->SetEntries(36603);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hNCinFV_stack_7->SetBinContent(0,0.08745668);
   hNCinFV_stack_7->SetBinContent(1,0.0127502);
   hNCinFV_stack_7->SetBinContent(2,6.435771);
   hNCinFV_stack_7->SetBinContent(3,35.43099);
   hNCinFV_stack_7->SetBinContent(4,52.73705);
   hNCinFV_stack_7->SetBinContent(5,54.67438);
   hNCinFV_stack_7->SetBinContent(6,59.07495);
   hNCinFV_stack_7->SetBinContent(7,56.91188);
   hNCinFV_stack_7->SetBinContent(8,57.50425);
   hNCinFV_stack_7->SetBinContent(9,60.72938);
   hNCinFV_stack_7->SetBinContent(10,55.57332);
   hNCinFV_stack_7->SetBinContent(11,58.38751);
   hNCinFV_stack_7->SetBinContent(12,54.23508);
   hNCinFV_stack_7->SetBinContent(13,56.49341);
   hNCinFV_stack_7->SetBinContent(14,52.39317);
   hNCinFV_stack_7->SetBinContent(15,55.18986);
   hNCinFV_stack_7->SetBinContent(16,51.87945);
   hNCinFV_stack_7->SetBinContent(17,54.08957);
   hNCinFV_stack_7->SetBinContent(18,56.17748);
   hNCinFV_stack_7->SetBinContent(19,54.56812);
   hNCinFV_stack_7->SetBinContent(20,53.95065);
   hNCinFV_stack_7->SetBinContent(21,52.70453);
   hNCinFV_stack_7->SetBinContent(22,51.77915);
   hNCinFV_stack_7->SetBinContent(23,36.74438);
   hNCinFV_stack_7->SetBinContent(24,9.429322);
   hNCinFV_stack_7->SetBinContent(25,0.06195629);
   hNCinFV_stack_7->SetBinContent(26,0.1621632);
   hNCinFV_stack_7->SetBinError(0,0.06452687);
   hNCinFV_stack_7->SetBinError(1,0.0127502);
   hNCinFV_stack_7->SetBinError(2,0.5893108);
   hNCinFV_stack_7->SetBinError(3,1.38056);
   hNCinFV_stack_7->SetBinError(4,1.692467);
   hNCinFV_stack_7->SetBinError(5,1.716682);
   hNCinFV_stack_7->SetBinError(6,1.783829);
   hNCinFV_stack_7->SetBinError(7,1.752528);
   hNCinFV_stack_7->SetBinError(8,1.764701);
   hNCinFV_stack_7->SetBinError(9,1.812838);
   hNCinFV_stack_7->SetBinError(10,1.727229);
   hNCinFV_stack_7->SetBinError(11,1.769553);
   hNCinFV_stack_7->SetBinError(12,1.706146);
   hNCinFV_stack_7->SetBinError(13,1.735496);
   hNCinFV_stack_7->SetBinError(14,1.676675);
   hNCinFV_stack_7->SetBinError(15,1.722594);
   hNCinFV_stack_7->SetBinError(16,1.659139);
   hNCinFV_stack_7->SetBinError(17,1.701596);
   hNCinFV_stack_7->SetBinError(18,1.73548);
   hNCinFV_stack_7->SetBinError(19,1.708786);
   hNCinFV_stack_7->SetBinError(20,1.693414);
   hNCinFV_stack_7->SetBinError(21,1.680572);
   hNCinFV_stack_7->SetBinError(22,1.674329);
   hNCinFV_stack_7->SetBinError(23,1.4069);
   hNCinFV_stack_7->SetBinError(24,0.7080147);
   hNCinFV_stack_7->SetBinError(25,0.06195629);
   hNCinFV_stack_7->SetBinError(26,0.09035965);
   hNCinFV_stack_7->SetEntries(30232);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hnumuCCinFV_stack_8->SetBinContent(0,0.2233387);
   hnumuCCinFV_stack_8->SetBinContent(1,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(2,65.43449);
   hnumuCCinFV_stack_8->SetBinContent(3,327.352);
   hnumuCCinFV_stack_8->SetBinContent(4,491.9576);
   hnumuCCinFV_stack_8->SetBinContent(5,533.8038);
   hnumuCCinFV_stack_8->SetBinContent(6,556.2123);
   hnumuCCinFV_stack_8->SetBinContent(7,545.3437);
   hnumuCCinFV_stack_8->SetBinContent(8,543.7855);
   hnumuCCinFV_stack_8->SetBinContent(9,554.204);
   hnumuCCinFV_stack_8->SetBinContent(10,540.4459);
   hnumuCCinFV_stack_8->SetBinContent(11,540.3464);
   hnumuCCinFV_stack_8->SetBinContent(12,525.623);
   hnumuCCinFV_stack_8->SetBinContent(13,524.8526);
   hnumuCCinFV_stack_8->SetBinContent(14,542.0443);
   hnumuCCinFV_stack_8->SetBinContent(15,539.1495);
   hnumuCCinFV_stack_8->SetBinContent(16,531.1334);
   hnumuCCinFV_stack_8->SetBinContent(17,528.1101);
   hnumuCCinFV_stack_8->SetBinContent(18,524.4847);
   hnumuCCinFV_stack_8->SetBinContent(19,514.2936);
   hnumuCCinFV_stack_8->SetBinContent(20,515.147);
   hnumuCCinFV_stack_8->SetBinContent(21,527.1429);
   hnumuCCinFV_stack_8->SetBinContent(22,485.869);
   hnumuCCinFV_stack_8->SetBinContent(23,359.9694);
   hnumuCCinFV_stack_8->SetBinContent(24,92.31456);
   hnumuCCinFV_stack_8->SetBinContent(25,0.135225);
   hnumuCCinFV_stack_8->SetBinContent(26,0.3883602);
   hnumuCCinFV_stack_8->SetBinError(0,0.1202046);
   hnumuCCinFV_stack_8->SetBinError(1,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(2,2.585787);
   hnumuCCinFV_stack_8->SetBinError(3,5.922604);
   hnumuCCinFV_stack_8->SetBinError(4,7.26024);
   hnumuCCinFV_stack_8->SetBinError(5,7.359412);
   hnumuCCinFV_stack_8->SetBinError(6,7.906994);
   hnumuCCinFV_stack_8->SetBinError(7,7.523906);
   hnumuCCinFV_stack_8->SetBinError(8,7.612271);
   hnumuCCinFV_stack_8->SetBinError(9,7.884698);
   hnumuCCinFV_stack_8->SetBinError(10,7.499103);
   hnumuCCinFV_stack_8->SetBinError(11,7.580171);
   hnumuCCinFV_stack_8->SetBinError(12,7.237876);
   hnumuCCinFV_stack_8->SetBinError(13,7.324081);
   hnumuCCinFV_stack_8->SetBinError(14,7.73183);
   hnumuCCinFV_stack_8->SetBinError(15,7.806716);
   hnumuCCinFV_stack_8->SetBinError(16,7.396988);
   hnumuCCinFV_stack_8->SetBinError(17,7.667118);
   hnumuCCinFV_stack_8->SetBinError(18,7.365884);
   hnumuCCinFV_stack_8->SetBinError(19,7.332301);
   hnumuCCinFV_stack_8->SetBinError(20,7.309073);
   hnumuCCinFV_stack_8->SetBinError(21,7.627791);
   hnumuCCinFV_stack_8->SetBinError(22,7.112107);
   hnumuCCinFV_stack_8->SetBinError(23,6.452005);
   hnumuCCinFV_stack_8->SetBinError(24,2.990111);
   hnumuCCinFV_stack_8->SetBinError(25,0.09595249);
   hnumuCCinFV_stack_8->SetBinError(26,0.1461763);
   hnumuCCinFV_stack_8->SetEntries(241660);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hnueCCinFV_stack_9->SetBinContent(2,0.4323514);
   hnueCCinFV_stack_9->SetBinContent(3,2.943643);
   hnueCCinFV_stack_9->SetBinContent(4,4.993223);
   hnueCCinFV_stack_9->SetBinContent(5,4.016943);
   hnueCCinFV_stack_9->SetBinContent(6,3.572773);
   hnueCCinFV_stack_9->SetBinContent(7,3.211126);
   hnueCCinFV_stack_9->SetBinContent(8,3.703261);
   hnueCCinFV_stack_9->SetBinContent(9,3.948454);
   hnueCCinFV_stack_9->SetBinContent(10,3.869349);
   hnueCCinFV_stack_9->SetBinContent(11,4.391164);
   hnueCCinFV_stack_9->SetBinContent(12,4.441017);
   hnueCCinFV_stack_9->SetBinContent(13,4.374472);
   hnueCCinFV_stack_9->SetBinContent(14,2.86797);
   hnueCCinFV_stack_9->SetBinContent(15,5.076799);
   hnueCCinFV_stack_9->SetBinContent(16,3.730692);
   hnueCCinFV_stack_9->SetBinContent(17,4.183393);
   hnueCCinFV_stack_9->SetBinContent(18,4.141171);
   hnueCCinFV_stack_9->SetBinContent(19,4.062148);
   hnueCCinFV_stack_9->SetBinContent(20,4.053764);
   hnueCCinFV_stack_9->SetBinContent(21,3.700649);
   hnueCCinFV_stack_9->SetBinContent(22,3.792024);
   hnueCCinFV_stack_9->SetBinContent(23,2.928224);
   hnueCCinFV_stack_9->SetBinContent(24,0.7312578);
   hnueCCinFV_stack_9->SetBinContent(26,0.0127502);
   hnueCCinFV_stack_9->SetBinError(2,0.1490494);
   hnueCCinFV_stack_9->SetBinError(3,0.6491616);
   hnueCCinFV_stack_9->SetBinError(4,0.8909794);
   hnueCCinFV_stack_9->SetBinError(5,0.5412778);
   hnueCCinFV_stack_9->SetBinError(6,0.4552532);
   hnueCCinFV_stack_9->SetBinError(7,0.4186799);
   hnueCCinFV_stack_9->SetBinError(8,0.4742013);
   hnueCCinFV_stack_9->SetBinError(9,0.5278125);
   hnueCCinFV_stack_9->SetBinError(10,0.6012716);
   hnueCCinFV_stack_9->SetBinError(11,0.8293131);
   hnueCCinFV_stack_9->SetBinError(12,0.666485);
   hnueCCinFV_stack_9->SetBinError(13,0.6627134);
   hnueCCinFV_stack_9->SetBinError(14,0.4581506);
   hnueCCinFV_stack_9->SetBinError(15,0.7593945);
   hnueCCinFV_stack_9->SetBinError(16,0.463841);
   hnueCCinFV_stack_9->SetBinError(17,0.6501016);
   hnueCCinFV_stack_9->SetBinError(18,0.5186229);
   hnueCCinFV_stack_9->SetBinError(19,0.5031536);
   hnueCCinFV_stack_9->SetBinError(20,0.7507882);
   hnueCCinFV_stack_9->SetBinError(21,0.4779615);
   hnueCCinFV_stack_9->SetBinError(22,0.4769049);
   hnueCCinFV_stack_9->SetBinError(23,0.4235343);
   hnueCCinFV_stack_9->SetBinError(24,0.1977459);
   hnueCCinFV_stack_9->SetBinError(26,0.0127502);
   hnueCCinFV_stack_9->SetEntries(2003);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_reco_nuvtxY_all",25,-130,130);
   hmcerror__2->SetBinContent(0,1.90687);
   hmcerror__2->SetBinContent(1,0.909228);
   hmcerror__2->SetBinContent(2,287.2738);
   hmcerror__2->SetBinContent(3,656.7281);
   hmcerror__2->SetBinContent(4,796.4825);
   hmcerror__2->SetBinContent(5,833.325);
   hmcerror__2->SetBinContent(6,850.53);
   hmcerror__2->SetBinContent(7,835.3168);
   hmcerror__2->SetBinContent(8,832.6128);
   hmcerror__2->SetBinContent(9,844.7181);
   hmcerror__2->SetBinContent(10,836.2385);
   hmcerror__2->SetBinContent(11,829.4259);
   hmcerror__2->SetBinContent(12,815.2285);
   hmcerror__2->SetBinContent(13,814.0436);
   hmcerror__2->SetBinContent(14,828.9161);
   hmcerror__2->SetBinContent(15,855.5879);
   hmcerror__2->SetBinContent(16,844.2723);
   hmcerror__2->SetBinContent(17,841.2584);
   hmcerror__2->SetBinContent(18,869.7011);
   hmcerror__2->SetBinContent(19,868.6424);
   hmcerror__2->SetBinContent(20,893.3073);
   hmcerror__2->SetBinContent(21,926.0505);
   hmcerror__2->SetBinContent(22,924.1235);
   hmcerror__2->SetBinContent(23,821.8204);
   hmcerror__2->SetBinContent(24,596.7898);
   hmcerror__2->SetBinContent(25,1.475468);
   hmcerror__2->SetBinContent(26,2.605435);
   hmcerror__2->SetBinError(0,0.3565659);
   hmcerror__2->SetBinError(1,0.9456864);
   hmcerror__2->SetBinError(2,42.75452);
   hmcerror__2->SetBinError(3,92.91978);
   hmcerror__2->SetBinError(4,111.8272);
   hmcerror__2->SetBinError(5,117.7991);
   hmcerror__2->SetBinError(6,122.9768);
   hmcerror__2->SetBinError(7,118.218);
   hmcerror__2->SetBinError(8,117.8808);
   hmcerror__2->SetBinError(9,118.3926);
   hmcerror__2->SetBinError(10,116.4494);
   hmcerror__2->SetBinError(11,118.3673);
   hmcerror__2->SetBinError(12,110.4344);
   hmcerror__2->SetBinError(13,111.3849);
   hmcerror__2->SetBinError(14,117.3384);
   hmcerror__2->SetBinError(15,119.4658);
   hmcerror__2->SetBinError(16,113.1173);
   hmcerror__2->SetBinError(17,113.6315);
   hmcerror__2->SetBinError(18,118.2844);
   hmcerror__2->SetBinError(19,115.0081);
   hmcerror__2->SetBinError(20,112.7603);
   hmcerror__2->SetBinError(21,116.8226);
   hmcerror__2->SetBinError(22,113.5093);
   hmcerror__2->SetBinError(23,94.83563);
   hmcerror__2->SetBinError(24,67.91981);
   hmcerror__2->SetBinError(25,0.7961288);
   hmcerror__2->SetBinError(26,2.056181);
   hmcerror__2->SetEntries(16480.37);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3001[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3001[25] = {
   0,
   253,
   640,
   820,
   854,
   845,
   849,
   861,
   848,
   849,
   879,
   863,
   851,
   886,
   856,
   875,
   887,
   881,
   949,
   937,
   953,
   940,
   811,
   544,
   3};
   Double_t _felx3001[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3001[25] = {
   0,
   15.90597,
   25.29822,
   28.63564,
   29.22328,
   29.06888,
   29.1376,
   29.3428,
   29.12044,
   29.1376,
   29.64793,
   29.37686,
   29.1719,
   29.76575,
   29.25748,
   29.5804,
   29.78255,
   29.68164,
   30.80584,
   30.61046,
   30.8707,
   30.65942,
   28.47806,
   23.32381,
   2.143368};
   Double_t _fehx3001[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3001[25] = {
   1.1478,
   15.90597,
   25.29822,
   28.63564,
   29.22328,
   29.06888,
   29.1376,
   29.3428,
   29.12044,
   29.1376,
   29.64793,
   29.37686,
   29.1719,
   29.76575,
   29.25748,
   29.5804,
   29.78255,
   29.68164,
   30.80584,
   30.61046,
   30.8707,
   30.65942,
   28.47806,
   23.32381,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1082.258);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.02#pm0.01(data err)#pm0.13(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.08/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18934.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 500.4","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 2156.9","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 612.5","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 1048.5","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  671.0","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1386.0","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1137.2","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10909.2","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 83.2","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3002[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3002[25] = {
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
   1,
   1};
   Double_t _felx3002[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3002[25] = {
   1.040098,
   0.1488285,
   0.141489,
   0.1404013,
   0.1413603,
   0.1445884,
   0.1415247,
   0.1415794,
   0.1401563,
   0.1392538,
   0.1427099,
   0.1354644,
   0.1368291,
   0.1415564,
   0.13963,
   0.1339821,
   0.1350732,
   0.1360058,
   0.1323998,
   0.126228,
   0.1261514,
   0.1228292,
   0.115397,
   0.1138086,
   0.5395773};
   Double_t _fehx3002[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3002[25] = {
   1.040098,
   0.1488285,
   0.141489,
   0.1404013,
   0.1413603,
   0.1445884,
   0.1415247,
   0.1415794,
   0.1401563,
   0.1392538,
   0.1427099,
   0.1354644,
   0.1368291,
   0.1415564,
   0.13963,
   0.1339821,
   0.1350732,
   0.1360058,
   0.1323998,
   0.126228,
   0.1261514,
   0.1228292,
   0.115397,
   0.1138086,
   0.5395773};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-156,156);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Vertex Y [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3003[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3003[25] = {
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
   1,
   1};
   Double_t _felx3003[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3003[25] = {
   0.3876296,
   0.1387556,
   0.1336369,
   0.1375064,
   0.1386503,
   0.1433415,
   0.1384545,
   0.1404399,
   0.1386509,
   0.1377097,
   0.1410446,
   0.1342912,
   0.1342647,
   0.1388629,
   0.1374157,
   0.1326129,
   0.133412,
   0.132223,
   0.1311697,
   0.1239539,
   0.1243164,
   0.1212467,
   0.1126691,
   0.103313,
   0.2872498};
   Double_t _fehx3003[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3003[25] = {
   0.3876296,
   0.1387556,
   0.1336369,
   0.1375064,
   0.1386503,
   0.1433415,
   0.1384545,
   0.1404399,
   0.1386509,
   0.1377097,
   0.1410446,
   0.1342912,
   0.1342647,
   0.1388629,
   0.1374157,
   0.1326129,
   0.133412,
   0.132223,
   0.1311697,
   0.1239539,
   0.1243164,
   0.1212467,
   0.1126691,
   0.103313,
   0.2872498};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-156,156);
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
   
   Double_t _fx3004[25] = {
   -124.8,
   -114.4,
   -104,
   -93.6,
   -83.2,
   -72.8,
   -62.4,
   -52,
   -41.6,
   -31.2,
   -20.8,
   -10.4,
   1.154632e-14,
   10.4,
   20.8,
   31.2,
   41.6,
   52,
   62.4,
   72.8,
   83.2,
   93.6,
   104,
   114.4,
   124.8};
   Double_t _fy3004[25] = {
   0,
   0.880693,
   0.9745281,
   1.029527,
   1.02481,
   0.9934981,
   1.016381,
   1.034094,
   1.003885,
   1.015261,
   1.059769,
   1.058599,
   1.045399,
   1.068866,
   1.000482,
   1.036396,
   1.054373,
   1.012992,
   1.092509,
   1.048911,
   1.029102,
   1.01718,
   0.9868336,
   0.9115437,
   2.033254};
   Double_t _felx3004[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fely3004[25] = {
   0,
   0.05536869,
   0.03852161,
   0.03595263,
   0.03506828,
   0.03417737,
   0.0348821,
   0.03524183,
   0.03447356,
   0.03484366,
   0.03574513,
   0.03603513,
   0.0358358,
   0.03590924,
   0.03419576,
   0.03503656,
   0.03540238,
   0.03412856,
   0.03546436,
   0.03426644,
   0.03333587,
   0.03317676,
   0.03465241,
   0.03908212,
   1.45267};
   Double_t _fehx3004[25] = {
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2,
   5.2};
   Double_t _fehy3004[25] = {
   1.26239,
   0.05536869,
   0.03852161,
   0.03595263,
   0.03506828,
   0.03417737,
   0.0348821,
   0.03524183,
   0.03447356,
   0.03484366,
   0.03574513,
   0.03603513,
   0.0358358,
   0.03590924,
   0.03419576,
   0.03503656,
   0.03540238,
   0.03412856,
   0.03546436,
   0.03426644,
   0.03333587,
   0.03317676,
   0.03465241,
   0.03908212,
   1.168592};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.52203);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_reco_nuvtxY_all",25,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
