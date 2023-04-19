#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Feb 18 13:27:16 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-9.588887,101.5385,1060.329);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__13->SetBinContent(1,479.4444);
   hmc__13->SetBinContent(2,271.5962);
   hmc__13->SetBinContent(3,287.9285);
   hmc__13->SetBinContent(4,260.0818);
   hmc__13->SetBinContent(5,254.1141);
   hmc__13->SetBinContent(6,226.2921);
   hmc__13->SetBinContent(7,206.8466);
   hmc__13->SetBinContent(8,172.3964);
   hmc__13->SetBinContent(9,151.8855);
   hmc__13->SetBinContent(10,136.6234);
   hmc__13->SetBinContent(11,114.1354);
   hmc__13->SetBinContent(12,103.6192);
   hmc__13->SetBinContent(13,97.13963);
   hmc__13->SetBinContent(14,88.87698);
   hmc__13->SetBinContent(15,67.49794);
   hmc__13->SetBinContent(16,58.54731);
   hmc__13->SetBinContent(17,44.863);
   hmc__13->SetBinContent(18,48.26196);
   hmc__13->SetBinContent(19,45.8775);
   hmc__13->SetBinContent(20,32.50341);
   hmc__13->SetBinContent(21,33.2581);
   hmc__13->SetBinContent(22,34.34312);
   hmc__13->SetBinContent(23,22.10598);
   hmc__13->SetBinContent(24,20.87771);
   hmc__13->SetBinContent(25,304.5901);
   hmc__13->SetBinError(1,151.9945);
   hmc__13->SetBinError(2,112.2133);
   hmc__13->SetBinError(3,100.7335);
   hmc__13->SetBinError(4,99.4644);
   hmc__13->SetBinError(5,101.6182);
   hmc__13->SetBinError(6,82.35411);
   hmc__13->SetBinError(7,70.71833);
   hmc__13->SetBinError(8,76.18641);
   hmc__13->SetBinError(9,53.6587);
   hmc__13->SetBinError(10,48.16839);
   hmc__13->SetBinError(11,40.77745);
   hmc__13->SetBinError(12,36.8626);
   hmc__13->SetBinError(13,34.64374);
   hmc__13->SetBinError(14,32.78493);
   hmc__13->SetBinError(15,27.30346);
   hmc__13->SetBinError(16,26.79819);
   hmc__13->SetBinError(17,17.15822);
   hmc__13->SetBinError(18,18.89345);
   hmc__13->SetBinError(19,18.35518);
   hmc__13->SetBinError(20,13.26149);
   hmc__13->SetBinError(21,14.19024);
   hmc__13->SetBinError(22,13.34771);
   hmc__13->SetBinError(23,15.26718);
   hmc__13->SetBinError(24,11.09195);
   hmc__13->SetBinError(25,94.18569);
   hmc__13->SetMinimum(-9.588887);
   hmc__13->SetMaximum(1006.833);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,90);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(503.4166);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,12.13975);
   hbadmatch_stack_1->SetBinContent(2,4.188883);
   hbadmatch_stack_1->SetBinContent(3,5.659209);
   hbadmatch_stack_1->SetBinContent(4,7.600151);
   hbadmatch_stack_1->SetBinContent(5,3.157023);
   hbadmatch_stack_1->SetBinContent(6,2.797792);
   hbadmatch_stack_1->SetBinContent(7,3.730252);
   hbadmatch_stack_1->SetBinContent(8,2.434727);
   hbadmatch_stack_1->SetBinContent(9,2.421557);
   hbadmatch_stack_1->SetBinContent(10,1.850325);
   hbadmatch_stack_1->SetBinContent(11,3.883519);
   hbadmatch_stack_1->SetBinContent(12,2.055672);
   hbadmatch_stack_1->SetBinContent(13,2.230299);
   hbadmatch_stack_1->SetBinContent(14,2.599607);
   hbadmatch_stack_1->SetBinContent(15,2.157185);
   hbadmatch_stack_1->SetBinContent(16,1.973556);
   hbadmatch_stack_1->SetBinContent(17,2.356765);
   hbadmatch_stack_1->SetBinContent(18,1.767057);
   hbadmatch_stack_1->SetBinContent(19,0.5901461);
   hbadmatch_stack_1->SetBinContent(20,1.515808);
   hbadmatch_stack_1->SetBinContent(21,0.9942849);
   hbadmatch_stack_1->SetBinContent(22,1.981);
   hbadmatch_stack_1->SetBinContent(23,0.536893);
   hbadmatch_stack_1->SetBinContent(24,1.332125);
   hbadmatch_stack_1->SetBinContent(25,9.626486);
   hbadmatch_stack_1->SetBinError(1,1.976571);
   hbadmatch_stack_1->SetBinError(2,0.9850037);
   hbadmatch_stack_1->SetBinError(3,1.227208);
   hbadmatch_stack_1->SetBinError(4,2.478994);
   hbadmatch_stack_1->SetBinError(5,0.9069332);
   hbadmatch_stack_1->SetBinError(6,0.8331953);
   hbadmatch_stack_1->SetBinError(7,1.007277);
   hbadmatch_stack_1->SetBinError(8,0.8040973);
   hbadmatch_stack_1->SetBinError(9,0.700518);
   hbadmatch_stack_1->SetBinError(10,0.7300692);
   hbadmatch_stack_1->SetBinError(11,1.049051);
   hbadmatch_stack_1->SetBinError(12,0.7082781);
   hbadmatch_stack_1->SetBinError(13,0.6740025);
   hbadmatch_stack_1->SetBinError(14,0.8117422);
   hbadmatch_stack_1->SetBinError(15,0.6961658);
   hbadmatch_stack_1->SetBinError(16,0.7157578);
   hbadmatch_stack_1->SetBinError(17,0.8965255);
   hbadmatch_stack_1->SetBinError(18,0.5890229);
   hbadmatch_stack_1->SetBinError(19,0.340721);
   hbadmatch_stack_1->SetBinError(20,0.6959761);
   hbadmatch_stack_1->SetBinError(21,0.6030134);
   hbadmatch_stack_1->SetBinError(22,0.7767946);
   hbadmatch_stack_1->SetBinError(23,0.3929602);
   hbadmatch_stack_1->SetBinError(24,0.6257032);
   hbadmatch_stack_1->SetBinError(25,1.694381);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,40.25696);
   hext_stack_2->SetBinContent(2,12.03628);
   hext_stack_2->SetBinContent(3,15.41593);
   hext_stack_2->SetBinContent(4,13.37418);
   hext_stack_2->SetBinContent(5,16.65727);
   hext_stack_2->SetBinContent(6,19.59278);
   hext_stack_2->SetBinContent(7,14.35336);
   hext_stack_2->SetBinContent(8,11.39466);
   hext_stack_2->SetBinContent(9,13.3195);
   hext_stack_2->SetBinContent(10,15.30337);
   hext_stack_2->SetBinContent(11,8.903227);
   hext_stack_2->SetBinContent(12,9.157012);
   hext_stack_2->SetBinContent(13,8.57165);
   hext_stack_2->SetBinContent(14,10.96929);
   hext_stack_2->SetBinContent(15,5.516392);
   hext_stack_2->SetBinContent(16,3.006186);
   hext_stack_2->SetBinContent(17,7.347444);
   hext_stack_2->SetBinContent(18,2.185808);
   hext_stack_2->SetBinContent(19,6.124875);
   hext_stack_2->SetBinContent(20,2.916804);
   hext_stack_2->SetBinContent(21,2.435184);
   hext_stack_2->SetBinContent(22,6.945253);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,29.73017);
   hext_stack_2->SetBinError(1,4.532604);
   hext_stack_2->SetBinError(2,2.415283);
   hext_stack_2->SetBinError(3,2.794801);
   hext_stack_2->SetBinError(4,2.320267);
   hext_stack_2->SetBinError(5,2.775477);
   hext_stack_2->SetBinError(6,3.170147);
   hext_stack_2->SetBinError(7,2.76339);
   hext_stack_2->SetBinError(8,2.328502);
   hext_stack_2->SetBinError(9,2.580102);
   hext_stack_2->SetBinError(10,2.843269);
   hext_stack_2->SetBinError(11,2.009113);
   hext_stack_2->SetBinError(12,2.003897);
   hext_stack_2->SetBinError(13,2.032856);
   hext_stack_2->SetBinError(14,2.350293);
   hext_stack_2->SetBinError(15,1.503469);
   hext_stack_2->SetBinError(16,1.068791);
   hext_stack_2->SetBinError(17,1.871207);
   hext_stack_2->SetBinError(18,1.006415);
   hext_stack_2->SetBinError(19,1.828051);
   hext_stack_2->SetBinError(20,1.132884);
   hext_stack_2->SetBinError(21,0.9256422);
   hext_stack_2->SetBinError(22,1.863119);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,3.765625);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,2.528237);
   hdirt_stack_3->SetBinContent(2,0.7759784);
   hdirt_stack_3->SetBinContent(3,1.062717);
   hdirt_stack_3->SetBinContent(4,1.443737);
   hdirt_stack_3->SetBinContent(5,1.202522);
   hdirt_stack_3->SetBinContent(6,0.596422);
   hdirt_stack_3->SetBinContent(7,0.31339);
   hdirt_stack_3->SetBinContent(8,0.7466499);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.5570828);
   hdirt_stack_3->SetBinContent(11,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.00255526);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.4377912);
   hdirt_stack_3->SetBinContent(18,1.044806);
   hdirt_stack_3->SetBinContent(19,0.8811711);
   hdirt_stack_3->SetBinContent(20,0.1651799);
   hdirt_stack_3->SetBinContent(21,0.2623434);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(25,1.991222);
   hdirt_stack_3->SetBinError(1,0.794153);
   hdirt_stack_3->SetBinError(2,0.458477);
   hdirt_stack_3->SetBinError(3,0.6356341);
   hdirt_stack_3->SetBinError(4,0.9782298);
   hdirt_stack_3->SetBinError(5,0.5535676);
   hdirt_stack_3->SetBinError(6,0.3478423);
   hdirt_stack_3->SetBinError(7,0.2231598);
   hdirt_stack_3->SetBinError(8,0.3864596);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.4028472);
   hdirt_stack_3->SetBinError(11,0.3652866);
   hdirt_stack_3->SetBinError(12,0.00255526);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.3389606);
   hdirt_stack_3->SetBinError(16,0.3095651);
   hdirt_stack_3->SetBinError(18,0.4804485);
   hdirt_stack_3->SetBinError(19,0.5453333);
   hdirt_stack_3->SetBinError(20,0.1651799);
   hdirt_stack_3->SetBinError(21,0.2623434);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(25,0.7865397);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,33.28231);
   houtFV_stack_4->SetBinContent(2,13.69115);
   houtFV_stack_4->SetBinContent(3,13.65803);
   houtFV_stack_4->SetBinContent(4,11.20657);
   houtFV_stack_4->SetBinContent(5,13.27578);
   houtFV_stack_4->SetBinContent(6,12.82352);
   houtFV_stack_4->SetBinContent(7,9.883938);
   houtFV_stack_4->SetBinContent(8,12.09376);
   houtFV_stack_4->SetBinContent(9,6.598127);
   houtFV_stack_4->SetBinContent(10,8.624313);
   houtFV_stack_4->SetBinContent(11,8.43746);
   houtFV_stack_4->SetBinContent(12,7.377503);
   houtFV_stack_4->SetBinContent(13,8.085139);
   houtFV_stack_4->SetBinContent(14,6.084773);
   houtFV_stack_4->SetBinContent(15,4.099511);
   houtFV_stack_4->SetBinContent(16,4.401105);
   houtFV_stack_4->SetBinContent(17,1.944427);
   houtFV_stack_4->SetBinContent(18,3.126726);
   houtFV_stack_4->SetBinContent(19,3.593324);
   houtFV_stack_4->SetBinContent(20,2.369889);
   houtFV_stack_4->SetBinContent(21,2.295498);
   houtFV_stack_4->SetBinContent(22,2.295498);
   houtFV_stack_4->SetBinContent(23,1.467217);
   houtFV_stack_4->SetBinContent(24,2.000729);
   houtFV_stack_4->SetBinContent(25,23.65158);
   houtFV_stack_4->SetBinError(1,2.898709);
   houtFV_stack_4->SetBinError(2,1.812001);
   houtFV_stack_4->SetBinError(3,1.86545);
   houtFV_stack_4->SetBinError(4,1.61813);
   houtFV_stack_4->SetBinError(5,1.801995);
   houtFV_stack_4->SetBinError(6,1.813152);
   houtFV_stack_4->SetBinError(7,1.555077);
   houtFV_stack_4->SetBinError(8,1.767538);
   houtFV_stack_4->SetBinError(9,1.288445);
   houtFV_stack_4->SetBinError(10,1.54933);
   houtFV_stack_4->SetBinError(11,1.455755);
   houtFV_stack_4->SetBinError(12,1.374112);
   houtFV_stack_4->SetBinError(13,1.423398);
   houtFV_stack_4->SetBinError(14,1.214587);
   houtFV_stack_4->SetBinError(15,0.9993399);
   houtFV_stack_4->SetBinError(16,1.041091);
   houtFV_stack_4->SetBinError(17,0.7290882);
   houtFV_stack_4->SetBinError(18,0.9334072);
   houtFV_stack_4->SetBinError(19,0.9582458);
   houtFV_stack_4->SetBinError(20,0.8690913);
   houtFV_stack_4->SetBinError(21,0.7057297);
   houtFV_stack_4->SetBinError(22,0.7057297);
   houtFV_stack_4->SetBinError(23,0.6214735);
   houtFV_stack_4->SetBinError(24,0.7343859);
   houtFV_stack_4->SetBinError(25,2.464688);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.697004);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.69634);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5153221);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6131358);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2563433);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2814331);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2596123);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1749792);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.980908);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.19854);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.227104);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.232512);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.39484);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6689357);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8780218);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8365039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8654041);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3062359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9484402);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.465258);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4469848);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3053129);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2837281);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5523385);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.388188);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1793726);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2784203);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2638255);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3498677);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.14851);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3718002);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.4597906);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,158.7404);
   hNCpi0inFVres_stack_7->SetBinContent(2,136.3374);
   hNCpi0inFVres_stack_7->SetBinContent(3,130.8475);
   hNCpi0inFVres_stack_7->SetBinContent(4,124.1783);
   hNCpi0inFVres_stack_7->SetBinContent(5,113.9162);
   hNCpi0inFVres_stack_7->SetBinContent(6,101.4149);
   hNCpi0inFVres_stack_7->SetBinContent(7,90.03117);
   hNCpi0inFVres_stack_7->SetBinContent(8,78.23724);
   hNCpi0inFVres_stack_7->SetBinContent(9,67.20274);
   hNCpi0inFVres_stack_7->SetBinContent(10,56.60865);
   hNCpi0inFVres_stack_7->SetBinContent(11,45.83156);
   hNCpi0inFVres_stack_7->SetBinContent(12,44.10061);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.11597);
   hNCpi0inFVres_stack_7->SetBinContent(14,34.92599);
   hNCpi0inFVres_stack_7->SetBinContent(15,28.16516);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.56672);
   hNCpi0inFVres_stack_7->SetBinContent(17,17.32016);
   hNCpi0inFVres_stack_7->SetBinContent(18,19.57575);
   hNCpi0inFVres_stack_7->SetBinContent(19,15.46963);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.01142);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.40783);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.255608);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.717626);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.572558);
   hNCpi0inFVres_stack_7->SetBinContent(25,88.08235);
   hNCpi0inFVres_stack_7->SetBinError(1,4.116655);
   hNCpi0inFVres_stack_7->SetBinError(2,3.86635);
   hNCpi0inFVres_stack_7->SetBinError(3,3.744965);
   hNCpi0inFVres_stack_7->SetBinError(4,3.672824);
   hNCpi0inFVres_stack_7->SetBinError(5,3.522326);
   hNCpi0inFVres_stack_7->SetBinError(6,3.319622);
   hNCpi0inFVres_stack_7->SetBinError(7,3.097147);
   hNCpi0inFVres_stack_7->SetBinError(8,2.913807);
   hNCpi0inFVres_stack_7->SetBinError(9,2.691277);
   hNCpi0inFVres_stack_7->SetBinError(10,2.432714);
   hNCpi0inFVres_stack_7->SetBinError(11,2.149858);
   hNCpi0inFVres_stack_7->SetBinError(12,2.152527);
   hNCpi0inFVres_stack_7->SetBinError(13,2.082762);
   hNCpi0inFVres_stack_7->SetBinError(14,1.962232);
   hNCpi0inFVres_stack_7->SetBinError(15,1.717093);
   hNCpi0inFVres_stack_7->SetBinError(16,1.640114);
   hNCpi0inFVres_stack_7->SetBinError(17,1.339333);
   hNCpi0inFVres_stack_7->SetBinError(18,1.470156);
   hNCpi0inFVres_stack_7->SetBinError(19,1.323866);
   hNCpi0inFVres_stack_7->SetBinError(20,1.176231);
   hNCpi0inFVres_stack_7->SetBinError(21,1.119376);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9108977);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9764092);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9147);
   hNCpi0inFVres_stack_7->SetBinError(25,3.139471);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,30.21067);
   hNCpi0inFVdis_stack_8->SetBinContent(2,22.41973);
   hNCpi0inFVdis_stack_8->SetBinContent(3,24.20251);
   hNCpi0inFVdis_stack_8->SetBinContent(4,23.68006);
   hNCpi0inFVdis_stack_8->SetBinContent(5,24.34452);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.20026);
   hNCpi0inFVdis_stack_8->SetBinContent(7,16.16763);
   hNCpi0inFVdis_stack_8->SetBinContent(8,13.99854);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.38898);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.10325);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.29454);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.35243);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.458294);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.584432);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.262498);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.347016);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.862674);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.391942);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.298929);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.385462);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.32883);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.42698);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.54779);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.129122);
   hNCpi0inFVdis_stack_8->SetBinContent(25,19.35221);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.794042);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.567968);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.590457);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.605113);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.654017);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.42086);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.367611);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.185897);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.236535);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.150497);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8891301);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9409873);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8619774);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8728219);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8853292);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5748398);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6807034);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6774074);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3971082);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5323031);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5123705);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5396856);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3591081);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2907294);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.394663);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,71.09982);
   hCCpi0inFV_stack_10->SetBinContent(2,39.17629);
   hCCpi0inFV_stack_10->SetBinContent(3,48.20628);
   hCCpi0inFV_stack_10->SetBinContent(4,38.42493);
   hCCpi0inFV_stack_10->SetBinContent(5,40.26421);
   hCCpi0inFV_stack_10->SetBinContent(6,36.4174);
   hCCpi0inFV_stack_10->SetBinContent(7,35.83947);
   hCCpi0inFV_stack_10->SetBinContent(8,26.93842);
   hCCpi0inFV_stack_10->SetBinContent(9,22.05404);
   hCCpi0inFV_stack_10->SetBinContent(10,19.64244);
   hCCpi0inFV_stack_10->SetBinContent(11,16.49693);
   hCCpi0inFV_stack_10->SetBinContent(12,12.31882);
   hCCpi0inFV_stack_10->SetBinContent(13,14.54636);
   hCCpi0inFV_stack_10->SetBinContent(14,12.24659);
   hCCpi0inFV_stack_10->SetBinContent(15,4.644856);
   hCCpi0inFV_stack_10->SetBinContent(16,8.455764);
   hCCpi0inFV_stack_10->SetBinContent(17,4.47507);
   hCCpi0inFV_stack_10->SetBinContent(18,7.033944);
   hCCpi0inFV_stack_10->SetBinContent(19,5.568418);
   hCCpi0inFV_stack_10->SetBinContent(20,3.712854);
   hCCpi0inFV_stack_10->SetBinContent(21,4.391507);
   hCCpi0inFV_stack_10->SetBinContent(22,5.759533);
   hCCpi0inFV_stack_10->SetBinContent(23,2.928192);
   hCCpi0inFV_stack_10->SetBinContent(24,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(25,33.59133);
   hCCpi0inFV_stack_10->SetBinError(1,4.210444);
   hCCpi0inFV_stack_10->SetBinError(2,3.193068);
   hCCpi0inFV_stack_10->SetBinError(3,3.484887);
   hCCpi0inFV_stack_10->SetBinError(4,3.127324);
   hCCpi0inFV_stack_10->SetBinError(5,3.236283);
   hCCpi0inFV_stack_10->SetBinError(6,3.008585);
   hCCpi0inFV_stack_10->SetBinError(7,2.990209);
   hCCpi0inFV_stack_10->SetBinError(8,2.636635);
   hCCpi0inFV_stack_10->SetBinError(9,2.400519);
   hCCpi0inFV_stack_10->SetBinError(10,2.185971);
   hCCpi0inFV_stack_10->SetBinError(11,2.062492);
   hCCpi0inFV_stack_10->SetBinError(12,1.733201);
   hCCpi0inFV_stack_10->SetBinError(13,1.892353);
   hCCpi0inFV_stack_10->SetBinError(14,1.776754);
   hCCpi0inFV_stack_10->SetBinError(15,1.075365);
   hCCpi0inFV_stack_10->SetBinError(16,1.463443);
   hCCpi0inFV_stack_10->SetBinError(17,1.062757);
   hCCpi0inFV_stack_10->SetBinError(18,1.330841);
   hCCpi0inFV_stack_10->SetBinError(19,1.177103);
   hCCpi0inFV_stack_10->SetBinError(20,0.9612155);
   hCCpi0inFV_stack_10->SetBinError(21,1.074576);
   hCCpi0inFV_stack_10->SetBinError(22,1.227289);
   hCCpi0inFV_stack_10->SetBinError(23,0.7950052);
   hCCpi0inFV_stack_10->SetBinError(24,0.650338);
   hCCpi0inFV_stack_10->SetBinError(25,2.87092);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,32.74691);
   hNCinFV_stack_11->SetBinContent(2,22.39817);
   hNCinFV_stack_11->SetBinContent(3,23.29251);
   hNCinFV_stack_11->SetBinContent(4,20.58185);
   hNCinFV_stack_11->SetBinContent(5,20.46689);
   hNCinFV_stack_11->SetBinContent(6,16.60889);
   hNCinFV_stack_11->SetBinContent(7,18.11306);
   hNCinFV_stack_11->SetBinContent(8,11.72252);
   hNCinFV_stack_11->SetBinContent(9,11.87214);
   hNCinFV_stack_11->SetBinContent(10,7.340547);
   hNCinFV_stack_11->SetBinContent(11,10.16002);
   hNCinFV_stack_11->SetBinContent(12,8.041561);
   hNCinFV_stack_11->SetBinContent(13,6.535698);
   hNCinFV_stack_11->SetBinContent(14,6.070046);
   hNCinFV_stack_11->SetBinContent(15,6.945426);
   hNCinFV_stack_11->SetBinContent(16,4.047948);
   hNCinFV_stack_11->SetBinContent(17,2.500666);
   hNCinFV_stack_11->SetBinContent(18,4.588223);
   hNCinFV_stack_11->SetBinContent(19,3.861376);
   hNCinFV_stack_11->SetBinContent(20,2.04891);
   hNCinFV_stack_11->SetBinContent(21,3.66297);
   hNCinFV_stack_11->SetBinContent(22,3.804742);
   hNCinFV_stack_11->SetBinContent(23,2.537621);
   hNCinFV_stack_11->SetBinContent(24,1.807394);
   hNCinFV_stack_11->SetBinContent(25,26.09363);
   hNCinFV_stack_11->SetBinError(1,2.816587);
   hNCinFV_stack_11->SetBinError(2,2.296582);
   hNCinFV_stack_11->SetBinError(3,2.426682);
   hNCinFV_stack_11->SetBinError(4,2.2728);
   hNCinFV_stack_11->SetBinError(5,2.288878);
   hNCinFV_stack_11->SetBinError(6,2.058481);
   hNCinFV_stack_11->SetBinError(7,2.185692);
   hNCinFV_stack_11->SetBinError(8,1.756096);
   hNCinFV_stack_11->SetBinError(9,1.721894);
   hNCinFV_stack_11->SetBinError(10,1.317007);
   hNCinFV_stack_11->SetBinError(11,1.606334);
   hNCinFV_stack_11->SetBinError(12,1.520405);
   hNCinFV_stack_11->SetBinError(13,1.330812);
   hNCinFV_stack_11->SetBinError(14,1.177699);
   hNCinFV_stack_11->SetBinError(15,1.287032);
   hNCinFV_stack_11->SetBinError(16,1.018661);
   hNCinFV_stack_11->SetBinError(17,0.7348895);
   hNCinFV_stack_11->SetBinError(18,1.092434);
   hNCinFV_stack_11->SetBinError(19,1.001472);
   hNCinFV_stack_11->SetBinError(20,0.7064057);
   hNCinFV_stack_11->SetBinError(21,0.9816245);
   hNCinFV_stack_11->SetBinError(22,1.019779);
   hNCinFV_stack_11->SetBinError(23,0.8329108);
   hNCinFV_stack_11->SetBinError(24,0.7084844);
   hNCinFV_stack_11->SetBinError(25,2.566748);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,93.05839);
   hnumuCCinFV_stack_12->SetBinContent(2,19.09336);
   hnumuCCinFV_stack_12->SetBinContent(3,23.65668);
   hnumuCCinFV_stack_12->SetBinContent(4,15.99349);
   hnumuCCinFV_stack_12->SetBinContent(5,18.45307);
   hnumuCCinFV_stack_12->SetBinContent(6,15.00694);
   hnumuCCinFV_stack_12->SetBinContent(7,16.16554);
   hnumuCCinFV_stack_12->SetBinContent(8,12.97468);
   hnumuCCinFV_stack_12->SetBinContent(9,11.64322);
   hnumuCCinFV_stack_12->SetBinContent(10,12.04362);
   hnumuCCinFV_stack_12->SetBinContent(11,9.871138);
   hnumuCCinFV_stack_12->SetBinContent(12,10.92101);
   hnumuCCinFV_stack_12->SetBinContent(13,9.652596);
   hnumuCCinFV_stack_12->SetBinContent(14,7.510792);
   hnumuCCinFV_stack_12->SetBinContent(15,6.933231);
   hnumuCCinFV_stack_12->SetBinContent(16,7.043393);
   hnumuCCinFV_stack_12->SetBinContent(17,4.721661);
   hnumuCCinFV_stack_12->SetBinContent(18,4.519807);
   hnumuCCinFV_stack_12->SetBinContent(19,7.065754);
   hnumuCCinFV_stack_12->SetBinContent(20,4.153711);
   hnumuCCinFV_stack_12->SetBinContent(21,5.298642);
   hnumuCCinFV_stack_12->SetBinContent(22,2.218439);
   hnumuCCinFV_stack_12->SetBinContent(23,2.94116);
   hnumuCCinFV_stack_12->SetBinContent(24,2.985154);
   hnumuCCinFV_stack_12->SetBinContent(25,62.77983);
   hnumuCCinFV_stack_12->SetBinError(1,5.844682);
   hnumuCCinFV_stack_12->SetBinError(2,2.400584);
   hnumuCCinFV_stack_12->SetBinError(3,2.93694);
   hnumuCCinFV_stack_12->SetBinError(4,2.254599);
   hnumuCCinFV_stack_12->SetBinError(5,2.374136);
   hnumuCCinFV_stack_12->SetBinError(6,2.0238);
   hnumuCCinFV_stack_12->SetBinError(7,2.471348);
   hnumuCCinFV_stack_12->SetBinError(8,1.829756);
   hnumuCCinFV_stack_12->SetBinError(9,1.772903);
   hnumuCCinFV_stack_12->SetBinError(10,1.883837);
   hnumuCCinFV_stack_12->SetBinError(11,1.993108);
   hnumuCCinFV_stack_12->SetBinError(12,1.791292);
   hnumuCCinFV_stack_12->SetBinError(13,1.92446);
   hnumuCCinFV_stack_12->SetBinError(14,1.712067);
   hnumuCCinFV_stack_12->SetBinError(15,1.346972);
   hnumuCCinFV_stack_12->SetBinError(16,1.478408);
   hnumuCCinFV_stack_12->SetBinError(17,1.106305);
   hnumuCCinFV_stack_12->SetBinError(18,1.069828);
   hnumuCCinFV_stack_12->SetBinError(19,1.604429);
   hnumuCCinFV_stack_12->SetBinError(20,1.108694);
   hnumuCCinFV_stack_12->SetBinError(21,2.597743);
   hnumuCCinFV_stack_12->SetBinError(22,0.7753857);
   hnumuCCinFV_stack_12->SetBinError(23,0.927831);
   hnumuCCinFV_stack_12->SetBinError(24,0.8548255);
   hnumuCCinFV_stack_12->SetBinError(25,4.530125);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,2.647254);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.5372608);
   hnueCCinFV_stack_13->SetBinContent(7,1.035766);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,1.189329);
   hnueCCinFV_stack_13->SetBinContent(10,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.5807405);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(15,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(16,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(24,1.549171);
   hnueCCinFV_stack_13->SetBinContent(25,7.584968);
   hnueCCinFV_stack_13->SetBinError(1,0.9943211);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.3397478);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.3929604);
   hnueCCinFV_stack_13->SetBinError(7,0.5280682);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.5456561);
   hnueCCinFV_stack_13->SetBinError(10,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.3389978);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.2758068);
   hnueCCinFV_stack_13->SetBinError(15,0.4132436);
   hnueCCinFV_stack_13->SetBinError(16,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3866963);
   hnueCCinFV_stack_13->SetBinError(24,1.190117);
   hnueCCinFV_stack_13->SetBinError(25,2.040692);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__14->SetBinContent(1,479.4444);
   hmcerror__14->SetBinContent(2,271.5962);
   hmcerror__14->SetBinContent(3,287.9285);
   hmcerror__14->SetBinContent(4,260.0818);
   hmcerror__14->SetBinContent(5,254.1141);
   hmcerror__14->SetBinContent(6,226.2921);
   hmcerror__14->SetBinContent(7,206.8466);
   hmcerror__14->SetBinContent(8,172.3964);
   hmcerror__14->SetBinContent(9,151.8855);
   hmcerror__14->SetBinContent(10,136.6234);
   hmcerror__14->SetBinContent(11,114.1354);
   hmcerror__14->SetBinContent(12,103.6192);
   hmcerror__14->SetBinContent(13,97.13963);
   hmcerror__14->SetBinContent(14,88.87698);
   hmcerror__14->SetBinContent(15,67.49794);
   hmcerror__14->SetBinContent(16,58.54731);
   hmcerror__14->SetBinContent(17,44.863);
   hmcerror__14->SetBinContent(18,48.26196);
   hmcerror__14->SetBinContent(19,45.8775);
   hmcerror__14->SetBinContent(20,32.50341);
   hmcerror__14->SetBinContent(21,33.2581);
   hmcerror__14->SetBinContent(22,34.34312);
   hmcerror__14->SetBinContent(23,22.10598);
   hmcerror__14->SetBinContent(24,20.87771);
   hmcerror__14->SetBinContent(25,304.5901);
   hmcerror__14->SetBinError(1,151.9945);
   hmcerror__14->SetBinError(2,112.2133);
   hmcerror__14->SetBinError(3,100.7335);
   hmcerror__14->SetBinError(4,99.4644);
   hmcerror__14->SetBinError(5,101.6182);
   hmcerror__14->SetBinError(6,82.35411);
   hmcerror__14->SetBinError(7,70.71833);
   hmcerror__14->SetBinError(8,76.18641);
   hmcerror__14->SetBinError(9,53.6587);
   hmcerror__14->SetBinError(10,48.16839);
   hmcerror__14->SetBinError(11,40.77745);
   hmcerror__14->SetBinError(12,36.8626);
   hmcerror__14->SetBinError(13,34.64374);
   hmcerror__14->SetBinError(14,32.78493);
   hmcerror__14->SetBinError(15,27.30346);
   hmcerror__14->SetBinError(16,26.79819);
   hmcerror__14->SetBinError(17,17.15822);
   hmcerror__14->SetBinError(18,18.89345);
   hmcerror__14->SetBinError(19,18.35518);
   hmcerror__14->SetBinError(20,13.26149);
   hmcerror__14->SetBinError(21,14.19024);
   hmcerror__14->SetBinError(22,13.34771);
   hmcerror__14->SetBinError(23,15.26718);
   hmcerror__14->SetBinError(24,11.09195);
   hmcerror__14->SetBinError(25,94.18569);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3017[24] = {
   374,
   195,
   199,
   215,
   212,
   142,
   152,
   120,
   95,
   100,
   96,
   80,
   71,
   62,
   47,
   36,
   46,
   37,
   34,
   22,
   27,
   22,
   20,
   14};
   Double_t _felx3017[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3017[24] = {
   19.33908,
   13.96424,
   14.10674,
   14.66288,
   14.56022,
   11.91638,
   12.32883,
   10.95445,
   9.8686,
   10.1212,
   9.9196,
   9.0683,
   8.5518,
   8.0018,
   6.9882,
   6.1381,
   6.9153,
   6.2203,
   5.9703,
   4.8417,
   5.3414,
   4.8417,
   4.6266,
   3.9102};
   Double_t _fehx3017[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3017[24] = {
   19.33908,
   13.96424,
   14.10674,
   14.66288,
   14.56022,
   11.91638,
   12.32883,
   10.95445,
   9.667,
   9.92,
   9.718,
   8.8665,
   8.3496,
   7.7989,
   6.7839,
   5.9318,
   6.7108,
   6.0141,
   5.7635,
   4.6299,
   5.1322,
   4.6299,
   4.4133,
   3.6898};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,99);
   Graph_Graph3017->SetMinimum(9.08082);
   Graph_Graph3017->SetMaximum(431.664);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2418.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 72.0","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 247.2","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 14.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.7","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.1","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.2","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1375.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  264.4","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 482.3","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 251.8","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 323.9","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 12.8","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3018[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3018[24] = {
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
   Double_t _felx3018[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3018[24] = {
   0.3170221,
   0.4131622,
   0.3498559,
   0.3824351,
   0.3998919,
   0.3639284,
   0.3418878,
   0.4419259,
   0.3532838,
   0.3525634,
   0.3572727,
   0.3557507,
   0.3566386,
   0.3688799,
   0.404508,
   0.4577185,
   0.3824582,
   0.3914771,
   0.4000911,
   0.4080029,
   0.4266703,
   0.3886573,
   0.6906361,
   0.5312819};
   Double_t _fehx3018[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3018[24] = {
   0.3170221,
   0.4131622,
   0.3498559,
   0.3824351,
   0.3998919,
   0.3639284,
   0.3418878,
   0.4419259,
   0.3532838,
   0.3525634,
   0.3572727,
   0.3557507,
   0.3566386,
   0.3688799,
   0.404508,
   0.4577185,
   0.3824582,
   0.3914771,
   0.4000911,
   0.4080029,
   0.4266703,
   0.3886573,
   0.6906361,
   0.5312819};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,99);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3019[24] = {
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
   Double_t _felx3019[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3019[24] = {
   0.2887189,
   0.3767009,
   0.3397698,
   0.3581718,
   0.3453371,
   0.3222707,
   0.3193767,
   0.3321951,
   0.3215734,
   0.313113,
   0.308491,
   0.3080416,
   0.3114137,
   0.2981546,
   0.324262,
   0.3091935,
   0.287976,
   0.2947553,
   0.2608479,
   0.2887428,
   0.3018279,
   0.2553343,
   0.3278173,
   0.3314591};
   Double_t _fehx3019[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3019[24] = {
   0.2887189,
   0.3767009,
   0.3397698,
   0.3581718,
   0.3453371,
   0.3222707,
   0.3193767,
   0.3321951,
   0.3215734,
   0.313113,
   0.308491,
   0.3080416,
   0.3114137,
   0.2981546,
   0.324262,
   0.3091935,
   0.287976,
   0.2947553,
   0.2608479,
   0.2887428,
   0.3018279,
   0.2553343,
   0.3278173,
   0.3314591};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,99);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3020[24] = {
   0.7800697,
   0.7179777,
   0.6911437,
   0.8266631,
   0.834271,
   0.6275077,
   0.7348442,
   0.6960704,
   0.625471,
   0.7319392,
   0.8411065,
   0.7720577,
   0.7309067,
   0.6975935,
   0.6963175,
   0.6148873,
   1.025344,
   0.7666494,
   0.741104,
   0.6768521,
   0.8118322,
   0.640594,
   0.9047327,
   0.6705717};
   Double_t _felx3020[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3020[24] = {
   0.04033644,
   0.05141545,
   0.04899388,
   0.05637796,
   0.05729797,
   0.05265927,
   0.05960373,
   0.06354224,
   0.06497393,
   0.07408103,
   0.08691083,
   0.08751564,
   0.08803616,
   0.09003232,
   0.103532,
   0.10484,
   0.1541426,
   0.1288862,
   0.1301357,
   0.1489598,
   0.1606045,
   0.1409802,
   0.2092918,
   0.1872907};
   Double_t _fehx3020[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3020[24] = {
   0.04033644,
   0.05141545,
   0.04899388,
   0.05637796,
   0.05729797,
   0.05265927,
   0.05960373,
   0.06354224,
   0.06364662,
   0.07260837,
   0.08514451,
   0.08556812,
   0.08595462,
   0.08774939,
   0.1005053,
   0.1013163,
   0.1495843,
   0.1246137,
   0.125628,
   0.1424435,
   0.1543143,
   0.134813,
   0.1996428,
   0.176734};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,99);
   Graph_Graph3020->SetMinimum(0.4141163);
   Graph_Graph3020->SetMaximum(1.244093);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_gap_low_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
