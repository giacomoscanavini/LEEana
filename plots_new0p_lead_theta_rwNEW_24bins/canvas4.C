#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 16:16:04 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-0.4846154,-10.02,3.553846,1108.001);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__10->SetBinContent(1,131.4628);
   hmc__10->SetBinContent(2,319.2877);
   hmc__10->SetBinContent(3,463.3021);
   hmc__10->SetBinContent(4,494.1295);
   hmc__10->SetBinContent(5,487.5716);
   hmc__10->SetBinContent(6,447.9556);
   hmc__10->SetBinContent(7,392.9423);
   hmc__10->SetBinContent(8,345.5534);
   hmc__10->SetBinContent(9,266.0838);
   hmc__10->SetBinContent(10,227.6106);
   hmc__10->SetBinContent(11,182.323);
   hmc__10->SetBinContent(12,154.9042);
   hmc__10->SetBinContent(13,127.0336);
   hmc__10->SetBinContent(14,107.7085);
   hmc__10->SetBinContent(15,104.9105);
   hmc__10->SetBinContent(16,99.76457);
   hmc__10->SetBinContent(17,87.03318);
   hmc__10->SetBinContent(18,83.94999);
   hmc__10->SetBinContent(19,77.17364);
   hmc__10->SetBinContent(20,76.64022);
   hmc__10->SetBinContent(21,60.46743);
   hmc__10->SetBinContent(22,55.35872);
   hmc__10->SetBinContent(23,31.56532);
   hmc__10->SetBinContent(24,12.5309);
   hmc__10->SetBinError(1,42.21488);
   hmc__10->SetBinError(2,83.05848);
   hmc__10->SetBinError(3,114.3622);
   hmc__10->SetBinError(4,114.1842);
   hmc__10->SetBinError(5,113.3676);
   hmc__10->SetBinError(6,109.9329);
   hmc__10->SetBinError(7,97.18312);
   hmc__10->SetBinError(8,88.96867);
   hmc__10->SetBinError(9,69.90663);
   hmc__10->SetBinError(10,56.37877);
   hmc__10->SetBinError(11,50.31905);
   hmc__10->SetBinError(12,50.95567);
   hmc__10->SetBinError(13,40.74141);
   hmc__10->SetBinError(14,28.93636);
   hmc__10->SetBinError(15,29.36641);
   hmc__10->SetBinError(16,27.4464);
   hmc__10->SetBinError(17,24.65382);
   hmc__10->SetBinError(18,24.19648);
   hmc__10->SetBinError(19,24.44213);
   hmc__10->SetBinError(20,31.38694);
   hmc__10->SetBinError(21,21.75361);
   hmc__10->SetBinError(22,19.23174);
   hmc__10->SetBinError(23,13.65229);
   hmc__10->SetBinError(24,8.507442);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-10.02);
   hmc__10->SetMaximum(1052.1);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,3.15);
   hs4_stack_4->SetMinimum(-8.530416e-09);
   hs4_stack_4->SetMaximum(518.836);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.241576);
   hbadmatch_stack_1->SetBinContent(2,6.597867);
   hbadmatch_stack_1->SetBinContent(3,7.492612);
   hbadmatch_stack_1->SetBinContent(4,9.218587);
   hbadmatch_stack_1->SetBinContent(5,7.85983);
   hbadmatch_stack_1->SetBinContent(6,8.899919);
   hbadmatch_stack_1->SetBinContent(7,9.38563);
   hbadmatch_stack_1->SetBinContent(8,8.848637);
   hbadmatch_stack_1->SetBinContent(9,7.149641);
   hbadmatch_stack_1->SetBinContent(10,6.689891);
   hbadmatch_stack_1->SetBinContent(11,9.111932);
   hbadmatch_stack_1->SetBinContent(12,4.05302);
   hbadmatch_stack_1->SetBinContent(13,5.282635);
   hbadmatch_stack_1->SetBinContent(14,4.047666);
   hbadmatch_stack_1->SetBinContent(15,4.862224);
   hbadmatch_stack_1->SetBinContent(16,3.525708);
   hbadmatch_stack_1->SetBinContent(17,3.443183);
   hbadmatch_stack_1->SetBinContent(18,1.511054);
   hbadmatch_stack_1->SetBinContent(19,2.025751);
   hbadmatch_stack_1->SetBinContent(20,0.9286332);
   hbadmatch_stack_1->SetBinContent(21,2.959748);
   hbadmatch_stack_1->SetBinContent(22,3.005481);
   hbadmatch_stack_1->SetBinContent(23,2.083977);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.153446);
   hbadmatch_stack_1->SetBinError(2,1.654385);
   hbadmatch_stack_1->SetBinError(3,1.433765);
   hbadmatch_stack_1->SetBinError(4,1.50588);
   hbadmatch_stack_1->SetBinError(5,1.428318);
   hbadmatch_stack_1->SetBinError(6,1.542993);
   hbadmatch_stack_1->SetBinError(7,1.680641);
   hbadmatch_stack_1->SetBinError(8,1.552273);
   hbadmatch_stack_1->SetBinError(9,1.384686);
   hbadmatch_stack_1->SetBinError(10,1.483683);
   hbadmatch_stack_1->SetBinError(11,2.459486);
   hbadmatch_stack_1->SetBinError(12,1.019635);
   hbadmatch_stack_1->SetBinError(13,1.935455);
   hbadmatch_stack_1->SetBinError(14,1.040852);
   hbadmatch_stack_1->SetBinError(15,1.169606);
   hbadmatch_stack_1->SetBinError(16,0.9743636);
   hbadmatch_stack_1->SetBinError(17,1.004513);
   hbadmatch_stack_1->SetBinError(18,0.6367088);
   hbadmatch_stack_1->SetBinError(19,0.7413703);
   hbadmatch_stack_1->SetBinError(20,0.48078);
   hbadmatch_stack_1->SetBinError(21,0.8659863);
   hbadmatch_stack_1->SetBinError(22,1.753731);
   hbadmatch_stack_1->SetBinError(23,0.8295815);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,6.475223);
   hext_stack_2->SetBinContent(2,14.11676);
   hext_stack_2->SetBinContent(3,27.15495);
   hext_stack_2->SetBinContent(4,27.94661);
   hext_stack_2->SetBinContent(5,38.72561);
   hext_stack_2->SetBinContent(6,43.28758);
   hext_stack_2->SetBinContent(7,40.88269);
   hext_stack_2->SetBinContent(8,39.87038);
   hext_stack_2->SetBinContent(9,35.46564);
   hext_stack_2->SetBinContent(10,40.5942);
   hext_stack_2->SetBinContent(11,25.68578);
   hext_stack_2->SetBinContent(12,27.68124);
   hext_stack_2->SetBinContent(13,18.71181);
   hext_stack_2->SetBinContent(14,18.22741);
   hext_stack_2->SetBinContent(15,14.35896);
   hext_stack_2->SetBinContent(16,15.68685);
   hext_stack_2->SetBinContent(17,12.57257);
   hext_stack_2->SetBinContent(18,9.309826);
   hext_stack_2->SetBinContent(19,7.119609);
   hext_stack_2->SetBinContent(20,7.862194);
   hext_stack_2->SetBinContent(21,3.889996);
   hext_stack_2->SetBinContent(22,3.875635);
   hext_stack_2->SetBinContent(23,3.248382);
   hext_stack_2->SetBinContent(24,1.055394);
   hext_stack_2->SetBinError(1,1.72584);
   hext_stack_2->SetBinError(2,2.36392);
   hext_stack_2->SetBinError(3,3.306449);
   hext_stack_2->SetBinError(4,3.44483);
   hext_stack_2->SetBinError(5,4.050756);
   hext_stack_2->SetBinError(6,4.252771);
   hext_stack_2->SetBinError(7,4.269227);
   hext_stack_2->SetBinError(8,4.07962);
   hext_stack_2->SetBinError(9,3.90989);
   hext_stack_2->SetBinError(10,4.137035);
   hext_stack_2->SetBinError(11,3.254641);
   hext_stack_2->SetBinError(12,3.457436);
   hext_stack_2->SetBinError(13,2.815365);
   hext_stack_2->SetBinError(14,2.799284);
   hext_stack_2->SetBinError(15,2.373449);
   hext_stack_2->SetBinError(16,2.655419);
   hext_stack_2->SetBinError(17,2.23314);
   hext_stack_2->SetBinError(18,2.049844);
   hext_stack_2->SetBinError(19,1.747532);
   hext_stack_2->SetBinError(20,1.805088);
   hext_stack_2->SetBinError(21,1.264566);
   hext_stack_2->SetBinError(22,1.414755);
   hext_stack_2->SetBinError(23,1.089706);
   hext_stack_2->SetBinError(24,0.6130171);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.6097389);
   hdirt_stack_3->SetBinContent(2,2.326315);
   hdirt_stack_3->SetBinContent(3,4.179468);
   hdirt_stack_3->SetBinContent(4,6.05139);
   hdirt_stack_3->SetBinContent(5,3.721457);
   hdirt_stack_3->SetBinContent(6,6.137296);
   hdirt_stack_3->SetBinContent(7,6.811456);
   hdirt_stack_3->SetBinContent(8,3.385408);
   hdirt_stack_3->SetBinContent(9,5.056361);
   hdirt_stack_3->SetBinContent(10,2.813823);
   hdirt_stack_3->SetBinContent(11,2.060122);
   hdirt_stack_3->SetBinContent(12,1.885785);
   hdirt_stack_3->SetBinContent(13,1.179335);
   hdirt_stack_3->SetBinContent(14,3.097276);
   hdirt_stack_3->SetBinContent(15,2.187526);
   hdirt_stack_3->SetBinContent(16,1.973601);
   hdirt_stack_3->SetBinContent(17,1.809474);
   hdirt_stack_3->SetBinContent(18,2.516591);
   hdirt_stack_3->SetBinContent(19,1.79831);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.8987204);
   hdirt_stack_3->SetBinContent(22,0.9857053);
   hdirt_stack_3->SetBinContent(23,0.9712972);
   hdirt_stack_3->SetBinContent(24,0.3381872);
   hdirt_stack_3->SetBinError(1,0.3899956);
   hdirt_stack_3->SetBinError(2,0.7745098);
   hdirt_stack_3->SetBinError(3,1.100777);
   hdirt_stack_3->SetBinError(4,1.41063);
   hdirt_stack_3->SetBinError(5,0.902511);
   hdirt_stack_3->SetBinError(6,1.280533);
   hdirt_stack_3->SetBinError(7,1.696983);
   hdirt_stack_3->SetBinError(8,0.8785616);
   hdirt_stack_3->SetBinError(9,1.148438);
   hdirt_stack_3->SetBinError(10,0.8100939);
   hdirt_stack_3->SetBinError(11,0.8126252);
   hdirt_stack_3->SetBinError(12,0.6967722);
   hdirt_stack_3->SetBinError(13,0.6106535);
   hdirt_stack_3->SetBinError(14,1.226348);
   hdirt_stack_3->SetBinError(15,0.752768);
   hdirt_stack_3->SetBinError(16,0.7264944);
   hdirt_stack_3->SetBinError(17,0.6896495);
   hdirt_stack_3->SetBinError(18,0.8505187);
   hdirt_stack_3->SetBinError(19,1.043161);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.4906494);
   hdirt_stack_3->SetBinError(22,0.4729306);
   hdirt_stack_3->SetBinError(23,0.4684838);
   hdirt_stack_3->SetBinError(24,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,10.0508);
   houtFV_stack_4->SetBinContent(2,25.16204);
   houtFV_stack_4->SetBinContent(3,45.02022);
   houtFV_stack_4->SetBinContent(4,52.39049);
   houtFV_stack_4->SetBinContent(5,54.55934);
   houtFV_stack_4->SetBinContent(6,56.73498);
   houtFV_stack_4->SetBinContent(7,49.41721);
   houtFV_stack_4->SetBinContent(8,45.17764);
   houtFV_stack_4->SetBinContent(9,32.24282);
   houtFV_stack_4->SetBinContent(10,29.29511);
   houtFV_stack_4->SetBinContent(11,24.01083);
   houtFV_stack_4->SetBinContent(12,23.03166);
   houtFV_stack_4->SetBinContent(13,14.09976);
   houtFV_stack_4->SetBinContent(14,14.6475);
   houtFV_stack_4->SetBinContent(15,14.55495);
   houtFV_stack_4->SetBinContent(16,15.92008);
   houtFV_stack_4->SetBinContent(17,15.71463);
   houtFV_stack_4->SetBinContent(18,12.45872);
   houtFV_stack_4->SetBinContent(19,12.38499);
   houtFV_stack_4->SetBinContent(20,14.27236);
   houtFV_stack_4->SetBinContent(21,12.12635);
   houtFV_stack_4->SetBinContent(22,8.994112);
   houtFV_stack_4->SetBinContent(23,2.982615);
   houtFV_stack_4->SetBinContent(24,2.002419);
   houtFV_stack_4->SetBinError(1,1.613403);
   houtFV_stack_4->SetBinError(2,2.552785);
   houtFV_stack_4->SetBinError(3,3.39136);
   houtFV_stack_4->SetBinError(4,3.646589);
   houtFV_stack_4->SetBinError(5,3.668427);
   houtFV_stack_4->SetBinError(6,3.82528);
   houtFV_stack_4->SetBinError(7,3.544949);
   houtFV_stack_4->SetBinError(8,3.493485);
   houtFV_stack_4->SetBinError(9,2.770095);
   houtFV_stack_4->SetBinError(10,2.769397);
   houtFV_stack_4->SetBinError(11,2.422504);
   houtFV_stack_4->SetBinError(12,2.432537);
   houtFV_stack_4->SetBinError(13,1.887323);
   houtFV_stack_4->SetBinError(14,1.875068);
   houtFV_stack_4->SetBinError(15,1.919068);
   houtFV_stack_4->SetBinError(16,2.299124);
   houtFV_stack_4->SetBinError(17,2.023019);
   houtFV_stack_4->SetBinError(18,1.733152);
   houtFV_stack_4->SetBinError(19,1.665032);
   houtFV_stack_4->SetBinError(20,1.819171);
   houtFV_stack_4->SetBinError(21,1.857857);
   houtFV_stack_4->SetBinError(22,1.51485);
   houtFV_stack_4->SetBinError(23,0.8556548);
   houtFV_stack_4->SetBinError(24,0.7348366);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.675356);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,20.45427);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,22.3098);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.12502);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.66664);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.649858);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.700346);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.17488);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.714862);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.296858);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.7808721);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.002576);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7662537);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.702245);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.9346539);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.9847111);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.480752);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.579222);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.34949);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.043465);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8407963);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7859676);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4819022);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4611286);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3933343);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3174996);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3182135);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2040719);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5074733);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3135935);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2051824);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9489359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.993862);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.728144);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.590308);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.31114);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.158022);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3032882);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.469493);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3927561);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4346236);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3851684);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3705767);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1994106);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,39.5466);
   hNCpi0inFVres_stack_7->SetBinContent(2,104.321);
   hNCpi0inFVres_stack_7->SetBinContent(3,154.2034);
   hNCpi0inFVres_stack_7->SetBinContent(4,178.5895);
   hNCpi0inFVres_stack_7->SetBinContent(5,189.0527);
   hNCpi0inFVres_stack_7->SetBinContent(6,170.6155);
   hNCpi0inFVres_stack_7->SetBinContent(7,146.719);
   hNCpi0inFVres_stack_7->SetBinContent(8,134.3799);
   hNCpi0inFVres_stack_7->SetBinContent(9,93.18451);
   hNCpi0inFVres_stack_7->SetBinContent(10,75.78018);
   hNCpi0inFVres_stack_7->SetBinContent(11,63.14159);
   hNCpi0inFVres_stack_7->SetBinContent(12,51.92477);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.38207);
   hNCpi0inFVres_stack_7->SetBinContent(14,33.35241);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.61894);
   hNCpi0inFVres_stack_7->SetBinContent(16,32.25833);
   hNCpi0inFVres_stack_7->SetBinContent(17,27.63014);
   hNCpi0inFVres_stack_7->SetBinContent(18,28.07284);
   hNCpi0inFVres_stack_7->SetBinContent(19,25.50453);
   hNCpi0inFVres_stack_7->SetBinContent(20,24.69626);
   hNCpi0inFVres_stack_7->SetBinContent(21,17.3469);
   hNCpi0inFVres_stack_7->SetBinContent(22,15.35037);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.022038);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.264316);
   hNCpi0inFVres_stack_7->SetBinError(1,2.120251);
   hNCpi0inFVres_stack_7->SetBinError(2,3.322737);
   hNCpi0inFVres_stack_7->SetBinError(3,4.030572);
   hNCpi0inFVres_stack_7->SetBinError(4,4.38307);
   hNCpi0inFVres_stack_7->SetBinError(5,4.551141);
   hNCpi0inFVres_stack_7->SetBinError(6,4.295294);
   hNCpi0inFVres_stack_7->SetBinError(7,3.931054);
   hNCpi0inFVres_stack_7->SetBinError(8,3.838271);
   hNCpi0inFVres_stack_7->SetBinError(9,3.062308);
   hNCpi0inFVres_stack_7->SetBinError(10,2.813697);
   hNCpi0inFVres_stack_7->SetBinError(11,2.537874);
   hNCpi0inFVres_stack_7->SetBinError(12,2.361214);
   hNCpi0inFVres_stack_7->SetBinError(13,2.23058);
   hNCpi0inFVres_stack_7->SetBinError(14,1.841187);
   hNCpi0inFVres_stack_7->SetBinError(15,1.747741);
   hNCpi0inFVres_stack_7->SetBinError(16,1.826614);
   hNCpi0inFVres_stack_7->SetBinError(17,1.712659);
   hNCpi0inFVres_stack_7->SetBinError(18,1.788593);
   hNCpi0inFVres_stack_7->SetBinError(19,1.683039);
   hNCpi0inFVres_stack_7->SetBinError(20,1.682056);
   hNCpi0inFVres_stack_7->SetBinError(21,1.36174);
   hNCpi0inFVres_stack_7->SetBinError(22,1.242318);
   hNCpi0inFVres_stack_7->SetBinError(23,1.024045);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6165473);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.31142);
   hNCpi0inFVdis_stack_8->SetBinContent(2,27.73503);
   hNCpi0inFVdis_stack_8->SetBinContent(3,41.06366);
   hNCpi0inFVdis_stack_8->SetBinContent(4,42.84294);
   hNCpi0inFVdis_stack_8->SetBinContent(5,37.15912);
   hNCpi0inFVdis_stack_8->SetBinContent(6,32.56142);
   hNCpi0inFVdis_stack_8->SetBinContent(7,28.69394);
   hNCpi0inFVdis_stack_8->SetBinContent(8,18.84767);
   hNCpi0inFVdis_stack_8->SetBinContent(9,17.69881);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.79527);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.39088);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.61898);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.108132);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.032809);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.616909);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.682727);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.139178);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.056974);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.203379);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.055805);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.854792);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.526538);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.10563);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.142917);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.699741);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.121398);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.112235);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.954229);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.841698);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.770512);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.327217);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.407351);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.104353);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.081112);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9853373);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8028293);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6764007);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9838224);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.634436);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6429173);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6455857);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8068597);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5761917);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7757495);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5800632);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5062571);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.07381642);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,23.9584);
   hCCpi0inFV_stack_10->SetBinContent(2,57.22347);
   hCCpi0inFV_stack_10->SetBinContent(3,82.64864);
   hCCpi0inFV_stack_10->SetBinContent(4,83.45008);
   hCCpi0inFV_stack_10->SetBinContent(5,70.50725);
   hCCpi0inFV_stack_10->SetBinContent(6,62.44724);
   hCCpi0inFV_stack_10->SetBinContent(7,59.89111);
   hCCpi0inFV_stack_10->SetBinContent(8,49.67249);
   hCCpi0inFV_stack_10->SetBinContent(9,36.24018);
   hCCpi0inFV_stack_10->SetBinContent(10,32.21711);
   hCCpi0inFV_stack_10->SetBinContent(11,22.78041);
   hCCpi0inFV_stack_10->SetBinContent(12,16.50165);
   hCCpi0inFV_stack_10->SetBinContent(13,15.52552);
   hCCpi0inFV_stack_10->SetBinContent(14,14.45926);
   hCCpi0inFV_stack_10->SetBinContent(15,16.15978);
   hCCpi0inFV_stack_10->SetBinContent(16,13.70895);
   hCCpi0inFV_stack_10->SetBinContent(17,10.60332);
   hCCpi0inFV_stack_10->SetBinContent(18,12.16678);
   hCCpi0inFV_stack_10->SetBinContent(19,11.49891);
   hCCpi0inFV_stack_10->SetBinContent(20,10.87405);
   hCCpi0inFV_stack_10->SetBinContent(21,6.652348);
   hCCpi0inFV_stack_10->SetBinContent(22,9.195045);
   hCCpi0inFV_stack_10->SetBinContent(23,6.155183);
   hCCpi0inFV_stack_10->SetBinContent(24,3.425918);
   hCCpi0inFV_stack_10->SetBinError(1,2.457059);
   hCCpi0inFV_stack_10->SetBinError(2,3.76015);
   hCCpi0inFV_stack_10->SetBinError(3,4.585161);
   hCCpi0inFV_stack_10->SetBinError(4,4.633946);
   hCCpi0inFV_stack_10->SetBinError(5,4.163058);
   hCCpi0inFV_stack_10->SetBinError(6,3.993543);
   hCCpi0inFV_stack_10->SetBinError(7,3.873772);
   hCCpi0inFV_stack_10->SetBinError(8,3.582293);
   hCCpi0inFV_stack_10->SetBinError(9,3.075226);
   hCCpi0inFV_stack_10->SetBinError(10,2.791644);
   hCCpi0inFV_stack_10->SetBinError(11,2.338892);
   hCCpi0inFV_stack_10->SetBinError(12,2.043439);
   hCCpi0inFV_stack_10->SetBinError(13,1.910336);
   hCCpi0inFV_stack_10->SetBinError(14,1.990834);
   hCCpi0inFV_stack_10->SetBinError(15,1.98049);
   hCCpi0inFV_stack_10->SetBinError(16,1.833978);
   hCCpi0inFV_stack_10->SetBinError(17,1.618039);
   hCCpi0inFV_stack_10->SetBinError(18,1.669006);
   hCCpi0inFV_stack_10->SetBinError(19,1.666545);
   hCCpi0inFV_stack_10->SetBinError(20,1.658294);
   hCCpi0inFV_stack_10->SetBinError(21,1.303219);
   hCCpi0inFV_stack_10->SetBinError(22,1.522559);
   hCCpi0inFV_stack_10->SetBinError(23,1.224883);
   hCCpi0inFV_stack_10->SetBinError(24,0.8774323);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.80004);
   hNCinFV_stack_11->SetBinContent(2,29.72062);
   hNCinFV_stack_11->SetBinContent(3,36.215);
   hNCinFV_stack_11->SetBinContent(4,38.69937);
   hNCinFV_stack_11->SetBinContent(5,37.50737);
   hNCinFV_stack_11->SetBinContent(6,27.67449);
   hNCinFV_stack_11->SetBinContent(7,18.18431);
   hNCinFV_stack_11->SetBinContent(8,16.61734);
   hNCinFV_stack_11->SetBinContent(9,14.45963);
   hNCinFV_stack_11->SetBinContent(10,10.51819);
   hNCinFV_stack_11->SetBinContent(11,9.371469);
   hNCinFV_stack_11->SetBinContent(12,8.802692);
   hNCinFV_stack_11->SetBinContent(13,8.786395);
   hNCinFV_stack_11->SetBinContent(14,4.69811);
   hNCinFV_stack_11->SetBinContent(15,5.625052);
   hNCinFV_stack_11->SetBinContent(16,4.347789);
   hNCinFV_stack_11->SetBinContent(17,4.249735);
   hNCinFV_stack_11->SetBinContent(18,5.770205);
   hNCinFV_stack_11->SetBinContent(19,4.159526);
   hNCinFV_stack_11->SetBinContent(20,5.326902);
   hNCinFV_stack_11->SetBinContent(21,4.831889);
   hNCinFV_stack_11->SetBinContent(22,3.080668);
   hNCinFV_stack_11->SetBinContent(23,2.357203);
   hNCinFV_stack_11->SetBinContent(24,0.9286332);
   hNCinFV_stack_11->SetBinError(1,1.629953);
   hNCinFV_stack_11->SetBinError(2,2.816819);
   hNCinFV_stack_11->SetBinError(3,3.00236);
   hNCinFV_stack_11->SetBinError(4,3.121895);
   hNCinFV_stack_11->SetBinError(5,3.061303);
   hNCinFV_stack_11->SetBinError(6,2.690382);
   hNCinFV_stack_11->SetBinError(7,2.132506);
   hNCinFV_stack_11->SetBinError(8,2.059285);
   hNCinFV_stack_11->SetBinError(9,1.902369);
   hNCinFV_stack_11->SetBinError(10,1.58262);
   hNCinFV_stack_11->SetBinError(11,1.557196);
   hNCinFV_stack_11->SetBinError(12,1.455592);
   hNCinFV_stack_11->SetBinError(13,1.520116);
   hNCinFV_stack_11->SetBinError(14,1.057394);
   hNCinFV_stack_11->SetBinError(15,1.161279);
   hNCinFV_stack_11->SetBinError(16,0.9991936);
   hNCinFV_stack_11->SetBinError(17,1.038438);
   hNCinFV_stack_11->SetBinError(18,1.194259);
   hNCinFV_stack_11->SetBinError(19,0.9813267);
   hNCinFV_stack_11->SetBinError(20,1.178352);
   hNCinFV_stack_11->SetBinError(21,1.110996);
   hNCinFV_stack_11->SetBinError(22,0.8075766);
   hNCinFV_stack_11->SetBinError(23,0.6804695);
   hNCinFV_stack_11->SetBinError(24,0.48078);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,10.73263);
   hnumuCCinFV_stack_12->SetBinContent(2,21.73816);
   hnumuCCinFV_stack_12->SetBinContent(3,37.54399);
   hnumuCCinFV_stack_12->SetBinContent(4,34.44639);
   hnumuCCinFV_stack_12->SetBinContent(5,33.74025);
   hnumuCCinFV_stack_12->SetBinContent(6,29.06021);
   hnumuCCinFV_stack_12->SetBinContent(7,24.83701);
   hnumuCCinFV_stack_12->SetBinContent(8,24.55244);
   hnumuCCinFV_stack_12->SetBinContent(9,20.00637);
   hnumuCCinFV_stack_12->SetBinContent(10,15.01253);
   hnumuCCinFV_stack_12->SetBinContent(11,13.54828);
   hnumuCCinFV_stack_12->SetBinContent(12,11.34947);
   hnumuCCinFV_stack_12->SetBinContent(13,12.11429);
   hnumuCCinFV_stack_12->SetBinContent(14,8.726295);
   hnumuCCinFV_stack_12->SetBinContent(15,6.892801);
   hnumuCCinFV_stack_12->SetBinContent(16,6.790082);
   hnumuCCinFV_stack_12->SetBinContent(17,6.10821);
   hnumuCCinFV_stack_12->SetBinContent(18,6.029867);
   hnumuCCinFV_stack_12->SetBinContent(19,5.384953);
   hnumuCCinFV_stack_12->SetBinContent(20,5.206622);
   hnumuCCinFV_stack_12->SetBinContent(21,5.155561);
   hnumuCCinFV_stack_12->SetBinContent(22,4.479157);
   hnumuCCinFV_stack_12->SetBinContent(23,1.50762);
   hnumuCCinFV_stack_12->SetBinContent(24,0.789052);
   hnumuCCinFV_stack_12->SetBinError(1,1.990813);
   hnumuCCinFV_stack_12->SetBinError(2,2.377761);
   hnumuCCinFV_stack_12->SetBinError(3,3.736434);
   hnumuCCinFV_stack_12->SetBinError(4,3.546306);
   hnumuCCinFV_stack_12->SetBinError(5,3.58059);
   hnumuCCinFV_stack_12->SetBinError(6,2.778919);
   hnumuCCinFV_stack_12->SetBinError(7,2.883557);
   hnumuCCinFV_stack_12->SetBinError(8,3.111235);
   hnumuCCinFV_stack_12->SetBinError(9,2.45763);
   hnumuCCinFV_stack_12->SetBinError(10,2.348239);
   hnumuCCinFV_stack_12->SetBinError(11,1.994413);
   hnumuCCinFV_stack_12->SetBinError(12,1.836197);
   hnumuCCinFV_stack_12->SetBinError(13,2.070666);
   hnumuCCinFV_stack_12->SetBinError(14,2.100473);
   hnumuCCinFV_stack_12->SetBinError(15,1.336472);
   hnumuCCinFV_stack_12->SetBinError(16,1.482746);
   hnumuCCinFV_stack_12->SetBinError(17,1.306111);
   hnumuCCinFV_stack_12->SetBinError(18,1.570838);
   hnumuCCinFV_stack_12->SetBinError(19,1.224231);
   hnumuCCinFV_stack_12->SetBinError(20,1.170004);
   hnumuCCinFV_stack_12->SetBinError(21,1.175615);
   hnumuCCinFV_stack_12->SetBinError(22,1.167586);
   hnumuCCinFV_stack_12->SetBinError(23,0.5731881);
   hnumuCCinFV_stack_12->SetBinError(24,0.4429319);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,4.005213);
   hnueCCinFV_stack_13->SetBinContent(2,8.998869);
   hnueCCinFV_stack_13->SetBinContent(3,4.437691);
   hnueCCinFV_stack_13->SetBinContent(4,1.375327);
   hnueCCinFV_stack_13->SetBinContent(5,2.288089);
   hnueCCinFV_stack_13->SetBinContent(6,2.240955);
   hnueCCinFV_stack_13->SetBinContent(7,2.108451);
   hnueCCinFV_stack_13->SetBinContent(8,0.8406637);
   hnueCCinFV_stack_13->SetBinContent(9,2.37692);
   hnueCCinFV_stack_13->SetBinContent(10,1.528176);
   hnueCCinFV_stack_13->SetBinContent(11,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(12,0.4418423);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,0.8343332);
   hnueCCinFV_stack_13->SetBinContent(15,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(19,1.075993);
   hnueCCinFV_stack_13->SetBinContent(20,1.635953);
   hnueCCinFV_stack_13->SetBinContent(21,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(22,0.9124936);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.203526);
   hnueCCinFV_stack_13->SetBinError(2,2.458754);
   hnueCCinFV_stack_13->SetBinError(3,1.218577);
   hnueCCinFV_stack_13->SetBinError(4,0.5198233);
   hnueCCinFV_stack_13->SetBinError(5,0.750381);
   hnueCCinFV_stack_13->SetBinError(6,0.9493908);
   hnueCCinFV_stack_13->SetBinError(7,0.8025596);
   hnueCCinFV_stack_13->SetBinError(8,0.423337);
   hnueCCinFV_stack_13->SetBinError(9,1.367485);
   hnueCCinFV_stack_13->SetBinError(10,0.7280383);
   hnueCCinFV_stack_13->SetBinError(11,0.4139598);
   hnueCCinFV_stack_13->SetBinError(12,0.3142995);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.4958181);
   hnueCCinFV_stack_13->SetBinError(15,0.3387718);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.3025491);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(19,1.075993);
   hnueCCinFV_stack_13->SetBinError(20,0.6942983);
   hnueCCinFV_stack_13->SetBinError(21,0.4394482);
   hnueCCinFV_stack_13->SetBinError(22,0.5898438);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__11->SetBinContent(1,131.4628);
   hmcerror__11->SetBinContent(2,319.2877);
   hmcerror__11->SetBinContent(3,463.3021);
   hmcerror__11->SetBinContent(4,494.1295);
   hmcerror__11->SetBinContent(5,487.5716);
   hmcerror__11->SetBinContent(6,447.9556);
   hmcerror__11->SetBinContent(7,392.9423);
   hmcerror__11->SetBinContent(8,345.5534);
   hmcerror__11->SetBinContent(9,266.0838);
   hmcerror__11->SetBinContent(10,227.6106);
   hmcerror__11->SetBinContent(11,182.323);
   hmcerror__11->SetBinContent(12,154.9042);
   hmcerror__11->SetBinContent(13,127.0336);
   hmcerror__11->SetBinContent(14,107.7085);
   hmcerror__11->SetBinContent(15,104.9105);
   hmcerror__11->SetBinContent(16,99.76457);
   hmcerror__11->SetBinContent(17,87.03318);
   hmcerror__11->SetBinContent(18,83.94999);
   hmcerror__11->SetBinContent(19,77.17364);
   hmcerror__11->SetBinContent(20,76.64022);
   hmcerror__11->SetBinContent(21,60.46743);
   hmcerror__11->SetBinContent(22,55.35872);
   hmcerror__11->SetBinContent(23,31.56532);
   hmcerror__11->SetBinContent(24,12.5309);
   hmcerror__11->SetBinError(1,42.21488);
   hmcerror__11->SetBinError(2,83.05848);
   hmcerror__11->SetBinError(3,114.3622);
   hmcerror__11->SetBinError(4,114.1842);
   hmcerror__11->SetBinError(5,113.3676);
   hmcerror__11->SetBinError(6,109.9329);
   hmcerror__11->SetBinError(7,97.18312);
   hmcerror__11->SetBinError(8,88.96867);
   hmcerror__11->SetBinError(9,69.90663);
   hmcerror__11->SetBinError(10,56.37877);
   hmcerror__11->SetBinError(11,50.31905);
   hmcerror__11->SetBinError(12,50.95567);
   hmcerror__11->SetBinError(13,40.74141);
   hmcerror__11->SetBinError(14,28.93636);
   hmcerror__11->SetBinError(15,29.36641);
   hmcerror__11->SetBinError(16,27.4464);
   hmcerror__11->SetBinError(17,24.65382);
   hmcerror__11->SetBinError(18,24.19648);
   hmcerror__11->SetBinError(19,24.44213);
   hmcerror__11->SetBinError(20,31.38694);
   hmcerror__11->SetBinError(21,21.75361);
   hmcerror__11->SetBinError(22,19.23174);
   hmcerror__11->SetBinError(23,13.65229);
   hmcerror__11->SetBinError(24,8.507442);
   hmcerror__11->SetBinError(25,0.3895343);
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
   Double_t _fy3013[24] = {
   110,
   279,
   463,
   476,
   501,
   420,
   359,
   300,
   248,
   195,
   166,
   130,
   151,
   90,
   113,
   111,
   77,
   89,
   84,
   78,
   68,
   45,
   30,
   12};
   Double_t _felx3013[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3013[24] = {
   10.48809,
   16.70329,
   21.51743,
   21.81742,
   22.38303,
   20.4939,
   18.9473,
   17.32051,
   15.74802,
   13.96424,
   12.8841,
   11.40175,
   12.28821,
   9.6093,
   10.63015,
   10.53565,
   8.8995,
   9.5566,
   9.2886,
   8.9562,
   8.3726,
   6.8416,
   5.6197,
   3.64022};
   Double_t _fehx3013[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3013[24] = {
   10.48809,
   16.70329,
   21.51743,
   21.81742,
   22.38303,
   20.4939,
   18.9473,
   17.32051,
   15.74802,
   13.96424,
   12.8841,
   11.40175,
   12.28821,
   9.4079,
   10.63015,
   10.53565,
   8.6976,
   9.3552,
   9.0869,
   8.7542,
   8.1701,
   6.637,
   5.4117,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(7.523802);
   Graph_Graph3013->SetMaximum(574.8854);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4595.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 483.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 587.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1694.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  342.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 728.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3014[24] = {
   0.3211166,
   0.2601368,
   0.2468416,
   0.2310816,
   0.2325148,
   0.2454104,
   0.2473216,
   0.2574672,
   0.2627241,
   0.2476983,
   0.2759885,
   0.3289495,
   0.3207136,
   0.2686544,
   0.2799188,
   0.2751117,
   0.2832692,
   0.2882249,
   0.316716,
   0.4095362,
   0.3597575,
   0.3474021,
   0.4325091,
   0.6789169};
   Double_t _fehx3014[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3014[24] = {
   0.3211166,
   0.2601368,
   0.2468416,
   0.2310816,
   0.2325148,
   0.2454104,
   0.2473216,
   0.2574672,
   0.2627241,
   0.2476983,
   0.2759885,
   0.3289495,
   0.3207136,
   0.2686544,
   0.2799188,
   0.2751117,
   0.2832692,
   0.2882249,
   0.316716,
   0.4095362,
   0.3597575,
   0.3474021,
   0.4325091,
   0.6789169};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,3.465);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3015[24] = {
   0.2387913,
   0.2282869,
   0.2171563,
   0.2126565,
   0.2155179,
   0.2230424,
   0.2298446,
   0.2317586,
   0.2357296,
   0.2168276,
   0.222062,
   0.2083593,
   0.2016639,
   0.2080823,
   0.2186186,
   0.1999406,
   0.1953836,
   0.215108,
   0.2083428,
   0.2074853,
   0.2187048,
   0.2231913,
   0.2138686,
   0.2679361};
   Double_t _fehx3015[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3015[24] = {
   0.2387913,
   0.2282869,
   0.2171563,
   0.2126565,
   0.2155179,
   0.2230424,
   0.2298446,
   0.2317586,
   0.2357296,
   0.2168276,
   0.222062,
   0.2083593,
   0.2016639,
   0.2080823,
   0.2186186,
   0.1999406,
   0.1953836,
   0.215108,
   0.2083428,
   0.2074853,
   0.2187048,
   0.2231913,
   0.2138686,
   0.2679361};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,3.465);
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
   Double_t _fy3016[24] = {
   0.8367386,
   0.87382,
   0.999348,
   0.9633102,
   1.027541,
   0.937593,
   0.9136201,
   0.8681726,
   0.9320371,
   0.8567264,
   0.910472,
   0.8392282,
   1.188662,
   0.8355887,
   1.077109,
   1.112619,
   0.8847201,
   1.060155,
   1.088455,
   1.017742,
   1.124572,
   0.8128801,
   0.9504103,
   0.9576326};
   Double_t _felx3016[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3016[24] = {
   0.0797799,
   0.05231424,
   0.04644364,
   0.04415325,
   0.04590716,
   0.04574985,
   0.04821902,
   0.05012397,
   0.05918441,
   0.06135145,
   0.07066633,
   0.07360518,
   0.09673191,
   0.08921581,
   0.1013259,
   0.1056052,
   0.1022541,
   0.1138368,
   0.1203598,
   0.1168603,
   0.1384646,
   0.1235867,
   0.178034,
   0.2904994};
   Double_t _fehx3016[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3016[24] = {
   0.0797799,
   0.05231424,
   0.04644364,
   0.04415325,
   0.04590716,
   0.04574985,
   0.04821902,
   0.05012397,
   0.05918441,
   0.06135145,
   0.07066633,
   0.07360518,
   0.09673191,
   0.08734595,
   0.1013259,
   0.1056052,
   0.0999343,
   0.1114378,
   0.1177462,
   0.1142246,
   0.1351157,
   0.1198908,
   0.1714445,
   0.2725662};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.6053071);
   Graph_Graph3016->SetMaximum(1.34722);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
