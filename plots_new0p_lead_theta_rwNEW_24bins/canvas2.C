#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Thu Mar  9 16:16:03 2023) by ROOT version 6.26/00
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
   pad1->Range(-0.4846154,-9.694313,3.553846,1071.987);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__4->SetBinContent(1,112.1565);
   hmc__4->SetBinContent(2,293.1484);
   hmc__4->SetBinContent(3,424.1747);
   hmc__4->SetBinContent(4,484.7156);
   hmc__4->SetBinContent(5,484.3335);
   hmc__4->SetBinContent(6,473.1351);
   hmc__4->SetBinContent(7,445.5685);
   hmc__4->SetBinContent(8,411.0188);
   hmc__4->SetBinContent(9,336.2585);
   hmc__4->SetBinContent(10,302.8526);
   hmc__4->SetBinContent(11,272.9119);
   hmc__4->SetBinContent(12,244.5157);
   hmc__4->SetBinContent(13,199.5192);
   hmc__4->SetBinContent(14,171.274);
   hmc__4->SetBinContent(15,165.0486);
   hmc__4->SetBinContent(16,162.0728);
   hmc__4->SetBinContent(17,131.5098);
   hmc__4->SetBinContent(18,125.8192);
   hmc__4->SetBinContent(19,124.0833);
   hmc__4->SetBinContent(20,108.6751);
   hmc__4->SetBinContent(21,87.48779);
   hmc__4->SetBinContent(22,76.38542);
   hmc__4->SetBinContent(23,45.09814);
   hmc__4->SetBinContent(24,17.74888);
   hmc__4->SetBinError(1,38.27913);
   hmc__4->SetBinError(2,79.15914);
   hmc__4->SetBinError(3,110.3061);
   hmc__4->SetBinError(4,121.251);
   hmc__4->SetBinError(5,125.461);
   hmc__4->SetBinError(6,132.1823);
   hmc__4->SetBinError(7,127.2642);
   hmc__4->SetBinError(8,120.9339);
   hmc__4->SetBinError(9,100.0826);
   hmc__4->SetBinError(10,86.41846);
   hmc__4->SetBinError(11,81.10712);
   hmc__4->SetBinError(12,72.48581);
   hmc__4->SetBinError(13,67.10782);
   hmc__4->SetBinError(14,51.33805);
   hmc__4->SetBinError(15,47.03819);
   hmc__4->SetBinError(16,45.28533);
   hmc__4->SetBinError(17,37.18914);
   hmc__4->SetBinError(18,37.79276);
   hmc__4->SetBinError(19,36.08806);
   hmc__4->SetBinError(20,33.46306);
   hmc__4->SetBinError(21,29.8134);
   hmc__4->SetBinError(22,27.09677);
   hmc__4->SetBinError(23,18.35015);
   hmc__4->SetBinError(24,10.14099);
   hmc__4->SetBinError(25,0.3895343);
   hmc__4->SetMinimum(-9.694313);
   hmc__4->SetMaximum(1017.903);
   hmc__4->SetEntries(5638.682);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,3.15);
   hs2_stack_2->SetMinimum(-3.646956e-09);
   hs2_stack_2->SetMaximum(508.9514);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.311253);
   hbadmatch_stack_1->SetBinContent(2,4.970796);
   hbadmatch_stack_1->SetBinContent(3,6.803269);
   hbadmatch_stack_1->SetBinContent(4,7.448551);
   hbadmatch_stack_1->SetBinContent(5,8.024503);
   hbadmatch_stack_1->SetBinContent(6,9.043915);
   hbadmatch_stack_1->SetBinContent(7,8.850973);
   hbadmatch_stack_1->SetBinContent(8,8.55742);
   hbadmatch_stack_1->SetBinContent(9,5.823177);
   hbadmatch_stack_1->SetBinContent(10,7.449824);
   hbadmatch_stack_1->SetBinContent(11,9.889738);
   hbadmatch_stack_1->SetBinContent(12,8.189898);
   hbadmatch_stack_1->SetBinContent(13,4.54425);
   hbadmatch_stack_1->SetBinContent(14,4.825617);
   hbadmatch_stack_1->SetBinContent(15,5.197783);
   hbadmatch_stack_1->SetBinContent(16,3.993884);
   hbadmatch_stack_1->SetBinContent(17,3.457433);
   hbadmatch_stack_1->SetBinContent(18,1.365902);
   hbadmatch_stack_1->SetBinContent(19,2.562644);
   hbadmatch_stack_1->SetBinContent(20,2.694);
   hbadmatch_stack_1->SetBinContent(21,2.564627);
   hbadmatch_stack_1->SetBinContent(22,3.36974);
   hbadmatch_stack_1->SetBinContent(23,2.13554);
   hbadmatch_stack_1->SetBinError(1,1.048154);
   hbadmatch_stack_1->SetBinError(2,1.191696);
   hbadmatch_stack_1->SetBinError(3,1.341378);
   hbadmatch_stack_1->SetBinError(4,1.367204);
   hbadmatch_stack_1->SetBinError(5,1.505995);
   hbadmatch_stack_1->SetBinError(6,1.583675);
   hbadmatch_stack_1->SetBinError(7,1.615296);
   hbadmatch_stack_1->SetBinError(8,1.530103);
   hbadmatch_stack_1->SetBinError(9,1.236619);
   hbadmatch_stack_1->SetBinError(10,1.575843);
   hbadmatch_stack_1->SetBinError(11,2.435127);
   hbadmatch_stack_1->SetBinError(12,1.758066);
   hbadmatch_stack_1->SetBinError(13,1.836557);
   hbadmatch_stack_1->SetBinError(14,1.217696);
   hbadmatch_stack_1->SetBinError(15,1.153044);
   hbadmatch_stack_1->SetBinError(16,0.9941462);
   hbadmatch_stack_1->SetBinError(17,1.007739);
   hbadmatch_stack_1->SetBinError(18,0.5724614);
   hbadmatch_stack_1->SetBinError(19,0.8390755);
   hbadmatch_stack_1->SetBinError(20,0.7598915);
   hbadmatch_stack_1->SetBinError(21,0.8196805);
   hbadmatch_stack_1->SetBinError(22,1.810663);
   hbadmatch_stack_1->SetBinError(23,0.8057396);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,3.558419);
   hext_stack_2->SetBinContent(2,7.384983);
   hext_stack_2->SetBinContent(3,13.86298);
   hext_stack_2->SetBinContent(4,19.36501);
   hext_stack_2->SetBinContent(5,29.06544);
   hext_stack_2->SetBinContent(6,29.9912);
   hext_stack_2->SetBinContent(7,31.97229);
   hext_stack_2->SetBinContent(8,32.58196);
   hext_stack_2->SetBinContent(9,28.17003);
   hext_stack_2->SetBinContent(10,32.46222);
   hext_stack_2->SetBinContent(11,25.35143);
   hext_stack_2->SetBinContent(12,23.3328);
   hext_stack_2->SetBinContent(13,15.6466);
   hext_stack_2->SetBinContent(14,13.6958);
   hext_stack_2->SetBinContent(15,12.88538);
   hext_stack_2->SetBinContent(16,17.25699);
   hext_stack_2->SetBinContent(17,10.9434);
   hext_stack_2->SetBinContent(18,6.653987);
   hext_stack_2->SetBinContent(19,7.61559);
   hext_stack_2->SetBinContent(20,7.048997);
   hext_stack_2->SetBinContent(21,2.923985);
   hext_stack_2->SetBinContent(22,3.386835);
   hext_stack_2->SetBinContent(23,1.704188);
   hext_stack_2->SetBinContent(24,0.6487947);
   hext_stack_2->SetBinError(1,1.301958);
   hext_stack_2->SetBinError(2,1.722456);
   hext_stack_2->SetBinError(3,2.368344);
   hext_stack_2->SetBinError(4,2.876086);
   hext_stack_2->SetBinError(5,3.545421);
   hext_stack_2->SetBinError(6,3.553503);
   hext_stack_2->SetBinError(7,3.793542);
   hext_stack_2->SetBinError(8,3.651593);
   hext_stack_2->SetBinError(9,3.489882);
   hext_stack_2->SetBinError(10,3.715993);
   hext_stack_2->SetBinError(11,3.320389);
   hext_stack_2->SetBinError(12,3.129851);
   hext_stack_2->SetBinError(13,2.567435);
   hext_stack_2->SetBinError(14,2.413545);
   hext_stack_2->SetBinError(15,2.271173);
   hext_stack_2->SetBinError(16,2.680293);
   hext_stack_2->SetBinError(17,2.159155);
   hext_stack_2->SetBinError(18,1.642041);
   hext_stack_2->SetBinError(19,1.754445);
   hext_stack_2->SetBinError(20,1.711052);
   hext_stack_2->SetBinError(21,1.040301);
   hext_stack_2->SetBinError(22,1.332711);
   hext_stack_2->SetBinError(23,0.7656743);
   hext_stack_2->SetBinError(24,0.4587671);
   hext_stack_2->SetEntries(946);

   ci = 1448;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,1.373798);
   hdirt_stack_3->SetBinContent(3,2.248921);
   hdirt_stack_3->SetBinContent(4,3.927725);
   hdirt_stack_3->SetBinContent(5,3.114838);
   hdirt_stack_3->SetBinContent(6,5.23662);
   hdirt_stack_3->SetBinContent(7,5.723991);
   hdirt_stack_3->SetBinContent(8,2.407122);
   hdirt_stack_3->SetBinContent(9,3.630091);
   hdirt_stack_3->SetBinContent(10,2.902976);
   hdirt_stack_3->SetBinContent(11,2.617205);
   hdirt_stack_3->SetBinContent(12,1.766494);
   hdirt_stack_3->SetBinContent(13,0.9604393);
   hdirt_stack_3->SetBinContent(14,2.120227);
   hdirt_stack_3->SetBinContent(15,1.989957);
   hdirt_stack_3->SetBinContent(16,2.003377);
   hdirt_stack_3->SetBinContent(17,1.752227);
   hdirt_stack_3->SetBinContent(18,1.874854);
   hdirt_stack_3->SetBinContent(19,0.6512973);
   hdirt_stack_3->SetBinContent(20,0.6056297);
   hdirt_stack_3->SetBinContent(21,0.7568367);
   hdirt_stack_3->SetBinContent(22,0.6287382);
   hdirt_stack_3->SetBinContent(23,0.4142144);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.5770587);
   hdirt_stack_3->SetBinError(3,0.7194366);
   hdirt_stack_3->SetBinError(4,1.173119);
   hdirt_stack_3->SetBinError(5,0.9004071);
   hdirt_stack_3->SetBinError(6,1.156489);
   hdirt_stack_3->SetBinError(7,1.595147);
   hdirt_stack_3->SetBinError(8,0.742203);
   hdirt_stack_3->SetBinError(9,0.9348768);
   hdirt_stack_3->SetBinError(10,0.8606485);
   hdirt_stack_3->SetBinError(11,0.9069981);
   hdirt_stack_3->SetBinError(12,0.64733);
   hdirt_stack_3->SetBinError(13,0.5700722);
   hdirt_stack_3->SetBinError(14,1.085614);
   hdirt_stack_3->SetBinError(15,0.7013847);
   hdirt_stack_3->SetBinError(16,0.7601299);
   hdirt_stack_3->SetBinError(17,0.6967096);
   hdirt_stack_3->SetBinError(18,0.750043);
   hdirt_stack_3->SetBinError(19,0.4229282);
   hdirt_stack_3->SetBinError(20,0.3509354);
   hdirt_stack_3->SetBinError(21,0.3902151);
   hdirt_stack_3->SetBinError(22,0.3958337);
   hdirt_stack_3->SetBinError(23,0.2391468);
   hdirt_stack_3->SetBinError(24,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,4.106273);
   houtFV_stack_4->SetBinContent(2,12.83295);
   houtFV_stack_4->SetBinContent(3,24.17512);
   houtFV_stack_4->SetBinContent(4,33.04504);
   houtFV_stack_4->SetBinContent(5,33.53274);
   houtFV_stack_4->SetBinContent(6,39.73463);
   houtFV_stack_4->SetBinContent(7,36.31338);
   houtFV_stack_4->SetBinContent(8,34.34707);
   houtFV_stack_4->SetBinContent(9,23.97363);
   houtFV_stack_4->SetBinContent(10,23.7908);
   houtFV_stack_4->SetBinContent(11,18.89939);
   houtFV_stack_4->SetBinContent(12,16.22071);
   houtFV_stack_4->SetBinContent(13,11.27383);
   houtFV_stack_4->SetBinContent(14,10.36825);
   houtFV_stack_4->SetBinContent(15,12.81329);
   houtFV_stack_4->SetBinContent(16,9.929842);
   houtFV_stack_4->SetBinContent(17,10.00364);
   houtFV_stack_4->SetBinContent(18,6.885702);
   houtFV_stack_4->SetBinContent(19,10.31978);
   houtFV_stack_4->SetBinContent(20,8.257464);
   houtFV_stack_4->SetBinContent(21,6.969965);
   houtFV_stack_4->SetBinContent(22,5.80547);
   houtFV_stack_4->SetBinContent(23,2.508679);
   houtFV_stack_4->SetBinContent(24,1.115732);
   houtFV_stack_4->SetBinError(1,1.000664);
   houtFV_stack_4->SetBinError(2,1.794578);
   houtFV_stack_4->SetBinError(3,2.483562);
   houtFV_stack_4->SetBinError(4,2.883218);
   houtFV_stack_4->SetBinError(5,2.911365);
   houtFV_stack_4->SetBinError(6,3.173139);
   houtFV_stack_4->SetBinError(7,2.996953);
   houtFV_stack_4->SetBinError(8,2.924732);
   houtFV_stack_4->SetBinError(9,2.389094);
   houtFV_stack_4->SetBinError(10,2.463401);
   houtFV_stack_4->SetBinError(11,2.113228);
   houtFV_stack_4->SetBinError(12,2.067023);
   houtFV_stack_4->SetBinError(13,1.704973);
   houtFV_stack_4->SetBinError(14,1.599769);
   houtFV_stack_4->SetBinError(15,1.737453);
   houtFV_stack_4->SetBinError(16,1.521081);
   houtFV_stack_4->SetBinError(17,1.642137);
   houtFV_stack_4->SetBinError(18,1.300818);
   houtFV_stack_4->SetBinError(19,1.570136);
   houtFV_stack_4->SetBinError(20,1.422093);
   houtFV_stack_4->SetBinError(21,1.37667);
   houtFV_stack_4->SetBinError(22,1.25669);
   houtFV_stack_4->SetBinError(23,0.7786187);
   houtFV_stack_4->SetBinError(24,0.5719249);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.821994);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,17.59583);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.82652);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.72827);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,8.839347);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.771667);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.16991);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.300098);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.491494);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.07349);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.002576);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6131358);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.660726);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8973012);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.367136);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.499125);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.247269);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9240132);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7724387);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7331013);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4924215);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4167175);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3401847);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3182135);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1749792);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.499615);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.032804);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.478372);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.635898);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.397912);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.468498);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.607998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.60459);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.171472);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6968357);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.284072);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7943219);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5988538);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.8933042);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7250721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3564798);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3467942);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5512213);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.4535395);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5469685);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5505148);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4272476);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3342211);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1815295);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4084636);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2741946);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1922885);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3509784);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3150384);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,42.23797);
   hNCpi0inFVres_stack_7->SetBinContent(2,111.7041);
   hNCpi0inFVres_stack_7->SetBinContent(3,168.984);
   hNCpi0inFVres_stack_7->SetBinContent(4,208.8501);
   hNCpi0inFVres_stack_7->SetBinContent(5,220.1969);
   hNCpi0inFVres_stack_7->SetBinContent(6,214.0382);
   hNCpi0inFVres_stack_7->SetBinContent(7,201.2476);
   hNCpi0inFVres_stack_7->SetBinContent(8,189.4768);
   hNCpi0inFVres_stack_7->SetBinContent(9,149.8422);
   hNCpi0inFVres_stack_7->SetBinContent(10,133.7586);
   hNCpi0inFVres_stack_7->SetBinContent(11,116.516);
   hNCpi0inFVres_stack_7->SetBinContent(12,103.2278);
   hNCpi0inFVres_stack_7->SetBinContent(13,90.36746);
   hNCpi0inFVres_stack_7->SetBinContent(14,75.26235);
   hNCpi0inFVres_stack_7->SetBinContent(15,71.80173);
   hNCpi0inFVres_stack_7->SetBinContent(16,68.60684);
   hNCpi0inFVres_stack_7->SetBinContent(17,61.70334);
   hNCpi0inFVres_stack_7->SetBinContent(18,57.49167);
   hNCpi0inFVres_stack_7->SetBinContent(19,52.33931);
   hNCpi0inFVres_stack_7->SetBinContent(20,47.13078);
   hNCpi0inFVres_stack_7->SetBinContent(21,35.32154);
   hNCpi0inFVres_stack_7->SetBinContent(22,27.86042);
   hNCpi0inFVres_stack_7->SetBinContent(23,16.14803);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.108636);
   hNCpi0inFVres_stack_7->SetBinError(1,2.209044);
   hNCpi0inFVres_stack_7->SetBinError(2,3.465064);
   hNCpi0inFVres_stack_7->SetBinError(3,4.223441);
   hNCpi0inFVres_stack_7->SetBinError(4,4.737205);
   hNCpi0inFVres_stack_7->SetBinError(5,4.916009);
   hNCpi0inFVres_stack_7->SetBinError(6,4.80559);
   hNCpi0inFVres_stack_7->SetBinError(7,4.668967);
   hNCpi0inFVres_stack_7->SetBinError(8,4.547762);
   hNCpi0inFVres_stack_7->SetBinError(9,3.934099);
   hNCpi0inFVres_stack_7->SetBinError(10,3.756091);
   hNCpi0inFVres_stack_7->SetBinError(11,3.501555);
   hNCpi0inFVres_stack_7->SetBinError(12,3.350896);
   hNCpi0inFVres_stack_7->SetBinError(13,3.149261);
   hNCpi0inFVres_stack_7->SetBinError(14,2.765351);
   hNCpi0inFVres_stack_7->SetBinError(15,2.685063);
   hNCpi0inFVres_stack_7->SetBinError(16,2.614981);
   hNCpi0inFVres_stack_7->SetBinError(17,2.608543);
   hNCpi0inFVres_stack_7->SetBinError(18,2.472086);
   hNCpi0inFVres_stack_7->SetBinError(19,2.426948);
   hNCpi0inFVres_stack_7->SetBinError(20,2.288062);
   hNCpi0inFVres_stack_7->SetBinError(21,1.948961);
   hNCpi0inFVres_stack_7->SetBinError(22,1.712346);
   hNCpi0inFVres_stack_7->SetBinError(23,1.356514);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8618652);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.33966);
   hNCpi0inFVdis_stack_8->SetBinContent(2,30.43969);
   hNCpi0inFVdis_stack_8->SetBinContent(3,45.05055);
   hNCpi0inFVdis_stack_8->SetBinContent(4,48.26801);
   hNCpi0inFVdis_stack_8->SetBinContent(5,44.95272);
   hNCpi0inFVdis_stack_8->SetBinContent(6,38.61459);
   hNCpi0inFVdis_stack_8->SetBinContent(7,35.77891);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.63155);
   hNCpi0inFVdis_stack_8->SetBinContent(9,25.64636);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.10044);
   hNCpi0inFVdis_stack_8->SetBinContent(11,20.24469);
   hNCpi0inFVdis_stack_8->SetBinContent(12,18.41956);
   hNCpi0inFVdis_stack_8->SetBinContent(13,12.16926);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.0682);
   hNCpi0inFVdis_stack_8->SetBinContent(15,13.05643);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.02385);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.654505);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.336147);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.04039);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.096753);
   hNCpi0inFVdis_stack_8->SetBinContent(21,9.371288);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.203618);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.86317);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.171561);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.793084);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.218538);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.229009);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.160933);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.013479);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.967742);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.636847);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.691612);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.396987);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.481058);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.447523);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.100823);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.008115);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.225258);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.014689);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.900656);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8875607);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.072074);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8204519);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.04135);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.7633573);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6458371);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2404119);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,16.25519);
   hCCpi0inFV_stack_10->SetBinContent(2,46.61887);
   hCCpi0inFV_stack_10->SetBinContent(3,70.15559);
   hCCpi0inFV_stack_10->SetBinContent(4,70.76843);
   hCCpi0inFV_stack_10->SetBinContent(5,58.96383);
   hCCpi0inFV_stack_10->SetBinContent(6,64.72644);
   hCCpi0inFV_stack_10->SetBinContent(7,62.4467);
   hCCpi0inFV_stack_10->SetBinContent(8,52.80822);
   hCCpi0inFV_stack_10->SetBinContent(9,42.95254);
   hCCpi0inFV_stack_10->SetBinContent(10,38.25408);
   hCCpi0inFV_stack_10->SetBinContent(11,34.33136);
   hCCpi0inFV_stack_10->SetBinContent(12,28.46586);
   hCCpi0inFV_stack_10->SetBinContent(13,23.29342);
   hCCpi0inFV_stack_10->SetBinContent(14,19.93747);
   hCCpi0inFV_stack_10->SetBinContent(15,24.31482);
   hCCpi0inFV_stack_10->SetBinContent(16,22.64496);
   hCCpi0inFV_stack_10->SetBinContent(17,14.53425);
   hCCpi0inFV_stack_10->SetBinContent(18,18.94569);
   hCCpi0inFV_stack_10->SetBinContent(19,16.80525);
   hCCpi0inFV_stack_10->SetBinContent(20,16.48004);
   hCCpi0inFV_stack_10->SetBinContent(21,9.934803);
   hCCpi0inFV_stack_10->SetBinContent(22,10.9107);
   hCCpi0inFV_stack_10->SetBinContent(23,7.751698);
   hCCpi0inFV_stack_10->SetBinContent(24,3.621054);
   hCCpi0inFV_stack_10->SetBinError(1,2.043844);
   hCCpi0inFV_stack_10->SetBinError(2,3.394122);
   hCCpi0inFV_stack_10->SetBinError(3,4.194448);
   hCCpi0inFV_stack_10->SetBinError(4,4.252487);
   hCCpi0inFV_stack_10->SetBinError(5,3.78591);
   hCCpi0inFV_stack_10->SetBinError(6,4.079025);
   hCCpi0inFV_stack_10->SetBinError(7,3.95235);
   hCCpi0inFV_stack_10->SetBinError(8,3.718422);
   hCCpi0inFV_stack_10->SetBinError(9,3.346316);
   hCCpi0inFV_stack_10->SetBinError(10,3.071267);
   hCCpi0inFV_stack_10->SetBinError(11,2.932942);
   hCCpi0inFV_stack_10->SetBinError(12,2.634333);
   hCCpi0inFV_stack_10->SetBinError(13,2.369407);
   hCCpi0inFV_stack_10->SetBinError(14,2.287715);
   hCCpi0inFV_stack_10->SetBinError(15,2.469617);
   hCCpi0inFV_stack_10->SetBinError(16,2.356963);
   hCCpi0inFV_stack_10->SetBinError(17,1.841376);
   hCCpi0inFV_stack_10->SetBinError(18,2.134095);
   hCCpi0inFV_stack_10->SetBinError(19,2.058661);
   hCCpi0inFV_stack_10->SetBinError(20,1.991897);
   hCCpi0inFV_stack_10->SetBinError(21,1.546365);
   hCCpi0inFV_stack_10->SetBinError(22,1.644628);
   hCCpi0inFV_stack_10->SetBinError(23,1.453134);
   hCCpi0inFV_stack_10->SetBinError(24,0.932597);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.819844);
   hNCinFV_stack_11->SetBinContent(2,30.37694);
   hNCinFV_stack_11->SetBinContent(3,39.61678);
   hNCinFV_stack_11->SetBinContent(4,46.40184);
   hNCinFV_stack_11->SetBinContent(5,43.86434);
   hNCinFV_stack_11->SetBinContent(6,35.45049);
   hNCinFV_stack_11->SetBinContent(7,26.73872);
   hNCinFV_stack_11->SetBinContent(8,26.20014);
   hNCinFV_stack_11->SetBinContent(9,23.1121);
   hNCinFV_stack_11->SetBinContent(10,15.04978);
   hNCinFV_stack_11->SetBinContent(11,16.66553);
   hNCinFV_stack_11->SetBinContent(12,13.42449);
   hNCinFV_stack_11->SetBinContent(13,17.66976);
   hNCinFV_stack_11->SetBinContent(14,8.756202);
   hNCinFV_stack_11->SetBinContent(15,11.49162);
   hNCinFV_stack_11->SetBinContent(16,10.88687);
   hNCinFV_stack_11->SetBinContent(17,8.801002);
   hNCinFV_stack_11->SetBinContent(18,11.82564);
   hNCinFV_stack_11->SetBinContent(19,10.46662);
   hNCinFV_stack_11->SetBinContent(20,7.234041);
   hNCinFV_stack_11->SetBinContent(21,8.412642);
   hNCinFV_stack_11->SetBinContent(22,7.810663);
   hNCinFV_stack_11->SetBinContent(23,5.818387);
   hNCinFV_stack_11->SetBinContent(24,2.734337);
   hNCinFV_stack_11->SetBinError(1,1.5699);
   hNCinFV_stack_11->SetBinError(2,2.79623);
   hNCinFV_stack_11->SetBinError(3,3.189259);
   hNCinFV_stack_11->SetBinError(4,3.426978);
   hNCinFV_stack_11->SetBinError(5,3.303422);
   hNCinFV_stack_11->SetBinError(6,3.034093);
   hNCinFV_stack_11->SetBinError(7,2.58198);
   hNCinFV_stack_11->SetBinError(8,2.551772);
   hNCinFV_stack_11->SetBinError(9,2.378673);
   hNCinFV_stack_11->SetBinError(10,1.932641);
   hNCinFV_stack_11->SetBinError(11,2.049473);
   hNCinFV_stack_11->SetBinError(12,1.86132);
   hNCinFV_stack_11->SetBinError(13,2.177041);
   hNCinFV_stack_11->SetBinError(14,1.4696);
   hNCinFV_stack_11->SetBinError(15,1.641401);
   hNCinFV_stack_11->SetBinError(16,1.664564);
   hNCinFV_stack_11->SetBinError(17,1.455365);
   hNCinFV_stack_11->SetBinError(18,1.733752);
   hNCinFV_stack_11->SetBinError(19,1.59489);
   hNCinFV_stack_11->SetBinError(20,1.345794);
   hNCinFV_stack_11->SetBinError(21,1.429223);
   hNCinFV_stack_11->SetBinError(22,1.386345);
   hNCinFV_stack_11->SetBinError(23,1.17726);
   hNCinFV_stack_11->SetBinError(24,0.8558255);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,8.843533);
   hnumuCCinFV_stack_12->SetBinContent(2,20.70467);
   hnumuCCinFV_stack_12->SetBinContent(3,27.06454);
   hnumuCCinFV_stack_12->SetBinContent(4,27.63102);
   hnumuCCinFV_stack_12->SetBinContent(5,28.61992);
   hnumuCCinFV_stack_12->SetBinContent(6,25.68097);
   hnumuCCinFV_stack_12->SetBinContent(7,26.90254);
   hnumuCCinFV_stack_12->SetBinContent(8,32.43192);
   hnumuCCinFV_stack_12->SetBinContent(9,27.9848);
   hnumuCCinFV_stack_12->SetBinContent(10,26.21567);
   hnumuCCinFV_stack_12->SetBinContent(11,26.42247);
   hnumuCCinFV_stack_12->SetBinContent(12,29.38019);
   hnumuCCinFV_stack_12->SetBinContent(13,21.89474);
   hnumuCCinFV_stack_12->SetBinContent(14,22.87708);
   hnumuCCinFV_stack_12->SetBinContent(15,9.693415);
   hnumuCCinFV_stack_12->SetBinContent(16,14.07665);
   hnumuCCinFV_stack_12->SetBinContent(17,10.74198);
   hnumuCCinFV_stack_12->SetBinContent(18,10.49392);
   hnumuCCinFV_stack_12->SetBinContent(19,10.77369);
   hnumuCCinFV_stack_12->SetBinContent(20,8.715343);
   hnumuCCinFV_stack_12->SetBinContent(21,9.215414);
   hnumuCCinFV_stack_12->SetBinContent(22,7.363627);
   hnumuCCinFV_stack_12->SetBinContent(23,3.511929);
   hnumuCCinFV_stack_12->SetBinContent(24,2.163784);
   hnumuCCinFV_stack_12->SetBinError(1,1.53396);
   hnumuCCinFV_stack_12->SetBinError(2,2.296662);
   hnumuCCinFV_stack_12->SetBinError(3,2.624303);
   hnumuCCinFV_stack_12->SetBinError(4,2.644332);
   hnumuCCinFV_stack_12->SetBinError(5,3.180242);
   hnumuCCinFV_stack_12->SetBinError(6,2.744618);
   hnumuCCinFV_stack_12->SetBinError(7,3.207222);
   hnumuCCinFV_stack_12->SetBinError(8,4.185656);
   hnumuCCinFV_stack_12->SetBinError(9,3.092859);
   hnumuCCinFV_stack_12->SetBinError(10,3.007638);
   hnumuCCinFV_stack_12->SetBinError(11,2.918);
   hnumuCCinFV_stack_12->SetBinError(12,3.467543);
   hnumuCCinFV_stack_12->SetBinError(13,2.697785);
   hnumuCCinFV_stack_12->SetBinError(14,3.047704);
   hnumuCCinFV_stack_12->SetBinError(15,1.586025);
   hnumuCCinFV_stack_12->SetBinError(16,2.070559);
   hnumuCCinFV_stack_12->SetBinError(17,1.984492);
   hnumuCCinFV_stack_12->SetBinError(18,2.165692);
   hnumuCCinFV_stack_12->SetBinError(19,1.78);
   hnumuCCinFV_stack_12->SetBinError(20,1.558452);
   hnumuCCinFV_stack_12->SetBinError(21,1.612746);
   hnumuCCinFV_stack_12->SetBinError(22,1.461023);
   hnumuCCinFV_stack_12->SetBinError(23,0.9063248);
   hnumuCCinFV_stack_12->SetBinError(24,0.7266697);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,4.587731);
   hnueCCinFV_stack_13->SetBinContent(2,7.889618);
   hnueCCinFV_stack_13->SetBinContent(3,4.824344);
   hnueCCinFV_stack_13->SetBinContent(4,1.52048);
   hnueCCinFV_stack_13->SetBinContent(5,2.286398);
   hnueCCinFV_stack_13->SetBinContent(6,2.294209);
   hnueCCinFV_stack_13->SetBinContent(7,2.592091);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439483);
   hnueCCinFV_stack_13->SetBinContent(9,2.37692);
   hnueCCinFV_stack_13->SetBinContent(10,2.306771);
   hnueCCinFV_stack_13->SetBinContent(11,0.8594293);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(13,0.8350031);
   hnueCCinFV_stack_13->SetBinContent(14,1.429033);
   hnueCCinFV_stack_13->SetBinContent(15,0.8424087);
   hnueCCinFV_stack_13->SetBinContent(16,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(17,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(18,0.5372608);
   hnueCCinFV_stack_13->SetBinContent(19,1.323669);
   hnueCCinFV_stack_13->SetBinContent(20,1.684429);
   hnueCCinFV_stack_13->SetBinContent(21,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(22,0.7157782);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.271503);
   hnueCCinFV_stack_13->SetBinError(2,2.089579);
   hnueCCinFV_stack_13->SetBinError(3,1.236712);
   hnueCCinFV_stack_13->SetBinError(4,0.5898325);
   hnueCCinFV_stack_13->SetBinError(5,0.7499396);
   hnueCCinFV_stack_13->SetBinError(6,0.9289866);
   hnueCCinFV_stack_13->SetBinError(7,0.9147932);
   hnueCCinFV_stack_13->SetBinError(8,0.3748563);
   hnueCCinFV_stack_13->SetBinError(9,1.367485);
   hnueCCinFV_stack_13->SetBinError(10,0.895086);
   hnueCCinFV_stack_13->SetBinError(11,0.5216512);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(13,0.4935949);
   hnueCCinFV_stack_13->SetBinError(14,0.774276);
   hnueCCinFV_stack_13->SetBinError(15,0.4244054);
   hnueCCinFV_stack_13->SetBinError(16,0.4213728);
   hnueCCinFV_stack_13->SetBinError(17,0.2346262);
   hnueCCinFV_stack_13->SetBinError(18,0.3929604);
   hnueCCinFV_stack_13->SetBinError(19,1.104131);
   hnueCCinFV_stack_13->SetBinError(20,0.7095577);
   hnueCCinFV_stack_13->SetBinError(21,0.4394482);
   hnueCCinFV_stack_13->SetBinError(22,0.5560744);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__5->SetBinContent(1,112.1565);
   hmcerror__5->SetBinContent(2,293.1484);
   hmcerror__5->SetBinContent(3,424.1747);
   hmcerror__5->SetBinContent(4,484.7156);
   hmcerror__5->SetBinContent(5,484.3335);
   hmcerror__5->SetBinContent(6,473.1351);
   hmcerror__5->SetBinContent(7,445.5685);
   hmcerror__5->SetBinContent(8,411.0188);
   hmcerror__5->SetBinContent(9,336.2585);
   hmcerror__5->SetBinContent(10,302.8526);
   hmcerror__5->SetBinContent(11,272.9119);
   hmcerror__5->SetBinContent(12,244.5157);
   hmcerror__5->SetBinContent(13,199.5192);
   hmcerror__5->SetBinContent(14,171.274);
   hmcerror__5->SetBinContent(15,165.0486);
   hmcerror__5->SetBinContent(16,162.0728);
   hmcerror__5->SetBinContent(17,131.5098);
   hmcerror__5->SetBinContent(18,125.8192);
   hmcerror__5->SetBinContent(19,124.0833);
   hmcerror__5->SetBinContent(20,108.6751);
   hmcerror__5->SetBinContent(21,87.48779);
   hmcerror__5->SetBinContent(22,76.38542);
   hmcerror__5->SetBinContent(23,45.09814);
   hmcerror__5->SetBinContent(24,17.74888);
   hmcerror__5->SetBinError(1,38.27913);
   hmcerror__5->SetBinError(2,79.15914);
   hmcerror__5->SetBinError(3,110.3061);
   hmcerror__5->SetBinError(4,121.251);
   hmcerror__5->SetBinError(5,125.461);
   hmcerror__5->SetBinError(6,132.1823);
   hmcerror__5->SetBinError(7,127.2642);
   hmcerror__5->SetBinError(8,120.9339);
   hmcerror__5->SetBinError(9,100.0826);
   hmcerror__5->SetBinError(10,86.41846);
   hmcerror__5->SetBinError(11,81.10712);
   hmcerror__5->SetBinError(12,72.48581);
   hmcerror__5->SetBinError(13,67.10782);
   hmcerror__5->SetBinError(14,51.33805);
   hmcerror__5->SetBinError(15,47.03819);
   hmcerror__5->SetBinError(16,45.28533);
   hmcerror__5->SetBinError(17,37.18914);
   hmcerror__5->SetBinError(18,37.79276);
   hmcerror__5->SetBinError(19,36.08806);
   hmcerror__5->SetBinError(20,33.46306);
   hmcerror__5->SetBinError(21,29.8134);
   hmcerror__5->SetBinError(22,27.09677);
   hmcerror__5->SetBinError(23,18.35015);
   hmcerror__5->SetBinError(24,10.14099);
   hmcerror__5->SetBinError(25,0.3895343);
   hmcerror__5->SetEntries(5638.682);

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
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   90,
   236,
   402,
   445,
   460,
   388,
   396,
   331,
   306,
   245,
   246,
   177,
   186,
   137,
   153,
   145,
   123,
   120,
   104,
   93,
   84,
   54,
   41,
   12};
   Double_t _felx3005[24] = {
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
   Double_t _fely3005[24] = {
   9.6093,
   15.36229,
   20.04994,
   21.09502,
   21.44761,
   19.69772,
   19.89975,
   18.19341,
   17.49286,
   15.65248,
   15.68439,
   13.30413,
   13.63818,
   11.7047,
   12.36932,
   12.04159,
   11.09054,
   10.95445,
   10.19804,
   9.7658,
   9.2886,
   7.4785,
   6.5384,
   3.64022};
   Double_t _fehx3005[24] = {
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
   Double_t _fehy3005[24] = {
   9.4079,
   15.36229,
   20.04994,
   21.09502,
   21.44761,
   19.69772,
   19.89975,
   18.19341,
   17.49286,
   15.65248,
   15.68439,
   13.30413,
   13.63818,
   11.7047,
   12.36932,
   12.04159,
   11.09054,
   10.95445,
   10.19804,
   9.564,
   9.0869,
   7.275,
   6.3331,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,3.465);
   Graph_Graph3005->SetMinimum(7.523802);
   Graph_Graph3005->SetMaximum(528.7564);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 377.5","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
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
   Double_t _fely3006[24] = {
   0.3413009,
   0.270031,
   0.2600487,
   0.2501488,
   0.2590384,
   0.2793754,
   0.285622,
   0.2942295,
   0.2976359,
   0.2853483,
   0.2971916,
   0.2964464,
   0.3363478,
   0.2997421,
   0.284996,
   0.2794135,
   0.2827861,
   0.3003735,
   0.2908373,
   0.3079184,
   0.3407721,
   0.3547374,
   0.4068938,
   0.5713593};
   Double_t _fehx3006[24] = {
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
   Double_t _fehy3006[24] = {
   0.3413009,
   0.270031,
   0.2600487,
   0.2501488,
   0.2590384,
   0.2793754,
   0.285622,
   0.2942295,
   0.2976359,
   0.2853483,
   0.2971916,
   0.2964464,
   0.3363478,
   0.2997421,
   0.284996,
   0.2794135,
   0.2827861,
   0.3003735,
   0.2908373,
   0.3079184,
   0.3407721,
   0.3547374,
   0.4068938,
   0.5713593};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,3.465);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
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
   Double_t _fely3007[24] = {
   0.2622346,
   0.2485433,
   0.2421438,
   0.2395503,
   0.2473346,
   0.2628469,
   0.2748319,
   0.2828305,
   0.2871979,
   0.2688097,
   0.2681176,
   0.269939,
   0.2518209,
   0.2669317,
   0.2631766,
   0.245454,
   0.2581182,
   0.272311,
   0.2479419,
   0.2585976,
   0.2715165,
   0.2643764,
   0.2587481,
   0.2701039};
   Double_t _fehx3007[24] = {
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
   Double_t _fehy3007[24] = {
   0.2622346,
   0.2485433,
   0.2421438,
   0.2395503,
   0.2473346,
   0.2628469,
   0.2748319,
   0.2828305,
   0.2871979,
   0.2688097,
   0.2681176,
   0.269939,
   0.2518209,
   0.2669317,
   0.2631766,
   0.245454,
   0.2581182,
   0.272311,
   0.2479419,
   0.2585976,
   0.2715165,
   0.2643764,
   0.2587481,
   0.2701039};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,3.465);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   0.8024498,
   0.805053,
   0.9477228,
   0.918064,
   0.9497588,
   0.8200617,
   0.8887523,
   0.805316,
   0.9100142,
   0.8089745,
   0.9013898,
   0.7238798,
   0.9322413,
   0.7998877,
   0.9269999,
   0.8946596,
   0.9352915,
   0.9537493,
   0.8381464,
   0.8557617,
   0.9601339,
   0.7069412,
   0.9091285,
   0.6760991};
   Double_t _felx3008[24] = {
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
   Double_t _fely3008[24] = {
   0.08567757,
   0.05240449,
   0.04726811,
   0.04352041,
   0.04428273,
   0.04163233,
   0.04466148,
   0.04426417,
   0.05202205,
   0.05168348,
   0.05747051,
   0.05441014,
   0.06835525,
   0.06833902,
   0.0749435,
   0.07429744,
   0.0843324,
   0.087065,
   0.08218702,
   0.08986234,
   0.1061702,
   0.09790481,
   0.1449816,
   0.2050958};
   Double_t _fehx3008[24] = {
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
   Double_t _fehy3008[24] = {
   0.08388186,
   0.05240449,
   0.04726811,
   0.04352041,
   0.04428273,
   0.04163233,
   0.04466148,
   0.04426417,
   0.05202205,
   0.05168348,
   0.05747051,
   0.05441014,
   0.06835525,
   0.06833902,
   0.0749435,
   0.07429744,
   0.0843324,
   0.087065,
   0.08218702,
   0.08800543,
   0.1038648,
   0.09524069,
   0.1404293,
   0.1924347};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,3.465);
   Graph_Graph3008->SetMinimum(0.4117037);
   Graph_Graph3008->SetMaximum(1.123298);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
