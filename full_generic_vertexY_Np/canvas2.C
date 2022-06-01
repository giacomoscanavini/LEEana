#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue May 31 23:41:23 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-170,-122.8,163.3333,12932.78);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__4->SetBinContent(0,5.434565);
   hmc__4->SetBinContent(1,3.056729);
   hmc__4->SetBinContent(2,870.186);
   hmc__4->SetBinContent(3,3322.106);
   hmc__4->SetBinContent(4,4943.469);
   hmc__4->SetBinContent(5,5322.49);
   hmc__4->SetBinContent(6,5530.845);
   hmc__4->SetBinContent(7,5666.245);
   hmc__4->SetBinContent(8,5645.099);
   hmc__4->SetBinContent(9,5582.101);
   hmc__4->SetBinContent(10,5635.941);
   hmc__4->SetBinContent(11,5580.837);
   hmc__4->SetBinContent(12,5546.119);
   hmc__4->SetBinContent(13,6097.102);
   hmc__4->SetBinContent(14,5557.66);
   hmc__4->SetBinContent(15,5511.484);
   hmc__4->SetBinContent(16,5577.252);
   hmc__4->SetBinContent(17,5515.09);
   hmc__4->SetBinContent(18,5535.392);
   hmc__4->SetBinContent(19,5473.943);
   hmc__4->SetBinContent(20,5536.492);
   hmc__4->SetBinContent(21,5481.917);
   hmc__4->SetBinContent(22,5571.91);
   hmc__4->SetBinContent(23,5342.058);
   hmc__4->SetBinContent(24,4114.438);
   hmc__4->SetBinContent(25,1673.41);
   hmc__4->SetBinContent(26,2.252023);
   hmc__4->SetBinContent(27,7.863491);
   hmc__4->SetBinError(0,1.165846);
   hmc__4->SetBinError(1,6.203863);
   hmc__4->SetBinError(2,170.3759);
   hmc__4->SetBinError(3,593.2376);
   hmc__4->SetBinError(4,898.4751);
   hmc__4->SetBinError(5,879.4887);
   hmc__4->SetBinError(6,984.9559);
   hmc__4->SetBinError(7,955.7303);
   hmc__4->SetBinError(8,980.1685);
   hmc__4->SetBinError(9,935.1155);
   hmc__4->SetBinError(10,959.72);
   hmc__4->SetBinError(11,916.3613);
   hmc__4->SetBinError(12,912.2122);
   hmc__4->SetBinError(13,923.2504);
   hmc__4->SetBinError(14,932.7638);
   hmc__4->SetBinError(15,906.0093);
   hmc__4->SetBinError(16,927.0751);
   hmc__4->SetBinError(17,911.8188);
   hmc__4->SetBinError(18,908.9939);
   hmc__4->SetBinError(19,890.3076);
   hmc__4->SetBinError(20,907.8821);
   hmc__4->SetBinError(21,904.2954);
   hmc__4->SetBinError(22,920.8468);
   hmc__4->SetBinError(23,855.1571);
   hmc__4->SetBinError(24,637.2207);
   hmc__4->SetBinError(25,264.5851);
   hmc__4->SetBinError(26,3.507539);
   hmc__4->SetBinError(27,6.925317);
   hmc__4->SetMinimum(-122.8);
   hmc__4->SetMaximum(12280);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,-130,130);
   hs2_stack_2->SetMinimum(-1.259451e-08);
   hs2_stack_2->SetMaximum(6401.957);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(0,0.4422348);
   hbadmatch_stack_1->SetBinContent(1,0.2130385);
   hbadmatch_stack_1->SetBinContent(2,22.79605);
   hbadmatch_stack_1->SetBinContent(3,59.15555);
   hbadmatch_stack_1->SetBinContent(4,51.40334);
   hbadmatch_stack_1->SetBinContent(5,48.86673);
   hbadmatch_stack_1->SetBinContent(6,45.37573);
   hbadmatch_stack_1->SetBinContent(7,54.48099);
   hbadmatch_stack_1->SetBinContent(8,42.62644);
   hbadmatch_stack_1->SetBinContent(9,53.65964);
   hbadmatch_stack_1->SetBinContent(10,54.70697);
   hbadmatch_stack_1->SetBinContent(11,54.56971);
   hbadmatch_stack_1->SetBinContent(12,51.61115);
   hbadmatch_stack_1->SetBinContent(13,131.4375);
   hbadmatch_stack_1->SetBinContent(14,53.96812);
   hbadmatch_stack_1->SetBinContent(15,66.04968);
   hbadmatch_stack_1->SetBinContent(16,58.02382);
   hbadmatch_stack_1->SetBinContent(17,52.26416);
   hbadmatch_stack_1->SetBinContent(18,58.21545);
   hbadmatch_stack_1->SetBinContent(19,68.53405);
   hbadmatch_stack_1->SetBinContent(20,69.73255);
   hbadmatch_stack_1->SetBinContent(21,66.54033);
   hbadmatch_stack_1->SetBinContent(22,62.95774);
   hbadmatch_stack_1->SetBinContent(23,65.56465);
   hbadmatch_stack_1->SetBinContent(24,77.39066);
   hbadmatch_stack_1->SetBinContent(25,63.59174);
   hbadmatch_stack_1->SetBinContent(27,0.6773415);
   hbadmatch_stack_1->SetBinError(0,0.3146057);
   hbadmatch_stack_1->SetBinError(1,0.2130385);
   hbadmatch_stack_1->SetBinError(2,2.499625);
   hbadmatch_stack_1->SetBinError(3,5.663395);
   hbadmatch_stack_1->SetBinError(4,5.31296);
   hbadmatch_stack_1->SetBinError(5,5.425063);
   hbadmatch_stack_1->SetBinError(6,3.650736);
   hbadmatch_stack_1->SetBinError(7,4.119768);
   hbadmatch_stack_1->SetBinError(8,3.538532);
   hbadmatch_stack_1->SetBinError(9,4.488664);
   hbadmatch_stack_1->SetBinError(10,5.42334);
   hbadmatch_stack_1->SetBinError(11,5.230301);
   hbadmatch_stack_1->SetBinError(12,3.97786);
   hbadmatch_stack_1->SetBinError(13,6.988487);
   hbadmatch_stack_1->SetBinError(14,4.594269);
   hbadmatch_stack_1->SetBinError(15,8.292997);
   hbadmatch_stack_1->SetBinError(16,4.0064);
   hbadmatch_stack_1->SetBinError(17,3.797882);
   hbadmatch_stack_1->SetBinError(18,5.169223);
   hbadmatch_stack_1->SetBinError(19,5.083247);
   hbadmatch_stack_1->SetBinError(20,5.899833);
   hbadmatch_stack_1->SetBinError(21,4.399888);
   hbadmatch_stack_1->SetBinError(22,4.605548);
   hbadmatch_stack_1->SetBinError(23,5.648533);
   hbadmatch_stack_1->SetBinError(24,5.063126);
   hbadmatch_stack_1->SetBinError(25,4.672173);
   hbadmatch_stack_1->SetBinError(27,0.4789575);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,1.137595);
   hext_stack_2->SetBinContent(2,39.75663);
   hext_stack_2->SetBinContent(3,80.20073);
   hext_stack_2->SetBinContent(4,106.7432);
   hext_stack_2->SetBinContent(5,122.9939);
   hext_stack_2->SetBinContent(6,111.8988);
   hext_stack_2->SetBinContent(7,137.7549);
   hext_stack_2->SetBinContent(8,169.1582);
   hext_stack_2->SetBinContent(9,136.6566);
   hext_stack_2->SetBinContent(10,185.6909);
   hext_stack_2->SetBinContent(11,188.3182);
   hext_stack_2->SetBinContent(12,199.0884);
   hext_stack_2->SetBinContent(13,435.5694);
   hext_stack_2->SetBinContent(14,228.3817);
   hext_stack_2->SetBinContent(15,278.2529);
   hext_stack_2->SetBinContent(16,296.4886);
   hext_stack_2->SetBinContent(17,334.4528);
   hext_stack_2->SetBinContent(18,353.1966);
   hext_stack_2->SetBinContent(19,393.9667);
   hext_stack_2->SetBinContent(20,438.1138);
   hext_stack_2->SetBinContent(21,460.9633);
   hext_stack_2->SetBinContent(22,514.9608);
   hext_stack_2->SetBinContent(23,558.4896);
   hext_stack_2->SetBinContent(24,514.1562);
   hext_stack_2->SetBinContent(25,300.6696);
   hext_stack_2->SetBinContent(26,0.7309963);
   hext_stack_2->SetBinContent(27,1.544194);
   hext_stack_2->SetBinError(0,0.6602113);
   hext_stack_2->SetBinError(2,4.365175);
   hext_stack_2->SetBinError(3,6.080924);
   hext_stack_2->SetBinError(4,7.115744);
   hext_stack_2->SetBinError(5,7.627041);
   hext_stack_2->SetBinError(6,7.154395);
   hext_stack_2->SetBinError(7,8.072524);
   hext_stack_2->SetBinError(8,9.220249);
   hext_stack_2->SetBinError(9,7.958406);
   hext_stack_2->SetBinError(10,9.440105);
   hext_stack_2->SetBinError(11,9.350653);
   hext_stack_2->SetBinError(12,9.576337);
   hext_stack_2->SetBinError(13,13.69842);
   hext_stack_2->SetBinError(14,10.23346);
   hext_stack_2->SetBinError(15,11.43024);
   hext_stack_2->SetBinError(16,11.838);
   hext_stack_2->SetBinError(17,12.51438);
   hext_stack_2->SetBinError(18,12.83254);
   hext_stack_2->SetBinError(19,13.53417);
   hext_stack_2->SetBinError(20,14.2824);
   hext_stack_2->SetBinError(21,14.59057);
   hext_stack_2->SetBinError(22,15.48706);
   hext_stack_2->SetBinError(23,16.33155);
   hext_stack_2->SetBinError(24,15.57079);
   hext_stack_2->SetBinError(25,11.65811);
   hext_stack_2->SetBinError(26,0.5201503);
   hext_stack_2->SetBinError(27,0.7753719);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.2643005);
   hdirt_stack_3->SetBinContent(2,24.0322);
   hdirt_stack_3->SetBinContent(3,38.80777);
   hdirt_stack_3->SetBinContent(4,38.13645);
   hdirt_stack_3->SetBinContent(5,44.01562);
   hdirt_stack_3->SetBinContent(6,46.88507);
   hdirt_stack_3->SetBinContent(7,36.15778);
   hdirt_stack_3->SetBinContent(8,38.15977);
   hdirt_stack_3->SetBinContent(9,37.81322);
   hdirt_stack_3->SetBinContent(10,37.21535);
   hdirt_stack_3->SetBinContent(11,41.49279);
   hdirt_stack_3->SetBinContent(12,41.39209);
   hdirt_stack_3->SetBinContent(13,57.04192);
   hdirt_stack_3->SetBinContent(14,40.55425);
   hdirt_stack_3->SetBinContent(15,32.78631);
   hdirt_stack_3->SetBinContent(16,30.52575);
   hdirt_stack_3->SetBinContent(17,39.95675);
   hdirt_stack_3->SetBinContent(18,42.17671);
   hdirt_stack_3->SetBinContent(19,46.01501);
   hdirt_stack_3->SetBinContent(20,42.82983);
   hdirt_stack_3->SetBinContent(21,43.4371);
   hdirt_stack_3->SetBinContent(22,49.15419);
   hdirt_stack_3->SetBinContent(23,58.0438);
   hdirt_stack_3->SetBinContent(24,46.40684);
   hdirt_stack_3->SetBinContent(25,54.98415);
   hdirt_stack_3->SetBinContent(26,0.3381872);
   hdirt_stack_3->SetBinError(0,0.2643005);
   hdirt_stack_3->SetBinError(2,2.845594);
   hdirt_stack_3->SetBinError(3,3.294911);
   hdirt_stack_3->SetBinError(4,3.198091);
   hdirt_stack_3->SetBinError(5,4.031688);
   hdirt_stack_3->SetBinError(6,4.604538);
   hdirt_stack_3->SetBinError(7,3.191416);
   hdirt_stack_3->SetBinError(8,3.600489);
   hdirt_stack_3->SetBinError(9,4.357758);
   hdirt_stack_3->SetBinError(10,3.53068);
   hdirt_stack_3->SetBinError(11,3.701222);
   hdirt_stack_3->SetBinError(12,4.051288);
   hdirt_stack_3->SetBinError(13,4.106789);
   hdirt_stack_3->SetBinError(14,4.213575);
   hdirt_stack_3->SetBinError(15,3.03542);
   hdirt_stack_3->SetBinError(16,3.55953);
   hdirt_stack_3->SetBinError(17,3.311688);
   hdirt_stack_3->SetBinError(18,4.083611);
   hdirt_stack_3->SetBinError(19,6.736319);
   hdirt_stack_3->SetBinError(20,3.569407);
   hdirt_stack_3->SetBinError(21,3.723891);
   hdirt_stack_3->SetBinError(22,4.204153);
   hdirt_stack_3->SetBinError(23,4.810682);
   hdirt_stack_3->SetBinError(24,4.323575);
   hdirt_stack_3->SetBinError(25,5.219471);
   hdirt_stack_3->SetBinError(26,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,1.373626);
   houtFV_stack_4->SetBinContent(1,0.9286332);
   houtFV_stack_4->SetBinContent(2,359.8215);
   houtFV_stack_4->SetBinContent(3,352.4972);
   houtFV_stack_4->SetBinContent(4,166.5407);
   houtFV_stack_4->SetBinContent(5,152.6019);
   houtFV_stack_4->SetBinContent(6,146.2239);
   houtFV_stack_4->SetBinContent(7,139.7221);
   houtFV_stack_4->SetBinContent(8,140.2022);
   houtFV_stack_4->SetBinContent(9,137.537);
   houtFV_stack_4->SetBinContent(10,140.7396);
   houtFV_stack_4->SetBinContent(11,134.1828);
   houtFV_stack_4->SetBinContent(12,133.2945);
   houtFV_stack_4->SetBinContent(13,145.6923);
   houtFV_stack_4->SetBinContent(14,140.1984);
   houtFV_stack_4->SetBinContent(15,124.2188);
   houtFV_stack_4->SetBinContent(16,144.3154);
   houtFV_stack_4->SetBinContent(17,123.5319);
   houtFV_stack_4->SetBinContent(18,137.2326);
   houtFV_stack_4->SetBinContent(19,126.79);
   houtFV_stack_4->SetBinContent(20,143.4798);
   houtFV_stack_4->SetBinContent(21,133.4799);
   houtFV_stack_4->SetBinContent(22,148.4222);
   houtFV_stack_4->SetBinContent(23,160.4375);
   houtFV_stack_4->SetBinContent(24,277.9919);
   houtFV_stack_4->SetBinContent(25,659.2539);
   houtFV_stack_4->SetBinContent(26,0.7336084);
   houtFV_stack_4->SetBinContent(27,1.139942);
   houtFV_stack_4->SetBinError(0,0.519186);
   houtFV_stack_4->SetBinError(1,0.48078);
   houtFV_stack_4->SetBinError(2,11.57034);
   houtFV_stack_4->SetBinError(3,10.97964);
   houtFV_stack_4->SetBinError(4,7.814431);
   houtFV_stack_4->SetBinError(5,6.798047);
   houtFV_stack_4->SetBinError(6,6.772366);
   houtFV_stack_4->SetBinError(7,6.750406);
   houtFV_stack_4->SetBinError(8,6.51005);
   houtFV_stack_4->SetBinError(9,6.905639);
   houtFV_stack_4->SetBinError(10,6.645843);
   houtFV_stack_4->SetBinError(11,6.877726);
   houtFV_stack_4->SetBinError(12,6.345573);
   houtFV_stack_4->SetBinError(13,6.655315);
   houtFV_stack_4->SetBinError(14,6.812052);
   houtFV_stack_4->SetBinError(15,6.398475);
   houtFV_stack_4->SetBinError(16,7.103451);
   houtFV_stack_4->SetBinError(17,5.782255);
   houtFV_stack_4->SetBinError(18,7.113601);
   houtFV_stack_4->SetBinError(19,6.017047);
   houtFV_stack_4->SetBinError(20,6.908993);
   houtFV_stack_4->SetBinError(21,6.546978);
   houtFV_stack_4->SetBinError(22,6.516015);
   houtFV_stack_4->SetBinError(23,7.375241);
   houtFV_stack_4->SetBinError(24,10.3838);
   houtFV_stack_4->SetBinError(25,15.84763);
   houtFV_stack_4->SetBinError(26,0.4394482);
   houtFV_stack_4->SetBinError(27,0.5985163);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.8366721);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7664219);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.9763402);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.739354);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.630826);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.5716177);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.5581679);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.045758);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.54239);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3199419);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2727714);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3728455);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3047819);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3805083);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1506776);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2198343);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3843256);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2211578);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1431726);
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.7529721);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,12.12907);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,77.02023);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,140.0761);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,159.1324);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,154.7963);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,177.0731);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,171.1135);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,166.4692);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,160.5495);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,172.8143);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,173.7938);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,191.283);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,167.3623);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,166.0055);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,162.0205);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,156.6619);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,157.7202);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,157.8513);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,169.73);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,150.457);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,154.513);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,144.8847);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,98.28694);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,22.54837);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,0.7250721);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.3162714);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.084855);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.831611);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.850911);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.150648);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.99629);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.462689);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.317439);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.228606);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,4.091883);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,4.309497);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,4.363959);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,4.379266);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,4.193029);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,4.235688);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,4.194134);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,4.054838);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,4.059018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,4.087291);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,4.336717);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,4.051353);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,4.113726);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,4.031434);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.233391);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.557306);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.03945654);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.3150384);
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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(0,0.3900497);
   hCCpi0inFV_stack_7->SetBinContent(1,0.3401776);
   hCCpi0inFV_stack_7->SetBinContent(2,43.25316);
   hCCpi0inFV_stack_7->SetBinContent(3,269.1324);
   hCCpi0inFV_stack_7->SetBinContent(4,421.9753);
   hCCpi0inFV_stack_7->SetBinContent(5,439.3153);
   hCCpi0inFV_stack_7->SetBinContent(6,462.6307);
   hCCpi0inFV_stack_7->SetBinContent(7,483.2726);
   hCCpi0inFV_stack_7->SetBinContent(8,473.9657);
   hCCpi0inFV_stack_7->SetBinContent(9,455.9362);
   hCCpi0inFV_stack_7->SetBinContent(10,471.9044);
   hCCpi0inFV_stack_7->SetBinContent(11,468.7249);
   hCCpi0inFV_stack_7->SetBinContent(12,450.8429);
   hCCpi0inFV_stack_7->SetBinContent(13,486.0448);
   hCCpi0inFV_stack_7->SetBinContent(14,457.7469);
   hCCpi0inFV_stack_7->SetBinContent(15,460.7852);
   hCCpi0inFV_stack_7->SetBinContent(16,458.2937);
   hCCpi0inFV_stack_7->SetBinContent(17,438.6953);
   hCCpi0inFV_stack_7->SetBinContent(18,457.9941);
   hCCpi0inFV_stack_7->SetBinContent(19,443.4219);
   hCCpi0inFV_stack_7->SetBinContent(20,447.4547);
   hCCpi0inFV_stack_7->SetBinContent(21,435.5333);
   hCCpi0inFV_stack_7->SetBinContent(22,439.6596);
   hCCpi0inFV_stack_7->SetBinContent(23,407.3332);
   hCCpi0inFV_stack_7->SetBinContent(24,295.993);
   hCCpi0inFV_stack_7->SetBinContent(25,49.28638);
   hCCpi0inFV_stack_7->SetBinContent(26,0.3934307);
   hCCpi0inFV_stack_7->SetBinContent(27,0.1967154);
   hCCpi0inFV_stack_7->SetBinError(0,0.2758068);
   hCCpi0inFV_stack_7->SetBinError(1,0.3401776);
   hCCpi0inFV_stack_7->SetBinError(2,3.339162);
   hCCpi0inFV_stack_7->SetBinError(3,8.296198);
   hCCpi0inFV_stack_7->SetBinError(4,10.33752);
   hCCpi0inFV_stack_7->SetBinError(5,10.49261);
   hCCpi0inFV_stack_7->SetBinError(6,10.8238);
   hCCpi0inFV_stack_7->SetBinError(7,11.06084);
   hCCpi0inFV_stack_7->SetBinError(8,10.92356);
   hCCpi0inFV_stack_7->SetBinError(9,10.72368);
   hCCpi0inFV_stack_7->SetBinError(10,10.89099);
   hCCpi0inFV_stack_7->SetBinError(11,10.86157);
   hCCpi0inFV_stack_7->SetBinError(12,10.68994);
   hCCpi0inFV_stack_7->SetBinError(13,11.21797);
   hCCpi0inFV_stack_7->SetBinError(14,10.81451);
   hCCpi0inFV_stack_7->SetBinError(15,10.74053);
   hCCpi0inFV_stack_7->SetBinError(16,10.74707);
   hCCpi0inFV_stack_7->SetBinError(17,10.49507);
   hCCpi0inFV_stack_7->SetBinError(18,10.72706);
   hCCpi0inFV_stack_7->SetBinError(19,10.6284);
   hCCpi0inFV_stack_7->SetBinError(20,10.64768);
   hCCpi0inFV_stack_7->SetBinError(21,10.49967);
   hCCpi0inFV_stack_7->SetBinError(22,10.58242);
   hCCpi0inFV_stack_7->SetBinError(23,10.09013);
   hCCpi0inFV_stack_7->SetBinError(24,8.596783);
   hCCpi0inFV_stack_7->SetBinError(25,3.504856);
   hCCpi0inFV_stack_7->SetBinError(26,0.2781975);
   hCCpi0inFV_stack_7->SetBinError(27,0.1967154);
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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(0,0.8770706);
   hNCinFV_stack_8->SetBinContent(1,0.1967154);
   hNCinFV_stack_8->SetBinContent(2,34.72491);
   hNCinFV_stack_8->SetBinContent(3,248.3755);
   hNCinFV_stack_8->SetBinContent(4,415.1307);
   hNCinFV_stack_8->SetBinContent(5,451.6019);
   hNCinFV_stack_8->SetBinContent(6,486.825);
   hNCinFV_stack_8->SetBinContent(7,494.1904);
   hNCinFV_stack_8->SetBinContent(8,478.2003);
   hNCinFV_stack_8->SetBinContent(9,497.7275);
   hNCinFV_stack_8->SetBinContent(10,512.5011);
   hNCinFV_stack_8->SetBinContent(11,501.9291);
   hNCinFV_stack_8->SetBinContent(12,475.6554);
   hNCinFV_stack_8->SetBinContent(13,498.3373);
   hNCinFV_stack_8->SetBinContent(14,471.2269);
   hNCinFV_stack_8->SetBinContent(15,461.4219);
   hNCinFV_stack_8->SetBinContent(16,465.8972);
   hNCinFV_stack_8->SetBinContent(17,462.712);
   hNCinFV_stack_8->SetBinContent(18,457.6496);
   hNCinFV_stack_8->SetBinContent(19,477.6402);
   hNCinFV_stack_8->SetBinContent(20,452.4638);
   hNCinFV_stack_8->SetBinContent(21,467.5818);
   hNCinFV_stack_8->SetBinContent(22,445.8395);
   hNCinFV_stack_8->SetBinContent(23,401.6613);
   hNCinFV_stack_8->SetBinContent(24,280.0952);
   hNCinFV_stack_8->SetBinContent(25,50.18628);
   hNCinFV_stack_8->SetBinContent(27,1.125349);
   hNCinFV_stack_8->SetBinError(0,0.5197486);
   hNCinFV_stack_8->SetBinError(1,0.1967154);
   hNCinFV_stack_8->SetBinError(2,2.97949);
   hNCinFV_stack_8->SetBinError(3,7.947272);
   hNCinFV_stack_8->SetBinError(4,10.16681);
   hNCinFV_stack_8->SetBinError(5,10.56877);
   hNCinFV_stack_8->SetBinError(6,11.07177);
   hNCinFV_stack_8->SetBinError(7,11.14121);
   hNCinFV_stack_8->SetBinError(8,10.919);
   hNCinFV_stack_8->SetBinError(9,11.19987);
   hNCinFV_stack_8->SetBinError(10,11.34047);
   hNCinFV_stack_8->SetBinError(11,11.27643);
   hNCinFV_stack_8->SetBinError(12,10.91501);
   hNCinFV_stack_8->SetBinError(13,11.32686);
   hNCinFV_stack_8->SetBinError(14,10.88548);
   hNCinFV_stack_8->SetBinError(15,10.77818);
   hNCinFV_stack_8->SetBinError(16,10.80698);
   hNCinFV_stack_8->SetBinError(17,10.80625);
   hNCinFV_stack_8->SetBinError(18,10.72402);
   hNCinFV_stack_8->SetBinError(19,10.94153);
   hNCinFV_stack_8->SetBinError(20,10.64393);
   hNCinFV_stack_8->SetBinError(21,10.88411);
   hNCinFV_stack_8->SetBinError(22,10.63675);
   hNCinFV_stack_8->SetBinError(23,9.979803);
   hNCinFV_stack_8->SetBinError(24,8.458881);
   hNCinFV_stack_8->SetBinError(25,3.635375);
   hNCinFV_stack_8->SetBinError(27,0.5194673);
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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(1,1.294465);
   hnumuCCinFV_stack_9->SetBinContent(2,331.4471);
   hnumuCCinFV_stack_9->SetBinContent(3,2181.167);
   hnumuCCinFV_stack_9->SetBinContent(4,3568.937);
   hnumuCCinFV_stack_9->SetBinContent(5,3876.774);
   hnumuCCinFV_stack_9->SetBinContent(6,4050.488);
   hnumuCCinFV_stack_9->SetBinContent(7,4113.927);
   hnumuCCinFV_stack_9->SetBinContent(8,4101.734);
   hnumuCCinFV_stack_9->SetBinContent(9,4065.334);
   hnumuCCinFV_stack_9->SetBinContent(10,4036.441);
   hnumuCCinFV_stack_9->SetBinContent(11,3989.116);
   hnumuCCinFV_stack_9->SetBinContent(12,4000.007);
   hnumuCCinFV_stack_9->SetBinContent(13,4122.999);
   hnumuCCinFV_stack_9->SetBinContent(14,3968.998);
   hnumuCCinFV_stack_9->SetBinContent(15,3899.729);
   hnumuCCinFV_stack_9->SetBinContent(16,3927.146);
   hnumuCCinFV_stack_9->SetBinContent(17,3883.424);
   hnumuCCinFV_stack_9->SetBinContent(18,3839.077);
   hnumuCCinFV_stack_9->SetBinContent(19,3729.343);
   hnumuCCinFV_stack_9->SetBinContent(20,3747.666);
   hnumuCCinFV_stack_9->SetBinContent(21,3702.792);
   hnumuCCinFV_stack_9->SetBinContent(22,3727.526);
   hnumuCCinFV_stack_9->SetBinContent(23,3521.773);
   hnumuCCinFV_stack_9->SetBinContent(24,2507.972);
   hnumuCCinFV_stack_9->SetBinContent(25,467.3181);
   hnumuCCinFV_stack_9->SetBinContent(27,2.454877);
   hnumuCCinFV_stack_9->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(1,1.294465);
   hnumuCCinFV_stack_9->SetBinError(2,13.031);
   hnumuCCinFV_stack_9->SetBinError(3,33.99885);
   hnumuCCinFV_stack_9->SetBinError(4,44.20641);
   hnumuCCinFV_stack_9->SetBinError(5,44.32219);
   hnumuCCinFV_stack_9->SetBinError(6,46.52152);
   hnumuCCinFV_stack_9->SetBinError(7,46.70881);
   hnumuCCinFV_stack_9->SetBinError(8,46.52534);
   hnumuCCinFV_stack_9->SetBinError(9,45.89273);
   hnumuCCinFV_stack_9->SetBinError(10,46.02538);
   hnumuCCinFV_stack_9->SetBinError(11,45.49169);
   hnumuCCinFV_stack_9->SetBinError(12,45.12376);
   hnumuCCinFV_stack_9->SetBinError(13,45.73841);
   hnumuCCinFV_stack_9->SetBinError(14,45.97256);
   hnumuCCinFV_stack_9->SetBinError(15,46.04554);
   hnumuCCinFV_stack_9->SetBinError(16,45.94218);
   hnumuCCinFV_stack_9->SetBinError(17,45.66327);
   hnumuCCinFV_stack_9->SetBinError(18,44.96287);
   hnumuCCinFV_stack_9->SetBinError(19,43.80208);
   hnumuCCinFV_stack_9->SetBinError(20,44.72084);
   hnumuCCinFV_stack_9->SetBinError(21,44.45064);
   hnumuCCinFV_stack_9->SetBinError(22,44.53381);
   hnumuCCinFV_stack_9->SetBinError(23,43.16008);
   hnumuCCinFV_stack_9->SetBinError(24,36.4495);
   hnumuCCinFV_stack_9->SetBinError(25,15.03122);
   hnumuCCinFV_stack_9->SetBinError(27,1.460184);
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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(2,2.197535);
   hnueCCinFV_stack_10->SetBinContent(3,15.66554);
   hnueCCinFV_stack_10->SetBinContent(4,34.16505);
   hnueCCinFV_stack_10->SetBinContent(5,26.97917);
   hnueCCinFV_stack_10->SetBinContent(6,25.66529);
   hnueCCinFV_stack_10->SetBinContent(7,28.8285);
   hnueCCinFV_stack_10->SetBinContent(8,29.42322);
   hnueCCinFV_stack_10->SetBinContent(9,30.20013);
   hnueCCinFV_stack_10->SetBinContent(10,35.21623);
   hnueCCinFV_stack_10->SetBinContent(11,29.03448);
   hnueCCinFV_stack_10->SetBinContent(12,19.69415);
   hnueCCinFV_stack_10->SetBinContent(13,27.06594);
   hnueCCinFV_stack_10->SetBinContent(14,28.65215);
   hnueCCinFV_stack_10->SetBinContent(15,21.71949);
   hnueCCinFV_stack_10->SetBinContent(16,33.87228);
   hnueCCinFV_stack_10->SetBinContent(17,22.83303);
   hnueCCinFV_stack_10->SetBinContent(18,31.08423);
   hnueCCinFV_stack_10->SetBinContent(19,29.83856);
   hnueCCinFV_stack_10->SetBinContent(20,24.3655);
   hnueCCinFV_stack_10->SetBinContent(21,20.51832);
   hnueCCinFV_stack_10->SetBinContent(22,28.54146);
   hnueCCinFV_stack_10->SetBinContent(23,23.25736);
   hnueCCinFV_stack_10->SetBinContent(24,15.83732);
   hnueCCinFV_stack_10->SetBinContent(25,5.321142);
   hnueCCinFV_stack_10->SetBinError(2,0.7076883);
   hnueCCinFV_stack_10->SetBinError(3,3.230603);
   hnueCCinFV_stack_10->SetBinError(4,5.329172);
   hnueCCinFV_stack_10->SetBinError(5,3.601262);
   hnueCCinFV_stack_10->SetBinError(6,2.765253);
   hnueCCinFV_stack_10->SetBinError(7,3.556244);
   hnueCCinFV_stack_10->SetBinError(8,4.12777);
   hnueCCinFV_stack_10->SetBinError(9,4.080311);
   hnueCCinFV_stack_10->SetBinError(10,4.541645);
   hnueCCinFV_stack_10->SetBinError(11,3.158971);
   hnueCCinFV_stack_10->SetBinError(12,2.254969);
   hnueCCinFV_stack_10->SetBinError(13,2.91856);
   hnueCCinFV_stack_10->SetBinError(14,3.515648);
   hnueCCinFV_stack_10->SetBinError(15,2.465843);
   hnueCCinFV_stack_10->SetBinError(16,4.384031);
   hnueCCinFV_stack_10->SetBinError(17,2.688918);
   hnueCCinFV_stack_10->SetBinError(18,4.560635);
   hnueCCinFV_stack_10->SetBinError(19,5.353777);
   hnueCCinFV_stack_10->SetBinError(20,3.383012);
   hnueCCinFV_stack_10->SetBinError(21,2.464706);
   hnueCCinFV_stack_10->SetBinError(22,3.567208);
   hnueCCinFV_stack_10->SetBinError(23,2.811848);
   hnueCCinFV_stack_10->SetBinError(24,2.236578);
   hnueCCinFV_stack_10->SetBinError(25,2.389973);
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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__5->SetBinContent(0,5.434565);
   hmcerror__5->SetBinContent(1,3.056729);
   hmcerror__5->SetBinContent(2,870.186);
   hmcerror__5->SetBinContent(3,3322.106);
   hmcerror__5->SetBinContent(4,4943.469);
   hmcerror__5->SetBinContent(5,5322.49);
   hmcerror__5->SetBinContent(6,5530.845);
   hmcerror__5->SetBinContent(7,5666.245);
   hmcerror__5->SetBinContent(8,5645.099);
   hmcerror__5->SetBinContent(9,5582.101);
   hmcerror__5->SetBinContent(10,5635.941);
   hmcerror__5->SetBinContent(11,5580.837);
   hmcerror__5->SetBinContent(12,5546.119);
   hmcerror__5->SetBinContent(13,6097.102);
   hmcerror__5->SetBinContent(14,5557.66);
   hmcerror__5->SetBinContent(15,5511.484);
   hmcerror__5->SetBinContent(16,5577.252);
   hmcerror__5->SetBinContent(17,5515.09);
   hmcerror__5->SetBinContent(18,5535.392);
   hmcerror__5->SetBinContent(19,5473.943);
   hmcerror__5->SetBinContent(20,5536.492);
   hmcerror__5->SetBinContent(21,5481.917);
   hmcerror__5->SetBinContent(22,5571.91);
   hmcerror__5->SetBinContent(23,5342.058);
   hmcerror__5->SetBinContent(24,4114.438);
   hmcerror__5->SetBinContent(25,1673.41);
   hmcerror__5->SetBinContent(26,2.252023);
   hmcerror__5->SetBinContent(27,7.863491);
   hmcerror__5->SetBinError(0,1.165846);
   hmcerror__5->SetBinError(1,6.203863);
   hmcerror__5->SetBinError(2,170.3759);
   hmcerror__5->SetBinError(3,593.2376);
   hmcerror__5->SetBinError(4,898.4751);
   hmcerror__5->SetBinError(5,879.4887);
   hmcerror__5->SetBinError(6,984.9559);
   hmcerror__5->SetBinError(7,955.7303);
   hmcerror__5->SetBinError(8,980.1685);
   hmcerror__5->SetBinError(9,935.1155);
   hmcerror__5->SetBinError(10,959.72);
   hmcerror__5->SetBinError(11,916.3613);
   hmcerror__5->SetBinError(12,912.2122);
   hmcerror__5->SetBinError(13,923.2504);
   hmcerror__5->SetBinError(14,932.7638);
   hmcerror__5->SetBinError(15,906.0093);
   hmcerror__5->SetBinError(16,927.0751);
   hmcerror__5->SetBinError(17,911.8188);
   hmcerror__5->SetBinError(18,908.9939);
   hmcerror__5->SetBinError(19,890.3076);
   hmcerror__5->SetBinError(20,907.8821);
   hmcerror__5->SetBinError(21,904.2954);
   hmcerror__5->SetBinError(22,920.8468);
   hmcerror__5->SetBinError(23,855.1571);
   hmcerror__5->SetBinError(24,637.2207);
   hmcerror__5->SetBinError(25,264.5851);
   hmcerror__5->SetBinError(26,3.507539);
   hmcerror__5->SetBinError(27,6.925317);
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
   
   Double_t _fx3005[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3005[26] = {
   3,
   736,
   3261,
   4955,
   5475,
   5523,
   5402,
   5403,
   5407,
   5526,
   5418,
   5549,
   6140,
   5416,
   5461,
   5248,
   5348,
   5262,
   5380,
   5387,
   5441,
   5422,
   5227,
   3768,
   1371,
   4};
   Double_t _felx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3005[26] = {
   2.143368,
   27.12932,
   57.10517,
   70.39176,
   73.99324,
   74.31689,
   73.4983,
   73.5051,
   73.53231,
   74.33707,
   73.60706,
   74.49161,
   78.35815,
   73.59348,
   73.89858,
   72.44308,
   73.13002,
   72.53964,
   73.34848,
   73.39619,
   73.76313,
   73.63423,
   72.29799,
   61.38404,
   37.02702,
   2.29683};
   Double_t _fehx3005[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3005[26] = {
   1.72422,
   27.12932,
   57.10517,
   70.39176,
   73.99324,
   74.31689,
   73.4983,
   73.5051,
   73.53231,
   74.33707,
   73.60706,
   74.49161,
   78.35815,
   73.59348,
   73.89858,
   72.44308,
   73.13002,
   72.53964,
   73.34848,
   73.39619,
   73.76313,
   73.63423,
   72.29799,
   61.38404,
   37.02702,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-156,156);
   Graph_Graph3005->SetMinimum(0.7709688);
   Graph_Graph3005->SetMaximum(6840.108);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=30.7/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 117533.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 1433.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 6586.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1008.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4470.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3464.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9719.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 9989.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 83362.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 590.0","F");

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
   TText *pt_LaTex = pt->AddText("generic_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3006[26] = {
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
   Double_t _felx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3006[26] = {
   2.029575,
   0.1957925,
   0.1785728,
   0.1817499,
   0.1652401,
   0.1780842,
   0.1686708,
   0.1736318,
   0.1675204,
   0.1702857,
   0.1641978,
   0.1644776,
   0.1514245,
   0.1678339,
   0.1643857,
   0.1662243,
   0.1653316,
   0.1642149,
   0.1626447,
   0.1639815,
   0.1649597,
   0.1652659,
   0.1600801,
   0.1548743,
   0.1581113,
   1.557506};
   Double_t _fehx3006[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3006[26] = {
   2.029575,
   0.1957925,
   0.1785728,
   0.1817499,
   0.1652401,
   0.1780842,
   0.1686708,
   0.1736318,
   0.1675204,
   0.1702857,
   0.1641978,
   0.1644776,
   0.1514245,
   0.1678339,
   0.1643857,
   0.1662243,
   0.1653316,
   0.1642149,
   0.1626447,
   0.1639815,
   0.1649597,
   0.1652659,
   0.1600801,
   0.1548743,
   0.1581113,
   1.557506};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-156,156);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3007[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3007[26] = {
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
   Double_t _felx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3007[26] = {
   0.7224129,
   0.1537379,
   0.1533038,
   0.157014,
   0.148109,
   0.1561785,
   0.1495919,
   0.1508374,
   0.1500891,
   0.1508128,
   0.1505324,
   0.1500767,
   0.1383453,
   0.1523075,
   0.1500803,
   0.1515146,
   0.1438297,
   0.1451382,
   0.1462698,
   0.145989,
   0.143382,
   0.1456125,
   0.1439903,
   0.1373045,
   0.1291322,
   0.4505925};
   Double_t _fehx3007[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3007[26] = {
   0.7224129,
   0.1537379,
   0.1533038,
   0.157014,
   0.148109,
   0.1561785,
   0.1495919,
   0.1508374,
   0.1500891,
   0.1508128,
   0.1505324,
   0.1500767,
   0.1383453,
   0.1523075,
   0.1500803,
   0.1515146,
   0.1438297,
   0.1451382,
   0.1462698,
   0.145989,
   0.143382,
   0.1456125,
   0.1439903,
   0.1373045,
   0.1291322,
   0.4505925};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-156,156);
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
   
   Double_t _fx3008[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3008[26] = {
   0.9814412,
   0.8457962,
   0.9816063,
   1.002333,
   1.028654,
   0.9985816,
   0.9533651,
   0.9571134,
   0.9686318,
   0.9804928,
   0.9708221,
   1.00052,
   1.007036,
   0.9745108,
   0.9908401,
   0.9409651,
   0.9697031,
   0.9506102,
   0.9828381,
   0.9729988,
   0.992536,
   0.9730955,
   0.9784618,
   0.9157995,
   0.8192852,
   1.776181};
   Double_t _felx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3008[26] = {
   0.7011965,
   0.03117646,
   0.01718945,
   0.01423934,
   0.013902,
   0.01343681,
   0.01297125,
   0.01302105,
   0.01317287,
   0.01318982,
   0.01318925,
   0.0134313,
   0.01285171,
   0.01324181,
   0.01340811,
   0.01298903,
   0.01325999,
   0.0131047,
   0.01339957,
   0.0132568,
   0.01345572,
   0.01321526,
   0.01353373,
   0.01491918,
   0.02212669,
   1.019897};
   Double_t _fehx3008[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3008[26] = {
   0.5640735,
   0.03117646,
   0.01718945,
   0.01423934,
   0.013902,
   0.01343681,
   0.01297125,
   0.01302105,
   0.01317287,
   0.01318982,
   0.01318925,
   0.0134313,
   0.01285171,
   0.01324181,
   0.01340811,
   0.01298903,
   0.01325999,
   0.0131047,
   0.01339957,
   0.0132568,
   0.01345572,
   0.01321526,
   0.01353373,
   0.01491918,
   0.02212669,
   0.8800356};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0.04264742);
   Graph_Graph3008->SetMaximum(2.893814);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
