#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 09:59:19 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-170,-7.04,163.3333,778.4758);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__1->SetBinContent(0,4.605323);
   hmc__1->SetBinContent(1,2.671533);
   hmc__1->SetBinContent(2,56.93974);
   hmc__1->SetBinContent(3,145.5138);
   hmc__1->SetBinContent(4,234.1233);
   hmc__1->SetBinContent(5,283.3836);
   hmc__1->SetBinContent(6,280.0717);
   hmc__1->SetBinContent(7,305.862);
   hmc__1->SetBinContent(8,309.6675);
   hmc__1->SetBinContent(9,296.6238);
   hmc__1->SetBinContent(10,318.3759);
   hmc__1->SetBinContent(11,304.2628);
   hmc__1->SetBinContent(12,301.3267);
   hmc__1->SetBinContent(13,318.2214);
   hmc__1->SetBinContent(14,309.8796);
   hmc__1->SetBinContent(15,304.4759);
   hmc__1->SetBinContent(16,321.5533);
   hmc__1->SetBinContent(17,321.2437);
   hmc__1->SetBinContent(18,320.2745);
   hmc__1->SetBinContent(19,331.2292);
   hmc__1->SetBinContent(20,334.6175);
   hmc__1->SetBinContent(21,342.4562);
   hmc__1->SetBinContent(22,343.5553);
   hmc__1->SetBinContent(23,321.6396);
   hmc__1->SetBinContent(24,241.6004);
   hmc__1->SetBinContent(25,117.2261);
   hmc__1->SetBinContent(26,4.43807);
   hmc__1->SetBinContent(27,3.264999);
   hmc__1->SetBinError(0,1.087694);
   hmc__1->SetBinError(1,5.777614);
   hmc__1->SetBinError(2,26.61688);
   hmc__1->SetBinError(3,43.91745);
   hmc__1->SetBinError(4,75.85796);
   hmc__1->SetBinError(5,77.8986);
   hmc__1->SetBinError(6,81.31198);
   hmc__1->SetBinError(7,88.84133);
   hmc__1->SetBinError(8,87.58859);
   hmc__1->SetBinError(9,82.52147);
   hmc__1->SetBinError(10,82.88326);
   hmc__1->SetBinError(11,85.03995);
   hmc__1->SetBinError(12,82.92983);
   hmc__1->SetBinError(13,81.5788);
   hmc__1->SetBinError(14,90.01006);
   hmc__1->SetBinError(15,78.68726);
   hmc__1->SetBinError(16,83.0142);
   hmc__1->SetBinError(17,80.1192);
   hmc__1->SetBinError(18,78.69007);
   hmc__1->SetBinError(19,79.04456);
   hmc__1->SetBinError(20,81.21623);
   hmc__1->SetBinError(21,78.65659);
   hmc__1->SetBinError(22,78.11267);
   hmc__1->SetBinError(23,65.42753);
   hmc__1->SetBinError(24,50.68286);
   hmc__1->SetBinError(25,31.57225);
   hmc__1->SetBinError(26,5.625615);
   hmc__1->SetBinError(27,4.335209);
   hmc__1->SetMinimum(-7.04);
   hmc__1->SetMaximum(739.2);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,-130,130);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(360.733);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,3.587728);
   hbadmatch_stack_1->SetBinContent(3,2.187888);
   hbadmatch_stack_1->SetBinContent(4,9.40103);
   hbadmatch_stack_1->SetBinContent(5,6.859081);
   hbadmatch_stack_1->SetBinContent(6,4.988422);
   hbadmatch_stack_1->SetBinContent(7,5.562111);
   hbadmatch_stack_1->SetBinContent(8,7.023685);
   hbadmatch_stack_1->SetBinContent(9,6.647057);
   hbadmatch_stack_1->SetBinContent(10,8.234581);
   hbadmatch_stack_1->SetBinContent(11,6.241535);
   hbadmatch_stack_1->SetBinContent(12,8.718143);
   hbadmatch_stack_1->SetBinContent(13,10.78506);
   hbadmatch_stack_1->SetBinContent(14,6.450008);
   hbadmatch_stack_1->SetBinContent(15,8.105076);
   hbadmatch_stack_1->SetBinContent(16,8.459935);
   hbadmatch_stack_1->SetBinContent(17,7.819077);
   hbadmatch_stack_1->SetBinContent(18,9.258102);
   hbadmatch_stack_1->SetBinContent(19,7.14316);
   hbadmatch_stack_1->SetBinContent(20,8.893129);
   hbadmatch_stack_1->SetBinContent(21,8.321431);
   hbadmatch_stack_1->SetBinContent(22,5.680929);
   hbadmatch_stack_1->SetBinContent(23,10.65349);
   hbadmatch_stack_1->SetBinContent(24,8.139488);
   hbadmatch_stack_1->SetBinContent(25,4.299944);
   hbadmatch_stack_1->SetBinError(2,1.004576);
   hbadmatch_stack_1->SetBinError(3,0.7217878);
   hbadmatch_stack_1->SetBinError(4,2.797882);
   hbadmatch_stack_1->SetBinError(5,2.069457);
   hbadmatch_stack_1->SetBinError(6,1.077291);
   hbadmatch_stack_1->SetBinError(7,1.271864);
   hbadmatch_stack_1->SetBinError(8,1.645936);
   hbadmatch_stack_1->SetBinError(9,1.339677);
   hbadmatch_stack_1->SetBinError(10,1.632037);
   hbadmatch_stack_1->SetBinError(11,1.240048);
   hbadmatch_stack_1->SetBinError(12,1.583161);
   hbadmatch_stack_1->SetBinError(13,1.782372);
   hbadmatch_stack_1->SetBinError(14,1.333215);
   hbadmatch_stack_1->SetBinError(15,1.566351);
   hbadmatch_stack_1->SetBinError(16,1.478051);
   hbadmatch_stack_1->SetBinError(17,1.48485);
   hbadmatch_stack_1->SetBinError(18,1.654468);
   hbadmatch_stack_1->SetBinError(19,1.469835);
   hbadmatch_stack_1->SetBinError(20,1.662165);
   hbadmatch_stack_1->SetBinError(21,1.666133);
   hbadmatch_stack_1->SetBinError(22,1.311891);
   hbadmatch_stack_1->SetBinError(23,1.998581);
   hbadmatch_stack_1->SetBinError(24,1.472321);
   hbadmatch_stack_1->SetBinError(25,1.179385);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,2.110787);
   hext_stack_2->SetBinContent(4,5.034772);
   hext_stack_2->SetBinContent(5,12.67789);
   hext_stack_2->SetBinContent(6,7.918446);
   hext_stack_2->SetBinContent(7,7.22058);
   hext_stack_2->SetBinContent(8,14.52771);
   hext_stack_2->SetBinContent(9,18.00834);
   hext_stack_2->SetBinContent(10,23.32279);
   hext_stack_2->SetBinContent(11,20.61511);
   hext_stack_2->SetBinContent(12,15.54562);
   hext_stack_2->SetBinContent(13,27.15376);
   hext_stack_2->SetBinContent(14,22.39709);
   hext_stack_2->SetBinContent(15,28.47453);
   hext_stack_2->SetBinContent(16,28.60699);
   hext_stack_2->SetBinContent(17,45.91458);
   hext_stack_2->SetBinContent(18,45.65084);
   hext_stack_2->SetBinContent(19,55.0297);
   hext_stack_2->SetBinContent(20,58.22025);
   hext_stack_2->SetBinContent(21,66.63626);
   hext_stack_2->SetBinContent(22,76.01512);
   hext_stack_2->SetBinContent(23,81.83588);
   hext_stack_2->SetBinContent(24,62.48094);
   hext_stack_2->SetBinContent(25,27.07156);
   hext_stack_2->SetBinContent(26,1.137595);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.8669371);
   hext_stack_2->SetBinError(4,1.354181);
   hext_stack_2->SetBinError(5,2.499052);
   hext_stack_2->SetBinError(6,1.946);
   hext_stack_2->SetBinError(7,1.687209);
   hext_stack_2->SetBinError(8,2.686815);
   hext_stack_2->SetBinError(9,2.998183);
   hext_stack_2->SetBinError(10,3.415246);
   hext_stack_2->SetBinError(11,3.124883);
   hext_stack_2->SetBinError(12,2.607473);
   hext_stack_2->SetBinError(13,3.615354);
   hext_stack_2->SetBinError(14,3.205638);
   hext_stack_2->SetBinError(15,3.655073);
   hext_stack_2->SetBinError(16,3.465724);
   hext_stack_2->SetBinError(17,4.801797);
   hext_stack_2->SetBinError(18,4.8596);
   hext_stack_2->SetBinError(19,5.112913);
   hext_stack_2->SetBinError(20,4.999891);
   hext_stack_2->SetBinError(21,5.532802);
   hext_stack_2->SetBinError(22,5.756567);
   hext_stack_2->SetBinError(23,6.264151);
   hext_stack_2->SetBinError(24,5.269665);
   hext_stack_2->SetBinError(25,3.607034);
   hext_stack_2->SetBinError(26,0.6602113);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,2.356437);
   hdirt_stack_3->SetBinContent(4,2.600331);
   hdirt_stack_3->SetBinContent(5,1.955611);
   hdirt_stack_3->SetBinContent(6,3.159688);
   hdirt_stack_3->SetBinContent(7,3.735492);
   hdirt_stack_3->SetBinContent(8,2.147753);
   hdirt_stack_3->SetBinContent(9,2.529026);
   hdirt_stack_3->SetBinContent(10,3.312352);
   hdirt_stack_3->SetBinContent(11,1.394457);
   hdirt_stack_3->SetBinContent(12,3.346879);
   hdirt_stack_3->SetBinContent(13,3.22176);
   hdirt_stack_3->SetBinContent(14,0.9687504);
   hdirt_stack_3->SetBinContent(15,2.296399);
   hdirt_stack_3->SetBinContent(16,3.589576);
   hdirt_stack_3->SetBinContent(17,2.180902);
   hdirt_stack_3->SetBinContent(18,2.467684);
   hdirt_stack_3->SetBinContent(19,2.449147);
   hdirt_stack_3->SetBinContent(20,4.922387);
   hdirt_stack_3->SetBinContent(21,5.558934);
   hdirt_stack_3->SetBinContent(22,6.504851);
   hdirt_stack_3->SetBinContent(23,5.92733);
   hdirt_stack_3->SetBinContent(24,2.39569);
   hdirt_stack_3->SetBinContent(25,2.813537);
   hdirt_stack_3->SetBinContent(27,0.6763744);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.8215658);
   hdirt_stack_3->SetBinError(4,0.804446);
   hdirt_stack_3->SetBinError(5,0.6639091);
   hdirt_stack_3->SetBinError(6,0.806278);
   hdirt_stack_3->SetBinError(7,1.249247);
   hdirt_stack_3->SetBinError(8,0.8842929);
   hdirt_stack_3->SetBinError(9,0.7881226);
   hdirt_stack_3->SetBinError(10,0.9653814);
   hdirt_stack_3->SetBinError(11,0.5605024);
   hdirt_stack_3->SetBinError(12,0.9838324);
   hdirt_stack_3->SetBinError(13,0.9325726);
   hdirt_stack_3->SetBinError(14,0.4459701);
   hdirt_stack_3->SetBinError(15,0.8310636);
   hdirt_stack_3->SetBinError(16,1.042843);
   hdirt_stack_3->SetBinError(17,0.7859453);
   hdirt_stack_3->SetBinError(18,0.7863797);
   hdirt_stack_3->SetBinError(19,0.8487544);
   hdirt_stack_3->SetBinError(20,1.126407);
   hdirt_stack_3->SetBinError(21,1.267598);
   hdirt_stack_3->SetBinError(22,1.671981);
   hdirt_stack_3->SetBinError(23,1.224396);
   hdirt_stack_3->SetBinError(24,1.111222);
   hdirt_stack_3->SetBinError(25,0.9007508);
   hdirt_stack_3->SetBinError(27,0.4782689);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,2.066381);
   houtFV_stack_4->SetBinContent(1,1.764226);
   houtFV_stack_4->SetBinContent(2,39.30085);
   houtFV_stack_4->SetBinContent(3,50.40575);
   houtFV_stack_4->SetBinContent(4,39.89779);
   houtFV_stack_4->SetBinContent(5,34.86991);
   houtFV_stack_4->SetBinContent(6,26.22176);
   houtFV_stack_4->SetBinContent(7,25.1529);
   houtFV_stack_4->SetBinContent(8,21.39198);
   houtFV_stack_4->SetBinContent(9,23.70754);
   houtFV_stack_4->SetBinContent(10,22.63616);
   houtFV_stack_4->SetBinContent(11,20.72838);
   houtFV_stack_4->SetBinContent(12,19.31797);
   houtFV_stack_4->SetBinContent(13,16.78938);
   houtFV_stack_4->SetBinContent(14,20.77565);
   houtFV_stack_4->SetBinContent(15,15.40726);
   houtFV_stack_4->SetBinContent(16,18.44476);
   houtFV_stack_4->SetBinContent(17,18.95129);
   houtFV_stack_4->SetBinContent(18,22.12595);
   houtFV_stack_4->SetBinContent(19,20.27487);
   houtFV_stack_4->SetBinContent(20,20.30291);
   houtFV_stack_4->SetBinContent(21,29.76758);
   houtFV_stack_4->SetBinContent(22,34.64759);
   houtFV_stack_4->SetBinContent(23,30.56568);
   houtFV_stack_4->SetBinContent(24,45.14519);
   houtFV_stack_4->SetBinContent(25,55.95461);
   houtFV_stack_4->SetBinContent(26,2.608346);
   houtFV_stack_4->SetBinContent(27,0.5893137);
   houtFV_stack_4->SetBinError(0,0.7623014);
   houtFV_stack_4->SetBinError(1,0.6935915);
   houtFV_stack_4->SetBinError(2,3.038315);
   houtFV_stack_4->SetBinError(3,3.667196);
   houtFV_stack_4->SetBinError(4,3.172714);
   houtFV_stack_4->SetBinError(5,2.972395);
   houtFV_stack_4->SetBinError(6,2.529912);
   houtFV_stack_4->SetBinError(7,2.46173);
   houtFV_stack_4->SetBinError(8,2.288542);
   houtFV_stack_4->SetBinError(9,2.520798);
   houtFV_stack_4->SetBinError(10,2.450035);
   houtFV_stack_4->SetBinError(11,2.495608);
   houtFV_stack_4->SetBinError(12,2.170936);
   houtFV_stack_4->SetBinError(13,2.021209);
   houtFV_stack_4->SetBinError(14,2.316301);
   houtFV_stack_4->SetBinError(15,1.970823);
   houtFV_stack_4->SetBinError(16,2.076011);
   houtFV_stack_4->SetBinError(17,2.11015);
   houtFV_stack_4->SetBinError(18,2.355408);
   houtFV_stack_4->SetBinError(19,2.348913);
   houtFV_stack_4->SetBinError(20,2.184393);
   houtFV_stack_4->SetBinError(21,2.859391);
   houtFV_stack_4->SetBinError(22,3.014104);
   houtFV_stack_4->SetBinError(23,2.810821);
   houtFV_stack_4->SetBinError(24,3.415746);
   houtFV_stack_4->SetBinError(25,3.766177);
   houtFV_stack_4->SetBinError(26,0.8084725);
   houtFV_stack_4->SetBinError(27,0.3402411);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2673994);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.869478);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.55642);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.436474);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.35134);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.282821);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.892904);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.293139);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.965221);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.694245);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.589605);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.5518);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.186282);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.196758);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,6.268292);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,7.294241);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.713896);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,6.287423);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.823304);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,5.387875);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.5134);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.845439);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.708608);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4656923);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2076403);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4798542);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6992601);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8763787);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9280124);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8006257);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8620208);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8028445);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9591285);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.111225);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7075386);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5936607);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8126414);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7726004);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.9003604);
   hNCpi0inFVcoh_stack_5->SetBinError(17,1.035354);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9297072);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8650725);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7554997);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9634537);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.9064413);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.9677843);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.669394);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2250845);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5289618);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5005397);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7564567);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9087057);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.75539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.24946);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8563782);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8315583);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.102999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7722011);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.000442);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.077066);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.069934);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.29289);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.7523344);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6054868);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.9186056);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6338258);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5894551);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7570105);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3807657);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5154952);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1901072);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1678114);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2267163);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2337197);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4180022);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3892228);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2650276);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2237806);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3748537);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2361435);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2962072);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2681119);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3681486);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3627114);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2144325);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1494772);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3089185);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2288263);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1966934);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2529964);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1000223);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1619909);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.007068991);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.5338451);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.07339665);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.048699);
   hNCpi0inFVres_stack_7->SetBinContent(3,33.76908);
   hNCpi0inFVres_stack_7->SetBinContent(4,71.13905);
   hNCpi0inFVres_stack_7->SetBinContent(5,97.13496);
   hNCpi0inFVres_stack_7->SetBinContent(6,103.4995);
   hNCpi0inFVres_stack_7->SetBinContent(7,119.3797);
   hNCpi0inFVres_stack_7->SetBinContent(8,119.1738);
   hNCpi0inFVres_stack_7->SetBinContent(9,110.6148);
   hNCpi0inFVres_stack_7->SetBinContent(10,113.3651);
   hNCpi0inFVres_stack_7->SetBinContent(11,117.006);
   hNCpi0inFVres_stack_7->SetBinContent(12,110.7144);
   hNCpi0inFVres_stack_7->SetBinContent(13,113.1468);
   hNCpi0inFVres_stack_7->SetBinContent(14,104.998);
   hNCpi0inFVres_stack_7->SetBinContent(15,111.2823);
   hNCpi0inFVres_stack_7->SetBinContent(16,109.3683);
   hNCpi0inFVres_stack_7->SetBinContent(17,105.7429);
   hNCpi0inFVres_stack_7->SetBinContent(18,96.98859);
   hNCpi0inFVres_stack_7->SetBinContent(19,100.0598);
   hNCpi0inFVres_stack_7->SetBinContent(20,105.4427);
   hNCpi0inFVres_stack_7->SetBinContent(21,96.17509);
   hNCpi0inFVres_stack_7->SetBinContent(22,92.18987);
   hNCpi0inFVres_stack_7->SetBinContent(23,78.7393);
   hNCpi0inFVres_stack_7->SetBinContent(24,47.33281);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.222247);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.08536567);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.9384608);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2300661);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04480907);
   hNCpi0inFVres_stack_7->SetBinError(2,0.850739);
   hNCpi0inFVres_stack_7->SetBinError(3,1.82803);
   hNCpi0inFVres_stack_7->SetBinError(4,2.603189);
   hNCpi0inFVres_stack_7->SetBinError(5,3.182102);
   hNCpi0inFVres_stack_7->SetBinError(6,3.266993);
   hNCpi0inFVres_stack_7->SetBinError(7,3.599694);
   hNCpi0inFVres_stack_7->SetBinError(8,3.669445);
   hNCpi0inFVres_stack_7->SetBinError(9,3.41886);
   hNCpi0inFVres_stack_7->SetBinError(10,3.540395);
   hNCpi0inFVres_stack_7->SetBinError(11,3.493185);
   hNCpi0inFVres_stack_7->SetBinError(12,3.375515);
   hNCpi0inFVres_stack_7->SetBinError(13,3.530707);
   hNCpi0inFVres_stack_7->SetBinError(14,3.278249);
   hNCpi0inFVres_stack_7->SetBinError(15,3.510332);
   hNCpi0inFVres_stack_7->SetBinError(16,3.476879);
   hNCpi0inFVres_stack_7->SetBinError(17,3.382775);
   hNCpi0inFVres_stack_7->SetBinError(18,3.051321);
   hNCpi0inFVres_stack_7->SetBinError(19,3.137988);
   hNCpi0inFVres_stack_7->SetBinError(20,3.400051);
   hNCpi0inFVres_stack_7->SetBinError(21,3.212635);
   hNCpi0inFVres_stack_7->SetBinError(22,3.188637);
   hNCpi0inFVres_stack_7->SetBinError(23,2.974273);
   hNCpi0inFVres_stack_7->SetBinError(24,2.311987);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8726969);
   hNCpi0inFVres_stack_7->SetBinError(26,0.05645402);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2644362);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2908367);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7137824);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.300881);
   hNCpi0inFVdis_stack_8->SetBinContent(4,16.72033);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.23863);
   hNCpi0inFVdis_stack_8->SetBinContent(6,23.2803);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.35398);
   hNCpi0inFVdis_stack_8->SetBinContent(8,25.35917);
   hNCpi0inFVdis_stack_8->SetBinContent(9,24.89667);
   hNCpi0inFVdis_stack_8->SetBinContent(10,23.20337);
   hNCpi0inFVdis_stack_8->SetBinContent(11,23.07502);
   hNCpi0inFVdis_stack_8->SetBinContent(12,23.49043);
   hNCpi0inFVdis_stack_8->SetBinContent(13,24.30429);
   hNCpi0inFVdis_stack_8->SetBinContent(14,27.58655);
   hNCpi0inFVdis_stack_8->SetBinContent(15,22.94769);
   hNCpi0inFVdis_stack_8->SetBinContent(16,23.66466);
   hNCpi0inFVdis_stack_8->SetBinContent(17,22.8516);
   hNCpi0inFVdis_stack_8->SetBinContent(18,22.02464);
   hNCpi0inFVdis_stack_8->SetBinContent(19,21.58066);
   hNCpi0inFVdis_stack_8->SetBinContent(20,23.27531);
   hNCpi0inFVdis_stack_8->SetBinContent(21,21.50354);
   hNCpi0inFVdis_stack_8->SetBinContent(22,17.15035);
   hNCpi0inFVdis_stack_8->SetBinContent(23,18.63277);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.4217);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.128867);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.3140733);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2050125);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2445148);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7823202);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.33711);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.617326);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.733891);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.746972);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.774422);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.814734);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.740859);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.57088);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.652878);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.64777);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.833493);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.508853);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.738023);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.637083);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.647518);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.70352);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.756339);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.584635);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.417871);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.681961);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.110741);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.4596117);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.01830775);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2964059);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2304141);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1287352);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05791663);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.03399719);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09705318);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.0341084);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1838965);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1469646);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1115193);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04504768);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02411083);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06673559);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02419538);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.134892);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(2,4.35117);
   hCCpi0inFV_stack_10->SetBinContent(3,24.122);
   hCCpi0inFV_stack_10->SetBinContent(4,45.30775);
   hCCpi0inFV_stack_10->SetBinContent(5,49.75274);
   hCCpi0inFV_stack_10->SetBinContent(6,50.89481);
   hCCpi0inFV_stack_10->SetBinContent(7,48.21054);
   hCCpi0inFV_stack_10->SetBinContent(8,55.201);
   hCCpi0inFV_stack_10->SetBinContent(9,48.45494);
   hCCpi0inFV_stack_10->SetBinContent(10,55.78577);
   hCCpi0inFV_stack_10->SetBinContent(11,51.02636);
   hCCpi0inFV_stack_10->SetBinContent(12,56.22915);
   hCCpi0inFV_stack_10->SetBinContent(13,55.57158);
   hCCpi0inFV_stack_10->SetBinContent(14,54.74953);
   hCCpi0inFV_stack_10->SetBinContent(15,49.56165);
   hCCpi0inFV_stack_10->SetBinContent(16,59.22589);
   hCCpi0inFV_stack_10->SetBinContent(17,48.84348);
   hCCpi0inFV_stack_10->SetBinContent(18,55.70599);
   hCCpi0inFV_stack_10->SetBinContent(19,56.58519);
   hCCpi0inFV_stack_10->SetBinContent(20,50.90723);
   hCCpi0inFV_stack_10->SetBinContent(21,47.26471);
   hCCpi0inFV_stack_10->SetBinContent(22,45.68612);
   hCCpi0inFV_stack_10->SetBinContent(23,43.44879);
   hCCpi0inFV_stack_10->SetBinContent(24,29.76339);
   hCCpi0inFV_stack_10->SetBinContent(25,6.758391);
   hCCpi0inFV_stack_10->SetBinContent(26,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(0,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(2,0.9998562);
   hCCpi0inFV_stack_10->SetBinError(3,2.450193);
   hCCpi0inFV_stack_10->SetBinError(4,3.404489);
   hCCpi0inFV_stack_10->SetBinError(5,3.598372);
   hCCpi0inFV_stack_10->SetBinError(6,3.544983);
   hCCpi0inFV_stack_10->SetBinError(7,3.44661);
   hCCpi0inFV_stack_10->SetBinError(8,3.711341);
   hCCpi0inFV_stack_10->SetBinError(9,3.507868);
   hCCpi0inFV_stack_10->SetBinError(10,3.774347);
   hCCpi0inFV_stack_10->SetBinError(11,3.636202);
   hCCpi0inFV_stack_10->SetBinError(12,3.773802);
   hCCpi0inFV_stack_10->SetBinError(13,3.72122);
   hCCpi0inFV_stack_10->SetBinError(14,3.655425);
   hCCpi0inFV_stack_10->SetBinError(15,3.498788);
   hCCpi0inFV_stack_10->SetBinError(16,3.850477);
   hCCpi0inFV_stack_10->SetBinError(17,3.578079);
   hCCpi0inFV_stack_10->SetBinError(18,3.733296);
   hCCpi0inFV_stack_10->SetBinError(19,3.814814);
   hCCpi0inFV_stack_10->SetBinError(20,3.60881);
   hCCpi0inFV_stack_10->SetBinError(21,3.414962);
   hCCpi0inFV_stack_10->SetBinError(22,3.379462);
   hCCpi0inFV_stack_10->SetBinError(23,3.257633);
   hCCpi0inFV_stack_10->SetBinError(24,2.788585);
   hCCpi0inFV_stack_10->SetBinError(25,1.242992);
   hCCpi0inFV_stack_10->SetBinError(26,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.3669273);
   hNCinFV_stack_11->SetBinContent(2,1.116985);
   hNCinFV_stack_11->SetBinContent(3,10.26137);
   hNCinFV_stack_11->SetBinContent(4,16.00301);
   hNCinFV_stack_11->SetBinContent(5,21.52903);
   hNCinFV_stack_11->SetBinContent(6,21.13663);
   hNCinFV_stack_11->SetBinContent(7,29.75206);
   hNCinFV_stack_11->SetBinContent(8,22.89427);
   hNCinFV_stack_11->SetBinContent(9,24.41033);
   hNCinFV_stack_11->SetBinContent(10,26.91571);
   hNCinFV_stack_11->SetBinContent(11,26.81115);
   hNCinFV_stack_11->SetBinContent(12,26.21288);
   hNCinFV_stack_11->SetBinContent(13,24.74395);
   hNCinFV_stack_11->SetBinContent(14,27.20319);
   hNCinFV_stack_11->SetBinContent(15,26.9678);
   hNCinFV_stack_11->SetBinContent(16,22.10714);
   hNCinFV_stack_11->SetBinContent(17,28.88012);
   hNCinFV_stack_11->SetBinContent(18,25.95414);
   hNCinFV_stack_11->SetBinContent(19,26.37406);
   hNCinFV_stack_11->SetBinContent(20,24.29764);
   hNCinFV_stack_11->SetBinContent(21,26.4176);
   hNCinFV_stack_11->SetBinContent(22,23.14522);
   hNCinFV_stack_11->SetBinContent(23,17.08142);
   hNCinFV_stack_11->SetBinContent(24,11.51895);
   hNCinFV_stack_11->SetBinContent(25,2.602446);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.2601327);
   hNCinFV_stack_11->SetBinError(2,0.5221441);
   hNCinFV_stack_11->SetBinError(3,1.624926);
   hNCinFV_stack_11->SetBinError(4,2.025111);
   hNCinFV_stack_11->SetBinError(5,2.418646);
   hNCinFV_stack_11->SetBinError(6,2.416263);
   hNCinFV_stack_11->SetBinError(7,3.13785);
   hNCinFV_stack_11->SetBinError(8,2.539685);
   hNCinFV_stack_11->SetBinError(9,2.749289);
   hNCinFV_stack_11->SetBinError(10,2.998301);
   hNCinFV_stack_11->SetBinError(11,2.718874);
   hNCinFV_stack_11->SetBinError(12,2.668147);
   hNCinFV_stack_11->SetBinError(13,2.775625);
   hNCinFV_stack_11->SetBinError(14,2.984201);
   hNCinFV_stack_11->SetBinError(15,2.939995);
   hNCinFV_stack_11->SetBinError(16,2.378379);
   hNCinFV_stack_11->SetBinError(17,2.976371);
   hNCinFV_stack_11->SetBinError(18,2.723316);
   hNCinFV_stack_11->SetBinError(19,2.70637);
   hNCinFV_stack_11->SetBinError(20,2.820198);
   hNCinFV_stack_11->SetBinError(21,2.760246);
   hNCinFV_stack_11->SetBinError(22,2.602485);
   hNCinFV_stack_11->SetBinError(23,2.248455);
   hNCinFV_stack_11->SetBinError(24,1.809397);
   hNCinFV_stack_11->SetBinError(25,0.8589719);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.8282892);
   hnumuCCinFV_stack_12->SetBinContent(3,11.40613);
   hnumuCCinFV_stack_12->SetBinContent(4,20.29889);
   hnumuCCinFV_stack_12->SetBinContent(5,28.88849);
   hnumuCCinFV_stack_12->SetBinContent(6,31.2894);
   hnumuCCinFV_stack_12->SetBinContent(7,30.48063);
   hnumuCCinFV_stack_12->SetBinContent(8,31.95706);
   hnumuCCinFV_stack_12->SetBinContent(9,27.318);
   hnumuCCinFV_stack_12->SetBinContent(10,30.59964);
   hnumuCCinFV_stack_12->SetBinContent(11,26.67398);
   hnumuCCinFV_stack_12->SetBinContent(12,29.64878);
   hnumuCCinFV_stack_12->SetBinContent(13,34.89494);
   hnumuCCinFV_stack_12->SetBinContent(14,35.32025);
   hnumuCCinFV_stack_12->SetBinContent(15,31.72361);
   hnumuCCinFV_stack_12->SetBinContent(16,36.3527);
   hnumuCCinFV_stack_12->SetBinContent(17,30.90828);
   hnumuCCinFV_stack_12->SetBinContent(18,31.82309);
   hnumuCCinFV_stack_12->SetBinContent(19,32.81699);
   hnumuCCinFV_stack_12->SetBinContent(20,29.84427);
   hnumuCCinFV_stack_12->SetBinContent(21,32.41328);
   hnumuCCinFV_stack_12->SetBinContent(22,34.63768);
   hnumuCCinFV_stack_12->SetBinContent(23,26.07269);
   hnumuCCinFV_stack_12->SetBinContent(24,19.61294);
   hnumuCCinFV_stack_12->SetBinContent(25,7.294386);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.4846751);
   hnumuCCinFV_stack_12->SetBinError(3,2.138422);
   hnumuCCinFV_stack_12->SetBinError(4,2.377204);
   hnumuCCinFV_stack_12->SetBinError(5,3.309234);
   hnumuCCinFV_stack_12->SetBinError(6,3.35581);
   hnumuCCinFV_stack_12->SetBinError(7,3.069218);
   hnumuCCinFV_stack_12->SetBinError(8,3.310107);
   hnumuCCinFV_stack_12->SetBinError(9,2.79914);
   hnumuCCinFV_stack_12->SetBinError(10,2.959394);
   hnumuCCinFV_stack_12->SetBinError(11,2.941289);
   hnumuCCinFV_stack_12->SetBinError(12,3.140366);
   hnumuCCinFV_stack_12->SetBinError(13,3.101832);
   hnumuCCinFV_stack_12->SetBinError(14,3.468202);
   hnumuCCinFV_stack_12->SetBinError(15,3.075441);
   hnumuCCinFV_stack_12->SetBinError(16,3.289919);
   hnumuCCinFV_stack_12->SetBinError(17,3.50291);
   hnumuCCinFV_stack_12->SetBinError(18,3.222468);
   hnumuCCinFV_stack_12->SetBinError(19,3.733455);
   hnumuCCinFV_stack_12->SetBinError(20,3.624845);
   hnumuCCinFV_stack_12->SetBinError(21,3.327477);
   hnumuCCinFV_stack_12->SetBinError(22,4.055696);
   hnumuCCinFV_stack_12->SetBinError(23,2.863878);
   hnumuCCinFV_stack_12->SetBinError(24,2.353951);
   hnumuCCinFV_stack_12->SetBinError(25,1.62382);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,2.626366);
   hnueCCinFV_stack_13->SetBinContent(5,2.26864);
   hnueCCinFV_stack_13->SetBinContent(6,1.412022);
   hnueCCinFV_stack_13->SetBinContent(7,2.745347);
   hnueCCinFV_stack_13->SetBinContent(8,2.82998);
   hnueCCinFV_stack_13->SetBinContent(9,3.75881);
   hnueCCinFV_stack_13->SetBinContent(10,4.145804);
   hnueCCinFV_stack_13->SetBinContent(11,2.856534);
   hnueCCinFV_stack_13->SetBinContent(12,2.706588);
   hnueCCinFV_stack_13->SetBinContent(13,3.057607);
   hnueCCinFV_stack_13->SetBinContent(14,3.070236);
   hnueCCinFV_stack_13->SetBinContent(15,1.387663);
   hnueCCinFV_stack_13->SetBinContent(16,4.153312);
   hnueCCinFV_stack_13->SetBinContent(17,0.9549253);
   hnueCCinFV_stack_13->SetBinContent(18,1.940396);
   hnueCCinFV_stack_13->SetBinContent(19,1.654885);
   hnueCCinFV_stack_13->SetBinContent(20,3.020362);
   hnueCCinFV_stack_13->SetBinContent(21,2.236554);
   hnueCCinFV_stack_13->SetBinContent(22,1.620112);
   hnueCCinFV_stack_13->SetBinContent(23,2.419914);
   hnueCCinFV_stack_13->SetBinContent(24,1.547013);
   hnueCCinFV_stack_13->SetBinContent(25,0.6073536);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,1.35372);
   hnueCCinFV_stack_13->SetBinError(5,0.857947);
   hnueCCinFV_stack_13->SetBinError(6,0.5901349);
   hnueCCinFV_stack_13->SetBinError(7,0.9034199);
   hnueCCinFV_stack_13->SetBinError(8,0.9477483);
   hnueCCinFV_stack_13->SetBinError(9,1.194345);
   hnueCCinFV_stack_13->SetBinError(10,1.78532);
   hnueCCinFV_stack_13->SetBinError(11,0.8507104);
   hnueCCinFV_stack_13->SetBinError(12,1.009623);
   hnueCCinFV_stack_13->SetBinError(13,1.609843);
   hnueCCinFV_stack_13->SetBinError(14,1.041461);
   hnueCCinFV_stack_13->SetBinError(15,0.8080418);
   hnueCCinFV_stack_13->SetBinError(16,1.416304);
   hnueCCinFV_stack_13->SetBinError(17,0.4920324);
   hnueCCinFV_stack_13->SetBinError(18,0.7063808);
   hnueCCinFV_stack_13->SetBinError(19,0.6382314);
   hnueCCinFV_stack_13->SetBinError(20,1.421725);
   hnueCCinFV_stack_13->SetBinError(21,0.780187);
   hnueCCinFV_stack_13->SetBinError(22,0.7152424);
   hnueCCinFV_stack_13->SetBinError(23,0.9644046);
   hnueCCinFV_stack_13->SetBinError(24,0.8450843);
   hnueCCinFV_stack_13->SetBinError(25,0.4462229);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__2->SetBinContent(0,4.605323);
   hmcerror__2->SetBinContent(1,2.671533);
   hmcerror__2->SetBinContent(2,56.93974);
   hmcerror__2->SetBinContent(3,145.5138);
   hmcerror__2->SetBinContent(4,234.1233);
   hmcerror__2->SetBinContent(5,283.3836);
   hmcerror__2->SetBinContent(6,280.0717);
   hmcerror__2->SetBinContent(7,305.862);
   hmcerror__2->SetBinContent(8,309.6675);
   hmcerror__2->SetBinContent(9,296.6238);
   hmcerror__2->SetBinContent(10,318.3759);
   hmcerror__2->SetBinContent(11,304.2628);
   hmcerror__2->SetBinContent(12,301.3267);
   hmcerror__2->SetBinContent(13,318.2214);
   hmcerror__2->SetBinContent(14,309.8796);
   hmcerror__2->SetBinContent(15,304.4759);
   hmcerror__2->SetBinContent(16,321.5533);
   hmcerror__2->SetBinContent(17,321.2437);
   hmcerror__2->SetBinContent(18,320.2745);
   hmcerror__2->SetBinContent(19,331.2292);
   hmcerror__2->SetBinContent(20,334.6175);
   hmcerror__2->SetBinContent(21,342.4562);
   hmcerror__2->SetBinContent(22,343.5553);
   hmcerror__2->SetBinContent(23,321.6396);
   hmcerror__2->SetBinContent(24,241.6004);
   hmcerror__2->SetBinContent(25,117.2261);
   hmcerror__2->SetBinContent(26,4.43807);
   hmcerror__2->SetBinContent(27,3.264999);
   hmcerror__2->SetBinError(0,1.087694);
   hmcerror__2->SetBinError(1,5.777614);
   hmcerror__2->SetBinError(2,26.61688);
   hmcerror__2->SetBinError(3,43.91745);
   hmcerror__2->SetBinError(4,75.85796);
   hmcerror__2->SetBinError(5,77.8986);
   hmcerror__2->SetBinError(6,81.31198);
   hmcerror__2->SetBinError(7,88.84133);
   hmcerror__2->SetBinError(8,87.58859);
   hmcerror__2->SetBinError(9,82.52147);
   hmcerror__2->SetBinError(10,82.88326);
   hmcerror__2->SetBinError(11,85.03995);
   hmcerror__2->SetBinError(12,82.92983);
   hmcerror__2->SetBinError(13,81.5788);
   hmcerror__2->SetBinError(14,90.01006);
   hmcerror__2->SetBinError(15,78.68726);
   hmcerror__2->SetBinError(16,83.0142);
   hmcerror__2->SetBinError(17,80.1192);
   hmcerror__2->SetBinError(18,78.69007);
   hmcerror__2->SetBinError(19,79.04456);
   hmcerror__2->SetBinError(20,81.21623);
   hmcerror__2->SetBinError(21,78.65659);
   hmcerror__2->SetBinError(22,78.11267);
   hmcerror__2->SetBinError(23,65.42753);
   hmcerror__2->SetBinError(24,50.68286);
   hmcerror__2->SetBinError(25,31.57225);
   hmcerror__2->SetBinError(26,5.625615);
   hmcerror__2->SetBinError(27,4.335209);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[26] = {
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
   Double_t _fy3001[26] = {
   4,
   46,
   143,
   258,
   280,
   283,
   307,
   317,
   302,
   304,
   305,
   270,
   273,
   272,
   269,
   306,
   296,
   292,
   304,
   301,
   327,
   352,
   302,
   239,
   82,
   2};
   Double_t _felx3001[26] = {
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
   Double_t _fely3001[26] = {
   2.29683,
   6.9153,
   11.95826,
   16.06238,
   16.7332,
   16.8226,
   17.52142,
   17.80449,
   17.37815,
   17.4356,
   17.46425,
   16.43168,
   16.52271,
   16.49242,
   16.40122,
   17.49286,
   17.20465,
   17.08801,
   17.4356,
   17.34935,
   18.08314,
   18.76166,
   17.37815,
   15.45962,
   9.1791,
   2};
   Double_t _fehx3001[26] = {
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
   Double_t _fehy3001[26] = {
   1.98186,
   6.7108,
   11.95826,
   16.06238,
   16.7332,
   16.8226,
   17.52142,
   17.80449,
   17.37815,
   17.4356,
   17.46425,
   16.43168,
   16.52271,
   16.49242,
   16.40122,
   17.49286,
   17.20465,
   17.08801,
   17.4356,
   17.34935,
   18.08314,
   18.76166,
   17.37815,
   15.45962,
   8.9774,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(407.8378);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.4/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6436.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 753.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 72.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 677.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2170.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  472.7","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1093.8","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 514.9","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.4","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_reco_nuvtxY_all");
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
   
   Double_t _fx3002[26] = {
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
   Double_t _fy3002[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[26] = {
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
   Double_t _fely3002[26] = {
   2.162658,
   0.467457,
   0.3018096,
   0.3240086,
   0.2748874,
   0.2903255,
   0.2904621,
   0.2828472,
   0.2782024,
   0.2603314,
   0.2794951,
   0.2752157,
   0.2563586,
   0.2904678,
   0.2584351,
   0.2581663,
   0.2494032,
   0.2456957,
   0.2386401,
   0.2427137,
   0.2296837,
   0.2273657,
   0.2034188,
   0.2097797,
   0.2693278,
   1.267582};
   Double_t _fehx3002[26] = {
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
   Double_t _fehy3002[26] = {
   2.162658,
   0.467457,
   0.3018096,
   0.3240086,
   0.2748874,
   0.2903255,
   0.2904621,
   0.2828472,
   0.2782024,
   0.2603314,
   0.2794951,
   0.2752157,
   0.2563586,
   0.2904678,
   0.2584351,
   0.2581663,
   0.2494032,
   0.2456957,
   0.2386401,
   0.2427137,
   0.2296837,
   0.2273657,
   0.2034188,
   0.2097797,
   0.2693278,
   1.267582};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
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
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[26] = {
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
   Double_t _fy3003[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[26] = {
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
   Double_t _fely3003[26] = {
   0.4522188,
   0.2441715,
   0.2599166,
   0.2920031,
   0.2583084,
   0.2715892,
   0.2754477,
   0.2676102,
   0.2627872,
   0.2443157,
   0.264052,
   0.2574908,
   0.2448747,
   0.2582322,
   0.2425156,
   0.2382504,
   0.235685,
   0.2321071,
   0.2281771,
   0.2286781,
   0.2091131,
   0.2163445,
   0.1921837,
   0.1903257,
   0.1871593,
   0.3554016};
   Double_t _fehx3003[26] = {
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
   Double_t _fehy3003[26] = {
   0.4522188,
   0.2441715,
   0.2599166,
   0.2920031,
   0.2583084,
   0.2715892,
   0.2754477,
   0.2676102,
   0.2627872,
   0.2443157,
   0.264052,
   0.2574908,
   0.2448747,
   0.2582322,
   0.2425156,
   0.2382504,
   0.235685,
   0.2321071,
   0.2281771,
   0.2286781,
   0.2091131,
   0.2163445,
   0.1921837,
   0.1903257,
   0.1871593,
   0.3554016};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
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
   
   Double_t _fx3004[26] = {
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
   Double_t _fy3004[26] = {
   1.497268,
   0.8078717,
   0.9827247,
   1.101983,
   0.9880599,
   1.010455,
   1.003721,
   1.023678,
   1.018125,
   0.954846,
   1.002423,
   0.8960375,
   0.8578933,
   0.8777602,
   0.8834853,
   0.9516309,
   0.9214187,
   0.9117179,
   0.9177935,
   0.8995346,
   0.9548666,
   1.02458,
   0.9389391,
   0.9892366,
   0.6995029,
   0.4506464};
   Double_t _felx3004[26] = {
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
   Double_t _fely3004[26] = {
   0.8597423,
   0.1214495,
   0.08217957,
   0.06860649,
   0.05904787,
   0.06006534,
   0.05728536,
   0.05749551,
   0.05858649,
   0.05476417,
   0.05739857,
   0.05453111,
   0.05192207,
   0.05322203,
   0.05386705,
   0.05440112,
   0.05355638,
   0.05335425,
   0.05263907,
   0.05184831,
   0.05280424,
   0.05461032,
   0.05402987,
   0.06398839,
   0.07830253,
   0.4506464};
   Double_t _fehx3004[26] = {
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
   Double_t _fehy3004[26] = {
   0.7418437,
   0.1178579,
   0.08217957,
   0.06860649,
   0.05904787,
   0.06006534,
   0.05728536,
   0.05749551,
   0.05858649,
   0.05476417,
   0.05739857,
   0.05453111,
   0.05192207,
   0.05322203,
   0.05386705,
   0.05440112,
   0.05355638,
   0.05335425,
   0.05263907,
   0.05184831,
   0.05280424,
   0.05461032,
   0.05402987,
   0.06398839,
   0.07658192,
   0.3423042};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.463022);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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
