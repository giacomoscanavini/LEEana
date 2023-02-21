#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sat Feb 18 14:17:36 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-1.075782,3.553846,118.9588);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__25->SetBinContent(1,6.769257);
   hmc__25->SetBinContent(2,21.67924);
   hmc__25->SetBinContent(3,36.36501);
   hmc__25->SetBinContent(4,49.00889);
   hmc__25->SetBinContent(5,51.55442);
   hmc__25->SetBinContent(6,48.9313);
   hmc__25->SetBinContent(7,53.78908);
   hmc__25->SetBinContent(8,50.13152);
   hmc__25->SetBinContent(9,43.70697);
   hmc__25->SetBinContent(10,41.99632);
   hmc__25->SetBinContent(11,48.08128);
   hmc__25->SetBinContent(12,40.59434);
   hmc__25->SetBinContent(13,29.17627);
   hmc__25->SetBinContent(14,22.5824);
   hmc__25->SetBinContent(15,27.21042);
   hmc__25->SetBinContent(16,23.18412);
   hmc__25->SetBinContent(17,20.69501);
   hmc__25->SetBinContent(18,17.03667);
   hmc__25->SetBinContent(19,18.86809);
   hmc__25->SetBinContent(20,19.08075);
   hmc__25->SetBinContent(21,19.19495);
   hmc__25->SetBinContent(22,14.70374);
   hmc__25->SetBinContent(23,13.26854);
   hmc__25->SetBinContent(24,3.449054);
   hmc__25->SetBinError(1,5.197482);
   hmc__25->SetBinError(2,11.96386);
   hmc__25->SetBinError(3,16.45012);
   hmc__25->SetBinError(4,17.75956);
   hmc__25->SetBinError(5,23.76554);
   hmc__25->SetBinError(6,24.56752);
   hmc__25->SetBinError(7,18.03665);
   hmc__25->SetBinError(8,20.44116);
   hmc__25->SetBinError(9,18.0503);
   hmc__25->SetBinError(10,20.48063);
   hmc__25->SetBinError(11,18.87548);
   hmc__25->SetBinError(12,16.32965);
   hmc__25->SetBinError(13,14.06652);
   hmc__25->SetBinError(14,10.35392);
   hmc__25->SetBinError(15,14.20246);
   hmc__25->SetBinError(16,14.8625);
   hmc__25->SetBinError(17,11.25695);
   hmc__25->SetBinError(18,13.18343);
   hmc__25->SetBinError(19,9.398358);
   hmc__25->SetBinError(20,12.3486);
   hmc__25->SetBinError(21,15.37168);
   hmc__25->SetBinError(22,9.637272);
   hmc__25->SetBinError(23,9.620606);
   hmc__25->SetBinError(24,7.048043);
   hmc__25->SetBinError(25,0.3895343);
   hmc__25->SetMinimum(-1.075782);
   hmc__25->SetMaximum(112.9571);
   hmc__25->SetEntries(704.9513);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",24,0,3.15);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(56.47853);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,0.500304);
   hbadmatch_stack_1->SetBinContent(4,1.501543);
   hbadmatch_stack_1->SetBinContent(5,1.342092);
   hbadmatch_stack_1->SetBinContent(6,1.26712);
   hbadmatch_stack_1->SetBinContent(7,1.318683);
   hbadmatch_stack_1->SetBinContent(8,1.769068);
   hbadmatch_stack_1->SetBinContent(9,1.26712);
   hbadmatch_stack_1->SetBinContent(10,2.320286);
   hbadmatch_stack_1->SetBinContent(11,1.329029);
   hbadmatch_stack_1->SetBinContent(12,1.688586);
   hbadmatch_stack_1->SetBinContent(13,1.421886);
   hbadmatch_stack_1->SetBinContent(14,0.8770706);
   hbadmatch_stack_1->SetBinContent(15,1.873763);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.5352025);
   hbadmatch_stack_1->SetBinContent(18,1.465526);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(20,1.217248);
   hbadmatch_stack_1->SetBinContent(21,0.8239622);
   hbadmatch_stack_1->SetBinContent(23,0.2193965);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.3565267);
   hbadmatch_stack_1->SetBinError(4,0.6331768);
   hbadmatch_stack_1->SetBinError(5,0.562811);
   hbadmatch_stack_1->SetBinError(6,0.5883944);
   hbadmatch_stack_1->SetBinError(7,0.5542732);
   hbadmatch_stack_1->SetBinError(8,0.700793);
   hbadmatch_stack_1->SetBinError(9,0.5883944);
   hbadmatch_stack_1->SetBinError(10,0.7551059);
   hbadmatch_stack_1->SetBinError(11,0.654683);
   hbadmatch_stack_1->SetBinError(12,0.6598618);
   hbadmatch_stack_1->SetBinError(13,0.5393236);
   hbadmatch_stack_1->SetBinError(14,0.5197486);
   hbadmatch_stack_1->SetBinError(15,0.7600903);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3921167);
   hbadmatch_stack_1->SetBinError(18,0.6209405);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(20,0.6211758);
   hbadmatch_stack_1->SetBinError(21,0.4932837);
   hbadmatch_stack_1->SetBinError(23,0.2193965);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,4.587862);
   hext_stack_2->SetBinContent(3,6.132056);
   hext_stack_2->SetBinContent(4,5.166044);
   hext_stack_2->SetBinContent(5,6.303639);
   hext_stack_2->SetBinContent(6,3.401196);
   hext_stack_2->SetBinContent(7,8.780714);
   hext_stack_2->SetBinContent(8,5.725457);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(10,3.565599);
   hext_stack_2->SetBinContent(11,5.960472);
   hext_stack_2->SetBinContent(12,6.616447);
   hext_stack_2->SetBinContent(13,2.192989);
   hext_stack_2->SetBinContent(14,3.636211);
   hext_stack_2->SetBinContent(15,3.704052);
   hext_stack_2->SetBinContent(16,3.076798);
   hext_stack_2->SetBinContent(17,1.626396);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,3.069618);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,5.076662);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,5.539512);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.593539);
   hext_stack_2->SetBinError(3,1.772165);
   hext_stack_2->SetBinError(4,1.619774);
   hext_stack_2->SetBinError(5,1.749156);
   hext_stack_2->SetBinError(6,1.172056);
   hext_stack_2->SetBinError(7,2.201666);
   hext_stack_2->SetBinError(8,1.72489);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(10,1.22225);
   hext_stack_2->SetBinError(11,1.794879);
   hext_stack_2->SetBinError(12,1.797459);
   hext_stack_2->SetBinError(13,0.9009267);
   hext_stack_2->SetBinError(14,1.272817);
   hext_stack_2->SetBinError(15,1.443106);
   hext_stack_2->SetBinError(16,1.126269);
   hext_stack_2->SetBinError(17,0.8131978);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,1.212305);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,1.662762);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,1.859751);
   hext_stack_2->SetEntries(193);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.1564614);
   hdirt_stack_3->SetBinContent(5,0.4149213);
   hdirt_stack_3->SetBinContent(7,0.5265896);
   hdirt_stack_3->SetBinContent(8,0.8167974);
   hdirt_stack_3->SetBinContent(9,0.6810553);
   hdirt_stack_3->SetBinContent(10,0.4762587);
   hdirt_stack_3->SetBinContent(11,0.2623434);
   hdirt_stack_3->SetBinContent(17,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.2628198);
   hdirt_stack_3->SetBinContent(22,0.4289006);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(4,0.1564614);
   hdirt_stack_3->SetBinError(5,0.4149213);
   hdirt_stack_3->SetBinError(7,0.3723595);
   hdirt_stack_3->SetBinError(8,0.4978056);
   hdirt_stack_3->SetBinError(9,0.4495348);
   hdirt_stack_3->SetBinError(10,0.3652866);
   hdirt_stack_3->SetBinError(11,0.2623434);
   hdirt_stack_3->SetBinError(17,0.2188956);
   hdirt_stack_3->SetBinError(20,0.2628198);
   hdirt_stack_3->SetBinError(22,0.4289006);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetEntries(19);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,1.322064);
   houtFV_stack_4->SetBinContent(2,3.999767);
   houtFV_stack_4->SetBinContent(3,5.223169);
   houtFV_stack_4->SetBinContent(4,8.351507);
   houtFV_stack_4->SetBinContent(5,9.771708);
   houtFV_stack_4->SetBinContent(6,7.960089);
   houtFV_stack_4->SetBinContent(7,6.358661);
   houtFV_stack_4->SetBinContent(8,10.08277);
   houtFV_stack_4->SetBinContent(9,7.250701);
   houtFV_stack_4->SetBinContent(10,6.451199);
   houtFV_stack_4->SetBinContent(11,7.275761);
   houtFV_stack_4->SetBinContent(12,4.838191);
   houtFV_stack_4->SetBinContent(13,5.080413);
   houtFV_stack_4->SetBinContent(14,3.376046);
   houtFV_stack_4->SetBinContent(15,5.177996);
   houtFV_stack_4->SetBinContent(16,4.050001);
   houtFV_stack_4->SetBinContent(17,3.350271);
   houtFV_stack_4->SetBinContent(18,3.146433);
   houtFV_stack_4->SetBinContent(19,3.068698);
   houtFV_stack_4->SetBinContent(20,5.843139);
   houtFV_stack_4->SetBinContent(21,2.44065);
   houtFV_stack_4->SetBinContent(22,3.181021);
   houtFV_stack_4->SetBinContent(23,2.4255);
   houtFV_stack_4->SetBinContent(24,1.270501);
   houtFV_stack_4->SetBinError(1,0.5554667);
   houtFV_stack_4->SetBinError(2,1.03826);
   houtFV_stack_4->SetBinError(3,1.125995);
   houtFV_stack_4->SetBinError(4,1.495934);
   houtFV_stack_4->SetBinError(5,1.593531);
   houtFV_stack_4->SetBinError(6,1.444972);
   houtFV_stack_4->SetBinError(7,1.241646);
   houtFV_stack_4->SetBinError(8,1.577868);
   houtFV_stack_4->SetBinError(9,1.370974);
   houtFV_stack_4->SetBinError(10,1.281725);
   houtFV_stack_4->SetBinError(11,1.438594);
   houtFV_stack_4->SetBinError(12,1.092603);
   houtFV_stack_4->SetBinError(13,1.086399);
   houtFV_stack_4->SetBinError(14,0.8997438);
   houtFV_stack_4->SetBinError(15,1.123985);
   houtFV_stack_4->SetBinError(16,0.9492092);
   houtFV_stack_4->SetBinError(17,0.9044003);
   houtFV_stack_4->SetBinError(18,0.9041698);
   houtFV_stack_4->SetBinError(19,0.841534);
   houtFV_stack_4->SetBinError(20,1.26299);
   houtFV_stack_4->SetBinError(21,0.7587757);
   houtFV_stack_4->SetBinError(22,0.8783531);
   houtFV_stack_4->SetBinError(23,0.8483827);
   houtFV_stack_4->SetBinError(24,0.5895188);
   houtFV_stack_4->SetEntries(520);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.674008);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.420842);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.487194);
   hNCpi0inFVres_stack_7->SetBinContent(4,8.960573);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.80565);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.18123);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.4628);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.133798);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.831306);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.34879);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.666065);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.640639);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.823995);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.801232);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.145073);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.173646);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.598115);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.029906);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.972778);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.235584);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.232176);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.957584);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.25534);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.473804);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4373019);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7153211);
   hNCpi0inFVres_stack_7->SetBinError(3,0.892081);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8946941);
   hNCpi0inFVres_stack_7->SetBinError(5,1.067222);
   hNCpi0inFVres_stack_7->SetBinError(6,1.265393);
   hNCpi0inFVres_stack_7->SetBinError(7,1.111438);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9695418);
   hNCpi0inFVres_stack_7->SetBinError(9,1.050714);
   hNCpi0inFVres_stack_7->SetBinError(10,1.07874);
   hNCpi0inFVres_stack_7->SetBinError(11,1.044802);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8531269);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9535196);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7974788);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6686844);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7608896);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5809014);
   hNCpi0inFVres_stack_7->SetBinError(18,0.659749);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6787469);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6000717);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4894487);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6358672);
   hNCpi0inFVres_stack_7->SetBinError(23,0.3831421);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2438946);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.753636);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.29669);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.900784);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.542988);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.743922);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.812508);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.80197);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.250202);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.886502);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.867812);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.924444);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.118912);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.465258);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.674345);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.18509);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6833858);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7528039);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.725736);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6546538);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.018522);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.654822);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2941681);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3492176);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5922374);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6833193);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3920123);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3782854);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5792244);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6474926);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5975803);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4369306);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4601427);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4448753);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4597906);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5067058);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3447308);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2420254);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2593621);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2928421);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1962949);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3652876);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.267003);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,1.323754);
   hCCpi0inFV_stack_10->SetBinContent(2,2.30424);
   hCCpi0inFV_stack_10->SetBinContent(3,6.36829);
   hCCpi0inFV_stack_10->SetBinContent(4,8.240556);
   hCCpi0inFV_stack_10->SetBinContent(5,8.460055);
   hCCpi0inFV_stack_10->SetBinContent(6,9.530909);
   hCCpi0inFV_stack_10->SetBinContent(7,9.920787);
   hCCpi0inFV_stack_10->SetBinContent(8,10.19502);
   hCCpi0inFV_stack_10->SetBinContent(9,6.646862);
   hCCpi0inFV_stack_10->SetBinContent(10,9.084814);
   hCCpi0inFV_stack_10->SetBinContent(11,9.037508);
   hCCpi0inFV_stack_10->SetBinContent(12,6.906089);
   hCCpi0inFV_stack_10->SetBinContent(13,6.871193);
   hCCpi0inFV_stack_10->SetBinContent(14,4.628633);
   hCCpi0inFV_stack_10->SetBinContent(15,4.644371);
   hCCpi0inFV_stack_10->SetBinContent(16,4.447202);
   hCCpi0inFV_stack_10->SetBinContent(17,4.267775);
   hCCpi0inFV_stack_10->SetBinContent(18,3.421987);
   hCCpi0inFV_stack_10->SetBinContent(19,3.993854);
   hCCpi0inFV_stack_10->SetBinContent(20,3.030797);
   hCCpi0inFV_stack_10->SetBinContent(21,3.711282);
   hCCpi0inFV_stack_10->SetBinContent(22,3.074514);
   hCCpi0inFV_stack_10->SetBinContent(23,1.462145);
   hCCpi0inFV_stack_10->SetBinContent(24,0.5352025);
   hCCpi0inFV_stack_10->SetBinError(1,0.5560625);
   hCCpi0inFV_stack_10->SetBinError(2,0.7071454);
   hCCpi0inFV_stack_10->SetBinError(3,1.274895);
   hCCpi0inFV_stack_10->SetBinError(4,1.481523);
   hCCpi0inFV_stack_10->SetBinError(5,1.504455);
   hCCpi0inFV_stack_10->SetBinError(6,1.52179);
   hCCpi0inFV_stack_10->SetBinError(7,1.652427);
   hCCpi0inFV_stack_10->SetBinError(8,1.611898);
   hCCpi0inFV_stack_10->SetBinError(9,1.272561);
   hCCpi0inFV_stack_10->SetBinError(10,1.600843);
   hCCpi0inFV_stack_10->SetBinError(11,1.54049);
   hCCpi0inFV_stack_10->SetBinError(12,1.27429);
   hCCpi0inFV_stack_10->SetBinError(13,1.321725);
   hCCpi0inFV_stack_10->SetBinError(14,1.10025);
   hCCpi0inFV_stack_10->SetBinError(15,1.009363);
   hCCpi0inFV_stack_10->SetBinError(16,0.9900488);
   hCCpi0inFV_stack_10->SetBinError(17,1.081789);
   hCCpi0inFV_stack_10->SetBinError(18,0.911072);
   hCCpi0inFV_stack_10->SetBinError(19,0.9681825);
   hCCpi0inFV_stack_10->SetBinError(20,0.831764);
   hCCpi0inFV_stack_10->SetBinError(21,0.8862484);
   hCCpi0inFV_stack_10->SetBinError(22,0.920955);
   hCCpi0inFV_stack_10->SetBinError(23,0.6198731);
   hCCpi0inFV_stack_10->SetBinError(24,0.3921167);
   hCCpi0inFV_stack_10->SetEntries(564);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.5867651);
   hNCinFV_stack_11->SetBinContent(3,2.734337);
   hNCinFV_stack_11->SetBinContent(4,2.392469);
   hNCinFV_stack_11->SetBinContent(5,1.270501);
   hNCinFV_stack_11->SetBinContent(6,2.734337);
   hNCinFV_stack_11->SetBinContent(7,3.816427);
   hNCinFV_stack_11->SetBinContent(8,1.767057);
   hNCinFV_stack_11->SetBinContent(9,2.784209);
   hNCinFV_stack_11->SetBinContent(10,3.069443);
   hNCinFV_stack_11->SetBinContent(11,2.932743);
   hNCinFV_stack_11->SetBinContent(12,1.610679);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(15,0.7302274);
   hNCinFV_stack_11->SetBinContent(16,1.65886);
   hNCinFV_stack_11->SetBinContent(17,1.663932);
   hNCinFV_stack_11->SetBinContent(18,2.197444);
   hNCinFV_stack_11->SetBinContent(19,0.3900497);
   hNCinFV_stack_11->SetBinContent(20,0.5884556);
   hNCinFV_stack_11->SetBinContent(21,0.9269427);
   hNCinFV_stack_11->SetBinContent(22,1.127039);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.3387718);
   hNCinFV_stack_11->SetBinError(3,0.8558255);
   hNCinFV_stack_11->SetBinError(4,0.7848912);
   hNCinFV_stack_11->SetBinError(5,0.5895188);
   hNCinFV_stack_11->SetBinError(6,0.8558255);
   hNCinFV_stack_11->SetBinError(7,0.9429407);
   hNCinFV_stack_11->SetBinError(8,0.5890229);
   hNCinFV_stack_11->SetBinError(9,0.8323376);
   hNCinFV_stack_11->SetBinError(10,0.9198757);
   hNCinFV_stack_11->SetBinError(11,0.8785195);
   hNCinFV_stack_11->SetBinError(12,0.6806271);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(15,0.4379386);
   hNCinFV_stack_11->SetBinError(16,0.650338);
   hNCinFV_stack_11->SetBinError(17,0.6518637);
   hNCinFV_stack_11->SetBinError(18,0.760276);
   hNCinFV_stack_11->SetBinError(19,0.2758068);
   hNCinFV_stack_11->SetBinError(20,0.3397478);
   hNCinFV_stack_11->SetBinError(21,0.4800908);
   hNCinFV_stack_11->SetBinError(22,0.5201044);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
   hNCinFV_stack_11->SetEntries(158);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,3.869117);
   hnumuCCinFV_stack_12->SetBinContent(3,4.586782);
   hnumuCCinFV_stack_12->SetBinContent(4,9.566168);
   hnumuCCinFV_stack_12->SetBinContent(5,9.54011);
   hnumuCCinFV_stack_12->SetBinContent(6,7.180569);
   hnumuCCinFV_stack_12->SetBinContent(7,8.71875);
   hnumuCCinFV_stack_12->SetBinContent(8,7.307636);
   hnumuCCinFV_stack_12->SetBinContent(9,10.37611);
   hnumuCCinFV_stack_12->SetBinContent(10,4.700526);
   hnumuCCinFV_stack_12->SetBinContent(11,9.665017);
   hnumuCCinFV_stack_12->SetBinContent(12,8.882009);
   hnumuCCinFV_stack_12->SetBinContent(13,3.296269);
   hnumuCCinFV_stack_12->SetBinContent(14,1.578834);
   hnumuCCinFV_stack_12->SetBinContent(15,4.666148);
   hnumuCCinFV_stack_12->SetBinContent(16,3.813812);
   hnumuCCinFV_stack_12->SetBinContent(17,3.000333);
   hnumuCCinFV_stack_12->SetBinContent(18,1.613639);
   hnumuCCinFV_stack_12->SetBinContent(19,3.378256);
   hnumuCCinFV_stack_12->SetBinContent(20,2.50811);
   hnumuCCinFV_stack_12->SetBinContent(21,2.936855);
   hnumuCCinFV_stack_12->SetBinContent(22,2.493064);
   hnumuCCinFV_stack_12->SetBinContent(23,1.60798);
   hnumuCCinFV_stack_12->SetBinContent(24,0.692416);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,1.218931);
   hnumuCCinFV_stack_12->SetBinError(3,1.101432);
   hnumuCCinFV_stack_12->SetBinError(4,1.719635);
   hnumuCCinFV_stack_12->SetBinError(5,2.016394);
   hnumuCCinFV_stack_12->SetBinError(6,1.959512);
   hnumuCCinFV_stack_12->SetBinError(7,1.514005);
   hnumuCCinFV_stack_12->SetBinError(8,1.405989);
   hnumuCCinFV_stack_12->SetBinError(9,1.873198);
   hnumuCCinFV_stack_12->SetBinError(10,1.049482);
   hnumuCCinFV_stack_12->SetBinError(11,1.765502);
   hnumuCCinFV_stack_12->SetBinError(12,1.875907);
   hnumuCCinFV_stack_12->SetBinError(13,0.8812899);
   hnumuCCinFV_stack_12->SetBinError(14,0.7287664);
   hnumuCCinFV_stack_12->SetBinError(15,1.362699);
   hnumuCCinFV_stack_12->SetBinError(16,1.063106);
   hnumuCCinFV_stack_12->SetBinError(17,0.8510213);
   hnumuCCinFV_stack_12->SetBinError(18,0.6922722);
   hnumuCCinFV_stack_12->SetBinError(19,0.9595934);
   hnumuCCinFV_stack_12->SetBinError(20,0.8139035);
   hnumuCCinFV_stack_12->SetBinError(21,0.871078);
   hnumuCCinFV_stack_12->SetBinError(22,0.8126381);
   hnumuCCinFV_stack_12->SetBinError(23,0.8595415);
   hnumuCCinFV_stack_12->SetBinError(24,0.5128225);
   hnumuCCinFV_stack_12->SetEntries(444);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.7539932);
   hnueCCinFV_stack_13->SetBinContent(3,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(4,0.977464);
   hnueCCinFV_stack_13->SetBinContent(5,1.525337);
   hnueCCinFV_stack_13->SetBinContent(6,0.7796395);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(17,1.569686);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.4489435);
   hnueCCinFV_stack_13->SetBinError(3,0.1529246);
   hnueCCinFV_stack_13->SetBinError(4,0.5774033);
   hnueCCinFV_stack_13->SetBinError(5,1.186444);
   hnueCCinFV_stack_13->SetBinError(6,0.4686238);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.3172361);
   hnueCCinFV_stack_13->SetBinError(17,1.569686);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__26->SetBinContent(1,6.769257);
   hmcerror__26->SetBinContent(2,21.67924);
   hmcerror__26->SetBinContent(3,36.36501);
   hmcerror__26->SetBinContent(4,49.00889);
   hmcerror__26->SetBinContent(5,51.55442);
   hmcerror__26->SetBinContent(6,48.9313);
   hmcerror__26->SetBinContent(7,53.78908);
   hmcerror__26->SetBinContent(8,50.13152);
   hmcerror__26->SetBinContent(9,43.70697);
   hmcerror__26->SetBinContent(10,41.99632);
   hmcerror__26->SetBinContent(11,48.08128);
   hmcerror__26->SetBinContent(12,40.59434);
   hmcerror__26->SetBinContent(13,29.17627);
   hmcerror__26->SetBinContent(14,22.5824);
   hmcerror__26->SetBinContent(15,27.21042);
   hmcerror__26->SetBinContent(16,23.18412);
   hmcerror__26->SetBinContent(17,20.69501);
   hmcerror__26->SetBinContent(18,17.03667);
   hmcerror__26->SetBinContent(19,18.86809);
   hmcerror__26->SetBinContent(20,19.08075);
   hmcerror__26->SetBinContent(21,19.19495);
   hmcerror__26->SetBinContent(22,14.70374);
   hmcerror__26->SetBinContent(23,13.26854);
   hmcerror__26->SetBinContent(24,3.449054);
   hmcerror__26->SetBinError(1,5.197482);
   hmcerror__26->SetBinError(2,11.96386);
   hmcerror__26->SetBinError(3,16.45012);
   hmcerror__26->SetBinError(4,17.75956);
   hmcerror__26->SetBinError(5,23.76554);
   hmcerror__26->SetBinError(6,24.56752);
   hmcerror__26->SetBinError(7,18.03665);
   hmcerror__26->SetBinError(8,20.44116);
   hmcerror__26->SetBinError(9,18.0503);
   hmcerror__26->SetBinError(10,20.48063);
   hmcerror__26->SetBinError(11,18.87548);
   hmcerror__26->SetBinError(12,16.32965);
   hmcerror__26->SetBinError(13,14.06652);
   hmcerror__26->SetBinError(14,10.35392);
   hmcerror__26->SetBinError(15,14.20246);
   hmcerror__26->SetBinError(16,14.8625);
   hmcerror__26->SetBinError(17,11.25695);
   hmcerror__26->SetBinError(18,13.18343);
   hmcerror__26->SetBinError(19,9.398358);
   hmcerror__26->SetBinError(20,12.3486);
   hmcerror__26->SetBinError(21,15.37168);
   hmcerror__26->SetBinError(22,9.637272);
   hmcerror__26->SetBinError(23,9.620606);
   hmcerror__26->SetBinError(24,7.048043);
   hmcerror__26->SetBinError(25,0.3895343);
   hmcerror__26->SetEntries(704.9513);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[24] = {
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
   Double_t _fy3033[24] = {
   5,
   30,
   30,
   32,
   39,
   44,
   37,
   47,
   33,
   37,
   24,
   23,
   26,
   24,
   18,
   20,
   16,
   18,
   21,
   23,
   16,
   11,
   8,
   3};
   Double_t _felx3033[24] = {
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
   Double_t _fely3033[24] = {
   2.48995,
   5.6197,
   5.6197,
   5.7977,
   6.3813,
   6.7671,
   6.2203,
   6.9882,
   5.8847,
   6.2203,
   5.0476,
   4.9457,
   5.2453,
   5.0476,
   4.4008,
   4.6266,
   4.1628,
   4.4008,
   4.7354,
   4.9457,
   4.1628,
   3.4975,
   3.0307,
   2.143368};
   Double_t _fehx3033[24] = {
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
   Double_t _fehy3033[24] = {
   2.21064,
   5.4117,
   5.4117,
   5.5904,
   6.1757,
   6.5623,
   6.0141,
   6.7839,
   5.6776,
   6.0141,
   4.837,
   4.7346,
   5.0358,
   4.837,
   4.1858,
   4.4133,
   3.9454,
   4.1858,
   4.5229,
   4.7346,
   3.9454,
   3.27,
   2.7896,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,3.465);
   Graph_Graph3033->SetMinimum(0.7709688);
   Graph_Graph3033->SetMaximum(59.07663);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.81#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.6/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 132.1","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 37.2","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 116.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[24] = {
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
   Double_t _fy3034[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[24] = {
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
   Double_t _fely3034[24] = {
   0.7678068,
   0.551858,
   0.4523613,
   0.3623742,
   0.4609797,
   0.5020818,
   0.3353218,
   0.4077507,
   0.4129845,
   0.4876769,
   0.3925745,
   0.4022642,
   0.4821221,
   0.4584952,
   0.5219492,
   0.6410637,
   0.543945,
   0.7738266,
   0.4981087,
   0.6471757,
   0.8008188,
   0.6554299,
   0.725069,
   2.043471};
   Double_t _fehx3034[24] = {
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
   Double_t _fehy3034[24] = {
   0.7678068,
   0.551858,
   0.4523613,
   0.3623742,
   0.4609797,
   0.5020818,
   0.3353218,
   0.4077507,
   0.4129845,
   0.4876769,
   0.3925745,
   0.4022642,
   0.4821221,
   0.4584952,
   0.5219492,
   0.6410637,
   0.543945,
   0.7738266,
   0.4981087,
   0.6471757,
   0.8008188,
   0.6554299,
   0.725069,
   2.043471};
   grae = new TGraphAsymmErrors(24,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,3.465);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[24] = {
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
   Double_t _fy3035[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[24] = {
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
   Double_t _fely3035[24] = {
   0.3152546,
   0.2314479,
   0.2339981,
   0.2314375,
   0.2535598,
   0.2641718,
   0.2399965,
   0.2492977,
   0.278608,
   0.2645354,
   0.241727,
   0.2362069,
   0.2972137,
   0.2693741,
   0.2353367,
   0.2792932,
   0.2910602,
   0.2998176,
   0.2284653,
   0.2871586,
   0.1993006,
   0.2920115,
   0.2378078,
   0.4569214};
   Double_t _fehx3035[24] = {
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
   Double_t _fehy3035[24] = {
   0.3152546,
   0.2314479,
   0.2339981,
   0.2314375,
   0.2535598,
   0.2641718,
   0.2399965,
   0.2492977,
   0.278608,
   0.2645354,
   0.241727,
   0.2362069,
   0.2972137,
   0.2693741,
   0.2353367,
   0.2792932,
   0.2910602,
   0.2998176,
   0.2284653,
   0.2871586,
   0.1993006,
   0.2920115,
   0.2378078,
   0.4569214};
   grae = new TGraphAsymmErrors(24,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,3.465);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[24] = {
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
   Double_t _fy3036[24] = {
   0.7386335,
   1.383812,
   0.8249689,
   0.6529428,
   0.7564822,
   0.89922,
   0.6878719,
   0.937534,
   0.7550283,
   0.8810295,
   0.4991547,
   0.5665814,
   0.8911353,
   1.062775,
   0.6615113,
   0.8626594,
   0.7731333,
   1.056545,
   1.11299,
   1.205403,
   0.8335524,
   0.7481089,
   0.60293,
   0.8698036};
   Double_t _felx3036[24] = {
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
   Double_t _fely3036[24] = {
   0.3678321,
   0.2592204,
   0.1545359,
   0.1182989,
   0.1237779,
   0.138298,
   0.1156424,
   0.1393973,
   0.1346399,
   0.1481153,
   0.1049806,
   0.1218323,
   0.1797797,
   0.2235192,
   0.1617322,
   0.199559,
   0.2011499,
   0.2583134,
   0.2509741,
   0.2591984,
   0.2168695,
   0.2378646,
   0.2284125,
   0.6214364};
   Double_t _fehx3036[24] = {
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
   Double_t _fehy3036[24] = {
   0.3265706,
   0.2496259,
   0.1488161,
   0.1140691,
   0.1197899,
   0.1341125,
   0.1118089,
   0.1353221,
   0.1299015,
   0.1432054,
   0.1006005,
   0.116632,
   0.1725992,
   0.2141934,
   0.1538308,
   0.1903587,
   0.190645,
   0.2456936,
   0.2397117,
   0.2481349,
   0.2055436,
   0.2223924,
   0.2102417,
   0.4999109};
   grae = new TGraphAsymmErrors(24,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,3.465);
   Graph_Graph3036->SetMinimum(0.1098601);
   Graph_Graph3036->SetMaximum(1.771945);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
