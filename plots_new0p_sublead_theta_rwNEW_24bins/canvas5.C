#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Thu Mar  9 17:15:00 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-3.327352,3.553846,367.935);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__13->SetBinContent(1,19.86206);
   hmc__13->SetBinContent(2,62.84058);
   hmc__13->SetBinContent(3,95.31284);
   hmc__13->SetBinContent(4,133.9742);
   hmc__13->SetBinContent(5,143.2449);
   hmc__13->SetBinContent(6,151.1482);
   hmc__13->SetBinContent(7,146.8365);
   hmc__13->SetBinContent(8,164.6365);
   hmc__13->SetBinContent(9,159.7169);
   hmc__13->SetBinContent(10,157.9289);
   hmc__13->SetBinContent(11,166.3676);
   hmc__13->SetBinContent(12,147.2287);
   hmc__13->SetBinContent(13,128.7574);
   hmc__13->SetBinContent(14,118.4384);
   hmc__13->SetBinContent(15,121.5586);
   hmc__13->SetBinContent(16,105.9352);
   hmc__13->SetBinContent(17,94.91882);
   hmc__13->SetBinContent(18,83.68545);
   hmc__13->SetBinContent(19,78.38977);
   hmc__13->SetBinContent(20,75.96589);
   hmc__13->SetBinContent(21,58.34544);
   hmc__13->SetBinContent(22,46.78293);
   hmc__13->SetBinContent(23,26.43581);
   hmc__13->SetBinContent(24,8.730711);
   hmc__13->SetBinError(1,9.156371);
   hmc__13->SetBinError(2,24.07205);
   hmc__13->SetBinError(3,36.70204);
   hmc__13->SetBinError(4,45.92688);
   hmc__13->SetBinError(5,51.6766);
   hmc__13->SetBinError(6,59.46559);
   hmc__13->SetBinError(7,60.22196);
   hmc__13->SetBinError(8,63.49486);
   hmc__13->SetBinError(9,61.75042);
   hmc__13->SetBinError(10,61.15211);
   hmc__13->SetBinError(11,60.33894);
   hmc__13->SetBinError(12,58.90883);
   hmc__13->SetBinError(13,50.41689);
   hmc__13->SetBinError(14,42.80133);
   hmc__13->SetBinError(15,43.67586);
   hmc__13->SetBinError(16,41.22792);
   hmc__13->SetBinError(17,37.03413);
   hmc__13->SetBinError(18,31.83178);
   hmc__13->SetBinError(19,28.39111);
   hmc__13->SetBinError(20,28.40803);
   hmc__13->SetBinError(21,24.88108);
   hmc__13->SetBinError(22,17.21837);
   hmc__13->SetBinError(23,15.22304);
   hmc__13->SetBinError(24,6.066636);
   hmc__13->SetBinError(25,0.3895343);
   hmc__13->SetMinimum(-3.327352);
   hmc__13->SetMaximum(349.3719);
   hmc__13->SetEntries(2462.59);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",24,0,3.15);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(174.686);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.3401776);
   hbadmatch_stack_1->SetBinContent(3,0.8073083);
   hbadmatch_stack_1->SetBinContent(4,2.431867);
   hbadmatch_stack_1->SetBinContent(5,1.381167);
   hbadmatch_stack_1->SetBinContent(6,3.079866);
   hbadmatch_stack_1->SetBinContent(7,2.3002);
   hbadmatch_stack_1->SetBinContent(8,4.242326);
   hbadmatch_stack_1->SetBinContent(9,4.578159);
   hbadmatch_stack_1->SetBinContent(10,5.065971);
   hbadmatch_stack_1->SetBinContent(11,6.51426);
   hbadmatch_stack_1->SetBinContent(12,3.668);
   hbadmatch_stack_1->SetBinContent(13,1.660555);
   hbadmatch_stack_1->SetBinContent(14,2.895902);
   hbadmatch_stack_1->SetBinContent(15,4.033872);
   hbadmatch_stack_1->SetBinContent(16,2.60182);
   hbadmatch_stack_1->SetBinContent(17,1.643695);
   hbadmatch_stack_1->SetBinContent(18,1.518803);
   hbadmatch_stack_1->SetBinContent(19,2.423505);
   hbadmatch_stack_1->SetBinContent(20,2.736028);
   hbadmatch_stack_1->SetBinContent(21,1.861403);
   hbadmatch_stack_1->SetBinContent(22,1.125349);
   hbadmatch_stack_1->SetBinContent(23,1.004567);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.3401776);
   hbadmatch_stack_1->SetBinError(3,0.404135);
   hbadmatch_stack_1->SetBinError(4,0.7954398);
   hbadmatch_stack_1->SetBinError(5,0.5776302);
   hbadmatch_stack_1->SetBinError(6,0.9221419);
   hbadmatch_stack_1->SetBinError(7,0.7494125);
   hbadmatch_stack_1->SetBinError(8,1.029247);
   hbadmatch_stack_1->SetBinError(9,1.153628);
   hbadmatch_stack_1->SetBinError(10,1.54419);
   hbadmatch_stack_1->SetBinError(11,1.366388);
   hbadmatch_stack_1->SetBinError(12,0.9448922);
   hbadmatch_stack_1->SetBinError(13,0.650847);
   hbadmatch_stack_1->SetBinError(14,0.9850359);
   hbadmatch_stack_1->SetBinError(15,1.146989);
   hbadmatch_stack_1->SetBinError(16,0.8615377);
   hbadmatch_stack_1->SetBinError(17,0.6381168);
   hbadmatch_stack_1->SetBinError(18,0.5892709);
   hbadmatch_stack_1->SetBinError(19,0.793239);
   hbadmatch_stack_1->SetBinError(20,0.8562123);
   hbadmatch_stack_1->SetBinError(21,0.7253386);
   hbadmatch_stack_1->SetBinError(22,0.5194673);
   hbadmatch_stack_1->SetBinError(23,0.4497336);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,4.188443);
   hext_stack_2->SetBinContent(3,5.180405);
   hext_stack_2->SetBinContent(4,6.870233);
   hext_stack_2->SetBinContent(5,6.33677);
   hext_stack_2->SetBinContent(6,5.930171);
   hext_stack_2->SetBinContent(7,3.882816);
   hext_stack_2->SetBinContent(8,8.839795);
   hext_stack_2->SetBinContent(9,7.291193);
   hext_stack_2->SetBinContent(10,7.944396);
   hext_stack_2->SetBinContent(11,9.401979);
   hext_stack_2->SetBinContent(12,9.782627);
   hext_stack_2->SetBinContent(13,7.126789);
   hext_stack_2->SetBinContent(14,8.264384);
   hext_stack_2->SetBinContent(15,3.965017);
   hext_stack_2->SetBinContent(16,7.056177);
   hext_stack_2->SetBinContent(17,5.751408);
   hext_stack_2->SetBinContent(18,5.109793);
   hext_stack_2->SetBinContent(19,5.020411);
   hext_stack_2->SetBinContent(20,2.834603);
   hext_stack_2->SetBinContent(21,4.595042);
   hext_stack_2->SetBinContent(22,3.469036);
   hext_stack_2->SetBinContent(23,1.37261);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.474057);
   hext_stack_2->SetBinError(3,1.49039);
   hext_stack_2->SetBinError(4,1.791626);
   hext_stack_2->SetBinError(5,1.545918);
   hext_stack_2->SetBinError(6,1.491489);
   hext_stack_2->SetBinError(7,1.341763);
   hext_stack_2->SetBinError(8,1.92592);
   hext_stack_2->SetBinError(9,1.724194);
   hext_stack_2->SetBinError(10,1.821657);
   hext_stack_2->SetBinError(11,1.929876);
   hext_stack_2->SetBinError(12,2.087637);
   hext_stack_2->SetBinError(13,1.688984);
   hext_stack_2->SetBinError(14,1.813434);
   hext_stack_2->SetBinError(15,1.363971);
   hext_stack_2->SetBinError(16,1.651211);
   hext_stack_2->SetBinError(17,1.583276);
   hext_stack_2->SetBinError(18,1.447444);
   hext_stack_2->SetBinError(19,1.495396);
   hext_stack_2->SetBinError(20,1.106046);
   hext_stack_2->SetBinError(21,1.529106);
   hext_stack_2->SetBinError(22,1.355067);
   hext_stack_2->SetBinError(23,0.8259691);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetEntries(327);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(2,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.8527125);
   hdirt_stack_3->SetBinContent(6,0.3790882);
   hdirt_stack_3->SetBinContent(7,0.8361943);
   hdirt_stack_3->SetBinContent(8,0.6975058);
   hdirt_stack_3->SetBinContent(9,0.7618795);
   hdirt_stack_3->SetBinContent(10,0.3569671);
   hdirt_stack_3->SetBinContent(11,0.481239);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(14,1.060553);
   hdirt_stack_3->SetBinContent(15,0.402661);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.9995059);
   hdirt_stack_3->SetBinContent(18,0.3569671);
   hdirt_stack_3->SetBinContent(19,0.9411583);
   hdirt_stack_3->SetBinContent(20,0.4247338);
   hdirt_stack_3->SetBinContent(23,0.2761429);
   hdirt_stack_3->SetBinError(2,0.258803);
   hdirt_stack_3->SetBinError(5,0.5176777);
   hdirt_stack_3->SetBinError(6,0.2712507);
   hdirt_stack_3->SetBinError(7,0.4300959);
   hdirt_stack_3->SetBinError(8,0.4258581);
   hdirt_stack_3->SetBinError(9,0.480555);
   hdirt_stack_3->SetBinError(10,0.258803);
   hdirt_stack_3->SetBinError(11,0.3416714);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(14,0.5513393);
   hdirt_stack_3->SetBinError(15,0.2961962);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.58556);
   hdirt_stack_3->SetBinError(18,0.258803);
   hdirt_stack_3->SetBinError(19,0.4873249);
   hdirt_stack_3->SetBinError(20,0.4247338);
   hdirt_stack_3->SetBinError(23,0.1952625);
   hdirt_stack_3->SetEntries(44);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,1.660551);
   houtFV_stack_4->SetBinContent(2,3.08405);
   houtFV_stack_4->SetBinContent(3,4.831429);
   houtFV_stack_4->SetBinContent(4,8.062726);
   houtFV_stack_4->SetBinContent(5,8.586561);
   houtFV_stack_4->SetBinContent(6,7.479796);
   houtFV_stack_4->SetBinContent(7,6.750401);
   houtFV_stack_4->SetBinContent(8,6.75721);
   houtFV_stack_4->SetBinContent(9,8.779249);
   houtFV_stack_4->SetBinContent(10,5.921768);
   houtFV_stack_4->SetBinContent(11,8.366341);
   houtFV_stack_4->SetBinContent(12,4.652701);
   houtFV_stack_4->SetBinContent(13,8.410598);
   houtFV_stack_4->SetBinContent(14,4.602829);
   houtFV_stack_4->SetBinContent(15,7.177325);
   houtFV_stack_4->SetBinContent(16,5.300979);
   houtFV_stack_4->SetBinContent(17,5.152594);
   houtFV_stack_4->SetBinContent(18,6.642267);
   houtFV_stack_4->SetBinContent(19,4.841759);
   houtFV_stack_4->SetBinContent(20,6.001208);
   houtFV_stack_4->SetBinContent(21,3.056199);
   houtFV_stack_4->SetBinContent(22,3.519508);
   houtFV_stack_4->SetBinContent(23,3.697692);
   houtFV_stack_4->SetBinContent(24,1.644412);
   houtFV_stack_4->SetBinError(1,0.650847);
   houtFV_stack_4->SetBinError(2,0.8083962);
   houtFV_stack_4->SetBinError(3,1.09139);
   houtFV_stack_4->SetBinError(4,1.458334);
   houtFV_stack_4->SetBinError(5,1.512459);
   houtFV_stack_4->SetBinError(6,1.445518);
   houtFV_stack_4->SetBinError(7,1.27217);
   houtFV_stack_4->SetBinError(8,1.256377);
   houtFV_stack_4->SetBinError(9,1.473105);
   houtFV_stack_4->SetBinError(10,1.200782);
   houtFV_stack_4->SetBinError(11,1.52471);
   houtFV_stack_4->SetBinError(12,0.9803536);
   houtFV_stack_4->SetBinError(13,1.454359);
   houtFV_stack_4->SetBinError(14,1.000372);
   houtFV_stack_4->SetBinError(15,1.342387);
   houtFV_stack_4->SetBinError(16,1.14068);
   houtFV_stack_4->SetBinError(17,1.148);
   houtFV_stack_4->SetBinError(18,1.348413);
   houtFV_stack_4->SetBinError(19,1.066434);
   houtFV_stack_4->SetBinError(20,1.216348);
   houtFV_stack_4->SetBinError(21,0.8380841);
   houtFV_stack_4->SetBinError(22,0.9415746);
   houtFV_stack_4->SetBinError(23,1.033416);
   houtFV_stack_4->SetBinError(24,0.6911314);
   houtFV_stack_4->SetEntries(584);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3477539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1731161);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1974492);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.073658);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7670858);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6697679);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6131358);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.172304);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.241058);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.00424);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.385337);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2468026);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2268055);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1749792);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3618977);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3913503);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3738879);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.088049);
   hNCpi0inFVres_stack_7->SetBinContent(2,24.22295);
   hNCpi0inFVres_stack_7->SetBinContent(3,39.40492);
   hNCpi0inFVres_stack_7->SetBinContent(4,53.05639);
   hNCpi0inFVres_stack_7->SetBinContent(5,61.44717);
   hNCpi0inFVres_stack_7->SetBinContent(6,67.43659);
   hNCpi0inFVres_stack_7->SetBinContent(7,69.28428);
   hNCpi0inFVres_stack_7->SetBinContent(8,72.55359);
   hNCpi0inFVres_stack_7->SetBinContent(9,70.93987);
   hNCpi0inFVres_stack_7->SetBinContent(10,70.75369);
   hNCpi0inFVres_stack_7->SetBinContent(11,68.69916);
   hNCpi0inFVres_stack_7->SetBinContent(12,65.5686);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.58538);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.27624);
   hNCpi0inFVres_stack_7->SetBinContent(15,52.10995);
   hNCpi0inFVres_stack_7->SetBinContent(16,45.96527);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.30422);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.58818);
   hNCpi0inFVres_stack_7->SetBinContent(19,34.09094);
   hNCpi0inFVres_stack_7->SetBinContent(20,29.83983);
   hNCpi0inFVres_stack_7->SetBinContent(21,23.54353);
   hNCpi0inFVres_stack_7->SetBinContent(22,13.92763);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.8895);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.843348);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9679017);
   hNCpi0inFVres_stack_7->SetBinError(2,1.650326);
   hNCpi0inFVres_stack_7->SetBinError(3,2.051886);
   hNCpi0inFVres_stack_7->SetBinError(4,2.391161);
   hNCpi0inFVres_stack_7->SetBinError(5,2.562561);
   hNCpi0inFVres_stack_7->SetBinError(6,2.758882);
   hNCpi0inFVres_stack_7->SetBinError(7,2.717495);
   hNCpi0inFVres_stack_7->SetBinError(8,2.807224);
   hNCpi0inFVres_stack_7->SetBinError(9,2.776355);
   hNCpi0inFVres_stack_7->SetBinError(10,2.74736);
   hNCpi0inFVres_stack_7->SetBinError(11,2.701112);
   hNCpi0inFVres_stack_7->SetBinError(12,2.66434);
   hNCpi0inFVres_stack_7->SetBinError(13,2.35512);
   hNCpi0inFVres_stack_7->SetBinError(14,2.242168);
   hNCpi0inFVres_stack_7->SetBinError(15,2.384002);
   hNCpi0inFVres_stack_7->SetBinError(16,2.203987);
   hNCpi0inFVres_stack_7->SetBinError(17,2.121566);
   hNCpi0inFVres_stack_7->SetBinError(18,2.017888);
   hNCpi0inFVres_stack_7->SetBinError(19,1.899506);
   hNCpi0inFVres_stack_7->SetBinError(20,1.768092);
   hNCpi0inFVres_stack_7->SetBinError(21,1.536857);
   hNCpi0inFVres_stack_7->SetBinError(22,1.179782);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8361156);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5869655);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.358562);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.243887);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.743366);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.95388);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.71306);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.90919);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.16478);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.60421);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.90861);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.97188);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.01748);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.95876);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.16461);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.20263);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.52091);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.62603);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.450645);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.088385);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.587242);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.915913);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.986892);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.010384);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.448976);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5437177);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5784404);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6799876);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.980751);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.201872);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.105908);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.117027);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.212752);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.163589);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.142236);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.029004);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.148184);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.072376);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.05241);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.002825);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9927808);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9017723);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6947566);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.001175);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6814173);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9157634);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6492929);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4998085);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3372156);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1480721);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,3.165182);
   hCCpi0inFV_stack_10->SetBinContent(2,9.576927);
   hCCpi0inFV_stack_10->SetBinContent(3,14.55693);
   hCCpi0inFV_stack_10->SetBinContent(4,20.23926);
   hCCpi0inFV_stack_10->SetBinContent(5,21.29102);
   hCCpi0inFV_stack_10->SetBinContent(6,23.77592);
   hCCpi0inFV_stack_10->SetBinContent(7,20.30532);
   hCCpi0inFV_stack_10->SetBinContent(8,25.28159);
   hCCpi0inFV_stack_10->SetBinContent(9,25.86436);
   hCCpi0inFV_stack_10->SetBinContent(10,24.83431);
   hCCpi0inFV_stack_10->SetBinContent(11,23.7471);
   hCCpi0inFV_stack_10->SetBinContent(12,15.55687);
   hCCpi0inFV_stack_10->SetBinContent(13,16.44891);
   hCCpi0inFV_stack_10->SetBinContent(14,19.18302);
   hCCpi0inFV_stack_10->SetBinContent(15,16.66936);
   hCCpi0inFV_stack_10->SetBinContent(16,14.68752);
   hCCpi0inFV_stack_10->SetBinContent(17,16.23427);
   hCCpi0inFV_stack_10->SetBinContent(18,12.20838);
   hCCpi0inFV_stack_10->SetBinContent(19,12.26084);
   hCCpi0inFV_stack_10->SetBinContent(20,10.14533);
   hCCpi0inFV_stack_10->SetBinContent(21,7.562515);
   hCCpi0inFV_stack_10->SetBinContent(22,7.862833);
   hCCpi0inFV_stack_10->SetBinContent(23,4.380724);
   hCCpi0inFV_stack_10->SetBinContent(24,1.215558);
   hCCpi0inFV_stack_10->SetBinError(1,0.9087488);
   hCCpi0inFV_stack_10->SetBinError(2,1.570209);
   hCCpi0inFV_stack_10->SetBinError(3,1.918034);
   hCCpi0inFV_stack_10->SetBinError(4,2.256524);
   hCCpi0inFV_stack_10->SetBinError(5,2.368646);
   hCCpi0inFV_stack_10->SetBinError(6,2.413861);
   hCCpi0inFV_stack_10->SetBinError(7,2.284847);
   hCCpi0inFV_stack_10->SetBinError(8,2.507527);
   hCCpi0inFV_stack_10->SetBinError(9,2.557255);
   hCCpi0inFV_stack_10->SetBinError(10,2.595486);
   hCCpi0inFV_stack_10->SetBinError(11,2.447956);
   hCCpi0inFV_stack_10->SetBinError(12,1.913695);
   hCCpi0inFV_stack_10->SetBinError(13,2.003961);
   hCCpi0inFV_stack_10->SetBinError(14,2.198527);
   hCCpi0inFV_stack_10->SetBinError(15,2.031176);
   hCCpi0inFV_stack_10->SetBinError(16,1.902847);
   hCCpi0inFV_stack_10->SetBinError(17,2.028589);
   hCCpi0inFV_stack_10->SetBinError(18,1.772232);
   hCCpi0inFV_stack_10->SetBinError(19,1.806326);
   hCCpi0inFV_stack_10->SetBinError(20,1.560952);
   hCCpi0inFV_stack_10->SetBinError(21,1.335818);
   hCCpi0inFV_stack_10->SetBinError(22,1.442772);
   hCCpi0inFV_stack_10->SetBinError(23,1.141948);
   hCCpi0inFV_stack_10->SetBinError(24,0.6206425);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,1.463836);
   hNCinFV_stack_11->SetBinContent(2,6.202282);
   hNCinFV_stack_11->SetBinContent(3,10.20989);
   hNCinFV_stack_11->SetBinContent(4,12.36254);
   hNCinFV_stack_11->SetBinContent(5,11.57676);
   hNCinFV_stack_11->SetBinContent(6,11.62386);
   hNCinFV_stack_11->SetBinContent(7,11.39188);
   hNCinFV_stack_11->SetBinContent(8,13.6846);
   hNCinFV_stack_11->SetBinContent(9,9.956544);
   hNCinFV_stack_11->SetBinContent(10,12.55925);
   hNCinFV_stack_11->SetBinContent(11,11.2803);
   hNCinFV_stack_11->SetBinContent(12,11.43221);
   hNCinFV_stack_11->SetBinContent(13,10.80342);
   hNCinFV_stack_11->SetBinContent(14,8.600905);
   hNCinFV_stack_11->SetBinContent(15,9.624819);
   hNCinFV_stack_11->SetBinContent(16,8.144686);
   hNCinFV_stack_11->SetBinContent(17,7.756327);
   hNCinFV_stack_11->SetBinContent(18,6.9342);
   hNCinFV_stack_11->SetBinContent(19,5.765134);
   hNCinFV_stack_11->SetBinContent(20,5.718642);
   hNCinFV_stack_11->SetBinContent(21,5.619981);
   hNCinFV_stack_11->SetBinContent(22,4.253116);
   hNCinFV_stack_11->SetBinContent(23,1.802323);
   hNCinFV_stack_11->SetBinContent(24,0.5901461);
   hNCinFV_stack_11->SetBinError(1,0.620407);
   hNCinFV_stack_11->SetBinError(2,1.287629);
   hNCinFV_stack_11->SetBinError(3,1.593944);
   hNCinFV_stack_11->SetBinError(4,1.777727);
   hNCinFV_stack_11->SetBinError(5,1.675578);
   hNCinFV_stack_11->SetBinError(6,1.721979);
   hNCinFV_stack_11->SetBinError(7,1.665383);
   hNCinFV_stack_11->SetBinError(8,1.862487);
   hNCinFV_stack_11->SetBinError(9,1.593412);
   hNCinFV_stack_11->SetBinError(10,1.788578);
   hNCinFV_stack_11->SetBinError(11,1.687651);
   hNCinFV_stack_11->SetBinError(12,1.711287);
   hNCinFV_stack_11->SetBinError(13,1.630359);
   hNCinFV_stack_11->SetBinError(14,1.44155);
   hNCinFV_stack_11->SetBinError(15,1.557739);
   hNCinFV_stack_11->SetBinError(16,1.494541);
   hNCinFV_stack_11->SetBinError(17,1.469097);
   hNCinFV_stack_11->SetBinError(18,1.360309);
   hNCinFV_stack_11->SetBinError(19,1.193427);
   hNCinFV_stack_11->SetBinError(20,1.210473);
   hNCinFV_stack_11->SetBinError(21,1.160423);
   hNCinFV_stack_11->SetBinError(22,1.039075);
   hNCinFV_stack_11->SetBinError(23,0.7070809);
   hNCinFV_stack_11->SetBinError(24,0.340721);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,1.708101);
   hnumuCCinFV_stack_12->SetBinContent(2,8.405406);
   hnumuCCinFV_stack_12->SetBinContent(3,10.07725);
   hnumuCCinFV_stack_12->SetBinContent(4,16.33955);
   hnumuCCinFV_stack_12->SetBinContent(5,18.73353);
   hnumuCCinFV_stack_12->SetBinContent(6,17.45215);
   hnumuCCinFV_stack_12->SetBinContent(7,16.61832);
   hnumuCCinFV_stack_12->SetBinContent(8,18.8541);
   hnumuCCinFV_stack_12->SetBinContent(9,17.21164);
   hnumuCCinFV_stack_12->SetBinContent(10,17.18866);
   hnumuCCinFV_stack_12->SetBinContent(11,24.39303);
   hnumuCCinFV_stack_12->SetBinContent(12,24.34364);
   hnumuCCinFV_stack_12->SetBinContent(13,17.89646);
   hnumuCCinFV_stack_12->SetBinContent(14,12.7414);
   hnumuCCinFV_stack_12->SetBinContent(15,16.77187);
   hnumuCCinFV_stack_12->SetBinContent(16,13.67025);
   hnumuCCinFV_stack_12->SetBinContent(17,8.973694);
   hnumuCCinFV_stack_12->SetBinContent(18,5.917957);
   hnumuCCinFV_stack_12->SetBinContent(19,7.807558);
   hnumuCCinFV_stack_12->SetBinContent(20,9.851507);
   hnumuCCinFV_stack_12->SetBinContent(21,7.366914);
   hnumuCCinFV_stack_12->SetBinContent(22,9.057177);
   hnumuCCinFV_stack_12->SetBinContent(23,5.338661);
   hnumuCCinFV_stack_12->SetBinContent(24,1.290215);
   hnumuCCinFV_stack_12->SetBinError(1,0.6667735);
   hnumuCCinFV_stack_12->SetBinError(2,1.571775);
   hnumuCCinFV_stack_12->SetBinError(3,1.912808);
   hnumuCCinFV_stack_12->SetBinError(4,2.363032);
   hnumuCCinFV_stack_12->SetBinError(5,2.853207);
   hnumuCCinFV_stack_12->SetBinError(6,3.301626);
   hnumuCCinFV_stack_12->SetBinError(7,2.105599);
   hnumuCCinFV_stack_12->SetBinError(8,2.300739);
   hnumuCCinFV_stack_12->SetBinError(9,2.394661);
   hnumuCCinFV_stack_12->SetBinError(10,2.287548);
   hnumuCCinFV_stack_12->SetBinError(11,2.920271);
   hnumuCCinFV_stack_12->SetBinError(12,2.907766);
   hnumuCCinFV_stack_12->SetBinError(13,2.495345);
   hnumuCCinFV_stack_12->SetBinError(14,2.02879);
   hnumuCCinFV_stack_12->SetBinError(15,2.493218);
   hnumuCCinFV_stack_12->SetBinError(16,2.011446);
   hnumuCCinFV_stack_12->SetBinError(17,1.826229);
   hnumuCCinFV_stack_12->SetBinError(18,1.284578);
   hnumuCCinFV_stack_12->SetBinError(19,1.482979);
   hnumuCCinFV_stack_12->SetBinError(20,1.727577);
   hnumuCCinFV_stack_12->SetBinError(21,1.467034);
   hnumuCCinFV_stack_12->SetBinError(22,1.873232);
   hnumuCCinFV_stack_12->SetBinError(23,1.284519);
   hnumuCCinFV_stack_12->SetBinError(24,0.6188349);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.6152073);
   hnueCCinFV_stack_13->SetBinContent(2,1.364368);
   hnueCCinFV_stack_13->SetBinContent(3,0.9710591);
   hnueCCinFV_stack_13->SetBinContent(4,1.751811);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,1.119817);
   hnueCCinFV_stack_13->SetBinContent(7,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,1.718857);
   hnueCCinFV_stack_13->SetBinContent(11,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(13,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,1.27568);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,2.164385);
   hnueCCinFV_stack_13->SetBinContent(19,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(20,0.4938565);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.3555413);
   hnueCCinFV_stack_13->SetBinError(2,0.5678847);
   hnueCCinFV_stack_13->SetBinError(3,0.5823682);
   hnueCCinFV_stack_13->SetBinError(4,0.742778);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.5790761);
   hnueCCinFV_stack_13->SetBinError(7,0.3921167);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.7153079);
   hnueCCinFV_stack_13->SetBinError(11,0.1967157);
   hnueCCinFV_stack_13->SetBinError(13,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.5803126);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,1.678565);
   hnueCCinFV_stack_13->SetBinError(19,0.2476759);
   hnueCCinFV_stack_13->SetBinError(20,0.3492179);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__14->SetBinContent(1,19.86206);
   hmcerror__14->SetBinContent(2,62.84058);
   hmcerror__14->SetBinContent(3,95.31284);
   hmcerror__14->SetBinContent(4,133.9742);
   hmcerror__14->SetBinContent(5,143.2449);
   hmcerror__14->SetBinContent(6,151.1482);
   hmcerror__14->SetBinContent(7,146.8365);
   hmcerror__14->SetBinContent(8,164.6365);
   hmcerror__14->SetBinContent(9,159.7169);
   hmcerror__14->SetBinContent(10,157.9289);
   hmcerror__14->SetBinContent(11,166.3676);
   hmcerror__14->SetBinContent(12,147.2287);
   hmcerror__14->SetBinContent(13,128.7574);
   hmcerror__14->SetBinContent(14,118.4384);
   hmcerror__14->SetBinContent(15,121.5586);
   hmcerror__14->SetBinContent(16,105.9352);
   hmcerror__14->SetBinContent(17,94.91882);
   hmcerror__14->SetBinContent(18,83.68545);
   hmcerror__14->SetBinContent(19,78.38977);
   hmcerror__14->SetBinContent(20,75.96589);
   hmcerror__14->SetBinContent(21,58.34544);
   hmcerror__14->SetBinContent(22,46.78293);
   hmcerror__14->SetBinContent(23,26.43581);
   hmcerror__14->SetBinContent(24,8.730711);
   hmcerror__14->SetBinError(1,9.156371);
   hmcerror__14->SetBinError(2,24.07205);
   hmcerror__14->SetBinError(3,36.70204);
   hmcerror__14->SetBinError(4,45.92688);
   hmcerror__14->SetBinError(5,51.6766);
   hmcerror__14->SetBinError(6,59.46559);
   hmcerror__14->SetBinError(7,60.22196);
   hmcerror__14->SetBinError(8,63.49486);
   hmcerror__14->SetBinError(9,61.75042);
   hmcerror__14->SetBinError(10,61.15211);
   hmcerror__14->SetBinError(11,60.33894);
   hmcerror__14->SetBinError(12,58.90883);
   hmcerror__14->SetBinError(13,50.41689);
   hmcerror__14->SetBinError(14,42.80133);
   hmcerror__14->SetBinError(15,43.67586);
   hmcerror__14->SetBinError(16,41.22792);
   hmcerror__14->SetBinError(17,37.03413);
   hmcerror__14->SetBinError(18,31.83178);
   hmcerror__14->SetBinError(19,28.39111);
   hmcerror__14->SetBinError(20,28.40803);
   hmcerror__14->SetBinError(21,24.88108);
   hmcerror__14->SetBinError(22,17.21837);
   hmcerror__14->SetBinError(23,15.22304);
   hmcerror__14->SetBinError(24,6.066636);
   hmcerror__14->SetBinError(25,0.3895343);
   hmcerror__14->SetEntries(2462.59);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[24] = {
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
   Double_t _fy3017[24] = {
   13,
   50,
   85,
   91,
   100,
   114,
   115,
   103,
   95,
   119,
   101,
   123,
   93,
   93,
   101,
   80,
   62,
   70,
   63,
   59,
   50,
   40,
   23,
   6};
   Double_t _felx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3017[24] = {
   3.77763,
   7.2025,
   9.3428,
   9.6617,
   10.1212,
   10.67708,
   10.72381,
   10.14889,
   9.8686,
   10.90871,
   10.04988,
   11.09054,
   9.7658,
   9.7658,
   10.04988,
   9.0683,
   8.0018,
   8.4925,
   8.0648,
   7.8097,
   7.2025,
   6.4604,
   4.9457,
   2.67925};
   Double_t _fehx3017[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3017[24] = {
   3.5552,
   6.9985,
   9.1411,
   9.46,
   9.92,
   10.67708,
   10.72381,
   10.14889,
   9.667,
   10.90871,
   10.04988,
   11.09054,
   9.564,
   9.564,
   10.04988,
   8.8665,
   7.7989,
   8.2902,
   7.862,
   7.6066,
   6.9985,
   6.2549,
   4.7346,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(2.988675);
   Graph_Graph3017->SetMaximum(147.1675);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[24] = {
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
   Double_t _fy3018[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3018[24] = {
   0.460998,
   0.3830653,
   0.3850692,
   0.342804,
   0.3607569,
   0.3934258,
   0.4101295,
   0.3856671,
   0.3866242,
   0.3872129,
   0.3626845,
   0.4001178,
   0.3915649,
   0.3613806,
   0.3592989,
   0.3891805,
   0.3901664,
   0.3803742,
   0.3621787,
   0.3739577,
   0.4264442,
   0.3680481,
   0.5758492,
   0.6948617};
   Double_t _fehx3018[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3018[24] = {
   0.460998,
   0.3830653,
   0.3850692,
   0.342804,
   0.3607569,
   0.3934258,
   0.4101295,
   0.3856671,
   0.3866242,
   0.3872129,
   0.3626845,
   0.4001178,
   0.3915649,
   0.3613806,
   0.3592989,
   0.3891805,
   0.3901664,
   0.3803742,
   0.3621787,
   0.3739577,
   0.4264442,
   0.3680481,
   0.5758492,
   0.6948617};
   grae = new TGraphAsymmErrors(24,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[24] = {
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
   Double_t _fy3019[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3019[24] = {
   0.324556,
   0.3178035,
   0.3312825,
   0.3095082,
   0.3268054,
   0.3510195,
   0.3734063,
   0.3513447,
   0.3479383,
   0.3562199,
   0.333142,
   0.3473716,
   0.3550488,
   0.3260347,
   0.3317283,
   0.3402358,
   0.3273722,
   0.3314363,
   0.3128265,
   0.3068968,
   0.2965852,
   0.2876906,
   0.2743695,
   0.3511116};
   Double_t _fehx3019[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3019[24] = {
   0.324556,
   0.3178035,
   0.3312825,
   0.3095082,
   0.3268054,
   0.3510195,
   0.3734063,
   0.3513447,
   0.3479383,
   0.3562199,
   0.333142,
   0.3473716,
   0.3550488,
   0.3260347,
   0.3317283,
   0.3402358,
   0.3273722,
   0.3314363,
   0.3128265,
   0.3068968,
   0.2965852,
   0.2876906,
   0.2743695,
   0.3511116};
   grae = new TGraphAsymmErrors(24,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[24] = {
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
   Double_t _fy3020[24] = {
   0.654514,
   0.7956642,
   0.8918001,
   0.6792353,
   0.698105,
   0.7542268,
   0.7831842,
   0.6256208,
   0.5948024,
   0.7535037,
   0.6070894,
   0.8354349,
   0.7222884,
   0.7852186,
   0.8308752,
   0.7551786,
   0.6531897,
   0.8364656,
   0.8036763,
   0.7766644,
   0.8569649,
   0.8550127,
   0.8700319,
   0.6872293};
   Double_t _felx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fely3020[24] = {
   0.1901932,
   0.1146154,
   0.09802247,
   0.07211613,
   0.0706566,
   0.07063981,
   0.0730323,
   0.06164425,
   0.06178807,
   0.06907357,
   0.06040765,
   0.07532862,
   0.0758465,
   0.08245471,
   0.08267517,
   0.08560233,
   0.08430151,
   0.1014812,
   0.1028808,
   0.1028054,
   0.1234458,
   0.1380931,
   0.1870833,
   0.3068765};
   Double_t _fehx3020[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
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
   Double_t _fehy3020[24] = {
   0.1789945,
   0.1113691,
   0.09590629,
   0.07061062,
   0.06925201,
   0.07063981,
   0.0730323,
   0.06164425,
   0.06052584,
   0.06907357,
   0.06040765,
   0.07532862,
   0.07427921,
   0.08075087,
   0.08267517,
   0.08369739,
   0.08216389,
   0.09906382,
   0.1002937,
   0.1001318,
   0.1199494,
   0.1337005,
   0.179098,
   0.2770198};
   grae = new TGraphAsymmErrors(24,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.313475);
   Graph_Graph3020->SetMaximum(1.116008);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_theta_low_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
