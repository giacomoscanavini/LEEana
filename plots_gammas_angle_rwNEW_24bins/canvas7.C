#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 18:43:50 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-4.442466,1.25641,491.2433);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmc__19->SetBinContent(1,83.45967);
   hmc__19->SetBinContent(2,66.52848);
   hmc__19->SetBinContent(3,63.40244);
   hmc__19->SetBinContent(4,60.42677);
   hmc__19->SetBinContent(5,63.82606);
   hmc__19->SetBinContent(6,71.51878);
   hmc__19->SetBinContent(7,76.50639);
   hmc__19->SetBinContent(8,75.57294);
   hmc__19->SetBinContent(9,71.62036);
   hmc__19->SetBinContent(10,85.228);
   hmc__19->SetBinContent(11,95.14996);
   hmc__19->SetBinContent(12,106.2569);
   hmc__19->SetBinContent(13,101.535);
   hmc__19->SetBinContent(14,112.2255);
   hmc__19->SetBinContent(15,126.698);
   hmc__19->SetBinContent(16,127.9989);
   hmc__19->SetBinContent(17,138.73);
   hmc__19->SetBinContent(18,151.5027);
   hmc__19->SetBinContent(19,163.9727);
   hmc__19->SetBinContent(20,167.5636);
   hmc__19->SetBinContent(21,190.3117);
   hmc__19->SetBinContent(22,213.8796);
   hmc__19->SetBinContent(23,206.5825);
   hmc__19->SetBinContent(24,222.1233);
   hmc__19->SetBinContent(25,0.02789998);
   hmc__19->SetBinError(1,28.37139);
   hmc__19->SetBinError(2,22.70582);
   hmc__19->SetBinError(3,23.0768);
   hmc__19->SetBinError(4,26.28604);
   hmc__19->SetBinError(5,24.78058);
   hmc__19->SetBinError(6,28.61248);
   hmc__19->SetBinError(7,26.6149);
   hmc__19->SetBinError(8,34.85682);
   hmc__19->SetBinError(9,35.71523);
   hmc__19->SetBinError(10,35.14389);
   hmc__19->SetBinError(11,37.06919);
   hmc__19->SetBinError(12,39.31631);
   hmc__19->SetBinError(13,44.30563);
   hmc__19->SetBinError(14,45.47187);
   hmc__19->SetBinError(15,51.31537);
   hmc__19->SetBinError(16,52.74448);
   hmc__19->SetBinError(17,56.66883);
   hmc__19->SetBinError(18,61.12601);
   hmc__19->SetBinError(19,63.34771);
   hmc__19->SetBinError(20,72.23443);
   hmc__19->SetBinError(21,77.70091);
   hmc__19->SetBinError(22,90.453);
   hmc__19->SetBinError(23,66.48674);
   hmc__19->SetBinError(24,70.1649);
   hmc__19->SetBinError(25,0.2453937);
   hmc__19->SetMinimum(-4.442466);
   hmc__19->SetMaximum(466.459);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,-1,1);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(233.2295);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.215637);
   hbadmatch_stack_1->SetBinContent(2,1.855206);
   hbadmatch_stack_1->SetBinContent(3,0.6211824);
   hbadmatch_stack_1->SetBinContent(4,2.71068);
   hbadmatch_stack_1->SetBinContent(5,0.5352025);
   hbadmatch_stack_1->SetBinContent(6,5.112571);
   hbadmatch_stack_1->SetBinContent(7,1.747921);
   hbadmatch_stack_1->SetBinContent(8,1.415242);
   hbadmatch_stack_1->SetBinContent(9,0.7874543);
   hbadmatch_stack_1->SetBinContent(10,0.5947699);
   hbadmatch_stack_1->SetBinContent(11,0.5901461);
   hbadmatch_stack_1->SetBinContent(12,1.490911);
   hbadmatch_stack_1->SetBinContent(13,2.63524);
   hbadmatch_stack_1->SetBinContent(14,2.7859);
   hbadmatch_stack_1->SetBinContent(15,2.272087);
   hbadmatch_stack_1->SetBinContent(16,2.39585);
   hbadmatch_stack_1->SetBinContent(17,2.124127);
   hbadmatch_stack_1->SetBinContent(18,2.41157);
   hbadmatch_stack_1->SetBinContent(19,3.556652);
   hbadmatch_stack_1->SetBinContent(20,2.860826);
   hbadmatch_stack_1->SetBinContent(21,3.681993);
   hbadmatch_stack_1->SetBinContent(22,3.320795);
   hbadmatch_stack_1->SetBinContent(23,4.523506);
   hbadmatch_stack_1->SetBinContent(24,5.666393);
   hbadmatch_stack_1->SetBinError(1,0.7699002);
   hbadmatch_stack_1->SetBinError(2,0.7233356);
   hbadmatch_stack_1->SetBinError(3,0.359534);
   hbadmatch_stack_1->SetBinError(4,0.8588701);
   hbadmatch_stack_1->SetBinError(5,0.3921167);
   hbadmatch_stack_1->SetBinError(6,2.201092);
   hbadmatch_stack_1->SetBinError(7,0.6321681);
   hbadmatch_stack_1->SetBinError(8,0.5360813);
   hbadmatch_stack_1->SetBinError(9,0.3934312);
   hbadmatch_stack_1->SetBinError(10,0.3407524);
   hbadmatch_stack_1->SetBinError(11,0.340721);
   hbadmatch_stack_1->SetBinError(12,0.6293749);
   hbadmatch_stack_1->SetBinError(13,1.263661);
   hbadmatch_stack_1->SetBinError(14,0.8327353);
   hbadmatch_stack_1->SetBinError(15,0.8477589);
   hbadmatch_stack_1->SetBinError(16,0.7857345);
   hbadmatch_stack_1->SetBinError(17,0.7947298);
   hbadmatch_stack_1->SetBinError(18,0.8410641);
   hbadmatch_stack_1->SetBinError(19,1.140487);
   hbadmatch_stack_1->SetBinError(20,0.8874316);
   hbadmatch_stack_1->SetBinError(21,0.9462183);
   hbadmatch_stack_1->SetBinError(22,0.9534073);
   hbadmatch_stack_1->SetBinError(23,1.147236);
   hbadmatch_stack_1->SetBinError(24,1.262928);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hext_stack_2->SetBinContent(1,6.945253);
   hext_stack_2->SetBinContent(2,5.034772);
   hext_stack_2->SetBinContent(3,4.517249);
   hext_stack_2->SetBinContent(4,4.93821);
   hext_stack_2->SetBinContent(5,5.248246);
   hext_stack_2->SetBinContent(6,3.166181);
   hext_stack_2->SetBinContent(7,7.422464);
   hext_stack_2->SetBinContent(8,7.23652);
   hext_stack_2->SetBinContent(9,3.241202);
   hext_stack_2->SetBinContent(10,4.028449);
   hext_stack_2->SetBinContent(11,8.891638);
   hext_stack_2->SetBinContent(12,8.720054);
   hext_stack_2->SetBinContent(13,5.001641);
   hext_stack_2->SetBinContent(14,5.351989);
   hext_stack_2->SetBinContent(15,8.649442);
   hext_stack_2->SetBinContent(16,4.613812);
   hext_stack_2->SetBinContent(17,9.95144);
   hext_stack_2->SetBinContent(18,4.125011);
   hext_stack_2->SetBinContent(19,16.66603);
   hext_stack_2->SetBinContent(20,9.697655);
   hext_stack_2->SetBinContent(21,9.458231);
   hext_stack_2->SetBinContent(22,11.00683);
   hext_stack_2->SetBinContent(23,15.83689);
   hext_stack_2->SetBinContent(24,18.67867);
   hext_stack_2->SetBinError(1,1.863119);
   hext_stack_2->SetBinError(2,1.354181);
   hext_stack_2->SetBinError(3,1.553448);
   hext_stack_2->SetBinError(4,1.475167);
   hext_stack_2->SetBinError(5,1.638217);
   hext_stack_2->SetBinError(6,1.061777);
   hext_stack_2->SetBinError(7,1.939769);
   hext_stack_2->SetBinError(8,2.060614);
   hext_stack_2->SetBinError(9,1.178414);
   hext_stack_2->SetBinError(10,1.479117);
   hext_stack_2->SetBinError(11,2.025492);
   hext_stack_2->SetBinError(12,2.045395);
   hext_stack_2->SetBinError(13,1.582242);
   hext_stack_2->SetBinError(14,1.462956);
   hext_stack_2->SetBinError(15,2.014317);
   hext_stack_2->SetBinError(16,1.439057);
   hext_stack_2->SetBinError(17,2.147913);
   hext_stack_2->SetBinError(18,1.358482);
   hext_stack_2->SetBinError(19,3.050235);
   hext_stack_2->SetBinError(20,2.15278);
   hext_stack_2->SetBinError(21,2.062279);
   hext_stack_2->SetBinError(22,2.233678);
   hext_stack_2->SetBinError(23,2.752059);
   hext_stack_2->SetBinError(24,2.931888);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hdirt_stack_3->SetBinContent(1,0.9467657);
   hdirt_stack_3->SetBinContent(2,0.6951543);
   hdirt_stack_3->SetBinContent(3,0.3569671);
   hdirt_stack_3->SetBinContent(4,0.6983124);
   hdirt_stack_3->SetBinContent(6,0.2188956);
   hdirt_stack_3->SetBinContent(7,0.2188956);
   hdirt_stack_3->SetBinContent(8,0.4247338);
   hdirt_stack_3->SetBinContent(9,0.9897644);
   hdirt_stack_3->SetBinContent(10,0.6566868);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.4403464);
   hdirt_stack_3->SetBinContent(15,1.3681);
   hdirt_stack_3->SetBinContent(16,0.4222268);
   hdirt_stack_3->SetBinContent(17,0.6545095);
   hdirt_stack_3->SetBinContent(18,0.8603919);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinContent(22,0.4762587);
   hdirt_stack_3->SetBinContent(23,0.5758626);
   hdirt_stack_3->SetBinContent(24,0.5388689);
   hdirt_stack_3->SetBinError(1,0.494629);
   hdirt_stack_3->SetBinError(2,0.4258516);
   hdirt_stack_3->SetBinError(3,0.258803);
   hdirt_stack_3->SetBinError(4,0.4046009);
   hdirt_stack_3->SetBinError(6,0.2188956);
   hdirt_stack_3->SetBinError(7,0.2188956);
   hdirt_stack_3->SetBinError(8,0.4247338);
   hdirt_stack_3->SetBinError(9,0.5277703);
   hdirt_stack_3->SetBinError(10,0.3791383);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.3095757);
   hdirt_stack_3->SetBinError(15,0.9804616);
   hdirt_stack_3->SetBinError(16,0.3071215);
   hdirt_stack_3->SetBinError(17,0.3290188);
   hdirt_stack_3->SetBinError(18,0.4564881);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetBinError(22,0.3652866);
   hdirt_stack_3->SetBinError(23,0.3389606);
   hdirt_stack_3->SetBinError(24,0.4239131);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   houtFV_stack_4->SetBinContent(1,4.110354);
   houtFV_stack_4->SetBinContent(2,3.75487);
   houtFV_stack_4->SetBinContent(3,2.055672);
   houtFV_stack_4->SetBinContent(4,1.789079);
   houtFV_stack_4->SetBinContent(5,1.260473);
   houtFV_stack_4->SetBinContent(6,2.339216);
   houtFV_stack_4->SetBinContent(7,1.267411);
   houtFV_stack_4->SetBinContent(8,1.180292);
   houtFV_stack_4->SetBinContent(9,2.166627);
   houtFV_stack_4->SetBinContent(10,2.132837);
   houtFV_stack_4->SetBinContent(11,2.247316);
   houtFV_stack_4->SetBinContent(12,1.549128);
   houtFV_stack_4->SetBinContent(13,2.339216);
   houtFV_stack_4->SetBinContent(14,2.725194);
   houtFV_stack_4->SetBinContent(15,3.264626);
   houtFV_stack_4->SetBinContent(16,3.886287);
   houtFV_stack_4->SetBinContent(17,4.249735);
   houtFV_stack_4->SetBinContent(18,4.84319);
   houtFV_stack_4->SetBinContent(19,5.615412);
   houtFV_stack_4->SetBinContent(20,5.34075);
   houtFV_stack_4->SetBinContent(21,5.771122);
   houtFV_stack_4->SetBinContent(22,9.197191);
   houtFV_stack_4->SetBinContent(23,8.846704);
   houtFV_stack_4->SetBinContent(24,13.13892);
   houtFV_stack_4->SetBinError(1,0.9303898);
   houtFV_stack_4->SetBinError(2,1.039038);
   houtFV_stack_4->SetBinError(3,0.7082781);
   houtFV_stack_4->SetBinError(4,0.5968056);
   houtFV_stack_4->SetBinError(5,0.5169375);
   houtFV_stack_4->SetBinError(6,0.8089383);
   houtFV_stack_4->SetBinError(7,0.5883944);
   houtFV_stack_4->SetBinError(8,0.4818523);
   houtFV_stack_4->SetBinError(9,0.7554727);
   houtFV_stack_4->SetBinError(10,0.7494135);
   houtFV_stack_4->SetBinError(11,0.7337357);
   houtFV_stack_4->SetBinError(12,0.6001749);
   houtFV_stack_4->SetBinError(13,0.8089383);
   houtFV_stack_4->SetBinError(14,0.8636569);
   houtFV_stack_4->SetBinError(15,0.8638647);
   houtFV_stack_4->SetBinError(16,1.006706);
   houtFV_stack_4->SetBinError(17,1.038438);
   houtFV_stack_4->SetBinError(18,1.065682);
   houtFV_stack_4->SetBinError(19,1.185551);
   houtFV_stack_4->SetBinError(20,1.129314);
   houtFV_stack_4->SetBinError(21,1.127795);
   houtFV_stack_4->SetBinError(22,1.579786);
   houtFV_stack_4->SetBinError(23,1.48725);
   houtFV_stack_4->SetBinError(24,1.836644);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.198876);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4463997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3984141);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1115999);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8358399);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6277541);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.227608);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.7813678);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.018354);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.379894);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.948272);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2882649);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2996304);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4228219);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2335688);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.317295);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4129646);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3247714);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,35.77526);
   hNCpi0inFVres_stack_7->SetBinContent(2,25.78319);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.65829);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.04764);
   hNCpi0inFVres_stack_7->SetBinContent(5,27.88665);
   hNCpi0inFVres_stack_7->SetBinContent(6,29.09169);
   hNCpi0inFVres_stack_7->SetBinContent(7,30.47688);
   hNCpi0inFVres_stack_7->SetBinContent(8,33.51633);
   hNCpi0inFVres_stack_7->SetBinContent(9,35.35658);
   hNCpi0inFVres_stack_7->SetBinContent(10,40.2333);
   hNCpi0inFVres_stack_7->SetBinContent(11,47.30614);
   hNCpi0inFVres_stack_7->SetBinContent(12,51.11949);
   hNCpi0inFVres_stack_7->SetBinContent(13,52.72475);
   hNCpi0inFVres_stack_7->SetBinContent(14,59.14675);
   hNCpi0inFVres_stack_7->SetBinContent(15,63.0694);
   hNCpi0inFVres_stack_7->SetBinContent(16,66.80183);
   hNCpi0inFVres_stack_7->SetBinContent(17,70.74792);
   hNCpi0inFVres_stack_7->SetBinContent(18,75.72492);
   hNCpi0inFVres_stack_7->SetBinContent(19,78.97012);
   hNCpi0inFVres_stack_7->SetBinContent(20,87.2747);
   hNCpi0inFVres_stack_7->SetBinContent(21,97.23948);
   hNCpi0inFVres_stack_7->SetBinContent(22,105.9495);
   hNCpi0inFVres_stack_7->SetBinContent(23,82.22495);
   hNCpi0inFVres_stack_7->SetBinContent(24,69.16753);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,2.004616);
   hNCpi0inFVres_stack_7->SetBinError(2,1.665799);
   hNCpi0inFVres_stack_7->SetBinError(3,1.552208);
   hNCpi0inFVres_stack_7->SetBinError(4,1.513936);
   hNCpi0inFVres_stack_7->SetBinError(5,1.701286);
   hNCpi0inFVres_stack_7->SetBinError(6,1.803743);
   hNCpi0inFVres_stack_7->SetBinError(7,1.799584);
   hNCpi0inFVres_stack_7->SetBinError(8,1.851849);
   hNCpi0inFVres_stack_7->SetBinError(9,1.919633);
   hNCpi0inFVres_stack_7->SetBinError(10,2.083758);
   hNCpi0inFVres_stack_7->SetBinError(11,2.268243);
   hNCpi0inFVres_stack_7->SetBinError(12,2.362958);
   hNCpi0inFVres_stack_7->SetBinError(13,2.398462);
   hNCpi0inFVres_stack_7->SetBinError(14,2.530464);
   hNCpi0inFVres_stack_7->SetBinError(15,2.617984);
   hNCpi0inFVres_stack_7->SetBinError(16,2.675346);
   hNCpi0inFVres_stack_7->SetBinError(17,2.840567);
   hNCpi0inFVres_stack_7->SetBinError(18,2.923949);
   hNCpi0inFVres_stack_7->SetBinError(19,2.922221);
   hNCpi0inFVres_stack_7->SetBinError(20,3.054228);
   hNCpi0inFVres_stack_7->SetBinError(21,3.235111);
   hNCpi0inFVres_stack_7->SetBinError(22,3.373787);
   hNCpi0inFVres_stack_7->SetBinError(23,2.964218);
   hNCpi0inFVres_stack_7->SetBinError(24,2.703866);
   hNCpi0inFVres_stack_7->SetBinError(25,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.722347);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.546635);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.686799);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.83959);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.752481);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.757217);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.201041);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.764034);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.730477);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.65817);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.142511);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.085383);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.397187);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.323698);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.050602);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.70891);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.76229);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.43107);
   hNCpi0inFVdis_stack_8->SetBinContent(19,13.58021);
   hNCpi0inFVdis_stack_8->SetBinContent(20,14.24018);
   hNCpi0inFVdis_stack_8->SetBinContent(21,18.29534);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.96418);
   hNCpi0inFVdis_stack_8->SetBinContent(23,21.65913);
   hNCpi0inFVdis_stack_8->SetBinContent(24,19.49737);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8778604);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7205158);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7138224);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7743258);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6904486);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7551555);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6938693);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9007285);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7139587);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9766084);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9060063);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9199327);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9905241);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9302755);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.017818);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.127489);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.029446);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.097134);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.194753);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.225787);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.411584);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.426691);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.540926);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.481759);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,10.05905);
   hCCpi0inFV_stack_10->SetBinContent(2,10.30148);
   hCCpi0inFV_stack_10->SetBinContent(3,10.43742);
   hCCpi0inFV_stack_10->SetBinContent(4,7.674456);
   hCCpi0inFV_stack_10->SetBinContent(5,8.407571);
   hCCpi0inFV_stack_10->SetBinContent(6,9.374908);
   hCCpi0inFV_stack_10->SetBinContent(7,13.38103);
   hCCpi0inFV_stack_10->SetBinContent(8,8.384907);
   hCCpi0inFV_stack_10->SetBinContent(9,10.71887);
   hCCpi0inFV_stack_10->SetBinContent(10,12.42086);
   hCCpi0inFV_stack_10->SetBinContent(11,11.57462);
   hCCpi0inFV_stack_10->SetBinContent(12,13.43125);
   hCCpi0inFV_stack_10->SetBinContent(13,11.59176);
   hCCpi0inFV_stack_10->SetBinContent(14,15.38026);
   hCCpi0inFV_stack_10->SetBinContent(15,16.88142);
   hCCpi0inFV_stack_10->SetBinContent(16,19.89737);
   hCCpi0inFV_stack_10->SetBinContent(17,18.45432);
   hCCpi0inFV_stack_10->SetBinContent(18,22.79468);
   hCCpi0inFV_stack_10->SetBinContent(19,18.38548);
   hCCpi0inFV_stack_10->SetBinContent(20,22.25847);
   hCCpi0inFV_stack_10->SetBinContent(21,26.39212);
   hCCpi0inFV_stack_10->SetBinContent(22,28.48988);
   hCCpi0inFV_stack_10->SetBinContent(23,30.26045);
   hCCpi0inFV_stack_10->SetBinContent(24,26.83182);
   hCCpi0inFV_stack_10->SetBinError(1,1.523929);
   hCCpi0inFV_stack_10->SetBinError(2,1.648619);
   hCCpi0inFV_stack_10->SetBinError(3,1.629078);
   hCCpi0inFV_stack_10->SetBinError(4,1.434205);
   hCCpi0inFV_stack_10->SetBinError(5,1.428528);
   hCCpi0inFV_stack_10->SetBinError(6,1.512758);
   hCCpi0inFV_stack_10->SetBinError(7,1.858696);
   hCCpi0inFV_stack_10->SetBinError(8,1.44649);
   hCCpi0inFV_stack_10->SetBinError(9,1.715551);
   hCCpi0inFV_stack_10->SetBinError(10,1.767477);
   hCCpi0inFV_stack_10->SetBinError(11,1.757154);
   hCCpi0inFV_stack_10->SetBinError(12,1.862032);
   hCCpi0inFV_stack_10->SetBinError(13,1.627718);
   hCCpi0inFV_stack_10->SetBinError(14,1.961171);
   hCCpi0inFV_stack_10->SetBinError(15,2.108662);
   hCCpi0inFV_stack_10->SetBinError(16,2.297864);
   hCCpi0inFV_stack_10->SetBinError(17,2.166796);
   hCCpi0inFV_stack_10->SetBinError(18,2.36915);
   hCCpi0inFV_stack_10->SetBinError(19,2.095146);
   hCCpi0inFV_stack_10->SetBinError(20,2.323358);
   hCCpi0inFV_stack_10->SetBinError(21,2.556188);
   hCCpi0inFV_stack_10->SetBinError(22,2.690161);
   hCCpi0inFV_stack_10->SetBinError(23,2.734667);
   hCCpi0inFV_stack_10->SetBinError(24,2.641733);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hNCinFV_stack_11->SetBinContent(1,7.954125);
   hNCinFV_stack_11->SetBinContent(2,6.303717);
   hNCinFV_stack_11->SetBinContent(3,8.557796);
   hNCinFV_stack_11->SetBinContent(4,5.858724);
   hNCinFV_stack_11->SetBinContent(5,7.377503);
   hNCinFV_stack_11->SetBinContent(6,8.092143);
   hNCinFV_stack_11->SetBinContent(7,6.309871);
   hNCinFV_stack_11->SetBinContent(8,6.732413);
   hNCinFV_stack_11->SetBinContent(9,5.276423);
   hNCinFV_stack_11->SetBinContent(10,7.180788);
   hNCinFV_stack_11->SetBinContent(11,7.072591);
   hNCinFV_stack_11->SetBinContent(12,11.52918);
   hNCinFV_stack_11->SetBinContent(13,6.211817);
   hNCinFV_stack_11->SetBinContent(14,9.586173);
   hNCinFV_stack_11->SetBinContent(15,10.74232);
   hNCinFV_stack_11->SetBinContent(16,8.398036);
   hNCinFV_stack_11->SetBinContent(17,9.184897);
   hNCinFV_stack_11->SetBinContent(18,11.28983);
   hNCinFV_stack_11->SetBinContent(19,13.1331);
   hNCinFV_stack_11->SetBinContent(20,9.137798);
   hNCinFV_stack_11->SetBinContent(21,11.78024);
   hNCinFV_stack_11->SetBinContent(22,16.57025);
   hNCinFV_stack_11->SetBinContent(23,21.4437);
   hNCinFV_stack_11->SetBinContent(24,24.9486);
   hNCinFV_stack_11->SetBinError(1,1.413852);
   hNCinFV_stack_11->SetBinError(2,1.256721);
   hNCinFV_stack_11->SetBinError(3,1.456148);
   hNCinFV_stack_11->SetBinError(4,1.241348);
   hNCinFV_stack_11->SetBinError(5,1.374112);
   hNCinFV_stack_11->SetBinError(6,1.317679);
   hNCinFV_stack_11->SetBinError(7,1.176168);
   hNCinFV_stack_11->SetBinError(8,1.345272);
   hNCinFV_stack_11->SetBinError(9,1.108845);
   hNCinFV_stack_11->SetBinError(10,1.359959);
   hNCinFV_stack_11->SetBinError(11,1.387616);
   hNCinFV_stack_11->SetBinError(12,1.745423);
   hNCinFV_stack_11->SetBinError(13,1.209684);
   hNCinFV_stack_11->SetBinError(14,1.507386);
   hNCinFV_stack_11->SetBinError(15,1.700504);
   hNCinFV_stack_11->SetBinError(16,1.495108);
   hNCinFV_stack_11->SetBinError(17,1.546006);
   hNCinFV_stack_11->SetBinError(18,1.628961);
   hNCinFV_stack_11->SetBinError(19,1.872727);
   hNCinFV_stack_11->SetBinError(20,1.49415);
   hNCinFV_stack_11->SetBinError(21,1.687871);
   hNCinFV_stack_11->SetBinError(22,2.020644);
   hNCinFV_stack_11->SetBinError(23,2.330193);
   hNCinFV_stack_11->SetBinError(24,2.55128);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.655477);
   hnumuCCinFV_stack_12->SetBinContent(2,6.597971);
   hnumuCCinFV_stack_12->SetBinContent(3,7.008701);
   hnumuCCinFV_stack_12->SetBinContent(4,6.860797);
   hnumuCCinFV_stack_12->SetBinContent(5,7.066226);
   hnumuCCinFV_stack_12->SetBinContent(6,7.439533);
   hnumuCCinFV_stack_12->SetBinContent(7,9.446136);
   hnumuCCinFV_stack_12->SetBinContent(8,8.082626);
   hnumuCCinFV_stack_12->SetBinContent(9,6.934467);
   hnumuCCinFV_stack_12->SetBinContent(10,8.469767);
   hnumuCCinFV_stack_12->SetBinContent(11,8.259754);
   hnumuCCinFV_stack_12->SetBinContent(12,9.481399);
   hnumuCCinFV_stack_12->SetBinContent(13,9.315016);
   hnumuCCinFV_stack_12->SetBinContent(14,7.536929);
   hnumuCCinFV_stack_12->SetBinContent(15,9.970675);
   hnumuCCinFV_stack_12->SetBinContent(16,8.413819);
   hnumuCCinFV_stack_12->SetBinContent(17,11.0795);
   hnumuCCinFV_stack_12->SetBinContent(18,16.83012);
   hnumuCCinFV_stack_12->SetBinContent(19,12.63345);
   hnumuCCinFV_stack_12->SetBinContent(20,14.17122);
   hnumuCCinFV_stack_12->SetBinContent(21,15.02965);
   hnumuCCinFV_stack_12->SetBinContent(22,17.15389);
   hnumuCCinFV_stack_12->SetBinContent(23,19.06427);
   hnumuCCinFV_stack_12->SetBinContent(24,36.8852);
   hnumuCCinFV_stack_12->SetBinError(1,1.534127);
   hnumuCCinFV_stack_12->SetBinError(2,1.467884);
   hnumuCCinFV_stack_12->SetBinError(3,1.584459);
   hnumuCCinFV_stack_12->SetBinError(4,1.311053);
   hnumuCCinFV_stack_12->SetBinError(5,1.437171);
   hnumuCCinFV_stack_12->SetBinError(6,1.537095);
   hnumuCCinFV_stack_12->SetBinError(7,1.75756);
   hnumuCCinFV_stack_12->SetBinError(8,1.626216);
   hnumuCCinFV_stack_12->SetBinError(9,1.698379);
   hnumuCCinFV_stack_12->SetBinError(10,1.538021);
   hnumuCCinFV_stack_12->SetBinError(11,1.571615);
   hnumuCCinFV_stack_12->SetBinError(12,1.855259);
   hnumuCCinFV_stack_12->SetBinError(13,1.633583);
   hnumuCCinFV_stack_12->SetBinError(14,1.358628);
   hnumuCCinFV_stack_12->SetBinError(15,1.7924);
   hnumuCCinFV_stack_12->SetBinError(16,1.503977);
   hnumuCCinFV_stack_12->SetBinError(17,1.799874);
   hnumuCCinFV_stack_12->SetBinError(18,3.685187);
   hnumuCCinFV_stack_12->SetBinError(19,1.902547);
   hnumuCCinFV_stack_12->SetBinError(20,2.292639);
   hnumuCCinFV_stack_12->SetBinError(21,2.283419);
   hnumuCCinFV_stack_12->SetBinError(22,2.162289);
   hnumuCCinFV_stack_12->SetBinError(23,2.458655);
   hnumuCCinFV_stack_12->SetBinError(24,3.547755);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.6494422);
   hnueCCinFV_stack_13->SetBinContent(16,0.6106752);
   hnueCCinFV_stack_13->SetBinContent(17,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(18,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.4047599);
   hnueCCinFV_stack_13->SetBinContent(22,0.7459182);
   hnueCCinFV_stack_13->SetBinContent(23,1.32485);
   hnueCCinFV_stack_13->SetBinContent(24,5.347373);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.5946997);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.2538659);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.3778196);
   hnueCCinFV_stack_13->SetBinError(16,0.4583227);
   hnueCCinFV_stack_13->SetBinError(17,0.3387718);
   hnueCCinFV_stack_13->SetBinError(18,0.438694);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.2863205);
   hnueCCinFV_stack_13->SetBinError(22,0.4451478);
   hnueCCinFV_stack_13->SetBinError(23,0.5985934);
   hnueCCinFV_stack_13->SetBinError(24,1.239576);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);
   hmcerror__20->SetBinContent(1,83.45967);
   hmcerror__20->SetBinContent(2,66.52848);
   hmcerror__20->SetBinContent(3,63.40244);
   hmcerror__20->SetBinContent(4,60.42677);
   hmcerror__20->SetBinContent(5,63.82606);
   hmcerror__20->SetBinContent(6,71.51878);
   hmcerror__20->SetBinContent(7,76.50639);
   hmcerror__20->SetBinContent(8,75.57294);
   hmcerror__20->SetBinContent(9,71.62036);
   hmcerror__20->SetBinContent(10,85.228);
   hmcerror__20->SetBinContent(11,95.14996);
   hmcerror__20->SetBinContent(12,106.2569);
   hmcerror__20->SetBinContent(13,101.535);
   hmcerror__20->SetBinContent(14,112.2255);
   hmcerror__20->SetBinContent(15,126.698);
   hmcerror__20->SetBinContent(16,127.9989);
   hmcerror__20->SetBinContent(17,138.73);
   hmcerror__20->SetBinContent(18,151.5027);
   hmcerror__20->SetBinContent(19,163.9727);
   hmcerror__20->SetBinContent(20,167.5636);
   hmcerror__20->SetBinContent(21,190.3117);
   hmcerror__20->SetBinContent(22,213.8796);
   hmcerror__20->SetBinContent(23,206.5825);
   hmcerror__20->SetBinContent(24,222.1233);
   hmcerror__20->SetBinContent(25,0.02789998);
   hmcerror__20->SetBinError(1,28.37139);
   hmcerror__20->SetBinError(2,22.70582);
   hmcerror__20->SetBinError(3,23.0768);
   hmcerror__20->SetBinError(4,26.28604);
   hmcerror__20->SetBinError(5,24.78058);
   hmcerror__20->SetBinError(6,28.61248);
   hmcerror__20->SetBinError(7,26.6149);
   hmcerror__20->SetBinError(8,34.85682);
   hmcerror__20->SetBinError(9,35.71523);
   hmcerror__20->SetBinError(10,35.14389);
   hmcerror__20->SetBinError(11,37.06919);
   hmcerror__20->SetBinError(12,39.31631);
   hmcerror__20->SetBinError(13,44.30563);
   hmcerror__20->SetBinError(14,45.47187);
   hmcerror__20->SetBinError(15,51.31537);
   hmcerror__20->SetBinError(16,52.74448);
   hmcerror__20->SetBinError(17,56.66883);
   hmcerror__20->SetBinError(18,61.12601);
   hmcerror__20->SetBinError(19,63.34771);
   hmcerror__20->SetBinError(20,72.23443);
   hmcerror__20->SetBinError(21,77.70091);
   hmcerror__20->SetBinError(22,90.453);
   hmcerror__20->SetBinError(23,66.48674);
   hmcerror__20->SetBinError(24,70.1649);
   hmcerror__20->SetBinError(25,0.2453937);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3025[24] = {
   68,
   40,
   46,
   48,
   44,
   55,
   68,
   61,
   51,
   58,
   62,
   69,
   82,
   88,
   75,
   106,
   105,
   113,
   117,
   104,
   133,
   134,
   145,
   164};
   Double_t _felx3025[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3025[24] = {
   8.3726,
   6.4604,
   6.9153,
   7.0604,
   6.7671,
   7.546,
   8.3726,
   7.9383,
   7.2725,
   7.7446,
   8.0018,
   8.4327,
   9.1791,
   9.5036,
   8.7852,
   10.29563,
   10.24695,
   10.63015,
   10.81665,
   10.19804,
   11.53256,
   11.57584,
   12.04159,
   12.80625};
   Double_t _fehx3025[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3025[24] = {
   8.1701,
   6.2549,
   6.7108,
   6.8561,
   6.5623,
   7.3425,
   8.1701,
   7.7354,
   7.0686,
   7.5415,
   7.7989,
   8.2304,
   8.9774,
   9.3021,
   8.5831,
   10.29563,
   10.24695,
   10.63015,
   10.81665,
   10.19804,
   11.53256,
   11.57584,
   12.04159,
   12.80625};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(19.21294);
   Graph_Graph3025->SetMaximum(191.1329);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3026[24] = {
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
   Double_t _felx3026[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3026[24] = {
   0.3399413,
   0.3412948,
   0.3639734,
   0.4350066,
   0.3882518,
   0.4000695,
   0.3478781,
   0.4612342,
   0.4986742,
   0.4123515,
   0.389587,
   0.3700117,
   0.4363582,
   0.4051831,
   0.4050211,
   0.4120697,
   0.4084829,
   0.4034648,
   0.3863307,
   0.4310866,
   0.4082824,
   0.4229155,
   0.3218411,
   0.3158826};
   Double_t _fehx3026[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3026[24] = {
   0.3399413,
   0.3412948,
   0.3639734,
   0.4350066,
   0.3882518,
   0.4000695,
   0.3478781,
   0.4612342,
   0.4986742,
   0.4123515,
   0.389587,
   0.3700117,
   0.4363582,
   0.4051831,
   0.4050211,
   0.4120697,
   0.4084829,
   0.4034648,
   0.3863307,
   0.4310866,
   0.4082824,
   0.4229155,
   0.3218411,
   0.3158826};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Angle between photons [cosine]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3027[24] = {
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
   Double_t _felx3027[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3027[24] = {
   0.2767692,
   0.288335,
   0.2899092,
   0.2933983,
   0.302129,
   0.3178135,
   0.2959829,
   0.3353071,
   0.3632305,
   0.3301243,
   0.34495,
   0.3312186,
   0.360127,
   0.3671052,
   0.3674614,
   0.3852354,
   0.3652477,
   0.371536,
   0.365069,
   0.3867083,
   0.3908433,
   0.3783363,
   0.2918601,
   0.2343468};
   Double_t _fehx3027[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3027[24] = {
   0.2767692,
   0.288335,
   0.2899092,
   0.2933983,
   0.302129,
   0.3178135,
   0.2959829,
   0.3353071,
   0.3632305,
   0.3301243,
   0.34495,
   0.3312186,
   0.360127,
   0.3671052,
   0.3674614,
   0.3852354,
   0.3652477,
   0.371536,
   0.365069,
   0.3867083,
   0.3908433,
   0.3783363,
   0.2918601,
   0.2343468};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[24] = {
   -0.9583333,
   -0.875,
   -0.7916667,
   -0.7083333,
   -0.625,
   -0.5416667,
   -0.4583333,
   -0.375,
   -0.2916667,
   -0.2083333,
   -0.125,
   -0.04166667,
   0.04166667,
   0.125,
   0.2083333,
   0.2916667,
   0.375,
   0.4583333,
   0.5416667,
   0.625,
   0.7083333,
   0.7916667,
   0.875,
   0.9583333};
   Double_t _fy3028[24] = {
   0.8147648,
   0.6012463,
   0.7255241,
   0.7943499,
   0.6893736,
   0.7690288,
   0.8888146,
   0.8071673,
   0.712088,
   0.6805276,
   0.651603,
   0.6493694,
   0.8076033,
   0.7841355,
   0.5919588,
   0.8281319,
   0.7568659,
   0.7458612,
   0.7135332,
   0.6206597,
   0.6988536,
   0.6265206,
   0.7018986,
   0.7383286};
   Double_t _felx3028[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fely3028[24] = {
   0.1003191,
   0.09710728,
   0.1090699,
   0.1168423,
   0.1060241,
   0.1055108,
   0.1094366,
   0.1050416,
   0.1015424,
   0.0908692,
   0.08409672,
   0.07936141,
   0.09040331,
   0.08468307,
   0.06933969,
   0.08043528,
   0.07386255,
   0.07016472,
   0.06596617,
   0.0608607,
   0.06059829,
   0.05412314,
   0.05828951,
   0.05765378};
   Double_t _fehx3028[24] = {
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667,
   0.04166667};
   Double_t _fehy3028[24] = {
   0.09789279,
   0.09401838,
   0.1058445,
   0.1134613,
   0.1028154,
   0.1026653,
   0.1067898,
   0.1023567,
   0.0986954,
   0.08848618,
   0.0819643,
   0.07745754,
   0.08841681,
   0.08288758,
   0.06774456,
   0.08043528,
   0.07386255,
   0.07016472,
   0.06596617,
   0.0608607,
   0.06059829,
   0.05412314,
   0.05828951,
   0.05765378};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0.4549924);
   Graph_Graph3028->SetMaximum(1.044751);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_gamma_gamma_angle_all",24,-1,1);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
