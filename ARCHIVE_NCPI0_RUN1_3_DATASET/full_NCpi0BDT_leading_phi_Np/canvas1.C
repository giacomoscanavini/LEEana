#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu May 26 18:31:55 2022) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-3.84,3.957692,404.4126);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__1->SetBinContent(1,170.0077);
   hmc__1->SetBinContent(2,167.9886);
   hmc__1->SetBinContent(3,168.6837);
   hmc__1->SetBinContent(4,180.6728);
   hmc__1->SetBinContent(5,139.124);
   hmc__1->SetBinContent(6,155.5343);
   hmc__1->SetBinContent(7,158.302);
   hmc__1->SetBinContent(8,138.0268);
   hmc__1->SetBinContent(9,161.5921);
   hmc__1->SetBinContent(10,149.2611);
   hmc__1->SetBinContent(11,157.6175);
   hmc__1->SetBinContent(12,148.6805);
   hmc__1->SetBinContent(13,145.1002);
   hmc__1->SetBinContent(14,155.0149);
   hmc__1->SetBinContent(15,171.4781);
   hmc__1->SetBinContent(16,161.9618);
   hmc__1->SetBinContent(17,160.0613);
   hmc__1->SetBinContent(18,153.3784);
   hmc__1->SetBinContent(19,166.1959);
   hmc__1->SetBinContent(20,151.7863);
   hmc__1->SetBinContent(21,172.3991);
   hmc__1->SetBinContent(22,170.0918);
   hmc__1->SetBinContent(23,168.755);
   hmc__1->SetBinContent(24,149.2876);
   hmc__1->SetBinError(1,37.41527);
   hmc__1->SetBinError(2,36.03528);
   hmc__1->SetBinError(3,34.81714);
   hmc__1->SetBinError(4,37.55655);
   hmc__1->SetBinError(5,27.26039);
   hmc__1->SetBinError(6,30.98461);
   hmc__1->SetBinError(7,31.36825);
   hmc__1->SetBinError(8,28.4289);
   hmc__1->SetBinError(9,32.57925);
   hmc__1->SetBinError(10,32.74045);
   hmc__1->SetBinError(11,34.80587);
   hmc__1->SetBinError(12,31.94793);
   hmc__1->SetBinError(13,32.17793);
   hmc__1->SetBinError(14,32.93451);
   hmc__1->SetBinError(15,35.7125);
   hmc__1->SetBinError(16,32.50214);
   hmc__1->SetBinError(17,30.04952);
   hmc__1->SetBinError(18,27.94411);
   hmc__1->SetBinError(19,31.29782);
   hmc__1->SetBinError(20,30.56656);
   hmc__1->SetBinError(21,34.48058);
   hmc__1->SetBinError(22,35.81341);
   hmc__1->SetBinError(23,33.38805);
   hmc__1->SetBinError(24,33.08415);
   hmc__1->SetBinError(25,0.4212968);
   hmc__1->SetMinimum(-3.84);
   hmc__1->SetMaximum(384);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-3.15,3.15);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(189.7064);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.377892);
   hbadmatch_stack_1->SetBinContent(2,4.188594);
   hbadmatch_stack_1->SetBinContent(3,5.440209);
   hbadmatch_stack_1->SetBinContent(4,4.971837);
   hbadmatch_stack_1->SetBinContent(5,5.508819);
   hbadmatch_stack_1->SetBinContent(6,5.23126);
   hbadmatch_stack_1->SetBinContent(7,5.229636);
   hbadmatch_stack_1->SetBinContent(8,2.756051);
   hbadmatch_stack_1->SetBinContent(9,3.71161);
   hbadmatch_stack_1->SetBinContent(10,2.264107);
   hbadmatch_stack_1->SetBinContent(11,4.700867);
   hbadmatch_stack_1->SetBinContent(12,3.353352);
   hbadmatch_stack_1->SetBinContent(13,2.345332);
   hbadmatch_stack_1->SetBinContent(14,3.556615);
   hbadmatch_stack_1->SetBinContent(15,8.75159);
   hbadmatch_stack_1->SetBinContent(16,5.008301);
   hbadmatch_stack_1->SetBinContent(17,5.564359);
   hbadmatch_stack_1->SetBinContent(18,3.467984);
   hbadmatch_stack_1->SetBinContent(19,2.642441);
   hbadmatch_stack_1->SetBinContent(20,4.194004);
   hbadmatch_stack_1->SetBinContent(21,4.346528);
   hbadmatch_stack_1->SetBinContent(22,3.664603);
   hbadmatch_stack_1->SetBinContent(23,3.748739);
   hbadmatch_stack_1->SetBinContent(24,0.9286332);
   hbadmatch_stack_1->SetBinError(1,0.9439978);
   hbadmatch_stack_1->SetBinError(2,0.9876169);
   hbadmatch_stack_1->SetBinError(3,1.276932);
   hbadmatch_stack_1->SetBinError(4,1.152311);
   hbadmatch_stack_1->SetBinError(5,1.302603);
   hbadmatch_stack_1->SetBinError(6,1.25435);
   hbadmatch_stack_1->SetBinError(7,1.464074);
   hbadmatch_stack_1->SetBinError(8,0.8736065);
   hbadmatch_stack_1->SetBinError(9,1.074366);
   hbadmatch_stack_1->SetBinError(10,0.6869819);
   hbadmatch_stack_1->SetBinError(11,1.118617);
   hbadmatch_stack_1->SetBinError(12,0.8858835);
   hbadmatch_stack_1->SetBinError(13,0.7592417);
   hbadmatch_stack_1->SetBinError(14,1.738856);
   hbadmatch_stack_1->SetBinError(15,2.351551);
   hbadmatch_stack_1->SetBinError(16,1.227137);
   hbadmatch_stack_1->SetBinError(17,1.353789);
   hbadmatch_stack_1->SetBinError(18,0.9314823);
   hbadmatch_stack_1->SetBinError(19,0.7851269);
   hbadmatch_stack_1->SetBinError(20,1.05118);
   hbadmatch_stack_1->SetBinError(21,1.158404);
   hbadmatch_stack_1->SetBinError(22,0.9845398);
   hbadmatch_stack_1->SetBinError(23,1.050437);
   hbadmatch_stack_1->SetBinError(24,0.48078);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,14.01302);
   hext_stack_2->SetBinContent(2,10.45019);
   hext_stack_2->SetBinContent(3,13.29638);
   hext_stack_2->SetBinContent(4,25.50859);
   hext_stack_2->SetBinContent(5,18.86903);
   hext_stack_2->SetBinContent(6,31.10719);
   hext_stack_2->SetBinContent(7,26.40683);
   hext_stack_2->SetBinContent(8,16.30975);
   hext_stack_2->SetBinContent(9,20.10036);
   hext_stack_2->SetBinContent(10,14.00861);
   hext_stack_2->SetBinContent(11,13.93523);
   hext_stack_2->SetBinContent(12,9.070402);
   hext_stack_2->SetBinContent(13,9.86483);
   hext_stack_2->SetBinContent(14,10.21518);
   hext_stack_2->SetBinContent(15,20.29071);
   hext_stack_2->SetBinContent(16,25.73926);
   hext_stack_2->SetBinContent(17,29.01353);
   hext_stack_2->SetBinContent(18,35.41814);
   hext_stack_2->SetBinContent(19,35.76131);
   hext_stack_2->SetBinContent(20,26.61866);
   hext_stack_2->SetBinContent(21,21.84045);
   hext_stack_2->SetBinContent(22,21.83767);
   hext_stack_2->SetBinContent(23,18.61682);
   hext_stack_2->SetBinContent(24,9.152603);
   hext_stack_2->SetBinError(1,2.476213);
   hext_stack_2->SetBinError(2,2.073985);
   hext_stack_2->SetBinError(3,2.33638);
   hext_stack_2->SetBinError(4,3.560446);
   hext_stack_2->SetBinError(5,2.871874);
   hext_stack_2->SetBinError(6,3.872632);
   hext_stack_2->SetBinError(7,3.376503);
   hext_stack_2->SetBinError(8,2.52978);
   hext_stack_2->SetBinError(9,3.163537);
   hext_stack_2->SetBinError(10,2.448777);
   hext_stack_2->SetBinError(11,2.491318);
   hext_stack_2->SetBinError(12,1.954582);
   hext_stack_2->SetBinError(13,2.101979);
   hext_stack_2->SetBinError(14,2.01372);
   hext_stack_2->SetBinError(15,3.107999);
   hext_stack_2->SetBinError(16,3.384906);
   hext_stack_2->SetBinError(17,3.675184);
   hext_stack_2->SetBinError(18,4.044667);
   hext_stack_2->SetBinError(19,4.024585);
   hext_stack_2->SetBinError(20,3.432095);
   hext_stack_2->SetBinError(21,3.096484);
   hext_stack_2->SetBinError(22,3.150323);
   hext_stack_2->SetBinError(23,3.173398);
   hext_stack_2->SetBinError(24,1.969893);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9141704);
   hdirt_stack_3->SetBinContent(2,2.344186);
   hdirt_stack_3->SetBinContent(3,2.356284);
   hdirt_stack_3->SetBinContent(4,3.010103);
   hdirt_stack_3->SetBinContent(5,2.499677);
   hdirt_stack_3->SetBinContent(6,1.664848);
   hdirt_stack_3->SetBinContent(7,2.506887);
   hdirt_stack_3->SetBinContent(8,1.295352);
   hdirt_stack_3->SetBinContent(9,1.859977);
   hdirt_stack_3->SetBinContent(10,0.6951543);
   hdirt_stack_3->SetBinContent(11,3.487901);
   hdirt_stack_3->SetBinContent(12,1.437021);
   hdirt_stack_3->SetBinContent(13,1.888547);
   hdirt_stack_3->SetBinContent(14,1.879468);
   hdirt_stack_3->SetBinContent(15,3.033484);
   hdirt_stack_3->SetBinContent(16,4.133663);
   hdirt_stack_3->SetBinContent(17,3.809793);
   hdirt_stack_3->SetBinContent(18,2.260689);
   hdirt_stack_3->SetBinContent(19,3.807616);
   hdirt_stack_3->SetBinContent(20,1.855902);
   hdirt_stack_3->SetBinContent(21,2.203847);
   hdirt_stack_3->SetBinContent(22,3.444004);
   hdirt_stack_3->SetBinContent(23,2.716254);
   hdirt_stack_3->SetBinContent(24,1.948237);
   hdirt_stack_3->SetBinError(1,0.4788161);
   hdirt_stack_3->SetBinError(2,0.7521541);
   hdirt_stack_3->SetBinError(3,0.77892);
   hdirt_stack_3->SetBinError(4,0.9856001);
   hdirt_stack_3->SetBinError(5,0.7753967);
   hdirt_stack_3->SetBinError(6,0.7140685);
   hdirt_stack_3->SetBinError(7,0.7538446);
   hdirt_stack_3->SetBinError(8,0.7666476);
   hdirt_stack_3->SetBinError(9,0.6605131);
   hdirt_stack_3->SetBinError(10,0.4258516);
   hdirt_stack_3->SetBinError(11,1.338764);
   hdirt_stack_3->SetBinError(12,0.5690354);
   hdirt_stack_3->SetBinError(13,0.6565942);
   hdirt_stack_3->SetBinError(14,0.794827);
   hdirt_stack_3->SetBinError(15,0.8952231);
   hdirt_stack_3->SetBinError(16,1.099735);
   hdirt_stack_3->SetBinError(17,1.057622);
   hdirt_stack_3->SetBinError(18,0.8386878);
   hdirt_stack_3->SetBinError(19,1.284122);
   hdirt_stack_3->SetBinError(20,0.676226);
   hdirt_stack_3->SetBinError(21,0.6914602);
   hdirt_stack_3->SetBinError(22,0.9751852);
   hdirt_stack_3->SetBinError(23,0.8787402);
   hdirt_stack_3->SetBinError(24,0.7404734);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,22.15539);
   houtFV_stack_4->SetBinContent(2,22.68684);
   houtFV_stack_4->SetBinContent(3,25.20594);
   houtFV_stack_4->SetBinContent(4,25.58763);
   houtFV_stack_4->SetBinContent(5,18.48898);
   houtFV_stack_4->SetBinContent(6,17.95591);
   houtFV_stack_4->SetBinContent(7,20.30283);
   houtFV_stack_4->SetBinContent(8,22.57113);
   houtFV_stack_4->SetBinContent(9,22.29665);
   houtFV_stack_4->SetBinContent(10,21.53423);
   houtFV_stack_4->SetBinContent(11,22.2446);
   houtFV_stack_4->SetBinContent(12,21.99828);
   houtFV_stack_4->SetBinContent(13,22.99601);
   houtFV_stack_4->SetBinContent(14,20.21815);
   houtFV_stack_4->SetBinContent(15,21.22752);
   houtFV_stack_4->SetBinContent(16,18.81373);
   houtFV_stack_4->SetBinContent(17,19.41251);
   houtFV_stack_4->SetBinContent(18,19.89399);
   houtFV_stack_4->SetBinContent(19,15.86922);
   houtFV_stack_4->SetBinContent(20,16.86934);
   houtFV_stack_4->SetBinContent(21,22.29372);
   houtFV_stack_4->SetBinContent(22,20.06867);
   houtFV_stack_4->SetBinContent(23,24.01514);
   houtFV_stack_4->SetBinContent(24,21.15749);
   houtFV_stack_4->SetBinError(1,2.368143);
   houtFV_stack_4->SetBinError(2,2.361301);
   houtFV_stack_4->SetBinError(3,2.457308);
   houtFV_stack_4->SetBinError(4,2.61397);
   houtFV_stack_4->SetBinError(5,2.170165);
   houtFV_stack_4->SetBinError(6,2.137055);
   houtFV_stack_4->SetBinError(7,2.208587);
   houtFV_stack_4->SetBinError(8,2.533695);
   houtFV_stack_4->SetBinError(9,2.362362);
   houtFV_stack_4->SetBinError(10,2.368);
   houtFV_stack_4->SetBinError(11,2.348301);
   houtFV_stack_4->SetBinError(12,2.369375);
   houtFV_stack_4->SetBinError(13,2.393201);
   houtFV_stack_4->SetBinError(14,2.258628);
   houtFV_stack_4->SetBinError(15,2.298896);
   houtFV_stack_4->SetBinError(16,2.200841);
   houtFV_stack_4->SetBinError(17,2.471764);
   houtFV_stack_4->SetBinError(18,2.24811);
   houtFV_stack_4->SetBinError(19,1.975888);
   houtFV_stack_4->SetBinError(20,2.026067);
   houtFV_stack_4->SetBinError(21,2.425395);
   houtFV_stack_4->SetBinError(22,2.256911);
   houtFV_stack_4->SetBinError(23,2.447542);
   houtFV_stack_4->SetBinError(24,2.344548);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.43346);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.114438);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.505206);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.058638);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.303833);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.721838);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.811946);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.733712);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.292632);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.839015);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.55951);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.05847);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.237823);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.946206);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.839342);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.546892);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.846391);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.999678);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,6.192009);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.249034);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.233415);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.976682);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.198306);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.114606);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6832238);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6759217);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7074792);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6747691);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5329112);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5847411);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7879459);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5167825);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6999201);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7761256);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7044928);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6500418);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6291486);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6579768);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7234365);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7356627);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6047016);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6398833);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9078312);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5783275);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4725218);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7314176);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7014016);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.699735);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,69.25256);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,71.37544);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,69.42577);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,71.34175);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,59.27676);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,57.3475);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,57.95119);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,58.52044);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,65.93865);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,67.11023);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,64.8485);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,62.02377);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,62.60584);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,67.67067);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,66.54092);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,64.48728);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,61.03749);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,58.006);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,64.78906);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,59.42957);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,75.39925);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,69.4447);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,69.54317);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,63.35898);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.711676);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.706587);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.683964);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.74893);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.462266);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.431607);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.485368);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.494382);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.657996);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.678024);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.625441);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.561345);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.530118);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.674897);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.623946);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.596934);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.588716);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.504219);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.694434);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.538079);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.916377);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.692097);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.668244);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.556224);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_7->SetBinContent(1,32.71064);
   hCCpi0inFV_stack_7->SetBinContent(2,30.84444);
   hCCpi0inFV_stack_7->SetBinContent(3,30.97774);
   hCCpi0inFV_stack_7->SetBinContent(4,31.31326);
   hCCpi0inFV_stack_7->SetBinContent(5,19.79438);
   hCCpi0inFV_stack_7->SetBinContent(6,24.90319);
   hCCpi0inFV_stack_7->SetBinContent(7,25.03241);
   hCCpi0inFV_stack_7->SetBinContent(8,21.21003);
   hCCpi0inFV_stack_7->SetBinContent(9,27.929);
   hCCpi0inFV_stack_7->SetBinContent(10,21.73607);
   hCCpi0inFV_stack_7->SetBinContent(11,26.85745);
   hCCpi0inFV_stack_7->SetBinContent(12,26.99055);
   hCCpi0inFV_stack_7->SetBinContent(13,23.45037);
   hCCpi0inFV_stack_7->SetBinContent(14,27.57992);
   hCCpi0inFV_stack_7->SetBinContent(15,28.07621);
   hCCpi0inFV_stack_7->SetBinContent(16,26.45901);
   hCCpi0inFV_stack_7->SetBinContent(17,25.10609);
   hCCpi0inFV_stack_7->SetBinContent(18,16.12863);
   hCCpi0inFV_stack_7->SetBinContent(19,22.93163);
   hCCpi0inFV_stack_7->SetBinContent(20,26.95838);
   hCCpi0inFV_stack_7->SetBinContent(21,28.30076);
   hCCpi0inFV_stack_7->SetBinContent(22,27.69694);
   hCCpi0inFV_stack_7->SetBinContent(23,27.97933);
   hCCpi0inFV_stack_7->SetBinContent(24,26.03062);
   hCCpi0inFV_stack_7->SetBinError(1,2.862821);
   hCCpi0inFV_stack_7->SetBinError(2,2.813177);
   hCCpi0inFV_stack_7->SetBinError(3,2.762329);
   hCCpi0inFV_stack_7->SetBinError(4,2.777885);
   hCCpi0inFV_stack_7->SetBinError(5,2.193674);
   hCCpi0inFV_stack_7->SetBinError(6,2.532203);
   hCCpi0inFV_stack_7->SetBinError(7,2.546228);
   hCCpi0inFV_stack_7->SetBinError(8,2.333085);
   hCCpi0inFV_stack_7->SetBinError(9,2.639154);
   hCCpi0inFV_stack_7->SetBinError(10,2.336222);
   hCCpi0inFV_stack_7->SetBinError(11,2.606594);
   hCCpi0inFV_stack_7->SetBinError(12,2.555431);
   hCCpi0inFV_stack_7->SetBinError(13,2.387437);
   hCCpi0inFV_stack_7->SetBinError(14,2.566148);
   hCCpi0inFV_stack_7->SetBinError(15,2.679791);
   hCCpi0inFV_stack_7->SetBinError(16,2.581462);
   hCCpi0inFV_stack_7->SetBinError(17,2.500998);
   hCCpi0inFV_stack_7->SetBinError(18,2.011448);
   hCCpi0inFV_stack_7->SetBinError(19,2.426222);
   hCCpi0inFV_stack_7->SetBinError(20,2.707597);
   hCCpi0inFV_stack_7->SetBinError(21,2.634614);
   hCCpi0inFV_stack_7->SetBinError(22,2.617283);
   hCCpi0inFV_stack_7->SetBinError(23,2.710196);
   hCCpi0inFV_stack_7->SetBinError(24,2.536183);
   hCCpi0inFV_stack_7->SetEntries(2680);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_8->SetBinContent(1,6.442108);
   hNCinFV_stack_8->SetBinContent(2,8.605977);
   hNCinFV_stack_8->SetBinContent(3,8.209166);
   hNCinFV_stack_8->SetBinContent(4,6.003877);
   hNCinFV_stack_8->SetBinContent(5,5.570109);
   hNCinFV_stack_8->SetBinContent(6,6.503813);
   hNCinFV_stack_8->SetBinContent(7,5.78143);
   hNCinFV_stack_8->SetBinContent(8,4.891444);
   hNCinFV_stack_8->SetBinContent(9,6.702219);
   hNCinFV_stack_8->SetBinContent(10,6.338983);
   hNCinFV_stack_8->SetBinContent(11,4.496323);
   hNCinFV_stack_8->SetBinContent(12,6.789047);
   hNCinFV_stack_8->SetBinContent(13,6.397307);
   hNCinFV_stack_8->SetBinContent(14,5.613827);
   hNCinFV_stack_8->SetBinContent(15,8.19963);
   hNCinFV_stack_8->SetBinContent(16,5.073553);
   hNCinFV_stack_8->SetBinContent(17,4.396579);
   hNCinFV_stack_8->SetBinContent(18,5.80547);
   hNCinFV_stack_8->SetBinContent(19,5.35384);
   hNCinFV_stack_8->SetBinContent(20,5.039978);
   hNCinFV_stack_8->SetBinContent(21,5.273649);
   hNCinFV_stack_8->SetBinContent(22,7.670581);
   hNCinFV_stack_8->SetBinContent(23,5.626743);
   hNCinFV_stack_8->SetBinContent(24,4.35117);
   hNCinFV_stack_8->SetBinError(1,1.286229);
   hNCinFV_stack_8->SetBinError(2,1.442239);
   hNCinFV_stack_8->SetBinError(3,1.414685);
   hNCinFV_stack_8->SetBinError(4,1.272254);
   hNCinFV_stack_8->SetBinError(5,1.177384);
   hNCinFV_stack_8->SetBinError(6,1.272545);
   hNCinFV_stack_8->SetBinError(7,1.110074);
   hNCinFV_stack_8->SetBinError(8,1.074921);
   hNCinFV_stack_8->SetBinError(9,1.287917);
   hNCinFV_stack_8->SetBinError(10,1.316193);
   hNCinFV_stack_8->SetBinError(11,1.037978);
   hNCinFV_stack_8->SetBinError(12,1.331449);
   hNCinFV_stack_8->SetBinError(13,1.302315);
   hNCinFV_stack_8->SetBinError(14,1.241999);
   hNCinFV_stack_8->SetBinError(15,1.481886);
   hNCinFV_stack_8->SetBinError(16,1.177633);
   hNCinFV_stack_8->SetBinError(17,1.075501);
   hNCinFV_stack_8->SetBinError(18,1.25669);
   hNCinFV_stack_8->SetBinError(19,1.183376);
   hNCinFV_stack_8->SetBinError(20,1.111065);
   hNCinFV_stack_8->SetBinError(21,1.194504);
   hNCinFV_stack_8->SetBinError(22,1.358769);
   hNCinFV_stack_8->SetBinError(23,1.161564);
   hNCinFV_stack_8->SetBinError(24,0.9998562);
   hNCinFV_stack_8->SetEntries(615);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_9->SetBinContent(1,14.67218);
   hnumuCCinFV_stack_9->SetBinContent(2,10.8995);
   hnumuCCinFV_stack_9->SetBinContent(3,7.517042);
   hnumuCCinFV_stack_9->SetBinContent(4,7.740014);
   hnumuCCinFV_stack_9->SetBinContent(5,4.883916);
   hnumuCCinFV_stack_9->SetBinContent(6,7.098719);
   hnumuCCinFV_stack_9->SetBinContent(7,8.687578);
   hnumuCCinFV_stack_9->SetBinContent(8,7.094937);
   hnumuCCinFV_stack_9->SetBinContent(9,8.022474);
   hnumuCCinFV_stack_9->SetBinContent(10,8.084407);
   hnumuCCinFV_stack_9->SetBinContent(11,11.70198);
   hnumuCCinFV_stack_9->SetBinContent(12,11.49347);
   hnumuCCinFV_stack_9->SetBinContent(13,10.52494);
   hnumuCCinFV_stack_9->SetBinContent(14,11.89165);
   hnumuCCinFV_stack_9->SetBinContent(15,9.229312);
   hnumuCCinFV_stack_9->SetBinContent(16,6.782172);
   hnumuCCinFV_stack_9->SetBinContent(17,7.238652);
   hnumuCCinFV_stack_9->SetBinContent(18,5.276428);
   hnumuCCinFV_stack_9->SetBinContent(19,8.059788);
   hnumuCCinFV_stack_9->SetBinContent(20,5.032885);
   hnumuCCinFV_stack_9->SetBinContent(21,8.479807);
   hnumuCCinFV_stack_9->SetBinContent(22,10.92964);
   hnumuCCinFV_stack_9->SetBinContent(23,11.12534);
   hnumuCCinFV_stack_9->SetBinContent(24,16.71694);
   hnumuCCinFV_stack_9->SetBinError(1,1.990885);
   hnumuCCinFV_stack_9->SetBinError(2,1.730047);
   hnumuCCinFV_stack_9->SetBinError(3,1.357449);
   hnumuCCinFV_stack_9->SetBinError(4,1.630275);
   hnumuCCinFV_stack_9->SetBinError(5,1.150216);
   hnumuCCinFV_stack_9->SetBinError(6,1.38431);
   hnumuCCinFV_stack_9->SetBinError(7,2.312958);
   hnumuCCinFV_stack_9->SetBinError(8,1.907969);
   hnumuCCinFV_stack_9->SetBinError(9,1.52255);
   hnumuCCinFV_stack_9->SetBinError(10,1.475339);
   hnumuCCinFV_stack_9->SetBinError(11,2.307207);
   hnumuCCinFV_stack_9->SetBinError(12,2.784306);
   hnumuCCinFV_stack_9->SetBinError(13,1.777847);
   hnumuCCinFV_stack_9->SetBinError(14,2.282324);
   hnumuCCinFV_stack_9->SetBinError(15,1.533653);
   hnumuCCinFV_stack_9->SetBinError(16,1.273237);
   hnumuCCinFV_stack_9->SetBinError(17,1.49845);
   hnumuCCinFV_stack_9->SetBinError(18,1.354401);
   hnumuCCinFV_stack_9->SetBinError(19,1.430259);
   hnumuCCinFV_stack_9->SetBinError(20,1.17469);
   hnumuCCinFV_stack_9->SetBinError(21,1.821194);
   hnumuCCinFV_stack_9->SetBinError(22,2.251801);
   hnumuCCinFV_stack_9->SetBinError(23,1.892349);
   hnumuCCinFV_stack_9->SetBinError(24,2.430247);
   hnumuCCinFV_stack_9->SetEntries(846);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_10->SetBinContent(1,2.036279);
   hnueCCinFV_stack_10->SetBinContent(2,2.47894);
   hnueCCinFV_stack_10->SetBinContent(3,1.749949);
   hnueCCinFV_stack_10->SetBinContent(4,1.137062);
   hnueCCinFV_stack_10->SetBinContent(5,0.9284594);
   hnueCCinFV_stack_10->SetBinContent(7,1.591313);
   hnueCCinFV_stack_10->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_10->SetBinContent(9,0.73853);
   hnueCCinFV_stack_10->SetBinContent(10,2.650257);
   hnueCCinFV_stack_10->SetBinContent(11,0.785171);
   hnueCCinFV_stack_10->SetBinContent(12,1.466085);
   hnueCCinFV_stack_10->SetBinContent(13,0.789167);
   hnueCCinFV_stack_10->SetBinContent(14,2.443174);
   hnueCCinFV_stack_10->SetBinContent(15,1.289417);
   hnueCCinFV_stack_10->SetBinContent(16,0.9179294);
   hnueCCinFV_stack_10->SetBinContent(17,0.6358774);
   hnueCCinFV_stack_10->SetBinContent(18,3.121382);
   hnueCCinFV_stack_10->SetBinContent(19,0.788994);
   hnueCCinFV_stack_10->SetBinContent(20,2.538551);
   hnueCCinFV_stack_10->SetBinContent(21,1.027643);
   hnueCCinFV_stack_10->SetBinContent(22,0.3582875);
   hnueCCinFV_stack_10->SetBinContent(23,1.185129);
   hnueCCinFV_stack_10->SetBinContent(24,1.528319);
   hnueCCinFV_stack_10->SetBinError(1,0.8259115);
   hnueCCinFV_stack_10->SetBinError(2,1.596092);
   hnueCCinFV_stack_10->SetBinError(3,0.712192);
   hnueCCinFV_stack_10->SetBinError(4,0.5892454);
   hnueCCinFV_stack_10->SetBinError(5,0.5456539);
   hnueCCinFV_stack_10->SetBinError(7,0.8435705);
   hnueCCinFV_stack_10->SetBinError(8,0.372493);
   hnueCCinFV_stack_10->SetBinError(9,0.4394754);
   hnueCCinFV_stack_10->SetBinError(10,1.18868);
   hnueCCinFV_stack_10->SetBinError(11,0.3925882);
   hnueCCinFV_stack_10->SetBinError(12,0.5576641);
   hnueCCinFV_stack_10->SetBinError(13,0.3926085);
   hnueCCinFV_stack_10->SetBinError(14,1.04386);
   hnueCCinFV_stack_10->SetBinError(15,0.5893496);
   hnueCCinFV_stack_10->SetBinError(16,0.4629747);
   hnueCCinFV_stack_10->SetBinError(17,0.3692351);
   hnueCCinFV_stack_10->SetBinError(18,1.337679);
   hnueCCinFV_stack_10->SetBinError(19,0.4667322);
   hnueCCinFV_stack_10->SetBinError(20,1.416795);
   hnueCCinFV_stack_10->SetBinError(21,0.4941397);
   hnueCCinFV_stack_10->SetBinError(22,0.3582875);
   hnueCCinFV_stack_10->SetBinError(23,0.6176974);
   hnueCCinFV_stack_10->SetBinError(24,0.8404726);
   hnueCCinFV_stack_10->SetEntries(115);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__2->SetBinContent(1,170.0077);
   hmcerror__2->SetBinContent(2,167.9886);
   hmcerror__2->SetBinContent(3,168.6837);
   hmcerror__2->SetBinContent(4,180.6728);
   hmcerror__2->SetBinContent(5,139.124);
   hmcerror__2->SetBinContent(6,155.5343);
   hmcerror__2->SetBinContent(7,158.302);
   hmcerror__2->SetBinContent(8,138.0268);
   hmcerror__2->SetBinContent(9,161.5921);
   hmcerror__2->SetBinContent(10,149.2611);
   hmcerror__2->SetBinContent(11,157.6175);
   hmcerror__2->SetBinContent(12,148.6805);
   hmcerror__2->SetBinContent(13,145.1002);
   hmcerror__2->SetBinContent(14,155.0149);
   hmcerror__2->SetBinContent(15,171.4781);
   hmcerror__2->SetBinContent(16,161.9618);
   hmcerror__2->SetBinContent(17,160.0613);
   hmcerror__2->SetBinContent(18,153.3784);
   hmcerror__2->SetBinContent(19,166.1959);
   hmcerror__2->SetBinContent(20,151.7863);
   hmcerror__2->SetBinContent(21,172.3991);
   hmcerror__2->SetBinContent(22,170.0918);
   hmcerror__2->SetBinContent(23,168.755);
   hmcerror__2->SetBinContent(24,149.2876);
   hmcerror__2->SetBinError(1,37.41527);
   hmcerror__2->SetBinError(2,36.03528);
   hmcerror__2->SetBinError(3,34.81714);
   hmcerror__2->SetBinError(4,37.55655);
   hmcerror__2->SetBinError(5,27.26039);
   hmcerror__2->SetBinError(6,30.98461);
   hmcerror__2->SetBinError(7,31.36825);
   hmcerror__2->SetBinError(8,28.4289);
   hmcerror__2->SetBinError(9,32.57925);
   hmcerror__2->SetBinError(10,32.74045);
   hmcerror__2->SetBinError(11,34.80587);
   hmcerror__2->SetBinError(12,31.94793);
   hmcerror__2->SetBinError(13,32.17793);
   hmcerror__2->SetBinError(14,32.93451);
   hmcerror__2->SetBinError(15,35.7125);
   hmcerror__2->SetBinError(16,32.50214);
   hmcerror__2->SetBinError(17,30.04952);
   hmcerror__2->SetBinError(18,27.94411);
   hmcerror__2->SetBinError(19,31.29782);
   hmcerror__2->SetBinError(20,30.56656);
   hmcerror__2->SetBinError(21,34.48058);
   hmcerror__2->SetBinError(22,35.81341);
   hmcerror__2->SetBinError(23,33.38805);
   hmcerror__2->SetBinError(24,33.08415);
   hmcerror__2->SetBinError(25,0.4212968);
   hmcerror__2->SetEntries(3775.136);

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
   
   Double_t _fx3001[24] = {
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
   Double_t _fy3001[24] = {
   162,
   183,
   175,
   171,
   174,
   169,
   138,
   145,
   139,
   144,
   149,
   145,
   152,
   157,
   192,
   168,
   145,
   155,
   147,
   153,
   172,
   177,
   151,
   160};
   Double_t _felx3001[24] = {
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
   Double_t _fely3001[24] = {
   12.72792,
   13.52775,
   13.22876,
   13.0767,
   13.19091,
   13,
   11.74734,
   12.04159,
   11.78983,
   12,
   12.20656,
   12.04159,
   12.32883,
   12.52996,
   13.85641,
   12.96148,
   12.04159,
   12.4499,
   12.12436,
   12.36932,
   13.11488,
   13.30413,
   12.28821,
   12.64911};
   Double_t _fehx3001[24] = {
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
   Double_t _fehy3001[24] = {
   12.72792,
   13.52775,
   13.22876,
   13.0767,
   13.19091,
   13,
   11.74734,
   12.04159,
   11.78983,
   12,
   12.20656,
   12.04159,
   12.32883,
   12.52996,
   13.85641,
   12.96148,
   12.04159,
   12.4499,
   12.12436,
   12.36932,
   13.11488,
   13.30413,
   12.28821,
   12.64911};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(118.2923);
   Graph_Graph3001->SetMaximum(213.8168);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.1/24","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 627.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 145.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
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
   Double_t _fely3002[24] = {
   0.2200798,
   0.2145103,
   0.2064049,
   0.2078706,
   0.1959432,
   0.1992141,
   0.1981544,
   0.2059665,
   0.2016141,
   0.2193502,
   0.2208249,
   0.2148765,
   0.2217635,
   0.2124603,
   0.2082627,
   0.2006778,
   0.1877376,
   0.1821906,
   0.1883188,
   0.201379,
   0.2000044,
   0.2105535,
   0.1978493,
   0.2216135};
   Double_t _fehx3002[24] = {
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
   Double_t _fehy3002[24] = {
   0.2200798,
   0.2145103,
   0.2064049,
   0.2078706,
   0.1959432,
   0.1992141,
   0.1981544,
   0.2059665,
   0.2016141,
   0.2193502,
   0.2208249,
   0.2148765,
   0.2217635,
   0.2124603,
   0.2082627,
   0.2006778,
   0.1877376,
   0.1821906,
   0.1883188,
   0.201379,
   0.2000044,
   0.2105535,
   0.1978493,
   0.2216135};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3003[24] = {
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
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
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
   Double_t _fely3003[24] = {
   0.1916289,
   0.2030782,
   0.1928912,
   0.182414,
   0.1854036,
   0.1735873,
   0.1735995,
   0.1908556,
   0.1882804,
   0.192326,
   0.1933584,
   0.197343,
   0.1960655,
   0.1920555,
   0.1823299,
   0.1836922,
   0.1751875,
   0.1655699,
   0.1680721,
   0.181246,
   0.1869121,
   0.1847483,
   0.1831967,
   0.1997977};
   Double_t _fehx3003[24] = {
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
   Double_t _fehy3003[24] = {
   0.1916289,
   0.2030782,
   0.1928912,
   0.182414,
   0.1854036,
   0.1735873,
   0.1735995,
   0.1908556,
   0.1882804,
   0.192326,
   0.1933584,
   0.197343,
   0.1960655,
   0.1920555,
   0.1823299,
   0.1836922,
   0.1751875,
   0.1655699,
   0.1680721,
   0.181246,
   0.1869121,
   0.1847483,
   0.1831967,
   0.1997977};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
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
   
   Double_t _fx3004[24] = {
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
   Double_t _fy3004[24] = {
   0.952898,
   1.08936,
   1.037445,
   0.9464625,
   1.250683,
   1.086577,
   0.8717512,
   1.050521,
   0.8601906,
   0.9647526,
   0.9453264,
   0.9752459,
   1.047552,
   1.012806,
   1.119676,
   1.037282,
   0.9059031,
   1.010573,
   0.8844983,
   1.007996,
   0.9976851,
   1.040615,
   0.8947885,
   1.071757};
   Double_t _felx3004[24] = {
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
   Double_t _fely3004[24] = {
   0.07486674,
   0.0805278,
   0.07842345,
   0.0723778,
   0.09481405,
   0.08358287,
   0.07420839,
   0.08724099,
   0.07296041,
   0.08039605,
   0.07744415,
   0.08098976,
   0.08496769,
   0.08083073,
   0.08080568,
   0.08002802,
   0.07523116,
   0.08117115,
   0.07295219,
   0.08149166,
   0.07607278,
   0.07821739,
   0.07281686,
   0.08472982};
   Double_t _fehx3004[24] = {
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
   Double_t _fehy3004[24] = {
   0.07486674,
   0.0805278,
   0.07842345,
   0.0723778,
   0.09481405,
   0.08358287,
   0.07420839,
   0.08724099,
   0.07296041,
   0.08039605,
   0.07744415,
   0.08098976,
   0.08496769,
   0.08083073,
   0.08080568,
   0.08002802,
   0.07523116,
   0.08117115,
   0.07295219,
   0.08149166,
   0.07607278,
   0.07821739,
   0.07281686,
   0.08472982};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.7314034);
   Graph_Graph3004->SetMaximum(1.401324);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
