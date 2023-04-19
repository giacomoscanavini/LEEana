#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 17:15:00 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(-0.4846154,-2.674402,3.553846,295.7325);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__19->SetBinContent(1,15.86862);
   hmc__19->SetBinContent(2,51.341);
   hmc__19->SetBinContent(3,73.93876);
   hmc__19->SetBinContent(4,107.157);
   hmc__19->SetBinContent(5,111.6874);
   hmc__19->SetBinContent(6,120.847);
   hmc__19->SetBinContent(7,116.3927);
   hmc__19->SetBinContent(8,133.7201);
   hmc__19->SetBinContent(9,127.6957);
   hmc__19->SetBinContent(10,126.5636);
   hmc__19->SetBinContent(11,130.1358);
   hmc__19->SetBinContent(12,119.4428);
   hmc__19->SetBinContent(13,106.0114);
   hmc__19->SetBinContent(14,102.3991);
   hmc__19->SetBinContent(15,100.1768);
   hmc__19->SetBinContent(16,89.38727);
   hmc__19->SetBinContent(17,78.16456);
   hmc__19->SetBinContent(18,70.96565);
   hmc__19->SetBinContent(19,64.75624);
   hmc__19->SetBinContent(20,61.63771);
   hmc__19->SetBinContent(21,46.19965);
   hmc__19->SetBinContent(22,35.79768);
   hmc__19->SetBinContent(23,19.86087);
   hmc__19->SetBinContent(24,6.35934);
   hmc__19->SetBinError(1,9.346845);
   hmc__19->SetBinError(2,23.9778);
   hmc__19->SetBinError(3,31.34279);
   hmc__19->SetBinError(4,38.93522);
   hmc__19->SetBinError(5,42.67005);
   hmc__19->SetBinError(6,50.03929);
   hmc__19->SetBinError(7,50.51359);
   hmc__19->SetBinError(8,53.67118);
   hmc__19->SetBinError(9,52.98612);
   hmc__19->SetBinError(10,53.18682);
   hmc__19->SetBinError(11,51.3871);
   hmc__19->SetBinError(12,50.83681);
   hmc__19->SetBinError(13,43.26891);
   hmc__19->SetBinError(14,38.12208);
   hmc__19->SetBinError(15,38.14901);
   hmc__19->SetBinError(16,35.17206);
   hmc__19->SetBinError(17,30.98466);
   hmc__19->SetBinError(18,28.41815);
   hmc__19->SetBinError(19,25.31661);
   hmc__19->SetBinError(20,24.38061);
   hmc__19->SetBinError(21,19.63227);
   hmc__19->SetBinError(22,13.68788);
   hmc__19->SetBinError(23,12.94452);
   hmc__19->SetBinError(24,4.492821);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-2.674402);
   hmc__19->SetMaximum(280.8122);
   hmc__19->SetEntries(1993.425);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,3.15);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(140.4061);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(3,0.5884556);
   hbadmatch_stack_1->SetBinContent(4,1.270501);
   hbadmatch_stack_1->SetBinContent(5,0.4325062);
   hbadmatch_stack_1->SetBinContent(6,2.544664);
   hbadmatch_stack_1->SetBinContent(7,1.569973);
   hbadmatch_stack_1->SetBinContent(8,3.074038);
   hbadmatch_stack_1->SetBinContent(9,3.311039);
   hbadmatch_stack_1->SetBinContent(10,3.183844);
   hbadmatch_stack_1->SetBinContent(11,5.380256);
   hbadmatch_stack_1->SetBinContent(12,2.856485);
   hbadmatch_stack_1->SetBinContent(13,0.8770743);
   hbadmatch_stack_1->SetBinContent(14,2.018831);
   hbadmatch_stack_1->SetBinContent(15,2.356824);
   hbadmatch_stack_1->SetBinContent(16,2.405105);
   hbadmatch_stack_1->SetBinContent(17,1.108493);
   hbadmatch_stack_1->SetBinContent(18,0.5901693);
   hbadmatch_stack_1->SetBinContent(19,2.083328);
   hbadmatch_stack_1->SetBinContent(20,1.518779);
   hbadmatch_stack_1->SetBinContent(21,1.413964);
   hbadmatch_stack_1->SetBinContent(22,1.125349);
   hbadmatch_stack_1->SetBinContent(23,0.785171);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(3,0.3397478);
   hbadmatch_stack_1->SetBinError(4,0.5895188);
   hbadmatch_stack_1->SetBinError(5,0.3070737);
   hbadmatch_stack_1->SetBinError(6,0.8346198);
   hbadmatch_stack_1->SetBinError(7,0.6081355);
   hbadmatch_stack_1->SetBinError(8,0.8780156);
   hbadmatch_stack_1->SetBinError(9,0.9922954);
   hbadmatch_stack_1->SetBinError(10,1.382508);
   hbadmatch_stack_1->SetBinError(11,1.215089);
   hbadmatch_stack_1->SetBinError(12,0.8529609);
   hbadmatch_stack_1->SetBinError(13,0.5197486);
   hbadmatch_stack_1->SetBinError(14,0.8367539);
   hbadmatch_stack_1->SetBinError(15,0.881217);
   hbadmatch_stack_1->SetBinError(16,0.838779);
   hbadmatch_stack_1->SetBinError(17,0.5034258);
   hbadmatch_stack_1->SetBinError(18,0.340721);
   hbadmatch_stack_1->SetBinError(19,0.7165943);
   hbadmatch_stack_1->SetBinError(20,0.5892709);
   hbadmatch_stack_1->SetBinError(21,0.6515799);
   hbadmatch_stack_1->SetBinError(22,0.5194673);
   hbadmatch_stack_1->SetBinError(23,0.3925882);
   hbadmatch_stack_1->SetEntries(164);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(2,2.25642);
   hext_stack_2->SetBinContent(3,3.394015);
   hext_stack_2->SetBinContent(4,5.732637);
   hext_stack_2->SetBinContent(5,3.979379);
   hext_stack_2->SetBinContent(6,4.550381);
   hext_stack_2->SetBinContent(7,2.103607);
   hext_stack_2->SetBinContent(8,7.784402);
   hext_stack_2->SetBinContent(9,5.8292);
   hext_stack_2->SetBinContent(10,5.109793);
   hext_stack_2->SetBinContent(11,6.73896);
   hext_stack_2->SetBinContent(12,6.228619);
   hext_stack_2->SetBinContent(13,5.746998);
   hext_stack_2->SetBinContent(14,6.235799);
   hext_stack_2->SetBinContent(15,2.185808);
   hext_stack_2->SetBinContent(16,6.082985);
   hext_stack_2->SetBinContent(17,4.53161);
   hext_stack_2->SetBinContent(18,4.378797);
   hext_stack_2->SetBinContent(19,3.088388);
   hext_stack_2->SetBinContent(20,2.103607);
   hext_stack_2->SetBinContent(21,2.580818);
   hext_stack_2->SetBinContent(22,2.73804);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinError(2,1.067257);
   hext_stack_2->SetBinError(3,1.254957);
   hext_stack_2->SetBinError(4,1.665546);
   hext_stack_2->SetBinError(5,1.207483);
   hext_stack_2->SetBinError(6,1.320423);
   hext_stack_2->SetBinError(7,0.9761052);
   hext_stack_2->SetBinError(8,1.825754);
   hext_stack_2->SetBinError(9,1.559401);
   hext_stack_2->SetBinError(10,1.447444);
   hext_stack_2->SetBinError(11,1.555655);
   hext_stack_2->SetBinError(12,1.672799);
   hext_stack_2->SetBinError(13,1.540014);
   hext_stack_2->SetBinError(14,1.611538);
   hext_stack_2->SetBinError(15,1.006415);
   hext_stack_2->SetBinError(16,1.552674);
   hext_stack_2->SetBinError(17,1.418025);
   hext_stack_2->SetBinError(18,1.350755);
   hext_stack_2->SetBinError(19,1.096541);
   hext_stack_2->SetBinError(20,0.9761052);
   hext_stack_2->SetBinError(21,1.115469);
   hext_stack_2->SetBinError(22,1.25126);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetEntries(235);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.4377912);
   hdirt_stack_3->SetBinContent(6,0.3790882);
   hdirt_stack_3->SetBinContent(7,0.5716082);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.060553);
   hdirt_stack_3->SetBinContent(15,0.402661);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.9995059);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.9411583);
   hdirt_stack_3->SetBinContent(20,0.4247338);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2188956);
   hdirt_stack_3->SetBinError(5,0.3095651);
   hdirt_stack_3->SetBinError(6,0.2712507);
   hdirt_stack_3->SetBinError(7,0.3390821);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(14,0.5513393);
   hdirt_stack_3->SetBinError(15,0.2961962);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.58556);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.4873249);
   hdirt_stack_3->SetBinError(20,0.4247338);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetEntries(33);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,0.9286332);
   houtFV_stack_4->SetBinContent(2,0.9801958);
   houtFV_stack_4->SetBinContent(3,1.515398);
   houtFV_stack_4->SetBinContent(4,3.906011);
   houtFV_stack_4->SetBinContent(5,3.120935);
   houtFV_stack_4->SetBinContent(6,3.547918);
   houtFV_stack_4->SetBinContent(7,2.590875);
   houtFV_stack_4->SetBinContent(8,1.56527);
   houtFV_stack_4->SetBinContent(9,3.565999);
   houtFV_stack_4->SetBinContent(10,1.900526);
   houtFV_stack_4->SetBinContent(11,2.444031);
   houtFV_stack_4->SetBinContent(12,1.765367);
   houtFV_stack_4->SetBinContent(13,3.867078);
   houtFV_stack_4->SetBinContent(14,1.960392);
   houtFV_stack_4->SetBinContent(15,2.7845);
   houtFV_stack_4->SetBinContent(16,2.961401);
   houtFV_stack_4->SetBinContent(17,1.999038);
   houtFV_stack_4->SetBinContent(18,4.443133);
   houtFV_stack_4->SetBinContent(19,2.359826);
   houtFV_stack_4->SetBinContent(20,2.839153);
   houtFV_stack_4->SetBinContent(21,1.150751);
   houtFV_stack_4->SetBinContent(22,0.7319179);
   houtFV_stack_4->SetBinContent(23,2.344287);
   houtFV_stack_4->SetBinContent(24,0.767341);
   houtFV_stack_4->SetBinError(1,0.48078);
   houtFV_stack_4->SetBinError(2,0.4383608);
   houtFV_stack_4->SetBinError(3,0.588146);
   houtFV_stack_4->SetBinError(4,1.002466);
   houtFV_stack_4->SetBinError(5,0.9320616);
   houtFV_stack_4->SetBinError(6,1.026341);
   houtFV_stack_4->SetBinError(7,0.8095761);
   houtFV_stack_4->SetBinError(8,0.5534115);
   houtFV_stack_4->SetBinError(9,0.919558);
   houtFV_stack_4->SetBinError(10,0.7021187);
   houtFV_stack_4->SetBinError(11,0.759648);
   houtFV_stack_4->SetBinError(12,0.5884604);
   houtFV_stack_4->SetBinError(13,1.043702);
   houtFV_stack_4->SetBinError(14,0.6199358);
   houtFV_stack_4->SetBinError(15,0.8323377);
   houtFV_stack_4->SetBinError(16,0.8854964);
   houtFV_stack_4->SetBinError(17,0.7339349);
   houtFV_stack_4->SetBinError(18,1.113344);
   houtFV_stack_4->SetBinError(19,0.7374741);
   houtFV_stack_4->SetBinError(20,0.8093956);
   houtFV_stack_4->SetBinError(21,0.5295279);
   houtFV_stack_4->SetBinError(22,0.438694);
   houtFV_stack_4->SetBinError(23,0.8101654);
   houtFV_stack_4->SetBinError(24,0.455548);
   houtFV_stack_4->SetEntries(240);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.319854);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1708531);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1974492);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.017858);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6418679);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.144404);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.14374);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3833116);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2250829);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3608206);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.379057);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(242);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.222812);
   hNCpi0inFVres_stack_7->SetBinContent(2,21.78252);
   hNCpi0inFVres_stack_7->SetBinContent(3,34.14824);
   hNCpi0inFVres_stack_7->SetBinContent(4,47.28738);
   hNCpi0inFVres_stack_7->SetBinContent(5,52.78867);
   hNCpi0inFVres_stack_7->SetBinContent(6,57.30121);
   hNCpi0inFVres_stack_7->SetBinContent(7,61.55977);
   hNCpi0inFVres_stack_7->SetBinContent(8,65.88728);
   hNCpi0inFVres_stack_7->SetBinContent(9,63.64697);
   hNCpi0inFVres_stack_7->SetBinContent(10,62.77675);
   hNCpi0inFVres_stack_7->SetBinContent(11,61.44662);
   hNCpi0inFVres_stack_7->SetBinContent(12,59.87864);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.84079);
   hNCpi0inFVres_stack_7->SetBinContent(14,44.75658);
   hNCpi0inFVres_stack_7->SetBinContent(15,47.75986);
   hNCpi0inFVres_stack_7->SetBinContent(16,41.87773);
   hNCpi0inFVres_stack_7->SetBinContent(17,37.68227);
   hNCpi0inFVres_stack_7->SetBinContent(18,33.57597);
   hNCpi0inFVres_stack_7->SetBinContent(19,31.06661);
   hNCpi0inFVres_stack_7->SetBinContent(20,27.04998);
   hNCpi0inFVres_stack_7->SetBinContent(21,21.50665);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.75175);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.926777);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.787548);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9204266);
   hNCpi0inFVres_stack_7->SetBinError(2,1.567782);
   hNCpi0inFVres_stack_7->SetBinError(3,1.901435);
   hNCpi0inFVres_stack_7->SetBinError(4,2.282882);
   hNCpi0inFVres_stack_7->SetBinError(5,2.3553);
   hNCpi0inFVres_stack_7->SetBinError(6,2.545124);
   hNCpi0inFVres_stack_7->SetBinError(7,2.573297);
   hNCpi0inFVres_stack_7->SetBinError(8,2.680978);
   hNCpi0inFVres_stack_7->SetBinError(9,2.62026);
   hNCpi0inFVres_stack_7->SetBinError(10,2.580798);
   hNCpi0inFVres_stack_7->SetBinError(11,2.553679);
   hNCpi0inFVres_stack_7->SetBinError(12,2.558292);
   hNCpi0inFVres_stack_7->SetBinError(13,2.220685);
   hNCpi0inFVres_stack_7->SetBinError(14,2.121412);
   hNCpi0inFVres_stack_7->SetBinError(15,2.301743);
   hNCpi0inFVres_stack_7->SetBinError(16,2.085532);
   hNCpi0inFVres_stack_7->SetBinError(17,2.066362);
   hNCpi0inFVres_stack_7->SetBinError(18,1.936691);
   hNCpi0inFVres_stack_7->SetBinError(19,1.812639);
   hNCpi0inFVres_stack_7->SetBinError(20,1.670931);
   hNCpi0inFVres_stack_7->SetBinError(21,1.458705);
   hNCpi0inFVres_stack_7->SetBinError(22,1.05244);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7531342);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5856378);
   hNCpi0inFVres_stack_7->SetEntries(17544);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.051494);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.658651);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.097258);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.02403);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.59673);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.76579);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.3536);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.46985);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.6776);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.66157);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.69272);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.426088);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.90827);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.863255);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.754488);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.082144);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.00491);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.586017);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.960488);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.911672);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.400656);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.66263);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.421076);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.4879178);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5415458);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6576806);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8783041);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.004086);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.06131);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.081472);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.140474);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.038074);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.002695);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9642414);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.078348);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.016829);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9532809);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8893856);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.954573);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8709242);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6758251);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9775383);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6531281);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8359608);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5828523);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4688703);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3360594);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1427183);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(20);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,2.234858);
   hCCpi0inFV_stack_10->SetBinContent(2,7.862833);
   hCCpi0inFV_stack_10->SetBinContent(3,10.04929);
   hCCpi0inFV_stack_10->SetBinContent(4,15.46327);
   hCCpi0inFV_stack_10->SetBinContent(5,15.90548);
   hCCpi0inFV_stack_10->SetBinContent(6,18.62436);
   hCCpi0inFV_stack_10->SetBinContent(7,14.40367);
   hCCpi0inFV_stack_10->SetBinContent(8,17.95621);
   hCCpi0inFV_stack_10->SetBinContent(9,21.30573);
   hCCpi0inFV_stack_10->SetBinContent(10,17.5552);
   hCCpi0inFV_stack_10->SetBinContent(11,15.83326);
   hCCpi0inFV_stack_10->SetBinContent(12,10.36458);
   hCCpi0inFV_stack_10->SetBinContent(13,11.0965);
   hCCpi0inFV_stack_10->SetBinContent(14,16.39712);
   hCCpi0inFV_stack_10->SetBinContent(15,13.15203);
   hCCpi0inFV_stack_10->SetBinContent(16,11.22052);
   hCCpi0inFV_stack_10->SetBinContent(17,12.64685);
   hCCpi0inFV_stack_10->SetBinContent(18,9.178135);
   hCCpi0inFV_stack_10->SetBinContent(19,9.474943);
   hCCpi0inFV_stack_10->SetBinContent(20,8.041474);
   hCCpi0inFV_stack_10->SetBinContent(21,5.370012);
   hCCpi0inFV_stack_10->SetBinContent(22,5.521927);
   hCCpi0inFV_stack_10->SetBinContent(23,3.503654);
   hCCpi0inFV_stack_10->SetBinContent(24,0.6803553);
   hCCpi0inFV_stack_10->SetBinError(1,0.7707223);
   hCCpi0inFV_stack_10->SetBinError(2,1.442772);
   hCCpi0inFV_stack_10->SetBinError(3,1.586543);
   hCCpi0inFV_stack_10->SetBinError(4,1.954793);
   hCCpi0inFV_stack_10->SetBinError(5,2.048233);
   hCCpi0inFV_stack_10->SetBinError(6,2.141027);
   hCCpi0inFV_stack_10->SetBinError(7,1.875854);
   hCCpi0inFV_stack_10->SetBinError(8,2.102279);
   hCCpi0inFV_stack_10->SetBinError(9,2.331503);
   hCCpi0inFV_stack_10->SetBinError(10,2.162206);
   hCCpi0inFV_stack_10->SetBinError(11,1.971944);
   hCCpi0inFV_stack_10->SetBinError(12,1.55682);
   hCCpi0inFV_stack_10->SetBinError(13,1.617449);
   hCCpi0inFV_stack_10->SetBinError(14,2.034717);
   hCCpi0inFV_stack_10->SetBinError(15,1.837762);
   hCCpi0inFV_stack_10->SetBinError(16,1.68309);
   hCCpi0inFV_stack_10->SetBinError(17,1.782231);
   hCCpi0inFV_stack_10->SetBinError(18,1.545149);
   hCCpi0inFV_stack_10->SetBinError(19,1.602924);
   hCCpi0inFV_stack_10->SetBinError(20,1.405428);
   hCCpi0inFV_stack_10->SetBinError(21,1.160264);
   hCCpi0inFV_stack_10->SetBinError(22,1.194382);
   hCCpi0inFV_stack_10->SetBinError(23,1.016812);
   hCCpi0inFV_stack_10->SetBinError(24,0.4810838);
   hCCpi0inFV_stack_10->SetEntries(1165);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.268811);
   hNCinFV_stack_11->SetBinContent(2,5.810542);
   hNCinFV_stack_11->SetBinContent(3,8.262419);
   hNCinFV_stack_11->SetBinContent(4,11.38234);
   hNCinFV_stack_11->SetBinContent(5,10.64643);
   hNCinFV_stack_11->SetBinContent(6,9.961616);
   hNCinFV_stack_11->SetBinContent(7,9.284641);
   hNCinFV_stack_11->SetBinContent(8,12.50769);
   hNCinFV_stack_11->SetBinContent(9,7.707538);
   hNCinFV_stack_11->SetBinContent(10,10.07488);
   hNCinFV_stack_11->SetBinContent(11,10.35167);
   hNCinFV_stack_11->SetBinContent(12,10.35843);
   hNCinFV_stack_11->SetBinContent(13,10.26822);
   hNCinFV_stack_11->SetBinContent(14,8.40419);
   hNCinFV_stack_11->SetBinContent(15,9.089617);
   hNCinFV_stack_11->SetBinContent(16,7.074282);
   hNCinFV_stack_11->SetBinContent(17,6.826004);
   hNCinFV_stack_11->SetBinContent(18,5.860415);
   hNCinFV_stack_11->SetBinContent(19,5.570109);
   hNCinFV_stack_11->SetBinContent(20,5.130187);
   hNCinFV_stack_11->SetBinContent(21,5.084778);
   hNCinFV_stack_11->SetBinContent(22,3.66297);
   hNCinFV_stack_11->SetBinContent(23,1.462145);
   hNCinFV_stack_11->SetBinContent(24,0.3934307);
   hNCinFV_stack_11->SetBinError(1,0.5889569);
   hNCinFV_stack_11->SetBinError(2,1.257481);
   hNCinFV_stack_11->SetBinError(3,1.401073);
   hNCinFV_stack_11->SetBinError(4,1.722833);
   hNCinFV_stack_11->SetBinError(5,1.604914);
   hNCinFV_stack_11->SetBinError(6,1.594035);
   hNCinFV_stack_11->SetBinError(7,1.520142);
   hNCinFV_stack_11->SetBinError(8,1.799444);
   hNCinFV_stack_11->SetBinError(9,1.414189);
   hNCinFV_stack_11->SetBinError(10,1.570651);
   hNCinFV_stack_11->SetBinError(11,1.61772);
   hNCinFV_stack_11->SetBinError(12,1.618539);
   hNCinFV_stack_11->SetBinError(13,1.582503);
   hNCinFV_stack_11->SetBinError(14,1.428065);
   hNCinFV_stack_11->SetBinError(15,1.50758);
   hNCinFV_stack_11->SetBinError(16,1.387855);
   hNCinFV_stack_11->SetBinError(17,1.38796);
   hNCinFV_stack_11->SetBinError(18,1.241614);
   hNCinFV_stack_11->SetBinError(19,1.177384);
   hNCinFV_stack_11->SetBinError(20,1.161816);
   hNCinFV_stack_11->SetBinError(21,1.092166);
   hNCinFV_stack_11->SetBinError(22,0.9816245);
   hNCinFV_stack_11->SetBinError(23,0.6198731);
   hNCinFV_stack_11->SetBinError(24,0.2781975);
   hNCinFV_stack_11->SetEntries(747);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.367923);
   hnumuCCinFV_stack_12->SetBinContent(2,6.211271);
   hnumuCCinFV_stack_12->SetBinContent(3,7.438162);
   hnumuCCinFV_stack_12->SetBinContent(4,11.43845);
   hnumuCCinFV_stack_12->SetBinContent(5,12.5091);
   hnumuCCinFV_stack_12->SetBinContent(6,11.92589);
   hnumuCCinFV_stack_12->SetBinContent(7,10.73635);
   hnumuCCinFV_stack_12->SetBinContent(8,13.19068);
   hnumuCCinFV_stack_12->SetBinContent(9,10.204);
   hnumuCCinFV_stack_12->SetBinContent(10,13.86176);
   hnumuCCinFV_stack_12->SetBinContent(11,15.59063);
   hnumuCCinFV_stack_12->SetBinContent(12,17.29933);
   hnumuCCinFV_stack_12->SetBinContent(13,14.8431);
   hnumuCCinFV_stack_12->SetBinContent(14,11.56505);
   hnumuCCinFV_stack_12->SetBinContent(15,12.49188);
   hnumuCCinFV_stack_12->SetBinContent(16,9.856436);
   hnumuCCinFV_stack_12->SetBinContent(17,6.366792);
   hnumuCCinFV_stack_12->SetBinContent(18,4.731342);
   hnumuCCinFV_stack_12->SetBinContent(19,5.560161);
   hnumuCCinFV_stack_12->SetBinContent(20,7.343397);
   hnumuCCinFV_stack_12->SetBinContent(21,4.966952);
   hnumuCCinFV_stack_12->SetBinContent(22,7.101007);
   hnumuCCinFV_stack_12->SetBinContent(23,3.927397);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8361483);
   hnumuCCinFV_stack_12->SetBinError(1,0.5734685);
   hnumuCCinFV_stack_12->SetBinError(2,1.223913);
   hnumuCCinFV_stack_12->SetBinError(3,1.725367);
   hnumuCCinFV_stack_12->SetBinError(4,2.081986);
   hnumuCCinFV_stack_12->SetBinError(5,2.249792);
   hnumuCCinFV_stack_12->SetBinError(6,2.909845);
   hnumuCCinFV_stack_12->SetBinError(7,1.671859);
   hnumuCCinFV_stack_12->SetBinError(8,1.947862);
   hnumuCCinFV_stack_12->SetBinError(9,1.806442);
   hnumuCCinFV_stack_12->SetBinError(10,2.097861);
   hnumuCCinFV_stack_12->SetBinError(11,2.366132);
   hnumuCCinFV_stack_12->SetBinError(12,2.354691);
   hnumuCCinFV_stack_12->SetBinError(13,2.347143);
   hnumuCCinFV_stack_12->SetBinError(14,1.935686);
   hnumuCCinFV_stack_12->SetBinError(15,2.123278);
   hnumuCCinFV_stack_12->SetBinError(16,1.707548);
   hnumuCCinFV_stack_12->SetBinError(17,1.639594);
   hnumuCCinFV_stack_12->SetBinError(18,1.123672);
   hnumuCCinFV_stack_12->SetBinError(19,1.270021);
   hnumuCCinFV_stack_12->SetBinError(20,1.523838);
   hnumuCCinFV_stack_12->SetBinError(21,1.244118);
   hnumuCCinFV_stack_12->SetBinError(22,1.732926);
   hnumuCCinFV_stack_12->SetBinError(23,0.9746145);
   hnumuCCinFV_stack_12->SetBinError(24,0.4204524);
   hnumuCCinFV_stack_12->SetEntries(869);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.3981072);
   hnueCCinFV_stack_13->SetBinContent(2,1.364368);
   hnueCCinFV_stack_13->SetBinContent(3,0.9710591);
   hnueCCinFV_stack_13->SetBinContent(4,0.7743472);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,1.718857);
   hnueCCinFV_stack_13->SetBinContent(11,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,0.8304475);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.4938565);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinError(1,0.2815619);
   hnueCCinFV_stack_13->SetBinError(2,0.5678847);
   hnueCCinFV_stack_13->SetBinError(3,0.5823682);
   hnueCCinFV_stack_13->SetBinError(4,0.4672522);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.3921167);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.7153079);
   hnueCCinFV_stack_13->SetBinError(11,0.1967157);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.4859259);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.5946997);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.3492179);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__20->SetBinContent(1,15.86862);
   hmcerror__20->SetBinContent(2,51.341);
   hmcerror__20->SetBinContent(3,73.93876);
   hmcerror__20->SetBinContent(4,107.157);
   hmcerror__20->SetBinContent(5,111.6874);
   hmcerror__20->SetBinContent(6,120.847);
   hmcerror__20->SetBinContent(7,116.3927);
   hmcerror__20->SetBinContent(8,133.7201);
   hmcerror__20->SetBinContent(9,127.6957);
   hmcerror__20->SetBinContent(10,126.5636);
   hmcerror__20->SetBinContent(11,130.1358);
   hmcerror__20->SetBinContent(12,119.4428);
   hmcerror__20->SetBinContent(13,106.0114);
   hmcerror__20->SetBinContent(14,102.3991);
   hmcerror__20->SetBinContent(15,100.1768);
   hmcerror__20->SetBinContent(16,89.38727);
   hmcerror__20->SetBinContent(17,78.16456);
   hmcerror__20->SetBinContent(18,70.96565);
   hmcerror__20->SetBinContent(19,64.75624);
   hmcerror__20->SetBinContent(20,61.63771);
   hmcerror__20->SetBinContent(21,46.19965);
   hmcerror__20->SetBinContent(22,35.79768);
   hmcerror__20->SetBinContent(23,19.86087);
   hmcerror__20->SetBinContent(24,6.35934);
   hmcerror__20->SetBinError(1,9.346845);
   hmcerror__20->SetBinError(2,23.9778);
   hmcerror__20->SetBinError(3,31.34279);
   hmcerror__20->SetBinError(4,38.93522);
   hmcerror__20->SetBinError(5,42.67005);
   hmcerror__20->SetBinError(6,50.03929);
   hmcerror__20->SetBinError(7,50.51359);
   hmcerror__20->SetBinError(8,53.67118);
   hmcerror__20->SetBinError(9,52.98612);
   hmcerror__20->SetBinError(10,53.18682);
   hmcerror__20->SetBinError(11,51.3871);
   hmcerror__20->SetBinError(12,50.83681);
   hmcerror__20->SetBinError(13,43.26891);
   hmcerror__20->SetBinError(14,38.12208);
   hmcerror__20->SetBinError(15,38.14901);
   hmcerror__20->SetBinError(16,35.17206);
   hmcerror__20->SetBinError(17,30.98466);
   hmcerror__20->SetBinError(18,28.41815);
   hmcerror__20->SetBinError(19,25.31661);
   hmcerror__20->SetBinError(20,24.38061);
   hmcerror__20->SetBinError(21,19.63227);
   hmcerror__20->SetBinError(22,13.68788);
   hmcerror__20->SetBinError(23,12.94452);
   hmcerror__20->SetBinError(24,4.492821);
   hmcerror__20->SetBinError(25,0.3895343);
   hmcerror__20->SetEntries(1993.425);

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
   Double_t _fy3025[24] = {
   13,
   33,
   65,
   75,
   79,
   83,
   94,
   73,
   72,
   89,
   81,
   105,
   74,
   73,
   90,
   65,
   49,
   60,
   49,
   38,
   39,
   33,
   16,
   4};
   Double_t _felx3025[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3025[24] = {
   3.77763,
   5.8847,
   8.1893,
   8.7852,
   9.0124,
   9.234,
   9.8173,
   8.6693,
   8.6108,
   9.5566,
   9.1239,
   10.24695,
   8.7275,
   8.6693,
   9.6093,
   8.1893,
   7.1318,
   7.8743,
   7.1318,
   6.3013,
   6.3813,
   5.8847,
   4.1628,
   2.29683};
   Double_t _fehx3025[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3025[24] = {
   3.5552,
   5.6776,
   7.9866,
   8.5831,
   8.8105,
   9.0323,
   9.616,
   8.4672,
   8.4085,
   9.3552,
   8.9221,
   10.24695,
   8.5253,
   8.4672,
   9.4079,
   7.9866,
   6.9277,
   7.6713,
   6.9277,
   6.0955,
   6.1757,
   5.6776,
   3.9454,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,3.465);
   Graph_Graph3025->SetMinimum(1.532853);
   Graph_Graph3025->SetMaximum(126.6013);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.26","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[24] = {
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3026[24] = {
   0.5890144,
   0.4670303,
   0.423902,
   0.3633475,
   0.382049,
   0.4140713,
   0.4339928,
   0.4013696,
   0.4149406,
   0.4202378,
   0.3948727,
   0.4256162,
   0.4081533,
   0.3722892,
   0.380817,
   0.3934796,
   0.3964029,
   0.4004494,
   0.3909524,
   0.395547,
   0.424944,
   0.3823678,
   0.6517597,
   0.7064916};
   Double_t _fehx3026[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3026[24] = {
   0.5890144,
   0.4670303,
   0.423902,
   0.3633475,
   0.382049,
   0.4140713,
   0.4339928,
   0.4013696,
   0.4149406,
   0.4202378,
   0.3948727,
   0.4256162,
   0.4081533,
   0.3722892,
   0.380817,
   0.3934796,
   0.3964029,
   0.4004494,
   0.3909524,
   0.395547,
   0.424944,
   0.3823678,
   0.6517597,
   0.7064916};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,3.465);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3027[24] = {
   0.3562325,
   0.3450123,
   0.3528168,
   0.3295417,
   0.3508015,
   0.3687941,
   0.4002315,
   0.3711093,
   0.3687127,
   0.3789134,
   0.3661004,
   0.3764474,
   0.3701542,
   0.3364948,
   0.3549266,
   0.3527041,
   0.346212,
   0.3451337,
   0.3390604,
   0.3229789,
   0.3346043,
   0.3049519,
   0.2978739,
   0.3813567};
   Double_t _fehx3027[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3027[24] = {
   0.3562325,
   0.3450123,
   0.3528168,
   0.3295417,
   0.3508015,
   0.3687941,
   0.4002315,
   0.3711093,
   0.3687127,
   0.3789134,
   0.3661004,
   0.3764474,
   0.3701542,
   0.3364948,
   0.3549266,
   0.3527041,
   0.346212,
   0.3451337,
   0.3390604,
   0.3229789,
   0.3346043,
   0.3049519,
   0.2978739,
   0.3813567};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,3.465);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3028[24] = {
   0.819227,
   0.6427612,
   0.8791059,
   0.6999077,
   0.7073314,
   0.6868187,
   0.8076109,
   0.5459165,
   0.5638406,
   0.7032037,
   0.6224265,
   0.8790816,
   0.6980381,
   0.7128969,
   0.898412,
   0.7271729,
   0.6268826,
   0.8454794,
   0.7566838,
   0.6165057,
   0.8441622,
   0.9218474,
   0.805604,
   0.6289961};
   Double_t _felx3028[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3028[24] = {
   0.2380566,
   0.1146199,
   0.1107579,
   0.08198439,
   0.08069309,
   0.07641065,
   0.08434637,
   0.0648317,
   0.0674322,
   0.07550827,
   0.07011058,
   0.08578958,
   0.08232605,
   0.08466188,
   0.09592345,
   0.09161596,
   0.09124084,
   0.1109593,
   0.110133,
   0.1022312,
   0.1381244,
   0.1643877,
   0.209598,
   0.3611743};
   Double_t _fehx3028[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3028[24] = {
   0.2240397,
   0.1105861,
   0.1080164,
   0.08009837,
   0.07888536,
   0.0747416,
   0.08261688,
   0.06332033,
   0.06584797,
   0.07391698,
   0.06855989,
   0.08578958,
   0.08041871,
   0.08268823,
   0.093913,
   0.0893483,
   0.08862968,
   0.1080988,
   0.1069812,
   0.09889238,
   0.1336742,
   0.1586024,
   0.1986519,
   0.3116455};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,3.465);
   Graph_Graph3028->SetMinimum(0.186559);
   Graph_Graph3028->SetMaximum(1.161713);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
