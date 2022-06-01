#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  1 00:24:18 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-169.2308,-136.9379,1241.026,14421.72);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__1->SetBinContent(0,33.64439);
   hmc__1->SetBinContent(1,6846.895);
   hmc__1->SetBinContent(2,4061.537);
   hmc__1->SetBinContent(3,3961.508);
   hmc__1->SetBinContent(4,4136.806);
   hmc__1->SetBinContent(5,3789.782);
   hmc__1->SetBinContent(6,3591.347);
   hmc__1->SetBinContent(7,3474.123);
   hmc__1->SetBinContent(8,3753.922);
   hmc__1->SetBinContent(9,3425.31);
   hmc__1->SetBinContent(10,3170.534);
   hmc__1->SetBinContent(11,3019.06);
   hmc__1->SetBinContent(12,3105.382);
   hmc__1->SetBinContent(13,3060.559);
   hmc__1->SetBinContent(14,3091.604);
   hmc__1->SetBinContent(15,3304.539);
   hmc__1->SetBinContent(16,3111.914);
   hmc__1->SetBinContent(17,2927.928);
   hmc__1->SetBinContent(18,2970.234);
   hmc__1->SetBinContent(19,3068.112);
   hmc__1->SetBinContent(20,3262.777);
   hmc__1->SetBinContent(21,5022.779);
   hmc__1->SetBinContent(22,3712.194);
   hmc__1->SetBinContent(23,3074.706);
   hmc__1->SetBinContent(24,3167.53);
   hmc__1->SetBinContent(25,2983.324);
   hmc__1->SetBinContent(26,3150.418);
   hmc__1->SetBinContent(27,2864.235);
   hmc__1->SetBinContent(28,2939.01);
   hmc__1->SetBinContent(29,3208.798);
   hmc__1->SetBinContent(30,3156.446);
   hmc__1->SetBinContent(31,162.3893);
   hmc__1->SetBinError(0,2.971201);
   hmc__1->SetBinError(1,1000.371);
   hmc__1->SetBinError(2,531.3423);
   hmc__1->SetBinError(3,529.1515);
   hmc__1->SetBinError(4,574.1515);
   hmc__1->SetBinError(5,512.1657);
   hmc__1->SetBinError(6,479.8636);
   hmc__1->SetBinError(7,435.5653);
   hmc__1->SetBinError(8,465.6998);
   hmc__1->SetBinError(9,450.368);
   hmc__1->SetBinError(10,394.5658);
   hmc__1->SetBinError(11,402.6786);
   hmc__1->SetBinError(12,403.9483);
   hmc__1->SetBinError(13,419.4836);
   hmc__1->SetBinError(14,386.9876);
   hmc__1->SetBinError(15,407.131);
   hmc__1->SetBinError(16,414.077);
   hmc__1->SetBinError(17,367.9836);
   hmc__1->SetBinError(18,387.8596);
   hmc__1->SetBinError(19,384.907);
   hmc__1->SetBinError(20,433.138);
   hmc__1->SetBinError(21,510.88);
   hmc__1->SetBinError(22,464.1234);
   hmc__1->SetBinError(23,436.347);
   hmc__1->SetBinError(24,419.1588);
   hmc__1->SetBinError(25,415.3922);
   hmc__1->SetBinError(26,414.1566);
   hmc__1->SetBinError(27,406.1045);
   hmc__1->SetBinError(28,441.8144);
   hmc__1->SetBinError(29,465.786);
   hmc__1->SetBinError(30,422.9972);
   hmc__1->SetBinError(31,30.13087);
   hmc__1->SetBinError(32,0.4212968);
   hmc__1->SetBinError(33,0.4212968);
   hmc__1->SetMinimum(-136.9379);
   hmc__1->SetMaximum(13693.79);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",32,0,1100);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(7189.24);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,2.320897);
   hbadmatch_stack_1->SetBinContent(1,439.1025);
   hbadmatch_stack_1->SetBinContent(2,199.0456);
   hbadmatch_stack_1->SetBinContent(3,170.0105);
   hbadmatch_stack_1->SetBinContent(4,159.4805);
   hbadmatch_stack_1->SetBinContent(5,148.1988);
   hbadmatch_stack_1->SetBinContent(6,152.3206);
   hbadmatch_stack_1->SetBinContent(7,149.7234);
   hbadmatch_stack_1->SetBinContent(8,134.3849);
   hbadmatch_stack_1->SetBinContent(9,133.5022);
   hbadmatch_stack_1->SetBinContent(10,124.4492);
   hbadmatch_stack_1->SetBinContent(11,118.9046);
   hbadmatch_stack_1->SetBinContent(12,126.0872);
   hbadmatch_stack_1->SetBinContent(13,114.1491);
   hbadmatch_stack_1->SetBinContent(14,120.1566);
   hbadmatch_stack_1->SetBinContent(15,108.0645);
   hbadmatch_stack_1->SetBinContent(16,106.9615);
   hbadmatch_stack_1->SetBinContent(17,106.2927);
   hbadmatch_stack_1->SetBinContent(18,127.3262);
   hbadmatch_stack_1->SetBinContent(19,124.7947);
   hbadmatch_stack_1->SetBinContent(20,129.2513);
   hbadmatch_stack_1->SetBinContent(21,268.4446);
   hbadmatch_stack_1->SetBinContent(22,137.0366);
   hbadmatch_stack_1->SetBinContent(23,107.6645);
   hbadmatch_stack_1->SetBinContent(24,131.1855);
   hbadmatch_stack_1->SetBinContent(25,133.236);
   hbadmatch_stack_1->SetBinContent(26,159.5758);
   hbadmatch_stack_1->SetBinContent(27,150.3163);
   hbadmatch_stack_1->SetBinContent(28,173.6032);
   hbadmatch_stack_1->SetBinContent(29,266.9766);
   hbadmatch_stack_1->SetBinContent(30,346.593);
   hbadmatch_stack_1->SetBinContent(31,14.10268);
   hbadmatch_stack_1->SetBinError(0,0.8079387);
   hbadmatch_stack_1->SetBinError(1,13.59574);
   hbadmatch_stack_1->SetBinError(2,8.208761);
   hbadmatch_stack_1->SetBinError(3,7.721615);
   hbadmatch_stack_1->SetBinError(4,8.485317);
   hbadmatch_stack_1->SetBinError(5,7.085226);
   hbadmatch_stack_1->SetBinError(6,9.502474);
   hbadmatch_stack_1->SetBinError(7,7.770391);
   hbadmatch_stack_1->SetBinError(8,6.677259);
   hbadmatch_stack_1->SetBinError(9,8.098148);
   hbadmatch_stack_1->SetBinError(10,6.584546);
   hbadmatch_stack_1->SetBinError(11,7.529482);
   hbadmatch_stack_1->SetBinError(12,7.387423);
   hbadmatch_stack_1->SetBinError(13,6.283449);
   hbadmatch_stack_1->SetBinError(14,6.763929);
   hbadmatch_stack_1->SetBinError(15,6.10785);
   hbadmatch_stack_1->SetBinError(16,7.135981);
   hbadmatch_stack_1->SetBinError(17,5.946178);
   hbadmatch_stack_1->SetBinError(18,7.610781);
   hbadmatch_stack_1->SetBinError(19,11.14972);
   hbadmatch_stack_1->SetBinError(20,6.764152);
   hbadmatch_stack_1->SetBinError(21,11.08139);
   hbadmatch_stack_1->SetBinError(22,7.340821);
   hbadmatch_stack_1->SetBinError(23,6.051218);
   hbadmatch_stack_1->SetBinError(24,6.89311);
   hbadmatch_stack_1->SetBinError(25,8.438679);
   hbadmatch_stack_1->SetBinError(26,8.620404);
   hbadmatch_stack_1->SetBinError(27,7.40863);
   hbadmatch_stack_1->SetBinError(28,7.79143);
   hbadmatch_stack_1->SetBinError(29,9.416234);
   hbadmatch_stack_1->SetBinError(30,13.16251);
   hbadmatch_stack_1->SetBinError(31,2.11568);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,4.550381);
   hext_stack_2->SetBinContent(1,1749.931);
   hext_stack_2->SetBinContent(2,990.2184);
   hext_stack_2->SetBinContent(3,971.9277);
   hext_stack_2->SetBinContent(4,1044.213);
   hext_stack_2->SetBinContent(5,957.5889);
   hext_stack_2->SetBinContent(6,911.8508);
   hext_stack_2->SetBinContent(7,860.9612);
   hext_stack_2->SetBinContent(8,1068.557);
   hext_stack_2->SetBinContent(9,856.1919);
   hext_stack_2->SetBinContent(10,805.4142);
   hext_stack_2->SetBinContent(11,761.5873);
   hext_stack_2->SetBinContent(12,700.1287);
   hext_stack_2->SetBinContent(13,734.8828);
   hext_stack_2->SetBinContent(14,773.9095);
   hext_stack_2->SetBinContent(15,838.2431);
   hext_stack_2->SetBinContent(16,844.7137);
   hext_stack_2->SetBinContent(17,752.537);
   hext_stack_2->SetBinContent(18,728.2916);
   hext_stack_2->SetBinContent(19,772.8468);
   hext_stack_2->SetBinContent(20,798.8122);
   hext_stack_2->SetBinContent(21,1777.687);
   hext_stack_2->SetBinContent(22,1073.936);
   hext_stack_2->SetBinContent(23,741.6241);
   hext_stack_2->SetBinContent(24,721.6074);
   hext_stack_2->SetBinContent(25,616.9788);
   hext_stack_2->SetBinContent(26,679.5714);
   hext_stack_2->SetBinContent(27,584.7289);
   hext_stack_2->SetBinContent(28,555.3479);
   hext_stack_2->SetBinContent(29,679.9996);
   hext_stack_2->SetBinContent(30,708.5222);
   hext_stack_2->SetBinContent(31,51.27494);
   hext_stack_2->SetBinError(0,1.320423);
   hext_stack_2->SetBinError(1,28.73715);
   hext_stack_2->SetBinError(2,21.45176);
   hext_stack_2->SetBinError(3,21.19797);
   hext_stack_2->SetBinError(4,21.98835);
   hext_stack_2->SetBinError(5,20.89542);
   hext_stack_2->SetBinError(6,20.67661);
   hext_stack_2->SetBinError(7,19.91847);
   hext_stack_2->SetBinError(8,22.55941);
   hext_stack_2->SetBinError(9,19.87019);
   hext_stack_2->SetBinError(10,19.50499);
   hext_stack_2->SetBinError(11,18.89287);
   hext_stack_2->SetBinError(12,17.74621);
   hext_stack_2->SetBinError(13,18.44501);
   hext_stack_2->SetBinError(14,18.94466);
   hext_stack_2->SetBinError(15,19.62832);
   hext_stack_2->SetBinError(16,19.853);
   hext_stack_2->SetBinError(17,18.62051);
   hext_stack_2->SetBinError(18,18.40125);
   hext_stack_2->SetBinError(19,19.01017);
   hext_stack_2->SetBinError(20,19.34297);
   hext_stack_2->SetBinError(21,29.4723);
   hext_stack_2->SetBinError(22,22.7409);
   hext_stack_2->SetBinError(23,18.69918);
   hext_stack_2->SetBinError(24,18.26423);
   hext_stack_2->SetBinError(25,16.84893);
   hext_stack_2->SetBinError(26,17.89194);
   hext_stack_2->SetBinError(27,16.4844);
   hext_stack_2->SetBinError(28,16.14499);
   hext_stack_2->SetBinError(29,17.87969);
   hext_stack_2->SetBinError(30,18.1627);
   hext_stack_2->SetBinError(31,4.781015);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,4.077377);
   hdirt_stack_3->SetBinContent(1,1876.995);
   hdirt_stack_3->SetBinContent(2,407.0559);
   hdirt_stack_3->SetBinContent(3,275.66);
   hdirt_stack_3->SetBinContent(4,237.3546);
   hdirt_stack_3->SetBinContent(5,196.4627);
   hdirt_stack_3->SetBinContent(6,174.0947);
   hdirt_stack_3->SetBinContent(7,169.0591);
   hdirt_stack_3->SetBinContent(8,154.8572);
   hdirt_stack_3->SetBinContent(9,139.4095);
   hdirt_stack_3->SetBinContent(10,126.525);
   hdirt_stack_3->SetBinContent(11,111.6134);
   hdirt_stack_3->SetBinContent(12,127.5578);
   hdirt_stack_3->SetBinContent(13,119.1912);
   hdirt_stack_3->SetBinContent(14,114.2925);
   hdirt_stack_3->SetBinContent(15,118.0932);
   hdirt_stack_3->SetBinContent(16,109.3595);
   hdirt_stack_3->SetBinContent(17,105.8728);
   hdirt_stack_3->SetBinContent(18,105.9651);
   hdirt_stack_3->SetBinContent(19,112.9979);
   hdirt_stack_3->SetBinContent(20,124.2711);
   hdirt_stack_3->SetBinContent(21,217.8937);
   hdirt_stack_3->SetBinContent(22,123.5786);
   hdirt_stack_3->SetBinContent(23,101.1283);
   hdirt_stack_3->SetBinContent(24,98.63504);
   hdirt_stack_3->SetBinContent(25,82.06594);
   hdirt_stack_3->SetBinContent(26,96.64997);
   hdirt_stack_3->SetBinContent(27,79.87601);
   hdirt_stack_3->SetBinContent(28,95.5584);
   hdirt_stack_3->SetBinContent(29,117.2708);
   hdirt_stack_3->SetBinContent(30,121.825);
   hdirt_stack_3->SetBinContent(31,4.937742);
   hdirt_stack_3->SetBinError(0,1.068106);
   hdirt_stack_3->SetBinError(1,28.31285);
   hdirt_stack_3->SetBinError(2,12.89576);
   hdirt_stack_3->SetBinError(3,10.056);
   hdirt_stack_3->SetBinError(4,10.47079);
   hdirt_stack_3->SetBinError(5,8.590271);
   hdirt_stack_3->SetBinError(6,7.811969);
   hdirt_stack_3->SetBinError(7,9.232816);
   hdirt_stack_3->SetBinError(8,7.534349);
   hdirt_stack_3->SetBinError(9,7.330818);
   hdirt_stack_3->SetBinError(10,6.586673);
   hdirt_stack_3->SetBinError(11,6.308721);
   hdirt_stack_3->SetBinError(12,7.46454);
   hdirt_stack_3->SetBinError(13,7.945179);
   hdirt_stack_3->SetBinError(14,6.432523);
   hdirt_stack_3->SetBinError(15,7.130861);
   hdirt_stack_3->SetBinError(16,5.909823);
   hdirt_stack_3->SetBinError(17,6.888906);
   hdirt_stack_3->SetBinError(18,5.97271);
   hdirt_stack_3->SetBinError(19,7.673928);
   hdirt_stack_3->SetBinError(20,6.910214);
   hdirt_stack_3->SetBinError(21,9.224386);
   hdirt_stack_3->SetBinError(22,6.760417);
   hdirt_stack_3->SetBinError(23,5.867051);
   hdirt_stack_3->SetBinError(24,6.46826);
   hdirt_stack_3->SetBinError(25,4.860389);
   hdirt_stack_3->SetBinError(26,5.807741);
   hdirt_stack_3->SetBinError(27,5.402051);
   hdirt_stack_3->SetBinError(28,6.189057);
   hdirt_stack_3->SetBinError(29,6.751871);
   hdirt_stack_3->SetBinError(30,7.817623);
   hdirt_stack_3->SetBinError(31,1.120116);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,16.72195);
   houtFV_stack_4->SetBinContent(1,1057.187);
   houtFV_stack_4->SetBinContent(2,291.8785);
   houtFV_stack_4->SetBinContent(3,266.3662);
   houtFV_stack_4->SetBinContent(4,270.5099);
   houtFV_stack_4->SetBinContent(5,282.6754);
   houtFV_stack_4->SetBinContent(6,249.514);
   houtFV_stack_4->SetBinContent(7,246.6197);
   houtFV_stack_4->SetBinContent(8,244.5996);
   houtFV_stack_4->SetBinContent(9,235.1805);
   houtFV_stack_4->SetBinContent(10,241.0179);
   houtFV_stack_4->SetBinContent(11,225.9595);
   houtFV_stack_4->SetBinContent(12,219.5769);
   houtFV_stack_4->SetBinContent(13,212.2466);
   houtFV_stack_4->SetBinContent(14,217.0683);
   houtFV_stack_4->SetBinContent(15,241.2296);
   houtFV_stack_4->SetBinContent(16,251.0331);
   houtFV_stack_4->SetBinContent(17,213.7682);
   houtFV_stack_4->SetBinContent(18,211.53);
   houtFV_stack_4->SetBinContent(19,226.5887);
   houtFV_stack_4->SetBinContent(20,247.7151);
   houtFV_stack_4->SetBinContent(21,305.1668);
   houtFV_stack_4->SetBinContent(22,252.4509);
   houtFV_stack_4->SetBinContent(23,196.144);
   houtFV_stack_4->SetBinContent(24,206.9748);
   houtFV_stack_4->SetBinContent(25,201.7229);
   houtFV_stack_4->SetBinContent(26,202.4398);
   houtFV_stack_4->SetBinContent(27,181.8828);
   houtFV_stack_4->SetBinContent(28,169.1401);
   houtFV_stack_4->SetBinContent(29,169.1022);
   houtFV_stack_4->SetBinContent(30,187.6842);
   houtFV_stack_4->SetBinContent(31,15.36027);
   houtFV_stack_4->SetBinError(0,2.002762);
   houtFV_stack_4->SetBinError(1,20.11383);
   houtFV_stack_4->SetBinError(2,10.90163);
   houtFV_stack_4->SetBinError(3,10.02052);
   houtFV_stack_4->SetBinError(4,9.521283);
   houtFV_stack_4->SetBinError(5,11.4667);
   houtFV_stack_4->SetBinError(6,9.955781);
   houtFV_stack_4->SetBinError(7,9.177252);
   houtFV_stack_4->SetBinError(8,8.880044);
   houtFV_stack_4->SetBinError(9,9.201572);
   houtFV_stack_4->SetBinError(10,8.910188);
   houtFV_stack_4->SetBinError(11,8.716057);
   houtFV_stack_4->SetBinError(12,8.387208);
   houtFV_stack_4->SetBinError(13,8.605984);
   houtFV_stack_4->SetBinError(14,8.878764);
   houtFV_stack_4->SetBinError(15,9.593258);
   houtFV_stack_4->SetBinError(16,10.21674);
   houtFV_stack_4->SetBinError(17,7.851686);
   houtFV_stack_4->SetBinError(18,8.40255);
   houtFV_stack_4->SetBinError(19,9.160255);
   houtFV_stack_4->SetBinError(20,10.24919);
   houtFV_stack_4->SetBinError(21,9.575697);
   houtFV_stack_4->SetBinError(22,10.18151);
   houtFV_stack_4->SetBinError(23,7.398114);
   houtFV_stack_4->SetBinError(24,8.696336);
   houtFV_stack_4->SetBinError(25,8.228867);
   houtFV_stack_4->SetBinError(26,8.527756);
   houtFV_stack_4->SetBinError(27,7.216093);
   houtFV_stack_4->SetBinError(28,6.87646);
   houtFV_stack_4->SetBinError(29,6.713107);
   houtFV_stack_4->SetBinError(30,8.068873);
   houtFV_stack_4->SetBinError(31,2.03588);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.27627);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.89631);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.573624);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.517824);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.140764);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.605428);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.53385);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.171813);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.509446);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.772332);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.493164);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.609172);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.037386);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.928362);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,6.344286);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.228614);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.605932);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.938324);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.231942);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.438364);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.378259);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,6.204449);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.375164);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.647778);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.117781);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,6.91308);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,7.290398);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,6.09385);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,5.213163);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,3.498806);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5905369);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7808337);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6761612);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.675009);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8421175);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7295525);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7288852);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7125038);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8001993);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.763655);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7366314);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8475203);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8141425);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8723383);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.8193842);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7491619);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7940551);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7558859);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.798942);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7701261);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9398151);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7758741);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6383097);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7479485);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.004442);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.8457578);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8857687);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.8067788);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.6948501);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.607004);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,1.925444);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,95.49306);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,116.0597);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,122.8258);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,109.8754);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,127.8009);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,121.8855);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,123.3841);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,118.4124);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,115.2346);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,107.9119);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,104.6031);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,109.8271);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,107.4795);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,117.6288);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,115.1144);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,108.0686);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,114.4986);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,111.1537);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,111.1385);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,113.2612);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,141.0978);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,113.4984);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,110.7229);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,116.8485);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,111.1785);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,118.6065);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,117.4019);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,120.6593);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,130.308);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,107.0966);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,2.831198);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.5135722);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,3.172524);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.509549);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.675684);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.371209);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.678135);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.608483);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.65645);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.53789);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.50174);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.313773);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.359305);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.39458);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.334497);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,3.549906);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.537239);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,3.38653);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,3.509032);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,3.471704);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,3.40906);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,3.456404);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,3.840872);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,3.551424);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.39054);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.551314);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,3.31661);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,3.524021);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,3.56677);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,3.564213);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,3.747844);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,3.427494);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.5561419);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(0,1.125349);
   hCCpi0inFV_stack_7->SetBinContent(1,173.1539);
   hCCpi0inFV_stack_7->SetBinContent(2,239.5475);
   hCCpi0inFV_stack_7->SetBinContent(3,251.6703);
   hCCpi0inFV_stack_7->SetBinContent(4,274.7581);
   hCCpi0inFV_stack_7->SetBinContent(5,235.0175);
   hCCpi0inFV_stack_7->SetBinContent(6,225.3083);
   hCCpi0inFV_stack_7->SetBinContent(7,238.619);
   hCCpi0inFV_stack_7->SetBinContent(8,220.5468);
   hCCpi0inFV_stack_7->SetBinContent(9,215.3143);
   hCCpi0inFV_stack_7->SetBinContent(10,192.047);
   hCCpi0inFV_stack_7->SetBinContent(11,189.3884);
   hCCpi0inFV_stack_7->SetBinContent(12,209.3538);
   hCCpi0inFV_stack_7->SetBinContent(13,203.2877);
   hCCpi0inFV_stack_7->SetBinContent(14,192.004);
   hCCpi0inFV_stack_7->SetBinContent(15,214.8596);
   hCCpi0inFV_stack_7->SetBinContent(16,191.6887);
   hCCpi0inFV_stack_7->SetBinContent(17,201.9845);
   hCCpi0inFV_stack_7->SetBinContent(18,194.7227);
   hCCpi0inFV_stack_7->SetBinContent(19,196.7346);
   hCCpi0inFV_stack_7->SetBinContent(20,218.4496);
   hCCpi0inFV_stack_7->SetBinContent(21,260.7115);
   hCCpi0inFV_stack_7->SetBinContent(22,238.3788);
   hCCpi0inFV_stack_7->SetBinContent(23,210.7973);
   hCCpi0inFV_stack_7->SetBinContent(24,228.6795);
   hCCpi0inFV_stack_7->SetBinContent(25,200.833);
   hCCpi0inFV_stack_7->SetBinContent(26,232.8931);
   hCCpi0inFV_stack_7->SetBinContent(27,209.3642);
   hCCpi0inFV_stack_7->SetBinContent(28,218.5472);
   hCCpi0inFV_stack_7->SetBinContent(29,227.0606);
   hCCpi0inFV_stack_7->SetBinContent(30,206.0007);
   hCCpi0inFV_stack_7->SetBinContent(31,9.954685);
   hCCpi0inFV_stack_7->SetBinError(0,0.5194673);
   hCCpi0inFV_stack_7->SetBinError(1,6.631154);
   hCCpi0inFV_stack_7->SetBinError(2,7.785716);
   hCCpi0inFV_stack_7->SetBinError(3,7.96707);
   hCCpi0inFV_stack_7->SetBinError(4,8.282914);
   hCCpi0inFV_stack_7->SetBinError(5,7.633303);
   hCCpi0inFV_stack_7->SetBinError(6,7.495713);
   hCCpi0inFV_stack_7->SetBinError(7,7.768913);
   hCCpi0inFV_stack_7->SetBinError(8,7.497426);
   hCCpi0inFV_stack_7->SetBinError(9,7.407945);
   hCCpi0inFV_stack_7->SetBinError(10,6.881954);
   hCCpi0inFV_stack_7->SetBinError(11,6.899342);
   hCCpi0inFV_stack_7->SetBinError(12,7.242965);
   hCCpi0inFV_stack_7->SetBinError(13,7.13215);
   hCCpi0inFV_stack_7->SetBinError(14,6.933321);
   hCCpi0inFV_stack_7->SetBinError(15,7.326983);
   hCCpi0inFV_stack_7->SetBinError(16,6.894852);
   hCCpi0inFV_stack_7->SetBinError(17,7.183331);
   hCCpi0inFV_stack_7->SetBinError(18,6.986808);
   hCCpi0inFV_stack_7->SetBinError(19,7.045407);
   hCCpi0inFV_stack_7->SetBinError(20,7.351396);
   hCCpi0inFV_stack_7->SetBinError(21,8.132051);
   hCCpi0inFV_stack_7->SetBinError(22,7.71079);
   hCCpi0inFV_stack_7->SetBinError(23,7.291092);
   hCCpi0inFV_stack_7->SetBinError(24,7.55051);
   hCCpi0inFV_stack_7->SetBinError(25,7.043822);
   hCCpi0inFV_stack_7->SetBinError(26,7.707263);
   hCCpi0inFV_stack_7->SetBinError(27,7.208625);
   hCCpi0inFV_stack_7->SetBinError(28,7.659953);
   hCCpi0inFV_stack_7->SetBinError(29,7.473059);
   hCCpi0inFV_stack_7->SetBinError(30,7.238224);
   hCCpi0inFV_stack_7->SetBinError(31,1.612342);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(0,1.176911);
   hNCinFV_stack_8->SetBinContent(1,110.3322);
   hNCinFV_stack_8->SetBinContent(2,112.9801);
   hNCinFV_stack_8->SetBinContent(3,113.6158);
   hNCinFV_stack_8->SetBinContent(4,126.7218);
   hNCinFV_stack_8->SetBinContent(5,118.3605);
   hNCinFV_stack_8->SetBinContent(6,119.8866);
   hNCinFV_stack_8->SetBinContent(7,118.1389);
   hNCinFV_stack_8->SetBinContent(8,114.1714);
   hNCinFV_stack_8->SetBinContent(9,114.5896);
   hNCinFV_stack_8->SetBinContent(10,102.5671);
   hNCinFV_stack_8->SetBinContent(11,100.3372);
   hNCinFV_stack_8->SetBinContent(12,106.8566);
   hNCinFV_stack_8->SetBinContent(13,93.6216);
   hNCinFV_stack_8->SetBinContent(14,96.56085);
   hNCinFV_stack_8->SetBinContent(15,107.3531);
   hNCinFV_stack_8->SetBinContent(16,96.97972);
   hNCinFV_stack_8->SetBinContent(17,93.67253);
   hNCinFV_stack_8->SetBinContent(18,109.3494);
   hNCinFV_stack_8->SetBinContent(19,108.0681);
   hNCinFV_stack_8->SetBinContent(20,117.1445);
   hNCinFV_stack_8->SetBinContent(21,174.9249);
   hNCinFV_stack_8->SetBinContent(22,123.5422);
   hNCinFV_stack_8->SetBinContent(23,102.5294);
   hNCinFV_stack_8->SetBinContent(24,106.1699);
   hNCinFV_stack_8->SetBinContent(25,110.274);
   hNCinFV_stack_8->SetBinContent(26,110.1621);
   hNCinFV_stack_8->SetBinContent(27,109.7482);
   hNCinFV_stack_8->SetBinContent(28,119.3015);
   hNCinFV_stack_8->SetBinContent(29,131.7177);
   hNCinFV_stack_8->SetBinContent(30,132.409);
   hNCinFV_stack_8->SetBinContent(31,4.109654);
   hNCinFV_stack_8->SetBinError(0,0.4804759);
   hNCinFV_stack_8->SetBinError(1,5.311205);
   hNCinFV_stack_8->SetBinError(2,5.300481);
   hNCinFV_stack_8->SetBinError(3,5.370756);
   hNCinFV_stack_8->SetBinError(4,5.627443);
   hNCinFV_stack_8->SetBinError(5,5.402574);
   hNCinFV_stack_8->SetBinError(6,5.520022);
   hNCinFV_stack_8->SetBinError(7,5.440258);
   hNCinFV_stack_8->SetBinError(8,5.317179);
   hNCinFV_stack_8->SetBinError(9,5.306703);
   hNCinFV_stack_8->SetBinError(10,5.071017);
   hNCinFV_stack_8->SetBinError(11,4.992243);
   hNCinFV_stack_8->SetBinError(12,5.185129);
   hNCinFV_stack_8->SetBinError(13,4.822193);
   hNCinFV_stack_8->SetBinError(14,4.97667);
   hNCinFV_stack_8->SetBinError(15,5.185072);
   hNCinFV_stack_8->SetBinError(16,4.856448);
   hNCinFV_stack_8->SetBinError(17,4.859637);
   hNCinFV_stack_8->SetBinError(18,5.255563);
   hNCinFV_stack_8->SetBinError(19,5.273057);
   hNCinFV_stack_8->SetBinError(20,5.403628);
   hNCinFV_stack_8->SetBinError(21,6.600944);
   hNCinFV_stack_8->SetBinError(22,5.641795);
   hNCinFV_stack_8->SetBinError(23,4.99632);
   hNCinFV_stack_8->SetBinError(24,5.123951);
   hNCinFV_stack_8->SetBinError(25,5.260269);
   hNCinFV_stack_8->SetBinError(26,5.233633);
   hNCinFV_stack_8->SetBinError(27,5.244339);
   hNCinFV_stack_8->SetBinError(28,5.442746);
   hNCinFV_stack_8->SetBinError(29,5.774186);
   hNCinFV_stack_8->SetBinError(30,5.740057);
   hNCinFV_stack_8->SetBinError(31,1.001326);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(0,1.290119);
   hnumuCCinFV_stack_9->SetBinContent(1,1327.995);
   hnumuCCinFV_stack_9->SetBinContent(2,1682.932);
   hnumuCCinFV_stack_9->SetBinContent(3,1771.327);
   hnumuCCinFV_stack_9->SetBinContent(4,1891.111);
   hnumuCCinFV_stack_9->SetBinContent(5,1702.052);
   hnumuCCinFV_stack_9->SetBinContent(6,1619.577);
   hnumuCCinFV_stack_9->SetBinContent(7,1545.016);
   hnumuCCinFV_stack_9->SetBinContent(8,1678.593);
   hnumuCCinFV_stack_9->SetBinContent(9,1593.562);
   hnumuCCinFV_stack_9->SetBinContent(10,1451.933);
   hnumuCCinFV_stack_9->SetBinContent(11,1385.12);
   hnumuCCinFV_stack_9->SetBinContent(12,1484.921);
   hnumuCCinFV_stack_9->SetBinContent(13,1454.49);
   hnumuCCinFV_stack_9->SetBinContent(14,1436.376);
   hnumuCCinFV_stack_9->SetBinContent(15,1539.408);
   hnumuCCinFV_stack_9->SetBinContent(16,1387.635);
   hnumuCCinFV_stack_9->SetBinContent(17,1320.838);
   hnumuCCinFV_stack_9->SetBinContent(18,1360.991);
   hnumuCCinFV_stack_9->SetBinContent(19,1391.81);
   hnumuCCinFV_stack_9->SetBinContent(20,1491.18);
   hnumuCCinFV_stack_9->SetBinContent(21,1848.216);
   hnumuCCinFV_stack_9->SetBinContent(22,1623.994);
   hnumuCCinFV_stack_9->SetBinContent(23,1485.524);
   hnumuCCinFV_stack_9->SetBinContent(24,1534.609);
   hnumuCCinFV_stack_9->SetBinContent(25,1500.581);
   hnumuCCinFV_stack_9->SetBinContent(26,1528.82);
   hnumuCCinFV_stack_9->SetBinContent(27,1412.735);
   hnumuCCinFV_stack_9->SetBinContent(28,1465.434);
   hnumuCCinFV_stack_9->SetBinContent(29,1465.174);
   hnumuCCinFV_stack_9->SetBinContent(30,1333.596);
   hnumuCCinFV_stack_9->SetBinContent(31,59.56726);
   hnumuCCinFV_stack_9->SetBinError(0,0.5971797);
   hnumuCCinFV_stack_9->SetBinError(1,25.26975);
   hnumuCCinFV_stack_9->SetBinError(2,26.68111);
   hnumuCCinFV_stack_9->SetBinError(3,28.46279);
   hnumuCCinFV_stack_9->SetBinError(4,30.06874);
   hnumuCCinFV_stack_9->SetBinError(5,29.36569);
   hnumuCCinFV_stack_9->SetBinError(6,26.88518);
   hnumuCCinFV_stack_9->SetBinError(7,25.5003);
   hnumuCCinFV_stack_9->SetBinError(8,27.81861);
   hnumuCCinFV_stack_9->SetBinError(9,27.70224);
   hnumuCCinFV_stack_9->SetBinError(10,25.7941);
   hnumuCCinFV_stack_9->SetBinError(11,25.07241);
   hnumuCCinFV_stack_9->SetBinError(12,24.3294);
   hnumuCCinFV_stack_9->SetBinError(13,25.92372);
   hnumuCCinFV_stack_9->SetBinError(14,25.08963);
   hnumuCCinFV_stack_9->SetBinError(15,26.24563);
   hnumuCCinFV_stack_9->SetBinError(16,24.79147);
   hnumuCCinFV_stack_9->SetBinError(17,23.45729);
   hnumuCCinFV_stack_9->SetBinError(18,24.68146);
   hnumuCCinFV_stack_9->SetBinError(19,24.09706);
   hnumuCCinFV_stack_9->SetBinError(20,27.10732);
   hnumuCCinFV_stack_9->SetBinError(21,29.35192);
   hnumuCCinFV_stack_9->SetBinError(22,27.18265);
   hnumuCCinFV_stack_9->SetBinError(23,25.79385);
   hnumuCCinFV_stack_9->SetBinError(24,25.81275);
   hnumuCCinFV_stack_9->SetBinError(25,26.47759);
   hnumuCCinFV_stack_9->SetBinError(26,25.64993);
   hnumuCCinFV_stack_9->SetBinError(27,24.82788);
   hnumuCCinFV_stack_9->SetBinError(28,25.38385);
   hnumuCCinFV_stack_9->SetBinError(29,25.06022);
   hnumuCCinFV_stack_9->SetBinError(30,24.02438);
   hnumuCCinFV_stack_9->SetBinError(31,5.409699);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(0,0.4001501);
   hnueCCinFV_stack_10->SetBinContent(1,13.42801);
   hnueCCinFV_stack_10->SetBinContent(2,16.92293);
   hnueCCinFV_stack_10->SetBinContent(3,13.53135);
   hnueCCinFV_stack_10->SetBinContent(4,18.26347);
   hnueCCinFV_stack_10->SetBinContent(5,15.48467);
   hnueCCinFV_stack_10->SetBinContent(6,11.30442);
   hnueCCinFV_stack_10->SetBinContent(7,17.06778);
   hnueCCinFV_stack_10->SetBinContent(8,14.62811);
   hnueCCinFV_stack_10->SetBinContent(9,16.81521);
   hnueCCinFV_stack_10->SetBinContent(10,12.89609);
   hnueCCinFV_stack_10->SetBinContent(11,16.05336);
   hnueCCinFV_stack_10->SetBinContent(12,14.46348);
   hnueCCinFV_stack_10->SetBinContent(13,15.17406);
   hnueCCinFV_stack_10->SetBinContent(14,16.67909);
   hnueCCinFV_stack_10->SetBinContent(15,15.82935);
   hnueCCinFV_stack_10->SetBinContent(16,10.24505);
   hnueCCinFV_stack_10->SetBinContent(17,12.85848);
   hnueCCinFV_stack_10->SetBinContent(18,15.96535);
   hnueCCinFV_stack_10->SetBinContent(19,17.90029);
   hnueCCinFV_stack_10->SetBinContent(20,17.25344);
   hnueCCinFV_stack_10->SetBinContent(21,21.25891);
   hnueCCinFV_stack_10->SetBinContent(22,19.57471);
   hnueCCinFV_stack_10->SetBinContent(23,14.19569);
   hnueCCinFV_stack_10->SetBinContent(24,17.17159);
   hnueCCinFV_stack_10->SetBinContent(25,18.33611);
   hnueCCinFV_stack_10->SetBinContent(26,14.78608);
   hnueCCinFV_stack_10->SetBinContent(27,10.89106);
   hnueCCinFV_stack_10->SetBinContent(28,15.32411);
   hnueCCinFV_stack_10->SetBinContent(29,15.97569);
   hnueCCinFV_stack_10->SetBinContent(30,9.22022);
   hnueCCinFV_stack_10->SetBinContent(31,0.2509017);
   hnueCCinFV_stack_10->SetBinError(0,0.3964919);
   hnueCCinFV_stack_10->SetBinError(1,2.21792);
   hnueCCinFV_stack_10->SetBinError(2,3.38932);
   hnueCCinFV_stack_10->SetBinError(3,2.055872);
   hnueCCinFV_stack_10->SetBinError(4,2.378848);
   hnueCCinFV_stack_10->SetBinError(5,2.688955);
   hnueCCinFV_stack_10->SetBinError(6,1.66243);
   hnueCCinFV_stack_10->SetBinError(7,2.377443);
   hnueCCinFV_stack_10->SetBinError(8,2.043827);
   hnueCCinFV_stack_10->SetBinError(9,2.516088);
   hnueCCinFV_stack_10->SetBinError(10,2.301276);
   hnueCCinFV_stack_10->SetBinError(11,2.98315);
   hnueCCinFV_stack_10->SetBinError(12,2.209518);
   hnueCCinFV_stack_10->SetBinError(13,2.297804);
   hnueCCinFV_stack_10->SetBinError(14,2.424183);
   hnueCCinFV_stack_10->SetBinError(15,2.165794);
   hnueCCinFV_stack_10->SetBinError(16,1.67473);
   hnueCCinFV_stack_10->SetBinError(17,1.898238);
   hnueCCinFV_stack_10->SetBinError(18,2.984601);
   hnueCCinFV_stack_10->SetBinError(19,2.378389);
   hnueCCinFV_stack_10->SetBinError(20,2.490842);
   hnueCCinFV_stack_10->SetBinError(21,3.011654);
   hnueCCinFV_stack_10->SetBinError(22,3.043525);
   hnueCCinFV_stack_10->SetBinError(23,2.108034);
   hnueCCinFV_stack_10->SetBinError(24,3.318548);
   hnueCCinFV_stack_10->SetBinError(25,2.651216);
   hnueCCinFV_stack_10->SetBinError(26,2.433407);
   hnueCCinFV_stack_10->SetBinError(27,1.817148);
   hnueCCinFV_stack_10->SetBinError(28,2.949083);
   hnueCCinFV_stack_10->SetBinError(29,2.725855);
   hnueCCinFV_stack_10->SetBinError(30,1.652452);
   hnueCCinFV_stack_10->SetBinError(31,0.2509017);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__2->SetBinContent(0,33.64439);
   hmcerror__2->SetBinContent(1,6846.895);
   hmcerror__2->SetBinContent(2,4061.537);
   hmcerror__2->SetBinContent(3,3961.508);
   hmcerror__2->SetBinContent(4,4136.806);
   hmcerror__2->SetBinContent(5,3789.782);
   hmcerror__2->SetBinContent(6,3591.347);
   hmcerror__2->SetBinContent(7,3474.123);
   hmcerror__2->SetBinContent(8,3753.922);
   hmcerror__2->SetBinContent(9,3425.31);
   hmcerror__2->SetBinContent(10,3170.534);
   hmcerror__2->SetBinContent(11,3019.06);
   hmcerror__2->SetBinContent(12,3105.382);
   hmcerror__2->SetBinContent(13,3060.559);
   hmcerror__2->SetBinContent(14,3091.604);
   hmcerror__2->SetBinContent(15,3304.539);
   hmcerror__2->SetBinContent(16,3111.914);
   hmcerror__2->SetBinContent(17,2927.928);
   hmcerror__2->SetBinContent(18,2970.234);
   hmcerror__2->SetBinContent(19,3068.112);
   hmcerror__2->SetBinContent(20,3262.777);
   hmcerror__2->SetBinContent(21,5022.779);
   hmcerror__2->SetBinContent(22,3712.194);
   hmcerror__2->SetBinContent(23,3074.706);
   hmcerror__2->SetBinContent(24,3167.53);
   hmcerror__2->SetBinContent(25,2983.324);
   hmcerror__2->SetBinContent(26,3150.418);
   hmcerror__2->SetBinContent(27,2864.235);
   hmcerror__2->SetBinContent(28,2939.01);
   hmcerror__2->SetBinContent(29,3208.798);
   hmcerror__2->SetBinContent(30,3156.446);
   hmcerror__2->SetBinContent(31,162.3893);
   hmcerror__2->SetBinError(0,2.971201);
   hmcerror__2->SetBinError(1,1000.371);
   hmcerror__2->SetBinError(2,531.3423);
   hmcerror__2->SetBinError(3,529.1515);
   hmcerror__2->SetBinError(4,574.1515);
   hmcerror__2->SetBinError(5,512.1657);
   hmcerror__2->SetBinError(6,479.8636);
   hmcerror__2->SetBinError(7,435.5653);
   hmcerror__2->SetBinError(8,465.6998);
   hmcerror__2->SetBinError(9,450.368);
   hmcerror__2->SetBinError(10,394.5658);
   hmcerror__2->SetBinError(11,402.6786);
   hmcerror__2->SetBinError(12,403.9483);
   hmcerror__2->SetBinError(13,419.4836);
   hmcerror__2->SetBinError(14,386.9876);
   hmcerror__2->SetBinError(15,407.131);
   hmcerror__2->SetBinError(16,414.077);
   hmcerror__2->SetBinError(17,367.9836);
   hmcerror__2->SetBinError(18,387.8596);
   hmcerror__2->SetBinError(19,384.907);
   hmcerror__2->SetBinError(20,433.138);
   hmcerror__2->SetBinError(21,510.88);
   hmcerror__2->SetBinError(22,464.1234);
   hmcerror__2->SetBinError(23,436.347);
   hmcerror__2->SetBinError(24,419.1588);
   hmcerror__2->SetBinError(25,415.3922);
   hmcerror__2->SetBinError(26,414.1566);
   hmcerror__2->SetBinError(27,406.1045);
   hmcerror__2->SetBinError(28,441.8144);
   hmcerror__2->SetBinError(29,465.786);
   hmcerror__2->SetBinError(30,422.9972);
   hmcerror__2->SetBinError(31,30.13087);
   hmcerror__2->SetBinError(32,0.4212968);
   hmcerror__2->SetBinError(33,0.4212968);
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
   
   Double_t _fx3001[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3001[32] = {
   5764,
   4084,
   3857,
   4195,
   3897,
   3802,
   3760,
   3889,
   3549,
   3293,
   3274,
   3271,
   3288,
   3489,
   3772,
   3390,
   3321,
   3371,
   3423,
   3521,
   4922,
   3832,
   3243,
   3282,
   3041,
   3226,
   3066,
   2962,
   3035,
   2726,
   139,
   1};
   Double_t _felx3001[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3001[32] = {
   75.92101,
   63.90618,
   62.10475,
   64.76882,
   62.42596,
   61.66036,
   61.31884,
   62.36185,
   59.57348,
   57.38467,
   57.21888,
   57.19266,
   57.34108,
   59.06776,
   61.41661,
   58.22371,
   57.62812,
   58.06031,
   58.50641,
   59.33801,
   70.15697,
   61.90315,
   56.94734,
   57.28874,
   55.14526,
   56.79789,
   55.37147,
   54.42426,
   55.09083,
   52.21111,
   11.78983,
   1};
   Double_t _fehx3001[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3001[32] = {
   75.92101,
   63.90618,
   62.10475,
   64.76882,
   62.42596,
   61.66036,
   61.31884,
   62.36185,
   59.57348,
   57.38467,
   57.21888,
   57.19266,
   57.34108,
   59.06776,
   61.41661,
   58.22371,
   57.62812,
   58.06031,
   58.50641,
   59.33801,
   70.15697,
   61.90315,
   56.94734,
   57.28874,
   55.14526,
   56.79789,
   55.37147,
   54.42426,
   55.09083,
   52.21111,
   11.78983,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1210);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(6423.913);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=82.8/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 107685.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4880.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 26114.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6046.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7740.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  169.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3461.9","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6521.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 3406.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 45775.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 459.7","F");

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
   TText *pt_LaTex = pt->AddText("generic_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3002[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3002[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3002[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3002[32] = {
   0.1461059,
   0.1308229,
   0.1335732,
   0.138791,
   0.1351438,
   0.1336166,
   0.1253742,
   0.1240568,
   0.1314824,
   0.1244477,
   0.1333788,
   0.1300801,
   0.1370611,
   0.1251737,
   0.1232036,
   0.1330618,
   0.1256805,
   0.1305822,
   0.125454,
   0.1327513,
   0.1017126,
   0.1250267,
   0.1419151,
   0.1323299,
   0.139238,
   0.1314608,
   0.1417846,
   0.1503277,
   0.145159,
   0.1340106,
   0.1855471,
   0};
   Double_t _fehx3002[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3002[32] = {
   0.1461059,
   0.1308229,
   0.1335732,
   0.138791,
   0.1351438,
   0.1336166,
   0.1253742,
   0.1240568,
   0.1314824,
   0.1244477,
   0.1333788,
   0.1300801,
   0.1370611,
   0.1251737,
   0.1232036,
   0.1330618,
   0.1256805,
   0.1305822,
   0.125454,
   0.1327513,
   0.1017126,
   0.1250267,
   0.1419151,
   0.1323299,
   0.139238,
   0.1314608,
   0.1417846,
   0.1503277,
   0.145159,
   0.1340106,
   0.1855471,
   0};
   grae = new TGraphAsymmErrors(32,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1210);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
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
   
   Double_t _fx3003[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3003[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3003[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3003[32] = {
   0.1343388,
   0.1112918,
   0.1111219,
   0.1108722,
   0.1170333,
   0.1119065,
   0.1112332,
   0.108008,
   0.1125366,
   0.1126142,
   0.1124098,
   0.1110094,
   0.1114024,
   0.1122501,
   0.1111488,
   0.1123666,
   0.108637,
   0.1122542,
   0.1105511,
   0.1134529,
   0.09607551,
   0.105756,
   0.1109957,
   0.1146013,
   0.1193875,
   0.1134244,
   0.1185826,
   0.1198105,
   0.1176217,
   0.113867,
   0.1114318,
   0};
   Double_t _fehx3003[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3003[32] = {
   0.1343388,
   0.1112918,
   0.1111219,
   0.1108722,
   0.1170333,
   0.1119065,
   0.1112332,
   0.108008,
   0.1125366,
   0.1126142,
   0.1124098,
   0.1110094,
   0.1114024,
   0.1122501,
   0.1111488,
   0.1123666,
   0.108637,
   0.1122542,
   0.1105511,
   0.1134529,
   0.09607551,
   0.105756,
   0.1109957,
   0.1146013,
   0.1193875,
   0.1134244,
   0.1185826,
   0.1198105,
   0.1176217,
   0.113867,
   0.1114318,
   0};
   grae = new TGraphAsymmErrors(32,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1210);
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
   
   Double_t _fx3004[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3004[32] = {
   0.8418415,
   1.005531,
   0.9736192,
   1.014067,
   1.028291,
   1.058656,
   1.082287,
   1.035983,
   1.036111,
   1.038626,
   1.084443,
   1.053333,
   1.074313,
   1.12854,
   1.14146,
   1.089362,
   1.134249,
   1.134927,
   1.11567,
   1.079142,
   0.9799356,
   1.032274,
   1.054735,
   1.036139,
   1.019333,
   1.023991,
   1.070443,
   1.007823,
   0.9458371,
   0.8636297,
   0.8559675,
   10};
   Double_t _felx3004[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3004[32] = {
   0.01108839,
   0.01573448,
   0.01567705,
   0.01565672,
   0.01647218,
   0.01716914,
   0.01765016,
   0.01661245,
   0.01739215,
   0.01809937,
   0.01895255,
   0.01841727,
   0.01873549,
   0.01910586,
   0.01858553,
   0.01870994,
   0.01968222,
   0.01954739,
   0.01906919,
   0.01818635,
   0.01396776,
   0.01667562,
   0.01852123,
   0.01808625,
   0.0184845,
   0.01802868,
   0.01933203,
   0.01851789,
   0.01716868,
   0.01654111,
   0.07260222,
   0};
   Double_t _fehx3004[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3004[32] = {
   0.01108839,
   0.01573448,
   0.01567705,
   0.01565672,
   0.01647218,
   0.01716914,
   0.01765016,
   0.01661245,
   0.01739215,
   0.01809937,
   0.01895255,
   0.01841727,
   0.01873549,
   0.01910586,
   0.01858553,
   0.01870994,
   0.01968222,
   0.01954739,
   0.01906919,
   0.01818635,
   0.01396776,
   0.01667562,
   0.01852123,
   0.01808625,
   0.0184845,
   0.01802868,
   0.01933203,
   0.01851789,
   0.01716868,
   0.01654111,
   0.07260222,
   0};
   grae = new TGraphAsymmErrors(32,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1210);
   Graph_Graph3004->SetMinimum(0.7050288);
   Graph_Graph3004->SetMaximum(10.92166);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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
