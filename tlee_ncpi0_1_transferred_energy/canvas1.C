#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Oct 21 19:09:15 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",138,161,1200,900);
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
   pad1->Range(-276.9231,-18.46,2030.769,2041.287);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__1->SetBinContent(2,10.99095);
   hmc__1->SetBinContent(3,273.2414);
   hmc__1->SetBinContent(4,705.5981);
   hmc__1->SetBinContent(5,823.6111);
   hmc__1->SetBinContent(6,806.1503);
   hmc__1->SetBinContent(7,752.9496);
   hmc__1->SetBinContent(8,601.7215);
   hmc__1->SetBinContent(9,558.8662);
   hmc__1->SetBinContent(10,455.8951);
   hmc__1->SetBinContent(11,364.7242);
   hmc__1->SetBinContent(12,300.9756);
   hmc__1->SetBinContent(13,227.1113);
   hmc__1->SetBinContent(14,186.208);
   hmc__1->SetBinContent(15,146.83);
   hmc__1->SetBinContent(16,110.7903);
   hmc__1->SetBinContent(17,89.32776);
   hmc__1->SetBinContent(18,72.89382);
   hmc__1->SetBinContent(19,64.32422);
   hmc__1->SetBinContent(20,44.16346);
   hmc__1->SetBinContent(21,37.07734);
   hmc__1->SetBinContent(22,26.20965);
   hmc__1->SetBinContent(23,20.09316);
   hmc__1->SetBinContent(24,16.85783);
   hmc__1->SetBinContent(25,12.23865);
   hmc__1->SetBinContent(26,70.25237);
   hmc__1->SetBinError(1,0.3895343);
   hmc__1->SetBinError(2,9.552163);
   hmc__1->SetBinError(3,56.86489);
   hmc__1->SetBinError(4,189.6785);
   hmc__1->SetBinError(5,213.5425);
   hmc__1->SetBinError(6,237.609);
   hmc__1->SetBinError(7,266.2968);
   hmc__1->SetBinError(8,237.1309);
   hmc__1->SetBinError(9,199.2375);
   hmc__1->SetBinError(10,140.773);
   hmc__1->SetBinError(11,101.4849);
   hmc__1->SetBinError(12,87.04125);
   hmc__1->SetBinError(13,61.17938);
   hmc__1->SetBinError(14,57.29039);
   hmc__1->SetBinError(15,55.43031);
   hmc__1->SetBinError(16,43.98577);
   hmc__1->SetBinError(17,33.3738);
   hmc__1->SetBinError(18,35.3819);
   hmc__1->SetBinError(19,34.17554);
   hmc__1->SetBinError(20,21.37355);
   hmc__1->SetBinError(21,28.34739);
   hmc__1->SetBinError(22,13.75768);
   hmc__1->SetBinError(23,15.89622);
   hmc__1->SetBinError(24,13.26866);
   hmc__1->SetBinError(25,8.390521);
   hmc__1->SetBinError(26,28.28088);
   hmc__1->SetMinimum(-18.46);
   hmc__1->SetMaximum(1938.3);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,1800);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(864.7916);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,8.857528);
   hbadmatch_stack_1->SetBinContent(4,24.81551);
   hbadmatch_stack_1->SetBinContent(5,20.57255);
   hbadmatch_stack_1->SetBinContent(6,14.85099);
   hbadmatch_stack_1->SetBinContent(7,24.31002);
   hbadmatch_stack_1->SetBinContent(8,13.09936);
   hbadmatch_stack_1->SetBinContent(9,13.85378);
   hbadmatch_stack_1->SetBinContent(10,11.04037);
   hbadmatch_stack_1->SetBinContent(11,9.29685);
   hbadmatch_stack_1->SetBinContent(12,6.184353);
   hbadmatch_stack_1->SetBinContent(13,6.222064);
   hbadmatch_stack_1->SetBinContent(14,4.263976);
   hbadmatch_stack_1->SetBinContent(15,3.903782);
   hbadmatch_stack_1->SetBinContent(16,1.566646);
   hbadmatch_stack_1->SetBinContent(17,1.813576);
   hbadmatch_stack_1->SetBinContent(18,0.9699908);
   hbadmatch_stack_1->SetBinContent(19,1.64515);
   hbadmatch_stack_1->SetBinContent(20,0.8571335);
   hbadmatch_stack_1->SetBinContent(21,0.6475976);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.9012433);
   hbadmatch_stack_1->SetBinContent(24,0.8106244);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,1.30938);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.495979);
   hbadmatch_stack_1->SetBinError(4,3.331645);
   hbadmatch_stack_1->SetBinError(5,2.510276);
   hbadmatch_stack_1->SetBinError(6,1.966961);
   hbadmatch_stack_1->SetBinError(7,3.322182);
   hbadmatch_stack_1->SetBinError(8,1.837955);
   hbadmatch_stack_1->SetBinError(9,2.015738);
   hbadmatch_stack_1->SetBinError(10,1.839311);
   hbadmatch_stack_1->SetBinError(11,2.125337);
   hbadmatch_stack_1->SetBinError(12,1.314521);
   hbadmatch_stack_1->SetBinError(13,1.286777);
   hbadmatch_stack_1->SetBinError(14,1.038428);
   hbadmatch_stack_1->SetBinError(15,1.120889);
   hbadmatch_stack_1->SetBinError(16,0.6288679);
   hbadmatch_stack_1->SetBinError(17,0.7011078);
   hbadmatch_stack_1->SetBinError(18,0.4430544);
   hbadmatch_stack_1->SetBinError(19,0.8370608);
   hbadmatch_stack_1->SetBinError(20,0.4491931);
   hbadmatch_stack_1->SetBinError(21,0.3768218);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.6561368);
   hbadmatch_stack_1->SetBinError(24,0.4059403);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.5510687);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,1.779209);
   hext_stack_2->SetBinContent(3,74.87514);
   hext_stack_2->SetBinContent(4,121.6991);
   hext_stack_2->SetBinContent(5,118.8297);
   hext_stack_2->SetBinContent(6,88.99146);
   hext_stack_2->SetBinContent(7,76.80672);
   hext_stack_2->SetBinContent(8,51.09945);
   hext_stack_2->SetBinContent(9,42.38217);
   hext_stack_2->SetBinContent(10,37.03018);
   hext_stack_2->SetBinContent(11,32.44667);
   hext_stack_2->SetBinContent(12,19.58125);
   hext_stack_2->SetBinContent(13,19.89847);
   hext_stack_2->SetBinContent(14,13.03265);
   hext_stack_2->SetBinContent(15,5.594185);
   hext_stack_2->SetBinContent(16,9.056041);
   hext_stack_2->SetBinContent(17,5.676386);
   hext_stack_2->SetBinContent(18,6.463634);
   hext_stack_2->SetBinContent(19,4.710375);
   hext_stack_2->SetBinContent(20,2.994597);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,3.946247);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,0.7309963);
   hext_stack_2->SetBinContent(25,2.973055);
   hext_stack_2->SetBinContent(26,12.60287);
   hext_stack_2->SetBinError(2,0.9206235);
   hext_stack_2->SetBinError(3,6.080999);
   hext_stack_2->SetBinError(4,7.488931);
   hext_stack_2->SetBinError(5,7.420175);
   hext_stack_2->SetBinError(6,6.321158);
   hext_stack_2->SetBinError(7,5.950019);
   hext_stack_2->SetBinError(8,4.907466);
   hext_stack_2->SetBinError(9,4.423038);
   hext_stack_2->SetBinError(10,4.174089);
   hext_stack_2->SetBinError(11,4.043413);
   hext_stack_2->SetBinError(12,2.964034);
   hext_stack_2->SetBinError(13,3.015283);
   hext_stack_2->SetBinError(14,2.452985);
   hext_stack_2->SetBinError(15,1.478305);
   hext_stack_2->SetBinError(16,2.054944);
   hext_stack_2->SetBinError(17,1.49849);
   hext_stack_2->SetBinError(18,1.744878);
   hext_stack_2->SetBinError(19,1.314751);
   hext_stack_2->SetBinError(20,1.099269);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,1.458663);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.5201503);
   hext_stack_2->SetBinError(25,1.346105);
   hext_stack_2->SetBinError(26,2.446215);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(2,0.15957);
   hdirt_stack_3->SetBinContent(3,9.195874);
   hdirt_stack_3->SetBinContent(4,18.012);
   hdirt_stack_3->SetBinContent(5,12.62746);
   hdirt_stack_3->SetBinContent(6,8.877466);
   hdirt_stack_3->SetBinContent(7,8.019823);
   hdirt_stack_3->SetBinContent(8,5.093012);
   hdirt_stack_3->SetBinContent(9,3.476352);
   hdirt_stack_3->SetBinContent(10,2.486809);
   hdirt_stack_3->SetBinContent(11,2.98444);
   hdirt_stack_3->SetBinContent(12,0.4244012);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.9214264);
   hdirt_stack_3->SetBinContent(19,0.4762587);
   hdirt_stack_3->SetBinError(2,0.15957);
   hdirt_stack_3->SetBinError(3,1.60891);
   hdirt_stack_3->SetBinError(4,2.193297);
   hdirt_stack_3->SetBinError(5,1.847587);
   hdirt_stack_3->SetBinError(6,1.551816);
   hdirt_stack_3->SetBinError(7,1.649915);
   hdirt_stack_3->SetBinError(8,1.398001);
   hdirt_stack_3->SetBinError(9,0.9585554);
   hdirt_stack_3->SetBinError(10,0.888651);
   hdirt_stack_3->SetBinError(11,1.320451);
   hdirt_stack_3->SetBinError(12,0.2451693);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.5708722);
   hdirt_stack_3->SetBinError(19,0.3652866);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,4.334809);
   houtFV_stack_4->SetBinContent(3,47.78036);
   houtFV_stack_4->SetBinContent(4,112.8178);
   houtFV_stack_4->SetBinContent(5,112.7532);
   houtFV_stack_4->SetBinContent(6,89.78246);
   houtFV_stack_4->SetBinContent(7,74.43095);
   houtFV_stack_4->SetBinContent(8,51.74971);
   houtFV_stack_4->SetBinContent(9,51.73781);
   houtFV_stack_4->SetBinContent(10,33.38942);
   houtFV_stack_4->SetBinContent(11,22.45643);
   houtFV_stack_4->SetBinContent(12,18.56473);
   houtFV_stack_4->SetBinContent(13,13.63161);
   houtFV_stack_4->SetBinContent(14,12.50451);
   houtFV_stack_4->SetBinContent(15,9.641088);
   houtFV_stack_4->SetBinContent(16,6.354908);
   houtFV_stack_4->SetBinContent(17,3.835769);
   houtFV_stack_4->SetBinContent(18,2.457577);
   houtFV_stack_4->SetBinContent(19,3.519875);
   houtFV_stack_4->SetBinContent(20,1.852917);
   houtFV_stack_4->SetBinContent(21,1.727375);
   houtFV_stack_4->SetBinContent(22,1.509425);
   houtFV_stack_4->SetBinContent(23,0.9303237);
   houtFV_stack_4->SetBinContent(24,0.3900497);
   houtFV_stack_4->SetBinContent(25,0.536893);
   houtFV_stack_4->SetBinContent(26,1.121968);
   houtFV_stack_4->SetBinError(2,1.006466);
   houtFV_stack_4->SetBinError(3,3.420388);
   houtFV_stack_4->SetBinError(4,5.389347);
   houtFV_stack_4->SetBinError(5,5.50713);
   houtFV_stack_4->SetBinError(6,4.770599);
   houtFV_stack_4->SetBinError(7,4.241661);
   houtFV_stack_4->SetBinError(8,3.474033);
   houtFV_stack_4->SetBinError(9,3.492945);
   houtFV_stack_4->SetBinError(10,2.890165);
   houtFV_stack_4->SetBinError(11,2.345283);
   houtFV_stack_4->SetBinError(12,2.147087);
   houtFV_stack_4->SetBinError(13,1.896062);
   houtFV_stack_4->SetBinError(14,2.077243);
   houtFV_stack_4->SetBinError(15,1.676807);
   houtFV_stack_4->SetBinError(16,1.408598);
   houtFV_stack_4->SetBinError(17,0.9574251);
   houtFV_stack_4->SetBinError(18,0.8156598);
   houtFV_stack_4->SetBinError(19,0.9873917);
   houtFV_stack_4->SetBinError(20,0.722674);
   houtFV_stack_4->SetBinError(21,0.8382854);
   houtFV_stack_4->SetBinError(22,0.7539685);
   houtFV_stack_4->SetBinError(23,0.4814682);
   houtFV_stack_4->SetBinError(24,0.2758068);
   houtFV_stack_4->SetBinError(25,0.3929602);
   houtFV_stack_4->SetBinError(26,0.5181909);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.077023);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,15.13343);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,20.61692);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,22.47305);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,15.80643);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.33481);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.155851);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.81741);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.776924);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.249843);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.005256);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.041726);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.14017);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.198215);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.4530424);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6391259);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2239267);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6045022);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.396827);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.704178);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.782003);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.439423);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8530432);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7078162);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5675858);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8925554);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8972206);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8631545);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8589011);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3845412);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6015333);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1465829);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2575173);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.07917295);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2861196);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1658436);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3720679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.802415);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.968668);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.175914);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.800503);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.06868);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.39619);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.236116);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7640021);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6860244);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.019459);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4825989);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3263664);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1647701);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2185845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1255315);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1083336);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4282274);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.541168);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5020215);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3137991);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3776936);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3016165);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2575036);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2773722);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2287569);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3876994);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2233402);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1763406);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.09308042);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2025098);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1763105);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1083628);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.711536);
   hNCpi0inFVres_stack_7->SetBinContent(3,79.135);
   hNCpi0inFVres_stack_7->SetBinContent(4,265.0195);
   hNCpi0inFVres_stack_7->SetBinContent(5,343.092);
   hNCpi0inFVres_stack_7->SetBinContent(6,328.2125);
   hNCpi0inFVres_stack_7->SetBinContent(7,269.7591);
   hNCpi0inFVres_stack_7->SetBinContent(8,211.6677);
   hNCpi0inFVres_stack_7->SetBinContent(9,165.6931);
   hNCpi0inFVres_stack_7->SetBinContent(10,130.2785);
   hNCpi0inFVres_stack_7->SetBinContent(11,94.40543);
   hNCpi0inFVres_stack_7->SetBinContent(12,74.65124);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.26025);
   hNCpi0inFVres_stack_7->SetBinContent(14,36.80243);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.7486);
   hNCpi0inFVres_stack_7->SetBinContent(16,25.43959);
   hNCpi0inFVres_stack_7->SetBinContent(17,15.99961);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.44057);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.367273);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.578594);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.225023);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.728542);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.888685);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.286485);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.008181);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.76383);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4493793);
   hNCpi0inFVres_stack_7->SetBinError(3,3.0212);
   hNCpi0inFVres_stack_7->SetBinError(4,5.620997);
   hNCpi0inFVres_stack_7->SetBinError(5,6.399253);
   hNCpi0inFVres_stack_7->SetBinError(6,5.674533);
   hNCpi0inFVres_stack_7->SetBinError(7,4.713547);
   hNCpi0inFVres_stack_7->SetBinError(8,4.199819);
   hNCpi0inFVres_stack_7->SetBinError(9,3.666913);
   hNCpi0inFVres_stack_7->SetBinError(10,3.464247);
   hNCpi0inFVres_stack_7->SetBinError(11,3.193294);
   hNCpi0inFVres_stack_7->SetBinError(12,3.099742);
   hNCpi0inFVres_stack_7->SetBinError(13,2.382668);
   hNCpi0inFVres_stack_7->SetBinError(14,2.086688);
   hNCpi0inFVres_stack_7->SetBinError(15,2.18098);
   hNCpi0inFVres_stack_7->SetBinError(16,2.174718);
   hNCpi0inFVres_stack_7->SetBinError(17,1.507113);
   hNCpi0inFVres_stack_7->SetBinError(18,1.762334);
   hNCpi0inFVres_stack_7->SetBinError(19,1.344185);
   hNCpi0inFVres_stack_7->SetBinError(20,1.112094);
   hNCpi0inFVres_stack_7->SetBinError(21,1.07284);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8764105);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8735269);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6205471);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4239068);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9315874);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7157054);
   hNCpi0inFVdis_stack_8->SetBinContent(3,17.68495);
   hNCpi0inFVdis_stack_8->SetBinContent(4,35.41434);
   hNCpi0inFVdis_stack_8->SetBinContent(5,43.07527);
   hNCpi0inFVdis_stack_8->SetBinContent(6,48.95149);
   hNCpi0inFVdis_stack_8->SetBinContent(7,43.32987);
   hNCpi0inFVdis_stack_8->SetBinContent(8,38.78575);
   hNCpi0inFVdis_stack_8->SetBinContent(9,38.13703);
   hNCpi0inFVdis_stack_8->SetBinContent(10,33.43482);
   hNCpi0inFVdis_stack_8->SetBinContent(11,32.97396);
   hNCpi0inFVdis_stack_8->SetBinContent(12,27.68203);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.20954);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.43104);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.31629);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.33818);
   hNCpi0inFVdis_stack_8->SetBinContent(17,8.99987);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.889526);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.433977);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.812501);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.264091);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.013943);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.655763);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.412661);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.174526);
   hNCpi0inFVdis_stack_8->SetBinContent(26,6.191228);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2704367);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.417288);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.990108);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.222641);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.275592);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.859894);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.772551);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.82866);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.869593);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.073041);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.027863);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.662206);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.656738);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.511314);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.301747);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.238458);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.047284);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.534454);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.366722);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8675345);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4927368);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.833731);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7724369);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2892478);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.874871);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1840742);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.3315399);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.319421);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1987008);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1177733);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1348803);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1738851);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1564004);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.05998721);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.07223304);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01830775);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinContent(3,7.02659);
   hCCpi0inFV_stack_10->SetBinContent(4,28.77565);
   hCCpi0inFV_stack_10->SetBinContent(5,50.95897);
   hCCpi0inFV_stack_10->SetBinContent(6,82.13453);
   hCCpi0inFV_stack_10->SetBinContent(7,120.8464);
   hCCpi0inFV_stack_10->SetBinContent(8,123.5018);
   hCCpi0inFV_stack_10->SetBinContent(9,126.8041);
   hCCpi0inFV_stack_10->SetBinContent(10,109.205);
   hCCpi0inFV_stack_10->SetBinContent(11,90.1606);
   hCCpi0inFV_stack_10->SetBinContent(12,75.67754);
   hCCpi0inFV_stack_10->SetBinContent(13,61.11549);
   hCCpi0inFV_stack_10->SetBinContent(14,48.11796);
   hCCpi0inFV_stack_10->SetBinContent(15,40.90823);
   hCCpi0inFV_stack_10->SetBinContent(16,24.51188);
   hCCpi0inFV_stack_10->SetBinContent(17,23.25362);
   hCCpi0inFV_stack_10->SetBinContent(18,18.31772);
   hCCpi0inFV_stack_10->SetBinContent(19,14.44213);
   hCCpi0inFV_stack_10->SetBinContent(20,9.192742);
   hCCpi0inFV_stack_10->SetBinContent(21,6.455024);
   hCCpi0inFV_stack_10->SetBinContent(22,6.313239);
   hCCpi0inFV_stack_10->SetBinContent(23,4.503085);
   hCCpi0inFV_stack_10->SetBinContent(24,4.2402);
   hCCpi0inFV_stack_10->SetBinContent(25,2.445722);
   hCCpi0inFV_stack_10->SetBinContent(26,15.76878);
   hCCpi0inFV_stack_10->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_10->SetBinError(3,1.330999);
   hCCpi0inFV_stack_10->SetBinError(4,2.662168);
   hCCpi0inFV_stack_10->SetBinError(5,3.53062);
   hCCpi0inFV_stack_10->SetBinError(6,4.542767);
   hCCpi0inFV_stack_10->SetBinError(7,5.467162);
   hCCpi0inFV_stack_10->SetBinError(8,5.557014);
   hCCpi0inFV_stack_10->SetBinError(9,5.630874);
   hCCpi0inFV_stack_10->SetBinError(10,5.271461);
   hCCpi0inFV_stack_10->SetBinError(11,4.78294);
   hCCpi0inFV_stack_10->SetBinError(12,4.385949);
   hCCpi0inFV_stack_10->SetBinError(13,3.964951);
   hCCpi0inFV_stack_10->SetBinError(14,3.521452);
   hCCpi0inFV_stack_10->SetBinError(15,3.268963);
   hCCpi0inFV_stack_10->SetBinError(16,2.462016);
   hCCpi0inFV_stack_10->SetBinError(17,2.350056);
   hCCpi0inFV_stack_10->SetBinError(18,2.222042);
   hCCpi0inFV_stack_10->SetBinError(19,1.880307);
   hCCpi0inFV_stack_10->SetBinError(20,1.481492);
   hCCpi0inFV_stack_10->SetBinError(21,1.208742);
   hCCpi0inFV_stack_10->SetBinError(22,1.349715);
   hCCpi0inFV_stack_10->SetBinError(23,1.039253);
   hCCpi0inFV_stack_10->SetBinError(24,1.128276);
   hCCpi0inFV_stack_10->SetBinError(25,0.7600838);
   hCCpi0inFV_stack_10->SetBinError(26,2.029996);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,10.80766);
   hNCinFV_stack_11->SetBinContent(4,28.93909);
   hNCinFV_stack_11->SetBinContent(5,36.42478);
   hNCinFV_stack_11->SetBinContent(6,39.74366);
   hNCinFV_stack_11->SetBinContent(7,51.86057);
   hNCinFV_stack_11->SetBinContent(8,37.69744);
   hNCinFV_stack_11->SetBinContent(9,45.77018);
   hNCinFV_stack_11->SetBinContent(10,41.0932);
   hNCinFV_stack_11->SetBinContent(11,30.55814);
   hNCinFV_stack_11->SetBinContent(12,34.13901);
   hNCinFV_stack_11->SetBinContent(13,25.2132);
   hNCinFV_stack_11->SetBinContent(14,24.03566);
   hNCinFV_stack_11->SetBinContent(15,17.08016);
   hNCinFV_stack_11->SetBinContent(16,17.77172);
   hNCinFV_stack_11->SetBinContent(17,17.97938);
   hNCinFV_stack_11->SetBinContent(18,10.06982);
   hNCinFV_stack_11->SetBinContent(19,9.583258);
   hNCinFV_stack_11->SetBinContent(20,9.594001);
   hNCinFV_stack_11->SetBinContent(21,9.855861);
   hNCinFV_stack_11->SetBinContent(22,4.230042);
   hNCinFV_stack_11->SetBinContent(23,3.249474);
   hNCinFV_stack_11->SetBinContent(24,1.860647);
   hNCinFV_stack_11->SetBinContent(25,0.6803553);
   hNCinFV_stack_11->SetBinContent(26,6.610178);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,1.630868);
   hNCinFV_stack_11->SetBinError(4,2.791656);
   hNCinFV_stack_11->SetBinError(5,3.031797);
   hNCinFV_stack_11->SetBinError(6,3.037563);
   hNCinFV_stack_11->SetBinError(7,3.545749);
   hNCinFV_stack_11->SetBinError(8,2.944214);
   hNCinFV_stack_11->SetBinError(9,3.373979);
   hNCinFV_stack_11->SetBinError(10,3.369786);
   hNCinFV_stack_11->SetBinError(11,2.919689);
   hNCinFV_stack_11->SetBinError(12,3.334693);
   hNCinFV_stack_11->SetBinError(13,2.768306);
   hNCinFV_stack_11->SetBinError(14,2.772946);
   hNCinFV_stack_11->SetBinError(15,2.456512);
   hNCinFV_stack_11->SetBinError(16,2.649368);
   hNCinFV_stack_11->SetBinError(17,2.772841);
   hNCinFV_stack_11->SetBinError(18,2.036411);
   hNCinFV_stack_11->SetBinError(19,2.065985);
   hNCinFV_stack_11->SetBinError(20,2.045654);
   hNCinFV_stack_11->SetBinError(21,2.181106);
   hNCinFV_stack_11->SetBinError(22,1.32286);
   hNCinFV_stack_11->SetBinError(23,1.334733);
   hNCinFV_stack_11->SetBinError(24,0.6808988);
   hNCinFV_stack_11->SetBinError(25,0.4810838);
   hNCinFV_stack_11->SetBinError(26,1.396373);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_12->SetBinContent(3,12.03273);
   hnumuCCinFV_stack_12->SetBinContent(4,50.56837);
   hnumuCCinFV_stack_12->SetBinContent(5,57.82124);
   hnumuCCinFV_stack_12->SetBinContent(6,75.8998);
   hnumuCCinFV_stack_12->SetBinContent(7,63.63838);
   hnumuCCinFV_stack_12->SetBinContent(8,55.76225);
   hnumuCCinFV_stack_12->SetBinContent(9,61.05846);
   hnumuCCinFV_stack_12->SetBinContent(10,48.95607);
   hnumuCCinFV_stack_12->SetBinContent(11,41.68145);
   hnumuCCinFV_stack_12->SetBinContent(12,37.75635);
   hnumuCCinFV_stack_12->SetBinContent(13,28.11687);
   hnumuCCinFV_stack_12->SetBinContent(14,23.76485);
   hnumuCCinFV_stack_12->SetBinContent(15,17.61205);
   hnumuCCinFV_stack_12->SetBinContent(16,12.76175);
   hnumuCCinFV_stack_12->SetBinContent(17,10.53723);
   hnumuCCinFV_stack_12->SetBinContent(18,10.96464);
   hnumuCCinFV_stack_12->SetBinContent(19,9.922403);
   hnumuCCinFV_stack_12->SetBinContent(20,5.142604);
   hnumuCCinFV_stack_12->SetBinContent(21,5.673617);
   hnumuCCinFV_stack_12->SetBinContent(22,3.234274);
   hnumuCCinFV_stack_12->SetBinContent(23,4.195563);
   hnumuCCinFV_stack_12->SetBinContent(24,2.252388);
   hnumuCCinFV_stack_12->SetBinContent(25,1.718483);
   hnumuCCinFV_stack_12->SetBinContent(26,12.38944);
   hnumuCCinFV_stack_12->SetBinError(2,0.300021);
   hnumuCCinFV_stack_12->SetBinError(3,2.373512);
   hnumuCCinFV_stack_12->SetBinError(4,4.6647);
   hnumuCCinFV_stack_12->SetBinError(5,4.881333);
   hnumuCCinFV_stack_12->SetBinError(6,5.150249);
   hnumuCCinFV_stack_12->SetBinError(7,5.115426);
   hnumuCCinFV_stack_12->SetBinError(8,3.991033);
   hnumuCCinFV_stack_12->SetBinError(9,4.36731);
   hnumuCCinFV_stack_12->SetBinError(10,3.746482);
   hnumuCCinFV_stack_12->SetBinError(11,3.518511);
   hnumuCCinFV_stack_12->SetBinError(12,4.017794);
   hnumuCCinFV_stack_12->SetBinError(13,3.022325);
   hnumuCCinFV_stack_12->SetBinError(14,2.712421);
   hnumuCCinFV_stack_12->SetBinError(15,2.136883);
   hnumuCCinFV_stack_12->SetBinError(16,2.112569);
   hnumuCCinFV_stack_12->SetBinError(17,1.623475);
   hnumuCCinFV_stack_12->SetBinError(18,1.715191);
   hnumuCCinFV_stack_12->SetBinError(19,1.603712);
   hnumuCCinFV_stack_12->SetBinError(20,1.103959);
   hnumuCCinFV_stack_12->SetBinError(21,1.170557);
   hnumuCCinFV_stack_12->SetBinError(22,0.8562577);
   hnumuCCinFV_stack_12->SetBinError(23,1.054771);
   hnumuCCinFV_stack_12->SetBinError(24,0.7350883);
   hnumuCCinFV_stack_12->SetBinError(25,0.6829145);
   hnumuCCinFV_stack_12->SetBinError(26,1.805646);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,2.36194);
   hnueCCinFV_stack_13->SetBinContent(4,2.416902);
   hnueCCinFV_stack_13->SetBinContent(5,3.538672);
   hnueCCinFV_stack_13->SetBinContent(6,2.737571);
   hnueCCinFV_stack_13->SetBinContent(7,2.142206);
   hnueCCinFV_stack_13->SetBinContent(8,3.743749);
   hnueCCinFV_stack_13->SetBinContent(9,2.364086);
   hnueCCinFV_stack_13->SetBinContent(10,3.927284);
   hnueCCinFV_stack_13->SetBinContent(11,2.219374);
   hnueCCinFV_stack_13->SetBinContent(12,1.360483);
   hnueCCinFV_stack_13->SetBinContent(13,2.281029);
   hnueCCinFV_stack_13->SetBinContent(14,2.592549);
   hnueCCinFV_stack_13->SetBinContent(15,2.63764);
   hnueCCinFV_stack_13->SetBinContent(16,0.626614);
   hnueCCinFV_stack_13->SetBinContent(17,0.5606949);
   hnueCCinFV_stack_13->SetBinContent(18,0.664443);
   hnueCCinFV_stack_13->SetBinContent(19,1.070405);
   hnueCCinFV_stack_13->SetBinContent(20,0.8615913);
   hnueCCinFV_stack_13->SetBinContent(21,1.833353);
   hnueCCinFV_stack_13->SetBinContent(22,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,1.28754);
   hnueCCinFV_stack_13->SetBinContent(25,1.407399);
   hnueCCinFV_stack_13->SetBinContent(26,9.993159);
   hnueCCinFV_stack_13->SetBinError(3,1.426612);
   hnueCCinFV_stack_13->SetBinError(4,0.9233911);
   hnueCCinFV_stack_13->SetBinError(5,1.069581);
   hnueCCinFV_stack_13->SetBinError(6,0.8996263);
   hnueCCinFV_stack_13->SetBinError(7,0.7277529);
   hnueCCinFV_stack_13->SetBinError(8,1.03683);
   hnueCCinFV_stack_13->SetBinError(9,0.7255553);
   hnueCCinFV_stack_13->SetBinError(10,1.204293);
   hnueCCinFV_stack_13->SetBinError(11,1.231241);
   hnueCCinFV_stack_13->SetBinError(12,0.6573867);
   hnueCCinFV_stack_13->SetBinError(13,1.628081);
   hnueCCinFV_stack_13->SetBinError(14,0.9189347);
   hnueCCinFV_stack_13->SetBinError(15,0.8261956);
   hnueCCinFV_stack_13->SetBinError(16,0.3629991);
   hnueCCinFV_stack_13->SetBinError(17,0.4141923);
   hnueCCinFV_stack_13->SetBinError(18,0.3856058);
   hnueCCinFV_stack_13->SetBinError(19,0.5545368);
   hnueCCinFV_stack_13->SetBinError(20,0.4332246);
   hnueCCinFV_stack_13->SetBinError(21,0.9343934);
   hnueCCinFV_stack_13->SetBinError(22,0.2770047);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.8827597);
   hnueCCinFV_stack_13->SetBinError(25,0.6699353);
   hnueCCinFV_stack_13->SetBinError(26,2.404801);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__2->SetBinContent(2,10.99095);
   hmcerror__2->SetBinContent(3,273.2414);
   hmcerror__2->SetBinContent(4,705.5981);
   hmcerror__2->SetBinContent(5,823.6111);
   hmcerror__2->SetBinContent(6,806.1503);
   hmcerror__2->SetBinContent(7,752.9496);
   hmcerror__2->SetBinContent(8,601.7215);
   hmcerror__2->SetBinContent(9,558.8662);
   hmcerror__2->SetBinContent(10,455.8951);
   hmcerror__2->SetBinContent(11,364.7242);
   hmcerror__2->SetBinContent(12,300.9756);
   hmcerror__2->SetBinContent(13,227.1113);
   hmcerror__2->SetBinContent(14,186.208);
   hmcerror__2->SetBinContent(15,146.83);
   hmcerror__2->SetBinContent(16,110.7903);
   hmcerror__2->SetBinContent(17,89.32776);
   hmcerror__2->SetBinContent(18,72.89382);
   hmcerror__2->SetBinContent(19,64.32422);
   hmcerror__2->SetBinContent(20,44.16346);
   hmcerror__2->SetBinContent(21,37.07734);
   hmcerror__2->SetBinContent(22,26.20965);
   hmcerror__2->SetBinContent(23,20.09316);
   hmcerror__2->SetBinContent(24,16.85783);
   hmcerror__2->SetBinContent(25,12.23865);
   hmcerror__2->SetBinContent(26,70.25237);
   hmcerror__2->SetBinError(1,0.3895343);
   hmcerror__2->SetBinError(2,9.552163);
   hmcerror__2->SetBinError(3,56.86489);
   hmcerror__2->SetBinError(4,189.6785);
   hmcerror__2->SetBinError(5,213.5425);
   hmcerror__2->SetBinError(6,237.609);
   hmcerror__2->SetBinError(7,266.2968);
   hmcerror__2->SetBinError(8,237.1309);
   hmcerror__2->SetBinError(9,199.2375);
   hmcerror__2->SetBinError(10,140.773);
   hmcerror__2->SetBinError(11,101.4849);
   hmcerror__2->SetBinError(12,87.04125);
   hmcerror__2->SetBinError(13,61.17938);
   hmcerror__2->SetBinError(14,57.29039);
   hmcerror__2->SetBinError(15,55.43031);
   hmcerror__2->SetBinError(16,43.98577);
   hmcerror__2->SetBinError(17,33.3738);
   hmcerror__2->SetBinError(18,35.3819);
   hmcerror__2->SetBinError(19,34.17554);
   hmcerror__2->SetBinError(20,21.37355);
   hmcerror__2->SetBinError(21,28.34739);
   hmcerror__2->SetBinError(22,13.75768);
   hmcerror__2->SetBinError(23,15.89622);
   hmcerror__2->SetBinError(24,13.26866);
   hmcerror__2->SetBinError(25,8.390521);
   hmcerror__2->SetBinError(26,28.28088);
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
   
   Double_t _fx3001[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3001[25] = {
   0,
   8,
   317,
   827,
   923,
   869,
   739,
   579,
   561,
   376,
   281,
   232,
   173,
   112,
   88,
   74,
   65,
   52,
   39,
   18,
   24,
   9,
   17,
   6,
   5};
   Double_t _felx3001[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3001[25] = {
   0,
   3.0307,
   17.80449,
   28.75761,
   30.38092,
   29.47881,
   27.18455,
   24.06242,
   23.68544,
   19.39072,
   16.76305,
   15.23155,
   13.15295,
   10.58301,
   9.5036,
   8.7275,
   8.1893,
   7.3419,
   6.3813,
   4.4008,
   5.0476,
   3.19354,
   4.2835,
   2.67925,
   2.48995};
   Double_t _fehx3001[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3001[25] = {
   1.1478,
   2.7896,
   17.80449,
   28.75761,
   30.38092,
   29.47881,
   27.18455,
   24.06242,
   23.68544,
   19.39072,
   16.76305,
   15.23155,
   13.15295,
   10.58301,
   9.3021,
   8.5253,
   7.9866,
   7.1381,
   6.1757,
   4.1858,
   4.837,
   2.9582,
   4.0673,
   2.41858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1980);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1048.719);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6394.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 172.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 741.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 678.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2168.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  467.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1079.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 508.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 641.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 43.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3002[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3002[25] = {
   0,
   0.8690937,
   0.2081123,
   0.2688195,
   0.2592758,
   0.2947453,
   0.3536714,
   0.3940875,
   0.356503,
   0.3087836,
   0.278251,
   0.2891971,
   0.2693806,
   0.3076687,
   0.3775135,
   0.3970182,
   0.3736106,
   0.4853895,
   0.5313013,
   0.4839647,
   0.7645477,
   0.5249088,
   0.791126,
   0.7870922,
   0.6855758};
   Double_t _fehx3002[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3002[25] = {
   0,
   0.8690937,
   0.2081123,
   0.2688195,
   0.2592758,
   0.2947453,
   0.3536714,
   0.3940875,
   0.356503,
   0.3087836,
   0.278251,
   0.2891971,
   0.2693806,
   0.3076687,
   0.3775135,
   0.3970182,
   0.3736106,
   0.4853895,
   0.5313013,
   0.4839647,
   0.7645477,
   0.5249088,
   0.791126,
   0.7870922,
   0.6855758};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1980);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   
   Double_t _fx3003[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3003[25] = {
   0,
   0.2478397,
   0.1557024,
   0.2166321,
   0.2470478,
   0.2859454,
   0.3486386,
   0.3860397,
   0.3480609,
   0.2913706,
   0.2609747,
   0.2393747,
   0.2257383,
   0.2108766,
   0.2434326,
   0.2723457,
   0.2698365,
   0.3044168,
   0.2977391,
   0.3300247,
   0.3464646,
   0.2616078,
   0.343008,
   0.2639841,
   0.2746346};
   Double_t _fehx3003[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3003[25] = {
   0,
   0.2478397,
   0.1557024,
   0.2166321,
   0.2470478,
   0.2859454,
   0.3486386,
   0.3860397,
   0.3480609,
   0.2913706,
   0.2609747,
   0.2393747,
   0.2257383,
   0.2108766,
   0.2434326,
   0.2723457,
   0.2698365,
   0.3044168,
   0.2977391,
   0.3300247,
   0.3464646,
   0.2616078,
   0.343008,
   0.2639841,
   0.2746346};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1980);
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
   
   Double_t _fx3004[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3004[25] = {
   10,
   0.7278717,
   1.160146,
   1.172055,
   1.120675,
   1.077963,
   0.9814733,
   0.9622392,
   1.003818,
   0.8247511,
   0.7704451,
   0.7708267,
   0.761741,
   0.6014778,
   0.5993326,
   0.6679284,
   0.7276573,
   0.7133664,
   0.6063035,
   0.4075768,
   0.6472957,
   0.343385,
   0.846059,
   0.3559178,
   0.4085418};
   Double_t _felx3004[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3004[25] = {
   0,
   0.2757451,
   0.06516031,
   0.04075636,
   0.03688745,
   0.03656738,
   0.03610408,
   0.0399893,
   0.04238123,
   0.04253329,
   0.0459609,
   0.05060725,
   0.0579141,
   0.05683431,
   0.0647252,
   0.07877493,
   0.09167699,
   0.1007205,
   0.09920525,
   0.099648,
   0.1361371,
   0.121846,
   0.213182,
   0.1589321,
   0.2034498};
   Double_t _fehx3004[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3004[25] = {
   0,
   0.2538089,
   0.06516031,
   0.04075636,
   0.03688745,
   0.03656738,
   0.03610408,
   0.0399893,
   0.04238123,
   0.04253329,
   0.0459609,
   0.05060725,
   0.0579141,
   0.05683431,
   0.06335286,
   0.07694986,
   0.08940782,
   0.09792462,
   0.09600894,
   0.09477972,
   0.1304571,
   0.1128668,
   0.2024221,
   0.1434693,
   0.1806278};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1980);
   Graph_Graph3004->SetMinimum(0.1772871);
   Graph_Graph3004->SetMaximum(10.9803);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_nc_transferred_energy_all",25,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
