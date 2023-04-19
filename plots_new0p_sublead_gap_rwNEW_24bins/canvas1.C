#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 16:38:19 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-13.84615,-23.70566,101.5385,2621.347);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__1->SetBinContent(1,1185.283);
   hmc__1->SetBinContent(2,507.986);
   hmc__1->SetBinContent(3,527.6054);
   hmc__1->SetBinContent(4,502.0235);
   hmc__1->SetBinContent(5,488.9858);
   hmc__1->SetBinContent(6,444.6278);
   hmc__1->SetBinContent(7,415.0779);
   hmc__1->SetBinContent(8,359.1513);
   hmc__1->SetBinContent(9,308.8904);
   hmc__1->SetBinContent(10,287.7949);
   hmc__1->SetBinContent(11,240.6137);
   hmc__1->SetBinContent(12,222.6331);
   hmc__1->SetBinContent(13,201.8433);
   hmc__1->SetBinContent(14,171.0934);
   hmc__1->SetBinContent(15,140.4897);
   hmc__1->SetBinContent(16,124.3573);
   hmc__1->SetBinContent(17,100.1753);
   hmc__1->SetBinContent(18,98.09872);
   hmc__1->SetBinContent(19,91.44395);
   hmc__1->SetBinContent(20,66.56836);
   hmc__1->SetBinContent(21,67.46341);
   hmc__1->SetBinContent(22,66.91219);
   hmc__1->SetBinContent(23,52.7114);
   hmc__1->SetBinContent(24,45.56426);
   hmc__1->SetBinContent(25,616.911);
   hmc__1->SetBinError(1,275.0441);
   hmc__1->SetBinError(2,143.0053);
   hmc__1->SetBinError(3,139.3985);
   hmc__1->SetBinError(4,136.6063);
   hmc__1->SetBinError(5,138.0057);
   hmc__1->SetBinError(6,115.8876);
   hmc__1->SetBinError(7,113.634);
   hmc__1->SetBinError(8,99.78288);
   hmc__1->SetBinError(9,81.45494);
   hmc__1->SetBinError(10,73.17811);
   hmc__1->SetBinError(11,62.15648);
   hmc__1->SetBinError(12,61.09312);
   hmc__1->SetBinError(13,51.65583);
   hmc__1->SetBinError(14,44.5275);
   hmc__1->SetBinError(15,40.0846);
   hmc__1->SetBinError(16,37.3669);
   hmc__1->SetBinError(17,27.89809);
   hmc__1->SetBinError(18,30.5515);
   hmc__1->SetBinError(19,31.83063);
   hmc__1->SetBinError(20,22.10054);
   hmc__1->SetBinError(21,20.87323);
   hmc__1->SetBinError(22,18.99756);
   hmc__1->SetBinError(23,26.4205);
   hmc__1->SetBinError(24,19.22835);
   hmc__1->SetBinError(25,145.0068);
   hmc__1->SetMinimum(-23.70566);
   hmc__1->SetMaximum(2489.094);
   hmc__1->SetEntries(7241.585);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,90);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(1244.547);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,32.548);
   hbadmatch_stack_1->SetBinContent(2,7.022005);
   hbadmatch_stack_1->SetBinContent(3,10.75217);
   hbadmatch_stack_1->SetBinContent(4,13.22302);
   hbadmatch_stack_1->SetBinContent(5,6.651448);
   hbadmatch_stack_1->SetBinContent(6,7.996174);
   hbadmatch_stack_1->SetBinContent(7,8.846871);
   hbadmatch_stack_1->SetBinContent(8,6.42961);
   hbadmatch_stack_1->SetBinContent(9,5.370222);
   hbadmatch_stack_1->SetBinContent(10,8.074827);
   hbadmatch_stack_1->SetBinContent(11,6.988611);
   hbadmatch_stack_1->SetBinContent(12,5.038986);
   hbadmatch_stack_1->SetBinContent(13,5.227188);
   hbadmatch_stack_1->SetBinContent(14,3.384642);
   hbadmatch_stack_1->SetBinContent(15,5.883551);
   hbadmatch_stack_1->SetBinContent(16,3.29562);
   hbadmatch_stack_1->SetBinContent(17,3.010768);
   hbadmatch_stack_1->SetBinContent(18,3.815997);
   hbadmatch_stack_1->SetBinContent(19,3.211843);
   hbadmatch_stack_1->SetBinContent(20,2.824995);
   hbadmatch_stack_1->SetBinContent(21,2.556572);
   hbadmatch_stack_1->SetBinContent(22,2.959872);
   hbadmatch_stack_1->SetBinContent(23,1.075533);
   hbadmatch_stack_1->SetBinContent(24,2.864868);
   hbadmatch_stack_1->SetBinContent(25,21.48004);
   hbadmatch_stack_1->SetBinError(1,3.208639);
   hbadmatch_stack_1->SetBinError(2,1.297757);
   hbadmatch_stack_1->SetBinError(3,1.723847);
   hbadmatch_stack_1->SetBinError(4,2.738542);
   hbadmatch_stack_1->SetBinError(5,1.455816);
   hbadmatch_stack_1->SetBinError(6,1.466162);
   hbadmatch_stack_1->SetBinError(7,1.530699);
   hbadmatch_stack_1->SetBinError(8,1.499198);
   hbadmatch_stack_1->SetBinError(9,1.190892);
   hbadmatch_stack_1->SetBinError(10,2.166247);
   hbadmatch_stack_1->SetBinError(11,1.400662);
   hbadmatch_stack_1->SetBinError(12,1.173525);
   hbadmatch_stack_1->SetBinError(13,1.093773);
   hbadmatch_stack_1->SetBinError(14,0.9432247);
   hbadmatch_stack_1->SetBinError(15,1.896865);
   hbadmatch_stack_1->SetBinError(16,0.9060091);
   hbadmatch_stack_1->SetBinError(17,0.9744225);
   hbadmatch_stack_1->SetBinError(18,0.9662645);
   hbadmatch_stack_1->SetBinError(19,0.8857657);
   hbadmatch_stack_1->SetBinError(20,0.9332105);
   hbadmatch_stack_1->SetBinError(21,0.8544169);
   hbadmatch_stack_1->SetBinError(22,0.9256613);
   hbadmatch_stack_1->SetBinError(23,0.5557324);
   hbadmatch_stack_1->SetBinError(24,0.8977534);
   hbadmatch_stack_1->SetBinError(25,2.537584);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,110.8088);
   hext_stack_2->SetBinContent(2,30.21739);
   hext_stack_2->SetBinContent(3,34.35399);
   hext_stack_2->SetBinContent(4,40.12695);
   hext_stack_2->SetBinContent(5,40.33764);
   hext_stack_2->SetBinContent(6,34.13051);
   hext_stack_2->SetBinContent(7,28.86078);
   hext_stack_2->SetBinContent(8,26.93311);
   hext_stack_2->SetBinContent(9,27.31218);
   hext_stack_2->SetBinContent(10,25.80987);
   hext_stack_2->SetBinContent(11,17.67518);
   hext_stack_2->SetBinContent(12,22.53119);
   hext_stack_2->SetBinContent(13,18.97);
   hext_stack_2->SetBinContent(14,17.1632);
   hext_stack_2->SetBinContent(15,10.21959);
   hext_stack_2->SetBinContent(16,10.48055);
   hext_stack_2->SetBinContent(17,13.35982);
   hext_stack_2->SetBinContent(18,7.041816);
   hext_stack_2->SetBinContent(19,10.43583);
   hext_stack_2->SetBinContent(20,5.351989);
   hext_stack_2->SetBinContent(21,8.022189);
   hext_stack_2->SetBinContent(22,9.317006);
   hext_stack_2->SetBinContent(23,4.214394);
   hext_stack_2->SetBinContent(24,1.779209);
   hext_stack_2->SetBinContent(25,59.37939);
   hext_stack_2->SetBinError(1,6.856864);
   hext_stack_2->SetBinError(2,3.550139);
   hext_stack_2->SetBinError(3,3.792477);
   hext_stack_2->SetBinError(4,4.035597);
   hext_stack_2->SetBinError(5,4.17999);
   hext_stack_2->SetBinError(6,3.924394);
   hext_stack_2->SetBinError(7,3.462702);
   hext_stack_2->SetBinError(8,3.524491);
   hext_stack_2->SetBinError(9,3.354695);
   hext_stack_2->SetBinError(10,3.403491);
   hext_stack_2->SetBinError(11,2.698743);
   hext_stack_2->SetBinError(12,3.065818);
   hext_stack_2->SetBinError(13,2.835572);
   hext_stack_2->SetBinError(14,2.68141);
   hext_stack_2->SetBinError(15,2.046996);
   hext_stack_2->SetBinError(16,1.991998);
   hext_stack_2->SetBinError(17,2.405419);
   hext_stack_2->SetBinError(18,1.76887);
   hext_stack_2->SetBinError(19,2.168829);
   hext_stack_2->SetBinError(20,1.462956);
   hext_stack_2->SetBinError(21,1.800944);
   hext_stack_2->SetBinError(22,2.000165);
   hext_stack_2->SetBinError(23,1.305512);
   hext_stack_2->SetBinError(24,0.9206235);
   hext_stack_2->SetBinError(25,4.98309);
   hext_stack_2->SetEntries(1541);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,14.63273);
   hdirt_stack_3->SetBinContent(2,3.692081);
   hdirt_stack_3->SetBinContent(3,5.728397);
   hdirt_stack_3->SetBinContent(4,5.126139);
   hdirt_stack_3->SetBinContent(5,5.699181);
   hdirt_stack_3->SetBinContent(6,5.438134);
   hdirt_stack_3->SetBinContent(7,2.04394);
   hdirt_stack_3->SetBinContent(8,3.350922);
   hdirt_stack_3->SetBinContent(9,2.785411);
   hdirt_stack_3->SetBinContent(10,1.422626);
   hdirt_stack_3->SetBinContent(11,1.766055);
   hdirt_stack_3->SetBinContent(12,1.339447);
   hdirt_stack_3->SetBinContent(13,1.674881);
   hdirt_stack_3->SetBinContent(14,1.989988);
   hdirt_stack_3->SetBinContent(15,1.252782);
   hdirt_stack_3->SetBinContent(16,1.701068);
   hdirt_stack_3->SetBinContent(17,1.370732);
   hdirt_stack_3->SetBinContent(18,1.263701);
   hdirt_stack_3->SetBinContent(19,1.400187);
   hdirt_stack_3->SetBinContent(20,0.3840755);
   hdirt_stack_3->SetBinContent(21,0.9673532);
   hdirt_stack_3->SetBinContent(22,0.8766446);
   hdirt_stack_3->SetBinContent(23,0.6951543);
   hdirt_stack_3->SetBinContent(25,6.429409);
   hdirt_stack_3->SetBinError(1,2.089753);
   hdirt_stack_3->SetBinError(2,1.015443);
   hdirt_stack_3->SetBinError(3,1.33537);
   hdirt_stack_3->SetBinError(4,1.3826);
   hdirt_stack_3->SetBinError(5,1.373669);
   hdirt_stack_3->SetBinError(6,1.191534);
   hdirt_stack_3->SetBinError(7,0.7068797);
   hdirt_stack_3->SetBinError(8,0.8993524);
   hdirt_stack_3->SetBinError(9,1.226367);
   hdirt_stack_3->SetBinError(10,0.6086586);
   hdirt_stack_3->SetBinError(11,0.6182933);
   hdirt_stack_3->SetBinError(12,0.5849562);
   hdirt_stack_3->SetBinError(13,0.6193212);
   hdirt_stack_3->SetBinError(14,0.7463626);
   hdirt_stack_3->SetBinError(15,0.6018287);
   hdirt_stack_3->SetBinError(16,0.7342053);
   hdirt_stack_3->SetBinError(17,0.6646592);
   hdirt_stack_3->SetBinError(18,0.5279641);
   hdirt_stack_3->SetBinError(19,0.6250019);
   hdirt_stack_3->SetBinError(20,0.2742256);
   hdirt_stack_3->SetBinError(21,0.5045646);
   hdirt_stack_3->SetBinError(22,0.5419808);
   hdirt_stack_3->SetBinError(23,0.4258516);
   hdirt_stack_3->SetBinError(25,1.366607);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,131.4189);
   houtFV_stack_4->SetBinContent(2,41.69682);
   houtFV_stack_4->SetBinContent(3,47.4014);
   houtFV_stack_4->SetBinContent(4,40.13029);
   houtFV_stack_4->SetBinContent(5,40.97121);
   houtFV_stack_4->SetBinContent(6,41.72342);
   houtFV_stack_4->SetBinContent(7,33.47081);
   houtFV_stack_4->SetBinContent(8,37.50557);
   houtFV_stack_4->SetBinContent(9,24.78621);
   houtFV_stack_4->SetBinContent(10,31.17979);
   houtFV_stack_4->SetBinContent(11,27.67266);
   houtFV_stack_4->SetBinContent(12,24.09075);
   houtFV_stack_4->SetBinContent(13,24.52532);
   houtFV_stack_4->SetBinContent(14,16.81103);
   houtFV_stack_4->SetBinContent(15,13.42398);
   houtFV_stack_4->SetBinContent(16,13.83137);
   houtFV_stack_4->SetBinContent(17,7.810567);
   houtFV_stack_4->SetBinContent(18,9.822184);
   houtFV_stack_4->SetBinContent(19,7.452035);
   houtFV_stack_4->SetBinContent(20,8.525072);
   houtFV_stack_4->SetBinContent(21,7.631935);
   houtFV_stack_4->SetBinContent(22,7.113725);
   houtFV_stack_4->SetBinContent(23,4.541731);
   houtFV_stack_4->SetBinContent(24,4.412659);
   houtFV_stack_4->SetBinContent(25,74.28236);
   houtFV_stack_4->SetBinError(1,5.814508);
   houtFV_stack_4->SetBinError(2,3.378521);
   houtFV_stack_4->SetBinError(3,3.471572);
   houtFV_stack_4->SetBinError(4,3.191947);
   houtFV_stack_4->SetBinError(5,3.177461);
   houtFV_stack_4->SetBinError(6,3.228851);
   houtFV_stack_4->SetBinError(7,2.861521);
   houtFV_stack_4->SetBinError(8,3.066844);
   houtFV_stack_4->SetBinError(9,2.461633);
   houtFV_stack_4->SetBinError(10,2.83625);
   houtFV_stack_4->SetBinError(11,2.662978);
   houtFV_stack_4->SetBinError(12,2.529034);
   houtFV_stack_4->SetBinError(13,2.441796);
   houtFV_stack_4->SetBinError(14,2.026803);
   houtFV_stack_4->SetBinError(15,1.827858);
   houtFV_stack_4->SetBinError(16,1.82635);
   houtFV_stack_4->SetBinError(17,1.440693);
   houtFV_stack_4->SetBinError(18,1.589758);
   houtFV_stack_4->SetBinError(19,1.413679);
   houtFV_stack_4->SetBinError(20,1.501885);
   houtFV_stack_4->SetBinError(21,1.300736);
   houtFV_stack_4->SetBinError(22,1.324356);
   houtFV_stack_4->SetBinError(23,1.11103);
   houtFV_stack_4->SetBinError(24,1.078532);
   houtFV_stack_4->SetBinError(25,4.416735);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,14.72845);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.236262);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.1147);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,8.379834);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,7.82349);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.911831);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.5772);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.376996);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.807945);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.848056);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.613318);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.010552);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.607166);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.42806);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.30617);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.395672);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.701244);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.814508);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.9188759);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.337544);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.878854);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4600178);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,10.21724);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.316422);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9064004);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8996481);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9656537);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9005126);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.766199);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7813315);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6919036);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6424627);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6357645);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.73372);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5315707);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5327292);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6218898);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6734704);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4122573);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4533256);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4971419);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3145228);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1427183);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3786286);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3111014);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1399647);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9593175);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.393606);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.769493);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.645772);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.70698);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.64594);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.143404);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.463426);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.031804);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.353322);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.506608);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.115672);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.018354);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4736358);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9484402);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.688458);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.7052752);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3597394);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3534638);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5925114);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3971091);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2795826);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3743209);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2739576);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.377857);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4319288);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3318839);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.317295);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1634799);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3718002);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.4665133);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,383.3092);
   hNCpi0inFVres_stack_7->SetBinContent(2,225.2162);
   hNCpi0inFVres_stack_7->SetBinContent(3,215.2858);
   hNCpi0inFVres_stack_7->SetBinContent(4,213.5672);
   hNCpi0inFVres_stack_7->SetBinContent(5,201.6608);
   hNCpi0inFVres_stack_7->SetBinContent(6,181.9939);
   hNCpi0inFVres_stack_7->SetBinContent(7,167.4042);
   hNCpi0inFVres_stack_7->SetBinContent(8,146.9824);
   hNCpi0inFVres_stack_7->SetBinContent(9,126.6879);
   hNCpi0inFVres_stack_7->SetBinContent(10,108.3358);
   hNCpi0inFVres_stack_7->SetBinContent(11,89.23982);
   hNCpi0inFVres_stack_7->SetBinContent(12,81.68686);
   hNCpi0inFVres_stack_7->SetBinContent(13,73.12371);
   hNCpi0inFVres_stack_7->SetBinContent(14,64.59842);
   hNCpi0inFVres_stack_7->SetBinContent(15,51.84543);
   hNCpi0inFVres_stack_7->SetBinContent(16,45.19287);
   hNCpi0inFVres_stack_7->SetBinContent(17,35.52713);
   hNCpi0inFVres_stack_7->SetBinContent(18,34.99821);
   hNCpi0inFVres_stack_7->SetBinContent(19,30.71439);
   hNCpi0inFVres_stack_7->SetBinContent(20,24.79407);
   hNCpi0inFVres_stack_7->SetBinContent(21,22.40745);
   hNCpi0inFVres_stack_7->SetBinContent(22,18.64142);
   hNCpi0inFVres_stack_7->SetBinContent(23,19.05096);
   hNCpi0inFVres_stack_7->SetBinContent(24,16.30147);
   hNCpi0inFVres_stack_7->SetBinContent(25,176.8114);
   hNCpi0inFVres_stack_7->SetBinError(1,6.406524);
   hNCpi0inFVres_stack_7->SetBinError(2,4.93571);
   hNCpi0inFVres_stack_7->SetBinError(3,4.754615);
   hNCpi0inFVres_stack_7->SetBinError(4,4.792262);
   hNCpi0inFVres_stack_7->SetBinError(5,4.639173);
   hNCpi0inFVres_stack_7->SetBinError(6,4.399969);
   hNCpi0inFVres_stack_7->SetBinError(7,4.230891);
   hNCpi0inFVres_stack_7->SetBinError(8,4.004398);
   hNCpi0inFVres_stack_7->SetBinError(9,3.69508);
   hNCpi0inFVres_stack_7->SetBinError(10,3.385696);
   hNCpi0inFVres_stack_7->SetBinError(11,3.039676);
   hNCpi0inFVres_stack_7->SetBinError(12,2.915498);
   hNCpi0inFVres_stack_7->SetBinError(13,2.810237);
   hNCpi0inFVres_stack_7->SetBinError(14,2.640423);
   hNCpi0inFVres_stack_7->SetBinError(15,2.303496);
   hNCpi0inFVres_stack_7->SetBinError(16,2.214631);
   hNCpi0inFVres_stack_7->SetBinError(17,1.894582);
   hNCpi0inFVres_stack_7->SetBinError(18,1.950375);
   hNCpi0inFVres_stack_7->SetBinError(19,1.860238);
   hNCpi0inFVres_stack_7->SetBinError(20,1.627269);
   hNCpi0inFVres_stack_7->SetBinError(21,1.557049);
   hNCpi0inFVres_stack_7->SetBinError(22,1.356274);
   hNCpi0inFVres_stack_7->SetBinError(23,1.427805);
   hNCpi0inFVres_stack_7->SetBinError(24,1.33122);
   hNCpi0inFVres_stack_7->SetBinError(25,4.429892);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,72.68361);
   hNCpi0inFVdis_stack_8->SetBinContent(2,40.82667);
   hNCpi0inFVdis_stack_8->SetBinContent(3,43.23487);
   hNCpi0inFVdis_stack_8->SetBinContent(4,41.34864);
   hNCpi0inFVdis_stack_8->SetBinContent(5,40.35087);
   hNCpi0inFVdis_stack_8->SetBinContent(6,34.00357);
   hNCpi0inFVdis_stack_8->SetBinContent(7,30.98857);
   hNCpi0inFVdis_stack_8->SetBinContent(8,26.98969);
   hNCpi0inFVdis_stack_8->SetBinContent(9,26.64577);
   hNCpi0inFVdis_stack_8->SetBinContent(10,24.70455);
   hNCpi0inFVdis_stack_8->SetBinContent(11,17.19923);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.52137);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.52665);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.84244);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.75309);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.034072);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.392788);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.388043);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.724741);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.183024);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.681152);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.727742);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.913561);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.012216);
   hNCpi0inFVdis_stack_8->SetBinContent(25,36.71437);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.784148);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.110499);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.142423);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.128663);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.071394);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.821724);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.878819);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.665273);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.708364);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.629519);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.243387);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.456748);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.208975);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.153089);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.106876);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9284609);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9762763);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8456042);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6034662);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6680541);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5943689);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7212813);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4405521);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5666567);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.923684);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.2089179);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1121803);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1974492);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,172.1364);
   hCCpi0inFV_stack_10->SetBinContent(2,74.71564);
   hCCpi0inFV_stack_10->SetBinContent(3,81.54741);
   hCCpi0inFV_stack_10->SetBinContent(4,73.07265);
   hCCpi0inFV_stack_10->SetBinContent(5,81.70419);
   hCCpi0inFV_stack_10->SetBinContent(6,71.04152);
   hCCpi0inFV_stack_10->SetBinContent(7,73.24774);
   hCCpi0inFV_stack_10->SetBinContent(8,58.74546);
   hCCpi0inFV_stack_10->SetBinContent(9,46.76657);
   hCCpi0inFV_stack_10->SetBinContent(10,44.97129);
   hCCpi0inFV_stack_10->SetBinContent(11,34.23394);
   hCCpi0inFV_stack_10->SetBinContent(12,31.96172);
   hCCpi0inFV_stack_10->SetBinContent(13,28.97409);
   hCCpi0inFV_stack_10->SetBinContent(14,26.20157);
   hCCpi0inFV_stack_10->SetBinContent(15,17.64134);
   hCCpi0inFV_stack_10->SetBinContent(16,20.6088);
   hCCpi0inFV_stack_10->SetBinContent(17,14.24131);
   hCCpi0inFV_stack_10->SetBinContent(18,14.88387);
   hCCpi0inFV_stack_10->SetBinContent(19,11.57594);
   hCCpi0inFV_stack_10->SetBinContent(20,7.324262);
   hCCpi0inFV_stack_10->SetBinContent(21,7.617329);
   hCCpi0inFV_stack_10->SetBinContent(22,10.34607);
   hCCpi0inFV_stack_10->SetBinContent(23,7.232871);
   hCCpi0inFV_stack_10->SetBinContent(24,5.818387);
   hCCpi0inFV_stack_10->SetBinContent(25,78.40683);
   hCCpi0inFV_stack_10->SetBinError(1,6.553309);
   hCCpi0inFV_stack_10->SetBinError(2,4.370681);
   hCCpi0inFV_stack_10->SetBinError(3,4.509498);
   hCCpi0inFV_stack_10->SetBinError(4,4.31685);
   hCCpi0inFV_stack_10->SetBinError(5,4.585236);
   hCCpi0inFV_stack_10->SetBinError(6,4.206384);
   hCCpi0inFV_stack_10->SetBinError(7,4.313864);
   hCCpi0inFV_stack_10->SetBinError(8,3.855707);
   hCCpi0inFV_stack_10->SetBinError(9,3.459352);
   hCCpi0inFV_stack_10->SetBinError(10,3.371237);
   hCCpi0inFV_stack_10->SetBinError(11,2.92639);
   hCCpi0inFV_stack_10->SetBinError(12,2.842359);
   hCCpi0inFV_stack_10->SetBinError(13,2.670039);
   hCCpi0inFV_stack_10->SetBinError(14,2.575788);
   hCCpi0inFV_stack_10->SetBinError(15,2.109933);
   hCCpi0inFV_stack_10->SetBinError(16,2.262715);
   hCCpi0inFV_stack_10->SetBinError(17,1.837287);
   hCCpi0inFV_stack_10->SetBinError(18,1.947937);
   hCCpi0inFV_stack_10->SetBinError(19,1.693602);
   hCCpi0inFV_stack_10->SetBinError(20,1.387988);
   hCCpi0inFV_stack_10->SetBinError(21,1.3728);
   hCCpi0inFV_stack_10->SetBinError(22,1.642859);
   hCCpi0inFV_stack_10->SetBinError(23,1.293337);
   hCCpi0inFV_stack_10->SetBinError(24,1.17726);
   hCCpi0inFV_stack_10->SetBinError(25,4.440473);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,76.59206);
   hNCinFV_stack_11->SetBinContent(2,36.81746);
   hNCinFV_stack_11->SetBinContent(3,38.39446);
   hNCinFV_stack_11->SetBinContent(4,33.75637);
   hNCinFV_stack_11->SetBinContent(5,31.95573);
   hNCinFV_stack_11->SetBinContent(6,31.79935);
   hNCinFV_stack_11->SetBinContent(7,31.4558);
   hNCinFV_stack_11->SetBinContent(8,22.6694);
   hNCinFV_stack_11->SetBinContent(9,21.53729);
   hNCinFV_stack_11->SetBinContent(10,16.44646);
   hNCinFV_stack_11->SetBinContent(11,17.9388);
   hNCinFV_stack_11->SetBinContent(12,15.37535);
   hNCinFV_stack_11->SetBinContent(13,14.69499);
   hNCinFV_stack_11->SetBinContent(14,11.19516);
   hNCinFV_stack_11->SetBinContent(15,12.70887);
   hNCinFV_stack_11->SetBinContent(16,7.515894);
   hNCinFV_stack_11->SetBinContent(17,6.020174);
   hNCinFV_stack_11->SetBinContent(18,7.319179);
   hNCinFV_stack_11->SetBinContent(19,8.929982);
   hNCinFV_stack_11->SetBinContent(20,4.049639);
   hNCinFV_stack_11->SetBinContent(21,5.521927);
   hNCinFV_stack_11->SetBinContent(22,6.247083);
   hNCinFV_stack_11->SetBinContent(23,3.321102);
   hNCinFV_stack_11->SetBinContent(24,3.414692);
   hNCinFV_stack_11->SetBinContent(25,46.41306);
   hNCinFV_stack_11->SetBinError(1,4.401466);
   hNCinFV_stack_11->SetBinError(2,2.956061);
   hNCinFV_stack_11->SetBinError(3,3.127863);
   hNCinFV_stack_11->SetBinError(4,2.937646);
   hNCinFV_stack_11->SetBinError(5,2.851397);
   hNCinFV_stack_11->SetBinError(6,2.871719);
   hNCinFV_stack_11->SetBinError(7,2.851267);
   hNCinFV_stack_11->SetBinError(8,2.412254);
   hNCinFV_stack_11->SetBinError(9,2.355096);
   hNCinFV_stack_11->SetBinError(10,1.953279);
   hNCinFV_stack_11->SetBinError(11,2.085802);
   hNCinFV_stack_11->SetBinError(12,2.010843);
   hNCinFV_stack_11->SetBinError(13,1.952446);
   hNCinFV_stack_11->SetBinError(14,1.653724);
   hNCinFV_stack_11->SetBinError(15,1.755009);
   hNCinFV_stack_11->SetBinError(16,1.40115);
   hNCinFV_stack_11->SetBinError(17,1.194414);
   hNCinFV_stack_11->SetBinError(18,1.387272);
   hNCinFV_stack_11->SetBinError(19,1.499979);
   hNCinFV_stack_11->SetBinError(20,1.018986);
   hNCinFV_stack_11->SetBinError(21,1.194382);
   hNCinFV_stack_11->SetBinError(22,1.271358);
   hNCinFV_stack_11->SetBinError(23,0.9204367);
   hNCinFV_stack_11->SetBinError(24,0.9817734);
   hNCinFV_stack_11->SetBinError(25,3.398556);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,164.9586);
   hnumuCCinFV_stack_12->SetBinContent(2,36.31157);
   hnumuCCinFV_stack_12->SetBinContent(3,40.63942);
   hnumuCCinFV_stack_12->SetBinContent(4,28.54183);
   hnumuCCinFV_stack_12->SetBinContent(5,28.86068);
   hnumuCCinFV_stack_12->SetBinContent(6,25.41974);
   hnumuCCinFV_stack_12->SetBinContent(7,29.12944);
   hnumuCCinFV_stack_12->SetBinContent(8,23.23637);
   hnumuCCinFV_stack_12->SetBinContent(9,18.97005);
   hnumuCCinFV_stack_12->SetBinContent(10,19.83269);
   hnumuCCinFV_stack_12->SetBinContent(11,20.656);
   hnumuCCinFV_stack_12->SetBinContent(12,16.84168);
   hnumuCCinFV_stack_12->SetBinContent(13,16.15115);
   hnumuCCinFV_stack_12->SetBinContent(14,12.39714);
   hnumuCCinFV_stack_12->SetBinContent(15,10.27122);
   hnumuCCinFV_stack_12->SetBinContent(16,10.54999);
   hnumuCCinFV_stack_12->SetBinContent(17,8.267448);
   hnumuCCinFV_stack_12->SetBinContent(18,9.254818);
   hnumuCCinFV_stack_12->SetBinContent(19,11.12369);
   hnumuCCinFV_stack_12->SetBinContent(20,7.2274);
   hnumuCCinFV_stack_12->SetBinContent(21,8.117809);
   hnumuCCinFV_stack_12->SetBinContent(22,4.041117);
   hnumuCCinFV_stack_12->SetBinContent(23,7.925487);
   hnumuCCinFV_stack_12->SetBinContent(24,5.643252);
   hnumuCCinFV_stack_12->SetBinContent(25,89.39267);
   hnumuCCinFV_stack_12->SetBinError(1,7.541261);
   hnumuCCinFV_stack_12->SetBinError(2,3.800392);
   hnumuCCinFV_stack_12->SetBinError(3,4.114529);
   hnumuCCinFV_stack_12->SetBinError(4,2.879049);
   hnumuCCinFV_stack_12->SetBinError(5,2.873216);
   hnumuCCinFV_stack_12->SetBinError(6,2.569398);
   hnumuCCinFV_stack_12->SetBinError(7,3.57974);
   hnumuCCinFV_stack_12->SetBinError(8,2.571054);
   hnumuCCinFV_stack_12->SetBinError(9,2.264376);
   hnumuCCinFV_stack_12->SetBinError(10,2.47836);
   hnumuCCinFV_stack_12->SetBinError(11,2.759096);
   hnumuCCinFV_stack_12->SetBinError(12,2.173855);
   hnumuCCinFV_stack_12->SetBinError(13,2.333352);
   hnumuCCinFV_stack_12->SetBinError(14,2.058226);
   hnumuCCinFV_stack_12->SetBinError(15,1.609954);
   hnumuCCinFV_stack_12->SetBinError(16,1.830081);
   hnumuCCinFV_stack_12->SetBinError(17,1.452159);
   hnumuCCinFV_stack_12->SetBinError(18,1.586566);
   hnumuCCinFV_stack_12->SetBinError(19,2.070041);
   hnumuCCinFV_stack_12->SetBinError(20,1.478149);
   hnumuCCinFV_stack_12->SetBinError(21,2.759824);
   hnumuCCinFV_stack_12->SetBinError(22,1.027639);
   hnumuCCinFV_stack_12->SetBinError(23,1.859906);
   hnumuCCinFV_stack_12->SetBinError(24,1.426736);
   hnumuCCinFV_stack_12->SetBinError(25,5.350543);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,6.86385);
   hnueCCinFV_stack_13->SetBinContent(2,2.464438);
   hnueCCinFV_stack_13->SetBinContent(3,1.423241);
   hnueCCinFV_stack_13->SetBinContent(4,1.568897);
   hnueCCinFV_stack_13->SetBinContent(5,1.268811);
   hnueCCinFV_stack_13->SetBinContent(6,3.775034);
   hnueCCinFV_stack_13->SetBinContent(7,2.505483);
   hnueCCinFV_stack_13->SetBinContent(8,0.7883694);
   hnueCCinFV_stack_13->SetBinContent(9,1.867531);
   hnueCCinFV_stack_13->SetBinContent(10,1.550785);
   hnueCCinFV_stack_13->SetBinContent(11,1.486508);
   hnueCCinFV_stack_13->SetBinContent(12,1.216883);
   hnueCCinFV_stack_13->SetBinContent(13,0.8666171);
   hnueCCinFV_stack_13->SetBinContent(14,1.537824);
   hnueCCinFV_stack_13->SetBinContent(15,1.110006);
   hnueCCinFV_stack_13->SetBinContent(16,1.332729);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2451434);
   hnueCCinFV_stack_13->SetBinContent(19,0.7475032);
   hnueCCinFV_stack_13->SetBinContent(20,1.122308);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,1.136579);
   hnueCCinFV_stack_13->SetBinContent(23,0.5834117);
   hnueCCinFV_stack_13->SetBinContent(24,1.745886);
   hnueCCinFV_stack_13->SetBinContent(25,15.47241);
   hnueCCinFV_stack_13->SetBinError(1,1.778313);
   hnueCCinFV_stack_13->SetBinError(2,0.8986003);
   hnueCCinFV_stack_13->SetBinError(3,0.5399405);
   hnueCCinFV_stack_13->SetBinError(4,0.6013295);
   hnueCCinFV_stack_13->SetBinError(5,0.5889569);
   hnueCCinFV_stack_13->SetBinError(6,1.522669);
   hnueCCinFV_stack_13->SetBinError(7,0.8464672);
   hnueCCinFV_stack_13->SetBinError(8,0.3917744);
   hnueCCinFV_stack_13->SetBinError(9,0.7538348);
   hnueCCinFV_stack_13->SetBinError(10,0.6550905);
   hnueCCinFV_stack_13->SetBinError(11,0.7750286);
   hnueCCinFV_stack_13->SetBinError(12,0.5012526);
   hnueCCinFV_stack_13->SetBinError(13,0.4390927);
   hnueCCinFV_stack_13->SetBinError(14,0.6850057);
   hnueCCinFV_stack_13->SetBinError(15,0.5696717);
   hnueCCinFV_stack_13->SetBinError(16,0.6132724);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2451269);
   hnueCCinFV_stack_13->SetBinError(19,0.5306929);
   hnueCCinFV_stack_13->SetBinError(20,0.6109035);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.7935128);
   hnueCCinFV_stack_13->SetBinError(23,0.4338559);
   hnueCCinFV_stack_13->SetBinError(24,1.206265);
   hnueCCinFV_stack_13->SetBinError(25,2.997093);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__2->SetBinContent(1,1185.283);
   hmcerror__2->SetBinContent(2,507.986);
   hmcerror__2->SetBinContent(3,527.6054);
   hmcerror__2->SetBinContent(4,502.0235);
   hmcerror__2->SetBinContent(5,488.9858);
   hmcerror__2->SetBinContent(6,444.6278);
   hmcerror__2->SetBinContent(7,415.0779);
   hmcerror__2->SetBinContent(8,359.1513);
   hmcerror__2->SetBinContent(9,308.8904);
   hmcerror__2->SetBinContent(10,287.7949);
   hmcerror__2->SetBinContent(11,240.6137);
   hmcerror__2->SetBinContent(12,222.6331);
   hmcerror__2->SetBinContent(13,201.8433);
   hmcerror__2->SetBinContent(14,171.0934);
   hmcerror__2->SetBinContent(15,140.4897);
   hmcerror__2->SetBinContent(16,124.3573);
   hmcerror__2->SetBinContent(17,100.1753);
   hmcerror__2->SetBinContent(18,98.09872);
   hmcerror__2->SetBinContent(19,91.44395);
   hmcerror__2->SetBinContent(20,66.56836);
   hmcerror__2->SetBinContent(21,67.46341);
   hmcerror__2->SetBinContent(22,66.91219);
   hmcerror__2->SetBinContent(23,52.7114);
   hmcerror__2->SetBinContent(24,45.56426);
   hmcerror__2->SetBinContent(25,616.911);
   hmcerror__2->SetBinError(1,275.0441);
   hmcerror__2->SetBinError(2,143.0053);
   hmcerror__2->SetBinError(3,139.3985);
   hmcerror__2->SetBinError(4,136.6063);
   hmcerror__2->SetBinError(5,138.0057);
   hmcerror__2->SetBinError(6,115.8876);
   hmcerror__2->SetBinError(7,113.634);
   hmcerror__2->SetBinError(8,99.78288);
   hmcerror__2->SetBinError(9,81.45494);
   hmcerror__2->SetBinError(10,73.17811);
   hmcerror__2->SetBinError(11,62.15648);
   hmcerror__2->SetBinError(12,61.09312);
   hmcerror__2->SetBinError(13,51.65583);
   hmcerror__2->SetBinError(14,44.5275);
   hmcerror__2->SetBinError(15,40.0846);
   hmcerror__2->SetBinError(16,37.3669);
   hmcerror__2->SetBinError(17,27.89809);
   hmcerror__2->SetBinError(18,30.5515);
   hmcerror__2->SetBinError(19,31.83063);
   hmcerror__2->SetBinError(20,22.10054);
   hmcerror__2->SetBinError(21,20.87323);
   hmcerror__2->SetBinError(22,18.99756);
   hmcerror__2->SetBinError(23,26.4205);
   hmcerror__2->SetBinError(24,19.22835);
   hmcerror__2->SetBinError(25,145.0068);
   hmcerror__2->SetEntries(7241.585);

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
   Double_t _fy3001[24] = {
   1104,
   427,
   454,
   481,
   438,
   344,
   359,
   287,
   232,
   257,
   244,
   190,
   189,
   136,
   145,
   106,
   111,
   80,
   84,
   68,
   58,
   56,
   44,
   38};
   Double_t _felx3001[24] = {
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
   Double_t _fely3001[24] = {
   33.2265,
   20.66398,
   21.30728,
   21.93171,
   20.92845,
   18.54724,
   18.9473,
   16.94107,
   15.23155,
   16.03122,
   15.6205,
   13.78405,
   13.74773,
   11.6619,
   12.04159,
   10.29563,
   10.53565,
   9.0683,
   9.2886,
   8.3726,
   7.7446,
   7.6127,
   6.7671,
   6.3013};
   Double_t _fehx3001[24] = {
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
   Double_t _fehy3001[24] = {
   33.2265,
   20.66398,
   21.30728,
   21.93171,
   20.92845,
   18.54724,
   18.9473,
   16.94107,
   15.23155,
   16.03122,
   15.6205,
   13.78405,
   13.74773,
   11.6619,
   12.04159,
   10.29563,
   10.53565,
   8.8665,
   9.0869,
   8.1701,
   7.5415,
   7.4094,
   6.5623,
   6.0955};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(28.52883);
   Graph_Graph3001->SetMaximum(1247.779);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5932.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 159.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 555.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 66.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 647.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  96.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2578.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  502.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1016.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 465.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 564.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 37.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fely3002[24] = {
   0.2320493,
   0.2815143,
   0.2642097,
   0.2721113,
   0.2822284,
   0.2606396,
   0.2737656,
   0.2778297,
   0.2637017,
   0.2542717,
   0.2583248,
   0.2744116,
   0.2559205,
   0.2602527,
   0.2853206,
   0.3004801,
   0.2784926,
   0.3114363,
   0.348089,
   0.3319977,
   0.3094008,
   0.2839178,
   0.5012293,
   0.422005};
   Double_t _fehx3002[24] = {
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
   Double_t _fehy3002[24] = {
   0.2320493,
   0.2815143,
   0.2642097,
   0.2721113,
   0.2822284,
   0.2606396,
   0.2737656,
   0.2778297,
   0.2637017,
   0.2542717,
   0.2583248,
   0.2744116,
   0.2559205,
   0.2602527,
   0.2853206,
   0.3004801,
   0.2784926,
   0.3114363,
   0.348089,
   0.3319977,
   0.3094008,
   0.2839178,
   0.5012293,
   0.422005};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,99);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3003[24] = {
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
   Double_t _fely3003[24] = {
   0.2247672,
   0.271775,
   0.2550479,
   0.2588413,
   0.2522868,
   0.2435766,
   0.2482559,
   0.2499198,
   0.2386379,
   0.234452,
   0.2306399,
   0.2269565,
   0.2277958,
   0.233359,
   0.2420164,
   0.2392658,
   0.2157846,
   0.2276865,
   0.2170986,
   0.2285829,
   0.2327313,
   0.2158999,
   0.2470024,
   0.256368};
   Double_t _fehx3003[24] = {
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
   Double_t _fehy3003[24] = {
   0.2247672,
   0.271775,
   0.2550479,
   0.2588413,
   0.2522868,
   0.2435766,
   0.2482559,
   0.2499198,
   0.2386379,
   0.234452,
   0.2306399,
   0.2269565,
   0.2277958,
   0.233359,
   0.2420164,
   0.2392658,
   0.2157846,
   0.2276865,
   0.2170986,
   0.2285829,
   0.2327313,
   0.2158999,
   0.2470024,
   0.256368};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,99);
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
   
   Double_t _fx3004[24] = {
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
   Double_t _fy3004[24] = {
   0.9314231,
   0.8405743,
   0.8604916,
   0.9581225,
   0.8957315,
   0.7736808,
   0.8648978,
   0.7991062,
   0.7510754,
   0.892997,
   1.014073,
   0.8534219,
   0.9363699,
   0.7948877,
   1.032104,
   0.8523826,
   1.108057,
   0.8155051,
   0.9185955,
   1.021506,
   0.8597253,
   0.8369177,
   0.8347341,
   0.8339869};
   Double_t _felx3004[24] = {
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
   Double_t _fely3004[24] = {
   0.02803254,
   0.04067824,
   0.04038487,
   0.04368662,
   0.04279971,
   0.04171407,
   0.04564756,
   0.04716975,
   0.04931052,
   0.05570362,
   0.0649194,
   0.06191373,
   0.06811089,
   0.06816106,
   0.08571159,
   0.08279072,
   0.1051721,
   0.09244056,
   0.101577,
   0.1257745,
   0.114797,
   0.1137715,
   0.1283802,
   0.1382948};
   Double_t _fehx3004[24] = {
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
   Double_t _fehy3004[24] = {
   0.02803254,
   0.04067824,
   0.04038487,
   0.04368662,
   0.04279971,
   0.04171407,
   0.04564756,
   0.04716975,
   0.04931052,
   0.05570362,
   0.0649194,
   0.06191373,
   0.06811089,
   0.06816106,
   0.08571159,
   0.08279072,
   0.1051721,
   0.09038345,
   0.09937126,
   0.1227325,
   0.1117865,
   0.1107332,
   0.1244949,
   0.1337781};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0.6439384);
   Graph_Graph3004->SetMaximum(1.264983);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
