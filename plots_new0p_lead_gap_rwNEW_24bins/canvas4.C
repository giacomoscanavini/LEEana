#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 15:31:57 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
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
   pad1->Range(-13.84615,-40.92514,101.5385,4525.459);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__10->SetBinContent(1,2046.257);
   hmc__10->SetBinContent(2,341.0904);
   hmc__10->SetBinContent(3,319.2692);
   hmc__10->SetBinContent(4,290.4888);
   hmc__10->SetBinContent(5,267.6927);
   hmc__10->SetBinContent(6,230.3277);
   hmc__10->SetBinContent(7,210.7281);
   hmc__10->SetBinContent(8,162.0616);
   hmc__10->SetBinContent(9,130.6567);
   hmc__10->SetBinContent(10,103.6345);
   hmc__10->SetBinContent(11,106.0904);
   hmc__10->SetBinContent(12,85.18999);
   hmc__10->SetBinContent(13,76.06957);
   hmc__10->SetBinContent(14,59.31129);
   hmc__10->SetBinContent(15,53.54271);
   hmc__10->SetBinContent(16,36.46239);
   hmc__10->SetBinContent(17,30.79079);
   hmc__10->SetBinContent(18,30.28474);
   hmc__10->SetBinContent(19,24.61513);
   hmc__10->SetBinContent(20,24.4799);
   hmc__10->SetBinContent(21,21.23687);
   hmc__10->SetBinContent(22,15.31838);
   hmc__10->SetBinContent(23,13.99318);
   hmc__10->SetBinContent(24,6.745797);
   hmc__10->SetBinContent(25,150.9252);
   hmc__10->SetBinError(1,448.6005);
   hmc__10->SetBinError(2,91.47702);
   hmc__10->SetBinError(3,87.04487);
   hmc__10->SetBinError(4,73.36115);
   hmc__10->SetBinError(5,64.18345);
   hmc__10->SetBinError(6,66.78733);
   hmc__10->SetBinError(7,50.83786);
   hmc__10->SetBinError(8,42.00526);
   hmc__10->SetBinError(9,34.43161);
   hmc__10->SetBinError(10,30.66798);
   hmc__10->SetBinError(11,33.18348);
   hmc__10->SetBinError(12,26.53178);
   hmc__10->SetBinError(13,23.54789);
   hmc__10->SetBinError(14,20.35585);
   hmc__10->SetBinError(15,20.97186);
   hmc__10->SetBinError(16,15.01608);
   hmc__10->SetBinError(17,14.40048);
   hmc__10->SetBinError(18,15.3725);
   hmc__10->SetBinError(19,10.74114);
   hmc__10->SetBinError(20,10.94762);
   hmc__10->SetBinError(21,12.06392);
   hmc__10->SetBinError(22,8.404059);
   hmc__10->SetBinError(23,9.095972);
   hmc__10->SetBinError(24,4.747801);
   hmc__10->SetBinError(25,48.50292);
   hmc__10->SetMinimum(-40.92514);
   hmc__10->SetMaximum(4297.14);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,90);
   hs4_stack_4->SetMinimum(-4.228303e-08);
   hs4_stack_4->SetMaximum(2148.57);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,42.82048);
   hbadmatch_stack_1->SetBinContent(2,6.257837);
   hbadmatch_stack_1->SetBinContent(3,6.085752);
   hbadmatch_stack_1->SetBinContent(4,6.700276);
   hbadmatch_stack_1->SetBinContent(5,3.370529);
   hbadmatch_stack_1->SetBinContent(6,5.448247);
   hbadmatch_stack_1->SetBinContent(7,4.689373);
   hbadmatch_stack_1->SetBinContent(8,1.957548);
   hbadmatch_stack_1->SetBinContent(9,3.261563);
   hbadmatch_stack_1->SetBinContent(10,4.544742);
   hbadmatch_stack_1->SetBinContent(11,2.053253);
   hbadmatch_stack_1->SetBinContent(12,5.598283);
   hbadmatch_stack_1->SetBinContent(13,2.05365);
   hbadmatch_stack_1->SetBinContent(14,2.026191);
   hbadmatch_stack_1->SetBinContent(15,2.644128);
   hbadmatch_stack_1->SetBinContent(16,1.019362);
   hbadmatch_stack_1->SetBinContent(17,0.655527);
   hbadmatch_stack_1->SetBinContent(18,2.324332);
   hbadmatch_stack_1->SetBinContent(19,1.171339);
   hbadmatch_stack_1->SetBinContent(20,0.8508227);
   hbadmatch_stack_1->SetBinContent(21,1.159307);
   hbadmatch_stack_1->SetBinContent(22,1.859811);
   hbadmatch_stack_1->SetBinContent(23,0.9646727);
   hbadmatch_stack_1->SetBinContent(24,0.2449751);
   hbadmatch_stack_1->SetBinContent(25,12.65992);
   hbadmatch_stack_1->SetBinError(1,3.490474);
   hbadmatch_stack_1->SetBinError(2,1.275307);
   hbadmatch_stack_1->SetBinError(3,1.985702);
   hbadmatch_stack_1->SetBinError(4,1.619626);
   hbadmatch_stack_1->SetBinError(5,0.8553994);
   hbadmatch_stack_1->SetBinError(6,1.218534);
   hbadmatch_stack_1->SetBinError(7,1.102917);
   hbadmatch_stack_1->SetBinError(8,0.724081);
   hbadmatch_stack_1->SetBinError(9,0.9717149);
   hbadmatch_stack_1->SetBinError(10,1.254779);
   hbadmatch_stack_1->SetBinError(11,0.9554533);
   hbadmatch_stack_1->SetBinError(12,2.197386);
   hbadmatch_stack_1->SetBinError(13,0.7501768);
   hbadmatch_stack_1->SetBinError(14,0.7390173);
   hbadmatch_stack_1->SetBinError(15,0.7855485);
   hbadmatch_stack_1->SetBinError(16,0.5487341);
   hbadmatch_stack_1->SetBinError(17,0.382215);
   hbadmatch_stack_1->SetBinError(18,0.7141715);
   hbadmatch_stack_1->SetBinError(19,0.6172285);
   hbadmatch_stack_1->SetBinError(20,0.5353515);
   hbadmatch_stack_1->SetBinError(21,0.5332538);
   hbadmatch_stack_1->SetBinError(22,0.7364651);
   hbadmatch_stack_1->SetBinError(23,0.4966158);
   hbadmatch_stack_1->SetBinError(24,0.2449751);
   hbadmatch_stack_1->SetBinError(25,2.463739);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,212.4468);
   hext_stack_2->SetBinContent(2,27.00655);
   hext_stack_2->SetBinContent(3,27.14336);
   hext_stack_2->SetBinContent(4,27.44622);
   hext_stack_2->SetBinContent(5,27.74473);
   hext_stack_2->SetBinContent(6,21.64738);
   hext_stack_2->SetBinContent(7,21.27826);
   hext_stack_2->SetBinContent(8,15.72439);
   hext_stack_2->SetBinContent(9,12.15879);
   hext_stack_2->SetBinContent(10,4.703194);
   hext_stack_2->SetBinContent(11,10.04082);
   hext_stack_2->SetBinContent(12,10.18646);
   hext_stack_2->SetBinContent(13,11.1696);
   hext_stack_2->SetBinContent(14,6.978384);
   hext_stack_2->SetBinContent(15,5.199175);
   hext_stack_2->SetBinContent(16,2.014225);
   hext_stack_2->SetBinContent(17,2.428004);
   hext_stack_2->SetBinContent(18,3.386835);
   hext_stack_2->SetBinContent(19,2.345802);
   hext_stack_2->SetBinContent(20,3.64062);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,2.352983);
   hext_stack_2->SetBinContent(23,2.103607);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,23.19712);
   hext_stack_2->SetBinError(1,9.575969);
   hext_stack_2->SetBinError(2,3.298707);
   hext_stack_2->SetBinError(3,3.316426);
   hext_stack_2->SetBinError(4,3.421625);
   hext_stack_2->SetBinError(5,3.309203);
   hext_stack_2->SetBinError(6,2.990389);
   hext_stack_2->SetBinError(7,3.09402);
   hext_stack_2->SetBinError(8,2.55278);
   hext_stack_2->SetBinError(9,2.241159);
   hext_stack_2->SetBinError(10,1.389163);
   hext_stack_2->SetBinError(11,2.114809);
   hext_stack_2->SetBinError(12,2.204512);
   hext_stack_2->SetBinError(13,2.153613);
   hext_stack_2->SetBinError(14,1.673777);
   hext_stack_2->SetBinError(15,1.397849);
   hext_stack_2->SetBinError(16,1.045894);
   hext_stack_2->SetBinError(17,1.028599);
   hext_stack_2->SetBinError(18,1.332711);
   hext_stack_2->SetBinError(19,0.9989624);
   hext_stack_2->SetBinError(20,1.324834);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.8925942);
   hext_stack_2->SetBinError(23,0.9761052);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,2.97842);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,27.47285);
   hdirt_stack_3->SetBinContent(2,3.566571);
   hdirt_stack_3->SetBinContent(3,3.375362);
   hdirt_stack_3->SetBinContent(4,3.813075);
   hdirt_stack_3->SetBinContent(5,4.813118);
   hdirt_stack_3->SetBinContent(6,2.039774);
   hdirt_stack_3->SetBinContent(7,3.017996);
   hdirt_stack_3->SetBinContent(8,2.15813);
   hdirt_stack_3->SetBinContent(9,1.132148);
   hdirt_stack_3->SetBinContent(10,2.183235);
   hdirt_stack_3->SetBinContent(11,1.075665);
   hdirt_stack_3->SetBinContent(12,1.300933);
   hdirt_stack_3->SetBinContent(13,0.4713104);
   hdirt_stack_3->SetBinContent(14,1.274014);
   hdirt_stack_3->SetBinContent(15,0.6951543);
   hdirt_stack_3->SetBinContent(16,0.1567191);
   hdirt_stack_3->SetBinContent(17,0.4063629);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.2556058);
   hdirt_stack_3->SetBinContent(20,0.4336264);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.165479);
   hdirt_stack_3->SetBinContent(25,2.90669);
   hdirt_stack_3->SetBinError(1,2.987966);
   hdirt_stack_3->SetBinError(2,0.9402079);
   hdirt_stack_3->SetBinError(3,0.9237782);
   hdirt_stack_3->SetBinError(4,1.003552);
   hdirt_stack_3->SetBinError(5,1.136189);
   hdirt_stack_3->SetBinError(6,0.6958541);
   hdirt_stack_3->SetBinError(7,1.201037);
   hdirt_stack_3->SetBinError(8,0.7606892);
   hdirt_stack_3->SetBinError(9,0.5557528);
   hdirt_stack_3->SetBinError(10,0.8335795);
   hdirt_stack_3->SetBinError(11,0.6230365);
   hdirt_stack_3->SetBinError(12,0.5736152);
   hdirt_stack_3->SetBinError(13,0.3341085);
   hdirt_stack_3->SetBinError(14,0.6240675);
   hdirt_stack_3->SetBinError(15,0.4258516);
   hdirt_stack_3->SetBinError(16,0.1567191);
   hdirt_stack_3->SetBinError(17,0.2991412);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2556058);
   hdirt_stack_3->SetBinError(20,0.4336264);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.165479);
   hdirt_stack_3->SetBinError(25,0.9703031);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,228.4597);
   houtFV_stack_4->SetBinContent(2,32.60326);
   houtFV_stack_4->SetBinContent(3,35.59754);
   houtFV_stack_4->SetBinContent(4,29.83565);
   houtFV_stack_4->SetBinContent(5,33.1941);
   houtFV_stack_4->SetBinContent(6,31.72845);
   houtFV_stack_4->SetBinContent(7,30.809);
   houtFV_stack_4->SetBinContent(8,22.74074);
   houtFV_stack_4->SetBinContent(9,16.05733);
   houtFV_stack_4->SetBinContent(10,12.64847);
   houtFV_stack_4->SetBinContent(11,15.73182);
   houtFV_stack_4->SetBinContent(12,10.86333);
   houtFV_stack_4->SetBinContent(13,10.3602);
   houtFV_stack_4->SetBinContent(14,8.852857);
   houtFV_stack_4->SetBinContent(15,8.566143);
   houtFV_stack_4->SetBinContent(16,6.590805);
   houtFV_stack_4->SetBinContent(17,5.115206);
   houtFV_stack_4->SetBinContent(18,4.979061);
   houtFV_stack_4->SetBinContent(19,3.771167);
   houtFV_stack_4->SetBinContent(20,4.023684);
   houtFV_stack_4->SetBinContent(21,4.046258);
   houtFV_stack_4->SetBinContent(22,2.842659);
   houtFV_stack_4->SetBinContent(23,1.465526);
   houtFV_stack_4->SetBinContent(24,1.407209);
   houtFV_stack_4->SetBinContent(25,24.96143);
   houtFV_stack_4->SetBinError(1,7.566786);
   houtFV_stack_4->SetBinError(2,2.880174);
   houtFV_stack_4->SetBinError(3,3.013737);
   houtFV_stack_4->SetBinError(4,2.657336);
   houtFV_stack_4->SetBinError(5,2.921399);
   houtFV_stack_4->SetBinError(6,2.819367);
   houtFV_stack_4->SetBinError(7,3.111671);
   houtFV_stack_4->SetBinError(8,2.422078);
   houtFV_stack_4->SetBinError(9,1.929925);
   houtFV_stack_4->SetBinError(10,1.782322);
   houtFV_stack_4->SetBinError(11,1.991784);
   houtFV_stack_4->SetBinError(12,1.679699);
   houtFV_stack_4->SetBinError(13,1.623043);
   houtFV_stack_4->SetBinError(14,1.517195);
   houtFV_stack_4->SetBinError(15,1.496925);
   houtFV_stack_4->SetBinError(16,1.33947);
   houtFV_stack_4->SetBinError(17,1.127296);
   houtFV_stack_4->SetBinError(18,1.153681);
   houtFV_stack_4->SetBinError(19,0.9421226);
   houtFV_stack_4->SetBinError(20,0.9746832);
   houtFV_stack_4->SetBinError(21,1.018335);
   houtFV_stack_4->SetBinError(22,0.8969602);
   houtFV_stack_4->SetBinError(23,0.6209405);
   houtFV_stack_4->SetBinError(24,0.6049994);
   houtFV_stack_4->SetBinError(25,2.594311);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,50.75679);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.834036);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,8.054819);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.23119);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.3261);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.96556);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.931756);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.13253);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.040284);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.436685);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.980412);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9065858);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.300266);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6833858);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6961718);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.134362);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.360816);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8735275);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.868873);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8139431);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7768354);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7652677);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6375984);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.452824);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5955142);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2821229);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4960313);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2545655);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5246312);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2420254);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2155126);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5256813);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,5.006406);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.03214);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.032804);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.00324);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.045758);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6800831);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3749275);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3564798);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2962551);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3843256);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,734.5072);
   hNCpi0inFVres_stack_7->SetBinContent(2,126.8848);
   hNCpi0inFVres_stack_7->SetBinContent(3,120.9299);
   hNCpi0inFVres_stack_7->SetBinContent(4,106.2138);
   hNCpi0inFVres_stack_7->SetBinContent(5,96.58687);
   hNCpi0inFVres_stack_7->SetBinContent(6,79.91039);
   hNCpi0inFVres_stack_7->SetBinContent(7,72.07596);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.61032);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.17775);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.71056);
   hNCpi0inFVres_stack_7->SetBinContent(11,36.78414);
   hNCpi0inFVres_stack_7->SetBinContent(12,26.85636);
   hNCpi0inFVres_stack_7->SetBinContent(13,23.13517);
   hNCpi0inFVres_stack_7->SetBinContent(14,17.4472);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.76474);
   hNCpi0inFVres_stack_7->SetBinContent(16,13.33028);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.189607);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.279772);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.236422);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.390876);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.492836);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.97685);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.003839);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.868476);
   hNCpi0inFVres_stack_7->SetBinContent(25,33.59374);
   hNCpi0inFVres_stack_7->SetBinError(1,8.820498);
   hNCpi0inFVres_stack_7->SetBinError(2,3.707078);
   hNCpi0inFVres_stack_7->SetBinError(3,3.625145);
   hNCpi0inFVres_stack_7->SetBinError(4,3.370548);
   hNCpi0inFVres_stack_7->SetBinError(5,3.214669);
   hNCpi0inFVres_stack_7->SetBinError(6,2.893645);
   hNCpi0inFVres_stack_7->SetBinError(7,2.791094);
   hNCpi0inFVres_stack_7->SetBinError(8,2.44062);
   hNCpi0inFVres_stack_7->SetBinError(9,2.223925);
   hNCpi0inFVres_stack_7->SetBinError(10,1.953017);
   hNCpi0inFVres_stack_7->SetBinError(11,1.979722);
   hNCpi0inFVres_stack_7->SetBinError(12,1.723259);
   hNCpi0inFVres_stack_7->SetBinError(13,1.571521);
   hNCpi0inFVres_stack_7->SetBinError(14,1.369435);
   hNCpi0inFVres_stack_7->SetBinError(15,1.422685);
   hNCpi0inFVres_stack_7->SetBinError(16,1.226871);
   hNCpi0inFVres_stack_7->SetBinError(17,1.04216);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8882553);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8424917);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9156216);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7884392);
   hNCpi0inFVres_stack_7->SetBinError(22,0.753479);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7111832);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4212073);
   hNCpi0inFVres_stack_7->SetBinError(25,1.926061);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,148.7227);
   hNCpi0inFVdis_stack_8->SetBinContent(2,24.7439);
   hNCpi0inFVdis_stack_8->SetBinContent(3,27.00134);
   hNCpi0inFVdis_stack_8->SetBinContent(4,22.66004);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.26801);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.47392);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.9925);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.59034);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.191599);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.577462);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.385467);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.045763);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.542484);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.517496);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.06652);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.581931);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9481038);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.408121);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.761284);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.018522);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.184426);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.739354);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.844078);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.906225);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.589477);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.74438);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.561147);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.41032);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.230882);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.326877);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.127201);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.022555);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9813132);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7834453);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6914812);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6071643);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7311961);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5629238);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6112115);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2696619);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3038218);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5889423);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3652876);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3637747);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3047819);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2548204);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7854304);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.390768);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2089417);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,291.4571);
   hCCpi0inFV_stack_10->SetBinContent(2,55.36462);
   hCCpi0inFV_stack_10->SetBinContent(3,46.96628);
   hCCpi0inFV_stack_10->SetBinContent(4,42.52422);
   hCCpi0inFV_stack_10->SetBinContent(5,42.04793);
   hCCpi0inFV_stack_10->SetBinContent(6,40.64669);
   hCCpi0inFV_stack_10->SetBinContent(7,33.27737);
   hCCpi0inFV_stack_10->SetBinContent(8,31.5569);
   hCCpi0inFV_stack_10->SetBinContent(9,20.39757);
   hCCpi0inFV_stack_10->SetBinContent(10,18.35491);
   hCCpi0inFV_stack_10->SetBinContent(11,16.90153);
   hCCpi0inFV_stack_10->SetBinContent(12,10.80115);
   hCCpi0inFV_stack_10->SetBinContent(13,12.55634);
   hCCpi0inFV_stack_10->SetBinContent(14,10.00533);
   hCCpi0inFV_stack_10->SetBinContent(15,7.307778);
   hCCpi0inFV_stack_10->SetBinContent(16,6.224733);
   hCCpi0inFV_stack_10->SetBinContent(17,5.036597);
   hCCpi0inFV_stack_10->SetBinContent(18,4.547885);
   hCCpi0inFV_stack_10->SetBinContent(19,2.601002);
   hCCpi0inFV_stack_10->SetBinContent(20,3.225683);
   hCCpi0inFV_stack_10->SetBinContent(21,2.105544);
   hCCpi0inFV_stack_10->SetBinContent(22,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(23,1.175221);
   hCCpi0inFV_stack_10->SetBinContent(24,1.332012);
   hCCpi0inFV_stack_10->SetBinContent(25,20.76359);
   hCCpi0inFV_stack_10->SetBinError(1,8.541137);
   hCCpi0inFV_stack_10->SetBinError(2,3.773427);
   hCCpi0inFV_stack_10->SetBinError(3,3.451866);
   hCCpi0inFV_stack_10->SetBinError(4,3.294879);
   hCCpi0inFV_stack_10->SetBinError(5,3.236605);
   hCCpi0inFV_stack_10->SetBinError(6,3.224563);
   hCCpi0inFV_stack_10->SetBinError(7,2.906401);
   hCCpi0inFV_stack_10->SetBinError(8,2.767791);
   hCCpi0inFV_stack_10->SetBinError(9,2.189916);
   hCCpi0inFV_stack_10->SetBinError(10,2.154327);
   hCCpi0inFV_stack_10->SetBinError(11,2.063159);
   hCCpi0inFV_stack_10->SetBinError(12,1.587521);
   hCCpi0inFV_stack_10->SetBinError(13,1.80541);
   hCCpi0inFV_stack_10->SetBinError(14,1.642338);
   hCCpi0inFV_stack_10->SetBinError(15,1.357686);
   hCCpi0inFV_stack_10->SetBinError(16,1.126946);
   hCCpi0inFV_stack_10->SetBinError(17,1.110469);
   hCCpi0inFV_stack_10->SetBinError(18,1.019024);
   hCCpi0inFV_stack_10->SetBinError(19,0.8603369);
   hCCpi0inFV_stack_10->SetBinError(20,0.9412948);
   hCCpi0inFV_stack_10->SetBinError(21,0.6797106);
   hCCpi0inFV_stack_10->SetBinError(22,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(23,0.4797863);
   hCCpi0inFV_stack_10->SetBinError(24,0.6127937);
   hCCpi0inFV_stack_10->SetBinError(25,2.336243);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,141.5822);
   hNCinFV_stack_11->SetBinContent(2,23.85514);
   hNCinFV_stack_11->SetBinContent(3,18.13383);
   hNCinFV_stack_11->SetBinContent(4,17.92757);
   hNCinFV_stack_11->SetBinContent(5,13.6212);
   hNCinFV_stack_11->SetBinContent(6,11.59028);
   hNCinFV_stack_11->SetBinContent(7,12.59452);
   hNCinFV_stack_11->SetBinContent(8,7.712609);
   hNCinFV_stack_11->SetBinContent(9,8.889521);
   hNCinFV_stack_11->SetBinContent(10,5.66539);
   hNCinFV_stack_11->SetBinContent(11,8.696186);
   hNCinFV_stack_11->SetBinContent(12,7.074282);
   hNCinFV_stack_11->SetBinContent(13,4.678432);
   hNCinFV_stack_11->SetBinContent(14,3.08405);
   hNCinFV_stack_11->SetBinContent(15,2.840843);
   hNCinFV_stack_11->SetBinContent(16,2.342597);
   hNCinFV_stack_11->SetBinContent(17,2.055672);
   hNCinFV_stack_11->SetBinContent(18,2.305641);
   hNCinFV_stack_11->SetBinContent(19,2.394159);
   hNCinFV_stack_11->SetBinContent(20,2.053982);
   hNCinFV_stack_11->SetBinContent(21,1.707502);
   hNCinFV_stack_11->SetBinContent(22,0.3934307);
   hNCinFV_stack_11->SetBinContent(23,0.9303237);
   hNCinFV_stack_11->SetBinContent(24,0.5352025);
   hNCinFV_stack_11->SetBinContent(25,10.06812);
   hNCinFV_stack_11->SetBinError(1,5.918556);
   hNCinFV_stack_11->SetBinError(2,2.528018);
   hNCinFV_stack_11->SetBinError(3,2.0949);
   hNCinFV_stack_11->SetBinError(4,2.131798);
   hNCinFV_stack_11->SetBinError(5,1.871687);
   hNCinFV_stack_11->SetBinError(6,1.677158);
   hNCinFV_stack_11->SetBinError(7,1.830854);
   hNCinFV_stack_11->SetBinError(8,1.414892);
   hNCinFV_stack_11->SetBinError(9,1.494247);
   hNCinFV_stack_11->SetBinError(10,1.226202);
   hNCinFV_stack_11->SetBinError(11,1.481689);
   hNCinFV_stack_11->SetBinError(12,1.387855);
   hNCinFV_stack_11->SetBinError(13,1.144012);
   hNCinFV_stack_11->SetBinError(14,0.8083962);
   hNCinFV_stack_11->SetBinError(15,0.8098046);
   hNCinFV_stack_11->SetBinError(16,0.8097566);
   hNCinFV_stack_11->SetBinError(17,0.7082781);
   hNCinFV_stack_11->SetBinError(18,0.7085393);
   hNCinFV_stack_11->SetBinError(19,0.785313);
   hNCinFV_stack_11->SetBinError(20,0.7078105);
   hNCinFV_stack_11->SetBinError(21,0.6525383);
   hNCinFV_stack_11->SetBinError(22,0.2781975);
   hNCinFV_stack_11->SetBinError(23,0.4814682);
   hNCinFV_stack_11->SetBinError(24,0.3921167);
   hNCinFV_stack_11->SetBinError(25,1.569807);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,137.2403);
   hnumuCCinFV_stack_12->SetBinContent(2,32.25933);
   hnumuCCinFV_stack_12->SetBinContent(3,24.19983);
   hnumuCCinFV_stack_12->SetBinContent(4,24.58616);
   hnumuCCinFV_stack_12->SetBinContent(5,19.45081);
   hnumuCCinFV_stack_12->SetBinContent(6,14.00697);
   hnumuCCinFV_stack_12->SetBinContent(7,12.49056);
   hnumuCCinFV_stack_12->SetBinContent(8,8.600048);
   hnumuCCinFV_stack_12->SetBinContent(9,8.73658);
   hnumuCCinFV_stack_12->SetBinContent(10,7.033);
   hnumuCCinFV_stack_12->SetBinContent(11,6.008848);
   hnumuCCinFV_stack_12->SetBinContent(12,5.60435);
   hnumuCCinFV_stack_12->SetBinContent(13,4.393418);
   hnumuCCinFV_stack_12->SetBinContent(14,3.697002);
   hnumuCCinFV_stack_12->SetBinContent(15,4.454817);
   hnumuCCinFV_stack_12->SetBinContent(16,1.352451);
   hnumuCCinFV_stack_12->SetBinContent(17,4.60729);
   hnumuCCinFV_stack_12->SetBinContent(18,3.503706);
   hnumuCCinFV_stack_12->SetBinContent(19,1.548744);
   hnumuCCinFV_stack_12->SetBinContent(20,1.214331);
   hnumuCCinFV_stack_12->SetBinContent(21,3.509704);
   hnumuCCinFV_stack_12->SetBinContent(22,1.002038);
   hnumuCCinFV_stack_12->SetBinContent(23,1.999418);
   hnumuCCinFV_stack_12->SetBinContent(24,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(25,13.66404);
   hnumuCCinFV_stack_12->SetBinError(1,6.870076);
   hnumuCCinFV_stack_12->SetBinError(2,3.324412);
   hnumuCCinFV_stack_12->SetBinError(3,2.541935);
   hnumuCCinFV_stack_12->SetBinError(4,3.423772);
   hnumuCCinFV_stack_12->SetBinError(5,2.608541);
   hnumuCCinFV_stack_12->SetBinError(6,2.021873);
   hnumuCCinFV_stack_12->SetBinError(7,1.837754);
   hnumuCCinFV_stack_12->SetBinError(8,1.534389);
   hnumuCCinFV_stack_12->SetBinError(9,1.62069);
   hnumuCCinFV_stack_12->SetBinError(10,1.398899);
   hnumuCCinFV_stack_12->SetBinError(11,1.212673);
   hnumuCCinFV_stack_12->SetBinError(12,1.159656);
   hnumuCCinFV_stack_12->SetBinError(13,1.099163);
   hnumuCCinFV_stack_12->SetBinError(14,0.9549914);
   hnumuCCinFV_stack_12->SetBinError(15,1.715542);
   hnumuCCinFV_stack_12->SetBinError(16,0.5574795);
   hnumuCCinFV_stack_12->SetBinError(17,1.254856);
   hnumuCCinFV_stack_12->SetBinError(18,1.17869);
   hnumuCCinFV_stack_12->SetBinError(19,0.6607851);
   hnumuCCinFV_stack_12->SetBinError(20,0.6301746);
   hnumuCCinFV_stack_12->SetBinError(21,0.9635778);
   hnumuCCinFV_stack_12->SetBinError(22,0.5917788);
   hnumuCCinFV_stack_12->SetBinError(23,0.9926178);
   hnumuCCinFV_stack_12->SetBinError(24,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(25,2.140899);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,25.39386);
   hnueCCinFV_stack_13->SetBinContent(2,0.654338);
   hnueCCinFV_stack_13->SetBinContent(3,0.8744354);
   hnueCCinFV_stack_13->SetBinContent(4,1.517861);
   hnueCCinFV_stack_13->SetBinContent(5,1.238217);
   hnueCCinFV_stack_13->SetBinContent(6,1.74061);
   hnueCCinFV_stack_13->SetBinContent(7,0.9566132);
   hnueCCinFV_stack_13->SetBinContent(8,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(9,0.4182166);
   hnueCCinFV_stack_13->SetBinContent(10,1.372419);
   hnueCCinFV_stack_13->SetBinContent(12,0.6454452);
   hnueCCinFV_stack_13->SetBinContent(13,1.157431);
   hnueCCinFV_stack_13->SetBinContent(14,0.7174736);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,1.020507);
   hnueCCinFV_stack_13->SetBinError(1,3.37515);
   hnueCCinFV_stack_13->SetBinError(2,0.3788402);
   hnueCCinFV_stack_13->SetBinError(3,0.5347158);
   hnueCCinFV_stack_13->SetBinError(4,0.7137061);
   hnueCCinFV_stack_13->SetBinError(5,0.6329025);
   hnueCCinFV_stack_13->SetBinError(6,1.189702);
   hnueCCinFV_stack_13->SetBinError(7,0.4866822);
   hnueCCinFV_stack_13->SetBinError(8,0.4575996);
   hnueCCinFV_stack_13->SetBinError(9,0.293294);
   hnueCCinFV_stack_13->SetBinError(10,0.6626564);
   hnueCCinFV_stack_13->SetBinError(12,0.3756299);
   hnueCCinFV_stack_13->SetBinError(13,1.157431);
   hnueCCinFV_stack_13->SetBinError(14,0.5566696);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.5406067);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__11->SetBinContent(1,2046.257);
   hmcerror__11->SetBinContent(2,341.0904);
   hmcerror__11->SetBinContent(3,319.2692);
   hmcerror__11->SetBinContent(4,290.4888);
   hmcerror__11->SetBinContent(5,267.6927);
   hmcerror__11->SetBinContent(6,230.3277);
   hmcerror__11->SetBinContent(7,210.7281);
   hmcerror__11->SetBinContent(8,162.0616);
   hmcerror__11->SetBinContent(9,130.6567);
   hmcerror__11->SetBinContent(10,103.6345);
   hmcerror__11->SetBinContent(11,106.0904);
   hmcerror__11->SetBinContent(12,85.18999);
   hmcerror__11->SetBinContent(13,76.06957);
   hmcerror__11->SetBinContent(14,59.31129);
   hmcerror__11->SetBinContent(15,53.54271);
   hmcerror__11->SetBinContent(16,36.46239);
   hmcerror__11->SetBinContent(17,30.79079);
   hmcerror__11->SetBinContent(18,30.28474);
   hmcerror__11->SetBinContent(19,24.61513);
   hmcerror__11->SetBinContent(20,24.4799);
   hmcerror__11->SetBinContent(21,21.23687);
   hmcerror__11->SetBinContent(22,15.31838);
   hmcerror__11->SetBinContent(23,13.99318);
   hmcerror__11->SetBinContent(24,6.745797);
   hmcerror__11->SetBinContent(25,150.9252);
   hmcerror__11->SetBinError(1,448.6005);
   hmcerror__11->SetBinError(2,91.47702);
   hmcerror__11->SetBinError(3,87.04487);
   hmcerror__11->SetBinError(4,73.36115);
   hmcerror__11->SetBinError(5,64.18345);
   hmcerror__11->SetBinError(6,66.78733);
   hmcerror__11->SetBinError(7,50.83786);
   hmcerror__11->SetBinError(8,42.00526);
   hmcerror__11->SetBinError(9,34.43161);
   hmcerror__11->SetBinError(10,30.66798);
   hmcerror__11->SetBinError(11,33.18348);
   hmcerror__11->SetBinError(12,26.53178);
   hmcerror__11->SetBinError(13,23.54789);
   hmcerror__11->SetBinError(14,20.35585);
   hmcerror__11->SetBinError(15,20.97186);
   hmcerror__11->SetBinError(16,15.01608);
   hmcerror__11->SetBinError(17,14.40048);
   hmcerror__11->SetBinError(18,15.3725);
   hmcerror__11->SetBinError(19,10.74114);
   hmcerror__11->SetBinError(20,10.94762);
   hmcerror__11->SetBinError(21,12.06392);
   hmcerror__11->SetBinError(22,8.404059);
   hmcerror__11->SetBinError(23,9.095972);
   hmcerror__11->SetBinError(24,4.747801);
   hmcerror__11->SetBinError(25,48.50292);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[24] = {
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
   Double_t _fy3013[24] = {
   1990,
   307,
   315,
   270,
   199,
   255,
   190,
   146,
   124,
   118,
   93,
   68,
   61,
   57,
   40,
   50,
   26,
   33,
   26,
   27,
   21,
   14,
   10,
   12};
   Double_t _felx3013[24] = {
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
   Double_t _fely3013[24] = {
   44.60942,
   17.52142,
   17.74824,
   16.43168,
   14.10674,
   15.96872,
   13.78405,
   12.08305,
   11.13553,
   10.86278,
   9.7658,
   8.3726,
   7.9383,
   7.679,
   6.4604,
   7.2025,
   5.2453,
   5.8847,
   5.2453,
   5.3414,
   4.7354,
   3.9102,
   3.34883,
   3.64022};
   Double_t _fehx3013[24] = {
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
   Double_t _fehy3013[24] = {
   44.60942,
   17.52142,
   17.74824,
   16.43168,
   14.10674,
   15.96872,
   13.78405,
   12.08305,
   11.13553,
   10.86278,
   9.564,
   8.1701,
   7.7354,
   7.4757,
   6.2549,
   6.9985,
   5.0358,
   5.6776,
   5.0358,
   5.1322,
   4.5229,
   3.6898,
   3.1179,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,99);
   Graph_Graph3013->SetMinimum(5.986053);
   Graph_Graph3013->SetMaximum(2237.405);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 109.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 460.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 60.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 562.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  103.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1660.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  336.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 707.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 302.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 332.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 37.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
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
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
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
   Double_t _fely3014[24] = {
   0.2192298,
   0.26819,
   0.2726378,
   0.2525438,
   0.2397654,
   0.2899665,
   0.2412486,
   0.2591931,
   0.2635274,
   0.2959245,
   0.3127849,
   0.3114424,
   0.3095572,
   0.3432037,
   0.3916846,
   0.4118238,
   0.467688,
   0.5075989,
   0.4363632,
   0.4472083,
   0.5680649,
   0.5486257,
   0.6500291,
   0.7038162};
   Double_t _fehx3014[24] = {
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
   Double_t _fehy3014[24] = {
   0.2192298,
   0.26819,
   0.2726378,
   0.2525438,
   0.2397654,
   0.2899665,
   0.2412486,
   0.2591931,
   0.2635274,
   0.2959245,
   0.3127849,
   0.3114424,
   0.3095572,
   0.3432037,
   0.3916846,
   0.4118238,
   0.467688,
   0.5075989,
   0.4363632,
   0.4472083,
   0.5680649,
   0.5486257,
   0.6500291,
   0.7038162};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,99);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[24] = {
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
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
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
   Double_t _fely3015[24] = {
   0.2103442,
   0.2183746,
   0.2164366,
   0.2149915,
   0.210639,
   0.2128522,
   0.199122,
   0.2197734,
   0.2168356,
   0.2152709,
   0.2198392,
   0.1949662,
   0.2068731,
   0.2035593,
   0.2296014,
   0.2513383,
   0.2237305,
   0.2256643,
   0.2254509,
   0.2334911,
   0.2618417,
   0.2266154,
   0.2418646,
   0.3107825};
   Double_t _fehx3015[24] = {
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
   Double_t _fehy3015[24] = {
   0.2103442,
   0.2183746,
   0.2164366,
   0.2149915,
   0.210639,
   0.2128522,
   0.199122,
   0.2197734,
   0.2168356,
   0.2152709,
   0.2198392,
   0.1949662,
   0.2068731,
   0.2035593,
   0.2296014,
   0.2513383,
   0.2237305,
   0.2256643,
   0.2254509,
   0.2334911,
   0.2618417,
   0.2266154,
   0.2418646,
   0.3107825};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,99);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[24] = {
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
   Double_t _fy3016[24] = {
   0.9725073,
   0.9000547,
   0.9866281,
   0.9294678,
   0.7433896,
   1.107118,
   0.901636,
   0.9008918,
   0.9490523,
   1.138617,
   0.8766106,
   0.7982158,
   0.8018975,
   0.9610312,
   0.7470672,
   1.371276,
   0.8444084,
   1.089658,
   1.056261,
   1.102946,
   0.9888465,
   0.9139345,
   0.7146341,
   1.778885};
   Double_t _felx3016[24] = {
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
   Double_t _fely3016[24] = {
   0.02180049,
   0.05136883,
   0.0555902,
   0.05656561,
   0.05269749,
   0.06933042,
   0.06541155,
   0.07455833,
   0.08522741,
   0.1048182,
   0.09205166,
   0.09828149,
   0.1043558,
   0.1294694,
   0.1206588,
   0.1975323,
   0.1703529,
   0.1943124,
   0.2130925,
   0.2181953,
   0.2229802,
   0.2552619,
   0.2393188,
   0.5396278};
   Double_t _fehx3016[24] = {
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
   Double_t _fehy3016[24] = {
   0.02180049,
   0.05136883,
   0.0555902,
   0.05656561,
   0.05269749,
   0.06933042,
   0.06541155,
   0.07455833,
   0.08522741,
   0.1048182,
   0.09014951,
   0.09590445,
   0.1016885,
   0.1260418,
   0.1168208,
   0.1919375,
   0.1635489,
   0.1874739,
   0.2045815,
   0.2096495,
   0.212974,
   0.240874,
   0.2228158,
   0.5063153};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,99);
   Graph_Graph3016->SetMinimum(0.2943267);
   Graph_Graph3016->SetMaximum(2.466189);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
