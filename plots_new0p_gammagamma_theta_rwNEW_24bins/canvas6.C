#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 20:57:03 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-5.878327,3.553846,650.0192);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__16->SetBinContent(1,50.42548);
   hmc__16->SetBinContent(2,80.73524);
   hmc__16->SetBinContent(3,106.1567);
   hmc__16->SetBinContent(4,201.0188);
   hmc__16->SetBinContent(5,276.4979);
   hmc__16->SetBinContent(6,293.9164);
   hmc__16->SetBinContent(7,273.0222);
   hmc__16->SetBinContent(8,262.3581);
   hmc__16->SetBinContent(9,242.7926);
   hmc__16->SetBinContent(10,218.0417);
   hmc__16->SetBinContent(11,209.2859);
   hmc__16->SetBinContent(12,177.2261);
   hmc__16->SetBinContent(13,160.2872);
   hmc__16->SetBinContent(14,138.4198);
   hmc__16->SetBinContent(15,111.8314);
   hmc__16->SetBinContent(16,112.0882);
   hmc__16->SetBinContent(17,103.7673);
   hmc__16->SetBinContent(18,95.79823);
   hmc__16->SetBinContent(19,94.73553);
   hmc__16->SetBinContent(20,95.66887);
   hmc__16->SetBinContent(21,107.4758);
   hmc__16->SetBinContent(22,103.3264);
   hmc__16->SetBinContent(23,107.3167);
   hmc__16->SetBinContent(24,60.81272);
   hmc__16->SetBinError(1,30.50524);
   hmc__16->SetBinError(2,25.21198);
   hmc__16->SetBinError(3,41.73541);
   hmc__16->SetBinError(4,58.17221);
   hmc__16->SetBinError(5,74.0881);
   hmc__16->SetBinError(6,90.85381);
   hmc__16->SetBinError(7,76.76439);
   hmc__16->SetBinError(8,72.068);
   hmc__16->SetBinError(9,68.34543);
   hmc__16->SetBinError(10,56.70621);
   hmc__16->SetBinError(11,61.17841);
   hmc__16->SetBinError(12,47.17156);
   hmc__16->SetBinError(13,43.40427);
   hmc__16->SetBinError(14,39.80797);
   hmc__16->SetBinError(15,43.29684);
   hmc__16->SetBinError(16,32.6849);
   hmc__16->SetBinError(17,32.17746);
   hmc__16->SetBinError(18,28.62251);
   hmc__16->SetBinError(19,25.27841);
   hmc__16->SetBinError(20,28.93375);
   hmc__16->SetBinError(21,30.56193);
   hmc__16->SetBinError(22,28.83771);
   hmc__16->SetBinError(23,31.39577);
   hmc__16->SetBinError(24,18.9361);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-5.878327);
   hmc__16->SetMaximum(617.2243);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,3.15);
   hs6_stack_6->SetMinimum(-3.571482e-09);
   hs6_stack_6->SetMaximum(308.6122);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.405313);
   hbadmatch_stack_1->SetBinContent(2,2.617338);
   hbadmatch_stack_1->SetBinContent(3,3.323416);
   hbadmatch_stack_1->SetBinContent(4,5.52222);
   hbadmatch_stack_1->SetBinContent(5,5.240624);
   hbadmatch_stack_1->SetBinContent(6,7.407775);
   hbadmatch_stack_1->SetBinContent(7,2.740754);
   hbadmatch_stack_1->SetBinContent(8,6.904655);
   hbadmatch_stack_1->SetBinContent(9,4.309816);
   hbadmatch_stack_1->SetBinContent(10,4.054622);
   hbadmatch_stack_1->SetBinContent(11,5.09628);
   hbadmatch_stack_1->SetBinContent(12,3.479281);
   hbadmatch_stack_1->SetBinContent(13,2.780828);
   hbadmatch_stack_1->SetBinContent(14,2.23481);
   hbadmatch_stack_1->SetBinContent(15,1.989578);
   hbadmatch_stack_1->SetBinContent(16,2.859343);
   hbadmatch_stack_1->SetBinContent(17,5.552369);
   hbadmatch_stack_1->SetBinContent(18,2.193768);
   hbadmatch_stack_1->SetBinContent(19,3.620605);
   hbadmatch_stack_1->SetBinContent(20,1.373626);
   hbadmatch_stack_1->SetBinContent(21,3.544074);
   hbadmatch_stack_1->SetBinContent(22,1.761384);
   hbadmatch_stack_1->SetBinContent(23,1.991453);
   hbadmatch_stack_1->SetBinContent(24,1.235776);
   hbadmatch_stack_1->SetBinError(1,0.6763328);
   hbadmatch_stack_1->SetBinError(2,0.8164681);
   hbadmatch_stack_1->SetBinError(3,1.03731);
   hbadmatch_stack_1->SetBinError(4,1.289323);
   hbadmatch_stack_1->SetBinError(5,1.095206);
   hbadmatch_stack_1->SetBinError(6,2.042812);
   hbadmatch_stack_1->SetBinError(7,0.8604015);
   hbadmatch_stack_1->SetBinError(8,1.474172);
   hbadmatch_stack_1->SetBinError(9,1.05392);
   hbadmatch_stack_1->SetBinError(10,0.9820044);
   hbadmatch_stack_1->SetBinError(11,1.134506);
   hbadmatch_stack_1->SetBinError(12,1.00563);
   hbadmatch_stack_1->SetBinError(13,0.8315416);
   hbadmatch_stack_1->SetBinError(14,0.7707077);
   hbadmatch_stack_1->SetBinError(15,0.8121433);
   hbadmatch_stack_1->SetBinError(16,0.8515922);
   hbadmatch_stack_1->SetBinError(17,2.194298);
   hbadmatch_stack_1->SetBinError(18,1.642323);
   hbadmatch_stack_1->SetBinError(19,1.079831);
   hbadmatch_stack_1->SetBinError(20,0.519186);
   hbadmatch_stack_1->SetBinError(21,1.083289);
   hbadmatch_stack_1->SetBinError(22,0.6999006);
   hbadmatch_stack_1->SetBinError(23,0.7828841);
   hbadmatch_stack_1->SetBinError(24,0.8883289);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,3.476217);
   hext_stack_2->SetBinContent(2,8.58601);
   hext_stack_2->SetBinContent(3,7.347444);
   hext_stack_2->SetBinContent(4,19.24968);
   hext_stack_2->SetBinContent(5,21.55359);
   hext_stack_2->SetBinContent(6,20.43476);
   hext_stack_2->SetBinContent(7,13.87457);
   hext_stack_2->SetBinContent(8,16.43661);
   hext_stack_2->SetBinContent(9,12.33037);
   hext_stack_2->SetBinContent(10,13.06855);
   hext_stack_2->SetBinContent(11,16.14535);
   hext_stack_2->SetBinContent(12,13.13198);
   hext_stack_2->SetBinContent(13,14.2624);
   hext_stack_2->SetBinContent(14,13.19982);
   hext_stack_2->SetBinContent(15,7.537797);
   hext_stack_2->SetBinContent(16,12.28565);
   hext_stack_2->SetBinContent(17,11.91659);
   hext_stack_2->SetBinContent(18,8.033778);
   hext_stack_2->SetBinContent(19,7.855014);
   hext_stack_2->SetBinContent(20,12.62882);
   hext_stack_2->SetBinContent(21,10.84961);
   hext_stack_2->SetBinContent(22,5.669206);
   hext_stack_2->SetBinContent(23,8.433196);
   hext_stack_2->SetBinContent(24,5.091023);
   hext_stack_2->SetBinError(1,1.278674);
   hext_stack_2->SetBinError(2,1.931347);
   hext_stack_2->SetBinError(3,1.871207);
   hext_stack_2->SetBinError(4,2.980179);
   hext_stack_2->SetBinError(5,2.991391);
   hext_stack_2->SetBinError(6,2.871456);
   hext_stack_2->SetBinError(7,2.354352);
   hext_stack_2->SetBinError(8,2.656036);
   hext_stack_2->SetBinError(9,2.223009);
   hext_stack_2->SetBinError(10,2.238554);
   hext_stack_2->SetBinError(11,2.505915);
   hext_stack_2->SetBinError(12,2.310518);
   hext_stack_2->SetBinError(13,2.444499);
   hext_stack_2->SetBinError(14,2.408524);
   hext_stack_2->SetBinError(15,1.7757);
   hext_stack_2->SetBinError(16,2.382757);
   hext_stack_2->SetBinError(17,2.231065);
   hext_stack_2->SetBinError(18,1.782504);
   hext_stack_2->SetBinError(19,1.859985);
   hext_stack_2->SetBinError(20,2.348507);
   hext_stack_2->SetBinError(21,2.160541);
   hext_stack_2->SetBinError(22,1.564185);
   hext_stack_2->SetBinError(23,1.88251);
   hext_stack_2->SetBinError(24,1.537002);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.5318602);
   hdirt_stack_3->SetBinContent(2,2.509731);
   hdirt_stack_3->SetBinContent(3,0.5511934);
   hdirt_stack_3->SetBinContent(4,3.806029);
   hdirt_stack_3->SetBinContent(5,4.306152);
   hdirt_stack_3->SetBinContent(6,2.247111);
   hdirt_stack_3->SetBinContent(7,2.276246);
   hdirt_stack_3->SetBinContent(8,1.220004);
   hdirt_stack_3->SetBinContent(9,1.430246);
   hdirt_stack_3->SetBinContent(10,0.7949365);
   hdirt_stack_3->SetBinContent(11,2.854895);
   hdirt_stack_3->SetBinContent(12,0.994874);
   hdirt_stack_3->SetBinContent(13,1.190193);
   hdirt_stack_3->SetBinContent(14,0.3797117);
   hdirt_stack_3->SetBinContent(15,2.209937);
   hdirt_stack_3->SetBinContent(16,1.088163);
   hdirt_stack_3->SetBinContent(17,0.77799);
   hdirt_stack_3->SetBinContent(18,2.501166);
   hdirt_stack_3->SetBinContent(19,2.283596);
   hdirt_stack_3->SetBinContent(20,0.4950385);
   hdirt_stack_3->SetBinContent(21,1.147354);
   hdirt_stack_3->SetBinContent(22,2.273577);
   hdirt_stack_3->SetBinContent(23,3.142966);
   hdirt_stack_3->SetBinContent(24,1.088108);
   hdirt_stack_3->SetBinError(1,0.4172928);
   hdirt_stack_3->SetBinError(2,0.9094565);
   hdirt_stack_3->SetBinError(3,0.4355841);
   hdirt_stack_3->SetBinError(4,1.423541);
   hdirt_stack_3->SetBinError(5,1.100375);
   hdirt_stack_3->SetBinError(6,0.7757267);
   hdirt_stack_3->SetBinError(7,0.7250287);
   hdirt_stack_3->SetBinError(8,0.5269847);
   hdirt_stack_3->SetBinError(9,0.5691019);
   hdirt_stack_3->SetBinError(10,0.4034967);
   hdirt_stack_3->SetBinError(11,1.152631);
   hdirt_stack_3->SetBinError(12,0.5080516);
   hdirt_stack_3->SetBinError(13,0.5170999);
   hdirt_stack_3->SetBinError(14,0.2716194);
   hdirt_stack_3->SetBinError(15,0.8219726);
   hdirt_stack_3->SetBinError(16,0.476968);
   hdirt_stack_3->SetBinError(17,0.4234177);
   hdirt_stack_3->SetBinError(18,0.9305419);
   hdirt_stack_3->SetBinError(19,0.7660704);
   hdirt_stack_3->SetBinError(20,0.2933304);
   hdirt_stack_3->SetBinError(21,0.5304399);
   hdirt_stack_3->SetBinError(22,0.7162469);
   hdirt_stack_3->SetBinError(23,0.9745154);
   hdirt_stack_3->SetBinError(24,0.5794502);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,5.853468);
   houtFV_stack_4->SetBinContent(2,13.32923);
   houtFV_stack_4->SetBinContent(3,11.46579);
   houtFV_stack_4->SetBinContent(4,19.83017);
   houtFV_stack_4->SetBinContent(5,19.20467);
   houtFV_stack_4->SetBinContent(6,22.03748);
   houtFV_stack_4->SetBinContent(7,19.96602);
   houtFV_stack_4->SetBinContent(8,17.07567);
   houtFV_stack_4->SetBinContent(9,19.14709);
   houtFV_stack_4->SetBinContent(10,18.08369);
   houtFV_stack_4->SetBinContent(11,15.46792);
   houtFV_stack_4->SetBinContent(12,13.56752);
   houtFV_stack_4->SetBinContent(13,9.887704);
   houtFV_stack_4->SetBinContent(14,9.113528);
   houtFV_stack_4->SetBinContent(15,9.91325);
   houtFV_stack_4->SetBinContent(16,10.5165);
   houtFV_stack_4->SetBinContent(17,8.502539);
   houtFV_stack_4->SetBinContent(18,12.0612);
   houtFV_stack_4->SetBinContent(19,12.80415);
   houtFV_stack_4->SetBinContent(20,12.82153);
   houtFV_stack_4->SetBinContent(21,16.11082);
   houtFV_stack_4->SetBinContent(22,19.65216);
   houtFV_stack_4->SetBinContent(23,15.86596);
   houtFV_stack_4->SetBinContent(24,8.905365);
   houtFV_stack_4->SetBinError(1,1.26953);
   houtFV_stack_4->SetBinError(2,1.831161);
   houtFV_stack_4->SetBinError(3,1.755237);
   houtFV_stack_4->SetBinError(4,2.228934);
   houtFV_stack_4->SetBinError(5,2.209387);
   houtFV_stack_4->SetBinError(6,2.332308);
   houtFV_stack_4->SetBinError(7,2.258322);
   houtFV_stack_4->SetBinError(8,2.117451);
   houtFV_stack_4->SetBinError(9,2.178561);
   houtFV_stack_4->SetBinError(10,2.053081);
   houtFV_stack_4->SetBinError(11,1.935738);
   houtFV_stack_4->SetBinError(12,1.884763);
   houtFV_stack_4->SetBinError(13,1.494521);
   houtFV_stack_4->SetBinError(14,1.539833);
   houtFV_stack_4->SetBinError(15,1.5453);
   houtFV_stack_4->SetBinError(16,1.582411);
   houtFV_stack_4->SetBinError(17,1.421554);
   houtFV_stack_4->SetBinError(18,1.789337);
   houtFV_stack_4->SetBinError(19,1.788126);
   houtFV_stack_4->SetBinError(20,1.768953);
   houtFV_stack_4->SetBinError(21,1.974833);
   houtFV_stack_4->SetBinError(22,2.223165);
   houtFV_stack_4->SetBinError(23,1.991058);
   houtFV_stack_4->SetBinError(24,1.471308);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.450808);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.326998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.821652);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.386636);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,9.648623);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,10.44478);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,9.341724);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.551035);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.896381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.655659);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.379988);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.013048);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.703652);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.636234);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.273862);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.226608);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.898376);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.087772);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.230184);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.812844);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.492326);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,2.25958);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.700908);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.198708);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4301228);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4373011);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6396808);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8358054);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.02648);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.095507);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.022301);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7397065);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7131859);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6488427);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7001982);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.583409);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5234548);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6077522);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5293703);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3560243);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5312666);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3307091);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5291863);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4567469);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4392262);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5353411);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3741473);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3549294);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9060901);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.130122);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6682718);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8926402);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6980042);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3332495);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3695249);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.213699);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3697006);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3431282);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,14.31194);
   hNCpi0inFVres_stack_7->SetBinContent(2,23.38743);
   hNCpi0inFVres_stack_7->SetBinContent(3,39.08441);
   hNCpi0inFVres_stack_7->SetBinContent(4,70.84184);
   hNCpi0inFVres_stack_7->SetBinContent(5,111.7846);
   hNCpi0inFVres_stack_7->SetBinContent(6,122.9837);
   hNCpi0inFVres_stack_7->SetBinContent(7,125.797);
   hNCpi0inFVres_stack_7->SetBinContent(8,120.761);
   hNCpi0inFVres_stack_7->SetBinContent(9,113.6568);
   hNCpi0inFVres_stack_7->SetBinContent(10,100.6462);
   hNCpi0inFVres_stack_7->SetBinContent(11,90.74371);
   hNCpi0inFVres_stack_7->SetBinContent(12,80.64839);
   hNCpi0inFVres_stack_7->SetBinContent(13,70.06516);
   hNCpi0inFVres_stack_7->SetBinContent(14,58.63992);
   hNCpi0inFVres_stack_7->SetBinContent(15,44.89892);
   hNCpi0inFVres_stack_7->SetBinContent(16,42.80078);
   hNCpi0inFVres_stack_7->SetBinContent(17,37.89632);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.25587);
   hNCpi0inFVres_stack_7->SetBinContent(19,34.53368);
   hNCpi0inFVres_stack_7->SetBinContent(20,36.78513);
   hNCpi0inFVres_stack_7->SetBinContent(21,41.84735);
   hNCpi0inFVres_stack_7->SetBinContent(22,41.79535);
   hNCpi0inFVres_stack_7->SetBinContent(23,40.03036);
   hNCpi0inFVres_stack_7->SetBinContent(24,19.71724);
   hNCpi0inFVres_stack_7->SetBinError(1,1.296462);
   hNCpi0inFVres_stack_7->SetBinError(2,1.554651);
   hNCpi0inFVres_stack_7->SetBinError(3,2.083042);
   hNCpi0inFVres_stack_7->SetBinError(4,2.656402);
   hNCpi0inFVres_stack_7->SetBinError(5,3.444909);
   hNCpi0inFVres_stack_7->SetBinError(6,3.618473);
   hNCpi0inFVres_stack_7->SetBinError(7,3.681776);
   hNCpi0inFVres_stack_7->SetBinError(8,3.587042);
   hNCpi0inFVres_stack_7->SetBinError(9,3.504953);
   hNCpi0inFVres_stack_7->SetBinError(10,3.326405);
   hNCpi0inFVres_stack_7->SetBinError(11,3.161671);
   hNCpi0inFVres_stack_7->SetBinError(12,2.961349);
   hNCpi0inFVres_stack_7->SetBinError(13,2.735979);
   hNCpi0inFVres_stack_7->SetBinError(14,2.561498);
   hNCpi0inFVres_stack_7->SetBinError(15,2.18452);
   hNCpi0inFVres_stack_7->SetBinError(16,2.165462);
   hNCpi0inFVres_stack_7->SetBinError(17,1.979804);
   hNCpi0inFVres_stack_7->SetBinError(18,1.993941);
   hNCpi0inFVres_stack_7->SetBinError(19,1.864938);
   hNCpi0inFVres_stack_7->SetBinError(20,1.95622);
   hNCpi0inFVres_stack_7->SetBinError(21,2.140075);
   hNCpi0inFVres_stack_7->SetBinError(22,2.059742);
   hNCpi0inFVres_stack_7->SetBinError(23,2.102261);
   hNCpi0inFVres_stack_7->SetBinError(24,1.45766);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.858266);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.438532);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.41305);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.27059);
   hNCpi0inFVdis_stack_8->SetBinContent(5,27.10629);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.16399);
   hNCpi0inFVdis_stack_8->SetBinContent(7,23.30124);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.18408);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.70297);
   hNCpi0inFVdis_stack_8->SetBinContent(10,18.17958);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.49633);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.39861);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.204);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.8544);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.460701);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.431057);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.610747);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.721436);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.120086);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.355904);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.12923);
   hNCpi0inFVdis_stack_8->SetBinContent(22,7.416439);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.197816);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.491588);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5392643);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7911088);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.011937);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.375343);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.700542);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.591598);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.53519);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.544479);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.508529);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.427464);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.117055);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.128668);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.369104);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.201143);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9008362);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8536591);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8760852);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8413748);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7830313);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7579418);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9376725);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8182745);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9320171);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7024181);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1012383);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,5.619843);
   hCCpi0inFV_stack_10->SetBinContent(2,8.787976);
   hCCpi0inFV_stack_10->SetBinContent(3,14.49858);
   hCCpi0inFV_stack_10->SetBinContent(4,29.31438);
   hCCpi0inFV_stack_10->SetBinContent(5,38.62284);
   hCCpi0inFV_stack_10->SetBinContent(6,42.19525);
   hCCpi0inFV_stack_10->SetBinContent(7,42.95238);
   hCCpi0inFV_stack_10->SetBinContent(8,34.81058);
   hCCpi0inFV_stack_10->SetBinContent(9,36.99894);
   hCCpi0inFV_stack_10->SetBinContent(10,29.9117);
   hCCpi0inFV_stack_10->SetBinContent(11,31.65236);
   hCCpi0inFV_stack_10->SetBinContent(12,24.94798);
   hCCpi0inFV_stack_10->SetBinContent(13,20.28645);
   hCCpi0inFV_stack_10->SetBinContent(14,17.32985);
   hCCpi0inFV_stack_10->SetBinContent(15,14.76077);
   hCCpi0inFV_stack_10->SetBinContent(16,15.1124);
   hCCpi0inFV_stack_10->SetBinContent(17,14.52641);
   hCCpi0inFV_stack_10->SetBinContent(18,11.70088);
   hCCpi0inFV_stack_10->SetBinContent(19,10.19051);
   hCCpi0inFV_stack_10->SetBinContent(20,8.944464);
   hCCpi0inFV_stack_10->SetBinContent(21,12.02067);
   hCCpi0inFV_stack_10->SetBinContent(22,10.31736);
   hCCpi0inFV_stack_10->SetBinContent(23,16.69403);
   hCCpi0inFV_stack_10->SetBinContent(24,9.882419);
   hCCpi0inFV_stack_10->SetBinError(1,1.225868);
   hCCpi0inFV_stack_10->SetBinError(2,1.474269);
   hCCpi0inFV_stack_10->SetBinError(3,1.870365);
   hCCpi0inFV_stack_10->SetBinError(4,2.704824);
   hCCpi0inFV_stack_10->SetBinError(5,3.04175);
   hCCpi0inFV_stack_10->SetBinError(6,3.247678);
   hCCpi0inFV_stack_10->SetBinError(7,3.338868);
   hCCpi0inFV_stack_10->SetBinError(8,2.897405);
   hCCpi0inFV_stack_10->SetBinError(9,3.047873);
   hCCpi0inFV_stack_10->SetBinError(10,2.780085);
   hCCpi0inFV_stack_10->SetBinError(11,2.822966);
   hCCpi0inFV_stack_10->SetBinError(12,2.503763);
   hCCpi0inFV_stack_10->SetBinError(13,2.255893);
   hCCpi0inFV_stack_10->SetBinError(14,2.090162);
   hCCpi0inFV_stack_10->SetBinError(15,1.85538);
   hCCpi0inFV_stack_10->SetBinError(16,1.903651);
   hCCpi0inFV_stack_10->SetBinError(17,1.952019);
   hCCpi0inFV_stack_10->SetBinError(18,1.749302);
   hCCpi0inFV_stack_10->SetBinError(19,1.566951);
   hCCpi0inFV_stack_10->SetBinError(20,1.481591);
   hCCpi0inFV_stack_10->SetBinError(21,1.744687);
   hCCpi0inFV_stack_10->SetBinError(22,1.569714);
   hCCpi0inFV_stack_10->SetBinError(23,2.085835);
   hCCpi0inFV_stack_10->SetBinError(24,1.560503);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,4.644856);
   hNCinFV_stack_11->SetBinContent(2,4.586532);
   hNCinFV_stack_11->SetBinContent(3,9.222936);
   hNCinFV_stack_11->SetBinContent(4,15.28683);
   hNCinFV_stack_11->SetBinContent(5,19.82518);
   hNCinFV_stack_11->SetBinContent(6,20.85356);
   hNCinFV_stack_11->SetBinContent(7,14.02755);
   hNCinFV_stack_11->SetBinContent(8,18.18261);
   hNCinFV_stack_11->SetBinContent(9,16.37461);
   hNCinFV_stack_11->SetBinContent(10,16.66891);
   hNCinFV_stack_11->SetBinContent(11,14.48717);
   hNCinFV_stack_11->SetBinContent(12,14.41314);
   hNCinFV_stack_11->SetBinContent(13,10.70368);
   hNCinFV_stack_11->SetBinContent(14,12.40118);
   hNCinFV_stack_11->SetBinContent(15,10.12138);
   hNCinFV_stack_11->SetBinContent(16,7.053623);
   hNCinFV_stack_11->SetBinContent(17,9.054352);
   hNCinFV_stack_11->SetBinContent(18,7.074282);
   hNCinFV_stack_11->SetBinContent(19,8.504542);
   hNCinFV_stack_11->SetBinContent(20,6.406842);
   hNCinFV_stack_11->SetBinContent(21,5.423265);
   hNCinFV_stack_11->SetBinContent(22,5.765134);
   hNCinFV_stack_11->SetBinContent(23,6.016793);
   hNCinFV_stack_11->SetBinContent(24,5.086469);
   hNCinFV_stack_11->SetBinError(1,1.075365);
   hNCinFV_stack_11->SetBinError(2,1.092131);
   hNCinFV_stack_11->SetBinError(3,1.531616);
   hNCinFV_stack_11->SetBinError(4,1.98212);
   hNCinFV_stack_11->SetBinError(5,2.271973);
   hNCinFV_stack_11->SetBinError(6,2.305148);
   hNCinFV_stack_11->SetBinError(7,1.840455);
   hNCinFV_stack_11->SetBinError(8,2.13235);
   hNCinFV_stack_11->SetBinError(9,1.961209);
   hNCinFV_stack_11->SetBinError(10,2.049796);
   hNCinFV_stack_11->SetBinError(11,1.956911);
   hNCinFV_stack_11->SetBinError(12,1.913109);
   hNCinFV_stack_11->SetBinError(13,1.654501);
   hNCinFV_stack_11->SetBinError(14,1.820619);
   hNCinFV_stack_11->SetBinError(15,1.557552);
   hNCinFV_stack_11->SetBinError(16,1.257163);
   hNCinFV_stack_11->SetBinError(17,1.455947);
   hNCinFV_stack_11->SetBinError(18,1.387855);
   hNCinFV_stack_11->SetBinError(19,1.469249);
   hNCinFV_stack_11->SetBinError(20,1.225304);
   hNCinFV_stack_11->SetBinError(21,1.143628);
   hNCinFV_stack_11->SetBinError(22,1.193427);
   hNCinFV_stack_11->SetBinError(23,1.19386);
   hNCinFV_stack_11->SetBinError(24,1.092469);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.526471);
   hnumuCCinFV_stack_12->SetBinContent(2,6.454282);
   hnumuCCinFV_stack_12->SetBinContent(3,5.338807);
   hnumuCCinFV_stack_12->SetBinContent(4,9.117431);
   hnumuCCinFV_stack_12->SetBinContent(5,17.13511);
   hnumuCCinFV_stack_12->SetBinContent(6,17.64197);
   hnumuCCinFV_stack_12->SetBinContent(7,15.85435);
   hnumuCCinFV_stack_12->SetBinContent(8,16.33103);
   hnumuCCinFV_stack_12->SetBinContent(9,11.82628);
   hnumuCCinFV_stack_12->SetBinContent(10,10.85291);
   hnumuCCinFV_stack_12->SetBinContent(11,14.29362);
   hnumuCCinFV_stack_12->SetBinContent(12,9.877682);
   hnumuCCinFV_stack_12->SetBinContent(13,11.02699);
   hnumuCCinFV_stack_12->SetBinContent(14,9.256456);
   hnumuCCinFV_stack_12->SetBinContent(15,9.149386);
   hnumuCCinFV_stack_12->SetBinContent(16,9.129208);
   hnumuCCinFV_stack_12->SetBinContent(17,4.715171);
   hnumuCCinFV_stack_12->SetBinContent(18,6.768749);
   hnumuCCinFV_stack_12->SetBinContent(19,5.920738);
   hnumuCCinFV_stack_12->SetBinContent(20,6.3829);
   hnumuCCinFV_stack_12->SetBinContent(21,5.484051);
   hnumuCCinFV_stack_12->SetBinContent(22,4.300437);
   hnumuCCinFV_stack_12->SetBinContent(23,2.861847);
   hnumuCCinFV_stack_12->SetBinContent(24,3.794696);
   hnumuCCinFV_stack_12->SetBinError(1,1.634261);
   hnumuCCinFV_stack_12->SetBinError(2,1.36713);
   hnumuCCinFV_stack_12->SetBinError(3,1.113771);
   hnumuCCinFV_stack_12->SetBinError(4,1.550997);
   hnumuCCinFV_stack_12->SetBinError(5,2.733102);
   hnumuCCinFV_stack_12->SetBinError(6,2.177846);
   hnumuCCinFV_stack_12->SetBinError(7,2.095059);
   hnumuCCinFV_stack_12->SetBinError(8,2.588157);
   hnumuCCinFV_stack_12->SetBinError(9,2.269676);
   hnumuCCinFV_stack_12->SetBinError(10,1.875388);
   hnumuCCinFV_stack_12->SetBinError(11,2.269617);
   hnumuCCinFV_stack_12->SetBinError(12,1.787601);
   hnumuCCinFV_stack_12->SetBinError(13,1.744899);
   hnumuCCinFV_stack_12->SetBinError(14,1.582965);
   hnumuCCinFV_stack_12->SetBinError(15,1.937428);
   hnumuCCinFV_stack_12->SetBinError(16,1.561812);
   hnumuCCinFV_stack_12->SetBinError(17,1.193204);
   hnumuCCinFV_stack_12->SetBinError(18,1.359312);
   hnumuCCinFV_stack_12->SetBinError(19,1.229984);
   hnumuCCinFV_stack_12->SetBinError(20,1.477479);
   hnumuCCinFV_stack_12->SetBinError(21,1.210651);
   hnumuCCinFV_stack_12->SetBinError(22,1.084372);
   hnumuCCinFV_stack_12->SetBinError(23,0.8125771);
   hnumuCCinFV_stack_12->SetBinError(24,0.9841668);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,5.690633);
   hnueCCinFV_stack_13->SetBinContent(2,2.627492);
   hnueCCinFV_stack_13->SetBinContent(3,0.9499335);
   hnueCCinFV_stack_13->SetBinContent(4,3.253554);
   hnueCCinFV_stack_13->SetBinContent(5,1.191198);
   hnueCCinFV_stack_13->SetBinContent(6,2.544085);
   hnueCCinFV_stack_13->SetBinContent(7,1.760275);
   hnueCCinFV_stack_13->SetBinContent(8,0.785171);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(11,1.034085e-05);
   hnueCCinFV_stack_13->SetBinContent(13,0.7016784);
   hnueCCinFV_stack_13->SetBinContent(14,0.5930367);
   hnueCCinFV_stack_13->SetBinContent(16,1.664306);
   hnueCCinFV_stack_13->SetBinContent(17,0.8419645);
   hnueCCinFV_stack_13->SetBinContent(18,0.7013245);
   hnueCCinFV_stack_13->SetBinContent(19,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(20,1.452853);
   hnueCCinFV_stack_13->SetBinContent(21,1.050714);
   hnueCCinFV_stack_13->SetBinContent(22,1.76798);
   hnueCCinFV_stack_13->SetBinContent(23,2.186121);
   hnueCCinFV_stack_13->SetBinContent(24,0.2655223);
   hnueCCinFV_stack_13->SetBinError(1,2.046338);
   hnueCCinFV_stack_13->SetBinError(2,0.9708034);
   hnueCCinFV_stack_13->SetBinError(3,0.4898809);
   hnueCCinFV_stack_13->SetBinError(4,0.9737721);
   hnueCCinFV_stack_13->SetBinError(5,0.4863757);
   hnueCCinFV_stack_13->SetBinError(6,1.403406);
   hnueCCinFV_stack_13->SetBinError(7,0.7585711);
   hnueCCinFV_stack_13->SetBinError(8,0.3925882);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.4575996);
   hnueCCinFV_stack_13->SetBinError(11,1.034085e-05);
   hnueCCinFV_stack_13->SetBinError(13,0.4156841);
   hnueCCinFV_stack_13->SetBinError(14,0.4424562);
   hnueCCinFV_stack_13->SetBinError(16,0.708606);
   hnueCCinFV_stack_13->SetBinError(17,0.6062267);
   hnueCCinFV_stack_13->SetBinError(18,0.4961329);
   hnueCCinFV_stack_13->SetBinError(19,0.2781975);
   hnueCCinFV_stack_13->SetBinError(20,0.678412);
   hnueCCinFV_stack_13->SetBinError(21,0.6567675);
   hnueCCinFV_stack_13->SetBinError(22,0.7003296);
   hnueCCinFV_stack_13->SetBinError(23,1.188703);
   hnueCCinFV_stack_13->SetBinError(24,0.2606792);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__17->SetBinContent(1,50.42548);
   hmcerror__17->SetBinContent(2,80.73524);
   hmcerror__17->SetBinContent(3,106.1567);
   hmcerror__17->SetBinContent(4,201.0188);
   hmcerror__17->SetBinContent(5,276.4979);
   hmcerror__17->SetBinContent(6,293.9164);
   hmcerror__17->SetBinContent(7,273.0222);
   hmcerror__17->SetBinContent(8,262.3581);
   hmcerror__17->SetBinContent(9,242.7926);
   hmcerror__17->SetBinContent(10,218.0417);
   hmcerror__17->SetBinContent(11,209.2859);
   hmcerror__17->SetBinContent(12,177.2261);
   hmcerror__17->SetBinContent(13,160.2872);
   hmcerror__17->SetBinContent(14,138.4198);
   hmcerror__17->SetBinContent(15,111.8314);
   hmcerror__17->SetBinContent(16,112.0882);
   hmcerror__17->SetBinContent(17,103.7673);
   hmcerror__17->SetBinContent(18,95.79823);
   hmcerror__17->SetBinContent(19,94.73553);
   hmcerror__17->SetBinContent(20,95.66887);
   hmcerror__17->SetBinContent(21,107.4758);
   hmcerror__17->SetBinContent(22,103.3264);
   hmcerror__17->SetBinContent(23,107.3167);
   hmcerror__17->SetBinContent(24,60.81272);
   hmcerror__17->SetBinError(1,30.50524);
   hmcerror__17->SetBinError(2,25.21198);
   hmcerror__17->SetBinError(3,41.73541);
   hmcerror__17->SetBinError(4,58.17221);
   hmcerror__17->SetBinError(5,74.0881);
   hmcerror__17->SetBinError(6,90.85381);
   hmcerror__17->SetBinError(7,76.76439);
   hmcerror__17->SetBinError(8,72.068);
   hmcerror__17->SetBinError(9,68.34543);
   hmcerror__17->SetBinError(10,56.70621);
   hmcerror__17->SetBinError(11,61.17841);
   hmcerror__17->SetBinError(12,47.17156);
   hmcerror__17->SetBinError(13,43.40427);
   hmcerror__17->SetBinError(14,39.80797);
   hmcerror__17->SetBinError(15,43.29684);
   hmcerror__17->SetBinError(16,32.6849);
   hmcerror__17->SetBinError(17,32.17746);
   hmcerror__17->SetBinError(18,28.62251);
   hmcerror__17->SetBinError(19,25.27841);
   hmcerror__17->SetBinError(20,28.93375);
   hmcerror__17->SetBinError(21,30.56193);
   hmcerror__17->SetBinError(22,28.83771);
   hmcerror__17->SetBinError(23,31.39577);
   hmcerror__17->SetBinError(24,18.9361);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3021[24] = {
   53,
   70,
   109,
   184,
   232,
   246,
   237,
   231,
   256,
   202,
   195,
   189,
   152,
   135,
   123,
   107,
   113,
   101,
   94,
   95,
   110,
   109,
   123,
   56};
   Double_t _felx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3021[24] = {
   7.4105,
   8.4925,
   10.44031,
   13.56466,
   15.23155,
   15.68439,
   15.3948,
   15.19868,
   16,
   14.21267,
   13.96424,
   13.74773,
   12.32883,
   11.61895,
   11.09054,
   10.34408,
   10.63015,
   10.04988,
   9.8173,
   9.8686,
   10.48809,
   10.44031,
   11.09054,
   7.6127};
   Double_t _fehx3021[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3021[24] = {
   7.2068,
   8.2902,
   10.44031,
   13.56466,
   15.23155,
   15.68439,
   15.3948,
   15.19868,
   16,
   14.21267,
   13.96424,
   13.74773,
   12.32883,
   11.61895,
   11.09054,
   10.34408,
   10.63015,
   10.04988,
   9.616,
   9.667,
   10.48809,
   10.44031,
   11.09054,
   7.4094};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,3.465);
   Graph_Graph3021->SetMinimum(22.94845);
   Graph_Graph3021->SetMaximum(294.6411);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3022[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3022[24] = {
   0.604957,
   0.3122798,
   0.3931491,
   0.2893868,
   0.2679518,
   0.3091145,
   0.2811654,
   0.2746933,
   0.2814971,
   0.2600705,
   0.2923198,
   0.266166,
   0.2707907,
   0.2875887,
   0.3871618,
   0.2915999,
   0.3100925,
   0.2987791,
   0.2668313,
   0.3024364,
   0.2843611,
   0.2790935,
   0.2925524,
   0.3113838};
   Double_t _fehx3022[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3022[24] = {
   0.604957,
   0.3122798,
   0.3931491,
   0.2893868,
   0.2679518,
   0.3091145,
   0.2811654,
   0.2746933,
   0.2814971,
   0.2600705,
   0.2923198,
   0.266166,
   0.2707907,
   0.2875887,
   0.3871618,
   0.2915999,
   0.3100925,
   0.2987791,
   0.2668313,
   0.3024364,
   0.2843611,
   0.2790935,
   0.2925524,
   0.3113838};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,3.465);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3023[24] = {
   0.2072457,
   0.2088883,
   0.2239214,
   0.2176534,
   0.2483578,
   0.2578311,
   0.2459958,
   0.243359,
   0.2361304,
   0.2304536,
   0.2226313,
   0.2191412,
   0.2207675,
   0.2167017,
   0.226526,
   0.2106182,
   0.2090471,
   0.1972838,
   0.2052888,
   0.1984657,
   0.2112668,
   0.2145423,
   0.2213234,
   0.20226};
   Double_t _fehx3023[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3023[24] = {
   0.2072457,
   0.2088883,
   0.2239214,
   0.2176534,
   0.2483578,
   0.2578311,
   0.2459958,
   0.243359,
   0.2361304,
   0.2304536,
   0.2226313,
   0.2191412,
   0.2207675,
   0.2167017,
   0.226526,
   0.2106182,
   0.2090471,
   0.1972838,
   0.2052888,
   0.1984657,
   0.2112668,
   0.2145423,
   0.2213234,
   0.20226};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,3.465);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3024[24] = {
   1.051056,
   0.8670315,
   1.026784,
   0.9153371,
   0.8390661,
   0.8369728,
   0.8680612,
   0.880476,
   1.054398,
   0.9264283,
   0.9317397,
   1.066434,
   0.9482979,
   0.9752939,
   1.09987,
   0.9546056,
   1.088975,
   1.054299,
   0.9922359,
   0.9930085,
   1.023486,
   1.05491,
   1.14614,
   0.92086};
   Double_t _felx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3024[24] = {
   0.1469594,
   0.1051895,
   0.09834806,
   0.06747954,
   0.05508739,
   0.05336344,
   0.05638664,
   0.05793107,
   0.06589985,
   0.06518327,
   0.06672327,
   0.07757167,
   0.07691712,
   0.08393993,
   0.09917195,
   0.0922852,
   0.1024422,
   0.1049067,
   0.1036285,
   0.1031537,
   0.0975856,
   0.101042,
   0.103344,
   0.1251827};
   Double_t _fehx3024[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3024[24] = {
   0.1429198,
   0.1026838,
   0.09834806,
   0.06747954,
   0.05508739,
   0.05336344,
   0.05638664,
   0.05793107,
   0.06589985,
   0.06518327,
   0.06672327,
   0.07757167,
   0.07691712,
   0.08393993,
   0.09917195,
   0.0922852,
   0.1024422,
   0.1049067,
   0.1015036,
   0.1010465,
   0.0975856,
   0.101042,
   0.103344,
   0.1218396};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,3.465);
   Graph_Graph3024->SetMinimum(0.7130778);
   Graph_Graph3024->SetMaximum(1.298248);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
